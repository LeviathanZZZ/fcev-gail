################
#MATLAB控制#
import math
import torch
import torch.nn as nn
import matlab.engine
import torch.nn.functional as F
import numpy as np
import gym
from tqdm import tqdm
import torch as th
from torch.distributions import Normal
from matplotlib import pyplot as plt
import os
from torch.utils.tensorboard import SummaryWriter
import random
from collections import deque
import typing as typ
import multiprocessing as mp

state_number = 2
action_number = 1
max_action = 30
min_action = 0
torch.manual_seed(8)
RENDER = False
EP_MAX = 1000
EP_LEN = 1369
# GAMMA = 0.9
# actor_lr = 2e-4
# critic_lr = 1e-4
# num_episodes = 10000
# hidden_dim = 256
# gamma = 0.995
# lambda_ = 0.995
# epochs = 10
# eps = 0.2
##########Swith=0:训练PPO2，1：测试PPO2，2：训练GAIL，3：测试GAIL
Switch = 0

class policyNet(nn.Module):
    """
    continuity action:
    normal distribution (mean, std)
    """

    def __init__(self, state_dim: int, hidden_layers_dim: typ.List, action_dim: int):
        super(policyNet, self).__init__()
        self.features = nn.ModuleList()
        for idx, h in enumerate(hidden_layers_dim):
            self.features.append(nn.ModuleDict({
                'linear': nn.Linear(hidden_layers_dim[idx - 1] if idx else state_dim, h),
                'linear_action': nn.ReLU(inplace=True)
            }))

        self.fc_mu = nn.Linear(hidden_layers_dim[-1], action_dim)
        self.fc_std = nn.Linear(hidden_layers_dim[-1], action_dim)

    def forward(self, x):
        for layer in self.features:
            x = layer['linear_action'](layer['linear'](x))

        mean_ = 17.5 * torch.tanh(self.fc_mu(x)) + 17.5

        # np.log(1 + np.exp(2))
        std = F.softplus(self.fc_std(x)) + 1e-5
        return mean_, std


class valueNet(nn.Module):
    def __init__(self, state_dim, hidden_layers_dim):
        super(valueNet, self).__init__()
        self.features = nn.ModuleList()
        for idx, h in enumerate(hidden_layers_dim):
            self.features.append(nn.ModuleDict({
                'linear': nn.Linear(hidden_layers_dim[idx - 1] if idx else state_dim, h),
                'linear_activation': nn.ReLU(inplace=True)
            }))

        self.head = nn.Linear(hidden_layers_dim[-1], 1)

    def forward(self, x):
        for layer in self.features:
            x = layer['linear_activation'](layer['linear'](x))
        return self.head(x)


def compute_advantage(gamma, lmbda, td_delta):
    td_delta = td_delta.detach().numpy()
    adv_list = []
    adv = 0
    for delta in td_delta[::-1]:
        adv = gamma * lmbda * adv + delta
        adv_list.append(adv)
    adv_list.reverse()
    return torch.FloatTensor(adv_list)


class PPO:
    """
    PPO算法, 采用截断方式
    """

    def __init__(self,
                 state_dim: int,
                 hidden_layers_dim_policy,hidden_layers_dim_value: typ.List,
                 action_dim: int,
                 actor_lr: float,
                 critic_lr: float,
                 gamma: float,
                 PPO_kwargs: typ.Dict,
                 device: torch.device
                 ):
        self.actor = policyNet(state_dim, hidden_layers_dim_policy, action_dim).to(device)
        self.critic = valueNet(state_dim, hidden_layers_dim_value).to(device)
        self.actor_opt = torch.optim.Adam(self.actor.parameters(), lr=actor_lr)
        self.critic_opt = torch.optim.Adam(self.critic.parameters(), lr=critic_lr)

        self.gamma = gamma
        self.lmbda = PPO_kwargs['lmbda']
        self.ppo_epochs = PPO_kwargs['ppo_epochs']  # 一条序列的数据用来训练的轮次
        self.eps = PPO_kwargs['eps']  # PPO中截断范围的参数
        self.count = 0
        self.device = device

    def policy(self, state):
        state = torch.FloatTensor(state).to(self.device)
        mu, std = self.actor(state)
        action_dist = torch.distributions.Normal(mu, std)
        action = action_dist.sample()
        action = th.clamp(action,0,35.0)
        # action = abs(action)
        return action.item()

    def update(self, samples: deque):
        self.count += 1
        state, action, reward, next_state, done = zip(*samples)
        # 从 samples 中随机抽取 512 个元素
        # random_samples = random.sample(samples, k=1024)
        #
        # # 将随机抽取的元素解压缩为五个列表
        # state, action, reward, next_state, done = zip(*random_samples)

        state = torch.FloatTensor(state).to(self.device)
        action = torch.FloatTensor(action).view(-1, 1).to(self.device)
        reward = torch.FloatTensor(reward).view(-1, 1).to(self.device)
        # reward = (reward + 8.0) / 8.0  # 和TRPO一样,对奖励进行修改,方便训练
        next_state = torch.FloatTensor(next_state).to(self.device)
        done = torch.FloatTensor(done).view(-1, 1).to(self.device)

        td_target = reward + self.gamma * self.critic(next_state) * (1 - done)
        td_delta = td_target - self.critic(state)
        advantage = compute_advantage(self.gamma, self.lmbda, td_delta.cpu()).to(self.device)

        mu, std = self.actor(state)
        action_dists = torch.distributions.Normal(mu.detach(), std.detach())
        # 动作是正态分布
        old_log_probs = action_dists.log_prob(action)
        for _ in range(self.ppo_epochs):
            mu, std = self.actor(state)
            action_dists = torch.distributions.Normal(mu, std)
            log_prob = action_dists.log_prob(action)

            # e(log(a/b))
            ratio = torch.exp(log_prob - old_log_probs)
            surr1 = ratio * advantage
            surr2 = torch.clamp(ratio, 1 - self.eps, 1 + self.eps) * advantage

            actor_loss = torch.mean(-torch.min(surr1, surr2)).float()
            critic_loss = torch.mean(
                F.mse_loss(self.critic(state).float(), td_target.detach().float())
            ).float()
            self.actor_opt.zero_grad()
            self.critic_opt.zero_grad()
            nn.utils.clip_grad_norm_(self.actor.parameters(), 0.5)
            nn.utils.clip_grad_norm_(self.critic.parameters(), 0.5)
            actor_loss.backward()
            critic_loss.backward()

            self.actor_opt.step()
            self.critic_opt.step()

    def update_gail(self, samples: deque, reward):
        self.count += 1
        state, action, next_state, done = zip(*samples)

        state = torch.FloatTensor(state).to(self.device)
        action = torch.tensor(action).view(-1, 1).to(self.device)
        reward = torch.tensor(reward).view(-1, 1).to(self.device)
        reward = (reward + 8.0) / 8.0  # 和TRPO一样,对奖励进行修改,方便训练
        next_state = torch.FloatTensor(next_state).to(self.device)
        done = torch.FloatTensor(done).view(-1, 1).to(self.device)

        td_target = reward + self.gamma * self.critic(next_state) * (1 - done)
        td_delta = td_target - self.critic(state)
        advantage = compute_advantage(self.gamma, self.lmbda, td_delta.cpu()).to(self.device)

        mu, std = self.actor(state)
        action_dists = torch.distributions.Normal(mu.detach(), std.detach())
        # 动作是正态分布
        old_log_probs = action_dists.log_prob(action)
        for _ in range(self.ppo_epochs):
            mu, std = self.actor(state)
            action_dists = torch.distributions.Normal(mu, std)
            log_prob = action_dists.log_prob(action)

            # e(log(a/b))
            ratio = torch.exp(log_prob - old_log_probs)
            surr1 = ratio * advantage
            surr2 = torch.clamp(ratio, 1 - self.eps, 1 + self.eps) * advantage

            actor_loss = torch.mean(-torch.min(surr1, surr2)).float()
            critic_loss = torch.mean(
                F.mse_loss(self.critic(state).float(), td_target.detach().float())
            ).float()
            self.actor_opt.zero_grad()
            self.critic_opt.zero_grad()
            actor_loss.backward()
            critic_loss.backward()
            self.actor_opt.step()
            self.critic_opt.step()

class Discriminator(nn.Module):
    def __init__(self, state_dim, hidden_dim, action_dim):
        super(Discriminator, self).__init__()
        self.fc1 = th.nn.Linear(state_dim + action_dim, hidden_dim)
        self.fc1.weight.data.normal_(0, 0.1)
        # self.fc2 = th.nn.Linear(hidden_dim, hidden_dim)
        self.fc3 = th.nn.Linear(hidden_dim, 1)
        self.fc3.weight.data.normal_(0, 0.1)

    def forward(self, x, a):
        cat = th.cat([x, a], dim=1)
        x = F.tanh(self.fc1(cat))
        # x = F.tanh(self.fc2(x))
        return th.sigmoid(self.fc3(x))

class GAIL:
    def __init__(self, agent, state_dim, action_dim, hidden_dim, lr_d):
        self.discriminator = Discriminator(state_dim, hidden_dim, action_dim)
        self.discriminator_optimizer = th.optim.Adam(self.discriminator.parameters(), lr=lr_d)
        self.agent = agent

    def learn(self, expert_s, expert_a, agent_s, agent_a):
        expert_states = th.tensor(expert_s, dtype=th.float)
        expert_actions = th.tensor(expert_a, dtype=th.float)
        agent_states = th.tensor(agent_s, dtype=th.float)
        agent_actions = th.tensor(agent_a, dtype=th.float)
        # expert_actions = F.one_hot(expert_actions).float()
        # agent_actions = F.one_hot(agent_actions).float()
        # expert_actions = F.one_hot(expert_actions, num_classes=-1).float()
        # agent_actions = F.one_hot(agent_actions, num_classes=-1).float()
        for _ in range(10):
            expert_prob = self.discriminator(expert_states, expert_actions)
            agent_prob = self.discriminator(agent_states, agent_actions)
            discriminator_loss = nn.BCELoss()(agent_prob, th.ones_like(agent_prob)) + nn.BCELoss()(expert_prob,th.zeros_like(expert_prob))
            self.discriminator_optimizer.zero_grad()
            discriminator_loss.backward()
            self.discriminator_optimizer.step()

        rewards = -th.log(agent_prob).detach().cpu().numpy()
        return rewards


class replayBuffer:
    def __init__(self, capacity: int):
        self.buffer = deque(maxlen=capacity)

    def add(self, state, action, reward, next_state, done):
        self.buffer.append((state, action, reward, next_state, done))

    def add_gail(self, state, action, next_state, done):
        self.buffer.append((state, action, next_state, done))

    def add_gail_rewards(self, rewards):
        self.buffer.append((rewards))

    def __len__(self):
        return len(self.buffer)

    def sample(self, batch_size: int):
        return random.sample(self.buffer, batch_size)


class Config:
    num_episode = 2000
    num_episode_gail = 10000
    state_dim = 3
    hidden_layers_dim_policy = [128,128,128]
    hidden_layers_dim_value = [128, 128]
    action_dim = 1
    actor_lr = 1e-4
    critic_lr = 1e-3
    PPO_kwargs = {
        'lmbda': 0.95,
        'eps': 0.2,
        'ppo_epochs': 30
    }
    gamma = 0.9
    device = torch.device('cuda') if torch.cuda.is_available() else torch.device('cpu')
    buffer_size = 20480
    minimal_size = 1024
    batch_size = 512
    save_path = r'D:\ac_model.ckpt'
    save_path_bc = r'D:\ac_model_bc.ckpt'
    save_path_gail = r'D:\ac_model_gail.ckpt'
    # 回合停止控制
    max_episode_rewards = 260
    max_episode_steps = 260

    # def __init__(self, env):
    #     self.state_dim = env.observation_space.shape[0]
    #     try:
    #         self.action_dim = env.action_space.n
    #     except Exception as e:
    #         self.action_dim = env.action_space.shape[0]
    #     print(f'device={self.device} | env={str(env)}')


class Behaiorclone:
    def __init__(self,
                 state_dim: int,
                 hidden_layers_dim_policy,hidden_layers_dim_value: typ.List,
                 action_dim: int,
                 actor_lr: float,
                 critic_lr: float,
                 gamma: float,
                 PPO_kwargs: typ.Dict,
                 device: torch.device
                 ):
        self.actor = policyNet(state_dim, hidden_layers_dim_policy, action_dim).to(device)
        # self.critic = valueNet(state_dim, hidden_layers_dim_value).to(device)
        self.actor_opt = torch.optim.Adam(self.actor.parameters(), lr=actor_lr)
        # self.critic_opt = torch.optim.Adam(self.critic.parameters(), lr=critic_lr,weight_decay=0.001)

        self.gamma = gamma
        self.lmbda = PPO_kwargs['lmbda']
        self.ppo_epochs = PPO_kwargs['ppo_epochs']  # 一条序列的数据用来训练的轮次
        self.eps = PPO_kwargs['eps']  # PPO中截断范围的参数
        self.count = 0
        self.device = device
        self.loss_fn = nn.MSELoss()

    def policy(self, state):
        state = torch.FloatTensor(state).to(self.device)
        mu, std = self.actor(state)
        action_dist = torch.distributions.Normal(mu, std)
        action = action_dist.sample()
        action = th.clamp(action,0,35.0)
        # action = abs(action)
        return action

    def train(self, s,a, batch_size, epochs):
        expert_obs, expert_act = s ,a

        # 转换numpy数组为PyTorch张量
        expert_obs = torch.tensor(expert_obs, dtype=torch.float32).to(self.device)
        expert_act = torch.tensor(expert_act, dtype=torch.float32).to(self.device)

        # 计算数据集的长度
        dataset_size = expert_obs.shape[0]

        for epoch in range(epochs):
            # 随机打乱数据集
            indices = torch.randperm(dataset_size)
            expert_obs = expert_obs[indices]
            expert_act = expert_act[indices]

            for start_idx in range(0, dataset_size, batch_size):
                end_idx = min(start_idx + batch_size, dataset_size)
                batch_obs = expert_obs[start_idx:end_idx]
                batch_act = expert_act[start_idx:end_idx]

                # 前向传播并计算损失函数
                pred_act = self.policy(batch_obs)
                # mu, std = self.actor(batch_obs)
                # log_prob = gaussian_likelihood(pred_act, mu, std)
                # loss = -log_prob.mean()
                # pred_act,dist= self.policy(batch_obs)
                # log_probs = dist.log_prob(pred_act)
                # bc_net_loss = -log_probs.mean()
                loss = self.loss_fn(pred_act, batch_act).mean()
                loss.requires_grad_(True)
                # 反向传播并更新模型参数
                self.actor_opt.zero_grad()
                loss.backward()
                self.actor_opt.step()

            print("Epoch:", epoch + 1, "Loss:", loss.item())

def gaussian_likelihood(action, mean, std):
    var = std.pow(2)
    pi = torch.tensor([math.pi])
    log_likelihood = -0.5 * ((action - mean).pow(2) / var + 2 * torch.log(std) + 2 * torch.log(pi))
    return log_likelihood.sum(1)

class GaussianBCLoss(nn.Module):
    def __init__(self):
        super(GaussianBCLoss, self).__init__()

    def forward(self, x, action, mean, std):
        log_prob = gaussian_likelihood(action, mean, std)
        loss = -log_prob.mean()
        return loss

def get_state(soc, v,a):
    SOC = soc/100
    # dev_SOC = SOC - 0.6
    state = np.array([SOC, v,a])
    return state
#
# def get_state(soc):
#     SOC = soc
#     # dev_SOC = SOC - 0.6
#     # state = np.array([SOC, P_de])
#     state =np.array([SOC])
#     return state

# 获取奖励
def get_reward(soc):
    SOC = soc/100
    dev_SOC = abs(SOC - 0.6)
    # reward = math.exp(-(dev_SOC))
    reward = -(dev_SOC**2)
    # normal_reward = 10 * (reward - 0.9)
    return reward


def data_write(file_path, datas):
    ipTable = datas
    fileObject = open(file_path, 'w')
    for ip in ipTable:
        fileObject.write(str(ip))
        fileObject.write('\n')
    fileObject.close()


transition_dict = {"states": [], "actions": [], "next_states": [], "rewards": [], "dones": []}

MAX_EP_STEPS = 1369
episode = 0
var = 0
device = torch.device("cuda:0" if torch.cuda
                      .is_available() else "cpu")

reward_memory = []
soc_memory = []
EF_memory = []
P_fc_memory = []
efc_memory = []  # Equivalent fuel consumption
FuelVolFlow_memory = []
BattFlow_memory = []
Clock_memory = []
GearCmd_memory = []
EngTrqw_memory = []
MotTrq_memory = []

s_memory = []
a_memory = []
r_memory = []
s__memory = []
done_memory = []
buffer_s, buffer_a, buffer_r, buffer_a_logp = [], [], [], []
p = 0
#
# agent = PPO(2, hidden_dim, 1, actor_lr, critic_lr, lambda_, epochs, eps, gamma)

# if Switch == 0:


def train_bc(cfg):
    print('BC...')
    return_list = []
    ac_agent = Behaiorclone(
        state_dim=cfg.state_dim,
        hidden_layers_dim_policy=cfg.hidden_layers_dim_policy,
        hidden_layers_dim_value=cfg.hidden_layers_dim_value,
        action_dim=cfg.action_dim,
        actor_lr=cfg.actor_lr,
        critic_lr=cfg.critic_lr,
        gamma=cfg.gamma,
        PPO_kwargs=cfg.PPO_kwargs,
        device=cfg.device
    )
    all_ep_r = []
    a = np.loadtxt("a.txt", dtype=float)
    a = a.reshape(len(a), 1)
    s_soc = np.loadtxt("s.txt", dtype=float)
    s_soc = s_soc.reshape(len(s_soc), 1)
    s_v = np.loadtxt("s_v.txt", dtype=float)
    s_v = s_v.reshape(len(s_v), 1)
    s_a = np.loadtxt("s_a.txt", dtype=float)
    s_a = s_v.reshape(len(s_a), 1)
    s = np.hstack((s_soc, s_v, s_a))
    ac_agent.train(s,a,32,1000)
    torch.save(ac_agent.actor.state_dict(), cfg.save_path_bc)
    return ac_agent



# ac_agent.actor.load_state_dict(torch.load(cfg.save_path))
# checkpoint_aa = torch.load("D:\GAIL_PP02_model_actor.pth")
# agent.actor.load_state_dict(checkpoint_aa['net'])
# checkpoint_cc = torch.load("D:\GAIL_PP02_critic.pth")
# agent.critic.load_state_dict(checkpoint_cc['net'])
# actor=Actor()
# critic=Critic()





def train_agent(cfg):
    print('PPO2训练中...')
    return_list = []

    ac_agent = PPO(
        state_dim=cfg.state_dim,
        hidden_layers_dim_policy=cfg.hidden_layers_dim_policy,
        hidden_layers_dim_value=cfg.hidden_layers_dim_value,
        action_dim=cfg.action_dim,
        actor_lr=cfg.actor_lr,
        critic_lr=cfg.critic_lr,
        gamma=cfg.gamma,
        PPO_kwargs=cfg.PPO_kwargs,
        device=cfg.device
    )
    # ac_agent.actor.load_state_dict(torch.load(cfg.save_path_bc))
    ac_agent.actor.load_state_dict(torch.load(cfg.save_path))
    # checkpoint_aa = torch.load("D:\GAIL_PP02_model_actor.pth")
    # agent.actor.load_state_dict(checkpoint_aa['net'])
    # checkpoint_cc = torch.load("D:\GAIL_PP02_critic.pth")
    # agent.critic.load_state_dict(checkpoint_cc['net'])
    # actor=Actor()
    # critic=Critic()
    all_ep_r = []
    a = np.loadtxt("a.txt", dtype=float)
    a = a.reshape(len(a), 1)
    s_soc = np.loadtxt("s.txt", dtype=float)
    s_soc = s_soc.reshape(len(s_soc), 1)
    s_v = np.loadtxt("s_v.txt", dtype=float)
    s_v = s_v.reshape(len(s_v), 1)
    s_a = np.loadtxt("s_a.txt", dtype=float)
    s_a = s_v.reshape(len(s_a), 1)
    s = np.hstack((s_soc, s_v,s_a))
    # s = s_soc
    expert_a = a
    expert_s = s
    # gail = GAIL(ac_agent, 2, 1, hidden_dim, 3e-4)
    engine = matlab.engine.start_matlab()
    env_name = 'FCEvReferenceApplication'
    engine.load_system(env_name)
    tq_bar = tqdm(range(cfg.num_episode))
    bf_reward = -np.inf
    buffer_ = replayBuffer(cfg.buffer_size)
    steps = 0
    for i in tq_bar:

        tq_bar.set_description(f'Episode [ {i + 1} / {cfg.num_episode} ]')
        print("第", episode, "回合")
        engine.initial_maltab(nargout=0)
        action = 2
        state = np.array([0,0,0])
        s_memory.append(state)
        a_memory.append(action)
        ep_reward = 0
        done = float(False)
        state_list = []
        action_list = []
        next_state_list = []
        rewards_list = []
        done_list = []
        episode_rewards = 0
        # steps = 0
        reward_totle = 0
        episode_return = 0
        total_reward = 0
        count = 0
        pause_time = 2

        # for timestep in range(0, 1369, 1):
        while True:
            Clock = np.array(engine.eval('Clock')).reshape(-1)
            soc = np.array(engine.eval('soc')).reshape(-1)
            Clock = Clock[-1]
            soc = soc[-1]



            if Clock - count >= 1:
                # Clock, soc, P_de = engine.run(float(action), pause_time,nargout=3)
                Clock, soc, v, a= engine.run(float(action), pause_time, nargout=4)
                pause_time = pause_time + 1
                next_state = get_state(soc, v,a)
                # next_state = get_state(soc)
                action = ac_agent.policy(state)

                if Clock == MAX_EP_STEPS:
                    done = True
                    buffer_.add(state, action, reward, next_state, done)
                    break

                if soc < 10:
                    # reward = -2000;
                    # action = 20
                    # buffer_r.append(reward)
                    done = True
                    buffer_.add(state, action, reward, next_state, done)
                    break

                if soc > 90:
                    # reward = -2000;
                    # buffer_r.append(reward)
                    done = True
                    buffer_.add(state, action, reward, next_state, done)
                    break

                reward = get_reward(soc)

                count = Clock
                episode_rewards += reward

                # done_memory.append(float(False))
                # soc_memory.append(soc)
                # P_fc_memory.append(action)
                # Clock_memory.append(Clock)
                state_list.append(state)
                action_list.append(action)
                next_state_list.append(next_state)
                done_list.append(done)
                print(state, action, next_state, Clock)

                # count = Clock
                s_memory.append(state)
                # ep_reward += reward
                a_memory.append(action)
                # done = True
                # PPO 更新
                # if Clock>=20:
                buffer_.add(state, action, reward, next_state, done)
                steps += 1
                # if (episode_rewards >= cfg.max_episode_rewards) or (steps >= cfg.max_episode_steps):
                #     break
                state = next_state
                if (steps+1) % 256 == 0:
                    print("train!!")
                    ac_agent.update(buffer_.buffer)
                    buffer_ = replayBuffer(cfg.buffer_size)
                    steps = 0
                    torch.save(ac_agent.actor.state_dict(), cfg.save_path)

                    # break
        # print("train!!")
        # ac_agent.update(buffer_.buffer)
        # buffer_ = replayBuffer(cfg.buffer_size)
        # steps = 0
        # torch.save(ac_agent.actor.state_dict(), cfg.save_path)
    # ac_agent.update(buffer_.buffer)
        # print("train!!")
        # ac_agent.update(buffer_.buffer)
        # buffer_ = replayBuffer(cfg.buffer_size)
        # # steps = 0
        # torch.save(ac_agent.actor.state_dict(), cfg.save_path)
        rewards_list.append(episode_rewards)
        now_reward = np.mean(rewards_list[-10:])
        if bf_reward < now_reward:
            bf_reward = now_reward


        tq_bar.set_postfix({'lastMeanRewards': f'{now_reward:.2f}', 'BEST': f'{bf_reward:.2f}'})

        engine.set_param(env_name, 'SimulationCommand', 'stop', nargout=0)
        print("结束")

    return ac_agent

if __name__ == '__main__':
    print('=='*35)
    print('Training FCEV')
    # env = gym.make('Pendulum-v1')/
    cfg = Config()
    # ac_agent = train_bc(cfg)
    ac_agent = train_agent(cfg)
    # ac_agent = PPO(
    #     state_dim=cfg.state_dim,
    #     hidden_layers_dim=cfg.hidden_layers_dim,
    #     action_dim=cfg.action_dim,
    #     actor_lr=cfg.actor_lr,
    #     critic_lr=cfg.critic_lr,
    #     gamma=cfg.gamma,
    #     PPO_kwargs=cfg.PPO_kwargs,
    #     device=cfg.device
    # )
    # ac_agent.actor.load_state_dict(torch.load(cfg.save_path))
    # n_episode = 1
    # expert_s, expert_a = sample_expert_data(ac_agent,n_episode,cfg)
    # gail_agent = train_agent_gail(env,cfg,expert_s,expert_a)

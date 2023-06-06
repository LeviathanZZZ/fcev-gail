# python3
# Create Dat3: 2022-12-27
# Func: PPO 输出action为连续变量
# =====================================================================================================
import numpy
from torch.utils.data.sampler import BatchSampler, SubsetRandomSampler
from normalization import Normalization, RewardScaling
import torch
import torch.nn as nn
from torch.nn import functional as F
import numpy as np
import gym
import copy
import random
from collections import deque
from tqdm import tqdm
import typing as typ
import torch as th
from torch.utils.tensorboard import SummaryWriter
torch.manual_seed(545)


class Discriminator(nn.Module):
    def __init__(self, state_dim: int,  hidden_layers_dim: typ.List,action_dim: int,):
        super(Discriminator, self).__init__()
        self.features = nn.ModuleList()
        for idx, h in enumerate(hidden_layers_dim):
            self.features.append(nn.ModuleDict({
                'linear': nn.Linear(hidden_layers_dim[idx - 1] if idx else state_dim+action_dim, h),
                'linear_action': nn.Tanh()
            }))
        self.fc_s = nn.Linear(hidden_layers_dim[-1], 1)

    def forward(self, x,a):
        cat = th.cat([x, a], dim=1)
        for layer in self.features:
            cat = layer['linear_action'](layer['linear'](cat))
        # x = F.tanh(self.fc1(cat))
        # x = F.tanh(self.fc2(x))
        return th.sigmoid(self.fc_s(cat))


class GAIL:
    def __init__(self, agent, state_dim:int, action_dim:int, hidden_layers_dim: typ.List, lr_d):
        self.discriminator = Discriminator(state_dim, hidden_layers_dim, action_dim)
        self.discriminator_optimizer = th.optim.Adam(self.discriminator.parameters(), lr=lr_d)
        self.agent = agent

    def learn(self, expert_s, expert_a, agent_s, agent_a):
        expert_states = th.tensor(expert_s, dtype=th.float)
        expert_actions = th.tensor(expert_a, dtype=th.float)
        agent_states = th.tensor(agent_s, dtype=th.float)
        agent_actions = th.tensor(agent_a, dtype=th.float)
        rewards=[]
        # expert_actions = F.one_hot(expert_actions).float()
        # agent_actions = F.one_hot(agent_actions).float()
        # expert_actions = F.one_hot(expert_actions, num_classes=-1).float()
        # agent_actions = F.one_hot(agent_actions, num_classes=-1).float()
        for j in range(3):  # iteration ppo_epoch
            for index in BatchSampler(SubsetRandomSampler(range(1024)), 64, False):
                expert_prob = self.discriminator(expert_states, expert_actions)
                agent_prob = self.discriminator(agent_states[index], agent_actions[index])
                discriminator_loss = nn.BCELoss()(agent_prob, th.ones_like(agent_prob)) + nn.BCELoss()(expert_prob,th.zeros_like(expert_prob))
                self.discriminator_optimizer.zero_grad()
                discriminator_loss.backward()
                nn.utils.clip_grad_norm_(self.discriminator.parameters(), 0.5)
                self.discriminator_optimizer.step()
                # if j==2:
                #     reward = -th.log(agent_prob).detach().cpu().numpy()
                #     rewards.append(reward)
        # agent_prob = self.discriminator(agent_states, agent_actions)
        agent_prob = self.discriminator(agent_states, agent_actions)
        rewards = -th.log(agent_prob).detach().cpu().numpy()
        return rewards


def sample_expert_data(ac_agent, n_episode, cfg):
    states = []
    actions = []
    for episode in range(n_episode):
        state = env.reset()
        done = False
        total_rewards = 0
        while not done:
            # env.render()
            action = ac_agent.policy(state)
            next_state, reward, done, _ = env.step(action)
            states.append(state)
            actions.append(action)
            total_rewards += reward
            state = next_state
        print("Score：", total_rewards)
        env.close()
    # for episode in range(n_episode):
    #     state = env.reset()
    #     done = False
    #     total_reward = 0
    #     while not done:
    #         action = agent_1.take_action(state)
    #         states.append(state)
    #         actions.append(action)
    #         next_state, reward, done, _ = env.step(action)
    #         total_reward+=reward
    #     print(total_reward)
    return np.array(states), np.array(actions)
def orthogonal_init(layer,gain=1.0):
    nn.init.orthogonal_(layer.weight,gain=gain)
    nn.init.constant_(layer.bias,0)

class policyNet(nn.Module):
    """
    continuity action:
    normal distribution (mean, std)
    """

    def __init__(self, state_dim, hidden_layers_dim, action_dim):
        super(policyNet, self).__init__()
        # self.features = nn.ModuleList()
        # for idx, h in enumerate(hidden_layers_dim):
        #     self.features.append(nn.ModuleDict({
        #         'linear': nn.Linear(hidden_layers_dim[idx - 1] if idx else state_dim, h),
        #         'linear_action': nn.ReLU(inplace=True)
        #     }))
        self.fc1 = nn.Linear(state_dim, hidden_layers_dim)
        self.fc2 = nn.Linear(hidden_layers_dim, hidden_layers_dim)
        self.fc_mu = nn.Linear(hidden_layers_dim, action_dim)
        self.fc_std = nn.Linear(hidden_layers_dim, action_dim)
        self.log_std = nn.Parameter(torch.zeros(1))

        orthogonal_init(self.fc1)
        orthogonal_init(self.fc2)
        orthogonal_init(self.fc_mu,gain=0.01)

    def forward(self, x):
        # for layer in self.features:
        #     x = layer['linear_action'](layer['linear'](x))
        x = torch.relu(self.fc1(x))
        x = torch.relu(self.fc2(x))
        mean_ = 2.0 * torch.tanh(self.fc_mu(x))
        # np.log(1 + np.exp(2))
        # mean_ = 4.0 * (torch.sigmoid(self.fc_mu(x)) - 0.5)
        # std = F.softplus(self.fc_std(x)) + 1e-5
        log_std = self.log_std.expand_as(mean_)
        std = torch.exp(log_std)
        return mean_, std



class valueNet(nn.Module):
    def __init__(self, state_dim, hidden_layers_dim):
        super(valueNet, self).__init__()
        # self.features = nn.ModuleList()
        # for idx, h in enumerate(hidden_layers_dim):
        #     self.features.append(nn.ModuleDict({
        #         'linear': nn.Linear(hidden_layers_dim[idx - 1] if idx else state_dim, h),
        #         'linear_activation': nn.ReLU(inplace=True)
        #     }))
        self.fc1 = nn.Linear(state_dim, hidden_layers_dim)
        self.fc2 = nn.Linear(hidden_layers_dim,hidden_layers_dim)
        # self.fc3 = nn.Linear(hidden_layers_dim, 1)
        self.head = nn.Linear(hidden_layers_dim, 1)
        orthogonal_init(self.fc1)
        orthogonal_init(self.fc2)
        orthogonal_init(self.head)

    def forward(self, x):
        # for layer in self.features:
        #     x = layer['linear_activation'](layer['linear'](x))
        x = torch.relu(self.fc1(x))
        x = torch.relu(self.fc2(x))
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


class  PPO:
    """
    PPO算法, 采用截断方式
    """

    def __init__(self,
                 state_dim,
                 hidden_layers_dim,
                 action_dim,
                 actor_lr: float,
                 critic_lr: float,
                 gamma: float,
                 PPO_kwargs: typ.Dict,
                 device: torch.device
                 ):
        self.actor = policyNet(state_dim, hidden_layers_dim, action_dim).to(device)
        self.critic = valueNet(state_dim, hidden_layers_dim).to(device)
        self.actor_opt = torch.optim.Adam(self.actor.parameters(), lr=actor_lr,eps=1e-5)
        self.critic_opt = torch.optim.Adam(self.critic.parameters(), lr=critic_lr,eps=1e-5)

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
        action = torch.clamp(action,-2.,2.)
        # action = action.detach().numpy()
        action = action.numpy().flatten()
        # action =np.clip(action,-2.,2.)
        return action

    def update(self, samples: deque):
        self.count += 1
        state, action, reward, next_state, done = zip(*samples)

        state = torch.FloatTensor(state).to(self.device)
        action = torch.tensor(action).view(-1, 1).to(self.device)
        reward = torch.tensor(reward).view(-1, 1).to(self.device)
        # reward = (reward + 8.0) / 8.0  # 和TRPO一样,对奖励进行修改,方便训练
        next_state = torch.FloatTensor(next_state).to(self.device)
        done = torch.FloatTensor(done).view(-1, 1).to(self.device)

        with torch.no_grad():
            td_target = reward + self.gamma * self.critic(next_state) * (1 - done)
            td_delta = td_target - self.critic(state)
            advantage = compute_advantage(self.gamma, self.lmbda, td_delta.cpu()).to(self.device)
            advantage = torch.tensor(advantage, dtype=torch.float).view(-1, 1)
            v_target = advantage + self.critic(state)
            advantage = ((advantage - advantage.mean()) / (advantage.std() + 1e-5))

        mu, std = self.actor(state)
        action_dists = torch.distributions.Normal(mu.detach(), std.detach())
        # 动作是正态分布
        old_log_probs = action_dists.log_prob(action)
        with torch.no_grad():
            oldv = self.critic(state)
        for _ in range(10):  # iteration ppo_epoch
            for index in BatchSampler(
                    SubsetRandomSampler(range(2048)), 64, False):
                # epoch iteration, PPO core!!!

                mu, std = self.actor(state[index])
                n = torch.distributions.Normal(mu, std)
                action_log_prob = n.log_prob(action[index])
                ratio = torch.exp(action_log_prob - old_log_probs[index])
                dist_entropy = n.entropy().sum(1, keepdim=True)
                L1 = ratio * advantage[index]
                L2 = torch.clamp(ratio, 1 - self.eps, 1 + self.eps) * advantage[index]

                action_loss = -torch.min(L1, L2)-dist_entropy*0.01 # MAX->MIN desent
                value_loss = F.mse_loss(self.critic(state[index]), v_target[index])

                # clip_v = oldv[index] + torch.clamp(self.critic(state[index]) - oldv[index], -0.2, 0.2)
                # v_max = torch.max(((self.critic(state[index]) - v_target[index]) ** 2), ((clip_v - v_target[index]) ** 2))
                # v_loss = v_max.mean()

                self.actor_opt.zero_grad()
                self.critic_opt.zero_grad()
                action_loss.mean().backward()
                nn.utils.clip_grad_norm_(self.actor.parameters(), 0.5)
                value_loss.backward()
                nn.utils.clip_grad_norm_(self.critic.parameters(), 0.5)

                self.actor_opt.step()
                self.critic_opt.step()


        # for i in range(10):
        #     indice = torch.randperm(1024)
        #     for j in range(16):
        #         batch_indices = indice[
        #                         int(j * 1024/16): int(
        #                             (j + 1) * (
        #                                     1024/16))]
        #         mu, std = self.actor(state[batch_indices])
        #         action_dists = torch.distributions.Normal(mu, std)
        #         log_prob = action_dists.log_prob(action)
        #
        #         # e(log(a/b))
        #         ratio = torch.exp(log_prob - old_log_probs)
        #         surr1 = ratio * advantage
        #         surr2 = torch.clamp(ratio, 1 - self.eps, 1 + self.eps) * advantage
        #
        #         actor_loss = torch.mean(-torch.min(surr1, surr2)).float()
        #         critic_loss = torch.mean(
        #             F.mse_loss(self.critic(state[batch_indices]).float(), td_target.detach().float())
        #         ).float()
        #         self.actor_opt.zero_grad()
        #         self.critic_opt.zero_grad()
        #         actor_loss.backward()
        #         critic_loss.backward()
        #         self.actor_opt.step()
        #         self.critic_opt.step()

    def update_gail(self, samples: deque, reward):
        self.count += 1
        state, action, next_state, done = zip(*samples)

        state = torch.FloatTensor(state).to(self.device)
        action = torch.tensor(action).view(-1, 1).to(self.device)
        reward = torch.tensor(reward).view(-1, 1).to(self.device)
        # reward = (reward + 8.0) / 8.0  # 和TRPO一样,对奖励进行修改,方便训练
        next_state = torch.FloatTensor(next_state).to(self.device)
        done = torch.FloatTensor(done).view(-1, 1).to(self.device)

        with torch.no_grad():
            td_target = reward + self.gamma * self.critic(next_state) * (1 - done)
        td_delta = td_target - self.critic(state)
        advantage = compute_advantage(self.gamma, self.lmbda, td_delta.cpu()).to(self.device)

        mu, std = self.actor(state)
        action_dists = torch.distributions.Normal(mu.detach(), std.detach())
        # 动作是正态分布
        old_log_probs = action_dists.log_prob(action)
        for _ in range(10):  # iteration ppo_epoch
            for index in BatchSampler(
                    SubsetRandomSampler(range(128)), 16, False):
                # epoch iteration, PPO core!!!
                mu, std = self.actor(state[index])
                n = torch.distributions.Normal(mu, std)
                action_log_prob = n.log_prob(action[index])
                ratio = torch.exp(action_log_prob - old_log_probs[index])

                L1 = ratio * advantage[index]
                L2 = torch.clamp(ratio, 1 - self.eps, 1 + self.eps) * advantage[index]
                action_loss = -torch.min(L1, L2).mean()  # MAX->MIN desent
                value_loss = F.smooth_l1_loss(self.critic(state[index]), td_target[index])
                self.actor_opt.zero_grad()
                self.critic_opt.zero_grad()
                action_loss.backward()
                # nn.utils.clip_grad_norm_(self.actor_net.parameters(), self.max_grad_norm)
                value_loss.backward()
                # nn.utils.clip_grad_norm_(self.critic_net.parameters(), self.max_grad_norm)

                self.actor_opt.step()
                self.critic_opt.step()


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


def play(env, env_agent, cfg, episode_count=2):
    for e in range(episode_count):
        s = env.reset()
        done = False
        episode_reward = 0
        episode_cnt = 0
        while not done:
            env.render()
            a = env_agent.policy(s)
            n_state, reward, done, _ = env.step(a)
            episode_reward += reward
            episode_cnt += 1
            s = n_state
            if (episode_cnt >= 3 * cfg.max_episode_steps) or (episode_reward >= 3 * cfg.max_episode_rewards):
                break

        print(f'Get reward {episode_reward}. Last {episode_cnt} times')
    env.close()


class Config:
    num_episode = 1200
    num_episode_gail = 10000
    state_dim = None
    hidden_layers_dim = 64
    action_dim = 20
    actor_lr = 3e-4
    critic_lr = 3e-4
    PPO_kwargs = {
        'lmbda': 0.95,
        'eps': 0.2,
        'ppo_epochs': 10
    }
    gamma = 0.9
    device = torch.device('cuda') if torch.cuda.is_available() else torch.device('cpu')
    buffer_size = 20480
    minimal_size = 1024
    batch_size = 128
    save_path = r'D:\ac_model.ckpt'
    save_path_gail = r'D:\ac_model_gail.ckpt'
    # 回合停止控制
    max_episode_rewards = 260
    max_episode_steps = 260

    def __init__(self, env):
        self.state_dim = env.observation_space.shape[0]
        try:
            self.action_dim = env.action_space.n
        except Exception as e:
            self.action_dim = env.action_space.shape[0]
        print(f'device={self.device} | env={str(env)}')

Writer = SummaryWriter()
def train_agent(env, cfg):
    ac_agent = PPO(
        state_dim=cfg.state_dim,
        hidden_layers_dim=cfg.hidden_layers_dim,
        action_dim=cfg.action_dim,
        actor_lr=cfg.actor_lr,
        critic_lr=cfg.critic_lr,
        gamma=cfg.gamma,
        PPO_kwargs=cfg.PPO_kwargs,
        device=cfg.device
    )
    tq_bar = tqdm(range(cfg.num_episode))
    rewards_list = []
    now_reward = 0
    bf_reward = -np.inf
    buffer_ = replayBuffer(cfg.buffer_size)
    steps = 0
    state_norm = Normalization(cfg.state_dim)
    reward_scaling = RewardScaling(shape=1, gamma=0.99)
    for i in tq_bar:

        tq_bar.set_description(f'Episode [ {i + 1} / {cfg.num_episode} ]')
        s = env.reset()
        done = False
        episode_rewards = 0

        while not done:
            a = ac_agent.policy(s)
            # if a>2 or a<-2:
            #     print(a)
            n_s, r, done, _ = env.step(a)
            episode_rewards += r
            # n_s = state_norm(n_s)
            r = reward_scaling(r)
            buffer_.add(s, a, r, n_s, done)
            s = n_s

            steps += 1
            # if (episode_rewards >= cfg.max_episode_rewards) or (steps >= cfg.max_episode_steps):
            #     break
            if steps == 2048:
                ac_agent.update(buffer_.buffer)
                buffer_ = replayBuffer(cfg.buffer_size)
                steps = 0
                torch.save(ac_agent.actor.state_dict(), cfg.save_path)

        rewards_list.append(episode_rewards)
        Writer.add_scalar("reward",episode_rewards,i)
        now_reward = np.mean(rewards_list[-10:])
        if bf_reward < now_reward:

            bf_reward = now_reward

        tq_bar.set_postfix({'lastMeanRewards': f'{now_reward:.2f}', 'BEST': f'{bf_reward:.2f}'})
    env.close()
    return ac_agent


def train_agent_gail(env, cfg, expert_s, expert_a):
    ac_agent = PPO(
        state_dim=cfg.state_dim,
        hidden_layers_dim=cfg.hidden_layers_dim,
        action_dim=cfg.action_dim,
        actor_lr=cfg.actor_lr,
        critic_lr=cfg.critic_lr,
        gamma=cfg.gamma,
        PPO_kwargs=cfg.PPO_kwargs,
        device=cfg.device
    )
    gail = GAIL(ac_agent, cfg.state_dim, cfg.action_dim,cfg.hidden_layers_dim,3e-3)
    tq_bar = tqdm(range(cfg.num_episode_gail))
    rewards_list = []
    now_reward = 0
    bf_reward = -np.inf
    buffer_ = replayBuffer(cfg.buffer_size)
    steps = 0
    state_list = []
    action_list = []
    reward_scaling = RewardScaling(shape=1, gamma=0.99)
    for i in tq_bar:


        tq_bar.set_description(f'Episode [ {i + 1} / {cfg.num_episode_gail} ]')
        s = env.reset()
        done = False
        episode_rewards = 0

        while not done:
            a = ac_agent.policy(s)
            n_s, r, done, _ = env.step(a)
            buffer_.add_gail(s, a, n_s, done)
            state_list.append(s)
            action_list.append(a)
            s = n_s
            episode_rewards += r
            steps += 1
            # if (episode_rewards >= cfg.max_episode_rewards) or (steps >= cfg.max_episode_steps):
            #     break
            if steps == 1024:
                rewards = gail.learn(expert_s, expert_a, state_list, action_list)
                # rewards = reward_scaling(rewards)
                ac_agent.update_gail(buffer_.buffer, rewards)
                buffer_ = replayBuffer(cfg.buffer_size)
                state_list = []
                action_list = []
                steps = 0

        rewards_list.append(episode_rewards)
        now_reward = np.mean(rewards_list[-10:])
        if bf_reward < now_reward:
            torch.save(ac_agent.actor.state_dict(), cfg.save_path_gail)
            bf_reward = now_reward

        tq_bar.set_postfix({'lastMeanRewards': f'{now_reward:.2f}', 'BEST': f'{bf_reward:.2f}'})
    env.close()
    return ac_agent


if __name__ == '__main__':
    print('==' * 35)
    print('Training Pendulum-v1')
    env = gym.make('Pendulum-v1')
    cfg = Config(env)
    ac_agent = train_agent(env, cfg)
    # print(env.action_space.high[0])
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
    # n_episode =1
    # expert_s, expert_a = sample_expert_data(ac_agent,n_episode,cfg)
    gail_agent = train_agent_gail(env,cfg,expert_s,expert_a)
    # ac_agent.actor.load_state_dict(torch.load(cfg.save_path_gail))
    # play(gym.make('Pendulum-v1', render_mode="human"), ac_agent, cfg)
#

################
#MATLAB控制#
import math
from normalization import Normalization, RewardScaling

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
import copy
from collections import deque
import typing as typ
from torch.utils.data.sampler import BatchSampler, SubsetRandomSampler

state_number = 3
action_number = 1
max_action = 30
min_action = 0
torch.manual_seed(548)
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

Writer = SummaryWriter()

class Actor(nn.Module):
    def __init__(self, state_dim, action_dim):
        super(Actor, self).__init__()
        # self.action_bound = torch.FloatTensor(action_bound)

        # layer
        self.layer_1 = nn.Linear(state_dim, 256)
        # nn.init.normal_(self.layer_1.weight, 0., 0.3)
        # nn.init.constant_(self.layer_1.bias, 0.1)
        self.layer_2 = nn.Linear(256, 128)
        # nn.init.normal_(self.layer_2.weight, 0., 0.3)
        # nn.init.constant_(self.layer_2.bias, 0.1)
        self.layer_3 = nn.Linear(128, 128)
        # nn.init.normal_(self.layer_3.weight, 0., 0.3)
        # nn.init.constant_(self.layer_3.bias, 0.1)
        # self.layer_3 = nn.Linear(100, 50)
        # self.layer_4 = nn.Linear(128, 128)
        # nn.init.normal_(self.layer_3.weight, 0., 0.3)
        # nn.init.constant_(self.layer_3.bias, 0.1)]

        # self.layer_1.weight.data.normal_(0.,0.3)
        # self.layer_1.bias.data.fill_(0.1)
        self.output = nn.Linear(128, action_dim)
        self.output.weight.data.uniform_(-3e-3, 3e-3)
        self.output.bias.data.uniform_(-3e-3, 3e-3)
        # self.output.weight.data.normal_(0., 0.3)
        # self.output.bias.data.fill_(0.1)

    def forward(self, s):
        a = torch.relu(self.layer_1(s))
        a = torch.relu(self.layer_2(a))
        a = torch.relu(self.layer_3(a))
        # a = torch.relu(self.layer_4(a))
        a = torch.sigmoid(self.output(a))
        # 对action进行放缩，实际上a in [-1,1]
        scaled_a = a *3.5
        return scaled_a


# Critic Net
# Critic输入的是当前的state以及Actor输出的action,输出的是Q-value
class Critic(nn.Module):
    def __init__(self, n_states, n_actions):
        super(Critic, self).__init__()
        #
        self.fc1 = nn.Linear(n_states + n_actions, 256)
        # nn.init.normal_(self.fc1.weight, 0., 0.3)
        # nn.init.constant_(self.fc1.bias, 0.1)
        self.fc2 = nn.Linear(256, 128)
        # nn.init.normal_(self.fc2.weight, 0., 0.3)
        # nn.init.constant_(self.fc2.bias, 0.1)
        self.fc3 = nn.Linear(128, 128)
        # nn.init.normal_(self.fc3.weight, 0., 0.3)
        # nn.init.constant_(self.fc3.bias, 0.1)
        self.fc5 = nn.Linear(128, 1)
        # self.fc5.weight.data.normal_(0., 0.3)
        # self.fc5.bias.data.fill_(0.1)
        # 前向传播

    def forward(self, x, a):
        # 拼接状态和动作
        cat = torch.cat([x, a], dim=1)  # [b, n_states + n_actions]
        x = self.fc1(cat)  # -->[b, n_hiddens]
        x = torch.relu(x)
        x = self.fc2(x)  # -->[b, n_hiddens]
        x = torch.relu(x)
        x = self.fc3(x)  # -->[b, 1]
        x = torch.relu(x)
        # x = self.fc4(x)
        # x = torch.relu(x)
        x = self.fc5(x)
        return x


class OUNoise(object):
    def __init__(self, action_dim, mu=0.0, theta=0.15, max_sigma=0.3, min_sigma=0, decay_period=100000):
        self.mu = mu
        self.theta = theta
        self.sigma = max_sigma
        self.max_sigma = max_sigma
        self.min_sigma = min_sigma
        self.decay_period = decay_period
        self.action_dim = action_dim
        # self.low = action_space.low
        # self.high = action_space.high
        self.reset()

    def reset(self):
        self.state = np.ones(self.action_dim) * self.mu

    def evolve_state(self):
        x = self.state
        dx = self.theta * (self.mu - x) + self.sigma * np.random.randn(self.action_dim)
        self.state = x + dx
        return self.state

    def get_action(self, action, t=0):
        ou_state = self.evolve_state()
        self.sigma = self.max_sigma - (self.max_sigma - self.min_sigma) * min(1.0, t / self.decay_period)
        return np.clip(action + ou_state, 0,3.5)

# Deep Deterministic Policy Gradient
class DDPG(object):
    def __init__(self, state_dim, action_dim, replacement, memory_capacity=1000, gamma=0.99, lr_a=1e-4,
                 lr_c=1e-3, batch_size=256):
        super(DDPG, self).__init__()
        self.state_dim = state_dim
        self.action_dim = action_dim
        self.memory_capacity = memory_capacity
        self.replacement = replacement
        self.t_replace_counter = 0
        self.gamma = gamma
        self.lr_a = lr_a
        self.lr_c = lr_c
        self.batch_size = batch_size

        # 记忆库
        self.memory = np.zeros((memory_capacity, state_dim * 2 + action_dim + 1))
        self.pointer = 0
        # 定义 Actor 网络
        self.actor = Actor(state_dim, action_dim)
        self.actor_target = Actor(state_dim, action_dim)
        # 定义 Critic 网络
        self.critic = Critic(state_dim, action_dim)
        self.critic_target = Critic(state_dim, action_dim)
        # 定义优化器
        self.aopt = torch.optim.Adam(self.actor.parameters(), lr=lr_a)
        self.copt = torch.optim.Adam(self.critic.parameters(), lr=lr_c,weight_decay=0.0001)
        # 选取损失函数
        self.mse_loss = nn.MSELoss()

    def sample(self):
        indices = np.random.choice(self.memory_capacity, size=self.batch_size)
        return self.memory[indices, :]

    def choose_action(self, s):
        s = torch.FloatTensor(s)
        action = self.actor(s)
        return action.detach().numpy()

    def learn(self):

        # soft replacement and hard replacement
        # 用于更新target网络的参数
        if self.replacement['name'] == 'soft':
            # soft的意思是每次learn的时候更新部分参数
            tau = self.replacement['tau']
            a_layers = self.actor_target.named_children()
            c_layers = self.critic_target.named_children()
            for al in a_layers:
                a = self.actor.state_dict()[al[0] + '.weight']
                al[1].weight.data.mul_((1 - tau))
                al[1].weight.data.add_(tau * self.actor.state_dict()[al[0] + '.weight'])
                al[1].bias.data.mul_((1 - tau))
                al[1].bias.data.add_(tau * self.actor.state_dict()[al[0] + '.bias'])
            for cl in c_layers:
                cl[1].weight.data.mul_((1 - tau))
                cl[1].weight.data.add_(tau * self.critic.state_dict()[cl[0] + '.weight'])
                cl[1].bias.data.mul_((1 - tau))
                cl[1].bias.data.add_(tau * self.critic.state_dict()[cl[0] + '.bias'])

        else:
            # hard的意思是每隔一定的步数才更新全部参数
            if self.t_replace_counter % self.replacement['rep_iter'] == 0:
                self.t_replace_counter = 0
                a_layers = self.actor_target.named_children()
                c_layers = self.critic_target.named_children()
                for al in a_layers:
                    al[1].weight.data = self.actor.state_dict()[al[0] + '.weight']
                    al[1].bias.data = self.actor.state_dict()[al[0] + '.bias']
                for cl in c_layers:
                    cl[1].weight.data = self.critic.state_dict()[cl[0] + '.weight']
                    cl[1].bias.data = self.critic.state_dict()[cl[0] + '.bias']

            self.t_replace_counter += 1

        # 从记忆库中采样bacth data
        bm = self.sample()
        bs = torch.FloatTensor(bm[:, :self.state_dim])
        ba = torch.FloatTensor(bm[:, self.state_dim:self.state_dim + self.action_dim])
        br = torch.FloatTensor(bm[:, -self.state_dim - 1: -self.state_dim])
        bs_ = torch.FloatTensor(bm[:, -self.state_dim:])

        # 训练Actor
        a = self.actor(bs)
        q = self.critic(bs, a)
        a_loss = -torch.mean(q)
        self.aopt.zero_grad()
        a_loss.backward(retain_graph=True)
        self.aopt.step()

        # 训练critic
        a_ = self.actor_target(bs_)
        q_ = self.critic_target(bs_, a_)
        q_target = br + self.gamma * q_
        q_eval = self.critic(bs, ba)
        td_error = self.mse_loss(q_target, q_eval)
        self.copt.zero_grad()
        td_error.backward()
        self.copt.step()

    def store_transition(self, s, a, r, s_):
        transition = np.hstack((s, a, r, s_))


        index = self.pointer % self.memory_capacity
        self.memory[index, :] = transition
        self.pointer += 1
        return self.memory,self.pointer



class Config:
    num_episode = 10000
    num_episode_gail = 10000
    state_dim = 2
    hidden_layers_dim = 256
    action_dim = 1
    actor_lr = 3e-4
    critic_lr = 3e-4
    PPO_kwargs = {
        'lmbda': 0.95,
        'eps': 0.2,
        'ppo_epochs': 5
    }
    gamma = 0.9
    device = torch.device('cuda') if torch.cuda.is_available() else torch.device('cpu')
    buffer_size = 20480
    minimal_size = 1024
    batch_size = 128
    save_path = r'D:\ac_model_gail_actor.ckpt'
    save_path_best_actor = r'D:\ac_model_best_actor.ckpt'
    save_path_best_critic = r'D:\ac_model_best_critic.ckpt'
    save_path_bc = r'D:\ac_model_bc.ckpt'
    save_path_gail = r'D:\ac_model_gail.ckpt'
    save_path_dis = r'D:\ac_model_gail_dis.ckpt'
    save_path_critic = r'D:\ac_model_gail_critic.ckpt'
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

# def get_state(soc, v, a):
#     SOC = soc/100
#     # dev_SOC = SOC - 0.6
#     state = np.array([SOC, v,a])
#     return state

# def get_state(soc, P_de,v,a):
#     SOC = soc/100
#     dev_SOC = SOC - 0.6
    # state = np.array([SOC, P_de,v,a])
    # return state
#
def get_state(soc, P_de):
    SOC = soc/100
    # dev_SOC = SOC - 0.6
    state = np.array([SOC, P_de])
    return state
#
# def get_state(soc):
#     SOC = soc
#     # dev_SOC = SOC - 0.6
#     # state = np.array([SOC, P_de])
#     state =np.array([SOC])
#     return state

# 获取奖励
def get_reward(soc,h2,delta_p,Clock):
    SOC = soc/100
    dev_SOC = abs(SOC - 0.6)
    # reward = math.exp(-(dev_SOC))
    reward = -(50*h2 + 0.0001*delta_p +28*(dev_SOC ** 2))
    # reward = -(1000 * h2 + 50 * (dev_SOC)**2)
    # normal_reward = 10 * (reward - 0.9)
    return reward

def data_write(file_path, datas):
    ipTable = datas
    fileObject = open(file_path, 'a')
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
episode =0
def train_agent(cfg):
    print('PPO2训练中...')
    return_list = []
    REPLACEMENT = [
        dict(name='soft', tau=0.005),
        dict(name='hard', rep_iter=600)
    ][0]  # you can try different target replacement strategies
    VAR = 0.1
    MEMORY_CAPACITY = 100000
    ac_agent = DDPG(state_dim=cfg.state_dim,
                action_dim=cfg.action_dim,
                replacement=REPLACEMENT,
                memory_capacity=MEMORY_CAPACITY)
    episode = 0

    engine = matlab.engine.start_matlab()
    env_name = 'FCEvReferenceApplication'
    engine.load_system(env_name)
    tq_bar = tqdm(range(cfg.num_episode))
    bf_reward = -np.inf
    reward_memory=[]
    checkpoint = torch.load('checkpoint.pth.tar')
    epoch = checkpoint['epoch']
    episode = epoch
    ac_agent.actor.load_state_dict(checkpoint['actor_state_dict'])  # 加载模型的参数
    ac_agent.actor_target.load_state_dict(checkpoint['actor_target_state_dict'])
    ac_agent.critic_target.load_state_dict(checkpoint['critic_target_state_dict'])
    ac_agent.aopt.load_state_dict(checkpoint['acotr_optimizer'])  # 加载优化器的[参数
    ac_agent.critic.load_state_dict(checkpoint['critic_state_dict'])  # 加载模[型的参数
    ac_agent.copt.load_state_dict(checkpoint['critic_optimizer'])  # 加载优化[器的参数
    print(epoch)
    ac_agent.pointer=np.load('pointer.npy')
    index = ac_agent.pointer % ac_agent.memory_capacity
    ac_agent.memory =np.load('data.npy')
    VAR = np.load('VAR.npy')
    # ac_agent.pointer = np.load('data.npy')
    steps = 0
    steps=np.load("steps.npy")
    ou_noise = OUNoise(1)
    for i in tq_bar:

        tq_bar.set_description(f'Episode [ {i + 1} / {cfg.num_episode} ]')
        print("第", episode, "回合")
        engine.initial_maltab(nargout=0)
        action = 0
        # state = np.array([0.6,0,0])
        # s_memory.append(state)
        # a_memory.append(action)
        ep_reward = 0
        done = float(False)
        state_list = []
        action_list = []
        next_state_list = []
        rewards_list = []
        done_list = []
        soc_list = []
        pfc_list = []
        h2_list = []
        fc_loss_list = []
        episode_rewards = 0
        # steps = 0
        reward_totle = 0
        episode_return = 0
        total_reward = 0
        count = 0
        pause_time = 2
        action_pre = 0
        # steps = 0
        # for timestep in range(0, 1369, 1):
        noise = OUNoise(1, 154)

        # state = get_state(soc,v,a)
        while True:
            Clock = np.array(engine.eval('Clock')).reshape(-1)

            Clock = Clock[-1]

            if Clock == 0:
                soc = np.array(engine.eval('soc')).reshape(-1)
                v = np.array(engine.eval('v')).reshape(-1)
                a = np.array(engine.eval('a')).reshape(-1)
                p_de = np.array(engine.eval('Pe')).reshape(-1)
                soc = soc[-1]
                a = a[-1]
                v = v[-1]
                p_de = p_de[-1]
                state =  get_state(soc, p_de)
                # state = get_state(soc, v, a)
                # state = get_state(soc, p_de,v,a)
                # next_state = get_state(soc, v, a)
            if Clock - count >= 1:
                # Clock, soc, P_de = engine.run(float(action), pause_time,nargout=3)
                action = ac_agent.choose_action(state)
                print("噪声前",action)
                # action = ou_noise.get_action(action, steps)
                # action = (action + np.random.normal(0, VAR, 1)).clip(0.0, 3.5)
                Clock, soc, v, a,h2,p_de = engine.run(float(action), pause_time, nargout=6)
                p_fc = np.array(engine.eval('P_fc')).reshape(-1)
                fc_loss = np.array(engine.eval('loss')).reshape(-1)
                p_fc = p_fc[-1]
                fc_loss=fc_loss[-1]
                soc_list.append(soc)
                fc_loss_list.append(fc_loss)
                pfc_list.append(p_fc)
                h2_list.append(h2)
                pause_time = pause_time + 1
                # next_state = get_state(soc, v,a)
                next_state = get_state(soc, p_de)


                # action = np.clip(np.random.normal(action, VAR), 0.2, 3.5)  # 在动作选择上添加随机噪声.

                # action = action + 0.6* np.random.randn(1)
                # action = np.clip(action, 2, 35)
                delta_pfc = abs(action-action_pre)
                action_pre = action
                reward = get_reward(soc,h2,delta_pfc ,Clock)
                episode_rewards += reward
                print(state, action, next_state, Clock, reward,steps,VAR)
                # reward = reward_scaling(reward)
                # next_state = state_norm(next_state)

                if Clock == MAX_EP_STEPS:
                    # reward = 20
                    # episode_rewards += -reward
                    # reward = reward_scaling(reward)
                    # done = True
                    # ac_agent.store_transition(state, action, reward , next_state)
                    # torch.save(ac_agent.actor.state_dict(), cfg.save_path_best_actor)
                    # torch.save(ac_agent.critic.state_dict(),cfg.save_path_best_critic)
                    # data_write('D:/reward.xls', episode_rewards)
                    break

                if soc < 20:
                    # reward = -0.1
                    # episode_rewards += -reward
                    # reward = reward_scaling(reward)
                    # action = 20
                    # done = True
                    # ac_agent.store_transition(state, action, reward , next_state)
                    # data_write('D:/reward.xls', episode_rewards)
                    break

                if soc > 99:
                    # reward = -0.1
                    # episode_rewards += reward
                    # reward = reward_scaling(reward)
                    # done = True
                    # buffer_.add(state, action, reward, next_state, done)
                    # data_write('D:/reward.xls', episode_rewards)
                    break



                count = Clock


                # done_memory.append(float(False))
                # soc_memory.append(soc)
                # P_fc_memory.append(action)
                # Clock_memory.append(Clock)
                state_list.append(state)
                action_list.append(action)
                next_state_list.append(next_state)
                done_list.append(done)


                # count = Clock
                s_memory.append(state)
                # ep_reward += reward
                a_memory.append(action)
                # done = True
                # PPO 更新
                # if Clock>=20:
                if Clock>=1:
                    memory,pointer = ac_agent.store_transition(state, action, 10*reward , next_state)
                steps += 1
                np.save('steps.npy',steps)
                # if (episode_rewards >= cfg.max_episode_rewards) or (steps >= cfg.max_episode_steps):
                #     break
                state = next_state
                # if steps == 2048:
                # if ac_agent.pointer > 10000:
                    # print("train!!")
                # VAR *= .999995  # decay the action randomness
                #     ac_agent.learn()
                #     VAR *= 0.99995
                # np.save('VAR.npy',VAR)
                # torch.save(ac_agent.actor.state_dict(), cfg.save_path)
                # torch.save(ac_agent.critic.state_dict(),cfg.save_path_critic)
                # if episode%1==0:
        check = {
            'epoch': episode,  # 保存当前的迭代次数
            'actor_state_dict': ac_agent.actor.state_dict(),  # 保存模型参数
            'actor_target_state_dict':ac_agent.actor_target.state_dict(),
            'critic_state_dict': ac_agent.critic.state_dict(),  # 保存模型参数
            'critic_target_state_dict': ac_agent.critic_target.state_dict(),

            'acotr_optimizer': ac_agent.aopt.state_dict(),  # 保存优化器参数
            'critic_optimizer': ac_agent.copt.state_dict(),  # 保存优化器参数

        }
        torch.save(check, 'checkpoint.pth.tar')
        np.save('data.npy',memory)
        np.save('pointer.npy',pointer)
        np.save('VAR.npy',VAR)
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

        # print("train!!")
        # ac_agent.update(buffer_.buffer)
        # buffer_ = replayBuffer(cfg.buffer_size)
        # # steps = 0
        # torch.save(ac_agent.actor.state_dict(), cfg.save_path)
        # torch.save(ac_agent.critic.state_dict(), cfg.save_path_critic)
        # check = {
        #     'epoch': episode,  # 保存当前的迭代次数
        #     'actor_state_dict': ac_agent.actor.state_dict(),  # 保存模型参数
        #     'critic_state_dict': ac_agent.critic.state_dict(), # 保存模型参数
        #
        #     'acotr_optimizer': ac_agent.actor_opt.state_dict(),  # 保存优化器参数
        #     'critic_optimizer': ac_agent.critic_opt.state_dict(),  # 保存优化器参数
        #
        # }
        # torch.save(check, 'checkpoint.pth.tar')
        if bf_reward < now_reward: #存下reward最好的网络
            bf_reward = now_reward
        #     torch.save(ac_agent.actor.state_dict(), cfg.save_path_best_actor)
        #     torch.save(ac_agent.critic.state_dict(), cfg.save_path_best_critic)
        Writer.add_scalar(tag="ppo_return",scalar_value=now_reward,global_step=i)
        tq_bar.set_postfix({'lastMeanRewards': f'{now_reward:.2f}', 'BEST': f'{bf_reward:.2f}'})
        data_write('D:/reward.xls', rewards_list)
        data_write("./仿真数据/soc.xls", soc_list)
        data_write("./仿真数据/p_fc.xls", pfc_list)
        data_write("./仿真数据/fule_co.xls", h2_list)
        data_write("./仿真数据/fc_loss.xls", fc_loss_list)
        engine.set_param(env_name, 'SimulationCommand', 'stop', nargout=0)
        print("结束")
        episode+=1

    return ac_agent


if __name__ == '__main__':
    print('=='*35)
    print('Training FCEV')
    # env = gym.make('Pendulum-v1')/
    cfg = Config()
    # ac_agent = train_bc(cfg)
    ac_agent = train_agent(cfg)
    # ac_agent = train_agent_gail(cfg)
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
    # gail_agent = train_agent_gail(cfg)
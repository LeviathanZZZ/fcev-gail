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
EPISODES = 200
EP_STEPS = 200
LR_ACTOR = 0.0003
LR_CRITIC = 0.0003
GAMMA = 0.9
TAU = 0.01
# MEMORY_CAPACITY = 20000
BATCH_SIZE = 256
Switch = 0

Writer = SummaryWriter()

class ActorNet(nn.Module):  # define the network structure for actor and critic
    def __init__(self, s_dim, a_dim):
        super(ActorNet, self).__init__()
        self.fc1 = nn.Linear(s_dim, 256)
        self.fc1.weight.data.normal_(0, 0.1)  # initialization of FC1
        self.fc2 = nn.Linear(256, 128)
        self.fc2.weight.data.normal_(0, 0.1)  # initialization of FC1
        self.fc3 = nn.Linear(128,128)
        self.fc3.weight.data.normal_(0, 0.1)  # initialization of FC1
        self.out = nn.Linear(128, a_dim)
        self.out.weight.data.normal_(0, 0.1)  # initilizaiton of OUT

    def forward(self, x):
        x = self.fc1(x)
        x = F.relu(x)
        x = self.fc2(x)
        x = F.relu(x)
        x = self.fc3(x)
        x = F.relu(x)
        x = self.out(x)
        x = torch.sigmoid(x)
        actions = x * 3.5  # for the game "Pendulum-v0", action range is [-2, 2]
        return actions


# Critic Net
# Critic输入的是当前的state以及Actor输出的action,输出的是Q-value
class CriticNet(nn.Module):
    def __init__(self, s_dim, a_dim):
        super(CriticNet, self).__init__()
        self.fcs = nn.Linear(s_dim, 256)
        self.fcs.weight.data.normal_(0, 0.1)
        self.fca = nn.Linear(a_dim, 256)
        self.fca.weight.data.normal_(0, 0.1)
        self.fc1 = nn.Linear(256, 128)
        self.fc1.weight.data.normal_(0, 0.1)
        self.fc2 = nn.Linear(128, 128)
        self.fc2.weight.data.normal_(0, 0.1)
        self.out = nn.Linear(128, 1)
        self.out.weight.data.normal_(0, 0.1)

    def forward(self, s, a):
        x = self.fcs(s)
        y = self.fca(a)
        actions_value = self.fc1(F.relu(x + y))
        actions_value = self.fc2(F.relu(actions_value))
        actions_value = self.out(F.relu(actions_value))
        return actions_value
class Discriminator(nn.Module):
    def __init__(self, state_dim, action_dim):
        super(Discriminator, self).__init__()
        self.layer1 = nn.Linear(state_dim + action_dim, 128)
        self.layer1.weight.data.normal_(0, 0.1)
        self.layer2 = nn.Linear(128, 128)
        self.layer2.weight.data.normal_(0, 0.1)
        self.layer3 = nn.Linear(128, 1)
        self.layer3.weight.data.normal_(0, 0.1)

    def forward(self, state, action):
        x = torch.cat([state, action], 1)
        x = torch.relu(self.layer1(x))
        x = torch.relu(self.layer2(x))
        x = torch.sigmoid(self.layer3(x))
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
    def __init__(self, a_dim, s_dim, a_bound):
        self.a_dim, self.s_dim, self.a_bound = a_dim, s_dim, a_bound
        self.memory = np.zeros((MEMORY_CAPACITY, s_dim * 2 + a_dim + 1), dtype=np.float32)
        self.pointer = 0  # serves as updating the memory data
        # Create the 4 network objects
        self.actor_eval = ActorNet(s_dim, a_dim)
        self.actor_target = ActorNet(s_dim, a_dim)
        self.critic_eval = CriticNet(s_dim, a_dim)
        self.critic_target = CriticNet(s_dim, a_dim)
        # create 2 optimizers for actor and critic
        self.actor_optimizer = torch.optim.Adam(self.actor_eval.parameters(), lr=LR_ACTOR)
        self.critic_optimizer = torch.optim.Adam(self.critic_eval.parameters(), lr=LR_CRITIC)
        # Define the loss function for critic network update
        self.loss_func = nn.MSELoss()
        self.discriminator = Discriminator(s_dim, a_dim)
        self.discriminator_optimizer = torch.optim.Adam(self.discriminator.parameters(), lr=7e-4)

    def store_transition(self, s, a, r, s_):  # how to store the episodic data to buffer
        transition = np.hstack((s, a, r, s_))
        index = self.pointer % MEMORY_CAPACITY  # replace the old data with new data
        self.memory[index, :] = transition
        self.pointer += 1
        return self.memory,self.pointer

    def choose_action(self, s):
        # print(s)
        s = torch.FloatTensor(s)
        action = self.actor_eval(s)
        return action.detach().numpy()

    def learn(self):
        # softly update the target networks
        for x in self.actor_target.state_dict().keys():
            eval('self.actor_target.' + x + '.data.mul_((1-TAU))')
            eval('self.actor_target.' + x + '.data.add_(TAU*self.actor_eval.' + x + '.data)')
        for x in self.critic_target.state_dict().keys():
            eval('self.critic_target.' + x + '.data.mul_((1-TAU))')
            eval('self.critic_target.' + x + '.data.add_(TAU*self.critic_eval.' + x + '.data)')
            # sample from buffer a mini-batch data
        indices = np.random.choice(MEMORY_CAPACITY, size=BATCH_SIZE)
        batch_trans = self.memory[indices, :]
        # extract data from mini-batch of transitions including s, a, r, s_
        batch_s = torch.FloatTensor(batch_trans[:, :self.s_dim])
        batch_a = torch.FloatTensor(batch_trans[:, self.s_dim:self.s_dim + self.a_dim])
        batch_r = torch.FloatTensor(batch_trans[:, -self.s_dim - 1: -self.s_dim])
        batch_s_ = torch.FloatTensor(batch_trans[:, -self.s_dim:])
        # make action and evaluate its action values
        a = self.actor_eval(batch_s)
        q = self.critic_eval(batch_s, a)
        actor_loss = -torch.mean(q)
        # optimize the loss of actor network
        self.actor_optimizer.zero_grad()
        actor_loss.backward()
        self.actor_optimizer.step()

        # compute the target Q value using the information of next state
        a_target = self.actor_target(batch_s_)
        q_tmp = self.critic_target(batch_s_, a_target)
        q_target = batch_r + GAMMA * q_tmp
        # compute the current q value and the loss
        q_eval = self.critic_eval(batch_s, batch_a)
        td_error = self.loss_func(q_target, q_eval)
        # optimize the loss of critic network
        self.critic_optimizer.zero_grad()
        td_error.backward()
        self.critic_optimizer.step()

    def learn_gail(self,expert_s,expert_a):
        # 软更新
        for x in self.actor_target.state_dict().keys():
            eval('self.actor_target.' + x + '.data.mul_((1-TAU))')
            eval('self.actor_target.' + x + '.data.add_(TAU*self.actor_eval.' + x + '.data)')
        for x in self.critic_target.state_dict().keys():
            eval('self.critic_target.' + x + '.data.mul_((1-TAU))')
            eval('self.critic_target.' + x + '.data.add_(TAU*self.critic_eval.' + x + '.data)')

        # 随机在replaybuffer采取batch_size的数据集到minibatch
        indices = np.random.choice(MEMORY_CAPACITY, size=BATCH_SIZE)
        batch_trans = self.memory[indices, :]
        # 从minibatch读取数据集
        batch_s = torch.FloatTensor(batch_trans[:, :self.s_dim])
        batch_a = torch.FloatTensor(batch_trans[:, self.s_dim:self.s_dim + self.a_dim])
        # batch_r = torch.FloatTensor(batch_trans[:, -self.s_dim - 1: -self.s_dim])
        batch_s_ = torch.FloatTensor(batch_trans[:, -self.s_dim:])

        #鉴别器训练
        expert_states = torch.tensor(expert_s, dtype=torch.float)
        expert_actions = torch.tensor(expert_a, dtype=torch.float)
        expert_prob = self.discriminator(expert_states, expert_actions)
        # expert_prob = torch.clamp(expert_prob, 1e-10, 1)
        agent_prob = self.discriminator(batch_s, batch_a)
        # agent_prob = torch.clamp(agent_prob, 1e-10, 1)
        discriminator_loss = nn.BCELoss()(agent_prob, torch.ones_like(agent_prob)) + nn.BCELoss()(expert_prob,
                                                                                                  torch.zeros_like(
                                                                                                      expert_prob))
        self.discriminator_optimizer.zero_grad()
        discriminator_loss.backward()
        # U.clip_grad_norm_(self.discriminator.parameters(), 5.)
        self.discriminator_optimizer.step()
        # make action and evaluate its action values
        batch_r = -torch.log(agent_prob).detach().numpy()
        batch_r = torch.FloatTensor(batch_r)
        a = self.actor_eval(batch_s)
        q = self.critic_eval(batch_s, a)
        actor_loss = -torch.mean(q)
        # optimize the loss of actor network
        self.actor_optimizer.zero_grad()
        actor_loss.backward()
        self.actor_optimizer.step()

        # compute the target Q value using the information of next state
        a_target = self.actor_target(batch_s_)
        q_tmp = self.critic_target(batch_s_, a_target)
        q_target = batch_r + GAMMA * q_tmp
        # compute the current q value and the loss
        q_eval = self.critic_eval(batch_s, batch_a)
        td_error = self.loss_func(q_target, q_eval)
        # optimize the loss of critic network
        self.critic_optimizer.zero_grad()
        td_error.backward()
        self.critic_optimizer.step()



class Config:
    num_episode = 1000
    num_episode_gail = 10000
    state_dim = 2
    hidden_layers_dim = 256
    action_dim = 1
    actor_lr = 1e-3
    critic_lr = 3e-3
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
MEMORY_CAPACITY = 100000
def train_agent(cfg):
    print('PPO2训练中...')
    return_list = []
    REPLACEMENT = [
        dict(name='soft', tau=0.005),
        dict(name='hard', rep_iter=600)
    ][0]  # you can try different target replacement strategies
    VAR = 1
    MEMORY_CAPACITY = 100000
    # ac_agent = DDPG(state_dim=cfg.state_dim,
    #             action_dim=cfg.action_dim,
    #             replacement=REPLACEMENT,
    #             memory_capacity=MEMORY_CAPACITY)
    episode = 0
    expert_s, expert_a = np.load("./state.npy"),np.load("./action.npy")


    engine = matlab.engine.start_matlab()
    env_name = 'FCEvReferenceApplication'
    engine.load_system(env_name)
    tq_bar = tqdm(range(cfg.num_episode))
    ddpg_gail = DDPG(1, 2, 3.5)
    bf_reward = -np.inf
    checkpoint = torch.load('checkpoint.pth.tar')
    ddpg_gail.actor_eval.load_state_dict(checkpoint['actor_state_dict'])  # 加载模型的参数
    ddpg_gail.actor_target.load_state_dict(checkpoint['actor_target_state_dict'])
    ddpg_gail.critic_target.load_state_dict(checkpoint['critic_target_state_dict'])
    ddpg_gail.actor_optimizer.load_state_dict(checkpoint['acotr_optimizer'])  # 加载优化器的[参数
    ddpg_gail.critic_eval.load_state_dict(checkpoint['critic_state_dict'])  # 加载模[型的参数
    ddpg_gail.critic_optimizer.load_state_dict(checkpoint['critic_optimizer'])  # 加载优化[器的参数
    ddpg_gail.discriminator.load_state_dict(checkpoint['dis_state_dict'])
    ddpg_gail.discriminator_optimizer.load_state_dict(checkpoint['dis_optimizer'])
    ddpg_gail.memory = np.load('data.npy')
    # # VAR = np.load('VAR.npy')
    # ddpg_gail.pointer = np.load('pointer.npy')
    # checkpoint = torch.load('checkpoint_best.pth.tar')
    # ddpg_gail.actor_eval.load_state_dict(checkpoint['actor_state_dict'])  # 加载模型的参数
    # ddpg_gail.actor_target.load_state_dict(checkpoint['actor_target_state_dict'])
    # ddpg_gail.critic_target.load_state_dict(checkpoint['critic_target_state_dict'])
    # ddpg_gail.actor_optimizer.load_state_dict(checkpoint['acotr_optimizer'])  # 加载优化器的[参数
    # ddpg_gail.critic_eval.load_state_dict(checkpoint['critic_state_dict'])  # 加载模[型的参数
    # ddpg_gail.critic_optimizer.load_state_dict(checkpoint['critic_optimizer'])  # 加载优化[器的参数
    # ddpg_gail.discriminator.load_state_dict(checkpoint['dis_state_dict'])
    # ddpg_gail.discriminator_optimizer.load_state_dict(checkpoint['dis_optimizer'])
    # ddpg_gail.memory = np.load('data_best.npy')
    # VAR = np.load('VAR_best.npy')
    # ddpg_gail.pointer = np.load('pointer_best.npy')
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
        episode_rewards = 0
        # steps = 0
        reward_totle = 0
        episode_return = 0
        total_reward = 0
        count = 0
        pause_time = 21
        action_pre = 0
        steps = 0
        # for timestep in range(0, 1369, 1):
        noise = OUNoise(1, 154)

        # state = get_state(soc,v,a)
        while True:
            Clock = np.array(engine.eval('Clock')).reshape(-1)

            Clock = Clock[-1]

            if Clock == 20:
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
                action = ddpg_gail.choose_action(state)
                # print("噪声前", action)
                # action = np.clip(np.random.normal(action, VAR), 0, 3.5)
                # action = ou_noise.get_action(action, steps)
                # action = (action + np.random.normal(0, VAR, 1)).clip(0.0, 3.5)
                Clock, soc, v, a,h2,p_de = engine.run(float(action), pause_time, nargout=6)
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
                if Clock>=22:
                    memory,pointer = ddpg_gail.store_transition(state, action, reward, next_state)
                steps += 1
                np.save('steps.npy',steps)
                # if (episode_rewards >= cfg.max_episode_rewards) or (steps >= cfg.max_episode_steps):
                #     break
                state = next_state
                # # if steps == 2048:
                # if ddpg_gail.pointer > 1000:
                #     print("train!!")
                #     ddpg_gail.learn_gail(expert_s,expert_a)
                    # VAR *= 0.99995
                # np.save('VAR.npy',VAR)
                # torch.save(ac_agent.actor.state_dict(), cfg.save_path)
                # torch.save(ac_agent.critic.state_dict(),cfg.save_path_critic)
                # if episode%1==0:
        check = {
            'epoch': episode,  # 保存当前的迭代次数
            'actor_state_dict': ddpg_gail.actor_eval.state_dict(),  # 保存模型参数
            'actor_target_state_dict':ddpg_gail.actor_target.state_dict(),
            'critic_state_dict': ddpg_gail.critic_eval.state_dict(),  # 保存模型参数
            'critic_target_state_dict': ddpg_gail.critic_target.state_dict(),
            'dis_state_dict' : ddpg_gail.discriminator.state_dict(),
            'dis_optimizer' : ddpg_gail.discriminator_optimizer.state_dict(),
            'acotr_optimizer': ddpg_gail.actor_optimizer.state_dict(),  # 保存优化器参数
            'critic_optimizer': ddpg_gail.critic_optimizer.state_dict(),  # 保存优化器参数

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
        #################################################################
        if bf_reward < now_reward: #存下reward最好的网络
            bf_reward = now_reward
        #     torch.save(ac_agent.actor.state_dict(), cfg.save_path_best_actor)
        #     torch.save(ac_agent.critic.state_dict(), cfg.save_path_best_critic)
            check = {
                'epoch': episode,  # 保存当前的迭代次数
                'actor_state_dict': ddpg_gail.actor_eval.state_dict(),  # 保存模型参数
                'actor_target_state_dict': ddpg_gail.actor_target.state_dict(),
                'critic_state_dict': ddpg_gail.critic_eval.state_dict(),  # 保存模型参数
                'critic_target_state_dict': ddpg_gail.critic_target.state_dict(),
                'dis_state_dict': ddpg_gail.discriminator.state_dict(),
                'dis_optimizer': ddpg_gail.discriminator_optimizer.state_dict(),
                'acotr_optimizer': ddpg_gail.actor_optimizer.state_dict(),  # 保存优化器参数
                'critic_optimizer': ddpg_gail.critic_optimizer.state_dict(),  # 保存优化器参数

            }
            torch.save(check, 'checkpoint_best.pth.tar')
            np.save('data_best.npy', memory)
            np.save('pointer_best.npy', pointer)
            np.save('VAR_best.npy', VAR)
            np.save('reward_best.npy',bf_reward)
        ################################################################

        Writer.add_scalar(tag="ppo_return",scalar_value=now_reward,global_step=i)
        tq_bar.set_postfix({'lastMeanRewards': f'{now_reward:.2f}', 'BEST': f'{bf_reward:.2f}'})
        data_write('./reward.xls', rewards_list)
        # data_write('./action.xls', action_list)
        # data_write('./state.xls',state_list)
        engine.set_param(env_name, 'SimulationCommand', 'stop', nargout=0)
        print("结束")
        episode+=1



if __name__ == '__main__':
    print('=='*35)
    print('Training FCEV')
    # env = gym.make('Pendulum-v1')/
    cfg = Config()
    # ac_agent = train_bc(cfg)
    train_agent(cfg)
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

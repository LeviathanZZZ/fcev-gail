################
#MATLAB控制#

import torch
import torch.nn as nn
import matlab.engine
import torch.nn.functional as F
import numpy as np
import gym
import tqdm
import torch as th
from torch.distributions import Normal
from matplotlib import pyplot as plt
import os
from torch.utils.tensorboard import SummaryWriter

state_number = 2
action_number = 1
max_action = 30
min_action = 0
# torch.manual_seed(0)
RENDER = False
EP_MAX = 1000
EP_LEN = 1369
GAMMA = 0.9
actor_lr = 1e-4
critic_lr = 3e-3
num_episodes = 10000
hidden_dim = 256
gamma = 0.995
lambda_ = 0.995
epochs = 10
eps = 0.2
##########Swith=0:训练PPO2，1：测试PPO2，2：训练GAIL，3：测试GAIL
Switch = 0


class PolicyNet(nn.Module):
    def __init__(self, state_dim, hidden_dim, action_dim):
        super(PolicyNet, self).__init__()
        self.fc1 = nn.Linear(state_dim, hidden_dim)
        self.fc2 = nn.Linear(hidden_dim, action_dim)

    def forward(self, x):
        x = torch.relu(self.fc1(x))
        mu = 15* th.relu(self.fc2(x))
        # mu = self.fc2(x)
        return mu
        # x = F.relu(self.fc1(x))
        # return F.softmax(self.fc2(x), dim=1)

    def get_distribution(self, input):
        mu = self.forward(input)
        sigma = torch.ones_like(mu)
        dist = Normal(mu, sigma)
        return dist


class ValueNet(nn.Module):
    def __init__(self, state_dim, hidden_dim):
        super(ValueNet, self).__init__()
        self.fc1 = nn.Linear(state_dim, hidden_dim)
        self.fc2 = nn.Linear(hidden_dim, 1)

    def forward(self, x):
        x = F.relu(self.fc1(x))
        return self.fc2(x)


def compute_advantage(gamma, lambda_, td_delta):
    td_delta = td_delta.cpu().detach().numpy()
    advantage_list = []
    advantage = 0.0
    for delta in td_delta[::-1]:
        advantage = gamma * lambda_ * advantage + delta
        advantage_list.append(advantage)
    advantage_list.reverse()
    return th.tensor(advantage_list, dtype=th.float)


class PPO:
    """ PPO算法，采用截断方式 """

    def __init__(self, state_dim, hidden_dim, action_dim, actor_lr, critic_lr, lambda_, epochs, eps, gamma):
        self.actor = PolicyNet(state_dim, hidden_dim, action_dim).to(device)
        self.critic = ValueNet(state_dim, hidden_dim).to(device)
        # self.critic = Critic()
        self.actor_optimizer = th.optim.Adam(self.actor.parameters(), lr=actor_lr)
        self.critic_optimizer = th.optim.Adam(self.critic.parameters(), lr=critic_lr)
        self.gamma = gamma
        self.lambda_ = lambda_
        self.epochs = epochs
        self.eps = eps

    def take_action(self, state):
        # state = th.tensor([state], dtype=th.float).to(device)
        # probs = self.actor(state)
        # action_dist = th.distributions.Categorical(probs)
        # action = action_dist.sample()
        # return action.item()
        state = torch.from_numpy(state).float().to(device)
        mu = self.actor(state)
        sigma = torch.ones_like(mu)
        action_dist = Normal(mu, sigma)
        action = action_dist.rsample()
        action = th.clamp(action, 0, 30)
        return action.detach().numpy()

    def update(self, transition_dict):
        states = th.tensor(transition_dict["states"], dtype=th.float).to(device)
        actions = th.tensor(transition_dict["actions"], dtype=th.float).view(-1, 1).to(device)
        rewards = th.tensor(transition_dict["rewards"], dtype=th.float).view(-1, 1).to(device)
        # rewards_ = transition_dict["rewards"]
        next_states = th.tensor(transition_dict["next_states"], dtype=th.float).to(device)
        dones = th.tensor(transition_dict["dones"], dtype=th.float).view(-1, 1).to(device)
        td_target = rewards + self.gamma * self.critic(next_states) * (1 - dones).to(device)
        # advantage = self.critic.learn(states,rewards_,next_states)
        td_delta = td_target - self.critic(states)
        # advantage =
        # advantage = td_delta
        # advantage = th.tensor(advantage, dtype=th.float)
        advantage = compute_advantage(self.gamma, self.lambda_, td_delta).to(device)
        # old_log_probs = th.log(self.actor(states).gather(1, actions.type(th.int64))).detach()
        old_dist = self.actor.get_distribution(states)
        old_log_probs = old_dist.log_prob(actions).detach()

        for _ in range(10):
            # log_probs = th.log(self.actor(states).gather(1, actions.type(th.int64)))
            dist = self.actor.get_distribution(states)
            log_probs = dist.log_prob(actions)
            ratio = th.exp(log_probs - old_log_probs)
            surr1 = ratio * advantage
            surr2 = th.clamp(ratio, 1 - self.eps, 1 + self.eps) * advantage
            actor_loss = th.mean(-th.min(surr1, surr2))
            critic_loss = th.mean(F.mse_loss(self.critic(states), td_target.detach()))
            self.actor_optimizer.zero_grad()
            self.critic_optimizer.zero_grad()
            actor_loss.backward()
            critic_loss.backward()
            self.actor_optimizer.step()
            self.critic_optimizer.step()

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
        self.discriminator = Discriminator(state_dim, hidden_dim, action_dim).to(device)
        self.discriminator_optimizer = th.optim.Adam(self.discriminator.parameters(), lr=lr_d)
        self.agent = agent

    def learn(self, expert_s, expert_a, agent_s, agent_a, next_s, dones):
        expert_states = th.tensor(expert_s, dtype=th.float).to(device)
        expert_actions = th.tensor(expert_a, dtype=th.float).to(device)
        agent_states = th.tensor(agent_s, dtype=th.float).to(device)
        agent_actions = th.tensor(agent_a, dtype=th.float).to(device)
        # expert_actions = F.one_hot(expert_actions).float()
        # agent_actions = F.one_hot(agent_actions).float()
        # expert_actions = F.one_hot(expert_actions, num_classes=-1).float()
        # agent_actions = F.one_hot(agent_actions, num_classes=-1).float()
        for _ in range(10):
            expert_prob = self.discriminator(expert_states, expert_actions)
            agent_prob = self.discriminator(agent_states, agent_actions)
            discriminator_loss = nn.BCELoss()(agent_prob, th.ones_like(agent_prob)) + nn.BCELoss()(expert_prob,
                                                                                                   th.zeros_like(
                                                                                                       expert_prob))
            self.discriminator_optimizer.zero_grad()
            discriminator_loss.backward()
            self.discriminator_optimizer.step()

        rewards = -th.log(agent_prob).detach().cpu().numpy()
        transition_dict = {
            'states': agent_s,
            'actions': agent_a,
            'rewards': rewards,
            'next_states': next_s,
            'dones': dones
        }
        self.agent.update(transition_dict)


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
def get_reward(soc):
    SOC = soc/100
    dev_SOC = abs(SOC - 0.6)
    # reward = math.exp(-(dev_SOC))
    reward = -100*(dev_SOC)**2+1
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

path = 'D:/仿真数据/IQL/drivingcycle/'
name = "数据集"

for i in range(100):
    os.path.exists(path)
    isExists = os.path.exists(path + str(i) + name)
    if not isExists:
        os.makedirs(path + str(i) + name)
        print("%s 目录创建成功" % i)
    else:
        print("%s 目录创建成功" % i)
    continue

writer = SummaryWriter('logs')

summaryWriter = SummaryWriter("logs")
p = 0
#
# agent = PPO(2, hidden_dim, 1, actor_lr, critic_lr, lambda_, epochs, eps, gamma)

if Switch == 0:
    print('PPO2训练中...')
    return_list = []
    agent = PPO(2, hidden_dim, 1, actor_lr, critic_lr, lambda_, epochs, eps, gamma)
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
    s_p = np.loadtxt("s_p.txt", dtype=float)
    s_p = s_p.reshape(len(s_p), 1)
    s = np.hstack((s_soc, s_p))
    # s = s_soc
    expert_a = a
    expert_s = s
    gail = GAIL(agent, 2, 1, hidden_dim, 3e-4)
    engine = matlab.engine.start_matlab()
    env_name = 'FCEvReferenceApplication'
    engine.load_system(env_name)
    for episode in range(EP_MAX):
        print("第", episode, "回合")
        engine.initial_maltab(nargout=0)
        action = 2
        state = np.array([0,0])
        s_memory.append(state)
        a_memory.append(action)
        ep_reward = 0
        done = float(False)
        # buffer_s, buffer_a, buffer_r, buffer_a_logp, buffer_next_s, buffer_done = [], [], [], [], [], []
        transition_dict = {"states": [], "actions": [], "next_states": [], "rewards": [], "dones": []}
        state_list = []
        action_list = []
        next_state_list = []
        done_list = []

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
                Clock, soc, P_de = engine.run(float(action), pause_time,nargout=3)
                pause_time = pause_time + 1
                next_state = get_state(soc, P_de)
                # next_state = get_state(soc)
                action = agent.take_action(state)

                if soc < 10:
                    reward = -2000;
                    # action = 20
                    # buffer_r.append(reward)
                    done = True
                    break

                if soc > 90:
                    reward = -2000;
                    # buffer_r.append(reward)
                    done = True
                    break

                # Clock, soc, ef c, P_de, MotTrq = engine.test(float(action), nargout=5)

                # MotTrq = np.array(engine.eval('MotTrq')).reshape(-1)


                # MotTrq = MotTrq[-1]

                # next_state = get_state(soc, P_de)
                reward = get_reward(soc)
                total_reward = total_reward + reward

                    # action = 0

                # reward = (reward - reward.mean()) / (reward.std() + 1e-5)
                # if Clock >= 10:
                transition_dict["states"].append(state)
                transition_dict["actions"].append(action)
                transition_dict["next_states"].append(next_state)
                transition_dict["rewards"].append(reward)
                transition_dict["dones"].append(done)

                count = Clock

                state = next_state
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
            if (Clock+1) % 64 == 0 or Clock == 1369:
                print("training gail")
                engine.set_param(env_name, 'SimulationCommand', 'pause', nargout=0)
                # return_list.append(episode_return)
                # agent.update(transition_dict)
                # transition_dict = {"states": [], "actions": [], "next_states": [], "rewards": [], "dones": []}
                gail.learn(expert_s, expert_a, state_list, action_list, next_state_list, done_list)
                save_data = {'net': agent.actor.state_dict(), 'opt': agent.actor_optimizer.state_dict(), 'i': i}
                torch.save(save_data, "D:\GAIL_PP02_model_actor.pth")
                # save_data = {'net': agent.critic.critic_v.state_dict(), 'opt': agent.critic.optimizer.state_dict(),
                #              'i': i}
                # torch.save(save_data, "D:\GAIL_PP02_critic.pth")
                save_data = {'net': agent.critic.state_dict(), 'opt': agent.critic_optimizer.state_dict(),
                             'i': i}
                torch.save(save_data, "D:\GAIL_PP02_critic.pth")
                engine.set_param(env_name, 'SimulationCommand', 'continue', nargout=0)

            if Clock == MAX_EP_STEPS:
                break

        engine.set_param(env_name, 'SimulationCommand', 'stop', nargout=0)
        print("结束")

        # plt.plot(np.arange(len(all_ep_r)), all_ep_r)
        # plt.xlabel('Episode')
        # plt.ylabel('Moving averaged episode reward')
        # plt.show()
    # else:
    #     print('PPO2测试中...')
    #     aa=Actor()
    #     cc=Critic()
    #     checkpoint_aa = torch.load("E:\PPO2_model_actor.pth")
    #     aa.old_pi.load_state_dict(checkpoint_aa['net'])
    #     checkpoint_cc = torch.load("E:\PPO2_model_critic.pth")
    #     cc.critic_v.load_state_dict(checkpoint_cc['net'])
    #     for j in range(10):
    #         state = env.reset()
    #         total_rewards = 0
    #         for timestep in range(EP_LEN):
    #             env.render()
    #             action, action_logprob = aa.choose_action(state)
    #             new_state, reward, done, info = env.step(action)  # 执行动作
    #             total_rewards += reward
    #             state = new_state
    #         print("Score：", total_rewards)
    #     env.close()

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
state_number= 2
action_number= 1
max_action = 30000
min_action = 0
# torch.manual_seed(0)
RENDER=False
EP_MAX = 1000
EP_LEN = 2474
GAMMA = 0.9
A_LR = 0.0001
C_LR = 0.0001
BATCH = 32
A_UPDATE_STEPS = 10
C_UPDATE_STEPS = 10
METHOD = [
    dict(name='kl_pen', kl_target=0.01, lam=0.5),   # KL penalty
    dict(name='clip', epsilon=0.2),                 # Clipped surrogate objective, find this is better
][1]        # choose the method for optimization
Switch=0
class Discriminator(nn.Module):
    def __init__(self, state_dim, hidden_dim, action_dim):
        super(Discriminator, self).__init__()
        self.fc1 = th.nn.Linear(state_dim + action_dim, hidden_dim)
        self.fc2 = th.nn.Linear(hidden_dim, 1)

    def forward(self, x, a):
        cat = th.cat([x, a], dim=1)
        x = F.relu(self.fc1(cat))
        return th.sigmoid(self.fc2(x))

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
            discriminator_loss = nn.BCELoss()(agent_prob, th.ones_like(agent_prob)) + nn.BCELoss()(expert_prob,th.zeros_like(expert_prob))
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

def get_state(soc,P_de):
    SOC = soc / 100
    dev_SOC = SOC - 0.6
    state = np.array([dev_SOC,P_de])
    return state

#获取奖励
def get_reward(soc):
    SOC = soc / 100
    dev_SOC = abs(SOC - 0.6)
    # reward = math.exp(-(dev_SOC))
    reward = -100 * (dev_SOC) ** 2
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
        print("%s 目录创建成功"%i)
    else:
        print("%s 目录创建成功"%i)
    continue

writer = SummaryWriter('logs')

summaryWriter = SummaryWriter("logs")
p = 0
class CriticNet(nn.Module):
    def __init__(self,input,output):
        super(CriticNet, self).__init__()
        self.in_to_y1=nn.Linear(input,100)
        self.in_to_y1.weight.data.normal_(0,0.1)
        self.out=nn.Linear(100,output)
        self.out.weight.data.normal_(0,0.1)
    def forward(self,inputstate):
        inputstate=self.in_to_y1(inputstate)
        inputstate=F.relu(inputstate)
        Q=self.out(inputstate)
        return Q

class PolicyNet(nn.Module):
    def __init__(self, state_dim, hidden_dim, action_dim):
        super(PolicyNet, self).__init__()
        self.fc1 = nn.Linear(state_dim, hidden_dim)
        self.fc2 = nn.Linear(hidden_dim, action_dim)

    def forward(self, x):
        x = torch.tanh(self.fc1(x))
        mu = self.fc2(x)
        # sigma = F.softplus(self.fc2(x))
        sigma = self.fc2(x)
        # sigma = torch.clamp(sigma, -2, 10)
        return mu,sigma
        # x = F.relu(self.fc1(x))
        # return F.softmax(self.fc2(x), dim=1)

    def get_distribution(self, input):
        mu, sigma = self.forward(input)
        sigma = sigma.exp()
        # sigma = torch.ones_like(mu)
        # sigma = F.softplus(self.forward(input))  # softplus激活函数的值域>0
        dist = Normal(mu, sigma)
        return dist

class Critic():
    def __init__(self):
        self.critic_v=CriticNet(2,1)#改网络输入状态，生成一个Q值
        self.optimizer = torch.optim.Adam(self.critic_v.parameters(), lr=1e-5,eps=1e-5)
        self.lossfunc = nn.MSELoss()

    def get_v(self,s):
        inputstate = torch.FloatTensor(s)
        return self.critic_v(inputstate)

    def learn(self,bs,br):
        bs = torch.FloatTensor(bs)
        reality_v = torch.FloatTensor(br)
        reality_v = torch.clamp(reality_v, min=1e-7, max=1 - 1e-7)
        for _ in range(3):
            v=self.get_v(bs)
            v = torch.clamp(v, min=1e-7, max=1 - 1e-7)
            td_e = self.lossfunc(reality_v, v)
            self.optimizer.zero_grad()
            td_e.backward()
            nn.utils.clip_grad_norm_(self.critic_v.parameters(), 0.5)
            self.optimizer.step()
        return (reality_v-v).detach()

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
        # advantage = torch.clamp(advantage, min=1e-7, max=1 - 1e-7)
        advantage_list.append(advantage)
    advantage_list.reverse()
    return th.tensor(advantage_list, dtype=th.float)


class PPO:
    """ PPO算法，采用截断方式 """

    def __init__(self, state_dim, hidden_dim, action_dim, actor_lr, critic_lr, lambda_, epochs, eps, gamma):
        self.actor = PolicyNet(state_dim, hidden_dim, action_dim).to(device)
        # self.critic = Critic()
        self.critic = ValueNet(state_dim, hidden_dim).to(device)
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
        mu, sigma = self.actor(state)
        sigma = sigma.exp()
        # sigma = torch.clamp(sigma,1,8)
        # sigma = torch.ones_like(mu)
        mu = torch.clamp(mu,0,30000)
        action_dist = Normal(mu, sigma)
        action = action_dist.rsample()
        # action = torch.clamp(action,0,36)
        return action.detach().numpy()

    def update(self, transition_dict):
        # states = th.FloatTensor(transition_dict["states"])
        # actions = th.FloatTensor(transition_dict["actions"])
        # rewards = th.FloatTensor(transition_dict["rewards"])
        # next_states = th.FloatTensor(transition_dict["next_states"])
        # dones = th.FloatTensor(transition_dict["dones"])
        states = th.tensor(transition_dict["states"], dtype=th.float).to(device)
        actions = th.tensor(transition_dict["actions"], dtype=th.float).view(-1, 1).to(device)
        rewards = th.tensor(transition_dict["rewards"], dtype=th.float).view(-1, 1).to(device)
        next_states = th.tensor(transition_dict["next_states"], dtype=th.float).to(device)
        dones = th.tensor(transition_dict["dones"], dtype=th.float).view(-1, 1).to(device)
        td_target = rewards + self.gamma * self.critic(next_states) * (1 - dones).to(device)
        td_delta = td_target - self.critic(states)
        advantage = compute_advantage(self.gamma, self.lambda_, td_delta).to(device)
        # advantage = self.critic.learn(states,rewards)
        # old_log_probs = th.log(self.actor(states).gather(1, actions.type(th.int64))).detach()
        old_dist = self.actor.get_distribution(states)
        old_log_probs = old_dist.log_prob(actions).detach()

        for _ in range(3):
            # log_probs = th.log(self.actor(states).gather(1, actions.type(th.int64)))
            dist = self.actor.get_distribution(states)
            log_probs = dist.log_prob(actions)
            rel = log_probs - old_log_probs
            ratio = th.exp(rel)
            surr1 = ratio * advantage
            surr2 = th.clamp(ratio, 1 - self.eps, 1 + self.eps) * advantage
            actor_loss = -torch.min(surr1,surr2)
            actor_loss = actor_loss.mean()
            critic_loss = th.mean(F.mse_loss(self.critic(states), td_target.detach()))
            self.actor_optimizer.zero_grad()
            self.critic_optimizer.zero_grad()
            actor_loss.backward()
            critic_loss.backward()
            self.actor_optimizer.step()
            self.critic_optimizer.step()
#
agent = PPO(2, 128, 1, 1e-5, 1e-4, lambda_=0.95, epochs=10, eps=0.2, gamma=0.98)

if Switch==0:
    print('PPO2训练中...')
    return_list = []
    # actor=Actor()
    # critic=Critic()
    all_ep_r = []
    a = np.loadtxt("a.txt", dtype=float)
    a = a.reshape(len(a),1)
    s_soc = np.loadtxt("s.txt", dtype=float)
    s_soc = s_soc.reshape(len(s_soc), 1)
    s_p = np.loadtxt("s_p.txt", dtype=float)
    s_p = s_p.reshape(len(s_p), 1)
    s = np.hstack((s_soc, s_p))
    expert_a = a
    expert_s = s
    state_list = []
    action_list = []
    next_state_list = []
    done_list = []
    gail = GAIL(agent, 2, 1, 128, 5e-3)
    for episode in range(EP_MAX):
        engine = matlab.engine.start_matlab()
        env_name = 'FCEvReferenceApplication'
        engine.load_system(env_name)
        action = 2000
        state = np.array([0, 0])
        s_memory.append(state)
        a_memory.append(action)
        ep_reward = 0
        done = float(False)
        pause_time = 1
        count = 0
        engine.set_param('FCEvReferenceApplication/Gain', 'Gain', str(action), nargout=0)
        engine.set_param('FCEvReferenceApplication/pause_time', 'value', str(pause_time), nargout=0)
        engine.set_param(env_name, 'StopTime', str(1369), nargout=0)
        engine.set_param(env_name, 'SimulationCommand', 'start', nargout=0)
        # engine.init(nargout=0)
        # buffer_s, buffer_a, buffer_r,buffer_a_logp = [], [], [],[]
        transition_dict = {"states": [], "actions": [], "next_states": [], "rewards": [], "dones": []}
        reward_totle=0
        episode_return=0
        for timestep in range(0,1369,1):

            engine.set_param('FCEvReferenceApplication/pause_time', 'value', str(timestep), nargout=0)
            engine.set_param('FCEvReferenceApplication/Gain', 'Gain', str(action), nargout=0)

            # Clock, soc, ef c, P_de, MotTrq = engine.test(float(action), nargout=5)
            Clock = np.array(engine.eval('clock')).reshape(-1)
            P_de = np.array(engine.eval('Pe')).reshape(-1)
            efc = np.array(engine.eval('efc')).reshape(-1)
            soc = np.array(engine.eval('soc')).reshape(-1)
            # MotTrq = np.array(engine.eval('MotTrq')).reshape(-1)

            Clock = Clock[-1]
            soc = soc[-1]
            efc = efc[-1]
            P_de = P_de[-1]
            # MotTrq = MotTrq[-1]

            next_state = get_state(soc,P_de)
            reward = get_reward(soc)
            # if soc <= 10:
            #     # reward = -100;
            #     # buffer_r.append(reward)
            #     done=True
            #     break
            # if soc >= 90:
            #     # reward = -100;
            #     # buffer_r.append(reward)
            #     done = True
            #     break

            reward = (reward - reward.mean()) / (reward.std() + 1e-5)
            action = agent.take_action(state)
            transition_dict["states"].append(state)
            transition_dict["actions"].append(action)
            transition_dict["next_states"].append(next_state)
            # transition_dict["rewards"].append(reward)
            transition_dict["dones"].append(done)

            state_list.append(state)
            action_list.append(action)
            next_state_list.append(next_state)
            done_list.append(done)
            state = next_state
            # reward_totle += reward
            # episode_return += reward
            # reward = (reward - reward.mean()) / (reward.std() + 1e-5)

            # transition_dict["states"].append(state)
            # transition_dict["actions"].append(action)
            # transition_dict["next_states"].append(next_state)
            # transition_dict["rewards"].append(reward)
            # transition_dict["dones"].append(done)
            # buffer.add(state, action, reward, next_state, done)

            # r_memory.append(reward)
            done_memory.append(float(False))
            soc_memory.append(soc)
            P_fc_memory.append(action)
            Clock_memory.append(Clock)
            # MotTrq_memory.append(MotTrq)

            print(state, action, next_state, Clock)

            # count = Clock
            s_memory.append(state)
            # ep_reward += reward
            a_memory.append(action)
            count += 1

            # done = True
            # PPO 更新
            if count%128==0 or count==1369-1:
                print("training gail")
                engine.set_param(env_name, 'SimulationCommand', 'pause',nargout=0)
                gail.learn(expert_s, expert_a, state_list, action_list, next_state_list, done_list)

            engine.set_param(env_name, 'SimulationCommand', 'continue', nargout=0)
        # gail.learn(expert_s, expert_a, state_list, action_list, next_state_list, done_list)
        count = 0
        done = True
        engine.set_param(env_name, 'SimulationCommand', 'stop', nargout=0)
        return_list.append(episode_return)
        # agent.update(transition_dict)
        # 保存神经网络参数
        # gail.learn(expert_s, expert_a, state_list, action_list, next_state_list, done_list)
        save_data = {'net': agent.actor.state_dict(), 'opt': agent.actor_optimizer.state_dict(), 'i': i}
        torch.save(save_data, "D:\GAIL_PP02_model_actor.pth")
        # save_data = {'net': agent.critic.critic_v.state_dict(), 'opt': agent.critic.optimizer.state_dict(),
        #              'i': i}
        # torch.save(save_data, "D:\GAIL_PP02_critic.pth")
        save_data = {'net': agent.critic.state_dict(), 'opt': agent.critic_optimizer.state_dict(),
                     'i': i}
        torch.save(save_data, "D:\GAIL_PP02_critic.pth")



        # p += 1
        # for i in range(100):

    plt.plot(np.arange(len(all_ep_r)), all_ep_r)
    plt.xlabel('Episode')
    plt.ylabel('Moving averaged episode reward')
    plt.show()
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

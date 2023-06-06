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
import random
from torch.utils.tensorboard import SummaryWriter
from torch.utils.data import DataLoader, TensorDataset

state_number = 2
action_number = 1
max_action = 30000
min_action = 0
# torch.manual_seed(0)
RENDER = False
EP_MAX = 10000
EP_LEN = 1369
GAMMA = 0.95
A_LR = 0.0001
C_LR = 0.0003
BATCH = 128
A_UPDATE_STEPS = 10
C_UPDATE_STEPS = 10
METHOD = [
    dict(name='kl_pen', kl_target=0.01, lam=0.5),  # KL penalty
    dict(name='clip', epsilon=0.2),  # Clipped surrogate objective, find this is better
][1]  # choose the method for optimization
Switch = 0
Writer = SummaryWriter()


class Discriminator(nn.Module):
    def __init__(self, state_dim, hidden_dim, action_dim):
        super(Discriminator, self).__init__()
        self.fc1 = th.nn.Linear(state_dim + action_dim, hidden_dim)
        self.fc1.weight.data.normal_(0, 0.1)
        # self.fc2 = th.nn.Linear(hidden_dim, hidden_dim)
        # self.fc2.weight.data.normal_(0, 0.1)
        self.fc3 = th.nn.Linear(hidden_dim, 1)
        self.fc3.weight.data.normal_(0, 0.1)

    def forward(self, x, a):
        cat = th.cat([x, a], dim=1)
        x = F.tanh(self.fc1(cat))
        # x = F.tanh(self.fc2(x))
        x = F.sigmoid(self.fc3(x))
        return x


class GAIL:
    def __init__(self, agent, state_dim, action_dim, hidden_dim, lr_d):
        self.discriminator = Discriminator(state_dim, hidden_dim, action_dim).to(device)
        self.discriminator_optimizer = th.optim.Adam(self.discriminator.parameters(), lr=lr_d, eps=1e-3,weight_decay=0.0001)
        self.agent = agent

    def learn(self, expert_s, expert_a, agent_s, agent_a, next_s, dones):
        expert_states = th.tensor(expert_s, dtype=th.float)
        expert_actions = th.tensor(expert_a, dtype=th.float)
        agent_states = th.tensor(agent_s, dtype=th.float)
        agent_actions = th.tensor(agent_a, dtype=th.float)
        # expert_actions = F.one_hot(expert_actions).float()
        # agent_actions = F.one_hot(agent_actions).float()
        # expert_actions = F.one_hot(expert_actions, num_classes=2).float()
        # agent_actions = F.one_hot(agent_actions, num_classes=2).float()
        for _ in range(10):
            expert_prob = self.discriminator(expert_states, expert_actions)
            expert_prob = torch.clamp(expert_prob, 1e-10, 1)
            agent_prob = self.discriminator(agent_states, agent_actions)
            agent_prob = torch.clamp(agent_prob, 1e-10, 1)
            discriminator_loss = nn.BCELoss()(agent_prob, th.ones_like(agent_prob)) + nn.BCELoss()(expert_prob,
                                                                                                   th.zeros_like(
                                                                                                       expert_prob))
            self.discriminator_optimizer.zero_grad()
            discriminator_loss.backward()
            self.discriminator_optimizer.step()
        rewards = -th.log(agent_prob).detach().cpu().numpy()


        # rewards = th.clamp(rewards, 1e-100,)
        # rewards = torch.clamp(rewards,0,1)
        # transition_dict = {
        #     'states': agent_s,
        #     'actions': agent_a,
        #     'rewards': rewards,
        #     'next_states': next_s,
        #     'dones': dones
        # }
        return rewards


def get_state(soc, P_de):
    SOC = soc / 100
    dev_SOC = SOC - 0.6
    state = np.array([dev_SOC, P_de])
    return state


# 获取奖励
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

# path = 'D:/仿真数据/IQL/drivingcycle/'
# name = "数据集"

# for i in range(100):
#     os.path.exists(path)
#     isExists = os.path.exists(path + str(i) + name)
#     if not isExists:
#         os.makedirs(path + str(i) + name)
#         print("%s 目录创建成功" % i)
#     else:
#         print("%s 目录创建成功" % i)
#     continue


p = 0


class ActorNet(nn.Module):
    def __init__(self, inp, outp):
        super(ActorNet, self).__init__()
        self.in_to_y1 = nn.Linear(inp, 64)
        self.in_to_y1.weight.data.normal_(0,0.1)
        self.in_to_y2 = nn.Linear(64, 32)
        self.in_to_y2.weight.data.normal_(0,0.1)
        self.out = nn.Linear(32, outp)
        self.out.weight.data.normal_(0,0.1)
        self.std_out = nn.Linear(32, outp)
        self.std_out.weight.data.normal_(0, 0.1)

    def forward(self, inputstate):
        inputstate = F.relu(self.in_to_y1(inputstate))
        inputstate = F.relu(self.in_to_y2(inputstate))
        # inputstate = F.tanh(inputstate)
        # mean = th.tanh(self.out(inputstate))
        # mean = self.out(inputstate)
        mean = 30*torch.tanh(self.out(inputstate))  # 输出概率分布的均值mean
        # mean = mean.double()
        std = F.softplus(self.std_out(inputstate))  # softplus激活函数的值域>0.
        # std = std.double()
        # std = torch.ones_like(mean)
        # std = self.std_out(inputstate)
        std = torch.clamp(std, -2 , 10)

        # std = std.double()
        std = th.exp(std)
        return mean, std


class CriticNet(nn.Module):
    def __init__(self, input, output):
        super(CriticNet, self).__init__()
        self.in_to_y1 = nn.Linear(input, 64)
        self.in_to_y1.weight.data.normal_(0,0.1)
        self.in_to_y2 = nn.Linear(64, 64)
        self.in_to_y2.weight.data.normal_(0,0.1)
        self.out = nn.Linear(64, output)
        self.out.weight.data.normal_(0,0.1)

    def forward(self, inputstate):
        inputstate = F.relu(self.in_to_y1(inputstate))
        inputstate = F.relu(self.in_to_y2(inputstate))
        Q = self.out(inputstate)
        return Q

class BehaviorClone:
    def __init__(self):
        self.policy = ActorNet(state_number, action_number)
        self.optimizer = th.optim.Adam(self.policy.parameters(), lr=3e-4,eps=1e-5)

    def learn(self, states, actions):
        n_samples = 1369  # 采样30个数据
        random_index = random.sample(range(states.shape[0]), n_samples)
        expert_s = states[random_index]
        expert_a = actions[random_index]
        dataset = TensorDataset(torch.FloatTensor(expert_s), torch.FloatTensor(expert_a))
        train_loader = DataLoader(dataset=dataset,batch_size=64,shuffle=True)  # shuffle参数:打乱数据顺序,默认为False
        criterion = nn.MSELoss()
        criterion = nn.CrossEntropyLoss()

        count_bc = 0
        # action, action_logprob =self.choose_action(states)
        # log_probs = action_logprob
        # bc_loss = th.mean(-log_probs)  # 最大似然估计
        for epi in range(10000):
            running_loss = 0.0
            print("第", epi, "回合")
            for state_expert,action_expert in train_loader:
                self.optimizer.zero_grad()
                action,action_logprob = self.choose_action(state_expert)
                action = torch.FloatTensor(action)
                # loss = CEL(action,action_expert)
                loss = criterion(action/1000,action_expert/1000) #均方误差
                running_loss += loss.item()
                # print("专家：",action_expert,"生成：",action)
                loss.requires_grad_(True)
                loss.backward()
                nn.utils.clip_grad_norm_(self.policy.parameters(), max_norm=0.5)

                self.optimizer.step()
            Writer.add_scalar(tag="loss/train", scalar_value=running_loss,
                              global_step=count_bc)
            print('Epoch %d loss: %.3f' % (epi + 1, running_loss / len(train_loader)))
            count_bc = count_bc + 1

            save_data = {'net': self.policy.state_dict(), 'opt': self.optimizer.state_dict(), 'i': epi}
            torch.save(save_data, "E:\FCE_model_actor_BC.pth")



    def choose_action(self, s):
        # inputstate = torch.FloatTensor(s)
        mean, std = self.policy(s)
        dist = torch.distributions.Normal(mean, std)
        action = dist.sample()
        action = action
        action = torch.clamp(action,0,30000)
        action_logprob = dist.log_prob(action)
        return action.detach().numpy(), action_logprob.detach().numpy()


class Actor():
    def __init__(self):
        self.old_pi, self.new_pi = ActorNet(state_number, action_number), ActorNet(state_number,action_number)
        self.optimizer = torch.optim.Adam(self.new_pi.parameters(), lr=A_LR, eps=1e-5,weight_decay=0.0001)


    def choose_action(self, s):
        inputstate = torch.FloatTensor(s)
        mean, std = self.old_pi(inputstate)
        dist = torch.distributions.Normal(mean.double(), std.double())
        action = dist.rsample()
        # action = action*1000
        action = torch.clamp(action,0,30)
        action_logprob = dist.log_prob(action.double())
        # action_logprob =th.clamp(action_logprob,1e-5,1e5)
        return action.detach().numpy(), action_logprob.detach().numpy()

    def update_oldpi(self):
        self.old_pi.load_state_dict(self.new_pi.state_dict())

    def learn(self, bs, ba, adv, bap):
        bs = torch.FloatTensor(bs)
        ba = torch.FloatTensor(ba)
        adv = torch.FloatTensor(adv)
        bap = torch.FloatTensor(bap)
        for _ in range(A_UPDATE_STEPS):
            mean, std = self.new_pi(bs)
            dist_new = torch.distributions.Normal(mean, std)
            action_new_logprob = dist_new.log_prob(ba)
            ratio = torch.exp(action_new_logprob - bap.detach())
            surr1 = ratio * adv
            surr2 = torch.clamp(ratio, 1 - METHOD['epsilon'], 1 + METHOD['epsilon']) * adv
            loss = -torch.min(surr1, surr2)
            loss = loss.mean()
            self.optimizer.zero_grad()
            loss.backward()
            nn.utils.clip_grad_norm_(self.new_pi.parameters(), 0.5)
            self.optimizer.step()
        return loss


class Critic():
    def __init__(self):
        self.critic_v = CriticNet(state_number, 1)  # 改网络输入状态，生成一个Q值
        self.optimizer = torch.optim.Adam(self.critic_v.parameters(), lr=C_LR, eps=1e-5,weight_decay=0.0001)
        self.lossfunc = nn.MSELoss()

    '''评定动作价值的函数'''

    def get_v(self, s):
        inputstate = torch.FloatTensor(s)
        v = self.critic_v(inputstate)
        # v = torch.clamp(v,1e-100,1e100)
        return v


    '''actor-critic的critic部分的learn函数，td-error的计算代码（V现实减去V估计就是td-error）'''
    def learn(self, bs, br):
        bs = torch.FloatTensor(bs)
        reality_v = torch.FloatTensor(br)
        for _ in range(C_UPDATE_STEPS):
            v = self.get_v(bs)
            td_e = self.lossfunc(reality_v, v)
            self.optimizer.zero_grad()
            td_e.backward()
            nn.utils.clip_grad_norm_(self.critic_v.parameters(), 0.5)
            self.optimizer.step()
        return (reality_v - v).detach()

if Switch == 1:
    print('BC训练中...')
    a = np.loadtxt("a.txt", dtype=float)
    a = a.reshape(len(a), 1)
    s_soc = np.loadtxt("s.txt", dtype=float)
    s_soc = s_soc.reshape(len(s_soc), 1)
    s_p = np.loadtxt("s_p.txt", dtype=float)
    s_p = s_p.reshape(len(s_p), 1)
    s = np.hstack((s_soc, s_p))
    expert_a = a
    expert_s = s
    bc = BehaviorClone()
    bc.learn(expert_s,expert_a)
    print("训练结束")
    # epi = 0

if Switch == 0:
    print('GAIL训练中...')
    return_list = []
    actor = Actor()
    checkpoint_actor = torch.load("E:\FCE_model_actor_BC.pth")
    actor.old_pi.load_state_dict(checkpoint_actor['net'])
    critic = Critic()
    all_ep_r = []
    a = np.loadtxt("a.txt", dtype=float)
    a = a.reshape(len(a), 1)
    s_soc = np.loadtxt("s.txt", dtype=float)
    s_soc = s_soc.reshape(len(s_soc), 1)
    s_p = np.loadtxt("s_p.txt", dtype=float)
    s_p = s_p.reshape(len(s_p), 1)
    # s = np.hstack((s_soc, s_p))
    # expert_a = a
    # expert_s = s
    buffer_s, buffer_a, buffer_r, buffer_a_logp, buffer_next_s, buffer_done = [], [], [], [], [], []
    done_list = []
    # gail = GAIL(agent, 2, 1, 128, 5e-3)
    gail = GAIL(actor, state_number, action_number, 128, 3e-4)
    epi = 0
    for episode in range(EP_MAX):
        engine = matlab.engine.start_matlab()
        env_name = 'FCEvReferenceApplication'
        engine.load_system(env_name)
        action = 2
        state = np.array([0, 0])
        s_memory.append(state)
        a_memory.append(action)
        ep_reward = 0
        done = float(False)
        pause_time = 1
        count = 0
        engine.set_param('FCEvReferenceApplication/Constant', 'value', str(action), nargout=0)
        engine.set_param('FCEvReferenceApplication/pause_time', 'value', str(pause_time), nargout=0)
        engine.set_param(env_name, 'StopTime', str(1369), nargout=0)
        engine.set_param(env_name, 'SimulationCommand', 'start', nargout=0)
        # engine.init(nargout=0)
            # buffer_s, buffer_a, buffer_r,buffer_a_logp = [], [], [],[]
        transition_dict = {"states": [], "actions": [], "next_states": [], "rewards": [], "dones": []}
        reward_totle = 0
        episode_return = 0
        for timestep in range(0, 1369, 1):

            engine.set_param('FCEvReferenceApplication/pause_time', 'value', str(timestep), nargout=0)
            engine.set_param('FCEvReferenceApplication/Constant', 'value', str(action), nargout=0)

            # Clock, soc, ef c, P_de, MotTrq = engine.test(float(action), nargout=5)
            Clock = np.array(engine.eval('Clock')).reshape(-1)
            P_de = np.array(engine.eval('Pe')).reshape(-1)
            efc = np.array(engine.eval('efc')).reshape(-1)
            soc = np.array(engine.eval('soc')).reshape(-1)
            # MotTrq = np.array(engine.eval('MotTrq')).reshape(-1)

            Clock = Clock[-1]
            soc = soc[-1]
            efc = efc[-1]
            P_de = P_de[-1]
            # MotTrq = MotTrq[-1]

            next_state = get_state(soc, P_de)
            # reward = get_reward(soc)
            if soc <= 20:
                # reward = -100;
                # buffer_r.append(reward)
                done=True
                break
            if soc >= 80:
                # reward = -100;
                # buffer_r.append(reward)
                done = True
                break
            # reward = (reward - reward.mean()) / (reward.std() + 1e-5)
            action, action_logprob = actor.choose_action(state)
            # action = action * 1000
            transition_dict["states"].append(state)
            transition_dict["actions"].append(action)
            transition_dict["next_states"].append(next_state)
            # transition_dict["rewards"].append(reward)
            transition_dict["dones"].append(done)

            buffer_s.append(state)
            buffer_a.append(action)
            buffer_next_s.append(next_state)
            buffer_done.append(done)
            state = next_state
            buffer_a_logp.append(action_logprob)
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
            # if count%128==0 or count==1369:
            #     print("training gail")
            #     engine.set_param(env_name, 'SimulationCommand', 'pause',nargout=0)
            #     gail.learn(expert_s, expert_a, state_list, action_list, next_state_list, done_list)
            #
            return_list.append(episode_return)
            if (timestep + 1) % BATCH == 0 or timestep == 1369 - 1:
            # if timestep == 1369:
                print("training gail")
                engine.set_param(env_name, 'SimulationCommand', 'pause', nargout=0)
                rewards = gail.learn(expert_s, expert_a, buffer_s, buffer_a, buffer_next_s, buffer_done)
            #记录判别器概率
                # Writer.add_scalar(tag="rewards/train", scalar_value=rewards,
                #                   global_step=epi)
                buffer_r = rewards.tolist()
                v_observation_ = critic.get_v(next_state)
                v_observation_ = v_observation_.detach().numpy()
                discounted_r = []
                for reward in buffer_r[::-1]:
                    v_observation_ = reward + GAMMA * v_observation_
                    discounted_r.append(v_observation_)
                discounted_r.reverse()
                bs, ba, br, bap = np.vstack(buffer_s), np.vstack(buffer_a), np.array(discounted_r), np.vstack(
                    buffer_a_logp)
                buffer_s, buffer_a, buffer_r, buffer_a_logp, buffer_next_s, buffer_done = [], [], [], [], [], []
                advantage = critic.learn(bs, br)  # critic部分更新
                loss = actor.learn(bs, ba, advantage, bap)  # actor部分更新
                # 记录actor的Loss
                Writer.add_scalar(tag="loss/train", scalar_value=loss,
                                  global_step=epi)
                actor.update_oldpi()  # pi-new的参数赋给pi-old
                # if epi == 0:
                #     all_ep_r.append(reward_totle)
                # else:
                #     all_ep_r.append(all_ep_r[-1] * 0.9 + reward_totle * 0.1)

                save_data = {'net': actor.old_pi.state_dict(), 'opt': actor.optimizer.state_dict(), 'i': episode}
                torch.save(save_data, "E:\FCE_model_actor.pth")
                save_data = {'net': critic.critic_v.state_dict(), 'opt': critic.optimizer.state_dict(),
                             'i': episode}
                torch.save(save_data, "E:\FCE_model_critic.pth")
                epi = epi+1

                # print("\rEp: {} |rewards: {}".format(episode, reward_totle), end="")
                # 保存神经网络参数
                # if episode % 50 == 0 and episode > 100:  # 保存神经网络参数
                #     save_data = {'net': actor.old_pi.state_dict(), 'opt': actor.optimizer.state_dict(), 'i': episode}
                #     torch.save(save_data, "E:\FCE_model_actor.pth")
                #     save_data = {'net': critic.critic_v.state_dict(), 'opt': critic.optimizer.state_dict(),
                #                  'i': episode}
                #     torch.save(save_data, "E:\FCE_model_critic.pth")
            engine.set_param(env_name, 'SimulationCommand', 'continue', nargout=0)
        # gail.learn(expert_s, expert_a, state_list, action_list, next_state_list, done_list)
        # if (timestep + 1) % BATCH == 0 or timestep == 1369 - 1:
            # if timestep == 1369:
        # print("training gail")
        # engine.set_param(env_name, 'SimulationCommand', 'pause', nargout=0)
        # rewards = gail.learn(expert_s, expert_a, buffer_s, buffer_a, buffer_next_s, buffer_done)
        # # 记录判别器概率
        # Writer.add_scalar(tag="rewards/train", scalar_value=rewards[-1],
        #                   global_step=epi)
        # buffer_r = rewards.tolist()
        # v_observation_ = critic.get_v(next_state)
        # v_observation_ = v_observation_.detach().numpy()
        # discounted_r = []
        # for reward in buffer_r[::-1]:
        #     v_observation_ = reward + GAMMA * v_observation_
        #     discounted_r.append(v_observation_)
        # discounted_r.reverse()
        # bs, ba, br, bap = np.vstack(buffer_s), np.vstack(buffer_a), np.array(discounted_r), np.vstack(
        #     buffer_a_logp)
        # buffer_s, buffer_a, buffer_r, buffer_a_logp, buffer_next_s, buffer_done = [], [], [], [], [], []
        # advantage = critic.learn(bs, br)  # critic部分更新
        # loss = actor.learn(bs, ba, advantage, bap)  # actor部分更新
        # # 记录actor的Loss
        # # Writer.add_scalar(tag="loss/train", scalar_value=loss,
        # #                   global_step=epi)
        # actor.update_oldpi()  # pi-new的参数赋给pi-old
        # # if epi == 0:
        # #     all_ep_r.append(reward_totle)
        # # else:
        # #     all_ep_r.append(all_ep_r[-1] * 0.9 + reward_totle * 0.1)
        #
        # save_data = {'net': actor.old_pi.state_dict(), 'opt': actor.optimizer.state_dict(), 'i': episode}
        # torch.save(save_data, "E:\FCE_model_actor.pth")
        # save_data = {'net': critic.critic_v.state_dict(), 'opt': critic.optimizer.state_dict(),
        #              'i': episode}
        # torch.save(save_data, "E:\FCE_model_critic.pth")
        # epi = epi + 1
        engine.set_param(env_name, 'SimulationCommand', 'stop', nargout=0)

        # agent.update(transition_dict)
        # 保存神经网络参数

        # p += 1
        # for i in range(100):
    plt.plot(np.arange(len(all_ep_r)), all_ep_r)
    plt.xlabel('Episode')
    plt.ylabel('Moving averaged episode reward')
    plt.show()

if Switch==2:
    print('PPO2测试中...')
    aa=Actor()
    checkpoint_aa = torch.load("E:\FCE_model_actor_BC.pth")
    aa.old_pi.load_state_dict(checkpoint_aa['net'])
    for episode in range(1):
        engine = matlab.engine.start_matlab()
        env_name = 'FCEvReferenceApplication'
        engine.load_system(env_name)
        action = 0
        state = np.array([0, 0])
        s_memory.append(state)
        a_memory.append(action)
        ep_reward = 0
        done = float(False)
        pause_time = 1
        count = 0
        engine.set_param('FCEvReferenceApplication/Constant', 'value', str(action), nargout=0)
        engine.set_param('FCEvReferenceApplication/pause_time', 'value', str(pause_time), nargout=0)
        engine.set_param(env_name, 'StopTime', str(1369), nargout=0)
        engine.set_param(env_name, 'SimulationCommand', 'start', nargout=0)
        # engine.init(nargout=0)
        # buffer_s, buffer_a, buffer_r,buffer_a_logp = [], [], [],[]
        buffer_s, buffer_a, buffer_r, buffer_a_logp, buffer_next_s, buffer_done = [], [], [], [], [], []
        return_list = []
        transition_dict = {"states": [], "actions": [], "next_states": [], "rewards": [], "dones": []}
        reward_totle = 0
        episode_return = 0
        for timestep in range(0, 1369, 1):

            engine.set_param('FCEvReferenceApplication/pause_time', 'value', str(timestep), nargout=0)
            engine.set_param('FCEvReferenceApplication/Constant', 'value', str(action), nargout=0)

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

            next_state = get_state(soc, P_de)
            # reward = get_reward(soc)
            # if soc <= 10:
            #     reward = -100;
            #     buffer_r.append(reward)
            #     done=True
            #     break
            # if soc >= 90:
            #     reward = -100;
            #     buffer_r.append(reward)
            #     done = True
            #     break
            # reward = (reward - reward.mean()) / (reward.std() + 1e-5)
            action, action_logprob = aa.choose_action(state)
            # action = action * 1000
            transition_dict["states"].append(state)
            transition_dict["actions"].append(action)
            transition_dict["next_states"].append(next_state)
            # transition_dict["rewards"].append(reward)
            transition_dict["dones"].append(done)

            buffer_s.append(state)
            buffer_a.append(action)
            buffer_next_s.append(next_state)
            buffer_done.append(done)
            state = next_state
            buffer_a_logp.append(action_logprob)

            done_memory.append(float(False))
            soc_memory.append(soc)
            P_fc_memory.append(action)
            Clock_memory.append(Clock)
            print(state, action, next_state, Clock)

            s_memory.append(state)
            a_memory.append(action)
            count += 1
            return_list.append(episode_return)
            engine.set_param(env_name, 'SimulationCommand', 'continue', nargout=0)
        engine.set_param(env_name, 'SimulationCommand', 'stop', nargout=0)

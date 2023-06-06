"""
Deep Deterministic Policy Gradient (DDPG), Reinforcement Learning.
torch实现DDPG算法
"""
import torch
import numpy as np
import torch.nn as nn
from torch.utils.tensorboard import SummaryWriter
from normalization import Normalization, RewardScaling
import random
import copy
seed = 1
torch.manual_seed(seed)
np.random.seed(seed)
torch.set_default_dtype(torch.float)
Writer = SummaryWriter()


class OUNoise(object):
    def __init__(self, action_space, mu=0.0, theta=0.15, max_sigma=0.3, min_sigma=0, decay_period=100000):
        self.mu = mu
        self.theta = theta
        self.sigma = max_sigma
        self.max_sigma = max_sigma
        self.min_sigma = min_sigma
        self.decay_period = decay_period
        self.action_dim = action_space.shape[0]
        self.low = action_space.low
        self.high = action_space.high
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
        return np.clip(action + ou_state, self.low, self.high)
# Actor Net
# Actor：输入是state，输出的是一个确定性的action
class Actor(nn.Module):
    def __init__(self, state_dim, action_dim, action_bound):
        super(Actor, self).__init__()
        self.action_bound = torch.FloatTensor(action_bound)

        # layer
        self.layer_1 = nn.Linear(state_dim, 128)
        # nn.init.normal_(self.layer_1.weight, 0., 0.3)
        # nn.init.constant_(self.layer_1.bias, 0.1)
        self.layer_2 = nn.Linear(128, 128)
        # nn.init.normal_(self.layer_2.weight, 0., 0.3)
        # nn.init.constant_(self.layer_2.bias, 0.1)
        # self.layer_1.weight.data.normal_(0.,0.3)
        # self.layer_1.bias.data.fill_(0.1)
        self.output = nn.Linear(128, action_dim)
        # self.output.weight.data.normal_(0., 0.3)
        # self.output.bias.data.fill_(0.1)

    def forward(self, s):
        a = torch.relu(self.layer_1(s))
        a = torch.relu(self.layer_2(a))
        a = torch.sigmoid(self.output(a))
        # 对action进行放缩，实际上a in [-1,1]
        scaled_a = 4*a-2
        return scaled_a


class Discriminator(nn.Module):
    def __init__(self, state_dim, action_dim):
        super(Discriminator, self).__init__()
        self.layer1 = nn.Linear(state_dim + action_dim, 128)
        self.layer2 = nn.Linear(128, 128)
        self.layer3 = nn.Linear(128, 1)

    def forward(self, state, action):
        x = torch.cat([state, action], 1)
        x = torch.relu(self.layer1(x))
        x = torch.relu(self.layer2(x))
        x = torch.sigmoid(self.layer3(x))
        return x


# Critic Net
# Critic输入的是当前的state以及Actor输出的action,输出的是Q-value
class Critic(nn.Module):
    def __init__(self, n_states, n_actions):
        super(Critic, self).__init__()
        #
        self.fc1 = nn.Linear(n_states + n_actions, 128)
        # nn.init.normal_(self.fc1.weight, 0., 0.3)
        # nn.init.constant_(self.fc1.bias, 0.1)
        self.fc2 = nn.Linear(128, 128)
        # nn.init.normal_(self.fc2.weight, 0., 0.3)
        # nn.init.constant_(self.fc2.bias, 0.1)
        self.fc3 = nn.Linear(128, 1)
        # self.fc3.weight.data.normal_(0., 0.3)
        # self.fc3.bias.data.fill_(0.1)
        # 前向传播

    def forward(self, x, a):
        # 拼接状态和动作
        cat = torch.cat([x, a], dim=1)  # [b, n_states + n_actions]
        x = self.fc1(cat)  # -->[b, n_hiddens]
        x = torch.relu(x)
        x = self.fc2(x)  # -->[b, n_hiddens]
        x = torch.relu(x)
        x = self.fc3(x)  # -->[b, 1]
        return x

class DDPG_GAIL(object):
    def __init__(self, state_dim, action_dim, action_bound, replacement, memory_capacity=1000, gamma=0.99, lr_a=1e-4,
                 lr_c=1e-4,batch_size=128):
        super(DDPG_GAIL, self).__init__()
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
        self.actor = Actor(state_dim, action_dim, action_bound)
        self.actor_target = Actor(state_dim, action_dim, action_bound)
        # 定义 Critic 网络
        self.critic = Critic(state_dim, action_dim)
        self.critic_target = Critic(state_dim, action_dim)
        self.discriminator = Discriminator(state_dim, action_dim)
        self.discriminator_optimizer = torch.optim.Adam(self.discriminator.parameters(), lr=3e-4)
        # 定义优化器
        self.aopt = torch.optim.Adam(self.actor.parameters(), lr=lr_a)
        self.copt = torch.optim.Adam(self.critic.parameters(), lr=lr_c)
        # 选取损失函数
        self.mse_loss = nn.MSELoss()

    def sample(self):
        indices = np.random.choice(self.memory_capacity, size=self.batch_size)
        return self.memory[indices, :]

    def sample_expert(self,expert_s,expert_a):
        # indices = np.random.choice(200, size=self.batch_size)
        random_index = random.sample(range(expert_s.shape[0]), self.batch_size)
        return expert_s[random_index],expert_a[random_index]

    def choose_action(self, s):
        s = torch.FloatTensor(s)
        action = self.actor(s)
        return action.detach().numpy()

    def learn(self,expert_s,expert_a):

        # soft replacement and hard replacement
        # 用于更新target网络的参数
        # 从记忆库中采样bacth data
        bm = self.sample()
        bs = torch.FloatTensor(bm[:, :self.state_dim])
        ba = torch.FloatTensor(bm[:, self.state_dim:self.state_dim + self.action_dim])
        # br = torch.FloatTensor(bm[:, -self.state_dim - 1: -self.state_dim])
        bs_ = torch.FloatTensor(bm[:, -self.state_dim:])


        #读取专家数据集
        expert_s,expert_a=self.sample_expert(expert_s,expert_a)
        expert_states = torch.tensor(expert_s, dtype=torch.float)
        expert_actions = torch.tensor(expert_a, dtype=torch.float)
        agent_prob = self.discriminator(bs, ba)
        br = -torch.log(agent_prob).detach().cpu().numpy()
        br = torch.FloatTensor(br)

        for i in range(2):
            expert_prob = self.discriminator(expert_states, expert_actions)
            # expert_prob = torch.clamp(expert_prob, 1e-10, 1)
            agent_prob = self.discriminator(bs, ba)
            # agent_prob = torch.clamp(agent_prob, 1e-10, 1)
            discriminator_loss = nn.BCELoss()(agent_prob, torch.ones_like(agent_prob)) + nn.BCELoss()(expert_prob,torch.zeros_like(expert_prob))
            self.discriminator_optimizer.zero_grad()
            discriminator_loss.backward()
            self.discriminator_optimizer.step()


        # 训练Actor
        a = self.actor(bs)
        q = self.critic(bs, a)
        a_loss = -torch.mean(q)
        self.aopt.zero_grad()
        a_loss.backward(retain_graph=True)
        # nn.utils.clip_grad_norm_(self.actor.parameters(), 0.5)
        self.aopt.step()

        # 训练critic
        a_ = self.actor_target(bs_)
        q_ = self.critic_target(bs_, a_)
        q_target = br + self.gamma * q_
        q_eval = self.critic(bs, ba)
        td_error = self.mse_loss(q_target, q_eval)
        self.copt.zero_grad()
        td_error.backward()
        # nn.utils.clip_grad_norm_(self.critic.parameters(), 0.5)
        self.copt.step()

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

    def store_transition(self, s, a, r, s_):
        transition = np.hstack((s, a, r, s_))
        index = self.pointer % self.memory_capacity
        self.memory[index, :] = transition
        self.pointer += 1

# Deep Deterministic Policy Gradient
class DDPG(object):
    def __init__(self, state_dim, action_dim, action_bound, replacement, memory_capacity=1000, gamma=0.99, lr_a=1e-4,
                 lr_c=1e-3,batch_size=256):
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
        self.actor = Actor(state_dim, action_dim, action_bound)
        self.actor_target = Actor(state_dim, action_dim, action_bound)
        # 定义 Critic 网络
        self.critic = Critic(state_dim, action_dim)
        self.critic_target = Critic(state_dim, action_dim)
        # 定义优化器
        self.aopt = torch.optim.Adam(self.actor.parameters(), lr=lr_a)
        self.copt = torch.optim.Adam(self.critic.parameters(), lr=lr_c)
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
        # nn.utils.clip_grad_norm_(self.actor.parameters(), 0.5)
        self.aopt.step()

        # 训练critic
        a_ = self.actor_target(bs_)
        q_ = self.critic_target(bs_, a_)
        q_target = br + self.gamma * q_
        q_eval = self.critic(bs, ba)
        td_error = self.mse_loss(q_target, q_eval)
        self.copt.zero_grad()
        td_error.backward()
        # nn.utils.clip_grad_norm_(self.critic.parameters(), 0.5)
        self.copt.step()

    def store_transition(self, s, a, r, s_):
        transition = np.hstack((s, a, r, s_))
        index = self.pointer % self.memory_capacity
        self.memory[index, :] = transition
        self.pointer += 1

class OrnsteinUhlenbeckNoise:
    def __init__(self, mu):
        self.theta, self.dt, self.sigma = 0.1, 0.01, 0.1
        self.mu = mu
        self.x_prev = np.zeros_like(self.mu)

    def __call__(self):
        x = self.x_prev + self.theta * (self.mu - self.x_prev) * self.dt + \
                self.sigma * np.sqrt(self.dt) * np.random.normal(size=self.mu.shape)
        self.x_prev = x
        return x

def sample_expert_data(ddpg, n_episode):
    states = []
    actions = []
    env = gym.make('Pendulum-v1')
    for episode in range(n_episode):
        state = env.reset()
        done = False
        total_rewards = 0
        while not done:
            # env.render()
            a = ddpg.choose_action(state)
            next_state, reward, done, _ = env.step(a)
            states.append(state)
            actions.append(a)
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

import gym
import time



def train_ddpg():

    # hyper parameters
    VAR = 0.4
    # control exploration
    MAX_EPISODES = 500
    MAX_EP_STEPS = 200
    MEMORY_CAPACITY = 10000
    REPLACEMENT = [
        dict(name='soft', tau=1e-2),
        dict(name='hard', rep_iter=600)
    ][0]  # you can try different target replacement strategies

    ENV_NAME = 'Pendulum-v1'
    RENDER = False
    reward_scaling = RewardScaling(shape=1, gamma=0.99)
    # train
    env = gym.make(ENV_NAME)
    env.seed(1)
    s_dim = env.observation_space.shape[0]
    a_dim = env.action_space.shape[0]
    a_bound = env.action_space.high
    ddpg = DDPG(state_dim=s_dim,
                action_dim=a_dim,
                action_bound=a_bound,
                replacement=REPLACEMENT,
                memory_capacity=MEMORY_CAPACITY)

    t1 = time.time()
    ou_noise = OUNoise(env.action_space)
    for i in range(MAX_EPISODES):
        s = env.reset()
        ep_reward = 0
        for j in range(MAX_EP_STEPS):
            if RENDER:
                env.render()

            # Add exploration noise
            # a = np.random.uniform(-,)
            # a = a + 0.1 * np.random.randn(a_dim)
            # a= np.clip(a,-2,2)
            a = ddpg.choose_action(s)
            a = ou_noise.get_action(a, j)
            # a+=noise.sample()
            # a = np.clip(a,-2,2)
            # a = np.clip(np.random.normal(a, VAR), -2, 2)  # 在动作选择上添加随机噪声]
            # a = (a + np.random.normal(0,VAR, size=env.action_space.shape[0])).clip(-2.0, 2.0)
            # a = (a+ ou_noise()[0]).clip(-2,2)


            s_, r, done, info = env.step(a)
            # print(r/10)
            ddpg.store_transition(s, a,r , s_)
            # if ddpg.pointer > 256:
                # VAR *= .99995  # decay the action randomness[
            ddpg.learn()
                # print("train")

            s = s_
            ep_reward += r

            if j == MAX_EP_STEPS - 1:
                print('Episode:', i, ' Reward: %i' % int(ep_reward), 'Explore: %.2f' % VAR, ddpg.pointer)
                Writer.add_scalar("return",ep_reward,i)
                torch.save(ddpg.actor.state_dict(), r'D:\ddpg_actor.ckpt')
                # if ep_reward > -300: RENDER = True
                break
    return ddpg

def train_ddpg_gail(expert_s,expert_a):

    # hyper parameters
    VAR = 0.4
    # control exploration
    MAX_EPISODES = 500
    MAX_EP_STEPS = 200
    MEMORY_CAPACITY = 10000
    REPLACEMENT = [
        dict(name='soft', tau=1e-2),
        dict(name='hard', rep_iter=600)
    ][0]  # you can try different target replacement strategies

    ENV_NAME = 'Pendulum-v1'
    RENDER = False
    reward_scaling = RewardScaling(shape=1, gamma=0.99)
    # train
    env = gym.make(ENV_NAME)
    env.seed(1)
    s_dim = env.observation_space.shape[0]
    a_dim = env.action_space.shape[0]
    a_bound = env.action_space.high
    ddpg = DDPG_GAIL(state_dim=s_dim,
                action_dim=a_dim,
                action_bound=a_bound,
                replacement=REPLACEMENT,
                memory_capacity=MEMORY_CAPACITY)

    t1 = time.time()
    ou_noise = OUNoise(env.action_space)
    for i in range(MAX_EPISODES):
        s = env.reset()
        ep_reward = 0
        for j in range(MAX_EP_STEPS):
            if RENDER:
                env.render()

            # Add exploration noise
            # a = np.random.uniform(-,)
            # a = a + 0.1 * np.random.randn(a_dim)
            # a= np.clip(a,-2,2)
            a = ddpg.choose_action(s)
            a = ou_noise.get_action(a, j)
            # a+=noise.sample()
            # a = np.clip(a,-2,2)
            # a = np.clip(np.random.normal(a, VAR), -2, 2)  # 在动作选择上添加随机噪声]
            # a = (a + np.random.normal(0,VAR, size=env.action_space.shape[0])).clip(-2.0, 2.0)
            # a = (a+ ou_noise()[0]).clip(-2,2)


            s_, r, done, info = env.step(a)
            # print(r/10)
            ddpg.store_transition(s, a,r , s_)


            s = s_
            ep_reward += r
            if ddpg.pointer >= 10000:
                # VAR *= .99995  # decay the action randomness[
            # ddpg.learn()
                ddpg.learn(expert_s,expert_a)
            # print("train")
            if j == MAX_EP_STEPS - 1:
                print('Episode:', i, ' Reward: %i' % int(ep_reward), 'Explore: %.2f' % VAR, ddpg.pointer)
                Writer.add_scalar("return",ep_reward,i)
                torch.save(ddpg.actor.state_dict(), r'D:\gail_actor.ckpt')
                # if ep_reward > -300: RENDER = True
                break
    return ddpg


if __name__ == '__main__':
    env = gym.make('Pendulum-v1')
    s_dim = env.observation_space.shape[0]
    a_dim = env.action_space.shape[0]
    a_bound = env.action_space.high
    VAR = 0.4
    # control exploration
    MAX_EPISODES = 500
    MAX_EP_STEPS = 200
    MEMORY_CAPACITY = 100000
    REPLACEMENT = [
        dict(name='soft', tau=1e-3),
        dict(name='hard', rep_iter=600)
    ][0]  # you can try different target replacement strategies
    ddpg = DDPG(state_dim=s_dim,
                action_dim=a_dim,
                action_bound=a_bound,
                replacement=REPLACEMENT,
                memory_capacity=MEMORY_CAPACITY)
    # ddpg=train_ddpg()
    ddpg.actor.load_state_dict(torch.load(r'D:\ddpg_actor.ckpt'))
    expert_s, expert_a = sample_expert_data(ddpg, 5)
    ddpg_gail=train_ddpg_gail(expert_s,expert_a)
    # ddpg.actor.load_state_dict(torch.load(r'D:\gail_actor.ckpt'))
    # expert_s, expert_a = sample_expert_data(ddpg, 10)


    # print('Running time: ', time.time() - t1)
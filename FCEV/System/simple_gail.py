import torch
import torch.nn as nn
import torch.nn.functional as F
import numpy as np
import gym
from tqdm import tqdm
import time
from torch.utils.tensorboard import SummaryWriter
from torch.utils.data import DataLoader, Dataset
Writer = SummaryWriter()
#####################  hyper parameters  ####################
EPISODES = 200
EP_STEPS = 200
LR_ACTOR = 0.0001
LR_CRITIC = 0.001
GAMMA = 0.9
TAU = 0.01
MEMORY_CAPACITY = 10000
BATCH_SIZE = 256
RENDER = False
ENV_NAME = 'Pendulum-v1'


class MyDataset(Dataset):
    def __init__(self, file_path):
        dataset = np.load(file_path, allow_pickle=True).item()

        self.observations = torch.from_numpy(dataset['observations'])
        self.actions = torch.from_numpy(dataset['actions'])

    def __getitem__(self, idx):
        return self.observations[idx], self.actions[idx]

    def __len__(self):
        return len(self.observations)


class BehavioralCloning(nn.Module):
    def __init__(self, n_states, n_actions, lr):
        super(BehavioralCloning, self).__init__()

        self.fc1 = nn.Linear(n_states, 128)
        self.fc2 = nn.Linear(128, 128)
        self.fc3 = nn.Linear(128, n_actions)

        self.lr = lr

        self.lossfn = nn.MSELoss()
        self.optimizer = torch.optim.Adam(self.parameters(), lr=self.lr, weight_decay=0.0001)

    def forward(self, x):
        x = self.fc1(x)
        x = F.relu(x)
        x = self.fc2(x)
        x = F.relu(x)
        x = self.fc3(x)
        output = 2 * F.tanh(x)

        return output

    def choose_action(self, x):
        x = torch.FloatTensor(x)
        # x = x.to(torch.float32)
        action = self.forward(x)
        return action.detach().numpy()

def sample_expert_data(ddpg, n_episode):
    states = []
    actions = []
    env = gym.make('Pendulum-v1')
    dataset = {"observations": [], "actions": []}
    idx = 0
    while True:
        state = env.reset()
        done = False
        total_rewards = 0
        while not done:
            # env.render()
            a = ddpg.choose_action(state)
            next_state, reward, done, _ = env.step(a)
            states.append(state)
            dataset['observations'].append(state)
            dataset['actions'].append(a)
            actions.append(a)
            total_rewards += reward
            state = next_state
            idx += 1
            if idx > 200 * n_episode:
                dataset["observations"] = np.array(dataset["observations"]).reshape(-1, 3)
                dataset["actions"] = np.array(dataset["actions"]).reshape(-1, 1)
                np.save('datasets10000.npy', dataset)
                break
        if idx > 200 * n_episode:
            break
        print("Score：", total_rewards)

    return np.array(states), np.array(actions)

########################## DDPG Framework ######################
class ActorNet(nn.Module):  # define the network structure for actor and critic
    def __init__(self, s_dim, a_dim):
        super(ActorNet, self).__init__()
        self.fc1 = nn.Linear(s_dim, 128)
        # self.fc1.weight.data.normal_(0, 0.1)  # initialization of FC1
        self.fc2 = nn.Linear(128, 128)
        # self.fc2.weight.data.normal_(0, 0.1)  # initialization of FC1
        # self.fc3 = nn.Linear(256,256)
        # self.fc3.weight.data.normal_(0, 0.1)  # initialization of FC1
        self.out = nn.Linear(128, a_dim)
        # self.out.weight.data.normal_(0, 0.1)  # initilizaiton of OUT

    def forward(self, x):
        x = self.fc1(x)
        x = F.relu(x)
        x = self.fc2(x)
        x = F.relu(x)
        # x = self.fc3(x)
        # x = F.tanh(x)
        x = self.out(x)
        x = torch.tanh(x)
        actions = x * 2  # for the game "Pendulum-v0", action range is [-2, 2]
        return actions


class CriticNet(nn.Module):
    def __init__(self, s_dim, a_dim):
        super(CriticNet, self).__init__()
        self.fcs = nn.Linear(s_dim, 128)
        # self.fcs.weight.data.normal_(0, 0.1)
        self.fca = nn.Linear(a_dim+s_dim, 128)
        # self.fca.weight.data.normal_(0, 0.1)
        self.fc1 = nn.Linear(128, 128)
        # self.fc1.weight.data.normal_(0, 0.1)
        # self.fc2 = nn.Linear(256, 256)
        # self.fc2.weight.data.normal_(0, 0.1)
        self.out = nn.Linear(128, 1)
        # self.out.weight.data.normal_(0, 0.1)

    def forward(self, s, a):
        # x = self.fcs(s)
        # y = self.fca(a)
        actions_value = F.relu(self.fca(torch.cat([s, a], 1)))
        actions_value = F.relu(self.fc1(actions_value))
        # actions_value = F.tanh(self.fc2(actions_value))
        actions_value = self.out(actions_value)
        return actions_value

class Discriminator(nn.Module):
    def __init__(self, state_dim, action_dim):
        super(Discriminator, self).__init__()
        self.layer1 = nn.Linear(state_dim + action_dim, 128)
        # self.layer1.weight.data.normal_(0, 0.1)
        self.layer2 = nn.Linear(128, 128)
        # self.layer2.weight.data.normal_(0, 0.1)
        self.fc3 = nn.Linear(128, 128)
        # self.fc3.weight.data.normal_(0, 0.1)  # initialization of FC1
        self.layer3 = nn.Linear(128, 1)
        # self.layer3.weight.data.normal_(0, 0.1)

    def forward(self, state, action):
        x = torch.cat([state, action], 1)
        x = torch.relu(self.layer1(x))
        x = torch.relu(self.layer2(x))
        x = torch.relu(self.fc3(x))
        x = torch.sigmoid(self.layer3(x))
        return x

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
        transition = np.hstack((s, a, [r], s_))
        index = self.pointer % MEMORY_CAPACITY  # replace the old data with new data
        self.memory[index, :] = transition
        self.pointer += 1
        return self.memory, self.pointer

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
        return np.clip(action + ou_state, -2.0,2.0)
############################### Training ######################################
# Define the env in gym

def run_ddpg():
    env = gym.make(ENV_NAME)
    env = env.unwrapped
    env.seed(1)
    s_dim = env.observation_space.shape[0]
    a_dim = env.action_space.shape[0]
    a_bound = env.action_space.high
    a_low_bound = env.action_space.low
    ou_noise = OUNoise(1)
    ddpg = DDPG(a_dim, s_dim, a_bound)
    var = 1  # the controller of exploration which will decay during training process
    t1 = time.time()
    steps = 0
    for i in range(EPISODES):
        s = env.reset()
        ep_r = 0
        for j in range(EP_STEPS):
            if RENDER: env.render()
            # add explorative noise to action
            a = ddpg.choose_action(s)
            # a = np.clip(np.random.normal(a, var), a_low_bound, a_bound)
            a = ou_noise.get_action(a, steps)
            s_, r, done, info = env.step(a)
            ddpg.store_transition(s, a, r , s_)  # store the transition to memory
            steps+=1
            # if ddpg.pointer < MEMORY_CAPACITY:
            #     var *= 0.9995

            if ddpg.pointer > MEMORY_CAPACITY:
                var *= 0.9995  # decay the exploration controller factor
                ddpg.learn()
                torch.save(ddpg.actor_eval.state_dict(), r'.\ddpg_actor.ckpt')

            s = s_
            ep_r += r
            if j == EP_STEPS - 1:
                print('Episode: ', i, ' Reward: %i' % (ep_r), 'Explore: %.2f' % var)
                Writer.add_scalar(tag="return",scalar_value=ep_r,global_step=i)
                # if ep_r > -300: RENDER = True
                break
    print('Running time: ', time.time() - t1)

def run_gail():
    env = gym.make(ENV_NAME)
    env = env.unwrapped
    env.seed(1)
    s_dim = env.observation_space.shape[0]
    a_dim = env.action_space.shape[0]
    a_bound = env.action_space.high
    a_low_bound = env.action_space.low
    ou_noise = OUNoise(1)
    ddpg = DDPG(a_dim, s_dim, a_bound)
    ddpg.actor_eval.load_state_dict(torch.load(r'.\ddpg_actor.ckpt'))
    expert_s,expert_a = sample_expert_data(ddpg,1)
    ddpg_gail = DDPG(a_dim, s_dim, a_bound)
    var = 3  # the controller of exploration which will decay during training process
    t1 = time.time()
    steps=0
    for i in range(EPISODES):
        s = env.reset()
        ep_r = 0
        for j in range(EP_STEPS):
            if RENDER: env.render()
            # add explorative noise to action
            a = ddpg_gail.choose_action(s)
            # if ddpg.pointer < MEMORY_CAPACITY:
                # var *= 0.9995
            a = np.clip(np.random.normal(a, var), a_low_bound, a_bound)
            # a = ou_noise.get_action(a, steps)
            # print(a,"前")
            # print(a,"后")
            s_, r, done, info = env.step(a)
            ddpg_gail.store_transition(s, a, r , s_)  # store the transition to memory


            if ddpg_gail.pointer > 10000:
                var *= 0.9995  # decay the exploration controller factor
                ddpg_gail.learn_gail(expert_s,expert_a)
                # torch.save(ddpg_gail.actor_eval.state_dict(), r'.\gail_actor.ckpt')
            steps+=1
            s = s_
            ep_r += r
            if j == EP_STEPS - 1:
                print('Episode: ', i, ' Reward: %i' % (ep_r), 'Explore: %.2f' % var)
                Writer.add_scalar(tag="return", scalar_value=ep_r, global_step=i)
                # if ep_r > -300: RENDER = True
                break
    print('Running time: ', time.time() - t1)

def run_bc():
    env = gym.make(ENV_NAME)
    env = env.unwrapped
    env.seed(1)
    s_dim = env.observation_space.shape[0]
    a_dim = env.action_space.shape[0]
    a_bound = env.action_space.high
    a_low_bound = env.action_space.low

    ddpg = DDPG(a_dim, s_dim, a_bound)
    ddpg.actor_eval.load_state_dict(torch.load(r'.\ddpg_actor.ckpt'))
    expert_s,expert_a = sample_expert_data(ddpg,1)
    var = 3  # the controller of exploration which will decay during training process
    t1 = time.time()
    model = BehavioralCloning(s_dim, a_dim, lr=0.001)
    file_path = 'datasets10000.npy'
    mydataset = MyDataset(file_path)
    # mydataset = MyDataset(expert_s,expert_a)
    train_loader = DataLoader(dataset=mydataset, batch_size=16, shuffle=True)
    for epoch in range(4):
        for i, data in enumerate(tqdm(train_loader)):
            states, actions = data
            states = states.to(torch.float32)
            actions = actions.to(torch.float32)
            model.optimizer.zero_grad()
            pre_actions = model.forward(states)
            loss = model.lossfn(pre_actions, actions)
            loss.backward()
            model.optimizer.step()

            if i % 10 == 9:
                print('epoch: {} , i: {}, loss: {}'.format(epoch, i, loss))

    torch.save(model.state_dict(), r'.\bc.ckpt')

    print('Running time: ', time.time() - t1)

def test_bc():
    env = gym.make(ENV_NAME)
    env = env.unwrapped
    env.seed(1)
    s_dim = env.observation_space.shape[0]
    a_dim = env.action_space.shape[0]
    a_bound = env.action_space.high
    a_low_bound = env.action_space.low
    model = BehavioralCloning(s_dim,a_dim,lr=0.001)
    model.load_state_dict(torch.load(r'.\bc.ckpt'))
    for episode in range(100):
        state = env.reset()
        done = False
        total_rewards = 0
        for i in range(200):
            # env.render()
            action = model.choose_action(state)
            next_state, reward, done, _ = env.step(action)
            total_rewards += reward
            state = next_state
        print("Score：", total_rewards)
        Writer.add_scalar(tag="eval_return", scalar_value=total_rewards, global_step=episode)
        env.close()

def test_DDPG():
    env = gym.make(ENV_NAME)
    env = env.unwrapped
    env.seed(1)
    s_dim = env.observation_space.shape[0]
    a_dim = env.action_space.shape[0]
    a_bound = env.action_space.high
    a_low_bound = env.action_space.low
    ddpg = DDPG(a_dim,s_dim,a_bound)
    ddpg.actor_eval.load_state_dict(torch.load(r'.\ddpg_actor.ckpt'))
    for episode in range(100):
        state = env.reset()
        done = False
        total_rewards = 0
        for i in range(200):
            # env.render()
            action = ddpg.choose_action(state)
            next_state, reward, done, _ = env.step(action)
            total_rewards += reward
            state = next_state
        print("Score：", total_rewards)
        Writer.add_scalar(tag="eval_return", scalar_value=total_rewards, global_step=episode)
        env.close()

def test_GAIL():
    env = gym.make(ENV_NAME)
    env = env.unwrapped
    env.seed(1)
    s_dim = env.observation_space.shape[0]
    a_dim = env.action_space.shape[0]
    a_bound = env.action_space.high
    a_low_bound = env.action_space.low
    ddpg = DDPG(a_dim,s_dim,a_bound)
    ddpg.actor_eval.load_state_dict(torch.load(r'.\gail_actor.ckpt'))
    for episode in range(100):
        state = env.reset()
        done = False
        total_rewards = 0
        for i in range(200):
            # env.render()
            action = ddpg.choose_action(state)
            next_state, reward, done, _ = env.step(action)
            total_rewards += reward
            state = next_state
        print("Score：", total_rewards)
        Writer.add_scalar(tag="eval_return",scalar_value=total_rewards,global_step=episode)
        env.close()


if __name__ == '__main__':
    # run_ddpg()
    # run_gail()
    # run_bc()
    # test_DDPG()
    # test_GAIL()
    test_bc()

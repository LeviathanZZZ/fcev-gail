import torch
import torch.nn as nn
import torch.optim as optim
from torch.autograd import Variable
import numpy as np
import gym
import random
from collections import deque

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

class ReplayBuffer:
    def __init__(self, capacity: int):
        self.buffer = deque(maxlen=capacity)
        self.pointer = 0
        self.memory = np.zeros((100000, state_dim * 2 + action_dim + 1))
        self.memory_capacity = 100000
        self.batch_size = 128

    def add(self, state, action, reward, next_state, done):
        self.buffer.append((state, action, reward, next_state, done))

    def add_gail(self, state, action, next_state, done):
        self.buffer.append((state, action, next_state, done))

    def add_gail_rewards(self, rewards):
        self.buffer.append((rewards))

    def sample(self):
        indices = np.random.choice(self.memory_capacity, size=self.batch_size)
        return self.memory[indices, :]

    # def storage(self):
    #     self.pointer += 1

    def store_transition(self, s, a, r, s_):
        transition = np.hstack((s, a, r, s_))
        index = self.pointer % self.memory_capacity
        self.memory[index, :] = transition
        self.pointer += 1


# DDPG Actor
class Actor(nn.Module):
    def __init__(self, state_dim, action_dim, max_action):
        super(Actor, self).__init__()
        self.layer_1 = nn.Linear(state_dim, 128)
        self.layer_2 = nn.Linear(128, 128)
        self.layer_3 = nn.Linear(128, action_dim)
        self.max_action = max_action

    def forward(self, x):
        x = torch.relu(self.layer_1(x))
        x = torch.relu(self.layer_2(x))
        x = self.max_action * torch.tanh(self.layer_3(x))
        return x


# DDPG Critic
class Critic(nn.Module):
    def __init__(self, state_dim, action_dim):
        super(Critic, self).__init__()
        self.layer_1 = nn.Linear(state_dim + action_dim, 128)
        self.layer_2 = nn.Linear(128, 128)
        self.layer_3 = nn.Linear(128, 1)

    def forward(self, x, u):
        x = torch.relu(self.layer_1(torch.cat([x, u], 1)))
        x = torch.relu(self.layer_2(x))
        x = self.layer_3(x)
        return x


# DDPG Agent
class DDPG(object):
    def __init__(self, state_dim, action_dim, max_action):
        self.state_dim = state_dim
        self.action_dim = action_dim

        self.actor = Actor(state_dim, action_dim, max_action)
        self.actor_target = Actor(state_dim, action_dim, max_action)
        self.actor_target.load_state_dict(self.actor.state_dict())
        self.actor_optimizer = optim.Adam(self.actor.parameters(), lr=1e-4)

        self.critic = Critic(state_dim, action_dim)
        self.critic_target = Critic(state_dim, action_dim)
        self.critic_target.load_state_dict(self.critic.state_dict())
        self.critic_optimizer = optim.Adam(self.critic.parameters(), lr=1e-3)

        self.max_action = max_action

    def predict(self, state):
        state = torch.FloatTensor(state.reshape(1, -1)).requires_grad_(False)
        return self.actor(state).cpu().data.numpy().flatten()

    def train(self, replay_buffer, iterations, batch_size=64, discount=0.99, tau=0.001):
        for _ in range(iterations):
            # Sample replay buffer
            # state, action, reward, next_state, done = replay_buffer.sample(batch_size)

            bm = replay_buffer.sample()
            state = torch.FloatTensor(bm[:, :self.state_dim])
            action = torch.FloatTensor(bm[:, self.state_dim:self.state_dim + self.action_dim])
            reward = torch.FloatTensor(bm[:, -self.state_dim - 1: -self.state_dim])
            next_state = torch.FloatTensor(bm[:, -self.state_dim:])

            # Compute target Q value
            target_Q = self.critic_target(next_state, self.actor_target(next_state))
            target_Q = reward + discount * target_Q.detach()

            # Update Critic
            current_Q = self.critic(state, action)
            critic_loss = nn.MSELoss()(current_Q, target_Q)
            self.critic_optimizer.zero_grad()
            critic_loss.backward()
            self.critic_optimizer.step()

            # Update Actor
            actor_loss = -self.critic(state, self.actor(state)).mean()
            self.actor_optimizer.zero_grad()
            actor_loss.backward()
            self.actor_optimizer.step()

            # Update target networks
            for param, target_param in zip(self.critic.parameters(), self.critic_target.parameters()):
                target_param.data.copy_(tau * param.data + (1 - tau) * target_param.data)

            for param, target_param in zip(self.actor.parameters(), self.actor_target.parameters()):
                target_param.data.copy_(tau * param.data + (1 - tau) * target_param.data)


# Training DDPG to generate expert trajectories
def train_ddpg(env, ddpg_agent, replay_buffer):
    # Some hyperparameters
    max_episodes = 100
    max_timesteps = 200
    max_buffer_size = 1000000
    batch_size = 128
    ou_noise = OUNoise(env.action_space)
    episode_rewards = []
    steps = 0

    for episode in range(max_episodes):
        state = env.reset()
        ep_reward = 0
        for t in range(max_timesteps):
            action = ddpg_agent.predict(state)
            action = ou_noise.get_action(action, replay_buffer.pointer)
            next_state, reward, done, _ = env.step(action)

            # Add transition to replay buffer
            # replay_buffer.add(state, action, reward, next_state, done
            replay_buffer.store_transition(state, action, reward, next_state)
            state = next_state
            ep_reward += reward

            if replay_buffer.pointer >= batch_size:
                ddpg_agent.train(replay_buffer, iterations=1)

            if done or t == (max_timesteps - 1):
                episode_rewards.append(ep_reward)
                print("Episode: {}, reward: {:.2f}".format(episode, ep_reward))
                break

    return episode_rewards, ddpg_agent

class Discriminator(nn.Module):
    def __init__(self, state_dim, action_dim):
        super(Discriminator, self).__init__()
        self.layer_1 = nn.Linear(state_dim + action_dim, 400)
        self.layer_2 = nn.Linear(400, 300)
        self.layer_3 = nn.Linear(300, 1)

    def forward(self, state, action):
        x = torch.relu(self.layer_1(torch.cat([state, action], 1)))
        x = torch.relu(self.layer_2(x))
        x = torch.sigmoid(self.layer_3(x))
        return x
def train_gail(env, ddpg_agent, expert_agent, discriminator, expert_replay_buffer):
    # Some hyperparameters
    max_episodes = 200
    max_timesteps = 200
    batch_size = 64
    lam = 0.1
    gail_optimizer = optim.Adam(discriminator.parameters(), lr=1e-4)
    for episode in range(max_episodes):
        state = env.reset()
        ep_reward = 0
        for t in range(max_timesteps):
            action = ddpg_agent.predict(state)
            next_state, reward, done, _ = env.step(action)
            ep_reward += reward
            # Get expert action
            expert_action = expert_agent.predict(state)

            # Train discriminator
            state_batch = torch.FloatTensor([state])
            action_batch = torch.FloatTensor([action])
            expert_action_batch = torch.FloatTensor([expert_action])

            d_real = discriminator(state_batch, expert_action_batch)
            d_fake = discriminator(state_batch, action_batch)

            gail_loss = -torch.log(d_real).mean() - torch.log(1 - d_fake).mean()
            gail_optimizer.zero_grad()
            gail_loss.backward()
            gail_optimizer.step()

            # Update reward using discriminator prediction
            reward = torch.log(1 - d_fake).detach().numpy()[0][0] * lam
            # replay_buffer.storage()
            # Train DDPG agent using the updated reward
            replay_buffer.store_transition(state, action, reward, next_state)
            if replay_buffer.pointer >= batch_size:
                ddpg_agent.train(expert_replay_buffer, iterations=1)

            state = next_state


            if done or t == (max_timesteps - 1):
                print("GAIL Episode: {}, reward: {:.2f}".format(episode, ep_reward))
                break

if __name__ == '__main__':
    env = gym.make("Pendulum-v1")
    state_dim = env.observation_space.shape[0]
    action_dim = env.action_space.shape[0]
    max_action = float(env.action_space.high[0])
    ddpg_agent = DDPG(state_dim, action_dim, max_action)

    replay_buffer = ReplayBuffer(capacity=100000)

    # Train DDPG to generate expert trajectories
    episode_rewards, expert_agent = train_ddpg(env, ddpg_agent, replay_buffer)

    # Create GAIL discriminator
    discriminator = Discriminator(state_dim, action_dim)

    # Train GAIL
    train_gail(env, ddpg_agent, expert_agent, discriminator, replay_buffer)





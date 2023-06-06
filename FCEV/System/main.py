import random

import gym
import torch as th
import numpy as np
import matplotlib.pyplot as plt
from train import *
from network import *
from torch import nn
from tqdm import tqdm
from torch.nn import functional as F
from bc import *
from gail_net import *
actor_lr = 1e-3
critic_lr = 1e-2
num_episodes = 300
hidden_dim = 128
gamma = 0.98
lambda_ = 0.95
epochs = 10
eps = 0.2

device = th.device("cuda") if th.cuda.is_available() else th.device("cpu")
env = gym.make("CartPole-v1")
state_dim = env.observation_space.shape[0]
action_dim = env.action_space.n
ppo_agent = PPO(state_dim, hidden_dim, action_dim, actor_lr, critic_lr, lambda_, epochs, eps, gamma)

return_list = train_on_policy_agent(env, ppo_agent, num_episodes)

def sample_expert_data(n_episode):
    states = []
    actions = []
    for episode in range(n_episode):
        state = env.reset()
        done = False
        while not done:
            action = ppo_agent.take_action(state)
            states.append(state)
            actions.append(action)
            next_state, reward, done, _ = env.step(action)
            state = next_state
    return np.array(states), np.array(actions)

n_episode = 1
expert_s, expert_a = sample_expert_data(n_episode)

n_samples = 30  # 采样30个数据
random_index = random.sample(range(expert_s.shape[0]), n_samples)
expert_s = expert_s[random_index]
expert_a = expert_a[random_index]

lr = 1e-3
bc_agent = BehaviorClone(state_dim, hidden_dim, action_dim, lr)
n_iterations = 500
batch_size = 32
test_returns = []

# with tqdm(total=n_iterations, desc="进度条") as pbar:
#     for i in range(n_iterations):
#         sample_indices = np.random.randint(low=0, high=expert_s.shape[0], size=batch_size)
#         bc_agent.learn(expert_s[sample_indices], expert_a[sample_indices])
#         current_return = test_agent(bc_agent, env, 5)
#         test_returns.append(current_return)
#         if (i + 1) % 10 == 0:
#             pbar.set_postfix({'return': '%.3f' % np.mean(test_returns[-10:])})
#         pbar.update(1)
#
# iteration_list = list(range(len(test_returns)))
# plt.plot(iteration_list, test_returns)
# plt.xlabel('Iterations')
# plt.ylabel('Returns')
# plt.title("Behavior Clonning")
# plt.show()

lr_d = 1e-3
agent = PPO(state_dim, hidden_dim, action_dim, actor_lr, critic_lr, lambda_, epochs, eps, gamma)
gail = GAIL(agent, state_dim, action_dim, hidden_dim, lr_d)
n_episode = 500
return_list = []

with tqdm(total=n_episode, desc="进度条") as pbar:
    for i in range(n_episode):
        episode_return = 0
        state = env.reset()
        done = False
        state_list = []
        action_list = []
        next_state_list = []
        done_list = []
        while not done:
            action = agent.take_action(state)
            next_state, reward, done, _ = env.step(action)
            state_list.append(state)
            action_list.append(action)
            next_state_list.append(next_state)
            done_list.append(done)
            state = next_state
            episode_return += reward
        return_list.append(episode_return)
        gail.learn(expert_s, expert_a, state_list, action_list, next_state_list, done_list)
        if (i + 1) % 10 == 0:
            pbar.set_postfix({'return': '%.3f' % np.mean(return_list[-10:])})
        pbar.update(1)


iteration_list = list(range(len(return_list)))
plt.plot(iteration_list, return_list)
plt.xlabel("Episodes")
plt.ylabel("Returns")
plt.title("GAIL")
plt.show()
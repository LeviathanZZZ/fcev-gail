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
device = th.device("cuda") if th.cuda.is_available() else th.device("cpu")

class BehaviorClone:
    def __init__(self, state_dim, hidden_dim, action_dim, lr):
        self.policy = PolicyNet(state_dim, hidden_dim, action_dim).to(device)
        self.optimizer = th.optim.Adam(self.policy.parameters(), lr=lr)

    def learn(self, states, actions):
        states = th.tensor(states, dtype=th.float).to(device)
        actions = th.tensor(actions).view(-1, 1).to(device)
        log_probs = th.log(self.policy(states).gather(1, actions.type(th.int64)))
        bc_loss = th.mean(-log_probs)  # 最大似然估计

        self.optimizer.zero_grad()
        bc_loss.backward()
        self.optimizer.step()

    def take_action(self, state):
        state = th.tensor([state], dtype=th.float).to(device)
        probs = self.policy(state)
        action_dist = th.distributions.Categorical(probs)
        action = action_dist.sample()
        return action.item()


def test_agent(agent, env, n_episode):
    return_list = []
    for episode in range(n_episode):
        episode_return = 0
        state = env.reset()
        done = False
        while not done:
            action = agent.take_action(state)
            next_state, reward, done, _ = env.step(action)
            state = next_state
            episode_return += reward
        return_list.append(episode_return)
    return np.mean(return_list)
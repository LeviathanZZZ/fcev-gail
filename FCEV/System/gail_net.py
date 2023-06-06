import random

import gym
import torch as th
import numpy as np
import matplotlib.pyplot as plt

from torch import nn
from tqdm import tqdm
from torch.nn import functional as F
device = th.device("cuda") if th.cuda.is_available() else th.device("cpu")

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

    def rewards(self, expert_s, expert_a, agent_s, agent_a):
        expert_states = th.tensor(expert_s, dtype=th.float64).to(device)
        expert_actions = th.tensor(expert_a, dtype=th.int64).to(device)
        agent_states = th.tensor(agent_s, dtype=th.float64).to(device)
        agent_actions = th.tensor(agent_a, dtype=th.int64).to(device)
        expert_actions = F.one_hot(expert_actions).float()
        agent_actions = F.one_hot(agent_actions).float()

        expert_prob = self.discriminator(expert_states, expert_actions)
        agent_prob = self.discriminator(agent_states, agent_actions)
        discriminator_loss = nn.BCELoss()(agent_prob, th.ones_like(agent_prob)) + nn.BCELoss()(expert_prob, th.zeros_like(expert_prob))
        self.discriminator_optimizer.zero_grad()
        discriminator_loss.backward()
        self.discriminator_optimizer.step()
        rewards = -th.log(agent_prob).detach().cpu().numpy()
        return rewards

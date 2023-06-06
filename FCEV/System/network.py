import random

import gym
import torch as th
import numpy as np
import matplotlib.pyplot as plt

from torch import nn
from tqdm import tqdm
from torch.nn import functional as F

#策略网络
class PolicyNet(nn.Module):
	def __init__(self, state_dim, hidden_dim, action_dim):
		super(PolicyNet, self).__init__()
		self.fc1 = nn.Linear(state_dim, hidden_dim)
		self.fc2 = nn.Linear(hidden_dim, action_dim)

	def forward(self, x):
		x = F.relu(self.fc1(x))
		return F.softmax(self.fc2(x), dim=1)
#值函数网络
class ValueNet(nn.Module):
	def __init__(self, state_dim, hidden_dim):
		super(ValueNet, self).__init__()
		self.fc1 = nn.Linear(state_dim, hidden_dim)
		self.fc2 = nn.Linear(hidden_dim, 1)

	def forward(self, x):
		x = F.relu(self.fc1(x))
		return self.fc2(x)
############
def compute_advantage(gamma, lambda_, td_delta):
	td_delta = td_delta.cpu().detach().numpy()
	advantage_list = []
	advantage = 0.0
	for delta in td_delta[::-1]:
		advantage = gamma * lambda_ * advantage + delta
		advantage_list.append(advantage)
	advantage_list.reverse()
	return th.tensor(advantage_list, dtype=th.float)
#################
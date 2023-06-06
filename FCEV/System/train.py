import random

import gym
import torch as th
import numpy as np
import matplotlib.pyplot as plt
from network import *
from torch import nn
from tqdm import tqdm
from torch.nn import functional as F
device = th.device("cuda") if th.cuda.is_available() else th.device("cpu")
epochs = 10

class PPO:
	""" PPO算法，采用截断方式 """

	def __init__(self, state_dim, hidden_dim, action_dim, actor_lr, critic_lr, lambda_, epochs, eps, gamma):
		self.actor = PolicyNet(state_dim, hidden_dim, action_dim).to(device)
		self.critic = ValueNet(state_dim, hidden_dim).to(device)
		self.actor_optimizer = th.optim.Adam(self.actor.parameters(), lr=actor_lr)
		self.critic_optimizer = th.optim.Adam(self.critic.parameters(), lr=critic_lr)
		self.gamma = gamma
		self.lambda_ = lambda_
		self.epochs = epochs
		self.eps = eps

	def take_action(self, state):
		state = th.tensor([state], dtype=th.float).to(device)
		probs = self.actor(state)
		action_dist = th.distributions.Categorical(probs)
		action = action_dist.sample()
		return action.item()

	def update(self, transition_dict):
		states = th.tensor(transition_dict["states"], dtype=th.float).to(device)
		actions = th.tensor(transition_dict["actions"], dtype=th.float).view(-1, 1).to(device)
		rewards = th.tensor(transition_dict["rewards"], dtype=th.float).view(-1, 1).to(device)
		next_states = th.tensor(transition_dict["next_states"], dtype=th.float).to(device)
		dones = th.tensor(transition_dict["dones"], dtype=th.float).view(-1, 1).to(device)
		td_target = rewards + self.gamma * self.critic(next_states) * (1 - dones).to(device)
		td_delta = td_target - self.critic(states)
		advantage = compute_advantage(self.gamma, self.lambda_, td_delta).to(device)
		old_log_probs = th.log(self.actor(states).gather(1, actions.type(th.int64))).detach()

		for _ in range(self.epochs):
			log_probs = th.log(self.actor(states).gather(1, actions.type(th.int64)))
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

def train_on_policy_agent(env, agent, num_episodes):
	return_list = []
	for i in range(epochs):
		with tqdm(total=int(num_episodes / 10), desc='Iteration %d' % i) as pbar:
			for i_episode in range(int(num_episodes / 10)):
				episode_return = 0
				transition_dict = {"states": [], "actions": [], "next_states": [], "rewards": [], "dones": []}
				state = env.reset()
				done = False
				while not done:
					action = agent.take_action(state)
					print(action)
					next_state, reward, done, _ = env.step(action)

					transition_dict["states"].append(state)
					transition_dict["actions"].append(action)
					transition_dict["next_states"].append(next_state)
					transition_dict["rewards"].append(reward)
					transition_dict["dones"].append(done)
					state = next_state
					episode_return += reward
				return_list.append(episode_return)
				agent.update(transition_dict)
				if (i_episode + 1) % 10 == 0:
					pbar.set_postfix({'episode': '%d' % (num_episodes / 10 * i + i_episode + 1),
					                  'return': '%.3f' % np.mean(return_list[-10:])})
				pbar.update(1)
	return return_list
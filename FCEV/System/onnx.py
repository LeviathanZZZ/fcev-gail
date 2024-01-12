import torch
import torch.nn as nn
import torch.nn.functional as F


class ActorNet(nn.Module):  # define the network structure for actor and critic
    def __init__(self, s_dim, a_dim):
        super(ActorNet, self).__init__()
        self.fc1 = nn.Linear(s_dim, 256)
        self.fc1.weight.data.normal_(0, 0.1)  # initialization of FC1
        self.fc2 = nn.Linear(256, 256)
        self.fc2.weight.data.normal_(0, 0.1)  # initialization of FC1
        # self.fc3 = nn.Linear(256, 256)
        # self.fc3.weight.data.normal_(0, 0.1)  # initialization of FC1
        # self.fc4 = nn.Linear(256, 256)
        # self.fc4.weight.data.normal_(0, 0.1)  # initialization of FC1
        self.out = nn.Linear(256, a_dim)
        self.out.weight.data.normal_(0, 0.1)  # initilizaiton of OUT

    def forward(self, x):
        x = self.fc1(x)
        x = F.relu(x)
        x = self.fc2(x)
        x = F.relu(x)
        # x = self.fc3(x)
        # x = F.relu(x)
        # x = self.fc4(x)
        # x = F.relu(x)
        x = self.out(x)
        x = torch.sigmoid(x)
        actions = x * 2.5  # for the game "Pendulum-v0", action range is [-2, 2]

        return actions

def torch2onnx(model):
    x = torch.randn(1)
    ratio = torch.randn(1, 2)
    input_names = ["input1",'input2']
    output_names = ["output1"]
    output_path = './actor.onnx'

    torch.onnx.export(
        model,
        (x,ratio),
        output_path,
        verbose=False,
        opset_version=11,
        input_names=input_names,
        output_names=output_names,
    )

checkpoint = torch.load('checkpoint_best.pth.tar')

actor=ActorNet(2,1)

actor.load_state_dict(checkpoint['actor_state_dict'])
dummy_input = torch.randn(1, 2)

# 指定导出的ONNX文件路径
onnx_path = "actor_net.onnx"

# 导出模型为 ONNX 格式
torch.onnx.export(actor, dummy_input, onnx_path, verbose=True)
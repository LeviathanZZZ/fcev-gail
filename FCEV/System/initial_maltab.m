%% ��������д��ں͹�����
clc,clear
%% simulinkģ����
FCEvReferenceApplication
%% ��ʼ��'LOL'ģ���µ�����ģ��
set_param('FCEvReferenceApplication/Constant','value',num2str(0));      %��engine��������Gain����ֵ
set_param('FCEvReferenceApplication','SimulationCommand','start'); %ģ�Ϳ�ʼ����
set_param('FCEvReferenceApplication/pause_time','value',num2str(1)); 
set_param('FCEvReferenceApplication','SimulationCommand','pause'); %ģ����ͣ
%% ��ʼ������
% clock_new=clock';
% clock1=clock_new(end);

% EngineSpeed_new=EngineSpeed';
% EngineSpeed1=EngineSpeed_new(end);
% 
% LoadTorque_new=LoadTorque';
% LoadTorque1=LoadTorque_new(end);
%% �޸�

% clock_new=clock';
% clock1=clock_new(end);
% 
% EngineSpeed_new=EngineSpeed';
% EngineSpeed1=EngineSpeed_new(end);
% 
% LoadTorque_new=LoadTorque';
% LoadTorque1=LoadTorque_new(end);
% 
% ThrottleAngle_new=ThrottleAngle';
% ThrottleAngle1=ThrottleAngle_new(end);

Clock=evalin('caller','Clock(end,:)');
soc=evalin('caller','soc(end,:)');
P_de=evalin('caller','Pe(end,:)');
v=evalin('caller','v(end,:)');
a=evalin('caller','a(end,:)');
% assignin('base', 'EngineSpeed', EngineSpeed);
% LoadTorque=evalin('caller','LoadTorque(end,:)');
% assignin('base', 'LoadTorque', LoadTorque);
% ThrottleAngle=evalin('caller','ThrottleAngle(end,:)');
% assignin('base', 'ThrottleAngle', ThrottleAngle);
% assignin('base', 'clock', clock);
 
%EngineSpeed1=evalin('caller','EngineSpeed(end,:)');
%assignin('base', 'EngineSpeed', EngineSpeed);
 
%LoadTorque1=evalin('caller','LoadTorque(end,:)');
%assignin('base', 'LoadTorque', LoadTorque);

% EngineSpeed_new=EngineSpeed.';
% EngineSpeed1=EngineSpeed_new(end);

% LoadTorque_new=LoadTorque.';
% LoadTorque1=LoadTorque_new(end);

set_param('FCEvReferenceApplication','SimulationCommand','continue');
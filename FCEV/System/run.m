function [clock,soc,v,a,h2,P_de] = run(action,pause_time)
%ZSN624 此处显示有关此函数的摘要
%   此处显示详细说明
set_param('FCEvReferenceApplication/pause_time','value',num2str(pause_time));
set_param('FCEvReferenceApplication/Constant','value',num2str(action));

%set_param('FCEvReferenceApplication','SimulationCommand','pause');

%set_param('engine','SimulationCommand','step');
% set_param('engine','SimulationCommand','pause');
%% 提取变量中的值
% clock_new=clock';
% clock1=clock_new(end);
% 
% EngineSpeed_new=EngineSpeed';
% EngineSpeed1=EngineSpeed_new(end);
% 
% LoadTorque_new=LoadTorque';
% LoadTorque1=LoadTorque_new(end);

clock=evalin('caller','Clock(end,:)');
soc=evalin('caller','soc(end,:)');
P_de=evalin('caller','Pe(end,:)');
v=evalin('caller','v(end,:)');
a=evalin('caller','a(end,:)');
h2=evalin('caller','h2(end,:)');
%delta_p=evalin('caller','delta_p(end,:)');


% LoadTorque=evalin('caller','LoadTorque(end,:)');
% ThrottleAngle=evalin('caller','ThrottleAngle(end,:)');

% assignin('base', 'clock', clock);

%EngineSpeed1=evalin('caller','EngineSpeed(end,:)');
%assignin('base', 'EngineSpeed', EngineSpeed);

%LoadTorque1=evalin('caller','LoadTorque(end,:)');
%assignin('base', 'LoadTorque', LoadTorque);

% clock_new=clock';
% clock1=clock_new(end);

% EngineSpeed_new=EngineSpeed';
% EngineSpeed1=EngineSpeed_new(end);

% LoadTorque_new=LoadTorque';
% LoadTorque1=LoadTorque_new(end);
set_param('FCEvReferenceApplication','SimulationCommand','continue');
end


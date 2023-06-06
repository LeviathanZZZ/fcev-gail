

obsInfo = rlNumericSpec([2 1],...
    'LowerLimit',[0 -inf]',...
    'UpperLimit',[1,inf]');
obsInfo.Name = 'observations';
obsInfo.Description = 'integrated error, error, and measured height';


actInfo = rlNumericSpec([1 1],...
    'LowerLimit',[0.02]',...
    'UpperLimit',[3.5]');

numObservations = 2;

actInfo.Name = 'Pfc';
numActions = actInfo.Dimension(1);

agentBlocks = 'FCEvReferenceApplication_self_rl/RL Agent';
env = rlSimulinkEnv('FCEvReferenceApplication_self_rl',agentBlocks,obsInfo,actInfo);

%env.ResetFcn = @(in)localResetFcn(in);

rng(0)

criticNetwork = [
    featureInputLayer(numObservations,'Normalization','none','Name','observations')
    fullyConnectedLayer(256,'Name','fc1')
    reluLayer('Name','relu1')
    fullyConnectedLayer(256,'Name','fc2')
    reluLayer('Name','relu2')
    fullyConnectedLayer(1,'Name','fc3')];

% criticOptions = rlRepresentationOptions('LearnRate',1e-3,'GradientThreshold',1);
% critic = rlValueRepresentation(criticNetwork,obsInfo,...
%     'Observation',{'observations'},criticOptions);
critic = rlValueFunction(criticNetwork,obsInfo);
% Input path layers
% inPath = [ 
%     featureInputLayer( ...
%         prod(obsInfo.Dimension), ...
%         Name="netOin")
%     fullyConnectedLayer( ...
%         prod(actInfo.Dimension), ...
%         Name="infc") 
%     ];

inPath = [
    featureInputLayer( ...
        prod(obsInfo.Dimension), ...
        Name="netOin")
    fullyConnectedLayer(256,'Name','fc1')
    reluLayer('Name','relu1')
    fullyConnectedLayer(256,'Name','fc2')
    reluLayer('Name','relu2')
    fullyConnectedLayer(1,'Name',"infc")];

% Path layers for mean value 
% Using scalingLayer to scale range from (-1,1) to (-10,10)
meanPath = [ 
    tanhLayer(Name="tanhMean");
    fullyConnectedLayer(prod(actInfo.Dimension));
    scalingLayer(Name="scale", ...
    Scale=actInfo.UpperLimit) 
    ];

% Path layers for standard deviations
% Using softplus layer to make them non negative
sdevPath = [ 
    tanhLayer(Name="tanhStdv");
    fullyConnectedLayer(prod(actInfo.Dimension));
    softplusLayer(Name="splus") 
    ];

% Add layers to network object
actorNetwork = layerGraph(inPath);
% actorNetwork = addLayers(actorNetwork,hiddenPath);
actorNetwork = addLayers(actorNetwork,meanPath);
actorNetwork = addLayers(actorNetwork,sdevPath);

% Connect layers
actorNetwork = connectLayers(actorNetwork,"infc","tanhMean/in");
actorNetwork = connectLayers(actorNetwork,"infc","tanhStdv/in");


actorOptions = rlRepresentationOptions('LearnRate',5e-4,'GradientThreshold',1);
actor = rlContinuousGaussianActor(actorNetwork, obsInfo, actInfo, ...
    ActionMeanOutputNames="scale",...
    ActionStandardDeviationOutputNames="splus",...
    ObservationInputNames="netOin");
checkpointPath = pwd;
agentOpts = rlPPOAgentOptions(...
    'SampleTime',1,...
    'ExperienceHorizon',1369,...
    'ClipFactor',0.2,... 
    'EntropyLossWeight',0.01,...
    'MiniBatchSize',64,...
    'NumEpoch',5,...
    'AdvantageEstimateMethod',"gae",...
    'GAEFactor',0.95,...
    'DiscountFactor',0.998);
% agent = rlPPOAgent(actor,critic,agentOpts);
% myActorOpts = rlOptimizerOptions("Algorithm","adam","GradientThreshold",0.5,"LearnRate",5e-4);
% myCriticOpts = rlOptimizerOptions("Algorithm","adam","GradientThreshold",0.5,"LearnRate",1e-3);
% 
% agent.AgentOptions.ActorOptimizerOptions = myActorOpts;
% agent.AgentOptions.CriticOptimizerOptions = myCriticOpts;
trainOpts = rlTrainingOptions(...
    'MaxEpisodes',10000,...
    'MaxStepsPerEpisode',1369,...
    'ScoreAveragingWindowLength',200,...
    'Plots','training-progress',...
    'StopTrainingCriteria','AverageReward',...
    'StopTrainingValue',-400 ...
    );
% trainOpts.UseParallel = true;
% trainOpts.ParallelizationOptions.Mode = "async";
% trainOpts.ParallelizationOptions.DataToSendFromWorkers = 'Experiences';
trainingStats = train(agent,env,trainOpts);


function [X, C, I, out] = FCV_EMS_DP_advisor_model(inp,par)
% A (orginal,convex: controlled by par.is_convex) FCV model for EMS
%% define varibles
veh_spd = inp.W{1};
veh_acc = inp.W{2};
P_mot = inp.W{3};
fc_pwr = inp.U{1};
ess_soc = inp.X{1};

%% parametas
% Vehicle parametas
veh_whl_radius = 0.327;
veh_mass = 1500;
veh_rrc  = 0.015;
veh_air_density = 1.2;
veh_FA = 2.27;
veh_CD = 0.28;
veh_gravity = 9.81;
veh_fd_ratio = 7.94;

% Fuel cell parameters
fc_pwr_min = 0;
fc_pwr_max = 70682.46;
% fc_pwr_dif_max = 15*1000;
% fc_pwr_map = [0, 2, 5, 7.5, 10, 20, 30, 40, 50] * 1000; % % kW (net) including parasitic losses
fc_pwr_map = [0,	11142.78, 20809.55, 29598.70, 37586.92, 44811.18, 51285.15, 57007.54, 61956.33, 66070.24, 69185.58,...
    796.0400, 11737.25, 21349.90, 30090.26, 38032.81, 45212.72, 51642.67, 57320.41, 62222.34, 66283.67, 69329.96,...
    1519.040, 12327.40, 21887.24, 30579.07, 38476.06, 45611.66, 51997.58, 57630.61, 62485.47, 66493.68, 69469.13,...
    2221.010, 12913.35, 22421.58, 31065.15, 38916.68, 46008.01, 52349.90, 57938.13, 62745.69, 66700.22, 69602.89,...
    2907.150, 13496.51, 22952.95, 31548.49, 39354.68, 46401.77, 52699.62, 58242.96, 63003	66903.22, 69730.99,...
    3580.140, 14078.37, 23481.37, 32029.11, 39790.06, 46792.93, 53046.73, 58545.09, 63257.36, 67102.63, 69853.16,...
    4242.020, 14657.48, 24006.86, 32507.02, 40222.81, 47181.52, 53391.23, 58844.52, 63508.75, 67298.38, 69969.12,...
    4895.990, 15233.26, 24529.44, 32982.22, 40652.96, 47567.51, 53733.12, 59141.22, 63757.15, 67490.41, 70078.52,...
    5543.740, 15805.61, 25049.13, 33454.72, 41080.49, 47950.92, 54072.40, 59435.20, 64002.54, 67678.62, 70180.99,...
    6185.500, 16374.57, 25565.94, 33924.53, 41505.41, 48331.74, 54409.06, 59726.44, 64244.88, 67862.96, 70276.09,...
    6822.600, 16940.19, 26079.90, 34391.66, 41927.73, 48709.98, 54743.10, 60014.94, 64484.15, 68043.32, 70363.34,...
    7455.580, 17502.51, 26591.01, 34856.11, 42347.45, 49085.63, 55074.51, 60300.67, 64720.32, 68219.62, 70442.17,...
    8085.730, 18061.58, 27099.29, 35317.88, 42764.56, 49458.69, 55403.29, 60583.63, 64953.35, 68391.75, 70511.92,...
    8713.370, 18617.44, 27604.76, 35776.99, 43179.08, 49829.16, 55729.44, 60863.80, 65183.21, 68559.59, 70571.82,...
    9333.360, 19170.13, 28107.42, 36233.44, 43591	50197.05, 56052.94, 61141.17, 65409.88, 68723.04, 70620.97,...
    9940.580, 19719.69, 28607.29, 36687.24, 44000.32, 50562.34, 56373.79, 61415.72, 65633.29, 68881.95, 70658.28,...
    10543.89, 20266.16, 29104.38, 37138.40, 44407.05, 50925.04, 56691.99, 61687.45, 65853.43, 69036.18, 70682.46];

% fc_fuel_map = [0.012, 0.05, 0.085, 0.117, 0.149, 0.280, 0.423, 0.594, 0.821]; % fuel use map (g/s)
% another war to calculate fc_fuel_map
% fc_eff_map = [10, 33, 49.2, 53.3, 55.9, 59.6, 59.1, 56.2, 50.8] / 100; % % efficiency indexed by fc_pwr
% fc_eff_map = [0	0.490723358453655	0.647994376849124	0.665905057153398	0.683913289572629	0.630584980917269	0.438215211648696	0.343924416314961	0.441694440208945];
fc_eff_map = [0,	63.86, 59.95, 56.67, 53.83, 51.19, 48.67, 46.23, 43.80, 41.36, 38.8,...
    34.79, 63.70, 59.73, 56.50, 53.67, 51.04, 48.53, 46.08, 43.66, 41.21, 38.64,...
    50.01, 63.53, 59.53, 56.32, 53.51, 50.89, 48.38, 45.94, 43.52, 41.07, 38.48,...
    56.93, 63.36, 59.32, 56.15, 53.35, 50.74, 48.24, 45.80, 43.38, 40.92, 38.32,...
    60.25, 63.11, 59.12, 55.98, 53.19, 50.59, 48.09, 45.66, 43.23, 40.77, 38.15,...
    62	62.83, 58.92, 55.81, 53.03, 50.44, 47.95, 45.51, 43.09, 40.62, 37.99,...
    62.98, 62.56, 58.72, 55.64, 52.88, 50.29, 47.81, 45.37, 42.95, 40.47, 37.82,...
    63.56, 62.29, 58.52, 55.47, 52.72, 50.14, 47.66, 45.23, 42.80, 40.33, 37.66,...
    63.92, 62.03, 58.33, 55.30, 52.57, 49.99, 47.52, 45.09, 42.66, 40.18, 37.49,...
    64.13, 61.78, 58.14, 55.13, 52.41, 49.85, 47.37, 44.94, 42.52, 40.03, 37.32,...
    64.25, 61.54, 57.95, 54.96, 52.26, 49.70, 47.23, 44.80, 42.37, 39.87, 37.14,...
    64.31, 61.30, 57.76, 54.80, 52.10, 49.55, 47.09, 44.66, 42.23, 39.72, 36.96,...
    64.34, 61.06, 57.58, 54.64, 51.95, 49.41, 46.94, 44.52, 42.08, 39.57, 36.78,...
    64.34, 60.83, 57.39, 54.47, 51.80, 49.26, 46.80, 44.37, 41.94, 39.42, 36.6,...
    64.29, 60.60, 57.21, 54.31, 51.64, 49.11, 46.66, 44.23, 41.79, 39.26, 36.41,...
    64.15, 60.38, 57.03, 54.15, 51.49, 48.97, 46.51, 44.09, 41.65, 39.11, 36.22,...
    64.01, 60.16, 56.85, 53.99, 51.34, 48.82, 46.37, 43.95, 41.50, 38.95, 36.02]/100;
% fc_eff = CalFcEff(fc_pwr_map);
fc_fuel_lhv = 120.0*1000; % (J/g), lower heating value of the fuel
fc_fuel_map2 = fc_pwr_map .* (1./fc_eff_map) / fc_fuel_lhv; % fuel consumption map (g/s)


% Motor parameters
% efficiency map indexed vertically by mc_map_spd and horizontally by mc_map_trq
mc_map_spd = [0	1000	2000	3000	3221	4000	5000	6000	7000	8000	9000	10000] * (2 * pi) / 60; % motor speed list (rad/s)
mc_map_trq = [0	23.9285714285714	47.8571428571429	71.7857142857143	95.7142857142857	119.642857142857	143.571428571429	167.500000000000	191.428571428571	215.357142857143	239.285714285714	263.214285714286	287.142857142857	311.071428571429	335]; % motor torque list (Nm)
mc_eff_map=[...
85	85	85	85	85	85	85	85	85	85	85	85	85	85	85
85	85	85	85	85	85	85	85	85	85	85	85	85	85	85
85	85	90	90	90	90	90	90	90	90	88	88	88	88	88
85	85	92	92	92	92	92	92	92	92	92	90	90	90	90
85	85	92	92	93	93	93	93	92	92	92	90	90	90	90
85	85	93	94	94	94	94	94	94	94	94	94	94	94	94
85	85	93	94	94	95	95	95	95	95	95	95	95	95	95
85	85	93	94	94	95	95	95	95	95	95	95	95	95	95
85	85	93	94	95	95	95	95	95	95	95	95	95	95	95
85	85	93	94	95	95	95	95	95	95	95	95	95	95	95
85	85	93	94	94	94	94	94	94	94	94	94	94	94	94
85	85	90	92	93	93	93	93	93	93	93	93	93	93	93]/100;
% max torque curve of the motor indexed by mc_map_spd
mc_max_trq = [335	335	335	335	335	269.767628540763	215.814102832610	179.845085693842	154.152930594722	134.883814270381	119.896723795894	107.907051416305]; % (N*m)
mc_max_gen_trq = -1 * [335	335	335	335	335	269.767628540763	215.814102832610	179.845085693842	154.152930594722	134.883814270381	119.896723795894	107.907051416305]; % (N*m), estimate

% Battery parameters
Num_cell = 1;
ess_Q = 30 * 3600; % coulombs, battery package capacity
% resistance and OCV list
ess_soc_map = [0	0.200000000000000	0.400000000000000	0.600000000000000	0.800000000000000	1];
% module's resistance to being discharged, indexed by ess_soc
ess_r_dis_map = [0.0403416000000000 0.0517824000000000 0.0495864000000000 0.0544104000000000 0.0529560000000000 0.0730080000000000] * Num_cell; % (ohm)
% module's resistance to being charged, indexed by ess_soc
ess_r_chg_map = [0.0403416000000000 0.0517824000000000 0.0495864000000000 0.0544104000000000 0.0529560000000000 0.0730080000000000] * Num_cell; % (ohm)
% module's open-circuit (a.k.a. no-load) voltage, indexed by ess_soc
ess_voc_map = [201.600000000000 258.768000000000 264.960000000000 272.952000000000 286.128000000000 303.912000000000] * Num_cell; % (V)
% Battery limitations
ess_min_volts = 100.8; % 237.5 V
ess_max_volts = 607.82; % 412.5 V

%% Update
% Wheel speed (rad/s) & torque (Nm)
w_whl = veh_spd ./ veh_whl_radius;
F_roll = (veh_spd > 0) .* veh_mass .* veh_gravity .* veh_rrc;
F_drag = 0.5 .* veh_air_density .* veh_FA .* veh_CD .* (veh_spd.^2);
F_acc = veh_mass .* veh_acc;
T_whl = veh_whl_radius .* (F_acc + F_roll + F_drag);
P_dem_m = w_whl .* T_whl;

% Fuel cell
if ~par.is_convex
fc_fuel = interp1(fc_pwr_map, fc_fuel_map2, fc_pwr, 'linear', 'extrap');
% fc_fuel = fc_pwr_map .*(1./fc_eff)/fc_fuel_lhv;
% Eta_fcs = fit(fc_pwr_map',fc_fuel_map2','poly2');
% fc_fuel = Eta_fcs.p1.*fc_pwr.^2 + Eta_fcs.p2.*fc_pwr + Eta_fcs.p3;
% else
% Eta_fcs = fit(fc_pwr_map',fc_fuel_map2','poly2');
% fc_fuel = Eta_fcs.p1.*fc_pwr.^2 + Eta_fcs.p2.*fc_pwr + Eta_fcs.p3;
% end
inf_fc = (fc_pwr < fc_pwr_min) + (fc_pwr > fc_pwr_max);

% Motor
mc_spd = w_whl .* veh_fd_ratio;
mc_trq = T_whl ./ veh_fd_ratio;
% mc_trq_max =interp1(mc_map_spd,mc_max_trq,mc_spd, 'linear', 'extrap');
% if mc_trq>mc_trq_max
%         mc_trq=mc_trq_max;
% elseif mc_trq<-mc_trq_max
%         mc_trq=-mc_trq_max;
% end
mc_eff = (mc_spd == 0) + (mc_spd ~= 0) .* interp2(mc_map_trq, mc_map_spd, mc_eff_map, abs(mc_trq), mc_spd);
inf_mc = (isnan(mc_eff)) + (mc_trq < 0) .* (mc_trq < interp1(mc_map_spd, mc_max_gen_trq, mc_spd, 'linear', 'extrap')) + ...
    (mc_trq >= 0) .* (mc_trq > interp1(mc_map_spd, mc_max_trq, mc_spd, 'linear', 'extrap'));
mc_eff(isnan(mc_eff)) = 1;
mc_outpwr = mc_trq .* mc_spd;
mc_inpwr =  mc_outpwr .* (mc_eff.^(-sign((mc_outpwr))));

% Battery
ess_pwr = mc_inpwr - fc_pwr;
% ess_pwr = P_mot - fc_pwr;

if ~par.is_convex
ess_voc = interp1(ess_soc_map, ess_voc_map, ess_soc, 'linear', 'extrap');
ess_r_int = (ess_pwr > 0) .* interp1(ess_soc_map, ess_r_dis_map, ess_soc, 'linear', 'extrap')...
    + (ess_pwr <= 0) .* interp1(ess_soc_map, ess_r_chg_map, ess_soc, 'linear', 'extrap');
else
ess_voc = interp1(ess_soc_map, ess_voc_map, 0.6, 'linear', 'extrap');
ess_r_int = (interp1(ess_soc_map, ess_r_dis_map, 0.6, 'linear', 'extrap')...
    + interp1(ess_soc_map, ess_r_chg_map, 0.6, 'linear', 'extrap')) / 2;
end
charge_eff = 2./(1+sqrt(1-(4.*ess_r_int.*ess_pwr./(ess_voc.^2))));
dis_eff = ((1+sqrt(1-(4.*ess_r_int.*abs(ess_pwr))./(ess_voc.^2))))./2;
if(ess_pwr>0)
ess_eff=dis_eff;
else
ess_eff=charge_eff;
end
ess_cur = (ess_voc - sqrt(ess_voc.^2 - 4 .* ess_r_int .* ess_pwr)) ./ (2*ess_r_int);
ess_volt = ess_voc - ess_cur .* ess_r_int;
inf_ess = (ess_voc.^2 < 4 .* ess_r_int .* ess_pwr) + (ess_volt < ess_min_volts) + (ess_volt > ess_max_volts);
ess_soc_new = ess_soc - ess_cur ./ ess_Q;
% ess_soc_new = (conj(ess_soc_new) + ess_soc_new) ./ 2;
X{1} = ess_soc_new;
k=1-(2.*0.6.*(ess_soc-(0.5.*(0.5+0.7)))./(0.7-0.5));
% k = 1;
cost_bat = (ess_pwr>0).*k.*ess_pwr/fc_fuel_lhv;

% infeasiable
I = (inf_fc  +inf_mc+ inf_ess~= 0);
%if((fc_pwr>20000)|((0<fc_pwr)&(fc_pwr<2000)))
 %   penalty = 10000000;
%else
%    penalty = 0;
%^end
% COST


C{1} = fc_fuel+cost_bat; 

% Output
out.P_dem_m = P_dem_m;
out.P_dem_e = mc_inpwr;
out.Mot_spd = mc_spd;
out.Mot_trq = mc_trq;
out.Mot_pwr = mc_outpwr;
out.FCS_pwr = fc_pwr;
out.Bat_soc = ess_soc_new;
out.Bat_vol = ess_volt;
out.Bat_pwr = ess_pwr;
out.Mot_eta = mc_eff;
out.FC_fuel = fc_fuel;
out.Inf_tot = I;
end

function FcEff = CalFcEff(x)
    FcEff = -329 + 14.25*cos(x*4.184e-05) + 595.4*sin(x*4.184e-05) + 437.3*cos(2*x*4.184e-05) + -20.44*sin(2*x*4.184e-05) + -17.55*cos(3*x*4.184e-05) + -257.3*sin(3*x*4.184e-05) + -118.1*cos(4*x*4.184e-05) + 10.3*sin(4*x*4.184e-05) + 4.11*cos(5*x*4.184e-05) + 40.07*sin(5*x*4.184e-05) + 9.063*cos(6*x*4.184e-05) + -1.016*sin(6*x*4.184e-05) + -0.1172*cos(7*x*4.184e-05) + -1.04*sin(7*x*4.184e-05);
end
end

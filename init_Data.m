% input is Power and SOC
% returns array of new SOC, PSR used to get there, and weight for edge
% array to return in form [[SOC=40,PSR = x, H2cons=y],[SOC=41,PSR=x2,H2Cons=y2],...[SOC=70,PSR=xn,H2cons=yn]]
% calls matlab simulink model to 

% Create array for given node based on data output
%  % calculate weights for H2cons and SOC
% Discretize PSR for P_FC_Max and create values used for sim
% communicate with simulink and return good data vals

global model filename
filename = "Battery_and_FC_state_estimator.slx";
model=load_system(filename);

% example simData call for Power, SOCi,and PSR
% [SOC,Cost]=simData(50000,0.3,0.5)

function [dataSOC,dataCost] = simData(P_in,SOC_in,PSR_in)
global model filename
h = get_param(model,'modelWorkspace');
h.assignin('Power_Req',P_in);
h.assignin('PSR',PSR_in);
h.assignin('SOC',SOC_in);
SOCf = sim(filename).get('yout').getElement(2).Values.Data;
Cost = sim(filename).get('yout').getElement(1).Values.Data;
dataCost = Cost(end);
dataSOC = SOCf(end);
end
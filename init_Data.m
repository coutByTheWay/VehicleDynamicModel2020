
global filename
filename = "Battery_and_FC_state_estimator";
load_system(filename);
% The load should only happen once; and it should be set so to accelerated
% mode, with fast restart!!! This is so it doesn't re-compile with varying
% inputs

% example simData call for Power, SOCi,and PSR
% x=[1:100:100000];
% parfor i=1:100
%     [SOC,Cost]=simData(x(i),0.4,1);
% end

function [dataSOC,dataCost] = simData(P_in,SOC_in,PSR_in)
global filename
h = get_param(filename,'modelWorkspace');
h.assignin('Power_Req',P_in);
h.assignin('PSR',PSR_in);
h.assignin('SOC',SOC_in);
data=sim(filename).get('yout');
SOCf = data.getElement(2).Values.Data;
Cost = data.getElement(1).Values.Data;
dataCost = Cost(end);
dataSOC = SOCf(end);
end

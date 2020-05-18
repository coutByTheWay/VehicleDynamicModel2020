% input is Power and SOC
% returns array of new SOC, PSR used to get there, and weight for edge
% array to return in form [[SOC=40,PSR = x, H2cons=y],[SOC=41,PSR=x2,H2Cons=y2],...[SOC=70,PSR=xn,H2cons=yn]]
% calls matlab simulink model to 
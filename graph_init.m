function[SOCfMap, H2CostMap] = graph_init (P, PSRsn, SOCsn, Psn) %ss refers to step size
  

    SOCmax=.7;
    SOCmin=.4;
    SOCss=(SOCmax-SOCmin)/SOCsn;
    SOCd=SOCmin:SOCss:SOCmax; %discretizes SOC values
    
    PSRmax=4;
    PSRmin=.5;
    PSRss=(PSRmax-PSRmin)/PSRsn;
    PSRd=PSRmin:PSRss:PSRmax; %discretizes PSR values
    
    P=P(1:Psn);
    
    SOCfMap=zeros(length(P), length(SOCd), length(PSRd)); %instantiate state transition dataset
    disp(size(SOCfMap));
    H2CostMap=zeros(length(P), length(SOCd), length(PSRd)); %instantiate instant cost dataset
    
    for i = 1:length(P)
       for j = 1:length(SOCd)
           for k = 1:length(PSRd) 
               disp([P(i), SOCd(j), PSRd(k)]);
               [SOCf, H2]=simData(P(i), SOCd(j), PSRd(k));
               if((SOCfMap(i,j,k)<.4) ||  (SOCfMap(i,j,k)>.7))
                   SOCfMap(i,j,k)=0;
                   H2CostMap(i,j,k)=10e20;
               else
                   SOCfMap(i,j,k)=SOCf;
                   H2CostMap(i,j,k)=H2;
               end

              
           end
       end
    end
   
end
   



function[Edges] = edge_creator (Pi, SOCi, PSRsn, SOCd)  %sn refers to # steps
    global model filename 


    P_FCmax=120400;
    
    if (SOCi==.4)
         PSRmin=1;
    else
         PSRmin=0;
    end
    
    if (SOCi==.7)
        PSRmax=1;
    elseif ((P_FCmax/Pi)<10)
        PSRmax=P_FCmax/Pi;
    else
        PSRmax=10;
    end
    
    PSRss=(PSRmax-PSRmin)/PSRsn; %ss refers to step size
    PSRd=PSRmin:PSRss:PSRmax;
    %EdgesP=zeros(length(PSRd), 5);
    Edges=zeros(length(SOCd),4);
    Edges(:,4)=SOCd;
    
    for i=1:length(PSRd) 
        disp([]);
        
        [SOCf, H2]=simData(Pi, SOCi, PSRd(i));
       
        [val,idx]=min(abs(Edges(:,4)-SOCf));
        if((Edges(idx,1)==0)||(val<(Edges(idx,1)-Edges(idx,4))))
            Edges(idx,1)=SOCf;
            Edges(idx,2)=H2;
            Edges(idx,3)=PSRd(i);
        end
    end
    
end    
%  for i=1:length(PSRd) 
%         [SOCf, H2]=simdata(Pi, SOCi, PSRd(i));
%         EdgesP(i,1)=SOCf;
%         EdgesP(i,2)= H2;
%         EdgesP(i,3)= PSRd(i);
%         
%         [~,~,idx]=unique(round(abs(SOCd-EdgesP(i,1)), 'stable'));
%         EdgesP(i,4)=SOCd(idx==1);
%         EdgesP(i,5)=abs(EdgesP(i,4)-EdgesP(i,1));
% end 
    
    
    
    
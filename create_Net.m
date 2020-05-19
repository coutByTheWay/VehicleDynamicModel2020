% function for getting edges is edge_created(P_in,SOC_in, SOC_final (grid),

load("Power_data.mat")

steps = 150;
SOC_min = 40;
SOC_max = 70;
Node_names=[SOC_min:(SOC_max-SOC_min)/steps:SOC_max];
s = [1:steps];
s = 1;
i=1;
t = edge_builder(P_names(i),Node_Names(mod(s,steps)));
%include code to format t to have nodes and weights
% s is for node 1, repreated for as long as length(edge_list) is
% t should be formatted to only include the destination nodes
G = digraph(s,t);
G = addnode(G,2*steps-numnodes(G)); % 2 layers of nodes are created, regardless of edges connected
for i=1:length(P_names)-1
    for j=1:steps
        if i==1 && j==1
            % do nothing
        elseif j==1
            % need to create new nodes for next layer
            G = addnode(G,steps);
            % find and add edges
        else
            %next layer already exists, add in edges
            
        end
    end
end
function [OutVar] = GetVar2(FileName,VarName,D3,OdEv)
%%           Geting the over all Ber from simulations.  
%c function [OutBer] = GetBer(FileName)
%c
%c
%c This function is resposible for generating the over all ber from each
%c simulation interaction.
%c
%c
%c                                           Created by P.Marciano LG
%c                                           16/04/2018
%c                                           Last Update
%c                                           00/00/2020
%c                                           pablorafael.mcx@gmail.com
%c
%c 
%c
%c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%c                    G L O B A L  V A R I A B L E S                      %
%c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%c
%c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%c                   L I S T  O F  V A R I A B L E S                      %
%c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%c
%c    Olho
%c
%c  Input:
%c          FileName  : It shows the actual file(s) to be loaded
%c          VarName   : Name of the variable to be loaded
%c          D3        : To indicate that the variable has 3 diminsions
%c          OdEv      : Indicates whether the sequency is odd or even
%c  Output:
%c          OutBer    : Sending the result to the function caller
%c
%c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%c                             S T R U C T S                              %
%c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%c
%%                       Initializing

if nargin<2
    error('Not enough input arguments');
elseif nargin<3
    D3   = 0;
    OdEv = 1;
elseif nargin<4
    OdEv = 1;
end

if D3
    NumFiles = max(size(FileName));                                        %Finding the number of files to be loaded
    if OdEv
        ThisPos = 1:2:128;
    else
        ThisPos = 2:2:128;
    end
    OutVar.Var1 = [];
    OutVar.Var2 = [];
    OutVar.Var3 = [];          
    for finding = 1:NumFiles                                                   
        ThisVar     = load([char(FileName(finding)) '.mat'],VarName);      %Loading the wanted variable
        ThisVarName = fieldnames(ThisVar);                                 %Getting the variable name
        VarAux      = ThisVar.(ThisVarName{1});
%         OutVar      = [OutVar;ThisVar.(ThisVarName{1})];                   %Concatenatting the variables from each file
        for Pas1=1:size(VarAux,1)
%             for Pas2=1:2:size(FileName,2)
            Aux2(1:64,:) = VarAux(Pas1,ThisPos,:);
            OutVar.(['Var' num2str(Pas1)]) = [OutVar.(['Var' num2str(Pas1)]);Aux2'];
%             end
        end
        clear Aux2;
    end
else
    NumFiles = max(size(FileName));                                        %Finding the number of files to be loaded
    OutVar = [];                                                               
    for finding = 1:NumFiles                                                   
        ThisVar     = load([char(FileName(finding)) '.mat'],VarName);      %Loading the wanted variable
        ThisVarName = fieldnames(ThisVar);                                 %Getting the variable name
        OutVar      = [OutVar;ThisVar.(ThisVarName{1})];                   %Concatenatting the variables from each file
    end
end




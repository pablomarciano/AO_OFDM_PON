function [ Ber ] = LoadBerPerCarr( FilesToLoad,BerToLoad )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here
%%
    Ber = [];

    for Loading=1:size(FilesToLoad,1)
        ThisVar     = load([char(FilesToLoad(Loading)) '.mat'],BerToLoad,'DmtKvep');      %Loading the wanted variable
        ThisVarName = fieldnames(ThisVar);                                 %Getting the variable name
        ThisBer = ThisVar.(ThisVarName{1});
        DmtKvep = ThisVar.(ThisVarName{2});
        BerAux(1:size(ThisBer,2),1:size(ThisBer,3)) = sum(ThisBer,1);
%         DivAux = (size(ThisBer,1).*DmtKvep);
%         Div = repmat(DivAux,size(ThisBer,2),1);
%         BerAux1 = BerAux./Div;
        BerAux1 = sum(BerAux,1);
        BerAux2 = BerAux1./((size(ThisBer,1)*size(ThisBer,2)).*DmtKvep);
        
        Ber         = [Ber;BerAux2];                   %Concatenatting the variables from each file
    %     AuxVar = load(char(FilesToLoad(1)),BerToLoad);
    %     Ber = [Ber ];
    end

a=1;

end


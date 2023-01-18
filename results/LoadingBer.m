function [ Ber,BerPos ] = LoadingBer( FilesToLoad,BerToLoad )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here

    Ber = [];
    BerPos = [];

    for Loading=1:size(FilesToLoad,1)
        if exist([char(FilesToLoad(Loading)) '.mat'],'file')
            ThisVar     = load([char(FilesToLoad(Loading)) '.mat'],BerToLoad);      %Loading the wanted variable
            ThisVarName = fieldnames(ThisVar);                                 %Getting the variable name
            if ~isempty(ThisVarName)
                if isempty(ThisVar.(ThisVarName{1}))
                    BerAux = [];
                else
                    if size(ThisVar.(ThisVarName{1}),1)==1
                        BerAux      = (ThisVar.(ThisVarName{1}));
                    else
                        BerAux      = mean(ThisVar.(ThisVarName{1}));
                    end
                end
                if size(BerAux,2)<size(Ber,2)
                    BerAux(:,end+(size(Ber,2)-size(BerAux,2))) = 1;
                end
                if (~isempty(Ber))&& (size(BerAux,2)>size(Ber,2))
                    BerAux(:,end) = [];
                end

                Ber         = [Ber;BerAux];                   %Concatenatting the variables from each file
                BerPos      = [BerPos;Loading];
            end
        end
    %     AuxVar = load(char(FilesToLoad(1)),BerToLoad);
    %     Ber = [Ber ];
    end

a=1;

end
%%
close all; clear; clc;
FileToLoad = [{'savingforplotingeyeallcaroptpam4yesifft2.mat'},...
              {'savingforplotingeyeallcaroptpam4yesifft.mat'},...
              {'savingforplotingeyeallcarpam4noifft.mat'},...
              {'savingforplotingeyeallcarpam4yesifft.mat'},...
              {'savingforplotingeyeonecaroptpam4noifft.mat'},...
              {'savingforplotingeyeonecaroptpam4yesifft.mat'},...
              {'savingforplotingeyeonecarpam4noifft.mat'},...
              {'savingforplotingeyeonecarpam4yesifft.mat'}];

NumAmosCP = 63;
TR = 9.953143984115569e-11;
M = 2;

for kk=1:length(FileToLoad)
    [Iplot1,NPPBR] = LoadItoPlot(char(FileToLoad(kk)),M,NumAmosCP);
%     figure;
%     plot(Iplot1);
    tmax = 3;
    tam = length(Iplot1);
    mod(tam,(tmax*NPPBR))
    Olho(Iplot1,TR,NPPBR,1,tmax);
end
a=1;
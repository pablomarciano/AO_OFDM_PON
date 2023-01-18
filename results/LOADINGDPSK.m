
%% Loading DPSK
% Full System teste 1
NamToLoadA = 'DpskNoOifftSyst_';
NamToLoadB = '_1';
BerDpskNew = [];
conting =1;
for kk=10:10:300
    AuxBer = load([NamToLoadA num2str(kk) NamToLoadB '.mat'], 'BerDPSK');
    AuxPos = find(AuxBer.BerDPSK(:,2), 1, 'last' );
    BerDpskNew = [BerDpskNew;mean(AuxBer.BerDPSK(1:AuxPos,:),1)];
end
% [BerDpsk] = LoadingBer( ThisFilesToLoad,'BerDPSK' );
clear ThisFilesToLoad;
% Full System teste 1
NamToLoadA = 'DpskCp122FullSysNoNoiseKm_';
NamToLoadB = '_1';
BerDpsk = [];
conting =1;
for kk=220:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerDpsk] = LoadingBer( ThisFilesToLoad,'BerDPSK' );
clear ThisFilesToLoad;
% Full System teste 2
NamToLoadA = 'DpskCp122NoOifftKm_';
NamToLoadB = '_1';
BerDpskF = [];
BerDpskFS = [];
conting =1;
for kk=10:10:190
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerDpskF] = LoadingBer( ThisFilesToLoad,'BerDPSK' );
[BerDpskFS] = LoadingBer( ThisFilesToLoad,'BerDPSKS' );
clear ThisFilesToLoad;
% Full System teste 2
NamToLoadA = 'DpskCp122NoOifftKm_';
NamToLoadB = '_2';
BerDpskF2 = [];
BerDpskF2S = [];
conting =1;
for kk=10:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerDpskF2] = LoadingBer( ThisFilesToLoad,'BerDPSK' );
[BerDpskF2S] = LoadingBer( ThisFilesToLoad,'BerDPSKS' );
clear ThisFilesToLoad;
% Full System teste T
NamToLoadA = 'DpskCp122FulSystKm_';
NamToLoadB = '_1';
BerDpskT = [];
BerDpskTS = [];
conting =1;
for kk=40:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerDpskT] = LoadingBer( ThisFilesToLoad,'BerDPSK' );
[BerDpskTS] = LoadingBer( ThisFilesToLoad,'BerDPSKS' );
clear ThisFilesToLoad;
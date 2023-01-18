
%% Loading DPSK
% Full System teste 1
NamToLoadA = 'DqpskCp122FullSysNoNoiseKm_';
NamToLoadB = '_1';
BerDqpsk = [];
conting =1;
for kk=70:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerDqpsk] = LoadingBer( ThisFilesToLoad,'BerDQPSK' );
clear ThisFilesToLoad;
% Full System teste F
NamToLoadA = 'DqpskCp122NoOifftKm_';
NamToLoadB = '_1';
BerDqpskF = [];
BerDqpskFS = [];
conting =1;
for kk=10:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerDqpskF] = LoadingBer( ThisFilesToLoad,'BerDQPSK' );
[BerDqpskFS] = LoadingBer( ThisFilesToLoad,'BerDQPSKS' );
clear ThisFilesToLoad;
% Full System teste T
NamToLoadA = 'DqpskCp122FulSystKm_';
NamToLoadB = '_1';
BerDqpskT = [];
BerDqpskTS = [];
conting =1;
for kk=10:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerDqpskT] = LoadingBer( ThisFilesToLoad,'BerDQPSK' );
clear ThisFilesToLoad;
NamToLoadA = 'DqpskCp122FulSystKm_';
NamToLoadB = '_3';
conting =1;
for kk=10:10:50
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerDqpskTaux] = LoadingBer( ThisFilesToLoad,'BerDQPSK' );
BerDqpskT(1:5,:) = BerDqpskTaux;
clear ThisFilesToLoad;
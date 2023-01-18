
%% Loading OOK
% Full System teste 1
NamToLoadA = 'OokCp122FullSysNoNoiseKm_';
NamToLoadB = '_1';
BerOok = [];
conting =1;
for kk=80:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOok] = LoadingBer( ThisFilesToLoad,'BerOOK' );
clear ThisFilesToLoad;
% Full System teste F
NamToLoadA = 'OokCp122NoOifftKm_';
NamToLoadB = '_1';
BerOokF = [];
BerOokFS = [];
conting =1;
for kk=50:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOokF] = LoadingBer( ThisFilesToLoad,'BerOOK' );
[BerOokFS] = LoadingBer( ThisFilesToLoad,'BerOOKS' );
clear ThisFilesToLoad;
NamToLoadA = 'OokNoOifftSyst_';
NamToLoadB = '_1';
conting =1;
for kk=10:10:40
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOokFAux] = LoadingBer( ThisFilesToLoad,'BerOOK' );
BerOokF = [BerOokFAux;BerOokF];
clear ThisFilesToLoad;
% Full System teste T
NamToLoadA = 'OokCp122FulSystKm_';
NamToLoadB = '_1';
BerOokT = [];
BerOokTS = [];
conting =1;
for kk=30:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOokT] = LoadingBer( ThisFilesToLoad,'BerOOK' );
[BerOokTS] = LoadingBer( ThisFilesToLoad,'BerOOKS' );
clear ThisFilesToLoad;
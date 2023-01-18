%%
% Full System teste 1
NamToLoadA = 'OfdmCp122FulSystKm_';
NamToLoadB = '_1';
BerOfdm = [];
conting =1;
for kk=60:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdm] = LoadingBer( ThisFilesToLoad,'BerOFDM' );
clear ThisFilesToLoad;
% Full System teste 1
NamToLoadA = 'OfdmCp122FulSystSnr_';
NamToLoadB = '_1';
BerOfdmSnr = [];
conting =1;
for kk=1:1:20
    ThisFilesToLoad(kk,1) = {[NamToLoadA num2str(kk-1) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdmSnr] = LoadingBer( ThisFilesToLoad,'BerOFDM' );
clear ThisFilesToLoad;
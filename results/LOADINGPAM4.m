
%% Loading PAM4
% Full System teste 1
NamToLoadA = 'Pam4Cp122FullSysNoNoiseKm_';
NamToLoadB = '_1';
Ber1Pam4 = [];
conting =1;
for kk=30:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[Ber1Pam4] = LoadingBer( ThisFilesToLoad,'Ber4PAM' );
clear ThisFilesToLoad;
% Full System teste 2
NamToLoadA = 'Pam4Cp122FullSysNoNoiseKm_';
NamToLoadB = '_2';
Ber2Pam4 = [];
conting =1;
for kk=10:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[Ber2Pam4] = LoadingBer( ThisFilesToLoad,'Ber4PAM' );
clear ThisFilesToLoad;
% Full System teste 3
NamToLoadA = 'Pam4Cp122FullSysNoNoiseKm_';
NamToLoadB = '_3';
Ber3Pam4 = [];
Ber3Pam4S = [];
conting =1;
for kk=20:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[Ber3Pam4] = LoadingBer( ThisFilesToLoad,'Ber4PAM' );
[Ber3Pam4S] = LoadingBer( ThisFilesToLoad,'Ber4PAMS' );
clear ThisFilesToLoad;
% Full System teste F
NamToLoadA = 'Pam4Cp122NoOifftKm_';
NamToLoadB = '_1';
Ber4PamF = [];
Ber4PamFS = [];
conting =1;
for kk=10:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[Ber4PamF] = LoadingBer( ThisFilesToLoad,'Ber4PAM' );
[Ber4PamFS] = LoadingBer( ThisFilesToLoad,'Ber4PAMS' );
clear ThisFilesToLoad;
% Full System teste T
NamToLoadA = 'Pam4Cp122FulSystKm_';
NamToLoadB = '_1';
Ber4PamT = [];
Ber4PamTS = [];
conting =1;
for kk=20:10:300
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[Ber4PamT] = LoadingBer( ThisFilesToLoad,'Ber4PAM' );
[Ber4PamTS] = LoadingBer( ThisFilesToLoad,'Ber4PAMS' );
clear ThisFilesToLoad;
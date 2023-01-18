close all; clc; clear;
%%
NamToLoadA = 'Ofdm16QamBerVsCarVsKm_';
NamToLoadB = '_1';
BerOok = [];
conting =1;
FiberLength = 10:10:300;
for kk=FiberLength
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdm] = LoadBerPerCarr( ThisFilesToLoad,'BerToPlotOfdm' );
ElecCarr = 1:size(BerOfdm,2);
LenToPlo = repmat(FiberLength.',1,size(BerOfdm,2));
figure;
hold all;
plot(LenToPlo,BerOfdm);
CarToPlo = repmat(ElecCarr,size(BerOfdm,1),1);
C = BerOfdm;
% C = linspace(min(min(BerOfdm,[],1)),max(max(BerOfdm,[],1)),size(BerOfdm,2));
% C = repmat(C,size(BerOfdm,1),1);
% figure;
% hold all;
% surf(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% surfc(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
mesh(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshc(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshz(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
waterfall(CarToPlo,LenToPlo,BerOfdm,C)
clear ThisFilesToLoad;
%%
NamToLoadA = 'Ofdm8QamBerVsCarVsKm_';
NamToLoadB = '_1';
BerOok = [];
conting =1;
FiberLength = 10:10:300;
for kk=FiberLength
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdm] = LoadBerPerCarr( ThisFilesToLoad,'BerToPlotOfdm' );
ElecCarr = 1:size(BerOfdm,2);
LenToPlo = repmat(FiberLength.',1,size(BerOfdm,2));
figure;
hold all;
plot(LenToPlo,BerOfdm);
CarToPlo = repmat(ElecCarr,size(BerOfdm,1),1);
C = BerOfdm;
% C = linspace(min(min(BerOfdm,[],1)),max(max(BerOfdm,[],1)),size(BerOfdm,2));
% C = repmat(C,size(BerOfdm,1),1);
% figure;
% hold all;
% surf(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% surfc(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
mesh(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshc(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshz(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
waterfall(CarToPlo,LenToPlo,BerOfdm,C)
clear ThisFilesToLoad;
%%
NamToLoadA = 'Ofdm4QamBerVsCarVsKm_';
NamToLoadB = '_1';
BerOok = [];
conting =1;
FiberLength = 40:10:300;
for kk=FiberLength
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdm] = LoadBerPerCarr( ThisFilesToLoad,'BerToPlotOfdm' );
ElecCarr = 1:size(BerOfdm,2);
LenToPlo = repmat(FiberLength.',1,size(BerOfdm,2));
figure;
hold all;
plot(LenToPlo,BerOfdm);
CarToPlo = repmat(ElecCarr,size(BerOfdm,1),1);
C = BerOfdm;
% C = linspace(min(min(BerOfdm,[],1)),max(max(BerOfdm,[],1)),size(BerOfdm,2));
% C = repmat(C,size(BerOfdm,1),1);
% figure;
% hold all;
% surf(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% surfc(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
mesh(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshc(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshz(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
waterfall(CarToPlo,LenToPlo,BerOfdm,C)
clear ThisFilesToLoad;
% close all;
%%
NamToLoadA = 'Ofdm2QamBerVsCarVsKm_';
NamToLoadB = '_1';
BerOok = [];
conting =1;
FiberLength = 10:10:300;
for kk=FiberLength
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdm] = LoadBerPerCarr( ThisFilesToLoad,'BerToPlotOfdm' );
ElecCarr = 1:size(BerOfdm,2);
LenToPlo = repmat(FiberLength.',1,size(BerOfdm,2));
figure;
hold all;
plot(LenToPlo,BerOfdm);
CarToPlo = repmat(ElecCarr,size(BerOfdm,1),1);
C = BerOfdm;
% C = linspace(min(min(BerOfdm,[],1)),max(max(BerOfdm,[],1)),size(BerOfdm,2));
% C = repmat(C,size(BerOfdm,1),1);
% figure;
% hold all;
% surf(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% surfc(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
mesh(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshc(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshz(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
waterfall(CarToPlo,LenToPlo,BerOfdm,C)
clear ThisFilesToLoad;
%%
NamToLoadA = 'OfdmDpskBerVsCarVsKm_';
NamToLoadB = '_1';
BerOok = [];
conting =1;
FiberLength = 10:10:300;
for kk=FiberLength
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdm] = LoadBerPerCarr( ThisFilesToLoad,'BerToPlotOfdm' );
ElecCarr = 1:size(BerOfdm,2);
LenToPlo = repmat(FiberLength.',1,size(BerOfdm,2));
figure;
hold all;
plot(LenToPlo,BerOfdm);
CarToPlo = repmat(ElecCarr,size(BerOfdm,1),1);
C = BerOfdm;
% C = linspace(min(min(BerOfdm,[],1)),max(max(BerOfdm,[],1)),size(BerOfdm,2));
% C = repmat(C,size(BerOfdm,1),1);
% figure;
% hold all;
% surf(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% surfc(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
mesh(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshc(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshz(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
waterfall(CarToPlo,LenToPlo,BerOfdm,C)
clear ThisFilesToLoad;
% close all;
%%
NamToLoadA = 'OfdmDqpskBerVsCarVsKm_';
NamToLoadB = '_1';
BerOok = [];
conting =1;
FiberLength = 10:10:300;
for kk=FiberLength
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdm] = LoadBerPerCarr( ThisFilesToLoad,'BerToPlotOfdm' );
ElecCarr = 1:size(BerOfdm,2);
LenToPlo = repmat(FiberLength.',1,size(BerOfdm,2));
figure;
hold all;
plot(LenToPlo,BerOfdm);
CarToPlo = repmat(ElecCarr,size(BerOfdm,1),1);
C = BerOfdm;
% C = linspace(min(min(BerOfdm,[],1)),max(max(BerOfdm,[],1)),size(BerOfdm,2));
% C = repmat(C,size(BerOfdm,1),1);
% figure;
% hold all;
% surf(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% surfc(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
mesh(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshc(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshz(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
waterfall(CarToPlo,LenToPlo,BerOfdm,C)
clear ThisFilesToLoad;
close all;
%%
NamToLoadA = 'Ofdm8QamBerVsCarVsKmCple07_';
NamToLoadB = '_1';
BerOok = [];
conting =1;
FiberLength = 10:10:300;
for kk=FiberLength
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdm] = LoadBerPerCarr( ThisFilesToLoad,'BerToPlotOfdm' );
ElecCarr = 1:size(BerOfdm,2);
LenToPlo = repmat(FiberLength.',1,size(BerOfdm,2));
figure;
hold all;
plot(LenToPlo,BerOfdm);
CarToPlo = repmat(ElecCarr,size(BerOfdm,1),1);
C = BerOfdm;
% C = linspace(min(min(BerOfdm,[],1)),max(max(BerOfdm,[],1)),size(BerOfdm,2));
% C = repmat(C,size(BerOfdm,1),1);
% figure;
% hold all;
% surf(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% surfc(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
mesh(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshc(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshz(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
waterfall(CarToPlo,LenToPlo,BerOfdm,C)
clear ThisFilesToLoad;
%%
NamToLoadA = 'Ofdm8QamBerVsCarVsKmDmt_';
NamToLoadB = '_1';
BerOok = [];
conting =1;
FiberLength = 10:10:300;
for kk=FiberLength
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdm] = LoadBerPerCarr( ThisFilesToLoad,'BerToPlotOfdm' );
ElecCarr = 1:size(BerOfdm,2);
LenToPlo = repmat(FiberLength.',1,size(BerOfdm,2));
figure;
hold all;
plot(LenToPlo,BerOfdm);
CarToPlo = repmat(ElecCarr,size(BerOfdm,1),1);
C = BerOfdm;
% C = linspace(min(min(BerOfdm,[],1)),max(max(BerOfdm,[],1)),size(BerOfdm,2));
% C = repmat(C,size(BerOfdm,1),1);
% figure;
% hold all;
% surf(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% surfc(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
mesh(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshc(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshz(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
waterfall(CarToPlo,LenToPlo,BerOfdm,C)
clear ThisFilesToLoad;
%%
NamToLoadA = 'Ofdm16QamBerVsCarVsKmCple07_';
NamToLoadB = '_1';
BerOok = [];
conting =1;
FiberLength = 10:10:300;
for kk=FiberLength
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdm] = LoadBerPerCarr( ThisFilesToLoad,'BerToPlotOfdm' );
ElecCarr = 1:size(BerOfdm,2);
LenToPlo = repmat(FiberLength.',1,size(BerOfdm,2));
figure;
hold all;
plot(LenToPlo,BerOfdm);
CarToPlo = repmat(ElecCarr,size(BerOfdm,1),1);
C = BerOfdm;
% C = linspace(min(min(BerOfdm,[],1)),max(max(BerOfdm,[],1)),size(BerOfdm,2));
% C = repmat(C,size(BerOfdm,1),1);
% figure;
% hold all;
% surf(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% surfc(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
mesh(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshc(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshz(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
waterfall(CarToPlo,LenToPlo,BerOfdm,C)
clear ThisFilesToLoad;
%%
NamToLoadA = 'OfdmDmtD4BerVsCarVsKmCpLe09_';
NamToLoadB = '_1';
BerOok = [];
conting =1;
FiberLength = 10:10:300;
for kk=FiberLength
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdm] = LoadBerPerCarr( ThisFilesToLoad,'BerToPlotOfdm' );
ElecCarr = 1:size(BerOfdm,2);
LenToPlo = repmat(FiberLength.',1,size(BerOfdm,2));
figure;
hold all;
plot(LenToPlo,BerOfdm);
CarToPlo = repmat(ElecCarr,size(BerOfdm,1),1);
C = BerOfdm;
% C = linspace(min(min(BerOfdm,[],1)),max(max(BerOfdm,[],1)),size(BerOfdm,2));
% C = repmat(C,size(BerOfdm,1),1);
% figure;
% hold all;
% surf(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% surfc(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
mesh(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshc(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshz(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
waterfall(CarToPlo,LenToPlo,BerOfdm,C)
clear ThisFilesToLoad;
%%
NamToLoadA = 'OfdmDmtD5BerVsCarVsKmCpLe09_';
NamToLoadB = '_1';
BerOok = [];
conting =1;
FiberLength = 10:10:300;
for kk=FiberLength
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdm] = LoadBerPerCarr( ThisFilesToLoad,'BerToPlotOfdm' );
ElecCarr = 1:size(BerOfdm,2);
LenToPlo = repmat(FiberLength.',1,size(BerOfdm,2));
figure;
hold all;
plot(LenToPlo,BerOfdm);
CarToPlo = repmat(ElecCarr,size(BerOfdm,1),1);
C = BerOfdm;
% C = linspace(min(min(BerOfdm,[],1)),max(max(BerOfdm,[],1)),size(BerOfdm,2));
% C = repmat(C,size(BerOfdm,1),1);
% figure;
% hold all;
% surf(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% surfc(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
mesh(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshc(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshz(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
waterfall(CarToPlo,LenToPlo,BerOfdm,C)
clear ThisFilesToLoad;
%%
NamToLoadA = 'OfdmDpskBerVsCarVsKmCple07_';
NamToLoadB = '_1';
BerOok = [];
conting =1;
FiberLength = 10:10:300;
for kk=FiberLength
    ThisFilesToLoad(conting,1) = {[NamToLoadA num2str(kk) NamToLoadB]};
    conting = conting + 1;
end
[BerOfdm] = LoadBerPerCarr( ThisFilesToLoad,'BerToPlotOfdm' );
ElecCarr = 1:size(BerOfdm,2);
LenToPlo = repmat(FiberLength.',1,size(BerOfdm,2));
figure;
hold all;
plot(LenToPlo,BerOfdm);
CarToPlo = repmat(ElecCarr,size(BerOfdm,1),1);
C = BerOfdm;
% C = linspace(min(min(BerOfdm,[],1)),max(max(BerOfdm,[],1)),size(BerOfdm,2));
% C = repmat(C,size(BerOfdm,1),1);
% figure;
% hold all;
% surf(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% surfc(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
mesh(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshc(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% meshz(CarToPlo,LenToPlo,BerOfdm,C)
figure;
hold all;
waterfall(CarToPlo,LenToPlo,BerOfdm,C)
clear ThisFilesToLoad;
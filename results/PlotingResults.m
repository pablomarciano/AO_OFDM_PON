%% This main code is responsible to plot some features acquired in simulation
close all;clear;clc;

FEC= 3.8e-3;
FiberLength = 10:10:300;
EbN0 = 0:30;

M = 4;
for jj=1:length(EbN0)
    BerDqpskTheo(jj) = berawgn(EbN0(jj), 'dpsk', M);
    BerPam4Theo(jj)  = berawgn(EbN0(jj), 'pam', M);
end

M = 2;
for jj=1:length(EbN0)
    BerDpskTheo(jj) = berawgn(EbN0(jj), 'dpsk', M);
    BerOokTheo(jj)  = berawgn(EbN0(jj), 'pam', M);
end

CorLaranja = [1 0.4 0];%
CorVerde = [0 0.4 0];%
CorAzul = [0 0.2 0.6];%
CorRoxo = [0.4 0 0.4];%

ThisMarkerSize = 10;

poseven = 2:2:128;
posodd = 1:2:128;

LoadingBers;

PlotingAll3D;

PlotingPam4;

PlotingOok;

PlotingDpsk;

PlotingDqpsk;

PlotingAllBers;










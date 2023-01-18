%% This main code is responsible to plot some features acquired in simulation
close all;clear;clc;


FEC= 3.8e-3;
FiberLength = 10:10:300;
EbN0 = 0:30;

LOADINGPAM4;
LOADINGDPSK;
LOADINGDQPSK;
LOADINGOOK;
LOADINGOFDM;


figure;
FecRef = linspace(FEC,FEC,length(FiberLength));
plot(FiberLength,(FecRef),'r','LineWidth',2)
hold all;
ColorDpsk = [0 0.6 0];
ColorDqpsk = [0 0.6 0];
ColorOok = [0.0 0.0 0.6];
Color1PAM4 = [0 0.4 1];
Color2PAM4 = [0.4 0.0 1];
Color3PAM4 = [0.0 0.0 0.6];
% c1 = [0.8 0.6 0];
c1 = [1 0.4 0.0];
ThisMarkerSize = 10;
poseven = 2:2:size(BerDpsk,2);
posodd = 1:2:size(BerDpsk,2);
plot(FiberLength(end-size(BerDpskT,1)+1:end),mean(BerDpskT(:,posodd),2),':d','LineWidth',1,'color',Color3PAM4,'MarkerFaceColor',Color3PAM4,'MarkerSize',ThisMarkerSize)
plot(FiberLength(end-size(BerDpskNew,1)+1:end),mean(BerDpskNew(:,posodd),2),':d','LineWidth',1,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(BerDpskNew,1)+1:end),mean(BerDpskNew(:,posodd),2),':s','LineWidth',2,'color',ColorDpsk-[0 0.2 0],'MarkerFaceColor',ColorDpsk-[0 0.2 0],'MarkerSize',ThisMarkerSize)
% plot(FiberLength(1:1+size(BerDpskF2,1)-1),mean(BerDpskF2,2),'-d','LineWidth',2,'color',c1-[0.2 0.0 0.2],'MarkerFaceColor',c1-[0.2 0.0 0.2],'MarkerSize',ThisMarkerSize)

plot(FiberLength(end-size(BerDqpskT,1)+1:end),mean(BerDqpskT(:,posodd),2),':o','LineWidth',1,'color',Color3PAM4,'MarkerFaceColor',Color3PAM4,'MarkerSize',ThisMarkerSize)
plot(FiberLength(end-size(BerDqpskF,1)+1:end),mean(BerDqpskF(:,posodd),2),':o','LineWidth',1,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(BerDqpskT,1)+1:end),mean(BerDqpskT,2),'-o','LineWidth',2,'color',ColorDqpsk-[0 0.2 0],'MarkerFaceColor',ColorDqpsk-[0 0.2 0],'MarkerSize',ThisMarkerSize)

% plot(FiberLength(end-size(BerOok,1)+1:end),mean(BerOok,2),'-d','LineWidth',2,'color',ColorOok,'MarkerFaceColor',ColorOok,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(BerOokF,1)+1:end),mean(BerOokF,2),'-d','LineWidth',2,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)

% plot(FiberLength(end-size(Ber3Pam4,1)+1:end),mean(Ber3Pam4,2),'-s','LineWidth',2,'color',Color3PAM4,'MarkerFaceColor',Color3PAM4,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(Ber4PamF,1)+1:end),mean(Ber4PamF,2),'-s','LineWidth',2,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)


xlabel('Fiber Lenth [km]','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([7 302 1e-6 1e0]);
legend([{'FEC'},{'DPSK-w-OIFFT'},{'DPSK-w/o-OIFFT'},{'DQPSK-w-OIFFT'},{'DQPSK-w/o-OIFFT'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0.1 0.1 0.8 0.8]);

figure;
FecRef = linspace(FEC,FEC,length(FiberLength));
plot(FiberLength,(FecRef),'r','LineWidth',2)
hold all;
ColorDpsk = [0 0.6 0];
ColorDqpsk = [0 0.6 0];
ColorOok = [0.0 0.0 0.6];
Color1PAM4 = [0 0.4 1];
Color2PAM4 = [0.4 0.0 1];
Color3PAM4 = [0.0 0.0 0.6];
% c1 = [0.8 0.6 0];
% c1 = [0.6 0.0 0.6];
ThisMarkerSize = 10;
posodd = 1:2:size(BerDpsk,2);
% plot(FiberLength(end-size(BerDpsk,1)+1:end),mean(BerDpsk,2),'-d','LineWidth',2,'color',ColorDpsk,'MarkerFaceColor',ColorDpsk,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(BerDpskF,1)+1:end),mean(BerDpskF,2),'-d','LineWidth',2,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)

% plot(FiberLength(end-size(BerDqpsk,1)+1:end),mean(BerDqpsk,2),'-s','LineWidth',2,'color',ColorDqpsk,'MarkerFaceColor',ColorDqpsk,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(BerDqpskF,1)+1:end),mean(BerDqpskF,2),'-s','LineWidth',2,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)

plot(FiberLength(end-size(BerOokT,1)+1:end),mean(BerOokT(:,posodd),2),':d','LineWidth',1,'color',ColorOok,'MarkerFaceColor',ColorOok,'MarkerSize',ThisMarkerSize)
plot(FiberLength(end-size(BerOokF,1)+1:end),mean(BerOokF(:,posodd),2),':d','LineWidth',1,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(BerOokT,1)+1:end),mean(BerOokT,2),'-o','LineWidth',2,'color',ColorOok-[0 0 0.2],'MarkerFaceColor',ColorOok-[0 0 0.2],'MarkerSize',ThisMarkerSize)

plot(FiberLength(end-size(Ber4PamT,1)+1:end),mean(Ber4PamT(:,posodd),2),':o','LineWidth',1,'color',Color3PAM4,'MarkerFaceColor',Color3PAM4,'MarkerSize',ThisMarkerSize)
plot(FiberLength(end-size(Ber4PamF,1)+1:end),mean(Ber4PamF(:,posodd),2),':o','LineWidth',1,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(Ber4PamT,1)+1:end),mean(Ber4PamT,2),'-o','LineWidth',2,'color',Color3PAM4-[0 0 0.2],'MarkerFaceColor',Color3PAM4-[0 0 0.2],'MarkerSize',ThisMarkerSize)


xlabel('Fiber Lenth [km]','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([7 302 1e-6 1e0]);
legend([{'FEC'},{'OOK-w-OIFFT'},{'OOK-w/o-OIFFT'},{'4PAM-w-OIFFT'},{'4PAM-w/o-OIFFT'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0.1 0.1 0.8 0.8]);


figure;
FecRef = linspace(FEC,FEC,length(FiberLength));
plot(FiberLength,(FecRef),'r','LineWidth',2)
hold all;
ColorDpsk = [0 0.6 0];
ColorDqpsk = [0 0.6 0];
ColorOok = [0.0 0.0 0.6];
Color1PAM4 = [0 0.4 1];
Color2PAM4 = [0.4 0.0 1];
Color3PAM4 = [0.0 0.0 0.6];
% c1 = [0.8 0.6 0];
c1 = [1 0.4 0.0];
ThisMarkerSize = 10;
poseven = 2:2:size(BerDpsk,2);
posodd = 1:2:size(BerDpsk,2);

plot(FiberLength(end-size(BerOokT,1)+1:end),mean(BerOokT(:,posodd),2),':d','LineWidth',1,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)

plot(FiberLength(end-size(BerDpskT,1)+1:end),mean(BerDpskT(:,posodd),2),':d','LineWidth',1,'color',Color3PAM4,'MarkerFaceColor',Color3PAM4,'MarkerSize',ThisMarkerSize)


xlabel('Fiber Lenth [km]','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([7 302 1e-6 1e0]);
legend([{'FEC'},{'OOK-w-OIFFT'},{'DPSK-w-OIFFT'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0.1 0.1 0.8 0.8]);

figure;
FecRef = linspace(FEC,FEC,length(FiberLength));
plot(FiberLength,(FecRef),'r','LineWidth',2)
hold all;
ColorDpsk = [0 0.6 0];
ColorDqpsk = [0 0.6 0];
ColorOok = [0.0 0.0 0.6];
Color1PAM4 = [0 0.4 1];
Color2PAM4 = [0.4 0.0 1];
Color3PAM4 = [0.0 0.0 0.6];
% c1 = [0.8 0.6 0];
% c1 = [0.6 0.0 0.6];
ThisMarkerSize = 10;
posodd = 1:2:size(BerDpsk,2);
plot(FiberLength(end-size(Ber4PamT,1)+1:end),mean(Ber4PamT(:,posodd),2),':o','LineWidth',1,'color',Color3PAM4,'MarkerFaceColor',Color3PAM4,'MarkerSize',ThisMarkerSize)

plot(FiberLength(end-size(BerDqpskT,1)+1:end),mean(BerDqpskT(:,posodd),2),':o','LineWidth',1,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)


xlabel('Fiber Lenth [km]','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([7 302 1e-6 1e0]);
legend([{'FEC'},{'4PAM-w-OIFFT'},{'DQPSK-w-OIFFT'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0.1 0.1 0.8 0.8]);


close all;
figure;
FecRef = linspace(FEC,FEC,length(FiberLength));
plot(FiberLength,(FecRef),'r','LineWidth',2)
hold all;
ColorDpsk = [0 0.6 0];
ColorDqpsk = [0 0.6 0];
ColorOok = [0.0 0.0 0.6];
Color1PAM4 = [0 0.4 1];
Color2PAM4 = [0.4 0.0 1];
Color3PAM4 = [0.0 0.0 0.6];
% c1 = [0.8 0.6 0];
c1 = [1 0.4 0.0];
ThisMarkerSize = 10;
posodd = 1:2:size(BerDpsk,2);
plot(FiberLength(end-size(BerDpskT,1)+1:end),mean(BerDpskT,2),':d','LineWidth',1,'color',Color3PAM4,'MarkerFaceColor',Color3PAM4,'MarkerSize',ThisMarkerSize)
plot(FiberLength(end-size(BerDpskF2,1)+1:end),mean(BerDpskF2,2),':d','LineWidth',1,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)
plot(FiberLength(end-size(BerDpskNew,1)+1:end),mean(BerDpskNew,2),':s','LineWidth',2,'color',ColorDpsk-[0 0.2 0],'MarkerFaceColor',ColorDpsk-[0 0.2 0],'MarkerSize',ThisMarkerSize)
% plot(FiberLength(1:1+size(BerDpskF2,1)-1),mean(BerDpskF2,2),'-d','LineWidth',2,'color',c1-[0.2 0.0 0.2],'MarkerFaceColor',c1-[0.2 0.0 0.2],'MarkerSize',ThisMarkerSize)

plot(FiberLength(end-size(BerDqpskT,1)+1:end),mean(BerDqpskT,2),':o','LineWidth',1,'color',Color3PAM4,'MarkerFaceColor',Color3PAM4,'MarkerSize',ThisMarkerSize)
plot(FiberLength(end-size(BerDqpskF,1)+1:end),mean(BerDqpskF,2),':o','LineWidth',1,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(BerDqpskT,1)+1:end),mean(BerDqpskT,2),'-o','LineWidth',2,'color',ColorDqpsk-[0 0.2 0],'MarkerFaceColor',ColorDqpsk-[0 0.2 0],'MarkerSize',ThisMarkerSize)

% plot(FiberLength(end-size(BerOok,1)+1:end),mean(BerOok,2),'-d','LineWidth',2,'color',ColorOok,'MarkerFaceColor',ColorOok,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(BerOokF,1)+1:end),mean(BerOokF,2),'-d','LineWidth',2,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)

% plot(FiberLength(end-size(Ber3Pam4,1)+1:end),mean(Ber3Pam4,2),'-s','LineWidth',2,'color',Color3PAM4,'MarkerFaceColor',Color3PAM4,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(Ber4PamF,1)+1:end),mean(Ber4PamF,2),'-s','LineWidth',2,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)


xlabel('Fiber Lenth [km]','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([7 302 1e-6 1e0]);
legend([{'FEC'},{'DPSK-Aggre'},{'DPSK-Aggre-w/o-OIFFT'},{'DQPSK-Aggre'},{'DQPSK-Aggre-w/o-OIFFT'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0 0 1 1]);

Cmax = max(max(FEC));%0.3;
Cmin = 0;
figure;
DistBerDpskT = repmat(FiberLength(end-size(BerDpskT,1)+1:end).',1,size(BerDpskT,2));
VerCar = 1:128;
VetCar = repmat(VerCar,size(BerDpskT,1),1);
C = BerDpskT;
% mesh(DistBerDpskT,VetCar,BerDpskT,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
% waterfall(DistBerDpskT,VetCar,BerDpskT,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
surf(DistBerDpskT,VetCar,BerDpskT,C);
caxis([Cmin Cmax]);
set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);

% ThisBer = BerDpskT;
pos = 1:128;
evenpos = 2:2:128;
oddpos = 1:2:128;
ThisBer = BerDpskT(21,:);%mean(BerDpskT,1);
fcurv = fit(pos',ThisBer','poly2');
% plot(fcurv,pos,ThisBer,'b*');
figure;
FecRef = linspace(FEC,FEC,length(pos));
plot(pos,(FecRef),'r','LineWidth',2)
hold all;
ThisColor = [0 0.0 0.6];
ThisColor2 = [0.0 0.6 0.0];
plot(evenpos,ThisBer(evenpos),'v','LineWidth',2,'color',ThisColor,'MarkerFaceColor',ThisColor,'MarkerSize',ThisMarkerSize);
plot(oddpos,ThisBer(oddpos),'^','LineWidth',2,'color',ThisColor2,'MarkerFaceColor',ThisColor2,'MarkerSize',ThisMarkerSize);
plot(fcurv,'k');
xlabel('Carrier','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([1 128 1e-6 1e0]);
legend([{'FEC'},{'DPSK-UP'},{'DPSK-DO'},{'Fit-Plot'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0.5 0 0.5 1]);

a=1;

figure;
DistBerDpskT = repmat(FiberLength(end-size(BerDpskNew,1)+1:end).',1,size(BerDpskNew,2));
VerCar = 1:128;
VetCar = repmat(VerCar,size(BerDpskNew,1),1);
C = BerDpskF2;
% mesh(DistBerDpskT,VetCar,BerDpskNew,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
% waterfall(DistBerDpskT,VetCar,BerDpskNew,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
surf(DistBerDpskT,VetCar,BerDpskNew,C);
caxis([Cmin Cmax]);
set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);

% close all;
figure;
DistBerDpskT = repmat(FiberLength(end-size(BerDqpskT,1)+1:end).',1,size(BerDqpskT,2));
VerCar = 1:128;
VetCar = repmat(VerCar,size(BerDqpskT,1),1);
C = BerDqpskT;
% mesh(DistBerDpskT,VetCar,BerDqpskT,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
% waterfall(DistBerDpskT,VetCar,BerDqpskT,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
surf(DistBerDpskT,VetCar,BerDqpskT,C);
caxis([Cmin Cmax]);
set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);

figure;
DistBerDpskT = repmat(FiberLength(end-size(BerDqpskF,1)+1:end).',1,size(BerDqpskF,2));
VerCar = 1:128;
VetCar = repmat(VerCar,size(BerDqpskF,1),1);
C = BerDpskF2;
% mesh(DistBerDpskT,VetCar,BerDqpskF,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
% waterfall(DistBerDpskT,VetCar,BerDqpskF,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
surf(DistBerDpskT,VetCar,BerDqpskF,C);
caxis([Cmin Cmax]);
set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
a=1;

figure;
FecRef = linspace(FEC,FEC,length(FiberLength));
plot(FiberLength,(FecRef),'r','LineWidth',2)
hold all;
ColorDpsk = [0 0.6 0];
ColorDqpsk = [0 0.6 0];
ColorOok = [0.0 0.0 0.6];
Color1PAM4 = [0 0.4 1];
Color2PAM4 = [0.4 0.0 1];
Color3PAM4 = [0.0 0.0 0.6];
% c1 = [0.8 0.6 0];
% c1 = [0.6 0.0 0.6];
ThisMarkerSize = 10;
posodd = 1:2:size(BerDpsk,2);
% plot(FiberLength(end-size(BerDpsk,1)+1:end),mean(BerDpsk,2),'-d','LineWidth',2,'color',ColorDpsk,'MarkerFaceColor',ColorDpsk,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(BerDpskF,1)+1:end),mean(BerDpskF,2),'-d','LineWidth',2,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)

% plot(FiberLength(end-size(BerDqpsk,1)+1:end),mean(BerDqpsk,2),'-s','LineWidth',2,'color',ColorDqpsk,'MarkerFaceColor',ColorDqpsk,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(BerDqpskF,1)+1:end),mean(BerDqpskF,2),'-s','LineWidth',2,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)

plot(FiberLength(end-size(BerOokT,1)+1:end),mean(BerOokT,2),':d','LineWidth',1,'color',ColorOok,'MarkerFaceColor',ColorOok,'MarkerSize',ThisMarkerSize)
plot(FiberLength(end-size(BerOokF,1)+1:end),mean(BerOokF,2),':d','LineWidth',1,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(BerOokT,1)+1:end),mean(BerOokT,2),'-o','LineWidth',2,'color',ColorOok-[0 0 0.2],'MarkerFaceColor',ColorOok-[0 0 0.2],'MarkerSize',ThisMarkerSize)

plot(FiberLength(end-size(Ber4PamT,1)+1:end),mean(Ber4PamT,2),':o','LineWidth',1,'color',Color3PAM4,'MarkerFaceColor',Color3PAM4,'MarkerSize',ThisMarkerSize)
plot(FiberLength(end-size(Ber4PamF,1)+1:end),mean(Ber4PamF,2),':o','LineWidth',1,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(Ber4PamT,1)+1:end),mean(Ber4PamT,2),'-o','LineWidth',2,'color',Color3PAM4-[0 0 0.2],'MarkerFaceColor',Color3PAM4-[0 0 0.2],'MarkerSize',ThisMarkerSize)


xlabel('Fiber Lenth [km]','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([7 302 1e-6 1e0]);
legend([{'FEC'},{'OOK-Aggre'},{'OOK-Aggre-w/o-OIFFT'},{'4PAM-Aggre'},{'4PAM-Aggre-w/o-OIFFT'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0 0 1 1]);


Cmax = max(max(FEC));%0.4;
Cmin = 0;
figure;
DistBerDpskT = repmat(FiberLength(end-size(BerOokT,1)+1:end).',1,size(BerOokT,2));
VerCar = 1:128;
VetCar = repmat(VerCar,size(BerOokT,1),1);
C = BerOokT;
% mesh(DistBerDpskT,VetCar,BerOokT,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
% waterfall(DistBerDpskT,VetCar,BerOokT,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
surf(DistBerDpskT,VetCar,BerOokT,C);
caxis([Cmin Cmax]);
set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);


pos = 1:128;
evenpos = 2:2:128;
oddpos = 1:2:128;
ThisBer = BerOokT(9,:);%mean(BerOokT,1);
fcurv = fit(pos',ThisBer','poly2');
% plot(fcurv,pos,ThisBer,'b*');
figure;
FecRef = linspace(FEC,FEC,length(pos));
plot(pos,(FecRef),'r','LineWidth',2)
hold all;
ThisColor = [0 0.0 0.6];
ThisColor2 = [0.0 0.6 0.0];
plot(evenpos,ThisBer(evenpos),'v','LineWidth',2,'color',ThisColor,'MarkerFaceColor',ThisColor,'MarkerSize',ThisMarkerSize);
plot(oddpos,ThisBer(oddpos),'^','LineWidth',2,'color',ThisColor2,'MarkerFaceColor',ThisColor2,'MarkerSize',ThisMarkerSize);
plot(fcurv,'k');
xlabel('Carrier','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([1 128 1e-6 1e0]);
legend([{'FEC'},{'DPSK-UP'},{'DPSK-DO'},{'Fit-Plot'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0.5 0 0.5 1]);

a=1;

figure;
DistBerDpskT = repmat(FiberLength(end-size(BerOokF,1)+1:end).',1,size(BerOokF,2));
VerCar = 1:128;
VetCar = repmat(VerCar,size(BerOokF,1),1);
C = BerOokF;
% mesh(DistBerDpskT,VetCar,BerOokF,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
% waterfall(DistBerDpskT,VetCar,BerOokF,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
surf(DistBerDpskT,VetCar,BerOokF,C);
caxis([Cmin Cmax]);
set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);

figure;
DistBerDpskT = repmat(FiberLength(end-size(Ber4PamT,1)+1:end).',1,size(Ber4PamT,2));
VerCar = 1:128;
VetCar = repmat(VerCar,size(Ber4PamT,1),1);
C = Ber4PamT;
% mesh(DistBerDpskT,VetCar,Ber4PamT,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
% waterfall(DistBerDpskT,VetCar,Ber4PamT,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
surf(DistBerDpskT,VetCar,Ber4PamT,C);
caxis([Cmin Cmax]);
set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);

figure;
DistBerDpskT = repmat(FiberLength(end-size(Ber4PamF,1)+1:end).',1,size(Ber4PamF,2));
VerCar = 1:128;
VetCar = repmat(VerCar,size(Ber4PamF,1),1);
C = Ber4PamF;
% mesh(DistBerDpskT,VetCar,Ber4PamF,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
% waterfall(DistBerDpskT,VetCar,Ber4PamF,C);
% set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
% figure;
surf(DistBerDpskT,VetCar,Ber4PamF,C);
caxis([Cmin Cmax]);
set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
a=1;


close all;
figure;
FecRef = linspace(FEC,FEC,length(FiberLength));
plot(FiberLength,(FecRef),'r','LineWidth',2)
hold all;
ColorDpsk = [0 0.6 0];
ColorDqpsk = [0 0.6 0];
ColorOok = [0.0 0.0 0.6];
Color1PAM4 = [0 0.4 1];
Color2PAM4 = [0.4 0.0 1];
Color3PAM4 = [0.0 0.0 0.6];
% c1 = [0.8 0.6 0];
c1 = [0.6 0.0 0.6];
ThisMarkerSize = 10;
posodd = 1:2:size(BerDpsk,2);
plot(FiberLength(end-size(BerOfdm,1)+1:end),mean(BerOfdm,2),'-d','LineWidth',2,'color',ColorDpsk,'MarkerFaceColor',ColorDpsk,'MarkerSize',ThisMarkerSize)


xlabel('Fiber Lenth [km]','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([7 302 1e-6 1e0]);
legend([{'FEC'},{'BerOFDM'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0 0 1 1]);
a=1;


figure;

FecRef = linspace(FEC,FEC,length(EbN0));
plot(EbN0,(FecRef),'r','LineWidth',2)
hold all;
ColorDpsk = [0 0.6 0];
ColorDqpsk = [0 0.6 0];
ColorOok = [0.0 0.0 0.6];
Color1PAM4 = [0 0.4 1];
Color2PAM4 = [0.4 0.0 1];
Color3PAM4 = [0.0 0.0 0.6];
% c1 = [0.8 0.6 0];
c1 = [0.6 0.0 0.6];
ThisMarkerSize = 10;
posodd = 1:2:size(BerDpsk,2);
plot(EbN0(1:size(BerOfdmSnr,1)),mean(BerOfdmSnr,2),'-d','LineWidth',2,'color',ColorDpsk,'MarkerFaceColor',ColorDpsk,'MarkerSize',ThisMarkerSize)


xlabel('EbN0','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([0 10 1e-6 1e0]);
legend([{'FEC'},{'BerOFDM'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0 0 1 1]);
a=1;

figure;
FecRef = linspace(FEC,FEC,length(FiberLength));
plot(FiberLength,(FecRef),'r:','LineWidth',4)
hold all;
ColorDpsk = [1 0.4 0];
ColorDqpsk = [0.8 0.0 0];
ColorOok = [0 0.4 0];
Color1PAM4 = [0 0.4 1];
Color2PAM4 = [0.4 0.0 1];
Color3PAM4 = [0.2 0.4 0.6];
plot(FiberLength(end-size(BerDpsk,1)+1:end),(BerDpsk(:,end/2)),'v','LineWidth',2,'color',ColorDpsk)
plot(FiberLength(end-size(BerDpsk,1)+1:end),mean(BerDpsk,2),':','LineWidth',2,'color',ColorDpsk)
plot(FiberLength(end-size(BerDpsk,1)+1:end),(BerDpsk(:,1+end/2)),'^','LineWidth',2,'color',ColorDpsk)

plot(FiberLength(end-size(BerDqpsk,1)+1:end),(BerDqpsk(:,end/2)),'v','LineWidth',2,'color',ColorDqpsk)
plot(FiberLength(end-size(BerDqpsk,1)+1:end),mean(BerDqpsk,2),':','LineWidth',2,'color',ColorDqpsk)
plot(FiberLength(end-size(BerDqpsk,1)+1:end),(BerDqpsk(:,1+end/2)),'^','LineWidth',2,'color',ColorDqpsk)

plot(FiberLength(end-size(BerOok,1)+1:end),(BerOok(:,end/2)),'v','LineWidth',2,'color',ColorOok)
plot(FiberLength(end-size(BerOok,1)+1:end),mean(BerOok,2),':','LineWidth',2,'color',ColorOok)
plot(FiberLength(end-size(BerOok,1)+1:end),(BerOok(:,1+end/2)),'^','LineWidth',2,'color',ColorOok)

plot(FiberLength(end-size(Ber3Pam4,1)+1:end),(Ber3Pam4(:,end/2)),'v','LineWidth',2,'color',Color3PAM4)
plot(FiberLength(end-size(Ber3Pam4,1)+1:end),mean(Ber3Pam4,2),':','LineWidth',2,'color',Color3PAM4)
plot(FiberLength(end-size(Ber3Pam4,1)+1:end),(Ber3Pam4(:,1+end/2)),'^','LineWidth',2,'color',Color3PAM4)


% plot(FiberLength(end-size(Ber1Pam4,1)+1:end),(Ber1Pam4(:,end/2)),'^','LineWidth',2,'color',Color1PAM4)
% plot(FiberLength(end-size(Ber2Pam4,1)+1:end),(Ber2Pam4(:,end/2)),'^','LineWidth',2,'color',Color2PAM4)

% plot(FiberLength(end-size(Ber1Pam4,1)+1:end),(Ber1Pam4(:,1+end/2)),'v','LineWidth',2,'color',Color1PAM4)
% plot(FiberLength(end-size(Ber2Pam4,1)+1:end),(Ber2Pam4(:,1+end/2)),'v','LineWidth',2,'color',Color2PAM4)


% plot(FiberLength(end-size(Ber1Pam4,1)+1:end),mean(Ber1Pam4,2),':','LineWidth',2,'color',Color1PAM4)
% plot(FiberLength(end-size(Ber2Pam4,1)+1:end),mean(Ber2Pam4,2),':','LineWidth',2,'color',Color2PAM4)

xlabel('Fiber Lenth [km]','FontSize',40);
ylabel('BER','FontSize',40);
ThisFig = gca;
ThisFig.FontSize = 40;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([7 302 1e-6 1e0]);
legend([{'FEC'},{'DPSK-UP'},{'DPSK-ME'},{'DPSK-DO'},{'DQPSK-UP'},{'DQPSK-ME'},{'DQPSK-DO'},{'OOK-UP'},{'OOK-ME'},{'OOK-DO'},{'4PAM-UP'},{'4PAM-ME'},{'4PAM-DO'}],'FontName','CMR10','FontSize',30,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0 0 1 1]);
a=1;


% DPSKBoxPlot;

CompBER;


load('DpskCp122FullSysNoNoiseKm_240_1');
pos = 1:128;
evenpos = 2:2:128;
oddpos = 1:2:128;
ThisBer = mean(BerDPSK,1);
fcurv = fit(pos',ThisBer','poly2');
% plot(fcurv,pos,ThisBer,'b*');
figure;
FecRef = linspace(FEC,FEC,length(pos));
plot(pos,(FecRef),'r','LineWidth',2)
hold all;
ThisColor = [0 0.0 0.6];
ThisColor2 = [0.0 0.6 0.0];
plot(evenpos,ThisBer(evenpos),'v','LineWidth',2,'color',ThisColor,'MarkerFaceColor',ThisColor,'MarkerSize',ThisMarkerSize);
plot(oddpos,ThisBer(oddpos),'^','LineWidth',2,'color',ThisColor2,'MarkerFaceColor',ThisColor2,'MarkerSize',ThisMarkerSize);
plot(fcurv,'k');
xlabel('Carrier','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([1 128 1e-6 1e0]);
legend([{'FEC'},{'DPSK-UP'},{'DPSK-DO'},{'Fit-Plot'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0 0 1 1]);

a=1;


load('DqpskCp122FullSysNoNoiseKm_90_1');
pos = 1:128;
evenpos = 2:2:128;
oddpos = 1:2:128;
ThisBer = mean(BerDQPSK,1);
fcurv = fit(pos',ThisBer','poly2');
% plot(fcurv,pos,ThisBer,'b*');
figure;
FecRef = linspace(FEC,FEC,length(pos));
plot(pos,(FecRef),'r','LineWidth',2)
hold all;
ThisColor = [0 0.0 0.6];
ThisColor2 = [0.0 0.6 0.0];
plot(evenpos,ThisBer(evenpos),'v','LineWidth',2,'color',ThisColor,'MarkerFaceColor',ThisColor,'MarkerSize',ThisMarkerSize);
plot(oddpos,ThisBer(oddpos),'^','LineWidth',2,'color',ThisColor2,'MarkerFaceColor',ThisColor2,'MarkerSize',ThisMarkerSize);
plot(fcurv,'k');
xlabel('Carrier','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([1 128 1e-6 1e0]);
legend([{'FEC'},{'DQPSK-UP'},{'DQPSK-DO'},{'Fit-Plot'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0 0 1 1]);

a=1;


load('OokCp122FullSysNoNoiseKm_110_1');
pos = 1:128;
evenpos = 2:2:128;
oddpos = 1:2:128;
ThisBer = mean(BerOOK,1);
fcurv = fit(pos',ThisBer','poly2');
% plot(fcurv,pos,ThisBer,'b*');
figure;
FecRef = linspace(FEC,FEC,length(pos));
plot(pos,(FecRef),'r','LineWidth',2)
hold all;
ThisColor = [0 0.0 0.6];
ThisColor2 = [0.0 0.6 0.0];
plot(evenpos,ThisBer(evenpos),'v','LineWidth',2,'color',ThisColor,'MarkerFaceColor',ThisColor,'MarkerSize',ThisMarkerSize);
plot(oddpos,ThisBer(oddpos),'^','LineWidth',2,'color',ThisColor2,'MarkerFaceColor',ThisColor2,'MarkerSize',ThisMarkerSize);
plot(fcurv,'k');
xlabel('Carrier','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([1 128 1e-6 1e0]);
legend([{'FEC'},{'OOK-UP'},{'OOK-DO'},{'Fit-Plot'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0 0 1 1]);

a=1;



load('Pam4Cp122FullSysNoNoiseKm_40_3');
pos = 1:128;
evenpos = 2:2:128;
oddpos = 1:2:128;
ThisBer = mean(Ber4PAM,1);
fcurv = fit(pos',ThisBer','poly2');
% plot(fcurv,pos,ThisBer,'b*');
figure;
FecRef = linspace(FEC,FEC,length(pos));
plot(pos,(FecRef),'r','LineWidth',2)
hold all;
ThisColor = [0 0.0 0.6];
ThisColor2 = [0.0 0.6 0.0];
plot(evenpos,ThisBer(evenpos),'v','LineWidth',2,'color',ThisColor,'MarkerFaceColor',ThisColor,'MarkerSize',ThisMarkerSize);
plot(oddpos,ThisBer(oddpos),'^','LineWidth',2,'color',ThisColor2,'MarkerFaceColor',ThisColor2,'MarkerSize',ThisMarkerSize);
plot(fcurv,'k');
xlabel('Carrier','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([1 128 1e-6 1e0]);
legend([{'FEC'},{'PAM4-UP'},{'PAM4-DO'},{'Fit-Plot'}],'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0 0 1 1]);

a=1;

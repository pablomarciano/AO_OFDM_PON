
figure;
FecRef = linspace(FEC,FEC,length(FiberLength));
plot(FiberLength,(FecRef),'r','LineWidth',2)
hold all;
ColorDpsk = [0.6 0.6 0];
ColorDqpsk = [0.6 0.6 0];
ColorOok = [0.6 0.0 0.6];
Color1PAM4 = [0.6 0.4 1];
Color2PAM4 = [0.4 0.6 1];
Color3PAM4 = [0.6 0.0 0.6];
% c1 = [0.8 0.6 0];
c1 = [0.6 0.6 0.6];
ThisMarkerSize = 10;
posodd = 1:2:size(BerDpsk,2);
plot(FiberLength(end-size(BerDpskT,1)+1:end),mean(BerDpskT,2),'-s','LineWidth',2,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)
plot(FiberLength(end-size(BerDpskTS,1)+1:end),mean(BerDpskTS,2),'-d','LineWidth',2,'color',c1-[0 0.2 0],'MarkerFaceColor',ColorDpsk-[0 0.2 0],'MarkerSize',ThisMarkerSize)

plot(FiberLength(end-size(BerDqpskT,1)+1:end),mean(BerDqpskT,2),'-s','LineWidth',2,'color',ColorDqpsk,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)
plot(FiberLength(end-size(BerDqpskTS,1)+1:end),mean(BerDqpskTS,2),'-d','LineWidth',2,'color',ColorDqpsk-[0 0.2 0],'MarkerFaceColor',ColorDqpsk-[0 0.2 0],'MarkerSize',ThisMarkerSize)

xlabel('Fiber Lenth [km]','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'Times New Roman';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([7 302 1e-6 1e0]);
legend([{'FEC'},{'DPSK-Aggre'},{'DPSK-Aggre-w/o-OIFFT'},{'DQPSK-Aggre'},{'DQPSK-Aggre-w/o-OIFFT'}],'FontName','Times New Roman','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0 0 1 1]);
% DPSKBoxPlot;
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
c1 = [0.6 0.0 0.6];
ThisMarkerSize = 10;
posodd = 1:2:size(BerDpsk,2);

plot(FiberLength(end-size(BerOokT,1)+1:end),mean(BerOokT,2),'-s','LineWidth',2,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)
plot(FiberLength(end-size(BerOokTS,1)+1:end),mean(BerOokTS,2),'-d','LineWidth',2,'color',c1-[0 0 0.2],'MarkerFaceColor',ColorOok-[0 0 0.2],'MarkerSize',ThisMarkerSize)

plot(FiberLength(end-size(Ber4PamT,1)+1:end),mean(Ber4PamT,2),'-s','LineWidth',2,'color',Color3PAM4,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)
plot(FiberLength(end-size(Ber4PamTS,1)+1:end),mean(Ber4PamTS,2),'-d','LineWidth',2,'color',Color3PAM4-[0 0 0.2],'MarkerFaceColor',Color3PAM4-[0 0 0.2],'MarkerSize',ThisMarkerSize)


xlabel('Fiber Lenth [km]','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'Times New Roman';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([7 302 1e-6 1e0]);
legend([{'FEC'},{'OOK-Aggre'},{'OOK-Aggre-w/o-OIFFT'},{'4PAM-Aggre'},{'4PAM-Aggre-w/o-OIFFT'}],'FontName','Times New Roman','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0 0 1 1]);
a=1;

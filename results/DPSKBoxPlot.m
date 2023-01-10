

figure;
FecRef = linspace(FEC,FEC,length(FiberLength));
% plot(FiberLength,(FecRef),'r','LineWidth',2)
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
boxplot(BerDpsk.')
boxplot(BerDpskF.')
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'Times New Roman';
ThisFig.Box = 'on';
% ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
set(gcf,'units','normalized','outerposition',[0 0 1 1]);
figure;
hold all;
boxplot(BerDqpsk.')
boxplot(BerDqpskF.')
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'Times New Roman';
ThisFig.Box = 'on';
% ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
set(gcf,'units','normalized','outerposition',[0 0 1 1]);

% plot(FiberLength(end-size(BerOok,1)+1:end),mean(BerOok,2),'-d','LineWidth',2,'color',ColorOok,'MarkerFaceColor',ColorOok,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(BerOokF,1)+1:end),mean(BerOokF,2),'-d','LineWidth',2,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)

% plot(FiberLength(end-size(Ber3Pam4,1)+1:end),mean(Ber3Pam4,2),'-s','LineWidth',2,'color',Color3PAM4,'MarkerFaceColor',Color3PAM4,'MarkerSize',ThisMarkerSize)
% plot(FiberLength(end-size(Ber4PamF,1)+1:end),mean(Ber4PamF,2),'-s','LineWidth',2,'color',c1,'MarkerFaceColor',c1,'MarkerSize',ThisMarkerSize)


xlabel('Fiber Lenth [km]','FontSize',20);
ylabel('BER','FontSize',20);
ThisFig = gca;
ThisFig.FontSize = 20;
ThisFig.FontName = 'Times New Roman';
ThisFig.Box = 'on';
% ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'off';
ThisFig.YMinorGrid = 'off';
axis([7 302 1e-6 1e0]);
legend([{'FEC'},{'DPSK-Aggre'},{'DPSK-Aggre-w/o-OIFFT'},{'DQPSK-Aggre'},{'DQPSK-Aggre-w/o-OIFFT'}],'FontName','Times New Roman','FontSize',20,'Box','off','Location','Best');
set(gcf,'units','normalized','outerposition',[0 0 1 1]);
a=0;
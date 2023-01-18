%%
clear BerAux BerAux2;
figure;
hold all;
ThisMarkerSize = 10;
ThisMarkerIs = 'd';
ThisFaceColor = [1 0.4 0];
ThisMarkerColor = [1 0.4 0];
ThisMarkerIs2 = 'o';
ThisFaceColor2 = [0 0.4 1];
ThisMarkerColor2 = [0 0.4 1];

plot(EbN0(1:13),BerOokTheo(1:13),'k','LineWidth',2);
BerAux = BersSnr.(BerSnrNames{18});
BerAux2(1:size(BerAux,1),1) = BerAux(:,1);
% plot(EbN0(BersSnrPos.(BerSnrNames{18})),BerAux(:,1),'LineWidth',2);
% BerAux = BersSnr.(BerSnrNames{19});
% BerAux2(1:size(BerAux,1),2) = BerAux(:,1);
% plot(EbN0(BersSnrPos.(BerSnrNames{19})),BerAux(:,1),'LineWidth',2);
BerAux = BersSnr.(BerSnrNames{20});
BerAux2(1:size(BerAux,1),2) = BerAux(:,1);
% plot(EbN0(BersSnrPos.(BerSnrNames{20})),BerAux(:,1),'LineWidth',2);
BerAux = BersSnr.(BerSnrNames{21});
BerAux2(1:size(BerAux,1),3) = BerAux(:,1);
% plot(EbN0(BersSnrPos.(BerSnrNames{21})),BerAux(:,1),'LineWidth',2);
BerAux = BersSnr.(BerSnrNames{22});
BerAux2(1:size(BerAux,1),4) = BerAux(:,1);
% plot(EbN0(BersSnrPos.(BerSnrNames{22})),BerAux(:,1),'LineWidth',2);
plot(EbN0(1:size(BerAux2,1)),mean(BerAux2,2),ThisMarkerIs,'MarkerFaceColor',ThisFaceColor,'Color',ThisMarkerColor,'MarkerSize',ThisMarkerSize);


BerAux = BersSnr.(BerSnrNames{16});
BerAux2(1:size(BerAux,1),1:size(BerAux,2),1) = BerAux;
plot(EbN0(BersSnrPos.(BerSnrNames{16})),mean(BerAux,2),ThisMarkerIs2,'MarkerFaceColor',ThisFaceColor2,'Color',ThisMarkerColor2,'MarkerSize',ThisMarkerSize);
% BerAux = BersSnr.(BerSnrNames{17});
% BerAux2(1:size(BerAux,1),1:size(BerAux,2),2) = BerAux;
% plot(EbN0(BersSnrPos.(BerSnrNames{17})),mean(BerAux,2),'LineWidth',2);

ThisLegend = [{'Theoretical'} {'OOK Sing-Car'} {'OOK2 AO-OFDM'}];
legend(ThisLegend,'FontName','CMR10','FontSize',30,'Box','off','Location','Best');

xlabel('EbN0','FontSize',30);
ylabel('BER','FontSize',30);
ThisFig = gca;
ThisFig.FontSize = 30;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'on';
ThisFig.YMinorGrid = 'on';
axis([0 12 1.0e-7 0.25e0]);
set(gcf,'units','normalized','outerposition',[0.2 0.2 0.5 0.6]);
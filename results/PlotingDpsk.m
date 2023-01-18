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


plot(EbN0(1:13),BerDpskTheo(1:13),'k','LineWidth',2);
BerAux = BersSnr.(BerSnrNames{6});
BerAux2(1:size(BerAux,1),1) = BerAux(:,1);
plot(EbN0(BersSnrPos.(BerSnrNames{6})),BerAux(:,1),ThisMarkerIs,'MarkerFaceColor',ThisFaceColor,'Color',ThisMarkerColor,'MarkerSize',ThisMarkerSize);

BerAux = BersSnr.(BerSnrNames{5});
BerAux2(1:size(BerAux,1),1:size(BerAux,2),1) = BerAux;
plot(EbN0(BersSnrPos.(BerSnrNames{5})),mean(BerAux,2),ThisMarkerIs2,'MarkerFaceColor',ThisFaceColor2,'Color',ThisMarkerColor2,'MarkerSize',ThisMarkerSize);


ThisLegend = [{'Theoretical'} {'DPSK Sing-Car'} {'DPSK AO-OFDM'}];
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
axis([0 11 1e-7 1e0]);
set(gcf,'units','normalized','outerposition',[0.2 0.2 0.5 0.6]);
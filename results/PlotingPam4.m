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
ThisMarkerIs3 = 'h';
ThisFaceColor3 = [0 0.8 0];
ThisMarkerColor3 = [0 0.8 0];

plot(EbN0(1:22),BerPam4Theo(1:22),'k','LineWidth',2);
BerAux = BersSnr.(BerSnrNames{38});
BerAux2(1:size(BerAux,1),1) = BerAux(:,1);
plot(EbN0(BersSnrPos.(BerSnrNames{38})),BerAux(:,1),ThisMarkerIs,'MarkerFaceColor',ThisFaceColor,'Color',ThisMarkerColor,'MarkerSize',ThisMarkerSize);
BerAux = BersSnr.(BerSnrNames{37});
BerAux2(1:size(BerAux,1),2) = BerAux(:,1);
% plot(EbN0(BersSnrPos.(BerSnrNames{37})),BerAux(:,1),'LineWidth',2);

BerAux = BersSnr.(BerSnrNames{36});
BerAux2(1:size(BerAux,1),1:size(BerAux,2),1) = BerAux;
plot(EbN0(BersSnrPos.(BerSnrNames{36})),mean(BerAux,2),ThisMarkerIs2,'MarkerFaceColor',ThisFaceColor2,'Color',ThisMarkerColor2,'MarkerSize',ThisMarkerSize);
% 
% BerAux = BersSnr.(BerSnrNames{40});
% BerAux2(1:size(BerAux,1),1:size(BerAux,2),1) = BerAux;
% plot(EbN0(BersSnrPos.(BerSnrNames{40})),BerAux(:,1),'s','MarkerFaceColor',ThisFaceColor2-[0 0.2 0.2],'Color',ThisMarkerColor2-[0 0.2 0.2],'MarkerSize',ThisMarkerSize);
% 
% BerAux = BersSnr.(BerSnrNames{41});
% BerAux2(1:size(BerAux,1),1:size(BerAux,2),1) = BerAux;
% plot(EbN0(BersSnrPos.(BerSnrNames{41})),BerAux(:,1),ThisMarkerIs3,'MarkerFaceColor',ThisFaceColor3,'Color',ThisMarkerColor3,'MarkerSize',ThisMarkerSize);
% 
BerAux = BersSnr.(BerSnrNames{42});
BerAux2(1:size(BerAux,1),1) = BerAux(:,1);
plot(EbN0(BersSnrPos.(BerSnrNames{42})),BerAux(:,1),'p','MarkerFaceColor',ThisFaceColor3-[0 0.2 0],'Color',ThisMarkerColor3-[0 0.2 0],'MarkerSize',ThisMarkerSize+2);

clear BerAux2;

BerAux = BersSnr.(BerSnrNames{44});
BerAux2(1:size(BerAux,1),1:size(BerAux,2),1) = BerAux;
% plot(EbN0(BersSnrPos.(BerSnrNames{44})),mean(BerAux,2),ThisMarkerIs3,'MarkerFaceColor',ThisFaceColor2-[0 0.2 0.2],'Color',ThisMarkerColor2-[0 0.2 0.2],'MarkerSize',ThisMarkerSize);

BerAux = BersSnr.(BerSnrNames{45});
BerAux2(1:size(BerAux,1),1:size(BerAux,2),2) = BerAux;
BerAux = mean(BerAux2,3);
plot(EbN0(BersSnrPos.(BerSnrNames{44})),mean(BerAux,2),ThisMarkerIs3,'MarkerFaceColor',ThisFaceColor2-[-0.2 0.2 0.2],'Color',ThisMarkerColor2-[0 0.2 0.2],'MarkerSize',ThisMarkerSize);



ThisLegend = [{'Theoretical'} {'PAM4 Sing-Car'} {'PAM4 AO-OFDM'} {'PAM4-Ele Sing-Car'} {'PAM4-Ele AO-OFDM'}];
legend(ThisLegend,'FontName','CMR10','FontSize',25,'Box','off','Location','Best');

xlabel('EbN0','FontSize',25);
ylabel('BER','FontSize',25);
ThisFig = gca;
ThisFig.FontSize = 25;
ThisFig.FontName = 'CMR10';
ThisFig.Box = 'on';
ThisFig.LineWidth = 2;
ThisFig.YScale = 'log';
ThisFig.XGrid = 'on';
ThisFig.YGrid = 'on';
ThisFig.XMinorGrid = 'on';
ThisFig.YMinorGrid = 'on';
axis([0 22 1e-6 1e0]);
set(gcf,'units','normalized','outerposition',[0.2 0.2 0.5 0.6]);
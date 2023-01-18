%% Ploting 3D


for kk=1:17
    figure;
    hold all;
    switch BersSnrType.(BerKmNames{kk})
        case 'BerDPSK'
%             plot(EbN0(BersKmPos.(BerKmNames{kk})),BerDpskTheo(BersKmPos.(BerKmNames{kk})),'k','LineWidth',2);
            ThisLegend = [{'DPSK'}];
        case 'BerDQPSK'
%             plot(EbN0(BersKmPos.(BerKmNames{kk})),BerDqpskTheo(BersKmPos.(BerKmNames{kk})),'k','LineWidth',2);
            ThisLegend = [{'DQPSK'}];
        case 'BerOOK'
%             plot(EbN0(BersKmPos.(BerKmNames{kk})),BerOokTheo(BersKmPos.(BerKmNames{kk})),'k','LineWidth',2);
            ThisLegend = [{'OOK'}];
        case 'Ber4PAM'
%             plot(EbN0(BersKmPos.(BerKmNames{kk})),BerPam4Theo(BersKmPos.(BerKmNames{kk})),'k','LineWidth',2);
            ThisLegend = [{'PAM4'}];
        otherwise
    end
    BerToPlot =  BersKm.(BerKmNames{kk});
    ElecCarr  =  1:size(BerToPlot,2);
    LenToPlo = repmat(FiberLength(BersKmPos.(BerKmNames{kk})).',1,size(BerToPlot,2));
    plot(LenToPlo,BerToPlot);
    CarToPlo = repmat(ElecCarr,size(BerToPlot,1),1);
    C = BerToPlot;
    figure
    hold all;
    mesh(CarToPlo,LenToPlo,BerToPlot,C)
    set(gcf,'units','normalized','outerposition',[0 0 0.5 1]);
    figure
    hold all;
    surf(CarToPlo,LenToPlo,BerToPlot,C)
%     figure
%     hold all;
%     surfc(CarToPlo,LenToPlo,BerToPlot,C)
%     legend(ThisLegend,'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
%     xlabel('km','FontSize',30);
%     ylabel('BER','FontSize',30);
%     ThisFig = gca;
%     ThisFig.FontSize = 30;
%     ThisFig.FontName = 'CMR10';
%     ThisFig.Box = 'on';
%     ThisFig.LineWidth = 2;
%     ThisFig.YScale = 'log';
%     ThisFig.XGrid = 'on';
%     ThisFig.YGrid = 'on';
%     ThisFig.XMinorGrid = 'on';
%     ThisFig.YMinorGrid = 'on';
    set(gcf,'units','normalized','outerposition',[0.5 0 0.5 1]);
    a=1;
end

% [BerOfdm] = LoadBerPerCarr( ThisFilesToLoad,'BerToPlotOfdm' );
% ElecCarr = 1:size(BerOfdm,2);
% LenToPlo = repmat(FiberLength.',1,size(BerOfdm,2));
% figure;
% hold all;
% plot(LenToPlo,BerOfdm);
% CarToPlo = repmat(ElecCarr,size(BerOfdm,1),1);
% C = BerOfdm;
% % C = linspace(min(min(BerOfdm,[],1)),max(max(BerOfdm,[],1)),size(BerOfdm,2));
% % C = repmat(C,size(BerOfdm,1),1);
% % figure;
% % hold all;
% % surf(CarToPlo,LenToPlo,BerOfdm,C)
% % figure;
% % hold all;
% % surfc(CarToPlo,LenToPlo,BerOfdm,C)
% figure;
% hold all;
% mesh(CarToPlo,LenToPlo,BerOfdm,C)
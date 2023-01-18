
for kk=1:39
    figure;
    hold all;
    switch BersSnrType.(BerSnrNames{kk})
        case 'BerDPSK'
            plot(EbN0(BersSnrPos.(BerSnrNames{kk})),BerDpskTheo(BersSnrPos.(BerSnrNames{kk})),'k','LineWidth',2);
            ThisLegend = [{'Theo'} {'DPSK'}];
        case 'BerDQPSK'
            plot(EbN0(BersSnrPos.(BerSnrNames{kk})),BerDqpskTheo(BersSnrPos.(BerSnrNames{kk})),'k','LineWidth',2);
            ThisLegend = [{'Theo'} {'DQPSK'}];
        case 'BerOOK'
            plot(EbN0(BersSnrPos.(BerSnrNames{kk})),BerOokTheo(BersSnrPos.(BerSnrNames{kk})),'k','LineWidth',2);
            ThisLegend = [{'Theo'} {'OOK'}];
        case 'Ber4PAM'
            plot(EbN0(BersSnrPos.(BerSnrNames{kk})),BerPam4Theo(BersSnrPos.(BerSnrNames{kk})),'k','LineWidth',2);
            ThisLegend = [{'Theo'} {'PAM4'}];
        otherwise
    end
    plot(EbN0(BersSnrPos.(BerSnrNames{kk})),BersSnr.(BerSnrNames{kk}),'LineWidth',2);
    legend(ThisLegend,'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
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
    set(gcf,'units','normalized','outerposition',[0 0 1 1]);
    a=1;
end


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
    plot(EbN0(BersKmPos.(BerKmNames{kk})),BersKm.(BerKmNames{kk}),'LineWidth',2);
    legend(ThisLegend,'FontName','CMR10','FontSize',20,'Box','off','Location','Best');
    xlabel('km','FontSize',30);
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
    set(gcf,'units','normalized','outerposition',[0 0 1 1]);
    a=1;
end
function [ H1,H2,H3 ] = ThisScatterPlot( FileToLoad, ThisCarr )
load(FileToLoad,'EvmMatRec','EvmMatRef');
figure;
H3 = gcf;
plot(EvmMatRec(ThisCarr,:),'ro');
hold all;
xlabel('Bits');
ylabel('Amplitude');
plot(EvmMatRef(ThisCarr,:),'b*');
H1 = scatterplot(EvmMatRec(ThisCarr,:));
H2 = scatterplot(EvmMatRef(ThisCarr,:));

end


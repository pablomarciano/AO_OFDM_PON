bw = 64e6;
ts = 1/bw;
tu = 4*bw/5;
tg = tu/4;
tp = ts;
tf = tp;
t = linspace(0,tp,nfft);
f = time2freq(t);
M = 4;
Ns = 15;
nfft = 32;
DataFrame = 1;
Data = randi([0 M-1],Ns,DataFrame);
plot(Data)

tx = qammod(Data, M, 'PlotConstellation', true);
tx_conj = conj(tx);
tx_cr = flipud(tx_conj);

tx_ofdm = zeros(nfft,DataFrame);

tx_ofdm(2:1+Ns)=tx;
tx_ofdm(3+Ns:2+Ns+Ns)=tx_cr;

tx_ofdm_a = ifft(tx_ofdm);

a=1;















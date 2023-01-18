close all;
fc = 1e9;
fp1 = 1*fc;
fp2 = 2*fc;
fp3 = 3*fc;
fp4 = 4*fc;
T =  1/fc;
nT = 10;
fa = 16*fp4;
ta = 1/fa;
tf = T*nT;
t = linspace(0, tf, tf/ta);
f = time2freq(t);
sin_t = cos(2*pi*fc*t);

figure;
plot(t, sin_t)


sin_f = fft(sin_t);

sin_db = 20*log10(abs(fftshift(sin_f)./length(sin_f)));

figure;
plot(f, sin_db)


port_1 = cos(2*pi*fp1*t) + 1j*sin(2*pi*fp1*t);
port_1 = port_1 .* sin_t;
port_2 = cos(2*pi*fp2*t) + 1j*sin(2*pi*fp2*t);
port_2 = port_2 .* sin_t;
port_3 = cos(2*pi*fp3*t) + 1j*sin(2*pi*fp3*t);
port_3 = port_3 .* sin_t;
port_4 = cos(2*pi*fp4*t) + 1j*sin(2*pi*fp4*t);
port_4 = port_4 .* sin_t;

port_1_db = 20*log10(abs(fftshift(fft(port_1))./length(port_1)));
port_2_db = 20*log10(abs(fftshift(fft(port_2))./length(port_2)));
port_3_db = 20*log10(abs(fftshift(fft(port_3))./length(port_3)));
port_4_db = 20*log10(abs(fftshift(fft(port_4))./length(port_4)));

figure;
hold all;
plot(f,port_1_db)
plot(f,port_2_db)
plot(f,port_3_db)
plot(f,port_4_db)

E1 = port_1 + port_2 + port_3 + port_4;
E1_db = 20*log10(abs(fftshift(fft(E1))./length(E1)));
figure(77);
plot(f,E1_db)
%%
[Eout,~,MapVet]=OpticalFFTN(f,T,2,E1);

figure(77); hold all;
for kk=1:4
    Eaux_db = 20*log10(abs(fftshift(fft(Eout(MapVet(kk),:)))./length(Eout(MapVet(kk),:))));
    plot(f,Eaux_db)
    keyboard;
end


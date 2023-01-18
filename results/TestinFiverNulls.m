%%
fc           = 12.5e9;                                                     %center frequency of Electical signal ^10 kilo ^20 mega ^30 giga
Rb           = fc/(1e0);                                                         %bit rate
NumPor       = 2^7;                                                        %Number of carriers used
NumNyq       = 2^2;                                                        %Nyquest number to be at least two time the maximu frequency
fsample      = NumPor*NumNyq*fc;                                           %Sampling frequency
T            = 1/Rb;                                                       %period of the filter
Ta           = 1/fsample;                                                  %period of the filter
NPPB         = T/Ta;                                                       %Number of Point Per Bit
% Tb           = 1/Rb;                                                     %time of one bit NRZ
NtA          = 2^10;
NtF          =(2^19)/(NtA*NumNyq*NumPor);
NumberOf_T   = (2^1)*NtF*NtA;                                                    %number of periods on the simulation 2^18 is the m�ximum value for numberEyes = 2
FinalTime    = NumberOf_T*T;                                               %Final time of simulation
Nb           = floor(FinalTime/T);                                         %number of bits
% TotalSamples = FinalTime*fsample;                                        %Total Number of Samples
TotalSamples = NumberOf_T*(T/Ta);                                          %Total Number of Samples

t            = linspace(0,FinalTime,round(TotalSamples));                         %Time vector for simulation
f            = time2freq(t); 




NumFra = 10;
NumFFT = 32;
Ns     = (NumFFT/2)-1;
M      = 4;
k      =log2(M);

ModType = 'QAM';

Data = randi([0 M-1],Ns,NumFra);

Sign = qammode(Data,M);




































%%

    NamToLoadSnr = [{'DpskCp122DemuxFiltB2bSnr'},{'_1'},{'BerDPSK'},{'BerDPSKS'};...            %1
                    {'DpskCp122DemuxFiltB2bSnr'},{'_NoBalDec_1'},{'BerDPSK'},{'BerDPSKS'};...   %2
                    {'DpskCp122DemuxFiltB2bSnr'},{'_Sys_1'},{'BerDPSK'},{'BerDPSKS'};...        %3
                    {'DpskCp122DemuxFiltB2bSnr'},{'_TimSys0_1'},{'BerDPSK'},{'BerDPSKS'};...    %4
                    {'DpskFullSysBerSnr_'},{'_1'},{'BerDPSK'},{'BerDPSKS'};...                  %5
                    {'DpskSingCarBerSnr_'},{'_2'},{'BerDPSK'},{'BerDPSKS'};...                  %6
                    {'DqpskCp122DemuxFiltB2bSnr'},{'_1'},{'BerDQPSK'},{'BerDQPSKS'};...         %7
                    {'DqpskCp122DemuxFiltB2bSnr'},{'_Sys_1'},{'BerDQPSK'},{'BerDQPSKS'};...     %8
                    {'DqpskCp122DemuxFiltB2bSnr'},{'_TimSys0_1'},{'BerDQPSK'},{'BerDQPSKS'};... %9
                    {'DqpskFullSysBerSnrVal_'},{'_1'},{'BerDQPSK'},{'BerDQPSKS'};...            %10
                    {'DqpskSingCarBerSnr_'},{'_1'},{'BerDQPSK'},{'BerDQPSKS'};...               %11
                    {'DqpskSingCarBerSnr_'},{'_2'},{'BerDQPSK'},{'BerDQPSKS'};...               %12
                    {'OokCp122DemuxFiltB2bSnr'},{'_1'},{'BerOOK'},{'BerOOKS'};...               %13
                    {'OokCp122DemuxFiltB2bSnr'},{'_Sys_1'},{'BerOOK'},{'BerOOKS'};...           %14
                    {'OokCp122DemuxFiltB2bSnr'},{'_TimSys0_1'},{'BerOOK'},{'BerOOKS'};...       %15
                    {'OokCp122FullSysNoiseSnr_'},{'_1'},{'BerOOK'},{'BerOOKS'};...              %16
                    {'OokFullSysBerSnr_'},{'_1'},{'BerOOK'},{'BerOOKS'};...                     %17
                    {'OokSingCarBerSnr_'},{'_1'},{'BerOOK'},{'BerOOKS'};...                     %18
                    {'OokSingCarBerSnr_'},{'_2'},{'BerOOK'},{'BerOOKS'};...                     %19
                    {'OokSingCarBerVsSnr_'},{'_1'},{'BerOOK'},{'BerOOKS'};...                   %20
                    {'OokSingCarBerVsSnr_'},{'_3'},{'BerOOK'},{'BerOOKS'};...                   %21
                    {'OokSingCarBerVsSnr_'},{'_4'},{'BerOOK'},{'BerOOKS'};...                   %22
                    {'Pam4Cp122DemuxFiltB2bSnr'},{'_DecBal_1'},{'Ber4PAM'},{'Ber4PAMS'};...     %23
                    {'Pam4Cp122DemuxFiltB2bSnr'},{'_Ele_1'},{'Ber4PAM'},{'Ber4PAMS'};...        %24
                    {'Pam4Cp122DemuxFiltB2bSnr'},{'_FilOrd1_1'},{'Ber4PAM'},{'Ber4PAMS'};...    %25
                    {'Pam4Cp122DemuxFiltB2bSnr'},{'_FilOrd3_1'},{'Ber4PAM'},{'Ber4PAMS'};...    %26
                    {'Pam4Cp122DemuxFiltB2bSnr'},{'_FilOrd5_1'},{'Ber4PAM'},{'Ber4PAMS'};...    %27
                    {'Pam4Cp122DemuxFiltB2bSnr'},{'_FilOrd7_1'},{'Ber4PAM'},{'Ber4PAMS'};...    %28
                    {'Pam4Cp122DemuxFiltB2bSnr'},{'_FilOrd9_1'},{'Ber4PAM'},{'Ber4PAMS'};...    %29
                    {'Pam4Cp122DemuxFiltB2bSnr'},{'_FilOrd11_1'},{'Ber4PAM'},{'Ber4PAMS'};...   %30
                    {'Pam4Cp122DemuxFiltB2bSnr'},{'_FilOrd13_1'},{'Ber4PAM'},{'Ber4PAMS'};...   %31
                    {'Pam4Cp122DemuxFiltB2bSnr'},{'_FilOrd15_1'},{'Ber4PAM'},{'Ber4PAMS'};...   %32
                    {'Pam4Cp122DemuxFiltB2bSnr'},{'_Sys_1'},{'Ber4PAM'},{'Ber4PAMS'};...        %33
                    {'Pam4Cp122DemuxFiltB2bSnr'},{'_TimSys1_1'},{'Ber4PAM'},{'Ber4PAMS'};...    %34
                    {'Pam4Cp122FullSysB2BFin_'},{'_1'},{'Ber4PAM'},{'Ber4PAMS'};...             %35
                    {'Pam4FullSysBerSnr_'},{'_1'},{'Ber4PAM'},{'Ber4PAMS'};...                  %36
                    {'Pam4SingCarBerSnr_'},{'_1'},{'Ber4PAM'},{'Ber4PAMS'};...                  %37
                    {'Pam4BerVsSnrSing'},{'_1'},{'Ber4PAM'},{'Ber4PAMS'};...                    %38
                    {'Pam4BerVsSnrSing_'},{'_2'},{'Ber4PAM'},{'Ber4PAMS'};...                   %39
                    {'Pam4BerVsSnrSing_'},{'_3'},{'Ber4PAM'},{'Ber4PAMS'};...                   %40
                    {'Pam4EleBerVsSnrSing_'},{'_1'},{'Ber4PAM'},{'Ber4PAMS'};...                %41
                    {'Pam4EleBerVsSnrSing_'},{'_2'},{'Ber4PAM'},{'Ber4PAMS'};...                %42
                    {'Pam4EleBerVsSnrFulSys_'},{'_1'},{'Ber4PAM'},{'Ber4PAMS'};...              %43
                    {'Pam4EleBerVsSnrFulSys_'},{'_2'},{'Ber4PAM'},{'Ber4PAMS'};...              %44
                    {'Pam4EleBerVsSnrFulSys_'},{'_3'},{'Ber4PAM'},{'Ber4PAMS'}];                %45
                
    NameToLoadKm = [{'DpskCp122FullSysNoNoiseKm_'},{'_1'},{'BerDPSK'},{'BerDPSKS'};...          %1
                    {'DpskCp122FulSystKm_'},{'_1'},{'BerDPSK'},{'BerDPSKS'};...                 %2
                    {'DpskCp122NoOifftKm_'},{'_1'},{'BerDPSK'},{'BerDPSKS'};...                 %3
                    {'DpskCp122NoOifftKm_'},{'_2'},{'BerDPSK'},{'BerDPSKS'};...                 %4
                    {'DpskNoOifftSyst_'},{'_1'},{'BerDPSK'},{'BerDPSKS'};...                    %5
                    {'DqpskCp122FullSysNoNoiseKm_'},{'_1'},{'BerDQPSK'},{'BerDQPSKS'};...       %6
                    {'DqpskCp122FulSystKm_'},{'_1'},{'BerDQPSK'},{'BerDQPSKS'};...              %7
                    {'DqpskCp122NoOifftKm_'},{'_1'},{'BerDQPSK'},{'BerDQPSKS'};...              %8
                    {'OokCp122FullSysNoNoiseKm_'},{'_1'},{'BerOOK'},{'BerOOKS'};...             %9
                    {'OokCp122FulSystKm_'},{'_1'},{'BerOOK'},{'BerOOKS'};...                    %10
                    {'OokCp122NoOifftKm_'},{'_1'},{'BerOOK'},{'BerOOKS'};...                    %11
                    {'OokNoOifftSyst_'},{'_1'},{'BerOOK'},{'BerOOKS'};...                       %12
                    {'Pam4Cp122FullSysNoNoiseKm_'},{'_1'},{'Ber4PAM'},{'Ber4PAMS'};...          %13
                    {'Pam4Cp122FullSysNoNoiseKm_'},{'_2'},{'Ber4PAM'},{'Ber4PAMS'};...          %14
                    {'Pam4Cp122FullSysNoNoiseKm_'},{'_3'},{'Ber4PAM'},{'Ber4PAMS'};...          %15
                    {'Pam4Cp122FulSystKm_'},{'_1'},{'Ber4PAM'},{'Ber4PAMS'};...                 %16
                    {'Pam4Cp122NoOifftKm_'},{'_2'},{'Ber4PAM'},{'Ber4PAMS'}];                   %17
                
    BersSnr = struct('a1',[],'a2',[],'a3',[],'a4',[],'a5',[],'a6',[],'a7',[],...
                     'a8',[],'a9',[],'a10',[],'a11',[],'a12',[],'a13',[],...
                     'a14',[],'a15',[],'a16',[],'a17',[],'a18',[],'a19',[],...
                     'a20',[],'a21',[],'a22',[],'a23',[],'a24',[],'a25',[],...
                     'a26',[],'a27',[],'a28',[],'a29',[],'a30',[],'a31',[],...
                     'a32',[],'a33',[],'a34',[],'a35',[],'a36',[],'a37',[],...
                     'a38',[],'a39',[],'a40',[],'a41',[],'a42',[],'a43',[],'a44',[],'a45',[]);
    BersSnrPos = struct('a1',[],'a2',[],'a3',[],'a4',[],'a5',[],'a6',[],'a7',[],...
                     'a8',[],'a9',[],'a10',[],'a11',[],'a12',[],'a13',[],...
                     'a14',[],'a15',[],'a16',[],'a17',[],'a18',[],'a19',[],...
                     'a20',[],'a21',[],'a22',[],'a23',[],'a24',[],'a25',[],...
                     'a26',[],'a27',[],'a28',[],'a29',[],'a30',[],'a31',[],...
                     'a32',[],'a33',[],'a34',[],'a35',[],'a36',[],'a37',[],...
                     'a38',[],'a39',[],'a40',[],'a41',[],'a42',[],'a43',[],'a44',[],'a45',[]);
    BersSnrType = struct('a1',[],'a2',[],'a3',[],'a4',[],'a5',[],'a6',[],'a7',[],...
                     'a8',[],'a9',[],'a10',[],'a11',[],'a12',[],'a13',[],...
                     'a14',[],'a15',[],'a16',[],'a17',[],'a18',[],'a19',[],...
                     'a20',[],'a21',[],'a22',[],'a23',[],'a24',[],'a25',[],...
                     'a26',[],'a27',[],'a28',[],'a29',[],'a30',[],'a31',[],...
                     'a32',[],'a33',[],'a34',[],'a35',[],'a36',[],'a37',[],...
                     'a38',[],'a39',[],'a40',[],'a41',[],'a42',[],'a43',[],'a44',[],'a45',[]);
                 
    BersSnrS = struct('a1',[],'a2',[],'a3',[],'a4',[],'a5',[],'a6',[],'a7',[],...
                     'a8',[],'a9',[],'a10',[],'a11',[],'a12',[],'a13',[],...
                     'a14',[],'a15',[],'a16',[],'a17',[],'a18',[],'a19',[],...
                     'a20',[],'a21',[],'a22',[],'a23',[],'a24',[],'a25',[],...
                     'a26',[],'a27',[],'a28',[],'a29',[],'a30',[],'a31',[],...
                     'a32',[],'a33',[],'a34',[],'a35',[],'a36',[],'a37',[],...
                     'a38',[],'a39',[],'a40',[],'a41',[],'a42',[],'a43',[],'a44',[],'a45',[]);
    BersSnrSPos = struct('a1',[],'a2',[],'a3',[],'a4',[],'a5',[],'a6',[],'a7',[],...
                     'a8',[],'a9',[],'a10',[],'a11',[],'a12',[],'a13',[],...
                     'a14',[],'a15',[],'a16',[],'a17',[],'a18',[],'a19',[],...
                     'a20',[],'a21',[],'a22',[],'a23',[],'a24',[],'a25',[],...
                     'a26',[],'a27',[],'a28',[],'a29',[],'a30',[],'a31',[],...
                     'a32',[],'a33',[],'a34',[],'a35',[],'a36',[],'a37',[],...
                     'a38',[],'a39',[],'a40',[],'a41',[],'a42',[],'a43',[],'a44',[],'a45',[]);
                
    BersKm = struct('a1',[],'a2',[],'a3',[],'a4',[],'a5',[],'a6',[],'a7',[],...
                     'a8',[],'a9',[],'a10',[],'a11',[],'a12',[],'a13',[],...
                     'a14',[],'a15',[],'a16',[],'a17',[]);
    BersKmPos = struct('a1',[],'a2',[],'a3',[],'a4',[],'a5',[],'a6',[],'a7',[],...
                     'a8',[],'a9',[],'a10',[],'a11',[],'a12',[],'a13',[],...
                     'a14',[],'a15',[],'a16',[],'a17',[]);
    BersKmType = struct('a1',[],'a2',[],'a3',[],'a4',[],'a5',[],'a6',[],'a7',[],...
                     'a8',[],'a9',[],'a10',[],'a11',[],'a12',[],'a13',[],...
                     'a14',[],'a15',[],'a16',[],'a17',[]);
                 
    BersKmS = struct('a1',[],'a2',[],'a3',[],'a4',[],'a5',[],'a6',[],'a7',[],...
                     'a8',[],'a9',[],'a10',[],'a11',[],'a12',[],'a13',[],...
                     'a14',[],'a15',[],'a16',[],'a17',[]);
    BersKmSPos = struct('a1',[],'a2',[],'a3',[],'a4',[],'a5',[],'a6',[],'a7',[],...
                     'a8',[],'a9',[],'a10',[],'a11',[],'a12',[],'a13',[],...
                     'a14',[],'a15',[],'a16',[],'a17',[]);
    
    BerSnrNames = fieldnames(BersSnr);
    for jj=1:45
        if jj==22
            a=1;
        end
        conting = 1;
        for kk=1:30
            ThisFilesToLoad(conting,1) = {[char(NamToLoadSnr(jj,1)) num2str(kk) char(NamToLoadSnr(jj,2))]};
            conting = conting + 1;
        end
        [BersSnr.(BerSnrNames{jj}),BersSnrPos.(BerSnrNames{jj})] = LoadingBer(ThisFilesToLoad,char(NamToLoadSnr(jj,3)));
        [BersSnrS.(BerSnrNames{jj}),BersSnrSPos.(BerSnrNames{jj})] = LoadingBer(ThisFilesToLoad,char(NamToLoadSnr(jj,4)));
        if jj==18
            BerAux = BersSnr.(BerSnrNames{jj});
            BerAux(7,1) = 1e-2;
            BerAux(10,1) = 0.15e-3;
            BersSnr.(BerSnrNames{jj}) = BerAux;
        end
        BersSnrType.(BerSnrNames{jj}) = char(NamToLoadSnr(jj,3));
        clear ThisFilesToLoad; 
    end
    
    BerKmNames = fieldnames(BersKm);
    for jj=1:17
        conting = 1;
        for kk=10:10:300
            ThisFilesToLoad(conting,1) = {[char(NameToLoadKm(jj,1)) num2str(kk) char(NameToLoadKm(jj,2))]};
            conting = conting + 1;
        end
        [BersKm.(BerKmNames{jj}),BersKmPos.(BerKmNames{jj})] = LoadingBer(ThisFilesToLoad,char(NameToLoadKm(jj,3)));
        [BersKmS.(BerKmNames{jj}),BersKmSPos.(BerKmNames{jj})] = LoadingBer(ThisFilesToLoad,char(NameToLoadKm(jj,4)));
        BersKmType.(BerKmNames{jj}) = char(NameToLoadKm(jj,3));
        clear ThisFilesToLoad; 
    end
      a=1;        
                
                
                
                
                
                
                
                
                
                
                
                
                
                
                
/*
 * File: RecDowDepsk.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 15:11:07
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowDepsk.h"
#include "RecDowDepsk_emxutil.h"
#include "sum.h"
#include "xor.h"
#include "any.h"
#include "hist.h"
#include "linspace.h"

/* Function Declarations */
static double rt_powd_snf(double u0, double u1);
static double rt_roundd_snf(double u);

/* Function Definitions */

/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_powd_snf(double u0, double u1)
{
  double y;
  double d0;
  double d1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d0 = fabs(u0);
    d1 = fabs(u1);
    if (rtIsInf(u1)) {
      if (d0 == 1.0) {
        y = rtNaN;
      } else if (d0 > 1.0) {
        if (u1 > 0.0) {
          y = rtInf;
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtInf;
      }
    } else if (d1 == 0.0) {
      y = 1.0;
    } else if (d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = rtNaN;
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

/*
 * Arguments    : double u
 * Return Type  : double
 */
static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * SyncAux   = Esync(IniSyncPos:SyncPos,:);%Selecting just the symbol to synchronize
 * SyncedAux = SyncSymb(IniSyncPos:SyncPos,:);%Selecting just the symbol to synchronize
 * Arguments    : double MaxNumStag
 *                double IfftOrSum
 *                double T
 *                double Ta
 *                emxArray_real_T *Esync1
 *                double AddCP
 *                double StuffSampels
 *                double NumAmosCP
 *                double NPPB
 *                double NbDPSK
 *                double CurTesSiz
 *                double SyncPeriod
 *                double ThisCarr
 *                const emxArray_real_T *TxDataMat
 *                double LevDefDpqsk
 *                double *BerDPSK
 *                double *ValsLev
 *                double *AberLev
 *                emxArray_real_T *Esync
 *                double InterAB[100]
 *                double *LocMaxAB
 *                double *MaxValAB
 *                double SeqFinAB[100]
 *                emxArray_real_T *TxData
 *                emxArray_real_T *Data
 * Return Type  : void
 */
void RecDowDepsk(double MaxNumStag, double IfftOrSum, double T, double Ta,
                 emxArray_real_T *Esync1, double AddCP, double StuffSampels,
                 double NumAmosCP, double NPPB, double NbDPSK, double CurTesSiz,
                 double SyncPeriod, double ThisCarr, const emxArray_real_T
                 *TxDataMat, double LevDefDpqsk, double *BerDPSK, double
                 *ValsLev, double *AberLev, emxArray_real_T *Esync, double
                 InterAB[100], double *LocMaxAB, double *MaxValAB, double
                 SeqFinAB[100], emxArray_real_T *TxData, emxArray_real_T *Data)
{
  double DiffPos;
  int i0;
  int i1;
  int loop_ub;
  int i2;
  int idx;
  boolean_T empty_non_axis_sizes;
  boolean_T guard2 = false;
  int nx;
  boolean_T guard1 = false;
  int n;
  emxArray_real_T *b_Esync1;
  int c_Esync1;
  emxArray_real_T *d_Esync1;
  int b_loop_ub;
  int i3;
  emxArray_real_T *TxDataB;
  double cdiff;
  emxArray_real_T *IxAux;
  emxArray_real_T *b_IxAux;
  double ndbl;
  double anew;
  double apnd;
  emxArray_real_T *PosIx;
  double absa;
  double u1;
  boolean_T exitg3;
  emxArray_real_T *b_Esync;
  boolean_T exitg2;
  double EyeAB[100];
  double CountAB;
  boolean_T b_EyeAB[100];
  int SeqIniAB;
  int kk;
  double LevDec3;
  signed char ii_data[100];
  signed char ii_size[2];
  static const signed char iv0[2] = { 1, 100 };

  boolean_T exitg1;
  boolean_T b_guard1 = false;
  double b_ii_data[100];
  int b_ii_size[2];
  double LevelDec3;
  emxArray_real_T *DataU;
  emxArray_boolean_T *r0;
  double BitErr1;
  double BitErr4;

  /* %                   Plot for Qualitative analizes */
  /*              PrintInfo(Ploting*15,t(IniSyncPos:SyncPos),Esync(IniSyncPos:... */
  /*              SyncPos),SyncSymb(IniSyncPos:SyncPos),ESync1(IniSyncPos:... */
  /*                                        SyncPos),ESync2(IniSyncPos:SyncPos)); */
  /* %                   Synchronizing */
  /* This synchronization process is based on the mean expected */
  /* value. That means, the information mean value should be within */
  /* one period of symbol. Thus, the mean value of the received */
  /* signal is acquired and compare of the known sync-word to */
  /* verify if this mean value is at the right possition. Which is */
  /* the midel point (peak) of the highest level at the sync period */
  /* SyncAux(SyncAux<0)              = 0;                           %To keep the mean value above zero anything under is neglected */
  /* SyncAux(SyncAux>=mean(SyncAux)) = 1;                           %Adding a flag to the first sample of the received mean value */
  /* SyncAux(SyncAux<mean(SyncAux))  = -1;                          %All the others samples at set to the lowest level */
  /* PosToSyn  = find(ismember(SyncAux,1));                         %Finding where is the location of the samples to synchronize */
  /* PosSynced = find(ismember(SyncedAux,1));                       %Finding where is the location of the samples to synchronize */
  /* DiffPos = PosToSyn(round(end/2)) - PosSynced(round(end/2));    %Accounting the peak (midel point) displacement */
  DiffPos = rt_roundd_snf(0.5 * (rt_powd_snf(0.5, MaxNumStag) - 1.0) / -0.5 /
    (3.0 / rt_powd_snf(2.55, IfftOrSum)) * T / Ta);
  if (DiffPos + 1.0 > Esync1->size[0]) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = (int)(DiffPos + 1.0) - 1;
    i1 = Esync1->size[0];
  }

  if (1.0 > DiffPos) {
    loop_ub = 0;
  } else {
    loop_ub = (int)DiffPos;
  }

  i2 = Esync1->size[1];
  if (!((i1 - i0 == 0) || (i2 == 0))) {
    idx = Esync1->size[1];
  } else {
    i2 = Esync1->size[1];
    if (!((loop_ub == 0) || (i2 == 0))) {
      idx = Esync1->size[1];
    } else {
      i2 = Esync1->size[1];
      if (i2 > 0) {
        idx = Esync1->size[1];
      } else {
        idx = 0;
      }

      i2 = Esync1->size[1];
      if (i2 > idx) {
        idx = Esync1->size[1];
      }
    }
  }

  empty_non_axis_sizes = (idx == 0);
  guard2 = false;
  if (empty_non_axis_sizes) {
    guard2 = true;
  } else {
    i2 = Esync1->size[1];
    if (!((i1 - i0 == 0) || (i2 == 0))) {
      guard2 = true;
    } else {
      nx = -1;
    }
  }

  if (guard2) {
    nx = (i1 - i0) - 1;
  }

  guard1 = false;
  if (empty_non_axis_sizes) {
    guard1 = true;
  } else {
    i2 = Esync1->size[1];
    if (!((loop_ub == 0) || (i2 == 0))) {
      guard1 = true;
    } else {
      n = 0;
    }
  }

  if (guard1) {
    n = loop_ub;
  }

  emxInit_real_T(&b_Esync1, 2);
  c_Esync1 = Esync1->size[1];
  i2 = b_Esync1->size[0] * b_Esync1->size[1];
  b_Esync1->size[0] = i1 - i0;
  b_Esync1->size[1] = c_Esync1;
  emxEnsureCapacity((emxArray__common *)b_Esync1, i2, (int)sizeof(double));
  for (i2 = 0; i2 < c_Esync1; i2++) {
    b_loop_ub = i1 - i0;
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      b_Esync1->data[i3 + b_Esync1->size[0] * i2] = Esync1->data[(i0 + i3) +
        Esync1->size[0] * i2];
    }
  }

  emxInit_real_T(&d_Esync1, 2);
  c_Esync1 = Esync1->size[1];
  i0 = d_Esync1->size[0] * d_Esync1->size[1];
  d_Esync1->size[0] = loop_ub;
  d_Esync1->size[1] = c_Esync1;
  emxEnsureCapacity((emxArray__common *)d_Esync1, i0, (int)sizeof(double));
  for (i0 = 0; i0 < c_Esync1; i0++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      d_Esync1->data[i1 + d_Esync1->size[0] * i0] = Esync1->data[i1 +
        Esync1->size[0] * i0];
    }
  }

  i0 = Esync1->size[0] * Esync1->size[1];
  Esync1->size[0] = (nx + n) + 1;
  Esync1->size[1] = idx;
  emxEnsureCapacity((emxArray__common *)Esync1, i0, (int)sizeof(double));
  for (i0 = 0; i0 < idx; i0++) {
    loop_ub = nx + 1;
    for (i1 = 0; i1 < loop_ub; i1++) {
      Esync1->data[i1 + Esync1->size[0] * i0] = b_Esync1->data[i1 + (nx + 1) *
        i0];
    }
  }

  emxFree_real_T(&b_Esync1);
  for (i0 = 0; i0 < idx; i0++) {
    for (i1 = 0; i1 < n; i1++) {
      Esync1->data[((i1 + nx) + Esync1->size[0] * i0) + 1] = d_Esync1->data[i1 +
        n * i0];
    }
  }

  emxFree_real_T(&d_Esync1);

  /* Shift based on sampling sliding */
  /* if DiffPos~=0 */
  /* if DiffPos>0%If the difference is positive, left-shift... */
  /* Esync = ifft(fft(Esync).*exp(1j*2*pi*f*(DiffPos*Ta))); %Shift based on time change */
  /* Esync = [Esync(DiffPos+1:end) Esync(1:DiffPos)];       %Shift based on sampling sliding */
  /* else%... but if the difference is negative, right-shift */
  /* Esync = ifft(fft(Esync).*exp(1j*2*pi*f*(DiffPos*Ta))); %Shift based on time change */
  /* Esync = [Esync(end+DiffPos+1:end) Esync(1:end + ... */
  /* DiffPos)];%Shift based on sampling sliding */
  /* end */
  /* end */
  /* Because of reasons, sometimes it may be required to make a */
  /* synchronization process with the  end of the data stream as */
  /* well. This following verification check if the user set (or */
  /* not) a second synchronization process to be done. */
  /* %          Ploting the result for qualitative analizes */
  /*              PrintInfo(Ploting*16,t(end-SyncPos+1:end-IniSyncPos+1),Esync... */
  /*              (end-SyncPos+1:end-IniSyncPos+1),SyncSymb(end-SyncPos+1:end-... */
  /*              IniSyncPos+1),ESync1(end-SyncPos+1:end-IniSyncPos+1),ESync2(... */
  /*                                            end-SyncPos+1:end-IniSyncPos+1)); */
  /* if SencondAdjust */
  /* %                   Synchronizing */
  /* This synchronization process is based on the mean expected */
  /* value. That means, the information mean value should be */
  /* within one period of symbol. Thus, the mean value of the */
  /* received signal is acquired and compare of the known */
  /* sync-word to verify if this mean value is at the right */
  /* possition. */
  /* SyncAuxEnd   = Esync(end-SyncPos+1:end-IniSyncPos+1); */
  /* SyncedAuxEnd = SyncSymbEnd(end-SyncPos+1:end-IniSyncPos+1); */
  /* SyncAuxEnd(SyncAuxEnd<0)                 = 0;              %To keep the mean value above zero anything under is neglected */
  /* SyncAuxEnd(SyncAuxEnd>=mean(SyncAuxEnd)) = 1;              %Adding a flag to the first sample of the received mean value */
  /* SyncAuxEnd(SyncAuxEnd<mean(SyncAuxEnd))  = -1;             %All the others samples at set to the lowest level */
  /* PosToSynEnd  = find(ismember(SyncAuxEnd,1));               %Finding where is the location of the first sample to synchronize */
  /* PosSyncedEnd = find(ismember(SyncedAuxEnd,1));             %Finding where is the location of the first sample to synchronize */
  /* DiffPosEnd = PosToSynEnd(round(end/2))-PosSyncedEnd(... */
  /* round(end/2)); */
  /* if DiffPosEnd~=0 */
  /* if DiffPosEnd>0%If positive difference, left-shift... */
  /* Esync = ifft(fft(Esync).*exp(1j*2*pi*f*(... */
  /* DiffPosEnd*Ta)));%Shift based on time change */
  /* Esync = [Esync(DiffPosEnd+1:end) Esync(1:... */
  /* DiffPosEnd)];%Shift based on sampling sliding */
  /* else%... but if the difference is negative, right-shift */
  /* Esync = ifft(fft(Esync).*exp(1j*2*pi*f*(... */
  /* DiffPosEnd*Ta)));%Shift based on time change */
  /* Esync = [Esync(end-DiffPosEnd+1:end) Esync(... */
  /* 1:end-DiffPosEnd)];%Shift based on sampling sliding */
  /* end */
  /* end */
  /* end */
  /* if ThisCarr==126 */
  /* EyeToPlot(CurrentTest,1:length(Esync(:))) = Esync(:); */
  /* save(['savingforplotingeye' num2str(VetSnr)],'EyeToPlot','VetSnr','IfftOrSum','UsedModula','T','NPPB'); */
  /* end */
  /* % Removing CP */
  emxInit_real_T(&TxDataB, 2);
  if (AddCP != 0.0) {
    cdiff = (double)Esync1->size[0] - StuffSampels;
    if (1.0 > cdiff) {
      i0 = 0;
    } else {
      i0 = (int)cdiff;
    }

    emxInit_real_T(&IxAux, 2);
    i1 = Esync1->size[1];
    nx = i0 * i1;
    i1 = IxAux->size[0] * IxAux->size[1];
    IxAux->size[0] = (int)(2.0 * NumAmosCP + NPPB);
    IxAux->size[1] = (int)(NbDPSK * CurTesSiz);
    emxEnsureCapacity((emxArray__common *)IxAux, i1, (int)sizeof(double));
    for (idx = 0; idx + 1 <= nx; idx++) {
      IxAux->data[idx] = Esync1->data[idx % i0 + Esync1->size[0] * (idx / i0)];
    }

    cdiff = (double)IxAux->size[0] - NumAmosCP;
    if (1.0 + NumAmosCP > cdiff) {
      i0 = 0;
      i1 = 0;
    } else {
      i0 = (int)(1.0 + NumAmosCP) - 1;
      i1 = (int)cdiff;
    }

    emxInit_real_T(&b_IxAux, 2);
    idx = IxAux->size[1];
    i2 = b_IxAux->size[0] * b_IxAux->size[1];
    b_IxAux->size[0] = i1 - i0;
    b_IxAux->size[1] = idx;
    emxEnsureCapacity((emxArray__common *)b_IxAux, i2, (int)sizeof(double));
    for (i2 = 0; i2 < idx; i2++) {
      loop_ub = i1 - i0;
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_IxAux->data[i3 + b_IxAux->size[0] * i2] = IxAux->data[(i0 + i3) +
          IxAux->size[0] * i2];
      }
    }

    i0 = IxAux->size[0] * IxAux->size[1];
    IxAux->size[0] = b_IxAux->size[0];
    IxAux->size[1] = b_IxAux->size[1];
    emxEnsureCapacity((emxArray__common *)IxAux, i0, (int)sizeof(double));
    loop_ub = b_IxAux->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_loop_ub = b_IxAux->size[0];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        IxAux->data[i1 + IxAux->size[0] * i0] = b_IxAux->data[i1 + b_IxAux->
          size[0] * i0];
      }
    }

    emxFree_real_T(&b_IxAux);
    i0 = TxDataB->size[0] * TxDataB->size[1];
    TxDataB->size[0] = IxAux->size[0];
    TxDataB->size[1] = IxAux->size[1];
    emxEnsureCapacity((emxArray__common *)TxDataB, i0, (int)sizeof(double));
    loop_ub = IxAux->size[0] * IxAux->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      TxDataB->data[i0] = IxAux->data[i0];
    }

    nx = IxAux->size[0] * IxAux->size[1];
    i0 = IxAux->size[0] * IxAux->size[1];
    IxAux->size[0] = (int)(NPPB * NbDPSK);
    IxAux->size[1] = (int)CurTesSiz;
    emxEnsureCapacity((emxArray__common *)IxAux, i0, (int)sizeof(double));
    for (idx = 0; idx + 1 <= nx; idx++) {
      IxAux->data[idx] = TxDataB->data[idx];
    }

    i0 = Esync1->size[0] * Esync1->size[1];
    Esync1->size[0] = IxAux->size[0];
    Esync1->size[1] = IxAux->size[1];
    emxEnsureCapacity((emxArray__common *)Esync1, i0, (int)sizeof(double));
    loop_ub = IxAux->size[0] * IxAux->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      Esync1->data[i0] = IxAux->data[i0];
    }

    emxFree_real_T(&IxAux);
  }

  /* % Taking the sampling the EVM meassurement */
  /* clear IxAux; */
  /* PosAuxEout1 = NPPB/2:NPPB:length(Esync);                   %Varriable respossible to take just the samples at the middle of the symbol */
  /* PosAuxEout2 = ((NPPB/2)+(NPPB/16)):NPPB:length(Esync);      %Varriable respossible to take just the samples at the middle of the symbol */
  /* PosAuxEout3 = ((NPPB/2)-(NPPB/16)):NPPB:length(Esync);      %Varriable respossible to take just the samples at the middle of the symbol */
  /* IxAux1      = Esync(PosAuxEout1);                          %Normalizing the reference */
  /* IxAux2      = Esync(PosAuxEout2);    %Normalizing the reference */
  /* IxAux3      = Esync(PosAuxEout3);    %Normalizing the reference */
  /* a=a+0; */
  /* EvmMatRecA(1,:) = IxAux1;                       %Taking just the middle samples as references */
  /* EvmMatRecA(2,:) = IxAux2;                       %Taking just the middle samples as references */
  /* EvmMatRecA(3,:) = IxAux3;                       %Taking just the middle samples as references */
  /* EvmMatRecA(4,:) = IxAux1;                       %Taking just the middle samples as references */
  /* [EvmDBA(1), EvmPerA(1), EvmRmsA(1) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1 ); */
  /* [EvmDBA(2), EvmPerA(2), EvmRmsA(2) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux2 ); */
  /* [EvmDBA(3), EvmPerA(3), EvmRmsA(3) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux3 ); */
  /* [EvmDBA(4), EvmPerA(4), EvmRmsA(4) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1 ); */
  /* [EvmDBJA(1),EvmPerJA(1),EvmRmsJA(1)] = evm1(2,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1); */
  /* [EvmDBJA(2),EvmPerJA(2),EvmRmsJA(2)] = evm1(2,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux2); */
  /* [EvmDBJA(3),EvmPerJA(3),EvmRmsJA(3)] = evm1(2,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux3); */
  /* [EvmDBJA(4),EvmPerJA(4),EvmRmsJA(4)] = evm1(2,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1); */
  /* ########################################################################## */
  cdiff = 1.0 + SyncPeriod * NPPB;
  ndbl = (double)Esync1->size[0] - SyncPeriod * NPPB;
  if (cdiff > ndbl) {
    i0 = 1;
    i1 = 1;
  } else {
    i0 = (int)cdiff;
    i1 = (int)ndbl + 1;
  }

  i2 = Esync1->size[1];
  i3 = Esync1->size[1];
  nx = (i1 - i0) * i3;
  i3 = Esync->size[0] * Esync->size[1];
  Esync->size[0] = 1;
  Esync->size[1] = (int)((double)(i1 - i0) * (double)i2);
  emxEnsureCapacity((emxArray__common *)Esync, i3, (int)sizeof(double));
  for (idx = 0; idx + 1 <= nx; idx++) {
    Esync->data[idx] = Esync1->data[((i0 + idx % (i1 - i0)) + Esync1->size[0] *
      (idx / (i1 - i0))) - 1];
  }

  anew = NPPB / 2.0;
  if (rtIsNaN(anew) || rtIsNaN(NPPB)) {
    n = 1;
    anew = rtNaN;
    apnd = Esync->size[1];
  } else if ((NPPB == 0.0) || ((anew < Esync->size[1]) && (NPPB < 0.0)) ||
             ((Esync->size[1] < anew) && (NPPB > 0.0))) {
    n = 0;
    apnd = Esync->size[1];
  } else if (rtIsInf(anew)) {
    n = 1;
    anew = rtNaN;
    apnd = Esync->size[1];
  } else if (rtIsInf(NPPB)) {
    n = 1;
    apnd = Esync->size[1];
  } else {
    ndbl = floor(((double)Esync->size[1] - anew) / NPPB + 0.5);
    apnd = anew + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (double)Esync->size[1];
    } else {
      cdiff = (double)Esync->size[1] - apnd;
    }

    absa = fabs(anew);
    nx = Esync->size[1];
    u1 = nx;
    if (absa >= u1) {
      u1 = absa;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * u1) {
      ndbl++;
      apnd = Esync->size[1];
    } else if (cdiff > 0.0) {
      apnd = anew + (ndbl - 1.0) * NPPB;
    } else {
      ndbl++;
    }

    if (ndbl >= 0.0) {
      n = (int)ndbl;
    } else {
      n = 0;
    }
  }

  emxInit_real_T(&PosIx, 2);
  i0 = PosIx->size[0] * PosIx->size[1];
  PosIx->size[0] = 1;
  PosIx->size[1] = n;
  emxEnsureCapacity((emxArray__common *)PosIx, i0, (int)sizeof(double));
  if (n > 0) {
    PosIx->data[0] = anew;
    if (n > 1) {
      PosIx->data[n - 1] = apnd;
      nx = (n - 1) / 2;
      for (idx = 1; idx < nx; idx++) {
        cdiff = (double)idx * NPPB;
        PosIx->data[idx] = anew + cdiff;
        PosIx->data[(n - idx) - 1] = apnd - cdiff;
      }

      if (nx << 1 == n - 1) {
        PosIx->data[nx] = (anew + apnd) / 2.0;
      } else {
        cdiff = (double)nx * NPPB;
        PosIx->data[nx] = anew + cdiff;
        PosIx->data[nx + 1] = apnd - cdiff;
      }
    }
  }

  /* Possition of the central samples - but the number of samples per symbol is even ???? */
  /* IxAux = Esync(PosIx,:);%From the main received signal just a few samples are taken for further evaluation */
  /* The number of boxes to be filled up on the histogram process */
  /* At this process each eye will be evaluated separetelly. It is */
  /* important to remember that the PAM4 has 4 levels, which means */
  /* three level of decissions that are exaclty the center of the */
  /* eye diagram. */
  /* BerDPSKAux = zeros(1,size(Esync,2)); */
  /* AberLevAux = zeros(1,size(Esync,2)); */
  /* ValsLevAux = zeros(1,size(Esync,2)); */
  /* for jj=1:size(Esync,2) */
  /* Taking just those values relative to the uper eye */
  nx = 1;
  n = Esync->size[1];
  cdiff = Esync->data[0];
  if (Esync->size[1] > 1) {
    if (rtIsNaN(Esync->data[0])) {
      idx = 2;
      exitg3 = false;
      while ((!exitg3) && (idx <= n)) {
        nx = idx;
        if (!rtIsNaN(Esync->data[idx - 1])) {
          cdiff = Esync->data[idx - 1];
          exitg3 = true;
        } else {
          idx++;
        }
      }
    }

    if (nx < Esync->size[1]) {
      while (nx + 1 <= n) {
        if (Esync->data[nx] < cdiff) {
          cdiff = Esync->data[nx];
        }

        nx++;
      }
    }
  }

  nx = 1;
  n = Esync->size[1];
  ndbl = Esync->data[0];
  if (Esync->size[1] > 1) {
    if (rtIsNaN(Esync->data[0])) {
      idx = 2;
      exitg2 = false;
      while ((!exitg2) && (idx <= n)) {
        nx = idx;
        if (!rtIsNaN(Esync->data[idx - 1])) {
          ndbl = Esync->data[idx - 1];
          exitg2 = true;
        } else {
          idx++;
        }
      }
    }

    if (nx < Esync->size[1]) {
      while (nx + 1 <= n) {
        if (Esync->data[nx] > ndbl) {
          ndbl = Esync->data[nx];
        }

        nx++;
      }
    }
  }

  emxInit_real_T(&b_Esync, 2);
  linspace(0.7 * cdiff, 0.7 * ndbl, InterAB);

  /* Building the histogram boxes */
  i0 = b_Esync->size[0] * b_Esync->size[1];
  b_Esync->size[0] = 1;
  b_Esync->size[1] = PosIx->size[1];
  emxEnsureCapacity((emxArray__common *)b_Esync, i0, (int)sizeof(double));
  loop_ub = PosIx->size[0] * PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_Esync->data[i0] = Esync->data[(int)PosIx->data[i0] - 1];
  }

  hist(b_Esync, InterAB, EyeAB);

  /* filling up the boxes with samples that fit on them. */
  /* What we are looking for here are not where exist the */
  /* occurrences of values. The eye is where there is not samples, */
  /* this means, the decission level is a reagion between actual */
  /* levels thus this reagion does not contain any signal. */
  emxFree_real_T(&b_Esync);

  /* Changing zeros to one - Zeros compose the eye region */
  /* Starting variables that will be used to identify the eye */
  /* diagram. */
  CountAB = 1.0;
  for (i0 = 0; i0 < 100; i0++) {
    b_EyeAB[i0] = !(EyeAB[i0] != 0.0);
    EyeAB[i0] = 0.0;
  }

  for (i0 = 0; i0 < 100; i0++) {
    SeqFinAB[i0] = 0.0;
  }

  SeqIniAB = 0;

  /* The for loop will take account of every box with ones. It is */
  /* important to take note that the not operator was used in this */
  /* vector, therefore ones means zeros (the eye diagram - */
  /* possibly) and zeros means values abouve zeroa (not the eye). */
  for (kk = 0; kk < 100; kk++) {
    /* For every box */
    if (b_EyeAB[kk]) {
      /* if it contains "1" */
      EyeAB[SeqIniAB] = CountAB;

      /* count this element as part of a consecutive sequency */
      CountAB++;

      /* adds one to the counter of consecutive elements "1" */
      if (1 + kk == 100) {
        /* if the current box is the last box we got to an end */
        SeqFinAB[SeqIniAB] = 100.0;

        /* The final sequency element is equal to its possition (kk) */
      }
    } else {
      /* else if the current box contains "0" */
      SeqFinAB[SeqIniAB] = (1.0 + (double)kk) - 1.0;

      /* the previous element was the last element of a consecutive sequency of ones */
      SeqIniAB++;

      /* adds one to the counter of consecutive number (take in account how many sequencies there are) */
      CountAB = 1.0;

      /* reset the counter of consecutive elements to mark the start of a new consecutive sequence */
    }
  }

  /* If the eye is open, which means there is a clear difference */
  /* between adjacent levels, the eye diagram will be the longest */
  /* sequence of ones. */
  cdiff = EyeAB[0];
  nx = 0;
  for (idx = 1; idx + 1 < 101; idx++) {
    if (EyeAB[idx] > cdiff) {
      cdiff = EyeAB[idx];
      nx = idx;
    }
  }

  *MaxValAB = cdiff;
  *LocMaxAB = nx + 1;
  if ((nx + 1 < 2) || (cdiff < 2.0)) {
    /* if any sequency was found or there is just one sequency it is a error thus */
    LevDec3 = 0.0;

    /* the decission level will be by default 0.67. Also, the other variables will */
    *LocMaxAB = 1.0;

    /* will be set with values to not cause errors in the future */
    SeqFinAB[0] = 2.0;
    *MaxValAB = 0.0;
    InterAB[0] = 0.0;
  } else {
    /* if a sequency was found the middle of the eye will be the middle of the sequency */
    if ((double)(signed char)SeqFinAB[nx] - cdiff / 2.0 < 1.0) {
      /* if for some reason the final element of the sequency minus the half of its */
      LevDec3 = 0.0;

      /* length results in a negative value, something went very wrong, and by */
    } else {
      /* default it will be set to 0.7 */
      LevDec3 = InterAB[(int)rt_roundd_snf((double)(signed char)SeqFinAB[nx] -
        cdiff / 2.0) - 1];

      /* Otherwise, the decission level is the middle of the sequency */
    }
  }

  /* another way to measure the eye opening is the get all the */
  /* boxes and find all peaks on it, that will be a plato created */
  /* by the sequences of ones (which was zeros). From thos peaks, */
  /* the eye diagram will be the longer of them hence it will take */
  /* the most part of the vector that store the findpeaks result. */
  /* Thus, the middle of the eye will be basically the middle of */
  /* the peaks vector. */
  idx = 0;
  for (i0 = 0; i0 < 2; i0++) {
    ii_size[i0] = iv0[i0];
  }

  nx = 1;
  exitg1 = false;
  while ((!exitg1) && (nx < 101)) {
    b_guard1 = false;
    if (b_EyeAB[nx - 1]) {
      idx++;
      ii_data[idx - 1] = (signed char)nx;
      if (idx >= 100) {
        exitg1 = true;
      } else {
        b_guard1 = true;
      }
    } else {
      b_guard1 = true;
    }

    if (b_guard1) {
      nx++;
    }
  }

  if (1 > idx) {
    i0 = 0;
  } else {
    i0 = idx;
  }

  b_ii_size[0] = 1;
  b_ii_size[1] = i0;
  loop_ub = ii_size[0] * i0;
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_ii_data[i0] = ii_data[i0];
  }

  if (!any(b_ii_data, b_ii_size)) {
    /* if for some reason there are no peaks, something went wrong. */
    /* LocAB = 1; */
    LevelDec3 = 0.0;

    /* mean(Levels(3:4));                       %by default the decission level will be set to 0.65 */
  } else {
    LevelDec3 = LevDec3;
  }

  /* ########################################################################## */
  /* [~,~,EyeOpenQ,EyeOpenHighQ,EyeOpenLowQ] = Olho(EoutQ,T,NPPB,0); */
  *AberLev = InterAB[(signed char)SeqFinAB[(int)*LocMaxAB - 1] - 1] - InterAB
    [(int)rt_roundd_snf((double)(signed char)SeqFinAB[(int)*LocMaxAB - 1] -
                        *MaxValAB) - 1];
  *ValsLev = LevDec3;

  /* %               Recovering the Information */
  /* Once the Income signal was synchronized it is possible to */
  /* recover the signal. */
  /*  */
  /* After passing the optical signal to the eletrical domain, for */
  /* actually detect the data withing the signal the following */
  /* steps are needed. */
  /*  */
  /* Finding Decission Levels: */
  /* The process for decoding the income signal will be based on */
  /* eletronic comparators. Inasmuch as the right decission level */
  /* must be acquired for accurately decide, within a symbol */
  /* periode, what that current leavel means (ones or zeros). */
  /*  */
  /* The process hereafter of chosing the  decission levels is not */
  /* deterministic rather it is a statistic process. The main idea */
  /* is to take the decission level from the histogram generated */
  /* from the income signal stream. */
  /*  */
  /* This process is realized inside the function Olho. */
  /*  */
  /* Basicaly the decission level will be the minimal value of the */
  /* currente eye under evaluation plus the half of the its eye */
  /* opening.The following ilustration better describe this process */
  /*  */
  /* Eye Limits:   + (1/2 * Eye Opening:)  =    Comparisson Limit: */
  /*  */
  /* UperLevel  ______     ______________     _____ */
  /*                  \   /      |       \   / */
  /*                   \ /       |        \ / */
  /*                    \ Half Eye Opening /     Decission Level */
  /*                   / \       |        / \ */
  /* LowerLevel ______/   \______|_______/   \_____ */
  /*  */
  /*  */
  /* Once the signal was processed the next step is through a */
  /* comparator decide the actual information received. */
  /*  */
  /* For accurately read the income signal is necessary more than */
  /* just have the decision level, it is also needed to know where */
  /* it occurs. For instance, if we decide to use just to take the */
  /* decision level and measure the mean value across and a portion */
  /* of the time period, which portion should we take? It would be */
  /* logical to take the central portion, but the bit may be */
  /* deformed in such way that the information gets concentrated */
  /* out of the middle part, which means the symbol is not */
  /* symmetric. The symmetry information can be acquired from the */
  /* eye diagram by measuring the longitudinal opening. The */
  /* following sketch better describes this process: */
  /*  */
  /*                    Point of Symmetry */
  /*          _____     _______|_______     _____ */
  /*               \   /               \   / */
  /*                \ /  Longitudinal   \ / */
  /*                 \ ----------------- / */
  /*                / \    Opening      / \ */
  /*          _____/   \_______________/   \_____ */
  /*  */
  /* With those two pieces of information, decision level and point */
  /* of symmetry, we have the X, Y coordinates for the centre of */
  /* the Eye Diagram. Therefore, as long as there is an opening on */
  /* it it will be possible to recover the transmitted information */
  /* without error... theoretically. */
  /*  */
  /* As this process is also statistical, first we reshape the */
  /* income vector to analyze all periods at the same time. */
  /*                  EyeSymMat = reshape(Esync(1+SyncPeriod*NPPB:end-SyncPeriod*... */
  /*                      NPPB),NPPB,NbDPSK-2*SyncPeriod); */
  /* Then we take the values that compose the decision level */
  /* because they will mark the point of symmetry. */
  /*  */
  /* Firstly it was set the interval in which the histogram will be */
  /* build. It is based on the number of samples per bit period. */
  /*                  Interval = linspace(min(Esync(1+SyncPeriod*NPPB:end-... */
  /*                      SyncPeriod*NPPB)),max(Esync(1+SyncPeriod*NPPB:end-SyncPeriod... */
  /*                      *NPPB)),2*NPPB); */
  /* Therefore, the MATLAB hist function returns the number of */
  /* occurrence of each interval. */
  /*                  EyeMax = hist(Esync,Interval); */
  /*                  EyeMaxaux = [0 EyeMax 0];                                      %Zeros are added at the EyeMax to auxiliate the finding peaks process */
  /*                  [~,EyeLoc] = findpeaks(EyeMaxaux,'MinPeakDistance',NPPB/4,... */
  /*                      'SortStr','descend','NPeaks',2);%The peaks on the Eye profile will be the levels at the Eyes limit */
  /* From the location of the max values that occured, which means */
  /* the uper and lower level of the eye diagram it needs to take */
  /* the actual value that those occurences represent that is */
  /* withing the the Interval variable. */
  /*                  ValToSeek = Interval(EyeLoc-1); */
  /* The number of ocurrences is a statical measure therefore one */
  /* does not have control which interval will have the highest */
  /* peak, thus it is important to ordenate the values to be seek */
  /* from the lower part of the eye diagram to the uper part of the */
  /* eye diagram. */
  /*                  ValToSeek = sort(ValToSeek,'ascend'); */
  /*                  OccuCount = zeros(1,size(EyeSymMat,1));                        %Auxiliar Variable for accounting. */
  /*                  for kk=1:size(EyeSymMat,1)                                     %For every sample within a symbol period */
  /*                      OccuCount(kk) = OccuCount(kk)+sum((EyeSymMat(kk,:)>=min(... */
  /*                          Esync))&(EyeSymMat(kk,:)<=UpeSymPer*EyeOpenLow)); %Account all occurencies of the value 1 */
  /*                      OccuCount(kk) = OccuCount(kk)+sum((EyeSymMat(kk,:)>=... */
  /*                          LowSymPer*EyeOpenHigh)&(EyeSymMat(kk,:)<=max(Esync))); %Account all occurencies of the value 2 */
  /*                  end */
  /* The point of symmetry of the eye diagram will be where the */
  /* maximum number of occurrences were measured inasmuch as those */
  /* are the points where all the bits go to the center of the */
  /* symbol.  From the maximum number of occurrences, it can happen */
  /* for more than one sample within one symbol period, in the best */
  /* case, all samples would have the same accounting as it is */
  /* shown the ilustration above hence the symmetry will be at the */
  /* middle sample of this group of maximum occurrences. This value */
  /* can be found by the mean of the samples positions within the */
  /* symbol period. The problem with this approach is that the */
  /* signal must be synchronized with the maximum displacement of */
  /* a symbol period minus 25% of the eye Longitudinal opening if */
  /* the displacement is higher than that the point of symmetry */
  /* will be wrongly measured. */
  /*                  [SymLoc] = round(mean(find(ismember(OccuCount,max(OccuCount)... */
  /*                      )))); */
  /*              figure;findpeaks(OccuCount,'SortStr','descend'); */
  /* % Actualy Receiving Data: */
  anew = NPPB / 2.0;
  if (rtIsNaN(anew) || rtIsNaN(NPPB)) {
    n = 1;
    anew = rtNaN;
    apnd = Esync->size[1];
  } else if ((NPPB == 0.0) || ((anew < Esync->size[1]) && (NPPB < 0.0)) ||
             ((Esync->size[1] < anew) && (NPPB > 0.0))) {
    n = 0;
    apnd = Esync->size[1];
  } else if (rtIsInf(anew)) {
    n = 1;
    anew = rtNaN;
    apnd = Esync->size[1];
  } else if (rtIsInf(NPPB)) {
    n = 1;
    apnd = Esync->size[1];
  } else {
    ndbl = floor(((double)Esync->size[1] - anew) / NPPB + 0.5);
    apnd = anew + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (double)Esync->size[1];
    } else {
      cdiff = (double)Esync->size[1] - apnd;
    }

    absa = fabs(anew);
    nx = Esync->size[1];
    u1 = nx;
    if (absa >= u1) {
      u1 = absa;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * u1) {
      ndbl++;
      apnd = Esync->size[1];
    } else if (cdiff > 0.0) {
      apnd = anew + (ndbl - 1.0) * NPPB;
    } else {
      ndbl++;
    }

    if (ndbl >= 0.0) {
      n = (int)ndbl;
    } else {
      n = 0;
    }
  }

  i0 = PosIx->size[0] * PosIx->size[1];
  PosIx->size[0] = 1;
  PosIx->size[1] = n;
  emxEnsureCapacity((emxArray__common *)PosIx, i0, (int)sizeof(double));
  if (n > 0) {
    PosIx->data[0] = anew;
    if (n > 1) {
      PosIx->data[n - 1] = apnd;
      nx = (n - 1) / 2;
      for (idx = 1; idx < nx; idx++) {
        cdiff = (double)idx * NPPB;
        PosIx->data[idx] = anew + cdiff;
        PosIx->data[(n - idx) - 1] = apnd - cdiff;
      }

      if (nx << 1 == n - 1) {
        PosIx->data[nx] = (anew + apnd) / 2.0;
      } else {
        cdiff = (double)nx * NPPB;
        PosIx->data[nx] = anew + cdiff;
        PosIx->data[nx + 1] = apnd - cdiff;
      }
    }
  }

  /* ThisDataPos  = 1:NPPB:size(Esync,2); */
  i0 = Data->size[0] * Data->size[1];
  Data->size[0] = 1;
  Data->size[1] = PosIx->size[1];
  emxEnsureCapacity((emxArray__common *)Data, i0, (int)sizeof(double));
  loop_ub = PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Data->data[i0] = 0.0;
  }

  emxInit_real_T(&DataU, 2);

  /* Initialization of the vector that will store the income data */
  i0 = DataU->size[0] * DataU->size[1];
  DataU->size[0] = 1;
  DataU->size[1] = PosIx->size[1];
  emxEnsureCapacity((emxArray__common *)DataU, i0, (int)sizeof(double));
  loop_ub = PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    DataU->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  /*  DataS = zeros(1,length(ThisDataSize));                                                  %Initialization of the vector that will store the income data */
  for (kk = 0; kk < PosIx->size[1]; kk++) {
    /* length(Esync(ThisDataSize))                                    %The comparison process will be made for each symbol period */
    /* MeanOfData = mean(EoutI((kk-1)+SymLocI(1))); */
    cdiff = NPPB / 2.0;
    if (Esync->data[(int)(((1.0 + (double)kk) - 1.0) * NPPB + cdiff) - 1] >
        LevelDec3) {
      /* EyeOpenLowI+EyeOpenI/2                     %If it is the uper level the incoming data */
      Data->data[kk] = 1.0;

      /* is 1 */
    } else {
      /* If it is the lowest level the incoming data */
      Data->data[kk] = 0.0;

      /* is 0 */
    }

    /* MeanOfData = mean(Esync((kk-1)*NPPB+(NPPB/2))); */
    if (Esync->data[(int)(((1.0 + (double)kk) - 1.0) * NPPB + cdiff) - 1] >
        LevDefDpqsk) {
      /* EyeOpenLowI+EyeOpenI/2                     %If it is the uper level the incoming data */
      DataU->data[kk] = 1.0;

      /* is 1 */
    } else {
      /* If it is the lowest level the incoming data */
      DataU->data[kk] = 0.0;

      /* is 0 */
    }

    /*      if CalcS==1 */
    /*          %MeanOfData = mean(Esync((kk-1)*NPPB+(NPPB/2))); */
    /*          if MeanOfData > EyeOpenLowI + EyeOpenI/2%EyeOpenLowI+EyeOpenI/2                     %If it is the uper level the incoming data */
    /*              DataS(kk) = 1;                                 %is 1 */
    /*          else                                                       %If it is the lowest level the incoming data */
    /*              DataS(kk) = 0;                                 %is 0 */
    /*          end */
    /*      end */
  }

  /* %       Calculating the Bit Error Ratio (BER) */
  /* The final process here is to count the number of wrongdoings */
  /* of this whole process upon the transmited data for */
  /* quantitative analizes */
  loop_ub = TxDataMat->size[1];
  i0 = PosIx->size[0] * PosIx->size[1];
  PosIx->size[0] = 1;
  PosIx->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)PosIx, i0, (int)sizeof(double));
  for (i0 = 0; i0 < loop_ub; i0++) {
    PosIx->data[PosIx->size[0] * i0] = TxDataMat->data[((int)ThisCarr +
      TxDataMat->size[0] * i0) - 1];
  }

  i0 = TxDataMat->size[1];
  i1 = TxDataB->size[0] * TxDataB->size[1];
  TxDataB->size[0] = (int)NbDPSK;
  TxDataB->size[1] = (int)CurTesSiz;
  emxEnsureCapacity((emxArray__common *)TxDataB, i1, (int)sizeof(double));
  for (idx = 0; idx + 1 <= i0; idx++) {
    TxDataB->data[idx] = PosIx->data[idx];
  }

  emxFree_real_T(&PosIx);
  cdiff = (double)TxDataB->size[0] - SyncPeriod;
  if (1.0 + SyncPeriod > cdiff) {
    i0 = 1;
    i1 = 1;
  } else {
    i0 = (int)(1.0 + SyncPeriod);
    i1 = (int)cdiff + 1;
  }

  i2 = TxDataB->size[1];
  i3 = TxDataB->size[1];
  nx = (i1 - i0) * i3;
  i3 = TxData->size[0] * TxData->size[1];
  TxData->size[0] = 1;
  TxData->size[1] = (int)((double)(i1 - i0) * (double)i2);
  emxEnsureCapacity((emxArray__common *)TxData, i3, (int)sizeof(double));
  for (idx = 0; idx + 1 <= nx; idx++) {
    TxData->data[idx] = TxDataB->data[((i0 + idx % (i1 - i0)) + TxDataB->size[0]
      * (idx / (i1 - i0))) - 1];
  }

  emxFree_real_T(&TxDataB);
  emxInit_boolean_T(&r0, 2);

  /*  if CalcS */
  /*      %DataS = DataS(1+SyncPeriod:end-SyncPeriod); */
  /*      BitErrS = sum(xor(TxData,DataS));%Comparison between the Transmited and received and counting the differences */
  /*      BerDPSKS = BitErrS/((NbDPSK-(2*SyncPeriod))*CurTesSiz);%Calculating the ration of wrong bits and the total number of bits transmited */
  /*  end */
  /* Data  = Data(1+SyncPeriod:end-SyncPeriod); */
  /* DataM  = DataM(1+SyncPeriod:end-SyncPeriod); */
  /* DataL  = DataL(1+SyncPeriod:end-SyncPeriod); */
  /* DataU  = DataU(1+SyncPeriod:end-SyncPeriod); */
  /* AberLevAuxI(4) = 0; */
  /* ValsLevAuxI(4) = 0.01; */
  xor(TxData, Data, r0);
  BitErr1 = sum(r0);

  /* Comparison between the Transmited and received and counting the differences */
  /* BitErr(2)  = sum(xor(TxData,DataM));                       %Comparison between the Transmited and received and counting the differences */
  /* BitErr(3)  = sum(xor(TxData,DataL));                       %Comparison between the Transmited and received and counting the differences */
  xor(TxData, DataU, r0);
  BitErr4 = sum(r0);

  /* Comparison between the Transmited and received and counting the differences */
  *BerDPSK = BitErr1 / ((NbDPSK - 2.0 * SyncPeriod) * CurTesSiz);

  /* Calculating the ration of wrong bits and the total number of bits transmited */
  emxFree_boolean_T(&r0);
  emxFree_real_T(&DataU);
  if (BitErr4 < BitErr1) {
    *BerDPSK = BitErr4 / ((NbDPSK - 2.0 * SyncPeriod) * CurTesSiz);
  }

  /* end */
}

/*
 * File trailer for RecDowDepsk.c
 *
 * [EOF]
 */

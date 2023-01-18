/*
 * File: RecDowPam4.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 21:36:40
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "RecDowPam4_emxutil.h"
#include "sum.h"
#include "xor.h"
#include "any.h"
#include "hist.h"
#include "linspace.h"
#include "sort1.h"
#include "findpeaks.h"

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
 * Arguments    : emxArray_real_T *Ix1
 *                double T
 *                double Ta
 *                double MaxNumStag
 *                double StuffSampels
 *                double NumAmosCP
 *                double NPPB
 *                double CurTesSiz
 *                double Nb4Pam
 *                double IntervalStep
 *                double MinDist
 *                double *DecLevDef1
 *                double *DecLevDef2
 *                double *DecLevDef3
 *                const emxArray_real_T *TxDataMat
 *                double ThisCarr
 *                double IfftOrSum
 *                double AddCP
 *                double SyncPeriod
 *                double DecMod
 *                double *LevDec1
 *                double *LevDec2
 *                double *LevDec3
 *                emxArray_real_T *Ix
 *                double *Ber4PAM
 *                emxArray_real_T *TxData
 *                emxArray_real_T *IxRecDef
 *                emxArray_real_T *IxRec
 *                double *AberLev1
 *                double *AberLev2
 *                double *AberLev3
 *                double *ValsLev1
 *                double *ValsLev2
 *                double *ValsLev3
 *                double *ValsLev21
 *                double *ValsLev22
 *                double *ValsLev23
 *                double InterAB[100]
 *                double InterCD[100]
 *                double InterEF[100]
 *                double SeqFinAB[100]
 *                double SeqFinCD[100]
 *                double SeqFinEF[100]
 *                double *LocMaxAB
 *                double *LocMaxCD
 *                double *LocMaxEF
 *                double *MaxValAB
 *                double *MaxValCD
 *                double *MaxValEF
 *                double Levels_data[]
 *                int Levels_size[2]
 * Return Type  : void
 */
void RecDowPam4(emxArray_real_T *Ix1, double T, double Ta, double MaxNumStag,
                double StuffSampels, double NumAmosCP, double NPPB, double
                CurTesSiz, double Nb4Pam, double IntervalStep, double MinDist,
                double *DecLevDef1, double *DecLevDef2, double *DecLevDef3,
                const emxArray_real_T *TxDataMat, double ThisCarr, double
                IfftOrSum, double AddCP, double SyncPeriod, double DecMod,
                double *LevDec1, double *LevDec2, double *LevDec3,
                emxArray_real_T *Ix, double *Ber4PAM, emxArray_real_T *TxData,
                emxArray_real_T *IxRecDef, emxArray_real_T *IxRec, double
                *AberLev1, double *AberLev2, double *AberLev3, double *ValsLev1,
                double *ValsLev2, double *ValsLev3, double *ValsLev21, double
                *ValsLev22, double *ValsLev23, double InterAB[100], double
                InterCD[100], double InterEF[100], double SeqFinAB[100], double
                SeqFinCD[100], double SeqFinEF[100], double *LocMaxAB, double
                *LocMaxCD, double *LocMaxEF, double *MaxValAB, double *MaxValCD,
                double *MaxValEF, double Levels_data[], int Levels_size[2])
{
  double AuxSyncCorr;
  int i4;
  int i5;
  int loop_ub;
  int i6;
  int idx;
  boolean_T empty_non_axis_sizes;
  boolean_T guard2 = false;
  int nx;
  boolean_T guard1 = false;
  int n;
  emxArray_real_T *b_Ix1;
  int c_Ix1;
  emxArray_real_T *d_Ix1;
  int b_loop_ub;
  int i7;
  emxArray_real_T *TxDataB;
  double cdiff;
  double ndbl;
  emxArray_real_T *IxAux;
  emxArray_real_T *b_IxAux;
  boolean_T exitg5;
  emxArray_real_T *Interval;
  emxArray_real_T *EyeMax;
  boolean_T exitg4;
  emxArray_real_T *EyeMaxaux;
  emxArray_real_T *EyeLoc;
  double x[4];
  static const double dv0[5] = { 0.0, 0.0, 0.35, 0.55, 0.85 };

  double anew;
  double apnd;
  double absa;
  double u1;
  emxArray_boolean_T *r4;
  emxArray_boolean_T *r5;
  emxArray_int32_T *r6;
  emxArray_real_T *b_Ix;
  emxArray_real_T *c_Ix;
  double EyeAB[100];
  emxArray_real_T *d_Ix;
  emxArray_real_T *e_Ix;
  double EyeCD[100];
  emxArray_real_T *f_Ix;
  emxArray_real_T *g_Ix;
  double EyeEF[100];
  double CountAB;
  double CountCD;
  double CountEF;
  boolean_T b_EyeAB[100];
  boolean_T b_EyeCD[100];
  boolean_T b_EyeEF[100];
  int SeqIniAB;
  int SeqIniCD;
  int SeqIniEF;
  int kk;
  signed char ii_data[100];
  signed char ii_size[2];
  static const signed char iv1[2] = { 1, 100 };

  boolean_T exitg3;
  boolean_T guard3 = false;
  int LocAB_size[2];
  double LocAB_data[100];
  int i8;
  double LevelDec3;
  boolean_T exitg2;
  boolean_T b_guard2 = false;
  int LocCD_size[2];
  double LocCD_data[100];
  int i9;
  double LevelDec2;
  boolean_T exitg1;
  boolean_T b_guard1 = false;
  int LocEF_size[2];
  double LocEF_data[100];
  int i10;
  double LevelDec1;
  unsigned int ContBit;
  unsigned int ContBit1;
  double midaux;
  double BitErr;
  double BitErrAux2;
  AuxSyncCorr = rt_roundd_snf(0.5 * (rt_powd_snf(0.5, MaxNumStag) - 1.0) / -0.5 /
    (2.0 / rt_powd_snf(2.0, IfftOrSum)) * T / Ta);
  if (AuxSyncCorr + 1.0 > Ix1->size[0]) {
    i4 = 1;
    i5 = 1;
  } else {
    i4 = (int)(AuxSyncCorr + 1.0);
    i5 = Ix1->size[0] + 1;
  }

  if (1.0 > AuxSyncCorr) {
    loop_ub = 0;
  } else {
    loop_ub = (int)AuxSyncCorr;
  }

  i6 = Ix1->size[1];
  if (!((i5 - i4 == 0) || (i6 == 0))) {
    idx = Ix1->size[1];
  } else {
    i6 = Ix1->size[1];
    if (!((loop_ub == 0) || (i6 == 0))) {
      idx = Ix1->size[1];
    } else {
      i6 = Ix1->size[1];
      if (i6 > 0) {
        idx = Ix1->size[1];
      } else {
        idx = 0;
      }

      i6 = Ix1->size[1];
      if (i6 > idx) {
        idx = Ix1->size[1];
      }
    }
  }

  empty_non_axis_sizes = (idx == 0);
  guard2 = false;
  if (empty_non_axis_sizes) {
    guard2 = true;
  } else {
    i6 = Ix1->size[1];
    if (!((i5 - i4 == 0) || (i6 == 0))) {
      guard2 = true;
    } else {
      nx = -1;
    }
  }

  if (guard2) {
    nx = (i5 - i4) - 1;
  }

  guard1 = false;
  if (empty_non_axis_sizes) {
    guard1 = true;
  } else {
    i6 = Ix1->size[1];
    if (!((loop_ub == 0) || (i6 == 0))) {
      guard1 = true;
    } else {
      n = 0;
    }
  }

  if (guard1) {
    n = loop_ub;
  }

  emxInit_real_T(&b_Ix1, 2);
  c_Ix1 = Ix1->size[1];
  i6 = b_Ix1->size[0] * b_Ix1->size[1];
  b_Ix1->size[0] = i5 - i4;
  b_Ix1->size[1] = c_Ix1;
  emxEnsureCapacity((emxArray__common *)b_Ix1, i6, (int)sizeof(double));
  for (i6 = 0; i6 < c_Ix1; i6++) {
    b_loop_ub = i5 - i4;
    for (i7 = 0; i7 < b_loop_ub; i7++) {
      b_Ix1->data[i7 + b_Ix1->size[0] * i6] = Ix1->data[((i4 + i7) + Ix1->size[0]
        * i6) - 1];
    }
  }

  emxInit_real_T(&d_Ix1, 2);
  c_Ix1 = Ix1->size[1];
  i4 = d_Ix1->size[0] * d_Ix1->size[1];
  d_Ix1->size[0] = loop_ub;
  d_Ix1->size[1] = c_Ix1;
  emxEnsureCapacity((emxArray__common *)d_Ix1, i4, (int)sizeof(double));
  for (i4 = 0; i4 < c_Ix1; i4++) {
    for (i5 = 0; i5 < loop_ub; i5++) {
      d_Ix1->data[i5 + d_Ix1->size[0] * i4] = Ix1->data[i5 + Ix1->size[0] * i4];
    }
  }

  i4 = Ix1->size[0] * Ix1->size[1];
  Ix1->size[0] = (nx + n) + 1;
  Ix1->size[1] = idx;
  emxEnsureCapacity((emxArray__common *)Ix1, i4, (int)sizeof(double));
  for (i4 = 0; i4 < idx; i4++) {
    loop_ub = nx + 1;
    for (i5 = 0; i5 < loop_ub; i5++) {
      Ix1->data[i5 + Ix1->size[0] * i4] = b_Ix1->data[i5 + (nx + 1) * i4];
    }
  }

  emxFree_real_T(&b_Ix1);
  for (i4 = 0; i4 < idx; i4++) {
    for (i5 = 0; i5 < n; i5++) {
      Ix1->data[((i5 + nx) + Ix1->size[0] * i4) + 1] = d_Ix1->data[i5 + n * i4];
    }
  }

  emxFree_real_T(&d_Ix1);

  /* The difference between the PossitionTosynchronize and */
  /* Possitionsynchronized will be used to correct the time */
  /* shifting on the transmition and reception process. */
  /* if AuxSyncCorr>=0%If the difference is positive, left-shift... */
  /*                  Ix = ifft(fft(Ix).*exp(1j*2*pi*f*AuxSyncCorr));          %Shift based on time change */
  /* Ix = [Ix(AuxSyncCorr+1:end) Ix(1:AuxSyncCorr)];            %Shift based on sampling sliding */
  /* else%... but if the difference is negative, right-shift */
  /*                  Ix = ifft(fft(Ix).*exp(-1j*2*pi*f*AuxSyncCorr));         %Shift based on time change */
  /* Ix = [Ix(end+AuxSyncCorr+1:end) Ix(1:end + AuxSyncCorr)];  %Shift based on sampling sliding */
  /* end */
  /* if SencondAdjust */
  /* For some reason that we could not understand sometimes the */
  /* time (sampling) sliding of the signal is not equal */
  /* throught the data stream. Thus, the second part of the */
  /* synchronism process will be turn ON or OFF according to */
  /* the user's will. */
  /* AuxSyncEnd     = (Ix(end-SyncPos+1:end-IniSyncPos-1));     %Selecting the sync-word within the received signal */
  /* SyncSymbEndAux = SyncSymbEnd(end-SyncPos+1:end-... */
  /* IniSyncPos-1);%Selecting the sync-word within the known signal */
  /* AuxSyncEnd1 = AuxSyncEnd; */
  /* AuxSyncEnd1(AuxSyncEnd1<0) = 0;                            %To keep the mean value above zero anything under is neglected */
  /* AuxSyncEnd1(AuxSyncEnd1>=mean(AuxSyncEnd1)) = 1;           %Adding a flag to the first sample of the received mean value */
  /* AuxSyncEnd1(AuxSyncEnd1<mean(AuxSyncEnd1)) = -1;           %All the others samples at set to the lowest level */
  /* AuxSyncEnd2 = SyncSymbEndAux; */
  /* AuxSyncEnd2(AuxSyncEnd2>=mean(AuxSyncEnd2)) = 1;           %Adding a flag to the first sample of the known mean value */
  /* AuxSyncEnd2(AuxSyncEnd2<mean(AuxSyncEnd2)) = -1;           %All the others samples at set to the lowest level */
  /* PosToSynEnd  = find(ismember(AuxSyncEnd1,1));              %Finding where is the location of the first sample to synchronize */
  /* PosSynEnd = find(ismember(AuxSyncEnd2,1));                 %Finding where is the location of the first sample to synchronize */
  /* AuxSyncCorrEnd = PosToSynEnd(round(end/2))-PosSynEnd(... */
  /* round(end/2)); */
  /* The difference between the PossitionTosynchronize and */
  /* Possitionsynchronized will be used to correct the time */
  /* shifting on the transmition and reception process. */
  /* if AuxSyncCorrEnd>=0%If possitive difference, left-shift... */
  /*                  Ix = ifft(fft(Ix).*exp(1j*2*pi*f*AuxSyncCorrEnd));   %Shift based on time change */
  /* Ix = [Ix(AuxSyncCorrEnd+1:end) Ix(1:AuxSyncCorrEnd)];  %Shift based on sampling sliding */
  /* else%... but if the difference is negative, right-shift */
  /* Ix = ifft(fft(Ix).*exp(-1j*2*pi*f*AuxSyncCorrEnd));  %Shift based on time change */
  /* Ix = [Ix(end-AuxSyncCorrEnd+1:end) Ix(1:end - ... */
  /* AuxSyncCorrEnd)];%Shift based on sampling sliding */
  /* end */
  /* end */
  /* %          Ploting the result for qualitative analizes */
  /*                              PrintInfo(Ploting*35,t(end-SyncPos+1:end-IniSyncPos+1),Ix(... */
  /*                                  end-SyncPos+1:end-IniSyncPos+1),SyncSymb(end-SyncPos+1:... */
  /*                                                                          end-IniSyncPos+1)); */
  /* % Removing CP */
  emxInit_real_T(&TxDataB, 2);
  if (AddCP == 1.0) {
    cdiff = (double)Ix1->size[0] - StuffSampels;
    if (1.0 > cdiff) {
      i4 = 0;
    } else {
      i4 = (int)cdiff;
    }

    emxInit_real_T(&IxAux, 2);
    i5 = Ix1->size[1];
    nx = i4 * i5;
    i5 = IxAux->size[0] * IxAux->size[1];
    IxAux->size[0] = (int)(2.0 * NumAmosCP + NPPB);
    IxAux->size[1] = (int)(Nb4Pam / 2.0 * CurTesSiz);
    emxEnsureCapacity((emxArray__common *)IxAux, i5, (int)sizeof(double));
    for (idx = 0; idx + 1 <= nx; idx++) {
      IxAux->data[idx] = Ix1->data[idx % i4 + Ix1->size[0] * (idx / i4)];
    }

    cdiff = (double)IxAux->size[0] - NumAmosCP;
    if (1.0 + NumAmosCP > cdiff) {
      i4 = 0;
      i5 = 0;
    } else {
      i4 = (int)(1.0 + NumAmosCP) - 1;
      i5 = (int)cdiff;
    }

    emxInit_real_T(&b_IxAux, 2);
    idx = IxAux->size[1];
    i6 = b_IxAux->size[0] * b_IxAux->size[1];
    b_IxAux->size[0] = i5 - i4;
    b_IxAux->size[1] = idx;
    emxEnsureCapacity((emxArray__common *)b_IxAux, i6, (int)sizeof(double));
    for (i6 = 0; i6 < idx; i6++) {
      loop_ub = i5 - i4;
      for (i7 = 0; i7 < loop_ub; i7++) {
        b_IxAux->data[i7 + b_IxAux->size[0] * i6] = IxAux->data[(i4 + i7) +
          IxAux->size[0] * i6];
      }
    }

    i4 = IxAux->size[0] * IxAux->size[1];
    IxAux->size[0] = b_IxAux->size[0];
    IxAux->size[1] = b_IxAux->size[1];
    emxEnsureCapacity((emxArray__common *)IxAux, i4, (int)sizeof(double));
    loop_ub = b_IxAux->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      b_loop_ub = b_IxAux->size[0];
      for (i5 = 0; i5 < b_loop_ub; i5++) {
        IxAux->data[i5 + IxAux->size[0] * i4] = b_IxAux->data[i5 + b_IxAux->
          size[0] * i4];
      }
    }

    emxFree_real_T(&b_IxAux);
    i4 = TxDataB->size[0] * TxDataB->size[1];
    TxDataB->size[0] = IxAux->size[0];
    TxDataB->size[1] = IxAux->size[1];
    emxEnsureCapacity((emxArray__common *)TxDataB, i4, (int)sizeof(double));
    loop_ub = IxAux->size[0] * IxAux->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      TxDataB->data[i4] = IxAux->data[i4];
    }

    nx = IxAux->size[0] * IxAux->size[1];
    i4 = IxAux->size[0] * IxAux->size[1];
    IxAux->size[0] = (int)(NPPB * Nb4Pam / 2.0);
    IxAux->size[1] = (int)CurTesSiz;
    emxEnsureCapacity((emxArray__common *)IxAux, i4, (int)sizeof(double));
    for (idx = 0; idx + 1 <= nx; idx++) {
      IxAux->data[idx] = TxDataB->data[idx];
    }

    i4 = Ix1->size[0] * Ix1->size[1];
    Ix1->size[0] = IxAux->size[0];
    Ix1->size[1] = IxAux->size[1];
    emxEnsureCapacity((emxArray__common *)Ix1, i4, (int)sizeof(double));
    loop_ub = IxAux->size[0] * IxAux->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      Ix1->data[i4] = IxAux->data[i4];
    }

    emxFree_real_T(&IxAux);
  }

  /* % Taking the sampling the EVM meassurement */
  cdiff = 1.0 + SyncPeriod * NPPB;
  ndbl = (double)Ix1->size[0] - SyncPeriod * NPPB;
  if (cdiff > ndbl) {
    i4 = 1;
    i5 = 1;
  } else {
    i4 = (int)cdiff;
    i5 = (int)ndbl + 1;
  }

  i6 = Ix1->size[1];
  i7 = Ix1->size[1];
  nx = (i5 - i4) * i7;
  i7 = Ix->size[0] * Ix->size[1];
  Ix->size[0] = 1;
  Ix->size[1] = (int)((double)(i5 - i4) * (double)i6);
  emxEnsureCapacity((emxArray__common *)Ix, i7, (int)sizeof(double));
  for (idx = 0; idx + 1 <= nx; idx++) {
    Ix->data[idx] = Ix1->data[((i4 + idx % (i5 - i4)) + Ix1->size[0] * (idx /
      (i5 - i4))) - 1];
  }

  /* PosAuxEout = NPPB/2:NPPB:length(Ix);%Varriable respossible to take just the samples at the middle of the symbol */
  /* IxAux      = Ix(PosAuxEout);                           %Normalizing the reference */
  /* RxSymbAmos(CurrentTest,ObsCarrPos==ThisCarr,:) = IxAux;%RxSymbAmosUp = []; */
  /* EvmMatRec(ObsCarrPos==ThisCarr,:) = IxAux;                       %Taking just the middle samples as references */
  /* [EvmDB(CurrentTest,ThisCarr), EvmPer(CurrentTest,ThisCarr), EvmRms(CurrentTest,ThisCarr) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux ); */
  /* [EvmDBJ(CurrentTest,ThisCarr),EvmPerJ(CurrentTest,ThisCarr),EvmRmsJ(CurrentTest,ThisCarr)] = evm1(4,'pam',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux); */
  /* %         Finding Decission Levels */
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
  /* Firstly it was set the interval in which the histogram will be */
  /* build. It is based on the number of samples per bit period. */
  /*              IxToSeek = reshape(Ix(1+SyncPeriod*NPPB:end-SyncPeriod*NPPB... */
  /*                                         ),NPPB,(Nb4Pam/2) - (2*SyncPeriod)); */
  nx = 1;
  n = Ix->size[1];
  cdiff = Ix->data[0];
  if (Ix->size[1] > 1) {
    if (rtIsNaN(Ix->data[0])) {
      idx = 2;
      exitg5 = false;
      while ((!exitg5) && (idx <= n)) {
        nx = idx;
        if (!rtIsNaN(Ix->data[idx - 1])) {
          cdiff = Ix->data[idx - 1];
          exitg5 = true;
        } else {
          idx++;
        }
      }
    }

    if (nx < Ix->size[1]) {
      while (nx + 1 <= n) {
        if (Ix->data[nx] < cdiff) {
          cdiff = Ix->data[nx];
        }

        nx++;
      }
    }
  }

  nx = 1;
  n = Ix->size[1];
  ndbl = Ix->data[0];
  if (Ix->size[1] > 1) {
    if (rtIsNaN(Ix->data[0])) {
      idx = 2;
      exitg4 = false;
      while ((!exitg4) && (idx <= n)) {
        nx = idx;
        if (!rtIsNaN(Ix->data[idx - 1])) {
          ndbl = Ix->data[idx - 1];
          exitg4 = true;
        } else {
          idx++;
        }
      }
    }

    if (nx < Ix->size[1]) {
      while (nx + 1 <= n) {
        if (Ix->data[nx] > ndbl) {
          ndbl = Ix->data[nx];
        }

        nx++;
      }
    }
  }

  emxInit_real_T(&Interval, 2);
  emxInit_real_T(&EyeMax, 2);
  emxInit_real_T(&EyeMaxaux, 2);
  linspace(cdiff, ndbl, IntervalStep, Interval);

  /* Therefore, the MATLAB hist function returns the number of */
  /* occurrence of each interval. */
  hist(Ix, Interval, EyeMax);
  i4 = EyeMaxaux->size[0] * EyeMaxaux->size[1];
  EyeMaxaux->size[0] = 1;
  EyeMaxaux->size[1] = 2 + EyeMax->size[1];
  emxEnsureCapacity((emxArray__common *)EyeMaxaux, i4, (int)sizeof(double));
  EyeMaxaux->data[0] = 0.0;
  loop_ub = EyeMax->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    EyeMaxaux->data[EyeMaxaux->size[0] * (i4 + 1)] = EyeMax->data[EyeMax->size[0]
      * i4];
  }

  emxInit_real_T(&EyeLoc, 2);
  EyeMaxaux->data[EyeMaxaux->size[0] * (1 + EyeMax->size[1])] = 0.0;

  /* Zeros are added at the EyeMax to auxiliate the finding peaks process */
  findpeaks(EyeMaxaux, MinDist, EyeMax, EyeLoc);

  /* ,'MinPeakHeight',mean(EyeMax));%The peaks on the Eye profile will be the levels at the Eyes limit */
  if (EyeLoc->size[1] < 4) {
    findpeaks(EyeMaxaux, MinDist * 0.8, EyeMax, EyeLoc);

    /* ,'MinPeakHeight',mean(EyeMax)/4);%The peaks on the Eye profile will be the levels at the Eyes limit */
  }

  emxFree_real_T(&EyeMaxaux);

  /* This variable will brings the eye profile of the input signal */
  /* that will be used to generate the decision level. Basicaly the */
  /* decission level will be the minimal value of the currente eye */
  /* under evaluation plus the half of the its eye opening. The */
  /* following ilustration better describe this process. */
  /*  */
  /* Eye Limits:   + (1/2 * Eye Opening:)  =    Comparisson Limits: */
  /*  */
  /* UperLevel  ______     ______________     _____ */
  /*                  \   /      |       \   / */
  /*                   \ /       |        \ / */
  /*                    \ Half Eye Opening /     Decission Level 3 */
  /*                   / \       |        / \ */
  /* LowerLevel 3_____/   \______|_______/   \_____ */
  /*                  \   /      |       \   / */
  /*                   \ /       |        \ / */
  /*                    \ Half Eye Opening /     Decission Level 2 */
  /*                   / \       |        / \ */
  /* LowerLevel 2_____/   \______|_______/   \_____ */
  /*                  \   /      |       \   / */
  /*                   \ /       |        \ / */
  /*                    \ Half Eye Opening /     Decission Level 1 */
  /*                   / \       |        / \ */
  /* LowerLevel 1_____/   \______|_______/   \_____ */
  /*  */
  /* %           Ploting for Qualitative Analizes */
  /*              PrintInfo(Ploting*37,Interval,EyeMax); */
  /* %         Finding Decission Levels */
  /* It is not always possible to totaly recover the signal. */
  /* Depending on the configuration of the transmition and */
  /* reception system the eye diagram may be nonexistent. Which */
  /* means, there will not be a profile to be found therefore the */
  /* EyeLoc will not return the correct location. Inasmuch as the */
  /* detection process to works limts will be set accordling to the */
  /* amplitude of the received signal. */
  if (EyeLoc->size[1] < 4) {
    /* If it was not able to find the eye profile. */
    /* EyeLoc = [2 3 4 5]; */
    Levels_size[0] = 1;
    Levels_size[1] = 5;
    for (i4 = 0; i4 < 5; i4++) {
      Levels_data[i4] = dv0[i4];
    }

    /*                  Levels = sort(Levels); */
    /*                  LevelDec1 = mean(Ix) - 2*mean(Ix)/3 ; */
    /*                  LevelDec2 = mean(Ix) ; */
    /*                  LevelDec3 = mean(Ix) + 2*mean(Ix)/3 ; */
  } else {
    /* Whereas, if there is an profile the decission can be found */
    x[0] = Interval->data[(int)(EyeLoc->data[0] - 1.0) - 1];
    x[1] = Interval->data[(int)(EyeLoc->data[1] - 1.0) - 1];
    x[2] = Interval->data[(int)(EyeLoc->data[2] - 1.0) - 1];
    x[3] = Interval->data[(int)(EyeLoc->data[3] - 1.0) - 1];
    d_sort(x);
    Levels_size[0] = 1;
    Levels_size[1] = 4;
    for (i4 = 0; i4 < 4; i4++) {
      Levels_data[i4] = x[i4];
    }

    /*                  LevelDec1 = Levels(1) + (Levels(2)-Levels(1))/2 ; */
    /*                  LevelDec2 = Levels(2) + (Levels(3)-Levels(2))/2 ; */
    /*                  LevelDec3 = Levels(3) + (Levels(4)-Levels(3))/2 ; */
  }

  emxFree_real_T(&EyeLoc);
  emxFree_real_T(&Interval);

  /* ############################################################## */
  /* ############################################################## */
  anew = NPPB / 2.0;
  if (rtIsNaN(anew) || rtIsNaN(NPPB)) {
    n = 1;
    anew = rtNaN;
    apnd = Ix->size[1];
  } else if ((NPPB == 0.0) || ((anew < Ix->size[1]) && (NPPB < 0.0)) ||
             ((Ix->size[1] < anew) && (NPPB > 0.0))) {
    n = 0;
    apnd = Ix->size[1];
  } else if (rtIsInf(anew)) {
    n = 1;
    anew = rtNaN;
    apnd = Ix->size[1];
  } else if (rtIsInf(NPPB)) {
    n = 1;
    apnd = Ix->size[1];
  } else {
    ndbl = floor(((double)Ix->size[1] - anew) / NPPB + 0.5);
    apnd = anew + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (double)Ix->size[1];
    } else {
      cdiff = (double)Ix->size[1] - apnd;
    }

    absa = fabs(anew);
    nx = Ix->size[1];
    u1 = nx;
    if (absa >= u1) {
      u1 = absa;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * u1) {
      ndbl++;
      apnd = Ix->size[1];
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

  i4 = EyeMax->size[0] * EyeMax->size[1];
  EyeMax->size[0] = 1;
  EyeMax->size[1] = n;
  emxEnsureCapacity((emxArray__common *)EyeMax, i4, (int)sizeof(double));
  if (n > 0) {
    EyeMax->data[0] = anew;
    if (n > 1) {
      EyeMax->data[n - 1] = apnd;
      nx = (n - 1) / 2;
      for (idx = 1; idx < nx; idx++) {
        cdiff = (double)idx * NPPB;
        EyeMax->data[idx] = anew + cdiff;
        EyeMax->data[(n - idx) - 1] = apnd - cdiff;
      }

      if (nx << 1 == n - 1) {
        EyeMax->data[nx] = (anew + apnd) / 2.0;
      } else {
        cdiff = (double)nx * NPPB;
        EyeMax->data[nx] = anew + cdiff;
        EyeMax->data[nx + 1] = apnd - cdiff;
      }
    }
  }

  emxInit_boolean_T1(&r4, 2);

  /* Possition of the central samples - but the number of samples per symbol is even ???? */
  /* From the main received signal just a few samples are taken for further evaluation */
  /* The number of boxes to be filled up on the histogram process */
  /* At this process each eye will be evaluated separetelly. It is */
  /* important to remember that the PAM4 has 4 levels, which means */
  /* three level of decissions that are exaclty the center of the */
  /* eye diagram. */
  i4 = r4->size[0] * r4->size[1];
  r4->size[0] = 1;
  r4->size[1] = EyeMax->size[1];
  emxEnsureCapacity((emxArray__common *)r4, i4, (int)sizeof(boolean_T));
  cdiff = Levels_data[3];
  loop_ub = EyeMax->size[0] * EyeMax->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    r4->data[i4] = (Ix->data[(int)EyeMax->data[i4] - 1] <= cdiff);
  }

  emxInit_boolean_T1(&r5, 2);
  i4 = r5->size[0] * r5->size[1];
  r5->size[0] = 1;
  r5->size[1] = EyeMax->size[1];
  emxEnsureCapacity((emxArray__common *)r5, i4, (int)sizeof(boolean_T));
  cdiff = Levels_data[2];
  loop_ub = EyeMax->size[0] * EyeMax->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    r5->data[i4] = (Ix->data[(int)EyeMax->data[i4] - 1] >= cdiff);
  }

  emxInit_int32_T1(&r6, 2);

  /* Taking just those values relative to the uper eye */
  b_linspace(Levels_data[2], Levels_data[3], InterAB);

  /* Building the histogram boxes */
  n = r4->size[1] - 1;
  nx = 0;
  for (idx = 0; idx <= n; idx++) {
    if (r4->data[idx] && r5->data[idx]) {
      nx++;
    }
  }

  i4 = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = nx;
  emxEnsureCapacity((emxArray__common *)r6, i4, (int)sizeof(int));
  nx = 0;
  for (idx = 0; idx <= n; idx++) {
    if (r4->data[idx] && r5->data[idx]) {
      r6->data[nx] = idx + 1;
      nx++;
    }
  }

  emxInit_real_T(&b_Ix, 2);
  emxInit_real_T1(&c_Ix, 1);
  i4 = b_Ix->size[0] * b_Ix->size[1];
  b_Ix->size[0] = 1;
  b_Ix->size[1] = r6->size[1];
  emxEnsureCapacity((emxArray__common *)b_Ix, i4, (int)sizeof(double));
  i4 = c_Ix->size[0];
  c_Ix->size[0] = EyeMax->size[1];
  emxEnsureCapacity((emxArray__common *)c_Ix, i4, (int)sizeof(double));
  loop_ub = EyeMax->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    c_Ix->data[i4] = Ix->data[(int)EyeMax->data[i4] - 1];
  }

  loop_ub = r6->size[0] * r6->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    b_Ix->data[i4] = c_Ix->data[r6->data[i4] - 1];
  }

  emxFree_real_T(&c_Ix);
  b_hist(b_Ix, InterAB, EyeAB);

  /* filling up the boxes with samples that fit on them. */
  /* The same process described for the uper level will be done at */
  /* the middle and lower eyes levels. */
  i4 = r4->size[0] * r4->size[1];
  r4->size[0] = 1;
  r4->size[1] = EyeMax->size[1];
  emxEnsureCapacity((emxArray__common *)r4, i4, (int)sizeof(boolean_T));
  cdiff = Levels_data[2];
  loop_ub = EyeMax->size[0] * EyeMax->size[1];
  emxFree_real_T(&b_Ix);
  for (i4 = 0; i4 < loop_ub; i4++) {
    r4->data[i4] = (Ix->data[(int)EyeMax->data[i4] - 1] <= cdiff);
  }

  i4 = r5->size[0] * r5->size[1];
  r5->size[0] = 1;
  r5->size[1] = EyeMax->size[1];
  emxEnsureCapacity((emxArray__common *)r5, i4, (int)sizeof(boolean_T));
  cdiff = Levels_data[1];
  loop_ub = EyeMax->size[0] * EyeMax->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    r5->data[i4] = (Ix->data[(int)EyeMax->data[i4] - 1] >= cdiff);
  }

  b_linspace(Levels_data[1], Levels_data[2], InterCD);

  /* NPPB*2^n); */
  n = r4->size[1] - 1;
  nx = 0;
  for (idx = 0; idx <= n; idx++) {
    if (r4->data[idx] && r5->data[idx]) {
      nx++;
    }
  }

  i4 = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = nx;
  emxEnsureCapacity((emxArray__common *)r6, i4, (int)sizeof(int));
  nx = 0;
  for (idx = 0; idx <= n; idx++) {
    if (r4->data[idx] && r5->data[idx]) {
      r6->data[nx] = idx + 1;
      nx++;
    }
  }

  emxInit_real_T(&d_Ix, 2);
  emxInit_real_T1(&e_Ix, 1);
  i4 = d_Ix->size[0] * d_Ix->size[1];
  d_Ix->size[0] = 1;
  d_Ix->size[1] = r6->size[1];
  emxEnsureCapacity((emxArray__common *)d_Ix, i4, (int)sizeof(double));
  i4 = e_Ix->size[0];
  e_Ix->size[0] = EyeMax->size[1];
  emxEnsureCapacity((emxArray__common *)e_Ix, i4, (int)sizeof(double));
  loop_ub = EyeMax->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    e_Ix->data[i4] = Ix->data[(int)EyeMax->data[i4] - 1];
  }

  loop_ub = r6->size[0] * r6->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    d_Ix->data[i4] = e_Ix->data[r6->data[i4] - 1];
  }

  emxFree_real_T(&e_Ix);
  b_hist(d_Ix, InterCD, EyeCD);
  i4 = r4->size[0] * r4->size[1];
  r4->size[0] = 1;
  r4->size[1] = EyeMax->size[1];
  emxEnsureCapacity((emxArray__common *)r4, i4, (int)sizeof(boolean_T));
  cdiff = Levels_data[1];
  loop_ub = EyeMax->size[0] * EyeMax->size[1];
  emxFree_real_T(&d_Ix);
  for (i4 = 0; i4 < loop_ub; i4++) {
    r4->data[i4] = (Ix->data[(int)EyeMax->data[i4] - 1] <= cdiff);
  }

  i4 = r5->size[0] * r5->size[1];
  r5->size[0] = 1;
  r5->size[1] = EyeMax->size[1];
  emxEnsureCapacity((emxArray__common *)r5, i4, (int)sizeof(boolean_T));
  cdiff = Levels_data[0];
  loop_ub = EyeMax->size[0] * EyeMax->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    r5->data[i4] = (Ix->data[(int)EyeMax->data[i4] - 1] >= cdiff);
  }

  b_linspace(Levels_data[0], Levels_data[1], InterEF);

  /* NPPB*2^n); */
  n = r4->size[1] - 1;
  nx = 0;
  for (idx = 0; idx <= n; idx++) {
    if (r4->data[idx] && r5->data[idx]) {
      nx++;
    }
  }

  i4 = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = nx;
  emxEnsureCapacity((emxArray__common *)r6, i4, (int)sizeof(int));
  nx = 0;
  for (idx = 0; idx <= n; idx++) {
    if (r4->data[idx] && r5->data[idx]) {
      r6->data[nx] = idx + 1;
      nx++;
    }
  }

  emxFree_boolean_T(&r5);
  emxInit_real_T(&f_Ix, 2);
  emxInit_real_T1(&g_Ix, 1);
  i4 = f_Ix->size[0] * f_Ix->size[1];
  f_Ix->size[0] = 1;
  f_Ix->size[1] = r6->size[1];
  emxEnsureCapacity((emxArray__common *)f_Ix, i4, (int)sizeof(double));
  i4 = g_Ix->size[0];
  g_Ix->size[0] = EyeMax->size[1];
  emxEnsureCapacity((emxArray__common *)g_Ix, i4, (int)sizeof(double));
  loop_ub = EyeMax->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    g_Ix->data[i4] = Ix->data[(int)EyeMax->data[i4] - 1];
  }

  loop_ub = r6->size[0] * r6->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    f_Ix->data[i4] = g_Ix->data[r6->data[i4] - 1];
  }

  emxFree_real_T(&g_Ix);
  emxFree_int32_T(&r6);
  b_hist(f_Ix, InterEF, EyeEF);

  /* What we are looking for here are not where exist the */
  /* occurrences of values. The eye is where there is not samples, */
  /* this means, the decission level is a reagion between actual */
  /* levels thus this reagion does not contain any signal. */
  emxFree_real_T(&f_Ix);

  /* Changing zeros to one - Zeros compose the eye region */
  /* Starting variables that will be used to identify the eye */
  /* diagram. */
  CountAB = 1.0;
  CountCD = 1.0;
  CountEF = 1.0;
  for (i4 = 0; i4 < 100; i4++) {
    b_EyeAB[i4] = !(EyeAB[i4] != 0.0);
    b_EyeCD[i4] = !(EyeCD[i4] != 0.0);
    b_EyeEF[i4] = !(EyeEF[i4] != 0.0);
    EyeAB[i4] = 0.0;
    EyeCD[i4] = 0.0;
    EyeEF[i4] = 0.0;
  }

  for (i4 = 0; i4 < 100; i4++) {
    SeqFinAB[i4] = 0.0;
  }

  for (i4 = 0; i4 < 100; i4++) {
    SeqFinCD[i4] = 0.0;
  }

  for (i4 = 0; i4 < 100; i4++) {
    SeqFinEF[i4] = 0.0;
  }

  SeqIniAB = 0;
  SeqIniCD = 0;
  SeqIniEF = 0;

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

    if (b_EyeCD[kk]) {
      EyeCD[SeqIniCD] = CountCD;
      CountCD++;
      if (1 + kk == 100) {
        SeqFinCD[SeqIniCD] = 100.0;
      }
    } else {
      SeqFinCD[SeqIniCD] = (1.0 + (double)kk) - 1.0;
      SeqIniCD++;
      CountCD = 1.0;
    }

    if (b_EyeEF[kk]) {
      EyeEF[SeqIniEF] = CountEF;
      CountEF++;
      if (1 + kk == 100) {
        SeqFinEF[SeqIniEF] = 100.0;
      }
    } else {
      SeqFinEF[SeqIniEF] = (1.0 + (double)kk) - 1.0;
      SeqIniEF++;
      CountEF = 1.0;
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
  if (cdiff < 2.0) {
    /* if any sequency was found or there is just one sequency it is a error thus */
    *LevDec3 = 0.6953;

    /* the decission level will be by default 0.67. Also, the other variables will */
    *LocMaxAB = 1.0;

    /* will be set with values to not cause errors in the future */
    SeqFinAB[0] = 2.0;
    *MaxValAB = 0.0;
    InterAB[0] = 0.6953;
  } else {
    /* if a sequency was found the middle of the eye will be the middle of the sequency */
    if ((double)(signed char)SeqFinAB[nx] - cdiff / 2.0 < 1.0) {
      /* if for some reason the final element of the sequency minus the half of its */
      *LevDec3 = 0.6953;

      /* length results in a negative value, something went very wrong, and by */
    } else {
      /* default it will be set to 0.7 */
      *LevDec3 = InterAB[(int)rt_roundd_snf((double)(signed char)SeqFinAB[nx] -
        cdiff / 2.0) - 1];

      /* Otherwise, the decission level is the middle of the sequency */
    }
  }

  cdiff = EyeCD[0];
  nx = 0;
  for (idx = 1; idx + 1 < 101; idx++) {
    if (EyeCD[idx] > cdiff) {
      cdiff = EyeCD[idx];
      nx = idx;
    }
  }

  *MaxValCD = cdiff;
  *LocMaxCD = nx + 1;
  if (cdiff < 2.0) {
    *LevDec2 = 0.4013;
    *LocMaxCD = 1.0;
    SeqFinCD[0] = 2.0;
    *MaxValCD = 0.0;
    InterCD[0] = 0.4013;
  } else if ((double)(signed char)SeqFinCD[nx] - cdiff / 2.0 < 1.0) {
    *LevDec2 = 0.4013;
  } else {
    *LevDec2 = InterCD[(int)rt_roundd_snf((double)(signed char)SeqFinCD[nx] -
      cdiff / 2.0) - 1];
  }

  cdiff = EyeEF[0];
  nx = 0;
  for (idx = 1; idx + 1 < 101; idx++) {
    if (EyeEF[idx] > cdiff) {
      cdiff = EyeEF[idx];
      nx = idx;
    }
  }

  *MaxValEF = cdiff;
  *LocMaxEF = nx + 1;
  if (cdiff < 2.0) {
    *LevDec1 = 0.1877;
    *LocMaxEF = 1.0;
    SeqFinEF[0] = 2.0;
    *MaxValEF = 0.0;
    InterEF[0] = 0.1877;
  } else if ((double)(signed char)SeqFinEF[nx] - cdiff / 2.0 < 1.0) {
    *LevDec1 = 0.1877;
  } else {
    *LevDec1 = InterEF[(int)rt_roundd_snf((double)(signed char)SeqFinEF[nx] -
      cdiff / 2.0) - 1];
  }

  /* another way to measure the eye opening is the get all the */
  /* boxes and find all peaks on it, that will be a plato created */
  /* by the sequences of ones (which was zeros). From thos peaks, */
  /* the eye diagram will be the longer of them hence it will take */
  /* the most part of the vector that store the findpeaks result. */
  /* Thus, the middle of the eye will be basically the middle of */
  /* the peaks vector. */
  idx = 0;
  for (i4 = 0; i4 < 2; i4++) {
    ii_size[i4] = iv1[i4];
  }

  nx = 1;
  exitg3 = false;
  while ((!exitg3) && (nx < 101)) {
    guard3 = false;
    if (b_EyeAB[nx - 1]) {
      idx++;
      ii_data[idx - 1] = (signed char)nx;
      if (idx >= 100) {
        exitg3 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }

    if (guard3) {
      nx++;
    }
  }

  if (1 > idx) {
    i4 = 0;
  } else {
    i4 = idx;
  }

  LocAB_size[0] = 1;
  LocAB_size[1] = i4;
  loop_ub = ii_size[0] * i4;
  for (i4 = 0; i4 < loop_ub; i4++) {
    LocAB_data[i4] = ii_data[i4];
  }

  if (!any(LocAB_data, LocAB_size)) {
    /* if for some reason there are no peaks, something went wrong. */
    LocAB_size[1] = 1;
    LocAB_data[0] = 1.0;
    LevelDec3 = 0.6953;

    /* mean(Levels(3:4));                       %by default the decission level will be set to 0.65 */
  } else if (DecMod == 1.0) {
    /* InterAB(LocAB(round(end/2)))<=LevDec3 */
    LevelDec3 = *LevDec3;
  } else {
    if (1 > idx) {
      i8 = 0;
    } else {
      i8 = idx;
    }

    LevelDec3 = InterAB[(int)LocAB_data[(int)rt_roundd_snf((double)i8 / 2.0) - 1]
      - 1];
  }

  idx = 0;
  for (i4 = 0; i4 < 2; i4++) {
    ii_size[i4] = iv1[i4];
  }

  nx = 1;
  exitg2 = false;
  while ((!exitg2) && (nx < 101)) {
    b_guard2 = false;
    if (b_EyeCD[nx - 1]) {
      idx++;
      ii_data[idx - 1] = (signed char)nx;
      if (idx >= 100) {
        exitg2 = true;
      } else {
        b_guard2 = true;
      }
    } else {
      b_guard2 = true;
    }

    if (b_guard2) {
      nx++;
    }
  }

  if (1 > idx) {
    i4 = 0;
  } else {
    i4 = idx;
  }

  LocCD_size[0] = 1;
  LocCD_size[1] = i4;
  loop_ub = ii_size[0] * i4;
  for (i4 = 0; i4 < loop_ub; i4++) {
    LocCD_data[i4] = ii_data[i4];
  }

  if (!any(LocCD_data, LocCD_size)) {
    LocCD_size[1] = 1;
    LocCD_data[0] = 1.0;
    LevelDec2 = 0.4013;

    /* mean(Levels(2:3)); */
  } else if (DecMod == 1.0) {
    /* InterCD(LocCD(round(end/2)))>=LevDec2 */
    LevelDec2 = *LevDec2;
  } else {
    if (1 > idx) {
      i9 = 0;
    } else {
      i9 = idx;
    }

    LevelDec2 = InterCD[(int)LocCD_data[(int)rt_roundd_snf((double)i9 / 2.0) - 1]
      - 1];
  }

  idx = 0;
  for (i4 = 0; i4 < 2; i4++) {
    ii_size[i4] = iv1[i4];
  }

  nx = 1;
  exitg1 = false;
  while ((!exitg1) && (nx < 101)) {
    b_guard1 = false;
    if (b_EyeEF[nx - 1]) {
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
    i4 = 0;
  } else {
    i4 = idx;
  }

  LocEF_size[0] = 1;
  LocEF_size[1] = i4;
  loop_ub = ii_size[0] * i4;
  for (i4 = 0; i4 < loop_ub; i4++) {
    LocEF_data[i4] = ii_data[i4];
  }

  if (!any(LocEF_data, LocEF_size)) {
    LocEF_size[1] = 1;
    LocEF_data[0] = 1.0;
    LevelDec1 = 0.1877;

    /* mean(Levels(1:2)); */
  } else if (DecMod == 1.0) {
    /* InterEF(LocEF(round(end/2)))<=LevDec1 */
    LevelDec1 = *LevDec1;
  } else {
    if (1 > idx) {
      i10 = 0;
    } else {
      i10 = idx;
    }

    LevelDec1 = InterEF[(int)LocEF_data[(int)rt_roundd_snf((double)i10 / 2.0) -
      1] - 1];
  }

  cdiff = InterAB[(signed char)SeqFinAB[(int)*LocMaxAB - 1] - 2] - InterAB[(int)
    (((double)(signed char)SeqFinAB[(int)*LocMaxAB - 1] - *MaxValAB) + 1.0) - 1];
  *AberLev1 = fabs(cdiff);
  cdiff = InterCD[(signed char)SeqFinCD[(int)*LocMaxCD - 1] - 2] - InterCD[(int)
    (((double)(signed char)SeqFinCD[(int)*LocMaxCD - 1] - *MaxValCD) + 1.0) - 1];
  *AberLev2 = fabs(cdiff);
  cdiff = InterEF[(signed char)SeqFinEF[(int)*LocMaxEF - 1] - 2] - InterEF[(int)
    (((double)(signed char)SeqFinEF[(int)*LocMaxEF - 1] - *MaxValEF) + 1.0) - 1];
  *AberLev3 = fabs(cdiff);
  *ValsLev1 = *LevDec3;
  *ValsLev2 = *LevDec2;
  *ValsLev3 = *LevDec1;
  *ValsLev21 = InterAB[(int)LocAB_data[(int)rt_roundd_snf((double)LocAB_size[1] /
    2.0) - 1] - 1];
  *ValsLev22 = InterCD[(int)LocCD_data[(int)rt_roundd_snf((double)LocCD_size[1] /
    2.0) - 1] - 1];
  *ValsLev23 = InterEF[(int)LocEF_data[(int)rt_roundd_snf((double)LocEF_size[1] /
    2.0) - 1] - 1];

  /* %      Actualy Receiving Data */
  /* Once the signal was processed the next step is through a */
  /* comparator decide the actual information received. */
  anew = NPPB / 2.0;
  if (rtIsNaN(anew) || rtIsNaN(NPPB)) {
    n = 1;
    anew = rtNaN;
    apnd = Ix->size[1];
  } else if ((NPPB == 0.0) || ((anew < Ix->size[1]) && (NPPB < 0.0)) ||
             ((Ix->size[1] < anew) && (NPPB > 0.0))) {
    n = 0;
    apnd = Ix->size[1];
  } else if (rtIsInf(anew)) {
    n = 1;
    anew = rtNaN;
    apnd = Ix->size[1];
  } else if (rtIsInf(NPPB)) {
    n = 1;
    apnd = Ix->size[1];
  } else {
    ndbl = floor(((double)Ix->size[1] - anew) / NPPB + 0.5);
    apnd = anew + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (double)Ix->size[1];
    } else {
      cdiff = (double)Ix->size[1] - apnd;
    }

    absa = fabs(anew);
    nx = Ix->size[1];
    u1 = nx;
    if (absa >= u1) {
      u1 = absa;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * u1) {
      ndbl++;
      apnd = Ix->size[1];
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

  i4 = EyeMax->size[0] * EyeMax->size[1];
  EyeMax->size[0] = 1;
  EyeMax->size[1] = n;
  emxEnsureCapacity((emxArray__common *)EyeMax, i4, (int)sizeof(double));
  if (n > 0) {
    EyeMax->data[0] = anew;
    if (n > 1) {
      EyeMax->data[n - 1] = apnd;
      nx = (n - 1) / 2;
      for (idx = 1; idx < nx; idx++) {
        cdiff = (double)idx * NPPB;
        EyeMax->data[idx] = anew + cdiff;
        EyeMax->data[(n - idx) - 1] = apnd - cdiff;
      }

      if (nx << 1 == n - 1) {
        EyeMax->data[nx] = (anew + apnd) / 2.0;
      } else {
        cdiff = (double)nx * NPPB;
        EyeMax->data[nx] = anew + cdiff;
        EyeMax->data[nx + 1] = apnd - cdiff;
      }
    }
  }

  i4 = IxRec->size[0] * IxRec->size[1];
  IxRec->size[0] = 1;
  IxRec->size[1] = (int)(2.0 * (double)EyeMax->size[1]);
  emxEnsureCapacity((emxArray__common *)IxRec, i4, (int)sizeof(double));
  loop_ub = (int)(2.0 * (double)EyeMax->size[1]);
  for (i4 = 0; i4 < loop_ub; i4++) {
    IxRec->data[i4] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  i4 = IxRecDef->size[0] * IxRecDef->size[1];
  IxRecDef->size[0] = 1;
  IxRecDef->size[1] = (int)(2.0 * (double)EyeMax->size[1]);
  emxEnsureCapacity((emxArray__common *)IxRecDef, i4, (int)sizeof(double));
  loop_ub = (int)(2.0 * (double)EyeMax->size[1]);
  for (i4 = 0; i4 < loop_ub; i4++) {
    IxRecDef->data[i4] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  ContBit = 2U;
  ContBit1 = 2U;
  for (kk = 0; kk < EyeMax->size[1]; kk++) {
    /* NPPB:length(Ix)                                       %The comparison process will be made for each symbol period */
    /*                  midaux = round(mean(SymLoc(1:round(end/2)))); */
    midaux = NPPB / 2.0;

    /* SymLoc(1); */
    /* An small portion of the income signal is take for evaluation */
    /* Measuring the avarage value of the samples taken */
    /* Verifying the interval for each symbol received. */
    if (Ix->data[(int)((((1.0 + (double)kk) - 1.0) * NPPB + midaux) + 1.0) - 1] <=
        LevelDec1) {
      /* If it is the lowest level the incoming data */
      IxRec->data[(int)ContBit - 2] = 0.0;
      IxRec->data[(int)ContBit - 1] = 0.0;
      ContBit += 2U;

      /* IxRec = [IxRec 0 0];                                   %is 01 (1) */
    } else if ((Ix->data[(int)((((1.0 + (double)kk) - 1.0) * NPPB + midaux) +
                 1.0) - 1] <= LevelDec2) && (Ix->data[(int)((((1.0 + (double)kk)
      - 1.0) * NPPB + midaux) + 1.0) - 1] > LevelDec1)) {
      /* If it is the second level the incoming data */
      IxRec->data[(int)ContBit - 2] = 0.0;
      IxRec->data[(int)ContBit - 1] = 1.0;
      ContBit += 2U;

      /* IxRec = [IxRec 0 1];                                   %is 00 (0) */
    } else if ((Ix->data[(int)((((1.0 + (double)kk) - 1.0) * NPPB + midaux) +
                 1.0) - 1] <= LevelDec3) && (Ix->data[(int)((((1.0 + (double)kk)
      - 1.0) * NPPB + midaux) + 1.0) - 1] > LevelDec2)) {
      /* If it is the tird level the incoming data */
      IxRec->data[(int)ContBit - 2] = 1.0;
      IxRec->data[(int)ContBit - 1] = 1.0;
      ContBit += 2U;

      /* IxRec = [IxRec 1 1];                                   %is 10 (2) */
    } else if (Ix->data[(int)((((1.0 + (double)kk) - 1.0) * NPPB + midaux) + 1.0)
               - 1] > LevelDec3) {
      /* If it is the uper level the incoming data */
      IxRec->data[(int)ContBit - 2] = 1.0;
      IxRec->data[(int)ContBit - 1] = 0.0;
      ContBit += 2U;

      /* IxRec = [IxRec 1 0];                                   %is 11 (3) */
    } else {
      /* If for some misteriose reason neither of previous verification were sucedded */
      IxRec->data[(int)ContBit - 2] = 0.0;
      IxRec->data[(int)ContBit - 1] = 0.0;
      ContBit += 2U;

      /* IxRec = [IxRec 0 0];                                   %by default the current data is set to be 00 (0) */
    }

    /* Verifying the interval for each symbol received. */
    if (Ix->data[(int)((((1.0 + (double)kk) - 1.0) * NPPB + midaux) + 1.0) - 1] <=
        *DecLevDef1) {
      /* If it is the lowest level the incoming data */
      IxRecDef->data[(int)ContBit1 - 2] = 0.0;
      IxRecDef->data[(int)ContBit1 - 1] = 0.0;
      ContBit1 += 2U;

      /* IxRecDef = [IxRecDef 0 0];                             %is 01 (1) */
    } else if ((Ix->data[(int)((((1.0 + (double)kk) - 1.0) * NPPB + midaux) +
                 1.0) - 1] <= *DecLevDef2) && (Ix->data[(int)((((1.0 + (double)
        kk) - 1.0) * NPPB + midaux) + 1.0) - 1] > *DecLevDef1)) {
      /* If it is the second level the incoming data */
      IxRecDef->data[(int)ContBit1 - 2] = 0.0;
      IxRecDef->data[(int)ContBit1 - 1] = 1.0;
      ContBit1 += 2U;

      /* IxRecDef = [IxRecDef 0 1];                             %is 00 (0) */
    } else if ((Ix->data[(int)((((1.0 + (double)kk) - 1.0) * NPPB + midaux) +
                 1.0) - 1] <= *DecLevDef3) && (Ix->data[(int)((((1.0 + (double)
        kk) - 1.0) * NPPB + midaux) + 1.0) - 1] > *DecLevDef2)) {
      /* If it is the tird level the incoming data */
      IxRecDef->data[(int)ContBit1 - 2] = 1.0;
      IxRecDef->data[(int)ContBit1 - 1] = 1.0;
      ContBit1 += 2U;

      /* IxRecDef = [IxRecDef 1 1];                             %is 10 (2) */
    } else if (Ix->data[(int)((((1.0 + (double)kk) - 1.0) * NPPB + midaux) + 1.0)
               - 1] > *DecLevDef3) {
      /* If it is the uper level the incoming data */
      IxRecDef->data[(int)ContBit1 - 2] = 1.0;
      IxRecDef->data[(int)ContBit1 - 1] = 0.0;
      ContBit1 += 2U;

      /* IxRecDef = [IxRecDef 1 0];                             %is 11 (3) */
    } else {
      /* If for some misteriose reason neither of previous verification were sucedded */
      IxRecDef->data[(int)ContBit1 - 2] = 0.0;
      IxRecDef->data[(int)ContBit1 - 1] = 0.0;
      ContBit1 += 2U;

      /* IxRecDef = [IxRecDef 0 0];                             %by default the current data is set to be 00 (0) */
    }
  }

  loop_ub = TxDataMat->size[1];
  i4 = EyeMax->size[0] * EyeMax->size[1];
  EyeMax->size[0] = 1;
  EyeMax->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)EyeMax, i4, (int)sizeof(double));
  for (i4 = 0; i4 < loop_ub; i4++) {
    EyeMax->data[EyeMax->size[0] * i4] = TxDataMat->data[((int)ThisCarr +
      TxDataMat->size[0] * i4) - 1];
  }

  i4 = TxDataMat->size[1];
  i5 = TxDataB->size[0] * TxDataB->size[1];
  TxDataB->size[0] = (int)Nb4Pam;
  TxDataB->size[1] = (int)CurTesSiz;
  emxEnsureCapacity((emxArray__common *)TxDataB, i5, (int)sizeof(double));
  for (idx = 0; idx + 1 <= i4; idx++) {
    TxDataB->data[idx] = EyeMax->data[idx];
  }

  emxFree_real_T(&EyeMax);
  cdiff = 1.0 + 2.0 * SyncPeriod;
  ndbl = (double)TxDataB->size[0] - 2.0 * SyncPeriod;
  if (cdiff > ndbl) {
    i4 = 1;
    i5 = 1;
  } else {
    i4 = (int)cdiff;
    i5 = (int)ndbl + 1;
  }

  i6 = TxDataB->size[1];
  i7 = TxDataB->size[1];
  nx = (i5 - i4) * i7;
  i7 = TxData->size[0] * TxData->size[1];
  TxData->size[0] = 1;
  TxData->size[1] = (int)((double)(i5 - i4) * (double)i6);
  emxEnsureCapacity((emxArray__common *)TxData, i7, (int)sizeof(double));
  for (idx = 0; idx + 1 <= nx; idx++) {
    TxData->data[idx] = TxDataB->data[((i4 + idx % (i5 - i4)) + TxDataB->size[0]
      * (idx / (i5 - i4))) - 1];
  }

  emxFree_real_T(&TxDataB);
  xor(TxData, IxRec, r4);
  BitErr = sum(r4);

  /* Comparison between the Transmited and received and counting the differences */
  xor(TxData, IxRecDef, r4);
  BitErrAux2 = sum(r4);

  /* Comparison between the Transmited and received and counting the differences */
  emxFree_boolean_T(&r4);
  if (BitErr != 0.0) {
    if (BitErrAux2 < BitErr) {
      BitErr = BitErrAux2;
    }
  } else {
    *DecLevDef1 = LevelDec1;
    *DecLevDef2 = LevelDec2;
    *DecLevDef3 = LevelDec3;
  }

  *Ber4PAM = BitErr / ((Nb4Pam - 4.0 * SyncPeriod) * CurTesSiz);
}

/*
 * File trailer for RecDowPam4.c
 *
 * [EOF]
 */

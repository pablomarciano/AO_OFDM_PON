/*
 * File: RecDowDqpsk.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 18:36:28
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowDqpsk.h"
#include "RecDowDqpsk_emxutil.h"
#include "sum.h"
#include "xor.h"
#include "any.h"
#include "hist.h"
#include "linspace.h"
#include "rdivide.h"
#include "repmat.h"
#include "mean.h"

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
 * Arguments    : const emxArray_real_T *EoutA
 *                const emxArray_real_T *EoutB
 *                const emxArray_real_T *EoutC
 *                const emxArray_real_T *EoutD
 *                double T
 *                double Ta
 *                double IfftOrSum
 *                double MaxNumStag
 *                double StuffSampels
 *                double NbDQPSK
 *                double CurTesSiz
 *                double NumAmosCP
 *                double NPPB
 *                double SyncPeriod
 *                const emxArray_real_T *TxDataMat
 *                double ThisCarr
 *                double LevDefDpqsk
 *                double AddCP
 *                double NumCarr
 *                double *AberLevI
 *                double *ValsLevI
 *                double *AberLevQ
 *                double *ValsLevQ
 *                double *BerDQPSK
 *                emxArray_real_T *EoutI
 *                emxArray_real_T *EoutQ
 *                emxArray_real_T *TxDataOdd
 *                emxArray_real_T *TxDataEven
 *                emxArray_real_T *DataOdd
 *                emxArray_real_T *DataEven
 *                double *LocMaxAB
 *                double *MaxValAB
 *                double SeqFinAB[100]
 *                double *QMaxValAB
 *                double *QLocMaxAB
 *                double QSeqFinAB[100]
 *                double QInterAB[100]
 *                double InterAB[100]
 *                emxArray_real_T *IxAuxAB
 *                emxArray_real_T *QIxAuxAB
 * Return Type  : void
 */
void RecDowDqpsk(const emxArray_real_T *EoutA, const emxArray_real_T *EoutB,
                 const emxArray_real_T *EoutC, const emxArray_real_T *EoutD,
                 double T, double Ta, double IfftOrSum, double MaxNumStag,
                 double StuffSampels, double NbDQPSK, double CurTesSiz, double
                 NumAmosCP, double NPPB, double SyncPeriod, const
                 emxArray_real_T *TxDataMat, double ThisCarr, double LevDefDpqsk,
                 double AddCP, double NumCarr, double *AberLevI, double
                 *ValsLevI, double *AberLevQ, double *ValsLevQ, double *BerDQPSK,
                 emxArray_real_T *EoutI, emxArray_real_T *EoutQ, emxArray_real_T
                 *TxDataOdd, emxArray_real_T *TxDataEven, emxArray_real_T
                 *DataOdd, emxArray_real_T *DataEven, double *LocMaxAB, double
                 *MaxValAB, double SeqFinAB[100], double *QMaxValAB, double
                 *QLocMaxAB, double QSeqFinAB[100], double QInterAB[100], double
                 InterAB[100], emxArray_real_T *IxAuxAB, emxArray_real_T
                 *QIxAuxAB)
{
  emxArray_real_T *b_EoutI;
  int i0;
  int loop_ub;
  emxArray_real_T *b_EoutQ;
  emxArray_real_T *EmeaI;
  emxArray_real_T *EmeaQ;
  emxArray_real_T *b_EmeaI;
  emxArray_real_T *b_EmeaQ;
  int idx;
  int nx;
  int n;
  int ix;
  int b_ix;
  double ndbl;
  boolean_T exitg8;
  emxArray_real_T *c_EoutI;
  boolean_T exitg7;
  emxArray_real_T *c_EoutQ;
  double sn;
  double DiffPosI;
  double DiffPosQ;
  int i1;
  int i2;
  boolean_T empty_non_axis_sizes;
  boolean_T guard4 = false;
  boolean_T guard3 = false;
  emxArray_real_T *d_EoutI;
  emxArray_real_T *e_EoutI;
  int i3;
  boolean_T guard2 = false;
  boolean_T guard1 = false;
  emxArray_real_T *d_EoutQ;
  emxArray_real_T *e_EoutQ;
  emxArray_real_T *c_EmeaI;
  double cdiff;
  emxArray_real_T *f_EoutI;
  emxArray_real_T *d_EmeaI;
  emxArray_real_T *f_EoutQ;
  double anew;
  double apnd;
  double absa;
  double u1;
  boolean_T exitg6;
  boolean_T exitg5;
  double EyeAB[100];
  boolean_T exitg4;
  boolean_T exitg3;
  double QEyeAB[100];
  double CountAB;
  double QCountAB;
  boolean_T b_EyeAB[100];
  boolean_T b_QEyeAB[100];
  int SeqIniAB;
  int QSeqIniAB;
  int kk;
  double LevDec3;
  double QLevDec3;
  signed char ii_data[100];
  signed char ii_size[2];
  static const signed char iv0[2] = { 1, 100 };

  boolean_T exitg2;
  boolean_T b_guard2 = false;
  double b_ii_data[100];
  int b_ii_size[2];
  double LevelDec3;
  boolean_T exitg1;
  boolean_T b_guard1 = false;
  int c_ii_size[2];
  double QLevelDec3;
  emxArray_real_T *DataEvenU;
  emxArray_boolean_T *r0;
  double BitErrOdd1;
  double BitErrEven1;
  double BitErrOdd4;
  double BitErrEven4;
  emxInit_real_T(&b_EoutI, 2);
  i0 = b_EoutI->size[0] * b_EoutI->size[1];
  b_EoutI->size[0] = EoutB->size[0];
  b_EoutI->size[1] = EoutB->size[1];
  emxEnsureCapacity((emxArray__common *)b_EoutI, i0, (int)sizeof(double));
  loop_ub = EoutB->size[0] * EoutB->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_EoutI->data[i0] = EoutB->data[i0] - EoutA->data[i0];
  }

  emxInit_real_T(&b_EoutQ, 2);
  i0 = b_EoutQ->size[0] * b_EoutQ->size[1];
  b_EoutQ->size[0] = EoutD->size[0];
  b_EoutQ->size[1] = EoutD->size[1];
  emxEnsureCapacity((emxArray__common *)b_EoutQ, i0, (int)sizeof(double));
  loop_ub = EoutD->size[0] * EoutD->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_EoutQ->data[i0] = EoutD->data[i0] - EoutC->data[i0];
  }

  emxInit_real_T(&EmeaI, 2);
  emxInit_real_T(&EmeaQ, 2);
  emxInit_real_T(&b_EmeaI, 2);
  emxInit_real_T(&b_EmeaQ, 2);
  mean(b_EoutI, EmeaI);
  mean(b_EoutQ, EmeaQ);
  repmat(EmeaI, b_EoutI->size[0], b_EmeaI);
  repmat(EmeaQ, b_EoutQ->size[0], b_EmeaQ);
  i0 = b_EoutI->size[0] * b_EoutI->size[1];
  emxEnsureCapacity((emxArray__common *)b_EoutI, i0, (int)sizeof(double));
  idx = b_EoutI->size[0];
  nx = b_EoutI->size[1];
  loop_ub = idx * nx;
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_EoutI->data[i0] -= b_EmeaI->data[i0];
  }

  i0 = b_EoutQ->size[0] * b_EoutQ->size[1];
  emxEnsureCapacity((emxArray__common *)b_EoutQ, i0, (int)sizeof(double));
  idx = b_EoutQ->size[0];
  nx = b_EoutQ->size[1];
  loop_ub = idx * nx;
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_EoutQ->data[i0] -= b_EmeaQ->data[i0];
  }

  i0 = EmeaI->size[0] * EmeaI->size[1];
  EmeaI->size[0] = 1;
  EmeaI->size[1] = b_EoutI->size[1];
  emxEnsureCapacity((emxArray__common *)EmeaI, i0, (int)sizeof(double));
  n = b_EoutI->size[0];
  for (nx = 0; nx + 1 <= b_EoutI->size[1]; nx++) {
    ix = nx * n;
    b_ix = nx * n + 1;
    idx = ix + n;
    ndbl = b_EoutI->data[ix];
    if (n > 1) {
      if (rtIsNaN(b_EoutI->data[ix])) {
        ix = b_ix;
        exitg8 = false;
        while ((!exitg8) && (ix + 1 <= idx)) {
          b_ix = ix + 1;
          if (!rtIsNaN(b_EoutI->data[ix])) {
            ndbl = b_EoutI->data[ix];
            exitg8 = true;
          } else {
            ix++;
          }
        }
      }

      if (b_ix < idx) {
        while (b_ix + 1 <= idx) {
          if (b_EoutI->data[b_ix] > ndbl) {
            ndbl = b_EoutI->data[b_ix];
          }

          b_ix++;
        }
      }
    }

    EmeaI->data[nx] = ndbl;
  }

  i0 = EmeaQ->size[0] * EmeaQ->size[1];
  EmeaQ->size[0] = 1;
  EmeaQ->size[1] = b_EoutQ->size[1];
  emxEnsureCapacity((emxArray__common *)EmeaQ, i0, (int)sizeof(double));
  n = b_EoutQ->size[0];
  for (nx = 0; nx + 1 <= b_EoutQ->size[1]; nx++) {
    ix = nx * n;
    b_ix = nx * n + 1;
    idx = ix + n;
    ndbl = b_EoutQ->data[ix];
    if (n > 1) {
      if (rtIsNaN(b_EoutQ->data[ix])) {
        ix = b_ix;
        exitg7 = false;
        while ((!exitg7) && (ix + 1 <= idx)) {
          b_ix = ix + 1;
          if (!rtIsNaN(b_EoutQ->data[ix])) {
            ndbl = b_EoutQ->data[ix];
            exitg7 = true;
          } else {
            ix++;
          }
        }
      }

      if (b_ix < idx) {
        while (b_ix + 1 <= idx) {
          if (b_EoutQ->data[b_ix] > ndbl) {
            ndbl = b_EoutQ->data[b_ix];
          }

          b_ix++;
        }
      }
    }

    EmeaQ->data[nx] = ndbl;
  }

  emxInit_real_T(&c_EoutI, 2);
  repmat(EmeaI, b_EoutI->size[0], b_EmeaI);
  repmat(EmeaQ, b_EoutQ->size[0], b_EmeaQ);
  i0 = c_EoutI->size[0] * c_EoutI->size[1];
  c_EoutI->size[0] = b_EoutI->size[0];
  c_EoutI->size[1] = b_EoutI->size[1];
  emxEnsureCapacity((emxArray__common *)c_EoutI, i0, (int)sizeof(double));
  loop_ub = b_EoutI->size[0] * b_EoutI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    c_EoutI->data[i0] = b_EoutI->data[i0];
  }

  emxInit_real_T(&c_EoutQ, 2);
  rdivide(c_EoutI, b_EmeaI, b_EoutI);

  /* Normalizing the signal */
  i0 = c_EoutQ->size[0] * c_EoutQ->size[1];
  c_EoutQ->size[0] = b_EoutQ->size[0];
  c_EoutQ->size[1] = b_EoutQ->size[1];
  emxEnsureCapacity((emxArray__common *)c_EoutQ, i0, (int)sizeof(double));
  loop_ub = b_EoutQ->size[0] * b_EoutQ->size[1];
  emxFree_real_T(&c_EoutI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    c_EoutQ->data[i0] = b_EoutQ->data[i0];
  }

  rdivide(c_EoutQ, b_EmeaQ, b_EoutQ);

  /* Normalizing the signal */
  /* EoutAuxF = 20*log10(abs(fftshift(fft(Ix)./length(Ix)))); */
  /* for jj=1:size(Ix,2) */
  /* VetElecPowerI(CurrentTest,ThisCarr,jj)= MeasPower(EoutI(:,jj)); */
  /* VetElecPowerQ(CurrentTest,ThisCarr,jj)= MeasPower(EoutQ(:,jj)); */
  /* VetElecPower(CurrentTest,ThisCarr,jj)= MeasPower(Ix(:,jj)); */
  /* [VetOptiPower(CurrentTest,ThisCarr,jj),~]= findpeaks(EoutAuxF(:,jj),'SortStr','descend','NPeaks',1); */
  /* end */
  /* SyncAuxI   = EoutI(IniSyncPos:SyncPos);                        %Selecting just the symbol to synchronize */
  /* SyncAuxQ   = EoutQ(IniSyncPos:SyncPos);                        %Selecting just the symbol to synchronize */
  /*                  PrintInfo(Ploting*22,t(IniSyncPos:SyncPos),EoutI(IniSyncPos:SyncPos),SyncSymb(IniSyncPos:SyncPos),EoutA(IniSyncPos:SyncPos),EoutB(IniSyncPos:SyncPos)); */
  /* SyncedAux  = SyncSymb(IniSyncPos:SyncPos);                     %Selecting just the symbol to synchronize */
  /*                    Synchronizing */
  /* This synchronization process is based on the mean expected */
  /* value. That means, the information mean value should be within */
  /* one period of symbol. Thus, the mean value of the received */
  /* signal is acquired and compare of the known sync-word to */
  /* verify if this mean value is at the right possition. Which is */
  /* the midel point (peak) of the highest level at the sync period */
  /* SyncAuxI(EoutI(IniSyncPos:SyncPos)<0.5*max((EoutI(IniSyncPos:SyncPos))))               = 0;   %To keep the mean value above zero anything under is neglected */
  /* SyncAuxQ(EoutQ(IniSyncPos:SyncPos)<0.5*max((EoutQ(IniSyncPos:SyncPos))))               = 0;   %To keep the mean value above zero anything under is neglected */
  /* SyncAuxI(SyncAuxI>=mean(SyncAuxI)) = 1;   %Adding a flag to the first sample of the received mean value */
  /* SyncAuxQ(SyncAuxQ>=mean(SyncAuxQ)) = 1;   %Adding a flag to the first sample of the received mean value */
  /* SyncAuxI(SyncAuxI<mean(SyncAuxI))  = -1;  %All the others samples at set to the lowest level */
  /* SyncAuxQ(SyncAuxQ<mean(SyncAuxQ))  = -1;  %All the others samples at set to the lowest level */
  /* PosToSynI  = find(ismember(SyncAuxI,1));                       %Finding where is the location of the samples to synchronize */
  /* PosToSynQ  = find(ismember(SyncAuxQ,1));                       %Finding where is the location of the samples to synchronize */
  /* PosSynced = find(ismember(SyncedAux,1));                       %Finding where is the location of the samples to synchronize */
  /* DiffPosI = ExtDel*(PosToSynI(round(end/2)) - PosSynced(round(end/2)));  %Accounting the peak (midel point) displacement */
  /* DiffPosQ = ExtDel*(PosToSynQ(round(end/2)) - PosSynced(round(end/2)));  %Accounting the peak (midel point) displacement */
  sn = 0.5 * (rt_powd_snf(0.5, MaxNumStag) - 1.0) / -0.5;
  DiffPosI = rt_roundd_snf(sn / (3.0 / rt_powd_snf(2.55, IfftOrSum)) * T / Ta);
  DiffPosQ = rt_roundd_snf(sn / (3.0 / rt_powd_snf(2.55, IfftOrSum)) * T / Ta);
  emxFree_real_T(&c_EoutQ);
  if (DiffPosI + 1.0 > b_EoutI->size[0]) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = (int)(DiffPosI + 1.0) - 1;
    i1 = b_EoutI->size[0];
  }

  if (1.0 > DiffPosI) {
    loop_ub = 0;
  } else {
    loop_ub = (int)DiffPosI;
  }

  i2 = b_EoutI->size[1];
  if (!((i1 - i0 == 0) || (i2 == 0))) {
    b_ix = b_EoutI->size[1];
  } else {
    i2 = b_EoutI->size[1];
    if (!((loop_ub == 0) || (i2 == 0))) {
      b_ix = b_EoutI->size[1];
    } else {
      i2 = b_EoutI->size[1];
      if (i2 > 0) {
        b_ix = b_EoutI->size[1];
      } else {
        b_ix = 0;
      }

      i2 = b_EoutI->size[1];
      if (i2 > b_ix) {
        b_ix = b_EoutI->size[1];
      }
    }
  }

  empty_non_axis_sizes = (b_ix == 0);
  guard4 = false;
  if (empty_non_axis_sizes) {
    guard4 = true;
  } else {
    i2 = b_EoutI->size[1];
    if (!((i1 - i0 == 0) || (i2 == 0))) {
      guard4 = true;
    } else {
      nx = -1;
    }
  }

  if (guard4) {
    nx = (i1 - i0) - 1;
  }

  guard3 = false;
  if (empty_non_axis_sizes) {
    guard3 = true;
  } else {
    i2 = b_EoutI->size[1];
    if (!((loop_ub == 0) || (i2 == 0))) {
      guard3 = true;
    } else {
      ix = 0;
    }
  }

  if (guard3) {
    ix = loop_ub;
  }

  emxInit_real_T(&d_EoutI, 2);
  idx = b_EoutI->size[1];
  i2 = d_EoutI->size[0] * d_EoutI->size[1];
  d_EoutI->size[0] = i1 - i0;
  d_EoutI->size[1] = idx;
  emxEnsureCapacity((emxArray__common *)d_EoutI, i2, (int)sizeof(double));
  for (i2 = 0; i2 < idx; i2++) {
    n = i1 - i0;
    for (i3 = 0; i3 < n; i3++) {
      d_EoutI->data[i3 + d_EoutI->size[0] * i2] = b_EoutI->data[(i0 + i3) +
        b_EoutI->size[0] * i2];
    }
  }

  emxInit_real_T(&e_EoutI, 2);
  idx = b_EoutI->size[1];
  i0 = e_EoutI->size[0] * e_EoutI->size[1];
  e_EoutI->size[0] = loop_ub;
  e_EoutI->size[1] = idx;
  emxEnsureCapacity((emxArray__common *)e_EoutI, i0, (int)sizeof(double));
  for (i0 = 0; i0 < idx; i0++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      e_EoutI->data[i1 + e_EoutI->size[0] * i0] = b_EoutI->data[i1 +
        b_EoutI->size[0] * i0];
    }
  }

  i0 = b_EoutI->size[0] * b_EoutI->size[1];
  b_EoutI->size[0] = (nx + ix) + 1;
  b_EoutI->size[1] = b_ix;
  emxEnsureCapacity((emxArray__common *)b_EoutI, i0, (int)sizeof(double));
  for (i0 = 0; i0 < b_ix; i0++) {
    loop_ub = nx + 1;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_EoutI->data[i1 + b_EoutI->size[0] * i0] = d_EoutI->data[i1 + (nx + 1) *
        i0];
    }
  }

  emxFree_real_T(&d_EoutI);
  for (i0 = 0; i0 < b_ix; i0++) {
    for (i1 = 0; i1 < ix; i1++) {
      b_EoutI->data[((i1 + nx) + b_EoutI->size[0] * i0) + 1] = e_EoutI->data[i1
        + ix * i0];
    }
  }

  emxFree_real_T(&e_EoutI);

  /* Shift based on sampling sliding */
  if (DiffPosQ + 1.0 > b_EoutQ->size[0]) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = (int)(DiffPosQ + 1.0) - 1;
    i1 = b_EoutQ->size[0];
  }

  if (1.0 > DiffPosQ) {
    loop_ub = 0;
  } else {
    loop_ub = (int)DiffPosQ;
  }

  i2 = b_EoutQ->size[1];
  if (!((i1 - i0 == 0) || (i2 == 0))) {
    b_ix = b_EoutQ->size[1];
  } else {
    i2 = b_EoutQ->size[1];
    if (!((loop_ub == 0) || (i2 == 0))) {
      b_ix = b_EoutQ->size[1];
    } else {
      i2 = b_EoutQ->size[1];
      if (i2 > 0) {
        b_ix = b_EoutQ->size[1];
      } else {
        b_ix = 0;
      }

      i2 = b_EoutQ->size[1];
      if (i2 > b_ix) {
        b_ix = b_EoutQ->size[1];
      }
    }
  }

  empty_non_axis_sizes = (b_ix == 0);
  guard2 = false;
  if (empty_non_axis_sizes) {
    guard2 = true;
  } else {
    i2 = b_EoutQ->size[1];
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
    i2 = b_EoutQ->size[1];
    if (!((loop_ub == 0) || (i2 == 0))) {
      guard1 = true;
    } else {
      ix = 0;
    }
  }

  if (guard1) {
    ix = loop_ub;
  }

  emxInit_real_T(&d_EoutQ, 2);
  idx = b_EoutQ->size[1];
  i2 = d_EoutQ->size[0] * d_EoutQ->size[1];
  d_EoutQ->size[0] = i1 - i0;
  d_EoutQ->size[1] = idx;
  emxEnsureCapacity((emxArray__common *)d_EoutQ, i2, (int)sizeof(double));
  for (i2 = 0; i2 < idx; i2++) {
    n = i1 - i0;
    for (i3 = 0; i3 < n; i3++) {
      d_EoutQ->data[i3 + d_EoutQ->size[0] * i2] = b_EoutQ->data[(i0 + i3) +
        b_EoutQ->size[0] * i2];
    }
  }

  emxInit_real_T(&e_EoutQ, 2);
  idx = b_EoutQ->size[1];
  i0 = e_EoutQ->size[0] * e_EoutQ->size[1];
  e_EoutQ->size[0] = loop_ub;
  e_EoutQ->size[1] = idx;
  emxEnsureCapacity((emxArray__common *)e_EoutQ, i0, (int)sizeof(double));
  for (i0 = 0; i0 < idx; i0++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      e_EoutQ->data[i1 + e_EoutQ->size[0] * i0] = b_EoutQ->data[i1 +
        b_EoutQ->size[0] * i0];
    }
  }

  i0 = b_EoutQ->size[0] * b_EoutQ->size[1];
  b_EoutQ->size[0] = (nx + ix) + 1;
  b_EoutQ->size[1] = b_ix;
  emxEnsureCapacity((emxArray__common *)b_EoutQ, i0, (int)sizeof(double));
  for (i0 = 0; i0 < b_ix; i0++) {
    loop_ub = nx + 1;
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_EoutQ->data[i1 + b_EoutQ->size[0] * i0] = d_EoutQ->data[i1 + (nx + 1) *
        i0];
    }
  }

  emxFree_real_T(&d_EoutQ);
  for (i0 = 0; i0 < b_ix; i0++) {
    for (i1 = 0; i1 < ix; i1++) {
      b_EoutQ->data[((i1 + nx) + b_EoutQ->size[0] * i0) + 1] = e_EoutQ->data[i1
        + ix * i0];
    }
  }

  emxFree_real_T(&e_EoutQ);

  /* Shift based on sampling sliding */
  /* if DiffPosI>=0%If the difference is positive, left-shift... */
  /* EoutI = ifft(fft(EoutI).*exp(1j*2*pi*f*(DiffPosI*Ta))); %Shift based on time change */
  /* EoutI = [EoutI(DiffPosI+1:end) EoutI(1:DiffPosI)];   %Shift based on sampling sliding */
  /* EoutQ = [EoutQ(DiffPosI+1:end) EoutQ(1:DiffPosI)];   %Shift based on sampling sliding */
  /* else%... but if the difference is negative, right-shift */
  /* EoutI = ifft(fft(EoutI).*exp(-1j*2*pi*f*(DiffPosI*Ta))); %Shift based on time change */
  /* EoutI = [EoutI(end+DiffPosI+1:end) EoutI(1:end+DiffPosI)]; %Shift based on sampling sliding */
  /* EoutQ = [EoutQ(end+DiffPosI+1:end) EoutQ(1:end+DiffPosI)]; %Shift based on sampling sliding */
  /* end */
  /*     %%                   Plot for Qualitative analizes */
  /*                               PrintInfo(Ploting*22,t(IniSyncPos:SyncPos),EoutI(IniSyncPos... */
  /*                               :SyncPos),SyncSymb(IniSyncPos:SyncPos),EoutA(IniSyncPos:... */
  /*                                                        SyncPos),EoutB(IniSyncPos:SyncPos)); */
  /*                               PrintInfo(Ploting*22,t(IniSyncPos:SyncPos),EoutQ(IniSyncPos... */
  /*                               :SyncPos),SyncSymb(IniSyncPos:SyncPos),EoutC(IniSyncPos:... */
  /*                                                        SyncPos),EoutD(IniSyncPos:SyncPos)); */
  /*     %% Removing CP */
  if (AddCP != 0.0) {
    ndbl = (double)b_EoutI->size[0] - StuffSampels;
    if (1.0 > ndbl) {
      i0 = 0;
    } else {
      i0 = (int)ndbl;
    }

    i1 = b_EoutI->size[1];
    nx = i0 * i1;
    i1 = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_EmeaI->size[0] = (int)(2.0 * NumAmosCP + NPPB);
    b_EmeaI->size[1] = (int)(NbDQPSK / 2.0 * CurTesSiz);
    emxEnsureCapacity((emxArray__common *)b_EmeaI, i1, (int)sizeof(double));
    for (idx = 0; idx + 1 <= nx; idx++) {
      b_EmeaI->data[idx] = b_EoutI->data[idx % i0 + b_EoutI->size[0] * (idx / i0)];
    }

    ndbl = (double)b_EmeaI->size[0] - NumAmosCP;
    if (1.0 + NumAmosCP > ndbl) {
      i0 = 0;
      i1 = 0;
    } else {
      i0 = (int)(1.0 + NumAmosCP) - 1;
      i1 = (int)ndbl;
    }

    emxInit_real_T(&c_EmeaI, 2);
    idx = b_EmeaI->size[1];
    i2 = c_EmeaI->size[0] * c_EmeaI->size[1];
    c_EmeaI->size[0] = i1 - i0;
    c_EmeaI->size[1] = idx;
    emxEnsureCapacity((emxArray__common *)c_EmeaI, i2, (int)sizeof(double));
    for (i2 = 0; i2 < idx; i2++) {
      loop_ub = i1 - i0;
      for (i3 = 0; i3 < loop_ub; i3++) {
        c_EmeaI->data[i3 + c_EmeaI->size[0] * i2] = b_EmeaI->data[(i0 + i3) +
          b_EmeaI->size[0] * i2];
      }
    }

    i0 = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_EmeaI->size[0] = c_EmeaI->size[0];
    b_EmeaI->size[1] = c_EmeaI->size[1];
    emxEnsureCapacity((emxArray__common *)b_EmeaI, i0, (int)sizeof(double));
    loop_ub = c_EmeaI->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      n = c_EmeaI->size[0];
      for (i1 = 0; i1 < n; i1++) {
        b_EmeaI->data[i1 + b_EmeaI->size[0] * i0] = c_EmeaI->data[i1 +
          c_EmeaI->size[0] * i0];
      }
    }

    emxFree_real_T(&c_EmeaI);
    i0 = b_EmeaQ->size[0] * b_EmeaQ->size[1];
    b_EmeaQ->size[0] = b_EmeaI->size[0];
    b_EmeaQ->size[1] = b_EmeaI->size[1];
    emxEnsureCapacity((emxArray__common *)b_EmeaQ, i0, (int)sizeof(double));
    loop_ub = b_EmeaI->size[0] * b_EmeaI->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_EmeaQ->data[i0] = b_EmeaI->data[i0];
    }

    nx = b_EmeaI->size[0] * b_EmeaI->size[1];
    i0 = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_EmeaI->size[0] = (int)(NPPB * (NbDQPSK / 2.0));
    b_EmeaI->size[1] = (int)CurTesSiz;
    emxEnsureCapacity((emxArray__common *)b_EmeaI, i0, (int)sizeof(double));
    for (idx = 0; idx + 1 <= nx; idx++) {
      b_EmeaI->data[idx] = b_EmeaQ->data[idx];
    }

    i0 = b_EoutI->size[0] * b_EoutI->size[1];
    b_EoutI->size[0] = b_EmeaI->size[0];
    b_EoutI->size[1] = b_EmeaI->size[1];
    emxEnsureCapacity((emxArray__common *)b_EoutI, i0, (int)sizeof(double));
    loop_ub = b_EmeaI->size[0] * b_EmeaI->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_EoutI->data[i0] = b_EmeaI->data[i0];
    }

    ndbl = (double)b_EoutQ->size[0] - StuffSampels;
    if (1.0 > ndbl) {
      i0 = 0;
    } else {
      i0 = (int)ndbl;
    }

    i1 = b_EoutQ->size[1];
    nx = i0 * i1;
    i1 = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_EmeaI->size[0] = (int)(2.0 * NumAmosCP + NPPB);
    b_EmeaI->size[1] = (int)(NbDQPSK / 2.0 * CurTesSiz);
    emxEnsureCapacity((emxArray__common *)b_EmeaI, i1, (int)sizeof(double));
    for (idx = 0; idx + 1 <= nx; idx++) {
      b_EmeaI->data[idx] = b_EoutQ->data[idx % i0 + b_EoutQ->size[0] * (idx / i0)];
    }

    ndbl = (double)b_EmeaI->size[0] - NumAmosCP;
    if (1.0 + NumAmosCP > ndbl) {
      i0 = 0;
      i1 = 0;
    } else {
      i0 = (int)(1.0 + NumAmosCP) - 1;
      i1 = (int)ndbl;
    }

    emxInit_real_T(&d_EmeaI, 2);
    idx = b_EmeaI->size[1];
    i2 = d_EmeaI->size[0] * d_EmeaI->size[1];
    d_EmeaI->size[0] = i1 - i0;
    d_EmeaI->size[1] = idx;
    emxEnsureCapacity((emxArray__common *)d_EmeaI, i2, (int)sizeof(double));
    for (i2 = 0; i2 < idx; i2++) {
      loop_ub = i1 - i0;
      for (i3 = 0; i3 < loop_ub; i3++) {
        d_EmeaI->data[i3 + d_EmeaI->size[0] * i2] = b_EmeaI->data[(i0 + i3) +
          b_EmeaI->size[0] * i2];
      }
    }

    i0 = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_EmeaI->size[0] = d_EmeaI->size[0];
    b_EmeaI->size[1] = d_EmeaI->size[1];
    emxEnsureCapacity((emxArray__common *)b_EmeaI, i0, (int)sizeof(double));
    loop_ub = d_EmeaI->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      n = d_EmeaI->size[0];
      for (i1 = 0; i1 < n; i1++) {
        b_EmeaI->data[i1 + b_EmeaI->size[0] * i0] = d_EmeaI->data[i1 +
          d_EmeaI->size[0] * i0];
      }
    }

    emxFree_real_T(&d_EmeaI);
    i0 = b_EmeaQ->size[0] * b_EmeaQ->size[1];
    b_EmeaQ->size[0] = b_EmeaI->size[0];
    b_EmeaQ->size[1] = b_EmeaI->size[1];
    emxEnsureCapacity((emxArray__common *)b_EmeaQ, i0, (int)sizeof(double));
    loop_ub = b_EmeaI->size[0] * b_EmeaI->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_EmeaQ->data[i0] = b_EmeaI->data[i0];
    }

    nx = b_EmeaI->size[0] * b_EmeaI->size[1];
    i0 = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_EmeaI->size[0] = (int)(NPPB * (NbDQPSK / 2.0));
    b_EmeaI->size[1] = (int)CurTesSiz;
    emxEnsureCapacity((emxArray__common *)b_EmeaI, i0, (int)sizeof(double));
    for (idx = 0; idx + 1 <= nx; idx++) {
      b_EmeaI->data[idx] = b_EmeaQ->data[idx];
    }

    i0 = b_EoutQ->size[0] * b_EoutQ->size[1];
    b_EoutQ->size[0] = b_EmeaI->size[0];
    b_EoutQ->size[1] = b_EmeaI->size[1];
    emxEnsureCapacity((emxArray__common *)b_EoutQ, i0, (int)sizeof(double));
    loop_ub = b_EmeaI->size[0] * b_EmeaI->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_EoutQ->data[i0] = b_EmeaI->data[i0];
    }
  }

  emxFree_real_T(&b_EmeaQ);

  /*     %% Taking the sampling the EVM meassurement */
  /* clear IxAux; */
  /* PosAuxEout1 = NPPB/2:NPPB:length(EoutI);%Varriable respossible to take just the samples at the middle of the symbol */
  /* PosAuxEout2 = ((NPPB/2)+(NPPB/4)):NPPB:length(EoutI);%Varriable respossible to take just the samples at the middle of the symbol */
  /* PosAuxEout3 = ((NPPB/2)-(NPPB/4)):NPPB:length(EoutI);%Varriable respossible to take just the samples at the middle of the symbol */
  /* IxAux1      = EoutI(PosAuxEout1) + 1j.*EoutQ(PosAuxEout1);    %Normalizing the reference */
  /* IxAux2      = EoutI(PosAuxEout2) + 1j.*EoutQ(PosAuxEout2);    %Normalizing the reference */
  /* IxAux3      = EoutI(PosAuxEout3) + 1j.*EoutQ(PosAuxEout3);    %Normalizing the reference */
  /* a=a+0; */
  /* EvmMatRecA(1,:) = IxAux1;                       %Taking just the middle samples as references */
  /* EvmMatRecA(2,:) = IxAux2;                       %Taking just the middle samples as references */
  /* EvmMatRecA(3,:) = IxAux3;                       %Taking just the middle samples as references */
  /* EvmMatRecA(4,:) = IxAux1;                       %Taking just the middle samples as references */
  /* [EvmDBA(1), EvmPerA(1), EvmRmsA(1) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1 ); */
  /* [EvmDBA(2), EvmPerA(2), EvmRmsA(2) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux2 ); */
  /* [EvmDBA(3), EvmPerA(3), EvmRmsA(3) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux3 ); */
  /* [EvmDBA(4), EvmPerA(4), EvmRmsA(4) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1 ); */
  /* [EvmDBJA(1),EvmPerJA(1),EvmRmsJA(1)] = evm1(4,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1); */
  /* [EvmDBJA(2),EvmPerJA(2),EvmRmsJA(2)] = evm1(4,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux2); */
  /* [EvmDBJA(3),EvmPerJA(3),EvmRmsJA(3)] = evm1(4,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux3); */
  /* [EvmDBJA(4),EvmPerJA(4),EvmRmsJA(4)] = evm1(4,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1); */
  /*     %% */
  /*                  figure;plot(t(1:length(E_rec3)),abs(E_rec3),t(1:length(EoutQ)),EoutQ,t(1:length(EoutI)),EoutI);set(gcf,'units','normalized','outerposition',[0 0 0.5 1]); */
  /* One important step on this project was the confirmation of our */
  /* results from a closed and theoretical equation that relates */
  /* the income optical field witht its respective data (as */
  /* descrived above in the receiving process). The result from */
  /* this equation was further compared with the result from the */
  /* MZ-Interferometer as an proof of concept. This equation can be */
  /* found at the book of Optical Fiber Telecommunications V B, */
  /* which one of the authors is Ivan P. Kaminow at the page 144. */
  /*                                  taux = t(1:length(E_rec3)); */
  /*                                  faux = time2freq(taux); */
  /*                                  Ui = real(exp(1j*pi/4).*E_rec3.*conj(ifft(fft(E_rec3).*exp(-... */
  /*                                      1j*2*pi*faux*T))));%The data at odd position */
  /*                                  Ui = Ui./max(abs(Ui));                                         %Normalizing the signal */
  /*                                  Uq = imag(exp(1j*pi/4).*E_rec3.*conj(ifft(fft(E_rec3).*exp(-... */
  /*                                      1j*2*pi*faux*T))));%The data at the even position */
  /*                                  Uq = Uq./max(abs(Uq));                                         %Normalizing the signal */
  /* ########################################################################## */
  ndbl = 1.0 + SyncPeriod * NPPB;
  cdiff = (double)b_EoutI->size[0] - SyncPeriod * NPPB;
  if (ndbl > cdiff) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = (int)ndbl - 1;
    i1 = (int)cdiff;
  }

  emxInit_real_T(&f_EoutI, 2);
  idx = b_EoutI->size[1];
  i2 = f_EoutI->size[0] * f_EoutI->size[1];
  f_EoutI->size[0] = i1 - i0;
  f_EoutI->size[1] = idx;
  emxEnsureCapacity((emxArray__common *)f_EoutI, i2, (int)sizeof(double));
  for (i2 = 0; i2 < idx; i2++) {
    loop_ub = i1 - i0;
    for (i3 = 0; i3 < loop_ub; i3++) {
      f_EoutI->data[i3 + f_EoutI->size[0] * i2] = b_EoutI->data[(i0 + i3) +
        b_EoutI->size[0] * i2];
    }
  }

  i0 = b_EoutI->size[0] * b_EoutI->size[1];
  b_EoutI->size[0] = f_EoutI->size[0];
  b_EoutI->size[1] = f_EoutI->size[1];
  emxEnsureCapacity((emxArray__common *)b_EoutI, i0, (int)sizeof(double));
  loop_ub = f_EoutI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    n = f_EoutI->size[0];
    for (i1 = 0; i1 < n; i1++) {
      b_EoutI->data[i1 + b_EoutI->size[0] * i0] = f_EoutI->data[i1 +
        f_EoutI->size[0] * i0];
    }
  }

  emxFree_real_T(&f_EoutI);
  cdiff = (double)b_EoutI->size[0] * (double)b_EoutI->size[1];
  nx = b_EoutI->size[0] * b_EoutI->size[1];
  i0 = EoutI->size[0] * EoutI->size[1];
  EoutI->size[0] = 1;
  EoutI->size[1] = (int)cdiff;
  emxEnsureCapacity((emxArray__common *)EoutI, i0, (int)sizeof(double));
  for (idx = 0; idx + 1 <= nx; idx++) {
    EoutI->data[idx] = b_EoutI->data[idx];
  }

  emxFree_real_T(&b_EoutI);
  ndbl = 1.0 + SyncPeriod * NPPB;
  cdiff = (double)b_EoutQ->size[0] - SyncPeriod * NPPB;
  if (ndbl > cdiff) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = (int)ndbl - 1;
    i1 = (int)cdiff;
  }

  emxInit_real_T(&f_EoutQ, 2);
  idx = b_EoutQ->size[1];
  i2 = f_EoutQ->size[0] * f_EoutQ->size[1];
  f_EoutQ->size[0] = i1 - i0;
  f_EoutQ->size[1] = idx;
  emxEnsureCapacity((emxArray__common *)f_EoutQ, i2, (int)sizeof(double));
  for (i2 = 0; i2 < idx; i2++) {
    loop_ub = i1 - i0;
    for (i3 = 0; i3 < loop_ub; i3++) {
      f_EoutQ->data[i3 + f_EoutQ->size[0] * i2] = b_EoutQ->data[(i0 + i3) +
        b_EoutQ->size[0] * i2];
    }
  }

  i0 = b_EoutQ->size[0] * b_EoutQ->size[1];
  b_EoutQ->size[0] = f_EoutQ->size[0];
  b_EoutQ->size[1] = f_EoutQ->size[1];
  emxEnsureCapacity((emxArray__common *)b_EoutQ, i0, (int)sizeof(double));
  loop_ub = f_EoutQ->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    n = f_EoutQ->size[0];
    for (i1 = 0; i1 < n; i1++) {
      b_EoutQ->data[i1 + b_EoutQ->size[0] * i0] = f_EoutQ->data[i1 +
        f_EoutQ->size[0] * i0];
    }
  }

  emxFree_real_T(&f_EoutQ);
  cdiff = (double)b_EoutQ->size[0] * (double)b_EoutQ->size[1];
  nx = b_EoutQ->size[0] * b_EoutQ->size[1];
  i0 = EoutQ->size[0] * EoutQ->size[1];
  EoutQ->size[0] = 1;
  EoutQ->size[1] = (int)cdiff;
  emxEnsureCapacity((emxArray__common *)EoutQ, i0, (int)sizeof(double));
  for (idx = 0; idx + 1 <= nx; idx++) {
    EoutQ->data[idx] = b_EoutQ->data[idx];
  }

  emxFree_real_T(&b_EoutQ);
  anew = NPPB / 2.0;
  if (rtIsNaN(anew) || rtIsNaN(NPPB)) {
    n = 1;
    anew = rtNaN;
    apnd = EoutI->size[1];
  } else if ((NPPB == 0.0) || ((anew < EoutI->size[1]) && (NPPB < 0.0)) ||
             ((EoutI->size[1] < anew) && (NPPB > 0.0))) {
    n = 0;
    apnd = EoutI->size[1];
  } else if (rtIsInf(anew)) {
    n = 1;
    anew = rtNaN;
    apnd = EoutI->size[1];
  } else if (rtIsInf(NPPB)) {
    n = 1;
    apnd = EoutI->size[1];
  } else {
    ndbl = floor(((double)EoutI->size[1] - anew) / NPPB + 0.5);
    apnd = anew + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (double)EoutI->size[1];
    } else {
      cdiff = (double)EoutI->size[1] - apnd;
    }

    absa = fabs(anew);
    nx = EoutI->size[1];
    u1 = nx;
    if (absa >= u1) {
      u1 = absa;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * u1) {
      ndbl++;
      apnd = EoutI->size[1];
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

  i0 = EmeaI->size[0] * EmeaI->size[1];
  EmeaI->size[0] = 1;
  EmeaI->size[1] = n;
  emxEnsureCapacity((emxArray__common *)EmeaI, i0, (int)sizeof(double));
  if (n > 0) {
    EmeaI->data[0] = anew;
    if (n > 1) {
      EmeaI->data[n - 1] = apnd;
      nx = (n - 1) / 2;
      for (idx = 1; idx < nx; idx++) {
        cdiff = (double)idx * NPPB;
        EmeaI->data[idx] = anew + cdiff;
        EmeaI->data[(n - idx) - 1] = apnd - cdiff;
      }

      if (nx << 1 == n - 1) {
        EmeaI->data[nx] = (anew + apnd) / 2.0;
      } else {
        cdiff = (double)nx * NPPB;
        EmeaI->data[nx] = anew + cdiff;
        EmeaI->data[nx + 1] = apnd - cdiff;
      }
    }
  }

  /* Possition of the central samples - but the number of samples per symbol is even ???? */
  /* IxAux = EoutI(PosIx);                                             %From the main received signal just a few samples are taken for further evaluation */
  /* The number of boxes to be filled up on the histogram process */
  /* At this process each eye will be evaluated separetelly. It is */
  /* important to remember that the PAM4 has 4 levels, which means */
  /* three level of decissions that are exaclty the center of the */
  /* eye diagram. */
  i0 = IxAuxAB->size[0] * IxAuxAB->size[1];
  IxAuxAB->size[0] = 1;
  IxAuxAB->size[1] = EmeaI->size[1];
  emxEnsureCapacity((emxArray__common *)IxAuxAB, i0, (int)sizeof(double));
  loop_ub = EmeaI->size[0] * EmeaI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    IxAuxAB->data[i0] = EoutI->data[(int)EmeaI->data[i0] - 1];
  }

  /* Taking just those values relative to the uper eye */
  nx = 1;
  n = EoutI->size[1];
  ndbl = EoutI->data[0];
  if (EoutI->size[1] > 1) {
    if (rtIsNaN(EoutI->data[0])) {
      ix = 2;
      exitg6 = false;
      while ((!exitg6) && (ix <= n)) {
        nx = ix;
        if (!rtIsNaN(EoutI->data[ix - 1])) {
          ndbl = EoutI->data[ix - 1];
          exitg6 = true;
        } else {
          ix++;
        }
      }
    }

    if (nx < EoutI->size[1]) {
      while (nx + 1 <= n) {
        if (EoutI->data[nx] < ndbl) {
          ndbl = EoutI->data[nx];
        }

        nx++;
      }
    }
  }

  nx = 1;
  n = EoutI->size[1];
  cdiff = EoutI->data[0];
  if (EoutI->size[1] > 1) {
    if (rtIsNaN(EoutI->data[0])) {
      ix = 2;
      exitg5 = false;
      while ((!exitg5) && (ix <= n)) {
        nx = ix;
        if (!rtIsNaN(EoutI->data[ix - 1])) {
          cdiff = EoutI->data[ix - 1];
          exitg5 = true;
        } else {
          ix++;
        }
      }
    }

    if (nx < EoutI->size[1]) {
      while (nx + 1 <= n) {
        if (EoutI->data[nx] > cdiff) {
          cdiff = EoutI->data[nx];
        }

        nx++;
      }
    }
  }

  linspace(0.7 * ndbl, 0.7 * cdiff, InterAB);

  /* Building the histogram boxes */
  hist(IxAuxAB, InterAB, EyeAB);

  /* filling up the boxes with samples that fit on them. */
  i0 = QIxAuxAB->size[0] * QIxAuxAB->size[1];
  QIxAuxAB->size[0] = 1;
  QIxAuxAB->size[1] = EmeaI->size[1];
  emxEnsureCapacity((emxArray__common *)QIxAuxAB, i0, (int)sizeof(double));
  loop_ub = EmeaI->size[0] * EmeaI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    QIxAuxAB->data[i0] = EoutQ->data[(int)EmeaI->data[i0] - 1];
  }

  /* Taking just those values relative to the uper eye */
  nx = 1;
  n = EoutQ->size[1];
  ndbl = EoutQ->data[0];
  if (EoutQ->size[1] > 1) {
    if (rtIsNaN(EoutQ->data[0])) {
      ix = 2;
      exitg4 = false;
      while ((!exitg4) && (ix <= n)) {
        nx = ix;
        if (!rtIsNaN(EoutQ->data[ix - 1])) {
          ndbl = EoutQ->data[ix - 1];
          exitg4 = true;
        } else {
          ix++;
        }
      }
    }

    if (nx < EoutQ->size[1]) {
      while (nx + 1 <= n) {
        if (EoutQ->data[nx] < ndbl) {
          ndbl = EoutQ->data[nx];
        }

        nx++;
      }
    }
  }

  nx = 1;
  n = EoutQ->size[1];
  cdiff = EoutQ->data[0];
  if (EoutQ->size[1] > 1) {
    if (rtIsNaN(EoutQ->data[0])) {
      ix = 2;
      exitg3 = false;
      while ((!exitg3) && (ix <= n)) {
        nx = ix;
        if (!rtIsNaN(EoutQ->data[ix - 1])) {
          cdiff = EoutQ->data[ix - 1];
          exitg3 = true;
        } else {
          ix++;
        }
      }
    }

    if (nx < EoutQ->size[1]) {
      while (nx + 1 <= n) {
        if (EoutQ->data[nx] > cdiff) {
          cdiff = EoutQ->data[nx];
        }

        nx++;
      }
    }
  }

  linspace(0.7 * ndbl, 0.7 * cdiff, QInterAB);

  /* Building the histogram boxes */
  hist(QIxAuxAB, QInterAB, QEyeAB);

  /* filling up the boxes with samples that fit on them. */
  /* The same process described for the uper level will be done at */
  /* the middle and lower eyes levels. */
  /* What we are looking for here are not where exist the */
  /* occurrences of values. The eye is where there is not samples, */
  /* this means, the decission level is a reagion between actual */
  /* levels thus this reagion does not contain any signal. */
  /* Changing zeros to one - Zeros compose the eye region */
  /* Changing zeros to one - Zeros compose the eye region */
  /* Starting variables that will be used to identify the eye */
  /* diagram. */
  CountAB = 1.0;
  QCountAB = 1.0;
  for (i0 = 0; i0 < 100; i0++) {
    b_EyeAB[i0] = !(EyeAB[i0] != 0.0);
    b_QEyeAB[i0] = !(QEyeAB[i0] != 0.0);
    EyeAB[i0] = 0.0;
    QEyeAB[i0] = 0.0;
  }

  for (i0 = 0; i0 < 100; i0++) {
    SeqFinAB[i0] = 0.0;
  }

  for (i0 = 0; i0 < 100; i0++) {
    QSeqFinAB[i0] = 0.0;
  }

  SeqIniAB = 0;
  QSeqIniAB = 0;

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

    if (b_QEyeAB[kk]) {
      /* if it contains "1" */
      QEyeAB[QSeqIniAB] = QCountAB;

      /* count this element as part of a consecutive sequency */
      QCountAB++;

      /* adds one to the counter of consecutive elements "1" */
      if (1 + kk == 100) {
        /* if the current box is the last box we got to an end */
        QSeqFinAB[QSeqIniAB] = 100.0;

        /* The final sequency element is equal to its possition (kk) */
      }
    } else {
      /* else if the current box contains "0" */
      QSeqFinAB[QSeqIniAB] = (1.0 + (double)kk) - 1.0;

      /* the previous element was the last element of a consecutive sequency of ones */
      QSeqIniAB++;

      /* adds one to the counter of consecutive number (take in account how many sequencies there are) */
      QCountAB = 1.0;

      /* reset the counter of consecutive elements to mark the start of a new consecutive sequence */
    }
  }

  /* If the eye is open, which means there is a clear difference */
  /* between adjacent levels, the eye diagram will be the longest */
  /* sequence of ones. */
  ndbl = EyeAB[0];
  nx = 0;
  for (ix = 1; ix + 1 < 101; ix++) {
    if (EyeAB[ix] > ndbl) {
      ndbl = EyeAB[ix];
      nx = ix;
    }
  }

  *MaxValAB = ndbl;
  *LocMaxAB = nx + 1;
  if ((nx + 1 < 2) || (ndbl < 2.0)) {
    /* if any sequency was found or there is just one sequency it is a error thus */
    LevDec3 = 0.1;

    /* the decission level will be by default 0.67. Also, the other variables will */
    *LocMaxAB = 1.0;

    /* will be set with values to not cause errors in the future */
    SeqFinAB[0] = 2.0;
    *MaxValAB = 0.0;
    InterAB[0] = 0.1;
  } else {
    /* if a sequency was found the middle of the eye will be the middle of the sequency */
    if ((double)(signed char)SeqFinAB[nx] - ndbl / 2.0 < 1.0) {
      /* if for some reason the final element of the sequency minus the half of its */
      LevDec3 = 0.1;

      /* length results in a negative value, something went very wrong, and by */
    } else {
      /* default it will be set to 0.7 */
      LevDec3 = InterAB[(int)rt_roundd_snf((double)(signed char)SeqFinAB[nx] -
        ndbl / 2.0) - 1];

      /* Otherwise, the decission level is the middle of the sequency */
    }
  }

  ndbl = QEyeAB[0];
  nx = 0;
  for (ix = 1; ix + 1 < 101; ix++) {
    if (QEyeAB[ix] > ndbl) {
      ndbl = QEyeAB[ix];
      nx = ix;
    }
  }

  *QMaxValAB = ndbl;
  *QLocMaxAB = nx + 1;
  if ((nx + 1 < 2) || (ndbl < 2.0)) {
    /* if any sequency was found or there is just one sequency it is a error thus */
    QLevDec3 = 0.1;

    /* the decission level will be by default 0.67. Also, the other variables will */
    *QLocMaxAB = 1.0;

    /* will be set with values to not cause errors in the future */
    QSeqFinAB[0] = 2.0;
    *QMaxValAB = 0.0;
    QInterAB[0] = 0.1;
  } else {
    /* if a sequency was found the middle of the eye will be the middle of the sequency */
    if ((double)(signed char)QSeqFinAB[nx] - ndbl / 2.0 < 1.0) {
      /* if for some reason the final element of the sequency minus the half of its */
      QLevDec3 = 0.1;

      /* length results in a negative value, something went very wrong, and by */
    } else {
      /* default it will be set to 0.7 */
      QLevDec3 = QInterAB[(int)rt_roundd_snf((double)(signed char)QSeqFinAB[nx]
        - ndbl / 2.0) - 1];

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
  exitg2 = false;
  while ((!exitg2) && (nx < 101)) {
    b_guard2 = false;
    if (b_EyeAB[nx - 1]) {
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
    LevelDec3 = 0.1;

    /* mean(Levels(3:4));                       %by default the decission level will be set to 0.65 */
  } else {
    LevelDec3 = LevDec3;
  }

  idx = 0;
  for (i0 = 0; i0 < 2; i0++) {
    ii_size[i0] = iv0[i0];
  }

  nx = 1;
  exitg1 = false;
  while ((!exitg1) && (nx < 101)) {
    b_guard1 = false;
    if (b_QEyeAB[nx - 1]) {
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

  c_ii_size[0] = 1;
  c_ii_size[1] = i0;
  loop_ub = ii_size[0] * i0;
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_ii_data[i0] = ii_data[i0];
  }

  if (!any(b_ii_data, c_ii_size)) {
    /* if for some reason there are no peaks, something went wrong. */
    /* QLocAB = 1; */
    QLevelDec3 = 0.1;

    /* mean(Levels(3:4));                       %by default the decission level will be set to 0.65 */
  } else {
    QLevelDec3 = QLevDec3;
  }

  /* ########################################################################## */
  *AberLevI = InterAB[(signed char)SeqFinAB[(int)*LocMaxAB - 1] - 1] - InterAB
    [(int)rt_roundd_snf((double)(signed char)SeqFinAB[(int)*LocMaxAB - 1] -
                        *MaxValAB) - 1];
  *ValsLevI = LevDec3;
  *AberLevQ = QInterAB[(signed char)QSeqFinAB[(int)*QLocMaxAB - 1] - 1] -
    QInterAB[(int)rt_roundd_snf((double)(signed char)QSeqFinAB[(int)*QLocMaxAB -
    1] - *QMaxValAB) - 1];
  *ValsLevQ = QLevDec3;

  /*     %% Ploting the result for qualitative analizes */
  /* if ThisCarr==126 */
  /* EyeToPlot(CurrentTest,1:length([EoutI EoutQ])) = [EoutI EoutQ]; */
  /* save(['savingforplotingeye' num2str(VetSnr)],'EyeToPlot','VetSnr','IfftOrSum','UsedModula','T','NPPB'); */
  /* end */
  loop_ub = TxDataMat->size[1];
  i0 = EmeaI->size[0] * EmeaI->size[1];
  EmeaI->size[0] = 1;
  EmeaI->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)EmeaI, i0, (int)sizeof(double));
  for (i0 = 0; i0 < loop_ub; i0++) {
    EmeaI->data[EmeaI->size[0] * i0] = TxDataMat->data[((int)ThisCarr +
      TxDataMat->size[0] * i0) - 1];
  }

  i0 = TxDataMat->size[1];
  i1 = b_EmeaI->size[0] * b_EmeaI->size[1];
  b_EmeaI->size[0] = (int)(NbDQPSK / 2.0);
  b_EmeaI->size[1] = (int)CurTesSiz;
  emxEnsureCapacity((emxArray__common *)b_EmeaI, i1, (int)sizeof(double));
  for (idx = 0; idx + 1 <= i0; idx++) {
    b_EmeaI->data[idx] = EmeaI->data[idx];
  }

  ndbl = (double)b_EmeaI->size[0] - SyncPeriod;
  if (1.0 + SyncPeriod > ndbl) {
    i0 = 1;
    i1 = 1;
  } else {
    i0 = (int)(1.0 + SyncPeriod);
    i1 = (int)ndbl + 1;
  }

  i2 = b_EmeaI->size[1];
  i3 = b_EmeaI->size[1];
  nx = (i1 - i0) * i3;
  i3 = TxDataOdd->size[0] * TxDataOdd->size[1];
  TxDataOdd->size[0] = 1;
  TxDataOdd->size[1] = (int)((double)(i1 - i0) * (double)i2);
  emxEnsureCapacity((emxArray__common *)TxDataOdd, i3, (int)sizeof(double));
  for (idx = 0; idx + 1 <= nx; idx++) {
    TxDataOdd->data[idx] = b_EmeaI->data[((i0 + idx % (i1 - i0)) + b_EmeaI->
      size[0] * (idx / (i1 - i0))) - 1];
  }

  loop_ub = TxDataMat->size[1];
  nx = (int)(ThisCarr + NumCarr);
  i0 = EmeaI->size[0] * EmeaI->size[1];
  EmeaI->size[0] = 1;
  EmeaI->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)EmeaI, i0, (int)sizeof(double));
  for (i0 = 0; i0 < loop_ub; i0++) {
    EmeaI->data[EmeaI->size[0] * i0] = TxDataMat->data[(nx + TxDataMat->size[0] *
      i0) - 1];
  }

  i0 = TxDataMat->size[1];
  i1 = b_EmeaI->size[0] * b_EmeaI->size[1];
  b_EmeaI->size[0] = (int)(NbDQPSK / 2.0);
  b_EmeaI->size[1] = (int)CurTesSiz;
  emxEnsureCapacity((emxArray__common *)b_EmeaI, i1, (int)sizeof(double));
  for (idx = 0; idx + 1 <= i0; idx++) {
    b_EmeaI->data[idx] = EmeaI->data[idx];
  }

  ndbl = (double)b_EmeaI->size[0] - SyncPeriod;
  if (1.0 + SyncPeriod > ndbl) {
    i0 = 1;
    i1 = 1;
  } else {
    i0 = (int)(1.0 + SyncPeriod);
    i1 = (int)ndbl + 1;
  }

  i2 = b_EmeaI->size[1];
  i3 = b_EmeaI->size[1];
  nx = (i1 - i0) * i3;
  i3 = TxDataEven->size[0] * TxDataEven->size[1];
  TxDataEven->size[0] = 1;
  TxDataEven->size[1] = (int)((double)(i1 - i0) * (double)i2);
  emxEnsureCapacity((emxArray__common *)TxDataEven, i3, (int)sizeof(double));
  for (idx = 0; idx + 1 <= nx; idx++) {
    TxDataEven->data[idx] = b_EmeaI->data[((i0 + idx % (i1 - i0)) +
      b_EmeaI->size[0] * (idx / (i1 - i0))) - 1];
  }

  emxFree_real_T(&b_EmeaI);

  /*     %%  Ploting some results for qualitative analizes */
  /*              PrintInfo(Ploting*28,t(1:length(EoutI)),Txaux1,Txaux2,EoutI,... */
  /*                            EoutA,EoutB,EoutQ,EoutC,EoutD,real(Ui),real(Uq)); */
  /*                        a=1; */
  /*     %%               Recovering the Information */
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
  /* This process is realized inside the function Olho_mex. */
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
  /* Actualy Receiving Data: */
  /* Once the signal was processed the next step is through a */
  /* comparator decide the actual information received. */
  /*  */
  /*  */
  anew = NPPB / 2.0;
  if (rtIsNaN(anew) || rtIsNaN(NPPB)) {
    n = 1;
    anew = rtNaN;
    apnd = EoutI->size[1];
  } else if ((NPPB == 0.0) || ((anew < EoutI->size[1]) && (NPPB < 0.0)) ||
             ((EoutI->size[1] < anew) && (NPPB > 0.0))) {
    n = 0;
    apnd = EoutI->size[1];
  } else if (rtIsInf(anew)) {
    n = 1;
    anew = rtNaN;
    apnd = EoutI->size[1];
  } else if (rtIsInf(NPPB)) {
    n = 1;
    apnd = EoutI->size[1];
  } else {
    ndbl = floor(((double)EoutI->size[1] - anew) / NPPB + 0.5);
    apnd = anew + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (double)EoutI->size[1];
    } else {
      cdiff = (double)EoutI->size[1] - apnd;
    }

    absa = fabs(anew);
    nx = EoutI->size[1];
    u1 = nx;
    if (absa >= u1) {
      u1 = absa;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * u1) {
      ndbl++;
      apnd = EoutI->size[1];
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

  i0 = EmeaI->size[0] * EmeaI->size[1];
  EmeaI->size[0] = 1;
  EmeaI->size[1] = n;
  emxEnsureCapacity((emxArray__common *)EmeaI, i0, (int)sizeof(double));
  if (n > 0) {
    EmeaI->data[0] = anew;
    if (n > 1) {
      EmeaI->data[n - 1] = apnd;
      nx = (n - 1) / 2;
      for (idx = 1; idx < nx; idx++) {
        cdiff = (double)idx * NPPB;
        EmeaI->data[idx] = anew + cdiff;
        EmeaI->data[(n - idx) - 1] = apnd - cdiff;
      }

      if (nx << 1 == n - 1) {
        EmeaI->data[nx] = (anew + apnd) / 2.0;
      } else {
        cdiff = (double)nx * NPPB;
        EmeaI->data[nx] = anew + cdiff;
        EmeaI->data[nx + 1] = apnd - cdiff;
      }
    }
  }

  /* ThisDataPos  = 1:NPPB:length(EoutI); */
  i0 = DataOdd->size[0] * DataOdd->size[1];
  DataOdd->size[0] = 1;
  DataOdd->size[1] = EmeaI->size[1];
  emxEnsureCapacity((emxArray__common *)DataOdd, i0, (int)sizeof(double));
  loop_ub = EmeaI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    DataOdd->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  i0 = EmeaQ->size[0] * EmeaQ->size[1];
  EmeaQ->size[0] = 1;
  EmeaQ->size[1] = EmeaI->size[1];
  emxEnsureCapacity((emxArray__common *)EmeaQ, i0, (int)sizeof(double));
  loop_ub = EmeaI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    EmeaQ->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  for (kk = 0; kk < EmeaI->size[1]; kk++) {
    /* length(EoutI(ThisDataSize))                                    %The comparison process will be made for each symbol period */
    /* MeanOfData = mean(EoutI((kk-1)+SymLocI(1))); */
    cdiff = NPPB / 2.0;
    if (EoutI->data[(int)(((1.0 + (double)kk) - 1.0) * NPPB + cdiff) - 1] >
        LevelDec3) {
      /* EyeOpenLowI+EyeOpenI/2                     %If it is the uper level the incoming data */
      DataOdd->data[kk] = 1.0;

      /* is 1 */
    } else {
      /* If it is the lowest level the incoming data */
      DataOdd->data[kk] = 0.0;

      /* is 0 */
    }

    /* MeanOfData = mean(EoutI((kk-1)*NPPB+(NPPB/2))); */
    if (EoutI->data[(int)(((1.0 + (double)kk) - 1.0) * NPPB + cdiff) - 1] >
        LevDefDpqsk) {
      /* EyeOpenLowI+EyeOpenI/2                     %If it is the uper level the incoming data */
      EmeaQ->data[kk] = 1.0;

      /* is 1 */
    } else {
      /* If it is the lowest level the incoming data */
      EmeaQ->data[kk] = 0.0;

      /* is 0 */
    }
  }

  /* The identical process just described above will also be used */
  /* to recover the data at the even positions. */
  /*  */
  /* As this process is also statistical, first we reshape the */
  /* income vector to analyze all periods at the same time. */
  /*                  EyeSymMatQ = reshape(EoutQ(1+SyncPeriod*NPPB:end-SyncPeriod*... */
  /*                      NPPB),NPPB,NbDQPSK/2-2*SyncPeriod); */
  /*                  %Then we take the values that compose the decision level */
  /*                  %because they will mark the point of symmetry. */
  /*                  % */
  /*                  %Firstly it was set the interval in which the histogram will be */
  /*                  %build. It is based on the number of samples per bit period. */
  /*                  IntervalQ = linspace(min(EoutQ(1+SyncPeriod*NPPB:end-... */
  /*                      SyncPeriod*NPPB)),max(EoutQ(1+SyncPeriod*NPPB:end-... */
  /*                      SyncPeriod*NPPB)),2*NPPB); */
  /*                  %Therefore, the MATLAB hist function returns the number of */
  /*                  %occurrence of each interval. */
  /*                  EyeMaxQ = hist(EoutQ,IntervalQ); */
  /*                  EyeMaxauxQ = [0 EyeMaxI 0];                                    %Zeros are added at the EyeMax to auxiliate the finding peaks process */
  /*                  [~,EyeLocQ] = findpeaks(EyeMaxauxQ,'MinPeakDistance',NPPB/4,... */
  /*                      'SortStr','descend','NPeaks',2);%The peaks on the Eye profile will be the levels at the Eyes limit */
  /*                  ValToSeekQ = IntervalQ(EyeLocQ-1); */
  /*                  ValToSeekQ = sort(ValToSeekQ,'ascend'); */
  /*                  OccuCountQ = zeros(1,size(EyeSymMatQ,1));                      %Auxiliar Variable for accounting. */
  /*                  for kk=1:size(EyeSymMatQ,1)                                    %For every sample within a symbol period */
  /*                      OccuCountQ(kk) = OccuCountQ(kk)+sum((EyeSymMatI(kk,:)>=... */
  /*                          LowSymPer*ValToSeekQ(1))&(EyeSymMatQ(kk,:)<=UpeSymPer*... */
  /*                          ValToSeekQ(1)));%Account all occurencies of the valeu 1 */
  /*                      OccuCountQ(kk) = OccuCountQ(kk)+sum((EyeSymMatQ(kk,:)>=... */
  /*                          LowSymPer*ValToSeekQ(2))&(EyeSymMatQ(kk,:)<=UpeSymPer*... */
  /*                          ValToSeekQ(2)));%Account all occurencies of the valeu 2 */
  /*                  end */
  /*                  %             [~,SymLocQ] = findpeaks(OccuCountQ,'SortStr','descend');       %The peak on the Eye profile will be the Symmetry level */
  /*                  [SymLocQ] = round(mean(find(ismember(OccuCountQ,max(... */
  /*                      OccuCountQ))))); */
  /* ############################################################## */
  /* ######################Important############################### */
  /* The ber results for the Data Even is not as good as the */
  /* results of the Data Odd. One possible reason is the decision */
  /* point of symmetry hence, for testing, we change SymLocQ to */
  /* SymLocI for evaluation of improvement. It is expected as bouth */
  /* signal will the same point of symetry will perform in an equal */
  /* way. If it is confirmed the creation of SymLocQ will be */
  /* erased. */
  /* ############################################################## */
  /* ############################################################## */
  anew = NPPB / 2.0;
  if (rtIsNaN(anew) || rtIsNaN(NPPB)) {
    n = 1;
    anew = rtNaN;
    apnd = EoutQ->size[1];
  } else if ((NPPB == 0.0) || ((anew < EoutQ->size[1]) && (NPPB < 0.0)) ||
             ((EoutQ->size[1] < anew) && (NPPB > 0.0))) {
    n = 0;
    apnd = EoutQ->size[1];
  } else if (rtIsInf(anew)) {
    n = 1;
    anew = rtNaN;
    apnd = EoutQ->size[1];
  } else if (rtIsInf(NPPB)) {
    n = 1;
    apnd = EoutQ->size[1];
  } else {
    ndbl = floor(((double)EoutQ->size[1] - anew) / NPPB + 0.5);
    apnd = anew + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (double)EoutQ->size[1];
    } else {
      cdiff = (double)EoutQ->size[1] - apnd;
    }

    absa = fabs(anew);
    nx = EoutQ->size[1];
    u1 = nx;
    if (absa >= u1) {
      u1 = absa;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * u1) {
      ndbl++;
      apnd = EoutQ->size[1];
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

  i0 = EmeaI->size[0] * EmeaI->size[1];
  EmeaI->size[0] = 1;
  EmeaI->size[1] = n;
  emxEnsureCapacity((emxArray__common *)EmeaI, i0, (int)sizeof(double));
  if (n > 0) {
    EmeaI->data[0] = anew;
    if (n > 1) {
      EmeaI->data[n - 1] = apnd;
      nx = (n - 1) / 2;
      for (idx = 1; idx < nx; idx++) {
        cdiff = (double)idx * NPPB;
        EmeaI->data[idx] = anew + cdiff;
        EmeaI->data[(n - idx) - 1] = apnd - cdiff;
      }

      if (nx << 1 == n - 1) {
        EmeaI->data[nx] = (anew + apnd) / 2.0;
      } else {
        cdiff = (double)nx * NPPB;
        EmeaI->data[nx] = anew + cdiff;
        EmeaI->data[nx + 1] = apnd - cdiff;
      }
    }
  }

  /* ThisDataPos  = 1:NPPB:length(EoutQ); */
  i0 = DataEven->size[0] * DataEven->size[1];
  DataEven->size[0] = 1;
  DataEven->size[1] = EmeaI->size[1];
  emxEnsureCapacity((emxArray__common *)DataEven, i0, (int)sizeof(double));
  loop_ub = EmeaI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    DataEven->data[i0] = 0.0;
  }

  emxInit_real_T(&DataEvenU, 2);

  /* Initialization of the vector that will store the income data */
  i0 = DataEvenU->size[0] * DataEvenU->size[1];
  DataEvenU->size[0] = 1;
  DataEvenU->size[1] = EmeaI->size[1];
  emxEnsureCapacity((emxArray__common *)DataEvenU, i0, (int)sizeof(double));
  loop_ub = EmeaI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    DataEvenU->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  for (kk = 0; kk < EmeaI->size[1]; kk++) {
    /* length(EoutQ(ThisDataSize))                                    %The comparison process will be made for each symbol period */
    /*                  MeanOfData = mean(EoutQ((kk-1)+SymLocI(1))); */
    cdiff = NPPB / 2.0;
    if (EoutQ->data[(int)(((1.0 + (double)kk) - 1.0) * NPPB + cdiff) - 1] >
        QLevelDec3) {
      /* EyeOpenLowQ+EyeOpenQ/2                     %If it is the uper level the incoming data */
      DataEven->data[kk] = 1.0;

      /* is 1 */
    } else {
      /* If it is the lowest level the incoming data */
      DataEven->data[kk] = 0.0;

      /* is 0 */
    }

    /* MeanOfData = mean(EoutQ((kk-1)*NPPB+(NPPB/2))); */
    if (EoutQ->data[(int)(((1.0 + (double)kk) - 1.0) * NPPB + cdiff) - 1] >
        LevDefDpqsk) {
      /* EyeOpenLowI+EyeOpenI/2                     %If it is the uper level the incoming data */
      DataEvenU->data[kk] = 1.0;

      /* is 1 */
    } else {
      /* If it is the lowest level the incoming data */
      DataEvenU->data[kk] = 0.0;

      /* is 0 */
    }
  }

  emxFree_real_T(&EmeaI);
  emxInit_boolean_T(&r0, 2);

  /*     %%       Calculating the Bit Error Ratio (BER) */
  /* The final process here is to count the number of wrongdoings */
  /* of this whole process upon the transmited data for */
  /* quantitative analizes */
  xor(TxDataOdd, DataOdd, r0);
  BitErrOdd1 = sum(r0);

  /* Comparison between the Transmited and received and counting the differences */
  xor(TxDataEven, DataEven, r0);
  BitErrEven1 = sum(r0);

  /* Comparison between the Transmited and received and counting the differences */
  xor(TxDataOdd, EmeaQ, r0);
  BitErrOdd4 = sum(r0);

  /* Comparison between the Transmited and received and counting the differences */
  xor(TxDataEven, DataEvenU, r0);
  BitErrEven4 = sum(r0);

  /* Comparison between the Transmited and received and counting the differences */
  *BerDQPSK = (BitErrOdd1 + BitErrEven1) / ((NbDQPSK - 2.0 * SyncPeriod) *
    CurTesSiz);

  /* Calculating the ration of wrong bits and the total number of bits transmited */
  emxFree_boolean_T(&r0);
  emxFree_real_T(&DataEvenU);
  emxFree_real_T(&EmeaQ);
  if (BitErrOdd4 + BitErrEven4 < BitErrOdd1 + BitErrEven1) {
    *BerDQPSK = (BitErrOdd4 + BitErrEven4) / ((NbDQPSK - 2.0 * SyncPeriod) *
      CurTesSiz);

    /* Calculating the ration of wrong bits and the total number of bits transmited */
  }
}

/*
 * File trailer for RecDowDqpsk.c
 *
 * [EOF]
 */

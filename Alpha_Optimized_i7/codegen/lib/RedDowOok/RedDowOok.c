/*
 * File: RedDowOok.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 12-Sep-2018 12:12:25
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "RedDowOok_emxutil.h"
#include "sum.h"
#include "xor.h"
#include "hist.h"
#include "linspace.h"
#include "sort1.h"
#include "findpeaks.h"

/* Function Declarations */
static double rt_roundd_snf(double u);

/* Function Definitions */

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
 * Arguments    : const emxArray_real_T *Ix
 *                const emxArray_real_T *TxDataMat
 *                double NPPB
 *                double ThisCarr
 *                double Nb
 *                double NumBitDesc
 *                double SyncPeriod
 *                double CurTesSiz
 *                double EyeOpenLow
 *                double EyeOpen
 *                double *AberLev
 *                double *ValsLev
 *                double Inter[100]
 *                double SeqFin[100]
 *                double *LocMax
 *                double *MaxVal
 *                emxArray_real_T *TxData
 *                emxArray_real_T *EoutCorrD
 *                emxArray_real_T *EoutCorr2
 *                emxArray_real_T *EoutCorr
 *                double *BerOOK
 *                double *LocMax2
 *                double SeqFin2[100]
 *                double *MaxVal2
 *                double Inter2[100]
 * Return Type  : void
 */
void RedDowOok(const emxArray_real_T *Ix, const emxArray_real_T *TxDataMat,
               double NPPB, double ThisCarr, double Nb, double NumBitDesc,
               double SyncPeriod, double CurTesSiz, double EyeOpenLow, double
               EyeOpen, double *AberLev, double *ValsLev, double Inter[100],
               double SeqFin[100], double *LocMax, double *MaxVal,
               emxArray_real_T *TxData, emxArray_real_T *EoutCorrD,
               emxArray_real_T *EoutCorr2, emxArray_real_T *EoutCorr, double
               *BerOOK, double *LocMax2, double SeqFin2[100], double *MaxVal2,
               double Inter2[100])
{
  double anew;
  int n;
  double apnd;
  double ndbl;
  emxArray_real_T *PosIx;
  double cdiff;
  int i0;
  double absa;
  int absb;
  double u1;
  int k;
  boolean_T exitg4;
  double Interval[100];
  boolean_T exitg3;
  double EyeMax[100];
  double EyeMaxaux[102];
  double unusedU0_data[204];
  int unusedU0_size[2];
  double EyeLoc_data[204];
  int EyeLoc_size[2];
  double dv0[2];
  double Levels_data[3];
  static const double dv1[3] = { 0.0, -0.2, 0.35 };

  emxArray_boolean_T *r0;
  emxArray_boolean_T *r1;
  emxArray_real_T *varargin_1;
  boolean_T exitg2;
  emxArray_int32_T *r2;
  boolean_T exitg1;
  emxArray_real_T *b_Ix;
  emxArray_real_T *c_Ix;
  emxArray_real_T *d_Ix;
  double Count;
  double Count2;
  boolean_T EyeAB[100];
  boolean_T EyeCD[100];
  int SeqIni;
  int SeqIni2;
  int kk;
  double LevDec;
  double LevDec2;
  emxArray_real_T *TxDataB;
  int nx;
  double BitErr;
  double BitErr2;
  double BitErrD;
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
    absb = Ix->size[1];
    u1 = absb;
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

  emxInit_real_T(&PosIx, 2);
  i0 = PosIx->size[0] * PosIx->size[1];
  PosIx->size[0] = 1;
  PosIx->size[1] = n;
  emxEnsureCapacity((emxArray__common *)PosIx, i0, (int)sizeof(double));
  if (n > 0) {
    PosIx->data[0] = anew;
    if (n > 1) {
      PosIx->data[n - 1] = apnd;
      absb = (n - 1) / 2;
      for (k = 1; k < absb; k++) {
        cdiff = (double)k * NPPB;
        PosIx->data[k] = anew + cdiff;
        PosIx->data[(n - k) - 1] = apnd - cdiff;
      }

      if (absb << 1 == n - 1) {
        PosIx->data[absb] = (anew + apnd) / 2.0;
      } else {
        cdiff = (double)absb * NPPB;
        PosIx->data[absb] = anew + cdiff;
        PosIx->data[absb + 1] = apnd - cdiff;
      }
    }
  }

  /* Possition of the central samples - but the number of samples per symbol is even ???? */
  /* From the main received signal just a few samples are taken for further evaluation */
  /* The number of boxes to be filled up on the histogram process */
  /* At this process each eye will be evaluated separetelly. It is */
  /* important to remember that the PAM4 has 4 levels, which means */
  /* three level of decissions that are exaclty the center of the */
  /* eye diagram. */
  absb = 1;
  n = Ix->size[1];
  ndbl = Ix->data[0];
  if (Ix->size[1] > 1) {
    if (rtIsNaN(Ix->data[0])) {
      k = 2;
      exitg4 = false;
      while ((!exitg4) && (k <= n)) {
        absb = k;
        if (!rtIsNaN(Ix->data[k - 1])) {
          ndbl = Ix->data[k - 1];
          exitg4 = true;
        } else {
          k++;
        }
      }
    }

    if (absb < Ix->size[1]) {
      while (absb + 1 <= n) {
        if (Ix->data[absb] < ndbl) {
          ndbl = Ix->data[absb];
        }

        absb++;
      }
    }
  }

  absb = 1;
  n = Ix->size[1];
  cdiff = Ix->data[0];
  if (Ix->size[1] > 1) {
    if (rtIsNaN(Ix->data[0])) {
      k = 2;
      exitg3 = false;
      while ((!exitg3) && (k <= n)) {
        absb = k;
        if (!rtIsNaN(Ix->data[k - 1])) {
          cdiff = Ix->data[k - 1];
          exitg3 = true;
        } else {
          k++;
        }
      }
    }

    if (absb < Ix->size[1]) {
      while (absb + 1 <= n) {
        if (Ix->data[absb] > cdiff) {
          cdiff = Ix->data[absb];
        }

        absb++;
      }
    }
  }

  linspace(0.5 * ndbl, 0.5 * cdiff, Interval);

  /* Building the histogram boxes */
  /* Therefore, the MATLAB hist function returns the number of */
  /* occurrence of each interval. */
  hist(Ix, Interval, EyeMax);
  EyeMaxaux[0] = 0.0;
  memcpy(&EyeMaxaux[1], &EyeMax[0], 100U * sizeof(double));
  EyeMaxaux[101] = 0.0;

  /* Zeros are added at the EyeMax to auxiliate the finding peaks process */
  findpeaks(EyeMaxaux, unusedU0_data, unusedU0_size, EyeLoc_data, EyeLoc_size);

  /* The peaks on the Eye profile will be the levels at the Eyes limit */
  if (EyeLoc_size[1] < 2) {
    /* If it was not able to find the eye profile. */
    b_findpeaks(EyeMaxaux, unusedU0_data, unusedU0_size, EyeLoc_data,
                EyeLoc_size);

    /* The peaks on the Eye profile will be the levels at the Eyes limit */
  }

  if (EyeLoc_size[1] < 2) {
    /* If it was not able to find the eye profile. */
    /* EyeLoc = [2 3]; */
    for (i0 = 0; i0 < 3; i0++) {
      Levels_data[i0] = dv1[i0];
    }
  } else {
    /* Whereas, if there is an profile the decission can be found */
    dv0[0] = Interval[(int)(EyeLoc_data[0] - 1.0) - 1];
    dv0[1] = Interval[(int)(EyeLoc_data[1] - 1.0) - 1];
    d_sort(dv0);
    for (i0 = 0; i0 < 2; i0++) {
      Levels_data[i0] = dv0[i0];
    }

    /*                  LevelDec1 = Levels(1) + (Levels(2)-Levels(1))/2 ; */
    /*                  LevelDec2 = Levels(2) + (Levels(3)-Levels(2))/2 ; */
    /*                  LevelDec3 = Levels(3) + (Levels(4)-Levels(3))/2 ; */
  }

  emxInit_boolean_T(&r0, 2);
  i0 = r0->size[0] * r0->size[1];
  r0->size[0] = 1;
  r0->size[1] = PosIx->size[1];
  emxEnsureCapacity((emxArray__common *)r0, i0, (int)sizeof(boolean_T));
  absb = PosIx->size[0] * PosIx->size[1];
  for (i0 = 0; i0 < absb; i0++) {
    r0->data[i0] = (Ix->data[(int)PosIx->data[i0] - 1] <= Levels_data[1]);
  }

  emxInit_boolean_T(&r1, 2);
  i0 = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = PosIx->size[1];
  emxEnsureCapacity((emxArray__common *)r1, i0, (int)sizeof(boolean_T));
  absb = PosIx->size[0] * PosIx->size[1];
  for (i0 = 0; i0 < absb; i0++) {
    r1->data[i0] = (Ix->data[(int)PosIx->data[i0] - 1] >= Levels_data[0]);
  }

  emxInit_real_T(&varargin_1, 2);
  linspace(Levels_data[0], Levels_data[1], Inter);

  /* Building the histogram boxes */
  i0 = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = PosIx->size[1];
  emxEnsureCapacity((emxArray__common *)varargin_1, i0, (int)sizeof(double));
  absb = PosIx->size[0] * PosIx->size[1];
  for (i0 = 0; i0 < absb; i0++) {
    varargin_1->data[i0] = Ix->data[(int)PosIx->data[i0] - 1];
  }

  absb = 1;
  n = PosIx->size[1];
  ndbl = Ix->data[(int)PosIx->data[0] - 1];
  if (PosIx->size[1] > 1) {
    if (rtIsNaN(ndbl)) {
      k = 2;
      exitg2 = false;
      while ((!exitg2) && (k <= n)) {
        absb = k;
        if (!rtIsNaN(varargin_1->data[k - 1])) {
          ndbl = varargin_1->data[k - 1];
          exitg2 = true;
        } else {
          k++;
        }
      }
    }

    if (absb < PosIx->size[1]) {
      while (absb + 1 <= n) {
        if (varargin_1->data[absb] < ndbl) {
          ndbl = varargin_1->data[absb];
        }

        absb++;
      }
    }
  }

  i0 = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = 1;
  varargin_1->size[1] = PosIx->size[1];
  emxEnsureCapacity((emxArray__common *)varargin_1, i0, (int)sizeof(double));
  absb = PosIx->size[0] * PosIx->size[1];
  for (i0 = 0; i0 < absb; i0++) {
    varargin_1->data[i0] = Ix->data[(int)PosIx->data[i0] - 1];
  }

  absb = 1;
  n = PosIx->size[1];
  cdiff = Ix->data[(int)PosIx->data[0] - 1];
  if (PosIx->size[1] > 1) {
    if (rtIsNaN(cdiff)) {
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= n)) {
        absb = k;
        if (!rtIsNaN(varargin_1->data[k - 1])) {
          cdiff = varargin_1->data[k - 1];
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (absb < PosIx->size[1]) {
      while (absb + 1 <= n) {
        if (varargin_1->data[absb] > cdiff) {
          cdiff = varargin_1->data[absb];
        }

        absb++;
      }
    }
  }

  emxFree_real_T(&varargin_1);
  emxInit_int32_T(&r2, 2);
  linspace(ndbl, cdiff, Inter2);

  /* Building the histogram boxes */
  n = r0->size[1] - 1;
  absb = 0;
  for (k = 0; k <= n; k++) {
    if (r0->data[k] && r1->data[k]) {
      absb++;
    }
  }

  i0 = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = absb;
  emxEnsureCapacity((emxArray__common *)r2, i0, (int)sizeof(int));
  absb = 0;
  for (k = 0; k <= n; k++) {
    if (r0->data[k] && r1->data[k]) {
      r2->data[absb] = k + 1;
      absb++;
    }
  }

  emxFree_boolean_T(&r1);
  emxInit_real_T(&b_Ix, 2);
  emxInit_real_T1(&c_Ix, 1);
  i0 = b_Ix->size[0] * b_Ix->size[1];
  b_Ix->size[0] = 1;
  b_Ix->size[1] = r2->size[1];
  emxEnsureCapacity((emxArray__common *)b_Ix, i0, (int)sizeof(double));
  i0 = c_Ix->size[0];
  c_Ix->size[0] = PosIx->size[1];
  emxEnsureCapacity((emxArray__common *)c_Ix, i0, (int)sizeof(double));
  absb = PosIx->size[1];
  for (i0 = 0; i0 < absb; i0++) {
    c_Ix->data[i0] = Ix->data[(int)PosIx->data[i0] - 1];
  }

  absb = r2->size[0] * r2->size[1];
  for (i0 = 0; i0 < absb; i0++) {
    b_Ix->data[i0] = c_Ix->data[r2->data[i0] - 1];
  }

  emxFree_real_T(&c_Ix);
  emxFree_int32_T(&r2);
  emxInit_real_T(&d_Ix, 2);
  hist(b_Ix, Inter, Interval);

  /* filling up the boxes with samples that fit on them. */
  i0 = d_Ix->size[0] * d_Ix->size[1];
  d_Ix->size[0] = 1;
  d_Ix->size[1] = PosIx->size[1];
  emxEnsureCapacity((emxArray__common *)d_Ix, i0, (int)sizeof(double));
  absb = PosIx->size[0] * PosIx->size[1];
  emxFree_real_T(&b_Ix);
  for (i0 = 0; i0 < absb; i0++) {
    d_Ix->data[i0] = Ix->data[(int)PosIx->data[i0] - 1];
  }

  hist(d_Ix, Inter2, EyeMax);

  /* filling up the boxes with samples that fit on them. */
  /* What we are looking for here are not where exist the */
  /* occurrences of values. The eye is where there is not samples, */
  /* this means, the decission level is a reagion between actual */
  /* levels thus this reagion does not contain any signal. */
  emxFree_real_T(&d_Ix);

  /* Changing zeros to one - Zeros compose the eye region */
  /* Changing zeros to one - Zeros compose the eye region */
  /* Starting variables that will be used to identify the eye */
  /* diagram. */
  Count = 1.0;
  Count2 = 1.0;
  for (i0 = 0; i0 < 100; i0++) {
    EyeAB[i0] = !(Interval[i0] != 0.0);
    EyeCD[i0] = !(EyeMax[i0] != 0.0);
    Interval[i0] = 0.0;
    EyeMax[i0] = 0.0;
  }

  SeqIni = 0;
  SeqIni2 = 0;
  for (i0 = 0; i0 < 100; i0++) {
    SeqFin[i0] = 0.0;
  }

  for (i0 = 0; i0 < 100; i0++) {
    SeqFin2[i0] = 0.0;
  }

  /* The for loop will take account of every box with ones. It is */
  /* important to take note that the not operator was used in this */
  /* vector, therefore ones means zeros (the eye diagram - */
  /* possibly) and zeros means values abouve zeroa (not the eye). */
  for (kk = 0; kk < 100; kk++) {
    /* For every box */
    if (EyeAB[kk]) {
      /* if it contains "1" */
      Interval[SeqIni] = Count;

      /* count this element as part of a consecutive sequency */
      Count++;

      /* adds one to the counter of consecutive elements "1" */
      if (1 + kk == 100) {
        /* if the current box is the last box we got to an end */
        SeqFin[SeqIni] = 100.0;

        /* The final sequency element is equal to its possition (kk) */
      }
    } else {
      /* else if the current box contains "0" */
      SeqFin[SeqIni] = (1.0 + (double)kk) - 1.0;

      /* the previous element was the last element of a consecutive sequency of ones */
      SeqIni++;

      /* adds one to the counter of consecutive number (take in account how many sequencies there are) */
      Count = 1.0;

      /* reset the counter of consecutive elements to mark the start of a new consecutive sequence */
    }

    if (EyeCD[kk]) {
      /* if it contains "1" */
      EyeMax[SeqIni2] = Count2;

      /* count this element as part of a consecutive sequency */
      Count2++;

      /* adds one to the counter of consecutive elements "1" */
      if (1 + kk == 100) {
        /* if the current box is the last box we got to an end */
        SeqFin2[SeqIni2] = 100.0;

        /* The final sequency element is equal to its possition (kk) */
      }
    } else {
      /* else if the current box contains "0" */
      SeqFin2[SeqIni2] = (1.0 + (double)kk) - 1.0;

      /* the previous element was the last element of a consecutive sequency of ones */
      SeqIni2++;

      /* adds one to the counter of consecutive number (take in account how many sequencies there are) */
      Count2 = 1.0;

      /* reset the counter of consecutive elements to mark the start of a new consecutive sequence */
    }
  }

  /* If the eye is open, which means there is a clear difference */
  /* between adjacent levels, the eye diagram will be the longest */
  /* sequence of ones. */
  ndbl = Interval[0];
  absb = 0;
  for (k = 1; k + 1 < 101; k++) {
    if (Interval[k] > ndbl) {
      ndbl = Interval[k];
      absb = k;
    }
  }

  *MaxVal = ndbl;
  *LocMax = absb + 1;
  if ((absb + 1 < 2) || (ndbl < 2.0)) {
    /* if any sequency was found or there is just one sequency it is a error thus */
    LevDec = 0.0;

    /* the decission level will be by default 0.67. Also, the other variables will */
    *LocMax = 1.0;

    /* will be set with values to not cause errors in the future */
    SeqFin[0] = 2.0;
    *MaxVal = 0.0;
    Inter[0] = 0.0;
  } else {
    /* if a sequency was found the middle of the eye will be the middle of the sequency */
    if ((double)(signed char)SeqFin[absb] - ndbl / 2.0 < 1.0) {
      /* if for some reason the final element of the sequency minus the half of its */
      LevDec = 0.0;

      /* length results in a negative value, something went very wrong, and by */
    } else {
      /* default it will be set to 0.7 */
      LevDec = Inter[(int)rt_roundd_snf((double)(signed char)SeqFin[absb] - ndbl
        / 2.0) - 1];

      /* Otherwise, the decission level is the middle of the sequency */
    }
  }

  ndbl = EyeMax[0];
  absb = 0;
  for (k = 1; k + 1 < 101; k++) {
    if (EyeMax[k] > ndbl) {
      ndbl = EyeMax[k];
      absb = k;
    }
  }

  *MaxVal2 = ndbl;
  *LocMax2 = absb + 1;
  if ((absb + 1 < 2) || (ndbl < 2.0)) {
    /* if any sequency was found or there is just one sequency it is a error thus */
    LevDec2 = 0.0;

    /* the decission level will be by default 0.67. Also, the other variables will */
    *LocMax2 = 1.0;

    /* will be set with values to not cause errors in the future */
    SeqFin2[0] = 2.0;
    *MaxVal2 = 0.0;
    Inter2[0] = 0.0;
  } else {
    /* if a sequency was found the middle of the eye will be the middle of the sequency */
    if ((double)(signed char)SeqFin2[absb] - ndbl / 2.0 < 1.0) {
      /* if for some reason the final element of the sequency minus the half of its */
      LevDec2 = 0.0;

      /* length results in a negative value, something went very wrong, and by */
    } else {
      /* default it will be set to 0.7 */
      LevDec2 = Inter2[(int)rt_roundd_snf((double)(signed char)SeqFin2[absb] -
        ndbl / 2.0) - 1];

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
  /* ########################################################################## */
  *AberLev = Inter[(signed char)SeqFin[(int)*LocMax - 1] - 1] - Inter[(int)
    rt_roundd_snf((double)(signed char)SeqFin[(int)*LocMax - 1] - *MaxVal) - 1];
  *ValsLev = LevDec;

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
  /* %      Actualy Receiving Data */
  /* Once the signal was processed the next step is through a */
  /* comparator decide the actual information received. */
  /* ThisDataPos = 1:NPPB:length(Ix); */
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
    absb = Ix->size[1];
    u1 = absb;
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

  i0 = PosIx->size[0] * PosIx->size[1];
  PosIx->size[0] = 1;
  PosIx->size[1] = n;
  emxEnsureCapacity((emxArray__common *)PosIx, i0, (int)sizeof(double));
  if (n > 0) {
    PosIx->data[0] = anew;
    if (n > 1) {
      PosIx->data[n - 1] = apnd;
      absb = (n - 1) / 2;
      for (k = 1; k < absb; k++) {
        cdiff = (double)k * NPPB;
        PosIx->data[k] = anew + cdiff;
        PosIx->data[(n - k) - 1] = apnd - cdiff;
      }

      if (absb << 1 == n - 1) {
        PosIx->data[absb] = (anew + apnd) / 2.0;
      } else {
        cdiff = (double)absb * NPPB;
        PosIx->data[absb] = anew + cdiff;
        PosIx->data[absb + 1] = apnd - cdiff;
      }
    }
  }

  i0 = EoutCorr->size[0] * EoutCorr->size[1];
  EoutCorr->size[0] = 1;
  EoutCorr->size[1] = PosIx->size[1];
  emxEnsureCapacity((emxArray__common *)EoutCorr, i0, (int)sizeof(double));
  absb = PosIx->size[1];
  for (i0 = 0; i0 < absb; i0++) {
    EoutCorr->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  i0 = EoutCorrD->size[0] * EoutCorrD->size[1];
  EoutCorrD->size[0] = 1;
  EoutCorrD->size[1] = PosIx->size[1];
  emxEnsureCapacity((emxArray__common *)EoutCorrD, i0, (int)sizeof(double));
  absb = PosIx->size[1];
  for (i0 = 0; i0 < absb; i0++) {
    EoutCorrD->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  i0 = EoutCorr2->size[0] * EoutCorr2->size[1];
  EoutCorr2->size[0] = 1;
  EoutCorr2->size[1] = PosIx->size[1];
  emxEnsureCapacity((emxArray__common *)EoutCorr2, i0, (int)sizeof(double));
  absb = PosIx->size[1];
  for (i0 = 0; i0 < absb; i0++) {
    EoutCorr2->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  for (kk = 0; kk < PosIx->size[1]; kk++) {
    /* length(Ix(ThisDataSize))                                       %The comparison process will be made for each symbol period */
    /* An small portion of the income signal is take for */
    /* evaluation by measuring the avarage value of the samples */
    /* taken */
    /*                  CalcMean = mean((Ix((kk-1)+SymLoc(1)))); */
    /* Verifying the interval for each symbol received. */
    if (Ix->data[(int)(((1.0 + (double)kk) - 1.0) * NPPB + NPPB / 2.0) - 1] >=
        LevDec) {
      /* EyeOpenLow+EyeOpen/2                        %If it is the uper level the incoming data */
      EoutCorr->data[kk] = 1.0;

      /* is 1 */
    } else {
      /* If it is the lowest level the incoming data */
      EoutCorr->data[kk] = 0.0;

      /* is 0 */
    }

    cdiff = NPPB / 2.0;

    /* Verifying the interval for each symbol received. */
    if (Ix->data[(int)(((1.0 + (double)kk) - 1.0) * NPPB + cdiff) - 1] >=
        LevDec2) {
      /* EyeOpenLow+EyeOpen/2                        %If it is the uper level the incoming data */
      EoutCorr2->data[kk] = 1.0;

      /* is 1 */
    } else {
      /* If it is the lowest level the incoming data */
      EoutCorr2->data[kk] = 0.0;

      /* is 0 */
    }

    if (Ix->data[(int)(((1.0 + (double)kk) - 1.0) * NPPB + cdiff) - 1] >=
        EyeOpenLow + EyeOpen / 2.0) {
      /* If it is the uper level the incoming data */
      EoutCorrD->data[kk] = 1.0;

      /* is 1 */
    } else {
      /* If it is the lowest level the incoming data */
      EoutCorrD->data[kk] = 0.0;

      /* is 0 */
    }
  }

  absb = TxDataMat->size[1];
  i0 = PosIx->size[0] * PosIx->size[1];
  PosIx->size[0] = 1;
  PosIx->size[1] = absb;
  emxEnsureCapacity((emxArray__common *)PosIx, i0, (int)sizeof(double));
  for (i0 = 0; i0 < absb; i0++) {
    PosIx->data[PosIx->size[0] * i0] = TxDataMat->data[((int)ThisCarr +
      TxDataMat->size[0] * i0) - 1];
  }

  emxInit_real_T(&TxDataB, 2);
  i0 = TxDataMat->size[1];
  n = TxDataB->size[0] * TxDataB->size[1];
  TxDataB->size[0] = (int)(Nb - NumBitDesc);
  TxDataB->size[1] = (int)CurTesSiz;
  emxEnsureCapacity((emxArray__common *)TxDataB, n, (int)sizeof(double));
  for (k = 0; k + 1 <= i0; k++) {
    TxDataB->data[k] = PosIx->data[k];
  }

  emxFree_real_T(&PosIx);
  cdiff = (double)TxDataB->size[0] - SyncPeriod;
  if (1.0 + SyncPeriod > cdiff) {
    i0 = 1;
    n = 1;
  } else {
    i0 = (int)(1.0 + SyncPeriod);
    n = (int)cdiff + 1;
  }

  absb = TxDataB->size[1];
  k = TxDataB->size[1];
  nx = (n - i0) * k;
  k = TxData->size[0] * TxData->size[1];
  TxData->size[0] = 1;
  TxData->size[1] = (int)((double)(n - i0) * (double)absb);
  emxEnsureCapacity((emxArray__common *)TxData, k, (int)sizeof(double));
  for (k = 0; k + 1 <= nx; k++) {
    TxData->data[k] = TxDataB->data[((i0 + k % (n - i0)) + TxDataB->size[0] * (k
      / (n - i0))) - 1];
  }

  emxFree_real_T(&TxDataB);

  /* %       Calculating the Bit Error Ratio (BER) */
  /* The final process here is to count the number of wrongdoings */
  /* of this whole process upon the transmited data for */
  /* quantitative analizes */
  xor(TxData, EoutCorr, r0);
  BitErr = sum(r0);

  /* Comparison between the Transmited and received and counting the differences */
  xor(TxData, EoutCorr2, r0);
  BitErr2 = sum(r0);

  /* Comparison between the Transmited and received and counting the differences */
  xor(TxData, EoutCorrD, r0);
  BitErrD = sum(r0);

  /* Comparison between the Transmited and received and counting the differences */
  emxFree_boolean_T(&r0);
  if (BitErr2 <= BitErr) {
    if (BitErr2 <= BitErrD) {
      *BerOOK = BitErr2 / (((Nb - NumBitDesc) - 2.0 * SyncPeriod) * CurTesSiz);

      /* Calculating the ration of wrong bits and the total number of bits transmited */
      *AberLev = Inter2[(signed char)SeqFin2[(int)*LocMax2 - 1] - 1] - Inter2
        [(int)rt_roundd_snf((double)(signed char)SeqFin2[(int)*LocMax2 - 1] -
                            *MaxVal2) - 1];
      *ValsLev = LevDec2;
    } else {
      *BerOOK = BitErrD / (((Nb - NumBitDesc) - 2.0 * SyncPeriod) * CurTesSiz);

      /* Calculating the ration of wrong bits and the total number of bits transmited */
      *AberLev = EyeOpen;
      *ValsLev = EyeOpenLow + EyeOpen / 2.0;
    }
  } else if (BitErr <= BitErrD) {
    *BerOOK = BitErr / (((Nb - NumBitDesc) - 2.0 * SyncPeriod) * CurTesSiz);

    /* Calculating the ration of wrong bits and the total number of bits transmited */
  } else {
    *BerOOK = BitErrD / (((Nb - NumBitDesc) - 2.0 * SyncPeriod) * CurTesSiz);

    /* Calculating the ration of wrong bits and the total number of bits transmited */
    *AberLev = EyeOpen;
    *ValsLev = EyeOpenLow + EyeOpen / 2.0;
  }
}

/*
 * File trailer for RedDowOok.c
 *
 * [EOF]
 */

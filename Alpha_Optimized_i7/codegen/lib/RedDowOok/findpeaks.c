/*
 * File: findpeaks.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 12-Sep-2018 12:12:25
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "findpeaks.h"
#include "sort1.h"
#include "eml_setop.h"
#include "diff.h"
#include "sign.h"

/* Function Declarations */
static void assignOutputs(const double y[102], const double x[102], const double
  iPk_data[], const int iPk_size[1], double YpkOut_data[], int YpkOut_size[2],
  double XpkOut_data[], int XpkOut_size[2]);
static void c_findPeaksSeparatedByMoreThanM(const double y[102], const double
  iPk_data[], const int iPk_size[1], double idx_data[], int idx_size[1]);
static void d_findPeaksSeparatedByMoreThanM(const double y[102], const double
  iPk_data[], const int iPk_size[1], double idx_data[], int idx_size[1]);
static void findLocalMaxima(const double yTemp[102], double iPk_data[], int
  iPk_size[1], double iInflect_data[], int iInflect_size[1]);
static void getAllPeaks(const double y[102], double iPk_data[], int iPk_size[1],
  double iInf_data[], int iInf_size[1], double iInflect_data[], int
  iInflect_size[1]);
static void keepAtMostNpPeaks(double idx_data[], int idx_size[1]);
static void removePeaksBelowMinPeakHeight(const double Y[102], double iPk_data[],
  int iPk_size[1]);
static void removePeaksBelowThreshold(const double Y[102], double iPk_data[],
  int iPk_size[1]);

/* Function Definitions */

/*
 * Arguments    : const double y[102]
 *                const double x[102]
 *                const double iPk_data[]
 *                const int iPk_size[1]
 *                double YpkOut_data[]
 *                int YpkOut_size[2]
 *                double XpkOut_data[]
 *                int XpkOut_size[2]
 * Return Type  : void
 */
static void assignOutputs(const double y[102], const double x[102], const double
  iPk_data[], const int iPk_size[1], double YpkOut_data[], int YpkOut_size[2],
  double XpkOut_data[], int XpkOut_size[2])
{
  int loop_ub;
  int i4;
  YpkOut_size[0] = 1;
  YpkOut_size[1] = iPk_size[0];
  loop_ub = iPk_size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    YpkOut_data[i4] = y[(int)iPk_data[i4] - 1];
  }

  XpkOut_size[0] = 1;
  XpkOut_size[1] = iPk_size[0];
  loop_ub = iPk_size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    XpkOut_data[i4] = x[(int)iPk_data[i4] - 1];
  }
}

/*
 * Arguments    : const double y[102]
 *                const double iPk_data[]
 *                const int iPk_size[1]
 *                double idx_data[]
 *                int idx_size[1]
 * Return Type  : void
 */
static void c_findPeaksSeparatedByMoreThanM(const double y[102], const double
  iPk_data[], const int iPk_size[1], double idx_data[], int idx_size[1])
{
  int loop_ub;
  double y_data[1];
  int i3;
  signed char y_size[2];
  int locs_temp_size[1];
  double locs_data[204];
  double locs_temp_data[204];
  int iidx_data[204];
  int iidx_size[1];
  int sortIdx_size_idx_0;
  int sortIdx_data[204];
  int i;
  boolean_T idelete_data[204];
  int trueCount;
  boolean_T tmp_data[204];
  if (iPk_size[0] == 0) {
    for (i3 = 0; i3 < 2; i3++) {
      y_size[i3] = (signed char)(1 - i3);
    }

    idx_size[0] = y_size[1];
    loop_ub = y_size[1];
    for (i3 = 0; i3 < loop_ub; i3++) {
      idx_data[i3] = y_data[y_size[0] * i3];
    }
  } else {
    loop_ub = iPk_size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      locs_data[i3] = 1.0 + (double)((int)iPk_data[i3] - 1);
    }

    locs_temp_size[0] = iPk_size[0];
    loop_ub = iPk_size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      locs_temp_data[i3] = y[(int)iPk_data[i3] - 1];
    }

    sort(locs_temp_data, locs_temp_size, iidx_data, iidx_size);
    sortIdx_size_idx_0 = iidx_size[0];
    loop_ub = iidx_size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      sortIdx_data[i3] = iidx_data[i3];
    }

    loop_ub = iidx_size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      locs_temp_data[i3] = locs_data[sortIdx_data[i3] - 1];
    }

    loop_ub = (unsigned char)iidx_size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      idelete_data[i3] = false;
    }

    for (i = 0; i < sortIdx_size_idx_0; i++) {
      if (!idelete_data[i]) {
        for (i3 = 0; i3 < sortIdx_size_idx_0; i3++) {
          tmp_data[i3] = ((locs_temp_data[i3] >= locs_data[sortIdx_data[i] - 1]
                           - 33.333333333333336) && (locs_temp_data[i3] <=
            locs_data[sortIdx_data[i] - 1] + 33.333333333333336));
        }

        loop_ub = (unsigned char)sortIdx_size_idx_0;
        for (i3 = 0; i3 < loop_ub; i3++) {
          idelete_data[i3] = (idelete_data[i3] || tmp_data[i3]);
        }

        idelete_data[i] = false;
      }
    }

    loop_ub = (unsigned char)iidx_size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= loop_ub; i++) {
      if (!idelete_data[i]) {
        trueCount++;
      }
    }

    sortIdx_size_idx_0 = 0;
    for (i = 0; i <= loop_ub; i++) {
      if (!idelete_data[i]) {
        iidx_data[sortIdx_size_idx_0] = i + 1;
        sortIdx_size_idx_0++;
      }
    }

    idx_size[0] = trueCount;
    for (i3 = 0; i3 < trueCount; i3++) {
      idx_data[i3] = sortIdx_data[iidx_data[i3] - 1];
    }

    c_sort(idx_data, idx_size);
  }
}

/*
 * Arguments    : const double y[102]
 *                const double iPk_data[]
 *                const int iPk_size[1]
 *                double idx_data[]
 *                int idx_size[1]
 * Return Type  : void
 */
static void d_findPeaksSeparatedByMoreThanM(const double y[102], const double
  iPk_data[], const int iPk_size[1], double idx_data[], int idx_size[1])
{
  int loop_ub;
  double y_data[1];
  int i6;
  signed char y_size[2];
  int locs_temp_size[1];
  double locs_data[204];
  double locs_temp_data[204];
  int iidx_data[204];
  int iidx_size[1];
  int sortIdx_size_idx_0;
  int sortIdx_data[204];
  int i;
  boolean_T idelete_data[204];
  int trueCount;
  boolean_T tmp_data[204];
  if (iPk_size[0] == 0) {
    for (i6 = 0; i6 < 2; i6++) {
      y_size[i6] = (signed char)(1 - i6);
    }

    idx_size[0] = y_size[1];
    loop_ub = y_size[1];
    for (i6 = 0; i6 < loop_ub; i6++) {
      idx_data[i6] = y_data[y_size[0] * i6];
    }
  } else {
    loop_ub = iPk_size[0];
    for (i6 = 0; i6 < loop_ub; i6++) {
      locs_data[i6] = 1.0 + (double)((int)iPk_data[i6] - 1);
    }

    locs_temp_size[0] = iPk_size[0];
    loop_ub = iPk_size[0];
    for (i6 = 0; i6 < loop_ub; i6++) {
      locs_temp_data[i6] = y[(int)iPk_data[i6] - 1];
    }

    sort(locs_temp_data, locs_temp_size, iidx_data, iidx_size);
    sortIdx_size_idx_0 = iidx_size[0];
    loop_ub = iidx_size[0];
    for (i6 = 0; i6 < loop_ub; i6++) {
      sortIdx_data[i6] = iidx_data[i6];
    }

    loop_ub = iidx_size[0];
    for (i6 = 0; i6 < loop_ub; i6++) {
      locs_temp_data[i6] = locs_data[sortIdx_data[i6] - 1];
    }

    loop_ub = (unsigned char)iidx_size[0];
    for (i6 = 0; i6 < loop_ub; i6++) {
      idelete_data[i6] = false;
    }

    for (i = 0; i < sortIdx_size_idx_0; i++) {
      if (!idelete_data[i]) {
        for (i6 = 0; i6 < sortIdx_size_idx_0; i6++) {
          tmp_data[i6] = ((locs_temp_data[i6] >= locs_data[sortIdx_data[i] - 1]
                           - 16.666666666666668) && (locs_temp_data[i6] <=
            locs_data[sortIdx_data[i] - 1] + 16.666666666666668));
        }

        loop_ub = (unsigned char)sortIdx_size_idx_0;
        for (i6 = 0; i6 < loop_ub; i6++) {
          idelete_data[i6] = (idelete_data[i6] || tmp_data[i6]);
        }

        idelete_data[i] = false;
      }
    }

    loop_ub = (unsigned char)iidx_size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= loop_ub; i++) {
      if (!idelete_data[i]) {
        trueCount++;
      }
    }

    sortIdx_size_idx_0 = 0;
    for (i = 0; i <= loop_ub; i++) {
      if (!idelete_data[i]) {
        iidx_data[sortIdx_size_idx_0] = i + 1;
        sortIdx_size_idx_0++;
      }
    }

    idx_size[0] = trueCount;
    for (i6 = 0; i6 < trueCount; i6++) {
      idx_data[i6] = sortIdx_data[iidx_data[i6] - 1];
    }

    c_sort(idx_data, idx_size);
  }
}

/*
 * Arguments    : const double yTemp[102]
 *                double iPk_data[]
 *                int iPk_size[1]
 *                double iInflect_data[]
 *                int iInflect_size[1]
 * Return Type  : void
 */
static void findLocalMaxima(const double yTemp[102], double iPk_data[], int
  iPk_size[1], double iInflect_data[], int iInflect_size[1])
{
  double b_yTemp[104];
  boolean_T yFinite[104];
  int nx;
  boolean_T x[103];
  int idx;
  signed char ii_data[103];
  int ii;
  boolean_T exitg3;
  boolean_T guard3 = false;
  int loop_ub;
  signed char tmp_data[104];
  int i2;
  double yTemp_data[104];
  signed char iTemp_data[104];
  int yTemp_size[1];
  double s_data[103];
  int s_size[1];
  double b_tmp_data[103];
  boolean_T x_data[102];
  int b_ii_data[102];
  int ii_size_idx_0;
  boolean_T exitg2;
  boolean_T guard2 = false;
  int c_ii_data[102];
  boolean_T exitg1;
  boolean_T guard1 = false;
  b_yTemp[0] = rtNaN;
  memcpy(&b_yTemp[1], &yTemp[0], 102U * sizeof(double));
  b_yTemp[103] = rtNaN;
  for (nx = 0; nx < 104; nx++) {
    yFinite[nx] = !rtIsNaN(b_yTemp[nx]);
  }

  for (nx = 0; nx < 103; nx++) {
    x[nx] = ((b_yTemp[nx] != b_yTemp[nx + 1]) && (yFinite[nx] || yFinite[nx + 1]));
  }

  idx = 0;
  ii = 1;
  exitg3 = false;
  while ((!exitg3) && (ii < 104)) {
    guard3 = false;
    if (x[ii - 1]) {
      idx++;
      ii_data[idx - 1] = (signed char)ii;
      if (idx >= 103) {
        exitg3 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }

    if (guard3) {
      ii++;
    }
  }

  if (1 > idx) {
    loop_ub = 0;
  } else {
    loop_ub = idx;
  }

  tmp_data[0] = 1;
  for (ii = 0; ii < loop_ub; ii++) {
    tmp_data[ii + 1] = (signed char)(ii_data[ii] + 1);
  }

  if (1 > idx) {
    i2 = 0;
  } else {
    i2 = idx;
  }

  nx = 1 + i2;
  for (ii = 0; ii < nx; ii++) {
    iTemp_data[ii] = tmp_data[ii];
  }

  yTemp_size[0] = 1 + loop_ub;
  loop_ub++;
  for (ii = 0; ii < loop_ub; ii++) {
    yTemp_data[ii] = b_yTemp[iTemp_data[ii] - 1];
  }

  diff(yTemp_data, yTemp_size, s_data, s_size);
  b_sign(s_data, s_size);
  diff(s_data, s_size, b_tmp_data, yTemp_size);
  loop_ub = yTemp_size[0];
  for (ii = 0; ii < loop_ub; ii++) {
    x_data[ii] = (b_tmp_data[ii] < 0.0);
  }

  nx = yTemp_size[0];
  idx = 0;
  ii_size_idx_0 = yTemp_size[0];
  ii = 1;
  exitg2 = false;
  while ((!exitg2) && (ii <= nx)) {
    guard2 = false;
    if (x_data[ii - 1]) {
      idx++;
      b_ii_data[idx - 1] = ii;
      if (idx >= nx) {
        exitg2 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2) {
      ii++;
    }
  }

  if (yTemp_size[0] == 1) {
    if (idx == 0) {
      ii_size_idx_0 = 0;
    }
  } else if (1 > idx) {
    ii_size_idx_0 = 0;
  } else {
    ii_size_idx_0 = idx;
  }

  if (1 > s_size[0] - 1) {
    loop_ub = 0;
  } else {
    loop_ub = s_size[0] - 1;
  }

  if (2 > s_size[0]) {
    ii = 0;
  } else {
    ii = 1;
  }

  for (nx = 0; nx < loop_ub; nx++) {
    x_data[nx] = (s_data[nx] != s_data[ii + nx]);
  }

  idx = 0;
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii <= loop_ub)) {
    guard1 = false;
    if (x_data[ii - 1]) {
      idx++;
      c_ii_data[idx - 1] = ii;
      if (idx >= loop_ub) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      ii++;
    }
  }

  if (loop_ub == 1) {
    if (idx == 0) {
      loop_ub = 0;
    }
  } else if (1 > idx) {
    loop_ub = 0;
  } else {
    loop_ub = idx;
  }

  iInflect_size[0] = loop_ub;
  for (ii = 0; ii < loop_ub; ii++) {
    iInflect_data[ii] = (double)iTemp_data[c_ii_data[ii]] - 1.0;
  }

  iPk_size[0] = ii_size_idx_0;
  for (ii = 0; ii < ii_size_idx_0; ii++) {
    iPk_data[ii] = (double)iTemp_data[b_ii_data[ii]] - 1.0;
  }
}

/*
 * Arguments    : const double y[102]
 *                double iPk_data[]
 *                int iPk_size[1]
 *                double iInf_data[]
 *                int iInf_size[1]
 *                double iInflect_data[]
 *                int iInflect_size[1]
 * Return Type  : void
 */
static void getAllPeaks(const double y[102], double iPk_data[], int iPk_size[1],
  double iInf_data[], int iInf_size[1], double iInflect_data[], int
  iInflect_size[1])
{
  boolean_T x[102];
  int idx;
  signed char ii_data[102];
  int ii;
  boolean_T exitg1;
  boolean_T guard1 = false;
  double yTemp[102];
  for (idx = 0; idx < 102; idx++) {
    x[idx] = (rtIsInf(y[idx]) && (y[idx] > 0.0));
  }

  idx = 0;
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii < 103)) {
    guard1 = false;
    if (x[ii - 1]) {
      idx++;
      ii_data[idx - 1] = (signed char)ii;
      if (idx >= 102) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      ii++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  iInf_size[0] = idx;
  for (ii = 0; ii < idx; ii++) {
    iInf_data[ii] = ii_data[ii];
  }

  memcpy(&yTemp[0], &y[0], 102U * sizeof(double));
  for (ii = 0; ii < idx; ii++) {
    ii_data[ii] = (signed char)iInf_data[ii];
  }

  for (ii = 0; ii < idx; ii++) {
    yTemp[ii_data[ii] - 1] = rtNaN;
  }

  findLocalMaxima(yTemp, iPk_data, iPk_size, iInflect_data, iInflect_size);
}

/*
 * Arguments    : double idx_data[]
 *                int idx_size[1]
 * Return Type  : void
 */
static void keepAtMostNpPeaks(double idx_data[], int idx_size[1])
{
  double b_idx_data[204];
  int i10;
  if (idx_size[0] > 2) {
    for (i10 = 0; i10 < 2; i10++) {
      b_idx_data[i10] = idx_data[i10];
    }

    idx_size[0] = 2;
    for (i10 = 0; i10 < 2; i10++) {
      idx_data[i10] = b_idx_data[i10];
    }
  }
}

/*
 * Arguments    : const double Y[102]
 *                double iPk_data[]
 *                int iPk_size[1]
 * Return Type  : void
 */
static void removePeaksBelowMinPeakHeight(const double Y[102], double iPk_data[],
  int iPk_size[1])
{
  int end;
  int trueCount;
  int i;
  int partialTrueCount;
  if (!(iPk_size[0] == 0)) {
    end = iPk_size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= end; i++) {
      if (Y[(int)iPk_data[i] - 1] > rtMinusInf) {
        trueCount++;
      }
    }

    partialTrueCount = 0;
    for (i = 0; i <= end; i++) {
      if (Y[(int)iPk_data[i] - 1] > rtMinusInf) {
        iPk_data[partialTrueCount] = iPk_data[i];
        partialTrueCount++;
      }
    }

    iPk_size[0] = trueCount;
  }
}

/*
 * Arguments    : const double Y[102]
 *                double iPk_data[]
 *                int iPk_size[1]
 * Return Type  : void
 */
static void removePeaksBelowThreshold(const double Y[102], double iPk_data[],
  int iPk_size[1])
{
  signed char csz_idx_0;
  double base_data[102];
  int k;
  int trueCount;
  int i;
  int partialTrueCount;
  csz_idx_0 = (signed char)iPk_size[0];
  for (k = 0; k + 1 <= csz_idx_0; k++) {
    if ((Y[(int)(iPk_data[k] - 1.0) - 1] >= Y[(int)(iPk_data[k] + 1.0) - 1]) ||
        rtIsNaN(Y[(int)(iPk_data[k] + 1.0) - 1])) {
      base_data[k] = Y[(int)(iPk_data[k] - 1.0) - 1];
    } else {
      base_data[k] = Y[(int)(iPk_data[k] + 1.0) - 1];
    }
  }

  k = iPk_size[0] - 1;
  trueCount = 0;
  for (i = 0; i <= k; i++) {
    if (Y[(int)iPk_data[i] - 1] - base_data[i] >= 0.0) {
      trueCount++;
    }
  }

  partialTrueCount = 0;
  for (i = 0; i <= k; i++) {
    if (Y[(int)iPk_data[i] - 1] - base_data[i] >= 0.0) {
      iPk_data[partialTrueCount] = iPk_data[i];
      partialTrueCount++;
    }
  }

  iPk_size[0] = trueCount;
}

/*
 * Arguments    : const double Yin[102]
 *                double Ypk_data[]
 *                int Ypk_size[2]
 *                double Xpk_data[]
 *                int Xpk_size[2]
 * Return Type  : void
 */
void b_findpeaks(const double Yin[102], double Ypk_data[], int Ypk_size[2],
                 double Xpk_data[], int Xpk_size[2])
{
  double iFinite_data[102];
  int iFinite_size[1];
  double iInf_data[102];
  int iInf_size[1];
  double iInflect_data[102];
  int iInflect_size[1];
  int iPk_size[1];
  int loop_ub;
  int i5;
  double iPk_data[204];
  double b_iPk_data[204];
  int ia_data[102];
  int ib_data[102];
  int ib_size[1];
  int x_size[1];
  double x_data[204];
  int iidx_data[204];
  int b_iPk_size[1];
  getAllPeaks(Yin, iFinite_data, iFinite_size, iInf_data, iInf_size,
              iInflect_data, iInflect_size);
  removePeaksBelowMinPeakHeight(Yin, iFinite_data, iFinite_size);
  iPk_size[0] = iFinite_size[0];
  loop_ub = iFinite_size[0];
  for (i5 = 0; i5 < loop_ub; i5++) {
    iPk_data[i5] = iFinite_data[i5];
  }

  loop_ub = iPk_size[0];
  for (i5 = 0; i5 < loop_ub; i5++) {
    iFinite_data[i5] = iPk_data[i5];
  }

  removePeaksBelowThreshold(Yin, iFinite_data, iFinite_size);
  iPk_size[0] = iFinite_size[0];
  loop_ub = iFinite_size[0];
  for (i5 = 0; i5 < loop_ub; i5++) {
    iPk_data[i5] = iFinite_data[i5];
  }

  do_vectors(iPk_data, iPk_size, iInf_data, iInf_size, b_iPk_data, iFinite_size,
             ia_data, iInflect_size, ib_data, ib_size);
  d_findPeaksSeparatedByMoreThanM(Yin, b_iPk_data, iFinite_size, iPk_data,
    iPk_size);
  if (iPk_size[0] == 0) {
  } else {
    x_size[0] = iPk_size[0];
    loop_ub = iPk_size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      x_data[i5] = Yin[(int)b_iPk_data[(int)iPk_data[i5] - 1] - 1];
    }

    sort(x_data, x_size, iidx_data, iFinite_size);
    loop_ub = iFinite_size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      x_data[i5] = iPk_data[iidx_data[i5] - 1];
    }

    iPk_size[0] = iFinite_size[0];
    loop_ub = iFinite_size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      iPk_data[i5] = x_data[i5];
    }
  }

  keepAtMostNpPeaks(iPk_data, iPk_size);
  for (i5 = 0; i5 < 102; i5++) {
    iFinite_data[i5] = 1.0 + (double)i5;
  }

  b_iPk_size[0] = iPk_size[0];
  loop_ub = iPk_size[0];
  for (i5 = 0; i5 < loop_ub; i5++) {
    x_data[i5] = b_iPk_data[(int)iPk_data[i5] - 1];
  }

  assignOutputs(Yin, iFinite_data, x_data, b_iPk_size, Ypk_data, Ypk_size,
                Xpk_data, Xpk_size);
}

/*
 * Arguments    : const double Yin[102]
 *                double Ypk_data[]
 *                int Ypk_size[2]
 *                double Xpk_data[]
 *                int Xpk_size[2]
 * Return Type  : void
 */
void findpeaks(const double Yin[102], double Ypk_data[], int Ypk_size[2], double
               Xpk_data[], int Xpk_size[2])
{
  double iFinite_data[102];
  int iFinite_size[1];
  double iInf_data[102];
  int iInf_size[1];
  double iInflect_data[102];
  int iInflect_size[1];
  int iPk_size[1];
  int loop_ub;
  int i1;
  double iPk_data[204];
  double b_iPk_data[204];
  int ia_data[102];
  int ib_data[102];
  int ib_size[1];
  int x_size[1];
  double x_data[204];
  int iidx_data[204];
  int b_iPk_size[1];
  getAllPeaks(Yin, iFinite_data, iFinite_size, iInf_data, iInf_size,
              iInflect_data, iInflect_size);
  removePeaksBelowMinPeakHeight(Yin, iFinite_data, iFinite_size);
  iPk_size[0] = iFinite_size[0];
  loop_ub = iFinite_size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    iPk_data[i1] = iFinite_data[i1];
  }

  loop_ub = iPk_size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    iFinite_data[i1] = iPk_data[i1];
  }

  removePeaksBelowThreshold(Yin, iFinite_data, iFinite_size);
  iPk_size[0] = iFinite_size[0];
  loop_ub = iFinite_size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    iPk_data[i1] = iFinite_data[i1];
  }

  do_vectors(iPk_data, iPk_size, iInf_data, iInf_size, b_iPk_data, iFinite_size,
             ia_data, iInflect_size, ib_data, ib_size);
  c_findPeaksSeparatedByMoreThanM(Yin, b_iPk_data, iFinite_size, iPk_data,
    iPk_size);
  if (iPk_size[0] == 0) {
  } else {
    x_size[0] = iPk_size[0];
    loop_ub = iPk_size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      x_data[i1] = Yin[(int)b_iPk_data[(int)iPk_data[i1] - 1] - 1];
    }

    sort(x_data, x_size, iidx_data, iFinite_size);
    loop_ub = iFinite_size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      x_data[i1] = iPk_data[iidx_data[i1] - 1];
    }

    iPk_size[0] = iFinite_size[0];
    loop_ub = iFinite_size[0];
    for (i1 = 0; i1 < loop_ub; i1++) {
      iPk_data[i1] = x_data[i1];
    }
  }

  keepAtMostNpPeaks(iPk_data, iPk_size);
  for (i1 = 0; i1 < 102; i1++) {
    iFinite_data[i1] = 1.0 + (double)i1;
  }

  b_iPk_size[0] = iPk_size[0];
  loop_ub = iPk_size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    x_data[i1] = b_iPk_data[(int)iPk_data[i1] - 1];
  }

  assignOutputs(Yin, iFinite_data, x_data, b_iPk_size, Ypk_data, Ypk_size,
                Xpk_data, Xpk_size);
}

/*
 * File trailer for findpeaks.c
 *
 * [EOF]
 */

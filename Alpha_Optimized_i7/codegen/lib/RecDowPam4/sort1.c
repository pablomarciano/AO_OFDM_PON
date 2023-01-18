/*
 * File: sort1.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 21:36:40
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "sort1.h"
#include "sortIdx.h"
#include "RecDowPam4_emxutil.h"

/* Function Declarations */
static void b_sort(emxArray_real_T *x, int dim, emxArray_int32_T *idx);

/* Function Definitions */

/*
 * Arguments    : emxArray_real_T *x
 *                int dim
 *                emxArray_int32_T *idx
 * Return Type  : void
 */
static void b_sort(emxArray_real_T *x, int dim, emxArray_int32_T *idx)
{
  int i11;
  emxArray_real_T *vwork;
  int vstride;
  int x_idx_0;
  int j;
  emxArray_int32_T *iidx;
  if (dim <= 1) {
    i11 = x->size[0];
  } else {
    i11 = 1;
  }

  emxInit_real_T1(&vwork, 1);
  vstride = vwork->size[0];
  vwork->size[0] = i11;
  emxEnsureCapacity((emxArray__common *)vwork, vstride, (int)sizeof(double));
  x_idx_0 = x->size[0];
  vstride = idx->size[0];
  idx->size[0] = x_idx_0;
  emxEnsureCapacity((emxArray__common *)idx, vstride, (int)sizeof(int));
  vstride = 1;
  x_idx_0 = 1;
  while (x_idx_0 <= dim - 1) {
    vstride *= x->size[0];
    x_idx_0 = 2;
  }

  j = 0;
  emxInit_int32_T(&iidx, 1);
  while (j + 1 <= vstride) {
    for (x_idx_0 = 0; x_idx_0 + 1 <= i11; x_idx_0++) {
      vwork->data[x_idx_0] = x->data[j + x_idx_0 * vstride];
    }

    sortIdx(vwork, iidx);
    for (x_idx_0 = 0; x_idx_0 + 1 <= i11; x_idx_0++) {
      x->data[j + x_idx_0 * vstride] = vwork->data[x_idx_0];
      idx->data[j + x_idx_0 * vstride] = iidx->data[x_idx_0];
    }

    j++;
  }

  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
}

/*
 * Arguments    : emxArray_real_T *x
 * Return Type  : void
 */
void c_sort(emxArray_real_T *x)
{
  int dim;
  int i12;
  emxArray_real_T *vwork;
  int j;
  int vstride;
  int k;
  emxArray_int32_T *b_vwork;
  dim = 2;
  if (x->size[0] != 1) {
    dim = 1;
  }

  if (dim <= 1) {
    i12 = x->size[0];
  } else {
    i12 = 1;
  }

  emxInit_real_T1(&vwork, 1);
  j = vwork->size[0];
  vwork->size[0] = i12;
  emxEnsureCapacity((emxArray__common *)vwork, j, (int)sizeof(double));
  vstride = 1;
  k = 1;
  while (k <= dim - 1) {
    vstride *= x->size[0];
    k = 2;
  }

  j = 0;
  emxInit_int32_T(&b_vwork, 1);
  while (j + 1 <= vstride) {
    for (k = 0; k + 1 <= i12; k++) {
      vwork->data[k] = x->data[j + k * vstride];
    }

    b_sortIdx(vwork, b_vwork);
    for (k = 0; k + 1 <= i12; k++) {
      x->data[j + k * vstride] = vwork->data[k];
    }

    j++;
  }

  emxFree_int32_T(&b_vwork);
  emxFree_real_T(&vwork);
}

/*
 * Arguments    : double x[4]
 * Return Type  : void
 */
void d_sort(double x[4])
{
  int idx[4];
  double x4[4];
  int idx4[4];
  double xwork[4];
  int m;
  int nNaNs;
  int ib;
  int k;
  signed char perm[4];
  int bLen;
  int nPairs;
  int i4;
  for (m = 0; m < 4; m++) {
    idx[m] = 0;
    x4[m] = 0.0;
    idx4[m] = 0;
    xwork[m] = 0.0;
  }

  nNaNs = -3;
  ib = 0;
  for (k = 0; k < 4; k++) {
    if (rtIsNaN(x[k])) {
      idx[-nNaNs] = k + 1;
      xwork[-nNaNs] = x[k];
      nNaNs++;
    } else {
      ib++;
      idx4[ib - 1] = k + 1;
      x4[ib - 1] = x[k];
      if (ib == 4) {
        ib = (k - nNaNs) - 6;
        if (x4[0] <= x4[1]) {
          m = 1;
          bLen = 2;
        } else {
          m = 2;
          bLen = 1;
        }

        if (x4[2] <= x4[3]) {
          nPairs = 3;
          i4 = 4;
        } else {
          nPairs = 4;
          i4 = 3;
        }

        if (x4[m - 1] <= x4[nPairs - 1]) {
          if (x4[bLen - 1] <= x4[nPairs - 1]) {
            perm[0] = (signed char)m;
            perm[1] = (signed char)bLen;
            perm[2] = (signed char)nPairs;
            perm[3] = (signed char)i4;
          } else if (x4[bLen - 1] <= x4[i4 - 1]) {
            perm[0] = (signed char)m;
            perm[1] = (signed char)nPairs;
            perm[2] = (signed char)bLen;
            perm[3] = (signed char)i4;
          } else {
            perm[0] = (signed char)m;
            perm[1] = (signed char)nPairs;
            perm[2] = (signed char)i4;
            perm[3] = (signed char)bLen;
          }
        } else if (x4[m - 1] <= x4[i4 - 1]) {
          if (x4[bLen - 1] <= x4[i4 - 1]) {
            perm[0] = (signed char)nPairs;
            perm[1] = (signed char)m;
            perm[2] = (signed char)bLen;
            perm[3] = (signed char)i4;
          } else {
            perm[0] = (signed char)nPairs;
            perm[1] = (signed char)m;
            perm[2] = (signed char)i4;
            perm[3] = (signed char)bLen;
          }
        } else {
          perm[0] = (signed char)nPairs;
          perm[1] = (signed char)i4;
          perm[2] = (signed char)m;
          perm[3] = (signed char)bLen;
        }

        idx[ib] = idx4[perm[0] - 1];
        idx[ib + 1] = idx4[perm[1] - 1];
        idx[ib + 2] = idx4[perm[2] - 1];
        idx[ib + 3] = idx4[perm[3] - 1];
        x[ib] = x4[perm[0] - 1];
        x[ib + 1] = x4[perm[1] - 1];
        x[ib + 2] = x4[perm[2] - 1];
        x[ib + 3] = x4[perm[3] - 1];
        ib = 0;
      }
    }
  }

  if (ib > 0) {
    for (m = 0; m < 4; m++) {
      perm[m] = 0;
    }

    if (ib == 1) {
      perm[0] = 1;
    } else if (ib == 2) {
      if (x4[0] <= x4[1]) {
        perm[0] = 1;
        perm[1] = 2;
      } else {
        perm[0] = 2;
        perm[1] = 1;
      }
    } else if (x4[0] <= x4[1]) {
      if (x4[1] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 2;
        perm[2] = 3;
      } else if (x4[0] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 3;
        perm[2] = 2;
      } else {
        perm[0] = 3;
        perm[1] = 1;
        perm[2] = 2;
      }
    } else if (x4[0] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 1;
      perm[2] = 3;
    } else if (x4[1] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 3;
      perm[2] = 1;
    } else {
      perm[0] = 3;
      perm[1] = 2;
      perm[2] = 1;
    }

    for (k = 1; k <= ib; k++) {
      idx[(k - nNaNs) - ib] = idx4[perm[k - 1] - 1];
      x[(k - nNaNs) - ib] = x4[perm[k - 1] - 1];
    }
  }

  m = (nNaNs + 3) >> 1;
  for (k = 1; k <= m; k++) {
    ib = idx[k - nNaNs];
    idx[k - nNaNs] = idx[4 - k];
    idx[4 - k] = ib;
    x[k - nNaNs] = xwork[4 - k];
    x[4 - k] = xwork[k - nNaNs];
  }

  if (((nNaNs + 3) & 1) != 0) {
    x[(m - nNaNs) + 1] = xwork[(m - nNaNs) + 1];
  }

  if (1 - nNaNs > 1) {
    for (m = 0; m < 4; m++) {
      idx4[m] = 0;
    }

    nPairs = (1 - nNaNs) >> 2;
    bLen = 4;
    while (nPairs > 1) {
      if ((nPairs & 1) != 0) {
        nPairs--;
        ib = bLen * nPairs;
        m = 1 - (nNaNs + ib);
        if (m > bLen) {
          c_merge(idx, x, ib, bLen, m - bLen, idx4, xwork);
        }
      }

      ib = bLen << 1;
      nPairs >>= 1;
      for (k = 1; k <= nPairs; k++) {
        c_merge(idx, x, (k - 1) * ib, bLen, bLen, idx4, xwork);
      }

      bLen = ib;
    }

    if (1 - nNaNs > bLen) {
      c_merge(idx, x, 0, bLen, 1 - (nNaNs + bLen), idx4, xwork);
    }
  }
}

/*
 * Arguments    : emxArray_real_T *x
 *                emxArray_int32_T *idx
 * Return Type  : void
 */
void sort(emxArray_real_T *x, emxArray_int32_T *idx)
{
  int dim;
  dim = 2;
  if (x->size[0] != 1) {
    dim = 1;
  }

  b_sort(x, dim, idx);
}

/*
 * File trailer for sort1.c
 *
 * [EOF]
 */

/*
 * File: hist.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 21:36:40
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "hist.h"
#include "RecDowPam4_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *Y
 *                const double X[100]
 *                double no[100]
 * Return Type  : void
 */
void b_hist(const emxArray_real_T *Y, const double X[100], double no[100])
{
  double edges[101];
  int k;
  double nn[101];
  double absxk;
  int xind;
  int low_i;
  int exitg1;
  int low_ip1;
  int high_i;
  int mid_i;
  edges[0] = rtMinusInf;
  edges[100] = rtInf;
  for (k = 0; k < 99; k++) {
    edges[1 + k] = X[k] + (X[1 + k] - X[k]) / 2.0;
    absxk = fabs(edges[k + 1]);
    if ((!rtIsInf(absxk)) && (!rtIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &low_i);
        absxk = ldexp(1.0, low_i - 53);
      }
    } else {
      absxk = rtNaN;
    }

    edges[k + 1] += absxk;
  }

  memset(&nn[0], 0, 101U * sizeof(double));
  xind = 0;
  k = 0;
  do {
    exitg1 = 0;
    low_i = Y->size[1];
    if (k <= low_i - 1) {
      low_i = 0;
      if (!rtIsNaN(Y->data[xind])) {
        if ((Y->data[xind] >= edges[0]) && (Y->data[xind] < edges[100])) {
          low_i = 1;
          low_ip1 = 2;
          high_i = 101;
          while (high_i > low_ip1) {
            mid_i = (low_i + high_i) >> 1;
            if (Y->data[xind] >= edges[mid_i - 1]) {
              low_i = mid_i;
              low_ip1 = mid_i + 1;
            } else {
              high_i = mid_i;
            }
          }
        }

        if (Y->data[xind] == edges[100]) {
          low_i = 101;
        }
      }

      if (low_i > 0) {
        nn[low_i - 1]++;
      }

      xind++;
      k++;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  memcpy(&no[0], &nn[0], 100U * sizeof(double));
  no[99] += nn[100];
}

/*
 * Arguments    : const emxArray_real_T *Y
 *                const emxArray_real_T *X
 *                emxArray_real_T *no
 * Return Type  : void
 */
void hist(const emxArray_real_T *Y, const emxArray_real_T *X, emxArray_real_T
          *no)
{
  emxArray_real_T *xo;
  int low_i;
  int low_ip1;
  emxArray_real_T *edges;
  unsigned int outsize_idx_0;
  int k;
  double absxk;
  emxArray_real_T *nn;
  int high_i;
  int xind;
  int exitg1;
  int mid_i;
  emxInit_real_T(&xo, 2);
  low_i = X->size[1];
  low_ip1 = xo->size[0] * xo->size[1];
  xo->size[0] = 1;
  xo->size[1] = low_i;
  emxEnsureCapacity((emxArray__common *)xo, low_ip1, (int)sizeof(double));
  for (low_ip1 = 0; low_ip1 < low_i; low_ip1++) {
    xo->data[xo->size[0] * low_ip1] = X->data[low_ip1];
  }

  emxInit_real_T(&edges, 2);
  outsize_idx_0 = xo->size[1] + 1U;
  low_ip1 = edges->size[0] * edges->size[1];
  edges->size[0] = 1;
  edges->size[1] = (int)outsize_idx_0;
  emxEnsureCapacity((emxArray__common *)edges, low_ip1, (int)sizeof(double));
  for (k = 0; k <= xo->size[1] - 2; k++) {
    edges->data[1 + k] = xo->data[k] + (xo->data[1 + k] - xo->data[k]) / 2.0;
  }

  edges->data[0] = rtMinusInf;
  edges->data[edges->size[1] - 1] = rtInf;
  for (k = 1; k - 1 <= xo->size[1] - 2; k++) {
    absxk = fabs(edges->data[k]);
    if ((!rtIsInf(absxk)) && (!rtIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &high_i);
        absxk = ldexp(1.0, high_i - 53);
      }
    } else {
      absxk = rtNaN;
    }

    edges->data[k] += absxk;
  }

  emxFree_real_T(&xo);
  emxInit_real_T1(&nn, 1);
  outsize_idx_0 = (unsigned int)edges->size[1];
  low_ip1 = nn->size[0];
  nn->size[0] = (int)outsize_idx_0;
  emxEnsureCapacity((emxArray__common *)nn, low_ip1, (int)sizeof(double));
  low_i = (int)outsize_idx_0;
  for (low_ip1 = 0; low_ip1 < low_i; low_ip1++) {
    nn->data[low_ip1] = 0.0;
  }

  xind = 0;
  k = 0;
  do {
    exitg1 = 0;
    low_i = Y->size[1];
    if (k <= low_i - 1) {
      low_i = 0;
      if (!rtIsNaN(Y->data[xind])) {
        if ((Y->data[xind] >= edges->data[0]) && (Y->data[xind] < edges->
             data[edges->size[1] - 1])) {
          low_i = 1;
          low_ip1 = 2;
          high_i = edges->size[1];
          while (high_i > low_ip1) {
            mid_i = (low_i >> 1) + (high_i >> 1);
            if (((low_i & 1) == 1) && ((high_i & 1) == 1)) {
              mid_i++;
            }

            if (Y->data[xind] >= edges->data[mid_i - 1]) {
              low_i = mid_i;
              low_ip1 = mid_i + 1;
            } else {
              high_i = mid_i;
            }
          }
        }

        if (Y->data[xind] == edges->data[edges->size[1] - 1]) {
          low_i = edges->size[1];
        }
      }

      if (low_i > 0) {
        nn->data[low_i - 1]++;
      }

      xind++;
      k++;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  emxFree_real_T(&edges);
  low_ip1 = no->size[0] * no->size[1];
  no->size[0] = 1;
  no->size[1] = nn->size[0] - 1;
  emxEnsureCapacity((emxArray__common *)no, low_ip1, (int)sizeof(double));
  for (k = 0; k <= nn->size[0] - 2; k++) {
    no->data[k] = nn->data[k];
  }

  if (nn->size[0] - 1 > 0) {
    no->data[no->size[1] - 1] += nn->data[nn->size[0] - 1];
  }

  emxFree_real_T(&nn);
}

/*
 * File trailer for hist.c
 *
 * [EOF]
 */

/*
 * File: hist.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 18:36:28
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowDqpsk.h"
#include "hist.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *Y
 *                const double X[100]
 *                double no[100]
 * Return Type  : void
 */
void hist(const emxArray_real_T *Y, const double X[100], double no[100])
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
 * File trailer for hist.c
 *
 * [EOF]
 */

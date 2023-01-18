/*
 * File: linspace.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 21:36:40
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "linspace.h"
#include "RecDowPam4_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : double d1
 *                double d2
 *                double y[100]
 * Return Type  : void
 */
void b_linspace(double d1, double d2, double y[100])
{
  double delta1;
  int k;
  double delta2;
  y[99] = d2;
  y[0] = d1;
  if (((d1 < 0.0) != (d2 < 0.0)) && ((fabs(d1) > 8.9884656743115785E+307) ||
       (fabs(d2) > 8.9884656743115785E+307))) {
    delta1 = d1 / 99.0;
    delta2 = d2 / 99.0;
    for (k = 0; k < 98; k++) {
      y[1 + k] = (d1 + delta2 * (1.0 + (double)k)) - delta1 * (1.0 + (double)k);
    }
  } else {
    delta1 = (d2 - d1) / 99.0;
    for (k = 0; k < 98; k++) {
      y[1 + k] = d1 + (1.0 + (double)k) * delta1;
    }
  }
}

/*
 * Arguments    : double d1
 *                double d2
 *                double n1
 *                emxArray_real_T *y
 * Return Type  : void
 */
void linspace(double d1, double d2, double n1, emxArray_real_T *y)
{
  int i0;
  double delta1;
  double delta2;
  int k;
  if (n1 < 0.0) {
    n1 = 0.0;
  }

  i0 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int)floor(n1);
  emxEnsureCapacity((emxArray__common *)y, i0, (int)sizeof(double));
  if (y->size[1] >= 1) {
    y->data[y->size[1] - 1] = d2;
    if (y->size[1] >= 2) {
      y->data[0] = d1;
      if (y->size[1] >= 3) {
        if (((d1 < 0.0) != (d2 < 0.0)) && ((fabs(d1) > 8.9884656743115785E+307) ||
             (fabs(d2) > 8.9884656743115785E+307))) {
          delta1 = d1 / ((double)y->size[1] - 1.0);
          delta2 = d2 / ((double)y->size[1] - 1.0);
          i0 = y->size[1];
          for (k = 0; k <= i0 - 3; k++) {
            y->data[1 + k] = (d1 + delta2 * (1.0 + (double)k)) - delta1 * (1.0 +
              (double)k);
          }
        } else {
          delta1 = (d2 - d1) / ((double)y->size[1] - 1.0);
          i0 = y->size[1];
          for (k = 0; k <= i0 - 3; k++) {
            y->data[1 + k] = d1 + (1.0 + (double)k) * delta1;
          }
        }
      }
    }
  }
}

/*
 * File trailer for linspace.c
 *
 * [EOF]
 */

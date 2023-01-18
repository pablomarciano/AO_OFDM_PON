/*
 * File: linspace.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 15:11:07
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowDepsk.h"
#include "linspace.h"

/* Function Definitions */

/*
 * Arguments    : double d1
 *                double d2
 *                double y[100]
 * Return Type  : void
 */
void linspace(double d1, double d2, double y[100])
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
 * File trailer for linspace.c
 *
 * [EOF]
 */

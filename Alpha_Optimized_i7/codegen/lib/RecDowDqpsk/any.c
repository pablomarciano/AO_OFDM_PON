/*
 * File: any.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 18:36:28
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowDqpsk.h"
#include "any.h"

/* Function Definitions */

/*
 * Arguments    : const double x_data[]
 *                const int x_size[2]
 * Return Type  : boolean_T
 */
boolean_T any(const double x_data[], const int x_size[2])
{
  boolean_T y;
  int ix;
  boolean_T exitg1;
  boolean_T b0;
  y = false;
  ix = 0;
  exitg1 = false;
  while ((!exitg1) && (ix + 1 <= x_size[1])) {
    if ((x_data[ix] == 0.0) || rtIsNaN(x_data[ix])) {
      b0 = true;
    } else {
      b0 = false;
    }

    if (!b0) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

/*
 * File trailer for any.c
 *
 * [EOF]
 */

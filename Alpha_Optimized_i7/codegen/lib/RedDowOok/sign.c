/*
 * File: sign.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 12-Sep-2018 12:12:25
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "sign.h"

/* Function Definitions */

/*
 * Arguments    : double x_data[]
 *                int x_size[1]
 * Return Type  : void
 */
void b_sign(double x_data[], int x_size[1])
{
  int nx;
  int k;
  nx = x_size[0];
  for (k = 0; k + 1 <= nx; k++) {
    if (x_data[k] < 0.0) {
      x_data[k] = -1.0;
    } else if (x_data[k] > 0.0) {
      x_data[k] = 1.0;
    } else {
      if (x_data[k] == 0.0) {
        x_data[k] = 0.0;
      }
    }
  }
}

/*
 * File trailer for sign.c
 *
 * [EOF]
 */

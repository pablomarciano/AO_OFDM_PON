/*
 * File: diff.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 12-Sep-2018 12:12:25
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "diff.h"

/* Function Definitions */

/*
 * Arguments    : const double x_data[]
 *                const int x_size[1]
 *                double y_data[]
 *                int y_size[1]
 * Return Type  : void
 */
void diff(const double x_data[], const int x_size[1], double y_data[], int
          y_size[1])
{
  int b_x_size;
  int ixLead;
  int iyLead;
  double work_data_idx_0;
  int m;
  double tmp2;
  if (x_size[0] == 0) {
    y_size[0] = 0;
  } else {
    if (x_size[0] - 1 <= 1) {
      b_x_size = x_size[0] - 1;
    } else {
      b_x_size = 1;
    }

    if (b_x_size < 1) {
      y_size[0] = 0;
    } else {
      y_size[0] = (signed char)(x_size[0] - 1);
      if (!((signed char)(x_size[0] - 1) == 0)) {
        ixLead = 1;
        iyLead = 0;
        work_data_idx_0 = x_data[0];
        for (m = 2; m <= x_size[0]; m++) {
          tmp2 = work_data_idx_0;
          work_data_idx_0 = x_data[ixLead];
          tmp2 = x_data[ixLead] - tmp2;
          ixLead++;
          y_data[iyLead] = tmp2;
          iyLead++;
        }
      }
    }
  }
}

/*
 * File trailer for diff.c
 *
 * [EOF]
 */

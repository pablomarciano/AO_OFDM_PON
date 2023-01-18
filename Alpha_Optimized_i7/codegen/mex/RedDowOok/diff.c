/*
 * diff.c
 *
 * Code generation for function 'diff'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "diff.h"

/* Variable Definitions */
static emlrtRTEInfo n_emlrtRTEI = { 51, 19, "diff",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

/* Function Definitions */
void diff(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[1],
          real_T y_data[], int32_T y_size[1])
{
  int32_T ixLead;
  int32_T iyLead;
  real_T work_data_idx_0;
  int32_T m;
  real_T tmp2;
  if (x_size[0] == 0) {
    y_size[0] = 0;
  } else {
    ixLead = x_size[0] - 1;
    if (muIntScalarMin_sint32(ixLead, 1) < 1) {
      y_size[0] = 0;
    } else {
      if (x_size[0] != 1) {
      } else {
        emlrtErrorWithMessageIdR2012b(sp, &n_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      y_size[0] = (int8_T)(x_size[0] - 1);
      if (!((int8_T)(x_size[0] - 1) == 0)) {
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

/* End of code generation (diff.c) */

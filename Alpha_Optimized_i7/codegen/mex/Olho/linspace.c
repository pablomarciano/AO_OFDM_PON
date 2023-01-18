/*
 * linspace.c
 *
 * Code generation for function 'linspace'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Olho.h"
#include "linspace.h"
#include "Olho_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo m_emlrtRTEI = { 1, 14, "linspace",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\linspace.m"
};

/* Function Definitions */
void linspace(const emlrtStack *sp, real_T d2, real_T n1, emxArray_real_T *y)
{
  int32_T i1;
  real_T delta1;
  int32_T k;
  i1 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)muDoubleScalarFloor(n1);
  emxEnsureCapacity(sp, (emxArray__common *)y, i1, (int32_T)sizeof(real_T),
                    &m_emlrtRTEI);
  if (y->size[1] >= 1) {
    y->data[y->size[1] - 1] = d2;
    if (y->size[1] >= 2) {
      y->data[0] = 0.0;
      if (y->size[1] >= 3) {
        if ((d2 < 0.0) && (muDoubleScalarAbs(d2) > 8.9884656743115785E+307)) {
          delta1 = d2 / ((real_T)y->size[1] - 1.0);
          i1 = y->size[1];
          for (k = 0; k <= i1 - 3; k++) {
            y->data[1 + k] = delta1 * (1.0 + (real_T)k);
          }
        } else {
          delta1 = d2 / ((real_T)y->size[1] - 1.0);
          i1 = y->size[1];
          for (k = 0; k <= i1 - 3; k++) {
            y->data[1 + k] = (1.0 + (real_T)k) * delta1;
          }
        }
      }
    }
  }
}

/* End of code generation (linspace.c) */

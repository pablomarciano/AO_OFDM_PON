/*
 * linspace.c
 *
 * Code generation for function 'linspace'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "linspace.h"
#include "RecDowPam4_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, 14, "linspace",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\linspace.m"
};

static emlrtDCInfo emlrtDCI = { 31, 62, "linspace",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\linspace.m",
  4 };

/* Function Definitions */
void b_linspace(real_T d1, real_T d2, real_T y[100])
{
  real_T delta1;
  int32_T k;
  real_T delta2;
  y[99] = d2;
  y[0] = d1;
  if (((d1 < 0.0) != (d2 < 0.0)) && ((muDoubleScalarAbs(d1) >
        8.9884656743115785E+307) || (muDoubleScalarAbs(d2) >
        8.9884656743115785E+307))) {
    delta1 = d1 / 99.0;
    delta2 = d2 / 99.0;
    for (k = 0; k < 98; k++) {
      y[1 + k] = (d1 + delta2 * (1.0 + (real_T)k)) - delta1 * (1.0 + (real_T)k);
    }
  } else {
    delta1 = (d2 - d1) / 99.0;
    for (k = 0; k < 98; k++) {
      y[1 + k] = d1 + (1.0 + (real_T)k) * delta1;
    }
  }
}

void linspace(const emlrtStack *sp, real_T d1, real_T d2, real_T n1,
              emxArray_real_T *y)
{
  real_T delta1;
  int32_T i0;
  real_T delta2;
  int32_T k;
  if (n1 < 0.0) {
    n1 = 0.0;
  }

  delta1 = muDoubleScalarFloor(n1);
  if (!(delta1 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(rtNaN, &emlrtDCI, sp);
  }

  i0 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)delta1;
  emxEnsureCapacity(sp, (emxArray__common *)y, i0, (int32_T)sizeof(real_T),
                    &b_emlrtRTEI);
  if (y->size[1] >= 1) {
    y->data[y->size[1] - 1] = d2;
    if (y->size[1] >= 2) {
      y->data[0] = d1;
      if (y->size[1] >= 3) {
        if (((d1 < 0.0) != (d2 < 0.0)) && ((muDoubleScalarAbs(d1) >
              8.9884656743115785E+307) || (muDoubleScalarAbs(d2) >
              8.9884656743115785E+307))) {
          delta1 = d1 / ((real_T)y->size[1] - 1.0);
          delta2 = d2 / ((real_T)y->size[1] - 1.0);
          i0 = y->size[1];
          for (k = 0; k <= i0 - 3; k++) {
            y->data[1 + k] = (d1 + delta2 * (1.0 + (real_T)k)) - delta1 * (1.0 +
              (real_T)k);
          }
        } else {
          delta1 = (d2 - d1) / ((real_T)y->size[1] - 1.0);
          i0 = y->size[1];
          for (k = 0; k <= i0 - 3; k++) {
            y->data[1 + k] = d1 + (1.0 + (real_T)k) * delta1;
          }
        }
      }
    }
  }
}

/* End of code generation (linspace.c) */

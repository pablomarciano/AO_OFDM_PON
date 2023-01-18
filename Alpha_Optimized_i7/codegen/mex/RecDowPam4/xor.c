/*
 * xor.c
 *
 * Code generation for function 'xor'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "xor.h"
#include "RecDowPam4_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo cb_emlrtRTEI = { 1, 14, "xor",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\xor.m" };

static emlrtRTEInfo ic_emlrtRTEI = { 14, 15, "xor",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\xor.m" };

/* Function Definitions */
void xor(const emlrtStack *sp, const emxArray_real_T *s, const emxArray_real_T
         *t, emxArray_boolean_T *y)
{
  uint32_T varargin_1[2];
  int32_T k;
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  boolean_T exitg1;
  int32_T loop_ub;
  for (k = 0; k < 2; k++) {
    varargin_1[k] = (uint32_T)s->size[k];
  }

  for (k = 0; k < 2; k++) {
    varargin_2[k] = (uint32_T)t->size[k];
  }

  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!((int32_T)varargin_1[k] == (int32_T)varargin_2[k])) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &ic_emlrtRTEI,
      "MATLAB:andOrXor:sizeMismatch", 0);
  }

  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = s->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(boolean_T),
                    &cb_emlrtRTEI);
  loop_ub = s->size[0] * s->size[1];
  for (k = 0; k < loop_ub; k++) {
    y->data[k] = (((s->data[k] != 0.0) ^ (t->data[k] != 0.0)) != 0);
  }
}

/* End of code generation (xor.c) */

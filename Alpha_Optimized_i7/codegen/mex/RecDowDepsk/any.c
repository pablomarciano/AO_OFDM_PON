/*
 * any.c
 *
 * Code generation for function 'any'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowDepsk.h"
#include "any.h"

/* Variable Definitions */
static emlrtRSInfo fb_emlrtRSI = { 12, "any",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" };

static emlrtRTEInfo r_emlrtRTEI = { 42, 19, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 39, 19, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"
};

/* Function Definitions */
boolean_T any(const emlrtStack *sp, const real_T x_data[], const int32_T x_size
              [2])
{
  boolean_T y;
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  int32_T exitg2;
  boolean_T exitg1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fb_emlrtRSI;
  p = false;
  b_p = false;
  k = 0;
  do {
    exitg2 = 0;
    if (k < 2) {
      if (x_size[k] != 0) {
        exitg2 = 1;
      } else {
        k++;
      }
    } else {
      b_p = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  if (!b_p) {
  } else {
    p = true;
  }

  if (!p) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &s_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_specialEmpty", 0);
  }

  if ((x_size[1] == 1) || (x_size[1] != 1)) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &r_emlrtRTEI,
      "Coder:toolbox:eml_all_or_any_autoDimIncompatibility", 0);
  }

  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k + 1 <= x_size[1])) {
    if ((x_data[k] == 0.0) || muDoubleScalarIsNaN(x_data[k])) {
      p = true;
    } else {
      p = false;
    }

    if (!p) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

/* End of code generation (any.c) */

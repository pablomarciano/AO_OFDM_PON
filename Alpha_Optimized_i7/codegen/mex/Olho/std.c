/*
 * std.c
 *
 * Code generation for function 'std'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Olho.h"
#include "std.h"
#include "eml_int_forloop_overflow_check.h"
#include "error.h"
#include "isequal.h"
#include "Olho_data.h"

/* Variable Definitions */
static emlrtRSInfo fb_emlrtRSI = { 7, "std",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\std.m"
};

static emlrtRSInfo gb_emlrtRSI = { 56, "var",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

static emlrtRSInfo hb_emlrtRSI = { 149, "var",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

static emlrtRSInfo ib_emlrtRSI = { 182, "var",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

static emlrtRSInfo jb_emlrtRSI = { 189, "var",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

static emlrtRSInfo kb_emlrtRSI = { 12, "sqrt",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"
};

static emlrtRTEInfo bb_emlrtRTEI = { 34, 19, "var",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

static emlrtRTEInfo cb_emlrtRTEI = { 37, 19, "var",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\var.m"
};

/* Function Definitions */
real_T b_std(const emlrtStack *sp, const emxArray_real_T *varargin_1)
{
  boolean_T overflow;
  int32_T i2;
  int32_T d;
  real_T x;
  int32_T ix;
  real_T xbar;
  int32_T k;
  real_T r;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  overflow = !isequal(varargin_1);
  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &bb_emlrtRTEI,
      "Coder:toolbox:var_specialEmpty", 0);
  }

  if ((varargin_1->size[1] == 1) || (varargin_1->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &cb_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b_st.site = &gb_emlrtRSI;
  i2 = varargin_1->size[1];
  if (varargin_1->size[1] > 1) {
    d = varargin_1->size[1] - 1;
  } else {
    d = varargin_1->size[1];
  }

  if (varargin_1->size[1] == 0) {
    x = 0.0;
  } else {
    c_st.site = &hb_emlrtRSI;
    ix = 0;
    xbar = varargin_1->data[0];
    d_st.site = &ib_emlrtRSI;
    overflow = ((!(2 > varargin_1->size[1])) && (varargin_1->size[1] >
      2147483646));
    if (overflow) {
      e_st.site = &u_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 2; k <= i2; k++) {
      ix++;
      xbar += varargin_1->data[ix];
    }

    xbar /= (real_T)varargin_1->size[1];
    ix = 0;
    r = varargin_1->data[0] - xbar;
    x = r * r;
    d_st.site = &jb_emlrtRSI;
    overflow = ((!(2 > varargin_1->size[1])) && (varargin_1->size[1] >
      2147483646));
    if (overflow) {
      e_st.site = &u_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 2; k <= i2; k++) {
      ix++;
      r = varargin_1->data[ix] - xbar;
      x += r * r;
    }

    x /= (real_T)d;
  }

  st.site = &fb_emlrtRSI;
  if (x < 0.0) {
    b_st.site = &kb_emlrtRSI;
    b_error(&b_st);
  }

  return muDoubleScalarSqrt(x);
}

/* End of code generation (std.c) */

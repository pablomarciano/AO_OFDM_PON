/*
 * mean.c
 *
 * Code generation for function 'mean'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowDqpsk.h"
#include "mean.h"
#include "RecDowDqpsk_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "isequal.h"
#include "RecDowDqpsk_data.h"

/* Variable Definitions */
static emlrtRSInfo kb_emlrtRSI = { 40, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRSInfo lb_emlrtRSI = { 99, "combine_vector_elements",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

static emlrtRSInfo mb_emlrtRSI = { 113, "combine_vector_elements",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combine_vector_elements.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 1, 14, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 30, 5, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 21, 5, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 17, 15, "mean",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"
};

/* Function Definitions */
void mean(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  boolean_T overflow;
  int32_T i;
  int32_T vlen;
  int32_T xoffset;
  real_T s;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (((x->size[0] == 1) && (x->size[1] == 1)) || (x->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &s_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  overflow = !isequal(x);
  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &r_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  overflow = !isequal(x);
  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &q_emlrtRTEI,
      "Coder:toolbox:UnsupportedSpecialEmpty", 0);
  }

  st.site = &kb_emlrtRSI;
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)y, i, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity(&st, (emxArray__common *)y, i, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    vlen = y->size[1];
    for (i = 0; i < vlen; i++) {
      y->data[y->size[0] * i] = 0.0;
    }
  } else {
    vlen = x->size[0];
    b_st.site = &lb_emlrtRSI;
    overflow = (x->size[1] > 2147483646);
    if (overflow) {
      c_st.site = &nb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 0; i + 1 <= x->size[1]; i++) {
      xoffset = i * vlen;
      s = x->data[xoffset];
      b_st.site = &mb_emlrtRSI;
      if ((!(2 > vlen)) && (vlen > 2147483646)) {
        c_st.site = &nb_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (k = 2; k <= vlen; k++) {
        s += x->data[(xoffset + k) - 1];
      }

      y->data[i] = s;
    }
  }

  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)y, i, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  i = y->size[0];
  vlen = y->size[1];
  xoffset = x->size[0];
  vlen *= i;
  for (i = 0; i < vlen; i++) {
    y->data[i] /= (real_T)xoffset;
  }
}

/* End of code generation (mean.c) */

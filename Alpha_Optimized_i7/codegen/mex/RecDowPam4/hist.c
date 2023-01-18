/*
 * hist.c
 *
 * Code generation for function 'hist'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "hist.h"
#include "RecDowPam4_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "RecDowPam4_data.h"

/* Variable Definitions */
static emlrtRSInfo jb_emlrtRSI = { 110, "hist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\hist.m"
};

static emlrtRSInfo kb_emlrtRSI = { 59, "histc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\histc.m"
};

static emlrtRSInfo lb_emlrtRSI = { 137, "histc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\histc.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 1, 20, "hist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\hist.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 69, 5, "hist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\hist.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 110, 1, "hist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\hist.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 1, 14, "hist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\hist.m"
};

static emlrtRTEInfo tb_emlrtRTEI = { 60, 15, "histc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\histc.m"
};

static emlrtRTEInfo ub_emlrtRTEI = { 85, 19, "hist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\hist.m"
};

/* Function Definitions */
void b_hist(const emlrtStack *sp, const emxArray_real_T *Y, const real_T X[100],
            real_T no[100])
{
  real_T edges[101];
  int32_T k;
  real_T nn[101];
  real_T absxk;
  int32_T low_i;
  int32_T exitg2;
  boolean_T eok;
  int32_T xind;
  int32_T exitg1;
  int32_T low_ip1;
  int32_T high_i;
  int32_T mid_i;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  edges[0] = rtMinusInf;
  edges[100] = rtInf;
  for (k = 0; k < 99; k++) {
    edges[1 + k] = X[k] + (X[1 + k] - X[k]) / 2.0;
    absxk = muDoubleScalarAbs(edges[k + 1]);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &low_i);
        absxk = ldexp(1.0, low_i - 53);
      }
    } else {
      absxk = rtNaN;
    }

    edges[k + 1] += absxk;
  }

  st.site = &jb_emlrtRSI;
  memset(&nn[0], 0, 101U * sizeof(real_T));
  low_i = 1;
  do {
    exitg2 = 0;
    if (low_i + 1 < 102) {
      if (!(edges[low_i] >= edges[low_i - 1])) {
        eok = false;
        exitg2 = 1;
      } else {
        low_i++;
      }
    } else {
      eok = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  if (eok) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &tb_emlrtRTEI,
      "Coder:MATLAB:histc_InvalidInput3", 0);
  }

  xind = 0;
  k = 0;
  do {
    exitg1 = 0;
    low_i = Y->size[1];
    if (k <= low_i - 1) {
      low_i = 0;
      if (!muDoubleScalarIsNaN(Y->data[xind])) {
        if ((Y->data[xind] >= edges[0]) && (Y->data[xind] < edges[100])) {
          low_i = 1;
          low_ip1 = 2;
          high_i = 101;
          while (high_i > low_ip1) {
            mid_i = (low_i + high_i) >> 1;
            if (Y->data[xind] >= edges[mid_i - 1]) {
              low_i = mid_i;
              low_ip1 = mid_i + 1;
            } else {
              high_i = mid_i;
            }
          }
        }

        if (Y->data[xind] == edges[100]) {
          low_i = 101;
        }
      }

      if (low_i > 0) {
        nn[low_i - 1]++;
      }

      xind++;
      k++;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  memcpy(&no[0], &nn[0], 100U * sizeof(real_T));
  no[99] += nn[100];
}

void hist(const emlrtStack *sp, const emxArray_real_T *Y, const emxArray_real_T *
          X, emxArray_real_T *no)
{
  emxArray_real_T *xo;
  int32_T nbins;
  int32_T low_ip1;
  emxArray_real_T *edges;
  uint32_T outsize_idx_0;
  int32_T k;
  real_T absxk;
  emxArray_real_T *nn;
  int32_T high_i;
  boolean_T guard1 = false;
  boolean_T eok;
  int32_T exitg2;
  int32_T xind;
  int32_T exitg1;
  int32_T mid_i;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (!(X->size[1] == 1)) {
  } else {
    emlrtErrorWithMessageIdR2012b(sp, &ub_emlrtRTEI,
      "Coder:toolbox:hist_variableSizeScalarX", 0);
  }

  emxInit_real_T(sp, &xo, 2, &f_emlrtRTEI, true);
  nbins = X->size[1];
  low_ip1 = xo->size[0] * xo->size[1];
  xo->size[0] = 1;
  xo->size[1] = nbins;
  emxEnsureCapacity(sp, (emxArray__common *)xo, low_ip1, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  for (low_ip1 = 0; low_ip1 < nbins; low_ip1++) {
    xo->data[xo->size[0] * low_ip1] = X->data[low_ip1];
  }

  emxInit_real_T(sp, &edges, 2, &d_emlrtRTEI, true);
  outsize_idx_0 = xo->size[1] + 1U;
  low_ip1 = edges->size[0] * edges->size[1];
  edges->size[0] = 1;
  edges->size[1] = (int32_T)outsize_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)edges, low_ip1, (int32_T)sizeof
                    (real_T), &c_emlrtRTEI);
  for (k = 0; k <= xo->size[1] - 2; k++) {
    edges->data[1 + k] = xo->data[k] + (xo->data[1 + k] - xo->data[k]) / 2.0;
  }

  edges->data[0] = rtMinusInf;
  edges->data[edges->size[1] - 1] = rtInf;
  for (k = 1; k - 1 <= xo->size[1] - 2; k++) {
    absxk = muDoubleScalarAbs(edges->data[k]);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &high_i);
        absxk = ldexp(1.0, high_i - 53);
      }
    } else {
      absxk = rtNaN;
    }

    edges->data[k] += absxk;
  }

  emxFree_real_T(&xo);
  emxInit_real_T1(sp, &nn, 1, &e_emlrtRTEI, true);
  st.site = &jb_emlrtRSI;
  outsize_idx_0 = (uint32_T)edges->size[1];
  low_ip1 = nn->size[0];
  nn->size[0] = (int32_T)outsize_idx_0;
  emxEnsureCapacity(&st, (emxArray__common *)nn, low_ip1, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  nbins = (int32_T)outsize_idx_0;
  for (low_ip1 = 0; low_ip1 < nbins; low_ip1++) {
    nn->data[low_ip1] = 0.0;
  }

  b_st.site = &kb_emlrtRSI;
  nbins = edges->size[1];
  guard1 = false;
  if (nbins > 1) {
    c_st.site = &lb_emlrtRSI;
    if (nbins > 2147483646) {
      d_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    low_ip1 = 1;
    do {
      exitg2 = 0;
      if (low_ip1 + 1 <= nbins) {
        if (!(edges->data[low_ip1] >= edges->data[low_ip1 - 1])) {
          eok = false;
          exitg2 = 1;
        } else {
          low_ip1++;
        }
      } else {
        guard1 = true;
        exitg2 = 1;
      }
    } while (exitg2 == 0);
  } else {
    guard1 = true;
  }

  if (guard1) {
    eok = true;
  }

  if (eok) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &tb_emlrtRTEI,
      "Coder:MATLAB:histc_InvalidInput3", 0);
  }

  xind = 0;
  k = 0;
  do {
    exitg1 = 0;
    nbins = Y->size[1];
    if (k <= nbins - 1) {
      nbins = 0;
      if (!muDoubleScalarIsNaN(Y->data[xind])) {
        if ((Y->data[xind] >= edges->data[0]) && (Y->data[xind] < edges->
             data[edges->size[1] - 1])) {
          nbins = 1;
          low_ip1 = 2;
          high_i = edges->size[1];
          while (high_i > low_ip1) {
            mid_i = (nbins >> 1) + (high_i >> 1);
            if (((nbins & 1) == 1) && ((high_i & 1) == 1)) {
              mid_i++;
            }

            if (Y->data[xind] >= edges->data[mid_i - 1]) {
              nbins = mid_i;
              low_ip1 = mid_i + 1;
            } else {
              high_i = mid_i;
            }
          }
        }

        if (Y->data[xind] == edges->data[edges->size[1] - 1]) {
          nbins = edges->size[1];
        }
      }

      if (nbins > 0) {
        nn->data[nbins - 1]++;
      }

      xind++;
      k++;
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  emxFree_real_T(&edges);
  low_ip1 = no->size[0] * no->size[1];
  no->size[0] = 1;
  no->size[1] = nn->size[0] - 1;
  emxEnsureCapacity(sp, (emxArray__common *)no, low_ip1, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  for (k = 0; k <= nn->size[0] - 2; k++) {
    no->data[k] = nn->data[k];
  }

  if (nn->size[0] - 1 > 0) {
    no->data[no->size[1] - 1] += nn->data[nn->size[0] - 1];
  }

  emxFree_real_T(&nn);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (hist.c) */

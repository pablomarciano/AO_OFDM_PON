/*
 * hist.c
 *
 * Code generation for function 'hist'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowDqpsk.h"
#include "hist.h"

/* Variable Definitions */
static emlrtRSInfo jc_emlrtRSI = { 110, "hist",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\hist.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 60, 15, "histc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\histc.m"
};

/* Function Definitions */
void hist(const emlrtStack *sp, const emxArray_real_T *Y, const real_T X[100],
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

  st.site = &jc_emlrtRSI;
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
    emlrtErrorWithMessageIdR2012b(&st, &y_emlrtRTEI,
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

/* End of code generation (hist.c) */

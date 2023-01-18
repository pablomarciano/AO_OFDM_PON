/*
 * sort1.c
 *
 * Code generation for function 'sort1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "sort1.h"
#include "assertValidDim.h"
#include "eml_int_forloop_overflow_check.h"
#include "sortIdx.h"
#include "nonSingletonDim.h"
#include "RedDowOok_data.h"

/* Type Definitions */
#ifndef struct_emxArray_int32_T_204
#define struct_emxArray_int32_T_204

struct emxArray_int32_T_204
{
  int32_T data[204];
  int32_T size[1];
};

#endif                                 /*struct_emxArray_int32_T_204*/

#ifndef typedef_emxArray_int32_T_204
#define typedef_emxArray_int32_T_204

typedef struct emxArray_int32_T_204 emxArray_int32_T_204;

#endif                                 /*typedef_emxArray_int32_T_204*/

/* Variable Definitions */
static emlrtRSInfo qc_emlrtRSI = { 19, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo rc_emlrtRSI = { 48, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo sc_emlrtRSI = { 69, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo tc_emlrtRSI = { 72, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo uc_emlrtRSI = { 74, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo vc_emlrtRSI = { 77, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo wc_emlrtRSI = { 80, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo xc_emlrtRSI = { 82, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo yc_emlrtRSI = { 49, "prodsize",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\prodsize.m"
};

/* Function Declarations */
static void b_sort(const emlrtStack *sp, real_T x_data[], int32_T x_size[1],
                   int32_T dim, int32_T idx_data[], int32_T idx_size[1]);

/* Function Definitions */
static void b_sort(const emlrtStack *sp, real_T x_data[], int32_T x_size[1],
                   int32_T dim, int32_T idx_data[], int32_T idx_size[1])
{
  int32_T i14;
  real_T vwork_data[204];
  int32_T vwork_size[1];
  int32_T vstride;
  int32_T k;
  int32_T j;
  int32_T iidx_data[204];
  int32_T iidx_size[1];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  assertValidDim();
  if (dim <= 1) {
    i14 = x_size[0];
  } else {
    i14 = 1;
  }

  vwork_size[0] = (uint8_T)i14;
  idx_size[0] = (uint8_T)x_size[0];
  st.site = &sc_emlrtRSI;
  vstride = 1;
  b_st.site = &yc_emlrtRSI;
  if ((!(1 > dim - 1)) && (dim - 1 > 2147483646)) {
    c_st.site = &t_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  k = 1;
  while (k <= dim - 1) {
    vstride *= x_size[0];
    k = 2;
  }

  st.site = &tc_emlrtRSI;
  st.site = &uc_emlrtRSI;
  if ((!(1 > vstride)) && (vstride > 2147483646)) {
    b_st.site = &t_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (j = 0; j + 1 <= vstride; j++) {
    st.site = &vc_emlrtRSI;
    for (k = 0; k + 1 <= i14; k++) {
      vwork_data[k] = x_data[j + k * vstride];
    }

    st.site = &wc_emlrtRSI;
    sortIdx(&st, vwork_data, vwork_size, iidx_data, iidx_size);
    st.site = &xc_emlrtRSI;
    for (k = 0; k + 1 <= i14; k++) {
      x_data[j + k * vstride] = vwork_data[k];
      idx_data[j + k * vstride] = iidx_data[k];
    }
  }
}

void c_sort(const emlrtStack *sp, real_T x_data[], int32_T x_size[1])
{
  int32_T dim;
  int32_T i15;
  real_T vwork_data[204];
  int32_T vwork_size[1];
  int32_T vstride;
  int32_T k;
  emxArray_int32_T_204 ce_emlrtRSI;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  dim = nonSingletonDim(x_size);
  st.site = &rc_emlrtRSI;
  assertValidDim();
  if (dim <= 1) {
    i15 = x_size[0];
  } else {
    i15 = 1;
  }

  vwork_size[0] = (uint8_T)i15;
  st.site = &sc_emlrtRSI;
  vstride = 1;
  b_st.site = &yc_emlrtRSI;
  if ((!(1 > dim - 1)) && (dim - 1 > 2147483646)) {
    c_st.site = &t_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  k = 1;
  while (k <= dim - 1) {
    vstride *= x_size[0];
    k = 2;
  }

  st.site = &tc_emlrtRSI;
  st.site = &uc_emlrtRSI;
  if ((!(1 > vstride)) && (vstride > 2147483646)) {
    b_st.site = &t_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (dim = 0; dim + 1 <= vstride; dim++) {
    st.site = &vc_emlrtRSI;
    for (k = 0; k + 1 <= i15; k++) {
      vwork_data[k] = x_data[dim + k * vstride];
    }

    st.site = &wc_emlrtRSI;
    b_sortIdx(&st, vwork_data, vwork_size, ce_emlrtRSI.data, ce_emlrtRSI.size);
    st.site = &xc_emlrtRSI;
    for (k = 0; k + 1 <= i15; k++) {
      x_data[dim + k * vstride] = vwork_data[k];
    }
  }
}

void d_sort(real_T x[2])
{
  real_T b_x[2];
  int32_T i20;
  boolean_T p;
  for (i20 = 0; i20 < 2; i20++) {
    b_x[i20] = x[i20];
  }

  if ((x[0] <= x[1]) || muDoubleScalarIsNaN(x[1])) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
  } else {
    b_x[0] = x[1];
    b_x[1] = x[0];
  }

  for (i20 = 0; i20 < 2; i20++) {
    x[i20] = b_x[i20];
  }
}

void sort(const emlrtStack *sp, real_T x_data[], int32_T x_size[1], int32_T
          idx_data[], int32_T idx_size[1])
{
  int32_T i13;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  i13 = 2;
  if (x_size[0] != 1) {
    i13 = 1;
  }

  st.site = &qc_emlrtRSI;
  b_sort(&st, x_data, x_size, i13, idx_data, idx_size);
}

/* End of code generation (sort1.c) */

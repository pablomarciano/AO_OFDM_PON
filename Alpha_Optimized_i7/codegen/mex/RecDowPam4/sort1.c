/*
 * sort1.c
 *
 * Code generation for function 'sort1'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "sort1.h"
#include "eml_int_forloop_overflow_check.h"
#include "sortIdx.h"
#include "RecDowPam4_emxutil.h"
#include "RecDowPam4_data.h"

/* Variable Definitions */
static emlrtRSInfo nd_emlrtRSI = { 19, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo od_emlrtRSI = { 48, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo pd_emlrtRSI = { 69, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo qd_emlrtRSI = { 72, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo rd_emlrtRSI = { 74, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo sd_emlrtRSI = { 77, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo td_emlrtRSI = { 80, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo ud_emlrtRSI = { 82, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRSInfo vd_emlrtRSI = { 49, "prodsize",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\prodsize.m"
};

static emlrtRSInfo le_emlrtRSI = { 527, "sortIdx",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"
};

static emlrtRSInfo ve_emlrtRSI = { 66, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 1, 20, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

static emlrtRTEInfo kb_emlrtRTEI = { 50, 1, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\sort.m"
};

/* Function Declarations */
static void b_sort(const emlrtStack *sp, emxArray_real_T *x, int32_T dim,
                   emxArray_int32_T *idx);

/* Function Definitions */
static void b_sort(const emlrtStack *sp, emxArray_real_T *x, int32_T dim,
                   emxArray_int32_T *idx)
{
  int32_T i12;
  emxArray_real_T *vwork;
  int32_T vstride;
  int32_T x_idx_0;
  int32_T j;
  emxArray_int32_T *iidx;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &od_emlrtRSI;
  if (dim <= 1) {
    i12 = x->size[0];
  } else {
    i12 = 1;
  }

  emxInit_real_T1(sp, &vwork, 1, &kb_emlrtRTEI, true);
  vstride = vwork->size[0];
  vwork->size[0] = i12;
  emxEnsureCapacity(sp, (emxArray__common *)vwork, vstride, (int32_T)sizeof
                    (real_T), &ab_emlrtRTEI);
  x_idx_0 = x->size[0];
  vstride = idx->size[0];
  idx->size[0] = x_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)idx, vstride, (int32_T)sizeof
                    (int32_T), &ab_emlrtRTEI);
  st.site = &pd_emlrtRSI;
  vstride = 1;
  b_st.site = &vd_emlrtRSI;
  if ((!(1 > dim - 1)) && (dim - 1 > 2147483646)) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  x_idx_0 = 1;
  while (x_idx_0 <= dim - 1) {
    vstride *= x->size[0];
    x_idx_0 = 2;
  }

  st.site = &qd_emlrtRSI;
  st.site = &rd_emlrtRSI;
  if ((!(1 > vstride)) && (vstride > 2147483646)) {
    b_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  j = 0;
  emxInit_int32_T(sp, &iidx, 1, &ab_emlrtRTEI, true);
  while (j + 1 <= vstride) {
    st.site = &sd_emlrtRSI;
    if ((!(1 > i12)) && (i12 > 2147483646)) {
      b_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (x_idx_0 = 0; x_idx_0 + 1 <= i12; x_idx_0++) {
      vwork->data[x_idx_0] = x->data[j + x_idx_0 * vstride];
    }

    st.site = &td_emlrtRSI;
    sortIdx(&st, vwork, iidx);
    st.site = &ud_emlrtRSI;
    for (x_idx_0 = 0; x_idx_0 + 1 <= i12; x_idx_0++) {
      x->data[j + x_idx_0 * vstride] = vwork->data[x_idx_0];
      idx->data[j + x_idx_0 * vstride] = iidx->data[x_idx_0];
    }

    j++;
  }

  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_sort(const emlrtStack *sp, emxArray_real_T *x)
{
  int32_T dim;
  int32_T i13;
  emxArray_real_T *vwork;
  int32_T j;
  int32_T vstride;
  int32_T k;
  emxArray_int32_T *df_emlrtRSI;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  dim = 2;
  if (x->size[0] != 1) {
    dim = 1;
  }

  st.site = &od_emlrtRSI;
  if (dim <= 1) {
    i13 = x->size[0];
  } else {
    i13 = 1;
  }

  emxInit_real_T1(sp, &vwork, 1, &kb_emlrtRTEI, true);
  j = vwork->size[0];
  vwork->size[0] = i13;
  emxEnsureCapacity(sp, (emxArray__common *)vwork, j, (int32_T)sizeof(real_T),
                    &ab_emlrtRTEI);
  st.site = &pd_emlrtRSI;
  vstride = 1;
  k = 1;
  while (k <= dim - 1) {
    vstride *= x->size[0];
    k = 2;
  }

  st.site = &qd_emlrtRSI;
  st.site = &rd_emlrtRSI;
  if ((!(1 > vstride)) && (vstride > 2147483646)) {
    b_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  j = 0;
  emxInit_int32_T(sp, &df_emlrtRSI, 1, &ab_emlrtRTEI, true);
  while (j + 1 <= vstride) {
    st.site = &sd_emlrtRSI;
    if ((!(1 > i13)) && (i13 > 2147483646)) {
      b_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= i13; k++) {
      vwork->data[k] = x->data[j + k * vstride];
    }

    st.site = &td_emlrtRSI;
    b_sortIdx(&st, vwork, df_emlrtRSI);
    st.site = &ud_emlrtRSI;
    for (k = 0; k + 1 <= i13; k++) {
      x->data[j + k * vstride] = vwork->data[k];
    }

    j++;
  }

  emxFree_int32_T(&df_emlrtRSI);
  emxFree_real_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void d_sort(const emlrtStack *sp, real_T x[4])
{
  int32_T idx[4];
  real_T x4[4];
  int32_T idx4[4];
  real_T xwork[4];
  int32_T m;
  int32_T nNaNs;
  int32_T ib;
  int32_T k;
  int8_T perm[4];
  int32_T bLen;
  int32_T nPairs;
  int32_T i4;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ve_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &wd_emlrtRSI;
  c_st.site = &xd_emlrtRSI;
  for (m = 0; m < 4; m++) {
    idx[m] = 0;
    x4[m] = 0.0;
    idx4[m] = 0;
    xwork[m] = 0.0;
  }

  nNaNs = 0;
  ib = 0;
  for (k = 0; k < 4; k++) {
    if (muDoubleScalarIsNaN(x[k])) {
      idx[3 - nNaNs] = k + 1;
      xwork[3 - nNaNs] = x[k];
      nNaNs++;
    } else {
      ib++;
      idx4[ib - 1] = k + 1;
      x4[ib - 1] = x[k];
      if (ib == 4) {
        ib = k - nNaNs;
        if (x4[0] <= x4[1]) {
          m = 1;
          bLen = 2;
        } else {
          m = 2;
          bLen = 1;
        }

        if (x4[2] <= x4[3]) {
          nPairs = 3;
          i4 = 4;
        } else {
          nPairs = 4;
          i4 = 3;
        }

        if (x4[m - 1] <= x4[nPairs - 1]) {
          if (x4[bLen - 1] <= x4[nPairs - 1]) {
            perm[0] = (int8_T)m;
            perm[1] = (int8_T)bLen;
            perm[2] = (int8_T)nPairs;
            perm[3] = (int8_T)i4;
          } else if (x4[bLen - 1] <= x4[i4 - 1]) {
            perm[0] = (int8_T)m;
            perm[1] = (int8_T)nPairs;
            perm[2] = (int8_T)bLen;
            perm[3] = (int8_T)i4;
          } else {
            perm[0] = (int8_T)m;
            perm[1] = (int8_T)nPairs;
            perm[2] = (int8_T)i4;
            perm[3] = (int8_T)bLen;
          }
        } else if (x4[m - 1] <= x4[i4 - 1]) {
          if (x4[bLen - 1] <= x4[i4 - 1]) {
            perm[0] = (int8_T)nPairs;
            perm[1] = (int8_T)m;
            perm[2] = (int8_T)bLen;
            perm[3] = (int8_T)i4;
          } else {
            perm[0] = (int8_T)nPairs;
            perm[1] = (int8_T)m;
            perm[2] = (int8_T)i4;
            perm[3] = (int8_T)bLen;
          }
        } else {
          perm[0] = (int8_T)nPairs;
          perm[1] = (int8_T)i4;
          perm[2] = (int8_T)m;
          perm[3] = (int8_T)bLen;
        }

        idx[ib - 3] = idx4[perm[0] - 1];
        idx[ib - 2] = idx4[perm[1] - 1];
        idx[ib - 1] = idx4[perm[2] - 1];
        idx[ib] = idx4[perm[3] - 1];
        x[ib - 3] = x4[perm[0] - 1];
        x[ib - 2] = x4[perm[1] - 1];
        x[ib - 1] = x4[perm[2] - 1];
        x[ib] = x4[perm[3] - 1];
        ib = 0;
      }
    }
  }

  if (ib > 0) {
    for (m = 0; m < 4; m++) {
      perm[m] = 0;
    }

    if (ib == 1) {
      perm[0] = 1;
    } else if (ib == 2) {
      if (x4[0] <= x4[1]) {
        perm[0] = 1;
        perm[1] = 2;
      } else {
        perm[0] = 2;
        perm[1] = 1;
      }
    } else if (x4[0] <= x4[1]) {
      if (x4[1] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 2;
        perm[2] = 3;
      } else if (x4[0] <= x4[2]) {
        perm[0] = 1;
        perm[1] = 3;
        perm[2] = 2;
      } else {
        perm[0] = 3;
        perm[1] = 1;
        perm[2] = 2;
      }
    } else if (x4[0] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 1;
      perm[2] = 3;
    } else if (x4[1] <= x4[2]) {
      perm[0] = 2;
      perm[1] = 3;
      perm[2] = 1;
    } else {
      perm[0] = 3;
      perm[1] = 2;
      perm[2] = 1;
    }

    d_st.site = &fe_emlrtRSI;
    if (ib > 2147483646) {
      e_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 4; k - 3 <= ib; k++) {
      idx[(k - nNaNs) - ib] = idx4[perm[k - 4] - 1];
      x[(k - nNaNs) - ib] = x4[perm[k - 4] - 1];
    }
  }

  m = nNaNs >> 1;
  d_st.site = &ge_emlrtRSI;
  for (k = 1; k <= m; k++) {
    ib = idx[(k - nNaNs) + 3];
    idx[(k - nNaNs) + 3] = idx[4 - k];
    idx[4 - k] = ib;
    x[(k - nNaNs) + 3] = xwork[4 - k];
    x[4 - k] = xwork[(k - nNaNs) + 3];
  }

  if ((nNaNs & 1) != 0) {
    x[(m - nNaNs) + 4] = xwork[(m - nNaNs) + 4];
  }

  if (4 - nNaNs > 1) {
    c_st.site = &ce_emlrtRSI;
    for (m = 0; m < 4; m++) {
      idx4[m] = 0;
    }

    nPairs = (4 - nNaNs) >> 2;
    bLen = 4;
    while (nPairs > 1) {
      if ((nPairs & 1) != 0) {
        nPairs--;
        ib = bLen * nPairs;
        m = 4 - (nNaNs + ib);
        if (m > bLen) {
          d_st.site = &ke_emlrtRSI;
          c_merge(&d_st, idx, x, ib, bLen, m - bLen, idx4, xwork);
        }
      }

      ib = bLen << 1;
      nPairs >>= 1;
      d_st.site = &le_emlrtRSI;
      for (k = 1; k <= nPairs; k++) {
        d_st.site = &me_emlrtRSI;
        c_merge(&d_st, idx, x, (k - 1) * ib, bLen, bLen, idx4, xwork);
      }

      bLen = ib;
    }

    if (4 - nNaNs > bLen) {
      d_st.site = &ne_emlrtRSI;
      c_merge(&d_st, idx, x, 0, bLen, 4 - (nNaNs + bLen), idx4, xwork);
    }
  }
}

void sort(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T *idx)
{
  int32_T i11;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  i11 = 2;
  if (x->size[0] != 1) {
    i11 = 1;
  }

  st.site = &nd_emlrtRSI;
  b_sort(&st, x, i11, idx);
}

/* End of code generation (sort1.c) */

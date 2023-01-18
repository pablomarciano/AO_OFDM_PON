/*
 * diff.c
 *
 * Code generation for function 'diff'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "diff.h"
#include "RecDowPam4_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "RecDowPam4_data.h"

/* Variable Definitions */
static emlrtRSInfo sc_emlrtRSI = { 108, "diff",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

static emlrtRSInfo tc_emlrtRSI = { 106, "diff",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 1, 14, "diff",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

static emlrtRTEInfo cc_emlrtRTEI = { 51, 19, "diff",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

/* Function Definitions */
void diff(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T ySize_idx_0;
  int32_T iyLead;
  boolean_T overflow;
  real_T work_data_idx_0;
  int32_T m;
  real_T tmp1;
  real_T tmp2;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (x->size[0] == 0) {
    iyLead = y->size[0];
    y->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)y, iyLead, (int32_T)sizeof(real_T),
                      &x_emlrtRTEI);
  } else {
    ySize_idx_0 = x->size[0] - 1;
    if (muIntScalarMin_sint32(ySize_idx_0, 1) < 1) {
      iyLead = y->size[0];
      y->size[0] = 0;
      emxEnsureCapacity(sp, (emxArray__common *)y, iyLead, (int32_T)sizeof
                        (real_T), &x_emlrtRTEI);
    } else {
      overflow = (x->size[0] != 1);
      if (overflow) {
      } else {
        emlrtErrorWithMessageIdR2012b(sp, &cc_emlrtRTEI,
          "Coder:toolbox:autoDimIncompatibility", 0);
      }

      ySize_idx_0 = x->size[0] - 1;
      iyLead = y->size[0];
      y->size[0] = ySize_idx_0;
      emxEnsureCapacity(sp, (emxArray__common *)y, iyLead, (int32_T)sizeof
                        (real_T), &x_emlrtRTEI);
      if (!(y->size[0] == 0)) {
        ySize_idx_0 = 1;
        iyLead = 0;
        work_data_idx_0 = x->data[0];
        st.site = &tc_emlrtRSI;
        overflow = ((!(2 > x->size[0])) && (x->size[0] > 2147483646));
        if (overflow) {
          b_st.site = &cb_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }

        for (m = 2; m <= x->size[0]; m++) {
          tmp1 = x->data[ySize_idx_0];
          st.site = &sc_emlrtRSI;
          tmp2 = work_data_idx_0;
          work_data_idx_0 = tmp1;
          tmp1 -= tmp2;
          ySize_idx_0++;
          y->data[iyLead] = tmp1;
          iyLead++;
        }
      }
    }
  }
}

/* End of code generation (diff.c) */

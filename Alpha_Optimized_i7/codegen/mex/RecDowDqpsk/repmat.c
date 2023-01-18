/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowDqpsk.h"
#include "repmat.h"
#include "RecDowDqpsk_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "RecDowDqpsk_data.h"

/* Variable Definitions */
static emlrtRSInfo ob_emlrtRSI = { 18, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo pb_emlrtRSI = { 114, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo qb_emlrtRSI = { 117, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtMCInfo emlrtMCI = { 37, 5, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 1, 14, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo pc_emlrtRSI = { 37, "repmat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

/* Function Declarations */
static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

/* Function Definitions */
static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

void repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T varargin_1,
            emxArray_real_T *b)
{
  boolean_T overflow;
  boolean_T guard1 = false;
  int32_T outsize_idx_1;
  int32_T ibmat;
  const mxArray *y;
  char_T u[15];
  static const char_T cv0[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *m0;
  static const int32_T iv1[2] = { 1, 15 };

  int32_T itilerow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ob_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((varargin_1 != muDoubleScalarFloor(varargin_1)) || muDoubleScalarIsInf
      (varargin_1)) {
    overflow = false;
  } else {
    overflow = true;
  }

  guard1 = false;
  if (overflow) {
    if ((-2.147483648E+9 > varargin_1) || (2.147483647E+9 < varargin_1)) {
      overflow = false;
    } else {
      overflow = true;
    }

    if (overflow) {
      overflow = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &u_emlrtRTEI,
      "Coder:MATLAB:NonIntegerInput", 4, 12, MIN_int32_T, 12, MAX_int32_T);
  }

  outsize_idx_1 = a->size[1];
  if (outsize_idx_1 == a->size[1]) {
  } else {
    for (ibmat = 0; ibmat < 15; ibmat++) {
      u[ibmat] = cv0[ibmat];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 15, m0, &u[0]);
    emlrtAssign(&y, m0);
    st.site = &pc_emlrtRSI;
    b_error(&st, y, &emlrtMCI);
  }

  ibmat = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = outsize_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)b, ibmat, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);
  if (!(a->size[1] == 0)) {
    if ((int32_T)varargin_1 == 0) {
      overflow = true;
    } else if (outsize_idx_1 == 0) {
      overflow = true;
    } else {
      overflow = false;
    }

    if (!overflow) {
      st.site = &pb_emlrtRSI;
      overflow = (a->size[1] > 2147483646);
      if (overflow) {
        b_st.site = &nb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (outsize_idx_1 = 0; outsize_idx_1 + 1 <= a->size[1]; outsize_idx_1++)
      {
        ibmat = outsize_idx_1 * (int32_T)varargin_1;
        st.site = &qb_emlrtRSI;
        if ((!(1 > (int32_T)varargin_1)) && ((int32_T)varargin_1 > 2147483646))
        {
          b_st.site = &nb_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }

        for (itilerow = 1; itilerow <= (int32_T)varargin_1; itilerow++) {
          b->data[(ibmat + itilerow) - 1] = a->data[outsize_idx_1];
        }
      }
    }
  }
}

/* End of code generation (repmat.c) */

/*
 * eml_setop.c
 *
 * Code generation for function 'eml_setop'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "eml_setop.h"
#include "issorted.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo hc_emlrtRSI = { 225, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"
};

static emlrtRSInfo jc_emlrtRSI = { 228, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 392, 5, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 403, 9, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 430, 5, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"
};

/* Function Declarations */
static real_T skip_to_last_equal_value(int32_T *k, const real_T x_data[], const
  int32_T x_size[1]);

/* Function Definitions */
static real_T skip_to_last_equal_value(int32_T *k, const real_T x_data[], const
  int32_T x_size[1])
{
  real_T xk;
  boolean_T exitg1;
  real_T absxk;
  int32_T exponent;
  boolean_T p;
  xk = x_data[*k - 1];
  exitg1 = false;
  while ((!exitg1) && (*k < x_size[0])) {
    absxk = muDoubleScalarAbs(xk / 2.0);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &exponent);
        absxk = ldexp(1.0, exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if ((muDoubleScalarAbs(xk - x_data[*k]) < absxk) || (muDoubleScalarIsInf
         (x_data[*k]) && muDoubleScalarIsInf(xk))) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      (*k)++;
    } else {
      exitg1 = true;
    }
  }

  return xk;
}

void do_vectors(const emlrtStack *sp, const real_T a_data[], const int32_T
                a_size[1], const real_T b_data[], const int32_T b_size[1],
                real_T c_data[], int32_T c_size[1], int32_T ia_data[], int32_T
                ia_size[1], int32_T ib_data[], int32_T ib_size[1])
{
  int32_T na;
  int32_T nb;
  int32_T ncmax;
  int32_T nc;
  int32_T nia;
  int32_T nib;
  int32_T iafirst;
  int32_T ialast;
  int32_T ibfirst;
  int32_T iblast;
  int32_T b_ialast;
  real_T ak;
  int32_T b_iblast;
  real_T bk;
  real_T absxk;
  int32_T exponent;
  int32_T b_ia_data[102];
  boolean_T p;
  real_T b_c_data[204];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  na = a_size[0];
  nb = b_size[0];
  ncmax = a_size[0] + b_size[0];
  c_size[0] = (uint8_T)ncmax;
  ia_size[0] = a_size[0];
  ib_size[0] = b_size[0];
  if (!issorted(a_data, a_size)) {
    st.site = &hc_emlrtRSI;
    error(&st);
  }

  if (!issorted(b_data, b_size)) {
    st.site = &jc_emlrtRSI;
    b_error(&st);
  }

  nc = -1;
  nia = 0;
  nib = 0;
  iafirst = 1;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= na) && (iblast <= nb)) {
    b_ialast = ialast;
    ak = skip_to_last_equal_value(&b_ialast, a_data, a_size);
    ialast = b_ialast;
    b_iblast = iblast;
    bk = skip_to_last_equal_value(&b_iblast, b_data, b_size);
    iblast = b_iblast;
    absxk = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &exponent);
        absxk = ldexp(1.0, exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if ((muDoubleScalarAbs(bk - ak) < absxk) || (muDoubleScalarIsInf(ak) &&
         muDoubleScalarIsInf(bk))) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      nc++;
      c_data[nc] = ak;
      nia++;
      ia_data[nia - 1] = iafirst;
      ialast = b_ialast + 1;
      iafirst = b_ialast + 1;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else {
      if ((ak < bk) || muDoubleScalarIsNaN(bk)) {
        p = true;
      } else {
        p = false;
      }

      if (p) {
        nc++;
        nia++;
        c_data[nc] = ak;
        ia_data[nia - 1] = iafirst;
        ialast = b_ialast + 1;
        iafirst = b_ialast + 1;
      } else {
        nc++;
        nib++;
        c_data[nc] = bk;
        ib_data[nib - 1] = ibfirst + 1;
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }

  while (ialast <= na) {
    iafirst = ialast;
    ak = skip_to_last_equal_value(&iafirst, a_data, a_size);
    nc++;
    nia++;
    c_data[nc] = ak;
    ia_data[nia - 1] = ialast;
    ialast = iafirst + 1;
  }

  while (iblast <= nb) {
    iafirst = iblast;
    bk = skip_to_last_equal_value(&iafirst, b_data, b_size);
    nc++;
    nib++;
    c_data[nc] = bk;
    ib_data[nib - 1] = iblast;
    iblast = iafirst + 1;
  }

  if (a_size[0] > 0) {
    if (nia <= a_size[0]) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &o_emlrtRTEI,
        "Coder:builtins:AssertionFailed", 0);
    }

    if (1 > nia) {
      iafirst = 0;
    } else {
      iafirst = nia;
    }

    for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
      b_ia_data[ibfirst] = ia_data[ibfirst];
    }

    ia_size[0] = iafirst;
    for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
      ia_data[ibfirst] = b_ia_data[ibfirst];
    }
  }

  if (b_size[0] > 0) {
    if (nib <= b_size[0]) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &p_emlrtRTEI,
        "Coder:builtins:AssertionFailed", 0);
    }

    if (1 > nib) {
      iafirst = 0;
    } else {
      iafirst = nib;
    }

    for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
      b_ia_data[ibfirst] = ib_data[ibfirst];
    }

    ib_size[0] = iafirst;
    for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
      ib_data[ibfirst] = b_ia_data[ibfirst];
    }
  }

  if (ncmax > 0) {
    if (nc + 1 <= ncmax) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &q_emlrtRTEI,
        "Coder:builtins:AssertionFailed", 0);
    }

    if (1 > nc + 1) {
      iafirst = -1;
    } else {
      iafirst = nc;
    }

    for (ibfirst = 0; ibfirst <= iafirst; ibfirst++) {
      b_c_data[ibfirst] = c_data[ibfirst];
    }

    c_size[0] = iafirst + 1;
    iafirst++;
    for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
      c_data[ibfirst] = b_c_data[ibfirst];
    }
  }
}

/* End of code generation (eml_setop.c) */

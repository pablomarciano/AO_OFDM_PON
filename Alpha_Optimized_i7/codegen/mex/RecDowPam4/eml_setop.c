/*
 * eml_setop.c
 *
 * Code generation for function 'eml_setop'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "eml_setop.h"
#include "issorted.h"
#include "error.h"
#include "RecDowPam4_emxutil.h"

/* Variable Definitions */
static emlrtRSInfo fd_emlrtRSI = { 225, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"
};

static emlrtRSInfo hd_emlrtRSI = { 228, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 134, 22, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"
};

static emlrtRTEInfo dc_emlrtRTEI = { 392, 5, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"
};

static emlrtRTEInfo ec_emlrtRTEI = { 403, 9, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"
};

static emlrtRTEInfo fc_emlrtRTEI = { 430, 5, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"
};

/* Function Declarations */
static real_T skip_to_last_equal_value(int32_T *k, const emxArray_real_T *x);

/* Function Definitions */
static real_T skip_to_last_equal_value(int32_T *k, const emxArray_real_T *x)
{
  real_T xk;
  boolean_T exitg1;
  real_T absxk;
  int32_T exponent;
  boolean_T p;
  xk = x->data[*k - 1];
  exitg1 = false;
  while ((!exitg1) && (*k < x->size[0])) {
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

    if ((muDoubleScalarAbs(xk - x->data[*k]) < absxk) || (muDoubleScalarIsInf
         (x->data[*k]) && muDoubleScalarIsInf(xk))) {
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

void do_vectors(const emlrtStack *sp, const emxArray_real_T *a, const
                emxArray_real_T *b, emxArray_real_T *c, emxArray_int32_T *ia,
                emxArray_int32_T *ib)
{
  int32_T na;
  int32_T nb;
  int32_T ncmax;
  int32_T ibfirst;
  int32_T nc;
  int32_T nia;
  int32_T nib;
  int32_T iafirst;
  int32_T ialast;
  int32_T iblast;
  int32_T b_ialast;
  real_T ak;
  int32_T b_iblast;
  real_T bk;
  real_T absxk;
  int32_T exponent;
  emxArray_int32_T *b_ia;
  boolean_T p;
  emxArray_int32_T *b_ib;
  emxArray_real_T *b_c;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  na = a->size[0];
  nb = b->size[0];
  ncmax = a->size[0] + b->size[0];
  ibfirst = c->size[0];
  c->size[0] = ncmax;
  emxEnsureCapacity(sp, (emxArray__common *)c, ibfirst, (int32_T)sizeof(real_T),
                    &y_emlrtRTEI);
  ibfirst = ia->size[0];
  ia->size[0] = a->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ia, ibfirst, (int32_T)sizeof(int32_T),
                    &y_emlrtRTEI);
  ibfirst = ib->size[0];
  ib->size[0] = b->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)ib, ibfirst, (int32_T)sizeof(int32_T),
                    &y_emlrtRTEI);
  if (!issorted(a)) {
    st.site = &fd_emlrtRSI;
    b_error(&st);
  }

  if (!issorted(b)) {
    st.site = &hd_emlrtRSI;
    c_error(&st);
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
    ak = skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    b_iblast = iblast;
    bk = skip_to_last_equal_value(&b_iblast, b);
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
      c->data[nc] = ak;
      nia++;
      ia->data[nia - 1] = iafirst;
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
        c->data[nc] = ak;
        ia->data[nia - 1] = iafirst;
        ialast = b_ialast + 1;
        iafirst = b_ialast + 1;
      } else {
        nc++;
        nib++;
        c->data[nc] = bk;
        ib->data[nib - 1] = ibfirst + 1;
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }

  while (ialast <= na) {
    iafirst = ialast;
    ak = skip_to_last_equal_value(&iafirst, a);
    nc++;
    nia++;
    c->data[nc] = ak;
    ia->data[nia - 1] = ialast;
    ialast = iafirst + 1;
  }

  while (iblast <= nb) {
    iafirst = iblast;
    bk = skip_to_last_equal_value(&iafirst, b);
    nc++;
    nib++;
    c->data[nc] = bk;
    ib->data[nib - 1] = iblast;
    iblast = iafirst + 1;
  }

  if (a->size[0] > 0) {
    if (nia <= a->size[0]) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &dc_emlrtRTEI,
        "Coder:builtins:AssertionFailed", 0);
    }

    if (1 > nia) {
      iafirst = 0;
    } else {
      iafirst = nia;
    }

    emxInit_int32_T(sp, &b_ia, 1, &y_emlrtRTEI, true);
    ibfirst = b_ia->size[0];
    b_ia->size[0] = iafirst;
    emxEnsureCapacity(sp, (emxArray__common *)b_ia, ibfirst, (int32_T)sizeof
                      (int32_T), &y_emlrtRTEI);
    for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
      b_ia->data[ibfirst] = ia->data[ibfirst];
    }

    ibfirst = ia->size[0];
    ia->size[0] = b_ia->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)ia, ibfirst, (int32_T)sizeof
                      (int32_T), &y_emlrtRTEI);
    iafirst = b_ia->size[0];
    for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
      ia->data[ibfirst] = b_ia->data[ibfirst];
    }

    emxFree_int32_T(&b_ia);
  }

  if (b->size[0] > 0) {
    if (nib <= b->size[0]) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &ec_emlrtRTEI,
        "Coder:builtins:AssertionFailed", 0);
    }

    if (1 > nib) {
      iafirst = 0;
    } else {
      iafirst = nib;
    }

    emxInit_int32_T(sp, &b_ib, 1, &y_emlrtRTEI, true);
    ibfirst = b_ib->size[0];
    b_ib->size[0] = iafirst;
    emxEnsureCapacity(sp, (emxArray__common *)b_ib, ibfirst, (int32_T)sizeof
                      (int32_T), &y_emlrtRTEI);
    for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
      b_ib->data[ibfirst] = ib->data[ibfirst];
    }

    ibfirst = ib->size[0];
    ib->size[0] = b_ib->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)ib, ibfirst, (int32_T)sizeof
                      (int32_T), &y_emlrtRTEI);
    iafirst = b_ib->size[0];
    for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
      ib->data[ibfirst] = b_ib->data[ibfirst];
    }

    emxFree_int32_T(&b_ib);
  }

  if (ncmax > 0) {
    if (nc + 1 <= ncmax) {
    } else {
      emlrtErrorWithMessageIdR2012b(sp, &fc_emlrtRTEI,
        "Coder:builtins:AssertionFailed", 0);
    }

    if (1 > nc + 1) {
      iafirst = -1;
    } else {
      iafirst = nc;
    }

    emxInit_real_T1(sp, &b_c, 1, &y_emlrtRTEI, true);
    ibfirst = b_c->size[0];
    b_c->size[0] = iafirst + 1;
    emxEnsureCapacity(sp, (emxArray__common *)b_c, ibfirst, (int32_T)sizeof
                      (real_T), &y_emlrtRTEI);
    for (ibfirst = 0; ibfirst <= iafirst; ibfirst++) {
      b_c->data[ibfirst] = c->data[ibfirst];
    }

    ibfirst = c->size[0];
    c->size[0] = b_c->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)c, ibfirst, (int32_T)sizeof(real_T),
                      &y_emlrtRTEI);
    iafirst = b_c->size[0];
    for (ibfirst = 0; ibfirst < iafirst; ibfirst++) {
      c->data[ibfirst] = b_c->data[ibfirst];
    }

    emxFree_real_T(&b_c);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (eml_setop.c) */

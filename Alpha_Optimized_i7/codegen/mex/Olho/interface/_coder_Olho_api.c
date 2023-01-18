/*
 * _coder_Olho_api.c
 *
 * Code generation for function '_coder_Olho_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Olho.h"
#include "_coder_Olho_api.h"
#include "Olho_emxutil.h"
#include "Olho_data.h"

/* Variable Definitions */
static emlrtRTEInfo n_emlrtRTEI = { 1, 1, "_coder_Olho_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const real_T u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *t_simb,
  const char_T *identifier);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Dados, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m1);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *t_simb,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(t_simb), &thisId);
  emlrtDestroyArray(&t_simb);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  boolean_T bv0[2] = { false, true };

  int32_T iv1[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv1);
  ret->size[0] = iv1[0];
  ret->size[1] = iv1[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Dados, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(Dados), &thisId, y);
  emlrtDestroyArray(&Dados);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m0, (void *)u->data);
  emlrtSetDimensions((mxArray *)m0, u->size, 2);
  emlrtAssign(&y, m0);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void Olho_api(const mxArray * const prhs[5], const mxArray *plhs[5])
{
  emxArray_real_T *Dados;
  emxArray_real_T *olho_mat;
  emxArray_real_T *tn;
  real_T t_simb;
  real_T n_amos_p_sim;
  real_T ploting;
  real_T tmax;
  real_T Olho_Aber;
  real_T Aber_Lhi;
  real_T Aber_Llow;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Dados, 2, &n_emlrtRTEI, true);
  emxInit_real_T(&st, &olho_mat, 2, &n_emlrtRTEI, true);
  emxInit_real_T(&st, &tn, 2, &n_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Dados", Dados);
  t_simb = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "t_simb");
  n_amos_p_sim = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "n_amos_p_sim");
  ploting = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "ploting");
  tmax = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "tmax");

  /* Invoke the target function */
  Olho(&st, Dados, t_simb, n_amos_p_sim, ploting, tmax, olho_mat, tn, &Olho_Aber,
       &Aber_Lhi, &Aber_Llow);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(olho_mat);
  plhs[1] = emlrt_marshallOut(tn);
  plhs[2] = b_emlrt_marshallOut(Olho_Aber);
  plhs[3] = b_emlrt_marshallOut(Aber_Lhi);
  plhs[4] = b_emlrt_marshallOut(Aber_Llow);
  tn->canFreeData = false;
  emxFree_real_T(&tn);
  olho_mat->canFreeData = false;
  emxFree_real_T(&olho_mat);
  Dados->canFreeData = false;
  emxFree_real_T(&Dados);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_Olho_api.c) */

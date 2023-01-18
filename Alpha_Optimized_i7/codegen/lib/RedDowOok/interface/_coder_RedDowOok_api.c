/*
 * File: _coder_RedDowOok_api.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 12-Sep-2018 12:12:25
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_RedDowOok_api.h"
#include "_coder_RedDowOok_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL, "RedDowOok",
  NULL, false, { 2045744189U, 2170104910U, 2743257031U, 4284093946U }, NULL };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const real_T u[100]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *TxDataMat,
  const char_T *identifier, emxArray_real_T *y);
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *NPPB,
  const char_T *identifier);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Ix, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const real_T u);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const real_T u[100]
 * Return Type  : const mxArray *
 */
static const mxArray *b_emlrt_marshallOut(const real_T u[100])
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 1, 100 };

  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u);
  emlrtSetDimensions((mxArray *)m1, iv1, 2);
  emlrtAssign(&y, m1);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *TxDataMat
 *                const char_T *identifier
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *TxDataMat,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(TxDataMat), &thisId, y);
  emlrtDestroyArray(&TxDataMat);
}

/*
 * Arguments    : const emxArray_real_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *c_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 0, 0 };

  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u->data);
  emlrtSetDimensions((mxArray *)m2, u->size, 2);
  emlrtAssign(&y, m2);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *NPPB
 *                const char_T *identifier
 * Return Type  : real_T
 */
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *NPPB,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(NPPB), &thisId);
  emlrtDestroyArray(&NPPB);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *Ix
 *                const char_T *identifier
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *Ix, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(Ix), &thisId, y);
  emlrtDestroyArray(&Ix);
}

/*
 * Arguments    : const real_T u
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_real_T **pEmxArray
 *                int32_T numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T
 */
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  boolean_T bv0[2] = { false, true };

  int32_T iv3[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv3);
  ret->size[0] = iv3[0];
  ret->size[1] = iv3[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  boolean_T bv1[2] = { true, true };

  int32_T iv4[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv1[0],
    iv4);
  ret->size[0] = iv4[0];
  ret->size[1] = iv4[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T
 */
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const mxArray *prhs[10]
 *                const mxArray *plhs[15]
 * Return Type  : void
 */
void RedDowOok_api(const mxArray *prhs[10], const mxArray *plhs[15])
{
  real_T (*Inter)[100];
  real_T (*SeqFin)[100];
  real_T (*SeqFin2)[100];
  real_T (*Inter2)[100];
  emxArray_real_T *Ix;
  emxArray_real_T *TxDataMat;
  emxArray_real_T *TxData;
  emxArray_real_T *EoutCorrD;
  emxArray_real_T *EoutCorr2;
  emxArray_real_T *EoutCorr;
  real_T NPPB;
  real_T ThisCarr;
  real_T Nb;
  real_T NumBitDesc;
  real_T SyncPeriod;
  real_T CurTesSiz;
  real_T EyeOpenLow;
  real_T EyeOpen;
  real_T AberLev;
  real_T ValsLev;
  real_T LocMax;
  real_T MaxVal;
  real_T BerOOK;
  real_T LocMax2;
  real_T MaxVal2;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  Inter = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  SeqFin = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  SeqFin2 = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  Inter2 = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Ix, 2, true);
  emxInit_real_T(&st, &TxDataMat, 2, true);
  emxInit_real_T(&st, &TxData, 2, true);
  emxInit_real_T(&st, &EoutCorrD, 2, true);
  emxInit_real_T(&st, &EoutCorr2, 2, true);
  emxInit_real_T(&st, &EoutCorr, 2, true);
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);
  prhs[1] = emlrtProtectR2012b(prhs[1], 1, false, -1);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Ix", Ix);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "TxDataMat", TxDataMat);
  NPPB = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "NPPB");
  ThisCarr = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "ThisCarr");
  Nb = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "Nb");
  NumBitDesc = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "NumBitDesc");
  SyncPeriod = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "SyncPeriod");
  CurTesSiz = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "CurTesSiz");
  EyeOpenLow = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "EyeOpenLow");
  EyeOpen = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "EyeOpen");

  /* Invoke the target function */
  RedDowOok(Ix, TxDataMat, NPPB, ThisCarr, Nb, NumBitDesc, SyncPeriod, CurTesSiz,
            EyeOpenLow, EyeOpen, &AberLev, &ValsLev, *Inter, *SeqFin, &LocMax,
            &MaxVal, TxData, EoutCorrD, EoutCorr2, EoutCorr, &BerOOK, &LocMax2, *
            SeqFin2, &MaxVal2, *Inter2);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(AberLev);
  plhs[1] = emlrt_marshallOut(ValsLev);
  plhs[2] = b_emlrt_marshallOut(*Inter);
  plhs[3] = b_emlrt_marshallOut(*SeqFin);
  plhs[4] = emlrt_marshallOut(LocMax);
  plhs[5] = emlrt_marshallOut(MaxVal);
  plhs[6] = c_emlrt_marshallOut(TxData);
  plhs[7] = c_emlrt_marshallOut(EoutCorrD);
  plhs[8] = c_emlrt_marshallOut(EoutCorr2);
  plhs[9] = c_emlrt_marshallOut(EoutCorr);
  plhs[10] = emlrt_marshallOut(BerOOK);
  plhs[11] = emlrt_marshallOut(LocMax2);
  plhs[12] = b_emlrt_marshallOut(*SeqFin2);
  plhs[13] = emlrt_marshallOut(MaxVal2);
  plhs[14] = b_emlrt_marshallOut(*Inter2);
  EoutCorr->canFreeData = false;
  emxFree_real_T(&EoutCorr);
  EoutCorr2->canFreeData = false;
  emxFree_real_T(&EoutCorr2);
  EoutCorrD->canFreeData = false;
  emxFree_real_T(&EoutCorrD);
  TxData->canFreeData = false;
  emxFree_real_T(&TxData);
  TxDataMat->canFreeData = false;
  emxFree_real_T(&TxDataMat);
  Ix->canFreeData = false;
  emxFree_real_T(&Ix);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void RedDowOok_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  RedDowOok_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void RedDowOok_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void RedDowOok_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_RedDowOok_api.c
 *
 * [EOF]
 */

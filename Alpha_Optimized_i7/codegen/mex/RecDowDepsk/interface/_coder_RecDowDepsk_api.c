/*
 * _coder_RecDowDepsk_api.c
 *
 * Code generation for function '_coder_RecDowDepsk_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowDepsk.h"
#include "_coder_RecDowDepsk_api.h"
#include "RecDowDepsk_emxutil.h"
#include "RecDowDepsk_data.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 1, 1, "_coder_RecDowDepsk_api", "" };

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Esync1,
  const char_T *identifier, emxArray_real_T *y);
static const mxArray *c_emlrt_marshallOut(const real_T u[100]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *MaxNumStag,
  const char_T *identifier);
static const mxArray *emlrt_marshallOut(const real_T u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 0, 0 };

  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u->data);
  emlrtSetDimensions((mxArray *)m1, u->size, 2);
  emlrtAssign(&y, m1);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Esync1,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(Esync1), &thisId, y);
  emlrtDestroyArray(&Esync1);
}

static const mxArray *c_emlrt_marshallOut(const real_T u[100])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 0, 0 };

  static const int32_T iv3[2] = { 1, 100 };

  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u);
  emlrtSetDimensions((mxArray *)m2, iv3, 2);
  emlrtAssign(&y, m2);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *MaxNumStag,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(MaxNumStag), &thisId);
  emlrtDestroyArray(&MaxNumStag);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  boolean_T bv0[2] = { true, true };

  int32_T iv4[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv4);
  ret->size[0] = iv4[0];
  ret->size[1] = iv4[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void RecDowDepsk_api(const mxArray *prhs[15], const mxArray *plhs[10])
{
  real_T (*InterAB)[100];
  real_T (*SeqFinAB)[100];
  emxArray_real_T *Esync1;
  emxArray_real_T *TxDataMat;
  emxArray_real_T *Esync;
  emxArray_real_T *TxData;
  emxArray_real_T *Data;
  real_T MaxNumStag;
  real_T IfftOrSum;
  real_T T;
  real_T Ta;
  real_T AddCP;
  real_T StuffSampels;
  real_T NumAmosCP;
  real_T NPPB;
  real_T NbDPSK;
  real_T CurTesSiz;
  real_T SyncPeriod;
  real_T ThisCarr;
  real_T LevDefDpqsk;
  real_T BerDPSK;
  real_T ValsLev;
  real_T AberLev;
  real_T LocMaxAB;
  real_T MaxValAB;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  InterAB = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  SeqFinAB = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Esync1, 2, &g_emlrtRTEI, true);
  emxInit_real_T(&st, &TxDataMat, 2, &g_emlrtRTEI, true);
  emxInit_real_T(&st, &Esync, 2, &g_emlrtRTEI, true);
  emxInit_real_T(&st, &TxData, 2, &g_emlrtRTEI, true);
  emxInit_real_T(&st, &Data, 2, &g_emlrtRTEI, true);
  prhs[4] = emlrtProtectR2012b(prhs[4], 4, false, -1);

  /* Marshall function inputs */
  MaxNumStag = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "MaxNumStag");
  IfftOrSum = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "IfftOrSum");
  T = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "T");
  Ta = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "Ta");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "Esync1", Esync1);
  AddCP = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "AddCP");
  StuffSampels = emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "StuffSampels");
  NumAmosCP = emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "NumAmosCP");
  NPPB = emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "NPPB");
  NbDPSK = emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "NbDPSK");
  CurTesSiz = emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "CurTesSiz");
  SyncPeriod = emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "SyncPeriod");
  ThisCarr = emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "ThisCarr");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[13]), "TxDataMat", TxDataMat);
  LevDefDpqsk = emlrt_marshallIn(&st, emlrtAliasP(prhs[14]), "LevDefDpqsk");

  /* Invoke the target function */
  RecDowDepsk(&st, MaxNumStag, IfftOrSum, T, Ta, Esync1, AddCP, StuffSampels,
              NumAmosCP, NPPB, NbDPSK, CurTesSiz, SyncPeriod, ThisCarr,
              TxDataMat, LevDefDpqsk, &BerDPSK, &ValsLev, &AberLev, Esync,
              *InterAB, &LocMaxAB, &MaxValAB, *SeqFinAB, TxData, Data);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(BerDPSK);
  plhs[1] = emlrt_marshallOut(ValsLev);
  plhs[2] = emlrt_marshallOut(AberLev);
  plhs[3] = b_emlrt_marshallOut(Esync);
  plhs[4] = c_emlrt_marshallOut(*InterAB);
  plhs[5] = emlrt_marshallOut(LocMaxAB);
  plhs[6] = emlrt_marshallOut(MaxValAB);
  plhs[7] = c_emlrt_marshallOut(*SeqFinAB);
  plhs[8] = b_emlrt_marshallOut(TxData);
  plhs[9] = b_emlrt_marshallOut(Data);
  Data->canFreeData = false;
  emxFree_real_T(&Data);
  TxData->canFreeData = false;
  emxFree_real_T(&TxData);
  Esync->canFreeData = false;
  emxFree_real_T(&Esync);
  TxDataMat->canFreeData = false;
  emxFree_real_T(&TxDataMat);
  Esync1->canFreeData = false;
  emxFree_real_T(&Esync1);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_RecDowDepsk_api.c) */

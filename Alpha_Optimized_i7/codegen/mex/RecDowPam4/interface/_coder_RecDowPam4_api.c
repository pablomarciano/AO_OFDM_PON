/*
 * _coder_RecDowPam4_api.c
 *
 * Code generation for function '_coder_RecDowPam4_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "_coder_RecDowPam4_api.h"
#include "RecDowPam4_emxutil.h"
#include "RecDowPam4_mexutil.h"
#include "RecDowPam4_data.h"

/* Variable Definitions */
static emlrtRTEInfo db_emlrtRTEI = { 1, 1, "_coder_RecDowPam4_api", "" };

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Ix1, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *c_emlrt_marshallOut(const real_T u[100]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *d_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2]);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *T, const
  char_T *identifier);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv11[2] = { 0, 0 };

  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv11, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u->data);
  emlrtSetDimensions((mxArray *)m2, u->size, 2);
  emlrtAssign(&y, m2);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Ix1, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(Ix1), &thisId, y);
  emlrtDestroyArray(&Ix1);
}

static const mxArray *c_emlrt_marshallOut(const real_T u[100])
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv12[2] = { 0, 0 };

  static const int32_T iv13[2] = { 1, 100 };

  y = NULL;
  m3 = emlrtCreateNumericArray(2, iv12, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m3, (void *)u);
  emlrtSetDimensions((mxArray *)m3, iv13, 2);
  emlrtAssign(&y, m3);
  return y;
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  h_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *d_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2])
{
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv14[2] = { 0, 0 };

  y = NULL;
  m4 = emlrtCreateNumericArray(2, iv14, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m4, (void *)u_data);
  emlrtSetDimensions((mxArray *)m4, u_size, 2);
  emlrtAssign(&y, m4);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *T, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(T), &thisId);
  emlrtDestroyArray(&T);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  boolean_T bv0[2] = { true, true };

  int32_T iv15[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv15);
  ret->size[0] = iv15[0];
  ret->size[1] = iv15[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

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

void RecDowPam4_api(const mxArray *prhs[20], const mxArray *plhs[33])
{
  real_T (*InterAB)[100];
  real_T (*InterCD)[100];
  real_T (*InterEF)[100];
  real_T (*SeqFinAB)[100];
  real_T (*SeqFinCD)[100];
  real_T (*SeqFinEF)[100];
  real_T (*Levels_data)[5];
  emxArray_real_T *Ix1;
  emxArray_real_T *TxDataMat;
  emxArray_real_T *Ix;
  emxArray_real_T *TxData;
  emxArray_real_T *IxRecDef;
  emxArray_real_T *IxRec;
  real_T T;
  real_T Ta;
  real_T MaxNumStag;
  real_T StuffSampels;
  real_T NumAmosCP;
  real_T NPPB;
  real_T CurTesSiz;
  real_T Nb4Pam;
  real_T IntervalStep;
  real_T MinDist;
  real_T DecLevDef1;
  real_T DecLevDef2;
  real_T DecLevDef3;
  real_T ThisCarr;
  real_T IfftOrSum;
  real_T AddCP;
  real_T SyncPeriod;
  real_T DecMod;
  real_T LevDec1;
  real_T LevDec2;
  real_T LevDec3;
  real_T Ber4PAM;
  real_T AberLev1;
  real_T AberLev2;
  real_T AberLev3;
  real_T ValsLev1;
  real_T ValsLev2;
  real_T ValsLev3;
  real_T ValsLev21;
  real_T ValsLev22;
  real_T ValsLev23;
  real_T LocMaxAB;
  real_T LocMaxCD;
  real_T LocMaxEF;
  real_T MaxValAB;
  real_T MaxValCD;
  real_T MaxValEF;
  int32_T Levels_size[2];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  InterAB = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  InterCD = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  InterEF = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  SeqFinAB = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  SeqFinCD = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  SeqFinEF = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  Levels_data = (real_T (*)[5])mxMalloc(sizeof(real_T [5]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &Ix1, 2, &db_emlrtRTEI, true);
  emxInit_real_T(&st, &TxDataMat, 2, &db_emlrtRTEI, true);
  emxInit_real_T(&st, &Ix, 2, &db_emlrtRTEI, true);
  emxInit_real_T(&st, &TxData, 2, &db_emlrtRTEI, true);
  emxInit_real_T(&st, &IxRecDef, 2, &db_emlrtRTEI, true);
  emxInit_real_T(&st, &IxRec, 2, &db_emlrtRTEI, true);
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);

  /* Marshall function inputs */
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "Ix1", Ix1);
  T = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "T");
  Ta = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "Ta");
  MaxNumStag = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "MaxNumStag");
  StuffSampels = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "StuffSampels");
  NumAmosCP = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "NumAmosCP");
  NPPB = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "NPPB");
  CurTesSiz = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "CurTesSiz");
  Nb4Pam = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "Nb4Pam");
  IntervalStep = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "IntervalStep");
  MinDist = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "MinDist");
  DecLevDef1 = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "DecLevDef1");
  DecLevDef2 = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "DecLevDef2");
  DecLevDef3 = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "DecLevDef3");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[14]), "TxDataMat", TxDataMat);
  ThisCarr = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "ThisCarr");
  IfftOrSum = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[16]), "IfftOrSum");
  AddCP = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[17]), "AddCP");
  SyncPeriod = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[18]), "SyncPeriod");
  DecMod = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[19]), "DecMod");

  /* Invoke the target function */
  RecDowPam4(&st, Ix1, T, Ta, MaxNumStag, StuffSampels, NumAmosCP, NPPB,
             CurTesSiz, Nb4Pam, IntervalStep, MinDist, &DecLevDef1, &DecLevDef2,
             &DecLevDef3, TxDataMat, ThisCarr, IfftOrSum, AddCP, SyncPeriod,
             DecMod, &LevDec1, &LevDec2, &LevDec3, Ix, &Ber4PAM, TxData,
             IxRecDef, IxRec, &AberLev1, &AberLev2, &AberLev3, &ValsLev1,
             &ValsLev2, &ValsLev3, &ValsLev21, &ValsLev22, &ValsLev23, *InterAB,
             *InterCD, *InterEF, *SeqFinAB, *SeqFinCD, *SeqFinEF, &LocMaxAB,
             &LocMaxCD, &LocMaxEF, &MaxValAB, &MaxValCD, &MaxValEF, *Levels_data,
             Levels_size);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(LevDec1);
  plhs[1] = emlrt_marshallOut(LevDec2);
  plhs[2] = emlrt_marshallOut(LevDec3);
  plhs[3] = b_emlrt_marshallOut(Ix);
  plhs[4] = emlrt_marshallOut(Ber4PAM);
  plhs[5] = emlrt_marshallOut(DecLevDef3);
  plhs[6] = emlrt_marshallOut(DecLevDef2);
  plhs[7] = emlrt_marshallOut(DecLevDef1);
  plhs[8] = b_emlrt_marshallOut(TxData);
  plhs[9] = b_emlrt_marshallOut(IxRecDef);
  plhs[10] = b_emlrt_marshallOut(IxRec);
  plhs[11] = emlrt_marshallOut(AberLev1);
  plhs[12] = emlrt_marshallOut(AberLev2);
  plhs[13] = emlrt_marshallOut(AberLev3);
  plhs[14] = emlrt_marshallOut(ValsLev1);
  plhs[15] = emlrt_marshallOut(ValsLev2);
  plhs[16] = emlrt_marshallOut(ValsLev3);
  plhs[17] = emlrt_marshallOut(ValsLev21);
  plhs[18] = emlrt_marshallOut(ValsLev22);
  plhs[19] = emlrt_marshallOut(ValsLev23);
  plhs[20] = c_emlrt_marshallOut(*InterAB);
  plhs[21] = c_emlrt_marshallOut(*InterCD);
  plhs[22] = c_emlrt_marshallOut(*InterEF);
  plhs[23] = c_emlrt_marshallOut(*SeqFinAB);
  plhs[24] = c_emlrt_marshallOut(*SeqFinCD);
  plhs[25] = c_emlrt_marshallOut(*SeqFinEF);
  plhs[26] = emlrt_marshallOut(LocMaxAB);
  plhs[27] = emlrt_marshallOut(LocMaxCD);
  plhs[28] = emlrt_marshallOut(LocMaxEF);
  plhs[29] = emlrt_marshallOut(MaxValAB);
  plhs[30] = emlrt_marshallOut(MaxValCD);
  plhs[31] = emlrt_marshallOut(MaxValEF);
  plhs[32] = d_emlrt_marshallOut(*Levels_data, Levels_size);
  IxRec->canFreeData = false;
  emxFree_real_T(&IxRec);
  IxRecDef->canFreeData = false;
  emxFree_real_T(&IxRecDef);
  TxData->canFreeData = false;
  emxFree_real_T(&TxData);
  Ix->canFreeData = false;
  emxFree_real_T(&Ix);
  TxDataMat->canFreeData = false;
  emxFree_real_T(&TxDataMat);
  Ix1->canFreeData = false;
  emxFree_real_T(&Ix1);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_RecDowPam4_api.c) */

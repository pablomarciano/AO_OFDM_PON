/*
 * _coder_RecDowDqpsk_api.c
 *
 * Code generation for function '_coder_RecDowDqpsk_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowDqpsk.h"
#include "_coder_RecDowDqpsk_api.h"
#include "RecDowDqpsk_emxutil.h"
#include "RecDowDqpsk_data.h"

/* Variable Definitions */
static emlrtRTEInfo k_emlrtRTEI = { 1, 1, "_coder_RecDowDqpsk_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *T, const
  char_T *identifier);
static const mxArray *c_emlrt_marshallOut(const real_T u[100]);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *EoutA, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const real_T u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
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

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *T, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(T), &thisId);
  emlrtDestroyArray(&T);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const real_T u[100])
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv3[2] = { 0, 0 };

  static const int32_T iv4[2] = { 1, 100 };

  y = NULL;
  m3 = emlrtCreateNumericArray(2, iv3, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m3, (void *)u);
  emlrtSetDimensions((mxArray *)m3, iv4, 2);
  emlrtAssign(&y, m3);
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
  static const int32_T dims[2] = { -1, -1 };

  boolean_T bv0[2] = { true, true };

  int32_T iv5[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv5);
  ret->size[0] = iv5[0];
  ret->size[1] = iv5[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *EoutA, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(EoutA), &thisId, y);
  emlrtDestroyArray(&EoutA);
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m1);
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

void RecDowDqpsk_api(const mxArray * const prhs[19], const mxArray *plhs[21])
{
  real_T (*SeqFinAB)[100];
  real_T (*QSeqFinAB)[100];
  real_T (*QInterAB)[100];
  real_T (*InterAB)[100];
  emxArray_real_T *EoutA;
  emxArray_real_T *EoutB;
  emxArray_real_T *EoutC;
  emxArray_real_T *EoutD;
  emxArray_real_T *TxDataMat;
  emxArray_real_T *EoutI;
  emxArray_real_T *EoutQ;
  emxArray_real_T *TxDataOdd;
  emxArray_real_T *TxDataEven;
  emxArray_real_T *DataOdd;
  emxArray_real_T *DataEven;
  emxArray_real_T *IxAuxAB;
  emxArray_real_T *QIxAuxAB;
  real_T T;
  real_T Ta;
  real_T IfftOrSum;
  real_T MaxNumStag;
  real_T StuffSampels;
  real_T NbDQPSK;
  real_T CurTesSiz;
  real_T NumAmosCP;
  real_T NPPB;
  real_T SyncPeriod;
  real_T ThisCarr;
  real_T LevDefDpqsk;
  real_T AddCP;
  real_T NumCarr;
  real_T AberLevI;
  real_T ValsLevI;
  real_T AberLevQ;
  real_T ValsLevQ;
  real_T BerDQPSK;
  real_T LocMaxAB;
  real_T MaxValAB;
  real_T QMaxValAB;
  real_T QLocMaxAB;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  SeqFinAB = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  QSeqFinAB = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  QInterAB = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  InterAB = (real_T (*)[100])mxMalloc(sizeof(real_T [100]));
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &EoutA, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &EoutB, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &EoutC, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &EoutD, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &TxDataMat, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &EoutI, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &EoutQ, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &TxDataOdd, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &TxDataEven, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &DataOdd, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &DataEven, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &IxAuxAB, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &QIxAuxAB, 2, &k_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "EoutA", EoutA);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "EoutB", EoutB);
  emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "EoutC", EoutC);
  emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "EoutD", EoutD);
  T = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "T");
  Ta = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "Ta");
  IfftOrSum = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "IfftOrSum");
  MaxNumStag = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "MaxNumStag");
  StuffSampels = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "StuffSampels");
  NbDQPSK = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "NbDQPSK");
  CurTesSiz = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[10]), "CurTesSiz");
  NumAmosCP = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "NumAmosCP");
  NPPB = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "NPPB");
  SyncPeriod = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[13]), "SyncPeriod");
  emlrt_marshallIn(&st, emlrtAlias(prhs[14]), "TxDataMat", TxDataMat);
  ThisCarr = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[15]), "ThisCarr");
  LevDefDpqsk = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[16]), "LevDefDpqsk");
  AddCP = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[17]), "AddCP");
  NumCarr = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[18]), "NumCarr");

  /* Invoke the target function */
  RecDowDqpsk(&st, EoutA, EoutB, EoutC, EoutD, T, Ta, IfftOrSum, MaxNumStag,
              StuffSampels, NbDQPSK, CurTesSiz, NumAmosCP, NPPB, SyncPeriod,
              TxDataMat, ThisCarr, LevDefDpqsk, AddCP, NumCarr, &AberLevI,
              &ValsLevI, &AberLevQ, &ValsLevQ, &BerDQPSK, EoutI, EoutQ,
              TxDataOdd, TxDataEven, DataOdd, DataEven, &LocMaxAB, &MaxValAB,
              *SeqFinAB, &QMaxValAB, &QLocMaxAB, *QSeqFinAB, *QInterAB, *InterAB,
              IxAuxAB, QIxAuxAB);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(AberLevI);
  plhs[1] = emlrt_marshallOut(ValsLevI);
  plhs[2] = emlrt_marshallOut(AberLevQ);
  plhs[3] = emlrt_marshallOut(ValsLevQ);
  plhs[4] = emlrt_marshallOut(BerDQPSK);
  plhs[5] = b_emlrt_marshallOut(EoutI);
  plhs[6] = b_emlrt_marshallOut(EoutQ);
  plhs[7] = b_emlrt_marshallOut(TxDataOdd);
  plhs[8] = b_emlrt_marshallOut(TxDataEven);
  plhs[9] = b_emlrt_marshallOut(DataOdd);
  plhs[10] = b_emlrt_marshallOut(DataEven);
  plhs[11] = emlrt_marshallOut(LocMaxAB);
  plhs[12] = emlrt_marshallOut(MaxValAB);
  plhs[13] = c_emlrt_marshallOut(*SeqFinAB);
  plhs[14] = emlrt_marshallOut(QMaxValAB);
  plhs[15] = emlrt_marshallOut(QLocMaxAB);
  plhs[16] = c_emlrt_marshallOut(*QSeqFinAB);
  plhs[17] = c_emlrt_marshallOut(*QInterAB);
  plhs[18] = c_emlrt_marshallOut(*InterAB);
  plhs[19] = b_emlrt_marshallOut(IxAuxAB);
  plhs[20] = b_emlrt_marshallOut(QIxAuxAB);
  QIxAuxAB->canFreeData = false;
  emxFree_real_T(&QIxAuxAB);
  IxAuxAB->canFreeData = false;
  emxFree_real_T(&IxAuxAB);
  DataEven->canFreeData = false;
  emxFree_real_T(&DataEven);
  DataOdd->canFreeData = false;
  emxFree_real_T(&DataOdd);
  TxDataEven->canFreeData = false;
  emxFree_real_T(&TxDataEven);
  TxDataOdd->canFreeData = false;
  emxFree_real_T(&TxDataOdd);
  EoutQ->canFreeData = false;
  emxFree_real_T(&EoutQ);
  EoutI->canFreeData = false;
  emxFree_real_T(&EoutI);
  TxDataMat->canFreeData = false;
  emxFree_real_T(&TxDataMat);
  EoutD->canFreeData = false;
  emxFree_real_T(&EoutD);
  EoutC->canFreeData = false;
  emxFree_real_T(&EoutC);
  EoutB->canFreeData = false;
  emxFree_real_T(&EoutB);
  EoutA->canFreeData = false;
  emxFree_real_T(&EoutA);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_RecDowDqpsk_api.c) */

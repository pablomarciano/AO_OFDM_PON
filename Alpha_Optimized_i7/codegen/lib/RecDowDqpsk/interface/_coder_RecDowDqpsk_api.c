/*
 * File: _coder_RecDowDqpsk_api.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 18:36:28
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_RecDowDqpsk_api.h"
#include "_coder_RecDowDqpsk_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true, false, 131434U, NULL, "RecDowDqpsk",
  NULL, false, { 2045744189U, 2170104910U, 2743257031U, 4284093946U }, NULL };

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
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, boolean_T doPush);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
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
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emxArray_real_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv0[2] = { 0, 0 };

  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m1, (void *)u->data);
  emlrtSetDimensions((mxArray *)m1, u->size, 2);
  emlrtAssign(&y, m1);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *T
 *                const char_T *identifier
 * Return Type  : real_T
 */
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

/*
 * Arguments    : const real_T u[100]
 * Return Type  : const mxArray *
 */
static const mxArray *c_emlrt_marshallOut(const real_T u[100])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv1[2] = { 0, 0 };

  static const int32_T iv2[2] = { 1, 100 };

  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m2, (void *)u);
  emlrtSetDimensions((mxArray *)m2, iv2, 2);
  emlrtAssign(&y, m2);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real_T
 */
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
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
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  boolean_T bv0[2] = { true, true };

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
 *                const mxArray *EoutA
 *                const char_T *identifier
 *                emxArray_real_T *y
 * Return Type  : void
 */
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
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real_T
 */
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

/*
 * Arguments    : const mxArray *prhs[19]
 *                const mxArray *plhs[21]
 * Return Type  : void
 */
void RecDowDqpsk_api(const mxArray *prhs[19], const mxArray *plhs[21])
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
  emxInit_real_T(&st, &EoutA, 2, true);
  emxInit_real_T(&st, &EoutB, 2, true);
  emxInit_real_T(&st, &EoutC, 2, true);
  emxInit_real_T(&st, &EoutD, 2, true);
  emxInit_real_T(&st, &TxDataMat, 2, true);
  emxInit_real_T(&st, &EoutI, 2, true);
  emxInit_real_T(&st, &EoutQ, 2, true);
  emxInit_real_T(&st, &TxDataOdd, 2, true);
  emxInit_real_T(&st, &TxDataEven, 2, true);
  emxInit_real_T(&st, &DataOdd, 2, true);
  emxInit_real_T(&st, &DataEven, 2, true);
  emxInit_real_T(&st, &IxAuxAB, 2, true);
  emxInit_real_T(&st, &QIxAuxAB, 2, true);
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, false, -1);
  prhs[1] = emlrtProtectR2012b(prhs[1], 1, false, -1);
  prhs[2] = emlrtProtectR2012b(prhs[2], 2, false, -1);
  prhs[3] = emlrtProtectR2012b(prhs[3], 3, false, -1);
  prhs[14] = emlrtProtectR2012b(prhs[14], 14, false, -1);

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
  RecDowDqpsk(EoutA, EoutB, EoutC, EoutD, T, Ta, IfftOrSum, MaxNumStag,
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

/*
 * Arguments    : void
 * Return Type  : void
 */
void RecDowDqpsk_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  RecDowDqpsk_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void RecDowDqpsk_initialize(void)
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
void RecDowDqpsk_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * File trailer for _coder_RecDowDqpsk_api.c
 *
 * [EOF]
 */

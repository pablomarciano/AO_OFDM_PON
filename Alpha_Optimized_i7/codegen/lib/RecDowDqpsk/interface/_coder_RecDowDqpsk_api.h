/*
 * File: _coder_RecDowDqpsk_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 18:36:28
 */

#ifndef _CODER_RECDOWDQPSK_API_H
#define _CODER_RECDOWDQPSK_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_RecDowDqpsk_api.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void RecDowDqpsk(emxArray_real_T *EoutA, emxArray_real_T *EoutB,
  emxArray_real_T *EoutC, emxArray_real_T *EoutD, real_T T, real_T Ta, real_T
  IfftOrSum, real_T MaxNumStag, real_T StuffSampels, real_T NbDQPSK, real_T
  CurTesSiz, real_T NumAmosCP, real_T NPPB, real_T SyncPeriod, emxArray_real_T
  *TxDataMat, real_T ThisCarr, real_T LevDefDpqsk, real_T AddCP, real_T NumCarr,
  real_T *AberLevI, real_T *ValsLevI, real_T *AberLevQ, real_T *ValsLevQ, real_T
  *BerDQPSK, emxArray_real_T *EoutI, emxArray_real_T *EoutQ, emxArray_real_T
  *TxDataOdd, emxArray_real_T *TxDataEven, emxArray_real_T *DataOdd,
  emxArray_real_T *DataEven, real_T *LocMaxAB, real_T *MaxValAB, real_T
  SeqFinAB[100], real_T *QMaxValAB, real_T *QLocMaxAB, real_T QSeqFinAB[100],
  real_T QInterAB[100], real_T InterAB[100], emxArray_real_T *IxAuxAB,
  emxArray_real_T *QIxAuxAB);
extern void RecDowDqpsk_api(const mxArray *prhs[19], const mxArray *plhs[21]);
extern void RecDowDqpsk_atexit(void);
extern void RecDowDqpsk_initialize(void);
extern void RecDowDqpsk_terminate(void);
extern void RecDowDqpsk_xil_terminate(void);

#endif

/*
 * File trailer for _coder_RecDowDqpsk_api.h
 *
 * [EOF]
 */

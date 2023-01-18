/*
 * File: _coder_RedDowOok_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 12-Sep-2018 12:12:25
 */

#ifndef _CODER_REDDOWOOK_API_H
#define _CODER_REDDOWOOK_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_RedDowOok_api.h"

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
extern void RedDowOok(emxArray_real_T *Ix, emxArray_real_T *TxDataMat, real_T
                      NPPB, real_T ThisCarr, real_T Nb, real_T NumBitDesc,
                      real_T SyncPeriod, real_T CurTesSiz, real_T EyeOpenLow,
                      real_T EyeOpen, real_T *AberLev, real_T *ValsLev, real_T
                      Inter[100], real_T SeqFin[100], real_T *LocMax, real_T
                      *MaxVal, emxArray_real_T *TxData, emxArray_real_T
                      *EoutCorrD, emxArray_real_T *EoutCorr2, emxArray_real_T
                      *EoutCorr, real_T *BerOOK, real_T *LocMax2, real_T
                      SeqFin2[100], real_T *MaxVal2, real_T Inter2[100]);
extern void RedDowOok_api(const mxArray *prhs[10], const mxArray *plhs[15]);
extern void RedDowOok_atexit(void);
extern void RedDowOok_initialize(void);
extern void RedDowOok_terminate(void);
extern void RedDowOok_xil_terminate(void);

#endif

/*
 * File trailer for _coder_RedDowOok_api.h
 *
 * [EOF]
 */

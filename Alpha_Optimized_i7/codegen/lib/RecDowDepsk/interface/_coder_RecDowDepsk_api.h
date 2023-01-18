/*
 * File: _coder_RecDowDepsk_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 15:11:07
 */

#ifndef _CODER_RECDOWDEPSK_API_H
#define _CODER_RECDOWDEPSK_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_RecDowDepsk_api.h"

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
extern void RecDowDepsk(real_T MaxNumStag, real_T IfftOrSum, real_T T, real_T Ta,
  emxArray_real_T *Esync1, real_T AddCP, real_T StuffSampels, real_T NumAmosCP,
  real_T NPPB, real_T NbDPSK, real_T CurTesSiz, real_T SyncPeriod, real_T
  ThisCarr, emxArray_real_T *TxDataMat, real_T LevDefDpqsk, real_T *BerDPSK,
  real_T *ValsLev, real_T *AberLev, emxArray_real_T *Esync, real_T InterAB[100],
  real_T *LocMaxAB, real_T *MaxValAB, real_T SeqFinAB[100], emxArray_real_T
  *TxData, emxArray_real_T *Data);
extern void RecDowDepsk_api(const mxArray *prhs[15], const mxArray *plhs[10]);
extern void RecDowDepsk_atexit(void);
extern void RecDowDepsk_initialize(void);
extern void RecDowDepsk_terminate(void);
extern void RecDowDepsk_xil_terminate(void);

#endif

/*
 * File trailer for _coder_RecDowDepsk_api.h
 *
 * [EOF]
 */

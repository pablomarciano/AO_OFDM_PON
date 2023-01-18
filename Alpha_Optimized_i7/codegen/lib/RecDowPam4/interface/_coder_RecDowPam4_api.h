/*
 * File: _coder_RecDowPam4_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 21:36:40
 */

#ifndef _CODER_RECDOWPAM4_API_H
#define _CODER_RECDOWPAM4_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_RecDowPam4_api.h"

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
extern void RecDowPam4(emxArray_real_T *Ix1, real_T T, real_T Ta, real_T
  MaxNumStag, real_T StuffSampels, real_T NumAmosCP, real_T NPPB, real_T
  CurTesSiz, real_T Nb4Pam, real_T IntervalStep, real_T MinDist, real_T
  *DecLevDef1, real_T *DecLevDef2, real_T *DecLevDef3, emxArray_real_T
  *TxDataMat, real_T ThisCarr, real_T IfftOrSum, real_T AddCP, real_T SyncPeriod,
  real_T DecMod, real_T *LevDec1, real_T *LevDec2, real_T *LevDec3,
  emxArray_real_T *Ix, real_T *Ber4PAM, emxArray_real_T *TxData, emxArray_real_T
  *IxRecDef, emxArray_real_T *IxRec, real_T *AberLev1, real_T *AberLev2, real_T *
  AberLev3, real_T *ValsLev1, real_T *ValsLev2, real_T *ValsLev3, real_T
  *ValsLev21, real_T *ValsLev22, real_T *ValsLev23, real_T InterAB[100], real_T
  InterCD[100], real_T InterEF[100], real_T SeqFinAB[100], real_T SeqFinCD[100],
  real_T SeqFinEF[100], real_T *LocMaxAB, real_T *LocMaxCD, real_T *LocMaxEF,
  real_T *MaxValAB, real_T *MaxValCD, real_T *MaxValEF, real_T Levels_data[],
  int32_T Levels_size[2]);
extern void RecDowPam4_api(const mxArray *prhs[20], const mxArray *plhs[33]);
extern void RecDowPam4_atexit(void);
extern void RecDowPam4_initialize(void);
extern void RecDowPam4_terminate(void);
extern void RecDowPam4_xil_terminate(void);

#endif

/*
 * File trailer for _coder_RecDowPam4_api.h
 *
 * [EOF]
 */

/*
 * RecDowPam4.h
 *
 * Code generation for function 'RecDowPam4'
 *
 */

#ifndef RECDOWPAM4_H
#define RECDOWPAM4_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "RecDowPam4_types.h"

/* Function Declarations */
extern void RecDowPam4(const emlrtStack *sp, emxArray_real_T *Ix1, real_T T,
  real_T Ta, real_T MaxNumStag, real_T StuffSampels, real_T NumAmosCP, real_T
  NPPB, real_T CurTesSiz, real_T Nb4Pam, real_T IntervalStep, real_T MinDist,
  real_T *DecLevDef1, real_T *DecLevDef2, real_T *DecLevDef3, const
  emxArray_real_T *TxDataMat, real_T ThisCarr, real_T IfftOrSum, real_T AddCP,
  real_T SyncPeriod, real_T DecMod, real_T *LevDec1, real_T *LevDec2, real_T
  *LevDec3, emxArray_real_T *Ix, real_T *Ber4PAM, emxArray_real_T *TxData,
  emxArray_real_T *IxRecDef, emxArray_real_T *IxRec, real_T *AberLev1, real_T
  *AberLev2, real_T *AberLev3, real_T *ValsLev1, real_T *ValsLev2, real_T
  *ValsLev3, real_T *ValsLev21, real_T *ValsLev22, real_T *ValsLev23, real_T
  InterAB[100], real_T InterCD[100], real_T InterEF[100], real_T SeqFinAB[100],
  real_T SeqFinCD[100], real_T SeqFinEF[100], real_T *LocMaxAB, real_T *LocMaxCD,
  real_T *LocMaxEF, real_T *MaxValAB, real_T *MaxValCD, real_T *MaxValEF, real_T
  Levels_data[], int32_T Levels_size[2]);

#endif

/* End of code generation (RecDowPam4.h) */

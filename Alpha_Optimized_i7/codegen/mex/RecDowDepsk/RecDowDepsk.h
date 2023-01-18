/*
 * RecDowDepsk.h
 *
 * Code generation for function 'RecDowDepsk'
 *
 */

#ifndef RECDOWDEPSK_H
#define RECDOWDEPSK_H

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
#include "RecDowDepsk_types.h"

/* Function Declarations */
extern void RecDowDepsk(const emlrtStack *sp, real_T MaxNumStag, real_T
  IfftOrSum, real_T T, real_T Ta, emxArray_real_T *Esync1, real_T AddCP, real_T
  StuffSampels, real_T NumAmosCP, real_T NPPB, real_T NbDPSK, real_T CurTesSiz,
  real_T SyncPeriod, real_T ThisCarr, const emxArray_real_T *TxDataMat, real_T
  LevDefDpqsk, real_T *BerDPSK, real_T *ValsLev, real_T *AberLev,
  emxArray_real_T *Esync, real_T InterAB[100], real_T *LocMaxAB, real_T
  *MaxValAB, real_T SeqFinAB[100], emxArray_real_T *TxData, emxArray_real_T
  *Data);

#endif

/* End of code generation (RecDowDepsk.h) */

/*
 * RecDowDqpsk.h
 *
 * Code generation for function 'RecDowDqpsk'
 *
 */

#ifndef RECDOWDQPSK_H
#define RECDOWDQPSK_H

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
#include "RecDowDqpsk_types.h"

/* Function Declarations */
extern void RecDowDqpsk(const emlrtStack *sp, const emxArray_real_T *EoutA,
  const emxArray_real_T *EoutB, const emxArray_real_T *EoutC, const
  emxArray_real_T *EoutD, real_T T, real_T Ta, real_T IfftOrSum, real_T
  MaxNumStag, real_T StuffSampels, real_T NbDQPSK, real_T CurTesSiz, real_T
  NumAmosCP, real_T NPPB, real_T SyncPeriod, const emxArray_real_T *TxDataMat,
  real_T ThisCarr, real_T LevDefDpqsk, real_T AddCP, real_T NumCarr, real_T
  *AberLevI, real_T *ValsLevI, real_T *AberLevQ, real_T *ValsLevQ, real_T
  *BerDQPSK, emxArray_real_T *EoutI, emxArray_real_T *EoutQ, emxArray_real_T
  *TxDataOdd, emxArray_real_T *TxDataEven, emxArray_real_T *DataOdd,
  emxArray_real_T *DataEven, real_T *LocMaxAB, real_T *MaxValAB, real_T
  SeqFinAB[100], real_T *QMaxValAB, real_T *QLocMaxAB, real_T QSeqFinAB[100],
  real_T QInterAB[100], real_T InterAB[100], emxArray_real_T *IxAuxAB,
  emxArray_real_T *QIxAuxAB);

#endif

/* End of code generation (RecDowDqpsk.h) */

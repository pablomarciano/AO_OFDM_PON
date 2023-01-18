/*
 * File: RecDowDqpsk.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 18:36:28
 */

#ifndef RECDOWDQPSK_H
#define RECDOWDQPSK_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "RecDowDqpsk_types.h"

/* Function Declarations */
extern void RecDowDqpsk(const emxArray_real_T *EoutA, const emxArray_real_T
  *EoutB, const emxArray_real_T *EoutC, const emxArray_real_T *EoutD, double T,
  double Ta, double IfftOrSum, double MaxNumStag, double StuffSampels, double
  NbDQPSK, double CurTesSiz, double NumAmosCP, double NPPB, double SyncPeriod,
  const emxArray_real_T *TxDataMat, double ThisCarr, double LevDefDpqsk, double
  AddCP, double NumCarr, double *AberLevI, double *ValsLevI, double *AberLevQ,
  double *ValsLevQ, double *BerDQPSK, emxArray_real_T *EoutI, emxArray_real_T
  *EoutQ, emxArray_real_T *TxDataOdd, emxArray_real_T *TxDataEven,
  emxArray_real_T *DataOdd, emxArray_real_T *DataEven, double *LocMaxAB, double *
  MaxValAB, double SeqFinAB[100], double *QMaxValAB, double *QLocMaxAB, double
  QSeqFinAB[100], double QInterAB[100], double InterAB[100], emxArray_real_T
  *IxAuxAB, emxArray_real_T *QIxAuxAB);

#endif

/*
 * File trailer for RecDowDqpsk.h
 *
 * [EOF]
 */

/*
 * File: RecDowDepsk.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 15:11:07
 */

#ifndef RECDOWDEPSK_H
#define RECDOWDEPSK_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "RecDowDepsk_types.h"

/* Function Declarations */
extern void RecDowDepsk(double MaxNumStag, double IfftOrSum, double T, double Ta,
  emxArray_real_T *Esync1, double AddCP, double StuffSampels, double NumAmosCP,
  double NPPB, double NbDPSK, double CurTesSiz, double SyncPeriod, double
  ThisCarr, const emxArray_real_T *TxDataMat, double LevDefDpqsk, double
  *BerDPSK, double *ValsLev, double *AberLev, emxArray_real_T *Esync, double
  InterAB[100], double *LocMaxAB, double *MaxValAB, double SeqFinAB[100],
  emxArray_real_T *TxData, emxArray_real_T *Data);

#endif

/*
 * File trailer for RecDowDepsk.h
 *
 * [EOF]
 */

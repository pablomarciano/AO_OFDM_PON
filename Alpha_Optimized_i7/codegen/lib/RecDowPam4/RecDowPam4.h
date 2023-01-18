/*
 * File: RecDowPam4.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 21:36:40
 */

#ifndef RECDOWPAM4_H
#define RECDOWPAM4_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "RecDowPam4_types.h"

/* Function Declarations */
extern void RecDowPam4(emxArray_real_T *Ix1, double T, double Ta, double
  MaxNumStag, double StuffSampels, double NumAmosCP, double NPPB, double
  CurTesSiz, double Nb4Pam, double IntervalStep, double MinDist, double
  *DecLevDef1, double *DecLevDef2, double *DecLevDef3, const emxArray_real_T
  *TxDataMat, double ThisCarr, double IfftOrSum, double AddCP, double SyncPeriod,
  double DecMod, double *LevDec1, double *LevDec2, double *LevDec3,
  emxArray_real_T *Ix, double *Ber4PAM, emxArray_real_T *TxData, emxArray_real_T
  *IxRecDef, emxArray_real_T *IxRec, double *AberLev1, double *AberLev2, double *
  AberLev3, double *ValsLev1, double *ValsLev2, double *ValsLev3, double
  *ValsLev21, double *ValsLev22, double *ValsLev23, double InterAB[100], double
  InterCD[100], double InterEF[100], double SeqFinAB[100], double SeqFinCD[100],
  double SeqFinEF[100], double *LocMaxAB, double *LocMaxCD, double *LocMaxEF,
  double *MaxValAB, double *MaxValCD, double *MaxValEF, double Levels_data[],
  int Levels_size[2]);

#endif

/*
 * File trailer for RecDowPam4.h
 *
 * [EOF]
 */

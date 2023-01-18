/*
 * File: RedDowOok.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 12-Sep-2018 12:12:25
 */

#ifndef REDDOWOOK_H
#define REDDOWOOK_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "RedDowOok_types.h"

/* Function Declarations */
extern void RedDowOok(const emxArray_real_T *Ix, const emxArray_real_T
                      *TxDataMat, double NPPB, double ThisCarr, double Nb,
                      double NumBitDesc, double SyncPeriod, double CurTesSiz,
                      double EyeOpenLow, double EyeOpen, double *AberLev, double
                      *ValsLev, double Inter[100], double SeqFin[100], double
                      *LocMax, double *MaxVal, emxArray_real_T *TxData,
                      emxArray_real_T *EoutCorrD, emxArray_real_T *EoutCorr2,
                      emxArray_real_T *EoutCorr, double *BerOOK, double *LocMax2,
                      double SeqFin2[100], double *MaxVal2, double Inter2[100]);

#endif

/*
 * File trailer for RedDowOok.h
 *
 * [EOF]
 */

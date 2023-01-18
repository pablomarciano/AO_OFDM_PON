/*
 * RedDowOok.h
 *
 * Code generation for function 'RedDowOok'
 *
 */

#ifndef REDDOWOOK_H
#define REDDOWOOK_H

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
#include "RedDowOok_types.h"

/* Function Declarations */
extern void RedDowOok(const emlrtStack *sp, const emxArray_real_T *Ix, const
                      emxArray_real_T *TxDataMat, real_T NPPB, real_T ThisCarr,
                      real_T Nb, real_T NumBitDesc, real_T SyncPeriod, real_T
                      CurTesSiz, real_T EyeOpenLow, real_T EyeOpen, real_T
                      *AberLev, real_T *ValsLev, real_T Inter[100], real_T
                      SeqFin[100], real_T *LocMax, real_T *MaxVal,
                      emxArray_real_T *TxData, emxArray_real_T *EoutCorrD,
                      emxArray_real_T *EoutCorr2, emxArray_real_T *EoutCorr,
                      real_T *BerOOK, real_T *LocMax2, real_T SeqFin2[100],
                      real_T *MaxVal2, real_T Inter2[100]);

#endif

/* End of code generation (RedDowOok.h) */

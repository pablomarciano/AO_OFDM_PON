/*
 * findpeaks.h
 *
 * Code generation for function 'findpeaks'
 *
 */

#ifndef FINDPEAKS_H
#define FINDPEAKS_H

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
extern void b_findpeaks(const emlrtStack *sp, const real_T Yin[102], real_T
  Ypk_data[], int32_T Ypk_size[2], real_T Xpk_data[], int32_T Xpk_size[2]);
extern void findpeaks(const emlrtStack *sp, const real_T Yin[102], real_T
                      Ypk_data[], int32_T Ypk_size[2], real_T Xpk_data[],
                      int32_T Xpk_size[2]);

#endif

/* End of code generation (findpeaks.h) */

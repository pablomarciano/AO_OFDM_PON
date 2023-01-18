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
#include "RecDowPam4_types.h"

/* Function Declarations */
extern void findpeaks(const emlrtStack *sp, const emxArray_real_T *Yin, real_T
                      varargin_2, emxArray_real_T *Ypk, emxArray_real_T *Xpk);

#endif

/* End of code generation (findpeaks.h) */

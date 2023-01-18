/*
 * hist.h
 *
 * Code generation for function 'hist'
 *
 */

#ifndef HIST_H
#define HIST_H

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
extern void hist(const emlrtStack *sp, const emxArray_real_T *Y, const real_T X
                 [100], real_T no[100]);

#endif

/* End of code generation (hist.h) */

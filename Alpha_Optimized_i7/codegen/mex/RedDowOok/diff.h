/*
 * diff.h
 *
 * Code generation for function 'diff'
 *
 */

#ifndef DIFF_H
#define DIFF_H

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
extern void diff(const emlrtStack *sp, const real_T x_data[], const int32_T
                 x_size[1], real_T y_data[], int32_T y_size[1]);

#endif

/* End of code generation (diff.h) */

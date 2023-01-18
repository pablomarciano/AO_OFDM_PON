/*
 * sortIdx.h
 *
 * Code generation for function 'sortIdx'
 *
 */

#ifndef SORTIDX_H
#define SORTIDX_H

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
extern void b_sortIdx(const emlrtStack *sp, real_T x_data[], int32_T x_size[1],
                      int32_T idx_data[], int32_T idx_size[1]);
extern void sortIdx(const emlrtStack *sp, real_T x_data[], int32_T x_size[1],
                    int32_T idx_data[], int32_T idx_size[1]);

#endif

/* End of code generation (sortIdx.h) */

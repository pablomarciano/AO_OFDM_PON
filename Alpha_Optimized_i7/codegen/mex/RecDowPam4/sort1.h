/*
 * sort1.h
 *
 * Code generation for function 'sort1'
 *
 */

#ifndef SORT1_H
#define SORT1_H

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
extern void c_sort(const emlrtStack *sp, emxArray_real_T *x);
extern void d_sort(const emlrtStack *sp, real_T x[4]);
extern void sort(const emlrtStack *sp, emxArray_real_T *x, emxArray_int32_T *idx);

#endif

/* End of code generation (sort1.h) */

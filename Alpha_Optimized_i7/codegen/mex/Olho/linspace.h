/*
 * linspace.h
 *
 * Code generation for function 'linspace'
 *
 */

#ifndef LINSPACE_H
#define LINSPACE_H

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
#include "Olho_types.h"

/* Function Declarations */
extern void linspace(const emlrtStack *sp, real_T d2, real_T n1, emxArray_real_T
                     *y);

#endif

/* End of code generation (linspace.h) */

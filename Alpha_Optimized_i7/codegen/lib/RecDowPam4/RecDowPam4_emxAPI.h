/*
 * File: RecDowPam4_emxAPI.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 21:36:40
 */

#ifndef RECDOWPAM4_EMXAPI_H
#define RECDOWPAM4_EMXAPI_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "RecDowPam4_types.h"

/* Function Declarations */
extern emxArray_real_T *emxCreateND_real_T(int numDimensions, int *size);
extern emxArray_real_T *emxCreateWrapperND_real_T(double *data, int
  numDimensions, int *size);
extern emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols);
extern emxArray_real_T *emxCreate_real_T(int rows, int cols);
extern void emxDestroyArray_real_T(emxArray_real_T *emxArray);
extern void emxInitArray_real_T(emxArray_real_T **pEmxArray, int numDimensions);

#endif

/*
 * File trailer for RecDowPam4_emxAPI.h
 *
 * [EOF]
 */

/*
 * File: sortIdx.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 21:36:40
 */

#ifndef SORTIDX_H
#define SORTIDX_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "RecDowPam4_types.h"

/* Function Declarations */
extern void b_sortIdx(emxArray_real_T *x, emxArray_int32_T *idx);
extern void c_merge(int idx[4], double x[4], int offset, int np, int nq, int
                    iwork[4], double xwork[4]);
extern void sortIdx(emxArray_real_T *x, emxArray_int32_T *idx);

#endif

/*
 * File trailer for sortIdx.h
 *
 * [EOF]
 */

/*
 * RecDowPam4_mexutil.c
 *
 * Code generation for function 'RecDowPam4_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "RecDowPam4_mexutil.h"

/* Function Definitions */
const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m1);
  return y;
}

/* End of code generation (RecDowPam4_mexutil.c) */

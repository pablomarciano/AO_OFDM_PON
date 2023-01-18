/*
 * File: nonSingletonDim.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 12-Sep-2018 12:12:25
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "nonSingletonDim.h"

/* Function Definitions */

/*
 * Arguments    : const int x_size[1]
 * Return Type  : int
 */
int nonSingletonDim(const int x_size[1])
{
  int dim;
  dim = 2;
  if (x_size[0] != 1) {
    dim = 1;
  }

  return dim;
}

/*
 * File trailer for nonSingletonDim.c
 *
 * [EOF]
 */

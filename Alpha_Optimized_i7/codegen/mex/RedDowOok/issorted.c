/*
 * issorted.c
 *
 * Code generation for function 'issorted'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "issorted.h"

/* Function Definitions */
boolean_T issorted(const real_T x_data[], const int32_T x_size[1])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  boolean_T p;
  y = true;
  if (x_size[0] == 0) {
  } else {
    k = 1;
    exitg1 = false;
    while ((!exitg1) && (k <= x_size[0] - 1)) {
      if ((x_data[k - 1] <= x_data[k]) || muDoubleScalarIsNaN(x_data[k])) {
        p = true;
      } else {
        p = false;
      }

      if (!p) {
        y = false;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return y;
}

/* End of code generation (issorted.c) */

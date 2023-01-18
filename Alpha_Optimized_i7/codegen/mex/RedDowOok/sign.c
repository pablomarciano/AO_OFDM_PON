/*
 * sign.c
 *
 * Code generation for function 'sign'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "sign.h"

/* Function Definitions */
void b_sign(real_T x_data[], int32_T x_size[1])
{
  int32_T nx;
  int32_T k;
  nx = x_size[0];
  for (k = 0; k + 1 <= nx; k++) {
    x_data[k] = muDoubleScalarSign(x_data[k]);
  }
}

/* End of code generation (sign.c) */

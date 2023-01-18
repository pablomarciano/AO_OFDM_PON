/*
 * nonSingletonDim.c
 *
 * Code generation for function 'nonSingletonDim'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "nonSingletonDim.h"

/* Function Definitions */
int32_T nonSingletonDim(const int32_T x_size[1])
{
  int32_T dim;
  dim = 2;
  if (x_size[0] != 1) {
    dim = 1;
  }

  return dim;
}

/* End of code generation (nonSingletonDim.c) */

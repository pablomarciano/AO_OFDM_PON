/*
 * scalexpAlloc.c
 *
 * Code generation for function 'scalexpAlloc'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "scalexpAlloc.h"

/* Function Definitions */
boolean_T dimagree(const emxArray_real_T *z, const emxArray_real_T *varargin_1,
                   const emxArray_real_T *varargin_2)
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg2;
  int32_T i5;
  boolean_T exitg1;
  int32_T i6;
  p = true;
  b_p = true;
  k = 1;
  exitg2 = false;
  while ((!exitg2) && (k < 3)) {
    if (k <= 1) {
      i5 = z->size[0];
    } else {
      i5 = 1;
    }

    if (k <= 1) {
      i6 = varargin_1->size[0];
    } else {
      i6 = 1;
    }

    if (i5 != i6) {
      b_p = false;
      exitg2 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    b_p = true;
    k = 1;
    exitg1 = false;
    while ((!exitg1) && (k < 3)) {
      if (k <= 1) {
        i5 = z->size[0];
      } else {
        i5 = 1;
      }

      if (k <= 1) {
        i6 = varargin_2->size[0];
      } else {
        i6 = 1;
      }

      if (i5 != i6) {
        b_p = false;
        exitg1 = true;
      } else {
        k++;
      }
    }

    if (b_p) {
    } else {
      p = false;
    }
  } else {
    p = false;
  }

  return p;
}

/* End of code generation (scalexpAlloc.c) */

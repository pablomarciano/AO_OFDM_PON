/*
 * scalexpAlloc.c
 *
 * Code generation for function 'scalexpAlloc'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "scalexpAlloc.h"

/* Function Definitions */
boolean_T dimagree(const int32_T z_size[1], const int32_T varargin_1_size[1],
                   const int32_T varargin_2_size[1])
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg2;
  int32_T b_k;
  boolean_T exitg1;
  int32_T c_k;
  int32_T d_k;
  int32_T e_k;
  p = true;
  b_p = true;
  k = 1;
  exitg2 = false;
  while ((!exitg2) && (k < 3)) {
    if (k <= 1) {
      b_k = z_size[0];
    } else {
      b_k = 1;
    }

    if (k <= 1) {
      c_k = varargin_1_size[0];
    } else {
      c_k = 1;
    }

    if (b_k != c_k) {
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
        d_k = z_size[0];
      } else {
        d_k = 1;
      }

      if (k <= 1) {
        e_k = varargin_2_size[0];
      } else {
        e_k = 1;
      }

      if (d_k != e_k) {
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

/*
 * File: std.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 01-Sep-2018 15:04:10
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Olho.h"
#include "std.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *varargin_1
 * Return Type  : double
 */
double b_std(const emxArray_real_T *varargin_1)
{
  double y;
  int i1;
  int d;
  int ix;
  double xbar;
  int k;
  double r;
  i1 = varargin_1->size[1];
  if (varargin_1->size[1] > 1) {
    d = varargin_1->size[1] - 1;
  } else {
    d = varargin_1->size[1];
  }

  if (varargin_1->size[1] == 0) {
    y = 0.0;
  } else {
    ix = 0;
    xbar = varargin_1->data[0];
    for (k = 2; k <= i1; k++) {
      ix++;
      xbar += varargin_1->data[ix];
    }

    xbar /= (double)varargin_1->size[1];
    ix = 0;
    r = varargin_1->data[0] - xbar;
    y = r * r;
    for (k = 2; k <= i1; k++) {
      ix++;
      r = varargin_1->data[ix] - xbar;
      y += r * r;
    }

    y /= (double)d;
  }

  return sqrt(y);
}

/*
 * File trailer for std.c
 *
 * [EOF]
 */

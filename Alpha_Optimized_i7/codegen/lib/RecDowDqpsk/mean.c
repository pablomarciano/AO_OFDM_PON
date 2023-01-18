/*
 * File: mean.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 18:36:28
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowDqpsk.h"
#include "mean.h"
#include "RecDowDqpsk_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void mean(const emxArray_real_T *x, emxArray_real_T *y)
{
  int i;
  int vlen;
  int xoffset;
  double s;
  int k;
  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = x->size[1];
  emxEnsureCapacity((emxArray__common *)y, i, (int)sizeof(double));
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity((emxArray__common *)y, i, (int)sizeof(double));
    vlen = y->size[1];
    for (i = 0; i < vlen; i++) {
      y->data[y->size[0] * i] = 0.0;
    }
  } else {
    vlen = x->size[0];
    for (i = 0; i + 1 <= x->size[1]; i++) {
      xoffset = i * vlen;
      s = x->data[xoffset];
      for (k = 2; k <= vlen; k++) {
        s += x->data[(xoffset + k) - 1];
      }

      y->data[i] = s;
    }
  }

  i = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)y, i, (int)sizeof(double));
  i = y->size[0];
  vlen = y->size[1];
  xoffset = x->size[0];
  vlen *= i;
  for (i = 0; i < vlen; i++) {
    y->data[i] /= (double)xoffset;
  }
}

/*
 * File trailer for mean.c
 *
 * [EOF]
 */

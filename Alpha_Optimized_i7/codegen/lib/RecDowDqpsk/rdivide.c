/*
 * File: rdivide.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 18:36:28
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowDqpsk.h"
#include "rdivide.h"
#include "RecDowDqpsk_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 *                const emxArray_real_T *y
 *                emxArray_real_T *z
 * Return Type  : void
 */
void rdivide(const emxArray_real_T *x, const emxArray_real_T *y, emxArray_real_T
             *z)
{
  int i4;
  int loop_ub;
  i4 = z->size[0] * z->size[1];
  z->size[0] = x->size[0];
  z->size[1] = x->size[1];
  emxEnsureCapacity((emxArray__common *)z, i4, (int)sizeof(double));
  loop_ub = x->size[0] * x->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    z->data[i4] = x->data[i4] / y->data[i4];
  }
}

/*
 * File trailer for rdivide.c
 *
 * [EOF]
 */

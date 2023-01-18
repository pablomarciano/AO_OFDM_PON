/*
 * File: xor.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 18:36:28
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowDqpsk.h"
#include "xor.h"
#include "RecDowDqpsk_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *s
 *                const emxArray_real_T *t
 *                emxArray_boolean_T *y
 * Return Type  : void
 */
void xor(const emxArray_real_T *s, const emxArray_real_T *t, emxArray_boolean_T *
         y)
{
  int i5;
  int loop_ub;
  i5 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = s->size[1];
  emxEnsureCapacity((emxArray__common *)y, i5, (int)sizeof(boolean_T));
  loop_ub = s->size[0] * s->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    y->data[i5] = (((s->data[i5] != 0.0) ^ (t->data[i5] != 0.0)) != 0);
  }
}

/*
 * File trailer for xor.c
 *
 * [EOF]
 */

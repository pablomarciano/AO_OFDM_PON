/*
 * File: xor.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 12-Sep-2018 12:12:25
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "xor.h"
#include "RedDowOok_emxutil.h"

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
  int i7;
  int loop_ub;
  i7 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = s->size[1];
  emxEnsureCapacity((emxArray__common *)y, i7, (int)sizeof(boolean_T));
  loop_ub = s->size[0] * s->size[1];
  for (i7 = 0; i7 < loop_ub; i7++) {
    y->data[i7] = (((s->data[i7] != 0.0) ^ (t->data[i7] != 0.0)) != 0);
  }
}

/*
 * File trailer for xor.c
 *
 * [EOF]
 */

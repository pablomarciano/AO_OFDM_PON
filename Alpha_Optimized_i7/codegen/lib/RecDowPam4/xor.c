/*
 * File: xor.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 21:36:40
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "xor.h"
#include "RecDowPam4_emxutil.h"

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
  int i3;
  int loop_ub;
  i3 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = s->size[1];
  emxEnsureCapacity((emxArray__common *)y, i3, (int)sizeof(boolean_T));
  loop_ub = s->size[0] * s->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    y->data[i3] = (((s->data[i3] != 0.0) ^ (t->data[i3] != 0.0)) != 0);
  }
}

/*
 * File trailer for xor.c
 *
 * [EOF]
 */

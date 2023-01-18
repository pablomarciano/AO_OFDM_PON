/*
 * File: xor.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 15:11:07
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowDepsk.h"
#include "xor.h"
#include "RecDowDepsk_emxutil.h"

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
  int i4;
  int loop_ub;
  i4 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = s->size[1];
  emxEnsureCapacity((emxArray__common *)y, i4, (int)sizeof(boolean_T));
  loop_ub = s->size[0] * s->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    y->data[i4] = (((s->data[i4] != 0.0) ^ (t->data[i4] != 0.0)) != 0);
  }
}

/*
 * File trailer for xor.c
 *
 * [EOF]
 */

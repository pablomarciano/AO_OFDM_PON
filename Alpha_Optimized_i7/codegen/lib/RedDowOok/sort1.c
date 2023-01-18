/*
 * File: sort1.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 12-Sep-2018 12:12:25
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "sort1.h"
#include "sortIdx.h"
#include "nonSingletonDim.h"

/* Type Definitions */
#ifndef struct_emxArray_int32_T_204
#define struct_emxArray_int32_T_204

struct emxArray_int32_T_204
{
  int data[204];
  int size[1];
};

#endif                                 /*struct_emxArray_int32_T_204*/

#ifndef typedef_emxArray_int32_T_204
#define typedef_emxArray_int32_T_204

typedef struct emxArray_int32_T_204 emxArray_int32_T_204;

#endif                                 /*typedef_emxArray_int32_T_204*/

/* Function Declarations */
static void b_sort(double x_data[], int x_size[1], int dim, int idx_data[], int
                   idx_size[1]);

/* Function Definitions */

/*
 * Arguments    : double x_data[]
 *                int x_size[1]
 *                int dim
 *                int idx_data[]
 *                int idx_size[1]
 * Return Type  : void
 */
static void b_sort(double x_data[], int x_size[1], int dim, int idx_data[], int
                   idx_size[1])
{
  int i8;
  double vwork_data[204];
  int vwork_size[1];
  int vstride;
  int k;
  int j;
  int iidx_data[204];
  int iidx_size[1];
  if (dim <= 1) {
    i8 = x_size[0];
  } else {
    i8 = 1;
  }

  vwork_size[0] = (unsigned char)i8;
  idx_size[0] = (unsigned char)x_size[0];
  vstride = 1;
  k = 1;
  while (k <= dim - 1) {
    vstride *= x_size[0];
    k = 2;
  }

  for (j = 0; j + 1 <= vstride; j++) {
    for (k = 0; k + 1 <= i8; k++) {
      vwork_data[k] = x_data[j + k * vstride];
    }

    sortIdx(vwork_data, vwork_size, iidx_data, iidx_size);
    for (k = 0; k + 1 <= i8; k++) {
      x_data[j + k * vstride] = vwork_data[k];
      idx_data[j + k * vstride] = iidx_data[k];
    }
  }
}

/*
 * Arguments    : double x_data[]
 *                int x_size[1]
 * Return Type  : void
 */
void c_sort(double x_data[], int x_size[1])
{
  int dim;
  int i9;
  double vwork_data[204];
  int vwork_size[1];
  int vstride;
  int k;
  emxArray_int32_T_204 b_vwork_data;
  dim = nonSingletonDim(x_size);
  if (dim <= 1) {
    i9 = x_size[0];
  } else {
    i9 = 1;
  }

  vwork_size[0] = (unsigned char)i9;
  vstride = 1;
  k = 1;
  while (k <= dim - 1) {
    vstride *= x_size[0];
    k = 2;
  }

  for (dim = 0; dim + 1 <= vstride; dim++) {
    for (k = 0; k + 1 <= i9; k++) {
      vwork_data[k] = x_data[dim + k * vstride];
    }

    b_sortIdx(vwork_data, vwork_size, b_vwork_data.data, b_vwork_data.size);
    for (k = 0; k + 1 <= i9; k++) {
      x_data[dim + k * vstride] = vwork_data[k];
    }
  }
}

/*
 * Arguments    : double x[2]
 * Return Type  : void
 */
void d_sort(double x[2])
{
  double b_x[2];
  int i11;
  boolean_T p;
  for (i11 = 0; i11 < 2; i11++) {
    b_x[i11] = x[i11];
  }

  if ((x[0] <= x[1]) || rtIsNaN(x[1])) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
  } else {
    b_x[0] = x[1];
    b_x[1] = x[0];
  }

  for (i11 = 0; i11 < 2; i11++) {
    x[i11] = b_x[i11];
  }
}

/*
 * Arguments    : double x_data[]
 *                int x_size[1]
 *                int idx_data[]
 *                int idx_size[1]
 * Return Type  : void
 */
void sort(double x_data[], int x_size[1], int idx_data[], int idx_size[1])
{
  int dim;
  dim = 2;
  if (x_size[0] != 1) {
    dim = 1;
  }

  b_sort(x_data, x_size, dim, idx_data, idx_size);
}

/*
 * File trailer for sort1.c
 *
 * [EOF]
 */

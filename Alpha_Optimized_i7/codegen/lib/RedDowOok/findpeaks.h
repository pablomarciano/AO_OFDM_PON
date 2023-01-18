/*
 * File: findpeaks.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 12-Sep-2018 12:12:25
 */

#ifndef FINDPEAKS_H
#define FINDPEAKS_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "RedDowOok_types.h"

/* Function Declarations */
extern void b_findpeaks(const double Yin[102], double Ypk_data[], int Ypk_size[2],
  double Xpk_data[], int Xpk_size[2]);
extern void findpeaks(const double Yin[102], double Ypk_data[], int Ypk_size[2],
                      double Xpk_data[], int Xpk_size[2]);

#endif

/*
 * File trailer for findpeaks.h
 *
 * [EOF]
 */

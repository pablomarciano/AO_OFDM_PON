/*
 * File: Olho.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 01-Sep-2018 15:04:10
 */

#ifndef OLHO_H
#define OLHO_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "Olho_types.h"

/* Function Declarations */
extern void Olho(const emxArray_real_T *Dados, double t_simb, double
                 n_amos_p_sim, double ploting, double tmax, emxArray_real_T
                 *olho_mat, emxArray_real_T *tn, double *Olho_Aber, double
                 *Aber_Lhi, double *Aber_Llow);

#endif

/*
 * File trailer for Olho.h
 *
 * [EOF]
 */

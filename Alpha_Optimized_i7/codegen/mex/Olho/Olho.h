/*
 * Olho.h
 *
 * Code generation for function 'Olho'
 *
 */

#ifndef OLHO_H
#define OLHO_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "Olho_types.h"

/* Function Declarations */
extern void Olho(const emlrtStack *sp, const emxArray_real_T *Dados, real_T
                 t_simb, real_T n_amos_p_sim, real_T ploting, real_T tmax,
                 emxArray_real_T *olho_mat, emxArray_real_T *tn, real_T
                 *Olho_Aber, real_T *Aber_Lhi, real_T *Aber_Llow);

#endif

/* End of code generation (Olho.h) */

/*
 * File: _coder_Olho_api.h
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 01-Sep-2018 15:04:10
 */

#ifndef _CODER_OLHO_API_H
#define _CODER_OLHO_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_Olho_api.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void Olho(emxArray_real_T *Dados, real_T t_simb, real_T n_amos_p_sim,
                 real_T ploting, real_T tmax, emxArray_real_T *olho_mat,
                 emxArray_real_T *tn, real_T *Olho_Aber, real_T *Aber_Lhi,
                 real_T *Aber_Llow);
extern void Olho_api(const mxArray *prhs[5], const mxArray *plhs[5]);
extern void Olho_atexit(void);
extern void Olho_initialize(void);
extern void Olho_terminate(void);
extern void Olho_xil_terminate(void);

#endif

/*
 * File trailer for _coder_Olho_api.h
 *
 * [EOF]
 */

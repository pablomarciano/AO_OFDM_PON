/*
 * Olho_terminate.c
 *
 * Code generation for function 'Olho_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Olho.h"
#include "Olho_terminate.h"
#include "_coder_Olho_mex.h"
#include "Olho_data.h"

/* Function Definitions */
void Olho_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);

  /* Free instance data */
  covrtFreeInstanceData(&emlrtCoverageInstance);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void Olho_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (Olho_terminate.c) */

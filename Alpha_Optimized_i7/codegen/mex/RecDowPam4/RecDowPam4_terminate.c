/*
 * RecDowPam4_terminate.c
 *
 * Code generation for function 'RecDowPam4_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "RecDowPam4_terminate.h"
#include "_coder_RecDowPam4_mex.h"
#include "RecDowPam4_data.h"

/* Function Definitions */
void RecDowPam4_atexit(void)
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

void RecDowPam4_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (RecDowPam4_terminate.c) */

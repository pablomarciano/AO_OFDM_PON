/*
 * RecDowDepsk_terminate.c
 *
 * Code generation for function 'RecDowDepsk_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowDepsk.h"
#include "RecDowDepsk_terminate.h"
#include "_coder_RecDowDepsk_mex.h"
#include "RecDowDepsk_data.h"

/* Function Definitions */
void RecDowDepsk_atexit(void)
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

void RecDowDepsk_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (RecDowDepsk_terminate.c) */

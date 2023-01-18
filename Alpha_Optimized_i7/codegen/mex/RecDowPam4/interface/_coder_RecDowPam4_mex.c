/*
 * _coder_RecDowPam4_mex.c
 *
 * Code generation for function '_coder_RecDowPam4_mex'
 *
 */

/* Include files */
#include "RecDowPam4.h"
#include "_coder_RecDowPam4_mex.h"
#include "RecDowPam4_terminate.h"
#include "_coder_RecDowPam4_api.h"
#include "RecDowPam4_initialize.h"
#include "RecDowPam4_data.h"

/* Function Declarations */
static void RecDowPam4_mexFunction(int32_T nlhs, mxArray *plhs[33], int32_T nrhs,
  const mxArray *prhs[20]);

/* Function Definitions */
static void RecDowPam4_mexFunction(int32_T nlhs, mxArray *plhs[33], int32_T nrhs,
  const mxArray *prhs[20])
{
  int32_T n;
  const mxArray *inputs[20];
  const mxArray *outputs[33];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 20) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 20, 4,
                        10, "RecDowPam4");
  }

  if (nlhs > 33) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 10,
                        "RecDowPam4");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  RecDowPam4_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  RecDowPam4_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(RecDowPam4_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  RecDowPam4_initialize();

  /* Dispatch the entry-point. */
  RecDowPam4_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_RecDowPam4_mex.c) */

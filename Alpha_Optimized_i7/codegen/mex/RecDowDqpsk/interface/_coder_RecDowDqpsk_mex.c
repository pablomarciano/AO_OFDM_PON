/*
 * _coder_RecDowDqpsk_mex.c
 *
 * Code generation for function '_coder_RecDowDqpsk_mex'
 *
 */

/* Include files */
#include "RecDowDqpsk.h"
#include "_coder_RecDowDqpsk_mex.h"
#include "RecDowDqpsk_terminate.h"
#include "_coder_RecDowDqpsk_api.h"
#include "RecDowDqpsk_initialize.h"
#include "RecDowDqpsk_data.h"

/* Function Declarations */
static void RecDowDqpsk_mexFunction(int32_T nlhs, mxArray *plhs[21], int32_T
  nrhs, const mxArray *prhs[19]);

/* Function Definitions */
static void RecDowDqpsk_mexFunction(int32_T nlhs, mxArray *plhs[21], int32_T
  nrhs, const mxArray *prhs[19])
{
  int32_T n;
  const mxArray *inputs[19];
  const mxArray *outputs[21];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 19) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 19, 4,
                        11, "RecDowDqpsk");
  }

  if (nlhs > 21) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "RecDowDqpsk");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  RecDowDqpsk_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  RecDowDqpsk_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(RecDowDqpsk_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  RecDowDqpsk_initialize();

  /* Dispatch the entry-point. */
  RecDowDqpsk_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_RecDowDqpsk_mex.c) */

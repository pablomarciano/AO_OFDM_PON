/*
 * _coder_RedDowOok_mex.c
 *
 * Code generation for function '_coder_RedDowOok_mex'
 *
 */

/* Include files */
#include "RedDowOok.h"
#include "_coder_RedDowOok_mex.h"
#include "RedDowOok_terminate.h"
#include "_coder_RedDowOok_api.h"
#include "RedDowOok_initialize.h"
#include "RedDowOok_data.h"

/* Function Declarations */
static void RedDowOok_mexFunction(int32_T nlhs, mxArray *plhs[15], int32_T nrhs,
  const mxArray *prhs[10]);

/* Function Definitions */
static void RedDowOok_mexFunction(int32_T nlhs, mxArray *plhs[15], int32_T nrhs,
  const mxArray *prhs[10])
{
  int32_T n;
  const mxArray *inputs[10];
  const mxArray *outputs[15];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 10, 4,
                        9, "RedDowOok");
  }

  if (nlhs > 15) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 9,
                        "RedDowOok");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  RedDowOok_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  RedDowOok_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(RedDowOok_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  RedDowOok_initialize();

  /* Dispatch the entry-point. */
  RedDowOok_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_RedDowOok_mex.c) */

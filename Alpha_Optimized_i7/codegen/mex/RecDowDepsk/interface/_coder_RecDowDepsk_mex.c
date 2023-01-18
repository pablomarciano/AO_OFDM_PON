/*
 * _coder_RecDowDepsk_mex.c
 *
 * Code generation for function '_coder_RecDowDepsk_mex'
 *
 */

/* Include files */
#include "RecDowDepsk.h"
#include "_coder_RecDowDepsk_mex.h"
#include "RecDowDepsk_terminate.h"
#include "_coder_RecDowDepsk_api.h"
#include "RecDowDepsk_initialize.h"
#include "RecDowDepsk_data.h"

/* Function Declarations */
static void RecDowDepsk_mexFunction(int32_T nlhs, mxArray *plhs[10], int32_T
  nrhs, const mxArray *prhs[15]);

/* Function Definitions */
static void RecDowDepsk_mexFunction(int32_T nlhs, mxArray *plhs[10], int32_T
  nrhs, const mxArray *prhs[15])
{
  int32_T n;
  const mxArray *inputs[15];
  const mxArray *outputs[10];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 15) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 15, 4,
                        11, "RecDowDepsk");
  }

  if (nlhs > 10) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 11,
                        "RecDowDepsk");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  RecDowDepsk_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  RecDowDepsk_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(RecDowDepsk_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  RecDowDepsk_initialize();

  /* Dispatch the entry-point. */
  RecDowDepsk_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_RecDowDepsk_mex.c) */

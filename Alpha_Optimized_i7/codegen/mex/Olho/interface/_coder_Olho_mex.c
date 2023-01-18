/*
 * _coder_Olho_mex.c
 *
 * Code generation for function '_coder_Olho_mex'
 *
 */

/* Include files */
#include "Olho.h"
#include "_coder_Olho_mex.h"
#include "Olho_terminate.h"
#include "_coder_Olho_api.h"
#include "Olho_initialize.h"
#include "Olho_data.h"

/* Function Declarations */
static void Olho_mexFunction(int32_T nlhs, mxArray *plhs[5], int32_T nrhs, const
  mxArray *prhs[5]);

/* Function Definitions */
static void Olho_mexFunction(int32_T nlhs, mxArray *plhs[5], int32_T nrhs, const
  mxArray *prhs[5])
{
  int32_T n;
  const mxArray *inputs[5];
  const mxArray *outputs[5];
  int32_T b_nlhs;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4, 4,
                        "Olho");
  }

  if (nlhs > 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 4,
                        "Olho");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  Olho_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  Olho_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(Olho_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  Olho_initialize();

  /* Dispatch the entry-point. */
  Olho_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_Olho_mex.c) */

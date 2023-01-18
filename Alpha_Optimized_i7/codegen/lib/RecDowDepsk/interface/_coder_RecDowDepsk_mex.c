/*
 * File: _coder_RecDowDepsk_mex.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 15:11:07
 */

/* Include Files */
#include "_coder_RecDowDepsk_api.h"
#include "_coder_RecDowDepsk_mex.h"

/* Function Declarations */
static void RecDowDepsk_mexFunction(int32_T nlhs, mxArray *plhs[10], int32_T
  nrhs, const mxArray *prhs[15]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[10]
 *                int32_T nrhs
 *                const mxArray *prhs[15]
 * Return Type  : void
 */
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

/*
 * Arguments    : int32_T nlhs
 *                const mxArray * const plhs[]
 *                int32_T nrhs
 *                const mxArray * const prhs[]
 * Return Type  : void
 */
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

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/*
 * File trailer for _coder_RecDowDepsk_mex.c
 *
 * [EOF]
 */

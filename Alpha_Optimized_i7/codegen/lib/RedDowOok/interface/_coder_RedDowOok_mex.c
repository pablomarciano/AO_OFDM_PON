/*
 * File: _coder_RedDowOok_mex.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 12-Sep-2018 12:12:25
 */

/* Include Files */
#include "_coder_RedDowOok_api.h"
#include "_coder_RedDowOok_mex.h"

/* Function Declarations */
static void RedDowOok_mexFunction(int32_T nlhs, mxArray *plhs[15], int32_T nrhs,
  const mxArray *prhs[10]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[15]
 *                int32_T nrhs
 *                const mxArray *prhs[10]
 * Return Type  : void
 */
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
  mexAtExit(RedDowOok_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  RedDowOok_initialize();

  /* Dispatch the entry-point. */
  RedDowOok_mexFunction(nlhs, plhs, nrhs, prhs);
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
 * File trailer for _coder_RedDowOok_mex.c
 *
 * [EOF]
 */

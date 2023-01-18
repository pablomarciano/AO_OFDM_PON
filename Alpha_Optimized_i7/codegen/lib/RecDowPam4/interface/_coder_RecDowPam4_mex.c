/*
 * File: _coder_RecDowPam4_mex.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 21:36:40
 */

/* Include Files */
#include "_coder_RecDowPam4_api.h"
#include "_coder_RecDowPam4_mex.h"

/* Function Declarations */
static void RecDowPam4_mexFunction(int32_T nlhs, mxArray *plhs[33], int32_T nrhs,
  const mxArray *prhs[20]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[33]
 *                int32_T nrhs
 *                const mxArray *prhs[20]
 * Return Type  : void
 */
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
  mexAtExit(RecDowPam4_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  RecDowPam4_initialize();

  /* Dispatch the entry-point. */
  RecDowPam4_mexFunction(nlhs, plhs, nrhs, prhs);
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
 * File trailer for _coder_RecDowPam4_mex.c
 *
 * [EOF]
 */

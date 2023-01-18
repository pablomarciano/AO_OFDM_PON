/*
 * Olho_initialize.c
 *
 * Code generation for function 'Olho_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Olho.h"
#include "Olho_initialize.h"
#include "_coder_Olho_mex.h"
#include "Olho_data.h"

/* Function Declarations */
static void Olho_once(void);

/* Function Definitions */
static void Olho_once(void)
{
  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m",
                  0, 1, 9, 3, 0, 0, 0, 1, 1, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "Olho", 0, -1, 8258);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 3, 3706, -1, 3716);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 5, 4353, -1, 4507);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 8, 6914, -1, 6987);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 7, 5766, -1, 6806);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 6, 4650, -1, 5651);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 4, 3883, -1, 3915);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 2, 2496, -1, 3273);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 1, 2477, -1, 2485);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 2419, -1, 2455);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0, 0, 2403, 2414, 2457, 2472);
  covrtIfInit(&emlrtCoverageInstance, 0, 1, 2457, 2472, -1, 2472);
  covrtIfInit(&emlrtCoverageInstance, 0, 2, 3558, 3574, 3718, 4607);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0, 0, 5682, 5696, 6811);

  /* Initialize While Information */
  covrtWhileInit(&emlrtCoverageInstance, 0, 0, 4184, 4219, 4603);

  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void Olho_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    Olho_once();
  }
}

/* End of code generation (Olho_initialize.c) */

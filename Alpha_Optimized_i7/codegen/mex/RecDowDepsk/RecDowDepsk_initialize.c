/*
 * RecDowDepsk_initialize.c
 *
 * Code generation for function 'RecDowDepsk_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowDepsk.h"
#include "RecDowDepsk_initialize.h"
#include "_coder_RecDowDepsk_mex.h"
#include "RecDowDepsk_data.h"

/* Function Declarations */
static void RecDowDepsk_once(void);

/* Function Definitions */
static void RecDowDepsk_once(void)
{
  int32_T cond_starts_0_0[2] = { 10339, 10353 };

  int32_T cond_ends_0_0[2] = { 10349, 10363 };

  int32_T postfix_exprs_0_0[3] = { 0, 1, -2 };

  int32_T cond_starts_0_1[1] = { 11876 };

  int32_T cond_ends_0_1[1] = { 11886 };

  int32_T postfix_exprs_0_1[2] = { 0, -1 };

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
                  0, 1, 21, 9, 0, 0, 0, 2, 0, 3, 2);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "RecDowDepsk", 0, -1, 22266);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 20, 22207, -1, 22260);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 19, 20769, -1, 22105);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 18, 20033, -1, 20046);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 17, 19864, -1, 19877);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 16, 19625, -1, 19637);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 15, 19457, -1, 19469);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 14, 19287, -1, 19331);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 13, 12300, -1, 18815);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 12, 12133, -1, 12152);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 11, 12014, -1, 12029);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 10, 11851, -1, 11870);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 9, 11317, -1, 11388);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 8, 11089, -1, 11102);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 7, 10479, -1, 10795);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 6, 10300, -1, 10334);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 5, 9702, -1, 10011);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 4, 9471, -1, 9494);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 3, 9118, -1, 9256);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 2, 7119, -1, 8705);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 1, 4978, -1, 5203);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 1817, -1, 1963);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0, 0, 4965, 4973, -1, 5208);
  covrtIfInit(&emlrtCoverageInstance, 0, 1, 9031, 9043, 9597, 10153);
  covrtIfInit(&emlrtCoverageInstance, 0, 2, 9351, 9371, -1, 9592);
  covrtIfInit(&emlrtCoverageInstance, 0, 3, 10336, 10363, 10797, 11462);
  covrtIfInit(&emlrtCoverageInstance, 0, 4, 10946, 10982, 11219, 11458);
  covrtIfInit(&emlrtCoverageInstance, 0, 5, 11872, 11886, 12124, 12157);
  covrtIfInit(&emlrtCoverageInstance, 0, 6, 19337, 19362, 19513, 19684);
  covrtIfInit(&emlrtCoverageInstance, 0, 7, 19742, 19769, 19921, 20093);
  covrtIfInit(&emlrtCoverageInstance, 0, 8, 22184, 22202, -1, 22265);

  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 0, 0, 10339, 10363, 2, 0,
                cond_starts_0_0, cond_ends_0_0, 3, postfix_exprs_0_0);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 1, 11875, 11886, 1, 2,
                cond_starts_0_1, cond_ends_0_1, 2, postfix_exprs_0_1);

  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0, 0, 8949, 8972, 10157);
  covrtForInit(&emlrtCoverageInstance, 0, 1, 19080, 19110, 20583);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void RecDowDepsk_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    RecDowDepsk_once();
  }
}

/* End of code generation (RecDowDepsk_initialize.c) */

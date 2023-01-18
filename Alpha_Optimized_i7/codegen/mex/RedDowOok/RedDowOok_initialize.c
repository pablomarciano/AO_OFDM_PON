/*
 * RedDowOok_initialize.c
 *
 * Code generation for function 'RedDowOok_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "RedDowOok_initialize.h"
#include "_coder_RedDowOok_mex.h"
#include "RedDowOok_data.h"

/* Function Declarations */
static void RedDowOok_once(void);

/* Function Definitions */
static void RedDowOok_once(void)
{
  int32_T cond_starts_0_0[2] = { 6031, 6043 };

  int32_T cond_ends_0_0[2] = { 6039, 6051 };

  int32_T postfix_exprs_0_0[3] = { 0, 1, -2 };

  int32_T cond_starts_0_1[2] = { 7145, 7158 };

  int32_T cond_ends_0_1[2] = { 7154, 7167 };

  int32_T postfix_exprs_0_1[3] = { 0, 1, -2 };

  int32_T cond_starts_0_2[1] = { 8652 };

  int32_T cond_ends_0_2[1] = { 8660 };

  int32_T postfix_exprs_0_2[2] = { 0, -1 };

  int32_T cond_starts_0_3[1] = { 8950 };

  int32_T cond_ends_0_3[1] = { 8959 };

  int32_T postfix_exprs_0_3[2] = { 0, -1 };

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
                  0, 1, 39, 18, 0, 0, 0, 2, 0, 6, 4);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "RedDowOok", 0, -1, 14438);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 38, 14217, -1, 14421);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 37, 14063, -1, 14121);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 36, 13813, -1, 14017);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 35, 13547, -1, 13794);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 34, 12773, -1, 13418);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 33, 12705, -1, 12722);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 32, 12534, -1, 12551);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 31, 12356, -1, 12373);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 30, 12185, -1, 12202);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 29, 11964, -1, 12006);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 28, 11898, -1, 11914);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 27, 11728, -1, 11744);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 26, 11510, -1, 11551);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 25, 9306, -1, 11050);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 24, 9204, -1, 9223);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 23, 9071, -1, 9100);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 22, 8926, -1, 8944);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 21, 8903, -1, 8920);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 20, 8772, -1, 8799);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 19, 8629, -1, 8646);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 18, 8114, -1, 8165);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 17, 7886, -1, 7899);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 16, 7283, -1, 7595);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 15, 7109, -1, 7140);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 14, 6988, -1, 7034);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 13, 6761, -1, 6773);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 12, 6167, -1, 6473);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 11, 5998, -1, 6026);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 10, 5403, -1, 5707);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 9, 5174, -1, 5195);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 8, 4826, -1, 4959);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 7, 4288, -1, 4587);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 6, 4061, -1, 4080);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 5, 3718, -1, 3846);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 4, 2106, -1, 3305);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 3, 1803, -1, 1884);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 2, 1711, -1, 1733);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 1, 1457, -1, 1459);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 223, -1, 1232);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0, 0, 1389, 1408, -1, 1620);
  covrtIfInit(&emlrtCoverageInstance, 0, 1, 1622, 1641, 1735, 2105);
  covrtIfInit(&emlrtCoverageInstance, 0, 2, 3631, 3643, 4183, 4729);
  covrtIfInit(&emlrtCoverageInstance, 0, 3, 3941, 3961, -1, 4178);
  covrtIfInit(&emlrtCoverageInstance, 0, 4, 4739, 4751, 5298, 5849);
  covrtIfInit(&emlrtCoverageInstance, 0, 5, 5054, 5074, -1, 5293);
  covrtIfInit(&emlrtCoverageInstance, 0, 6, 6028, 6051, 6475, 7108);
  covrtIfInit(&emlrtCoverageInstance, 0, 7, 6624, 6654, 6890, 7104);
  covrtIfInit(&emlrtCoverageInstance, 0, 8, 7142, 7167, 7597, 8239);
  covrtIfInit(&emlrtCoverageInstance, 0, 9, 7746, 7779, 8016, 8235);
  covrtIfInit(&emlrtCoverageInstance, 0, 10, 8648, 8660, 8894, 8925);
  covrtIfInit(&emlrtCoverageInstance, 0, 11, 8946, 8959, 9195, 9228);
  covrtIfInit(&emlrtCoverageInstance, 0, 12, 11611, 11632, 11786, 11959);
  covrtIfInit(&emlrtCoverageInstance, 0, 13, 12066, 12089, 12244, 12418);
  covrtIfInit(&emlrtCoverageInstance, 0, 14, 12423, 12459, 12593, 12767);
  covrtIfInit(&emlrtCoverageInstance, 0, 15, 13496, 13514, 14027, 14434);
  covrtIfInit(&emlrtCoverageInstance, 0, 16, 13519, 13538, 13800, 14026);
  covrtIfInit(&emlrtCoverageInstance, 0, 17, 14036, 14054, 14204, 14430);

  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 0, 0, 6031, 6051, 2, 0, cond_starts_0_0,
                cond_ends_0_0, 3, postfix_exprs_0_0);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 1, 7145, 7167, 2, 2, cond_starts_0_1,
                cond_ends_0_1, 3, postfix_exprs_0_1);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 2, 8651, 8660, 1, 4, cond_starts_0_2,
                cond_ends_0_2, 2, postfix_exprs_0_2);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 3, 8949, 8959, 1, 5, cond_starts_0_3,
                cond_ends_0_3, 2, postfix_exprs_0_3);

  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0, 0, 3549, 3572, 5853);
  covrtForInit(&emlrtCoverageInstance, 0, 1, 11162, 11192, 12771);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void RedDowOok_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    RedDowOok_once();
  }
}

/* End of code generation (RedDowOok_initialize.c) */

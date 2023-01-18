/*
 * RecDowDqpsk_initialize.c
 *
 * Code generation for function 'RecDowDqpsk_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowDqpsk.h"
#include "RecDowDqpsk_initialize.h"
#include "_coder_RecDowDqpsk_mex.h"
#include "RecDowDqpsk_data.h"

/* Function Declarations */
static void RecDowDqpsk_once(void);

/* Function Definitions */
static void RecDowDqpsk_once(void)
{
  int32_T cond_starts_0_0[2] = { 14732, 14746 };

  int32_T cond_ends_0_0[2] = { 14742, 14756 };

  int32_T postfix_exprs_0_0[3] = { 0, 1, -2 };

  int32_T cond_starts_0_1[2] = { 15958, 15973 };

  int32_T cond_ends_0_1[2] = { 15969, 15984 };

  int32_T postfix_exprs_0_1[3] = { 0, 1, -2 };

  int32_T cond_starts_0_2[1] = { 17600 };

  int32_T cond_ends_0_2[1] = { 17610 };

  int32_T postfix_exprs_0_2[2] = { 0, -1 };

  int32_T cond_starts_0_3[1] = { 17937 };

  int32_T cond_ends_0_3[1] = { 17948 };

  int32_T postfix_exprs_0_3[2] = { 0, -1 };

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
                  0, 1, 37, 16, 0, 0, 0, 3, 0, 6, 4);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "RecDowDqpsk", 0, -1, 28660);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 36, 28491, -1, 28565);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 35, 27687, -1, 28343);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 34, 27405, -1, 27422);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 33, 27224, -1, 27241);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 32, 26967, -1, 26983);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 31, 26789, -1, 26805);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 30, 26610, -1, 26654);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 29, 25977, -1, 26262);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 28, 22536, -1, 22552);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 27, 22356, -1, 22372);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 26, 22098, -1, 22113);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 25, 21919, -1, 21934);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 24, 21741, -1, 21785);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 23, 18329, -1, 21409);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 22, 18213, -1, 18234);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 21, 18085, -1, 18101);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 20, 17906, -1, 17927);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 19, 17873, -1, 17892);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 18, 17746, -1, 17761);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 17, 17571, -1, 17590);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 16, 16988, -1, 17068);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 15, 16751, -1, 16765);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 14, 16104, -1, 16442);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 13, 15912, -1, 15949);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 12, 15750, -1, 15825);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 11, 15514, -1, 15527);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 10, 14876, -1, 15208);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 9, 14689, -1, 14723);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 8, 14052, -1, 14374);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 7, 13807, -1, 13832);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 6, 13436, -1, 13583);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 5, 12871, -1, 13188);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 4, 12628, -1, 12651);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 3, 12263, -1, 12405);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 2, 9352, -1, 11822);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 1, 5332, -1, 5857);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 371, -1, 3930);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0, 0, 5315, 5323, -1, 5866);
  covrtIfInit(&emlrtCoverageInstance, 0, 1, 12172, 12184, 12762, 13334);
  covrtIfInit(&emlrtCoverageInstance, 0, 2, 12504, 12524, -1, 12753);
  covrtIfInit(&emlrtCoverageInstance, 0, 3, 13344, 13357, 13943, 14520);
  covrtIfInit(&emlrtCoverageInstance, 0, 4, 13682, 13703, -1, 13934);
  covrtIfInit(&emlrtCoverageInstance, 0, 5, 14729, 14756, 15214, 15907);
  covrtIfInit(&emlrtCoverageInstance, 0, 6, 15367, 15403, 15648, 15899);
  covrtIfInit(&emlrtCoverageInstance, 0, 7, 15955, 15984, 16448, 17150);
  covrtIfInit(&emlrtCoverageInstance, 0, 8, 16601, 16640, 16886, 17142);
  covrtIfInit(&emlrtCoverageInstance, 0, 9, 17596, 17610, 17860, 17901);
  covrtIfInit(&emlrtCoverageInstance, 0, 10, 17933, 17948, 18200, 18243);
  covrtIfInit(&emlrtCoverageInstance, 0, 11, 21795, 21820, 21982, 22164);
  covrtIfInit(&emlrtCoverageInstance, 0, 12, 22230, 22257, 22420, 22603);
  covrtIfInit(&emlrtCoverageInstance, 0, 13, 26664, 26690, 26851, 27032);
  covrtIfInit(&emlrtCoverageInstance, 0, 14, 27098, 27125, 27289, 27473);
  covrtIfInit(&emlrtCoverageInstance, 0, 15, 28426, 28482, -1, 28651);

  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 0, 0, 14732, 14756, 2, 0,
                cond_starts_0_0, cond_ends_0_0, 3, postfix_exprs_0_0);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 1, 15958, 15984, 2, 2,
                cond_starts_0_1, cond_ends_0_1, 3, postfix_exprs_0_1);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 2, 17599, 17610, 1, 4,
                cond_starts_0_2, cond_ends_0_2, 2, postfix_exprs_0_2);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 3, 17936, 17948, 1, 5,
                cond_starts_0_3, cond_ends_0_3, 2, postfix_exprs_0_3);

  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0, 0, 12086, 12109, 14528);
  covrtForInit(&emlrtCoverageInstance, 0, 1, 21526, 21556, 22611);
  covrtForInit(&emlrtCoverageInstance, 0, 2, 26378, 26408, 27481);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void RecDowDqpsk_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    RecDowDqpsk_once();
  }
}

/* End of code generation (RecDowDqpsk_initialize.c) */

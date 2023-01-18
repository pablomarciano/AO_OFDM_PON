/*
 * RecDowPam4_initialize.c
 *
 * Code generation for function 'RecDowPam4_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "RecDowPam4_initialize.h"
#include "_coder_RecDowPam4_mex.h"
#include "RecDowPam4_data.h"

/* Function Declarations */
static void RecDowPam4_once(void);

/* Function Definitions */
static void RecDowPam4_once(void)
{
  int32_T cond_starts_0_0[2] = { 13168, 13182 };

  int32_T cond_ends_0_0[2] = { 13178, 13192 };

  int32_T postfix_exprs_0_0[3] = { 0, 1, -2 };

  int32_T cond_starts_0_1[2] = { 14337, 14351 };

  int32_T cond_ends_0_1[2] = { 14347, 14361 };

  int32_T postfix_exprs_0_1[3] = { 0, 1, -2 };

  int32_T cond_starts_0_2[2] = { 14661, 14675 };

  int32_T cond_ends_0_2[2] = { 14671, 14685 };

  int32_T postfix_exprs_0_2[3] = { 0, 1, -2 };

  int32_T cond_starts_0_3[1] = { 15364 };

  int32_T cond_ends_0_3[1] = { 15374 };

  int32_T postfix_exprs_0_3[2] = { 0, -1 };

  int32_T cond_starts_0_4[1] = { 15800 };

  int32_T cond_ends_0_4[1] = { 15810 };

  int32_T postfix_exprs_0_4[2] = { 0, -1 };

  int32_T cond_starts_0_5[1] = { 16055 };

  int32_T cond_ends_0_5[1] = { 16065 };

  int32_T postfix_exprs_0_5[2] = { 0, -1 };

  int32_T cond_starts_0_6[2] = { 18019, 18043 };

  int32_T cond_ends_0_6[2] = { 18039, 18062 };

  int32_T postfix_exprs_0_6[3] = { 0, 1, -3 };

  int32_T cond_starts_0_7[2] = { 18322, 18346 };

  int32_T cond_ends_0_7[2] = { 18342, 18365 };

  int32_T postfix_exprs_0_7[3] = { 0, 1, -3 };

  int32_T cond_starts_0_8[2] = { 19680, 19705 };

  int32_T cond_ends_0_8[2] = { 19701, 19725 };

  int32_T postfix_exprs_0_8[3] = { 0, 1, -3 };

  int32_T cond_starts_0_9[2] = { 19995, 20020 };

  int32_T cond_ends_0_9[2] = { 20016, 20040 };

  int32_T postfix_exprs_0_9[3] = { 0, 1, -3 };

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
                  0, 1, 56, 31, 0, 0, 0, 2, 0, 17, 10);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0, 0, "RecDowPam4", 0, -1, 21680);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 55, 21622, -1, 21674);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 54, 21538, -1, 21616);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 53, 21500, -1, 21519);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 52, 21008, -1, 21370);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 51, 20758, -1, 20880);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 50, 20410, -1, 20532);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 49, 20097, -1, 20219);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 48, 19784, -1, 19906);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 47, 19469, -1, 19591);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 46, 19061, -1, 19171);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 45, 18725, -1, 18835);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 44, 18424, -1, 18534);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 43, 18123, -1, 18233);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 42, 17820, -1, 17930);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 41, 17406, -1, 17561);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 40, 16285, -1, 17188);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 39, 16230, -1, 16270);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 38, 16192, -1, 16211);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 37, 16070, -1, 16103);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 36, 16030, -1, 16049);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 35, 15975, -1, 16015);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 34, 15937, -1, 15956);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 33, 15815, -1, 15848);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 32, 15775, -1, 15794);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 31, 15720, -1, 15760);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 30, 15682, -1, 15701);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 29, 15486, -1, 15519);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 28, 15339, -1, 15358);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 27, 14876, -1, 14931);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 26, 14841, -1, 14857);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 25, 14690, -1, 14785);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 24, 14622, -1, 14656);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 23, 14552, -1, 14607);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 22, 14517, -1, 14533);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 21, 14366, -1, 14461);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 20, 14298, -1, 14332);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 19, 14152, -1, 14223);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 18, 13921, -1, 13937);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 17, 13308, -1, 13627);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 16, 13129, -1, 13163);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 15, 12892, -1, 12971);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 14, 12838, -1, 12861);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 13, 12737, -1, 12795);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 12, 12618, -1, 12697);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 11, 12564, -1, 12587);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 10, 12463, -1, 12521);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 9, 11981, -1, 12290);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 8, 11750, -1, 11773);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 7, 11397, -1, 11535);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 6, 8900, -1, 10984);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 5, 8413, -1, 8550);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 4, 8104, -1, 8133);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 3, 6144, -1, 6146);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 2, 4080, -1, 5932);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 1, 3807, -1, 4030);
  covrtBasicBlockInit(&emlrtCoverageInstance, 0, 0, 484, -1, 630);

  /* Initialize If Information */
  covrtIfInit(&emlrtCoverageInstance, 0, 0, 3790, 3801, -1, 4035);
  covrtIfInit(&emlrtCoverageInstance, 0, 1, 6120, 6139, -1, 6343);
  covrtIfInit(&emlrtCoverageInstance, 0, 2, 8011, 8030, 8345, 8771);
  covrtIfInit(&emlrtCoverageInstance, 0, 3, 11310, 11322, 11876, 12432);
  covrtIfInit(&emlrtCoverageInstance, 0, 4, 11630, 11650, -1, 11871);
  covrtIfInit(&emlrtCoverageInstance, 0, 5, 12442, 12454, 12605, 12706);
  covrtIfInit(&emlrtCoverageInstance, 0, 6, 12531, 12551, -1, 12600);
  covrtIfInit(&emlrtCoverageInstance, 0, 7, 12716, 12728, 12879, 12980);
  covrtIfInit(&emlrtCoverageInstance, 0, 8, 12805, 12825, -1, 12874);
  covrtIfInit(&emlrtCoverageInstance, 0, 9, 13165, 13192, 13629, 14297);
  covrtIfInit(&emlrtCoverageInstance, 0, 10, 13778, 13814, 14054, 14293);
  covrtIfInit(&emlrtCoverageInstance, 0, 11, 14334, 14361, 14463, 14620);
  covrtIfInit(&emlrtCoverageInstance, 0, 12, 14472, 14508, 14539, 14616);
  covrtIfInit(&emlrtCoverageInstance, 0, 13, 14658, 14685, 14787, 14949);
  covrtIfInit(&emlrtCoverageInstance, 0, 14, 14796, 14832, 14863, 14940);
  covrtIfInit(&emlrtCoverageInstance, 0, 15, 15360, 15374, 15614, 15773);
  covrtIfInit(&emlrtCoverageInstance, 0, 16, 15623, 15635, 15707, 15769);
  covrtIfInit(&emlrtCoverageInstance, 0, 17, 15796, 15810, 15869, 16028);
  covrtIfInit(&emlrtCoverageInstance, 0, 18, 15878, 15890, 15962, 16024);
  covrtIfInit(&emlrtCoverageInstance, 0, 19, 16051, 16065, 16124, 16283);
  covrtIfInit(&emlrtCoverageInstance, 0, 20, 16133, 16145, 16217, 16279);
  covrtIfInit(&emlrtCoverageInstance, 0, 21, 17708, 17731, 18011, 19293);
  covrtIfInit(&emlrtCoverageInstance, 0, 22, 18011, 18063, 18314, 19293);
  covrtIfInit(&emlrtCoverageInstance, 0, 23, 18314, 18366, 18615, 19293);
  covrtIfInit(&emlrtCoverageInstance, 0, 24, 18615, 18641, 18916, 19293);
  covrtIfInit(&emlrtCoverageInstance, 0, 25, 19357, 19381, 19672, 21002);
  covrtIfInit(&emlrtCoverageInstance, 0, 26, 19672, 19726, 19987, 21002);
  covrtIfInit(&emlrtCoverageInstance, 0, 27, 19987, 20041, 20300, 21002);
  covrtIfInit(&emlrtCoverageInstance, 0, 28, 20300, 20327, 20613, 21002);
  covrtIfInit(&emlrtCoverageInstance, 0, 29, 21448, 21462, 21529, 21621);
  covrtIfInit(&emlrtCoverageInstance, 0, 30, 21467, 21491, -1, 21528);

  /* Initialize MCDC Information */
  covrtMcdcInit(&emlrtCoverageInstance, 0, 0, 13168, 13192, 2, 0,
                cond_starts_0_0, cond_ends_0_0, 3, postfix_exprs_0_0);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 1, 14337, 14361, 2, 2,
                cond_starts_0_1, cond_ends_0_1, 3, postfix_exprs_0_1);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 2, 14661, 14685, 2, 4,
                cond_starts_0_2, cond_ends_0_2, 3, postfix_exprs_0_2);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 3, 15363, 15374, 1, 6,
                cond_starts_0_3, cond_ends_0_3, 2, postfix_exprs_0_3);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 4, 15799, 15810, 1, 7,
                cond_starts_0_4, cond_ends_0_4, 2, postfix_exprs_0_4);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 5, 16054, 16065, 1, 8,
                cond_starts_0_5, cond_ends_0_5, 2, postfix_exprs_0_5);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 6, 18018, 18063, 2, 9,
                cond_starts_0_6, cond_ends_0_6, 3, postfix_exprs_0_6);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 7, 18321, 18366, 2, 11,
                cond_starts_0_7, cond_ends_0_7, 3, postfix_exprs_0_7);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 8, 19679, 19726, 2, 13,
                cond_starts_0_8, cond_ends_0_8, 3, postfix_exprs_0_8);
  covrtMcdcInit(&emlrtCoverageInstance, 0, 9, 19994, 20041, 2, 15,
                cond_starts_0_9, cond_ends_0_9, 3, postfix_exprs_0_9);

  /* Initialize For Information */
  covrtForInit(&emlrtCoverageInstance, 0, 0, 11228, 11251, 12984);
  covrtForInit(&emlrtCoverageInstance, 0, 1, 17190, 17220, 21006);

  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void RecDowPam4_initialize(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    RecDowPam4_once();
  }
}

/* End of code generation (RecDowPam4_initialize.c) */

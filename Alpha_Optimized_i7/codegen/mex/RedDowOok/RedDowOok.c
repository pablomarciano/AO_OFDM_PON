/*
 * RedDowOok.c
 *
 * Code generation for function 'RedDowOok'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "RedDowOok_emxutil.h"
#include "error.h"
#include "eml_int_forloop_overflow_check.h"
#include "sum.h"
#include "xor.h"
#include "assertValidSizeArg.h"
#include "any.h"
#include "hist.h"
#include "linspace.h"
#include "sort1.h"
#include "findpeaks.h"
#include "RedDowOok_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 3, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo b_emlrtRSI = { 12, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo c_emlrtRSI = { 16, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo d_emlrtRSI = { 18, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo e_emlrtRSI = { 21, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo f_emlrtRSI = { 36, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo g_emlrtRSI = { 37, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo h_emlrtRSI = { 38, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo i_emlrtRSI = { 130, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo j_emlrtRSI = { 137, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo k_emlrtRSI = { 178, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo l_emlrtRSI = { 209, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo m_emlrtRSI = { 211, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo n_emlrtRSI = { 216, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo o_emlrtRSI = { 217, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo p_emlrtRSI = { 218, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRSInfo q_emlrtRSI = { 79, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo r_emlrtRSI = { 283, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo s_emlrtRSI = { 291, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo u_emlrtRSI = { 13, "min",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo w_emlrtRSI = { 140, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo x_emlrtRSI = { 375, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo y_emlrtRSI = { 347, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo ud_emlrtRSI = { 39, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo vd_emlrtRSI = { 61, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo wd_emlrtRSI = { 108, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo xd_emlrtRSI = { 131, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 131, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRTEInfo b_emlrtRTEI = { 3, 1, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRTEInfo c_emlrtRTEI = { 209, 1, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtRTEInfo f_emlrtRTEI = { 71, 15, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo h_emlrtRTEI = { 121, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 39, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 210, 19, "TxDataB", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtDCInfo emlrtDCI = { 210, 19, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  1 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 208, 21, "TxDataMat", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtDCInfo b_emlrtDCI = { 208, 21, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  1 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 194, 23, "Ix", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 194, 23, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  1 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 187, 22, "Ix", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 187, 22, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  1 };

static emlrtBCInfo e_emlrtBCI = { 1, 100, 83, 9, "SeqFin2", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { 1, 100, 77, 9, "SeqOnes2", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { 1, 100, 71, 9, "SeqFin", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { 1, 100, 65, 9, "SeqOnes", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtECInfo emlrtECI = { 2, 34, 17, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m" };

static emlrtBCInfo i_emlrtBCI = { 1, 100, 28, 37, "Interval", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { 1, 100, 28, 15, "Interval", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 4, 9, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  1 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 4, 9, "Ix", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 34, 11, "IxAux", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { 1, 100, 104, 18, "Inter", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtDCInfo f_emlrtDCI = { 104, 18, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  1 };

static emlrtBCInfo n_emlrtBCI = { 1, 100, 118, 19, "Inter2", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 118, 19, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  1 };

static emlrtBCInfo o_emlrtBCI = { 1, 100, 145, 11, "Inter", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { 1, 100, 145, 33, "Inter", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtDCInfo h_emlrtDCI = { 145, 33, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  1 };

static emlrtDCInfo i_emlrtDCI = { 68, 62, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m",
  4 };

static emlrtBCInfo q_emlrtBCI = { 1, 100, 222, 19, "Inter2", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { 1, 100, 222, 44, "Inter2", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtDCInfo j_emlrtDCI = { 222, 44, "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  1 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 192, 9, "EoutCorr", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 190, 9, "EoutCorr", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 199, 9, "EoutCorr2", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 197, 9, "EoutCorr2", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 204, 9, "EoutCorrD", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 202, 9, "EoutCorrD", "RedDowOok",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RedDowOok.m",
  0 };

/* Function Definitions */
void RedDowOok(const emlrtStack *sp, const emxArray_real_T *Ix, const
               emxArray_real_T *TxDataMat, real_T NPPB, real_T ThisCarr, real_T
               Nb, real_T NumBitDesc, real_T SyncPeriod, real_T CurTesSiz,
               real_T EyeOpenLow, real_T EyeOpen, real_T *AberLev, real_T
               *ValsLev, real_T Inter[100], real_T SeqFin[100], real_T *LocMax,
               real_T *MaxVal, emxArray_real_T *TxData, emxArray_real_T
               *EoutCorrD, emxArray_real_T *EoutCorr2, emxArray_real_T *EoutCorr,
               real_T *BerOOK, real_T *LocMax2, real_T SeqFin2[100], real_T
               *MaxVal2, real_T Inter2[100])
{
  real_T mtmp;
  int32_T n;
  real_T anew;
  real_T apnd;
  boolean_T overflow;
  real_T ndbl;
  real_T cdiff;
  emxArray_real_T *PosIx;
  real_T absa;
  int32_T absb;
  int32_T i0;
  int32_T loop_ub;
  int32_T idx;
  int32_T i1;
  boolean_T exitg6;
  real_T Interval[100];
  boolean_T exitg5;
  real_T EyeMax[100];
  real_T EyeMaxaux[102];
  real_T unusedU0_data[204];
  int32_T unusedU0_size[2];
  real_T EyeLoc_data[204];
  int32_T EyeLoc_size[2];
  real_T Levels_data[3];
  static const real_T dv0[3] = { 0.0, -0.2, 0.35 };

  emxArray_boolean_T *r0;
  real_T varargin_1[2];
  emxArray_boolean_T *r1;
  int32_T iv0[2];
  int32_T iv1[2];
  emxArray_int32_T *r2;
  emxArray_real_T *b_varargin_1;
  boolean_T exitg4;
  boolean_T exitg3;
  emxArray_real_T *b_Ix;
  emxArray_real_T *c_Ix;
  emxArray_real_T *d_Ix;
  real_T Count;
  real_T Count2;
  boolean_T EyeAB[100];
  boolean_T EyeCD[100];
  int32_T SeqIni;
  int32_T SeqIni2;
  int32_T kk;
  real_T LevDec;
  real_T LevDec2;
  int8_T ii_data[100];
  int8_T ii_size[2];
  static const int8_T iv2[2] = { 1, 100 };

  boolean_T exitg2;
  boolean_T guard2 = false;
  real_T b_ii_data[100];
  int32_T b_ii_size[2];
  boolean_T exitg1;
  boolean_T guard1 = false;
  int32_T c_ii_size[2];
  emxArray_real_T *b_TxDataMat;
  int32_T sz[2];
  emxArray_real_T *TxDataB;
  emxArray_real_T *b_TxDataB;
  int32_T nx;
  real_T BitErr;
  real_T BitErr2;
  real_T BitErrD;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0);
  mtmp = NPPB / 2.0;
  st.site = &emlrtRSI;
  b_st.site = &q_emlrtRSI;
  if (muDoubleScalarIsNaN(mtmp) || muDoubleScalarIsNaN(NPPB)) {
    n = 1;
    anew = rtNaN;
    apnd = Ix->size[1];
    overflow = false;
  } else if ((NPPB == 0.0) || ((mtmp < Ix->size[1]) && (NPPB < 0.0)) ||
             ((Ix->size[1] < mtmp) && (NPPB > 0.0))) {
    n = 0;
    anew = mtmp;
    apnd = Ix->size[1];
    overflow = false;
  } else if (muDoubleScalarIsInf(mtmp)) {
    n = 1;
    anew = rtNaN;
    apnd = Ix->size[1];
    if (muDoubleScalarIsInf(NPPB) || (mtmp == Ix->size[1])) {
      overflow = true;
    } else {
      overflow = false;
    }

    overflow = !overflow;
  } else if (muDoubleScalarIsInf(NPPB)) {
    n = 1;
    anew = mtmp;
    apnd = Ix->size[1];
    overflow = false;
  } else {
    anew = mtmp;
    ndbl = muDoubleScalarFloor(((real_T)Ix->size[1] - mtmp) / NPPB + 0.5);
    apnd = mtmp + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (real_T)Ix->size[1];
    } else {
      cdiff = (real_T)Ix->size[1] - apnd;
    }

    absa = muDoubleScalarAbs(mtmp);
    absb = Ix->size[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, absb)) {
      ndbl++;
      apnd = Ix->size[1];
    } else if (cdiff > 0.0) {
      apnd = mtmp + (ndbl - 1.0) * NPPB;
    } else {
      ndbl++;
    }

    overflow = (2.147483647E+9 < ndbl);
    if (ndbl >= 0.0) {
      n = (int32_T)ndbl;
    } else {
      n = 0;
    }
  }

  c_st.site = &r_emlrtRSI;
  if (!overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &g_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      0);
  }

  emxInit_real_T(&c_st, &PosIx, 2, &b_emlrtRTEI, true);
  i0 = PosIx->size[0] * PosIx->size[1];
  PosIx->size[0] = 1;
  PosIx->size[1] = n;
  emxEnsureCapacity(&b_st, (emxArray__common *)PosIx, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (n > 0) {
    PosIx->data[0] = anew;
    if (n > 1) {
      PosIx->data[n - 1] = apnd;
      absb = (n - 1) / 2;
      c_st.site = &s_emlrtRSI;
      for (idx = 1; idx < absb; idx++) {
        ndbl = (real_T)idx * NPPB;
        PosIx->data[idx] = anew + ndbl;
        PosIx->data[(n - idx) - 1] = apnd - ndbl;
      }

      if (absb << 1 == n - 1) {
        PosIx->data[absb] = (anew + apnd) / 2.0;
      } else {
        ndbl = (real_T)absb * NPPB;
        PosIx->data[absb] = anew + ndbl;
        PosIx->data[absb + 1] = apnd - ndbl;
      }
    }
  }

  /* Possition of the central samples - but the number of samples per symbol is even ???? */
  absb = Ix->size[1];
  loop_ub = PosIx->size[0] * PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    mtmp = PosIx->data[i0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &e_emlrtDCI, sp);
    }

    i1 = (int32_T)mtmp;
    if (!((i1 >= 1) && (i1 <= absb))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, absb, &k_emlrtBCI, sp);
    }
  }

  /* From the main received signal just a few samples are taken for further evaluation */
  /* The number of boxes to be filled up on the histogram process */
  /* At this process each eye will be evaluated separetelly. It is */
  /* important to remember that the PAM4 has 4 levels, which means */
  /* three level of decissions that are exaclty the center of the */
  /* eye diagram. */
  st.site = &b_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  if ((Ix->size[1] == 1) || (Ix->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &i_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (Ix->size[1] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &h_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &w_emlrtRSI;
  absb = 1;
  n = Ix->size[1];
  mtmp = Ix->data[0];
  if (Ix->size[1] > 1) {
    if (muDoubleScalarIsNaN(Ix->data[0])) {
      e_st.site = &y_emlrtRSI;
      overflow = (Ix->size[1] > 2147483646);
      if (overflow) {
        f_st.site = &t_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      idx = 2;
      exitg6 = false;
      while ((!exitg6) && (idx <= n)) {
        absb = idx;
        if (!muDoubleScalarIsNaN(Ix->data[idx - 1])) {
          mtmp = Ix->data[idx - 1];
          exitg6 = true;
        } else {
          idx++;
        }
      }
    }

    if (absb < Ix->size[1]) {
      e_st.site = &x_emlrtRSI;
      overflow = ((!(absb + 1 > Ix->size[1])) && (Ix->size[1] > 2147483646));
      if (overflow) {
        f_st.site = &t_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (absb + 1 <= n) {
        if (Ix->data[absb] < mtmp) {
          mtmp = Ix->data[absb];
        }

        absb++;
      }
    }
  }

  st.site = &b_emlrtRSI;
  b_st.site = &ab_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &w_emlrtRSI;
  absb = 1;
  n = Ix->size[1];
  ndbl = Ix->data[0];
  if (Ix->size[1] > 1) {
    if (muDoubleScalarIsNaN(Ix->data[0])) {
      e_st.site = &y_emlrtRSI;
      overflow = (Ix->size[1] > 2147483646);
      if (overflow) {
        f_st.site = &t_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      idx = 2;
      exitg5 = false;
      while ((!exitg5) && (idx <= n)) {
        absb = idx;
        if (!muDoubleScalarIsNaN(Ix->data[idx - 1])) {
          ndbl = Ix->data[idx - 1];
          exitg5 = true;
        } else {
          idx++;
        }
      }
    }

    if (absb < Ix->size[1]) {
      e_st.site = &x_emlrtRSI;
      overflow = ((!(absb + 1 > Ix->size[1])) && (Ix->size[1] > 2147483646));
      if (overflow) {
        f_st.site = &t_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (absb + 1 <= n) {
        if (Ix->data[absb] > ndbl) {
          ndbl = Ix->data[absb];
        }

        absb++;
      }
    }
  }

  linspace(0.5 * mtmp, 0.5 * ndbl, Interval);

  /* Building the histogram boxes */
  /* Therefore, the MATLAB hist function returns the number of */
  /* occurrence of each interval. */
  st.site = &c_emlrtRSI;
  hist(&st, Ix, Interval, EyeMax);
  EyeMaxaux[0] = 0.0;
  memcpy(&EyeMaxaux[1], &EyeMax[0], 100U * sizeof(real_T));
  EyeMaxaux[101] = 0.0;

  /* Zeros are added at the EyeMax to auxiliate the finding peaks process */
  st.site = &d_emlrtRSI;
  findpeaks(&st, EyeMaxaux, unusedU0_data, unusedU0_size, EyeLoc_data,
            EyeLoc_size);

  /* The peaks on the Eye profile will be the levels at the Eyes limit */
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, EyeLoc_size[1] < 2)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);

    /* If it was not able to find the eye profile. */
    st.site = &e_emlrtRSI;
    b_findpeaks(&st, EyeMaxaux, unusedU0_data, unusedU0_size, EyeLoc_data,
                EyeLoc_size);

    /* The peaks on the Eye profile will be the levels at the Eyes limit */
  }

  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 1, EyeLoc_size[1] < 2)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2);

    /* If it was not able to find the eye profile. */
    /* EyeLoc = [2 3]; */
    for (i0 = 0; i0 < 3; i0++) {
      Levels_data[i0] = dv0[i0];
    }
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 3);

    /* Whereas, if there is an profile the decission can be found */
    i0 = (int32_T)(EyeLoc_data[0] - 1.0);
    if (!((i0 >= 1) && (i0 <= 100))) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, 100, &j_emlrtBCI, sp);
    }

    i0 = (int32_T)(EyeLoc_data[1] - 1.0);
    if (!((i0 >= 1) && (i0 <= 100))) {
      emlrtDynamicBoundsCheckR2012b(i0, 1, 100, &i_emlrtBCI, sp);
    }

    varargin_1[0] = Interval[(int32_T)(EyeLoc_data[0] - 1.0) - 1];
    varargin_1[1] = Interval[(int32_T)(EyeLoc_data[1] - 1.0) - 1];
    d_sort(varargin_1);
    for (i0 = 0; i0 < 2; i0++) {
      Levels_data[i0] = varargin_1[i0];
    }

    /*                  LevelDec1 = Levels(1) + (Levels(2)-Levels(1))/2 ; */
    /*                  LevelDec2 = Levels(2) + (Levels(3)-Levels(2))/2 ; */
    /*                  LevelDec3 = Levels(3) + (Levels(4)-Levels(3))/2 ; */
  }

  emxInit_boolean_T(sp, &r0, 2, &emlrtRTEI, true);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 4);
  i0 = r0->size[0] * r0->size[1];
  r0->size[0] = 1;
  r0->size[1] = PosIx->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  loop_ub = PosIx->size[0] * PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    r0->data[i0] = (Ix->data[(int32_T)PosIx->data[i0] - 1] <= Levels_data[1]);
  }

  emxInit_boolean_T(sp, &r1, 2, &emlrtRTEI, true);
  i0 = r1->size[0] * r1->size[1];
  r1->size[0] = 1;
  r1->size[1] = PosIx->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  loop_ub = PosIx->size[0] * PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    r1->data[i0] = (Ix->data[(int32_T)PosIx->data[i0] - 1] >= Levels_data[0]);
  }

  for (i0 = 0; i0 < 2; i0++) {
    iv0[i0] = r0->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    iv1[i0] = r1->size[i0];
  }

  emxInit_int32_T(sp, &r2, 2, &emlrtRTEI, true);
  if ((iv0[0] != iv1[0]) || (iv0[1] != iv1[1])) {
    emlrtSizeEqCheckNDR2012b(&iv0[0], &iv1[0], &emlrtECI, sp);
  }

  n = r0->size[1] - 1;
  absb = 0;
  for (idx = 0; idx <= n; idx++) {
    if (r0->data[idx] && r1->data[idx]) {
      absb++;
    }
  }

  i0 = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = absb;
  emxEnsureCapacity(sp, (emxArray__common *)r2, i0, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  absb = 0;
  for (idx = 0; idx <= n; idx++) {
    if (r0->data[idx] && r1->data[idx]) {
      r2->data[absb] = idx + 1;
      absb++;
    }
  }

  absb = PosIx->size[1];
  loop_ub = r2->size[0] * r2->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    i1 = r2->data[i0];
    if (!((i1 >= 1) && (i1 <= absb))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, absb, &l_emlrtBCI, sp);
    }
  }

  emxInit_real_T(sp, &b_varargin_1, 2, &emlrtRTEI, true);
  linspace(Levels_data[0], Levels_data[1], Inter);

  /* Building the histogram boxes */
  st.site = &f_emlrtRSI;
  i0 = b_varargin_1->size[0] * b_varargin_1->size[1];
  b_varargin_1->size[0] = 1;
  b_varargin_1->size[1] = PosIx->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_varargin_1, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = PosIx->size[0] * PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_varargin_1->data[i0] = Ix->data[(int32_T)PosIx->data[i0] - 1];
  }

  b_st.site = &u_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  if ((PosIx->size[1] == 1) || (PosIx->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &i_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (PosIx->size[1] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &h_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &w_emlrtRSI;
  absb = 1;
  n = PosIx->size[1];
  mtmp = Ix->data[(int32_T)PosIx->data[0] - 1];
  if (PosIx->size[1] > 1) {
    if (muDoubleScalarIsNaN(mtmp)) {
      e_st.site = &y_emlrtRSI;
      overflow = ((!(2 > PosIx->size[1])) && (PosIx->size[1] > 2147483646));
      if (overflow) {
        f_st.site = &t_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      idx = 2;
      exitg4 = false;
      while ((!exitg4) && (idx <= n)) {
        absb = idx;
        if (!muDoubleScalarIsNaN(b_varargin_1->data[idx - 1])) {
          mtmp = b_varargin_1->data[idx - 1];
          exitg4 = true;
        } else {
          idx++;
        }
      }
    }

    if (absb < PosIx->size[1]) {
      e_st.site = &x_emlrtRSI;
      overflow = ((!(absb + 1 > PosIx->size[1])) && (PosIx->size[1] > 2147483646));
      if (overflow) {
        f_st.site = &t_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (absb + 1 <= n) {
        if (b_varargin_1->data[absb] < mtmp) {
          mtmp = b_varargin_1->data[absb];
        }

        absb++;
      }
    }
  }

  st.site = &f_emlrtRSI;
  i0 = b_varargin_1->size[0] * b_varargin_1->size[1];
  b_varargin_1->size[0] = 1;
  b_varargin_1->size[1] = PosIx->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_varargin_1, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = PosIx->size[0] * PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_varargin_1->data[i0] = Ix->data[(int32_T)PosIx->data[i0] - 1];
  }

  b_st.site = &ab_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  if ((PosIx->size[1] == 1) || (PosIx->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &i_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (PosIx->size[1] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &h_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &w_emlrtRSI;
  absb = 1;
  n = PosIx->size[1];
  ndbl = Ix->data[(int32_T)PosIx->data[0] - 1];
  if (PosIx->size[1] > 1) {
    if (muDoubleScalarIsNaN(ndbl)) {
      e_st.site = &y_emlrtRSI;
      overflow = ((!(2 > PosIx->size[1])) && (PosIx->size[1] > 2147483646));
      if (overflow) {
        f_st.site = &t_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      idx = 2;
      exitg3 = false;
      while ((!exitg3) && (idx <= n)) {
        absb = idx;
        if (!muDoubleScalarIsNaN(b_varargin_1->data[idx - 1])) {
          ndbl = b_varargin_1->data[idx - 1];
          exitg3 = true;
        } else {
          idx++;
        }
      }
    }

    if (absb < PosIx->size[1]) {
      e_st.site = &x_emlrtRSI;
      overflow = ((!(absb + 1 > PosIx->size[1])) && (PosIx->size[1] > 2147483646));
      if (overflow) {
        f_st.site = &t_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (absb + 1 <= n) {
        if (b_varargin_1->data[absb] > ndbl) {
          ndbl = b_varargin_1->data[absb];
        }

        absb++;
      }
    }
  }

  emxFree_real_T(&b_varargin_1);
  linspace(mtmp, ndbl, Inter2);

  /* Building the histogram boxes */
  n = r0->size[1] - 1;
  absb = 0;
  for (idx = 0; idx <= n; idx++) {
    if (r0->data[idx] && r1->data[idx]) {
      absb++;
    }
  }

  i0 = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = absb;
  emxEnsureCapacity(sp, (emxArray__common *)r2, i0, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  absb = 0;
  for (idx = 0; idx <= n; idx++) {
    if (r0->data[idx] && r1->data[idx]) {
      r2->data[absb] = idx + 1;
      absb++;
    }
  }

  emxFree_boolean_T(&r1);
  emxInit_real_T(sp, &b_Ix, 2, &emlrtRTEI, true);
  emxInit_real_T1(sp, &c_Ix, 1, &emlrtRTEI, true);
  i0 = b_Ix->size[0] * b_Ix->size[1];
  b_Ix->size[0] = 1;
  b_Ix->size[1] = r2->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_Ix, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i0 = c_Ix->size[0];
  c_Ix->size[0] = PosIx->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_Ix, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    c_Ix->data[i0] = Ix->data[(int32_T)PosIx->data[i0] - 1];
  }

  loop_ub = r2->size[0] * r2->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_Ix->data[i0] = c_Ix->data[r2->data[i0] - 1];
  }

  emxFree_real_T(&c_Ix);
  emxFree_int32_T(&r2);
  emxInit_real_T(sp, &d_Ix, 2, &emlrtRTEI, true);
  st.site = &g_emlrtRSI;
  hist(&st, b_Ix, Inter, Interval);

  /* filling up the boxes with samples that fit on them. */
  i0 = d_Ix->size[0] * d_Ix->size[1];
  d_Ix->size[0] = 1;
  d_Ix->size[1] = PosIx->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_Ix, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = PosIx->size[0] * PosIx->size[1];
  emxFree_real_T(&b_Ix);
  for (i0 = 0; i0 < loop_ub; i0++) {
    d_Ix->data[i0] = Ix->data[(int32_T)PosIx->data[i0] - 1];
  }

  st.site = &h_emlrtRSI;
  hist(&st, d_Ix, Inter2, EyeMax);

  /* filling up the boxes with samples that fit on them. */
  /* What we are looking for here are not where exist the */
  /* occurrences of values. The eye is where there is not samples, */
  /* this means, the decission level is a reagion between actual */
  /* levels thus this reagion does not contain any signal. */
  emxFree_real_T(&d_Ix);

  /* Changing zeros to one - Zeros compose the eye region */
  /* Changing zeros to one - Zeros compose the eye region */
  /* Starting variables that will be used to identify the eye */
  /* diagram. */
  Count = 1.0;
  Count2 = 1.0;
  for (i0 = 0; i0 < 100; i0++) {
    EyeAB[i0] = !(Interval[i0] != 0.0);
    EyeCD[i0] = !(EyeMax[i0] != 0.0);
    Interval[i0] = 0.0;
    EyeMax[i0] = 0.0;
  }

  SeqIni = 1;
  SeqIni2 = 1;
  for (i0 = 0; i0 < 100; i0++) {
    SeqFin[i0] = 0.0;
  }

  for (i0 = 0; i0 < 100; i0++) {
    SeqFin2[i0] = 0.0;
  }

  /* The for loop will take account of every box with ones. It is */
  /* important to take note that the not operator was used in this */
  /* vector, therefore ones means zeros (the eye diagram - */
  /* possibly) and zeros means values abouve zeroa (not the eye). */
  kk = 0;
  while (kk < 100) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);

    /* For every box */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 2, EyeAB[kk])) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 5);

      /* if it contains "1" */
      if (!((SeqIni >= 1) && (SeqIni <= 100))) {
        emlrtDynamicBoundsCheckR2012b(SeqIni, 1, 100, &h_emlrtBCI, sp);
      }

      Interval[SeqIni - 1] = Count;

      /* count this element as part of a consecutive sequency */
      Count++;

      /* adds one to the counter of consecutive elements "1" */
      if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 3, 1 + kk == 100)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 6);

        /* if the current box is the last box we got to an end */
        SeqFin[SeqIni - 1] = 100.0;

        /* The final sequency element is equal to its possition (kk) */
      }
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 7);

      /* else if the current box contains "0" */
      if (!((SeqIni >= 1) && (SeqIni <= 100))) {
        emlrtDynamicBoundsCheckR2012b(SeqIni, 1, 100, &g_emlrtBCI, sp);
      }

      SeqFin[SeqIni - 1] = (1.0 + (real_T)kk) - 1.0;

      /* the previous element was the last element of a consecutive sequency of ones */
      SeqIni++;

      /* adds one to the counter of consecutive number (take in account how many sequencies there are) */
      Count = 1.0;

      /* reset the counter of consecutive elements to mark the start of a new consecutive sequence */
    }

    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 4, EyeCD[kk])) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 8);

      /* if it contains "1" */
      if (!((SeqIni2 >= 1) && (SeqIni2 <= 100))) {
        emlrtDynamicBoundsCheckR2012b(SeqIni2, 1, 100, &f_emlrtBCI, sp);
      }

      EyeMax[SeqIni2 - 1] = Count2;

      /* count this element as part of a consecutive sequency */
      Count2++;

      /* adds one to the counter of consecutive elements "1" */
      if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 5, 1 + kk == 100)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 9);

        /* if the current box is the last box we got to an end */
        SeqFin2[SeqIni2 - 1] = 100.0;

        /* The final sequency element is equal to its possition (kk) */
      }
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 10);

      /* else if the current box contains "0" */
      if (!((SeqIni2 >= 1) && (SeqIni2 <= 100))) {
        emlrtDynamicBoundsCheckR2012b(SeqIni2, 1, 100, &e_emlrtBCI, sp);
      }

      SeqFin2[SeqIni2 - 1] = (1.0 + (real_T)kk) - 1.0;

      /* the previous element was the last element of a consecutive sequency of ones */
      SeqIni2++;

      /* adds one to the counter of consecutive number (take in account how many sequencies there are) */
      Count2 = 1.0;

      /* reset the counter of consecutive elements to mark the start of a new consecutive sequence */
    }

    kk++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 11);

  /* If the eye is open, which means there is a clear difference */
  /* between adjacent levels, the eye diagram will be the longest */
  /* sequence of ones. */
  mtmp = Interval[0];
  absb = 0;
  for (idx = 1; idx + 1 < 101; idx++) {
    if (Interval[idx] > mtmp) {
      mtmp = Interval[idx];
      absb = idx;
    }
  }

  *MaxVal = mtmp;
  *LocMax = absb + 1;
  if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 0, absb + 1 < 2) ||
      covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 1, mtmp < 2.0)) {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 0, true);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 6, true);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 12);

    /* if any sequency was found or there is just one sequency it is a error thus */
    LevDec = 0.0;

    /* the decission level will be by default 0.67. Also, the other variables will */
    *LocMax = 1.0;

    /* will be set with values to not cause errors in the future */
    SeqFin[0] = 2.0;
    *MaxVal = 0.0;
    Inter[0] = 0.0;
  } else {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 0, false);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 6, false);

    /* if a sequency was found the middle of the eye will be the middle of the sequency */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 7, (real_T)(int8_T)
                   SeqFin[absb] - mtmp / 2.0 < 1.0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 13);

      /* if for some reason the final element of the sequency minus the half of its */
      LevDec = 0.0;

      /* length results in a negative value, something went very wrong, and by */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 14);

      /* default it will be set to 0.7 */
      mtmp = muDoubleScalarRound((real_T)(int8_T)SeqFin[absb] - mtmp / 2.0);
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &f_emlrtDCI, sp);
      }

      i0 = (int32_T)mtmp;
      if (!((i0 >= 1) && (i0 <= 100))) {
        emlrtDynamicBoundsCheckR2012b(i0, 1, 100, &m_emlrtBCI, sp);
      }

      LevDec = Inter[i0 - 1];

      /* Otherwise, the decission level is the middle of the sequency */
    }
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 15);
  mtmp = EyeMax[0];
  absb = 0;
  for (idx = 1; idx + 1 < 101; idx++) {
    if (EyeMax[idx] > mtmp) {
      mtmp = EyeMax[idx];
      absb = idx;
    }
  }

  *MaxVal2 = mtmp;
  *LocMax2 = absb + 1;
  if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 2, absb + 1 < 2) ||
      covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 3, mtmp < 2.0)) {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 1, true);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 8, true);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 16);

    /* if any sequency was found or there is just one sequency it is a error thus */
    LevDec2 = 0.0;

    /* the decission level will be by default 0.67. Also, the other variables will */
    *LocMax2 = 1.0;

    /* will be set with values to not cause errors in the future */
    SeqFin2[0] = 2.0;
    *MaxVal2 = 0.0;
    Inter2[0] = 0.0;
  } else {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 1, false);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 8, false);

    /* if a sequency was found the middle of the eye will be the middle of the sequency */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 9, (real_T)(int8_T)
                   SeqFin2[absb] - mtmp / 2.0 < 1.0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 17);

      /* if for some reason the final element of the sequency minus the half of its */
      LevDec2 = 0.0;

      /* length results in a negative value, something went very wrong, and by */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 18);

      /* default it will be set to 0.7 */
      mtmp = muDoubleScalarRound((real_T)(int8_T)SeqFin2[absb] - mtmp / 2.0);
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &g_emlrtDCI, sp);
      }

      i0 = (int32_T)mtmp;
      if (!((i0 >= 1) && (i0 <= 100))) {
        emlrtDynamicBoundsCheckR2012b(i0, 1, 100, &n_emlrtBCI, sp);
      }

      LevDec2 = Inter2[i0 - 1];

      /* Otherwise, the decission level is the middle of the sequency */
    }
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 19);

  /* another way to measure the eye opening is the get all the */
  /* boxes and find all peaks on it, that will be a plato created */
  /* by the sequences of ones (which was zeros). From thos peaks, */
  /* the eye diagram will be the longer of them hence it will take */
  /* the most part of the vector that store the findpeaks result. */
  /* Thus, the middle of the eye will be basically the middle of */
  /* the peaks vector. */
  idx = 0;
  for (i0 = 0; i0 < 2; i0++) {
    ii_size[i0] = iv2[i0];
  }

  absb = 1;
  exitg2 = false;
  while ((!exitg2) && (absb < 101)) {
    guard2 = false;
    if (EyeAB[absb - 1]) {
      idx++;
      ii_data[idx - 1] = (int8_T)absb;
      if (idx >= 100) {
        exitg2 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2) {
      absb++;
    }
  }

  if (1 > idx) {
    i0 = 0;
  } else {
    i0 = idx;
  }

  b_ii_size[0] = 1;
  b_ii_size[1] = i0;
  loop_ub = ii_size[0] * i0;
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_ii_data[i0] = ii_data[i0];
  }

  st.site = &i_emlrtRSI;
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 10, covrtLogMcdc
                 (&emlrtCoverageInstance, 0U, 0U, 2, !covrtLogCond
                  (&emlrtCoverageInstance, 0U, 0U, 4, any(&st, b_ii_data,
          b_ii_size))))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 20);

    /* if for some reason there are no peaks, something went wrong. */
    /* mean(Levels(3:4));                       %by default the decission level will be set to 0.65 */
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 21);
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 22);
  idx = 0;
  for (i0 = 0; i0 < 2; i0++) {
    ii_size[i0] = iv2[i0];
  }

  absb = 1;
  exitg1 = false;
  while ((!exitg1) && (absb < 101)) {
    guard1 = false;
    if (EyeCD[absb - 1]) {
      idx++;
      ii_data[idx - 1] = (int8_T)absb;
      if (idx >= 100) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      absb++;
    }
  }

  if (1 > idx) {
    i0 = 0;
  } else {
    i0 = idx;
  }

  c_ii_size[0] = 1;
  c_ii_size[1] = i0;
  loop_ub = ii_size[0] * i0;
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_ii_data[i0] = ii_data[i0];
  }

  st.site = &j_emlrtRSI;
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 11, covrtLogMcdc
                 (&emlrtCoverageInstance, 0U, 0U, 3, !covrtLogCond
                  (&emlrtCoverageInstance, 0U, 0U, 5, any(&st, b_ii_data,
          c_ii_size))))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 23);

    /* if for some reason there are no peaks, something went wrong. */
    /* mean(Levels(3:4));                       %by default the decission level will be set to 0.65 */
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 24);
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 25);

  /* ########################################################################## */
  i0 = (int8_T)SeqFin[(int32_T)*LocMax - 1];
  if (!((i0 >= 1) && (i0 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i0, 1, 100, &o_emlrtBCI, sp);
  }

  mtmp = muDoubleScalarRound((real_T)(int8_T)SeqFin[(int32_T)*LocMax - 1] -
    *MaxVal);
  if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
    emlrtIntegerCheckR2012b(mtmp, &h_emlrtDCI, sp);
  }

  i1 = (int32_T)mtmp;
  if (!((i1 >= 1) && (i1 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i1, 1, 100, &p_emlrtBCI, sp);
  }

  *AberLev = Inter[i0 - 1] - Inter[i1 - 1];
  *ValsLev = LevDec;

  /* %         Finding Decission Levels */
  /* The process for decoding the income signal will be based on */
  /* eletronic comparators. Inasmuch as the right decission level */
  /* must be acquired for accurately decide, within a symbol */
  /* periode, what that current leavel means (ones or zeros). */
  /*  */
  /* The process hereafter of chosing the  decission levels is not */
  /* deterministic rather it is a statistic process. The main idea */
  /* is to take the decission level from the histogram generated */
  /* from the income signal stream. */
  /*  */
  /* This process is realized inside the function Olho_mex. */
  /*  */
  /* Basicaly the decission level will be the minimal value of the */
  /* currente eye under evaluation plus the half of the its eye */
  /* opening.The following ilustration better describe this process */
  /*  */
  /* Eye Limits:   + (1/2 * Eye Opening:)  =    Comparisson Limit: */
  /*  */
  /* UperLevel  ______     ______________     _____ */
  /*                  \   /      |       \   / */
  /*                   \ /       |        \ / */
  /*                    \ Half Eye Opening /     Decission Level */
  /*                   / \       |        / \ */
  /* LowerLevel ______/   \______|_______/   \_____ */
  /*  */
  /*  */
  /* %      Actualy Receiving Data */
  /* Once the signal was processed the next step is through a */
  /* comparator decide the actual information received. */
  /* ThisDataPos = 1:NPPB:length(Ix); */
  mtmp = NPPB / 2.0;
  st.site = &k_emlrtRSI;
  b_st.site = &q_emlrtRSI;
  if (muDoubleScalarIsNaN(mtmp) || muDoubleScalarIsNaN(NPPB)) {
    n = 1;
    anew = rtNaN;
    apnd = Ix->size[1];
    overflow = false;
  } else if ((NPPB == 0.0) || ((mtmp < Ix->size[1]) && (NPPB < 0.0)) ||
             ((Ix->size[1] < mtmp) && (NPPB > 0.0))) {
    n = 0;
    anew = mtmp;
    apnd = Ix->size[1];
    overflow = false;
  } else if (muDoubleScalarIsInf(mtmp)) {
    n = 1;
    anew = rtNaN;
    apnd = Ix->size[1];
    if (muDoubleScalarIsInf(NPPB) || (mtmp == Ix->size[1])) {
      overflow = true;
    } else {
      overflow = false;
    }

    overflow = !overflow;
  } else if (muDoubleScalarIsInf(NPPB)) {
    n = 1;
    anew = mtmp;
    apnd = Ix->size[1];
    overflow = false;
  } else {
    anew = mtmp;
    ndbl = muDoubleScalarFloor(((real_T)Ix->size[1] - mtmp) / NPPB + 0.5);
    apnd = mtmp + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (real_T)Ix->size[1];
    } else {
      cdiff = (real_T)Ix->size[1] - apnd;
    }

    absa = muDoubleScalarAbs(mtmp);
    absb = Ix->size[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, absb)) {
      ndbl++;
      apnd = Ix->size[1];
    } else if (cdiff > 0.0) {
      apnd = mtmp + (ndbl - 1.0) * NPPB;
    } else {
      ndbl++;
    }

    overflow = (2.147483647E+9 < ndbl);
    if (ndbl >= 0.0) {
      n = (int32_T)ndbl;
    } else {
      n = 0;
    }
  }

  c_st.site = &r_emlrtRSI;
  if (!overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &g_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      0);
  }

  i0 = PosIx->size[0] * PosIx->size[1];
  PosIx->size[0] = 1;
  PosIx->size[1] = n;
  emxEnsureCapacity(&b_st, (emxArray__common *)PosIx, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (n > 0) {
    PosIx->data[0] = anew;
    if (n > 1) {
      PosIx->data[n - 1] = apnd;
      absb = (n - 1) / 2;
      c_st.site = &s_emlrtRSI;
      for (idx = 1; idx < absb; idx++) {
        ndbl = (real_T)idx * NPPB;
        PosIx->data[idx] = anew + ndbl;
        PosIx->data[(n - idx) - 1] = apnd - ndbl;
      }

      if (absb << 1 == n - 1) {
        PosIx->data[absb] = (anew + apnd) / 2.0;
      } else {
        ndbl = (real_T)absb * NPPB;
        PosIx->data[absb] = anew + ndbl;
        PosIx->data[absb + 1] = apnd - ndbl;
      }
    }
  }

  i0 = EoutCorr->size[0] * EoutCorr->size[1];
  EoutCorr->size[0] = 1;
  EoutCorr->size[1] = PosIx->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)EoutCorr, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    EoutCorr->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  i0 = EoutCorrD->size[0] * EoutCorrD->size[1];
  EoutCorrD->size[0] = 1;
  EoutCorrD->size[1] = PosIx->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)EoutCorrD, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    EoutCorrD->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  i0 = EoutCorr2->size[0] * EoutCorr2->size[1];
  EoutCorr2->size[0] = 1;
  EoutCorr2->size[1] = PosIx->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)EoutCorr2, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    EoutCorr2->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  kk = 0;
  while (kk <= PosIx->size[1] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 26);

    /* length(Ix(ThisDataSize))                                       %The comparison process will be made for each symbol period */
    /* An small portion of the income signal is take for */
    /* evaluation by measuring the avarage value of the samples */
    /* taken */
    /*                  CalcMean = mean((Ix((kk-1)+SymLoc(1)))); */
    i0 = Ix->size[1];
    mtmp = ((1.0 + (real_T)kk) - 1.0) * NPPB + NPPB / 2.0;
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &d_emlrtDCI, sp);
    }

    i1 = (int32_T)mtmp;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &d_emlrtBCI, sp);
    }

    /* Verifying the interval for each symbol received. */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 12, Ix->data[(int32_T)(((1.0
            + (real_T)kk) - 1.0) * NPPB + NPPB / 2.0) - 1] >= LevDec)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 27);

      /* EyeOpenLow+EyeOpen/2                        %If it is the uper level the incoming data */
      i0 = EoutCorr->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &t_emlrtBCI, sp);
      }

      EoutCorr->data[kk] = 1.0;

      /* is 1 */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 28);

      /* If it is the lowest level the incoming data */
      i0 = EoutCorr->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &s_emlrtBCI, sp);
      }

      EoutCorr->data[kk] = 0.0;

      /* is 0 */
    }

    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 29);
    ndbl = NPPB / 2.0;
    i0 = Ix->size[1];
    mtmp = ((1.0 + (real_T)kk) - 1.0) * NPPB + NPPB / 2.0;
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &c_emlrtDCI, sp);
    }

    i1 = (int32_T)mtmp;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &c_emlrtBCI, sp);
    }

    /* Verifying the interval for each symbol received. */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 13, Ix->data[(int32_T)(((1.0
            + (real_T)kk) - 1.0) * NPPB + ndbl) - 1] >= LevDec2)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 30);

      /* EyeOpenLow+EyeOpen/2                        %If it is the uper level the incoming data */
      i0 = EoutCorr2->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &v_emlrtBCI, sp);
      }

      EoutCorr2->data[kk] = 1.0;

      /* is 1 */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 31);

      /* If it is the lowest level the incoming data */
      i0 = EoutCorr2->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &u_emlrtBCI, sp);
      }

      EoutCorr2->data[kk] = 0.0;

      /* is 0 */
    }

    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 14, Ix->data[(int32_T)(((1.0
            + (real_T)kk) - 1.0) * NPPB + ndbl) - 1] >= EyeOpenLow + EyeOpen /
                   2.0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 32);

      /* If it is the uper level the incoming data */
      i0 = EoutCorrD->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &x_emlrtBCI, sp);
      }

      EoutCorrD->data[kk] = 1.0;

      /* is 1 */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 33);

      /* If it is the lowest level the incoming data */
      i0 = EoutCorrD->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &w_emlrtBCI, sp);
      }

      EoutCorrD->data[kk] = 0.0;

      /* is 0 */
    }

    kk++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 34);
  loop_ub = TxDataMat->size[1];
  i0 = TxDataMat->size[0];
  if (ThisCarr != (int32_T)muDoubleScalarFloor(ThisCarr)) {
    emlrtIntegerCheckR2012b(ThisCarr, &b_emlrtDCI, sp);
  }

  absb = (int32_T)ThisCarr;
  if (!((absb >= 1) && (absb <= i0))) {
    emlrtDynamicBoundsCheckR2012b(absb, 1, i0, &b_emlrtBCI, sp);
  }

  i0 = PosIx->size[0] * PosIx->size[1];
  PosIx->size[0] = 1;
  PosIx->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)PosIx, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    PosIx->data[PosIx->size[0] * i0] = TxDataMat->data[(absb + TxDataMat->size[0]
      * i0) - 1];
  }

  emxInit_real_T(sp, &b_TxDataMat, 2, &emlrtRTEI, true);
  st.site = &l_emlrtRSI;
  ndbl = Nb - NumBitDesc;
  i0 = TxDataMat->size[1];
  b_st.site = &ud_emlrtRSI;
  c_st.site = &xd_emlrtRSI;
  assertValidSizeArg(&c_st, ndbl);
  c_st.site = &xd_emlrtRSI;
  assertValidSizeArg(&c_st, CurTesSiz);
  sz[0] = (int32_T)ndbl;
  sz[1] = (int32_T)CurTesSiz;
  loop_ub = TxDataMat->size[1];
  i1 = b_TxDataMat->size[0] * b_TxDataMat->size[1];
  b_TxDataMat->size[0] = 1;
  b_TxDataMat->size[1] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)b_TxDataMat, i1, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_TxDataMat->data[b_TxDataMat->size[0] * i1] = TxDataMat->data[((int32_T)
      ThisCarr + TxDataMat->size[0] * i1) - 1];
  }

  for (i1 = 0; i1 < 2; i1++) {
    varargin_1[i1] = b_TxDataMat->size[i1];
  }

  emxFree_real_T(&b_TxDataMat);
  absb = 1;
  if ((uint32_T)varargin_1[1] > 1U) {
    absb = (int32_T)(uint32_T)varargin_1[1];
  }

  if (i0 > absb) {
    absb = TxDataMat->size[1];
  }

  if ((int32_T)ndbl > absb) {
    b_st.site = &vd_emlrtRSI;
    c_error(&b_st);
  }

  if ((int32_T)CurTesSiz > absb) {
    b_st.site = &vd_emlrtRSI;
    c_error(&b_st);
  }

  for (i1 = 0; i1 < 2; i1++) {
    absb = sz[i1];
    if (!(absb >= 0)) {
      emlrtNonNegativeCheckR2012b(absb, &i_emlrtDCI, &st);
    }
  }

  emxInit_real_T(&st, &TxDataB, 2, &c_emlrtRTEI, true);
  i1 = TxDataB->size[0] * TxDataB->size[1];
  TxDataB->size[0] = (int32_T)ndbl;
  TxDataB->size[1] = (int32_T)CurTesSiz;
  emxEnsureCapacity(&st, (emxArray__common *)TxDataB, i1, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (i0 == TxDataB->size[0] * TxDataB->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &f_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &wd_emlrtRSI;
  i1 = TxDataMat->size[1];
  if (1 > i1) {
    overflow = false;
  } else {
    i1 = TxDataMat->size[1];
    overflow = (i1 > 2147483646);
  }

  if (overflow) {
    c_st.site = &t_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= i0; idx++) {
    TxDataB->data[idx] = PosIx->data[idx];
  }

  emxFree_real_T(&PosIx);
  mtmp = (real_T)TxDataB->size[0] - SyncPeriod;
  if (1.0 + SyncPeriod > mtmp) {
    i1 = 1;
    i0 = 1;
  } else {
    i0 = TxDataB->size[0];
    ndbl = 1.0 + SyncPeriod;
    if (ndbl != (int32_T)muDoubleScalarFloor(ndbl)) {
      emlrtIntegerCheckR2012b(ndbl, &emlrtDCI, sp);
    }

    i1 = (int32_T)ndbl;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &emlrtBCI, sp);
    }

    i0 = TxDataB->size[0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &emlrtDCI, sp);
    }

    absb = (int32_T)mtmp;
    if (!((absb >= 1) && (absb <= i0))) {
      emlrtDynamicBoundsCheckR2012b(absb, 1, i0, &emlrtBCI, sp);
    }

    i0 = absb + 1;
  }

  emxInit_real_T(sp, &b_TxDataB, 2, &emlrtRTEI, true);
  st.site = &m_emlrtRSI;
  absb = TxDataB->size[1];
  ndbl = (real_T)(i0 - i1) * (real_T)absb;
  absb = TxDataB->size[1];
  nx = (i0 - i1) * absb;
  b_st.site = &ud_emlrtRSI;
  c_st.site = &xd_emlrtRSI;
  assertValidSizeArg(&c_st, ndbl);
  loop_ub = TxDataB->size[1];
  absb = b_TxDataB->size[0] * b_TxDataB->size[1];
  b_TxDataB->size[0] = i0 - i1;
  b_TxDataB->size[1] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)b_TxDataB, absb, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (absb = 0; absb < loop_ub; absb++) {
    idx = i0 - i1;
    for (n = 0; n < idx; n++) {
      b_TxDataB->data[n + b_TxDataB->size[0] * absb] = TxDataB->data[((i1 + n) +
        TxDataB->size[0] * absb) - 1];
    }
  }

  for (absb = 0; absb < 2; absb++) {
    varargin_1[absb] = b_TxDataB->size[absb];
  }

  emxFree_real_T(&b_TxDataB);
  absb = (int32_T)(uint32_T)varargin_1[0];
  if ((int32_T)(uint32_T)varargin_1[1] > (int32_T)(uint32_T)varargin_1[0]) {
    absb = (int32_T)(uint32_T)varargin_1[1];
  }

  absb = muIntScalarMax_sint32(nx, absb);
  if (1 > absb) {
    b_st.site = &vd_emlrtRSI;
    c_error(&b_st);
  }

  if ((int32_T)ndbl > absb) {
    b_st.site = &vd_emlrtRSI;
    c_error(&b_st);
  }

  absb = TxData->size[0] * TxData->size[1];
  TxData->size[0] = 1;
  TxData->size[1] = (int32_T)ndbl;
  emxEnsureCapacity(&st, (emxArray__common *)TxData, absb, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if (nx == TxData->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &f_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &wd_emlrtRSI;
  if ((!(1 > nx)) && (nx > 2147483646)) {
    c_st.site = &t_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= nx; idx++) {
    TxData->data[idx] = TxDataB->data[((i1 + idx % (i0 - i1)) + TxDataB->size[0]
      * (idx / (i0 - i1))) - 1];
  }

  emxFree_real_T(&TxDataB);

  /* %       Calculating the Bit Error Ratio (BER) */
  /* The final process here is to count the number of wrongdoings */
  /* of this whole process upon the transmited data for */
  /* quantitative analizes */
  st.site = &n_emlrtRSI;
  xor(&st, TxData, EoutCorr, r0);
  st.site = &n_emlrtRSI;
  BitErr = sum(&st, r0);

  /* Comparison between the Transmited and received and counting the differences */
  st.site = &o_emlrtRSI;
  xor(&st, TxData, EoutCorr2, r0);
  st.site = &o_emlrtRSI;
  BitErr2 = sum(&st, r0);

  /* Comparison between the Transmited and received and counting the differences */
  st.site = &p_emlrtRSI;
  xor(&st, TxData, EoutCorrD, r0);
  st.site = &p_emlrtRSI;
  BitErrD = sum(&st, r0);

  /* Comparison between the Transmited and received and counting the differences */
  emxFree_boolean_T(&r0);
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 15, BitErr2 <= BitErr)) {
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 16, BitErr2 <= BitErrD)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 35);
      *BerOOK = BitErr2 / (((Nb - NumBitDesc) - 2.0 * SyncPeriod) * CurTesSiz);

      /* Calculating the ration of wrong bits and the total number of bits transmited */
      i0 = (int8_T)SeqFin2[(int32_T)*LocMax2 - 1];
      if (!((i0 >= 1) && (i0 <= 100))) {
        emlrtDynamicBoundsCheckR2012b(i0, 1, 100, &q_emlrtBCI, sp);
      }

      mtmp = muDoubleScalarRound((real_T)(int8_T)SeqFin2[(int32_T)*LocMax2 - 1]
        - *MaxVal2);
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &j_emlrtDCI, sp);
      }

      i1 = (int32_T)mtmp;
      if (!((i1 >= 1) && (i1 <= 100))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, 100, &r_emlrtBCI, sp);
      }

      *AberLev = Inter2[i0 - 1] - Inter2[i1 - 1];
      *ValsLev = LevDec2;
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 36);
      *BerOOK = BitErrD / (((Nb - NumBitDesc) - 2.0 * SyncPeriod) * CurTesSiz);

      /* Calculating the ration of wrong bits and the total number of bits transmited */
      *AberLev = EyeOpen;
      *ValsLev = EyeOpenLow + EyeOpen / 2.0;
    }
  } else if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 17, BitErr <= BitErrD))
  {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 37);
    *BerOOK = BitErr / (((Nb - NumBitDesc) - 2.0 * SyncPeriod) * CurTesSiz);

    /* Calculating the ration of wrong bits and the total number of bits transmited */
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 38);
    *BerOOK = BitErrD / (((Nb - NumBitDesc) - 2.0 * SyncPeriod) * CurTesSiz);

    /* Calculating the ration of wrong bits and the total number of bits transmited */
    *AberLev = EyeOpen;
    *ValsLev = EyeOpenLow + EyeOpen / 2.0;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (RedDowOok.c) */

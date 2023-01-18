/*
 * RecDowDqpsk.c
 *
 * Code generation for function 'RecDowDqpsk'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowDqpsk.h"
#include "error.h"
#include "RecDowDqpsk_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "sum.h"
#include "xor.h"
#include "assertValidSizeArg.h"
#include "any.h"
#include "hist.h"
#include "linspace.h"
#include "rdivide.h"
#include "repmat.h"
#include "mean.h"
#include "RecDowDqpsk_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 5, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo b_emlrtRSI = { 6, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo c_emlrtRSI = { 7, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo d_emlrtRSI = { 8, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo e_emlrtRSI = { 11, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo f_emlrtRSI = { 12, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo g_emlrtRSI = { 13, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo h_emlrtRSI = { 14, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo i_emlrtRSI = { 15, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo j_emlrtRSI = { 16, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo k_emlrtRSI = { 53, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo l_emlrtRSI = { 54, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo m_emlrtRSI = { 74, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo n_emlrtRSI = { 76, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo o_emlrtRSI = { 80, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo p_emlrtRSI = { 82, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo q_emlrtRSI = { 126, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo r_emlrtRSI = { 128, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo s_emlrtRSI = { 129, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo t_emlrtRSI = { 139, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo u_emlrtRSI = { 140, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo v_emlrtRSI = { 143, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo w_emlrtRSI = { 144, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo x_emlrtRSI = { 235, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo y_emlrtRSI = { 242, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo ab_emlrtRSI = { 262, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo bb_emlrtRSI = { 264, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo cb_emlrtRSI = { 266, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo db_emlrtRSI = { 268, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo eb_emlrtRSI = { 310, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo fb_emlrtRSI = { 376, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo gb_emlrtRSI = { 400, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo hb_emlrtRSI = { 401, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo ib_emlrtRSI = { 402, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo jb_emlrtRSI = { 403, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRSInfo rb_emlrtRSI = { 13, "max",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

static emlrtRSInfo sb_emlrtRSI = { 19, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo tb_emlrtRSI = { 210, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo ub_emlrtRSI = { 214, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo vb_emlrtRSI = { 375, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo wb_emlrtRSI = { 347, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo xb_emlrtRSI = { 23, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

static emlrtRSInfo yb_emlrtRSI = { 101, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

static emlrtRSInfo ac_emlrtRSI = { 39, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo bc_emlrtRSI = { 61, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo cc_emlrtRSI = { 108, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo dc_emlrtRSI = { 131, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo ec_emlrtRSI = { 79, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo fc_emlrtRSI = { 283, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo gc_emlrtRSI = { 291, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo hc_emlrtRSI = { 13, "min",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo ic_emlrtRSI = { 140, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 198, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 5, 5, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 6, 5, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 379, 5, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 1, 56, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRTEInfo f_emlrtRTEI = { 1, 62, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo m_emlrtRTEI = { 71, 15, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRTEInfo n_emlrtRTEI = { 39, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 121, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 245, 27, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 382, 27, "EoutQ", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo emlrtDCI = { 382, 27, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 316, 27, "EoutI", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo b_emlrtDCI = { 316, 27, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 267, 31, "TxDataEvenB", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 267, 31, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 265, 29, "TxDataMat", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 265, 29, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 263, 29, "TxDataOddB", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 263, 29, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 261, 28, "TxDataMat", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo f_emlrtDCI = { 261, 28, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo g_emlrtBCI = { 1, 100, 187, 13, "QSeqFinAB", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo h_emlrtBCI = { 1, 100, 181, 13, "QSeqOnesAB", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { 1, 100, 175, 13, "SeqFinAB", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { 1, 100, 169, 13, "SeqOnesAB", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 127, 19, "EoutQ", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 127, 19, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 125, 19, "EoutI", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo h_emlrtDCI = { 125, 19, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 81, 26, "IxAux2", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo i_emlrtDCI = { 81, 26, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 79, 25, "EoutQ", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo j_emlrtDCI = { 79, 25, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 75, 26, "IxAux1", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo k_emlrtDCI = { 75, 26, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 73, 25, "EoutI", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo l_emlrtDCI = { 73, 25, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 54, 44, "EoutQ", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo m_emlrtDCI = { 54, 44, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 54, 20, "EoutQ", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo n_emlrtDCI = { 54, 20, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 53, 44, "EoutI", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo o_emlrtDCI = { 53, 44, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 53, 20, "EoutI", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo p_emlrtDCI = { 53, 20, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtECInfo emlrtECI = { 2, 10, 13, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtECInfo b_emlrtECI = { 2, 9, 13, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtECInfo c_emlrtECI = { 2, 4, 14, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtECInfo d_emlrtECI = { 2, 3, 14, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m"
};

static emlrtDCInfo q_emlrtDCI = { 68, 62, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m",
  4 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 138, 15, "EoutI", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo r_emlrtDCI = { 138, 15, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 142, 16, "EoutQ", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo w_emlrtBCI = { 1, 100, 208, 23, "InterAB", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo s_emlrtDCI = { 208, 23, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo x_emlrtBCI = { 1, 100, 223, 24, "QInterAB", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo t_emlrtDCI = { 223, 24, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo y_emlrtBCI = { 1, 100, 250, 16, "InterAB", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo ab_emlrtBCI = { 1, 100, 250, 44, "InterAB", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo u_emlrtDCI = { 250, 44, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo bb_emlrtBCI = { 1, 100, 252, 16, "QInterAB", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo cb_emlrtBCI = { 1, 100, 252, 47, "QInterAB", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtDCInfo v_emlrtDCI = { 252, 47, "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  1 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 386, 13, "DataEven", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 384, 13, "DataEven", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 392, 13, "DataEvenU", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 390, 13, "DataEvenU", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 320, 13, "DataOdd", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 318, 13, "DataOdd", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 326, 13, "DataOddU", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 324, 13, "DataOddU", "RecDowDqpsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDqpsk.m",
  0 };

/* Function Definitions */
void RecDowDqpsk(const emlrtStack *sp, const emxArray_real_T *EoutA, const
                 emxArray_real_T *EoutB, const emxArray_real_T *EoutC, const
                 emxArray_real_T *EoutD, real_T T, real_T Ta, real_T IfftOrSum,
                 real_T MaxNumStag, real_T StuffSampels, real_T NbDQPSK, real_T
                 CurTesSiz, real_T NumAmosCP, real_T NPPB, real_T SyncPeriod,
                 const emxArray_real_T *TxDataMat, real_T ThisCarr, real_T
                 LevDefDpqsk, real_T AddCP, real_T NumCarr, real_T *AberLevI,
                 real_T *ValsLevI, real_T *AberLevQ, real_T *ValsLevQ, real_T
                 *BerDQPSK, emxArray_real_T *EoutI, emxArray_real_T *EoutQ,
                 emxArray_real_T *TxDataOdd, emxArray_real_T *TxDataEven,
                 emxArray_real_T *DataOdd, emxArray_real_T *DataEven, real_T
                 *LocMaxAB, real_T *MaxValAB, real_T SeqFinAB[100], real_T
                 *QMaxValAB, real_T *QLocMaxAB, real_T QSeqFinAB[100], real_T
                 QInterAB[100], real_T InterAB[100], emxArray_real_T *IxAuxAB,
                 emxArray_real_T *QIxAuxAB)
{
  int32_T b_EoutB[2];
  int32_T i0;
  int32_T b_EoutA[2];
  emxArray_real_T *b_EoutI;
  int32_T loop_ub;
  int32_T b_EoutD[2];
  int32_T b_EoutC[2];
  emxArray_real_T *b_EoutQ;
  emxArray_real_T *EmeaI;
  emxArray_real_T *EmeaQ;
  emxArray_real_T *b_EmeaI;
  emxArray_real_T *b_EmeaQ;
  int32_T c_EoutI[2];
  int32_T c_EmeaI[2];
  int32_T idx;
  int32_T maxdimlen;
  int32_T c_EoutQ[2];
  int32_T c_EmeaQ[2];
  boolean_T overflow;
  int32_T n;
  int32_T ix;
  int32_T nx;
  real_T mtmp;
  boolean_T exitg8;
  emxArray_real_T *d_EoutI;
  boolean_T exitg7;
  emxArray_real_T *d_EoutQ;
  real_T sn;
  real_T DiffPosI;
  real_T DiffPosQ;
  int32_T i1;
  int32_T i2;
  boolean_T guard6 = false;
  boolean_T guard5 = false;
  boolean_T guard4 = false;
  emxArray_real_T *e_EoutI;
  emxArray_real_T *f_EoutI;
  int32_T b_loop_ub;
  int32_T i3;
  boolean_T guard3 = false;
  boolean_T guard2 = false;
  boolean_T guard1 = false;
  emxArray_real_T *e_EoutQ;
  emxArray_real_T *f_EoutQ;
  emxArray_real_T *g_EoutI;
  real_T ndbl;
  int32_T sz[2];
  uint32_T varargin_1[2];
  emxArray_real_T *h_EoutI;
  emxArray_real_T *d_EmeaI;
  int32_T b_sz[2];
  emxArray_real_T *g_EoutQ;
  emxArray_real_T *h_EoutQ;
  int32_T c_sz[2];
  real_T anew;
  real_T apnd;
  real_T cdiff;
  real_T absa;
  emxArray_real_T *e_EmeaI;
  boolean_T exitg6;
  int32_T d_sz[2];
  real_T EyeAB[100];
  boolean_T exitg5;
  boolean_T exitg4;
  real_T QEyeAB[100];
  boolean_T exitg3;
  real_T CountAB;
  real_T QCountAB;
  boolean_T b_EyeAB[100];
  boolean_T b_QEyeAB[100];
  int32_T SeqIniAB;
  int32_T QSeqIniAB;
  int32_T kk;
  real_T LevDec3;
  real_T QLevDec3;
  int8_T ii_data[100];
  int8_T ii_size[2];
  static const int8_T iv0[2] = { 1, 100 };

  boolean_T exitg2;
  boolean_T b_guard2 = false;
  real_T b_ii_data[100];
  int32_T b_ii_size[2];
  real_T LevelDec3;
  boolean_T exitg1;
  boolean_T b_guard1 = false;
  int32_T c_ii_size[2];
  real_T QLevelDec3;
  emxArray_real_T *b_TxDataMat;
  int32_T e_sz[2];
  emxArray_real_T *f_EmeaI;
  emxArray_real_T *c_TxDataMat;
  int32_T f_sz[2];
  emxArray_real_T *g_EmeaI;
  emxArray_real_T *DataEvenU;
  emxArray_boolean_T *r0;
  real_T BitErrOdd1;
  real_T BitErrEven1;
  real_T BitErrOdd4;
  real_T BitErrEven4;
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
  for (i0 = 0; i0 < 2; i0++) {
    b_EoutB[i0] = EoutB->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_EoutA[i0] = EoutA->size[i0];
  }

  emxInit_real_T(sp, &b_EoutI, 2, &e_emlrtRTEI, true);
  if ((b_EoutB[0] != b_EoutA[0]) || (b_EoutB[1] != b_EoutA[1])) {
    emlrtSizeEqCheckNDR2012b(&b_EoutB[0], &b_EoutA[0], &d_emlrtECI, sp);
  }

  i0 = b_EoutI->size[0] * b_EoutI->size[1];
  b_EoutI->size[0] = EoutB->size[0];
  b_EoutI->size[1] = EoutB->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_EoutI, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = EoutB->size[0] * EoutB->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_EoutI->data[i0] = EoutB->data[i0] - EoutA->data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_EoutD[i0] = EoutD->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    b_EoutC[i0] = EoutC->size[i0];
  }

  emxInit_real_T(sp, &b_EoutQ, 2, &f_emlrtRTEI, true);
  if ((b_EoutD[0] != b_EoutC[0]) || (b_EoutD[1] != b_EoutC[1])) {
    emlrtSizeEqCheckNDR2012b(&b_EoutD[0], &b_EoutC[0], &c_emlrtECI, sp);
  }

  i0 = b_EoutQ->size[0] * b_EoutQ->size[1];
  b_EoutQ->size[0] = EoutD->size[0];
  b_EoutQ->size[1] = EoutD->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_EoutQ, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = EoutD->size[0] * EoutD->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_EoutQ->data[i0] = EoutD->data[i0] - EoutC->data[i0];
  }

  emxInit_real_T(sp, &EmeaI, 2, &b_emlrtRTEI, true);
  emxInit_real_T(sp, &EmeaQ, 2, &c_emlrtRTEI, true);
  emxInit_real_T(sp, &b_EmeaI, 2, &b_emlrtRTEI, true);
  emxInit_real_T(sp, &b_EmeaQ, 2, &c_emlrtRTEI, true);
  st.site = &emlrtRSI;
  mean(&st, b_EoutI, EmeaI);
  st.site = &b_emlrtRSI;
  mean(&st, b_EoutQ, EmeaQ);
  st.site = &c_emlrtRSI;
  repmat(&st, EmeaI, b_EoutI->size[0], b_EmeaI);
  st.site = &d_emlrtRSI;
  repmat(&st, EmeaQ, b_EoutQ->size[0], b_EmeaQ);
  for (i0 = 0; i0 < 2; i0++) {
    c_EoutI[i0] = b_EoutI->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    c_EmeaI[i0] = b_EmeaI->size[i0];
  }

  if ((c_EoutI[0] != c_EmeaI[0]) || (c_EoutI[1] != c_EmeaI[1])) {
    emlrtSizeEqCheckNDR2012b(&c_EoutI[0], &c_EmeaI[0], &b_emlrtECI, sp);
  }

  i0 = b_EoutI->size[0] * b_EoutI->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_EoutI, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  idx = b_EoutI->size[0];
  maxdimlen = b_EoutI->size[1];
  loop_ub = idx * maxdimlen;
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_EoutI->data[i0] -= b_EmeaI->data[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    c_EoutQ[i0] = b_EoutQ->size[i0];
  }

  for (i0 = 0; i0 < 2; i0++) {
    c_EmeaQ[i0] = b_EmeaQ->size[i0];
  }

  if ((c_EoutQ[0] != c_EmeaQ[0]) || (c_EoutQ[1] != c_EmeaQ[1])) {
    emlrtSizeEqCheckNDR2012b(&c_EoutQ[0], &c_EmeaQ[0], &emlrtECI, sp);
  }

  i0 = b_EoutQ->size[0] * b_EoutQ->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_EoutQ, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  idx = b_EoutQ->size[0];
  maxdimlen = b_EoutQ->size[1];
  loop_ub = idx * maxdimlen;
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_EoutQ->data[i0] -= b_EmeaQ->data[i0];
  }

  st.site = &e_emlrtRSI;
  b_st.site = &rb_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  if (((b_EoutI->size[0] == 1) && (b_EoutI->size[1] == 1)) || (b_EoutI->size[0]
       != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &n_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (b_EoutI->size[0] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &o_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  i0 = EmeaI->size[0] * EmeaI->size[1];
  EmeaI->size[0] = 1;
  EmeaI->size[1] = b_EoutI->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)EmeaI, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  n = b_EoutI->size[0];
  d_st.site = &tb_emlrtRSI;
  overflow = ((!(1 > b_EoutI->size[1])) && (b_EoutI->size[1] > 2147483646));
  if (overflow) {
    e_st.site = &nb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (maxdimlen = 0; maxdimlen + 1 <= b_EoutI->size[1]; maxdimlen++) {
    ix = maxdimlen * n;
    d_st.site = &ub_emlrtRSI;
    nx = maxdimlen * n + 1;
    idx = ix + n;
    mtmp = b_EoutI->data[ix];
    if (n > 1) {
      if (muDoubleScalarIsNaN(b_EoutI->data[ix])) {
        e_st.site = &wb_emlrtRSI;
        if ((!(nx + 1 > idx)) && (idx > 2147483646)) {
          f_st.site = &nb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        ix = nx;
        exitg8 = false;
        while ((!exitg8) && (ix + 1 <= idx)) {
          nx = ix + 1;
          if (!muDoubleScalarIsNaN(b_EoutI->data[ix])) {
            mtmp = b_EoutI->data[ix];
            exitg8 = true;
          } else {
            ix++;
          }
        }
      }

      if (nx < idx) {
        e_st.site = &vb_emlrtRSI;
        if ((!(nx + 1 > idx)) && (idx > 2147483646)) {
          f_st.site = &nb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        while (nx + 1 <= idx) {
          if (b_EoutI->data[nx] > mtmp) {
            mtmp = b_EoutI->data[nx];
          }

          nx++;
        }
      }
    }

    EmeaI->data[maxdimlen] = mtmp;
  }

  st.site = &f_emlrtRSI;
  b_st.site = &rb_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  if (((b_EoutQ->size[0] == 1) && (b_EoutQ->size[1] == 1)) || (b_EoutQ->size[0]
       != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &n_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (b_EoutQ->size[0] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &o_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  i0 = EmeaQ->size[0] * EmeaQ->size[1];
  EmeaQ->size[0] = 1;
  EmeaQ->size[1] = b_EoutQ->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)EmeaQ, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  n = b_EoutQ->size[0];
  d_st.site = &tb_emlrtRSI;
  overflow = ((!(1 > b_EoutQ->size[1])) && (b_EoutQ->size[1] > 2147483646));
  if (overflow) {
    e_st.site = &nb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (maxdimlen = 0; maxdimlen + 1 <= b_EoutQ->size[1]; maxdimlen++) {
    ix = maxdimlen * n;
    d_st.site = &ub_emlrtRSI;
    nx = maxdimlen * n + 1;
    idx = ix + n;
    mtmp = b_EoutQ->data[ix];
    if (n > 1) {
      if (muDoubleScalarIsNaN(b_EoutQ->data[ix])) {
        e_st.site = &wb_emlrtRSI;
        if ((!(nx + 1 > idx)) && (idx > 2147483646)) {
          f_st.site = &nb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        ix = nx;
        exitg7 = false;
        while ((!exitg7) && (ix + 1 <= idx)) {
          nx = ix + 1;
          if (!muDoubleScalarIsNaN(b_EoutQ->data[ix])) {
            mtmp = b_EoutQ->data[ix];
            exitg7 = true;
          } else {
            ix++;
          }
        }
      }

      if (nx < idx) {
        e_st.site = &vb_emlrtRSI;
        if ((!(nx + 1 > idx)) && (idx > 2147483646)) {
          f_st.site = &nb_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        while (nx + 1 <= idx) {
          if (b_EoutQ->data[nx] > mtmp) {
            mtmp = b_EoutQ->data[nx];
          }

          nx++;
        }
      }
    }

    EmeaQ->data[maxdimlen] = mtmp;
  }

  emxInit_real_T(&c_st, &d_EoutI, 2, &emlrtRTEI, true);
  st.site = &g_emlrtRSI;
  repmat(&st, EmeaI, b_EoutI->size[0], b_EmeaI);
  st.site = &h_emlrtRSI;
  repmat(&st, EmeaQ, b_EoutQ->size[0], b_EmeaQ);
  i0 = d_EoutI->size[0] * d_EoutI->size[1];
  d_EoutI->size[0] = b_EoutI->size[0];
  d_EoutI->size[1] = b_EoutI->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_EoutI, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = b_EoutI->size[0] * b_EoutI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    d_EoutI->data[i0] = b_EoutI->data[i0];
  }

  emxInit_real_T(sp, &d_EoutQ, 2, &emlrtRTEI, true);
  st.site = &i_emlrtRSI;
  rdivide(&st, d_EoutI, b_EmeaI, b_EoutI);

  /* Normalizing the signal */
  i0 = d_EoutQ->size[0] * d_EoutQ->size[1];
  d_EoutQ->size[0] = b_EoutQ->size[0];
  d_EoutQ->size[1] = b_EoutQ->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_EoutQ, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = b_EoutQ->size[0] * b_EoutQ->size[1];
  emxFree_real_T(&d_EoutI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    d_EoutQ->data[i0] = b_EoutQ->data[i0];
  }

  st.site = &j_emlrtRSI;
  rdivide(&st, d_EoutQ, b_EmeaQ, b_EoutQ);

  /* Normalizing the signal */
  /* EoutAuxF = 20*log10(abs(fftshift(fft(Ix)./length(Ix)))); */
  /* for jj=1:size(Ix,2) */
  /* VetElecPowerI(CurrentTest,ThisCarr,jj)= MeasPower(EoutI(:,jj)); */
  /* VetElecPowerQ(CurrentTest,ThisCarr,jj)= MeasPower(EoutQ(:,jj)); */
  /* VetElecPower(CurrentTest,ThisCarr,jj)= MeasPower(Ix(:,jj)); */
  /* [VetOptiPower(CurrentTest,ThisCarr,jj),~]= findpeaks(EoutAuxF(:,jj),'SortStr','descend','NPeaks',1); */
  /* end */
  /* SyncAuxI   = EoutI(IniSyncPos:SyncPos);                        %Selecting just the symbol to synchronize */
  /* SyncAuxQ   = EoutQ(IniSyncPos:SyncPos);                        %Selecting just the symbol to synchronize */
  /*                  PrintInfo(Ploting*22,t(IniSyncPos:SyncPos),EoutI(IniSyncPos:SyncPos),SyncSymb(IniSyncPos:SyncPos),EoutA(IniSyncPos:SyncPos),EoutB(IniSyncPos:SyncPos)); */
  /* SyncedAux  = SyncSymb(IniSyncPos:SyncPos);                     %Selecting just the symbol to synchronize */
  /*                    Synchronizing */
  /* This synchronization process is based on the mean expected */
  /* value. That means, the information mean value should be within */
  /* one period of symbol. Thus, the mean value of the received */
  /* signal is acquired and compare of the known sync-word to */
  /* verify if this mean value is at the right possition. Which is */
  /* the midel point (peak) of the highest level at the sync period */
  /* SyncAuxI(EoutI(IniSyncPos:SyncPos)<0.5*max((EoutI(IniSyncPos:SyncPos))))               = 0;   %To keep the mean value above zero anything under is neglected */
  /* SyncAuxQ(EoutQ(IniSyncPos:SyncPos)<0.5*max((EoutQ(IniSyncPos:SyncPos))))               = 0;   %To keep the mean value above zero anything under is neglected */
  /* SyncAuxI(SyncAuxI>=mean(SyncAuxI)) = 1;   %Adding a flag to the first sample of the received mean value */
  /* SyncAuxQ(SyncAuxQ>=mean(SyncAuxQ)) = 1;   %Adding a flag to the first sample of the received mean value */
  /* SyncAuxI(SyncAuxI<mean(SyncAuxI))  = -1;  %All the others samples at set to the lowest level */
  /* SyncAuxQ(SyncAuxQ<mean(SyncAuxQ))  = -1;  %All the others samples at set to the lowest level */
  /* PosToSynI  = find(ismember(SyncAuxI,1));                       %Finding where is the location of the samples to synchronize */
  /* PosToSynQ  = find(ismember(SyncAuxQ,1));                       %Finding where is the location of the samples to synchronize */
  /* PosSynced = find(ismember(SyncedAux,1));                       %Finding where is the location of the samples to synchronize */
  /* DiffPosI = ExtDel*(PosToSynI(round(end/2)) - PosSynced(round(end/2)));  %Accounting the peak (midel point) displacement */
  /* DiffPosQ = ExtDel*(PosToSynQ(round(end/2)) - PosSynced(round(end/2)));  %Accounting the peak (midel point) displacement */
  sn = 0.5 * (muDoubleScalarPower(0.5, MaxNumStag) - 1.0) / -0.5;
  DiffPosI = muDoubleScalarRound(sn / (3.0 / muDoubleScalarPower(2.55, IfftOrSum))
    * T / Ta);
  DiffPosQ = muDoubleScalarRound(sn / (3.0 / muDoubleScalarPower(2.55, IfftOrSum))
    * T / Ta);
  emxFree_real_T(&d_EoutQ);
  if (DiffPosI + 1.0 > b_EoutI->size[0]) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = b_EoutI->size[0];
    if (DiffPosI + 1.0 != (int32_T)muDoubleScalarFloor(DiffPosI + 1.0)) {
      emlrtIntegerCheckR2012b(DiffPosI + 1.0, &p_emlrtDCI, sp);
    }

    i2 = (int32_T)(DiffPosI + 1.0);
    if (!((i2 >= 1) && (i2 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &t_emlrtBCI, sp);
    }

    i0 = i2 - 1;
    i2 = b_EoutI->size[0];
    i1 = b_EoutI->size[0];
    if (!((i1 >= 1) && (i1 <= i2))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i2, &t_emlrtBCI, sp);
    }
  }

  if (1.0 > DiffPosI) {
    loop_ub = 0;
  } else {
    i2 = b_EoutI->size[0];
    if (!(1 <= i2)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i2, &s_emlrtBCI, sp);
    }

    i2 = b_EoutI->size[0];
    if (DiffPosI != (int32_T)muDoubleScalarFloor(DiffPosI)) {
      emlrtIntegerCheckR2012b(DiffPosI, &o_emlrtDCI, sp);
    }

    loop_ub = (int32_T)DiffPosI;
    if (!((loop_ub >= 1) && (loop_ub <= i2))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i2, &s_emlrtBCI, sp);
    }
  }

  st.site = &k_emlrtRSI;
  b_st.site = &xb_emlrtRSI;
  i2 = b_EoutI->size[1];
  if (!((i1 - i0 == 0) || (i2 == 0))) {
    maxdimlen = b_EoutI->size[1];
  } else {
    i2 = b_EoutI->size[1];
    if (!((loop_ub == 0) || (i2 == 0))) {
      maxdimlen = b_EoutI->size[1];
    } else {
      i2 = b_EoutI->size[1];
      if (i2 > 0) {
        maxdimlen = b_EoutI->size[1];
      } else {
        maxdimlen = 0;
      }

      i2 = b_EoutI->size[1];
      if (i2 > maxdimlen) {
        maxdimlen = b_EoutI->size[1];
      }
    }
  }

  c_st.site = &yb_emlrtRSI;
  i2 = b_EoutI->size[1];
  guard6 = false;
  if (maxdimlen == i2) {
    guard6 = true;
  } else {
    i2 = b_EoutI->size[1];
    if ((i1 - i0 == 0) || (i2 == 0)) {
      guard6 = true;
    } else {
      overflow = false;
    }
  }

  if (guard6) {
    overflow = true;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &p_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i2 = b_EoutI->size[1];
  if (maxdimlen == i2) {
  } else {
    i2 = b_EoutI->size[1];
    if ((loop_ub == 0) || (i2 == 0)) {
    } else {
      overflow = false;
    }
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &p_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  overflow = (maxdimlen == 0);
  guard5 = false;
  if (overflow) {
    guard5 = true;
  } else {
    i2 = b_EoutI->size[1];
    if (!((i1 - i0 == 0) || (i2 == 0))) {
      guard5 = true;
    } else {
      ix = -1;
    }
  }

  if (guard5) {
    ix = (i1 - i0) - 1;
  }

  guard4 = false;
  if (overflow) {
    guard4 = true;
  } else {
    i2 = b_EoutI->size[1];
    if (!((loop_ub == 0) || (i2 == 0))) {
      guard4 = true;
    } else {
      n = 0;
    }
  }

  if (guard4) {
    n = loop_ub;
  }

  emxInit_real_T(&b_st, &e_EoutI, 2, &emlrtRTEI, true);
  idx = b_EoutI->size[1];
  i2 = e_EoutI->size[0] * e_EoutI->size[1];
  e_EoutI->size[0] = i1 - i0;
  e_EoutI->size[1] = idx;
  emxEnsureCapacity(&b_st, (emxArray__common *)e_EoutI, i2, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i2 = 0; i2 < idx; i2++) {
    b_loop_ub = i1 - i0;
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      e_EoutI->data[i3 + e_EoutI->size[0] * i2] = b_EoutI->data[(i0 + i3) +
        b_EoutI->size[0] * i2];
    }
  }

  emxInit_real_T(&b_st, &f_EoutI, 2, &emlrtRTEI, true);
  idx = b_EoutI->size[1];
  i0 = f_EoutI->size[0] * f_EoutI->size[1];
  f_EoutI->size[0] = loop_ub;
  f_EoutI->size[1] = idx;
  emxEnsureCapacity(&b_st, (emxArray__common *)f_EoutI, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i0 = 0; i0 < idx; i0++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      f_EoutI->data[i2 + f_EoutI->size[0] * i0] = b_EoutI->data[i2 +
        b_EoutI->size[0] * i0];
    }
  }

  i0 = b_EoutI->size[0] * b_EoutI->size[1];
  b_EoutI->size[0] = (ix + n) + 1;
  b_EoutI->size[1] = maxdimlen;
  emxEnsureCapacity(&b_st, (emxArray__common *)b_EoutI, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i0 = 0; i0 < maxdimlen; i0++) {
    loop_ub = ix + 1;
    for (i2 = 0; i2 < loop_ub; i2++) {
      b_EoutI->data[i2 + b_EoutI->size[0] * i0] = e_EoutI->data[i2 + (ix + 1) *
        i0];
    }
  }

  emxFree_real_T(&e_EoutI);
  for (i0 = 0; i0 < maxdimlen; i0++) {
    for (i2 = 0; i2 < n; i2++) {
      b_EoutI->data[((i2 + ix) + b_EoutI->size[0] * i0) + 1] = f_EoutI->data[i2
        + n * i0];
    }
  }

  emxFree_real_T(&f_EoutI);

  /* Shift based on sampling sliding */
  if (DiffPosQ + 1.0 > b_EoutQ->size[0]) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = b_EoutQ->size[0];
    if (DiffPosQ + 1.0 != (int32_T)muDoubleScalarFloor(DiffPosQ + 1.0)) {
      emlrtIntegerCheckR2012b(DiffPosQ + 1.0, &n_emlrtDCI, sp);
    }

    i2 = (int32_T)(DiffPosQ + 1.0);
    if (!((i2 >= 1) && (i2 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &r_emlrtBCI, sp);
    }

    i0 = i2 - 1;
    i2 = b_EoutQ->size[0];
    i1 = b_EoutQ->size[0];
    if (!((i1 >= 1) && (i1 <= i2))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i2, &r_emlrtBCI, sp);
    }
  }

  if (1.0 > DiffPosQ) {
    loop_ub = 0;
  } else {
    i2 = b_EoutQ->size[0];
    if (!(1 <= i2)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i2, &q_emlrtBCI, sp);
    }

    i2 = b_EoutQ->size[0];
    if (DiffPosQ != (int32_T)muDoubleScalarFloor(DiffPosQ)) {
      emlrtIntegerCheckR2012b(DiffPosQ, &m_emlrtDCI, sp);
    }

    loop_ub = (int32_T)DiffPosQ;
    if (!((loop_ub >= 1) && (loop_ub <= i2))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i2, &q_emlrtBCI, sp);
    }
  }

  st.site = &l_emlrtRSI;
  b_st.site = &xb_emlrtRSI;
  i2 = b_EoutQ->size[1];
  if (!((i1 - i0 == 0) || (i2 == 0))) {
    maxdimlen = b_EoutQ->size[1];
  } else {
    i2 = b_EoutQ->size[1];
    if (!((loop_ub == 0) || (i2 == 0))) {
      maxdimlen = b_EoutQ->size[1];
    } else {
      i2 = b_EoutQ->size[1];
      if (i2 > 0) {
        maxdimlen = b_EoutQ->size[1];
      } else {
        maxdimlen = 0;
      }

      i2 = b_EoutQ->size[1];
      if (i2 > maxdimlen) {
        maxdimlen = b_EoutQ->size[1];
      }
    }
  }

  c_st.site = &yb_emlrtRSI;
  i2 = b_EoutQ->size[1];
  guard3 = false;
  if (maxdimlen == i2) {
    guard3 = true;
  } else {
    i2 = b_EoutQ->size[1];
    if ((i1 - i0 == 0) || (i2 == 0)) {
      guard3 = true;
    } else {
      overflow = false;
    }
  }

  if (guard3) {
    overflow = true;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &p_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i2 = b_EoutQ->size[1];
  if (maxdimlen == i2) {
  } else {
    i2 = b_EoutQ->size[1];
    if ((loop_ub == 0) || (i2 == 0)) {
    } else {
      overflow = false;
    }
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &p_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  overflow = (maxdimlen == 0);
  guard2 = false;
  if (overflow) {
    guard2 = true;
  } else {
    i2 = b_EoutQ->size[1];
    if (!((i1 - i0 == 0) || (i2 == 0))) {
      guard2 = true;
    } else {
      ix = -1;
    }
  }

  if (guard2) {
    ix = (i1 - i0) - 1;
  }

  guard1 = false;
  if (overflow) {
    guard1 = true;
  } else {
    i2 = b_EoutQ->size[1];
    if (!((loop_ub == 0) || (i2 == 0))) {
      guard1 = true;
    } else {
      n = 0;
    }
  }

  if (guard1) {
    n = loop_ub;
  }

  emxInit_real_T(&b_st, &e_EoutQ, 2, &emlrtRTEI, true);
  idx = b_EoutQ->size[1];
  i2 = e_EoutQ->size[0] * e_EoutQ->size[1];
  e_EoutQ->size[0] = i1 - i0;
  e_EoutQ->size[1] = idx;
  emxEnsureCapacity(&b_st, (emxArray__common *)e_EoutQ, i2, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i2 = 0; i2 < idx; i2++) {
    b_loop_ub = i1 - i0;
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      e_EoutQ->data[i3 + e_EoutQ->size[0] * i2] = b_EoutQ->data[(i0 + i3) +
        b_EoutQ->size[0] * i2];
    }
  }

  emxInit_real_T(&b_st, &f_EoutQ, 2, &emlrtRTEI, true);
  idx = b_EoutQ->size[1];
  i0 = f_EoutQ->size[0] * f_EoutQ->size[1];
  f_EoutQ->size[0] = loop_ub;
  f_EoutQ->size[1] = idx;
  emxEnsureCapacity(&b_st, (emxArray__common *)f_EoutQ, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i0 = 0; i0 < idx; i0++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      f_EoutQ->data[i2 + f_EoutQ->size[0] * i0] = b_EoutQ->data[i2 +
        b_EoutQ->size[0] * i0];
    }
  }

  i0 = b_EoutQ->size[0] * b_EoutQ->size[1];
  b_EoutQ->size[0] = (ix + n) + 1;
  b_EoutQ->size[1] = maxdimlen;
  emxEnsureCapacity(&b_st, (emxArray__common *)b_EoutQ, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i0 = 0; i0 < maxdimlen; i0++) {
    loop_ub = ix + 1;
    for (i2 = 0; i2 < loop_ub; i2++) {
      b_EoutQ->data[i2 + b_EoutQ->size[0] * i0] = e_EoutQ->data[i2 + (ix + 1) *
        i0];
    }
  }

  emxFree_real_T(&e_EoutQ);
  for (i0 = 0; i0 < maxdimlen; i0++) {
    for (i2 = 0; i2 < n; i2++) {
      b_EoutQ->data[((i2 + ix) + b_EoutQ->size[0] * i0) + 1] = f_EoutQ->data[i2
        + n * i0];
    }
  }

  emxFree_real_T(&f_EoutQ);

  /* Shift based on sampling sliding */
  /* if DiffPosI>=0%If the difference is positive, left-shift... */
  /* EoutI = ifft(fft(EoutI).*exp(1j*2*pi*f*(DiffPosI*Ta))); %Shift based on time change */
  /* EoutI = [EoutI(DiffPosI+1:end) EoutI(1:DiffPosI)];   %Shift based on sampling sliding */
  /* EoutQ = [EoutQ(DiffPosI+1:end) EoutQ(1:DiffPosI)];   %Shift based on sampling sliding */
  /* else%... but if the difference is negative, right-shift */
  /* EoutI = ifft(fft(EoutI).*exp(-1j*2*pi*f*(DiffPosI*Ta))); %Shift based on time change */
  /* EoutI = [EoutI(end+DiffPosI+1:end) EoutI(1:end+DiffPosI)]; %Shift based on sampling sliding */
  /* EoutQ = [EoutQ(end+DiffPosI+1:end) EoutQ(1:end+DiffPosI)]; %Shift based on sampling sliding */
  /* end */
  /*     %%                   Plot for Qualitative analizes */
  /*                               PrintInfo(Ploting*22,t(IniSyncPos:SyncPos),EoutI(IniSyncPos... */
  /*                               :SyncPos),SyncSymb(IniSyncPos:SyncPos),EoutA(IniSyncPos:... */
  /*                                                        SyncPos),EoutB(IniSyncPos:SyncPos)); */
  /*                               PrintInfo(Ploting*22,t(IniSyncPos:SyncPos),EoutQ(IniSyncPos... */
  /*                               :SyncPos),SyncSymb(IniSyncPos:SyncPos),EoutC(IniSyncPos:... */
  /*                                                        SyncPos),EoutD(IniSyncPos:SyncPos)); */
  /*     %% Removing CP */
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, AddCP != 0.0)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
    mtmp = (real_T)b_EoutI->size[0] - StuffSampels;
    if (1.0 > mtmp) {
      loop_ub = 0;
    } else {
      i0 = b_EoutI->size[0];
      if (!(1 <= i0)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i0, &p_emlrtBCI, sp);
      }

      i0 = b_EoutI->size[0];
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &l_emlrtDCI, sp);
      }

      loop_ub = (int32_T)mtmp;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &p_emlrtBCI, sp);
      }
    }

    emxInit_real_T(sp, &g_EoutI, 2, &emlrtRTEI, true);
    st.site = &m_emlrtRSI;
    ndbl = 2.0 * NumAmosCP + NPPB;
    mtmp = NbDQPSK / 2.0 * CurTesSiz;
    i0 = b_EoutI->size[1];
    nx = loop_ub * i0;
    b_st.site = &ac_emlrtRSI;
    c_st.site = &dc_emlrtRSI;
    assertValidSizeArg(&c_st, ndbl);
    c_st.site = &dc_emlrtRSI;
    assertValidSizeArg(&c_st, mtmp);
    sz[0] = (int32_T)ndbl;
    sz[1] = (int32_T)mtmp;
    b_loop_ub = b_EoutI->size[1];
    i0 = g_EoutI->size[0] * g_EoutI->size[1];
    g_EoutI->size[0] = loop_ub;
    g_EoutI->size[1] = b_loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)g_EoutI, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    for (i0 = 0; i0 < b_loop_ub; i0++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        g_EoutI->data[i2 + g_EoutI->size[0] * i0] = b_EoutI->data[i2 +
          b_EoutI->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      varargin_1[i0] = (uint32_T)g_EoutI->size[i0];
    }

    emxFree_real_T(&g_EoutI);
    maxdimlen = (int32_T)varargin_1[0];
    if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
      maxdimlen = (int32_T)varargin_1[1];
    }

    maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
    if ((int32_T)ndbl > maxdimlen) {
      b_st.site = &bc_emlrtRSI;
      error(&b_st);
    }

    if ((int32_T)mtmp > maxdimlen) {
      b_st.site = &bc_emlrtRSI;
      error(&b_st);
    }

    for (i0 = 0; i0 < 2; i0++) {
      i2 = sz[i0];
      if (!(i2 >= 0)) {
        emlrtNonNegativeCheckR2012b(i2, &q_emlrtDCI, &st);
      }
    }

    i0 = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_EmeaI->size[0] = (int32_T)ndbl;
    b_EmeaI->size[1] = (int32_T)mtmp;
    emxEnsureCapacity(&st, (emxArray__common *)b_EmeaI, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    if (nx == b_EmeaI->size[0] * b_EmeaI->size[1]) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &m_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    b_st.site = &cc_emlrtRSI;
    if ((!(1 > nx)) && (nx > 2147483646)) {
      c_st.site = &nb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (idx = 0; idx + 1 <= nx; idx++) {
      b_EmeaI->data[idx] = b_EoutI->data[idx % loop_ub + b_EoutI->size[0] * (idx
        / loop_ub)];
    }

    mtmp = (real_T)b_EmeaI->size[0] - NumAmosCP;
    if (1.0 + NumAmosCP > mtmp) {
      i0 = 0;
      i1 = 0;
    } else {
      i0 = b_EmeaI->size[0];
      ndbl = 1.0 + NumAmosCP;
      if (ndbl != (int32_T)muDoubleScalarFloor(ndbl)) {
        emlrtIntegerCheckR2012b(ndbl, &k_emlrtDCI, sp);
      }

      i2 = (int32_T)ndbl;
      if (!((i2 >= 1) && (i2 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &o_emlrtBCI, sp);
      }

      i0 = i2 - 1;
      i2 = b_EmeaI->size[0];
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &k_emlrtDCI, sp);
      }

      i1 = (int32_T)mtmp;
      if (!((i1 >= 1) && (i1 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i2, &o_emlrtBCI, sp);
      }
    }

    emxInit_real_T(sp, &d_EmeaI, 2, &emlrtRTEI, true);
    idx = b_EmeaI->size[1];
    i2 = d_EmeaI->size[0] * d_EmeaI->size[1];
    d_EmeaI->size[0] = i1 - i0;
    d_EmeaI->size[1] = idx;
    emxEnsureCapacity(sp, (emxArray__common *)d_EmeaI, i2, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    for (i2 = 0; i2 < idx; i2++) {
      loop_ub = i1 - i0;
      for (i3 = 0; i3 < loop_ub; i3++) {
        d_EmeaI->data[i3 + d_EmeaI->size[0] * i2] = b_EmeaI->data[(i0 + i3) +
          b_EmeaI->size[0] * i2];
      }
    }

    i0 = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_EmeaI->size[0] = d_EmeaI->size[0];
    b_EmeaI->size[1] = d_EmeaI->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_EmeaI, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = d_EmeaI->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_loop_ub = d_EmeaI->size[0];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        b_EmeaI->data[i2 + b_EmeaI->size[0] * i0] = d_EmeaI->data[i2 +
          d_EmeaI->size[0] * i0];
      }
    }

    emxFree_real_T(&d_EmeaI);
    st.site = &n_emlrtRSI;
    i0 = b_EmeaQ->size[0] * b_EmeaQ->size[1];
    b_EmeaQ->size[0] = b_EmeaI->size[0];
    b_EmeaQ->size[1] = b_EmeaI->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b_EmeaQ, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = b_EmeaI->size[0] * b_EmeaI->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_EmeaQ->data[i0] = b_EmeaI->data[i0];
    }

    ndbl = NPPB * (NbDQPSK / 2.0);
    nx = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_st.site = &ac_emlrtRSI;
    c_st.site = &dc_emlrtRSI;
    assertValidSizeArg(&c_st, ndbl);
    c_st.site = &dc_emlrtRSI;
    assertValidSizeArg(&c_st, CurTesSiz);
    b_sz[0] = (int32_T)ndbl;
    b_sz[1] = (int32_T)CurTesSiz;
    for (i0 = 0; i0 < 2; i0++) {
      varargin_1[i0] = (uint32_T)b_EmeaI->size[i0];
    }

    maxdimlen = (int32_T)varargin_1[0];
    if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
      maxdimlen = (int32_T)varargin_1[1];
    }

    maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
    if ((int32_T)ndbl > maxdimlen) {
      b_st.site = &bc_emlrtRSI;
      error(&b_st);
    }

    if ((int32_T)CurTesSiz > maxdimlen) {
      b_st.site = &bc_emlrtRSI;
      error(&b_st);
    }

    for (i0 = 0; i0 < 2; i0++) {
      i2 = b_sz[i0];
      if (!(i2 >= 0)) {
        emlrtNonNegativeCheckR2012b(i2, &q_emlrtDCI, &st);
      }
    }

    i0 = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_EmeaI->size[0] = (int32_T)ndbl;
    b_EmeaI->size[1] = (int32_T)CurTesSiz;
    emxEnsureCapacity(&st, (emxArray__common *)b_EmeaI, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    if (nx == b_EmeaI->size[0] * b_EmeaI->size[1]) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &m_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    b_st.site = &cc_emlrtRSI;
    if ((!(1 > nx)) && (nx > 2147483646)) {
      c_st.site = &nb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (idx = 0; idx + 1 <= nx; idx++) {
      b_EmeaI->data[idx] = b_EmeaQ->data[idx];
    }

    i0 = b_EoutI->size[0] * b_EoutI->size[1];
    b_EoutI->size[0] = b_EmeaI->size[0];
    b_EoutI->size[1] = b_EmeaI->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_EoutI, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = b_EmeaI->size[0] * b_EmeaI->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_EoutI->data[i0] = b_EmeaI->data[i0];
    }

    mtmp = (real_T)b_EoutQ->size[0] - StuffSampels;
    if (1.0 > mtmp) {
      loop_ub = 0;
    } else {
      i0 = b_EoutQ->size[0];
      if (!(1 <= i0)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i0, &n_emlrtBCI, sp);
      }

      i0 = b_EoutQ->size[0];
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &j_emlrtDCI, sp);
      }

      loop_ub = (int32_T)mtmp;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &n_emlrtBCI, sp);
      }
    }

    emxInit_real_T(sp, &h_EoutQ, 2, &emlrtRTEI, true);
    st.site = &o_emlrtRSI;
    ndbl = 2.0 * NumAmosCP + NPPB;
    mtmp = NbDQPSK / 2.0 * CurTesSiz;
    i0 = b_EoutQ->size[1];
    nx = loop_ub * i0;
    b_st.site = &ac_emlrtRSI;
    c_st.site = &dc_emlrtRSI;
    assertValidSizeArg(&c_st, ndbl);
    c_st.site = &dc_emlrtRSI;
    assertValidSizeArg(&c_st, mtmp);
    c_sz[0] = (int32_T)ndbl;
    c_sz[1] = (int32_T)mtmp;
    b_loop_ub = b_EoutQ->size[1];
    i0 = h_EoutQ->size[0] * h_EoutQ->size[1];
    h_EoutQ->size[0] = loop_ub;
    h_EoutQ->size[1] = b_loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)h_EoutQ, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    for (i0 = 0; i0 < b_loop_ub; i0++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        h_EoutQ->data[i2 + h_EoutQ->size[0] * i0] = b_EoutQ->data[i2 +
          b_EoutQ->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      varargin_1[i0] = (uint32_T)h_EoutQ->size[i0];
    }

    emxFree_real_T(&h_EoutQ);
    maxdimlen = (int32_T)varargin_1[0];
    if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
      maxdimlen = (int32_T)varargin_1[1];
    }

    maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
    if ((int32_T)ndbl > maxdimlen) {
      b_st.site = &bc_emlrtRSI;
      error(&b_st);
    }

    if ((int32_T)mtmp > maxdimlen) {
      b_st.site = &bc_emlrtRSI;
      error(&b_st);
    }

    for (i0 = 0; i0 < 2; i0++) {
      i2 = c_sz[i0];
      if (!(i2 >= 0)) {
        emlrtNonNegativeCheckR2012b(i2, &q_emlrtDCI, &st);
      }
    }

    i0 = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_EmeaI->size[0] = (int32_T)ndbl;
    b_EmeaI->size[1] = (int32_T)mtmp;
    emxEnsureCapacity(&st, (emxArray__common *)b_EmeaI, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    if (nx == b_EmeaI->size[0] * b_EmeaI->size[1]) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &m_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    b_st.site = &cc_emlrtRSI;
    if ((!(1 > nx)) && (nx > 2147483646)) {
      c_st.site = &nb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (idx = 0; idx + 1 <= nx; idx++) {
      b_EmeaI->data[idx] = b_EoutQ->data[idx % loop_ub + b_EoutQ->size[0] * (idx
        / loop_ub)];
    }

    mtmp = (real_T)b_EmeaI->size[0] - NumAmosCP;
    if (1.0 + NumAmosCP > mtmp) {
      i0 = 0;
      i1 = 0;
    } else {
      i0 = b_EmeaI->size[0];
      ndbl = 1.0 + NumAmosCP;
      if (ndbl != (int32_T)muDoubleScalarFloor(ndbl)) {
        emlrtIntegerCheckR2012b(ndbl, &i_emlrtDCI, sp);
      }

      i2 = (int32_T)ndbl;
      if (!((i2 >= 1) && (i2 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &m_emlrtBCI, sp);
      }

      i0 = i2 - 1;
      i2 = b_EmeaI->size[0];
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &i_emlrtDCI, sp);
      }

      i1 = (int32_T)mtmp;
      if (!((i1 >= 1) && (i1 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i2, &m_emlrtBCI, sp);
      }
    }

    emxInit_real_T(sp, &e_EmeaI, 2, &emlrtRTEI, true);
    idx = b_EmeaI->size[1];
    i2 = e_EmeaI->size[0] * e_EmeaI->size[1];
    e_EmeaI->size[0] = i1 - i0;
    e_EmeaI->size[1] = idx;
    emxEnsureCapacity(sp, (emxArray__common *)e_EmeaI, i2, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    for (i2 = 0; i2 < idx; i2++) {
      loop_ub = i1 - i0;
      for (i3 = 0; i3 < loop_ub; i3++) {
        e_EmeaI->data[i3 + e_EmeaI->size[0] * i2] = b_EmeaI->data[(i0 + i3) +
          b_EmeaI->size[0] * i2];
      }
    }

    i0 = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_EmeaI->size[0] = e_EmeaI->size[0];
    b_EmeaI->size[1] = e_EmeaI->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_EmeaI, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = e_EmeaI->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_loop_ub = e_EmeaI->size[0];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        b_EmeaI->data[i2 + b_EmeaI->size[0] * i0] = e_EmeaI->data[i2 +
          e_EmeaI->size[0] * i0];
      }
    }

    emxFree_real_T(&e_EmeaI);
    st.site = &p_emlrtRSI;
    i0 = b_EmeaQ->size[0] * b_EmeaQ->size[1];
    b_EmeaQ->size[0] = b_EmeaI->size[0];
    b_EmeaQ->size[1] = b_EmeaI->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b_EmeaQ, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = b_EmeaI->size[0] * b_EmeaI->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_EmeaQ->data[i0] = b_EmeaI->data[i0];
    }

    ndbl = NPPB * (NbDQPSK / 2.0);
    nx = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_st.site = &ac_emlrtRSI;
    c_st.site = &dc_emlrtRSI;
    assertValidSizeArg(&c_st, ndbl);
    c_st.site = &dc_emlrtRSI;
    assertValidSizeArg(&c_st, CurTesSiz);
    d_sz[0] = (int32_T)ndbl;
    d_sz[1] = (int32_T)CurTesSiz;
    for (i0 = 0; i0 < 2; i0++) {
      varargin_1[i0] = (uint32_T)b_EmeaI->size[i0];
    }

    maxdimlen = (int32_T)varargin_1[0];
    if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
      maxdimlen = (int32_T)varargin_1[1];
    }

    maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
    if ((int32_T)ndbl > maxdimlen) {
      b_st.site = &bc_emlrtRSI;
      error(&b_st);
    }

    if ((int32_T)CurTesSiz > maxdimlen) {
      b_st.site = &bc_emlrtRSI;
      error(&b_st);
    }

    for (i0 = 0; i0 < 2; i0++) {
      i2 = d_sz[i0];
      if (!(i2 >= 0)) {
        emlrtNonNegativeCheckR2012b(i2, &q_emlrtDCI, &st);
      }
    }

    i0 = b_EmeaI->size[0] * b_EmeaI->size[1];
    b_EmeaI->size[0] = (int32_T)ndbl;
    b_EmeaI->size[1] = (int32_T)CurTesSiz;
    emxEnsureCapacity(&st, (emxArray__common *)b_EmeaI, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    if (nx == b_EmeaI->size[0] * b_EmeaI->size[1]) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &m_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    b_st.site = &cc_emlrtRSI;
    if ((!(1 > nx)) && (nx > 2147483646)) {
      c_st.site = &nb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (idx = 0; idx + 1 <= nx; idx++) {
      b_EmeaI->data[idx] = b_EmeaQ->data[idx];
    }

    i0 = b_EoutQ->size[0] * b_EoutQ->size[1];
    b_EoutQ->size[0] = b_EmeaI->size[0];
    b_EoutQ->size[1] = b_EmeaI->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_EoutQ, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = b_EmeaI->size[0] * b_EmeaI->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_EoutQ->data[i0] = b_EmeaI->data[i0];
    }
  }

  emxFree_real_T(&b_EmeaQ);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2);

  /*     %% Taking the sampling the EVM meassurement */
  /* clear IxAux; */
  /* PosAuxEout1 = NPPB/2:NPPB:length(EoutI);%Varriable respossible to take just the samples at the middle of the symbol */
  /* PosAuxEout2 = ((NPPB/2)+(NPPB/4)):NPPB:length(EoutI);%Varriable respossible to take just the samples at the middle of the symbol */
  /* PosAuxEout3 = ((NPPB/2)-(NPPB/4)):NPPB:length(EoutI);%Varriable respossible to take just the samples at the middle of the symbol */
  /* IxAux1      = EoutI(PosAuxEout1) + 1j.*EoutQ(PosAuxEout1);    %Normalizing the reference */
  /* IxAux2      = EoutI(PosAuxEout2) + 1j.*EoutQ(PosAuxEout2);    %Normalizing the reference */
  /* IxAux3      = EoutI(PosAuxEout3) + 1j.*EoutQ(PosAuxEout3);    %Normalizing the reference */
  /* a=a+0; */
  /* EvmMatRecA(1,:) = IxAux1;                       %Taking just the middle samples as references */
  /* EvmMatRecA(2,:) = IxAux2;                       %Taking just the middle samples as references */
  /* EvmMatRecA(3,:) = IxAux3;                       %Taking just the middle samples as references */
  /* EvmMatRecA(4,:) = IxAux1;                       %Taking just the middle samples as references */
  /* [EvmDBA(1), EvmPerA(1), EvmRmsA(1) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1 ); */
  /* [EvmDBA(2), EvmPerA(2), EvmRmsA(2) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux2 ); */
  /* [EvmDBA(3), EvmPerA(3), EvmRmsA(3) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux3 ); */
  /* [EvmDBA(4), EvmPerA(4), EvmRmsA(4) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1 ); */
  /* [EvmDBJA(1),EvmPerJA(1),EvmRmsJA(1)] = evm1(4,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1); */
  /* [EvmDBJA(2),EvmPerJA(2),EvmRmsJA(2)] = evm1(4,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux2); */
  /* [EvmDBJA(3),EvmPerJA(3),EvmRmsJA(3)] = evm1(4,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux3); */
  /* [EvmDBJA(4),EvmPerJA(4),EvmRmsJA(4)] = evm1(4,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1); */
  /*     %% */
  /*                  figure;plot(t(1:length(E_rec3)),abs(E_rec3),t(1:length(EoutQ)),EoutQ,t(1:length(EoutI)),EoutI);set(gcf,'units','normalized','outerposition',[0 0 0.5 1]); */
  /* One important step on this project was the confirmation of our */
  /* results from a closed and theoretical equation that relates */
  /* the income optical field witht its respective data (as */
  /* descrived above in the receiving process). The result from */
  /* this equation was further compared with the result from the */
  /* MZ-Interferometer as an proof of concept. This equation can be */
  /* found at the book of Optical Fiber Telecommunications V B, */
  /* which one of the authors is Ivan P. Kaminow at the page 144. */
  /*                                  taux = t(1:length(E_rec3)); */
  /*                                  faux = time2freq(taux); */
  /*                                  Ui = real(exp(1j*pi/4).*E_rec3.*conj(ifft(fft(E_rec3).*exp(-... */
  /*                                      1j*2*pi*faux*T))));%The data at odd position */
  /*                                  Ui = Ui./max(abs(Ui));                                         %Normalizing the signal */
  /*                                  Uq = imag(exp(1j*pi/4).*E_rec3.*conj(ifft(fft(E_rec3).*exp(-... */
  /*                                      1j*2*pi*faux*T))));%The data at the even position */
  /*                                  Uq = Uq./max(abs(Uq));                                         %Normalizing the signal */
  /* ########################################################################## */
  mtmp = 1.0 + SyncPeriod * NPPB;
  ndbl = (real_T)b_EoutI->size[0] - SyncPeriod * NPPB;
  if (mtmp > ndbl) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = b_EoutI->size[0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &h_emlrtDCI, sp);
    }

    i2 = (int32_T)mtmp;
    if (!((i2 >= 1) && (i2 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &l_emlrtBCI, sp);
    }

    i0 = i2 - 1;
    i2 = b_EoutI->size[0];
    if (ndbl != (int32_T)muDoubleScalarFloor(ndbl)) {
      emlrtIntegerCheckR2012b(ndbl, &h_emlrtDCI, sp);
    }

    i1 = (int32_T)ndbl;
    if (!((i1 >= 1) && (i1 <= i2))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i2, &l_emlrtBCI, sp);
    }
  }

  emxInit_real_T(sp, &h_EoutI, 2, &emlrtRTEI, true);
  idx = b_EoutI->size[1];
  i2 = h_EoutI->size[0] * h_EoutI->size[1];
  h_EoutI->size[0] = i1 - i0;
  h_EoutI->size[1] = idx;
  emxEnsureCapacity(sp, (emxArray__common *)h_EoutI, i2, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i2 = 0; i2 < idx; i2++) {
    loop_ub = i1 - i0;
    for (i3 = 0; i3 < loop_ub; i3++) {
      h_EoutI->data[i3 + h_EoutI->size[0] * i2] = b_EoutI->data[(i0 + i3) +
        b_EoutI->size[0] * i2];
    }
  }

  i0 = b_EoutI->size[0] * b_EoutI->size[1];
  b_EoutI->size[0] = h_EoutI->size[0];
  b_EoutI->size[1] = h_EoutI->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_EoutI, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = h_EoutI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = h_EoutI->size[0];
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      b_EoutI->data[i2 + b_EoutI->size[0] * i0] = h_EoutI->data[i2 +
        h_EoutI->size[0] * i0];
    }
  }

  emxFree_real_T(&h_EoutI);
  st.site = &q_emlrtRSI;
  mtmp = (real_T)b_EoutI->size[0] * (real_T)b_EoutI->size[1];
  nx = b_EoutI->size[0] * b_EoutI->size[1];
  b_st.site = &ac_emlrtRSI;
  c_st.site = &dc_emlrtRSI;
  assertValidSizeArg(&c_st, mtmp);
  for (i0 = 0; i0 < 2; i0++) {
    varargin_1[i0] = (uint32_T)b_EoutI->size[i0];
  }

  maxdimlen = (int32_T)varargin_1[0];
  if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
    maxdimlen = (int32_T)varargin_1[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (1 > maxdimlen) {
    b_st.site = &bc_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)mtmp > maxdimlen) {
    b_st.site = &bc_emlrtRSI;
    error(&b_st);
  }

  i0 = EoutI->size[0] * EoutI->size[1];
  EoutI->size[0] = 1;
  EoutI->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(&st, (emxArray__common *)EoutI, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (nx == EoutI->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &m_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &cc_emlrtRSI;
  if ((!(1 > nx)) && (nx > 2147483646)) {
    c_st.site = &nb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= nx; idx++) {
    EoutI->data[idx] = b_EoutI->data[idx];
  }

  emxFree_real_T(&b_EoutI);
  mtmp = 1.0 + SyncPeriod * NPPB;
  ndbl = (real_T)b_EoutQ->size[0] - SyncPeriod * NPPB;
  if (mtmp > ndbl) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = b_EoutQ->size[0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &g_emlrtDCI, sp);
    }

    i2 = (int32_T)mtmp;
    if (!((i2 >= 1) && (i2 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &k_emlrtBCI, sp);
    }

    i0 = i2 - 1;
    i2 = b_EoutQ->size[0];
    if (ndbl != (int32_T)muDoubleScalarFloor(ndbl)) {
      emlrtIntegerCheckR2012b(ndbl, &g_emlrtDCI, sp);
    }

    i1 = (int32_T)ndbl;
    if (!((i1 >= 1) && (i1 <= i2))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i2, &k_emlrtBCI, sp);
    }
  }

  emxInit_real_T(sp, &g_EoutQ, 2, &emlrtRTEI, true);
  idx = b_EoutQ->size[1];
  i2 = g_EoutQ->size[0] * g_EoutQ->size[1];
  g_EoutQ->size[0] = i1 - i0;
  g_EoutQ->size[1] = idx;
  emxEnsureCapacity(sp, (emxArray__common *)g_EoutQ, i2, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i2 = 0; i2 < idx; i2++) {
    loop_ub = i1 - i0;
    for (i3 = 0; i3 < loop_ub; i3++) {
      g_EoutQ->data[i3 + g_EoutQ->size[0] * i2] = b_EoutQ->data[(i0 + i3) +
        b_EoutQ->size[0] * i2];
    }
  }

  i0 = b_EoutQ->size[0] * b_EoutQ->size[1];
  b_EoutQ->size[0] = g_EoutQ->size[0];
  b_EoutQ->size[1] = g_EoutQ->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_EoutQ, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = g_EoutQ->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_loop_ub = g_EoutQ->size[0];
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      b_EoutQ->data[i2 + b_EoutQ->size[0] * i0] = g_EoutQ->data[i2 +
        g_EoutQ->size[0] * i0];
    }
  }

  emxFree_real_T(&g_EoutQ);
  st.site = &r_emlrtRSI;
  mtmp = (real_T)b_EoutQ->size[0] * (real_T)b_EoutQ->size[1];
  nx = b_EoutQ->size[0] * b_EoutQ->size[1];
  b_st.site = &ac_emlrtRSI;
  c_st.site = &dc_emlrtRSI;
  assertValidSizeArg(&c_st, mtmp);
  for (i0 = 0; i0 < 2; i0++) {
    varargin_1[i0] = (uint32_T)b_EoutQ->size[i0];
  }

  maxdimlen = (int32_T)varargin_1[0];
  if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
    maxdimlen = (int32_T)varargin_1[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (1 > maxdimlen) {
    b_st.site = &bc_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)mtmp > maxdimlen) {
    b_st.site = &bc_emlrtRSI;
    error(&b_st);
  }

  i0 = EoutQ->size[0] * EoutQ->size[1];
  EoutQ->size[0] = 1;
  EoutQ->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(&st, (emxArray__common *)EoutQ, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (nx == EoutQ->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &m_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &cc_emlrtRSI;
  if ((!(1 > nx)) && (nx > 2147483646)) {
    c_st.site = &nb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= nx; idx++) {
    EoutQ->data[idx] = b_EoutQ->data[idx];
  }

  emxFree_real_T(&b_EoutQ);
  mtmp = NPPB / 2.0;
  st.site = &s_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (muDoubleScalarIsNaN(mtmp) || muDoubleScalarIsNaN(NPPB)) {
    n = 1;
    anew = rtNaN;
    apnd = EoutI->size[1];
    overflow = false;
  } else if ((NPPB == 0.0) || ((mtmp < EoutI->size[1]) && (NPPB < 0.0)) ||
             ((EoutI->size[1] < mtmp) && (NPPB > 0.0))) {
    n = 0;
    anew = mtmp;
    apnd = EoutI->size[1];
    overflow = false;
  } else if (muDoubleScalarIsInf(mtmp)) {
    n = 1;
    anew = rtNaN;
    apnd = EoutI->size[1];
    if (muDoubleScalarIsInf(NPPB) || (mtmp == EoutI->size[1])) {
      overflow = true;
    } else {
      overflow = false;
    }

    overflow = !overflow;
  } else if (muDoubleScalarIsInf(NPPB)) {
    n = 1;
    anew = mtmp;
    apnd = EoutI->size[1];
    overflow = false;
  } else {
    anew = mtmp;
    ndbl = muDoubleScalarFloor(((real_T)EoutI->size[1] - mtmp) / NPPB + 0.5);
    apnd = mtmp + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (real_T)EoutI->size[1];
    } else {
      cdiff = (real_T)EoutI->size[1] - apnd;
    }

    absa = muDoubleScalarAbs(mtmp);
    maxdimlen = EoutI->size[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, maxdimlen)) {
      ndbl++;
      apnd = EoutI->size[1];
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

  c_st.site = &fc_emlrtRSI;
  if (!overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &l_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      0);
  }

  i0 = EmeaI->size[0] * EmeaI->size[1];
  EmeaI->size[0] = 1;
  EmeaI->size[1] = n;
  emxEnsureCapacity(&b_st, (emxArray__common *)EmeaI, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (n > 0) {
    EmeaI->data[0] = anew;
    if (n > 1) {
      EmeaI->data[n - 1] = apnd;
      maxdimlen = (n - 1) / 2;
      c_st.site = &gc_emlrtRSI;
      for (idx = 1; idx < maxdimlen; idx++) {
        ndbl = (real_T)idx * NPPB;
        EmeaI->data[idx] = anew + ndbl;
        EmeaI->data[(n - idx) - 1] = apnd - ndbl;
      }

      if (maxdimlen << 1 == n - 1) {
        EmeaI->data[maxdimlen] = (anew + apnd) / 2.0;
      } else {
        ndbl = (real_T)maxdimlen * NPPB;
        EmeaI->data[maxdimlen] = anew + ndbl;
        EmeaI->data[maxdimlen + 1] = apnd - ndbl;
      }
    }
  }

  /* Possition of the central samples - but the number of samples per symbol is even ???? */
  /* IxAux = EoutI(PosIx);                                             %From the main received signal just a few samples are taken for further evaluation */
  /* The number of boxes to be filled up on the histogram process */
  /* At this process each eye will be evaluated separetelly. It is */
  /* important to remember that the PAM4 has 4 levels, which means */
  /* three level of decissions that are exaclty the center of the */
  /* eye diagram. */
  i0 = IxAuxAB->size[0] * IxAuxAB->size[1];
  IxAuxAB->size[0] = 1;
  IxAuxAB->size[1] = EmeaI->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)IxAuxAB, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  idx = EoutI->size[1];
  loop_ub = EmeaI->size[0] * EmeaI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    mtmp = EmeaI->data[i0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &r_emlrtDCI, sp);
    }

    i2 = (int32_T)mtmp;
    if (!((i2 >= 1) && (i2 <= idx))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, idx, &u_emlrtBCI, sp);
    }

    IxAuxAB->data[i0] = EoutI->data[i2 - 1];
  }

  /* Taking just those values relative to the uper eye */
  st.site = &t_emlrtRSI;
  b_st.site = &hc_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  if ((EoutI->size[1] == 1) || (EoutI->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &n_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (EoutI->size[1] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &o_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &ic_emlrtRSI;
  maxdimlen = 1;
  n = EoutI->size[1];
  mtmp = EoutI->data[0];
  if (EoutI->size[1] > 1) {
    if (muDoubleScalarIsNaN(EoutI->data[0])) {
      e_st.site = &wb_emlrtRSI;
      overflow = (EoutI->size[1] > 2147483646);
      if (overflow) {
        f_st.site = &nb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      ix = 2;
      exitg6 = false;
      while ((!exitg6) && (ix <= n)) {
        maxdimlen = ix;
        if (!muDoubleScalarIsNaN(EoutI->data[ix - 1])) {
          mtmp = EoutI->data[ix - 1];
          exitg6 = true;
        } else {
          ix++;
        }
      }
    }

    if (maxdimlen < EoutI->size[1]) {
      e_st.site = &vb_emlrtRSI;
      overflow = ((!(maxdimlen + 1 > EoutI->size[1])) && (EoutI->size[1] >
        2147483646));
      if (overflow) {
        f_st.site = &nb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (maxdimlen + 1 <= n) {
        if (EoutI->data[maxdimlen] < mtmp) {
          mtmp = EoutI->data[maxdimlen];
        }

        maxdimlen++;
      }
    }
  }

  st.site = &t_emlrtRSI;
  b_st.site = &rb_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  d_st.site = &ic_emlrtRSI;
  maxdimlen = 1;
  n = EoutI->size[1];
  ndbl = EoutI->data[0];
  if (EoutI->size[1] > 1) {
    if (muDoubleScalarIsNaN(EoutI->data[0])) {
      e_st.site = &wb_emlrtRSI;
      overflow = (EoutI->size[1] > 2147483646);
      if (overflow) {
        f_st.site = &nb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      ix = 2;
      exitg5 = false;
      while ((!exitg5) && (ix <= n)) {
        maxdimlen = ix;
        if (!muDoubleScalarIsNaN(EoutI->data[ix - 1])) {
          ndbl = EoutI->data[ix - 1];
          exitg5 = true;
        } else {
          ix++;
        }
      }
    }

    if (maxdimlen < EoutI->size[1]) {
      e_st.site = &vb_emlrtRSI;
      overflow = ((!(maxdimlen + 1 > EoutI->size[1])) && (EoutI->size[1] >
        2147483646));
      if (overflow) {
        f_st.site = &nb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (maxdimlen + 1 <= n) {
        if (EoutI->data[maxdimlen] > ndbl) {
          ndbl = EoutI->data[maxdimlen];
        }

        maxdimlen++;
      }
    }
  }

  linspace(0.7 * mtmp, 0.7 * ndbl, InterAB);

  /* Building the histogram boxes */
  st.site = &u_emlrtRSI;
  hist(&st, IxAuxAB, InterAB, EyeAB);

  /* filling up the boxes with samples that fit on them. */
  i0 = QIxAuxAB->size[0] * QIxAuxAB->size[1];
  QIxAuxAB->size[0] = 1;
  QIxAuxAB->size[1] = EmeaI->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)QIxAuxAB, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  idx = EoutQ->size[1];
  loop_ub = EmeaI->size[0] * EmeaI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    i2 = (int32_T)EmeaI->data[i0];
    if (!((i2 >= 1) && (i2 <= idx))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, idx, &v_emlrtBCI, sp);
    }

    QIxAuxAB->data[i0] = EoutQ->data[i2 - 1];
  }

  /* Taking just those values relative to the uper eye */
  st.site = &v_emlrtRSI;
  b_st.site = &hc_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  if ((EoutQ->size[1] == 1) || (EoutQ->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &n_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (EoutQ->size[1] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &o_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &ic_emlrtRSI;
  maxdimlen = 1;
  n = EoutQ->size[1];
  mtmp = EoutQ->data[0];
  if (EoutQ->size[1] > 1) {
    if (muDoubleScalarIsNaN(EoutQ->data[0])) {
      e_st.site = &wb_emlrtRSI;
      overflow = (EoutQ->size[1] > 2147483646);
      if (overflow) {
        f_st.site = &nb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      ix = 2;
      exitg4 = false;
      while ((!exitg4) && (ix <= n)) {
        maxdimlen = ix;
        if (!muDoubleScalarIsNaN(EoutQ->data[ix - 1])) {
          mtmp = EoutQ->data[ix - 1];
          exitg4 = true;
        } else {
          ix++;
        }
      }
    }

    if (maxdimlen < EoutQ->size[1]) {
      e_st.site = &vb_emlrtRSI;
      overflow = ((!(maxdimlen + 1 > EoutQ->size[1])) && (EoutQ->size[1] >
        2147483646));
      if (overflow) {
        f_st.site = &nb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (maxdimlen + 1 <= n) {
        if (EoutQ->data[maxdimlen] < mtmp) {
          mtmp = EoutQ->data[maxdimlen];
        }

        maxdimlen++;
      }
    }
  }

  st.site = &v_emlrtRSI;
  b_st.site = &rb_emlrtRSI;
  c_st.site = &sb_emlrtRSI;
  d_st.site = &ic_emlrtRSI;
  maxdimlen = 1;
  n = EoutQ->size[1];
  ndbl = EoutQ->data[0];
  if (EoutQ->size[1] > 1) {
    if (muDoubleScalarIsNaN(EoutQ->data[0])) {
      e_st.site = &wb_emlrtRSI;
      overflow = (EoutQ->size[1] > 2147483646);
      if (overflow) {
        f_st.site = &nb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      ix = 2;
      exitg3 = false;
      while ((!exitg3) && (ix <= n)) {
        maxdimlen = ix;
        if (!muDoubleScalarIsNaN(EoutQ->data[ix - 1])) {
          ndbl = EoutQ->data[ix - 1];
          exitg3 = true;
        } else {
          ix++;
        }
      }
    }

    if (maxdimlen < EoutQ->size[1]) {
      e_st.site = &vb_emlrtRSI;
      overflow = ((!(maxdimlen + 1 > EoutQ->size[1])) && (EoutQ->size[1] >
        2147483646));
      if (overflow) {
        f_st.site = &nb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (maxdimlen + 1 <= n) {
        if (EoutQ->data[maxdimlen] > ndbl) {
          ndbl = EoutQ->data[maxdimlen];
        }

        maxdimlen++;
      }
    }
  }

  linspace(0.7 * mtmp, 0.7 * ndbl, QInterAB);

  /* Building the histogram boxes */
  st.site = &w_emlrtRSI;
  hist(&st, QIxAuxAB, QInterAB, QEyeAB);

  /* filling up the boxes with samples that fit on them. */
  /* The same process described for the uper level will be done at */
  /* the middle and lower eyes levels. */
  /* What we are looking for here are not where exist the */
  /* occurrences of values. The eye is where there is not samples, */
  /* this means, the decission level is a reagion between actual */
  /* levels thus this reagion does not contain any signal. */
  /* Changing zeros to one - Zeros compose the eye region */
  /* Changing zeros to one - Zeros compose the eye region */
  /* Starting variables that will be used to identify the eye */
  /* diagram. */
  CountAB = 1.0;
  QCountAB = 1.0;
  for (i0 = 0; i0 < 100; i0++) {
    b_EyeAB[i0] = !(EyeAB[i0] != 0.0);
    b_QEyeAB[i0] = !(QEyeAB[i0] != 0.0);
    EyeAB[i0] = 0.0;
    QEyeAB[i0] = 0.0;
  }

  for (i0 = 0; i0 < 100; i0++) {
    SeqFinAB[i0] = 0.0;
  }

  for (i0 = 0; i0 < 100; i0++) {
    QSeqFinAB[i0] = 0.0;
  }

  SeqIniAB = 1;
  QSeqIniAB = 1;

  /* The for loop will take account of every box with ones. It is */
  /* important to take note that the not operator was used in this */
  /* vector, therefore ones means zeros (the eye diagram - */
  /* possibly) and zeros means values abouve zeroa (not the eye). */
  kk = 0;
  while (kk < 100) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);

    /* For every box */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 1, b_EyeAB[kk])) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 3);

      /* if it contains "1" */
      if (!((SeqIniAB >= 1) && (SeqIniAB <= 100))) {
        emlrtDynamicBoundsCheckR2012b(SeqIniAB, 1, 100, &j_emlrtBCI, sp);
      }

      EyeAB[SeqIniAB - 1] = CountAB;

      /* count this element as part of a consecutive sequency */
      CountAB++;

      /* adds one to the counter of consecutive elements "1" */
      if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 2, 1 + kk == 100)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 4);

        /* if the current box is the last box we got to an end */
        SeqFinAB[SeqIniAB - 1] = 100.0;

        /* The final sequency element is equal to its possition (kk) */
      }
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 5);

      /* else if the current box contains "0" */
      if (!((SeqIniAB >= 1) && (SeqIniAB <= 100))) {
        emlrtDynamicBoundsCheckR2012b(SeqIniAB, 1, 100, &i_emlrtBCI, sp);
      }

      SeqFinAB[SeqIniAB - 1] = (1.0 + (real_T)kk) - 1.0;

      /* the previous element was the last element of a consecutive sequency of ones */
      SeqIniAB++;

      /* adds one to the counter of consecutive number (take in account how many sequencies there are) */
      CountAB = 1.0;

      /* reset the counter of consecutive elements to mark the start of a new consecutive sequence */
    }

    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 3, b_QEyeAB[kk])) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 6);

      /* if it contains "1" */
      if (!((QSeqIniAB >= 1) && (QSeqIniAB <= 100))) {
        emlrtDynamicBoundsCheckR2012b(QSeqIniAB, 1, 100, &h_emlrtBCI, sp);
      }

      QEyeAB[QSeqIniAB - 1] = QCountAB;

      /* count this element as part of a consecutive sequency */
      QCountAB++;

      /* adds one to the counter of consecutive elements "1" */
      if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 4, 1 + kk == 100)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 7);

        /* if the current box is the last box we got to an end */
        QSeqFinAB[QSeqIniAB - 1] = 100.0;

        /* The final sequency element is equal to its possition (kk) */
      }
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 8);

      /* else if the current box contains "0" */
      if (!((QSeqIniAB >= 1) && (QSeqIniAB <= 100))) {
        emlrtDynamicBoundsCheckR2012b(QSeqIniAB, 1, 100, &g_emlrtBCI, sp);
      }

      QSeqFinAB[QSeqIniAB - 1] = (1.0 + (real_T)kk) - 1.0;

      /* the previous element was the last element of a consecutive sequency of ones */
      QSeqIniAB++;

      /* adds one to the counter of consecutive number (take in account how many sequencies there are) */
      QCountAB = 1.0;

      /* reset the counter of consecutive elements to mark the start of a new consecutive sequence */
    }

    kk++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 9);

  /* If the eye is open, which means there is a clear difference */
  /* between adjacent levels, the eye diagram will be the longest */
  /* sequence of ones. */
  mtmp = EyeAB[0];
  maxdimlen = 0;
  for (ix = 1; ix + 1 < 101; ix++) {
    if (EyeAB[ix] > mtmp) {
      mtmp = EyeAB[ix];
      maxdimlen = ix;
    }
  }

  *MaxValAB = mtmp;
  *LocMaxAB = maxdimlen + 1;
  if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 0, maxdimlen + 1 < 2) ||
      covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 1, mtmp < 2.0)) {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 0, true);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 5, true);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 10);

    /* if any sequency was found or there is just one sequency it is a error thus */
    LevDec3 = 0.1;

    /* the decission level will be by default 0.67. Also, the other variables will */
    *LocMaxAB = 1.0;

    /* will be set with values to not cause errors in the future */
    SeqFinAB[0] = 2.0;
    *MaxValAB = 0.0;
    InterAB[0] = 0.1;
  } else {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 0, false);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 5, false);

    /* if a sequency was found the middle of the eye will be the middle of the sequency */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 6, (real_T)(int8_T)
                   SeqFinAB[maxdimlen] - mtmp / 2.0 < 1.0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 11);

      /* if for some reason the final element of the sequency minus the half of its */
      LevDec3 = 0.1;

      /* length results in a negative value, something went very wrong, and by */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 12);

      /* default it will be set to 0.7 */
      mtmp = muDoubleScalarRound((real_T)(int8_T)SeqFinAB[maxdimlen] - mtmp /
        2.0);
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &s_emlrtDCI, sp);
      }

      i0 = (int32_T)mtmp;
      if (!((i0 >= 1) && (i0 <= 100))) {
        emlrtDynamicBoundsCheckR2012b(i0, 1, 100, &w_emlrtBCI, sp);
      }

      LevDec3 = InterAB[i0 - 1];

      /* Otherwise, the decission level is the middle of the sequency */
    }
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 13);
  mtmp = QEyeAB[0];
  maxdimlen = 0;
  for (ix = 1; ix + 1 < 101; ix++) {
    if (QEyeAB[ix] > mtmp) {
      mtmp = QEyeAB[ix];
      maxdimlen = ix;
    }
  }

  *QMaxValAB = mtmp;
  *QLocMaxAB = maxdimlen + 1;
  if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 2, maxdimlen + 1 < 2) ||
      covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 3, mtmp < 2.0)) {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 1, true);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 7, true);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 14);

    /* if any sequency was found or there is just one sequency it is a error thus */
    QLevDec3 = 0.1;

    /* the decission level will be by default 0.67. Also, the other variables will */
    *QLocMaxAB = 1.0;

    /* will be set with values to not cause errors in the future */
    QSeqFinAB[0] = 2.0;
    *QMaxValAB = 0.0;
    QInterAB[0] = 0.1;
  } else {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 1, false);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 7, false);

    /* if a sequency was found the middle of the eye will be the middle of the sequency */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 8, (real_T)(int8_T)
                   QSeqFinAB[maxdimlen] - mtmp / 2.0 < 1.0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 15);

      /* if for some reason the final element of the sequency minus the half of its */
      QLevDec3 = 0.1;

      /* length results in a negative value, something went very wrong, and by */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 16);

      /* default it will be set to 0.7 */
      mtmp = muDoubleScalarRound((real_T)(int8_T)QSeqFinAB[maxdimlen] - mtmp /
        2.0);
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &t_emlrtDCI, sp);
      }

      i0 = (int32_T)mtmp;
      if (!((i0 >= 1) && (i0 <= 100))) {
        emlrtDynamicBoundsCheckR2012b(i0, 1, 100, &x_emlrtBCI, sp);
      }

      QLevDec3 = QInterAB[i0 - 1];

      /* Otherwise, the decission level is the middle of the sequency */
    }
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 17);

  /* another way to measure the eye opening is the get all the */
  /* boxes and find all peaks on it, that will be a plato created */
  /* by the sequences of ones (which was zeros). From thos peaks, */
  /* the eye diagram will be the longer of them hence it will take */
  /* the most part of the vector that store the findpeaks result. */
  /* Thus, the middle of the eye will be basically the middle of */
  /* the peaks vector. */
  idx = 0;
  for (i0 = 0; i0 < 2; i0++) {
    ii_size[i0] = iv0[i0];
  }

  maxdimlen = 1;
  exitg2 = false;
  while ((!exitg2) && (maxdimlen < 101)) {
    b_guard2 = false;
    if (b_EyeAB[maxdimlen - 1]) {
      idx++;
      ii_data[idx - 1] = (int8_T)maxdimlen;
      if (idx >= 100) {
        exitg2 = true;
      } else {
        b_guard2 = true;
      }
    } else {
      b_guard2 = true;
    }

    if (b_guard2) {
      maxdimlen++;
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

  st.site = &x_emlrtRSI;
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 9, covrtLogMcdc
                 (&emlrtCoverageInstance, 0U, 0U, 2, !covrtLogCond
                  (&emlrtCoverageInstance, 0U, 0U, 4, any(&st, b_ii_data,
          b_ii_size))))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 18);

    /* if for some reason there are no peaks, something went wrong. */
    /* LocAB = 1; */
    LevelDec3 = 0.1;

    /* mean(Levels(3:4));                       %by default the decission level will be set to 0.65 */
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 19);
    LevelDec3 = LevDec3;
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 20);
  idx = 0;
  for (i0 = 0; i0 < 2; i0++) {
    ii_size[i0] = iv0[i0];
  }

  maxdimlen = 1;
  exitg1 = false;
  while ((!exitg1) && (maxdimlen < 101)) {
    b_guard1 = false;
    if (b_QEyeAB[maxdimlen - 1]) {
      idx++;
      ii_data[idx - 1] = (int8_T)maxdimlen;
      if (idx >= 100) {
        exitg1 = true;
      } else {
        b_guard1 = true;
      }
    } else {
      b_guard1 = true;
    }

    if (b_guard1) {
      maxdimlen++;
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

  st.site = &y_emlrtRSI;
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 10, covrtLogMcdc
                 (&emlrtCoverageInstance, 0U, 0U, 3, !covrtLogCond
                  (&emlrtCoverageInstance, 0U, 0U, 5, any(&st, b_ii_data,
          c_ii_size))))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 21);

    /* if for some reason there are no peaks, something went wrong. */
    /* QLocAB = 1; */
    QLevelDec3 = 0.1;

    /* mean(Levels(3:4));                       %by default the decission level will be set to 0.65 */
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 22);
    QLevelDec3 = QLevDec3;
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 23);

  /* ########################################################################## */
  i0 = (int8_T)SeqFinAB[(int32_T)*LocMaxAB - 1];
  if (!((i0 >= 1) && (i0 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i0, 1, 100, &y_emlrtBCI, sp);
  }

  mtmp = muDoubleScalarRound((real_T)(int8_T)SeqFinAB[(int32_T)*LocMaxAB - 1] - *
    MaxValAB);
  if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
    emlrtIntegerCheckR2012b(mtmp, &u_emlrtDCI, sp);
  }

  i2 = (int32_T)mtmp;
  if (!((i2 >= 1) && (i2 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i2, 1, 100, &ab_emlrtBCI, sp);
  }

  *AberLevI = InterAB[i0 - 1] - InterAB[i2 - 1];
  *ValsLevI = LevDec3;
  i0 = (int8_T)QSeqFinAB[(int32_T)*QLocMaxAB - 1];
  if (!((i0 >= 1) && (i0 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i0, 1, 100, &bb_emlrtBCI, sp);
  }

  mtmp = muDoubleScalarRound((real_T)(int8_T)QSeqFinAB[(int32_T)*QLocMaxAB - 1]
    - *QMaxValAB);
  if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
    emlrtIntegerCheckR2012b(mtmp, &v_emlrtDCI, sp);
  }

  i2 = (int32_T)mtmp;
  if (!((i2 >= 1) && (i2 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i2, 1, 100, &cb_emlrtBCI, sp);
  }

  *AberLevQ = QInterAB[i0 - 1] - QInterAB[i2 - 1];
  *ValsLevQ = QLevDec3;

  /*     %% Ploting the result for qualitative analizes */
  /* if ThisCarr==126 */
  /* EyeToPlot(CurrentTest,1:length([EoutI EoutQ])) = [EoutI EoutQ]; */
  /* save(['savingforplotingeye' num2str(VetSnr)],'EyeToPlot','VetSnr','IfftOrSum','UsedModula','T','NPPB'); */
  /* end */
  loop_ub = TxDataMat->size[1];
  i0 = TxDataMat->size[0];
  if (ThisCarr != (int32_T)muDoubleScalarFloor(ThisCarr)) {
    emlrtIntegerCheckR2012b(ThisCarr, &f_emlrtDCI, sp);
  }

  maxdimlen = (int32_T)ThisCarr;
  if (!((maxdimlen >= 1) && (maxdimlen <= i0))) {
    emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i0, &f_emlrtBCI, sp);
  }

  i0 = EmeaI->size[0] * EmeaI->size[1];
  EmeaI->size[0] = 1;
  EmeaI->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)EmeaI, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    EmeaI->data[EmeaI->size[0] * i0] = TxDataMat->data[(maxdimlen +
      TxDataMat->size[0] * i0) - 1];
  }

  emxInit_real_T(sp, &b_TxDataMat, 2, &emlrtRTEI, true);
  ndbl = NbDQPSK / 2.0;
  st.site = &ab_emlrtRSI;
  i0 = TxDataMat->size[1];
  b_st.site = &ac_emlrtRSI;
  c_st.site = &dc_emlrtRSI;
  assertValidSizeArg(&c_st, ndbl);
  c_st.site = &dc_emlrtRSI;
  assertValidSizeArg(&c_st, CurTesSiz);
  e_sz[0] = (int32_T)ndbl;
  e_sz[1] = (int32_T)CurTesSiz;
  loop_ub = TxDataMat->size[1];
  i2 = b_TxDataMat->size[0] * b_TxDataMat->size[1];
  b_TxDataMat->size[0] = 1;
  b_TxDataMat->size[1] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)b_TxDataMat, i2, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    b_TxDataMat->data[b_TxDataMat->size[0] * i2] = TxDataMat->data[((int32_T)
      ThisCarr + TxDataMat->size[0] * i2) - 1];
  }

  for (i2 = 0; i2 < 2; i2++) {
    varargin_1[i2] = (uint32_T)b_TxDataMat->size[i2];
  }

  emxFree_real_T(&b_TxDataMat);
  maxdimlen = 1;
  if ((int32_T)varargin_1[1] > 1) {
    maxdimlen = (int32_T)varargin_1[1];
  }

  if (i0 > maxdimlen) {
    maxdimlen = TxDataMat->size[1];
  }

  if ((int32_T)ndbl > maxdimlen) {
    b_st.site = &bc_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)CurTesSiz > maxdimlen) {
    b_st.site = &bc_emlrtRSI;
    error(&b_st);
  }

  for (i2 = 0; i2 < 2; i2++) {
    i1 = e_sz[i2];
    if (!(i1 >= 0)) {
      emlrtNonNegativeCheckR2012b(i1, &q_emlrtDCI, &st);
    }
  }

  i2 = b_EmeaI->size[0] * b_EmeaI->size[1];
  b_EmeaI->size[0] = (int32_T)ndbl;
  b_EmeaI->size[1] = (int32_T)CurTesSiz;
  emxEnsureCapacity(&st, (emxArray__common *)b_EmeaI, i2, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (i0 == b_EmeaI->size[0] * b_EmeaI->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &m_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &cc_emlrtRSI;
  i2 = TxDataMat->size[1];
  if (1 > i2) {
    overflow = false;
  } else {
    i2 = TxDataMat->size[1];
    overflow = (i2 > 2147483646);
  }

  if (overflow) {
    c_st.site = &nb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= i0; idx++) {
    b_EmeaI->data[idx] = EmeaI->data[idx];
  }

  mtmp = (real_T)b_EmeaI->size[0] - SyncPeriod;
  if (1.0 + SyncPeriod > mtmp) {
    i2 = 1;
    i0 = 1;
  } else {
    i0 = b_EmeaI->size[0];
    ndbl = 1.0 + SyncPeriod;
    if (ndbl != (int32_T)muDoubleScalarFloor(ndbl)) {
      emlrtIntegerCheckR2012b(ndbl, &e_emlrtDCI, sp);
    }

    i2 = (int32_T)ndbl;
    if (!((i2 >= 1) && (i2 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &e_emlrtBCI, sp);
    }

    i0 = b_EmeaI->size[0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &e_emlrtDCI, sp);
    }

    i1 = (int32_T)mtmp;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &e_emlrtBCI, sp);
    }

    i0 = i1 + 1;
  }

  emxInit_real_T(sp, &f_EmeaI, 2, &emlrtRTEI, true);
  st.site = &bb_emlrtRSI;
  i1 = b_EmeaI->size[1];
  mtmp = (real_T)(i0 - i2) * (real_T)i1;
  i1 = b_EmeaI->size[1];
  nx = (i0 - i2) * i1;
  b_st.site = &ac_emlrtRSI;
  c_st.site = &dc_emlrtRSI;
  assertValidSizeArg(&c_st, mtmp);
  loop_ub = b_EmeaI->size[1];
  i1 = f_EmeaI->size[0] * f_EmeaI->size[1];
  f_EmeaI->size[0] = i0 - i2;
  f_EmeaI->size[1] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)f_EmeaI, i1, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_loop_ub = i0 - i2;
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      f_EmeaI->data[i3 + f_EmeaI->size[0] * i1] = b_EmeaI->data[((i2 + i3) +
        b_EmeaI->size[0] * i1) - 1];
    }
  }

  for (i1 = 0; i1 < 2; i1++) {
    varargin_1[i1] = (uint32_T)f_EmeaI->size[i1];
  }

  emxFree_real_T(&f_EmeaI);
  maxdimlen = (int32_T)varargin_1[0];
  if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
    maxdimlen = (int32_T)varargin_1[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (1 > maxdimlen) {
    b_st.site = &bc_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)mtmp > maxdimlen) {
    b_st.site = &bc_emlrtRSI;
    error(&b_st);
  }

  i1 = TxDataOdd->size[0] * TxDataOdd->size[1];
  TxDataOdd->size[0] = 1;
  TxDataOdd->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(&st, (emxArray__common *)TxDataOdd, i1, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if (nx == TxDataOdd->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &m_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &cc_emlrtRSI;
  if ((!(1 > nx)) && (nx > 2147483646)) {
    c_st.site = &nb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= nx; idx++) {
    TxDataOdd->data[idx] = b_EmeaI->data[((i2 + idx % (i0 - i2)) + b_EmeaI->
      size[0] * (idx / (i0 - i2))) - 1];
  }

  loop_ub = TxDataMat->size[1];
  i0 = TxDataMat->size[0];
  mtmp = ThisCarr + NumCarr;
  if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
    emlrtIntegerCheckR2012b(mtmp, &d_emlrtDCI, sp);
  }

  maxdimlen = (int32_T)mtmp;
  if (!((maxdimlen >= 1) && (maxdimlen <= i0))) {
    emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i0, &d_emlrtBCI, sp);
  }

  i0 = EmeaI->size[0] * EmeaI->size[1];
  EmeaI->size[0] = 1;
  EmeaI->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)EmeaI, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    EmeaI->data[EmeaI->size[0] * i0] = TxDataMat->data[(maxdimlen +
      TxDataMat->size[0] * i0) - 1];
  }

  emxInit_real_T(sp, &c_TxDataMat, 2, &emlrtRTEI, true);
  ndbl = NbDQPSK / 2.0;
  st.site = &cb_emlrtRSI;
  i0 = TxDataMat->size[1];
  b_st.site = &ac_emlrtRSI;
  c_st.site = &dc_emlrtRSI;
  assertValidSizeArg(&c_st, ndbl);
  c_st.site = &dc_emlrtRSI;
  assertValidSizeArg(&c_st, CurTesSiz);
  f_sz[0] = (int32_T)ndbl;
  f_sz[1] = (int32_T)CurTesSiz;
  loop_ub = TxDataMat->size[1];
  maxdimlen = (int32_T)(ThisCarr + NumCarr);
  i2 = c_TxDataMat->size[0] * c_TxDataMat->size[1];
  c_TxDataMat->size[0] = 1;
  c_TxDataMat->size[1] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)c_TxDataMat, i2, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i2 = 0; i2 < loop_ub; i2++) {
    c_TxDataMat->data[c_TxDataMat->size[0] * i2] = TxDataMat->data[(maxdimlen +
      TxDataMat->size[0] * i2) - 1];
  }

  for (i2 = 0; i2 < 2; i2++) {
    varargin_1[i2] = (uint32_T)c_TxDataMat->size[i2];
  }

  emxFree_real_T(&c_TxDataMat);
  maxdimlen = 1;
  if ((int32_T)varargin_1[1] > 1) {
    maxdimlen = (int32_T)varargin_1[1];
  }

  if (i0 > maxdimlen) {
    maxdimlen = TxDataMat->size[1];
  }

  if ((int32_T)ndbl > maxdimlen) {
    b_st.site = &bc_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)CurTesSiz > maxdimlen) {
    b_st.site = &bc_emlrtRSI;
    error(&b_st);
  }

  for (i2 = 0; i2 < 2; i2++) {
    i1 = f_sz[i2];
    if (!(i1 >= 0)) {
      emlrtNonNegativeCheckR2012b(i1, &q_emlrtDCI, &st);
    }
  }

  i2 = b_EmeaI->size[0] * b_EmeaI->size[1];
  b_EmeaI->size[0] = (int32_T)ndbl;
  b_EmeaI->size[1] = (int32_T)CurTesSiz;
  emxEnsureCapacity(&st, (emxArray__common *)b_EmeaI, i2, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (i0 == b_EmeaI->size[0] * b_EmeaI->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &m_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &cc_emlrtRSI;
  i2 = TxDataMat->size[1];
  if (1 > i2) {
    overflow = false;
  } else {
    i2 = TxDataMat->size[1];
    overflow = (i2 > 2147483646);
  }

  if (overflow) {
    c_st.site = &nb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= i0; idx++) {
    b_EmeaI->data[idx] = EmeaI->data[idx];
  }

  mtmp = (real_T)b_EmeaI->size[0] - SyncPeriod;
  if (1.0 + SyncPeriod > mtmp) {
    i2 = 1;
    i0 = 1;
  } else {
    i0 = b_EmeaI->size[0];
    ndbl = 1.0 + SyncPeriod;
    if (ndbl != (int32_T)muDoubleScalarFloor(ndbl)) {
      emlrtIntegerCheckR2012b(ndbl, &c_emlrtDCI, sp);
    }

    i2 = (int32_T)ndbl;
    if (!((i2 >= 1) && (i2 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &c_emlrtBCI, sp);
    }

    i0 = b_EmeaI->size[0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &c_emlrtDCI, sp);
    }

    i1 = (int32_T)mtmp;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &c_emlrtBCI, sp);
    }

    i0 = i1 + 1;
  }

  emxInit_real_T(sp, &g_EmeaI, 2, &emlrtRTEI, true);
  st.site = &db_emlrtRSI;
  i1 = b_EmeaI->size[1];
  mtmp = (real_T)(i0 - i2) * (real_T)i1;
  i1 = b_EmeaI->size[1];
  nx = (i0 - i2) * i1;
  b_st.site = &ac_emlrtRSI;
  c_st.site = &dc_emlrtRSI;
  assertValidSizeArg(&c_st, mtmp);
  loop_ub = b_EmeaI->size[1];
  i1 = g_EmeaI->size[0] * g_EmeaI->size[1];
  g_EmeaI->size[0] = i0 - i2;
  g_EmeaI->size[1] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)g_EmeaI, i1, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_loop_ub = i0 - i2;
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      g_EmeaI->data[i3 + g_EmeaI->size[0] * i1] = b_EmeaI->data[((i2 + i3) +
        b_EmeaI->size[0] * i1) - 1];
    }
  }

  for (i1 = 0; i1 < 2; i1++) {
    varargin_1[i1] = (uint32_T)g_EmeaI->size[i1];
  }

  emxFree_real_T(&g_EmeaI);
  maxdimlen = (int32_T)varargin_1[0];
  if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
    maxdimlen = (int32_T)varargin_1[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (1 > maxdimlen) {
    b_st.site = &bc_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)mtmp > maxdimlen) {
    b_st.site = &bc_emlrtRSI;
    error(&b_st);
  }

  i1 = TxDataEven->size[0] * TxDataEven->size[1];
  TxDataEven->size[0] = 1;
  TxDataEven->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(&st, (emxArray__common *)TxDataEven, i1, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if (nx == TxDataEven->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &m_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &cc_emlrtRSI;
  if ((!(1 > nx)) && (nx > 2147483646)) {
    c_st.site = &nb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= nx; idx++) {
    TxDataEven->data[idx] = b_EmeaI->data[((i2 + idx % (i0 - i2)) +
      b_EmeaI->size[0] * (idx / (i0 - i2))) - 1];
  }

  emxFree_real_T(&b_EmeaI);

  /*     %%  Ploting some results for qualitative analizes */
  /*              PrintInfo(Ploting*28,t(1:length(EoutI)),Txaux1,Txaux2,EoutI,... */
  /*                            EoutA,EoutB,EoutQ,EoutC,EoutD,real(Ui),real(Uq)); */
  /*                        a=1; */
  /*     %%               Recovering the Information */
  /* After passing the optical signal to the eletrical domain, for */
  /* actually detect the data withing the signal the following */
  /* steps are needed. */
  /*  */
  /* Finding Decission Levels: */
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
  /* Actualy Receiving Data: */
  /* Once the signal was processed the next step is through a */
  /* comparator decide the actual information received. */
  /*  */
  /*  */
  mtmp = NPPB / 2.0;
  st.site = &eb_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (muDoubleScalarIsNaN(mtmp) || muDoubleScalarIsNaN(NPPB)) {
    n = 1;
    anew = rtNaN;
    apnd = EoutI->size[1];
    overflow = false;
  } else if ((NPPB == 0.0) || ((mtmp < EoutI->size[1]) && (NPPB < 0.0)) ||
             ((EoutI->size[1] < mtmp) && (NPPB > 0.0))) {
    n = 0;
    anew = mtmp;
    apnd = EoutI->size[1];
    overflow = false;
  } else if (muDoubleScalarIsInf(mtmp)) {
    n = 1;
    anew = rtNaN;
    apnd = EoutI->size[1];
    if (muDoubleScalarIsInf(NPPB) || (mtmp == EoutI->size[1])) {
      overflow = true;
    } else {
      overflow = false;
    }

    overflow = !overflow;
  } else if (muDoubleScalarIsInf(NPPB)) {
    n = 1;
    anew = mtmp;
    apnd = EoutI->size[1];
    overflow = false;
  } else {
    anew = mtmp;
    ndbl = muDoubleScalarFloor(((real_T)EoutI->size[1] - mtmp) / NPPB + 0.5);
    apnd = mtmp + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (real_T)EoutI->size[1];
    } else {
      cdiff = (real_T)EoutI->size[1] - apnd;
    }

    absa = muDoubleScalarAbs(mtmp);
    maxdimlen = EoutI->size[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, maxdimlen)) {
      ndbl++;
      apnd = EoutI->size[1];
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

  c_st.site = &fc_emlrtRSI;
  if (!overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &l_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      0);
  }

  i0 = EmeaI->size[0] * EmeaI->size[1];
  EmeaI->size[0] = 1;
  EmeaI->size[1] = n;
  emxEnsureCapacity(&b_st, (emxArray__common *)EmeaI, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (n > 0) {
    EmeaI->data[0] = anew;
    if (n > 1) {
      EmeaI->data[n - 1] = apnd;
      maxdimlen = (n - 1) / 2;
      c_st.site = &gc_emlrtRSI;
      for (idx = 1; idx < maxdimlen; idx++) {
        ndbl = (real_T)idx * NPPB;
        EmeaI->data[idx] = anew + ndbl;
        EmeaI->data[(n - idx) - 1] = apnd - ndbl;
      }

      if (maxdimlen << 1 == n - 1) {
        EmeaI->data[maxdimlen] = (anew + apnd) / 2.0;
      } else {
        ndbl = (real_T)maxdimlen * NPPB;
        EmeaI->data[maxdimlen] = anew + ndbl;
        EmeaI->data[maxdimlen + 1] = apnd - ndbl;
      }
    }
  }

  /* ThisDataPos  = 1:NPPB:length(EoutI); */
  i0 = DataOdd->size[0] * DataOdd->size[1];
  DataOdd->size[0] = 1;
  DataOdd->size[1] = EmeaI->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)DataOdd, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = EmeaI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    DataOdd->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  i0 = EmeaQ->size[0] * EmeaQ->size[1];
  EmeaQ->size[0] = 1;
  EmeaQ->size[1] = EmeaI->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)EmeaQ, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = EmeaI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    EmeaQ->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  kk = 0;
  while (kk <= EmeaI->size[1] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 24);

    /* length(EoutI(ThisDataSize))                                    %The comparison process will be made for each symbol period */
    /* MeanOfData = mean(EoutI((kk-1)+SymLocI(1))); */
    ndbl = NPPB / 2.0;
    i0 = EoutI->size[1];
    mtmp = ((1.0 + (real_T)kk) - 1.0) * NPPB + NPPB / 2.0;
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &b_emlrtDCI, sp);
    }

    i2 = (int32_T)mtmp;
    if (!((i2 >= 1) && (i2 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &b_emlrtBCI, sp);
    }

    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 11, EoutI->data[(int32_T)
                   (((1.0 + (real_T)kk) - 1.0) * NPPB + ndbl) - 1] > LevelDec3))
    {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 25);

      /* EyeOpenLowI+EyeOpenI/2                     %If it is the uper level the incoming data */
      i0 = DataOdd->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &ib_emlrtBCI, sp);
      }

      DataOdd->data[kk] = 1.0;

      /* is 1 */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 26);

      /* If it is the lowest level the incoming data */
      i0 = DataOdd->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &hb_emlrtBCI, sp);
      }

      DataOdd->data[kk] = 0.0;

      /* is 0 */
    }

    /* MeanOfData = mean(EoutI((kk-1)*NPPB+(NPPB/2))); */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 12, EoutI->data[(int32_T)
                   (((1.0 + (real_T)kk) - 1.0) * NPPB + ndbl) - 1] > LevDefDpqsk))
    {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 27);

      /* EyeOpenLowI+EyeOpenI/2                     %If it is the uper level the incoming data */
      i0 = EmeaQ->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &kb_emlrtBCI, sp);
      }

      EmeaQ->data[kk] = 1.0;

      /* is 1 */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 28);

      /* If it is the lowest level the incoming data */
      i0 = EmeaQ->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &jb_emlrtBCI, sp);
      }

      EmeaQ->data[kk] = 0.0;

      /* is 0 */
    }

    kk++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 29);

  /* The identical process just described above will also be used */
  /* to recover the data at the even positions. */
  /*  */
  /* As this process is also statistical, first we reshape the */
  /* income vector to analyze all periods at the same time. */
  /*                  EyeSymMatQ = reshape(EoutQ(1+SyncPeriod*NPPB:end-SyncPeriod*... */
  /*                      NPPB),NPPB,NbDQPSK/2-2*SyncPeriod); */
  /*                  %Then we take the values that compose the decision level */
  /*                  %because they will mark the point of symmetry. */
  /*                  % */
  /*                  %Firstly it was set the interval in which the histogram will be */
  /*                  %build. It is based on the number of samples per bit period. */
  /*                  IntervalQ = linspace(min(EoutQ(1+SyncPeriod*NPPB:end-... */
  /*                      SyncPeriod*NPPB)),max(EoutQ(1+SyncPeriod*NPPB:end-... */
  /*                      SyncPeriod*NPPB)),2*NPPB); */
  /*                  %Therefore, the MATLAB hist function returns the number of */
  /*                  %occurrence of each interval. */
  /*                  EyeMaxQ = hist(EoutQ,IntervalQ); */
  /*                  EyeMaxauxQ = [0 EyeMaxI 0];                                    %Zeros are added at the EyeMax to auxiliate the finding peaks process */
  /*                  [~,EyeLocQ] = findpeaks(EyeMaxauxQ,'MinPeakDistance',NPPB/4,... */
  /*                      'SortStr','descend','NPeaks',2);%The peaks on the Eye profile will be the levels at the Eyes limit */
  /*                  ValToSeekQ = IntervalQ(EyeLocQ-1); */
  /*                  ValToSeekQ = sort(ValToSeekQ,'ascend'); */
  /*                  OccuCountQ = zeros(1,size(EyeSymMatQ,1));                      %Auxiliar Variable for accounting. */
  /*                  for kk=1:size(EyeSymMatQ,1)                                    %For every sample within a symbol period */
  /*                      OccuCountQ(kk) = OccuCountQ(kk)+sum((EyeSymMatI(kk,:)>=... */
  /*                          LowSymPer*ValToSeekQ(1))&(EyeSymMatQ(kk,:)<=UpeSymPer*... */
  /*                          ValToSeekQ(1)));%Account all occurencies of the valeu 1 */
  /*                      OccuCountQ(kk) = OccuCountQ(kk)+sum((EyeSymMatQ(kk,:)>=... */
  /*                          LowSymPer*ValToSeekQ(2))&(EyeSymMatQ(kk,:)<=UpeSymPer*... */
  /*                          ValToSeekQ(2)));%Account all occurencies of the valeu 2 */
  /*                  end */
  /*                  %             [~,SymLocQ] = findpeaks(OccuCountQ,'SortStr','descend');       %The peak on the Eye profile will be the Symmetry level */
  /*                  [SymLocQ] = round(mean(find(ismember(OccuCountQ,max(... */
  /*                      OccuCountQ))))); */
  /* ############################################################## */
  /* ######################Important############################### */
  /* The ber results for the Data Even is not as good as the */
  /* results of the Data Odd. One possible reason is the decision */
  /* point of symmetry hence, for testing, we change SymLocQ to */
  /* SymLocI for evaluation of improvement. It is expected as bouth */
  /* signal will the same point of symetry will perform in an equal */
  /* way. If it is confirmed the creation of SymLocQ will be */
  /* erased. */
  /* ############################################################## */
  /* ############################################################## */
  mtmp = NPPB / 2.0;
  st.site = &fb_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  if (muDoubleScalarIsNaN(mtmp) || muDoubleScalarIsNaN(NPPB)) {
    n = 1;
    anew = rtNaN;
    apnd = EoutQ->size[1];
    overflow = false;
  } else if ((NPPB == 0.0) || ((mtmp < EoutQ->size[1]) && (NPPB < 0.0)) ||
             ((EoutQ->size[1] < mtmp) && (NPPB > 0.0))) {
    n = 0;
    anew = mtmp;
    apnd = EoutQ->size[1];
    overflow = false;
  } else if (muDoubleScalarIsInf(mtmp)) {
    n = 1;
    anew = rtNaN;
    apnd = EoutQ->size[1];
    if (muDoubleScalarIsInf(NPPB) || (mtmp == EoutQ->size[1])) {
      overflow = true;
    } else {
      overflow = false;
    }

    overflow = !overflow;
  } else if (muDoubleScalarIsInf(NPPB)) {
    n = 1;
    anew = mtmp;
    apnd = EoutQ->size[1];
    overflow = false;
  } else {
    anew = mtmp;
    ndbl = muDoubleScalarFloor(((real_T)EoutQ->size[1] - mtmp) / NPPB + 0.5);
    apnd = mtmp + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (real_T)EoutQ->size[1];
    } else {
      cdiff = (real_T)EoutQ->size[1] - apnd;
    }

    absa = muDoubleScalarAbs(mtmp);
    maxdimlen = EoutQ->size[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, maxdimlen)) {
      ndbl++;
      apnd = EoutQ->size[1];
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

  c_st.site = &fc_emlrtRSI;
  if (!overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &l_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      0);
  }

  i0 = EmeaI->size[0] * EmeaI->size[1];
  EmeaI->size[0] = 1;
  EmeaI->size[1] = n;
  emxEnsureCapacity(&b_st, (emxArray__common *)EmeaI, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (n > 0) {
    EmeaI->data[0] = anew;
    if (n > 1) {
      EmeaI->data[n - 1] = apnd;
      maxdimlen = (n - 1) / 2;
      c_st.site = &gc_emlrtRSI;
      for (idx = 1; idx < maxdimlen; idx++) {
        ndbl = (real_T)idx * NPPB;
        EmeaI->data[idx] = anew + ndbl;
        EmeaI->data[(n - idx) - 1] = apnd - ndbl;
      }

      if (maxdimlen << 1 == n - 1) {
        EmeaI->data[maxdimlen] = (anew + apnd) / 2.0;
      } else {
        ndbl = (real_T)maxdimlen * NPPB;
        EmeaI->data[maxdimlen] = anew + ndbl;
        EmeaI->data[maxdimlen + 1] = apnd - ndbl;
      }
    }
  }

  /* ThisDataPos  = 1:NPPB:length(EoutQ); */
  i0 = DataEven->size[0] * DataEven->size[1];
  DataEven->size[0] = 1;
  DataEven->size[1] = EmeaI->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)DataEven, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = EmeaI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    DataEven->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &DataEvenU, 2, &d_emlrtRTEI, true);

  /* Initialization of the vector that will store the income data */
  i0 = DataEvenU->size[0] * DataEvenU->size[1];
  DataEvenU->size[0] = 1;
  DataEvenU->size[1] = EmeaI->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)DataEvenU, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  loop_ub = EmeaI->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    DataEvenU->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  kk = 0;
  while (kk <= EmeaI->size[1] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 2, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 30);

    /* length(EoutQ(ThisDataSize))                                    %The comparison process will be made for each symbol period */
    /*                  MeanOfData = mean(EoutQ((kk-1)+SymLocI(1))); */
    ndbl = NPPB / 2.0;
    i0 = EoutQ->size[1];
    mtmp = ((1.0 + (real_T)kk) - 1.0) * NPPB + NPPB / 2.0;
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &emlrtDCI, sp);
    }

    i2 = (int32_T)mtmp;
    if (!((i2 >= 1) && (i2 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &emlrtBCI, sp);
    }

    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 13, EoutQ->data[(int32_T)
                   (((1.0 + (real_T)kk) - 1.0) * NPPB + ndbl) - 1] > QLevelDec3))
    {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 31);

      /* EyeOpenLowQ+EyeOpenQ/2                     %If it is the uper level the incoming data */
      i0 = DataEven->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &eb_emlrtBCI, sp);
      }

      DataEven->data[kk] = 1.0;

      /* is 1 */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 32);

      /* If it is the lowest level the incoming data */
      i0 = DataEven->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &db_emlrtBCI, sp);
      }

      DataEven->data[kk] = 0.0;

      /* is 0 */
    }

    /* MeanOfData = mean(EoutQ((kk-1)*NPPB+(NPPB/2))); */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 14, EoutQ->data[(int32_T)
                   (((1.0 + (real_T)kk) - 1.0) * NPPB + ndbl) - 1] > LevDefDpqsk))
    {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 33);

      /* EyeOpenLowI+EyeOpenI/2                     %If it is the uper level the incoming data */
      i0 = DataEvenU->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &gb_emlrtBCI, sp);
      }

      DataEvenU->data[kk] = 1.0;

      /* is 1 */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 34);

      /* If it is the lowest level the incoming data */
      i0 = DataEvenU->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &fb_emlrtBCI, sp);
      }

      DataEvenU->data[kk] = 0.0;

      /* is 0 */
    }

    kk++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&EmeaI);
  emxInit_boolean_T(sp, &r0, 2, &emlrtRTEI, true);
  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 2, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 35);

  /*     %%       Calculating the Bit Error Ratio (BER) */
  /* The final process here is to count the number of wrongdoings */
  /* of this whole process upon the transmited data for */
  /* quantitative analizes */
  st.site = &gb_emlrtRSI;
  xor(&st, TxDataOdd, DataOdd, r0);
  st.site = &gb_emlrtRSI;
  BitErrOdd1 = sum(&st, r0);

  /* Comparison between the Transmited and received and counting the differences */
  st.site = &hb_emlrtRSI;
  xor(&st, TxDataEven, DataEven, r0);
  st.site = &hb_emlrtRSI;
  BitErrEven1 = sum(&st, r0);

  /* Comparison between the Transmited and received and counting the differences */
  st.site = &ib_emlrtRSI;
  xor(&st, TxDataOdd, EmeaQ, r0);
  st.site = &ib_emlrtRSI;
  BitErrOdd4 = sum(&st, r0);

  /* Comparison between the Transmited and received and counting the differences */
  st.site = &jb_emlrtRSI;
  xor(&st, TxDataEven, DataEvenU, r0);
  st.site = &jb_emlrtRSI;
  BitErrEven4 = sum(&st, r0);

  /* Comparison between the Transmited and received and counting the differences */
  *BerDQPSK = (BitErrOdd1 + BitErrEven1) / ((NbDQPSK - 2.0 * SyncPeriod) *
    CurTesSiz);

  /* Calculating the ration of wrong bits and the total number of bits transmited */
  emxFree_boolean_T(&r0);
  emxFree_real_T(&DataEvenU);
  emxFree_real_T(&EmeaQ);
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 15, BitErrOdd4 + BitErrEven4 <
                 BitErrOdd1 + BitErrEven1)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 36);
    *BerDQPSK = (BitErrOdd4 + BitErrEven4) / ((NbDQPSK - 2.0 * SyncPeriod) *
      CurTesSiz);

    /* Calculating the ration of wrong bits and the total number of bits transmited */
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (RecDowDqpsk.c) */

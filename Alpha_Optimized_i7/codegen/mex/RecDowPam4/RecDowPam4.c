/*
 * RecDowPam4.c
 *
 * Code generation for function 'RecDowPam4'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "RecDowPam4_emxutil.h"
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
#include "RecDowPam4_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 426, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo b_emlrtRSI = { 424, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo c_emlrtRSI = { 423, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo d_emlrtRSI = { 421, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo e_emlrtRSI = { 343, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo f_emlrtRSI = { 320, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo g_emlrtRSI = { 308, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo h_emlrtRSI = { 296, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo i_emlrtRSI = { 170, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo j_emlrtRSI = { 166, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo k_emlrtRSI = { 161, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo l_emlrtRSI = { 152, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo m_emlrtRSI = { 145, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo n_emlrtRSI = { 96, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo o_emlrtRSI = { 94, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo p_emlrtRSI = { 92, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo q_emlrtRSI = { 89, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo r_emlrtRSI = { 67, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo s_emlrtRSI = { 62, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo t_emlrtRSI = { 60, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo u_emlrtRSI = { 5, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRSInfo v_emlrtRSI = { 23, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

static emlrtRSInfo w_emlrtRSI = { 101, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

static emlrtRSInfo x_emlrtRSI = { 39, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo y_emlrtRSI = { 61, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo ab_emlrtRSI = { 108, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo bb_emlrtRSI = { 131, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo db_emlrtRSI = { 13, "min",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo fb_emlrtRSI = { 140, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo gb_emlrtRSI = { 375, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo hb_emlrtRSI = { 347, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 300, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRTEInfo eb_emlrtRTEI = { 59, 5, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRTEInfo fb_emlrtRTEI = { 89, 1, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRTEInfo gb_emlrtRTEI = { 92, 1, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRTEInfo hb_emlrtRTEI = { 93, 1, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRTEInfo ib_emlrtRTEI = { 94, 4, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRTEInfo jb_emlrtRTEI = { 421, 1, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtRTEInfo lc_emlrtRTEI = { 71, 15, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRTEInfo mc_emlrtRTEI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo nc_emlrtRTEI = { 39, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo oc_emlrtRTEI = { 121, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo pc_emlrtRTEI = { 245, 27, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

static emlrtDCInfo e_emlrtDCI = { 5, 12, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 5, 12, "Ix1", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 5, 37, "Ix1", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo f_emlrtDCI = { 5, 37, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 59, 17, "Ix1", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 59, 17, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtDCInfo h_emlrtDCI = { 61, 19, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 61, 19, "IxAux", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo i_emlrtDCI = { 66, 10, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 66, 10, "Ix1", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo j_emlrtDCI = { 143, 15, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 143, 15, "Interval", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo k_emlrtDCI = { 143, 37, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 143, 37, "Interval", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo l_emlrtDCI = { 144, 9, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 144, 9, "Interval", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo m_emlrtDCI = { 144, 31, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 144, 31, "Interval", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtECInfo i_emlrtECI = { 2, 159, 17, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtECInfo j_emlrtECI = { 2, 164, 17, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtECInfo k_emlrtECI = { 2, 168, 17, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m"
};

static emlrtBCInfo qb_emlrtBCI = { 1, 100, 202, 9, "SeqOnesAB", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo rb_emlrtBCI = { 1, 100, 208, 9, "SeqFinAB", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo sb_emlrtBCI = { 1, 100, 214, 9, "SeqOnesCD", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo tb_emlrtBCI = { 1, 100, 220, 9, "SeqFinCD", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo ub_emlrtBCI = { 1, 100, 226, 9, "SeqOnesEF", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo vb_emlrtBCI = { 1, 100, 232, 9, "SeqFinEF", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo n_emlrtDCI = { 351, 12, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 351, 12, "Ix", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo o_emlrtDCI = { 420, 21, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 420, 21, "TxDataMat", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo p_emlrtDCI = { 422, 19, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 422, 19, "TxDataB", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo q_emlrtDCI = { 68, 62, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m",
  4 };

static emlrtDCInfo r_emlrtDCI = { 153, 9, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 153, 9, "Ix", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 159, 11, "IxAux", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 164, 11, "IxAux", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 168, 11, "IxAux", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo ec_emlrtBCI = { 1, 100, 253, 19, "InterAB", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo s_emlrtDCI = { 253, 19, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo fc_emlrtBCI = { 1, 100, 268, 19, "InterCD", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo t_emlrtDCI = { 268, 19, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo gc_emlrtBCI = { 1, 100, 283, 19, "InterEF", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtDCInfo u_emlrtDCI = { 283, 19, "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  1 };

static emlrtBCInfo hc_emlrtBCI = { -1, -1, 303, 29, "LocAB", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 315, 29, "LocCD", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 327, 29, "LocEF", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo kc_emlrtBCI = { 1, 100, 331, 17, "InterAB", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo lc_emlrtBCI = { 1, 100, 331, 49, "InterAB", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo mc_emlrtBCI = { 1, 100, 332, 17, "InterCD", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo nc_emlrtBCI = { 1, 100, 332, 49, "InterCD", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo oc_emlrtBCI = { 1, 100, 333, 17, "InterEF", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo pc_emlrtBCI = { 1, 100, 333, 49, "InterEF", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 337, 21, "LocAB", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 338, 21, "LocCD", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 339, 21, "LocEF", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 379, 9, "IxRec", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 381, 9, "IxRec", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 373, 9, "IxRec", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 375, 9, "IxRec", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 367, 9, "IxRec", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 369, 9, "IxRec", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 361, 9, "IxRec", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 363, 9, "IxRec", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 355, 9, "IxRec", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 357, 9, "IxRec", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 412, 9, "IxRecDef", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 414, 9, "IxRecDef", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 406, 9, "IxRecDef", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 408, 9, "IxRecDef", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 400, 9, "IxRecDef", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 402, 9, "IxRecDef", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 394, 9, "IxRecDef", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 396, 9, "IxRecDef", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 388, 9, "IxRecDef", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 390, 9, "IxRecDef", "RecDowPam4",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowPam4.m",
  0 };

/* Function Definitions */
void RecDowPam4(const emlrtStack *sp, emxArray_real_T *Ix1, real_T T, real_T Ta,
                real_T MaxNumStag, real_T StuffSampels, real_T NumAmosCP, real_T
                NPPB, real_T CurTesSiz, real_T Nb4Pam, real_T IntervalStep,
                real_T MinDist, real_T *DecLevDef1, real_T *DecLevDef2, real_T
                *DecLevDef3, const emxArray_real_T *TxDataMat, real_T ThisCarr,
                real_T IfftOrSum, real_T AddCP, real_T SyncPeriod, real_T DecMod,
                real_T *LevDec1, real_T *LevDec2, real_T *LevDec3,
                emxArray_real_T *Ix, real_T *Ber4PAM, emxArray_real_T *TxData,
                emxArray_real_T *IxRecDef, emxArray_real_T *IxRec, real_T
                *AberLev1, real_T *AberLev2, real_T *AberLev3, real_T *ValsLev1,
                real_T *ValsLev2, real_T *ValsLev3, real_T *ValsLev21, real_T
                *ValsLev22, real_T *ValsLev23, real_T InterAB[100], real_T
                InterCD[100], real_T InterEF[100], real_T SeqFinAB[100], real_T
                SeqFinCD[100], real_T SeqFinEF[100], real_T *LocMaxAB, real_T
                *LocMaxCD, real_T *LocMaxEF, real_T *MaxValAB, real_T *MaxValCD,
                real_T *MaxValEF, real_T Levels_data[], int32_T Levels_size[2])
{
  real_T AuxSyncCorr;
  int32_T i7;
  int32_T i8;
  int32_T i9;
  int32_T loop_ub;
  int32_T idx;
  boolean_T guard3 = false;
  boolean_T empty_non_axis_sizes;
  boolean_T guard2 = false;
  int32_T maxdimlen;
  boolean_T guard1 = false;
  int32_T nx;
  emxArray_real_T *b_Ix1;
  int32_T c_Ix1;
  emxArray_real_T *d_Ix1;
  int32_T b_loop_ub;
  int32_T i10;
  emxArray_real_T *TxDataB;
  real_T mtmp;
  real_T ndbl;
  emxArray_real_T *e_Ix1;
  emxArray_real_T *f_Ix1;
  int32_T sz[2];
  uint32_T varargin_1[2];
  emxArray_real_T *IxAux;
  emxArray_real_T *b_IxAux;
  int32_T b_sz[2];
  boolean_T exitg5;
  emxArray_real_T *Interval;
  emxArray_real_T *EyeMax;
  emxArray_real_T *EyeMaxaux;
  boolean_T exitg4;
  emxArray_real_T *EyeLoc;
  static const real_T dv0[5] = { 0.0, 0.0, 0.35, 0.55, 0.85 };

  real_T anew;
  real_T apnd;
  real_T cdiff;
  real_T absa;
  real_T x[4];
  emxArray_boolean_T *r5;
  emxArray_boolean_T *r6;
  int32_T iv16[2];
  int32_T iv17[2];
  emxArray_int32_T *r7;
  emxArray_real_T *b_Ix;
  emxArray_real_T *c_Ix;
  real_T EyeAB[100];
  int32_T iv18[2];
  int32_T iv19[2];
  emxArray_real_T *d_Ix;
  emxArray_real_T *e_Ix;
  real_T EyeCD[100];
  int32_T iv20[2];
  int32_T iv21[2];
  emxArray_real_T *f_Ix;
  emxArray_real_T *g_Ix;
  real_T EyeEF[100];
  real_T CountAB;
  real_T CountCD;
  real_T CountEF;
  boolean_T b_EyeAB[100];
  boolean_T b_EyeCD[100];
  boolean_T b_EyeEF[100];
  int32_T SeqIniAB;
  int32_T SeqIniCD;
  int32_T SeqIniEF;
  int32_T kk;
  int8_T ii_data[100];
  static const int8_T iv22[2] = { 1, 100 };

  boolean_T exitg3;
  boolean_T b_guard3 = false;
  int32_T LocAB_size[2];
  real_T LocAB_data[100];
  real_T LevelDec3;
  boolean_T exitg2;
  boolean_T b_guard2 = false;
  int32_T LocCD_size[2];
  real_T LocCD_data[100];
  real_T LevelDec2;
  boolean_T exitg1;
  boolean_T b_guard1 = false;
  int32_T LocEF_size[2];
  real_T LocEF_data[100];
  real_T LevelDec1;
  uint32_T ContBit;
  uint32_T ContBit1;
  real_T midaux;
  emxArray_real_T *b_TxDataMat;
  int32_T c_sz[2];
  emxArray_real_T *b_TxDataB;
  real_T BitErr;
  real_T BitErrAux2;
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
  AuxSyncCorr = muDoubleScalarRound(0.5 * (muDoubleScalarPower(0.5, MaxNumStag)
    - 1.0) / -0.5 / (2.0 / muDoubleScalarPower(2.0, IfftOrSum)) * T / Ta);
  if (AuxSyncCorr + 1.0 > Ix1->size[0]) {
    i7 = 1;
    i8 = 1;
  } else {
    if (AuxSyncCorr + 1.0 != (int32_T)muDoubleScalarFloor(AuxSyncCorr + 1.0)) {
      emlrtIntegerCheckR2012b(AuxSyncCorr + 1.0, &e_emlrtDCI, sp);
    }

    i8 = Ix1->size[0];
    i7 = (int32_T)(AuxSyncCorr + 1.0);
    if (!((i7 >= 1) && (i7 <= i8))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &hb_emlrtBCI, sp);
    }

    i8 = Ix1->size[0];
    i9 = Ix1->size[0];
    if (!((i9 >= 1) && (i9 <= i8))) {
      emlrtDynamicBoundsCheckR2012b(i9, 1, i8, &hb_emlrtBCI, sp);
    }

    i8 = i9 + 1;
  }

  if (1.0 > AuxSyncCorr) {
    loop_ub = 0;
  } else {
    i9 = Ix1->size[0];
    if (!(1 <= i9)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i9, &ib_emlrtBCI, sp);
    }

    if (AuxSyncCorr != (int32_T)muDoubleScalarFloor(AuxSyncCorr)) {
      emlrtIntegerCheckR2012b(AuxSyncCorr, &f_emlrtDCI, sp);
    }

    i9 = Ix1->size[0];
    loop_ub = (int32_T)AuxSyncCorr;
    if (!((loop_ub >= 1) && (loop_ub <= i9))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i9, &ib_emlrtBCI, sp);
    }
  }

  st.site = &u_emlrtRSI;
  b_st.site = &v_emlrtRSI;
  i9 = Ix1->size[1];
  if (!((i8 - i7 == 0) || (i9 == 0))) {
    idx = Ix1->size[1];
  } else {
    i9 = Ix1->size[1];
    if (!((loop_ub == 0) || (i9 == 0))) {
      idx = Ix1->size[1];
    } else {
      i9 = Ix1->size[1];
      if (i9 > 0) {
        idx = Ix1->size[1];
      } else {
        idx = 0;
      }

      i9 = Ix1->size[1];
      if (i9 > idx) {
        idx = Ix1->size[1];
      }
    }
  }

  c_st.site = &w_emlrtRSI;
  i9 = Ix1->size[1];
  guard3 = false;
  if (idx == i9) {
    guard3 = true;
  } else {
    i9 = Ix1->size[1];
    if ((i8 - i7 == 0) || (i9 == 0)) {
      guard3 = true;
    } else {
      empty_non_axis_sizes = false;
    }
  }

  if (guard3) {
    empty_non_axis_sizes = true;
  }

  if (empty_non_axis_sizes) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &pc_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i9 = Ix1->size[1];
  if (idx == i9) {
  } else {
    i9 = Ix1->size[1];
    if ((loop_ub == 0) || (i9 == 0)) {
    } else {
      empty_non_axis_sizes = false;
    }
  }

  if (empty_non_axis_sizes) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &pc_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (idx == 0);
  guard2 = false;
  if (empty_non_axis_sizes) {
    guard2 = true;
  } else {
    i9 = Ix1->size[1];
    if (!((i8 - i7 == 0) || (i9 == 0))) {
      guard2 = true;
    } else {
      maxdimlen = -1;
    }
  }

  if (guard2) {
    maxdimlen = (i8 - i7) - 1;
  }

  guard1 = false;
  if (empty_non_axis_sizes) {
    guard1 = true;
  } else {
    i9 = Ix1->size[1];
    if (!((loop_ub == 0) || (i9 == 0))) {
      guard1 = true;
    } else {
      nx = 0;
    }
  }

  if (guard1) {
    nx = loop_ub;
  }

  emxInit_real_T(&b_st, &b_Ix1, 2, &emlrtRTEI, true);
  c_Ix1 = Ix1->size[1];
  i9 = b_Ix1->size[0] * b_Ix1->size[1];
  b_Ix1->size[0] = i8 - i7;
  b_Ix1->size[1] = c_Ix1;
  emxEnsureCapacity(&b_st, (emxArray__common *)b_Ix1, i9, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i9 = 0; i9 < c_Ix1; i9++) {
    b_loop_ub = i8 - i7;
    for (i10 = 0; i10 < b_loop_ub; i10++) {
      b_Ix1->data[i10 + b_Ix1->size[0] * i9] = Ix1->data[((i7 + i10) + Ix1->
        size[0] * i9) - 1];
    }
  }

  emxInit_real_T(&b_st, &d_Ix1, 2, &emlrtRTEI, true);
  c_Ix1 = Ix1->size[1];
  i8 = d_Ix1->size[0] * d_Ix1->size[1];
  d_Ix1->size[0] = loop_ub;
  d_Ix1->size[1] = c_Ix1;
  emxEnsureCapacity(&b_st, (emxArray__common *)d_Ix1, i8, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i8 = 0; i8 < c_Ix1; i8++) {
    for (i7 = 0; i7 < loop_ub; i7++) {
      d_Ix1->data[i7 + d_Ix1->size[0] * i8] = Ix1->data[i7 + Ix1->size[0] * i8];
    }
  }

  i8 = Ix1->size[0] * Ix1->size[1];
  Ix1->size[0] = (maxdimlen + nx) + 1;
  Ix1->size[1] = idx;
  emxEnsureCapacity(&b_st, (emxArray__common *)Ix1, i8, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i8 = 0; i8 < idx; i8++) {
    loop_ub = maxdimlen + 1;
    for (i7 = 0; i7 < loop_ub; i7++) {
      Ix1->data[i7 + Ix1->size[0] * i8] = b_Ix1->data[i7 + (maxdimlen + 1) * i8];
    }
  }

  emxFree_real_T(&b_Ix1);
  for (i8 = 0; i8 < idx; i8++) {
    for (i7 = 0; i7 < nx; i7++) {
      Ix1->data[((i7 + maxdimlen) + Ix1->size[0] * i8) + 1] = d_Ix1->data[i7 +
        nx * i8];
    }
  }

  emxFree_real_T(&d_Ix1);

  /* The difference between the PossitionTosynchronize and */
  /* Possitionsynchronized will be used to correct the time */
  /* shifting on the transmition and reception process. */
  /* if AuxSyncCorr>=0%If the difference is positive, left-shift... */
  /*                  Ix = ifft(fft(Ix).*exp(1j*2*pi*f*AuxSyncCorr));          %Shift based on time change */
  /* Ix = [Ix(AuxSyncCorr+1:end) Ix(1:AuxSyncCorr)];            %Shift based on sampling sliding */
  /* else%... but if the difference is negative, right-shift */
  /*                  Ix = ifft(fft(Ix).*exp(-1j*2*pi*f*AuxSyncCorr));         %Shift based on time change */
  /* Ix = [Ix(end+AuxSyncCorr+1:end) Ix(1:end + AuxSyncCorr)];  %Shift based on sampling sliding */
  /* end */
  /* if SencondAdjust */
  /* For some reason that we could not understand sometimes the */
  /* time (sampling) sliding of the signal is not equal */
  /* throught the data stream. Thus, the second part of the */
  /* synchronism process will be turn ON or OFF according to */
  /* the user's will. */
  /* AuxSyncEnd     = (Ix(end-SyncPos+1:end-IniSyncPos-1));     %Selecting the sync-word within the received signal */
  /* SyncSymbEndAux = SyncSymbEnd(end-SyncPos+1:end-... */
  /* IniSyncPos-1);%Selecting the sync-word within the known signal */
  /* AuxSyncEnd1 = AuxSyncEnd; */
  /* AuxSyncEnd1(AuxSyncEnd1<0) = 0;                            %To keep the mean value above zero anything under is neglected */
  /* AuxSyncEnd1(AuxSyncEnd1>=mean(AuxSyncEnd1)) = 1;           %Adding a flag to the first sample of the received mean value */
  /* AuxSyncEnd1(AuxSyncEnd1<mean(AuxSyncEnd1)) = -1;           %All the others samples at set to the lowest level */
  /* AuxSyncEnd2 = SyncSymbEndAux; */
  /* AuxSyncEnd2(AuxSyncEnd2>=mean(AuxSyncEnd2)) = 1;           %Adding a flag to the first sample of the known mean value */
  /* AuxSyncEnd2(AuxSyncEnd2<mean(AuxSyncEnd2)) = -1;           %All the others samples at set to the lowest level */
  /* PosToSynEnd  = find(ismember(AuxSyncEnd1,1));              %Finding where is the location of the first sample to synchronize */
  /* PosSynEnd = find(ismember(AuxSyncEnd2,1));                 %Finding where is the location of the first sample to synchronize */
  /* AuxSyncCorrEnd = PosToSynEnd(round(end/2))-PosSynEnd(... */
  /* round(end/2)); */
  /* The difference between the PossitionTosynchronize and */
  /* Possitionsynchronized will be used to correct the time */
  /* shifting on the transmition and reception process. */
  /* if AuxSyncCorrEnd>=0%If possitive difference, left-shift... */
  /*                  Ix = ifft(fft(Ix).*exp(1j*2*pi*f*AuxSyncCorrEnd));   %Shift based on time change */
  /* Ix = [Ix(AuxSyncCorrEnd+1:end) Ix(1:AuxSyncCorrEnd)];  %Shift based on sampling sliding */
  /* else%... but if the difference is negative, right-shift */
  /* Ix = ifft(fft(Ix).*exp(-1j*2*pi*f*AuxSyncCorrEnd));  %Shift based on time change */
  /* Ix = [Ix(end-AuxSyncCorrEnd+1:end) Ix(1:end - ... */
  /* AuxSyncCorrEnd)];%Shift based on sampling sliding */
  /* end */
  /* end */
  /* %          Ploting the result for qualitative analizes */
  /*                              PrintInfo(Ploting*35,t(end-SyncPos+1:end-IniSyncPos+1),Ix(... */
  /*                                  end-SyncPos+1:end-IniSyncPos+1),SyncSymb(end-SyncPos+1:... */
  /*                                                                          end-IniSyncPos+1)); */
  /* % Removing CP */
  emxInit_real_T(sp, &TxDataB, 2, &jb_emlrtRTEI, true);
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, AddCP == 1.0)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
    mtmp = (real_T)Ix1->size[0] - StuffSampels;
    if (1.0 > mtmp) {
      loop_ub = 0;
    } else {
      i8 = Ix1->size[0];
      if (!(1 <= i8)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i8, &jb_emlrtBCI, sp);
      }

      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &g_emlrtDCI, sp);
      }

      i8 = Ix1->size[0];
      loop_ub = (int32_T)mtmp;
      if (!((loop_ub >= 1) && (loop_ub <= i8))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i8, &jb_emlrtBCI, sp);
      }
    }

    emxInit_real_T(sp, &e_Ix1, 2, &emlrtRTEI, true);
    st.site = &t_emlrtRSI;
    ndbl = 2.0 * NumAmosCP + NPPB;
    mtmp = Nb4Pam / 2.0 * CurTesSiz;
    i8 = Ix1->size[1];
    nx = loop_ub * i8;
    b_st.site = &x_emlrtRSI;
    c_st.site = &bb_emlrtRSI;
    assertValidSizeArg(&c_st, ndbl);
    c_st.site = &bb_emlrtRSI;
    assertValidSizeArg(&c_st, mtmp);
    sz[0] = (int32_T)ndbl;
    sz[1] = (int32_T)mtmp;
    b_loop_ub = Ix1->size[1];
    i8 = e_Ix1->size[0] * e_Ix1->size[1];
    e_Ix1->size[0] = loop_ub;
    e_Ix1->size[1] = b_loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)e_Ix1, i8, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i8 = 0; i8 < b_loop_ub; i8++) {
      for (i7 = 0; i7 < loop_ub; i7++) {
        e_Ix1->data[i7 + e_Ix1->size[0] * i8] = Ix1->data[i7 + Ix1->size[0] * i8];
      }
    }

    for (i8 = 0; i8 < 2; i8++) {
      varargin_1[i8] = (uint32_T)e_Ix1->size[i8];
    }

    emxFree_real_T(&e_Ix1);
    maxdimlen = (int32_T)varargin_1[0];
    if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
      maxdimlen = (int32_T)varargin_1[1];
    }

    maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
    if ((int32_T)ndbl > maxdimlen) {
      b_st.site = &y_emlrtRSI;
      error(&b_st);
    }

    if ((int32_T)mtmp > maxdimlen) {
      b_st.site = &y_emlrtRSI;
      error(&b_st);
    }

    for (i8 = 0; i8 < 2; i8++) {
      i7 = sz[i8];
      if (!(i7 >= 0)) {
        emlrtNonNegativeCheckR2012b(i7, &q_emlrtDCI, &st);
      }
    }

    emxInit_real_T(&st, &IxAux, 2, &eb_emlrtRTEI, true);
    i8 = IxAux->size[0] * IxAux->size[1];
    IxAux->size[0] = (int32_T)ndbl;
    IxAux->size[1] = (int32_T)mtmp;
    emxEnsureCapacity(&st, (emxArray__common *)IxAux, i8, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    if (nx == IxAux->size[0] * IxAux->size[1]) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &lc_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    b_st.site = &ab_emlrtRSI;
    if ((!(1 > nx)) && (nx > 2147483646)) {
      c_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (idx = 0; idx + 1 <= nx; idx++) {
      IxAux->data[idx] = Ix1->data[idx % loop_ub + Ix1->size[0] * (idx / loop_ub)];
    }

    mtmp = (real_T)IxAux->size[0] - NumAmosCP;
    if (1.0 + NumAmosCP > mtmp) {
      i8 = 0;
      i9 = 0;
    } else {
      ndbl = 1.0 + NumAmosCP;
      if (ndbl != (int32_T)muDoubleScalarFloor(ndbl)) {
        emlrtIntegerCheckR2012b(ndbl, &h_emlrtDCI, sp);
      }

      i8 = IxAux->size[0];
      i7 = (int32_T)ndbl;
      if (!((i7 >= 1) && (i7 <= i8))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &kb_emlrtBCI, sp);
      }

      i8 = i7 - 1;
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &h_emlrtDCI, sp);
      }

      i7 = IxAux->size[0];
      i9 = (int32_T)mtmp;
      if (!((i9 >= 1) && (i9 <= i7))) {
        emlrtDynamicBoundsCheckR2012b(i9, 1, i7, &kb_emlrtBCI, sp);
      }
    }

    emxInit_real_T(sp, &b_IxAux, 2, &emlrtRTEI, true);
    idx = IxAux->size[1];
    i7 = b_IxAux->size[0] * b_IxAux->size[1];
    b_IxAux->size[0] = i9 - i8;
    b_IxAux->size[1] = idx;
    emxEnsureCapacity(sp, (emxArray__common *)b_IxAux, i7, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    for (i7 = 0; i7 < idx; i7++) {
      loop_ub = i9 - i8;
      for (i10 = 0; i10 < loop_ub; i10++) {
        b_IxAux->data[i10 + b_IxAux->size[0] * i7] = IxAux->data[(i8 + i10) +
          IxAux->size[0] * i7];
      }
    }

    i8 = IxAux->size[0] * IxAux->size[1];
    IxAux->size[0] = b_IxAux->size[0];
    IxAux->size[1] = b_IxAux->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)IxAux, i8, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = b_IxAux->size[1];
    for (i8 = 0; i8 < loop_ub; i8++) {
      b_loop_ub = b_IxAux->size[0];
      for (i7 = 0; i7 < b_loop_ub; i7++) {
        IxAux->data[i7 + IxAux->size[0] * i8] = b_IxAux->data[i7 + b_IxAux->
          size[0] * i8];
      }
    }

    emxFree_real_T(&b_IxAux);
    ndbl = NPPB * Nb4Pam / 2.0;
    st.site = &s_emlrtRSI;
    i8 = TxDataB->size[0] * TxDataB->size[1];
    TxDataB->size[0] = IxAux->size[0];
    TxDataB->size[1] = IxAux->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)TxDataB, i8, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = IxAux->size[0] * IxAux->size[1];
    for (i8 = 0; i8 < loop_ub; i8++) {
      TxDataB->data[i8] = IxAux->data[i8];
    }

    nx = IxAux->size[0] * IxAux->size[1];
    b_st.site = &x_emlrtRSI;
    c_st.site = &bb_emlrtRSI;
    assertValidSizeArg(&c_st, ndbl);
    c_st.site = &bb_emlrtRSI;
    assertValidSizeArg(&c_st, CurTesSiz);
    b_sz[0] = (int32_T)ndbl;
    b_sz[1] = (int32_T)CurTesSiz;
    for (i8 = 0; i8 < 2; i8++) {
      varargin_1[i8] = (uint32_T)IxAux->size[i8];
    }

    maxdimlen = (int32_T)varargin_1[0];
    if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
      maxdimlen = (int32_T)varargin_1[1];
    }

    maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
    if ((int32_T)ndbl > maxdimlen) {
      b_st.site = &y_emlrtRSI;
      error(&b_st);
    }

    if ((int32_T)CurTesSiz > maxdimlen) {
      b_st.site = &y_emlrtRSI;
      error(&b_st);
    }

    for (i8 = 0; i8 < 2; i8++) {
      i7 = b_sz[i8];
      if (!(i7 >= 0)) {
        emlrtNonNegativeCheckR2012b(i7, &q_emlrtDCI, &st);
      }
    }

    i8 = IxAux->size[0] * IxAux->size[1];
    IxAux->size[0] = (int32_T)ndbl;
    IxAux->size[1] = (int32_T)CurTesSiz;
    emxEnsureCapacity(&st, (emxArray__common *)IxAux, i8, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    if (nx == IxAux->size[0] * IxAux->size[1]) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &lc_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    b_st.site = &ab_emlrtRSI;
    if ((!(1 > nx)) && (nx > 2147483646)) {
      c_st.site = &cb_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (idx = 0; idx + 1 <= nx; idx++) {
      IxAux->data[idx] = TxDataB->data[idx];
    }

    i8 = Ix1->size[0] * Ix1->size[1];
    Ix1->size[0] = IxAux->size[0];
    Ix1->size[1] = IxAux->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)Ix1, i8, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = IxAux->size[0] * IxAux->size[1];
    for (i8 = 0; i8 < loop_ub; i8++) {
      Ix1->data[i8] = IxAux->data[i8];
    }

    emxFree_real_T(&IxAux);
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2);

  /* % Taking the sampling the EVM meassurement */
  mtmp = 1.0 + SyncPeriod * NPPB;
  ndbl = (real_T)Ix1->size[0] - SyncPeriod * NPPB;
  if (mtmp > ndbl) {
    i7 = 1;
    i8 = 1;
  } else {
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &i_emlrtDCI, sp);
    }

    i8 = Ix1->size[0];
    i7 = (int32_T)mtmp;
    if (!((i7 >= 1) && (i7 <= i8))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &lb_emlrtBCI, sp);
    }

    if (ndbl != (int32_T)muDoubleScalarFloor(ndbl)) {
      emlrtIntegerCheckR2012b(ndbl, &i_emlrtDCI, sp);
    }

    i8 = Ix1->size[0];
    i9 = (int32_T)ndbl;
    if (!((i9 >= 1) && (i9 <= i8))) {
      emlrtDynamicBoundsCheckR2012b(i9, 1, i8, &lb_emlrtBCI, sp);
    }

    i8 = i9 + 1;
  }

  emxInit_real_T(sp, &f_Ix1, 2, &emlrtRTEI, true);
  st.site = &r_emlrtRSI;
  i9 = Ix1->size[1];
  mtmp = (real_T)(i8 - i7) * (real_T)i9;
  i9 = Ix1->size[1];
  nx = (i8 - i7) * i9;
  b_st.site = &x_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  assertValidSizeArg(&c_st, mtmp);
  loop_ub = Ix1->size[1];
  i9 = f_Ix1->size[0] * f_Ix1->size[1];
  f_Ix1->size[0] = i8 - i7;
  f_Ix1->size[1] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)f_Ix1, i9, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i9 = 0; i9 < loop_ub; i9++) {
    b_loop_ub = i8 - i7;
    for (i10 = 0; i10 < b_loop_ub; i10++) {
      f_Ix1->data[i10 + f_Ix1->size[0] * i9] = Ix1->data[((i7 + i10) + Ix1->
        size[0] * i9) - 1];
    }
  }

  for (i9 = 0; i9 < 2; i9++) {
    varargin_1[i9] = (uint32_T)f_Ix1->size[i9];
  }

  emxFree_real_T(&f_Ix1);
  maxdimlen = (int32_T)varargin_1[0];
  if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
    maxdimlen = (int32_T)varargin_1[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (1 > maxdimlen) {
    b_st.site = &y_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)mtmp > maxdimlen) {
    b_st.site = &y_emlrtRSI;
    error(&b_st);
  }

  i9 = Ix->size[0] * Ix->size[1];
  Ix->size[0] = 1;
  Ix->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(&st, (emxArray__common *)Ix, i9, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (nx == Ix->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &lc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &ab_emlrtRSI;
  if ((!(1 > nx)) && (nx > 2147483646)) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= nx; idx++) {
    Ix->data[idx] = Ix1->data[((i7 + idx % (i8 - i7)) + Ix1->size[0] * (idx /
      (i8 - i7))) - 1];
  }

  /* PosAuxEout = NPPB/2:NPPB:length(Ix);%Varriable respossible to take just the samples at the middle of the symbol */
  /* IxAux      = Ix(PosAuxEout);                           %Normalizing the reference */
  /* RxSymbAmos(CurrentTest,ObsCarrPos==ThisCarr,:) = IxAux;%RxSymbAmosUp = []; */
  /* EvmMatRec(ObsCarrPos==ThisCarr,:) = IxAux;                       %Taking just the middle samples as references */
  /* [EvmDB(CurrentTest,ThisCarr), EvmPer(CurrentTest,ThisCarr), EvmRms(CurrentTest,ThisCarr) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux ); */
  /* [EvmDBJ(CurrentTest,ThisCarr),EvmPerJ(CurrentTest,ThisCarr),EvmRmsJ(CurrentTest,ThisCarr)] = evm1(4,'pam',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux); */
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
  /* Firstly it was set the interval in which the histogram will be */
  /* build. It is based on the number of samples per bit period. */
  /*              IxToSeek = reshape(Ix(1+SyncPeriod*NPPB:end-SyncPeriod*NPPB... */
  /*                                         ),NPPB,(Nb4Pam/2) - (2*SyncPeriod)); */
  st.site = &q_emlrtRSI;
  b_st.site = &db_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  if ((Ix->size[1] == 1) || (Ix->size[1] != 1)) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
  }

  if (empty_non_axis_sizes) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &nc_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (Ix->size[1] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &oc_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &fb_emlrtRSI;
  maxdimlen = 1;
  nx = Ix->size[1];
  ndbl = Ix->data[0];
  if (Ix->size[1] > 1) {
    if (muDoubleScalarIsNaN(Ix->data[0])) {
      e_st.site = &hb_emlrtRSI;
      empty_non_axis_sizes = (Ix->size[1] > 2147483646);
      if (empty_non_axis_sizes) {
        f_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      idx = 2;
      exitg5 = false;
      while ((!exitg5) && (idx <= nx)) {
        maxdimlen = idx;
        if (!muDoubleScalarIsNaN(Ix->data[idx - 1])) {
          ndbl = Ix->data[idx - 1];
          exitg5 = true;
        } else {
          idx++;
        }
      }
    }

    if (maxdimlen < Ix->size[1]) {
      e_st.site = &gb_emlrtRSI;
      empty_non_axis_sizes = ((!(maxdimlen + 1 > Ix->size[1])) && (Ix->size[1] >
        2147483646));
      if (empty_non_axis_sizes) {
        f_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (maxdimlen + 1 <= nx) {
        if (Ix->data[maxdimlen] < ndbl) {
          ndbl = Ix->data[maxdimlen];
        }

        maxdimlen++;
      }
    }
  }

  st.site = &q_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  maxdimlen = 1;
  nx = Ix->size[1];
  mtmp = Ix->data[0];
  if (Ix->size[1] > 1) {
    if (muDoubleScalarIsNaN(Ix->data[0])) {
      e_st.site = &hb_emlrtRSI;
      empty_non_axis_sizes = (Ix->size[1] > 2147483646);
      if (empty_non_axis_sizes) {
        f_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      idx = 2;
      exitg4 = false;
      while ((!exitg4) && (idx <= nx)) {
        maxdimlen = idx;
        if (!muDoubleScalarIsNaN(Ix->data[idx - 1])) {
          mtmp = Ix->data[idx - 1];
          exitg4 = true;
        } else {
          idx++;
        }
      }
    }

    if (maxdimlen < Ix->size[1]) {
      e_st.site = &gb_emlrtRSI;
      empty_non_axis_sizes = ((!(maxdimlen + 1 > Ix->size[1])) && (Ix->size[1] >
        2147483646));
      if (empty_non_axis_sizes) {
        f_st.site = &cb_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (maxdimlen + 1 <= nx) {
        if (Ix->data[maxdimlen] > mtmp) {
          mtmp = Ix->data[maxdimlen];
        }

        maxdimlen++;
      }
    }
  }

  emxInit_real_T(&d_st, &Interval, 2, &fb_emlrtRTEI, true);
  emxInit_real_T(&d_st, &EyeMax, 2, &gb_emlrtRTEI, true);
  emxInit_real_T(&d_st, &EyeMaxaux, 2, &hb_emlrtRTEI, true);
  st.site = &q_emlrtRSI;
  linspace(&st, ndbl, mtmp, IntervalStep, Interval);

  /* Therefore, the MATLAB hist function returns the number of */
  /* occurrence of each interval. */
  st.site = &p_emlrtRSI;
  hist(&st, Ix, Interval, EyeMax);
  i8 = EyeMaxaux->size[0] * EyeMaxaux->size[1];
  EyeMaxaux->size[0] = 1;
  EyeMaxaux->size[1] = 2 + EyeMax->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)EyeMaxaux, i8, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  EyeMaxaux->data[0] = 0.0;
  loop_ub = EyeMax->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    EyeMaxaux->data[EyeMaxaux->size[0] * (i8 + 1)] = EyeMax->data[EyeMax->size[0]
      * i8];
  }

  emxInit_real_T(sp, &EyeLoc, 2, &ib_emlrtRTEI, true);
  EyeMaxaux->data[EyeMaxaux->size[0] * (1 + EyeMax->size[1])] = 0.0;

  /* Zeros are added at the EyeMax to auxiliate the finding peaks process */
  st.site = &o_emlrtRSI;
  findpeaks(&st, EyeMaxaux, MinDist, EyeMax, EyeLoc);

  /* ,'MinPeakHeight',mean(EyeMax));%The peaks on the Eye profile will be the levels at the Eyes limit */
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 1, EyeLoc->size[1] < 4)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 3);
    st.site = &n_emlrtRSI;
    findpeaks(&st, EyeMaxaux, MinDist * 0.8, EyeMax, EyeLoc);

    /* ,'MinPeakHeight',mean(EyeMax)/4);%The peaks on the Eye profile will be the levels at the Eyes limit */
  }

  emxFree_real_T(&EyeMaxaux);

  /* This variable will brings the eye profile of the input signal */
  /* that will be used to generate the decision level. Basicaly the */
  /* decission level will be the minimal value of the currente eye */
  /* under evaluation plus the half of the its eye opening. The */
  /* following ilustration better describe this process. */
  /*  */
  /* Eye Limits:   + (1/2 * Eye Opening:)  =    Comparisson Limits: */
  /*  */
  /* UperLevel  ______     ______________     _____ */
  /*                  \   /      |       \   / */
  /*                   \ /       |        \ / */
  /*                    \ Half Eye Opening /     Decission Level 3 */
  /*                   / \       |        / \ */
  /* LowerLevel 3_____/   \______|_______/   \_____ */
  /*                  \   /      |       \   / */
  /*                   \ /       |        \ / */
  /*                    \ Half Eye Opening /     Decission Level 2 */
  /*                   / \       |        / \ */
  /* LowerLevel 2_____/   \______|_______/   \_____ */
  /*                  \   /      |       \   / */
  /*                   \ /       |        \ / */
  /*                    \ Half Eye Opening /     Decission Level 1 */
  /*                   / \       |        / \ */
  /* LowerLevel 1_____/   \______|_______/   \_____ */
  /*  */
  /* %           Ploting for Qualitative Analizes */
  /*              PrintInfo(Ploting*37,Interval,EyeMax); */
  /* %         Finding Decission Levels */
  /* It is not always possible to totaly recover the signal. */
  /* Depending on the configuration of the transmition and */
  /* reception system the eye diagram may be nonexistent. Which */
  /* means, there will not be a profile to be found therefore the */
  /* EyeLoc will not return the correct location. Inasmuch as the */
  /* detection process to works limts will be set accordling to the */
  /* amplitude of the received signal. */
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 2, EyeLoc->size[1] < 4)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 4);

    /* If it was not able to find the eye profile. */
    /* EyeLoc = [2 3 4 5]; */
    Levels_size[0] = 1;
    Levels_size[1] = 5;
    for (i8 = 0; i8 < 5; i8++) {
      Levels_data[i8] = dv0[i8];
    }

    /*                  Levels = sort(Levels); */
    /*                  LevelDec1 = mean(Ix) - 2*mean(Ix)/3 ; */
    /*                  LevelDec2 = mean(Ix) ; */
    /*                  LevelDec3 = mean(Ix) + 2*mean(Ix)/3 ; */
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 5);

    /* Whereas, if there is an profile the decission can be found */
    mtmp = EyeLoc->data[0] - 1.0;
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &j_emlrtDCI, sp);
    }

    i8 = Interval->size[1];
    i7 = (int32_T)mtmp;
    if (!((i7 >= 1) && (i7 <= i8))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &mb_emlrtBCI, sp);
    }

    mtmp = EyeLoc->data[1] - 1.0;
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &k_emlrtDCI, sp);
    }

    i8 = Interval->size[1];
    i7 = (int32_T)mtmp;
    if (!((i7 >= 1) && (i7 <= i8))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &nb_emlrtBCI, sp);
    }

    mtmp = EyeLoc->data[2] - 1.0;
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &l_emlrtDCI, sp);
    }

    i8 = Interval->size[1];
    i7 = (int32_T)mtmp;
    if (!((i7 >= 1) && (i7 <= i8))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &ob_emlrtBCI, sp);
    }

    mtmp = EyeLoc->data[3] - 1.0;
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &m_emlrtDCI, sp);
    }

    i8 = Interval->size[1];
    i7 = (int32_T)mtmp;
    if (!((i7 >= 1) && (i7 <= i8))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &pb_emlrtBCI, sp);
    }

    st.site = &m_emlrtRSI;
    x[0] = Interval->data[(int32_T)(EyeLoc->data[0] - 1.0) - 1];
    x[1] = Interval->data[(int32_T)(EyeLoc->data[1] - 1.0) - 1];
    x[2] = Interval->data[(int32_T)(EyeLoc->data[2] - 1.0) - 1];
    x[3] = Interval->data[(int32_T)(EyeLoc->data[3] - 1.0) - 1];
    b_st.site = &se_emlrtRSI;
    d_sort(&b_st, x);
    Levels_size[0] = 1;
    Levels_size[1] = 4;
    for (i8 = 0; i8 < 4; i8++) {
      Levels_data[i8] = x[i8];
    }

    /*                  LevelDec1 = Levels(1) + (Levels(2)-Levels(1))/2 ; */
    /*                  LevelDec2 = Levels(2) + (Levels(3)-Levels(2))/2 ; */
    /*                  LevelDec3 = Levels(3) + (Levels(4)-Levels(3))/2 ; */
  }

  emxFree_real_T(&EyeLoc);
  emxFree_real_T(&Interval);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 6);

  /* ############################################################## */
  /* ############################################################## */
  mtmp = NPPB / 2.0;
  st.site = &l_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  if (muDoubleScalarIsNaN(mtmp) || muDoubleScalarIsNaN(NPPB)) {
    nx = 1;
    anew = rtNaN;
    apnd = Ix->size[1];
    empty_non_axis_sizes = false;
  } else if ((NPPB == 0.0) || ((mtmp < Ix->size[1]) && (NPPB < 0.0)) ||
             ((Ix->size[1] < mtmp) && (NPPB > 0.0))) {
    nx = 0;
    anew = mtmp;
    apnd = Ix->size[1];
    empty_non_axis_sizes = false;
  } else if (muDoubleScalarIsInf(mtmp)) {
    nx = 1;
    anew = rtNaN;
    apnd = Ix->size[1];
    if (muDoubleScalarIsInf(NPPB) || (mtmp == Ix->size[1])) {
      empty_non_axis_sizes = true;
    } else {
      empty_non_axis_sizes = false;
    }

    empty_non_axis_sizes = !empty_non_axis_sizes;
  } else if (muDoubleScalarIsInf(NPPB)) {
    nx = 1;
    anew = mtmp;
    apnd = Ix->size[1];
    empty_non_axis_sizes = false;
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
    maxdimlen = Ix->size[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, maxdimlen)) {
      ndbl++;
      apnd = Ix->size[1];
    } else if (cdiff > 0.0) {
      apnd = mtmp + (ndbl - 1.0) * NPPB;
    } else {
      ndbl++;
    }

    empty_non_axis_sizes = (2.147483647E+9 < ndbl);
    if (ndbl >= 0.0) {
      nx = (int32_T)ndbl;
    } else {
      nx = 0;
    }
  }

  c_st.site = &bc_emlrtRSI;
  if (!empty_non_axis_sizes) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &mc_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      0);
  }

  i8 = EyeMax->size[0] * EyeMax->size[1];
  EyeMax->size[0] = 1;
  EyeMax->size[1] = nx;
  emxEnsureCapacity(&b_st, (emxArray__common *)EyeMax, i8, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if (nx > 0) {
    EyeMax->data[0] = anew;
    if (nx > 1) {
      EyeMax->data[nx - 1] = apnd;
      maxdimlen = (nx - 1) / 2;
      c_st.site = &cc_emlrtRSI;
      for (idx = 1; idx < maxdimlen; idx++) {
        ndbl = (real_T)idx * NPPB;
        EyeMax->data[idx] = anew + ndbl;
        EyeMax->data[(nx - idx) - 1] = apnd - ndbl;
      }

      if (maxdimlen << 1 == nx - 1) {
        EyeMax->data[maxdimlen] = (anew + apnd) / 2.0;
      } else {
        ndbl = (real_T)maxdimlen * NPPB;
        EyeMax->data[maxdimlen] = anew + ndbl;
        EyeMax->data[maxdimlen + 1] = apnd - ndbl;
      }
    }
  }

  /* Possition of the central samples - but the number of samples per symbol is even ???? */
  maxdimlen = Ix->size[1];
  loop_ub = EyeMax->size[0] * EyeMax->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    mtmp = EyeMax->data[i8];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &r_emlrtDCI, sp);
    }

    i7 = (int32_T)mtmp;
    if (!((i7 >= 1) && (i7 <= maxdimlen))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, maxdimlen, &ac_emlrtBCI, sp);
    }
  }

  emxInit_boolean_T1(sp, &r5, 2, &emlrtRTEI, true);

  /* From the main received signal just a few samples are taken for further evaluation */
  /* The number of boxes to be filled up on the histogram process */
  /* At this process each eye will be evaluated separetelly. It is */
  /* important to remember that the PAM4 has 4 levels, which means */
  /* three level of decissions that are exaclty the center of the */
  /* eye diagram. */
  i8 = r5->size[0] * r5->size[1];
  r5->size[0] = 1;
  r5->size[1] = EyeMax->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r5, i8, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  ndbl = Levels_data[3];
  loop_ub = EyeMax->size[0] * EyeMax->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    r5->data[i8] = (Ix->data[(int32_T)EyeMax->data[i8] - 1] <= ndbl);
  }

  emxInit_boolean_T1(sp, &r6, 2, &emlrtRTEI, true);
  i8 = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = EyeMax->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  ndbl = Levels_data[2];
  loop_ub = EyeMax->size[0] * EyeMax->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    r6->data[i8] = (Ix->data[(int32_T)EyeMax->data[i8] - 1] >= ndbl);
  }

  for (i8 = 0; i8 < 2; i8++) {
    iv16[i8] = r5->size[i8];
  }

  for (i8 = 0; i8 < 2; i8++) {
    iv17[i8] = r6->size[i8];
  }

  emxInit_int32_T1(sp, &r7, 2, &emlrtRTEI, true);
  if ((iv16[0] != iv17[0]) || (iv16[1] != iv17[1])) {
    emlrtSizeEqCheckNDR2012b(&iv16[0], &iv17[0], &i_emlrtECI, sp);
  }

  nx = r5->size[1] - 1;
  maxdimlen = 0;
  for (idx = 0; idx <= nx; idx++) {
    if (r5->data[idx] && r6->data[idx]) {
      maxdimlen++;
    }
  }

  i8 = r7->size[0] * r7->size[1];
  r7->size[0] = 1;
  r7->size[1] = maxdimlen;
  emxEnsureCapacity(sp, (emxArray__common *)r7, i8, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  maxdimlen = 0;
  for (idx = 0; idx <= nx; idx++) {
    if (r5->data[idx] && r6->data[idx]) {
      r7->data[maxdimlen] = idx + 1;
      maxdimlen++;
    }
  }

  maxdimlen = EyeMax->size[1];
  loop_ub = r7->size[0] * r7->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    i7 = r7->data[i8];
    if (!((i7 >= 1) && (i7 <= maxdimlen))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, maxdimlen, &bc_emlrtBCI, sp);
    }
  }

  /* Taking just those values relative to the uper eye */
  b_linspace(Levels_data[2], Levels_data[3], InterAB);

  /* Building the histogram boxes */
  nx = r5->size[1] - 1;
  maxdimlen = 0;
  for (idx = 0; idx <= nx; idx++) {
    if (r5->data[idx] && r6->data[idx]) {
      maxdimlen++;
    }
  }

  i8 = r7->size[0] * r7->size[1];
  r7->size[0] = 1;
  r7->size[1] = maxdimlen;
  emxEnsureCapacity(sp, (emxArray__common *)r7, i8, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  maxdimlen = 0;
  for (idx = 0; idx <= nx; idx++) {
    if (r5->data[idx] && r6->data[idx]) {
      r7->data[maxdimlen] = idx + 1;
      maxdimlen++;
    }
  }

  emxInit_real_T(sp, &b_Ix, 2, &emlrtRTEI, true);
  emxInit_real_T1(sp, &c_Ix, 1, &emlrtRTEI, true);
  i8 = b_Ix->size[0] * b_Ix->size[1];
  b_Ix->size[0] = 1;
  b_Ix->size[1] = r7->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_Ix, i8, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i8 = c_Ix->size[0];
  c_Ix->size[0] = EyeMax->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_Ix, i8, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = EyeMax->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    c_Ix->data[i8] = Ix->data[(int32_T)EyeMax->data[i8] - 1];
  }

  loop_ub = r7->size[0] * r7->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    b_Ix->data[i8] = c_Ix->data[r7->data[i8] - 1];
  }

  emxFree_real_T(&c_Ix);
  st.site = &k_emlrtRSI;
  b_hist(&st, b_Ix, InterAB, EyeAB);

  /* filling up the boxes with samples that fit on them. */
  /* The same process described for the uper level will be done at */
  /* the middle and lower eyes levels. */
  i8 = r5->size[0] * r5->size[1];
  r5->size[0] = 1;
  r5->size[1] = EyeMax->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r5, i8, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  ndbl = Levels_data[2];
  loop_ub = EyeMax->size[0] * EyeMax->size[1];
  emxFree_real_T(&b_Ix);
  for (i8 = 0; i8 < loop_ub; i8++) {
    r5->data[i8] = (Ix->data[(int32_T)EyeMax->data[i8] - 1] <= ndbl);
  }

  i8 = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = EyeMax->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  ndbl = Levels_data[1];
  loop_ub = EyeMax->size[0] * EyeMax->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    r6->data[i8] = (Ix->data[(int32_T)EyeMax->data[i8] - 1] >= ndbl);
  }

  for (i8 = 0; i8 < 2; i8++) {
    iv18[i8] = r5->size[i8];
  }

  for (i8 = 0; i8 < 2; i8++) {
    iv19[i8] = r6->size[i8];
  }

  if ((iv18[0] != iv19[0]) || (iv18[1] != iv19[1])) {
    emlrtSizeEqCheckNDR2012b(&iv18[0], &iv19[0], &j_emlrtECI, sp);
  }

  nx = r5->size[1] - 1;
  maxdimlen = 0;
  for (idx = 0; idx <= nx; idx++) {
    if (r5->data[idx] && r6->data[idx]) {
      maxdimlen++;
    }
  }

  i8 = r7->size[0] * r7->size[1];
  r7->size[0] = 1;
  r7->size[1] = maxdimlen;
  emxEnsureCapacity(sp, (emxArray__common *)r7, i8, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  maxdimlen = 0;
  for (idx = 0; idx <= nx; idx++) {
    if (r5->data[idx] && r6->data[idx]) {
      r7->data[maxdimlen] = idx + 1;
      maxdimlen++;
    }
  }

  maxdimlen = EyeMax->size[1];
  loop_ub = r7->size[0] * r7->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    i7 = r7->data[i8];
    if (!((i7 >= 1) && (i7 <= maxdimlen))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, maxdimlen, &cc_emlrtBCI, sp);
    }
  }

  b_linspace(Levels_data[1], Levels_data[2], InterCD);

  /* NPPB*2^n); */
  nx = r5->size[1] - 1;
  maxdimlen = 0;
  for (idx = 0; idx <= nx; idx++) {
    if (r5->data[idx] && r6->data[idx]) {
      maxdimlen++;
    }
  }

  i8 = r7->size[0] * r7->size[1];
  r7->size[0] = 1;
  r7->size[1] = maxdimlen;
  emxEnsureCapacity(sp, (emxArray__common *)r7, i8, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  maxdimlen = 0;
  for (idx = 0; idx <= nx; idx++) {
    if (r5->data[idx] && r6->data[idx]) {
      r7->data[maxdimlen] = idx + 1;
      maxdimlen++;
    }
  }

  emxInit_real_T(sp, &d_Ix, 2, &emlrtRTEI, true);
  emxInit_real_T1(sp, &e_Ix, 1, &emlrtRTEI, true);
  i8 = d_Ix->size[0] * d_Ix->size[1];
  d_Ix->size[0] = 1;
  d_Ix->size[1] = r7->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_Ix, i8, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i8 = e_Ix->size[0];
  e_Ix->size[0] = EyeMax->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)e_Ix, i8, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = EyeMax->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    e_Ix->data[i8] = Ix->data[(int32_T)EyeMax->data[i8] - 1];
  }

  loop_ub = r7->size[0] * r7->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    d_Ix->data[i8] = e_Ix->data[r7->data[i8] - 1];
  }

  emxFree_real_T(&e_Ix);
  st.site = &j_emlrtRSI;
  b_hist(&st, d_Ix, InterCD, EyeCD);
  i8 = r5->size[0] * r5->size[1];
  r5->size[0] = 1;
  r5->size[1] = EyeMax->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r5, i8, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  ndbl = Levels_data[1];
  loop_ub = EyeMax->size[0] * EyeMax->size[1];
  emxFree_real_T(&d_Ix);
  for (i8 = 0; i8 < loop_ub; i8++) {
    r5->data[i8] = (Ix->data[(int32_T)EyeMax->data[i8] - 1] <= ndbl);
  }

  i8 = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = EyeMax->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r6, i8, (int32_T)sizeof(boolean_T),
                    &emlrtRTEI);
  ndbl = Levels_data[0];
  loop_ub = EyeMax->size[0] * EyeMax->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    r6->data[i8] = (Ix->data[(int32_T)EyeMax->data[i8] - 1] >= ndbl);
  }

  for (i8 = 0; i8 < 2; i8++) {
    iv20[i8] = r5->size[i8];
  }

  for (i8 = 0; i8 < 2; i8++) {
    iv21[i8] = r6->size[i8];
  }

  if ((iv20[0] != iv21[0]) || (iv20[1] != iv21[1])) {
    emlrtSizeEqCheckNDR2012b(&iv20[0], &iv21[0], &k_emlrtECI, sp);
  }

  nx = r5->size[1] - 1;
  maxdimlen = 0;
  for (idx = 0; idx <= nx; idx++) {
    if (r5->data[idx] && r6->data[idx]) {
      maxdimlen++;
    }
  }

  i8 = r7->size[0] * r7->size[1];
  r7->size[0] = 1;
  r7->size[1] = maxdimlen;
  emxEnsureCapacity(sp, (emxArray__common *)r7, i8, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  maxdimlen = 0;
  for (idx = 0; idx <= nx; idx++) {
    if (r5->data[idx] && r6->data[idx]) {
      r7->data[maxdimlen] = idx + 1;
      maxdimlen++;
    }
  }

  maxdimlen = EyeMax->size[1];
  loop_ub = r7->size[0] * r7->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    i7 = r7->data[i8];
    if (!((i7 >= 1) && (i7 <= maxdimlen))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, maxdimlen, &dc_emlrtBCI, sp);
    }
  }

  b_linspace(Levels_data[0], Levels_data[1], InterEF);

  /* NPPB*2^n); */
  nx = r5->size[1] - 1;
  maxdimlen = 0;
  for (idx = 0; idx <= nx; idx++) {
    if (r5->data[idx] && r6->data[idx]) {
      maxdimlen++;
    }
  }

  i8 = r7->size[0] * r7->size[1];
  r7->size[0] = 1;
  r7->size[1] = maxdimlen;
  emxEnsureCapacity(sp, (emxArray__common *)r7, i8, (int32_T)sizeof(int32_T),
                    &emlrtRTEI);
  maxdimlen = 0;
  for (idx = 0; idx <= nx; idx++) {
    if (r5->data[idx] && r6->data[idx]) {
      r7->data[maxdimlen] = idx + 1;
      maxdimlen++;
    }
  }

  emxFree_boolean_T(&r6);
  emxInit_real_T(sp, &f_Ix, 2, &emlrtRTEI, true);
  emxInit_real_T1(sp, &g_Ix, 1, &emlrtRTEI, true);
  i8 = f_Ix->size[0] * f_Ix->size[1];
  f_Ix->size[0] = 1;
  f_Ix->size[1] = r7->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)f_Ix, i8, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i8 = g_Ix->size[0];
  g_Ix->size[0] = EyeMax->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)g_Ix, i8, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = EyeMax->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    g_Ix->data[i8] = Ix->data[(int32_T)EyeMax->data[i8] - 1];
  }

  loop_ub = r7->size[0] * r7->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    f_Ix->data[i8] = g_Ix->data[r7->data[i8] - 1];
  }

  emxFree_real_T(&g_Ix);
  emxFree_int32_T(&r7);
  st.site = &i_emlrtRSI;
  b_hist(&st, f_Ix, InterEF, EyeEF);

  /* What we are looking for here are not where exist the */
  /* occurrences of values. The eye is where there is not samples, */
  /* this means, the decission level is a reagion between actual */
  /* levels thus this reagion does not contain any signal. */
  emxFree_real_T(&f_Ix);

  /* Changing zeros to one - Zeros compose the eye region */
  /* Starting variables that will be used to identify the eye */
  /* diagram. */
  CountAB = 1.0;
  CountCD = 1.0;
  CountEF = 1.0;
  for (i8 = 0; i8 < 100; i8++) {
    b_EyeAB[i8] = !(EyeAB[i8] != 0.0);
    b_EyeCD[i8] = !(EyeCD[i8] != 0.0);
    b_EyeEF[i8] = !(EyeEF[i8] != 0.0);
    EyeAB[i8] = 0.0;
    EyeCD[i8] = 0.0;
    EyeEF[i8] = 0.0;
  }

  for (i8 = 0; i8 < 100; i8++) {
    SeqFinAB[i8] = 0.0;
  }

  for (i8 = 0; i8 < 100; i8++) {
    SeqFinCD[i8] = 0.0;
  }

  for (i8 = 0; i8 < 100; i8++) {
    SeqFinEF[i8] = 0.0;
  }

  SeqIniAB = 1;
  SeqIniCD = 1;
  SeqIniEF = 1;

  /* The for loop will take account of every box with ones. It is */
  /* important to take note that the not operator was used in this */
  /* vector, therefore ones means zeros (the eye diagram - */
  /* possibly) and zeros means values abouve zeroa (not the eye). */
  kk = 0;
  while (kk < 100) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);

    /* For every box */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 3, b_EyeAB[kk])) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 7);

      /* if it contains "1" */
      if (!((SeqIniAB >= 1) && (SeqIniAB <= 100))) {
        emlrtDynamicBoundsCheckR2012b(SeqIniAB, 1, 100, &qb_emlrtBCI, sp);
      }

      EyeAB[SeqIniAB - 1] = CountAB;

      /* count this element as part of a consecutive sequency */
      CountAB++;

      /* adds one to the counter of consecutive elements "1" */
      if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 4, 1 + kk == 100)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 8);

        /* if the current box is the last box we got to an end */
        SeqFinAB[SeqIniAB - 1] = 100.0;

        /* The final sequency element is equal to its possition (kk) */
      }
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 9);

      /* else if the current box contains "0" */
      if (!((SeqIniAB >= 1) && (SeqIniAB <= 100))) {
        emlrtDynamicBoundsCheckR2012b(SeqIniAB, 1, 100, &rb_emlrtBCI, sp);
      }

      SeqFinAB[SeqIniAB - 1] = (1.0 + (real_T)kk) - 1.0;

      /* the previous element was the last element of a consecutive sequency of ones */
      SeqIniAB++;

      /* adds one to the counter of consecutive number (take in account how many sequencies there are) */
      CountAB = 1.0;

      /* reset the counter of consecutive elements to mark the start of a new consecutive sequence */
    }

    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 5, b_EyeCD[kk])) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 10);
      if (!((SeqIniCD >= 1) && (SeqIniCD <= 100))) {
        emlrtDynamicBoundsCheckR2012b(SeqIniCD, 1, 100, &sb_emlrtBCI, sp);
      }

      EyeCD[SeqIniCD - 1] = CountCD;
      CountCD++;
      if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 6, 1 + kk == 100)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 11);
        SeqFinCD[SeqIniCD - 1] = 100.0;
      }
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 12);
      if (!((SeqIniCD >= 1) && (SeqIniCD <= 100))) {
        emlrtDynamicBoundsCheckR2012b(SeqIniCD, 1, 100, &tb_emlrtBCI, sp);
      }

      SeqFinCD[SeqIniCD - 1] = (1.0 + (real_T)kk) - 1.0;
      SeqIniCD++;
      CountCD = 1.0;
    }

    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 7, b_EyeEF[kk])) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 13);
      if (!((SeqIniEF >= 1) && (SeqIniEF <= 100))) {
        emlrtDynamicBoundsCheckR2012b(SeqIniEF, 1, 100, &ub_emlrtBCI, sp);
      }

      EyeEF[SeqIniEF - 1] = CountEF;
      CountEF++;
      if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 8, 1 + kk == 100)) {
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 14);
        SeqFinEF[SeqIniEF - 1] = 100.0;
      }
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 15);
      if (!((SeqIniEF >= 1) && (SeqIniEF <= 100))) {
        emlrtDynamicBoundsCheckR2012b(SeqIniEF, 1, 100, &vb_emlrtBCI, sp);
      }

      SeqFinEF[SeqIniEF - 1] = (1.0 + (real_T)kk) - 1.0;
      SeqIniEF++;
      CountEF = 1.0;
    }

    kk++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 16);

  /* If the eye is open, which means there is a clear difference */
  /* between adjacent levels, the eye diagram will be the longest */
  /* sequence of ones. */
  ndbl = EyeAB[0];
  maxdimlen = 0;
  for (idx = 1; idx + 1 < 101; idx++) {
    if (EyeAB[idx] > ndbl) {
      ndbl = EyeAB[idx];
      maxdimlen = idx;
    }
  }

  *MaxValAB = ndbl;
  *LocMaxAB = maxdimlen + 1;
  covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 0, false);
  if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 1, ndbl < 2.0)) {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 0, true);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 9, true);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 17);

    /* if any sequency was found or there is just one sequency it is a error thus */
    *LevDec3 = 0.6953;

    /* the decission level will be by default 0.67. Also, the other variables will */
    *LocMaxAB = 1.0;

    /* will be set with values to not cause errors in the future */
    SeqFinAB[0] = 2.0;
    *MaxValAB = 0.0;
    InterAB[0] = 0.6953;
  } else {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 0, false);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 9, false);

    /* if a sequency was found the middle of the eye will be the middle of the sequency */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 10, (real_T)(int8_T)
                   SeqFinAB[maxdimlen] - ndbl / 2.0 < 1.0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 18);

      /* if for some reason the final element of the sequency minus the half of its */
      *LevDec3 = 0.6953;

      /* length results in a negative value, something went very wrong, and by */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 19);

      /* default it will be set to 0.7 */
      mtmp = muDoubleScalarRound((real_T)(int8_T)SeqFinAB[maxdimlen] - ndbl /
        2.0);
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &s_emlrtDCI, sp);
      }

      i8 = (int32_T)mtmp;
      if (!((i8 >= 1) && (i8 <= 100))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, 100, &ec_emlrtBCI, sp);
      }

      *LevDec3 = InterAB[i8 - 1];

      /* Otherwise, the decission level is the middle of the sequency */
    }
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 20);
  ndbl = EyeCD[0];
  maxdimlen = 0;
  for (idx = 1; idx + 1 < 101; idx++) {
    if (EyeCD[idx] > ndbl) {
      ndbl = EyeCD[idx];
      maxdimlen = idx;
    }
  }

  *MaxValCD = ndbl;
  *LocMaxCD = maxdimlen + 1;
  covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 2, false);
  if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 3, ndbl < 2.0)) {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 1, true);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 11, true);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 21);
    *LevDec2 = 0.4013;
    *LocMaxCD = 1.0;
    SeqFinCD[0] = 2.0;
    *MaxValCD = 0.0;
    InterCD[0] = 0.4013;
  } else {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 1, false);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 11, false);
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 12, (real_T)(int8_T)
                   SeqFinCD[maxdimlen] - ndbl / 2.0 < 1.0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 22);
      *LevDec2 = 0.4013;
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 23);
      mtmp = muDoubleScalarRound((real_T)(int8_T)SeqFinCD[maxdimlen] - ndbl /
        2.0);
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &t_emlrtDCI, sp);
      }

      i8 = (int32_T)mtmp;
      if (!((i8 >= 1) && (i8 <= 100))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, 100, &fc_emlrtBCI, sp);
      }

      *LevDec2 = InterCD[i8 - 1];
    }
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 24);
  ndbl = EyeEF[0];
  maxdimlen = 0;
  for (idx = 1; idx + 1 < 101; idx++) {
    if (EyeEF[idx] > ndbl) {
      ndbl = EyeEF[idx];
      maxdimlen = idx;
    }
  }

  *MaxValEF = ndbl;
  *LocMaxEF = maxdimlen + 1;
  covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 4, false);
  if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 5, ndbl < 2.0)) {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 2, true);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 13, true);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 25);
    *LevDec1 = 0.1877;
    *LocMaxEF = 1.0;
    SeqFinEF[0] = 2.0;
    *MaxValEF = 0.0;
    InterEF[0] = 0.1877;
  } else {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 2, false);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 13, false);
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 14, (real_T)(int8_T)
                   SeqFinEF[maxdimlen] - ndbl / 2.0 < 1.0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 26);
      *LevDec1 = 0.1877;
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 27);
      mtmp = muDoubleScalarRound((real_T)(int8_T)SeqFinEF[maxdimlen] - ndbl /
        2.0);
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &u_emlrtDCI, sp);
      }

      i8 = (int32_T)mtmp;
      if (!((i8 >= 1) && (i8 <= 100))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, 100, &gc_emlrtBCI, sp);
      }

      *LevDec1 = InterEF[i8 - 1];
    }
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 28);

  /* another way to measure the eye opening is the get all the */
  /* boxes and find all peaks on it, that will be a plato created */
  /* by the sequences of ones (which was zeros). From thos peaks, */
  /* the eye diagram will be the longer of them hence it will take */
  /* the most part of the vector that store the findpeaks result. */
  /* Thus, the middle of the eye will be basically the middle of */
  /* the peaks vector. */
  idx = 0;
  for (i8 = 0; i8 < 2; i8++) {
    sz[i8] = iv22[i8];
  }

  maxdimlen = 1;
  exitg3 = false;
  while ((!exitg3) && (maxdimlen < 101)) {
    b_guard3 = false;
    if (b_EyeAB[maxdimlen - 1]) {
      idx++;
      ii_data[idx - 1] = (int8_T)maxdimlen;
      if (idx >= 100) {
        exitg3 = true;
      } else {
        b_guard3 = true;
      }
    } else {
      b_guard3 = true;
    }

    if (b_guard3) {
      maxdimlen++;
    }
  }

  if (1 > idx) {
    i8 = 0;
  } else {
    i8 = idx;
  }

  if (1 > idx) {
    sz[1] = 0;
  } else {
    sz[1] = idx;
  }

  LocAB_size[0] = 1;
  LocAB_size[1] = i8;
  loop_ub = sz[0] * i8;
  for (i8 = 0; i8 < loop_ub; i8++) {
    LocAB_data[i8] = ii_data[i8];
  }

  st.site = &h_emlrtRSI;
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 15, covrtLogMcdc
                 (&emlrtCoverageInstance, 0U, 0U, 3, !covrtLogCond
                  (&emlrtCoverageInstance, 0U, 0U, 6, any(&st, LocAB_data,
          LocAB_size))))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 29);

    /* if for some reason there are no peaks, something went wrong. */
    LocAB_size[1] = 1;
    LocAB_data[0] = 1.0;
    LevelDec3 = 0.6953;

    /* mean(Levels(3:4));                       %by default the decission level will be set to 0.65 */
  } else if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 16, DecMod == 1.0)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 30);

    /* InterAB(LocAB(round(end/2)))<=LevDec3 */
    LevelDec3 = *LevDec3;
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 31);
    i8 = (int32_T)muDoubleScalarRound((real_T)sz[1] / 2.0);
    if (!((i8 >= 1) && (i8 <= sz[1]))) {
      emlrtDynamicBoundsCheckR2012b(i8, 1, sz[1], &hc_emlrtBCI, sp);
    }

    i8 = (int32_T)LocAB_data[i8 - 1];
    LevelDec3 = InterAB[i8 - 1];
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 32);
  idx = 0;
  for (i8 = 0; i8 < 2; i8++) {
    sz[i8] = iv22[i8];
  }

  maxdimlen = 1;
  exitg2 = false;
  while ((!exitg2) && (maxdimlen < 101)) {
    b_guard2 = false;
    if (b_EyeCD[maxdimlen - 1]) {
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
    i8 = 0;
  } else {
    i8 = idx;
  }

  if (1 > idx) {
    sz[1] = 0;
  } else {
    sz[1] = idx;
  }

  LocCD_size[0] = 1;
  LocCD_size[1] = i8;
  loop_ub = sz[0] * i8;
  for (i8 = 0; i8 < loop_ub; i8++) {
    LocCD_data[i8] = ii_data[i8];
  }

  st.site = &g_emlrtRSI;
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 17, covrtLogMcdc
                 (&emlrtCoverageInstance, 0U, 0U, 4, !covrtLogCond
                  (&emlrtCoverageInstance, 0U, 0U, 7, any(&st, LocCD_data,
          LocCD_size))))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 33);
    LocCD_size[1] = 1;
    LocCD_data[0] = 1.0;
    LevelDec2 = 0.4013;

    /* mean(Levels(2:3)); */
  } else if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 18, DecMod == 1.0)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 34);

    /* InterCD(LocCD(round(end/2)))>=LevDec2 */
    LevelDec2 = *LevDec2;
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 35);
    i8 = (int32_T)muDoubleScalarRound((real_T)sz[1] / 2.0);
    if (!((i8 >= 1) && (i8 <= sz[1]))) {
      emlrtDynamicBoundsCheckR2012b(i8, 1, sz[1], &ic_emlrtBCI, sp);
    }

    i8 = (int32_T)LocCD_data[i8 - 1];
    LevelDec2 = InterCD[i8 - 1];
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 36);
  idx = 0;
  for (i8 = 0; i8 < 2; i8++) {
    sz[i8] = iv22[i8];
  }

  maxdimlen = 1;
  exitg1 = false;
  while ((!exitg1) && (maxdimlen < 101)) {
    b_guard1 = false;
    if (b_EyeEF[maxdimlen - 1]) {
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
    i8 = 0;
  } else {
    i8 = idx;
  }

  if (1 > idx) {
    sz[1] = 0;
  } else {
    sz[1] = idx;
  }

  LocEF_size[0] = 1;
  LocEF_size[1] = i8;
  loop_ub = sz[0] * i8;
  for (i8 = 0; i8 < loop_ub; i8++) {
    LocEF_data[i8] = ii_data[i8];
  }

  st.site = &f_emlrtRSI;
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 19, covrtLogMcdc
                 (&emlrtCoverageInstance, 0U, 0U, 5, !covrtLogCond
                  (&emlrtCoverageInstance, 0U, 0U, 8, any(&st, LocEF_data,
          LocEF_size))))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 37);
    LocEF_size[1] = 1;
    LocEF_data[0] = 1.0;
    LevelDec1 = 0.1877;

    /* mean(Levels(1:2)); */
  } else if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 20, DecMod == 1.0)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 38);

    /* InterEF(LocEF(round(end/2)))<=LevDec1 */
    LevelDec1 = *LevDec1;
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 39);
    i8 = (int32_T)muDoubleScalarRound((real_T)sz[1] / 2.0);
    if (!((i8 >= 1) && (i8 <= sz[1]))) {
      emlrtDynamicBoundsCheckR2012b(i8, 1, sz[1], &jc_emlrtBCI, sp);
    }

    i8 = (int32_T)LocEF_data[i8 - 1];
    LevelDec1 = InterEF[i8 - 1];
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 40);
  i8 = (int8_T)SeqFinAB[(int32_T)*LocMaxAB - 1] - 1;
  if (!((i8 >= 1) && (i8 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i8, 1, 100, &kc_emlrtBCI, sp);
  }

  i7 = (int32_T)(((real_T)(int8_T)SeqFinAB[(int32_T)*LocMaxAB - 1] - *MaxValAB)
                 + 1.0);
  if (!((i7 >= 1) && (i7 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i7, 1, 100, &lc_emlrtBCI, sp);
  }

  ndbl = InterAB[i8 - 1] - InterAB[i7 - 1];
  *AberLev1 = muDoubleScalarAbs(ndbl);
  i8 = (int8_T)SeqFinCD[(int32_T)*LocMaxCD - 1] - 1;
  if (!((i8 >= 1) && (i8 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i8, 1, 100, &mc_emlrtBCI, sp);
  }

  i7 = (int32_T)(((real_T)(int8_T)SeqFinCD[(int32_T)*LocMaxCD - 1] - *MaxValCD)
                 + 1.0);
  if (!((i7 >= 1) && (i7 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i7, 1, 100, &nc_emlrtBCI, sp);
  }

  ndbl = InterCD[i8 - 1] - InterCD[i7 - 1];
  *AberLev2 = muDoubleScalarAbs(ndbl);
  i8 = (int8_T)SeqFinEF[(int32_T)*LocMaxEF - 1] - 1;
  if (!((i8 >= 1) && (i8 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i8, 1, 100, &oc_emlrtBCI, sp);
  }

  i7 = (int32_T)(((real_T)(int8_T)SeqFinEF[(int32_T)*LocMaxEF - 1] - *MaxValEF)
                 + 1.0);
  if (!((i7 >= 1) && (i7 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i7, 1, 100, &pc_emlrtBCI, sp);
  }

  ndbl = InterEF[i8 - 1] - InterEF[i7 - 1];
  *AberLev3 = muDoubleScalarAbs(ndbl);
  *ValsLev1 = *LevDec3;
  *ValsLev2 = *LevDec2;
  *ValsLev3 = *LevDec1;
  i8 = (int32_T)muDoubleScalarRound((real_T)LocAB_size[1] / 2.0);
  if (!((i8 >= 1) && (i8 <= LocAB_size[1]))) {
    emlrtDynamicBoundsCheckR2012b(i8, 1, LocAB_size[1], &qc_emlrtBCI, sp);
  }

  i8 = (int32_T)LocAB_data[i8 - 1];
  *ValsLev21 = InterAB[i8 - 1];
  i8 = (int32_T)muDoubleScalarRound((real_T)LocCD_size[1] / 2.0);
  if (!((i8 >= 1) && (i8 <= LocCD_size[1]))) {
    emlrtDynamicBoundsCheckR2012b(i8, 1, LocCD_size[1], &rc_emlrtBCI, sp);
  }

  i8 = (int32_T)LocCD_data[i8 - 1];
  *ValsLev22 = InterCD[i8 - 1];
  i8 = (int32_T)muDoubleScalarRound((real_T)LocEF_size[1] / 2.0);
  if (!((i8 >= 1) && (i8 <= LocEF_size[1]))) {
    emlrtDynamicBoundsCheckR2012b(i8, 1, LocEF_size[1], &sc_emlrtBCI, sp);
  }

  i8 = (int32_T)LocEF_data[i8 - 1];
  *ValsLev23 = InterEF[i8 - 1];

  /* %      Actualy Receiving Data */
  /* Once the signal was processed the next step is through a */
  /* comparator decide the actual information received. */
  mtmp = NPPB / 2.0;
  st.site = &e_emlrtRSI;
  b_st.site = &ac_emlrtRSI;
  if (muDoubleScalarIsNaN(mtmp) || muDoubleScalarIsNaN(NPPB)) {
    nx = 1;
    anew = rtNaN;
    apnd = Ix->size[1];
    empty_non_axis_sizes = false;
  } else if ((NPPB == 0.0) || ((mtmp < Ix->size[1]) && (NPPB < 0.0)) ||
             ((Ix->size[1] < mtmp) && (NPPB > 0.0))) {
    nx = 0;
    anew = mtmp;
    apnd = Ix->size[1];
    empty_non_axis_sizes = false;
  } else if (muDoubleScalarIsInf(mtmp)) {
    nx = 1;
    anew = rtNaN;
    apnd = Ix->size[1];
    if (muDoubleScalarIsInf(NPPB) || (mtmp == Ix->size[1])) {
      empty_non_axis_sizes = true;
    } else {
      empty_non_axis_sizes = false;
    }

    empty_non_axis_sizes = !empty_non_axis_sizes;
  } else if (muDoubleScalarIsInf(NPPB)) {
    nx = 1;
    anew = mtmp;
    apnd = Ix->size[1];
    empty_non_axis_sizes = false;
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
    maxdimlen = Ix->size[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, maxdimlen)) {
      ndbl++;
      apnd = Ix->size[1];
    } else if (cdiff > 0.0) {
      apnd = mtmp + (ndbl - 1.0) * NPPB;
    } else {
      ndbl++;
    }

    empty_non_axis_sizes = (2.147483647E+9 < ndbl);
    if (ndbl >= 0.0) {
      nx = (int32_T)ndbl;
    } else {
      nx = 0;
    }
  }

  c_st.site = &bc_emlrtRSI;
  if (!empty_non_axis_sizes) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &mc_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      0);
  }

  i8 = EyeMax->size[0] * EyeMax->size[1];
  EyeMax->size[0] = 1;
  EyeMax->size[1] = nx;
  emxEnsureCapacity(&b_st, (emxArray__common *)EyeMax, i8, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if (nx > 0) {
    EyeMax->data[0] = anew;
    if (nx > 1) {
      EyeMax->data[nx - 1] = apnd;
      maxdimlen = (nx - 1) / 2;
      c_st.site = &cc_emlrtRSI;
      for (idx = 1; idx < maxdimlen; idx++) {
        ndbl = (real_T)idx * NPPB;
        EyeMax->data[idx] = anew + ndbl;
        EyeMax->data[(nx - idx) - 1] = apnd - ndbl;
      }

      if (maxdimlen << 1 == nx - 1) {
        EyeMax->data[maxdimlen] = (anew + apnd) / 2.0;
      } else {
        ndbl = (real_T)maxdimlen * NPPB;
        EyeMax->data[maxdimlen] = anew + ndbl;
        EyeMax->data[maxdimlen + 1] = apnd - ndbl;
      }
    }
  }

  i8 = IxRec->size[0] * IxRec->size[1];
  IxRec->size[0] = 1;
  IxRec->size[1] = (int32_T)(2.0 * (real_T)EyeMax->size[1]);
  emxEnsureCapacity(sp, (emxArray__common *)IxRec, i8, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = (int32_T)(2.0 * (real_T)EyeMax->size[1]);
  for (i8 = 0; i8 < loop_ub; i8++) {
    IxRec->data[i8] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  i8 = IxRecDef->size[0] * IxRecDef->size[1];
  IxRecDef->size[0] = 1;
  IxRecDef->size[1] = (int32_T)(2.0 * (real_T)EyeMax->size[1]);
  emxEnsureCapacity(sp, (emxArray__common *)IxRecDef, i8, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = (int32_T)(2.0 * (real_T)EyeMax->size[1]);
  for (i8 = 0; i8 < loop_ub; i8++) {
    IxRecDef->data[i8] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  ContBit = 2U;
  ContBit1 = 2U;
  kk = 0;
  while (kk <= EyeMax->size[1] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 41);

    /* NPPB:length(Ix)                                       %The comparison process will be made for each symbol period */
    /*                  midaux = round(mean(SymLoc(1:round(end/2)))); */
    midaux = NPPB / 2.0;

    /* SymLoc(1); */
    mtmp = (((1.0 + (real_T)kk) - 1.0) * NPPB + NPPB / 2.0) + 1.0;
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &n_emlrtDCI, sp);
    }

    i8 = Ix->size[1];
    i7 = (int32_T)mtmp;
    if (!((i7 >= 1) && (i7 <= i8))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &wb_emlrtBCI, sp);
    }

    /* An small portion of the income signal is take for evaluation */
    /* Measuring the avarage value of the samples taken */
    /* Verifying the interval for each symbol received. */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 21, Ix->data[(int32_T)((((1.0
             + (real_T)kk) - 1.0) * NPPB + midaux) + 1.0) - 1] <= LevelDec1)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 42);

      /* If it is the lowest level the incoming data */
      i8 = IxRec->size[1];
      i7 = (int32_T)(ContBit - 1U);
      if (!((i7 >= 1) && (i7 <= i8))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &cd_emlrtBCI, sp);
      }

      IxRec->data[i7 - 1] = 0.0;
      i8 = IxRec->size[1];
      i7 = (int32_T)ContBit;
      if (!((i7 >= 1) && (i7 <= i8))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &dd_emlrtBCI, sp);
      }

      IxRec->data[i7 - 1] = 0.0;
      ContBit += 2U;

      /* IxRec = [IxRec 0 0];                                   %is 01 (1) */
    } else if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 9, Ix->data[(int32_T)
                            ((((1.0 + (real_T)kk) - 1.0) * NPPB + midaux) + 1.0)
                - 1] <= LevelDec2) && covrtLogCond(&emlrtCoverageInstance, 0U,
                0U, 10, Ix->data[(int32_T)((((1.0 + (real_T)kk) - 1.0) * NPPB +
                  midaux) + 1.0) - 1] > LevelDec1)) {
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 6, true);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 22, true);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 43);

      /* If it is the second level the incoming data */
      i8 = IxRec->size[1];
      i7 = (int32_T)(ContBit - 1U);
      if (!((i7 >= 1) && (i7 <= i8))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &ad_emlrtBCI, sp);
      }

      IxRec->data[i7 - 1] = 0.0;
      i8 = IxRec->size[1];
      i7 = (int32_T)ContBit;
      if (!((i7 >= 1) && (i7 <= i8))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &bd_emlrtBCI, sp);
      }

      IxRec->data[i7 - 1] = 1.0;
      ContBit += 2U;

      /* IxRec = [IxRec 0 1];                                   %is 00 (0) */
    } else {
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 6, false);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 22, false);
      if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 11, Ix->data[(int32_T)
                       ((((1.0 + (real_T)kk) - 1.0) * NPPB + midaux) + 1.0) - 1]
                       <= LevelDec3) && covrtLogCond(&emlrtCoverageInstance, 0U,
           0U, 12, Ix->data[(int32_T)((((1.0 + (real_T)kk) - 1.0) * NPPB +
             midaux) + 1.0) - 1] > LevelDec2)) {
        covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 7, true);
        covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 23, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 44);

        /* If it is the tird level the incoming data */
        i8 = IxRec->size[1];
        i7 = (int32_T)(ContBit - 1U);
        if (!((i7 >= 1) && (i7 <= i8))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &xc_emlrtBCI, sp);
        }

        IxRec->data[i7 - 1] = 1.0;
        i8 = IxRec->size[1];
        i7 = (int32_T)ContBit;
        if (!((i7 >= 1) && (i7 <= i8))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &yc_emlrtBCI, sp);
        }

        IxRec->data[i7 - 1] = 1.0;
        ContBit += 2U;

        /* IxRec = [IxRec 1 1];                                   %is 10 (2) */
      } else {
        covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 7, false);
        covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 23, false);
        if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 24, Ix->data[(int32_T)
                       ((((1.0 + (real_T)kk) - 1.0) * NPPB + midaux) + 1.0) - 1]
                       > LevelDec3)) {
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 45);

          /* If it is the uper level the incoming data */
          i8 = IxRec->size[1];
          i7 = (int32_T)(ContBit - 1U);
          if (!((i7 >= 1) && (i7 <= i8))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &vc_emlrtBCI, sp);
          }

          IxRec->data[i7 - 1] = 1.0;
          i8 = IxRec->size[1];
          i7 = (int32_T)ContBit;
          if (!((i7 >= 1) && (i7 <= i8))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &wc_emlrtBCI, sp);
          }

          IxRec->data[i7 - 1] = 0.0;
          ContBit += 2U;

          /* IxRec = [IxRec 1 0];                                   %is 11 (3) */
        } else {
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 46);

          /* If for some misteriose reason neither of previous verification were sucedded */
          i8 = IxRec->size[1];
          i7 = (int32_T)(ContBit - 1U);
          if (!((i7 >= 1) && (i7 <= i8))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &tc_emlrtBCI, sp);
          }

          IxRec->data[i7 - 1] = 0.0;
          i8 = IxRec->size[1];
          i7 = (int32_T)ContBit;
          if (!((i7 >= 1) && (i7 <= i8))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &uc_emlrtBCI, sp);
          }

          IxRec->data[i7 - 1] = 0.0;
          ContBit += 2U;

          /* IxRec = [IxRec 0 0];                                   %by default the current data is set to be 00 (0) */
        }
      }
    }

    /* Verifying the interval for each symbol received. */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 25, Ix->data[(int32_T)((((1.0
             + (real_T)kk) - 1.0) * NPPB + midaux) + 1.0) - 1] <= *DecLevDef1))
    {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 47);

      /* If it is the lowest level the incoming data */
      i8 = IxRecDef->size[1];
      i7 = (int32_T)(ContBit1 - 1U);
      if (!((i7 >= 1) && (i7 <= i8))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &md_emlrtBCI, sp);
      }

      IxRecDef->data[i7 - 1] = 0.0;
      i8 = IxRecDef->size[1];
      i7 = (int32_T)ContBit1;
      if (!((i7 >= 1) && (i7 <= i8))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &nd_emlrtBCI, sp);
      }

      IxRecDef->data[i7 - 1] = 0.0;
      ContBit1 += 2U;

      /* IxRecDef = [IxRecDef 0 0];                             %is 01 (1) */
    } else if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 13, Ix->data
                            [(int32_T)((((1.0 + (real_T)kk) - 1.0) * NPPB +
                  midaux) + 1.0) - 1] <= *DecLevDef2) && covrtLogCond
               (&emlrtCoverageInstance, 0U, 0U, 14, Ix->data[(int32_T)((((1.0 +
        (real_T)kk) - 1.0) * NPPB + midaux) + 1.0) - 1] > *DecLevDef1)) {
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 8, true);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 26, true);
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 48);

      /* If it is the second level the incoming data */
      i8 = IxRecDef->size[1];
      i7 = (int32_T)(ContBit1 - 1U);
      if (!((i7 >= 1) && (i7 <= i8))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &kd_emlrtBCI, sp);
      }

      IxRecDef->data[i7 - 1] = 0.0;
      i8 = IxRecDef->size[1];
      i7 = (int32_T)ContBit1;
      if (!((i7 >= 1) && (i7 <= i8))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &ld_emlrtBCI, sp);
      }

      IxRecDef->data[i7 - 1] = 1.0;
      ContBit1 += 2U;

      /* IxRecDef = [IxRecDef 0 1];                             %is 00 (0) */
    } else {
      covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 8, false);
      covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 26, false);
      if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 15, Ix->data[(int32_T)
                       ((((1.0 + (real_T)kk) - 1.0) * NPPB + midaux) + 1.0) - 1]
                       <= *DecLevDef3) && covrtLogCond(&emlrtCoverageInstance,
           0U, 0U, 16, Ix->data[(int32_T)((((1.0 + (real_T)kk) - 1.0) * NPPB +
             midaux) + 1.0) - 1] > *DecLevDef2)) {
        covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 9, true);
        covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 27, true);
        covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 49);

        /* If it is the tird level the incoming data */
        i8 = IxRecDef->size[1];
        i7 = (int32_T)(ContBit1 - 1U);
        if (!((i7 >= 1) && (i7 <= i8))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &id_emlrtBCI, sp);
        }

        IxRecDef->data[i7 - 1] = 1.0;
        i8 = IxRecDef->size[1];
        i7 = (int32_T)ContBit1;
        if (!((i7 >= 1) && (i7 <= i8))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &jd_emlrtBCI, sp);
        }

        IxRecDef->data[i7 - 1] = 1.0;
        ContBit1 += 2U;

        /* IxRecDef = [IxRecDef 1 1];                             %is 10 (2) */
      } else {
        covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 9, false);
        covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 27, false);
        if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 28, Ix->data[(int32_T)
                       ((((1.0 + (real_T)kk) - 1.0) * NPPB + midaux) + 1.0) - 1]
                       > *DecLevDef3)) {
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 50);

          /* If it is the uper level the incoming data */
          i8 = IxRecDef->size[1];
          i7 = (int32_T)(ContBit1 - 1U);
          if (!((i7 >= 1) && (i7 <= i8))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &gd_emlrtBCI, sp);
          }

          IxRecDef->data[i7 - 1] = 1.0;
          i8 = IxRecDef->size[1];
          i7 = (int32_T)ContBit1;
          if (!((i7 >= 1) && (i7 <= i8))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &hd_emlrtBCI, sp);
          }

          IxRecDef->data[i7 - 1] = 0.0;
          ContBit1 += 2U;

          /* IxRecDef = [IxRecDef 1 0];                             %is 11 (3) */
        } else {
          covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 51);

          /* If for some misteriose reason neither of previous verification were sucedded */
          i8 = IxRecDef->size[1];
          i7 = (int32_T)(ContBit1 - 1U);
          if (!((i7 >= 1) && (i7 <= i8))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &ed_emlrtBCI, sp);
          }

          IxRecDef->data[i7 - 1] = 0.0;
          i8 = IxRecDef->size[1];
          i7 = (int32_T)ContBit1;
          if (!((i7 >= 1) && (i7 <= i8))) {
            emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &fd_emlrtBCI, sp);
          }

          IxRecDef->data[i7 - 1] = 0.0;
          ContBit1 += 2U;

          /* IxRecDef = [IxRecDef 0 0];                             %by default the current data is set to be 00 (0) */
        }
      }
    }

    kk++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 52);
  loop_ub = TxDataMat->size[1];
  if (ThisCarr != (int32_T)muDoubleScalarFloor(ThisCarr)) {
    emlrtIntegerCheckR2012b(ThisCarr, &o_emlrtDCI, sp);
  }

  i8 = TxDataMat->size[0];
  maxdimlen = (int32_T)ThisCarr;
  if (!((maxdimlen >= 1) && (maxdimlen <= i8))) {
    emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i8, &xb_emlrtBCI, sp);
  }

  i8 = EyeMax->size[0] * EyeMax->size[1];
  EyeMax->size[0] = 1;
  EyeMax->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)EyeMax, i8, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i8 = 0; i8 < loop_ub; i8++) {
    EyeMax->data[EyeMax->size[0] * i8] = TxDataMat->data[(maxdimlen +
      TxDataMat->size[0] * i8) - 1];
  }

  emxInit_real_T(sp, &b_TxDataMat, 2, &emlrtRTEI, true);
  st.site = &d_emlrtRSI;
  i8 = TxDataMat->size[1];
  b_st.site = &x_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  assertValidSizeArg(&c_st, Nb4Pam);
  c_st.site = &bb_emlrtRSI;
  assertValidSizeArg(&c_st, CurTesSiz);
  c_sz[0] = (int32_T)Nb4Pam;
  c_sz[1] = (int32_T)CurTesSiz;
  loop_ub = TxDataMat->size[1];
  i7 = b_TxDataMat->size[0] * b_TxDataMat->size[1];
  b_TxDataMat->size[0] = 1;
  b_TxDataMat->size[1] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)b_TxDataMat, i7, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i7 = 0; i7 < loop_ub; i7++) {
    b_TxDataMat->data[b_TxDataMat->size[0] * i7] = TxDataMat->data[((int32_T)
      ThisCarr + TxDataMat->size[0] * i7) - 1];
  }

  for (i7 = 0; i7 < 2; i7++) {
    varargin_1[i7] = (uint32_T)b_TxDataMat->size[i7];
  }

  emxFree_real_T(&b_TxDataMat);
  maxdimlen = 1;
  if ((int32_T)varargin_1[1] > 1) {
    maxdimlen = (int32_T)varargin_1[1];
  }

  if (i8 > maxdimlen) {
    maxdimlen = TxDataMat->size[1];
  }

  if ((int32_T)Nb4Pam > maxdimlen) {
    b_st.site = &y_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)CurTesSiz > maxdimlen) {
    b_st.site = &y_emlrtRSI;
    error(&b_st);
  }

  for (i7 = 0; i7 < 2; i7++) {
    i9 = c_sz[i7];
    if (!(i9 >= 0)) {
      emlrtNonNegativeCheckR2012b(i9, &q_emlrtDCI, &st);
    }
  }

  i7 = TxDataB->size[0] * TxDataB->size[1];
  TxDataB->size[0] = (int32_T)Nb4Pam;
  TxDataB->size[1] = (int32_T)CurTesSiz;
  emxEnsureCapacity(&st, (emxArray__common *)TxDataB, i7, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (i8 == TxDataB->size[0] * TxDataB->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &lc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &ab_emlrtRSI;
  i7 = TxDataMat->size[1];
  if (1 > i7) {
    empty_non_axis_sizes = false;
  } else {
    i7 = TxDataMat->size[1];
    empty_non_axis_sizes = (i7 > 2147483646);
  }

  if (empty_non_axis_sizes) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= i8; idx++) {
    TxDataB->data[idx] = EyeMax->data[idx];
  }

  emxFree_real_T(&EyeMax);
  mtmp = 1.0 + 2.0 * SyncPeriod;
  ndbl = (real_T)TxDataB->size[0] - 2.0 * SyncPeriod;
  if (mtmp > ndbl) {
    i7 = 1;
    i8 = 1;
  } else {
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &p_emlrtDCI, sp);
    }

    i8 = TxDataB->size[0];
    i7 = (int32_T)mtmp;
    if (!((i7 >= 1) && (i7 <= i8))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, i8, &yb_emlrtBCI, sp);
    }

    if (ndbl != (int32_T)muDoubleScalarFloor(ndbl)) {
      emlrtIntegerCheckR2012b(ndbl, &p_emlrtDCI, sp);
    }

    i8 = TxDataB->size[0];
    i9 = (int32_T)ndbl;
    if (!((i9 >= 1) && (i9 <= i8))) {
      emlrtDynamicBoundsCheckR2012b(i9, 1, i8, &yb_emlrtBCI, sp);
    }

    i8 = i9 + 1;
  }

  emxInit_real_T(sp, &b_TxDataB, 2, &emlrtRTEI, true);
  st.site = &c_emlrtRSI;
  i9 = TxDataB->size[1];
  mtmp = (real_T)(i8 - i7) * (real_T)i9;
  i9 = TxDataB->size[1];
  nx = (i8 - i7) * i9;
  b_st.site = &x_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  assertValidSizeArg(&c_st, mtmp);
  loop_ub = TxDataB->size[1];
  i9 = b_TxDataB->size[0] * b_TxDataB->size[1];
  b_TxDataB->size[0] = i8 - i7;
  b_TxDataB->size[1] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)b_TxDataB, i9, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i9 = 0; i9 < loop_ub; i9++) {
    b_loop_ub = i8 - i7;
    for (i10 = 0; i10 < b_loop_ub; i10++) {
      b_TxDataB->data[i10 + b_TxDataB->size[0] * i9] = TxDataB->data[((i7 + i10)
        + TxDataB->size[0] * i9) - 1];
    }
  }

  for (i9 = 0; i9 < 2; i9++) {
    varargin_1[i9] = (uint32_T)b_TxDataB->size[i9];
  }

  emxFree_real_T(&b_TxDataB);
  maxdimlen = (int32_T)varargin_1[0];
  if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
    maxdimlen = (int32_T)varargin_1[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (1 > maxdimlen) {
    b_st.site = &y_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)mtmp > maxdimlen) {
    b_st.site = &y_emlrtRSI;
    error(&b_st);
  }

  i9 = TxData->size[0] * TxData->size[1];
  TxData->size[0] = 1;
  TxData->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(&st, (emxArray__common *)TxData, i9, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (nx == TxData->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &lc_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &ab_emlrtRSI;
  if ((!(1 > nx)) && (nx > 2147483646)) {
    c_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= nx; idx++) {
    TxData->data[idx] = TxDataB->data[((i7 + idx % (i8 - i7)) + TxDataB->size[0]
      * (idx / (i8 - i7))) - 1];
  }

  emxFree_real_T(&TxDataB);
  st.site = &b_emlrtRSI;
  xor(&st, TxData, IxRec, r5);
  st.site = &b_emlrtRSI;
  BitErr = sum(&st, r5);

  /* Comparison between the Transmited and received and counting the differences */
  st.site = &emlrtRSI;
  xor(&st, TxData, IxRecDef, r5);
  st.site = &emlrtRSI;
  BitErrAux2 = sum(&st, r5);

  /* Comparison between the Transmited and received and counting the differences */
  emxFree_boolean_T(&r5);
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 29, BitErr != 0.0)) {
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 30, BitErrAux2 < BitErr)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 53);
      BitErr = BitErrAux2;
    }
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 54);
    *DecLevDef1 = LevelDec1;
    *DecLevDef2 = LevelDec2;
    *DecLevDef3 = LevelDec3;
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 55);
  *Ber4PAM = BitErr / ((Nb4Pam - 4.0 * SyncPeriod) * CurTesSiz);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (RecDowPam4.c) */

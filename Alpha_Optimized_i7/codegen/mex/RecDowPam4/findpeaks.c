/*
 * findpeaks.c
 *
 * Code generation for function 'findpeaks'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "findpeaks.h"
#include "RecDowPam4_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "sort1.h"
#include "eml_setop.h"
#include "scalexpAlloc.h"
#include "indexShapeCheck.h"
#include "diff.h"
#include "_coder_RecDowPam4_api.h"
#include "RecDowPam4_mexutil.h"
#include "RecDowPam4_data.h"

/* Variable Definitions */
static emlrtRSInfo mb_emlrtRSI = { 133, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo nb_emlrtRSI = { 137, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo ob_emlrtRSI = { 141, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo pb_emlrtRSI = { 142, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo qb_emlrtRSI = { 154, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo rb_emlrtRSI = { 158, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo sb_emlrtRSI = { 161, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo tb_emlrtRSI = { 162, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo ub_emlrtRSI = { 175, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo vb_emlrtRSI = { 352, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo wb_emlrtRSI = { 330, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo xb_emlrtRSI = { 233, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo yb_emlrtRSI = { 21, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo dc_emlrtRSI = { 275, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtRSInfo ec_emlrtRSI = { 344, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtRSInfo fc_emlrtRSI = { 15, "num2str",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\num2str.m"
};

static emlrtRSInfo gc_emlrtRSI = { 363, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo hc_emlrtRSI = { 370, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo ic_emlrtRSI = { 44, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo jc_emlrtRSI = { 234, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo kc_emlrtRSI = { 253, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo mc_emlrtRSI = { 392, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo nc_emlrtRSI = { 389, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo oc_emlrtRSI = { 386, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo pc_emlrtRSI = { 381, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo qc_emlrtRSI = { 382, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo rc_emlrtRSI = { 377, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo uc_emlrtRSI = { 13, "sign",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elfun\\sign.m"
};

static emlrtRSInfo vc_emlrtRSI = { 24, "applyScalarFunctionInPlace",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"
};

static emlrtRSInfo wc_emlrtRSI = { 412, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo xc_emlrtRSI = { 81, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo yc_emlrtRSI = { 243, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo ad_emlrtRSI = { 269, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo bd_emlrtRSI = { 657, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo cd_emlrtRSI = { 23, "union",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\union.m" };

static emlrtRSInfo dd_emlrtRSI = { 70, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"
};

static emlrtRSInfo jd_emlrtRSI = { 729, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo kd_emlrtRSI = { 738, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo ld_emlrtRSI = { 752, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo md_emlrtRSI = { 26, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"
};

static emlrtRSInfo te_emlrtRSI = { 766, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo ue_emlrtRSI = { 776, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtMCInfo emlrtMCI = { 52, 19, "flt2str",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"
};

static emlrtRTEInfo g_emlrtRTEI = { 1, 30, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo h_emlrtRTEI = { 19, 24, "scalexpAllocNoCheck",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 16, 9, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 141, 1, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo k_emlrtRTEI = { 412, 1, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo l_emlrtRTEI = { 735, 1, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo m_emlrtRTEI = { 739, 1, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo n_emlrtRTEI = { 741, 1, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo o_emlrtRTEI = { 188, 72, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo p_emlrtRTEI = { 361, 32, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo q_emlrtRTEI = { 253, 13, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 366, 1, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo s_emlrtRTEI = { 36, 6, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 374, 28, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo u_emlrtRTEI = { 377, 1, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo v_emlrtRTEI = { 380, 1, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo w_emlrtRTEI = { 386, 1, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtECInfo emlrtECI = { -1, 746, 15, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtECInfo b_emlrtECI = { -1, 746, 25, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo vb_emlrtRTEI = { 17, 19, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"
};

static emlrtECInfo c_emlrtECI = { -1, 413, 11, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 401, 13, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 412, 12, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 412, 21, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 413, 11, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 734, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 735, 8, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 739, 13, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 752, 12, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 743, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 746, 37, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 746, 66, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 747, 5, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 766, 17, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 766, 19, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 766, 19, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 1 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 769, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 165, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtDCInfo c_emlrtDCI = { 165, 7, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 1 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 790, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 791, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 413, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 401, 9, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtRTEInfo wb_emlrtRTEI = { 157, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtRTEInfo xb_emlrtRTEI = { 271, 28, "validateattributes",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"
};

static emlrtRTEInfo yb_emlrtRTEI = { 254, 5, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 330, 83, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtRTEInfo ac_emlrtRTEI = { 243, 9, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtECInfo d_emlrtECI = { -1, 363, 13, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 367, 1, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtECInfo e_emlrtECI = { -1, 392, 17, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 392, 29, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 392, 17, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtECInfo f_emlrtECI = { -1, 381, 21, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtECInfo g_emlrtECI = { -1, 382, 22, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 382, 41, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 382, 22, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtECInfo h_emlrtECI = { -1, 381, 22, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 381, 40, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 381, 22, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 383, 9, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 386, 15, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtDCInfo d_emlrtDCI = { 386, 15, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 1 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 395, 12, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 396, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtRSInfo cf_emlrtRSI = { 52, "flt2str",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\flt2str.m"
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[23]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[23]);
static void findLocalMaxima(const emlrtStack *sp, emxArray_real_T *yTemp,
  emxArray_real_T *iPk, emxArray_real_T *iInflect);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[23]);
static void getAllPeaks(const emlrtStack *sp, const emxArray_real_T *y,
  emxArray_real_T *iPk, emxArray_real_T *iInf, emxArray_real_T *iInflect);
static void parse_inputs(const emlrtStack *sp, const emxArray_real_T *Yin,
  real_T varargin_2, emxArray_real_T *y, emxArray_real_T *x, real_T *Pd);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[23])
{
  g_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m5;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m5, 2, pArrays, "sprintf", true, location);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *c_sprintf,
  const char_T *identifier, char_T y[23])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(c_sprintf), &thisId, y);
  emlrtDestroyArray(&c_sprintf);
}

static void findLocalMaxima(const emlrtStack *sp, emxArray_real_T *yTemp,
  emxArray_real_T *iPk, emxArray_real_T *iInflect)
{
  emxArray_real_T *r2;
  int32_T i4;
  int32_T absb;
  int32_T ndbl;
  int32_T apnd;
  int32_T cdiff;
  emxArray_real_T *y;
  emxArray_real_T *iTemp;
  emxArray_boolean_T *yFinite;
  emxArray_boolean_T *x;
  int32_T iv2[2];
  int32_T iv3[2];
  int32_T iv4[2];
  int32_T iv5[2];
  emxArray_boolean_T *r3;
  emxArray_int32_T *ii;
  boolean_T exitg3;
  boolean_T guard3 = false;
  int32_T iv6[2];
  emxArray_int32_T *r4;
  emxArray_real_T *b_iTemp;
  emxArray_real_T *b_yTemp;
  emxArray_real_T *s;
  real_T d0;
  emxArray_real_T *b_x;
  boolean_T overflow;
  boolean_T exitg2;
  boolean_T guard2 = false;
  int32_T iv7[2];
  int32_T iv8[2];
  int32_T iv9[2];
  emxArray_int32_T *b_ii;
  boolean_T exitg1;
  boolean_T guard1 = false;
  int32_T iv10[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T1(sp, &r2, 1, &t_emlrtRTEI, true);
  i4 = r2->size[0];
  r2->size[0] = 2 + yTemp->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r2, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  r2->data[0] = rtNaN;
  absb = yTemp->size[0];
  for (i4 = 0; i4 < absb; i4++) {
    r2->data[i4 + 1] = yTemp->data[i4];
  }

  r2->data[1 + yTemp->size[0]] = rtNaN;
  i4 = yTemp->size[0];
  yTemp->size[0] = r2->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)yTemp, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  absb = r2->size[0];
  for (i4 = 0; i4 < absb; i4++) {
    yTemp->data[i4] = r2->data[i4];
  }

  emxFree_real_T(&r2);
  st.site = &rc_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  c_st.site = &ac_emlrtRSI;
  ndbl = (int32_T)muDoubleScalarFloor(((real_T)yTemp->size[0] - 1.0) + 0.5);
  apnd = ndbl + 1;
  cdiff = (ndbl - yTemp->size[0]) + 1;
  absb = yTemp->size[0];
  if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
    ndbl++;
    apnd = yTemp->size[0];
  } else if (cdiff > 0) {
    apnd = ndbl;
  } else {
    ndbl++;
  }

  emxInit_real_T(&c_st, &y, 2, &t_emlrtRTEI, true);
  i4 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = ndbl;
  emxEnsureCapacity(&c_st, (emxArray__common *)y, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  y->data[0] = 1.0;
  if (ndbl > 1) {
    y->data[ndbl - 1] = apnd;
    cdiff = (ndbl - 1) / 2;
    for (absb = 1; absb < cdiff; absb++) {
      y->data[absb] = 1.0 + (real_T)absb;
      y->data[(ndbl - absb) - 1] = apnd - absb;
    }

    if (cdiff << 1 == ndbl - 1) {
      y->data[cdiff] = (1.0 + (real_T)apnd) / 2.0;
    } else {
      y->data[cdiff] = 1.0 + (real_T)cdiff;
      y->data[cdiff + 1] = apnd - cdiff;
    }
  }

  emxInit_real_T1(&c_st, &iTemp, 1, &u_emlrtRTEI, true);
  i4 = iTemp->size[0];
  iTemp->size[0] = y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)iTemp, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  absb = y->size[1];
  for (i4 = 0; i4 < absb; i4++) {
    iTemp->data[i4] = y->data[y->size[0] * i4];
  }

  emxFree_real_T(&y);
  emxInit_boolean_T(sp, &yFinite, 1, &v_emlrtRTEI, true);
  i4 = yFinite->size[0];
  yFinite->size[0] = yTemp->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)yFinite, i4, (int32_T)sizeof
                    (boolean_T), &t_emlrtRTEI);
  absb = yTemp->size[0];
  for (i4 = 0; i4 < absb; i4++) {
    yFinite->data[i4] = muDoubleScalarIsNaN(yTemp->data[i4]);
  }

  i4 = yFinite->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)yFinite, i4, (int32_T)sizeof
                    (boolean_T), &t_emlrtRTEI);
  absb = yFinite->size[0];
  for (i4 = 0; i4 < absb; i4++) {
    yFinite->data[i4] = !yFinite->data[i4];
  }

  emxInit_boolean_T(sp, &x, 1, &t_emlrtRTEI, true);
  i4 = yTemp->size[0];
  ndbl = (int32_T)((real_T)yTemp->size[0] - 1.0);
  if (!((ndbl >= 1) && (ndbl <= i4))) {
    emlrtDynamicBoundsCheckR2012b(ndbl, 1, i4, &cb_emlrtBCI, sp);
  }

  i4 = yTemp->size[0];
  iv2[0] = 1;
  iv2[1] = i4 - 1;
  st.site = &pc_emlrtRSI;
  indexShapeCheck(&st, yTemp->size[0], iv2);
  i4 = yTemp->size[0];
  ndbl = yTemp->size[0];
  if (!((ndbl >= 1) && (ndbl <= i4))) {
    emlrtDynamicBoundsCheckR2012b(ndbl, 1, i4, &bb_emlrtBCI, sp);
  }

  i4 = yTemp->size[0] - 1;
  iv3[0] = 1;
  iv3[1] = i4;
  st.site = &pc_emlrtRSI;
  indexShapeCheck(&st, yTemp->size[0], iv3);
  i4 = yTemp->size[0];
  ndbl = yTemp->size[0] - 1;
  i4--;
  if (i4 != ndbl) {
    emlrtSizeEqCheck1DR2012b(i4, ndbl, &h_emlrtECI, sp);
  }

  i4 = yFinite->size[0];
  ndbl = (int32_T)((real_T)yFinite->size[0] - 1.0);
  if (!((ndbl >= 1) && (ndbl <= i4))) {
    emlrtDynamicBoundsCheckR2012b(ndbl, 1, i4, &ab_emlrtBCI, sp);
  }

  i4 = yFinite->size[0];
  iv4[0] = 1;
  iv4[1] = i4 - 1;
  st.site = &qc_emlrtRSI;
  indexShapeCheck(&st, yFinite->size[0], iv4);
  i4 = yFinite->size[0];
  ndbl = yFinite->size[0];
  if (!((ndbl >= 1) && (ndbl <= i4))) {
    emlrtDynamicBoundsCheckR2012b(ndbl, 1, i4, &y_emlrtBCI, sp);
  }

  i4 = yFinite->size[0] - 1;
  iv5[0] = 1;
  iv5[1] = i4;
  st.site = &qc_emlrtRSI;
  indexShapeCheck(&st, yFinite->size[0], iv5);
  i4 = yFinite->size[0];
  ndbl = yFinite->size[0] - 1;
  i4--;
  if (i4 != ndbl) {
    emlrtSizeEqCheck1DR2012b(i4, ndbl, &g_emlrtECI, sp);
  }

  absb = yTemp->size[0] - 2;
  i4 = x->size[0];
  x->size[0] = absb + 1;
  emxEnsureCapacity(sp, (emxArray__common *)x, i4, (int32_T)sizeof(boolean_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 <= absb; i4++) {
    x->data[i4] = (yTemp->data[i4] != yTemp->data[1 + i4]);
  }

  emxInit_boolean_T(sp, &r3, 1, &t_emlrtRTEI, true);
  absb = yFinite->size[0] - 2;
  i4 = r3->size[0];
  r3->size[0] = absb + 1;
  emxEnsureCapacity(sp, (emxArray__common *)r3, i4, (int32_T)sizeof(boolean_T),
                    &t_emlrtRTEI);
  for (i4 = 0; i4 <= absb; i4++) {
    r3->data[i4] = (yFinite->data[i4] || yFinite->data[1 + i4]);
  }

  emxFree_boolean_T(&yFinite);
  i4 = x->size[0];
  ndbl = r3->size[0];
  if (i4 != ndbl) {
    emlrtSizeEqCheck1DR2012b(i4, ndbl, &f_emlrtECI, sp);
  }

  st.site = &pc_emlrtRSI;
  i4 = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)x, i4, (int32_T)sizeof(boolean_T),
                    &t_emlrtRTEI);
  absb = x->size[0];
  for (i4 = 0; i4 < absb; i4++) {
    x->data[i4] = (x->data[i4] && r3->data[i4]);
  }

  emxFree_boolean_T(&r3);
  emxInit_int32_T(&st, &ii, 1, &s_emlrtRTEI, true);
  b_st.site = &ic_emlrtRSI;
  absb = x->size[0];
  ndbl = 0;
  i4 = ii->size[0];
  ii->size[0] = x->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)ii, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  c_st.site = &jc_emlrtRSI;
  cdiff = 1;
  exitg3 = false;
  while ((!exitg3) && (cdiff <= absb)) {
    guard3 = false;
    if (x->data[cdiff - 1]) {
      ndbl++;
      ii->data[ndbl - 1] = cdiff;
      if (ndbl >= absb) {
        exitg3 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }

    if (guard3) {
      cdiff++;
    }
  }

  if (ndbl <= x->size[0]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &ac_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (x->size[0] == 1) {
    if (ndbl == 0) {
      i4 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i4, (int32_T)sizeof
                        (int32_T), &t_emlrtRTEI);
    }
  } else {
    if (1 > ndbl) {
      i4 = 0;
    } else {
      i4 = ndbl;
    }

    iv6[0] = 1;
    iv6[1] = i4;
    c_st.site = &kc_emlrtRSI;
    indexShapeCheck(&c_st, ii->size[0], iv6);
    ndbl = ii->size[0];
    ii->size[0] = i4;
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, ndbl, (int32_T)sizeof
                      (int32_T), &q_emlrtRTEI);
  }

  emxInit_int32_T(&b_st, &r4, 1, &t_emlrtRTEI, true);
  cdiff = iTemp->size[0];
  i4 = r4->size[0];
  r4->size[0] = 1 + ii->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r4, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  if (!(1 <= cdiff)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, cdiff, &db_emlrtBCI, sp);
  }

  r4->data[0] = 1;
  absb = ii->size[0];
  for (i4 = 0; i4 < absb; i4++) {
    ndbl = ii->data[i4] + 1;
    if (!((ndbl >= 1) && (ndbl <= cdiff))) {
      emlrtDynamicBoundsCheckR2012b(ndbl, 1, cdiff, &db_emlrtBCI, sp);
    }

    r4->data[i4 + 1] = ndbl;
  }

  emxInit_real_T1(sp, &b_iTemp, 1, &t_emlrtRTEI, true);
  i4 = b_iTemp->size[0];
  b_iTemp->size[0] = r4->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_iTemp, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  absb = r4->size[0];
  for (i4 = 0; i4 < absb; i4++) {
    b_iTemp->data[i4] = iTemp->data[r4->data[i4] - 1];
  }

  emxFree_int32_T(&r4);
  i4 = iTemp->size[0];
  iTemp->size[0] = b_iTemp->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)iTemp, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  absb = b_iTemp->size[0];
  for (i4 = 0; i4 < absb; i4++) {
    iTemp->data[i4] = b_iTemp->data[i4];
  }

  emxFree_real_T(&b_iTemp);
  emxInit_real_T1(sp, &b_yTemp, 1, &t_emlrtRTEI, true);
  cdiff = yTemp->size[0];
  i4 = b_yTemp->size[0];
  b_yTemp->size[0] = iTemp->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_yTemp, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  absb = iTemp->size[0];
  for (i4 = 0; i4 < absb; i4++) {
    d0 = iTemp->data[i4];
    if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
      emlrtIntegerCheckR2012b(d0, &d_emlrtDCI, sp);
    }

    ndbl = (int32_T)d0;
    if (!((ndbl >= 1) && (ndbl <= cdiff))) {
      emlrtDynamicBoundsCheckR2012b(ndbl, 1, cdiff, &eb_emlrtBCI, sp);
    }

    b_yTemp->data[i4] = yTemp->data[ndbl - 1];
  }

  emxInit_real_T1(sp, &s, 1, &w_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_x, 1, &t_emlrtRTEI, true);
  st.site = &oc_emlrtRSI;
  diff(&st, b_yTemp, b_x);
  st.site = &oc_emlrtRSI;
  b_st.site = &uc_emlrtRSI;
  i4 = s->size[0];
  s->size[0] = b_x->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)s, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  absb = b_x->size[0];
  emxFree_real_T(&b_yTemp);
  for (i4 = 0; i4 < absb; i4++) {
    s->data[i4] = b_x->data[i4];
  }

  c_st.site = &vc_emlrtRSI;
  overflow = ((!(1 > b_x->size[0])) && (b_x->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (absb = 0; absb + 1 <= b_x->size[0]; absb++) {
    s->data[absb] = muDoubleScalarSign(s->data[absb]);
  }

  st.site = &nc_emlrtRSI;
  b_st.site = &nc_emlrtRSI;
  diff(&b_st, s, b_x);
  i4 = x->size[0];
  x->size[0] = b_x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)x, i4, (int32_T)sizeof(boolean_T),
                    &t_emlrtRTEI);
  absb = b_x->size[0];
  for (i4 = 0; i4 < absb; i4++) {
    x->data[i4] = (b_x->data[i4] < 0.0);
  }

  emxFree_real_T(&b_x);
  b_st.site = &ic_emlrtRSI;
  absb = x->size[0];
  ndbl = 0;
  i4 = ii->size[0];
  ii->size[0] = x->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)ii, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  c_st.site = &jc_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  cdiff = 1;
  exitg2 = false;
  while ((!exitg2) && (cdiff <= absb)) {
    guard2 = false;
    if (x->data[cdiff - 1]) {
      ndbl++;
      ii->data[ndbl - 1] = cdiff;
      if (ndbl >= absb) {
        exitg2 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2) {
      cdiff++;
    }
  }

  if (ndbl <= x->size[0]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &ac_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (x->size[0] == 1) {
    if (ndbl == 0) {
      i4 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i4, (int32_T)sizeof
                        (int32_T), &t_emlrtRTEI);
    }
  } else {
    if (1 > ndbl) {
      i4 = 0;
    } else {
      i4 = ndbl;
    }

    iv7[0] = 1;
    iv7[1] = i4;
    c_st.site = &kc_emlrtRSI;
    indexShapeCheck(&c_st, ii->size[0], iv7);
    ndbl = ii->size[0];
    ii->size[0] = i4;
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, ndbl, (int32_T)sizeof
                      (int32_T), &q_emlrtRTEI);
  }

  if (1 > s->size[0] - 1) {
    absb = 0;
  } else {
    i4 = s->size[0];
    if (!(1 <= i4)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i4, &x_emlrtBCI, sp);
    }

    i4 = s->size[0];
    absb = s->size[0] - 1;
    if (!((absb >= 1) && (absb <= i4))) {
      emlrtDynamicBoundsCheckR2012b(absb, 1, i4, &x_emlrtBCI, sp);
    }
  }

  iv8[0] = 1;
  iv8[1] = absb;
  st.site = &mc_emlrtRSI;
  indexShapeCheck(&st, s->size[0], iv8);
  if (2 > s->size[0]) {
    i4 = 0;
    cdiff = 0;
  } else {
    i4 = 1;
    ndbl = s->size[0];
    cdiff = s->size[0];
    if (!((cdiff >= 1) && (cdiff <= ndbl))) {
      emlrtDynamicBoundsCheckR2012b(cdiff, 1, ndbl, &w_emlrtBCI, sp);
    }
  }

  iv9[0] = 1;
  iv9[1] = cdiff - i4;
  st.site = &mc_emlrtRSI;
  indexShapeCheck(&st, s->size[0], iv9);
  ndbl = cdiff - i4;
  if (absb != ndbl) {
    emlrtSizeEqCheck1DR2012b(absb, ndbl, &e_emlrtECI, sp);
  }

  st.site = &mc_emlrtRSI;
  ndbl = x->size[0];
  x->size[0] = absb;
  emxEnsureCapacity(&st, (emxArray__common *)x, ndbl, (int32_T)sizeof(boolean_T),
                    &t_emlrtRTEI);
  for (ndbl = 0; ndbl < absb; ndbl++) {
    x->data[ndbl] = (s->data[ndbl] != s->data[i4 + ndbl]);
  }

  emxFree_real_T(&s);
  emxInit_int32_T(&st, &b_ii, 1, &s_emlrtRTEI, true);
  b_st.site = &ic_emlrtRSI;
  absb = x->size[0];
  ndbl = 0;
  i4 = b_ii->size[0];
  b_ii->size[0] = x->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i4, (int32_T)sizeof(int32_T),
                    &t_emlrtRTEI);
  c_st.site = &jc_emlrtRSI;
  cdiff = 1;
  exitg1 = false;
  while ((!exitg1) && (cdiff <= absb)) {
    guard1 = false;
    if (x->data[cdiff - 1]) {
      ndbl++;
      b_ii->data[ndbl - 1] = cdiff;
      if (ndbl >= absb) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      cdiff++;
    }
  }

  if (ndbl <= x->size[0]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &ac_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (x->size[0] == 1) {
    if (ndbl == 0) {
      i4 = b_ii->size[0];
      b_ii->size[0] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i4, (int32_T)sizeof
                        (int32_T), &t_emlrtRTEI);
    }
  } else {
    if (1 > ndbl) {
      i4 = 0;
    } else {
      i4 = ndbl;
    }

    iv10[0] = 1;
    iv10[1] = i4;
    c_st.site = &kc_emlrtRSI;
    indexShapeCheck(&c_st, b_ii->size[0], iv10);
    ndbl = b_ii->size[0];
    b_ii->size[0] = i4;
    emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, ndbl, (int32_T)sizeof
                      (int32_T), &q_emlrtRTEI);
  }

  emxFree_boolean_T(&x);
  cdiff = iTemp->size[0];
  i4 = iInflect->size[0];
  iInflect->size[0] = b_ii->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)iInflect, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  absb = b_ii->size[0];
  for (i4 = 0; i4 < absb; i4++) {
    ndbl = b_ii->data[i4] + 1;
    if (!((ndbl >= 1) && (ndbl <= cdiff))) {
      emlrtDynamicBoundsCheckR2012b(ndbl, 1, cdiff, &fb_emlrtBCI, sp);
    }

    iInflect->data[i4] = iTemp->data[ndbl - 1] - 1.0;
  }

  emxFree_int32_T(&b_ii);
  cdiff = iTemp->size[0];
  i4 = iPk->size[0];
  iPk->size[0] = ii->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)iPk, i4, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  absb = ii->size[0];
  for (i4 = 0; i4 < absb; i4++) {
    ndbl = ii->data[i4] + 1;
    if (!((ndbl >= 1) && (ndbl <= cdiff))) {
      emlrtDynamicBoundsCheckR2012b(ndbl, 1, cdiff, &gb_emlrtBCI, sp);
    }

    iPk->data[i4] = iTemp->data[ndbl - 1] - 1.0;
  }

  emxFree_int32_T(&ii);
  emxFree_real_T(&iTemp);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[23])
{
  static const int32_T dims[2] = { 1, 23 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims);
  emlrtImportCharArrayR2015b(sp, src, ret, 23);
  emlrtDestroyArray(&src);
}

static void getAllPeaks(const emlrtStack *sp, const emxArray_real_T *y,
  emxArray_real_T *iPk, emxArray_real_T *iInf, emxArray_real_T *iInflect)
{
  emxArray_boolean_T *x;
  int32_T i3;
  int32_T ii;
  emxArray_boolean_T *r1;
  int32_T nx;
  emxArray_int32_T *b_ii;
  int32_T idx;
  boolean_T overflow;
  boolean_T exitg1;
  boolean_T guard1 = false;
  int32_T iv1[2];
  emxArray_real_T *yTemp;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_boolean_T(sp, &x, 1, &p_emlrtRTEI, true);
  i3 = x->size[0];
  x->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)x, i3, (int32_T)sizeof(boolean_T),
                    &p_emlrtRTEI);
  ii = y->size[0];
  for (i3 = 0; i3 < ii; i3++) {
    x->data[i3] = muDoubleScalarIsInf(y->data[i3]);
  }

  emxInit_boolean_T(sp, &r1, 1, &p_emlrtRTEI, true);
  i3 = r1->size[0];
  r1->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r1, i3, (int32_T)sizeof(boolean_T),
                    &p_emlrtRTEI);
  ii = y->size[0];
  for (i3 = 0; i3 < ii; i3++) {
    r1->data[i3] = (y->data[i3] > 0.0);
  }

  i3 = x->size[0];
  nx = r1->size[0];
  if (i3 != nx) {
    emlrtSizeEqCheck1DR2012b(i3, nx, &d_emlrtECI, sp);
  }

  st.site = &gc_emlrtRSI;
  i3 = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)x, i3, (int32_T)sizeof(boolean_T),
                    &p_emlrtRTEI);
  ii = x->size[0];
  for (i3 = 0; i3 < ii; i3++) {
    x->data[i3] = (x->data[i3] && r1->data[i3]);
  }

  emxFree_boolean_T(&r1);
  emxInit_int32_T(&st, &b_ii, 1, &s_emlrtRTEI, true);
  b_st.site = &ic_emlrtRSI;
  nx = x->size[0];
  idx = 0;
  i3 = b_ii->size[0];
  b_ii->size[0] = x->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i3, (int32_T)sizeof(int32_T),
                    &p_emlrtRTEI);
  c_st.site = &jc_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    d_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii <= nx)) {
    guard1 = false;
    if (x->data[ii - 1]) {
      idx++;
      b_ii->data[idx - 1] = ii;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      ii++;
    }
  }

  if (idx <= x->size[0]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &ac_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (x->size[0] == 1) {
    if (idx == 0) {
      i3 = b_ii->size[0];
      b_ii->size[0] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i3, (int32_T)sizeof
                        (int32_T), &p_emlrtRTEI);
    }
  } else {
    if (1 > idx) {
      i3 = 0;
    } else {
      i3 = idx;
    }

    iv1[0] = 1;
    iv1[1] = i3;
    c_st.site = &kc_emlrtRSI;
    indexShapeCheck(&c_st, b_ii->size[0], iv1);
    nx = b_ii->size[0];
    b_ii->size[0] = i3;
    emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, nx, (int32_T)sizeof
                      (int32_T), &q_emlrtRTEI);
  }

  emxFree_boolean_T(&x);
  i3 = iInf->size[0];
  iInf->size[0] = b_ii->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)iInf, i3, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  ii = b_ii->size[0];
  for (i3 = 0; i3 < ii; i3++) {
    iInf->data[i3] = b_ii->data[i3];
  }

  emxInit_real_T1(&st, &yTemp, 1, &r_emlrtRTEI, true);
  i3 = yTemp->size[0];
  yTemp->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)yTemp, i3, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  ii = y->size[0];
  for (i3 = 0; i3 < ii; i3++) {
    yTemp->data[i3] = y->data[i3];
  }

  idx = y->size[0];
  i3 = b_ii->size[0];
  b_ii->size[0] = iInf->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_ii, i3, (int32_T)sizeof(int32_T),
                    &p_emlrtRTEI);
  ii = iInf->size[0];
  for (i3 = 0; i3 < ii; i3++) {
    nx = (int32_T)iInf->data[i3];
    if (!((nx >= 1) && (nx <= idx))) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, idx, &v_emlrtBCI, sp);
    }

    b_ii->data[i3] = nx;
  }

  ii = b_ii->size[0];
  for (i3 = 0; i3 < ii; i3++) {
    yTemp->data[b_ii->data[i3] - 1] = rtNaN;
  }

  emxFree_int32_T(&b_ii);
  st.site = &hc_emlrtRSI;
  findLocalMaxima(&st, yTemp, iPk, iInflect);
  emxFree_real_T(&yTemp);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void parse_inputs(const emlrtStack *sp, const emxArray_real_T *Yin,
  real_T varargin_2, emxArray_real_T *y, emxArray_real_T *x, real_T *Pd)
{
  int32_T k;
  int32_T cdiff;
  int32_T Yin_idx_0;
  int32_T ndbl;
  int32_T apnd;
  emxArray_real_T *b_y;
  real_T attributes_f6;
  boolean_T p;
  const mxArray *c_y;
  char_T u[7];
  static const char_T rfmt[7] = { '%', '2', '3', '.', '1', '5', 'e' };

  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 7 };

  char_T numstr[23];
  char_T cv0[89];
  static const char_T cv1[9] = { 'E', 'x', 'p', 'e', 'c', 't', 'e', 'd', ' ' };

  static const char_T cv2[15] = { 'M', 'i', 'n', 'P', 'e', 'a', 'k', 'D', 'i',
    's', 't', 'a', 'n', 'c', 'e' };

  static const char_T cv3[39] = { ' ', 't', 'o', ' ', 'b', 'e', ' ', 'a', 'n',
    ' ', 'a', 'r', 'r', 'a', 'y', ' ', 'w', 'i', 't', 'h', ' ', 'a', 'l', 'l',
    ' ', 'o', 'f', ' ', 't', 'h', 'e', ' ', 'v', 'a', 'l', 'u', 'e', 's', ' ' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  k = y->size[0];
  y->size[0] = Yin->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  cdiff = Yin->size[1];
  for (k = 0; k < cdiff; k++) {
    y->data[k] = Yin->data[k];
  }

  st.site = &xb_emlrtRSI;
  b_st.site = &yb_emlrtRSI;
  c_st.site = &ac_emlrtRSI;
  Yin_idx_0 = Yin->size[1];
  if (Yin_idx_0 < 1) {
    ndbl = 0;
    apnd = 0;
  } else {
    Yin_idx_0 = Yin->size[1];
    ndbl = (int32_T)muDoubleScalarFloor(((real_T)Yin_idx_0 - 1.0) + 0.5);
    apnd = ndbl + 1;
    Yin_idx_0 = Yin->size[1];
    cdiff = (ndbl - Yin_idx_0) + 1;
    Yin_idx_0 = Yin->size[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)
        muIntScalarMax_sint32(1, Yin_idx_0)) {
      ndbl++;
      apnd = Yin->size[1];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }
  }

  emxInit_real_T(&c_st, &b_y, 2, &o_emlrtRTEI, true);
  d_st.site = &bc_emlrtRSI;
  k = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = ndbl;
  emxEnsureCapacity(&c_st, (emxArray__common *)b_y, k, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  if (ndbl > 0) {
    b_y->data[0] = 1.0;
    if (ndbl > 1) {
      b_y->data[ndbl - 1] = apnd;
      cdiff = (ndbl - 1) / 2;
      d_st.site = &cc_emlrtRSI;
      for (k = 1; k < cdiff; k++) {
        b_y->data[k] = 1.0 + (real_T)k;
        b_y->data[(ndbl - k) - 1] = apnd - k;
      }

      if (cdiff << 1 == ndbl - 1) {
        b_y->data[cdiff] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        b_y->data[cdiff] = 1.0 + (real_T)cdiff;
        b_y->data[cdiff + 1] = apnd - cdiff;
      }
    }
  }

  k = x->size[0];
  x->size[0] = b_y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)x, k, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  cdiff = b_y->size[1];
  for (k = 0; k < cdiff; k++) {
    x->data[k] = b_y->data[b_y->size[0] * k];
  }

  emxFree_real_T(&b_y);
  Yin_idx_0 = Yin->size[1];
  if (Yin_idx_0 < 3) {
    emlrtErrorWithMessageIdR2012b(sp, &yb_emlrtRTEI,
      "signal:findpeaks:emptyDataSet", 0);
  }

  *Pd = varargin_2;
  Yin_idx_0 = Yin->size[1];
  k = x->size[0];
  if (!((Yin_idx_0 >= 1) && (Yin_idx_0 <= k))) {
    emlrtDynamicBoundsCheckR2012b(Yin_idx_0, 1, k, &u_emlrtBCI, sp);
  }

  attributes_f6 = x->data[Yin_idx_0 - 1] - x->data[0];
  st.site = &wb_emlrtRSI;
  p = true;
  if (!(varargin_2 < 0.0)) {
  } else {
    p = false;
  }

  if (p) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&st, &wb_emlrtRTEI,
      "MATLAB:findpeaks:expectedNonnegative", 43,
      "Expected MinPeakDistance to be nonnegative.");
  }

  p = true;
  if (varargin_2 < attributes_f6) {
  } else {
    p = false;
  }

  if (p) {
  } else {
    b_st.site = &dc_emlrtRSI;
    c_st.site = &ec_emlrtRSI;
    d_st.site = &fc_emlrtRSI;
    for (k = 0; k < 7; k++) {
      u[k] = rfmt[k];
    }

    c_y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(&d_st, 7, m0, &u[0]);
    emlrtAssign(&c_y, m0);
    e_st.site = &cf_emlrtRSI;
    emlrt_marshallIn(&e_st, b_sprintf(&e_st, c_y, emlrt_marshallOut
      (attributes_f6), &emlrtMCI), "sprintf", numstr);
    for (k = 0; k < 9; k++) {
      cv0[k] = cv1[k];
    }

    for (k = 0; k < 15; k++) {
      cv0[k + 9] = cv2[k];
    }

    for (k = 0; k < 39; k++) {
      cv0[k + 24] = cv3[k];
    }

    cv0[63] = '<';
    cv0[64] = ' ';
    for (k = 0; k < 23; k++) {
      cv0[k + 65] = numstr[k];
    }

    cv0[88] = '.';
    emlrtErrMsgIdAndExplicitTxt(&st, &xb_emlrtRTEI, "MATLAB:findpeaks:notLess",
      89, cv0);
  }

  st.site = &vb_emlrtRSI;
  p = true;
  if (!(varargin_2 < 0.0)) {
  } else {
    p = false;
  }

  if (p) {
  } else {
    emlrtErrMsgIdAndExplicitTxt(&st, &wb_emlrtRTEI,
      "MATLAB:findpeaks:expectedNonnegative", 43,
      "Expected MinPeakDistance to be nonnegative.");
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void findpeaks(const emlrtStack *sp, const emxArray_real_T *Yin, real_T
               varargin_2, emxArray_real_T *Ypk, emxArray_real_T *Xpk)
{
  emxArray_real_T *iPk;
  emxArray_real_T *y;
  emxArray_real_T *x;
  emxArray_real_T *iInfite;
  emxArray_real_T *locs_temp;
  real_T minD;
  int32_T cdiff;
  int32_T ndbl;
  int32_T i1;
  int32_T i2;
  int32_T absb;
  int32_T apnd;
  emxArray_real_T *locs;
  emxArray_real_T *base;
  emxArray_real_T *z;
  boolean_T overflow;
  emxArray_int32_T *ia;
  emxArray_int32_T *ib;
  emxArray_boolean_T *idelete;
  emxArray_boolean_T *r0;
  emxArray_boolean_T *b_idelete;
  emxArray_real_T *b_y;
  uint32_T unnamed_idx_0;
  emxArray_real_T *b_locs;
  emxArray_real_T *c_locs;
  real_T d_locs;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
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
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T1(sp, &iPk, 1, &j_emlrtRTEI, true);
  emxInit_real_T1(sp, &y, 1, &g_emlrtRTEI, true);
  emxInit_real_T1(sp, &x, 1, &g_emlrtRTEI, true);
  emxInit_real_T1(sp, &iInfite, 1, &g_emlrtRTEI, true);
  emxInit_real_T1(sp, &locs_temp, 1, &m_emlrtRTEI, true);
  st.site = &mb_emlrtRSI;
  parse_inputs(&st, Yin, varargin_2, y, x, &minD);
  st.site = &nb_emlrtRSI;
  getAllPeaks(&st, y, iPk, iInfite, locs_temp);
  st.site = &ob_emlrtRSI;
  if (!(iPk->size[0] == 0)) {
    cdiff = y->size[0];
    ndbl = iPk->size[0];
    for (i1 = 0; i1 < ndbl; i1++) {
      i2 = (int32_T)iPk->data[i1];
      if (!((i2 >= 1) && (i2 <= cdiff))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, cdiff, &emlrtBCI, &st);
      }
    }

    cdiff = iPk->size[0] - 1;
    absb = 0;
    for (apnd = 0; apnd <= cdiff; apnd++) {
      i1 = y->size[0];
      i2 = (int32_T)iPk->data[apnd];
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &emlrtBCI, &st);
      }

      if (y->data[i2 - 1] > rtMinusInf) {
        absb++;
      }
    }

    ndbl = 0;
    for (apnd = 0; apnd <= cdiff; apnd++) {
      i1 = y->size[0];
      i2 = (int32_T)iPk->data[apnd];
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &emlrtBCI, &st);
      }

      if (y->data[i2 - 1] > rtMinusInf) {
        i1 = iPk->size[0];
        if (!((apnd + 1 >= 1) && (apnd + 1 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(apnd + 1, 1, i1, &t_emlrtBCI, &st);
        }

        iPk->data[ndbl] = iPk->data[apnd];
        ndbl++;
      }
    }

    i1 = iPk->size[0];
    iPk->size[0] = absb;
    emxEnsureCapacity(&st, (emxArray__common *)iPk, i1, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
  }

  st.site = &pb_emlrtRSI;
  b_st.site = &wc_emlrtRSI;
  cdiff = y->size[0];
  i1 = locs_temp->size[0];
  locs_temp->size[0] = iPk->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)locs_temp, i1, (int32_T)sizeof
                    (real_T), &g_emlrtRTEI);
  ndbl = iPk->size[0];
  for (i1 = 0; i1 < ndbl; i1++) {
    i2 = (int32_T)(iPk->data[i1] - 1.0);
    if (!((i2 >= 1) && (i2 <= cdiff))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, cdiff, &b_emlrtBCI, &b_st);
    }

    locs_temp->data[i1] = y->data[i2 - 1];
  }

  emxInit_real_T1(&b_st, &locs, 1, &l_emlrtRTEI, true);
  cdiff = y->size[0];
  i1 = locs->size[0];
  locs->size[0] = iPk->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)locs, i1, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  ndbl = iPk->size[0];
  for (i1 = 0; i1 < ndbl; i1++) {
    i2 = (int32_T)(iPk->data[i1] + 1.0);
    if (!((i2 >= 1) && (i2 <= cdiff))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, cdiff, &c_emlrtBCI, &b_st);
    }

    locs->data[i1] = y->data[i2 - 1];
  }

  c_st.site = &ib_emlrtRSI;
  d_st.site = &eb_emlrtRSI;
  e_st.site = &xc_emlrtRSI;
  f_st.site = &yc_emlrtRSI;
  cdiff = iPk->size[0];
  emxInit_real_T1(&f_st, &base, 1, &k_emlrtRTEI, true);
  emxInit_real_T1(&f_st, &z, 1, &g_emlrtRTEI, true);
  i1 = z->size[0];
  z->size[0] = cdiff;
  emxEnsureCapacity(&f_st, (emxArray__common *)z, i1, (int32_T)sizeof(real_T),
                    &h_emlrtRTEI);
  i1 = base->size[0];
  base->size[0] = cdiff;
  emxEnsureCapacity(&f_st, (emxArray__common *)base, i1, (int32_T)sizeof(real_T),
                    &i_emlrtRTEI);
  if (dimagree(base, locs_temp, locs)) {
  } else {
    emlrtErrorWithMessageIdR2012b(&f_st, &vb_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  f_st.site = &ad_emlrtRSI;
  overflow = ((!(1 > z->size[0])) && (z->size[0] > 2147483646));
  if (overflow) {
    g_st.site = &cb_emlrtRSI;
    check_forloop_overflow_error(&g_st);
  }

  for (absb = 0; absb + 1 <= cdiff; absb++) {
    base->data[absb] = muDoubleScalarMax(y->data[(int32_T)(iPk->data[absb] - 1.0)
      - 1], y->data[(int32_T)(iPk->data[absb] + 1.0) - 1]);
  }

  cdiff = y->size[0];
  ndbl = iPk->size[0];
  for (i1 = 0; i1 < ndbl; i1++) {
    i2 = (int32_T)iPk->data[i1];
    if (!((i2 >= 1) && (i2 <= cdiff))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, cdiff, &d_emlrtBCI, &st);
    }
  }

  i1 = iPk->size[0];
  i2 = base->size[0];
  if (i1 != i2) {
    emlrtSizeEqCheck1DR2012b(i1, i2, &c_emlrtECI, &st);
  }

  cdiff = iPk->size[0] - 1;
  absb = 0;
  for (apnd = 0; apnd <= cdiff; apnd++) {
    if (y->data[(int32_T)iPk->data[apnd] - 1] - base->data[apnd] >= 0.0) {
      absb++;
    }
  }

  ndbl = 0;
  for (apnd = 0; apnd <= cdiff; apnd++) {
    if (y->data[(int32_T)iPk->data[apnd] - 1] - base->data[apnd] >= 0.0) {
      i1 = iPk->size[0];
      if (!((apnd + 1 >= 1) && (apnd + 1 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(apnd + 1, 1, i1, &s_emlrtBCI, &st);
      }

      iPk->data[ndbl] = iPk->data[apnd];
      ndbl++;
    }
  }

  emxInit_int32_T(&st, &ia, 1, &g_emlrtRTEI, true);
  emxInit_int32_T(&st, &ib, 1, &g_emlrtRTEI, true);
  i1 = iPk->size[0];
  iPk->size[0] = absb;
  emxEnsureCapacity(&st, (emxArray__common *)iPk, i1, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  st.site = &qb_emlrtRSI;
  b_st.site = &bd_emlrtRSI;
  c_st.site = &cd_emlrtRSI;
  d_st.site = &dd_emlrtRSI;
  do_vectors(&d_st, iPk, iInfite, z, ia, ib);
  st.site = &rb_emlrtRSI;
  emxFree_int32_T(&ib);
  emxFree_real_T(&iInfite);
  emxInit_boolean_T(&st, &idelete, 1, &n_emlrtRTEI, true);
  emxInit_boolean_T(&st, &r0, 1, &g_emlrtRTEI, true);
  emxInit_boolean_T(&st, &b_idelete, 1, &g_emlrtRTEI, true);
  emxInit_real_T(&st, &b_y, 2, &g_emlrtRTEI, true);
  if ((z->size[0] == 0) || (minD == 0.0)) {
    b_st.site = &jd_emlrtRSI;
    c_st.site = &yb_emlrtRSI;
    d_st.site = &ac_emlrtRSI;
    if (z->size[0] < 1) {
      ndbl = 0;
      apnd = 0;
    } else {
      ndbl = (int32_T)muDoubleScalarFloor(((real_T)z->size[0] - 1.0) + 0.5);
      apnd = ndbl + 1;
      cdiff = (ndbl - z->size[0]) + 1;
      absb = z->size[0];
      if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
        ndbl++;
        apnd = z->size[0];
      } else if (cdiff > 0) {
        apnd = ndbl;
      } else {
        ndbl++;
      }
    }

    e_st.site = &bc_emlrtRSI;
    i1 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = ndbl;
    emxEnsureCapacity(&d_st, (emxArray__common *)b_y, i1, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    if (ndbl > 0) {
      b_y->data[0] = 1.0;
      if (ndbl > 1) {
        b_y->data[ndbl - 1] = apnd;
        cdiff = (ndbl - 1) / 2;
        e_st.site = &cc_emlrtRSI;
        for (absb = 1; absb < cdiff; absb++) {
          b_y->data[absb] = 1.0 + (real_T)absb;
          b_y->data[(ndbl - absb) - 1] = apnd - absb;
        }

        if (cdiff << 1 == ndbl - 1) {
          b_y->data[cdiff] = (1.0 + (real_T)apnd) / 2.0;
        } else {
          b_y->data[cdiff] = 1.0 + (real_T)cdiff;
          b_y->data[cdiff + 1] = apnd - cdiff;
        }
      }
    }

    i1 = locs->size[0];
    locs->size[0] = b_y->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)locs, i1, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    ndbl = b_y->size[1];
    for (i1 = 0; i1 < ndbl; i1++) {
      locs->data[i1] = b_y->data[b_y->size[0] * i1];
    }
  } else {
    cdiff = y->size[0];
    ndbl = z->size[0];
    for (i1 = 0; i1 < ndbl; i1++) {
      i2 = (int32_T)z->data[i1];
      if (!((i2 >= 1) && (i2 <= cdiff))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, cdiff, &e_emlrtBCI, &st);
      }
    }

    cdiff = x->size[0];
    i1 = locs->size[0];
    locs->size[0] = z->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)locs, i1, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    ndbl = z->size[0];
    for (i1 = 0; i1 < ndbl; i1++) {
      i2 = (int32_T)z->data[i1];
      if (!((i2 >= 1) && (i2 <= cdiff))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, cdiff, &f_emlrtBCI, &st);
      }

      locs->data[i1] = x->data[i2 - 1];
    }

    b_st.site = &kd_emlrtRSI;
    i1 = locs_temp->size[0];
    locs_temp->size[0] = z->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)locs_temp, i1, (int32_T)sizeof
                      (real_T), &g_emlrtRTEI);
    ndbl = z->size[0];
    for (i1 = 0; i1 < ndbl; i1++) {
      locs_temp->data[i1] = y->data[(int32_T)z->data[i1] - 1];
    }

    c_st.site = &md_emlrtRSI;
    sort(&c_st, locs_temp, ia);
    i1 = base->size[0];
    base->size[0] = ia->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)base, i1, (int32_T)sizeof
                      (real_T), &g_emlrtRTEI);
    ndbl = ia->size[0];
    for (i1 = 0; i1 < ndbl; i1++) {
      base->data[i1] = ia->data[i1];
    }

    absb = z->size[0];
    i1 = locs_temp->size[0];
    locs_temp->size[0] = base->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)locs_temp, i1, (int32_T)sizeof
                      (real_T), &g_emlrtRTEI);
    ndbl = base->size[0];
    for (i1 = 0; i1 < ndbl; i1++) {
      i2 = (int32_T)base->data[i1];
      if (!((i2 >= 1) && (i2 <= absb))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, absb, &g_emlrtBCI, &st);
      }

      locs_temp->data[i1] = locs->data[i2 - 1];
    }

    unnamed_idx_0 = (uint32_T)base->size[0];
    i1 = idelete->size[0];
    idelete->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)idelete, i1, (int32_T)sizeof
                      (boolean_T), &g_emlrtRTEI);
    ndbl = (int32_T)unnamed_idx_0;
    for (i1 = 0; i1 < ndbl; i1++) {
      idelete->data[i1] = false;
    }

    for (apnd = 1; apnd - 1 < base->size[0]; apnd++) {
      i1 = idelete->size[0];
      if (!((apnd >= 1) && (apnd <= i1))) {
        emlrtDynamicBoundsCheckR2012b(apnd, 1, i1, &i_emlrtBCI, &st);
      }

      if (!idelete->data[apnd - 1]) {
        i1 = base->size[0];
        if (!((apnd >= 1) && (apnd <= i1))) {
          emlrtDynamicBoundsCheckR2012b(apnd, 1, i1, &j_emlrtBCI, &st);
        }

        d_locs = locs->data[(int32_T)base->data[apnd - 1] - 1] - minD;
        i1 = r0->size[0];
        r0->size[0] = locs_temp->size[0];
        emxEnsureCapacity(&st, (emxArray__common *)r0, i1, (int32_T)sizeof
                          (boolean_T), &g_emlrtRTEI);
        ndbl = locs_temp->size[0];
        for (i1 = 0; i1 < ndbl; i1++) {
          r0->data[i1] = (locs_temp->data[i1] >= d_locs);
        }

        i1 = base->size[0];
        if (!((apnd >= 1) && (apnd <= i1))) {
          emlrtDynamicBoundsCheckR2012b(apnd, 1, i1, &k_emlrtBCI, &st);
        }

        d_locs = locs->data[(int32_T)base->data[apnd - 1] - 1] + minD;
        i1 = b_idelete->size[0];
        b_idelete->size[0] = locs_temp->size[0];
        emxEnsureCapacity(&st, (emxArray__common *)b_idelete, i1, (int32_T)
                          sizeof(boolean_T), &g_emlrtRTEI);
        ndbl = locs_temp->size[0];
        for (i1 = 0; i1 < ndbl; i1++) {
          b_idelete->data[i1] = (locs_temp->data[i1] <= d_locs);
        }

        i1 = r0->size[0];
        i2 = b_idelete->size[0];
        if (i1 != i2) {
          emlrtSizeEqCheck1DR2012b(i1, i2, &b_emlrtECI, &st);
        }

        i1 = r0->size[0];
        emxEnsureCapacity(&st, (emxArray__common *)r0, i1, (int32_T)sizeof
                          (boolean_T), &g_emlrtRTEI);
        ndbl = r0->size[0];
        for (i1 = 0; i1 < ndbl; i1++) {
          r0->data[i1] = (r0->data[i1] && b_idelete->data[i1]);
        }

        i1 = idelete->size[0];
        i2 = r0->size[0];
        if (i1 != i2) {
          emlrtSizeEqCheck1DR2012b(i1, i2, &emlrtECI, &st);
        }

        i1 = b_idelete->size[0];
        b_idelete->size[0] = idelete->size[0];
        emxEnsureCapacity(&st, (emxArray__common *)b_idelete, i1, (int32_T)
                          sizeof(boolean_T), &g_emlrtRTEI);
        ndbl = idelete->size[0];
        for (i1 = 0; i1 < ndbl; i1++) {
          b_idelete->data[i1] = idelete->data[i1];
        }

        i1 = idelete->size[0];
        emxEnsureCapacity(&st, (emxArray__common *)idelete, i1, (int32_T)sizeof
                          (boolean_T), &g_emlrtRTEI);
        ndbl = idelete->size[0];
        for (i1 = 0; i1 < ndbl; i1++) {
          idelete->data[i1] = (idelete->data[i1] || r0->data[i1]);
        }

        i1 = b_idelete->size[0];
        if (!((apnd >= 1) && (apnd <= i1))) {
          emlrtDynamicBoundsCheckR2012b(apnd, 1, i1, &l_emlrtBCI, &st);
        }

        idelete->data[apnd - 1] = false;
      }
    }

    cdiff = idelete->size[0] - 1;
    absb = 0;
    for (apnd = 0; apnd <= cdiff; apnd++) {
      if (!idelete->data[apnd]) {
        absb++;
      }
    }

    i1 = ia->size[0];
    ia->size[0] = absb;
    emxEnsureCapacity(&st, (emxArray__common *)ia, i1, (int32_T)sizeof(int32_T),
                      &g_emlrtRTEI);
    ndbl = 0;
    for (apnd = 0; apnd <= cdiff; apnd++) {
      if (!idelete->data[apnd]) {
        ia->data[ndbl] = apnd + 1;
        ndbl++;
      }
    }

    b_st.site = &ld_emlrtRSI;
    cdiff = base->size[0];
    ndbl = ia->size[0];
    for (i1 = 0; i1 < ndbl; i1++) {
      i2 = ia->data[i1];
      if (!((i2 >= 1) && (i2 <= cdiff))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, cdiff, &h_emlrtBCI, &b_st);
      }
    }

    i1 = locs->size[0];
    locs->size[0] = ia->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)locs, i1, (int32_T)sizeof
                      (real_T), &g_emlrtRTEI);
    ndbl = ia->size[0];
    for (i1 = 0; i1 < ndbl; i1++) {
      locs->data[i1] = base->data[ia->data[i1] - 1];
    }

    c_st.site = &se_emlrtRSI;
    c_sort(&c_st, locs);
  }

  emxFree_real_T(&b_y);
  emxFree_boolean_T(&b_idelete);
  emxFree_boolean_T(&r0);
  emxFree_boolean_T(&idelete);
  emxFree_real_T(&base);
  st.site = &sb_emlrtRSI;
  if (locs->size[0] == 0) {
  } else {
    b_st.site = &te_emlrtRSI;
    absb = z->size[0];
    cdiff = y->size[0];
    i1 = locs_temp->size[0];
    locs_temp->size[0] = locs->size[0];
    emxEnsureCapacity(&b_st, (emxArray__common *)locs_temp, i1, (int32_T)sizeof
                      (real_T), &g_emlrtRTEI);
    ndbl = locs->size[0];
    for (i1 = 0; i1 < ndbl; i1++) {
      minD = locs->data[i1];
      if (minD != (int32_T)muDoubleScalarFloor(minD)) {
        emlrtIntegerCheckR2012b(minD, &b_emlrtDCI, &b_st);
      }

      i2 = (int32_T)minD;
      if (!((i2 >= 1) && (i2 <= absb))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, absb, &n_emlrtBCI, &b_st);
      }

      i2 = (int32_T)z->data[i2 - 1];
      if (!((i2 >= 1) && (i2 <= cdiff))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, cdiff, &m_emlrtBCI, &b_st);
      }

      locs_temp->data[i1] = y->data[i2 - 1];
    }

    emxInit_real_T1(&b_st, &c_locs, 1, &g_emlrtRTEI, true);
    c_st.site = &md_emlrtRSI;
    sort(&c_st, locs_temp, ia);
    cdiff = locs->size[0];
    i1 = c_locs->size[0];
    c_locs->size[0] = ia->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)c_locs, i1, (int32_T)sizeof
                      (real_T), &g_emlrtRTEI);
    ndbl = ia->size[0];
    for (i1 = 0; i1 < ndbl; i1++) {
      i2 = ia->data[i1];
      if (!((i2 >= 1) && (i2 <= cdiff))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, cdiff, &o_emlrtBCI, &st);
      }

      c_locs->data[i1] = locs->data[i2 - 1];
    }

    i1 = locs->size[0];
    locs->size[0] = c_locs->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)locs, i1, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    ndbl = c_locs->size[0];
    for (i1 = 0; i1 < ndbl; i1++) {
      locs->data[i1] = c_locs->data[i1];
    }

    emxFree_real_T(&c_locs);
  }

  emxFree_real_T(&locs_temp);
  emxFree_int32_T(&ia);
  st.site = &tb_emlrtRSI;
  if (locs->size[0] > 4) {
    emxInit_real_T1(&st, &b_locs, 1, &g_emlrtRTEI, true);
    b_st.site = &ue_emlrtRSI;
    c_st.site = &lc_emlrtRSI;
    i1 = b_locs->size[0];
    b_locs->size[0] = 4;
    emxEnsureCapacity(&st, (emxArray__common *)b_locs, i1, (int32_T)sizeof
                      (real_T), &g_emlrtRTEI);
    for (i1 = 0; i1 < 4; i1++) {
      b_locs->data[i1] = locs->data[i1];
    }

    i1 = locs->size[0];
    locs->size[0] = b_locs->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)locs, i1, (int32_T)sizeof(real_T),
                      &g_emlrtRTEI);
    ndbl = b_locs->size[0];
    for (i1 = 0; i1 < ndbl; i1++) {
      locs->data[i1] = b_locs->data[i1];
    }

    emxFree_real_T(&b_locs);
  }

  absb = z->size[0];
  i1 = iPk->size[0];
  iPk->size[0] = locs->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)iPk, i1, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  ndbl = locs->size[0];
  for (i1 = 0; i1 < ndbl; i1++) {
    minD = locs->data[i1];
    if (minD != (int32_T)muDoubleScalarFloor(minD)) {
      emlrtIntegerCheckR2012b(minD, &c_emlrtDCI, sp);
    }

    i2 = (int32_T)minD;
    if (!((i2 >= 1) && (i2 <= absb))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, absb, &p_emlrtBCI, sp);
    }

    iPk->data[i1] = z->data[i2 - 1];
  }

  emxFree_real_T(&locs);
  emxFree_real_T(&z);
  st.site = &ub_emlrtRSI;
  cdiff = y->size[0];
  ndbl = iPk->size[0];
  for (i1 = 0; i1 < ndbl; i1++) {
    i2 = (int32_T)iPk->data[i1];
    if (!((i2 >= 1) && (i2 <= cdiff))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, cdiff, &q_emlrtBCI, &st);
    }
  }

  cdiff = x->size[0];
  ndbl = iPk->size[0];
  for (i1 = 0; i1 < ndbl; i1++) {
    i2 = (int32_T)iPk->data[i1];
    if (!((i2 >= 1) && (i2 <= cdiff))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, cdiff, &r_emlrtBCI, &st);
    }
  }

  i1 = Ypk->size[0] * Ypk->size[1];
  Ypk->size[0] = 1;
  Ypk->size[1] = iPk->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)Ypk, i1, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  ndbl = iPk->size[0];
  for (i1 = 0; i1 < ndbl; i1++) {
    Ypk->data[Ypk->size[0] * i1] = y->data[(int32_T)iPk->data[i1] - 1];
  }

  emxFree_real_T(&y);
  i1 = Xpk->size[0] * Xpk->size[1];
  Xpk->size[0] = 1;
  Xpk->size[1] = iPk->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)Xpk, i1, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  ndbl = iPk->size[0];
  for (i1 = 0; i1 < ndbl; i1++) {
    Xpk->data[Xpk->size[0] * i1] = x->data[(int32_T)iPk->data[i1] - 1];
  }

  emxFree_real_T(&x);
  emxFree_real_T(&iPk);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (findpeaks.c) */

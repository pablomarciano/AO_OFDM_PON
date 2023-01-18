/*
 * findpeaks.c
 *
 * Code generation for function 'findpeaks'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "findpeaks.h"
#include "sort1.h"
#include "eml_setop.h"
#include "scalexpAlloc.h"
#include "sign.h"
#include "indexShapeCheck.h"
#include "diff.h"
#include "RedDowOok_data.h"

/* Variable Definitions */
static emlrtRSInfo cb_emlrtRSI = { 137, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo db_emlrtRSI = { 141, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo eb_emlrtRSI = { 142, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo fb_emlrtRSI = { 154, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo gb_emlrtRSI = { 158, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo hb_emlrtRSI = { 161, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo ib_emlrtRSI = { 162, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo jb_emlrtRSI = { 175, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo kb_emlrtRSI = { 363, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo lb_emlrtRSI = { 370, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo mb_emlrtRSI = { 44, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo nb_emlrtRSI = { 253, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo pb_emlrtRSI = { 381, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo qb_emlrtRSI = { 386, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo rb_emlrtRSI = { 389, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo sb_emlrtRSI = { 392, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo yb_emlrtRSI = { 412, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo ac_emlrtRSI = { 81, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo bc_emlrtRSI = { 243, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo cc_emlrtRSI = { 269, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo dc_emlrtRSI = { 657, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo ec_emlrtRSI = { 23, "union",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\union.m" };

static emlrtRSInfo fc_emlrtRSI = { 70, "eml_setop",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"
};

static emlrtRSInfo lc_emlrtRSI = { 729, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo mc_emlrtRSI = { 738, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo nc_emlrtRSI = { 752, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo pc_emlrtRSI = { 26, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"
};

static emlrtRSInfo pd_emlrtRSI = { 31, "sort",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"
};

static emlrtRSInfo qd_emlrtRSI = { 766, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRSInfo rd_emlrtRSI = { 776, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtDCInfo k_emlrtDCI = { 165, 7, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 1 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 165, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 392, 17, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtECInfo b_emlrtECI = { -1, 392, 17, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtRTEInfo m_emlrtRTEI = { 243, 9, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 395, 12, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 396, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtECInfo c_emlrtECI = { -1, 746, 15, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtBCInfo db_emlrtBCI = { 1, 102, 734, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 739, 13, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 752, 12, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 743, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 746, 37, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 746, 66, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 747, 5, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo kb_emlrtBCI = { 1, 102, 790, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo lb_emlrtBCI = { 1, 102, 401, 13, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 401, 9, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtRTEInfo ab_emlrtRTEI = { 17, 19, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"
};

static emlrtECInfo d_emlrtECI = { -1, 413, 11, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m" };

static emlrtBCInfo nb_emlrtBCI = { 1, 102, 412, 12, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo ob_emlrtBCI = { 1, 102, 412, 21, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo pb_emlrtBCI = { 1, 102, 413, 11, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 413, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo rb_emlrtBCI = { 1, 102, 766, 17, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 766, 19, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtDCInfo l_emlrtDCI = { 766, 19, "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 1 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 769, 7, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 776, 9, "", "findpeaks",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\signal\\signal\\findpeaks.m", 0 };

/* Function Declarations */
static void assignOutputs(const emlrtStack *sp, const real_T y[102], const
  real_T x[102], const real_T iPk_data[], const int32_T iPk_size[1], real_T
  YpkOut_data[], int32_T YpkOut_size[2], real_T XpkOut_data[], int32_T
  XpkOut_size[2]);
static void c_findPeaksSeparatedByMoreThanM(const emlrtStack *sp, const real_T
  y[102], const real_T iPk_data[], const int32_T iPk_size[1], real_T idx_data[],
  int32_T idx_size[1]);
static void combinePeaks(const emlrtStack *sp, const real_T iPk_data[], const
  int32_T iPk_size[1], const real_T iInf_data[], const int32_T iInf_size[1],
  real_T iPkOut_data[], int32_T iPkOut_size[1]);
static void d_findPeaksSeparatedByMoreThanM(const emlrtStack *sp, const real_T
  y[102], const real_T iPk_data[], const int32_T iPk_size[1], real_T idx_data[],
  int32_T idx_size[1]);
static void findLocalMaxima(const emlrtStack *sp, const real_T yTemp[102],
  real_T iPk_data[], int32_T iPk_size[1], real_T iInflect_data[], int32_T
  iInflect_size[1]);
static void getAllPeaks(const emlrtStack *sp, const real_T y[102], real_T
  iPk_data[], int32_T iPk_size[1], real_T iInf_data[], int32_T iInf_size[1],
  real_T iInflect_data[], int32_T iInflect_size[1]);
static void keepAtMostNpPeaks(const emlrtStack *sp, real_T idx_data[], int32_T
  idx_size[1]);
static void orderPeaks(const emlrtStack *sp, const real_T Y[102], const real_T
  iPk_data[], const int32_T iPk_size[1], real_T idx_data[], int32_T idx_size[1]);
static void removePeaksBelowMinPeakHeight(const emlrtStack *sp, const real_T Y
  [102], real_T iPk_data[], int32_T iPk_size[1]);
static void removePeaksBelowThreshold(const emlrtStack *sp, const real_T Y[102],
  real_T iPk_data[], int32_T iPk_size[1]);

/* Function Definitions */
static void assignOutputs(const emlrtStack *sp, const real_T y[102], const
  real_T x[102], const real_T iPk_data[], const int32_T iPk_size[1], real_T
  YpkOut_data[], int32_T YpkOut_size[2], real_T XpkOut_data[], int32_T
  XpkOut_size[2])
{
  int32_T loop_ub;
  int32_T i6;
  int32_T i7;
  loop_ub = iPk_size[0];
  for (i6 = 0; i6 < loop_ub; i6++) {
    i7 = (int32_T)iPk_data[i6];
    if (!((i7 >= 1) && (i7 <= 102))) {
      emlrtDynamicBoundsCheckR2012b(i7, 1, 102, &kb_emlrtBCI, sp);
    }
  }

  YpkOut_size[0] = 1;
  YpkOut_size[1] = iPk_size[0];
  loop_ub = iPk_size[0];
  for (i6 = 0; i6 < loop_ub; i6++) {
    YpkOut_data[i6] = y[(int32_T)iPk_data[i6] - 1];
  }

  XpkOut_size[0] = 1;
  XpkOut_size[1] = iPk_size[0];
  loop_ub = iPk_size[0];
  for (i6 = 0; i6 < loop_ub; i6++) {
    XpkOut_data[i6] = x[(int32_T)iPk_data[i6] - 1];
  }
}

static void c_findPeaksSeparatedByMoreThanM(const emlrtStack *sp, const real_T
  y[102], const real_T iPk_data[], const int32_T iPk_size[1], real_T idx_data[],
  int32_T idx_size[1])
{
  int32_T loop_ub;
  int32_T i5;
  int32_T idelete_size_idx_0;
  real_T y_data[1];
  real_T locs_data[204];
  int8_T y_size[2];
  int32_T locs_temp_size[1];
  real_T locs_temp_data[204];
  int32_T iidx_data[204];
  int32_T iidx_size[1];
  int32_T sortIdx_size_idx_0;
  int32_T sortIdx_data[204];
  int32_T i;
  boolean_T idelete_data[204];
  int32_T trueCount;
  boolean_T tmp_data[204];
  boolean_T b_idelete_data[204];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (iPk_size[0] == 0) {
    st.site = &lc_emlrtRSI;
    for (i5 = 0; i5 < 2; i5++) {
      y_size[i5] = (int8_T)(1 - i5);
    }

    idx_size[0] = y_size[1];
    loop_ub = y_size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      idx_data[i5] = y_data[y_size[0] * i5];
    }
  } else {
    loop_ub = iPk_size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      idelete_size_idx_0 = (int32_T)iPk_data[i5];
      if (!((idelete_size_idx_0 >= 1) && (idelete_size_idx_0 <= 102))) {
        emlrtDynamicBoundsCheckR2012b(idelete_size_idx_0, 1, 102, &db_emlrtBCI,
          sp);
      }
    }

    loop_ub = iPk_size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      locs_data[i5] = 1.0 + (real_T)((int32_T)iPk_data[i5] - 1);
    }

    st.site = &mc_emlrtRSI;
    locs_temp_size[0] = iPk_size[0];
    loop_ub = iPk_size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      locs_temp_data[i5] = y[(int32_T)iPk_data[i5] - 1];
    }

    b_st.site = &pc_emlrtRSI;
    sort(&b_st, locs_temp_data, locs_temp_size, iidx_data, iidx_size);
    sortIdx_size_idx_0 = iidx_size[0];
    loop_ub = iidx_size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      sortIdx_data[i5] = iidx_data[i5];
    }

    locs_temp_size[0] = iidx_size[0];
    loop_ub = iidx_size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      idelete_size_idx_0 = sortIdx_data[i5];
      if (!((idelete_size_idx_0 >= 1) && (idelete_size_idx_0 <= iPk_size[0]))) {
        emlrtDynamicBoundsCheckR2012b(idelete_size_idx_0, 1, iPk_size[0],
          &eb_emlrtBCI, sp);
      }

      locs_temp_data[i5] = locs_data[idelete_size_idx_0 - 1];
    }

    idelete_size_idx_0 = (uint8_T)iidx_size[0];
    loop_ub = (uint8_T)iidx_size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      idelete_data[i5] = false;
    }

    for (i = 1; i - 1 < sortIdx_size_idx_0; i++) {
      if (!((i >= 1) && (i <= idelete_size_idx_0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, idelete_size_idx_0, &gb_emlrtBCI, sp);
      }

      if (!idelete_data[i - 1]) {
        if (!((i >= 1) && (i <= sortIdx_size_idx_0))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, sortIdx_size_idx_0, &hb_emlrtBCI,
            sp);
        }

        loop_ub = locs_temp_size[0];
        for (i5 = 0; i5 < loop_ub; i5++) {
          tmp_data[i5] = (locs_temp_data[i5] >= locs_data[sortIdx_data[i - 1] -
                          1] - 33.333333333333336);
        }

        if (!((i >= 1) && (i <= sortIdx_size_idx_0))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, sortIdx_size_idx_0, &ib_emlrtBCI,
            sp);
        }

        loop_ub = locs_temp_size[0];
        for (i5 = 0; i5 < loop_ub; i5++) {
          b_idelete_data[i5] = (locs_temp_data[i5] <= locs_data[sortIdx_data[i -
                                1] - 1] + 33.333333333333336);
        }

        loop_ub = locs_temp_size[0];
        for (i5 = 0; i5 < loop_ub; i5++) {
          tmp_data[i5] = (tmp_data[i5] && b_idelete_data[i5]);
        }

        if (idelete_size_idx_0 != locs_temp_size[0]) {
          emlrtSizeEqCheck1DR2012b(idelete_size_idx_0, locs_temp_size[0],
            &c_emlrtECI, sp);
        }

        for (i5 = 0; i5 < idelete_size_idx_0; i5++) {
          b_idelete_data[i5] = idelete_data[i5];
        }

        for (i5 = 0; i5 < idelete_size_idx_0; i5++) {
          idelete_data[i5] = (idelete_data[i5] || tmp_data[i5]);
        }

        if (!((i >= 1) && (i <= idelete_size_idx_0))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, idelete_size_idx_0, &jb_emlrtBCI,
            sp);
        }

        idelete_data[i - 1] = false;
      }
    }

    idelete_size_idx_0 = (uint8_T)iidx_size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= idelete_size_idx_0; i++) {
      if (!idelete_data[i]) {
        trueCount++;
      }
    }

    loop_ub = 0;
    for (i = 0; i <= idelete_size_idx_0; i++) {
      if (!idelete_data[i]) {
        iidx_data[loop_ub] = i + 1;
        loop_ub++;
      }
    }

    st.site = &nc_emlrtRSI;
    for (i5 = 0; i5 < trueCount; i5++) {
      if (!((iidx_data[i5] >= 1) && (iidx_data[i5] <= sortIdx_size_idx_0))) {
        emlrtDynamicBoundsCheckR2012b(iidx_data[i5], 1, sortIdx_size_idx_0,
          &fb_emlrtBCI, &st);
      }
    }

    idx_size[0] = trueCount;
    for (i5 = 0; i5 < trueCount; i5++) {
      idx_data[i5] = sortIdx_data[iidx_data[i5] - 1];
    }

    b_st.site = &pd_emlrtRSI;
    c_sort(&b_st, idx_data, idx_size);
  }
}

static void combinePeaks(const emlrtStack *sp, const real_T iPk_data[], const
  int32_T iPk_size[1], const real_T iInf_data[], const int32_T iInf_size[1],
  real_T iPkOut_data[], int32_T iPkOut_size[1])
{
  int32_T ia_data[102];
  int32_T ia_size[1];
  int32_T ib_data[102];
  int32_T ib_size[1];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &ec_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  do_vectors(&c_st, iPk_data, iPk_size, iInf_data, iInf_size, iPkOut_data,
             iPkOut_size, ia_data, ia_size, ib_data, ib_size);
}

static void d_findPeaksSeparatedByMoreThanM(const emlrtStack *sp, const real_T
  y[102], const real_T iPk_data[], const int32_T iPk_size[1], real_T idx_data[],
  int32_T idx_size[1])
{
  int32_T loop_ub;
  int32_T i10;
  int32_T idelete_size_idx_0;
  real_T y_data[1];
  real_T locs_data[204];
  int8_T y_size[2];
  int32_T locs_temp_size[1];
  real_T locs_temp_data[204];
  int32_T iidx_data[204];
  int32_T iidx_size[1];
  int32_T sortIdx_size_idx_0;
  int32_T sortIdx_data[204];
  int32_T i;
  boolean_T idelete_data[204];
  int32_T trueCount;
  boolean_T tmp_data[204];
  boolean_T b_idelete_data[204];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (iPk_size[0] == 0) {
    st.site = &lc_emlrtRSI;
    for (i10 = 0; i10 < 2; i10++) {
      y_size[i10] = (int8_T)(1 - i10);
    }

    idx_size[0] = y_size[1];
    loop_ub = y_size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      idx_data[i10] = y_data[y_size[0] * i10];
    }
  } else {
    loop_ub = iPk_size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      idelete_size_idx_0 = (int32_T)iPk_data[i10];
      if (!((idelete_size_idx_0 >= 1) && (idelete_size_idx_0 <= 102))) {
        emlrtDynamicBoundsCheckR2012b(idelete_size_idx_0, 1, 102, &db_emlrtBCI,
          sp);
      }
    }

    loop_ub = iPk_size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      locs_data[i10] = 1.0 + (real_T)((int32_T)iPk_data[i10] - 1);
    }

    st.site = &mc_emlrtRSI;
    locs_temp_size[0] = iPk_size[0];
    loop_ub = iPk_size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      locs_temp_data[i10] = y[(int32_T)iPk_data[i10] - 1];
    }

    b_st.site = &pc_emlrtRSI;
    sort(&b_st, locs_temp_data, locs_temp_size, iidx_data, iidx_size);
    sortIdx_size_idx_0 = iidx_size[0];
    loop_ub = iidx_size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      sortIdx_data[i10] = iidx_data[i10];
    }

    locs_temp_size[0] = iidx_size[0];
    loop_ub = iidx_size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      idelete_size_idx_0 = sortIdx_data[i10];
      if (!((idelete_size_idx_0 >= 1) && (idelete_size_idx_0 <= iPk_size[0]))) {
        emlrtDynamicBoundsCheckR2012b(idelete_size_idx_0, 1, iPk_size[0],
          &eb_emlrtBCI, sp);
      }

      locs_temp_data[i10] = locs_data[idelete_size_idx_0 - 1];
    }

    idelete_size_idx_0 = (uint8_T)iidx_size[0];
    loop_ub = (uint8_T)iidx_size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      idelete_data[i10] = false;
    }

    for (i = 1; i - 1 < sortIdx_size_idx_0; i++) {
      if (!((i >= 1) && (i <= idelete_size_idx_0))) {
        emlrtDynamicBoundsCheckR2012b(i, 1, idelete_size_idx_0, &gb_emlrtBCI, sp);
      }

      if (!idelete_data[i - 1]) {
        if (!((i >= 1) && (i <= sortIdx_size_idx_0))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, sortIdx_size_idx_0, &hb_emlrtBCI,
            sp);
        }

        loop_ub = locs_temp_size[0];
        for (i10 = 0; i10 < loop_ub; i10++) {
          tmp_data[i10] = (locs_temp_data[i10] >= locs_data[sortIdx_data[i - 1]
                           - 1] - 16.666666666666668);
        }

        if (!((i >= 1) && (i <= sortIdx_size_idx_0))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, sortIdx_size_idx_0, &ib_emlrtBCI,
            sp);
        }

        loop_ub = locs_temp_size[0];
        for (i10 = 0; i10 < loop_ub; i10++) {
          b_idelete_data[i10] = (locs_temp_data[i10] <= locs_data[sortIdx_data[i
            - 1] - 1] + 16.666666666666668);
        }

        loop_ub = locs_temp_size[0];
        for (i10 = 0; i10 < loop_ub; i10++) {
          tmp_data[i10] = (tmp_data[i10] && b_idelete_data[i10]);
        }

        if (idelete_size_idx_0 != locs_temp_size[0]) {
          emlrtSizeEqCheck1DR2012b(idelete_size_idx_0, locs_temp_size[0],
            &c_emlrtECI, sp);
        }

        for (i10 = 0; i10 < idelete_size_idx_0; i10++) {
          b_idelete_data[i10] = idelete_data[i10];
        }

        for (i10 = 0; i10 < idelete_size_idx_0; i10++) {
          idelete_data[i10] = (idelete_data[i10] || tmp_data[i10]);
        }

        if (!((i >= 1) && (i <= idelete_size_idx_0))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, idelete_size_idx_0, &jb_emlrtBCI,
            sp);
        }

        idelete_data[i - 1] = false;
      }
    }

    idelete_size_idx_0 = (uint8_T)iidx_size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= idelete_size_idx_0; i++) {
      if (!idelete_data[i]) {
        trueCount++;
      }
    }

    loop_ub = 0;
    for (i = 0; i <= idelete_size_idx_0; i++) {
      if (!idelete_data[i]) {
        iidx_data[loop_ub] = i + 1;
        loop_ub++;
      }
    }

    st.site = &nc_emlrtRSI;
    for (i10 = 0; i10 < trueCount; i10++) {
      if (!((iidx_data[i10] >= 1) && (iidx_data[i10] <= sortIdx_size_idx_0))) {
        emlrtDynamicBoundsCheckR2012b(iidx_data[i10], 1, sortIdx_size_idx_0,
          &fb_emlrtBCI, &st);
      }
    }

    idx_size[0] = trueCount;
    for (i10 = 0; i10 < trueCount; i10++) {
      idx_data[i10] = sortIdx_data[iidx_data[i10] - 1];
    }

    b_st.site = &pd_emlrtRSI;
    c_sort(&b_st, idx_data, idx_size);
  }
}

static void findLocalMaxima(const emlrtStack *sp, const real_T yTemp[102],
  real_T iPk_data[], int32_T iPk_size[1], real_T iInflect_data[], int32_T
  iInflect_size[1])
{
  real_T b_yTemp[104];
  boolean_T yFinite[104];
  int32_T nx;
  boolean_T x[103];
  int32_T idx;
  int8_T ii_data[103];
  int32_T ii;
  boolean_T exitg3;
  boolean_T guard3 = false;
  int32_T loop_ub;
  int32_T iv4[2];
  int8_T tmp_data[104];
  int32_T b_loop_ub;
  real_T yTemp_data[104];
  int8_T iTemp_data[104];
  int32_T yTemp_size[1];
  real_T s_data[103];
  int32_T s_size[1];
  real_T b_tmp_data[103];
  boolean_T x_data[102];
  int32_T b_ii_data[102];
  int32_T ii_size_idx_0;
  boolean_T exitg2;
  boolean_T guard2 = false;
  int32_T iv5[2];
  int32_T iv6[2];
  int32_T iv7[2];
  int32_T c_ii_data[102];
  boolean_T exitg1;
  boolean_T guard1 = false;
  int32_T iv8[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_yTemp[0] = rtNaN;
  memcpy(&b_yTemp[1], &yTemp[0], 102U * sizeof(real_T));
  b_yTemp[103] = rtNaN;
  for (nx = 0; nx < 104; nx++) {
    yFinite[nx] = !muDoubleScalarIsNaN(b_yTemp[nx]);
  }

  st.site = &pb_emlrtRSI;
  for (nx = 0; nx < 103; nx++) {
    x[nx] = ((b_yTemp[nx] != b_yTemp[nx + 1]) && (yFinite[nx] || yFinite[nx + 1]));
  }

  b_st.site = &mb_emlrtRSI;
  idx = 0;
  ii = 1;
  exitg3 = false;
  while ((!exitg3) && (ii < 104)) {
    guard3 = false;
    if (x[ii - 1]) {
      idx++;
      ii_data[idx - 1] = (int8_T)ii;
      if (idx >= 103) {
        exitg3 = true;
      } else {
        guard3 = true;
      }
    } else {
      guard3 = true;
    }

    if (guard3) {
      ii++;
    }
  }

  if (1 > idx) {
    loop_ub = 0;
  } else {
    loop_ub = idx;
  }

  iv4[0] = 1;
  iv4[1] = loop_ub;
  c_st.site = &nb_emlrtRSI;
  indexShapeCheck(&c_st, 103, iv4);
  tmp_data[0] = 1;
  for (nx = 0; nx < loop_ub; nx++) {
    tmp_data[nx + 1] = (int8_T)(ii_data[nx] + 1);
  }

  b_loop_ub = 1 + loop_ub;
  for (nx = 0; nx < b_loop_ub; nx++) {
    iTemp_data[nx] = tmp_data[nx];
  }

  yTemp_size[0] = 1 + loop_ub;
  b_loop_ub = 1 + loop_ub;
  for (nx = 0; nx < b_loop_ub; nx++) {
    yTemp_data[nx] = b_yTemp[iTemp_data[nx] - 1];
  }

  st.site = &qb_emlrtRSI;
  diff(&st, yTemp_data, yTemp_size, s_data, s_size);
  st.site = &qb_emlrtRSI;
  b_sign(s_data, s_size);
  st.site = &rb_emlrtRSI;
  b_st.site = &rb_emlrtRSI;
  diff(&b_st, s_data, s_size, b_tmp_data, yTemp_size);
  b_loop_ub = yTemp_size[0];
  for (nx = 0; nx < b_loop_ub; nx++) {
    x_data[nx] = (b_tmp_data[nx] < 0.0);
  }

  b_st.site = &mb_emlrtRSI;
  nx = yTemp_size[0];
  idx = 0;
  ii_size_idx_0 = yTemp_size[0];
  ii = 1;
  exitg2 = false;
  while ((!exitg2) && (ii <= nx)) {
    guard2 = false;
    if (x_data[ii - 1]) {
      idx++;
      b_ii_data[idx - 1] = ii;
      if (idx >= nx) {
        exitg2 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2) {
      ii++;
    }
  }

  if (idx <= yTemp_size[0]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &m_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (yTemp_size[0] == 1) {
    if (idx == 0) {
      ii_size_idx_0 = 0;
    }
  } else {
    if (1 > idx) {
      ii_size_idx_0 = 0;
    } else {
      ii_size_idx_0 = idx;
    }

    iv5[0] = 1;
    iv5[1] = ii_size_idx_0;
    c_st.site = &nb_emlrtRSI;
    indexShapeCheck(&c_st, yTemp_size[0], iv5);
  }

  if (1 > s_size[0] - 1) {
    b_loop_ub = 0;
  } else {
    if (!(1 <= s_size[0])) {
      emlrtDynamicBoundsCheckR2012b(1, 1, s_size[0], &ab_emlrtBCI, sp);
    }

    b_loop_ub = s_size[0] - 1;
    if (!((b_loop_ub >= 1) && (b_loop_ub <= s_size[0]))) {
      emlrtDynamicBoundsCheckR2012b(b_loop_ub, 1, s_size[0], &ab_emlrtBCI, sp);
    }
  }

  iv6[0] = 1;
  iv6[1] = b_loop_ub;
  st.site = &sb_emlrtRSI;
  indexShapeCheck(&st, s_size[0], iv6);
  if (2 > s_size[0]) {
    nx = 1;
    idx = 1;
  } else {
    nx = 2;
    idx = s_size[0] + 1;
  }

  iv7[0] = 1;
  iv7[1] = idx - nx;
  st.site = &sb_emlrtRSI;
  indexShapeCheck(&st, s_size[0], iv7);
  idx -= nx;
  if (b_loop_ub != idx) {
    emlrtSizeEqCheck1DR2012b(b_loop_ub, idx, &b_emlrtECI, sp);
  }

  st.site = &sb_emlrtRSI;
  for (idx = 0; idx < b_loop_ub; idx++) {
    x_data[idx] = (s_data[idx] != s_data[(nx + idx) - 1]);
  }

  b_st.site = &mb_emlrtRSI;
  idx = 0;
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii <= b_loop_ub)) {
    guard1 = false;
    if (x_data[ii - 1]) {
      idx++;
      c_ii_data[idx - 1] = ii;
      if (idx >= b_loop_ub) {
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

  if (idx <= b_loop_ub) {
  } else {
    emlrtErrorWithMessageIdR2012b(&b_st, &m_emlrtRTEI,
      "Coder:builtins:AssertionFailed", 0);
  }

  if (b_loop_ub == 1) {
    if (idx == 0) {
      b_loop_ub = 0;
    }
  } else {
    if (1 > idx) {
      nx = 0;
    } else {
      nx = idx;
    }

    iv8[0] = 1;
    iv8[1] = nx;
    c_st.site = &nb_emlrtRSI;
    indexShapeCheck(&c_st, b_loop_ub, iv8);
    b_loop_ub = nx;
  }

  iInflect_size[0] = b_loop_ub;
  for (nx = 0; nx < b_loop_ub; nx++) {
    idx = 1 + loop_ub;
    ii = c_ii_data[nx] + 1;
    if (!((ii >= 1) && (ii <= idx))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, idx, &bb_emlrtBCI, sp);
    }

    iInflect_data[nx] = (real_T)iTemp_data[ii - 1] - 1.0;
  }

  iPk_size[0] = ii_size_idx_0;
  for (nx = 0; nx < ii_size_idx_0; nx++) {
    idx = 1 + loop_ub;
    ii = b_ii_data[nx] + 1;
    if (!((ii >= 1) && (ii <= idx))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, idx, &cb_emlrtBCI, sp);
    }

    iPk_data[nx] = (real_T)iTemp_data[ii - 1] - 1.0;
  }
}

static void getAllPeaks(const emlrtStack *sp, const real_T y[102], real_T
  iPk_data[], int32_T iPk_size[1], real_T iInf_data[], int32_T iInf_size[1],
  real_T iInflect_data[], int32_T iInflect_size[1])
{
  boolean_T x[102];
  int32_T idx;
  int8_T ii_data[102];
  int32_T ii;
  boolean_T exitg1;
  boolean_T guard1 = false;
  int32_T iv3[2];
  real_T yTemp[102];
  int32_T i4;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (idx = 0; idx < 102; idx++) {
    x[idx] = (muDoubleScalarIsInf(y[idx]) && (y[idx] > 0.0));
  }

  b_st.site = &mb_emlrtRSI;
  idx = 0;
  ii = 1;
  exitg1 = false;
  while ((!exitg1) && (ii < 103)) {
    guard1 = false;
    if (x[ii - 1]) {
      idx++;
      ii_data[idx - 1] = (int8_T)ii;
      if (idx >= 102) {
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

  if (1 > idx) {
    idx = 0;
  }

  iv3[0] = 1;
  iv3[1] = idx;
  c_st.site = &nb_emlrtRSI;
  indexShapeCheck(&c_st, 102, iv3);
  iInf_size[0] = idx;
  for (ii = 0; ii < idx; ii++) {
    iInf_data[ii] = ii_data[ii];
  }

  memcpy(&yTemp[0], &y[0], 102U * sizeof(real_T));
  for (ii = 0; ii < idx; ii++) {
    i4 = (int32_T)iInf_data[ii];
    ii_data[ii] = (int8_T)i4;
  }

  for (ii = 0; ii < idx; ii++) {
    yTemp[ii_data[ii] - 1] = rtNaN;
  }

  st.site = &lb_emlrtRSI;
  findLocalMaxima(&st, yTemp, iPk_data, iPk_size, iInflect_data, iInflect_size);
}

static void keepAtMostNpPeaks(const emlrtStack *sp, real_T idx_data[], int32_T
  idx_size[1])
{
  int32_T idx;
  real_T b_idx_data[204];
  int32_T i18;
  int32_T i19;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (idx_size[0] > 2) {
    st.site = &rd_emlrtRSI;
    b_st.site = &ob_emlrtRSI;
    if (!!(idx_size[0] != 1)) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &l_emlrtRTEI,
        "Coder:FE:PotentialVectorVector", 0);
    }

    idx = idx_size[0];
    for (i18 = 0; i18 < 2; i18++) {
      i19 = 1 + i18;
      if (!(i19 <= idx)) {
        emlrtDynamicBoundsCheckR2012b(i19, 1, idx, &ub_emlrtBCI, sp);
      }

      b_idx_data[i18] = idx_data[i19 - 1];
    }

    idx_size[0] = 2;
    for (i18 = 0; i18 < 2; i18++) {
      idx_data[i18] = b_idx_data[i18];
    }
  }
}

static void orderPeaks(const emlrtStack *sp, const real_T Y[102], const real_T
  iPk_data[], const int32_T iPk_size[1], real_T idx_data[], int32_T idx_size[1])
{
  int32_T x_size[1];
  int32_T loop_ub;
  int32_T i16;
  real_T x_data[204];
  int32_T iidx_data[204];
  int32_T iidx_size[1];
  real_T d0;
  int32_T idx;
  int32_T i17;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (idx_size[0] == 0) {
  } else {
    st.site = &qd_emlrtRSI;
    x_size[0] = idx_size[0];
    loop_ub = idx_size[0];
    for (i16 = 0; i16 < loop_ub; i16++) {
      d0 = idx_data[i16];
      if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
        emlrtIntegerCheckR2012b(d0, &l_emlrtDCI, &st);
      }

      i17 = (int32_T)d0;
      if (!((i17 >= 1) && (i17 <= iPk_size[0]))) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, iPk_size[0], &sb_emlrtBCI, &st);
      }

      i17 = (int32_T)iPk_data[i17 - 1];
      if (!((i17 >= 1) && (i17 <= 102))) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, 102, &rb_emlrtBCI, &st);
      }

      x_data[i16] = Y[i17 - 1];
    }

    b_st.site = &pc_emlrtRSI;
    sort(&b_st, x_data, x_size, iidx_data, iidx_size);
    idx = idx_size[0];
    loop_ub = iidx_size[0];
    for (i16 = 0; i16 < loop_ub; i16++) {
      i17 = iidx_data[i16];
      if (!((i17 >= 1) && (i17 <= idx))) {
        emlrtDynamicBoundsCheckR2012b(i17, 1, idx, &tb_emlrtBCI, sp);
      }

      x_data[i16] = idx_data[i17 - 1];
    }

    idx_size[0] = iidx_size[0];
    loop_ub = iidx_size[0];
    for (i16 = 0; i16 < loop_ub; i16++) {
      idx_data[i16] = x_data[i16];
    }
  }
}

static void removePeaksBelowMinPeakHeight(const emlrtStack *sp, const real_T Y
  [102], real_T iPk_data[], int32_T iPk_size[1])
{
  int32_T loop_ub;
  int32_T i11;
  int32_T trueCount;
  int32_T i;
  int32_T partialTrueCount;
  if (!(iPk_size[0] == 0)) {
    loop_ub = iPk_size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      trueCount = (int32_T)iPk_data[i11];
      if (!((trueCount >= 1) && (trueCount <= 102))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, 102, &lb_emlrtBCI, sp);
      }
    }

    loop_ub = iPk_size[0] - 1;
    trueCount = 0;
    for (i = 0; i <= loop_ub; i++) {
      i11 = (int32_T)iPk_data[i];
      if (!((i11 >= 1) && (i11 <= 102))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, 102, &lb_emlrtBCI, sp);
      }

      if (Y[i11 - 1] > rtMinusInf) {
        trueCount++;
      }
    }

    partialTrueCount = 0;
    for (i = 0; i <= loop_ub; i++) {
      i11 = (int32_T)iPk_data[i];
      if (!((i11 >= 1) && (i11 <= 102))) {
        emlrtDynamicBoundsCheckR2012b(i11, 1, 102, &lb_emlrtBCI, sp);
      }

      if (Y[i11 - 1] > rtMinusInf) {
        i11 = iPk_size[0];
        if (!((i + 1 >= 1) && (i + 1 <= i11))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i11, &mb_emlrtBCI, sp);
        }

        iPk_data[partialTrueCount] = iPk_data[i];
        partialTrueCount++;
      }
    }

    iPk_size[0] = trueCount;
  }
}

static void removePeaksBelowThreshold(const emlrtStack *sp, const real_T Y[102],
  real_T iPk_data[], int32_T iPk_size[1])
{
  int32_T varargin_1_size[1];
  int32_T k;
  int32_T i12;
  int32_T varargin_2_size[1];
  int32_T trueCount;
  int8_T csz_idx_0;
  real_T base_data[102];
  int32_T base_size[1];
  int32_T i;
  int32_T partialTrueCount;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  varargin_1_size[0] = iPk_size[0];
  k = iPk_size[0];
  for (i12 = 0; i12 < k; i12++) {
    trueCount = (int32_T)(iPk_data[i12] - 1.0);
    if (!((trueCount >= 1) && (trueCount <= 102))) {
      emlrtDynamicBoundsCheckR2012b(trueCount, 1, 102, &nb_emlrtBCI, &st);
    }
  }

  varargin_2_size[0] = iPk_size[0];
  k = iPk_size[0];
  for (i12 = 0; i12 < k; i12++) {
    trueCount = (int32_T)(iPk_data[i12] + 1.0);
    if (!((trueCount >= 1) && (trueCount <= 102))) {
      emlrtDynamicBoundsCheckR2012b(trueCount, 1, 102, &ob_emlrtBCI, &st);
    }
  }

  b_st.site = &ab_emlrtRSI;
  c_st.site = &v_emlrtRSI;
  d_st.site = &ac_emlrtRSI;
  e_st.site = &bc_emlrtRSI;
  csz_idx_0 = (int8_T)iPk_size[0];
  base_size[0] = (int8_T)iPk_size[0];
  if (dimagree(base_size, varargin_1_size, varargin_2_size)) {
  } else {
    emlrtErrorWithMessageIdR2012b(&e_st, &ab_emlrtRTEI, "MATLAB:dimagree", 0);
  }

  e_st.site = &cc_emlrtRSI;
  for (k = 0; k + 1 <= csz_idx_0; k++) {
    base_data[k] = muDoubleScalarMax(Y[(int32_T)(iPk_data[k] - 1.0) - 1], Y
      [(int32_T)(iPk_data[k] + 1.0) - 1]);
  }

  k = iPk_size[0];
  for (i12 = 0; i12 < k; i12++) {
    trueCount = (int32_T)iPk_data[i12];
    if (!((trueCount >= 1) && (trueCount <= 102))) {
      emlrtDynamicBoundsCheckR2012b(trueCount, 1, 102, &pb_emlrtBCI, sp);
    }
  }

  i12 = iPk_size[0];
  trueCount = csz_idx_0;
  if (i12 != trueCount) {
    emlrtSizeEqCheck1DR2012b(i12, trueCount, &d_emlrtECI, sp);
  }

  k = iPk_size[0] - 1;
  trueCount = 0;
  for (i = 0; i <= k; i++) {
    if (Y[(int32_T)iPk_data[i] - 1] - base_data[i] >= 0.0) {
      trueCount++;
    }
  }

  partialTrueCount = 0;
  for (i = 0; i <= k; i++) {
    if (Y[(int32_T)iPk_data[i] - 1] - base_data[i] >= 0.0) {
      i12 = iPk_size[0];
      if (!((i + 1 >= 1) && (i + 1 <= i12))) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, i12, &qb_emlrtBCI, sp);
      }

      iPk_data[partialTrueCount] = iPk_data[i];
      partialTrueCount++;
    }
  }

  iPk_size[0] = trueCount;
}

void b_findpeaks(const emlrtStack *sp, const real_T Yin[102], real_T Ypk_data[],
                 int32_T Ypk_size[2], real_T Xpk_data[], int32_T Xpk_size[2])
{
  real_T iFinite_data[102];
  int32_T iFinite_size[1];
  real_T iInfite_data[102];
  int32_T iInfite_size[1];
  real_T iInflect_data[102];
  int32_T iInflect_size[1];
  int32_T iPk_size[1];
  int32_T loop_ub;
  int32_T i8;
  real_T iPk_data[204];
  real_T b_iPk_data[204];
  int32_T i9;
  real_T c_iPk_data[204];
  int32_T b_iPk_size[1];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cb_emlrtRSI;
  getAllPeaks(&st, Yin, iFinite_data, iFinite_size, iInfite_data, iInfite_size,
              iInflect_data, iInflect_size);
  st.site = &db_emlrtRSI;
  removePeaksBelowMinPeakHeight(&st, Yin, iFinite_data, iFinite_size);
  iPk_size[0] = iFinite_size[0];
  loop_ub = iFinite_size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    iPk_data[i8] = iFinite_data[i8];
  }

  loop_ub = iPk_size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    iFinite_data[i8] = iPk_data[i8];
  }

  st.site = &eb_emlrtRSI;
  removePeaksBelowThreshold(&st, Yin, iFinite_data, iFinite_size);
  iPk_size[0] = iFinite_size[0];
  loop_ub = iFinite_size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    iPk_data[i8] = iFinite_data[i8];
  }

  st.site = &fb_emlrtRSI;
  combinePeaks(&st, iPk_data, iPk_size, iInfite_data, iInfite_size, b_iPk_data,
               iFinite_size);
  st.site = &gb_emlrtRSI;
  d_findPeaksSeparatedByMoreThanM(&st, Yin, b_iPk_data, iFinite_size, iPk_data,
    iPk_size);
  st.site = &hb_emlrtRSI;
  orderPeaks(&st, Yin, b_iPk_data, iFinite_size, iPk_data, iPk_size);
  st.site = &ib_emlrtRSI;
  keepAtMostNpPeaks(&st, iPk_data, iPk_size);
  loop_ub = iPk_size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    if (iPk_data[i8] != (int32_T)muDoubleScalarFloor(iPk_data[i8])) {
      emlrtIntegerCheckR2012b(iPk_data[i8], &k_emlrtDCI, sp);
    }

    i9 = (int32_T)iPk_data[i8];
    if (!((i9 >= 1) && (i9 <= iFinite_size[0]))) {
      emlrtDynamicBoundsCheckR2012b(i9, 1, iFinite_size[0], &y_emlrtBCI, sp);
    }
  }

  for (i8 = 0; i8 < 102; i8++) {
    iFinite_data[i8] = 1.0 + (real_T)i8;
  }

  b_iPk_size[0] = iPk_size[0];
  loop_ub = iPk_size[0];
  for (i8 = 0; i8 < loop_ub; i8++) {
    c_iPk_data[i8] = b_iPk_data[(int32_T)iPk_data[i8] - 1];
  }

  st.site = &jb_emlrtRSI;
  assignOutputs(&st, Yin, iFinite_data, c_iPk_data, b_iPk_size, Ypk_data,
                Ypk_size, Xpk_data, Xpk_size);
}

void findpeaks(const emlrtStack *sp, const real_T Yin[102], real_T Ypk_data[],
               int32_T Ypk_size[2], real_T Xpk_data[], int32_T Xpk_size[2])
{
  real_T iFinite_data[102];
  int32_T iFinite_size[1];
  real_T iInfite_data[102];
  int32_T iInfite_size[1];
  real_T iInflect_data[102];
  int32_T iInflect_size[1];
  int32_T iPk_size[1];
  int32_T loop_ub;
  int32_T i2;
  real_T iPk_data[204];
  real_T b_iPk_data[204];
  int32_T i3;
  real_T c_iPk_data[204];
  int32_T b_iPk_size[1];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cb_emlrtRSI;
  getAllPeaks(&st, Yin, iFinite_data, iFinite_size, iInfite_data, iInfite_size,
              iInflect_data, iInflect_size);
  st.site = &db_emlrtRSI;
  removePeaksBelowMinPeakHeight(&st, Yin, iFinite_data, iFinite_size);
  iPk_size[0] = iFinite_size[0];
  loop_ub = iFinite_size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    iPk_data[i2] = iFinite_data[i2];
  }

  loop_ub = iPk_size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    iFinite_data[i2] = iPk_data[i2];
  }

  st.site = &eb_emlrtRSI;
  removePeaksBelowThreshold(&st, Yin, iFinite_data, iFinite_size);
  iPk_size[0] = iFinite_size[0];
  loop_ub = iFinite_size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    iPk_data[i2] = iFinite_data[i2];
  }

  st.site = &fb_emlrtRSI;
  combinePeaks(&st, iPk_data, iPk_size, iInfite_data, iInfite_size, b_iPk_data,
               iFinite_size);
  st.site = &gb_emlrtRSI;
  c_findPeaksSeparatedByMoreThanM(&st, Yin, b_iPk_data, iFinite_size, iPk_data,
    iPk_size);
  st.site = &hb_emlrtRSI;
  orderPeaks(&st, Yin, b_iPk_data, iFinite_size, iPk_data, iPk_size);
  st.site = &ib_emlrtRSI;
  keepAtMostNpPeaks(&st, iPk_data, iPk_size);
  loop_ub = iPk_size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    if (iPk_data[i2] != (int32_T)muDoubleScalarFloor(iPk_data[i2])) {
      emlrtIntegerCheckR2012b(iPk_data[i2], &k_emlrtDCI, sp);
    }

    i3 = (int32_T)iPk_data[i2];
    if (!((i3 >= 1) && (i3 <= iFinite_size[0]))) {
      emlrtDynamicBoundsCheckR2012b(i3, 1, iFinite_size[0], &y_emlrtBCI, sp);
    }
  }

  for (i2 = 0; i2 < 102; i2++) {
    iFinite_data[i2] = 1.0 + (real_T)i2;
  }

  b_iPk_size[0] = iPk_size[0];
  loop_ub = iPk_size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    c_iPk_data[i2] = b_iPk_data[(int32_T)iPk_data[i2] - 1];
  }

  st.site = &jb_emlrtRSI;
  assignOutputs(&st, Yin, iFinite_data, c_iPk_data, b_iPk_size, Ypk_data,
                Ypk_size, Xpk_data, Xpk_size);
}

/* End of code generation (findpeaks.c) */

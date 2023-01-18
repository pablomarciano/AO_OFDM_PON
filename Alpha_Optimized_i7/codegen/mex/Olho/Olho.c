/*
 * Olho.c
 *
 * Code generation for function 'Olho'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Olho.h"
#include "linspace.h"
#include "error.h"
#include "Olho_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "std.h"
#include "mean.h"
#include "assertValidSizeArg.h"
#include "mod.h"
#include "Olho_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 57, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo b_emlrtRSI = { 58, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo c_emlrtRSI = { 84, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo d_emlrtRSI = { 85, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo e_emlrtRSI = { 90, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo f_emlrtRSI = { 100, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo g_emlrtRSI = { 102, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo h_emlrtRSI = { 104, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo i_emlrtRSI = { 106, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo j_emlrtRSI = { 108, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo k_emlrtRSI = { 113, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo l_emlrtRSI = { 117, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo m_emlrtRSI = { 124, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo n_emlrtRSI = { 125, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo o_emlrtRSI = { 126, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRSInfo p_emlrtRSI = { 13, "max",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

static emlrtRSInfo q_emlrtRSI = { 19, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo r_emlrtRSI = { 140, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo s_emlrtRSI = { 375, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo t_emlrtRSI = { 347, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo v_emlrtRSI = { 13, "min",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo w_emlrtRSI = { 39, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo x_emlrtRSI = { 61, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo y_emlrtRSI = { 108, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo ab_emlrtRSI = { 131, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo db_emlrtRSI = { 44, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRSInfo eb_emlrtRSI = { 234, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 55, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRTEInfo b_emlrtRTEI = { 253, 13, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 62, 1, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRTEInfo d_emlrtRTEI = { 90, 1, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRTEInfo e_emlrtRTEI = { 92, 1, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRTEInfo f_emlrtRTEI = { 93, 1, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRTEInfo g_emlrtRTEI = { 94, 1, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRTEInfo h_emlrtRTEI = { 95, 1, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRTEInfo i_emlrtRTEI = { 96, 1, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRTEInfo j_emlrtRTEI = { 102, 5, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRTEInfo k_emlrtRTEI = { 104, 5, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtRTEInfo l_emlrtRTEI = { 36, 6, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 63, 9, "t", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 63, 14, "t", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtRTEInfo o_emlrtRTEI = { 98, 1, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m" };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 100, 27, "olho", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 102, 27, "olho", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 104, 27, "olho", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 106, 28, "olho", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 108, 28, "olho", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 113, 38, "olho", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 117, 38, "olho", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtRTEInfo p_emlrtRTEI = { 39, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 121, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 71, 15, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 243, 9, "find",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"
};

static emlrtDCInfo emlrtDCI = { 91, 18, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 1 };

static emlrtDCInfo b_emlrtDCI = { 91, 18, "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 4 };

static emlrtDCInfo c_emlrtDCI = { 68, 62, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m",
  4 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 100, 5, "media", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 102, 35, "media", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 104, 35, "media", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 106, 31, "olho", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 106, 5, "hi", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 108, 31, "olho", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 108, 5, "low", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 113, 41, "olho", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 113, 5, "Lhi", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 117, 41, "olho", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 117, 5, "Llow", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 120, 17, "Lhi", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 120, 27, "Llow", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 120, 5, "Ab", "Olho",
  "C:\\Users\\pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\Olho.m", 0 };

/* Function Definitions */
void Olho(const emlrtStack *sp, const emxArray_real_T *Dados, real_T t_simb,
          real_T n_amos_p_sim, real_T ploting, real_T tmax, emxArray_real_T
          *olho_mat, emxArray_real_T *tn, real_T *Olho_Aber, real_T *Aber_Lhi,
          real_T *Aber_Llow)
{
  boolean_T overflow;
  int32_T ixstart;
  int32_T nx;
  boolean_T exitg4;
  emxArray_real_T *t;
  boolean_T exitg3;
  real_T N_sim;
  int32_T i0;
  real_T n_plot;
  real_T nlin;
  real_T varargin_1;
  real_T varargin_2;
  int32_T sz[2];
  uint32_T b_varargin_1[2];
  int32_T idx;
  int32_T b_sz[2];
  int32_T c_sz[2];
  emxArray_real_T *olho;
  emxArray_real_T *hi;
  emxArray_real_T *low;
  emxArray_real_T *Lhi;
  emxArray_real_T *Llow;
  emxArray_real_T *Ab;
  int32_T ii;
  emxArray_real_T *nhi;
  emxArray_real_T *nlow;
  emxArray_boolean_T *x;
  emxArray_int32_T *b_ii;
  emxArray_real_T *b_olho;
  emxArray_real_T *c_olho;
  emxArray_real_T *d_olho;
  emxArray_real_T *e_olho;
  emxArray_real_T *f_olho;
  boolean_T exitg2;
  boolean_T guard2 = false;
  boolean_T exitg1;
  boolean_T guard1 = false;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  (void)ploting;
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

  /* %           Creating the Eye Diagram of one electrical signals.   */
  /* c function [olho_mat,tn,Olho_Aber,Aber_Lhi,Aber_Llow] = Olho(Dados,... */
  /* c                                             t_simb,n_amos_p_sim,ploting) */
  /* c */
  /* c */
  /* c This function is resposible for generating the eye diagram of an given */
  /* c signal. */
  /* c */
  /* c */
  /* c                                           Created by P.Marciano LG */
  /* c                                           22/11/2016 */
  /* c                                           07/01/2018 */
  /* c                                           pablorafael.mcx@gmail.com */
  /* c */
  /* c  */
  /* c */
  /* c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* c                    G L O B A L  V A R I A B L E S                      % */
  /* c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* c */
  /* c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* c                   L I S T  O F  V A R I A B L E S                      % */
  /* c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* c */
  /* c    Olho */
  /* c */
  /* c  Input: */
  /* c  Dados        : The complete tada to be evaluated                    [b] */
  /* c  t_simb       : The time period of one symbol                        [s] */
  /* c  n_amos_p_sim : The number of samples per symbol                  [samp] */
  /* c  ploting      : Control variable to plot or not the eye diagram withing */
  /* c                 this fucntion                                   [bolean] */
  /* c   */
  /* c  Output: */
  /* c  olho_mat     : Matriz with the eye diagram stored                   [u] */
  /* c  tn           : Time vector for ploting the Eye Diagram outside this */
  /* c                 function                                             [s]  */
  /* c  Olho_Aber    : Statical information about the Eye Opening           [u] */
  /* c  Aber_Lhi     : Statical information about the Eye highest point     [u] */
  /* c  Aber_Llow    : Statical information about the Eye lowest point      [u] */
  /* c   */
  /* c */
  /* c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* c                             S T R U C T S                              % */
  /* c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /* c */
  /* %                       Initializing */
  /* % Recovering the main iformation about the income signal */
  covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, false);
  covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 1, false);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2);
  st.site = &emlrtRSI;
  b_st.site = &p_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  if ((Dados->size[1] == 1) || (Dados->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &p_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (Dados->size[1] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &q_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &r_emlrtRSI;
  ixstart = 1;
  if (Dados->size[1] > 1) {
    if (muDoubleScalarIsNaN(Dados->data[0])) {
      e_st.site = &t_emlrtRSI;
      overflow = (Dados->size[1] > 2147483646);
      if (overflow) {
        f_st.site = &u_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      nx = 2;
      exitg4 = false;
      while ((!exitg4) && (nx <= Dados->size[1])) {
        ixstart = nx;
        if (!muDoubleScalarIsNaN(Dados->data[nx - 1])) {
          exitg4 = true;
        } else {
          nx++;
        }
      }
    }

    if (ixstart < Dados->size[1]) {
      e_st.site = &s_emlrtRSI;
      overflow = ((!(ixstart + 1 > Dados->size[1])) && (Dados->size[1] >
        2147483646));
      if (overflow) {
        f_st.site = &u_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
    }
  }

  /* Variable used to limit the ploting at the maximum point */
  st.site = &b_emlrtRSI;
  b_st.site = &v_emlrtRSI;
  c_st.site = &q_emlrtRSI;
  d_st.site = &r_emlrtRSI;
  ixstart = 1;
  if (Dados->size[1] > 1) {
    if (muDoubleScalarIsNaN(Dados->data[0])) {
      e_st.site = &t_emlrtRSI;
      overflow = (Dados->size[1] > 2147483646);
      if (overflow) {
        f_st.site = &u_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      nx = 2;
      exitg3 = false;
      while ((!exitg3) && (nx <= Dados->size[1])) {
        ixstart = nx;
        if (!muDoubleScalarIsNaN(Dados->data[nx - 1])) {
          exitg3 = true;
        } else {
          nx++;
        }
      }
    }

    if (ixstart < Dados->size[1]) {
      e_st.site = &s_emlrtRSI;
      overflow = ((!(ixstart + 1 > Dados->size[1])) && (Dados->size[1] >
        2147483646));
      if (overflow) {
        f_st.site = &u_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }
    }
  }

  emxInit_real_T(&d_st, &t, 2, &c_emlrtRTEI, true);

  /* Variable used to limit the ploting at the minimum point */
  ixstart = Dados->size[1];

  /* Recovering the size of the income information */
  N_sim = (real_T)Dados->size[1] / n_amos_p_sim;

  /* Recovering the number of Symbols withing the information */
  /* Estimating the final time of this signal */
  linspace(sp, N_sim * t_simb, Dados->size[1], t);

  /* Recovering the time vector of the income signal */
  i0 = t->size[1];
  if (!(2 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(2, 1, i0, &emlrtBCI, sp);
  }

  i0 = t->size[1];
  if (!(1 <= i0)) {
    emlrtDynamicBoundsCheckR2012b(1, 1, i0, &b_emlrtBCI, sp);
  }

  /* Recovering the sampling ratio of this signal */
  /* % Seting variables for controling the spliting to the income signal */
  /*  tmax  = 3;                                                                 %Seting the number eyes to be plot */
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 2, N_sim <= tmax)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 3);

    /* If the income signal just have one symbel just one eye will be plot */
    n_plot = 1.0;
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 4);

    /* Otherwise, we need to calculate the number of samples needed to be */
    /* taken to create the eye diagram accordingly with the previous */
    /* especified. */
    n_plot = (real_T)Dados->size[1] / (tmax * n_amos_p_sim);

    /* taking the number of samples needed */
    /* Because of reasons, the number of samples may not be multiple of the */
    /* number of eyes requested for ploting hence, it must be downsizes to */
    /* the minimal of one eye to be ploted. */
    while (covrtLogWhile(&emlrtCoverageInstance, 0U, 0U, 0, b_mod(ixstart, tmax *
             n_amos_p_sim) != 0.0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 5);

      /* Checking if the number of samples is divisible by the number of eyes to be plot          */
      tmax--;

      /* If not, reduz the number of eyes by one unity */
      n_plot = (real_T)ixstart / (tmax * n_amos_p_sim);

      /* Recalculate the number of samples needed to be taken */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 6);

  /* % Resizing the income signal for ploting */
  nlin = tmax * n_amos_p_sim;

  /* Setting the number of lines of the new matriz */
  /* Setting the number of columns */
  varargin_1 = muDoubleScalarRound(nlin);
  varargin_2 = muDoubleScalarRound(n_plot);
  st.site = &c_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  assertValidSizeArg(&c_st, varargin_1);
  c_st.site = &ab_emlrtRSI;
  assertValidSizeArg(&c_st, varargin_2);
  sz[0] = (int32_T)varargin_1;
  sz[1] = (int32_T)varargin_2;
  for (i0 = 0; i0 < 2; i0++) {
    b_varargin_1[i0] = (uint32_T)t->size[i0];
  }

  ixstart = 1;
  if ((int32_T)b_varargin_1[1] > 1) {
    ixstart = (int32_T)b_varargin_1[1];
  }

  ixstart = muIntScalarMax_sint32(t->size[1], ixstart);
  if ((int32_T)varargin_1 > ixstart) {
    b_st.site = &x_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)varargin_2 > ixstart) {
    b_st.site = &x_emlrtRSI;
    error(&b_st);
  }

  for (i0 = 0; i0 < 2; i0++) {
    idx = sz[i0];
    if (!(idx >= 0)) {
      emlrtNonNegativeCheckR2012b(idx, &c_emlrtDCI, &st);
    }
  }

  i0 = tn->size[0] * tn->size[1];
  tn->size[0] = (int32_T)varargin_1;
  tn->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity(&st, (emxArray__common *)tn, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (t->size[1] == tn->size[0] * tn->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &r_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &y_emlrtRSI;
  overflow = ((!(1 > t->size[1])) && (t->size[1] > 2147483646));
  if (overflow) {
    c_st.site = &u_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (ixstart = 0; ixstart + 1 <= t->size[1]; ixstart++) {
    tn->data[ixstart] = t->data[ixstart];
  }

  /* Reshaping the time vector to match the signal matriz */
  varargin_1 = muDoubleScalarRound(nlin);
  varargin_2 = muDoubleScalarRound(n_plot);
  st.site = &d_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  assertValidSizeArg(&c_st, varargin_1);
  c_st.site = &ab_emlrtRSI;
  assertValidSizeArg(&c_st, varargin_2);
  b_sz[0] = (int32_T)varargin_1;
  b_sz[1] = (int32_T)varargin_2;
  for (i0 = 0; i0 < 2; i0++) {
    b_varargin_1[i0] = (uint32_T)Dados->size[i0];
  }

  ixstart = 1;
  if ((int32_T)b_varargin_1[1] > 1) {
    ixstart = (int32_T)b_varargin_1[1];
  }

  ixstart = muIntScalarMax_sint32(Dados->size[1], ixstart);
  if ((int32_T)varargin_1 > ixstart) {
    b_st.site = &x_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)varargin_2 > ixstart) {
    b_st.site = &x_emlrtRSI;
    error(&b_st);
  }

  for (i0 = 0; i0 < 2; i0++) {
    idx = b_sz[i0];
    if (!(idx >= 0)) {
      emlrtNonNegativeCheckR2012b(idx, &c_emlrtDCI, &st);
    }
  }

  i0 = olho_mat->size[0] * olho_mat->size[1];
  olho_mat->size[0] = (int32_T)varargin_1;
  olho_mat->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity(&st, (emxArray__common *)olho_mat, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  if (Dados->size[1] == olho_mat->size[0] * olho_mat->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &r_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &y_emlrtRSI;
  overflow = (Dados->size[1] > 2147483646);
  if (overflow) {
    c_st.site = &u_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (ixstart = 0; ixstart + 1 <= Dados->size[1]; ixstart++) {
    olho_mat->data[ixstart] = Dados->data[ixstart];
  }

  /* Reshaping the signal to an matriz */
  /* % Resizing the income signal for measurement of the eye opening */
  /* Setting the number of lines of the new matriz */
  /* Setting the number of columns */
  st.site = &e_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &ab_emlrtRSI;
  assertValidSizeArg(&c_st, n_amos_p_sim);
  c_st.site = &ab_emlrtRSI;
  assertValidSizeArg(&c_st, N_sim);
  c_sz[0] = (int32_T)n_amos_p_sim;
  c_sz[1] = (int32_T)N_sim;
  for (i0 = 0; i0 < 2; i0++) {
    b_varargin_1[i0] = (uint32_T)Dados->size[i0];
  }

  ixstart = 1;
  if ((int32_T)b_varargin_1[1] > 1) {
    ixstart = (int32_T)b_varargin_1[1];
  }

  ixstart = muIntScalarMax_sint32(Dados->size[1], ixstart);
  if ((int32_T)n_amos_p_sim > ixstart) {
    b_st.site = &x_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)N_sim > ixstart) {
    b_st.site = &x_emlrtRSI;
    error(&b_st);
  }

  for (i0 = 0; i0 < 2; i0++) {
    idx = c_sz[i0];
    if (!(idx >= 0)) {
      emlrtNonNegativeCheckR2012b(idx, &c_emlrtDCI, &st);
    }
  }

  emxInit_real_T(&st, &olho, 2, &d_emlrtRTEI, true);
  i0 = olho->size[0] * olho->size[1];
  olho->size[0] = (int32_T)n_amos_p_sim;
  olho->size[1] = (int32_T)N_sim;
  emxEnsureCapacity(&st, (emxArray__common *)olho, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (Dados->size[1] == olho->size[0] * olho->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &r_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &y_emlrtRSI;
  for (ixstart = 0; ixstart + 1 <= Dados->size[1]; ixstart++) {
    olho->data[ixstart] = Dados->data[ixstart];
  }

  /* Reshaping the signal to an matriz */
  i0 = t->size[0] * t->size[1];
  t->size[0] = 1;
  if (!(n_amos_p_sim >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n_amos_p_sim, &b_emlrtDCI, sp);
  }

  varargin_1 = n_amos_p_sim;
  if (varargin_1 != (int32_T)muDoubleScalarFloor(varargin_1)) {
    emlrtIntegerCheckR2012b(varargin_1, &emlrtDCI, sp);
  }

  t->size[1] = (int32_T)varargin_1;
  emxEnsureCapacity(sp, (emxArray__common *)t, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (!(n_amos_p_sim >= 0.0)) {
    emlrtNonNegativeCheckR2012b(n_amos_p_sim, &b_emlrtDCI, sp);
  }

  if (varargin_1 != (int32_T)muDoubleScalarFloor(varargin_1)) {
    emlrtIntegerCheckR2012b(varargin_1, &emlrtDCI, sp);
  }

  ixstart = (int32_T)varargin_1;
  for (i0 = 0; i0 < ixstart; i0++) {
    t->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &hi, 2, &e_emlrtRTEI, true);
  i0 = hi->size[0] * hi->size[1];
  hi->size[0] = 1;
  hi->size[1] = (int32_T)n_amos_p_sim;
  emxEnsureCapacity(sp, (emxArray__common *)hi, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ixstart = (int32_T)n_amos_p_sim;
  for (i0 = 0; i0 < ixstart; i0++) {
    hi->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &low, 2, &f_emlrtRTEI, true);
  i0 = low->size[0] * low->size[1];
  low->size[0] = 1;
  low->size[1] = (int32_T)n_amos_p_sim;
  emxEnsureCapacity(sp, (emxArray__common *)low, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ixstart = (int32_T)n_amos_p_sim;
  for (i0 = 0; i0 < ixstart; i0++) {
    low->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &Lhi, 2, &g_emlrtRTEI, true);
  i0 = Lhi->size[0] * Lhi->size[1];
  Lhi->size[0] = 1;
  Lhi->size[1] = (int32_T)n_amos_p_sim;
  emxEnsureCapacity(sp, (emxArray__common *)Lhi, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ixstart = (int32_T)n_amos_p_sim;
  for (i0 = 0; i0 < ixstart; i0++) {
    Lhi->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &Llow, 2, &h_emlrtRTEI, true);
  i0 = Llow->size[0] * Llow->size[1];
  Llow->size[0] = 1;
  Llow->size[1] = (int32_T)n_amos_p_sim;
  emxEnsureCapacity(sp, (emxArray__common *)Llow, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ixstart = (int32_T)n_amos_p_sim;
  for (i0 = 0; i0 < ixstart; i0++) {
    Llow->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &Ab, 2, &i_emlrtRTEI, true);
  i0 = Ab->size[0] * Ab->size[1];
  Ab->size[0] = 1;
  Ab->size[1] = (int32_T)n_amos_p_sim;
  emxEnsureCapacity(sp, (emxArray__common *)Ab, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  ixstart = (int32_T)n_amos_p_sim;
  for (i0 = 0; i0 < ixstart; i0++) {
    Ab->data[i0] = 0.0;
  }

  /*  Measuring the eye opening. */
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, n_amos_p_sim, mxDOUBLE_CLASS, (int32_T)
    n_amos_p_sim, &o_emlrtRTEI, sp);
  ii = 1;
  emxInit_real_T(sp, &nhi, 2, &j_emlrtRTEI, true);
  emxInit_real_T(sp, &nlow, 2, &k_emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 2, &emlrtRTEI, true);
  emxInit_int32_T(sp, &b_ii, 2, &l_emlrtRTEI, true);
  emxInit_real_T(sp, &b_olho, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &c_olho, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &d_olho, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &e_olho, 2, &emlrtRTEI, true);
  emxInit_real_T(sp, &f_olho, 2, &emlrtRTEI, true);
  while (ii - 1 <= (int32_T)n_amos_p_sim - 1) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 7);

    /* Taking the mean value for the current sample for all symbols */
    ixstart = olho->size[1];
    i0 = olho->size[0];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &c_emlrtBCI, sp);
    }

    i0 = f_olho->size[0] * f_olho->size[1];
    f_olho->size[0] = 1;
    f_olho->size[1] = ixstart;
    emxEnsureCapacity(sp, (emxArray__common *)f_olho, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < ixstart; i0++) {
      f_olho->data[f_olho->size[0] * i0] = olho->data[(ii + olho->size[0] * i0)
        - 1];
    }

    i0 = t->size[1];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &j_emlrtBCI, sp);
    }

    st.site = &f_emlrtRSI;
    t->data[ii - 1] = mean(&st, f_olho);

    /* Taking the points abouve the current mean value */
    st.site = &g_emlrtRSI;
    ixstart = olho->size[1];
    i0 = olho->size[0];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &d_emlrtBCI, &st);
    }

    i0 = t->size[1];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &k_emlrtBCI, &st);
    }

    varargin_1 = t->data[ii - 1];
    i0 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = ixstart;
    emxEnsureCapacity(&st, (emxArray__common *)x, i0, (int32_T)sizeof(boolean_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < ixstart; i0++) {
      x->data[x->size[0] * i0] = (olho->data[(ii + olho->size[0] * i0) - 1] >
        varargin_1);
    }

    b_st.site = &db_emlrtRSI;
    nx = x->size[1];
    idx = 0;
    i0 = b_ii->size[0] * b_ii->size[1];
    b_ii->size[0] = 1;
    b_ii->size[1] = x->size[1];
    emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i0, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    c_st.site = &eb_emlrtRSI;
    ixstart = 1;
    exitg2 = false;
    while ((!exitg2) && (ixstart <= nx)) {
      guard2 = false;
      if (x->data[ixstart - 1]) {
        idx++;
        b_ii->data[idx - 1] = ixstart;
        if (idx >= nx) {
          exitg2 = true;
        } else {
          guard2 = true;
        }
      } else {
        guard2 = true;
      }

      if (guard2) {
        ixstart++;
      }
    }

    if (idx <= x->size[1]) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &s_emlrtRTEI,
        "Coder:builtins:AssertionFailed", 0);
    }

    if (x->size[1] == 1) {
      if (idx == 0) {
        i0 = b_ii->size[0] * b_ii->size[1];
        b_ii->size[0] = 1;
        b_ii->size[1] = 0;
        emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i0, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
      }
    } else {
      i0 = b_ii->size[0] * b_ii->size[1];
      if (1 > idx) {
        b_ii->size[1] = 0;
      } else {
        b_ii->size[1] = idx;
      }

      emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i0, (int32_T)sizeof
                        (int32_T), &b_emlrtRTEI);
    }

    i0 = nhi->size[0] * nhi->size[1];
    nhi->size[0] = 1;
    nhi->size[1] = b_ii->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)nhi, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    ixstart = b_ii->size[0] * b_ii->size[1];
    for (i0 = 0; i0 < ixstart; i0++) {
      nhi->data[i0] = b_ii->data[i0];
    }

    /* Taking the points under the current mean value */
    st.site = &h_emlrtRSI;
    ixstart = olho->size[1];
    i0 = olho->size[0];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &e_emlrtBCI, &st);
    }

    i0 = t->size[1];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &l_emlrtBCI, &st);
    }

    varargin_1 = t->data[ii - 1];
    i0 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = ixstart;
    emxEnsureCapacity(&st, (emxArray__common *)x, i0, (int32_T)sizeof(boolean_T),
                      &emlrtRTEI);
    for (i0 = 0; i0 < ixstart; i0++) {
      x->data[x->size[0] * i0] = (olho->data[(ii + olho->size[0] * i0) - 1] <
        varargin_1);
    }

    b_st.site = &db_emlrtRSI;
    nx = x->size[1];
    idx = 0;
    i0 = b_ii->size[0] * b_ii->size[1];
    b_ii->size[0] = 1;
    b_ii->size[1] = x->size[1];
    emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i0, (int32_T)sizeof
                      (int32_T), &emlrtRTEI);
    c_st.site = &eb_emlrtRSI;
    ixstart = 1;
    exitg1 = false;
    while ((!exitg1) && (ixstart <= nx)) {
      guard1 = false;
      if (x->data[ixstart - 1]) {
        idx++;
        b_ii->data[idx - 1] = ixstart;
        if (idx >= nx) {
          exitg1 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        ixstart++;
      }
    }

    if (idx <= x->size[1]) {
    } else {
      emlrtErrorWithMessageIdR2012b(&b_st, &s_emlrtRTEI,
        "Coder:builtins:AssertionFailed", 0);
    }

    if (x->size[1] == 1) {
      if (idx == 0) {
        i0 = b_ii->size[0] * b_ii->size[1];
        b_ii->size[0] = 1;
        b_ii->size[1] = 0;
        emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i0, (int32_T)sizeof
                          (int32_T), &emlrtRTEI);
      }
    } else {
      i0 = b_ii->size[0] * b_ii->size[1];
      if (1 > idx) {
        b_ii->size[1] = 0;
      } else {
        b_ii->size[1] = idx;
      }

      emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i0, (int32_T)sizeof
                        (int32_T), &b_emlrtRTEI);
    }

    i0 = nlow->size[0] * nlow->size[1];
    nlow->size[0] = 1;
    nlow->size[1] = b_ii->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)nlow, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    ixstart = b_ii->size[0] * b_ii->size[1];
    for (i0 = 0; i0 < ixstart; i0++) {
      nlow->data[i0] = b_ii->data[i0];
    }

    /* Taking the mean value of the point abouve the the center of the simbol */
    nx = olho->size[1];
    i0 = olho->size[0];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &f_emlrtBCI, sp);
    }

    i0 = e_olho->size[0] * e_olho->size[1];
    e_olho->size[0] = 1;
    e_olho->size[1] = nhi->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)e_olho, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    ixstart = nhi->size[1];
    for (i0 = 0; i0 < ixstart; i0++) {
      idx = (int32_T)nhi->data[nhi->size[0] * i0];
      if (!((idx >= 1) && (idx <= nx))) {
        emlrtDynamicBoundsCheckR2012b(idx, 1, nx, &m_emlrtBCI, sp);
      }

      e_olho->data[e_olho->size[0] * i0] = olho->data[(ii + olho->size[0] * (idx
        - 1)) - 1];
    }

    i0 = hi->size[1];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &n_emlrtBCI, sp);
    }

    st.site = &i_emlrtRSI;
    hi->data[ii - 1] = mean(&st, e_olho);

    /* Taking the mean value of the point under the the center of the simbol */
    nx = olho->size[1];
    i0 = olho->size[0];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &g_emlrtBCI, sp);
    }

    i0 = d_olho->size[0] * d_olho->size[1];
    d_olho->size[0] = 1;
    d_olho->size[1] = nlow->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)d_olho, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    ixstart = nlow->size[1];
    for (i0 = 0; i0 < ixstart; i0++) {
      idx = (int32_T)nlow->data[nlow->size[0] * i0];
      if (!((idx >= 1) && (idx <= nx))) {
        emlrtDynamicBoundsCheckR2012b(idx, 1, nx, &o_emlrtBCI, sp);
      }

      d_olho->data[d_olho->size[0] * i0] = olho->data[(ii + olho->size[0] * (idx
        - 1)) - 1];
    }

    i0 = low->size[1];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &p_emlrtBCI, sp);
    }

    st.site = &j_emlrtRSI;
    low->data[ii - 1] = mean(&st, d_olho);

    /*  */
    /* Taking highest point of the eye opening by subtracting the standart */
    /* deviation from the mean value of the points abouve the center of the */
    /* symble for the current sample. */
    nx = olho->size[1];
    i0 = olho->size[0];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &h_emlrtBCI, sp);
    }

    i0 = c_olho->size[0] * c_olho->size[1];
    c_olho->size[0] = 1;
    c_olho->size[1] = nhi->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_olho, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    ixstart = nhi->size[1];
    for (i0 = 0; i0 < ixstart; i0++) {
      idx = (int32_T)nhi->data[nhi->size[0] * i0];
      if (!((idx >= 1) && (idx <= nx))) {
        emlrtDynamicBoundsCheckR2012b(idx, 1, nx, &q_emlrtBCI, sp);
      }

      c_olho->data[c_olho->size[0] * i0] = olho->data[(ii + olho->size[0] * (idx
        - 1)) - 1];
    }

    i0 = Lhi->size[1];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &r_emlrtBCI, sp);
    }

    st.site = &k_emlrtRSI;
    Lhi->data[ii - 1] = mean(&st, hi) - b_std(&st, c_olho);

    /* Taking lowest point of the eye opening by adding the standart */
    /* deviation from the mean value of the points under the center of the */
    /* symbol for the current sample. */
    nx = olho->size[1];
    i0 = olho->size[0];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &i_emlrtBCI, sp);
    }

    i0 = b_olho->size[0] * b_olho->size[1];
    b_olho->size[0] = 1;
    b_olho->size[1] = nlow->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_olho, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    ixstart = nlow->size[1];
    for (i0 = 0; i0 < ixstart; i0++) {
      idx = (int32_T)nlow->data[nlow->size[0] * i0];
      if (!((idx >= 1) && (idx <= nx))) {
        emlrtDynamicBoundsCheckR2012b(idx, 1, nx, &s_emlrtBCI, sp);
      }

      b_olho->data[b_olho->size[0] * i0] = olho->data[(ii + olho->size[0] * (idx
        - 1)) - 1];
    }

    i0 = Llow->size[1];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &t_emlrtBCI, sp);
    }

    st.site = &l_emlrtRSI;
    Llow->data[ii - 1] = mean(&st, low) + b_std(&st, b_olho);

    /* Taking the eye opening by the diffeces between the uper level and the */
    /* lower level. */
    i0 = Lhi->size[1];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &u_emlrtBCI, sp);
    }

    i0 = Llow->size[1];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &v_emlrtBCI, sp);
    }

    i0 = Ab->size[1];
    if (!((ii >= 1) && (ii <= i0))) {
      emlrtDynamicBoundsCheckR2012b(ii, 1, i0, &w_emlrtBCI, sp);
    }

    Ab->data[ii - 1] = Lhi->data[ii - 1] - Llow->data[ii - 1];
    ii++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(&f_olho);
  emxFree_real_T(&e_olho);
  emxFree_real_T(&d_olho);
  emxFree_real_T(&c_olho);
  emxFree_real_T(&b_olho);
  emxFree_int32_T(&b_ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&nlow);
  emxFree_real_T(&nhi);
  emxFree_real_T(&low);
  emxFree_real_T(&hi);
  emxFree_real_T(&olho);
  emxFree_real_T(&t);
  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 8);

  /* The final values to be exported outside this function are based on the */
  /* mean value calculated above. */
  st.site = &m_emlrtRSI;
  *Olho_Aber = mean(&st, Ab);
  st.site = &n_emlrtRSI;
  *Aber_Lhi = mean(&st, Lhi);
  st.site = &o_emlrtRSI;
  *Aber_Llow = mean(&st, Llow);

  /*  if (nargout == 0), */
  /*    maxolho = max(max(pulse)); */
  /*    minolho = min(min(pulse)); */
  /*    x       = linspace(minolho,maxolho,50); */
  /*    y       = hist(pulse,x); */
  /*    subplot('position',[0.10 0.09 0.15 0.85]),barh(x,y) */
  /*    grid on,ylabel('Amplitude [u.a]') */
  /*    subplot('position',[0.33 0.09 0.60 0.85]) */
  /*    plot(Tolho/1E-12,olho,'r','LineWidth',1) */
  /*    grid on,xlabel('Tempo [ps]'),... */
  /*    ylabel(sprintf('Abertura do diagrama de olho:  %2.5f [u.a]',Abertura)) */
  /*  end */
  /* % Ploting the Eye Diagram  */
  /*  if ploting */
  /*      figure; */
  /*      hold all; */
  /*      maxolho = max(max(Dados)); */
  /*      minolho = min(min(Dados)); */
  /*      x       = linspace(minolho,maxolho,50); */
  /*      y       = hist(Dados,x); */
  /*      subplot('position',[0.10 0.09 0.15 0.85]),barh(x,y) */
  /*      grid on,ylabel('Amplitude [u.a]') */
  /*      subplot('position',[0.33 0.09 0.60 0.85]) */
  /*  %     for kk=1:length(olho_mat(1,:)) */
  /*  %        plot(tn(:,1),(olho_mat(:,kk)),'r'); */
  /*         plot(tn(:,1),(olho_mat),'r'); */
  /*      %    plot(tn(round(n_amos_p_sim/2),1),olho_mat(round(n_amos_p_sim/2),kk),'ob') */
  /*  %     end */
  /*      grid on; */
  /*      xlabel('Tempo [s]'),ylabel(sprintf('Abertura do diagrama de olho:  %2.5f [u.a]',Olho_Aber)) */
  /*      set(gcf,'units','normalized','outerposition',[0 0 1 1]); */
  /*  end */
  /*  ylim([1.1*Dmin 1.1*Dmax]); */
  /*  warning on; */
  emxFree_real_T(&Ab);
  emxFree_real_T(&Llow);
  emxFree_real_T(&Lhi);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (Olho.c) */

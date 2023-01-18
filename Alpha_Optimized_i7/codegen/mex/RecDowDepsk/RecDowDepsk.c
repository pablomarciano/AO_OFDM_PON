/*
 * RecDowDepsk.c
 *
 * Code generation for function 'RecDowDepsk'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "RecDowDepsk.h"
#include "RecDowDepsk_emxutil.h"
#include "error.h"
#include "eml_int_forloop_overflow_check.h"
#include "sum.h"
#include "xor.h"
#include "assertValidSizeArg.h"
#include "any.h"
#include "hist.h"
#include "linspace.h"
#include "RecDowDepsk_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 27, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRSInfo b_emlrtRSI = { 91, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRSInfo c_emlrtRSI = { 93, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRSInfo d_emlrtRSI = { 120, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRSInfo e_emlrtRSI = { 121, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRSInfo f_emlrtRSI = { 135, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRSInfo g_emlrtRSI = { 136, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRSInfo h_emlrtRSI = { 192, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRSInfo i_emlrtRSI = { 324, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRSInfo j_emlrtRSI = { 358, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRSInfo k_emlrtRSI = { 360, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRSInfo l_emlrtRSI = { 373, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRSInfo m_emlrtRSI = { 376, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRSInfo n_emlrtRSI = { 23, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

static emlrtRSInfo o_emlrtRSI = { 101, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

static emlrtRSInfo p_emlrtRSI = { 39, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo q_emlrtRSI = { 61, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo r_emlrtRSI = { 108, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo s_emlrtRSI = { 131, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRSInfo u_emlrtRSI = { 79, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo v_emlrtRSI = { 283, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo w_emlrtRSI = { 291, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo x_emlrtRSI = { 13, "min",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m"
};

static emlrtRSInfo y_emlrtRSI = { 19, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo ab_emlrtRSI = { 140, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo bb_emlrtRSI = { 375, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo cb_emlrtRSI = { 347, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRSInfo db_emlrtRSI = { 13, "max",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 91, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 90, 5, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 121, 1, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 327, 1, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 358, 1, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m"
};

static emlrtRTEInfo h_emlrtRTEI = { 71, 15, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo j_emlrtRTEI = { 39, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 121, 27, "minOrMax",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 245, 27, "cat",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 359, 19, "TxDataB", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtDCInfo emlrtDCI = { 359, 19, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  1 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 357, 21, "TxDataMat", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtDCInfo b_emlrtDCI = { 357, 21, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  1 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 331, 23, "Esync", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 331, 23, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  1 };

static emlrtBCInfo d_emlrtBCI = { 1, 100, 161, 9, "SeqFinAB", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { 1, 100, 155, 9, "SeqOnesAB", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 119, 16, "Esync1", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 119, 16, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  1 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 92, 20, "IxAux", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 92, 20, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  1 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 90, 21, "Esync1", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtDCInfo f_emlrtDCI = { 90, 21, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  1 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 27, 42, "Esync1", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 27, 42, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  1 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 27, 18, "Esync1", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtDCInfo h_emlrtDCI = { 27, 18, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  1 };

static emlrtDCInfo i_emlrtDCI = { 68, 62, "reshape",
  "C:\\Program Files\\MATLAB\\R2016a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m",
  4 };

static emlrtDCInfo j_emlrtDCI = { 134, 11, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  1 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 134, 11, "Esync", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { 1, 100, 180, 19, "InterAB", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtDCInfo k_emlrtDCI = { 180, 19, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  1 };

static emlrtBCInfo m_emlrtBCI = { 1, 100, 201, 11, "InterAB", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { 1, 100, 201, 39, "InterAB", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtDCInfo l_emlrtDCI = { 201, 39, "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  1 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 335, 9, "Data", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 333, 9, "Data", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 341, 9, "DataU", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 339, 9, "DataU", "RecDowDepsk",
  "C:\\Users\\Pablo\\Google Drive\\UFES_2018_1\\Alpha_LabPc_Test\\RecDowDepsk.m",
  0 };

/* Function Definitions */
void RecDowDepsk(const emlrtStack *sp, real_T MaxNumStag, real_T IfftOrSum,
                 real_T T, real_T Ta, emxArray_real_T *Esync1, real_T AddCP,
                 real_T StuffSampels, real_T NumAmosCP, real_T NPPB, real_T
                 NbDPSK, real_T CurTesSiz, real_T SyncPeriod, real_T ThisCarr,
                 const emxArray_real_T *TxDataMat, real_T LevDefDpqsk, real_T
                 *BerDPSK, real_T *ValsLev, real_T *AberLev, emxArray_real_T
                 *Esync, real_T InterAB[100], real_T *LocMaxAB, real_T *MaxValAB,
                 real_T SeqFinAB[100], emxArray_real_T *TxData, emxArray_real_T *
                 Data)
{
  real_T DiffPos;
  int32_T i0;
  int32_T i1;
  int32_T i2;
  int32_T loop_ub;
  int32_T idx;
  boolean_T guard3 = false;
  boolean_T empty_non_axis_sizes;
  boolean_T guard2 = false;
  int32_T maxdimlen;
  boolean_T guard1 = false;
  int32_T nx;
  emxArray_real_T *b_Esync1;
  int32_T c_Esync1;
  emxArray_real_T *d_Esync1;
  int32_T b_loop_ub;
  int32_T i3;
  emxArray_real_T *TxDataB;
  real_T mtmp;
  emxArray_real_T *e_Esync1;
  real_T ndbl;
  int32_T sz[2];
  uint32_T varargin_1[2];
  emxArray_real_T *f_Esync1;
  emxArray_real_T *IxAux;
  emxArray_real_T *b_IxAux;
  real_T anew;
  real_T apnd;
  real_T cdiff;
  emxArray_real_T *PosIx;
  real_T absa;
  int32_T b_sz[2];
  boolean_T exitg3;
  emxArray_real_T *b_Esync;
  boolean_T exitg2;
  real_T EyeAB[100];
  real_T CountAB;
  boolean_T b_EyeAB[100];
  int32_T SeqIniAB;
  int32_T kk;
  real_T LevDec3;
  int8_T ii_data[100];
  int8_T ii_size[2];
  static const int8_T iv0[2] = { 1, 100 };

  boolean_T exitg1;
  boolean_T b_guard1 = false;
  real_T b_ii_data[100];
  int32_T b_ii_size[2];
  real_T LevelDec3;
  emxArray_real_T *DataU;
  emxArray_real_T *b_TxDataMat;
  int32_T c_sz[2];
  emxArray_real_T *b_TxDataB;
  emxArray_boolean_T *r0;
  real_T BitErr1;
  real_T BitErr4;
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

  /* SyncAux   = Esync(IniSyncPos:SyncPos,:);%Selecting just the symbol to synchronize */
  /* SyncedAux = SyncSymb(IniSyncPos:SyncPos,:);%Selecting just the symbol to synchronize */
  /* %                   Plot for Qualitative analizes */
  /*              PrintInfo(Ploting*15,t(IniSyncPos:SyncPos),Esync(IniSyncPos:... */
  /*              SyncPos),SyncSymb(IniSyncPos:SyncPos),ESync1(IniSyncPos:... */
  /*                                        SyncPos),ESync2(IniSyncPos:SyncPos)); */
  /* %                   Synchronizing */
  /* This synchronization process is based on the mean expected */
  /* value. That means, the information mean value should be within */
  /* one period of symbol. Thus, the mean value of the received */
  /* signal is acquired and compare of the known sync-word to */
  /* verify if this mean value is at the right possition. Which is */
  /* the midel point (peak) of the highest level at the sync period */
  /* SyncAux(SyncAux<0)              = 0;                           %To keep the mean value above zero anything under is neglected */
  /* SyncAux(SyncAux>=mean(SyncAux)) = 1;                           %Adding a flag to the first sample of the received mean value */
  /* SyncAux(SyncAux<mean(SyncAux))  = -1;                          %All the others samples at set to the lowest level */
  /* PosToSyn  = find(ismember(SyncAux,1));                         %Finding where is the location of the samples to synchronize */
  /* PosSynced = find(ismember(SyncedAux,1));                       %Finding where is the location of the samples to synchronize */
  /* DiffPos = PosToSyn(round(end/2)) - PosSynced(round(end/2));    %Accounting the peak (midel point) displacement */
  DiffPos = muDoubleScalarRound(0.5 * (muDoubleScalarPower(0.5, MaxNumStag) -
    1.0) / -0.5 / (3.0 / muDoubleScalarPower(2.55, IfftOrSum)) * T / Ta);
  if (DiffPos + 1.0 > Esync1->size[0]) {
    i0 = 0;
    i1 = 0;
  } else {
    i0 = Esync1->size[0];
    if (DiffPos + 1.0 != (int32_T)muDoubleScalarFloor(DiffPos + 1.0)) {
      emlrtIntegerCheckR2012b(DiffPos + 1.0, &h_emlrtDCI, sp);
    }

    i2 = (int32_T)(DiffPos + 1.0);
    if (!((i2 >= 1) && (i2 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &j_emlrtBCI, sp);
    }

    i0 = i2 - 1;
    i2 = Esync1->size[0];
    i1 = Esync1->size[0];
    if (!((i1 >= 1) && (i1 <= i2))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i2, &j_emlrtBCI, sp);
    }
  }

  if (1.0 > DiffPos) {
    loop_ub = 0;
  } else {
    i2 = Esync1->size[0];
    if (!(1 <= i2)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i2, &i_emlrtBCI, sp);
    }

    i2 = Esync1->size[0];
    if (DiffPos != (int32_T)muDoubleScalarFloor(DiffPos)) {
      emlrtIntegerCheckR2012b(DiffPos, &g_emlrtDCI, sp);
    }

    loop_ub = (int32_T)DiffPos;
    if (!((loop_ub >= 1) && (loop_ub <= i2))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i2, &i_emlrtBCI, sp);
    }
  }

  st.site = &emlrtRSI;
  b_st.site = &n_emlrtRSI;
  i2 = Esync1->size[1];
  if (!((i1 - i0 == 0) || (i2 == 0))) {
    idx = Esync1->size[1];
  } else {
    i2 = Esync1->size[1];
    if (!((loop_ub == 0) || (i2 == 0))) {
      idx = Esync1->size[1];
    } else {
      i2 = Esync1->size[1];
      if (i2 > 0) {
        idx = Esync1->size[1];
      } else {
        idx = 0;
      }

      i2 = Esync1->size[1];
      if (i2 > idx) {
        idx = Esync1->size[1];
      }
    }
  }

  c_st.site = &o_emlrtRSI;
  i2 = Esync1->size[1];
  guard3 = false;
  if (idx == i2) {
    guard3 = true;
  } else {
    i2 = Esync1->size[1];
    if ((i1 - i0 == 0) || (i2 == 0)) {
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
    emlrtErrorWithMessageIdR2012b(&c_st, &l_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  i2 = Esync1->size[1];
  if (idx == i2) {
  } else {
    i2 = Esync1->size[1];
    if ((loop_ub == 0) || (i2 == 0)) {
    } else {
      empty_non_axis_sizes = false;
    }
  }

  if (empty_non_axis_sizes) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &l_emlrtRTEI,
      "MATLAB:catenate:matrixDimensionMismatch", 0);
  }

  empty_non_axis_sizes = (idx == 0);
  guard2 = false;
  if (empty_non_axis_sizes) {
    guard2 = true;
  } else {
    i2 = Esync1->size[1];
    if (!((i1 - i0 == 0) || (i2 == 0))) {
      guard2 = true;
    } else {
      maxdimlen = -1;
    }
  }

  if (guard2) {
    maxdimlen = (i1 - i0) - 1;
  }

  guard1 = false;
  if (empty_non_axis_sizes) {
    guard1 = true;
  } else {
    i2 = Esync1->size[1];
    if (!((loop_ub == 0) || (i2 == 0))) {
      guard1 = true;
    } else {
      nx = 0;
    }
  }

  if (guard1) {
    nx = loop_ub;
  }

  emxInit_real_T(&b_st, &b_Esync1, 2, &emlrtRTEI, true);
  c_Esync1 = Esync1->size[1];
  i2 = b_Esync1->size[0] * b_Esync1->size[1];
  b_Esync1->size[0] = i1 - i0;
  b_Esync1->size[1] = c_Esync1;
  emxEnsureCapacity(&b_st, (emxArray__common *)b_Esync1, i2, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i2 = 0; i2 < c_Esync1; i2++) {
    b_loop_ub = i1 - i0;
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      b_Esync1->data[i3 + b_Esync1->size[0] * i2] = Esync1->data[(i0 + i3) +
        Esync1->size[0] * i2];
    }
  }

  emxInit_real_T(&b_st, &d_Esync1, 2, &emlrtRTEI, true);
  c_Esync1 = Esync1->size[1];
  i0 = d_Esync1->size[0] * d_Esync1->size[1];
  d_Esync1->size[0] = loop_ub;
  d_Esync1->size[1] = c_Esync1;
  emxEnsureCapacity(&b_st, (emxArray__common *)d_Esync1, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i0 = 0; i0 < c_Esync1; i0++) {
    for (i2 = 0; i2 < loop_ub; i2++) {
      d_Esync1->data[i2 + d_Esync1->size[0] * i0] = Esync1->data[i2 +
        Esync1->size[0] * i0];
    }
  }

  i0 = Esync1->size[0] * Esync1->size[1];
  Esync1->size[0] = (maxdimlen + nx) + 1;
  Esync1->size[1] = idx;
  emxEnsureCapacity(&b_st, (emxArray__common *)Esync1, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i0 = 0; i0 < idx; i0++) {
    loop_ub = maxdimlen + 1;
    for (i2 = 0; i2 < loop_ub; i2++) {
      Esync1->data[i2 + Esync1->size[0] * i0] = b_Esync1->data[i2 + (maxdimlen +
        1) * i0];
    }
  }

  emxFree_real_T(&b_Esync1);
  for (i0 = 0; i0 < idx; i0++) {
    for (i2 = 0; i2 < nx; i2++) {
      Esync1->data[((i2 + maxdimlen) + Esync1->size[0] * i0) + 1] =
        d_Esync1->data[i2 + nx * i0];
    }
  }

  emxFree_real_T(&d_Esync1);

  /* Shift based on sampling sliding */
  /* if DiffPos~=0 */
  /* if DiffPos>0%If the difference is positive, left-shift... */
  /* Esync = ifft(fft(Esync).*exp(1j*2*pi*f*(DiffPos*Ta))); %Shift based on time change */
  /* Esync = [Esync(DiffPos+1:end) Esync(1:DiffPos)];       %Shift based on sampling sliding */
  /* else%... but if the difference is negative, right-shift */
  /* Esync = ifft(fft(Esync).*exp(1j*2*pi*f*(DiffPos*Ta))); %Shift based on time change */
  /* Esync = [Esync(end+DiffPos+1:end) Esync(1:end + ... */
  /* DiffPos)];%Shift based on sampling sliding */
  /* end */
  /* end */
  /* Because of reasons, sometimes it may be required to make a */
  /* synchronization process with the  end of the data stream as */
  /* well. This following verification check if the user set (or */
  /* not) a second synchronization process to be done. */
  /* %          Ploting the result for qualitative analizes */
  /*              PrintInfo(Ploting*16,t(end-SyncPos+1:end-IniSyncPos+1),Esync... */
  /*              (end-SyncPos+1:end-IniSyncPos+1),SyncSymb(end-SyncPos+1:end-... */
  /*              IniSyncPos+1),ESync1(end-SyncPos+1:end-IniSyncPos+1),ESync2(... */
  /*                                            end-SyncPos+1:end-IniSyncPos+1)); */
  /* if SencondAdjust */
  /* %                   Synchronizing */
  /* This synchronization process is based on the mean expected */
  /* value. That means, the information mean value should be */
  /* within one period of symbol. Thus, the mean value of the */
  /* received signal is acquired and compare of the known */
  /* sync-word to verify if this mean value is at the right */
  /* possition. */
  /* SyncAuxEnd   = Esync(end-SyncPos+1:end-IniSyncPos+1); */
  /* SyncedAuxEnd = SyncSymbEnd(end-SyncPos+1:end-IniSyncPos+1); */
  /* SyncAuxEnd(SyncAuxEnd<0)                 = 0;              %To keep the mean value above zero anything under is neglected */
  /* SyncAuxEnd(SyncAuxEnd>=mean(SyncAuxEnd)) = 1;              %Adding a flag to the first sample of the received mean value */
  /* SyncAuxEnd(SyncAuxEnd<mean(SyncAuxEnd))  = -1;             %All the others samples at set to the lowest level */
  /* PosToSynEnd  = find(ismember(SyncAuxEnd,1));               %Finding where is the location of the first sample to synchronize */
  /* PosSyncedEnd = find(ismember(SyncedAuxEnd,1));             %Finding where is the location of the first sample to synchronize */
  /* DiffPosEnd = PosToSynEnd(round(end/2))-PosSyncedEnd(... */
  /* round(end/2)); */
  /* if DiffPosEnd~=0 */
  /* if DiffPosEnd>0%If positive difference, left-shift... */
  /* Esync = ifft(fft(Esync).*exp(1j*2*pi*f*(... */
  /* DiffPosEnd*Ta)));%Shift based on time change */
  /* Esync = [Esync(DiffPosEnd+1:end) Esync(1:... */
  /* DiffPosEnd)];%Shift based on sampling sliding */
  /* else%... but if the difference is negative, right-shift */
  /* Esync = ifft(fft(Esync).*exp(1j*2*pi*f*(... */
  /* DiffPosEnd*Ta)));%Shift based on time change */
  /* Esync = [Esync(end-DiffPosEnd+1:end) Esync(... */
  /* 1:end-DiffPosEnd)];%Shift based on sampling sliding */
  /* end */
  /* end */
  /* end */
  /* if ThisCarr==126 */
  /* EyeToPlot(CurrentTest,1:length(Esync(:))) = Esync(:); */
  /* save(['savingforplotingeye' num2str(VetSnr)],'EyeToPlot','VetSnr','IfftOrSum','UsedModula','T','NPPB'); */
  /* end */
  /* % Removing CP */
  emxInit_real_T(sp, &TxDataB, 2, &e_emlrtRTEI, true);
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 0, AddCP != 0.0)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 1);
    mtmp = (real_T)Esync1->size[0] - StuffSampels;
    if (1.0 > mtmp) {
      loop_ub = 0;
    } else {
      i0 = Esync1->size[0];
      if (!(1 <= i0)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i0, &h_emlrtBCI, sp);
      }

      i0 = Esync1->size[0];
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &f_emlrtDCI, sp);
      }

      loop_ub = (int32_T)mtmp;
      if (!((loop_ub >= 1) && (loop_ub <= i0))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i0, &h_emlrtBCI, sp);
      }
    }

    emxInit_real_T(sp, &e_Esync1, 2, &emlrtRTEI, true);
    st.site = &b_emlrtRSI;
    ndbl = 2.0 * NumAmosCP + NPPB;
    mtmp = NbDPSK * CurTesSiz;
    i0 = Esync1->size[1];
    nx = loop_ub * i0;
    b_st.site = &p_emlrtRSI;
    c_st.site = &s_emlrtRSI;
    assertValidSizeArg(&c_st, ndbl);
    c_st.site = &s_emlrtRSI;
    assertValidSizeArg(&c_st, mtmp);
    sz[0] = (int32_T)ndbl;
    sz[1] = (int32_T)mtmp;
    b_loop_ub = Esync1->size[1];
    i0 = e_Esync1->size[0] * e_Esync1->size[1];
    e_Esync1->size[0] = loop_ub;
    e_Esync1->size[1] = b_loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)e_Esync1, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    for (i0 = 0; i0 < b_loop_ub; i0++) {
      for (i2 = 0; i2 < loop_ub; i2++) {
        e_Esync1->data[i2 + e_Esync1->size[0] * i0] = Esync1->data[i2 +
          Esync1->size[0] * i0];
      }
    }

    for (i0 = 0; i0 < 2; i0++) {
      varargin_1[i0] = (uint32_T)e_Esync1->size[i0];
    }

    emxFree_real_T(&e_Esync1);
    maxdimlen = (int32_T)varargin_1[0];
    if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
      maxdimlen = (int32_T)varargin_1[1];
    }

    maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
    if ((int32_T)ndbl > maxdimlen) {
      b_st.site = &q_emlrtRSI;
      error(&b_st);
    }

    if ((int32_T)mtmp > maxdimlen) {
      b_st.site = &q_emlrtRSI;
      error(&b_st);
    }

    for (i0 = 0; i0 < 2; i0++) {
      i2 = sz[i0];
      if (!(i2 >= 0)) {
        emlrtNonNegativeCheckR2012b(i2, &i_emlrtDCI, &st);
      }
    }

    emxInit_real_T(&st, &IxAux, 2, &b_emlrtRTEI, true);
    i0 = IxAux->size[0] * IxAux->size[1];
    IxAux->size[0] = (int32_T)ndbl;
    IxAux->size[1] = (int32_T)mtmp;
    emxEnsureCapacity(&st, (emxArray__common *)IxAux, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    if (nx == IxAux->size[0] * IxAux->size[1]) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &h_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    b_st.site = &r_emlrtRSI;
    if ((!(1 > nx)) && (nx > 2147483646)) {
      c_st.site = &t_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (idx = 0; idx + 1 <= nx; idx++) {
      IxAux->data[idx] = Esync1->data[idx % loop_ub + Esync1->size[0] * (idx /
        loop_ub)];
    }

    mtmp = (real_T)IxAux->size[0] - NumAmosCP;
    if (1.0 + NumAmosCP > mtmp) {
      i0 = 0;
      i1 = 0;
    } else {
      i0 = IxAux->size[0];
      ndbl = 1.0 + NumAmosCP;
      if (ndbl != (int32_T)muDoubleScalarFloor(ndbl)) {
        emlrtIntegerCheckR2012b(ndbl, &e_emlrtDCI, sp);
      }

      i2 = (int32_T)ndbl;
      if (!((i2 >= 1) && (i2 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &g_emlrtBCI, sp);
      }

      i0 = i2 - 1;
      i2 = IxAux->size[0];
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &e_emlrtDCI, sp);
      }

      i1 = (int32_T)mtmp;
      if (!((i1 >= 1) && (i1 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, i2, &g_emlrtBCI, sp);
      }
    }

    emxInit_real_T(sp, &b_IxAux, 2, &emlrtRTEI, true);
    idx = IxAux->size[1];
    i2 = b_IxAux->size[0] * b_IxAux->size[1];
    b_IxAux->size[0] = i1 - i0;
    b_IxAux->size[1] = idx;
    emxEnsureCapacity(sp, (emxArray__common *)b_IxAux, i2, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    for (i2 = 0; i2 < idx; i2++) {
      loop_ub = i1 - i0;
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_IxAux->data[i3 + b_IxAux->size[0] * i2] = IxAux->data[(i0 + i3) +
          IxAux->size[0] * i2];
      }
    }

    i0 = IxAux->size[0] * IxAux->size[1];
    IxAux->size[0] = b_IxAux->size[0];
    IxAux->size[1] = b_IxAux->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)IxAux, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = b_IxAux->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_loop_ub = b_IxAux->size[0];
      for (i2 = 0; i2 < b_loop_ub; i2++) {
        IxAux->data[i2 + IxAux->size[0] * i0] = b_IxAux->data[i2 + b_IxAux->
          size[0] * i0];
      }
    }

    emxFree_real_T(&b_IxAux);
    st.site = &c_emlrtRSI;
    i0 = TxDataB->size[0] * TxDataB->size[1];
    TxDataB->size[0] = IxAux->size[0];
    TxDataB->size[1] = IxAux->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)TxDataB, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = IxAux->size[0] * IxAux->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      TxDataB->data[i0] = IxAux->data[i0];
    }

    ndbl = NPPB * NbDPSK;
    nx = IxAux->size[0] * IxAux->size[1];
    b_st.site = &p_emlrtRSI;
    c_st.site = &s_emlrtRSI;
    assertValidSizeArg(&c_st, ndbl);
    c_st.site = &s_emlrtRSI;
    assertValidSizeArg(&c_st, CurTesSiz);
    b_sz[0] = (int32_T)ndbl;
    b_sz[1] = (int32_T)CurTesSiz;
    for (i0 = 0; i0 < 2; i0++) {
      varargin_1[i0] = (uint32_T)IxAux->size[i0];
    }

    maxdimlen = (int32_T)varargin_1[0];
    if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
      maxdimlen = (int32_T)varargin_1[1];
    }

    maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
    if ((int32_T)ndbl > maxdimlen) {
      b_st.site = &q_emlrtRSI;
      error(&b_st);
    }

    if ((int32_T)CurTesSiz > maxdimlen) {
      b_st.site = &q_emlrtRSI;
      error(&b_st);
    }

    for (i0 = 0; i0 < 2; i0++) {
      i2 = b_sz[i0];
      if (!(i2 >= 0)) {
        emlrtNonNegativeCheckR2012b(i2, &i_emlrtDCI, &st);
      }
    }

    i0 = IxAux->size[0] * IxAux->size[1];
    IxAux->size[0] = (int32_T)ndbl;
    IxAux->size[1] = (int32_T)CurTesSiz;
    emxEnsureCapacity(&st, (emxArray__common *)IxAux, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    if (nx == IxAux->size[0] * IxAux->size[1]) {
    } else {
      emlrtErrorWithMessageIdR2012b(&st, &h_emlrtRTEI,
        "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
    }

    b_st.site = &r_emlrtRSI;
    if ((!(1 > nx)) && (nx > 2147483646)) {
      c_st.site = &t_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (idx = 0; idx + 1 <= nx; idx++) {
      IxAux->data[idx] = TxDataB->data[idx];
    }

    i0 = Esync1->size[0] * Esync1->size[1];
    Esync1->size[0] = IxAux->size[0];
    Esync1->size[1] = IxAux->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)Esync1, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = IxAux->size[0] * IxAux->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      Esync1->data[i0] = IxAux->data[i0];
    }

    emxFree_real_T(&IxAux);
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 2);

  /* % Taking the sampling the EVM meassurement */
  /* clear IxAux; */
  /* PosAuxEout1 = NPPB/2:NPPB:length(Esync);                   %Varriable respossible to take just the samples at the middle of the symbol */
  /* PosAuxEout2 = ((NPPB/2)+(NPPB/16)):NPPB:length(Esync);      %Varriable respossible to take just the samples at the middle of the symbol */
  /* PosAuxEout3 = ((NPPB/2)-(NPPB/16)):NPPB:length(Esync);      %Varriable respossible to take just the samples at the middle of the symbol */
  /* IxAux1      = Esync(PosAuxEout1);                          %Normalizing the reference */
  /* IxAux2      = Esync(PosAuxEout2);    %Normalizing the reference */
  /* IxAux3      = Esync(PosAuxEout3);    %Normalizing the reference */
  /* a=a+0; */
  /* EvmMatRecA(1,:) = IxAux1;                       %Taking just the middle samples as references */
  /* EvmMatRecA(2,:) = IxAux2;                       %Taking just the middle samples as references */
  /* EvmMatRecA(3,:) = IxAux3;                       %Taking just the middle samples as references */
  /* EvmMatRecA(4,:) = IxAux1;                       %Taking just the middle samples as references */
  /* [EvmDBA(1), EvmPerA(1), EvmRmsA(1) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1 ); */
  /* [EvmDBA(2), EvmPerA(2), EvmRmsA(2) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux2 ); */
  /* [EvmDBA(3), EvmPerA(3), EvmRmsA(3) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux3 ); */
  /* [EvmDBA(4), EvmPerA(4), EvmRmsA(4) ] = EvmCalc( EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1 ); */
  /* [EvmDBJA(1),EvmPerJA(1),EvmRmsJA(1)] = evm1(2,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1); */
  /* [EvmDBJA(2),EvmPerJA(2),EvmRmsJA(2)] = evm1(2,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux2); */
  /* [EvmDBJA(3),EvmPerJA(3),EvmRmsJA(3)] = evm1(2,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux3); */
  /* [EvmDBJA(4),EvmPerJA(4),EvmRmsJA(4)] = evm1(2,'dpsk',EvmMatRef(ObsCarrPos==ThisCarr,:),IxAux1); */
  /* ########################################################################## */
  mtmp = 1.0 + SyncPeriod * NPPB;
  ndbl = (real_T)Esync1->size[0] - SyncPeriod * NPPB;
  if (mtmp > ndbl) {
    i2 = 1;
    i0 = 1;
  } else {
    i0 = Esync1->size[0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &d_emlrtDCI, sp);
    }

    i2 = (int32_T)mtmp;
    if (!((i2 >= 1) && (i2 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &f_emlrtBCI, sp);
    }

    i0 = Esync1->size[0];
    if (ndbl != (int32_T)muDoubleScalarFloor(ndbl)) {
      emlrtIntegerCheckR2012b(ndbl, &d_emlrtDCI, sp);
    }

    i1 = (int32_T)ndbl;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &f_emlrtBCI, sp);
    }

    i0 = i1 + 1;
  }

  emxInit_real_T(sp, &f_Esync1, 2, &emlrtRTEI, true);
  st.site = &d_emlrtRSI;
  i1 = Esync1->size[1];
  mtmp = (real_T)(i0 - i2) * (real_T)i1;
  i1 = Esync1->size[1];
  nx = (i0 - i2) * i1;
  b_st.site = &p_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  assertValidSizeArg(&c_st, mtmp);
  loop_ub = Esync1->size[1];
  i1 = f_Esync1->size[0] * f_Esync1->size[1];
  f_Esync1->size[0] = i0 - i2;
  f_Esync1->size[1] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)f_Esync1, i1, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_loop_ub = i0 - i2;
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      f_Esync1->data[i3 + f_Esync1->size[0] * i1] = Esync1->data[((i2 + i3) +
        Esync1->size[0] * i1) - 1];
    }
  }

  for (i1 = 0; i1 < 2; i1++) {
    varargin_1[i1] = (uint32_T)f_Esync1->size[i1];
  }

  emxFree_real_T(&f_Esync1);
  maxdimlen = (int32_T)varargin_1[0];
  if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
    maxdimlen = (int32_T)varargin_1[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (1 > maxdimlen) {
    b_st.site = &q_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)mtmp > maxdimlen) {
    b_st.site = &q_emlrtRSI;
    error(&b_st);
  }

  i1 = Esync->size[0] * Esync->size[1];
  Esync->size[0] = 1;
  Esync->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(&st, (emxArray__common *)Esync, i1, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (nx == Esync->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &h_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &r_emlrtRSI;
  if ((!(1 > nx)) && (nx > 2147483646)) {
    c_st.site = &t_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= nx; idx++) {
    Esync->data[idx] = Esync1->data[((i2 + idx % (i0 - i2)) + Esync1->size[0] *
      (idx / (i0 - i2))) - 1];
  }

  mtmp = NPPB / 2.0;
  st.site = &e_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  if (muDoubleScalarIsNaN(mtmp) || muDoubleScalarIsNaN(NPPB)) {
    nx = 1;
    anew = rtNaN;
    apnd = Esync->size[1];
    empty_non_axis_sizes = false;
  } else if ((NPPB == 0.0) || ((mtmp < Esync->size[1]) && (NPPB < 0.0)) ||
             ((Esync->size[1] < mtmp) && (NPPB > 0.0))) {
    nx = 0;
    anew = mtmp;
    apnd = Esync->size[1];
    empty_non_axis_sizes = false;
  } else if (muDoubleScalarIsInf(mtmp)) {
    nx = 1;
    anew = rtNaN;
    apnd = Esync->size[1];
    if (muDoubleScalarIsInf(NPPB) || (mtmp == Esync->size[1])) {
      empty_non_axis_sizes = true;
    } else {
      empty_non_axis_sizes = false;
    }

    empty_non_axis_sizes = !empty_non_axis_sizes;
  } else if (muDoubleScalarIsInf(NPPB)) {
    nx = 1;
    anew = mtmp;
    apnd = Esync->size[1];
    empty_non_axis_sizes = false;
  } else {
    anew = mtmp;
    ndbl = muDoubleScalarFloor(((real_T)Esync->size[1] - mtmp) / NPPB + 0.5);
    apnd = mtmp + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (real_T)Esync->size[1];
    } else {
      cdiff = (real_T)Esync->size[1] - apnd;
    }

    absa = muDoubleScalarAbs(mtmp);
    maxdimlen = Esync->size[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, maxdimlen)) {
      ndbl++;
      apnd = Esync->size[1];
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

  c_st.site = &v_emlrtRSI;
  if (!empty_non_axis_sizes) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &i_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      0);
  }

  emxInit_real_T(&c_st, &PosIx, 2, &c_emlrtRTEI, true);
  i0 = PosIx->size[0] * PosIx->size[1];
  PosIx->size[0] = 1;
  PosIx->size[1] = nx;
  emxEnsureCapacity(&b_st, (emxArray__common *)PosIx, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (nx > 0) {
    PosIx->data[0] = anew;
    if (nx > 1) {
      PosIx->data[nx - 1] = apnd;
      maxdimlen = (nx - 1) / 2;
      c_st.site = &w_emlrtRSI;
      for (idx = 1; idx < maxdimlen; idx++) {
        ndbl = (real_T)idx * NPPB;
        PosIx->data[idx] = anew + ndbl;
        PosIx->data[(nx - idx) - 1] = apnd - ndbl;
      }

      if (maxdimlen << 1 == nx - 1) {
        PosIx->data[maxdimlen] = (anew + apnd) / 2.0;
      } else {
        ndbl = (real_T)maxdimlen * NPPB;
        PosIx->data[maxdimlen] = anew + ndbl;
        PosIx->data[maxdimlen + 1] = apnd - ndbl;
      }
    }
  }

  /* Possition of the central samples - but the number of samples per symbol is even ???? */
  /* IxAux = Esync(PosIx,:);%From the main received signal just a few samples are taken for further evaluation */
  /* The number of boxes to be filled up on the histogram process */
  /* At this process each eye will be evaluated separetelly. It is */
  /* important to remember that the PAM4 has 4 levels, which means */
  /* three level of decissions that are exaclty the center of the */
  /* eye diagram. */
  /* BerDPSKAux = zeros(1,size(Esync,2)); */
  /* AberLevAux = zeros(1,size(Esync,2)); */
  /* ValsLevAux = zeros(1,size(Esync,2)); */
  /* for jj=1:size(Esync,2) */
  maxdimlen = Esync->size[1];
  loop_ub = PosIx->size[0] * PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    mtmp = PosIx->data[i0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &j_emlrtDCI, sp);
    }

    i2 = (int32_T)mtmp;
    if (!((i2 >= 1) && (i2 <= maxdimlen))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, maxdimlen, &k_emlrtBCI, sp);
    }
  }

  /* Taking just those values relative to the uper eye */
  st.site = &f_emlrtRSI;
  b_st.site = &x_emlrtRSI;
  c_st.site = &y_emlrtRSI;
  if ((Esync->size[1] == 1) || (Esync->size[1] != 1)) {
    empty_non_axis_sizes = true;
  } else {
    empty_non_axis_sizes = false;
  }

  if (empty_non_axis_sizes) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &j_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (Esync->size[1] > 0) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &k_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  d_st.site = &ab_emlrtRSI;
  maxdimlen = 1;
  nx = Esync->size[1];
  ndbl = Esync->data[0];
  if (Esync->size[1] > 1) {
    if (muDoubleScalarIsNaN(Esync->data[0])) {
      e_st.site = &cb_emlrtRSI;
      empty_non_axis_sizes = (Esync->size[1] > 2147483646);
      if (empty_non_axis_sizes) {
        f_st.site = &t_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      idx = 2;
      exitg3 = false;
      while ((!exitg3) && (idx <= nx)) {
        maxdimlen = idx;
        if (!muDoubleScalarIsNaN(Esync->data[idx - 1])) {
          ndbl = Esync->data[idx - 1];
          exitg3 = true;
        } else {
          idx++;
        }
      }
    }

    if (maxdimlen < Esync->size[1]) {
      e_st.site = &bb_emlrtRSI;
      empty_non_axis_sizes = ((!(maxdimlen + 1 > Esync->size[1])) &&
        (Esync->size[1] > 2147483646));
      if (empty_non_axis_sizes) {
        f_st.site = &t_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (maxdimlen + 1 <= nx) {
        if (Esync->data[maxdimlen] < ndbl) {
          ndbl = Esync->data[maxdimlen];
        }

        maxdimlen++;
      }
    }
  }

  st.site = &f_emlrtRSI;
  b_st.site = &db_emlrtRSI;
  c_st.site = &y_emlrtRSI;
  d_st.site = &ab_emlrtRSI;
  maxdimlen = 1;
  nx = Esync->size[1];
  mtmp = Esync->data[0];
  if (Esync->size[1] > 1) {
    if (muDoubleScalarIsNaN(Esync->data[0])) {
      e_st.site = &cb_emlrtRSI;
      empty_non_axis_sizes = (Esync->size[1] > 2147483646);
      if (empty_non_axis_sizes) {
        f_st.site = &t_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      idx = 2;
      exitg2 = false;
      while ((!exitg2) && (idx <= nx)) {
        maxdimlen = idx;
        if (!muDoubleScalarIsNaN(Esync->data[idx - 1])) {
          mtmp = Esync->data[idx - 1];
          exitg2 = true;
        } else {
          idx++;
        }
      }
    }

    if (maxdimlen < Esync->size[1]) {
      e_st.site = &bb_emlrtRSI;
      empty_non_axis_sizes = ((!(maxdimlen + 1 > Esync->size[1])) &&
        (Esync->size[1] > 2147483646));
      if (empty_non_axis_sizes) {
        f_st.site = &t_emlrtRSI;
        check_forloop_overflow_error(&f_st);
      }

      while (maxdimlen + 1 <= nx) {
        if (Esync->data[maxdimlen] > mtmp) {
          mtmp = Esync->data[maxdimlen];
        }

        maxdimlen++;
      }
    }
  }

  emxInit_real_T(&d_st, &b_Esync, 2, &emlrtRTEI, true);
  linspace(0.7 * ndbl, 0.7 * mtmp, InterAB);

  /* Building the histogram boxes */
  i0 = b_Esync->size[0] * b_Esync->size[1];
  b_Esync->size[0] = 1;
  b_Esync->size[1] = PosIx->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_Esync, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = PosIx->size[0] * PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_Esync->data[i0] = Esync->data[(int32_T)PosIx->data[i0] - 1];
  }

  st.site = &g_emlrtRSI;
  hist(&st, b_Esync, InterAB, EyeAB);

  /* filling up the boxes with samples that fit on them. */
  /* What we are looking for here are not where exist the */
  /* occurrences of values. The eye is where there is not samples, */
  /* this means, the decission level is a reagion between actual */
  /* levels thus this reagion does not contain any signal. */
  emxFree_real_T(&b_Esync);

  /* Changing zeros to one - Zeros compose the eye region */
  /* Starting variables that will be used to identify the eye */
  /* diagram. */
  CountAB = 1.0;
  for (i0 = 0; i0 < 100; i0++) {
    b_EyeAB[i0] = !(EyeAB[i0] != 0.0);
    EyeAB[i0] = 0.0;
  }

  for (i0 = 0; i0 < 100; i0++) {
    SeqFinAB[i0] = 0.0;
  }

  SeqIniAB = 1;

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
        emlrtDynamicBoundsCheckR2012b(SeqIniAB, 1, 100, &e_emlrtBCI, sp);
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
        emlrtDynamicBoundsCheckR2012b(SeqIniAB, 1, 100, &d_emlrtBCI, sp);
      }

      SeqFinAB[SeqIniAB - 1] = (1.0 + (real_T)kk) - 1.0;

      /* the previous element was the last element of a consecutive sequency of ones */
      SeqIniAB++;

      /* adds one to the counter of consecutive number (take in account how many sequencies there are) */
      CountAB = 1.0;

      /* reset the counter of consecutive elements to mark the start of a new consecutive sequence */
    }

    kk++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 0, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 6);

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
  if (covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 0, maxdimlen + 1 < 2) ||
      covrtLogCond(&emlrtCoverageInstance, 0U, 0U, 1, ndbl < 2.0)) {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 0, true);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 3, true);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 7);

    /* if any sequency was found or there is just one sequency it is a error thus */
    LevDec3 = 0.0;

    /* the decission level will be by default 0.67. Also, the other variables will */
    *LocMaxAB = 1.0;

    /* will be set with values to not cause errors in the future */
    SeqFinAB[0] = 2.0;
    *MaxValAB = 0.0;
    InterAB[0] = 0.0;
  } else {
    covrtLogMcdc(&emlrtCoverageInstance, 0U, 0U, 0, false);
    covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 3, false);

    /* if a sequency was found the middle of the eye will be the middle of the sequency */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 4, (real_T)(int8_T)
                   SeqFinAB[maxdimlen] - ndbl / 2.0 < 1.0)) {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 8);

      /* if for some reason the final element of the sequency minus the half of its */
      LevDec3 = 0.0;

      /* length results in a negative value, something went very wrong, and by */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 9);

      /* default it will be set to 0.7 */
      mtmp = muDoubleScalarRound((real_T)(int8_T)SeqFinAB[maxdimlen] - ndbl /
        2.0);
      if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
        emlrtIntegerCheckR2012b(mtmp, &k_emlrtDCI, sp);
      }

      i0 = (int32_T)mtmp;
      if (!((i0 >= 1) && (i0 <= 100))) {
        emlrtDynamicBoundsCheckR2012b(i0, 1, 100, &l_emlrtBCI, sp);
      }

      LevDec3 = InterAB[i0 - 1];

      /* Otherwise, the decission level is the middle of the sequency */
    }
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 10);

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
  exitg1 = false;
  while ((!exitg1) && (maxdimlen < 101)) {
    b_guard1 = false;
    if (b_EyeAB[maxdimlen - 1]) {
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

  b_ii_size[0] = 1;
  b_ii_size[1] = i0;
  loop_ub = ii_size[0] * i0;
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_ii_data[i0] = ii_data[i0];
  }

  st.site = &h_emlrtRSI;
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 5, covrtLogMcdc
                 (&emlrtCoverageInstance, 0U, 0U, 1, !covrtLogCond
                  (&emlrtCoverageInstance, 0U, 0U, 2, any(&st, b_ii_data,
          b_ii_size))))) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 11);

    /* if for some reason there are no peaks, something went wrong. */
    /* LocAB = 1; */
    LevelDec3 = 0.0;

    /* mean(Levels(3:4));                       %by default the decission level will be set to 0.65 */
  } else {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 12);
    LevelDec3 = LevDec3;
  }

  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 13);

  /* ########################################################################## */
  /* [~,~,EyeOpenQ,EyeOpenHighQ,EyeOpenLowQ] = Olho(EoutQ,T,NPPB,0); */
  i0 = (int8_T)SeqFinAB[(int32_T)*LocMaxAB - 1];
  if (!((i0 >= 1) && (i0 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i0, 1, 100, &m_emlrtBCI, sp);
  }

  mtmp = muDoubleScalarRound((real_T)(int8_T)SeqFinAB[(int32_T)*LocMaxAB - 1] - *
    MaxValAB);
  if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
    emlrtIntegerCheckR2012b(mtmp, &l_emlrtDCI, sp);
  }

  i2 = (int32_T)mtmp;
  if (!((i2 >= 1) && (i2 <= 100))) {
    emlrtDynamicBoundsCheckR2012b(i2, 1, 100, &n_emlrtBCI, sp);
  }

  *AberLev = InterAB[i0 - 1] - InterAB[i2 - 1];
  *ValsLev = LevDec3;

  /* %               Recovering the Information */
  /* Once the Income signal was synchronized it is possible to */
  /* recover the signal. */
  /*  */
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
  /* This process is realized inside the function Olho. */
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
  /* Once the signal was processed the next step is through a */
  /* comparator decide the actual information received. */
  /*  */
  /* For accurately read the income signal is necessary more than */
  /* just have the decision level, it is also needed to know where */
  /* it occurs. For instance, if we decide to use just to take the */
  /* decision level and measure the mean value across and a portion */
  /* of the time period, which portion should we take? It would be */
  /* logical to take the central portion, but the bit may be */
  /* deformed in such way that the information gets concentrated */
  /* out of the middle part, which means the symbol is not */
  /* symmetric. The symmetry information can be acquired from the */
  /* eye diagram by measuring the longitudinal opening. The */
  /* following sketch better describes this process: */
  /*  */
  /*                    Point of Symmetry */
  /*          _____     _______|_______     _____ */
  /*               \   /               \   / */
  /*                \ /  Longitudinal   \ / */
  /*                 \ ----------------- / */
  /*                / \    Opening      / \ */
  /*          _____/   \_______________/   \_____ */
  /*  */
  /* With those two pieces of information, decision level and point */
  /* of symmetry, we have the X, Y coordinates for the centre of */
  /* the Eye Diagram. Therefore, as long as there is an opening on */
  /* it it will be possible to recover the transmitted information */
  /* without error... theoretically. */
  /*  */
  /* As this process is also statistical, first we reshape the */
  /* income vector to analyze all periods at the same time. */
  /*                  EyeSymMat = reshape(Esync(1+SyncPeriod*NPPB:end-SyncPeriod*... */
  /*                      NPPB),NPPB,NbDPSK-2*SyncPeriod); */
  /* Then we take the values that compose the decision level */
  /* because they will mark the point of symmetry. */
  /*  */
  /* Firstly it was set the interval in which the histogram will be */
  /* build. It is based on the number of samples per bit period. */
  /*                  Interval = linspace(min(Esync(1+SyncPeriod*NPPB:end-... */
  /*                      SyncPeriod*NPPB)),max(Esync(1+SyncPeriod*NPPB:end-SyncPeriod... */
  /*                      *NPPB)),2*NPPB); */
  /* Therefore, the MATLAB hist function returns the number of */
  /* occurrence of each interval. */
  /*                  EyeMax = hist(Esync,Interval); */
  /*                  EyeMaxaux = [0 EyeMax 0];                                      %Zeros are added at the EyeMax to auxiliate the finding peaks process */
  /*                  [~,EyeLoc] = findpeaks(EyeMaxaux,'MinPeakDistance',NPPB/4,... */
  /*                      'SortStr','descend','NPeaks',2);%The peaks on the Eye profile will be the levels at the Eyes limit */
  /* From the location of the max values that occured, which means */
  /* the uper and lower level of the eye diagram it needs to take */
  /* the actual value that those occurences represent that is */
  /* withing the the Interval variable. */
  /*                  ValToSeek = Interval(EyeLoc-1); */
  /* The number of ocurrences is a statical measure therefore one */
  /* does not have control which interval will have the highest */
  /* peak, thus it is important to ordenate the values to be seek */
  /* from the lower part of the eye diagram to the uper part of the */
  /* eye diagram. */
  /*                  ValToSeek = sort(ValToSeek,'ascend'); */
  /*                  OccuCount = zeros(1,size(EyeSymMat,1));                        %Auxiliar Variable for accounting. */
  /*                  for kk=1:size(EyeSymMat,1)                                     %For every sample within a symbol period */
  /*                      OccuCount(kk) = OccuCount(kk)+sum((EyeSymMat(kk,:)>=min(... */
  /*                          Esync))&(EyeSymMat(kk,:)<=UpeSymPer*EyeOpenLow)); %Account all occurencies of the value 1 */
  /*                      OccuCount(kk) = OccuCount(kk)+sum((EyeSymMat(kk,:)>=... */
  /*                          LowSymPer*EyeOpenHigh)&(EyeSymMat(kk,:)<=max(Esync))); %Account all occurencies of the value 2 */
  /*                  end */
  /* The point of symmetry of the eye diagram will be where the */
  /* maximum number of occurrences were measured inasmuch as those */
  /* are the points where all the bits go to the center of the */
  /* symbol.  From the maximum number of occurrences, it can happen */
  /* for more than one sample within one symbol period, in the best */
  /* case, all samples would have the same accounting as it is */
  /* shown the ilustration above hence the symmetry will be at the */
  /* middle sample of this group of maximum occurrences. This value */
  /* can be found by the mean of the samples positions within the */
  /* symbol period. The problem with this approach is that the */
  /* signal must be synchronized with the maximum displacement of */
  /* a symbol period minus 25% of the eye Longitudinal opening if */
  /* the displacement is higher than that the point of symmetry */
  /* will be wrongly measured. */
  /*                  [SymLoc] = round(mean(find(ismember(OccuCount,max(OccuCount)... */
  /*                      )))); */
  /*              figure;findpeaks(OccuCount,'SortStr','descend'); */
  /* % Actualy Receiving Data: */
  mtmp = NPPB / 2.0;
  st.site = &i_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  if (muDoubleScalarIsNaN(mtmp) || muDoubleScalarIsNaN(NPPB)) {
    nx = 1;
    anew = rtNaN;
    apnd = Esync->size[1];
    empty_non_axis_sizes = false;
  } else if ((NPPB == 0.0) || ((mtmp < Esync->size[1]) && (NPPB < 0.0)) ||
             ((Esync->size[1] < mtmp) && (NPPB > 0.0))) {
    nx = 0;
    anew = mtmp;
    apnd = Esync->size[1];
    empty_non_axis_sizes = false;
  } else if (muDoubleScalarIsInf(mtmp)) {
    nx = 1;
    anew = rtNaN;
    apnd = Esync->size[1];
    if (muDoubleScalarIsInf(NPPB) || (mtmp == Esync->size[1])) {
      empty_non_axis_sizes = true;
    } else {
      empty_non_axis_sizes = false;
    }

    empty_non_axis_sizes = !empty_non_axis_sizes;
  } else if (muDoubleScalarIsInf(NPPB)) {
    nx = 1;
    anew = mtmp;
    apnd = Esync->size[1];
    empty_non_axis_sizes = false;
  } else {
    anew = mtmp;
    ndbl = muDoubleScalarFloor(((real_T)Esync->size[1] - mtmp) / NPPB + 0.5);
    apnd = mtmp + ndbl * NPPB;
    if (NPPB > 0.0) {
      cdiff = apnd - (real_T)Esync->size[1];
    } else {
      cdiff = (real_T)Esync->size[1] - apnd;
    }

    absa = muDoubleScalarAbs(mtmp);
    maxdimlen = Esync->size[1];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * muDoubleScalarMax
        (absa, maxdimlen)) {
      ndbl++;
      apnd = Esync->size[1];
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

  c_st.site = &v_emlrtRSI;
  if (!empty_non_axis_sizes) {
  } else {
    emlrtErrorWithMessageIdR2012b(&c_st, &i_emlrtRTEI, "Coder:MATLAB:pmaxsize",
      0);
  }

  i0 = PosIx->size[0] * PosIx->size[1];
  PosIx->size[0] = 1;
  PosIx->size[1] = nx;
  emxEnsureCapacity(&b_st, (emxArray__common *)PosIx, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (nx > 0) {
    PosIx->data[0] = anew;
    if (nx > 1) {
      PosIx->data[nx - 1] = apnd;
      maxdimlen = (nx - 1) / 2;
      c_st.site = &w_emlrtRSI;
      for (idx = 1; idx < maxdimlen; idx++) {
        ndbl = (real_T)idx * NPPB;
        PosIx->data[idx] = anew + ndbl;
        PosIx->data[(nx - idx) - 1] = apnd - ndbl;
      }

      if (maxdimlen << 1 == nx - 1) {
        PosIx->data[maxdimlen] = (anew + apnd) / 2.0;
      } else {
        ndbl = (real_T)maxdimlen * NPPB;
        PosIx->data[maxdimlen] = anew + ndbl;
        PosIx->data[maxdimlen + 1] = apnd - ndbl;
      }
    }
  }

  /* ThisDataPos  = 1:NPPB:size(Esync,2); */
  i0 = Data->size[0] * Data->size[1];
  Data->size[0] = 1;
  Data->size[1] = PosIx->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Data, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    Data->data[i0] = 0.0;
  }

  emxInit_real_T(sp, &DataU, 2, &d_emlrtRTEI, true);

  /* Initialization of the vector that will store the income data */
  i0 = DataU->size[0] * DataU->size[1];
  DataU->size[0] = 1;
  DataU->size[1] = PosIx->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)DataU, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = PosIx->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    DataU->data[i0] = 0.0;
  }

  /* Initialization of the vector that will store the income data */
  /*  DataS = zeros(1,length(ThisDataSize));                                                  %Initialization of the vector that will store the income data */
  kk = 0;
  while (kk <= PosIx->size[1] - 1) {
    covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 1);
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 14);

    /* length(Esync(ThisDataSize))                                    %The comparison process will be made for each symbol period */
    /* MeanOfData = mean(EoutI((kk-1)+SymLocI(1))); */
    ndbl = NPPB / 2.0;
    i0 = Esync->size[1];
    mtmp = ((1.0 + (real_T)kk) - 1.0) * NPPB + NPPB / 2.0;
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &c_emlrtDCI, sp);
    }

    i2 = (int32_T)mtmp;
    if (!((i2 >= 1) && (i2 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &c_emlrtBCI, sp);
    }

    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 6, Esync->data[(int32_T)
                   (((1.0 + (real_T)kk) - 1.0) * NPPB + ndbl) - 1] > LevelDec3))
    {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 15);

      /* EyeOpenLowI+EyeOpenI/2                     %If it is the uper level the incoming data */
      i0 = Data->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &p_emlrtBCI, sp);
      }

      Data->data[kk] = 1.0;

      /* is 1 */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 16);

      /* If it is the lowest level the incoming data */
      i0 = Data->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &o_emlrtBCI, sp);
      }

      Data->data[kk] = 0.0;

      /* is 0 */
    }

    /* MeanOfData = mean(Esync((kk-1)*NPPB+(NPPB/2))); */
    if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 7, Esync->data[(int32_T)
                   (((1.0 + (real_T)kk) - 1.0) * NPPB + ndbl) - 1] > LevDefDpqsk))
    {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 17);

      /* EyeOpenLowI+EyeOpenI/2                     %If it is the uper level the incoming data */
      i0 = DataU->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &r_emlrtBCI, sp);
      }

      DataU->data[kk] = 1.0;

      /* is 1 */
    } else {
      covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 18);

      /* If it is the lowest level the incoming data */
      i0 = DataU->size[1];
      if (!((kk + 1 >= 1) && (kk + 1 <= i0))) {
        emlrtDynamicBoundsCheckR2012b(kk + 1, 1, i0, &q_emlrtBCI, sp);
      }

      DataU->data[kk] = 0.0;

      /* is 0 */
    }

    /*      if CalcS==1 */
    /*          %MeanOfData = mean(Esync((kk-1)*NPPB+(NPPB/2))); */
    /*          if MeanOfData > EyeOpenLowI + EyeOpenI/2%EyeOpenLowI+EyeOpenI/2                     %If it is the uper level the incoming data */
    /*              DataS(kk) = 1;                                 %is 1 */
    /*          else                                                       %If it is the lowest level the incoming data */
    /*              DataS(kk) = 0;                                 %is 0 */
    /*          end */
    /*      end */
    kk++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  covrtLogFor(&emlrtCoverageInstance, 0U, 0U, 1, 0);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 19);

  /* %       Calculating the Bit Error Ratio (BER) */
  /* The final process here is to count the number of wrongdoings */
  /* of this whole process upon the transmited data for */
  /* quantitative analizes */
  loop_ub = TxDataMat->size[1];
  i0 = TxDataMat->size[0];
  if (ThisCarr != (int32_T)muDoubleScalarFloor(ThisCarr)) {
    emlrtIntegerCheckR2012b(ThisCarr, &b_emlrtDCI, sp);
  }

  maxdimlen = (int32_T)ThisCarr;
  if (!((maxdimlen >= 1) && (maxdimlen <= i0))) {
    emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i0, &b_emlrtBCI, sp);
  }

  i0 = PosIx->size[0] * PosIx->size[1];
  PosIx->size[0] = 1;
  PosIx->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)PosIx, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  for (i0 = 0; i0 < loop_ub; i0++) {
    PosIx->data[PosIx->size[0] * i0] = TxDataMat->data[(maxdimlen +
      TxDataMat->size[0] * i0) - 1];
  }

  emxInit_real_T(sp, &b_TxDataMat, 2, &emlrtRTEI, true);
  st.site = &j_emlrtRSI;
  i0 = TxDataMat->size[1];
  b_st.site = &p_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  assertValidSizeArg(&c_st, NbDPSK);
  c_st.site = &s_emlrtRSI;
  assertValidSizeArg(&c_st, CurTesSiz);
  c_sz[0] = (int32_T)NbDPSK;
  c_sz[1] = (int32_T)CurTesSiz;
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

  if ((int32_T)NbDPSK > maxdimlen) {
    b_st.site = &q_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)CurTesSiz > maxdimlen) {
    b_st.site = &q_emlrtRSI;
    error(&b_st);
  }

  for (i2 = 0; i2 < 2; i2++) {
    i1 = c_sz[i2];
    if (!(i1 >= 0)) {
      emlrtNonNegativeCheckR2012b(i1, &i_emlrtDCI, &st);
    }
  }

  i2 = TxDataB->size[0] * TxDataB->size[1];
  TxDataB->size[0] = (int32_T)NbDPSK;
  TxDataB->size[1] = (int32_T)CurTesSiz;
  emxEnsureCapacity(&st, (emxArray__common *)TxDataB, i2, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (i0 == TxDataB->size[0] * TxDataB->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &h_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &r_emlrtRSI;
  i2 = TxDataMat->size[1];
  if (1 > i2) {
    empty_non_axis_sizes = false;
  } else {
    i2 = TxDataMat->size[1];
    empty_non_axis_sizes = (i2 > 2147483646);
  }

  if (empty_non_axis_sizes) {
    c_st.site = &t_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= i0; idx++) {
    TxDataB->data[idx] = PosIx->data[idx];
  }

  emxFree_real_T(&PosIx);
  mtmp = (real_T)TxDataB->size[0] - SyncPeriod;
  if (1.0 + SyncPeriod > mtmp) {
    i2 = 1;
    i0 = 1;
  } else {
    i0 = TxDataB->size[0];
    ndbl = 1.0 + SyncPeriod;
    if (ndbl != (int32_T)muDoubleScalarFloor(ndbl)) {
      emlrtIntegerCheckR2012b(ndbl, &emlrtDCI, sp);
    }

    i2 = (int32_T)ndbl;
    if (!((i2 >= 1) && (i2 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i0, &emlrtBCI, sp);
    }

    i0 = TxDataB->size[0];
    if (mtmp != (int32_T)muDoubleScalarFloor(mtmp)) {
      emlrtIntegerCheckR2012b(mtmp, &emlrtDCI, sp);
    }

    i1 = (int32_T)mtmp;
    if (!((i1 >= 1) && (i1 <= i0))) {
      emlrtDynamicBoundsCheckR2012b(i1, 1, i0, &emlrtBCI, sp);
    }

    i0 = i1 + 1;
  }

  emxInit_real_T(sp, &b_TxDataB, 2, &emlrtRTEI, true);
  st.site = &k_emlrtRSI;
  i1 = TxDataB->size[1];
  mtmp = (real_T)(i0 - i2) * (real_T)i1;
  i1 = TxDataB->size[1];
  nx = (i0 - i2) * i1;
  b_st.site = &p_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  assertValidSizeArg(&c_st, mtmp);
  loop_ub = TxDataB->size[1];
  i1 = b_TxDataB->size[0] * b_TxDataB->size[1];
  b_TxDataB->size[0] = i0 - i2;
  b_TxDataB->size[1] = loop_ub;
  emxEnsureCapacity(&st, (emxArray__common *)b_TxDataB, i1, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_loop_ub = i0 - i2;
    for (i3 = 0; i3 < b_loop_ub; i3++) {
      b_TxDataB->data[i3 + b_TxDataB->size[0] * i1] = TxDataB->data[((i2 + i3) +
        TxDataB->size[0] * i1) - 1];
    }
  }

  for (i1 = 0; i1 < 2; i1++) {
    varargin_1[i1] = (uint32_T)b_TxDataB->size[i1];
  }

  emxFree_real_T(&b_TxDataB);
  maxdimlen = (int32_T)varargin_1[0];
  if ((int32_T)varargin_1[1] > (int32_T)varargin_1[0]) {
    maxdimlen = (int32_T)varargin_1[1];
  }

  maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
  if (1 > maxdimlen) {
    b_st.site = &q_emlrtRSI;
    error(&b_st);
  }

  if ((int32_T)mtmp > maxdimlen) {
    b_st.site = &q_emlrtRSI;
    error(&b_st);
  }

  i1 = TxData->size[0] * TxData->size[1];
  TxData->size[0] = 1;
  TxData->size[1] = (int32_T)mtmp;
  emxEnsureCapacity(&st, (emxArray__common *)TxData, i1, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  if (nx == TxData->size[1]) {
  } else {
    emlrtErrorWithMessageIdR2012b(&st, &h_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  b_st.site = &r_emlrtRSI;
  if ((!(1 > nx)) && (nx > 2147483646)) {
    c_st.site = &t_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (idx = 0; idx + 1 <= nx; idx++) {
    TxData->data[idx] = TxDataB->data[((i2 + idx % (i0 - i2)) + TxDataB->size[0]
      * (idx / (i0 - i2))) - 1];
  }

  emxFree_real_T(&TxDataB);
  emxInit_boolean_T(&st, &r0, 2, &emlrtRTEI, true);

  /*  if CalcS */
  /*      %DataS = DataS(1+SyncPeriod:end-SyncPeriod); */
  /*      BitErrS = sum(xor(TxData,DataS));%Comparison between the Transmited and received and counting the differences */
  /*      BerDPSKS = BitErrS/((NbDPSK-(2*SyncPeriod))*CurTesSiz);%Calculating the ration of wrong bits and the total number of bits transmited */
  /*  end */
  /* Data  = Data(1+SyncPeriod:end-SyncPeriod); */
  /* DataM  = DataM(1+SyncPeriod:end-SyncPeriod); */
  /* DataL  = DataL(1+SyncPeriod:end-SyncPeriod); */
  /* DataU  = DataU(1+SyncPeriod:end-SyncPeriod); */
  /* AberLevAuxI(4) = 0; */
  /* ValsLevAuxI(4) = 0.01; */
  st.site = &l_emlrtRSI;
  xor(&st, TxData, Data, r0);
  st.site = &l_emlrtRSI;
  BitErr1 = sum(&st, r0);

  /* Comparison between the Transmited and received and counting the differences */
  /* BitErr(2)  = sum(xor(TxData,DataM));                       %Comparison between the Transmited and received and counting the differences */
  /* BitErr(3)  = sum(xor(TxData,DataL));                       %Comparison between the Transmited and received and counting the differences */
  st.site = &m_emlrtRSI;
  xor(&st, TxData, DataU, r0);
  st.site = &m_emlrtRSI;
  BitErr4 = sum(&st, r0);

  /* Comparison between the Transmited and received and counting the differences */
  *BerDPSK = BitErr1 / ((NbDPSK - 2.0 * SyncPeriod) * CurTesSiz);

  /* Calculating the ration of wrong bits and the total number of bits transmited */
  emxFree_boolean_T(&r0);
  emxFree_real_T(&DataU);
  if (covrtLogIf(&emlrtCoverageInstance, 0U, 0U, 8, BitErr4 < BitErr1)) {
    covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 20);
    *BerDPSK = BitErr4 / ((NbDPSK - 2.0 * SyncPeriod) * CurTesSiz);
  }

  /* end */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (RecDowDepsk.c) */

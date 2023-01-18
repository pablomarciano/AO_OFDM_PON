/*
 * File: findpeaks.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 21:36:40
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "RecDowPam4.h"
#include "findpeaks.h"
#include "RecDowPam4_emxutil.h"
#include "sort1.h"
#include "eml_setop.h"
#include "diff.h"

/* Function Declarations */
static void findLocalMaxima(emxArray_real_T *yTemp, emxArray_real_T *iPk,
  emxArray_real_T *iInflect);
static void parse_inputs(const emxArray_real_T *Yin, double varargin_2,
  emxArray_real_T *y, emxArray_real_T *x, double *Pd);

/* Function Definitions */

/*
 * Arguments    : emxArray_real_T *yTemp
 *                emxArray_real_T *iPk
 *                emxArray_real_T *iInflect
 * Return Type  : void
 */
static void findLocalMaxima(emxArray_real_T *yTemp, emxArray_real_T *iPk,
  emxArray_real_T *iInflect)
{
  emxArray_real_T *r1;
  int i2;
  int cdiff;
  int ndbl;
  int apnd;
  int absb;
  emxArray_real_T *y;
  emxArray_real_T *iTemp;
  emxArray_boolean_T *yFinite;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  boolean_T exitg3;
  boolean_T guard3 = false;
  emxArray_int32_T *r2;
  emxArray_real_T *b_iTemp;
  emxArray_real_T *b_yTemp;
  emxArray_real_T *s;
  emxArray_real_T *r3;
  double b_x;
  boolean_T exitg2;
  boolean_T guard2 = false;
  emxArray_int32_T *b_ii;
  boolean_T exitg1;
  boolean_T guard1 = false;
  emxInit_real_T1(&r1, 1);
  i2 = r1->size[0];
  r1->size[0] = 2 + yTemp->size[0];
  emxEnsureCapacity((emxArray__common *)r1, i2, (int)sizeof(double));
  r1->data[0] = rtNaN;
  cdiff = yTemp->size[0];
  for (i2 = 0; i2 < cdiff; i2++) {
    r1->data[i2 + 1] = yTemp->data[i2];
  }

  r1->data[1 + yTemp->size[0]] = rtNaN;
  i2 = yTemp->size[0];
  yTemp->size[0] = r1->size[0];
  emxEnsureCapacity((emxArray__common *)yTemp, i2, (int)sizeof(double));
  cdiff = r1->size[0];
  for (i2 = 0; i2 < cdiff; i2++) {
    yTemp->data[i2] = r1->data[i2];
  }

  emxFree_real_T(&r1);
  ndbl = (int)floor(((double)yTemp->size[0] - 1.0) + 0.5);
  apnd = ndbl + 1;
  cdiff = (ndbl - yTemp->size[0]) + 1;
  absb = yTemp->size[0];
  if (fabs(cdiff) < 4.4408920985006262E-16 * (double)absb) {
    ndbl++;
    apnd = yTemp->size[0];
  } else if (cdiff > 0) {
    apnd = ndbl;
  } else {
    ndbl++;
  }

  emxInit_real_T(&y, 2);
  i2 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = ndbl;
  emxEnsureCapacity((emxArray__common *)y, i2, (int)sizeof(double));
  y->data[0] = 1.0;
  if (ndbl > 1) {
    y->data[ndbl - 1] = apnd;
    cdiff = (ndbl - 1) / 2;
    for (absb = 1; absb < cdiff; absb++) {
      y->data[absb] = 1.0 + (double)absb;
      y->data[(ndbl - absb) - 1] = apnd - absb;
    }

    if (cdiff << 1 == ndbl - 1) {
      y->data[cdiff] = (1.0 + (double)apnd) / 2.0;
    } else {
      y->data[cdiff] = 1.0 + (double)cdiff;
      y->data[cdiff + 1] = apnd - cdiff;
    }
  }

  emxInit_real_T1(&iTemp, 1);
  i2 = iTemp->size[0];
  iTemp->size[0] = y->size[1];
  emxEnsureCapacity((emxArray__common *)iTemp, i2, (int)sizeof(double));
  cdiff = y->size[1];
  for (i2 = 0; i2 < cdiff; i2++) {
    iTemp->data[i2] = y->data[y->size[0] * i2];
  }

  emxFree_real_T(&y);
  emxInit_boolean_T(&yFinite, 1);
  i2 = yFinite->size[0];
  yFinite->size[0] = yTemp->size[0];
  emxEnsureCapacity((emxArray__common *)yFinite, i2, (int)sizeof(boolean_T));
  cdiff = yTemp->size[0];
  for (i2 = 0; i2 < cdiff; i2++) {
    yFinite->data[i2] = rtIsNaN(yTemp->data[i2]);
  }

  i2 = yFinite->size[0];
  emxEnsureCapacity((emxArray__common *)yFinite, i2, (int)sizeof(boolean_T));
  cdiff = yFinite->size[0];
  for (i2 = 0; i2 < cdiff; i2++) {
    yFinite->data[i2] = !yFinite->data[i2];
  }

  emxInit_boolean_T(&x, 1);
  cdiff = yTemp->size[0] - 2;
  i2 = x->size[0];
  x->size[0] = cdiff + 1;
  emxEnsureCapacity((emxArray__common *)x, i2, (int)sizeof(boolean_T));
  for (i2 = 0; i2 <= cdiff; i2++) {
    x->data[i2] = ((yTemp->data[i2] != yTemp->data[1 + i2]) && (yFinite->data[i2]
      || yFinite->data[1 + i2]));
  }

  emxFree_boolean_T(&yFinite);
  emxInit_int32_T(&ii, 1);
  ndbl = x->size[0];
  absb = 0;
  i2 = ii->size[0];
  ii->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)ii, i2, (int)sizeof(int));
  cdiff = 1;
  exitg3 = false;
  while ((!exitg3) && (cdiff <= ndbl)) {
    guard3 = false;
    if (x->data[cdiff - 1]) {
      absb++;
      ii->data[absb - 1] = cdiff;
      if (absb >= ndbl) {
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

  if (x->size[0] == 1) {
    if (absb == 0) {
      i2 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity((emxArray__common *)ii, i2, (int)sizeof(int));
    }
  } else {
    i2 = ii->size[0];
    if (1 > absb) {
      ii->size[0] = 0;
    } else {
      ii->size[0] = absb;
    }

    emxEnsureCapacity((emxArray__common *)ii, i2, (int)sizeof(int));
  }

  emxInit_int32_T(&r2, 1);
  i2 = r2->size[0];
  r2->size[0] = 1 + ii->size[0];
  emxEnsureCapacity((emxArray__common *)r2, i2, (int)sizeof(int));
  r2->data[0] = 1;
  cdiff = ii->size[0];
  for (i2 = 0; i2 < cdiff; i2++) {
    r2->data[i2 + 1] = ii->data[i2] + 1;
  }

  emxInit_real_T1(&b_iTemp, 1);
  i2 = b_iTemp->size[0];
  b_iTemp->size[0] = r2->size[0];
  emxEnsureCapacity((emxArray__common *)b_iTemp, i2, (int)sizeof(double));
  cdiff = r2->size[0];
  for (i2 = 0; i2 < cdiff; i2++) {
    b_iTemp->data[i2] = iTemp->data[r2->data[i2] - 1];
  }

  emxFree_int32_T(&r2);
  i2 = iTemp->size[0];
  iTemp->size[0] = b_iTemp->size[0];
  emxEnsureCapacity((emxArray__common *)iTemp, i2, (int)sizeof(double));
  cdiff = b_iTemp->size[0];
  for (i2 = 0; i2 < cdiff; i2++) {
    iTemp->data[i2] = b_iTemp->data[i2];
  }

  emxFree_real_T(&b_iTemp);
  emxInit_real_T1(&b_yTemp, 1);
  i2 = b_yTemp->size[0];
  b_yTemp->size[0] = iTemp->size[0];
  emxEnsureCapacity((emxArray__common *)b_yTemp, i2, (int)sizeof(double));
  cdiff = iTemp->size[0];
  for (i2 = 0; i2 < cdiff; i2++) {
    b_yTemp->data[i2] = yTemp->data[(int)iTemp->data[i2] - 1];
  }

  emxInit_real_T1(&s, 1);
  diff(b_yTemp, s);
  ndbl = s->size[0];
  absb = 0;
  emxFree_real_T(&b_yTemp);
  while (absb + 1 <= ndbl) {
    if (s->data[absb] < 0.0) {
      b_x = -1.0;
    } else if (s->data[absb] > 0.0) {
      b_x = 1.0;
    } else if (s->data[absb] == 0.0) {
      b_x = 0.0;
    } else {
      b_x = s->data[absb];
    }

    s->data[absb] = b_x;
    absb++;
  }

  emxInit_real_T1(&r3, 1);
  diff(s, r3);
  i2 = x->size[0];
  x->size[0] = r3->size[0];
  emxEnsureCapacity((emxArray__common *)x, i2, (int)sizeof(boolean_T));
  cdiff = r3->size[0];
  for (i2 = 0; i2 < cdiff; i2++) {
    x->data[i2] = (r3->data[i2] < 0.0);
  }

  emxFree_real_T(&r3);
  ndbl = x->size[0];
  absb = 0;
  i2 = ii->size[0];
  ii->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)ii, i2, (int)sizeof(int));
  cdiff = 1;
  exitg2 = false;
  while ((!exitg2) && (cdiff <= ndbl)) {
    guard2 = false;
    if (x->data[cdiff - 1]) {
      absb++;
      ii->data[absb - 1] = cdiff;
      if (absb >= ndbl) {
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

  if (x->size[0] == 1) {
    if (absb == 0) {
      i2 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity((emxArray__common *)ii, i2, (int)sizeof(int));
    }
  } else {
    i2 = ii->size[0];
    if (1 > absb) {
      ii->size[0] = 0;
    } else {
      ii->size[0] = absb;
    }

    emxEnsureCapacity((emxArray__common *)ii, i2, (int)sizeof(int));
  }

  if (1 > s->size[0] - 1) {
    cdiff = 0;
  } else {
    cdiff = s->size[0] - 1;
  }

  if (2 > s->size[0]) {
    i2 = 0;
  } else {
    i2 = 1;
  }

  absb = x->size[0];
  x->size[0] = cdiff;
  emxEnsureCapacity((emxArray__common *)x, absb, (int)sizeof(boolean_T));
  for (absb = 0; absb < cdiff; absb++) {
    x->data[absb] = (s->data[absb] != s->data[i2 + absb]);
  }

  emxFree_real_T(&s);
  emxInit_int32_T(&b_ii, 1);
  ndbl = x->size[0];
  absb = 0;
  i2 = b_ii->size[0];
  b_ii->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)b_ii, i2, (int)sizeof(int));
  cdiff = 1;
  exitg1 = false;
  while ((!exitg1) && (cdiff <= ndbl)) {
    guard1 = false;
    if (x->data[cdiff - 1]) {
      absb++;
      b_ii->data[absb - 1] = cdiff;
      if (absb >= ndbl) {
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

  if (x->size[0] == 1) {
    if (absb == 0) {
      i2 = b_ii->size[0];
      b_ii->size[0] = 0;
      emxEnsureCapacity((emxArray__common *)b_ii, i2, (int)sizeof(int));
    }
  } else {
    i2 = b_ii->size[0];
    if (1 > absb) {
      b_ii->size[0] = 0;
    } else {
      b_ii->size[0] = absb;
    }

    emxEnsureCapacity((emxArray__common *)b_ii, i2, (int)sizeof(int));
  }

  emxFree_boolean_T(&x);
  i2 = iInflect->size[0];
  iInflect->size[0] = b_ii->size[0];
  emxEnsureCapacity((emxArray__common *)iInflect, i2, (int)sizeof(double));
  cdiff = b_ii->size[0];
  for (i2 = 0; i2 < cdiff; i2++) {
    iInflect->data[i2] = iTemp->data[b_ii->data[i2]] - 1.0;
  }

  emxFree_int32_T(&b_ii);
  i2 = iPk->size[0];
  iPk->size[0] = ii->size[0];
  emxEnsureCapacity((emxArray__common *)iPk, i2, (int)sizeof(double));
  cdiff = ii->size[0];
  for (i2 = 0; i2 < cdiff; i2++) {
    iPk->data[i2] = iTemp->data[ii->data[i2]] - 1.0;
  }

  emxFree_int32_T(&ii);
  emxFree_real_T(&iTemp);
}

/*
 * Arguments    : const emxArray_real_T *Yin
 *                double varargin_2
 *                emxArray_real_T *y
 *                emxArray_real_T *x
 *                double *Pd
 * Return Type  : void
 */
static void parse_inputs(const emxArray_real_T *Yin, double varargin_2,
  emxArray_real_T *y, emxArray_real_T *x, double *Pd)
{
  int cdiff;
  int nm1d2;
  int ndbl;
  int apnd;
  emxArray_real_T *b_y;
  cdiff = y->size[0];
  y->size[0] = Yin->size[1];
  emxEnsureCapacity((emxArray__common *)y, cdiff, (int)sizeof(double));
  nm1d2 = Yin->size[1];
  for (cdiff = 0; cdiff < nm1d2; cdiff++) {
    y->data[cdiff] = Yin->data[cdiff];
  }

  nm1d2 = Yin->size[1];
  if (nm1d2 < 1) {
    ndbl = 0;
    apnd = 0;
  } else {
    nm1d2 = Yin->size[1];
    ndbl = (int)floor(((double)nm1d2 - 1.0) + 0.5);
    apnd = ndbl + 1;
    nm1d2 = Yin->size[1];
    cdiff = (ndbl - nm1d2) + 1;
    nm1d2 = Yin->size[1];
    if (1 >= nm1d2) {
      nm1d2 = 1;
    }

    if (fabs(cdiff) < 4.4408920985006262E-16 * (double)nm1d2) {
      ndbl++;
      apnd = Yin->size[1];
    } else if (cdiff > 0) {
      apnd = ndbl;
    } else {
      ndbl++;
    }
  }

  emxInit_real_T(&b_y, 2);
  cdiff = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = ndbl;
  emxEnsureCapacity((emxArray__common *)b_y, cdiff, (int)sizeof(double));
  if (ndbl > 0) {
    b_y->data[0] = 1.0;
    if (ndbl > 1) {
      b_y->data[ndbl - 1] = apnd;
      nm1d2 = (ndbl - 1) / 2;
      for (cdiff = 1; cdiff < nm1d2; cdiff++) {
        b_y->data[cdiff] = 1.0 + (double)cdiff;
        b_y->data[(ndbl - cdiff) - 1] = apnd - cdiff;
      }

      if (nm1d2 << 1 == ndbl - 1) {
        b_y->data[nm1d2] = (1.0 + (double)apnd) / 2.0;
      } else {
        b_y->data[nm1d2] = 1.0 + (double)nm1d2;
        b_y->data[nm1d2 + 1] = apnd - nm1d2;
      }
    }
  }

  cdiff = x->size[0];
  x->size[0] = b_y->size[1];
  emxEnsureCapacity((emxArray__common *)x, cdiff, (int)sizeof(double));
  nm1d2 = b_y->size[1];
  for (cdiff = 0; cdiff < nm1d2; cdiff++) {
    x->data[cdiff] = b_y->data[b_y->size[0] * cdiff];
  }

  emxFree_real_T(&b_y);
  *Pd = varargin_2;
}

/*
 * Arguments    : const emxArray_real_T *Yin
 *                double varargin_2
 *                emxArray_real_T *Ypk
 *                emxArray_real_T *Xpk
 * Return Type  : void
 */
void findpeaks(const emxArray_real_T *Yin, double varargin_2, emxArray_real_T
               *Ypk, emxArray_real_T *Xpk)
{
  emxArray_real_T *y;
  emxArray_real_T *x;
  emxArray_boolean_T *idelete;
  double minD;
  int i1;
  int cdiff;
  emxArray_int32_T *ii;
  int nx;
  int idx;
  boolean_T exitg1;
  boolean_T guard1 = false;
  emxArray_real_T *iInfite;
  emxArray_real_T *yTemp;
  emxArray_real_T *iPk;
  emxArray_real_T *locs;
  int ndbl;
  double b_locs;
  emxArray_real_T *b_iPk;
  emxArray_int32_T *ib;
  emxArray_boolean_T *r0;
  emxArray_real_T *b_y;
  int apnd;
  unsigned int unnamed_idx_0;
  emxArray_real_T *c_locs;
  emxArray_real_T *d_locs;
  double e_locs;
  emxInit_real_T1(&y, 1);
  emxInit_real_T1(&x, 1);
  emxInit_boolean_T(&idelete, 1);
  parse_inputs(Yin, varargin_2, y, x, &minD);
  i1 = idelete->size[0];
  idelete->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)idelete, i1, (int)sizeof(boolean_T));
  cdiff = y->size[0];
  for (i1 = 0; i1 < cdiff; i1++) {
    idelete->data[i1] = rtIsInf(y->data[i1]);
  }

  i1 = idelete->size[0];
  emxEnsureCapacity((emxArray__common *)idelete, i1, (int)sizeof(boolean_T));
  cdiff = idelete->size[0];
  for (i1 = 0; i1 < cdiff; i1++) {
    idelete->data[i1] = (idelete->data[i1] && (y->data[i1] > 0.0));
  }

  emxInit_int32_T(&ii, 1);
  nx = idelete->size[0];
  idx = 0;
  i1 = ii->size[0];
  ii->size[0] = idelete->size[0];
  emxEnsureCapacity((emxArray__common *)ii, i1, (int)sizeof(int));
  cdiff = 1;
  exitg1 = false;
  while ((!exitg1) && (cdiff <= nx)) {
    guard1 = false;
    if (idelete->data[cdiff - 1]) {
      idx++;
      ii->data[idx - 1] = cdiff;
      if (idx >= nx) {
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

  if (idelete->size[0] == 1) {
    if (idx == 0) {
      i1 = ii->size[0];
      ii->size[0] = 0;
      emxEnsureCapacity((emxArray__common *)ii, i1, (int)sizeof(int));
    }
  } else {
    i1 = ii->size[0];
    if (1 > idx) {
      ii->size[0] = 0;
    } else {
      ii->size[0] = idx;
    }

    emxEnsureCapacity((emxArray__common *)ii, i1, (int)sizeof(int));
  }

  emxInit_real_T1(&iInfite, 1);
  i1 = iInfite->size[0];
  iInfite->size[0] = ii->size[0];
  emxEnsureCapacity((emxArray__common *)iInfite, i1, (int)sizeof(double));
  cdiff = ii->size[0];
  for (i1 = 0; i1 < cdiff; i1++) {
    iInfite->data[i1] = ii->data[i1];
  }

  emxInit_real_T1(&yTemp, 1);
  i1 = yTemp->size[0];
  yTemp->size[0] = y->size[0];
  emxEnsureCapacity((emxArray__common *)yTemp, i1, (int)sizeof(double));
  cdiff = y->size[0];
  for (i1 = 0; i1 < cdiff; i1++) {
    yTemp->data[i1] = y->data[i1];
  }

  i1 = ii->size[0];
  ii->size[0] = iInfite->size[0];
  emxEnsureCapacity((emxArray__common *)ii, i1, (int)sizeof(int));
  cdiff = iInfite->size[0];
  for (i1 = 0; i1 < cdiff; i1++) {
    ii->data[i1] = (int)iInfite->data[i1];
  }

  cdiff = ii->size[0];
  for (i1 = 0; i1 < cdiff; i1++) {
    yTemp->data[ii->data[i1] - 1] = rtNaN;
  }

  emxInit_real_T1(&iPk, 1);
  emxInit_real_T1(&locs, 1);
  findLocalMaxima(yTemp, iPk, locs);
  if (!(iPk->size[0] == 0)) {
    nx = iPk->size[0] - 1;
    idx = 0;
    for (ndbl = 0; ndbl <= nx; ndbl++) {
      if (y->data[(int)iPk->data[ndbl] - 1] > rtMinusInf) {
        idx++;
      }
    }

    cdiff = 0;
    for (ndbl = 0; ndbl <= nx; ndbl++) {
      if (y->data[(int)iPk->data[ndbl] - 1] > rtMinusInf) {
        iPk->data[cdiff] = iPk->data[ndbl];
        cdiff++;
      }
    }

    i1 = iPk->size[0];
    iPk->size[0] = idx;
    emxEnsureCapacity((emxArray__common *)iPk, i1, (int)sizeof(double));
  }

  cdiff = iPk->size[0];
  i1 = yTemp->size[0];
  yTemp->size[0] = cdiff;
  emxEnsureCapacity((emxArray__common *)yTemp, i1, (int)sizeof(double));
  for (idx = 0; idx + 1 <= cdiff; idx++) {
    if ((y->data[(int)(iPk->data[idx] - 1.0) - 1] >= y->data[(int)(iPk->data[idx]
          + 1.0) - 1]) || rtIsNaN(y->data[(int)(iPk->data[idx] + 1.0) - 1])) {
      b_locs = y->data[(int)(iPk->data[idx] - 1.0) - 1];
    } else {
      b_locs = y->data[(int)(iPk->data[idx] + 1.0) - 1];
    }

    yTemp->data[idx] = b_locs;
  }

  nx = iPk->size[0] - 1;
  idx = 0;
  for (ndbl = 0; ndbl <= nx; ndbl++) {
    if (y->data[(int)iPk->data[ndbl] - 1] - yTemp->data[ndbl] >= 0.0) {
      idx++;
    }
  }

  cdiff = 0;
  for (ndbl = 0; ndbl <= nx; ndbl++) {
    if (y->data[(int)iPk->data[ndbl] - 1] - yTemp->data[ndbl] >= 0.0) {
      iPk->data[cdiff] = iPk->data[ndbl];
      cdiff++;
    }
  }

  emxInit_real_T1(&b_iPk, 1);
  emxInit_int32_T(&ib, 1);
  i1 = iPk->size[0];
  iPk->size[0] = idx;
  emxEnsureCapacity((emxArray__common *)iPk, i1, (int)sizeof(double));
  do_vectors(iPk, iInfite, b_iPk, ii, ib);
  emxFree_int32_T(&ib);
  emxInit_boolean_T(&r0, 1);
  emxInit_real_T(&b_y, 2);
  if ((b_iPk->size[0] == 0) || (minD == 0.0)) {
    if (b_iPk->size[0] < 1) {
      ndbl = 0;
      apnd = 0;
    } else {
      ndbl = (int)floor(((double)b_iPk->size[0] - 1.0) + 0.5);
      apnd = ndbl + 1;
      cdiff = (ndbl - b_iPk->size[0]) + 1;
      nx = b_iPk->size[0];
      if (fabs(cdiff) < 4.4408920985006262E-16 * (double)nx) {
        ndbl++;
        apnd = b_iPk->size[0];
      } else if (cdiff > 0) {
        apnd = ndbl;
      } else {
        ndbl++;
      }
    }

    i1 = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = ndbl;
    emxEnsureCapacity((emxArray__common *)b_y, i1, (int)sizeof(double));
    if (ndbl > 0) {
      b_y->data[0] = 1.0;
      if (ndbl > 1) {
        b_y->data[ndbl - 1] = apnd;
        nx = (ndbl - 1) / 2;
        for (idx = 1; idx < nx; idx++) {
          b_y->data[idx] = 1.0 + (double)idx;
          b_y->data[(ndbl - idx) - 1] = apnd - idx;
        }

        if (nx << 1 == ndbl - 1) {
          b_y->data[nx] = (1.0 + (double)apnd) / 2.0;
        } else {
          b_y->data[nx] = 1.0 + (double)nx;
          b_y->data[nx + 1] = apnd - nx;
        }
      }
    }

    i1 = locs->size[0];
    locs->size[0] = b_y->size[1];
    emxEnsureCapacity((emxArray__common *)locs, i1, (int)sizeof(double));
    cdiff = b_y->size[1];
    for (i1 = 0; i1 < cdiff; i1++) {
      locs->data[i1] = b_y->data[b_y->size[0] * i1];
    }
  } else {
    i1 = locs->size[0];
    locs->size[0] = b_iPk->size[0];
    emxEnsureCapacity((emxArray__common *)locs, i1, (int)sizeof(double));
    cdiff = b_iPk->size[0];
    for (i1 = 0; i1 < cdiff; i1++) {
      locs->data[i1] = x->data[(int)b_iPk->data[i1] - 1];
    }

    i1 = yTemp->size[0];
    yTemp->size[0] = b_iPk->size[0];
    emxEnsureCapacity((emxArray__common *)yTemp, i1, (int)sizeof(double));
    cdiff = b_iPk->size[0];
    for (i1 = 0; i1 < cdiff; i1++) {
      yTemp->data[i1] = y->data[(int)b_iPk->data[i1] - 1];
    }

    sort(yTemp, ii);
    i1 = iInfite->size[0];
    iInfite->size[0] = ii->size[0];
    emxEnsureCapacity((emxArray__common *)iInfite, i1, (int)sizeof(double));
    cdiff = ii->size[0];
    for (i1 = 0; i1 < cdiff; i1++) {
      iInfite->data[i1] = ii->data[i1];
    }

    i1 = yTemp->size[0];
    yTemp->size[0] = iInfite->size[0];
    emxEnsureCapacity((emxArray__common *)yTemp, i1, (int)sizeof(double));
    cdiff = iInfite->size[0];
    for (i1 = 0; i1 < cdiff; i1++) {
      yTemp->data[i1] = locs->data[(int)iInfite->data[i1] - 1];
    }

    unnamed_idx_0 = (unsigned int)iInfite->size[0];
    i1 = idelete->size[0];
    idelete->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)idelete, i1, (int)sizeof(boolean_T));
    cdiff = (int)unnamed_idx_0;
    for (i1 = 0; i1 < cdiff; i1++) {
      idelete->data[i1] = false;
    }

    for (ndbl = 0; ndbl < iInfite->size[0]; ndbl++) {
      if (!idelete->data[ndbl]) {
        b_locs = locs->data[(int)iInfite->data[ndbl] - 1] - minD;
        e_locs = locs->data[(int)iInfite->data[ndbl] - 1] + minD;
        i1 = r0->size[0];
        r0->size[0] = yTemp->size[0];
        emxEnsureCapacity((emxArray__common *)r0, i1, (int)sizeof(boolean_T));
        cdiff = yTemp->size[0];
        for (i1 = 0; i1 < cdiff; i1++) {
          r0->data[i1] = ((yTemp->data[i1] >= b_locs) && (yTemp->data[i1] <=
            e_locs));
        }

        i1 = idelete->size[0];
        emxEnsureCapacity((emxArray__common *)idelete, i1, (int)sizeof(boolean_T));
        cdiff = idelete->size[0];
        for (i1 = 0; i1 < cdiff; i1++) {
          idelete->data[i1] = (idelete->data[i1] || r0->data[i1]);
        }

        idelete->data[ndbl] = false;
      }
    }

    nx = idelete->size[0] - 1;
    idx = 0;
    for (ndbl = 0; ndbl <= nx; ndbl++) {
      if (!idelete->data[ndbl]) {
        idx++;
      }
    }

    i1 = ii->size[0];
    ii->size[0] = idx;
    emxEnsureCapacity((emxArray__common *)ii, i1, (int)sizeof(int));
    cdiff = 0;
    for (ndbl = 0; ndbl <= nx; ndbl++) {
      if (!idelete->data[ndbl]) {
        ii->data[cdiff] = ndbl + 1;
        cdiff++;
      }
    }

    i1 = locs->size[0];
    locs->size[0] = ii->size[0];
    emxEnsureCapacity((emxArray__common *)locs, i1, (int)sizeof(double));
    cdiff = ii->size[0];
    for (i1 = 0; i1 < cdiff; i1++) {
      locs->data[i1] = iInfite->data[ii->data[i1] - 1];
    }

    c_sort(locs);
  }

  emxFree_real_T(&b_y);
  emxFree_boolean_T(&r0);
  emxFree_boolean_T(&idelete);
  emxFree_real_T(&iInfite);
  if (locs->size[0] == 0) {
  } else {
    i1 = yTemp->size[0];
    yTemp->size[0] = locs->size[0];
    emxEnsureCapacity((emxArray__common *)yTemp, i1, (int)sizeof(double));
    cdiff = locs->size[0];
    for (i1 = 0; i1 < cdiff; i1++) {
      yTemp->data[i1] = y->data[(int)b_iPk->data[(int)locs->data[i1] - 1] - 1];
    }

    emxInit_real_T1(&d_locs, 1);
    sort(yTemp, ii);
    i1 = d_locs->size[0];
    d_locs->size[0] = ii->size[0];
    emxEnsureCapacity((emxArray__common *)d_locs, i1, (int)sizeof(double));
    cdiff = ii->size[0];
    for (i1 = 0; i1 < cdiff; i1++) {
      d_locs->data[i1] = locs->data[ii->data[i1] - 1];
    }

    i1 = locs->size[0];
    locs->size[0] = d_locs->size[0];
    emxEnsureCapacity((emxArray__common *)locs, i1, (int)sizeof(double));
    cdiff = d_locs->size[0];
    for (i1 = 0; i1 < cdiff; i1++) {
      locs->data[i1] = d_locs->data[i1];
    }

    emxFree_real_T(&d_locs);
  }

  emxFree_int32_T(&ii);
  emxFree_real_T(&yTemp);
  if (locs->size[0] > 4) {
    emxInit_real_T1(&c_locs, 1);
    i1 = c_locs->size[0];
    c_locs->size[0] = 4;
    emxEnsureCapacity((emxArray__common *)c_locs, i1, (int)sizeof(double));
    for (i1 = 0; i1 < 4; i1++) {
      c_locs->data[i1] = locs->data[i1];
    }

    i1 = locs->size[0];
    locs->size[0] = c_locs->size[0];
    emxEnsureCapacity((emxArray__common *)locs, i1, (int)sizeof(double));
    cdiff = c_locs->size[0];
    for (i1 = 0; i1 < cdiff; i1++) {
      locs->data[i1] = c_locs->data[i1];
    }

    emxFree_real_T(&c_locs);
  }

  i1 = iPk->size[0];
  iPk->size[0] = locs->size[0];
  emxEnsureCapacity((emxArray__common *)iPk, i1, (int)sizeof(double));
  cdiff = locs->size[0];
  for (i1 = 0; i1 < cdiff; i1++) {
    iPk->data[i1] = b_iPk->data[(int)locs->data[i1] - 1];
  }

  emxFree_real_T(&locs);
  emxFree_real_T(&b_iPk);
  i1 = Ypk->size[0] * Ypk->size[1];
  Ypk->size[0] = 1;
  Ypk->size[1] = iPk->size[0];
  emxEnsureCapacity((emxArray__common *)Ypk, i1, (int)sizeof(double));
  cdiff = iPk->size[0];
  for (i1 = 0; i1 < cdiff; i1++) {
    Ypk->data[Ypk->size[0] * i1] = y->data[(int)iPk->data[i1] - 1];
  }

  emxFree_real_T(&y);
  i1 = Xpk->size[0] * Xpk->size[1];
  Xpk->size[0] = 1;
  Xpk->size[1] = iPk->size[0];
  emxEnsureCapacity((emxArray__common *)Xpk, i1, (int)sizeof(double));
  cdiff = iPk->size[0];
  for (i1 = 0; i1 < cdiff; i1++) {
    Xpk->data[Xpk->size[0] * i1] = x->data[(int)iPk->data[i1] - 1];
  }

  emxFree_real_T(&x);
  emxFree_real_T(&iPk);
}

/*
 * File trailer for findpeaks.c
 *
 * [EOF]
 */

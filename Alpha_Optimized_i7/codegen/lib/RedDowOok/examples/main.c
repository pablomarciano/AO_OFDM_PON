/*
 * File: main.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 12-Sep-2018 12:12:25
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/
/* Include Files */
#include "rt_nonfinite.h"
#include "RedDowOok.h"
#include "main.h"
#include "RedDowOok_terminate.h"
#include "RedDowOok_emxAPI.h"
#include "RedDowOok_initialize.h"

/* Function Declarations */
static emxArray_real_T *argInit_1xUnbounded_real_T(void);
static double argInit_real_T(void);
static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void);
static void main_RedDowOok(void);

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : emxArray_real_T *
 */
static emxArray_real_T *argInit_1xUnbounded_real_T(void)
{
  emxArray_real_T *result;
  static int iv0[2] = { 1, 2 };

  int idx1;

  /* Set the size of the array.
     Change this size to the value that the application requires. */
  result = emxCreateND_real_T(2, iv0);

  /* Loop over the array to initialize each element. */
  for (idx1 = 0; idx1 < result->size[1U]; idx1++) {
    /* Set the value of the array element.
       Change this value to the value that the application requires. */
    result->data[result->size[0] * idx1] = argInit_real_T();
  }

  return result;
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : emxArray_real_T *
 */
static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void)
{
  emxArray_real_T *result;
  static int iv1[2] = { 2, 2 };

  int idx0;
  int idx1;

  /* Set the size of the array.
     Change this size to the value that the application requires. */
  result = emxCreateND_real_T(2, iv1);

  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < result->size[0U]; idx0++) {
    for (idx1 = 0; idx1 < result->size[1U]; idx1++) {
      /* Set the value of the array element.
         Change this value to the value that the application requires. */
      result->data[idx0 + result->size[0] * idx1] = argInit_real_T();
    }
  }

  return result;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_RedDowOok(void)
{
  emxArray_real_T *TxData;
  emxArray_real_T *EoutCorrD;
  emxArray_real_T *EoutCorr2;
  emxArray_real_T *EoutCorr;
  emxArray_real_T *Ix;
  emxArray_real_T *TxDataMat;
  double AberLev;
  double ValsLev;
  double Inter[100];
  double SeqFin[100];
  double LocMax;
  double MaxVal;
  double BerOOK;
  double LocMax2;
  double SeqFin2[100];
  double MaxVal2;
  double Inter2[100];
  emxInitArray_real_T(&TxData, 2);
  emxInitArray_real_T(&EoutCorrD, 2);
  emxInitArray_real_T(&EoutCorr2, 2);
  emxInitArray_real_T(&EoutCorr, 2);

  /* Initialize function 'RedDowOok' input arguments. */
  /* Initialize function input argument 'Ix'. */
  Ix = argInit_1xUnbounded_real_T();

  /* Initialize function input argument 'TxDataMat'. */
  TxDataMat = c_argInit_UnboundedxUnbounded_r();

  /* Call the entry-point 'RedDowOok'. */
  RedDowOok(Ix, TxDataMat, argInit_real_T(), argInit_real_T(), argInit_real_T(),
            argInit_real_T(), argInit_real_T(), argInit_real_T(), argInit_real_T
            (), argInit_real_T(), &AberLev, &ValsLev, Inter, SeqFin, &LocMax,
            &MaxVal, TxData, EoutCorrD, EoutCorr2, EoutCorr, &BerOOK, &LocMax2,
            SeqFin2, &MaxVal2, Inter2);
  emxDestroyArray_real_T(EoutCorr);
  emxDestroyArray_real_T(EoutCorr2);
  emxDestroyArray_real_T(EoutCorrD);
  emxDestroyArray_real_T(TxData);
  emxDestroyArray_real_T(TxDataMat);
  emxDestroyArray_real_T(Ix);
}

/*
 * Arguments    : int argc
 *                const char * const argv[]
 * Return Type  : int
 */
int main(int argc, const char * const argv[])
{
  (void)argc;
  (void)argv;

  /* Initialize the application.
     You do not need to do this more than one time. */
  RedDowOok_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_RedDowOok();

  /* Terminate the application.
     You do not need to do this more than one time. */
  RedDowOok_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */

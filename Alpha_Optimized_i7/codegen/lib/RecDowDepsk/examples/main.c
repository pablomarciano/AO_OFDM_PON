/*
 * File: main.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 15:11:07
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
#include "RecDowDepsk.h"
#include "main.h"
#include "RecDowDepsk_terminate.h"
#include "RecDowDepsk_emxAPI.h"
#include "RecDowDepsk_initialize.h"

/* Function Declarations */
static double argInit_real_T(void);
static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void);
static void main_RecDowDepsk(void);

/* Function Definitions */

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
static void main_RecDowDepsk(void)
{
  emxArray_real_T *Esync;
  emxArray_real_T *TxData;
  emxArray_real_T *Data;
  double MaxNumStag;
  double IfftOrSum;
  double T;
  double Ta;
  emxArray_real_T *Esync1;
  double AddCP;
  double StuffSampels;
  double NumAmosCP;
  double NPPB;
  double NbDPSK;
  double CurTesSiz;
  double SyncPeriod;
  double ThisCarr;
  emxArray_real_T *TxDataMat;
  double BerDPSK;
  double ValsLev;
  double AberLev;
  double InterAB[100];
  double LocMaxAB;
  double MaxValAB;
  double SeqFinAB[100];
  emxInitArray_real_T(&Esync, 2);
  emxInitArray_real_T(&TxData, 2);
  emxInitArray_real_T(&Data, 2);

  /* Initialize function 'RecDowDepsk' input arguments. */
  MaxNumStag = argInit_real_T();
  IfftOrSum = argInit_real_T();
  T = argInit_real_T();
  Ta = argInit_real_T();

  /* Initialize function input argument 'Esync1'. */
  Esync1 = c_argInit_UnboundedxUnbounded_r();
  AddCP = argInit_real_T();
  StuffSampels = argInit_real_T();
  NumAmosCP = argInit_real_T();
  NPPB = argInit_real_T();
  NbDPSK = argInit_real_T();
  CurTesSiz = argInit_real_T();
  SyncPeriod = argInit_real_T();
  ThisCarr = argInit_real_T();

  /* Initialize function input argument 'TxDataMat'. */
  TxDataMat = c_argInit_UnboundedxUnbounded_r();

  /* Call the entry-point 'RecDowDepsk'. */
  RecDowDepsk(MaxNumStag, IfftOrSum, T, Ta, Esync1, AddCP, StuffSampels,
              NumAmosCP, NPPB, NbDPSK, CurTesSiz, SyncPeriod, ThisCarr,
              TxDataMat, argInit_real_T(), &BerDPSK, &ValsLev, &AberLev, Esync,
              InterAB, &LocMaxAB, &MaxValAB, SeqFinAB, TxData, Data);
  emxDestroyArray_real_T(Data);
  emxDestroyArray_real_T(TxData);
  emxDestroyArray_real_T(Esync);
  emxDestroyArray_real_T(TxDataMat);
  emxDestroyArray_real_T(Esync1);
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
  RecDowDepsk_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_RecDowDepsk();

  /* Terminate the application.
     You do not need to do this more than one time. */
  RecDowDepsk_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */

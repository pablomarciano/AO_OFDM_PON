/*
 * File: main.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 18:36:28
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
#include "RecDowDqpsk.h"
#include "main.h"
#include "RecDowDqpsk_terminate.h"
#include "RecDowDqpsk_emxAPI.h"
#include "RecDowDqpsk_initialize.h"

/* Function Declarations */
static double argInit_real_T(void);
static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void);
static void main_RecDowDqpsk(void);

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
static void main_RecDowDqpsk(void)
{
  emxArray_real_T *EoutI;
  emxArray_real_T *EoutQ;
  emxArray_real_T *TxDataOdd;
  emxArray_real_T *TxDataEven;
  emxArray_real_T *DataOdd;
  emxArray_real_T *DataEven;
  emxArray_real_T *IxAuxAB;
  emxArray_real_T *QIxAuxAB;
  emxArray_real_T *EoutA;
  emxArray_real_T *EoutB;
  emxArray_real_T *EoutC;
  emxArray_real_T *EoutD;
  double T;
  double Ta;
  double IfftOrSum;
  double MaxNumStag;
  double StuffSampels;
  double NbDQPSK;
  double CurTesSiz;
  double NumAmosCP;
  double NPPB;
  double SyncPeriod;
  emxArray_real_T *TxDataMat;
  double AberLevI;
  double ValsLevI;
  double AberLevQ;
  double ValsLevQ;
  double BerDQPSK;
  double LocMaxAB;
  double MaxValAB;
  double SeqFinAB[100];
  double QMaxValAB;
  double QLocMaxAB;
  double QSeqFinAB[100];
  double QInterAB[100];
  double InterAB[100];
  emxInitArray_real_T(&EoutI, 2);
  emxInitArray_real_T(&EoutQ, 2);
  emxInitArray_real_T(&TxDataOdd, 2);
  emxInitArray_real_T(&TxDataEven, 2);
  emxInitArray_real_T(&DataOdd, 2);
  emxInitArray_real_T(&DataEven, 2);
  emxInitArray_real_T(&IxAuxAB, 2);
  emxInitArray_real_T(&QIxAuxAB, 2);

  /* Initialize function 'RecDowDqpsk' input arguments. */
  /* Initialize function input argument 'EoutA'. */
  EoutA = c_argInit_UnboundedxUnbounded_r();

  /* Initialize function input argument 'EoutB'. */
  EoutB = c_argInit_UnboundedxUnbounded_r();

  /* Initialize function input argument 'EoutC'. */
  EoutC = c_argInit_UnboundedxUnbounded_r();

  /* Initialize function input argument 'EoutD'. */
  EoutD = c_argInit_UnboundedxUnbounded_r();
  T = argInit_real_T();
  Ta = argInit_real_T();
  IfftOrSum = argInit_real_T();
  MaxNumStag = argInit_real_T();
  StuffSampels = argInit_real_T();
  NbDQPSK = argInit_real_T();
  CurTesSiz = argInit_real_T();
  NumAmosCP = argInit_real_T();
  NPPB = argInit_real_T();
  SyncPeriod = argInit_real_T();

  /* Initialize function input argument 'TxDataMat'. */
  TxDataMat = c_argInit_UnboundedxUnbounded_r();

  /* Call the entry-point 'RecDowDqpsk'. */
  RecDowDqpsk(EoutA, EoutB, EoutC, EoutD, T, Ta, IfftOrSum, MaxNumStag,
              StuffSampels, NbDQPSK, CurTesSiz, NumAmosCP, NPPB, SyncPeriod,
              TxDataMat, argInit_real_T(), argInit_real_T(), argInit_real_T(),
              argInit_real_T(), &AberLevI, &ValsLevI, &AberLevQ, &ValsLevQ,
              &BerDQPSK, EoutI, EoutQ, TxDataOdd, TxDataEven, DataOdd, DataEven,
              &LocMaxAB, &MaxValAB, SeqFinAB, &QMaxValAB, &QLocMaxAB, QSeqFinAB,
              QInterAB, InterAB, IxAuxAB, QIxAuxAB);
  emxDestroyArray_real_T(QIxAuxAB);
  emxDestroyArray_real_T(IxAuxAB);
  emxDestroyArray_real_T(DataEven);
  emxDestroyArray_real_T(DataOdd);
  emxDestroyArray_real_T(TxDataEven);
  emxDestroyArray_real_T(TxDataOdd);
  emxDestroyArray_real_T(EoutQ);
  emxDestroyArray_real_T(EoutI);
  emxDestroyArray_real_T(TxDataMat);
  emxDestroyArray_real_T(EoutD);
  emxDestroyArray_real_T(EoutC);
  emxDestroyArray_real_T(EoutB);
  emxDestroyArray_real_T(EoutA);
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
  RecDowDqpsk_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_RecDowDqpsk();

  /* Terminate the application.
     You do not need to do this more than one time. */
  RecDowDqpsk_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */

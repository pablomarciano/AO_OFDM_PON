/*
 * File: main.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 11-Sep-2018 21:36:40
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
#include "RecDowPam4.h"
#include "main.h"
#include "RecDowPam4_terminate.h"
#include "RecDowPam4_emxAPI.h"
#include "RecDowPam4_initialize.h"

/* Function Declarations */
static double argInit_real_T(void);
static emxArray_real_T *c_argInit_UnboundedxUnbounded_r(void);
static void main_RecDowPam4(void);

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
  static int iv0[2] = { 2, 2 };

  int idx0;
  int idx1;

  /* Set the size of the array.
     Change this size to the value that the application requires. */
  result = emxCreateND_real_T(2, iv0);

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
static void main_RecDowPam4(void)
{
  emxArray_real_T *Ix;
  emxArray_real_T *TxData;
  emxArray_real_T *IxRecDef;
  emxArray_real_T *IxRec;
  emxArray_real_T *Ix1;
  double T;
  double Ta;
  double MaxNumStag;
  double StuffSampels;
  double NumAmosCP;
  double NPPB;
  double CurTesSiz;
  double Nb4Pam;
  double IntervalStep;
  double MinDist;
  double DecLevDef1;
  double DecLevDef2;
  double DecLevDef3;
  emxArray_real_T *TxDataMat;
  double LevDec1;
  double LevDec2;
  double LevDec3;
  double Ber4PAM;
  double AberLev1;
  double AberLev2;
  double AberLev3;
  double ValsLev1;
  double ValsLev2;
  double ValsLev3;
  double ValsLev21;
  double ValsLev22;
  double ValsLev23;
  double InterAB[100];
  double InterCD[100];
  double InterEF[100];
  double SeqFinAB[100];
  double SeqFinCD[100];
  double SeqFinEF[100];
  double LocMaxAB;
  double LocMaxCD;
  double LocMaxEF;
  double MaxValAB;
  double MaxValCD;
  double MaxValEF;
  double Levels_data[5];
  int Levels_size[2];
  emxInitArray_real_T(&Ix, 2);
  emxInitArray_real_T(&TxData, 2);
  emxInitArray_real_T(&IxRecDef, 2);
  emxInitArray_real_T(&IxRec, 2);

  /* Initialize function 'RecDowPam4' input arguments. */
  /* Initialize function input argument 'Ix1'. */
  Ix1 = c_argInit_UnboundedxUnbounded_r();
  T = argInit_real_T();
  Ta = argInit_real_T();
  MaxNumStag = argInit_real_T();
  StuffSampels = argInit_real_T();
  NumAmosCP = argInit_real_T();
  NPPB = argInit_real_T();
  CurTesSiz = argInit_real_T();
  Nb4Pam = argInit_real_T();
  IntervalStep = argInit_real_T();
  MinDist = argInit_real_T();
  DecLevDef1 = argInit_real_T();
  DecLevDef2 = argInit_real_T();
  DecLevDef3 = argInit_real_T();

  /* Initialize function input argument 'TxDataMat'. */
  TxDataMat = c_argInit_UnboundedxUnbounded_r();

  /* Call the entry-point 'RecDowPam4'. */
  RecDowPam4(Ix1, T, Ta, MaxNumStag, StuffSampels, NumAmosCP, NPPB, CurTesSiz,
             Nb4Pam, IntervalStep, MinDist, &DecLevDef1, &DecLevDef2,
             &DecLevDef3, TxDataMat, argInit_real_T(), argInit_real_T(),
             argInit_real_T(), argInit_real_T(), argInit_real_T(), &LevDec1,
             &LevDec2, &LevDec3, Ix, &Ber4PAM, TxData, IxRecDef, IxRec,
             &AberLev1, &AberLev2, &AberLev3, &ValsLev1, &ValsLev2, &ValsLev3,
             &ValsLev21, &ValsLev22, &ValsLev23, InterAB, InterCD, InterEF,
             SeqFinAB, SeqFinCD, SeqFinEF, &LocMaxAB, &LocMaxCD, &LocMaxEF,
             &MaxValAB, &MaxValCD, &MaxValEF, Levels_data, Levels_size);
  emxDestroyArray_real_T(IxRec);
  emxDestroyArray_real_T(IxRecDef);
  emxDestroyArray_real_T(TxData);
  emxDestroyArray_real_T(Ix);
  emxDestroyArray_real_T(TxDataMat);
  emxDestroyArray_real_T(Ix1);
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
  RecDowPam4_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_RecDowPam4();

  /* Terminate the application.
     You do not need to do this more than one time. */
  RecDowPam4_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */

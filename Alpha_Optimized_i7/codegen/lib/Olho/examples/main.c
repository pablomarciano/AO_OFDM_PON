/*
 * File: main.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 01-Sep-2018 15:04:10
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
#include "Olho.h"
#include "main.h"
#include "Olho_terminate.h"
#include "Olho_emxAPI.h"
#include "Olho_initialize.h"

/* Function Declarations */
static emxArray_real_T *argInit_1xUnbounded_real_T(void);
static double argInit_real_T(void);
static void main_Olho(void);

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
 * Return Type  : void
 */
static void main_Olho(void)
{
  emxArray_real_T *olho_mat;
  emxArray_real_T *tn;
  emxArray_real_T *Dados;
  double Olho_Aber;
  double Aber_Lhi;
  double Aber_Llow;
  emxInitArray_real_T(&olho_mat, 2);
  emxInitArray_real_T(&tn, 2);

  /* Initialize function 'Olho' input arguments. */
  /* Initialize function input argument 'Dados'. */
  Dados = argInit_1xUnbounded_real_T();

  /* Call the entry-point 'Olho'. */
  Olho(Dados, argInit_real_T(), argInit_real_T(), argInit_real_T(),
       argInit_real_T(), olho_mat, tn, &Olho_Aber, &Aber_Lhi, &Aber_Llow);
  emxDestroyArray_real_T(tn);
  emxDestroyArray_real_T(olho_mat);
  emxDestroyArray_real_T(Dados);
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
  Olho_initialize();

  /* Invoke the entry-point functions.
     You can call entry-point functions multiple times. */
  main_Olho();

  /* Terminate the application.
     You do not need to do this more than one time. */
  Olho_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */

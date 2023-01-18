/*
 * File: Olho.c
 *
 * MATLAB Coder version            : 3.1
 * C/C++ source code generated on  : 01-Sep-2018 15:04:10
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "Olho.h"
#include "std.h"
#include "mean.h"
#include "Olho_emxutil.h"

/* Function Declarations */
static double rt_roundd_snf(double u);

/* Function Definitions */

/*
 * Arguments    : double u
 * Return Type  : double
 */
static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * %           Creating the Eye Diagram of one electrical signals.
 * c function [olho_mat,tn,Olho_Aber,Aber_Lhi,Aber_Llow] = Olho(Dados,...
 * c                                             t_simb,n_amos_p_sim,ploting)
 * c
 * c
 * c This function is resposible for generating the eye diagram of an given
 * c signal.
 * c
 * c
 * c                                           Created by P.Marciano LG
 * c                                           22/11/2016
 * c                                           07/01/2018
 * c                                           pablorafael.mcx@gmail.com
 * c
 * c
 * c
 * c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
 * c                    G L O B A L  V A R I A B L E S                      %
 * c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
 * c
 * c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
 * c                   L I S T  O F  V A R I A B L E S                      %
 * c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
 * c
 * c    Olho
 * c
 * c  Input:
 * c  Dados        : The complete tada to be evaluated                    [b]
 * c  t_simb       : The time period of one symbol                        [s]
 * c  n_amos_p_sim : The number of samples per symbol                  [samp]
 * c  ploting      : Control variable to plot or not the eye diagram withing
 * c                 this fucntion                                   [bolean]
 * c
 * c  Output:
 * c  olho_mat     : Matriz with the eye diagram stored                   [u]
 * c  tn           : Time vector for ploting the Eye Diagram outside this
 * c                 function                                             [s]
 * c  Olho_Aber    : Statical information about the Eye Opening           [u]
 * c  Aber_Lhi     : Statical information about the Eye highest point     [u]
 * c  Aber_Llow    : Statical information about the Eye lowest point      [u]
 * c
 * c
 * c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
 * c                             S T R U C T S                              %
 * c%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
 * c
 * %                       Initializing
 * % Recovering the main iformation about the income signal
 * Arguments    : const emxArray_real_T *Dados
 *                double t_simb
 *                double n_amos_p_sim
 *                double ploting
 *                double tmax
 *                emxArray_real_T *olho_mat
 *                emxArray_real_T *tn
 *                double *Olho_Aber
 *                double *Aber_Lhi
 *                double *Aber_Llow
 * Return Type  : void
 */
void Olho(const emxArray_real_T *Dados, double t_simb, double n_amos_p_sim,
          double ploting, double tmax, emxArray_real_T *olho_mat,
          emxArray_real_T *tn, double *Olho_Aber, double *Aber_Lhi, double
          *Aber_Llow)
{
  emxArray_real_T *t;
  int ii;
  double N_sim;
  double tf;
  unsigned int unnamed_idx_1;
  int i0;
  double delta1;
  double n_plot;
  int nx;
  double nlin;
  int exitg3;
  double r;
  emxArray_real_T *olho;
  emxArray_real_T *hi;
  emxArray_real_T *low;
  emxArray_real_T *Lhi;
  emxArray_real_T *Llow;
  emxArray_real_T *Ab;
  int b_ii;
  emxArray_real_T *nhi;
  emxArray_real_T *nlow;
  emxArray_boolean_T *x;
  emxArray_int32_T *c_ii;
  emxArray_real_T *b_olho;
  emxArray_real_T *c_olho;
  emxArray_real_T *d_olho;
  emxArray_real_T *e_olho;
  emxArray_real_T *f_olho;
  int idx;
  boolean_T exitg2;
  boolean_T guard2 = false;
  boolean_T exitg1;
  boolean_T guard1 = false;
  (void)ploting;
  emxInit_real_T(&t, 2);

  /* Variable used to limit the ploting at the maximum point */
  /* Variable used to limit the ploting at the minimum point */
  ii = Dados->size[1];

  /* Recovering the size of the income information */
  N_sim = (double)Dados->size[1] / n_amos_p_sim;

  /* Recovering the number of Symbols withing the information */
  tf = N_sim * t_simb;

  /* Estimating the final time of this signal */
  unnamed_idx_1 = (unsigned int)Dados->size[1];
  i0 = t->size[0] * t->size[1];
  t->size[0] = 1;
  t->size[1] = (int)unnamed_idx_1;
  emxEnsureCapacity((emxArray__common *)t, i0, (int)sizeof(double));
  if (t->size[1] >= 1) {
    t->data[t->size[1] - 1] = tf;
    if (t->size[1] >= 2) {
      t->data[0] = 0.0;
      if (t->size[1] >= 3) {
        if ((tf < 0.0) && (fabs(tf) > 8.9884656743115785E+307)) {
          delta1 = tf / ((double)t->size[1] - 1.0);
          i0 = t->size[1];
          for (nx = 0; nx <= i0 - 3; nx++) {
            t->data[1 + nx] = delta1 * (1.0 + (double)nx);
          }
        } else {
          delta1 = tf / ((double)t->size[1] - 1.0);
          i0 = t->size[1];
          for (nx = 0; nx <= i0 - 3; nx++) {
            t->data[1 + nx] = (1.0 + (double)nx) * delta1;
          }
        }
      }
    }
  }

  /* Recovering the time vector of the income signal */
  /* Recovering the sampling ratio of this signal */
  /* % Seting variables for controling the spliting to the income signal */
  /*  tmax  = 3;                                                                 %Seting the number eyes to be plot */
  if (N_sim <= tmax) {
    /* If the income signal just have one symbel just one eye will be plot */
    n_plot = 1.0;
  } else {
    /* Otherwise, we need to calculate the number of samples needed to be */
    /* taken to create the eye diagram accordingly with the previous */
    /* especified. */
    n_plot = (double)Dados->size[1] / (tmax * n_amos_p_sim);

    /* taking the number of samples needed */
    /* Because of reasons, the number of samples may not be multiple of the */
    /* number of eyes requested for ploting hence, it must be downsizes to */
    /* the minimal of one eye to be ploted. */
    do {
      exitg3 = 0;
      delta1 = tmax * n_amos_p_sim;
      if (delta1 == 0.0) {
        r = ii;
      } else if (delta1 == floor(delta1)) {
        r = (double)ii - floor((double)ii / delta1) * delta1;
      } else {
        r = (double)ii / delta1;
        if (fabs(r - rt_roundd_snf(r)) <= 2.2204460492503131E-16 * fabs(r)) {
          r = 0.0;
        } else {
          r = (r - floor(r)) * delta1;
        }
      }

      if (r != 0.0) {
        /* Checking if the number of samples is divisible by the number of eyes to be plot          */
        tmax--;

        /* If not, reduz the number of eyes by one unity */
        n_plot = (double)ii / (tmax * n_amos_p_sim);

        /* Recalculate the number of samples needed to be taken */
      } else {
        exitg3 = 1;
      }
    } while (exitg3 == 0);
  }

  /* % Resizing the income signal for ploting */
  nlin = tmax * n_amos_p_sim;

  /* Setting the number of lines of the new matriz */
  /* Setting the number of columns */
  i0 = tn->size[0] * tn->size[1];
  tn->size[0] = (int)rt_roundd_snf(nlin);
  tn->size[1] = (int)rt_roundd_snf(n_plot);
  emxEnsureCapacity((emxArray__common *)tn, i0, (int)sizeof(double));
  for (nx = 0; nx + 1 <= t->size[1]; nx++) {
    tn->data[nx] = t->data[nx];
  }

  /* Reshaping the time vector to match the signal matriz */
  i0 = olho_mat->size[0] * olho_mat->size[1];
  olho_mat->size[0] = (int)rt_roundd_snf(nlin);
  olho_mat->size[1] = (int)rt_roundd_snf(n_plot);
  emxEnsureCapacity((emxArray__common *)olho_mat, i0, (int)sizeof(double));
  for (nx = 0; nx + 1 <= Dados->size[1]; nx++) {
    olho_mat->data[nx] = Dados->data[nx];
  }

  emxInit_real_T(&olho, 2);

  /* Reshaping the signal to an matriz */
  /* % Resizing the income signal for measurement of the eye opening */
  /* Setting the number of lines of the new matriz */
  /* Setting the number of columns */
  i0 = olho->size[0] * olho->size[1];
  olho->size[0] = (int)n_amos_p_sim;
  olho->size[1] = (int)N_sim;
  emxEnsureCapacity((emxArray__common *)olho, i0, (int)sizeof(double));
  for (nx = 0; nx + 1 <= Dados->size[1]; nx++) {
    olho->data[nx] = Dados->data[nx];
  }

  /* Reshaping the signal to an matriz */
  i0 = t->size[0] * t->size[1];
  t->size[0] = 1;
  t->size[1] = (int)n_amos_p_sim;
  emxEnsureCapacity((emxArray__common *)t, i0, (int)sizeof(double));
  ii = (int)n_amos_p_sim;
  for (i0 = 0; i0 < ii; i0++) {
    t->data[i0] = 0.0;
  }

  emxInit_real_T(&hi, 2);
  i0 = hi->size[0] * hi->size[1];
  hi->size[0] = 1;
  hi->size[1] = (int)n_amos_p_sim;
  emxEnsureCapacity((emxArray__common *)hi, i0, (int)sizeof(double));
  ii = (int)n_amos_p_sim;
  for (i0 = 0; i0 < ii; i0++) {
    hi->data[i0] = 0.0;
  }

  emxInit_real_T(&low, 2);
  i0 = low->size[0] * low->size[1];
  low->size[0] = 1;
  low->size[1] = (int)n_amos_p_sim;
  emxEnsureCapacity((emxArray__common *)low, i0, (int)sizeof(double));
  ii = (int)n_amos_p_sim;
  for (i0 = 0; i0 < ii; i0++) {
    low->data[i0] = 0.0;
  }

  emxInit_real_T(&Lhi, 2);
  i0 = Lhi->size[0] * Lhi->size[1];
  Lhi->size[0] = 1;
  Lhi->size[1] = (int)n_amos_p_sim;
  emxEnsureCapacity((emxArray__common *)Lhi, i0, (int)sizeof(double));
  ii = (int)n_amos_p_sim;
  for (i0 = 0; i0 < ii; i0++) {
    Lhi->data[i0] = 0.0;
  }

  emxInit_real_T(&Llow, 2);
  i0 = Llow->size[0] * Llow->size[1];
  Llow->size[0] = 1;
  Llow->size[1] = (int)n_amos_p_sim;
  emxEnsureCapacity((emxArray__common *)Llow, i0, (int)sizeof(double));
  ii = (int)n_amos_p_sim;
  for (i0 = 0; i0 < ii; i0++) {
    Llow->data[i0] = 0.0;
  }

  emxInit_real_T(&Ab, 2);
  i0 = Ab->size[0] * Ab->size[1];
  Ab->size[0] = 1;
  Ab->size[1] = (int)n_amos_p_sim;
  emxEnsureCapacity((emxArray__common *)Ab, i0, (int)sizeof(double));
  ii = (int)n_amos_p_sim;
  for (i0 = 0; i0 < ii; i0++) {
    Ab->data[i0] = 0.0;
  }

  /*  Measuring the eye opening. */
  b_ii = 0;
  emxInit_real_T(&nhi, 2);
  emxInit_real_T(&nlow, 2);
  emxInit_boolean_T(&x, 2);
  emxInit_int32_T(&c_ii, 2);
  emxInit_real_T(&b_olho, 2);
  emxInit_real_T(&c_olho, 2);
  emxInit_real_T(&d_olho, 2);
  emxInit_real_T(&e_olho, 2);
  emxInit_real_T(&f_olho, 2);
  while (b_ii <= (int)n_amos_p_sim - 1) {
    /* Taking the mean value for the current sample for all symbols */
    ii = olho->size[1];
    i0 = f_olho->size[0] * f_olho->size[1];
    f_olho->size[0] = 1;
    f_olho->size[1] = ii;
    emxEnsureCapacity((emxArray__common *)f_olho, i0, (int)sizeof(double));
    for (i0 = 0; i0 < ii; i0++) {
      f_olho->data[f_olho->size[0] * i0] = olho->data[b_ii + olho->size[0] * i0];
    }

    t->data[b_ii] = mean(f_olho);

    /* Taking the points abouve the current mean value */
    ii = olho->size[1];
    delta1 = t->data[b_ii];
    i0 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = ii;
    emxEnsureCapacity((emxArray__common *)x, i0, (int)sizeof(boolean_T));
    for (i0 = 0; i0 < ii; i0++) {
      x->data[x->size[0] * i0] = (olho->data[b_ii + olho->size[0] * i0] > delta1);
    }

    nx = x->size[1];
    idx = 0;
    i0 = c_ii->size[0] * c_ii->size[1];
    c_ii->size[0] = 1;
    c_ii->size[1] = x->size[1];
    emxEnsureCapacity((emxArray__common *)c_ii, i0, (int)sizeof(int));
    ii = 1;
    exitg2 = false;
    while ((!exitg2) && (ii <= nx)) {
      guard2 = false;
      if (x->data[ii - 1]) {
        idx++;
        c_ii->data[idx - 1] = ii;
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

    if (x->size[1] == 1) {
      if (idx == 0) {
        i0 = c_ii->size[0] * c_ii->size[1];
        c_ii->size[0] = 1;
        c_ii->size[1] = 0;
        emxEnsureCapacity((emxArray__common *)c_ii, i0, (int)sizeof(int));
      }
    } else {
      i0 = c_ii->size[0] * c_ii->size[1];
      if (1 > idx) {
        c_ii->size[1] = 0;
      } else {
        c_ii->size[1] = idx;
      }

      emxEnsureCapacity((emxArray__common *)c_ii, i0, (int)sizeof(int));
    }

    i0 = nhi->size[0] * nhi->size[1];
    nhi->size[0] = 1;
    nhi->size[1] = c_ii->size[1];
    emxEnsureCapacity((emxArray__common *)nhi, i0, (int)sizeof(double));
    ii = c_ii->size[0] * c_ii->size[1];
    for (i0 = 0; i0 < ii; i0++) {
      nhi->data[i0] = c_ii->data[i0];
    }

    /* Taking the points under the current mean value */
    ii = olho->size[1];
    delta1 = t->data[b_ii];
    i0 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = ii;
    emxEnsureCapacity((emxArray__common *)x, i0, (int)sizeof(boolean_T));
    for (i0 = 0; i0 < ii; i0++) {
      x->data[x->size[0] * i0] = (olho->data[b_ii + olho->size[0] * i0] < delta1);
    }

    nx = x->size[1];
    idx = 0;
    i0 = c_ii->size[0] * c_ii->size[1];
    c_ii->size[0] = 1;
    c_ii->size[1] = x->size[1];
    emxEnsureCapacity((emxArray__common *)c_ii, i0, (int)sizeof(int));
    ii = 1;
    exitg1 = false;
    while ((!exitg1) && (ii <= nx)) {
      guard1 = false;
      if (x->data[ii - 1]) {
        idx++;
        c_ii->data[idx - 1] = ii;
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

    if (x->size[1] == 1) {
      if (idx == 0) {
        i0 = c_ii->size[0] * c_ii->size[1];
        c_ii->size[0] = 1;
        c_ii->size[1] = 0;
        emxEnsureCapacity((emxArray__common *)c_ii, i0, (int)sizeof(int));
      }
    } else {
      i0 = c_ii->size[0] * c_ii->size[1];
      if (1 > idx) {
        c_ii->size[1] = 0;
      } else {
        c_ii->size[1] = idx;
      }

      emxEnsureCapacity((emxArray__common *)c_ii, i0, (int)sizeof(int));
    }

    i0 = nlow->size[0] * nlow->size[1];
    nlow->size[0] = 1;
    nlow->size[1] = c_ii->size[1];
    emxEnsureCapacity((emxArray__common *)nlow, i0, (int)sizeof(double));
    ii = c_ii->size[0] * c_ii->size[1];
    for (i0 = 0; i0 < ii; i0++) {
      nlow->data[i0] = c_ii->data[i0];
    }

    /* Taking the mean value of the point abouve the the center of the simbol */
    i0 = e_olho->size[0] * e_olho->size[1];
    e_olho->size[0] = 1;
    e_olho->size[1] = nhi->size[1];
    emxEnsureCapacity((emxArray__common *)e_olho, i0, (int)sizeof(double));
    ii = nhi->size[1];
    for (i0 = 0; i0 < ii; i0++) {
      e_olho->data[e_olho->size[0] * i0] = olho->data[b_ii + olho->size[0] *
        ((int)nhi->data[nhi->size[0] * i0] - 1)];
    }

    hi->data[b_ii] = mean(e_olho);

    /* Taking the mean value of the point under the the center of the simbol */
    i0 = d_olho->size[0] * d_olho->size[1];
    d_olho->size[0] = 1;
    d_olho->size[1] = nlow->size[1];
    emxEnsureCapacity((emxArray__common *)d_olho, i0, (int)sizeof(double));
    ii = nlow->size[1];
    for (i0 = 0; i0 < ii; i0++) {
      d_olho->data[d_olho->size[0] * i0] = olho->data[b_ii + olho->size[0] *
        ((int)nlow->data[nlow->size[0] * i0] - 1)];
    }

    low->data[b_ii] = mean(d_olho);

    /*  */
    /* Taking highest point of the eye opening by subtracting the standart */
    /* deviation from the mean value of the points abouve the center of the */
    /* symble for the current sample. */
    i0 = c_olho->size[0] * c_olho->size[1];
    c_olho->size[0] = 1;
    c_olho->size[1] = nhi->size[1];
    emxEnsureCapacity((emxArray__common *)c_olho, i0, (int)sizeof(double));
    ii = nhi->size[1];
    for (i0 = 0; i0 < ii; i0++) {
      c_olho->data[c_olho->size[0] * i0] = olho->data[b_ii + olho->size[0] *
        ((int)nhi->data[nhi->size[0] * i0] - 1)];
    }

    Lhi->data[b_ii] = mean(hi) - b_std(c_olho);

    /* Taking lowest point of the eye opening by adding the standart */
    /* deviation from the mean value of the points under the center of the */
    /* symbol for the current sample. */
    i0 = b_olho->size[0] * b_olho->size[1];
    b_olho->size[0] = 1;
    b_olho->size[1] = nlow->size[1];
    emxEnsureCapacity((emxArray__common *)b_olho, i0, (int)sizeof(double));
    ii = nlow->size[1];
    for (i0 = 0; i0 < ii; i0++) {
      b_olho->data[b_olho->size[0] * i0] = olho->data[b_ii + olho->size[0] *
        ((int)nlow->data[nlow->size[0] * i0] - 1)];
    }

    Llow->data[b_ii] = mean(low) + b_std(b_olho);

    /* Taking the eye opening by the diffeces between the uper level and the */
    /* lower level. */
    Ab->data[b_ii] = Lhi->data[b_ii] - Llow->data[b_ii];
    b_ii++;
  }

  emxFree_real_T(&f_olho);
  emxFree_real_T(&e_olho);
  emxFree_real_T(&d_olho);
  emxFree_real_T(&c_olho);
  emxFree_real_T(&b_olho);
  emxFree_int32_T(&c_ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&nlow);
  emxFree_real_T(&nhi);
  emxFree_real_T(&low);
  emxFree_real_T(&hi);
  emxFree_real_T(&olho);
  emxFree_real_T(&t);

  /* The final values to be exported outside this function are based on the */
  /* mean value calculated above. */
  *Olho_Aber = mean(Ab);
  *Aber_Lhi = mean(Lhi);
  *Aber_Llow = mean(Llow);

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
}

/*
 * File trailer for Olho.c
 *
 * [EOF]
 */

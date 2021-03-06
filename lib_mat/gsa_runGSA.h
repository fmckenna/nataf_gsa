//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: gsa_runGSA.h
//
// MATLAB Coder version            : 5.0
// C/C++ source code generated on  : 10-Aug-2020 21:17:14
//
#ifndef GSA_RUNGSA_H
#define GSA_RUNGSA_H

// Include Files
#include <cstddef>
#include <cstdlib>
#include "rtwtypes.h"
#include "gsa_runGSA_types.h"

// Function Declarations
extern void runGSA(const coder::array<double, 2U> &x, const coder::array<double,
                   1U> &gval, const coder::array<gsa_cell_wrap_0, 2U>
                   &combs_temp, double Kos, char opts, coder::array<double, 1U>
                   &Si);

#endif

//
// File trailer for gsa_runGSA.h
//
// [EOF]
//

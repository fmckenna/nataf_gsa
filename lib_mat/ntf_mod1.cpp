//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: ntf_mod1.cpp
//
// MATLAB Coder version            : 5.0
// C/C++ source code generated on  : 10-Aug-2020 16:42:46
//

// Include Files
#include "ntf_mod1.h"
#include "ntf_inataf.h"
#include "rt_nonfinite.h"
#include <cmath>

// Function Definitions

//
// Arguments    : double x
// Return Type  : double
//
double ntf_mod(double x)
{
  double r;
  if (rtIsNaN(x) || rtIsInf(x)) {
    r = rtNaN;
  } else if (x == 0.0) {
    r = 0.0;
  } else {
    r = std::fmod(x, 1.0);
    if (r == 0.0) {
      r = 0.0;
    } else {
      if (x < 0.0) {
        r++;
      }
    }
  }

  return r;
}

//
// File trailer for ntf_mod1.cpp
//
// [EOF]
//

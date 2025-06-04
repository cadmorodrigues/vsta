#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "abs_lf2wV9oj.h"

void abs_lf2wV9oj(const real_T x[4], real_T y[4])
{
  y[0] = muDoubleScalarAbs(x[0]);
  y[1] = muDoubleScalarAbs(x[1]);
  y[2] = muDoubleScalarAbs(x[2]);
  y[3] = muDoubleScalarAbs(x[3]);
}

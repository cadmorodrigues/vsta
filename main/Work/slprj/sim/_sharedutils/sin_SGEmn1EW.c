#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "sin_SGEmn1EW.h"

void sin_SGEmn1EW(real_T x[4])
{
  x[0] = muDoubleScalarSin(x[0]);
  x[1] = muDoubleScalarSin(x[1]);
  x[2] = muDoubleScalarSin(x[2]);
  x[3] = muDoubleScalarSin(x[3]);
}

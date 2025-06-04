#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "atan_gH4krsPB.h"

void atan_gH4krsPB(real_T x[4])
{
  x[0] = muDoubleScalarAtan(x[0]);
  x[1] = muDoubleScalarAtan(x[1]);
  x[2] = muDoubleScalarAtan(x[2]);
  x[3] = muDoubleScalarAtan(x[3]);
}

#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "sqrt_SPIkWWrF.h"

void sqrt_SPIkWWrF(real_T x[4])
{
  x[0] = muDoubleScalarSqrt(x[0]);
  x[1] = muDoubleScalarSqrt(x[1]);
  x[2] = muDoubleScalarSqrt(x[2]);
  x[3] = muDoubleScalarSqrt(x[3]);
}

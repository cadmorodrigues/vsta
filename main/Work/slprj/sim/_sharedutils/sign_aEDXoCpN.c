#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "sign_aEDXoCpN.h"

void sign_aEDXoCpN(real_T x[4])
{
  x[0] = muDoubleScalarSign(x[0]);
  x[1] = muDoubleScalarSign(x[1]);
  x[2] = muDoubleScalarSign(x[2]);
  x[3] = muDoubleScalarSign(x[3]);
}

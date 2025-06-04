#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "cos_PHKeDwWB.h"

void cos_PHKeDwWB(real_T x[4])
{
  x[0] = muDoubleScalarCos(x[0]);
  x[1] = muDoubleScalarCos(x[1]);
  x[2] = muDoubleScalarCos(x[2]);
  x[3] = muDoubleScalarCos(x[3]);
}

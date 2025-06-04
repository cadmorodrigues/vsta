#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "tanh_ljC7INdK.h"

void tanh_ljC7INdK(real_T x[4])
{
  x[0] = muDoubleScalarTanh(x[0]);
  x[1] = muDoubleScalarTanh(x[1]);
  x[2] = muDoubleScalarTanh(x[2]);
  x[3] = muDoubleScalarTanh(x[3]);
}

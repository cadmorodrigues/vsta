#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "magicsin_jIWN8Ib5.h"

void magicsin_jIWN8Ib5(const real_T D[4], real_T C, const real_T B[4], real_T E,
  const real_T u[4], real_T y[4])
{
  real_T y_tmp;
  y_tmp = B[0] * u[0];
  y[0] = muDoubleScalarSin(muDoubleScalarAtan(y_tmp - (y_tmp -
    muDoubleScalarAtan(y_tmp)) * E) * C) * D[0];
  y_tmp = B[1] * u[1];
  y[1] = muDoubleScalarSin(muDoubleScalarAtan(y_tmp - (y_tmp -
    muDoubleScalarAtan(y_tmp)) * E) * C) * D[1];
  y_tmp = B[2] * u[2];
  y[2] = muDoubleScalarSin(muDoubleScalarAtan(y_tmp - (y_tmp -
    muDoubleScalarAtan(y_tmp)) * E) * C) * D[2];
  y_tmp = B[3] * u[3];
  y[3] = muDoubleScalarSin(muDoubleScalarAtan(y_tmp - (y_tmp -
    muDoubleScalarAtan(y_tmp)) * E) * C) * D[3];
}

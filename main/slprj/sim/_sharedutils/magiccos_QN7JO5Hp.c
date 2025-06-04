#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "magiccos_QN7JO5Hp.h"

void magiccos_QN7JO5Hp(const real_T D[4], real_T C, const real_T B[4], const
  real_T E[4], const real_T u[4], real_T y[4])
{
  real_T y_tmp;
  y_tmp = B[0] * u[0];
  y[0] = muDoubleScalarCos(muDoubleScalarAtan(y_tmp - (y_tmp -
    muDoubleScalarAtan(y_tmp)) * E[0]) * C) * D[0];
  y_tmp = B[1] * u[1];
  y[1] = muDoubleScalarCos(muDoubleScalarAtan(y_tmp - (y_tmp -
    muDoubleScalarAtan(y_tmp)) * E[1]) * C) * D[1];
  y_tmp = B[2] * u[2];
  y[2] = muDoubleScalarCos(muDoubleScalarAtan(y_tmp - (y_tmp -
    muDoubleScalarAtan(y_tmp)) * E[2]) * C) * D[2];
  y_tmp = B[3] * u[3];
  y[3] = muDoubleScalarCos(muDoubleScalarAtan(y_tmp - (y_tmp -
    muDoubleScalarAtan(y_tmp)) * E[3]) * C) * D[3];
}

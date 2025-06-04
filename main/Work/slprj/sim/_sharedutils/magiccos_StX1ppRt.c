#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "magiccos_StX1ppRt.h"

void magiccos_StX1ppRt(const real_T D[4], const real_T C[4], const real_T B[4],
  const real_T u[4], real_T y[4])
{
  real_T y_tmp;
  y_tmp = B[0] * u[0];
  y[0] = muDoubleScalarCos(muDoubleScalarAtan(y_tmp - (y_tmp -
    muDoubleScalarAtan(y_tmp)) * 0.0) * C[0]) * D[0];
  y_tmp = B[1] * u[1];
  y[1] = muDoubleScalarCos(muDoubleScalarAtan(y_tmp - (y_tmp -
    muDoubleScalarAtan(y_tmp)) * 0.0) * C[1]) * D[1];
  y_tmp = B[2] * u[2];
  y[2] = muDoubleScalarCos(muDoubleScalarAtan(y_tmp - (y_tmp -
    muDoubleScalarAtan(y_tmp)) * 0.0) * C[2]) * D[2];
  y_tmp = B[3] * u[3];
  y[3] = muDoubleScalarCos(muDoubleScalarAtan(y_tmp - (y_tmp -
    muDoubleScalarAtan(y_tmp)) * 0.0) * C[3]) * D[3];
}

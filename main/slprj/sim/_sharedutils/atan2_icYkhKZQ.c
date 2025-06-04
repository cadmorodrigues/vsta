#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "atan2_icYkhKZQ.h"

void atan2_icYkhKZQ(const real_T y[4], const real_T x[4], real_T r[4])
{
  r[0] = muDoubleScalarAtan2(y[0], x[0]);
  r[1] = muDoubleScalarAtan2(y[1], x[1]);
  r[2] = muDoubleScalarAtan2(y[2], x[2]);
  r[3] = muDoubleScalarAtan2(y[3], x[3]);
}

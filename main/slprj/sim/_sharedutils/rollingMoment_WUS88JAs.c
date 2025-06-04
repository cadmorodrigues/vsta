#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rollingMoment_WUS88JAs.h"

void rollingMoment_WUS88JAs(const real_T Fx[4], const real_T Vcx[4], const
  real_T Fz[4], const real_T press[4], const real_T b_gamma[4], real_T Vo,
  real_T Ro, real_T Fzo, real_T pio, real_T b_QSY1, real_T b_QSY2, real_T b_QSY3,
  real_T b_QSY4, real_T b_QSY5, real_T b_QSY6, real_T b_QSY7, real_T b_QSY8,
  const real_T lam_My[4], real_T My[4])
{
  real_T Ro_p;
  real_T x_tmp;
  real_T My_p;
  real_T b_z1;
  Ro_p = -Ro * Fzo;
  x_tmp = Vcx[0] / Vo;
  My_p = muDoubleScalarAbs(x_tmp);
  b_z1 = muDoubleScalarPower(x_tmp, 4.0);
  x_tmp = Fz[0] / Fzo;
  My[0] = ((((Fx[0] / Fzo * b_QSY2 + b_QSY1) + b_QSY3 * My_p) + b_QSY4 * b_z1) +
           (b_QSY6 * x_tmp + b_QSY5) * (b_gamma[0] * b_gamma[0])) * (Ro_p *
    lam_My[0]) * (muDoubleScalarPower(press[0] / pio, b_QSY8) *
                  muDoubleScalarPower(x_tmp, b_QSY7));
  x_tmp = Vcx[1] / Vo;
  My_p = muDoubleScalarAbs(x_tmp);
  b_z1 = muDoubleScalarPower(x_tmp, 4.0);
  x_tmp = Fz[1] / Fzo;
  My[1] = ((((Fx[1] / Fzo * b_QSY2 + b_QSY1) + b_QSY3 * My_p) + b_QSY4 * b_z1) +
           (b_QSY6 * x_tmp + b_QSY5) * (b_gamma[1] * b_gamma[1])) * (Ro_p *
    lam_My[1]) * (muDoubleScalarPower(press[1] / pio, b_QSY8) *
                  muDoubleScalarPower(x_tmp, b_QSY7));
  x_tmp = Vcx[2] / Vo;
  My_p = muDoubleScalarAbs(x_tmp);
  b_z1 = muDoubleScalarPower(x_tmp, 4.0);
  x_tmp = Fz[2] / Fzo;
  My[2] = ((((Fx[2] / Fzo * b_QSY2 + b_QSY1) + b_QSY3 * My_p) + b_QSY4 * b_z1) +
           (b_QSY6 * x_tmp + b_QSY5) * (b_gamma[2] * b_gamma[2])) * (Ro_p *
    lam_My[2]) * (muDoubleScalarPower(press[2] / pio, b_QSY8) *
                  muDoubleScalarPower(x_tmp, b_QSY7));
  x_tmp = Vcx[3] / Vo;
  My_p = muDoubleScalarAbs(x_tmp);
  b_z1 = muDoubleScalarPower(x_tmp, 4.0);
  x_tmp = Fz[3] / Fzo;
  My[3] = ((((Fx[3] / Fzo * b_QSY2 + b_QSY1) + b_QSY3 * My_p) + b_QSY4 * b_z1) +
           (b_QSY6 * x_tmp + b_QSY5) * (b_gamma[3] * b_gamma[3])) * (Ro_p *
    lam_My[3]) * (muDoubleScalarPower(press[3] / pio, b_QSY8) *
                  muDoubleScalarPower(x_tmp, b_QSY7));
}

#include "rtwtypes.h"
#include "multiword_types.h"
#include "automldiffas_4HAP7ofC.h"

void automldiffas_4HAP7ofC(const real_T u[5], real_T b_bw1, real_T b_bd, real_T
  b_bw2, real_T b_Ndiff, real_T Nl, real_T Nr, real_T shaftSwitch, real_T b_Jd,
  real_T b_Jw1, real_T b_Jw2, real_T b_Jgc, const real_T x[2], real_T y[5],
  real_T xdot[2])
{
  int32_T diffDir;
  real_T term1;
  real_T term2;
  real_T invJ[4];
  real_T diffDir_p[10];
  real_T invJ_p[10];
  real_T invJ_e[4];
  real_T invJ_i[2];
  real_T invJ_m[2];
  real_T diffDir_e[10];
  real_T tmp[5];
  int32_T i;
  real_T b_bw1_idx_1;
  real_T b_bw1_idx_3;
  real_T invJ_tmp;
  int32_T invJ_tmp_p;
  int32_T invJ_tmp_tmp;
  if (shaftSwitch != 0.0) {
    diffDir = -1;
  } else {
    diffDir = 1;
  }

  b_Jd += b_Jgc;
  term1 = b_Ndiff * b_Ndiff * b_Jd;
  term2 = (4.0 * b_Jw1 * b_Jw2 + term1 * b_Jw1) + b_Jw2 * term1;
  invJ[0] = (b_Jw2 * 4.0 + term1) / term2;
  invJ_tmp = -term1 / term2;
  invJ[2] = invJ_tmp;
  invJ[1] = invJ_tmp;
  invJ[3] = (b_Jw1 * 4.0 + term1) / term2;
  invJ_tmp = (real_T)diffDir / 2.0 * b_Ndiff;
  diffDir_p[0] = invJ_tmp;
  diffDir_p[2] = -1.0;
  diffDir_p[4] = 0.0;
  diffDir_p[6] = Nl / 2.0;
  diffDir_p[8] = -Nr / 2.0;
  diffDir_p[1] = invJ_tmp;
  diffDir_p[3] = 0.0;
  diffDir_p[5] = -1.0;
  diffDir_p[7] = Nl / 2.0 + -1.0;
  diffDir_p[9] = Nr / 2.0 + 1.0;
  term1 = b_Ndiff * b_bd;
  term2 = -(term1 + b_bw1);
  b_bw1_idx_1 = -(b_Ndiff * b_bd);
  b_bw1_idx_3 = -(term1 + b_bw2);
  diffDir_e[0] = invJ_tmp;
  diffDir_e[5] = invJ_tmp;
  for (diffDir = 0; diffDir < 2; diffDir++) {
    for (i = 0; i < 5; i++) {
      invJ_tmp_tmp = i << 1;
      invJ_tmp_p = diffDir + invJ_tmp_tmp;
      invJ_p[invJ_tmp_p] = 0.0;
      invJ_p[invJ_tmp_p] += diffDir_p[invJ_tmp_tmp] * invJ[diffDir];
      invJ_p[invJ_tmp_p] += diffDir_p[invJ_tmp_tmp + 1] * invJ[diffDir + 2];
    }

    invJ_e[diffDir] = 0.0;
    invJ_e[diffDir] += invJ[diffDir] * term2;
    invJ_tmp = invJ[diffDir + 2];
    invJ_e[diffDir] += invJ_tmp * b_bw1_idx_1;
    invJ_e[diffDir + 2] = 0.0;
    invJ_e[diffDir + 2] += invJ[diffDir] * -term1;
    invJ_e[diffDir + 2] += invJ_tmp * b_bw1_idx_3;
    invJ_i[diffDir] = 0.0;
    for (i = 0; i < 5; i++) {
      invJ_i[diffDir] += invJ_p[(i << 1) + diffDir] * u[i];
    }

    invJ_m[diffDir] = 0.0;
    invJ_m[diffDir] += invJ_e[diffDir] * x[0];
    invJ_m[diffDir] += invJ_e[diffDir + 2] * x[1];
    xdot[diffDir] = invJ_i[diffDir] + invJ_m[diffDir];
    diffDir_e[5 * diffDir + 1] = (real_T)diffDir + -1.0;
    diffDir_e[5 * diffDir + 2] = 0.0 - (real_T)diffDir;
  }

  diffDir_e[3] = -Nl / 2.0;
  diffDir_e[8] = 1.0 - Nl / 2.0;
  diffDir_e[4] = Nr / 2.0;
  diffDir_e[9] = Nr / 2.0 + -1.0;
  for (diffDir = 0; diffDir < 5; diffDir++) {
    tmp[diffDir] = 0.0;
    for (i = 0; i < 5; i++) {
      tmp[diffDir] += 0.0 * u[i];
    }

    y[diffDir] = (diffDir_e[diffDir + 5] * x[1] + diffDir_e[diffDir] * x[0]) +
      tmp[diffDir];
  }
}

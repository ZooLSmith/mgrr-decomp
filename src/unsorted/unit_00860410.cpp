// src/unsorted/unit_00860410.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00860410..008604E0, 2 functions

#include "types.h"

// 00860410  FUN_00860410  size=202  [run]
undefined4 FUN_00860410(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *param_2 - *param_4;
  fVar2 = param_2[1] - param_4[1];
  fVar3 = param_2[2] - param_4[2];
  fVar1 = param_3[2] * fVar3 + *param_3 * fVar7 + param_3[1] * fVar2;
  fVar7 = (fVar3 * fVar3 + fVar7 * fVar7 + fVar2 * fVar2) - param_5 * param_5;
  if ((fVar7 <= 0.0) || (fVar1 <= 0.0)) {
    fVar7 = fVar1 * fVar1 - fVar7;
    if (0.0 <= fVar7) {
      fVar7 = -fVar1 - SQRT(fVar7);
      if (fVar7 < 0.0) {
        fVar7 = 0.0;
      }
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      fVar3 = param_3[3];
      fVar4 = param_2[1];
      fVar5 = param_2[2];
      fVar6 = param_2[3];
      *param_1 = *param_2 + *param_3 * fVar7;
      param_1[1] = fVar4 + fVar1 * fVar7;
      param_1[2] = fVar2 * fVar7 + fVar5;
      param_1[3] = fVar6 + fVar3 * fVar7;
      return 1;
    }
  }
  return 0;
}

// 008604E0  FUN_008604e0  size=142  [run]
undefined4 FUN_008604e0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1 - *param_3;
  fVar3 = param_1[1] - param_3[1];
  fVar4 = param_1[2] - param_3[2];
  fVar2 = (fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1) - param_4 * param_4;
  if (fVar2 <= 0.0) {
    return 1;
  }
  fVar1 = param_2[1] * fVar3 + *param_2 * fVar1 + param_2[2] * fVar4;
  if ((fVar1 <= 0.0) && (0.0 <= fVar1 * fVar1 - fVar2)) {
    return 1;
  }
  return 0;
}


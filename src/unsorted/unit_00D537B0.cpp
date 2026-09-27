// src/unsorted/unit_00D537B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D537B0..00D537B0, 1 functions

#include "mgrr.h"

// 00D537B0  FUN_00d537b0  size=959  [run]
void FUN_00d537b0(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((((*param_2 != 0.0) || (param_2[1] != 0.0)) || (param_2[2] != 0.0)) &&
     ((((*param_3 != 0.0 || (param_3[1] != 0.0)) || (param_3[2] != 0.0)) &&
      (((*param_3 != *param_2 || (param_3[1] != param_2[1])) ||
       ((param_3[2] != param_2[2] || (param_3[3] != param_2[3])))))))) {
    fVar1 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_20,param_2);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
      local_18 = 0.0;
    }
    fVar1 = param_3[1] * param_3[1] + *param_3 * *param_3 + param_3[2] * param_3[2];
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_30,param_3);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
    }
    fVar4 = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]);
    fVar1 = param_3[1];
    fVar2 = *param_3;
    fVar3 = param_3[2];
    fVar5 = (float10)FUN_00fdc4e0();
    if ((float10)0 != fVar5) {
      fVar6 = (float10)fsin(fVar5);
      fVar7 = (float10)fsin(((float10)1 - (float10)param_4) * fVar5);
      fVar5 = (float10)fsin(fVar5 * (float10)param_4);
      fVar8 = (float10)local_20;
      local_20 = (float)(fVar8 * fVar7);
      fVar9 = (float10)local_1c;
      local_1c = (float)(fVar9 * fVar7);
      fVar10 = (float10)local_18;
      local_18 = (float)(fVar10 * fVar7);
      fVar11 = (float10)local_14;
      local_14 = (float)(fVar11 * fVar7);
      fVar12 = (float10)local_30;
      local_30 = (float)(fVar12 * fVar5);
      local_2c = (float)((float10)local_2c * fVar5);
      local_28 = (float)((float10)local_28 * fVar5);
      fVar13 = (float10)local_24;
      local_24 = (float)(fVar13 * fVar5);
      fVar8 = (fVar12 * fVar5 + fVar8 * fVar7) / fVar6;
      *param_1 = (float)fVar8;
      fVar9 = (fVar9 * fVar7 + (float10)local_2c) / fVar6;
      param_1[1] = (float)fVar9;
      fVar10 = ((float10)local_28 + fVar10 * fVar7) / fVar6;
      param_1[2] = (float)fVar10;
      param_1[3] = (float)((fVar13 * fVar5 + fVar11 * fVar7) / fVar6);
      fVar5 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
      if (fVar5 < (float10)(float)(undefined *)0x0 == (fVar5 == (float10)(float)(undefined *)0x0)) {
        FUN_00ddf460(param_1,param_1);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *param_1 = 0.0;
        param_1[1] = 1.0;
        param_1[2] = 0.0;
      }
      fVar4 = (SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) - fVar4) * param_4 + fVar4;
      *param_1 = *param_1 * fVar4;
      param_1[1] = fVar4 * param_1[1];
      param_1[2] = param_1[2] * fVar4;
      param_1[3] = fVar4 * param_1[3];
      return;
    }
  }
  return;
}


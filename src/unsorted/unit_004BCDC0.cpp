// src/unsorted/unit_004BCDC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004BCDC0..004BCE00, 2 functions

#include "mgrr.h"

// 004BCDC0  FUN_004bcdc0  size=63  [run]
float10 __thiscall FUN_004bcdc0(int param_1,float *param_2)

{
  float10 fVar1;
  
  fVar1 = ((float10)*param_2 - (float10)*(float *)(param_1 + 0x10e0)) *
          (float10)*(float *)(param_1 + 0x10f0) +
          (float10)*(float *)(param_1 + 0x10f4) *
          ((float10)param_2[1] - (float10)*(float *)(param_1 + 0x10e4)) +
          (float10)*(float *)(param_1 + 0x10f8) *
          ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x10e8));
  return fVar1 * fVar1;
}

// 004BCE00  FUN_004bce00  size=310  [run]
float10 __thiscall FUN_004bce00(int param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar2 = (float10)0;
  fVar3 = (float10)*(float *)(param_1 + 0x10f4) * fVar2;
  fVar1 = fVar3 - (float10)*(float *)(param_1 + 0x10f8);
  local_20 = (float)fVar1;
  fVar4 = (float10)*(float *)(param_1 + 0x10f8) * fVar2 -
          (float10)*(float *)(param_1 + 0x10f0) * fVar2;
  local_1c = (float)fVar4;
  fVar3 = (float10)*(float *)(param_1 + 0x10f0) - fVar3;
  local_18 = (float)fVar3;
  if (((fVar2 == fVar1) && (fVar2 == fVar4)) && (fVar2 == fVar3)) {
    return fVar2;
  }
  fVar1 = fVar3 * fVar3 + fVar1 * fVar1 + fVar4 * fVar4;
  if (fVar1 < fVar2 == (fVar1 == fVar2)) {
    FUN_00ddf460(&local_20,&local_20);
    fVar2 = (float10)local_1c;
    fVar1 = (float10)local_20;
    fVar3 = (float10)local_18;
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fVar1 = (float10)0;
    fVar2 = (float10)1;
    fVar3 = fVar1;
  }
  return ((float10)param_2[1] - (float10)*(float *)(param_1 + 0x44)) * fVar2 +
         ((float10)*param_2 - (float10)*(float *)(param_1 + 0x40)) * fVar1 +
         ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x48)) * fVar3;
}


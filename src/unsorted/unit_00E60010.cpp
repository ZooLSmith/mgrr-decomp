// src/unsorted/unit_00E60010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E60010..00E60140, 2 functions

#include "types.h"

// 00E60010  FUN_00e60010  size=91  [run]
void FUN_00e60010(void)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00e5c9a0();
  puVar1 = (undefined4 *)FUN_00e9fe70();
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  DAT_01dd9528 = FUN_00932860(&local_20);
  FUN_00e4aab0();
  FUN_00e5e270();
  FUN_00e5fc60();
  FUN_00e5ff50();
  FUN_009ca910();
  return;
}

// 00E60140  FUN_00e60140  size=87  [run]
void FUN_00e60140(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2[2];
  fVar2 = *param_3;
  fVar3 = *param_2;
  fVar4 = param_3[2];
  fVar5 = param_3[1];
  fVar6 = *param_2;
  fVar7 = *param_3;
  fVar8 = param_2[1];
  *param_1 = param_2[1] * param_3[2] - param_2[2] * param_3[1];
  param_1[1] = fVar1 * fVar2 - fVar3 * fVar4;
  param_1[2] = fVar5 * fVar6 - fVar7 * fVar8;
  return;
}


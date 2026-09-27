// src/unsorted/unit_009CC5A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CC5A0..009CC970, 4 functions

#include "types.h"

// 009CC5A0  FUN_009cc5a0  size=40  [run]
int FUN_009cc5a0(short param_1)

{
  if ((ushort)(param_1 + 0xdU) < 10) {
    return -4 - param_1;
  }
  FUN_00dd5650(&DAT_01659438);
  return 0;
}

// 009CC6E0  FUN_009cc6e0  size=87  [run]
void FUN_009cc6e0(float *param_1,float *param_2,float *param_3)

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
  fVar3 = param_3[2];
  fVar4 = *param_2;
  fVar5 = *param_2;
  fVar6 = param_3[1];
  fVar7 = *param_3;
  fVar8 = param_2[1];
  *param_1 = param_3[2] * param_2[1] - param_2[2] * param_3[1];
  param_1[1] = fVar1 * fVar2 - fVar3 * fVar4;
  param_1[2] = fVar5 * fVar6 - fVar7 * fVar8;
  return;
}

// 009CC8A0  FUN_009cc8a0  size=72  [run]
void FUN_009cc8a0(undefined4 param_1)

{
  undefined8 uVar1;
  undefined3 local_8;
  undefined1 uStack_5;
  undefined4 local_4;
  
  uVar1 = FUN_00fddccc(param_1,1000);
  local_4 = *(undefined4 *)(&DAT_016d4768 + (int)uVar1 * 4);
  _local_8 = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[(int)((ulonglong)uVar1 >> 0x20)]);
  FUN_00de3d80(0,&local_8);
  return;
}

// 009CC970  FUN_009cc970  size=72  [run]
void FUN_009cc970(undefined4 param_1)

{
  undefined8 uVar1;
  undefined3 local_8;
  undefined1 uStack_5;
  undefined4 local_4;
  
  uVar1 = FUN_00fddccc(param_1,1000);
  local_4 = *(undefined4 *)(&DAT_016d4768 + (int)uVar1 * 4);
  _local_8 = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[(int)((ulonglong)uVar1 >> 0x20)]);
  FUN_00de3d80(0,&local_8);
  return;
}


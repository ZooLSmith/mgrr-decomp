// src/unsorted/unit_00EE00E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EE00E0..00EE0480, 4 functions

#include "mgrr.h"

// 00EE00E0  FUN_00ee00e0  size=288  [run]
void __thiscall FUN_00ee00e0(int param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  pfVar1 = (float *)FUN_00e9feb0();
  pfVar2 = (float *)FUN_00e9fe70();
  *param_2 = *pfVar2 - *(float *)(param_1 + 400);
  param_2[1] = pfVar2[1] - *(float *)(param_1 + 0x194);
  param_2[2] = pfVar2[2] - *(float *)(param_1 + 0x198);
  param_2[3] = pfVar2[3] - *(float *)(param_1 + 0x19c);
  if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
    *param_2 = *pfVar2 - *pfVar1;
    param_2[1] = pfVar2[1] - pfVar1[1];
    param_2[2] = pfVar2[2] - pfVar1[2];
    param_2[3] = pfVar2[3] - pfVar1[3];
    if (param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1] <= 0.0) {
      FUN_00dd5650(&DAT_0163d0ac);
      *param_2 = 0.0;
      param_2[1] = 1.0;
      param_2[2] = 0.0;
      return;
    }
  }
  FUN_00ddf460(param_2,param_2);
  return;
}

// 00EE0200  FUN_00ee0200  size=278  [run]
void __thiscall FUN_00ee0200(int param_1,float *param_2)

{
  float fVar1;
  uint *puVar2;
  undefined4 uVar3;
  float *pfVar4;
  uint uVar5;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 == (uint *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar2;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar3 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  fVar1 = *(float *)(uVar5 + 8);
  pfVar4 = (float *)FUN_00e9fe70();
  if (fVar1 != 0.0) {
    *param_2 = *pfVar4 - *(float *)(param_1 + 400);
    param_2[1] = pfVar4[1] - *(float *)(param_1 + 0x194);
    param_2[2] = pfVar4[2] - *(float *)(param_1 + 0x198);
    param_2[3] = pfVar4[3] - *(float *)(param_1 + 0x19c);
    if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
      *param_2 = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      param_2[3] = 1.0;
      return;
    }
    FUN_00ddf460(param_2,param_2);
    *param_2 = fVar1 * *param_2;
    param_2[1] = param_2[1] * fVar1;
    param_2[2] = param_2[2] * fVar1;
    param_2[3] = fVar1 * param_2[3];
    return;
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 1.0;
  return;
}

// 00EE0320  FUN_00ee0320  size=337  [run]
void __thiscall FUN_00ee0320(int param_1,float *param_2)

{
  float fVar1;
  uint *puVar2;
  undefined4 uVar3;
  float *pfVar4;
  uint uVar5;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 == (uint *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar2;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar3 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  fVar1 = *(float *)(uVar5 + 8);
  pfVar4 = (float *)FUN_00e9fe70();
  if (fVar1 != 0.0) {
    local_20 = *pfVar4 - *(float *)(param_1 + 400);
    local_1c = pfVar4[1] - *(float *)(param_1 + 0x194);
    local_18 = pfVar4[2] - *(float *)(param_1 + 0x198);
    local_14 = pfVar4[3] - *(float *)(param_1 + 0x19c);
    if (((local_20 != 0.0) || (local_1c != 0.0)) || (local_18 != 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
      local_20 = fVar1 * local_20;
      local_1c = local_1c * fVar1;
      local_18 = local_18 * fVar1;
      fVar1 = fVar1 * local_14;
      goto LAB_00ee042f;
    }
  }
  local_20 = 0.0;
  local_1c = 0.0;
  local_18 = 0.0;
  fVar1 = 1.0;
LAB_00ee042f:
  *param_2 = *(float *)(param_1 + 400) + local_20;
  param_2[1] = *(float *)(param_1 + 0x194) + local_1c;
  param_2[2] = *(float *)(param_1 + 0x198) + local_18;
  param_2[3] = *(float *)(param_1 + 0x19c) + fVar1;
  return;
}

// 00EE0480  FUN_00ee0480  size=23  [run]
undefined4 FUN_00ee0480(uint param_1)

{
  if ((param_1 & 0xd00) == 0) {
    return 0;
  }
  return 1;
}


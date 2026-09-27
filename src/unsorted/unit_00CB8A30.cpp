// src/unsorted/unit_00CB8A30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB8A30..00CB8BF0, 5 functions

#include "mgrr.h"

// 00CB8A30  FUN_00cb8a30  size=36  [run]
undefined4 FUN_00cb8a30(uint param_1)

{
  if (((param_1 & 0xf0000) == 0x20000) && (param_1 != 0x20120)) {
    return 1;
  }
  return 0;
}

// 00CB8A60  FUN_00cb8a60  size=112  [run]
undefined4 * FUN_00cb8a60(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == 0x20140) {
    local_20 = 0;
    local_1c = 0x3e8ccccd;
    local_18 = 0x3d03126f;
    local_14 = 0x3f800000;
    D3DXVec4Transform(param_1,&local_20,param_3);
    return param_1;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x34);
  uVar2 = *(undefined4 *)(param_3 + 0x38);
  *param_1 = *(undefined4 *)(param_3 + 0x30);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  return param_1;
}

// 00CB8AD0  FUN_00cb8ad0  size=87  [run]
void __thiscall FUN_00cb8ad0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x58) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x58) * 0x400 + 0x2a0 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    uVar1 = *(undefined4 *)(iVar3 + 0x94);
    uVar2 = *(undefined4 *)(iVar3 + 0x98);
    *param_2 = *(undefined4 *)(iVar3 + 0x90);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

// 00CB8B30  FUN_00cb8b30  size=184  [run]
float10 __thiscall FUN_00cb8b30(int param_1,uint param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  float local_10;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 8) {
      local_10 = (float)piVar1[1];
      goto LAB_00cb8b82;
    }
  }
  local_10 = 0.0;
LAB_00cb8b82:
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 8) {
      return ((float10)(float)piVar1[3] + (float10)(float)piVar1[3] + (float10)param_3) /
             (float10)local_10;
    }
  }
  return ((float10)0 + (float10)0 + (float10)param_3) / (float10)local_10;
}

// 00CB8BF0  FUN_00cb8bf0  size=109  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cb8bf0(float param_1,undefined4 param_2)

{
  int *piVar1;
  
  DAT_01dc0dd8 = 1;
  if ((param_1 != _DAT_01dc0ddc) && (param_1 < _DAT_01dc0ddc)) {
    DAT_01dc0de4 = DAT_01dc0de4 + 1;
    piVar1 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar1 + 0x2c))();
    _DAT_01dc0ddc = param_1;
    _DAT_01dc0de0 = param_2;
    return;
  }
  _DAT_01dc0ddc = param_1;
  _DAT_01dc0de0 = param_2;
  return;
}


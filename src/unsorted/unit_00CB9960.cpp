// src/unsorted/unit_00CB9960.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB9960..00CB9AB0, 3 functions

#include "types.h"

// 00CB9960  FUN_00cb9960  size=182  [run]
undefined4 * FUN_00cb9960(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_2 == 0x20140) {
    local_20 = 0;
    local_1c = 0x3e1fbe77;
    local_18 = 0x3d03126f;
    local_14 = 0x3f800000;
    D3DXVec4Transform(param_1,&local_20,param_3);
    return param_1;
  }
  if (param_2 == 0x20600) {
    local_20 = 0;
    local_1c = 0x40000000;
    local_18 = 0x41000000;
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

// 00CB9A20  FUN_00cb9a20  size=129  [run]
undefined4 * FUN_00cb9a20(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((param_2 != 0x20080) && (param_2 != 0x20081)) {
    puVar1 = (undefined4 *)FUN_00cb9960(&local_20,param_2,param_3);
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    param_1[3] = puVar1[3];
    return param_1;
  }
  local_20 = 0;
  local_1c = 0x3fa66666;
  local_18 = 0;
  local_14 = 0x3f800000;
  D3DXVec4Transform(param_1,&local_20,param_3);
  return param_1;
}

// 00CB9AB0  FUN_00cb9ab0  size=114  [run]
undefined4 __thiscall FUN_00cb9ab0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4 + param_2 * 4);
  uVar2 = 0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x68) == 0)) {
    uVar2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x54 + param_2 * 4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x68) == 0)) {
    uVar2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0xa4 + param_2 * 4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x68) == 0)) {
    uVar2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0xf4 + param_2 * 4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 100) == 0)) {
    uVar2 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x144 + param_2 * 4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x68) == 0)) {
    uVar2 = 1;
  }
  return uVar2;
}


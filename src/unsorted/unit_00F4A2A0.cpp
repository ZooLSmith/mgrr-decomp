// src/unsorted/unit_00F4A2A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4A2A0..00F4A450, 4 functions

#include "types.h"

// 00F4A2A0  FUN_00f4a2a0  size=48  [run]
undefined4 __thiscall FUN_00f4a2a0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  *param_3 = 0;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 4) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x28);
  }
  *param_3 = iVar1;
  return 1;
}

// 00F4A2D0  FUN_00f4a2d0  size=51  [run]
undefined4 __thiscall FUN_00f4a2d0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *param_3 = 0;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 4) == param_2) break;
    iVar1 = *(int *)(iVar1 + 0xa4);
  }
  *param_3 = iVar1;
  return 1;
}

// 00F4A3F0  FUN_00f4a3f0  size=80  [run]
undefined4 FUN_00f4a3f0(uint *param_1,uint param_2)

{
  uint uVar1;
  
  if (0xfffff < param_2 + 0xe0000000) {
    return 0;
  }
  uVar1 = (int)param_2 >> 0x10 & 0xf;
  *param_1 = uVar1;
  param_1[1] = param_2 & 0xffff;
  if (uVar1 == 1) {
    uVar1 = FUN_00932710();
    param_1[2] = uVar1;
  }
  else if (uVar1 == 2) {
    uVar1 = FUN_00932720();
    param_1[2] = uVar1;
    return 1;
  }
  return 1;
}

// 00F4A450  FUN_00f4a450  size=67  [run]
void __fastcall FUN_00f4a450(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0x40) == 0) && (uVar1 = *(uint *)(param_1 + 8), 0xffff < uVar1)) &&
      (0xfffff < uVar1 + 0xe0000000)) &&
     ((uVar1 != 0xffffffff && (iVar2 = FUN_00e9e810(uVar1), iVar2 != 0)))) {
    FUN_00e9e9d0(uVar1);
  }
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  return;
}


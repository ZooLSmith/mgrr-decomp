// src/unsorted/unit_00C55040.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C55040..00C55200, 6 functions

#include "types.h"

// 00C55040  FUN_00c55040  size=63  [run]
void __fastcall FUN_00c55040(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 8) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00C55080  FUN_00c55080  size=103  [run]
void __thiscall FUN_00c55080(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x90);
  }
  puVar1 = (undefined4 *)(param_1[1] * 0x90 + *param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    FUN_008a50c0(param_2 + 4);
    puVar1[0x20] = param_2[0x20];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 00C550F0  FUN_00c550f0  size=74  [run]
void __thiscall FUN_00c550f0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 00C55140  FUN_00c55140  size=98  [run]
void __thiscall FUN_00c55140(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= param_2) {
      iVar1 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar1,0xc);
  }
  iVar1 = param_2 - param_1[1];
  puVar2 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar1) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[1] = 0;
        *puVar2 = 0;
        puVar2[2] = 0;
      }
      puVar2 = puVar2 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 00C551B0  FUN_00c551b0  size=75  [run]
void __thiscall FUN_00c551b0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
  }
  puVar1 = (undefined4 *)(param_1[1] * 0x10 + *param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 00C55200  FUN_00c55200  size=104  [run]
void __thiscall FUN_00c55200(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x10);
  }
  iVar2 = param_2 - param_1[1];
  if (0 < iVar2) {
    puVar1 = (undefined4 *)(param_1[1] * 0x10 + *param_1 + 8);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000008) {
        *puVar1 = 0;
        puVar1[-2] = 0;
        puVar1[1] = 0;
        puVar1[-1] = 0;
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_2;
  return;
}


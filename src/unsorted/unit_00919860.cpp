// src/unsorted/unit_00919860.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00919860..00919D20, 7 functions

#include "mgrr.h"

// 00919860  FUN_00919860  size=61  [run]
void __thiscall FUN_00919860(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(*param_2 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 009198A0  FUN_009198a0  size=86  [run]
void __thiscall FUN_009198a0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x14);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
    puVar1[4] = param_3[4];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 00919900  FUN_00919900  size=61  [run]
void __fastcall FUN_00919900(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00919940  FUN_00919940  size=21  [run]
undefined4 * __fastcall FUN_00919940(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00919A10  FUN_00919a10  size=58  [run]
void __thiscall FUN_00919a10(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00919CE0  FUN_00919ce0  size=49  [run]
int __fastcall FUN_00919ce0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x30);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x30 + *param_1;
}

// 00919D20  FUN_00919d20  size=57  [run]
void __thiscall FUN_00919d20(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}


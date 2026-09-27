// src/unsorted/unit_0096B350.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0096B350..0096B480, 4 functions

#include "mgrr.h"

// 0096B350  FUN_0096b350  size=97  [run]
void __fastcall FUN_0096b350(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_00905ce0();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0096B3C0  FUN_0096b3c0  size=65  [run]
void __fastcall FUN_0096b3c0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 0096B410  FUN_0096b410  size=93  [run]
undefined4 __thiscall FUN_0096b410(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc + 0xc,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0xc + iVar1;
  FUN_00969cc0();
  return 1;
}

// 0096B480  FUN_0096b480  size=63  [run]
void __fastcall FUN_0096b480(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x130);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}


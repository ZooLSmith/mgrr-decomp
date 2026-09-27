// src/unsorted/unit_00F9C5F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9C5F0..00F9C7D0, 6 functions

#include "types.h"

// 00F9C5F0  FUN_00f9c5f0  size=94  [run]
void FUN_00f9c5f0(int param_1)

{
  if (DAT_01f206d4 != (int *)0x0) {
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xcf,*(undefined4 *)(param_1 + 0x44));
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xd0,*(undefined4 *)(param_1 + 0x48));
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xd1,*(undefined4 *)(param_1 + 0x4c));
      }
    }
  }
  return;
}

// 00F9C670  FUN_00f9c670  size=91  [run]
void FUN_00f9c670(undefined4 param_1)

{
  int *piVar1;
  
  if (DAT_01f206d4 != (int *)0x0) {
    piVar1 = DAT_01f206d4;
    (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xbe,param_1);
    if (DAT_01f206d4 != (int *)0x0) {
      (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xbf,param_1);
      if (DAT_01f206d4 != (int *)0x0) {
        (**(code **)(*DAT_01f206d4 + 0xe4))(DAT_01f206d4,0xc0,piVar1);
      }
    }
  }
  return;
}

// 00F9C6F0  FUN_00f9c6f0  size=44  [run]
bool FUN_00f9c6f0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (DAT_01f206d4 == (int *)0x0) {
    return false;
  }
  iVar1 = (**(code **)(*DAT_01f206d4 + 0x104))(DAT_01f206d4,param_1,*(undefined4 *)(param_2 + 4));
  return -1 < iVar1;
}

// 00F9C750  FUN_00f9c750  size=53  [run]
void FUN_00f9c750(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  FUN_00f997c0(param_1,uVar1 >> 0xc & 0xf,uVar1 >> 0x10 & 0xf,uVar1 >> 0x14 & 0xf,uVar1 >> 0x1f);
  return;
}

// 00F9C7B0  FUN_00f9c7b0  size=28  [run]
void __fastcall FUN_00f9c7b0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0;
  return;
}

// 00F9C7D0  FUN_00f9c7d0  size=28  [run]
undefined4 __thiscall FUN_00f9c7d0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    return 0;
  }
  uVar1 = cIndexBufferHeap::allocateBuffer(param_1,param_2);
  return uVar1;
}


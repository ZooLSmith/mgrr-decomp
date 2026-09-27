// src/unsorted/unit_00A8B070.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8B070..00A8B590, 7 functions

#include "types.h"

// 00A8B070  FUN_00a8b070  size=59  [run]
void FUN_00a8b070(void)

{
  if (DAT_01be9bf4 != (int *)0x0) {
    (**(code **)(*DAT_01be9bf4 + 0x14))(1);
    DAT_01be9bf4 = (int *)0x0;
  }
  if (DAT_01be9bf0 != (int *)0x0) {
    (**(code **)(*DAT_01be9bf0 + 0x14))(1);
    DAT_01be9bf0 = (int *)0x0;
  }
  return;
}

// 00A8B0B0  FUN_00a8b0b0  size=6  [run]
undefined4 FUN_00a8b0b0(void)

{
  return DAT_01be9bf4;
}

// 00A8B0F0  FUN_00a8b0f0  size=152  [run]
undefined4 * __thiscall
FUN_00a8b0f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c940(uVar1);
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c940(uVar1);
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[0x10] = 0;
  if (param_4 != 0) {
    if (param_6 == -1) {
      iVar2 = FUN_00a7c800();
    }
    else {
      FUN_00a7c800(param_6);
      iVar2 = FUN_00a12210(param_6);
      if (iVar2 == 0) goto LAB_00a8b167;
    }
    *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 4;
  }
LAB_00a8b167:
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}

// 00A8B210  FUN_00a8b210  size=119  [run]
int __fastcall FUN_00a8b210(int param_1)

{
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x14) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x40490fdb;
  *(undefined4 *)(param_1 + 0x40) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x44) = 0x3ecccccd;
  return param_1;
}

// 00A8B3B0  FUN_00a8b3b0  size=31  [run]
void FUN_00a8b3b0(void)

{
  FUN_00c730c0();
  FUN_00905ce0();
  FUN_00905ce0();
  return;
}

// 00A8B510  FUN_00a8b510  size=45  [run]
void __fastcall FUN_00a8b510(undefined2 *param_1)

{
  param_1[1] = 0xffff;
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 5) = 0xffffffff;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 10) = 1;
  return;
}

// 00A8B590  FUN_00a8b590  size=35  [run]
void FUN_00a8b590(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return;
  }
  FUN_00a81330();
  FUN_00a7c8a0();
  return;
}


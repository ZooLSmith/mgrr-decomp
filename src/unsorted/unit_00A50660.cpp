// src/unsorted/unit_00A50660.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A50660..00A50A50, 6 functions

#include "types.h"

// 00A50660  FUN_00a50660  size=98  [run]
void __fastcall FUN_00a50660(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c1d6d0();
  if ((iVar1 == 0) && ((DAT_01be8e48 >> 1 & 1) != 0)) {
    FUN_00a4b080();
  }
  else {
    FUN_00a0da20();
    FUN_00a15e90(5,0);
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_00a4ed40();
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00cf72d0();
    return;
  }
  return;
}

// 00A50830  FUN_00a50830  size=149  [run]
void __fastcall FUN_00a50830(int param_1)

{
  FUN_00a4b560();
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    if (*(int *)(param_1 + 0x34) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x34),0);
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x30);
  }
  return;
}

// 00A508D0  FUN_00a508d0  size=65  [run]
void __fastcall FUN_00a508d0(undefined4 *param_1)

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

// 00A50920  FUN_00a50920  size=91  [run]
undefined4 __thiscall FUN_00a50920(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x10 + 0x10,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0x10 + iVar1;
  FUN_00a4f9b0();
  return 1;
}

// 00A50A00  FUN_00a50a00  size=65  [run]
void __fastcall FUN_00a50a00(undefined4 *param_1)

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

// 00A50A50  FUN_00a50a50  size=91  [run]
undefined4 __thiscall FUN_00a50a50(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x10 + 0x10,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 0x18) = param_2 * 0x10 + iVar1;
  FUN_00a4fa60();
  return 1;
}


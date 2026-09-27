// src/unsorted/unit_00D771D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D771D0..00D77270, 6 functions

#include "types.h"

// 00D771D0  FUN_00d771d0  size=13  [run]
void __thiscall FUN_00d771d0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x390) = param_2;
  return;
}

// 00D771E0  FUN_00d771e0  size=7  [run]
undefined4 __fastcall FUN_00d771e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x390);
}

// 00D77200  FUN_00d77200  size=7  [run]
void __fastcall FUN_00d77200(int param_1)

{
  *(int *)(param_1 + 0x350) = *(int *)(param_1 + 0x350) + 1;
  return;
}

// 00D77210  FUN_00d77210  size=64  [run]
void __fastcall FUN_00d77210(int param_1)

{
  if (*(int *)(param_1 + 0x428) != -1) {
    FUN_009fe7d0(*(int *)(param_1 + 0x428),*(undefined4 *)(param_1 + 0x42c));
  }
  *(undefined4 *)(param_1 + 0x428) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x42c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x430) = 0;
  return;
}

// 00D77250  FUN_00d77250  size=23  [run]
void __thiscall FUN_00d77250(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x414) = param_3;
  *(undefined4 *)(param_1 + 0x410) = param_2;
  return;
}

// 00D77270  FUN_00d77270  size=30  [run]
bool __thiscall FUN_00d77270(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x410) == -1) {
    return false;
  }
  return *(int *)(param_1 + 0x410) != param_2;
}


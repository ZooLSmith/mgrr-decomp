// src/unsorted/unit_00603EF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00603EF0..00603F10, 2 functions

#include "types.h"

// 00603EF0  FUN_00603ef0  size=20  [run]
void __fastcall FUN_00603ef0(int *param_1)

{
  FUN_00aa92c0(5);
                    /* WARNING: Could not recover jumptable at 0x00603f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}

// 00603F10  FUN_00603f10  size=20  [run]
void __fastcall FUN_00603f10(int param_1)

{
  *(undefined4 *)(param_1 + 0xb40) = 0x41f00000;
  FUN_00aa92c0(6);
  return;
}


// src/unsorted/unit_00994270.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00994270..009942E0, 3 functions

#include "types.h"

// 00994270  FUN_00994270  size=28  [run]
void __fastcall FUN_00994270(int param_1)

{
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 1;
  FUN_00cb2740(0);
  return;
}

// 009942C0  FUN_009942c0  size=28  [run]
void __fastcall FUN_009942c0(int param_1)

{
  *(undefined4 *)(param_1 + 0xb0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xac) = 1;
  FUN_00cb2740(0x3f800000);
  return;
}

// 009942E0  FUN_009942e0  size=33  [run]
undefined4 __fastcall FUN_009942e0(int param_1)

{
  if ((*(int *)(param_1 + 0xac) == 0) && (*(float *)(param_1 + 0xb0) <= 0.0)) {
    return 1;
  }
  return 0;
}


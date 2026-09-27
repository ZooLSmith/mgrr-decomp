// src/unsorted/unit_009F87D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F87D0..009F87D0, 1 functions

#include "types.h"

// 009F87D0  FUN_009f87d0  size=62  [run]
void __thiscall FUN_009f87d0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x8c0) = 1;
  *(undefined4 *)(param_1 + 0x8b0) = *param_2;
  *(undefined4 *)(param_1 + 0x8b4) = param_2[1];
  *(undefined4 *)(param_1 + 0x8b8) = param_2[2];
  *(undefined4 *)(param_1 + 0x8bc) = param_2[3];
  FUN_00a93090();
  return;
}


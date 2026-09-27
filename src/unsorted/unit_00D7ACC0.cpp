// src/unsorted/unit_00D7ACC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D7ACC0..00D7ACC0, 1 functions

#include "types.h"

// 00D7ACC0  FUN_00d7acc0  size=79  [run]
void __fastcall FUN_00d7acc0(int param_1)

{
  if (*(int *)(param_1 + 0x358) != 0) {
    (**(code **)(*DAT_01dc52e4 + 4))(*(int *)(param_1 + 0x358));
    *(undefined4 *)(param_1 + 0x35c) = 0;
    *(undefined4 *)(param_1 + 0x41c) = 0;
    if (*(int *)(param_1 + 0x37c) != 0) {
      FUN_00900a90(0x1f);
    }
    *(undefined4 *)(param_1 + 0x358) = 0;
  }
  return;
}


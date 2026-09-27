// src/unsorted/unit_00CC34A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC34A0..00CC34A0, 1 functions

#include "mgrr.h"

// 00CC34A0  FUN_00cc34a0  size=79  [run]
void __fastcall FUN_00cc34a0(int param_1)

{
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_00e9d6a0(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined1 *)(param_1 + 0x55) = 0;
  return;
}


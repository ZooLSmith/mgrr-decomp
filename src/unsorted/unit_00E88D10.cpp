// src/unsorted/unit_00E88D10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E88D10..00E88D80, 2 functions

#include "mgrr.h"

// 00E88D10  FUN_00e88d10  size=71  [run]
void __fastcall FUN_00e88d10(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x24),0);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E88D80  FUN_00e88d80  size=43  [run]
void __fastcall FUN_00e88d80(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


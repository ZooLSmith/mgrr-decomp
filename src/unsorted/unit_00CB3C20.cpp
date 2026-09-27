// src/unsorted/unit_00CB3C20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB3C20..00CB3C20, 1 functions

#include "mgrr.h"

// 00CB3C20  FUN_00cb3c20  size=71  [run]
void __fastcall FUN_00cb3c20(int param_1)

{
  if (*(int *)(param_1 + 0x114) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x114));
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x10c) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x10c));
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  return;
}


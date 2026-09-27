// src/unsorted/unit_00420B40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00420B40..00420B40, 1 functions

#include "mgrr.h"

// 00420B40  FUN_00420b40  size=63  [run]
void __fastcall FUN_00420b40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}


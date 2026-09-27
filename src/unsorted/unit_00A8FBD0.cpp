// src/unsorted/unit_00A8FBD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8FBD0..00A8FBD0, 1 functions

#include "mgrr.h"

// 00A8FBD0  FUN_00a8fbd0  size=67  [run]
void __fastcall FUN_00a8fbd0(int *param_1)

{
  (**(code **)(*param_1 + 0x218))();
  if ((param_1[0x1cd] < 1) && (0 < param_1[0x1cc])) {
    param_1[0x1cc] = param_1[0x1cc] + -1;
  }
  if ((param_1[499] != 0) && (param_1[500] != 0)) {
    FUN_00d82990(param_1[500]);
  }
  return;
}


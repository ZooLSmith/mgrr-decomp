// src/unsorted/unit_00E677E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E677E0..00E677E0, 1 functions

#include "types.h"

// 00E677E0  FUN_00e677e0  size=82  [run]
int __thiscall FUN_00e677e0(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00e66870();
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


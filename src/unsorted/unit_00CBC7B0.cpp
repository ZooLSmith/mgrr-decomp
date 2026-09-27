// src/unsorted/unit_00CBC7B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBC7B0..00CBC7B0, 1 functions

#include "mgrr.h"

// 00CBC7B0  FUN_00cbc7b0  size=118  [run]
void __thiscall FUN_00cbc7b0(int param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x9c) = 1;
  if ((param_2 & 0x4000000) != 0) {
    if ((DAT_01b77e30 == 0) || (DAT_01b77e30 == 1)) {
      param_2 = param_2 ^ 0x4000000 | 0x800000;
    }
    else {
      param_2 = param_2 ^ 0x4000000 | 0x400000;
    }
  }
  if ((param_2 & 0x8000000) != 0) {
    if ((DAT_01b77e30 == 0) || (DAT_01b77e30 == 1)) {
      param_2 = param_2 ^ 0x8000000 | 0x2000000;
    }
    else {
      param_2 = param_2 ^ 0x8000000 | 0x1000000;
    }
  }
  if (*(uint *)(param_1 + 0xa4) == 0) {
    *(uint *)(param_1 + 0xa4) = param_2;
    return;
  }
  if (*(uint *)(param_1 + 0xa4) != param_2) {
    *(uint *)(param_1 + 0xa8) = param_2;
  }
  return;
}


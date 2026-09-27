// src/unsorted/unit_00EA74A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EA74A0..00EA74A0, 1 functions

#include "mgrr.h"

// 00EA74A0  FUN_00ea74a0  size=43  [run]
void __thiscall FUN_00ea74a0(int param_1,undefined4 *param_2)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(code **)(param_1 + 0x1c) != (code *)0x0)) {
    (**(code **)(param_1 + 0x1c))(*(int *)(param_1 + 0x18),param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  return;
}


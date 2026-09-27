// src/unsorted/unit_008FE8F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008FE8F0..008FE940, 2 functions

#include "mgrr.h"

// 008FE8F0  FUN_008fe8f0  size=27  [run]
void __fastcall FUN_008fe8f0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

// 008FE940  FUN_008fe940  size=47  [run]
int __thiscall FUN_008fe940(int param_1,byte param_2)

{
  if (*(undefined4 **)(param_1 + 0x1c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x1c))(1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


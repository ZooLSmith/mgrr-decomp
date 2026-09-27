// src/unsorted/unit_00D8A600.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D8A600..00D8A600, 1 functions

#include "types.h"

// 00D8A600  FUN_00d8a600  size=70  [run]
int __thiscall FUN_00d8a600(int param_1,byte param_2)

{
  FUN_00d89f20();
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  FUN_00dd7270();
  FUN_00dd7270();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


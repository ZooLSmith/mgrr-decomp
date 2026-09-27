// src/unsorted/unit_008DC7B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DC7B0..008DC7E0, 3 functions

#include "types.h"

// 008DC7B0  FUN_008dc7b0  size=6  [run]
undefined4 FUN_008dc7b0(void)

{
  return DAT_01b35d60;
}

// 008DC7C0  FUN_008dc7c0  size=29  [run]
void FUN_008dc7c0(void)

{
  if (DAT_01b35d60 != (undefined4 *)0x0) {
    (**(code **)*DAT_01b35d60)(1);
    DAT_01b35d60 = (undefined4 *)0x0;
  }
  return;
}

// 008DC7E0  FUN_008dc7e0  size=19  [run]
void FUN_008dc7e0(undefined4 param_1)

{
  (**(code **)(*DAT_01b35d60 + 0xc))(param_1);
  return;
}


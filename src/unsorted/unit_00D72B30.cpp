// src/unsorted/unit_00D72B30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D72B30..00D72B40, 2 functions

#include "mgrr.h"

// 00D72B30  FUN_00d72b30  size=6  [run]
undefined4 FUN_00d72b30(void)

{
  return DAT_01dc5264;
}

// 00D72B40  FUN_00d72b40  size=30  [run]
void FUN_00d72b40(void)

{
  if (DAT_01dc5264 != (int *)0x0) {
    (**(code **)(*DAT_01dc5264 + 0xc))(1);
    DAT_01dc5264 = (int *)0x0;
  }
  return;
}


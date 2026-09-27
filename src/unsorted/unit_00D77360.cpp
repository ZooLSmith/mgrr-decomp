// src/unsorted/unit_00D77360.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D77360..00D773C0, 2 functions

#include "mgrr.h"

// 00D77360  FUN_00d77360  size=88  [run]
void FUN_00d77360(void)

{
  if (DAT_01dc52e4 != (int *)0x0) {
    (**(code **)(*DAT_01dc52e4 + 0x10))(1);
    DAT_01dc52e4 = (int *)0x0;
  }
  if (DAT_01dc52e8 != (int *)0x0) {
    (**(code **)(*DAT_01dc52e8 + 4))(1);
    DAT_01dc52e8 = (int *)0x0;
  }
  if (DAT_01dc52ec != (int *)0x0) {
    (**(code **)(*DAT_01dc52ec + 0x24))(1);
    DAT_01dc52ec = (int *)0x0;
  }
  return;
}

// 00D773C0  FUN_00d773c0  size=6  [run]
undefined4 FUN_00d773c0(void)

{
  return DAT_01dc52ec;
}


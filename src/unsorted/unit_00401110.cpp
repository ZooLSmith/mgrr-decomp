// src/unsorted/unit_00401110.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00401110..00401120, 2 functions

#include "types.h"

// 00401110  FUN_00401110  size=6  [run]
undefined4 FUN_00401110(void)

{
  return DAT_01b34b00;
}

// 00401120  FUN_00401120  size=30  [run]
void FUN_00401120(void)

{
  if (DAT_01b34b00 != (int *)0x0) {
    (**(code **)(*DAT_01b34b00 + 0x14))(1);
    DAT_01b34b00 = (int *)0x0;
  }
  return;
}


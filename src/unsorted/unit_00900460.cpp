// src/unsorted/unit_00900460.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00900460..00900480, 2 functions

#include "types.h"

// 00900460  FUN_00900460  size=30  [run]
void FUN_00900460(void)

{
  if (DAT_01b35dd8 != (int *)0x0) {
    (**(code **)(*DAT_01b35dd8 + 0x20))(1);
    DAT_01b35dd8 = (int *)0x0;
  }
  return;
}

// 00900480  FUN_00900480  size=6  [run]
undefined4 FUN_00900480(void)

{
  return DAT_01b35dd8;
}


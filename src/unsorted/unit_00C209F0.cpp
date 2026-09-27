// src/unsorted/unit_00C209F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C209F0..00C20A00, 2 functions

#include "mgrr.h"

// 00C209F0  FUN_00c209f0  size=6  [run]
undefined4 FUN_00c209f0(void)

{
  return DAT_01bea1a8;
}

// 00C20A00  FUN_00c20a00  size=30  [run]
void FUN_00c20a00(void)

{
  if (DAT_01bea1a8 != (int *)0x0) {
    (**(code **)(*DAT_01bea1a8 + 0x1c))(1);
    DAT_01bea1a8 = (int *)0x0;
  }
  return;
}


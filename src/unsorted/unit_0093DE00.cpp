// src/unsorted/unit_0093DE00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093DE00..0093DEC0, 3 functions

#include "mgrr.h"

// 0093DE00  FUN_0093de00  size=28  [run]
void __fastcall FUN_0093de00(int param_1)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))(1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 0093DEB0  FUN_0093deb0  size=6  [run]
undefined4 FUN_0093deb0(void)

{
  return DAT_01b36a50;
}

// 0093DEC0  FUN_0093dec0  size=30  [run]
void FUN_0093dec0(void)

{
  if (DAT_01b36a50 != (int *)0x0) {
    (**(code **)(*DAT_01b36a50 + 0x1c))(1);
    DAT_01b36a50 = (int *)0x0;
  }
  return;
}


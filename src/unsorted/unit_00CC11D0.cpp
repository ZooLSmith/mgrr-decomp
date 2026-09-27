// src/unsorted/unit_00CC11D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC11D0..00CC1250, 2 functions

#include "types.h"

// 00CC11D0  FUN_00cc11d0  size=120  [run]
void FUN_00cc11d0(void)

{
  if (DAT_01dbf7e8 != 0) {
    DAT_01dbf7e8 = 0;
  }
  if (DAT_01dbf7ec != 0) {
    DAT_01dbf7ec = 0;
  }
  if (DAT_01dbf7f0 != 0) {
    DAT_01dbf7f0 = 0;
  }
  if (DAT_01dbf7f4 != 0) {
    DAT_01dbf7f4 = 0;
  }
  if (DAT_01dbf7f8 != 0) {
    DAT_01dbf7f8 = 0;
  }
  if (DAT_01dbf7fc != 0) {
    DAT_01dbf7fc = 0;
  }
  if (DAT_01dbf800 != 0) {
    DAT_01dbf800 = 0;
  }
  if (DAT_01dbf804 != 0) {
    DAT_01dbf804 = 0;
  }
  if (DAT_01dbf808 != 0) {
    DAT_01dbf808 = 0;
  }
  return;
}

// 00CC1250  FUN_00cc1250  size=78  [run]
void FUN_00cc1250(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  if ((DAT_01dc1490 != 0) && (param_1 < 7)) {
    uVar1 = 0;
    while ((&DAT_01dbf80c)[uVar1] != 0) {
      uVar1 = uVar1 + 1;
      if (8 < uVar1) {
        return;
      }
    }
    *(uint *)(&DAT_01dbf878 + uVar1 * 4) = param_1;
    *(undefined4 *)(&DAT_01dbf854 + uVar1 * 4) = param_2;
    (&DAT_01dbf7e8)[uVar1] = param_3;
    (&DAT_01dbf830)[uVar1] = 1;
  }
  return;
}


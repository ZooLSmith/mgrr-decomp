// src/unsorted/unit_009F3EC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009F3EC0..009F3EC0, 1 functions

#include "mgrr.h"

// 009F3EC0  FUN_009f3ec0  size=108  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009f3ec0(void)

{
  DAT_01b78864 = -1;
  DAT_01b78860 = 0;
  FUN_009f2540();
  DAT_01b78870 = &DAT_01b788c0;
  FUN_00f40ed0(1);
  if ((DAT_01bea070 & 0x8000000) == 0) {
    FUN_00f40e20();
    FUN_00f40df0();
    FUN_00f43bb0();
    EspControllerBullet::~EspControllerBullet();
    FUN_00f40e50();
  }
  if (-1 < DAT_01b78864) {
    _DAT_01be5568 = DAT_01b78864;
  }
  return;
}


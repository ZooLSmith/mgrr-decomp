// src/unsorted/unit_00CB74A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB74A0..00CB74A0, 1 functions

#include "types.h"

// 00CB74A0  FUN_00cb74a0  size=94  [run]
undefined4 FUN_00cb74a0(uint param_1)

{
  if ((param_1 & 0xf0000) == 0x20000) {
    if (param_1 < 0x2020e) {
      if (param_1 < 0x20205) {
        if (param_1 < 0x20200) {
          return 1;
        }
        if (0x20203 < param_1) {
          return 1;
        }
      }
    }
    else if (param_1 != 0x21020) {
      return 1;
    }
  }
  else {
    if (param_1 == 0x40500) {
      return 1;
    }
    if (param_1 == 0x40501) {
      return 1;
    }
    if (param_1 == 0x40502) {
      return 1;
    }
  }
  return 0;
}


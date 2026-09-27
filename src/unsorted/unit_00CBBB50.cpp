// src/unsorted/unit_00CBBB50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBBB50..00CBBB80, 2 functions

#include "types.h"

// 00CBBB50  FUN_00cbbb50  size=44  [run]
void FUN_00cbbb50(int param_1)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    while (param_1 != (&DAT_01dc0ef8)[uVar1]) {
      uVar1 = uVar1 + 1;
      if (9 < uVar1) {
        return;
      }
    }
    (&DAT_01dbfb18)[uVar1] = 1;
  }
  return;
}

// 00CBBB80  FUN_00cbbb80  size=77  [run]
bool FUN_00cbbb80(uint param_1)

{
  if ((param_1 & 0xf0000) != 0x20000) {
    return false;
  }
  if ((((param_1 != 0x20080) && (param_1 != 0x20081)) && (param_1 != 0x2c080)) &&
     ((param_1 != 0x2c081 && (param_1 != 0x28080)))) {
    return param_1 == 0x28081;
  }
  return true;
}


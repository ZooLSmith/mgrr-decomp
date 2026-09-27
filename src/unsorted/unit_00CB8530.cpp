// src/unsorted/unit_00CB8530.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB8530..00CB8530, 1 functions

#include "types.h"

// 00CB8530  FUN_00cb8530  size=91  [run]
bool FUN_00cb8530(uint param_1)

{
  if ((param_1 & 0xf0000) != 0x20000) {
    return false;
  }
  if ((((param_1 != 0x20010) && (param_1 != 0x20140)) && (param_1 != 0x20142)) &&
     (((param_1 != 0x20144 && (param_1 != 0x20150)) &&
      ((param_1 != 0x20152 && (param_1 != 0x20160)))))) {
    return param_1 == 0x20170;
  }
  return true;
}


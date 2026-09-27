// src/unsorted/unit_00E93480.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E93480..00E93500, 2 functions

#include "types.h"

// 00E93480  FUN_00e93480  size=16  [run]
undefined4 __fastcall FUN_00e93480(undefined4 param_1)

{
  FUN_00ea1e90(param_1);
  return param_1;
}

// 00E93500  FUN_00e93500  size=68  [run]
undefined4 FUN_00e93500(byte *param_1,byte *param_2,byte param_3)

{
  byte bVar1;
  
  if (param_1 == param_2) {
    return 1;
  }
  do {
    bVar1 = *param_1;
    if (((bVar1 < 0x81) || (0x9f < bVar1)) && (0xf < (byte)(bVar1 + 0x20))) {
      if ((bVar1 == param_3) || (bVar1 == 0x20)) {
        return 1;
      }
      param_1 = param_1 + 1;
    }
    else {
      param_1 = param_1 + 2;
    }
    if (param_1 == param_2) {
      return 0;
    }
  } while( true );
}


// src/unsorted/unit_00E913A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E913A0..00E913D0, 2 functions

#include "mgrr.h"

// 00E913A0  FUN_00e913a0  size=34  [run]
undefined4 FUN_00e913a0(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_01dda6a0 == '\0') {
    return 0;
  }
  uVar1 = FUN_00dd29b0(param_1,4,0,0);
  return uVar1;
}

// 00E913D0  FUN_00e913d0  size=25  [run]
void FUN_00e913d0(undefined4 param_1)

{
  if (DAT_01dda6a0 != '\0') {
    FUN_00dd48d0(param_1,0);
  }
  return;
}


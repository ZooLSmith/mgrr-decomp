// src/unsorted/unit_00E99770.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E99770..00E997C0, 2 functions

#include "mgrr.h"

// 00E99770  FUN_00e99770  size=66  [run]
uint FUN_00e99770(undefined1 *param_1)

{
  uint uVar1;
  int local_8;
  int local_4;
  
  uVar1 = FUN_00e98bb0(&local_8);
  if ((char)uVar1 == '\0') {
    return uVar1 & 0xffffff00;
  }
  if (local_8 != 0 || local_4 != 0) {
    *param_1 = 1;
    return 1;
  }
  *param_1 = 0;
  return 1;
}

// 00E997C0  FUN_00e997c0  size=41  [run]
undefined4 FUN_00e997c0(float *param_1)

{
  char cVar1;
  double local_8;
  
  cVar1 = FUN_00e98cd0(&local_8);
  if (cVar1 != '\0') {
    *param_1 = (float)local_8;
    return 1;
  }
  return 0;
}


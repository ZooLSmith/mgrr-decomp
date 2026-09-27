// src/unsorted/unit_0093E110.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093E110..0093E110, 1 functions

#include "mgrr.h"

// 0093E110  FUN_0093e110  size=42  [run]
uint FUN_0093e110(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35324;
  (**(code **)(*param_1 + 4))(&DAT_01b35324);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}


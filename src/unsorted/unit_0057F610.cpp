// src/unsorted/unit_0057F610.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057F610..0057F610, 1 functions

#include "mgrr.h"

// 0057F610  FUN_0057f610  size=42  [run]
uint FUN_0057f610(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35140;
  (**(code **)(*param_1 + 4))(&DAT_01b35140);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}


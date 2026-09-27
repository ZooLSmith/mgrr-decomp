// src/unsorted/unit_008DCA60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DCA60..008DCA60, 1 functions

#include "mgrr.h"

// 008DCA60  FUN_008dca60  size=42  [run]
uint FUN_008dca60(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9c80;
  (**(code **)(*param_1 + 4))(&DAT_01be9c80);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}


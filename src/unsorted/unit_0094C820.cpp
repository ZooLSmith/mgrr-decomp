// src/unsorted/unit_0094C820.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094C820..0094C8B0, 2 functions

#include "mgrr.h"

// 0094C820  FUN_0094c820  size=42  [run]
uint FUN_0094c820(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35390;
  (**(code **)(*param_1 + 4))(&DAT_01b35390);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0094C8B0  FUN_0094c8b0  size=42  [run]
uint FUN_0094c8b0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b353c0;
  (**(code **)(*param_1 + 4))(&DAT_01b353c0);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}


// src/unsorted/unit_005B0B80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005B0B80..005B0C60, 3 functions

#include "mgrr.h"

// 005B0B80  FUN_005b0b80  size=42  [run]
uint FUN_005b0b80(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b351cc;
  (**(code **)(*param_1 + 4))(&DAT_01b351cc);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 005B0C10  FUN_005b0c10  size=42  [run]
uint FUN_005b0c10(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b351d0;
  (**(code **)(*param_1 + 4))(&DAT_01b351d0);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 005B0C60  FUN_005b0c60  size=57  [run]
void __fastcall FUN_005b0c60(uint *param_1)

{
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = *param_1 | 0x80000000;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  return;
}


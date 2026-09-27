// src/unsorted/unit_00D552D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D552D0..00D552D0, 1 functions

#include "types.h"

// 00D552D0  FUN_00d552d0  size=61  [run]
uint FUN_00d552d0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01b351a0;
  (**(code **)(*piVar2 + 4))(&DAT_01b351a0);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}


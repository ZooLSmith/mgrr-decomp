// src/unsorted/unit_00D80160.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D80160..00D801C0, 2 functions

#include "mgrr.h"

// 00D80160  FUN_00d80160  size=90  [run]
void FUN_00d80160(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_01dc5354;
  if (DAT_01dc5354 != DAT_01dc5354 + DAT_01dc535c) {
    while (iVar1 = *piVar2, *(int *)(iVar1 + 0x4c) != DAT_01dc5348) {
      piVar2 = piVar2 + 1;
      if (piVar2 == DAT_01dc5354 + DAT_01dc535c) {
        return;
      }
    }
    if ((((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x3c))) && (**(int **)(iVar1 + 0x34) != 0)) &&
       ((*(uint *)(**(int **)(iVar1 + 0x34) + 0x40) & 0x80000000) != 0)) {
      DAT_01dc533c = DAT_01dc533c | 0x2000000;
    }
  }
  return;
}

// 00D801C0  FUN_00d801c0  size=71  [run]
uint FUN_00d801c0(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = DAT_01dc5354;
  if (DAT_01dc5354 != DAT_01dc5354 + DAT_01dc535c) {
    while (iVar1 = *piVar2, *(int *)(iVar1 + 0x4c) != DAT_01dc5348) {
      piVar2 = piVar2 + 1;
      if (piVar2 == DAT_01dc5354 + DAT_01dc535c) {
        return 0;
      }
    }
    if (iVar1 != 0) {
      return *(uint *)(iVar1 + 0x50) >> 0x1d & 1;
    }
  }
  return 0;
}


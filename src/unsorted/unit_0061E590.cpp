// src/unsorted/unit_0061E590.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0061E590..0061E590, 1 functions

#include "types.h"

// 0061E590  FUN_0061e590  size=165  [run]
void FUN_0061e590(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0,0x3f800000);
  FUN_00a8caf0(2,0,0,0);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b35540;
      (**(code **)(*piVar2 + 4))(&DAT_01b35540);
      iVar1 = FUN_00dd6d80(puVar3);
      if ((iVar1 != 0) && ((piVar2[0x3ab] & 0x2000U) != 0)) {
        FUN_00a92f90();
        FUN_00e36b50(0,8,0);
      }
    }
  }
  return;
}


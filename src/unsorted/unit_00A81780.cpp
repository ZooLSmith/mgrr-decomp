// src/unsorted/unit_00A81780.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A81780..00A81780, 1 functions

#include "mgrr.h"

// 00A81780  FUN_00a81780  size=66  [run]
void __fastcall FUN_00a81780(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
    if (iVar1 != 0) {
      FUN_00e085e0();
      FUN_00dd4920(iVar1);
    }
  }
  return;
}


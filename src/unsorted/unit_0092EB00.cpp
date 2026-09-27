// src/unsorted/unit_0092EB00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0092EB00..0092EB00, 1 functions

#include "types.h"

// 0092EB00  FUN_0092eb00  size=78  [run]
void __fastcall FUN_0092eb00(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(0);
    while (iVar2 != 0) {
      iVar3 = (**(code **)(*piVar1 + 0x1c))(iVar2);
      FUN_00dd4920(iVar2);
      iVar2 = iVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x0092eb4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


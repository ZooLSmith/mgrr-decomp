// src/unsorted/unit_00848E10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00848E10..00848E10, 1 functions

#include "types.h"

// 00848E10  FUN_00848e10  size=185  [run]
void FUN_00848e10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    param_1 = 8;
    do {
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
        puVar5 = &DAT_01b35ad8;
        (**(code **)(*piVar3 + 4))(&DAT_01b35ad8);
        iVar2 = FUN_00dd6d80(puVar5);
        if (iVar2 != 0) {
          iVar2 = FUN_00a81330();
          if ((iVar2 == 0) || (piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0)) {
            uVar4 = 0;
          }
          else {
            puVar5 = &DAT_01b35ab8;
            (**(code **)(*piVar3 + 4))(&DAT_01b35ab8);
            iVar2 = FUN_00dd6d80(puVar5);
            uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
          }
          FUN_00848e10(*(undefined4 *)(uVar4 + 0x4f0));
        }
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


// src/unsorted/unit_00A891A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A891A0..00A891A0, 1 functions

#include "mgrr.h"

// 00A891A0  FUN_00a891a0  size=102  [run]
void __fastcall FUN_00a891a0(int param_1)

{
  int iVar1;
  int *piVar2;
  LONG LVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x10) + 8))(iVar1);
    }
    piVar2 = *(int **)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((piVar2 != (int *)0x0) && (LVar3 = InterlockedDecrement(piVar2 + 1), LVar3 == 0)) {
      (**(code **)(*piVar2 + 4))();
      LVar3 = InterlockedDecrement(piVar2 + 2);
      if (LVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a89200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 8))();
        return;
      }
    }
  }
  return;
}


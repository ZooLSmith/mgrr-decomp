// src/unsorted/unit_008D8DE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008D8DE0..008D8DE0, 1 functions

#include "mgrr.h"

// 008D8DE0  FUN_008d8de0  size=227  [run]
void __fastcall FUN_008d8de0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  piVar5 = *(int **)(*(int *)(param_1 + 0x28) + 4);
  if (piVar5 != piVar5 + *(int *)(*(int *)(param_1 + 0x28) + 8)) {
    do {
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 4) == 0) {
        piVar6 = piVar5 + 1;
      }
      else {
        if (iVar1 != 0) {
          piVar6 = *(int **)(iVar1 + 0xc);
          if (piVar6 != (int *)0x0) {
            if ((undefined4 *)*piVar6 != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)*piVar6)(1);
              *piVar6 = 0;
            }
            FUN_00dd4920(piVar6);
            *(undefined4 *)(iVar1 + 0xc) = 0;
          }
          FUN_00dd4920(iVar1);
        }
        iVar1 = *(int *)(param_1 + 0x28);
        uVar2 = *(uint *)(iVar1 + 8);
        iVar3 = *(int *)(iVar1 + 4);
        piVar6 = (int *)(iVar3 + uVar2 * 4);
        if ((((piVar5 != piVar6) && (iVar3 != 0)) && (uVar2 != 0)) &&
           ((uint)((int)piVar5 - iVar3 >> 2) < uVar2)) {
          for (piVar4 = piVar5; piVar4 != piVar6 + -1; piVar4 = piVar4 + 1) {
            *piVar4 = piVar4[1];
          }
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
          piVar6 = piVar5;
        }
      }
      piVar5 = piVar6;
    } while (piVar6 != (int *)(*(int *)(*(int *)(param_1 + 0x28) + 4) +
                              *(int *)(*(int *)(param_1 + 0x28) + 8) * 4));
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}


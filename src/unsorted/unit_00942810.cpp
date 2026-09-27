// src/unsorted/unit_00942810.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00942810..00942810, 1 functions

#include "mgrr.h"

// 00942810  FUN_00942810  size=188  [run]
void __fastcall FUN_00942810(int param_1)

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
        if (*(int **)(iVar1 + 0xc) != (int *)0x0) {
          (**(code **)(**(int **)(iVar1 + 0xc) + 0x2c))(1);
          *(undefined4 *)(iVar1 + 0xc) = 0;
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


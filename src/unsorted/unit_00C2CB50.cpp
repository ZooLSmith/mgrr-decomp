// src/unsorted/unit_00C2CB50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C2CB50..00C2CB50, 1 functions

#include "mgrr.h"

// 00C2CB50  FUN_00c2cb50  size=113  [run]
int __thiscall FUN_00c2cb50(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      iVar2 = *piVar3;
      if (*(int *)(iVar2 + 0x10) == param_2) goto LAB_00c2cb80;
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  iVar2 = 0;
LAB_00c2cb80:
  iVar2 = *(int *)(iVar2 + 0x170);
  if ((iVar2 != 0) && (piVar3 = *(int **)(iVar2 + 4), piVar3 != piVar3 + *(int *)(iVar2 + 8))) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      if (*(int *)(*piVar3 + 0x10) == param_3) {
        return *piVar3;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return 0;
}


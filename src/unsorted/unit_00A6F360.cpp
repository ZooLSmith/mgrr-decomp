// src/unsorted/unit_00A6F360.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6F360..00A6F3C0, 2 functions

#include "mgrr.h"

// 00A6F360  FUN_00a6f360  size=85  [run]
int * __thiscall FUN_00a6f360(int *param_1,byte param_2)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(0x41200000,0,1);
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)(1);
      *param_1 = 0;
    }
  }
  param_1[1] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A6F3C0  FUN_00a6f3c0  size=118  [run]
int __thiscall FUN_00a6f3c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = FUN_00d466f0();
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x78) != 0)) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  }
  piVar3 = *(int **)(param_1 + 0x14);
  iVar2 = 0;
  if (piVar3 != piVar3 + *(int *)(param_1 + 0x18)) {
    piVar1 = piVar3 + *(int *)(param_1 + 0x18);
    do {
      if (*(int *)(*piVar3 + 4) == param_2) {
        iVar2 = *piVar3;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  iVar4 = FUN_00d466f0();
  if ((iVar4 != 0) && (*(int *)(param_1 + 0x78) != 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  }
  return iVar2;
}


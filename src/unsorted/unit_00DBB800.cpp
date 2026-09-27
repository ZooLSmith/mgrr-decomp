// src/unsorted/unit_00DBB800.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DBB800..00DBB880, 3 functions

#include "types.h"

// 00DBB800  FUN_00dbb800  size=54  [run]
void __thiscall FUN_00dbb800(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00da4130();
  if ((int *)param_1[0x15] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x15] + 0x20))();
    if (*(int *)(iVar1 + 8) == 0) goto LAB_00dbb821;
  }
  param_1[0x15] = *param_1;
LAB_00dbb821:
  FUN_00da41a0(param_2,param_3);
  return;
}

// 00DBB840  FUN_00dbb840  size=50  [run]
void __thiscall FUN_00dbb840(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x54) + 0x20))();
    if (*(int *)(iVar1 + 8) == 0x10) goto LAB_00dbb85d;
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x40);
LAB_00dbb85d:
  FUN_00da41a0(param_2,param_3);
  return;
}

// 00DBB880  FUN_00dbb880  size=80  [run]
undefined4 __thiscall
FUN_00dbb880(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = (**(code **)(**(int **)(param_1 + param_3 * 4) + 8))(param_4,param_5);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x4c + unaff_ESI * 4);
  if ((piVar1 != (int *)0x0) &&
     (iVar2 = (**(code **)(*piVar1 + 0x20))(), *(int *)(iVar2 + 8) == param_3)) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x4c + unaff_ESI * 4) = *(undefined4 *)(param_1 + param_3 * 4);
  return 1;
}


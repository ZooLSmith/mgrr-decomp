// src/unsorted/unit_00E92680.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E92680..00E928B0, 3 functions

#include "mgrr.h"

// 00E92680  FUN_00e92680  size=86  [run]
int FUN_00e92680(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00ea3c00(param_2);
  if (iVar2 != 0) {
    iVar3 = FUN_00dd29b0(*(undefined4 *)(iVar2 + 0x10),0x20,0,0);
    if (iVar3 != 0) {
      cVar1 = (**(code **)(iVar2 + 0x14))(param_1,iVar3);
      if (cVar1 != '\0') {
        return iVar3;
      }
      FUN_00dd48d0(iVar3,0);
    }
  }
  return 0;
}

// 00E92860  FUN_00e92860  size=73  [run]
void __thiscall FUN_00e92860(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_2[1];
  param_2[1] = piVar1[2];
  if (*(char *)(piVar1[2] + 0xd) == '\0') {
    *(int **)piVar1[2] = param_2;
  }
  *piVar1 = *param_2;
  if (param_2 == (int *)*param_1) {
    *param_1 = (int)piVar1;
    piVar1[2] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  iVar2 = *param_2;
  if (param_2 == *(int **)(iVar2 + 8)) {
    *(int **)(iVar2 + 8) = piVar1;
    piVar1[2] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  *(int **)(iVar2 + 4) = piVar1;
  piVar1[2] = (int)param_2;
  *param_2 = (int)piVar1;
  return;
}

// 00E928B0  FUN_00e928b0  size=73  [run]
void __thiscall FUN_00e928b0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_2[2];
  param_2[2] = piVar1[1];
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    *(int **)piVar1[1] = param_2;
  }
  *piVar1 = *param_2;
  if (param_2 == (int *)*param_1) {
    *param_1 = (int)piVar1;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  iVar2 = *param_2;
  if (param_2 == *(int **)(iVar2 + 4)) {
    *(int **)(iVar2 + 4) = piVar1;
    piVar1[1] = (int)param_2;
    *param_2 = (int)piVar1;
    return;
  }
  *(int **)(iVar2 + 8) = piVar1;
  piVar1[1] = (int)param_2;
  *param_2 = (int)piVar1;
  return;
}


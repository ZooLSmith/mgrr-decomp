// src/unsorted/unit_00BBCB60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BBCB60..00BBCCD0, 5 functions

#include "types.h"

// 00BBCB60  FUN_00bbcb60  size=42  [run]
void FUN_00bbcb60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00bbc9f0(&local_8,param_1);
  *param_2 = local_8;
  *param_3 = local_4;
  return;
}

// 00BBCB90  FUN_00bbcb90  size=142  [run]
void FUN_00bbcb90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar2;
  }
  if ((DAT_01b77e30 != 1) && (DAT_01b77e30 != 3)) {
    uVar1 = *(undefined4 *)(uVar3 + 0x3bd8);
    *param_1 = *(undefined4 *)(uVar3 + 0x3bd4);
    param_1[1] = uVar1;
    return;
  }
  uVar1 = *(undefined4 *)(uVar3 + 0x3be0);
  *param_1 = *(undefined4 *)(uVar3 + 0x3bdc);
  param_1[1] = uVar1;
  return;
}

// 00BBCC20  FUN_00bbcc20  size=42  [run]
void FUN_00bbcc20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00bbcb90(&local_8,param_1);
  *param_2 = local_8;
  *param_3 = local_4;
  return;
}

// 00BBCC50  FUN_00bbcc50  size=67  [run]
undefined4 __thiscall FUN_00bbcc50(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  do {
    if (param_2 == 0) {
      return 1;
    }
    param_2 = param_2 + -1;
    cVar1 = (**(code **)(*param_1 + 8))(param_3);
  } while (cVar1 != '\0');
  return 0;
}

// 00BBCCD0  FUN_00bbccd0  size=65  [run]
void __thiscall FUN_00bbccd0(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 0x20;
  if (param_1[1] + iVar1 != 0) {
    FUN_00b845d0(param_3);
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}


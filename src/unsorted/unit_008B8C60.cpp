// src/unsorted/unit_008B8C60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008B8C60..008B8FD0, 7 functions

#include "types.h"

// 008B8C60  FUN_008b8c60  size=87  [run]
bool FUN_008b8c60(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  iVar1 = FUN_008b8bb0(param_1);
  if ((iVar1 == 0) && (*(int *)(uVar2 + 0x188) == 0)) {
    iVar1 = FUN_008b7810(param_1);
    return iVar1 != 0;
  }
  return false;
}

// 008B8CC0  FUN_008b8cc0  size=143  [run]
void FUN_008b8cc0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar4 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar1 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01b35b90;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar4);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  iVar2 = (**(code **)(*piVar3 + 0x84))();
  uStack_1c = *(undefined4 *)(iVar2 + 4);
  uStack_20 = 0;
  uStack_18 = 0;
  (**(code **)(*piVar3 + 0x88))(&uStack_20);
  return;
}

// 008B8D50  FUN_008b8d50  size=369  [run]
void FUN_008b8d50(float *param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar6 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar6 != 0) & (uint)param_2;
  }
  piVar3 = *(int **)(uVar5 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar7 = &DAT_01b35b90;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
    iVar6 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar6 != 0) & (uint)piVar3;
  }
  if ((DAT_01b77e30 == 1) || (DAT_01b77e30 == 3)) {
    fVar1 = *(float *)(uVar5 + 0x3bd4);
    fVar2 = *(float *)(uVar5 + 0x3bd8);
  }
  else {
    fVar1 = *(float *)(uVar5 + 0x3bdc);
    fVar2 = *(float *)(uVar5 + 0x3be0);
  }
  local_18 = 0;
  local_14 = local_14 - local_14;
  local_20 = fVar1;
  local_1c = fVar2;
  if ((fVar1 != 0.0) || (fVar2 != 0.0)) {
    fVar4 = fVar1 * fVar1 + fVar2 * fVar2;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
    }
  }
  fVar1 = ABS(fVar2) + ABS(fVar1);
  if (1000.0 < fVar1) {
    *param_1 = local_20 * 1000.0;
    param_1[1] = local_1c * 1000.0;
    return;
  }
  *param_1 = local_20 * fVar1;
  param_1[1] = fVar1 * local_1c;
  return;
}

// 008B8ED0  FUN_008b8ed0  size=42  [run]
void FUN_008b8ed0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_008b8d50(&local_8,param_1);
  *param_2 = local_8;
  *param_3 = local_4;
  return;
}

// 008B8F00  FUN_008b8f00  size=145  [run]
void FUN_008b8f00(undefined4 *param_1,undefined4 *param_2)

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
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar3 + 0x5e0);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b90);
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

// 008B8FA0  FUN_008b8fa0  size=42  [run]
void FUN_008b8fa0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_008b8f00(&local_8,param_1);
  *param_2 = local_8;
  *param_3 = local_4;
  return;
}

// 008B8FD0  FUN_008b8fd0  size=126  [run]
void FUN_008b8fd0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  uVar5 = *(undefined4 *)(uVar2 + 0x4098);
  iVar3 = FUN_00fdbc60(uVar5);
  FUN_00b7ab80((float)iVar3,uVar5);
  return;
}


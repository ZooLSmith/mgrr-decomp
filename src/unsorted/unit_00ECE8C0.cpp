// src/unsorted/unit_00ECE8C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECE8C0..00ECEB10, 3 functions

#include "mgrr.h"

// 00ECE8C0  FUN_00ece8c0  size=69  [run]
void __thiscall FUN_00ece8c0(int *param_1,int param_2)

{
  if (*param_1 == param_2) {
    *param_1 = *(int *)(param_2 + 0x14);
  }
  if (param_1[1] == param_2) {
    param_1[1] = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x14) = *(undefined4 *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x10) = *(undefined4 *)(param_2 + 0x10);
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  return;
}

// 00ECE910  FUN_00ece910  size=501  [run]
undefined4 FUN_00ece910(int *param_1,int *param_2,code *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  if (param_3 == (code *)0x0) {
    return 0;
  }
  iVar3 = *param_1;
  if (*param_1 == 0) {
LAB_00ece94f:
    *param_1 = (int)param_2;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    return 1;
  }
  do {
    iVar6 = iVar3;
    iVar3 = (*param_3)(iVar6,param_2);
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar6 + 0xc);
    }
    else {
      iVar3 = *(int *)(iVar6 + 8);
    }
  } while (iVar3 != 0);
  if (iVar6 == 0) goto LAB_00ece94f;
  iVar3 = (*param_3)(iVar6,param_2);
  if (iVar3 == 0) {
    *(int **)(iVar6 + 0xc) = param_2;
  }
  else {
    *(int **)(iVar6 + 8) = param_2;
  }
  param_2[1] = iVar6;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 1;
  while( true ) {
    piVar1 = (int *)param_2[1];
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    if (*piVar1 == 0) {
      return 1;
    }
    piVar4 = (int *)piVar1[1];
    if (piVar4 == (int *)0x0) break;
    piVar9 = (int *)piVar4[2];
    piVar5 = piVar9;
    if (piVar9 == piVar1) {
      piVar5 = (int *)piVar4[3];
    }
    piVar7 = (int *)piVar4[3];
    if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) goto LAB_00ece9d5;
    *piVar4 = 1;
    *piVar1 = 0;
    *piVar5 = 0;
    param_2 = piVar4;
  }
  piVar9 = (int *)0x0;
  piVar7 = (int *)0x0;
LAB_00ece9d5:
  piVar5 = param_2;
  piVar8 = piVar1;
  if ((piVar9 == piVar1) && (piVar9 = (int *)piVar1[3], piVar9 == param_2)) {
    if (piVar9 == (int *)0x0) goto LAB_00ecea4e;
    piVar1[1] = (int)piVar9;
    iVar3 = piVar9[2];
    piVar1[3] = iVar3;
    if (iVar3 != 0) {
      *(int **)(iVar3 + 4) = piVar1;
    }
    piVar9[1] = (int)piVar4;
    piVar9[2] = (int)piVar1;
    if (piVar4 == (int *)0x0) {
      *param_1 = (int)piVar9;
      piVar4 = piVar9;
      goto LAB_00ecea4e;
    }
  }
  else {
    piVar5 = piVar1;
    piVar8 = param_2;
    if (((piVar7 != piVar1) || (piVar9 = (int *)piVar1[2], piVar9 != param_2)) ||
       (piVar5 = param_2, piVar8 = piVar1, piVar9 == (int *)0x0)) goto LAB_00ecea4e;
    piVar1[1] = (int)piVar9;
    iVar3 = piVar9[3];
    piVar1[2] = iVar3;
    if (iVar3 != 0) {
      *(int **)(iVar3 + 4) = piVar1;
    }
    piVar9[1] = (int)piVar4;
    piVar9[3] = (int)piVar1;
    if (piVar4 == (int *)0x0) {
      *param_1 = (int)piVar9;
      piVar4 = piVar9;
      goto LAB_00ecea4e;
    }
  }
  if ((int *)piVar4[2] == piVar1) {
    piVar4[2] = (int)piVar9;
    piVar5 = param_2;
    piVar8 = piVar1;
  }
  else {
    piVar4[3] = (int)piVar9;
    piVar5 = param_2;
    piVar8 = piVar1;
  }
LAB_00ecea4e:
  if (piVar4 == (int *)0x0) {
    return 1;
  }
  if (((int *)piVar4[2] == piVar5) && ((int *)piVar5[2] == piVar8)) {
    *piVar4 = 1;
    *piVar5 = 0;
    iVar3 = piVar4[2];
    if (iVar3 == 0) {
      return 1;
    }
    iVar6 = piVar4[1];
    piVar4[1] = iVar3;
    iVar2 = *(int *)(iVar3 + 0xc);
    piVar4[2] = iVar2;
    if (iVar2 != 0) {
      *(int **)(iVar2 + 4) = piVar4;
    }
    *(int *)(iVar3 + 4) = iVar6;
    *(int **)(iVar3 + 0xc) = piVar4;
    if (iVar6 == 0) {
      *param_1 = iVar3;
      return 1;
    }
  }
  else {
    if ((int *)piVar4[3] != piVar5) {
      return 1;
    }
    if ((int *)piVar5[3] != piVar8) {
      return 1;
    }
    *piVar4 = 1;
    *piVar5 = 0;
    iVar3 = piVar4[3];
    if (iVar3 == 0) {
      return 1;
    }
    iVar6 = piVar4[1];
    piVar4[1] = iVar3;
    iVar2 = *(int *)(iVar3 + 8);
    piVar4[3] = iVar2;
    if (iVar2 != 0) {
      *(int **)(iVar2 + 4) = piVar4;
    }
    *(int *)(iVar3 + 4) = iVar6;
    *(int **)(iVar3 + 8) = piVar4;
    if (iVar6 == 0) {
      *param_1 = iVar3;
      return 1;
    }
  }
  if (*(int **)(iVar6 + 8) != piVar4) {
    *(int *)(iVar6 + 0xc) = iVar3;
    return 1;
  }
  *(int *)(iVar6 + 8) = iVar3;
  return 1;
}

// 00ECEB10  FUN_00eceb10  size=344  [run]
void FUN_00eceb10(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2[2];
  iVar1 = param_2[1];
  if ((uVar3 == 0) && (param_2[3] == 0)) {
    if (iVar1 == 0) {
      *param_1 = 0;
      FUN_00eccd10(param_1,param_2,*param_2);
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      return;
    }
    if (*(undefined4 **)(iVar1 + 8) == param_2) {
      *(undefined4 *)(iVar1 + 8) = 0;
      FUN_00eccd10(param_1,param_2,*param_2);
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      return;
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    FUN_00eccd10(param_1,param_2,*param_2);
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    return;
  }
  if (uVar3 == 0) {
    iVar2 = param_2[3];
    if (iVar1 == 0) {
      *param_1 = iVar2;
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 4) = 0;
        uVar3 = param_2[3];
        goto LAB_00ecec4b;
      }
    }
    else {
      if (*(undefined4 **)(iVar1 + 8) == param_2) {
        *(int *)(iVar1 + 8) = iVar2;
      }
      else {
        *(int *)(iVar1 + 0xc) = iVar2;
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 4) = iVar1;
      }
    }
    uVar3 = param_2[3];
  }
  else if (param_2[3] == 0) {
    FUN_00eccc30(param_1,param_2,uVar3);
    uVar3 = param_2[2];
  }
  else {
    iVar1 = *(int *)(uVar3 + 0xc);
    while (iVar1 != 0) {
      uVar3 = *(uint *)(uVar3 + 0xc);
      iVar1 = *(int *)(uVar3 + 0xc);
    }
    FUN_00eccc30(param_1,uVar3,*(undefined4 *)(uVar3 + 8));
    *(undefined4 *)(uVar3 + 4) = 0;
    *(uint *)(uVar3 + 8) = -(uint)(param_2[2] != uVar3) & param_2[2];
    if (param_2[3] == uVar3) {
      *(undefined4 *)(uVar3 + 0xc) = 0;
    }
    else {
      *(undefined4 *)(uVar3 + 0xc) = param_2[3];
    }
    FUN_00eccc30(param_1,param_2,uVar3);
    if (*(int *)(uVar3 + 8) != 0) {
      *(uint *)(*(int *)(uVar3 + 8) + 4) = uVar3;
    }
    if (*(int *)(uVar3 + 0xc) != 0) {
      *(uint *)(*(int *)(uVar3 + 0xc) + 4) = uVar3;
    }
  }
LAB_00ecec4b:
  FUN_00eccd10(param_1,uVar3,*param_2);
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  return;
}


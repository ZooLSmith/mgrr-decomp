// src/unsorted/unit_00D085F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D085F0..00D08990, 3 functions

#include "types.h"

// 00D085F0  FUN_00d085f0  size=640  [run]
void __thiscall FUN_00d085f0(int param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *local_30 [7];
  char *local_14;
  char *local_10;
  char *local_c;
  char *local_8;
  char *local_4;
  
  local_30[6] = "RESULT_SEL_21";
  local_14 = "RESULT_SEL_16";
  local_10 = "RESULT_SEL_17";
  local_c = "RESULT_SEL_18";
  local_8 = "RESULT_SEL_19";
  local_4 = "RESULT_SEL_20";
  local_30[0] = (char *)0x3;
  local_30[1] = (char *)0x6;
  local_30[2] = (char *)0x5;
  local_30[3] = (char *)0x4;
  local_30[4] = (char *)0x3;
  local_30[5] = (char *)0x3;
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(local_30[param_2]);
  }
  iVar3 = *(int *)(param_1 + 0x18);
  pcVar1 = local_30[param_2 + 6];
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x1d8) < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(*(uint *)(param_1 + 0x1d8) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
     piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 3) {
      uVar4 = FUN_00e03ea0(pcVar1);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar3 = FUN_00cb1cd0(uVar4);
        if (-1 < iVar3) {
          piVar2[0x2a] = iVar3;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x1dc) < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(*(uint *)(param_1 + 0x1dc) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
     piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 3) {
      uVar4 = FUN_00e03ea0(pcVar1);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar3 = FUN_00cb1cd0(uVar4);
        if (-1 < iVar3) {
          piVar2[0x2a] = iVar3;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 500) < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(*(uint *)(param_1 + 500) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
     piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 3) {
      uVar4 = FUN_00e03ea0(pcVar1);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar3 = FUN_00cb1cd0(uVar4);
        if (-1 < iVar3) {
          piVar2[0x2a] = iVar3;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x18);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x1f8) < *(uint *)(iVar3 + 0x80))) &&
     (piVar2 = *(int **)(*(uint *)(param_1 + 0x1f8) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
     piVar2 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar2 + 8))();
    if (iVar3 == 3) {
      uVar4 = FUN_00e03ea0(pcVar1);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 1;
      if ((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) {
        iVar3 = FUN_00cb1cd0(uVar4);
        if (-1 < iVar3) {
          piVar2[0x2a] = iVar3;
          piVar2[0x2b] = 1;
          piVar2[0x2e] = 0;
        }
      }
    }
  }
  return;
}

// 00D08870  FUN_00d08870  size=284  [run]
int __thiscall FUN_00d08870(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_10 = 0;
  local_44 = 0;
  local_c = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar2 = *(int *)(param_1 + 0x18 + (param_2 + 1) * 0x1c);
  uVar1 = *(uint *)(param_1 + 0x234 + param_3 * 4);
  local_8 = 0xffffffff;
  if (iVar2 != 0) {
    if (((*(uint *)(iVar2 + 0x80) <= uVar1) ||
        (piVar3 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar3 == (int *)0x0))
       || (iVar2 = (**(code **)(*piVar3 + 8))(), iVar2 != 4)) {
      piVar3 = (int *)0x0;
    }
    FUN_00ce5150(piVar3,param_4,&local_54);
  }
  iVar2 = *(int *)(param_1 + (param_2 + 1) * 0x1c + 0x18);
  uVar1 = *(uint *)(param_1 + 0x234 + param_3 * 4);
  if ((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) {
    return uVar1 * 0x400 + 0x50 + *(int *)(iVar2 + 0x7c);
  }
  return 0;
}

// 00D08990  FUN_00d08990  size=263  [run]
int __thiscall FUN_00d08990(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  local_c = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = *(uint *)(param_1 + 0x118 + param_2 * 4);
  local_8 = 0xffffffff;
  if (iVar2 != 0) {
    if (((*(uint *)(iVar2 + 0x80) <= uVar1) ||
        (piVar3 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar3 == (int *)0x0))
       || (iVar2 = (**(code **)(*piVar3 + 8))(), iVar2 != 4)) {
      piVar3 = (int *)0x0;
    }
    FUN_00ce5150(piVar3,param_3,&local_54);
  }
  uVar1 = *(uint *)(param_1 + 0x118 + param_2 * 4);
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) {
    return uVar1 * 0x400 + 0x50 + *(int *)(iVar2 + 0x7c);
  }
  return 0;
}


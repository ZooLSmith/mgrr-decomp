// src/unsorted/unit_00D03960.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D03960..00D03AA0, 2 functions

#include "mgrr.h"

// 00D03960  FUN_00d03960  size=306  [run]
void __fastcall FUN_00d03960(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *local_10 [4];
  
  if (DAT_01dc1418 == '\0') {
    uVar1 = *(uint *)(DAT_01dc14c8 + 0xe40);
    iVar4 = 0;
    if (uVar1 < 0x2001) {
      if (uVar1 == 0x2000) {
        iVar4 = 0;
      }
      else if (uVar1 == 0x400) {
        iVar4 = 2;
      }
      else if (uVar1 == 0x800) {
        iVar4 = 3;
      }
    }
    else if (uVar1 == 0x4000) {
      iVar4 = 1;
    }
    local_10[0] = "CORE_BTN_MES_04";
    local_10[1] = "CORE_BTN_MES_05";
    local_10[2] = "CORE_BTN_MES_06";
    local_10[3] = "CORE_BTN_MES_07";
    pcVar2 = local_10[iVar4];
    iVar4 = *(int *)(param_1 + 0x18);
    if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x20) < *(uint *)(iVar4 + 0x80))) &&
        (piVar3 = *(int **)(*(uint *)(param_1 + 0x20) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar3 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar3 + 8))(), iVar4 == 3)) {
      uVar5 = FUN_00e03ea0(pcVar2);
      piVar3[0x2a] = -1;
      piVar3[0x2b] = 0;
      if (((piVar3[5] != 0) && (*(int *)(piVar3[5] + 4) != 0)) &&
         (iVar4 = FUN_00cb1cd0(uVar5), -1 < iVar4)) {
        piVar3[0x2a] = iVar4;
        piVar3[0x2b] = 0;
        piVar3[0x2e] = 0;
      }
    }
  }
  else {
    if (DAT_01b77eb8 < 0) {
      iVar4 = FUN_00caa220();
    }
    else {
      iVar4 = FUN_00ca9f90(DAT_01b77eb8);
    }
    if (iVar4 != 0) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0x20),iVar4,0,0xffffffff);
      return;
    }
  }
  return;
}

// 00D03AA0  FUN_00d03aa0  size=214  [run]
int __thiscall FUN_00d03aa0(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
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
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
        (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0)
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 4)) {
      piVar2 = (int *)0x0;
    }
    FUN_00ce51d0(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}


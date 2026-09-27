// src/unsorted/unit_00D5DBE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D5DBE0..00D5DE90, 6 functions

#include "mgrr.h"

// 00D5DBE0  FUN_00d5dbe0  size=43  [run]
void __fastcall FUN_00d5dbe0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00D5DC10  FUN_00d5dc10  size=63  [run]
void __thiscall FUN_00d5dc10(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1[3] < param_1[2]) {
    iVar2 = param_1[3] * 0x34;
    puVar3 = (undefined4 *)(param_1[1] + iVar2);
    if (puVar3 != (undefined4 *)0x0) {
      for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *param_3;
        param_3 = param_3 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1[3] = param_1[3] + 1;
    *param_2 = param_1[1] + iVar2;
    return;
  }
  *param_2 = *param_1;
  return;
}

// 00D5DC50  FUN_00d5dc50  size=216  [run]
undefined4 __thiscall
FUN_00d5dc50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char local_80 [104];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _sprintf_s(local_80,0x80,"%s(%d)",param_5,param_6);
  pcVar1 = _strrchr(local_80,0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = local_80;
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  piVar2 = (int *)FUN_00a6dd90();
  uVar3 = (**(code **)(*piVar2 + 0x48))(&LAB_00d58130,0,param_4,pcVar1);
  piVar2 = (int *)FUN_00a6dd90();
  iVar4 = (**(code **)(*piVar2 + 0x68))(uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar3;
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x70))(uVar3,&LAB_00d4cba0);
  *(undefined4 *)(iVar4 + 0x24) = 0xffff;
  *(undefined4 *)(iVar4 + 0x28) = param_1;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_18;
  *(undefined4 *)(iVar4 + 0x30) = uStack_14;
  return uVar3;
}

// 00D5DD30  FUN_00d5dd30  size=216  [run]
undefined4 __thiscall
FUN_00d5dd30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char local_80 [104];
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  _sprintf_s(local_80,0x80,"%s(%d)",param_5,param_6);
  pcVar1 = _strrchr(local_80,0x5c);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = local_80;
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  piVar2 = (int *)FUN_00a6dd90();
  uVar3 = (**(code **)(*piVar2 + 0x48))(&LAB_00d58170,0,param_4,pcVar1);
  piVar2 = (int *)FUN_00a6dd90();
  iVar4 = (**(code **)(*piVar2 + 0x68))(uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar3;
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x70))(uVar3,&LAB_00d4ccc0);
  *(undefined4 *)(iVar4 + 0x24) = 0xffff;
  *(undefined4 *)(iVar4 + 0x28) = param_1;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_18;
  *(undefined4 *)(iVar4 + 0x30) = uStack_14;
  return uVar3;
}

// 00D5DE10  FUN_00d5de10  size=21  [run]
undefined4 * __fastcall FUN_00d5de10(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00D5DE90  FUN_00d5de90  size=21  [run]
undefined4 * __fastcall FUN_00d5de90(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}


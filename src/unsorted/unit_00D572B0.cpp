// src/unsorted/unit_00D572B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D572B0..00D574A0, 4 functions

#include "mgrr.h"

// 00D572B0  FUN_00d572b0  size=43  [run]
void __fastcall FUN_00d572b0(int param_1)

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

// 00D572E0  FUN_00d572e0  size=124  [run]
int __thiscall FUN_00d572e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar1 = param_2 * 0x34;
      iVar2 = param_2;
      do {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + iVar1);
        *puVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x34 + iVar1);
        puVar3[1] = puVar3[0xe];
        puVar3[10] = puVar3[0x17];
        FID_conflict__memcpy(puVar3 + 2,puVar3 + 0xf,0x20);
        puVar3[0xb] = puVar3[0x18];
        puVar3[0xc] = puVar3[0x19];
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x34;
      } while (iVar2 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    iVar2 = -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      iVar2 = param_2;
    }
    return iVar2;
  }
  return -1;
}

// 00D57360  FUN_00d57360  size=216  [run]
undefined4 __thiscall
FUN_00d57360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  uVar3 = (**(code **)(*piVar2 + 0x48))(&LAB_00d4cb00,0,param_4,pcVar1);
  piVar2 = (int *)FUN_00a6dd90();
  iVar4 = (**(code **)(*piVar2 + 0x68))(uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar3;
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x70))(uVar3,&LAB_00d4cb40);
  *(undefined4 *)(iVar4 + 0x24) = 0xffff;
  *(undefined4 *)(iVar4 + 0x28) = param_1;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_18;
  *(undefined4 *)(iVar4 + 0x30) = uStack_14;
  return uVar3;
}

// 00D574A0  FUN_00d574a0  size=216  [run]
undefined4 __thiscall
FUN_00d574a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  uVar3 = (**(code **)(*piVar2 + 0x48))(&LAB_00d4cc00,0,param_4,pcVar1);
  piVar2 = (int *)FUN_00a6dd90();
  iVar4 = (**(code **)(*piVar2 + 0x68))(uVar3);
  if (iVar4 == 0) {
    FUN_00dd5650(&DAT_016b0c68);
    return uVar3;
  }
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x70))(uVar3,&LAB_00d4cc40);
  *(undefined4 *)(iVar4 + 0x24) = 0xffff;
  *(undefined4 *)(iVar4 + 0x28) = param_1;
  *(undefined4 *)(iVar4 + 0x2c) = uStack_18;
  *(undefined4 *)(iVar4 + 0x30) = uStack_14;
  return uVar3;
}


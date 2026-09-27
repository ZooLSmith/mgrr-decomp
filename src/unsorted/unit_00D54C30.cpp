// src/unsorted/unit_00D54C30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D54C30..00D54FE0, 7 functions

#include "mgrr.h"

// 00D54C30  FUN_00d54c30  size=80  [run]
void FUN_00d54c30(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c14bb0();
  (**(code **)(*piVar1 + 0x58))(0x40f,1);
  piVar1 = (int *)FUN_00c18350();
  (**(code **)(*piVar1 + 0x60))(0x40f);
  iVar2 = FUN_00a7f600(0xd5414);
  if (iVar2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d54c7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x20))();
      return;
    }
  }
  return;
}

// 00D54C80  FUN_00d54c80  size=68  [run]
uint FUN_00d54c80(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01be9db8;
  (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
  iVar2 = FUN_00dd6d70(puVar3);
  return -(uint)(iVar2 != 0) & (uint)piVar1;
}

// 00D54D20  FUN_00d54d20  size=106  [run]
void __thiscall FUN_00d54d20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  
  if (param_2 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    uVar3 = 0;
    if (piVar1 != (int *)0x0) {
      puVar5 = &DAT_01b35140;
      (**(code **)(*piVar1 + 4))(&DAT_01b35140);
      iVar2 = FUN_00dd6d70(puVar5);
      uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    *(uint *)(param_1 + 0x124) = uVar3;
    if (uVar3 != 0) {
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
      *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(*(int *)(param_1 + 0x124) + 0x197c);
    }
  }
  return;
}

// 00D54D90  FUN_00d54d90  size=234  [run]
void __fastcall FUN_00d54d90(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00c193e0(5);
  FUN_00c193e0(6);
  FUN_00c19400(3,0);
  FUN_00c19400(2,0);
  FUN_00c19400(2,1);
  FUN_00c19400(4,0);
  FUN_00c18610(2,0);
  FUN_00c18610(0,1);
  uVar1 = FUN_00e678d0(2,0xcf09,0xffffffff);
  FUN_00e80d00(uVar1);
  iVar2 = FUN_00a7f600(0xf5030);
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x364) = *(uint *)(iVar2 + 0x364) & 0xfffffffd;
      *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(iVar2 + 0x18c);
      *(undefined4 *)(iVar2 + 0x18c) = 0;
    }
  }
  (**(code **)(*(int *)(param_1 + 0x170) + 8))(0,0,0);
  return;
}

// 00D54EE0  FUN_00d54ee0  size=120  [run]
void FUN_00d54ee0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c19c00(0,1,0);
  if (iVar1 == 0) {
    FUN_00e5e0c0("se_p470_qte_playable_start",0,0xffffffff,0);
    return;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    FUN_00e5e0c0("se_p470_qte_playable_start",0,0xffffffff,0);
    return;
  }
  puVar3 = &DAT_01b34eb0;
  (**(code **)(*piVar2 + 4))(&DAT_01b34eb0);
  iVar1 = FUN_00dd6d70(puVar3);
  FUN_00e5e0c0("se_p470_qte_playable_start",-(uint)(iVar1 != 0) & (uint)piVar2,0xffffffff,0);
  return;
}

// 00D54F60  FUN_00d54f60  size=120  [run]
void FUN_00d54f60(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00c19c00(0,1,0);
  if (iVar1 == 0) {
    FUN_00e5e0c0("se_p470_qte_playable_end",0,0xffffffff,0);
    return;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    FUN_00e5e0c0("se_p470_qte_playable_end",0,0xffffffff,0);
    return;
  }
  puVar3 = &DAT_01b34eb0;
  (**(code **)(*piVar2 + 4))(&DAT_01b34eb0);
  iVar1 = FUN_00dd6d70(puVar3);
  FUN_00e5e0c0("se_p470_qte_playable_end",-(uint)(iVar1 != 0) & (uint)piVar2,0xffffffff,0);
  return;
}

// 00D54FE0  FUN_00d54fe0  size=98  [run]
undefined4 FUN_00d54fe0(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d70(puVar3);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar1 + 0x32c))();
      if ((iVar2 == 0) && (iVar2 = FUN_00a8cab0(), iVar2 != 0x46)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}


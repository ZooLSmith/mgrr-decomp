// src/misc/cItemStageDropLeftHand.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094D620..009504C0, 7 functions

#include "types.h"

// 0094D620  cItemStageDropLeftHand::vf00  size=6  [class]
char * cItemStageDropLeftHand::vf00(void)

{
  return "cItemStageDropLeftHand";
}

// 0094D630  cItemStageDropLeftHand::vf10  size=6  [class]
char * cItemStageDropLeftHand::vf10(void)

{
  return "cItemStageDropInstant";
}

// 0094D670  cItemStageDropLeftHand::vf0C  size=138  [class]
void __fastcall cItemStageDropLeftHand::vf0C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00a7c8a0(*(undefined4 *)(param_1 + 0x80));
    FUN_009f8ae0();
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar3 = &DAT_01b35390;
      (**(code **)(*piVar1 + 4))(&DAT_01b35390);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        iVar2 = (**(code **)(*piVar1 + 0x300))();
        if (iVar2 == 1) {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
        }
        else {
          *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x100;
        }
      }
    }
  }
  iVar2 = FUN_00a7c8b0();
  if (*(float *)(iVar2 + 4) <= -1000.0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return;
}

// 0094D700  FUN_0094d700  size=68  [between]
void __thiscall FUN_0094d700(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  if ((*(int *)(param_1 + 0x50) != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar3 = &DAT_01b353b0;
    (**(code **)(*piVar1 + 4))(&DAT_01b353b0);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      FUN_005e8a80(param_2);
    }
  }
  return;
}

// 0094D750  cItemStageDropLeftHand::vf28  size=117  [class]
void __fastcall cItemStageDropLeftHand::vf28(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  if (((*(int *)(param_1 + 0x50) != 0) && (iVar3 = FUN_00a7c7e0(), iVar3 != 0)) &&
     (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar6 = &DAT_01b353b0;
    (**(code **)(*piVar4 + 4))(&DAT_01b353b0);
    iVar3 = FUN_00dd6d80(puVar6);
    if ((iVar3 != 0) && (cVar2 = FUN_005e8a60(), cVar2 == '\0')) {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      FUN_00a7c8a0();
      uVar5 = FUN_0094aa20(uVar1,0xf00);
      FUN_00cbb410((int)((ulonglong)uVar5 >> 0x20),0xffffffff,(int)uVar5);
    }
  }
  return;
}

// 00950480  cItemStageDropLeftHand::vf04  size=57  [class]
undefined4 * __thiscall cItemStageDropLeftHand::vf04(undefined4 *param_1,byte param_2)

{
  param_1[0x18] = 0;
  *param_1 = cItemBase::vftable;
  if (param_1[0x14] != 0) {
    FUN_00a805f0();
    param_1[0x14] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009504C0  cItemStageDropLeftHand::vf1C  size=83  [class]
void __fastcall cItemStageDropLeftHand::vf1C(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (((*(int *)(param_1 + 0x50) != 0) && (iVar1 = FUN_00a7c7e0(), iVar1 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b353b0;
    (**(code **)(*piVar2 + 4))(&DAT_01b353b0);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_005e8a70();
      FUN_0094f090(*(undefined4 *)(param_1 + 0x10));
    }
  }
  return;
}


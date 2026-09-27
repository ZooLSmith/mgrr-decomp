// src/misc/cItemStageDropCollectable.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094D280..00953180, 5 functions

#include "types.h"

// 0094D280  cItemStageDropCollectable::vf00  size=6  [class]
char * cItemStageDropCollectable::vf00(void)

{
  return "cItemStageDropCollectable";
}

// 0094D290  cItemStageDropCollectable::vf10  size=6  [class]
char * cItemStageDropCollectable::vf10(void)

{
  return "cItemStageDrop";
}

// 0094D320  cItemStageDropCollectable::vf2C  size=83  [class]
void __thiscall cItemStageDropCollectable::vf2C(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if (((param_2 != 0) &&
      (*(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x5c),
      *(int *)(param_1 + 0x50) != 0)) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
    puVar3 = &DAT_01b35390;
    (**(code **)(*piVar1 + 4))(&DAT_01b35390);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      FUN_005e9780(*(undefined4 *)(param_1 + 0x90));
    }
  }
  return;
}

// 00950280  cItemStageDropCollectable::vf04  size=57  [class]
undefined4 * __thiscall cItemStageDropCollectable::vf04(undefined4 *param_1,byte param_2)

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

// 00953180  cItemStageDropCollectable::vf1C  size=261  [class]
void __fastcall cItemStageDropCollectable::vf1C(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  
  FUN_00e5e050("core_se_sys_item_get",0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0x3855170f) {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(0);
    if (iVar3 == 0) goto LAB_009531fe;
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar5);
      if (iVar3 != 0) {
        FUN_00b7ca60();
      }
    }
    uVar4 = 4;
  }
  else {
    if (iVar1 != 0x4cbfda41) goto LAB_009531fe;
    uVar4 = 5;
  }
  FUN_00cc1250(uVar4,0,0);
LAB_009531fe:
  uVar4 = *(undefined4 *)(param_1 + 0x90);
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  FUN_0094ec70(iVar1,uVar4);
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  FUN_0094f090(*(undefined4 *)(param_1 + 0x10));
  if (iVar1 == 0x75d75fe5) {
    uVar6 = 0;
    uVar4 = FUN_0094bc80(0x75d75fe5);
    FUN_00cc1250(3,uVar4,uVar6);
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  if ((*(uint *)(param_1 + 4) & 0x10000) != 0) {
    FUN_0094e3e0(*(undefined4 *)(param_1 + 0x68));
  }
  return;
}


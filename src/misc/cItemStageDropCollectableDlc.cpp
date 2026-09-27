// src/misc/cItemStageDropCollectableDlc.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0094F200..00952130, 5 functions

#include "types.h"

// 0094F200  cItemStageDropCollectableDlc::vf00  size=6  [class]
char * cItemStageDropCollectableDlc::vf00(void)

{
  return "cItemStageDropCollectableDlc";
}

// 0094F210  cItemStageDropCollectableDlc::vf10  size=6  [class]
char * cItemStageDropCollectableDlc::vf10(void)

{
  return "cItemStageDrop";
}

// 0094F2A0  cItemStageDropCollectableDlc::vf2C  size=83  [class]
void __thiscall cItemStageDropCollectableDlc::vf2C(int param_1,int param_2)

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
      FUN_005ea350(*(undefined4 *)(param_1 + 0x90));
    }
  }
  return;
}

// 009520F0  cItemStageDropCollectableDlc::vf04  size=57  [class]
undefined4 * __thiscall cItemStageDropCollectableDlc::vf04(undefined4 *param_1,byte param_2)

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

// 00952130  cItemStageDropCollectableDlc::vf1C  size=574  [class]
void __fastcall cItemStageDropCollectableDlc::vf1C(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_00e5e050("core_se_sys_item_get",0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (((iVar1 == 0x3855170f) || (iVar1 == 0x4cbfda41)) && (iVar2 = FUN_00d46780(), iVar2 != 0)) {
    if (iVar1 == 0x3855170f) {
      FUN_00cbac80(0xffffffff,0x94,0);
      goto LAB_009521c0;
    }
    if (iVar1 != 0x4cbfda41) goto LAB_009521b4;
    FUN_00cbac80(0xffffffff,0x95,0);
  }
  else {
    uVar6 = FUN_0094aa20(iVar1,0);
    FUN_00cbac80(0xffffffff,uVar6);
LAB_009521b4:
    if (iVar1 == 0x3855170f) {
LAB_009521c0:
      piVar3 = (int *)FUN_00c13920();
      iVar2 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
          puVar5 = &DAT_01be9c38;
          (**(code **)(*piVar3 + 4))(&DAT_01be9c38);
          iVar2 = FUN_00dd6d80(puVar5);
          if (iVar2 != 0) {
            FUN_00b7ca60();
            uVar6 = 0;
            fVar4 = (float10)FUN_00bc2f00(0);
            FUN_00bda060((float)fVar4,uVar6);
          }
        }
        FUN_00cc1250(4,0,0);
      }
      iVar2 = FUN_00d46780();
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x90) == 6) {
          uVar6 = 0x13;
        }
        else {
          if (*(int *)(param_1 + 0x90) != 8) goto LAB_00952253;
          uVar6 = 0x15;
        }
        FUN_00c82550(uVar6);
      }
LAB_00952253:
      iVar2 = FUN_00d467a0();
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x90) == 7) {
          FUN_00c82950(0xf);
        }
        else if (*(int *)(param_1 + 0x90) == 9) {
          FUN_00c82950(0x11);
        }
      }
      goto LAB_009522e8;
    }
    if (iVar1 != 0x4cbfda41) goto LAB_009522e8;
  }
  piVar3 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar5 = &DAT_01be9c38;
      (**(code **)(*piVar3 + 4))(&DAT_01be9c38);
      iVar2 = FUN_00dd6d80(puVar5);
      if (iVar2 != 0) {
        FUN_00bd9f60();
      }
    }
    FUN_00cc1250(5,0,0);
  }
LAB_009522e8:
  uVar6 = *(undefined4 *)(param_1 + 0x90);
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  FUN_0094f460(iVar1,uVar6);
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  if ((iVar1 == 0x263b6dae) || (iVar1 == 0x513c5d38)) {
    uVar7 = 0;
    uVar6 = FUN_0094c150(iVar1);
    FUN_00cc1250(3,uVar6,uVar7);
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  if ((*(uint *)(param_1 + 4) & 0x10000) != 0) {
    FUN_0094e3e0(*(undefined4 *)(param_1 + 0x68));
  }
  return;
}


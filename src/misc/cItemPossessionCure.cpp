// src/misc/cItemPossessionCure.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00949C40..0094DE20, 8 functions

#include "mgrr.h"
#include "cItemPossessionCure.h"

// 00949C40  cItemPossessionCure::vf14  size=17  [class]
undefined4 __fastcall cItemPossessionCure::vf14(int param_1)

{
  if (DAT_01bea024 == 10) {
    return *(undefined4 *)(param_1 + 0x60);
  }
  return *(undefined4 *)(param_1 + 0x58);
}

// 00949C60  cItemPossessionCure::vf08  size=25  [class]
void __thiscall cItemPossessionCure::vf08(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x44);
  return;
}

// 0094DAE0  cItemPossessionCure::vf00  size=6  [class]
char * cItemPossessionCure::vf00(void)

{
  return "cItemPossessionCure";
}

// 0094DAF0  cItemPossessionCure::vf10  size=6  [class]
char * cItemPossessionCure::vf10(void)

{
  return "cItemPossessionBase";
}

// 0094DB00  cItemPossessionCure::vf04  size=75  [class]
undefined4 * __thiscall cItemPossessionCure::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cItemBase::vftable;
  if (param_1[0x14] != 0) {
    FUN_00a805f0();
    param_1[0x14] = 0;
  }
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

// 0094DB50  cItemPossessionCure::vf30  size=338  [class]
undefined4 __fastcall cItemPossessionCure::vf30(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  if (0 < param_1[0x15]) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        if (param_1[4] == 0xd92bb0f) {
          iVar2 = FUN_00d46710();
          if ((iVar2 == 0) && ((DAT_018b9174 < 0xe00 || (0xe20 < DAT_018b9174)))) {
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x3c + DAT_01b76230 * 4);
          }
          else {
            iVar2 = FUN_009c4bf0();
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x3c + iVar2 * 4);
          }
          FUN_00be8310(uVar3);
          FUN_00e5e050("core_se_sys_item_electro_repair",0);
          (**(code **)(*param_1 + 0x24))();
          return 1;
        }
        if (param_1[4] == 0x23a6f56d) {
          iVar2 = FUN_00d46710();
          if ((iVar2 == 0) && ((DAT_018b9174 < 0xe00 || (0xe20 < DAT_018b9174)))) {
            uVar3 = *(undefined4 *)(param_1[0x19] + DAT_01b76230 * 4);
          }
          else {
            iVar2 = FUN_009c4bf0();
            uVar3 = *(undefined4 *)(param_1[0x19] + iVar2 * 4);
          }
          FUN_00b94770(uVar3);
          FUN_00e5e050("core_se_sys_item_repair",0);
          FUN_00949be0();
          piVar1 = (int *)FUN_00c1b9a0();
          (**(code **)(*piVar1 + 0x70))();
        }
        uVar3 = 1;
      }
    }
    (**(code **)(*param_1 + 0x24))();
  }
  return uVar3;
}

// 0094DCB0  cItemPossessionCure::vf34  size=366  [class]
undefined4 __fastcall cItemPossessionCure::vf34(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  if (0 < param_1[0x15]) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        if (param_1[4] == 0x23a6f56d) {
          iVar2 = FUN_00d46710();
          if ((iVar2 == 0) && ((DAT_018b9174 < 0xe00 || (0xe20 < DAT_018b9174)))) {
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x14 + DAT_01b76230 * 4);
          }
          else {
            iVar2 = FUN_009c4bf0();
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x14 + iVar2 * 4);
          }
          FUN_00b94770(uVar3);
          FUN_00e5e050("core_se_sys_item_repair",0);
          DAT_01dc08b0 = (uint)((DAT_01bea094 & 0x40000) != 0x40000);
          piVar1 = (int *)FUN_00c1b9a0();
          (**(code **)(*piVar1 + 0x70))();
          (**(code **)(*param_1 + 0x24))();
          return 1;
        }
        if (param_1[4] == 0xd92bb0f) {
          iVar2 = FUN_00d46710();
          if ((iVar2 == 0) && ((DAT_018b9174 < 0xe00 || (0xe20 < DAT_018b9174)))) {
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x3c + DAT_01b76230 * 4);
          }
          else {
            iVar2 = FUN_009c4bf0();
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x3c + iVar2 * 4);
          }
          FUN_00be8310(uVar3);
          FUN_00e5e050("core_se_sys_item_electro_repair",0);
        }
        uVar3 = 1;
      }
    }
    (**(code **)(*param_1 + 0x24))();
  }
  return uVar3;
}

// 0094DE20  cItemPossessionCure::vf38  size=247  [class]
undefined4 __fastcall cItemPossessionCure::vf38(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  if (0 < param_1[0x15]) {
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0);
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        if (param_1[4] == 0x23a6f56d) {
          iVar2 = FUN_00d46710();
          if ((iVar2 == 0) && ((DAT_018b9174 < 0xe00 || (0xe20 < DAT_018b9174)))) {
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x28 + DAT_01b76230 * 4);
          }
          else {
            iVar2 = FUN_009c4bf0();
            uVar3 = *(undefined4 *)(param_1[0x19] + 0x28 + iVar2 * 4);
          }
          FUN_00b94770(uVar3);
          FUN_00e5e050("core_se_sys_item_repair",0);
          DAT_01dc08b0 = (uint)((DAT_01bea094 & 0x40000) != 0x40000);
          piVar1 = (int *)FUN_00c1b9a0();
          (**(code **)(*piVar1 + 0x70))();
        }
        uVar3 = 1;
      }
    }
    (**(code **)(*param_1 + 0x24))();
  }
  return uVar3;
}


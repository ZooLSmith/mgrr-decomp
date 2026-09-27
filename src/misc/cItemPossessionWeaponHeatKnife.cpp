// src/misc/cItemPossessionWeaponHeatKnife.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00949780..0094F600, 8 functions

#include "types.h"

// 00949780  cItemPossessionWeaponHeatKnife::vf08  size=13  [class]
void __thiscall cItemPossessionWeaponHeatKnife::vf08(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x10);
  return;
}

// 00949790  cItemPossessionWeaponHeatKnife::vf14  size=4  [class]
undefined4 __fastcall cItemPossessionWeaponHeatKnife::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}

// 0094C290  cItemPossessionWeaponHeatKnife::vf00  size=6  [class]
char * cItemPossessionWeaponHeatKnife::vf00(void)

{
  return "cItemPossessionWeaponHeatKnife";
}

// 0094C2A0  cItemPossessionWeaponHeatKnife::vf10  size=6  [class]
char * cItemPossessionWeaponHeatKnife::vf10(void)

{
  return "cItemPossessionBase";
}

// 0094C2F0  cItemPossessionWeaponHeatKnife::vf1C  size=110  [class]
void __fastcall cItemPossessionWeaponHeatKnife::vf1C(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  param_1[1] = param_1[1] & 0xfffeffff;
  iVar3 = param_1[0x15];
  param_1[0x15] = iVar3 + 3;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (iVar1 < param_1[0x15]) {
    iVar1 = (**(code **)(*param_1 + 0x14))();
    param_1[0x15] = iVar1;
    if (iVar1 <= iVar3) {
      return;
    }
    uVar4 = FUN_0094aa20(param_1[4],0);
    uVar2 = (undefined4)uVar4;
    iVar3 = (int)((ulonglong)uVar4 >> 0x20) - iVar3;
  }
  else {
    uVar2 = FUN_0094aa20(param_1[4],0);
    iVar3 = 3;
  }
  FUN_00cbac80(iVar3,uVar2);
  FUN_00e5e050("core_se_sys_item_get",0);
  return;
}

// 0094C360  cItemPossessionWeaponHeatKnife::vf18  size=112  [class]
void __fastcall cItemPossessionWeaponHeatKnife::vf18(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  param_1[1] = param_1[1] & 0xfffeffff;
  iVar3 = param_1[0x15];
  param_1[0x15] = iVar3 + 3;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (iVar1 < param_1[0x15]) {
    iVar1 = (**(code **)(*param_1 + 0x14))();
    param_1[0x15] = iVar1;
    if (iVar1 <= iVar3) {
      return;
    }
    uVar4 = FUN_0094aa20(param_1[4],0);
    uVar2 = (undefined4)uVar4;
    iVar3 = (int)((ulonglong)uVar4 >> 0x20) - iVar3;
  }
  else {
    uVar2 = FUN_0094aa20(param_1[4],0);
    iVar3 = 3;
  }
  FUN_00cbac80(iVar3,uVar2);
  FUN_00e5e050("core_se_sys_item_get",0);
  return;
}

// 0094C9A0  cItemPossessionWeaponHeatKnife::cItemPossessionWeaponHeatKnife  size=43  [class]
undefined4 * cItemPossessionWeaponHeatKnife::cItemPossessionWeaponHeatKnife(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x5c,&DAT_01b7bd48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x14] = 0;
    puVar1[1] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *puVar1 = vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 0094F600  cItemPossessionWeaponHeatKnife::vf04  size=75  [class]
undefined4 * __thiscall cItemPossessionWeaponHeatKnife::vf04(undefined4 *param_1,byte param_2)

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


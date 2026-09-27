// src/misc/cItemPossessionWeaponGun.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00949910..0094DA00, 17 functions

#include "mgrr.h"
#include "cItemPossessionWeaponGun.h"

// 00949910  cItemPossessionWeaponGun::vf00  size=6  [class]
char * cItemPossessionWeaponGun::vf00(void)

{
  return "cItemPossessionWeaponGun";
}

// 00949920  cItemPossessionWeaponGun::vf10  size=6  [class]
char * cItemPossessionWeaponGun::vf10(void)

{
  return "cItemPossessionBase";
}

// 00949970  cItemPossessionWeaponGun::vf08  size=41  [class]
void __thiscall cItemPossessionWeaponGun::vf08(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 0x44);
  return;
}

// 009499A0  cItemPossessionWeaponGun::vf30  size=40  [class]
undefined4 __fastcall cItemPossessionWeaponGun::vf30(int *param_1)

{
  int *piVar1;
  
  if (param_1[0x1a] == 0) {
    (**(code **)(*param_1 + 0x40))();
  }
  piVar1 = param_1 + 0x1a;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    param_1[0x1a] = 0;
    return 0;
  }
  return 1;
}

// 009499E0  cItemPossessionWeaponGun::vf40  size=56  [class]
undefined4 __fastcall cItemPossessionWeaponGun::vf40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  uVar3 = 0;
  if (0 < iVar1) {
    iVar2 = *(int *)(param_1 + 0x6c);
    if (iVar2 < *(int *)(param_1 + 0x60)) {
      *(int *)(param_1 + 0x68) = iVar2;
      *(int *)(param_1 + 0x5c) = iVar1 - iVar2;
      if (iVar1 - iVar2 < 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        return 1;
      }
    }
    else {
      *(int *)(param_1 + 0x68) = iVar1;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    uVar3 = 1;
  }
  return uVar3;
}

// 00949A20  cItemPossessionWeaponGun::vf48  size=4  [class]
undefined4 __fastcall cItemPossessionWeaponGun::vf48(int param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}

// 00949A30  cItemPossessionWeaponGun::vf4C  size=7  [class]
int __fastcall cItemPossessionWeaponGun::vf4C(int param_1)

{
  return *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x5c);
}

// 00949A40  cItemPossessionWeaponGun::vf50  size=17  [class]
undefined4 __fastcall cItemPossessionWeaponGun::vf50(int param_1)

{
  if (DAT_01bea024 == 0xc) {
    return *(undefined4 *)(param_1 + 100);
  }
  return *(undefined4 *)(param_1 + 0x60);
}

// 00949A60  cItemPossessionWeaponGun::vf20  size=19  [class]
void __thiscall cItemPossessionWeaponGun::vf20(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x5c);
  *piVar1 = *piVar1 - param_2;
  if (*piVar1 < 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}

// 00949A80  cItemPossessionWeaponGun::vf28  size=45  [class]
void __thiscall cItemPossessionWeaponGun::vf28(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x17] = param_2;
  iVar1 = (**(code **)(*param_1 + 0x50))();
  if (iVar1 < param_1[0x17]) {
    iVar1 = (**(code **)(*param_1 + 0x50))();
    param_1[0x17] = iVar1;
  }
  param_1[0x1a] = 0;
  return;
}

// 00949AB0  cItemPossessionWeaponGun::vf3C  size=13  [class]
bool __fastcall cItemPossessionWeaponGun::vf3C(int param_1)

{
  return 0 < *(int *)(param_1 + 0x5c);
}

// 00949AC0  cItemPossessionWeaponGun::vf54  size=53  [class]
void __thiscall cItemPossessionWeaponGun::vf54(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x17] = param_1[0x17] + param_2;
  iVar1 = (**(code **)(*param_1 + 0x50))();
  if (iVar1 < param_1[0x17]) {
    iVar1 = (**(code **)(*param_1 + 0x50))();
    param_1[0x17] = iVar1;
  }
  if (param_1[0x1a] == 0) {
    (**(code **)(*param_1 + 0x40))();
  }
  return;
}

// 00949B00  cItemPossessionWeaponGun::vf2C  size=27  [class]
bool __fastcall cItemPossessionWeaponGun::vf2C(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x50))();
  return iVar1 <= param_1[0x1a] + param_1[0x17];
}

// 0094D950  cItemPossessionWeaponGun::vf04  size=75  [class]
undefined4 * __thiscall cItemPossessionWeaponGun::vf04(undefined4 *param_1,byte param_2)

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

// 0094D9A0  cItemPossessionWeaponGun::vf44  size=9  [class]
bool __fastcall cItemPossessionWeaponGun::vf44(int param_1)

{
  return *(int *)(param_1 + 0x68) == 0;
}

// 0094D9B0  cItemPossessionWeaponGun::vf1C  size=71  [class]
void __fastcall cItemPossessionWeaponGun::vf1C(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x50);
  param_1[0x17] = param_1[0x17] + 1;
  iVar2 = (*pcVar1)();
  if (iVar2 < param_1[0x17]) {
    iVar2 = (**(code **)(*param_1 + 0x50))();
    param_1[0x17] = iVar2;
    return;
  }
  uVar3 = FUN_0094aa20(param_1[4],0);
  FUN_00cbac80(1,uVar3);
  FUN_00e5e050("core_se_sys_item_get",0);
  return;
}

// 0094DA00  cItemPossessionWeaponGun::vf18  size=81  [class]
void __thiscall cItemPossessionWeaponGun::vf18(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x50);
  param_1[0x17] = param_1[0x17] + param_2;
  iVar2 = (*pcVar1)();
  if (iVar2 < param_1[0x17]) {
    iVar2 = (**(code **)(*param_1 + 0x50))();
    param_1[0x17] = iVar2;
    return;
  }
  uVar3 = FUN_0094aa20(param_1[4],0);
  FUN_00cbac80(param_2,uVar3);
  FUN_00e5e050("core_se_sys_item_get",0);
  return;
}


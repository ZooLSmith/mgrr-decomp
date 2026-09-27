// src/misc/cWeaponInfoDispBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D0BC50..00D276E0, 3 functions

#include "mgrr.h"
#include "cWeaponInfoDispBase.h"

// 00D0BC50  cWeaponInfoDispBase::cWeaponInfoDispBase  size=18  [class]
undefined4 * __fastcall cWeaponInfoDispBase::cWeaponInfoDispBase(undefined4 *param_1)

{
  cCustomObjCtrl::cCustomObjCtrl();
  *param_1 = vftable;
  return param_1;
}

// 00D0BCA0  cWeaponInfoDispBase::vf00  size=65  [class]
undefined4 * __thiscall cWeaponInfoDispBase::vf00(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0x10] + 0xc);
  *param_1 = cCustomObjWorkBase::vftable;
  (*pcVar1)();
  param_1[0x10] = cUICtrl::vftable;
  FUN_00cc7640();
  *param_1 = cUIWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D276E0  cWeaponInfoDispBase::vf14  size=86  [class]
undefined4 __thiscall cWeaponInfoDispBase::vf14(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((DAT_01bea090 & 0x80000000) == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 4;
  }
  FUN_00d1fb20(uVar1,0x13,param_2,0,1);
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20000000;
    return 1;
  }
  return 0;
}


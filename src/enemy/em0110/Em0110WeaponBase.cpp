// src/enemy/em0110/Em0110WeaponBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA92F0..00AA93B0, 3 functions

#include "mgrr.h"
#include "Em0110WeaponBase.h"

// 00AA92F0  Em0110WeaponBase::Em0110WeaponBase  size=70  [class]
undefined4 * __fastcall Em0110WeaponBase::Em0110WeaponBase(undefined4 *param_1)

{
  int iVar1;
  
  Behavior::Behavior_95();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = vftable;
  iVar1 = 5;
  do {
    FUN_00a8f0e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00AA9340  Em0110WeaponBase::vf04  size=6  [class]
undefined * Em0110WeaponBase::vf04(void)

{
  return &DAT_01b34e88;
}

// 00AA93B0  Em0110WeaponBase::vf00  size=105  [class]
undefined4 * __thiscall Em0110WeaponBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


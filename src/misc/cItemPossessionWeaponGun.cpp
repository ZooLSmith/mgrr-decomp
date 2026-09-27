// src/misc/cItemPossessionWeaponGun.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00949910..0094D950, 2 functions

#include "types.h"

// 00949910  cItemPossessionWeaponGun::vf00  size=6  [class]
char * cItemPossessionWeaponGun::vf00(void)

{
  return "cItemPossessionWeaponGun";
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


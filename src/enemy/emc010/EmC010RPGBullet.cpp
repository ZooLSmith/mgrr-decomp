// src/enemy/emc010/EmC010RPGBullet.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00711D10..00ABA170, 5 functions

#include "mgrr.h"
#include "EmC010RPGBullet.h"

// 00711D10  EmC010RPGBullet::vf40  size=66  [class]
bool __fastcall EmC010RPGBullet::vf40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_00a92f90();
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x4b0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(uVar1,0x31004);
  }
  iVar2 = Em0010RPGBullet::vf40();
  return iVar2 != 0;
}

// 00AB41D0  EmC010RPGBullet::vf04  size=6  [class]
undefined * EmC010RPGBullet::vf04(void)

{
  return &DAT_01b357b0;
}

// 00AB41E0  EmC010RPGBullet::vf94  size=6  [class]
undefined4 EmC010RPGBullet::vf94(void)

{
  return 2;
}

// 00AB41F0  EmC010RPGBullet::vf98  size=6  [class]
undefined4 EmC010RPGBullet::vf98(void)

{
  return 0x31004;
}

// 00ABA170  EmC010RPGBullet::vf00  size=105  [class]
undefined4 * __thiscall EmC010RPGBullet::vf00(undefined4 *param_1,byte param_2)

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


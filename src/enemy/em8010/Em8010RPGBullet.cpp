// src/enemy/em8010/Em8010RPGBullet.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0061F720..00ABA870, 5 functions

#include "mgrr.h"
#include "Em8010RPGBullet.h"

// 0061F720  Em8010RPGBullet::vf40  size=66  [class]
bool __fastcall Em8010RPGBullet::vf40(int param_1)

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

// 00AB5FE0  Em8010RPGBullet::vf04  size=6  [class]
undefined * Em8010RPGBullet::vf04(void)

{
  return &DAT_01b35550;
}

// 00AB5FF0  Em8010RPGBullet::vf94  size=6  [class]
undefined4 Em8010RPGBullet::vf94(void)

{
  return 3;
}

// 00AB6000  Em8010RPGBullet::vf98  size=6  [class]
undefined4 Em8010RPGBullet::vf98(void)

{
  return 0x31004;
}

// 00ABA870  Em8010RPGBullet::vf00  size=105  [class]
undefined4 * __thiscall Em8010RPGBullet::vf00(undefined4 *param_1,byte param_2)

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


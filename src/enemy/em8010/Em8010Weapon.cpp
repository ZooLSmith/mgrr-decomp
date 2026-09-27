// src/enemy/em8010/Em8010Weapon.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0061E740..00ABA790, 5 functions

#include "mgrr.h"
#include "Em8010Weapon.h"

// 0061E740  Em8010Weapon::vf40  size=354  [class]
undefined4 __fastcall Em8010Weapon::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = cEm0010Weapon::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x4b0);
  if ((iVar1 == 0x38030) || (iVar1 == 0x38031)) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(iVar1,0x30030);
  }
  if ((*(int *)(param_1 + 0x4b0) == 0x38040) || (*(int *)(param_1 + 0x4b0) == 0x38042)) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x3804f,0x30040);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x39003) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x39003,0x31003);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x38070) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x38070,0x30070);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x38050) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x38050,0x30050);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x38060) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x38060,0x30060);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x38080) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x38080,0x30080);
  }
  return 1;
}

// 0061E8B0  Em8010Weapon::vf98  size=116  [class]
int __fastcall Em8010Weapon::vf98(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  if ((iVar1 == 0x38030) || (iVar1 == 0x38031)) {
    return 0x30030;
  }
  if ((iVar1 == 0x38040) || (iVar1 == 0x38042)) {
    return 0x30040;
  }
  if (iVar1 == 0x39003) {
    return 0x31003;
  }
  if (iVar1 == 0x38070) {
    return 0x30070;
  }
  if (iVar1 == 0x38050) {
    return 0x30050;
  }
  if (iVar1 == 0x38060) {
    return 0x30060;
  }
  return (-(uint)(iVar1 != 0x38080) & 0xffffffb0) + 0x30080;
}

// 00AB5EE0  Em8010Weapon::vf04  size=6  [class]
undefined * Em8010Weapon::vf04(void)

{
  return &DAT_01b35548;
}

// 00AB5EF0  Em8010Weapon::vf94  size=6  [class]
undefined4 Em8010Weapon::vf94(void)

{
  return 3;
}

// 00ABA790  Em8010Weapon::vf00  size=105  [class]
undefined4 * __thiscall Em8010Weapon::vf00(undefined4 *param_1,byte param_2)

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


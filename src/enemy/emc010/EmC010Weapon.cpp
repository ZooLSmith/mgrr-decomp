// src/enemy/emc010/EmC010Weapon.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00710D40..00ABA090, 6 functions

#include "mgrr.h"
#include "EmC010Weapon.h"

// 00710D40  EmC010Weapon::startup  size=354  [class]
undefined4 __fastcall EmC010Weapon::startup(int param_1)

{
  int iVar1;
  
  iVar1 = cEm0010Weapon::startup();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x4b0);
  if ((iVar1 == 0x3c030) || (iVar1 == 0x3c031)) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(iVar1,0x30030);
  }
  if ((*(int *)(param_1 + 0x4b0) == 0x3c040) || (*(int *)(param_1 + 0x4b0) == 0x3c042)) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x3c04f,0x30040);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x3d003) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x3d003,0x31003);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x3c070) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x3c070,0x30070);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x3c050) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x3c050,0x30050);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x3c060) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x3c060,0x30060);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x3c080) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x3c080,0x30080);
  }
  return 1;
}

// 00710EB0  EmC010Weapon::vf98  size=116  [class]
int __fastcall EmC010Weapon::vf98(int param_1)

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

// 00AB4090  EmC010Weapon::EmC010Weapon  size=55  [class]
undefined4 * __fastcall EmC010Weapon::EmC010Weapon(undefined4 *param_1)

{
  Behavior::Behavior();
  param_1[0x228] = 0;
  param_1[0x22a] = 0;
  param_1[0x22d] = 0;
  *param_1 = cEm0010Weapon::vftable;
  FUN_00a7c930();
  *param_1 = vftable;
  return param_1;
}

// 00AB40D0  EmC010Weapon::vf04  size=6  [class]
undefined * EmC010Weapon::vf04(void)

{
  return &DAT_01b357a8;
}

// 00AB40E0  EmC010Weapon::vf94  size=6  [class]
undefined4 EmC010Weapon::vf94(void)

{
  return 2;
}

// 00ABA090  EmC010Weapon::destruct  size=105  [class]
undefined4 * __thiscall EmC010Weapon::destruct(undefined4 *param_1,byte param_2)

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
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


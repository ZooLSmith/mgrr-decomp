// src/enemy/em0010/Em0010RPGBullet.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA68D0..00B33310, 10 functions

#include "types.h"

// 00AA68D0  Em0010RPGBullet::Em0010RPGBullet_3  size=29  [class]
undefined4 * __fastcall Em0010RPGBullet::Em0010RPGBullet_3(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AA68F0  Em0010RPGBullet::vf04  size=6  [class]
undefined * Em0010RPGBullet::vf04(void)

{
  return &DAT_01be9d30;
}

// 00AB41A0  Em0010RPGBullet::Em0010RPGBullet_2  size=35  [class]
undefined4 * __fastcall Em0010RPGBullet::Em0010RPGBullet_2(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = EmC010RPGBullet::vftable;
  return param_1;
}

// 00AB5FB0  Em0010RPGBullet::Em0010RPGBullet  size=35  [class]
undefined4 * __fastcall Em0010RPGBullet::Em0010RPGBullet(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  *param_1 = Em8010RPGBullet::vftable;
  return param_1;
}

// 00AB7D10  Em0010RPGBullet::vf00  size=105  [class]
undefined4 * __thiscall Em0010RPGBullet::vf00(undefined4 *param_1,byte param_2)

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

// 00B2DFE0  Em0010RPGBullet::vf40  size=93  [class]
undefined4 __fastcall Em0010RPGBullet::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  uVar2 = 2;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar2);
  *(undefined4 *)(param_1 + 0x618) = 0;
  return 1;
}

// 00B2E040  Em0010RPGBullet::vf44  size=5  [class]
void __fastcall Em0010RPGBullet::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(undefined4 **)(param_1 + 0x774) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x774))(1);
    *(undefined4 *)(param_1 + 0x774) = 0;
  }
  if (*(int *)(param_1 + 0x75c) != 0) {
    piVar2 = (int *)FUN_008d7570();
    (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x75c) = 0;
  if (*(int *)(param_1 + 0x754) != 0) {
    piVar2 = (int *)FUN_00d72970();
    (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x754) = 0;
  if (*(int *)(param_1 + 0x584) != 0) {
    (**(code **)(*DAT_01be9bf4 + 0x10))(*(int *)(param_1 + 0x584),*(undefined4 *)(param_1 + 0x588));
  }
  *(undefined4 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x584) = 0;
  if (*(int *)(param_1 + 0x808) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x808));
    *(undefined4 *)(param_1 + 0x808) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7d8);
  if (iVar1 != 0) {
    FUN_00c730c0();
    FUN_00905ce0();
    FUN_00905ce0();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7d8) = 0;
  }
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x638) != 0) {
    FUN_00dd7270();
  }
  iVar1 = *(int *)(param_1 + 0x638);
  if (iVar1 != 0) {
    FUN_00dd7270();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x638) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x63c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x63c))(1);
    *(undefined4 *)(param_1 + 0x63c) = 0;
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00a91a00();
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x7c4));
    *(undefined4 *)(param_1 + 0x7c4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x770);
  if (iVar1 != 0) {
    FUN_00a01300();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x770) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x76c);
  if (iVar1 != 0) {
    FUN_00a01300();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x76c) = 0;
  }
  if (*(int *)(param_1 + 0x788) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x788));
    *(undefined4 *)(param_1 + 0x788) = 0;
  }
  return;
}

// 00B2E050  FUN_00b2e050  size=87  [callgraph]
void __fastcall FUN_00b2e050(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x878) != 0) {
      uVar1 = FUN_009f8b40();
      FUN_009f8ae0(uVar1);
    }
  }
  return;
}

// 00B2E0B0  FUN_00b2e0b0  size=147  [callgraph]
void __fastcall FUN_00b2e0b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x21e] != 0) {
      uVar1 = FUN_009f8b40();
      FUN_009f8ae0(uVar1);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x1c))();
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0,0,0,0);
  }
  return;
}

// 00B33310  Em0010RPGBullet::vf4C  size=94  [class]
void __fastcall Em0010RPGBullet::vf4C(int *param_1)

{
  int iVar1;
  
  param_1[0x21e] = 0;
  iVar1 = FUN_00a81330();
  param_1[0x21d] = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    param_1[0x21e] = iVar1;
  }
  Behavior::vf4C();
  if (param_1[0x186] == 0) {
    FUN_00b2e050();
  }
  else if (param_1[0x186] == 1) {
    FUN_00b2e0b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00b3336c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}


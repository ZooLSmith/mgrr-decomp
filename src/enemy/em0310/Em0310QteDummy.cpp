// src/enemy/em0310/Em0310QteDummy.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057E8A0..00AB70A0, 7 functions

#include "mgrr.h"
#include "Em0310QteDummy.h"

// 0057E8A0  Em0310QteDummy::startup  size=32  [class]
undefined4 Em0310QteDummy::startup(void)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00a7c950();
  return 1;
}

// 0057E8C0  Em0310QteDummy::vf44  size=46  [class]
void Em0310QteDummy::vf44(void)

{
  int iVar1;
  
  Behavior::vf44();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 != 0) {
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 0057E8F0  Em0310QteDummy::vf50  size=16  [class]
void Em0310QteDummy::vf50(void)

{
  Behavior::vf50();
  FUN_00a93170();
  return;
}

// 0058AA50  Em0310QteDummy::vf4C  size=269  [class]
void __fastcall Em0310QteDummy::vf4C(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_90 [20];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  Behavior::vf4C();
  iVar1 = FUN_00a8e520();
  if (iVar1 != 0) {
    E3_EnemyBoardDebrisSokushi::vf4C();
  }
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    if (param_1[0x139] != 0) goto LAB_0058ab37;
    param_1[0x139] = 1;
    (**(code **)(*param_1 + 0x20))();
    iVar1 = FUN_00a7f5b0(0x20120);
    if (iVar1 < 2) {
      FUN_0040b190();
      iStack_40 = param_1[0x14];
      iStack_3c = param_1[0x15];
      iStack_38 = param_1[0x16];
      iStack_34 = param_1[0x24];
      auStack_90[0] = 7;
      iStack_30 = param_1[0x25];
      iStack_2c = param_1[0x26];
      iVar1 = FUN_00a82090("rise_build_em_slider",0x20120,auStack_90);
      if (iVar1 != 0) {
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c960(uVar2);
      }
    }
  }
  if (param_1[0x139] == 0) {
    return;
  }
LAB_0058ab37:
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c7e0(), iVar1 != 0)) {
    return;
  }
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 00AA6440  Em0310QteDummy::Em0310QteDummy  size=29  [class]
undefined4 * __fastcall Em0310QteDummy::Em0310QteDummy(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AA6460  Em0310QteDummy::vf04  size=6  [class]
undefined * Em0310QteDummy::vf04(void)

{
  return &DAT_01b3515c;
}

// 00AB70A0  Em0310QteDummy::destruct  size=105  [class]
undefined4 * __thiscall Em0310QteDummy::destruct(undefined4 *param_1,byte param_2)

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


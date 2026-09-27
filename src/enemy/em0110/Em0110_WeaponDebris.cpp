// src/enemy/em0110/Em0110_WeaponDebris.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004B7830..00AB8990, 8 functions

#include "mgrr.h"
#include "Em0110_WeaponDebris.h"

// 004B7830  Em0110_WeaponDebris::startup  size=91  [class]
void __fastcall Em0110_WeaponDebris::startup(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorDebrisBase::startup();
  if (iVar1 == 0) {
    return;
  }
  FUN_009fd240();
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  *(undefined4 *)(param_1 + 0x970) = 0x41f00000;
  if (*(int *)(param_1 + 0x940) == 0) {
    *(undefined4 *)(param_1 + 0x894) = 0;
    *(undefined4 *)(param_1 + 0x92c) = 1;
  }
  return;
}

// 004B7890  Em0110_WeaponDebris::thunk_vf44  size=5  [class]
void __fastcall Em0110_WeaponDebris::thunk_vf44(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x93c) != 0) {
    FUN_00d8b4a0(param_1);
  }
  if (*(int *)(param_1 + 0x904) != 0) {
    FUN_00d8a1d0(0x1e,*(int *)(param_1 + 0x904));
    if (*(undefined4 **)(param_1 + 0x904) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x904))(1);
      *(undefined4 *)(param_1 + 0x904) = 0;
    }
  }
  if (*(int *)(param_1 + 0x908) != 0) {
    FUN_00d8a1d0(0x1f,*(int *)(param_1 + 0x908));
    if (*(undefined4 **)(param_1 + 0x908) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x908))(1);
      *(undefined4 *)(param_1 + 0x908) = 0;
    }
  }
  FUN_00900ca0();
  FUN_00a8c820();
  FUN_00a944d0();
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  Behavior::vf44();
  return;
}

// 004B78A0  Em0110_WeaponDebris::vf4C  size=96  [class]
void __fastcall Em0110_WeaponDebris::vf4C(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  BehaviorDebrisBase::vf4C();
  FUN_00a92fb0();
  fVar2 = (float10)FUN_00e049b0();
  if (0.0 < *(float *)(param_1 + 0x970)) {
    if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x880) != 0)) {
      FUN_009126e0();
    }
    iVar1 = FUN_00a8e520();
    if (iVar1 == 0) {
      *(float *)(param_1 + 0x970) = *(float *)(param_1 + 0x970) - (float)fVar2;
    }
  }
  return;
}

// 004B7900  Em0110_WeaponDebris::vf1BC  size=62  [class]
void __thiscall Em0110_WeaponDebris::vf1BC(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  BehaviorDebrisBase::vf1BC(param_2);
  uVar1 = FUN_009f8b40();
  FUN_009f8ae0(uVar1);
  if (*(int *)(param_1 + 0x7b4) != 0) {
    uVar1 = FUN_009f8b40();
    FUN_0091c760(uVar1);
  }
  return;
}

// 004B7950  Em0110_WeaponDebris::setCutCrerateInfo  size=31  [class]
void Em0110_WeaponDebris::setCutCrerateInfo(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42115;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00AAFDB0  Em0110_WeaponDebris::Em0110_WeaponDebris  size=18  [class]
undefined4 * __fastcall Em0110_WeaponDebris::Em0110_WeaponDebris(undefined4 *param_1)

{
  BehaviorDebrisBase::BehaviorDebrisBase();
  *param_1 = vftable;
  return param_1;
}

// 00AAFDD0  Em0110_WeaponDebris::vf04  size=6  [class]
undefined * Em0110_WeaponDebris::vf04(void)

{
  return &DAT_01b34ea0;
}

// 00AB8990  Em0110_WeaponDebris::destruct  size=105  [class]
undefined4 * __thiscall Em0110_WeaponDebris::destruct(undefined4 *param_1,byte param_2)

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


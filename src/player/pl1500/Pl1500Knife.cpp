// src/player/pl1500/Pl1500Knife.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A9C90..00ACFB40, 7 functions

#include "types.h"

// 008A9C90  Pl1500Knife::vf304  size=54  [class]
void __fastcall Pl1500Knife::vf304(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x930) == 0) {
    iVar1 = FUN_00ad1e00(0,0);
    if (((iVar1 != 0) || (*(int *)(param_1 + 0xc00) != 0)) && (*(int *)(param_1 + 0x618) < 3)) {
      *(undefined4 *)(param_1 + 0x618) = 4;
    }
  }
  return;
}

// 008CF450  Pl1500Knife::vf300  size=15  [class]
void __fastcall Pl1500Knife::vf300(int param_1)

{
  if (*(int *)(param_1 + 0x930) == 0) {
    FUN_008c93c0();
    return;
  }
  return;
}

// 00AB4320  Pl1500Knife::Pl1500Knife  size=18  [class]
undefined4 * __fastcall Pl1500Knife::Pl1500Knife(undefined4 *param_1)

{
  BehaviorBulletBase::BehaviorBulletBase();
  *param_1 = vftable;
  return param_1;
}

// 00AB4340  Pl1500Knife::vf04  size=6  [class]
undefined * Pl1500Knife::vf04(void)

{
  return &DAT_01b35b94;
}

// 00ABA250  Pl1500Knife::vf00  size=30  [class]
undefined4 __thiscall Pl1500Knife::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_120();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ACABD0  Pl1500Knife::vf40  size=397  [class]
undefined4 __fastcall Pl1500Knife::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_009fd240();
  *(undefined4 *)(param_1 + 0x8e4) = 0xffff;
  *(undefined4 *)(param_1 + 0x8e8) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x90c) = 0;
  *(undefined4 *)(param_1 + 0x1200) = 0;
  *(undefined4 *)(param_1 + 0xd90) = 1;
  *(undefined4 *)(param_1 + 0xd88) = 0;
  *(undefined4 *)(param_1 + 0xd8c) = 0;
  FUN_00410540(4,&DAT_01b7bd48);
  *(undefined4 *)(param_1 + 0x930) = 0xffffffff;
  FUN_00a8d280();
  uVar2 = 3;
  *(undefined4 *)(param_1 + 0xda4) = 0;
  *(undefined4 *)(param_1 + 0xf10) = 0;
  *(undefined4 *)(param_1 + 0xf14) = 0;
  FUN_00a92fb0(3);
  FUN_00e08640(uVar2);
  *(undefined4 *)(param_1 + 0xf24) = 1;
  *(undefined4 *)(param_1 + 0xf18) = 0;
  *(undefined4 *)(param_1 + 0xf30) = 0;
  *(undefined4 *)(param_1 + 0xb80) = 0;
  *(undefined4 *)(param_1 + 0xb84) = 0;
  *(undefined4 *)(param_1 + 0xb88) = 0;
  *(undefined4 *)(param_1 + 0xb8c) = 0;
  local_8 = 0;
  local_4 = 0;
  local_c = 1;
  iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
          StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1108) = 0;
  *(undefined4 *)(param_1 + 0x904) = 0;
  *(undefined4 *)(param_1 + 0x8f0) = 0;
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  *(undefined4 *)(param_1 + 0x930) = 0x3a;
  *(undefined2 *)(param_1 + 0x900) = 0xffff;
  FUN_00a7c950();
  iVar1 = *(int *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0x1114) = 0;
  *(undefined4 *)(param_1 + 0x111c) = 0;
  *(undefined4 *)(param_1 + 0x120c) = 100;
  if (((iVar1 == 0x310a1) || (iVar1 == 0x31011)) || (iVar1 == 0x31013)) {
    FUN_00c3d2a0(*(undefined4 *)(param_1 + 0x4f0));
  }
  return 1;
}

// 00ACFB40  Pl1500Knife::vf44  size=362  [class]
void __fastcall Pl1500Knife::vf44(int param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(*(int *)(param_1 + 0xdb0) + 8))(0x3f800000,0,0);
  RayCastManager::getWork(param_1 + 0x1124);
  RayCastManager::getWork(param_1 + 0x1128);
  pcVar1 = *(code **)(*(int *)(param_1 + 0x1130) + 4);
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x90c) = 0;
  (*pcVar1)();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  (**(code **)(*(int *)(param_1 + 0xe60) + 4))();
  *(undefined4 *)(param_1 + 0xf14) = 0;
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7b4);
  if (iVar2 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar2);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  piVar3 = (int *)FUN_00910da0();
  (**(code **)(*piVar3 + 0x28))((undefined4 *)(param_1 + 0x8dc));
  *(undefined4 *)(param_1 + 0x8dc) = 0;
  FUN_00910ac0(0);
  *(undefined4 *)(param_1 + 0xf30) = 0;
  FUN_00900ca0();
  FUN_00900ca0();
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x1114) != 0) {
    FUN_00a805f0();
  }
  *(undefined4 *)(param_1 + 0x1114) = 0;
  FUN_00cd4630(param_1);
  Behavior::vf44();
  return;
}


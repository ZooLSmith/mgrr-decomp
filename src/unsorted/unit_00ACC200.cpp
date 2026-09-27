// src/unsorted/unit_00ACC200.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ACC200..00ACC2F0, 2 functions

#include "types.h"

// 00ACC200  FUN_00acc200  size=239  [run]
void __fastcall FUN_00acc200(int param_1)

{
  int iVar1;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1 + 0xf24) = 0;
  FUN_00c4d1a0(*(undefined4 *)(param_1 + 0x4f0),0);
  RayCastManager::getWork(param_1 + 0x1124);
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00eaa840();
  uStack_8 = 0x40400000;
  iVar1 = FUN_00c76330(*(undefined4 *)(param_1 + 0x8e4),&uStack_8);
  if (iVar1 != 0) {
    FUN_00e5ca30(*(undefined4 *)(param_1 + 0x908),uStack_8);
  }
  uStack_4 = 0x40400000;
  iVar1 = FUN_00c76390(*(undefined4 *)(param_1 + 0x8e4),&uStack_4);
  if (iVar1 != 0) {
    FUN_00e5ca30(*(undefined4 *)(param_1 + 0x90c),uStack_4);
  }
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x90c) = 0;
  if (*(int *)(param_1 + 0xf30) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xf30) + 0x34) = 0;
  }
  *(undefined4 *)(param_1 + 0xf30) = 0;
  return;
}

// 00ACC2F0  FUN_00acc2f0  size=363  [run]
void __thiscall FUN_00acc2f0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00eaa840();
  FUN_00e5ca30(param_1[0x243],0x40400000);
  FUN_00c4d1a0(param_1[0x13c],0);
  param_1[0x3c5] = 0;
  FUN_00a9d8a0();
  RayCastManager::getWork(param_1 + 0x449);
  param_1[0x366] = param_2;
  param_1[0x369] = 1;
  param_1[0x367] = 0x3f800000;
  param_1[0x36a] = param_3;
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x20))();
  }
  param_1[0x368] = (int)(1.0 / (float)param_1[0x366]);
  if (1.0 / (float)param_1[0x366] < 0.01) {
    param_1[0x368] = 0x3c23d70a;
  }
  if (((int *)param_1[0x1ec] != (int *)0x0) &&
     (iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar1 != 0)) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if ((int *)param_1[0x1ec] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1ec] + 4))(1);
    param_1[0x1ec] = 0;
  }
  iVar1 = param_1[0x1ed];
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    param_1[0x1ed] = 0;
  }
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x2c))(param_1 + 0x237);
  FUN_00910ac0(0);
  if (param_1[0x3cc] != 0) {
    *(undefined4 *)(param_1[0x3cc] + 0x34) = 0;
  }
  param_1[0x3cc] = 0;
  return;
}


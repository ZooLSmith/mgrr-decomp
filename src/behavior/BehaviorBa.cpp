// src/behavior/BehaviorBa.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC3E80..00AC77C0, 4 functions

#include "mgrr.h"
#include "BehaviorBa.h"

// 00AC3E80  BehaviorBa::BehaviorBa  size=43  [class]
undefined4 * __fastcall BehaviorBa::BehaviorBa(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  cEspControler::cEspControler();
  param_1[0x2c8] = 0;
  param_1[0x2c9] = 0;
  return param_1;
}

// 00AC3EB0  BehaviorBa::vf04  size=6  [class]
undefined * BehaviorBa::vf04(void)

{
  return &DAT_01be9c58;
}

// 00AC7530  BehaviorBa::startup  size=463  [class]
undefined4 __fastcall BehaviorBa::startup(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = BehaviorBgBase::startup();
  if (iVar1 == 0) {
    return 0;
  }
  uVar7 = 1;
  FUN_00a92f90(1);
  FUN_00e26e50(uVar7);
  uVar8 = 0x3f800000;
  uVar6 = 0xbf800000;
  uVar5 = 0;
  uVar4 = 0x3f800000;
  uVar3 = 0;
  uVar7 = 0;
  puVar2 = &DAT_0163b5f4;
  FUN_00a92f90(&DAT_0163b5f4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00e3ff90(puVar2,uVar7,uVar3,uVar4,uVar5,uVar6,uVar8);
  iVar1 = FUN_00a92f90();
  *(uint *)(iVar1 + 0x94) = *(uint *)(iVar1 + 0x94) | 2;
  (**(code **)(*param_1 + 100))();
  FUN_00a8f840(&DAT_0163bdcc);
  if ((param_1[0x12d] == 0xf0d41) && (param_1[0x1ec] != 0)) {
    FUN_008f03a0(0x8000000,1);
    FUN_008f03a0(0x100,0);
    (**(code **)(*(int *)param_1[0x1ec] + 0x108))(1);
  }
  iVar1 = param_1[0x12d];
  if ((((iVar1 == 0xf0020) || (iVar1 == 0xf0021)) || (iVar1 == 0xf0023)) ||
     (((iVar1 == 0xf0028 || (iVar1 == 0xf0029)) ||
      ((iVar1 == 0xf002c || ((iVar1 == 0xf002b || (iVar1 == 0xf0130)))))))) {
    FUN_00a8f640();
  }
  if ((param_1[0x12d] == 0xff000) && (param_1[0x1ec] != 0)) {
    FUN_00a8f7b0(1);
  }
  iVar1 = param_1[0x12d];
  param_1[0x2ca] = 1;
  if (((iVar1 == 0xf0151) || (iVar1 == 0xf0155)) || (iVar1 == 0xf0157)) {
    if ((int *)param_1[0x1ec] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1ec] + 0xd4))(0x447a0000);
      (**(code **)(*(int *)param_1[0x1ec] + 0x58))(0x44fa0000);
      (**(code **)(*(int *)param_1[0x1ec] + 0x7c))(0x44fa0000);
      (**(code **)(*(int *)param_1[0x1ec] + 0xa4))(0x3f800000);
      FUN_008f3c80();
    }
    FUN_00a8f7b0(1);
    param_1[0x2ca] = 0;
  }
  return 1;
}

// 00AC77C0  BehaviorBa::destruct  size=65  [class]
undefined4 __thiscall BehaviorBa::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_00c5a280();
  FUN_00c1e230();
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


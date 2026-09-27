// src/misc/MonThrowMoto.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051B540..00AC7530, 5 functions

#include "mgrr.h"
#include "MonThrowMoto.h"

// 0051B540  MonThrowMoto::vf4C  size=16  [class]
void MonThrowMoto::vf4C(void)

{
  ExcelStage::vf4C();
  Bh0064::vf64();
  return;
}

// 00AB12C0  MonThrowMoto::MonThrowMoto  size=18  [class]
undefined4 * __fastcall MonThrowMoto::MonThrowMoto(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB12E0  MonThrowMoto::vf04  size=6  [class]
undefined * MonThrowMoto::vf04(void)

{
  return &DAT_01b34f5c;
}

// 00AB9790  MonThrowMoto::vf00  size=43  [class]
undefined4 __thiscall MonThrowMoto::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC7530  MonThrowMoto::vf40  size=463  [class]
undefined4 __fastcall MonThrowMoto::vf40(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = BehaviorBgBase::vf40();
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


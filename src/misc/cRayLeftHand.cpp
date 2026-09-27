// src/misc/cRayLeftHand.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AAE3B0..00AEA450, 5 functions

#include "types.h"

// 00AAE3B0  cRayLeftHand::vf04  size=6  [class]
undefined * cRayLeftHand::vf04(void)

{
  return &DAT_01be9ccc;
}

// 00AB7500  cRayLeftHand::vf00  size=105  [class]
undefined4 * __thiscall cRayLeftHand::vf00(undefined4 *param_1,byte param_2)

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

// 00AEA400  cRayLeftHand::vf40  size=54  [class]
undefined4 __fastcall cRayLeftHand::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BehaviorPartsModel::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  uVar2 = 2;
  *(undefined4 *)(param_1 + 0xa50) = 0x16;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar2);
  return 1;
}

// 00AEA440  cRayLeftHand::vf44  size=5  [class]
void __fastcall cRayLeftHand::vf44(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0xa0c);
  iVar2 = 0x10;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
      FUN_00dd4920(iVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 00AEA450  cRayLeftHand::vf4C  size=65  [class]
void __fastcall cRayLeftHand::vf4C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0xa08) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  iVar1 = FUN_00a81330();
  *(int *)(param_1 + 0xa04) = iVar1;
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xa08) = uVar2;
  }
  BehaviorPartsModel::vf4C();
  return;
}


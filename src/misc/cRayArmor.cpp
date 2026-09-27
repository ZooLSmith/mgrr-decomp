// src/misc/cRayArmor.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AB6BE0..00AEABE0, 8 functions

#include "mgrr.h"
#include "cRayArmor.h"

// 00AB6BE0  cRayArmor::vf04  size=6  [class]
undefined * cRayArmor::vf04(void)

{
  return &DAT_01be9cd8;
}

// 00ABABD0  cRayArmor::destruct  size=105  [class]
undefined4 * __thiscall cRayArmor::destruct(undefined4 *param_1,byte param_2)

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

// 00AEA8A0  cRayArmor::vf30  size=116  [class]
void __fastcall cRayArmor::vf30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  BehaviorAppBase::vf30();
  if ((*(int *)(param_1 + 0x588) != 0) && (*(int *)(param_1 + 0xa04) != 0)) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0xb4) = uVar2;
    FUN_00a7c8a0();
    puVar3 = (undefined4 *)FUN_009f8b60();
    uVar2 = *puVar3;
    iVar1 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar1 + 0x34) = 1;
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
    FUN_00a7c8a0();
    uVar2 = cXmlBinary::cXmlBinary_41();
    iVar1 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar1 + 0x2c) = 1;
    *(undefined4 *)(iVar1 + 0x30) = uVar2;
  }
  return;
}

// 00AEA920  cRayArmor::vf1D0  size=16  [class]
void __thiscall cRayArmor::vf1D0(undefined4 param_1,undefined4 param_2)

{
  FUN_00a8e5d0(param_1,param_2,0);
  return;
}

// 00AEA930  cRayArmor::startup  size=129  [class]
undefined4 __fastcall cRayArmor::startup(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorPartsModel::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xa50) = 0xffffffff;
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
  }
  *(undefined4 *)(param_1 + 0xa64) = 0;
  *(undefined4 *)(param_1 + 0xa68) = 0;
  (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(0);
  *(undefined4 *)(param_1 + 0xa54) = 1;
  return 1;
}

// 00AEA9C0  cRayArmor::vf44  size=5  [class]
void __fastcall cRayArmor::vf44(int param_1)

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

// 00AEA9D0  cRayArmor::vf4C  size=241  [class]
void __fastcall cRayArmor::vf4C(int param_1)

{
  float10 fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  *(undefined4 *)(param_1 + 0xa08) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  iVar2 = FUN_00a81330();
  *(int *)(param_1 + 0xa04) = iVar2;
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xa08) = uVar3;
  }
  BehaviorPartsModel::vf4C();
  if (*(int *)(param_1 + 0xa64) != 0) {
    FUN_00a92fb0();
    fVar5 = (float10)FUN_00e049b0();
    fVar5 = (float10)*(float *)(param_1 + 0xa60) - fVar5;
    *(float *)(param_1 + 0xa60) = (float)fVar5;
    fVar1 = (float10)0;
    if ((*(int *)(param_1 + 0xa68) == 0) && (fVar5 < fVar1)) {
      *(undefined4 *)(param_1 + 0xa68) = 1;
      *(undefined4 *)(param_1 + 0xa6c) = 0x3f800000;
    }
    if (*(int *)(param_1 + 0xa68) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0xa6c);
      iVar4 = 0;
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          *(undefined4 *)(iVar4 + 0x1c + *(int *)(param_1 + 800)) = uVar3;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      fVar5 = (float10)*(float *)(param_1 + 0xa6c) - (float10)0.016666668;
      *(float *)(param_1 + 0xa6c) = (float)fVar5;
      if (fVar5 < fVar1 != (fVar5 == fVar1)) {
        E3_EnemyBoardDebrisSokushi::vf4C();
        return;
      }
    }
  }
  return;
}

// 00AEABE0  cRayArmor::setCutCrerateInfo  size=31  [class]
void cRayArmor::setCutCrerateInfo(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42200;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


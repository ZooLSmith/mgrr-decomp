// src/behavior/BehaviorDestructionImpact.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00602950..00AB7B30, 8 functions

#include "mgrr.h"
#include "BehaviorDestructionImpact.h"

// 00602950  BehaviorDestructionImpact::startup  size=51  [class]
undefined4 __fastcall BehaviorDestructionImpact::startup(int param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x870) = 0;
  *(undefined4 *)(param_1 + 0x878) = 0;
  *(undefined4 *)(param_1 + 0x87c) = 0;
  *(undefined4 *)(param_1 + 0x874) = 0;
  return 1;
}

// 00602990  BehaviorDestructionImpact::vf44  size=36  [class]
void __fastcall BehaviorDestructionImpact::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x870) != 0) {
    FUN_00d7b0f0();
  }
  *(undefined4 *)(param_1 + 0x870) = 0;
  Behavior::vf44();
  return;
}

// 006029F0  FUN_006029f0  size=109  [between]
uint FUN_006029f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar1 = FUN_00a82090("destructionImpact",0x3f001,0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b354b4;
    (**(code **)(*piVar2 + 4))(&DAT_01b354b4);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  uVar3 = CollisionImpactVolume::CollisionImpactVolume(param_1,param_2,param_3);
  *(undefined4 *)(uVar4 + 0x870) = uVar3;
  return uVar4;
}

// 00602A60  FUN_00602a60  size=40  [between]
void __fastcall FUN_00602a60(int param_1)

{
  if (*(int *)(param_1 + 0x870) != 0) {
    FUN_00d7b0f0();
  }
  *(undefined4 *)(param_1 + 0x870) = 0;
  FUN_00a805f0();
  return;
}

// 00602A90  BehaviorDestructionImpact::vf50  size=249  [class]
void __fastcall BehaviorDestructionImpact::vf50(int param_1)

{
  float10 fVar1;
  
  if (*(float *)(param_1 + 0x874) <= 0.0) {
    if (0.0 < *(float *)(param_1 + 0x878)) {
      fVar1 = (float10)FUN_00a93060();
      fVar1 = (float10)*(float *)(param_1 + 0x878) - fVar1;
      *(float *)(param_1 + 0x878) = (float)fVar1;
      if ((fVar1 <= (float10)0) && (*(int *)(param_1 + 0x870) != 0)) {
        FUN_00602a60();
      }
    }
    if (0.0 < *(float *)(param_1 + 0x87c)) {
      fVar1 = (float10)FUN_00a93060();
      fVar1 = (float10)*(float *)(param_1 + 0x87c) - fVar1;
      *(float *)(param_1 + 0x87c) = (float)fVar1;
      if ((fVar1 <= (float10)0) && (*(int *)(param_1 + 0x870) != 0)) {
        FUN_00d7acc0();
        FUN_00a93170();
        Behavior::vf50();
        return;
      }
    }
  }
  else {
    fVar1 = (float10)FUN_00a93060();
    fVar1 = (float10)*(float *)(param_1 + 0x874) - fVar1;
    *(float *)(param_1 + 0x874) = (float)fVar1;
    if ((fVar1 <= (float10)0) && (*(int *)(param_1 + 0x870) != 0)) {
      *(float *)(param_1 + 0x874) = (float)(float10)0;
      FUN_00d7b890();
      FUN_00a93170();
      Behavior::vf50();
      return;
    }
  }
  FUN_00a93170();
  Behavior::vf50();
  return;
}

// 00AA6800  BehaviorDestructionImpact::BehaviorDestructionImpact  size=18  [class]
undefined4 * __fastcall BehaviorDestructionImpact::BehaviorDestructionImpact(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  return param_1;
}

// 00AA6820  BehaviorDestructionImpact::vf04  size=6  [class]
undefined * BehaviorDestructionImpact::vf04(void)

{
  return &DAT_01b354b4;
}

// 00AB7B30  BehaviorDestructionImpact::destruct  size=105  [class]
undefined4 * __thiscall BehaviorDestructionImpact::destruct(undefined4 *param_1,byte param_2)

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


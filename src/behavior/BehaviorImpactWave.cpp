// src/behavior/BehaviorImpactWave.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00602C20..00AB7AC0, 8 functions

#include "mgrr.h"
#include "BehaviorImpactWave.h"

// 00602C20  BehaviorImpactWave::vf40  size=39  [class]
undefined4 __fastcall BehaviorImpactWave::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x870) = 0;
  *(undefined4 *)(param_1 + 0x874) = 0;
  return 1;
}

// 00602C50  BehaviorImpactWave::vf44  size=36  [class]
void __fastcall BehaviorImpactWave::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x870) != 0) {
    FUN_00d7b0f0();
  }
  *(undefined4 *)(param_1 + 0x870) = 0;
  Behavior::vf44();
  return;
}

// 00602CB0  FUN_00602cb0  size=109  [between]
uint FUN_00602cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar1 = FUN_00a82090("impactWave",0x3f000,0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b354b8;
    (**(code **)(*piVar2 + 4))(&DAT_01b354b8);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  uVar3 = CollisionImpactWave::CollisionImpactWave(param_1,param_2,param_3);
  *(undefined4 *)(uVar4 + 0x870) = uVar3;
  return uVar4;
}

// 00602D20  FUN_00602d20  size=40  [between]
void __fastcall FUN_00602d20(int param_1)

{
  if (*(int *)(param_1 + 0x870) != 0) {
    FUN_00d7b0f0();
  }
  *(undefined4 *)(param_1 + 0x870) = 0;
  FUN_00a805f0();
  return;
}

// 00602D50  BehaviorImpactWave::vf50  size=97  [class]
void __fastcall BehaviorImpactWave::vf50(int param_1)

{
  float10 fVar1;
  
  if (0.0 < *(float *)(param_1 + 0x874)) {
    fVar1 = (float10)FUN_00a93060();
    fVar1 = (float10)*(float *)(param_1 + 0x874) - fVar1;
    *(float *)(param_1 + 0x874) = (float)fVar1;
    if ((fVar1 <= (float10)0) && (*(int *)(param_1 + 0x870) != 0)) {
      FUN_00d7b0f0();
      *(undefined4 *)(param_1 + 0x870) = 0;
      FUN_00a805f0();
    }
  }
  FUN_00a93170();
  Behavior::vf50();
  return;
}

// 00AA67D0  BehaviorImpactWave::BehaviorImpactWave  size=18  [class]
undefined4 * __fastcall BehaviorImpactWave::BehaviorImpactWave(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA67F0  BehaviorImpactWave::vf04  size=6  [class]
undefined * BehaviorImpactWave::vf04(void)

{
  return &DAT_01b354b8;
}

// 00AB7AC0  BehaviorImpactWave::vf00  size=105  [class]
undefined4 * __thiscall BehaviorImpactWave::vf00(undefined4 *param_1,byte param_2)

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


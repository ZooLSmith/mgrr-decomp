// src/behavior/BehaviorEs.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA6720..00AC7B70, 8 functions

#include "types.h"

// 00AA6720  BehaviorEs::BehaviorEs  size=18  [class]
undefined4 * __fastcall BehaviorEs::BehaviorEs(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA6740  BehaviorEs::vf04  size=6  [class]
undefined * BehaviorEs::vf04(void)

{
  return &DAT_01be9c70;
}

// 00AB7800  BehaviorEs::vf00  size=105  [class]
undefined4 * __thiscall BehaviorEs::vf00(undefined4 *param_1,byte param_2)

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

// 00AC3FF0  BehaviorEs::vf4C  size=29  [class]
void BehaviorEs::vf4C(void)

{
  int iVar1;
  
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    FUN_00e3e620();
    FUN_00e22e40();
    return;
  }
  return;
}

// 00AC4010  BehaviorEs::vf104  size=7  [class]
void __fastcall BehaviorEs::vf104(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ac4015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4c))();
  return;
}

// 00AC4020  BehaviorEs::vf50  size=29  [class]
void BehaviorEs::vf50(void)

{
  int iVar1;
  
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    FUN_00e3f050();
    FUN_00a93170();
    return;
  }
  return;
}

// 00AC4040  BehaviorEs::vf54  size=65  [class]
void __fastcall BehaviorEs::vf54(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    FUN_00e30490();
    FUN_00e304b0();
    if (*(int *)(param_1 + 0x76c) != 0) {
      uVar3 = 0;
      fVar2 = (float10)FUN_00a92ff0(0);
      FUN_00a01350((float)fVar2,uVar3);
    }
  }
  return;
}

// 00AC7B70  BehaviorEs::vf40  size=148  [class]
undefined4 __fastcall BehaviorEs::vf40(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = Behavior::startup();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00a92f90();
  if (iVar2 != 0) {
    FUN_00e26e50(1);
    if (*(int *)(param_1 + 0x4b0) == 0x60014) {
      if (1 < *(short *)(param_1 + 0x324)) {
        puVar1 = (uint *)(*(int *)(param_1 + 800) + 0xa8);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
    }
    else if ((*(int *)(param_1 + 0x4b0) == 0x60308) && (0 < *(short *)(param_1 + 0x324))) {
      puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    if (*(int *)(param_1 + 0x4b0) == 0x60026) {
      FUN_00a077b0(1);
    }
  }
  return 1;
}


// src/behavior/BehaviorDebrisSlider.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D8F80..005E2C40, 11 functions

#include "types.h"

// 005D8F80  BehaviorDebrisSlider::vf44  size=42  [class]
void __fastcall BehaviorDebrisSlider::vf44(int param_1)

{
  RayCastManager::getWork(param_1 + 0x980);
  *(undefined4 *)(param_1 + 0x984) = 0;
  *(undefined4 *)(param_1 + 0x988) = 0;
  BehaviorDebrisBase::vf44();
  return;
}

// 005DBFB0  BehaviorDebrisSlider::vf1B8  size=34  [class]
void __thiscall
BehaviorDebrisSlider::vf1B8(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  if (0 < param_4) {
    do {
      *param_2 = *(undefined4 *)(param_1 + 0x4b0);
      param_2 = param_2 + 3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

// 005DBFE0  BehaviorDebrisSlider::vf30  size=86  [class]
void __fastcall BehaviorDebrisSlider::vf30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  BehaviorDebrisBase::vf30();
  iVar2 = *(int *)(param_1 + 0x588);
  if (iVar2 != 0) {
    if (*(int *)(iVar2 + 0xbc) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x990);
      *(undefined4 *)(iVar2 + 0xbc) = 1;
      *(undefined4 *)(iVar2 + 0xc0) = uVar1;
      return;
    }
    if (*(int *)(param_1 + 0x994) != 0) {
      *(undefined4 *)(iVar2 + 0xbc) = 1;
      *(undefined4 *)(iVar2 + 0xc0) = *(undefined4 *)(iVar2 + 0xc0);
    }
  }
  return;
}

// 005DC040  BehaviorDebrisSlider::BehaviorDebrisSlider  size=18  [class]
undefined4 * __fastcall BehaviorDebrisSlider::BehaviorDebrisSlider(undefined4 *param_1)

{
  BehaviorDebrisBase::BehaviorDebrisBase_3();
  *param_1 = vftable;
  return param_1;
}

// 005DC060  BehaviorDebrisSlider::vf04  size=6  [class]
undefined * BehaviorDebrisSlider::vf04(void)

{
  return &DAT_01b35328;
}

// 005DC070  FUN_005dc070  size=22  [between]
void FUN_005dc070(void)

{
  FUN_00905ce0();
  Behavior::Behavior_96();
  return;
}

// 005DC090  BehaviorDebrisSlider::vf00  size=43  [class]
undefined4 __thiscall BehaviorDebrisSlider::vf00(undefined4 param_1,byte param_2)

{
  FUN_00905ce0();
  Behavior::Behavior_96();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 005DE340  BehaviorDebrisSlider::vf4C  size=51  [class]
void __fastcall BehaviorDebrisSlider::vf4C(int param_1)

{
  BehaviorDebrisObject::vf4C();
  if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x9a0) == 0)) {
    FUN_00917560();
    FUN_00921130(0);
  }
  return;
}

// 005DF2D0  BehaviorDebrisSlider::vf50  size=135  [class]
void __fastcall BehaviorDebrisSlider::vf50(int *param_1)

{
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  BehaviorDebrisObject::vf50();
  if ((param_1[0x1ed] != 0) && (param_1[0x268] == 0)) {
    FUN_005d95e0(&local_30);
    local_20 = local_30 * -0.02;
    local_1c = local_2c * -0.02;
    local_18 = local_28 * -0.02;
    local_14 = local_24 * -0.02;
    (**(code **)(*param_1 + 0x70))(&local_20);
    switchD_0080dbae::default();
    if (param_1[0x1ed] != 0) {
      FUN_0091ea00(param_1);
    }
  }
  return;
}

// 005E17B0  BehaviorDebrisSlider::vf40  size=31  [class]
undefined4 __fastcall BehaviorDebrisSlider::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorDebrisObject::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x9a0) = 0;
  return 1;
}

// 005E2C40  BehaviorDebrisSlider::vf54  size=43  [class]
void __fastcall BehaviorDebrisSlider::vf54(int param_1)

{
  BehaviorDebrisObject::vf54();
  if ((*(int *)(param_1 + 0x9a0) != 0) && (*(int *)(param_1 + 0x7b4) != 0)) {
    FUN_0091e980(param_1);
    switchD_0080dbae::default();
    return;
  }
  return;
}


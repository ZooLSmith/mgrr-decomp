// src/managers/triggermanager/cCondEnemyFinishHPCompByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7D3B0..00C867F0, 4 functions

#include "mgrr.h"

// 00C7D3B0  Trigger::cCondEnemyFinishHPCompByNumber::vf14  size=123  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishHPCompByNumber::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if ((DAT_01bea060 & 0x400) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_00c18cc0(*(undefined4 *)(param_1 + 0x10));
    if (iVar1 == 1) {
      uVar2 = FUN_00c19110(*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x1c) == 1) {
    if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0x14) !=
        (*(float *)(param_1 + 0x18) == *(float *)(param_1 + 0x14))) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return 1;
    }
    fVar3 = (float10)FUN_00e03a90(0);
    *(float *)(param_1 + 0x14) = (float)(fVar3 + (float10)*(float *)(param_1 + 0x14));
  }
  return 0;
}

// 00C7D430  Trigger::cCondEnemyFinishHPCompByNumber::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyFinishHPCompByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(float *)(param_1 + 0x18) = *(float *)(param_2 + 0xc) * 60.0;
  return;
}

// 00C7D450  Trigger::cCondEnemyFinishHPCompByNumber::vf20  size=18  [class]
undefined4 __fastcall Trigger::cCondEnemyFinishHPCompByNumber::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 1;
}

// 00C867F0  Trigger::cCondEnemyFinishHPCompByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyFinishHPCompByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


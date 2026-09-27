// src/managers/triggermanager/cCondIsFade.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7DDD0..00C86B80, 4 functions

#include "mgrr.h"

// 00C7DDD0  Trigger::cCondIsFade::vf10  size=1  [class]
void Trigger::cCondIsFade::vf10(void)

{
  return;
}

// 00C7DDE0  Trigger::cCondIsFade::vf14  size=25  [class]
uint Trigger::cCondIsFade::vf14(void)

{
  uint uVar1;
  
  if (DAT_01dbd914 == 0) {
    return 0;
  }
  uVar1 = FUN_00eb4340(DAT_01dbd914);
  return uVar1 ^ 1;
}

// 00C7DE00  Trigger::cCondIsFade::vf1C  size=10  [class]
void __thiscall Trigger::cCondIsFade::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C86B80  Trigger::cCondIsFade::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsFade::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


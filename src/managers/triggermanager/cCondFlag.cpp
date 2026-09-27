// src/managers/triggermanager/cCondFlag.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7A7B0..00C856A0, 3 functions

#include "mgrr.h"

// 00C7A7B0  Trigger::cCondFlag::vf1C  size=16  [class]
void __thiscall Trigger::cCondFlag::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C85680  Trigger::cCondFlag::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondFlag::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C856A0  Trigger::cCondFlag::vf14  size=34  [class]
bool __fastcall Trigger::cCondFlag::vf14(int param_1)

{
  return (0x80000000U >> ((byte)*(uint *)(param_1 + 0x10) & 0x1f) &
         *(uint *)(DAT_018abf38 + (*(uint *)(param_1 + 0x10) >> 5) * 4)) != 0;
}


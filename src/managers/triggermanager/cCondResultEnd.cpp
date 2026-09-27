// src/managers/triggermanager/cCondResultEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7CE10..00C86620, 5 functions

#include "mgrr.h"

// 00C7CE10  Trigger::cCondResultEnd::vf0C  size=6  [class]
undefined4 Trigger::cCondResultEnd::vf0C(void)

{
  return 1;
}

// 00C7CE20  Trigger::cCondResultEnd::vf14  size=28  [class]
uint __fastcall Trigger::cCondResultEnd::vf14(int param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    *(uint *)(param_1 + 0x10) = DAT_01dc1308;
    return 0;
  }
  return ~DAT_01dc1308 & 1;
}

// 00C7CE40  Trigger::cCondResultEnd::vf1C  size=10  [class]
void __thiscall Trigger::cCondResultEnd::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C7CE50  Trigger::cCondResultEnd::vf20  size=13  [class]
undefined4 __fastcall Trigger::cCondResultEnd::vf20(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 1;
}

// 00C86620  Trigger::cCondResultEnd::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondResultEnd::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


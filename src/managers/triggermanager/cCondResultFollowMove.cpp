// src/managers/triggermanager/cCondResultFollowMove.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7AE80..00C85AF0, 3 functions

#include "mgrr.h"

// 00C7AE80  Trigger::cCondResultFollowMove::vf14  size=6  [class]
undefined4 Trigger::cCondResultFollowMove::vf14(void)

{
  return DAT_01dc1310;
}

// 00C7AE90  Trigger::cCondResultFollowMove::vf1C  size=10  [class]
void __thiscall Trigger::cCondResultFollowMove::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C85AF0  Trigger::cCondResultFollowMove::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondResultFollowMove::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


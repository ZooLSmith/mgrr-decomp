// src/collision/CollisionUserData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D72650..00D72670, 2 functions

#include "types.h"

// 00D72650  CollisionUserData::vf00  size=6  [class]
undefined * CollisionUserData::vf00(void)

{
  return &DAT_01dc52fc;
}

// 00D72670  CollisionUserData::vf04  size=31  [class]
undefined4 * __thiscall CollisionUserData::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


// src/collision/CollisionAttackDataProxy.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D730E0..00D73100, 2 functions

#include "mgrr.h"
#include "CollisionAttackDataProxy.h"

// 00D730E0  CollisionAttackDataProxy::vf00  size=6  [class]
undefined * CollisionAttackDataProxy::vf00(void)

{
  return &DAT_01dc5268;
}

// 00D73100  CollisionAttackDataProxy::vf04  size=31  [class]
undefined4 * __thiscall CollisionAttackDataProxy::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = CollisionUserData::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


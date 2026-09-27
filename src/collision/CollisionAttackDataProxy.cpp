// src/collision/CollisionAttackDataProxy.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D730E0..00D73B90, 3 functions

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

// 00D73B90  CollisionAttackDataProxy::CollisionAttackDataProxy  size=55  [class]
undefined4 * __thiscall
CollisionAttackDataProxy::CollisionAttackDataProxy(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = 1;
  *param_1 = CollisionAttackData::vftable;
  param_1[2] = param_1 + 4;
  FUN_004105d0();
  *param_1 = vftable;
  FUN_0043e160(param_2);
  return param_1;
}


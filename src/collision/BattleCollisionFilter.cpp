// src/collision/BattleCollisionFilter.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D76D70..00D7B730, 2 functions

#include "mgrr.h"
#include "BattleCollisionFilter.h"

// 00D76D70  BattleCollisionFilter::vf04  size=31  [class]
undefined4 * __thiscall BattleCollisionFilter::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7B730  BattleCollisionFilter::BattleCollisionFilter  size=39  [class]
void __fastcall BattleCollisionFilter::BattleCollisionFilter(undefined4 *param_1)

{
  *param_1 = BattleCollisionFilterImplement::vftable;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  *param_1 = vftable;
  return;
}


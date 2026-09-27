// src/collision/CollisionAttackData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D73030..00D73BD0, 6 functions

#include "types.h"

// 00D73030  CollisionAttackData::CollisionAttackData_3  size=31  [class]
undefined4 * __fastcall CollisionAttackData::CollisionAttackData_3(undefined4 *param_1)

{
  param_1[1] = 1;
  *param_1 = vftable;
  param_1[2] = param_1 + 4;
  FUN_004105d0();
  return param_1;
}

// 00D73050  CollisionAttackData::vf00  size=6  [class]
undefined * CollisionAttackData::vf00(void)

{
  return &DAT_01dc526c;
}

// 00D73060  CollisionAttackData::vf04  size=31  [class]
undefined4 * __thiscall CollisionAttackData::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = CollisionUserData::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D73120  CollisionAttackData::CollisionAttackData_4  size=67  [class]
undefined4 * CollisionAttackData::CollisionAttackData_4(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 1;
    *puVar1 = vftable;
    puVar1[2] = param_1;
    FUN_004105d0();
    *puVar1 = CollisionAttackDataProxy::vftable;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 00D73B90  CollisionAttackData::CollisionAttackData_2  size=55  [class]
undefined4 * __thiscall
CollisionAttackData::CollisionAttackData_2(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = 1;
  *param_1 = vftable;
  param_1[2] = param_1 + 4;
  FUN_004105d0();
  *param_1 = CollisionAttackDataProxy::vftable;
  FUN_0043e160(param_2);
  return param_1;
}

// 00D73BD0  CollisionAttackData::CollisionAttackData  size=79  [class]
undefined4 * CollisionAttackData::CollisionAttackData(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 1;
    *puVar1 = vftable;
    puVar1[2] = puVar1 + 4;
    FUN_004105d0();
    *puVar1 = CollisionAttackDataProxy::vftable;
    FUN_0043e160(param_1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}


// src/misc/RoomBaseUnit.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E3EF0..00ABAA70, 5 functions

#include "mgrr.h"
#include "RoomBaseUnit.h"

// 005E3EF0  RoomBaseUnit::vf40  size=32  [class]
undefined4 RoomBaseUnit::vf40(void)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00dd7240();
  return 1;
}

// 005E3F10  RoomBaseUnit::vf44  size=22  [class]
void RoomBaseUnit::vf44(void)

{
  FUN_00dd7270();
  Behavior::vf44();
  return;
}

// 00AA6F70  RoomBaseUnit::RoomBaseUnit  size=28  [class]
undefined4 * __fastcall RoomBaseUnit::RoomBaseUnit(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  param_1[0x222] = 0;
  return param_1;
}

// 00AA6F90  RoomBaseUnit::vf04  size=6  [class]
undefined * RoomBaseUnit::vf04(void)

{
  return &DAT_01b3534c;
}

// 00ABAA70  RoomBaseUnit::vf00  size=30  [class]
undefined4 __thiscall RoomBaseUnit::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_46();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


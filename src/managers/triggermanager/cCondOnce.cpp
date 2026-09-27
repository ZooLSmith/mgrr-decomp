// src/managers/triggermanager/cCondOnce.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C79800..00C84D90, 4 functions

#include "mgrr.h"

// 00C79800  Trigger::cCondOnce::vf10  size=13  [class]
void __fastcall Trigger::cCondOnce::vf10(int param_1)

{
  if (*(int *)(param_1 + 0x10) < 2) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return;
}

// 00C79810  Trigger::cCondOnce::vf14  size=10  [class]
bool __fastcall Trigger::cCondOnce::vf14(int param_1)

{
  return *(int *)(param_1 + 0x10) == 1;
}

// 00C79820  Trigger::cCondOnce::vf1C  size=10  [class]
void __thiscall Trigger::cCondOnce::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C84D90  Trigger::cCondOnce::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondOnce::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


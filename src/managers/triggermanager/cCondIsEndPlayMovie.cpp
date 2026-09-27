// src/managers/triggermanager/cCondIsEndPlayMovie.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7B0A0..00C85C50, 3 functions

#include "mgrr.h"

// 00C7B0A0  Trigger::cCondIsEndPlayMovie::vf14  size=13  [class]
void __fastcall Trigger::cCondIsEndPlayMovie::vf14(int param_1)

{
  FUN_00c1d730(*(undefined4 *)(param_1 + 0x10));
  return;
}

// 00C7B0B0  Trigger::cCondIsEndPlayMovie::vf1C  size=16  [class]
void __thiscall Trigger::cCondIsEndPlayMovie::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C85C50  Trigger::cCondIsEndPlayMovie::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsEndPlayMovie::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


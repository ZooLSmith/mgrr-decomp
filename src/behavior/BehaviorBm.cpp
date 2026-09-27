// src/behavior/BehaviorBm.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC71A0..00AC7200, 3 functions

#include "mgrr.h"
#include "BehaviorBm.h"

// 00AC71A0  BehaviorBm::BehaviorBm  size=67  [class]
undefined4 * __fastcall BehaviorBm::BehaviorBm(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  param_1[0x29c] = 0;
  cEspControler::cEspControler();
  param_1[0x2ce] = 0;
  param_1[0x2cc] = 0;
  param_1[0x2cd] = 0;
  return param_1;
}

// 00AC71F0  BehaviorBm::vf04  size=6  [class]
undefined * BehaviorBm::vf04(void)

{
  return &DAT_01be9c54;
}

// 00AC7200  BehaviorBm::vf00  size=65  [class]
undefined4 __thiscall BehaviorBm::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_00c5a280();
  FUN_00c1e230();
  Behavior::Behavior_96();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


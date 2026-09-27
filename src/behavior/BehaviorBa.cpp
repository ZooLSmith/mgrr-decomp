// src/behavior/BehaviorBa.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC3E80..00AC77C0, 3 functions

#include "mgrr.h"
#include "BehaviorBa.h"

// 00AC3E80  BehaviorBa::BehaviorBa  size=43  [class]
undefined4 * __fastcall BehaviorBa::BehaviorBa(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  cEspControler::cEspControler();
  param_1[0x2c8] = 0;
  param_1[0x2c9] = 0;
  return param_1;
}

// 00AC3EB0  BehaviorBa::vf04  size=6  [class]
undefined * BehaviorBa::vf04(void)

{
  return &DAT_01be9c58;
}

// 00AC77C0  BehaviorBa::vf00  size=65  [class]
undefined4 __thiscall BehaviorBa::vf00(undefined4 param_1,byte param_2)

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


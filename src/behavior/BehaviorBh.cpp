// src/behavior/BehaviorBh.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC7AB0..00AC7B20, 3 functions

#include "mgrr.h"
#include "BehaviorBh.h"

// 00AC7AB0  BehaviorBh::BehaviorBh  size=96  [class]
undefined4 * __fastcall BehaviorBh::BehaviorBh(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  FUN_00a7c930();
  param_1[0x29e] = 0;
  param_1[0x29f] = 0;
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a7c950();
  return param_1;
}

// 00AC7B10  BehaviorBh::vf04  size=6  [class]
undefined * BehaviorBh::vf04(void)

{
  return &DAT_01be9c5c;
}

// 00AC7B20  BehaviorBh::vf00  size=76  [class]
undefined4 __thiscall BehaviorBh::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_00c5a280();
  FUN_00c1e230();
  Behavior::Behavior_96();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


// src/enemy/em0044/Em0044_ev.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005F50F0..00AB6D90, 6 functions

#include "types.h"

// 005F50F0  Em0044_ev::vf40  size=28  [class]
undefined4 __fastcall Em0044_ev::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  return 1;
}

// 005F5110  Em0044_ev::vf4C  size=18  [class]
void __fastcall Em0044_ev::vf4C(int *param_1)

{
  Behavior::vf4C();
                    /* WARNING: Could not recover jumptable at 0x005f5120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 005F5130  Em0044_ev::vf50  size=16  [class]
void Em0044_ev::vf50(void)

{
  Behavior::vf50();
  FUN_00a93170();
  return;
}

// 00AA6290  Em0044_ev::Em0044_ev  size=18  [class]
undefined4 * __fastcall Em0044_ev::Em0044_ev(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA62B0  Em0044_ev::vf04  size=6  [class]
undefined * Em0044_ev::vf04(void)

{
  return &DAT_01b3542c;
}

// 00AB6D90  Em0044_ev::vf00  size=105  [class]
undefined4 * __thiscall Em0044_ev::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


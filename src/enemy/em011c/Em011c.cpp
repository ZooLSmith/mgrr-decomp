// src/enemy/em011c/Em011c.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004B7A20..00AB7330, 6 functions

#include "types.h"

// 004B7A20  Em011c::vf40  size=76  [class]
undefined4 __fastcall Em011c::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00a9e290(&DAT_0163eed0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  }
  return 1;
}

// 004B7A70  Em011c::vf4C  size=18  [class]
void __fastcall Em011c::vf4C(int *param_1)

{
  Behavior::vf4C();
                    /* WARNING: Could not recover jumptable at 0x004b7a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 100))();
  return;
}

// 004B7A90  Em011c::vf50  size=16  [class]
void Em011c::vf50(void)

{
  Behavior::vf50();
  FUN_00a93170();
  return;
}

// 00AA65A0  Em011c::Em011c  size=18  [class]
undefined4 * __fastcall Em011c::Em011c(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA65C0  Em011c::vf04  size=6  [class]
undefined * Em011c::vf04(void)

{
  return &DAT_01b34ea4;
}

// 00AB7330  Em011c::vf00  size=105  [class]
undefined4 * __thiscall Em011c::vf00(undefined4 *param_1,byte param_2)

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


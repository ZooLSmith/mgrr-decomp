// src/behavior/BehaviorDebrisObjectFastDie.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D8D90..00AB8A70, 5 functions

#include "types.h"

// 005D8D90  BehaviorDebrisObjectFastDie::vf40  size=30  [class]
undefined4 __fastcall BehaviorDebrisObjectFastDie::vf40(int *param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x20))();
  return 1;
}

// 005D8DB0  BehaviorDebrisObjectFastDie::thunk_vf4C  size=5  [class]
void __fastcall BehaviorDebrisObjectFastDie::thunk_vf4C(int *param_1)

{
  if (param_1[0x13c] != 0) {
    FUN_00a805f0();
    return;
  }
  if ((*(byte *)(param_1 + 0x132) & 2) == 0) {
    *(byte *)(param_1 + 0x132) = *(byte *)(param_1 + 0x132) | 2;
    (**(code **)(*param_1 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x009fde16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc))();
    return;
  }
  return;
}

// 00AA6C70  BehaviorDebrisObjectFastDie::BehaviorDebrisObjectFastDie  size=18  [class]
undefined4 * __fastcall
BehaviorDebrisObjectFastDie::BehaviorDebrisObjectFastDie(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA6C90  BehaviorDebrisObjectFastDie::vf04  size=6  [class]
undefined * BehaviorDebrisObjectFastDie::vf04(void)

{
  return &DAT_01b35318;
}

// 00AB8A70  BehaviorDebrisObjectFastDie::vf00  size=105  [class]
undefined4 * __thiscall BehaviorDebrisObjectFastDie::vf00(undefined4 *param_1,byte param_2)

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


// src/player/pl1500/Pl1500KnifeSet.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A3F40..00ABA270, 6 functions

#include "mgrr.h"
#include "Pl1500KnifeSet.h"

// 008A3F40  Pl1500KnifeSet::startup  size=31  [class]
undefined4 __fastcall Pl1500KnifeSet::startup(int param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x870) = 0;
  return 1;
}

// 008A9CD0  Pl1500KnifeSet::vf50  size=89  [class]
void __fastcall Pl1500KnifeSet::vf50(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  Behavior::vf50();
  iVar1 = FUN_00a8c760(1);
  if (iVar1 == 0) {
    if (((*(byte *)(param_1 + 0x130) & 1) == 0) && (param_1[0x21c] != 0)) {
      (**(code **)(*param_1 + 0x1c))();
      param_1[0x21c] = 0;
    }
  }
  else if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
    param_1[0x21c] = 1;
                    /* WARNING: Could not recover jumptable at 0x008a9d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

// 00AA6F00  Pl1500KnifeSet::Pl1500KnifeSet  size=18  [class]
undefined4 * __fastcall Pl1500KnifeSet::Pl1500KnifeSet(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  return param_1;
}

// 00AA6F20  Pl1500KnifeSet::vf04  size=6  [class]
undefined * Pl1500KnifeSet::vf04(void)

{
  return &DAT_01b35b98;
}

// 00AA6F30  Pl1500KnifeSet::vf94  size=6  [class]
undefined4 Pl1500KnifeSet::vf94(void)

{
  return 3;
}

// 00ABA270  Pl1500KnifeSet::destruct  size=105  [class]
undefined4 * __thiscall Pl1500KnifeSet::destruct(undefined4 *param_1,byte param_2)

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
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


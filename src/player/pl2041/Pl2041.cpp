// src/player/pl2041/Pl2041.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005F50A0..00AB9900, 6 functions

#include "mgrr.h"
#include "Pl2041.h"

// 005F50A0  Pl2041::startup  size=28  [class]
undefined4 __fastcall Pl2041::startup(int param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  return 1;
}

// 005F68D0  Pl2041::vf4C  size=29  [class]
void __fastcall Pl2041::vf4C(int *param_1)

{
  Behavior::vf4C();
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005f68e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 100))();
    return;
  }
  return;
}

// 005F68F0  Pl2041::vf50  size=27  [class]
void __fastcall Pl2041::vf50(int param_1)

{
  Behavior::vf50();
  if ((*(byte *)(param_1 + 0x4c0) & 1) != 0) {
    FUN_00a93170();
    return;
  }
  return;
}

// 00AA6ED0  Pl2041::Pl2041  size=18  [class]
undefined4 * __fastcall Pl2041::Pl2041(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  return param_1;
}

// 00AA6EF0  Pl2041::vf04  size=6  [class]
undefined * Pl2041::vf04(void)

{
  return &DAT_01b35424;
}

// 00AB9900  Pl2041::destruct  size=105  [class]
undefined4 * __thiscall Pl2041::destruct(undefined4 *param_1,byte param_2)

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


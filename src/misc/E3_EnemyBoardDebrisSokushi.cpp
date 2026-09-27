// src/misc/E3_EnemyBoardDebrisSokushi.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040AF90..00AB8A00, 6 functions

#include "mgrr.h"
#include "E3_EnemyBoardDebrisSokushi.h"

// 0040AF90  E3_EnemyBoardDebrisSokushi::startup  size=30  [class]
undefined4 __fastcall E3_EnemyBoardDebrisSokushi::startup(int *param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 0x20))();
  return 1;
}

// 0040AFB0  E3_EnemyBoardDebrisSokushi::thunk_vf4C  size=5  [class]
void __fastcall E3_EnemyBoardDebrisSokushi::thunk_vf4C(int *param_1)

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

// 005D8210  E3_EnemyBoardDebrisSokushi::vf4C  size=5  [class]
void __fastcall E3_EnemyBoardDebrisSokushi::vf4C(int *param_1)

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

// 00AA6C40  E3_EnemyBoardDebrisSokushi::E3_EnemyBoardDebrisSokushi  size=18  [class]
undefined4 * __fastcall E3_EnemyBoardDebrisSokushi::E3_EnemyBoardDebrisSokushi(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  return param_1;
}

// 00AA6C60  E3_EnemyBoardDebrisSokushi::vf04  size=6  [class]
undefined * E3_EnemyBoardDebrisSokushi::vf04(void)

{
  return &DAT_01b34b54;
}

// 00AB8A00  E3_EnemyBoardDebrisSokushi::destruct  size=105  [class]
undefined4 * __thiscall E3_EnemyBoardDebrisSokushi::destruct(undefined4 *param_1,byte param_2)

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


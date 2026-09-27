// src/managers/triggermanager/actions/TrgActEnmDestroy.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C815E0..00C815E0, 1 functions

#include "mgrr.h"

// 00C815E0  Trigger::Act::ENM_DESTROY  size=55  [class]
undefined4 __fastcall Trigger::Act::ENM_DESTROY(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abf58);
    return 0;
  }
  FUN_00c1a5a0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10)
              );
  return 1;
}


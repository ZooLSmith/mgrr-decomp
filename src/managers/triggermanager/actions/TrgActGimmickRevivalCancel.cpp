// src/managers/triggermanager/actions/TrgActGimmickRevivalCancel.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81230..00C81230, 1 functions

#include "mgrr.h"

// 00C81230  Trigger::Act::GIMMICK_REVIVAL_CANCEL  size=51  [class]
undefined4 __fastcall Trigger::Act::GIMMICK_REVIVAL_CANCEL(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abc98);
    return 0;
  }
  FUN_00945260(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  return 1;
}


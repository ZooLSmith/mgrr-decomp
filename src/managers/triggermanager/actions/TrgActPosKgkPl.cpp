// src/managers/triggermanager/actions/TrgActPosKgkPl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81760..00C81760, 1 functions

#include "mgrr.h"

// 00C81760  Trigger::Act::POS_KGK_PL  size=146  [class]
undefined4 __fastcall Trigger::Act::POS_KGK_PL(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20 [12];
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ac0a0);
    return 0;
  }
  iVar2 = FUN_00c78580(*(undefined4 *)(iVar1 + 8),local_20);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ac070,*(undefined4 *)(iVar1 + 8));
    return 0;
  }
  local_30 = 0;
  local_2c = local_14;
  local_28 = 0;
  local_14 = 0x3f800000;
  FUN_00a4d8a0(local_20,&local_30,0);
  return 1;
}


// src/managers/triggermanager/actions/TrgActObjectivePos.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80390..00C80390, 1 functions

#include "mgrr.h"

// 00C80390  Trigger::Act::OBJECTIVE_POS  size=126  [class]
undefined4 __fastcall Trigger::Act::OBJECTIVE_POS(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab480);
    return 0;
  }
  iVar2 = FUN_00c1c0d0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ab438,*(undefined4 *)(iVar1 + 8));
    return 0;
  }
  iVar2 = FUN_00c1bff0(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10));
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ab3f0,*(undefined4 *)(iVar1 + 0x10));
    return 0;
  }
  return 1;
}


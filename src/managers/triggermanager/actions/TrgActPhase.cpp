// src/managers/triggermanager/actions/TrgActPhase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EB80..00C7F0B0, 2 functions

#include "mgrr.h"

// 00C7EB80  Trigger::Act::PHASE  size=44  [class]
undefined4 __fastcall Trigger::Act::PHASE(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa73c);
    return 0;
  }
  uVar1 = FUN_00d5e850(*(undefined4 *)(*(int *)(param_1 + 4) + 8),0);
  return uVar1;
}

// 00C7F0B0  Trigger::Act::PHASE_2  size=46  [class]
undefined4 __fastcall Trigger::Act::PHASE_2(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa73c);
    return 0;
  }
  uVar2 = FUN_00d5e850(*(undefined4 *)(iVar1 + 8),iVar1 + 0xc);
  return uVar2;
}


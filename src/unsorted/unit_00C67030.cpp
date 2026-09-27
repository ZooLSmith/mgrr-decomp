// src/unsorted/unit_00C67030.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C67030..00C670A0, 2 functions

#include "mgrr.h"

// 00C67030  FUN_00c67030  size=112  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00c67030(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01d6449c & 1) == 0) {
    _DAT_01d6449c = _DAT_01d6449c | 1;
    DAT_01d64498 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01d64498;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01d64498);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = lib::AllocatedArray<VoiceSubtitleResourceForAction::Unit>::
          AllocatedArray<VoiceSubtitleResourceForAction::Unit>(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00C670A0  FUN_00c670a0  size=112  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00c670a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01d644a4 & 1) == 0) {
    _DAT_01d644a4 = _DAT_01d644a4 | 1;
    DAT_01d644a0 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01d644a0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01d644a0);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = lib::AllocatedArray<SeHandle>::AllocatedArray<SeHandle>(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}


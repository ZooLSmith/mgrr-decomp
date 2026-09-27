// src/unsorted/unit_00D76720.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D76720..00D76720, 1 functions

#include "mgrr.h"

// 00D76720  FUN_00d76720  size=112  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00d76720(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01dc5274 & 1) == 0) {
    _DAT_01dc5274 = _DAT_01dc5274 | 1;
    DAT_01dc5270 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01dc5270;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01dc5270);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = lib::AllocatedArray<BattleParameterImplement::Unit>::
          AllocatedArray<BattleParameterImplement::Unit>(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}


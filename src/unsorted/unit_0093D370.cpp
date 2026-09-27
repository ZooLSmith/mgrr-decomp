// src/unsorted/unit_0093D370.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093D370..0093D370, 1 functions

#include "types.h"

// 0093D370  FUN_0093d370  size=112  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0093d370(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01b36a44 & 1) == 0) {
    _DAT_01b36a44 = _DAT_01b36a44 | 1;
    DAT_01b36a40 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01b36a40;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01b36a40);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = lib::AllocatedArray<DatsuSetTableImplement::Unit>::
          AllocatedArray<DatsuSetTableImplement::Unit>(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}


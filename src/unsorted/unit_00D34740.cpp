// src/unsorted/unit_00D34740.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D34740..00D34740, 1 functions

#include "mgrr.h"

// 00D34740  FUN_00d34740  size=72  [run]
int FUN_00d34740(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x160,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cCustomObjCtrlManager::cCustomObjCtrlManager_7();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cSubWeaponInfoDispParts";
      *(undefined4 *)(iVar1 + 8) = 5;
      uVar2 = FUN_00d29960(0x4a);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}


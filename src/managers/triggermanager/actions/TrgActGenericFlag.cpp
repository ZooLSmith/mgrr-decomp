// src/managers/triggermanager/actions/TrgActGenericFlag.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81500..00C81500, 1 functions

#include "mgrr.h"

// 00C81500  Trigger::Act::GENERIC_FLAG_  size=99  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act::GENERIC_FLAG_(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    puVar3 = &DAT_0164ced4;
    if (_DAT_00000004 != 0xad) {
      puVar3 = &DAT_0164ced8;
    }
    FUN_00dd5650(&DAT_016abeec,puVar3);
  }
  else {
    iVar2 = *(int *)(iVar1 + 8);
    if ((0 < iVar2) && (iVar2 < 0x21)) {
      if (*(int *)(iVar1 + 4) == 0xad) {
        FUN_00c20790(iVar2);
        return 1;
      }
      FUN_00c207b0(iVar2);
      return 1;
    }
  }
  return 0;
}


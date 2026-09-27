// src/managers/ccutdatamanager/cCutDataManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D8D310..00D8D310, 1 functions

#include "mgrr.h"

// 00D8D310  cCutDataManager::entryData  size=167  [class]
uint __fastcall cCutDataManager::entryData(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    puVar2 = (undefined4 *)FUN_00d8b200();
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      FUN_00a15130();
      FUN_00a16570();
      puVar1 = *(undefined4 **)(param_1 + 0x18);
      if ((puVar2 < puVar1) || (puVar1 + *(int *)(param_1 + 0x1c) * 0x84 <= puVar2)) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = (uint)((int)puVar2 - (int)puVar1) / 0x210;
      }
      puVar2[0x7e] = 0;
      puVar2[0x7f] = 0;
      puVar2[0x7c] = 0;
      puVar2[0x7d] = 1;
      FUN_00d8ae30(puVar2);
      return uVar3;
    }
  }
  FUN_00dd5650(&DAT_016c2858);
  return 0xffffffff;
}


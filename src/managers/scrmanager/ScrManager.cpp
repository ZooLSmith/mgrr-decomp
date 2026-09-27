// src/managers/scrmanager/ScrManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C14270..00C24BC0, 2 functions

#include "types.h"

// 00C14270  ScrManager::vf74  size=31  [class]
undefined4 * __thiscall ScrManager::vf74(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C24BC0  ScrManager::ScrManager  size=91  [class]
void __fastcall ScrManager::ScrManager(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = ScrManagerImplement::vftable;
  puVar1 = param_1 + 2;
  iVar2 = 8;
  do {
    if (puVar1[0x213] != 0) {
      FUN_00935620();
    }
    puVar1 = puVar1 + 0x222;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 7;
  do {
    Hw::cTexture::cTexture_5();
    Hw::cTexture::cTexture_5();
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *param_1 = vftable;
  return;
}


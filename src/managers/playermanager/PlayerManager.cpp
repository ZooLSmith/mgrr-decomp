// src/managers/playermanager/PlayerManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C13430..00C4CEB0, 2 functions

#include "mgrr.h"
#include "PlayerManager.h"

// 00C13430  PlayerManager::vf00  size=31  [class]
undefined4 * __thiscall PlayerManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C4CEB0  PlayerManager::PlayerManager  size=73  [class]
void __fastcall PlayerManager::PlayerManager(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = PlayerManagerImplement::vftable;
  if ((undefined4 *)param_1[0x3e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x3e])(1);
    param_1[0x3e] = 0;
  }
  iVar1 = 4;
  do {
    Hw::cTexture::cTexture_5();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  return;
}


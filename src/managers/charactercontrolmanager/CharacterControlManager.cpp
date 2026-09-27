// src/managers/charactercontrolmanager/CharacterControlManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E08D0..008EA2B0, 2 functions

#include "mgrr.h"
#include "CharacterControlManager.h"

// 008E08D0  CharacterControlManager::vf00  size=31  [class]
undefined4 * __thiscall CharacterControlManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008EA2B0  CharacterControlManager::CharacterControlManager  size=57  [class]
void __fastcall CharacterControlManager::CharacterControlManager(undefined4 *param_1)

{
  *param_1 = CharacterControlManagerImplement::vftable;
  FUN_00dd7270();
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  FUN_00dd7270();
  *param_1 = vftable;
  return;
}


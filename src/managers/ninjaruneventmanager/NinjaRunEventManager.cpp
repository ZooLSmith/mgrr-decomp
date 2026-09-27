// src/managers/ninjaruneventmanager/NinjaRunEventManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1BA20..00C62A40, 3 functions

#include "types.h"

// 00C1BA20  NinjaRunEventManager::vf94  size=31  [class]
undefined4 * __thiscall NinjaRunEventManager::vf94(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C629F0  NinjaRunEventManager::NinjaRunEventManager  size=68  [class]
void __fastcall NinjaRunEventManager::NinjaRunEventManager(undefined4 *param_1)

{
  *param_1 = NinjaRunEventManagerImplement::vftable;
  FUN_00c43450();
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  RayCastManager::getWork(param_1 + 5);
  FUN_00905ce0();
  *param_1 = vftable;
  return;
}

// 00C62A40  NinjaRunEventManager::NinjaRunEventManager_2  size=88  [class]
undefined4 * __thiscall
NinjaRunEventManager::NinjaRunEventManager_2(undefined4 *param_1,byte param_2)

{
  *param_1 = NinjaRunEventManagerImplement::vftable;
  FUN_00c43450();
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  RayCastManager::getWork(param_1 + 5);
  FUN_00905ce0();
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


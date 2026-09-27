// src/managers/debrismanager/DebrisManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1C580..00C62B00, 2 functions

#include "mgrr.h"
#include "DebrisManager.h"

// 00C1C580  DebrisManager::vf00  size=31  [class]
undefined4 * __thiscall DebrisManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C62B00  DebrisManager::DebrisManager  size=129  [class]
void __fastcall DebrisManager::DebrisManager(undefined4 *param_1)

{
  *param_1 = DebrisManagerImplement::vftable;
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  if (param_1[4] != 0) {
    FUN_00c3f310();
    if (param_1[7] != 0) {
      FUN_00dd48d0(param_1[4],0);
      param_1[7] = 0;
    }
    param_1[4] = 0;
    param_1[5] = 0;
  }
  FUN_00dd7270();
  if (param_1[4] != 0) {
    FUN_00c3f310();
    if (param_1[7] != 0) {
      FUN_00dd48d0(param_1[4],0);
      param_1[7] = 0;
    }
    param_1[4] = 0;
    param_1[5] = 0;
  }
  *param_1 = vftable;
  return;
}


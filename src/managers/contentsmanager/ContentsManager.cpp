// src/managers/contentsmanager/ContentsManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DC750..008DF780, 2 functions

#include "mgrr.h"
#include "ContentsManager.h"

// 008DC750  ContentsManager::vf00  size=31  [class]
undefined4 * __thiscall ContentsManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DF780  ContentsManager::ContentsManager  size=113  [class]
void __fastcall ContentsManager::ContentsManager(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = ContentsManagerImplement::vftable;
  piVar1 = *(int **)(param_1[0xb] + 4);
  if (piVar1 != piVar1 + *(int *)(param_1[0xb] + 8)) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 4))(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)(*(int *)(param_1[0xb] + 4) + *(int *)(param_1[0xb] + 8) * 4));
  }
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
    param_1[0xb] = 0;
  }
  FUN_00dd7270();
  FUN_00dd7270();
  *param_1 = vftable;
  return;
}


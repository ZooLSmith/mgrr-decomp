// src/managers/windmanager/WindManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DFDF0..008E0740, 2 functions

#include "mgrr.h"
#include "WindManager.h"

// 008DFDF0  WindManager::vf00  size=31  [class]
undefined4 * __thiscall WindManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008E0740  WindManager::WindManager  size=92  [class]
void __fastcall WindManager::WindManager(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = WindManagerImplement::vftable;
  iVar1 = *(int *)(param_1[1] + 4);
  if (iVar1 != iVar1 + *(int *)(param_1[1] + 8) * 4) {
    do {
      FUN_010060a0();
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(param_1[1] + 4) + *(int *)(param_1[1] + 8) * 4);
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  *param_1 = vftable;
  return;
}


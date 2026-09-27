// src/managers/situationmanager/SituationManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1A600..00C60B10, 2 functions

#include "mgrr.h"
#include "SituationManager.h"

// 00C1A600  SituationManager::vf0C  size=31  [class]
undefined4 * __thiscall SituationManager::vf0C(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C60B10  SituationManager::SituationManager  size=118  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall SituationManager::SituationManager(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = SituationManagerImplement::vftable;
  if ((param_1[10] == 0) && (piVar1 = _DAT_00000004, _DAT_00000004 != _DAT_00000004 + _DAT_00000008)
     ) {
    do {
      if (*piVar1 != 0) {
        FUN_00dd4920(*piVar1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)(*(int *)(param_1[10] + 4) + *(int *)(param_1[10] + 8) * 4));
  }
  if ((undefined4 *)param_1[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[10])(1);
    param_1[10] = 0;
  }
  FUN_00dd7270();
  FUN_00dd7270();
  *param_1 = vftable;
  return;
}


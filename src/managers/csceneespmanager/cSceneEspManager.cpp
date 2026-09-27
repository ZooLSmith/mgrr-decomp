// src/managers/csceneespmanager/cSceneEspManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F41080..00F41080, 1 functions

#include "types.h"

// 00F41080  cSceneEspManager::getEventTimeRate  size=60  [class]
float10 __thiscall cSceneEspManager::getEventTimeRate(int param_1,int param_2)

{
  float10 fVar1;
  
  if (param_2 == 0) {
    FUN_00dd5650(&DAT_016dfad0,"[cSceneEspManager::getEventTimeRate] pEsp != NULL");
  }
  if (*(int *)(param_1 + 0x1f8c) != 0) {
    return (float10)1;
  }
  fVar1 = (float10)FUN_009cde00(param_2);
  return fVar1;
}


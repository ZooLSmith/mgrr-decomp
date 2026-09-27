// src/managers/phasereadmanager/PhaseReadManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D44550..00D4D560, 2 functions

#include "mgrr.h"
#include "PhaseReadManager.h"

// 00D44550  PhaseReadManager::vf28  size=31  [class]
undefined4 * __thiscall PhaseReadManager::vf28(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D4D560  PhaseReadManager::PhaseReadManager  size=98  [class]
void __fastcall PhaseReadManager::PhaseReadManager(undefined4 *param_1)

{
  *param_1 = PhaseReadManagerImplement::vftable;
  if (param_1[5] != 0) {
    FUN_00e9d6a0(param_1[5]);
  }
  FUN_00e9ef20(param_1 + 10);
  (**(code **)(param_1[10] + 8))();
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  param_1[0x126] = 0;
  param_1[2] = 0;
  Hw::cHeap::cHeap_4();
  *param_1 = vftable;
  return;
}


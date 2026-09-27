// src/managers/debrisexplodeparametermanager/DebrisExplodeParameterManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093D990..00943EC0, 6 functions

#include "mgrr.h"
#include "DebrisExplodeParameterManager.h"

// 0093D990  DebrisExplodeParameterManager::vf1C  size=31  [class]
undefined4 * __thiscall DebrisExplodeParameterManager::vf1C(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0093DEE0  DebrisExplodeParameterManager::vf0C  size=13  [class]
void DebrisExplodeParameterManager::vf0C(void)

{
                    /* WARNING: Could not recover jumptable at 0x0093deeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_01b36a50 + 0xc))();
  return;
}

// 0093DEF0  DebrisExplodeParameterManager::vf10  size=13  [class]
void DebrisExplodeParameterManager::vf10(void)

{
                    /* WARNING: Could not recover jumptable at 0x0093defb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_01b36a50 + 0x10))();
  return;
}

// 0093DF00  DebrisExplodeParameterManager::vf14  size=13  [class]
void DebrisExplodeParameterManager::vf14(void)

{
                    /* WARNING: Could not recover jumptable at 0x0093df0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_01b36a50 + 0x14))();
  return;
}

// 0093DF10  DebrisExplodeParameterManager::vf18  size=13  [class]
void DebrisExplodeParameterManager::vf18(void)

{
                    /* WARNING: Could not recover jumptable at 0x0093df1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_01b36a50 + 0x18))();
  return;
}

// 00943EC0  DebrisExplodeParameterManager::DebrisExplodeParameterManager  size=30  [class]
void __fastcall DebrisExplodeParameterManager::DebrisExplodeParameterManager(undefined4 *param_1)

{
  *param_1 = DebrisExplodeParameterManagerImplement::vftable;
  FUN_0093fe30();
  FUN_00dd7270();
  *param_1 = vftable;
  return;
}


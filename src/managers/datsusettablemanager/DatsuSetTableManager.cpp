// src/managers/datsusettablemanager/DatsuSetTableManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0093BD60..0093D0B0, 4 functions

#include "mgrr.h"
#include "DatsuSetTableManager.h"

// 0093BD60  DatsuSetTableManager::vf14  size=31  [class]
undefined4 * __thiscall DatsuSetTableManager::vf14(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0093C000  DatsuSetTableManager::vf0C  size=13  [class]
void DatsuSetTableManager::vf0C(void)

{
                    /* WARNING: Could not recover jumptable at 0x0093c00b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_01b36a20 + 0xc))();
  return;
}

// 0093C010  DatsuSetTableManager::vf10  size=13  [class]
void DatsuSetTableManager::vf10(void)

{
                    /* WARNING: Could not recover jumptable at 0x0093c01b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_01b36a20 + 0x10))();
  return;
}

// 0093D0B0  DatsuSetTableManager::DatsuSetTableManager  size=30  [class]
void __fastcall DatsuSetTableManager::DatsuSetTableManager(undefined4 *param_1)

{
  *param_1 = DatsuSetTableManagerImplement::vftable;
  FUN_0093c410();
  FUN_00dd7270();
  *param_1 = vftable;
  return;
}


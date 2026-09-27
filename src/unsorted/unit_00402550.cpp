// src/unsorted/unit_00402550.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00402550..004027C0, 3 functions

#include "mgrr.h"

// 00402550  FUN_00402550  size=65  [run]
bool FUN_00402550(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0xc0,param_1);
  if (iVar1 != 0) {
    DAT_01b34b00 = lib::AllocatedArray<BattleRegionManagerImplement::Unit>::
                   AllocatedArray<BattleRegionManagerImplement::Unit>(param_1);
    return DAT_01b34b00 != 0;
  }
  DAT_01b34b00 = 0;
  return false;
}

// 004025B0  FUN_004025b0  size=39  [run]
undefined4 __fastcall FUN_004025b0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) && ((iVar1 != 0x1b0 && (iVar1 != 0x147)))) {
    return 1;
  }
  return 0;
}

// 004027C0  FUN_004027c0  size=35  [run]
bool __fastcall FUN_004027c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}


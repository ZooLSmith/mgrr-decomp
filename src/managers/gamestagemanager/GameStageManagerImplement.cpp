// src/managers/gamestagemanager/GameStageManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DFBD0..008DFD10, 9 functions

#include "mgrr.h"
#include "GameStageManagerImplement.h"

// 008DFBD0  GameStageManagerImplement::vf08  size=11  [class]
void __fastcall GameStageManagerImplement::vf08(int param_1)

{
  FUN_008dfaf0(*(undefined4 *)(param_1 + 4));
  return;
}

// 008DFBE0  GameStageManagerImplement::vf0C  size=24  [class]
void GameStageManagerImplement::vf0C(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_008dc7b0();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_008dc7b0();
                    /* WARNING: Could not recover jumptable at 0x008dfbf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 4))();
    return;
  }
  return;
}

// 008DFC00  GameStageManagerImplement::thunk_vf10  size=5  [class]
void GameStageManagerImplement::thunk_vf10(void)

{
  if (DAT_01b35d60 != (undefined4 *)0x0) {
    (**(code **)*DAT_01b35d60)(1);
    DAT_01b35d60 = (undefined4 *)0x0;
  }
  return;
}

// 008DFC10  GameStageManagerImplement::vf00  size=7  [class]
void __fastcall GameStageManagerImplement::vf00(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x008dfc15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}

// 008DFC40  GameStageManagerImplement::vf04  size=1  [class]
void GameStageManagerImplement::vf04(void)

{
  return;
}

// 008DFC50  FUN_008dfc50  size=30  [between]
void FUN_008dfc50(void)

{
  if (DAT_01b35d88 != (int *)0x0) {
    (**(code **)(*DAT_01b35d88 + 0x14))(1);
    DAT_01b35d88 = (int *)0x0;
  }
  return;
}

// 008DFC70  FUN_008dfc70  size=6  [between]
undefined4 FUN_008dfc70(void)

{
  return DAT_01b35d88;
}

// 008DFCB0  GameStageManagerImplement::vf14  size=31  [class]
undefined4 * __thiscall GameStageManagerImplement::vf14(undefined4 *param_1,byte param_2)

{
  *param_1 = GameStageManager::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DFD10  GameStageManagerImplement::GameStageManagerImplement  size=63  [class]
bool GameStageManagerImplement::GameStageManagerImplement(undefined4 param_1)

{
  DAT_01b35d88 = (undefined4 *)FUN_00dd3500(8,param_1);
  if (DAT_01b35d88 != (undefined4 *)0x0) {
    DAT_01b35d88[1] = param_1;
    *DAT_01b35d88 = vftable;
    return DAT_01b35d88 != (undefined4 *)0x0;
  }
  DAT_01b35d88 = (undefined4 *)0x0;
  return false;
}


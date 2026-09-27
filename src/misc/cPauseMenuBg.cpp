// src/misc/cPauseMenuBg.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00994310..00994430, 6 functions

#include "mgrr.h"
#include "cPauseMenuBg.h"

// 00994310  cPauseMenuBg::cPauseMenuBg  size=18  [class]
undefined4 * __fastcall cPauseMenuBg::cPauseMenuBg(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  return param_1;
}

// 00994340  cPauseMenuBg::vf00  size=36  [class]
undefined4 * __thiscall cPauseMenuBg::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00994370  cPauseMenuBg::cPauseMenuBg_2  size=68  [class]
undefined4 * cPauseMenuBg::cPauseMenuBg_2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x20,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    *puVar1 = vftable;
    puVar1[3] = "cPauseMenuBg";
    FUN_00d29ca0(0x70,8);
    puVar1[4] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

// 009943C0  cPauseMenuBg::vf08  size=24  [class]
void __fastcall cPauseMenuBg::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  FUN_00cb2600(1);
  return;
}

// 009943E0  cPauseMenuBg::vf14  size=75  [class]
void __fastcall cPauseMenuBg::vf14(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f98a90();
  if (((iVar1 != 800) && (iVar1 != 0x690)) && (iVar1 != 0x780)) {
    FUN_00ccdf50(*(undefined4 *)(param_1 + 0x1c),0x44344000);
    return;
  }
  FUN_00ccdf50(*(undefined4 *)(param_1 + 0x1c),0x44340000);
  return;
}

// 00994430  cPauseMenuBg::vf04  size=101  [class]
void __fastcall cPauseMenuBg::vf04(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    if ((param_1[4] != 0) && (iVar1 = FUN_00cad390(), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_00ccdda0(param_1[2]);
    if (iVar1 == 0) {
      param_1[1] = -1;
      FUN_00dd5650(&DAT_01656a20);
      return;
    }
    (**(code **)(*param_1 + 8))();
    param_1[1] = 2;
  }
  else if (param_1[1] != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00994493. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x14))();
  return;
}


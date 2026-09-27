// src/misc/cPauseMenuBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009A4EA0..00D11210, 3 functions

#include "mgrr.h"
#include "cPauseMenuBase.h"

// 009A4EA0  cPauseMenuBase::vf14  size=113  [class]
undefined4 __thiscall cPauseMenuBase::vf14(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00d467c0();
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  FUN_00d1fb20(5,uVar2,param_2,9,1);
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_00cab4f0(0);
    FUN_00cab4a0(1);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x6f020000;
    return 1;
  }
  return 0;
}

// 00D111C0  cPauseMenuBase::cPauseMenuBase  size=18  [class]
undefined4 * __fastcall cPauseMenuBase::cPauseMenuBase(undefined4 *param_1)

{
  cCustomObjWorkBase::cCustomObjWorkBase();
  *param_1 = vftable;
  return param_1;
}

// 00D11210  cPauseMenuBase::vf00  size=65  [class]
undefined4 * __thiscall cPauseMenuBase::vf00(undefined4 *param_1,byte param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1[0x10] + 0xc);
  *param_1 = cCustomObjWorkBase::vftable;
  (*pcVar1)();
  param_1[0x10] = cUICtrl::vftable;
  FUN_00cc7640();
  *param_1 = cUIWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


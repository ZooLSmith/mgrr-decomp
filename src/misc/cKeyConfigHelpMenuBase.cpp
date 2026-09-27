// src/misc/cKeyConfigHelpMenuBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099E7F0..00D10C60, 3 functions

#include "mgrr.h"
#include "cKeyConfigHelpMenuBase.h"

// 0099E7F0  cKeyConfigHelpMenuBase::vf14  size=114  [class]
undefined4 __thiscall cKeyConfigHelpMenuBase::vf14(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((DAT_018b9174 & 0xf00) == 0xc00) {
    uVar1 = 0xa013;
  }
  else if ((DAT_018b9174 & 0xf00) == 0xd00) {
    uVar1 = 0xa014;
  }
  else {
    uVar1 = 0xa012;
  }
  FUN_00d1fb20(0xc,uVar1,param_2,9,1);
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x6b0a0000;
    return 1;
  }
  return 0;
}

// 00D10C10  cKeyConfigHelpMenuBase::cKeyConfigHelpMenuBase  size=18  [class]
undefined4 * __fastcall cKeyConfigHelpMenuBase::cKeyConfigHelpMenuBase(undefined4 *param_1)

{
  cCustomObjWorkBase::cCustomObjWorkBase();
  *param_1 = vftable;
  return param_1;
}

// 00D10C60  cKeyConfigHelpMenuBase::vf00  size=65  [class]
undefined4 * __thiscall cKeyConfigHelpMenuBase::vf00(undefined4 *param_1,byte param_2)

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


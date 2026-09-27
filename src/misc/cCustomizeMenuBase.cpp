// src/misc/cCustomizeMenuBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099FAF0..00D10DA0, 3 functions

#include "mgrr.h"
#include "cCustomizeMenuBase.h"

// 0099FAF0  cCustomizeMenuBase::vf14  size=61  [class]
undefined4 __thiscall cCustomizeMenuBase::vf14(int param_1,undefined4 param_2)

{
  FUN_00d1fb20(0xf,1,param_2,9,1);
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20000000;
    return 1;
  }
  return 0;
}

// 00D10D50  cCustomizeMenuBase::cCustomizeMenuBase  size=18  [class]
undefined4 * __fastcall cCustomizeMenuBase::cCustomizeMenuBase(undefined4 *param_1)

{
  cCustomObjWorkBase::cCustomObjWorkBase();
  *param_1 = vftable;
  return param_1;
}

// 00D10DA0  cCustomizeMenuBase::vf00  size=65  [class]
undefined4 * __thiscall cCustomizeMenuBase::vf00(undefined4 *param_1,byte param_2)

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


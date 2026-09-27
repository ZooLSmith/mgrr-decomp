// src/misc/cSampleCustomObjDispBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC5510..00D11990, 3 functions

#include "types.h"

// 00CC5510  cSampleCustomObjDispBase::vf14  size=5  [class]
undefined4 cSampleCustomObjDispBase::vf14(void)

{
  return 0;
}

// 00D11940  cSampleCustomObjDispBase::cSampleCustomObjDispBase  size=18  [class]
undefined4 * __fastcall cSampleCustomObjDispBase::cSampleCustomObjDispBase(undefined4 *param_1)

{
  cCustomObjCtrl::cCustomObjCtrl();
  *param_1 = vftable;
  return param_1;
}

// 00D11990  cSampleCustomObjDispBase::vf00  size=65  [class]
undefined4 * __thiscall cSampleCustomObjDispBase::vf00(undefined4 *param_1,byte param_2)

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


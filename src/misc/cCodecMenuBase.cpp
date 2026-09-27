// src/misc/cCodecMenuBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099AFC0..00D106C0, 3 functions

#include "mgrr.h"
#include "cCodecMenuBase.h"

// 0099AFC0  cCodecMenuBase::vf14  size=88  [class]
undefined4 __thiscall cCodecMenuBase::vf14(int param_1,undefined4 param_2)

{
  FUN_00d1fb20(0xe,1,param_2,9,1);
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_00cab4f0(0);
    FUN_00cab4a0(1);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x6f0a0000;
    return 1;
  }
  return 0;
}

// 00D10670  cCodecMenuBase::cCodecMenuBase  size=18  [class]
undefined4 * __fastcall cCodecMenuBase::cCodecMenuBase(undefined4 *param_1)

{
  cCustomObjCtrl::cCustomObjCtrl();
  *param_1 = vftable;
  return param_1;
}

// 00D106C0  cCodecMenuBase::vf00  size=65  [class]
undefined4 * __thiscall cCodecMenuBase::vf00(undefined4 *param_1,byte param_2)

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


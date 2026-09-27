// src/misc/cCodecCallAlarmBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D0DFB0..00D21270, 3 functions

#include "mgrr.h"
#include "cCodecCallAlarmBase.h"

// 00D0DFB0  cCodecCallAlarmBase::cCodecCallAlarmBase  size=18  [class]
undefined4 * __fastcall cCodecCallAlarmBase::cCodecCallAlarmBase(undefined4 *param_1)

{
  cCustomObjWorkBase::cCustomObjWorkBase();
  *param_1 = vftable;
  return param_1;
}

// 00D0E000  cCodecCallAlarmBase::vf00  size=65  [class]
undefined4 * __thiscall cCodecCallAlarmBase::vf00(undefined4 *param_1,byte param_2)

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

// 00D21270  cCodecCallAlarmBase::vf14  size=93  [class]
undefined4 __thiscall cCodecCallAlarmBase::vf14(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((DAT_01bea090 & 0x80000000) == 0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 4;
  }
  FUN_00d1fb20(uVar1,0x30,param_2,2,1);
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x63020000;
    return 1;
  }
  return 0;
}


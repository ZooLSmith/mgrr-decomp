// src/misc/cVRMissionResult2Base.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D0FB30..00D273F0, 3 functions

#include "mgrr.h"
#include "cVRMissionResult2Base.h"

// 00D0FB30  cVRMissionResult2Base::cVRMissionResult2Base  size=18  [class]
undefined4 * __fastcall cVRMissionResult2Base::cVRMissionResult2Base(undefined4 *param_1)

{
  cCustomObjWorkBase::cCustomObjWorkBase();
  *param_1 = vftable;
  return param_1;
}

// 00D0FB80  cVRMissionResult2Base::vf00  size=65  [class]
undefined4 * __thiscall cVRMissionResult2Base::vf00(undefined4 *param_1,byte param_2)

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

// 00D273F0  cVRMissionResult2Base::vf14  size=143  [class]
undefined4 __thiscall cVRMissionResult2Base::vf14(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00cc9000(7,0x12);
  if ((iVar1 != 0) &&
     (iVar1 = (**(code **)(*(int *)(param_1 + 0x40) + 8))(&DAT_01b7be50,iVar1,1), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x1fc) = 9;
    *(undefined4 *)(param_1 + 0x18) = 1;
    FUN_00d1e000();
  }
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_00cab4f0(0);
    FUN_00cab4a0(1);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x28030000;
    return 1;
  }
  return 0;
}


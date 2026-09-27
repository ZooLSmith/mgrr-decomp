// src/misc/cVRGoalPointSignBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D0F950..00D27260, 3 functions

#include "mgrr.h"
#include "cVRGoalPointSignBase.h"

// 00D0F950  cVRGoalPointSignBase::cVRGoalPointSignBase  size=18  [class]
undefined4 * __fastcall cVRGoalPointSignBase::cVRGoalPointSignBase(undefined4 *param_1)

{
  cCustomObjCtrl::cCustomObjCtrl();
  *param_1 = vftable;
  return param_1;
}

// 00D0F9A0  cVRGoalPointSignBase::vf00  size=65  [class]
undefined4 * __thiscall cVRGoalPointSignBase::vf00(undefined4 *param_1,byte param_2)

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

// 00D27260  cVRGoalPointSignBase::vf14  size=117  [class]
undefined4 __thiscall cVRGoalPointSignBase::vf14(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_018b9174 == 0xd30) {
    iVar1 = FUN_009c73f0(7);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016bb4b0);
      goto LAB_00d272ad;
    }
    uVar2 = 100;
  }
  else {
    uVar2 = 0x48;
  }
  FUN_00d1fb20(2,uVar2,param_2,6,1);
LAB_00d272ad:
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20000000;
    return 1;
  }
  return 0;
}


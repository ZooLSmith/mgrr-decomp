// src/misc/cGameOverHackingMenuBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009A2070..00D10F80, 3 functions

#include "mgrr.h"
#include "cGameOverHackingMenuBase.h"

// 009A2070  cGameOverHackingMenuBase::vf14  size=88  [class]
undefined4 __thiscall cGameOverHackingMenuBase::vf14(int param_1,undefined4 param_2)

{
  FUN_00d1fb20(6,1,param_2,9,1);
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_00cab4f0(0);
    FUN_00cab4a0(1);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x6f0a0000;
    return 1;
  }
  return 0;
}

// 00D10F30  cGameOverHackingMenuBase::cGameOverHackingMenuBase  size=18  [class]
undefined4 * __fastcall cGameOverHackingMenuBase::cGameOverHackingMenuBase(undefined4 *param_1)

{
  cCustomObjWorkBase::cCustomObjWorkBase();
  *param_1 = vftable;
  return param_1;
}

// 00D10F80  cGameOverHackingMenuBase::vf00  size=65  [class]
undefined4 * __thiscall cGameOverHackingMenuBase::vf00(undefined4 *param_1,byte param_2)

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


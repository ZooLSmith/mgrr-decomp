// src/misc/cTitleDispBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D10030..00D28E20, 3 functions

#include "mgrr.h"
#include "cTitleDispBase.h"

// 00D10030  cTitleDispBase::cTitleDispBase  size=18  [class]
undefined4 * __fastcall cTitleDispBase::cTitleDispBase(undefined4 *param_1)

{
  cCustomObjWorkBase::cCustomObjWorkBase();
  *param_1 = vftable;
  return param_1;
}

// 00D10080  cTitleDispBase::vf00  size=65  [class]
undefined4 * __thiscall cTitleDispBase::vf00(undefined4 *param_1,byte param_2)

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

// 00D28E20  cTitleDispBase::vf14  size=94  [class]
undefined4 __thiscall cTitleDispBase::vf14(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (DAT_01dc13fc == '\0') {
    uVar1 = 0x21;
  }
  else if (DAT_01dc13fc == '\x01') {
    uVar1 = 0x22;
  }
  else {
    uVar1 = 0x23;
  }
  FUN_00d1fb20(7,uVar1,param_2,9,1);
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x20000000;
    return 1;
  }
  return 0;
}


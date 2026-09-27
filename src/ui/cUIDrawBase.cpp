// src/ui/cUIDrawBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CA8880..00CE5320, 8 functions

#include "mgrr.h"
#include "cUIDrawBase.h"

// 00CA8880  cUIDrawBase::vf04  size=1  [class]
void cUIDrawBase::vf04(void)

{
  return;
}

// 00CA8890  cUIDrawBase::vf00  size=31  [class]
undefined4 * __thiscall cUIDrawBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CB3910  cUIDrawBase::vf10  size=3  [class]
void cUIDrawBase::vf10(void)

{
  return;
}

// 00CB3920  cUIDrawBase::vf0C  size=3  [class]
void cUIDrawBase::vf0C(void)

{
  return;
}

// 00CCEA20  cUIDrawBase::vf18  size=243  [class]
void __fastcall cUIDrawBase::vf18(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  switch(uVar1) {
  case 0:
    FUN_00dd5650(&DAT_016b7b8c,"cUIDrawLocator");
    return;
  case 1:
    FUN_00dd5650(&DAT_016b7b8c,"cUIDrawImage");
    return;
  case 2:
    FUN_00dd5650(&DAT_016b7b8c,"cUIDraw9Grid");
    return;
  case 3:
    FUN_00dd5650(&DAT_016b7b8c,"cUIDrawMessage");
    return;
  case 4:
    FUN_00dd5650(&DAT_016b7b8c,"cUIDrawString");
    return;
  case 5:
    FUN_00dd5650(&DAT_016b7b8c,"cUIDrawMask");
    return;
  case 6:
    FUN_00dd5650(&DAT_016b7b8c,"cUIDrawEmitter");
    return;
  case 7:
    FUN_00dd5650(&DAT_016b7b8c,"cUIDrawBreak");
    return;
  case 8:
    FUN_00dd5650(&DAT_016b7b8c,"cUIDraw3Grid");
    return;
  default:
    FUN_00dd5650(&DAT_016b7b8c,"Error: UnknownLayer");
    return;
  }
}

// 00CCEE50  cUIDrawBase::cUIDrawBase_2  size=83  [class]
void __fastcall cUIDrawBase::cUIDrawBase_2(undefined4 *param_1)

{
  *param_1 = cUIDrawMessage::vftable;
  if (param_1[0x45] != 0) {
    FUN_00dd4940(param_1[0x45]);
    param_1[0x45] = 0;
  }
  param_1[0x44] = 0;
  if (param_1[0x43] != 0) {
    FUN_00dd4940(param_1[0x43]);
    param_1[0x43] = 0;
  }
  param_1[0x42] = 0;
  *param_1 = vftable;
  return;
}

// 00CCF710  cUIDrawBase::cUIDrawBase  size=47  [class]
void __fastcall cUIDrawBase::cUIDrawBase(undefined4 *param_1)

{
  *param_1 = cUIDrawHit::vftable;
  if (param_1[1] != 0) {
    FUN_00dd4920(param_1[1]);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 00CE5320  cUIDrawBase::cUIDrawBase  size=42  [class]
void __fastcall cUIDrawBase::cUIDrawBase(undefined4 *param_1)

{
  *param_1 = cUIDrawLocator::vftable;
  FUN_00cc7640();
  param_1[4] = cUICtrl::vftable;
  FUN_00cc7640();
  *param_1 = vftable;
  return;
}


// src/effect/EspCtrlCustomImpl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00932E50..00932EE0, 3 functions

#include "mgrr.h"
#include "EspCtrlCustomImpl.h"

// 00932E50  EspCtrlCustomImpl::EspCtrlCustomImpl  size=41  [class]
undefined4 * __fastcall EspCtrlCustomImpl::EspCtrlCustomImpl(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 7;
  do {
    cEspControler::cEspControler();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00932EC0  EspCtrlCustomImpl::vf04  size=18  [class]
int __thiscall EspCtrlCustomImpl::vf04(int param_1,int param_2)

{
  if (8 < param_2) {
    return param_1 + 0x10;
  }
  return 0;
}

// 00932EE0  EspCtrlCustomImpl::vf00  size=70  [class]
undefined4 * __thiscall EspCtrlCustomImpl::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 7;
  do {
    cEspControler::~cEspControler();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = Animation::EspCtrlCustom::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


// src/misc/cMsgCtrl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCD450..00CF7450, 9 functions

#include "mgrr.h"
#include "cMsgCtrl.h"

// 00CCD450  cMsgCtrl::cMsgCtrl  size=36  [class]
undefined4 * __fastcall cMsgCtrl::cMsgCtrl(undefined4 *param_1)

{
  *param_1 = vftable;
  Hw::cTexture::cTexture();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  *(undefined2 *)((int)param_1 + 0x2d) = 0;
  return param_1;
}

// 00CCD480  cMsgCtrl::~cMsgCtrl  size=43  [class]
void __fastcall cMsgCtrl::~cMsgCtrl(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00f972f0();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  *(undefined2 *)((int)param_1 + 0x2d) = 0;
  Hw::cTexture::~cTexture();
  return;
}

// 00CDE530  cMsgCtrl::cMsgCtrl  size=91  [class]
int __fastcall cMsgCtrl::cMsgCtrl(int param_1)

{
  *(undefined ***)(param_1 + 0x38) = vftable;
  Hw::cTexture::cTexture();
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x65) = 0;
  *(undefined ***)(param_1 + 0x90) = vftable;
  Hw::cTexture::cTexture();
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xbd) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  return param_1;
}

// 00CE02B0  cMsgCtrl::cMsgCtrl  size=37  [class]
int __fastcall cMsgCtrl::cMsgCtrl(int param_1)

{
  *(undefined ***)(param_1 + 0x2c) = vftable;
  Hw::cTexture::cTexture();
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x59) = 0;
  return param_1;
}

// 00CE02E0  cMsgCtrl::~cMsgCtrl  size=44  [class]
void __fastcall cMsgCtrl::~cMsgCtrl(int param_1)

{
  *(undefined ***)(param_1 + 0x2c) = vftable;
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x59) = 0;
  Hw::cTexture::~cTexture();
  return;
}

// 00CE1450  cMsgCtrl::~cMsgCtrl  size=103  [class]
void __fastcall cMsgCtrl::~cMsgCtrl(int param_1)

{
  *(undefined ***)(param_1 + 0x90) = vftable;
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xbd) = 0;
  Hw::cTexture::~cTexture();
  *(undefined ***)(param_1 + 0x38) = vftable;
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x65) = 0;
  Hw::cTexture::~cTexture();
  return;
}

// 00CE4410  cMsgCtrl::vf00  size=64  [class]
undefined4 * __thiscall cMsgCtrl::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00f972f0();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  *(undefined2 *)((int)param_1 + 0x2d) = 0;
  Hw::cTexture::~cTexture();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CF71E0  cMsgCtrl::cMsgCtrl  size=186  [class]
undefined4 * __fastcall cMsgCtrl::cMsgCtrl(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = cUIDataManager::vftable;
  iVar2 = 0xd;
  puVar1 = param_1 + 0xf;
  do {
    puVar1[-1] = vftable;
    Hw::cTexture::cTexture();
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[9] = 0;
    *(undefined2 *)((int)puVar1 + 0x29) = 0;
    puVar1 = puVar1 + 0x1d;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  FUN_00de3530();
  Hw::cHeapPhysical::cHeapPhysical();
  puVar1 = param_1 + 4;
  iVar2 = 0xe;
  do {
    puVar1[-1] = 0xffffffff;
    *puVar1 = 0;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0x1b] = 0;
    puVar1 = puVar1 + 0x1d;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[2] = 0;
  param_1[0x19b] = 0;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x199] = 0xffffffff;
  param_1[0x19c] = 0xffffffff;
  return param_1;
}

// 00CF7450  cMsgCtrl::cMsgCtrl  size=294  [class]
undefined4 * __fastcall cMsgCtrl::cMsgCtrl(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = cCkMsgDataManager::vftable;
  iVar2 = 5;
  puVar1 = param_1 + 0x12;
  do {
    puVar1[-1] = vftable;
    Hw::cTexture::cTexture();
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[9] = 0;
    *(undefined2 *)((int)puVar1 + 0x29) = 0;
    puVar1[0x15] = vftable;
    Hw::cTexture::cTexture();
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x1f] = 0;
    *(undefined2 *)((int)puVar1 + 0x81) = 0;
    puVar1[0x25] = 0;
    puVar1 = puVar1 + 0x35;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  Hw::cHeapPhysical::cHeapPhysical();
  Hw::cHeapPhysical::cHeapPhysical();
  iVar2 = 0;
  puVar1 = param_1 + 4;
  do {
    puVar1[0x20] = iVar2;
    puVar1[-1] = 0xffffffff;
    *puVar1 = 0;
    puVar1[1] = 0xfff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xfff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x33] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x35;
  } while (iVar2 < 6);
  param_1[2] = 0;
  param_1[0x141] = 0xffffffff;
  param_1[0x142] = 0xfff;
  param_1[0x144] = 0xffffffff;
  param_1[0x380] = 0;
  _memset(param_1 + 899,0,0x80);
  _memset(param_1 + 0x3a3,0,0x80);
  param_1[0x3c3] = 0;
  param_1[0x3c4] = 0;
  return param_1;
}


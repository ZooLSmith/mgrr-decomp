// src/managers/cuidatamanager/cUIDataManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE0310..00CF72B0, 2 functions

#include "mgrr.h"
#include "cUIDataManager.h"

// 00CE0310  cUIDataManager::~cUIDataManager  size=84  [class]
void __fastcall cUIDataManager::~cUIDataManager(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = vftable;
  Hw::cHeap::cHeap_4();
  iVar1 = 0xd;
  puVar2 = param_1 + 0x1a6;
  do {
    puVar2[-0x1f] = cMsgCtrl::vftable;
    FUN_00f972f0();
    puVar2[-0x1e] = 0;
    puVar2[-0x1d] = 0;
    puVar2[-0x15] = 0;
    *(undefined2 *)((int)puVar2 + -0x4f) = 0;
    Hw::cTexture::~cTexture();
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + -0x1d;
  } while (-1 < iVar1);
  return;
}

// 00CF72B0  cUIDataManager::vf00  size=30  [class]
undefined4 __thiscall cUIDataManager::vf00(undefined4 param_1,byte param_2)

{
  ~cUIDataManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


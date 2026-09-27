// src/managers/cckmsgmanager/cCkMsgManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF8220..00D0DDB0, 3 functions

#include "types.h"

// 00CF8220  cCkMsgManager::cCkMsgManager  size=185  [class]
void __fastcall cCkMsgManager::cCkMsgManager(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  puVar1 = param_1 + 0x1f;
  puVar3 = param_1 + 0x11;
  param_1 = param_1 + 5;
  iVar2 = 2;
  do {
    puVar1[-0x1d] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = 1;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *puVar1 = 0xffffffff;
    puVar1[2] = 1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 6;
    puVar3 = puVar3 + 7;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00CF82E0  cCkMsgManager::~cCkMsgManager  size=119  [class]
void __fastcall cCkMsgManager::~cCkMsgManager(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[0x2c] != 0) {
    param_1[0x2e] = 0;
    if (param_1[0x2f] != 0) {
      FUN_00dd48d0(param_1[0x2c],0);
      param_1[0x2f] = 0;
    }
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
  }
  if (param_1[0x26] != 0) {
    param_1[0x28] = 0;
    if (param_1[0x29] != 0) {
      FUN_00dd48d0(param_1[0x26],0);
      param_1[0x29] = 0;
    }
    param_1[0x26] = 0;
    param_1[0x27] = 0;
  }
  return;
}

// 00D0DDB0  cCkMsgManager::vf00  size=30  [class]
undefined4 __thiscall cCkMsgManager::vf00(undefined4 param_1,byte param_2)

{
  ~cCkMsgManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


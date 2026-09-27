// src/managers/cgameuimanager/cGameUIManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF64C0..00CF6610, 3 functions

#include "types.h"

// 00CF64C0  cGameUIManager::~cGameUIManager  size=117  [class]
void __fastcall cGameUIManager::~cGameUIManager(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[0x12] != 0) {
    param_1[0x14] = 0;
    if (param_1[0x15] != 0) {
      FUN_00dd48d0(param_1[0x12],0);
      param_1[0x15] = 0;
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if (param_1[0xd] != 0) {
    param_1[0xf] = 0;
    if (param_1[0x10] != 0) {
      FUN_00dd48d0(param_1[0xd],0);
      param_1[0x10] = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  if (param_1[8] != 0) {
    param_1[10] = 0;
    if (param_1[0xb] != 0) {
      FUN_00dd48d0(param_1[8],0);
      param_1[0xb] = 0;
    }
    param_1[8] = 0;
    param_1[9] = 0;
  }
  return;
}

// 00CF6540  cGameUIManager::vf00  size=30  [class]
undefined4 __thiscall cGameUIManager::vf00(undefined4 param_1,byte param_2)

{
  ~cGameUIManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CF6610  cGameUIManager::cGameUIManager  size=178  [class]
undefined4 * __fastcall cGameUIManager::cGameUIManager(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_00a7c930();
  param_1[0x18] = 0;
  param_1[0x26] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x19] = 0;
  param_1[0x2e] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x2f] = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return param_1;
}


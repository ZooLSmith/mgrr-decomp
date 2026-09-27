// src/unsorted/unit_00A4E7C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A4E7C0..00A4EA90, 4 functions

#include "mgrr.h"

// 00A4E7C0  FUN_00a4e7c0  size=42  [run]
void __fastcall FUN_00a4e7c0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00a4bd40();
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00A4E900  FUN_00a4e900  size=218  [run]
undefined4 __thiscall FUN_00a4e900(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x214);
  *puVar2 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x224) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
  if (7 < param_3) {
    param_3 = 8;
  }
  iVar1 = 0;
  if (0 < param_3) {
    do {
      *puVar2 = *(undefined4 *)(param_2 + iVar1 * 4);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < param_3);
  }
  cRoomReadManager::setCommonRoom();
  FUN_00a4cb40();
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x230);
  return 1;
}

// 00A4E9E0  FUN_00a4e9e0  size=168  [run]
void __thiscall FUN_00a4e9e0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 0x214);
  while( true ) {
    if (*piVar2 == param_2) {
      return;
    }
    if (*piVar2 == -1) break;
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
    if (7 < uVar1) {
      return;
    }
  }
  *(int *)(param_1 + 0x214 + uVar1 * 4) = param_2;
  FUN_00a4cb40();
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x218);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x230);
  return;
}

// 00A4EA90  FUN_00a4ea90  size=154  [run]
void __thiscall FUN_00a4ea90(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 0x214);
  do {
    if (*piVar2 == param_2) {
      *(undefined4 *)(param_1 + 0x214 + uVar1 * 4) = 0xffffffff;
      FUN_00a4cb40();
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x214);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x218);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x21c);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x220);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x224);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x228);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x22c);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x230);
      return;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar1 < 8);
  return;
}


// src/unsorted/unit_00CA5CF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CA5CF0..00CA5CF0, 1 functions

#include "types.h"

// 00CA5CF0  FUN_00ca5cf0  size=585  [run]
undefined4 * __fastcall FUN_00ca5cf0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_8;
  int local_4;
  
  iVar1 = 0xf;
  do {
    FUN_00ca3490();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  puVar2 = param_1 + 0x1990;
  local_8 = (undefined4 *)0xf;
  do {
    puVar2[3] = 0;
    FUN_00a7c930();
    *(undefined2 *)puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0xffffffff;
    puVar2[8] = 0xffffffff;
    FUN_00a7c950();
    if (puVar2[3] != 0) {
      FUN_00dd4940(puVar2[3]);
      puVar2[3] = 0;
    }
    puVar2 = puVar2 + 9;
    local_8 = (undefined4 *)((int)local_8 + -1);
  } while (-1 < (int)local_8);
  param_1[0x1a20] = 0xffffffff;
  param_1[0x1a21] = 0xffffffff;
  param_1[0x1a22] = 0xffffffff;
  param_1[0x1a23] = 0xffffffff;
  param_1[0x1a24] = 0xffffffff;
  param_1[0x1a25] = 0xffffffff;
  param_1[0x1a26] = 0xffffffff;
  param_1[0x1a27] = 0xffffffff;
  param_1[0x1a28] = 0xffffffff;
  param_1[0x1a29] = 0xffffffff;
  param_1[0x1a2a] = 0xffffffff;
  param_1[0x1a2b] = 0xffffffff;
  param_1[0x1a2c] = 0xffffffff;
  local_8 = param_1 + 0x1a30;
  param_1[0x1a2d] = 0xffffffff;
  param_1[0x1a2e] = 0xffffffff;
  param_1[0x1a2f] = 0xffffffff;
  local_4 = 0xb;
  puVar2 = param_1 + 0x1a35;
  do {
    FUN_00a7c930();
    *(undefined1 *)local_8 = 0;
    puVar2[-3] = 0;
    puVar2[-4] = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0xffffffff;
    puVar2[10] = 0xffffffff;
    FUN_00a7c950();
    local_8 = local_8 + 0x11;
    puVar2 = puVar2 + 0x11;
    local_4 = local_4 + -1;
  } while (-1 < local_4);
  local_8 = param_1 + 0x1afc;
  local_4 = 0xf;
  puVar2 = param_1 + 0x1b03;
  do {
    FUN_00a7c930();
    *local_8 = 0;
    puVar2[-5] = 0xffffffff;
    puVar2[-4] = 0xffffffff;
    puVar2[-3] = 0;
    puVar2[-6] = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    FUN_00a7c950();
    local_8 = local_8 + 0x15;
    puVar2[0xc] = 0xffffffff;
    puVar2[0xd] = 0xffffffff;
    puVar2 = puVar2 + 0x15;
    local_4 = local_4 + -1;
  } while (-1 < local_4);
  param_1[0x1c4c] = 0xffffffff;
  param_1[0x1c4e] = 0xffffffff;
  param_1[0x1c4d] = 0;
  param_1[0x1c4f] = 0;
  param_1[0x1c50] = 0;
  param_1[0x1c51] = 0;
  param_1[0x1c52] = 0;
  param_1[0x1c53] = 0;
  param_1[0x1c54] = 0;
  param_1[0x1c55] = 0;
  param_1[0x1c56] = 0;
  param_1[0x1c57] = 0;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  iVar1 = 0x10;
  do {
    FUN_00c9fa30();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[3] = 0;
  param_1[0x1c5a] = 0;
  param_1[0x1c5b] = 0;
  return param_1;
}


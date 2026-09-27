// src/unsorted/unit_00A4CB40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A4CB40..00A4CDF0, 5 functions

#include "mgrr.h"

// 00A4CB40  FUN_00a4cb40  size=476  [run]
void __fastcall FUN_00a4cb40(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint local_20 [8];
  
  puVar4 = (uint *)(param_1 + 0x214);
  puVar5 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x214) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x218) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x220) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x224) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x228) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
  uVar6 = 0;
  puVar4 = (uint *)(param_1 + 0x214);
  do {
    uVar1 = local_20[uVar6];
    if (((uVar1 != 0xffffffff) && (0xff < (int)uVar1)) &&
       (((uVar3 = uVar1 & 0xff, (char)uVar1 == '\0' ||
         (((uVar3 == 0x20 || (uVar3 == 0x40)) || (uVar3 == 0x60)))) ||
        (((uVar3 == 0x80 || (uVar3 == 0xa0)) || (uVar3 == 0xc0)))))) {
      *puVar4 = uVar1;
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
      local_20[uVar6] = 0xffffffff;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  if (0x500 < (int)local_20[0]) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[0];
    iVar2 = iVar2 + 1;
    local_20[0] = 0xffffffff;
  }
  if (0x500 < (int)local_20[1]) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[1];
    iVar2 = iVar2 + 1;
    local_20[1] = -1;
  }
  if (0x500 < (int)local_20[2]) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[2];
    iVar2 = iVar2 + 1;
    local_20[2] = -1;
  }
  if (0x500 < (int)local_20[3]) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[3];
    iVar2 = iVar2 + 1;
    local_20[3] = -1;
  }
  if (0x500 < (int)local_20[4]) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[4];
    iVar2 = iVar2 + 1;
    local_20[4] = -1;
  }
  if (0x500 < (int)local_20[5]) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[5];
    iVar2 = iVar2 + 1;
    local_20[5] = -1;
  }
  if (0x500 < (int)local_20[6]) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[6];
    iVar2 = iVar2 + 1;
    local_20[6] = -1;
  }
  if (0x500 < (int)local_20[7]) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[7];
    iVar2 = iVar2 + 1;
    local_20[7] = -1;
  }
  if (local_20[0] != 0xffffffff) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[0];
    iVar2 = iVar2 + 1;
  }
  if (local_20[1] != -1) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[1];
    iVar2 = iVar2 + 1;
  }
  if (local_20[2] != -1) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[2];
    iVar2 = iVar2 + 1;
  }
  if (local_20[3] != -1) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[3];
    iVar2 = iVar2 + 1;
  }
  if (local_20[4] != -1) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[4];
    iVar2 = iVar2 + 1;
  }
  if (local_20[5] != -1) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[5];
    iVar2 = iVar2 + 1;
  }
  if (local_20[6] != -1) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[6];
    iVar2 = iVar2 + 1;
  }
  if (local_20[7] != -1) {
    *(uint *)(param_1 + 0x214 + iVar2 * 4) = local_20[7];
  }
  return;
}

// 00A4CD30  FUN_00a4cd30  size=96  [run]
undefined4 * __fastcall FUN_00a4cd30(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 10;
  do {
    Hw::cTexture::cTexture();
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  param_1[2] = 0;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  *param_1 = 0xffffffff;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 2;
  puVar1 = param_1 + 0xb;
  iVar2 = 0xb;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 9;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}

// 00A4CD90  FUN_00a4cd90  size=36  [run]
void FUN_00a4cd90(void)

{
  int iVar1;
  
  FUN_00a499a0();
  iVar1 = 10;
  do {
    Hw::cTexture::~cTexture();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}

// 00A4CDC0  FUN_00a4cdc0  size=47  [run]
undefined4 __fastcall FUN_00a4cdc0(undefined4 param_1)

{
  FUN_00de3530();
  FUN_00de3530();
  FUN_00de3530();
  FUN_00de3530();
  FUN_00dd6df0();
  return param_1;
}

// 00A4CDF0  FUN_00a4cdf0  size=58  [run]
undefined4 __thiscall FUN_00a4cdf0(undefined4 param_1,byte param_2)

{
  int iVar1;
  
  FUN_00a499a0();
  iVar1 = 10;
  do {
    Hw::cTexture::~cTexture();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


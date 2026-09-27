// src/unsorted/unit_00A363C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A363C0..00A36510, 2 functions

#include "types.h"

// 00A363C0  FUN_00a363c0  size=334  [run]
void __fastcall FUN_00a363c0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  FUN_00dd7240();
  FUN_00a2d8e0();
  FUN_00a2d740(0x10);
  *(undefined4 *)(param_1 + 0x5a194) = 0;
  FUN_00a2db30();
  FUN_00a35200();
  *(undefined4 *)(param_1 + 0x5a198) = 0;
  *(undefined4 *)(param_1 + 0x5a19c) = 0;
  iVar6 = 2;
  puVar1 = (undefined4 *)(param_1 + 0x5c028);
  puVar3 = (undefined4 *)(param_1 + 0x5c088);
  puVar5 = (undefined4 *)(param_1 + 0x5c048);
  do {
    puVar1[-2] = 0x3f800000;
    puVar1[-1] = 0x3f800000;
    iVar6 = iVar6 + -1;
    *puVar1 = 0x3f800000;
    puVar1[1] = 0x3f800000;
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar1[0xe] = 0x3f800000;
    puVar1[0xf] = 0x3f800000;
    puVar1[0x10] = 0x3f800000;
    puVar1[0x11] = 0x3f800000;
    puVar3[-2] = 0x3f800000;
    *puVar3 = 0x3f800000;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar3[0xc] = 0;
    puVar3[10] = 0;
    puVar1[0x26] = 0x3f800000;
    puVar1[0x27] = 0x3f800000;
    puVar1[0x28] = 0x3f800000;
    puVar1[0x29] = 0x3f800000;
    puVar1 = puVar1 + 4;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 3;
  } while (iVar6 != 0);
  FUN_00a2d8e0();
  puVar4 = (undefined1 *)(param_1 + 0x2e144);
  uVar2 = 0;
  *(float *)(param_1 + 0x5a0e0) = *(float *)(param_1 + 0x5a0e0) - 0.01;
  *(float *)(param_1 + 0x5a0e4) = *(float *)(param_1 + 0x5a0e4) - 0.01;
  *(float *)(param_1 + 0x5a0e8) = *(float *)(param_1 + 0x5a0e8) - 0.01;
  *(float *)(param_1 + 0x5a0ec) = *(float *)(param_1 + 0x5a0ec) - 0.01;
  *(undefined1 *)(param_1 + 0x5a190) = 0;
  *(undefined4 *)(param_1 + 0x5bfa0) = 0xbf800000;
  do {
    puVar4[-0x2c000] = (char)uVar2;
    *puVar4 = (char)uVar2;
    uVar2 = uVar2 + 1;
    puVar4 = puVar4 + 0xb0;
  } while (uVar2 < 0x400);
  return;
}

// 00A36510  FUN_00a36510  size=117  [run]
int __fastcall FUN_00a36510(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  uVar1 = 0;
  pbVar2 = (byte *)(param_1 + 0x2158);
  do {
    if ((*pbVar2 & 1) == 0) {
      iVar3 = uVar1 * 0xb0 + 0x20e0 + param_1;
      FUN_00a2d8e0();
      *(uint *)(iVar3 + 0x78) = *(uint *)(iVar3 + 0x78) | 1;
      break;
    }
    uVar1 = uVar1 + 1;
    pbVar2 = pbVar2 + 0xb0;
  } while (uVar1 < 0x400);
  if (*(int *)(param_1 + 0x5bfc0) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5bfa8));
  }
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_01660ea0);
  }
  return iVar3;
}


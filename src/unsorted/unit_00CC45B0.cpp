// src/unsorted/unit_00CC45B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC45B0..00CC47B0, 4 functions

#include "types.h"

// 00CC45B0  FUN_00cc45b0  size=33  [run]
void __fastcall FUN_00cc45b0(int *param_1)

{
  param_1[1] = 0;
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
    *param_1 = 0;
  }
  return;
}

// 00CC4630  FUN_00cc4630  size=144  [run]
void FUN_00cc4630(undefined4 param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  *param_2 = iVar1 / 0xe10;
  if (999 < iVar1 / 0xe10) {
    *param_2 = 999;
  }
  *param_3 = (iVar1 % 0xe10) / 0x3c;
  *param_4 = (iVar1 % 0xe10) % 0x3c;
  iVar1 = FUN_00fdbc60();
  *param_5 = iVar1;
  if (999 < iVar1) {
    *param_5 = 0;
  }
  return;
}

// 00CC46C0  FUN_00cc46c0  size=161  [run]
undefined4 * __thiscall FUN_00cc46c0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x214) != -1) {
    return (undefined4 *)(&DAT_01b6f3e0 + *(int *)(param_1 + 0x214) * 0xc0 + param_2 * 0x3c0);
  }
  if (param_2 < 8) {
    if (DAT_01b75f54 != 0) {
      return &DAT_01b759c0 + param_2 * 0x30;
    }
    iVar2 = 7;
  }
  else {
    iVar2 = param_2;
    if ((&DAT_01b75a14)[param_2 * 0x30] != 0) {
      return &DAT_01b759c0 + param_2 * 0x30;
    }
  }
  uVar1 = FUN_009c4bf0();
  if ((uVar1 == 0xffffffff) || ((&DAT_01b75a14)[iVar2 * 0x30] == 0)) {
    uVar1 = (uint)DAT_01b7638b;
  }
  return (undefined4 *)(&DAT_01b6f3e0 + (uVar1 * 3 + param_2 * 0xf) * 0x40);
}

// 00CC47B0  FUN_00cc47b0  size=325  [run]
void __fastcall FUN_00cc47b0(int param_1)

{
  if (3599999.0 < *(float *)(param_1 + 0x1b4)) {
    *(undefined4 *)(param_1 + 0x1b4) = 0x4a5bb9fc;
  }
  if (9999999 < *(int *)(param_1 + 0x1b8)) {
    *(undefined **)(param_1 + 0x1b8) = &DAT_0098967f;
  }
  if (999999 < *(int *)(param_1 + 0x1bc)) {
    *(undefined4 *)(param_1 + 0x1bc) = 999999;
  }
  if (9999 < *(int *)(param_1 + 0x1c0)) {
    *(undefined4 *)(param_1 + 0x1c0) = 9999;
  }
  if (999999 < *(int *)(param_1 + 0x1c4)) {
    *(undefined4 *)(param_1 + 0x1c4) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x1c8)) {
    *(undefined4 *)(param_1 + 0x1c8) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x1cc)) {
    *(undefined4 *)(param_1 + 0x1cc) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x1d0)) {
    *(undefined4 *)(param_1 + 0x1d0) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x1d4)) {
    *(undefined4 *)(param_1 + 0x1d4) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x1d8)) {
    *(undefined4 *)(param_1 + 0x1d8) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x1dc)) {
    *(undefined4 *)(param_1 + 0x1dc) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x1e0)) {
    *(undefined4 *)(param_1 + 0x1e0) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x1e4)) {
    *(undefined4 *)(param_1 + 0x1e4) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x1e8)) {
    *(undefined4 *)(param_1 + 0x1e8) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x1ec)) {
    *(undefined4 *)(param_1 + 0x1ec) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x1f0)) {
    *(undefined4 *)(param_1 + 0x1f0) = 999999;
  }
  if (999999 < *(int *)(param_1 + 500)) {
    *(undefined4 *)(param_1 + 500) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x1fc)) {
    *(undefined4 *)(param_1 + 0x1fc) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x200)) {
    *(undefined4 *)(param_1 + 0x200) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x204)) {
    *(undefined4 *)(param_1 + 0x204) = 999999;
  }
  if (999999 < *(int *)(param_1 + 0x208)) {
    *(undefined4 *)(param_1 + 0x208) = 999999;
  }
  return;
}


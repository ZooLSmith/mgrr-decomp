// src/unsorted/unit_00FB29C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FB29C0..00FB2A70, 4 functions

#include "mgrr.h"

// 00FB29C0  FUN_00fb29c0  size=29  [run]
undefined4 __fastcall FUN_00fb29c0(undefined4 param_1)

{
  Hw::cTexture::cTexture();
  Hw::cTexture::cTexture();
  return param_1;
}

// 00FB2A00  FUN_00fb2a00  size=45  [run]
void FUN_00fb2a00(void)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = DAT_01f21bf8;
  while (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))();
    uVar2 = uVar2 + 1;
    piVar1 = (&DAT_01f21bf8)[(uVar2 & 0xffff) * 0x30];
  }
  return;
}

// 00FB2A30  FUN_00fb2a30  size=58  [run]
undefined * FUN_00fb2a30(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (param_1 == *(int *)((int)&DAT_01f21bf8 + uVar1)) {
      return &DAT_01f21bfc + iVar2 * 0xc0;
    }
    uVar1 = uVar1 + 0xc0;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x46500);
  return (undefined *)0x0;
}

// 00FB2A70  FUN_00fb2a70  size=164  [run]
undefined4 __thiscall FUN_00fb2a70(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = 0xfffefefe;
  if (0x5db < *(int *)(param_1 + 0xf80)) {
    *(undefined4 *)(param_1 + 0xf80) = 0x5db;
  }
  if (*(int *)(param_1 + 0xf80) < 0) {
    *(undefined4 *)(param_1 + 0xf80) = 0xffffffff;
  }
  if (param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0xf80);
    if (iVar3 == -1) {
      iVar3 = 0;
      piVar2 = &DAT_01f21bf8;
      while (*piVar2 != param_2) {
        piVar2 = piVar2 + 0x30;
        iVar3 = iVar3 + 1;
        if (0x1f680f7 < (int)piVar2) {
          return uVar1;
        }
      }
    }
    else if ((&DAT_01f21bf8)[iVar3 * 0x30] != param_2) {
      return 0xfffefefe;
    }
    iVar3 = *(int *)(iVar3 * 0xc0 + 0x1f21cb4);
    if (0x1d < iVar3) {
      if (iVar3 < 0x3c) {
        return 0xff00ff00;
      }
      if (iVar3 < 0x5a) {
        uVar1 = 0xffffff00;
      }
    }
  }
  return uVar1;
}


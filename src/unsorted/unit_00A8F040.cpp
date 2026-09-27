// src/unsorted/unit_00A8F040.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8F040..00A8F520, 13 functions

#include "types.h"

// 00A8F040  FUN_00a8f040  size=139  [run]
undefined4 __thiscall FUN_00a8f040(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_2 + 0x88);
  uVar2 = 0;
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x8b8);
  do {
    if (iVar1 == *piVar4) {
      uVar2 = 1;
      break;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar3 < 8);
  *(undefined4 *)(param_1 + 0x8d4) = *(undefined4 *)(param_1 + 0x8d0);
  *(undefined4 *)(param_1 + 0x8d0) = *(undefined4 *)(param_1 + 0x8cc);
  *(undefined4 *)(param_1 + 0x8cc) = *(undefined4 *)(param_1 + 0x8c8);
  *(undefined4 *)(param_1 + 0x8c8) = *(undefined4 *)(param_1 + 0x8c4);
  *(undefined4 *)(param_1 + 0x8c4) = *(undefined4 *)(param_1 + 0x8c0);
  *(undefined4 *)(param_1 + 0x8c0) = *(undefined4 *)(param_1 + 0x8bc);
  *(undefined4 *)(param_1 + 0x8bc) = *(undefined4 *)(param_1 + 0x8b8);
  *(int *)(param_1 + 0x8b8) = iVar1;
  return uVar2;
}

// 00A8F0E0  FUN_00a8f0e0  size=159  [run]
int __fastcall FUN_00a8f0e0(int param_1)

{
  FUN_00a7c930();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  return param_1;
}

// 00A8F190  FUN_00a8f190  size=15  [run]
undefined4 __fastcall FUN_00a8f190(undefined4 param_1)

{
  FUN_00a8f0e0();
  return param_1;
}

// 00A8F1A0  FUN_00a8f1a0  size=62  [run]
undefined1 * __fastcall FUN_00a8f1a0(undefined1 *param_1)

{
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00904d60();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *param_1 = 0;
  return param_1;
}

// 00A8F1E0  FUN_00a8f1e0  size=59  [run]
void __fastcall FUN_00a8f1e0(int param_1)

{
  int iVar1;
  
  FUN_00485560();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
  }
  RayCastManager::getWork(param_1 + 100);
  FUN_00905ce0();
  return;
}

// 00A8F230  FUN_00a8f230  size=76  [run]
void __fastcall FUN_00a8f230(undefined2 *param_1)

{
  *param_1 = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x1b4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1b2) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1be) = 0;
  *(undefined4 *)(param_1 + 0x22a) = 0;
  RayCastManager::getWork(param_1 + 0x228);
  return;
}

// 00A8F2D0  FUN_00a8f2d0  size=62  [run]
undefined1 * __fastcall FUN_00a8f2d0(undefined1 *param_1)

{
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00904d60();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *param_1 = 0;
  return param_1;
}

// 00A8F310  FUN_00a8f310  size=59  [run]
void __fastcall FUN_00a8f310(int param_1)

{
  int iVar1;
  
  FUN_006c1cb0();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
  }
  RayCastManager::getWork(param_1 + 100);
  FUN_00905ce0();
  return;
}

// 00A8F350  FUN_00a8f350  size=62  [run]
undefined1 * __fastcall FUN_00a8f350(undefined1 *param_1)

{
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00904d60();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *param_1 = 0;
  return param_1;
}

// 00A8F390  FUN_00a8f390  size=59  [run]
void __fastcall FUN_00a8f390(int param_1)

{
  int iVar1;
  
  FUN_007b7800();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
  }
  RayCastManager::getWork(param_1 + 100);
  FUN_00905ce0();
  return;
}

// 00A8F420  FUN_00a8f420  size=99  [run]
uint * FUN_00a8f420(uint param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  
  piVar1 = &DAT_018a4f30;
  uVar3 = 0;
  while (((int)param_1 < *piVar1 || (piVar1[1] < (int)param_1))) {
    uVar3 = uVar3 + 0x18;
    piVar1 = piVar1 + 6;
    if (0x2f < uVar3) {
      puVar2 = &DAT_018a1d70;
      uVar3 = 0;
      do {
        if (*puVar2 == param_1) {
          return puVar2;
        }
        uVar3 = uVar3 + 0x10;
        puVar2 = puVar2 + 4;
      } while (uVar3 < 0x3170);
      puVar2 = &DAT_018a4ee0;
      uVar3 = 0;
      do {
        if (*puVar2 == (param_1 & 0xf0000)) {
          return puVar2;
        }
        uVar3 = uVar3 + 0x10;
        puVar2 = puVar2 + 4;
      } while (uVar3 < 0x40);
      return (uint *)&DAT_018a4f20;
    }
  }
  return (uint *)(piVar1 + 2);
}

// 00A8F490  FUN_00a8f490  size=138  [run]
bool __thiscall FUN_00a8f490(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 == param_3) {
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x48 + param_2 * 8);
    iVar3 = *(int *)(param_1 + 0x4c + param_2 * 8);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0xc) = 0;
      return *(int *)(param_1 + 0xd8) != 0;
    }
  }
  else {
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (param_2 <= param_3) {
      piVar2 = (int *)(param_1 + 0x48 + param_2 * 8);
      iVar1 = (param_3 - param_2) + 1;
      do {
        if (*piVar2 != 0) {
          if (*(int *)(param_1 + 0xd8) == 0) {
            *(int *)(param_1 + 0xd8) = *piVar2;
          }
          if (iVar3 != 0) {
            *(int *)(iVar3 + 0xc) = *piVar2;
          }
          iVar3 = piVar2[1];
          if (iVar3 != 0) {
            *(undefined4 *)(iVar3 + 0xc) = 0;
          }
        }
        piVar2 = piVar2 + 2;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return *(int *)(param_1 + 0xd8) != 0;
}

// 00A8F520  FUN_00a8f520  size=97  [run]
undefined4 __fastcall FUN_00a8f520(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0xd8);
  piVar1 = (int *)(param_1 + 0xd8);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    LOCK();
    puVar2 = (undefined4 *)*piVar1;
    if (puVar3 == puVar2) {
      *piVar1 = puVar3[3];
    }
    UNLOCK();
    if (puVar3 == puVar2) break;
    puVar3 = (undefined4 *)*piVar1;
  }
  return *puVar3;
}


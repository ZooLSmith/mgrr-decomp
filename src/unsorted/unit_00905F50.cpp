// src/unsorted/unit_00905F50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00905F50..00906320, 8 functions

#include "mgrr.h"

// 00905F50  FUN_00905f50  size=41  [run]
void __thiscall FUN_00905f50(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00905F80  FUN_00905f80  size=84  [run]
undefined4 FUN_00905f80(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_1 == *(int **)(iVar1 + 0x10)) {
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 4) != 3) {
          FUN_00dd5650(&DAT_0164c150);
          return 0;
        }
        if (*(char *)(iVar1 + 0x16) != '\0') {
          *param_2 = iVar1 + 0x30;
          return 1;
        }
      }
    }
    else {
      FUN_00dd5650(&DAT_0164c08c);
    }
  }
  return 0;
}

// 009060A0  FUN_009060a0  size=164  [run]
void FUN_009060a0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  
  pvVar4 = ThreadLocalStoragePointer;
  iVar3 = _tls_index;
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    if ((*(int *)(iVar2 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd72c0();
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  hkpBroadPhaseCastCollector::hkpBroadPhaseCastCollector(param_1,param_2);
  if ((DAT_01885d68 != 1) && (iVar3 = *(int *)((int)pvVar4 + iVar3 * 4), *(int *)(iVar3 + 4) == 0))
  {
    piVar1 = (int *)(iVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
      return;
    }
  }
  return;
}

// 00906150  FUN_00906150  size=164  [run]
void FUN_00906150(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  
  pvVar4 = ThreadLocalStoragePointer;
  iVar3 = _tls_index;
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    if ((*(int *)(iVar2 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd72c0();
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  hkpBroadPhaseCastCollector::hkpBroadPhaseCastCollector_2(param_1,param_2);
  if ((DAT_01885d68 != 1) && (iVar3 = *(int *)((int)pvVar4 + iVar3 * 4), *(int *)(iVar3 + 4) == 0))
  {
    piVar1 = (int *)(iVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
      return;
    }
  }
  return;
}

// 00906200  FUN_00906200  size=164  [run]
void FUN_00906200(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  
  pvVar4 = ThreadLocalStoragePointer;
  iVar3 = _tls_index;
  if ((DAT_01885d68 != 1) &&
     (iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar2 + 4) == 0))
  {
    if ((*(int *)(iVar2 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd72c0();
    }
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  hkpBroadPhaseCastCollector::hkpBroadPhaseCastCollector_2(param_1,param_2);
  if ((DAT_01885d68 != 1) && (iVar3 = *(int *)((int)pvVar4 + iVar3 * 4), *(int *)(iVar3 + 4) == 0))
  {
    piVar1 = (int *)(iVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
      return;
    }
  }
  return;
}

// 009062B0  FUN_009062b0  size=27  [run]
void FUN_009062b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  LthkpWorld::getClosestPoints(param_1,param_2,param_3);
  return;
}

// 009062F0  FUN_009062f0  size=32  [run]
void FUN_009062f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  hkpBroadPhaseCastCollector::hkpBroadPhaseCastCollector_3(param_1,param_2,param_3,param_4);
  return;
}

// 00906320  FUN_00906320  size=43  [run]
void __fastcall FUN_00906320(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


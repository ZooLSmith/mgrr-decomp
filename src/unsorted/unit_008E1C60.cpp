// src/unsorted/unit_008E1C60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E1C60..008E1E10, 7 functions

#include "types.h"

// 008E1C60  FUN_008e1c60  size=8  [run]
void __fastcall FUN_008e1c60(int param_1)

{
  *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 4;
  return;
}

// 008E1C70  FUN_008e1c70  size=74  [run]
void __fastcall FUN_008e1c70(int param_1)

{
  int iVar1;
  
  RayCastManager::getWork(param_1 + 0x160);
  *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 2;
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 != iVar1 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e1c70();
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  return;
}

// 008E1CC0  FUN_008e1cc0  size=50  [run]
void __fastcall FUN_008e1cc0(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xfffffffd;
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 != iVar1 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e1cc0();
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  return;
}

// 008E1D00  FUN_008e1d00  size=40  [run]
void __thiscall FUN_008e1d00(int *param_1,float param_2)

{
  float10 fVar1;
  
  if ((*(byte *)(param_1 + 0x5b) & 4) == 0) {
    fVar1 = (float10)fcos((float10)param_2);
    *(float *)(*param_1 + 0xb0) = (float)fVar1;
    return;
  }
  FUN_00dd5650(&DAT_0164b05c);
  return;
}

// 008E1D30  FUN_008e1d30  size=32  [run]
undefined4 __fastcall FUN_008e1d30(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
    iVar1 = FUN_012696c0();
    return *(undefined4 *)(iVar1 + 0x10);
  }
  iVar1 = FUN_0126f3e0();
  return *(undefined4 *)(iVar1 + 0x10);
}

// 008E1D50  FUN_008e1d50  size=177  [run]
undefined4 __fastcall FUN_008e1d50(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  
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
  if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
    uVar5 = FUN_01269650();
  }
  else {
    uVar5 = FUN_0126f430();
  }
  if ((DAT_01885d68 != 1) && (iVar3 = *(int *)((int)pvVar4 + iVar3 * 4), *(int *)(iVar3 + 4) == 0))
  {
    piVar1 = (int *)(iVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  return uVar5;
}

// 008E1E10  FUN_008e1e10  size=119  [run]
void __thiscall FUN_008e1e10(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  FUN_004066f0();
  if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
    FUN_01269660(param_2);
  }
  else {
    FUN_0126f3e0(param_2);
    FUN_011a00e0(param_2);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}


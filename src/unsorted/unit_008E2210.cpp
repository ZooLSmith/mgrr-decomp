// src/unsorted/unit_008E2210.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E2210..008E27C0, 12 functions

#include "mgrr.h"

// 008E2210  FUN_008e2210  size=139  [run]
void FUN_008e2210(undefined4 param_1)

{
  int *piVar1;
  
  FUN_004066f0();
  piVar1 = (int *)FUN_012696c0();
  FUN_01006000();
  FUN_01193b40(piVar1);
  (**(code **)(*piVar1 + 0xc))(param_1);
  FUN_01194450(piVar1);
  FUN_010060a0();
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E22A0  FUN_008e22a0  size=115  [run]
uint FUN_008e22a0(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_004066f0();
  iVar3 = FUN_012696c0();
  if ((iVar3 == 0) || (uVar2 = *(uint *)(iVar3 + 0xc), uVar2 == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = *(uint *)((-(uint)(uVar2 != 0) & uVar2) + 0x10) & param_1;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return param_1;
}

// 008E2320  FUN_008e2320  size=115  [run]
uint FUN_008e2320(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_004066f0();
  iVar3 = FUN_012696c0();
  if ((iVar3 == 0) || (uVar2 = *(uint *)(iVar3 + 0xc), uVar2 == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = *(uint *)((-(uint)(uVar2 != 0) & uVar2) + 0x14) & param_1;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return param_1;
}

// 008E23A0  FUN_008e23a0  size=115  [run]
uint FUN_008e23a0(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_004066f0();
  iVar3 = FUN_012696c0();
  if ((iVar3 == 0) || (uVar2 = *(uint *)(iVar3 + 0xc), uVar2 == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = *(uint *)((-(uint)(uVar2 != 0) & uVar2) + 8) & param_1;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return param_1;
}

// 008E2420  FUN_008e2420  size=115  [run]
uint FUN_008e2420(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_004066f0();
  iVar3 = FUN_012696c0();
  if ((iVar3 == 0) || (uVar2 = *(uint *)(iVar3 + 0xc), uVar2 == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = *(uint *)((-(uint)(uVar2 != 0) & uVar2) + 0x30) & param_1;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return param_1;
}

// 008E24A0  FUN_008e24a0  size=115  [run]
uint FUN_008e24a0(uint param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  FUN_004066f0();
  iVar3 = FUN_012696c0();
  if ((iVar3 == 0) || (uVar2 = *(uint *)(iVar3 + 0xc), uVar2 == 0)) {
    param_1 = 0;
  }
  else {
    param_1 = *(uint *)((-(uint)(uVar2 != 0) & uVar2) + 0xc) & param_1;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return param_1;
}

// 008E2520  FUN_008e2520  size=218  [run]
void __thiscall FUN_008e2520(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_004066f0();
  if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
    iVar2 = FUN_012696c0();
    *(undefined4 *)(iVar2 + 0x2c) = param_2;
    FUN_012696c0();
    uVar4 = 1;
    uVar3 = FUN_012696c0(1);
    FUN_01194c70(uVar3,uVar4);
  }
  else {
    iVar2 = FUN_0126f3e0();
    *(undefined4 *)(iVar2 + 0x2c) = param_2;
    FUN_0126f3e0();
    uVar5 = 1;
    uVar4 = 0;
    uVar3 = FUN_0126f3e0(0,1);
    FUN_01194ef0(uVar3,uVar4,uVar5);
  }
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 != iVar2 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e2520(param_2);
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
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

// 008E2620  FUN_008e2620  size=178  [run]
undefined4 __fastcall FUN_008e2620(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  pvVar4 = ThreadLocalStoragePointer;
  iVar3 = _tls_index;
  if ((DAT_01885d68 != 1) &&
     (iVar5 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar5 + 4) == 0))
  {
    if ((*(int *)(iVar5 + 8) == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd72c0();
    }
    *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
  }
  if ((*(byte *)(param_1 + 0x16c) & 4) == 0) {
    iVar5 = FUN_012696c0();
  }
  else {
    iVar5 = FUN_0126f3e0();
  }
  uVar2 = *(undefined4 *)(iVar5 + 0x2c);
  if ((DAT_01885d68 != 1) && (iVar3 = *(int *)((int)pvVar4 + iVar3 * 4), *(int *)(iVar3 + 4) == 0))
  {
    piVar1 = (int *)(iVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
      FUN_00dd7300();
    }
  }
  return uVar2;
}

// 008E26E0  FUN_008e26e0  size=83  [run]
void __thiscall FUN_008e26e0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x100) = param_2;
  uVar1 = FUN_008e2620();
  FUN_008e2520(uVar1 & 0xffff | param_2 << 0x10);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 != iVar2 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e26e0(param_2);
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  return;
}

// 008E2740  FUN_008e2740  size=19  [run]
bool __fastcall FUN_008e2740(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(byte *)(param_1 + 0x16c) & 8) != 0) {
    bVar1 = *(int *)(param_1 + 0x10) == 2;
  }
  return bVar1;
}

// 008E2760  FUN_008e2760  size=17  [run]
void __fastcall FUN_008e2760(int param_1)

{
  if ((*(byte *)(param_1 + 0x16c) & 8) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  return;
}

// 008E27C0  FUN_008e27c0  size=109  [run]
void __fastcall FUN_008e27c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x128) != 0) {
    (**(code **)(**(int **)(param_1 + 0x128) + 8))();
  }
  if (*(int *)(param_1 + 300) != 0) {
    (**(code **)(**(int **)(param_1 + 300) + 8))();
  }
  if (*(int *)(param_1 + 0x130) != 0) {
    (**(code **)(**(int **)(param_1 + 0x130) + 8))();
  }
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 != iVar1 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e27c0();
      iVar1 = iVar1 + 4;
    } while (iVar1 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  return;
}


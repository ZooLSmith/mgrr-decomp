// src/unsorted/unit_008E4D70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E4D70..008E5C50, 13 functions

#include "types.h"

// 008E4D70  FUN_008e4d70  size=31  [run]
void __fastcall FUN_008e4d70(int param_1)

{
  if (*(int *)(param_1 + 0x164) != 0) {
    FUN_008e2210(*(int *)(param_1 + 0x164));
    *(undefined4 *)(param_1 + 0x164) = 0;
  }
  return;
}

// 008E4F60  FUN_008e4f60  size=117  [run]
undefined4 FUN_008e4f60(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_004066f0();
  iVar3 = FUN_012696c0();
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar3 + 0xc);
    if (uVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((-(uint)(uVar2 != 0) & uVar2) + 0x10);
    }
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return uVar4;
}

// 008E4FE0  FUN_008e4fe0  size=253  [run]
void __thiscall FUN_008e4fe0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_004066f0();
  iVar4 = FUN_012696c0();
  FUN_004066f0();
  iVar3 = _tls_index;
  if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_008e506f;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 8;
    puVar5[5] = puVar5[5] | param_2;
    if (DAT_01885d68 == 1) goto LAB_008e506f;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
  }
  piVar1 = (int *)(iVar6 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_008e506f:
  FUN_01194c70(iVar4,1);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 != iVar4 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e4fe0(param_2);
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E50E0  FUN_008e50e0  size=258  [run]
void __thiscall FUN_008e50e0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_004066f0();
  iVar4 = FUN_012696c0();
  FUN_004066f0();
  iVar3 = _tls_index;
  if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_008e5173;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 8;
    puVar5[5] = puVar5[5] & ~param_2;
    if (DAT_01885d68 == 1) goto LAB_008e5173;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
  }
  piVar1 = (int *)(iVar6 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_008e5173:
  FUN_01194c70(iVar4,1);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 != iVar4 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e50e0(param_2);
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E5270  FUN_008e5270  size=253  [run]
void __thiscall FUN_008e5270(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_004066f0();
  iVar4 = FUN_012696c0();
  FUN_004066f0();
  iVar3 = _tls_index;
  if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_008e52ff;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 1;
    puVar5[2] = puVar5[2] | param_2;
    if (DAT_01885d68 == 1) goto LAB_008e52ff;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
  }
  piVar1 = (int *)(iVar6 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_008e52ff:
  FUN_01194c70(iVar4,1);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 != iVar4 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e5270(param_2);
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E5370  FUN_008e5370  size=258  [run]
void __thiscall FUN_008e5370(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_004066f0();
  iVar4 = FUN_012696c0();
  FUN_004066f0();
  iVar3 = _tls_index;
  if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_008e5403;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 1;
    puVar5[2] = puVar5[2] & ~param_2;
    if (DAT_01885d68 == 1) goto LAB_008e5403;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
  }
  piVar1 = (int *)(iVar6 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_008e5403:
  FUN_01194c70(iVar4,1);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 != iVar4 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e5370(param_2);
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E5480  FUN_008e5480  size=258  [run]
void __thiscall FUN_008e5480(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_004066f0();
  iVar4 = FUN_012696c0();
  FUN_004066f0();
  iVar3 = _tls_index;
  if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_008e5513;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 1;
    puVar5[2] = puVar5[2] & ~param_2;
    if (DAT_01885d68 == 1) goto LAB_008e5513;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
  }
  piVar1 = (int *)(iVar6 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_008e5513:
  FUN_01194c70(iVar4,1);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 != iVar4 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e5480(param_2);
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E5610  FUN_008e5610  size=262  [run]
void __thiscall FUN_008e5610(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_004066f0();
  iVar4 = FUN_012696c0();
  FUN_004066f0();
  iVar3 = _tls_index;
  if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_008e56a2;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 0x400;
    puVar5[0xc] = puVar5[0xc] | param_2;
    if (DAT_01885d68 == 1) goto LAB_008e56a2;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
  }
  piVar1 = (int *)(iVar6 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_008e56a2:
  FUN_01194c70(iVar4,1);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 != iVar4 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e5610(param_2);
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E5720  FUN_008e5720  size=261  [run]
void __thiscall FUN_008e5720(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_004066f0();
  iVar4 = FUN_012696c0();
  FUN_004066f0();
  iVar3 = _tls_index;
  if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_008e57b6;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 0x400;
    puVar5[0xc] = puVar5[0xc] & ~param_2;
    if (DAT_01885d68 == 1) goto LAB_008e57b6;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
  }
  piVar1 = (int *)(iVar6 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_008e57b6:
  FUN_01194c70(iVar4,1);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 != iVar4 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e5720(param_2);
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E5830  FUN_008e5830  size=261  [run]
void __thiscall FUN_008e5830(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_004066f0();
  iVar4 = FUN_012696c0();
  FUN_004066f0();
  iVar3 = _tls_index;
  if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_008e58c6;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 0x400;
    puVar5[0xc] = puVar5[0xc] & ~param_2;
    if (DAT_01885d68 == 1) goto LAB_008e58c6;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
  }
  piVar1 = (int *)(iVar6 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_008e58c6:
  FUN_01194c70(iVar4,1);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 != iVar4 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e5830(param_2);
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E59C0  FUN_008e59c0  size=253  [run]
void __thiscall FUN_008e59c0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_004066f0();
  iVar4 = FUN_012696c0();
  FUN_004066f0();
  iVar3 = _tls_index;
  if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_008e5a4f;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 2;
    puVar5[3] = puVar5[3] | param_2;
    if (DAT_01885d68 == 1) goto LAB_008e5a4f;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
  }
  piVar1 = (int *)(iVar6 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_008e5a4f:
  FUN_01194c70(iVar4,1);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 != iVar4 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e59c0(param_2);
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E5AC0  FUN_008e5ac0  size=258  [run]
void __thiscall FUN_008e5ac0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_004066f0();
  iVar4 = FUN_012696c0();
  FUN_004066f0();
  iVar3 = _tls_index;
  if ((iVar4 == 0) || (uVar2 = *(uint *)(iVar4 + 0xc), uVar2 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_008e5b53;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar5 = *puVar5 | 2;
    puVar5[3] = puVar5[3] & ~param_2;
    if (DAT_01885d68 == 1) goto LAB_008e5b53;
    iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar3 * 4);
  }
  piVar1 = (int *)(iVar6 + 4);
  *piVar1 = *piVar1 + -1;
  if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_008e5b53:
  FUN_01194c70(iVar4,1);
  iVar4 = *(int *)(param_1 + 0x54);
  if (iVar4 != iVar4 + *(int *)(param_1 + 0x58) * 4) {
    do {
      FUN_008e5ac0(param_2);
      iVar4 = iVar4 + 4;
    } while (iVar4 != *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58) * 4);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + iVar3 * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 008E5C50  FUN_008e5c50  size=111  [run]
void __thiscall FUN_008e5c50(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  
  FUN_004066f0();
  *(uint *)(param_1 + 0x110) = param_2;
  uVar2 = FUN_008e2620();
  FUN_008e2520(uVar2 & 0xffffffe0 | param_2 & 0x1f);
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}


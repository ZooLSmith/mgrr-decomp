// src/unsorted/unit_0091D200.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0091D200..0091D550, 7 functions

#include "mgrr.h"

// 0091D200  FUN_0091d200  size=165  [run]
void FUN_0091d200(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  if (((param_1 == 0) || (uVar3 = *(uint *)(param_1 + 0xc), uVar3 == 0)) ||
     (*(int *)((-(uint)(uVar3 != 0) & uVar3) + 0x34) == 0)) {
    iVar2 = FUN_00dd3500(0x54,&DAT_01b7c218);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = lib::StaticArray<EntityHandle,16>::StaticArray<EntityHandle,16>();
    }
    if (param_1 != 0) {
      FUN_004066f0();
      puVar4 = (uint *)(-(uint)(*(uint *)(param_1 + 0xc) != 0) & *(uint *)(param_1 + 0xc));
      *puVar4 = *puVar4 | 0x800;
      puVar4[0xd] = uVar3;
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
          return;
        }
      }
    }
  }
  return;
}

// 0091D330  FUN_0091d330  size=110  [run]
void FUN_0091d330(int param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  
  if (param_1 != 0) {
    FUN_004066f0();
    puVar2 = (uint *)(-(uint)(*(uint *)(param_1 + 0xc) != 0) & *(uint *)(param_1 + 0xc));
    *puVar2 = *puVar2 | 1;
    puVar2[2] = param_2;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_00913180(param_1);
  return;
}

// 0091D3A0  FUN_0091d3a0  size=110  [run]
void FUN_0091d3a0(int param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  
  if (param_1 != 0) {
    FUN_004066f0();
    puVar2 = (uint *)(-(uint)(*(uint *)(param_1 + 0xc) != 0) & *(uint *)(param_1 + 0xc));
    *puVar2 = *puVar2 | 2;
    puVar2[3] = param_2;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_00913180(param_1);
  return;
}

// 0091D410  FUN_0091d410  size=110  [run]
void FUN_0091d410(int param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  
  if (param_1 != 0) {
    FUN_004066f0();
    puVar2 = (uint *)(-(uint)(*(uint *)(param_1 + 0xc) != 0) & *(uint *)(param_1 + 0xc));
    *puVar2 = *puVar2 | 4;
    puVar2[4] = param_2;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_00913180(param_1);
  return;
}

// 0091D480  FUN_0091d480  size=110  [run]
void FUN_0091d480(int param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  
  if (param_1 != 0) {
    FUN_004066f0();
    puVar2 = (uint *)(-(uint)(*(uint *)(param_1 + 0xc) != 0) & *(uint *)(param_1 + 0xc));
    *puVar2 = *puVar2 | 8;
    puVar2[5] = param_2;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_00913180(param_1);
  return;
}

// 0091D4F0  FUN_0091d4f0  size=90  [run]
void FUN_0091d4f0(int param_1)

{
  int *piVar1;
  
  if (param_1 != 0) {
    FUN_004066f0();
    FUN_00919270(param_1);
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
        return;
      }
    }
  }
  return;
}

// 0091D550  FUN_0091d550  size=137  [run]
undefined4 * FUN_0091d550(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    return param_2;
  }
  FUN_004066f0();
  uVar2 = *(undefined4 *)(param_1 + 0xf4);
  uVar3 = *(undefined4 *)(param_1 + 0xf8);
  uVar4 = *(undefined4 *)(param_1 + 0xfc);
  *param_2 = *(undefined4 *)(param_1 + 0xf0);
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x104);
  uVar3 = *(undefined4 *)(param_1 + 0x108);
  uVar4 = *(undefined4 *)(param_1 + 0x10c);
  param_2[4] = *(undefined4 *)(param_1 + 0x100);
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  param_2[7] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x118);
  uVar4 = *(undefined4 *)(param_1 + 0x11c);
  param_2[8] = *(undefined4 *)(param_1 + 0x110);
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  param_2[0xb] = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x124);
  uVar3 = *(undefined4 *)(param_1 + 0x128);
  uVar4 = *(undefined4 *)(param_1 + 300);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x120);
  param_2[0xd] = uVar2;
  param_2[0xe] = uVar3;
  param_2[0xf] = uVar4;
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return param_2;
}


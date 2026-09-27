// src/unsorted/unit_00917CF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00917CF0..00919310, 27 functions

#include "types.h"

// 00917CF0  FUN_00917cf0  size=114  [run]
void FUN_00917cf0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  
  FUN_004066f0();
  if ((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 != 0)) {
    puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar3 = *puVar3 | 1;
    puVar3[2] = puVar3[2] | param_2;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_00913180(param_1);
  return;
}

// 00917D70  FUN_00917d70  size=116  [run]
void FUN_00917d70(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  
  FUN_004066f0();
  if ((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 != 0)) {
    puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar3 = *puVar3 | 1;
    puVar3[2] = puVar3[2] & ~param_2;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_00913180(param_1);
  return;
}

// 00917E10  FUN_00917e10  size=114  [run]
void FUN_00917e10(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  
  FUN_004066f0();
  if ((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 != 0)) {
    puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar3 = *puVar3 | 2;
    puVar3[3] = puVar3[3] | param_2;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_00913180(param_1);
  return;
}

// 00917E90  FUN_00917e90  size=116  [run]
void FUN_00917e90(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  
  FUN_004066f0();
  if ((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 != 0)) {
    puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar3 = *puVar3 | 2;
    puVar3[3] = puVar3[3] & ~param_2;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_00913180(param_1);
  return;
}

// 00917F30  FUN_00917f30  size=114  [run]
void FUN_00917f30(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  
  FUN_004066f0();
  if ((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 != 0)) {
    puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar3 = *puVar3 | 4;
    puVar3[4] = puVar3[4] | param_2;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_00913180(param_1);
  return;
}

// 00917FE0  FUN_00917fe0  size=116  [run]
void FUN_00917fe0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  
  FUN_004066f0();
  if ((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 != 0)) {
    puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar3 = *puVar3 | 4;
    puVar3[4] = puVar3[4] & ~param_2;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_00913180(param_1);
  return;
}

// 00918100  FUN_00918100  size=116  [run]
void FUN_00918100(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  
  FUN_004066f0();
  if ((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0xc), uVar2 != 0)) {
    puVar3 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
    *puVar3 = *puVar3 | 8;
    puVar3[5] = puVar3[5] & ~param_2;
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_00913180(param_1);
  return;
}

// 009182B0  FUN_009182b0  size=24  [run]
bool FUN_009182b0(int param_1)

{
  if (param_1 == 0) {
    return false;
  }
  return *(char *)(param_1 + 0xe8) == '\x05';
}

// 009182D0  FUN_009182d0  size=148  [run]
void FUN_009182d0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    FUN_004066f0();
    uVar2 = *(uint *)(param_1 + 0xc);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)((-(uint)(uVar2 != 0) & uVar2) + 0x3c);
    }
    *(uint *)(param_1 + 0x2c) = uVar2 & 0x1f | *(uint *)(param_1 + 0x2c) & 0xffff7fe0;
    if (*(int *)(param_1 + 8) != 0) {
      FUN_01194ef0(param_1,0,1);
    }
    FUN_0118fe70();
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

// 009183C0  FUN_009183c0  size=121  [run]
void FUN_009183c0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    FUN_004066f0();
    uVar2 = *(uint *)(param_1 + 0x2c);
    uVar3 = uVar2 ^ (uVar2 ^ param_2) & 0x1f;
    if ((uVar2 != uVar3) && (*(uint *)(param_1 + 0x2c) = uVar3, *(int *)(param_1 + 8) != 0)) {
      FUN_01194ef0(param_1,0,1);
    }
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

// 00918440  FUN_00918440  size=122  [run]
void FUN_00918440(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    FUN_004066f0();
    uVar2 = *(uint *)(param_1 + 0x2c) & 0xffff | param_2 << 0x10;
    if ((*(uint *)(param_1 + 0x2c) != uVar2) &&
       (*(uint *)(param_1 + 0x2c) = uVar2, *(int *)(param_1 + 8) != 0)) {
      FUN_01194ef0(param_1,0,1);
    }
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

// 009184C0  FUN_009184c0  size=89  [run]
undefined4 FUN_009184c0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_004066f0();
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return uVar2;
}

// 00918520  FUN_00918520  size=185  [run]
void FUN_00918520(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    FUN_004066f0();
    if (*(char *)(param_1 + 0xe8) == '\x05') {
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    else {
      FUN_0118fe70();
      (**(code **)(*(int *)(param_1 + 0xe0) + 0x44))(&DAT_01701b10);
      FUN_0118fe70();
      (**(code **)(*(int *)(param_1 + 0xe0) + 0x40))(&DAT_01701b10);
      if (DAT_01885d68 == 1) {
        return;
      }
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    }
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

// 00918630  FUN_00918630  size=159  [run]
void FUN_00918630(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3f800000;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0x3f800000;
  if (param_1 == 0) {
    return;
  }
  FUN_00860de0();
  if (*(char *)(param_1 + 0xe8) == '\x05') {
    FUN_00860e40();
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x1b0);
  param_2[1] = *(undefined4 *)(param_1 + 0x1b4);
  param_2[2] = *(undefined4 *)(param_1 + 0x1b8);
  param_2[3] = *(undefined4 *)(param_1 + 0x1bc);
  *param_3 = *(undefined4 *)(param_1 + 0x1c0);
  param_3[1] = *(undefined4 *)(param_1 + 0x1c4);
  param_3[2] = *(undefined4 *)(param_1 + 0x1c8);
  param_3[3] = *(undefined4 *)(param_1 + 0x1cc);
  FUN_00860e40();
  return;
}

// 009186D0  FUN_009186d0  size=240  [run]
void FUN_009186d0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1 != 0) {
    FUN_004066f0();
    if (*(char *)(param_1 + 0xe8) != '\x05') {
      local_30 = *param_2;
      uStack_2c = param_2[1];
      uStack_28 = param_2[2];
      uStack_24 = param_2[3];
      uStack_18 = param_3[2];
      uStack_14 = param_3[3];
      uStack_1c = param_3[1];
      local_20 = *param_3;
      FUN_0118fe70();
      (**(code **)(*(int *)(param_1 + 0xe0) + 0x40))(&local_30);
      FUN_0118fe70();
      (**(code **)(*(int *)(param_1 + 0xe0) + 0x44))(&uStack_24);
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 009187C0  FUN_009187c0  size=156  [run]
void FUN_009187c0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    FUN_004066f0();
    if (*(char *)(param_1 + 0xe8) != '\x05') {
      FUN_0118fe70();
      (**(code **)(*(int *)(param_1 + 0xe0) + 0x40))(param_2);
      FUN_0118fe70();
      (**(code **)(*(int *)(param_1 + 0xe0) + 0x44))(param_2);
    }
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

// 00918920  FUN_00918920  size=103  [run]
void FUN_00918920(int param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3f800000;
  if (param_1 == 0) {
    return;
  }
  FUN_00860de0();
  if (*(char *)(param_1 + 0xe8) == '\x05') {
    FUN_00860e40();
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x1b0);
  param_2[1] = *(undefined4 *)(param_1 + 0x1b4);
  param_2[2] = *(undefined4 *)(param_1 + 0x1b8);
  param_2[3] = *(undefined4 *)(param_1 + 0x1bc);
  FUN_00860e40();
  return;
}

// 00918990  FUN_00918990  size=258  [run]
void FUN_00918990(int param_1,float *param_2)

{
  int *piVar1;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (param_1 != 0) {
    FUN_004066f0();
    if (*(char *)(param_1 + 0xe8) == '\x05') {
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
          return;
        }
      }
    }
    else {
      if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
        FUN_00406760();
        return;
      }
      local_20 = *param_2;
      fStack_1c = param_2[1];
      fStack_18 = param_2[2];
      fStack_14 = param_2[3];
      FUN_0118fe70();
      (**(code **)(*(int *)(param_1 + 0xe0) + 0x40))(&local_20);
      FUN_00406760();
    }
  }
  return;
}

// 00918B10  FUN_00918b10  size=258  [run]
void FUN_00918b10(int param_1,float *param_2)

{
  int *piVar1;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (param_1 != 0) {
    FUN_004066f0();
    if (*(char *)(param_1 + 0xe8) == '\x05') {
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
          return;
        }
      }
    }
    else {
      if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
        FUN_00406760();
        return;
      }
      local_20 = *param_2;
      fStack_1c = param_2[1];
      fStack_18 = param_2[2];
      fStack_14 = param_2[3];
      FUN_0118fe70();
      (**(code **)(*(int *)(param_1 + 0xe0) + 0x44))(&local_20);
      FUN_00406760();
    }
  }
  return;
}

// 00918D40  FUN_00918d40  size=212  [run]
void FUN_00918d40(int param_1,float *param_2)

{
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if ((param_1 != 0) && (((*param_2 != 0.0 || (param_2[1] != 0.0)) || (param_2[2] != 0.0)))) {
    FUN_004066f0();
    if (*(char *)(param_1 + 0xe8) != '\x05') {
      local_20 = *param_2;
      fStack_1c = param_2[1];
      fStack_18 = param_2[2];
      fStack_14 = param_2[3];
      FUN_0118fe70();
      (**(code **)(*(int *)(param_1 + 0xe0) + 0x50))(&local_20);
    }
    FUN_00406760();
  }
  return;
}

// 00918E20  FUN_00918e20  size=153  [run]
void FUN_00918e20(undefined4 param_1,float *param_2)

{
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (((*param_2 != 0.0) || (param_2[1] != 0.0)) || (param_2[2] != 0.0)) {
    local_20 = *param_2;
    fStack_1c = param_2[1];
    fStack_18 = param_2[2];
    fStack_14 = param_2[3];
    FUN_00913830(param_1,&local_20);
  }
  return;
}

// 00918EC0  FUN_00918ec0  size=212  [run]
void FUN_00918ec0(int param_1,float *param_2)

{
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if ((param_1 != 0) && (((*param_2 != 0.0 || (param_2[1] != 0.0)) || (param_2[2] != 0.0)))) {
    FUN_004066f0();
    if (*(char *)(param_1 + 0xe8) != '\x05') {
      local_20 = *param_2;
      fStack_1c = param_2[1];
      fStack_18 = param_2[2];
      fStack_14 = param_2[3];
      FUN_0118fe70();
      (**(code **)(*(int *)(param_1 + 0xe0) + 0x58))(&local_20);
    }
    FUN_00406760();
  }
  return;
}

// 00918FA0  FUN_00918fa0  size=153  [run]
void FUN_00918fa0(undefined4 param_1,float *param_2)

{
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (((*param_2 != 0.0) || (param_2[1] != 0.0)) || (param_2[2] != 0.0)) {
    local_20 = *param_2;
    fStack_1c = param_2[1];
    fStack_18 = param_2[2];
    fStack_14 = param_2[3];
    FUN_00913890(param_1,&local_20);
  }
  return;
}

// 009190D0  FUN_009190d0  size=265  [run]
void FUN_009190d0(int param_1,float *param_2,undefined4 *param_3)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if ((param_1 != 0) && (((*param_2 != 0.0 || (param_2[1] != 0.0)) || (param_2[2] != 0.0)))) {
    FUN_004066f0();
    if (*(char *)(param_1 + 0xe8) != '\x05') {
      local_30 = *param_3;
      uStack_2c = param_3[1];
      uStack_28 = param_3[2];
      uStack_24 = param_3[3];
      fStack_18 = param_2[2];
      fStack_14 = param_2[3];
      fStack_1c = param_2[1];
      local_20 = *param_2;
      FUN_0118fe70();
      (**(code **)(*(int *)(param_1 + 0xe0) + 0x54))(&local_20,&local_30);
    }
    FUN_00406760();
  }
  return;
}

// 009191E0  FUN_009191e0  size=140  [run]
void FUN_009191e0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1 != 0) {
    FUN_004066f0();
    local_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    uStack_14 = param_2[3];
    FUN_0119fea0(&local_20);
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 00919270  FUN_00919270  size=147  [run]
void FUN_00919270(int param_1)

{
  undefined4 local_130;
  float local_12c;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0 [4];
  undefined4 local_dc;
  undefined4 local_50;
  
  if ((*(char *)(param_1 + 0xe8) != '\x05') && (*(char *)(param_1 + 0xe8) != '\x04')) {
    FUN_0118f7b0();
    FUN_00913ce0(param_1,local_e0);
    local_130 = 0;
    local_12c = 0.0;
    local_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    local_110 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    local_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    local_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    FUN_01272980(local_dc,local_50,&local_130);
    if (local_12c != 0.0) {
      FUN_0119f700(&local_110);
    }
  }
  return;
}

// 00919310  FUN_00919310  size=129  [run]
void __thiscall FUN_00919310(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 9);
  param_1[10] = param_2[10];
  *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0xb);
  *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_2 + 0x2e);
  *(undefined1 *)((int)param_1 + 0x2f) = *(undefined1 *)((int)param_2 + 0x2f);
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  uVar1 = param_2[0x11];
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  uVar1 = param_2[0x15];
  uVar2 = param_2[0x16];
  uVar3 = param_2[0x17];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  uVar1 = param_2[0x19];
  uVar2 = param_2[0x1a];
  uVar3 = param_2[0x1b];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar3;
  return;
}


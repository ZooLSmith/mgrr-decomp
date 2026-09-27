// src/unsorted/unit_00F59E40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F59E40..00F5B4B0, 18 functions

#include "mgrr.h"

// 00F59E40  FUN_00f59e40  size=13  [run]
void __fastcall FUN_00f59e40(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00F59E50  FUN_00f59e50  size=11  [run]
void __fastcall FUN_00f59e50(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00F59ED0  FUN_00f59ed0  size=22  [run]
undefined * FUN_00f59ed0(int param_1)

{
  if (0x16 < param_1) {
    return (undefined *)0x0;
  }
  return (&PTR_s_sEffectParticleGenerationData_018d7ac4)[param_1 * 4];
}

// 00F59F00  FUN_00f59f00  size=84  [run]
void __fastcall FUN_00f59f00(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = 0;
  puVar3 = &DAT_018d7abc;
  puVar1 = (undefined4 *)(param_1 + 8);
  do {
    if (iVar5 < 0x17) {
      uVar4 = puVar3[-1];
      uVar6 = *puVar3;
      uVar2 = *(undefined4 *)((int)puVar1 + ((int)&DAT_018d7ab8 - param_1));
    }
    else {
      uVar4 = 0;
      uVar6 = 0;
      uVar2 = 0;
    }
    puVar1[-1] = uVar4;
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    puVar3 = puVar3 + 4;
    iVar5 = iVar5 + 1;
    puVar1 = puVar1 + 4;
  } while ((int)puVar3 < 0x18d7c2c);
  return;
}

// 00F5A050  FUN_00f5a050  size=38  [run]
int __thiscall FUN_00f5a050(int param_1,uint param_2)

{
  if (((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 8) != 0)) &&
     (param_2 < *(uint *)(param_1 + 4))) {
    return *(int *)(*(int *)(param_1 + 8) + param_2 * 4 + param_1) + param_1;
  }
  return 0;
}

// 00F5A080  FUN_00f5a080  size=41  [run]
int __thiscall FUN_00f5a080(int param_1,uint param_2)

{
  if ((param_2 < *(uint *)(param_1 + 4)) && (*(int *)(param_1 + 0xc) != 0)) {
    return *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x14) * param_2 + *(int *)(param_1 + 0xc) +
           param_1;
  }
  return 0;
}

// 00F5A0B0  FUN_00f5a0b0  size=36  [run]
bool __fastcall FUN_00f5a0b0(undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ec7c90(*param_1);
  if (iVar1 != 0) {
    return *(int *)(param_1 + 0x3b8) != 0;
  }
  return false;
}

// 00F5A0E0  FUN_00f5a0e0  size=92  [run]
void FUN_00f5a0e0(void)

{
  FUN_00f8f120();
  FUN_00f8ef80();
  FUN_00f8ef80();
  FUN_00f8ef80();
  FUN_00f8f260();
  FUN_00f8f1f0();
  FUN_00f8eff0();
  FUN_00f8f010();
  return;
}

// 00F5A480  FUN_00f5a480  size=92  [run]
undefined4 __fastcall FUN_00f5a480(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if ((*param_1 == 0) || (piVar1 = (int *)param_1[1], piVar1 == (int *)0x0)) {
    return 0;
  }
  uVar2 = 0;
  if (param_1[2] != 0) {
    do {
      if (piVar1 == (int *)0x0) {
        return 0;
      }
      if (piVar1[1] == 0) {
        FUN_00dd5650(&DAT_016e1918);
        return 0;
      }
      if (0 < piVar1[2]) {
        *piVar1 = *param_1;
        if (*param_1 != 0) {
          *piVar1 = piVar1[3] + *param_1;
        }
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (uVar2 < (uint)param_1[2]);
  }
  return 1;
}

// 00F5A4E0  FUN_00f5a4e0  size=67  [run]
int __fastcall FUN_00f5a4e0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  iVar3 = 0x16;
  puVar2 = puVar1;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = 0x17;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00f59f00();
  return param_1;
}

// 00F5A5C0  FUN_00f5a5c0  size=165  [run]
undefined4 __fastcall FUN_00f5a5c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      if (*(int *)(param_1 + 0x10) == 0) {
        iVar3 = 0;
      }
      else if (*(int *)(param_1 + 8) == 0) {
        iVar3 = 0;
      }
      else if (uVar4 < uVar1) {
        iVar3 = *(int *)(*(int *)(param_1 + 8) + uVar4 * 4 + param_1) + param_1;
      }
      else {
        iVar3 = 0;
      }
      if (uVar4 < uVar1) {
        if (*(int *)(param_1 + 0xc) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x14) * uVar4 +
                  *(int *)(param_1 + 0xc) + param_1;
        }
      }
      else {
        iVar2 = 0;
      }
      if ((iVar3 == 0) || (iVar2 == 0)) {
        return 0;
      }
      iVar3 = FUN_00f5a480();
      if (iVar3 == 0) {
        return 0;
      }
      uVar1 = *(uint *)(param_1 + 4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 1;
}

// 00F5A940  FUN_00f5a940  size=158  [run]
void __fastcall FUN_00f5a940(void *param_1)

{
  _memset(param_1,0,0x180);
  *(undefined4 *)((int)param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x178) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x80) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x170) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x160) = 0x3f800000;
  _memset((void *)((int)param_1 + 0x90),0,0x38);
  *(undefined4 *)((int)param_1 + 0x9c) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0x98) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xb0) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xa8) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 200) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xd0) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xd4) = 0x3f800000;
  _memset((undefined4 *)((int)param_1 + 0xec),0,0x5c);
  *(undefined4 *)((int)param_1 + 0xec) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xf0) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xf4) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xf8) = 0x3f800000;
  *(undefined4 *)((int)param_1 + 0xfc) = 0;
  *(undefined4 *)((int)param_1 + 0x14c) = 0x3f800000;
  return;
}

// 00F5AAF0  FUN_00f5aaf0  size=78  [run]
undefined4 * __fastcall FUN_00f5aaf0(undefined4 *param_1)

{
  _memset(param_1,0,0xb0);
  *param_1 = 0x3f800000;
  *(undefined2 *)(param_1 + 7) = 100;
  param_1[5] = 0x3f000000;
  param_1[6] = 0x3f000000;
  *(undefined1 *)((int)param_1 + 0x1f) = 1;
  param_1[10] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x17] = 0x3f800000;
  return param_1;
}

// 00F5B130  FUN_00f5b130  size=245  [run]
void FUN_00f5b130(byte *param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte local_64 [96];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_64;
  _memset(local_64,0,0x60);
  pbVar3 = local_64;
  local_64[0x1c] = 0;
  local_64[0x1d] = 0;
  local_64[0x1e] = 0x80;
  local_64[0x1f] = 0x3f;
  local_64[0x38] = 0;
  local_64[0x39] = 0;
  local_64[0x3a] = 0x80;
  local_64[0x3b] = 0x3f;
  local_64[0x54] = 0;
  local_64[0x55] = 0;
  local_64[0x56] = 0x80;
  local_64[0x57] = 0x3f;
  local_64[4] = 0;
  local_64[5] = 0;
  local_64[6] = 0;
  local_64[7] = 0;
  local_64[8] = 0;
  local_64[9] = 0;
  local_64[10] = 0;
  local_64[0xb] = 0;
  local_64[0xc] = 0;
  local_64[0xd] = 0;
  local_64[0xe] = 0;
  local_64[0xf] = 0;
  local_64[0x10] = 0;
  local_64[0x11] = 0;
  local_64[0x12] = 0;
  local_64[0x13] = 0;
  local_64[0x14] = 0;
  local_64[0x15] = 0;
  local_64[0x16] = 0;
  local_64[0x17] = 0;
  local_64[0x18] = 0;
  local_64[0x19] = 0;
  local_64[0x1a] = 0;
  local_64[0x1b] = 0;
  local_64[0x20] = 0;
  local_64[0x21] = 0;
  local_64[0x22] = 0;
  local_64[0x23] = 0;
  local_64[0x24] = 0;
  local_64[0x25] = 0;
  local_64[0x26] = 0;
  local_64[0x27] = 0;
  local_64[0x28] = 0;
  local_64[0x29] = 0;
  local_64[0x2a] = 0;
  local_64[0x2b] = 0;
  local_64[0x2c] = 0;
  local_64[0x2d] = 0;
  local_64[0x2e] = 0;
  local_64[0x2f] = 0;
  local_64[0x30] = 0;
  local_64[0x31] = 0;
  local_64[0x32] = 0;
  local_64[0x33] = 0;
  local_64[0x34] = 0;
  local_64[0x35] = 0;
  local_64[0x36] = 0;
  local_64[0x37] = 0;
  local_64[0x3c] = 0;
  local_64[0x3d] = 0;
  local_64[0x3e] = 0;
  local_64[0x3f] = 0;
  local_64[0x40] = 0;
  local_64[0x41] = 0;
  local_64[0x42] = 0;
  local_64[0x43] = 0;
  local_64[0x44] = 0;
  local_64[0x45] = 0;
  local_64[0x46] = 0;
  local_64[0x47] = 0;
  local_64[0x48] = 0;
  local_64[0x49] = 0;
  local_64[0x4a] = 0;
  local_64[0x4b] = 0;
  local_64[0x4c] = 0;
  local_64[0x4d] = 0;
  local_64[0x4e] = 0;
  local_64[0x4f] = 0;
  local_64[0x50] = 0;
  local_64[0x51] = 0;
  local_64[0x52] = 0;
  local_64[0x53] = 0;
  uVar1 = 0x60;
  do {
    if (*(int *)param_1 != *(int *)pbVar3) {
      iVar2 = (uint)*param_1 - (uint)*pbVar3;
      if (((iVar2 == 0) && (iVar2 = (uint)param_1[1] - (uint)pbVar3[1], iVar2 == 0)) &&
         (iVar2 = (uint)param_1[2] - (uint)pbVar3[2], iVar2 == 0)) {
        iVar2 = (uint)param_1[3] - (uint)pbVar3[3];
      }
      uVar1 = iVar2 >> 0x1f | 1;
      goto LAB_00f5b1d6;
    }
    uVar1 = uVar1 - 4;
    pbVar3 = pbVar3 + 4;
    param_1 = param_1 + 4;
  } while (3 < uVar1);
  uVar1 = 0;
LAB_00f5b1d6:
  __security_check_cookie(local_4 ^ (uint)local_64,uVar1 == 0);
  return;
}

// 00F5B230  FUN_00f5b230  size=245  [run]
void FUN_00f5b230(byte *param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte local_64 [96];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_64;
  _memset(local_64,0,0x60);
  pbVar3 = local_64;
  local_64[0x1c] = 0;
  local_64[0x1d] = 0;
  local_64[0x1e] = 0x80;
  local_64[0x1f] = 0x3f;
  local_64[0x38] = 0;
  local_64[0x39] = 0;
  local_64[0x3a] = 0x80;
  local_64[0x3b] = 0x3f;
  local_64[0x54] = 0;
  local_64[0x55] = 0;
  local_64[0x56] = 0x80;
  local_64[0x57] = 0x3f;
  local_64[4] = 0;
  local_64[5] = 0;
  local_64[6] = 0;
  local_64[7] = 0;
  local_64[8] = 0;
  local_64[9] = 0;
  local_64[10] = 0;
  local_64[0xb] = 0;
  local_64[0xc] = 0;
  local_64[0xd] = 0;
  local_64[0xe] = 0;
  local_64[0xf] = 0;
  local_64[0x10] = 0;
  local_64[0x11] = 0;
  local_64[0x12] = 0;
  local_64[0x13] = 0;
  local_64[0x14] = 0;
  local_64[0x15] = 0;
  local_64[0x16] = 0;
  local_64[0x17] = 0;
  local_64[0x18] = 0;
  local_64[0x19] = 0;
  local_64[0x1a] = 0;
  local_64[0x1b] = 0;
  local_64[0x20] = 0;
  local_64[0x21] = 0;
  local_64[0x22] = 0;
  local_64[0x23] = 0;
  local_64[0x24] = 0;
  local_64[0x25] = 0;
  local_64[0x26] = 0;
  local_64[0x27] = 0;
  local_64[0x28] = 0;
  local_64[0x29] = 0;
  local_64[0x2a] = 0;
  local_64[0x2b] = 0;
  local_64[0x2c] = 0;
  local_64[0x2d] = 0;
  local_64[0x2e] = 0;
  local_64[0x2f] = 0;
  local_64[0x30] = 0;
  local_64[0x31] = 0;
  local_64[0x32] = 0;
  local_64[0x33] = 0;
  local_64[0x34] = 0;
  local_64[0x35] = 0;
  local_64[0x36] = 0;
  local_64[0x37] = 0;
  local_64[0x3c] = 0;
  local_64[0x3d] = 0;
  local_64[0x3e] = 0;
  local_64[0x3f] = 0;
  local_64[0x40] = 0;
  local_64[0x41] = 0;
  local_64[0x42] = 0;
  local_64[0x43] = 0;
  local_64[0x44] = 0;
  local_64[0x45] = 0;
  local_64[0x46] = 0;
  local_64[0x47] = 0;
  local_64[0x48] = 0;
  local_64[0x49] = 0;
  local_64[0x4a] = 0;
  local_64[0x4b] = 0;
  local_64[0x4c] = 0;
  local_64[0x4d] = 0;
  local_64[0x4e] = 0;
  local_64[0x4f] = 0;
  local_64[0x50] = 0;
  local_64[0x51] = 0;
  local_64[0x52] = 0;
  local_64[0x53] = 0;
  uVar1 = 0x60;
  do {
    if (*(int *)param_1 != *(int *)pbVar3) {
      iVar2 = (uint)*param_1 - (uint)*pbVar3;
      if (((iVar2 == 0) && (iVar2 = (uint)param_1[1] - (uint)pbVar3[1], iVar2 == 0)) &&
         (iVar2 = (uint)param_1[2] - (uint)pbVar3[2], iVar2 == 0)) {
        iVar2 = (uint)param_1[3] - (uint)pbVar3[3];
      }
      uVar1 = iVar2 >> 0x1f | 1;
      goto LAB_00f5b2d6;
    }
    uVar1 = uVar1 - 4;
    pbVar3 = pbVar3 + 4;
    param_1 = param_1 + 4;
  } while (3 < uVar1);
  uVar1 = 0;
LAB_00f5b2d6:
  __security_check_cookie(local_4 ^ (uint)local_64,uVar1 == 0);
  return;
}

// 00F5B330  FUN_00f5b330  size=245  [run]
void FUN_00f5b330(byte *param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  byte local_64 [96];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_64;
  _memset(local_64,0,0x60);
  pbVar3 = local_64;
  local_64[0x1c] = 0;
  local_64[0x1d] = 0;
  local_64[0x1e] = 0x80;
  local_64[0x1f] = 0x3f;
  local_64[0x38] = 0;
  local_64[0x39] = 0;
  local_64[0x3a] = 0x80;
  local_64[0x3b] = 0x3f;
  local_64[0x54] = 0;
  local_64[0x55] = 0;
  local_64[0x56] = 0x80;
  local_64[0x57] = 0x3f;
  local_64[4] = 0;
  local_64[5] = 0;
  local_64[6] = 0;
  local_64[7] = 0;
  local_64[8] = 0;
  local_64[9] = 0;
  local_64[10] = 0;
  local_64[0xb] = 0;
  local_64[0xc] = 0;
  local_64[0xd] = 0;
  local_64[0xe] = 0;
  local_64[0xf] = 0;
  local_64[0x10] = 0;
  local_64[0x11] = 0;
  local_64[0x12] = 0;
  local_64[0x13] = 0;
  local_64[0x14] = 0;
  local_64[0x15] = 0;
  local_64[0x16] = 0;
  local_64[0x17] = 0;
  local_64[0x18] = 0;
  local_64[0x19] = 0;
  local_64[0x1a] = 0;
  local_64[0x1b] = 0;
  local_64[0x20] = 0;
  local_64[0x21] = 0;
  local_64[0x22] = 0;
  local_64[0x23] = 0;
  local_64[0x24] = 0;
  local_64[0x25] = 0;
  local_64[0x26] = 0;
  local_64[0x27] = 0;
  local_64[0x28] = 0;
  local_64[0x29] = 0;
  local_64[0x2a] = 0;
  local_64[0x2b] = 0;
  local_64[0x2c] = 0;
  local_64[0x2d] = 0;
  local_64[0x2e] = 0;
  local_64[0x2f] = 0;
  local_64[0x30] = 0;
  local_64[0x31] = 0;
  local_64[0x32] = 0;
  local_64[0x33] = 0;
  local_64[0x34] = 0;
  local_64[0x35] = 0;
  local_64[0x36] = 0;
  local_64[0x37] = 0;
  local_64[0x3c] = 0;
  local_64[0x3d] = 0;
  local_64[0x3e] = 0;
  local_64[0x3f] = 0;
  local_64[0x40] = 0;
  local_64[0x41] = 0;
  local_64[0x42] = 0;
  local_64[0x43] = 0;
  local_64[0x44] = 0;
  local_64[0x45] = 0;
  local_64[0x46] = 0;
  local_64[0x47] = 0;
  local_64[0x48] = 0;
  local_64[0x49] = 0;
  local_64[0x4a] = 0;
  local_64[0x4b] = 0;
  local_64[0x4c] = 0;
  local_64[0x4d] = 0;
  local_64[0x4e] = 0;
  local_64[0x4f] = 0;
  local_64[0x50] = 0;
  local_64[0x51] = 0;
  local_64[0x52] = 0;
  local_64[0x53] = 0;
  uVar1 = 0x60;
  do {
    if (*(int *)param_1 != *(int *)pbVar3) {
      iVar2 = (uint)*param_1 - (uint)*pbVar3;
      if (((iVar2 == 0) && (iVar2 = (uint)param_1[1] - (uint)pbVar3[1], iVar2 == 0)) &&
         (iVar2 = (uint)param_1[2] - (uint)pbVar3[2], iVar2 == 0)) {
        iVar2 = (uint)param_1[3] - (uint)pbVar3[3];
      }
      uVar1 = iVar2 >> 0x1f | 1;
      goto LAB_00f5b3d6;
    }
    uVar1 = uVar1 - 4;
    pbVar3 = pbVar3 + 4;
    param_1 = param_1 + 4;
  } while (3 < uVar1);
  uVar1 = 0;
LAB_00f5b3d6:
  __security_check_cookie(local_4 ^ (uint)local_64,uVar1 == 0);
  return;
}

// 00F5B460  FUN_00f5b460  size=78  [run]
undefined4 FUN_00f5b460(void)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = FUN_00dec4d0(&local_4,"shadereff.dat",&DAT_01b7f3f0,0x1000,0);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016e1bd0);
    return 0;
  }
  FUN_00de3540(local_4,0);
  return 1;
}

// 00F5B4B0  FUN_00f5b4b0  size=47  [run]
void FUN_00f5b4b0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00de3560();
  if (iVar1 != 0) {
    uVar3 = 0;
    uVar2 = FUN_00de3580(0);
    FUN_00dd3d90(uVar2,uVar3);
    FUN_00de3540(0,0);
  }
  return;
}


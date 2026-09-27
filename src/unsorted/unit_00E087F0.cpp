// src/unsorted/unit_00E087F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E087F0..00E08F50, 7 functions

#include "types.h"

// 00E087F0  FUN_00e087f0  size=503  [run]
void __fastcall FUN_00e087f0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  float local_c;
  
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x3c);
  fVar5 = *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x7c);
  *(float *)(param_1 + 0x48) = fVar5 * *(float *)(param_1 + 0x40);
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x4c);
  fVar5 = *(float *)(param_1 + 0x4c) * fVar5;
  *(float *)(param_1 + 0x58) = fVar5 * *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 100) = *(float *)(param_1 + 0x5c);
  fVar5 = *(float *)(param_1 + 0x5c) * fVar5;
  *(float *)(param_1 + 0x68) = fVar5 * *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x74) = *(float *)(param_1 + 0x6c);
  *(float *)(param_1 + 0x78) = *(float *)(param_1 + 0x6c) * fVar5 * *(float *)(param_1 + 0x70);
  iVar7 = FUN_00e143a0();
  while (iVar7 != 0) {
    if (*(int *)(param_1 + 0x38) != 0) {
      *(int *)(*(int *)(param_1 + 0x38) + 0x28) = iVar7;
      *(undefined4 *)(iVar7 + 0x2c) = *(undefined4 *)(param_1 + 0x38);
    }
    *(int *)(param_1 + 0x38) = iVar7;
    iVar7 = FUN_00e143a0();
  }
  uVar2 = *(uint *)(param_1 + 0x38);
  while (uVar6 = uVar2, uVar6 != 0) {
    puVar1 = (uint *)(uVar6 + 0x2c);
    uVar2 = *puVar1;
    if (*(int *)(uVar6 + 8) < 1) {
      if (*(int *)(uVar6 + 0x28) == 0) {
        *(uint *)(param_1 + 0x38) = *puVar1;
      }
      else {
        *(uint *)(*(int *)(uVar6 + 0x28) + 0x2c) = *puVar1;
      }
      if (*puVar1 != 0) {
        *(undefined4 *)(*puVar1 + 0x28) = *(undefined4 *)(uVar6 + 0x28);
      }
      *(undefined4 *)(uVar6 + 0x28) = 0;
      *puVar1 = 0;
      uVar3 = *(uint *)(param_1 + 0x18);
      if (((uVar3 != 0) && (uVar3 <= uVar6)) && (uVar6 < *(int *)(param_1 + 0x1c) * 0x34 + uVar3)) {
        puVar1 = (uint *)(param_1 + 8);
        do {
          uVar4 = *puVar1;
          *(uint *)(uVar6 + 0x30) = uVar4;
          LOCK();
          uVar3 = *puVar1;
          if (uVar4 == uVar3) {
            *puVar1 = uVar6;
          }
          UNLOCK();
        } while (uVar4 != uVar3);
        InterlockedIncrement((LONG *)(param_1 + 0x10));
      }
    }
    else {
      if (*(int *)(uVar6 + 0x1c) != 0) {
        if (*(int *)(uVar6 + 0x24) < 1) {
          *(int *)(uVar6 + 0x20) = *(int *)(uVar6 + 0x20) + -1;
          if (*(int *)(uVar6 + 0x20) < 1) {
            *(undefined4 *)(uVar6 + 0x14) = 0x3f800000;
            *(undefined4 *)(uVar6 + 0x20) = 0;
            *(undefined4 *)(uVar6 + 0x1c) = 0;
          }
          *(undefined4 *)(uVar6 + 0x10) = *(undefined4 *)(uVar6 + 0x14);
        }
        else {
          *(undefined4 *)(uVar6 + 0x10) = 0x3f800000;
          *(int *)(uVar6 + 0x24) = *(int *)(uVar6 + 0x24) + -1;
        }
      }
      if (DAT_01dd9160 == 0) {
        FUN_00dd5650(&DAT_016cc124);
      }
      else {
        if (*(int *)(uVar6 + 4) < 4) {
          local_c = *(float *)(DAT_01dd9160 + 0x48 + *(int *)(uVar6 + 4) * 0x10);
        }
        else {
          local_c = 1.0;
        }
        *(float *)(uVar6 + 0x18) = *(float *)(uVar6 + 0x10) * *(float *)(uVar6 + 0xc) * local_c;
      }
    }
  }
  return;
}

// 00E08BE0  FUN_00e08be0  size=134  [run]
/* WARNING: Removing unreachable block (ram,0x00e08c2e) */
/* WARNING: Removing unreachable block (ram,0x00e08c30) */

void __fastcall FUN_00e08be0(int param_1)

{
  char cVar1;
  char *pcVar2;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  _sprintf_s(local_14,0x10,"%d");
  pcVar2 = local_14;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
  }
  FUN_00e173a0();
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

// 00E08C70  FUN_00e08c70  size=134  [run]
/* WARNING: Removing unreachable block (ram,0x00e08cbe) */
/* WARNING: Removing unreachable block (ram,0x00e08cc0) */

void __fastcall FUN_00e08c70(int param_1)

{
  char cVar1;
  char *pcVar2;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  _sprintf_s(local_14,0x10,"%u");
  pcVar2 = local_14;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
  }
  FUN_00e173a0();
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

// 00E08D00  FUN_00e08d00  size=134  [run]
/* WARNING: Removing unreachable block (ram,0x00e08d4e) */
/* WARNING: Removing unreachable block (ram,0x00e08d50) */

void __fastcall FUN_00e08d00(int param_1)

{
  char cVar1;
  char *pcVar2;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  _sprintf_s(local_14,0x10,"%x");
  pcVar2 = local_14;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
  }
  FUN_00e173a0();
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

// 00E08D90  FUN_00e08d90  size=137  [run]
/* WARNING: Removing unreachable block (ram,0x00e08de3) */

void __fastcall FUN_00e08d90(int param_1)

{
  char cVar1;
  char *pcVar2;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  _sprintf_s(local_14,0x10,"%f");
  pcVar2 = local_14;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
  }
  FUN_00e173a0();
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}

// 00E08F20  FUN_00e08f20  size=47  [run]
int __thiscall FUN_00e08f20(int param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = param_2;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_00e173a0(*(undefined4 *)(param_1 + 8),param_2,pcVar2);
  return param_1;
}

// 00E08F50  FUN_00e08f50  size=96  [run]
/* WARNING: Removing unreachable block (ram,0x00e08f85) */

void __thiscall FUN_00e08f50(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00e04440();
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = FUN_00e04370(" =/?!>\"");
  if (*(int *)(param_2 + 0x1c) != *(int *)(param_2 + 0x20)) {
    *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x1c);
  }
  FUN_00e173a0(*(undefined4 *)(param_2 + 0x1c),uVar1,uVar2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  return;
}


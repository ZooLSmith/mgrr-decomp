// src/unsorted/unit_00CC13B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC13B0..00CC16A0, 5 functions

#include "mgrr.h"

// 00CC13B0  FUN_00cc13b0  size=62  [run]
void __thiscall FUN_00cc13b0(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xf0) = *param_2;
  if ((float)param_2[0x3c] != 0.0) {
    *(undefined4 *)(param_1 + 0xf4) = param_2[0x3c];
  }
  *(undefined4 *)(param_1 + 0xf8) = param_2[7];
  *(undefined4 *)(param_1 + 0xfc) = param_2[6];
  return;
}

// 00CC13F0  FUN_00cc13f0  size=186  [run]
float10 FUN_00cc13f0(int param_1,uint param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  float local_10;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 8) {
      local_10 = (float)piVar1[1];
      goto LAB_00cc1444;
    }
  }
  local_10 = 0.0;
LAB_00cc1444:
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (param_2 < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 8) {
      return ((float10)(float)piVar1[3] + (float10)(float)piVar1[3] + (float10)param_3) /
             (float10)local_10;
    }
  }
  return ((float10)0 + (float10)0 + (float10)param_3) / (float10)local_10;
}

// 00CC14B0  FUN_00cc14b0  size=55  [run]
int FUN_00cc14b0(uint param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar2 = 0;
  if (param_1 < 3) {
    bVar1 = (byte)param_1 & 0x1f;
    uVar4 = 1 << bVar1 | 1U >> 0x20 - bVar1;
    piVar3 = (int *)(&DAT_016b7748 + param_1 * 4);
    do {
      if ((param_2 & uVar4) == 0) {
        iVar2 = iVar2 + *piVar3;
      }
      piVar3 = piVar3 + 1;
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    } while ((int)piVar3 < 0x16b7754);
  }
  return iVar2;
}

// 00CC14F0  FUN_00cc14f0  size=422  [run]
void __fastcall FUN_00cc14f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x358);
  do {
    if (*(int *)(param_1 + 0x354) == 0) break;
    if ((*piVar2 != -1) && (*(float *)(param_1 + 0x2fc) < (float)*piVar2 * 0.016666668)) {
      *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x36c + iVar1 * 4);
      break;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 5);
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 900);
  do {
    if (*(int *)(param_1 + 0x380) == 0) break;
    if ((*piVar2 != -1) && (*piVar2 <= *(int *)(param_1 + 0x300))) {
      *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x398 + iVar1 * 4);
      break;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 5);
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x3b0);
  do {
    if (*(int *)(param_1 + 0x3ac) == 0) break;
    if ((*piVar2 != -1) && (*piVar2 <= *(int *)(param_1 + 0x304))) {
      *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x3c4 + iVar1 * 4);
      break;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 5);
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x3dc);
  do {
    if (*(int *)(param_1 + 0x3d8) == 0) break;
    if ((*piVar2 != -1) && (*piVar2 <= *(int *)(param_1 + 0x308))) {
      *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x3f0 + iVar1 * 4);
      break;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 5);
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x408);
  do {
    if (*(int *)(param_1 + 0x404) == 0) break;
    if ((*piVar2 != -1) && (*piVar2 <= *(int *)(param_1 + 0x30c))) {
      *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0x41c + iVar1 * 4);
      break;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 5);
  if ((*(int *)(param_1 + 0x334) != 0) && (iVar1 = *(int *)(param_1 + 0x430), iVar1 != -1)) {
    *(int *)(param_1 + 0x324) = iVar1;
    *(uint *)(param_1 + 0x340) = (uint)(0 < iVar1);
  }
  if (((*(int *)(param_1 + 0x338) == 0) && (*(int *)(param_1 + 0x33c) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x434), iVar1 != -1)) {
    *(int *)(param_1 + 0x32c) = iVar1;
    *(uint *)(param_1 + 0x344) = (uint)(0 < iVar1);
  }
  return;
}

// 00CC16A0  FUN_00cc16a0  size=112  [run]
void __fastcall FUN_00cc16a0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)FUN_00c1b9a0();
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xac))();
  *(undefined4 *)(param_1 + 0x1cc) = *puVar2;
  *(undefined4 *)(param_1 + 0x2fc) = puVar2[1];
  *(undefined4 *)(param_1 + 0x300) = puVar2[2];
  *(undefined4 *)(param_1 + 0x304) = puVar2[3];
  *(undefined4 *)(param_1 + 0x308) = puVar2[4];
  *(undefined4 *)(param_1 + 0x30c) = puVar2[5];
  *(uint *)(param_1 + 0x334) = (uint)(puVar2[6] == 0);
  *(undefined4 *)(param_1 + 0x338) = puVar2[7];
  *(uint *)(param_1 + 0x33c) = (uint)(0 < (int)puVar2[8]);
  return;
}


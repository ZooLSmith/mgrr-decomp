// src/unsorted/unit_00485560.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00485560..00485690, 3 functions

#include "mgrr.h"

// 00485560  FUN_00485560  size=65  [run]
void __fastcall FUN_00485560(byte *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 & 4) == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c8a0();
      FUN_00cbbb50(uVar2);
      *param_1 = *param_1 | 4;
      param_1[8] = 0xff;
      return;
    }
    FUN_00cbbb50(0);
    *param_1 = *param_1 | 4;
    param_1[8] = 0xff;
  }
  return;
}

// 004855B0  FUN_004855b0  size=199  [run]
void __fastcall FUN_004855b0(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = FUN_00a81330();
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00a7c8a0();
  }
  if ((((*(int *)(iVar5 + 0x2258) != 0) && (*(int *)(iVar5 + 0x225c) != 0)) &&
      (fVar2 = *(float *)(iVar5 + 0x40) - *(float *)(iVar5 + 0x2270),
      fVar4 = *(float *)(iVar5 + 0x44) - *(float *)(iVar5 + 0x2274),
      fVar3 = *(float *)(iVar5 + 0x48) - *(float *)(iVar5 + 0x2278),
      fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3),
      *(float *)(param_1 + 0x48) < fVar2)) && (fVar2 < *(float *)(param_1 + 0x4c))) {
    *(undefined2 *)(param_1 + 8) = 2;
    return;
  }
  cVar1 = *(char *)(param_1 + 9);
  switch(cVar1) {
  case '\0':
    *(undefined4 *)(param_1 + 0xc) = 0x42700000;
    *(char *)(param_1 + 9) = cVar1 + '\x01';
  case '\x01':
    fVar2 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0xc) = fVar2;
    if (fVar2 < 0.0) {
      *(char *)(param_1 + 9) = *(char *)(param_1 + 9) + '\x01';
      return;
    }
    break;
  case '\x02':
    *(char *)(param_1 + 9) = cVar1 + '\x01';
  case '\x03':
    *(undefined2 *)(param_1 + 8) = 0;
  }
  return;
}

// 00485690  FUN_00485690  size=196  [run]
/* WARNING: Removing unreachable block (ram,0x004856ee) */

undefined4 FUN_00485690(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_24;
  undefined1 local_20 [28];
  
  iVar4 = 0;
  iVar1 = FUN_00907640(param_1,&local_24,local_20);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = 1;
  FUN_0112bcf0();
  if (0 < *(int *)(local_24 + 0x14)) {
    iVar1 = *(int *)(*(int *)(local_24 + 0x10) + 0x28);
    iVar2 = 0;
    if (*(char *)(iVar1 + 0x18) == '\x01') {
      iVar2 = *(char *)(iVar1 + 0x10) + iVar1;
    }
    if (*(char *)(iVar1 + 0x18) == '\x02') {
      if (*(char *)(iVar1 + 0x18) == '\x02') {
        iVar4 = *(char *)(iVar1 + 0x10) + iVar1;
      }
      else {
        iVar4 = 0;
      }
    }
    if (((iVar2 != 0) && (iVar1 = FUN_008f7780(iVar2), uVar3 = 1, param_2 != 0)) &&
       (iVar1 == param_2)) {
      uVar3 = 0;
    }
    if (((iVar4 != 0) && (iVar1 = FUN_008f7780(iVar4), param_2 != 0)) && (iVar1 == param_2)) {
      return 0;
    }
  }
  return uVar3;
}


// src/unsorted/unit_00AA1A10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA1A10..00AA1BA0, 2 functions

#include "mgrr.h"

// 00AA1A10  FUN_00aa1a10  size=291  [run]
void __fastcall FUN_00aa1a10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  int iVar4;
  float10 fVar5;
  int iStack_10;
  int local_4;
  
  iStack_10 = 0;
  (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(&local_4);
  if (unaff_EDI != 0) {
    iVar1 = FUN_009165d0();
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x14))) {
      FUN_0112bcf0();
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 0x14)) {
        iVar4 = 0;
        do {
          iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 0x28 + iVar4);
          iVar2 = FUN_008f7780(*(char *)(iVar2 + 0x10) + iVar2);
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0x4b0) != 0x700000)) {
            uRam00000660 = 0;
            uRam00000664 = 0;
            if (iRam00000884 == 0) {
              uRam00000660 = 0;
              uRam00000664 = 0;
              return;
            }
            FUN_0092ba60(0,4);
            return;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x30;
          param_1 = iStack_10;
        } while (iVar3 < *(int *)(iVar1 + 0x14));
      }
    }
    if (local_4 != 0) {
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c910();
      }
      fVar5 = (float10)FUN_00e049b0();
      fVar5 = (float10)*(float *)(param_1 + 0x9f0) - fVar5;
      *(float *)(param_1 + 0x9f0) = (float)fVar5;
      if (fVar5 < (float10)0) {
        *(undefined4 *)(param_1 + 0x660) = 0;
        *(undefined4 *)(param_1 + 0x664) = 0;
        if (*(int *)(param_1 + 0x884) != 0) {
          FUN_0092ba60(0,4);
        }
      }
    }
  }
  return;
}

// 00AA1BA0  FUN_00aa1ba0  size=176  [run]
int __thiscall FUN_00aa1ba0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_90 [35];
  
  FUN_00a7c950();
  if (((*(byte *)(param_1 + 0x4c0) & 2) != 0) &&
     ((*(int *)(param_1 + 0x330) == 0 || (*(int *)(*(int *)(param_1 + 0x330) + 0xcc) == 0)))) {
    FUN_0040b190();
    local_90[0] = *(undefined4 *)(param_1 + 0x4a0);
    iVar1 = FUN_00a99fd0(*(undefined4 *)(param_1 + 0x4f0),param_2,local_90,param_3);
    if (iVar1 != 0) {
      FUN_009fd240();
      uVar2 = FUN_009f8b40();
      FUN_009f8ae0(uVar2);
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
    }
    return iVar1;
  }
  return 0;
}


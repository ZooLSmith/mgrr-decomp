// src/unsorted/unit_00A19A90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A19A90..00A19D10, 6 functions

#include "types.h"

// 00A19A90  FUN_00a19a90  size=323  [run]
void FUN_00a19a90(uint param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (DAT_01b7b4e8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b7b4d0);
  }
  iVar3 = DAT_01b7b390;
  iVar6 = 0;
  uVar5 = DAT_01b7b394;
  if (0 < DAT_01b7b390) {
    do {
      if (uVar5 == 0) break;
      puVar1 = (uint *)(uVar5 + 0x1d0);
      uVar2 = *puVar1;
      if ((param_1 <= *(uint *)(uVar5 + 0x1c8)) && (*(uint *)(uVar5 + 0x1c8) < param_1 + param_2)) {
        uVar4 = uVar2;
        if (*(int *)(uVar5 + 0x1cc) != 0) {
          *(uint *)(*(int *)(uVar5 + 0x1cc) + 0x1d0) = uVar2;
          uVar4 = DAT_01b7b394;
        }
        DAT_01b7b394 = uVar4;
        if (*puVar1 != 0) {
          *(undefined4 *)(*puVar1 + 0x1cc) = *(undefined4 *)(uVar5 + 0x1cc);
        }
        *(undefined4 *)(uVar5 + 0x1c8) = 0;
        *(undefined4 *)(uVar5 + 0x1cc) = 0;
        *puVar1 = 0;
        DAT_01b7b390 = DAT_01b7b390 + -1;
        *(undefined4 *)(uVar5 + 0xf0) = 0;
        *(undefined4 *)(uVar5 + 0xf4) = 0;
        *(undefined4 *)(uVar5 + 0xf8) = 0;
        *(undefined4 *)(uVar5 + 0xfc) = 0;
        *(undefined4 *)(uVar5 + 0x100) = 0;
        FUN_00a06cd0();
        cModelDataResource::release();
        FUN_00a14400(&DAT_01b7b398,uVar5);
        if (((DAT_0189ef28 != 0) && (DAT_0189ef28 <= uVar5)) &&
           (uVar5 < DAT_0189ef2c * 0x1f0 + DAT_0189ef28)) {
          FUN_00a19870(0);
          FUN_00a0cf50(uVar5);
        }
      }
      iVar6 = iVar6 + 1;
      uVar5 = uVar2;
    } while (iVar6 < iVar3);
  }
  if (DAT_01b7b4e8 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b7b4d0);
  }
  return;
}

// 00A19BE0  FUN_00a19be0  size=17  [run]
void __fastcall FUN_00a19be0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00A19C00  FUN_00a19c00  size=39  [run]
void __fastcall FUN_00a19c00(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    FUN_00dd4940(param_1[1]);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00A19C30  FUN_00a19c30  size=164  [run]
undefined4 __thiscall FUN_00a19c30(uint *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  if ((param_2 & 0xf) != 0) {
    if (param_3 < 0x10) {
      param_1[3] = param_3;
      uVar1 = FUN_00dd3580(param_3,param_4);
      param_1[1] = uVar1;
      if (uVar1 != 0) goto LAB_00a19cc7;
    }
    else {
      uVar1 = 0x10 - (param_2 & 0xf);
      param_1[3] = uVar1;
      uVar1 = FUN_00dd3580(uVar1,param_4);
      param_1[1] = uVar1;
      if (uVar1 != 0) {
        param_1[4] = param_3 - param_1[3];
        *param_1 = param_2;
        param_1[2] = param_1[3] + param_2;
        return 1;
      }
    }
    return 0;
  }
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[4] = param_3;
LAB_00a19cc7:
  *param_1 = param_2;
  return 1;
}

// 00A19CE0  FUN_00a19ce0  size=24  [run]
void __fastcall FUN_00a19ce0(undefined4 *param_1)

{
  if (param_1[3] != 0) {
    FID_conflict__memcpy((void *)*param_1,(void *)param_1[1],param_1[3]);
  }
  return;
}

// 00A19D10  FUN_00a19d10  size=78  [run]
void FUN_00a19d10(int param_1,short param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  
  iVar1 = *(int *)(param_1 + 0x54);
  iVar2 = 0;
  if (0 < iVar1) {
    psVar3 = *(short **)(param_1 + 0x50);
    do {
      if (*psVar3 == param_2) {
        return;
      }
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar2 < iVar1);
  }
  if (iVar1 <= iVar2) {
    if (*(int *)(param_1 + 0x58) <= iVar1) {
      FUN_00dd5650(&DAT_0165cb1c,iVar1,*(int *)(param_1 + 0x58));
    }
    *(short *)(*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x54) * 2) = param_2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  return;
}


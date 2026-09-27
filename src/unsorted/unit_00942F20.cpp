// src/unsorted/unit_00942F20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00942F20..00943400, 4 functions

#include "mgrr.h"

// 00942F20  FUN_00942f20  size=365  [run]
void __fastcall FUN_00942f20(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  int local_8;
  
  puVar6 = (undefined4 *)(param_1 + 0x98);
  local_8 = 0xc;
  do {
    if (puVar6[0x12] != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(puVar6 + 0xc));
    }
    iVar5 = *(int *)(puVar6[-0x12] + 4);
    iVar1 = iVar5 + *(int *)(puVar6[-0x12] + 8) * 0x28;
    for (; iVar5 != iVar1; iVar5 = iVar5 + 0x28) {
      if ((((*(int *)(iVar5 + 8) != 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
          (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) &&
         (((((iVar4 = FUN_00d467a0(), iVar4 != 0 && (*(int *)(iVar2 + 0x24) == 0x42131)) ||
            ((iVar2 = *(int *)(iVar2 + 0x24), iVar2 == 0x42000 ||
             ((iVar2 == 0x42005 || (iVar2 == 0x42070)))))) || (iVar2 == 0x42300)) ||
          (((iVar2 == 0x42380 || (iVar2 == 0x42220)) || (iVar2 == 0x423a0)))))) {
        puVar7 = &DAT_01b35300;
        (**(code **)(*piVar3 + 4))(&DAT_01b35300);
        iVar2 = FUN_00dd6d80(puVar7);
        if (iVar2 != 0) {
          thunk_FUN_009fdde0();
        }
      }
    }
    if (*(int *)(puVar6[-0x12] + 4) != 0) {
      *(undefined4 *)(puVar6[-0x12] + 8) = 0;
    }
    puVar6[-0x10] = 0xbf800000;
    puVar6[-0x11] = 0xffffffff;
    puVar6[-0xf] = 0x10010;
    puVar6[-0xd] = 0;
    puVar6[-0xe] = 0;
    puVar6[-0xc] = 0;
    puVar6[-0xb] = 0;
    puVar6[-10] = 0;
    puVar6[-8] = 0x447a0000;
    puVar6[-9] = 0;
    puVar6[6] = 0;
    puVar6[-7] = 0xbf800000;
    puVar6[-6] = 0xbf800000;
    puVar6[-2] = 0;
    puVar6[-1] = 0;
    *puVar6 = 0;
    puVar6[1] = 0x3f800000;
    puVar6[4] = 0xffffffff;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    if (puVar6[0x12] != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(puVar6 + 0xc));
    }
    puVar6 = puVar6 + 0x2c;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

// 00943090  FUN_00943090  size=391  [run]
void __thiscall FUN_00943090(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int local_8;
  
  puVar7 = (undefined4 *)(param_1 + 0x98);
  local_8 = 0xc;
  do {
    if (puVar7[-0x11] == param_2) {
      if (puVar7[0x12] != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(puVar7 + 0xc));
      }
      iVar6 = puVar7[-0x12];
      iVar1 = *(int *)(iVar6 + 8);
      iVar2 = *(int *)(iVar6 + 4);
      for (iVar6 = *(int *)(iVar6 + 4); iVar6 != iVar2 + iVar1 * 0x28; iVar6 = iVar6 + 0x28) {
        if ((((*(int *)(iVar6 + 8) != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
            (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) &&
           (((((iVar5 = FUN_00d467a0(), iVar5 != 0 && (*(int *)(iVar3 + 0x24) == 0x42131)) ||
              ((iVar3 = *(int *)(iVar3 + 0x24), iVar3 == 0x42000 ||
               ((iVar3 == 0x42005 || (iVar3 == 0x42070)))))) || (iVar3 == 0x42300)) ||
            (((iVar3 == 0x42380 || (iVar3 == 0x42220)) || (iVar3 == 0x423a0)))))) {
          puVar8 = &DAT_01b35300;
          (**(code **)(*piVar4 + 4))(&DAT_01b35300);
          iVar3 = FUN_00dd6d80(puVar8);
          if (iVar3 != 0) {
            thunk_FUN_009fdde0();
          }
        }
      }
      if (*(int *)(puVar7[-0x12] + 4) != 0) {
        *(undefined4 *)(puVar7[-0x12] + 8) = 0;
      }
      puVar7[-0x10] = 0xbf800000;
      puVar7[-0x11] = 0xffffffff;
      puVar7[-0xf] = 0x10010;
      puVar7[-0xd] = 0;
      puVar7[-0xe] = 0;
      puVar7[-0xc] = 0;
      puVar7[-0xb] = 0;
      puVar7[-10] = 0;
      puVar7[-8] = 0x447a0000;
      puVar7[-9] = 0;
      puVar7[6] = 0;
      puVar7[-7] = 0xbf800000;
      puVar7[-6] = 0xbf800000;
      puVar7[-2] = 0;
      puVar7[-1] = 0;
      *puVar7 = 0;
      puVar7[1] = 0x3f800000;
      puVar7[4] = 0xffffffff;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      if (puVar7[0x12] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(puVar7 + 0xc));
      }
    }
    puVar7 = puVar7 + 0x2c;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

// 009432A0  FUN_009432a0  size=129  [run]
undefined4 __thiscall FUN_009432a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_4;
  
  piVar3 = (int *)(param_1 + 0x50);
  local_4 = 0xc;
  do {
    if (piVar3[1] == param_3) {
      iVar4 = *(int *)(*piVar3 + 4);
      iVar1 = iVar4 + *(int *)(*piVar3 + 8) * 0x28;
      for (; iVar4 != iVar1; iVar4 = iVar4 + 0x28) {
        iVar2 = FUN_00a81330();
        if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
           (*(int *)(param_2 + 0xc) < *(int *)(param_2 + 8))) {
          if (*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc) * 4 != 0) {
            FUN_00a7c940(iVar4);
          }
          *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
        }
      }
    }
    piVar3 = piVar3 + 0x2c;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return 1;
}

// 00943400  FUN_00943400  size=184  [run]
void __fastcall FUN_00943400(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_20 [28];
  
  if ((0.0 < *(float *)(param_1 + 0x80)) &&
     (fVar2 = *(float *)(param_1 + 0x80) - 1.0, *(float *)(param_1 + 0x80) = fVar2, fVar2 < 0.0)) {
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  FUN_00941e50();
  if ((*(int *)(param_1 + 0x6c) != 0) && (10 < *(uint *)(*(int *)(param_1 + 0x10) + 8))) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    uVar4 = 5;
    uVar3 = DebrisHandleList::getExplosionPos(local_20);
    FUN_00cd1a40(uVar1,uVar3,uVar4);
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_0093ed00();
    return;
  }
  FUN_0093e8e0();
  FUN_00941f50();
  FUN_009422f0();
  FUN_0093eb30();
  FUN_009423c0();
  FUN_0093fbb0();
  return;
}


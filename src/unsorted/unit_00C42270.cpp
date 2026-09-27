// src/unsorted/unit_00C42270.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C42270..00C42490, 6 functions

#include "mgrr.h"

// 00C42270  FUN_00c42270  size=143  [run]
void FUN_00c42270(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0x20;
  do {
    FUN_00c9de70(param_1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar1 = (int *)PTR_DAT_018aa07c;
  if (PTR_DAT_018aa07c != PTR_DAT_018aa07c + DAT_018aa080 * 4) {
    while (*(int *)(*piVar1 + 0x4e0) != param_1) {
      piVar1 = piVar1 + 1;
      if (piVar1 == (int *)(PTR_DAT_018aa07c + DAT_018aa080 * 4)) {
        return;
      }
    }
    if (((*(int *)(*piVar1 + 0x4f0) != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (uVar2 = 0, DAT_01c78c58 != 0)) {
      do {
        FUN_00c15ea0(param_1,iVar3);
        uVar2 = uVar2 + 1;
      } while (uVar2 < DAT_01c78c58);
    }
  }
  return;
}

// 00C42300  FUN_00c42300  size=72  [run]
void FUN_00c42300(undefined4 param_1)

{
  undefined4 uVar1;
  char local_100 [256];
  
  _sprintf_s(local_100,0x100,"_ChainBreak.bxm",param_1);
  uVar1 = FUN_00de4550(local_100,0);
  cXmlBinary::cXmlBinary_66(uVar1);
  return;
}

// 00C42350  FUN_00c42350  size=20  [run]
int __fastcall FUN_00c42350(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00c2b480();
  return param_1;
}

// 00C423B0  FUN_00c423b0  size=1  [run]
void FUN_00c423b0(void)

{
  return;
}

// 00C423C0  FUN_00c423c0  size=196  [run]
void __thiscall FUN_00c423c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_8;
  int local_4;
  
  local_4 = 8;
  do {
    if ((*param_1 != 0) && (param_1[2] == param_2)) {
      local_8 = 0;
      if (param_1[1] != 0) {
        iVar3 = 0;
        do {
          iVar1 = param_1[3];
          *(undefined4 *)(iVar1 + 0x14 + iVar3) = 0;
          iVar2 = *(int *)(iVar1 + 4 + iVar3);
          *(undefined4 *)(iVar1 + 0x18 + iVar3) = 0;
          puVar4 = (undefined4 *)(iVar1 + iVar3);
          *puVar4 = 0;
          puVar4[2] = 0;
          puVar4[4] = 0;
          if (iVar2 != 0) {
            FUN_00dd4940(iVar2);
            puVar4[1] = 0;
          }
          if (puVar4[3] != 0) {
            FUN_00dd4940(puVar4[3]);
            puVar4[3] = 0;
          }
          local_8 = local_8 + 1;
          iVar3 = iVar3 + 0x1c;
        } while (local_8 < (uint)param_1[1]);
      }
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = -1;
      if (param_1[3] != 0) {
        FUN_00dd4940(param_1[3]);
        param_1[3] = 0;
      }
    }
    param_1 = param_1 + 4;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 00C42490  FUN_00c42490  size=532  [run]
void __thiscall FUN_00c42490(int param_1,uint param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  
  if (param_2 != 0) {
    uVar3 = FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 0x80 >> 0x20) != 0) |
                         (uint)((ulonglong)param_2 * 0x80),&DAT_01b7bd48);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(uint *)(param_1 + 8) = param_2;
    if (param_2 != 0) {
      iVar7 = 0;
      iVar5 = (int)param_4 - param_3;
      pfVar6 = (float *)(param_3 + 8);
      do {
        FUN_00964e70();
        iVar4 = *(int *)(param_1 + 0xc);
        *(float *)(iVar4 + 0x10 + iVar7) = pfVar6[-2];
        iVar4 = iVar4 + 0x10 + iVar7;
        *(float *)(iVar4 + 4) = pfVar6[-1];
        *(float *)(iVar4 + 8) = *pfVar6;
        *(undefined4 *)(iVar4 + 0xc) = 0x3f800000;
        *(float *)(*(int *)(param_1 + 0xc) + 0x60 + iVar7) =
             *(float *)((int)pfVar6 + iVar5 + -4) * 0.5 + pfVar6[-1];
        *(float *)(*(int *)(param_1 + 0xc) + 100 + iVar7) =
             pfVar6[-1] - *(float *)((int)pfVar6 + iVar5 + -4) * 0.5;
        fVar1 = *(float *)(iVar5 + (int)pfVar6);
        iVar4 = *(int *)(param_1 + 0xc) + iVar7;
        fVar2 = *pfVar6;
        *(float *)(iVar4 + 0x40) = pfVar6[-2] - *param_4 * 0.5;
        *(float *)(iVar4 + 0x44) = fVar2 - fVar1 * 0.5;
        *(float *)(iVar4 + 0x68) = *(float *)(iVar4 + 0x48) - *(float *)(iVar4 + 0x40);
        *(float *)(iVar4 + 0x6c) = *(float *)(iVar4 + 0x4c) - *(float *)(iVar4 + 0x44);
        *(float *)(iVar4 + 0x70) = *(float *)(iVar4 + 0x58) - *(float *)(iVar4 + 0x40);
        *(float *)(iVar4 + 0x74) = *(float *)(iVar4 + 0x5c) - *(float *)(iVar4 + 0x44);
        *(float *)(iVar4 + 0x78) = *(float *)(iVar4 + 0x58) - *(float *)(iVar4 + 0x50);
        *(float *)(iVar4 + 0x7c) = *(float *)(iVar4 + 0x5c) - *(float *)(iVar4 + 0x54);
        fVar1 = *(float *)(iVar5 + (int)pfVar6);
        iVar4 = *(int *)(param_1 + 0xc) + iVar7;
        fVar2 = *pfVar6;
        *(float *)(iVar4 + 0x48) = *param_4 * 0.5 + pfVar6[-2];
        *(float *)(iVar4 + 0x4c) = fVar2 - fVar1 * 0.5;
        *(float *)(iVar4 + 0x68) = *(float *)(iVar4 + 0x48) - *(float *)(iVar4 + 0x40);
        *(float *)(iVar4 + 0x6c) = *(float *)(iVar4 + 0x4c) - *(float *)(iVar4 + 0x44);
        *(float *)(iVar4 + 0x70) = *(float *)(iVar4 + 0x58) - *(float *)(iVar4 + 0x40);
        *(float *)(iVar4 + 0x74) = *(float *)(iVar4 + 0x5c) - *(float *)(iVar4 + 0x44);
        *(float *)(iVar4 + 0x78) = *(float *)(iVar4 + 0x58) - *(float *)(iVar4 + 0x50);
        *(float *)(iVar4 + 0x7c) = *(float *)(iVar4 + 0x5c) - *(float *)(iVar4 + 0x54);
        fVar1 = *(float *)(iVar5 + (int)pfVar6);
        iVar4 = *(int *)(param_1 + 0xc) + iVar7;
        fVar2 = *pfVar6;
        *(float *)(iVar4 + 0x50) = *param_4 * 0.5 + pfVar6[-2];
        *(float *)(iVar4 + 0x54) = fVar1 * 0.5 + fVar2;
        *(float *)(iVar4 + 0x68) = *(float *)(iVar4 + 0x48) - *(float *)(iVar4 + 0x40);
        *(float *)(iVar4 + 0x6c) = *(float *)(iVar4 + 0x4c) - *(float *)(iVar4 + 0x44);
        *(float *)(iVar4 + 0x70) = *(float *)(iVar4 + 0x58) - *(float *)(iVar4 + 0x40);
        *(float *)(iVar4 + 0x74) = *(float *)(iVar4 + 0x5c) - *(float *)(iVar4 + 0x44);
        *(float *)(iVar4 + 0x78) = *(float *)(iVar4 + 0x58) - *(float *)(iVar4 + 0x50);
        *(float *)(iVar4 + 0x7c) = *(float *)(iVar4 + 0x5c) - *(float *)(iVar4 + 0x54);
        fVar1 = *(float *)(iVar5 + -0xc + (int)(pfVar6 + 3));
        iVar4 = *(int *)(param_1 + 0xc) + iVar7;
        iVar7 = iVar7 + 0x80;
        param_2 = param_2 - 1;
        fVar2 = *pfVar6;
        *(float *)(iVar4 + 0x58) = pfVar6[-2] - *param_4 * 0.5;
        *(float *)(iVar4 + 0x5c) = fVar1 * 0.5 + fVar2;
        *(float *)(iVar4 + 0x68) = *(float *)(iVar4 + 0x48) - *(float *)(iVar4 + 0x40);
        *(float *)(iVar4 + 0x6c) = *(float *)(iVar4 + 0x4c) - *(float *)(iVar4 + 0x44);
        *(float *)(iVar4 + 0x70) = *(float *)(iVar4 + 0x58) - *(float *)(iVar4 + 0x40);
        *(float *)(iVar4 + 0x74) = *(float *)(iVar4 + 0x5c) - *(float *)(iVar4 + 0x44);
        *(float *)(iVar4 + 0x78) = *(float *)(iVar4 + 0x58) - *(float *)(iVar4 + 0x50);
        *(float *)(iVar4 + 0x7c) = *(float *)(iVar4 + 0x5c) - *(float *)(iVar4 + 0x54);
        pfVar6 = pfVar6 + 3;
        param_4 = param_4 + 3;
      } while (param_2 != 0);
    }
  }
  return;
}


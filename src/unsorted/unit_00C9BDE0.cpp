// src/unsorted/unit_00C9BDE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C9BDE0..00C9C3E0, 6 functions

#include "mgrr.h"

// 00C9BDE0  FUN_00c9bde0  size=307  [run]
void __fastcall FUN_00c9bde0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x6f4) != 0) {
    FUN_00ebdd50(*(int *)(param_1 + 0x6f4));
    *(undefined4 *)(param_1 + 0x6f4) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00c90a60();
  FUN_00c84a70();
  iVar2 = DAT_01dbd1cc;
  if (DAT_01dbd1cc != 0) {
    piVar1 = (int *)(DAT_01dbd1cc + 4);
    if (*piVar1 != 0) {
      *(undefined4 *)(DAT_01dbd1cc + 0xc) = 0;
      if (*(int *)(iVar2 + 0x10) != 0) {
        FUN_00dd48d0(*piVar1,0);
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      *piVar1 = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    iVar2 = DAT_01dbd1cc;
    if (DAT_01dbd1cc != 0) {
      piVar1 = (int *)(DAT_01dbd1cc + 4);
      if (*piVar1 != 0) {
        *(undefined4 *)(DAT_01dbd1cc + 0xc) = 0;
        if (*(int *)(iVar2 + 0x10) != 0) {
          FUN_00dd48d0(*piVar1,0);
          *(undefined4 *)(iVar2 + 0x10) = 0;
        }
        *piVar1 = 0;
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      FUN_00dd4920(iVar2);
      DAT_01dbd1cc = 0;
    }
  }
  FUN_00c95690();
  FUN_00c845e0();
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x2c),0);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_00c84a70();
  FUN_00c90500();
  return;
}

// 00C9BF20  FUN_00c9bf20  size=146  [run]
void __fastcall FUN_00c9bf20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6f4) != 0) {
    FUN_00ebdd50(*(int *)(param_1 + 0x6f4));
    *(undefined4 *)(param_1 + 0x6f4) = 0;
  }
  iVar1 = FUN_00c91130(param_1 + 0x14,*(undefined4 *)(param_1 + 0x6f0));
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b17e8);
  }
  iVar1 = FUN_00c91130(param_1 + 0x28,*(undefined4 *)(param_1 + 0x6f0));
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b17a4);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00c90a60();
  FUN_00c84a70();
  *(undefined4 *)(param_1 + 0x3c) = DAT_018ab9a0;
  FUN_00c84a70();
  return;
}

// 00C9BFC0  FUN_00c9bfc0  size=179  [run]
void __fastcall FUN_00c9bfc0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (((DAT_01bea070._2_1_ & 1) == 0) && (*(int *)(param_1 + 0x700) != 1)) {
    FUN_00c849f0();
    if (DAT_01dbd1d0 != 0) {
      *(undefined4 *)(DAT_01dbd1d8 + 4) = *(undefined4 *)(param_1 + 0x6f8);
      *(undefined4 *)(DAT_01dbd1d8 + 8) = *(undefined4 *)(param_1 + 0x6fc);
    }
    piVar3 = *(int **)(param_1 + 4);
    piVar1 = piVar3 + *(int *)(param_1 + 0xc);
    for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      iVar2 = *piVar3;
      if (iVar2 != 0) {
        if ((undefined4 *)(param_1 + 0x6f8) != (undefined4 *)0x0) {
          *(undefined4 *)(iVar2 + 0x34) = *(undefined4 *)(param_1 + 0x6f8);
          *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_1 + 0x6fc);
        }
        if (*(int *)(*piVar3 + 4) != 4) {
          if (*(int *)(*piVar3 + 8) == 0) {
            FUN_00c788d0();
          }
          else {
            FUN_00c789d0();
          }
        }
      }
    }
    FUN_00c95df0();
    FUN_00c775f0();
    return;
  }
  return;
}

// 00C9C080  FUN_00c9c080  size=463  [run]
undefined4 __thiscall FUN_00c9c080(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar5 = Trigger::cCondPhaseJump::cCondPhaseJump(param_2[5]);
  uVar6 = Trigger::cActCamera::cActCamera(param_2[6]);
  fVar2 = (float)param_2[4];
  iVar10 = param_2[2];
  if (iVar10 == 0) goto LAB_00c9c0f9;
  iVar7 = FUN_00fdc7b0(iVar10,0x26);
  if (iVar7 == iVar10) {
LAB_00c9c0e4:
    local_8 = 1;
  }
  else {
    iVar7 = FUN_00fdc7b0(iVar10,0x40);
    local_8 = 0;
    if (iVar7 == iVar10) goto LAB_00c9c0e4;
  }
  local_4 = FUN_00e03ea0(iVar10);
LAB_00c9c0f9:
  iVar10 = param_2[3];
  uVar11 = local_8;
  uVar8 = local_4;
  if (iVar10 != 0) {
    iVar7 = FUN_00fdc7b0(iVar10,0x26);
    if ((iVar7 == iVar10) || (iVar7 = FUN_00fdc7b0(iVar10,0x40), iVar7 == iVar10)) {
      uVar8 = FUN_00e03ea0(iVar10);
      uVar11 = 1;
    }
    else {
      uVar8 = FUN_00e03ea0(iVar10);
      uVar11 = 0;
    }
  }
  puVar9 = (undefined4 *)FUN_00dd3500(0x3c,PTR_DAT_018ab998);
  if (puVar9 == (undefined4 *)0x0) {
    return 0;
  }
  uVar3 = param_2[1];
  uVar4 = *param_2;
  puVar9[4] = fVar2 * 60.0;
  *puVar9 = uVar4;
  puVar9[5] = fVar2 * 60.0;
  puVar9[2] = uVar3;
  puVar9[0xb] = uVar5;
  puVar9[0xc] = uVar6;
  puVar9[1] = 0;
  puVar9[3] = 0;
  puVar9[10] = 0;
  puVar9[6] = local_8;
  puVar9[7] = local_4;
  puVar9[8] = uVar11;
  puVar9[9] = uVar8;
  if ((int *)puVar9[0xb] != (int *)0x0) {
    (**(code **)(*(int *)puVar9[0xb] + 4))();
  }
  if ((int *)puVar9[0xc] != (int *)0x0) {
    (**(code **)(*(int *)puVar9[0xc] + 8))();
  }
  puVar9[0xe] = 0xbf800000;
  puVar9[0xd] = 0xffffffff;
  if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x1c)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar9;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = puVar9;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  puVar9[1] = 1;
  if (((int *)puVar9[0xb] != (int *)0x0) &&
     (iVar10 = (**(code **)(*(int *)puVar9[0xb] + 0xc))(), iVar10 == 0)) {
    puVar9[1] = 4;
  }
  if ((int *)puVar9[0xc] != (int *)0x0) {
    (**(code **)(*(int *)puVar9[0xc] + 0x10))();
  }
  return 1;
}

// 00C9C2B0  FUN_00c9c2b0  size=301  [run]
void FUN_00c9c2b0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  
  puVar12 = param_1;
  if ((param_1 != (undefined4 *)0x0) && (param_1 = (undefined4 *)0x0, 0 < param_2)) {
    do {
      iVar3 = puVar12[8];
      piVar1 = puVar12 + 8;
      uVar8 = Trigger::cCondPhaseJump::cCondPhaseJump(piVar1);
      uVar9 = Trigger::cActCamera::cActCamera((int *)(iVar3 + (int)piVar1));
      fVar2 = (float)puVar12[6];
      puVar10 = (undefined4 *)FUN_00dd3500(0x3c,PTR_DAT_018ab998);
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)0x0;
      }
      else {
        uVar4 = puVar12[7];
        uVar5 = puVar12[1];
        uVar6 = *puVar12;
        puVar10[4] = fVar2 * 60.0;
        *puVar10 = uVar6;
        puVar10[2] = uVar5;
        puVar10[10] = uVar4;
        puVar10[1] = 0;
        puVar10[3] = 0;
        puVar10[0xb] = uVar8;
        puVar10[0xc] = uVar9;
        puVar10[6] = puVar12[2];
        puVar10[7] = puVar12[3];
        puVar10[8] = puVar12[4];
        uVar8 = puVar12[5];
        puVar10[5] = fVar2 * 60.0;
        puVar10[9] = uVar8;
      }
      iVar11 = FUN_00c84960(puVar10);
      if (iVar11 == 1) {
        cVar7 = FUN_00c91400(puVar10);
        if (cVar7 != '\x01') {
          if (puVar10 == (undefined4 *)0x0) {
            return;
          }
          FUN_00dd4920(puVar10);
          return;
        }
        puVar12 = (undefined4 *)((int)puVar12 + *(int *)(iVar3 + (int)piVar1) + *piVar1 + 0x20);
      }
      else {
        FUN_00dd5650(&DAT_016b182c,*puVar10);
        FUN_00dd4920(puVar10);
      }
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < param_2);
    return;
  }
  return;
}

// 00C9C3E0  FUN_00c9c3e0  size=287  [run]
void FUN_00c9c3e0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  
  puVar12 = param_1;
  param_1 = (undefined4 *)0x0;
  if (param_2 < 1) {
    return;
  }
  do {
    iVar3 = puVar12[8];
    piVar1 = puVar12 + 8;
    uVar8 = Trigger::cCondPhaseJump::cCondPhaseJump(piVar1);
    uVar9 = Trigger::cActCamera::cActCamera((int *)(iVar3 + (int)piVar1));
    fVar2 = (float)puVar12[6];
    puVar10 = (undefined4 *)FUN_00dd3500(0x3c,PTR_DAT_018ab998);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      uVar4 = puVar12[7];
      uVar5 = puVar12[1];
      uVar6 = *puVar12;
      puVar10[4] = fVar2 * 60.0;
      *puVar10 = uVar6;
      puVar10[2] = uVar5;
      puVar10[10] = uVar4;
      puVar10[1] = 0;
      puVar10[3] = 0;
      puVar10[0xb] = uVar8;
      puVar10[0xc] = uVar9;
      puVar10[6] = puVar12[2];
      puVar10[7] = puVar12[3];
      puVar10[8] = puVar12[4];
      uVar8 = puVar12[5];
      puVar10[5] = fVar2 * 60.0;
      puVar10[9] = uVar8;
    }
    iVar11 = FUN_00c84960(puVar10);
    if (iVar11 == 1) {
      cVar7 = FUN_00c91480(puVar10);
      if (cVar7 != '\x01') {
        if (puVar10 == (undefined4 *)0x0) {
          return;
        }
        FUN_00dd4920(puVar10);
        return;
      }
      puVar12 = (undefined4 *)((int)puVar12 + *(int *)(iVar3 + (int)piVar1) + *piVar1 + 0x20);
    }
    else {
      FUN_00dd5650(&DAT_016b182c,*puVar10);
      FUN_00dd4920(puVar10);
    }
    param_1 = (undefined4 *)((int)param_1 + 1);
  } while ((int)param_1 < param_2);
  return;
}


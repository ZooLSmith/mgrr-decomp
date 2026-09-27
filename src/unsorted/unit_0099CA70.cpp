// src/unsorted/unit_0099CA70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099CA70..0099CE90, 3 functions

#include "types.h"

// 0099CA70  FUN_0099ca70  size=960  [run]
void __fastcall FUN_0099ca70(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float local_14;
  float local_10 [2];
  float local_8 [2];
  
  uVar2 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x24));
  FUN_00d38a30(0x17,10,uVar2);
  uVar2 = FUN_00cb3300(*(undefined4 *)(param_1 + 0x24));
  FUN_00d38a30(0x17,0xb,uVar2);
  switch(*(undefined4 *)(param_1 + 0x1cc)) {
  case 0:
    iVar3 = FUN_00e03960();
    fVar1 = *(float *)(iVar3 + 0x7c) + *(float *)(param_1 + 0x1d4);
    *(float *)(param_1 + 0x1d4) = fVar1;
    if (100.0 < fVar1) {
      FUN_00ce4d70(0);
      *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
    }
    break;
  case 1:
    uVar2 = 0;
    goto LAB_0099cbdf;
  case 2:
    fVar1 = *(float *)(param_1 + 0x1d4) + 1.0;
    *(float *)(param_1 + 0x1d4) = fVar1;
    if (4.0 <= fVar1) {
      *(undefined4 *)(param_1 + 0x1d4) = 0;
      iVar3 = *(int *)(param_1 + 600 + *(int *)(param_1 + 0x254) * 4);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x30 + iVar3 * 4),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x160),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x164),1);
      FUN_0098ac10(iVar3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x160),0,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x164),0,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x168),0,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x16c),0,3);
      *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + 1;
    }
    if (*(int *)(param_1 + 0x1e8) <= *(int *)(param_1 + 0x254)) {
      *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
    }
    break;
  case 3:
    uVar2 = 1;
LAB_0099cbdf:
    iVar3 = FUN_00ce4dd0(uVar2);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
    }
    break;
  case 4:
    iVar3 = *(int *)(param_1 + 0x280);
    fVar1 = *(float *)(iVar3 + 0x74) + 0.1;
    if (1.0 <= fVar1) {
      *(undefined4 *)(param_1 + 0x1cc) = 5;
      fVar1 = 1.0;
    }
    if (iVar3 != 0) {
      *(float *)(iVar3 + 0x74) = fVar1;
      *(undefined4 *)(iVar3 + 0x78) = 1;
    }
  }
  iVar3 = *(int *)(param_1 + 0x1d0);
  if (iVar3 == 0) {
    if (1 < *(int *)(param_1 + 0x1cc)) {
      FUN_00ce4d40(*(undefined4 *)(param_1 + 0x24),1,1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x80),1);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x88),0,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x8c),0,3);
      *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
    }
  }
  else if (iVar3 == 1) {
    fVar4 = (float10)FUN_0098b0f0(5,0);
    FUN_00cb32a0(local_8,*(undefined4 *)(param_1 + 0x84));
    FUN_00cb3240(local_10,*(undefined4 *)(param_1 + 0x84));
    iVar3 = FUN_00ccde20(*(undefined4 *)(param_1 + 0x84));
    local_14 = ((local_8[0] + local_8[0] + (float)fVar4) / local_10[0]) / *(float *)(iVar3 + 0x18);
    iVar3 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x88));
    if (iVar3 == 0) {
      local_14 = 1.0;
      FUN_0098aa10(*(undefined4 *)(param_1 + 0x1dc));
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x90),1);
      *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
    }
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x84),local_14);
  }
  else if (iVar3 == 2) {
    fVar4 = (float10)FUN_0098b0f0(9,0);
    FUN_00cb32a0(local_10,*(undefined4 *)(param_1 + 0x94));
    FUN_00cb3240(local_8,*(undefined4 *)(param_1 + 0x94));
    iVar3 = FUN_00ccde20(*(undefined4 *)(param_1 + 0x94));
    local_14 = ((local_10[0] + local_10[0] + (float)fVar4) / local_8[0]) / *(float *)(iVar3 + 0x18);
    iVar3 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x98));
    if (iVar3 == 0) {
      local_14 = 1.0;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0xa0),1);
      *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
    }
    FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x94),local_14);
  }
  if ((4 < *(int *)(param_1 + 0x1cc)) && (2 < *(int *)(param_1 + 0x1d0))) {
    *(undefined4 *)(param_1 + 0x1c4) = 2;
  }
  return;
}

// 0099CE50  FUN_0099ce50  size=62  [run]
void __fastcall FUN_0099ce50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00999fa0();
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x1c8);
    return;
  }
  if (iVar1 == 2) {
    FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
  }
  return;
}

// 0099CE90  FUN_0099ce90  size=305  [run]
void __fastcall FUN_0099ce90(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  float local_18;
  float local_10 [2];
  float local_8 [2];
  
  local_18 = 1.0;
  iVar2 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x98));
  if (iVar2 == 0) {
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0xa4),0);
  }
  else {
    fVar7 = (float10)FUN_0098b0f0(9,0);
    FUN_00cb32a0(local_8,*(undefined4 *)(param_1 + 0x94));
    fVar1 = local_8[0] + local_8[0] + (float)fVar7;
    FUN_00cb3240(local_10,*(undefined4 *)(param_1 + 0x94));
    pfVar3 = (float *)FUN_00ccde20(*(undefined4 *)(param_1 + 0x94));
    local_18 = (fVar1 / local_10[0]) / pfVar3[6];
    pfVar4 = (float *)FUN_00ccde20(*(undefined4 *)(param_1 + 0x74));
    local_10[0] = (float)FUN_00ccde20(*(undefined4 *)(param_1 + 0x7c));
    pfVar5 = (float *)FUN_00ccde20(*(undefined4 *)(param_1 + 0x90));
    pfVar6 = (float *)FUN_00ccde20(*(undefined4 *)(param_1 + 0xa4));
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0xa4),
                 (*pfVar5 + *pfVar4 + *pfVar3 + pfVar5[6] * fVar1) *
                 *(float *)((int)local_10[0] + 0x18) - *pfVar6);
  }
  FUN_00cb2bc0(*(undefined4 *)(param_1 + 0x94),local_18);
  return;
}


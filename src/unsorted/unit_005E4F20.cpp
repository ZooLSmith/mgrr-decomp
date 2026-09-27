// src/unsorted/unit_005E4F20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E4F20..005E54D0, 4 functions

#include "types.h"

// 005E4F20  FUN_005e4f20  size=362  [run]
float * __thiscall FUN_005e4f20(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  
  fVar3 = 0.0;
  iVar2 = *(int *)(param_1 + 0x330);
  *param_2 = 0.0;
  iVar6 = 0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (0 < *(int *)(iVar2 + 0xc4)) {
    fVar1 = param_2[3];
    pfVar5 = (float *)(*(int *)(iVar2 + 0xc0) + 0x18);
    fVar4 = fVar3;
    do {
      iVar6 = iVar6 + 1;
      *param_2 = pfVar5[-2] + *param_2;
      fVar4 = pfVar5[-1] + fVar4;
      param_2[1] = fVar4;
      fVar3 = *pfVar5 + fVar3;
      param_2[2] = fVar3;
      fVar1 = pfVar5[1] + fVar1;
      param_2[3] = fVar1;
      pfVar5 = pfVar5 + 0x1c;
    } while (iVar6 < *(int *)(iVar2 + 0xc4));
  }
  if (*(int *)(iVar2 + 0xc4) != 0) {
    fVar3 = (float)*(int *)(iVar2 + 0xc4);
    *param_2 = *param_2 / fVar3;
    param_2[1] = param_2[1] / fVar3;
    param_2[2] = param_2[2] / fVar3;
    param_2[3] = param_2[3] / fVar3;
  }
  if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
    return param_2;
  }
  fVar3 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(param_2,param_2);
    return param_2;
  }
  FUN_00dd5650(&DAT_0163d0ac);
  *param_2 = 0.0;
  param_2[1] = 1.0;
  param_2[2] = 0.0;
  return param_2;
}

// 005E5090  FUN_005e5090  size=616  [run]
void __fastcall FUN_005e5090(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  float10 fVar6;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float local_14;
  
  if (*(int *)(param_1 + 0x7b4) != 0) {
    if (*(int *)(param_1 + 0x880) == 0) {
      FUN_00912890(DAT_01885d20);
      *(undefined4 *)(param_1 + 0x880) = 1;
    }
    *(undefined4 *)(param_1 + 0x904) = 1;
    *(undefined4 *)(param_1 + 0x900) = 0;
    *(undefined4 *)(param_1 + 0x88c) = 1;
    FUN_0091ea00(param_1);
    piVar4 = (int *)FUN_00912660(&local_44,0);
    iVar1 = *piVar4;
    iVar2 = *(int *)(param_1 + 0x588);
    local_40 = *(float *)(iVar1 + 0x120) - *(float *)(iVar2 + 0x50);
    local_3c = *(float *)(iVar1 + 0x124) - (*(float *)(iVar2 + 0x54) - 0.5);
    local_38 = *(float *)(iVar1 + 0x128) - *(float *)(iVar2 + 0x58);
    local_34 = *(float *)(iVar1 + 300) - (*(float *)(iVar2 + 0x5c) + local_14);
    if (((local_40 != 0.0) || (local_3c != 0.0)) || (local_38 != 0.0)) {
      fVar3 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
      if (fVar3 < 0.0 == (fVar3 == 0.0)) {
        FUN_00ddf460(&local_40,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_40 = 0.0;
        local_3c = 1.0;
        local_38 = 0.0;
      }
    }
    piVar4 = (int *)FUN_00c13920();
    (**(code **)(*piVar4 + 0x28))(0);
    pfVar5 = &fStack_24;
    FUN_00a7c8a0(pfVar5);
    pfVar5 = (float *)FUN_00a92640(pfVar5);
    local_44 = local_44 + *pfVar5;
    local_40 = pfVar5[1] + local_40;
    local_3c = pfVar5[2] + local_3c;
    local_38 = pfVar5[3] + local_38;
    local_34 = local_44 * 3.0;
    fStack_30 = local_40 * 3.0;
    fStack_2c = local_3c * 3.0;
    fStack_28 = local_38 * 3.0;
    fVar6 = (float10)FUN_00916de0();
    fStack_24 = (float)((float10)local_34 * fVar6);
    fStack_20 = (float)((float10)fStack_30 * fVar6);
    fStack_1c = (float)((float10)fStack_2c * fVar6);
    fStack_18 = (float)(fVar6 * (float10)fStack_28);
    FUN_0091ab40(&fStack_24);
    fStack_24 = local_44 * 0.1;
    fStack_20 = local_40 * 0.1;
    fStack_1c = local_3c * 0.1;
    fStack_18 = local_38 * 0.1;
    FUN_0091ac60(&fStack_24);
  }
  return;
}

// 005E5300  FUN_005e5300  size=462  [run]
void __fastcall FUN_005e5300(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  Behavior::vf50();
  (**(code **)(*param_1 + 100))();
  FUN_00a93170();
  if (param_1[0x220] == 0) {
    param_1[0x220] = 1;
    if (param_1[0x1ed] != 0) {
      FUN_00912890(DAT_01885d20);
    }
    iVar2 = *(int *)(param_1[0xcc] + 200);
    FUN_00ddbb50((*(float *)(iVar2 + 0x10) * 0.0 + *(float *)(iVar2 + 0x14) +
                 *(float *)(iVar2 + 0x18) * 0.0) /
                 (SQRT(*(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x18) +
                       *(float *)(iVar2 + 0x14) * *(float *)(iVar2 + 0x14) +
                       *(float *)(iVar2 + 0x10) * *(float *)(iVar2 + 0x10)) * 1.0));
    FUN_005e4f20(&fStack_40);
    if (param_1[0x1ed] != 0) {
      fVar3 = (float10)FUN_00916de0();
      fVar1 = (float)fVar3;
      fVar4 = (float10)-1.0;
      fStack_30 = (float)((float10)fStack_40 * fVar3 * fVar4);
      fStack_2c = (float)(fVar3 * (float10)fStack_3c * fVar4);
      fStack_28 = (float)((float10)fStack_38 * fVar3 * fVar4);
      fStack_24 = (float)(fVar4 * (float10)fStack_34 * fVar3);
      FUN_0091ab40(&fStack_30);
      fStack_30 = 1.0;
      fStack_2c = 0.0;
      fStack_28 = 0.0;
      D3DXVec3TransformNormal(&fStack_20,&fStack_30,&DAT_01d61860);
      fStack_48 = -10.0;
      if (param_1[0x12d] == 0x31011) {
        fStack_48 = -1.0;
      }
      fVar3 = (float10)FUN_00a93060();
      if ((float10)0 != fVar3) {
        fStack_30 = fStack_20 * fStack_48 * fVar1;
        fStack_2c = fStack_1c * fStack_48 * fVar1;
        fStack_28 = fStack_18 * fStack_48 * fVar1;
        fStack_24 = fStack_14 * fStack_48 * fVar1;
        FUN_0091ab40(&fStack_30);
      }
      FUN_0091c6c0(0x1f);
    }
  }
  if (param_1[0x1ed] != 0) {
    FUN_0091e980(param_1);
  }
  return;
}

// 005E54D0  FUN_005e54d0  size=468  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e54d0(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  Behavior::vf50();
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
    FUN_00a805f0();
    switchD_0080dbae::default();
    return;
  }
  uVar4 = 2;
  local_40 = _DAT_01bea630;
  local_3c = _DAT_01bea634;
  local_38 = _DAT_01bea638;
  local_34 = _DAT_01bea63c;
  FUN_00a7c8a0(2);
  iVar3 = FUN_00a12210(uVar4);
  local_30 = *(float *)(iVar3 + 0x40);
  local_2c = *(float *)(iVar3 + 0x44);
  local_28 = *(float *)(iVar3 + 0x48);
  local_24 = *(float *)(iVar3 + 0x4c);
  local_50 = local_40 - local_30;
  local_4c = local_3c - local_2c;
  local_48 = local_38 - local_28;
  local_44 = local_34 - local_24;
  if (((local_50 != 0.0) || (local_4c != 0.0)) || (local_48 != 0.0)) {
    fVar2 = local_48 * local_48 + local_50 * local_50 + local_4c * local_4c;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_50,&local_50);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_50 = 0.0;
      local_4c = 1.0;
      local_48 = 0.0;
    }
  }
  pfVar1 = (float *)(param_1 + 0x50);
  *pfVar1 = local_50 + local_30;
  *(float *)(param_1 + 0x54) = local_4c + local_2c;
  *(float *)(param_1 + 0x58) = local_48 + local_28;
  *(float *)(param_1 + 0x5c) = local_44 + local_24;
  FUN_00d9fa80(local_20,pfVar1);
  FUN_00d9fab0(pfVar1,local_20);
  switchD_0080dbae::default();
  return;
}


// src/unsorted/unit_004ECEE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004ECEE0..004ED770, 6 functions

#include "types.h"

// 004ECEE0  FUN_004ecee0  size=12  [run]
undefined4 __fastcall FUN_004ecee0(undefined4 param_1)

{
  FUN_004ec5c0();
  return param_1;
}

// 004ECEF0  FUN_004ecef0  size=63  [run]
void FUN_004ecef0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (0 < iVar1) {
    iVar1 = FUN_004ec7f0();
    if (iVar1 != 0) {
      FUN_00a8c9b0(0,5,0,0);
      FUN_00a8caf0(3,0,0,0);
    }
  }
  return;
}

// 004ECF30  FUN_004ecf30  size=596  [run]
undefined4 FUN_004ecf30(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_68;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 local_50 [76];
  
  iVar4 = FUN_00a12290(0x503);
  local_80 = SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                  *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                  *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
  local_7c = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                  *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                  *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
  fVar3 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
               *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
               *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
  fVar1 = *(float *)(iVar4 + 0x28);
  fVar2 = *(float *)(iVar4 + 0x38);
  fVar6 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar3));
  fVar7 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
  local_60 = (float)fVar7;
  local_5c = (float)fVar6;
  fVar6 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)local_7c,
                          (float10)*(float *)(iVar4 + 0x10) / (float10)local_80);
  local_58 = (float)fVar6;
  local_80 = 0.0;
  local_7c = 0.0;
  local_78 = -1.0;
  FUN_00ddc1d0(local_50,&local_60,5);
  D3DXVec3TransformNormal(&local_60,&local_80,local_50);
  piVar5 = (int *)FUN_00c13920();
  iVar4 = (**(code **)(*piVar5 + 0x28))(0);
  if (iVar4 != 0) {
    uVar8 = 0;
    FUN_00a7c8a0(0);
    iVar4 = FUN_00a12210(uVar8);
    fVar1 = *(float *)(iVar4 + 0x40);
    fVar2 = *(float *)(iVar4 + 0x48);
    fVar3 = *(float *)(iVar4 + 0x4c);
    iVar4 = FUN_00a12290(0x503);
    local_80 = fVar1 - *(float *)(iVar4 + 0x40);
    local_78 = fVar2 - *(float *)(iVar4 + 0x48);
    fStack_74 = fVar3 - *(float *)(iVar4 + 0x4c);
    local_7c = 0.0;
    if ((local_80 == 0.0) && (local_78 == 0.0)) {
      local_7c = 0.0;
    }
    else {
      fVar1 = local_80 * local_80 + local_78 * local_78;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_80,&local_80);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_78 = 0.0;
        local_7c = 1.0;
        local_80 = 0.0;
      }
    }
    if (0.75 <= local_78 * fStack_68 + local_80 * fStack_70 + local_7c * 0.0) {
      return 1;
    }
  }
  return 0;
}

// 004ED190  FUN_004ed190  size=505  [run]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_004ed190(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float *pfStack_368;
  int iStack_364;
  float local_350 [2];
  uint local_348 [2];
  undefined4 local_340;
  undefined4 local_33c;
  float local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 uStack_328;
  undefined4 uStack_324;
  uint uStack_2ac;
  undefined4 uStack_238;
  undefined4 uStack_1dc;
  undefined2 uStack_1ce;
  float fStack_1b8;
  float fStack_1b4;
  
  if (((DAT_01bea060 & 0x40000000) == 0) && (*(int *)(param_1 + 0xdc4) != 0)) {
    iStack_364 = 0x503;
    pfStack_368 = (float *)0x4ed1c8;
    iVar1 = FUN_00a12210();
    local_350[0] = 0.0;
    local_350[1] = 0.1;
    pfStack_368 = local_350;
    local_348[0] = 0xbf19999a;
    local_340 = 0;
    local_33c = 0x3dcccccd;
    local_338 = -0.6 - (*(float *)(param_1 + 0xf88) + *(float *)(param_1 + 0xf88));
    iStack_364 = iVar1 + 0x10;
    D3DXVec3TransformNormal(pfStack_368);
    D3DXVec3TransformNormal(local_350 + 1,local_350 + 1,iVar1 + 0x10);
    local_350[0] = *(float *)(iVar1 + 0x48) + local_350[0];
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    uStack_238 = 0x66;
    FUN_0043fe30(&pfStack_368,&stack0xfffffca8,param_1 + 0x90,0x3f4ccccd,0x42a00000);
    uStack_1dc = 0x3f7f7cee;
    fVar3 = (float10)FUN_00dde300(0xbc0efa35,0x3c0efa35);
    fStack_1b8 = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0xbc0efa35,0x3c0efa35);
    fStack_1b4 = (float)fVar3;
    uStack_324 = *(undefined4 *)(param_1 + 0x4f0);
    uStack_2ac = uStack_2ac | 0x100000c0;
    uStack_334 = 10;
    uStack_32c = 0xf;
    uStack_328 = 0;
    uStack_330 = 0x96;
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    local_348[0] = local_348[0] | 4;
    uStack_1ce = *(undefined2 *)(iVar1 + 0xa0);
    FUN_00ae2bc0(*(undefined4 *)(param_1 + 0x4f0),local_348);
  }
  return;
}

// 004ED390  FUN_004ed390  size=978  [run]
void __thiscall FUN_004ed390(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  float fStack_344;
  float fStack_340;
  undefined4 uStack_33c;
  undefined1 auStack_338 [4];
  uint uStack_334;
  undefined4 local_32c;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  uint local_294;
  uint local_290;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined2 uStack_1bc;
  short sStack_1ba;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  
  if (((DAT_01bea060 & 0x40000000) == 0) && (iVar4 = FUN_004ec720(), iVar4 == 0)) {
    sVar2 = (ushort)(*(int *)(param_1 + 0xeac) != 0) * 4 + 0xf;
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    if (param_2 == 0) {
      local_21c = 0x22;
    }
    else if (param_2 == 1) {
      local_21c = 0x23;
    }
    else if (param_2 == 2) {
      local_21c = 0x24;
    }
    local_32c = 0x30361;
    local_220 = 0x65;
    puVar5 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar5;
    local_290 = local_290 | 0x400000;
    local_31c = 100;
    local_318 = 100;
    local_30c = *(undefined4 *)(param_1 + 0x4f0);
    local_294 = local_294 | 0xc0;
    local_320 = 0x141;
    local_314 = 0x14;
    local_310 = 0x500;
    uVar6 = FUN_00a7c7f0();
    FUN_00a7c960(uVar6);
    piVar7 = (int *)FUN_00c13920();
    local_1c0 = (**(code **)(*piVar7 + 0x28))(0);
    uStack_1b4 = 0;
    uStack_1b0 = 0x3dcccccd;
    uStack_1bc = 0xffff;
    fStack_1ac = 0.0;
    uStack_1a8 = uStack_358;
    if (param_2 == 0) {
      uStack_334 = uStack_334 | 0x50;
    }
    uStack_334 = uStack_334 | 0x20;
    iVar4 = FUN_00c18c10(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98));
    if ((iVar4 != 0) &&
       (iVar4 = FUN_00c1a340(*(undefined4 *)(param_1 + 0xf94),*(undefined4 *)(param_1 + 0xf98),0),
       iVar4 == 0)) {
      uStack_334 = uStack_334 & 0xffffff9f | 0x80;
    }
    uStack_334 = uStack_334 | 4;
    sStack_1ba = sVar2;
    iVar4 = FUN_00a12210(sVar2);
    fStack_344 = SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                      *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                      *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
    fStack_340 = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                      *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                      *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
    fVar3 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                 *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                 *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
    fVar1 = *(float *)(iVar4 + 0x28);
    fStack_368 = *(float *)(iVar4 + 0x38) / fVar3;
    fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar3));
    fVar9 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)fStack_368);
    fStack_364 = (float)fVar9;
    fStack_360 = (float)fVar8;
    fVar8 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)fStack_340,
                            (float10)*(float *)(iVar4 + 0x10) / (float10)fStack_344);
    fStack_35c = (float)fVar8;
    uStack_354 = *(undefined4 *)(iVar4 + 0x40);
    uStack_350 = *(undefined4 *)(iVar4 + 0x44);
    uStack_34c = *(undefined4 *)(iVar4 + 0x48);
    uStack_348 = *(undefined4 *)(iVar4 + 0x4c);
    piVar7 = (int *)FUN_00c13920();
    uVar6 = (**(code **)(*piVar7 + 0x28))(0);
    iVar4 = FUN_00a7c8a0();
    uStack_348 = *(undefined4 *)(iVar4 + 0x40);
    fStack_344 = *(float *)(iVar4 + 0x44);
    fStack_340 = *(float *)(iVar4 + 0x48);
    uStack_33c = *(undefined4 *)(iVar4 + 0x4c);
    FUN_0043fe30(&uStack_358,&uStack_348,&fStack_368,0x3f4ccccd,0x43480000);
    if (param_2 == 1) {
      fStack_368 = 3.0;
      fStack_364 = 0.0;
      fStack_360 = 3.0;
      uStack_358 = 0xc0400000;
      uStack_350 = 0xc0400000;
      uStack_354 = 0;
      FUN_004db1a0(&uStack_358,&fStack_368);
      uStack_1b8 = 0;
      local_1c0 = CONCAT22(local_1c0._2_2_,0xffff);
      uStack_1b4 = 0x3eb33333;
      uStack_1b0 = 0;
      fStack_1ac = fStack_35c;
      uStack_1c4 = uVar6;
    }
    else {
      fStack_368 = 3.0;
      fStack_364 = 0.0;
      fStack_360 = 1.0;
      uStack_358 = 0xc0400000;
      uStack_354 = 0;
      uStack_350 = 0xbf800000;
      FUN_004db1a0(&uStack_358,&fStack_368);
    }
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_338);
    *(uint *)(param_1 + 0xeac) = *(uint *)(param_1 + 0xeac) ^ 1;
  }
  return;
}

// 004ED770  FUN_004ed770  size=23  [run]
void FUN_004ed770(void)

{
  uint uVar1;
  
  uVar1 = FUN_00a8cab0();
  if (uVar1 < 3) {
    FUN_004ecef0();
    return;
  }
  return;
}


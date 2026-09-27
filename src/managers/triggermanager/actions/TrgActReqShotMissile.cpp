// src/managers/triggermanager/actions/TrgActReqShotMissile.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C93FA0..00C93FA0, 1 functions

#include "mgrr.h"

// 00C93FA0  Trigger::Act::REQ_SHOT_MISSILE  size=536  [class]
undefined4 __fastcall Trigger::Act::REQ_SHOT_MISSILE(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float local_360;
  float local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  float local_340;
  float local_33c;
  float local_338;
  uint local_330 [5];
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  int local_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined2 local_1b6;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016b0374);
    return 0;
  }
  iVar5 = FUN_00c19c00(*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                       *(undefined4 *)(iVar3 + 0x10));
  if (iVar5 != 0) {
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_21c = 0x22;
    local_330[1] = 0x30361;
    local_220 = 0x65;
    FUN_00a7c8a0();
    puVar6 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar6;
    local_31c = 0x14;
    local_314 = 0x14;
    local_318 = 100;
    local_310 = 0x700;
    local_30c = iVar5;
    uVar7 = FUN_00a7c7f0();
    FUN_00a7c960(uVar7);
    local_330[0] = local_330[0] | 0x14;
    local_1b6 = 0xffff;
    uVar7 = 0xffffffff;
    FUN_00a7c8a0(0xffffffff);
    iVar8 = FUN_00a12210(uVar7);
    local_360 = SQRT(*(float *)(iVar8 + 0x14) * *(float *)(iVar8 + 0x14) +
                     *(float *)(iVar8 + 0x10) * *(float *)(iVar8 + 0x10) +
                     *(float *)(iVar8 + 0x18) * *(float *)(iVar8 + 0x18));
    local_35c = SQRT(*(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20) +
                     *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                     *(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28));
    fVar4 = SQRT(*(float *)(iVar8 + 0x38) * *(float *)(iVar8 + 0x38) +
                 *(float *)(iVar8 + 0x34) * *(float *)(iVar8 + 0x34) +
                 *(float *)(iVar8 + 0x30) * *(float *)(iVar8 + 0x30));
    fVar1 = *(float *)(iVar8 + 0x28);
    fVar2 = *(float *)(iVar8 + 0x38);
    fVar9 = (float10)FUN_00ddbaa0(-(*(float *)(iVar8 + 0x18) / fVar4));
    fVar10 = (float10)fpatan((float10)(fVar1 / fVar4),(float10)(fVar2 / fVar4));
    local_340 = (float)fVar10;
    local_33c = (float)fVar9;
    fVar9 = (float10)fpatan((float10)*(float *)(iVar8 + 0x14) / (float10)local_35c,
                            (float10)*(float *)(iVar8 + 0x10) / (float10)local_360);
    local_338 = (float)fVar9;
    local_360 = *(float *)(iVar8 + 0x40);
    local_35c = *(float *)(iVar8 + 0x44);
    local_358 = *(undefined4 *)(iVar8 + 0x48);
    local_354 = *(undefined4 *)(iVar8 + 0x4c);
    local_350 = *(undefined4 *)(iVar3 + 0x14);
    local_34c = *(undefined4 *)(iVar3 + 0x18);
    local_348 = *(undefined4 *)(iVar3 + 0x1c);
    FUN_0043fe30(&local_360,&local_350,&local_340,0x3f4ccccd,0x43480000);
    FUN_00ad3be0(iVar5,local_330);
  }
  return 0;
}


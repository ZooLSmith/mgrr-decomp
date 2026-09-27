// src/unsorted/unit_0058AB60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0058AB60..0058AB60, 1 functions

#include "mgrr.h"

// 0058AB60  FUN_0058ab60  size=521  [run]
void __fastcall FUN_0058ab60(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  float local_340;
  float local_33c;
  float local_338;
  uint local_330 [4];
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  short local_1b6;
  
  if ((DAT_01bea060 & 0x40000000) == 0) {
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_21c = 0x40;
    local_330[1] = 0x30360;
    local_220 = 0x65;
    local_1c0 = FUN_009f8b40();
    local_30c = *(undefined4 *)(param_1 + 0x4f0);
    local_320 = 0x142;
    local_31c = 0x14;
    local_314 = 0x14;
    local_318 = 100;
    local_310 = 0x500;
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    local_330[0] = local_330[0] | 0x24;
    local_368 = 1.377559e-39;
    local_1b6 = *(short *)((int)&local_368 + (*(uint *)(param_1 + 0x15d0) & 1) * 2);
    iVar3 = FUN_00a12210((int)local_1b6);
    local_360 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                     *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10) +
                     *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
    local_35c = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                     *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                     *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
    fVar1 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
                 *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
                 *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
    local_364 = *(float *)(iVar3 + 0x28) / fVar1;
    local_368 = *(float *)(iVar3 + 0x38) / fVar1;
    fVar4 = (float10)FUN_00ddbaa0(-(*(float *)(iVar3 + 0x18) / fVar1));
    fVar5 = (float10)fpatan((float10)local_364,(float10)local_368);
    local_340 = (float)fVar5;
    local_33c = (float)fVar4;
    fVar4 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)local_35c,
                            (float10)*(float *)(iVar3 + 0x10) / (float10)local_360);
    local_338 = (float)fVar4;
    local_350 = *(undefined4 *)(iVar3 + 0x40);
    local_34c = *(undefined4 *)(iVar3 + 0x44);
    local_348 = *(undefined4 *)(iVar3 + 0x48);
    local_344 = *(undefined4 *)(iVar3 + 0x4c);
    local_360 = *(float *)(param_1 + 0x50);
    local_358 = *(undefined4 *)(param_1 + 0x58);
    local_354 = *(undefined4 *)(param_1 + 0x5c);
    local_35c = *(float *)(param_1 + 0x54) + 20.0;
    FUN_0043fe30(&local_350,&local_360,&local_340,0x3f4ccccd,0x43480000);
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
  }
  return;
}


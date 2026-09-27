// src/unsorted/unit_00D89130.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D89130..00D89720, 2 functions

#include "mgrr.h"

// 00D89130  FUN_00d89130  size=1507  [run]
float * __fastcall FUN_00d89130(float *param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float10 fVar8;
  float local_5f4;
  float local_5d0;
  float local_5cc;
  float local_5c8;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  float local_5b0;
  float local_5ac;
  float local_5a8;
  float local_5a4;
  float local_5a0;
  float local_59c;
  float local_598;
  float local_594;
  undefined4 local_590;
  undefined4 local_58c;
  float local_588;
  float local_584;
  undefined4 local_580;
  undefined4 local_57c;
  float local_570;
  float local_56c;
  float local_568;
  float local_564;
  float local_560;
  float local_55c;
  float local_558;
  float local_554;
  undefined4 local_550;
  float local_54c;
  undefined4 local_544;
  undefined4 local_540;
  undefined1 local_530 [16];
  float local_520;
  float local_51c;
  float local_518;
  float local_514;
  
  fVar1 = param_1[0x369];
  fVar2 = *(float *)((int)param_1[0x356] + 0xc0);
  local_570 = param_1[0x358] + param_1[0x35c] * fVar2;
  local_56c = param_1[0x35d] * fVar2 + param_1[0x359];
  local_568 = param_1[0x35e] * fVar2 + param_1[0x35a];
  local_564 = param_1[0x35f] * fVar2 + param_1[0x35b];
  fVar2 = *(float *)((int)param_1[0x356] + 0x10);
  local_54c = param_1[0x368];
  local_544 = 0;
  local_540 = 0;
  local_550 = 0x1a;
  local_560 = fVar2 * param_1[0x360] + local_570;
  local_55c = param_1[0x361] * fVar2 + local_56c;
  local_558 = param_1[0x362] * fVar2 + local_568;
  local_554 = param_1[0x363] * fVar2 + local_564;
  FUN_00a84140(0xffffffff,0x1a,"obstacle");
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  iVar7 = BehaviorUtility::checkRay(local_530,&local_570);
  if ((iVar7 != 0) &&
     ((FUN_00a84420(0xffffffff,0x1a,"obstacle"), fVar6 = local_514, fVar5 = local_518,
      fVar4 = local_51c, fVar2 = local_520, param_1[1] == 0.0 ||
      (SQRT((param_1[0x35a] - local_518) * (param_1[0x35a] - local_518) +
            (param_1[0x358] - local_520) * (param_1[0x358] - local_520)) <= fVar1 + fVar1 + *param_1
      )))) {
    fVar1 = -*(float *)param_1[0x356];
    local_570 = fVar1 * param_1[0x360] + local_520;
    local_56c = param_1[0x361] * fVar1 + local_51c;
    local_568 = param_1[0x362] * fVar1 + local_518;
    local_564 = param_1[0x363] * fVar1 + local_514;
    fVar1 = -((float *)param_1[0x356])[5];
    local_560 = fVar1 * 0.0 + local_570;
    local_55c = fVar1 + local_56c;
    local_558 = fVar1 * 0.0 + local_568;
    local_554 = local_5f4 * fVar1 + local_564;
    FUN_00a84140(0xffffffff,0x1a,"obstacle");
    iVar7 = BehaviorUtility::checkRay(local_530,&local_570);
    if (iVar7 != 0) {
      FUN_00a84420(0xffffffff,0x1a,"obstacle");
      local_5a0 = fVar2;
      local_59c = fVar4;
      local_598 = fVar5;
      local_594 = fVar6;
      local_5b0 = local_520;
      local_5ac = local_51c;
      local_5a8 = local_518;
      local_5a4 = local_514;
      local_5d0 = param_1[0x358];
      local_5cc = param_1[0x359];
      local_5c8 = param_1[0x35a];
      local_5c4 = param_1[0x35b];
      local_5c0 = param_1[0x369];
      local_5bc = param_1[0x36a];
      if ((DAT_01bea090 & 0x400000) == 0) {
        fVar1 = param_1[0x356];
        local_588 = *(float *)((int)fVar1 + 0xb8);
        local_584 = 0.0;
        local_57c = 0xff0000ff;
        local_58c = *(undefined4 *)((int)fVar1 + 0xc4);
        local_590 = *(undefined4 *)((int)fVar1 + 0xc0);
        local_580 = 0x3f800000;
        FUN_00d87330((int)param_1[6] + 0x230,&local_5d0);
      }
      fVar1 = param_1[0x356];
      local_588 = *(float *)((int)fVar1 + 0xd0) + 0.5;
      local_57c = 0xff00ff00;
      local_584 = *(float *)((int)fVar1 + 0xcc) + 0.5;
      local_58c = *(undefined4 *)((int)fVar1 + 0xdc);
      local_590 = *(undefined4 *)((int)fVar1 + 0xd8);
      local_580 = *(undefined4 *)((int)fVar1 + 0xe0);
      FUN_00d87330((int)param_1[6] + 0x2a0,&local_5d0);
      fVar1 = param_1[0x356];
      local_588 = *(float *)((int)fVar1 + 0xcc);
      local_57c = 0xff00ff00;
      local_584 = 0.0;
      local_58c = *(undefined4 *)((int)fVar1 + 0xdc);
      local_590 = *(undefined4 *)((int)fVar1 + 0xd8);
      local_580 = 0x3f800000;
      FUN_00d87330((int)param_1[6] + 0x380,&local_5d0);
      fVar1 = param_1[0x356];
      local_588 = *(float *)((int)fVar1 + 0xec);
      local_584 = *(float *)((int)fVar1 + 0xe8);
      local_57c = 0xffff0000;
      local_58c = *(undefined4 *)((int)fVar1 + 0xf4);
      local_590 = *(undefined4 *)((int)fVar1 + 0xf0);
      local_580 = 0x3f800000;
      iVar7 = FUN_00d87330((int)param_1[6] + 0x3f0,&local_5d0);
      if ((iVar7 == 5) || (iVar7 == 4)) {
        fVar8 = (float10)FUN_00ddb510(*(undefined4 *)((int)param_1[6] + 0x54c),0xfffffffe);
        fVar3 = (float10)*(float *)((int)param_1[0x356] + 0x110);
        if (fVar8 < fVar3 != (fVar8 == fVar3)) {
          *(undefined4 *)((int)param_1[6] + 0x3fc) = *(undefined4 *)((int)param_1[0x356] + 0xf4);
          *(undefined4 *)((int)param_1[6] + 0x3f4) = 1;
        }
        if (fVar8 <= (float10)6.0) {
          *(float *)((int)param_1[6] + 0x46c) = (float)fVar8;
          *(undefined4 *)((int)param_1[6] + 0x464) = 1;
          *(undefined4 *)((int)param_1[6] + 0x490) = *(undefined4 *)((int)param_1[6] + 0x420);
          fVar1 = param_1[6];
          if ((*(int *)((int)fVar1 + 0x490) != 0) && (*(float *)((int)fVar1 + 0x46c) < 2.0)) {
            *(undefined4 *)((int)fVar1 + 0x464) = 0;
            hkpCdPointCollector::hkpCdPointCollector_16();
            return param_1;
          }
        }
      }
    }
  }
  hkpCdPointCollector::hkpCdPointCollector_16();
  return param_1;
}

// 00D89720  FUN_00d89720  size=129  [run]
void __fastcall FUN_00d89720(int param_1)

{
  int *piVar1;
  undefined1 local_c [12];
  
  FUN_00d85250();
  FUN_00d87f90();
  FUN_00d87200();
  FUN_00d883a0();
  FUN_00d89130();
  FUN_00d85e10();
  FUN_00d85b80();
  FUN_00d85790();
  FUN_00d859e0();
  if (DAT_018b9174 == 0x448) {
    FUN_00d87970();
  }
  if (*(int *)(*(int *)(param_1 + 0x18) + 0xcb0) != 0) {
    piVar1 = (int *)FUN_00c1bd10();
    (**(code **)(*piVar1 + 8))(local_c,param_1 + 0xd60);
  }
  return;
}


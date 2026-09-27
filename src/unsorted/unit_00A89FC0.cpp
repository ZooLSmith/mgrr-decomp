// src/unsorted/unit_00A89FC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A89FC0..00A8A710, 3 functions

#include "mgrr.h"

// 00A89FC0  FUN_00a89fc0  size=223  [run]
undefined4
FUN_00a89fc0(float *param_1,float *param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  float local_570;
  float local_56c;
  float local_568;
  float local_564;
  float local_560;
  float local_55c;
  float local_558;
  float local_554;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_544;
  undefined4 local_540;
  undefined1 local_530 [1324];
  
  local_570 = *param_1 + *param_2 * param_3;
  local_56c = param_1[1] + param_2[1] * param_3;
  local_568 = param_1[2] + param_2[2] * param_3;
  local_564 = param_2[3] * param_3 + param_1[3];
  param_3 = -param_3;
  local_544 = 0;
  local_540 = 0;
  local_560 = *param_1 + *param_2 * param_3;
  local_550 = param_4;
  local_55c = param_2[1] * param_3 + param_1[1];
  local_558 = param_1[2] + param_2[2] * param_3;
  local_554 = param_1[3] + param_2[3] * param_3;
  local_54c = param_5;
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  uVar1 = BehaviorUtility::checkRay(local_530,&local_570);
  hkpCdPointCollector::hkpCdPointCollector_16();
  return uVar1;
}

// 00A8A0A0  FUN_00a8a0a0  size=1641  [run]
undefined4 FUN_00a8a0a0(float *param_1,float *param_2)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  float local_5f0;
  float local_5ec;
  float local_5e8;
  float local_5e4;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  float local_5b8;
  float local_5b4;
  float local_5b0;
  float local_5ac;
  float local_5a8;
  float local_5a4;
  float local_5a0;
  float local_59c;
  float local_598;
  float local_594;
  float local_590;
  float local_58c;
  float local_588;
  float local_584;
  float local_580;
  float local_57c;
  float local_578;
  float local_574;
  float local_570;
  float local_56c;
  float local_568;
  float local_564;
  float local_560;
  float local_55c;
  undefined4 local_554;
  undefined4 local_550;
  float local_538;
  float local_530 [4];
  float local_520;
  float local_51c;
  float local_518;
  float local_514;
  
  local_55c = param_2[0xb];
  local_560 = param_2[10];
  local_554 = 0;
  local_550 = 0;
  local_5f0 = param_2[4] * 0.01 + *param_2;
  local_5ec = param_2[1] + param_2[5] * 0.01;
  local_5e8 = param_2[2] + param_2[6] * 0.01;
  local_5e4 = param_2[3] + param_2[7] * 0.01;
  fVar1 = param_2[8];
  local_598 = param_2[6] * fVar1;
  fVar3 = fVar1 * param_2[4] + local_5f0;
  fVar5 = param_2[5] * fVar1 + local_5ec;
  fVar4 = local_598 + local_5e8;
  fVar1 = param_2[7] * fVar1 + local_5e4;
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  local_5c4 = param_2[8];
  do {
    local_580 = local_5f0;
    local_57c = local_5ec;
    local_578 = local_5e8;
    local_574 = local_5e4;
    local_570 = fVar3;
    local_56c = fVar5;
    local_568 = fVar4;
    local_564 = fVar1;
    FUN_00a84140(0xffff00ff,0x1a,"size1");
    bVar6 = false;
    iVar7 = BehaviorUtility::checkRay(local_530,&local_580);
    if (iVar7 != 0) {
      fVar3 = local_520 + param_2[4] * -0.01;
      fVar5 = local_51c + param_2[5] * -0.01;
      fVar4 = param_2[6] * -0.01 + local_518;
      fVar1 = local_514 + param_2[7] * -0.01;
      FUN_00a84420(0xffff00ff,0x1a,"size1");
      bVar6 = true;
      local_590 = local_520;
      local_58c = local_51c;
      local_588 = local_518;
      local_584 = local_514;
      local_5c4 = local_5c4 -
                  SQRT((local_518 - param_2[2]) * (local_518 - param_2[2]) +
                       (local_520 - *param_2) * (local_520 - *param_2));
      if (local_5c4 <= 0.0) {
LAB_00a8a6f5:
        hkpCdPointCollector::hkpCdPointCollector_16();
        return 0;
      }
    }
    local_570 = *param_2;
    local_56c = param_2[1];
    local_568 = param_2[2];
    local_564 = param_2[3];
    local_580 = fVar3;
    local_57c = fVar5;
    local_578 = fVar4;
    local_574 = fVar1;
    FUN_00a84140(0xffff00ff,0x1a,"sizeRet2");
    iVar7 = BehaviorUtility::checkRay(local_530,&local_580);
    while (iVar7 != 0) {
      FUN_00a84420(0xffff00ff,0x1a,"sizeRet2");
      fVar1 = param_2[9];
      if ((fVar1 != 0.0) && (local_530[0] != 0.0)) {
        if (fVar1 == local_530[0]) {
LAB_00a8a6bc:
          *param_1 = SQRT((param_2[2] - local_518) * (param_2[2] - local_518) +
                          (*param_2 - local_520) * (*param_2 - local_520));
          hkpCdPointCollector::hkpCdPointCollector_16();
          return 1;
        }
        if (((*(uint *)((int)local_530[0] + 0x78) & 0xfffffffe) != 0) &&
           ((*(uint *)((int)fVar1 + 0x78) & 0xfffffffe) != 0)) {
          pbVar9 = (byte *)(*(uint *)((int)local_530[0] + 0x78) & 0xfffffffe);
          pbVar8 = (byte *)(*(uint *)((int)fVar1 + 0x78) & 0xfffffffe);
          do {
            bVar2 = *pbVar8;
            bVar10 = bVar2 < *pbVar9;
            if (bVar2 != *pbVar9) {
LAB_00a8a3f0:
              iVar7 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
              goto LAB_00a8a3f5;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar8[1];
            bVar10 = bVar2 < pbVar9[1];
            if (bVar2 != pbVar9[1]) goto LAB_00a8a3f0;
            pbVar8 = pbVar8 + 2;
            pbVar9 = pbVar9 + 2;
          } while (bVar2 != 0);
          iVar7 = 0;
LAB_00a8a3f5:
          if (iVar7 == 0) goto LAB_00a8a6bc;
        }
      }
      local_5b0 = param_2[4] * -0.01 + local_520;
      local_5ac = param_2[5] * -0.01 + local_51c;
      local_5a8 = param_2[6] * -0.01 + local_518;
      local_5a4 = param_2[7] * -0.01 + local_514;
      fVar1 = -param_2[8];
      local_538 = param_2[6] * fVar1;
      local_5a0 = fVar1 * param_2[4] + local_5b0;
      local_59c = param_2[5] * fVar1 + local_5ac;
      local_598 = local_538 + local_5a8;
      local_594 = param_2[7] * fVar1 + local_5a4;
      local_5c0 = local_5b0 - *param_2;
      local_5bc = local_5ac - param_2[1];
      local_5b8 = local_5a8 - param_2[2];
      local_5b4 = local_5a4 - param_2[3];
      if (((local_5c0 != 0.0) || (local_5bc != 0.0)) || (fVar1 = local_5c0, local_5b8 != 0.0)) {
        fVar1 = local_5b8 * local_5b8 + local_5c0 * local_5c0 + local_5bc * local_5bc;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_5c0,&local_5c0);
          fVar1 = local_5c0;
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_5bc = 1.0;
          local_5b8 = 0.0;
          fVar1 = 0.0;
        }
      }
      if (local_5b8 * param_2[6] + fVar1 * param_2[4] + local_5bc * param_2[5] <= 0.0) break;
      local_570 = local_5a0;
      local_56c = local_59c;
      local_568 = local_598;
      local_564 = local_594;
      local_580 = local_5b0;
      local_57c = local_5ac;
      local_578 = local_5a8;
      local_574 = local_5a4;
      FUN_00a84140(0xffff00ff,0x1a,"sizeRet2");
      iVar7 = BehaviorUtility::checkRay(local_530,&local_580);
    }
    if (!bVar6) goto LAB_00a8a6f5;
    local_5f0 = local_590;
    local_5ec = local_58c;
    local_5e8 = local_588;
    local_5e4 = local_584;
    fVar3 = local_5c4 * param_2[4] + local_590;
    fVar5 = param_2[5] * local_5c4 + local_58c;
    fVar4 = param_2[6] * local_5c4 + local_588;
    fVar1 = param_2[7] * local_5c4 + local_584;
  } while( true );
}

// 00A8A710  FUN_00a8a710  size=38  [run]
void FUN_00a8a710(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_8 [2];
  
  iVar1 = FUN_00a8a0a0(local_8,param_2);
  if (iVar1 != 0) {
    *param_1 = local_8[0];
  }
  return;
}


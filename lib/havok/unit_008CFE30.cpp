// lib/havok/unit_008CFE30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008CFE30..008D0070, 2 functions

#include "types.h"

// 008CFE30  hkpAllRayHitCollector::hkpAllRayHitCollector_7  size=567  [run]
undefined4
hkpAllRayHitCollector::hkpAllRayHitCollector_7(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_34c;
  undefined4 local_348;
  int local_344;
  undefined **local_330 [4];
  int local_320;
  int local_31c;
  uint local_318;
  
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  local_348 = 0;
  param_1[3] = 1.0;
  hkpAllRayHitCollector_8();
  iVar7 = RayCastMultiHitWork::RayCastMultiHitWork
                    (local_330,param_2,param_3,0xffff0006,"DatsuJump::CollisionCheck");
  uVar10 = 0;
  if (iVar7 != 0) {
    FUN_0112c170();
    local_344 = 0;
    if (0 < local_31c) {
      local_34c = 0;
      do {
        iVar9 = local_320 + local_34c;
        iVar7 = *(int *)(iVar9 + 0x50);
        iVar8 = *(char *)(iVar7 + 0x10) + iVar7;
        if ((((iVar8 != 0) && (*(char *)(iVar7 + 0x18) != '\x02')) &&
            (iVar7 = FUN_008f8cf0(iVar8,1), iVar7 == 0)) &&
           (((iVar7 = *(int *)(iVar9 + 0x50), *(char *)(iVar7 + 0x18) != '\x01' ||
             (iVar7 = *(char *)(iVar7 + 0x10) + iVar7, iVar7 == 0)) ||
            ((iVar7 = FUN_008f7780(iVar7), iVar7 == 0 || ((*(byte *)(iVar7 + 0x4c0) & 0x60) == 0))))
           )) {
          fVar1 = param_2[3];
          fVar2 = param_3[3];
          local_348 = 1;
          fVar3 = *(float *)(iVar9 + 0x10);
          fVar11 = (*param_3 - *param_2) * fVar3 + *param_2;
          fVar12 = (param_3[1] - param_2[1]) * fVar3 + param_2[1];
          fVar13 = (param_3[2] - param_2[2]) * fVar3 + param_2[2];
          if ((((*param_1 == 0.0) && (param_1[1] == 0.0)) && (param_1[2] == 0.0)) ||
             (fVar5 = fVar11 - *param_2, fVar6 = fVar12 - param_2[1], fVar4 = fVar13 - param_2[2],
             SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) <
             SQRT((param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
                  (*param_1 - *param_2) * (*param_1 - *param_2) +
                  (param_1[2] - param_2[2]) * (param_1[2] - param_2[2])))) {
            *param_1 = fVar11;
            param_1[1] = fVar12;
            param_1[2] = fVar13;
            param_1[3] = (fVar2 - fVar1) * fVar3 + fVar1;
          }
        }
        local_34c = local_34c + 0x60;
        local_344 = local_344 + 1;
        uVar10 = local_348;
      } while (local_344 < local_31c);
    }
  }
  local_330[0] = vftable;
  local_31c = 0;
  if (-1 < (int)local_318) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_320,(local_318 & 0x3fffffff) * 0x60);
  }
  return uVar10;
}

// 008D0070  hkpAllRayHitCollector::hkpAllRayHitCollector_3  size=567  [run]
undefined4
hkpAllRayHitCollector::hkpAllRayHitCollector_3(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_34c;
  undefined4 local_348;
  int local_344;
  undefined **local_330 [4];
  int local_320;
  int local_31c;
  uint local_318;
  
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  local_348 = 0;
  param_1[3] = 1.0;
  hkpAllRayHitCollector_8();
  iVar7 = RayCastMultiHitWork::RayCastMultiHitWork
                    (local_330,param_2,param_3,0xffff0006,"ZangekiReady::RoofCheck");
  uVar10 = 0;
  if (iVar7 != 0) {
    FUN_0112c170();
    local_344 = 0;
    if (0 < local_31c) {
      local_34c = 0;
      do {
        iVar9 = local_320 + local_34c;
        iVar7 = *(int *)(iVar9 + 0x50);
        iVar8 = *(char *)(iVar7 + 0x10) + iVar7;
        if ((((iVar8 != 0) && (*(char *)(iVar7 + 0x18) != '\x02')) &&
            (iVar7 = FUN_008f8cf0(iVar8,1), iVar7 == 0)) &&
           (((iVar7 = *(int *)(iVar9 + 0x50), *(char *)(iVar7 + 0x18) != '\x01' ||
             (iVar7 = *(char *)(iVar7 + 0x10) + iVar7, iVar7 == 0)) ||
            ((iVar7 = FUN_008f7780(iVar7), iVar7 == 0 || ((*(byte *)(iVar7 + 0x4c0) & 0x60) == 0))))
           )) {
          fVar1 = param_2[3];
          fVar2 = param_3[3];
          local_348 = 1;
          fVar3 = *(float *)(iVar9 + 0x10);
          fVar11 = (*param_3 - *param_2) * fVar3 + *param_2;
          fVar12 = (param_3[1] - param_2[1]) * fVar3 + param_2[1];
          fVar13 = (param_3[2] - param_2[2]) * fVar3 + param_2[2];
          if ((((*param_1 == 0.0) && (param_1[1] == 0.0)) && (param_1[2] == 0.0)) ||
             (fVar5 = fVar11 - *param_2, fVar6 = fVar12 - param_2[1], fVar4 = fVar13 - param_2[2],
             SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) <
             SQRT((param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
                  (*param_1 - *param_2) * (*param_1 - *param_2) +
                  (param_1[2] - param_2[2]) * (param_1[2] - param_2[2])))) {
            *param_1 = fVar11;
            param_1[1] = fVar12;
            param_1[2] = fVar13;
            param_1[3] = (fVar2 - fVar1) * fVar3 + fVar1;
          }
        }
        local_34c = local_34c + 0x60;
        local_344 = local_344 + 1;
        uVar10 = local_348;
      } while (local_344 < local_31c);
    }
  }
  local_330[0] = vftable;
  local_31c = 0;
  if (-1 < (int)local_318) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_320,(local_318 & 0x3fffffff) * 0x60);
  }
  return uVar10;
}


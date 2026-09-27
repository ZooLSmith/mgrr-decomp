// lib/havok/unit_00DC82B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DC82B0..00DC82B0, 1 functions

#include "types.h"

// 00DC82B0  hkpAllRayHitCollector::hkpAllRayHitCollector_6  size=339  [run]
undefined4
hkpAllRayHitCollector::hkpAllRayHitCollector_6
          (float *param_1,undefined4 param_2,float *param_3,float *param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_348;
  int local_344;
  undefined **local_330 [4];
  int local_320;
  int local_31c;
  uint local_318;
  
  iVar10 = 0;
  local_348 = 0;
  hkpAllRayHitCollector_8();
  iVar8 = RayCastMultiHitWork::RayCastMultiHitWork
                    (local_330,param_3,param_4,param_5,"Ray Final Cam");
  if (iVar8 != 0) {
    FUN_0112c170();
    local_344 = 0;
    if (0 < local_31c) {
      do {
        iVar9 = *(int *)(iVar10 + 0x50 + local_320);
        iVar8 = iVar10 + local_320;
        iVar9 = *(char *)(iVar9 + 0x10) + iVar9;
        if ((iVar9 != 0) && (iVar9 = FUN_008f8cf0(iVar9,8), iVar9 == 0)) {
          fVar1 = param_3[2];
          fVar2 = param_3[3];
          fVar3 = param_3[1];
          fVar4 = param_4[3];
          local_348 = 1;
          fVar5 = param_4[2];
          fVar6 = param_4[1];
          fVar7 = *(float *)(iVar8 + 0x10);
          *param_1 = (*param_4 - *param_3) * fVar7 + *param_3;
          param_1[1] = (fVar6 - fVar3) * fVar7 + fVar3;
          param_1[2] = (fVar5 - fVar1) * fVar7 + fVar1;
          param_1[3] = (fVar4 - fVar2) * fVar7 + fVar2;
          break;
        }
        local_344 = local_344 + 1;
        iVar10 = iVar10 + 0x60;
      } while (local_344 < local_31c);
    }
  }
  local_330[0] = vftable;
  local_31c = 0;
  if (-1 < (int)local_318) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_320,(local_318 & 0x3fffffff) * 0x60);
  }
  return local_348;
}


// lib/havok/unit_009568F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009568F0..009568F0, 1 functions

#include "types.h"

// 009568F0  hkpAllRayHitCollector::hkpAllRayHitCollector_5  size=484  [run]
undefined4
hkpAllRayHitCollector::hkpAllRayHitCollector_5
          (undefined4 *param_1,uint *param_2,undefined4 *param_3,float param_4,float param_5,
          undefined4 param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  float local_35c;
  undefined4 local_358;
  float local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  float local_344;
  undefined4 local_340;
  float local_33c;
  undefined4 local_338;
  float local_334;
  undefined **local_330 [4];
  int local_320;
  int local_31c;
  uint local_318;
  
  iVar4 = 0;
  local_368 = 0;
  hkpAllRayHitCollector_8();
  local_360 = *param_3;
  local_33c = (float)param_3[1] + param_4;
  local_358 = param_3[2];
  local_334 = (float)param_3[3] + local_344;
  local_35c = (float)param_3[1] + -param_5;
  local_354 = (float)param_3[3] + local_344;
  local_340 = local_360;
  local_338 = local_358;
  iVar1 = RayCastMultiHitWork::RayCastMultiHitWork(local_330,&local_340,&local_360,9,param_6);
  if (iVar1 != 0) {
    FUN_0112c170();
    iVar1 = 0;
    if (0 < local_31c) {
      do {
        iVar2 = *(int *)(iVar4 + 0x50 + local_320);
        iVar2 = FUN_008f7780(*(char *)(iVar2 + 0x10) + iVar2);
        if (iVar2 != 0) {
          if (param_2 != (uint *)0x0) {
            *param_2 = *(uint *)(iVar2 + 0x4e0);
          }
          break;
        }
        iVar2 = *(int *)(iVar4 + 0x50 + local_320);
        iVar2 = *(char *)(iVar2 + 0x10) + iVar2;
        uVar3 = 0;
        if (iVar2 == 0) {
LAB_009569d6:
          if ((uVar3 & 0xf) != 0) {
            if (param_2 != (uint *)0x0) {
              *param_2 = uVar3;
            }
            break;
          }
        }
        else {
          uVar3 = *(uint *)(iVar2 + 0xc);
          if (uVar3 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(uint *)((-(uint)(uVar3 != 0) & uVar3) + 0x44);
          }
          if (uVar3 != 0xffffffff) goto LAB_009569d6;
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + 0x60;
      } while (iVar1 < local_31c);
    }
  }
  local_360 = *param_3;
  local_35c = (float)param_3[1] - 0.1;
  local_358 = param_3[2];
  local_354 = (float)param_3[3] + local_344;
  local_364 = 0;
  iVar1 = FUN_0090dc50(&local_350,0,&local_364,&local_340,&local_360,9,"ItemPosCheck");
  if ((iVar1 != 0) && (iVar1 = FUN_00951da0(local_364), iVar1 != 0)) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = local_350;
      param_1[1] = local_34c;
      param_1[2] = local_348;
      param_1[3] = local_344;
    }
    local_368 = 1;
  }
  local_330[0] = vftable;
  local_31c = 0;
  if (-1 < (int)local_318) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_320,(local_318 & 0x3fffffff) * 0x60);
  }
  return local_368;
}


// lib/havok/unit_00933140.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00933140..00933140, 1 functions

#include "mgrr.h"
#include "hkpClosestRayHitCollector.h"

// 00933140  hkpClosestRayHitCollector::hkpClosestRayHitCollector_2  size=228  [run]
undefined4
hkpClosestRayHitCollector::hkpClosestRayHitCollector_2
          (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
          int param_5)

{
  int iVar1;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined **local_80;
  undefined4 local_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_30;
  int local_20;
  
  iVar1 = FUN_0092f620(param_3,0);
  if ((iVar1 != 0) && (iVar1 = FUN_0092f620(param_4,0), iVar1 != 0)) {
    local_b0 = *param_3;
    uStack_ac = param_3[1];
    uStack_a8 = param_3[2];
    uStack_a4 = param_3[3];
    local_60 = 0x3f800000;
    local_7c = 0x3f800000;
    local_8c = param_5 << 0x10 | 0x1e;
    local_a0 = *param_4;
    uStack_9c = param_4[1];
    uStack_98 = param_4[2];
    uStack_94 = param_4[3];
    local_88 = 0;
    local_90 = 0;
    local_80 = vftable;
    local_20 = 0;
    local_5c = 0xffffffff;
    local_30 = 0;
    local_50 = 0xffffffff;
    FUN_00906200(&local_b0,&local_80);
    if (local_20 == 0) {
      return 0;
    }
    *param_1 = local_60;
    *param_2 = local_70;
    param_2[1] = uStack_6c;
    param_2[2] = uStack_68;
    param_2[3] = uStack_64;
    return 1;
  }
  FUN_00dd5650("Ik Area Over!!");
  return 0;
}


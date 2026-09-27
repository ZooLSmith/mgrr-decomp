// src/collision/CollisionImpactVolumee.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D78D50..00D78D50, 1 functions

#include "mgrr.h"

// 00D78D50  CollisionImpactVolumee::detectionForPenetration  size=73  [class]
void __fastcall CollisionImpactVolumee::detectionForPenetration(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0x10) + 8))();
  hkpAllCdPointCollector::hkpAllCdPointCollector_25
            (param_1 + 0x10,param_1 + 0x530,param_1 + 0x540,*(undefined4 *)(param_1 + 0x570),
             *(int *)(param_1 + 0x370) << 0x10 | 0x1c,
             "CollisionImpactVolumee::detectionForPenetration");
  return;
}


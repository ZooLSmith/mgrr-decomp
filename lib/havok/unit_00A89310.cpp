// lib/havok/unit_00A89310.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A89310..00A89390, 2 functions

#include "types.h"

// 00A89310  hkpAllCdPointCollector::hkpAllCdPointCollector_21  size=113  [run]
int __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_21(int param_1)

{
  FUN_00910a40(0);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  hkpAllRayHitCollector::hkpAllRayHitCollector_8();
  *(undefined4 *)(param_1 + 0x364) = 0x7f7fffee;
  *(undefined ***)(param_1 + 0x360) = vftable;
  *(undefined4 *)(param_1 + 0x378) = 0x80000008;
  *(int *)(param_1 + 0x370) = param_1 + 0x380;
  *(undefined4 *)(param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x364) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return param_1;
}

// 00A89390  hkpCdPointCollector::hkpCdPointCollector_16  size=161  [run]
void __fastcall hkpCdPointCollector::hkpCdPointCollector_16(int param_1)

{
  *(undefined ***)(param_1 + 0x360) = hkpAllCdPointCollector::vftable;
  *(undefined4 *)(param_1 + 0x374) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x378)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x370),(*(uint *)(param_1 + 0x378) & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0x80000000;
  *(undefined ***)(param_1 + 0x360) = vftable;
  *(undefined ***)(param_1 + 0x40) = hkpAllRayHitCollector::vftable;
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x58)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x50),(*(uint *)(param_1 + 0x58) & 0x3fffffff) * 0x60);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x80000000;
  *(undefined ***)(param_1 + 0x40) = hkpRayHitCollector::vftable;
  return;
}


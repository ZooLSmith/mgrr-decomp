// lib/havok/unit_0090E5B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0090E5B0..0090E5B0, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 0090E5B0  hkpAllCdPointCollector::hkpAllCdPointCollector_31  size=75  [run]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_31(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 1;
  *param_1 = RayCastClosestPointsWork::vftable;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0x7f7fffee;
  param_1[0xc] = vftable;
  param_1[0x10] = param_1 + 0x14;
  param_1[0x12] = 0x80000008;
  param_1[0x11] = 0;
  param_1[0xd] = 0x7f7fffee;
  return;
}


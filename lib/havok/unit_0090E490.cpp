// lib/havok/unit_0090E490.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0090E490..0090E490, 1 functions

#include "mgrr.h"
#include "hkpAllCdPointCollector.h"

// 0090E490  hkpAllCdPointCollector::hkpAllCdPointCollector_30  size=96  [run]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_30(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 1;
  *param_1 = RayCastLinearWork::vftable;
  param_1[8] = 0;
  param_1[0x10] = 0;
  param_1[0x19] = 0x7f7fffee;
  param_1[0x18] = vftable;
  param_1[0x1e] = 0x80000008;
  param_1[0x1c] = param_1 + 0x20;
  param_1[0x1d] = 0;
  param_1[0x19] = 0x7f7fffee;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  return;
}


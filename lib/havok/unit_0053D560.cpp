// lib/havok/unit_0053D560.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0053D560..0053D560, 1 functions

#include "types.h"

// 0053D560  hkpAllCdPointCollector::hkpAllCdPointCollector_8  size=183  [run]
undefined4
hkpAllCdPointCollector::hkpAllCdPointCollector_8
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a0;
  undefined4 local_19c;
  uint local_198;
  undefined1 local_190 [396];
  
  local_1a0 = local_190;
  local_1ac = 0x7f7fffee;
  local_1b0 = vftable;
  local_198 = 0x80000008;
  local_19c = 0;
  iVar1 = FUN_009f8b40();
  uVar2 = FUN_0090eea0(&local_1b0,param_1,param_2,0x3ecccccd,param_3,iVar1 << 0x10 | 7,
                       "Em01a0 Smoke");
  local_1b0 = vftable;
  local_19c = 0;
  if (-1 < (int)local_198) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1a0,(local_198 & 0x3fffffff) * 0x30);
  }
  return uVar2;
}


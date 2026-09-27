// lib/havok/unit_00DC9770.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DC9770..00DC9770, 1 functions

#include "types.h"

// 00DC9770  hkpAllCdPointCollector::hkpAllCdPointCollector_22  size=305  [run]
undefined4
hkpAllCdPointCollector::hkpAllCdPointCollector_22
          (float *param_1,undefined4 param_2,float *param_3,float *param_4,undefined4 param_5)

{
  int iVar1;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined1 local_1c0 [16];
  undefined **local_1b0;
  undefined4 local_1ac;
  undefined1 *local_1a0;
  int local_19c;
  uint local_198;
  undefined1 local_190 [396];
  
  if (param_1 != (float *)0x0) {
    *param_1 = *param_4;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
    param_1[3] = param_4[3];
  }
  local_1d0 = *param_4 - *param_3;
  local_1cc = param_4[1] - param_3[1];
  local_1b0 = vftable;
  local_198 = 0x80000008;
  local_19c = 0;
  local_1c8 = param_4[2] - param_3[2];
  local_1a0 = local_190;
  local_1c4 = param_4[3] - param_3[3];
  local_1ac = 0x7f7fffee;
  iVar1 = FUN_0090eea0(&local_1b0,local_1c0,param_3,param_5,&local_1d0,0x1d,"CameraGame");
  if (iVar1 == 0) {
    local_1b0 = vftable;
    if (-1 < (int)local_198) {
      local_19c = iVar1;
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1a0,(local_198 & 0x3fffffff) * 0x30);
    }
    return 0;
  }
  iVar1 = FUN_00dbea90(&local_1b0);
  if (iVar1 == 0) {
    hkpCdPointCollector::hkpCdPointCollector_4();
    return 0;
  }
  FUN_00db5bc0(param_1,param_2,iVar1,param_5);
  hkpCdPointCollector::hkpCdPointCollector_4();
  return 1;
}


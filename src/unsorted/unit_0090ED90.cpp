// src/unsorted/unit_0090ED90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0090ED90..0090EEA0, 2 functions

#include "mgrr.h"

// 0090ED90  FUN_0090ed90  size=263  [run]
undefined4
FUN_0090ed90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 local_224;
  int local_220;
  short local_214;
  char local_20a;
  undefined1 local_209;
  char local_205;
  
  if (((*param_5 == 0.0) || (param_5[1] == 0.0)) || (param_5[2] == 0.0)) {
    return 0;
  }
  hkpAllCdPointCollector::hkpAllCdPointCollector();
  FUN_0090c850(0xffffffff,param_3,param_4,param_5,param_6,param_7,0,0,0,param_8,4);
  local_209 = 0;
  if (local_205 != '\0') {
    if (local_214 < 1) {
      (**(code **)(local_220 + 8))();
      FUN_009053f0();
    }
    else {
      local_214 = local_214 + -1;
    }
  }
  if (local_20a == '\0') {
    hkpCdPointCollector::hkpCdPointCollector_20();
    return 0;
  }
  if (param_1 != 0) {
    FUN_00905b30(&local_224,param_2);
    FUN_0090e700(local_224);
  }
  hkpCdPointCollector::hkpCdPointCollector_20();
  return 1;
}

// 0090EEA0  FUN_0090eea0  size=214  [run]
undefined4
FUN_0090eea0(int param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 local_224;
  int local_220;
  short local_214;
  char local_20a;
  undefined1 local_209;
  char local_205;
  
  if (param_4 != 0.0) {
    hkpAllCdPointCollector::hkpAllCdPointCollector();
    FUN_0090ca20(0xffffffff,param_3,param_4,param_5,param_6,0,0,0,param_7,4);
    local_209 = 0;
    if (local_205 != '\0') {
      if (local_214 < 1) {
        (**(code **)(local_220 + 8))();
        FUN_009053f0();
      }
      else {
        local_214 = local_214 + -1;
      }
    }
    if (local_20a != '\0') {
      if (param_1 != 0) {
        FUN_00905b30(&local_224,param_2);
        FUN_0090e700(local_224);
      }
      hkpCdPointCollector::hkpCdPointCollector_20();
      return 1;
    }
    hkpCdPointCollector::hkpCdPointCollector_20();
  }
  return 0;
}


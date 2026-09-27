// src/unsorted/unit_00CDA7A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CDA7A0..00CDA7A0, 1 functions

#include "mgrr.h"

// 00CDA7A0  FUN_00cda7a0  size=467  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cda7a0(undefined4 param_1,uint param_2)

{
  int iVar1;
  float local_24;
  float local_20;
  float local_1c;
  
  if (param_2 < 0xf0076) {
    if ((param_2 < 0xf0071) && (param_2 != 0x20310)) {
      return;
    }
  }
  else {
    if (param_2 < 0xf0077) {
      return;
    }
    if (0xf0079 < param_2) {
      return;
    }
  }
  iVar1 = FUN_00d9fa80(&local_20,param_1);
  if (iVar1 == 0) {
    return;
  }
  if (DAT_01dc1374 == 0) goto LAB_00cda934;
  if (DAT_01dc1374 == 1) {
    if (local_20 < DAT_018b5764) {
      _DAT_018b576c = DAT_018b5764;
      _DAT_018b5770 = DAT_018b5768;
      goto LAB_00cda934;
    }
    local_24 = local_1c;
    if (local_1c <= DAT_018b5768) {
      _DAT_018b576c = DAT_018b5764;
      _DAT_018b5770 = DAT_018b5768;
      goto LAB_00cda934;
    }
  }
  else {
    if (local_20 < DAT_018b5764) goto LAB_00cda934;
    local_24 = local_1c;
    if (local_20 != DAT_018b5764) {
      if (_DAT_018b576c < local_20) goto LAB_00cda8e7;
      if (local_20 != _DAT_018b576c) goto LAB_00cda95d;
    }
    if (local_1c < DAT_018b5768) {
LAB_00cda934:
      DAT_018b5764 = local_20;
      DAT_018b5768 = local_1c;
      DAT_01dc1374 = DAT_01dc1374 + (uint)(DAT_01dc1374 < 2);
      return;
    }
    if (local_1c <= _DAT_018b5770) {
LAB_00cda95d:
      DAT_01dc1374 = DAT_01dc1374 + (uint)(DAT_01dc1374 < 2);
      return;
    }
  }
LAB_00cda8e7:
  _DAT_018b576c = local_20;
  _DAT_018b5770 = local_24;
  DAT_01dc1374 = DAT_01dc1374 + (uint)(DAT_01dc1374 < 2);
  return;
}


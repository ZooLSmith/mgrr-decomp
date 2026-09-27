// src/misc/AreaData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00963590..00963590, 1 functions

#include "mgrr.h"

// 00963590  AreaData::setParentInfo  size=417  [class]
undefined4 __fastcall AreaData::setParentInfo(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_100 [256];
  
  if ((param_1[0x20] & 0x80000000) == 0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    param_1[0x12] = param_1[2];
    param_1[0x13] = param_1[3];
    param_1[0x14] = param_1[4];
    param_1[0x15] = param_1[5];
    param_1[0x16] = param_1[6];
    param_1[0x17] = param_1[7];
    return 0;
  }
  if (param_1[0x22] == -1) {
    param_1[0x19] = 0;
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    param_1[0x12] = param_1[2];
    param_1[0x13] = param_1[3];
    param_1[0x14] = param_1[4];
    param_1[0x15] = param_1[5];
    param_1[0x16] = param_1[6];
    param_1[0x17] = param_1[7];
    return 0;
  }
  iVar1 = FUN_00a18d70(param_1[0x24],param_1[0x22]);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c800();
    param_1[0x18] = uVar2;
  }
  if (param_1[0x18] == 0) {
    iVar1 = FUN_009f8ea0(local_100,0x100,param_1[0x22],0);
    if (iVar1 != 0) {
      FUN_00dd5650(&DAT_01651578,param_1[0x1c],local_100);
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      return 0;
    }
    FUN_00dd5650(&DAT_01651518,param_1[0x1c]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    return 0;
  }
  iVar1 = FUN_00a12210(param_1[0x23]);
  param_1[0x19] = iVar1;
  if (iVar1 == 0) {
    iVar1 = FUN_009f8ea0(local_100,0x100,param_1[0x22],0);
    if (iVar1 != 0) {
      FUN_00dd5650(&DAT_016514c0,param_1[0x1c],local_100,param_1[0x23]);
    }
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    return 0;
  }
  return 1;
}


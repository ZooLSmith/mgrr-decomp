// src/misc/PathData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00962F30..00962F30, 1 functions

#include "mgrr.h"

// 00962F30  PathData::setParentInfo  size=413  [class]
undefined4 __fastcall PathData::setParentInfo(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined1 local_100 [256];
  
  if ((param_1[0x42] & 0x80000000) == 0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = param_1[8];
    param_1[1] = param_1[9];
    param_1[2] = param_1[10];
    param_1[3] = param_1[0xb];
  }
  else {
    if (param_1[0x40] == -1) {
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = param_1[8];
      param_1[1] = param_1[9];
      param_1[2] = param_1[10];
      param_1[3] = param_1[0xb];
      return 0;
    }
    iVar1 = FUN_00a18d70(param_1[0x44],param_1[0x40]);
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c800();
      param_1[0xc] = uVar2;
    }
    if (param_1[0xc] == 0) {
      iVar1 = FUN_009f8ea0(local_100,0x100,param_1[0x40],0);
      if (iVar1 == 0) {
        if (param_1[0x44] == 0) {
          puVar3 = &DAT_01651330;
        }
        else {
          puVar3 = &DAT_016512d8;
        }
        FUN_00dd5650(puVar3);
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        return 0;
      }
      if (param_1[0x44] == 0) {
        FUN_00dd5650(&DAT_016513e8,local_100);
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        return 0;
      }
      FUN_00dd5650(&DAT_016513a4,local_100);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      return 0;
    }
    iVar1 = FUN_00a12210(param_1[0x41]);
    param_1[0xd] = iVar1;
    if (iVar1 == 0) {
      iVar1 = FUN_009f8ea0(local_100,0x100,param_1[0x40],0);
      if (iVar1 != 0) {
        FUN_00dd5650(&DAT_01651288,local_100,param_1[0x41]);
      }
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      return 0;
    }
  }
  return 1;
}


// src/unsorted/unit_00949CC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00949CC0..00949CC0, 1 functions

#include "mgrr.h"

// 00949CC0  FUN_00949cc0  size=110  [run]
undefined4 FUN_00949cc0(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char local_80 [128];
  
  _sprintf_s(local_80,0x80,param_1);
  iVar1 = FUN_00dec390(local_80);
  if (iVar1 != 0) {
    uVar2 = FUN_00e9e570(1,local_80,&DAT_01b7ddc0,0,0);
    return uVar2;
  }
  FUN_00dd5650(&DAT_0164fc3c,local_80);
  return 0;
}


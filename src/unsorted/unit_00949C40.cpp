// src/unsorted/unit_00949C40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00949C40..00949CC0, 3 functions

#include "types.h"

// 00949C40  FUN_00949c40  size=17  [run]
undefined4 __fastcall FUN_00949c40(int param_1)

{
  if (DAT_01bea024 == 10) {
    return *(undefined4 *)(param_1 + 0x60);
  }
  return *(undefined4 *)(param_1 + 0x58);
}

// 00949C60  FUN_00949c60  size=25  [run]
void __thiscall FUN_00949c60(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x44);
  return;
}

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


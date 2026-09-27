// src/misc/GraphicDevice.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F98770..00FA4E30, 2 functions

#include "types.h"

// 00F98770  GraphicDevice::CreateSubWindow  size=207  [class]
undefined4
GraphicDevice::CreateSubWindow
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  uVar1 = param_4;
  FUN_00df8620(param_1,param_2,param_3,param_4,&DAT_01f205e0,&param_4);
  _memset(&local_38,0,0x38);
  local_34 = uVar1;
  local_38 = param_3;
  local_30 = 0x15;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 1;
  local_1c = DAT_01f205e0;
  local_14 = 0;
  local_10 = 0x4b;
  local_c = 0;
  local_18 = 1;
  local_4 = 1;
  (**(code **)(*DAT_01f206d4 + 0x38))(DAT_01f206d4,0,&DAT_01f206fc);
  iVar2 = (**(code **)(*DAT_01f206d4 + 0x34))(DAT_01f206d4,&stack0xffffffbc,&DAT_01f20700);
  if (iVar2 < 0) {
    FUN_00dd5650(&DAT_016eb9bc);
    return 0;
  }
  return 1;
}

// 00FA4E30  GraphicDevice::CreateOcclusionQuery  size=123  [class]
undefined4 __fastcall GraphicDevice::CreateOcclusionQuery(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    FUN_00fa16d0(*param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *param_1 = 0;
    }
    *param_1 = 0;
  }
  if (DAT_01f206d4 != (int *)0x0) {
    iVar2 = (**(code **)(*DAT_01f206d4 + 0x1d8))(DAT_01f206d4,9,param_1);
    if (-1 < iVar2) {
      FUN_00fa31c0(*param_1,6,param_1,0,0,0,0,0,0,0);
      return 1;
    }
    FUN_00dd5650(&DAT_016eb6e8);
  }
  return 0;
}


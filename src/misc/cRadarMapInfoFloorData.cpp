// src/misc/cRadarMapInfoFloorData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBE630..00CBE630, 1 functions

#include "mgrr.h"

// 00CBE630  cRadarMapInfoFloorData::readXml  size=131  [class]
undefined4 __thiscall cRadarMapInfoFloorData::readXml(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,&DAT_016b76e4);
  if (iVar1 == -1) {
    FUN_00dd5650(&DAT_016b76a4);
    return 0;
  }
  (**(code **)(*param_2 + 0x54))(iVar1,param_1);
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,&DAT_016b76a0);
  if (iVar1 == -1) {
    FUN_00dd5650(&DAT_016b7660);
    return 0;
  }
  (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 4);
  return 1;
}


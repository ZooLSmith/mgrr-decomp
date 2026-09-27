// src/misc/cRadarMapInfoRectData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD6E20..00CD6E20, 1 functions

#include "mgrr.h"

// 00CD6E20  cRadarMapInfoRectData::readXml  size=465  [class]
undefined4 __thiscall cRadarMapInfoRectData::readXml(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,&DAT_016b8518);
  if (iVar1 == -1) {
    FUN_00dd5650(&DAT_016b84d8);
    return 0;
  }
  (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 1);
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,&DAT_016b84d4);
  if (iVar1 == -1) {
    FUN_00dd5650(&DAT_016b8494);
    return 0;
  }
  (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 2);
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,&DAT_016b8490);
  if (iVar1 == -1) {
    FUN_00dd5650(&DAT_016b8450);
    return 0;
  }
  (**(code **)(*param_2 + 0x54))(iVar1,param_1 + 3);
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,&DAT_016b844c);
  if (iVar1 != -1) {
    piVar4 = param_1 + 4;
    (**(code **)(*param_2 + 0x54))(iVar1,piVar4);
    iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"HeightDataList");
    if (iVar1 == -1) {
      FUN_00dd5650(&DAT_016b8308);
      return 0;
    }
    uVar2 = (**(code **)(*param_2 + 0x10))(iVar1);
    iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar2 * 8 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar2 * 8),&DAT_01b7bd48);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      FUN_00401040(iVar1,8,uVar2,&LAB_00cd6df0);
    }
    *param_1 = iVar1;
    if (iVar1 != 0) {
      iVar1 = 0;
      if (0 < (int)uVar2) {
        do {
          iVar3 = (**(code **)(*param_2 + 0x14))(piVar4,iVar1);
          if ((iVar3 != -1) && (iVar3 = cRadarMapInfoFloorData::readXml(param_2,iVar3), iVar3 == 0))
          {
            FUN_00dd5650(&DAT_016b8358);
            return 0;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)uVar2);
      }
      param_1[5] = uVar2;
      return 1;
    }
    FUN_00dd5650(&DAT_016b83bc);
    return 0;
  }
  FUN_00dd5650(&DAT_016b840c);
  return 0;
}


// src/misc/cRadarMapInfoData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD7010..00CD7010, 1 functions

#include "mgrr.h"

// 00CD7010  cRadarMapInfoData::readXml  size=320  [class]
undefined4 __thiscall cRadarMapInfoData::readXml(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = param_3;
  piVar1 = (int *)(**(code **)(*param_2 + 0x18))(param_3,&DAT_01655cd0);
  if (piVar1 == (int *)0xffffffff) {
    FUN_00dd5650(&DAT_016b8638);
    return 0;
  }
  (**(code **)(*param_2 + 0x58))(piVar1,param_1 + 2);
  iVar2 = (**(code **)(*param_2 + 0x18))(param_3,"RectDataList");
  if (iVar2 == -1) {
    FUN_00dd5650(&DAT_016b8520);
    return 0;
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(iVar2);
  iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar3 * 0x18 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar3 * 0x18),&DAT_01b7bd48);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_00401040(iVar2,0x18,uVar3,&LAB_00cd6e00);
  }
  *param_1 = iVar2;
  if (iVar2 != 0) {
    if (0 < (int)uVar3) {
      iVar2 = 0;
      param_1 = piVar1;
      do {
        iVar4 = (**(code **)(*param_2 + 0x14))(uVar5,iVar2);
        if ((iVar4 != -1) && (iVar4 = cRadarMapInfoRectData::readXml(param_2,iVar4), iVar4 == 0)) {
          FUN_00dd5650(&DAT_016b8588);
          return 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar3);
    }
    param_1[1] = uVar3;
    return 1;
  }
  FUN_00dd5650(&DAT_016b85e8);
  return 0;
}


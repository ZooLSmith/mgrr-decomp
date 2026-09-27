// src/misc/cCreditData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CDD160..00CDD160, 1 functions

#include "types.h"

// 00CDD160  cCreditData::readXml  size=244  [class]
undefined4 __thiscall cCreditData::readXml(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_3);
  iVar5 = 0;
  param_1[1] = uVar1;
  if (-1 < (int)uVar1) {
    iVar2 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar1 * 0x20 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar1 * 0x20),&DAT_01b7bd48);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar4 = uVar1 - 1;
      if (-1 < iVar4) {
        puVar3 = (undefined4 *)(iVar2 + 0x18);
        do {
          puVar3[-6] = 0;
          puVar3[-5] = 0xffffffff;
          puVar3[-4] = 0xffffffff;
          puVar3[-3] = 0xffffffff;
          puVar3[-2] = 0xffffffff;
          puVar3[-1] = 0xffffffff;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3 = puVar3 + 8;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
    }
    *param_1 = iVar2;
    if (iVar2 != 0) {
      if (0 < param_1[1]) {
        iVar2 = 0;
        do {
          iVar4 = (**(code **)(*param_2 + 0x14))(param_2,iVar5);
          if (iVar4 != -1) {
            iVar4 = cCreditLineData::readXml(param_2,iVar4);
            if (iVar4 == 0) {
              FUN_00dd5650(&DAT_016b8b20,iVar5);
              return 0;
            }
            param_1[2] = param_1[2] + (uint)(*(int *)(*param_1 + iVar2) == 2);
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + 0x20;
        } while (iVar5 < param_1[1]);
      }
      return 1;
    }
    FUN_00dd5650(&DAT_016b8b7c);
  }
  return 0;
}


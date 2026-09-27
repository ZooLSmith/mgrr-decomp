// src/managers/triggermanager/Condition.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C962D0..00C96390, 2 functions

#include "mgrr.h"

// 00C962D0  Trigger::Condition::IS_SCR_MESH_ON  size=183  [class]
undefined4 __fastcall Trigger::Condition::IS_SCR_MESH_ON(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_01dbd1cc == 0) {
    FUN_00dd5650(&DAT_016b0d88);
    return 0;
  }
  *(undefined4 *)(DAT_01dbd1cc + 0xc) = 0;
  iVar4 = DAT_01dbd1cc;
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  if (param_1 + 0x14 != 0) {
    piVar1 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar1 + 0x14))(iVar4,param_1 + 0x14,uVar5);
    if (*(int *)(iVar4 + 0xc) != 0) {
      iVar4 = *(int *)(DAT_01dbd1cc + 4);
      uVar5 = 1;
      if (iVar4 != iVar4 + *(int *)(DAT_01dbd1cc + 0xc) * 4) {
        do {
          iVar2 = FUN_00a7c8a0();
          iVar3 = *(int *)(param_1 + 0x24);
          if ((((-1 < iVar3) && (iVar3 < *(short *)(iVar2 + 0x324))) &&
              (iVar3 = iVar3 * 0x70 + *(int *)(iVar2 + 800), iVar3 != 0)) &&
             ((*(byte *)(iVar3 + 0x38) & 1) == 0)) {
            uVar5 = 0;
          }
          iVar4 = iVar4 + 4;
        } while (iVar4 != *(int *)(DAT_01dbd1cc + 4) + *(int *)(DAT_01dbd1cc + 0xc) * 4);
      }
      return uVar5;
    }
  }
  return 0;
}

// 00C96390  Trigger::Condition::IS_SCR_MESH_OFF  size=197  [class]
int __fastcall Trigger::Condition::IS_SCR_MESH_OFF(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (DAT_01dbd1cc == 0) {
    FUN_00dd5650(&DAT_016b0dc8);
    return 0;
  }
  *(undefined4 *)(DAT_01dbd1cc + 0xc) = 0;
  iVar6 = DAT_01dbd1cc;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (param_1 + 0x14 != 0) {
    piVar3 = (int *)FUN_00c14bb0();
    (**(code **)(*piVar3 + 0x14))(iVar6,param_1 + 0x14,uVar1);
    if (*(int *)(iVar6 + 0xc) != 0) {
      iVar6 = *(int *)(DAT_01dbd1cc + 4);
      iVar7 = 0;
      bVar2 = false;
      if (iVar6 == iVar6 + *(int *)(DAT_01dbd1cc + 0xc) * 4) {
        return 0;
      }
      do {
        iVar4 = FUN_00a7c8a0();
        iVar5 = *(int *)(param_1 + 0x24);
        if (((-1 < iVar5) && (iVar5 < *(short *)(iVar4 + 0x324))) &&
           (iVar5 = iVar5 * 0x70 + *(int *)(iVar4 + 800), iVar5 != 0)) {
          if ((*(byte *)(iVar5 + 0x38) & 1) == 0) {
            iVar7 = 1;
          }
          else {
            bVar2 = true;
          }
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 != *(int *)(DAT_01dbd1cc + 4) + *(int *)(DAT_01dbd1cc + 0xc) * 4);
      if (iVar7 != 1) {
        return iVar7;
      }
      if (!bVar2) {
        return 1;
      }
    }
  }
  return 0;
}


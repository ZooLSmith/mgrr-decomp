// src/managers/triggermanager/cCondKgkArea.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7E770..00C86E90, 5 functions

#include "mgrr.h"

// 00C7E770  Trigger::cCondKgkArea::vf10  size=8  [class]
void __fastcall Trigger::cCondKgkArea::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C7E780  Trigger::cCondKgkArea::vf18  size=4  [class]
undefined4 __fastcall Trigger::cCondKgkArea::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 00C86DB0  Trigger::cCondKgkArea::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondKgkArea::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86DD0  Trigger::cCondKgkArea::vf14  size=177  [class]
undefined4 __fastcall Trigger::cCondKgkArea::vf14(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  if (((DAT_01dbd1d0 == 0) || ((DAT_01bea060 & 8) != 0)) || ((DAT_01bea060 & 0x2000400) == 0)) {
    piVar2 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar2 + 0x28))(1);
    if (iVar3 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar5 = &DAT_01b35420;
        (**(code **)(*piVar2 + 4))(&DAT_01b35420);
        iVar3 = FUN_00dd6d80(puVar5);
        if (iVar3 != 0) {
          iVar3 = FUN_00a8eea0();
          if (0 < iVar3) {
            uVar1 = *(undefined4 *)(param_1 + 0x10);
            piVar2 = (int *)FUN_00a6e640();
            iVar3 = (**(code **)(*piVar2 + 0x24))(uVar1,1,1);
            piVar2 = (int *)FUN_00a6e640();
            iVar4 = (**(code **)(*piVar2 + 0x24))(uVar1,1,2);
            if ((iVar3 != 0) || (iVar4 != 0)) {
              *(undefined4 *)(param_1 + 0x14) = DAT_01be8e58;
              return 1;
            }
          }
        }
      }
      return 0;
    }
  }
  return 0;
}

// 00C86E90  Trigger::cCondKgkArea::vf1C  size=16  [class]
void __thiscall Trigger::cCondKgkArea::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}


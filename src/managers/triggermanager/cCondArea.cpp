// src/managers/triggermanager/cCondArea.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C78E20..00C84CF0, 5 functions

#include "mgrr.h"

// 00C78E20  Trigger::cCondArea::vf10  size=8  [class]
void __fastcall Trigger::cCondArea::vf10(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00C78E30  Trigger::cCondArea::vf14  size=105  [class]
undefined4 __fastcall Trigger::cCondArea::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (((DAT_01dbd1d0 == 0) || ((DAT_01bea060 & 8) != 0)) || ((DAT_01bea060 & 0x2000400) == 0)) {
    piVar1 = (int *)FUN_00a6e640();
    iVar2 = (**(code **)(*piVar1 + 0x24))(*(undefined2 *)(param_1 + 0x10),1,1);
    piVar1 = (int *)FUN_00a6e640();
    iVar3 = (**(code **)(*piVar1 + 0x24))(*(undefined2 *)(param_1 + 0x10),1,2);
    if ((iVar2 != 0) || (iVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x14) = DAT_01be8e58;
      return 1;
    }
  }
  return 0;
}

// 00C78EA0  Trigger::cCondArea::vf18  size=4  [class]
undefined4 __fastcall Trigger::cCondArea::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 00C84CD0  Trigger::cCondArea::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondArea::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84CF0  Trigger::cCondArea::vf1C  size=18  [class]
void __thiscall Trigger::cCondArea::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 8);
  return;
}


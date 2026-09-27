// src/managers/triggermanager/cCondBehaviorInstruction.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7AD10..00C85AB0, 4 functions

#include "mgrr.h"

// 00C7AD10  Trigger::cCondBehaviorInstruction::vf0C  size=6  [class]
undefined4 Trigger::cCondBehaviorInstruction::vf0C(void)

{
  return 1;
}

// 00C7AD20  Trigger::cCondBehaviorInstruction::vf14  size=96  [class]
undefined4 __fastcall Trigger::cCondBehaviorInstruction::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x10) == -1) {
    return 0;
  }
  iVar1 = FUN_00a7f600(*(int *)(param_1 + 0x10));
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    iVar1 = (**(code **)(*piVar2 + 0x124))();
    if (iVar1 != -1) {
      piVar2 = (int *)FUN_00a7c8a0();
      iVar1 = (**(code **)(*piVar2 + 0x124))();
      if (iVar1 == *(int *)(param_1 + 0x14)) {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

// 00C7AD80  Trigger::cCondBehaviorInstruction::vf1C  size=22  [class]
void __thiscall Trigger::cCondBehaviorInstruction::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C85AB0  Trigger::cCondBehaviorInstruction::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondBehaviorInstruction::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


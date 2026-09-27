// src/managers/triggermanager/cTriggerTask_PlAnim.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C775C0..00C83F10, 5 functions

#include "mgrr.h"

// 00C775C0  Trigger::cTriggerTask_PlAnim::vf04  size=12  [class]
void __fastcall Trigger::cTriggerTask_PlAnim::vf04(int param_1)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00C775D0  Trigger::cTriggerTask_PlAnim::vf08  size=12  [class]
void __fastcall Trigger::cTriggerTask_PlAnim::vf08(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00C83E60  Trigger::cTriggerTask_PlAnim::vf00  size=38  [class]
undefined4 * __thiscall Trigger::cTriggerTask_PlAnim::vf00(undefined4 *param_1,byte param_2)

{
  param_1[3] = 0;
  *param_1 = cTriggerTask::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C83E90  FUN_00c83e90  size=127  [between]
void __thiscall FUN_00c83e90(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  piVar1 = (int *)FUN_00a7c8a0();
  iVar3 = piVar1[300];
  iVar2 = FUN_009f9350(iVar3);
  if (iVar2 == 1) {
    if ((iVar3 == 0x10100) || (iVar3 == 0x10010)) {
      iVar3 = (**(code **)(*piVar1 + 0x32c))();
      if (iVar3 == 1) {
        FUN_00b8a040(0,0,0);
      }
      (**(code **)(*piVar1 + 0x318))();
      FUN_00a8cb50(0x134);
    }
    DAT_01bea070 = DAT_01bea070 | 0x200000;
  }
  return;
}

// 00C83F10  Trigger::cTriggerTask_PlAnim::vf0C  size=208  [class]
void __fastcall Trigger::cTriggerTask_PlAnim::vf0C(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 8) & 2) == 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 == 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
      return;
    }
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      iVar1 = piVar2[300];
      iVar3 = FUN_00a92f90();
      if (iVar3 != 0) {
        FUN_00e26e90();
        FUN_00e22f10(0);
      }
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 == 1) {
        iVar3 = FUN_009f9350(iVar1);
        if (iVar3 == 1) {
          if ((iVar1 == 0x10100) || (iVar1 == 0x10010)) {
            (**(code **)(*piVar2 + 0x388))(0);
            (**(code **)(*piVar2 + 0x314))();
          }
          DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
        }
        FUN_00da8810(0x41200000);
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
      }
    }
  }
  return;
}


// src/managers/triggermanager/cCondIsScrCollisionOn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7CB90..00C865A0, 5 functions

#include "mgrr.h"

// 00C7CB90  Trigger::cCondIsScrCollisionOn::cCondIsScrCollisionOn  size=38  [class]
void __fastcall Trigger::cCondIsScrCollisionOn::cCondIsScrCollisionOn(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}

// 00C7CBD0  Trigger::cCondIsScrCollisionOn::vf10  size=1  [class]
void Trigger::cCondIsScrCollisionOn::vf10(void)

{
  return;
}

// 00C7CBE0  Trigger::cCondIsScrCollisionOn::vf14  size=149  [class]
undefined4 __fastcall Trigger::cCondIsScrCollisionOn::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  int unaff_ESI;
  int iVar4;
  int local_c [3];
  
  iVar4 = 0;
  local_c[1] = 0;
  local_c[0] = 0;
  piVar1 = (int *)FUN_00c14bb0();
  iVar2 = (**(code **)(*piVar1 + 0x28))(local_c,*(undefined4 *)(param_1 + 0x10));
  if ((iVar2 != 0) && (0 < unaff_ESI)) {
    do {
      piVar1 = *(int **)(iVar2 + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar1 + 8))();
        if (iVar3 != 0) {
          local_c[0] = 0;
          iVar3 = (**(code **)(**(int **)(iVar2 + iVar4 * 4) + 0xe8))(param_1 + 0x14,local_c,1);
          if ((iVar3 != 0) && (local_c[0] == 1)) {
            unaff_EBX = 1;
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < unaff_ESI);
    return unaff_EBX;
  }
  return 0;
}

// 00C7CC80  Trigger::cCondIsScrCollisionOn::vf1C  size=40  [class]
void __thiscall Trigger::cCondIsScrCollisionOn::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x18);
  return;
}

// 00C865A0  Trigger::cCondIsScrCollisionOn::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsScrCollisionOn::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


// src/managers/triggermanager/cCondStartAnimation.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C79C90..00C9C8F0, 8 functions

#include "mgrr.h"

// 00C79C90  Trigger::cCondStartAnimation::vf1C  size=22  [class]
void __thiscall Trigger::cCondStartAnimation::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  return;
}

// 00C84ED0  Trigger::cCondStartAnimation::vf04  size=17  [class]
void Trigger::cCondStartAnimation::vf04(void)

{
  FUN_008609b0(0x10,PTR_DAT_018ab998);
  return;
}

// 00C84EF0  Trigger::cCondStartAnimation::vf14  size=173  [class]
undefined4 __fastcall Trigger::cCondStartAnimation::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar3 = 0;
    do {
      FUN_00a81330();
      iVar1 = FUN_00a7c890();
      if (iVar1 != 0) {
        FUN_00c83b60(local_8,&DAT_0165bfbc,*(undefined4 *)(param_1 + 0x14));
        iVar2 = FUN_00e33270(local_8);
        if (((iVar2 != -1) && ((*(uint *)(iVar1 + 0x94) & 1) != 0)) &&
           ((*(uint *)(iVar1 + 0x94) & 2) != 0)) {
          iVar1 = FUN_0085be10(iVar2);
          if (iVar1 == 0) {
            *(undefined4 *)(param_1 + 0x2c) = 1;
            return 1;
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  return 0;
}

// 00C915B0  Trigger::cCondStartAnimation::vf08  size=43  [class]
void __fastcall Trigger::cCondStartAnimation::vf08(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x1c),0);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

// 00C96080  Trigger::cCondStartAnimation::cCondStartAnimation  size=41  [class]
void __fastcall Trigger::cCondStartAnimation::cCondStartAnimation(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = vftable;
  param_1[3] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}

// 00C9C880  Trigger::cCondStartAnimation::vf00  size=75  [class]
undefined4 * __thiscall Trigger::cCondStartAnimation::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[7] != 0) {
    param_1[9] = 0;
    if (param_1[10] != 0) {
      FUN_00dd48d0(param_1[7],0);
      param_1[10] = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
  }
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C9C8D0  Trigger::cCondStartAnimation::vf0C  size=18  [class]
undefined4 __fastcall Trigger::cCondStartAnimation::vf0C(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_00c960f0();
  return 1;
}

// 00C9C8F0  Trigger::cCondStartAnimation::vf10  size=12  [class]
void __fastcall Trigger::cCondStartAnimation::vf10(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_00c960f0();
    return;
  }
  return;
}


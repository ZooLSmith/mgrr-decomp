// src/managers/triggermanager/cCondEndAnimation.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C79CB0..00C9C950, 8 functions

#include "mgrr.h"

// 00C79CB0  Trigger::cCondEndAnimation::vf0C  size=13  [class]
undefined4 __fastcall Trigger::cCondEndAnimation::vf0C(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return 1;
}

// 00C79CC0  Trigger::cCondEndAnimation::vf1C  size=22  [class]
void __thiscall Trigger::cCondEndAnimation::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x10) = param_2 + 8;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  return;
}

// 00C84FA0  Trigger::cCondEndAnimation::vf04  size=17  [class]
void Trigger::cCondEndAnimation::vf04(void)

{
  FUN_00c82dd0(0x10,PTR_DAT_018ab998);
  return;
}

// 00C84FC0  Trigger::cCondEndAnimation::vf14  size=213  [class]
undefined4 __fastcall Trigger::cCondEndAnimation::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c890();
        if (iVar1 != 0) {
          FUN_00c83b60(local_8,&DAT_0165bfbc,*(undefined4 *)(param_1 + 0x14));
          iVar1 = FUN_00e33270(local_8);
          if (*(int *)(*(int *)(param_1 + 0x1c) + 4 + iVar2 * 8) == 0) {
            if (iVar1 != -1) {
              iVar1 = FUN_0085be10(iVar1);
              if (iVar1 == 0) {
                *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4 + iVar2 * 8) = 1;
              }
            }
          }
          else {
            if (iVar1 == -1) {
LAB_00c85085:
              *(undefined4 *)(param_1 + 0x2c) = 1;
              return 1;
            }
            iVar1 = FUN_0085be10(iVar1);
            if (iVar1 != 0) goto LAB_00c85085;
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x24));
  }
  return 0;
}

// 00C915E0  Trigger::cCondEndAnimation::vf08  size=43  [class]
void __fastcall Trigger::cCondEndAnimation::vf08(int param_1)

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

// 00C96190  Trigger::cCondEndAnimation::cCondEndAnimation  size=41  [class]
void __fastcall Trigger::cCondEndAnimation::cCondEndAnimation(undefined4 *param_1)

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

// 00C9C900  Trigger::cCondEndAnimation::vf00  size=75  [class]
undefined4 * __thiscall Trigger::cCondEndAnimation::vf00(undefined4 *param_1,byte param_2)

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

// 00C9C950  Trigger::cCondEndAnimation::vf10  size=12  [class]
void __fastcall Trigger::cCondEndAnimation::vf10(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    FUN_00c96200();
    return;
  }
  return;
}


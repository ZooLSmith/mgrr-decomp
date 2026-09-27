// src/behavior/Behavior_raw.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040DBD0..00A98280, 4 functions

#include "mgrr.h"
#include "Behavior.h"

// 0040DBD0  Behavior::setEmSetInfo  size=8  [class]
undefined4 Behavior::setEmSetInfo(void)

{
  return 1;
}

// 00A8CD20  Behavior::setCutCrerateInfo  size=31  [class]
void Behavior::setCutCrerateInfo(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42000;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00A8CDB0  Behavior::getAttackInfo  size=37  [class]
undefined4 Behavior::getAttackInfo(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x110,&DAT_01b7bd48);
  if (iVar1 != 0) {
    uVar2 = CollisionAttackData::CollisionAttackData();
    return uVar2;
  }
  return 0;
}

// 00A98280  Behavior::vf60  size=102  [class]
void __fastcall Behavior::vf60(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_1 + 0x4c0);
  if ((uVar1 & 0x20000) == 0) {
    return;
  }
  if ((uVar1 & 0x40000) != 0) {
    *(int *)(param_1 + 0x834) = *(int *)(param_1 + 0x834) + 1;
    if (6 < *(int *)(param_1 + 0x834)) {
      *(uint *)(param_1 + 0x4c0) = uVar1 & 0xfff8ffff;
      return;
    }
    uVar2 = (*(int *)(param_1 + 0x834) + -1) / 2 & 0x80000001;
    bVar3 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar3 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar3) {
      *(uint *)(param_1 + 0x4c0) = uVar1 & 0xfffeffff;
      return;
    }
  }
  *(uint *)(param_1 + 0x4c0) = uVar1 | 0x10000;
  return;
}


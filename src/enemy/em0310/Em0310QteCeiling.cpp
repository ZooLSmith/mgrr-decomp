// src/enemy/em0310/Em0310QteCeiling.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057E6E0..00AB7080, 10 functions

#include "mgrr.h"
#include "Em0310QteCeiling.h"

// 0057E6E0  Em0310QteCeiling::vf4C  size=84  [class]
void __fastcall Em0310QteCeiling::vf4C(int *param_1)

{
  BehaviorBgBase::vf4C();
  if ((DAT_01bea060 & 0x20000000) != 0) {
    (**(code **)(*param_1 + 0x20))();
  }
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] | 0x400000;
    *(undefined4 *)param_1[0xdc] = 0;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 1;
    *(undefined4 *)(param_1[0xdc] + 8) = 1;
  }
  return;
}

// 0057E740  Em0310QteCeiling::vf50  size=16  [class]
void Em0310QteCeiling::vf50(void)

{
  BehaviorBgBase::vf50();
  FUN_00a93170();
  return;
}

// 0057E750  Em0310QteCeiling::thunk_vf1D0  size=5  [class]
void __thiscall Em0310QteCeiling::thunk_vf1D0(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x8ac) == 0) || (*(int *)(param_2 + 0xec) != 0)) {
    FUN_00a8e5d0(param_1,param_2,0);
  }
  return;
}

// 0057E770  Em0310QteCeiling::vf1B8  size=31  [class]
void Em0310QteCeiling::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42415;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00586400  Em0310QteCeiling::vf40  size=235  [class]
undefined4 __fastcall Em0310QteCeiling::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = BehaviorBgBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>(0,1);
  FUN_00410540(8,&DAT_01b7bd48);
  uVar2 = FUN_00a8d2a0();
  puVar3 = (undefined4 *)FUN_009f8b60();
  iVar1 = CollisionSphere::CollisionSphere(2,*puVar3,0);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00d771d0(1);
  *(undefined4 *)(iVar1 + 0x380) = 0;
  FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
  *(undefined4 *)(iVar1 + 0x510) = 0x41400000;
  FUN_00a93a00(iVar1,uVar2);
  FUN_00d7b0f0();
  FUN_00d7b890();
  FUN_009fd240();
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  *(undefined4 *)(param_1 + 0xb74) = 0;
  return 1;
}

// 0058AA00  Em0310QteCeiling::vf44  size=72  [class]
void __fastcall Em0310QteCeiling::vf44(int param_1)

{
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  BehaviorBgBase::vf44();
  return;
}

// 005910D0  Em0310QteCeiling::vf48  size=159  [class]
void __fastcall Em0310QteCeiling::vf48(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  BehaviorBgBase::vf48();
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  piVar5 = (int *)param_1[0x19f];
  piVar4 = piVar5 + param_1[0x1a1] * 0x54;
  for (; piVar5 != piVar4; piVar5 = piVar5 + 0x54) {
    iVar3 = FUN_00a81330();
    if (((((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) && (iVar1 = *piVar5, iVar1 != 0))
        && ((iVar1 != 1 && (iVar1 != 2)))) &&
       ((iVar1 != 0x1b0 && ((iVar1 != 0x147 && ((*(byte *)((int)piVar5 + 0x92) & 1) != 0)))))) {
      pcVar2 = *(code **)(*param_1 + 0x198);
      param_1[0x2dd] = 1;
      (*pcVar2)(iVar3,piVar5,1);
    }
  }
  return;
}

// 00AA6410  Em0310QteCeiling::Em0310QteCeiling  size=29  [class]
undefined4 * __fastcall Em0310QteCeiling::Em0310QteCeiling(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  FUN_004105d0();
  return param_1;
}

// 00AA6430  Em0310QteCeiling::vf04  size=6  [class]
undefined * Em0310QteCeiling::vf04(void)

{
  return &DAT_01b35154;
}

// 00AB7080  Em0310QteCeiling::vf00  size=30  [class]
undefined4 __thiscall Em0310QteCeiling::vf00(undefined4 param_1,byte param_2)

{
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


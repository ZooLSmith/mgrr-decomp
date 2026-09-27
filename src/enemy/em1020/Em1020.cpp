// src/enemy/em1020/Em1020.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005C8EE0..00AB9390, 11 functions

#include "mgrr.h"
#include "Em1020.h"

// 005C8EE0  Em1020::vf44  size=30  [class]
void Em1020::vf44(void)

{
  FUN_00a8f000();
  FUN_00a9d8a0();
  FUN_00a944d0();
  BehaviorEmBase::vf44();
  return;
}

// 005C8F00  Em1020::vf50  size=23  [class]
void Em1020::vf50(void)

{
  FUN_00a93170();
  BehaviorEmBase::vf50();
  FUN_00a8efe0();
  return;
}

// 005C8F20  Em1020::vf30  size=5  [class]
void __fastcall Em1020::vf30(int param_1)

{
  BehaviorAppBase::vf30();
  if (*(int *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0xb0) = *(undefined4 *)(param_1 + 0xab8);
  }
  return;
}

// 005C8F30  Em1020::vf48  size=257  [class]
void __fastcall Em1020::vf48(int *param_1)

{
  float fVar1;
  float10 fVar2;
  
  BehaviorEmBase::vf48();
  if (param_1[0x3b8] != 0) {
    if ((*(byte *)(param_1 + 900) & 1) == 0) {
      (**(code **)(*param_1 + 0x1c))();
      param_1[0x3b8] = 0;
      if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
        param_1[0xd9] = param_1[0xd9] | 0x400000;
        *(undefined4 *)param_1[0xdc] = 0;
      }
      if (param_1[0xdc] != 0) {
        *(undefined4 *)(param_1[0xdc] + 4) = 1;
        *(undefined4 *)(param_1[0xdc] + 8) = 1;
      }
    }
    else {
      if ((float)param_1[0x3b9] == 0.0) {
        FUN_00aa92c0(1);
      }
      else if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
        (**(code **)(*param_1 + 0x1c))();
      }
      FUN_00a92fb0();
      fVar2 = (float10)FUN_00e049b0();
      fVar1 = (float)param_1[0x3b9];
      param_1[0x3b9] = (int)(float)(fVar2 + (float10)fVar1);
      if ((float10)30.0 < fVar2 + (float10)fVar1) {
        param_1[0x3b8] = 0;
        if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
          param_1[0xd9] = param_1[0xd9] | 0x400000;
          *(undefined4 *)param_1[0xdc] = 0;
        }
        if (param_1[0xdc] != 0) {
          *(undefined4 *)(param_1[0xdc] + 4) = 1;
          *(undefined4 *)(param_1[0xdc] + 8) = 1;
          return;
        }
      }
    }
  }
  return;
}

// 005C9040  Em1020::vf4C  size=56  [class]
void __fastcall Em1020::vf4C(int param_1)

{
  BehaviorEmBase::vf4C();
  if (((*(char *)(param_1 + 0x470) == '\0') || ((*(byte *)(param_1 + 0x472) & 0x80) == 0)) ||
     (*(char *)(param_1 + 0x471) == '\0')) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  return;
}

// 005C9080  Em1020::setEmSetInfo  size=24  [class]
undefined4 Em1020::setEmSetInfo(undefined4 param_1)

{
  FUN_0040ac60(param_1);
  return 1;
}

// 005C9140  Em1020::startup  size=516  [class]
undefined4 __fastcall Em1020::startup(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char local_100 [128];
  char local_80 [128];
  
  iVar1 = BehaviorEmBase::startup();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00a986d0();
  FUN_00a8efe0();
  if (param_1[0x1ec] != 0) {
    FUN_008f03a0(0x20,1);
    FUN_008f03a0(0x40,1);
    FUN_008f03a0(8,1);
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
  uVar2 = FUN_00a8d2a0();
  puVar3 = (undefined4 *)FUN_009f8b60();
  iVar1 = CollisionSphere::CollisionSphere(2,*puVar3,0);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x380) = 0;
  FUN_00d77c50(param_1[0x13c],0);
  *(undefined4 *)(iVar1 + 0x510) = 0x3f000000;
  FUN_00a93a00(iVar1,uVar2);
  FUN_00d7b0f0();
  FUN_00d7b890();
  FUN_00410540(0x10,&DAT_01b7bd48);
  _sprintf_s(local_100,0x80,"Ba0154_%s.mot",&DAT_0163b5f4);
  uVar2 = FUN_00de4550(local_100,0);
  _sprintf_s(local_80,0x80,"Ba0154_%s_0_seq.bxm",&DAT_0163b5f4);
  uVar4 = FUN_00de4550(local_80,0);
  FUN_00a9efb0(uVar2,uVar4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  (**(code **)(*param_1 + 0x20))();
  param_1[0x3b9] = 0;
  param_1[0x3b8] = 1;
  FUN_009fd240();
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
    *(undefined4 *)param_1[0xdc] = 1;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 0;
    *(undefined4 *)(param_1[0xdc] + 8) = 0;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 0xc) = 1;
  }
  FUN_00a8ee10(1);
  FUN_00a8ee20(1);
  return 1;
}

// 005C9350  Em1020::vf32C  size=90  [class]
undefined4 __fastcall Em1020::vf32C(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = *(int *)(param_1 + 0x67c);
    iVar2 = *(int *)(param_1 + 0x684) * 0x150 + iVar1;
    if (iVar1 != iVar2) {
      while (*(int *)(iVar1 + 0x94) == 0) {
        iVar1 = iVar1 + 0x150;
        if (iVar1 == iVar2) {
          return 0;
        }
      }
      FUN_00a8e5d0(param_1,iVar1,0);
    }
  }
  return 0;
}

// 00AB09E0  Em1020::Em1020  size=29  [class]
undefined4 * __fastcall Em1020::Em1020(undefined4 *param_1)

{
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = vftable;
  FUN_004ec5c0();
  return param_1;
}

// 00AB0A00  Em1020::vf04  size=6  [class]
undefined * Em1020::vf04(void)

{
  return &DAT_01b351e4;
}

// 00AB9390  Em1020::destruct  size=30  [class]
undefined4 __thiscall Em1020::destruct(undefined4 param_1,byte param_2)

{
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


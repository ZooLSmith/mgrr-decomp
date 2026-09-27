// src/enemy/em1000/Em1000.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005C6660..00AB7740, 13 functions

#include "mgrr.h"
#include "Em1000.h"

// 005C6660  Em1000::vf114  size=35  [class]
void __thiscall Em1000::vf114(int *param_1,int param_2)

{
  Bh0064::vf114(param_2);
  (**(code **)(*param_1 + 0x118))(*(undefined4 *)(param_2 + 4));
  return;
}

// 005C6690  Em1000::vf4C  size=5  [class]
void __fastcall Em1000::vf4C(int *param_1)

{
  (**(code **)(*param_1 + 0x218))();
  if ((param_1[0x1cd] < 1) && (0 < param_1[0x1cc])) {
    param_1[0x1cc] = param_1[0x1cc] + -1;
  }
  if ((param_1[499] != 0) && (param_1[500] != 0)) {
    FUN_00d82990(param_1[500]);
  }
  return;
}

// 005C66A0  Em1000::vf50  size=42  [class]
void __fastcall Em1000::vf50(int *param_1)

{
  Behavior::vf50();
  (**(code **)(*param_1 + 100))();
  switchD_0080dbae::default();
  if (param_1[0x1ec] != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 005C66D0  Em1000::vf54  size=5  [class]
void __fastcall Em1000::vf54(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (((param_1[0x13c] != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 0x94) & 1) != 0)) {
    FUN_00e30490();
    FUN_00e304b0();
  }
  if (param_1[0x1f1] != 0) {
    FUN_00a9ccb0();
  }
  if ((param_1[0x1da] != 0) && (iVar1 = (**(code **)(*param_1 + 0x244))(), iVar1 != 0)) {
    if (param_1[0x1db] != 0) {
      if (param_1[0x13c] != 0) {
        FUN_00a7c910();
      }
      fVar2 = (float10)FUN_00e049b0();
      FUN_00a01350((float)fVar2,0);
    }
    if (param_1[0x1dc] != 0) {
      if (param_1[0x13c] != 0) {
        FUN_00a7c910();
      }
      fVar2 = (float10)FUN_00e049b0();
      FUN_00a01350((float)fVar2,0);
    }
  }
  if (param_1[0x1f1] == 0) {
    return;
  }
  FUN_00a9cef0();
  return;
}

// 005C6710  Em1000::vf30  size=45  [class]
void __fastcall Em1000::vf30(int param_1)

{
  undefined4 *puVar1;
  
  Bh0064::vf30();
  if (*(int *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x34) = 1;
    puVar1 = (undefined4 *)FUN_009f8b60();
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x38) = *puVar1;
  }
  return;
}

// 005C6740  Em1000::startup  size=611  [class]
undefined4 __fastcall Em1000::startup(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_24 [4];
  undefined4 uStack_14;
  
  iVar3 = Behavior::startup();
  if (iVar3 == 0) {
    return 0;
  }
  FUN_00a7c950();
  if (param_1[0x128] != 100) {
    iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = RigidBodyCollision::RigidBodyCollision();
    }
    param_1[0x1ec] = iVar3;
    local_24[0] = 0;
    uVar4 = FUN_00a54ae0(local_24,param_1 + 0x125,"_col.hkx");
    iVar3 = FUN_008f6410(param_1[0x13c],uVar4,local_24[0]);
    if (iVar3 != 0) {
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))(0xb);
      puVar5 = (undefined4 *)FUN_009f8b60();
      (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar5);
      FUN_008f1600(0x80000000);
      FUN_008f1600(0x20);
    }
    if (param_1[299] != 0) {
      FUN_00aa4080(4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      (**(code **)(*param_1 + 100))();
      switchD_0080dbae::default();
    }
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
    uVar4 = FUN_00a8d2a0();
    FUN_00410540(8,&DAT_01b7bd48);
    puVar5 = (undefined4 *)FUN_009f8b60();
    iVar3 = CollisionCapsule::CollisionCapsule(2,*puVar5,0);
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined4 *)(iVar3 + 0x380) = 0;
    FUN_00d77c50(param_1[0x13c],0);
    *(undefined4 *)(iVar3 + 0x594) = 0x3fc00000;
    *(undefined4 *)(iVar3 + 0x590) = 0x3f000000;
    *(undefined4 *)(iVar3 + 0x470) = 0x3fc90fdb;
    *(undefined4 *)(iVar3 + 0x474) = 0;
    *(undefined4 *)(iVar3 + 0x478) = 0;
    *(undefined4 *)(iVar3 + 0x47c) = uStack_14;
    FUN_00a93a00(iVar3,uVar4);
    FUN_00d7b0f0();
    FUN_00d7b890();
    *(undefined4 *)(*(int *)(iVar3 + 0x37c) + 0x4c) = 1;
    FUN_009fd240();
    if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
      param_1[0xd9] = param_1[0xd9] | 0x400000;
      *(undefined4 *)param_1[0xdc] = 0;
    }
  }
  iVar3 = 0;
  local_24[0] = 0;
  if (0 < (short)param_1[0xc9]) {
    do {
      iVar2 = param_1[200];
      iVar6 = *(int *)(*(int *)(iVar2 + 0x60 + iVar3) + 0x40);
      if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_016433ec), iVar6 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar3);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      local_24[0] = local_24[0] + 1;
      iVar3 = iVar3 + 0x70;
    } while (local_24[0] < (short)param_1[0xc9]);
  }
  return 1;
}

// 005C69B0  Em1000::vf44  size=108  [class]
void __fastcall Em1000::vf44(int param_1)

{
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  if (*(int *)(param_1 + 0x4a0) != 100) {
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
  }
  Behavior::vf44();
  return;
}

// 005C6A20  FUN_005c6a20  size=254  [between]
void __fastcall FUN_005c6a20(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 local_160 [148];
  int local_cc;
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  iVar4 = *(int *)(param_1 + 0x67c);
  iVar5 = *(int *)(param_1 + 0x684) * 0x150 + iVar4;
  FUN_00445db0();
  iVar2 = -1;
  bVar1 = false;
  if (iVar4 != iVar5) {
    do {
      if (iVar2 < *(int *)(iVar4 + 4)) {
        bVar1 = true;
        FUN_00448f50(iVar4);
        iVar2 = *(int *)(iVar4 + 4);
      }
      iVar4 = iVar4 + 0x150;
    } while (iVar4 != iVar5);
    if (bVar1) {
      if (local_cc != 0) {
        FUN_00a8e5d0(param_1,local_160,0);
        return;
      }
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        FUN_00a81330();
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
          puVar6 = &DAT_01be9d20;
          (**(code **)(*piVar3 + 4))(&DAT_01be9d20);
          iVar4 = FUN_00dd6d80(puVar6);
          if (iVar4 != 0) {
            FUN_00b3b9f0(local_160,*(undefined4 *)(param_1 + 0x4f0));
          }
        }
      }
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  return;
}

// 005C6B20  Em1000::vf48  size=27  [class]
void __fastcall Em1000::vf48(int param_1)

{
  BehaviorDebrisActor::vf48();
  if (*(int *)(param_1 + 0x4a0) != 100) {
    FUN_005c6a20();
    return;
  }
  return;
}

// 00AA66E0  Em1000::Em1000  size=29  [class]
undefined4 * __fastcall Em1000::Em1000(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AA6700  Em1000::vf04  size=6  [class]
undefined * Em1000::vf04(void)

{
  return &DAT_01b351dc;
}

// 00AA6710  Em1000::vf1D0  size=3  [class]
void Em1000::vf1D0(void)

{
  return;
}

// 00AB7740  Em1000::destruct  size=105  [class]
undefined4 * __thiscall Em1000::destruct(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


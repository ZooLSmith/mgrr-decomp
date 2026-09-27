// src/enemy/em0310/Em0310Shield.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057E550..00AB6FE0, 10 functions

#include "mgrr.h"
#include "Em0310Shield.h"

// 0057E550  Em0310Shield::vf48  size=75  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Em0310Shield::vf48(int param_1)

{
  float fVar1;
  
  BehaviorDebrisActor::vf48();
  if ((*(int *)(param_1 + 0x980) != 0) &&
     (fVar1 = *(float *)(param_1 + 0x984) - _DAT_01be942c, *(float *)(param_1 + 0x984) = fVar1,
     fVar1 <= 0.0)) {
    FUN_00a8e5d0(param_1,param_1 + 0x880,0);
    *(undefined4 *)(param_1 + 0x980) = 0;
  }
  return;
}

// 0057E5A0  Em0310Shield::vf4C  size=5  [class]
void __fastcall Em0310Shield::vf4C(int *param_1)

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

// 00585EC0  Em0310Shield::startup  size=495  [class]
undefined4 __fastcall Em0310Shield::startup(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int local_24;
  undefined4 local_14;
  
  iVar2 = Behavior::startup();
  if (iVar2 != 0) {
    FUN_009fd240();
    iVar2 = 0;
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      **(undefined4 **)(param_1 + 0x370) = 0;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      FUN_00a1abe0(0);
    }
    local_24 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        iVar5 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar5 + 0x60 + iVar2) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_01642134), iVar3 != 0)) {
          puVar1 = (uint *)(iVar5 + 0x38 + iVar2);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        local_24 = local_24 + 1;
        iVar2 = iVar2 + 0x70;
      } while (local_24 < *(short *)(param_1 + 0x324));
    }
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
    iVar2 = *(int *)(param_1 + 0x360);
    if (*(int *)(param_1 + 0x360) == 0) {
      iVar2 = param_1;
    }
    if ((3 < *(short *)(iVar2 + 0x358)) && (iVar2 = *(int *)(iVar2 + 0x350), iVar2 != -0x210)) {
      puVar4 = (undefined4 *)FUN_009f8b60();
      iVar5 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x380) = 0;
        FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),(int)*(short *)(iVar2 + 0x2b0));
        *(undefined4 *)(iVar5 + 0x594) = 0x3f800000;
        *(undefined4 *)(iVar5 + 0x590) = 0x3e3851ec;
        *(undefined4 *)(iVar5 + 0x580) = 0x3f860a92;
        *(undefined4 *)(iVar5 + 0x584) = 0;
        *(undefined4 *)(iVar5 + 0x588) = 0;
        *(undefined4 *)(iVar5 + 0x58c) = local_14;
        FUN_00d771d0(1);
        uVar6 = FUN_00a8d2a0();
        FUN_00a93a00(iVar5,uVar6);
        *(uint *)(iVar5 + 900) = *(uint *)(iVar5 + 900) | 2;
        FUN_00d7b0f0();
        _strncpy_s((char *)(iVar5 + 0x394),0x20,"arm",0x1f);
        FUN_00d7b890();
      }
    }
    *(undefined4 *)(param_1 + 0x878) = 1;
    FUN_00410540(0x20,&DAT_01b7bd48);
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x984) = 0;
    *(undefined4 *)(param_1 + 0x980) = 0;
    return 1;
  }
  return 0;
}

// 0058A440  Em0310Shield::vf44  size=74  [class]
void __fastcall Em0310Shield::vf44(int param_1)

{
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  FUN_00a9d8a0();
  Behavior::vf44();
  return;
}

// 0058A490  Em0310Shield::vf54  size=223  [class]
void __fastcall Em0310Shield::vf54(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  Behavior::vf54();
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar5 = &DAT_01b35140;
    (**(code **)(*piVar2 + 4))(&DAT_01b35140);
    iVar1 = FUN_00dd6d70(puVar5);
    if (iVar1 != 0) {
      iVar1 = 0;
      while( true ) {
        iVar4 = *(int *)(param_1 + 0x360);
        iVar3 = iVar4;
        if (iVar4 == 0) {
          iVar3 = param_1;
        }
        if (*(short *)(iVar3 + 0x358) <= iVar1) break;
        if (iVar4 == 0) {
          iVar4 = param_1;
        }
        if ((((-1 < iVar1) && (iVar1 < *(short *)(iVar4 + 0x358))) &&
            (iVar4 = iVar1 * 0xb0 + *(int *)(iVar4 + 0x350), iVar4 != 0)) &&
           (((iVar4 = FUN_00a12210((int)*(short *)(iVar4 + 0xa0)), iVar4 != 0 &&
             (FUN_00a074d0(iVar4,0), iVar1 == 0)) && (*(int *)(iVar4 + 0xa8) != 0)))) {
          FUN_00a074d0(*(int *)(iVar4 + 0xa8),1);
        }
        iVar1 = iVar1 + 1;
      }
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x10000;
    }
  }
  return;
}

// 0058A570  Em0310Shield::vf30  size=74  [class]
void __fastcall Em0310Shield::vf30(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35140;
    (**(code **)(*piVar2 + 4))(&DAT_01b35140);
    iVar1 = FUN_00dd6d70(puVar3);
    if (iVar1 != 0) {
      FUN_00584f50(*(undefined4 *)(param_1 + 0x870));
    }
  }
  return;
}

// 00AA6370  Em0310Shield::Em0310Shield  size=51  [class]
undefined4 * __fastcall Em0310Shield::Em0310Shield(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_004105d0();
  FUN_00d93a30();
  return param_1;
}

// 00AA63B0  Em0310Shield::vf04  size=6  [class]
undefined * Em0310Shield::vf04(void)

{
  return &DAT_01b3514c;
}

// 00AA63C0  Em0310Shield::vf1D0  size=3  [class]
void Em0310Shield::vf1D0(void)

{
  return;
}

// 00AB6FE0  Em0310Shield::destruct  size=105  [class]
undefined4 * __thiscall Em0310Shield::destruct(undefined4 *param_1,byte param_2)

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


// src/misc/cMetalGearRayBoard.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0083F010..00AB99E0, 9 functions

#include "mgrr.h"
#include "cMetalGearRayBoard.h"

// 0083F010  FUN_0083f010  size=120  [callgraph]
void __fastcall FUN_0083f010(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xeb8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xea0));
  }
  if (*(int *)(param_1 + 0xe94) != 0) {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 != 0) {
      uVar2 = 2;
      FUN_00a7c8a0(2);
      FUN_00aa92c0(uVar2);
    }
  }
  if (*(int *)(param_1 + 0xe98) != 0) {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 != 0) {
      uVar2 = 2;
      FUN_00a7c8a0(2);
      FUN_00aa92c0(uVar2);
    }
  }
  if (*(int *)(param_1 + 0xeb8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xea0));
  }
  return;
}

// 0083F090  cMetalGearRayBoard::vf40  size=309  [class]
undefined4 __fastcall cMetalGearRayBoard::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_4;
  
  iStack_4 = param_1;
  iVar1 = MonThrowMoto::vf40();
  if ((iVar1 == 0) || (iVar1 = FUN_00dd7240(), iVar1 == 0)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb30) = 0;
  *(undefined4 *)(param_1 + 0xb38) = 0;
  *(undefined4 *)(param_1 + 0xb60) = 0;
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
    *(undefined4 *)(param_1 + 0xb38) = uVar2;
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(uVar2);
    Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),0);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0xb38)) {
      do {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(&iStack_4,iVar1);
        if (iStack_4 != 0) {
          uVar2 = FUN_009124a0();
          lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(iVar1,uVar2);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0xb38));
    }
  }
  iVar1 = FUN_00410540(4,&DAT_01b7bd48);
  if (iVar1 != 0) {
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      **(undefined4 **)(param_1 + 0x370) = 0;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
    iVar1 = *(int *)(param_1 + 0x4b0);
    if (iVar1 == 0xf0152) {
      *(undefined4 *)(param_1 + 0xb34) = 1000;
      return 1;
    }
    if ((iVar1 == 0xf0153) || (iVar1 == 0xf0154)) {
      *(undefined4 *)(param_1 + 0xb34) = 500;
      return 1;
    }
  }
  return 0;
}

// 0083F3B0  cMetalGearRayBoard::vf44  size=99  [class]
void __fastcall cMetalGearRayBoard::vf44(int param_1)

{
  if (*(int *)(param_1 + 0xb58) != 0) {
    FUN_00dd7270();
  }
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
  *(undefined4 *)(param_1 + 0x684) = 0;
  BehaviorBgBase::vf44();
  return;
}

// 0083F420  cMetalGearRayBoard::vf19C  size=179  [class]
void __thiscall cMetalGearRayBoard::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 0083F4E0  FUN_0083f4e0  size=444  [between]
undefined4 __fastcall FUN_0083f4e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  int *local_4;
  
  iVar3 = 0;
  param_1[0x1a1] = 0;
  if ((param_1[0x139] != 0) || ((*(byte *)(param_1 + 0x130) & 1) == 0)) {
    return 0;
  }
  if (((param_1[0x2ce] != 0) && (param_1[0x1ec] != 0)) && (local_4 = param_1, 0 < param_1[0x2ce])) {
    do {
      (**(code **)(*(int *)param_1[0x1ec] + 300))(&local_4,iVar3);
      if (local_4 != (int *)0x0) {
        FUN_00ac2080(iVar3);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0x2ce]);
  }
  iVar3 = 0;
  if (param_1[0x139] == 0) {
    piVar4 = (int *)param_1[0x19f];
    piVar2 = piVar4 + param_1[0x1a1] * 0x54;
    local_4 = (int *)0x0;
    if (piVar4 != piVar2) {
      while (((iVar1 = *piVar4, iVar1 == 0 || (iVar1 == 1)) ||
             ((iVar1 == 0x1b0 || ((iVar1 == 2 || (iVar1 = FUN_00a81330(), iVar1 == param_1[0x13c])))
              )))) {
        piVar4 = piVar4 + 0x54;
        if (piVar4 == piVar2) {
          return local_4;
        }
      }
      if (iVar1 != 0) {
        iVar3 = FUN_00a7c8a0();
      }
      if (((0 < param_1[0x2cd]) && (iVar3 != 0)) &&
         (iVar1 = FUN_009f9350(*(undefined4 *)(iVar3 + 0x4b0)), iVar1 != 0)) {
        (**(code **)(*param_1 + 0x21c))(iVar3,(char)piVar4[4],0x3c23d70a,0);
      }
      if ((param_1[0x2d8] != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
        puVar5 = &DAT_01b35a50;
        (**(code **)(*piVar2 + 4))(&DAT_01b35a50);
        iVar1 = FUN_00dd6d80(puVar5);
        if (iVar1 != 0) {
          FUN_0083f010();
        }
      }
      (**(code **)(*param_1 + 0x198))(iVar3,piVar4,1);
      piVar2 = param_1 + 0x2cd;
      *piVar2 = *piVar2 - piVar4[1];
      local_4 = (int *)0x1;
      if (*piVar2 < 0) {
        param_1[0x2cd] = 0;
      }
      FUN_00aa92c0(2);
      if (param_1[0x2cd] < 1) {
        param_1[0x2cd] = 0;
        FUN_0083f1d0();
      }
    }
    return local_4;
  }
  return 0;
}

// 0083F6A0  cMetalGearRayBoard::vf48  size=16  [class]
void cMetalGearRayBoard::vf48(void)

{
  BehaviorBgBase::vf48();
  FUN_0083f4e0();
  return;
}

// 00AB1680  cMetalGearRayBoard::cMetalGearRayBoard  size=28  [class]
undefined4 * __fastcall cMetalGearRayBoard::cMetalGearRayBoard(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  param_1[0x2d6] = 0;
  return param_1;
}

// 00AB16A0  cMetalGearRayBoard::vf04  size=6  [class]
undefined * cMetalGearRayBoard::vf04(void)

{
  return &DAT_01b35a54;
}

// 00AB99E0  cMetalGearRayBoard::vf00  size=54  [class]
undefined4 __thiscall cMetalGearRayBoard::vf00(undefined4 param_1,byte param_2)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


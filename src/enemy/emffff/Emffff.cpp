// src/enemy/emffff/Emffff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005C93B0..00AB6790, 11 functions

#include "mgrr.h"
#include "Emffff.h"

// 005C93B0  Emffff::startup  size=139  [class]
undefined4 __fastcall Emffff::startup(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar2 = BehaviorBg::startup();
  if (iVar2 != 0) {
    iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar2 != 0) {
      FUN_00a8caf0(0,0,0,0);
      (**(code **)(*param_1 + 0x20))();
      param_1[0x29c] = 0;
      FUN_00a7c950();
      uStack_20 = 0x3dcccccd;
      pcVar1 = *(code **)(*param_1 + 0x90);
      uStack_1c = 0x3dcccccd;
      uStack_18 = 0x3dcccccd;
      param_1[0x29e] = -1;
      (*pcVar1)(&uStack_20);
      return 1;
    }
  }
  return 0;
}

// 005C9440  Emffff::vf44  size=97  [class]
void __fastcall Emffff::vf44(int param_1)

{
  FUN_00a944d0();
  FUN_00a7c950();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  BehaviorBgBase::vf44();
  return;
}

// 005C94B0  Emffff::vf48  size=88  [class]
void __fastcall Emffff::vf48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
    iVar1 = **(int **)(param_1 + 0x7b0);
    uVar2 = FUN_009f8b40();
    (**(code **)(iVar1 + 0x114))(uVar2);
    if (*(int *)(param_1 + 0x764) != 0) {
      uVar2 = FUN_009f8b40();
      FUN_008e26e0(uVar2);
    }
  }
  return;
}

// 005C9510  Emffff::thunk_vf50  size=5  [class]
void Emffff::thunk_vf50(void)

{
  FUN_00a93170();
  BehaviorBgBase::vf50();
  return;
}

// 005C9560  FUN_005c9560  size=93  [between]
void __fastcall FUN_005c9560(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xa70) != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) {
    uVar2 = 0;
    FUN_00a7c8a0(0);
    FUN_00a9e060(uVar2);
    *(undefined4 *)(param_1 + 0xa70) = 0;
    FUN_00a7c950();
    *(undefined4 *)(param_1 + 0xa78) = 0xffffffff;
    FUN_00a8caf0(2,0,0,0);
  }
  return;
}

// 005C95F0  FUN_005c95f0  size=114  [between]
void __thiscall FUN_005c95f0(int *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_1[0x29c] == 0) {
    iVar3 = param_1[0x13c];
    uVar5 = 3;
    uVar2 = 0;
    iVar4 = param_3;
    FUN_00a7c8a0(0,param_2,iVar3,param_3,3);
    FUN_00a8c5f0(uVar2,param_2,iVar3,iVar4,uVar5);
    param_1[0x29c] = 1;
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    pcVar1 = *(code **)(*param_1 + 0x1c);
    param_1[0x29e] = param_3;
    (*pcVar1)();
    FUN_00a8caf0(1,0,0,0);
  }
  return;
}

// 005C9670  Emffff::vf4C  size=55  [class]
void __fastcall Emffff::vf4C(int *param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  BehaviorBg::thunk_vf4C();
  iVar1 = param_1[0x186];
  if ((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 == 2)) && (param_1[0x187] == 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
    param_1[0x187] = 1;
                    /* WARNING: Could not recover jumptable at 0x005c96a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

// 005C96B0  Emffff::vf1D0  size=240  [class]
void __thiscall Emffff::vf1D0(int param_1,int param_2)

{
  int *piVar1;
  undefined1 auStack_160 [288];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((*(int *)(param_2 + 0xec) != 0) && (*(int *)(param_1 + 0xa70) != 0)) {
    FUN_00a81330();
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x220))(0x40a00000);
      FUN_00ac4a90(100);
      FUN_00b39f00(0x19,0,0,0);
      FUN_004039a0(0xbe,piVar1,0);
      FUN_00e03080(piVar1[0x13c],0);
      uStack_40 = *(undefined4 *)(param_1 + 0x130);
      uStack_3c = *(undefined4 *)(param_1 + 0x134);
      uStack_38 = *(undefined4 *)(param_1 + 0x138);
      uStack_34 = *(undefined4 *)(param_1 + 0x13c);
      FUN_00a8c8b0(piVar1[300],auStack_160);
    }
    FUN_005c9560();
  }
  return;
}

// 00AAB860  Emffff::Emffff  size=29  [class]
undefined4 * __fastcall Emffff::Emffff(undefined4 *param_1)

{
  BehaviorBgBase::BehaviorBgBase();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AAB880  Emffff::vf04  size=6  [class]
undefined * Emffff::vf04(void)

{
  return &DAT_01b35200;
}

// 00AB6790  Emffff::destruct  size=30  [class]
undefined4 __thiscall Emffff::destruct(undefined4 param_1,byte param_2)

{
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


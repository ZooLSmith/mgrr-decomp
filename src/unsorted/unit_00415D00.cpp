// src/unsorted/unit_00415D00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00415D00..00416090, 8 functions

#include "mgrr.h"

// 00415D00  FUN_00415d00  size=163  [run]
undefined4 __fastcall FUN_00415d00(int param_1)

{
  int iVar1;
  
  iVar1 = Bm6041::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  lib::AllocatedArray<Behavior::InstructionContainer>::
  AllocatedArray<Behavior::InstructionContainer>();
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
    **(undefined4 **)(param_1 + 0x370) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  FUN_00410540(0x10,&DAT_01b7bd48);
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(0x10);
  Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),1);
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
  *(undefined4 *)(param_1 + 0xb44) = 200;
  *(undefined4 *)(param_1 + 0xb40) = 200;
  return 1;
}

// 00415DB0  FUN_00415db0  size=101  [run]
void __fastcall FUN_00415db0(int param_1)

{
  FUN_00a92ef0();
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
  BehaviorBgBase::vf44();
  if (*(int *)(param_1 + 0xb4c) != 0) {
    FUN_00a805f0();
    *(undefined4 *)(param_1 + 0xb4c) = 0;
  }
  return;
}

// 00415E20  FUN_00415e20  size=22  [run]
undefined4 __fastcall FUN_00415e20(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if ((*(byte *)(param_1 + 0x4c0) & 1) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  piVar5 = *(int **)(param_1 + 0x67c);
  piVar1 = piVar5 + *(int *)(param_1 + 0x684) * 0x54;
  while( true ) {
    if (piVar5 == piVar1) {
      return 0;
    }
    iVar3 = piVar5[1];
    iVar2 = FUN_00a81330();
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = FUN_00a7c8a0();
    }
    if ((piVar5[0x23] & 0x10000000U) != 0) {
      iVar3 = FUN_00fdbc60();
      iVar3 = 1 - iVar3;
    }
    iVar2 = *piVar5;
    if ((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) &&
       (((iVar2 != 0x1b0 && (iVar2 != 0x147)) &&
        ((iVar4 != 0 && (*(int *)(iVar4 + 0x4b0) == 0x20200)))))) break;
    piVar5 = piVar5 + 0x54;
  }
  *(int *)(param_1 + 0xb40) = *(int *)(param_1 + 0xb40) - iVar3;
  if (*(int *)(param_1 + 0xb40) < 1) {
    FUN_00a8caf0(1,0,0,0);
  }
  return 1;
}

// 00415E36  FUN_00415e36  size=223  [run]
undefined4 FUN_00415e36(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int *piVar5;
  
  *(undefined4 *)(unaff_EBP + 0x684) = 0;
  FUN_00ac2080(0);
  piVar5 = *(int **)(unaff_EBP + 0x67c);
  piVar1 = piVar5 + *(int *)(unaff_EBP + 0x684) * 0x54;
  while( true ) {
    if (piVar5 == piVar1) {
      return 0;
    }
    iVar3 = piVar5[1];
    iVar2 = FUN_00a81330();
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = FUN_00a7c8a0();
    }
    if ((piVar5[0x23] & 0x10000000U) != 0) {
      iVar3 = FUN_00fdbc60();
      iVar3 = 1 - iVar3;
    }
    iVar2 = *piVar5;
    if ((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) &&
       (((iVar2 != 0x1b0 && (iVar2 != 0x147)) &&
        ((iVar4 != 0 && (*(int *)(iVar4 + 0x4b0) == 0x20200)))))) break;
    piVar5 = piVar5 + 0x54;
  }
  *(int *)(unaff_EBP + 0xb40) = *(int *)(unaff_EBP + 0xb40) - iVar3;
  if (*(int *)(unaff_EBP + 0xb40) < 1) {
    FUN_00a8caf0(1,0,0,0);
  }
  return 1;
}

// 00415F20  FUN_00415f20  size=70  [run]
void __fastcall FUN_00415f20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00415e20();
  Bm0201::thunk_vf48();
  iVar1 = *(int *)(param_1 + 0x63c);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != *(int *)(iVar1 + 8) * 0x40 + iVar2) {
    iVar3 = *(int *)(iVar1 + 8) * 0x40 + iVar2;
    do {
      iVar2 = iVar2 + 0x40;
    } while (iVar2 != iVar3);
  }
  if (*(int *)(iVar1 + 4) != 0) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  return;
}

// 00415F70  FUN_00415f70  size=84  [run]
void __thiscall FUN_00415f70(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  FUN_00e020f0(*(undefined4 *)(param_1 + 0x4f0));
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00415FD0  FUN_00415fd0  size=180  [run]
void __fastcall FUN_00415fd0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined1 auStack_160 [348];
  
  if (param_1[0x187] == 0) {
    pcVar2 = *(code **)(*param_1 + 0x20);
    param_1[0x2d2] = 0x43340000;
    param_1[0x187] = 1;
    (*pcVar2)();
    uVar5 = 0;
    uVar3 = FUN_00a7c8a0(0);
    FUN_004039a0(1,uVar3,uVar5);
    FUN_00e020f0(param_1[0x13c]);
    FUN_00a8c8b0(param_1[300],auStack_160);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar1 = (float)param_1[0x2d2];
  FUN_00a92fb0();
  fVar4 = (float10)FUN_00e049b0();
  param_1[0x2d2] = (int)(float)((float10)fVar1 - fVar4);
  if ((float10)fVar1 - fVar4 < (float10)0) {
    FUN_009fdde0();
  }
  return;
}

// 00416090  FUN_00416090  size=27  [run]
void __fastcall FUN_00416090(int param_1)

{
  BehaviorBgBase::vf4C();
  if (*(int *)(param_1 + 0x618) == 1) {
    FUN_00415fd0();
    return;
  }
  return;
}


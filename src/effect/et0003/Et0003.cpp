// src/effect/et0003/Et0003.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005C9EE0..00AB8370, 8 functions

#include "mgrr.h"
#include "Et0003.h"

// 005C9EE0  Et0003::startup  size=37  [class]
undefined4 __fastcall Et0003::startup(int *param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  lib::AllocatedArray<Behavior::InstructionContainer>::
  AllocatedArray<Behavior::InstructionContainer>();
  (**(code **)(*param_1 + 0x20))();
  return 1;
}

// 005C9F10  Et0003::vf44  size=16  [class]
void Et0003::vf44(void)

{
  FUN_00a92ef0();
  Behavior::vf44();
  return;
}

// 005C9F20  Et0003::vf48  size=5  [class]
void __fastcall Et0003::vf48(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 0x64c) = 0;
  if (*(int *)(param_1 + 2000) != 0) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c910();
    }
    fVar1 = (float10)FUN_00e049b0();
    *(float *)(*(int *)(param_1 + 2000) + 8) = (float)(fVar1 * (float10)0.016666668);
  }
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d82df0(*(int *)(param_1 + 2000));
  }
  if (*(int *)(param_1 + 0x7d8) != 0) {
    thunk_FUN_00c73380();
  }
  *(undefined4 *)(param_1 + 0x860) = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined4 *)(param_1 + 0x86c) = 0x3f800000;
  return;
}

// 005C9F30  Et0003::vf50  size=25  [class]
void __fastcall Et0003::vf50(int *param_1)

{
  (**(code **)(*param_1 + 100))();
  FUN_00a93170();
  Behavior::vf50();
  return;
}

// 005C9F60  Et0003::vf4C  size=192  [class]
void __fastcall Et0003::vf4C(int param_1)

{
  int *piVar1;
  int iVar2;
  
  Behavior::vf4C();
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x63c) + 8)) {
    do {
      piVar1 = (int *)FUN_00a92f50(iVar2);
      if (*piVar1 == 0) {
        FUN_00a8caf0(4,0,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(param_1 + 0x63c) + 8));
  }
  FUN_00a9d860();
  iVar2 = FUN_00a8cab0();
  if (iVar2 == 4) {
    iVar2 = FUN_00a94d60(&DAT_0163b5f4);
    if (iVar2 != 0) {
      FUN_00a8caf0(5,0,0,0);
    }
  }
  iVar2 = FUN_00a8cab0();
  if (iVar2 == 4) {
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 0) {
      FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  return;
}

// 00AA6AE0  Et0003::Et0003  size=48  [class]
undefined4 * __fastcall Et0003::Et0003(undefined4 *param_1)

{
  int iVar1;
  
  Behavior::Behavior();
  *param_1 = vftable;
  iVar1 = 0x1d;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00AA6B20  Et0003::vf04  size=6  [class]
undefined * Et0003::vf04(void)

{
  return &DAT_01b35240;
}

// 00AB8370  Et0003::destruct  size=105  [class]
undefined4 * __thiscall Et0003::destruct(undefined4 *param_1,byte param_2)

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


// src/object/bh00a2/Bh00a2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B77E20..00B77F60, 9 functions

#include "mgrr.h"
#include "Bh00a2.h"

// 00B77E20  Bh00a2::vf44  size=40  [class]
void __fastcall Bh00a2::vf44(int param_1)

{
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  Behavior::vf44();
  return;
}

// 00B77E50  Bh00a2::thunk_vf48  size=5  [class]
void __fastcall Bh00a2::thunk_vf48(int param_1)

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

// 00B77E60  Bh00a2::thunk_vf4C  size=5  [class]
void __fastcall Bh00a2::thunk_vf4C(int *param_1)

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

// 00B77E70  Bh00a2::thunk_vf50  size=5  [class]
void __fastcall Bh00a2::thunk_vf50(int param_1)

{
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d829e0(*(int *)(param_1 + 2000));
  }
  if (((*(int *)(param_1 + 0x76c) != 0) || (*(int *)(param_1 + 0x770) != 0)) &&
     (*(int *)(param_1 + 0x768) != 0)) {
    switchD_0080dbae::default();
  }
  FUN_00a96f60();
  return;
}

// 00B77E80  Bh00a2::vf54  size=32  [class]
void __fastcall Bh00a2::vf54(int param_1)

{
  Behavior::vf54();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f40f0(param_1);
  }
  switchD_0080dbae::default();
  return;
}

// 00B77EA0  Bh00a2::Bh00a2  size=18  [class]
undefined4 * __fastcall Bh00a2::Bh00a2(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00B77EC0  Bh00a2::vf04  size=6  [class]
undefined * Bh00a2::vf04(void)

{
  return &DAT_01be9d74;
}

// 00B77EE0  Bh00a2::vf40  size=121  [class]
undefined4 __fastcall Bh00a2::vf40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = Behavior::startup();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = RigidBodyCollection::RigidBodyCollection_2();
  }
  *(int *)(param_1 + 0x7b0) = iVar2;
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x4f0);
    uVar3 = FUN_00de46d0("_col.hkx",0);
    uVar4 = FUN_00de4550("_col.hkx",0);
    FUN_008f6410(uVar1,uVar4,uVar3);
  }
  return 1;
}

// 00B77F60  Bh00a2::vf00  size=36  [class]
undefined4 * __thiscall Bh00a2::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  Behavior::Behavior_96();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


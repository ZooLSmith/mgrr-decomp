// src/enemy/em0042/Em0042.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0043DC50..00AB6D70, 12 functions

#include "types.h"

// 0043DC50  Em0042::thunk_vf30  size=5  [class]
void __fastcall Em0042::thunk_vf30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x674) = 1;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x3c) == 0) {
      puVar3 = (undefined4 *)FUN_009f8b60();
      iVar1 = *(int *)(param_1 + 0x588);
      uVar2 = *puVar3;
      *(undefined4 *)(iVar1 + 0x3c) = 1;
      *(undefined4 *)(iVar1 + 0x40) = uVar2;
      return;
    }
    *(undefined4 *)(iVar1 + 0x3c) = 1;
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x40);
  }
  return;
}

// 0043DC60  Em0042::vf34  size=5  [class]
void __fastcall Em0042::vf34(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
  }
  return;
}

// 0043DC70  Em0042::vf114  size=62  [class]
void __thiscall Em0042::vf114(int *param_1,int param_2)

{
  int iVar1;
  
  Bh0064::vf114(param_2);
  (**(code **)(*param_1 + 0x118))(*(undefined4 *)(param_2 + 4));
  iVar1 = param_1[0x162];
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xa8) = 1;
    *(undefined4 *)(iVar1 + 0xac) = 1;
  }
  return;
}

// 0043DCB0  Em0042::vf44  size=40  [class]
void __fastcall Em0042::vf44(int param_1)

{
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  Behavior::vf44();
  return;
}

// 0043DCE0  Em0042::vf48  size=5  [class]
void __fastcall Em0042::vf48(int param_1)

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

// 0043DCF0  Em0042::thunk_vf4C  size=5  [class]
void __fastcall Em0042::thunk_vf4C(int *param_1)

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

// 0043DD00  Em0042::vf40  size=222  [class]
undefined4 __fastcall Em0042::vf40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int local_4;
  
  local_4 = param_1;
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  local_4 = 0;
  iVar1 = FUN_00a54ae0(&local_4,param_1 + 0x494,"_col.hkx");
  if (iVar1 != 0) {
    iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = RigidBodyCollection::RigidBodyCollection_2();
    }
    *(undefined4 *)(param_1 + 0x7b0) = uVar3;
    iVar1 = FUN_008f6410(*(undefined4 *)(param_1 + 0x4f0),iVar1,local_4);
    if (iVar1 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1c);
      FUN_008f1600(0x80000000);
      puVar4 = (undefined4 *)FUN_009f8b60();
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar4);
      FUN_008f1600(0x20);
    }
  }
  switchD_0080dbae::default();
  return 1;
}

// 0043DDE0  Em0042::vf50  size=106  [class]
void __fastcall Em0042::vf50(int *param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_00c13920();
  iVar4 = (**(code **)(*piVar3 + 0x28))(0);
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c8a0();
    fVar1 = *(float *)(iVar4 + 0x40) - (float)param_1[0x10];
    fVar2 = *(float *)(iVar4 + 0x48) - (float)param_1[0x12];
    if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 50.0) {
      (**(code **)(*param_1 + 100))();
      FUN_00a93170();
    }
  }
  Behavior::vf50();
  if (param_1[0x1ec] != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 0043DE50  Em0042::vf54  size=75  [class]
void __fastcall Em0042::vf54(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_00c13920();
  iVar4 = (**(code **)(*piVar3 + 0x28))(0);
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c8a0();
    fVar1 = *(float *)(iVar4 + 0x40) - *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x48);
    if (50.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
      return;
    }
  }
  Behavior::vf54();
  return;
}

// 00AA6240  Em0042::Em0042  size=51  [class]
undefined4 * __fastcall Em0042::Em0042(undefined4 *param_1)

{
  int iVar1;
  
  Behavior::Behavior_95();
  *param_1 = vftable;
  iVar1 = 2;
  do {
    Animation::HandIk::HandIk();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00AA6280  Em0042::vf04  size=6  [class]
undefined * Em0042::vf04(void)

{
  return &DAT_01b34c58;
}

// 00AB6D70  Em0042::vf00  size=30  [class]
undefined4 __thiscall Em0042::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_103();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


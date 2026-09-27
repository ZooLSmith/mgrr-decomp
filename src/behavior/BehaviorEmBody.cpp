// src/behavior/BehaviorEmBody.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA6180..00AD2E80, 16 functions

#include "mgrr.h"
#include "BehaviorEmBody.h"

// 00AA6180  BehaviorEmBody::BehaviorEmBody  size=29  [class]
undefined4 * __fastcall BehaviorEmBody::BehaviorEmBody(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00AA61A0  BehaviorEmBody::vf04  size=6  [class]
undefined * BehaviorEmBody::vf04(void)

{
  return &DAT_01be9ca0;
}

// 00AA61B0  BehaviorEmBody::vf1D0  size=3  [class]
void BehaviorEmBody::vf1D0(void)

{
  return;
}

// 00AB6840  BehaviorEmBody::destruct  size=105  [class]
undefined4 * __thiscall BehaviorEmBody::destruct(undefined4 *param_1,byte param_2)

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

// 00AC6380  BehaviorEmBody::vf44  size=16  [class]
void BehaviorEmBody::vf44(void)

{
  Behavior::vf44();
  FUN_00a944d0();
  return;
}

// 00AC6390  BehaviorEmBody::vf4C  size=5  [class]
void __fastcall BehaviorEmBody::vf4C(int *param_1)

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

// 00AC63A0  BehaviorEmBody::vf50  size=16  [class]
void BehaviorEmBody::vf50(void)

{
  switchD_0080dbae::default();
  Behavior::vf50();
  return;
}

// 00ACDD60  BehaviorEmBody::startup  size=313  [class]
undefined4 __fastcall BehaviorEmBody::startup(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = Behavior::startup();
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x4b0);
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
  uVar3 = 0x3f99999a;
  if (uVar1 < 0x20152) {
    if (uVar1 != 0x20151) {
      uVar3 = 0x3f8ccccd;
      if (uVar1 < 0x20144) {
        if (((uVar1 != 0x20143) && (uVar1 != 0x20011)) && (uVar1 != 0x20141)) goto LAB_00acddeb;
      }
      else if (uVar1 != 0x20145) goto LAB_00acddeb;
    }
  }
  else if ((uVar1 != 0x20153) && (uVar3 = 0x3f8ccccd, uVar1 != 0x20161)) {
    if (uVar1 != 0x20171) goto LAB_00acddeb;
    uVar3 = 0x3fa66666;
  }
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
LAB_00acddeb:
  uVar3 = 2;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar3);
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar2 == 0) {
    return 0;
  }
  local_18 = 0x3f666666;
  local_14 = 0x3f99999a;
  local_10 = 0x3f8ccccd;
  local_c = 0x3e4ccccd;
  local_8 = 0x40400000;
  local_4 = 0x40000000;
  FUN_00a8e4d0(&local_c,&local_18);
  return 1;
}

// 00ACDEA0  FUN_00acdea0  size=107  [callgraph]
uint FUN_00acdea0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a81330();
      iVar1 = FUN_00a7c7e0();
      if (iVar1 != 0) {
        FUN_00a81330();
        piVar2 = (int *)FUN_00a7c8a0();
        if (piVar2 != (int *)0x0) {
          puVar3 = &DAT_01be9c78;
          (**(code **)(*piVar2 + 4))(&DAT_01be9c78);
          iVar1 = FUN_00dd6d80(puVar3);
          return -(uint)(iVar1 != 0) & (uint)piVar2;
        }
      }
    }
  }
  return 0;
}

// 00AD2CB0  BehaviorEmBody::vf30  size=59  [class]
void __fastcall BehaviorEmBody::vf30(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  Bh0064::vf30();
  piVar2 = (int *)FUN_00acdea0();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x30))();
  }
  iVar1 = *(int *)(param_1 + 0x588);
  if (iVar1 != 0) {
    uVar3 = FUN_009f8b40();
    *(undefined4 *)(iVar1 + 0x34) = 1;
    *(undefined4 *)(iVar1 + 0x38) = uVar3;
  }
  return;
}

// 00AD2CF0  BehaviorEmBody::setCutCrerateInfo  size=86  [class]
void BehaviorEmBody::setCutCrerateInfo(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00acdea0();
  if ((piVar1 != (int *)0x0) && (iVar2 = FUN_00a7c7e0(), iVar2 != 0)) {
    (**(code **)(*piVar1 + 0x1b8))(param_1,param_2,param_3);
    return;
  }
  if (0 < param_3) {
    do {
      *param_1 = 0x42000;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 00AD2D50  BehaviorEmBody::vf1BC  size=160  [class]
void __thiscall BehaviorEmBody::vf1BC(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined *puVar5;
  
  piVar1 = param_2;
  Bh0064::vf1BC(param_2);
  if (piVar1 != (int *)0x0) {
    puVar5 = &DAT_01be9ca0;
    (**(code **)(*piVar1 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar5);
    if (iVar2 != 0) {
      FUN_00a7c940(piVar1 + 0x21c);
      FUN_00a7c960(&param_2);
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
      piVar4 = (int *)FUN_00acdea0();
      if (piVar4 != (int *)0x0) {
        FUN_009f8a10(piVar4);
        (**(code **)(*piVar4 + 0x334))(param_1,piVar1);
      }
      *(int *)(param_1 + 0x840) = piVar1[0x210];
      *(int *)(param_1 + 0x844) = piVar1[0x211];
    }
  }
  return;
}

// 00AD2DF0  BehaviorEmBody::vf258  size=79  [class]
void BehaviorEmBody::vf258(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar3 = param_3;
      FUN_00a7c8a0(param_3);
      FUN_00a9e0d0(uVar3);
    }
  }
  piVar2 = (int *)FUN_00acdea0();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 600))(param_1,param_2,param_3);
  }
  return;
}

// 00AD2E40  BehaviorEmBody::vf260  size=24  [class]
void BehaviorEmBody::vf260(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00acdea0();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ad2e53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x260))();
    return;
  }
  return;
}

// 00AD2E60  BehaviorEmBody::vf1C8  size=22  [class]
void BehaviorEmBody::vf1C8(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00acdea0();
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ad2e73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x340))();
    return;
  }
  return;
}

// 00AD2E80  BehaviorEmBody::vf34  size=31  [class]
void BehaviorEmBody::vf34(void)

{
  int iVar1;
  
  Bh0064::vf34();
  iVar1 = FUN_00acdea0();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xa48) = 0;
  }
  return;
}


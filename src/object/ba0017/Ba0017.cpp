// src/object/ba0017/Ba0017.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00404610..00AB8E00, 11 functions

#include "mgrr.h"
#include "Ba0017.h"

// 00404610  Ba0017::vf44  size=23  [class]
void Ba0017::vf44(void)

{
  FUN_00a9d8a0();
  FUN_00a92ef0();
  BehaviorBgBase::vf44();
  return;
}

// 00404670  FUN_00404670  size=14  [between]
void FUN_00404670(void)

{
  FUN_00a8caf0(1,0,0,0);
  return;
}

// 00404680  FUN_00404680  size=88  [between]
void FUN_00404680(short param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = FUN_00a12210((int)param_1);
  if (iVar3 != 0) {
    *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4;
    fVar1 = param_2[2];
    fVar2 = param_3[2];
    *(float *)(iVar3 + 0x40) =
         ((*param_2 + *param_3) - *(float *)(iVar3 + 0x40)) * 0.1 + *(float *)(iVar3 + 0x40);
    *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar3 + 0x44);
    *(float *)(iVar3 + 0x48) =
         ((fVar1 + fVar2) - *(float *)(iVar3 + 0x48)) * 0.1 + *(float *)(iVar3 + 0x48);
  }
  return;
}

// 00404740  Ba0017::startup  size=182  [class]
undefined4 __fastcall Ba0017::startup(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_EDI;
  int iVar3;
  
  iVar1 = BehaviorBa::startup();
  if (iVar1 != 0) {
    lib::AllocatedArray<Behavior::InstructionContainer>::
    AllocatedArray<Behavior::InstructionContainer>();
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_009f8b40();
    }
    if (*(int *)(param_1 + 0x7b0) != 0) {
      FUN_008f1600(8);
    }
    iVar3 = 0;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
    if (0 < iVar1) {
      do {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(&stack0xfffffff8,iVar3);
        if (unaff_EDI != 0) {
          FUN_00916410("_damage");
        }
        iVar3 = iVar3 + 1;
        iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
      } while (iVar3 < iVar1);
    }
    return 1;
  }
  return 0;
}

// 00404800  FUN_00404800  size=396  [between]
void __fastcall FUN_00404800(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0,0x3f800000);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00a94ee0(0,0x28,0x122);
  if ((iVar2 != 0) && (iVar3 != 0)) {
    iVar3 = iVar3 + 0x40;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    FUN_00404680(5,&uStack_24,iVar3);
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    FUN_00404680(8,&uStack_24,iVar3);
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    FUN_00404680(0xc,&uStack_24,iVar3);
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    FUN_00404680(0xd,&uStack_24,iVar3);
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    FUN_00404680(0xe,&uStack_24,iVar3);
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    FUN_00404680(0x10,&uStack_24,iVar3);
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    FUN_00404680(0x11,&uStack_24,iVar3);
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    FUN_00404680(0x12,&uStack_24,iVar3);
  }
  return;
}

// 00404990  FUN_00404990  size=225  [between]
void FUN_00404990(void)

{
  int iVar1;
  
  FUN_00a935d0();
  FUN_00a8caf0(0,0,0,0);
  iVar1 = FUN_00a12210(5);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
  }
  iVar1 = FUN_00a12210(8);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
  }
  iVar1 = FUN_00a12210(0xc);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
  }
  iVar1 = FUN_00a12210(0xd);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
  }
  iVar1 = FUN_00a12210(0xe);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
  }
  iVar1 = FUN_00a12210(0x10);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
  }
  iVar1 = FUN_00a12210(0x11);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
  }
  iVar1 = FUN_00a12210(0x12);
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
  }
  return;
}

// 00404A80  Ba0017::vf48  size=29  [class]
void __fastcall Ba0017::vf48(int param_1)

{
  BehaviorBgBase::vf48();
  if (*(int *)(*(int *)(param_1 + 0x63c) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x63c) + 8) = 0;
  }
  return;
}

// 00404AA0  Ba0017::vf4C  size=96  [class]
void __fastcall Ba0017::vf4C(int param_1)

{
  ExcelStage::vf4C();
  if (*(int *)(param_1 + 0x618) == 0) {
    if (*(int *)(param_1 + 0x61c) == 0) {
      *(undefined4 *)(param_1 + 0x61c) = 1;
      FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0x8000000,0,0x3f800000);
    }
  }
  else if (*(int *)(param_1 + 0x618) == 1) {
    FUN_00404800();
    return;
  }
  return;
}

// 00AB0040  Ba0017::Ba0017  size=51  [class]
undefined4 * __fastcall Ba0017::Ba0017(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  iVar1 = 0x3f;
  do {
    FUN_004105d0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00AB0080  Ba0017::vf04  size=6  [class]
undefined * Ba0017::vf04(void)

{
  return &DAT_01b34b0c;
}

// 00AB8E00  Ba0017::destruct  size=43  [class]
undefined4 __thiscall Ba0017::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


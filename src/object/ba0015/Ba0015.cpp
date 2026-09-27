// src/object/ba0015/Ba0015.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00404300..00AB8DD0, 7 functions

#include "types.h"

// 00404300  Ba0015::vf44  size=23  [class]
void Ba0015::vf44(void)

{
  FUN_00a9d8a0();
  FUN_00a92ef0();
  BehaviorBgBase::vf44();
  return;
}

// 00404320  thunk_FUN_00a935d0  size=5  [between]
void __fastcall thunk_FUN_00a935d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x7ac);
  if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 4), iVar2 != iVar2 + *(int *)(iVar1 + 8) * 4)) {
    do {
      FUN_00d7b890();
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x7ac) + 4) +
                      *(int *)(*(int *)(param_1 + 0x7ac) + 8) * 4);
  }
  return;
}

// 00404370  Ba0015::vf40  size=330  [class]
undefined4 __fastcall Ba0015::vf40(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBP;
  uint *puVar5;
  int iVar6;
  int iStack_18;
  
  iVar1 = MonThrowMoto::vf40();
  if (iVar1 != 0) {
    iStack_18 = 0x40438c;
    lib::AllocatedArray<Behavior::InstructionContainer>::
    AllocatedArray<Behavior::InstructionContainer>();
    iStack_18 = 0x404391;
    piVar2 = (int *)FUN_00c13920();
    iVar6 = 0;
    iStack_18 = 0;
    iVar1 = (**(code **)(*piVar2 + 0x28))();
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    if (iVar3 != 0) {
      FUN_009f8b40();
    }
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_3(0x40);
    iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
    if (0 < iVar1) {
      puVar5 = (uint *)(param_1 + 0x2ef);
      do {
        (**(code **)(*(int *)param_1[0x1ec] + 300))(&stack0xfffffff0,0);
        if ((iStack_18 != 0) && (iVar1 = FUN_00916410("_damage"), iVar1 != 0)) {
          puVar5[-0x23] = 0x18c;
          puVar5[-0x22] = 100;
          puVar5[-0x20] = 0x1e;
          *(undefined1 *)(puVar5 + -0x1f) = 10;
          puVar5[-0x21] = 0x1e;
          *puVar5 = *puVar5 | 0x20000004;
          *(undefined1 *)((int)puVar5 + -0x7b) = 5;
          *(undefined2 *)(puVar5 + -2) = 0x4001;
          uVar4 = CollisionAttackData::CollisionAttackData(puVar5 + -0x23);
          Behavior::addBodyOffenseCollisionFromRigidBody(&iStack_18,iVar6,iVar6,2,uVar4);
          FUN_0091a980(unaff_EBP);
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 0x40;
        }
        iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
      } while (0 < iVar1);
    }
    (**(code **)(*param_1 + 0x20))();
    return 1;
  }
  return 0;
}

// 004044C0  Ba0015::vf48  size=29  [class]
void __fastcall Ba0015::vf48(int param_1)

{
  BehaviorBgBase::vf48();
  if (*(int *)(*(int *)(param_1 + 0x63c) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x63c) + 8) = 0;
  }
  return;
}

// 00AAFFD0  Ba0015::Ba0015  size=51  [class]
undefined4 * __fastcall Ba0015::Ba0015(undefined4 *param_1)

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

// 00AB0010  Ba0015::vf04  size=6  [class]
undefined * Ba0015::vf04(void)

{
  return &DAT_01b34b08;
}

// 00AB8DD0  Ba0015::vf00  size=43  [class]
undefined4 __thiscall Ba0015::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


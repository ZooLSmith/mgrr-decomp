// src/misc/DlcMoveBlock.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00603BE0..00AB9BB0, 5 functions

#include "mgrr.h"
#include "DlcMoveBlock.h"

// 00603BE0  DlcMoveBlock::startup  size=196  [class]
undefined4 __fastcall DlcMoveBlock::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BehaviorBa::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb28) = 1;
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xd4))(0x447a0000);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x58))(0x44fa0000);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x7c))(0x44fa0000);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0xa4))(0x3f800000);
    FUN_008f3c80();
  }
  FUN_00a8f7b0(1);
  *(undefined4 *)(param_1 + 0xb28) = 0;
  uVar2 = FUN_00e03ea0("movecube");
  *(undefined4 *)(param_1 + 0xb34) = 0;
  *(undefined4 *)(param_1 + 0xb30) = uVar2;
  *(undefined4 *)(param_1 + 0xb38) = 0;
  return 1;
}

// 00603CB0  DlcMoveBlock::vf48  size=219  [class]
void __fastcall DlcMoveBlock::vf48(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar2 = FUN_00d467a0();
  if ((iVar2 != 0) && (DAT_018b9174 == 0xd30)) {
    if (param_1[0x13b] == param_1[0x2cc]) {
      iVar3 = FUN_009c4bf0();
      iVar2 = *param_1;
      if (iVar3 < 3) {
        (**(code **)(iVar2 + 0x1c))();
        BehaviorBgBase::vf48();
        return;
      }
LAB_00603d74:
      (**(code **)(iVar2 + 0x20))();
      BehaviorBgBase::vf48();
      return;
    }
    if ((param_1[300] == 0xf5040) && (DAT_01b354dc == param_1[0x13b])) {
      if (param_1[0x2ce] == 0) {
        (**(code **)(*param_1 + 0x20))();
        param_1[0x2ce] = 1;
        BehaviorBgBase::vf48();
        return;
      }
      if (0.0 < (float)param_1[0x2cd]) {
        fVar4 = (float10)FUN_00a92ff0();
        fVar1 = (float)param_1[0x2cd];
        param_1[0x2cd] = (int)(float)((float10)fVar1 - fVar4);
        if ((float10)fVar1 - fVar4 <= (float10)0) {
          iVar2 = *param_1;
          param_1[0x2cd] = (int)(float)(float10)0;
          goto LAB_00603d74;
        }
      }
    }
  }
  BehaviorBgBase::vf48();
  return;
}

// 00AB1970  DlcMoveBlock::DlcMoveBlock  size=18  [class]
undefined4 * __fastcall DlcMoveBlock::DlcMoveBlock(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB1990  DlcMoveBlock::vf04  size=6  [class]
undefined * DlcMoveBlock::vf04(void)

{
  return &DAT_01b354d8;
}

// 00AB9BB0  DlcMoveBlock::destruct  size=43  [class]
undefined4 __thiscall DlcMoveBlock::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


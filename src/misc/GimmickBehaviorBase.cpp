// src/misc/GimmickBehaviorBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E2CF0..00AA8AE0, 17 functions

#include "mgrr.h"
#include "GimmickBehaviorBase.h"

// 005E2CF0  GimmickBehaviorBase::vf318  size=3  [class]
void GimmickBehaviorBase::vf318(void)

{
  return;
}

// 005E2D00  GimmickBehaviorBase::startup  size=128  [class]
bool __fastcall GimmickBehaviorBase::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BehaviorBa::startup();
  if (iVar1 == 0) {
    return false;
  }
  *(undefined4 *)(param_1 + 0xb34) = 0;
  *(undefined4 *)(param_1 + 0xb30) = 0;
  *(undefined4 *)(param_1 + 0xb3c) = 0;
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091adf0(0x10);
    FUN_0091adf0(0x20);
    FUN_0091adf0(0x40);
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x120))();
    *(undefined4 *)(param_1 + 0xb38) = uVar2;
  }
  iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  return iVar1 != 0;
}

// 005E2D80  GimmickBehaviorBase::vf44  size=23  [class]
void GimmickBehaviorBase::vf44(void)

{
  FUN_00a8c820();
  FUN_00a944d0();
  BehaviorBgBase::vf44();
  return;
}

// 005E2DA0  GimmickBehaviorBase::vf50  size=5  [class]
void __fastcall GimmickBehaviorBase::vf50(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xb24) != 0) && (*(int *)(param_1 + 0xb08) == 0)) {
    *(undefined4 *)(param_1 + 0xb24) = 0;
    if (*(int *)(param_1 + 0xb20) != 0) {
      piVar1 = (int *)FUN_00d773c0();
      (**(code **)(*piVar1 + 0x10))(*(undefined4 *)(param_1 + 0xb20));
    }
    *(undefined4 *)(param_1 + 0xb20) = 0;
    if (*(int *)(param_1 + 0xb08) == 0) {
      iVar2 = FUN_009fd880();
      if ((iVar2 == 0) && (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0)) {
        *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
      }
    }
  }
  FUN_00a93170();
  BehaviorBgBase::vf50();
  return;
}

// 005E2DB0  FUN_005e2db0  size=7  [between]
undefined4 __fastcall FUN_005e2db0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb30);
}

// 005E2DC0  FUN_005e2dc0  size=7  [between]
undefined4 __fastcall FUN_005e2dc0(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb34);
}

// 005E2DD0  FUN_005e2dd0  size=18  [between]
void __fastcall FUN_005e2dd0(int param_1)

{
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091adf0(1);
  }
  return;
}

// 005E2DF0  FUN_005e2df0  size=18  [between]
void __fastcall FUN_005e2df0(int param_1)

{
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091ae80(1);
  }
  return;
}

// 005E2E10  FUN_005e2e10  size=35  [between]
void __fastcall FUN_005e2e10(int param_1)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*(undefined4 *)(param_1 + 0xb38));
  }
  return;
}

// 005E2E40  FUN_005e2e40  size=55  [between]
void __fastcall FUN_005e2e40(int param_1)

{
  FUN_00a8ca80(0,0,0);
  FUN_00a8ca80(0,0,0);
  *(undefined4 *)(param_1 + 0xb3c) = 1;
  return;
}

// 005E2E80  GimmickBehaviorBase::vf334  size=11  [class]
void __fastcall GimmickBehaviorBase::vf334(int param_1)

{
  *(undefined4 *)(param_1 + 0xb3c) = 0;
  return;
}

// 00AA7240  GimmickBehaviorBase::GimmickBehaviorBase  size=18  [class]
undefined4 * __fastcall GimmickBehaviorBase::GimmickBehaviorBase(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AA7260  GimmickBehaviorBase::vf04  size=6  [class]
undefined * GimmickBehaviorBase::vf04(void)

{
  return &DAT_01b3532c;
}

// 00AA7270  GimmickBehaviorBase::vf31C  size=1  [class]
void GimmickBehaviorBase::vf31C(void)

{
  return;
}

// 00AA7280  GimmickBehaviorBase::vf32C  size=1  [class]
void GimmickBehaviorBase::vf32C(void)

{
  return;
}

// 00AA7290  GimmickBehaviorBase::vf330  size=1  [class]
void GimmickBehaviorBase::vf330(void)

{
  return;
}

// 00AA8AE0  GimmickBehaviorBase::destruct  size=43  [class]
undefined4 __thiscall GimmickBehaviorBase::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


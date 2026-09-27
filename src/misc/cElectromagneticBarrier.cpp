// src/misc/cElectromagneticBarrier.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E2EA0..00ABA9E0, 9 functions

#include "mgrr.h"
#include "cElectromagneticBarrier.h"

// 005E2EA0  cElectromagneticBarrier::vf44  size=53  [class]
void __fastcall cElectromagneticBarrier::vf44(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0xb40);
  FUN_00a8c820();
  FUN_00a8c820();
  FUN_00a944d0();
  BehaviorBgBase::vf44();
  return;
}

// 005E2EE0  cElectromagneticBarrier::thunk_vf50  size=5  [class]
void __fastcall cElectromagneticBarrier::thunk_vf50(int param_1)

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

// 005E3540  cElectromagneticBarrier::vf40  size=143  [class]
undefined4 __fastcall cElectromagneticBarrier::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GimmickBehaviorBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_004039a0(1,param_1,0);
  FUN_00a963e0(uVar2);
  *(undefined4 *)(param_1 + 0xb48) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(param_1 + 0xb48);
  *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(param_1 + 0xb4c);
  *(undefined4 *)(param_1 + 0xb60) = *(undefined4 *)(param_1 + 0xb50);
  *(undefined4 *)(param_1 + 0xb64) = *(undefined4 *)(param_1 + 0xb54);
  *(undefined4 *)(param_1 + 0xb44) = 0;
  return 1;
}

// 005E3AB0  cElectromagneticBarrier::vf328  size=108  [class]
void __fastcall cElectromagneticBarrier::vf328(int param_1)

{
  undefined4 uVar1;
  
  FUN_00a8c9b0(0,1,0,0);
  uVar1 = FUN_004039a0(2,param_1,0);
  FUN_00a963e0(uVar1);
  *(undefined4 *)(param_1 + 0xb44) = 0x40400000;
  *(undefined4 *)(param_1 + 0xb30) = 1;
  FUN_00e5e080("core_se_env_barrier_open",param_1 + 0x40,0,0xffffffff,0);
  return;
}

// 00AB6240  cElectromagneticBarrier::cElectromagneticBarrier  size=28  [class]
undefined4 * __fastcall cElectromagneticBarrier::cElectromagneticBarrier(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  param_1[0x2d0] = 0;
  return param_1;
}

// 00AB6260  cElectromagneticBarrier::vf04  size=6  [class]
undefined * cElectromagneticBarrier::vf04(void)

{
  return &DAT_01b35330;
}

// 00AB6270  cElectromagneticBarrier::vf320  size=1  [class]
void cElectromagneticBarrier::vf320(void)

{
  return;
}

// 00AB6280  cElectromagneticBarrier::vf324  size=1  [class]
void cElectromagneticBarrier::vf324(void)

{
  return;
}

// 00ABA9E0  cElectromagneticBarrier::vf00  size=43  [class]
undefined4 __thiscall cElectromagneticBarrier::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


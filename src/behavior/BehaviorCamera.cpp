// src/behavior/BehaviorCamera.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AAF390..00ACA050, 12 functions

#include "mgrr.h"
#include "BehaviorCamera.h"

// 00AAF390  BehaviorCamera::vf04  size=6  [class]
undefined * BehaviorCamera::vf04(void)

{
  return &DAT_01be9c80;
}

// 00AB7E50  BehaviorCamera::vf00  size=105  [class]
undefined4 * __thiscall BehaviorCamera::vf00(undefined4 *param_1,byte param_2)

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
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC4F90  BehaviorCamera::vf40  size=90  [class]
void __fastcall BehaviorCamera::vf40(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BehaviorAppBase::vf40();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = 3;
  FUN_00a92fb0(3);
  FUN_00e08640(uVar2);
  (**(code **)(*param_1 + 0x20))();
  param_1[0x285] = 0;
  param_1[0x283] = 0;
  param_1[0x284] = 1;
  param_1[0x287] = 0;
  param_1[0x28c] = 1;
  param_1[0x28d] = -1;
  return;
}

// 00AC4FF0  BehaviorCamera::vf44  size=42  [class]
void __fastcall BehaviorCamera::vf44(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a92f90();
  *(int *)(param_1 + 0xa00) = iVar1;
  if (iVar1 != 0) {
    FUN_00da8810(0);
  }
  Behavior::vf44();
  return;
}

// 00AC5020  FUN_00ac5020  size=33  [between]
void __thiscall FUN_00ac5020(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xa1c) = 1;
  *(undefined4 *)(param_1 + 0xa20) = param_2;
  *(undefined4 *)(param_1 + 0xa24) = param_3;
  return;
}

// 00AC5050  FUN_00ac5050  size=161  [between]
void __fastcall FUN_00ac5050(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xa1c) != 0) {
    piVar4 = (int *)FUN_00c13920();
    iVar5 = (**(code **)(*piVar4 + 0x28))(0);
    if (iVar5 != 0) {
      fVar1 = *(float *)(param_1 + 0xa24);
      fVar2 = *(float *)(param_1 + 0xa20);
      iVar5 = FUN_00a7c8a0();
      fVar3 = *(float *)(iVar5 + 0x48);
      if (fVar1 < fVar3 != (fVar1 == fVar3)) {
        fVar3 = fVar1;
      }
      if (fVar3 <= fVar2) {
        fVar3 = fVar2;
      }
      fVar1 = ABS(fVar3 - fVar2) / ABS(fVar1 - fVar2);
      FUN_00a947e0(0,0,0,(fVar1 + fVar1) - 1.0);
    }
  }
  return;
}

// 00AC5100  BehaviorCamera::thunk_vf48  size=5  [class]
void __fastcall BehaviorCamera::thunk_vf48(int *param_1)

{
  BehaviorDebrisActor::vf48();
  (**(code **)(*param_1 + 0x328))(0x3f800000);
  return;
}

// 00AC5110  FUN_00ac5110  size=48  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ac5110(int param_1)

{
  if (*(int *)(param_1 + 0xa30) == 0) {
    _DAT_01bea860 = 1;
  }
  FUN_00e26e90();
  FUN_00e22f10(0);
  return;
}

// 00AC5150  BehaviorCamera::vf50  size=43  [class]
void __fastcall BehaviorCamera::vf50(int param_1)

{
  if (*(int *)(param_1 + 0xa10) < 2) {
    BehaviorAppBase::vf50();
    if (*(int *)(param_1 + 0xa10) == 0) {
      BehaviorAppBase::thunk_vf64();
    }
    FUN_00a93170();
    return;
  }
  return;
}

// 00AC5180  BehaviorCamera::vf5C  size=1  [class]
void BehaviorCamera::vf5C(void)

{
  return;
}

// 00AC9FE0  FUN_00ac9fe0  size=100  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ac9fe0(int param_1)

{
  uint *puVar1;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0xa10) = 1;
  if (*(int *)(param_1 + 0xa00) != 0) {
    FUN_00e26e50(0);
    puVar1 = (uint *)(*(int *)(param_1 + 0xa00) + 0x94);
    *puVar1 = *puVar1 & 0xfffffffd;
  }
  FUN_00a7c950();
  _DAT_01bea660 = 0;
  _DAT_01bea664 = 0x3f800000;
  _DAT_01bea668 = 0;
  _DAT_01bea66c = local_14;
  return;
}

// 00ACA050  BehaviorCamera::vf4C  size=604  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall BehaviorCamera::vf4C(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (*(int *)(param_1 + 0xa10) != 0) {
LAB_00aca29f:
    Behavior::vf4C();
    return;
  }
  if ((*(uint *)(param_1 + 0xa18) & 0x8000000) == 0) {
    FUN_00ac5050();
    if (*(int *)(param_1 + 0xa30) == 0) {
      _DAT_01bea860 = 1;
    }
    FUN_00e26e90();
    FUN_00e22f10(0);
    goto LAB_00aca29f;
  }
  iVar2 = FUN_00a81330();
  if ((*(int *)(param_1 + 0xa34) == -1) || (iVar2 == 0)) goto LAB_00aca1d6;
  uVar4 = 0;
  FUN_00a7c8a0(0);
  iVar2 = FUN_00a12210(uVar4);
  fVar5 = *(float *)(iVar2 + 0x40);
  piVar3 = (int *)FUN_00c13920();
  (**(code **)(*piVar3 + 0x28))(0);
  iVar2 = FUN_00a7c8a0();
  uVar1 = *(uint *)(param_1 + 0xa34);
  if ((uVar1 & 3) == 0) goto LAB_00aca1d6;
  if (*(float *)(iVar2 + 0x40) <= fVar5 + *(float *)(param_1 + 0xa40)) {
    if ((*(float *)(iVar2 + 0x40) < fVar5 - *(float *)(param_1 + 0xa40)) && ((uVar1 & 2) != 0)) {
      FUN_00407ab0(0,1.0 - *(float *)(param_1 + 0xa50));
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        fVar5 = 1.0 - *(float *)(param_1 + 0xa50);
        uVar4 = 0;
        FUN_00a7c890(0,fVar5);
        FUN_00407ab0(uVar4,fVar5);
      }
      goto LAB_00aca1d6;
    }
LAB_00aca1ab:
    FUN_00407ab0(0,0x3f800000);
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) goto LAB_00aca1d6;
    fVar5 = 1.0;
  }
  else {
    if ((uVar1 & 1) == 0) goto LAB_00aca1ab;
    FUN_00407ab0(0,*(float *)(param_1 + 0xa50) + 1.0);
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) goto LAB_00aca1d6;
    fVar5 = *(float *)(param_1 + 0xa50) + 1.0;
  }
  uVar4 = 0;
  FUN_00a7c890(0,fVar5);
  FUN_00407ab0(uVar4,fVar5);
LAB_00aca1d6:
  iVar2 = *(int *)(param_1 + 0xa00);
  if ((((*(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) != 0) &&
       (iVar2 = FUN_00e36060(0), iVar2 == 0)) || (*(int *)(param_1 + 0xa34) == -1)) &&
     (((iVar2 = *(int *)(param_1 + 0xa00),
       *(int *)(iVar2 + 0xd0) + *(int *)(iVar2 + 0xc4) + *(int *)(iVar2 + 0xb8) == 0 ||
       (iVar2 = FUN_00e36060(0), iVar2 != 0)) && (*(int *)(param_1 + 0xa34) == -1)))) {
    FUN_00ac9fe0();
    Behavior::vf4C();
    return;
  }
  FUN_00ac5050();
  FUN_00ac5110();
  Behavior::vf4C();
  return;
}


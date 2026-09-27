// lib/havok/unit_0127B290.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0127B290..01283270, 250 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkpAngularDashpotAction.h"
#include "hkpBallGun.h"
#include "hkpClosestCdPointCollector.h"
#include "hkpClosestRayHitCollector.h"
#include "hkpConstrainedSystemFilter.h"
#include "hkpContactListener.h"
#include "hkpDashpotAction.h"
#include "hkpDisableEntityCollisionFilter.h"
#include "hkpFirstPersonGun.h"
#include "hkpGravityGun.h"
#include "hkpGroupCollisionFilter.h"
#include "hkpGunProjectile.h"
#include "hkpMotorAction.h"
#include "hkpMountedBallGun.h"
#include "hkpMouseSpringAction.h"
#include "hkpPhysicsSystemWithContacts.h"
#include "hkpProjectileGun.h"
#include "hkpReorientAction.h"
#include "hkpSerializedAgentNnEntry.h"
#include "hkpSpringAction.h"

// 0127B290  hkBaseObject::hkBaseObject_9  size=237  [run]
void __fastcall hkBaseObject::hkBaseObject_9(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  *param_1 = hkpPoweredChainMapper::vftable;
  if (0 < (int)param_1[3]) {
    iVar2 = 0;
    do {
      if (*(int *)(param_1[2] + 8 + iVar2) != 0) {
        FUN_010060a0();
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < (int)param_1[3]);
  }
  iVar1 = 0;
  if (0 < (int)param_1[9]) {
    do {
      FUN_010060a0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[9]);
  }
  param_1[9] = 0;
  if ((param_1[10] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[8],param_1[10] * 4);
  }
  param_1[8] = 0;
  param_1[10] = 0x80000000;
  param_1[6] = 0;
  if ((param_1[7] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] * 8);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[3] = 0;
  if ((param_1[4] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],(param_1[4] & 0x3fffffff) * 0xc);
  }
  param_1[4] = 0x80000000;
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 0127B380  FUN_0127b380  size=167  [run]
void FUN_0127b380(undefined4 param_1,undefined4 param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  FUN_0127aa40(param_1,param_2,&local_10);
  if (local_c != 0) {
    iVar2 = 0;
    if (0 < local_c) {
      do {
        iVar1 = *(int *)(local_10 + iVar2 * 4);
        iVar2 = iVar2 + 1;
        *(float *)(iVar1 + 0xc) = (1.0 / (float)local_c) * param_3;
        *(float *)(iVar1 + 0x10) = (1.0 / (float)local_c) * param_4;
      } while (iVar2 < local_c);
    }
  }
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
  }
  return;
}

// 0127B4B0  FUN_0127b4b0  size=25  [run]
void FUN_0127b4b0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0127B4D0  FUN_0127b4d0  size=16  [run]
undefined4 __thiscall FUN_0127b4d0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 0127B4E0  FUN_0127b4e0  size=21  [run]
void __thiscall FUN_0127b4e0(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 0127B500  FUN_0127b500  size=57  [run]
void __thiscall FUN_0127b500(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0127B540  FUN_0127b540  size=54  [run]
int __thiscall FUN_0127b540(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 0127B580  FUN_0127b580  size=52  [run]
undefined4 __thiscall FUN_0127b580(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0xc);
    return uVar3;
  }
  return 0;
}

// 0127B5C0  FUN_0127b5c0  size=52  [run]
undefined4 __thiscall FUN_0127b5c0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,8);
    return uVar3;
  }
  return 0;
}

// 0127B610  FUN_0127b610  size=58  [run]
void __thiscall FUN_0127b610(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0127B650  FUN_0127b650  size=49  [run]
int __fastcall FUN_0127b650(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 0127B6B0  FUN_0127b6b0  size=98  [run]
void __thiscall FUN_0127b6b0(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0xc);
  }
  iVar2 = param_3 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0xffffffff;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 0127B720  FUN_0127b720  size=55  [run]
void __thiscall FUN_0127b720(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,8);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 0127B760  FUN_0127b760  size=64  [run]
void __thiscall FUN_0127b760(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0127B7A0  FUN_0127b7a0  size=99  [run]
void __thiscall FUN_0127b7a0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  iVar2 = param_2 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0xffffffff;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 0127B810  FUN_0127b810  size=56  [run]
void __thiscall FUN_0127b810(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,8);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 0127B850  FUN_0127b850  size=64  [run]
void __fastcall FUN_0127b850(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0127B890  FUN_0127b890  size=64  [run]
void __fastcall FUN_0127b890(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0127B940  hkpSpringAction::hkpSpringAction  size=83  [run]
undefined4 * __thiscall
hkpSpringAction::hkpSpringAction
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  hkpBinaryAction::hkpBinaryAction(param_2,param_3,param_4);
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0x447a0000;
  *param_1 = vftable;
  param_1[0x16] = 0x3dcccccd;
  *(undefined2 *)(param_1 + 0x17) = 0x101;
  return param_1;
}

// 0127B9A0  hkpSpringAction::vf1C  size=139  [run]
int __thiscall hkpSpringAction::vf1C(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  int iVar5;
  
  if ((param_2[1] == 2) && (*(int *)(param_3 + 4) == 0)) {
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x60);
    *(undefined2 *)(iVar5 + 4) = 0x60;
    iVar5 = hkpSpringAction(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1],
                            *(undefined4 *)(param_1 + 0x10));
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar5 + 0x34) = uVar1;
    *(undefined4 *)(iVar5 + 0x38) = uVar2;
    *(undefined4 *)(iVar5 + 0x3c) = uVar3;
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    uVar2 = *(undefined4 *)(param_1 + 0x48);
    uVar3 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar5 + 0x44) = uVar1;
    *(undefined4 *)(iVar5 + 0x48) = uVar2;
    *(undefined4 *)(iVar5 + 0x4c) = uVar3;
    *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(iVar5 + 0x5c) = *(undefined1 *)(param_1 + 0x5c);
    *(undefined1 *)(iVar5 + 0x5d) = *(undefined1 *)(param_1 + 0x5d);
    return iVar5;
  }
  return 0;
}

// 0127BA30  FUN_0127ba30  size=152  [run]
void __thiscall FUN_0127ba30(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM3 [16];
  undefined1 auVar6 [16];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_01007090(*(int *)(param_1 + 0x18) + 0xf0,param_2);
  FUN_01007090(iVar1 + 0xf0,param_3);
  fVar2 = (*param_2 - *param_3) * (*param_2 - *param_3);
  fVar3 = (param_2[1] - param_3[1]) * (param_2[1] - param_3[1]);
  fVar4 = (param_2[2] - param_3[2]) * (param_2[2] - param_3[2]);
  fVar5 = fVar3 + fVar2 + fVar4;
  auVar6._4_4_ = fVar3 + fVar2 + fVar4;
  auVar6._0_4_ = fVar5;
  auVar6._8_4_ = fVar3 + fVar2 + fVar4;
  auVar6._12_4_ = fVar3 + fVar2 + fVar4;
  auVar6 = rsqrtps(in_XMM3,auVar6);
  fVar2 = auVar6._0_4_;
  *(uint *)(param_1 + 0x50) =
       ~-(uint)(fVar5 <= 0.0) & (uint)((3.0 - fVar2 * fVar5 * fVar2) * fVar2 * 0.5 * fVar5);
  return;
}

// 0127BB90  hkpSpringAction::vf0C  size=567  [run]
void __thiscall hkpSpringAction::vf0C(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 in_XMM6 [16];
  undefined1 auVar10 [16];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_1c;
  undefined4 local_18;
  int *local_14;
  
  local_14 = *(int **)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x18);
  FUN_01007050(iVar1 + 0xf0,param_1 + 0x30);
  FUN_01007050((int)local_14 + 0xf0,param_1 + 0x40);
  fVar7 = local_30 - local_40;
  fVar8 = fStack_2c - fStack_3c;
  fVar9 = fStack_28 - fStack_38;
  fVar3 = fVar7 * fVar7;
  fVar4 = fVar8 * fVar8;
  fVar5 = fVar9 * fVar9;
  fVar6 = fVar4 + fVar3 + fVar5;
  auVar10._4_4_ = fVar4 + fVar3 + fVar5;
  auVar10._0_4_ = fVar6;
  auVar10._8_4_ = fVar4 + fVar3 + fVar5;
  auVar10._12_4_ = fVar4 + fVar3 + fVar5;
  auVar10 = rsqrtps(in_XMM6,auVar10);
  fVar3 = auVar10._0_4_;
  fVar3 = (float)(~-(uint)(fVar6 <= 0.0) &
                 (uint)((3.0 - fVar3 * fVar6 * fVar3) * fVar3 * 0.5 * fVar6));
  if (0.001 <= fVar3) {
    fVar4 = 1.0 / fVar3;
    fVar7 = fVar7 * fVar4;
    fVar8 = fVar8 * fVar4;
    fVar9 = fVar9 * fVar4;
    fVar4 = (fStack_24 - fStack_34) * fVar4;
    if (((*(char *)(param_1 + 0x5c) != '\0') || (*(float *)(param_1 + 0x50) <= fVar3)) &&
       ((*(char *)(param_1 + 0x5d) != '\0' ||
        (fVar3 < *(float *)(param_1 + 0x50) || fVar3 == *(float *)(param_1 + 0x50))))) {
      local_40 = local_40 - *(float *)(iVar1 + 0x140);
      fStack_3c = fStack_3c - *(float *)(iVar1 + 0x144);
      fStack_38 = fStack_38 - *(float *)(iVar1 + 0x148);
      local_30 = local_30 - *(float *)((int)local_14 + 0x140);
      fStack_2c = fStack_2c - *(float *)((int)local_14 + 0x144);
      fStack_28 = fStack_28 - *(float *)((int)local_14 + 0x148);
      local_1c = ((((fStack_2c * *(float *)((int)local_14 + 0x1c0) -
                    local_30 * *(float *)((int)local_14 + 0x1c4)) +
                   *(float *)((int)local_14 + 0x1b8)) -
                  ((*(float *)(iVar1 + 0x1c0) * fStack_3c - *(float *)(iVar1 + 0x1c4) * local_40) +
                  *(float *)(iVar1 + 0x1b8))) * fVar9 +
                 (((local_30 * *(float *)((int)local_14 + 0x1c8) -
                   fStack_28 * *(float *)((int)local_14 + 0x1c0)) +
                  *(float *)((int)local_14 + 0x1b4)) -
                 ((*(float *)(iVar1 + 0x1c8) * local_40 - *(float *)(iVar1 + 0x1c0) * fStack_38) +
                 *(float *)(iVar1 + 0x1b4))) * fVar8 +
                 (((fStack_28 * *(float *)((int)local_14 + 0x1c4) -
                   fStack_2c * *(float *)((int)local_14 + 0x1c8)) +
                  *(float *)((int)local_14 + 0x1b0)) -
                 ((*(float *)(iVar1 + 0x1c4) * fStack_38 - *(float *)(iVar1 + 0x1c8) * fStack_3c) +
                 *(float *)(iVar1 + 0x1b0))) * fVar7) * *(float *)(param_1 + 0x58) +
                 (fVar3 - *(float *)(param_1 + 0x50)) * *(float *)(param_1 + 0x54);
      fVar3 = -local_1c;
      pfVar2 = (float *)(param_1 + 0x20);
      *pfVar2 = fVar3 * fVar7;
      *(float *)(param_1 + 0x24) = fVar3 * fVar8;
      *(float *)(param_1 + 0x28) = fVar3 * fVar9;
      *(float *)(param_1 + 0x2c) = fVar3 * fVar4;
      local_18 = *(undefined4 *)(param_2 + 8);
      local_14 = (int *)((int)local_14 + 0xe0);
      FUN_0118fe70();
      (**(code **)(*local_14 + 0x5c))(local_18,pfVar2,&local_30);
      *pfVar2 = local_1c * fVar7;
      *(float *)(param_1 + 0x24) = local_1c * fVar8;
      *(float *)(param_1 + 0x28) = local_1c * fVar9;
      *(float *)(param_1 + 0x2c) = local_1c * fVar4;
      local_1c = *(float *)(param_2 + 8);
      FUN_0118fe70();
      (**(code **)(*(int *)(iVar1 + 0xe0) + 0x5c))(local_1c,pfVar2,&local_40);
    }
  }
  return;
}

// 0127BDD0  FUN_0127bdd0  size=52  [run]
void __thiscall FUN_0127bdd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0118fe70();
  (**(code **)(*(int *)(param_1 + 0xe0) + 0x5c))(param_2,param_3,param_4);
  return;
}

// 0127BE10  FUN_0127be10  size=37  [run]
void FUN_0127be10(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0127BF60  hkpReorientAction::hkpReorientAction  size=70  [run]
undefined4 * __thiscall
hkpReorientAction::hkpReorientAction
          (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  hkpUnaryAction::hkpUnaryAction(param_2,0);
  *param_1 = vftable;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[8] = *param_3;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  param_1[0xc] = *param_4;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x10] = param_5;
  param_1[0x11] = param_6;
  return param_1;
}

// 0127BFB0  hkpReorientAction::vf1C  size=123  [run]
int __thiscall hkpReorientAction::vf1C(int param_1,undefined4 *param_2,int param_3)

{
  LPVOID pvVar1;
  int iVar2;
  
  if ((param_2[1] == 1) && (*(int *)(param_3 + 4) == 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x50);
    *(undefined2 *)(iVar2 + 4) = 0x50;
    iVar2 = hkpReorientAction(*(undefined4 *)*param_2,param_1 + 0x20,param_1 + 0x30,
                              *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    return iVar2;
  }
  return 0;
}

// 0127C030  hkpReorientAction::vf0C  size=643  [run]
void __thiscall hkpReorientAction::vf0C(int param_1,int param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70 [5];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30 [7];
  int local_14;
  
  local_14 = *(int *)(param_1 + 0x18);
  pfVar1 = (float *)(param_1 + 0x30);
  FUN_01007460(local_14 + 0x160,pfVar1);
  uVar4 = FUN_01007460(local_14 + 0x160,param_1 + 0x20);
  fVar8 = -(local_30[2] * *(float *)(param_1 + 0x38) +
           local_30[1] * *(float *)(param_1 + 0x34) + local_30[0] * *pfVar1);
  local_70[4] = fVar8 * local_30[0] + *pfVar1;
  fStack_5c = fVar8 * local_30[1] + *(float *)(param_1 + 0x34);
  fStack_58 = fVar8 * local_30[2] + *(float *)(param_1 + 0x38);
  fVar9 = local_70[4] * local_70[4];
  fVar10 = fStack_5c * fStack_5c;
  fVar11 = fStack_58 * fStack_58;
  auVar15._0_4_ = fVar10 + fVar9 + fVar11;
  auVar15._4_4_ = fVar10 + fVar9 + fVar11;
  auVar15._8_4_ = fVar10 + fVar9 + fVar11;
  auVar15._12_4_ = fVar10 + fVar9 + fVar11;
  auVar17 = rsqrtps(in_XMM4,auVar15);
  fVar9 = auVar17._0_4_;
  fVar10 = auVar17._4_4_;
  fVar11 = auVar17._8_4_;
  fVar20 = auVar17._12_4_;
  local_70[4] = local_70[4] *
                (float)(~-(uint)(auVar15._0_4_ <= 0.0) &
                       (uint)((3.0 - fVar9 * auVar15._0_4_ * fVar9) * fVar9 * 0.5));
  fStack_5c = fStack_5c *
              (float)(~-(uint)(auVar15._4_4_ <= 0.0) &
                     (uint)((3.0 - fVar10 * auVar15._4_4_ * fVar10) * fVar10 * 0.5));
  fStack_58 = fStack_58 *
              (float)(~-(uint)(auVar15._8_4_ <= 0.0) &
                     (uint)((3.0 - fVar11 * auVar15._8_4_ * fVar11) * fVar11 * 0.5));
  fVar9 = fStack_38 * fStack_58 + fStack_3c * fStack_5c + local_40 * local_70[4];
  local_50 = ABS(fVar9);
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_70[0] = 0.0;
  local_70[1] = 0.0;
  local_70[2] = 0.0;
  local_70[3] = 0.0;
  fStack_54 = (fVar8 * local_30[3] + *(float *)(param_1 + 0x3c)) *
              (float)(~-(uint)(auVar15._12_4_ <= 0.0) &
                     (uint)((3.0 - fVar20 * auVar15._12_4_ * fVar20) * fVar20 * 0.5));
  if (ABS(fVar9) < 1.0) {
    uVar4 = FUN_014376e0();
    uVar6 = extraout_ECX_00;
  }
  else {
    uVar6 = extraout_ECX;
    if (fVar9 <= 0.0) {
      fVar9 = 3.1415927;
      local_70[3] = 0.0;
    }
    else {
      fVar9 = 0.0;
      local_70[3] = 0.0;
    }
  }
  iVar3 = local_14;
  fVar8 = local_70[3] - 3.40282e+38;
  local_70[0] = fStack_3c * fStack_58 - fStack_38 * fStack_5c;
  local_70[1] = fStack_38 * local_70[4] - local_40 * fStack_58;
  local_70[2] = local_40 * fStack_5c - fStack_3c * local_70[4];
  local_70[3] = fStack_34 * fStack_54 - fStack_34 * fStack_54;
  auVar18._0_8_ = CONCAT44(local_30[1],local_30[0]) & 0x7fffffff7fffffff;
  auVar18._8_4_ = ABS(local_30[2]);
  auVar18._12_4_ = fVar8;
  auVar14._0_8_ = CONCAT44(fVar8,local_30[2]) & 0xffffffff7fffffff;
  auVar14._8_4_ = ABS(local_30[0]);
  auVar14._12_4_ = ABS(local_30[1]);
  auVar15 = maxps(auVar14,auVar18);
  auVar2._4_4_ = auVar15._0_4_;
  auVar2._0_4_ = auVar15._4_4_;
  auVar2._8_4_ = auVar15._12_4_;
  auVar2._12_4_ = auVar15._8_4_;
  auVar15 = maxps(auVar15,auVar2);
  auVar16._4_4_ = -(uint)(auVar15._4_4_ <= ABS(local_30[1]));
  auVar16._0_4_ = -(uint)(auVar15._0_4_ <= ABS(local_30[0]));
  auVar16._8_4_ = -(uint)(auVar15._8_4_ <= ABS(local_30[2]));
  auVar16._12_4_ = -(uint)(auVar15._12_4_ <= fVar8);
  auVar12._0_8_ = CONCAT44(fVar8,local_70[2]) & 0xffffffff7fffffff;
  auVar12._8_4_ = ABS(local_70[0]);
  auVar12._12_4_ = ABS(local_70[1]);
  auVar17._8_4_ = ABS(local_70[2]);
  auVar17._0_8_ = CONCAT44(local_70[1],local_70[0]) & 0x7fffffff7fffffff;
  auVar17._12_4_ = fVar8;
  auVar15 = maxps(auVar12,auVar17);
  auVar19._4_4_ = auVar15._0_4_;
  auVar19._0_4_ = auVar15._4_4_;
  auVar19._8_4_ = auVar15._12_4_;
  auVar19._12_4_ = auVar15._8_4_;
  iVar7 = movmskps(uVar6,auVar16);
  auVar15 = maxps(auVar15,auVar19);
  auVar13._4_4_ = -(uint)(auVar15._4_4_ <= ABS(local_70[1]));
  auVar13._0_4_ = -(uint)(auVar15._0_4_ <= ABS(local_70[0]));
  auVar13._8_4_ = -(uint)(auVar15._8_4_ <= ABS(local_70[2]));
  auVar13._12_4_ = -(uint)(auVar15._12_4_ <= fVar8);
  iVar5 = movmskps(uVar4,auVar13);
  if (local_70[(byte)(&DAT_0182bb90)[iVar5]] < 0.0 != local_30[(byte)(&DAT_0182bb90)[iVar7]] < 0.0)
  {
    fVar9 = -fVar9;
  }
  fVar8 = *(float *)(param_1 + 0x44) * *(float *)(param_2 + 0xc);
  fVar9 = *(float *)(param_1 + 0x40) * fVar9 * *(float *)(param_2 + 0xc);
  local_80 = fVar9 * local_30[0] - fVar8 * *(float *)(local_14 + 0x1c0);
  fStack_7c = fVar9 * local_30[1] - fVar8 * *(float *)(local_14 + 0x1c4);
  fStack_78 = fVar9 * local_30[2] - fVar8 * *(float *)(local_14 + 0x1c8);
  fStack_74 = fVar9 * local_30[3] - fVar8 * *(float *)(local_14 + 0x1cc);
  FUN_0118fe70();
  (**(code **)(*(int *)(iVar3 + 0xe0) + 0x58))(&local_80);
  return;
}

// 0127C2C0  FUN_0127c2c0  size=37  [run]
void FUN_0127c2c0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0127C370  hkpProjectileGun::vf10  size=35  [run]
void __fastcall hkpProjectileGun::vf10(int *param_1)

{
  if ((float)param_1[10] <= 0.0) {
    param_1[10] = param_1[9];
                    /* WARNING: Could not recover jumptable at 0x0127c38d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x24))();
    return;
  }
  return;
}

// 0127C3A0  hkpProjectileGun::vf14  size=68  [run]
void __thiscall
hkpProjectileGun::vf14
          (int *param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  if (0.0 < (float)param_1[10]) {
    param_1[10] = (int)((float)param_1[10] - param_2);
  }
  (**(code **)(*param_1 + 0x28))(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

// 0127C3F0  hkpContactListener::hkpContactListener  size=71  [run]
undefined4 * __thiscall
hkpContactListener::hkpContactListener(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = vftable;
  *param_1 = hkpGunProjectile::vftable;
  param_1[2] = hkpGunProjectile::vftable;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = param_3;
  param_1[5] = 0;
  param_1[6] = param_2;
  FUN_01006000();
  return param_1;
}

// 0127C440  FUN_0127c440  size=22  [run]
void __fastcall FUN_0127c440(int *param_1)

{
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    (**(code **)(*param_1 + 0xc))();
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
  }
  return;
}

// 0127C460  FUN_0127c460  size=43  [run]
void __fastcall FUN_0127c460(int param_1)

{
  if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
    FUN_0118fe00(param_1 + 8);
  }
  FUN_011929d0(*(undefined4 *)(param_1 + 0x10),1);
  return;
}

// 0127C490  FUN_0127c490  size=52  [run]
void __fastcall FUN_0127c490(int param_1)

{
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uStack_8 = param_1;
    FUN_01192b60((int)&uStack_8 + 3,*(undefined4 *)(param_1 + 0x10));
    if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
      FUN_0118fa20(param_1 + 8);
    }
  }
  return;
}

// 0127C4D0  hkpGunProjectile::vf0C  size=38  [run]
void __fastcall hkpGunProjectile::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x10) + 8) != 0) {
      FUN_0127c490();
    }
    FUN_010060a0();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

// 0127C500  FUN_0127c500  size=45  [run]
void __thiscall FUN_0127c500(int *param_1,float param_2)

{
  code *pcVar1;
  
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    pcVar1 = *(code **)(*param_1 + 0x14);
    param_1[5] = (int)((float)param_1[5] + param_2);
    (*pcVar1)(param_2);
  }
  return;
}

// 0127C530  FUN_0127c530  size=77  [run]
void __thiscall FUN_0127c530(int param_1,byte param_2)

{
  if (param_2 == (*(byte *)(param_1 + 0xc) >> 2 & 1)) {
    return;
  }
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(*(int *)(param_1 + 0x10) + 8) != 0)) {
    if (param_2 == 0) {
      FUN_0118fa20(param_1 + 8);
      goto LAB_0127c573;
    }
    FUN_0118fe00(param_1 + 8);
  }
  if (param_2 != 0) {
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 4;
    return;
  }
LAB_0127c573:
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfb;
  return;
}

// 0127C580  FUN_0127c580  size=51  [run]
void __thiscall FUN_0127c580(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (param_2 < *(float *)(*(int *)(*(int *)(param_1 + 0x2c) + iVar2 * 4) + 0x14)) {
        FUN_0127c440();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

// 0127C5C0  FUN_0127c5c0  size=51  [run]
void __thiscall FUN_0127c5c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_0127c500(param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

// 0127C600  FUN_0127c600  size=33  [run]
void __fastcall FUN_0127c600(int param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      pbVar1 = (byte *)(*(int *)(*(int *)(param_1 + 0x2c) + iVar3 * 4) + 0xc);
      *pbVar1 = *pbVar1 & 0xfd;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

// 0127C660  hkBaseObject::hkBaseObject  size=36  [run]
void __fastcall hkBaseObject::hkBaseObject(undefined4 *param_1)

{
  *param_1 = hkpGunProjectile::vftable;
  param_1[2] = hkpGunProjectile::vftable;
  hkpGunProjectile::vf0C();
  param_1[2] = hkpContactListener::vftable;
  *param_1 = vftable;
  return;
}

// 0127C690  hkpGunProjectile::thunk_vf0C  size=5  [run]
void __fastcall hkpGunProjectile::thunk_vf0C(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x10) + 8) != 0) {
      FUN_0127c490();
    }
    FUN_010060a0();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

// 0127C6A0  FUN_0127c6a0  size=70  [run]
void __fastcall FUN_0127c6a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar2 = 0;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    return;
  }
  do {
    FUN_0127c440();
    FUN_010060a0();
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar1);
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

// 0127C6F0  FUN_0127c6f0  size=63  [run]
void __fastcall FUN_0127c6f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      if ((*(byte *)(*(int *)(*(int *)(param_1 + 0x2c) + iVar2 * 4) + 0xc) & 1) != 0) {
        FUN_010060a0();
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
        if (*(int *)(param_1 + 0x30) != iVar2) {
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + iVar2 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30) * 4);
        }
        iVar1 = iVar1 + -1;
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

// 0127C730  hkpProjectileGun::vf28  size=39  [run]
void hkpProjectileGun::vf28(undefined4 param_1)

{
  FUN_0127c5c0(param_1);
  FUN_0127c600();
  FUN_0127c6f0();
  return;
}

// 0127C760  hkpProjectileGun::vf20  size=8  [run]
void hkpProjectileGun::vf20(void)

{
  FUN_0127c6a0();
  return;
}

// 0127C770  FUN_0127c770  size=81  [run]
void __thiscall FUN_0127c770(int param_1,undefined4 param_2)

{
  FUN_01006000();
  if (*(uint *)(param_1 + 0x30) == (*(uint *)(param_1 + 0x34) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x2c),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x30) * 4) = param_2;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  FUN_0127c460(*(undefined4 *)(param_1 + 0x38));
  return;
}

// 0127CA00  hkpProjectileGun::hkpProjectileGun  size=79  [run]
undefined4 * __thiscall
hkpProjectileGun::hkpProjectileGun(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  hkpFirstPersonGun::hkpFirstPersonGun();
  param_1[9] = 0x3e99999a;
  *param_1 = vftable;
  param_1[8] = 5;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x80000000;
  param_1[0xe] = param_2;
  param_1[0xf] = param_3;
  return param_1;
}

// 0127CA50  hkpProjectileGun::hkpProjectileGun  size=43  [run]
undefined4 * __thiscall hkpProjectileGun::hkpProjectileGun(undefined4 *param_1,undefined4 param_2)

{
  hkpFirstPersonGun::hkpFirstPersonGun(param_2);
  *param_1 = vftable;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x80000000;
  return param_1;
}

// 0127CA80  hkpProjectileGun::~hkpProjectileGun  size=80  [run]
void __fastcall hkpProjectileGun::~hkpProjectileGun(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_0127c6a0();
  param_1[0xc] = 0;
  if (-1 < (int)param_1[0xd]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xb],param_1[0xd] * 4);
  }
  param_1[0xb] = 0;
  param_1[0xd] = 0x80000000;
  hkpFirstPersonGun::~hkpFirstPersonGun();
  return;
}

// 0127CB00  FUN_0127cb00  size=14  [run]
void __thiscall FUN_0127cb00(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0127CB10  FUN_0127cb10  size=12  [run]
void __thiscall FUN_0127cb10(byte *param_1,byte param_2)

{
  *param_1 = *param_1 | param_2;
  return;
}

// 0127CB20  FUN_0127cb20  size=12  [run]
void __thiscall FUN_0127cb20(byte *param_1,byte param_2)

{
  *param_1 = *param_1 & param_2;
  return;
}

// 0127CB70  FUN_0127cb70  size=15  [run]
int __thiscall FUN_0127cb70(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0127CB80  FUN_0127cb80  size=15  [run]
int __thiscall FUN_0127cb80(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0127CBC0  FUN_0127cbc0  size=34  [run]
void FUN_0127cbc0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 0127CBF0  FUN_0127cbf0  size=26  [run]
void __thiscall FUN_0127cbf0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0127CC40  hkpGunProjectile::vf14  size=3  [run]
void hkpGunProjectile::vf14(void)

{
  return;
}

// 0127CC50  hkpGunProjectile::vf00  size=14  [run]
void __fastcall hkpGunProjectile::vf00(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0127cc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + -8) + 0x10))();
  return;
}

// 0127CC60  hkpGunProjectile::vf0C  size=8  [run]
void hkpGunProjectile::vf0C(void)

{
  vf00();
  return;
}

// 0127CC70  FUN_0127cc70  size=38  [run]
void FUN_0127cc70(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0127CCA0  hkpGunProjectile::vf10  size=7  [run]
void __fastcall hkpGunProjectile::vf10(int param_1)

{
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
  return;
}

// 0127CCE0  FUN_0127cce0  size=28  [run]
void __thiscall FUN_0127cce0(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 0127CD00  FUN_0127cd00  size=57  [run]
void __thiscall FUN_0127cd00(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0127CD40  FUN_0127cd40  size=61  [run]
void __thiscall FUN_0127cd40(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0127CD80  FUN_0127cd80  size=58  [run]
void __thiscall FUN_0127cd80(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0127CDC0  FUN_0127cdc0  size=61  [run]
void __fastcall FUN_0127cdc0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0127CE00  hkpGunProjectile::vf00  size=52  [run]
int __thiscall hkpGunProjectile::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0127CE40  FUN_0127ce40  size=61  [run]
void __fastcall FUN_0127ce40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0127CE80  hkpMountedBallGun::vf0C  size=3  [run]
void hkpMountedBallGun::vf0C(void)

{
  return;
}

// 0127CE90  hkpProjectileGun::vf24  size=3  [run]
void hkpProjectileGun::vf24(void)

{
  return;
}

// 0127CEA0  FUN_0127cea0  size=38  [run]
void FUN_0127cea0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0127CED0  hkpProjectileGun::vf00  size=52  [run]
int __thiscall hkpProjectileGun::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkpProjectileGun();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0127CF10  hkpPhysicsSystemWithContacts::vf0C  size=3  [run]
undefined4 hkpPhysicsSystemWithContacts::vf0C(void)

{
  return 0;
}

// 0127CF20  FUN_0127cf20  size=55  [run]
void __thiscall FUN_0127cf20(int param_1,int param_2)

{
  FUN_010060a0();
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  if (*(int *)(param_1 + 0x48) != param_2) {
    *(undefined4 *)(*(int *)(param_1 + 0x44) + param_2 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48) * 4);
  }
  return;
}

// 0127CF60  FUN_0127cf60  size=145  [run]
void __thiscall FUN_0127cf60(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2;
  FUN_011ada30(param_2);
  uVar1 = *(uint *)(param_1 + 0x4c);
  if ((int)(uVar1 & 0x3fffffff) < *(int *)(iVar4 + 0x48)) {
    if (-1 < (int)uVar1) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*(undefined4 *)(param_1 + 0x44),uVar1 * 4);
    }
    param_2 = *(int *)(iVar4 + 0x48) * 4;
    uVar2 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *(undefined4 *)(param_1 + 0x44) = uVar2;
    *(int *)(param_1 + 0x4c) = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
  }
  iVar5 = *(int *)(iVar4 + 0x48);
  puVar3 = *(undefined4 **)(param_1 + 0x44);
  *(int *)(param_1 + 0x48) = iVar5;
  if (0 < iVar5) {
    iVar4 = *(int *)(iVar4 + 0x44) - (int)puVar3;
    do {
      *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

// 0127D000  FUN_0127d000  size=72  [run]
void __thiscall FUN_0127d000(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
    if (*(uint *)(param_1 + 0x48) == (*(uint *)(param_1 + 0x4c) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x44),4);
    }
    *(int *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x48) * 4) = param_2;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  return;
}

// 0127D050  hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts  size=104  [run]
void __fastcall hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x12];
  iVar2 = 0;
  *param_1 = vftable;
  if (0 < iVar1) {
    do {
      FUN_010060a0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  param_1[0x12] = 0;
  if (-1 < (int)param_1[0x13]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x11],param_1[0x13] * 4);
  }
  param_1[0x11] = 0;
  param_1[0x13] = 0x80000000;
  hkpPhysicsSystem::~hkpPhysicsSystem();
  return;
}

// 0127D0C0  FUN_0127d0c0  size=15  [run]
int __thiscall FUN_0127d0c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0127D0E0  FUN_0127d0e0  size=34  [run]
void FUN_0127d0e0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 0127D110  FUN_0127d110  size=33  [run]
void FUN_0127d110(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_2 + (int)param_1);
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 0127D140  FUN_0127d140  size=50  [run]
undefined4 __thiscall FUN_0127d140(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 0127D180  FUN_0127d180  size=28  [run]
void __thiscall FUN_0127d180(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 0127D1A0  FUN_0127d1a0  size=57  [run]
void __thiscall FUN_0127d1a0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0127D1E0  FUN_0127d1e0  size=128  [run]
int * __thiscall FUN_0127d1e0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = param_3;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_3[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(*param_2 + 0x10))(*param_1,uVar1 * 4);
    }
    param_3 = (int *)(piVar2[1] * 4);
    iVar3 = (**(code **)(*param_2 + 0xc))(&param_3);
    *param_1 = iVar3;
    param_1[2] = (int)((int)param_3 + ((int)param_3 >> 0x1f & 3U)) >> 2;
  }
  iVar3 = piVar2[1];
  puVar4 = (undefined4 *)*param_1;
  param_1[1] = iVar3;
  if (0 < iVar3) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 0127D270  FUN_0127d270  size=58  [run]
void __thiscall FUN_0127d270(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0127D2B0  FUN_0127d2b0  size=134  [run]
int * __thiscall FUN_0127d2b0(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = param_2;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_2[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar1 * 4);
    }
    param_2 = (int *)(piVar2[1] * 4);
    iVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *param_1 = iVar3;
    param_1[2] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  }
  iVar3 = piVar2[1];
  puVar4 = (undefined4 *)*param_1;
  param_1[1] = iVar3;
  if (0 < iVar3) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 0127D350  FUN_0127d350  size=10  [run]
void FUN_0127d350(void)

{
  return;
}

// 0127D360  FUN_0127d360  size=25  [run]
void FUN_0127d360(void)

{
  return;
}

// 0127D380  FUN_0127d380  size=17  [run]
void __thiscall FUN_0127d380(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x48) = param_2;
  return;
}

// 0127D3A0  hkpMouseSpringAction::vf18  size=27  [run]
void __thiscall hkpMouseSpringAction::vf18(int param_1,undefined4 param_2)

{
  hkpWindAction::vf18(param_2);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 0127D3C0  FUN_0127d3c0  size=79  [run]
void __thiscall FUN_0127d3c0(int param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 in_EAX;
  undefined4 uVar5;
  
  auVar1._4_4_ = -(uint)(ABS(param_2[1] - *(float *)(param_1 + 0x34)) <= 0.001);
  auVar1._0_4_ = -(uint)(ABS(*param_2 - *(float *)(param_1 + 0x30)) <= 0.001);
  auVar1._8_4_ = -(uint)(ABS(param_2[2] - *(float *)(param_1 + 0x38)) <= 0.001);
  auVar1._12_4_ = -(uint)(ABS(param_2[3] - *(float *)(param_1 + 0x3c)) <= 0.001);
  uVar5 = movmskps(in_EAX,auVar1);
  if (((((byte)uVar5 & 7) != 7) && (*(int *)(param_1 + 0x18) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x18) + 8) != 0)) {
    FUN_0118fe70();
  }
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *(float *)(param_1 + 0x30) = *param_2;
  *(float *)(param_1 + 0x34) = fVar2;
  *(float *)(param_1 + 0x38) = fVar3;
  *(float *)(param_1 + 0x3c) = fVar4;
  return;
}

// 0127D410  hkpMouseSpringAction::vf0C  size=709  [run]
void __thiscall hkpMouseSpringAction::vf0C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_170 [48];
  undefined1 local_140 [48];
  undefined1 local_110 [48];
  undefined1 local_e0 [48];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  int local_1c;
  float local_18;
  int *local_14;
  
  iVar2 = *(int *)(param_1 + 0x18);
  local_1c = iVar2;
  FUN_01007050(iVar2 + 0xf0,param_1 + 0x20);
  local_90 = local_40 - *(float *)(param_1 + 0x30);
  fStack_8c = fStack_3c - *(float *)(param_1 + 0x34);
  fStack_88 = fStack_38 - *(float *)(param_1 + 0x38);
  fStack_84 = fStack_34 - *(float *)(param_1 + 0x3c);
  iVar1 = FUN_0119ffc0();
  if (iVar1 == 0) {
    local_14 = (int *)(iVar2 + 0xe0);
  }
  else {
    local_14 = (int *)FUN_0119ffc0();
  }
  local_18 = (float)local_14[0x33];
  local_b0 = local_40 - *(float *)(iVar2 + 0x140);
  fStack_ac = fStack_3c - *(float *)(iVar2 + 0x144);
  fStack_a8 = fStack_38 - *(float *)(iVar2 + 0x148);
  fStack_a4 = fStack_34 - *(float *)(iVar2 + 0x14c);
  FUN_010136d0(&local_b0);
  (**(code **)(*local_14 + 0x28))(local_140);
  fStack_6c = 0.0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  local_60 = 0.0;
  fStack_58 = 0.0;
  fStack_54 = 0.0;
  local_50 = 0.0;
  fStack_4c = 0.0;
  fStack_44 = 0.0;
  local_70 = local_18;
  fStack_5c = local_18;
  fStack_48 = local_18;
  FUN_01013ae0(local_e0,local_140);
  FUN_01013ae0(local_110,local_e0);
  FUN_01013790(local_170);
  iVar1 = FUN_01013f90(0x33d6bf95);
  if (iVar1 == 0) {
    fStack_74 = *(float *)(param_1 + 0x4c);
    local_80 = fStack_74 * *(float *)(iVar2 + 0x1b0);
    fStack_7c = fStack_74 * *(float *)(iVar2 + 0x1b4);
    fStack_78 = fStack_74 * *(float *)(iVar2 + 0x1b8);
    fStack_74 = fStack_74 * *(float *)(iVar2 + 0x1bc);
    FUN_0118fe70();
    (**(code **)(*(int *)(iVar2 + 0xe0) + 0x40))(&local_80);
    fStack_94 = *(float *)(param_1 + 0x4c);
    local_a0 = fStack_94 * *(float *)(local_1c + 0x1c0);
    fStack_9c = fStack_94 * *(float *)(local_1c + 0x1c4);
    fStack_98 = fStack_94 * *(float *)(local_1c + 0x1c8);
    fStack_94 = fStack_94 * *(float *)(local_1c + 0x1cc);
    FUN_0118fe70();
    (**(code **)(*(int *)(iVar2 + 0xe0) + 0x44))(&local_a0);
    local_40 = local_40 - *(float *)(iVar2 + 0x140);
    fStack_3c = fStack_3c - *(float *)(iVar2 + 0x144);
    fStack_38 = fStack_38 - *(float *)(iVar2 + 0x148);
    fVar6 = *(float *)(param_1 + 0x40);
    fVar7 = *(float *)(param_1 + 0x44) * *(float *)(param_2 + 0xc);
    fVar4 = ((*(float *)(iVar2 + 0x1c4) * fStack_38 - *(float *)(iVar2 + 0x1c8) * fStack_3c) +
            *(float *)(iVar2 + 0x1b0)) * fVar6 + fVar7 * local_90;
    fVar5 = ((*(float *)(iVar2 + 0x1c8) * local_40 - *(float *)(iVar2 + 0x1c0) * fStack_38) +
            *(float *)(iVar2 + 0x1b4)) * fVar6 + fVar7 * fStack_8c;
    fVar6 = ((*(float *)(iVar2 + 0x1c0) * fStack_3c - *(float *)(iVar2 + 0x1c4) * local_40) +
            *(float *)(iVar2 + 0x1b8)) * fVar6 + fVar7 * fStack_88;
    local_30 = -(fVar5 * local_60 + fVar4 * local_70 + fVar6 * local_50);
    fStack_2c = -(fVar5 * fStack_5c + fVar4 * fStack_6c + fVar6 * fStack_4c);
    fStack_28 = -(fVar5 * fStack_58 + fVar4 * fStack_68 + fVar6 * fStack_48);
    fStack_24 = -(fVar5 * fStack_54 + fVar4 * fStack_64 + fVar6 * fStack_44);
    local_20 = fStack_2c * fStack_2c + local_30 * local_30 + fStack_28 * fStack_28;
    fVar3 = (float10)FUN_011a2a30();
    local_18 = (float)fVar3;
    fVar6 = *(float *)(param_2 + 8) * local_18 * *(float *)(param_1 + 0x48);
    if (fVar6 * fVar6 < local_20) {
      fVar6 = fVar6 / SQRT(local_20);
      local_30 = fVar6 * local_30;
      fStack_2c = fVar6 * fStack_2c;
      fStack_28 = fVar6 * fStack_28;
      fStack_24 = fVar6 * fStack_24;
    }
    FUN_0118fe70();
    (**(code **)(*(int *)(iVar2 + 0xe0) + 0x54))(&local_30,&local_40);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x58)) {
      do {
        (**(code **)(*(int *)(param_1 + 0x54) + iVar2 * 4))(param_1,param_2,&local_30);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x58));
    }
  }
  return;
}

// 0127D6E0  hkpMouseSpringAction::hkpMouseSpringAction  size=134  [run]
undefined4 * __thiscall
hkpMouseSpringAction::hkpMouseSpringAction(undefined4 *param_1,undefined4 param_2)

{
  hkpUnaryAction::hkpUnaryAction(param_2,0);
  param_1[0x10] = 0x3f000000;
  param_1[0x11] = 0x3e99999a;
  param_1[0x12] = 0x437a0000;
  param_1[0x13] = 0x3f733333;
  *param_1 = vftable;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0xffffffff;
  FUN_01006780(s_GhkpMouseSpringAction_01b25c6f + 1);
  return param_1;
}

// 0127DA30  hkpMouseSpringAction::vf1C  size=264  [run]
int __thiscall hkpMouseSpringAction::vf1C(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  puVar7 = param_2;
  if ((param_2[1] == 1) && (*(int *)(param_3 + 4) == 0)) {
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x60);
    *(undefined2 *)(iVar5 + 4) = 0x60;
    iVar5 = hkpMouseSpringAction(*(undefined4 *)*puVar7);
    uVar6 = *(undefined4 *)(param_1 + 0x24);
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar5 + 0x24) = uVar6;
    *(undefined4 *)(iVar5 + 0x28) = uVar2;
    *(undefined4 *)(iVar5 + 0x2c) = uVar3;
    uVar6 = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar5 + 0x34) = uVar6;
    *(undefined4 *)(iVar5 + 0x38) = uVar2;
    *(undefined4 *)(iVar5 + 0x3c) = uVar3;
    *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar5 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    uVar1 = *(uint *)(iVar5 + 0x5c);
    if ((int)(uVar1 & 0x3fffffff) < *(int *)(param_1 + 0x58)) {
      if (-1 < (int)uVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(*(undefined4 *)(iVar5 + 0x54),uVar1 * 4);
      }
      param_2 = (undefined4 *)(*(int *)(param_1 + 0x58) * 4);
      uVar6 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
      *(undefined4 *)(iVar5 + 0x54) = uVar6;
      *(int *)(iVar5 + 0x5c) = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
    }
    iVar8 = *(int *)(param_1 + 0x58);
    puVar7 = *(undefined4 **)(iVar5 + 0x54);
    *(int *)(iVar5 + 0x58) = iVar8;
    if (0 < iVar8) {
      iVar9 = *(int *)(param_1 + 0x54) - (int)puVar7;
      do {
        *puVar7 = *(undefined4 *)(iVar9 + (int)puVar7);
        puVar7 = puVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    return iVar5;
  }
  return 0;
}

// 0127DB40  FUN_0127db40  size=15  [run]
int __thiscall FUN_0127db40(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0127DB60  FUN_0127db60  size=33  [run]
void FUN_0127db60(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_2 + (int)param_1);
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 0127DB90  FUN_0127db90  size=50  [run]
undefined4 __thiscall FUN_0127db90(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 0127DBD0  FUN_0127dbd0  size=37  [run]
void FUN_0127dbd0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0127DC00  FUN_0127dc00  size=128  [run]
int * __thiscall FUN_0127dc00(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  piVar3 = param_3;
  piVar2 = param_2;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_3[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(*param_2 + 0x10))(*param_1,uVar1 * 4);
    }
    param_2 = (int *)(piVar3[1] * 4);
    iVar4 = (**(code **)(*piVar2 + 0xc))(&param_2);
    *param_1 = iVar4;
    param_1[2] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  }
  iVar4 = piVar3[1];
  puVar5 = (undefined4 *)*param_1;
  param_1[1] = iVar4;
  if (0 < iVar4) {
    iVar6 = *piVar3 - (int)puVar5;
    do {
      *puVar5 = *(undefined4 *)(iVar6 + (int)puVar5);
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_1;
}

// 0127DC90  FUN_0127dc90  size=134  [run]
int * __thiscall FUN_0127dc90(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = param_2;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_2[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar1 * 4);
    }
    param_2 = (int *)(piVar2[1] * 4);
    iVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *param_1 = iVar3;
    param_1[2] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  }
  iVar3 = piVar2[1];
  puVar4 = (undefined4 *)*param_1;
  param_1[1] = iVar3;
  if (0 < iVar3) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 0127DD20  FUN_0127dd20  size=12  [run]
void __thiscall FUN_0127dd20(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0127DD30  FUN_0127dd30  size=15  [run]
int __thiscall FUN_0127dd30(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0127DD50  FUN_0127dd50  size=41  [run]
void __thiscall FUN_0127dd50(int *param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*param_1 + param_1[2] * 4);
  param_1[2] = param_1[2] + 1;
  param_1[4] = param_1[4] + -1;
  if (param_1[2] == param_1[1]) {
    param_1[2] = 0;
  }
  return;
}

// 0127DD90  hkpMountedBallGun::hkpMountedBallGun  size=38  [run]
undefined4 * __thiscall hkpMountedBallGun::hkpMountedBallGun(undefined4 *param_1,int param_2)

{
  hkpBallGun::hkpBallGun(param_2);
  *param_1 = vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 4;
  }
  return param_1;
}

// 0127DDC0  hkpMountedBallGun::hkpMountedBallGun  size=56  [run]
undefined4 * __thiscall hkpMountedBallGun::hkpMountedBallGun(undefined4 *param_1,undefined4 param_2)

{
  hkpBallGun::hkpBallGun(param_2);
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 2) = 4;
  FUN_01006780("MountedBallGun");
  param_1[0x18] = 0;
  param_1[0x19] = 0x42c80000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return param_1;
}

// 0127DE00  hkpMountedBallGun::vf10  size=732  [run]
void __thiscall hkpMountedBallGun::vf10(int param_1,int param_2,float *param_3)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 local_130 [4];
  undefined4 local_12c;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_7c;
  undefined4 local_78;
  undefined1 local_68;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 local_15;
  int local_14;
  
  local_60 = *param_3;
  fStack_5c = param_3[1];
  fStack_58 = param_3[2];
  fStack_54 = param_3[3];
  local_30 = param_3[0xc] + local_60;
  fStack_2c = param_3[0xd] + fStack_5c;
  fStack_28 = param_3[0xe] + fStack_58;
  fStack_24 = param_3[0xf] + fStack_54;
  local_50 = local_60 * 200.0 + local_30;
  fStack_4c = fStack_5c * 200.0 + fStack_2c;
  fStack_48 = fStack_58 * 200.0 + fStack_28;
  fStack_44 = fStack_54 * 200.0 + fStack_24;
  FUN_0118f7b0();
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x20);
  *(undefined2 *)(iVar3 + 4) = 0x20;
  local_12c = hkpSphereShape::hkpSphereShape(*(undefined4 *)(param_1 + 0x20));
  local_a0 = *(float *)(param_1 + 0x28);
  local_78 = 0x3c23d70a;
  local_88 = 0x3e4ccccd;
  local_90 = 0x3f800000;
  local_120 = *(undefined4 *)(param_1 + 0x60);
  uStack_11c = *(undefined4 *)(param_1 + 100);
  uStack_118 = *(undefined4 *)(param_1 + 0x68);
  uStack_114 = *(undefined4 *)(param_1 + 0x6c);
  local_68 = 6;
  local_7c = 2;
  FUN_01272ab0(local_12c,local_a0 * 2.0,local_130);
  local_a0 = *(float *)(param_1 + 0x28);
  local_9c = 0;
  local_98 = 0x3ecccccd;
  iVar3 = hkpClosestCdPointCollector::hkpClosestCdPointCollector
                    (param_2,&local_30,0x3d4ccccd,&local_50,&local_160);
  if (iVar3 == 0) {
    FUN_0127f860(&local_120,&local_160,param_2 + 0x10,*(undefined4 *)(param_1 + 0x24),&local_100);
  }
  else {
    fStack_f4 = *(float *)(param_1 + 0x24);
    local_100 = fStack_f4 * local_60;
    fStack_fc = fStack_f4 * fStack_5c;
    fStack_f8 = fStack_f4 * fStack_58;
    fStack_f4 = fStack_f4 * fStack_54;
  }
  iVar3 = 0;
  local_40 = local_160;
  uStack_3c = uStack_15c;
  uStack_38 = uStack_158;
  uStack_34 = uStack_154;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0x14))
                (param_1 + 0x60,&local_40);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x220);
  *(undefined2 *)(iVar3 + 4) = 0x220;
  iVar3 = hkpRigidBody::hkpRigidBody(local_130);
  local_14 = iVar3;
  FUN_010060a0();
  *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(param_1 + 0x2c);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0xc))(local_14);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  FUN_011929d0(local_14,1);
  piVar1 = *(int **)(param_1 + 0x50);
  iVar3 = piVar1[1];
  if (iVar3 <= piVar1[4]) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 * 2;
    }
    FUN_0127e210(iVar3);
  }
  if (piVar1[3] == piVar1[1]) {
    piVar1[3] = 0;
  }
  *(int *)(*piVar1 + piVar1[3] * 4) = local_14;
  piVar1[3] = piVar1[3] + 1;
  piVar1[4] = piVar1[4] + 1;
  piVar1 = *(int **)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x30) < piVar1[4]) {
    local_14 = *(int *)(*piVar1 + piVar1[2] * 4);
    iVar3 = piVar1[2] + 1;
    piVar1[2] = iVar3;
    if (iVar3 == piVar1[1]) {
      piVar1[2] = 0;
    }
    piVar1[4] = piVar1[4] + -1;
    iVar3 = *(int *)(param_1 + 0x18);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0x10))(local_14);
    }
    if (*(int *)(local_14 + 8) != 0) {
      FUN_01192b60(&local_15,local_14);
    }
    FUN_010060a0();
  }
  return;
}

// 0127E0E0  hkpMountedBallGun::vf14  size=3  [run]
void hkpMountedBallGun::vf14(void)

{
  return;
}

// 0127E100  FUN_0127e100  size=38  [run]
void FUN_0127e100(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0127E130  hkpMountedBallGun::vf00  size=52  [run]
int __thiscall hkpMountedBallGun::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkpBallGun::~hkpBallGun();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0127E180  FUN_0127e180  size=35  [run]
void FUN_0127e180(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1 * 4);
  return;
}

// 0127E1B0  FUN_0127e1b0  size=39  [run]
void FUN_0127e1b0(undefined4 param_1,int param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,param_2 * 4);
  return;
}

// 0127E210  FUN_0127e210  size=235  [run]
void __thiscall FUN_0127e210(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  int iVar6;
  
  if (param_1[1] < param_2) {
    iVar6 = param_1[1] * 2;
    if (param_2 <= iVar6) {
      param_2 = iVar6;
    }
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    iVar6 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(param_2 * 4);
    if ((iVar6 != 0) && (iVar2 = *param_1, iVar2 != 0)) {
      if (param_1[4] != 0) {
        iVar3 = param_1[3];
        iVar4 = param_1[2];
        if (iVar4 < iVar3) {
          FUN_01015e80(iVar6,iVar2 + iVar4 * 4,param_1[4] * 4);
        }
        else {
          iVar1 = (param_1[1] - iVar4) * 4;
          FUN_01015e80(iVar6,iVar2 + iVar4 * 4,iVar1);
          FUN_01015e80(iVar1 + iVar6,*param_1,iVar3 * 4);
        }
      }
      param_1[2] = 0;
      param_1[3] = param_1[4];
    }
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      iVar3 = *param_1;
      pvVar5 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 8))(iVar3,iVar2 * 4);
    }
    *param_1 = iVar6;
    param_1[1] = param_2;
  }
  return;
}

// 0127E320  FUN_0127e320  size=74  [run]
void __thiscall FUN_0127e320(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 <= param_1[4]) {
    if (iVar1 == 0) {
      iVar1 = 8;
    }
    else {
      iVar1 = iVar1 * 2;
    }
    FUN_0127e210(iVar1);
  }
  if (param_1[3] == param_1[1]) {
    param_1[3] = 0;
  }
  *(undefined4 *)(*param_1 + param_1[3] * 4) = *param_2;
  param_1[3] = param_1[3] + 1;
  param_1[4] = param_1[4] + 1;
  return;
}

// 0127E3A0  hkpMotorAction::vf0C  size=271  [run]
void __thiscall hkpMotorAction::vf0C(int param_1,int param_2)

{
  int iVar1;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    iVar1 = *(int *)(param_1 + 0x18);
    FUN_01006f90(iVar1 + 0xf0,iVar1 + 0x1c0);
    fStack_24 = (*(float *)(param_1 + 0x30) -
                (*(float *)(param_1 + 0x24) * fStack_3c + *(float *)(param_1 + 0x20) * local_40 +
                *(float *)(param_1 + 0x28) * fStack_38)) * *(float *)(param_1 + 0x34);
    local_30 = fStack_24 * *(float *)(param_1 + 0x20);
    fStack_2c = fStack_24 * *(float *)(param_1 + 0x24);
    fStack_28 = fStack_24 * *(float *)(param_1 + 0x28);
    fStack_24 = fStack_24 * *(float *)(param_1 + 0x2c);
    (**(code **)(*(int *)(iVar1 + 0xe0) + 0x14))(&local_70);
    fStack_6c = local_30 * fStack_6c;
    fStack_68 = local_30 * fStack_68;
    fStack_64 = local_30 * fStack_64;
    fStack_58 = fStack_2c * fStack_58;
    fStack_54 = fStack_2c * fStack_54;
    fStack_44 = fStack_28 * fStack_44;
    local_30 = local_30 * local_70 + fStack_2c * local_60 + fStack_28 * local_50;
    fStack_2c = fStack_6c + fStack_2c * fStack_5c + fStack_28 * fStack_4c;
    fStack_28 = fStack_68 + fStack_58 + fStack_28 * fStack_48;
    fStack_24 = fStack_64 + fStack_54 + fStack_44;
    FUN_01006f50(iVar1 + 0xf0,&local_30);
    local_14 = *(undefined4 *)(param_2 + 8);
    FUN_0118fe70();
    (**(code **)(*(int *)(iVar1 + 0xe0) + 100))(local_14,&local_30);
  }
  return;
}

// 0127E4B0  hkpMotorAction::hkpMotorAction  size=149  [run]
undefined4 * __thiscall
hkpMotorAction::hkpMotorAction
          (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
          undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar17;
  
  hkpUnaryAction::hkpUnaryAction(param_2,0);
  *param_1 = vftable;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  param_1[8] = *param_3;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  param_1[0xc] = param_4;
  param_1[0xd] = param_5;
  *(undefined1 *)(param_1 + 0xe) = 1;
  fVar1 = (float)param_1[8];
  fVar2 = (float)param_1[9];
  fVar3 = (float)param_1[10];
  fVar4 = (float)param_1[0xb];
  fVar8 = fVar3 * fVar3 + fVar1 * fVar1;
  fVar9 = fVar4 * fVar4 + fVar2 * fVar2;
  fVar10 = fVar1 * fVar1 + fVar3 * fVar3;
  fVar11 = fVar2 * fVar2 + fVar4 * fVar4;
  fVar12 = fVar9 + fVar8;
  fVar8 = fVar8 + fVar9;
  fVar9 = fVar11 + fVar10;
  fVar10 = fVar10 + fVar11;
  auVar13._0_12_ = ZEXT812(0);
  auVar13._12_4_ = 0;
  auVar14._4_4_ = fVar8;
  auVar14._0_4_ = fVar12;
  auVar14._8_4_ = fVar9;
  auVar14._12_4_ = fVar10;
  auVar14 = rsqrtps(auVar13,auVar14);
  fVar11 = auVar14._0_4_;
  fVar15 = auVar14._4_4_;
  fVar16 = auVar14._8_4_;
  fVar17 = auVar14._12_4_;
  param_1[8] = (float)(~-(uint)(fVar12 <= 0.0) &
                      (uint)((3.0 - fVar11 * fVar12 * fVar11) * fVar11 * 0.5)) * fVar1;
  param_1[9] = (float)(~-(uint)(fVar8 <= 0.0) &
                      (uint)((3.0 - fVar15 * fVar8 * fVar15) * fVar15 * 0.5)) * fVar2;
  param_1[10] = (float)(~-(uint)(fVar9 <= 0.0) &
                       (uint)((3.0 - fVar16 * fVar9 * fVar16) * fVar16 * 0.5)) * fVar3;
  param_1[0xb] = (float)(~-(uint)(fVar10 <= 0.0) &
                        (uint)((3.0 - fVar17 * fVar10 * fVar17) * fVar17 * 0.5)) * fVar4;
  return param_1;
}

// 0127E550  hkpMotorAction::vf1C  size=125  [run]
int __thiscall hkpMotorAction::vf1C(int param_1,undefined4 *param_2,int param_3)

{
  LPVOID pvVar1;
  int iVar2;
  
  if ((param_2[1] == 1) && (*(int *)(param_3 + 4) == 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
    *(undefined2 *)(iVar2 + 4) = 0x40;
    iVar2 = hkpMotorAction(*(undefined4 *)*param_2,param_1 + 0x20,*(undefined4 *)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x34));
    *(undefined1 *)(iVar2 + 0x38) = *(undefined1 *)(param_1 + 0x38);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x10);
    return iVar2;
  }
  return 0;
}

// 0127E5D0  FUN_0127e5d0  size=37  [run]
void FUN_0127e5d0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0127E600  hkpGroupCollisionFilter::hkpGroupCollisionFilter  size=187  [run]
undefined4 * __fastcall hkpGroupCollisionFilter::hkpGroupCollisionFilter(undefined4 *param_1)

{
  hkpCollisionFilter::hkpCollisionFilter();
  *param_1 = vftable;
  param_1[2] = vftable;
  param_1[3] = vftable;
  param_1[4] = vftable;
  param_1[5] = vftable;
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return param_1;
}

// 0127E6C0  FUN_0127e6c0  size=666  [run]
void __thiscall FUN_0127e6c0(int param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    *param_2 = *(undefined1 *)(param_1 + 0x30);
    return;
  }
  uVar1 = 0;
  if ((char)param_3 != '\0') {
    if ((param_3 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x34);
    }
    if ((param_3 & 2) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x38);
    }
    if ((param_3 & 4) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x3c);
    }
    if ((param_3 & 8) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x40);
    }
    if ((param_3 & 0x10) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x44);
    }
    if ((param_3 & 0x20) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x48);
    }
    if ((param_3 & 0x40) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x4c);
    }
    if ((char)param_3 < '\0') {
      uVar1 = *(uint *)(param_1 + 0x50);
    }
    else {
      uVar1 = 0;
    }
    uVar1 = uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar1;
  }
  if ((param_3 & 0xff00) != 0) {
    if ((param_3 & 0x100) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x54);
    }
    if ((param_3 & 0x200) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x58);
    }
    if ((param_3 & 0x400) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x5c);
    }
    if ((param_3 & 0x800) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x60);
    }
    if ((param_3 & 0x1000) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 100);
    }
    if ((param_3 & 0x2000) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x68);
    }
    if ((param_3 & 0x4000) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x6c);
    }
    if ((param_3 & 0x8000) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x70);
    }
    uVar1 = uVar1 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar2;
  }
  if ((param_3 & 0xff0000) != 0) {
    if ((param_3 & 0x10000) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x74);
    }
    if ((param_3 & 0x20000) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x78);
    }
    if ((param_3 & 0x40000) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x7c);
    }
    if ((param_3 & 0x80000) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x80);
    }
    if ((param_3 & 0x100000) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x84);
    }
    if ((param_3 & 0x200000) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x88);
    }
    if ((param_3 & 0x400000) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x8c);
    }
    if ((param_3 & 0x800000) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x90);
    }
    uVar1 = uVar1 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar2;
  }
  if ((param_3 & 0xff000000) != 0) {
    if ((param_3 & 0x1000000) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x94);
    }
    if ((param_3 & 0x2000000) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x98);
    }
    if ((param_3 & 0x4000000) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(param_1 + 0x9c);
    }
    if ((param_3 & 0x8000000) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0xa0);
    }
    if ((param_3 & 0x10000000) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0xa4);
    }
    if ((param_3 & 0x20000000) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0xa8);
    }
    if ((param_3 & 0x40000000) == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0xac);
    }
    uVar1 = uVar1 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9;
    if ((int)param_3 < 0) {
      *param_2 = (param_4 & (uVar1 | *(uint *)(param_1 + 0xb0))) != 0;
      return;
    }
  }
  *param_2 = (param_4 & uVar1) != 0;
  return;
}

// 0127E960  hkpGroupCollisionFilter::vf04  size=37  [run]
undefined4 hkpGroupCollisionFilter::vf04(undefined4 param_1,int param_2,int param_3)

{
  FUN_0127e6c0(param_1,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_3 + 0x1c));
  return param_1;
}

// 0127E990  hkpGroupCollisionFilter::vf04  size=66  [run]
undefined4
hkpGroupCollisionFilter::vf04
          (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5,
          undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = (**(code **)(*param_5 + 0x10))(param_6);
  iVar2 = *(int *)(param_3 + 0xc);
  while (iVar1 = iVar2, iVar1 != 0) {
    param_3 = iVar1;
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  FUN_0127e6c0(param_1,*(undefined4 *)(param_3 + 0x1c),uVar3);
  return param_1;
}

// 0127E9E0  hkpGroupCollisionFilter::vf00  size=59  [run]
undefined4 hkpGroupCollisionFilter::vf00(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *in_stack_00000014;
  int *in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  uVar1 = (**(code **)(*in_stack_00000014 + 0x10))(in_stack_0000001c);
  uVar2 = (**(code **)(*in_stack_00000018 + 0x10))(in_stack_00000020);
  FUN_0127e6c0(param_1,uVar1,uVar2);
  return param_1;
}

// 0127EA20  hkpGroupCollisionFilter::vf00  size=49  [run]
undefined4
hkpGroupCollisionFilter::vf00
          (undefined4 param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_4 + 0x10))(param_5);
  FUN_0127e6c0(param_1,*(undefined4 *)(param_2 + 0x20),uVar1);
  return param_1;
}

// 0127EA60  hkpGroupCollisionFilter::vf04  size=37  [run]
undefined4 hkpGroupCollisionFilter::vf04(undefined4 param_1,int param_2,int param_3)

{
  FUN_0127e6c0(param_1,*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_3 + 0x1c));
  return param_1;
}

// 0127EA90  FUN_0127ea90  size=66  [run]
void __thiscall FUN_0127ea90(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if ((param_2 == 0) && (param_3 == 0)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  uVar1 = 1;
  puVar2 = (uint *)(param_1 + 0x34);
  iVar3 = 0x20;
  do {
    if ((param_2 & uVar1) != 0) {
      *puVar2 = *puVar2 | param_3;
    }
    if ((param_3 & uVar1) != 0) {
      *puVar2 = *puVar2 | param_2;
    }
    puVar2 = puVar2 + 1;
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 0127EAE0  FUN_0127eae0  size=83  [run]
void __thiscall FUN_0127eae0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  if ((param_2 == 0) && (param_3 == 0)) {
    *(undefined1 *)(param_1 + 0x30) = 0;
    return;
  }
  uVar1 = 1;
  puVar2 = (uint *)(param_1 + 0x34);
  iVar3 = 0x20;
  do {
    if ((param_2 & uVar1) != 0) {
      *puVar2 = *puVar2 & ~param_3;
    }
    if ((param_3 & uVar1) != 0) {
      *puVar2 = *puVar2 & ~param_2;
    }
    puVar2 = puVar2 + 1;
    uVar1 = uVar1 << 1 | (uint)((int)uVar1 < 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 0127EBB0  hkpClosestRayHitCollector::hkpClosestRayHitCollector_3  size=553  [run]
int __thiscall
hkpClosestRayHitCollector::hkpClosestRayHitCollector_3
          (int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined **local_110;
  undefined4 local_10c;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e0;
  undefined4 local_c0;
  int local_b0;
  float local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  local_20 = (int *)(param_4 + 0x28);
  local_2c = 0;
  local_28 = 0.35;
  local_24 = 2;
  local_18 = param_1;
  do {
    local_30 = 0;
    piVar3 = local_20;
    if (0 < local_20[1]) {
      do {
        local_34 = *(int *)(*piVar3 + local_30 * 4);
        local_1c = 0;
        iVar2 = local_34;
        if (0 < *(int *)(local_34 + 0x50)) {
          do {
            iVar1 = *(int *)(*(int *)(iVar2 + 0x4c) + local_1c * 4);
            FUN_01007090(param_2,iVar1 + 0x140);
            iVar4 = local_34;
            if (((0.1 <= local_50) &&
                (local_50 < *(float *)(local_18 + 0x34) || local_50 == *(float *)(local_18 + 0x34)))
               && (iVar4 = iVar2, iVar1 != param_3)) {
              local_60 = ABS(local_48);
              uStack_5c = 0;
              uStack_58 = 0;
              uStack_54 = 0;
              local_a0 = ABS(local_4c);
              uStack_9c = 0;
              uStack_98 = 0;
              uStack_94 = 0;
              local_14 = (local_a0 + local_60) / (local_50 + 1.0);
              fVar5 = (float10)FUN_011a2a30();
              if ((float10)*(float *)(local_18 + 0x30) < fVar5) {
                local_14 = local_14 + 0.1;
              }
              iVar4 = local_34;
              if (local_14 <= local_28) {
                iVar2 = 0;
                if (0 < *(int *)(local_18 + 0x24)) {
                  piVar3 = *(int **)(local_18 + 0x20);
                  do {
                    if (*piVar3 == iVar1) goto LAB_0127ed96;
                    iVar2 = iVar2 + 1;
                    piVar3 = piVar3 + 1;
                  } while (iVar2 < *(int *)(local_18 + 0x24));
                }
                local_ec = 0xffffffff;
                local_e0 = 0xffffffff;
                local_b0 = 0;
                local_c0 = 0;
                local_70 = 0;
                local_6c = 0;
                local_68 = 0;
                local_f0 = 0x3f800000;
                local_10c = 0x3f800000;
                local_90 = *(undefined4 *)(param_2 + 0x30);
                uStack_8c = *(undefined4 *)(param_2 + 0x34);
                uStack_88 = *(undefined4 *)(param_2 + 0x38);
                uStack_84 = *(undefined4 *)(param_2 + 0x3c);
                local_80 = *(undefined4 *)(iVar1 + 0x140);
                uStack_7c = *(undefined4 *)(iVar1 + 0x144);
                uStack_78 = *(undefined4 *)(iVar1 + 0x148);
                uStack_74 = *(undefined4 *)(iVar1 + 0x14c);
                local_110 = vftable;
                hkpBroadPhaseCastCollector::hkpBroadPhaseCastCollector_2(&local_90,&local_110);
                iVar4 = local_34;
                if ((local_b0 == 0) || (local_b0 == iVar1 + 0x10)) {
                  local_28 = local_14;
                  local_2c = iVar1;
                }
              }
            }
LAB_0127ed96:
            local_1c = local_1c + 1;
            piVar3 = local_20;
            iVar2 = iVar4;
          } while (local_1c < *(int *)(iVar4 + 0x50));
        }
        local_30 = local_30 + 1;
      } while (local_30 < piVar3[1]);
    }
    local_20 = (int *)(param_4 + 0x34);
    local_24 = local_24 + -1;
    if (local_24 == 0) {
      return local_2c;
    }
  } while( true );
}

// 0127EDE0  FUN_0127ede0  size=106  [run]
int __thiscall FUN_0127ede0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + param_2 * 4);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  iVar2 = (*(int *)(param_1 + 0x24) - param_2) * 4;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 4);
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 2) + 1;
    do {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0119f670(*(float *)(iVar1 + 0x1ac) * 0.01);
  FUN_010060a0();
  return iVar1;
}

// 0127EE50  FUN_0127ee50  size=225  [run]
void __thiscall FUN_0127ee50(int param_1,float *param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar2 = FUN_0127ede0(0);
    fVar1 = *(float *)(param_1 + 0x3c);
    local_20 = *(float *)(param_3 + 0x1b0) + fVar1 * *param_2;
    fStack_1c = *(float *)(param_3 + 0x1b4) + fVar1 * param_2[1] + 0.5;
    fStack_18 = *(float *)(param_3 + 0x1b8) + fVar1 * param_2[2];
    fStack_14 = *(float *)(param_3 + 0x1bc) + fVar1 * param_2[3];
    FUN_0118fe70();
    (**(code **)(*(int *)(iVar2 + 0xe0) + 0x40))(&local_20);
    *(undefined1 *)(iVar2 + 0x2a) = 6;
    return;
  }
  iVar2 = hkpClosestRayHitCollector::hkpClosestRayHitCollector_3(param_2,param_3,param_4);
  if (iVar2 != 0) {
    fStack_14 = *(float *)(param_1 + 0x38);
    local_20 = fStack_14 * *param_2;
    fStack_1c = fStack_14 * param_2[1];
    fStack_18 = fStack_14 * param_2[2];
    fStack_14 = fStack_14 * param_2[3];
    FUN_0118fe70();
    (**(code **)(*(int *)(iVar2 + 0xe0) + 0x50))(&local_20);
  }
  return;
}

// 0127EF40  FUN_0127ef40  size=16  [run]
void __fastcall FUN_0127ef40(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0127ede0(0);
  }
  return;
}

// 0127EF50  hkpGravityGun::vf20  size=35  [run]
void __fastcall hkpGravityGun::vf20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  while (iVar1 != 0) {
    FUN_0127ede0(0);
    iVar1 = *(int *)(param_1 + 0x24);
  }
  return;
}

// 0127EF80  FUN_0127ef80  size=100  [run]
void __thiscall FUN_0127ef80(int param_1,int param_2)

{
  FUN_01006000();
  if (*(uint *)(param_1 + 0x24) == (*(uint *)(param_1 + 0x28) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x20),4);
  }
  *(int *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24) * 4) = param_2;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  FUN_0119f670(*(float *)(param_2 + 0x1ac) * 100.0);
  return;
}

// 0127EFF0  FUN_0127eff0  size=179  [run]
void __thiscall FUN_0127eff0(int param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar1 = hkpClosestRayHitCollector::hkpClosestRayHitCollector_3(param_2,param_3,param_4);
  if (iVar1 != 0) {
    if ((1.0 <= *(float *)(param_1 + 0x30) * *(float *)(iVar1 + 0x1ac)) &&
       (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x2c))) {
      FUN_0127ef80(iVar1);
      return;
    }
    fStack_14 = -*(float *)(param_1 + 0x38);
    local_20 = fStack_14 * *param_2;
    fStack_1c = fStack_14 * param_2[1];
    fStack_18 = fStack_14 * param_2[2];
    fStack_14 = fStack_14 * param_2[3];
    FUN_0118fe70();
    (**(code **)(*(int *)(iVar1 + 0xe0) + 0x50))(&local_20);
  }
  return;
}

// 0127F0B0  FUN_0127f0b0  size=553  [run]
void __thiscall FUN_0127f0b0(int param_1,float param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 in_XMM4 [16];
  float fVar11;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_18;
  int *local_14;
  
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    local_90 = 0.4 / param_2;
    local_70 = 0.0;
    fStack_6c = 0.0;
    fStack_68 = 0.0;
    fStack_64 = 0.0;
    local_80 = 3.0;
    fStack_7c = 3.0;
    fStack_78 = 3.0;
    fStack_74 = 3.0;
    local_a0 = 0.5;
    fStack_9c = 0.5;
    fStack_98 = 0.5;
    fStack_94 = 0.5;
    local_50 = 0.8;
    fStack_4c = 0.8;
    fStack_48 = 0.8;
    fStack_44 = 0.8;
    fStack_8c = local_90;
    fStack_88 = local_90;
    fStack_84 = local_90;
    do {
      iVar1 = local_18;
      fVar3 = (float)local_18;
      local_60 = fVar3 * *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x40);
      fStack_5c = fVar3 * *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x44);
      fStack_58 = fVar3 * *(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x48);
      fStack_54 = fVar3 * *(float *)(param_1 + 0x5c) + *(float *)(param_1 + 0x4c);
      FUN_01007050(param_3,&local_60);
      iVar1 = *(int *)(*(int *)(param_1 + 0x20) + iVar1 * 4);
      local_30 = (local_b0 - *(float *)(iVar1 + 0x140)) * local_90 +
                 (*(float *)(param_4 + 0x1b0) - *(float *)(iVar1 + 0x1b0)) * local_50 +
                 *(float *)(iVar1 + 0x1b0);
      fStack_2c = (fStack_ac - *(float *)(iVar1 + 0x144)) * fStack_8c +
                  (*(float *)(param_4 + 0x1b4) - *(float *)(iVar1 + 0x1b4)) * fStack_4c +
                  *(float *)(iVar1 + 0x1b4);
      fStack_28 = (fStack_a8 - *(float *)(iVar1 + 0x148)) * fStack_88 +
                  (*(float *)(param_4 + 0x1b8) - *(float *)(iVar1 + 0x1b8)) * fStack_48 +
                  *(float *)(iVar1 + 0x1b8);
      fStack_24 = (fStack_a4 - *(float *)(iVar1 + 0x14c)) * fStack_84 +
                  (*(float *)(param_4 + 0x1bc) - *(float *)(iVar1 + 0x1bc)) * fStack_44 +
                  *(float *)(iVar1 + 0x1bc);
      fVar3 = local_30 * local_30;
      fVar4 = fStack_2c * fStack_2c;
      fVar5 = fStack_28 * fStack_28;
      fVar6 = fVar4 + fVar3 + fVar5;
      fVar7 = fVar4 + fVar3 + fVar5;
      fVar8 = fVar4 + fVar3 + fVar5;
      fVar5 = fVar4 + fVar3 + fVar5;
      auVar2._4_4_ = fVar7;
      auVar2._0_4_ = fVar6;
      auVar2._8_4_ = fVar8;
      auVar2._12_4_ = fVar5;
      in_XMM4 = rsqrtps(in_XMM4,auVar2);
      fVar3 = in_XMM4._0_4_;
      fVar9 = in_XMM4._4_4_;
      fVar10 = in_XMM4._8_4_;
      fVar11 = in_XMM4._12_4_;
      fVar4 = (float)(~-(uint)(fVar6 <= local_70) &
                     (uint)((local_80 - fVar3 * fVar6 * fVar3) * local_a0 * fVar3));
      local_40 = fVar4 * local_30;
      fStack_3c = (float)(~-(uint)(fVar7 <= fStack_6c) &
                         (uint)((fStack_7c - fVar9 * fVar7 * fVar9) * fStack_9c * fVar9)) *
                  fStack_2c;
      fStack_38 = (float)(~-(uint)(fVar8 <= fStack_68) &
                         (uint)((fStack_78 - fVar10 * fVar8 * fVar10) * fStack_98 * fVar10)) *
                  fStack_28;
      fStack_34 = (float)(~-(uint)(fVar5 <= fStack_64) &
                         (uint)((fStack_74 - fVar11 * fVar5 * fVar11) * fStack_94 * fVar11)) *
                  fStack_24;
      local_14 = (int *)((*(ushort *)(&DAT_0164c9e0 + (uint)*(byte *)(iVar1 + 0x19a) * 2) + 0x3b800)
                        * 0x1000);
      fVar3 = (float)local_14;
      if (*(ushort *)(&DAT_0164c9e0 + (uint)*(byte *)(iVar1 + 0x19a) * 2) == 0) {
        fVar3 = 0.0;
      }
      if (fVar4 * fVar6 < fVar3) {
        FUN_0118fe70();
        local_14 = (int *)(iVar1 + 0xe0);
        (**(code **)(*(int *)(iVar1 + 0xe0) + 0x40))(&local_30);
      }
      else {
        fVar3 = fVar3 - 0.01;
        local_40 = fVar3 * local_40;
        fStack_3c = fVar3 * fStack_3c;
        fStack_38 = fVar3 * fStack_38;
        fStack_34 = fVar3 * fStack_34;
        FUN_0118fe70();
        local_14 = (int *)(iVar1 + 0xe0);
        (**(code **)(*(int *)(iVar1 + 0xe0) + 0x40))(&local_40);
      }
      local_c0 = *(float *)(iVar1 + 0x1c0) * local_50;
      fStack_bc = *(float *)(iVar1 + 0x1c4) * fStack_4c;
      fStack_b8 = *(float *)(iVar1 + 0x1c8) * fStack_48;
      fStack_b4 = *(float *)(iVar1 + 0x1cc) * fStack_44;
      if (1.0 < fStack_b8 * fStack_b8 + fStack_bc * fStack_bc + local_c0 * local_c0) {
        FUN_0118fe70();
        (**(code **)(*local_14 + 0x44))(&local_c0);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x24));
  }
  return;
}

// 0127F2E0  hkpGravityGun::vf14  size=304  [run]
void __thiscall
hkpGravityGun::vf14(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                   char param_6,char param_7)

{
  int iVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_6 == '\0') {
    if (param_7 != '\0') {
      if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x2c)) {
        FUN_0127ef40(param_5,param_4,param_3);
        local_30 = *(undefined4 *)(param_4 + 0x120);
        uStack_2c = *(undefined4 *)(param_4 + 0x124);
        uStack_28 = *(undefined4 *)(param_4 + 0x128);
        uStack_24 = *(undefined4 *)(param_4 + 300);
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0x18)) {
          do {
            (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + iVar1 * 4) + 0x14))(&local_30,0);
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(param_1 + 0x18));
        }
      }
      else {
        FUN_0127eff0(param_5,param_4,param_3);
        local_30 = *(undefined4 *)(param_5 + 0x30);
        uStack_2c = *(undefined4 *)(param_5 + 0x34);
        uStack_28 = *(undefined4 *)(param_5 + 0x38);
        uStack_24 = *(undefined4 *)(param_5 + 0x3c);
        iVar1 = 0;
        local_20 = *(undefined4 *)(param_4 + 0x120);
        uStack_1c = *(undefined4 *)(param_4 + 0x124);
        uStack_18 = *(undefined4 *)(param_4 + 0x128);
        uStack_14 = *(undefined4 *)(param_4 + 300);
        if (0 < *(int *)(param_1 + 0x18)) {
          do {
            (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + iVar1 * 4) + 0x14))
                      (&local_30,&local_20);
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(param_1 + 0x18));
        }
      }
    }
  }
  else {
    FUN_0127ee50(param_5,param_4,param_3);
    local_20 = *(undefined4 *)(param_4 + 0x120);
    uStack_1c = *(undefined4 *)(param_4 + 0x124);
    uStack_18 = *(undefined4 *)(param_4 + 0x128);
    uStack_14 = *(undefined4 *)(param_4 + 300);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x18)) {
      do {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + iVar1 * 4) + 0x14))(&local_20,0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x18));
    }
  }
  FUN_0127f0b0(param_2,param_5,param_4);
  return;
}

// 0127F410  hkpGravityGun::hkpGravityGun  size=123  [run]
undefined4 * __fastcall hkpGravityGun::hkpGravityGun(undefined4 *param_1)

{
  hkpFirstPersonGun::hkpFirstPersonGun();
  *param_1 = vftable;
  param_1[10] = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0x43480000;
  param_1[0xb] = 10;
  param_1[0xd] = 0x42480000;
  param_1[0xe] = 0x42c80000;
  param_1[0xf] = 0x42480000;
  *(undefined1 *)(param_1 + 2) = 3;
  FUN_01006780("GravityGun");
  param_1[0x10] = 0x40200000;
  param_1[0x11] = 0x3f19999a;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3f800000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}

// 0127F490  hkpGravityGun::hkpGravityGun  size=52  [run]
undefined4 * __thiscall hkpGravityGun::hkpGravityGun(undefined4 *param_1,int param_2)

{
  hkpFirstPersonGun::hkpFirstPersonGun(param_2);
  *param_1 = vftable;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x80000000;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 3;
  }
  return param_1;
}

// 0127F4D0  FUN_0127f4d0  size=54  [run]
void __thiscall FUN_0127f4d0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = param_1[1] + -1;
  iVar1 = (param_1[1] - param_2) * 4;
  puVar2 = (undefined4 *)(*param_1 + param_2 * 4);
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[1];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 0127F510  hkpGravityGun::vf10  size=3  [run]
void hkpGravityGun::vf10(void)

{
  return;
}

// 0127F520  FUN_0127f520  size=38  [run]
void FUN_0127f520(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0127F550  FUN_0127f550  size=69  [run]
void __fastcall FUN_0127f550(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (-1 < *(int *)(param_1 + 0x28)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x28) * 4);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x80000000;
  hkpFirstPersonGun::~hkpFirstPersonGun();
  return;
}

// 0127F5A0  hkpGravityGun::vf00  size=113  [run]
int __thiscall hkpGravityGun::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (-1 < *(int *)(param_1 + 0x28)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x28) * 4);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x80000000;
  hkpFirstPersonGun::~hkpFirstPersonGun();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0127F650  hkpMountedBallGun::vf1C  size=7  [run]
uint __fastcall hkpMountedBallGun::vf1C(int param_1)

{
  return *(uint *)(param_1 + 0xc) & 0xfffffffe;
}

// 0127F660  hkpMountedBallGun::vf18  size=11  [run]
void __fastcall hkpMountedBallGun::vf18(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0127f669. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}

// 0127F670  hkpClosestCdPointCollector::hkpClosestCdPointCollector  size=481  [run]
undefined4
hkpClosestCdPointCollector::hkpClosestCdPointCollector
          (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,
          undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  int iVar5;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined **local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_98;
  undefined4 local_94;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined4 local_44;
  undefined4 local_14;
  
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x20);
  *(undefined2 *)(iVar5 + 4) = 0x20;
  local_60 = hkpSphereShape::hkpSphereShape(param_3);
  local_110 = 0x3f800000;
  uStack_10c = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  local_100 = 0;
  uStack_fc = 0x3f800000;
  uStack_f8 = 0;
  uStack_f4 = 0;
  local_58 = &local_110;
  local_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0x3f800000;
  uStack_e4 = 0;
  local_e0 = *param_2;
  uStack_dc = param_2[1];
  uStack_d8 = param_2[2];
  uStack_d4 = param_2[3];
  local_5c = 0xffffffff;
  local_46 = 0xff;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_44 = 0;
  local_48 = 0x7f00;
  FUN_01181ea0();
  local_14 = 0xbf800000;
  local_48 = CONCAT11((char)&local_60 - (char)&local_4c,(undefined1)local_48);
  uStack_a4 = 0x7f7fffee;
  local_cc = 0x7f7fffee;
  local_4e = 0;
  local_a0 = 0;
  local_70 = 0x34000000;
  local_6c = 0x34000000;
  local_80 = *param_4;
  uStack_7c = param_4[1];
  uStack_78 = param_4[2];
  uStack_74 = param_4[3];
  local_4f = 8;
  local_d0 = vftable;
  hkpBroadPhaseCastCollector::hkpBroadPhaseCastCollector_3(&local_60,&local_80,&local_d0,0);
  FUN_010060a0();
  if (local_a0 == 0) {
    param_5[9] = 0;
    uVar1 = param_4[1];
    uVar2 = param_4[2];
    uVar3 = param_4[3];
    *param_5 = *param_4;
    param_5[1] = uVar1;
    param_5[2] = uVar2;
    param_5[3] = uVar3;
    param_5[4] = 0;
    param_5[5] = 0;
    param_5[6] = 0;
    param_5[7] = param_5[7];
    param_5[8] = 0xffffffff;
    return 1;
  }
  *param_5 = local_c0;
  param_5[1] = uStack_bc;
  param_5[2] = uStack_b8;
  param_5[3] = uStack_b4;
  param_5[4] = local_b0;
  param_5[5] = uStack_ac;
  param_5[6] = uStack_a8;
  param_5[7] = uStack_a4;
  if (*(char *)(local_98 + 0x18) == '\x01') {
    param_5[9] = *(char *)(local_98 + 0x10) + local_98;
    param_5[8] = local_94;
    return 0;
  }
  param_5[9] = 0;
  param_5[8] = local_94;
  return 0;
}

// 0127F860  FUN_0127f860  size=306  [run]
void FUN_0127f860(float *param_1,float *param_2,float *param_3,float param_4,float *param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 in_XMM5 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar2 = param_2[3];
  fVar3 = param_1[3];
  fVar15 = *param_2 - *param_1;
  fVar16 = param_2[1] - param_1[1];
  fVar17 = param_2[2] - param_1[2];
  fVar4 = fVar15 * fVar15;
  fVar5 = fVar16 * fVar16;
  fVar6 = fVar17 * fVar17;
  fVar8 = fVar5 + fVar4 + fVar6;
  auVar13._4_4_ = fVar5 + fVar4 + fVar6;
  auVar13._0_4_ = fVar8;
  auVar13._8_4_ = fVar5 + fVar4 + fVar6;
  auVar13._12_4_ = fVar5 + fVar4 + fVar6;
  auVar13 = rsqrtps(in_XMM5,auVar13);
  fVar4 = auVar13._0_4_;
  fVar4 = (float)(~-(uint)(fVar8 <= 0.0) &
                 (uint)((3.0 - fVar4 * fVar8 * fVar4) * fVar4 * 0.5 * fVar8));
  if (1.1920929e-07 < fVar4) {
    fVar5 = (fVar4 / param_4) * -0.5;
    fVar10 = *param_3 * fVar5;
    fVar11 = param_3[1] * fVar5;
    fVar12 = param_3[2] * fVar5;
    fVar5 = param_3[3] * fVar5;
    fVar6 = fVar10 * fVar10;
    fVar8 = fVar11 * fVar11;
    fVar7 = fVar12 * fVar12;
    auVar14._4_4_ = fVar6;
    auVar14._0_4_ = fVar6;
    auVar14._8_4_ = fVar6;
    auVar14._12_4_ = fVar6;
    fVar9 = fVar8 + fVar6 + fVar7;
    auVar1._4_4_ = fVar8 + fVar6 + fVar7;
    auVar1._0_4_ = fVar9;
    auVar1._8_4_ = fVar8 + fVar6 + fVar7;
    auVar1._12_4_ = fVar8 + fVar6 + fVar7;
    auVar13 = rsqrtps(auVar14,auVar1);
    fVar6 = auVar13._0_4_;
    fVar6 = (float)(~-(uint)(fVar9 <= 0.0) &
                   (uint)((3.0 - fVar6 * fVar9 * fVar6) * fVar6 * 0.5 * fVar9));
    if (param_4 < fVar6) {
      fVar6 = param_4 / fVar6;
      fVar10 = fVar10 * fVar6;
      fVar11 = fVar11 * fVar6;
      fVar12 = fVar12 * fVar6;
      fVar5 = fVar5 * fVar6;
    }
    param_4 = param_4 / fVar4;
    *param_5 = param_4 * fVar15 + fVar10;
    param_5[1] = param_4 * fVar16 + fVar11;
    param_5[2] = param_4 * fVar17 + fVar12;
    param_5[3] = param_4 * (fVar2 - fVar3) + fVar5;
    return;
  }
  *param_5 = fVar15;
  param_5[1] = fVar16;
  param_5[2] = fVar17;
  param_5[3] = fVar2 - fVar3;
  return;
}

// 0127F9A0  hkpFirstPersonGun::hkpFirstPersonGun  size=64  [run]
undefined4 * __fastcall hkpFirstPersonGun::hkpFirstPersonGun(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_010066e0(&DAT_016416fa);
  *(undefined1 *)(param_1 + 4) = 0x71;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  return param_1;
}

// 0127F9E0  hkpFirstPersonGun::hkpFirstPersonGun  size=54  [run]
undefined4 * __thiscall hkpFirstPersonGun::hkpFirstPersonGun(undefined4 *param_1,int param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return param_1;
}

// 0127FA20  hkpFirstPersonGun::~hkpFirstPersonGun  size=109  [run]
void __fastcall hkpFirstPersonGun::~hkpFirstPersonGun(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = vftable;
  if (0 < (int)param_1[6]) {
    do {
      FUN_010060a0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[6]);
  }
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  FUN_01006770();
  *param_1 = ::hkBaseObject::vftable;
  return;
}

// 0127FAA0  FUN_0127faa0  size=14  [run]
void __thiscall FUN_0127faa0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0127FAC0  FUN_0127fac0  size=14  [run]
void __thiscall FUN_0127fac0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0127FB10  FUN_0127fb10  size=26  [run]
void __thiscall FUN_0127fb10(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0127FB70  FUN_0127fb70  size=61  [run]
void __thiscall FUN_0127fb70(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0127FBB0  FUN_0127fbb0  size=61  [run]
void __fastcall FUN_0127fbb0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0127FBF0  FUN_0127fbf0  size=61  [run]
void __fastcall FUN_0127fbf0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0127FC30  hkpFirstPersonGun::vf20  size=3  [run]
void hkpFirstPersonGun::vf20(void)

{
  return;
}

// 0127FC40  FUN_0127fc40  size=38  [run]
void FUN_0127fc40(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0127FC70  hkpFirstPersonGun::vf00  size=52  [run]
int __thiscall hkpFirstPersonGun::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkpFirstPersonGun();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0127FCB0  hkpDisableEntityCollisionFilter::vf04  size=13  [run]
void hkpDisableEntityCollisionFilter::vf04(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 0127FCC0  hkpDisableEntityCollisionFilter::vf00  size=13  [run]
void hkpDisableEntityCollisionFilter::vf00(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 0127FCD0  hkpDisableEntityCollisionFilter::vf00  size=13  [run]
void hkpDisableEntityCollisionFilter::vf00(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 0127FCE0  hkpDisableEntityCollisionFilter::vf04  size=13  [run]
void hkpDisableEntityCollisionFilter::vf04(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 0127FCF0  hkpDisableEntityCollisionFilter::vf14  size=3  [run]
void hkpDisableEntityCollisionFilter::vf14(void)

{
  return;
}

// 0127FD00  hkpDisableEntityCollisionFilter::vf04  size=71  [run]
void __thiscall
hkpDisableEntityCollisionFilter::vf04(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    piVar1 = *(int **)(param_1 + 0x2c);
    do {
      if ((*piVar1 + 0x10 == param_3) || (*piVar1 + 0x10 == param_4)) {
        *param_2 = 0;
        return;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x30));
  }
  *param_2 = 1;
  return;
}

// 0127FD50  FUN_0127fd50  size=90  [run]
void __thiscall FUN_0127fd50(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
    return;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    piVar2 = *(int **)(param_1 + 0x34);
    do {
      if (*piVar2 == param_3) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
        if (*(int *)(param_1 + 0x38) != iVar1) {
          *(undefined4 *)(*(int *)(param_1 + 0x34) + iVar1 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38) * 4);
        }
        *param_2 = 1;
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x38));
  }
  *param_2 = 0;
  return;
}

// 0127FDB0  hkpDisableEntityCollisionFilter::vf08  size=50  [run]
void __thiscall hkpDisableEntityCollisionFilter::vf08(uint param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0127fd50((int)&param_2 + 3,param_2);
    FUN_01190160(-(uint)(param_1 != 0x30) & param_1);
  }
  return;
}

// 0127FDF0  hkpDisableEntityCollisionFilter::hkpDisableEntityCollisionFilter  size=75  [run]
undefined4 * __fastcall
hkpDisableEntityCollisionFilter::hkpDisableEntityCollisionFilter(undefined4 *param_1)

{
  hkpCollisionFilter::hkpCollisionFilter();
  param_1[0xc] = hkpEntityListener::vftable;
  *param_1 = vftable;
  param_1[2] = vftable;
  param_1[3] = vftable;
  param_1[4] = vftable;
  param_1[5] = vftable;
  param_1[0xc] = vftable;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x80000000;
  return param_1;
}

// 0127FE40  hkBaseObject::hkBaseObject_49  size=304  [run]
void __fastcall hkBaseObject::hkBaseObject_49(undefined4 *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  *param_1 = hkpDisableEntityCollisionFilter::vftable;
  param_1[2] = hkpDisableEntityCollisionFilter::vftable;
  param_1[3] = hkpDisableEntityCollisionFilter::vftable;
  param_1[4] = hkpDisableEntityCollisionFilter::vftable;
  param_1[5] = hkpDisableEntityCollisionFilter::vftable;
  param_1[0xc] = hkpDisableEntityCollisionFilter::vftable;
  if (0 < (int)param_1[0xe]) {
    do {
      iVar1 = *(int *)(param_1[0xd] + iVar7 * 4);
      if (*(int *)(iVar1 + 0x214) == 0) {
        pvVar2 = TlsGetValue(DAT_01f8fc4c);
        puVar3 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x10);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = 0;
          puVar3[1] = 0x80000000;
          puVar3[2] = 0;
          puVar3[3] = 0x80000000;
        }
        *(undefined4 **)(iVar1 + 0x214) = puVar3;
      }
      uVar6 = (uint)*(ushort *)(*(int *)(iVar1 + 0x214) + 0xc);
      iVar5 = 0;
      if (uVar6 != 0) {
        piVar4 = *(int **)(*(int *)(iVar1 + 0x214) + 8);
        do {
          if ((undefined4 *)*piVar4 == param_1 + 0xc) {
            if (-1 < iVar5) {
              FUN_01190160(param_1 + 0xc);
            }
            break;
          }
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar5 < (int)uVar6);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)param_1[0xe]);
  }
  param_1[0xe] = 0;
  if (-1 < (int)param_1[0xf]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xd],param_1[0xf] * 4);
  }
  param_1[0xd] = 0;
  param_1[0xf] = 0x80000000;
  param_1[0xc] = hkpEntityListener::vftable;
  param_1[5] = hkpRayCollidableFilter::vftable;
  param_1[4] = hkpRayShapeCollectionFilter::vftable;
  param_1[3] = hkpShapeCollectionFilter::vftable;
  param_1[2] = hkpCollidableCollidableFilter::vftable;
  *param_1 = vftable;
  return;
}

// 0127FF70  FUN_0127ff70  size=249  [run]
void __thiscall FUN_0127ff70(int param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  
  if (param_3 == 0) {
LAB_0127ff7e:
    *param_2 = 0;
    return;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    piVar4 = *(int **)(param_1 + 0x34);
    do {
      if (*piVar4 == param_3) goto LAB_0127ff7e;
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x38));
  }
  if (*(uint *)(param_1 + 0x38) == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x34),4);
  }
  *(int *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38) * 4) = param_3;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  param_1 = param_1 + 0x30;
  if (*(int *)(param_3 + 0x214) == 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    puVar3 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0x80000000;
      puVar3[2] = 0;
      puVar3[3] = 0x80000000;
    }
    *(undefined4 **)(param_3 + 0x214) = puVar3;
  }
  uVar5 = (uint)*(ushort *)(*(int *)(param_3 + 0x214) + 0xc);
  iVar1 = 0;
  if (uVar5 != 0) {
    piVar4 = *(int **)(*(int *)(param_3 + 0x214) + 8);
    while (*piVar4 != param_1) {
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
      if ((int)uVar5 <= iVar1) {
        FUN_01190090(param_1);
        *param_2 = 1;
        return;
      }
    }
    if (-1 < iVar1) goto LAB_0128005d;
  }
  FUN_01190090(param_1);
LAB_0128005d:
  *param_2 = 1;
  return;
}

// 01280070  FUN_01280070  size=97  [run]
undefined4 * __fastcall FUN_01280070(int param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x214) == 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x10);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0x80000000;
      puVar2[2] = 0;
      puVar2[3] = 0x80000000;
      *(undefined4 **)(param_1 + 0x214) = puVar2;
      return puVar2 + 2;
    }
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  return (undefined4 *)(*(int *)(param_1 + 0x214) + 8);
}

// 012800E0  hkpDashpotAction::hkpDashpotAction  size=75  [run]
undefined4 * __thiscall
hkpDashpotAction::hkpDashpotAction
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  hkpBinaryAction::hkpBinaryAction(param_2,param_3,param_4);
  param_1[0x10] = 0x3dcccccd;
  param_1[0x11] = 0x3c23d70a;
  *param_1 = vftable;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}

// 01280130  hkpDashpotAction::vf0C  size=360  [run]
void __thiscall hkpDashpotAction::vf0C(int param_1,int param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  LPVOID pvVar14;
  float fVar15;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_1c;
  float local_18;
  int local_14;
  
  pvVar14 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar14 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar14 + 0xc)) {
    *puVar2 = "TtDashpot";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)((int)pvVar14 + 4) = puVar2 + 3;
  }
  iVar3 = *(int *)(param_1 + 0x18);
  local_14 = *(int *)(param_1 + 0x1c);
  local_18 = *(float *)(param_2 + 8) * 151.0;
  local_1c = iVar3;
  FUN_01007050(iVar3 + 0xf0,param_1 + 0x20);
  FUN_01007050(local_14 + 0xf0,param_1 + 0x30);
  iVar13 = local_1c;
  fVar5 = *(float *)(iVar3 + 0x1b0);
  fVar6 = *(float *)(iVar3 + 0x1b4);
  fVar7 = *(float *)(iVar3 + 0x1b8);
  fVar8 = *(float *)(iVar3 + 0x1bc);
  fVar9 = *(float *)(local_14 + 0x1b0);
  fVar10 = *(float *)(local_14 + 0x1b4);
  fVar11 = *(float *)(local_14 + 0x1b8);
  fVar12 = *(float *)(local_14 + 0x1bc);
  fVar15 = *(float *)(param_1 + 0x40) * local_18;
  pfVar1 = (float *)(param_1 + 0x50);
  *pfVar1 = fVar15 * (local_40 - local_30);
  *(float *)(param_1 + 0x54) = fVar15 * (fStack_3c - fStack_2c);
  *(float *)(param_1 + 0x58) = fVar15 * (fStack_38 - fStack_28);
  *(float *)(param_1 + 0x5c) = fVar15 * (fStack_34 - fStack_24);
  fVar15 = *(float *)(param_1 + 0x44) * local_18;
  *pfVar1 = fVar15 * (fVar5 - fVar9) + *pfVar1;
  *(float *)(param_1 + 0x54) = fVar15 * (fVar6 - fVar10) + *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x58) = fVar15 * (fVar7 - fVar11) + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x5c) = fVar15 * (fVar8 - fVar12) + *(float *)(param_1 + 0x5c);
  local_50 = *pfVar1 * -1.0;
  fStack_4c = *(float *)(param_1 + 0x54) * -1.0;
  fStack_48 = *(float *)(param_1 + 0x58) * -1.0;
  fStack_44 = *(float *)(param_1 + 0x5c) * -1.0;
  FUN_0118fe70();
  (**(code **)(*(int *)(iVar13 + 0xe0) + 0x54))(&local_50,&local_40);
  iVar3 = local_14;
  FUN_0118fe70();
  (**(code **)(*(int *)(iVar3 + 0xe0) + 0x54))(pfVar1,&local_30);
  pvVar14 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar14 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar14 + 0xc)) {
    *puVar2 = &DAT_0164b09c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)((int)pvVar14 + 4) = puVar2 + 3;
  }
  return;
}

// 012802A0  hkpDashpotAction::vf1C  size=129  [run]
int __thiscall hkpDashpotAction::vf1C(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  int iVar5;
  
  if ((param_2[1] == 2) && (*(int *)(param_3 + 4) == 0)) {
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x60);
    *(undefined2 *)(iVar5 + 4) = 0x60;
    iVar5 = hkpDashpotAction(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1],
                             *(undefined4 *)(param_1 + 0x10));
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar5 + 0x24) = uVar1;
    *(undefined4 *)(iVar5 + 0x28) = uVar2;
    *(undefined4 *)(iVar5 + 0x2c) = uVar3;
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar5 + 0x34) = uVar1;
    *(undefined4 *)(iVar5 + 0x38) = uVar2;
    *(undefined4 *)(iVar5 + 0x3c) = uVar3;
    *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(iVar5 + 0x44) = *(undefined4 *)(param_1 + 0x44);
    uVar1 = *(undefined4 *)(param_1 + 0x54);
    uVar2 = *(undefined4 *)(param_1 + 0x58);
    uVar3 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(iVar5 + 0x54) = uVar1;
    *(undefined4 *)(iVar5 + 0x58) = uVar2;
    *(undefined4 *)(iVar5 + 0x5c) = uVar3;
    return iVar5;
  }
  return 0;
}

// 01280330  FUN_01280330  size=37  [run]
void FUN_01280330(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01280360  hkpConstrainedSystemFilter::hkpConstrainedSystemFilter  size=81  [run]
undefined4 * __thiscall
hkpConstrainedSystemFilter::hkpConstrainedSystemFilter(undefined4 *param_1,int param_2)

{
  hkpCollisionFilter::hkpCollisionFilter();
  param_1[0xc] = hkpConstraintListener::vftable;
  *param_1 = vftable;
  param_1[2] = vftable;
  param_1[3] = vftable;
  param_1[4] = vftable;
  param_1[5] = vftable;
  param_1[0xc] = vftable;
  param_1[0xd] = param_2;
  if (param_2 != 0) {
    FUN_01006000();
  }
  return param_1;
}

// 012803C0  hkBaseObject::hkBaseObject_225  size=99  [run]
void __fastcall hkBaseObject::hkBaseObject_225(undefined4 *param_1)

{
  *param_1 = hkpConstrainedSystemFilter::vftable;
  param_1[2] = hkpConstrainedSystemFilter::vftable;
  param_1[3] = hkpConstrainedSystemFilter::vftable;
  param_1[4] = hkpConstrainedSystemFilter::vftable;
  param_1[5] = hkpConstrainedSystemFilter::vftable;
  param_1[0xc] = hkpConstrainedSystemFilter::vftable;
  if (param_1[0xd] != 0) {
    FUN_010060a0();
  }
  param_1[0xc] = hkpConstraintListener::vftable;
  param_1[5] = hkpRayCollidableFilter::vftable;
  param_1[4] = hkpRayShapeCollectionFilter::vftable;
  param_1[3] = hkpShapeCollectionFilter::vftable;
  param_1[2] = hkpCollidableCollidableFilter::vftable;
  *param_1 = vftable;
  return;
}

// 01280430  hkpConstrainedSystemFilter::vf04  size=212  [run]
void __thiscall
hkpConstrainedSystemFilter::vf04(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_3 + 0x18) == '\x01') {
    iVar4 = *(char *)(param_3 + 0x10) + param_3;
  }
  else {
    iVar4 = 0;
  }
  if (*(char *)(param_4 + 0x18) == '\x01') {
    iVar5 = *(char *)(param_4 + 0x10) + param_4;
  }
  else {
    iVar5 = 0;
  }
  if ((*(int *)(param_1 + 0x2c) != 0) &&
     (pcVar1 = (char *)(**(code **)(*(int *)(*(int *)(param_1 + 0x2c) + 8) + 4))
                                 ((int)&param_3 + 3,param_3,param_4), *pcVar1 == '\0')) {
LAB_0128047b:
    *param_2 = 0;
    return;
  }
  if ((iVar4 != 0) && (iVar5 != 0)) {
    iVar2 = FUN_0118fc90();
    iVar3 = FUN_0118fc90();
    param_3 = iVar4;
    param_4 = iVar5;
    if (iVar2 < iVar3) {
      param_3 = iVar5;
      param_4 = iVar4;
    }
    iVar4 = FUN_0118fc90();
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar2 = FUN_0118fce0(iVar5);
        if (((iVar2 != 0) && (iVar3 = (**(code **)(**(int **)(iVar2 + 0xc) + 0x2c))(), iVar3 != 0xb)
            ) && ((*(int *)(iVar2 + 0x14) == param_4 || (*(int *)(iVar2 + 0x18) == param_4))))
        goto LAB_0128047b;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  *param_2 = 1;
  return;
}

// 01280510  hkpConstrainedSystemFilter::vf04  size=74  [run]
void __thiscall
hkpConstrainedSystemFilter::vf04
          (int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    pcVar1 = (char *)(**(code **)(*(int *)(*(int *)(param_1 + 0x28) + 0xc) + 4))
                               ((int)&param_7 + 3,param_3,param_4,param_5,param_6,param_7);
    if (*pcVar1 == '\0') {
      *param_2 = 0;
      return;
    }
  }
  *param_2 = 1;
  return;
}

// 01280560  hkpConstrainedSystemFilter::vf00  size=81  [run]
void __thiscall
hkpConstrainedSystemFilter::vf00
          (int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    pcVar1 = (char *)(*(code *)**(undefined4 **)(*(int *)(param_1 + 0x28) + 0xc))
                               ((int)&param_9 + 3,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9);
    if (*pcVar1 == '\0') {
      *param_2 = 0;
      return;
    }
  }
  *param_2 = 1;
  return;
}

// 012805C0  hkpConstrainedSystemFilter::vf00  size=69  [run]
void __thiscall
hkpConstrainedSystemFilter::vf00
          (int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    pcVar1 = (char *)(*(code *)**(undefined4 **)(*(int *)(param_1 + 0x24) + 0x10))
                               ((int)&param_6 + 3,param_3,param_4,param_5,param_6);
    if (*pcVar1 == '\0') {
      *param_2 = 0;
      return;
    }
  }
  *param_2 = 1;
  return;
}

// 01280610  hkpConstrainedSystemFilter::vf04  size=62  [run]
void __thiscall
hkpConstrainedSystemFilter::vf04
          (int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    pcVar1 = (char *)(**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x14) + 4))
                               ((int)&param_4 + 3,param_3,param_4);
    if (*pcVar1 == '\0') {
      *param_2 = 0;
      return;
    }
  }
  *param_2 = 1;
  return;
}

// 01280650  hkpConstrainedSystemFilter::vf04  size=62  [run]
void hkpConstrainedSystemFilter::vf04(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))();
  if (iVar1 != 0xb) {
    iVar1 = FUN_0118c720(*(int *)(param_1 + 0x14) + 0x10,*(int *)(param_1 + 0x18) + 0x10);
    if (iVar1 != 0) {
      FUN_011cf950(iVar1);
    }
  }
  return;
}

// 01280690  hkpConstrainedSystemFilter::vf08  size=3  [run]
void hkpConstrainedSystemFilter::vf08(void)

{
  return;
}

// 012806A0  FUN_012806a0  size=19  [run]
void __fastcall FUN_012806a0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 012806C0  FUN_012806c0  size=19  [run]
void __thiscall FUN_012806c0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 0x10) == 0;
  return;
}

// 012806E0  hkpMountedBallGun::vf20  size=111  [run]
void __thiscall hkpMountedBallGun::vf20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(param_1 + 0x50);
  iVar2 = piVar1[4];
  uStack_8 = param_1;
  while (iVar2 != 0) {
    iVar2 = *(int *)(*piVar1 + piVar1[2] * 4);
    iVar3 = piVar1[2] + 1;
    piVar1[2] = iVar3;
    if (iVar3 == piVar1[1]) {
      piVar1[2] = 0;
    }
    piVar1[4] = piVar1[4] + -1;
    iVar3 = *(int *)(param_1 + 0x18);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0x10))(iVar2);
    }
    if (*(int *)(iVar2 + 8) == param_2) {
      FUN_01192b60((int)&uStack_8 + 3,iVar2);
    }
    FUN_010060a0();
    piVar1 = *(int **)(param_1 + 0x50);
    iVar2 = piVar1[4];
  }
  return;
}

// 01280750  hkpBallGun::hkpBallGun  size=92  [run]
undefined4 * __thiscall hkpBallGun::hkpBallGun(undefined4 *param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  hkpFirstPersonGun::hkpFirstPersonGun(param_2);
  *param_1 = vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 1;
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x14);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_012806a0();
    }
    param_1[0x14] = uVar3;
    FUN_0127e210(param_1[0xc]);
  }
  return param_1;
}

// 012807B0  hkpBallGun::hkpBallGun  size=167  [run]
undefined4 * __thiscall hkpBallGun::hkpBallGun(undefined4 *param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  hkpFirstPersonGun::hkpFirstPersonGun();
  param_1[8] = 0x3e4ccccd;
  param_1[9] = 0x42200000;
  param_1[10] = 0x42480000;
  param_1[0xb] = 0x42480000;
  *param_1 = vftable;
  param_1[0xc] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_01006780("BallGun");
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x14);
  if (iVar2 != 0) {
    uVar3 = FUN_012806a0();
    param_1[0x14] = uVar3;
    FUN_0127e210(param_2);
    return param_1;
  }
  param_1[0x14] = 0;
  FUN_0127e210(param_2);
  return param_1;
}

// 01280860  hkpBallGun::~hkpBallGun  size=168  [run]
void __fastcall hkpBallGun::~hkpBallGun(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 uStack_8;
  
  *param_1 = vftable;
  iVar1 = *(int *)(param_1[0x14] + 0x10);
  uStack_8 = param_1;
  while (iVar1 != 0) {
    piVar2 = (int *)param_1[0x14];
    iVar1 = *(int *)(*piVar2 + piVar2[2] * 4);
    iVar4 = piVar2[2] + 1;
    piVar2[2] = iVar4;
    if (iVar4 == piVar2[1]) {
      piVar2[2] = 0;
    }
    piVar2[4] = piVar2[4] + -1;
    iVar4 = param_1[6];
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      (**(code **)(**(int **)(param_1[5] + iVar4 * 4) + 0x10))(iVar1);
    }
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_01192b60((int)&uStack_8 + 3,iVar1);
    }
    FUN_010060a0();
    iVar1 = *(int *)(param_1[0x14] + 0x10);
  }
  iVar1 = param_1[0x14];
  if (iVar1 != 0) {
    FUN_01280c50();
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(iVar1,0x14);
  }
  hkpFirstPersonGun::~hkpFirstPersonGun();
  return;
}

// 01280910  hkpBallGun::vf10  size=740  [run]
void __thiscall hkpBallGun::vf10(int param_1,int param_2,float *param_3)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 local_140 [4];
  undefined4 local_13c;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined1 local_8c;
  undefined4 local_88;
  undefined1 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 local_15;
  int local_14;
  
  local_40 = *param_3;
  fStack_3c = param_3[1];
  fStack_38 = param_3[2];
  fStack_34 = param_3[3];
  local_50 = param_3[0xc];
  fStack_4c = param_3[0xd];
  fStack_48 = param_3[0xe];
  fStack_44 = param_3[0xf];
  local_30 = local_50 + local_40;
  fStack_2c = fStack_4c + fStack_3c;
  fStack_28 = fStack_48 + fStack_38;
  fStack_24 = fStack_44 + fStack_34;
  local_60 = local_40 * 200.0 + local_30;
  fStack_5c = fStack_3c * 200.0 + fStack_2c;
  fStack_58 = fStack_38 * 200.0 + fStack_28;
  fStack_54 = fStack_34 * 200.0 + fStack_24;
  FUN_0118f7b0();
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x20);
  *(undefined2 *)(iVar3 + 4) = 0x20;
  local_13c = hkpSphereShape::hkpSphereShape(*(undefined4 *)(param_1 + 0x20));
  local_b0 = *(float *)(param_1 + 0x28);
  local_88 = 0x3c23d70a;
  local_98 = 0x3e4ccccd;
  local_78 = 6;
  local_a0 = 0x3f800000;
  local_8c = 2;
  FUN_01272ab0(local_13c,local_b0 * 2.0,local_140);
  local_b0 = *(float *)(param_1 + 0x28);
  local_130 = *(float *)(param_1 + 0x40) + local_30;
  fStack_12c = *(float *)(param_1 + 0x44) + fStack_2c;
  fStack_128 = *(float *)(param_1 + 0x48) + fStack_28;
  fStack_124 = *(float *)(param_1 + 0x4c) + fStack_24;
  local_ac = 0;
  local_a8 = 0x3ecccccd;
  iVar3 = hkpClosestCdPointCollector::hkpClosestCdPointCollector
                    (param_2,&local_30,*(undefined4 *)(param_1 + 0x20),&local_60,&local_170);
  if (iVar3 == 0) {
    FUN_0127f860(&local_130,&local_170,param_2 + 0x10,*(undefined4 *)(param_1 + 0x24),&local_110);
  }
  else {
    fStack_104 = *(float *)(param_1 + 0x24);
    local_110 = fStack_104 * local_40;
    fStack_10c = fStack_104 * fStack_3c;
    fStack_108 = fStack_104 * fStack_38;
    fStack_104 = fStack_104 * fStack_34;
  }
  iVar3 = 0;
  local_70 = local_170;
  uStack_6c = uStack_16c;
  uStack_68 = uStack_168;
  uStack_64 = uStack_164;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0x14))(&local_50,&local_70);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x220);
  *(undefined2 *)(iVar3 + 4) = 0x220;
  iVar3 = hkpRigidBody::hkpRigidBody(local_140);
  local_14 = iVar3;
  FUN_010060a0();
  *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(param_1 + 0x2c);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0xc))(local_14);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  FUN_011929d0(local_14,1);
  piVar1 = *(int **)(param_1 + 0x50);
  iVar3 = piVar1[1];
  if (iVar3 <= piVar1[4]) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 * 2;
    }
    FUN_0127e210(iVar3);
  }
  if (piVar1[3] == piVar1[1]) {
    piVar1[3] = 0;
  }
  *(int *)(*piVar1 + piVar1[3] * 4) = local_14;
  piVar1[3] = piVar1[3] + 1;
  piVar1[4] = piVar1[4] + 1;
  piVar1 = *(int **)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x30) < piVar1[4]) {
    local_14 = *(int *)(*piVar1 + piVar1[2] * 4);
    iVar3 = piVar1[2] + 1;
    piVar1[2] = iVar3;
    if (iVar3 == piVar1[1]) {
      piVar1[2] = 0;
    }
    piVar1[4] = piVar1[4] + -1;
    iVar3 = *(int *)(param_1 + 0x18);
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + iVar3 * 4) + 0x10))(local_14);
    }
    if (*(int *)(local_14 + 8) != 0) {
      FUN_01192b60(&local_15,local_14);
    }
    FUN_010060a0();
  }
  return;
}

// 01280C00  FUN_01280c00  size=31  [run]
void FUN_01280c00(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01280C20  FUN_01280c20  size=39  [run]
void FUN_01280c20(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x14);
  }
  return;
}

// 01280C50  FUN_01280c50  size=45  [run]
void __fastcall FUN_01280c50(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    uVar2 = *param_1;
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(uVar2,iVar1 * 4);
  }
  return;
}

// 01280C80  FUN_01280c80  size=38  [run]
void FUN_01280c80(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01280CB0  FUN_01280cb0  size=53  [run]
int __thiscall FUN_01280cb0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01280c50();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x14);
  }
  return param_1;
}

// 01280CF0  hkpBallGun::vf00  size=52  [run]
int __thiscall hkpBallGun::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkpBallGun();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01280DF0  hkpAngularDashpotAction::hkpAngularDashpotAction  size=75  [run]
undefined4 * __thiscall
hkpAngularDashpotAction::hkpAngularDashpotAction
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  hkpBinaryAction::hkpBinaryAction(param_2,param_3,param_4);
  param_1[0xc] = 0x3dcccccd;
  *param_1 = vftable;
  param_1[0xd] = 0x3c23d70a;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000;
  return param_1;
}

// 01280E40  hkpAngularDashpotAction::vf0C  size=578  [run]
void __thiscall hkpAngularDashpotAction::vf0C(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_18;
  int local_14;
  
  fVar14 = *(float *)(param_1 + 0x20);
  fVar18 = *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(param_1 + 0x2c);
  local_14 = *(int *)(param_1 + 0x1c);
  fVar4 = *(float *)(local_14 + 0x160);
  fVar5 = *(float *)(local_14 + 0x164);
  fVar6 = *(float *)(local_14 + 0x168);
  fVar7 = *(float *)(local_14 + 0x16c);
  local_18 = *(float *)(param_2 + 8) * 200.0;
  fVar22 = fVar3 * fVar7 - (fVar5 * fVar18 + fVar4 * fVar14 + fVar6 * fVar2);
  fVar12 = -((fVar2 * fVar5 - fVar18 * fVar6) + fVar7 * fVar14 + fVar3 * fVar4);
  fVar15 = -((fVar14 * fVar6 - fVar2 * fVar4) + fVar7 * fVar18 + fVar3 * fVar5);
  fVar16 = -((fVar18 * fVar4 - fVar14 * fVar5) + fVar7 * fVar2 + fVar3 * fVar6);
  iVar1 = *(int *)(param_1 + 0x18);
  fVar14 = *(float *)(iVar1 + 0x160);
  fVar18 = *(float *)(iVar1 + 0x164);
  fVar2 = *(float *)(iVar1 + 0x168);
  fVar3 = *(float *)(iVar1 + 0x16c);
  fVar23 = fVar22 * fVar3 - (fVar18 * fVar15 + fVar14 * fVar12 + fVar2 * fVar16);
  fVar4 = *(float *)(iVar1 + 0x1c0);
  fVar5 = *(float *)(iVar1 + 0x1c4);
  fVar6 = *(float *)(iVar1 + 0x1c8);
  fVar7 = *(float *)(iVar1 + 0x1cc);
  fVar8 = *(float *)(local_14 + 0x1c0);
  fVar9 = *(float *)(local_14 + 0x1c4);
  fVar10 = *(float *)(local_14 + 0x1c8);
  fVar11 = *(float *)(local_14 + 0x1cc);
  fVar13 = ABS(fVar23);
  local_30 = ABS(fVar23);
  fStack_2c = 0.0;
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  if (local_30 < 1.0) {
    FUN_014376e0();
  }
  else if (fVar13 <= 0.0) {
    fVar13 = 3.1415927;
  }
  else {
    fVar13 = 0.0;
  }
  fVar13 = fVar13 * 2.0;
  fVar17 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar21 = 0.0;
  if (0.001 < fVar13) {
    fVar17 = fVar13 * ((fVar18 * fVar16 - fVar2 * fVar15) + fVar3 * fVar12 + fVar22 * fVar14);
    fVar19 = fVar13 * ((fVar2 * fVar12 - fVar14 * fVar16) + fVar3 * fVar15 + fVar22 * fVar18);
    fVar20 = fVar13 * ((fVar14 * fVar15 - fVar18 * fVar12) + fVar3 * fVar16 + fVar22 * fVar2);
    fVar21 = fVar13 * fVar23;
  }
  fVar14 = *(float *)(param_1 + 0x30) * local_18;
  fVar18 = *(float *)(param_1 + 0x34) * local_18;
  local_30 = fVar14 * fVar17 + fVar18 * (fVar4 - fVar8);
  fStack_2c = fVar14 * fVar19 + fVar18 * (fVar5 - fVar9);
  fStack_28 = fVar14 * fVar20 + fVar18 * (fVar6 - fVar10);
  fStack_24 = fVar14 * fVar21 + fVar18 * (fVar7 - fVar11);
  FUN_0118fe70();
  (**(code **)(*(int *)(local_14 + 0xe0) + 0x58))(&local_30);
  local_30 = -local_30;
  fStack_2c = -fStack_2c;
  fStack_28 = -fStack_28;
  fStack_24 = -fStack_24;
  FUN_0118fe70();
  (**(code **)(*(int *)(iVar1 + 0xe0) + 0x58))(&local_30);
  return;
}

// 01281090  hkpAngularDashpotAction::vf1C  size=113  [run]
int __thiscall hkpAngularDashpotAction::vf1C(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  int iVar5;
  
  if ((param_2[1] == 2) && (*(int *)(param_3 + 4) == 0)) {
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x40);
    *(undefined2 *)(iVar5 + 4) = 0x40;
    iVar5 = hkpAngularDashpotAction
                      (*(undefined4 *)*param_2,((undefined4 *)*param_2)[1],
                       *(undefined4 *)(param_1 + 0x10));
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar5 + 0x24) = uVar1;
    *(undefined4 *)(iVar5 + 0x28) = uVar2;
    *(undefined4 *)(iVar5 + 0x2c) = uVar3;
    *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(param_1 + 0x34);
    return iVar5;
  }
  return 0;
}

// 01281110  FUN_01281110  size=37  [run]
void FUN_01281110(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01281160  hkpSaveContactPointsUtil::EntitySelector::vf00  size=34  [run]
undefined4 * __thiscall
hkpSaveContactPointsUtil::EntitySelector::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 012811C0  _anon_C7FCC298::hkEntitySelectorAll::vf04  size=8  [run]
undefined4 _anon_C7FCC298::hkEntitySelectorAll::vf04(void)

{
  return 1;
}

// 012811E0  _anon_C7FCC298::hkEntitySelectorAll::vf00  size=34  [run]
undefined4 * __thiscall _anon_C7FCC298::hkEntitySelectorAll::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = hkpSaveContactPointsUtil::EntitySelector::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01281210  FUN_01281210  size=136  [run]
byte FUN_01281210(code *param_1)

{
  if (param_1 == (code *)&LAB_01172650) {
    return 1;
  }
  if (param_1 == (code *)&LAB_0116b720) {
    return 2;
  }
  if (param_1 == FUN_01174460) {
    return 3;
  }
  if (param_1 == (code *)&LAB_011736a0) {
    return 4;
  }
  if (param_1 == (code *)&LAB_011647b0) {
    return 5;
  }
  if (param_1 == FUN_011817a0) {
    return 6;
  }
  if (param_1 == (code *)&LAB_0115a560) {
    return 7;
  }
  if (param_1 == FUN_01168610) {
    return 8;
  }
  return (param_1 != (code *)&LAB_01169560) - 1U & 9;
}

// 012812B0  FUN_012812b0  size=263  [run]
undefined4
FUN_012812b0(undefined1 *param_1,undefined4 param_2,int *param_3,uint *param_4,undefined4 *param_5,
            int *param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  *param_6 = 0;
  switch(*param_1) {
  case 0:
  case 1:
    *param_4 = 0x10;
    return 0;
  case 2:
  case 3:
  case 10:
  case 0xb:
    break;
  case 4:
  case 5:
  case 0xc:
  case 0xd:
    break;
  default:
    return 1;
  case 8:
    return 0;
  }
  uVar3 = FUN_01281210(*(undefined4 *)((uint)(byte)param_1[1] * 0x40 + 0x1a08 + *param_3));
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  uVar2 = (undefined4)uVar3;
  *param_5 = uVar2;
  switch(uVar2) {
  case 1:
  case 2:
  case 3:
  case 4:
    *param_5 = uVar2;
    *param_4 = (uint)(byte)param_1[3];
    break;
  case 5:
    *param_5 = uVar2;
    *param_4 = (uint)(byte)param_1[3];
    if ((*(byte *)(iVar1 + 0xb) & 0x20) == 0) {
      iVar1 = FUN_011645a0(param_1,iVar1);
      *param_6 = iVar1;
      uVar2 = FUN_01281cf0(iVar1,param_3,param_7);
      return uVar2;
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    *param_4 = (uint)(byte)param_1[3];
    *param_5 = uVar2;
    *param_6 = iVar1 + 4;
    uVar2 = FUN_01281cf0(iVar1 + 4,param_3,param_7);
    return uVar2;
  default:
    return 1;
  }
  return 0;
}

// 01281400  FUN_01281400  size=120  [run]
undefined4
FUN_01281400(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,char *param_5)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  
  if (*param_5 == '\x02') {
    pcVar3 = param_5 + 0x20;
  }
  else {
    if (*param_5 != '\x04') {
      return 1;
    }
    pcVar3 = param_5 + 0x30;
  }
  iVar2 = *param_2;
  bVar1 = param_5[1];
  uVar4 = FUN_01281210(*(undefined4 *)((uint)bVar1 * 0x40 + 0x1a08 + iVar2));
  if (((int)uVar4 == param_1) && (param_1 != 0)) {
    (**(code **)((uint)bVar1 * 0x40 + 0x19e4 + iVar2))
              ((int)((ulonglong)uVar4 >> 0x20),pcVar3,param_3,param_4,iVar2);
    return 0;
  }
  return 1;
}

// 01281480  FUN_01281480  size=564  [run]
undefined4 FUN_01281480(char *param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_10;
  int local_c;
  undefined4 local_8;
  
  iVar2 = (**(code **)(**(int **)(param_2 + 8) + 0x34))();
  if ((iVar2 != 0) || (*(short *)(*(int *)(*(int *)(param_2 + 8) + 0x3c) + 4) == 0)) {
    return 1;
  }
  local_10 = CONCAT31(local_10._1_3_,1);
  local_c = -1;
  local_8 = 0;
  iVar2 = FUN_012812b0(param_2,local_10,param_3,&local_c,&local_8,&local_10,param_4 + 0x114);
  if (iVar2 != 0) {
    return 1;
  }
  *(undefined1 *)(param_4 + 0x19) = (undefined1)local_8;
  if (local_c != 0) {
    FUN_01015e80(param_4 + 0x74,param_2,local_c);
  }
  local_c = *(int *)(param_2 + 8);
  iVar2 = *(int *)(local_c + 0x24);
  uVar3 = *(uint *)(param_4 + 0x70) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_4 + 0x68),iVar4,1);
  }
  iVar4 = 0;
  *(int *)(param_4 + 0x6c) = iVar2;
  if (0 < *(int *)(param_4 + 0x6c)) {
    do {
      *(undefined1 *)(iVar4 + *(int *)(param_4 + 0x68)) =
           *(undefined1 *)(iVar4 + *(int *)(local_c + 0x20));
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_4 + 0x6c));
  }
  iVar2 = *(int *)(local_c + 0x3c);
  uVar6 = (uint)*(byte *)(iVar2 + 10) * (uint)*(ushort *)(iVar2 + 4);
  uVar3 = *(uint *)(param_4 + 0x58) & 0x3fffffff;
  if (uVar3 < uVar6) {
    uVar3 = uVar3 * 2;
    if (uVar3 <= uVar6) {
      uVar3 = uVar6;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_4 + 0x50,uVar3,1);
  }
  *(uint *)(param_4 + 0x54) = uVar6;
  FUN_01015e80(*(undefined4 *)(param_4 + 0x50),(uint)*(ushort *)(iVar2 + 6) * 0x20 + 0x30 + iVar2,
               (uint)*(byte *)(iVar2 + 10) * (uint)*(ushort *)(iVar2 + 4));
  local_10 = (uint)*(ushort *)(iVar2 + 4);
  uVar3 = *(uint *)(param_4 + 100) & 0x3fffffff;
  if (uVar3 < local_10) {
    uVar3 = uVar3 * 2;
    if (uVar3 <= local_10) {
      uVar3 = local_10;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(undefined4 *)(param_4 + 0x5c),uVar3,0x20);
  }
  iVar4 = 0;
  if (local_10 != *(uint *)(param_4 + 0x60) && -1 < (int)(local_10 - *(uint *)(param_4 + 0x60))) {
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(local_10 - *(int *)(param_4 + 0x60)));
  }
  *(uint *)(param_4 + 0x60) = local_10;
  FUN_01015e80(*(undefined4 *)(param_4 + 0x5c),iVar2 + 0x30,(uint)*(ushort *)(iVar2 + 4) << 5);
  FUN_012829f0(*(undefined4 *)(local_c + 0x3c));
  iVar2 = *(int *)(param_2 + 0x10);
  if (*(char *)(iVar2 + 0x18) == '\x01') {
    iVar2 = *(char *)(iVar2 + 0x10) + iVar2;
  }
  else {
    iVar2 = 0;
  }
  iVar4 = *(int *)(param_2 + 0x14);
  if (*(char *)(iVar4 + 0x18) == '\x01') {
    iVar4 = *(char *)(iVar4 + 0x10) + iVar4;
  }
  else {
    iVar4 = 0;
  }
  cVar1 = *param_1;
  *(char *)(param_4 + 0x18) = cVar1;
  if (cVar1 == '\0') {
    *(int *)(param_4 + 8) = iVar2;
    *(int *)(param_4 + 0xc) = iVar4;
    FUN_01006000();
    FUN_01006000();
    return 0;
  }
  uVar5 = (**(code **)(param_1 + 4))(iVar2);
  *(undefined4 *)(param_4 + 0x10) = uVar5;
  uVar5 = (**(code **)(param_1 + 4))(iVar4);
  *(undefined4 *)(param_4 + 0x14) = uVar5;
  return 0;
}

// 012816C0  FUN_012816c0  size=247  [run]
undefined4 FUN_012816c0(int *param_1,undefined4 param_2,int *param_3)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar3 = param_1[1];
  if ((int)(param_3[2] & 0x3fffffffU) < iVar3) {
    iVar4 = (param_3[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar3) {
      iVar4 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar4,4);
  }
  iVar4 = 0;
  param_3[1] = iVar3;
  if (0 < param_1[1]) {
    do {
      pvVar1 = TlsGetValue(DAT_01f8fc4c);
      puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x200);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
      }
      *(undefined4 **)(*param_3 + iVar4 * 4) = puVar2;
      puVar2 = *(undefined4 **)(*param_1 + iVar4 * 4);
      puVar5 = *(undefined4 **)(*param_3 + iVar4 * 4);
      for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1]);
  }
  iVar3 = 0;
  if (0 < param_1[4]) {
    do {
      iVar4 = *(int *)(param_1[3] + iVar3 * 4);
      puVar2 = (undefined4 *)
               (*(int *)(*param_3 + *(int *)(iVar4 + 0x18) * 4) + 0x10 + *(int *)(iVar4 + 0x1c));
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      iVar4 = FUN_012816c0(iVar4,param_2,puVar2);
      if (iVar4 == 1) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[4]);
  }
  return 0;
}

// 012817C0  FUN_012817c0  size=426  [run]
void FUN_012817c0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_20;
  int local_1c [2];
  ushort *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar1 = param_2;
  iVar8 = 0;
  local_20 = -0x80000000;
  if (0 < *(int *)(param_2 + 0x2c)) {
    param_2 = *(int *)(param_2 + 0x2c) * 4;
    iVar8 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    local_20 = (int)(param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  }
  iVar9 = *(int *)(uVar1 + 0x2c);
  iVar4 = *(int *)(uVar1 + 0x28);
  iVar2 = 0;
  if (0 < iVar9) {
    do {
      *(undefined4 *)(iVar8 + iVar2 * 4) = *(undefined4 *)(iVar4 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar9);
  }
  FUN_01282d90(&PTR_vftable_018e9b94,iVar9,*(undefined4 *)(uVar1 + 0x34),
               *(undefined4 *)(uVar1 + 0x38));
  local_c = 0;
  if (0 < iVar9) {
    do {
      iVar4 = *(int *)(iVar8 + local_c * 4);
      local_1c[0] = iVar4 + 0x70;
      local_1c[1] = iVar4 + 0x5c;
      local_8 = 0;
      do {
        puVar6 = (ushort *)local_1c[local_8];
        local_14 = puVar6;
        iVar4 = 0;
        if (0 < *(int *)(puVar6 + 4)) {
          do {
            uVar7 = *(uint *)(*(int *)(puVar6 + 2) + iVar4 * 4);
            local_10 = iVar4 + 1;
            if (iVar4 + 1 == *(int *)(puVar6 + 4)) {
              param_2 = *puVar6 + uVar7;
            }
            else {
              param_2 = uVar7 + 0x200;
            }
            if (uVar7 < param_2) {
              do {
                pvVar3 = TlsGetValue(DAT_01f8fc4c);
                iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x140);
                *(undefined2 *)(iVar4 + 4) = 0x140;
                uVar5 = hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry();
                iVar4 = FUN_01281480(param_1,uVar7,*(undefined4 *)(uVar1 + 0x70),uVar5);
                if (iVar4 == 0) {
                  FUN_0127d000(uVar5);
                }
                FUN_010060a0();
                uVar7 = uVar7 + *(byte *)(uVar7 + 3);
                puVar6 = local_14;
              } while (uVar7 < param_2);
            }
            iVar4 = local_10;
          } while (local_10 < *(int *)(puVar6 + 4));
        }
        local_8 = local_8 + 1;
      } while (local_8 < 2);
      local_c = local_c + 1;
    } while (local_c < iVar9);
  }
  if (-1 < local_20) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(iVar8,local_20 * 4,iVar8,0);
  }
  return;
}

// 01281970  FUN_01281970  size=346  [run]
void FUN_01281970(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = *(int *)(*param_2 + 8);
  if (param_3 != 0) {
    FUN_01010c40(&PTR_vftable_018e9b94,param_3);
  }
  local_8 = 0;
  if (0 < param_3) {
    do {
      iVar4 = local_8;
      iVar6 = 0;
      FUN_010100a0(&PTR_vftable_018e9b94,param_2[local_8] + 0x10,0);
      local_18 = 0;
      local_14 = 0;
      local_10 = -0x80000000;
      FUN_0146d8e0(&local_18);
      if (0 < local_14) {
        do {
          puVar1 = (undefined4 *)(local_18 + iVar6 * 8);
          iVar2 = FUN_01010120(*(undefined4 *)(local_18 + 4 + iVar6 * 8));
          if (-1 < iVar2) {
            pvVar3 = TlsGetValue(DAT_01f8fc4c);
            iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x140);
            *(undefined2 *)(iVar4 + 4) = 0x140;
            uVar5 = hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry();
            iVar4 = FUN_01281480(param_1,*puVar1,*(undefined4 *)(local_c + 0x70),uVar5);
            if (iVar4 == 0) {
              FUN_0127d000(uVar5);
            }
            FUN_010060a0();
            iVar4 = local_8;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_14);
      }
      local_14 = 0;
      if (-1 < local_10) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 * 8);
      }
      local_8 = iVar4 + 1;
      local_18 = 0;
      local_10 = 0x80000000;
    } while (local_8 < param_3);
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return;
}

// 01281AD0  FUN_01281ad0  size=143  [run]
void FUN_01281ad0(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = *(int *)(*param_2 + 0x10);
  if (*(char *)(iVar1 + 0x18) == '\x01') {
    iVar1 = *(char *)(iVar1 + 0x10) + iVar1;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = *(int *)(iVar1 + 8);
  iVar5 = 0;
  if (0 < param_3) {
    do {
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x140);
      *(undefined2 *)(iVar3 + 4) = 0x140;
      uVar4 = hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry();
      iVar3 = FUN_01281480(param_1,param_2[iVar5],*(undefined4 *)(iVar1 + 0x70),uVar4);
      if (iVar3 == 0) {
        FUN_0127d000(uVar4);
      }
      FUN_010060a0();
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_3);
  }
  return;
}

// 01281B70  FUN_01281b70  size=355  [run]
undefined4 FUN_01281b70(int param_1,int param_2,undefined4 param_3,int *param_4,char *param_5)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  if (*param_5 == '\x02') {
    pcVar5 = param_5 + 0x20;
  }
  else {
    if (*param_5 != '\x04') {
      return 1;
    }
    pcVar5 = param_5 + 0x30;
  }
  iVar2 = FUN_01281210(*(undefined4 *)((uint)(byte)param_5[1] * 0x40 + 0x1a08 + *param_4));
  if (iVar2 != param_2) {
switchD_01281bd4_default:
    return 1;
  }
  switch(param_2) {
  case 1:
  case 2:
  case 3:
  case 4:
    FUN_01015e80(param_5 + 0x18,param_1 + 0x8c,(uint)(byte)param_5[0xe] * 0x40 + -0x18);
    param_5[2] = *(char *)(param_1 + 0x76);
    param_5[3] = *(char *)(param_1 + 0x77);
    break;
  case 5:
    FUN_01015e80(param_5 + 0x18,param_1 + 0x8c,(uint)(byte)param_5[0xe] * 0x40 + -0x18);
    param_5[2] = *(char *)(param_1 + 0x76);
    param_5[3] = *(char *)(param_1 + 0x77);
    if ((pcVar5[0xb] & 0x20U) == 0) {
      puVar3 = (undefined4 *)FUN_01164590(param_5,pcVar5);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0x80000000;
      }
      uVar4 = FUN_012816c0(param_3,param_4,puVar3);
      return uVar4;
    }
    break;
  case 6:
  case 7:
  case 8:
  case 9:
    FUN_01015e80(param_5 + 0x18,param_1 + 0x8c,(uint)(byte)param_5[0xe] * 0x40 + -0x18);
    pcVar1 = pcVar5 + 4;
    if (pcVar1 != (char *)0x0) {
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar5[8] = '\0';
      pcVar5[9] = '\0';
      pcVar5[10] = '\0';
      pcVar5[0xb] = '\0';
      pcVar5[0xc] = '\0';
      pcVar5[0xd] = '\0';
      pcVar5[0xe] = '\0';
      pcVar5[0xf] = -0x80;
    }
    uVar4 = FUN_012816c0(param_3,param_4,pcVar1);
    return uVar4;
  default:
    goto switchD_01281bd4_default;
  }
  return 0;
}

// 01281CF0  FUN_01281cf0  size=530  [run]
undefined4 FUN_01281cf0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined1 local_20 [4];
  int *local_1c;
  uint local_18;
  int *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  piVar2 = param_3;
  iVar5 = param_1[1];
  if ((int)(param_3[2] & 0x3fffffffU) < iVar5) {
    iVar1 = (param_3[2] & 0x3fffffffU) * 2;
    if (iVar5 < iVar1) {
      iVar5 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_3,iVar5,4);
  }
  param_3 = (int *)0x0;
  if (0 < param_1[1]) {
    do {
      local_14 = *(int **)(*param_1 + (int)param_3 * 4);
      local_8 = local_14 + 4;
      local_1c = (int *)(*local_14 + 0x10 + (int)local_14);
      pcVar7 = TlsGetValue_exref;
      if (local_8 < local_1c) {
        local_18 = local_18 & 0xffffff00;
        do {
          pcVar7 = TlsGetValue_exref;
          local_c = 0;
          local_10 = 0;
          pvVar3 = TlsGetValue(DAT_01f8fc4c);
          puVar4 = (undefined4 *)(**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x20);
          puVar6 = (undefined4 *)0x0;
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0x80000000;
            puVar4[3] = 0;
            puVar4[4] = 0;
            puVar4[5] = 0x80000000;
            puVar4[6] = 0xffffffff;
            puVar6 = puVar4;
          }
          iVar5 = FUN_012812b0(local_8,local_18,param_2,&local_10,local_20,&local_c,puVar6);
          if (iVar5 != 0) {
            if (puVar6 != (undefined4 *)0x0) {
              FUN_0127a3e0();
              pvVar3 = TlsGetValue(DAT_01f8fc4c);
              (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(puVar6,0x20);
            }
            return 1;
          }
          if (puVar6[1] == 0) {
            FUN_0127a3e0();
            pvVar3 = TlsGetValue(DAT_01f8fc4c);
            (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(puVar6,0x20);
          }
          else {
            puVar6[6] = param_3;
            puVar6[7] = (local_c - (int)local_14) + -0x10;
            if (piVar2[4] == (piVar2[5] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar2 + 3,4);
            }
            *(undefined4 **)(piVar2[3] + piVar2[4] * 4) = puVar6;
            piVar2[4] = piVar2[4] + 1;
            pcVar7 = TlsGetValue_exref;
          }
          local_8 = (int *)((int)local_8 + local_10);
        } while (local_8 < local_1c);
      }
      piVar8 = local_14;
      if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
      }
      piVar2[1] = piVar2[1] + 1;
      iVar5 = (*pcVar7)(DAT_01f8fc4c);
      puVar6 = (undefined4 *)(**(code **)(**(int **)(iVar5 + 0x2c) + 4))(0x200);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = 0;
      }
      *(undefined4 **)(*piVar2 + (int)param_3 * 4) = puVar6;
      piVar9 = *(int **)(*piVar2 + (int)param_3 * 4);
      for (iVar5 = 0x80; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar9 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      }
      param_3 = (int *)((int)param_3 + 1);
    } while ((int)param_3 < param_1[1]);
    return 0;
  }
  return 0;
}

// 01281F10  FUN_01281f10  size=1739  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_01281f10(int param_1,int param_2,float param_3,int param_4,int param_5,int param_6)

{
  undefined2 uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  LPVOID pvVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined1 local_3100 [4];
  undefined4 local_30fc;
  undefined4 local_d0;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_70;
  float local_6c;
  int local_68;
  int *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  uint local_54;
  undefined4 local_50;
  int *local_4c;
  int local_48;
  undefined1 *local_44;
  undefined4 local_40;
  int local_3c;
  float local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  float local_14;
  
  local_14 = 3.0879103e-38;
  iVar4 = *(int *)(param_4 + 200);
  piVar3 = *(int **)(param_6 + 8);
  iVar7 = *(int *)((int)param_3 + 200);
  iVar8 = iVar7;
  if (((iVar7 != iVar4) && (iVar8 = iVar4, *(char *)((int)param_3 + 0xe8) != '\x05')) &&
     (iVar8 = iVar7, *(char *)(param_4 + 0xe8) != '\x05')) {
    iVar8 = FUN_011cf590(param_6,iVar7,iVar4);
  }
  iVar4 = FUN_01281400((int)*(char *)(param_2 + 0x19),param_5,piVar3,iVar8,param_6);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_6 + 0x10);
    if (*(char *)(iVar4 + 0x18) == '\x01') {
      fVar9 = (float)(*(char *)(iVar4 + 0x10) + iVar4);
    }
    else {
      fVar9 = 0.0;
    }
    if (param_3 != fVar9) {
      *(undefined4 *)(param_6 + 0x10) = *(undefined4 *)(param_6 + 0x14);
      *(int *)(param_6 + 0x14) = iVar4;
      uVar1 = *(undefined2 *)(param_6 + 4);
      *(undefined2 *)(param_6 + 4) = *(undefined2 *)(param_6 + 6);
      *(undefined2 *)(param_6 + 6) = uVar1;
      iVar4 = piVar3[0x16];
      piVar3[0x16] = piVar3[0x17];
      piVar3[0x17] = iVar4;
      if (piVar3[0x1d] != 0) {
        iVar4 = piVar3[0x1d];
        local_14 = *(float *)(iVar4 + 4);
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar4 + 8);
        *(float *)(iVar4 + 8) = local_14;
        *(bool *)(piVar3[0x1d] + 0x1a) = *(char *)(piVar3[0x1d] + 0x1a) == '\0';
      }
    }
    iVar4 = FUN_01281b70(param_2,(int)*(char *)(param_2 + 0x19),param_2 + 0x114,param_5,param_6);
    if (iVar4 == 0) {
      local_14 = *(float *)(param_2 + 0x6c);
      if ((int)(piVar3[10] & 0x3fffffffU) < (int)local_14) {
        iVar4 = (piVar3[10] & 0x3fffffffU) * 2;
        iVar7 = (int)local_14;
        if ((int)local_14 < iVar4) {
          iVar7 = iVar4;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,piVar3 + 8,iVar7,1);
      }
      iVar4 = 0;
      piVar3[9] = (int)local_14;
      if (0 < (int)local_14) {
        do {
          *(undefined1 *)(iVar4 + piVar3[8]) = *(undefined1 *)(iVar4 + *(int *)(param_2 + 0x68));
          iVar4 = iVar4 + 1;
        } while (iVar4 < piVar3[9]);
      }
      if (*(short *)(piVar3[0xf] + 4) == 0) {
        iVar4 = *(int *)(param_6 + 0x10);
        if (*(char *)(iVar4 + 0x18) == '\x01') {
          iVar4 = *(char *)(iVar4 + 0x10) + iVar4;
        }
        else {
          iVar4 = 0;
        }
        local_14 = *(float *)(iVar4 + 8);
        *(int *)((int)local_14 + 0x8c) = *(int *)((int)local_14 + 0x8c) + -1;
        *(undefined1 *)((int)local_14 + 0x94) = 1;
        FUN_011c26f0(local_14,piVar3 + 0x11,1);
        *(int *)((int)local_14 + 0x8c) = *(int *)((int)local_14 + 0x8c) + 1;
        *(undefined1 *)((int)local_14 + 0x94) = 0;
      }
      uVar5 = (uint)*(ushort *)(piVar3[0xf] + 4);
      iVar4 = ((int)uVar5 >> 1) * 0x70 + 0x80 + (uVar5 & 1) * 0x30;
      local_20 = uVar5 + 2;
      local_1c = uVar5 + 3;
      if (1 < uVar5) {
        local_20 = uVar5 + 3;
        iVar4 = iVar4 + 0x20;
        local_1c = uVar5 + 4;
      }
      local_14 = (float)((int)*(short *)(piVar3[0xf] + 0x14) << 0x10);
      if (local_14 != (float)(undefined *)0x0) {
        local_20 = local_20 + 2;
        iVar4 = iVar4 + 0x50;
        local_1c = local_1c + 3;
      }
      iVar7 = piVar3[0x1d];
      if (iVar7 != 0) {
        iVar7 = *(int *)(*(int *)(iVar7 + 4 + (uint)*(byte *)(iVar7 + 0x1a) * 4) + 200);
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) - local_20;
        *(int *)(iVar7 + 0x14) = *(int *)(iVar7 + 0x14) - local_1c;
        *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) - iVar4;
        iVar7 = piVar3[0x1d];
        *(short *)(iVar7 + 0x16) = *(short *)(iVar7 + 0x16) - (short)local_20;
        *(short *)(iVar7 + 0x18) = *(short *)(iVar7 + 0x18) - (short)local_1c;
        *(short *)(iVar7 + 0x14) = *(short *)(iVar7 + 0x14) - (short)iVar4;
      }
      local_2c = piVar3[0xf];
      local_14 = (float)FUN_011ecbf0(*(undefined2 *)(local_2c + 2));
      pvVar6 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 8))(local_2c,local_14);
      local_18 = (uint)*(ushort *)(param_2 + 0x24);
      iVar4 = FUN_011eccf0(local_18,*(undefined1 *)(param_2 + 0x28),*(undefined1 *)(param_2 + 0x29),
                           *(undefined2 *)(param_2 + 0x2c));
      piVar3[0xf] = iVar4;
      *(undefined2 *)(iVar4 + 4) = (undefined2)local_18;
      iVar4 = piVar3[0xf];
      *(undefined2 *)(iVar4 + 0x10) = *(undefined2 *)(param_2 + 0x30);
      *(undefined2 *)(iVar4 + 0x12) = *(undefined2 *)(param_2 + 0x32);
      *(undefined2 *)(iVar4 + 0x14) = *(undefined2 *)(param_2 + 0x34);
      *(undefined2 *)(iVar4 + 0x16) = *(undefined2 *)(param_2 + 0x36);
      *(undefined2 *)(iVar4 + 0x18) = *(undefined2 *)(param_2 + 0x38);
      *(undefined2 *)(iVar4 + 0x1a) = *(undefined2 *)(param_2 + 0x3a);
      *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(param_2 + 0x3c);
      *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(param_2 + 0x40);
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(param_2 + 0x44);
      *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(param_2 + 0x48);
      *(undefined4 *)(iVar4 + 0x2c) = *(undefined4 *)(param_2 + 0x4c);
      piVar3[0x10] = (uint)*(ushort *)(param_2 + 0x22);
      *(int *)(piVar3[0x1d] + 0xc) = piVar3[0xf];
      *(undefined2 *)(piVar3[0x1d] + 0x10) = *(undefined2 *)(piVar3[0xf] + 2);
      uVar5 = (uint)*(ushort *)(piVar3[0xf] + 4);
      iVar4 = ((int)uVar5 >> 1) * 0x70 + 0x80 + (uVar5 & 1) * 0x30;
      local_28 = iVar4 + 0x20;
      local_20 = uVar5 + 2;
      local_1c = uVar5 + 3;
      local_24 = iVar4;
      if (1 < uVar5) {
        local_20 = uVar5 + 3;
        local_24 = iVar4 + 0x20;
        local_1c = uVar5 + 4;
      }
      local_14 = (float)((int)*(short *)(piVar3[0xf] + 0x14) << 0x10);
      if (local_14 != (float)(undefined *)0x0) {
        local_28 = iVar4 + 0x70;
        local_20 = local_20 + 2;
        local_24 = local_24 + 0x50;
        local_1c = local_1c + 3;
      }
      FUN_011c6b40(piVar3 + 0x11,&local_28);
      iVar4 = piVar3[0xf];
      FUN_01015e80((uint)*(ushort *)(iVar4 + 6) * 0x20 + 0x30 + iVar4,
                   *(undefined4 *)(param_2 + 0x50),*(byte *)(iVar4 + 10) * local_18);
      FUN_01015e80(piVar3[0xf] + 0x30,*(undefined4 *)(param_2 + 0x5c),local_18 << 5);
      if (*(char *)(param_1 + 1) != '\0') {
        iVar7 = piVar3[0xf];
        local_14 = (float)(uint)*(byte *)(iVar7 + 10);
        iVar8 = 0;
        iVar4 = (uint)*(ushort *)(iVar7 + 6) * 0x20 + 0x30 + iVar7;
        if (*(short *)(iVar7 + 4) != 0) {
          do {
            *(undefined4 *)(iVar4 + 8) = 0;
            iVar8 = iVar8 + 1;
            iVar4 = iVar4 + (int)local_14;
          } while (iVar8 < (int)(uint)*(ushort *)(piVar3[0xf] + 4));
        }
      }
      local_3c = 0;
      local_38 = 0.0;
      local_34 = 0x80000000;
      (**(code **)(*piVar3 + 0x30))(&local_3c);
      if ((*(char *)(param_1 + 8) != '\0') && (local_18 = 0, 0 < (int)local_38)) {
        do {
          uVar2 = *(ushort *)(local_3c + local_18 * 2);
          local_d0 = 0x7f7fffee;
          local_b0 = 0;
          local_ac = 0;
          local_30fc = 0;
          local_2c = 0;
          local_14 = 0.0;
          if (*(char *)(param_1 + 10) != '\0') {
            local_2c = (int)param_3 + 0x10;
            local_14 = (float)(param_4 + 0x10);
          }
          local_30 = (**(code **)(*piVar3 + 0x28))(uVar2);
          local_60 = (**(code **)(*piVar3 + 0x2c))(uVar2);
          local_70 = local_2c;
          local_6c = local_14;
          local_58 = local_30;
          local_44 = local_3100;
          local_68 = 1;
          local_5c = 0;
          local_54 = 0;
          local_48 = param_5;
          local_50 = 0;
          if (piVar3[2] == 0) {
            local_40 = CONCAT22(*(undefined2 *)((int)piVar3 + 0x12),uVar2);
          }
          else {
            local_40 = (uint)uVar2;
          }
          local_4c = piVar3;
          FUN_011cc690(*(undefined4 *)((int)param_3 + 8),&local_70);
          if (*(short *)((int)param_3 + 0x204) != 0) {
            FUN_011c9070(param_3,&local_70);
          }
          if (*(short *)(param_4 + 0x204) != 0) {
            FUN_011c9070(param_4,&local_70);
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < (int)local_38);
      }
      if ((*(char *)(param_1 + 9) != '\0') && (local_18 = 0, local_14 = local_38, 0 < (int)local_38)
         ) {
        do {
          uVar1 = *(undefined2 *)(local_3c + local_18 * 2);
          iVar4 = (**(code **)(*piVar3 + 0x28))(uVar1);
          if ((*(byte *)(iVar4 + 0xf) & 1) == 0) {
            local_30 = (**(code **)(*piVar3 + 0x28))(uVar1);
            local_5c = (**(code **)(*piVar3 + 0x2c))(uVar1);
            local_68 = param_4;
            local_54 = local_54 & 0xff000000;
            local_50 = 0;
            local_4c = (int *)0x0;
            local_44 = (undefined1 *)0x0;
            local_40 = 0;
            local_58 = local_30;
            local_48 = local_30 + 0x14;
            local_70 = 2;
            local_6c = param_3;
            local_60 = 4;
            local_64 = piVar3;
            FUN_011cbad0(*(undefined4 *)((int)param_3 + 8),&local_70);
            local_70 = 0;
            if (*(short *)((int)param_3 + 0x204) != 0) {
              FUN_011c8e60(param_3,&local_70);
            }
            local_70 = 1;
            if (*(short *)(param_4 + 0x204) != 0) {
              FUN_011c8e60(param_4,&local_70);
            }
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < (int)local_14);
      }
      FUN_0118c5a0(param_6,param_5);
      local_38 = 0.0;
      if (-1 < (int)local_34) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_3c,(local_34 & 0x3fffffff) * 2);
      }
      return 0;
    }
  }
  return 1;
}

// 012825F0  _anon_C7FCC298::hkEntitySelectorAll::hkEntitySelectorAll  size=39  [run]
void _anon_C7FCC298::hkEntitySelectorAll::hkEntitySelectorAll
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **local_8;
  
  local_8 = vftable;
  FUN_01283030(param_1,param_2,param_3,&local_8);
  return;
}

// 01282620  FUN_01282620  size=75  [run]
void FUN_01282620(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_14 [16];
  
  uVar1 = *(undefined4 *)(*param_3 + 8);
  _anon_C7FCC298::hkEntitySelectorListed::hkEntitySelectorListed(param_3,param_4);
  FUN_01283030(param_1,param_2,uVar1,local_14);
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return;
}

// 01282680  FUN_01282680  size=12  [run]
void __thiscall FUN_01282680(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 01282690  FUN_01282690  size=15  [run]
int __thiscall FUN_01282690(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 012826A0  FUN_012826a0  size=19  [run]
void __thiscall FUN_012826a0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 4) == 0;
  return;
}

// 012826E0  FUN_012826e0  size=15  [run]
int __thiscall FUN_012826e0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01282730  FUN_01282730  size=11  [run]
int FUN_01282730(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01282740  FUN_01282740  size=34  [run]
void FUN_01282740(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 01282780  FUN_01282780  size=52  [run]
undefined4 __thiscall FUN_01282780(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 012827C0  FUN_012827c0  size=33  [run]
void FUN_012827c0(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_2 + (int)param_1);
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 012827F0  FUN_012827f0  size=33  [run]
void FUN_012827f0(undefined4 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_3 + (int)param_1);
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01282820  FUN_01282820  size=50  [run]
undefined4 __thiscall FUN_01282820(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 01282860  FUN_01282860  size=104  [run]
void __fastcall FUN_01282860(undefined4 *param_1)

{
  *param_1 = 0x30000;
  param_1[3] = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 012828D0  FUN_012828d0  size=113  [run]
void __fastcall FUN_012828d0(undefined2 *param_1)

{
  *param_1 = 0x19;
  *(undefined4 *)(param_1 + 8) = 0x30000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  return;
}

// 01282950  FUN_01282950  size=19  [run]
void __thiscall FUN_01282950(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 4) == 0;
  return;
}

// 01282970  FUN_01282970  size=31  [run]
void FUN_01282970(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01282990  FUN_01282990  size=37  [run]
void FUN_01282990(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 012829C0  hkpSaveContactPointsUtil::EntitySelector::~EntitySelector  size=34  [run]
void __fastcall hkpSaveContactPointsUtil::EntitySelector::~EntitySelector(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = vftable;
  return;
}

// 012829F0  FUN_012829f0  size=149  [run]
void __thiscall FUN_012829f0(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  return;
}

// 01282AD0  FUN_01282ad0  size=57  [run]
void __thiscall FUN_01282ad0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01282B10  FUN_01282b10  size=149  [run]
void __thiscall
FUN_01282b10(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = (iVar1 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  FUN_01019bd0(*param_1 + (param_3 + param_6) * 4,*param_1 + (param_4 + param_3) * 4,
               ((iVar1 - param_3) - param_4) * 4);
  puVar3 = (undefined4 *)(*param_1 + param_3 * 4);
  if (0 < param_6) {
    param_5 = param_5 - (int)puVar3;
    do {
      *puVar3 = *(undefined4 *)(param_5 + (int)puVar3);
      puVar3 = puVar3 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  param_1[1] = iVar4;
  return;
}

// 01282BB0  FUN_01282bb0  size=128  [run]
int * __thiscall FUN_01282bb0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = param_3;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_3[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(*param_2 + 0x10))(*param_1,uVar1 * 4);
    }
    param_3 = (int *)(piVar2[1] * 4);
    iVar3 = (**(code **)(*param_2 + 0xc))(&param_3);
    *param_1 = iVar3;
    param_1[2] = (int)((int)param_3 + ((int)param_3 >> 0x1f & 3U)) >> 2;
  }
  iVar3 = piVar2[1];
  puVar4 = (undefined4 *)*param_1;
  param_1[1] = iVar3;
  if (0 < iVar3) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 01282C40  FUN_01282c40  size=52  [run]
undefined4 __thiscall FUN_01282c40(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x20);
    return uVar3;
  }
  return 0;
}

// 01282C80  _anon_C7FCC298::hkEntitySelectorListed::hkEntitySelectorListed  size=102  [run]
undefined4 * __thiscall
_anon_C7FCC298::hkEntitySelectorListed::hkEntitySelectorListed
          (undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  FUN_010102e0();
  FUN_01010c40(&PTR_vftable_018e9b94,param_3);
  if (0 < param_3) {
    do {
      FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(param_2 + iVar1 * 4),1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  return param_1;
}

// 01282CF0  _anon_C7FCC298::hkEntitySelectorListed::vf04  size=21  [run]
void _anon_C7FCC298::hkEntitySelectorListed::vf04(undefined4 param_1)

{
  FUN_01010160(param_1,0);
  return;
}

// 01282D10  _anon_C7FCC298::hkEntitySelectorListed::vf00  size=57  [run]
undefined4 * __thiscall
_anon_C7FCC298::hkEntitySelectorListed::vf00(undefined4 *param_1,byte param_2)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = hkpSaveContactPointsUtil::EntitySelector::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01282D50  FUN_01282d50  size=58  [run]
void __thiscall FUN_01282d50(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01282D90  FUN_01282d90  size=30  [run]
void FUN_01282d90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01282b10(param_1,param_2,0,param_3,param_4);
  return;
}

// 01282DB0  FUN_01282db0  size=134  [run]
int * __thiscall FUN_01282db0(int *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  piVar2 = param_2;
  uVar1 = param_1[2];
  if ((int)(uVar1 & 0x3fffffff) < param_2[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar1 * 4);
    }
    param_2 = (int *)(piVar2[1] * 4);
    iVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *param_1 = iVar3;
    param_1[2] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  }
  iVar3 = piVar2[1];
  puVar4 = (undefined4 *)*param_1;
  param_1[1] = iVar3;
  if (0 < iVar3) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 01282E40  FUN_01282e40  size=55  [run]
void __thiscall FUN_01282e40(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x20);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01282E80  FUN_01282e80  size=29  [run]
void FUN_01282e80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01282d90(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 01282EA0  FUN_01282ea0  size=56  [run]
void __thiscall FUN_01282ea0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x20);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01282F30  hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry  size=245  [run]
void __fastcall hkpSerializedAgentNnEntry::hkpSerializedAgentNnEntry(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0x19;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((int)param_1 + 0x32) = 3;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((int)param_1 + 0x3a) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x80000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x80000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x80000000;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0x80000000;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0x80000000;
  param_1[0x4b] = 0x103;
  param_1[0x4c] = 1;
  return;
}

// 01283030  FUN_01283030  size=356  [run]
void FUN_01283030(char *param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  *(int *)(param_3 + 0x8c) = *(int *)(param_3 + 0x8c) + 1;
  iVar2 = *(int *)(param_2 + 0x48);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    iVar5 = *(int *)(*(int *)(param_2 + 0x44) + iVar2 * 4);
    if (*(char *)(iVar5 + 0x18) == '\0') {
      local_8 = *(int *)(iVar5 + 0xc);
      iVar3 = *(int *)(iVar5 + 8);
    }
    else {
      iVar3 = (**(code **)(param_1 + 4))(*(undefined4 *)(iVar5 + 0x10));
      local_8 = (**(code **)(param_1 + 4))(*(undefined4 *)(iVar5 + 0x14));
    }
    if ((((iVar3 != 0) && (local_8 != 0)) &&
        ((iVar4 = (**(code **)(*param_4 + 4))(iVar3), iVar4 != 0 ||
         (iVar4 = (**(code **)(*param_4 + 4))(local_8), iVar4 != 0)))) &&
       (iVar4 = FUN_0118c720(iVar3 + 0x10,local_8 + 0x10), iVar4 != 0)) {
      if (*(int *)(iVar5 + 300) != 0x103) {
        FUN_012863e0(*(undefined4 *)(param_3 + 0x70),iVar5);
      }
      iVar5 = FUN_01281f10(param_1,iVar5,iVar3,local_8,*(undefined4 *)(param_3 + 0x70),iVar4);
      if ((*param_1 != '\0') && (iVar5 != 0)) {
        FUN_010060a0();
        *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + -1;
        if (*(int *)(param_2 + 0x48) != iVar2) {
          *(undefined4 *)(*(int *)(param_2 + 0x44) + iVar2 * 4) =
               *(undefined4 *)(*(int *)(param_2 + 0x44) + *(int *)(param_2 + 0x48) * 4);
        }
      }
    }
  }
  piVar1 = (int *)(param_3 + 0x8c);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (*(char *)(param_3 + 0x94) == '\0')) {
    if (*(int *)(param_3 + 0x84) != 0) {
      FUN_011925d0();
    }
    if ((*(int *)(param_3 + 0x9c) == 1) && (*(int *)(param_3 + 0x88) != 0)) {
      FUN_011925f0();
    }
  }
  return;
}

// 01283270  FUN_01283270  size=543  [run]
int FUN_01283270(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = *(int **)(param_1 + 0xc);
  uVar4 = (**(code **)(*piVar1 + 0x2c))();
  switch(uVar4) {
  case 2:
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    iVar6 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0xa0);
    *(undefined2 *)(iVar6 + 4) = 0xa0;
    iVar7 = hkpHingeLimitsData::hkpHingeLimitsData();
    iVar6 = piVar1[9];
    iVar2 = piVar1[10];
    iVar3 = piVar1[0xb];
    *(int *)(iVar7 + 0x20) = piVar1[8];
    *(int *)(iVar7 + 0x24) = iVar6;
    *(int *)(iVar7 + 0x28) = iVar2;
    *(int *)(iVar7 + 0x2c) = iVar3;
    iVar6 = piVar1[0xd];
    iVar2 = piVar1[0xe];
    iVar3 = piVar1[0xf];
    *(int *)(iVar7 + 0x30) = piVar1[0xc];
    *(int *)(iVar7 + 0x34) = iVar6;
    *(int *)(iVar7 + 0x38) = iVar2;
    *(int *)(iVar7 + 0x3c) = iVar3;
    iVar6 = piVar1[0x11];
    iVar2 = piVar1[0x12];
    iVar3 = piVar1[0x13];
    *(int *)(iVar7 + 0x40) = piVar1[0x10];
    *(int *)(iVar7 + 0x44) = iVar6;
    *(int *)(iVar7 + 0x48) = iVar2;
    *(int *)(iVar7 + 0x4c) = iVar3;
    iVar6 = piVar1[0x19];
    iVar2 = piVar1[0x1a];
    iVar3 = piVar1[0x1b];
    *(int *)(iVar7 + 0x50) = piVar1[0x18];
    *(int *)(iVar7 + 0x54) = iVar6;
    *(int *)(iVar7 + 0x58) = iVar2;
    *(int *)(iVar7 + 0x5c) = iVar3;
    iVar6 = piVar1[0x1d];
    iVar2 = piVar1[0x1e];
    iVar3 = piVar1[0x1f];
    *(int *)(iVar7 + 0x60) = piVar1[0x1c];
    *(int *)(iVar7 + 100) = iVar6;
    *(int *)(iVar7 + 0x68) = iVar2;
    *(int *)(iVar7 + 0x6c) = iVar3;
    iVar6 = piVar1[0x21];
    iVar2 = piVar1[0x22];
    iVar3 = piVar1[0x23];
    *(int *)(iVar7 + 0x70) = piVar1[0x20];
    *(int *)(iVar7 + 0x74) = iVar6;
    *(int *)(iVar7 + 0x78) = iVar2;
    *(int *)(iVar7 + 0x7c) = iVar3;
    *(undefined8 *)(iVar7 + 0x80) = *(undefined8 *)(piVar1 + 0x34);
    *(undefined8 *)(iVar7 + 0x88) = *(undefined8 *)(piVar1 + 0x36);
    *(int *)(iVar7 + 0x90) = piVar1[0x38];
    break;
  default:
    return 0;
  case 7:
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    iVar6 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0xc0);
    *(undefined2 *)(iVar6 + 4) = 0xc0;
    iVar7 = hkpRagdollLimitsData::hkpRagdollLimitsData();
    iVar6 = piVar1[9];
    iVar2 = piVar1[10];
    iVar3 = piVar1[0xb];
    *(int *)(iVar7 + 0x20) = piVar1[8];
    *(int *)(iVar7 + 0x24) = iVar6;
    *(int *)(iVar7 + 0x28) = iVar2;
    *(int *)(iVar7 + 0x2c) = iVar3;
    iVar6 = piVar1[0xd];
    iVar2 = piVar1[0xe];
    iVar3 = piVar1[0xf];
    *(int *)(iVar7 + 0x30) = piVar1[0xc];
    *(int *)(iVar7 + 0x34) = iVar6;
    *(int *)(iVar7 + 0x38) = iVar2;
    *(int *)(iVar7 + 0x3c) = iVar3;
    iVar6 = piVar1[0x11];
    iVar2 = piVar1[0x12];
    iVar3 = piVar1[0x13];
    *(int *)(iVar7 + 0x40) = piVar1[0x10];
    *(int *)(iVar7 + 0x44) = iVar6;
    *(int *)(iVar7 + 0x48) = iVar2;
    *(int *)(iVar7 + 0x4c) = iVar3;
    iVar6 = piVar1[0x19];
    iVar2 = piVar1[0x1a];
    iVar3 = piVar1[0x1b];
    *(int *)(iVar7 + 0x50) = piVar1[0x18];
    *(int *)(iVar7 + 0x54) = iVar6;
    *(int *)(iVar7 + 0x58) = iVar2;
    *(int *)(iVar7 + 0x5c) = iVar3;
    iVar6 = piVar1[0x1d];
    iVar2 = piVar1[0x1e];
    iVar3 = piVar1[0x1f];
    *(int *)(iVar7 + 0x60) = piVar1[0x1c];
    *(int *)(iVar7 + 100) = iVar6;
    *(int *)(iVar7 + 0x68) = iVar2;
    *(int *)(iVar7 + 0x6c) = iVar3;
    iVar6 = piVar1[0x21];
    iVar2 = piVar1[0x22];
    iVar3 = piVar1[0x23];
    *(int *)(iVar7 + 0x70) = piVar1[0x20];
    *(int *)(iVar7 + 0x74) = iVar6;
    *(int *)(iVar7 + 0x78) = iVar2;
    *(int *)(iVar7 + 0x7c) = iVar3;
    *(undefined8 *)(iVar7 + 0x80) = *(undefined8 *)(piVar1 + 0x43);
    *(undefined8 *)(iVar7 + 0x88) = *(undefined8 *)(piVar1 + 0x45);
    *(int *)(iVar7 + 0x90) = piVar1[0x47];
    *(undefined8 *)(iVar7 + 0xa8) = *(undefined8 *)(piVar1 + 0x4d);
    *(undefined8 *)(iVar7 + 0xb0) = *(undefined8 *)(piVar1 + 0x4f);
    *(int *)(iVar7 + 0xb8) = piVar1[0x51];
    *(undefined8 *)(iVar7 + 0x94) = *(undefined8 *)(piVar1 + 0x48);
    *(undefined8 *)(iVar7 + 0x9c) = *(undefined8 *)(piVar1 + 0x4a);
    *(int *)(iVar7 + 0xa4) = piVar1[0x4c];
    FUN_011d9ab0(*(char *)((int)piVar1 + 0x126) != '\0');
    break;
  case 0x12:
  case 0x13:
    FUN_01006000();
    return param_1;
  }
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  iVar6 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x38);
  *(undefined2 *)(iVar6 + 4) = 0x38;
  iVar6 = hkpConstraintInstance::hkpConstraintInstance
                    (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),iVar7,
                     *(undefined1 *)(param_1 + 0x1c));
  FUN_010060a0();
  return iVar6;
}


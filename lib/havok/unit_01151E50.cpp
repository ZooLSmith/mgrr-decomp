// lib/havok/unit_01151E50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01151E50..01163C40, 544 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkpAabbCastCollector.h"
#include "hkpBroadPhase.h"
#include "hkpBvCompressedMeshAgent.h"
#include "hkpBvShape.h"
#include "hkpBvTreeAgent.h"
#include "hkpBvTreeShape.h"
#include "hkpBvTreeStreamAgent.h"
#include "hkpCollisionAgent.h"
#include "hkpCollisionDispatcher.h"
#include "hkpCollisionFilterList.h"
#include "hkpConvexListShape.h"
#include "hkpConvexPieceMeshShape.h"
#include "hkpDefaultConvexListFilter.h"
#include "hkpFastMeshShape.h"
#include "hkpMeshShape.h"
#include "hkpMoppAgent.h"
#include "hkpMoppModifier.h"
#include "hkpMultiRayShape.h"
#include "hkpMultiSphereShape.h"
#include "hkpRemoveTerminalsMoppModifier.h"
#include "hkpRemoveTerminalsMoppModifier2.h"
#include "hkpShapeContainer.h"
#include "hkpSimpleMeshShape.h"
#include "hkpSingleShapeContainer.h"
#include "hkpStaticCompoundAgent.h"
#include "hkpStorageExtendedMeshShape.h"
#include "hkpStorageMeshShape.h"
#include "hkpSymmetricAgentFlipBodyCollector.h"
#include "hkpSymmetricAgentFlipCastCollector.h"
#include "hkpSymmetricAgentFlipCollector.h"
#include "hkpTransformShape.h"

// 01151E50  FUN_01151e50  size=17  [run]
void __thiscall FUN_01151e50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}

// 01151EB0  FUN_01151eb0  size=15  [run]
int __thiscall FUN_01151eb0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01151EE0  FUN_01151ee0  size=28  [run]
void __thiscall FUN_01151ee0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01151F00  FUN_01151f00  size=11  [run]
int FUN_01151f00(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01151F20  FUN_01151f20  size=28  [run]
void __thiscall FUN_01151f20(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  *param_1 = *param_1 - *param_2 * *param_3;
  param_1[1] = param_1[1] - fVar1 * fVar4;
  param_1[2] = param_1[2] - fVar2 * fVar5;
  param_1[3] = param_1[3] - fVar3 * fVar6;
  return;
}

// 01151F40  FUN_01151f40  size=32  [run]
void __thiscall FUN_01151f40(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = 0;
  return;
}

// 01151F60  FUN_01151f60  size=37  [run]
void FUN_01151f60(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01151F90  FUN_01151f90  size=37  [run]
void FUN_01151f90(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01151FE0  FUN_01151fe0  size=46  [run]
void __thiscall FUN_01151fe0(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  param_1[1] = param_1[1] + -1;
  iVar2 = param_1[1] - param_2;
  puVar1 = (undefined1 *)(*param_1 + param_2);
  if (0 < iVar2) {
    do {
      *puVar1 = puVar1[1];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 01152010  FUN_01152010  size=45  [run]
undefined4 __thiscall FUN_01152010(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,4);
    return uVar1;
  }
  return 0;
}

// 01152040  FUN_01152040  size=40  [run]
void FUN_01152040(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01152080  FUN_01152080  size=46  [run]
undefined4 __thiscall FUN_01152080(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,4);
    return uVar1;
  }
  return 0;
}

// 011520B0  FUN_011520b0  size=67  [run]
void __thiscall FUN_011520b0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01152100  FUN_01152100  size=63  [run]
void __thiscall FUN_01152100(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01152140  FUN_01152140  size=68  [run]
void __thiscall FUN_01152140(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01152190  FUN_01152190  size=63  [run]
void __fastcall FUN_01152190(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011521D0  FUN_011521d0  size=63  [run]
void __fastcall FUN_011521d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01152210  FUN_01152210  size=11  [run]
void __fastcall FUN_01152210(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01152219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4c))();
  return;
}

// 01152240  hkpBvTreeShape::hkpBvTreeShape  size=42  [run]
undefined4 * __thiscall hkpBvTreeShape::hkpBvTreeShape(undefined4 *param_1,int param_2)

{
  hkpShape::hkpShape(param_2);
  *param_1 = vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 0x16;
    *(undefined1 *)(param_1 + 4) = 4;
  }
  return param_1;
}

// 01152270  hkpBvTreeShape::castAabb  size=334  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
hkpBvTreeShape::castAabb(int *param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_14;
  
  auVar4._0_8_ = CONCAT44(param_3[1] - (param_2[5] + param_2[1]) * 0.5,
                          *param_3 - (param_2[4] + *param_2) * 0.5);
  auVar4._8_4_ = param_3[2] - (param_2[6] + param_2[2]) * 0.5;
  auVar4._12_4_ = param_3[3] - (param_2[7] + param_2[3]) * 0.5;
  auVar5._8_4_ = auVar4._8_4_;
  auVar5._0_8_ = auVar4._0_8_;
  auVar5._12_4_ = auVar4._12_4_;
  auVar5 = minps(auVar5,_DAT_01701b10);
  auVar4 = maxps(auVar4,_DAT_01701b10);
  local_40 = (float)*(undefined8 *)param_2;
  fStack_3c = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  fStack_38 = (float)*(undefined8 *)(param_2 + 2);
  fStack_34 = (float)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x20);
  local_30 = (float)*(undefined8 *)(param_2 + 4);
  fStack_2c = (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fStack_28 = (float)*(undefined8 *)(param_2 + 6);
  fStack_24 = (float)((ulonglong)*(undefined8 *)(param_2 + 6) >> 0x20);
  _local_40 = CONCAT44(auVar5._4_4_ + fStack_3c,auVar5._0_4_ + local_40);
  _fStack_38 = CONCAT44(auVar5._12_4_ + fStack_34,auVar5._8_4_ + fStack_38);
  _local_30 = CONCAT44(auVar4._4_4_ + fStack_2c,auVar4._0_4_ + local_30);
  _fStack_28 = CONCAT44(auVar4._12_4_ + fStack_24,auVar4._8_4_ + fStack_28);
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = *(int *)((int)pvVar1 + 0xc);
  if ((*(int *)((int)pvVar1 + 8) < 0x2000) || (*(uint *)((int)pvVar1 + 0x10) < iVar2 + 0x2000U)) {
    iVar2 = FUN_0100b780(0x2000);
  }
  else {
    *(uint *)((int)pvVar1 + 0xc) = iVar2 + 0x2000U;
  }
  local_14 = (**(code **)(*param_1 + 0x4c))(&local_40,iVar2,0x800);
  if (local_14 < 0x800) {
    if (local_14 == 0) goto LAB_01152373;
  }
  else {
    local_14 = 0x800;
  }
  iVar3 = 0;
  if (0 < local_14) {
    do {
      (**(code **)*param_4)(*(undefined4 *)(iVar2 + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_14);
  }
LAB_01152373:
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  if (((0x1fff < *(int *)((int)pvVar1 + 8)) && (iVar2 + 0x2000 == *(int *)((int)pvVar1 + 0xc))) &&
     (*(int *)((int)pvVar1 + 0x14) != iVar2)) {
    *(int *)((int)pvVar1 + 0xc) = iVar2;
    return;
  }
  FUN_0100b9b0(iVar2,0x2000);
  return;
}

// 01152410  FUN_01152410  size=15  [run]
int __thiscall FUN_01152410(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 01152420  FUN_01152420  size=25  [run]
void __thiscall FUN_01152420(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 01152450  hkpSimpleMeshShape::vf48  size=24  [run]
void __thiscall hkpSimpleMeshShape::vf48(int param_1,int param_2,undefined2 param_3)

{
  *(undefined2 *)(*(int *)(param_1 + 0x24) + 0xc + param_2 * 0x10) = param_3;
  return;
}

// 01152470  hkpSimpleMeshShape::vf44  size=13  [run]
void __thiscall hkpSimpleMeshShape::vf44(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x40) = param_2;
  return;
}

// 01152480  hkpSimpleMeshShape::getAabb  size=170  [run]
void __thiscall
hkpSimpleMeshShape::getAabb(int param_1,undefined4 param_2,float param_3,undefined1 (*param_4) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 local_30 [16];
  int local_18;
  int local_14;
  
  *(undefined4 *)*param_4 = 0x7f7fffee;
  *(undefined4 *)(*param_4 + 4) = 0x7f7fffee;
  *(undefined4 *)(*param_4 + 8) = 0x7f7fffee;
  *(undefined4 *)(*param_4 + 0xc) = 0;
  *(undefined4 *)param_4[1] = 0xff7fffee;
  *(undefined4 *)(param_4[1] + 4) = 0xff7fffee;
  *(undefined4 *)(param_4[1] + 8) = 0xff7fffee;
  *(undefined4 *)(param_4[1] + 0xc) = 0;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_14 = 0;
    do {
      FUN_01007050(param_2,*(int *)(param_1 + 0x18) + local_14);
      local_14 = local_14 + 0x10;
      auVar4 = minps(*param_4,local_30);
      *param_4 = auVar4;
      local_18 = local_18 + 1;
      auVar4 = maxps(param_4[1],local_30);
      param_4[1] = auVar4;
    } while (local_18 < *(int *)(param_1 + 0x1c));
  }
  param_3 = *(float *)(param_1 + 0x3c) + param_3;
  fVar1 = *(float *)(*param_4 + 4);
  fVar2 = *(float *)(*param_4 + 8);
  fVar3 = *(float *)(*param_4 + 0xc);
  *(float *)*param_4 = *(float *)*param_4 - param_3;
  *(float *)(*param_4 + 4) = fVar1 - param_3;
  *(float *)(*param_4 + 8) = fVar2 - param_3;
  *(float *)(*param_4 + 0xc) = fVar3 - param_3;
  fVar1 = *(float *)(param_4[1] + 4);
  fVar2 = *(float *)(param_4[1] + 8);
  fVar3 = *(float *)(param_4[1] + 0xc);
  *(float *)param_4[1] = *(float *)param_4[1] + param_3;
  *(float *)(param_4[1] + 4) = fVar1 + param_3;
  *(float *)(param_4[1] + 8) = fVar2 + param_3;
  *(float *)(param_4[1] + 0xc) = fVar3 + param_3;
  return;
}

// 01152530  hkpSimpleMeshShape::vf08  size=137  [run]
int __fastcall hkpSimpleMeshShape::vf08(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_18;
  int local_14;
  
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    local_14 = 0;
    do {
      piVar2 = (int *)(local_14 + *(int *)(param_1 + 0x14));
      iVar1 = *(int *)(param_1 + 8);
      local_30 = DAT_01b2154c;
      uStack_2c = DAT_01b2154c;
      uStack_28 = DAT_01b2154c;
      uStack_24 = DAT_01b2154c;
      iVar1 = FUN_0112b050(*piVar2 * 0x10 + iVar1,piVar2[1] * 0x10 + iVar1,piVar2[2] * 0x10 + iVar1,
                           &local_30);
      if (iVar1 == 0) {
        return local_18;
      }
      local_14 = local_14 + 0x10;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x18));
  }
  return -1;
}

// 011525C0  hkpSimpleMeshShape::vf0C  size=146  [run]
int __thiscall hkpSimpleMeshShape::vf0C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_18;
  int local_14;
  
  local_18 = param_2 + 1;
  if (local_18 < *(int *)(param_1 + 0x18)) {
    local_14 = local_18 * 0x10;
    do {
      piVar2 = (int *)(local_14 + *(int *)(param_1 + 0x14));
      iVar1 = *(int *)(param_1 + 8);
      local_30 = DAT_01b2154c;
      uStack_2c = DAT_01b2154c;
      uStack_28 = DAT_01b2154c;
      uStack_24 = DAT_01b2154c;
      iVar1 = FUN_0112b050(*piVar2 * 0x10 + iVar1,piVar2[1] * 0x10 + iVar1,piVar2[2] * 0x10 + iVar1,
                           &local_30);
      if (iVar1 == 0) {
        return local_18;
      }
      local_14 = local_14 + 0x10;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x18));
  }
  return -1;
}

// 01152660  hkpSimpleMeshShape::vf14  size=167  [run]
void __thiscall hkpSimpleMeshShape::vf14(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if (param_3 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x30);
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    uVar3 = *(undefined2 *)(*(int *)(param_1 + 0x14) + 0xc + param_2 * 0x10);
    *(undefined2 *)((int)param_3 + 6) = 1;
    *(undefined2 *)(param_3 + 2) = 0x402;
    *(undefined2 *)(param_3 + 5) = uVar3;
    param_3[4] = uVar1;
    *(undefined2 *)((int)param_3 + 10) = 0;
    param_3[3] = 0;
    *param_3 = hkpTriangleShape::vftable;
    *(undefined1 *)((int)param_3 + 0x16) = uVar2;
    param_3[0x14] = 0;
    param_3[0x15] = 0;
    param_3[0x16] = 0;
    param_3[0x17] = 0;
    *(undefined1 *)((int)param_3 + 0x17) = 0;
  }
  puVar6 = (undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x14) + param_2 * 0x10) * 0x10 + *(int *)(param_1 + 8));
  uVar1 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  param_3[8] = *puVar6;
  param_3[9] = uVar1;
  param_3[10] = uVar4;
  param_3[0xb] = uVar5;
  puVar6 = (undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x14) + 4 + param_2 * 0x10) * 0x10 + *(int *)(param_1 + 8));
  uVar1 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  param_3[0xc] = *puVar6;
  param_3[0xd] = uVar1;
  param_3[0xe] = uVar4;
  param_3[0xf] = uVar5;
  puVar6 = (undefined4 *)
           (*(int *)(*(int *)(param_1 + 0x14) + 8 + param_2 * 0x10) * 0x10 + *(int *)(param_1 + 8));
  uVar1 = puVar6[1];
  uVar4 = puVar6[2];
  uVar5 = puVar6[3];
  param_3[0x10] = *puVar6;
  param_3[0x11] = uVar1;
  param_3[0x12] = uVar4;
  param_3[0x13] = uVar5;
  return;
}

// 01152710  hkpSimpleMeshShape::hkpSimpleMeshShape  size=83  [run]
undefined4 * __thiscall
hkpSimpleMeshShape::hkpSimpleMeshShape(undefined4 *param_1,undefined4 param_2)

{
  hkpShapeCollection::hkpShapeCollection(0x1b,4);
  *param_1 = vftable;
  param_1[4] = vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x80000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x80000000;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0x10) = 6;
  return param_1;
}

// 01152770  hkpSimpleMeshShape::hkpSimpleMeshShape  size=49  [run]
undefined4 * __thiscall hkpSimpleMeshShape::hkpSimpleMeshShape(undefined4 *param_1,int param_2)

{
  hkpShapeCollection::hkpShapeCollection(param_2);
  *param_1 = vftable;
  param_1[4] = vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 0x1b;
    *(undefined1 *)((int)param_1 + 0x15) = 4;
  }
  return param_1;
}

// 011527F0  FUN_011527f0  size=60  [run]
void __thiscall FUN_011527f0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01152830  FUN_01152830  size=60  [run]
void __fastcall FUN_01152830(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01152870  FUN_01152870  size=60  [run]
void __fastcall FUN_01152870(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011528B0  hkpSimpleMeshShape::vf00  size=8  [run]
void hkpSimpleMeshShape::vf00(void)

{
  vf00();
  return;
}

// 011528C0  FUN_011528c0  size=38  [run]
void FUN_011528c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 011528F0  hkBaseObject::hkBaseObject_91  size=166  [run]
void __fastcall hkBaseObject::hkBaseObject_91(undefined4 *param_1)

{
  param_1[0xd] = 0;
  if (-1 < (int)param_1[0xe]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],param_1[0xe] & 0x3fffffff);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  param_1[10] = 0;
  if (-1 < (int)param_1[0xb]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[9],param_1[0xb] << 4);
  }
  param_1[9] = 0;
  param_1[0xb] = 0x80000000;
  param_1[7] = 0;
  if (-1 < (int)param_1[8]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[6],param_1[8] << 4);
  }
  param_1[6] = 0;
  param_1[8] = 0x80000000;
  param_1[4] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  return;
}

// 011529A0  hkpSimpleMeshShape::vf00  size=52  [run]
int __thiscall hkpSimpleMeshShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_91();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 011529F0  hkpMeshShape::vf48  size=74  [run]
void __thiscall hkpMeshShape::vf48(int param_1,uint param_2,undefined2 param_3)

{
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)
   (*(int *)(param_1 + 0x40) +
   ((0xffffffffU >> (bVar1 & 0x1f) & param_2) +
   *(int *)(*(int *)(param_1 + 0x34) + 0x34 + (param_2 >> (0x20 - bVar1 & 0x1f)) * 0x38)) * 2) =
       param_3;
  return;
}

// 01152A40  hkpMeshShape::vf08  size=137  [run]
undefined4 __fastcall hkpMeshShape::vf08(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_220 [512];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1[10] == 0) {
    return 0xffffffff;
  }
  iVar1 = (**(code **)(*param_1 + 0x14))(0,local_220);
  local_20 = DAT_01b2154c;
  uStack_1c = DAT_01b2154c;
  uStack_18 = DAT_01b2154c;
  uStack_14 = DAT_01b2154c;
  iVar1 = FUN_0112b050(iVar1 + 0x20,iVar1 + 0x30,iVar1 + 0x40,&local_20);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = (**(code **)(*param_1 + 0xc))(0);
  return uVar2;
}

// 01152AD0  hkpMeshShape::vf0C  size=226  [run]
uint __thiscall hkpMeshShape::vf0C(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 local_230 [512];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_1c;
  int local_18;
  uint local_14;
  
  uVar2 = param_2 >> (0x20 - (byte)param_1[8] & 0x1f);
  local_14 = 0xffffffffU >> ((byte)param_1[8] & 0x1f) & param_2;
  local_18 = uVar2 * 0x38;
  do {
    local_14 = local_14 + 1;
    if (*(int *)(local_18 + 0x1c + param_1[9]) <= (int)local_14) {
      uVar2 = uVar2 + 1;
      local_18 = local_18 + 0x38;
      if ((uint)param_1[10] <= uVar2) {
        return 0xffffffff;
      }
      local_14 = 0;
    }
    local_1c = uVar2 << (0x20U - (char)param_1[8] & 0x1f) | local_14;
    iVar1 = (**(code **)(*param_1 + 0x14))(local_1c,local_230);
    local_30 = DAT_01b2154c;
    uStack_2c = DAT_01b2154c;
    uStack_28 = DAT_01b2154c;
    uStack_24 = DAT_01b2154c;
    iVar1 = FUN_0112b050(iVar1 + 0x20,iVar1 + 0x30,iVar1 + 0x40,&local_30);
  } while (iVar1 != 0);
  return local_1c;
}

// 01152BC0  hkpMeshShape::vf10  size=76  [run]
undefined4 __thiscall hkpMeshShape::vf10(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_011532c0(param_2);
  if ((iVar2 != -1) &&
     (iVar1 = *(int *)(param_1 + 0x24) +
              (param_2 >> (0x20U - (char)*(undefined4 *)(param_1 + 0x20) & 0x1f)) * 0x38,
     puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x2c) * iVar2 + *(int *)(iVar1 + 0x28)),
     puVar3 != (undefined4 *)0x0)) {
    return *puVar3;
  }
  return 0;
}

// 01152C10  FUN_01152c10  size=114  [run]
void __thiscall FUN_01152c10(float *param_1,undefined4 param_2)

{
  float *in_EAX;
  undefined1 (*unaff_ESI) [16];
  undefined1 auVar1 [16];
  undefined1 local_30 [16];
  float local_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  local_20 = *param_1 * *in_EAX;
  fStack_1c = param_1[1] * in_EAX[1];
  fStack_18 = param_1[2] * in_EAX[2];
  uStack_14 = 0;
  FUN_01007050(param_2,&local_20);
  auVar1 = minps(*unaff_ESI,local_30);
  *unaff_ESI = auVar1;
  auVar1 = maxps(unaff_ESI[1],local_30);
  unaff_ESI[1] = auVar1;
  return;
}

// 01152C90  hkpMeshShape::getAabb  size=284  [run]
void __thiscall hkpMeshShape::getAabb(int param_1,undefined4 param_2,float param_3,float *param_4)

{
  int iVar1;
  int local_1c;
  int local_10;
  int local_c;
  
  *param_4 = 3.40282e+38;
  param_4[1] = 3.40282e+38;
  param_4[2] = 3.40282e+38;
  param_4[3] = 0.0;
  param_4[4] = -3.40282e+38;
  param_4[5] = -3.40282e+38;
  param_4[6] = -3.40282e+38;
  param_4[7] = 0.0;
  local_1c = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    local_10 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x34) + local_10;
      local_c = 0;
      if (0 < *(int *)(iVar1 + 0x1c)) {
        do {
          FUN_01152c10(param_2);
          FUN_01152c10(param_2);
          FUN_01152c10(param_2);
          local_c = local_c + 1;
        } while (local_c < *(int *)(iVar1 + 0x1c));
      }
      local_10 = local_10 + 0x38;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0x38));
  }
  param_3 = *(float *)(param_1 + 0x50) + param_3;
  *param_4 = *param_4 - param_3;
  param_4[1] = param_4[1] - param_3;
  param_4[2] = param_4[2] - param_3;
  param_4[3] = param_4[3] - param_3;
  param_4[4] = param_4[4] + param_3;
  param_4[5] = param_4[5] + param_3;
  param_4[6] = param_4[6] + param_3;
  param_4[7] = param_4[7] + param_3;
  return;
}

// 01152DB0  FUN_01152db0  size=17  [run]
void __thiscall FUN_01152db0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  return;
}

// 01152DD0  hkpMeshShape::vf14  size=400  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall hkpMeshShape::vf14(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
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
  undefined4 uVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  float *pfVar19;
  byte bVar20;
  uint *puVar21;
  uint uVar22;
  float *pfVar23;
  uint uVar24;
  undefined2 uVar25;
  
  bVar20 = (byte)*(undefined4 *)(param_1 + 0x20);
  uVar17 = 0xffffffffU >> (bVar20 & 0x1f) & param_2;
  param_2 = param_2 >> (0x20 - bVar20 & 0x1f);
  iVar16 = *(int *)(*(int *)(param_1 + 0x24) + 4 + param_2 * 0x38);
  piVar1 = (int *)(*(int *)(param_1 + 0x24) + param_2 * 0x38);
  puVar21 = (uint *)(piVar1[5] * uVar17 + piVar1[3]);
  uVar24 = piVar1[6] & uVar17;
  if ((char)piVar1[4] == '\x01') {
    uVar18 = (uint)(ushort)*puVar21;
    uVar22 = (uint)*(ushort *)((int)puVar21 + uVar24 * 2 + 2);
    uVar24 = (uint)*(ushort *)((int)puVar21 + (uVar24 ^ 1) * 2 + 2);
  }
  else {
    uVar18 = *puVar21;
    uVar22 = puVar21[uVar24 + 1];
    uVar24 = puVar21[(uVar24 ^ 1) + 1];
  }
  pfVar19 = (float *)(uVar18 * iVar16 + *piVar1);
  fVar2 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = pfVar19[2];
  fVar5 = *pfVar19;
  pfVar23 = (float *)(uVar22 * iVar16 + *piVar1);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar7 = pfVar19[1];
  pfVar19 = (float *)(uVar24 * piVar1[1] + *piVar1);
  fVar8 = pfVar23[1];
  fVar9 = pfVar23[2];
  fVar10 = *pfVar19;
  fVar11 = *pfVar23;
  fVar12 = pfVar19[1];
  fVar13 = pfVar19[2];
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar25 = 0;
  }
  else {
    uVar25 = *(undefined2 *)(*(int *)(param_1 + 0x30) + (piVar1[0xd] + uVar17) * 2);
  }
  if (param_3 != (undefined4 *)0x0) {
    uVar14 = *(undefined4 *)(param_1 + 0x40);
    uVar15 = *(undefined1 *)(param_1 + 0x3c);
    *(undefined2 *)((int)param_3 + 6) = 1;
    *(undefined2 *)(param_3 + 2) = 0x402;
    param_3[4] = uVar14;
    *(undefined2 *)(param_3 + 5) = uVar25;
    *(undefined2 *)((int)param_3 + 10) = 0;
    param_3[3] = 0;
    *param_3 = hkpTriangleShape::vftable;
    *(undefined1 *)((int)param_3 + 0x16) = uVar15;
    *(undefined1 *)((int)param_3 + 0x17) = 0;
    param_3[0x14] = 0;
    param_3[0x15] = 0;
    param_3[0x16] = 0;
    param_3[0x17] = 0;
    param_3[8] = fVar5 * fVar3;
    param_3[9] = fVar7 * fVar6;
    param_3[10] = fVar4 * fVar2;
    param_3[0xb] = 0;
    param_3[0xc] = fVar3 * fVar11;
    param_3[0xd] = fVar8 * fVar6;
    param_3[0xe] = fVar9 * fVar2;
    param_3[0xf] = 0;
    param_3[0x10] = fVar3 * fVar10;
    param_3[0x11] = fVar12 * fVar6;
    param_3[0x12] = fVar13 * fVar2;
    param_3[0x13] = 0;
    return;
  }
  _DAT_00000020 = fVar5 * fVar3;
  _DAT_00000024 = fVar7 * fVar6;
  fRam00000028 = fVar4 * fVar2;
  uRam0000002c = 0;
  fRam00000030 = fVar3 * fVar11;
  fRam00000034 = fVar8 * fVar6;
  fRam00000038 = fVar9 * fVar2;
  uRam0000003c = 0;
  _DAT_00000040 = fVar3 * fVar10;
  _DAT_00000044 = fVar12 * fVar6;
  _DAT_00000048 = fVar13 * fVar2;
  _DAT_0000004c = 0;
  return;
}

// 01152F60  hkpMeshShape::vf44  size=184  [run]
void __thiscall hkpMeshShape::vf44(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  *(char *)(param_1 + 0x4c) = (char)param_2;
  if (param_2 != 6) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x38)) {
      iVar1 = *(int *)(param_1 + 0x34);
      iVar3 = 0;
      do {
        *(int *)(iVar3 + 0x34 + iVar1) = iVar5;
        iVar1 = *(int *)(param_1 + 0x34);
        iVar5 = iVar5 + *(int *)(iVar3 + 0x1c + iVar1);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x38;
      } while (iVar4 < *(int *)(param_1 + 0x38));
    }
    if ((int)(*(uint *)(param_1 + 0x48) & 0x3fffffff) < iVar5) {
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x40,iVar5,2);
    }
    uVar2 = *(uint *)(param_1 + 0x48) & 0x3fffffff;
    if ((int)uVar2 < iVar5) {
      iVar4 = uVar2 * 2;
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x40,iVar4,2);
    }
    *(int *)(param_1 + 0x44) = iVar5;
    return;
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x48)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x40),(*(uint *)(param_1 + 0x48) & 0x3fffffff) * 2);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x80000000;
  return;
}

// 01153020  hkpMeshShape::vf4C  size=155  [run]
void __thiscall hkpMeshShape::vf4C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  piVar1 = (int *)(param_1 + 0x34);
  if (*(uint *)(param_1 + 0x38) == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,0x38);
  }
  iVar3 = *piVar1 + *(int *)(param_1 + 0x38) * 0x38;
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x11) = 1;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 1;
    *(undefined4 *)(iVar3 + 0x28) = 0;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x18) = 0;
  }
  puVar2 = (undefined4 *)(*piVar1 + *(int *)(param_1 + 0x38) * 0x38);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  puVar4 = puVar2;
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  if (puVar2[8] == 0) {
    puVar2[0xc] = 1;
    puVar2[10] = &DAT_01701b10;
    puVar2[8] = &DAT_01701b10;
  }
  return;
}

// 011530C0  hkpMeshShape::hkpMeshShape  size=104  [run]
undefined4 * __thiscall
hkpMeshShape::hkpMeshShape(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  hkpShapeCollection::hkpShapeCollection(0x1b,5);
  *param_1 = vftable;
  param_1[4] = vftable;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x80000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x80000000;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = param_3;
  param_1[0x14] = param_2;
  *(undefined1 *)(param_1 + 0x13) = 6;
  return param_1;
}

// 01153130  hkpMeshShape::hkpMeshShape  size=86  [run]
undefined4 * __thiscall hkpMeshShape::hkpMeshShape(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  hkpShapeCollection::hkpShapeCollection(param_2);
  *param_1 = vftable;
  param_1[4] = vftable;
  if (param_2 != 0) {
    iVar2 = 0;
    if (0 < (int)param_1[0xe]) {
      iVar1 = 0;
      do {
        if (*(char *)(iVar1 + 0x11 + param_1[0xd]) == '\0') {
          *(undefined1 *)(iVar1 + 0x11 + param_1[0xd]) = 1;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x38;
      } while (iVar2 < (int)param_1[0xe]);
    }
    *(undefined1 *)(param_1 + 2) = 0x1b;
    *(undefined1 *)((int)param_1 + 0x15) = 5;
  }
  return param_1;
}

// 011531A0  FUN_011531a0  size=20  [run]
void __thiscall FUN_011531a0(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 011531D0  FUN_011531d0  size=12  [run]
void __thiscall FUN_011531d0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 011531E0  FUN_011531e0  size=20  [run]
void __thiscall FUN_011531e0(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 01153240  FUN_01153240  size=24  [run]
int __thiscall FUN_01153240(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x38;
}

// 01153260  FUN_01153260  size=11  [run]
int FUN_01153260(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01153280  FUN_01153280  size=39  [run]
void __thiscall FUN_01153280(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x38);
  return;
}

// 011532C0  FUN_011532c0  size=99  [run]
uint __thiscall FUN_011532c0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  bVar3 = (byte)*(undefined4 *)(param_1 + 0x30);
  uVar4 = param_2 >> (0x20 - bVar3 & 0x1f);
  iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0x20 + uVar4 * 0x38);
  iVar1 = *(int *)(param_1 + 0x34) + uVar4 * 0x38;
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  iVar5 = (0xffffffffU >> (bVar3 & 0x1f) & param_2) * *(int *)(iVar1 + 0x24);
  if (*(char *)(iVar1 + 0x11) == '\x01') {
    return (uint)*(byte *)(iVar5 + iVar2);
  }
  return (uint)*(ushort *)(iVar5 + iVar2);
}

// 01153330  FUN_01153330  size=71  [run]
int __thiscall FUN_01153330(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_011532c0(param_2);
  if (iVar2 != -1) {
    iVar1 = *(int *)(param_1 + 0x34) +
            (param_2 >> (0x20U - (char)*(undefined4 *)(param_1 + 0x30) & 0x1f)) * 0x38;
    return *(int *)(iVar1 + 0x2c) * iVar2 + *(int *)(iVar1 + 0x28);
  }
  return 0;
}

// 011533E0  FUN_011533e0  size=77  [run]
void FUN_011533e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x24);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000024) {
        *(undefined1 *)((int)puVar1 + -0x13) = 1;
        *puVar1 = 0;
        puVar1[2] = 0;
        puVar1[3] = 1;
        puVar1[1] = 0;
        puVar1[-1] = 0;
        puVar1[4] = 0xffffffff;
        puVar1[-3] = 0;
      }
      puVar1 = puVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01153440  FUN_01153440  size=116  [run]
int __thiscall FUN_01153440(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x38);
  }
  iVar1 = *param_1 + param_1[1] * 0x38;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 1;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x38;
}

// 011534C0  FUN_011534c0  size=74  [run]
void __thiscall FUN_011534c0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(*param_2 + 0x10))(*param_1,(uVar1 * 8 - (uVar1 & 0x3fffffff)) * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01153510  FUN_01153510  size=111  [run]
int __fastcall FUN_01153510(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x38);
  }
  iVar1 = *param_1 + param_1[1] * 0x38;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x11) = 1;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 1;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x38;
}

// 01153580  FUN_01153580  size=71  [run]
void __fastcall FUN_01153580(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 * 8 - (uVar1 & 0x3fffffff)) * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011535D0  FUN_011535d0  size=71  [run]
void __fastcall FUN_011535d0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 * 8 - (uVar1 & 0x3fffffff)) * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01153620  hkpMeshShape::vf00  size=8  [run]
void hkpMeshShape::vf00(void)

{
  vf00();
  return;
}

// 01153630  FUN_01153630  size=38  [run]
void FUN_01153630(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01153660  hkBaseObject::hkBaseObject_90  size=130  [run]
void __fastcall hkBaseObject::hkBaseObject_90(undefined4 *param_1)

{
  uint uVar1;
  
  param_1[0x11] = 0;
  if (-1 < (int)param_1[0x12]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x10],(param_1[0x12] & 0x3fffffff) * 2);
  }
  param_1[0x10] = 0;
  param_1[0x12] = 0x80000000;
  uVar1 = param_1[0xf];
  param_1[0xe] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xd],(uVar1 * 8 - (uVar1 & 0x3fffffff)) * 8);
  }
  param_1[0xd] = 0;
  param_1[0xf] = 0x80000000;
  param_1[4] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  return;
}

// 011536F0  hkpMeshShape::vf00  size=52  [run]
int __thiscall hkpMeshShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_90();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01153760  FUN_01153760  size=26  [run]
undefined4 * __fastcall FUN_01153760(undefined4 *param_1)

{
  FUN_010066e0("Default");
  *param_1 = 0;
  return param_1;
}

// 01153780  FUN_01153780  size=8  [run]
undefined4 FUN_01153780(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01153790  FUN_01153790  size=23  [run]
int __fastcall FUN_01153790(int param_1)

{
  int in_EAX;
  
  if (in_EAX == 1) {
    return param_1 + 2;
  }
  if (in_EAX != 2) {
    return param_1 * 4;
  }
  return param_1 * 2 + 1;
}

// 011537B0  hkpStorageExtendedMeshShape::ShapeSubpartStorage::~ShapeSubpartStorage  size=11  [run]
void __fastcall
hkpStorageExtendedMeshShape::ShapeSubpartStorage::~ShapeSubpartStorage(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 011537C0  hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape  size=89  [run]
undefined4 * __thiscall
hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  hkpExtendedMeshShape::hkpExtendedMeshShape(param_2,param_3);
  *param_1 = vftable;
  param_1[4] = vftable;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x80000000;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0x80000000;
  return param_1;
}

// 01153820  hkpStorageExtendedMeshShape::~hkpStorageExtendedMeshShape  size=287  [run]
void __fastcall hkpStorageExtendedMeshShape::~hkpStorageExtendedMeshShape(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = vftable;
  param_1[4] = vftable;
  if (0 < (int)param_1[0x3d]) {
    do {
      FUN_010060a0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0x3d]);
  }
  iVar1 = param_1[0x32];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_011366c0();
  }
  param_1[0x32] = 0;
  if (0 < (int)param_1[0x40]) {
    iVar1 = 0;
    do {
      FUN_010060a0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0x40]);
  }
  param_1[0x2c] = &DAT_0209d930;
  param_1[0x40] = 0;
  if ((param_1[0x41] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x3f],param_1[0x41] * 4);
  }
  param_1[0x3f] = 0;
  param_1[0x41] = 0x80000000;
  param_1[0x3d] = 0;
  if ((param_1[0x3e] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x3c],param_1[0x3e] * 4);
  }
  param_1[0x3e] = 0x80000000;
  param_1[0x3c] = 0;
  hkpExtendedMeshShape::~hkpExtendedMeshShape();
  return;
}

// 01153950  hkpStorageExtendedMeshShape::MeshSubpartStorage::~MeshSubpartStorage  size=11  [run]
void __fastcall
hkpStorageExtendedMeshShape::MeshSubpartStorage::~MeshSubpartStorage(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 01153960  hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape  size=312  [run]
undefined4 * __thiscall
hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  byte *pbVar4;
  byte *extraout_EDX;
  byte *extraout_EDX_00;
  int iVar5;
  int iVar6;
  
  hkpExtendedMeshShape::hkpExtendedMeshShape(param_2);
  *param_1 = vftable;
  param_1[4] = vftable;
  if (param_2 != 0) {
    iVar6 = 0;
    if (0 < (int)param_1[0x2f]) {
      iVar5 = 0;
      do {
        pbVar4 = (byte *)(param_1[0x2e] + iVar5);
        if (*(int *)(param_1[0x3c] + iVar6 * 4) != 0) {
          MeshSubpartStorage::~MeshSubpartStorage(param_2);
          pbVar4 = extraout_EDX;
        }
        iVar1 = *(int *)(param_1[0x3c] + iVar6 * 4);
        *(undefined4 *)(pbVar4 + 0x18) = *(undefined4 *)(iVar1 + 8);
        if (pbVar4[0x2e] == 1) {
          uVar2 = *(undefined4 *)(iVar1 + 0x14);
        }
        else if (pbVar4[0x2e] == 2) {
          uVar2 = *(undefined4 *)(iVar1 + 0x20);
        }
        else {
          uVar2 = *(undefined4 *)(iVar1 + 0x2c);
        }
        *(undefined4 *)(pbVar4 + 0x20) = uVar2;
        if ((*pbVar4 & 6) == 2) {
          uVar2 = *(undefined4 *)(iVar1 + 0x38);
        }
        else {
          uVar2 = *(undefined4 *)(iVar1 + 0x5c);
        }
        *(undefined4 *)(pbVar4 + 8) = uVar2;
        if (*(int *)(iVar1 + 0x54) == 0) {
          uVar2 = *(undefined4 *)(iVar1 + 0x44);
          uVar3 = 0xc;
        }
        else {
          uVar2 = *(undefined4 *)(iVar1 + 0x50);
          uVar3 = 8;
        }
        iVar6 = iVar6 + 1;
        *(undefined2 *)(pbVar4 + 4) = uVar3;
        *(undefined4 *)(pbVar4 + 0xc) = uVar2;
        iVar5 = iVar5 + 0x70;
      } while (iVar6 < (int)param_1[0x2f]);
    }
    iVar6 = 0;
    if (0 < (int)param_1[0x32]) {
      iVar5 = 0;
      do {
        pbVar4 = (byte *)(param_1[0x31] + iVar5);
        if (*(int *)(param_1[0x3f] + iVar6 * 4) != 0) {
          ShapeSubpartStorage::~ShapeSubpartStorage(param_2);
          pbVar4 = extraout_EDX_00;
        }
        iVar1 = *(int *)(param_1[0x3f] + iVar6 * 4);
        if ((*pbVar4 & 6) == 2) {
          uVar2 = *(undefined4 *)(iVar1 + 8);
        }
        else {
          uVar2 = *(undefined4 *)(iVar1 + 0x20);
        }
        *(undefined4 *)(pbVar4 + 8) = uVar2;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(pbVar4 + 0xc) = *(undefined4 *)(iVar1 + 0x14);
        iVar5 = iVar5 + 0x40;
      } while (iVar6 < (int)param_1[0x32]);
    }
    return param_1;
  }
  return param_1;
}

// 01153AA0  hkpStorageExtendedMeshShape::vf4C  size=2292  [run]
void __thiscall hkpStorageExtendedMeshShape::vf4C(int param_1,ushort *param_2)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ushort *puVar8;
  LPVOID pvVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  int *piVar13;
  int iVar14;
  ushort uVar15;
  undefined4 *puVar16;
  undefined2 *puVar17;
  int *piVar18;
  int *piVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
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
  int *local_2c;
  uint local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  undefined4 *local_18;
  ushort *local_14;
  
  local_1c = param_1;
  local_14 = (ushort *)FUN_01135c10();
  FUN_00919310(param_2);
  pvVar9 = TlsGetValue(DAT_01f8fc4c);
  iVar10 = (**(code **)(**(int **)((int)pvVar9 + 0x2c) + 4))(0x68);
  *(undefined2 *)(iVar10 + 4) = 0x68;
  local_24 = (int *)MeshSubpartStorage::MeshSubpartStorage();
  piVar19 = (int *)(param_1 + 0xf0);
  if (*(uint *)(param_1 + 0xf4) == (*(uint *)(param_1 + 0xf8) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar19,4);
  }
  *(int **)(*piVar19 + *(int *)(param_1 + 0xf4) * 4) = local_24;
  *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
  puVar16 = *(undefined4 **)(*piVar19 + -4 + *(int *)(param_1 + 0xf4) * 4);
  local_24 = *(int **)(param_2 + 0xe);
  piVar19 = puVar16 + 2;
  local_20 = (int *)(puVar16[4] & 0x3fffffff);
  local_28 = puVar16[3];
  iVar10 = (int)local_24 + local_28;
  local_18 = puVar16;
  if ((int)local_20 < iVar10) {
    if (iVar10 < (int)local_20 * 2) {
      iVar10 = (int)local_20 * 2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar19,iVar10,0x10);
  }
  puVar16[3] = puVar16[3] + (int)local_24;
  puVar16 = *(undefined4 **)(param_2 + 0xc);
  local_24 = (int *)(local_28 * 0x10 + *piVar19);
  local_20 = (int *)0x0;
  if (0 < *(int *)(param_2 + 0xe)) {
    do {
      uVar4 = puVar16[1];
      uVar5 = puVar16[2];
      puVar20 = local_24 + 4;
      *local_24 = *puVar16;
      local_24[1] = uVar4;
      local_24[2] = uVar5;
      local_24[3] = 0;
      puVar16 = (undefined4 *)((int)puVar16 + (uint)param_2[0x12]);
      local_20 = (int *)((int)local_20 + 1);
      local_24 = puVar20;
    } while ((int)local_20 < *(int *)(param_2 + 0xe));
  }
  *(int *)(local_14 + 0xc) = *piVar19;
  local_14[0x12] = 0x10;
  *(undefined4 *)(local_14 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  if ((byte)param_2[0x17] == 1) {
    uVar15 = param_2[0x16];
    if (2 < (short)uVar15) {
      uVar15 = 4;
    }
    local_14[0x16] = uVar15;
    uVar24 = FUN_01153790();
    iVar14 = (int)((ulonglong)uVar24 >> 0x20);
    local_28 = (uint)uVar24;
    local_24 = *(int **)(iVar14 + 0x18);
    iVar10 = (int)local_24 + local_28;
    uVar11 = *(uint *)(iVar14 + 0x1c) & 0x3fffffff;
    if ((int)uVar11 < iVar10) {
      iVar3 = uVar11 * 2;
      if (iVar10 < iVar3) {
        iVar10 = iVar3;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,(int *)(iVar14 + 0x14),iVar10,1);
    }
    *(int *)(iVar14 + 0x18) = *(int *)(iVar14 + 0x18) + local_28;
    puVar20 = (undefined4 *)(*(int *)(iVar14 + 0x14) + (int)local_24);
    FUN_01015ea0(puVar20,0,local_28);
    puVar12 = *(undefined1 **)(param_2 + 0x10);
    iVar10 = 0;
    puVar16 = puVar20;
    local_20 = puVar20;
    if (0 < *(int *)(param_2 + 10)) {
      do {
        *(undefined1 *)puVar16 = *puVar12;
        *(undefined1 *)((int)puVar16 + 1) = puVar12[1];
        *(undefined1 *)((int)puVar16 + 2) = puVar12[2];
        iVar10 = iVar10 + 1;
        puVar12 = puVar12 + param_2[0x16];
        puVar16 = (undefined4 *)((int)puVar16 + (uint)local_14[0x16]);
      } while (iVar10 < *(int *)(param_2 + 10));
    }
  }
  else if ((byte)param_2[0x17] == 2) {
    uVar15 = param_2[0x16] >> 1;
    if (2 < uVar15) {
      uVar15 = 4;
    }
    local_14[0x16] = uVar15 * 2;
    uVar24 = FUN_01153790();
    iVar10 = (int)((ulonglong)uVar24 >> 0x20);
    local_28 = (uint)uVar24;
    local_20 = *(int **)(iVar10 + 0x24);
    local_24 = (int *)((int)local_20 + local_28);
    uVar11 = *(uint *)(iVar10 + 0x28) & 0x3fffffff;
    if ((int)uVar11 < (int)local_24) {
      piVar19 = (int *)(uVar11 * 2);
      piVar13 = local_24;
      if ((int)local_24 < (int)piVar19) {
        piVar13 = piVar19;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,(int *)(iVar10 + 0x20),piVar13,2);
    }
    *(int *)(iVar10 + 0x24) = *(int *)(iVar10 + 0x24) + local_28;
    puVar16 = (undefined4 *)(*(int *)(iVar10 + 0x20) + (int)local_20 * 2);
    FUN_01015ea0(puVar16,0,local_28 * 2);
    puVar17 = *(undefined2 **)(param_2 + 0x10);
    iVar10 = 0;
    puVar20 = puVar16;
    local_20 = puVar16;
    if (0 < *(int *)(param_2 + 10)) {
      do {
        *(undefined2 *)puVar20 = *puVar17;
        *(undefined2 *)((int)puVar20 + 2) = puVar17[1];
        *(undefined2 *)(puVar20 + 1) = puVar17[2];
        iVar10 = iVar10 + 1;
        puVar17 = (undefined2 *)((int)puVar17 + (uint)param_2[0x16]);
        puVar20 = (undefined4 *)((int)puVar20 + (uint)local_14[0x16]);
      } while (iVar10 < *(int *)(param_2 + 10));
    }
  }
  else {
    uVar15 = param_2[0x16] >> 2;
    if (2 < uVar15) {
      uVar15 = 4;
    }
    local_14[0x16] = uVar15 * 4;
    uVar24 = FUN_01153790();
    iVar10 = (int)((ulonglong)uVar24 >> 0x20);
    local_28 = (uint)uVar24;
    local_20 = *(int **)(iVar10 + 0x30);
    local_24 = (int *)((int)local_20 + local_28);
    uVar11 = *(uint *)(iVar10 + 0x34) & 0x3fffffff;
    if ((int)uVar11 < (int)local_24) {
      piVar19 = (int *)(uVar11 * 2);
      piVar13 = local_24;
      if ((int)local_24 < (int)piVar19) {
        piVar13 = piVar19;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,(int *)(iVar10 + 0x2c),piVar13,4);
    }
    *(int *)(iVar10 + 0x30) = *(int *)(iVar10 + 0x30) + local_28;
    puVar16 = (undefined4 *)(*(int *)(iVar10 + 0x2c) + (int)local_20 * 4);
    FUN_01015ea0(puVar16,0,local_28 * 4);
    puVar20 = *(undefined4 **)(param_2 + 0x10);
    iVar10 = 0;
    puVar21 = puVar16;
    local_20 = puVar16;
    if (0 < *(int *)(param_2 + 10)) {
      do {
        *puVar21 = *puVar20;
        puVar21[1] = puVar20[1];
        puVar21[2] = puVar20[2];
        puVar21 = (undefined4 *)((int)puVar21 + (uint)local_14[0x16]);
        iVar10 = iVar10 + 1;
        puVar20 = (undefined4 *)((int)puVar20 + (uint)param_2[0x16]);
      } while (iVar10 < *(int *)(param_2 + 10));
    }
  }
  puVar8 = local_14;
  puVar16 = local_18;
  *(byte *)(local_14 + 0x17) = (byte)param_2[0x17];
  *(undefined4 *)(local_14 + 10) = *(undefined4 *)(param_2 + 10);
  *(byte *)((int)local_14 + 0x2f) = *(byte *)((int)param_2 + 0x2f);
  *(int **)(local_14 + 0x10) = local_20;
  *local_14 = *local_14 ^ (*local_14 ^ *param_2) & 6;
  local_20 = *(int **)(param_2 + 4);
  if (local_20 == (int *)0x0) {
    local_14[4] = 0;
    local_14[5] = 0;
    local_14[3] = 0;
  }
  else {
    if ((*param_2 & 6) == 2) {
      if (param_2[3] == 0) {
        local_24 = local_18 + 0xe;
        if (local_18[0xf] == (local_18[0x10] & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,local_24,1);
        }
        *(char *)(*local_24 + local_24[1]) = (char)*local_20;
        local_24[1] = local_24[1] + 1;
        *(int *)(puVar8 + 4) = *local_24 + -1 + local_24[1];
      }
      else {
        local_20 = *(int **)(param_2 + 10);
        local_28 = local_18[0xf];
        piVar19 = local_18 + 0xe;
        local_24 = (int *)(local_28 + (int)local_20);
        if ((int)(local_18[0x10] & 0x3fffffff) < (int)local_24) {
          piVar13 = (int *)((local_18[0x10] & 0x3fffffff) * 2);
          if ((int)piVar13 <= (int)local_24) {
            piVar13 = local_24;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,piVar19,piVar13,1);
        }
        piVar13 = puVar16 + 0xf;
        *piVar13 = (int)(*piVar13 + (int)local_20);
        iVar14 = *piVar19 + local_28;
        *(int *)(local_14 + 4) = iVar14;
        puVar12 = *(undefined1 **)(param_2 + 4);
        iVar10 = 0;
        if (0 < *(int *)(param_2 + 10)) {
          do {
            *(undefined1 *)(iVar10 + iVar14) = *puVar12;
            iVar10 = iVar10 + 1;
            puVar12 = puVar12 + param_2[3];
          } while (iVar10 < *(int *)(param_2 + 10));
        }
      }
    }
    else if (param_2[3] == 0) {
      local_24 = local_18 + 0x17;
      if (local_18[0x18] == (local_18[0x19] & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,local_24,2);
      }
      *(short *)(*local_24 + local_24[1] * 2) = (short)*local_20;
      local_24[1] = local_24[1] + 1;
      *(int *)(puVar8 + 4) = *local_24 + -2 + local_24[1] * 2;
    }
    else {
      local_28 = *(uint *)(param_2 + 10);
      local_20 = (int *)local_18[0x18];
      piVar19 = local_18 + 0x17;
      local_24 = (int *)((int)local_20 + local_28);
      if ((int)(local_18[0x19] & 0x3fffffff) < (int)local_24) {
        piVar13 = (int *)((local_18[0x19] & 0x3fffffff) * 2);
        if ((int)piVar13 <= (int)local_24) {
          piVar13 = local_24;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,piVar19,piVar13,2);
      }
      piVar13 = puVar16 + 0x18;
      *piVar13 = *piVar13 + local_28;
      iVar10 = *piVar19 + (int)local_20 * 2;
      *(int *)(local_14 + 4) = iVar10;
      puVar17 = *(undefined2 **)(param_2 + 4);
      iVar14 = 0;
      if (0 < *(int *)(param_2 + 10)) {
        do {
          *(undefined2 *)(iVar10 + iVar14 * 2) = *puVar17;
          iVar14 = iVar14 + 1;
          puVar17 = (undefined2 *)((int)puVar17 + (uint)param_2[3]);
        } while (iVar14 < *(int *)(param_2 + 10));
      }
    }
    uVar15 = param_2[3];
    local_14[3] = uVar15;
    if (uVar15 != 0) {
      uVar15 = *local_14 >> 1 & 3;
      if (uVar15 == 1) {
        local_14[3] = 1;
      }
      else if (uVar15 == 2) {
        local_14[3] = 2;
      }
    }
  }
  puVar16 = local_18;
  if (*(int *)(local_14 + 4) != 0) {
    if (*(undefined **)(local_1c + 0xb0) == &DAT_0209dc48) {
      local_28 = local_18[0x15];
      piVar19 = local_18 + 0x14;
      local_24 = (int *)(uint)(*param_2 >> 3);
      iVar10 = local_28 + (int)local_24;
      local_2c = piVar19;
      if ((int)(local_18[0x16] & 0x3fffffff) < iVar10) {
        iVar14 = (local_18[0x16] & 0x3fffffff) * 2;
        if (iVar10 < iVar14) {
          iVar10 = iVar14;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,piVar19,iVar10,8);
      }
      puVar20 = (undefined4 *)(*piVar19 + puVar16[0x15] * 8);
      piVar13 = local_24;
      local_20 = local_24;
      if (0 < (int)local_24) {
        do {
          local_18 = puVar20;
          if (puVar20 != (undefined4 *)0x0) {
            FUN_010066e0("Default");
            *local_18 = 0;
            piVar13 = local_24;
          }
          puVar20 = local_18 + 2;
          local_20 = (int *)((int)local_20 - 1);
          local_18 = puVar20;
        } while (local_20 != (int *)0x0);
      }
      puVar16[0x15] = puVar16[0x15] + (int)piVar13;
      local_20 = *(int **)(param_2 + 6);
      piVar19 = (int *)(*piVar19 + local_28 * 8);
      local_24 = (int *)0x0;
      if ((*param_2 & 0xfff8) != 0) {
        do {
          if (piVar19 == (int *)0x0) {
            piVar13 = (int *)0x0;
          }
          else {
            FUN_010066e0("Default");
            *piVar19 = 0;
            piVar13 = piVar19;
          }
          *piVar13 = *local_20;
          FUN_010067a0(local_20 + 1);
          local_20 = (int *)((int)local_20 + (int)(short)param_2[2]);
          local_24 = (int *)((int)local_24 + 1);
          piVar19 = piVar19 + 2;
        } while ((int)local_24 < (int)(uint)(*param_2 >> 3));
      }
      *(int *)(local_14 + 6) = *local_2c;
      if (param_2[2] == 0) {
        local_14[2] = 0;
        *local_14 = *local_14 & 7 | 8;
      }
      else {
        local_14[2] = 8;
        *local_14 = (*local_14 ^ *param_2) & 7 ^ *param_2;
      }
    }
    else {
      local_20 = (int *)local_18[0x12];
      piVar19 = local_18 + 0x11;
      local_28 = (uint)(*param_2 >> 3);
      local_2c = (int *)((int)local_20 + local_28);
      local_24 = (int *)(local_18[0x13] & 0x3fffffff);
      if ((int)local_24 < (int)local_2c) {
        puVar12 = (undefined1 *)local_2c;
        if ((int)local_2c < (int)local_24 * 2) {
          puVar12 = (undefined1 *)((int)local_24 * 2);
        }
        FUN_0100a210(&PTR_vftable_018e9b94,piVar19,puVar12,0xc);
      }
      puVar16[0x12] = puVar16[0x12] + local_28;
      piVar13 = (int *)(*piVar19 + (int)local_20 * 0xc);
      piVar18 = *(int **)(param_2 + 6);
      local_24 = (int *)0x0;
      local_2c = piVar13;
      if ((*param_2 & 0xfff8) != 0) {
        do {
          puVar2 = *(undefined **)(local_1c + 0xb0);
          *piVar13 = *piVar18;
          if (puVar2 == &DAT_0209d930) {
            *(short *)(piVar13 + 1) = (short)piVar18[1];
            *(undefined2 *)((int)piVar13 + 6) = *(undefined2 *)((int)piVar18 + 6);
            piVar13[2] = piVar18[2];
          }
          else {
            local_2c = (int *)0x3f800000;
            *(undefined2 *)((int)piVar13 + 6) = 0x3f80;
            local_28 = 0;
            *(undefined2 *)(piVar13 + 1) = 0;
          }
          piVar18 = (int *)((int)piVar18 + (int)(short)param_2[2]);
          local_24 = (int *)((int)local_24 + 1);
          piVar13 = piVar13 + 3;
          local_20 = piVar18;
        } while ((int)local_24 < (int)(uint)(*param_2 >> 3));
      }
      *(int *)(local_14 + 6) = *piVar19;
      if (param_2[2] == 0) {
        local_14[2] = 0;
        *local_14 = *local_14 & 7 | 8;
      }
      else {
        local_14[2] = 0xc;
        *local_14 = (*local_14 ^ *param_2) & 7 ^ *param_2;
      }
    }
  }
  puVar8 = local_14;
  iVar10 = local_1c;
  local_50 = *(float *)(local_1c + 0xa0) - *(float *)(local_1c + 0x90);
  fStack_4c = *(float *)(local_1c + 0xa4) - *(float *)(local_1c + 0x94);
  fStack_48 = *(float *)(local_1c + 0xa8) - *(float *)(local_1c + 0x98);
  fStack_44 = *(float *)(local_1c + 0xac) - *(float *)(local_1c + 0x9c);
  local_40 = *(float *)(local_1c + 0x90) + *(float *)(local_1c + 0xa0);
  fStack_3c = *(float *)(local_1c + 0x94) + *(float *)(local_1c + 0xa4);
  fStack_38 = *(float *)(local_1c + 0x98) + *(float *)(local_1c + 0xa8);
  fStack_34 = *(float *)(local_1c + 0x9c) + *(float *)(local_1c + 0xac);
  FUN_01135450(local_14,&local_70);
  fVar1 = *(float *)(iVar10 + 0xe8);
  auVar6._4_4_ = fStack_4c;
  auVar6._0_4_ = local_50;
  auVar6._8_4_ = fStack_48;
  auVar6._12_4_ = fStack_44;
  auVar22._4_4_ = fStack_6c - fVar1;
  auVar22._0_4_ = local_70 - fVar1;
  auVar22._8_4_ = fStack_68 - fVar1;
  auVar22._12_4_ = fStack_64 - fVar1;
  auVar22 = minps(auVar6,auVar22);
  auVar7._4_4_ = fStack_3c;
  auVar7._0_4_ = local_40;
  auVar7._8_4_ = fStack_38;
  auVar7._12_4_ = fStack_34;
  auVar23._4_4_ = fStack_5c + fVar1;
  auVar23._0_4_ = local_60 + fVar1;
  auVar23._8_4_ = fStack_58 + fVar1;
  auVar23._12_4_ = fStack_54 + fVar1;
  auVar23 = maxps(auVar7,auVar23);
  *(float *)(iVar10 + 0xa0) = (auVar23._0_4_ + auVar22._0_4_) * 0.5;
  *(float *)(iVar10 + 0xa4) = (auVar23._4_4_ + auVar22._4_4_) * 0.5;
  *(float *)(iVar10 + 0xa8) = (auVar23._8_4_ + auVar22._8_4_) * 0.5;
  *(float *)(iVar10 + 0xac) = (auVar23._12_4_ + auVar22._12_4_) * 0.5;
  *(float *)(iVar10 + 0x90) = (auVar23._0_4_ - auVar22._0_4_) * 0.5;
  *(float *)(iVar10 + 0x94) = (auVar23._4_4_ - auVar22._4_4_) * 0.5;
  *(float *)(iVar10 + 0x98) = (auVar23._8_4_ - auVar22._8_4_) * 0.5;
  *(float *)(iVar10 + 0x9c) = (auVar23._12_4_ - auVar22._12_4_) * 0.5;
  iVar14 = FUN_011361e0(puVar8,*(int *)(iVar10 + 0xbc) + -1);
  *(int *)(iVar10 + 0xe4) = *(int *)(iVar10 + 0xe4) + iVar14;
  return;
}

// 011543A0  hkpStorageExtendedMeshShape::vf50  size=1144  [run]
int __thiscall hkpStorageExtendedMeshShape::vf50(int param_1,ushort *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  ushort uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  ushort *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 *local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  ushort *local_18;
  int *local_14;
  
  local_20 = param_1;
  local_18 = (ushort *)FUN_01136730();
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  puVar4 = (undefined4 *)(**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x2c);
  puVar4[1] = 0x1002c;
  *puVar4 = ShapeSubpartStorage::vftable;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0x80000000;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0x80000000;
  puVar4[8] = 0;
  puVar4[9] = 0;
  piVar9 = (int *)(param_1 + 0xfc);
  puVar4[10] = 0x80000000;
  if (*(uint *)(param_1 + 0x100) == (*(uint *)(param_1 + 0x104) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar9,4);
  }
  puVar12 = local_18;
  *(undefined4 **)(*piVar9 + *(int *)(param_1 + 0x100) * 4) = puVar4;
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  local_14 = *(int **)(*piVar9 + -4 + *(int *)(param_1 + 0x100) * 4);
  FUN_01137f50(param_2);
  piVar9 = local_14;
  *puVar12 = *puVar12 ^ (*puVar12 ^ *param_2) & 6;
  local_1c = *(undefined4 **)(param_2 + 4);
  if (local_1c == (undefined4 *)0x0) {
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[3] = 0;
  }
  else {
    if ((*param_2 & 6) == 2) {
      if (param_2[3] == 0) {
        if (local_14[3] == (local_14[4] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,local_14 + 2,1);
        }
        *(undefined1 *)(local_14[3] + local_14[2]) = *(undefined1 *)local_1c;
        local_14[3] = local_14[3] + 1;
        *(int *)(puVar12 + 4) = local_14[3] + -1 + local_14[2];
        iVar8 = local_24;
      }
      else {
        local_24 = local_14[3];
        local_1c = *(undefined4 **)(param_2 + 0xc);
        piVar10 = local_14 + 2;
        puVar6 = (undefined1 *)(local_24 + (int)local_1c);
        if ((int)(local_14[4] & 0x3fffffffU) < (int)puVar6) {
          puVar2 = (undefined1 *)((local_14[4] & 0x3fffffffU) * 2);
          if ((int)puVar6 < (int)puVar2) {
            puVar6 = puVar2;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,piVar10,puVar6,1);
        }
        piVar9 = piVar9 + 3;
        *piVar9 = (int)(*piVar9 + (int)local_1c);
        iVar11 = *piVar10 + local_24;
        *(int *)(local_18 + 4) = iVar11;
        puVar6 = *(undefined1 **)(param_2 + 4);
        iVar5 = 0;
        puVar12 = local_18;
        iVar8 = local_24;
        if (0 < (int)local_1c) {
          do {
            *(undefined1 *)(iVar5 + iVar11) = *puVar6;
            iVar5 = iVar5 + 1;
            puVar6 = puVar6 + param_2[3];
          } while (iVar5 < (int)local_1c);
        }
      }
    }
    else if (param_2[3] == 0) {
      if (local_14[9] == (local_14[10] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,local_14 + 8,2);
      }
      *(undefined2 *)(local_14[8] + local_14[9] * 2) = *(undefined2 *)local_1c;
      local_14[9] = local_14[9] + 1;
      *(int *)(puVar12 + 4) = local_14[8] + -2 + local_14[9] * 2;
      iVar8 = local_24;
    }
    else {
      local_1c = (undefined4 *)local_14[9];
      local_24 = *(int *)(param_2 + 0xc);
      piVar10 = local_14 + 8;
      iVar8 = (int)local_1c + local_24;
      if ((int)(local_14[10] & 0x3fffffffU) < iVar8) {
        iVar5 = (local_14[10] & 0x3fffffffU) * 2;
        if (iVar8 < iVar5) {
          iVar8 = iVar5;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,piVar10,iVar8,2);
      }
      iVar8 = *piVar10;
      piVar9 = piVar9 + 9;
      *piVar9 = *piVar9 + local_24;
      iVar8 = iVar8 + (int)local_1c * 2;
      *(int *)(local_18 + 4) = iVar8;
      local_1c = *(undefined4 **)(param_2 + 4);
      iVar5 = 0;
      puVar12 = local_18;
      if (0 < local_24) {
        do {
          *(undefined2 *)(iVar8 + iVar5 * 2) = *(undefined2 *)local_1c;
          local_1c = (undefined4 *)((int)local_1c + (uint)param_2[3]);
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_24);
      }
    }
    local_24 = iVar8;
    uVar7 = param_2[3];
    puVar12[3] = uVar7;
    if (uVar7 != 0) {
      uVar7 = *puVar12 >> 1 & 3;
      if (uVar7 == 1) {
        puVar12[3] = 1;
      }
      else if (uVar7 == 2) {
        puVar12[3] = 2;
      }
    }
  }
  if (*(int *)(puVar12 + 4) != 0) {
    local_28 = (undefined4 *)local_14[6];
    piVar9 = local_14 + 5;
    local_18 = (ushort *)(uint)(*param_2 >> 3);
    local_24 = (int)local_28 + (int)local_18;
    local_1c = (undefined4 *)(local_14[7] & 0x3fffffff);
    local_14 = piVar9;
    if ((int)local_1c < local_24) {
      iVar8 = local_24;
      if (local_24 < (int)local_1c * 2) {
        iVar8 = (int)local_1c * 2;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,piVar9,iVar8,0xc);
    }
    local_14[1] = local_14[1] + (int)local_18;
    puVar4 = (undefined4 *)(*local_14 + (int)local_28 * 0xc);
    local_1c = *(undefined4 **)(param_2 + 6);
    local_18 = (ushort *)0x0;
    local_28 = puVar4;
    if ((*param_2 & 0xfff8) != 0) {
      do {
        puVar1 = *(undefined **)(local_20 + 0xb0);
        *puVar4 = *local_1c;
        if (puVar1 == &DAT_0209d930) {
          *(undefined2 *)(puVar4 + 1) = *(undefined2 *)(local_1c + 1);
          *(undefined2 *)((int)puVar4 + 6) = *(undefined2 *)((int)local_1c + 6);
          puVar4[2] = local_1c[2];
        }
        else {
          local_28 = (undefined4 *)0x3f800000;
          *(undefined2 *)((int)puVar4 + 6) = 0x3f80;
          local_24 = 0;
          *(undefined2 *)(puVar4 + 1) = 0;
        }
        local_1c = (undefined4 *)((int)local_1c + (int)(short)param_2[2]);
        local_18 = (ushort *)((int)local_18 + 1);
        puVar4 = puVar4 + 3;
      } while ((int)local_18 < (int)(uint)(*param_2 >> 3));
    }
    if (param_2[2] == 0) {
      puVar12[2] = 0;
      uVar7 = *puVar12 & 7 | 8;
    }
    else {
      puVar12[2] = 0xc;
      uVar7 = (*puVar12 ^ *param_2) & 7 ^ *param_2;
    }
    *puVar12 = uVar7;
    *(int *)(puVar12 + 6) = *local_14;
  }
  local_50 = *(float *)(local_20 + 0xa0) - *(float *)(local_20 + 0x90);
  fStack_4c = *(float *)(local_20 + 0xa4) - *(float *)(local_20 + 0x94);
  fStack_48 = *(float *)(local_20 + 0xa8) - *(float *)(local_20 + 0x98);
  fStack_44 = *(float *)(local_20 + 0xac) - *(float *)(local_20 + 0x9c);
  local_40 = *(float *)(local_20 + 0x90) + *(float *)(local_20 + 0xa0);
  fStack_3c = *(float *)(local_20 + 0x94) + *(float *)(local_20 + 0xa4);
  fStack_38 = *(float *)(local_20 + 0x98) + *(float *)(local_20 + 0xa8);
  fStack_34 = *(float *)(local_20 + 0x9c) + *(float *)(local_20 + 0xac);
  FUN_01135600(puVar12,local_70);
  iVar8 = local_20;
  auVar13._4_4_ = fStack_3c;
  auVar13._0_4_ = local_40;
  auVar13._8_4_ = fStack_38;
  auVar13._12_4_ = fStack_34;
  auVar13 = maxps(auVar13,local_60);
  auVar14._4_4_ = fStack_4c;
  auVar14._0_4_ = local_50;
  auVar14._8_4_ = fStack_48;
  auVar14._12_4_ = fStack_44;
  auVar14 = minps(auVar14,local_70);
  *(float *)(local_20 + 0xa0) = (auVar13._0_4_ + auVar14._0_4_) * 0.5;
  *(float *)(local_20 + 0xa4) = (auVar13._4_4_ + auVar14._4_4_) * 0.5;
  *(float *)(local_20 + 0xa8) = (auVar13._8_4_ + auVar14._8_4_) * 0.5;
  *(float *)(local_20 + 0xac) = (auVar13._12_4_ + auVar14._12_4_) * 0.5;
  *(float *)(local_20 + 0x90) = (auVar13._0_4_ - auVar14._0_4_) * 0.5;
  *(float *)(local_20 + 0x94) = (auVar13._4_4_ - auVar14._4_4_) * 0.5;
  *(float *)(local_20 + 0x98) = (auVar13._8_4_ - auVar14._8_4_) * 0.5;
  *(float *)(local_20 + 0x9c) = (auVar13._12_4_ - auVar14._12_4_) * 0.5;
  iVar5 = FUN_01135300(puVar12);
  piVar9 = (int *)(iVar8 + 0xe4);
  *piVar9 = *piVar9 + iVar5;
  return *(int *)(iVar8 + 200) + -1;
}

// 01154820  hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape  size=367  [run]
undefined4 * __thiscall
hkpStorageExtendedMeshShape::hkpStorageExtendedMeshShape(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2;
  hkpExtendedMeshShape::hkpExtendedMeshShape
            (*(undefined4 *)(param_2 + 0xe8),*(undefined4 *)(param_2 + 0xb4));
  *param_1 = vftable;
  param_1[4] = vftable;
  iVar6 = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0x80000000;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0x80000000;
  param_1[3] = *(undefined4 *)(iVar1 + 0xc);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(iVar1 + 0x14);
  if (0 < *(int *)(iVar1 + 0xbc)) {
    param_2 = 0;
    do {
      vf4C(*(int *)(iVar1 + 0xb8) + param_2);
      param_2 = param_2 + 0x70;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar1 + 0xbc));
  }
  iVar6 = 0;
  if (0 < *(int *)(iVar1 + 200)) {
    param_2 = 0;
    do {
      vf50(*(int *)(iVar1 + 0xc4) + param_2);
      param_2 = param_2 + 0x40;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(iVar1 + 200));
  }
  uVar2 = param_1[0x36] & 0x3fffffff;
  if ((int)uVar2 < *(int *)(iVar1 + 0xd4)) {
    if (-1 < (int)param_1[0x36]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x34],uVar2 * 2);
    }
    param_2 = *(int *)(iVar1 + 0xd4) * 2;
    uVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    param_1[0x34] = uVar3;
    param_1[0x36] = param_2 / 2;
  }
  iVar6 = *(int *)(iVar1 + 0xd4);
  puVar4 = (undefined2 *)param_1[0x34];
  param_1[0x35] = iVar6;
  if (0 < iVar6) {
    iVar5 = *(int *)(iVar1 + 0xd0) - (int)puVar4;
    do {
      *puVar4 = *(undefined2 *)(iVar5 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(iVar1 + 0xdc);
  FUN_01135a00();
  return param_1;
}

// 01154990  FUN_01154990  size=32  [run]
undefined4 * __thiscall FUN_01154990(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_010067a0(param_2 + 1);
  return param_1;
}

// 011549C0  FUN_011549c0  size=38  [run]
void __thiscall FUN_011549c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)param_2 + 6);
  param_1[2] = param_2[2];
  return;
}

// 011549F0  FUN_011549f0  size=20  [run]
void __thiscall FUN_011549f0(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 01154AD0  FUN_01154ad0  size=15  [run]
int __thiscall FUN_01154ad0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01154B30  FUN_01154b30  size=15  [run]
int __thiscall FUN_01154b30(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01154B70  FUN_01154b70  size=50  [run]
void FUN_01154b70(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        FUN_010066e0("Default");
        *param_1 = 0;
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01154BC0  FUN_01154bc0  size=34  [run]
void FUN_01154bc0(int param_1,int param_2,undefined4 *param_3)

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

// 01154C00  FUN_01154c00  size=34  [run]
void FUN_01154c00(int param_1,int param_2,undefined4 *param_3)

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

// 01154C40  FUN_01154c40  size=29  [run]
void __thiscall FUN_01154c40(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 01154C60  FUN_01154c60  size=26  [run]
void __thiscall FUN_01154c60(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01154C80  FUN_01154c80  size=26  [run]
void __thiscall FUN_01154c80(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01154CD0  FUN_01154cd0  size=19  [run]
int __thiscall FUN_01154cd0(int param_1,int param_2)

{
  return param_2 * 0x40 + *(int *)(param_1 + 0xc4);
}

// 01154CF0  FUN_01154cf0  size=37  [run]
void FUN_01154cf0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01154D20  FUN_01154d20  size=37  [run]
void FUN_01154d20(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01154DE0  FUN_01154de0  size=57  [run]
void __thiscall FUN_01154de0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01154E20  FUN_01154e20  size=57  [run]
void __thiscall FUN_01154e20(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01154E60  FUN_01154e60  size=52  [run]
undefined4 __thiscall FUN_01154e60(int param_1,undefined4 param_2,int param_3)

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

// 01154EA0  FUN_01154ea0  size=52  [run]
undefined4 __thiscall FUN_01154ea0(int param_1,undefined4 param_2,int param_3)

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

// 01154F10  FUN_01154f10  size=58  [run]
void __thiscall FUN_01154f10(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01154F50  FUN_01154f50  size=58  [run]
void __thiscall FUN_01154f50(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01154F90  FUN_01154f90  size=71  [run]
int __thiscall FUN_01154f90(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar3,0xc);
  }
  param_1[1] = param_1[1] + param_3;
  return *param_1 + iVar2 * 0xc;
}

// 01154FE0  FUN_01154fe0  size=121  [run]
int __thiscall FUN_01154fe0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[1];
  iVar3 = iVar1 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    FUN_0100a210(param_2,param_1,iVar2,8);
  }
  puVar4 = (undefined4 *)(*param_1 + param_1[1] * 8);
  iVar3 = param_3;
  if (0 < param_3) {
    do {
      if (puVar4 != (undefined4 *)0x0) {
        FUN_010066e0("Default");
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = param_1[1] + param_3;
  return *param_1 + iVar1 * 8;
}

// 01155060  FUN_01155060  size=64  [run]
void __thiscall FUN_01155060(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011550A0  FUN_011550a0  size=61  [run]
void __thiscall FUN_011550a0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011550E0  FUN_011550e0  size=61  [run]
void __thiscall FUN_011550e0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01155120  FUN_01155120  size=72  [run]
int __thiscall FUN_01155120(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,0xc);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2 * 0xc;
}

// 01155170  FUN_01155170  size=122  [run]
int __thiscall FUN_01155170(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[1];
  iVar3 = iVar1 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,8);
  }
  puVar4 = (undefined4 *)(*param_1 + param_1[1] * 8);
  iVar3 = param_2;
  if (0 < param_2) {
    do {
      if (puVar4 != (undefined4 *)0x0) {
        FUN_010066e0("Default");
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar1 * 8;
}

// 011551F0  FUN_011551f0  size=64  [run]
void __fastcall FUN_011551f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01155230  FUN_01155230  size=61  [run]
void __fastcall FUN_01155230(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01155270  FUN_01155270  size=61  [run]
void __fastcall FUN_01155270(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011552B0  FUN_011552b0  size=64  [run]
void __fastcall FUN_011552b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011552F0  FUN_011552f0  size=61  [run]
void __fastcall FUN_011552f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01155330  FUN_01155330  size=61  [run]
void __fastcall FUN_01155330(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011553B0  FUN_011553b0  size=38  [run]
void FUN_011553b0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 011553E0  hkBaseObject::hkBaseObject_135  size=167  [run]
void __fastcall hkBaseObject::hkBaseObject_135(undefined4 *param_1)

{
  *param_1 = hkpStorageExtendedMeshShape::ShapeSubpartStorage::vftable;
  param_1[9] = 0;
  if (-1 < (int)param_1[10]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[8],(param_1[10] & 0x3fffffff) * 2);
  }
  param_1[8] = 0;
  param_1[10] = 0x80000000;
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],(param_1[7] & 0x3fffffff) * 0xc);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] & 0x3fffffff);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01155490  hkpStorageExtendedMeshShape::ShapeSubpartStorage::vf00  size=52  [run]
int __thiscall hkpStorageExtendedMeshShape::ShapeSubpartStorage::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_135();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 011554D0  hkpStorageExtendedMeshShape::vf00  size=8  [run]
void hkpStorageExtendedMeshShape::vf00(void)

{
  vf00();
  return;
}

// 011554E0  FUN_011554e0  size=38  [run]
void FUN_011554e0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01155510  hkpStorageExtendedMeshShape::vf00  size=52  [run]
int __thiscall hkpStorageExtendedMeshShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkpStorageExtendedMeshShape();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01155550  hkpStorageExtendedMeshShape::MeshSubpartStorage::MeshSubpartStorage  size=97  [run]
void __fastcall
hkpStorageExtendedMeshShape::MeshSubpartStorage::MeshSubpartStorage(undefined4 *param_1)

{
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[4] = 0x80000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x80000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x80000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x80000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x80000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x80000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x80000000;
  return;
}

// 011555C0  FUN_011555c0  size=38  [run]
void FUN_011555c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 011555F0  hkBaseObject::hkBaseObject_139  size=425  [run]
void __fastcall hkBaseObject::hkBaseObject_139(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = hkpStorageExtendedMeshShape::MeshSubpartStorage::vftable;
  param_1[0x18] = 0;
  if (-1 < (int)param_1[0x19]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x17],(param_1[0x19] & 0x3fffffff) * 2);
  }
  param_1[0x17] = 0;
  param_1[0x19] = 0x80000000;
  iVar1 = param_1[0x15];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[0x15] = 0;
  if ((param_1[0x16] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x14],param_1[0x16] * 8);
  }
  param_1[0x14] = 0;
  param_1[0x16] = 0x80000000;
  param_1[0x12] = 0;
  if ((param_1[0x13] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x11],(param_1[0x13] & 0x3fffffff) * 0xc);
  }
  param_1[0x11] = 0;
  param_1[0x13] = 0x80000000;
  param_1[0xf] = 0;
  if ((param_1[0x10] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xe],param_1[0x10] & 0x3fffffff);
  }
  param_1[0xe] = 0;
  param_1[0x10] = 0x80000000;
  param_1[0xc] = 0;
  if ((param_1[0xd] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xb],param_1[0xd] * 4);
  }
  param_1[0xb] = 0;
  param_1[0xd] = 0x80000000;
  param_1[9] = 0;
  if ((param_1[10] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[8],(param_1[10] & 0x3fffffff) * 2);
  }
  param_1[8] = 0;
  param_1[10] = 0x80000000;
  param_1[6] = 0;
  if ((param_1[7] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] & 0x3fffffff);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[3] = 0;
  if ((param_1[4] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 4);
  }
  param_1[4] = 0x80000000;
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 011557A0  hkpStorageExtendedMeshShape::MeshSubpartStorage::vf00  size=52  [run]
int __thiscall hkpStorageExtendedMeshShape::MeshSubpartStorage::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_139();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 011557E0  hkpMultiRayShape::castRayWithCollector  size=3  [run]
void hkpMultiRayShape::castRayWithCollector(void)

{
  return;
}

// 011557F0  hkpMultiRayShape::castRay  size=13  [run]
void hkpMultiRayShape::castRay(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}

// 01155830  hkpMultiRayShape::hkpMultiRayShape  size=32  [run]
undefined4 * __thiscall hkpMultiRayShape::hkpMultiRayShape(undefined4 *param_1,undefined4 param_2)

{
  hkpShape::hkpShape(param_2);
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 2) = 0x21;
  return param_1;
}

// 01155850  hkpMultiRayShape::hkpMultiRayShape  size=366  [run]
undefined4 * __thiscall
hkpMultiRayShape::hkpMultiRayShape(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
  float fVar22;
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x421;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  *param_1 = vftable;
  piVar1 = param_1 + 4;
  *piVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  param_1[7] = param_4;
  iVar4 = param_1[5];
  iVar2 = iVar4 + param_3;
  if ((int)(param_1[6] & 0x3fffffff) < iVar2) {
    iVar8 = (param_1[6] & 0x3fffffff) * 2;
    if (iVar8 <= iVar2) {
      iVar8 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,iVar8,0x20);
  }
  param_1[5] = param_1[5] + param_3;
  pfVar9 = (float *)(iVar4 * 0x20 + *piVar1);
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_2 = param_2 - (int)pfVar9;
    do {
      pfVar3 = (float *)(param_2 + (int)pfVar9);
      fVar11 = pfVar3[1];
      fVar10 = pfVar3[2];
      fVar12 = pfVar3[3];
      *pfVar9 = *pfVar3;
      pfVar9[1] = fVar11;
      pfVar9[2] = fVar10;
      pfVar9[3] = fVar12;
      pfVar3 = (float *)(param_2 + 0x10 + (int)pfVar9);
      fVar10 = *pfVar3;
      fVar12 = pfVar3[1];
      fVar14 = pfVar3[2];
      fVar6 = pfVar3[3];
      pfVar9[4] = fVar10;
      pfVar9[5] = fVar12;
      pfVar9[6] = fVar14;
      pfVar9[7] = fVar6;
      fVar7 = pfVar9[3];
      fVar10 = fVar10 - *pfVar9;
      fVar12 = fVar12 - pfVar9[1];
      fVar14 = fVar14 - pfVar9[2];
      fVar11 = fVar10 * fVar10;
      fVar13 = fVar12 * fVar12;
      fVar15 = fVar14 * fVar14;
      fVar16 = fVar13 + fVar11 + fVar15;
      auVar23._4_4_ = fVar13 + fVar11 + fVar15;
      auVar23._0_4_ = fVar16;
      auVar23._8_4_ = fVar13 + fVar11 + fVar15;
      auVar23._12_4_ = fVar13 + fVar11 + fVar15;
      auVar23 = rsqrtps(in_XMM5,auVar23);
      fVar17 = auVar23._0_4_;
      pfVar9[3] = (float)(~-(uint)(fVar16 <= 0.0) &
                         (uint)((3.0 - fVar17 * fVar16 * fVar17) * fVar17 * 0.5 * fVar16));
      auVar19._4_4_ = fVar11;
      auVar19._0_4_ = fVar11;
      auVar19._8_4_ = fVar11;
      auVar19._12_4_ = fVar11;
      fVar16 = fVar13 + fVar11 + fVar15;
      fVar17 = fVar13 + fVar11 + fVar15;
      fVar18 = fVar13 + fVar11 + fVar15;
      fVar15 = fVar13 + fVar11 + fVar15;
      auVar5._4_4_ = fVar17;
      auVar5._0_4_ = fVar16;
      auVar5._8_4_ = fVar18;
      auVar5._12_4_ = fVar15;
      auVar23 = rsqrtps(auVar19,auVar5);
      fVar13 = auVar23._0_4_;
      fVar20 = auVar23._4_4_;
      fVar21 = auVar23._8_4_;
      fVar22 = auVar23._12_4_;
      in_XMM5._0_4_ = fVar13 * 0.5;
      in_XMM5._4_4_ = fVar20 * 0.5;
      in_XMM5._8_4_ = fVar21 * 0.5;
      in_XMM5._12_4_ = fVar22 * 0.5;
      fVar11 = (float)param_1[7];
      pfVar9[4] = (float)(~-(uint)(fVar16 <= 0.0) &
                         (uint)((3.0 - fVar13 * fVar16 * fVar13) * in_XMM5._0_4_)) * fVar10 * fVar11
                  + pfVar9[4];
      pfVar9[5] = (float)(~-(uint)(fVar17 <= 0.0) &
                         (uint)((3.0 - fVar20 * fVar17 * fVar20) * in_XMM5._4_4_)) * fVar12 * fVar11
                  + pfVar9[5];
      pfVar9[6] = (float)(~-(uint)(fVar18 <= 0.0) &
                         (uint)((3.0 - fVar21 * fVar18 * fVar21) * in_XMM5._8_4_)) * fVar14 * fVar11
                  + pfVar9[6];
      pfVar9[7] = (float)(~-(uint)(fVar15 <= 0.0) &
                         (uint)((3.0 - fVar22 * fVar15 * fVar22) * in_XMM5._12_4_)) *
                  (fVar6 - fVar7) * fVar11 + pfVar9[7];
      pfVar9 = pfVar9 + 8;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return param_1;
}

// 011559D0  hkpMultiRayShape::getAabb  size=374  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
hkpMultiRayShape::getAabb(int param_1,float *param_2,undefined4 param_3,undefined1 (*param_4) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined1 (*pauVar6) [16];
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 (*local_270) [16];
  undefined4 local_26c;
  undefined1 *local_268;
  undefined1 local_260 [512];
  float local_60 [4];
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
  int local_14;
  
  iVar9 = *(int *)(param_1 + 0x14);
  local_270 = (undefined1 (*) [16])local_260;
  local_26c = 0;
  local_268 = &DAT_80000010;
  local_14 = param_1;
  if (0x10 < iVar9) {
    iVar4 = 0x20;
    if (0x1f < iVar9) {
      iVar4 = iVar9;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_270,iVar4,0x20);
  }
  iVar8 = local_14;
  iVar4 = *(int *)(local_14 + 0x10);
  pfVar5 = local_60;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar5 = *param_2;
    param_2 = param_2 + 1;
    pfVar5 = pfVar5 + 1;
  }
  iVar8 = *(int *)(iVar8 + 0x14) * 2 + -1;
  pauVar6 = local_270 + iVar8;
  pfVar5 = (float *)(iVar8 * 0x10 + iVar4);
  do {
    fVar1 = *pfVar5;
    fVar2 = pfVar5[1];
    fVar3 = pfVar5[2];
    *(float *)*pauVar6 = fVar2 * local_50 + fVar1 * local_60[0] + fVar3 * local_40 + local_30;
    *(float *)(*pauVar6 + 4) =
         fVar2 * fStack_4c + fVar1 * local_60[1] + fVar3 * fStack_3c + fStack_2c;
    *(float *)(*pauVar6 + 8) =
         fVar2 * fStack_48 + fVar1 * local_60[2] + fVar3 * fStack_38 + fStack_28;
    *(float *)(*pauVar6 + 0xc) =
         fVar2 * fStack_44 + fVar1 * local_60[3] + fVar3 * fStack_34 + fStack_24;
    pfVar5 = pfVar5 + -4;
    pauVar6 = pauVar6 + -1;
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  auVar10._0_12_ = DAT_017dfce0._0_12_;
  auVar10._12_4_ = 0;
  auVar11._0_12_ = DAT_017dfcf0._0_12_;
  auVar11._12_4_ = 0;
  pauVar6 = local_270;
  if (0 < iVar9) {
    do {
      auVar10 = minps(auVar10,pauVar6[1]);
      auVar11 = maxps(auVar11,pauVar6[1]);
      auVar10 = minps(auVar10,*pauVar6);
      auVar11 = maxps(auVar11,*pauVar6);
      iVar9 = iVar9 + -1;
      pauVar6 = pauVar6 + 2;
    } while (iVar9 != 0);
  }
  *param_4 = auVar10;
  param_4[1] = auVar11;
  local_26c = 0;
  if (-1 < (int)local_268) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_270,(int)local_268 << 5);
  }
  return;
}

// 01155B90  FUN_01155b90  size=15  [run]
int __thiscall FUN_01155b90(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 01155BA0  FUN_01155ba0  size=15  [run]
int __thiscall FUN_01155ba0(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 01155BC0  FUN_01155bc0  size=32  [run]
void __thiscall FUN_01155bc0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01155C10  FUN_01155c10  size=25  [run]
void __thiscall FUN_01155c10(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 01155C30  FUN_01155c30  size=26  [run]
void __thiscall FUN_01155c30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return;
}

// 01155C80  FUN_01155c80  size=32  [run]
void __thiscall FUN_01155c80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01155CA0  FUN_01155ca0  size=60  [run]
void __thiscall FUN_01155ca0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01155CE0  FUN_01155ce0  size=52  [run]
undefined4 __thiscall FUN_01155ce0(int param_1,undefined4 param_2,int param_3)

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

// 01155D30  FUN_01155d30  size=55  [run]
void __thiscall FUN_01155d30(int param_1,undefined4 param_2,int param_3)

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

// 01155D70  FUN_01155d70  size=70  [run]
int __thiscall FUN_01155d70(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar3,0x20);
  }
  param_1[1] = param_1[1] + param_3;
  return iVar2 * 0x20 + *param_1;
}

// 01155DC0  FUN_01155dc0  size=60  [run]
void __fastcall FUN_01155dc0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01155E00  FUN_01155e00  size=56  [run]
void __thiscall FUN_01155e00(int param_1,int param_2)

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

// 01155E40  FUN_01155e40  size=71  [run]
int __thiscall FUN_01155e40(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,0x20);
  }
  param_1[1] = param_1[1] + param_2;
  return iVar2 * 0x20 + *param_1;
}

// 01155E90  FUN_01155e90  size=60  [run]
void __fastcall FUN_01155e90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01155ED0  FUN_01155ed0  size=27  [run]
void __thiscall FUN_01155ed0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 4);
  param_1[1] = param_2;
  param_1[2] = (int)&DAT_80000010;
  return;
}

// 01155EF0  FUN_01155ef0  size=38  [run]
void FUN_01155ef0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01155F20  hkBaseObject::hkBaseObject_133  size=68  [run]
void __fastcall hkBaseObject::hkBaseObject_133(undefined4 *param_1)

{
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] << 5);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01155F70  FUN_01155f70  size=60  [run]
void __fastcall FUN_01155f70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01155FC0  hkpMultiRayShape::vf00  size=111  [run]
undefined4 * __thiscall hkpMultiRayShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] << 5);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01156050  FUN_01156050  size=19  [run]
int __fastcall FUN_01156050(int param_1)

{
  int in_EAX;
  
  if (in_EAX == 1) {
    return param_1 + 2;
  }
  if (in_EAX != 2) {
    return param_1 * 3;
  }
  return param_1 * 2 + 1;
}

// 01156070  hkpStorageMeshShape::SubpartStorage::~SubpartStorage  size=11  [run]
void __fastcall hkpStorageMeshShape::SubpartStorage::~SubpartStorage(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 01156080  hkpStorageMeshShape::hkpStorageMeshShape  size=61  [run]
undefined4 * __thiscall
hkpStorageMeshShape::hkpStorageMeshShape(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  hkpMeshShape::hkpMeshShape(param_2,param_3);
  *param_1 = vftable;
  param_1[4] = vftable;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80000000;
  return param_1;
}

// 011560C0  hkpStorageMeshShape::~hkpStorageMeshShape  size=110  [run]
void __fastcall hkpStorageMeshShape::~hkpStorageMeshShape(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = vftable;
  param_1[4] = vftable;
  if (0 < (int)param_1[0x19]) {
    do {
      FUN_010060a0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0x19]);
  }
  param_1[0x19] = 0;
  if (-1 < (int)param_1[0x1a]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x18],param_1[0x1a] * 4);
  }
  param_1[0x18] = 0;
  param_1[0x1a] = 0x80000000;
  ::hkBaseObject::hkBaseObject_90();
  return;
}

// 01156140  hkpStorageMeshShape::vf4C  size=1485  [run]
void __thiscall hkpStorageMeshShape::vf4C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  undefined2 *puVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  
  puVar2 = param_2;
  piVar1 = (int *)(param_1 + 0x34);
  if (*(uint *)(param_1 + 0x38) == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,0x38);
  }
  iVar14 = *piVar1 + *(int *)(param_1 + 0x38) * 0x38;
  if (iVar14 != 0) {
    *(undefined1 *)(iVar14 + 0x11) = 1;
    *(undefined4 *)(iVar14 + 0x24) = 0;
    *(undefined4 *)(iVar14 + 0x2c) = 0;
    *(undefined4 *)(iVar14 + 0x30) = 1;
    *(undefined4 *)(iVar14 + 0x28) = 0;
    *(undefined4 *)(iVar14 + 0x20) = 0;
    *(undefined4 *)(iVar14 + 0x34) = 0xffffffff;
    *(undefined4 *)(iVar14 + 0x18) = 0;
  }
  iVar14 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = iVar14 + 1;
  piVar1 = (int *)(*piVar1 + iVar14 * 0x38);
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  puVar4 = (undefined4 *)(**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x50);
  puVar4[1] = 0x10050;
  *puVar4 = SubpartStorage::vftable;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0x80000000;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0x80000000;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0x80000000;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0x80000000;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0x80000000;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0x80000000;
  piVar15 = (int *)(param_1 + 0x60);
  if (*(uint *)(param_1 + 100) == (*(uint *)(param_1 + 0x68) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar15,4);
  }
  *(undefined4 **)(*piVar15 + *(int *)(param_1 + 100) * 4) = puVar4;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  iVar11 = *(int *)(*piVar15 + -4 + *(int *)(param_1 + 100) * 4);
  iVar13 = param_2[2];
  iVar6 = *(int *)(iVar11 + 0xc);
  piVar15 = (int *)(iVar11 + 8);
  iVar14 = iVar6 + iVar13 * 3;
  uVar5 = *(uint *)(iVar11 + 0x10) & 0x3fffffff;
  if ((int)uVar5 < iVar14) {
    iVar10 = uVar5 * 2;
    if (iVar10 <= iVar14) {
      iVar10 = iVar14;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar15,iVar10,4);
  }
  *(int *)(iVar11 + 0xc) = *(int *)(iVar11 + 0xc) + iVar13 * 3;
  puVar4 = (undefined4 *)*param_2;
  iVar14 = 0;
  puVar7 = (undefined4 *)(*piVar15 + iVar6 * 4);
  if (0 < (int)param_2[2]) {
    do {
      iVar14 = iVar14 + 1;
      *puVar7 = *puVar4;
      puVar7[1] = puVar4[1];
      puVar7[2] = puVar4[2];
      puVar4 = (undefined4 *)((int)puVar4 + param_2[1]);
      puVar7 = puVar7 + 3;
    } while (iVar14 < (int)param_2[2]);
  }
  *piVar1 = *piVar15;
  piVar1[1] = 0xc;
  piVar1[2] = param_2[2];
  if (*(char *)(param_2 + 4) == '\x01') {
    uVar5 = (uint)param_2[5] >> 1;
    if (2 < uVar5) {
      uVar5 = 3;
    }
    piVar1[5] = uVar5 * 2;
    iVar6 = FUN_01156050();
    iVar13 = *(int *)(iVar11 + 0x18);
    iVar14 = iVar13 + iVar6;
    uVar5 = *(uint *)(iVar11 + 0x1c) & 0x3fffffff;
    if ((int)uVar5 < iVar14) {
      iVar10 = uVar5 * 2;
      if (iVar14 < iVar10) {
        iVar14 = iVar10;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,(int *)(iVar11 + 0x14),iVar14,2);
    }
    *(int *)(iVar11 + 0x18) = *(int *)(iVar11 + 0x18) + iVar6;
    puVar12 = (undefined2 *)param_2[3];
    puVar4 = (undefined4 *)(*(int *)(iVar11 + 0x14) + iVar13 * 2);
    iVar14 = 0;
    puVar7 = puVar4;
    if (0 < (int)param_2[7]) {
      do {
        *(undefined2 *)puVar7 = *puVar12;
        *(undefined2 *)((int)puVar7 + 2) = puVar12[1];
        *(undefined2 *)(puVar7 + 1) = puVar12[2];
        puVar7 = (undefined4 *)((int)puVar7 + piVar1[5]);
        puVar12 = (undefined2 *)((int)puVar12 + param_2[5]);
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)param_2[7]);
    }
  }
  else {
    uVar5 = (uint)param_2[5] >> 2;
    if (2 < uVar5) {
      uVar5 = 3;
    }
    piVar1[5] = uVar5 * 4;
    iVar6 = FUN_01156050();
    iVar13 = *(int *)(iVar11 + 0x24);
    iVar14 = iVar13 + iVar6;
    uVar5 = *(uint *)(iVar11 + 0x28) & 0x3fffffff;
    if ((int)uVar5 < iVar14) {
      iVar10 = uVar5 * 2;
      if (iVar14 < iVar10) {
        iVar14 = iVar10;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,(int *)(iVar11 + 0x20),iVar14,4);
    }
    *(int *)(iVar11 + 0x24) = *(int *)(iVar11 + 0x24) + iVar6;
    puVar7 = (undefined4 *)param_2[3];
    puVar4 = (undefined4 *)(*(int *)(iVar11 + 0x20) + iVar13 * 4);
    iVar14 = 0;
    puVar8 = puVar4;
    if (0 < (int)param_2[7]) {
      do {
        *puVar8 = *puVar7;
        puVar8[1] = puVar7[1];
        puVar8[2] = puVar7[2];
        puVar8 = (undefined4 *)((int)puVar8 + piVar1[5]);
        puVar7 = (undefined4 *)((int)puVar7 + param_2[5]);
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)param_2[7]);
    }
  }
  param_2 = puVar4;
  *(undefined1 *)(piVar1 + 4) = *(undefined1 *)(puVar2 + 4);
  piVar1[7] = puVar2[7];
  piVar1[6] = puVar2[6];
  piVar1[3] = (int)param_2;
  *(undefined1 *)((int)piVar1 + 0x11) = *(undefined1 *)((int)puVar2 + 0x11);
  puVar12 = (undefined2 *)puVar2[8];
  if (puVar12 == (undefined2 *)0x0) {
    piVar1[8] = 0;
    piVar1[9] = 0;
  }
  else {
    if (*(char *)((int)puVar2 + 0x11) == '\x01') {
      piVar15 = (int *)(iVar11 + 0x2c);
      if (puVar2[9] == 0) {
        if (*(uint *)(iVar11 + 0x30) == (*(uint *)(iVar11 + 0x34) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar15,1);
        }
        *(undefined1 *)(*(int *)(iVar11 + 0x30) + *piVar15) = *(undefined1 *)puVar12;
        *(int *)(iVar11 + 0x30) = *(int *)(iVar11 + 0x30) + 1;
        piVar1[8] = *(int *)(iVar11 + 0x30) + -1 + *piVar15;
      }
      else {
        iVar13 = puVar2[7];
        iVar6 = *(int *)(iVar11 + 0x30);
        iVar14 = iVar6 + iVar13;
        uVar5 = *(uint *)(iVar11 + 0x34) & 0x3fffffff;
        if ((int)uVar5 < iVar14) {
          iVar10 = uVar5 * 2;
          if (iVar10 <= iVar14) {
            iVar10 = iVar14;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,piVar15,iVar10,1);
        }
        *(int *)(iVar11 + 0x30) = *(int *)(iVar11 + 0x30) + iVar13;
        iVar6 = *piVar15 + iVar6;
        piVar1[8] = iVar6;
        puVar9 = (undefined1 *)puVar2[8];
        iVar14 = 0;
        if (0 < (int)puVar2[7]) {
          do {
            *(undefined1 *)(iVar14 + iVar6) = *puVar9;
            puVar9 = puVar9 + puVar2[9];
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)puVar2[7]);
        }
      }
    }
    else {
      piVar15 = (int *)(iVar11 + 0x44);
      if (puVar2[9] == 0) {
        if (*(uint *)(iVar11 + 0x48) == (*(uint *)(iVar11 + 0x4c) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar15,2);
        }
        *(undefined2 *)(*piVar15 + *(int *)(iVar11 + 0x48) * 2) = *puVar12;
        *(int *)(iVar11 + 0x48) = *(int *)(iVar11 + 0x48) + 1;
        piVar1[8] = *piVar15 + -2 + *(int *)(iVar11 + 0x48) * 2;
      }
      else {
        iVar13 = puVar2[7];
        iVar6 = *(int *)(iVar11 + 0x48);
        iVar14 = iVar6 + iVar13;
        uVar5 = *(uint *)(iVar11 + 0x4c) & 0x3fffffff;
        if ((int)uVar5 < iVar14) {
          iVar10 = uVar5 * 2;
          if (iVar10 <= iVar14) {
            iVar10 = iVar14;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,piVar15,iVar10,2);
        }
        *(int *)(iVar11 + 0x48) = *(int *)(iVar11 + 0x48) + iVar13;
        iVar14 = *piVar15 + iVar6 * 2;
        piVar1[8] = iVar14;
        puVar12 = (undefined2 *)puVar2[8];
        iVar13 = 0;
        if (0 < (int)puVar2[7]) {
          do {
            *(undefined2 *)(iVar14 + iVar13 * 2) = *puVar12;
            puVar12 = (undefined2 *)((int)puVar12 + puVar2[9]);
            iVar13 = iVar13 + 1;
          } while (iVar13 < (int)puVar2[7]);
        }
      }
    }
    iVar14 = puVar2[9];
    piVar1[9] = iVar14;
    if (iVar14 != 0) {
      if (*(char *)((int)piVar1 + 0x11) == '\x01') {
        piVar1[9] = 1;
      }
      else if (*(char *)((int)piVar1 + 0x11) == '\x02') {
        piVar1[9] = 2;
      }
    }
  }
  if (piVar1[8] == 0) {
    piVar1[0xc] = 1;
    piVar1[10] = (int)&DAT_01701b10;
    piVar1[0xb] = 0;
    piVar1[8] = (int)&DAT_01701b10;
    piVar1[0xd] = puVar2[0xd];
    return;
  }
  piVar15 = (int *)(iVar11 + 0x38);
  if (puVar2[0xb] != 0) {
    iVar13 = puVar2[0xc];
    iVar6 = *(int *)(iVar11 + 0x3c);
    iVar14 = iVar13 + iVar6;
    uVar5 = *(uint *)(iVar11 + 0x40) & 0x3fffffff;
    if ((int)uVar5 < iVar14) {
      iVar10 = uVar5 * 2;
      if (iVar10 <= iVar14) {
        iVar10 = iVar14;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,piVar15,iVar10,4);
    }
    *(int *)(iVar11 + 0x3c) = *(int *)(iVar11 + 0x3c) + iVar13;
    iVar14 = *piVar15;
    puVar4 = (undefined4 *)puVar2[10];
    iVar11 = 0;
    if (0 < (int)puVar2[0xc]) {
      do {
        *(undefined4 *)(iVar14 + iVar6 * 4 + iVar11 * 4) = *puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + puVar2[0xb]);
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)puVar2[0xc]);
    }
    piVar1[0xb] = 4;
    piVar1[0xc] = puVar2[0xc];
    piVar1[10] = *piVar15;
    piVar1[0xd] = puVar2[0xd];
    return;
  }
  puVar4 = (undefined4 *)puVar2[10];
  if (*(uint *)(iVar11 + 0x3c) == (*(uint *)(iVar11 + 0x40) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar15,4);
  }
  *(undefined4 *)(*piVar15 + *(int *)(iVar11 + 0x3c) * 4) = *puVar4;
  *(int *)(iVar11 + 0x3c) = *(int *)(iVar11 + 0x3c) + 1;
  piVar1[0xb] = 0;
  piVar1[0xc] = 1;
  piVar1[10] = *piVar15;
  piVar1[0xd] = puVar2[0xd];
  return;
}

// 01156710  hkpStorageMeshShape::hkpStorageMeshShape  size=122  [run]
undefined4 * __thiscall hkpStorageMeshShape::hkpStorageMeshShape(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  hkpMeshShape::hkpMeshShape(param_2);
  *param_1 = vftable;
  param_1[4] = vftable;
  if ((param_2 != 0) && (iVar3 = 0, 0 < (int)param_1[0xe])) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(param_1[0x18] + iVar3 * 4);
      puVar2 = (undefined4 *)(param_1[0xd] + iVar5);
      *puVar2 = *(undefined4 *)(iVar1 + 8);
      if (*(char *)(puVar2 + 4) == '\x01') {
        uVar4 = *(undefined4 *)(iVar1 + 0x14);
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 0x20);
      }
      puVar2[3] = uVar4;
      if (*(char *)((int)puVar2 + 0x11) == '\x01') {
        uVar4 = *(undefined4 *)(iVar1 + 0x2c);
      }
      else {
        uVar4 = *(undefined4 *)(iVar1 + 0x44);
      }
      puVar2[8] = uVar4;
      iVar3 = iVar3 + 1;
      puVar2[10] = *(undefined4 *)(iVar1 + 0x38);
      iVar5 = iVar5 + 0x38;
    } while (iVar3 < (int)param_1[0xe]);
  }
  return param_1;
}

// 01156790  hkpStorageMeshShape::hkpStorageMeshShape  size=264  [run]
undefined4 * __thiscall hkpStorageMeshShape::hkpStorageMeshShape(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int iVar7;
  int local_8;
  
  iVar3 = param_2;
  hkpMeshShape::hkpMeshShape(*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x30));
  *param_1 = vftable;
  param_1[4] = vftable;
  param_1[0x1a] = 0x80000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  uVar5 = *(undefined4 *)(iVar3 + 0x24);
  uVar1 = *(undefined4 *)(iVar3 + 0x28);
  uVar2 = *(undefined4 *)(iVar3 + 0x2c);
  param_1[8] = *(undefined4 *)(iVar3 + 0x20);
  param_1[9] = uVar5;
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  param_1[3] = *(undefined4 *)(iVar3 + 0xc);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(iVar3 + 0x14);
  local_8 = 0;
  if (0 < *(int *)(iVar3 + 0x38)) {
    param_2 = 0;
    do {
      vf4C(*(int *)(iVar3 + 0x34) + param_2);
      param_2 = param_2 + 0x38;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(iVar3 + 0x38));
  }
  uVar4 = param_1[0x12] & 0x3fffffff;
  if ((int)uVar4 < *(int *)(iVar3 + 0x44)) {
    if (-1 < (int)param_1[0x12]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x10],uVar4 * 2);
    }
    param_2 = *(int *)(iVar3 + 0x44) * 2;
    uVar5 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    param_1[0x10] = uVar5;
    param_1[0x12] = param_2 / 2;
  }
  param_2 = *(int *)(iVar3 + 0x44);
  puVar6 = (undefined2 *)param_1[0x10];
  param_1[0x11] = param_2;
  if (0 < param_2) {
    iVar7 = *(int *)(iVar3 + 0x40) - (int)puVar6;
    do {
      *puVar6 = *(undefined2 *)(iVar7 + (int)puVar6);
      puVar6 = puVar6 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(iVar3 + 0x4c);
  return param_1;
}

// 011568E0  FUN_011568e0  size=15  [run]
int __thiscall FUN_011568e0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01156920  FUN_01156920  size=34  [run]
void FUN_01156920(int param_1,int param_2,undefined4 *param_3)

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

// 01156950  FUN_01156950  size=26  [run]
void __thiscall FUN_01156950(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01156980  FUN_01156980  size=37  [run]
void FUN_01156980(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 011569E0  FUN_011569e0  size=57  [run]
void __thiscall FUN_011569e0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01156A30  FUN_01156a30  size=58  [run]
void __thiscall FUN_01156a30(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01156A70  FUN_01156a70  size=61  [run]
void __thiscall FUN_01156a70(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01156AB0  FUN_01156ab0  size=61  [run]
void __fastcall FUN_01156ab0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01156AF0  FUN_01156af0  size=61  [run]
void __fastcall FUN_01156af0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01156B80  FUN_01156b80  size=38  [run]
void FUN_01156b80(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01156BB0  hkBaseObject::hkBaseObject_128  size=296  [run]
void __fastcall hkBaseObject::hkBaseObject_128(undefined4 *param_1)

{
  *param_1 = hkpStorageMeshShape::SubpartStorage::vftable;
  param_1[0x12] = 0;
  if ((param_1[0x13] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x11],(param_1[0x13] & 0x3fffffff) * 2);
  }
  param_1[0x11] = 0;
  param_1[0x13] = 0x80000000;
  param_1[0xf] = 0;
  if ((param_1[0x10] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xe],param_1[0x10] * 4);
  }
  param_1[0xe] = 0;
  param_1[0x10] = 0x80000000;
  param_1[0xc] = 0;
  if ((param_1[0xd] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xb],param_1[0xd] & 0x3fffffff);
  }
  param_1[0xb] = 0;
  param_1[0xd] = 0x80000000;
  param_1[9] = 0;
  if ((param_1[10] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[8],param_1[10] * 4);
  }
  param_1[8] = 0;
  param_1[10] = 0x80000000;
  param_1[6] = 0;
  if ((param_1[7] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],(param_1[7] & 0x3fffffff) * 2);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[3] = 0;
  if ((param_1[4] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01156CE0  hkpStorageMeshShape::SubpartStorage::vf00  size=52  [run]
int __thiscall hkpStorageMeshShape::SubpartStorage::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_128();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01156D20  hkpStorageMeshShape::vf00  size=8  [run]
void hkpStorageMeshShape::vf00(void)

{
  vf00();
  return;
}

// 01156D30  FUN_01156d30  size=38  [run]
void FUN_01156d30(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01156D60  hkpStorageMeshShape::vf00  size=52  [run]
int __thiscall hkpStorageMeshShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkpStorageMeshShape();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01156DA0  FUN_01156da0  size=18  [run]
int __thiscall FUN_01156da0(int param_1,int param_2)

{
  return (param_2 + 2) * 0x10 + param_1;
}

// 01156DC0  hkpFastMeshShape::vf14  size=235  [run]
void __thiscall hkpFastMeshShape::vf14(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort *puVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  
  piVar4 = *(int **)(param_1 + 0x24);
  puVar11 = (ushort *)(piVar4[5] * param_2 + piVar4[3]);
  pfVar12 = (float *)((uint)*puVar11 * piVar4[1] + *piVar4);
  pfVar14 = (float *)((uint)puVar11[(piVar4[6] & param_2) + 1] * piVar4[1] + *piVar4);
  pfVar13 = (float *)((uint)puVar11[(piVar4[6] & param_2 ^ 1) + 1] * piVar4[1] + *piVar4);
  if (*(int *)(param_1 + 0x34) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined2 *)(*(int *)(param_1 + 0x30) + (piVar4[0xd] + param_2) * 2);
  }
  if (param_3 == (undefined4 *)0x0) {
    param_3 = (undefined4 *)0x0;
  }
  else {
    uVar2 = *(undefined1 *)(param_1 + 0x3c);
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    *(undefined2 *)((int)param_3 + 6) = 1;
    *(undefined2 *)(param_3 + 2) = 0x402;
    param_3[4] = uVar1;
    *(undefined1 *)((int)param_3 + 0x16) = uVar2;
    *(undefined2 *)((int)param_3 + 10) = 0;
    param_3[3] = 0;
    *param_3 = hkpTriangleShape::vftable;
    *(undefined2 *)(param_3 + 5) = uVar3;
    param_3[0x14] = 0;
    param_3[0x15] = 0;
    param_3[0x16] = 0;
    param_3[0x17] = 0;
    *(undefined1 *)((int)param_3 + 0x17) = 0;
  }
  fVar5 = *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar7 = *(float *)(param_1 + 0x1c);
  fVar8 = pfVar12[1];
  fVar9 = pfVar12[2];
  fVar10 = pfVar12[3];
  param_3[8] = *(float *)(param_1 + 0x10) * *pfVar12;
  param_3[9] = fVar5 * fVar8;
  param_3[10] = fVar6 * fVar9;
  param_3[0xb] = fVar7 * fVar10;
  fVar5 = *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar7 = *(float *)(param_1 + 0x1c);
  fVar8 = pfVar14[1];
  fVar9 = pfVar14[2];
  fVar10 = pfVar14[3];
  param_3[0xc] = *(float *)(param_1 + 0x10) * *pfVar14;
  param_3[0xd] = fVar5 * fVar8;
  param_3[0xe] = fVar6 * fVar9;
  param_3[0xf] = fVar7 * fVar10;
  fVar5 = *(float *)(param_1 + 0x14);
  fVar6 = *(float *)(param_1 + 0x18);
  fVar7 = *(float *)(param_1 + 0x1c);
  fVar8 = pfVar13[1];
  fVar9 = pfVar13[2];
  fVar10 = pfVar13[3];
  param_3[0x10] = *(float *)(param_1 + 0x10) * *pfVar13;
  param_3[0x11] = fVar5 * fVar8;
  param_3[0x12] = fVar6 * fVar9;
  param_3[0x13] = fVar7 * fVar10;
  return;
}

// 01156EB0  hkpFastMeshShape::hkpFastMeshShape  size=45  [run]
undefined4 * __thiscall hkpFastMeshShape::hkpFastMeshShape(undefined4 *param_1,int param_2)

{
  hkpMeshShape::hkpMeshShape(param_2);
  *param_1 = vftable;
  param_1[4] = vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 0x1b;
  }
  return param_1;
}

// 01156EE0  hkpFastMeshShape::hkpFastMeshShape  size=46  [run]
undefined4 * __thiscall
hkpFastMeshShape::hkpFastMeshShape(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  hkpMeshShape::hkpMeshShape(param_2,param_3);
  *param_1 = vftable;
  param_1[4] = vftable;
  return param_1;
}

// 01156F10  hkpFastMeshShape::vf00  size=8  [run]
void hkpFastMeshShape::vf00(void)

{
  vf00();
  return;
}

// 01156F20  FUN_01156f20  size=38  [run]
void FUN_01156f20(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01156F60  hkpFastMeshShape::vf00  size=52  [run]
int __thiscall hkpFastMeshShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_90();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01156FA0  FUN_01156fa0  size=8  [run]
undefined4 FUN_01156fa0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01156FB0  hkpConvexPieceMeshShape::vf08  size=3  [run]
undefined4 hkpConvexPieceMeshShape::vf08(void)

{
  return 0;
}

// 01156FC0  FUN_01156fc0  size=65  [run]
void FUN_01156fc0(undefined4 param_1,int *param_2,uint param_3)

{
  *(bool *)param_1 =
       (param_2[*param_2 + param_3 / 0x1f + 1] &
       1 << ((char)param_3 + (char)(param_3 / 0x1f) & 0x1fU)) != 0;
  return;
}

// 01157020  hkpConvexPieceMeshShape::hkpConvexPieceMeshShape  size=70  [run]
undefined4 * __thiscall
hkpConvexPieceMeshShape::hkpConvexPieceMeshShape
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  hkpShapeCollection::hkpShapeCollection(0x12,3);
  *param_1 = vftable;
  param_1[4] = vftable;
  param_1[6] = param_3;
  param_1[7] = param_2;
  param_1[8] = param_4;
  FUN_01006000();
  FUN_01006000();
  return param_1;
}

// 01157070  hkBaseObject::hkBaseObject  size=47  [run]
void __fastcall hkBaseObject::hkBaseObject(undefined4 *param_1)

{
  *param_1 = hkpConvexPieceMeshShape::vftable;
  param_1[4] = hkpConvexPieceMeshShape::vftable;
  FUN_010060a0();
  FUN_010060a0();
  param_1[4] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  return;
}

// 011570A0  hkpConvexPieceMeshShape::vf0C  size=27  [run]
int __thiscall hkpConvexPieceMeshShape::vf0C(int param_1,int param_2)

{
  param_2 = param_2 + 1;
  if (*(int *)(*(int *)(param_1 + 8) + 0x24) + *(int *)(*(int *)(param_1 + 8) + 0x18) <= param_2) {
    param_2 = -1;
  }
  return param_2;
}

// 011570C0  hkpConvexPieceMeshShape::vf14  size=390  [run]
int __thiscall hkpConvexPieceMeshShape::vf14(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 local_230 [516];
  undefined4 *local_2c;
  undefined1 local_25;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  
  local_18 = param_1;
  if (param_3 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = hkpShapeContainer::hkpShapeContainer_3(*(undefined4 *)(param_1 + 0x10));
  }
  *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(param_1 + 0xc);
  iVar7 = *(int *)(param_1 + 8);
  if (param_2 < *(uint *)(iVar7 + 0x18)) {
    iVar9 = *(int *)(*(int *)(iVar7 + 0x14) + param_2 * 4);
    iVar2 = *(int *)(*(int *)(iVar7 + 8) + iVar9 * 4);
    local_24 = *(int *)(iVar7 + 8) + iVar9 * 4;
    *(int *)(iVar6 + 0x24) = local_24 + 4;
    local_2c = (undefined4 *)(param_3 + 0x3bU & 0xfffffff0);
    *(undefined4 **)(iVar6 + 0x18) = local_2c;
    *(int *)(iVar6 + 0x28) = iVar2;
    *(undefined4 *)(iVar6 + 0x1c) = 0;
    local_20 = 0;
    if (0 < iVar2) {
      local_14 = 0;
      do {
        iVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x10) + 0x14))
                          (*(undefined4 *)(*(int *)(iVar6 + 0x24) + local_20 * 4),local_230);
        iVar9 = 0;
        local_1c = (undefined4 *)(iVar7 + 0x20);
        do {
          pcVar8 = (char *)FUN_01156fc0(&local_25,local_24,local_14 + iVar9);
          if (*pcVar8 != '\0') {
            uVar3 = local_1c[1];
            uVar4 = local_1c[2];
            uVar5 = local_1c[3];
            *local_2c = *local_1c;
            local_2c[1] = uVar3;
            local_2c[2] = uVar4;
            local_2c[3] = uVar5;
            local_2c = local_2c + 4;
            *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
          }
          local_1c = local_1c + 4;
          iVar9 = iVar9 + 1;
        } while (iVar9 < 3);
        local_14 = local_14 + 3;
        local_20 = local_20 + 1;
        param_1 = local_18;
      } while (local_20 < *(int *)(iVar6 + 0x28));
      return iVar6;
    }
  }
  else {
    *(undefined4 *)(iVar6 + 0x28) = 1;
    puVar1 = (undefined4 *)
             (*(int *)(*(int *)(param_1 + 8) + 0x20) +
             (param_2 - *(int *)(*(int *)(param_1 + 8) + 0x18)) * 4);
    *(undefined4 **)(iVar6 + 0x24) = puVar1;
    puVar10 = (undefined4 *)(param_3 + 0x3bU & 0xfffffff0);
    *(undefined4 **)(iVar6 + 0x18) = puVar10;
    *(undefined4 *)(iVar6 + 0x1c) = 3;
    local_24 = *puVar1;
    iVar7 = (**(code **)(*(int *)(*(int *)(local_18 + 0xc) + 0x10) + 0x14))(local_24,local_230);
    uVar3 = *(undefined4 *)(iVar7 + 0x24);
    uVar4 = *(undefined4 *)(iVar7 + 0x28);
    uVar5 = *(undefined4 *)(iVar7 + 0x2c);
    *puVar10 = *(undefined4 *)(iVar7 + 0x20);
    puVar10[1] = uVar3;
    puVar10[2] = uVar4;
    puVar10[3] = uVar5;
    uVar3 = *(undefined4 *)(iVar7 + 0x34);
    uVar4 = *(undefined4 *)(iVar7 + 0x38);
    uVar5 = *(undefined4 *)(iVar7 + 0x3c);
    puVar10[4] = *(undefined4 *)(iVar7 + 0x30);
    puVar10[5] = uVar3;
    puVar10[6] = uVar4;
    puVar10[7] = uVar5;
    uVar3 = *(undefined4 *)(iVar7 + 0x44);
    uVar4 = *(undefined4 *)(iVar7 + 0x48);
    uVar5 = *(undefined4 *)(iVar7 + 0x4c);
    puVar10[8] = *(undefined4 *)(iVar7 + 0x40);
    puVar10[9] = uVar3;
    puVar10[10] = uVar4;
    puVar10[0xb] = uVar5;
  }
  return iVar6;
}

// 01157250  hkpConvexPieceMeshShape::vf10  size=76  [run]
void __thiscall hkpConvexPieceMeshShape::vf10(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 < *(uint *)(iVar1 + 0x18)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x10) + 0x10))
              (*(undefined4 *)
                (*(int *)(iVar1 + 8) + 4 + *(int *)(*(int *)(iVar1 + 0x14) + param_2 * 4) * 4));
    return;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 0x10) + 0x10))
            (*(undefined4 *)(*(int *)(iVar1 + 0x20) + (param_2 - *(int *)(iVar1 + 0x18)) * 4));
  return;
}

// 011572A0  hkpConvexPieceMeshShape::getAabb  size=178  [run]
void __thiscall
hkpConvexPieceMeshShape::getAabb
          (int param_1,undefined4 param_2,undefined4 param_3,undefined1 (*param_4) [16])

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 local_230 [512];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  *(undefined4 *)*param_4 = 0x7f7fffee;
  *(undefined4 *)(*param_4 + 4) = 0x7f7fffee;
  *(undefined4 *)(*param_4 + 8) = 0x7f7fffee;
  *(undefined4 *)(*param_4 + 0xc) = 0;
  piVar1 = (int *)(param_1 + 0x10);
  *(undefined4 *)param_4[1] = 0xff7fffee;
  *(undefined4 *)(param_4[1] + 4) = 0xff7fffee;
  *(undefined4 *)(param_4[1] + 8) = 0xff7fffee;
  *(undefined4 *)(param_4[1] + 0xc) = 0;
  for (iVar2 = (**(code **)(*piVar1 + 8))(); iVar2 != -1;
      iVar2 = (**(code **)(*piVar1 + 0xc))(iVar2)) {
    piVar3 = (int *)(**(code **)(*piVar1 + 0x14))(iVar2,local_230);
    (**(code **)(*piVar3 + 0x10))(param_2,param_3,local_30);
    auVar4 = minps(*param_4,local_30);
    *param_4 = auVar4;
    auVar4 = maxps(param_4[1],local_20);
    param_4[1] = auVar4;
  }
  return;
}

// 01157360  FUN_01157360  size=114  [run]
void __thiscall FUN_01157360(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_2 = *param_2 + *(int *)(*(int *)(param_1 + 0x18) + 0x24);
  param_2[1] = param_2[1] + *(int *)(*(int *)(param_1 + 0x18) + 0x24);
  iVar3 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x18) + 0x18)) {
    iVar2 = param_2[3];
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 8) +
                      *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x14) + iVar3 * 4) * 4);
      *param_2 = *param_2 + iVar1;
      if (iVar2 <= iVar1) {
        iVar2 = iVar1;
      }
      param_2[3] = iVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)(param_1 + 0x18) + 0x18));
  }
  param_2[1] = param_2[1] + *(int *)(*(int *)(param_1 + 0x18) + 0x18);
  param_2[2] = (int)((float)*param_2 / (float)param_2[1]);
  return;
}

// 011573E0  hkpConvexPieceMeshShape::hkpConvexPieceMeshShape  size=45  [run]
undefined4 * __thiscall
hkpConvexPieceMeshShape::hkpConvexPieceMeshShape(undefined4 *param_1,int param_2)

{
  hkpShapeCollection::hkpShapeCollection(param_2);
  *param_1 = vftable;
  param_1[4] = vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 0x12;
  }
  return param_1;
}

// 01157410  hkpConvexPieceMeshShape::vf00  size=8  [run]
void hkpConvexPieceMeshShape::vf00(void)

{
  vf00();
  return;
}

// 01157420  FUN_01157420  size=38  [run]
void FUN_01157420(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01157450  hkpConvexPieceMeshShape::vf00  size=52  [run]
int __thiscall hkpConvexPieceMeshShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01157490  hkpTransformShape::getAabb  size=83  [run]
void __thiscall
hkpTransformShape::getAabb(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_50 [64];
  
  FUN_01004cf0(param_2,param_1 + 0x30);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(local_50,param_3,param_4);
  return;
}

// 011574F0  hkpTransformShape::vf38  size=4  [run]
int __fastcall hkpTransformShape::vf38(int param_1)

{
  return param_1 + 0x10;
}

// 01157500  hkpTransformShape::vf40  size=83  [run]
int __thiscall hkpTransformShape::vf40(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x40))(param_2,param_3 + -0x70);
  if ((-1 < iVar1) && (iVar1 <= param_3 + -0x70)) {
    if (*(int *)(param_1 + 0x14) == param_1 + 0x70) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      return iVar1 + 0x70;
    }
    *(int *)(param_1 + 0x18) = iVar1;
    return 0x70;
  }
  return -1;
}

// 01157560  hkpSingleShapeContainer::hkpSingleShapeContainer  size=39  [run]
undefined4 * __thiscall
hkpSingleShapeContainer::hkpSingleShapeContainer(undefined4 *param_1,undefined4 param_2)

{
  hkpShape::hkpShape(param_2);
  *param_1 = hkpTransformShape::vftable;
  param_1[4] = vftable;
  *(undefined1 *)(param_1 + 2) = 0xe;
  return param_1;
}

// 01157590  hkpTransformShape::getMaximumProjection  size=240  [run]
float10 __thiscall hkpTransformShape::getMaximumProjection(int param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_28 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  local_30._0_4_ = (float)uVar1;
  local_30._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  local_40._0_4_ = (float)uVar2;
  local_40._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  local_50 = (float)*(undefined8 *)(param_1 + 0x50);
  fStack_4c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  fStack_48 = (float)*(undefined8 *)(param_1 + 0x58);
  fStack_44 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar9 = fVar4 * fStack_4c;
  fVar7 = fVar3 * local_50;
  fVar8 = fVar3 * fStack_4c;
  _local_50 = CONCAT44(fVar4 * local_40._4_4_ + fVar3 * (float)local_40 + fVar5 * (float)uStack_38,
                       fVar4 * local_30._4_4_ + fVar3 * (float)local_30 + fVar5 * (float)uStack_28);
  _fStack_48 = CONCAT44(fVar4 * fStack_44 + fVar8 + fVar5 * fStack_44,
                        fVar9 + fVar7 + fVar5 * fStack_48);
  local_40 = uVar2;
  local_30 = uVar1;
  fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x14) + 0x3c))(&local_50);
  return fVar6 + (float10)(*(float *)(param_1 + 100) * param_2[1] +
                           *(float *)(param_1 + 0x60) * *param_2 +
                          *(float *)(param_1 + 0x68) * param_2[2]);
}

// 01157680  hkpTransformShape::castRay  size=596  [run]
char * __thiscall
hkpTransformShape::castRay(int param_1,char *param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  LPVOID pvVar9;
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
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_14;
  
  pvVar9 = TlsGetValue(DAT_01f8fc54);
  puVar5 = *(undefined4 **)((int)pvVar9 + 4);
  if (puVar5 < *(undefined4 **)((int)pvVar9 + 0xc)) {
    *puVar5 = "TtrcTransform";
    uVar6 = rdtsc();
    local_14 = (undefined4)uVar6;
    puVar5[1] = local_14;
    *(undefined4 **)((int)pvVar9 + 4) = puVar5 + 3;
  }
  local_30._0_4_ = (float)*(undefined8 *)(param_1 + 0x30);
  local_30._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  uStack_28._0_4_ = (float)*(undefined8 *)(param_1 + 0x38);
  fVar8 = (float)uStack_28;
  local_40._0_4_ = (float)*(undefined8 *)(param_1 + 0x40);
  local_40._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  uStack_38._0_4_ = (float)*(undefined8 *)(param_1 + 0x48);
  fVar7 = (float)uStack_38;
  local_50._0_4_ = (float)*(undefined8 *)(param_1 + 0x50);
  local_50._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  uStack_48._0_4_ = (float)*(undefined8 *)(param_1 + 0x58);
  uStack_48._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
  local_60 = *(undefined8 *)(param_3 + 8);
  local_58 = *(undefined8 *)(param_3 + 10);
  fVar10 = *param_3 - *(float *)(param_1 + 0x60);
  fVar12 = param_3[1] - *(float *)(param_1 + 100);
  fVar14 = param_3[2] - *(float *)(param_1 + 0x68);
  fVar19 = fVar12 * local_30._4_4_;
  fVar20 = fVar12 * local_40._4_4_;
  fVar21 = fVar12 * local_50._4_4_;
  fVar16 = fVar10 * (float)local_30;
  fVar17 = fVar10 * (float)local_40;
  fVar18 = fVar10 * (float)local_50;
  fVar10 = fVar10 * local_50._4_4_;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  local_40._0_4_ = (float)uVar2;
  local_40._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  local_30._0_4_ = (float)uVar3;
  local_30._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  uStack_28._0_4_ = (float)uVar4;
  uStack_28._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  fVar22 = (float)uStack_48 * fVar14;
  fVar11 = param_3[4] - *(float *)(param_1 + 0x60);
  fVar13 = param_3[5] - *(float *)(param_1 + 100);
  fVar15 = param_3[6] - *(float *)(param_1 + 0x68);
  local_50._0_4_ = (float)uVar6;
  local_50._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
  uStack_48._0_4_ = (float)uVar1;
  _local_80 = CONCAT44(fVar20 + fVar17 + fVar7 * fVar14,fVar19 + fVar16 + fVar8 * fVar14);
  _fStack_78 = CONCAT44(fVar12 * uStack_48._4_4_ + fVar10 + uStack_48._4_4_ * fVar14,
                        fVar21 + fVar18 + fVar22);
  param_4[0x10] = (float)((int)param_4[0x10] + 1);
  _local_70 = CONCAT44(fVar13 * local_40._4_4_ + fVar11 * (float)local_40 +
                       (float)uStack_38 * fVar15,
                       fVar13 * local_50._4_4_ + fVar11 * (float)local_50 +
                       (float)uStack_48 * fVar15);
  _fStack_68 = CONCAT44(fVar13 * uStack_28._4_4_ + fVar11 * local_30._4_4_ +
                        uStack_28._4_4_ * fVar15,
                        fVar13 * local_30._4_4_ + fVar11 * (float)local_30 +
                        (float)uStack_28 * fVar15);
  local_50 = uVar6;
  uStack_48 = uVar1;
  local_40 = uVar2;
  local_30 = uVar3;
  uStack_28 = uVar4;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))(param_2,&local_80,param_4);
  param_4[0x10] = (float)((int)param_4[0x10] + -1);
  if (*param_2 != '\0') {
    uVar6 = *(undefined8 *)param_4;
    uStack_48 = *(undefined8 *)(param_4 + 2);
    local_50._0_4_ = (float)uVar6;
    local_50._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
    fVar7 = *(float *)(param_1 + 0x34);
    fVar8 = *(float *)(param_1 + 0x38);
    fVar10 = *(float *)(param_1 + 0x3c);
    fVar11 = *(float *)(param_1 + 0x44);
    fVar12 = *(float *)(param_1 + 0x48);
    fVar13 = *(float *)(param_1 + 0x4c);
    fVar14 = *(float *)(param_1 + 0x54);
    fVar15 = *(float *)(param_1 + 0x58);
    fVar16 = *(float *)(param_1 + 0x5c);
    *param_4 = (float)local_50 * *(float *)(param_1 + 0x30) +
               local_50._4_4_ * *(float *)(param_1 + 0x40) +
               (float)uStack_48 * *(float *)(param_1 + 0x50);
    param_4[1] = (float)local_50 * fVar7 + local_50._4_4_ * fVar11 + (float)uStack_48 * fVar14;
    param_4[2] = (float)local_50 * fVar8 + local_50._4_4_ * fVar12 + (float)uStack_48 * fVar15;
    param_4[3] = (float)local_50 * fVar10 + local_50._4_4_ * fVar13 + (float)uStack_48 * fVar16;
    param_4[(int)param_4[0x10] + 8] = 0.0;
    local_50 = uVar6;
  }
  pvVar9 = TlsGetValue(DAT_01f8fc54);
  puVar5 = *(undefined4 **)((int)pvVar9 + 4);
  if (puVar5 < *(undefined4 **)((int)pvVar9 + 0xc)) {
    *puVar5 = &DAT_0164b09c;
    uVar6 = rdtsc();
    puVar5[1] = (int)uVar6;
    *(undefined4 **)((int)pvVar9 + 4) = puVar5 + 3;
  }
  return param_2;
}

// 011578E0  hkpTransformShape::castRayWithCollector  size=551  [run]
void __thiscall
hkpTransformShape::castRayWithCollector(int param_1,float *param_2,int param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  LPVOID pvVar8;
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
  undefined1 local_d0 [64];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  int *local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  int local_18;
  undefined4 local_14;
  
  pvVar8 = TlsGetValue(DAT_01f8fc54);
  puVar4 = *(undefined4 **)((int)pvVar8 + 4);
  if (puVar4 < *(undefined4 **)((int)pvVar8 + 0xc)) {
    *puVar4 = "TtrcTransform";
    uVar5 = rdtsc();
    local_14 = (undefined4)uVar5;
    puVar4[1] = local_14;
    *(undefined4 **)((int)pvVar8 + 4) = puVar4 + 3;
  }
  local_60._0_4_ = (float)*(undefined8 *)(param_1 + 0x30);
  local_60._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  uStack_58._0_4_ = (float)*(undefined8 *)(param_1 + 0x38);
  fVar6 = (float)uStack_58;
  local_40._0_4_ = (float)*(undefined8 *)(param_1 + 0x40);
  local_40._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  uStack_38._0_4_ = (float)*(undefined8 *)(param_1 + 0x48);
  fVar7 = (float)uStack_38;
  local_50._0_4_ = (float)*(undefined8 *)(param_1 + 0x50);
  local_50._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  uStack_48._0_4_ = (float)*(undefined8 *)(param_1 + 0x58);
  uStack_48._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
  local_70 = *(undefined8 *)(param_2 + 8);
  local_68 = *(undefined8 *)(param_2 + 10);
  fVar9 = *param_2 - *(float *)(param_1 + 0x60);
  fVar11 = param_2[1] - *(float *)(param_1 + 100);
  fVar13 = param_2[2] - *(float *)(param_1 + 0x68);
  fVar18 = fVar11 * local_60._4_4_;
  fVar19 = fVar11 * local_40._4_4_;
  fVar20 = fVar11 * local_50._4_4_;
  fVar15 = fVar9 * (float)local_60;
  fVar16 = fVar9 * (float)local_40;
  fVar17 = fVar9 * (float)local_50;
  fVar9 = fVar9 * local_50._4_4_;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  local_40._0_4_ = (float)uVar1;
  local_40._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  local_60._0_4_ = (float)uVar2;
  local_60._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  uStack_58._0_4_ = (float)uVar3;
  uStack_58._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  fVar21 = (float)uStack_48 * fVar13;
  fVar10 = param_2[4] - *(float *)(param_1 + 0x60);
  fVar12 = param_2[5] - *(float *)(param_1 + 100);
  fVar14 = param_2[6] - *(float *)(param_1 + 0x68);
  local_50._0_4_ = (float)uVar5;
  local_50._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  uStack_48._0_4_ = (float)*(undefined8 *)(param_1 + 0x38);
  _local_90 = CONCAT44(fVar19 + fVar16 + fVar7 * fVar13,fVar18 + fVar15 + fVar6 * fVar13);
  _fStack_88 = CONCAT44(fVar11 * uStack_48._4_4_ + fVar9 + uStack_48._4_4_ * fVar13,
                        fVar20 + fVar17 + fVar21);
  _local_80 = CONCAT44(fVar12 * local_40._4_4_ + fVar10 * (float)local_40 +
                       (float)uStack_38 * fVar14,
                       fVar12 * local_50._4_4_ + fVar10 * (float)local_50 +
                       (float)uStack_48 * fVar14);
  _fStack_78 = CONCAT44(fVar12 * uStack_58._4_4_ + fVar10 * local_60._4_4_ +
                        uStack_58._4_4_ * fVar14,
                        fVar12 * local_60._4_4_ + fVar10 * (float)local_60 +
                        (float)uStack_58 * fVar14);
  local_60 = uVar2;
  uStack_58 = uVar3;
  local_50 = uVar5;
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  local_40 = uVar1;
  FUN_01004cf0(*(undefined4 *)(param_3 + 8),(undefined8 *)(param_1 + 0x30));
  local_1c = local_d0;
  local_24 = *(int **)(param_1 + 0x14);
  local_18 = param_3;
  local_20 = 0;
  (**(code **)(*local_24 + 0x18))(&local_90,&local_24,param_4);
  pvVar8 = TlsGetValue(DAT_01f8fc54);
  puVar4 = *(undefined4 **)((int)pvVar8 + 4);
  if (puVar4 < *(undefined4 **)((int)pvVar8 + 0xc)) {
    *puVar4 = &DAT_0164b09c;
    uVar5 = rdtsc();
    puVar4[1] = (int)uVar5;
    *(undefined4 **)((int)pvVar8 + 4) = puVar4 + 3;
  }
  return;
}

// 01157B10  FUN_01157b10  size=52  [run]
void __thiscall FUN_01157b10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(param_1 + 0x40) = param_2[4];
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x50) = param_2[8];
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(undefined4 *)(param_1 + 0x60) = param_2[0xc];
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  FUN_010087a0((undefined4 *)(param_1 + 0x30));
  return;
}

// 01157B50  hkpSingleShapeContainer::hkpSingleShapeContainer  size=72  [run]
undefined4 * __thiscall
hkpSingleShapeContainer::hkpSingleShapeContainer
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x40e;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  *param_1 = hkpTransformShape::vftable;
  param_1[4] = vftable;
  param_1[5] = param_2;
  FUN_01006000();
  FUN_01157b10(param_3);
  return param_1;
}

// 01157BA0  hkBaseObject::hkBaseObject_121  size=37  [run]
void __fastcall hkBaseObject::hkBaseObject_121(undefined4 *param_1)

{
  param_1[4] = hkpSingleShapeContainer::vftable;
  if (param_1[5] != 0) {
    FUN_010060a0();
  }
  param_1[4] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  return;
}

// 01157BD0  FUN_01157bd0  size=38  [run]
void FUN_01157bd0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01157C00  hkpTransformShape::vf00  size=79  [run]
undefined4 * __thiscall hkpTransformShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[4] = hkpSingleShapeContainer::vftable;
  if (param_1[5] != 0) {
    FUN_010060a0();
  }
  param_1[4] = hkpShapeContainer::vftable;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01157C60  FUN_01157c60  size=8  [run]
undefined1 FUN_01157c60(undefined1 param_1)

{
  return param_1;
}

// 01157CA0  FUN_01157ca0  size=58  [run]
void __thiscall FUN_01157ca0(int param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      puVar1 = (uint *)(*(int *)(param_1 + 0xc) + iVar4 * 4);
      pbVar3 = (byte *)((*puVar1 >> 8) + *(int *)(param_2 + 0x20));
      iVar4 = iVar4 + 1;
      bVar2 = *pbVar3;
      *(undefined1 *)puVar1 = 0;
      *puVar1 = *puVar1 | (uint)bVar2;
      *pbVar3 = 0;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  return;
}

// 01157CE0  FUN_01157ce0  size=49  [run]
void __thiscall FUN_01157ce0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      iVar1 = iVar3 * 4;
      iVar2 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      *(undefined1 *)((*(uint *)(*(int *)(param_1 + 0xc) + iVar1) >> 8) + *(int *)(param_2 + 0x20))
           = *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar2);
    } while (iVar3 < *(int *)(param_1 + 0x10));
  }
  return;
}

// 01157D20  hkpRemoveTerminalsMoppModifier::vf04  size=51  [run]
void __thiscall hkpRemoveTerminalsMoppModifier::vf04(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = (*(undefined4 **)(param_1 + 0x10))[1];
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)**(undefined4 **)(param_1 + 0x10);
    do {
      if (*piVar3 == param_3) goto LAB_01157d44;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  iVar2 = -1;
LAB_01157d44:
  *(bool *)param_2 = -1 < iVar2;
  return;
}

// 01157D60  hkpRemoveTerminalsMoppModifier2::vf04  size=38  [run]
void __thiscall hkpRemoveTerminalsMoppModifier2::vf04(int param_1,byte *param_2,int param_3)

{
  *param_2 = ~(byte)(*(uint *)(**(int **)(param_1 + 0x14) + (param_3 >> 5) * 4) >>
                    ((byte)param_3 & 0x1f)) & 1;
  return;
}

// 01157D90  hkpRemoveTerminalsMoppModifier::vf08  size=69  [run]
void __thiscall hkpRemoveTerminalsMoppModifier::vf08(int param_1,int param_2)

{
  uint *puVar1;
  
  if (*(uint *)(param_1 + 8) == (*(uint *)(param_1 + 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 4),4);
  }
  puVar1 = (uint *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(byte *)puVar1 = 0;
  *puVar1 = (uint)(byte)*puVar1 | param_2 << 8;
  return;
}

// 01157F00  hkpMoppModifier::hkpMoppModifier  size=95  [run]
undefined4 * __thiscall
hkpMoppModifier::hkpMoppModifier
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = vftable;
  param_1[2] = hkpRemoveTerminalsMoppModifier::vftable;
  *param_1 = hkpRemoveTerminalsMoppModifier::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  param_1[6] = param_4;
  FUN_0120ef30(param_2,param_3,param_1 + 2);
  param_1[6] = 0;
  return param_1;
}

// 01157F60  hkBaseObject::hkBaseObject_123  size=89  [run]
void __fastcall hkBaseObject::hkBaseObject_123(undefined4 *param_1)

{
  *param_1 = hkpRemoveTerminalsMoppModifier::vftable;
  param_1[2] = hkpRemoveTerminalsMoppModifier::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  param_1[2] = hkpMoppModifier::vftable;
  *param_1 = vftable;
  return;
}

// 01158050  FUN_01158050  size=52  [run]
int __thiscall FUN_01158050(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(*param_1 + param_3 * 4);
    do {
      if (*piVar1 == *param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 1;
    } while (param_3 < param_4);
  }
  return -1;
}

// 01158090  FUN_01158090  size=28  [run]
uint __thiscall FUN_01158090(int *param_1,int param_2)

{
  return *(uint *)(*param_1 + (param_2 >> 5) * 4) >> ((byte)param_2 & 0x1f) & 1;
}

// 011580B0  FUN_011580b0  size=51  [run]
int __thiscall FUN_011580b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 4;
}

// 011580F0  FUN_011580f0  size=46  [run]
int __fastcall FUN_011580f0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 4;
}

// 01158160  hkpRemoveTerminalsMoppModifier2::vf00  size=8  [run]
void hkpRemoveTerminalsMoppModifier2::vf00(void)

{
  vf00();
  return;
}

// 01158170  FUN_01158170  size=38  [run]
void FUN_01158170(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 011581B0  hkpRemoveTerminalsMoppModifier2::vf00  size=52  [run]
int __thiscall hkpRemoveTerminalsMoppModifier2::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_123();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 011581F0  hkBaseObject::hkBaseObject_40  size=35  [run]
void __fastcall hkBaseObject::hkBaseObject_40(undefined4 *param_1)

{
  param_1[5] = hkpRayCollidableFilter::vftable;
  param_1[4] = hkpRayShapeCollectionFilter::vftable;
  param_1[3] = hkpShapeCollectionFilter::vftable;
  param_1[2] = hkpCollidableCollidableFilter::vftable;
  *param_1 = vftable;
  return;
}

// 01158230  hkpMultiSphereShape::vf2C  size=4  [run]
undefined4 __fastcall hkpMultiSphereShape::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// 01158240  FUN_01158240  size=10  [run]
void FUN_01158240(void)

{
  return;
}

// 01158250  FUN_01158250  size=238  [run]
int __fastcall
FUN_01158250(undefined4 param_1,float *param_2,int param_3,int param_4,int param_5,int param_6,
            float *param_7)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = param_2[4];
  iVar2 = -1;
  iVar3 = 0;
  if (3 < param_6) {
    pfVar4 = (float *)(param_4 + 8);
    do {
      if (pfVar4[-2] < fVar5) {
        iVar2 = iVar3;
        fVar5 = pfVar4[-2];
      }
      if (pfVar4[-1] < fVar5) {
        iVar2 = iVar3 + 1;
        fVar5 = pfVar4[-1];
      }
      if (*pfVar4 < fVar5) {
        iVar2 = iVar3 + 2;
        fVar5 = *pfVar4;
      }
      if (pfVar4[1] < fVar5) {
        iVar2 = iVar3 + 3;
        fVar5 = pfVar4[1];
      }
      iVar3 = iVar3 + 4;
      pfVar4 = pfVar4 + 4;
    } while (iVar3 < param_6 + -3);
  }
  for (; iVar3 < param_6; iVar3 = iVar3 + 1) {
    fVar1 = *(float *)(param_4 + iVar3 * 4);
    if (fVar1 < fVar5) {
      iVar2 = iVar3;
      fVar5 = fVar1;
    }
  }
  if (iVar2 != -1) {
    param_2[(int)param_2[0x10] + 8] = -NAN;
    fVar1 = *(float *)(param_5 + iVar2 * 4);
    param_2[4] = fVar5;
    pfVar4 = (float *)((int)fVar1 * 0x10 + param_3);
    fVar6 = ((param_7[4] - *pfVar4) - (*param_7 - *pfVar4)) * fVar5 + (*param_7 - *pfVar4);
    fVar7 = ((param_7[5] - pfVar4[1]) - (param_7[1] - pfVar4[1])) * fVar5 + (param_7[1] - pfVar4[1])
    ;
    fVar8 = ((param_7[6] - pfVar4[2]) - (param_7[2] - pfVar4[2])) * fVar5 + (param_7[2] - pfVar4[2])
    ;
    fVar9 = ((param_7[7] - pfVar4[3]) - (param_7[3] - pfVar4[3])) * fVar5 + (param_7[3] - pfVar4[3])
    ;
    *param_2 = fVar6;
    param_2[1] = fVar7;
    param_2[2] = fVar8;
    param_2[3] = fVar9;
    fVar5 = 1.0 / pfVar4[3];
    param_2[5] = fVar1;
    *param_2 = fVar5 * fVar6;
    param_2[1] = fVar5 * fVar7;
    param_2[2] = fVar5 * fVar8;
    param_2[3] = fVar5 * fVar9;
    return iVar2;
  }
  return -1;
}

// 01158340  hkpMultiSphereShape::hkpMultiSphereShape  size=76  [run]
void __thiscall
hkpMultiSphereShape::hkpMultiSphereShape(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x419;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  *param_1 = vftable;
  if (0 < param_3) {
    puVar4 = param_1 + 8;
    iVar5 = param_3;
    do {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *puVar4 = *param_2;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      param_2 = param_2 + 4;
      puVar4 = puVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[4] = param_3;
  return;
}

// 01158390  hkpMultiSphereShape::hkpMultiSphereShape  size=32  [run]
undefined4 * __thiscall
hkpMultiSphereShape::hkpMultiSphereShape(undefined4 *param_1,undefined4 param_2)

{
  hkpShape::hkpShape(param_2);
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 2) = 0x19;
  return param_1;
}

// 011583B0  hkpMultiSphereShape::vf30  size=44  [run]
void __thiscall hkpMultiSphereShape::vf30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    puVar4 = (undefined4 *)(param_1 + 0x20);
    do {
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      *param_2 = *puVar4;
      param_2[1] = uVar1;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 4;
      param_2 = param_2 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x10));
  }
  return;
}

// 011583E0  hkpMultiSphereShape::getAabb  size=291  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
hkpMultiSphereShape::getAabb(int param_1,float *param_2,float param_3,float *param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float local_90 [16];
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pfVar9 = local_50;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar9 = *param_2;
    param_2 = param_2 + 1;
    pfVar9 = pfVar9 + 1;
  }
  iVar10 = *(int *)(param_1 + 0x10);
  iVar8 = iVar10 + -1;
  pfVar9 = local_90 + iVar8 * 4;
  pfVar7 = (float *)((iVar10 + 1) * 0x10 + param_1);
  do {
    fVar2 = *pfVar7;
    fVar3 = pfVar7[1];
    fVar4 = pfVar7[2];
    *pfVar9 = fVar3 * local_40 + fVar2 * local_50[0] + fVar4 * local_30 + local_20;
    pfVar9[1] = fVar3 * fStack_3c + fVar2 * local_50[1] + fVar4 * fStack_2c + fStack_1c;
    pfVar9[2] = fVar3 * fStack_38 + fVar2 * local_50[2] + fVar4 * fStack_28 + fStack_18;
    pfVar9[3] = fVar3 * fStack_34 + fVar2 * local_50[3] + fVar4 * fStack_24 + fStack_14;
    pfVar7 = pfVar7 + -4;
    pfVar9 = pfVar9 + -4;
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  auVar12._0_12_ = DAT_017dffd0._0_12_;
  auVar12._12_4_ = 0;
  auVar13._0_12_ = DAT_017dffe0._0_12_;
  auVar13._12_4_ = 0;
  if (0 < iVar10) {
    param_1 = param_1 + 0x20;
    pfVar9 = local_90;
    do {
      fVar2 = *(float *)(param_1 + 0xc);
      fVar3 = *pfVar9;
      pfVar7 = pfVar9 + 1;
      pfVar5 = pfVar9 + 2;
      pfVar6 = pfVar9 + 3;
      param_1 = param_1 + 0x10;
      pfVar9 = pfVar9 + 4;
      iVar10 = iVar10 + -1;
      auVar11._0_4_ = fVar3 + fVar2;
      auVar11._4_4_ = *pfVar7 + fVar2;
      auVar11._8_4_ = *pfVar5 + fVar2;
      auVar11._12_4_ = *pfVar6 + fVar2;
      auVar1._4_4_ = *pfVar7 - fVar2;
      auVar1._0_4_ = fVar3 - fVar2;
      auVar1._8_4_ = *pfVar5 - fVar2;
      auVar1._12_4_ = *pfVar6 - fVar2;
      auVar12 = minps(auVar12,auVar1);
      auVar13 = maxps(auVar13,auVar11);
    } while (iVar10 != 0);
  }
  *param_4 = auVar12._0_4_ - param_3;
  param_4[1] = auVar12._4_4_ - param_3;
  param_4[2] = auVar12._8_4_ - param_3;
  param_4[3] = auVar12._12_4_ - 0.0;
  param_4[4] = auVar13._0_4_ + param_3;
  param_4[5] = auVar13._4_4_ + param_3;
  param_4[6] = auVar13._8_4_ + param_3;
  param_4[7] = auVar13._12_4_ + 0.0;
  return;
}

// 01158510  FUN_01158510  size=436  [run]
int FUN_01158510(undefined8 *param_1,float *param_2,int param_3,int param_4,int *param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtrcMultiSpher";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  iVar4 = 0;
  local_14 = 0;
  if (0 < param_3) {
    param_4 = param_4 - (int)param_5;
    do {
      local_40 = (float)param_1[2];
      fStack_3c = (float)((ulonglong)param_1[2] >> 0x20);
      fStack_38 = (float)param_1[3];
      local_30 = (float)*param_1;
      fStack_2c = (float)((ulonglong)*param_1 >> 0x20);
      fStack_28 = (float)param_1[1];
      local_30 = local_30 - *param_2;
      fStack_2c = fStack_2c - param_2[1];
      fStack_28 = fStack_28 - param_2[2];
      fVar6 = (local_40 - *param_2) - local_30;
      fVar7 = (fStack_3c - param_2[1]) - fStack_2c;
      fVar8 = (fStack_38 - param_2[2]) - fStack_28;
      fVar5 = (fVar8 * fStack_28 + fVar7 * fStack_2c + fVar6 * local_30) * 2.0;
      if (fVar5 < 0.0) {
        fVar7 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
        fVar6 = fVar5 * fVar5 -
                ((fStack_2c * fStack_2c + local_30 * local_30 + fStack_28 * fStack_28) -
                param_2[3] * param_2[3]) * fVar7 * 4.0;
        if (((0.0 < fVar6) && (fVar5 = (-fVar5 - SQRT(fVar6)) * 0.5, fVar5 < fVar7)) &&
           (0.0 <= fVar5)) {
          local_14 = local_14 + 1;
          *(float *)(param_4 + (int)param_5) = fVar5 / fVar7;
          *param_5 = iVar4;
          param_5 = param_5 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 4;
    } while (iVar4 < param_3);
  }
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return local_14;
}

// 011586D0  hkpMultiSphereShape::castRay  size=74  [run]
void __thiscall hkpMultiSphereShape::castRay(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_44 [32];
  undefined1 local_24 [32];
  
  uVar1 = FUN_01158510(param_3,param_1 + 0x20,*(undefined4 *)(param_1 + 0x10),local_44,local_24);
  iVar2 = FUN_01158250(param_1 + 0x20,local_44,local_24,uVar1,param_3);
  *(bool *)param_2 = iVar2 != -1;
  return;
}

// 01158720  hkpMultiSphereShape::castRayWithCollector  size=276  [run]
/* WARNING: Type propagation algorithm not settling */

void __thiscall
hkpMultiSphereShape::castRayWithCollector
          (int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uStack_b4;
  undefined4 local_b0 [7];
  undefined4 uStack_94;
  undefined4 local_90 [8];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_30;
  int local_14;
  
  iVar4 = param_1 + 0x20;
  local_14 = iVar4;
  iVar3 = FUN_01158510(param_2,iVar4,*(undefined4 *)(param_1 + 0x10),local_90,local_b0);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    local_5c = 0xffffffff;
    local_50 = 0xffffffff;
    local_60 = 0x3f800000;
    local_30 = 0;
    iVar4 = FUN_01158250(iVar4,local_90,local_b0,iVar3,param_2);
    pfVar1 = *(float **)(param_3 + 8);
    fVar5 = fStack_6c * pfVar1[6];
    fVar6 = fStack_6c * pfVar1[7];
    fVar7 = local_70 * pfVar1[1];
    fVar8 = local_70 * pfVar1[2];
    fVar9 = local_70 * pfVar1[3];
    fStack_64 = fStack_68 * pfVar1[0xb];
    local_70 = fStack_6c * pfVar1[4] + local_70 * *pfVar1 + fStack_68 * pfVar1[8];
    fStack_6c = fStack_6c * pfVar1[5] + fVar7 + fStack_68 * pfVar1[9];
    fStack_68 = fVar5 + fVar8 + fStack_68 * pfVar1[10];
    fStack_64 = fVar6 + fVar9 + fStack_64;
    (**(code **)*param_4)(param_3,&local_70);
    uVar2 = (&uStack_b4)[iVar3];
    local_90[iVar4] = (&uStack_94)[iVar3];
    local_b0[iVar4] = uVar2;
    iVar4 = local_14;
  }
  return;
}

// 01158840  FUN_01158840  size=50  [run]
void __thiscall FUN_01158840(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_2 = param_2 * 0x10;
  uVar1 = *(uint *)(&UNK_017d5c08 + param_2) & param_3[2] |
          *(uint *)(&DAT_017d5c00 + param_2) & *param_3;
  uVar2 = *(uint *)(&UNK_017d5c0c + param_2) & param_3[3] |
          *(uint *)(&UNK_017d5c04 + param_2) & param_3[1];
  uVar3 = *(uint *)(&DAT_017d5c00 + param_2) & *param_3 |
          *(uint *)(&UNK_017d5c08 + param_2) & param_3[2];
  uVar4 = *(uint *)(&UNK_017d5c04 + param_2) & param_3[1] |
          *(uint *)(&UNK_017d5c0c + param_2) & param_3[3];
  *param_1 = uVar2 | uVar1;
  param_1[1] = uVar1 | uVar2;
  param_1[2] = uVar4 | uVar3;
  param_1[3] = uVar3 | uVar4;
  return;
}

// 01158890  FUN_01158890  size=38  [run]
void FUN_01158890(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 011588C0  hkpMultiSphereShape::vf00  size=53  [run]
undefined4 * __thiscall hkpMultiSphereShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01158900  FUN_01158900  size=50  [run]
void __thiscall FUN_01158900(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_2 = param_2 * 0x10;
  uVar1 = *(uint *)(&UNK_017d5c08 + param_2) & param_3[2] |
          *(uint *)(&DAT_017d5c00 + param_2) & *param_3;
  uVar2 = *(uint *)(&UNK_017d5c0c + param_2) & param_3[3] |
          *(uint *)(&UNK_017d5c04 + param_2) & param_3[1];
  uVar3 = *(uint *)(&DAT_017d5c00 + param_2) & *param_3 |
          *(uint *)(&UNK_017d5c08 + param_2) & param_3[2];
  uVar4 = *(uint *)(&UNK_017d5c04 + param_2) & param_3[1] |
          *(uint *)(&UNK_017d5c0c + param_2) & param_3[3];
  *param_1 = uVar2 | uVar1;
  param_1[1] = uVar1 | uVar2;
  param_1[2] = uVar4 | uVar3;
  param_1[3] = uVar3 | uVar4;
  return;
}

// 01158940  FUN_01158940  size=50  [run]
void __thiscall FUN_01158940(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_3 = param_3 * 0x10;
  uVar1 = *(uint *)(&UNK_017d5c08 + param_3) & param_2[2] |
          *(uint *)(&DAT_017d5c00 + param_3) & *param_2;
  uVar2 = *(uint *)(&UNK_017d5c0c + param_3) & param_2[3] |
          *(uint *)(&UNK_017d5c04 + param_3) & param_2[1];
  uVar3 = *(uint *)(&DAT_017d5c00 + param_3) & *param_2 |
          *(uint *)(&UNK_017d5c08 + param_3) & param_2[2];
  uVar4 = *(uint *)(&UNK_017d5c04 + param_3) & param_2[1] |
          *(uint *)(&UNK_017d5c0c + param_3) & param_2[3];
  *param_1 = uVar2 | uVar1;
  param_1[1] = uVar1 | uVar2;
  param_1[2] = uVar4 | uVar3;
  param_1[3] = uVar3 | uVar4;
  return;
}

// 01158980  hkpDefaultConvexListFilter::vf0C  size=34  [run]
uint hkpDefaultConvexListFilter::vf0C(undefined4 param_1,int *param_2,int *param_3)

{
  return *(uint *)(*param_3 + 0x110 + (uint)*(byte *)(*param_2 + 8) * 4) >> 0x16 & 1;
}

// 011589C0  hkpConvexListShape::vf08  size=3  [run]
undefined4 hkpConvexListShape::vf08(void)

{
  return 0;
}

// 011589D0  hkpConvexListShape::vf10  size=5  [run]
undefined4 hkpConvexListShape::vf10(void)

{
  return 0;
}

// 011589E0  hkpConvexListShape::vf38  size=11  [run]
int __fastcall hkpConvexListShape::vf38(int param_1)

{
  if (param_1 != 0) {
    return param_1 + 0x14;
  }
  return 0;
}

// 01158A00  hkpConvexListShape::vf24  size=117  [run]
void __thiscall hkpConvexListShape::vf24(int param_1,ushort *param_2,int param_3,int param_4)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  uint *puVar4;
  
  if (0 < param_3) {
    puVar4 = (uint *)(param_4 + 0xc);
    do {
      puVar2 = param_2;
      uVar1 = *param_2;
      param_2 = (ushort *)(uVar1 & 0xff);
      uVar3 = (uint)(uVar1 >> 8);
      (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + uVar3 * 4) + 0x24))(&param_2,1,puVar4 + -3)
      ;
      *puVar4 = uVar3 * 0x100 + (uint)(ushort)*puVar4 | 0x3f000000;
      param_2 = puVar2 + 1;
      puVar4 = puVar4 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 01158A80  hkpConvexListShape::vf44  size=16  [run]
void __fastcall hkpConvexListShape::vf44(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01158a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x44) + 0x44))();
  return;
}

// 01158A90  hkpConvexListShape::vf2C  size=43  [run]
int __fastcall hkpConvexListShape::vf2C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + iVar3 * 4) + 0x2c))();
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + iVar1;
    } while (iVar3 < *(int *)(param_1 + 0x48));
  }
  return iVar2;
}

// 01158AC0  hkpConvexListShape::vf30  size=74  [run]
int __thiscall hkpConvexListShape::vf30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  
  iVar3 = 0;
  local_8 = param_2;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x44) + iVar3 * 4);
      (**(code **)(*piVar1 + 0x30))(local_8);
      iVar2 = (**(code **)(*piVar1 + 0x2c))();
      local_8 = local_8 + iVar2 * 0x10;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x48));
  }
  return param_2;
}

// 01158B10  hkpConvexListShape::vf04  size=4  [run]
undefined4 __fastcall hkpConvexListShape::vf04(int param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}

// 01158B20  hkpConvexListShape::vf0C  size=19  [run]
int __thiscall hkpConvexListShape::vf0C(int param_1,int param_2)

{
  param_2 = param_2 + 1;
  if (*(int *)(param_1 + 0x34) <= param_2) {
    param_2 = -1;
  }
  return param_2;
}

// 01158B40  hkpConvexListShape::vf14  size=16  [run]
undefined4 __thiscall hkpConvexListShape::vf14(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x30) + param_2 * 4);
}

// 01158B50  hkpConvexListShape::vf20  size=172  [run]
void __thiscall hkpConvexListShape::vf20(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_18;
  float local_14;
  
  iVar2 = 0;
  local_14 = -3.40282e+38;
  local_18 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + iVar2 * 4) + 0x20))(param_2,&local_30);
      fVar3 = param_2[2] * fStack_28 + param_2[1] * fStack_2c + *param_2 * local_30;
      if (local_14 < fVar3) {
        *param_3 = local_30;
        param_3[1] = fStack_2c;
        param_3[2] = fStack_28;
        param_3[3] = fStack_24;
        local_18 = iVar2;
        local_14 = fVar3;
      }
      iVar2 = iVar2 + 1;
      iVar1 = local_18;
    } while (iVar2 < *(int *)(param_1 + 0x48));
  }
  param_3[3] = (float)(iVar1 * 0x100 + (uint)*(ushort *)(param_3 + 3) | 0x3f000000);
  return;
}

// 01158C00  FUN_01158c00  size=171  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_01158c00(int param_1,char param_2)

{
  int iVar1;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  *(char *)(param_1 + 0x40) = param_2;
  if (param_2 != '\0') {
    iVar1 = 0;
    local_30 = _DAT_017e0000;
    local_20 = _DAT_017e0010;
    if (0 < *(int *)(param_1 + 0x48)) {
      do {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + iVar1 * 4) + 0x10))
                  (&DAT_01701ca0,0,local_50);
        local_30 = minps(local_30,local_50);
        local_20 = maxps(local_20,local_40);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x48));
    }
    *(float *)(param_1 + 0x30) = (local_20._0_4_ + local_30._0_4_) * 0.5;
    *(float *)(param_1 + 0x34) = (local_20._4_4_ + local_30._4_4_) * 0.5;
    *(float *)(param_1 + 0x38) = (local_20._8_4_ + local_30._8_4_) * 0.5;
    *(float *)(param_1 + 0x3c) = (local_20._12_4_ + local_30._12_4_) * 0.5;
    *(float *)(param_1 + 0x20) = (local_20._0_4_ - local_30._0_4_) * 0.5;
    *(float *)(param_1 + 0x24) = (local_20._4_4_ - local_30._4_4_) * 0.5;
    *(float *)(param_1 + 0x28) = (local_20._8_4_ - local_30._8_4_) * 0.5;
    *(float *)(param_1 + 0x2c) = (local_20._12_4_ - local_30._12_4_) * 0.5;
  }
  return;
}

// 01158CB0  hkpConvexListShape::getAabb  size=340  [run]
void __thiscall
hkpConvexListShape::getAabb(int param_1,float *param_2,float param_3,undefined1 (*param_4) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_14;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    fVar7 = *(float *)(param_1 + 0x20);
    fVar1 = *(float *)(param_1 + 0x24);
    fVar2 = *(float *)(param_1 + 0x28);
    param_3 = *(float *)(param_1 + 0x10) + param_3;
    fVar8 = ABS(fVar7 * *param_2) + ABS(fVar1 * param_2[4]) + ABS(fVar2 * param_2[8]) + param_3;
    fVar9 = ABS(fVar7 * param_2[1]) + ABS(fVar1 * param_2[5]) + ABS(fVar2 * param_2[9]) + param_3;
    fVar10 = ABS(fVar7 * param_2[2]) + ABS(fVar1 * param_2[6]) + ABS(fVar2 * param_2[10]) + param_3;
    fVar11 = ABS(fVar7 * param_2[3]) + ABS(fVar1 * param_2[7]) + ABS(fVar2 * param_2[0xb]) + param_3
    ;
    fVar7 = *(float *)(param_1 + 0x30);
    fVar1 = *(float *)(param_1 + 0x34);
    fVar2 = *(float *)(param_1 + 0x38);
    fVar3 = fVar7 * *param_2 + fVar1 * param_2[4] + fVar2 * param_2[8] + param_2[0xc];
    fVar5 = fVar7 * param_2[1] + fVar1 * param_2[5] + fVar2 * param_2[9] + param_2[0xd];
    fVar6 = fVar7 * param_2[2] + fVar1 * param_2[6] + fVar2 * param_2[10] + param_2[0xe];
    fVar7 = fVar7 * param_2[3] + fVar1 * param_2[7] + fVar2 * param_2[0xb] + param_2[0xf];
    *(float *)param_4[1] = fVar3 + fVar8;
    *(float *)(param_4[1] + 4) = fVar5 + fVar9;
    *(float *)(param_4[1] + 8) = fVar6 + fVar10;
    *(float *)(param_4[1] + 0xc) = fVar7 + fVar11;
    *(float *)*param_4 = -fVar8 + fVar3;
    *(float *)(*param_4 + 4) = -fVar9 + fVar5;
    *(float *)(*param_4 + 8) = -fVar10 + fVar6;
    *(float *)(*param_4 + 0xc) = -fVar11 + fVar7;
    return;
  }
  (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x44) + 0x10))(param_2,param_3,param_4);
  local_14 = 1;
  if (1 < *(int *)(param_1 + 0x48)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x44) + local_14 * 4) + 0x10))
                (param_2,param_3,local_40);
      auVar4 = minps(*param_4,local_40);
      *param_4 = auVar4;
      auVar4._4_4_ = uStack_2c;
      auVar4._0_4_ = local_30;
      auVar4._8_4_ = uStack_28;
      auVar4._12_4_ = uStack_24;
      auVar4 = maxps(param_4[1],auVar4);
      local_14 = local_14 + 1;
      param_4[1] = auVar4;
    } while (local_14 < *(int *)(param_1 + 0x48));
  }
  return;
}

// 01158E10  hkpConvexListShape::castRay  size=263  [run]
undefined4 __thiscall
hkpConvexListShape::castRay(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  DWORD dwTlsIndex;
  LPVOID pvVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 local_220 [523];
  undefined1 local_15;
  int local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtrcCxList";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  local_14 = -1;
  for (iVar4 = (**(code **)(*(int *)(param_1 + 0x14) + 8))(); iVar4 != -1;
      iVar4 = (**(code **)(*(int *)(param_1 + 0x14) + 0xc))(iVar4)) {
    piVar5 = (int *)(**(code **)(*(int *)(param_1 + 0x14) + 0x14))(iVar4,local_220);
    pcVar6 = (char *)(**(code **)(*piVar5 + 0x14))(&local_15,param_3,param_4);
    if (*pcVar6 != '\0') {
      local_14 = iVar4;
    }
  }
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + -1;
  if (local_14 != -1) {
    *(int *)(param_4 + 0x20 + *(int *)(param_4 + 0x40) * 4) = local_14;
  }
  dwTlsIndex = DAT_01f8fc54;
  *(bool *)param_2 = local_14 != -1;
  pvVar3 = TlsGetValue(dwTlsIndex);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return param_2;
}

// 01158F20  hkpConvexListShape::castRayWithCollector  size=226  [run]
void __thiscall
hkpConvexListShape::castRayWithCollector
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined1 local_230 [524];
  int *local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtrcShpCollect";
    uVar2 = rdtsc();
    local_14 = (undefined4)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  for (iVar4 = (**(code **)(*(int *)(param_1 + 0x14) + 8))(); iVar4 != -1;
      iVar4 = (**(code **)(*(int *)(param_1 + 0x14) + 0xc))(iVar4)) {
    local_24 = (int *)(**(code **)(*(int *)(param_1 + 0x14) + 0x14))(iVar4,local_230);
    local_18 = param_3;
    local_1c = *(undefined4 *)(param_3 + 8);
    local_20 = iVar4;
    (**(code **)(*local_24 + 0x18))(param_2,&local_24,param_4);
  }
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return;
}

// 01159010  hkpConvexListShape::hkpConvexListShape  size=46  [run]
undefined4 * __thiscall
hkpConvexListShape::hkpConvexListShape(undefined4 *param_1,undefined4 param_2)

{
  hkpConvexShape::hkpConvexShape(param_2);
  param_1[5] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  param_1[5] = vftable;
  *(undefined1 *)(param_1 + 2) = 0x1a;
  return param_1;
}

// 01159040  hkBaseObject::hkBaseObject_28  size=117  [run]
void __fastcall hkBaseObject::hkBaseObject_28(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = hkpConvexListShape::vftable;
  param_1[5] = hkpConvexListShape::vftable;
  if (0 < (int)param_1[0x12]) {
    do {
      FUN_010060a0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0x12]);
  }
  param_1[0x12] = 0;
  if (-1 < (int)param_1[0x13]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x11],param_1[0x13] * 4);
  }
  param_1[0x11] = 0;
  param_1[0x13] = 0x80000000;
  param_1[5] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  return;
}

// 011590C0  FUN_011590c0  size=114  [run]
void __thiscall FUN_011590c0(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x4c) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_1 + 0x44),iVar2,4);
  }
  *(int *)(param_1 + 0x48) = param_3;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*param_2 + 0x10);
  iVar2 = 0;
  if (0 < param_3) {
    do {
      *(int *)(*(int *)(param_1 + 0x44) + iVar2 * 4) = param_2[iVar2];
      FUN_01006000();
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}

// 01159140  hkpShapeContainer::hkpShapeContainer  size=115  [run]
undefined4 * __thiscall
hkpShapeContainer::hkpShapeContainer(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x41a;
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[5] = vftable;
  *param_1 = hkpConvexListShape::vftable;
  param_1[5] = hkpConvexListShape::vftable;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x80000000;
  param_1[6] = 0x3f800000;
  FUN_011590c0(param_2,param_3);
  FUN_01158c00(1);
  return param_1;
}

// 01159200  FUN_01159200  size=15  [run]
int __thiscall FUN_01159200(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01159210  FUN_01159210  size=15  [run]
int __thiscall FUN_01159210(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01159270  FUN_01159270  size=26  [run]
void __thiscall FUN_01159270(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 011592C0  FUN_011592c0  size=61  [run]
void __thiscall FUN_011592c0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01159300  FUN_01159300  size=52  [run]
undefined4 __thiscall FUN_01159300(int param_1,undefined4 param_2,int param_3)

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

// 01159340  FUN_01159340  size=55  [run]
void __thiscall FUN_01159340(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01159380  FUN_01159380  size=61  [run]
void __fastcall FUN_01159380(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011593C0  FUN_011593c0  size=56  [run]
void __thiscall FUN_011593c0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01159400  FUN_01159400  size=61  [run]
void __fastcall FUN_01159400(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01159440  hkpConvexListShape::vf00  size=8  [run]
void hkpConvexListShape::vf00(void)

{
  vf00();
  return;
}

// 01159450  FUN_01159450  size=38  [run]
void FUN_01159450(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01159480  hkpConvexListShape::vf00  size=52  [run]
int __thiscall hkpConvexListShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_28();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 011594D0  hkpCollisionFilterList::vf04  size=77  [run]
void __thiscall
hkpCollisionFilterList::vf04(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  uVar2 = param_4;
  iVar1 = *(int *)(param_1 + 0x2c);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      *param_2 = 1;
      return;
    }
    pcVar3 = (char *)(**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x28) + iVar1 * 4) + 8) + 4))
                               ((int)&param_4 + 3,param_3,uVar2);
  } while (*pcVar3 != '\0');
  *param_2 = 0;
  return;
}

// 01159520  hkpCollisionFilterList::vf04  size=89  [run]
void __thiscall
hkpCollisionFilterList::vf04
          (int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  uVar2 = param_7;
  iVar1 = *(int *)(param_1 + 0x28);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      *param_2 = 1;
      return;
    }
    pcVar3 = (char *)(**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x24) + iVar1 * 4) + 0xc) + 4
                                 ))((int)&param_7 + 3,param_3,param_4,param_5,param_6,uVar2);
  } while (*pcVar3 != '\0');
  *param_2 = 0;
  return;
}

// 01159580  hkpCollisionFilterList::vf00  size=84  [run]
void __thiscall
hkpCollisionFilterList::vf00
          (int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  uVar2 = param_6;
  iVar1 = *(int *)(param_1 + 0x24);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      *param_2 = 1;
      return;
    }
    pcVar3 = (char *)(*(code *)**(undefined4 **)
                                 (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 4) + 0x10))
                               ((int)&param_6 + 3,param_3,param_4,param_5,uVar2);
  } while (*pcVar3 != '\0');
  *param_2 = 0;
  return;
}

// 011595E0  hkpCollisionFilterList::vf00  size=96  [run]
void __thiscall
hkpCollisionFilterList::vf00
          (int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  uVar2 = param_9;
  iVar1 = *(int *)(param_1 + 0x28);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      *param_2 = 1;
      return;
    }
    pcVar3 = (char *)(*(code *)**(undefined4 **)
                                 (*(int *)(*(int *)(param_1 + 0x24) + iVar1 * 4) + 0xc))
                               ((int)&param_9 + 3,param_3,param_4,param_5,param_6,param_7,param_8,
                                uVar2);
  } while (*pcVar3 != '\0');
  *param_2 = 0;
  return;
}

// 01159640  hkpCollisionFilterList::vf04  size=77  [run]
void __thiscall
hkpCollisionFilterList::vf04(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  uVar2 = param_4;
  iVar1 = *(int *)(param_1 + 0x20);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      *param_2 = 1;
      return;
    }
    pcVar3 = (char *)(**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1 * 4) + 0x14) +
                                 4))((int)&param_4 + 3,param_3,uVar2);
  } while (*pcVar3 != '\0');
  *param_2 = 0;
  return;
}

// 01159690  FUN_01159690  size=67  [run]
void __thiscall FUN_01159690(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    piVar2 = *(int **)(param_1 + 0x30);
    do {
      if (*piVar2 == param_2) goto LAB_011596b3;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x34));
  }
  iVar1 = -1;
LAB_011596b3:
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  if (*(int *)(param_1 + 0x34) != iVar1) {
    *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar1 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4);
  }
  FUN_010060a0();
  return;
}

// 011596E0  FUN_011596e0  size=68  [run]
void __thiscall FUN_011596e0(int param_1,undefined4 param_2)

{
  FUN_01006000();
  if (*(uint *)(param_1 + 0x34) == (*(uint *)(param_1 + 0x38) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x30),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x34) * 4) = param_2;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return;
}

// 01159730  hkpCollisionFilterList::hkpCollisionFilterList  size=235  [run]
undefined4 * __thiscall
hkpCollisionFilterList::hkpCollisionFilterList(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  hkpCollisionFilter::hkpCollisionFilter();
  piVar2 = param_2;
  *param_1 = vftable;
  param_1[2] = vftable;
  param_1[3] = vftable;
  param_1[4] = vftable;
  param_1[5] = vftable;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x80000000;
  param_1[8] = 3;
  uVar1 = param_1[0xe];
  if ((int)(uVar1 & 0x3fffffff) < param_2[1]) {
    if (-1 < (int)uVar1) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],uVar1 * 4);
    }
    param_2 = (int *)(piVar2[1] * 4);
    uVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    param_1[0xc] = uVar3;
    param_1[0xe] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  }
  iVar5 = piVar2[1];
  puVar4 = (undefined4 *)param_1[0xc];
  param_1[0xd] = iVar5;
  if (0 < iVar5) {
    iVar6 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = 0;
  if (0 < (int)param_1[0xd]) {
    do {
      FUN_01006000();
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1[0xd]);
  }
  return param_1;
}

// 01159820  hkBaseObject::hkBaseObject_18  size=160  [run]
void __fastcall hkBaseObject::hkBaseObject_18(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = hkpCollisionFilterList::vftable;
  param_1[2] = hkpCollisionFilterList::vftable;
  param_1[3] = hkpCollisionFilterList::vftable;
  param_1[4] = hkpCollisionFilterList::vftable;
  param_1[5] = hkpCollisionFilterList::vftable;
  if (0 < (int)param_1[0xd]) {
    do {
      FUN_010060a0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0xd]);
  }
  param_1[0xd] = 0;
  if (-1 < (int)param_1[0xe]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],param_1[0xe] * 4);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  param_1[5] = hkpRayCollidableFilter::vftable;
  param_1[4] = hkpRayShapeCollectionFilter::vftable;
  param_1[3] = hkpShapeCollectionFilter::vftable;
  param_1[2] = hkpCollidableCollidableFilter::vftable;
  *param_1 = vftable;
  return;
}

// 011598C0  hkpCollisionFilterList::hkpCollisionFilterList  size=61  [run]
undefined4 * __fastcall hkpCollisionFilterList::hkpCollisionFilterList(undefined4 *param_1)

{
  hkpCollisionFilter::hkpCollisionFilter();
  *param_1 = vftable;
  param_1[2] = vftable;
  param_1[3] = vftable;
  param_1[4] = vftable;
  param_1[5] = vftable;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x80000000;
  return param_1;
}

// 01159920  FUN_01159920  size=15  [run]
int __thiscall FUN_01159920(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01159930  FUN_01159930  size=15  [run]
int __thiscall FUN_01159930(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01159950  FUN_01159950  size=52  [run]
int __thiscall FUN_01159950(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(*param_1 + param_3 * 4);
    do {
      if (*piVar1 == *param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 1;
    } while (param_3 < param_4);
  }
  return -1;
}

// 01159990  FUN_01159990  size=34  [run]
void FUN_01159990(int param_1,int param_2,undefined4 *param_3)

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

// 011599C0  FUN_011599c0  size=33  [run]
void FUN_011599c0(undefined4 *param_1,int param_2,int param_3)

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

// 011599F0  FUN_011599f0  size=50  [run]
undefined4 __thiscall FUN_011599f0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 01159A50  FUN_01159a50  size=28  [run]
void __thiscall FUN_01159a50(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 01159A70  FUN_01159a70  size=57  [run]
void __thiscall FUN_01159a70(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01159AB0  FUN_01159ab0  size=128  [run]
int * __thiscall FUN_01159ab0(int *param_1,int *param_2,int *param_3)

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

// 01159B40  FUN_01159b40  size=58  [run]
void __thiscall FUN_01159b40(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01159B80  FUN_01159b80  size=134  [run]
int * __thiscall FUN_01159b80(int *param_1,int *param_2)

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

// 01159C20  hkpBvShape::getAabb  size=36  [run]
void __thiscall
hkpBvShape::getAabb(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(**(int **)(param_1 + 0x10) + 0x10))(param_2,param_3,param_4);
  return;
}

// 01159C50  hkpBvShape::vf38  size=4  [run]
int __fastcall hkpBvShape::vf38(int param_1)

{
  return param_1 + 0x14;
}

// 01159C60  hkBaseObject::hkBaseObject_23  size=51  [run]
void __fastcall hkBaseObject::hkBaseObject_23(undefined4 *param_1)

{
  *param_1 = hkpBvShape::vftable;
  FUN_010060a0();
  param_1[5] = hkpSingleShapeContainer::vftable;
  if (param_1[6] != 0) {
    FUN_010060a0();
  }
  param_1[5] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  return;
}

// 01159CA0  hkpSingleShapeContainer::hkpSingleShapeContainer  size=75  [run]
undefined4 * __thiscall
hkpSingleShapeContainer::hkpSingleShapeContainer
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x41e;
  param_1[4] = param_2;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  *param_1 = hkpBvShape::vftable;
  param_1[5] = vftable;
  param_1[6] = param_3;
  FUN_01006000();
  FUN_01006000();
  return param_1;
}

// 01159CF0  hkpSingleShapeContainer::hkpSingleShapeContainer  size=39  [run]
undefined4 * __thiscall
hkpSingleShapeContainer::hkpSingleShapeContainer(undefined4 *param_1,undefined4 param_2)

{
  hkpShape::hkpShape(param_2);
  *param_1 = hkpBvShape::vftable;
  param_1[5] = vftable;
  *(undefined1 *)(param_1 + 2) = 0x1e;
  return param_1;
}

// 01159D20  hkpBvShape::castRay  size=153  [run]
char * __thiscall hkpBvShape::castRay(int param_1,char *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtrcBvShape";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(param_2,param_3,param_4);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + -1;
  if (*param_2 != '\0') {
    *(undefined4 *)(param_4 + 0x20 + *(int *)(param_4 + 0x40) * 4) = 0;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return param_2;
}

// 01159DC0  hkpBvShape::castRayWithCollector  size=152  [run]
void __thiscall
hkpBvShape::castRayWithCollector(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtrcBvShape";
    uVar2 = rdtsc();
    local_8 = (undefined4)uVar2;
    puVar1[1] = local_8;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_18 = *(int **)(param_1 + 0x18);
  local_c = param_3;
  local_10 = *(undefined4 *)(param_3 + 8);
  local_14 = 0;
  (**(code **)(*local_18 + 0x18))(param_2,&local_18,param_4);
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return;
}

// 01159E60  FUN_01159e60  size=38  [run]
void FUN_01159e60(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01159E90  hkpBvShape::vf00  size=52  [run]
int __thiscall hkpBvShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_23();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01159F10  hkpBroadPhase::hkpBroadPhase  size=80  [run]
undefined4 * __thiscall
hkpBroadPhase::hkpBroadPhase
          (undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = param_2;
  *(undefined2 *)((int)param_1 + 10) = param_3;
  *param_1 = vftable;
  param_1[3] = param_4;
  param_1[4] = 0xfffffff1;
  *(undefined2 *)(param_1 + 6) = 0x8000;
  param_1[7] = 0;
  FUN_01015650();
  return param_1;
}

// 01159F60  FUN_01159f60  size=11  [run]
void __fastcall FUN_01159f60(int param_1)

{
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1c));
  return;
}

// 01159F70  FUN_01159f70  size=11  [run]
void __fastcall FUN_01159f70(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x1c));
  return;
}

// 01159F80  FUN_01159f80  size=85  [run]
void __thiscall FUN_01159f80(int param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x18);
    if (iVar2 != 0) {
      uVar3 = FUN_01015ac0(param_2);
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
      FUN_01015660();
      return;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_01015660();
  }
  return;
}

// 01159FE0  hkpBroadPhase::~hkpBroadPhase  size=65  [run]
void __fastcall hkpBroadPhase::~hkpBroadPhase(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPVOID pvVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[7];
  *param_1 = vftable;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(lpCriticalSection,0x18);
    param_1[7] = 0;
  }
  *param_1 = ::hkBaseObject::vftable;
  return;
}

// 0115A030  hkpBroadPhase::vf38  size=1  [run]
void hkpBroadPhase::vf38(void)

{
  return;
}

// 0115A040  FUN_0115a040  size=38  [run]
void FUN_0115a040(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0115A070  hkpBroadPhase::vf00  size=52  [run]
int __thiscall hkpBroadPhase::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkpBroadPhase();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0115A0C0  FUN_0115a0c0  size=24  [run]
void FUN_0115a0c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  FUN_0117d4b0(param_2 + 4,param_3);
  return;
}

// 0115A0E0  FUN_0115a0e0  size=48  [run]
void FUN_0115a0e0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0117d5b0(param_2 + 4,param_3,param_4,param_5);
  return;
}

// 0115A120  FUN_0115a120  size=73  [run]
void FUN_0115a120(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = (**(code **)(*(int *)*param_4 + 0x38))();
  local_24 = param_3;
  local_10 = param_6;
  local_14 = param_5;
  local_20 = param_4;
  local_c = param_7;
  FUN_0117e610(param_2 + 4,&local_24);
  return;
}

// 0115A170  FUN_0115a170  size=957  [run]
int FUN_0115a170(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,float *param_4,
                int param_5,float *param_6,int param_7,int param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  int extraout_ECX;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar19;
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 local_80 [8];
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [8];
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_18;
  int local_14;
  
  local_14 = param_1[2];
  puVar5 = (undefined8 *)param_2[2];
  uVar1 = puVar5[2];
  local_30 = (float)*puVar5;
  fStack_2c = (float)((ulonglong)*puVar5 >> 0x20);
  fStack_28 = (float)puVar5[1];
  uStack_38 = puVar5[3];
  uVar2 = puVar5[4];
  local_40._0_4_ = (float)uVar1;
  local_40._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  uVar3 = puVar5[5];
  local_50._0_4_ = (float)uVar2;
  local_50._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  uStack_48._0_4_ = (float)uVar3;
  uStack_48._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  fVar13 = *param_4;
  fVar14 = param_4[1];
  fVar19 = param_4[2];
  local_30 = fVar14 * fStack_2c + fVar13 * local_30 + fStack_28 * fVar19;
  fStack_2c = fVar14 * local_40._4_4_ + fVar13 * (float)local_40 + (float)uStack_38 * fVar19;
  fStack_28 = fVar14 * local_50._4_4_ + fVar13 * (float)local_50 + (float)uStack_48 * fVar19;
  fStack_24 = fVar14 * uStack_48._4_4_ + fVar13 * local_50._4_4_ + uStack_48._4_4_ * fVar19;
  local_50 = uVar2;
  uStack_48 = uVar3;
  local_40 = uVar1;
  if (*(int *)(*(int *)(param_5 + 0x60) + 0x10) == 0) {
    (**(code **)(*(int *)*param_1 + 0x10))(param_3,*(float *)(param_5 + 0xc) * 0.5,local_80);
    fVar29 = (float)local_70._0_4_ - (float)local_80._0_4_;
    fVar30 = (float)local_70._4_4_ - (float)local_80._4_4_;
    fVar31 = fStack_68 - fStack_78;
    fVar32 = fStack_64 - fStack_74;
    iVar11 = extraout_ECX;
    fVar13 = local_30;
    fVar14 = fStack_2c;
    fVar19 = fStack_28;
    fVar20 = fStack_24;
    fVar21 = (float)local_70._0_4_;
    fVar24 = (float)local_70._4_4_;
    fVar25 = fStack_68;
    fVar26 = fStack_64;
    fVar33 = (float)local_80._0_4_;
    fVar35 = (float)local_80._4_4_;
    fVar36 = fStack_78;
    fVar37 = fStack_74;
  }
  else {
    fVar13 = *(float *)((int)puVar5 + 0x9c);
    local_18 = fVar13 * fVar13 * *(float *)(puVar5 + 0x14);
    (**(code **)(*(int *)*param_1 + 0x10))
              (param_3,(*(float *)(local_14 + 0x9c) + fVar13) * *(float *)(local_14 + 0xa0) +
                       local_18 + *(float *)(param_5 + 0xc) * 0.5,local_80);
    puVar6 = (undefined8 *)param_2[2];
    uVar1 = *puVar6;
    fVar13 = *(float *)(param_5 + 0xc) * 0.5 + *(float *)(local_14 + 0xa0) + local_18;
    uStack_48 = puVar6[1];
    uVar2 = puVar6[2];
    local_50._0_4_ = (float)uVar1;
    local_50._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    uStack_38 = puVar6[3];
    uVar3 = puVar6[4];
    local_40._0_4_ = (float)uVar2;
    local_40._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    uVar4 = puVar6[5];
    local_60._0_4_ = (float)uVar3;
    local_60._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    uStack_58._0_4_ = (float)uVar4;
    uStack_58._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
    auVar38._0_12_ = ZEXT812(0);
    auVar38._12_4_ = 0;
    fVar14 = *(float *)(local_14 + 0x50) - *(float *)(puVar6 + 6);
    fVar19 = *(float *)(local_14 + 0x54) - *(float *)((int)puVar6 + 0x34);
    fVar20 = *(float *)(local_14 + 0x58) - *(float *)(puVar6 + 7);
    fVar21 = fVar19 * local_50._4_4_ + fVar14 * (float)local_50 + (float)uStack_48 * fVar20;
    fVar24 = fVar19 * local_40._4_4_ + fVar14 * (float)local_40 + (float)uStack_38 * fVar20;
    fVar25 = fVar19 * local_60._4_4_ + fVar14 * (float)local_60 + (float)uStack_58 * fVar20;
    fVar26 = fVar19 * uStack_58._4_4_ + fVar14 * local_60._4_4_ + uStack_58._4_4_ * fVar20;
    auVar15._0_4_ = fVar21 - fVar13;
    auVar15._4_4_ = fVar24 - fVar13;
    auVar15._8_4_ = fVar25 - fVar13;
    auVar15._12_4_ = fVar26 - 0.0;
    auVar15 = maxps(_local_80,auVar15);
    auVar27._0_4_ = fVar21 + fVar13;
    auVar27._4_4_ = fVar24 + fVar13;
    auVar27._8_4_ = fVar25 + fVar13;
    auVar27._12_4_ = fVar26 + 0.0;
    auVar27 = minps(_local_70,auVar27);
    fVar29 = auVar27._0_4_ - auVar15._0_4_;
    fVar30 = auVar27._4_4_ - auVar15._4_4_;
    fVar31 = auVar27._8_4_ - auVar15._8_4_;
    fVar32 = auVar27._12_4_ - auVar15._12_4_;
    fVar13 = local_30;
    fVar14 = fStack_2c;
    fVar19 = fStack_28;
    fVar20 = fStack_24;
    if (0.0 < *(float *)((int)puVar5 + 0x9c)) {
      fVar24 = fVar24 - *(float *)((int)puVar5 + 0x84);
      fVar26 = fVar26 - *(float *)((int)puVar5 + 0x8c);
      fVar20 = *(float *)((int)puVar5 + 0x5c) * *(float *)(param_5 + 0x58);
      fVar13 = (*(float *)(puVar5 + 0x13) * fVar24 -
               (fVar25 - *(float *)(puVar5 + 0x11)) * *(float *)((int)puVar5 + 0x94)) * fVar20 +
               local_30;
      fVar14 = (*(float *)(puVar5 + 0x12) * (fVar25 - *(float *)(puVar5 + 0x11)) -
               (fVar21 - *(float *)(puVar5 + 0x10)) * *(float *)(puVar5 + 0x13)) * fVar20 +
               fStack_2c;
      fVar19 = (*(float *)((int)puVar5 + 0x94) * (fVar21 - *(float *)(puVar5 + 0x10)) -
               fVar24 * *(float *)(puVar5 + 0x12)) * fVar20 + fStack_28;
      fVar20 = (*(float *)((int)puVar5 + 0x9c) * fVar26 - fVar26 * *(float *)((int)puVar5 + 0x9c)) *
               fVar20 + fStack_24;
    }
    auVar34._4_4_ = fVar14;
    auVar34._0_4_ = fVar13;
    auVar34._8_4_ = fVar19;
    auVar34._12_4_ = fVar20;
    auVar34 = minps(ZEXT816(0),auVar34);
    auVar8._4_4_ = fVar14;
    auVar8._0_4_ = fVar13;
    auVar8._8_4_ = fVar19;
    auVar8._12_4_ = fVar20;
    auVar38 = maxps(auVar38,auVar8);
    local_80._0_4_ = auVar34._0_4_ + auVar15._0_4_;
    local_80._4_4_ = auVar34._4_4_ + auVar15._4_4_;
    fStack_78 = auVar34._8_4_ + auVar15._8_4_;
    fStack_74 = auVar34._12_4_ + auVar15._12_4_;
    local_70._0_4_ = auVar38._0_4_ + auVar27._0_4_;
    local_70._4_4_ = auVar38._4_4_ + auVar27._4_4_;
    fStack_68 = auVar38._8_4_ + auVar27._8_4_;
    fStack_64 = auVar38._12_4_ + auVar27._12_4_;
    iVar11 = local_14;
    fVar21 = (float)local_70._0_4_;
    fVar24 = (float)local_70._4_4_;
    fVar25 = fStack_68;
    fVar26 = fStack_64;
    fVar33 = (float)local_80._0_4_;
    fVar35 = (float)local_80._4_4_;
    fVar36 = fStack_78;
    fVar37 = fStack_74;
    local_60 = uVar3;
    uStack_58 = uVar4;
    local_50 = uVar1;
    local_40 = uVar2;
  }
  if (param_6 != (float *)0x0) {
    auVar16._0_4_ = -(uint)(*param_6 <= fVar33 && fVar21 <= param_6[4]);
    auVar16._4_4_ = -(uint)(param_6[1] <= fVar35 && fVar24 <= param_6[5]);
    auVar16._8_4_ = -(uint)(param_6[2] <= fVar36 && fVar25 <= param_6[6]);
    auVar16._12_4_ = -(uint)(param_6[3] <= fVar37 && fVar26 <= param_6[7]);
    uVar12 = movmskps(iVar11,auVar16);
    if (((byte)uVar12 & 7) == 7) {
      return -1;
    }
    fVar22 = *(float *)(param_5 + 0xc) * 0.5;
    auVar17._0_12_ = ZEXT812(0);
    auVar17._12_4_ = 0;
    auVar9._4_4_ = fVar14;
    auVar9._0_4_ = fVar13;
    auVar9._8_4_ = fVar19;
    auVar9._12_4_ = fVar20;
    auVar15 = maxps(ZEXT816(0),auVar9);
    auVar23._0_4_ = auVar15._0_4_ * -2.0;
    auVar23._4_4_ = auVar15._4_4_ * -2.0;
    auVar23._8_4_ = auVar15._8_4_ * -2.0;
    auVar23._12_4_ = auVar15._12_4_ * -2.0;
    auVar10._4_4_ = fVar14;
    auVar10._0_4_ = fVar13;
    auVar10._8_4_ = fVar19;
    auVar10._12_4_ = fVar20;
    auVar15 = minps(auVar17,auVar10);
    auVar18._0_4_ = auVar15._0_4_ * -2.0;
    auVar18._4_4_ = auVar15._4_4_ * -2.0;
    auVar18._8_4_ = auVar15._8_4_ * -2.0;
    auVar18._12_4_ = auVar15._12_4_ * -2.0;
    auVar28._0_8_ = CONCAT44(fVar30 * 0.4,fVar29 * 0.4) ^ 0x8000000080000000;
    auVar28._8_4_ = -(fVar31 * 0.4);
    auVar28._12_4_ = -(fVar32 * 0.4);
    auVar15 = maxps(auVar23,auVar28);
    local_80._0_4_ = auVar15._0_4_ + (fVar33 - fVar22);
    local_80._4_4_ = auVar15._4_4_ + (fVar35 - fVar22);
    fStack_78 = auVar15._8_4_ + (fVar36 - fVar22);
    fStack_74 = auVar15._12_4_ + (fVar37 - 0.0);
    auVar7._4_4_ = fVar30 * 0.4;
    auVar7._0_4_ = fVar29 * 0.4;
    auVar7._8_4_ = fVar31 * 0.4;
    auVar7._12_4_ = fVar32 * 0.4;
    auVar15 = minps(auVar18,auVar7);
    local_70._0_4_ = auVar15._0_4_ + fVar22 + fVar21;
    local_70._4_4_ = auVar15._4_4_ + fVar22 + fVar24;
    fStack_68 = auVar15._8_4_ + fVar22 + fVar25;
    fStack_64 = auVar15._12_4_ + fVar26 + 0.0;
    *param_6 = (float)local_80._0_4_;
    param_6[1] = (float)local_80._4_4_;
    param_6[2] = fStack_78;
    param_6[3] = fStack_74;
    param_6[4] = (float)local_70._0_4_;
    param_6[5] = (float)local_70._4_4_;
    param_6[6] = fStack_68;
    param_6[7] = fStack_64;
  }
  iVar11 = (**(code **)(*(int *)*param_2 + 0x4c))(local_80,param_7,param_8);
  if (param_8 <= iVar11) {
    iVar11 = (**(code **)(*(int *)(*(int *)(param_5 + 0x10) + 0xc) + 8))
                       (param_5,param_1,param_2,*param_2,local_80,param_7,param_8);
    if (param_8 + -1 <= iVar11) {
      iVar11 = param_8 + -1;
    }
  }
  *(undefined4 *)(param_7 + iVar11 * 4) = 0xffffffff;
  return iVar11;
}

// 0115A530  FUN_0115a530  size=36  [run]
undefined4 FUN_0115a530(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 8) == '\a') {
    return *(undefined4 *)(iVar1 + 0x18);
  }
  if (*(char *)(iVar1 + 8) != '\t') {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x34);
}

// 0115A720  FUN_0115a720  size=70  [run]
void FUN_0115a720(undefined4 *param_1)

{
  *param_1 = FUN_011818f0;
  param_1[10] = &LAB_0115a560;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = FUN_0115a120;
  param_1[7] = FUN_0115a0c0;
  param_1[8] = FUN_0115a0e0;
  param_1[1] = FUN_011816e0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  return;
}

// 0115A770  FUN_0115a770  size=81  [run]
void FUN_0115a770(void)

{
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_14;
  undefined1 local_12;
  
  local_14 = 0;
  local_12 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_0115a720(local_40);
  FUN_01163510(local_40,0xffffffff,0x16);
  return;
}

// 0115A810  FUN_0115a810  size=12  [run]
void __thiscall FUN_0115a810(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0115A850  FUN_0115a850  size=21  [run]
bool FUN_0115a850(uint *param_1,uint *param_2)

{
  return *param_1 < *param_2;
}

// 0115A8B0  FUN_0115a8b0  size=46  [run]
bool __thiscall FUN_0115a8b0(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1._4_4_ = -(uint)(param_2[5] <= param_1[5] && param_1[1] <= param_2[1]);
  auVar1._0_4_ = -(uint)(param_2[4] <= param_1[4] && *param_1 <= *param_2);
  auVar1._8_4_ = -(uint)(param_2[6] <= param_1[6] && param_1[2] <= param_2[2]);
  auVar1._12_4_ = -(uint)(param_2[7] <= param_1[7] && param_1[3] <= param_2[3]);
  uVar2 = movmskps(param_2,auVar1);
  return ((byte)uVar2 & 7) == 7;
}

// 0115A950  FUN_0115a950  size=143  [run]
void FUN_0115a950(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  do {
    uVar1 = *(uint *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar4 = param_3;
    iVar5 = param_2;
    do {
      uVar2 = *(uint *)(param_1 + iVar5 * 4);
      while (uVar2 < uVar1) {
        iVar5 = iVar5 + 1;
        uVar2 = *(uint *)(param_1 + iVar5 * 4);
      }
      uVar2 = *(uint *)(param_1 + iVar4 * 4);
      while (uVar1 < uVar2) {
        iVar4 = iVar4 + -1;
        uVar2 = *(uint *)(param_1 + iVar4 * 4);
      }
      if (iVar4 < iVar5) break;
      if (iVar4 != iVar5) {
        uVar3 = *(undefined4 *)(param_1 + iVar4 * 4);
        *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        *(undefined4 *)(param_1 + iVar5 * 4) = uVar3;
      }
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar4);
    if (param_2 < iVar4) {
      FUN_0115a950(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar5;
    if (param_3 <= iVar5) {
      return;
    }
  } while( true );
}

// 0115A9E0  FUN_0115a9e0  size=90  [run]
int * __thiscall FUN_0115a9e0(int *param_1,int param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = *(int *)((int)pvVar2 + 0xc);
  uVar4 = param_2 * 4 + 0x7fU & 0xffffff80;
  uVar1 = iVar3 + uVar4;
  if (((int)uVar4 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    *param_1 = iVar3;
    param_1[1] = param_2;
    return param_1;
  }
  iVar3 = FUN_0100b780(uVar4);
  *param_1 = iVar3;
  param_1[1] = param_2;
  return param_1;
}

// 0115AA40  FUN_0115aa40  size=33  [run]
void FUN_0115aa40(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_0115a950(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 0115AA70  FUN_0115aa70  size=40  [run]
void FUN_0115aa70(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_0115a950(param_1,0,param_2 + -1,0);
  }
  return;
}

// 0115AAE0  FUN_0115aae0  size=29  [run]
void __thiscall FUN_0115aae0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 0115AB30  hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector  size=34  [run]
void __thiscall
hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector
          (undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = 0x7f7fffee;
  *param_1 = vftable;
  param_1[2] = param_2;
  return;
}

// 0115AB70  hkpSymmetricAgentFlipCastCollector::hkpSymmetricAgentFlipCastCollector  size=56  [run]
void __thiscall
hkpSymmetricAgentFlipCastCollector::hkpSymmetricAgentFlipCastCollector
          (undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  param_1[1] = 0x7f7fffee;
  *param_1 = vftable;
  *(undefined8 *)(param_1 + 4) = *param_2;
  *(undefined8 *)(param_1 + 6) = param_2[1];
  param_1[8] = param_3;
  return;
}

// 0115ABC0  hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector  size=25  [run]
void __thiscall
hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector
          (undefined4 *param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = vftable;
  param_1[2] = param_2;
  return;
}

// 0115AC10  hkpBvTreeAgent::LinearCastAabbCastCollector::LinearCastAabbCastCollector  size=62  [run]
void __thiscall
hkpBvTreeAgent::LinearCastAabbCastCollector::LinearCastAabbCastCollector
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  *param_1 = hkpAabbCastCollector::vftable;
  param_1[4] = 0x3f800000;
  param_1[5] = 0x3f800000;
  param_1[6] = 0x3f800000;
  param_1[7] = 0x3f800000;
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[10] = param_4;
  *param_1 = vftable;
  param_1[0xb] = param_5;
  param_1[0xc] = param_6;
  return;
}

// 0115AC50  FUN_0115ac50  size=37  [run]
void FUN_0115ac50(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0115AC80  hkpBvTreeAgent::LinearCastAabbCastCollector::LinearCastAabbCastCollector_2  size=200  [run]
void hkpBvTreeAgent::LinearCastAabbCastCollector::LinearCastAabbCastCollector_2
               (undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 local_f0 [64];
  undefined1 local_b0 [64];
  undefined **local_70 [4];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 *local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_14;
  
  local_14 = param_1[2];
  FUN_01004c20(*(undefined4 *)(param_2 + 8));
  FUN_01004cf0(local_b0,param_1[2]);
  local_30 = *(float *)(local_14 + 0x30) + *(float *)(param_3 + 0x50);
  fStack_2c = *(float *)(local_14 + 0x34) + *(float *)(param_3 + 0x54);
  fStack_28 = *(float *)(local_14 + 0x38) + *(float *)(param_3 + 0x58);
  fStack_24 = *(float *)(local_14 + 0x3c) + *(float *)(param_3 + 0x5c);
  FUN_01007050(local_b0,&local_30);
  local_48 = param_3;
  local_60 = 0x3f800000;
  uStack_5c = 0x3f800000;
  uStack_58 = 0x3f800000;
  uStack_54 = 0x3f800000;
  local_44 = param_4;
  local_40 = param_5;
  local_70[0] = vftable;
  local_50 = param_1;
  local_4c = param_2;
  TtSCS::castAabb_2(*param_1,local_f0,&local_30,local_70,0);
  return;
}

// 0115AD50  hkpStaticCompoundAgent::vf14  size=35  [run]
void hkpStaticCompoundAgent::vf14
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  hkpBvTreeAgent::LinearCastAabbCastCollector::LinearCastAabbCastCollector_2
            (param_1,param_2,param_3,param_4,param_5);
  return;
}

// 0115AD80  hkpStaticCompoundAgent::hkpStaticCompoundAgent  size=28  [run]
undefined4 * __thiscall
hkpStaticCompoundAgent::hkpStaticCompoundAgent(undefined4 *param_1,undefined4 param_2)

{
  hkpBvTreeAgent::hkpBvTreeAgent(param_2);
  *param_1 = vftable;
  return param_1;
}

// 0115ADA0  FUN_0115ada0  size=49  [run]
void FUN_0115ada0(void)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 in_stack_00000010;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar2 + 4) = 0x40;
  hkpStaticCompoundAgent::hkpStaticCompoundAgent(in_stack_00000010);
  return;
}

// 0115ADE0  FUN_0115ade0  size=49  [run]
void FUN_0115ade0(void)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 in_stack_00000010;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar2 + 4) = 0x40;
  hkpStaticCompoundAgent::hkpStaticCompoundAgent(in_stack_00000010);
  return;
}

// 0115AE20  FUN_0115ae20  size=49  [run]
void FUN_0115ae20(void)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 in_stack_00000010;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar2 + 4) = 0x40;
  hkpStaticCompoundAgent::hkpStaticCompoundAgent(in_stack_00000010);
  return;
}

// 0115AE60  FUN_0115ae60  size=164  [run]
void FUN_0115ae60(void)

{
  code *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined2 local_8;
  
  local_18 = FUN_0115ade0;
  local_14 = hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector_3;
  local_10 = hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector_3;
  local_c = (code *)&LAB_0115af90;
  local_8 = 0x101;
  FUN_011633a0(&local_18,0x10,0xffffffff);
  local_18 = FUN_0115ada0;
  local_14 = FUN_01160510;
  local_10 = FUN_0115f090;
  local_c = hkpBvTreeAgent::LinearCastAabbCastCollector::LinearCastAabbCastCollector_2;
  local_8 = 0x100;
  FUN_011633a0(&local_18,0xffffffff,0x10);
  local_18 = FUN_0115ae20;
  local_14 = FUN_01160510;
  local_10 = FUN_0115f090;
  local_c = hkpBvTreeAgent::LinearCastAabbCastCollector::LinearCastAabbCastCollector_2;
  local_8 = 0x100;
  FUN_011633a0(&local_18,0x10,0x10);
  return;
}

// 0115AF10  hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector_3  size=51  [run]
void hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector_3
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0;
  local_10 = vftable;
  FUN_01160510(param_2,param_1,param_3,&local_10);
  return;
}

// 0115AF50  hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector_3  size=60  [run]
void hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector_3
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0x7f7fffee;
  local_10 = vftable;
  FUN_0115f090(param_2,param_1,param_3,&local_10);
  return;
}

// 0115B090  FUN_0115b090  size=39  [run]
void FUN_0115b090(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 0115B0C0  hkpSymmetricAgentFlipCollector::vf00  size=50  [run]
undefined4 * __thiscall hkpSymmetricAgentFlipCollector::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpCdPointCollector::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 0115B100  FUN_0115b100  size=39  [run]
void FUN_0115b100(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x30);
  }
  return;
}

// 0115B130  hkpSymmetricAgentFlipCastCollector::vf00  size=50  [run]
undefined4 * __thiscall hkpSymmetricAgentFlipCastCollector::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpCdPointCollector::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x30);
  }
  return param_1;
}

// 0115B170  FUN_0115b170  size=39  [run]
void FUN_0115b170(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 0115B1A0  hkpSymmetricAgentFlipBodyCollector::vf00  size=50  [run]
undefined4 * __thiscall hkpSymmetricAgentFlipBodyCollector::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpCdBodyPairCollector::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 0115B1E0  FUN_0115b1e0  size=39  [run]
void FUN_0115b1e0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x20);
  }
  return;
}

// 0115B210  hkpAabbCastCollector::vf04  size=50  [run]
undefined4 * __thiscall hkpAabbCastCollector::vf04(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x20);
  }
  return param_1;
}

// 0115B250  FUN_0115b250  size=39  [run]
void FUN_0115b250(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x40);
  }
  return;
}

// 0115B280  hkpBvTreeAgent::LinearCastAabbCastCollector::vf04  size=50  [run]
undefined4 * __thiscall
hkpBvTreeAgent::LinearCastAabbCastCollector::vf04(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpAabbCastCollector::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x40);
  }
  return param_1;
}

// 0115B2C0  FUN_0115b2c0  size=64  [run]
void __thiscall FUN_0115b2c0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0115B300  FUN_0115b300  size=64  [run]
void __fastcall FUN_0115b300(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0115B340  FUN_0115b340  size=64  [run]
void __fastcall FUN_0115b340(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0115B380  hkBaseObject::hkBaseObject_8  size=78  [run]
void __fastcall hkBaseObject::hkBaseObject_8(undefined4 *param_1)

{
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115B3D0  FUN_0115b3d0  size=38  [run]
void FUN_0115b3d0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0115B400  hkpBvTreeAgent::vf00  size=121  [run]
undefined4 * __thiscall hkpBvTreeAgent::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115B480  FUN_0115b480  size=38  [run]
void FUN_0115b480(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0115B4B0  hkBaseObject::hkBaseObject_10  size=78  [run]
void __fastcall hkBaseObject::hkBaseObject_10(undefined4 *param_1)

{
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115B500  hkpStaticCompoundAgent::vf00  size=121  [run]
undefined4 * __thiscall hkpStaticCompoundAgent::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115B580  FUN_0115b580  size=11  [run]
void __fastcall FUN_0115b580(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0115b589. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}

// 0115B590  FUN_0115b590  size=37  [run]
void FUN_0115b590(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0115B5C0  hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector  size=51  [run]
void hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0;
  local_10 = vftable;
  FUN_01160510(param_2,param_1,param_3,&local_10);
  return;
}

// 0115B600  hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector  size=60  [run]
void hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0x7f7fffee;
  local_10 = vftable;
  FUN_0115f090(param_2,param_1,param_3,&local_10);
  return;
}

// 0115B640  hkpBvTreeAgent::LinearCastAabbCastCollector::LinearCastAabbCastCollector  size=214  [run]
void hkpBvTreeAgent::LinearCastAabbCastCollector::LinearCastAabbCastCollector
               (undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
               undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 local_d0 [64];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined **local_80 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar1 = param_2[2];
  FUN_01004e90(uVar1,param_1[2]);
  (**(code **)(*(int *)*param_1 + 0x10))(local_d0,*(undefined4 *)(param_3 + 0xc),&local_40);
  local_90 = (local_40 + local_30) * 0.5;
  fStack_8c = (fStack_3c + fStack_2c) * 0.5;
  fStack_88 = (fStack_38 + fStack_28) * 0.5;
  fStack_84 = (fStack_34 + fStack_24) * 0.5;
  FUN_01006f90(uVar1,param_3 + 0x50);
  local_20 = local_20 + local_90;
  fStack_1c = fStack_1c + fStack_8c;
  fStack_18 = fStack_18 + fStack_88;
  fStack_14 = fStack_14 + fStack_84;
  local_58 = param_3;
  local_50 = param_5;
  local_60 = param_1;
  local_54 = param_4;
  local_70 = 0x3f800000;
  uStack_6c = 0x3f800000;
  uStack_68 = 0x3f800000;
  uStack_64 = 0x3f800000;
  local_80[0] = vftable;
  local_5c = param_2;
  (**(code **)(*(int *)*param_2 + 0x48))(&local_40,&local_20,local_80);
  return;
}

// 0115B720  hkpBvCompressedMeshAgent::vf14  size=35  [run]
void hkpBvCompressedMeshAgent::vf14
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  hkpBvTreeAgent::LinearCastAabbCastCollector::LinearCastAabbCastCollector
            (param_1,param_2,param_3,param_4,param_5);
  return;
}

// 0115B750  hkpBvCompressedMeshAgent::hkpBvCompressedMeshAgent  size=28  [run]
undefined4 * __thiscall
hkpBvCompressedMeshAgent::hkpBvCompressedMeshAgent(undefined4 *param_1,undefined4 param_2)

{
  hkpBvTreeAgent::hkpBvTreeAgent(param_2);
  *param_1 = vftable;
  return param_1;
}

// 0115B770  FUN_0115b770  size=49  [run]
void FUN_0115b770(void)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 in_stack_00000010;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar2 + 4) = 0x40;
  hkpBvCompressedMeshAgent::hkpBvCompressedMeshAgent(in_stack_00000010);
  return;
}

// 0115B7B0  FUN_0115b7b0  size=49  [run]
void FUN_0115b7b0(void)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 in_stack_00000010;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar2 + 4) = 0x40;
  hkpBvCompressedMeshAgent::hkpBvCompressedMeshAgent(in_stack_00000010);
  return;
}

// 0115B7F0  hkpSymmetricAgent<hkpBvCompressedMeshAgent>::hkpSymmetricAgent<hkpBvCompressedMeshAgent>_2  size=150  [run]
undefined4 *
hkpSymmetricAgent<hkpBvCompressedMeshAgent>::hkpSymmetricAgent<hkpBvCompressedMeshAgent>_2
          (int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined4 *puVar4;
  
  iVar2 = *param_2;
  iVar1 = (**(code **)(*(int *)(*param_1 + 0x14) + 4))();
  iVar2 = (**(code **)(*(int *)(iVar2 + 0x14) + 4))();
  if (iVar1 < iVar2) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x40);
    *(undefined2 *)(iVar2 + 4) = 0x40;
    puVar4 = (undefined4 *)hkpBvCompressedMeshAgent::hkpBvCompressedMeshAgent(param_4);
    return puVar4;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  puVar4 = (undefined4 *)(**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x40);
  *(undefined2 *)(puVar4 + 1) = 0x40;
  hkpBvCompressedMeshAgent::hkpBvCompressedMeshAgent(param_4);
  *puVar4 = vftable;
  return puVar4;
}

// 0115B890  FUN_0115b890  size=164  [run]
void FUN_0115b890(void)

{
  code *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined2 local_8;
  
  local_18 = FUN_0115b7b0;
  local_14 = hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector;
  local_10 = hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector;
  local_c = (code *)&LAB_0115b940;
  local_8 = 0x101;
  FUN_011633a0(&local_18,0x11,0xffffffff);
  local_18 = FUN_0115b770;
  local_14 = FUN_01160510;
  local_10 = FUN_0115f090;
  local_c = hkpBvTreeAgent::LinearCastAabbCastCollector::LinearCastAabbCastCollector;
  local_8 = 0x100;
  FUN_011633a0(&local_18,0xffffffff,0x11);
  local_18 = hkpSymmetricAgent<hkpBvCompressedMeshAgent>::
             hkpSymmetricAgent<hkpBvCompressedMeshAgent>_2;
  local_14 = FUN_01160510;
  local_10 = FUN_0115f090;
  local_c = hkpBvTreeAgent::LinearCastAabbCastCollector::LinearCastAabbCastCollector;
  local_8 = 0x100;
  FUN_011633a0(&local_18,0x11,0x11);
  return;
}

// 0115BA30  FUN_0115ba30  size=38  [run]
void FUN_0115ba30(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0115BA60  hkBaseObject::hkBaseObject_2  size=78  [run]
void __fastcall hkBaseObject::hkBaseObject_2(undefined4 *param_1)

{
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115BAB0  hkBaseObject::hkBaseObject_3  size=78  [run]
void __fastcall hkBaseObject::hkBaseObject_3(undefined4 *param_1)

{
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115BB00  hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>  size=28  [run]
undefined4 * __thiscall
hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::
hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>(undefined4 *param_1,undefined4 param_2)

{
  hkpBvCompressedMeshAgent::hkpBvCompressedMeshAgent(param_2);
  *param_1 = vftable;
  return param_1;
}

// 0115BB20  hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::vf20  size=28  [run]
void hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::vf20
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  hkpBvTreeAgent::vf20(param_2,param_1,param_3,param_4);
  return;
}

// 0115BBA0  FUN_0115bba0  size=106  [run]
void __fastcall FUN_0115bba0(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) ^ 0x80000000;
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) ^ 0x80000000;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) ^ 0x80000000;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  bVar2 = *(byte *)(param_1 + 0x39);
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) >> 4 | *(byte *)(param_1 + 0x3a) << 4;
  bVar3 = *(byte *)(param_1 + 0x38);
  *(byte *)(param_1 + 0x39) = bVar3;
  *(byte *)(param_1 + 0x38) = bVar2;
  uVar4 = *(undefined2 *)(param_1 + 0x30);
  iVar1 = (bVar2 - 1) + (uint)bVar3;
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_1 + 0x30 + iVar1 * 2);
  *(undefined2 *)(param_1 + 0x30 + iVar1 * 2) = uVar4;
  if ((*(byte *)(param_1 + 0x38) & *(byte *)(param_1 + 0x39)) == 2) {
    uVar4 = *(undefined2 *)(param_1 + 0x32);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x34);
    *(undefined2 *)(param_1 + 0x34) = uVar4;
  }
  return;
}

// 0115BC10  hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::vf0C  size=50  [run]
void hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::vf0C
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0;
  local_10 = hkpSymmetricAgentFlipBodyCollector::vftable;
  hkpBvTreeAgent::vf0C(param_2,param_1,param_3,&local_10);
  return;
}

// 0115BC50  hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::vf10  size=59  [run]
void hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::vf10
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0x7f7fffee;
  local_10 = hkpSymmetricAgentFlipCollector::vftable;
  hkpBvTreeAgent::vf10(param_2,param_1,param_3,&local_10);
  return;
}

// 0115BC90  hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::vf18  size=272  [run]
void hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::vf18
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  float fVar7;
  float *pfVar8;
  
  fVar3 = (float)param_4[0xc0c];
  uVar6 = *param_4;
  hkpBvTreeAgent::vf18(param_2,param_1,param_3,param_4);
  if (uVar6 < *param_4) {
    pfVar8 = (float *)(uVar6 + 0x10);
    do {
      fVar7 = pfVar8[3];
      pfVar8[-4] = fVar7 * *pfVar8 + pfVar8[-4];
      pfVar8[-3] = fVar7 * pfVar8[1] + pfVar8[-3];
      pfVar8[-2] = fVar7 * pfVar8[2] + pfVar8[-2];
      pfVar8[-1] = fVar7 * pfVar8[3] + pfVar8[-1];
      *pfVar8 = -*pfVar8;
      pfVar8[1] = -pfVar8[1];
      pfVar8[2] = -pfVar8[2];
      pfVar8[3] = pfVar8[3];
      pfVar1 = pfVar8 + 8;
      pfVar8 = pfVar8 + 0xc;
    } while (pfVar1 < (float *)*param_4);
  }
  if (fVar3 != (float)param_4[0xc0c]) {
    param_4[0xc08] = param_4[0xc08] ^ 0x80000000;
    param_4[0xc09] = param_4[0xc09] ^ 0x80000000;
    param_4[0xc0a] = param_4[0xc0a] ^ 0x80000000;
    param_4[0xc0b] = param_4[0xc0b];
    bVar4 = *(byte *)((int)param_4 + 0x3049);
    *(byte *)((int)param_4 + 0x304a) =
         *(byte *)((int)param_4 + 0x304a) >> 4 | *(byte *)((int)param_4 + 0x304a) << 4;
    *(byte *)((int)param_4 + 0x3049) = (byte)param_4[0xc12];
    iVar2 = ((byte)param_4[0xc12] - 1) + (uint)bVar4;
    uVar6 = param_4[0xc10];
    *(byte *)(param_4 + 0xc12) = bVar4;
    *(undefined2 *)(param_4 + 0xc10) = *(undefined2 *)((int)param_4 + iVar2 * 2 + 0x3040);
    *(short *)((int)param_4 + iVar2 * 2 + 0x3040) = (short)uVar6;
    if ((*(byte *)((int)param_4 + 0x3049) & (byte)param_4[0xc12]) == 2) {
      uVar5 = *(undefined2 *)((int)param_4 + 0x3042);
      *(short *)((int)param_4 + 0x3042) = (short)param_4[0xc11];
      *(undefined2 *)(param_4 + 0xc11) = uVar5;
    }
  }
  return;
}

// 0115BDA0  hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::vf00  size=121  [run]
undefined4 * __thiscall
hkpSymmetricAgentLinearCast<hkpBvCompressedMeshAgent>::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115BE20  hkpBvCompressedMeshAgent::vf00  size=121  [run]
undefined4 * __thiscall hkpBvCompressedMeshAgent::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115BEA0  hkpSymmetricAgent<hkpBvCompressedMeshAgent>::hkpSymmetricAgent<hkpBvCompressedMeshAgent>  size=28  [run]
undefined4 * __thiscall
hkpSymmetricAgent<hkpBvCompressedMeshAgent>::hkpSymmetricAgent<hkpBvCompressedMeshAgent>
          (undefined4 *param_1,undefined4 param_2)

{
  hkpBvCompressedMeshAgent::hkpBvCompressedMeshAgent(param_2);
  *param_1 = vftable;
  return param_1;
}

// 0115BEC0  hkpSymmetricAgent<hkpBvCompressedMeshAgent>::vf14  size=194  [run]
void hkpSymmetricAgent<hkpBvCompressedMeshAgent>::vf14
               (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
               int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined ***pppuVar4;
  undefined4 local_e0 [20];
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined **local_70;
  undefined4 local_6c;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined **local_40;
  undefined4 local_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_90 = param_3[0x14] ^ 0x80000000;
  uStack_8c = param_3[0x15] ^ 0x80000000;
  uStack_88 = param_3[0x16] ^ 0x80000000;
  uStack_84 = param_3[0x17] ^ 0x80000000;
  local_30 = *(undefined8 *)(param_3 + 0x14);
  puVar2 = param_3;
  puVar3 = local_e0;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_20 = param_4;
  local_28 = *(undefined8 *)(param_3 + 0x16);
  local_3c = 0x7f7fffee;
  local_40 = hkpSymmetricAgentFlipCastCollector::vftable;
  if (param_5 == 0) {
    pppuVar4 = (undefined ***)0x0;
  }
  else {
    local_6c = 0x7f7fffee;
    local_60 = *(undefined8 *)(param_3 + 0x14);
    pppuVar4 = &local_70;
    local_70 = hkpSymmetricAgentFlipCastCollector::vftable;
    local_50 = param_5;
    local_58 = local_28;
  }
  hkpBvCompressedMeshAgent::vf14(param_2,param_1,local_e0,&local_40,pppuVar4);
  return;
}

// 0115BF90  hkBaseObject::hkBaseObject_6  size=78  [run]
void __fastcall hkBaseObject::hkBaseObject_6(undefined4 *param_1)

{
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115BFF0  hkpSymmetricAgent<hkpBvCompressedMeshAgent>::vf00  size=121  [run]
undefined4 * __thiscall
hkpSymmetricAgent<hkpBvCompressedMeshAgent>::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115C070  hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector_7  size=51  [run]
void hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector_7
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0;
  local_10 = vftable;
  FUN_01160510(param_2,param_1,param_3,&local_10);
  return;
}

// 0115C0B0  hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector_7  size=60  [run]
void hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector_7
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0x7f7fffee;
  local_10 = vftable;
  FUN_0115f090(param_2,param_1,param_3,&local_10);
  return;
}

// 0115C1E0  FUN_0115c1e0  size=164  [run]
void FUN_0115c1e0(void)

{
  code *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined2 local_8;
  
  local_18 = hkpSymmetricAgent<hkpBvTreeStreamAgent>::hkpSymmetricAgent<hkpBvTreeStreamAgent>;
  local_14 = hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector_7;
  local_10 = hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector_7;
  local_c = (code *)&LAB_0115c0f0;
  local_8 = 0x101;
  FUN_011633a0(&local_18,9,0x17);
  local_18 = FUN_0115c460;
  local_14 = FUN_01160510;
  local_10 = FUN_0115f090;
  local_c = FUN_0115e490;
  local_8 = 0x100;
  FUN_011633a0(&local_18,0x17,9);
  local_18 = hkpSymmetricAgent<hkpMoppAgent>::hkpSymmetricAgent<hkpMoppAgent>_2;
  local_14 = FUN_01160510;
  local_10 = FUN_0115f090;
  local_c = FUN_0115e490;
  local_8 = 0x100;
  FUN_011633a0(&local_18,9,9);
  return;
}

// 0115C290  FUN_0115c290  size=23  [run]
void FUN_0115c290(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_01010f60();
  (**(code **)(*piVar1 + 0x20))(param_2);
  return;
}

// 0115C2B0  hkpBvTreeStreamAgent::vf0C  size=31  [run]
void hkpBvTreeStreamAgent::vf0C
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01160510(param_1,param_2,param_3,param_4);
  return;
}

// 0115C2D0  hkpBvTreeStreamAgent::vf10  size=31  [run]
void hkpBvTreeStreamAgent::vf10
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0115f090(param_1,param_2,param_3,param_4);
  return;
}

// 0115C2F0  hkpBvTreeStreamAgent::vf14  size=35  [run]
void hkpBvTreeStreamAgent::vf14
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_01160310(param_1,param_2,param_3,param_4,param_5);
  return;
}

// 0115C320  hkpBvTreeStreamAgent::vf1C  size=45  [run]
void __thiscall hkpBvTreeStreamAgent::vf1C(undefined4 *param_1,undefined4 param_2)

{
  FUN_0117dfa0(param_1 + 0xc,param_1[3],param_1[2],param_2);
  (**(code **)*param_1)(1);
  return;
}

// 0115C350  hkpBvTreeStreamAgent::vf24  size=23  [run]
void __thiscall hkpBvTreeStreamAgent::vf24(int param_1,undefined4 param_2)

{
  FUN_0117d4b0(param_1 + 0x30,param_2);
  return;
}

// 0115C370  hkpBvTreeStreamAgent::vf28  size=47  [run]
void __thiscall
hkpBvTreeStreamAgent::vf28(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0117d5b0(param_1 + 0x30,param_2,param_3,param_4);
  return;
}

// 0115C3A0  hkpBvTreeStreamAgent::vf20  size=87  [run]
void __thiscall
hkpBvTreeStreamAgent::vf20
          (int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  local_18 = (**(code **)(*(int *)*param_3 + 0x38))();
  local_24 = param_2;
  local_10 = *(undefined4 *)(param_1 + 8);
  local_14 = param_4;
  local_20 = param_3;
  local_c = param_5;
  FUN_0117e610(param_1 + 0x30,&local_24);
  return;
}

// 0115C400  hkpBvTreeStreamAgent::hkpBvTreeStreamAgent  size=85  [run]
undefined4 * __thiscall
hkpBvTreeStreamAgent::hkpBvTreeStreamAgent
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
          undefined4 param_5)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = param_5;
  *param_1 = vftable;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x80000000;
  param_1[3] = *param_4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_0117e100(param_1 + 0xc);
  return param_1;
}

// 0115C460  FUN_0115c460  size=61  [run]
void FUN_0115c460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar2 + 4) = 0x40;
  hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(param_1,param_2,param_3,param_4);
  return;
}

// 0115C4A0  hkpBvTreeStreamAgent::vf18  size=1581  [run]
void __thiscall
hkpBvTreeStreamAgent::vf18
          (int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  char cVar14;
  LPVOID pvVar15;
  float *pfVar16;
  int *piVar17;
  int extraout_ECX;
  int iVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  float fVar43;
  undefined1 auVar41 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined4 *puVar46;
  undefined4 *local_350;
  int local_34c;
  int local_348;
  undefined4 local_344 [129];
  undefined1 local_140 [64];
  undefined4 *local_100;
  undefined4 *local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined1 local_e0 [80];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 local_40 [8];
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [8];
  float fStack_28;
  float fStack_24;
  int local_20;
  int local_1c;
  float local_18;
  int *local_14;
  
  local_1c = param_1;
  pvVar15 = TlsGetValue(DAT_01f8fc54);
  puVar46 = *(undefined4 **)((int)pvVar15 + 4);
  if (puVar46 < *(undefined4 **)((int)pvVar15 + 0xc)) {
    *puVar46 = "LtBvTree3";
    puVar46[3] = "StQueryTree";
    uVar8 = rdtsc();
    local_14 = (int *)uVar8;
    puVar46[1] = local_14;
    *(undefined4 **)((int)pvVar15 + 4) = puVar46 + 4;
  }
  local_f0 = *(undefined4 *)(param_1 + 8);
  iVar18 = param_2[2];
  local_fc = param_3;
  iVar4 = param_3[2];
  local_f8 = 0;
  local_100 = param_2;
  local_f4 = param_4;
  fVar20 = *(float *)(iVar18 + 0x5c) * *(float *)(param_4 + 0x58);
  fVar26 = *(float *)(iVar4 + 0x5c) * *(float *)(param_4 + 0x58);
  local_90 = (*(float *)(iVar18 + 0x40) - *(float *)(iVar18 + 0x50)) * fVar20 +
             (*(float *)(iVar4 + 0x50) - *(float *)(iVar4 + 0x40)) * fVar26;
  fStack_8c = (*(float *)(iVar18 + 0x44) - *(float *)(iVar18 + 0x54)) * fVar20 +
              (*(float *)(iVar4 + 0x54) - *(float *)(iVar4 + 0x44)) * fVar26;
  fStack_88 = (*(float *)(iVar18 + 0x48) - *(float *)(iVar18 + 0x58)) * fVar20 +
              (*(float *)(iVar4 + 0x58) - *(float *)(iVar4 + 0x48)) * fVar26;
  fStack_84 = *(float *)(iVar4 + 0x9c) * fVar26 * *(float *)(iVar4 + 0xa0) +
              *(float *)(iVar18 + 0x9c) * fVar20 * *(float *)(iVar18 + 0xa0);
  FUN_01004e90(iVar18,iVar4);
  local_350 = local_344;
  local_348 = -0x7fffff80;
  local_344[0] = 0xffffffff;
  local_34c = 1;
  FUN_01004c20(local_e0);
  local_20 = param_2[2];
  puVar5 = (undefined8 *)param_3[2];
  uVar8 = puVar5[2];
  local_50 = (float)*puVar5;
  fStack_4c = (float)((ulonglong)*puVar5 >> 0x20);
  fStack_48 = (float)puVar5[1];
  uStack_58 = puVar5[3];
  uVar1 = puVar5[4];
  local_60._0_4_ = (float)uVar8;
  local_60._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
  uVar2 = puVar5[5];
  local_70._0_4_ = (float)uVar1;
  local_70._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  uStack_68._0_4_ = (float)uVar2;
  uStack_68._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  pcVar6 = *(code **)(*(int *)*param_2 + 0x10);
  local_50 = fStack_8c * fStack_4c + local_90 * local_50 + fStack_88 * fStack_48;
  fStack_4c = fStack_8c * local_60._4_4_ + local_90 * (float)local_60 + fStack_88 * (float)uStack_58
  ;
  fStack_48 = fStack_8c * local_70._4_4_ + local_90 * (float)local_70 + fStack_88 * (float)uStack_68
  ;
  fStack_44 = fStack_8c * uStack_68._4_4_ + local_90 * local_70._4_4_ + fStack_88 * uStack_68._4_4_;
  local_70 = uVar1;
  uStack_68 = uVar2;
  local_60 = uVar8;
  if (*(int *)(*(int *)(param_4 + 0x60) + 0x10) == 0) {
    (*pcVar6)(local_140,*(float *)(param_4 + 0xc) * 0.5,local_40);
    fVar36 = (float)local_30._0_4_ - (float)local_40._0_4_;
    fVar37 = (float)local_30._4_4_ - (float)local_40._4_4_;
    fVar38 = fStack_28 - fStack_38;
    fVar39 = fStack_24 - fStack_34;
    iVar18 = extraout_ECX;
    fVar20 = local_50;
    fVar26 = fStack_4c;
    fVar24 = fStack_48;
    fVar25 = fStack_44;
    fVar27 = (float)local_30._0_4_;
    fVar31 = (float)local_30._4_4_;
    fVar32 = fStack_28;
    fVar33 = fStack_24;
    fVar40 = (float)local_40._0_4_;
    fVar42 = (float)local_40._4_4_;
    fVar43 = fStack_38;
    fVar44 = fStack_34;
  }
  else {
    fVar20 = *(float *)((int)puVar5 + 0x9c);
    local_18 = fVar20 * fVar20 * *(float *)(puVar5 + 0x14);
    local_14 = (int *)*param_2;
    (*pcVar6)(local_140,
              (*(float *)(local_20 + 0x9c) + fVar20) * *(float *)(local_20 + 0xa0) + local_18 +
              *(float *)(param_4 + 0xc) * 0.5,local_40);
    puVar7 = (undefined8 *)param_3[2];
    uVar8 = *puVar7;
    fVar20 = *(float *)(param_4 + 0xc) * 0.5 + *(float *)(local_20 + 0xa0) + local_18;
    uStack_68 = puVar7[1];
    uVar1 = puVar7[2];
    local_70._0_4_ = (float)uVar8;
    local_70._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
    uStack_58 = puVar7[3];
    uVar2 = puVar7[4];
    local_60._0_4_ = (float)uVar1;
    local_60._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    uVar3 = puVar7[5];
    local_80._0_4_ = (float)uVar2;
    local_80._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
    uStack_78._0_4_ = (float)uVar3;
    uStack_78._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
    auVar45._0_12_ = ZEXT812(0);
    auVar45._12_4_ = 0;
    fVar26 = *(float *)(local_20 + 0x50) - *(float *)(puVar7 + 6);
    fVar24 = *(float *)(local_20 + 0x54) - *(float *)((int)puVar7 + 0x34);
    fVar25 = *(float *)(local_20 + 0x58) - *(float *)(puVar7 + 7);
    fVar27 = fVar24 * local_70._4_4_ + fVar26 * (float)local_70 + (float)uStack_68 * fVar25;
    fVar31 = fVar24 * local_60._4_4_ + fVar26 * (float)local_60 + (float)uStack_58 * fVar25;
    fVar32 = fVar24 * local_80._4_4_ + fVar26 * (float)local_80 + (float)uStack_78 * fVar25;
    fVar33 = fVar24 * uStack_78._4_4_ + fVar26 * local_80._4_4_ + uStack_78._4_4_ * fVar25;
    auVar21._0_4_ = fVar27 - fVar20;
    auVar21._4_4_ = fVar31 - fVar20;
    auVar21._8_4_ = fVar32 - fVar20;
    auVar21._12_4_ = fVar33 - 0.0;
    auVar21 = maxps(_local_40,auVar21);
    auVar34._0_4_ = fVar27 + fVar20;
    auVar34._4_4_ = fVar31 + fVar20;
    auVar34._8_4_ = fVar32 + fVar20;
    auVar34._12_4_ = fVar33 + 0.0;
    auVar34 = minps(_local_30,auVar34);
    fVar36 = auVar34._0_4_ - auVar21._0_4_;
    fVar37 = auVar34._4_4_ - auVar21._4_4_;
    fVar38 = auVar34._8_4_ - auVar21._8_4_;
    fVar39 = auVar34._12_4_ - auVar21._12_4_;
    fVar20 = local_50;
    fVar26 = fStack_4c;
    fVar24 = fStack_48;
    fVar25 = fStack_44;
    if (0.0 < *(float *)((int)puVar5 + 0x9c)) {
      fVar31 = fVar31 - *(float *)((int)puVar5 + 0x84);
      fVar33 = fVar33 - *(float *)((int)puVar5 + 0x8c);
      fVar25 = *(float *)((int)puVar5 + 0x5c) * *(float *)(param_4 + 0x58);
      fVar20 = (*(float *)(puVar5 + 0x13) * fVar31 -
               (fVar32 - *(float *)(puVar5 + 0x11)) * *(float *)((int)puVar5 + 0x94)) * fVar25 +
               local_50;
      fVar26 = (*(float *)(puVar5 + 0x12) * (fVar32 - *(float *)(puVar5 + 0x11)) -
               (fVar27 - *(float *)(puVar5 + 0x10)) * *(float *)(puVar5 + 0x13)) * fVar25 +
               fStack_4c;
      fVar24 = (*(float *)((int)puVar5 + 0x94) * (fVar27 - *(float *)(puVar5 + 0x10)) -
               fVar31 * *(float *)(puVar5 + 0x12)) * fVar25 + fStack_48;
      fVar25 = (*(float *)((int)puVar5 + 0x9c) * fVar33 - fVar33 * *(float *)((int)puVar5 + 0x9c)) *
               fVar25 + fStack_44;
    }
    auVar41._4_4_ = fVar26;
    auVar41._0_4_ = fVar20;
    auVar41._8_4_ = fVar24;
    auVar41._12_4_ = fVar25;
    auVar41 = minps(ZEXT816(0),auVar41);
    auVar10._4_4_ = fVar26;
    auVar10._0_4_ = fVar20;
    auVar10._8_4_ = fVar24;
    auVar10._12_4_ = fVar25;
    auVar45 = maxps(auVar45,auVar10);
    local_40._0_4_ = auVar41._0_4_ + auVar21._0_4_;
    local_40._4_4_ = auVar41._4_4_ + auVar21._4_4_;
    fStack_38 = auVar41._8_4_ + auVar21._8_4_;
    fStack_34 = auVar41._12_4_ + auVar21._12_4_;
    local_30._0_4_ = auVar45._0_4_ + auVar34._0_4_;
    local_30._4_4_ = auVar45._4_4_ + auVar34._4_4_;
    fStack_28 = auVar45._8_4_ + auVar34._8_4_;
    fStack_24 = auVar45._12_4_ + auVar34._12_4_;
    iVar18 = local_20;
    fVar27 = (float)local_30._0_4_;
    fVar31 = (float)local_30._4_4_;
    fVar32 = fStack_28;
    fVar33 = fStack_24;
    fVar40 = (float)local_40._0_4_;
    fVar42 = (float)local_40._4_4_;
    fVar43 = fStack_38;
    fVar44 = fStack_34;
    local_80 = uVar2;
    uStack_78 = uVar3;
    local_70 = uVar8;
    local_60 = uVar1;
  }
  pfVar16 = (float *)(local_1c + 0x10);
  if (pfVar16 == (float *)0x0) {
LAB_0115c929:
    (**(code **)(*(int *)*param_3 + 0x44))(local_40,&local_350);
    bVar13 = false;
  }
  else {
    auVar29._0_4_ = -(uint)(fVar27 <= *(float *)(local_1c + 0x20) && *pfVar16 <= fVar40);
    auVar29._4_4_ =
         -(uint)(fVar31 <= *(float *)(local_1c + 0x24) && *(float *)(local_1c + 0x14) <= fVar42);
    auVar29._8_4_ =
         -(uint)(fVar32 <= *(float *)(local_1c + 0x28) && *(float *)(local_1c + 0x18) <= fVar43);
    auVar29._12_4_ =
         -(uint)(fVar33 <= *(float *)(local_1c + 0x2c) && *(float *)(local_1c + 0x1c) <= fVar44);
    uVar19 = movmskps(iVar18,auVar29);
    if (((byte)uVar19 & 7) != 7) {
      fVar28 = *(float *)(param_4 + 0xc) * 0.5;
      auVar22._0_12_ = ZEXT812(0);
      auVar22._12_4_ = 0;
      auVar11._4_4_ = fVar26;
      auVar11._0_4_ = fVar20;
      auVar11._8_4_ = fVar24;
      auVar11._12_4_ = fVar25;
      auVar21 = maxps(ZEXT816(0),auVar11);
      auVar30._0_4_ = auVar21._0_4_ * -2.0;
      auVar30._4_4_ = auVar21._4_4_ * -2.0;
      auVar30._8_4_ = auVar21._8_4_ * -2.0;
      auVar30._12_4_ = auVar21._12_4_ * -2.0;
      auVar12._4_4_ = fVar26;
      auVar12._0_4_ = fVar20;
      auVar12._8_4_ = fVar24;
      auVar12._12_4_ = fVar25;
      auVar21 = minps(auVar22,auVar12);
      auVar23._0_4_ = auVar21._0_4_ * -2.0;
      auVar23._4_4_ = auVar21._4_4_ * -2.0;
      auVar23._8_4_ = auVar21._8_4_ * -2.0;
      auVar23._12_4_ = auVar21._12_4_ * -2.0;
      auVar35._0_8_ = CONCAT44(fVar37 * 0.4,fVar36 * 0.4) ^ 0x8000000080000000;
      auVar35._8_4_ = -(fVar38 * 0.4);
      auVar35._12_4_ = -(fVar39 * 0.4);
      auVar21 = maxps(auVar30,auVar35);
      local_40._0_4_ = auVar21._0_4_ + (fVar40 - fVar28);
      local_40._4_4_ = auVar21._4_4_ + (fVar42 - fVar28);
      fStack_38 = auVar21._8_4_ + (fVar43 - fVar28);
      fStack_34 = auVar21._12_4_ + (fVar44 - 0.0);
      auVar9._4_4_ = fVar37 * 0.4;
      auVar9._0_4_ = fVar36 * 0.4;
      auVar9._8_4_ = fVar38 * 0.4;
      auVar9._12_4_ = fVar39 * 0.4;
      auVar21 = minps(auVar23,auVar9);
      local_30._0_4_ = auVar21._0_4_ + fVar28 + fVar27;
      local_30._4_4_ = auVar21._4_4_ + fVar28 + fVar31;
      fStack_28 = auVar21._8_4_ + fVar28 + fVar32;
      fStack_24 = auVar21._12_4_ + fVar33 + 0.0;
      *pfVar16 = (float)local_40._0_4_;
      *(undefined4 *)(local_1c + 0x14) = local_40._4_4_;
      *(float *)(local_1c + 0x18) = fStack_38;
      *(float *)(local_1c + 0x1c) = fStack_34;
      *(undefined4 *)(local_1c + 0x20) = local_30._0_4_;
      *(undefined4 *)(local_1c + 0x24) = local_30._4_4_;
      *(float *)(local_1c + 0x28) = fStack_28;
      *(float *)(local_1c + 0x2c) = fStack_24;
      goto LAB_0115c929;
    }
    bVar13 = true;
  }
  pvVar15 = TlsGetValue(DAT_01f8fc54);
  iVar18 = local_34c;
  puVar46 = *(undefined4 **)((int)pvVar15 + 4);
  if (puVar46 < *(undefined4 **)((int)pvVar15 + 0xc)) {
    *puVar46 = "StNarrow";
    uVar8 = rdtsc();
    local_14 = (int *)uVar8;
    puVar46[1] = local_14;
    *(undefined4 **)((int)pvVar15 + 4) = puVar46 + 3;
  }
  if (bVar13) {
    uVar19 = (**(code **)(*(int *)*param_3 + 0x38))();
    puVar46 = (undefined4 *)0x0;
  }
  else {
    iVar4 = *(int *)(local_1c + 0x34);
    piVar17 = (int *)FUN_01010f60();
    cVar14 = (**(code **)(*piVar17 + 0x20))
                       (((((int)(iVar18 + (iVar18 >> 0x1f & 3U)) >> 2) - iVar4) + 1) * 0x200);
    if (cVar14 == '\0') {
      FUN_01448540(1);
      pvVar15 = TlsGetValue(DAT_01f8fc54);
      puVar46 = *(undefined4 **)((int)pvVar15 + 4);
      if (puVar46 < *(undefined4 **)((int)pvVar15 + 0xc)) {
        *puVar46 = &DAT_017e01a0;
        uVar8 = rdtsc();
        local_14 = (int *)uVar8;
        puVar46[1] = local_14;
        *(undefined4 **)((int)pvVar15 + 4) = puVar46 + 3;
      }
      goto LAB_0115ca8d;
    }
    local_18 = (float)((uint)local_18 & 0xffffff00);
    if (1 < local_34c) {
      FUN_0115a950(local_350,0,local_34c + -1,local_18);
    }
    uVar19 = (**(code **)(*(int *)*param_3 + 0x38))();
    puVar46 = local_350;
  }
  FUN_0117ece0(local_1c + 0x30,&local_100,uVar19,puVar46,param_5);
  pvVar15 = TlsGetValue(DAT_01f8fc54);
  puVar46 = *(undefined4 **)((int)pvVar15 + 4);
  if (puVar46 < *(undefined4 **)((int)pvVar15 + 0xc)) {
    *puVar46 = &DAT_017e01a0;
    uVar8 = rdtsc();
    local_14 = (int *)uVar8;
    puVar46[1] = local_14;
    *(undefined4 **)((int)pvVar15 + 4) = puVar46 + 3;
  }
LAB_0115ca8d:
  local_34c = 0;
  if (-1 < local_348) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_350,local_348 * 4);
  }
  return;
}

// 0115CAD0  hkpSymmetricAgent<hkpBvTreeStreamAgent>::hkpSymmetricAgent<hkpBvTreeStreamAgent>_3  size=227  [run]
undefined4 *
hkpSymmetricAgent<hkpBvTreeStreamAgent>::hkpSymmetricAgent<hkpBvTreeStreamAgent>_3
          (undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (param_4 == 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    puVar3 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x40);
    *(undefined2 *)(puVar3 + 1) = 0x40;
    hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(param_2,param_1,param_3,0);
    *puVar3 = vftable;
    return puVar3;
  }
  iVar1 = (**(code **)(**(int **)(param_3 + 0x14) + 0xc))(param_1,param_2,param_3);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x38);
      *(undefined2 *)(iVar1 + 4) = 0x38;
      puVar3 = (undefined4 *)
               hkpShapeCollectionAgent::hkpShapeCollectionAgent(param_1,param_2,param_3,param_4);
      return puVar3;
    }
    if (iVar1 != 2) {
      return (undefined4 *)0x0;
    }
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar1 + 4) = 0x40;
  puVar3 = (undefined4 *)hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(param_1,param_2,param_3,param_4)
  ;
  return puVar3;
}

// 0115CBC0  hkpSymmetricAgent<hkpBvTreeStreamAgent>::hkpSymmetricAgent<hkpBvTreeStreamAgent>  size=73  [run]
undefined4 *
hkpSymmetricAgent<hkpBvTreeStreamAgent>::hkpSymmetricAgent<hkpBvTreeStreamAgent>
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(puVar2 + 1) = 0x40;
  hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(param_2,param_1,param_3,param_4);
  *puVar2 = vftable;
  return puVar2;
}

// 0115CC10  FUN_0115cc10  size=143  [run]
void FUN_0115cc10(void)

{
  code *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined2 local_8;
  
  local_18 = hkpSymmetricAgent<hkpBvTreeStreamAgent>::hkpSymmetricAgent<hkpBvTreeStreamAgent>;
  local_14 = hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector_6;
  local_10 = hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector_6;
  local_c = (code *)&LAB_0115d1d0;
  local_8 = 0x101;
  FUN_011633a0(&local_18,0x16,0x17);
  FUN_011633a0(&local_18,7,0x17);
  local_18 = FUN_0115c460;
  local_14 = FUN_01160510;
  local_10 = FUN_0115f090;
  local_c = FUN_01160310;
  local_8 = 0x100;
  FUN_011633a0(&local_18,0x17,0x16);
  FUN_011633a0(&local_18,0x17,7);
  return;
}

// 0115CCA0  FUN_0115cca0  size=143  [run]
void FUN_0115cca0(void)

{
  code *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined2 local_8;
  
  local_18 = hkpSymmetricAgent<hkpBvTreeStreamAgent>::hkpSymmetricAgent<hkpBvTreeStreamAgent>;
  local_14 = hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector_6;
  local_10 = hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector_6;
  local_c = (code *)&LAB_0115d1d0;
  local_8 = 0x101;
  FUN_011633a0(&local_18,0x16,0x21);
  FUN_011633a0(&local_18,7,0x21);
  local_18 = FUN_0115c460;
  local_14 = FUN_01160510;
  local_10 = FUN_0115f090;
  local_c = FUN_01160310;
  local_8 = 0x100;
  FUN_011633a0(&local_18,0x21,0x16);
  FUN_011633a0(&local_18,0x21,7);
  return;
}

// 0115CD30  hkpSymmetricAgent<hkpBvTreeStreamAgent>::hkpSymmetricAgent<hkpBvTreeStreamAgent>_4  size=256  [run]
undefined4 *
hkpSymmetricAgent<hkpBvTreeStreamAgent>::hkpSymmetricAgent<hkpBvTreeStreamAgent>_4
          (undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  
  if (param_4 == 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    puVar3 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x40);
    *(undefined2 *)(puVar3 + 1) = 0x40;
    hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(param_2,param_1,param_3,0);
    *puVar3 = vftable;
    return puVar3;
  }
  iVar1 = (**(code **)(**(int **)(param_3 + 0x14) + 0xc))(param_2,param_1,param_3);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      puVar3 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x38);
      *(undefined2 *)(puVar3 + 1) = 0x38;
      hkpShapeCollectionAgent::hkpShapeCollectionAgent(param_2,param_1,param_3,param_4);
      *puVar3 = hkpSymmetricAgent<hkpShapeCollectionAgent>::vftable;
      return puVar3;
    }
    if (iVar1 != 2) {
      return (undefined4 *)0x0;
    }
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  puVar3 = (undefined4 *)(**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x40);
  *(undefined2 *)(puVar3 + 1) = 0x40;
  hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(param_2,param_1,param_3,param_4);
  *puVar3 = vftable;
  return puVar3;
}

// 0115CE30  FUN_0115ce30  size=143  [run]
void FUN_0115ce30(void)

{
  code *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined2 local_8;
  
  local_18 = hkpSymmetricAgent<hkpBvTreeStreamAgent>::hkpSymmetricAgent<hkpBvTreeStreamAgent>_4;
  local_14 = hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector_6;
  local_10 = hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector_6;
  local_c = (code *)&LAB_0115d1d0;
  local_8 = 0x101;
  FUN_011633a0(&local_18,0x16,0x1a);
  FUN_011633a0(&local_18,7,0x1a);
  local_18 = hkpSymmetricAgent<hkpBvTreeStreamAgent>::hkpSymmetricAgent<hkpBvTreeStreamAgent>_3;
  local_14 = FUN_01160510;
  local_10 = FUN_0115f090;
  local_c = FUN_01160310;
  local_8 = 0x100;
  FUN_011633a0(&local_18,0x1a,0x16);
  FUN_011633a0(&local_18,0x1a,7);
  return;
}

// 0115CEC0  FUN_0115cec0  size=12  [run]
void __thiscall FUN_0115cec0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0115CED0  FUN_0115ced0  size=12  [run]
void __thiscall FUN_0115ced0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0115CEE0  FUN_0115cee0  size=12  [run]
void __thiscall FUN_0115cee0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0115CF60  FUN_0115cf60  size=26  [run]
void __thiscall FUN_0115cf60(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0115CFB0  FUN_0115cfb0  size=28  [run]
void __thiscall FUN_0115cfb0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 0115CFE0  hkpCollisionAgent::hkpCollisionAgent  size=30  [run]
void __thiscall hkpCollisionAgent::hkpCollisionAgent(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = param_2;
  return;
}

// 0115D000  hkpCollisionAgent::vf20  size=3  [run]
void hkpCollisionAgent::vf20(void)

{
  return;
}

// 0115D020  FUN_0115d020  size=14  [run]
void __thiscall FUN_0115d020(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0115D050  FUN_0115d050  size=127  [run]
void FUN_0115d050(int param_1,int param_2,float param_3,float *param_4)

{
  float fVar1;
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
  
  fVar13 = *(float *)(param_1 + 0x5c) * param_3;
  fVar1 = *(float *)(param_1 + 0x44);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x4c);
  fVar4 = *(float *)(param_1 + 0x54);
  fVar5 = *(float *)(param_1 + 0x58);
  fVar6 = *(float *)(param_1 + 0x5c);
  fVar7 = *(float *)(param_2 + 0x54);
  fVar8 = *(float *)(param_2 + 0x58);
  fVar9 = *(float *)(param_2 + 0x5c);
  param_3 = *(float *)(param_2 + 0x5c) * param_3;
  fVar10 = *(float *)(param_2 + 0x44);
  fVar11 = *(float *)(param_2 + 0x48);
  fVar12 = *(float *)(param_2 + 0x4c);
  *param_4 = (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x50)) * fVar13 +
             param_3 * (*(float *)(param_2 + 0x50) - *(float *)(param_2 + 0x40));
  param_4[1] = (fVar1 - fVar4) * fVar13 + param_3 * (fVar7 - fVar10);
  param_4[2] = (fVar2 - fVar5) * fVar13 + param_3 * (fVar8 - fVar11);
  param_4[3] = (fVar3 - fVar6) * fVar13 + param_3 * (fVar9 - fVar12);
  param_4[3] = *(float *)(param_1 + 0x9c) * fVar13 * *(float *)(param_1 + 0xa0) +
               *(float *)(param_2 + 0x9c) * param_3 * *(float *)(param_2 + 0xa0);
  return;
}

// 0115D0D0  FUN_0115d0d0  size=37  [run]
void FUN_0115d0d0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0115D100  FUN_0115d100  size=37  [run]
void FUN_0115d100(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0115D150  hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector_6  size=51  [run]
void hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector_6
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0;
  local_10 = vftable;
  FUN_01160510(param_2,param_1,param_3,&local_10);
  return;
}

// 0115D190  hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector_6  size=60  [run]
void hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector_6
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0x7f7fffee;
  local_10 = vftable;
  FUN_0115f090(param_2,param_1,param_3,&local_10);
  return;
}

// 0115D2C0  FUN_0115d2c0  size=25  [run]
void __thiscall FUN_0115d2c0(int *param_1,undefined4 *param_2)

{
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0115D310  FUN_0115d310  size=38  [run]
void FUN_0115d310(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0115D340  hkpCollisionAgent::vf00  size=53  [run]
undefined4 * __thiscall hkpCollisionAgent::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115D720  FUN_0115d720  size=61  [run]
void __thiscall FUN_0115d720(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0115D760  FUN_0115d760  size=63  [run]
void __thiscall FUN_0115d760(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0115D7A0  FUN_0115d7a0  size=61  [run]
void __fastcall FUN_0115d7a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0115D7E0  FUN_0115d7e0  size=63  [run]
void __fastcall FUN_0115d7e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0115D820  FUN_0115d820  size=61  [run]
void __fastcall FUN_0115d820(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0115D860  FUN_0115d860  size=27  [run]
void __thiscall FUN_0115d860(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffff80;
  return;
}

// 0115D880  FUN_0115d880  size=63  [run]
void __fastcall FUN_0115d880(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0115D8C0  FUN_0115d8c0  size=61  [run]
void __fastcall FUN_0115d8c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0115D920  FUN_0115d920  size=61  [run]
void __fastcall FUN_0115d920(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0115D960  FUN_0115d960  size=63  [run]
void __fastcall FUN_0115d960(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0115D9A0  hkBaseObject::hkBaseObject_62  size=75  [run]
void __fastcall hkBaseObject::hkBaseObject_62(undefined4 *param_1)

{
  *param_1 = hkpBvTreeStreamAgent::vftable;
  param_1[0xd] = 0;
  if (-1 < (int)param_1[0xe]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],param_1[0xe] * 4);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115D9F0  FUN_0115d9f0  size=38  [run]
void FUN_0115d9f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0115DA20  hkpBvTreeStreamAgent::vf00  size=118  [run]
undefined4 * __thiscall hkpBvTreeStreamAgent::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  param_1[0xd] = 0;
  if (-1 < (int)param_1[0xe]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],param_1[0xe] * 4);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115DAA0  hkBaseObject::hkBaseObject_63  size=75  [run]
void __fastcall hkBaseObject::hkBaseObject_63(undefined4 *param_1)

{
  *param_1 = hkpBvTreeStreamAgent::vftable;
  param_1[0xd] = 0;
  if (-1 < (int)param_1[0xe]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],param_1[0xe] * 4);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115DAF0  hkBaseObject::hkBaseObject_65  size=71  [run]
void __fastcall hkBaseObject::hkBaseObject_65(undefined4 *param_1)

{
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 8);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115DB40  hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>  size=42  [run]
undefined4 * __thiscall
hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(param_3,param_2,param_4,param_5);
  *param_1 = vftable;
  return param_1;
}

// 0115DB70  hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::vf0C  size=50  [run]
void hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::vf0C
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0;
  local_10 = hkpSymmetricAgentFlipBodyCollector::vftable;
  hkpBvTreeStreamAgent::vf0C(param_2,param_1,param_3,&local_10);
  return;
}

// 0115DBB0  hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::vf10  size=59  [run]
void hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::vf10
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0x7f7fffee;
  local_10 = hkpSymmetricAgentFlipCollector::vftable;
  hkpBvTreeStreamAgent::vf10(param_2,param_1,param_3,&local_10);
  return;
}

// 0115DBF0  hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::vf20  size=28  [run]
void hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::vf20
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  hkpBvTreeStreamAgent::vf20(param_2,param_1,param_3,param_4);
  return;
}

// 0115DC10  hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::vf18  size=272  [run]
void hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::vf18
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  float fVar7;
  float *pfVar8;
  
  fVar3 = (float)param_4[0xc0c];
  uVar6 = *param_4;
  hkpBvTreeStreamAgent::vf18(param_2,param_1,param_3,param_4);
  if (uVar6 < *param_4) {
    pfVar8 = (float *)(uVar6 + 0x10);
    do {
      fVar7 = pfVar8[3];
      pfVar8[-4] = fVar7 * *pfVar8 + pfVar8[-4];
      pfVar8[-3] = fVar7 * pfVar8[1] + pfVar8[-3];
      pfVar8[-2] = fVar7 * pfVar8[2] + pfVar8[-2];
      pfVar8[-1] = fVar7 * pfVar8[3] + pfVar8[-1];
      *pfVar8 = -*pfVar8;
      pfVar8[1] = -pfVar8[1];
      pfVar8[2] = -pfVar8[2];
      pfVar8[3] = pfVar8[3];
      pfVar1 = pfVar8 + 8;
      pfVar8 = pfVar8 + 0xc;
    } while (pfVar1 < (float *)*param_4);
  }
  if (fVar3 != (float)param_4[0xc0c]) {
    param_4[0xc08] = param_4[0xc08] ^ 0x80000000;
    param_4[0xc09] = param_4[0xc09] ^ 0x80000000;
    param_4[0xc0a] = param_4[0xc0a] ^ 0x80000000;
    param_4[0xc0b] = param_4[0xc0b];
    bVar4 = *(byte *)((int)param_4 + 0x3049);
    *(byte *)((int)param_4 + 0x304a) =
         *(byte *)((int)param_4 + 0x304a) >> 4 | *(byte *)((int)param_4 + 0x304a) << 4;
    *(byte *)((int)param_4 + 0x3049) = (byte)param_4[0xc12];
    iVar2 = ((byte)param_4[0xc12] - 1) + (uint)bVar4;
    uVar6 = param_4[0xc10];
    *(byte *)(param_4 + 0xc12) = bVar4;
    *(undefined2 *)(param_4 + 0xc10) = *(undefined2 *)((int)param_4 + iVar2 * 2 + 0x3040);
    *(short *)((int)param_4 + iVar2 * 2 + 0x3040) = (short)uVar6;
    if ((*(byte *)((int)param_4 + 0x3049) & (byte)param_4[0xc12]) == 2) {
      uVar5 = *(undefined2 *)((int)param_4 + 0x3042);
      *(short *)((int)param_4 + 0x3042) = (short)param_4[0xc11];
      *(undefined2 *)(param_4 + 0xc11) = uVar5;
    }
  }
  return;
}

// 0115DD20  hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>  size=42  [run]
undefined4 * __thiscall
hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::
hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  hkpShapeCollectionAgent::hkpShapeCollectionAgent(param_3,param_2,param_4,param_5);
  *param_1 = vftable;
  return param_1;
}

// 0115DD50  hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::vf20  size=28  [run]
void hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::vf20
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  hkpShapeCollectionAgent::vf20(param_2,param_1,param_3,param_4);
  return;
}

// 0115DD70  FUN_0115dd70  size=38  [run]
void FUN_0115dd70(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0115DDA0  hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::vf0C  size=50  [run]
void hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::vf0C
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0;
  local_10 = hkpSymmetricAgentFlipBodyCollector::vftable;
  hkpShapeCollectionAgent::vf0C(param_2,param_1,param_3,&local_10);
  return;
}

// 0115DDE0  hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::vf10  size=59  [run]
void hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::vf10
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0x7f7fffee;
  local_10 = hkpSymmetricAgentFlipCollector::vftable;
  hkpShapeCollectionAgent::vf10(param_2,param_1,param_3,&local_10);
  return;
}

// 0115DE20  hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::vf18  size=272  [run]
void hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::vf18
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  float fVar7;
  float *pfVar8;
  
  fVar3 = (float)param_4[0xc0c];
  uVar6 = *param_4;
  hkpShapeCollectionAgent::vf18(param_2,param_1,param_3,param_4);
  if (uVar6 < *param_4) {
    pfVar8 = (float *)(uVar6 + 0x10);
    do {
      fVar7 = pfVar8[3];
      pfVar8[-4] = fVar7 * *pfVar8 + pfVar8[-4];
      pfVar8[-3] = fVar7 * pfVar8[1] + pfVar8[-3];
      pfVar8[-2] = fVar7 * pfVar8[2] + pfVar8[-2];
      pfVar8[-1] = fVar7 * pfVar8[3] + pfVar8[-1];
      *pfVar8 = -*pfVar8;
      pfVar8[1] = -pfVar8[1];
      pfVar8[2] = -pfVar8[2];
      pfVar8[3] = pfVar8[3];
      pfVar1 = pfVar8 + 8;
      pfVar8 = pfVar8 + 0xc;
    } while (pfVar1 < (float *)*param_4);
  }
  if (fVar3 != (float)param_4[0xc0c]) {
    param_4[0xc08] = param_4[0xc08] ^ 0x80000000;
    param_4[0xc09] = param_4[0xc09] ^ 0x80000000;
    param_4[0xc0a] = param_4[0xc0a] ^ 0x80000000;
    param_4[0xc0b] = param_4[0xc0b];
    bVar4 = *(byte *)((int)param_4 + 0x3049);
    *(byte *)((int)param_4 + 0x304a) =
         *(byte *)((int)param_4 + 0x304a) >> 4 | *(byte *)((int)param_4 + 0x304a) << 4;
    *(byte *)((int)param_4 + 0x3049) = (byte)param_4[0xc12];
    iVar2 = ((byte)param_4[0xc12] - 1) + (uint)bVar4;
    uVar6 = param_4[0xc10];
    *(byte *)(param_4 + 0xc12) = bVar4;
    *(undefined2 *)(param_4 + 0xc10) = *(undefined2 *)((int)param_4 + iVar2 * 2 + 0x3040);
    *(short *)((int)param_4 + iVar2 * 2 + 0x3040) = (short)uVar6;
    if ((*(byte *)((int)param_4 + 0x3049) & (byte)param_4[0xc12]) == 2) {
      uVar5 = *(undefined2 *)((int)param_4 + 0x3042);
      *(short *)((int)param_4 + 0x3042) = (short)param_4[0xc11];
      *(undefined2 *)(param_4 + 0xc11) = uVar5;
    }
  }
  return;
}

// 0115DF30  hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::vf00  size=118  [run]
undefined4 * __thiscall
hkpSymmetricAgentLinearCast<hkpBvTreeStreamAgent>::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBvTreeStreamAgent::vftable;
  param_1[0xd] = 0;
  if (-1 < (int)param_1[0xe]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],param_1[0xe] * 4);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115DFB0  hkpSymmetricAgent<hkpBvTreeStreamAgent>::hkpSymmetricAgent<hkpBvTreeStreamAgent>  size=42  [run]
undefined4 * __thiscall
hkpSymmetricAgent<hkpBvTreeStreamAgent>::hkpSymmetricAgent<hkpBvTreeStreamAgent>
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  hkpBvTreeStreamAgent::hkpBvTreeStreamAgent(param_3,param_2,param_4,param_5);
  *param_1 = vftable;
  return param_1;
}

// 0115DFE0  hkpSymmetricAgent<hkpBvTreeStreamAgent>::vf14  size=194  [run]
void hkpSymmetricAgent<hkpBvTreeStreamAgent>::vf14
               (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
               int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined ***pppuVar4;
  undefined4 local_e0 [20];
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined **local_70;
  undefined4 local_6c;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined **local_40;
  undefined4 local_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_90 = param_3[0x14] ^ 0x80000000;
  uStack_8c = param_3[0x15] ^ 0x80000000;
  uStack_88 = param_3[0x16] ^ 0x80000000;
  uStack_84 = param_3[0x17] ^ 0x80000000;
  local_30 = *(undefined8 *)(param_3 + 0x14);
  puVar2 = param_3;
  puVar3 = local_e0;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_20 = param_4;
  local_28 = *(undefined8 *)(param_3 + 0x16);
  local_3c = 0x7f7fffee;
  local_40 = hkpSymmetricAgentFlipCastCollector::vftable;
  if (param_5 == 0) {
    pppuVar4 = (undefined ***)0x0;
  }
  else {
    local_6c = 0x7f7fffee;
    local_60 = *(undefined8 *)(param_3 + 0x14);
    pppuVar4 = &local_70;
    local_70 = hkpSymmetricAgentFlipCastCollector::vftable;
    local_50 = param_5;
    local_58 = local_28;
  }
  hkpBvTreeStreamAgent::vf14(param_2,param_1,local_e0,&local_40,pppuVar4);
  return;
}

// 0115E0B0  hkBaseObject::hkBaseObject_57  size=75  [run]
void __fastcall hkBaseObject::hkBaseObject_57(undefined4 *param_1)

{
  *param_1 = hkpBvTreeStreamAgent::vftable;
  param_1[0xd] = 0;
  if (-1 < (int)param_1[0xe]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],param_1[0xe] * 4);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115E100  hkpSymmetricAgent<hkpBvTreeStreamAgent>::vf00  size=118  [run]
undefined4 * __thiscall
hkpSymmetricAgent<hkpBvTreeStreamAgent>::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBvTreeStreamAgent::vftable;
  param_1[0xd] = 0;
  if (-1 < (int)param_1[0xe]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],param_1[0xe] * 4);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115E180  hkBaseObject::hkBaseObject_56  size=71  [run]
void __fastcall hkBaseObject::hkBaseObject_56(undefined4 *param_1)

{
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 8);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115E1D0  hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::vf00  size=114  [run]
undefined4 * __thiscall
hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 8);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115E250  hkpSymmetricAgent<hkpShapeCollectionAgent>::hkpSymmetricAgent<hkpShapeCollectionAgent>  size=42  [run]
undefined4 * __thiscall
hkpSymmetricAgent<hkpShapeCollectionAgent>::hkpSymmetricAgent<hkpShapeCollectionAgent>
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  hkpShapeCollectionAgent::hkpShapeCollectionAgent(param_3,param_2,param_4,param_5);
  *param_1 = vftable;
  return param_1;
}

// 0115E280  hkpSymmetricAgent<hkpShapeCollectionAgent>::vf14  size=194  [run]
void hkpSymmetricAgent<hkpShapeCollectionAgent>::vf14
               (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
               int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined ***pppuVar4;
  undefined4 local_e0 [20];
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined **local_70;
  undefined4 local_6c;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined **local_40;
  undefined4 local_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_90 = param_3[0x14] ^ 0x80000000;
  uStack_8c = param_3[0x15] ^ 0x80000000;
  uStack_88 = param_3[0x16] ^ 0x80000000;
  uStack_84 = param_3[0x17] ^ 0x80000000;
  local_30 = *(undefined8 *)(param_3 + 0x14);
  puVar2 = param_3;
  puVar3 = local_e0;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_20 = param_4;
  local_28 = *(undefined8 *)(param_3 + 0x16);
  local_3c = 0x7f7fffee;
  local_40 = hkpSymmetricAgentFlipCastCollector::vftable;
  if (param_5 == 0) {
    pppuVar4 = (undefined ***)0x0;
  }
  else {
    local_6c = 0x7f7fffee;
    local_60 = *(undefined8 *)(param_3 + 0x14);
    pppuVar4 = &local_70;
    local_70 = hkpSymmetricAgentFlipCastCollector::vftable;
    local_50 = param_5;
    local_58 = local_28;
  }
  hkpSymmetricAgentLinearCast<hkpShapeCollectionAgent>::vf14
            (param_2,param_1,local_e0,&local_40,pppuVar4);
  return;
}

// 0115E350  hkBaseObject::hkBaseObject_58  size=71  [run]
void __fastcall hkBaseObject::hkBaseObject_58(undefined4 *param_1)

{
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 8);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115E3A0  hkpSymmetricAgent<hkpShapeCollectionAgent>::vf00  size=114  [run]
undefined4 * __thiscall
hkpSymmetricAgent<hkpShapeCollectionAgent>::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 8);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115E450  FUN_0115e450  size=37  [run]
void FUN_0115e450(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0115E490  FUN_0115e490  size=302  [run]
void FUN_0115e490(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  float fVar4;
  undefined1 local_110 [128];
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
  int local_60;
  undefined4 *local_5c;
  int local_58;
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
  undefined4 local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtMopp";
    uVar2 = rdtsc();
    local_14 = (undefined4)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  FUN_01004e90(*(undefined4 *)(param_2 + 8),param_1[2]);
  (**(code **)(*(int *)*param_1 + 0x10))(local_110,*(undefined4 *)(param_3 + 0xc),&local_50);
  FUN_01006f90(*(undefined4 *)(param_2 + 8),param_3 + 0x50);
  local_70 = (local_40 - local_50) * 0.5;
  fStack_6c = (fStack_3c - fStack_4c) * 0.5;
  fVar4 = (fStack_38 - fStack_48) * 0.5;
  fStack_64 = (fStack_34 - fStack_44) * 0.5;
  local_90 = local_70 + local_50;
  fStack_8c = fStack_6c + fStack_4c;
  fStack_88 = fVar4 + fStack_48;
  fStack_84 = fStack_64 + fStack_44;
  local_80 = local_90 + local_30;
  fStack_7c = fStack_8c + fStack_2c;
  fStack_78 = fStack_88 + fStack_28;
  fStack_74 = fStack_84 + fStack_24;
  fStack_68 = *(float *)(param_3 + 0xc);
  local_5c = param_1;
  local_70 = fStack_68 + local_70;
  fStack_6c = fStack_68 + fStack_6c;
  fStack_68 = fStack_68 + fVar4;
  fStack_64 = fStack_64 + 0.0;
  local_58 = param_2;
  local_60 = param_3;
  FUN_01224660(&local_90,param_4,param_5);
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return;
}

// 0115E5C0  hkpMoppAgent::hkpMoppAgent  size=28  [run]
undefined4 * __thiscall hkpMoppAgent::hkpMoppAgent(undefined4 *param_1,undefined4 param_2)

{
  hkpBvTreeAgent::hkpBvTreeAgent(param_2);
  *param_1 = vftable;
  return param_1;
}

// 0115E5E0  hkpSymmetricAgent<hkpMoppAgent>::hkpSymmetricAgent<hkpMoppAgent>_2  size=132  [run]
undefined4 *
hkpSymmetricAgent<hkpMoppAgent>::hkpSymmetricAgent<hkpMoppAgent>_2
          (int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(*(int *)(*param_1 + 0x14) + 0x24) < *(int *)(*(int *)(*param_2 + 0x14) + 0x24)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
    *(undefined2 *)(iVar2 + 4) = 0x40;
    puVar3 = (undefined4 *)hkpMoppAgent::hkpMoppAgent(param_4);
    return puVar3;
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar3 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(puVar3 + 1) = 0x40;
  hkpMoppAgent::hkpMoppAgent(param_4);
  *puVar3 = vftable;
  return puVar3;
}

// 0115E670  FUN_0115e670  size=164  [run]
void FUN_0115e670(void)

{
  code *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined2 local_8;
  
  local_18 = hkpSymmetricAgent<hkpBvTreeAgent>::hkpSymmetricAgent<hkpBvTreeAgent>;
  local_14 = hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector_7;
  local_10 = hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector_7;
  local_c = (code *)&LAB_0115c0f0;
  local_8 = 1;
  FUN_011633a0(&local_18,9,0xffffffff);
  local_18 = FUN_0115f490;
  local_14 = FUN_01160510;
  local_10 = FUN_0115f090;
  local_c = FUN_0115e490;
  local_8 = 0;
  FUN_011633a0(&local_18,0xffffffff,9);
  local_18 = hkpSymmetricAgent<hkpMoppAgent>::hkpSymmetricAgent<hkpMoppAgent>_2;
  local_14 = FUN_01160510;
  local_10 = FUN_0115f090;
  local_c = FUN_0115e490;
  local_8 = 0x100;
  FUN_011633a0(&local_18,9,9);
  return;
}

// 0115E720  FUN_0115e720  size=38  [run]
void FUN_0115e720(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0115E750  hkBaseObject::hkBaseObject_60  size=78  [run]
void __fastcall hkBaseObject::hkBaseObject_60(undefined4 *param_1)

{
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115E7A0  hkBaseObject::hkBaseObject_61  size=78  [run]
void __fastcall hkBaseObject::hkBaseObject_61(undefined4 *param_1)

{
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115E7F0  hkpSymmetricAgentLinearCast<hkpMoppAgent>::hkpSymmetricAgentLinearCast<hkpMoppAgent>  size=28  [run]
undefined4 * __thiscall
hkpSymmetricAgentLinearCast<hkpMoppAgent>::hkpSymmetricAgentLinearCast<hkpMoppAgent>
          (undefined4 *param_1,undefined4 param_2)

{
  hkpMoppAgent::hkpMoppAgent(param_2);
  *param_1 = vftable;
  return param_1;
}

// 0115E810  hkpSymmetricAgentLinearCast<hkpMoppAgent>::vf20  size=28  [run]
void hkpSymmetricAgentLinearCast<hkpMoppAgent>::vf20
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  hkpBvTreeAgent::vf20(param_2,param_1,param_3,param_4);
  return;
}

// 0115E830  hkpSymmetricAgentLinearCast<hkpMoppAgent>::vf0C  size=50  [run]
void hkpSymmetricAgentLinearCast<hkpMoppAgent>::vf0C
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0;
  local_10 = hkpSymmetricAgentFlipBodyCollector::vftable;
  hkpBvTreeAgent::vf0C(param_2,param_1,param_3,&local_10);
  return;
}

// 0115E870  hkpSymmetricAgentLinearCast<hkpMoppAgent>::vf10  size=59  [run]
void hkpSymmetricAgentLinearCast<hkpMoppAgent>::vf10
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0x7f7fffee;
  local_10 = hkpSymmetricAgentFlipCollector::vftable;
  hkpBvTreeAgent::vf10(param_2,param_1,param_3,&local_10);
  return;
}

// 0115E8B0  hkpSymmetricAgentLinearCast<hkpMoppAgent>::vf18  size=272  [run]
void hkpSymmetricAgentLinearCast<hkpMoppAgent>::vf18
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  float fVar7;
  float *pfVar8;
  
  fVar3 = (float)param_4[0xc0c];
  uVar6 = *param_4;
  hkpBvTreeAgent::vf18(param_2,param_1,param_3,param_4);
  if (uVar6 < *param_4) {
    pfVar8 = (float *)(uVar6 + 0x10);
    do {
      fVar7 = pfVar8[3];
      pfVar8[-4] = fVar7 * *pfVar8 + pfVar8[-4];
      pfVar8[-3] = fVar7 * pfVar8[1] + pfVar8[-3];
      pfVar8[-2] = fVar7 * pfVar8[2] + pfVar8[-2];
      pfVar8[-1] = fVar7 * pfVar8[3] + pfVar8[-1];
      *pfVar8 = -*pfVar8;
      pfVar8[1] = -pfVar8[1];
      pfVar8[2] = -pfVar8[2];
      pfVar8[3] = pfVar8[3];
      pfVar1 = pfVar8 + 8;
      pfVar8 = pfVar8 + 0xc;
    } while (pfVar1 < (float *)*param_4);
  }
  if (fVar3 != (float)param_4[0xc0c]) {
    param_4[0xc08] = param_4[0xc08] ^ 0x80000000;
    param_4[0xc09] = param_4[0xc09] ^ 0x80000000;
    param_4[0xc0a] = param_4[0xc0a] ^ 0x80000000;
    param_4[0xc0b] = param_4[0xc0b];
    bVar4 = *(byte *)((int)param_4 + 0x3049);
    *(byte *)((int)param_4 + 0x304a) =
         *(byte *)((int)param_4 + 0x304a) >> 4 | *(byte *)((int)param_4 + 0x304a) << 4;
    *(byte *)((int)param_4 + 0x3049) = (byte)param_4[0xc12];
    iVar2 = ((byte)param_4[0xc12] - 1) + (uint)bVar4;
    uVar6 = param_4[0xc10];
    *(byte *)(param_4 + 0xc12) = bVar4;
    *(undefined2 *)(param_4 + 0xc10) = *(undefined2 *)((int)param_4 + iVar2 * 2 + 0x3040);
    *(short *)((int)param_4 + iVar2 * 2 + 0x3040) = (short)uVar6;
    if ((*(byte *)((int)param_4 + 0x3049) & (byte)param_4[0xc12]) == 2) {
      uVar5 = *(undefined2 *)((int)param_4 + 0x3042);
      *(short *)((int)param_4 + 0x3042) = (short)param_4[0xc11];
      *(undefined2 *)(param_4 + 0xc11) = uVar5;
    }
  }
  return;
}

// 0115E9C0  hkpSymmetricAgentLinearCast<hkpMoppAgent>::vf00  size=121  [run]
undefined4 * __thiscall
hkpSymmetricAgentLinearCast<hkpMoppAgent>::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115EA40  hkpMoppAgent::vf00  size=121  [run]
undefined4 * __thiscall hkpMoppAgent::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115EAC0  hkpSymmetricAgent<hkpMoppAgent>::hkpSymmetricAgent<hkpMoppAgent>  size=28  [run]
undefined4 * __thiscall
hkpSymmetricAgent<hkpMoppAgent>::hkpSymmetricAgent<hkpMoppAgent>
          (undefined4 *param_1,undefined4 param_2)

{
  hkpMoppAgent::hkpMoppAgent(param_2);
  *param_1 = vftable;
  return param_1;
}

// 0115EAE0  hkpSymmetricAgent<hkpMoppAgent>::vf14  size=194  [run]
void hkpSymmetricAgent<hkpMoppAgent>::vf14
               (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
               int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined ***pppuVar4;
  undefined4 local_e0 [20];
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined **local_70;
  undefined4 local_6c;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined **local_40;
  undefined4 local_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_90 = param_3[0x14] ^ 0x80000000;
  uStack_8c = param_3[0x15] ^ 0x80000000;
  uStack_88 = param_3[0x16] ^ 0x80000000;
  uStack_84 = param_3[0x17] ^ 0x80000000;
  local_30 = *(undefined8 *)(param_3 + 0x14);
  puVar2 = param_3;
  puVar3 = local_e0;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_20 = param_4;
  local_28 = *(undefined8 *)(param_3 + 0x16);
  local_3c = 0x7f7fffee;
  local_40 = hkpSymmetricAgentFlipCastCollector::vftable;
  if (param_5 == 0) {
    pppuVar4 = (undefined ***)0x0;
  }
  else {
    local_6c = 0x7f7fffee;
    local_60 = *(undefined8 *)(param_3 + 0x14);
    pppuVar4 = &local_70;
    local_70 = hkpSymmetricAgentFlipCastCollector::vftable;
    local_50 = param_5;
    local_58 = local_28;
  }
  hkpBvTreeAgent::vf14(param_2,param_1,local_e0,&local_40,pppuVar4);
  return;
}

// 0115EBB0  hkBaseObject::hkBaseObject_54  size=78  [run]
void __fastcall hkBaseObject::hkBaseObject_54(undefined4 *param_1)

{
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0115EC00  hkpSymmetricAgent<hkpMoppAgent>::vf00  size=121  [run]
undefined4 * __thiscall hkpSymmetricAgent<hkpMoppAgent>::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0115EC90  FUN_0115ec90  size=14  [run]
void __thiscall FUN_0115ec90(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}

// 0115ECA0  FUN_0115eca0  size=16  [run]
void FUN_0115eca0(undefined1 *param_1)

{
  *param_1 = DAT_01b21c1c;
  return;
}

// 0115ECB0  FUN_0115ecb0  size=13  [run]
void FUN_0115ecb0(undefined1 param_1)

{
  DAT_01b21c1c = param_1;
  return;
}

// 0115ECC0  hkpBvTreeAgent::vf1C  size=68  [run]
void __thiscall hkpBvTreeAgent::vf1C(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[3];
  iVar1 = iVar2 + param_1[4] * 0xc;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    if (*(int *)(iVar2 + 8) != 0) {
      (**(code **)(**(int **)(iVar2 + 8) + 0x1c))(param_2);
    }
  }
  (**(code **)*param_1)(1);
  return;
}

// 0115ED10  hkpBvTreeAgent::vf24  size=63  [run]
void __thiscall hkpBvTreeAgent::vf24(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = iVar2 + *(int *)(param_1 + 0x10) * 0xc;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    if (*(int *)(iVar2 + 8) != 0) {
      (**(code **)(**(int **)(iVar2 + 8) + 0x24))(param_2);
    }
  }
  return;
}

// 0115ED50  hkpBvTreeAgent::vf28  size=87  [run]
void __thiscall
hkpBvTreeAgent::vf28(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = iVar2 + *(int *)(param_1 + 0x10) * 0xc;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    if (*(int *)(iVar2 + 8) != 0) {
      (**(code **)(**(int **)(iVar2 + 8) + 0x28))(param_2,param_3,param_4);
    }
  }
  return;
}

// 0115EDB0  FUN_0115edb0  size=136  [run]
void FUN_0115edb0(undefined4 *param_1,int param_2,int param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 local_60 [64];
  undefined1 local_20 [16];
  
  FUN_01004e90(*(undefined4 *)(param_2 + 8),param_1[2]);
  (**(code **)(*(int *)*param_1 + 0x10))(local_60,*(undefined4 *)(param_3 + 0xc),param_4);
  FUN_01006f90(*(undefined4 *)(param_2 + 8),param_3 + 0x50);
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  auVar2 = minps(ZEXT816(0),local_20);
  auVar1 = maxps(auVar1,local_20);
  *param_4 = auVar2._0_4_ + *param_4;
  param_4[1] = auVar2._4_4_ + param_4[1];
  param_4[2] = auVar2._8_4_ + param_4[2];
  param_4[3] = auVar2._12_4_ + param_4[3];
  param_4[4] = auVar1._0_4_ + param_4[4];
  param_4[5] = auVar1._4_4_ + param_4[5];
  param_4[6] = auVar1._8_4_ + param_4[6];
  param_4[7] = auVar1._12_4_ + param_4[7];
  return;
}

// 0115EE40  FUN_0115ee40  size=87  [run]
void FUN_0115ee40(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 local_50 [64];
  
  FUN_01004e90(*(undefined4 *)(param_2 + 8),param_1[2]);
  (**(code **)(*(int *)*param_1 + 0x10))(local_50,*(undefined4 *)(param_3 + 0xc),param_4);
  return;
}

// 0115EEA0  FUN_0115eea0  size=89  [run]
void FUN_0115eea0(int *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_3;
  iVar2 = iVar1 + 0x669;
  if (param_3[6] == 0) {
    iVar2 = iVar1 + 0x1a0;
  }
  (**(code **)(iVar1 + 0xb34 +
              (uint)*(byte *)((uint)*(byte *)(*param_1 + 8) * 0x23 + iVar2 +
                             (uint)*(byte *)(*param_2 + 8)) * 0x14))
            (param_1,param_2,param_3,param_4);
  return;
}

// 0115EF00  hkpBvTreeAgent::vf20  size=397  [run]
void __thiscall
hkpBvTreeAgent::vf20(int param_1,int *param_2,undefined4 *param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_230 [512];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  int local_20;
  undefined1 local_19;
  int *local_18;
  uint local_14;
  
  local_18 = (int *)(**(code **)(*(int *)*param_3 + 0x38))();
  iVar5 = 0;
  local_20 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      local_30 = (**(code **)(*local_18 + 0x14))
                           (*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar5),local_230);
      local_24 = param_3;
      local_28 = param_3[2];
      local_2c = *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar5);
      pcVar2 = (char *)(**(code **)(*(int *)(param_4[4] + 0xc) + 4))
                                 (&local_19,param_4,param_2,param_3,local_18,
                                  *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar5));
      if (*pcVar2 == '\0') {
        local_14 = *(int *)(param_1 + 0xc) + iVar5;
        iVar3 = FUN_01181b70();
        if (*(int *)(local_14 + 8) != iVar3) {
          (**(code **)(**(int **)(iVar5 + 8 + *(int *)(param_1 + 0xc)) + 0x1c))(param_5);
          local_14 = *(int *)(param_1 + 0xc) + iVar5;
          uVar4 = FUN_01181b70();
          *(undefined4 *)(local_14 + 8) = uVar4;
        }
      }
      else {
        local_14 = *(int *)(param_1 + 0xc) + iVar5;
        iVar3 = FUN_01181b70();
        if (*(int *)(local_14 + 8) == iVar3) {
          iVar1 = *param_4;
          local_14 = (uint)*(byte *)(local_30 + 8);
          iVar3 = iVar1 + 0x669;
          if (param_4[6] == 0) {
            iVar3 = iVar1 + 0x1a0;
          }
          uVar4 = (**(code **)(iVar1 + 0xb34 +
                              (uint)*(byte *)((uint)*(byte *)(*param_2 + 8) * 0x23 + iVar3 +
                                             local_14) * 0x14))
                            (param_2,&local_30,param_4,*(undefined4 *)(param_1 + 8));
          *(undefined4 *)(iVar5 + 8 + *(int *)(param_1 + 0xc)) = uVar4;
        }
        else {
          (**(code **)(**(int **)(iVar5 + 8 + *(int *)(param_1 + 0xc)) + 0x20))
                    (param_2,&local_30,param_4,param_5);
        }
      }
      local_20 = local_20 + 1;
      iVar5 = iVar5 + 0xc;
    } while (local_20 < *(int *)(param_1 + 0x10));
  }
  return;
}

// 0115F090  FUN_0115f090  size=631  [run]
void FUN_0115f090(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  LPVOID pvVar5;
  char *pcVar6;
  undefined1 local_260 [512];
  undefined1 local_60 [40];
  uint local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined1 local_21;
  int *local_20;
  int local_1c;
  int local_18;
  LPVOID local_14;
  
  pvVar5 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar5 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
    *puVar1 = "LtBvTree";
    puVar1[3] = "StQueryTree";
    uVar4 = rdtsc();
    local_1c = (int)uVar4;
    puVar1[1] = local_1c;
    *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 4;
  }
  FUN_0115ee40(param_1,param_2,param_3,local_60);
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  local_18 = *(int *)((int)pvVar5 + 0xc);
  if ((*(int *)((int)pvVar5 + 8) < 0x2000) || (*(uint *)((int)pvVar5 + 0x10) < local_18 + 0x2000U))
  {
    local_18 = FUN_0100b780(0x2000);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_18 + 0x2000U;
  }
  piVar2 = (int *)*param_2;
  local_1c = (**(code **)(*piVar2 + 0x4c))(local_60,local_18,0x800);
  if (local_1c == 0) {
    pvVar5 = TlsGetValue(DAT_01f8fc4c);
    if (((0x1fff < *(int *)((int)pvVar5 + 8)) && (local_18 + 0x2000 == *(int *)((int)pvVar5 + 0xc)))
       && (*(int *)((int)pvVar5 + 0x14) != local_18)) {
      *(int *)((int)pvVar5 + 0xc) = local_18;
      return;
    }
    FUN_0100b9b0(local_18,0x2000);
    return;
  }
  if (0x7ff < local_1c) {
    local_1c = 0x800;
  }
  local_14 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)local_14 + 4);
  if (puVar1 < *(undefined4 **)((int)local_14 + 0xc)) {
    *puVar1 = "StNarrowPhase";
    uVar4 = rdtsc();
    local_20 = (int *)uVar4;
    puVar1[1] = local_20;
    *(undefined4 **)((int)local_14 + 4) = puVar1 + 3;
  }
  local_20 = (int *)(**(code **)(*piVar2 + 0x38))();
  local_2c = param_2[2];
  local_28 = param_2;
  local_38 = (uint)*(byte *)(*param_1 + 8);
  local_14 = (LPVOID)0x0;
  if (0 < local_1c) {
    do {
      uVar3 = *(undefined4 *)(local_18 + (int)local_14 * 4);
      if (param_3[4] != 0) {
        pcVar6 = (char *)(**(code **)(*(int *)(param_3[4] + 0xc) + 4))
                                   (&local_21,param_3,param_1,param_2,local_20,uVar3);
        if (*pcVar6 != '\0') {
          local_34 = (**(code **)(*local_20 + 0x14))(uVar3,local_260);
          local_30 = uVar3;
          (**(code **)(*param_3 + 0xb3c +
                      (uint)*(byte *)(local_38 * 0x23 + 0x1a0 +
                                     (uint)*(byte *)(local_34 + 8) + *param_3) * 0x14))
                    (param_1,&local_34,param_3,param_4);
        }
      }
      local_14 = (LPVOID)((int)local_14 + 1);
    } while ((int)local_14 < local_1c);
  }
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  if (((*(int *)((int)pvVar5 + 8) < 0x2000) || (local_18 + 0x2000 != *(int *)((int)pvVar5 + 0xc)))
     || (*(int *)((int)pvVar5 + 0x14) == local_18)) {
    FUN_0100b9b0(local_18,0x2000);
  }
  else {
    *(int *)((int)pvVar5 + 0xc) = local_18;
  }
  pvVar5 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar5 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
    *puVar1 = &DAT_017e01a0;
    uVar4 = rdtsc();
    puVar1[1] = (int)uVar4;
    *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
  }
  return;
}

// 0115F310  hkpBvTreeAgent::LinearCastAabbCastCollector::vf00  size=248  [run]
void __thiscall hkpBvTreeAgent::LinearCastAabbCastCollector::vf00(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 local_230 [520];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 local_15;
  int local_14;
  
  piVar3 = (int *)(**(code **)(*(int *)**(undefined4 **)(param_1 + 0x24) + 0x38))();
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(int *)(iVar2 + 0x10) != 0) {
    local_14 = *(int *)(iVar2 + 0x10) + 0xc;
    pcVar4 = (char *)(**(code **)(*(int *)(*(int *)(iVar2 + 0x10) + 0xc) + 4))
                               (&local_15,iVar2,*(undefined4 *)(param_1 + 0x20),
                                *(undefined4 *)(param_1 + 0x24),piVar3,param_2);
    if (*pcVar4 != '\0') {
      local_28 = (**(code **)(*piVar3 + 0x14))(param_2,local_230);
      local_1c = *(int *)(param_1 + 0x24);
      local_20 = *(undefined4 *)(local_1c + 8);
      local_24 = param_2;
      local_14 = **(int **)(param_1 + 0x28);
      (**(code **)(local_14 +
                  ((uint)*(byte *)(*(byte *)(local_28 + 8) + 0x1a0 +
                                  (uint)*(byte *)(**(int **)(param_1 + 0x20) + 8) * 0x23 + local_14)
                   * 5 + 0x2d0) * 4))
                (*(int **)(param_1 + 0x20),&local_28,*(int **)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 4);
      auVar5._4_4_ = uVar1;
      auVar5._0_4_ = uVar1;
      auVar5._8_4_ = uVar1;
      auVar5._12_4_ = uVar1;
      auVar5 = minps(*(undefined1 (*) [16])(param_1 + 0x10),auVar5);
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar5;
    }
  }
  return;
}

// 0115F410  hkpBvTreeAgent::vf10  size=31  [run]
void hkpBvTreeAgent::vf10
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0115f090(param_1,param_2,param_3,param_4);
  return;
}

// 0115F430  hkpBvTreeAgent::hkpBvTreeAgent  size=86  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall hkpBvTreeAgent::hkpBvTreeAgent(undefined4 *param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar3 = _DAT_017e05b0;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = param_2;
  *param_1 = vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  auVar1._12_4_ = 0;
  auVar1._0_12_ = auVar3._0_12_;
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar1;
  auVar2._12_4_ = 0;
  auVar2._0_12_ = auVar3._0_12_;
  *(undefined1 (*) [16])(param_1 + 8) = auVar2;
  return;
}

// 0115F490  FUN_0115f490  size=49  [run]
void FUN_0115f490(void)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 in_stack_00000010;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(iVar2 + 4) = 0x40;
  hkpBvTreeAgent::hkpBvTreeAgent(in_stack_00000010);
  return;
}

// 0115F4D0  hkpSymmetricAgent<hkpBvTreeAgent>::hkpSymmetricAgent<hkpBvTreeAgent>  size=61  [run]
undefined4 * hkpSymmetricAgent<hkpBvTreeAgent>::hkpSymmetricAgent<hkpBvTreeAgent>(void)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  undefined4 in_stack_00000010;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x40);
  *(undefined2 *)(puVar2 + 1) = 0x40;
  hkpBvTreeAgent::hkpBvTreeAgent(in_stack_00000010);
  *puVar2 = vftable;
  return puVar2;
}

// 0115F510  hkpSymmetricAgent<hkpBvTreeAgent>::hkpSymmetricAgent<hkpBvTreeAgent>  size=137  [run]
undefined4 *
hkpSymmetricAgent<hkpBvTreeAgent>::hkpSymmetricAgent<hkpBvTreeAgent>
          (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  float fVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 *puVar5;
  
  fVar2 = *(float *)(*(int *)(param_2 + 8) + 0xa0);
  pfVar1 = (float *)(*(int *)(param_1 + 8) + 0xa0);
  if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x40);
    *(undefined2 *)(iVar4 + 4) = 0x40;
    puVar5 = (undefined4 *)hkpBvTreeAgent::hkpBvTreeAgent(param_4);
    return puVar5;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  puVar5 = (undefined4 *)(**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x40);
  *(undefined2 *)(puVar5 + 1) = 0x40;
  hkpBvTreeAgent::hkpBvTreeAgent(param_4);
  *puVar5 = vftable;
  return puVar5;
}

// 0115F5A0  hkpBvTreeAgent::vf18  size=3418  [run]
void hkpBvTreeAgent::vf18(int *param_1,undefined4 *param_2,int *param_3,int param_4)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  LPVOID pvVar14;
  undefined4 *puVar15;
  float *pfVar16;
  uint uVar17;
  int iVar18;
  char *pcVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined4 *extraout_ECX;
  undefined4 uVar22;
  float *pfVar23;
  undefined8 *puVar24;
  uint uVar25;
  uint uVar26;
  int *piVar27;
  int iVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar51;
  float fVar52;
  undefined1 auVar50 [16];
  float fVar53;
  undefined1 auVar54 [16];
  undefined1 local_740 [512];
  int *local_540;
  int local_53c;
  float local_538;
  undefined4 local_534;
  undefined4 *local_530;
  undefined1 local_520 [512];
  float *local_320;
  uint local_31c;
  int local_318;
  float local_314 [129];
  undefined1 local_110 [64];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 local_a0 [8];
  float fStack_98;
  float fStack_94;
  undefined1 local_90 [8];
  float fStack_88;
  float fStack_84;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 *local_70;
  int local_6c;
  int local_68;
  float *local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int *local_34;
  float *local_30;
  float *local_2c;
  undefined4 *local_28;
  undefined1 local_21;
  float *local_20;
  int *local_1c;
  float *local_18;
  float *local_14;
  
  pvVar14 = TlsGetValue(DAT_01f8fc54);
  puVar15 = *(undefined4 **)((int)pvVar14 + 4);
  if (puVar15 < *(undefined4 **)((int)pvVar14 + 0xc)) {
    *puVar15 = "LtBvTree";
    puVar15[3] = "StQueryTree";
    uVar8 = rdtsc();
    local_20 = (float *)uVar8;
    puVar15[1] = local_20;
    *(undefined4 **)((int)pvVar14 + 4) = puVar15 + 4;
  }
  local_64 = *(float **)(param_4 + 4);
  local_320 = local_314;
  local_31c = 0;
  local_318 = -0x7fffff80;
  FUN_01004e90(param_2[2],param_1[2]);
  iVar21 = param_1[2];
  iVar28 = param_2[2];
  fVar29 = *(float *)(iVar21 + 0x5c) * (float)param_3[0x16];
  fVar33 = *(float *)(iVar28 + 0x5c) * (float)param_3[0x16];
  fVar42 = (*(float *)(iVar21 + 0x40) - *(float *)(iVar21 + 0x50)) * fVar29 +
           (*(float *)(iVar28 + 0x50) - *(float *)(iVar28 + 0x40)) * fVar33;
  fVar44 = (*(float *)(iVar21 + 0x44) - *(float *)(iVar21 + 0x54)) * fVar29 +
           (*(float *)(iVar28 + 0x54) - *(float *)(iVar28 + 0x44)) * fVar33;
  fVar46 = (*(float *)(iVar21 + 0x48) - *(float *)(iVar21 + 0x58)) * fVar29 +
           (*(float *)(iVar28 + 0x58) - *(float *)(iVar28 + 0x48)) * fVar33;
  local_60 = CONCAT44(fVar44,fVar42);
  uStack_58 = CONCAT44(*(float *)(iVar28 + 0x9c) * fVar33 * *(float *)(iVar28 + 0xa0) +
                       *(float *)(iVar21 + 0x9c) * fVar29 * *(float *)(iVar21 + 0xa0),fVar46);
  if (DAT_01b21c1c == '\0') {
    local_20 = (float *)0x0;
  }
  else {
    local_20 = (float *)(local_6c + 0x20);
  }
  puVar24 = (undefined8 *)param_2[2];
  uVar2 = puVar24[2];
  local_b0 = (float)*puVar24;
  fStack_ac = (float)((ulonglong)*puVar24 >> 0x20);
  fStack_a8 = (float)puVar24[1];
  uStack_c8 = puVar24[3];
  uVar3 = puVar24[4];
  local_d0._0_4_ = (float)uVar2;
  local_d0._4_4_ = (float)(uVar2 >> 0x20);
  uVar4 = puVar24[5];
  local_c0._0_4_ = (float)uVar3;
  local_c0._4_4_ = (float)(uVar3 >> 0x20);
  uStack_b8._0_4_ = (float)uVar4;
  uStack_b8._4_4_ = (float)(uVar4 >> 0x20);
  local_b0 = fVar42 * local_b0 + fVar44 * fStack_ac + fVar46 * fStack_a8;
  fStack_ac = fVar42 * (float)local_d0 + fVar44 * local_d0._4_4_ + fVar46 * (float)uStack_c8;
  fStack_a8 = fVar42 * (float)local_c0 + fVar44 * local_c0._4_4_ + fVar46 * (float)uStack_b8;
  fStack_a4 = fVar42 * local_c0._4_4_ + fVar44 * uStack_b8._4_4_ + fVar46 * uStack_b8._4_4_;
  local_d0 = uVar2;
  local_c0 = uVar3;
  uStack_b8 = uVar4;
  if (*(int *)(param_3[0x18] + 0x10) == 0) {
    (**(code **)(*(int *)*param_1 + 0x10))(local_110,(float)param_3[3] * 0.5,local_a0);
    fVar43 = (float)local_90._0_4_ - (float)local_a0._0_4_;
    fVar45 = (float)local_90._4_4_ - (float)local_a0._4_4_;
    fVar47 = fStack_88 - fStack_98;
    fVar48 = fStack_84 - fStack_94;
    puVar15 = extraout_ECX;
    fVar29 = local_b0;
    fVar33 = fStack_ac;
    fVar42 = fStack_a8;
    fVar44 = fStack_a4;
    fVar46 = (float)local_90._0_4_;
    fVar37 = (float)local_90._4_4_;
    fVar38 = fStack_88;
    fVar39 = fStack_84;
    fVar49 = (float)local_a0._0_4_;
    fVar51 = (float)local_a0._4_4_;
    fVar52 = fStack_98;
    fVar53 = fStack_94;
  }
  else {
    fVar29 = *(float *)((int)puVar24 + 0x9c);
    local_1c = (int *)(fVar29 * fVar29 * *(float *)(puVar24 + 0x14));
    (**(code **)(*(int *)*param_1 + 0x10))
              (local_110,
               (*(float *)(iVar21 + 0x9c) + fVar29) * *(float *)(iVar21 + 0xa0) + (float)local_1c +
               (float)param_3[3] * 0.5,local_a0);
    puVar6 = (ulonglong *)param_2[2];
    uVar2 = *puVar6;
    fVar29 = (float)param_3[3] * 0.5 + *(float *)(iVar21 + 0xa0) + (float)local_1c;
    uStack_58 = puVar6[1];
    uVar3 = puVar6[2];
    local_60._0_4_ = (float *)uVar2;
    local_60._4_4_ = (float)(uVar2 >> 0x20);
    uStack_b8 = puVar6[3];
    uVar4 = puVar6[4];
    local_c0._0_4_ = (float)uVar3;
    local_c0._4_4_ = (float)(uVar3 >> 0x20);
    uVar5 = puVar6[5];
    local_d0._0_4_ = (float)uVar4;
    local_d0._4_4_ = (float)(uVar4 >> 0x20);
    uStack_c8._0_4_ = (float)uVar5;
    uStack_c8._4_4_ = (float)(uVar5 >> 0x20);
    auVar54._0_12_ = ZEXT812(0);
    auVar54._12_4_ = 0;
    fVar33 = *(float *)(iVar21 + 0x50) - *(float *)(puVar6 + 6);
    fVar42 = *(float *)(iVar21 + 0x54) - *(float *)((int)puVar6 + 0x34);
    fVar44 = *(float *)(iVar21 + 0x58) - *(float *)(puVar6 + 7);
    fVar46 = fVar42 * local_60._4_4_ + fVar33 * (float)(float *)local_60 + (float)uStack_58 * fVar44
    ;
    fVar37 = fVar42 * local_c0._4_4_ + fVar33 * (float)local_c0 + (float)uStack_b8 * fVar44;
    fVar38 = fVar42 * local_d0._4_4_ + fVar33 * (float)local_d0 + (float)uStack_c8 * fVar44;
    fVar39 = fVar42 * uStack_c8._4_4_ + fVar33 * local_d0._4_4_ + uStack_c8._4_4_ * fVar44;
    auVar30._0_4_ = fVar46 - fVar29;
    auVar30._4_4_ = fVar37 - fVar29;
    auVar30._8_4_ = fVar38 - fVar29;
    auVar30._12_4_ = fVar39 - 0.0;
    auVar30 = maxps(_local_a0,auVar30);
    auVar40._0_4_ = fVar46 + fVar29;
    auVar40._4_4_ = fVar37 + fVar29;
    auVar40._8_4_ = fVar38 + fVar29;
    auVar40._12_4_ = fVar39 + 0.0;
    auVar40 = minps(_local_90,auVar40);
    fVar43 = auVar40._0_4_ - auVar30._0_4_;
    fVar45 = auVar40._4_4_ - auVar30._4_4_;
    fVar47 = auVar40._8_4_ - auVar30._8_4_;
    fVar48 = auVar40._12_4_ - auVar30._12_4_;
    fVar29 = local_b0;
    fVar33 = fStack_ac;
    fVar42 = fStack_a8;
    fVar44 = fStack_a4;
    if (0.0 < *(float *)((int)puVar24 + 0x9c)) {
      fVar37 = fVar37 - *(float *)((int)puVar24 + 0x84);
      fVar39 = fVar39 - *(float *)((int)puVar24 + 0x8c);
      fVar44 = *(float *)((int)puVar24 + 0x5c) * (float)param_3[0x16];
      fVar29 = (*(float *)(puVar24 + 0x13) * fVar37 -
               (fVar38 - *(float *)(puVar24 + 0x11)) * *(float *)((int)puVar24 + 0x94)) * fVar44 +
               local_b0;
      fVar33 = (*(float *)(puVar24 + 0x12) * (fVar38 - *(float *)(puVar24 + 0x11)) -
               (fVar46 - *(float *)(puVar24 + 0x10)) * *(float *)(puVar24 + 0x13)) * fVar44 +
               fStack_ac;
      fVar42 = (*(float *)((int)puVar24 + 0x94) * (fVar46 - *(float *)(puVar24 + 0x10)) -
               fVar37 * *(float *)(puVar24 + 0x12)) * fVar44 + fStack_a8;
      fVar44 = (*(float *)((int)puVar24 + 0x9c) * fVar39 - fVar39 * *(float *)((int)puVar24 + 0x9c))
               * fVar44 + fStack_a4;
    }
    auVar50._4_4_ = fVar33;
    auVar50._0_4_ = fVar29;
    auVar50._8_4_ = fVar42;
    auVar50._12_4_ = fVar44;
    auVar50 = minps(ZEXT816(0),auVar50);
    auVar10._4_4_ = fVar33;
    auVar10._0_4_ = fVar29;
    auVar10._8_4_ = fVar42;
    auVar10._12_4_ = fVar44;
    auVar54 = maxps(auVar54,auVar10);
    local_a0._0_4_ = auVar50._0_4_ + auVar30._0_4_;
    local_a0._4_4_ = auVar50._4_4_ + auVar30._4_4_;
    fStack_98 = auVar50._8_4_ + auVar30._8_4_;
    fStack_94 = auVar50._12_4_ + auVar30._12_4_;
    local_90._0_4_ = auVar54._0_4_ + auVar40._0_4_;
    local_90._4_4_ = auVar54._4_4_ + auVar40._4_4_;
    fStack_88 = auVar54._8_4_ + auVar40._8_4_;
    fStack_84 = auVar54._12_4_ + auVar40._12_4_;
    puVar15 = param_2;
    fVar46 = (float)local_90._0_4_;
    fVar37 = (float)local_90._4_4_;
    fVar38 = fStack_88;
    fVar39 = fStack_84;
    fVar49 = (float)local_a0._0_4_;
    fVar51 = (float)local_a0._4_4_;
    fVar52 = fStack_98;
    fVar53 = fStack_94;
    local_d0 = uVar4;
    uStack_c8 = uVar5;
    local_c0 = uVar3;
    local_60 = uVar2;
  }
  if (local_20 != (float *)0x0) {
    auVar35._0_4_ = -(uint)(fVar46 <= local_20[4] && *local_20 <= fVar49);
    auVar35._4_4_ = -(uint)(fVar37 <= local_20[5] && local_20[1] <= fVar51);
    auVar35._8_4_ = -(uint)(fVar38 <= local_20[6] && local_20[2] <= fVar52);
    auVar35._12_4_ = -(uint)(fVar39 <= local_20[7] && local_20[3] <= fVar53);
    uVar22 = movmskps(puVar15,auVar35);
    pfVar23 = local_320;
    if (((byte)uVar22 & 7) == 7) goto joined_r0x01160212;
    fVar34 = (float)param_3[3] * 0.5;
    auVar31._0_12_ = ZEXT812(0);
    auVar31._12_4_ = 0;
    auVar11._4_4_ = fVar33;
    auVar11._0_4_ = fVar29;
    auVar11._8_4_ = fVar42;
    auVar11._12_4_ = fVar44;
    auVar30 = maxps(ZEXT816(0),auVar11);
    auVar36._0_4_ = auVar30._0_4_ * -2.0;
    auVar36._4_4_ = auVar30._4_4_ * -2.0;
    auVar36._8_4_ = auVar30._8_4_ * -2.0;
    auVar36._12_4_ = auVar30._12_4_ * -2.0;
    auVar12._4_4_ = fVar33;
    auVar12._0_4_ = fVar29;
    auVar12._8_4_ = fVar42;
    auVar12._12_4_ = fVar44;
    auVar30 = minps(auVar31,auVar12);
    auVar32._0_4_ = auVar30._0_4_ * -2.0;
    auVar32._4_4_ = auVar30._4_4_ * -2.0;
    auVar32._8_4_ = auVar30._8_4_ * -2.0;
    auVar32._12_4_ = auVar30._12_4_ * -2.0;
    auVar41._0_8_ = CONCAT44(fVar45 * 0.4,fVar43 * 0.4) ^ 0x8000000080000000;
    auVar41._8_4_ = -(fVar47 * 0.4);
    auVar41._12_4_ = -(fVar48 * 0.4);
    auVar30 = maxps(auVar36,auVar41);
    local_a0._0_4_ = auVar30._0_4_ + (fVar49 - fVar34);
    local_a0._4_4_ = auVar30._4_4_ + (fVar51 - fVar34);
    fStack_98 = auVar30._8_4_ + (fVar52 - fVar34);
    fStack_94 = auVar30._12_4_ + (fVar53 - 0.0);
    auVar9._4_4_ = fVar45 * 0.4;
    auVar9._0_4_ = fVar43 * 0.4;
    auVar9._8_4_ = fVar47 * 0.4;
    auVar9._12_4_ = fVar48 * 0.4;
    auVar30 = minps(auVar32,auVar9);
    local_90._0_4_ = auVar30._0_4_ + fVar34 + fVar46;
    local_90._4_4_ = auVar30._4_4_ + fVar34 + fVar37;
    fStack_88 = auVar30._8_4_ + fVar34 + fVar38;
    fStack_84 = auVar30._12_4_ + fVar39 + 0.0;
    *local_20 = (float)local_a0._0_4_;
    local_20[1] = (float)local_a0._4_4_;
    local_20[2] = fStack_98;
    local_20[3] = fStack_94;
    local_20[4] = (float)local_90._0_4_;
    local_20[5] = (float)local_90._4_4_;
    local_20[6] = fStack_88;
    local_20[7] = fStack_84;
  }
  (**(code **)(*(int *)*param_2 + 0x44))(local_a0,&local_320);
  local_540 = (int *)(**(code **)(*(int *)*param_2 + 0x38))();
  iVar21 = local_6c;
  local_534 = param_2[2];
  local_530 = param_2;
  if (DAT_0209e91c == '\0') {
    local_1c = (int *)((uint)local_1c & 0xffffff00);
    if (1 < (int)local_31c) {
      FUN_0115a950(local_320,0,local_31c - 1,local_1c);
    }
    uVar17 = local_31c;
    local_28 = *(undefined4 **)(local_6c + 8);
    pfVar23 = *(float **)(local_6c + 0xc);
    local_1c = (int *)(local_6c + 0xc);
    local_2c = pfVar23 + *(int *)(local_6c + 0x10) * 3;
    local_18 = local_320;
    local_20 = local_320 + local_31c;
    local_60 = 0;
    uStack_58 = CONCAT44(uStack_58._4_4_,0x80000000);
    local_50 = local_31c;
    local_30 = pfVar23;
    if (local_31c == 0) {
      local_60 = 0;
    }
    else {
      pvVar14 = TlsGetValue(DAT_01f8fc4c);
      local_34 = *(int **)((int)pvVar14 + 0xc);
      uVar25 = uVar17 * 0xc + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar14 + 8) < (int)uVar25) ||
         (*(uint *)((int)pvVar14 + 0x10) < (int)local_34 + uVar25)) {
        uVar22 = FUN_0100b780(uVar25);
        local_60 = CONCAT44(local_60._4_4_,uVar22);
      }
      else {
        *(uint *)((int)pvVar14 + 0xc) = (int)local_34 + uVar25;
        local_60 = CONCAT44(local_60._4_4_,local_34);
      }
    }
    uVar25 = local_31c;
    uStack_58 = CONCAT44((float *)local_60,uVar17) | 0x80000000;
    if ((int)(uVar17 & 0x3fffffff) < (int)local_31c) {
      uVar17 = (uVar17 & 0x3fffffff) * 2;
      uVar26 = local_31c;
      if ((int)local_31c < (int)uVar17) {
        uVar26 = uVar17;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,&local_60,uVar26,0xc);
    }
    local_60 = CONCAT44(uVar25,(float *)local_60);
    local_34 = local_540;
    local_14 = (float *)local_60;
    if (pfVar23 != local_2c) {
      do {
        pfVar16 = local_64;
        if (local_18 == local_20) {
          if (pfVar23 != local_2c) {
            pfVar23 = pfVar23 + 2;
            do {
              if (*pfVar23 != 0.0) {
                (**(code **)(*(int *)*pfVar23 + 0x1c))(pfVar16);
              }
              pfVar1 = pfVar23 + 1;
              pfVar23 = pfVar23 + 3;
            } while (pfVar1 != local_2c);
          }
          break;
        }
        fVar29 = *local_18;
        if (fVar29 == *pfVar23) {
          *(undefined8 *)local_14 = *(undefined8 *)pfVar23;
          local_14[2] = pfVar23[2];
          local_14 = local_14 + 3;
          local_18 = local_18 + 1;
LAB_0115ffad:
          local_30 = pfVar23 + 3;
        }
        else {
          if ((uint)*pfVar23 <= (uint)fVar29) {
            if (pfVar23[2] != 0.0) {
              (**(code **)(*(int *)pfVar23[2] + 0x1c))(local_64);
            }
            goto LAB_0115ffad;
          }
          local_53c = (**(code **)(*local_540 + 0x14))(fVar29,local_520);
          local_538 = fVar29;
          pcVar19 = (char *)(**(code **)(*(int *)(param_3[4] + 0xc) + 4))
                                      (&local_21,param_3,param_1,param_2,local_34,*local_18);
          if (*pcVar19 == '\0') {
            fVar29 = (float)FUN_01181b70();
            local_14[2] = fVar29;
          }
          else {
            local_80 = (uint)*(byte *)(local_53c + 8);
            iVar21 = *param_3;
            local_68 = iVar21 + 0x669;
            if (param_3[6] == 0) {
              local_68 = iVar21 + 0x1a0;
            }
            fVar29 = (float)(**(code **)(iVar21 + 0xb34 +
                                        (uint)*(byte *)((uint)*(byte *)(*param_1 + 8) * 0x23 +
                                                        local_80 + local_68) * 0x14))
                                      (param_1,&local_53c,param_3,local_28);
            local_14[2] = fVar29;
          }
          *local_14 = *local_18;
          local_14 = local_14 + 3;
          local_18 = local_18 + 1;
        }
        pfVar23 = local_30;
      } while (local_30 != local_2c);
      uVar25 = (uint)local_60._4_4_;
    }
    if (local_18 != local_20) {
      local_14 = local_14 + 2;
      do {
        fVar29 = *local_18;
        local_53c = (**(code **)(*local_540 + 0x14))(fVar29,local_520);
        local_538 = fVar29;
        pcVar19 = (char *)(**(code **)(*(int *)(param_3[4] + 0xc) + 4))
                                    (&local_21,param_3,param_1,param_2,local_34,*local_18);
        if (*pcVar19 == '\0') {
          fVar29 = (float)FUN_01181b70();
          *local_14 = fVar29;
        }
        else {
          iVar28 = *param_3;
          iVar21 = iVar28 + 0x669;
          if (param_3[6] == 0) {
            iVar21 = iVar28 + 0x1a0;
          }
          fVar29 = (float)(**(code **)(iVar28 + 0xb34 +
                                      (uint)*(byte *)((uint)*(byte *)(*param_1 + 8) * 0x23 + iVar21
                                                     + (uint)*(byte *)(local_53c + 8)) * 0x14))
                                    (param_1,&local_53c,param_3,local_28);
          *local_14 = fVar29;
        }
        fVar29 = *local_18;
        local_18 = local_18 + 1;
        local_14[-2] = fVar29;
        local_14 = local_14 + 3;
      } while (local_18 != local_20);
      uVar25 = (uint)local_60._4_4_;
    }
    piVar27 = local_1c;
    uVar17 = local_1c[1];
    if ((int)uVar25 <= local_1c[1]) {
      uVar17 = uVar25;
    }
    local_28 = (undefined4 *)uVar25;
    if ((int)(local_1c[2] & 0x3fffffffU) < (int)uVar25) {
      uVar26 = (local_1c[2] & 0x3fffffffU) * 2;
      if ((int)uVar25 < (int)uVar26) {
        uVar25 = uVar26;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,local_1c,uVar25,0xc);
    }
    uVar25 = local_50;
    puVar24 = (undefined8 *)*piVar27;
    puVar20 = (undefined8 *)(float *)local_60;
    uVar26 = uVar17;
    if (0 < (int)uVar17) {
      do {
        *puVar24 = *puVar20;
        *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(puVar20 + 1);
        puVar24 = (undefined8 *)((int)puVar24 + 0xc);
        uVar26 = uVar26 - 1;
        puVar20 = (undefined8 *)((int)puVar20 + 0xc);
        piVar27 = local_1c;
      } while (uVar26 != 0);
    }
    puVar24 = (undefined8 *)(*piVar27 + uVar17 * 0xc);
    iVar21 = (int)local_28 - uVar17;
    if (0 < iVar21) {
      iVar28 = (int)(float *)local_60 + (uVar17 * 0xc - (int)puVar24);
      do {
        if (puVar24 != (undefined8 *)0x0) {
          *puVar24 = *(undefined8 *)(iVar28 + (int)puVar24);
          *(undefined4 *)(puVar24 + 1) = *(undefined4 *)(iVar28 + 8 + (int)puVar24);
        }
        puVar24 = (undefined8 *)((int)puVar24 + 0xc);
        iVar21 = iVar21 + -1;
      } while (iVar21 != 0);
    }
    puVar24 = uStack_58._4_4_;
    piVar27[1] = (int)local_28;
    if ((float *)uStack_58._4_4_ == (float *)local_60) {
      local_60 = local_60 & 0xffffffff;
    }
    pvVar14 = TlsGetValue(DAT_01f8fc4c);
    uVar17 = uVar25 * 0xc + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar14 + 8) < (int)uVar17) ||
        ((int)puVar24 + uVar17 != *(int *)((int)pvVar14 + 0xc))) ||
       (*(undefined8 **)((int)pvVar14 + 0x14) == puVar24)) {
      FUN_0100b9b0(puVar24,uVar17);
    }
    else {
      *(undefined8 **)((int)pvVar14 + 0xc) = puVar24;
    }
    uVar2 = local_60;
    local_60 = local_60 & 0xffffffff;
    uVar3 = local_60;
    pfVar23 = local_320;
    if (-1 < (int)(float)uStack_58) {
      local_60._0_4_ = (float *)uVar2;
      uVar22 = (float *)local_60;
      local_60 = uVar3;
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(uVar22,((uint)(float)uStack_58 & 0x3fffffff) * 0xc)
      ;
      pfVar23 = local_320;
    }
  }
  else {
    local_68 = *(int *)(local_6c + 8);
    piVar27 = (int *)(local_6c + 0xc);
    local_14 = (float *)*piVar27;
    local_18 = local_14 + *(int *)(local_6c + 0x10) * 3;
    local_2c = local_320 + local_31c;
    pfVar16 = local_320;
    pfVar23 = local_320;
    if (local_14 != local_18) {
      do {
        pfVar1 = pfVar23;
        if ((pfVar16 == local_2c) || (*local_14 != *pfVar16)) {
          while (pfVar16 = pfVar1, pfVar16 != local_2c) {
            local_30 = pfVar23;
            if (*local_14 == *pfVar16) goto LAB_0115faeb;
            pfVar1 = pfVar16 + 1;
          }
          local_30 = pfVar16;
          (**(code **)(*(int *)local_14[2] + 0x1c))(local_64);
          iVar28 = *piVar27;
          *(int *)(iVar21 + 0x10) = *(int *)(iVar21 + 0x10) + -1;
          iVar13 = ((int)local_14 - iVar28) / 0xc;
          iVar18 = (*(int *)(iVar21 + 0x10) - iVar13) * 0xc;
          puVar15 = (undefined4 *)(iVar28 + iVar13 * 0xc);
          if (0 < iVar18) {
            iVar28 = (iVar18 - 1U >> 2) + 1;
            do {
              *puVar15 = puVar15[3];
              puVar15 = puVar15 + 1;
              iVar28 = iVar28 + -1;
            } while (iVar28 != 0);
          }
          local_14 = local_14 + -3;
          local_18 = local_18 + -3;
          pfVar16 = local_30;
          pfVar23 = local_320;
        }
        else {
LAB_0115faeb:
          pfVar16 = pfVar16 + 1;
        }
        local_14 = local_14 + 3;
      } while (local_14 != local_18);
    }
    local_34 = local_540;
    uVar17 = *(uint *)(iVar21 + 0x10);
    if (local_31c != uVar17) {
      local_18 = (float *)*piVar27;
      local_20 = local_18 + uVar17 * 3;
      local_64 = pfVar23 + local_31c;
      local_14 = pfVar23;
      if (pfVar23 != local_64) {
        do {
          if ((local_18 == local_20) || (*local_18 != *local_14)) {
            local_28 = (undefined4 *)(uVar17 + 1);
            iVar28 = (int)local_14 - (int)pfVar23 >> 2;
            local_1c = (int *)(uVar17 - iVar28);
            uVar17 = *(uint *)(iVar21 + 0x14) & 0x3fffffff;
            if ((int)uVar17 < (int)local_28) {
              uVar17 = uVar17 * 2;
              uVar25 = (uint)local_28;
              if ((int)local_28 < (int)uVar17) {
                uVar25 = uVar17;
              }
              FUN_0100a210(&PTR_vftable_018e9b94,piVar27,uVar25,0xc);
            }
            iVar28 = iVar28 * 0xc;
            iVar18 = *piVar27 + iVar28;
            FUN_01019bd0(iVar18 + 0xc,iVar18,(int)local_1c * 0xc);
            local_18 = (float *)(*piVar27 + iVar28);
            *(undefined4 **)(iVar21 + 0x10) = local_28;
            fVar29 = *local_14;
            local_53c = (**(code **)(*local_540 + 0x14))(fVar29,local_520);
            local_538 = fVar29;
            pcVar19 = (char *)(**(code **)(*(int *)(param_3[4] + 0xc) + 4))
                                        (&local_21,param_3,param_1,param_2,local_34,*local_14);
            if (*pcVar19 == '\0') {
              fVar29 = (float)FUN_01181b70();
              local_18[2] = fVar29;
            }
            else {
              iVar28 = *param_3;
              local_1c = (int *)(uint)*(byte *)(local_53c + 8);
              local_20 = (float *)(iVar28 + 0x669);
              if (param_3[6] == 0) {
                local_20 = (float *)(iVar28 + 0x1a0);
              }
              fVar29 = (float)(**(code **)(iVar28 + 0xb34 +
                                          (uint)*(byte *)((int)local_1c +
                                                         (int)local_20 +
                                                         (uint)*(byte *)(*param_1 + 8) * 0x23) *
                                          0x14))(param_1,&local_53c,param_3,local_68);
              local_18[2] = fVar29;
            }
            *local_18 = *local_14;
            uVar17 = *(uint *)(iVar21 + 0x10);
            local_20 = (float *)(*piVar27 + uVar17 * 0xc);
            pfVar23 = local_320;
          }
          local_18 = local_18 + 3;
          local_14 = local_14 + 1;
        } while (local_14 != local_64);
      }
    }
  }
joined_r0x01160212:
  local_31c = 0;
  if (-1 < local_318) {
    local_31c = 0;
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(pfVar23,local_318 * 4);
  }
  puVar15 = *(undefined4 **)(local_6c + 0xc);
  local_28 = puVar15 + *(int *)(local_6c + 0x10) * 3;
  local_74 = param_2[2];
  local_70 = param_2;
  pvVar14 = TlsGetValue(DAT_01f8fc54);
  puVar7 = *(undefined4 **)((int)pvVar14 + 4);
  if (puVar7 < *(undefined4 **)((int)pvVar14 + 0xc)) {
    *puVar7 = "StNarrowPhase";
    uVar8 = rdtsc();
    local_1c = (int *)uVar8;
    puVar7[1] = local_1c;
    *(undefined4 **)((int)pvVar14 + 4) = puVar7 + 3;
  }
  piVar27 = (int *)(**(code **)(*(int *)*param_2 + 0x38))();
  if (puVar15 != local_28) {
    do {
      local_7c = (**(code **)(*piVar27 + 0x14))(*puVar15,local_740);
      local_78 = *puVar15;
      (**(code **)(*(int *)puVar15[2] + 0x18))(param_1,&local_7c,param_3,param_4);
      puVar15 = puVar15 + 3;
    } while (puVar15 != local_28);
  }
  pvVar14 = TlsGetValue(DAT_01f8fc54);
  puVar15 = *(undefined4 **)((int)pvVar14 + 4);
  if (puVar15 < *(undefined4 **)((int)pvVar14 + 0xc)) {
    *puVar15 = &DAT_017e01a0;
    uVar8 = rdtsc();
    puVar15[1] = (int)uVar8;
    *(undefined4 **)((int)pvVar14 + 4) = puVar15 + 3;
  }
  return;
}

// 01160310  FUN_01160310  size=512  [run]
void FUN_01160310(int *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_470 [512];
  undefined4 *local_270;
  int local_26c;
  int local_268;
  undefined4 local_264 [129];
  undefined1 local_60 [44];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  int *local_24;
  uint local_20;
  undefined1 local_19;
  undefined4 *local_18;
  int *local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "LtBvTree";
    puVar1[3] = "StQueryTree";
    uVar2 = rdtsc();
    local_14 = (int *)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 4;
  }
  FUN_0115edb0(param_1,param_2,param_3,local_60);
  local_24 = (int *)*param_2;
  local_270 = local_264;
  local_26c = 0;
  local_268 = -0x7fffff80;
  (**(code **)(*local_24 + 0x44))(local_60,&local_270);
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar5 = local_270;
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "StNarrowPhase";
    uVar2 = rdtsc();
    local_14 = (int *)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_20 = (uint)*(byte *)(*param_1 + 8);
  local_18 = local_270 + local_26c;
  local_2c = param_2[2];
  local_28 = param_2;
  local_14 = (int *)(**(code **)(*local_24 + 0x38))();
  if (puVar5 != local_18) {
    do {
      pcVar4 = (char *)(**(code **)(*(int *)(param_3[4] + 0xc) + 4))
                                 (&local_19,param_3,param_1,param_2,local_14,*puVar5);
      if (*pcVar4 != '\0') {
        local_34 = (**(code **)(*local_14 + 0x14))(*puVar5,local_470);
        local_30 = *puVar5;
        (**(code **)(*param_3 +
                    ((uint)*(byte *)(local_20 * 0x23 + 0x1a0 +
                                    (uint)*(byte *)(local_34 + 8) + *param_3) * 5 + 0x2d0) * 4))
                  (param_1,&local_34,param_3,param_4,param_5);
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_18);
  }
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_017e01a0;
    uVar2 = rdtsc();
    local_18 = (undefined4 *)uVar2;
    puVar1[1] = local_18;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_26c = 0;
  if (-1 < local_268) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_270,local_268 * 4);
  }
  return;
}

// 01160510  FUN_01160510  size=517  [run]
void FUN_01160510(int *param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined1 local_470 [512];
  undefined4 *local_270;
  int local_26c;
  int local_268;
  undefined4 local_264 [129];
  undefined1 local_60 [44];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  int *local_24;
  uint local_20;
  undefined1 local_19;
  undefined4 *local_18;
  int *local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "LtBvTree";
    puVar1[3] = "StQueryTree";
    uVar2 = rdtsc();
    local_14 = (int *)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 4;
  }
  FUN_0115ee40(param_1,param_2,param_3,local_60);
  local_24 = (int *)*param_2;
  local_270 = local_264;
  local_26c = 0;
  local_268 = -0x7fffff80;
  (**(code **)(*local_24 + 0x44))(local_60,&local_270);
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar5 = local_270;
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "StNarrowPhase";
    uVar2 = rdtsc();
    local_14 = (int *)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_20 = (uint)*(byte *)(*param_1 + 8);
  local_18 = local_270 + local_26c;
  local_2c = param_2[2];
  local_28 = param_2;
  local_14 = (int *)(**(code **)(*local_24 + 0x38))();
  if (puVar5 != local_18) {
    do {
      pcVar4 = (char *)(**(code **)(*(int *)(param_3[4] + 0xc) + 4))
                                 (&local_19,param_3,param_1,param_2,local_14,*puVar5);
      if (*pcVar4 != '\0') {
        local_34 = (**(code **)(*local_14 + 0x14))(*puVar5,local_470);
        local_30 = *puVar5;
        (**(code **)(*param_3 + 0xb38 +
                    (uint)*(byte *)(local_20 * 0x23 + 0x1a0 +
                                   (uint)*(byte *)(local_34 + 8) + *param_3) * 0x14))
                  (param_1,&local_34,param_3,param_4);
        if (*(char *)(param_4 + 4) != '\0') break;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_18);
  }
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_017e01a0;
    uVar2 = rdtsc();
    local_18 = (undefined4 *)uVar2;
    puVar1[1] = local_18;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_26c = 0;
  if (-1 < local_268) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_270,local_268 * 4);
  }
  return;
}

// 01160720  FUN_01160720  size=209  [run]
void FUN_01160720(void)

{
  code *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined2 local_8;
  
  local_18 = hkpSymmetricAgent<hkpBvTreeAgent>::hkpSymmetricAgent<hkpBvTreeAgent>;
  local_14 = hkpSymmetricAgentFlipBodyCollector::hkpSymmetricAgentFlipBodyCollector_6;
  local_10 = hkpSymmetricAgentFlipCollector::hkpSymmetricAgentFlipCollector_6;
  local_c = (code *)&LAB_0115d1d0;
  local_8 = 0x101;
  FUN_011633a0(&local_18,0x16,0xffffffff);
  FUN_011633a0(&local_18,7,0xffffffff);
  local_18 = FUN_0115f490;
  local_14 = FUN_01160510;
  local_10 = FUN_0115f090;
  local_c = FUN_01160310;
  local_8 = 0x100;
  FUN_011633a0(&local_18,0xffffffff,0x16);
  FUN_011633a0(&local_18,0xffffffff,7);
  local_18 = hkpSymmetricAgent<hkpBvTreeAgent>::hkpSymmetricAgent<hkpBvTreeAgent>;
  local_14 = FUN_01160510;
  local_10 = FUN_0115f090;
  local_c = FUN_01160310;
  local_8 = 0x100;
  FUN_011633a0(&local_18,0x16,0x16);
  FUN_011633a0(&local_18,7,7);
  return;
}

// 01160800  hkpBvTreeAgent::vf14  size=35  [run]
void hkpBvTreeAgent::vf14
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_01160310(param_1,param_2,param_3,param_4,param_5);
  return;
}

// 01160830  hkpBvTreeAgent::vf0C  size=31  [run]
void hkpBvTreeAgent::vf0C
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01160510(param_1,param_2,param_3,param_4);
  return;
}

// 011608A0  FUN_011608a0  size=18  [run]
int __thiscall FUN_011608a0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 01160900  FUN_01160900  size=20  [run]
void __thiscall FUN_01160900(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 01160920  FUN_01160920  size=52  [run]
undefined4 __thiscall FUN_01160920(int param_1,undefined4 param_2,int param_3)

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

// 01160970  FUN_01160970  size=44  [run]
void FUN_01160970(undefined8 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined8 *)(param_2 + (int)param_1);
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8 + (int)param_1);
      param_1 = (undefined8 *)((int)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 011609A0  FUN_011609a0  size=48  [run]
void FUN_011609a0(undefined8 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *(undefined8 *)(param_3 + (int)param_1);
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 8 + (int)param_1);
      }
      param_1 = (undefined8 *)((int)param_1 + 0xc);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 011609D0  FUN_011609d0  size=50  [run]
undefined4 __thiscall FUN_011609d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = param_1 + 0x669;
  if (param_4 == 0) {
    iVar1 = param_1 + 0x1a0;
  }
  return *(undefined4 *)(param_1 + 0xb34 + (uint)*(byte *)(param_2 * 0x23 + iVar1 + param_3) * 0x14)
  ;
}

// 01160A10  FUN_01160a10  size=34  [run]
undefined4 __thiscall FUN_01160a10(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (param_1 + 0xb38 + (uint)*(byte *)(param_2 * 0x23 + param_3 + 0x1a0 + param_1) * 0x14);
}

// 01160A40  FUN_01160a40  size=34  [run]
undefined4 __thiscall FUN_01160a40(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (param_1 + 0xb3c + (uint)*(byte *)(param_2 * 0x23 + param_3 + 0x1a0 + param_1) * 0x14);
}

// 01160A70  FUN_01160a70  size=34  [run]
undefined4 __thiscall FUN_01160a70(int param_1,int param_2,int param_3)

{
  return *(undefined4 *)
          (param_1 + ((uint)*(byte *)(param_2 * 0x23 + param_3 + 0x1a0 + param_1) * 5 + 0x2d0) * 4);
}

// 01160AB0  FUN_01160ab0  size=21  [run]
void __thiscall FUN_01160ab0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 8);
  return;
}

// 01160AD0  FUN_01160ad0  size=40  [run]
undefined4 * __thiscall
FUN_01160ad0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)*param_1 + 0x14))(param_4,param_1 + 8);
  param_1[2] = param_4;
  param_1[1] = uVar1;
  return param_1 + 1;
}

// 01160B20  FUN_01160b20  size=64  [run]
void __thiscall FUN_01160b20(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = param_1[1] + -1;
  iVar1 = (param_1[1] - param_2) * 0xc;
  puVar2 = (undefined4 *)(*param_1 + param_2 * 0xc);
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[3];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 01160B60  FUN_01160b60  size=55  [run]
void __thiscall FUN_01160b60(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0xc);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01160BA0  FUN_01160ba0  size=127  [run]
int __thiscall FUN_01160ba0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_4;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar3,0xc);
  }
  FUN_01019bd0(*param_1 + (param_4 + param_3) * 0xc,*param_1 + param_3 * 0xc,(iVar2 - param_3) * 0xc
              );
  param_1[1] = iVar1;
  return *param_1 + param_3 * 0xc;
}

// 01160C20  FUN_01160c20  size=65  [run]
void FUN_01160c20(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0xc + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 01160C70  FUN_01160c70  size=76  [run]
void FUN_01160c70(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0xc + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 01160CC0  FUN_01160cc0  size=173  [run]
int * __thiscall FUN_01160cc0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_3[1];
  iVar5 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar4,0xc);
  }
  puVar2 = (undefined8 *)*param_1;
  if (0 < iVar5) {
    iVar3 = *param_3 - (int)puVar2;
    iVar4 = iVar5;
    do {
      *puVar2 = *(undefined8 *)(iVar3 + (int)puVar2);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(iVar3 + 8 + (int)puVar2);
      puVar2 = (undefined8 *)((int)puVar2 + 0xc);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar2 = (undefined8 *)(*param_1 + iVar5 * 0xc);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*param_3 + iVar5 * 0xc) - (int)puVar2;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *(undefined8 *)(iVar5 + (int)puVar2);
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(iVar5 + 8 + (int)puVar2);
      }
      puVar2 = (undefined8 *)((int)puVar2 + 0xc);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = iVar1;
  return param_1;
}

// 01160D70  FUN_01160d70  size=86  [run]
void __thiscall FUN_01160d70(int param_1,int *param_2,int *param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = param_1 + 0x669;
  if (*(int *)(param_4 + 0x18) == 0) {
    iVar1 = param_1 + 0x1a0;
  }
  (**(code **)(param_1 + 0xb34 +
              (uint)*(byte *)((uint)*(byte *)(*param_2 + 8) * 0x23 + iVar1 +
                             (uint)*(byte *)(*param_3 + 8)) * 0x14))
            (param_2,param_3,param_4,param_5);
  return;
}

// 01160DD0  FUN_01160dd0  size=37  [run]
void FUN_01160dd0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01160E00  FUN_01160e00  size=56  [run]
void __thiscall FUN_01160e00(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01160E40  FUN_01160e40  size=128  [run]
int __thiscall FUN_01160e40(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar1 = iVar2 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,0xc);
  }
  FUN_01019bd0(*param_1 + (param_3 + param_2) * 0xc,*param_1 + param_2 * 0xc,(iVar2 - param_2) * 0xc
              );
  param_1[1] = iVar1;
  return *param_1 + param_2 * 0xc;
}

// 01160EC0  FUN_01160ec0  size=173  [run]
int * __thiscall FUN_01160ec0(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2[1];
  iVar5 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar4,0xc);
  }
  puVar2 = (undefined8 *)*param_1;
  if (0 < iVar5) {
    iVar3 = *param_2 - (int)puVar2;
    iVar4 = iVar5;
    do {
      *puVar2 = *(undefined8 *)(iVar3 + (int)puVar2);
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(iVar3 + 8 + (int)puVar2);
      puVar2 = (undefined8 *)((int)puVar2 + 0xc);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar2 = (undefined8 *)(*param_1 + iVar5 * 0xc);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*param_2 + iVar5 * 0xc) - (int)puVar2;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *(undefined8 *)(iVar5 + (int)puVar2);
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(iVar5 + 8 + (int)puVar2);
      }
      puVar2 = (undefined8 *)((int)puVar2 + 0xc);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = iVar1;
  return param_1;
}

// 01160F70  FUN_01160f70  size=625  [run]
void FUN_01160f70(int *param_1,int *param_2,int *param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int *local_c;
  int *local_8;
  
  piVar4 = param_1;
  piVar12 = (int *)*param_1;
  local_8 = piVar12 + param_1[1] * 3;
  piVar6 = (int *)*param_2;
  piVar1 = piVar6 + param_2[1];
  piVar11 = param_2;
  if (piVar12 != local_8) {
    do {
      if ((piVar6 == piVar1) || (*piVar12 != *piVar6)) {
        param_1 = (int *)*piVar11;
        if (param_1 != piVar1) {
          do {
            if (*piVar12 == *param_1) {
              piVar6 = param_1 + 1;
              param_1 = piVar6;
              goto LAB_0116103b;
            }
            param_1 = param_1 + 1;
          } while (param_1 != piVar1);
        }
        (**(code **)(*(int *)piVar12[2] + 0x1c))(param_7);
        piVar4[1] = piVar4[1] + -1;
        iVar7 = ((int)piVar12 - *piVar4) / 0xc;
        iVar9 = (piVar4[1] - iVar7) * 0xc;
        puVar5 = (undefined4 *)(*piVar4 + iVar7 * 0xc);
        if (0 < iVar9) {
          iVar9 = (iVar9 - 1U >> 2) + 1;
          do {
            *puVar5 = puVar5[3];
            puVar5 = puVar5 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        piVar12 = piVar12 + -3;
        local_8 = local_8 + -3;
        piVar6 = param_1;
        piVar11 = param_2;
      }
      else {
        piVar6 = piVar6 + 1;
      }
LAB_0116103b:
      piVar12 = piVar12 + 3;
    } while (piVar12 != local_8);
  }
  uVar3 = *param_8;
  iVar9 = piVar4[1];
  if (piVar11[1] != iVar9) {
    piVar12 = (int *)*piVar4;
    local_c = piVar12 + iVar9 * 3;
    piVar6 = (int *)*piVar11;
    piVar1 = piVar6 + piVar11[1];
    for (; piVar6 != piVar1; piVar6 = piVar6 + 1) {
      if ((piVar12 == local_c) || (*piVar12 != *piVar6)) {
        iVar7 = iVar9 + 1;
        iVar13 = (int)piVar6 - *param_2 >> 2;
        if ((int)(piVar4[2] & 0x3fffffffU) < iVar7) {
          iVar2 = (piVar4[2] & 0x3fffffffU) * 2;
          iVar10 = iVar7;
          if (iVar7 < iVar2) {
            iVar10 = iVar2;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,piVar4,iVar10,0xc);
        }
        iVar10 = iVar13 * 0xc;
        iVar2 = iVar10 + *piVar4;
        FUN_01019bd0(iVar2 + 0xc,iVar2,(iVar9 - iVar13) * 0xc);
        puVar5 = param_8;
        piVar4[1] = iVar7;
        iVar9 = *piVar6;
        piVar12 = (int *)(*piVar4 + iVar10);
        piVar11 = param_8 + 1;
        iVar7 = (**(code **)(*(int *)*param_8 + 0x14))(iVar9,param_8 + 8);
        *piVar11 = iVar7;
        puVar5[2] = iVar9;
        pcVar8 = (char *)(**(code **)(*(int *)(param_5[4] + 0xc) + 4))
                                   ((int)&param_1 + 3,param_5,param_3,param_4,uVar3,*piVar6);
        if (*pcVar8 == '\0') {
          iVar9 = FUN_01181b70();
        }
        else {
          iVar7 = *param_5;
          iVar9 = iVar7 + 0x669;
          if (param_5[6] == 0) {
            iVar9 = iVar7 + 0x1a0;
          }
          iVar9 = (**(code **)(iVar7 + 0xb34 +
                              (uint)*(byte *)((uint)*(byte *)(*param_3 + 8) * 0x23 + iVar9 +
                                             (uint)*(byte *)(*piVar11 + 8)) * 0x14))
                            (param_3,piVar11,param_5,param_6);
        }
        piVar12[2] = iVar9;
        *piVar12 = *piVar6;
        iVar9 = piVar4[1];
        local_c = (int *)(*piVar4 + iVar9 * 0xc);
      }
      piVar12 = piVar12 + 3;
    }
  }
  return;
}

// 011611F0  FUN_011611f0  size=111  [run]
int * __thiscall FUN_011611f0(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 0xc + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 01161260  FUN_01161260  size=149  [run]
void __fastcall FUN_01161260(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0xc + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01161300  hkBaseObject::hkBaseObject_219  size=78  [run]
void __fastcall hkBaseObject::hkBaseObject_219(undefined4 *param_1)

{
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01161350  hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::hkpSymmetricAgentLinearCast<hkpBvTreeAgent>  size=28  [run]
undefined4 * __thiscall
hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::hkpSymmetricAgentLinearCast<hkpBvTreeAgent>
          (undefined4 *param_1,undefined4 param_2)

{
  hkpBvTreeAgent::hkpBvTreeAgent(param_2);
  *param_1 = vftable;
  return param_1;
}

// 01161370  hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::vf20  size=28  [run]
void hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::vf20
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  hkpBvTreeAgent::vf20(param_2,param_1,param_3,param_4);
  return;
}

// 01161390  hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::vf10  size=59  [run]
void hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::vf10
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0x7f7fffee;
  local_10 = hkpSymmetricAgentFlipCollector::vftable;
  hkpBvTreeAgent::vf10(param_2,param_1,param_3,&local_10);
  return;
}

// 011613D0  hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::vf00  size=121  [run]
undefined4 * __thiscall
hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01161450  FUN_01161450  size=1050  [run]
void FUN_01161450(int *param_1,uint *param_2,int *param_3,undefined4 param_4,int *param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  LPVOID pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  uint *local_30;
  uint local_2c;
  uint local_28;
  uint *local_24;
  uint local_20;
  undefined4 local_1c;
  uint *local_18;
  uint *local_14;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  
  puVar12 = param_2;
  uVar11 = param_2[1];
  puVar17 = (uint *)*param_1;
  local_14 = puVar17 + param_1[1] * 3;
  local_8 = (uint *)*param_2;
  local_18 = local_8 + uVar11;
  local_24 = (uint *)0x0;
  local_30 = (uint *)0x0;
  local_2c = 0;
  local_28 = 0x80000000;
  local_20 = uVar11;
  local_10 = puVar17;
  if (uVar11 != 0) {
    pvVar6 = TlsGetValue(DAT_01f8fc4c);
    local_24 = *(uint **)((int)pvVar6 + 0xc);
    uVar14 = uVar11 * 0xc + 0x7f & 0xffffff80;
    param_2 = local_24;
    if ((*(int *)((int)pvVar6 + 8) < (int)uVar14) ||
       (*(uint *)((int)pvVar6 + 0x10) < (int)local_24 + uVar14)) {
      local_24 = (uint *)FUN_0100b780(uVar14);
    }
    else {
      *(uint *)((int)pvVar6 + 0xc) = (int)local_24 + uVar14;
    }
  }
  uVar14 = puVar12[1];
  local_28 = uVar11 | 0x80000000;
  local_30 = local_24;
  if ((int)(uVar11 & 0x3fffffff) < (int)uVar14) {
    uVar11 = (uVar11 & 0x3fffffff) * 2;
    if ((int)uVar11 <= (int)uVar14) {
      uVar11 = uVar14;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_30,uVar11,0xc);
  }
  piVar5 = param_5;
  local_1c = *param_8;
  local_c = local_30;
  puVar7 = param_8;
  local_2c = uVar14;
  if (puVar17 != local_14) {
    do {
      puVar12 = local_14;
      if (local_8 == local_18) {
        if (puVar17 != local_14) {
          puVar17 = puVar17 + 2;
          do {
            if (*puVar17 != 0) {
              (**(code **)(*(int *)*puVar17 + 0x1c))(param_7);
              puVar7 = param_8;
            }
            puVar2 = puVar17 + 1;
            puVar17 = puVar17 + 3;
          } while (puVar2 != puVar12);
        }
        break;
      }
      uVar11 = *local_8;
      if (uVar11 == *puVar17) {
        *(undefined8 *)local_c = *(undefined8 *)puVar17;
        local_c[2] = puVar17[2];
        local_c = local_c + 3;
        local_8 = local_8 + 1;
LAB_01161643:
        local_10 = puVar17 + 3;
      }
      else {
        if (*puVar17 <= uVar11) {
          if (puVar17[2] != 0) {
            (**(code **)(*(int *)puVar17[2] + 0x1c))(param_7);
            puVar7 = param_8;
          }
          goto LAB_01161643;
        }
        piVar1 = puVar7 + 1;
        iVar9 = (**(code **)(*(int *)*puVar7 + 0x14))(uVar11,puVar7 + 8);
        puVar17 = local_8;
        *piVar1 = iVar9;
        puVar7[2] = uVar11;
        pcVar10 = (char *)(**(code **)(*(int *)(piVar5[4] + 0xc) + 4))
                                    ((int)&param_2 + 3,piVar5,param_3,param_4,local_1c,*local_8);
        if (*pcVar10 == '\0') {
          uVar11 = FUN_01181b70();
          local_c[2] = uVar11;
        }
        else {
          local_8 = (uint *)(uint)*(byte *)(*piVar1 + 8);
          iVar16 = *piVar5;
          iVar9 = iVar16 + 0x669;
          if (piVar5[6] == 0) {
            iVar9 = iVar16 + 0x1a0;
          }
          uVar11 = (**(code **)(iVar16 + 0xb34 +
                               (uint)*(byte *)((uint)*(byte *)(*param_3 + 8) * 0x23 + iVar9 +
                                              (int)local_8) * 0x14))(param_3,piVar1,piVar5,param_6);
          local_c[2] = uVar11;
        }
        *local_c = *puVar17;
        local_c = local_c + 3;
        local_8 = puVar17 + 1;
        puVar7 = param_8;
      }
      puVar17 = local_10;
    } while (local_10 != local_14);
  }
  if (local_8 != local_18) {
    local_c = local_c + 2;
    piVar1 = puVar7 + 1;
    puVar8 = puVar7;
    do {
      uVar11 = *local_8;
      iVar9 = (**(code **)(*(int *)*puVar8 + 0x14))(uVar11,puVar8 + 8);
      piVar4 = param_3;
      *piVar1 = iVar9;
      puVar7[2] = uVar11;
      pcVar10 = (char *)(**(code **)(*(int *)(piVar5[4] + 0xc) + 4))
                                  ((int)&param_2 + 3,piVar5,param_3,param_4,local_1c,*local_8);
      if (*pcVar10 == '\0') {
        uVar11 = FUN_01181b70();
        *local_c = uVar11;
      }
      else {
        local_14 = (uint *)(uint)*(byte *)(*piVar1 + 8);
        iVar16 = *piVar5;
        iVar9 = iVar16 + 0x669;
        if (piVar5[6] == 0) {
          iVar9 = iVar16 + 0x1a0;
        }
        uVar11 = (**(code **)(iVar16 + 0xb34 +
                             (uint)*(byte *)((uint)*(byte *)(*piVar4 + 8) * 0x23 + iVar9 +
                                            (int)local_14) * 0x14))(piVar4,piVar1,piVar5,param_6);
        *local_c = uVar11;
      }
      uVar11 = *local_8;
      local_8 = local_8 + 1;
      local_c[-2] = uVar11;
      local_c = local_c + 3;
      puVar8 = param_8;
    } while (local_8 != local_18);
  }
  uVar11 = local_2c;
  uVar14 = param_1[1];
  if ((int)local_2c <= param_1[1]) {
    uVar14 = local_2c;
  }
  param_8 = (undefined4 *)local_2c;
  if ((int)(param_1[2] & 0x3fffffffU) < (int)local_2c) {
    uVar3 = (param_1[2] & 0x3fffffffU) * 2;
    uVar15 = local_2c;
    if ((int)local_2c < (int)uVar3) {
      uVar15 = uVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,uVar15,0xc);
  }
  uVar3 = local_20;
  puVar17 = local_24;
  puVar13 = (undefined8 *)*param_1;
  puVar12 = local_30;
  uVar15 = uVar14;
  if (0 < (int)uVar14) {
    do {
      *puVar13 = *(undefined8 *)puVar12;
      *(uint *)(puVar13 + 1) = puVar12[2];
      puVar13 = (undefined8 *)((int)puVar13 + 0xc);
      uVar15 = uVar15 - 1;
      puVar12 = puVar12 + 3;
      uVar11 = (uint)param_8;
    } while (uVar15 != 0);
  }
  puVar13 = (undefined8 *)(*param_1 + uVar14 * 0xc);
  iVar9 = uVar11 - uVar14;
  if (0 < iVar9) {
    iVar16 = (int)local_30 + (uVar14 * 0xc - (int)puVar13);
    do {
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = *(undefined8 *)(iVar16 + (int)puVar13);
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(iVar16 + 8 + (int)puVar13);
      }
      puVar13 = (undefined8 *)((int)puVar13 + 0xc);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  param_1[1] = uVar11;
  if (local_24 == local_30) {
    local_2c = 0;
  }
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  uVar11 = uVar3 * 0xc + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar6 + 8) < (int)uVar11) ||
      (uVar11 + (int)puVar17 != *(int *)((int)pvVar6 + 0xc))) ||
     (*(uint **)((int)pvVar6 + 0x14) == puVar17)) {
    FUN_0100b9b0(puVar17,uVar11);
  }
  else {
    *(uint **)((int)pvVar6 + 0xc) = puVar17;
  }
  local_2c = 0;
  if (-1 < (int)local_28) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30,(local_28 & 0x3fffffff) * 0xc);
  }
  return;
}

// 01161870  hkpSymmetricAgent<hkpBvTreeAgent>::hkpSymmetricAgent<hkpBvTreeAgent>  size=28  [run]
undefined4 * __thiscall
hkpSymmetricAgent<hkpBvTreeAgent>::hkpSymmetricAgent<hkpBvTreeAgent>
          (undefined4 *param_1,undefined4 param_2)

{
  hkpBvTreeAgent::hkpBvTreeAgent(param_2);
  *param_1 = vftable;
  return param_1;
}

// 01161890  hkBaseObject::hkBaseObject_215  size=78  [run]
void __fastcall hkBaseObject::hkBaseObject_215(undefined4 *param_1)

{
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 011618E0  hkpSymmetricAgent<hkpBvTreeAgent>::vf00  size=121  [run]
undefined4 * __thiscall hkpSymmetricAgent<hkpBvTreeAgent>::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpBvTreeAgent::vftable;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 0xc);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01162580  hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::vf18  size=272  [run]
void hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::vf18
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  float fVar7;
  float *pfVar8;
  
  fVar3 = (float)param_4[0xc0c];
  uVar6 = *param_4;
  hkpBvTreeAgent::vf18(param_2,param_1,param_3,param_4);
  if (uVar6 < *param_4) {
    pfVar8 = (float *)(uVar6 + 0x10);
    do {
      fVar7 = pfVar8[3];
      pfVar8[-4] = fVar7 * *pfVar8 + pfVar8[-4];
      pfVar8[-3] = fVar7 * pfVar8[1] + pfVar8[-3];
      pfVar8[-2] = fVar7 * pfVar8[2] + pfVar8[-2];
      pfVar8[-1] = fVar7 * pfVar8[3] + pfVar8[-1];
      *pfVar8 = -*pfVar8;
      pfVar8[1] = -pfVar8[1];
      pfVar8[2] = -pfVar8[2];
      pfVar8[3] = pfVar8[3];
      pfVar1 = pfVar8 + 8;
      pfVar8 = pfVar8 + 0xc;
    } while (pfVar1 < (float *)*param_4);
  }
  if (fVar3 != (float)param_4[0xc0c]) {
    param_4[0xc08] = param_4[0xc08] ^ 0x80000000;
    param_4[0xc09] = param_4[0xc09] ^ 0x80000000;
    param_4[0xc0a] = param_4[0xc0a] ^ 0x80000000;
    param_4[0xc0b] = param_4[0xc0b];
    bVar4 = *(byte *)((int)param_4 + 0x3049);
    *(byte *)((int)param_4 + 0x304a) =
         *(byte *)((int)param_4 + 0x304a) >> 4 | *(byte *)((int)param_4 + 0x304a) << 4;
    *(byte *)((int)param_4 + 0x3049) = (byte)param_4[0xc12];
    iVar2 = ((byte)param_4[0xc12] - 1) + (uint)bVar4;
    uVar6 = param_4[0xc10];
    *(byte *)(param_4 + 0xc12) = bVar4;
    *(undefined2 *)(param_4 + 0xc10) = *(undefined2 *)((int)param_4 + iVar2 * 2 + 0x3040);
    *(short *)((int)param_4 + iVar2 * 2 + 0x3040) = (short)uVar6;
    if ((*(byte *)((int)param_4 + 0x3049) & (byte)param_4[0xc12]) == 2) {
      uVar5 = *(undefined2 *)((int)param_4 + 0x3042);
      *(short *)((int)param_4 + 0x3042) = (short)param_4[0xc11];
      *(undefined2 *)(param_4 + 0xc11) = uVar5;
    }
  }
  return;
}

// 01162690  hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::vf0C  size=50  [run]
void hkpSymmetricAgentLinearCast<hkpBvTreeAgent>::vf0C
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  local_8 = param_4;
  local_c = 0;
  local_10 = hkpSymmetricAgentFlipBodyCollector::vftable;
  hkpBvTreeAgent::vf0C(param_2,param_1,param_3,&local_10);
  return;
}

// 011626D0  hkpSymmetricAgent<hkpBvTreeAgent>::vf14  size=194  [run]
void hkpSymmetricAgent<hkpBvTreeAgent>::vf14
               (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
               int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined ***pppuVar4;
  undefined4 local_e0 [20];
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  undefined **local_70;
  undefined4 local_6c;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  undefined **local_40;
  undefined4 local_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_90 = param_3[0x14] ^ 0x80000000;
  uStack_8c = param_3[0x15] ^ 0x80000000;
  uStack_88 = param_3[0x16] ^ 0x80000000;
  uStack_84 = param_3[0x17] ^ 0x80000000;
  local_30 = *(undefined8 *)(param_3 + 0x14);
  puVar2 = param_3;
  puVar3 = local_e0;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_20 = param_4;
  local_28 = *(undefined8 *)(param_3 + 0x16);
  local_3c = 0x7f7fffee;
  local_40 = hkpSymmetricAgentFlipCastCollector::vftable;
  if (param_5 == 0) {
    pppuVar4 = (undefined ***)0x0;
  }
  else {
    local_6c = 0x7f7fffee;
    local_60 = *(undefined8 *)(param_3 + 0x14);
    pppuVar4 = &local_70;
    local_70 = hkpSymmetricAgentFlipCastCollector::vftable;
    local_50 = param_5;
    local_58 = local_28;
  }
  hkpBvTreeAgent::vf14(param_2,param_1,local_e0,&local_40,pppuVar4);
  return;
}

// 011627A0  FUN_011627a0  size=28  [run]
void __thiscall FUN_011627a0(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = (*param_1 != '\0') != (bool)param_3;
  return;
}

// 01162800  FUN_01162800  size=14  [run]
undefined4 FUN_01162800(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  *param_2 = 0;
  return param_3;
}

// 01162820  FUN_01162820  size=8  [run]
undefined4 FUN_01162820(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  return param_3;
}

// 01162830  FUN_01162830  size=331  [run]
void __fastcall FUN_01162830(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x19c) = 1;
  *(undefined4 *)(param_1 + 0x1034) = 1;
  iVar2 = 0;
  iVar3 = param_1 + 0x1040;
  do {
    iVar1 = 0;
    do {
      if (*(int *)(param_1 + 0x20e0) != 0) {
        *(undefined1 *)(iVar2 + 2 + *(int *)(param_1 + 0x20e0)) = 100;
        *(undefined1 *)(*(int *)(param_1 + 0x20e4) + 2 + iVar2) = 100;
        *(undefined1 *)(*(int *)(param_1 + 0x20e8) + 2 + iVar2) = 100;
        *(undefined1 *)(*(int *)(param_1 + 0x20ec) + 2 + iVar2) = 100;
      }
      *(undefined1 *)(iVar3 + -0xea0 + iVar1) = 0;
      *(undefined1 *)(iVar3 + iVar1) = 0;
      *(undefined1 *)(iVar3 + -0x9d7 + iVar1) = 0;
      *(undefined1 *)(iVar3 + 0x4d0 + iVar1) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 3;
    } while (iVar1 < 0x23);
    iVar3 = iVar3 + 0x23;
  } while (iVar2 < 0xe5b);
  *(undefined1 **)(param_1 + 0xb34) = &LAB_01181b60;
  *(undefined **)(param_1 + 0xb38) = &DAT_01181b40;
  *(undefined **)(param_1 + 0xb3c) = &DAT_01181b30;
  *(undefined **)(param_1 + 0xb40) = &DAT_01181b50;
  *(undefined2 *)(param_1 + 0xb44) = 0x100;
  *(code **)(param_1 + 0x19e0) = FUN_01162800;
  *(undefined **)(param_1 + 0x19e4) = &DAT_01162810;
  *(undefined4 *)(param_1 + 0x19e8) = 0;
  *(undefined4 *)(param_1 + 0x19ec) = 0;
  *(undefined4 *)(param_1 + 0x19f0) = 0;
  *(undefined4 *)(param_1 + 0x19f4) = 0;
  *(undefined4 *)(param_1 + 0x19f8) = 0;
  *(undefined4 *)(param_1 + 0x1a04) = 0;
  *(undefined4 *)(param_1 + 0x19fc) = 0;
  *(undefined4 *)(param_1 + 0x1a00) = 0;
  *(code **)(param_1 + 0x1a08) = FUN_01162820;
  *(undefined4 *)(param_1 + 0x1a10) = 0;
  FUN_01181e20(param_1);
  *(undefined1 *)(param_1 + 0x20d0) = 0;
  if (*(int *)(param_1 + 0x20e8) != 0) {
    iVar3 = 0;
    do {
      iVar2 = 0x23;
      do {
        *(undefined1 *)(iVar3 + 2 + *(int *)(param_1 + 0x20e8)) = 100;
        *(undefined1 *)(iVar3 + 2 + *(int *)(param_1 + 0x20ec)) = 100;
        iVar3 = iVar3 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    } while (iVar3 < 0xe5b);
  }
  return;
}

// 01162980  FUN_01162980  size=16  [run]
void __thiscall FUN_01162980(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x20d3) = param_2;
  return;
}

// 011629D0  FUN_011629d0  size=80  [run]
void __thiscall FUN_011629d0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  FUN_01006000();
  FUN_010060a0();
  *(undefined4 *)(param_1 + 0xc + (param_3 + param_4 * 8) * 4) = param_2;
  FUN_01006000();
  FUN_010060a0();
  *(undefined4 *)(param_1 + 0xc + (param_4 + param_3 * 8) * 4) = param_2;
  return;
}

// 01162A20  FUN_01162a20  size=82  [run]
void __thiscall FUN_01162a20(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_3 * 0x20 + 0xc + param_1);
  puVar1 = (undefined4 *)(param_1 + 0xc + param_3 * 4);
  param_3 = 8;
  do {
    FUN_01006000();
    FUN_010060a0();
    *puVar1 = param_2;
    FUN_01006000();
    FUN_010060a0();
    *puVar2 = param_2;
    puVar2 = puVar2 + 1;
    puVar1 = puVar1 + 8;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

// 01162A80  FUN_01162a80  size=471  [run]
void __thiscall
FUN_01162a80(int param_1,char *param_2,undefined4 param_3,int param_4,int param_5,undefined4 param_6
            ,undefined4 param_7,int param_8,int param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 local_420 [1024];
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined1 *)(param_1 + 0x20d0) = 1;
  local_8 = 0;
  local_14 = param_1;
  if (0 < *(int *)(param_1 + 0x20d8)) {
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x20d4) + local_8 * 8);
      if (*(int *)(*(int *)(param_1 + 0x20d4) + 4 + local_8 * 8) == param_4) {
        FUN_01162a80(param_2,param_3,*puVar1,param_5,param_6,param_7,param_8,param_9 + 1);
        param_1 = local_14;
      }
      if (puVar1[1] == param_5) {
        FUN_01162a80(param_2,param_3,param_4,*puVar1,param_6,param_7,param_8,param_9 + 1);
        param_1 = local_14;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x20d8));
  }
  local_10 = param_5 + 1;
  local_c = param_5;
  local_1c = param_4 + 1;
  iVar6 = param_4;
  if (param_4 == -1) {
    iVar6 = 0;
    param_9 = param_9 + 1;
    local_1c = 0x23;
  }
  if (param_5 == -1) {
    param_9 = param_9 + 1;
    local_c = 0;
    local_10 = 0x23;
  }
  if (iVar6 < local_1c) {
    local_8 = (int)param_2 + iVar6 * 0x23;
    param_2 = (char *)((iVar6 * 0x23 + local_c) * 3 + 1 + param_8);
    local_1c = local_1c - iVar6;
    local_18 = local_c;
    iVar6 = local_10;
    do {
      iVar5 = local_18;
      pcVar7 = param_2;
      if (local_18 < iVar6) {
        do {
          *(undefined1 *)(local_8 + local_18) = (undefined1)param_3;
          if (param_8 != 0) {
            if ((*(char *)(local_14 + 0x20d3) != '\0') && (pcVar7[1] < param_9)) {
              uVar2 = FUN_01179e80((int)pcVar7[-1]);
              uVar3 = FUN_01179e80((int)*pcVar7);
              local_20 = FUN_01179e80(param_4);
              uVar4 = FUN_01179e80(param_5);
              FUN_01015b50(local_420,1000,
                           "Agent handling types <%s-%s> would override more specialized agent <%s-%s>\nMaybe the order of registering your collision agent is wrong, make sure you register your alternate type agents first"
                           ,local_20,uVar4,uVar2,uVar3);
            }
            pcVar7[-1] = (char)param_6;
            pcVar7[1] = (char)param_9;
            *pcVar7 = (char)param_7;
            iVar6 = local_10;
          }
          local_18 = local_18 + 1;
          iVar5 = local_c;
          pcVar7 = pcVar7 + 3;
        } while (local_18 < iVar6);
      }
      param_2 = param_2 + 0x69;
      local_8 = local_8 + 0x23;
      local_1c = local_1c + -1;
      local_18 = iVar5;
    } while (local_1c != 0);
  }
  return;
}

// 01162C60  FUN_01162c60  size=89  [run]
void __thiscall FUN_01162c60(int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (uint *)(param_1 + 0x110 + param_2 * 4);
  *puVar1 = *puVar1 | *(uint *)(param_1 + 0x110 + param_3 * 4);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20d8)) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x20d4) + 4 + iVar3 * 8);
      if (iVar2 == param_2) {
        FUN_01162c60(*(undefined4 *)(*(int *)(param_1 + 0x20d4) + iVar3 * 8),iVar2,param_4 + 1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x20d8));
  }
  return;
}

// 01162CD0  FUN_01162cd0  size=1562  [run]
void __thiscall FUN_01162cd0(int param_1,float *param_2)

{
  undefined2 uVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  *(float *)(param_1 + 0x20f4) = param_2[2];
  pfVar2 = (float *)(param_1 + 0x1f10);
  *(float *)(param_1 + 0x20f0) = param_2[3];
  fVar6 = param_2[2] * *param_2 * param_2[2] * 0.5;
  *(undefined1 *)(param_1 + 0x1f4e) = *(undefined1 *)((int)param_2 + 0x2b);
  *pfVar2 = param_2[1];
  *(float *)(param_1 + 0x1f14) = param_2[1];
  *(float *)(param_1 + 0x1f1c) = param_2[1];
  if (*(char *)((int)param_2 + 0x29) != '\0') {
    *(float *)(param_1 + 0x1f1c) = fVar6 * -2.0;
  }
  *(float *)(param_1 + 0x1f18) = param_2[1];
  if (*(char *)((int)param_2 + 0x2a) != '\0') {
    *(float *)(param_1 + 0x1f18) = fVar6 * -1.0;
  }
  *(undefined4 *)(param_1 + 0x1f44) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x1f20) = 0;
  *(undefined1 *)(param_1 + 0x1f24) = 0;
  uVar1 = *(undefined2 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1f28) = 0xe02d78ec;
  *(undefined4 *)(param_1 + 0x1f2c) = 0xe02d78ec;
  *(undefined2 *)(param_1 + 0x1f4c) = uVar1;
  *(undefined4 *)(param_1 + 0x1f38) = 0xdf0ac723;
  *(undefined4 *)(param_1 + 0x1f3c) = 0xdf0ac723;
  *(undefined4 *)(param_1 + 8000) = 0x5e8ac723;
  *(undefined4 *)(param_1 + 0x1f30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1f34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1f48) = 0x3f800000;
  pfVar4 = pfVar2;
  pfVar5 = (float *)(param_1 + 0x2090);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  pfVar4 = pfVar2;
  pfVar5 = (float *)(param_1 + 0x1f50);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  pfVar4 = pfVar2;
  pfVar5 = (float *)(param_1 + 0x1f90);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  pfVar4 = pfVar2;
  pfVar5 = (float *)(param_1 + 0x1fd0);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  pfVar4 = (float *)(param_1 + 0x2010);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar4 = pfVar4 + 1;
  }
  *(float *)(param_1 + 0x209c) = param_2[1];
  *(float *)(param_1 + 0x2094) = param_2[1];
  *(float *)(param_1 + 0x2098) = param_2[1];
  if (*(char *)(param_2 + 10) != '\0') {
    *(undefined4 *)(param_1 + 0x1f68) = 0xbf000000;
    fVar6 = param_2[4];
    *(undefined4 *)(param_1 + 0x1f78) = 0xbe800000;
    *(float *)(param_1 + 0x1f6c) = -0.5 / (fVar6 - 1.0);
    fVar6 = -0.35 / (param_2[4] - 1.0);
    *(float *)(param_1 + 0x1f7c) = fVar6;
    *(float *)(param_1 + 0x1f80) = fVar6 * -0.3;
    *(float *)(param_1 + 0x1f84) = *(float *)(param_1 + 0x1f6c) * -1.0;
    *(float *)(param_1 + 0x1f70) = 5.0 / param_2[3];
    *(float *)(param_1 + 0x1f74) = 0.005 / param_2[3];
    *(float *)(param_1 + 0x1f88) = (*(float *)(param_1 + 0x1f6c) * -2.0) / param_2[3];
    *(undefined2 *)(param_1 + 0x1f8c) = *(undefined2 *)((int)param_2 + 0x22);
    *(undefined4 *)(param_1 + 0x1f60) = 1;
    *(undefined1 *)(param_1 + 0x1f64) = 1;
  }
  if (*(char *)(param_2 + 10) != '\0') {
    *(undefined4 *)(param_1 + 0x1fa8) = 0xbf000000;
    fVar6 = param_2[5];
    *(undefined4 *)(param_1 + 0x1fb8) = 0xbe800000;
    *(float *)(param_1 + 0x1fac) = -0.5 / (fVar6 - 1.0);
    fVar6 = -0.35 / (param_2[5] - 1.0);
    *(float *)(param_1 + 0x1fbc) = fVar6;
    *(float *)(param_1 + 0x1fc0) = fVar6 * -0.3;
    *(float *)(param_1 + 0x1fc4) = *(float *)(param_1 + 0x1fac) * -1.0;
    *(float *)(param_1 + 0x1fb0) = 5.0 / param_2[3];
    *(float *)(param_1 + 0x1fb4) = 0.005 / param_2[3];
    *(float *)(param_1 + 0x1fc8) = (*(float *)(param_1 + 0x1fac) * -2.0) / param_2[3];
    *(undefined2 *)(param_1 + 0x1fcc) = *(undefined2 *)((int)param_2 + 0x22);
    *(undefined4 *)(param_1 + 0x1fa0) = 1;
    if (*(char *)(param_2 + 10) != '\0') {
      *(undefined4 *)(param_1 + 0x1fe8) = 0xbf000000;
      *(float *)(param_1 + 0x1fec) = -0.5 / (param_2[6] - 1.0);
      *(undefined4 *)(param_1 + 0x1ff8) = 0xbe800000;
      fVar7 = -0.35 / (param_2[6] - 1.0);
      *(float *)(param_1 + 0x1ffc) = fVar7;
      fVar6 = *(float *)(param_1 + 0x1fec) * -1.0;
      *(float *)(param_1 + 0x2004) = fVar6;
      *(float *)(param_1 + 0x2000) = fVar7 * -0.3;
      *(float *)(param_1 + 0x1ff0) = 5.0 / param_2[3];
      *(float *)(param_1 + 0x1ff4) = 0.005 / param_2[3];
      *(float *)(param_1 + 0x2008) = fVar6 / param_2[3];
      *(undefined2 *)(param_1 + 0x200c) = *(undefined2 *)(param_2 + 9);
      *(undefined4 *)(param_1 + 0x1fe0) = 1;
    }
  }
  *(float *)(param_1 + 0x2010) = param_2[1];
  if (*(char *)(param_2 + 10) != '\0') {
    *(undefined4 *)(param_1 + 0x2028) = 0xbecccccd;
    fVar7 = -0.6 / (param_2[7] - 1.0);
    *(undefined4 *)(param_1 + 0x2038) = 0xbe4ccccd;
    *(float *)(param_1 + 0x202c) = fVar7;
    fVar6 = -0.42 / (param_2[7] - 1.0);
    *(float *)(param_1 + 0x203c) = fVar6;
    *(float *)(param_1 + 0x2040) = fVar6 * -0.3;
    fVar7 = fVar7 * -1.0;
    *(float *)(param_1 + 0x2044) = fVar7;
    *(float *)(param_1 + 0x2030) = 5.0 / param_2[3];
    *(float *)(param_1 + 0x2034) = 0.005 / param_2[3];
    *(float *)(param_1 + 0x2048) = fVar7 / param_2[3];
    *(undefined2 *)(param_1 + 0x204c) = *(undefined2 *)((int)param_2 + 0x26);
    *(undefined4 *)(param_1 + 0x2020) = 1;
  }
  pfVar2 = (float *)(param_1 + 0x2010);
  pfVar4 = (float *)(param_1 + 0x2050);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar4 = pfVar4 + 1;
  }
  *(float *)(param_1 + 0x205c) = param_2[1];
  *(undefined4 *)(param_1 + 0x2058) = 0x3a83126f;
  *(undefined4 *)(param_1 + 0x2054) = 0x3c23d70a;
  _memset((undefined1 *)(param_1 + 0x1e60),1,100);
  *(undefined1 *)(param_1 + 0x1e60) = 0;
  *(undefined4 *)(param_1 + 0x1e61) = 0x4020100;
  *(undefined2 *)(param_1 + 0x1e65) = 0x405;
  *(undefined4 *)(param_1 + 0x1e68) = 0x306;
  *(undefined4 *)(param_1 + 0x1e6c) = 0x3030101;
  *(undefined1 *)(param_1 + 0x1e70) = 3;
  *(undefined4 *)(param_1 + 0x1eba) = 0x1010303;
  *(undefined2 *)(param_1 + 0x1ebe) = 0x303;
  *(undefined1 *)(param_1 + 0x1ec0) = 3;
  *(undefined2 *)(param_1 + 0x1ec2) = 0x303;
  *(undefined4 *)(param_1 + 0x1e72) = 0x1010303;
  *(undefined4 *)(param_1 + 0x1e76) = 0x1010101;
  *(undefined1 *)(param_1 + 0x1e7a) = 3;
  *(undefined4 *)(param_1 + 0x1e7c) = 0x1020101;
  *(undefined4 *)(param_1 + 0x1e80) = 0x1010101;
  *(undefined1 *)(param_1 + 0x1e84) = 3;
  *(undefined4 *)(param_1 + 0x1e86) = 0x3040101;
  *(undefined4 *)(param_1 + 0x1e8a) = 0x3010101;
  *(undefined1 *)(param_1 + 0x1e8e) = 3;
  *(undefined4 *)(param_1 + 0x1e90) = 0x3050303;
  *(undefined4 *)(param_1 + 0x1e94) = 0x3030101;
  *(undefined1 *)(param_1 + 0x1e98) = 3;
  *(undefined4 *)(param_1 + 0x1e9a) = 0x3040303;
  *(undefined4 *)(param_1 + 0x1e9e) = 0x3030303;
  *(undefined1 *)(param_1 + 0x1ea2) = 3;
  *(undefined2 *)(param_1 + 0x1ea4) = 0x303;
  *(undefined4 *)(param_1 + 0x1eb0) = 0x1010306;
  *(undefined2 *)(param_1 + 0x1eb4) = 0x303;
  *(undefined1 *)(param_1 + 0x1eb6) = 3;
  *(undefined2 *)(param_1 + 0x1eb8) = 0x303;
  return;
}

// 011632F0  FUN_011632f0  size=172  [run]
void __fastcall FUN_011632f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  
  iVar1 = *(int *)(param_1 + 0x20e0);
  if (iVar1 != 0) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar3 + 0x30) + 8))(iVar1,0xe5b);
    uVar2 = *(undefined4 *)(param_1 + 0x20e4);
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar3 + 0x30) + 8))(uVar2,0xe5b);
    uVar2 = *(undefined4 *)(param_1 + 0x20e8);
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar3 + 0x30) + 8))(uVar2,0xe5b);
    uVar2 = *(undefined4 *)(param_1 + 0x20ec);
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar3 + 0x30) + 8))(uVar2,0xe5b);
    *(undefined4 *)(param_1 + 0x20e0) = 0;
    *(undefined4 *)(param_1 + 0x20e4) = 0;
    *(undefined4 *)(param_1 + 0x20e8) = 0;
    *(undefined4 *)(param_1 + 0x20ec) = 0;
  }
  return;
}

// 011633A0  FUN_011633a0  size=205  [run]
void __thiscall FUN_011633a0(int param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xb34 + *(int *)(param_1 + 0x19c) * 0x14);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_01162a80(param_1 + 0x1040,1,param_3,param_4,param_3,param_4,*(undefined4 *)(param_1 + 0x20e8),
               0);
  FUN_01162a80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x19c),param_3,param_4,param_3,param_4,
               *(undefined4 *)(param_1 + 0x20e0),0);
  if (*(char *)((int)param_2 + 0x11) != '\0') {
    FUN_01162a80(param_1 + 0x1510,1,param_3,param_4,param_3,param_4,
                 *(undefined4 *)(param_1 + 0x20ec),0);
    FUN_01162a80(param_1 + 0x669,*(undefined4 *)(param_1 + 0x19c),param_3,param_4,param_3,param_4,
                 *(undefined4 *)(param_1 + 0x20e4),0);
  }
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
  return;
}

// 01163470  FUN_01163470  size=147  [run]
void __thiscall FUN_01163470(int param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0xb34 + *(int *)(param_1 + 0x19c) * 0x14);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
  FUN_01162a80(param_1 + 0x1a0,*(undefined4 *)(param_1 + 0x19c),param_3,param_4,param_3,param_4,
               *(undefined4 *)(param_1 + 0x20e0),0);
  if (*(char *)((int)param_2 + 0x11) != '\0') {
    FUN_01162a80(param_1 + 0x669,*(undefined4 *)(param_1 + 0x19c),param_3,param_4,param_3,param_4,
                 *(undefined4 *)(param_1 + 0x20e4),0);
  }
  *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + 1;
  return;
}

// 01163510  FUN_01163510  size=427  [run]
int __thiscall FUN_01163510(int param_1,undefined8 *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  int local_18;
  int local_14;
  
  *(undefined1 *)(param_1 + 0x20d1) = 1;
  local_60 = *param_2;
  local_58 = param_2[1];
  local_50 = param_2[2];
  local_48 = param_2[3];
  local_40 = param_2[4];
  local_14 = param_1;
  local_38 = param_2[5];
  local_30 = 0;
  if ((param_3 != param_4) && (*(char *)((int)param_2 + 0x2d) == '\0')) {
    local_30 = 2;
    puVar2 = &local_60;
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x1034) * 0x40 + 0x19e0 + param_1);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *(undefined4 *)puVar2;
      puVar2 = (undefined8 *)((int)puVar2 + 4);
      puVar3 = puVar3 + 1;
    }
    FUN_01162a80(param_1 + 0x1040,*(undefined4 *)(param_1 + 0x1034),param_4,param_3,param_4,param_3,
                 *(undefined4 *)(param_1 + 0x20e8),0);
    iVar1 = local_14;
    if (local_38._4_1_ != '\0') {
      FUN_01162a80(local_14 + 0x1510,*(undefined4 *)(local_14 + 0x1034),param_4,param_3,param_4,
                   param_3,*(undefined4 *)(local_14 + 0x20ec),0);
    }
    *(int *)(iVar1 + 0x1034) = *(int *)(iVar1 + 0x1034) + 1;
    local_30 = 1;
  }
  local_18 = *(int *)(local_14 + 0x1034);
  if (*(char *)((int)param_2 + 0x2e) == '\0') {
    *(int *)(local_14 + 0x1034) = local_18 + 1;
    puVar2 = &local_60;
    puVar3 = (undefined4 *)(local_18 * 0x40 + 0x19e0 + local_14);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *(undefined4 *)puVar2;
      puVar2 = (undefined8 *)((int)puVar2 + 4);
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_18 = local_18 + -1;
  }
  FUN_01162a80(local_14 + 0x1040,local_18,param_3,param_4,param_3,param_4,
               *(undefined4 *)(local_14 + 0x20e8),0);
  iVar1 = local_18;
  if (local_38._4_1_ == '\0') {
    return local_18;
  }
  FUN_01162a80(local_14 + 0x1510,local_18,param_3,param_4,param_3,param_4,
               *(undefined4 *)(local_14 + 0x20ec),0);
  return iVar1;
}

// 01163A60  FUN_01163a60  size=190  [run]
void __thiscall FUN_01163a60(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20d8)) {
    do {
      if ((*(int *)(*(int *)(param_1 + 0x20d4) + iVar4 * 8) == param_2) &&
         (*(int *)(*(int *)(param_1 + 0x20d4) + 4 + iVar4 * 8) == param_3)) {
        *(int *)(param_1 + 0x20d8) = *(int *)(param_1 + 0x20d8) + -1;
        puVar3 = (undefined4 *)(iVar4 * 8 + *(int *)(param_1 + 0x20d4));
        iVar2 = (*(int *)(param_1 + 0x20d8) - iVar4) * 8;
        if (0 < iVar2) {
          iVar2 = (iVar2 - 1U >> 2) + 1;
          do {
            *puVar3 = puVar3[2];
            puVar3 = puVar3 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        iVar4 = iVar4 + -1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x20d8));
  }
  FUN_01162c60(param_2,param_3,0);
  if (*(uint *)(param_1 + 0x20d8) == (*(uint *)(param_1 + 0x20dc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x20d4),8);
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x20d4) + *(int *)(param_1 + 0x20d8) * 8);
  *(int *)(param_1 + 0x20d8) = *(int *)(param_1 + 0x20d8) + 1;
  piVar1[1] = param_3;
  *piVar1 = param_2;
  return;
}

// 01163B30  hkpCollisionDispatcher::hkpCollisionDispatcher  size=263  [run]
undefined4 * __thiscall
hkpCollisionDispatcher::hkpCollisionDispatcher(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int local_8;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = param_2;
  *param_1 = vftable;
  iVar3 = 0x3f;
  iVar1 = (int)param_1 + 0xb45;
  do {
    *(undefined2 *)(iVar1 + -1) = 0;
    iVar1 = iVar1 + 0x14;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar1 = 0x11;
  iVar3 = (int)param_1 + 0x1a0d;
  do {
    *(undefined2 *)(iVar3 + -1) = 0;
    *(undefined1 *)(iVar3 + 1) = 0;
    *(undefined4 *)(iVar3 + -0x15) = 0;
    *(undefined4 *)(iVar3 + -0x11) = 0;
    *(undefined4 *)(iVar3 + -0xd) = 0;
    *(undefined4 *)(iVar3 + -9) = 0;
    iVar3 = iVar3 + 0x40;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x835] = 0;
  param_1[0x836] = 0;
  param_1[0x837] = 0x80000000;
  param_1[0x838] = 0;
  param_1[0x839] = 0;
  param_1[0x83a] = 0;
  param_1[0x83b] = 0;
  *(undefined1 *)(param_1 + 0x834) = 0;
  *(undefined1 *)((int)param_1 + 0x20d3) = 1;
  param_1[0x40d] = 0;
  *(undefined1 *)((int)param_1 + 0x20d2) = 0;
  piVar5 = param_1 + 3;
  local_8 = 8;
  do {
    param_2 = 8;
    do {
      *piVar5 = param_3;
      if (param_3 != 0) {
        FUN_01006000();
      }
      piVar5 = piVar5 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  uVar2 = 1;
  puVar4 = param_1 + 0x44;
  iVar3 = 0x23;
  do {
    *puVar4 = uVar2;
    puVar4 = puVar4 + 1;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_01162830();
  *(undefined1 *)((int)param_1 + 0x20d1) = 0;
  return param_1;
}

// 01163C40  hkBaseObject::hkBaseObject_206  size=141  [run]
void __fastcall hkBaseObject::hkBaseObject_206(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int local_8;
  
  *param_1 = hkpCollisionDispatcher::vftable;
  FUN_011632f0();
  piVar1 = param_1 + 3;
  local_8 = 8;
  do {
    iVar2 = 8;
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  param_1[0x836] = 0;
  if (-1 < (int)param_1[0x837]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x835],param_1[0x837] * 8);
  }
  param_1[0x835] = 0;
  param_1[0x837] = 0x80000000;
  *param_1 = vftable;
  return;
}


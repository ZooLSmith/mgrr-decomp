// lib/havok/unit_011113C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 011113C0..0113C3D0, 1158 functions

#include "mgrr.h"
#include "GroupFilterImplement.h"
#include "hkBaseObject.h"
#include "hkContainerResourceMap.h"
#include "hkDebugDisplay.h"
#include "hkMemoryResourceContainer.h"
#include "hkMemoryResourceHandle.h"
#include "hkObjectResource.h"
#include "hkParserBuffer.h"
#include "hkPlatformObjectWriter.h"
#include "hkResourceBase.h"
#include "hkResourceContainer.h"
#include "hkResourceHandle.h"
#include "hkResourceMap.h"
#include "hkXmlLexAnalyzer.h"
#include "hkXmlStreamParser.h"
#include "hkcdShape.h"
#include "hkpAllCdBodyPairCollector.h"
#include "hkpAllCdPointCollector.h"
#include "hkpAllRayHitCollector.h"
#include "hkpBoxShape.h"
#include "hkpCapsuleShape.h"
#include "hkpCollidableCollidableFilter.h"
#include "hkpCollisionFilter.h"
#include "hkpCompressedMeshShape.h"
#include "hkpConvexShape.h"
#include "hkpConvexTransformShapeBase.h"
#include "hkpConvexTranslateShape.h"
#include "hkpConvexVerticesShape.h"
#include "hkpCylinderShape.h"
#include "hkpExtendedMeshShape.h"
#include "hkpFirstCdBodyPairCollector.h"
#include "hkpGroupFilter.h"
#include "hkpListShape.h"
#include "hkpRayCollidableFilter.h"
#include "hkpRayShapeCollectionFilter.h"
#include "hkpShape.h"
#include "hkpShapeBase.h"
#include "hkpShapeCollectionFilter.h"
#include "hkpShapeContainer.h"
#include "hkpSingleShapeContainer.h"
#include "hkpSphereRepShape.h"
#include "hkpSphereShape.h"
#include "hkpTriangleShape.h"

// 011113C0  hkContainerResourceMap::hkContainerResourceMap  size=261  [run]
undefined4 * __fastcall hkContainerResourceMap::hkContainerResourceMap(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *local_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_98 [128];
  uint local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_18 = local_18 & 0xffffff00;
  *param_1 = vftable;
  local_14 = param_1;
  FUN_01025830(local_18);
  iVar3 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  FUN_01110af0(&local_10);
  if (0 < local_c) {
    do {
      piVar1 = *(int **)(local_10 + iVar3 * 4);
      local_a4 = local_98;
      local_9c = 0x80000080;
      local_a0 = 1;
      local_98[0] = 0;
      uVar2 = (**(code **)(*piVar1 + 0x10))(&local_a4);
      FUN_01025470(uVar2,piVar1);
      local_a0 = 0;
      if (-1 < (int)local_9c) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_a4,local_9c & 0x3fffffff);
      }
      iVar3 = iVar3 + 1;
      param_1 = local_14;
    } while (iVar3 < local_c);
  }
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
  }
  return param_1;
}

// 011114D0  hkMemoryResourceHandle::hkMemoryResourceHandle_2  size=58  [run]
undefined4 * __fastcall hkMemoryResourceHandle::hkMemoryResourceHandle_2(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = 0;
  FUN_010065a0();
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  return param_1;
}

// 01111510  hkMemoryResourceHandle::hkMemoryResourceHandle  size=31  [run]
undefined4 * __thiscall
hkMemoryResourceHandle::hkMemoryResourceHandle(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  return param_1;
}

// 01111530  hkBaseObject::hkBaseObject_109  size=131  [run]
void __fastcall hkBaseObject::hkBaseObject_109(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = hkMemoryResourceHandle::vftable;
  iVar1 = param_1[5];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    FUN_01006770();
  }
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] * 8);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  FUN_01006770();
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 011115C0  FUN_011115c0  size=163  [run]
void __thiscall FUN_011115c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84 [128];
  
  iVar1 = (**(code **)(*param_1 + 0x24))();
  if (iVar1 != 0) {
    FUN_011115c0(param_2);
  }
  local_90 = local_84;
  local_88 = 0x80000080;
  local_8c = 1;
  local_84[0] = 0;
  uVar2 = (**(code **)(*param_1 + 0x10))(&local_90);
  FUN_010267c0(&DAT_01701298);
  FUN_010267c0(uVar2);
  local_8c = 0;
  if (-1 < (int)local_88) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_90,local_88 & 0x3fffffff);
  }
  return;
}

// 01111670  hkMemoryResourceContainer::vf14  size=167  [run]
int * __thiscall
hkMemoryResourceContainer::vf14
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  int iVar3;
  int *piVar4;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x1c);
  *(undefined2 *)(iVar3 + 4) = 0x1c;
  piVar4 = (int *)hkMemoryResourceHandle::hkMemoryResourceHandle_2();
  (**(code **)(*piVar4 + 0x14))(param_2);
  (**(code **)(*piVar4 + 0x20))(param_3,param_4);
  FUN_01006000();
  if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x10),4);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_01006000();
    *puVar1 = piVar4;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  FUN_010060a0();
  FUN_010060a0();
  return piVar4;
}

// 01111720  hkMemoryResourceContainer::~hkMemoryResourceContainer  size=68  [run]
undefined4 * __thiscall
hkMemoryResourceContainer::~hkMemoryResourceContainer(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_010066e0(param_2);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  return param_1;
}

// 01111770  hkMemoryResourceContainer::hkMemoryResourceContainer  size=59  [run]
undefined4 * __thiscall
hkMemoryResourceContainer::hkMemoryResourceContainer(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = vftable;
  FUN_010065b0(param_2);
  if ((param_2 != 0) && (iVar2 = 0, 0 < (int)param_1[8])) {
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(undefined4 **)(*(int *)(param_1[7] + iVar1) + 0xc) = param_1;
    } while (iVar2 < (int)param_1[8]);
  }
  return param_1;
}

// 011117B0  hkBaseObject::hkBaseObject_113  size=211  [run]
void __fastcall hkBaseObject::hkBaseObject_113(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = hkMemoryResourceContainer::vftable;
  iVar2 = param_1[8] + -1;
  iVar1 = param_1[7];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[8] = 0;
  if (-1 < (int)param_1[9]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[7],param_1[9] * 4);
  }
  param_1[7] = 0;
  param_1[9] = 0x80000000;
  iVar2 = param_1[5] + -1;
  iVar1 = param_1[4];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] * 4);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  FUN_01006770();
  *param_1 = vftable;
  return;
}

// 01111890  hkMemoryResourceContainer::vf28  size=183  [run]
int __thiscall hkMemoryResourceContainer::vf28(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  LPVOID pvVar3;
  
  iVar2 = (**(code **)(*param_1 + 0x34))(param_2,0);
  if (iVar2 == 0) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x28);
    *(undefined2 *)(iVar2 + 4) = 0x28;
    iVar2 = ~hkMemoryResourceContainer(param_2);
    if (iVar2 != 0) {
      FUN_01006000();
    }
    if (param_1[8] == (param_1[9] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 7,4);
    }
    piVar1 = (int *)(param_1[7] + param_1[8] * 4);
    if (piVar1 != (int *)0x0) {
      if (iVar2 != 0) {
        FUN_01006000();
      }
      *piVar1 = iVar2;
    }
    param_1[8] = param_1[8] + 1;
    if (iVar2 != 0) {
      FUN_010060a0();
    }
    *(int **)(iVar2 + 0xc) = param_1;
    FUN_010060a0();
  }
  return iVar2;
}

// 01111960  FUN_01111960  size=27  [run]
uint __fastcall FUN_01111960(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 01111980  FUN_01111980  size=9  [run]
void FUN_01111980(void)

{
  FUN_01025470();
  return;
}

// 01111990  FUN_01111990  size=9  [run]
void FUN_01111990(void)

{
  FUN_01025be0();
  return;
}

// 01111A00  FUN_01111a00  size=15  [run]
int __thiscall FUN_01111a00(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01111A50  FUN_01111a50  size=15  [run]
int __thiscall FUN_01111a50(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01111AA0  FUN_01111aa0  size=15  [run]
int __thiscall FUN_01111aa0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01111AB0  FUN_01111ab0  size=15  [run]
int __thiscall FUN_01111ab0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01111B00  FUN_01111b00  size=15  [run]
int __thiscall FUN_01111b00(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 01111B50  FUN_01111b50  size=15  [run]
int __thiscall FUN_01111b50(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01111B70  FUN_01111b70  size=31  [run]
int * __thiscall FUN_01111b70(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 01111B90  FUN_01111b90  size=22  [run]
void __fastcall FUN_01111b90(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01111BC0  FUN_01111bc0  size=31  [run]
int * __thiscall FUN_01111bc0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 01111BE0  FUN_01111be0  size=22  [run]
void __fastcall FUN_01111be0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01111C10  FUN_01111c10  size=45  [run]
void FUN_01111c10(int param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        FUN_010065a0();
        FUN_010065a0();
      }
      param_1 = param_1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01111CC0  FUN_01111cc0  size=34  [run]
void FUN_01111cc0(int param_1,int param_2,undefined4 *param_3)

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

// 01111D00  FUN_01111d00  size=34  [run]
void FUN_01111d00(int param_1,int param_2,undefined4 *param_3)

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

// 01111D30  FUN_01111d30  size=28  [run]
void __thiscall FUN_01111d30(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01111D50  FUN_01111d50  size=26  [run]
void __thiscall FUN_01111d50(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01111D70  FUN_01111d70  size=33  [run]
int * __thiscall FUN_01111d70(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = *param_2;
  return param_1;
}

// 01111DA0  FUN_01111da0  size=11  [run]
int FUN_01111da0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01111DB0  FUN_01111db0  size=26  [run]
void __thiscall FUN_01111db0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01111DD0  FUN_01111dd0  size=33  [run]
int * __thiscall FUN_01111dd0(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = *param_2;
  return param_1;
}

// 01111E00  FUN_01111e00  size=11  [run]
int FUN_01111e00(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01111E10  FUN_01111e10  size=25  [run]
void __thiscall FUN_01111e10(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 01111E30  FUN_01111e30  size=26  [run]
void __thiscall FUN_01111e30(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01111EB0  hkResourceHandle::vf0C  size=3  [run]
undefined4 hkResourceHandle::vf0C(void)

{
  return 0;
}

// 01111F10  hkResourceContainer::vf0C  size=3  [run]
undefined4 hkResourceContainer::vf0C(void)

{
  return 0;
}

// 01111F40  FUN_01111f40  size=39  [run]
void FUN_01111f40(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 01111F70  hkResourceMap::vf04  size=50  [run]
undefined4 * __thiscall hkResourceMap::vf04(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 01111FB0  FUN_01111fb0  size=37  [run]
void FUN_01111fb0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01111FE0  FUN_01111fe0  size=37  [run]
void FUN_01111fe0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 011120E0  FUN_011120e0  size=80  [run]
int __thiscall FUN_011120e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  if (*param_1 + param_1[1] * 8 != 0) {
    FUN_010065a0();
    FUN_010065a0();
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01112140  FUN_01112140  size=13  [run]
void __thiscall FUN_01112140(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 01112150  FUN_01112150  size=52  [run]
undefined4 __thiscall FUN_01112150(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 01112190  FUN_01112190  size=23  [run]
int __thiscall FUN_01112190(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = param_2 + iVar1;
  return iVar1 * 0x10 + *param_1;
}

// 011121B0  FUN_011121b0  size=57  [run]
void __thiscall FUN_011121b0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 011121F0  FUN_011121f0  size=57  [run]
void __thiscall FUN_011121f0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01112250  FUN_01112250  size=51  [run]
void FUN_01112250(int *param_1,int param_2,int *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (int *)0x0) {
        if (*param_3 != 0) {
          FUN_01006000();
        }
        *param_1 = *param_3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01112290  FUN_01112290  size=51  [run]
void FUN_01112290(int *param_1,int param_2,int *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (int *)0x0) {
        if (*param_3 != 0) {
          FUN_01006000();
        }
        *param_1 = *param_3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 011122D0  FUN_011122d0  size=60  [run]
void __thiscall FUN_011122d0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01112310  FUN_01112310  size=39  [run]
void FUN_01112310(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 01112340  FUN_01112340  size=39  [run]
void FUN_01112340(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 01112380  FUN_01112380  size=38  [run]
void FUN_01112380(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 011123B0  hkResourceBase::vf00  size=53  [run]
undefined4 * __thiscall hkResourceBase::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 011123F0  FUN_011123f0  size=38  [run]
void FUN_011123f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01112420  hkResourceHandle::vf00  size=53  [run]
undefined4 * __thiscall hkResourceHandle::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01112460  FUN_01112460  size=38  [run]
void FUN_01112460(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01112490  hkResourceContainer::vf00  size=53  [run]
undefined4 * __thiscall hkResourceContainer::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 011124D0  FUN_011124d0  size=75  [run]
int __fastcall FUN_011124d0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  if (*param_1 + param_1[1] * 8 != 0) {
    FUN_010065a0();
    FUN_010065a0();
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01112520  FUN_01112520  size=53  [run]
undefined4 __thiscall FUN_01112520(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 01112560  FUN_01112560  size=58  [run]
void __thiscall FUN_01112560(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 011125A0  FUN_011125a0  size=58  [run]
void __thiscall FUN_011125a0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 011125E0  FUN_011125e0  size=52  [run]
int __thiscall FUN_011125e0(int *param_1,int *param_2,int param_3,int param_4)

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

// 01112620  FUN_01112620  size=76  [run]
void __thiscall FUN_01112620(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  piVar1 = (int *)(*param_1 + param_1[1] * 4);
  if (piVar1 != (int *)0x0) {
    if (*param_3 != 0) {
      FUN_01006000();
    }
    *piVar1 = *param_3;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01112670  FUN_01112670  size=52  [run]
int __thiscall FUN_01112670(int *param_1,int *param_2,int param_3,int param_4)

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

// 011126B0  FUN_011126b0  size=76  [run]
void __thiscall FUN_011126b0(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  piVar1 = (int *)(*param_1 + param_1[1] * 4);
  if (piVar1 != (int *)0x0) {
    if (*param_3 != 0) {
      FUN_01006000();
    }
    *piVar1 = *param_3;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01112700  FUN_01112700  size=60  [run]
void __fastcall FUN_01112700(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01112740  FUN_01112740  size=42  [run]
void FUN_01112740(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_01006770();
    FUN_01006770();
  }
  return;
}

// 01112770  FUN_01112770  size=61  [run]
void __thiscall FUN_01112770(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011127B0  FUN_011127b0  size=61  [run]
int * __thiscall FUN_011127b0(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 011127F0  FUN_011127f0  size=61  [run]
int * __thiscall FUN_011127f0(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 01112830  FUN_01112830  size=77  [run]
void __thiscall FUN_01112830(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  piVar1 = (int *)(*param_1 + param_1[1] * 4);
  if (piVar1 != (int *)0x0) {
    if (*param_2 != 0) {
      FUN_01006000();
    }
    *piVar1 = *param_2;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01112880  FUN_01112880  size=77  [run]
void __thiscall FUN_01112880(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  piVar1 = (int *)(*param_1 + param_1[1] * 4);
  if (piVar1 != (int *)0x0) {
    if (*param_2 != 0) {
      FUN_01006000();
    }
    *piVar1 = *param_2;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 011128D0  FUN_011128d0  size=48  [run]
undefined4 __fastcall FUN_011128d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    uVar2 = FUN_01006770();
  }
  param_1[1] = 0;
  return uVar2;
}

// 01112900  FUN_01112900  size=82  [run]
void __thiscall FUN_01112900(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_01006770();
  FUN_01006770();
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    puVar1 = (undefined4 *)(*param_1 + param_2 * 8);
    iVar2 = (*param_1 + param_1[1] * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 01112960  FUN_01112960  size=60  [run]
void __fastcall FUN_01112960(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011129A0  FUN_011129a0  size=61  [run]
void __fastcall FUN_011129a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011129E0  FUN_011129e0  size=100  [run]
void __thiscall FUN_011129e0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01112A50  FUN_01112a50  size=43  [run]
void FUN_01112a50(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 01112A80  FUN_01112a80  size=43  [run]
void FUN_01112a80(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 01112B30  FUN_01112b30  size=85  [run]
void __thiscall FUN_01112b30(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *param_1;
  iVar1 = param_2 * 4;
  if (*(int *)(iVar2 + iVar1) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(iVar2 + iVar1) = 0;
  param_1[1] = param_1[1] + -1;
  iVar2 = (param_1[1] - param_2) * 4;
  puVar3 = (undefined4 *)(*param_1 + iVar1);
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 2) + 1;
    do {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 01112B90  FUN_01112b90  size=62  [run]
void __thiscall FUN_01112b90(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_2 * 4;
  if (*(int *)(iVar1 + iVar2) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(iVar1 + iVar2) = 0;
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + iVar2) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 01112BD0  FUN_01112bd0  size=85  [run]
void __thiscall FUN_01112bd0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *param_1;
  iVar1 = param_2 * 4;
  if (*(int *)(iVar2 + iVar1) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(iVar2 + iVar1) = 0;
  param_1[1] = param_1[1] + -1;
  iVar2 = (param_1[1] - param_2) * 4;
  puVar3 = (undefined4 *)(*param_1 + iVar1);
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 2) + 1;
    do {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 01112C30  FUN_01112c30  size=61  [run]
void __fastcall FUN_01112c30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01112C70  FUN_01112c70  size=100  [run]
void __fastcall FUN_01112c70(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01112CE0  FUN_01112ce0  size=97  [run]
void __thiscall FUN_01112ce0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01112D50  FUN_01112d50  size=97  [run]
void __thiscall FUN_01112d50(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01112DC0  hkResourceMap::hkResourceMap  size=19  [run]
void __fastcall hkResourceMap::hkResourceMap(undefined4 *param_1)

{
  FUN_01025870();
  *param_1 = vftable;
  return;
}

// 01112DE0  FUN_01112de0  size=39  [run]
void FUN_01112de0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x14);
  }
  return;
}

// 01112E10  hkContainerResourceMap::vf04  size=58  [run]
undefined4 * __thiscall hkContainerResourceMap::vf04(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01025870();
  *param_1 = hkResourceMap::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x14);
  }
  return param_1;
}

// 01112E50  FUN_01112e50  size=100  [run]
void __fastcall FUN_01112e50(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01112EC0  FUN_01112ec0  size=100  [run]
void __fastcall FUN_01112ec0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01112F30  FUN_01112f30  size=100  [run]
void __fastcall FUN_01112f30(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01112FA0  FUN_01112fa0  size=38  [run]
void FUN_01112fa0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01112FD0  FUN_01112fd0  size=100  [run]
void __fastcall FUN_01112fd0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01113040  FUN_01113040  size=100  [run]
void __fastcall FUN_01113040(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 011130B0  hkMemoryResourceHandle::vf00  size=52  [run]
int __thiscall hkMemoryResourceHandle::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_109();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 011130F0  hkMemoryResourceContainer::vf24  size=4  [run]
undefined4 __fastcall hkMemoryResourceContainer::vf24(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 01113100  FUN_01113100  size=38  [run]
void FUN_01113100(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01113130  hkMemoryResourceContainer::vf1C  size=4  [run]
undefined4 __fastcall hkMemoryResourceContainer::vf1C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}

// 01113140  hkMemoryResourceContainer::vf00  size=52  [run]
int __thiscall hkMemoryResourceContainer::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_113();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01113180  FUN_01113180  size=290  [run]
void FUN_01113180(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  puVar2 = (undefined4 *)FUN_010e5220();
  switch(*puVar2) {
  case 2:
  case 4:
    uVar3 = (**(code **)(*(int *)*param_3 + 0x30))(param_3[1]);
    (**(code **)(*param_1 + 0x44))(param_2,uVar3);
    return;
  case 3:
    fVar5 = (float10)(**(code **)(*(int *)*param_3 + 0x3c))(param_3[1]);
    (**(code **)(*param_1 + 0x50))(param_2,(float)fVar5);
    return;
  case 5:
    uVar3 = (**(code **)(*(int *)*param_3 + 0x2c))(param_3[1]);
    (**(code **)(*param_1 + 0x54))(param_2,uVar3);
    break;
  case 6:
  case 7:
    puVar2 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x34))(param_3[1]);
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    (**(code **)(*param_1 + 0x5c))(param_2,puVar2);
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
      piVar1 = puVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
        return;
      }
    }
    break;
  case 8:
    break;
  case 9:
    if (*(int *)puVar2[1] == 3) {
      uVar3 = FUN_010e0cc0();
      uVar4 = (**(code **)(*(int *)*param_3 + 0x38))(param_3[1],uVar3);
      (**(code **)(*param_1 + 0x48))(param_2,uVar4,uVar3);
      return;
    }
    break;
  default:
    goto switchD_0111319e_default;
  }
switchD_0111319e_default:
  return;
}

// 011132D0  FUN_011132d0  size=409  [run]
void __thiscall FUN_011132d0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  piVar1 = (int *)(**(code **)(*param_1 + 4))();
  if ((*piVar1 == 9) && (*(int *)piVar1[1] != 3)) {
switchD_01113309_caseD_8:
    puVar2 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x28))(param_3[1]);
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    (**(code **)(*param_1 + 0x68))(param_2,puVar2);
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
      piVar1 = puVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
        return;
      }
    }
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))();
    switch(*puVar2) {
    case 2:
    case 4:
      uVar3 = (**(code **)(*(int *)*param_3 + 0x30))(param_3[1]);
      (**(code **)(*param_1 + 0x50))(param_2,uVar3);
      return;
    case 3:
      fVar4 = (float10)(**(code **)(*(int *)*param_3 + 0x3c))(param_3[1]);
      (**(code **)(*param_1 + 0x40))(param_2,(float)fVar4);
      return;
    case 5:
      uVar3 = (**(code **)(*(int *)*param_3 + 0x2c))(param_3[1]);
      (**(code **)(*param_1 + 0x38))(param_2,uVar3);
      return;
    case 6:
    case 7:
      puVar2 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x34))(param_3[1]);
      if (puVar2 != (undefined4 *)0x0) {
        *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
        puVar2[2] = puVar2[2] + 1;
      }
      (**(code **)(*param_1 + 0x60))(param_2,puVar2);
      if (puVar2 != (undefined4 *)0x0) {
        *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
        piVar1 = puVar2 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
          return;
        }
      }
      break;
    case 8:
      goto switchD_01113309_caseD_8;
    case 9:
      if (*(int *)piVar1[1] == 3) {
        uVar3 = FUN_010e0cc0();
        uVar3 = (**(code **)(*(int *)*param_3 + 0x38))(param_3[1],uVar3);
        (**(code **)(*param_1 + 0x30))(param_2,uVar3);
      }
    }
  }
  return;
}

// 011134A0  hkBaseObject::hkBaseObject_86  size=37  [run]
void __fastcall hkBaseObject::hkBaseObject_86(undefined4 *param_1)

{
  *param_1 = hkPlatformObjectWriter::vftable;
  FUN_010060a0();
  if (param_1[3] != 0) {
    FUN_010060a0();
  }
  *param_1 = vftable;
  return;
}

// 011134D0  hkPlatformObjectWriter::vf10  size=36  [run]
bool hkPlatformObjectWriter::vf10(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))(param_2,param_3);
  return iVar1 != param_3;
}

// 01113500  FUN_01113500  size=7  [run]
int __fastcall FUN_01113500(int param_1)

{
  return *(int *)(param_1 + 8) + 0xc;
}

// 01113510  FUN_01113510  size=140  [run]
undefined4 __thiscall FUN_01113510(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_2;
  iVar1 = FUN_010101b0(param_2,&param_2);
  if (iVar1 == 0) {
    return param_2;
  }
  uVar2 = FUN_0111ae80(uVar2,&DAT_01f9050c,param_1 + 8,0,0,0);
  if (*(uint *)(param_1 + 0x24) == (*(uint *)(param_1 + 0x28) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x20),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24) * 4) = uVar2;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  FUN_010e71e0(uVar2,param_1 + 0x14,1);
  return uVar2;
}

// 011135A0  hkPlatformObjectWriter::vf0C  size=309  [run]
bool __thiscall
hkPlatformObjectWriter::vf0C
          (int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c [4];
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    local_8 = param_4;
  }
  else {
    uVar1 = FUN_01113500();
    local_8 = FUN_01113510(param_4,uVar1);
  }
  hkOffsetOnlyStreamWriter::hkOffsetOnlyStreamWriter();
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = FUN_010093a0("hkClass");
    iVar2 = FUN_01015b90(uVar1);
    if (iVar2 == 0) {
      uVar1 = FUN_01113500();
      local_8 = FUN_01113510(&DAT_01f9050c,uVar1);
      uVar1 = FUN_01113500();
      local_c = FUN_01113510(param_3,uVar1);
      uVar4 = 0;
      uVar1 = (**(code **)(*param_2 + 0x20))(0);
      hkOffsetOnlyStreamWriter::vf1C(uVar1,uVar4);
      local_48 = 0x80000000;
      local_3c = 0x80000000;
      local_30 = 0x80000000;
      local_24 = 0x80000000;
      local_50 = 0;
      local_4c = 0;
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_34 = 0;
      local_2c = 0;
      local_28 = 0;
      local_20 = 0;
      (**(code **)(**(int **)(param_1 + 8) + 0xc))(local_c,param_4,param_2,local_8,&local_50);
      param_2 = local_1c;
      FUN_010f79a0();
    }
  }
  (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_3,param_4,param_2,local_8,param_5);
  pcVar3 = (char *)(**(code **)(*param_2 + 0xc))((int)&param_4 + 3);
  return *pcVar3 == '\0';
}

// 011136E0  hkPlatformObjectWriter::Cache::Cache  size=54  [run]
void __fastcall hkPlatformObjectWriter::Cache::Cache(undefined4 *param_1)

{
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x80000000;
  return;
}

// 01113720  hkBaseObject::hkBaseObject_88  size=146  [run]
void __fastcall hkBaseObject::hkBaseObject_88(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = hkPlatformObjectWriter::Cache::vftable;
  if (0 < (int)param_1[9]) {
    do {
      FUN_0111ae00(*(undefined4 *)(param_1[8] + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[9]);
  }
  param_1[9] = 0;
  if (-1 < (int)param_1[10]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[8],param_1[10] * 4);
  }
  param_1[8] = 0;
  param_1[10] = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = vftable;
  return;
}

// 011137C0  hkPlatformObjectWriter::hkPlatformObjectWriter  size=238  [run]
undefined4 * __thiscall
hkPlatformObjectWriter::hkPlatformObjectWriter
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *local_8;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  local_8 = param_1;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x18);
  *(undefined2 *)(iVar2 + 4) = 0x18;
  FUN_010e6cc0(&DAT_01b1dc08);
  uVar3 = hkObjectCopier::hkObjectCopier(&local_8,param_2,param_4);
  param_1[2] = uVar3;
  pcVar4 = (char *)FUN_01113500();
  if ((((*pcVar4 == (char)DAT_01b1dc08) && (pcVar4[1] == (char)((uint)DAT_01b1dc08 >> 8))) &&
      (pcVar4[2] == DAT_01b1dc08._2_1_)) && (pcVar4[3] == DAT_01b1dc08._3_1_)) {
    param_1[3] = 0;
    return param_1;
  }
  if (param_3 != 0) {
    FUN_01006000();
    param_1[3] = param_3;
    return param_1;
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x2c);
  *(undefined2 *)(iVar2 + 4) = 0x2c;
  uVar3 = Cache::Cache();
  param_1[3] = uVar3;
  return param_1;
}

// 011138B0  FUN_011138b0  size=43  [run]
undefined4 FUN_011138b0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_010101b0(param_1,&param_1);
  if (iVar1 == 0) {
    *param_2 = param_1;
    return 0;
  }
  return 1;
}

// 011138E0  FUN_011138e0  size=37  [run]
void FUN_011138e0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01113910  FUN_01113910  size=37  [run]
void FUN_01113910(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01113940  FUN_01113940  size=38  [run]
void FUN_01113940(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01113990  hkPlatformObjectWriter::vf00  size=52  [run]
int __thiscall hkPlatformObjectWriter::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_86();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 011139F0  FUN_011139f0  size=38  [run]
void FUN_011139f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01113A20  hkPlatformObjectWriter::Cache::vf00  size=52  [run]
int __thiscall hkPlatformObjectWriter::Cache::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_88();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01113A60  FUN_01113a60  size=8  [run]
undefined4 FUN_01113a60(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01113A70  FUN_01113a70  size=8  [run]
undefined4 FUN_01113a70(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01113AE0  FUN_01113ae0  size=22  [run]
void __thiscall FUN_01113ae0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = (*(uint *)(param_1 + 4) & 0x80000000) == 0;
  return;
}

// 01113B00  FUN_01113b00  size=18  [run]
bool FUN_01113b00(uint param_1)

{
  return (param_1 - 1 & param_1) == 0;
}

// 01113B20  FUN_01113b20  size=8  [run]
undefined4 FUN_01113b20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01113B30  FUN_01113b30  size=8  [run]
undefined4 FUN_01113b30(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01113B60  FUN_01113b60  size=359  [run]
void FUN_01113b60(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 *local_c;
  float local_8;
  
  puVar4 = param_3;
  puVar2 = (undefined4 *)(**(code **)(*(int *)*param_3 + 4))();
  switch(*puVar2) {
  case 2:
  case 4:
    uVar3 = (**(code **)(*(int *)*puVar4 + 0x4c))(puVar4[1]);
    (**(code **)(*param_1 + 0x50))(param_2,uVar3);
    return;
  case 3:
    fVar5 = (float10)(**(code **)(*(int *)*puVar4 + 0x3c))(puVar4[1]);
    local_8 = (float)fVar5;
    (**(code **)(*param_1 + 0x40))(param_2,local_8);
    return;
  case 5:
    uVar3 = (**(code **)(*(int *)*puVar4 + 0x34))(puVar4[1]);
    (**(code **)(*param_1 + 0x38))(param_2,uVar3);
    break;
  case 6:
  case 7:
    param_3 = (undefined4 *)(**(code **)(*(int *)*puVar4 + 0x5c))(puVar4[1]);
    if (param_3 != (undefined4 *)0x0) {
      *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
      param_3[2] = param_3[2] + 1;
    }
    puVar4 = (undefined4 *)FUN_01114d20(&local_c,&param_3);
    (**(code **)(*param_1 + 0x60))(param_2,*puVar4);
    if (local_c != (undefined4 *)0x0) {
      *(short *)((int)local_c + 6) = *(short *)((int)local_c + 6) + -1;
      piVar1 = local_c + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_c)(1);
      }
    }
    if (param_3 != (undefined4 *)0x0) {
      *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
      piVar1 = param_3 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_3)(1);
        return;
      }
    }
    break;
  case 9:
    if (*(int *)puVar2[1] == 3) {
      FUN_010e0cc0();
      uVar3 = (**(code **)(*(int *)*puVar4 + 0x2c))(puVar4[1]);
      FUN_010e0cc0();
      (**(code **)(*param_1 + 0x30))(param_2,uVar3);
      return;
    }
  }
  return;
}

// 01113D20  FUN_01113d20  size=18  [run]
int __thiscall FUN_01113d20(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x18;
}

// 01113D70  FUN_01113d70  size=32  [run]
void __thiscall FUN_01113d70(int *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_1 + 4 + param_3 * 0xc);
  *param_2 = *(undefined4 *)(*param_1 + param_3 * 0xc);
  param_2[1] = uVar1;
  return;
}

// 01113D90  FUN_01113d90  size=22  [run]
void __thiscall FUN_01113d90(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*param_1 + 8 + param_2 * 0xc) = param_3;
  return;
}

// 01113DB0  FUN_01113db0  size=41  [run]
void __thiscall FUN_01113db0(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 0xc);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 3;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 01113DE0  FUN_01113de0  size=21  [run]
void __thiscall FUN_01113de0(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 01113E00  FUN_01113e00  size=57  [run]
undefined4 __thiscall
FUN_01113e00(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_010e8da0(param_2,param_3);
  if (iVar1 <= param_1[2]) {
    *param_4 = *(undefined4 *)(*param_1 + 8 + iVar1 * 0xc);
    return 0;
  }
  return 1;
}

// 01113E50  FUN_01113e50  size=89  [run]
void __thiscall FUN_01113e50(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int local_8;
  
  uVar1 = param_1[2];
  if (-1 < (int)uVar1) {
    puVar2 = (uint *)*param_1;
    local_8 = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if (uVar3 != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while( true ) {
          uVar4 = uVar4 & uVar1;
          if ((puVar2[uVar4 * 3] == uVar3) && (puVar2[uVar4 * 3 + 1] == puVar5[1])) break;
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  *param_2 = 1;
  return;
}

// 01113EB0  FUN_01113eb0  size=31  [run]
void __thiscall FUN_01113eb0(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3 | 0x80000000;
  param_1[2] = param_4 + -1;
  return;
}

// 01113ED0  FUN_01113ed0  size=32  [run]
int FUN_01113ed0(int param_1)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 * 0xc;
}

// 01113EF0  FUN_01113ef0  size=61  [run]
void __thiscall FUN_01113ef0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  param_3 = param_3 / 0xc;
  *param_1 = param_2;
  param_1[1] = -0x80000000;
  param_1[2] = param_3 - 1;
  if (param_3 != 0) {
    iVar1 = 0;
    do {
      *(undefined4 *)(iVar1 + *param_1) = 0xffffffff;
      iVar1 = iVar1 + 0xc;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// 01113F40  FUN_01113f40  size=48  [run]
void __thiscall FUN_01113f40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}

// 01113F90  FUN_01113f90  size=1510  [run]
/* WARNING: Removing unreachable block (ram,0x01114349) */
/* WARNING: Removing unreachable block (ram,0x01114350) */
/* WARNING: Removing unreachable block (ram,0x01114357) */
/* WARNING: Removing unreachable block (ram,0x01114362) */

void FUN_01113f90(int *param_1,undefined4 *param_2,float param_3)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 *local_28;
  int local_24;
  undefined4 *local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  int *local_10;
  int *local_c [2];
  
  piVar6 = param_1;
  puVar4 = (undefined4 *)(**(code **)(*(int *)*param_1 + 4))();
  fVar2 = param_3;
  switch(*puVar4) {
  case 2:
  case 4:
    iVar9 = 0;
    if (0 < (int)param_3) {
      do {
        uVar5 = (**(code **)(*(int *)*param_2 + 0x4c))(iVar9);
        (**(code **)(*(int *)*piVar6 + 0x50))(iVar9,uVar5);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)fVar2);
      return;
    }
    break;
  case 3:
    iVar9 = 0;
    if (0 < (int)param_3) {
      do {
        fVar10 = (float10)(**(code **)(*(int *)*param_2 + 0x3c))(iVar9);
        param_3 = (float)fVar10;
        (**(code **)(*(int *)*piVar6 + 0x40))(iVar9,param_3);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)fVar2);
      return;
    }
    break;
  case 5:
    iVar9 = 0;
    if (0 < (int)param_3) {
      do {
        uVar5 = (**(code **)(*(int *)*param_2 + 0x34))(iVar9);
        (**(code **)(*(int *)*piVar6 + 0x38))(iVar9,uVar5);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)fVar2);
    }
    break;
  case 6:
    (**(code **)(*(int *)*piVar6 + 0x10))(param_3);
    piVar6 = (int *)(**(code **)(*(int *)*param_2 + 0x18))();
    iVar9 = (**(code **)(*piVar6 + 0x24))();
    local_34 = 0;
    local_30 = 0;
    local_2c = 0x80000000;
    if (iVar9 == 0) {
      local_34 = 0;
LAB_01114305:
      local_2c = -0x80000000;
    }
    else {
      local_14 = iVar9 << 4;
      local_34 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_14);
      local_2c = (int)(local_14 + (local_14 >> 0x1f & 0xfU)) >> 4;
      if (local_2c == 0) goto LAB_01114305;
    }
    if (0 < iVar9) {
      puVar4 = (undefined4 *)(local_34 + 8);
      iVar8 = iVar9;
      do {
        if (puVar4 != (undefined4 *)&DAT_00000008) {
          puVar4[-2] = 0;
          puVar4[-1] = 0;
          *puVar4 = 0;
          puVar4[1] = 0;
        }
        puVar4 = puVar4 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    local_30 = iVar9;
    (**(code **)(*piVar6 + 0x30))(&local_34);
    if (0 < iVar9) {
      local_14 = 0;
      local_1c = iVar9;
      do {
        puVar4 = (undefined4 *)(local_14 + local_34);
        iVar9 = *(int *)puVar4[2];
        if ((iVar9 == 8) || ((iVar9 == 9 && (*(int *)((int *)puVar4[2])[1] != 3)))) {
          local_10 = (int *)(**(code **)(*(int *)*param_1 + 0x28))(*puVar4);
          if (local_10 != (int *)0x0) {
            *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + 1;
            local_10[2] = local_10[2] + 1;
          }
          local_c[0] = (int *)(**(code **)(*(int *)*param_2 + 0x28))(*puVar4);
          if (local_c[0] != (int *)0x0) {
            *(short *)((int)local_c[0] + 6) = *(short *)((int)local_c[0] + 6) + 1;
            local_c[0][2] = local_c[0][2] + 1;
          }
          uVar5 = (**(code **)(*local_c[0] + 0x14))();
          (**(code **)(*local_10 + 0x10))(uVar5);
          uVar5 = (**(code **)(*local_c[0] + 0x14))();
          FUN_01113f90(&local_10,local_c,uVar5);
          if (local_c[0] != (int *)0x0) {
            *(short *)((int)local_c[0] + 6) = *(short *)((int)local_c[0] + 6) + -1;
            piVar6 = local_c[0] + 2;
            *piVar6 = *piVar6 + -1;
            if (*piVar6 == 0) {
              (**(code **)*local_c[0])(1);
            }
          }
          if (local_10 != (int *)0x0) {
            *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + -1;
            piVar6 = local_10 + 2;
            *piVar6 = *piVar6 + -1;
            if (*piVar6 == 0) {
              (**(code **)*local_10)(1);
            }
          }
        }
        else if (iVar9 != 1) {
          puVar7 = (undefined4 *)(**(code **)(*(int *)*param_1 + 0x28))(*puVar4);
          if (puVar7 != (undefined4 *)0x0) {
            *(short *)((int)puVar7 + 6) = *(short *)((int)puVar7 + 6) + 1;
            puVar7[2] = puVar7[2] + 1;
          }
          puVar4 = (undefined4 *)(**(code **)(*(int *)*param_2 + 0x28))(*puVar4);
          if (puVar4 != (undefined4 *)0x0) {
            *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + 1;
            puVar4[2] = puVar4[2] + 1;
          }
          iVar9 = 0;
          puVar3 = puVar4;
          if (0 < (int)param_3) {
            do {
              local_28 = puVar3;
              local_24 = iVar9;
              FUN_01113b60(puVar7,iVar9,&local_28);
              iVar9 = iVar9 + 1;
              puVar3 = local_28;
            } while (iVar9 < (int)param_3);
          }
          if (puVar4 != (undefined4 *)0x0) {
            *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1;
            piVar6 = puVar4 + 2;
            *piVar6 = *piVar6 + -1;
            if (*piVar6 == 0) {
              (**(code **)*puVar4)(1);
            }
          }
          if (puVar7 != (undefined4 *)0x0) {
            *(short *)((int)puVar7 + 6) = *(short *)((int)puVar7 + 6) + -1;
            piVar6 = puVar7 + 2;
            *piVar6 = *piVar6 + -1;
            if (*piVar6 == 0) {
              (**(code **)*puVar7)(1);
            }
          }
        }
        local_14 = local_14 + 0x10;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      local_1c = 0;
    }
    local_30 = 0;
    if (-1 < local_2c) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_34,local_2c << 4);
      return;
    }
    break;
  case 7:
    (**(code **)(*(int *)*piVar6 + 0x10))(param_3);
    iVar9 = 0;
    if (0 < (int)fVar2) {
      do {
        local_18 = (undefined4 *)(**(code **)(*(int *)*param_2 + 0x5c))(iVar9);
        if (local_18 != (undefined4 *)0x0) {
          *(short *)((int)local_18 + 6) = *(short *)((int)local_18 + 6) + 1;
          local_18[2] = local_18[2] + 1;
        }
        piVar1 = (int *)*piVar6;
        puVar4 = (undefined4 *)FUN_01114d20(&local_20,&local_18);
        (**(code **)(*piVar1 + 0x60))(iVar9,*puVar4);
        if (local_20 != (undefined4 *)0x0) {
          *(short *)((int)local_20 + 6) = *(short *)((int)local_20 + 6) + -1;
          piVar1 = local_20 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_20)(1);
          }
        }
        if (local_18 != (undefined4 *)0x0) {
          *(short *)((int)local_18 + 6) = *(short *)((int)local_18 + 6) + -1;
          piVar1 = local_18 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_18)(1);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)param_3);
      return;
    }
    break;
  case 8:
    (**(code **)(*(int *)*piVar6 + 0x10))(param_3);
    iVar9 = 0;
    if (0 < (int)fVar2) {
      do {
        local_c[0] = (int *)(**(code **)(*(int *)*piVar6 + 100))(iVar9);
        if (local_c[0] != (int *)0x0) {
          *(short *)((int)local_c[0] + 6) = *(short *)((int)local_c[0] + 6) + 1;
          local_c[0][2] = local_c[0][2] + 1;
        }
        param_1 = (int *)(**(code **)(*(int *)*param_2 + 100))(iVar9);
        if (param_1 != (int *)0x0) {
          *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
          param_1[2] = param_1[2] + 1;
        }
        uVar5 = (**(code **)(*param_1 + 0x14))();
        (**(code **)(*local_c[0] + 0x10))(uVar5);
        uVar5 = (**(code **)(*param_1 + 0x14))();
        FUN_01113f90(local_c,&param_1,uVar5);
        if (param_1 != (int *)0x0) {
          *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1;
          piVar1 = param_1 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*param_1)(1);
          }
        }
        if (local_c[0] != (int *)0x0) {
          *(short *)((int)local_c[0] + 6) = *(short *)((int)local_c[0] + 6) + -1;
          piVar1 = local_c[0] + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_c[0])(1);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)param_3);
      return;
    }
    break;
  case 9:
    local_14 = FUN_010e0cc0();
    fVar2 = param_3;
    if (*(int *)puVar4[1] == 3) {
      iVar9 = 0;
      if (0 < (int)param_3) {
        do {
          uVar5 = (**(code **)(*(int *)*param_2 + 0x2c))(iVar9);
          (**(code **)(*(int *)*piVar6 + 0x30))(iVar9,uVar5);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)fVar2);
        return;
      }
    }
    else {
      (**(code **)(*(int *)*piVar6 + 0x10))(param_3);
      iVar9 = 0;
      if (0 < (int)fVar2) {
        do {
          local_10 = (int *)(**(code **)(*(int *)*param_2 + 100))(iVar9);
          if (local_10 != (int *)0x0) {
            *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + 1;
            local_10[2] = local_10[2] + 1;
          }
          param_1 = (int *)(**(code **)(*(int *)*piVar6 + 100))(iVar9);
          if (param_1 != (int *)0x0) {
            *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
            param_1[2] = param_1[2] + 1;
          }
          (**(code **)(*param_1 + 0x10))(local_14);
          FUN_01113f90(&param_1,&local_10,local_14);
          if (param_1 != (int *)0x0) {
            *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1;
            piVar1 = param_1 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*param_1)(1);
            }
          }
          if (local_10 != (int *)0x0) {
            *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + -1;
            piVar1 = local_10 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*local_10)(1);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)param_3);
        return;
      }
    }
  }
  return;
}

// 011145A0  FUN_011145a0  size=507  [run]
void FUN_011145a0(int *param_1,int *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int *local_14;
  undefined4 local_10;
  undefined1 local_c [8];
  
  puVar3 = param_3;
  iVar2 = *(int *)param_3[2];
  if ((iVar2 == 9) && (*(int *)((int *)param_3[2])[1] != 3)) {
    (**(code **)(*(int *)*param_2 + 0xc))(&local_14,*param_3);
    piVar4 = (int *)(**(code **)(*local_14 + 0x28))(local_10);
    if (piVar4 != (int *)0x0) {
      *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
      piVar4[2] = piVar4[2] + 1;
    }
    param_2 = piVar4;
    (**(code **)(*(int *)*param_1 + 0xc))(&local_14,*puVar3);
    piVar5 = (int *)(**(code **)(*local_14 + 0x28))(local_10);
    if (piVar5 != (int *)0x0) {
      *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
      piVar5[2] = piVar5[2] + 1;
    }
    param_1 = piVar5;
    uVar6 = FUN_010e0cc0();
    (**(code **)(*piVar5 + 0x10))(uVar6);
    uVar6 = FUN_010e0cc0();
    FUN_01113f90(&param_1,&param_2,uVar6);
    *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + -1;
    piVar1 = piVar5 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar5)(1);
    }
    if (piVar4 == (int *)0x0) {
      return;
    }
  }
  else {
    if (iVar2 != 8) {
      (**(code **)(*(int *)*param_1 + 0xc))(&local_14,*param_3);
      (**(code **)(*(int *)*param_2 + 0xc))(local_c,*puVar3);
      FUN_01115660(local_14,local_10,local_c);
      return;
    }
    (**(code **)(*(int *)*param_2 + 0xc))(&local_14,*param_3);
    piVar4 = (int *)(**(code **)(*local_14 + 0x28))(local_10);
    if (piVar4 != (int *)0x0) {
      *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
      piVar4[2] = piVar4[2] + 1;
    }
    param_2 = piVar4;
    (**(code **)(*(int *)*param_1 + 0xc))(&local_14,*puVar3);
    piVar5 = (int *)(**(code **)(*local_14 + 0x28))(local_10);
    if (piVar5 != (int *)0x0) {
      *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
      piVar5[2] = piVar5[2] + 1;
    }
    param_1 = piVar5;
    uVar6 = (**(code **)(*piVar4 + 0x14))();
    (**(code **)(*piVar5 + 0x10))(uVar6);
    uVar6 = (**(code **)(*piVar4 + 0x14))();
    FUN_01113f90(&param_1,&param_2,uVar6);
    *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + -1;
    piVar1 = piVar5 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar5)(1);
    }
  }
  *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + -1;
  piVar5 = piVar4 + 2;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 != 0) {
    return;
  }
  (**(code **)*piVar4)(1);
  return;
}

// 011147A0  FUN_011147a0  size=35  [run]
void __thiscall FUN_011147a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  return;
}

// 011147D0  FUN_011147d0  size=787  [run]
int __thiscall FUN_011147d0(undefined4 *param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = 0;
  local_c = param_1;
  iVar3 = (**(code **)(*(int *)*param_1 + 0x24))(param_2);
  if (iVar3 == 0) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0x80000000;
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_20,10,0x18);
    iVar3 = param_2;
    while ((iVar3 != 0 && (iVar4 = (**(code **)(*(int *)*param_1 + 0x24))(iVar3), iVar4 == 0))) {
      local_10 = (int *)(**(code **)(*(int *)param_1[1] + 0x24))(iVar3);
      if (local_1c == (local_18 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b8c,&local_20,0x18);
      }
      iVar3 = local_20 + local_1c * 0x18;
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0xc) = 0;
        *(undefined4 *)(iVar3 + 0x10) = 0;
        *(undefined4 *)(iVar3 + 0x14) = 0x80000000;
      }
      iVar3 = local_1c * 0x18;
      local_1c = local_1c + 1;
      FUN_010e5360(local_20 + iVar3);
      iVar3 = (**(code **)(*local_10 + 0x10))();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        local_8 = local_8 | 1;
        piVar6 = (int *)(**(code **)(*local_10 + 0x10))();
        iVar3 = (**(code **)(*piVar6 + 8))();
      }
      if ((local_8 & 1) != 0) {
        local_8 = local_8 & 0xfffffffe;
      }
    }
    local_14 = local_1c - 1;
    if (-1 < local_14) {
      local_10 = (int *)(local_14 * 0x18);
      do {
        iVar3 = 0;
        puVar8 = (undefined4 *)(local_20 + (int)local_10);
        local_2c = 0;
        local_28 = 0;
        local_24 = 0x80000000;
        local_38 = *puVar8;
        local_34 = puVar8[1];
        local_30 = puVar8[2];
        uVar2 = puVar8[4];
        if (0 < (int)uVar2) {
          FUN_0100a210(&PTR_vftable_018e9b94,&local_2c,((int)uVar2 < 0) - 1 & uVar2,0xc);
          local_28 = uVar2;
          local_8 = uVar2;
          do {
            iVar4 = puVar8[3];
            puVar1 = (undefined8 *)(iVar3 + local_2c);
            *puVar1 = *(undefined8 *)(iVar4 + iVar3);
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(iVar4 + 8 + iVar3);
            uVar5 = *(undefined4 *)(iVar4 + 4 + iVar3);
            (**(code **)(*(int *)*local_c + 0x2c))(uVar5);
            uVar5 = FUN_010e2040(uVar5);
            iVar3 = iVar3 + 0xc;
            local_8 = local_8 - 1;
            *(undefined4 *)((int)puVar1 + 4) = uVar5;
          } while (local_8 != 0);
          local_8 = 0;
          uVar2 = local_28;
        }
        local_28 = uVar2;
        (**(code **)(*(int *)*local_c + 0xc))(&local_38);
        local_28 = 0;
        if (-1 < (int)local_24) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,(local_24 & 0x3fffffff) * 0xc);
        }
        local_10 = local_10 + -6;
        local_14 = local_14 + -1;
        param_1 = local_c;
      } while (-1 < local_14);
    }
    piVar6 = (int *)(**(code **)(*(int *)param_1[1] + 0x24))(param_2);
    iVar4 = 0;
    iVar3 = (**(code **)(*piVar6 + 0x24))();
    if (0 < iVar3) {
      do {
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        (**(code **)(*piVar6 + 0x28))(iVar4,&local_30);
        piVar7 = (int *)FUN_010e0d90();
        if (*piVar7 == 6) {
          uVar5 = FUN_010e0cd0();
          FUN_011147d0(uVar5);
        }
        iVar4 = iVar4 + 1;
        iVar3 = (**(code **)(*piVar6 + 0x24))();
      } while (iVar4 < iVar3);
    }
    iVar3 = (**(code **)(*(int *)*local_c + 0x24))(param_2);
    iVar4 = local_1c - 1;
    if (-1 < iVar4) {
      puVar9 = (uint *)(local_20 + 0x14 + iVar4 * 0x18);
      do {
        puVar9[-1] = 0;
        if (-1 < (int)*puVar9) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar9[-2],(*puVar9 & 0x3fffffff) * 0xc);
        }
        puVar9[-2] = 0;
        *puVar9 = 0x80000000;
        iVar4 = iVar4 + -1;
        puVar9 = puVar9 + -6;
      } while (-1 < iVar4);
    }
    local_1c = 0;
    if (-1 < (int)local_18) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_20,(local_18 & 0x3fffffff) * 0x18);
    }
  }
  return iVar3;
}

// 01114AF0  FUN_01114af0  size=372  [run]
void FUN_01114af0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int local_14;
  int local_10;
  uint local_c;
  
  iVar1 = (**(code **)(*(int *)*param_2 + 0x24))();
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar5,0x10);
  }
  iVar5 = iVar1 - param_1[1];
  if (0 < iVar5) {
    puVar2 = (undefined4 *)(param_1[1] * 0x10 + *param_1 + 8);
    do {
      if (puVar2 != (undefined4 *)&DAT_00000008) {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[1] = iVar1;
  (**(code **)(*(int *)*param_2 + 0x30))(param_1);
  local_14 = 0;
  local_10 = 0;
  local_c = 0x80000000;
  iVar1 = (**(code **)(*(int *)*param_3 + 0x24))();
  if ((int)(local_c & 0x3fffffff) < iVar1) {
    iVar5 = (local_c & 0x3fffffff) * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_14,iVar5,0x10);
  }
  iVar5 = iVar1 - local_10;
  if (0 < iVar5) {
    puVar2 = (undefined4 *)(local_10 * 0x10 + local_14 + 8);
    do {
      if (puVar2 != (undefined4 *)&DAT_00000008) {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_10 = iVar1;
  (**(code **)(*(int *)*param_3 + 0x30))(&local_14);
  iVar5 = 0;
  iVar1 = (**(code **)(*(int *)*param_3 + 0x24))();
  if (0 < iVar1) {
    do {
      piVar3 = (int *)FUN_010e0d90();
      if (*piVar3 == 6) {
        uVar4 = FUN_010e0cd0();
        FUN_011147d0(uVar4);
      }
      iVar5 = iVar5 + 1;
      iVar1 = (**(code **)(*(int *)*param_3 + 0x24))();
    } while (iVar5 < iVar1);
  }
  local_10 = 0;
  if (-1 < (int)local_c) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_14,local_c << 4);
  }
  return;
}

// 01114C70  FUN_01114c70  size=162  [run]
void FUN_01114c70(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = (**(code **)(*(int *)*param_1 + 8))();
  iVar1 = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = -0x80000000;
  local_8 = (**(code **)(*(int *)*param_2 + 8))();
  FUN_01114af0(&local_18,&local_c,&local_8);
  if (0 < local_14) {
    iVar2 = 0;
    do {
      FUN_011145a0(param_1,param_2,iVar2 + local_18);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar1 < local_14);
  }
  local_14 = 0;
  if (-1 < local_10) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_18,local_10 << 4);
  }
  return;
}

// 01114D20  FUN_01114d20  size=336  [run]
undefined4 * __thiscall FUN_01114d20(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  piVar1 = param_3;
  if ((int *)*param_3 == (int *)0x0) {
    *param_2 = 0;
    return param_2;
  }
  local_18 = 0;
  local_14 = 0;
  puVar2 = (undefined4 *)(**(code **)(*(int *)*param_3 + 4))(&local_10);
  iVar3 = FUN_010e8550(*puVar2,puVar2[1],local_20);
  if (iVar3 == 0) {
    (**(code **)(*(int *)*param_1 + 0x28))(param_2,local_20);
    return param_2;
  }
  piVar4 = (int *)(**(code **)(*(int *)*piVar1 + 8))();
  uVar5 = (**(code **)(*piVar4 + 8))();
  param_3 = (int *)FUN_011147d0(uVar5);
  piVar4 = (int *)(**(code **)(*(int *)*param_1 + 0x10))(&param_3,0);
  local_8 = piVar4;
  if (piVar4 != (int *)0x0) {
    *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
    piVar4[2] = piVar4[2] + 1;
  }
  local_18 = 0;
  local_14 = 0;
  if (piVar4 == (int *)0x0) {
    puVar2 = &local_18;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*piVar4 + 4))(local_28);
  }
  local_10 = *puVar2;
  local_c = puVar2[1];
  local_18 = 0;
  local_14 = 0;
  if ((int *)*piVar1 == (int *)0x0) {
    puVar2 = &local_18;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*(int *)*piVar1 + 4))(local_30);
  }
  FUN_010e83d0(&PTR_vftable_018e9b94,*puVar2,puVar2[1],local_10,local_c);
  FUN_01114c70(&local_8,piVar1);
  *param_2 = piVar4;
  if (piVar4 != (int *)0x0) {
    *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
    piVar4[2] = piVar4[2] + 1;
    *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + -1;
    piVar1 = piVar4 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar4)(1);
    }
  }
  return param_2;
}

// 01114E70  FUN_01114e70  size=95  [run]
undefined4 __fastcall FUN_01114e70(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *local_c;
  undefined4 *local_8;
  
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x1c))(&local_c);
  FUN_01114d20(&local_8,uVar2);
  if (local_8 != (undefined4 *)0x0) {
    *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
    piVar1 = local_8 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_8)(1);
    }
  }
  if (local_c != (undefined4 *)0x0) {
    *(short *)((int)local_c + 6) = *(short *)((int)local_c + 6) + -1;
    piVar1 = local_c + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*local_c)(1);
    }
  }
  return 0;
}

// 01114ED0  FUN_01114ed0  size=31  [run]
void __thiscall FUN_01114ed0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x18);
  return;
}

// 01114EF0  FUN_01114ef0  size=39  [run]
void FUN_01114ef0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x18);
  }
  return;
}

// 01114F40  FUN_01114f40  size=31  [run]
void FUN_01114f40(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01114F60  FUN_01114f60  size=39  [run]
void FUN_01114f60(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01114F90  FUN_01114f90  size=37  [run]
void __thiscall FUN_01114f90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_010e8da0(param_3,param_4);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 01114FC0  FUN_01114fc0  size=31  [run]
void FUN_01114fc0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01114FE0  FUN_01114fe0  size=39  [run]
void FUN_01114fe0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01115020  FUN_01115020  size=52  [run]
undefined4 __thiscall FUN_01115020(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x18);
    return uVar3;
  }
  return 0;
}

// 01115060  FUN_01115060  size=28  [run]
undefined4 __thiscall FUN_01115060(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01113ef0(param_2,param_3);
  return param_1;
}

// 01115080  FUN_01115080  size=51  [run]
undefined4 __thiscall FUN_01115080(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_010e8da0(param_2,param_3);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    FUN_010e8e60(iVar1);
    return 0;
  }
  return 1;
}

// 011150C0  FUN_011150c0  size=53  [run]
undefined4 __thiscall FUN_011150c0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,0x18);
    return uVar3;
  }
  return 0;
}

// 01115100  FUN_01115100  size=28  [run]
undefined4 __thiscall FUN_01115100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01115060(param_2,param_3);
  return param_1;
}

// 01115120  FUN_01115120  size=93  [run]
undefined4 __thiscall
FUN_01115120(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4) * 2) {
    iVar1 = FUN_010e8f70(param_2,*(int *)(param_1 + 8) * 2 + 2);
    *param_6 = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_6 = 0;
  }
  uVar2 = FUN_010e8cf0(param_2,param_3,param_4,param_5);
  return uVar2;
}

// 01115180  FUN_01115180  size=124  [run]
void __thiscall
FUN_01115180(int *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_010e8f70(param_2,param_1[2] * 2 + 2);
  }
  iVar2 = *param_1;
  uVar4 = (param_3 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & param_1[2];
    piVar1 = (int *)(iVar2 + uVar4 * 0xc);
    if ((*(uint *)(iVar2 + uVar4 * 0xc) == param_3) && (piVar1[1] == param_4)) break;
    if (*piVar1 == -1) {
      iVar3 = uVar4 * 0xc;
      *(uint *)(iVar2 + iVar3) = param_3;
      *(int *)(iVar2 + 4 + iVar3) = param_4;
      *(undefined4 *)(iVar3 + 8 + *param_1) = param_5;
      param_1[1] = param_1[1] + 1;
      return;
    }
    uVar4 = uVar4 + 1;
  }
  return;
}

// 01115200  FUN_01115200  size=33  [run]
void FUN_01115200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01115120(&PTR_vftable_018e9b94,param_1,param_2,param_3,param_4);
  return;
}

// 01115230  FUN_01115230  size=29  [run]
void FUN_01115230(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01115180(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 01115250  FUN_01115250  size=47  [run]
void FUN_01115250(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x14);
    do {
      if (puVar1 != (undefined4 *)0x14) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
      }
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01115280  FUN_01115280  size=110  [run]
int __thiscall FUN_01115280(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x14)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0xc),(*(uint *)(param_1 + 0x14) & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x18);
  }
  return param_1;
}

// 011152F0  FUN_011152f0  size=84  [run]
int __thiscall FUN_011152f0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x18);
  }
  iVar1 = *param_1 + param_1[1] * 0x18;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x80000000;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x18;
}

// 01115350  FUN_01115350  size=96  [run]
void FUN_01115350(int param_1,int param_2)

{
  uint *puVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    puVar1 = (uint *)(param_1 + 0x14 + param_2 * 0x18);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar1[-2],(*puVar1 & 0x3fffffff) * 0xc);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + -6;
    } while (-1 < param_2);
  }
  return;
}

// 011153B0  FUN_011153b0  size=79  [run]
int __fastcall FUN_011153b0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,0x18);
  }
  iVar1 = *param_1 + param_1[1] * 0x18;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x80000000;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x18;
}

// 01115400  FUN_01115400  size=113  [run]
void __fastcall FUN_01115400(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(*param_1 + 0x14 + iVar2 * 0x18);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar1[-2],(*puVar1 & 0x3fffffff) * 0xc);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -6;
    } while (-1 < iVar2);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 01115480  FUN_01115480  size=151  [run]
void __thiscall FUN_01115480(int *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(*param_1 + 0x14 + iVar2 * 0x18);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar1[-2],(*puVar1 & 0x3fffffff) * 0xc);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      puVar1 = puVar1 + -6;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0x18);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01115660  FUN_01115660  size=358  [run]
void FUN_01115660(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 *local_8;
  
  puVar5 = param_3;
  puVar2 = (undefined4 *)FUN_010e5220();
  switch(*puVar2) {
  case 2:
  case 4:
    uVar3 = (**(code **)(*(int *)*puVar5 + 0x30))(puVar5[1]);
    (**(code **)(*param_1 + 0x44))(param_2,uVar3);
    return;
  case 3:
    fVar6 = (float10)(**(code **)(*(int *)*puVar5 + 0x3c))(puVar5[1]);
    param_3 = (undefined4 *)(float)fVar6;
    (**(code **)(*param_1 + 0x50))(param_2,param_3);
    return;
  case 5:
    uVar3 = (**(code **)(*(int *)*puVar5 + 0x2c))(puVar5[1]);
    (**(code **)(*param_1 + 0x54))(param_2,uVar3);
    break;
  case 6:
  case 7:
    puVar5 = (undefined4 *)(**(code **)(*(int *)*puVar5 + 0x34))(puVar5[1]);
    if (puVar5 != (undefined4 *)0x0) {
      *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
      puVar5[2] = puVar5[2] + 1;
    }
    param_3 = puVar5;
    puVar2 = (undefined4 *)FUN_01114d20(&local_8,&param_3);
    (**(code **)(*param_1 + 0x5c))(param_2,*puVar2);
    if (local_8 != (undefined4 *)0x0) {
      *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
      piVar1 = local_8 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*local_8)(1);
      }
    }
    if (puVar5 != (undefined4 *)0x0) {
      *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
      piVar1 = puVar5 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(1);
        return;
      }
    }
    break;
  case 9:
    if (*(int *)puVar2[1] == 3) {
      uVar3 = FUN_010e0cc0();
      uVar3 = (**(code **)(*(int *)*puVar5 + 0x38))(puVar5[1],uVar3);
      uVar4 = FUN_010e0cc0();
      (**(code **)(*param_1 + 0x48))(param_2,uVar3,uVar4);
      return;
    }
  }
  return;
}

// 01115820  FUN_01115820  size=28  [run]
void __thiscall FUN_01115820(undefined4 *param_1,undefined4 param_2)

{
  (**(code **)(*(int *)*param_1 + 100))(param_1[1],param_2);
  return;
}

// 01115840  FUN_01115840  size=18  [run]
void __thiscall FUN_01115840(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 01115860  FUN_01115860  size=42  [run]
void __thiscall FUN_01115860(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*(int *)*param_2 + 8))();
  uVar2 = (**(code **)(*piVar1 + 8))();
  (**(code **)(*(int *)*param_1 + 0x10))(uVar2);
  return;
}

// 01115890  FUN_01115890  size=23  [run]
undefined4 FUN_01115890(void)

{
  int in_EAX;
  
  if ((0 < in_EAX) && ((in_EAX < 0x13 || (in_EAX == 0x1e)))) {
    return 1;
  }
  return 0;
}

// 011158B0  FUN_011158b0  size=214  [run]
int __thiscall FUN_011158b0(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  
  piVar2 = param_3;
  if (*param_3 == 0) {
    return 0;
  }
  iVar1 = FUN_01016300();
  piVar2 = (int *)(**(code **)(*(int *)*piVar2 + 8))();
  iVar3 = (**(code **)(*piVar2 + 8))();
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(*(int *)*param_1 + 0x10))(iVar3);
  }
  if (iVar1 != 0) {
    if (iVar4 == 0) {
      return 0;
    }
    uVar5 = FUN_010093a0(iVar3);
    iVar3 = FUN_01015b90(uVar5);
    if (iVar3 != 0) {
      pcVar6 = (char *)FUN_010093e0((int)&param_3 + 3,iVar4);
      if (*pcVar6 != '\0') {
        return iVar4;
      }
      puVar7 = (undefined4 *)FUN_01016340("hk.DataObjectType");
      if (puVar7 != (undefined4 *)0x0) {
        iVar1 = (**(code **)(*(int *)*param_1 + 0x10))(*(undefined4 *)*puVar7);
        pcVar6 = (char *)FUN_010093e0((undefined1 *)((int)register0x00000010 + 7),iVar4);
        if (*pcVar6 != '\0') {
          return iVar4;
        }
      }
    }
    return iVar1;
  }
  return iVar4;
}

// 01115990  FUN_01115990  size=72  [run]
undefined4 FUN_01115990(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_2 + 0xc) != '\x18') && (*(char *)(param_2 + 0xc) != '\x1f')) {
    return 1;
  }
  if (*(int *)(param_2 + 8) != 0) {
    uVar1 = (**(code **)(*(int *)*param_3 + 0x30))(param_3[1]);
    FUN_01016580(param_1,uVar1);
  }
  return 0;
}

// 011159E0  FUN_011159e0  size=278  [run]
void __thiscall
FUN_011159e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  LPVOID pvVar7;
  
  iVar2 = (**(code **)(*(int *)*param_3 + 8))();
  if (iVar2 != 0) {
    piVar3 = (int *)(**(code **)(*(int *)*param_3 + 8))();
    iVar2 = (**(code **)(*piVar3 + 8))();
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(*(int *)*param_3 + 8))();
      uVar4 = (**(code **)(*piVar3 + 8))();
      iVar2 = (**(code **)(*(int *)*param_1 + 0x10))(uVar4);
      if (iVar2 != 0) {
        piVar3 = (int *)(**(code **)(*(int *)*param_3 + 8))();
        (**(code **)(*piVar3 + 0xc))();
        FUN_010097a0();
        iVar5 = FUN_01009750();
        iVar6 = FUN_010e7e10(iVar2,param_3);
        iVar5 = iVar5 + iVar6;
        pvVar7 = TlsGetValue(DAT_01f8fc4c);
        uVar4 = (**(code **)(**(int **)((int)pvVar7 + 0x2c) + 4))(iVar5);
        if (*(uint *)(param_4 + 0x10) == (*(uint *)(param_4 + 0x14) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b8c,(int *)(param_4 + 0xc),8);
        }
        puVar1 = (undefined4 *)(*(int *)(param_4 + 0xc) + *(int *)(param_4 + 0x10) * 8);
        *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
        *puVar1 = uVar4;
        puVar1[1] = iVar5;
        FUN_01015ea0(uVar4,0,iVar5);
        param_2[1] = iVar2;
        *param_2 = uVar4;
        return;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}

// 01115B00  FUN_01115b00  size=4099  [run]
int FUN_01115b00(float *param_1,int param_2,undefined4 *param_3,int param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  LPVOID pvVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  float10 fVar14;
  undefined8 uVar15;
  undefined1 local_60 [12];
  float local_54;
  undefined4 *local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  int local_3c;
  undefined4 *local_38;
  float local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  puVar13 = (undefined4 *)0xffffffff;
  iVar6 = (**(code **)(*(int *)*param_3 + 0x14))();
  if (iVar6 == 0) {
    return 0;
  }
  local_24 = (undefined4 *)(uint)*(byte *)(param_2 + 0xd);
  iVar6 = FUN_01016260(local_24);
  if (((*(short *)(iVar6 + 8) < 1) || (iVar7 = FUN_01115890(), iVar7 == 0)) ||
     (iVar7 = (**(code **)(*(int *)*param_3 + 0x20))(local_60), iVar7 != 0)) {
    local_c = 0;
    local_1c = (ushort)~*(ushort *)(param_2 + 0x10) >> 9 & 1;
    puVar9 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x14))();
    switch(*(undefined1 *)(param_2 + 0xd)) {
    case 0:
      goto switchD_01115c7b_caseD_0;
    case 1:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = puVar9;
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = local_24;
      local_8 = (undefined4 *)0x1;
      local_1c = 0;
      local_2c = local_38;
      if (0 < (int)puVar9) {
        do {
          iVar6 = (**(code **)(*(int *)*param_3 + 0x4c))(local_1c);
          *(bool *)((int)local_2c + local_1c) = iVar6 != 0;
          local_1c = local_1c + 1;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 2:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = puVar9;
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = local_24;
      local_8 = (undefined4 *)0x1;
      local_1c = 0;
      local_2c = local_38;
      if (0 < (int)puVar9) {
        do {
          uVar4 = (**(code **)(*(int *)*param_3 + 0x4c))(local_1c);
          *(undefined1 *)((int)local_2c + local_1c) = uVar4;
          local_1c = local_1c + 1;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 3:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = puVar9;
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = local_24;
      local_8 = (undefined4 *)0x1;
      local_1c = 0;
      local_2c = local_38;
      if (0 < (int)puVar9) {
        do {
          uVar4 = (**(code **)(*(int *)*param_3 + 0x4c))(local_1c);
          *(undefined1 *)((int)local_2c + local_1c) = uVar4;
          local_1c = local_1c + 1;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 4:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = puVar9;
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = local_24;
      local_8 = (undefined4 *)0x1;
      local_1c = 0;
      local_2c = local_38;
      if (0 < (int)puVar9) {
        do {
          uVar4 = (**(code **)(*(int *)*param_3 + 0x4c))(local_1c);
          *(undefined1 *)((int)local_2c + local_1c) = uVar4;
          local_1c = local_1c + 1;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 5:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 * 2);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)local_24 / 2);
      local_8 = (undefined4 *)0x2;
      local_1c = 0;
      local_2c = local_38;
      if (0 < (int)puVar9) {
        do {
          uVar5 = (**(code **)(*(int *)*param_3 + 0x4c))(local_1c);
          *(undefined2 *)((int)local_2c + local_1c * 2) = uVar5;
          local_1c = local_1c + 1;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 6:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 * 2);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)local_24 / 2);
      local_8 = (undefined4 *)0x2;
      local_1c = 0;
      local_2c = local_38;
      if (0 < (int)puVar9) {
        do {
          uVar5 = (**(code **)(*(int *)*param_3 + 0x4c))(local_1c);
          *(undefined2 *)((int)local_2c + local_1c * 2) = uVar5;
          local_1c = local_1c + 1;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 7:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 * 4);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)(((int)local_24 >> 0x1f & 3U) + (int)local_24) >> 2);
      local_8 = (undefined4 *)0x4;
      local_1c = 0;
      local_2c = local_38;
      if (0 < (int)puVar9) {
        do {
          uVar10 = (**(code **)(*(int *)*param_3 + 0x4c))(local_1c);
          local_2c[local_1c] = uVar10;
          local_1c = local_1c + 1;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 8:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 * 4);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)(((int)local_24 >> 0x1f & 3U) + (int)local_24) >> 2);
      local_8 = (undefined4 *)0x4;
      local_1c = 0;
      local_2c = local_38;
      if (0 < (int)puVar9) {
        do {
          uVar10 = (**(code **)(*(int *)*param_3 + 0x4c))(local_1c);
          local_2c[local_1c] = uVar10;
          local_1c = local_1c + 1;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 9:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 * 8);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      local_30 = (undefined4 *)((int)(((int)local_24 >> 0x1f & 7U) + (int)local_24) >> 3);
      local_8 = (undefined4 *)0x8;
      local_2c = (undefined4 *)0x0;
      puVar13 = local_30;
      local_20 = local_38;
      if (0 < (int)puVar9) {
        iVar6 = 0;
        do {
          uVar15 = (**(code **)(*(int *)*param_3 + 0x54))(iVar6);
          local_20[iVar6 * 2] = (int)uVar15;
          local_20[iVar6 * 2 + 1] = (int)((ulonglong)uVar15 >> 0x20);
          iVar6 = iVar6 + 1;
          puVar13 = local_30;
        } while (iVar6 < (int)puVar9);
      }
      break;
    case 10:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 * 8);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      local_30 = (undefined4 *)((int)(((int)local_24 >> 0x1f & 7U) + (int)local_24) >> 3);
      local_8 = (undefined4 *)0x8;
      local_2c = (undefined4 *)0x0;
      puVar13 = local_30;
      local_20 = local_38;
      if (0 < (int)puVar9) {
        iVar6 = 0;
        do {
          uVar15 = (**(code **)(*(int *)*param_3 + 0x54))(iVar6);
          local_20[iVar6 * 2] = (int)uVar15;
          local_20[iVar6 * 2 + 1] = (int)((ulonglong)uVar15 >> 0x20);
          iVar6 = iVar6 + 1;
          puVar13 = local_30;
        } while (iVar6 < (int)puVar9);
      }
      break;
    case 0xb:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 * 4);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)(((int)local_24 >> 0x1f & 3U) + (int)local_24) >> 2);
      local_8 = (undefined4 *)0x4;
      local_1c = 0;
      local_2c = local_38;
      if (0 < (int)puVar9) {
        do {
          fVar14 = (float10)(**(code **)(*(int *)*param_3 + 0x3c))(local_1c);
          local_2c[local_1c] = (float)fVar14;
          local_1c = local_1c + 1;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 0xc:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 << 4);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)(((int)local_24 >> 0x1f & 0xfU) + (int)local_24) >> 4);
      local_8 = (undefined4 *)0x10;
      local_1c = 0;
      puVar11 = local_38;
      if (0 < (int)puVar9) {
        do {
          local_24 = puVar11;
          puVar11 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x2c))(local_1c);
          uVar10 = puVar11[1];
          uVar2 = puVar11[2];
          uVar3 = puVar11[3];
          *local_24 = *puVar11;
          local_24[1] = uVar10;
          local_24[2] = uVar2;
          local_24[3] = uVar3;
          local_1c = local_1c + 1;
          local_24 = local_24 + 4;
          puVar11 = local_24;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 0xd:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 << 4);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)(((int)local_24 >> 0x1f & 0xfU) + (int)local_24) >> 4);
      local_8 = (undefined4 *)0x10;
      local_1c = 0;
      puVar11 = local_38;
      if (0 < (int)puVar9) {
        do {
          local_24 = puVar11;
          puVar11 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x2c))(local_1c);
          uVar10 = puVar11[1];
          uVar2 = puVar11[2];
          uVar3 = puVar11[3];
          *local_24 = *puVar11;
          local_24[1] = uVar10;
          local_24[2] = uVar2;
          local_24[3] = uVar3;
          local_1c = local_1c + 1;
          local_24 = local_24 + 4;
          puVar11 = local_24;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 0xe:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 * 0x30);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)local_24 / 0x30);
      local_8 = (undefined4 *)0x30;
      local_1c = 0;
      if (0 < (int)puVar9) {
        local_24 = local_38 + 8;
        do {
          puVar11 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x2c))(local_1c);
          uVar10 = puVar11[1];
          uVar2 = puVar11[2];
          uVar3 = puVar11[3];
          local_24[-8] = *puVar11;
          local_24[-7] = uVar10;
          local_24[-6] = uVar2;
          local_24[-5] = uVar3;
          uVar10 = puVar11[5];
          uVar2 = puVar11[6];
          uVar3 = puVar11[7];
          local_24[-4] = puVar11[4];
          local_24[-3] = uVar10;
          local_24[-2] = uVar2;
          local_24[-1] = uVar3;
          uVar10 = puVar11[9];
          uVar2 = puVar11[10];
          uVar3 = puVar11[0xb];
          *local_24 = puVar11[8];
          local_24[1] = uVar10;
          local_24[2] = uVar2;
          local_24[3] = uVar3;
          local_1c = local_1c + 1;
          local_24 = local_24 + 0xc;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 0xf:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 * 0x30);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)local_24 / 0x30);
      local_8 = (undefined4 *)0x30;
      local_1c = 0;
      if (0 < (int)puVar9) {
        local_24 = local_38 + 8;
        do {
          puVar11 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x2c))(local_1c);
          uVar10 = puVar11[1];
          uVar2 = puVar11[2];
          uVar3 = puVar11[3];
          local_24[-8] = *puVar11;
          local_24[-7] = uVar10;
          local_24[-6] = uVar2;
          local_24[-5] = uVar3;
          uVar10 = puVar11[5];
          uVar2 = puVar11[6];
          uVar3 = puVar11[7];
          local_24[-4] = puVar11[4];
          local_24[-3] = uVar10;
          local_24[-2] = uVar2;
          local_24[-1] = uVar3;
          uVar10 = puVar11[9];
          uVar2 = puVar11[10];
          uVar3 = puVar11[0xb];
          *local_24 = puVar11[8];
          local_24[1] = uVar10;
          local_24[2] = uVar2;
          local_24[3] = uVar3;
          local_1c = local_1c + 1;
          local_24 = local_24 + 0xc;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 0x10:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 * 0x30);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)local_24 / 0x30);
      local_8 = (undefined4 *)0x30;
      local_1c = 0;
      if (0 < (int)puVar9) {
        local_24 = local_38 + 8;
        do {
          puVar11 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x2c))(local_1c);
          uVar10 = puVar11[1];
          uVar2 = puVar11[2];
          uVar3 = puVar11[3];
          local_24[-8] = *puVar11;
          local_24[-7] = uVar10;
          local_24[-6] = uVar2;
          local_24[-5] = uVar3;
          uVar10 = puVar11[5];
          uVar2 = puVar11[6];
          uVar3 = puVar11[7];
          local_24[-4] = puVar11[4];
          local_24[-3] = uVar10;
          local_24[-2] = uVar2;
          local_24[-1] = uVar3;
          uVar10 = puVar11[9];
          uVar2 = puVar11[10];
          uVar3 = puVar11[0xb];
          *local_24 = puVar11[8];
          local_24[1] = uVar10;
          local_24[2] = uVar2;
          local_24[3] = uVar3;
          local_1c = local_1c + 1;
          local_24 = local_24 + 0xc;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 0x11:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 << 6);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)(((int)local_24 >> 0x1f & 0x3fU) + (int)local_24) >> 6);
      local_8 = (undefined4 *)0x40;
      local_1c = 0;
      if (0 < (int)puVar9) {
        local_24 = local_38 + 8;
        do {
          puVar11 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x2c))(local_1c);
          uVar10 = puVar11[1];
          uVar2 = puVar11[2];
          uVar3 = puVar11[3];
          local_24[-8] = *puVar11;
          local_24[-7] = uVar10;
          local_24[-6] = uVar2;
          local_24[-5] = uVar3;
          uVar10 = puVar11[5];
          uVar2 = puVar11[6];
          uVar3 = puVar11[7];
          local_24[-4] = puVar11[4];
          local_24[-3] = uVar10;
          local_24[-2] = uVar2;
          local_24[-1] = uVar3;
          uVar10 = puVar11[9];
          uVar2 = puVar11[10];
          uVar3 = puVar11[0xb];
          *local_24 = puVar11[8];
          local_24[1] = uVar10;
          local_24[2] = uVar2;
          local_24[3] = uVar3;
          uVar10 = puVar11[0xd];
          uVar2 = puVar11[0xe];
          uVar3 = puVar11[0xf];
          local_24[4] = puVar11[0xc];
          local_24[5] = uVar10;
          local_24[6] = uVar2;
          local_24[7] = uVar3;
          local_1c = local_1c + 1;
          local_24 = local_24 + 0x10;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 0x12:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 << 6);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)(((int)local_24 >> 0x1f & 0x3fU) + (int)local_24) >> 6);
      local_8 = (undefined4 *)0x40;
      local_1c = 0;
      if (0 < (int)puVar9) {
        local_24 = local_38 + 8;
        do {
          puVar11 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x2c))(local_1c);
          uVar10 = puVar11[1];
          uVar2 = puVar11[2];
          uVar3 = puVar11[3];
          local_24[-8] = *puVar11;
          local_24[-7] = uVar10;
          local_24[-6] = uVar2;
          local_24[-5] = uVar3;
          uVar10 = puVar11[5];
          uVar2 = puVar11[6];
          uVar3 = puVar11[7];
          local_24[-4] = puVar11[4];
          local_24[-3] = uVar10;
          local_24[-2] = uVar2;
          local_24[-1] = uVar3;
          uVar10 = puVar11[9];
          uVar2 = puVar11[10];
          uVar3 = puVar11[0xb];
          *local_24 = puVar11[8];
          local_24[1] = uVar10;
          local_24[2] = uVar2;
          local_24[3] = uVar3;
          uVar10 = puVar11[0xd];
          uVar2 = puVar11[0xe];
          uVar3 = puVar11[0xf];
          local_24[4] = puVar11[0xc];
          local_24[5] = uVar10;
          local_24[6] = uVar2;
          local_24[7] = uVar3;
          local_1c = local_1c + 1;
          local_24 = local_24 + 0x10;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    default:
      return 1;
    case 0x14:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_2c = (undefined4 *)((int)puVar9 * 4);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_2c);
      puVar13 = (undefined4 *)((int)(((int)local_2c >> 0x1f & 3U) + (int)local_2c) >> 2);
      local_8 = (undefined4 *)0x4;
      local_24 = local_38;
      FUN_01015ea0(local_38,0,(int)puVar9 * 4);
      local_20 = (undefined4 *)0x0;
      if (0 < (int)puVar9) {
        do {
          local_10 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x5c))(local_20);
          if (local_10 != (undefined4 *)0x0) {
            *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + 1;
            local_10[2] = local_10[2] + 1;
          }
          FUN_01118c30(&local_10,local_24,local_1c);
          if (local_10 != (undefined4 *)0x0) {
            *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + -1;
            piVar12 = local_10 + 2;
            *piVar12 = *piVar12 + -1;
            if (*piVar12 == 0) {
              (**(code **)*local_10)(1);
            }
          }
          local_24 = local_24 + 1;
          local_20 = (undefined4 *)((int)local_20 + 1);
        } while ((int)local_20 < (int)puVar9);
      }
      break;
    case 0x19:
      local_8 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x5c))(0);
      if (local_8 != (undefined4 *)0x0) {
        *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + 1;
        local_8[2] = local_8[2] + 1;
      }
      local_10 = (undefined4 *)FUN_011158b0(param_2,&local_8);
      if (local_8 != (undefined4 *)0x0) {
        *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
        piVar12 = local_8 + 2;
        *piVar12 = *piVar12 + -1;
        if (*piVar12 == 0) {
          (**(code **)*local_8)(1);
        }
      }
      if (local_10 == (undefined4 *)0x0) goto switchD_01115c7b_caseD_0;
      iVar6 = FUN_01009750();
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)(iVar6 * (int)puVar9);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      iVar6 = FUN_01009750();
      puVar13 = (undefined4 *)((int)local_24 / iVar6);
      local_8 = (undefined4 *)FUN_01009750();
      local_2c = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x14))();
      iVar6 = FUN_01009750();
      FUN_01015ea0(local_38,0,iVar6 * (int)local_2c);
      local_1c = 0;
      if (0 < (int)puVar9) {
        do {
          if (local_c != 0) break;
          iVar6 = FUN_01009750();
          local_2c = (undefined4 *)(iVar6 * local_1c + (int)local_38);
          local_28 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x5c))(local_1c);
          if (local_28 != (undefined4 *)0x0) {
            *(short *)((int)local_28 + 6) = *(short *)((int)local_28 + 6) + 1;
            local_28[2] = local_28[2] + 1;
          }
          local_c = FUN_01117880(local_2c,&local_28,param_4);
          if (local_28 != (undefined4 *)0x0) {
            *(short *)((int)local_28 + 6) = *(short *)((int)local_28 + 6) + -1;
            piVar12 = local_28 + 2;
            *piVar12 = *piVar12 + -1;
            if (*piVar12 == 0) {
              (**(code **)*local_28)(1);
            }
          }
          local_1c = local_1c + 1;
        } while ((int)local_1c < (int)puVar9);
      }
      if ((int)local_8 < 1) goto switchD_01115c7b_caseD_0;
      break;
    case 0x1c:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_2c = (undefined4 *)((int)puVar9 * 8);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_2c);
      puVar13 = (undefined4 *)((int)(((int)local_2c >> 0x1f & 7U) + (int)local_2c) >> 3);
      local_8 = (undefined4 *)0x8;
      local_20 = local_38;
      FUN_01015ea0(local_38,0,(int)puVar9 * 8);
      local_24 = (undefined4 *)0x0;
      if (0 < (int)puVar9) {
        do {
          local_10 = (undefined4 *)(**(code **)(*(int *)*param_3 + 0x5c))(local_24);
          if (local_10 != (undefined4 *)0x0) {
            *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + 1;
            local_10[2] = local_10[2] + 1;
          }
          FUN_01118cc0(&local_10,local_20,local_1c);
          if (local_10 != (undefined4 *)0x0) {
            *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + -1;
            piVar12 = local_10 + 2;
            *piVar12 = *piVar12 + -1;
            if (*piVar12 == 0) {
              (**(code **)*local_10)(1);
            }
          }
          local_20 = local_20 + 2;
          local_24 = (undefined4 *)((int)local_24 + 1);
        } while ((int)local_24 < (int)puVar9);
      }
      break;
    case 0x1d:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_2c = (undefined4 *)((int)puVar9 * 4);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_2c);
      puVar13 = (undefined4 *)((int)(((int)local_2c >> 0x1f & 3U) + (int)local_2c) >> 2);
      local_8 = (undefined4 *)0x4;
      local_24 = (undefined4 *)0x0;
      puVar11 = local_38;
      if (0 < (int)puVar9) {
        do {
          local_20 = puVar11;
          if (local_c != 0) break;
          local_14 = *param_3;
          local_10 = local_24;
          local_c = FUN_01118d50(local_20,*(undefined1 *)(param_2 + 0xd),&local_14,0,local_1c,
                                 param_4);
          local_20 = local_20 + 1;
          local_24 = (undefined4 *)((int)local_24 + 1);
          puVar11 = local_20;
        } while ((int)local_24 < (int)puVar9);
      }
      break;
    case 0x1e:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 * 4);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)(((int)local_24 >> 0x1f & 3U) + (int)local_24) >> 2);
      local_8 = (undefined4 *)0x4;
      local_1c = 0;
      local_2c = local_38;
      if (0 < (int)puVar9) {
        do {
          uVar10 = (**(code **)(*(int *)*param_3 + 0x54))(local_1c);
          local_2c[local_1c] = uVar10;
          local_1c = local_1c + 1;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 0x20:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_24 = (undefined4 *)((int)puVar9 * 2);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_24);
      puVar13 = (undefined4 *)((int)local_24 / 2);
      local_8 = (undefined4 *)0x2;
      local_1c = 0;
      local_20 = local_38;
      if (0 < (int)puVar9) {
        do {
          fVar14 = (float10)(**(code **)(*(int *)*param_3 + 0x3c))(local_1c);
          local_2c = (undefined4 *)(float)fVar14;
          *(short *)((int)local_20 + local_1c * 2) = (short)((uint)local_2c >> 0x10);
          local_1c = local_1c + 1;
        } while ((int)local_1c < (int)puVar9);
      }
      break;
    case 0x21:
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      local_2c = (undefined4 *)((int)puVar9 * 4);
      local_38 = (undefined4 *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&local_2c);
      puVar13 = (undefined4 *)((int)(((int)local_2c >> 0x1f & 3U) + (int)local_2c) >> 2);
      local_8 = (undefined4 *)0x4;
      local_24 = (undefined4 *)0x0;
      puVar11 = local_38;
      if (0 < (int)puVar9) {
        do {
          local_20 = puVar11;
          if (local_c != 0) break;
          local_14 = *param_3;
          local_10 = local_24;
          local_c = FUN_01118d50(local_20,*(undefined1 *)(param_2 + 0xd),&local_14,0,local_1c,
                                 param_4);
          local_20 = local_20 + 1;
          local_24 = (undefined4 *)((int)local_24 + 1);
          puVar11 = local_20;
        } while ((int)local_24 < (int)puVar9);
      }
    }
    iVar6 = param_4;
    param_1[1] = (float)puVar9;
    param_3 = (undefined4 *)((int)puVar9 * (int)local_8);
    piVar12 = (int *)(param_4 + 0xc);
    *param_1 = (float)local_38;
    if (*(uint *)(param_4 + 0x10) == (*(uint *)(param_4 + 0x14) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b8c,piVar12,8);
    }
    iVar7 = *(int *)(iVar6 + 0x10);
    pfVar1 = (float *)(*piVar12 + iVar7 * 8);
    *(int *)(iVar6 + 0x10) = iVar7 + 1;
    *pfVar1 = (float)local_38;
    pfVar1[1] = (float)param_3;
switchD_01115c7b_caseD_0:
    if (*(char *)(param_2 + 0xc) == '\x16') {
      if (*(int *)(local_18 + 4) == 0) {
        puVar13 = (undefined4 *)((uint)puVar13 | 0x80000000);
      }
      param_1[2] = (float)puVar13;
    }
    return local_c;
  }
  iVar7 = (int)*(short *)(iVar6 + 8);
  local_34 = local_54;
  iVar6 = (int)local_54 * iVar7;
  param_3 = (undefined4 *)iVar6;
  pvVar8 = TlsGetValue(DAT_01f8fc4c);
  local_44 = (float)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 0xc))(&param_3);
  local_30 = (undefined4 *)((int)param_3 / iVar7);
  local_40 = local_54;
  local_48 = 1;
  local_4c = local_24;
  switch(local_24) {
  case (undefined4 *)0xc:
  case (undefined4 *)0xd:
    local_48 = 4;
    break;
  case (undefined4 *)0xe:
  case (undefined4 *)0xf:
  case (undefined4 *)0x10:
    local_48 = 0xc;
    break;
  case (undefined4 *)0x11:
  case (undefined4 *)0x12:
    local_48 = 0x10;
    break;
  default:
    goto switchD_01115bc7_default;
  }
  local_4c = (undefined4 *)0xb;
switchD_01115bc7_default:
  local_3c = iVar7;
  local_38 = (undefined4 *)local_44;
  FUN_01028da0(local_60,&local_4c);
  if (0 < iVar7) {
    *param_1 = (float)local_38;
    param_1[1] = local_34;
    FUN_01118bc0(local_38,iVar6);
  }
  if (*(char *)(param_2 + 0xc) == '\x16') {
    if (*(int *)(local_18 + 4) == 0) {
      local_30 = (undefined4 *)((uint)local_30 | 0x80000000);
    }
    param_1[2] = (float)local_30;
  }
  return 0;
}

// 01116BC0  FUN_01116bc0  size=3119  [run]
int FUN_01116bc0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  float10 fVar13;
  undefined8 uVar14;
  undefined4 local_20;
  int local_1c;
  undefined4 *local_18 [2];
  uint local_10;
  int local_c;
  uint local_8;
  
  puVar4 = param_3;
  local_8 = 0;
  iVar9 = (**(code **)(*(int *)*param_3 + 0x14))();
  piVar5 = param_5;
  if (iVar9 == 0) {
    *param_1 = local_8;
    return 0;
  }
  local_c = 0;
  local_10 = (ushort)~*(ushort *)(param_2 + 4) >> 9 & 1;
  switch(*(undefined1 *)((int)param_2 + 0xd)) {
  case 0:
    goto switchD_01116c19_caseD_0;
  case 1:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x1;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x4c))(param_4);
        *(bool *)(param_4 + *piVar5) = iVar9 != 0;
        param_4 = param_4 + 1;
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 2:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x1;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        uVar6 = (**(code **)(*(int *)*puVar4 + 0x4c))(param_4);
        *(undefined1 *)(param_4 + *piVar5) = uVar6;
        param_4 = param_4 + 1;
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 3:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x1;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        uVar6 = (**(code **)(*(int *)*puVar4 + 0x4c))(param_4);
        *(undefined1 *)(param_4 + *piVar5) = uVar6;
        param_4 = param_4 + 1;
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 4:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x1;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        uVar6 = (**(code **)(*(int *)*puVar4 + 0x4c))(param_4);
        *(undefined1 *)(param_4 + *piVar5) = uVar6;
        param_4 = param_4 + 1;
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 5:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x2;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        uVar8 = (**(code **)(*(int *)*puVar4 + 0x4c))(param_4);
        *(undefined2 *)(*piVar5 + param_4 * 2) = uVar8;
        param_4 = param_4 + 1;
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 6:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x2;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        uVar8 = (**(code **)(*(int *)*puVar4 + 0x4c))(param_4);
        *(undefined2 *)(*piVar5 + param_4 * 2) = uVar8;
        param_4 = param_4 + 1;
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 7:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x4;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        uVar10 = (**(code **)(*(int *)*puVar4 + 0x4c))(param_4);
        *(undefined4 *)(*piVar5 + param_4 * 4) = uVar10;
        param_4 = param_4 + 1;
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 8:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x4;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        uVar10 = (**(code **)(*(int *)*puVar4 + 0x4c))(param_4);
        *(undefined4 *)(*piVar5 + param_4 * 4) = uVar10;
        param_4 = param_4 + 1;
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 9:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x8;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        uVar14 = (**(code **)(*(int *)*puVar4 + 0x54))(param_4);
        local_1c = (int)((ulonglong)uVar14 >> 0x20);
        iVar9 = *piVar5;
        *(int *)(iVar9 + param_4 * 8) = (int)uVar14;
        *(int *)(iVar9 + 4 + param_4 * 8) = local_1c;
        param_4 = param_4 + 1;
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 10:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x8;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        uVar14 = (**(code **)(*(int *)*puVar4 + 0x54))(param_4);
        local_1c = (int)((ulonglong)uVar14 >> 0x20);
        iVar9 = *piVar5;
        *(int *)(iVar9 + param_4 * 8) = (int)uVar14;
        *(int *)(iVar9 + 4 + param_4 * 8) = local_1c;
        param_4 = param_4 + 1;
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 0xb:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x4;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        fVar13 = (float10)(**(code **)(*(int *)*puVar4 + 0x3c))(param_4);
        *(float *)(*piVar5 + param_4 * 4) = (float)fVar13;
        param_4 = param_4 + 1;
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 0xc:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x10;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      param_2 = (undefined4 *)0x0;
      do {
        puVar12 = (undefined4 *)(**(code **)(*(int *)*puVar4 + 0x2c))(param_4);
        uVar10 = puVar12[1];
        uVar2 = puVar12[2];
        uVar3 = puVar12[3];
        param_4 = param_4 + 1;
        puVar11 = (undefined4 *)(*piVar5 + (int)param_2);
        *puVar11 = *puVar12;
        puVar11[1] = uVar10;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        param_2 = (undefined4 *)((int)param_2 + 0x10);
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 0xd:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x10;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      param_2 = (undefined4 *)0x0;
      do {
        puVar12 = (undefined4 *)(**(code **)(*(int *)*puVar4 + 0x2c))(param_4);
        uVar10 = puVar12[1];
        uVar2 = puVar12[2];
        uVar3 = puVar12[3];
        param_4 = param_4 + 1;
        puVar11 = (undefined4 *)(*piVar5 + (int)param_2);
        *puVar11 = *puVar12;
        puVar11[1] = uVar10;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        param_2 = (undefined4 *)((int)param_2 + 0x10);
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 0xe:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x30;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      param_2 = (undefined4 *)0x0;
      do {
        puVar12 = (undefined4 *)(**(code **)(*(int *)*puVar4 + 0x2c))(param_4);
        iVar9 = *piVar5;
        uVar10 = puVar12[1];
        uVar2 = puVar12[2];
        uVar3 = puVar12[3];
        param_4 = param_4 + 1;
        puVar11 = (undefined4 *)(iVar9 + (int)param_2);
        *puVar11 = *puVar12;
        puVar11[1] = uVar10;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        uVar10 = puVar12[5];
        uVar2 = puVar12[6];
        uVar3 = puVar12[7];
        puVar11 = (undefined4 *)(iVar9 + 0x10 + (int)param_2);
        *puVar11 = puVar12[4];
        puVar11[1] = uVar10;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        uVar10 = puVar12[9];
        uVar2 = puVar12[10];
        uVar3 = puVar12[0xb];
        puVar11 = (undefined4 *)(iVar9 + 0x20 + (int)param_2);
        *puVar11 = puVar12[8];
        puVar11[1] = uVar10;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        param_2 = (undefined4 *)((int)param_2 + 0x30);
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 0xf:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x30;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      param_2 = (undefined4 *)0x0;
      do {
        puVar12 = (undefined4 *)(**(code **)(*(int *)*puVar4 + 0x2c))(param_4);
        iVar9 = *piVar5;
        uVar10 = puVar12[1];
        uVar2 = puVar12[2];
        uVar3 = puVar12[3];
        param_4 = param_4 + 1;
        puVar11 = (undefined4 *)(iVar9 + (int)param_2);
        *puVar11 = *puVar12;
        puVar11[1] = uVar10;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        uVar10 = puVar12[5];
        uVar2 = puVar12[6];
        uVar3 = puVar12[7];
        puVar11 = (undefined4 *)(iVar9 + 0x10 + (int)param_2);
        *puVar11 = puVar12[4];
        puVar11[1] = uVar10;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        uVar10 = puVar12[9];
        uVar2 = puVar12[10];
        uVar3 = puVar12[0xb];
        puVar11 = (undefined4 *)(iVar9 + 0x20 + (int)param_2);
        *puVar11 = puVar12[8];
        puVar11[1] = uVar10;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        param_2 = (undefined4 *)((int)param_2 + 0x30);
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 0x10:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x30;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      param_2 = (undefined4 *)0x0;
      do {
        puVar12 = (undefined4 *)(**(code **)(*(int *)*puVar4 + 0x2c))(param_4);
        iVar9 = *piVar5;
        uVar10 = puVar12[1];
        uVar2 = puVar12[2];
        uVar3 = puVar12[3];
        param_4 = param_4 + 1;
        puVar11 = (undefined4 *)(iVar9 + (int)param_2);
        *puVar11 = *puVar12;
        puVar11[1] = uVar10;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        uVar10 = puVar12[5];
        uVar2 = puVar12[6];
        uVar3 = puVar12[7];
        puVar11 = (undefined4 *)(iVar9 + 0x10 + (int)param_2);
        *puVar11 = puVar12[4];
        puVar11[1] = uVar10;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        uVar10 = puVar12[9];
        uVar2 = puVar12[10];
        uVar3 = puVar12[0xb];
        puVar11 = (undefined4 *)(iVar9 + 0x20 + (int)param_2);
        *puVar11 = puVar12[8];
        puVar11[1] = uVar10;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        param_2 = (undefined4 *)((int)param_2 + 0x30);
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 0x11:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x40;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      param_2 = (undefined4 *)0x0;
      do {
        puVar11 = (undefined4 *)(**(code **)(*(int *)*puVar4 + 0x2c))(param_4);
        uVar10 = puVar11[1];
        uVar2 = puVar11[2];
        uVar3 = puVar11[3];
        param_4 = param_4 + 1;
        puVar12 = (undefined4 *)(*piVar5 + (int)param_2);
        *puVar12 = *puVar11;
        puVar12[1] = uVar10;
        puVar12[2] = uVar2;
        puVar12[3] = uVar3;
        uVar10 = puVar11[5];
        uVar2 = puVar11[6];
        uVar3 = puVar11[7];
        puVar12[4] = puVar11[4];
        puVar12[5] = uVar10;
        puVar12[6] = uVar2;
        puVar12[7] = uVar3;
        uVar10 = puVar11[9];
        uVar2 = puVar11[10];
        uVar3 = puVar11[0xb];
        puVar12[8] = puVar11[8];
        puVar12[9] = uVar10;
        puVar12[10] = uVar2;
        puVar12[0xb] = uVar3;
        uVar10 = puVar11[0xd];
        uVar2 = puVar11[0xe];
        uVar3 = puVar11[0xf];
        puVar12[0xc] = puVar11[0xc];
        puVar12[0xd] = uVar10;
        puVar12[0xe] = uVar2;
        puVar12[0xf] = uVar3;
        param_2 = (undefined4 *)((int)param_2 + 0x40);
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 0x12:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x40;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      param_2 = (undefined4 *)0x0;
      do {
        puVar11 = (undefined4 *)(**(code **)(*(int *)*puVar4 + 0x2c))(param_4);
        uVar10 = puVar11[1];
        uVar2 = puVar11[2];
        uVar3 = puVar11[3];
        param_4 = param_4 + 1;
        puVar12 = (undefined4 *)(*piVar5 + (int)param_2);
        *puVar12 = *puVar11;
        puVar12[1] = uVar10;
        puVar12[2] = uVar2;
        puVar12[3] = uVar3;
        uVar10 = puVar11[5];
        uVar2 = puVar11[6];
        uVar3 = puVar11[7];
        puVar12[4] = puVar11[4];
        puVar12[5] = uVar10;
        puVar12[6] = uVar2;
        puVar12[7] = uVar3;
        uVar10 = puVar11[9];
        uVar2 = puVar11[10];
        uVar3 = puVar11[0xb];
        puVar12[8] = puVar11[8];
        puVar12[9] = uVar10;
        puVar12[10] = uVar2;
        puVar12[0xb] = uVar3;
        uVar10 = puVar11[0xd];
        uVar2 = puVar11[0xe];
        uVar3 = puVar11[0xf];
        puVar12[0xc] = puVar11[0xc];
        puVar12[0xd] = uVar10;
        puVar12[0xe] = uVar2;
        puVar12[0xf] = uVar3;
        param_2 = (undefined4 *)((int)param_2 + 0x40);
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  default:
    return 1;
  case 0x14:
    uVar7 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar7);
    param_3 = (undefined4 *)0x4;
    FUN_01015ea0(*piVar5,0,(uint)uVar7 * 4);
    param_5 = (int *)0x0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        param_2 = (undefined4 *)(**(code **)(*(int *)*puVar4 + 0x5c))(param_5);
        if (param_2 != (undefined4 *)0x0) {
          *(short *)((int)param_2 + 6) = *(short *)((int)param_2 + 6) + 1;
          param_2[2] = param_2[2] + 1;
        }
        FUN_01118c30(&param_2,*piVar5 + (int)param_5 * 4,local_10);
        if (param_2 != (undefined4 *)0x0) {
          *(short *)((int)param_2 + 6) = *(short *)((int)param_2 + 6) + -1;
          piVar1 = param_2 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*param_2)(1);
          }
        }
        param_5 = (int *)((int)param_5 + 1);
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while ((int)param_5 < iVar9);
    }
    break;
  case 0x19:
    param_3 = (undefined4 *)(**(code **)(*(int *)*puVar4 + 0x5c))(0);
    if (param_3 != (undefined4 *)0x0) {
      *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
      param_3[2] = param_3[2] + 1;
    }
    param_2 = (undefined4 *)FUN_011158b0(param_2,&param_3);
    if (param_3 != (undefined4 *)0x0) {
      *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
      piVar1 = param_3 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_3)(1);
      }
    }
    if (param_2 == (undefined4 *)0x0) {
      return local_c;
    }
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)FUN_01009750();
    param_5 = (int *)(**(code **)(*(int *)*puVar4 + 0x14))();
    iVar9 = FUN_01009750();
    FUN_01015ea0(*piVar5,0,iVar9 * (int)param_5);
    param_5 = (int *)0x0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        if (local_c != 0) break;
        iVar9 = FUN_01009750();
        local_10 = *piVar5 + iVar9 * (int)param_5;
        local_18[0] = (undefined4 *)(**(code **)(*(int *)*puVar4 + 0x5c))(param_5);
        if (local_18[0] != (undefined4 *)0x0) {
          *(short *)((int)local_18[0] + 6) = *(short *)((int)local_18[0] + 6) + 1;
          local_18[0][2] = local_18[0][2] + 1;
        }
        local_c = FUN_01117880(local_10,local_18,param_4);
        if (local_18[0] != (undefined4 *)0x0) {
          *(short *)((int)local_18[0] + 6) = *(short *)((int)local_18[0] + 6) + -1;
          piVar1 = local_18[0] + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_18[0])(1);
          }
        }
        param_5 = (int *)((int)param_5 + 1);
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while ((int)param_5 < iVar9);
    }
    if ((int)param_3 < 1) {
      return local_c;
    }
    break;
  case 0x1c:
    uVar7 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar7);
    param_3 = (undefined4 *)0x8;
    FUN_01015ea0(*piVar5,0,(uint)uVar7 * 8);
    param_5 = (int *)0x0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        param_2 = (undefined4 *)(**(code **)(*(int *)*puVar4 + 0x5c))(param_5);
        if (param_2 != (undefined4 *)0x0) {
          *(short *)((int)param_2 + 6) = *(short *)((int)param_2 + 6) + 1;
          param_2[2] = param_2[2] + 1;
        }
        FUN_01118cc0(&param_2,*piVar5 + (int)param_5 * 8,local_10);
        if (param_2 != (undefined4 *)0x0) {
          *(short *)((int)param_2 + 6) = *(short *)((int)param_2 + 6) + -1;
          piVar1 = param_2 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*param_2)(1);
          }
        }
        param_5 = (int *)((int)param_5 + 1);
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while ((int)param_5 < iVar9);
    }
    break;
  case 0x1d:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x4;
    param_5 = (int *)0x0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        if (local_c != 0) break;
        local_20 = *puVar4;
        local_1c = (int)param_5;
        local_c = FUN_01118d50(*piVar5 + (int)param_5 * 4,*(undefined1 *)((int)param_2 + 0xd),
                               &local_20,0,local_10,param_4);
        param_5 = (int *)((int)param_5 + 1);
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while ((int)param_5 < iVar9);
    }
    break;
  case 0x1e:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x4;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        uVar14 = (**(code **)(*(int *)*puVar4 + 0x54))(param_4);
        local_1c = (int)((ulonglong)uVar14 >> 0x20);
        *(int *)(*piVar5 + param_4 * 4) = (int)uVar14;
        param_4 = param_4 + 1;
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 0x20:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x2;
    param_4 = 0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        fVar13 = (float10)(**(code **)(*(int *)*puVar4 + 0x3c))(param_4);
        param_2 = (undefined4 *)(float)fVar13;
        *(short *)(*piVar5 + param_4 * 2) = (short)((uint)param_2 >> 0x10);
        param_4 = param_4 + 1;
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while (param_4 < iVar9);
    }
    break;
  case 0x21:
    uVar8 = (**(code **)(*(int *)*puVar4 + 0x14))();
    local_8 = CONCAT22(local_8._2_2_,uVar8);
    param_3 = (undefined4 *)0x4;
    param_5 = (int *)0x0;
    iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
    if (0 < iVar9) {
      do {
        if (local_c != 0) break;
        local_20 = *puVar4;
        local_1c = (int)param_5;
        local_c = FUN_01118d50(*piVar5 + (int)param_5 * 4,*(undefined1 *)((int)param_2 + 0xd),
                               &local_20,0,local_10,param_4);
        param_5 = (int *)((int)param_5 + 1);
        iVar9 = (**(code **)(*(int *)*puVar4 + 0x14))();
      } while ((int)param_5 < iVar9);
    }
  }
  *(short *)((int)param_1 + 2) = (short)*piVar5 - (short)param_1;
  *piVar5 = *piVar5 + ((local_8 & 0xffff) * (int)param_3 + 0xf & 0xfffffff0);
  *(undefined2 *)param_1 = (undefined2)local_8;
switchD_01116c19_caseD_0:
  return local_c;
}

// 01117880  FUN_01117880  size=1849  [run]
undefined4 * FUN_01117880(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  LPVOID pvVar10;
  int *piVar11;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int *local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  int local_3c;
  int *local_38;
  undefined4 local_34;
  int local_30;
  undefined4 *local_2c;
  int local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  iVar2 = FUN_01115860(param_2);
  local_28 = iVar2;
  iVar3 = FUN_01009750();
  local_30 = (iVar3 + 0xfU & 0xfffffff0) + param_1;
  do {
    if (iVar2 == 0) {
      return local_8;
    }
    local_18 = 0;
    iVar2 = FUN_010095e0();
    if (0 < iVar2) {
      do {
        puVar4 = (undefined4 *)FUN_010095f0(local_18);
        local_14 = (uint)*(byte *)(puVar4 + 3);
        piVar11 = (int *)((uint)*(ushort *)((int)puVar4 + 0x12) + param_1);
        (**(code **)(*(int *)*param_2 + 0xc))(&local_38,*puVar4);
        if ((local_38 == (int *)0x0) ||
           (iVar2 = (**(code **)(*local_38 + 0x68))(local_34), iVar2 == 0)) {
          local_60 = 0;
          local_5c = 0;
          local_58 = 0;
          local_54 = 0;
          if (local_38 != (int *)0x0) {
            (**(code **)(*local_38 + 100))(local_34,&local_60);
          }
          if (*(char *)(puVar4 + 3) == '\x16') {
            piVar11[2] = -0x80000000;
          }
          iVar2 = FUN_01009840(local_18);
          if ((iVar2 == 0) || (iVar2 = (**(code **)(*(int *)*param_2 + 0x6c))(), iVar2 == 0)) {
            if (((local_38 != (int *)0x0) && (local_54 != 0)) ||
               ((local_14 == 0x19 && ((*(ushort *)(puVar4 + 4) & 0x400) == 0)))) goto LAB_011179b5;
          }
          else {
            uVar5 = FUN_01016360();
            uVar6 = FUN_01009950(local_18);
            FUN_01015e80(piVar11,uVar6,uVar5);
          }
          goto LAB_01117f72;
        }
LAB_011179b5:
        iVar2 = FUN_01016320();
        if (iVar2 == 0) {
          iVar2 = 1;
          local_20 = (int *)FUN_01016360();
        }
        else {
          iVar2 = FUN_01016320();
          iVar3 = FUN_01016360();
          local_20 = (int *)(iVar3 / iVar2);
        }
        uVar7 = (ushort)~*(ushort *)(puVar4 + 4) >> 9 & 1;
        local_10 = uVar7;
        switch(local_14) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x19:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x20:
        case 0x21:
          if (iVar2 == 1) {
            iVar2 = param_3;
            uVar5 = FUN_01016300(uVar7,param_3);
            local_8 = (undefined4 *)FUN_01119190(piVar11,local_14,&local_38,uVar5,uVar7,iVar2);
          }
          else {
            piVar8 = (int *)(**(code **)(*local_38 + 0x28))(local_34);
            if (piVar8 != (int *)0x0) {
              *(short *)((int)piVar8 + 6) = *(short *)((int)piVar8 + 6) + 1;
              piVar8[2] = piVar8[2] + 1;
            }
            local_1c = 0;
            iVar2 = (**(code **)(*piVar8 + 0x14))();
            if (0 < iVar2) {
              do {
                if (local_8 != (undefined4 *)0x0) break;
                local_3c = local_1c;
                uVar7 = local_10;
                iVar2 = param_3;
                local_40 = piVar8;
                uVar5 = FUN_01016300(local_10,param_3);
                local_8 = (undefined4 *)FUN_01118d50(piVar11,local_14,&local_40,uVar5,uVar7,iVar2);
                local_1c = local_1c + 1;
                piVar11 = (int *)((int)piVar11 + (int)local_20);
                iVar2 = (**(code **)(*piVar8 + 0x14))();
              } while (local_1c < iVar2);
            }
            *(short *)((int)piVar8 + 6) = *(short *)((int)piVar8 + 6) + -1;
            piVar11 = piVar8 + 2;
            *piVar11 = *piVar11 + -1;
            if (*piVar11 == 0) {
              (**(code **)*piVar8)(1);
            }
          }
          break;
        default:
          goto switchD_01117a06_caseD_13;
        case 0x14:
          if (*(char *)((int)puVar4 + 0xd) == '\x02') {
            if (iVar2 == 1) {
              local_8 = (undefined4 *)FUN_01119190(piVar11,0x1d,&local_38,0,uVar7,param_3);
            }
            else {
              piVar8 = (int *)(**(code **)(*local_38 + 0x28))(local_34);
              if (piVar8 != (int *)0x0) {
                *(short *)((int)piVar8 + 6) = *(short *)((int)piVar8 + 6) + 1;
                piVar8[2] = piVar8[2] + 1;
              }
              iVar3 = 0;
              iVar2 = (**(code **)(*piVar8 + 0x14))();
              if (0 < iVar2) {
                do {
                  if (local_8 != (undefined4 *)0x0) break;
                  local_48 = piVar8;
                  local_44 = iVar3;
                  local_8 = (undefined4 *)FUN_01118d50(piVar11,0x1d,&local_48,0,local_10,param_3);
                  piVar11 = (int *)((int)piVar11 + (int)local_20);
                  iVar3 = iVar3 + 1;
                  iVar2 = (**(code **)(*piVar8 + 0x14))();
                } while (iVar3 < iVar2);
              }
              *(short *)((int)piVar8 + 6) = *(short *)((int)piVar8 + 6) + -1;
              piVar11 = piVar8 + 2;
              *piVar11 = *piVar11 + -1;
              if (*piVar11 == 0) {
                puVar4 = (undefined4 *)*piVar8;
                goto LAB_01117f66;
              }
            }
            break;
          }
          if (*(char *)((int)puVar4 + 0xd) != '\x19') break;
          if (iVar2 == 1) {
            piVar8 = (int *)(**(code **)(*local_38 + 0x34))();
            if (piVar8 != (int *)0x0) {
              *(short *)((int)piVar8 + 6) = *(short *)((int)piVar8 + 6) + 1;
              piVar8[2] = piVar8[2] + 1;
            }
            uVar7 = local_10;
            iVar2 = param_3;
            local_24 = piVar8;
            uVar5 = FUN_011158b0(puVar4,&local_24);
            local_8 = (undefined4 *)FUN_01119190(piVar11,local_14,&local_38,uVar5,uVar7,iVar2);
            if (piVar8 != (int *)0x0) {
              *(short *)((int)piVar8 + 6) = *(short *)((int)piVar8 + 6) + -1;
              piVar11 = piVar8 + 2;
              *piVar11 = *piVar11 + -1;
              if (*piVar11 == 0) {
                puVar4 = (undefined4 *)*piVar8;
                goto LAB_01117f66;
              }
            }
            break;
          }
          piVar8 = (int *)(**(code **)(*local_38 + 0x28))(local_34);
          if (piVar8 != (int *)0x0) {
            *(short *)((int)piVar8 + 6) = *(short *)((int)piVar8 + 6) + 1;
            piVar8[2] = piVar8[2] + 1;
          }
          local_1c = 0;
          iVar2 = (**(code **)(*piVar8 + 0x14))();
          if (0 < iVar2) {
            do {
              local_24 = piVar11;
              if (local_8 != (undefined4 *)0x0) break;
              puVar9 = (undefined4 *)(**(code **)(*piVar8 + 0x5c))(local_1c);
              if (puVar9 != (undefined4 *)0x0) {
                *(short *)((int)puVar9 + 6) = *(short *)((int)puVar9 + 6) + 1;
                puVar9[2] = puVar9[2] + 1;
              }
              local_4c = local_1c;
              uVar7 = local_10;
              iVar2 = param_3;
              local_50 = piVar8;
              local_8 = puVar9;
              uVar5 = FUN_011158b0(puVar4,&local_8);
              local_8 = (undefined4 *)FUN_01118d50(local_24,local_14,&local_50,uVar5,uVar7,iVar2);
              if (puVar9 != (undefined4 *)0x0) {
                *(short *)((int)puVar9 + 6) = *(short *)((int)puVar9 + 6) + -1;
                piVar11 = puVar9 + 2;
                *piVar11 = *piVar11 + -1;
                if (*piVar11 == 0) {
                  (**(code **)*puVar9)(1);
                }
              }
              local_24 = (int *)((int)local_24 + (int)local_20);
              iVar3 = local_1c + 1;
              local_1c = iVar3;
              iVar2 = (**(code **)(*piVar8 + 0x14))();
              piVar11 = local_24;
            } while (iVar3 < iVar2);
          }
          goto LAB_01117b3c;
        case 0x16:
        case 0x1a:
          if (*(int *)(local_c + 4) != 0) {
            if (*(char *)(puVar4 + 3) == '\x1a') {
              return (undefined4 *)1;
            }
            if (*(char *)((int)puVar4 + 0xd) == '\x1c') {
              return (undefined4 *)1;
            }
            if (*(char *)((int)puVar4 + 0xd) == '\x1d') {
              return (undefined4 *)1;
            }
          }
          piVar8 = (int *)(**(code **)(*local_38 + 0x28))(local_34);
          if (piVar8 != (int *)0x0) {
            *(short *)((int)piVar8 + 6) = *(short *)((int)piVar8 + 6) + 1;
            piVar8[2] = piVar8[2] + 1;
          }
          local_24 = piVar8;
          local_8 = (undefined4 *)FUN_01115b00(piVar11,puVar4,&local_24,param_3);
          goto LAB_01117b31;
        case 0x18:
        case 0x1f:
          local_8 = (undefined4 *)FUN_01115990(piVar11,puVar4,&local_38,local_28);
          break;
        case 0x1b:
          if (*(int *)(local_c + 4) != 0) {
            return (undefined4 *)1;
          }
          local_20 = (int *)(**(code **)(*local_38 + 0x28))(local_34);
          if (local_20 != (int *)0x0) {
            *(short *)((int)local_20 + 6) = *(short *)((int)local_20 + 6) + 1;
            local_20[2] = local_20[2] + 1;
          }
          piVar8 = (int *)(**(code **)(*local_20 + 0x5c))(0);
          if (piVar8 != (int *)0x0) {
            *(short *)((int)piVar8 + 6) = *(short *)((int)piVar8 + 6) + 1;
            piVar8[2] = piVar8[2] + 1;
          }
          local_24 = piVar8;
          iVar2 = FUN_011158b0(puVar4,&local_24);
          *piVar11 = iVar2;
          if (piVar8 != (int *)0x0) {
            *(short *)((int)piVar8 + 6) = *(short *)((int)piVar8 + 6) + -1;
            piVar1 = piVar8 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*piVar8)(1);
            }
          }
          iVar2 = (**(code **)(*local_20 + 0x14))();
          piVar11[2] = iVar2;
          local_1c = FUN_01009750();
          piVar8 = (int *)(piVar11[2] * local_1c);
          pvVar10 = TlsGetValue(DAT_01f8fc4c);
          local_24 = piVar8;
          iVar2 = (**(code **)(**(int **)((int)pvVar10 + 0x2c) + 0xc))(&local_24);
          piVar11[1] = iVar2;
          FUN_01015ea0(iVar2,0,local_24);
          iVar2 = piVar11[2] * local_1c;
          local_24 = (int *)piVar11[1];
          if (*(uint *)(param_3 + 0x10) == (*(uint *)(param_3 + 0x14) & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b8c,(int *)(param_3 + 0xc),8);
          }
          piVar8 = (int *)(*(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x10) * 8);
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
          iVar3 = 0;
          *piVar8 = (int)local_24;
          piVar8[1] = iVar2;
          if (0 < piVar11[2]) {
            iVar2 = 0;
            do {
              if (local_8 != (undefined4 *)0x0) break;
              local_2c = (undefined4 *)(**(code **)(*local_20 + 0x5c))(iVar3);
              if (local_2c != (undefined4 *)0x0) {
                *(short *)((int)local_2c + 6) = *(short *)((int)local_2c + 6) + 1;
                local_2c[2] = local_2c[2] + 1;
              }
              local_8 = (undefined4 *)FUN_01117880(piVar11[1] + iVar2,&local_2c,param_3);
              if (local_2c != (undefined4 *)0x0) {
                *(short *)((int)local_2c + 6) = *(short *)((int)local_2c + 6) + -1;
                piVar8 = local_2c + 2;
                *piVar8 = *piVar8 + -1;
                if (*piVar8 == 0) {
                  (**(code **)*local_2c)(1);
                }
              }
              iVar2 = iVar2 + local_1c;
              iVar3 = iVar3 + 1;
            } while (iVar3 < piVar11[2]);
          }
          *(short *)((int)local_20 + 6) = *(short *)((int)local_20 + 6) + -1;
          piVar11 = local_20 + 2;
          *piVar11 = *piVar11 + -1;
          if (*piVar11 == 0) {
            puVar4 = (undefined4 *)*local_20;
LAB_01117f66:
            (*(code *)*puVar4)(1);
          }
          break;
        case 0x22:
          if (*(int *)(local_c + 4) != 0) {
            if (*(char *)(puVar4 + 3) == '\x1a') {
              return (undefined4 *)1;
            }
            if (*(char *)((int)puVar4 + 0xd) == '\x1c') {
              return (undefined4 *)1;
            }
            if (*(char *)((int)puVar4 + 0xd) == '\x1d') {
              return (undefined4 *)1;
            }
          }
          piVar8 = (int *)(**(code **)(*local_38 + 0x28))(local_34);
          if (piVar8 != (int *)0x0) {
            *(short *)((int)piVar8 + 6) = *(short *)((int)piVar8 + 6) + 1;
            piVar8[2] = piVar8[2] + 1;
          }
          local_24 = piVar8;
          local_8 = (undefined4 *)FUN_01116bc0(piVar11,puVar4,&local_24,param_3,&local_30,param_1);
LAB_01117b31:
          if (piVar8 != (int *)0x0) {
LAB_01117b3c:
            *(short *)((int)piVar8 + 6) = *(short *)((int)piVar8 + 6) + -1;
            piVar11 = piVar8 + 2;
            *piVar11 = *piVar11 + -1;
            if (*piVar11 == 0) {
              (**(code **)*piVar8)(1);
            }
          }
        }
        if (local_8 == (undefined4 *)0x1) {
switchD_01117a06_caseD_13:
          return (undefined4 *)1;
        }
LAB_01117f72:
        iVar3 = local_18 + 1;
        local_18 = iVar3;
        iVar2 = FUN_010095e0();
      } while (iVar3 < iVar2);
    }
    local_28 = FUN_010093b0();
    iVar2 = local_28;
  } while( true );
}

// 01118010  FUN_01118010  size=11  [run]
void __fastcall FUN_01118010(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01118019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}

// 01118020  FUN_01118020  size=33  [run]
void __thiscall FUN_01118020(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  param_2 = (undefined4 *)*param_2;
  (**(code **)(*param_1 + 0xc))(&param_2);
  *puVar1 = param_2;
  return;
}

// 01118050  FUN_01118050  size=33  [run]
void __thiscall FUN_01118050(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  param_2 = (undefined4 *)*param_2;
  (**(code **)(*param_1 + 0xc))(&param_2);
  *puVar1 = param_2;
  return;
}

// 01118080  FUN_01118080  size=44  [run]
undefined4 __thiscall FUN_01118080(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 2);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)param_2 / 2;
  return uVar2;
}

// 011180B0  FUN_011180b0  size=50  [run]
undefined4 __thiscall FUN_011180b0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 011180F0  FUN_011180f0  size=52  [run]
undefined4 __thiscall FUN_011180f0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 8);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
  return uVar2;
}

// 01118130  FUN_01118130  size=52  [run]
undefined4 __thiscall FUN_01118130(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 8);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
  return uVar2;
}

// 01118170  FUN_01118170  size=44  [run]
undefined4 __thiscall FUN_01118170(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 2);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)param_2 / 2;
  return uVar2;
}

// 011181A0  FUN_011181a0  size=49  [run]
undefined4 __thiscall FUN_011181a0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 << 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  return uVar2;
}

// 011181E0  FUN_011181e0  size=58  [run]
undefined4 __thiscall FUN_011181e0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 0x30);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)param_2 / 0x30;
  return uVar2;
}

// 01118220  FUN_01118220  size=58  [run]
undefined4 __thiscall FUN_01118220(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 0x30);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)param_2 / 0x30;
  return uVar2;
}

// 01118260  FUN_01118260  size=58  [run]
undefined4 __thiscall FUN_01118260(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 0x30);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)param_2 / 0x30;
  return uVar2;
}

// 011182A0  FUN_011182a0  size=49  [run]
undefined4 __thiscall FUN_011182a0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 << 6);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0x3fU)) >> 6;
  return uVar2;
}

// 011182E0  FUN_011182e0  size=49  [run]
undefined4 __thiscall FUN_011182e0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 << 6);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0x3fU)) >> 6;
  return uVar2;
}

// 01118320  FUN_01118320  size=50  [run]
undefined4 __thiscall FUN_01118320(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 01118360  FUN_01118360  size=50  [run]
undefined4 __thiscall FUN_01118360(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 011183A0  FUN_011183a0  size=50  [run]
undefined4 __thiscall FUN_011183a0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 011184C0  FUN_011184c0  size=51  [run]
int __thiscall FUN_011184c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01118500  FUN_01118500  size=31  [run]
void FUN_01118500(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01118520  FUN_01118520  size=46  [run]
void FUN_01118520(undefined4 *param_1)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  puVar1 = param_1;
  param_1 = (undefined4 *)*param_1;
  (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *puVar1 = param_1;
  return;
}

// 01118550  FUN_01118550  size=46  [run]
void FUN_01118550(undefined4 *param_1)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  puVar1 = param_1;
  param_1 = (undefined4 *)*param_1;
  (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *puVar1 = param_1;
  return;
}

// 01118580  FUN_01118580  size=46  [run]
void FUN_01118580(undefined4 *param_1)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  puVar1 = param_1;
  param_1 = (undefined4 *)*param_1;
  (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *puVar1 = param_1;
  return;
}

// 011185B0  FUN_011185b0  size=46  [run]
void FUN_011185b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  puVar1 = param_1;
  param_1 = (undefined4 *)*param_1;
  (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *puVar1 = param_1;
  return;
}

// 011185E0  FUN_011185e0  size=57  [run]
undefined4 FUN_011185e0(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 2);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)param_1 / 2;
  return uVar3;
}

// 01118620  FUN_01118620  size=57  [run]
undefined4 FUN_01118620(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 2);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)param_1 / 2;
  return uVar3;
}

// 01118660  FUN_01118660  size=63  [run]
undefined4 FUN_01118660(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 4);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
  return uVar3;
}

// 011186A0  FUN_011186a0  size=63  [run]
undefined4 FUN_011186a0(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 4);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
  return uVar3;
}

// 011186E0  FUN_011186e0  size=65  [run]
undefined4 FUN_011186e0(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 8);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3;
  return uVar3;
}

// 01118730  FUN_01118730  size=65  [run]
undefined4 FUN_01118730(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 8);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3;
  return uVar3;
}

// 01118780  FUN_01118780  size=63  [run]
undefined4 FUN_01118780(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 4);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
  return uVar3;
}

// 011187C0  FUN_011187c0  size=63  [run]
undefined4 FUN_011187c0(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 4);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
  return uVar3;
}

// 01118800  FUN_01118800  size=57  [run]
undefined4 FUN_01118800(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 2);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)param_1 / 2;
  return uVar3;
}

// 01118840  FUN_01118840  size=62  [run]
undefined4 FUN_01118840(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 << 4);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 0xfU)) >> 4;
  return uVar3;
}

// 01118880  FUN_01118880  size=62  [run]
undefined4 FUN_01118880(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 << 4);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 0xfU)) >> 4;
  return uVar3;
}

// 011188C0  FUN_011188c0  size=71  [run]
undefined4 FUN_011188c0(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 0x30);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)param_1 / 0x30;
  return uVar3;
}

// 01118910  FUN_01118910  size=71  [run]
undefined4 FUN_01118910(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 0x30);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)param_1 / 0x30;
  return uVar3;
}

// 01118960  FUN_01118960  size=71  [run]
undefined4 FUN_01118960(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 0x30);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)param_1 / 0x30;
  return uVar3;
}

// 011189B0  FUN_011189b0  size=62  [run]
undefined4 FUN_011189b0(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 << 6);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 0x3fU)) >> 6;
  return uVar3;
}

// 011189F0  FUN_011189f0  size=62  [run]
undefined4 FUN_011189f0(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 << 6);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 0x3fU)) >> 6;
  return uVar3;
}

// 01118A30  FUN_01118a30  size=63  [run]
undefined4 FUN_01118a30(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 4);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
  return uVar3;
}

// 01118A70  FUN_01118a70  size=65  [run]
undefined4 FUN_01118a70(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 8);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 7U)) >> 3;
  return uVar3;
}

// 01118AC0  FUN_01118ac0  size=63  [run]
undefined4 FUN_01118ac0(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 4);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
  return uVar3;
}

// 01118B00  FUN_01118b00  size=63  [run]
undefined4 FUN_01118b00(int *param_1)

{
  int *piVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  piVar1 = param_1;
  param_1 = (int *)(*param_1 * 4);
  uVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 0xc))(&param_1);
  *piVar1 = (int)((int)param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
  return uVar3;
}

// 01118B50  FUN_01118b50  size=46  [run]
int __fastcall FUN_01118b50(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01118B80  FUN_01118b80  size=53  [run]
int __thiscall FUN_01118b80(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 01118BC0  FUN_01118bc0  size=64  [run]
void __thiscall FUN_01118bc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,(int *)(param_1 + 0xc),8);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 8);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}

// 01118C00  FUN_01118c00  size=48  [run]
int __fastcall FUN_01118c00(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 01118C30  FUN_01118c30  size=134  [run]
void __thiscall FUN_01118c30(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_14 [8];
  int local_c [2];
  
  local_c[0] = 0;
  local_c[1] = 0;
  if ((int *)*param_2 == (int *)0x0) {
    piVar3 = local_c;
  }
  else {
    piVar3 = (int *)(**(code **)(*(int *)*param_2 + 4))(local_14);
  }
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  if ((iVar1 != 0) || (iVar2 != 0)) {
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b8c,param_1,0x10);
    }
    piVar3 = (int *)(param_1[1] * 0x10 + *param_1);
    param_1[1] = param_1[1] + 1;
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    piVar3[2] = param_3;
    *(bool *)((int)piVar3 + 0xd) = param_4 != 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  return;
}

// 01118CC0  FUN_01118cc0  size=134  [run]
void __thiscall FUN_01118cc0(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_14 [8];
  int local_c [2];
  
  local_c[0] = 0;
  local_c[1] = 0;
  if ((int *)*param_2 == (int *)0x0) {
    piVar3 = local_c;
  }
  else {
    piVar3 = (int *)(**(code **)(*(int *)*param_2 + 4))(local_14);
  }
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  if ((iVar1 != 0) || (iVar2 != 0)) {
    if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
      FUN_0100a290(&PTR_vftable_018e9b8c,param_1,0x10);
    }
    piVar3 = (int *)(param_1[1] * 0x10 + *param_1);
    param_1[1] = param_1[1] + 1;
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    piVar3[2] = param_3;
    *(bool *)((int)piVar3 + 0xd) = param_4 != 0;
    *(undefined1 *)(piVar3 + 3) = 1;
  }
  return;
}

// 01118D50  FUN_01118d50  size=948  [run]
undefined4 __thiscall
FUN_01118d50(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 *puVar10;
  bool bVar11;
  float10 fVar12;
  undefined8 uVar13;
  
  puVar10 = param_4;
  switch(param_3) {
  case 1:
    iVar7 = (**(code **)(*(int *)*param_4 + 0x4c))(param_4[1]);
    *(bool *)param_2 = iVar7 != 0;
    return 0;
  case 2:
  case 3:
  case 4:
    uVar4 = (**(code **)(*(int *)*param_4 + 0x4c))(param_4[1]);
    *(undefined1 *)param_2 = uVar4;
    return 0;
  case 5:
  case 6:
    uVar5 = (**(code **)(*(int *)*param_4 + 0x4c))(param_4[1]);
    *(undefined2 *)param_2 = uVar5;
    return 0;
  case 7:
  case 8:
    fVar9 = (float)(**(code **)(*(int *)*param_4 + 0x4c))(param_4[1]);
    *param_2 = fVar9;
    return 0;
  case 9:
  case 10:
    uVar13 = (**(code **)(*(int *)*param_4 + 0x54))(param_4[1]);
    *(undefined8 *)param_2 = uVar13;
    return 0;
  case 0xb:
    fVar12 = (float10)(**(code **)(*(int *)*param_4 + 0x3c))(param_4[1]);
    *param_2 = (float)fVar12;
    return 0;
  case 0xc:
  case 0xd:
    pfVar6 = (float *)(**(code **)(*(int *)*param_4 + 0x2c))(param_4[1]);
    fVar9 = pfVar6[1];
    fVar2 = pfVar6[2];
    fVar3 = pfVar6[3];
    *param_2 = *pfVar6;
    param_2[1] = fVar9;
    param_2[2] = fVar2;
    param_2[3] = fVar3;
    return 0;
  case 0xe:
  case 0xf:
  case 0x10:
    pfVar6 = (float *)(**(code **)(*(int *)*param_4 + 0x2c))(param_4[1]);
    fVar9 = pfVar6[1];
    fVar2 = pfVar6[2];
    fVar3 = pfVar6[3];
    *param_2 = *pfVar6;
    param_2[1] = fVar9;
    param_2[2] = fVar2;
    param_2[3] = fVar3;
    fVar9 = pfVar6[5];
    fVar2 = pfVar6[6];
    fVar3 = pfVar6[7];
    param_2[4] = pfVar6[4];
    param_2[5] = fVar9;
    param_2[6] = fVar2;
    param_2[7] = fVar3;
    fVar9 = pfVar6[9];
    fVar2 = pfVar6[10];
    fVar3 = pfVar6[0xb];
    param_2[8] = pfVar6[8];
    param_2[9] = fVar9;
    param_2[10] = fVar2;
    param_2[0xb] = fVar3;
    return 0;
  case 0x11:
    pfVar6 = (float *)(**(code **)(*(int *)*param_4 + 0x2c))(param_4[1]);
    fVar9 = pfVar6[1];
    fVar2 = pfVar6[2];
    fVar3 = pfVar6[3];
    *param_2 = *pfVar6;
    param_2[1] = fVar9;
    param_2[2] = fVar2;
    param_2[3] = fVar3;
    fVar9 = pfVar6[5];
    fVar2 = pfVar6[6];
    fVar3 = pfVar6[7];
    param_2[4] = pfVar6[4];
    param_2[5] = fVar9;
    param_2[6] = fVar2;
    param_2[7] = fVar3;
    fVar9 = pfVar6[9];
    fVar2 = pfVar6[10];
    fVar3 = pfVar6[0xb];
    param_2[8] = pfVar6[8];
    param_2[9] = fVar9;
    param_2[10] = fVar2;
    param_2[0xb] = fVar3;
    fVar9 = pfVar6[0xd];
    fVar2 = pfVar6[0xe];
    fVar3 = pfVar6[0xf];
    param_2[0xc] = pfVar6[0xc];
    param_2[0xd] = fVar9;
    param_2[0xe] = fVar2;
    param_2[0xf] = fVar3;
    return 0;
  case 0x12:
    uVar8 = (**(code **)(*(int *)*param_4 + 0x2c))(param_4[1]);
    FUN_008fba60(uVar8);
    return 0;
  default:
    return 1;
  case 0x14:
    if (param_5 == (undefined4 *)0x0) {
      return 0;
    }
    puVar10 = (undefined4 *)(**(code **)(*(int *)*param_4 + 0x5c))(param_4[1]);
    if (puVar10 != (undefined4 *)0x0) {
      *(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + 1;
      puVar10[2] = puVar10[2] + 1;
    }
    param_4 = puVar10;
    FUN_01118c30(&param_4,param_2,param_6);
    break;
  case 0x19:
    if (param_5 == (undefined4 *)0x0) {
      return 0;
    }
    param_5 = (undefined4 *)(**(code **)(*(int *)*param_4 + 0x5c))(param_4[1]);
    if (param_5 != (undefined4 *)0x0) {
      *(short *)((int)param_5 + 6) = *(short *)((int)param_5 + 6) + 1;
      param_5[2] = param_5[2] + 1;
    }
    iVar7 = FUN_01117880(param_2,&param_5,param_7);
    bVar11 = iVar7 == 1;
    param_4._3_1_ = bVar11;
    if (param_5 != (undefined4 *)0x0) {
      *(short *)((int)param_5 + 6) = *(short *)((int)param_5 + 6) + -1;
      piVar1 = param_5 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*param_5)(1);
      }
    }
    if (param_4._3_1_ == '\0') {
      return 0;
    }
    return 1;
  case 0x1c:
    if (*(int *)(param_1 + 4) != 0) {
      return 1;
    }
    puVar10 = (undefined4 *)(**(code **)(*(int *)*param_4 + 0x5c))(param_4[1]);
    if (puVar10 != (undefined4 *)0x0) {
      *(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + 1;
      puVar10[2] = puVar10[2] + 1;
    }
    param_4 = puVar10;
    FUN_01118cc0(&param_4,param_2,param_6);
    break;
  case 0x1d:
    if (*(int *)(param_1 + 4) != 0) {
      return 1;
    }
    iVar7 = (**(code **)(*(int *)*param_4 + 0x34))(param_4[1]);
    if (iVar7 == 0) {
      *param_2 = 0.0;
      return 0;
    }
    uVar8 = (**(code **)(*(int *)*puVar10 + 0x34))(puVar10[1]);
    fVar9 = (float)FUN_01016080(uVar8);
    if (fVar9 != 0.0) {
      FUN_01118bc0(fVar9,0xffffffff);
    }
    *param_2 = fVar9;
    return 0;
  case 0x1e:
    fVar9 = (float)(**(code **)(*(int *)*param_4 + 0x54))(param_4[1]);
    *param_2 = fVar9;
    return 0;
  case 0x20:
    fVar12 = (float10)(**(code **)(*(int *)*param_4 + 0x3c))(param_4[1]);
    *(short *)param_2 = (short)((uint)(float)fVar12 >> 0x10);
    return 0;
  case 0x21:
    iVar7 = (**(code **)(*(int *)*param_4 + 0x34))(param_4[1]);
    if (iVar7 == 0) {
      *param_2 = 0.0;
      return 0;
    }
    uVar8 = (**(code **)(*(int *)*puVar10 + 0x34))(puVar10[1]);
    fVar9 = (float)FUN_01016080(uVar8);
    if (fVar9 != 0.0) {
      if (*(int *)(param_1 + 4) != 0) {
        *param_2 = (float)((int)fVar9 + 1);
        return 0;
      }
      FUN_01118bc0(fVar9,0xffffffff);
    }
    *param_2 = fVar9;
    return 0;
  }
  if (puVar10 != (undefined4 *)0x0) {
    *(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + -1;
    piVar1 = puVar10 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar10)(1);
    }
  }
  return 0;
}

// 01119190  FUN_01119190  size=926  [run]
undefined4 __thiscall
FUN_01119190(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 *puVar10;
  bool bVar11;
  float10 fVar12;
  undefined8 uVar13;
  
  puVar10 = param_4;
  switch(param_3) {
  case 1:
    iVar7 = (**(code **)(*(int *)*param_4 + 0x30))(param_4[1]);
    *(bool *)param_2 = iVar7 != 0;
    return 0;
  case 2:
  case 3:
  case 4:
    uVar4 = (**(code **)(*(int *)*param_4 + 0x30))(param_4[1]);
    *(undefined1 *)param_2 = uVar4;
    return 0;
  case 5:
  case 6:
    uVar5 = (**(code **)(*(int *)*param_4 + 0x30))(param_4[1]);
    *(undefined2 *)param_2 = uVar5;
    return 0;
  case 7:
  case 8:
  case 0x1e:
    fVar9 = (float)(**(code **)(*(int *)*param_4 + 0x30))(param_4[1]);
    *param_2 = fVar9;
    return 0;
  case 9:
  case 10:
    uVar13 = (**(code **)(*(int *)*param_4 + 0x30))(param_4[1]);
    *(undefined8 *)param_2 = uVar13;
    return 0;
  case 0xb:
    fVar12 = (float10)(**(code **)(*(int *)*param_4 + 0x3c))(param_4[1]);
    *param_2 = (float)fVar12;
    return 0;
  case 0xc:
  case 0xd:
    pfVar6 = (float *)(**(code **)(*(int *)*param_4 + 0x38))(param_4[1],4);
    fVar9 = pfVar6[1];
    fVar2 = pfVar6[2];
    fVar3 = pfVar6[3];
    *param_2 = *pfVar6;
    param_2[1] = fVar9;
    param_2[2] = fVar2;
    param_2[3] = fVar3;
    return 0;
  case 0xe:
  case 0xf:
  case 0x10:
    pfVar6 = (float *)(**(code **)(*(int *)*param_4 + 0x38))(param_4[1],0xc);
    fVar9 = pfVar6[1];
    fVar2 = pfVar6[2];
    fVar3 = pfVar6[3];
    *param_2 = *pfVar6;
    param_2[1] = fVar9;
    param_2[2] = fVar2;
    param_2[3] = fVar3;
    fVar9 = pfVar6[5];
    fVar2 = pfVar6[6];
    fVar3 = pfVar6[7];
    param_2[4] = pfVar6[4];
    param_2[5] = fVar9;
    param_2[6] = fVar2;
    param_2[7] = fVar3;
    fVar9 = pfVar6[9];
    fVar2 = pfVar6[10];
    fVar3 = pfVar6[0xb];
    param_2[8] = pfVar6[8];
    param_2[9] = fVar9;
    param_2[10] = fVar2;
    param_2[0xb] = fVar3;
    return 0;
  case 0x11:
    pfVar6 = (float *)(**(code **)(*(int *)*param_4 + 0x38))(param_4[1],0x10);
    fVar9 = pfVar6[1];
    fVar2 = pfVar6[2];
    fVar3 = pfVar6[3];
    *param_2 = *pfVar6;
    param_2[1] = fVar9;
    param_2[2] = fVar2;
    param_2[3] = fVar3;
    fVar9 = pfVar6[5];
    fVar2 = pfVar6[6];
    fVar3 = pfVar6[7];
    param_2[4] = pfVar6[4];
    param_2[5] = fVar9;
    param_2[6] = fVar2;
    param_2[7] = fVar3;
    fVar9 = pfVar6[9];
    fVar2 = pfVar6[10];
    fVar3 = pfVar6[0xb];
    param_2[8] = pfVar6[8];
    param_2[9] = fVar9;
    param_2[10] = fVar2;
    param_2[0xb] = fVar3;
    fVar9 = pfVar6[0xd];
    fVar2 = pfVar6[0xe];
    fVar3 = pfVar6[0xf];
    param_2[0xc] = pfVar6[0xc];
    param_2[0xd] = fVar9;
    param_2[0xe] = fVar2;
    param_2[0xf] = fVar3;
    return 0;
  case 0x12:
    uVar8 = (**(code **)(*(int *)*param_4 + 0x38))(param_4[1],0x10);
    FUN_008fba60(uVar8);
    return 0;
  default:
    return 1;
  case 0x14:
    if (param_5 == 0) {
      return 0;
    }
    puVar10 = (undefined4 *)(**(code **)(*(int *)*param_4 + 0x34))(param_4[1]);
    if (puVar10 != (undefined4 *)0x0) {
      *(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + 1;
      puVar10[2] = puVar10[2] + 1;
    }
    param_4 = puVar10;
    FUN_01118c30(&param_4,param_2,param_6);
    break;
  case 0x19:
    if (param_5 == 0) {
      return 0;
    }
    puVar10 = (undefined4 *)(**(code **)(*(int *)*param_4 + 0x34))(param_4[1]);
    if (puVar10 != (undefined4 *)0x0) {
      *(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + 1;
      puVar10[2] = puVar10[2] + 1;
    }
    param_4 = puVar10;
    iVar7 = FUN_01117880(param_2,&param_4,param_7);
    bVar11 = iVar7 == 1;
    param_4._3_1_ = bVar11;
    if (puVar10 != (undefined4 *)0x0) {
      *(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + -1;
      piVar1 = puVar10 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar10)(1);
      }
    }
    if (param_4._3_1_ == '\0') {
      return 0;
    }
    return 1;
  case 0x1c:
    if (*(int *)(param_1 + 4) != 0) {
      return 1;
    }
    puVar10 = (undefined4 *)(**(code **)(*(int *)*param_4 + 0x34))(param_4[1]);
    if (puVar10 != (undefined4 *)0x0) {
      *(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + 1;
      puVar10[2] = puVar10[2] + 1;
    }
    param_4 = puVar10;
    FUN_01118cc0(&param_4,param_2,param_6);
    break;
  case 0x1d:
    if (*(int *)(param_1 + 4) != 0) {
      return 1;
    }
    iVar7 = (**(code **)(*(int *)*param_4 + 0x2c))(param_4[1]);
    if (iVar7 == 0) {
      *param_2 = 0.0;
      return 0;
    }
    uVar8 = (**(code **)(*(int *)*puVar10 + 0x2c))(puVar10[1]);
    fVar9 = (float)FUN_01016080(uVar8);
    if (fVar9 != 0.0) {
      FUN_01118bc0(fVar9,0xffffffff);
    }
    *param_2 = fVar9;
    return 0;
  case 0x20:
    fVar12 = (float10)(**(code **)(*(int *)*param_4 + 0x3c))(param_4[1]);
    *(short *)param_2 = (short)((uint)(float)fVar12 >> 0x10);
    return 0;
  case 0x21:
    iVar7 = (**(code **)(*(int *)*param_4 + 0x2c))(param_4[1]);
    if (iVar7 == 0) {
      *param_2 = 0.0;
      return 0;
    }
    uVar8 = (**(code **)(*(int *)*puVar10 + 0x2c))(puVar10[1]);
    fVar9 = (float)FUN_01016080(uVar8);
    if (fVar9 != 0.0) {
      if (*(int *)(param_1 + 4) != 0) {
        *param_2 = (float)((int)fVar9 + 1);
        return 0;
      }
      FUN_01118bc0(fVar9,0xffffffff);
    }
    *param_2 = fVar9;
    return 0;
  }
  if (puVar10 != (undefined4 *)0x0) {
    *(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + -1;
    piVar1 = puVar10 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar10)(1);
    }
  }
  return 0;
}

// 011195C0  FUN_011195c0  size=54  [run]
bool __thiscall FUN_011195c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int *unaff_ESI;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  uVar1 = (**(code **)(*unaff_ESI + 0x10))(param_1);
  (**(code **)(*unaff_ESI + 0x10))(param_2);
  pcVar2 = (char *)FUN_010093e0((int)&uStack_8 + 3,uVar1);
  return *pcVar2 != '\0';
}

// 01119600  hkObjectResource::vf0C  size=3  [run]
undefined4 hkObjectResource::vf0C(void)

{
  return 0;
}

// 01119610  hkObjectResource::vf14  size=3  [run]
void hkObjectResource::vf14(void)

{
  return;
}

// 01119620  hkObjectResource::vf20  size=40  [run]
void __thiscall hkObjectResource::vf20(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_2,param_3);
  if (iVar1 != 0) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

// 01119650  hkObjectResource::vf1C  size=8  [run]
void hkObjectResource::vf1C(void)

{
  FUN_010093a0();
  return;
}

// 01119660  FUN_01119660  size=42  [run]
void __thiscall FUN_01119660(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_010060a0();
  }
  *(int *)(param_1 + 0x10) = param_2;
  return;
}

// 01119690  FUN_01119690  size=42  [run]
void __thiscall FUN_01119690(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_010060a0();
  }
  *(int *)(param_1 + 0x14) = param_2;
  return;
}

// 011196C0  hkObjectResource::hkObjectResource  size=102  [run]
undefined4 * __thiscall hkObjectResource::hkObjectResource(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  iVar1 = (**(code **)(*DAT_0209b610 + 0x10))();
  if (iVar1 != 0) {
    FUN_01006000();
  }
  param_1[4] = iVar1;
  iVar1 = (**(code **)(*DAT_0209b610 + 0xc))();
  if (iVar1 != 0) {
    FUN_01006000();
  }
  param_1[5] = iVar1;
  return param_1;
}

// 01119730  hkBaseObject::hkBaseObject_33  size=165  [run]
void __fastcall hkBaseObject::hkBaseObject_33(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined4 uStack_8;
  
  *param_1 = hkObjectResource::vftable;
  uStack_8 = param_1;
  if (param_1[3] != 0) {
    pcVar2 = (char *)FUN_010093e0((int)&uStack_8 + 3,param_1[3]);
    if (*pcVar2 == '\0') {
      if ((int *)param_1[5] != (int *)0x0) {
        iVar1 = *(int *)param_1[5];
        uVar3 = FUN_010093a0();
        (**(code **)(iVar1 + 0x14))(param_1[2],uVar3);
      }
      uVar4 = FUN_01009750();
      uVar3 = param_1[2];
      pvVar5 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 8))(uVar3,uVar4);
    }
    else {
      FUN_010060a0();
    }
  }
  if (param_1[5] != 0) {
    FUN_010060a0();
  }
  param_1[5] = 0;
  if (param_1[4] != 0) {
    FUN_010060a0();
  }
  param_1[4] = 0;
  *param_1 = vftable;
  return;
}

// 011197E0  hkObjectResource::vf18  size=84  [run]
undefined4 __thiscall hkObjectResource::vf18(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    piVar1 = *(int **)(param_1 + 0x10);
    uVar2 = FUN_010093a0();
    uVar2 = (**(code **)(*piVar1 + 0x10))(uVar2);
    (**(code **)(*piVar1 + 0x10))(param_2);
    pcVar3 = (char *)FUN_010093e0((int)&param_2 + 3,uVar2);
    if (*pcVar3 == '\0') {
      return 0;
    }
  }
  return *(undefined4 *)(param_1 + 8);
}

// 01119840  FUN_01119840  size=31  [run]
int * __thiscall FUN_01119840(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 01119870  FUN_01119870  size=11  [run]
void __fastcall FUN_01119870(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01119879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}

// 01119880  FUN_01119880  size=35  [run]
void FUN_01119880(undefined4 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,param_2);
  return;
}

// 011198B0  FUN_011198b0  size=38  [run]
void FUN_011198b0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 011198E0  hkObjectResource::vf00  size=52  [run]
int __thiscall hkObjectResource::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_33();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01119950  FUN_01119950  size=32  [run]
void __thiscall FUN_01119950(int param_1,int param_2)

{
  if (param_2 <= (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10)) + *(int *)(param_1 + 0x14)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_2;
  }
  return;
}

// 01119970  FUN_01119970  size=66  [run]
void __fastcall FUN_01119970(int param_1)

{
  char *pcVar1;
  
  for (pcVar1 = (char *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14));
      pcVar1 < *(char **)(param_1 + 0x10); pcVar1 = pcVar1 + 1) {
    if ((*pcVar1 == '\r') || (*pcVar1 == '\n')) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  *(int *)(param_1 + 0xc) = (int)*(char **)(param_1 + 0x10) - *(int *)(param_1 + 0x14);
  return;
}

// 011199C0  FUN_011199c0  size=19  [run]
void __thiscall FUN_011199c0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc) + param_2;
  return;
}

// 011199E0  FUN_011199e0  size=72  [run]
void __fastcall FUN_011199e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(param_1 + 8) = iVar1;
  if (0x400 < iVar1) {
    FUN_01015e90(*(int *)(param_1 + 0x14),iVar1 + *(int *)(param_1 + 0x14),
                 *(int *)(param_1 + 0x18) - iVar1);
    iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 8);
    *(int *)(param_1 + 0x18) = iVar1;
    *(undefined1 *)(iVar1 + *(int *)(param_1 + 0x14)) = 0;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 01119A30  hkParserBuffer::hkParserBuffer  size=133  [run]
undefined4 * __thiscall hkParserBuffer::hkParserBuffer(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  puVar1 = param_1 + 5;
  *puVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  param_1[8] = param_2;
  FUN_01006000();
  if ((param_1[7] & 0x3fffffff) == 0) {
    FUN_0100a210(&PTR_vftable_018e9b94,puVar1,1,1);
  }
  param_1[6] = 1;
  *(undefined1 *)*puVar1 = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[4] = *puVar1;
  return param_1;
}

// 01119AC0  hkBaseObject::hkBaseObject_21  size=79  [run]
void __fastcall hkBaseObject::hkBaseObject_21(undefined4 *param_1)

{
  *param_1 = hkParserBuffer::vftable;
  FUN_010060a0();
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] & 0x3fffffff);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01119B10  FUN_01119b10  size=165  [run]
int __thiscall FUN_01119b10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 < 0x100) {
    param_2 = 0x100;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x18);
  piVar1 = (int *)(param_1 + 0x14);
  iVar7 = iVar3 + param_2 + 1;
  uVar5 = *(uint *)(param_1 + 0x1c) & 0x3fffffff;
  if ((int)uVar5 < iVar7) {
    iVar6 = uVar5 * 2;
    if (iVar6 <= iVar7) {
      iVar6 = iVar7;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,iVar6,1);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2 + 1;
  iVar7 = (**(code **)(**(int **)(param_1 + 0x20) + 0x10))(*piVar1 + iVar3,param_2);
  *(undefined1 *)(*piVar1 + iVar7 + iVar4) = 0;
  *(int *)(param_1 + 0x18) = iVar7 + iVar4;
  if (*piVar1 != iVar2) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + (*piVar1 - iVar2);
  }
  return (iVar7 + iVar4) - iVar4;
}

// 01119BC0  FUN_01119bc0  size=94  [run]
void __thiscall FUN_01119bc0(int param_1,undefined1 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  iVar1 = (*(int *)(param_1 + 0x18) - iVar2) + *(int *)(param_1 + 0x14);
  if (iVar1 < param_4) {
    FUN_01119b10(param_4 - iVar1);
    iVar2 = *(int *)(param_1 + 0x10);
    if ((*(int *)(param_1 + 0x18) - iVar2) + *(int *)(param_1 + 0x14) < param_4) {
      *param_2 = 0;
      return;
    }
  }
  iVar2 = FUN_01015bd0(iVar2,param_3,param_4);
  *param_2 = iVar2 == 0;
  return;
}

// 01119C20  FUN_01119c20  size=40  [run]
undefined4 FUN_01119c20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01015cd0(param_2);
  FUN_01119bc0(param_1,param_2,uVar1);
  return param_1;
}

// 01119C50  FUN_01119c50  size=86  [run]
void __thiscall FUN_01119c50(int param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  uVar1 = param_3;
  iVar2 = FUN_01015cd0(param_3);
  pcVar3 = (char *)FUN_01119bc0((int)&param_3 + 3,uVar1,iVar2);
  if (*pcVar3 != '\0') {
    if (iVar2 <= (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10)) + *(int *)(param_1 + 0x14)) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar2;
    }
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 01119CB0  FUN_01119cb0  size=68  [run]
int __thiscall FUN_01119cb0(int *param_1,int param_2)

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
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,1);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2;
}

// 01119D00  FUN_01119d00  size=38  [run]
void FUN_01119d00(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01119D30  FUN_01119d30  size=46  [run]
int __thiscall FUN_01119d30(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10)) + *(int *)(param_1 + 0x14);
  if (iVar1 < param_2) {
    FUN_01119b10(param_2 - iVar1);
    iVar1 = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x10)) + *(int *)(param_1 + 0x14);
  }
  return iVar1;
}

// 01119D60  hkParserBuffer::vf00  size=52  [run]
int __thiscall hkParserBuffer::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_21();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01119DA0  FUN_01119da0  size=20  [run]
void __thiscall FUN_01119da0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 01119DC0  FUN_01119dc0  size=20  [run]
void __thiscall FUN_01119dc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}

// 01119E20  FUN_01119e20  size=20  [run]
void FUN_01119e20(undefined4 param_1,char param_2)

{
  *(bool *)param_1 = (byte)(param_2 - 0x30U) < 10;
  return;
}

// 01119E50  FUN_01119e50  size=126  [run]
undefined4 FUN_01119e50(undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 local_24 [32];
  
  pcVar2 = (char *)*param_1;
  pcVar3 = (char *)param_1[1];
  if (pcVar3 != pcVar2 && -1 < (int)pcVar3 - (int)pcVar2) {
    pcVar4 = pcVar2;
    if (*pcVar2 == '-') {
      pcVar4 = pcVar2 + 1;
    }
    if (pcVar4 < pcVar3) {
      cVar1 = *pcVar4;
      while ((byte)(cVar1 - 0x30U) < 10) {
        pcVar4 = pcVar4 + 1;
        if (pcVar3 <= pcVar4) {
          FUN_01015cb0(local_24,pcVar2,(int)pcVar3 - (int)pcVar2);
          local_24[(int)pcVar3 - (int)pcVar2] = 0;
          uVar5 = FUN_01015d10(local_24,0);
          *param_2 = uVar5;
          return 0;
        }
        cVar1 = *pcVar4;
      }
    }
  }
  return 1;
}

// 01119ED0  FUN_01119ed0  size=158  [run]
undefined4 FUN_01119ed0(undefined4 *param_1,uint *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  pcVar2 = (char *)*param_1;
  iVar3 = param_1[1] - (int)pcVar2;
  if ((0 < iVar3) && (iVar3 < 0x21)) {
    if (*pcVar2 != 'x') {
      uVar5 = FUN_0111ab80(param_1,param_2);
      return uVar5;
    }
    if (iVar3 == 9) {
      uVar6 = 0;
      iVar3 = 0;
      do {
        cVar1 = pcVar2[iVar3 + 1];
        if ((byte)(cVar1 - 0x30U) < 10) {
          uVar4 = (int)cVar1 - 0x30;
        }
        else if ((byte)(cVar1 + 0xbfU) < 6) {
          uVar4 = (int)cVar1 - 0x37;
        }
        else {
          if (5 < (byte)(cVar1 + 0x9fU)) {
            return 1;
          }
          uVar4 = (int)cVar1 - 0x57;
        }
        iVar3 = iVar3 + 1;
        uVar6 = uVar6 << 4 | uVar4;
      } while (iVar3 < 8);
      *param_2 = uVar6;
      return 0;
    }
  }
  return 1;
}

// 01119F70  FUN_01119f70  size=42  [run]
void FUN_01119f70(undefined1 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_2;
  while( true ) {
    if ((char *)param_2[1] <= pcVar1) {
      *param_1 = 0;
      return;
    }
    if (*pcVar1 == '&') break;
    pcVar1 = pcVar1 + 1;
  }
  *param_1 = 1;
  return;
}

// 01119FA0  FUN_01119fa0  size=496  [run]
undefined4 FUN_01119fa0(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_14;
  undefined1 local_13;
  
  FUN_010262a0();
  pcVar1 = (char *)param_1[1];
  pcVar3 = (char *)*param_1;
joined_r0x01119fbe:
  do {
    while( true ) {
      if (pcVar1 <= pcVar3) {
        return 0;
      }
      pcVar2 = pcVar3;
      if (*pcVar3 == '&') break;
      do {
        pcVar2 = pcVar2 + 1;
        if (pcVar1 <= pcVar2) break;
      } while (*pcVar2 != '&');
      FUN_01026640(pcVar3,(int)pcVar2 - (int)pcVar3);
      pcVar3 = pcVar2;
    }
    iVar6 = (int)pcVar1 - (int)pcVar3;
    if ((iVar6 < 5) || (iVar4 = FUN_01015bd0(pcVar3 + 1,&DAT_017dae54,4), iVar4 != 0)) {
      if (3 < iVar6) {
        iVar4 = FUN_01015bd0(pcVar3 + 1,&DAT_017dae50,3);
        if (iVar4 == 0) {
          FUN_01026640(&DAT_016cc4e0,1);
          pcVar3 = pcVar3 + 4;
          goto joined_r0x01119fbe;
        }
        iVar4 = FUN_01015bd0(pcVar3 + 1,&DAT_017dae4c,3);
        if (iVar4 == 0) {
          FUN_01026640(&DAT_016cc48c,1);
          pcVar3 = pcVar3 + 4;
          goto joined_r0x01119fbe;
        }
      }
      if (5 < iVar6) {
        iVar4 = FUN_01015bd0(pcVar3 + 1,"quot;",5);
        if (iVar4 == 0) {
          FUN_01026640(&DAT_016cc5a8,1);
          pcVar3 = pcVar3 + 6;
          goto joined_r0x01119fbe;
        }
        iVar4 = FUN_01015bd0(pcVar3 + 1,"apos;",5);
        if (iVar4 == 0) {
          FUN_01026640(&DAT_017015cc,1);
          pcVar3 = pcVar3 + 6;
          goto joined_r0x01119fbe;
        }
      }
      if (((pcVar3[1] != '#') || (9 < (byte)(pcVar3[2] - 0x30U))) ||
         (pcVar2 = pcVar3 + 2, iVar6 < 4)) {
        return 1;
      }
      while( true ) {
        if (pcVar1 <= pcVar2) {
          return 1;
        }
        if (9 < (byte)(*pcVar2 - 0x30U)) break;
        pcVar2 = pcVar2 + 1;
      }
      if (pcVar1 <= pcVar2) {
        return 1;
      }
      if (*pcVar2 != ';') {
        return 1;
      }
      iVar6 = (int)pcVar2 - (int)pcVar3;
      if (0x10 < iVar6) {
        return 1;
      }
      FUN_01015cb0(&local_14,pcVar3 + 2,iVar6 + -2);
      (&stack0xffffffea)[iVar6] = 0;
      uVar5 = FUN_01015cf0(&local_14,0);
      if (0xff < uVar5) {
        return 1;
      }
      local_14 = (undefined1)uVar5;
      local_13 = 0;
      FUN_01026640(&local_14,0xffffffff);
      pcVar3 = pcVar2 + 1;
      goto joined_r0x01119fbe;
    }
    FUN_01026640(&DAT_017012a0,1);
    pcVar3 = pcVar3 + 5;
  } while( true );
}

// 0111A190  FUN_0111a190  size=70  [run]
undefined4 __thiscall FUN_0111a190(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_01025be0(param_2,0xffffffff);
  if (iVar2 < 0) {
    return 1;
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x68) + iVar2 * 8);
  iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40);
  iVar2 = piVar1[1];
  *param_3 = *piVar1 + iVar3;
  param_3[1] = iVar2 + iVar3;
  return 0;
}

// 0111A1E0  FUN_0111a1e0  size=58  [run]
void __thiscall FUN_0111a1e0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (0 < *(int *)(param_1 + 0x6c)) {
    iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x40);
    piVar1 = *(int **)(param_1 + 0x68);
    *param_2 = *piVar1 + iVar2;
    param_2[1] = piVar1[1] + iVar2;
    return;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}

// 0111A220  FUN_0111a220  size=24  [run]
void __thiscall FUN_0111a220(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  *param_2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x44);
  param_2[1] = iVar1;
  return;
}

// 0111A240  FUN_0111a240  size=126  [run]
void FUN_0111a240(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_ESI;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = FUN_0111a1e0(&local_c);
  FUN_014454d0(param_1,uVar1);
  iVar2 = 0;
  if (0 < *(int *)(unaff_ESI + 0x1c)) {
    do {
      uVar1 = *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + iVar2 * 4);
      puVar4 = &DAT_016cc434;
      uVar3 = uVar1;
      FUN_01018d00(&DAT_01663284);
      FUN_01018d00(uVar3);
      FUN_01018d00(puVar4);
      local_c = 0;
      local_8 = 0;
      FUN_0111a190(uVar1,&local_c);
      FUN_014454d0(param_1,&local_c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_ESI + 0x1c));
  }
  return;
}

// 0111A2C0  FUN_0111a2c0  size=104  [run]
undefined4 FUN_0111a2c0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_14;
  char *local_c;
  char *local_8;
  
  local_c = (char *)0x0;
  local_8 = (char *)0x0;
  iVar1 = FUN_0111a190(param_1,&local_c);
  if (((iVar1 == 0) && (*local_c == '\"')) &&
     (local_8 = (char *)((int)local_8 + -1), *local_8 == '\"')) {
    local_c = local_c + 1;
    local_14 = 0;
    uVar2 = FUN_01119e50(&local_c,&local_14);
    *param_2 = (undefined4)local_14;
    return uVar2;
  }
  return 1;
}

// 0111A330  FUN_0111a330  size=35  [run]
void FUN_0111a330(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_c [8];
  
  iVar1 = FUN_0111a190(param_2,local_c);
  *(bool *)param_1 = iVar1 == 0;
  return;
}

// 0111A360  FUN_0111a360  size=87  [run]
undefined4 FUN_0111a360(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *local_c;
  char *local_8;
  
  local_c = (char *)0x0;
  local_8 = (char *)0x0;
  iVar1 = FUN_0111a190(param_1,&local_c);
  if (((iVar1 == 0) && (*local_c == '\"')) &&
     (local_8 = (char *)((int)local_8 + -1), *local_8 == '\"')) {
    local_c = local_c + 1;
    uVar2 = FUN_01119ed0(&local_c,param_2);
    return uVar2;
  }
  return 1;
}

// 0111A3C0  FUN_0111a3c0  size=71  [run]
void __fastcall FUN_0111a3c0(int param_1)

{
  int *piVar1;
  
  if (*(uint *)(param_1 + 0x6c) == (*(uint *)(param_1 + 0x70) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x68),8);
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x6c) * 8);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  *piVar1 = *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40);
  piVar1[1] = (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x4c)) - *(int *)(param_1 + 0x40);
  return;
}

// 0111A410  hkXmlStreamParser::hkXmlStreamParser  size=108  [run]
undefined4 * __thiscall hkXmlStreamParser::hkXmlStreamParser(undefined4 *param_1,undefined4 param_2)

{
  uint local_8;
  
  local_8 = (uint)param_1 & 0xffffff00;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_01025830(local_8);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x80000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80000000;
  hkXmlLexAnalyzer::hkXmlLexAnalyzer(param_2);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x80000000;
  param_1[0x1d] = 6;
  return param_1;
}

// 0111A480  FUN_0111a480  size=260  [run]
void __fastcall FUN_0111a480(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  FUN_01025720();
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (1 < *(int *)(param_1 + 0x6c)) {
    piVar2 = (int *)(*(int *)(param_1 + 0x68) + 8);
    iVar5 = (*(int *)(param_1 + 0x6c) - 2U >> 1) + 1;
    do {
      piVar1 = piVar2 + 1;
      iVar4 = *piVar2;
      piVar2 = piVar2 + 4;
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 1 + (*piVar1 - iVar4);
    } while (iVar5 != 0);
  }
  uVar3 = *(uint *)(param_1 + 0x2c) & 0x3fffffff;
  if ((int)uVar3 < iVar6) {
    iVar5 = uVar3 * 2;
    if (iVar5 <= iVar6) {
      iVar5 = iVar6;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_1 + 0x24),iVar5,1);
  }
  *(int *)(param_1 + 0x28) = iVar6;
  iVar6 = *(int *)(param_1 + 0x24);
  local_8 = 1;
  if (1 < *(int *)(param_1 + 0x6c)) {
    do {
      piVar2 = (int *)(*(int *)(param_1 + 0x68) + local_8 * 8);
      iVar5 = *piVar2;
      iVar4 = piVar2[1] - iVar5;
      FUN_01015cb0(iVar6,*(int *)(param_1 + 0x4c) + iVar5 + *(int *)(param_1 + 0x40),iVar4);
      *(undefined1 *)(iVar4 + iVar6) = 0;
      if (*(uint *)(param_1 + 0x1c) == (*(uint *)(param_1 + 0x20) & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x18),4);
      }
      *(int *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c) * 4) = iVar6;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      FUN_01025470(iVar6,local_8 + 1);
      local_8 = local_8 + 2;
      iVar6 = iVar4 + 1 + iVar6;
    } while (local_8 < *(int *)(param_1 + 0x6c));
  }
  return;
}

// 0111A590  FUN_0111a590  size=187  [run]
char FUN_0111a590(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_0111bb00();
  if (iVar1 == 0xb) {
    iVar1 = FUN_0111bb00();
    if (iVar1 == 8) {
      FUN_0111a3c0();
      iVar1 = FUN_0111bb00();
      return (-(iVar1 != 6) & 3U) + 3;
    }
  }
  else {
    bVar2 = iVar1 == 8;
    while (bVar2) {
      FUN_0111a3c0();
      iVar1 = FUN_0111bb00();
      if (iVar1 == 6) {
        FUN_0111a480();
        return '\x01';
      }
      if (iVar1 != 8) {
        if (iVar1 != 0xb) {
          return '\x06';
        }
        iVar1 = FUN_0111bb00();
        FUN_0111a480();
        return (iVar1 != 6) * '\x04' + '\x02';
      }
      FUN_0111a3c0();
      iVar1 = FUN_0111bb00();
      if (iVar1 != 9) {
        return '\x06';
      }
      iVar1 = FUN_0111bb00();
      bVar2 = iVar1 == 10;
    }
  }
  return '\x06';
}

// 0111A650  FUN_0111a650  size=95  [run]
undefined4 FUN_0111a650(void)

{
  int iVar1;
  
  iVar1 = FUN_0111bb00();
  if (iVar1 == 8) {
    while( true ) {
      FUN_0111a3c0();
      iVar1 = FUN_0111bb00();
      if (iVar1 == 7) {
        FUN_0111a480();
        return 0;
      }
      if (iVar1 != 8) break;
      FUN_0111a3c0();
      iVar1 = FUN_0111bb00();
      if (iVar1 != 9) {
        return 6;
      }
      iVar1 = FUN_0111bb00();
      if (iVar1 != 10) {
        return 6;
      }
    }
  }
  return 6;
}

// 0111A6B0  FUN_0111a6b0  size=118  [run]
undefined4 __fastcall FUN_0111a6b0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_01025720();
  FUN_011199e0();
  *(undefined4 *)(param_1 + 0x6c) = 0;
  uVar1 = FUN_0111bb00();
  while (uVar1 < 6) {
    switch(uVar1) {
    case 0:
      uVar2 = FUN_0111a590();
      return uVar2;
    case 1:
      uVar2 = FUN_0111a650();
      return uVar2;
    case 2:
      return 4;
    case 3:
      return 5;
    case 4:
      uVar1 = FUN_0111bb00();
      break;
    case 5:
      return 7;
    }
  }
  return 6;
}

// 0111A740  FUN_0111a740  size=13  [run]
void __fastcall FUN_0111a740(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0111a6b0();
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  return;
}

// 0111A750  FUN_0111a750  size=209  [run]
void FUN_0111a750(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  do {
    iVar1 = FUN_0111a740();
    switch(iVar1) {
    case 0:
      FUN_01018d00(&DAT_017dae70);
      FUN_0111a240(param_1);
      FUN_01018d00(&DAT_017dae6c);
      break;
    case 1:
    case 2:
      FUN_01018d00(&DAT_016cc4e0);
      FUN_0111a240(param_1);
      if (iVar1 == 2) {
        FUN_01018d00(&DAT_01701298);
      }
      FUN_01018d00(&DAT_017da730);
      break;
    case 3:
      puVar4 = &DAT_017da730;
      uVar3 = FUN_0111a1e0(local_c);
      uVar2 = FUN_01018d00(&DAT_017d9f6c);
      FUN_014454d0(uVar2,uVar3,puVar4);
      FUN_01018d00(puVar4);
      break;
    case 4:
    case 5:
      uVar3 = FUN_0111a220(local_14);
      FUN_014454d0(param_1,uVar3);
      break;
    case 6:
    case 7:
      return;
    }
  } while( true );
}

// 0111A850  FUN_0111a850  size=15  [run]
int __thiscall FUN_0111a850(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0111A880  FUN_0111a880  size=15  [run]
int __thiscall FUN_0111a880(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0111A890  FUN_0111a890  size=15  [run]
int __thiscall FUN_0111a890(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 0111A8E0  FUN_0111a8e0  size=30  [run]
void __thiscall FUN_0111a8e0(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
  *param_2 = iVar1 + param_3;
  param_2[1] = iVar1 + param_4;
  return;
}

// 0111A900  FUN_0111a900  size=24  [run]
void __thiscall FUN_0111a900(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *param_2 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14);
  param_2[1] = iVar1;
  return;
}

// 0111A930  FUN_0111a930  size=30  [run]
void __thiscall FUN_0111a930(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x10);
  *param_2 = iVar1 + param_3;
  param_2[1] = iVar1 + param_4;
  return;
}

// 0111A970  FUN_0111a970  size=51  [run]
int __thiscall FUN_0111a970(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 0111A9B0  FUN_0111a9b0  size=46  [run]
int __fastcall FUN_0111a9b0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 0111A9E0  FUN_0111a9e0  size=38  [run]
void FUN_0111a9e0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0111AA10  hkXmlStreamParser::vf00  size=52  [run]
int __thiscall hkXmlStreamParser::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_211();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0111AA50  FUN_0111aa50  size=15  [run]
float10 FUN_0111aa50(int param_1)

{
  return (float10)(float)(&DAT_017daec8)[param_1];
}

// 0111AA60  FUN_0111aa60  size=81  [run]
uint FUN_0111aa60(uint param_1)

{
  if ((param_1 & 0x7f800000) != 0x7f800000) {
    return 5;
  }
  if (param_1 == 0x7f800000) {
    return 1;
  }
  if (param_1 == 0xff800000) {
    return 0;
  }
  if (param_1 == 0xffc00000) {
    return 4;
  }
  return ~(param_1 >> 0x1f) & 1 | 2;
}

// 0111AAC0  FUN_0111aac0  size=75  [run]
void FUN_0111aac0(float param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0111aa60();
  if (iVar1 == 5) {
    FUN_010262e0(param_2,&DAT_017daee0,(double)param_1);
    return;
  }
  FUN_01026140();
  return;
}

// 0111AB10  FUN_0111ab10  size=110  [run]
void FUN_0111ab10(float param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0111aa60(param_1);
  if (iVar1 == 5) {
    FUN_010262e0(param_2,&DAT_017daee0,(double)param_1);
    iVar1 = FUN_01025c80(0x2e,0,0x7fffffff);
    if (iVar1 == -1) {
      FUN_010267c0();
    }
    return;
  }
  FUN_01026140((&PTR_s__1__INF00_017daeb0)[iVar1]);
  return;
}

// 0111AB80  FUN_0111ab80  size=173  [run]
undefined4 FUN_0111ab80(undefined4 *param_1,float *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  float10 fVar5;
  undefined1 local_48 [68];
  
  pcVar3 = (char *)param_1[1];
  pcVar1 = (char *)*param_1;
  pcVar2 = pcVar1;
  if (0x40 < (int)pcVar3 - (int)pcVar1) {
    return 1;
  }
  while( true ) {
    if (pcVar3 <= pcVar2) {
      FUN_01015cb0(local_48,pcVar1,(int)pcVar3 - (int)pcVar1);
      local_48[(int)pcVar3 - (int)pcVar1] = 0;
      fVar5 = (float10)FUN_01015d30(local_48);
      *param_2 = (float)fVar5;
      return 0;
    }
    if (*pcVar2 == '#') break;
    pcVar2 = pcVar2 + 1;
  }
  iVar4 = 0;
  do {
    pcVar3 = (char *)FUN_014455c0((int)&param_1 + 3,(&PTR_s__1__INF00_017daeb0)[iVar4]);
    if (*pcVar3 != '\0') {
      *param_2 = (float)(&DAT_017daec8)[iVar4];
      return 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  return 1;
}

// 0111AC30  FUN_0111ac30  size=83  [run]
void FUN_0111ac30(undefined1 *param_1,float param_2,float param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_0111aa60(param_2);
  uVar2 = FUN_0111aa60(param_3);
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if (iVar1 != (int)uVar2) {
    *param_1 = 0;
    return;
  }
  if ((iVar1 == 5) && (param_2 != param_3)) {
    *param_1 = 0;
    return;
  }
  *param_1 = 1;
  return;
}

// 0111AC90  FUN_0111ac90  size=26  [run]
void __thiscall
FUN_0111ac90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0111ACB0  FUN_0111acb0  size=9  [run]
void FUN_0111acb0(void)

{
  FUN_01010160();
  return;
}

// 0111ACF0  FUN_0111acf0  size=18  [run]
int __thiscall FUN_0111acf0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 0111AD20  FUN_0111ad20  size=11  [run]
int FUN_0111ad20(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0111AD40  FUN_0111ad40  size=29  [run]
void __thiscall FUN_0111ad40(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 0111AD60  FUN_0111ad60  size=11  [run]
int FUN_0111ad60(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0111ADA0  FUN_0111ada0  size=25  [run]
void FUN_0111ada0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0111ADC0  FUN_0111adc0  size=44  [run]
void FUN_0111adc0(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      param_1 = (undefined8 *)((int)param_1 + 0xc);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0111AE00  FUN_0111ae00  size=121  [run]
undefined4 FUN_0111ae00(int param_1)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = FUN_01005ce0(*(undefined4 *)((int)pvVar2 + 0x2c),param_1);
  iVar1 = *(int *)(iVar3 + -4 + param_1);
  if (iVar1 != 0) {
    iVar3 = iVar3 + iVar1 * -8 + -4 + param_1;
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        if (*(int *)(iVar3 + iVar4 * 8) != 0) {
          FUN_0102cc00(*(undefined4 *)(iVar3 + 4 + iVar4 * 8));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar2 + 0x2c),param_1);
  return 0;
}

// 0111AE80  FUN_0111ae80  size=1382  [run]
int FUN_0111ae80(int param_1,undefined4 *param_2,int param_3,int *param_4,int *param_5,
                undefined4 param_6)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  LPVOID pvVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 local_88;
  int local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_2c = 0;
  local_28 = 0;
  local_24 = 0x80000000;
  hkOstream::hkOstream_3(&local_2c);
  iVar11 = (int)param_2;
  iVar9 = param_1;
  local_70 = 0x80000000;
  local_64 = 0x80000000;
  local_58 = 0x80000000;
  local_4c = 0x80000000;
  local_8 = 0x80000000;
  local_78 = 0;
  local_74 = 0;
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_10 = 0;
  local_c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0xffffffff;
  FUN_0100a290(&PTR_vftable_018e9b94,&local_10,8);
  piVar10 = (int *)(local_10 + local_c * 8);
  *piVar10 = iVar9;
  piVar10[1] = iVar11;
  local_c = local_c + 1;
  FUN_010100a0(&PTR_vftable_018e9b94,iVar9,1);
  local_44 = 0;
  local_40 = 0;
  local_3c = 0xffffffff;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x80000000;
  FUN_010e6cc0(&DAT_01b1dc08);
  FUN_010e6cc0(&DAT_01b1dc08);
  hkObjectCopier::hkObjectCopier(&param_2,&param_1,param_6);
  param_2 = (undefined4 *)0x0;
  if (0 < (int)local_c) {
    do {
      uVar8 = *(undefined4 *)(local_10 + (int)param_2 * 8);
      uVar3 = *(undefined4 *)(local_10 + 4 + (int)param_2 * 8);
      FUN_010100a0(&PTR_vftable_018e9b94,uVar8,local_28);
      iVar9 = local_68;
      pcVar2 = (char *)FUN_01009770((int)&param_1 + 3);
      if (*pcVar2 != '\0') {
        uVar3 = (**(code **)(*param_4 + 0x14))(uVar8);
      }
      iVar11 = local_28;
      uVar4 = FUN_010093a0();
      if (local_18 == (local_14 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_1c,0xc);
      }
      puVar1 = (undefined8 *)(local_1c + local_18 * 0xc);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = CONCAT44(uVar8,iVar11);
        *(undefined4 *)(puVar1 + 1) = uVar4;
      }
      local_18 = local_18 + 1;
      _anon_B1A2C86F::PackfileObjectCopier::vf0C(uVar8,uVar3,local_88,uVar3,&local_78);
      local_20 = iVar9;
      if (iVar9 < local_68) {
        iVar9 = iVar9 << 4;
        do {
          iVar11 = *(int *)(iVar9 + 4 + local_6c);
          if ((iVar11 != 0) && (iVar7 = *(int *)(iVar9 + 8 + local_6c), iVar7 != 0)) {
            if ((param_3 == 0) || (iVar5 = FUN_01010160(iVar11,0), iVar5 == 0)) {
              iVar5 = FUN_01010160(iVar11,0);
              if (iVar5 == 0) {
                if (local_c == (local_8 & 0x3fffffff)) {
                  FUN_0100a290(&PTR_vftable_018e9b94,&local_10,8);
                }
                piVar10 = (int *)(local_10 + local_c * 8);
                *piVar10 = iVar11;
                piVar10[1] = iVar7;
                local_c = local_c + 1;
                FUN_010100a0(&PTR_vftable_018e9b94,iVar11,1);
              }
            }
            else {
              *(int *)(iVar9 + 4 + local_6c) = iVar5;
            }
          }
          local_20 = local_20 + 1;
          iVar9 = iVar9 + 0x10;
        } while (local_20 < local_68);
      }
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while ((int)param_2 < (int)local_c);
  }
  iVar9 = local_28;
  if (local_28 == 0) {
    hkBaseObject::hkBaseObject_138();
    local_18 = 0;
    if ((local_14 & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,(local_14 & 0x3fffffff) * 0xc);
    }
    local_1c = 0;
    local_14 = 0x80000000;
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
    local_c = 0;
    if ((local_8 & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 8);
    }
    local_10 = 0;
    local_8 = 0x80000000;
    FUN_010f79a0();
    hkBaseObject::hkBaseObject_38();
    local_28 = 0;
    if ((local_24 & 0x80000000) == 0) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,local_24 & 0x3fffffff);
    }
    return 0;
  }
  iVar11 = 4;
  if (param_5 != (int *)0x0) {
    iVar11 = local_18 * 8 + 4;
  }
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  iVar9 = FUN_01005cb0(*(undefined4 *)((int)pvVar6 + 0x2c),iVar9 + iVar11);
  param_2 = (undefined4 *)(local_28 + iVar9);
  FUN_01015e80(iVar9,local_2c,local_28);
  iVar11 = 0;
  if (0 < local_74) {
    do {
      iVar5 = iVar11 * 8;
      iVar7 = iVar11 * 8;
      iVar11 = iVar11 + 1;
      *(int *)(iVar9 + *(int *)(local_78 + iVar7)) = *(int *)(local_78 + 4 + iVar5) + iVar9;
    } while (iVar11 < local_74);
  }
  local_20 = 0;
  if (0 < local_68) {
    param_1 = 0;
    do {
      iVar11 = *(int *)(param_1 + 4 + local_6c);
      iVar7 = FUN_01010160(iVar11,0xffffffff);
      if (iVar7 != -1) {
        iVar11 = iVar7 + iVar9;
      }
      *(int *)(iVar9 + *(int *)(param_1 + local_6c)) = iVar11;
      local_20 = local_20 + 1;
      param_1 = param_1 + 0x10;
    } while (local_20 < local_68);
  }
  if ((param_3 != 0) && (0 < (int)local_18)) {
    iVar7 = 0;
    iVar11 = 0;
    do {
      FUN_010100a0(&PTR_vftable_018e9b94,*(undefined4 *)(iVar7 + 4 + local_1c),
                   *(int *)(iVar7 + local_1c) + iVar9);
      iVar11 = iVar11 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar11 < (int)local_18);
  }
  iVar11 = 0;
  if (param_5 == (int *)0x0) {
    *param_2 = 0;
  }
  else {
    if (0 < (int)local_18) {
      param_1 = 0;
      do {
        piVar10 = (int *)(param_1 + local_1c);
        (**(code **)(*param_5 + 0x10))(*piVar10 + iVar9,piVar10[2]);
        uVar8 = (**(code **)(*param_5 + 0x1c))(piVar10[2]);
        param_1 = param_1 + 0xc;
        param_2[iVar11 * 2] = uVar8;
        param_2[iVar11 * 2 + 1] = *piVar10 + iVar9;
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)local_18);
    }
    param_2[local_18 * 2] = local_18;
  }
  hkBaseObject::hkBaseObject_138();
  local_18 = 0;
  if ((local_14 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,(local_14 & 0x3fffffff) * 0xc);
  }
  local_1c = 0;
  local_14 = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  local_c = 0;
  if ((local_8 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 8);
  }
  local_10 = 0;
  local_8 = 0x80000000;
  FUN_010f79a0();
  hkBaseObject::hkBaseObject_38();
  local_28 = 0;
  if ((local_24 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,local_24 & 0x3fffffff);
  }
  return iVar9;
}

// 0111B3F0  FUN_0111b3f0  size=74  [run]
void __thiscall FUN_0111b3f0(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0111B440  FUN_0111b440  size=64  [run]
void __thiscall FUN_0111b440(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111B480  FUN_0111b480  size=75  [run]
void __thiscall FUN_0111b480(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0111B4D0  FUN_0111b4d0  size=64  [run]
void __fastcall FUN_0111b4d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111B510  FUN_0111b510  size=64  [run]
void __fastcall FUN_0111b510(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111B550  FUN_0111b550  size=29  [run]
char __fastcall FUN_0111b550(int param_1)

{
  char cVar1;
  
  cVar1 = **(char **)(param_1 + 0x10);
  if (cVar1 == '\0') {
    FUN_01119b10(0x100);
    cVar1 = **(char **)(param_1 + 0x10);
  }
  return cVar1;
}

// 0111B570  FUN_0111b570  size=38  [run]
void FUN_0111b570(undefined1 *param_1,char param_2)

{
  if (((param_2 < 'a') || ('z' < param_2)) && (0x19 < (byte)(param_2 + 0xbfU))) {
    *param_1 = 0;
    return;
  }
  *param_1 = 1;
  return;
}

// 0111B5A0  FUN_0111b5a0  size=40  [run]
void FUN_0111b5a0(undefined1 *param_1,char param_2)

{
  if ((((param_2 != ' ') && (param_2 != '\t')) && (param_2 != '\r')) && (param_2 != '\n')) {
    *param_1 = 0;
    return;
  }
  *param_1 = 1;
  return;
}

// 0111B5D0  FUN_0111b5d0  size=8  [run]
undefined4 FUN_0111b5d0(void)

{
  return 0xc;
}

// 0111B5E0  hkXmlLexAnalyzer::hkXmlLexAnalyzer  size=47  [run]
undefined4 * __thiscall hkXmlLexAnalyzer::hkXmlLexAnalyzer(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  hkParserBuffer::hkParserBuffer(param_2);
  param_1[0xd] = 0;
  return param_1;
}

// 0111B610  FUN_0111b610  size=108  [run]
int __fastcall FUN_0111b610(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char local_8 [4];
  
  builtin_strncpy(local_8,"-->",4);
LAB_0111b620:
  iVar3 = 0;
  do {
    iVar4 = iVar3;
    pcVar2 = *(char **)(param_1 + 0x18);
    if ((char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= pcVar2) {
      FUN_01119b10(0x100);
      pcVar2 = *(char **)(param_1 + 0x18);
      if ((char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= pcVar2)
      goto LAB_0111b669;
    }
    cVar1 = *pcVar2;
    *(char **)(param_1 + 0x18) = pcVar2 + 1;
    if (cVar1 == '\0') {
LAB_0111b669:
      iVar3 = FUN_0111b5d0("Badly formed comment");
      return iVar3;
    }
    if (local_8[iVar4] != cVar1) goto LAB_0111b620;
    iVar3 = iVar4 + 1;
    if (iVar4 + 1 == 3) {
      return iVar4 + 2;
    }
  } while( true );
}

// 0111B680  FUN_0111b680  size=99  [run]
undefined4 __fastcall FUN_0111b680(int param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  do {
    bVar2 = false;
LAB_0111b687:
    pcVar3 = *(char **)(param_1 + 0x18);
    if ((char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= pcVar3) {
      FUN_01119b10(0x100);
      pcVar3 = *(char **)(param_1 + 0x18);
      if ((char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= pcVar3)
      goto LAB_0111b6d3;
    }
    cVar1 = *pcVar3;
    *(char **)(param_1 + 0x18) = pcVar3 + 1;
    if (cVar1 == '\0') {
LAB_0111b6d3:
      uVar4 = FUN_0111b5d0("Didn\'t hit terminating \"");
      return uVar4;
    }
  } while (bVar2);
  if (cVar1 == '\\') {
    bVar2 = true;
  }
  else if (cVar1 == '\"') {
    return 10;
  }
  goto LAB_0111b687;
}

// 0111B6F0  FUN_0111b6f0  size=109  [run]
undefined4 __fastcall FUN_0111b6f0(int param_1)

{
  char cVar1;
  uint uVar2;
  
LAB_0111b6f4:
  cVar1 = **(char **)(param_1 + 0x18);
  if (cVar1 == '\0') {
    FUN_01119b10(0x100);
    cVar1 = **(char **)(param_1 + 0x18);
  }
  if ((((cVar1 < 'a') || ('z' < cVar1)) && (0x19 < (byte)(cVar1 + 0xbfU))) &&
     ((9 < (byte)(cVar1 - 0x30U) && (cVar1 != '_')))) {
    return 8;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((uint)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= uVar2) goto code_r0x0111b737;
  goto LAB_0111b750;
code_r0x0111b737:
  FUN_01119b10(0x100);
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < (uint)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c))) {
LAB_0111b750:
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
  }
  goto LAB_0111b6f4;
}

// 0111B760  FUN_0111b760  size=97  [run]
undefined4 __fastcall FUN_0111b760(int param_1)

{
  char cVar1;
  uint uVar2;
  
LAB_0111b764:
  cVar1 = **(char **)(param_1 + 0x18);
  if (cVar1 == '\0') {
    FUN_01119b10(0x100);
    cVar1 = **(char **)(param_1 + 0x18);
  }
  if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) {
    return 3;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((uint)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= uVar2) goto code_r0x0111b79b;
  goto LAB_0111b7b4;
code_r0x0111b79b:
  FUN_01119b10(0x100);
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < (uint)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c))) {
LAB_0111b7b4:
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
  }
  goto LAB_0111b764;
}

// 0111B7D0  FUN_0111b7d0  size=124  [run]
undefined4 __fastcall FUN_0111b7d0(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((uint)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c)) < *(uint *)(param_1 + 0x18)) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) - 1;
  }
  while( true ) {
    pcVar2 = *(char **)(param_1 + 0x18);
    if ((char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= pcVar2) {
      FUN_01119b10(0x100);
      pcVar2 = *(char **)(param_1 + 0x18);
      if ((char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= pcVar2) {
        return 2;
      }
    }
    cVar1 = *pcVar2;
    *(char **)(param_1 + 0x18) = pcVar2 + 1;
    if (cVar1 == '\0') {
      return 2;
    }
    if (cVar1 == '<') break;
    if ((((cVar1 == ' ') || (cVar1 == '\t')) || (cVar1 == '\r')) || (cVar1 == '\n')) {
      pcVar3 = (char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c));
LAB_0111b83f:
      if (pcVar3 < pcVar2 + 1) {
        *(char **)(param_1 + 0x18) = pcVar2;
      }
      return 2;
    }
  }
  pcVar3 = (char *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c));
  goto LAB_0111b83f;
}

// 0111B850  FUN_0111b850  size=306  [run]
undefined4 __fastcall FUN_0111b850(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  
  do {
    pcVar1 = *(char **)(param_1 + 0x18);
    if (pcVar1 < (char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c))) {
LAB_0111b87f:
      cVar3 = *pcVar1;
      *(char **)(param_1 + 0x18) = pcVar1 + 1;
    }
    else {
      FUN_01119b10(0x100);
      pcVar1 = *(char **)(param_1 + 0x18);
      if (pcVar1 < (char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c))) goto LAB_0111b87f;
      cVar3 = '\0';
    }
    switch(cVar3) {
    case '\0':
      return 5;
    default:
      if ((((cVar3 < 'a') || ('z' < cVar3)) && (0x19 < (byte)(cVar3 + 0xbfU))) && (cVar3 != '_')) {
        uVar2 = FUN_0111b5d0("Unexpected token");
        return uVar2;
      }
      uVar2 = FUN_0111b6f0();
      return uVar2;
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      FUN_0111b760();
      FUN_01119970();
      break;
    case '\"':
      uVar2 = FUN_0111b680();
      return uVar2;
    case '/':
      return 0xb;
    case '=':
      return 9;
    case '>':
      if ((*(uint *)(param_1 + 0x34) & 2) != 0) {
        uVar2 = FUN_0111b5d0("Expecting ?> to close <? section");
        return uVar2;
      }
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffe;
      return 6;
    case '?':
      if ((*(byte *)(param_1 + 0x34) & 2) != 0) {
        pcVar1 = *(char **)(param_1 + 0x18);
        if (pcVar1 < (char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c))) {
LAB_0111b8dd:
          cVar3 = *pcVar1;
          *(char **)(param_1 + 0x18) = pcVar1 + 1;
          if (cVar3 == '>') {
            *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfffffffc;
            return 7;
          }
        }
        else {
          FUN_01119b10(0x100);
          pcVar1 = *(char **)(param_1 + 0x18);
          if (pcVar1 < (char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)))
          goto LAB_0111b8dd;
        }
        if ((uint)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x1c)) < *(uint *)(param_1 + 0x18))
        {
          *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) - 1;
        }
      }
    }
  } while( true );
}

// 0111B9F0  FUN_0111b9f0  size=260  [run]
undefined4 __fastcall FUN_0111b9f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pcVar4 = *(char **)(param_1 + 0x18);
  uStack_8 = param_1;
  if ((char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= pcVar4) {
    FUN_01119b10(0x100);
    pcVar4 = *(char **)(param_1 + 0x18);
    if ((char *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= pcVar4) {
      return 5;
    }
  }
  cVar1 = *pcVar4;
  *(char **)(param_1 + 0x18) = pcVar4 + 1;
  if (cVar1 == '\0') {
    return 5;
  }
  if (cVar1 != '<') {
    if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) {
      uVar2 = FUN_0111b7d0();
      return uVar2;
    }
    uVar2 = FUN_0111b760();
    return uVar2;
  }
  cVar1 = pcVar4[1];
  if (cVar1 == '\0') {
    FUN_01119b10(0x100);
    cVar1 = **(char **)(param_1 + 0x18);
  }
  if (cVar1 != '?') {
    pcVar4 = (char *)FUN_01119c50((int)&uStack_8 + 3,&DAT_017da33c);
    if (*pcVar4 == '\0') {
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1;
      return 0;
    }
    uVar2 = FUN_0111b610();
    return uVar2;
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if ((uint)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= uVar3) {
    FUN_01119b10(0x100);
    uVar3 = *(uint *)(param_1 + 0x18);
    if ((uint)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c)) <= uVar3) goto LAB_0111baab;
  }
  *(uint *)(param_1 + 0x18) = uVar3 + 1;
LAB_0111baab:
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 3;
  return 1;
}

// 0111BB00  FUN_0111bb00  size=30  [run]
void __fastcall FUN_0111bb00(int param_1)

{
  FUN_01119970();
  if ((*(byte *)(param_1 + 0x34) & 1) != 0) {
    FUN_0111b850();
    return;
  }
  FUN_0111b9f0();
  return;
}

// 0111BB50  FUN_0111bb50  size=53  [run]
undefined1 __fastcall FUN_0111bb50(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 0x10);
  if ((undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14)) <= puVar2) {
    FUN_01119b10(0x100);
    puVar2 = *(undefined1 **)(param_1 + 0x10);
    if ((undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x14)) <= puVar2) {
      return 0;
    }
  }
  uVar1 = *puVar2;
  *(undefined1 **)(param_1 + 0x10) = puVar2 + 1;
  return uVar1;
}

// 0111BB90  FUN_0111bb90  size=38  [run]
void FUN_0111bb90(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0111BBC0  hkXmlLexAnalyzer::vf00  size=61  [run]
undefined4 * __thiscall hkXmlLexAnalyzer::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_21();
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0111BC00  FUN_0111bc00  size=11  [run]
uint FUN_0111bc00(uint param_1)

{
  return param_1 >> 0x18;
}

// 0111BC10  FUN_0111bc10  size=23  [run]
float10 FUN_0111bc10(uint param_1)

{
  return (float10)(param_1 >> 0x18) * (float10)0.003921569;
}

// 0111BC30  FUN_0111bc30  size=11  [run]
uint FUN_0111bc30(uint param_1)

{
  return param_1 >> 0x10;
}

// 0111BC40  FUN_0111bc40  size=26  [run]
float10 FUN_0111bc40(uint param_1)

{
  return (float10)(param_1 >> 0x10 & 0xff) * (float10)0.003921569;
}

// 0111BC60  FUN_0111bc60  size=11  [run]
uint FUN_0111bc60(uint param_1)

{
  return param_1 >> 8;
}

// 0111BC70  FUN_0111bc70  size=26  [run]
float10 FUN_0111bc70(uint param_1)

{
  return (float10)(param_1 >> 8 & 0xff) * (float10)0.003921569;
}

// 0111BC90  FUN_0111bc90  size=8  [run]
undefined1 FUN_0111bc90(undefined1 param_1)

{
  return param_1;
}

// 0111BCA0  FUN_0111bca0  size=21  [run]
float10 FUN_0111bca0(byte param_1)

{
  return (float10)param_1 * (float10)0.003921569;
}

// 0111BD00  FUN_0111bd00  size=85  [run]
void __thiscall
FUN_0111bd00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 8))
                (param_2,param_3,param_4,param_5,param_6);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111BD60  FUN_0111bd60  size=81  [run]
void __thiscall
FUN_0111bd60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 4))
                (param_2,param_3,param_4,param_5);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111BDC0  FUN_0111bdc0  size=85  [run]
void __thiscall
FUN_0111bdc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0xc))
                (param_2,param_3,param_4,param_5,param_6);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111BE20  FUN_0111be20  size=77  [run]
void __thiscall FUN_0111be20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0x10))(param_2,param_3,param_4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111BE70  FUN_0111be70  size=77  [run]
void __thiscall FUN_0111be70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0x1c))(param_2,param_3,param_4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111BEC0  FUN_0111bec0  size=77  [run]
void __thiscall FUN_0111bec0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0x18))(param_2,param_3,param_4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111BF10  FUN_0111bf10  size=75  [run]
void __thiscall FUN_0111bf10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      FUN_0111dbb0(param_2,param_3,param_4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111BF60  FUN_0111bf60  size=89  [run]
void __thiscall
FUN_0111bf60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0x20))
                (param_2,param_3,param_4,param_5,param_6,param_7);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111BFC0  FUN_0111bfc0  size=87  [run]
void __thiscall
FUN_0111bfc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      FUN_0111dd30(param_2,param_3,param_4,param_5,param_6,param_7);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111C020  FUN_0111c020  size=77  [run]
void __thiscall FUN_0111c020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0x24))(param_2,param_3,param_4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111C070  FUN_0111c070  size=116  [run]
void __thiscall
FUN_0111c070(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0x28))
                (param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111C0F0  FUN_0111c0f0  size=81  [run]
void __thiscall
FUN_0111c0f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0x2c))
                (param_2,param_3,param_4,param_5);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111C150  FUN_0111c150  size=85  [run]
void __thiscall
FUN_0111c150(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0x30))
                (param_2,param_3,param_4,param_5,param_6);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111C1B0  FUN_0111c1b0  size=89  [run]
void __thiscall
FUN_0111c1b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0x34))
                (param_2,param_3,param_4,param_5,param_6,param_7);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111C720  FUN_0111c720  size=87  [run]
void __thiscall
FUN_0111c720(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      FUN_0111de60(param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111C780  FUN_0111c780  size=91  [run]
void __thiscall
FUN_0111c780(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      FUN_0111e1c0(param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111C7E0  FUN_0111c7e0  size=81  [run]
void __thiscall
FUN_0111c7e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0x38))
                (param_2,param_3,param_4,param_5);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111C840  FUN_0111c840  size=85  [run]
void __thiscall
FUN_0111c840(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0x3c))
                (param_2,param_3,param_4,param_5,param_6);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111C8A0  FUN_0111c8a0  size=85  [run]
void __thiscall
FUN_0111c8a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0x4c))
                (param_2,param_3,param_4,param_5,param_6);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111C900  FUN_0111c900  size=81  [run]
void __thiscall
FUN_0111c900(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar1 * 4) + 0x48))
                (param_2,param_3,param_4,param_5);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111C960  FUN_0111c960  size=99  [run]
void __thiscall FUN_0111c960(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 8);
    while (*piVar2 != param_2) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if (*(int *)(param_1 + 0xc) <= iVar1) {
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
        return;
      }
    }
    if (-1 < iVar1) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      if (*(int *)(param_1 + 0xc) != iVar1) {
        *(undefined4 *)(*(int *)(param_1 + 8) + iVar1 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4);
      }
    }
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111C9D0  FUN_0111c9d0  size=32  [run]
void __fastcall FUN_0111c9d0(int param_1)

{
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0xc) = 0;
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111CC30  FUN_0111cc30  size=82  [run]
void __thiscall FUN_0111cc30(int param_1,undefined4 param_2)

{
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 8),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4) = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x14));
  return;
}

// 0111CC90  hkDebugDisplay::hkDebugDisplay  size=96  [run]
undefined4 * __fastcall hkDebugDisplay::hkDebugDisplay(undefined4 *param_1)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x18);
  if (iVar2 != 0) {
    uVar3 = FUN_01015ac0(1000);
    param_1[5] = uVar3;
    return param_1;
  }
  param_1[5] = 0;
  return param_1;
}

// 0111CCF0  hkBaseObject::hkBaseObject_75  size=116  [run]
void __fastcall hkBaseObject::hkBaseObject_75(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  LPVOID pvVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[5];
  *param_1 = hkDebugDisplay::vftable;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(lpCriticalSection,0x18);
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0111D7B0  FUN_0111d7b0  size=15  [run]
int __thiscall FUN_0111d7b0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0111D7D0  FUN_0111d7d0  size=52  [run]
int __thiscall FUN_0111d7d0(int *param_1,int *param_2,int param_3,int param_4)

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

// 0111D830  FUN_0111d830  size=34  [run]
void FUN_0111d830(int param_1,int param_2,undefined4 *param_3)

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

// 0111D860  FUN_0111d860  size=26  [run]
void __thiscall FUN_0111d860(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0111D880  FUN_0111d880  size=11  [run]
void FUN_0111d880(undefined1 (*param_1) [16])

{
  undefined1 in_XMM0 [16];
  
  rsqrtps(in_XMM0,*param_1);
  return;
}

// 0111D8C0  FUN_0111d8c0  size=28  [run]
void __thiscall FUN_0111d8c0(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 0111D8E0  FUN_0111d8e0  size=57  [run]
void __thiscall FUN_0111d8e0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0111D920  FUN_0111d920  size=61  [run]
void __thiscall FUN_0111d920(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111D960  FUN_0111d960  size=27  [run]
void FUN_0111d960(undefined1 (*param_1) [16])

{
  rsqrtps(*param_1,*param_1);
  return;
}

// 0111D980  FUN_0111d980  size=37  [run]
void FUN_0111d980(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0111D9B0  FUN_0111d9b0  size=58  [run]
void __thiscall FUN_0111d9b0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0111D9F0  FUN_0111d9f0  size=61  [run]
void __fastcall FUN_0111d9f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111DA30  FUN_0111da30  size=32  [run]
void __thiscall FUN_0111da30(undefined1 (*param_1) [16],uint *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = *param_1;
  auVar2 = rsqrtps(auVar1,auVar1);
  *param_2 = ~-(uint)(auVar1._0_4_ <= 0.0) & auVar2._0_4_;
  param_2[1] = ~-(uint)(auVar1._4_4_ <= 0.0) & auVar2._4_4_;
  param_2[2] = ~-(uint)(auVar1._8_4_ <= 0.0) & auVar2._8_4_;
  param_2[3] = ~-(uint)(auVar1._12_4_ <= 0.0) & auVar2._12_4_;
  return;
}

// 0111DA50  FUN_0111da50  size=61  [run]
void __fastcall FUN_0111da50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111DA90  FUN_0111da90  size=59  [run]
void __thiscall FUN_0111da90(float *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  fVar1 = *param_1 * *param_1;
  fVar2 = param_1[1] * param_1[1];
  fVar3 = param_1[2] * param_1[2];
  auVar4._0_4_ = fVar2 + fVar1 + fVar3;
  auVar4._4_4_ = fVar2 + fVar1 + fVar3;
  auVar4._8_4_ = fVar2 + fVar1 + fVar3;
  auVar4._12_4_ = fVar2 + fVar1 + fVar3;
  auVar5 = rsqrtps(auVar4,auVar4);
  *param_2 = ~-(uint)(auVar4._0_4_ <= 0.0) & auVar5._0_4_;
  param_2[1] = ~-(uint)(auVar4._4_4_ <= 0.0) & auVar5._4_4_;
  param_2[2] = ~-(uint)(auVar4._8_4_ <= 0.0) & auVar5._8_4_;
  param_2[3] = ~-(uint)(auVar4._12_4_ <= 0.0) & auVar5._12_4_;
  return;
}

// 0111DAD0  FUN_0111dad0  size=38  [run]
void FUN_0111dad0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0111DB40  hkDebugDisplay::vf00  size=52  [run]
int __thiscall hkDebugDisplay::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_75();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0111DBB0  FUN_0111dbb0  size=86  [run]
void __thiscall FUN_0111dbb0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_90 [64];
  undefined1 local_50 [64];
  
  FUN_0100a520(local_50);
  FUN_0102ab50(local_50);
  (**(code **)(*param_1 + 0x18))(local_90,param_3,param_4);
  return;
}

// 0111DD30  FUN_0111dd30  size=294  [run]
undefined4
FUN_0111dd30(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined1 local_a0 [64];
  undefined1 local_60 [64];
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  local_18 = *(int *)((int)pvVar2 + 0xc);
  uVar3 = param_4 * 0x40 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < local_18 + uVar3)
     ) {
    local_18 = FUN_0100b780(uVar3);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = local_18 + uVar3;
  }
  if (0 < param_4) {
    local_1c = local_18;
    local_20 = param_4;
    do {
      FUN_0100a520(local_60);
      FUN_0102ab50(local_60);
      local_1c = local_1c + 0x40;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    local_20 = 0;
  }
  FUN_0100a520(local_60);
  FUN_0102ab50(local_60);
  iVar1 = local_18;
  local_14 = (int *)(**(code **)(*local_14 + 0x20))
                              (param_1,param_2,local_18,param_4,local_a0,param_6);
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  if ((((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar3 + iVar1 == *(int *)((int)pvVar2 + 0xc)))
     && (*(int *)((int)pvVar2 + 0x14) != iVar1)) {
    *(int *)((int)pvVar2 + 0xc) = iVar1;
    return local_14;
  }
  FUN_0100b9b0(iVar1,uVar3);
  return local_14;
}

// 0111DE60  FUN_0111de60  size=860  [run]
void __thiscall
FUN_0111de60(int *param_1,ushort param_2,short *param_3,int param_4,int param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16];
  undefined1 auVar9 [16];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float local_4c;
  uint local_48;
  float local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  short *local_18;
  undefined8 *local_14;
  
  if (0 < (short)param_2) {
    local_18 = param_3;
    local_48 = (uint)param_2;
    local_14 = (undefined8 *)(param_4 + 0x10);
    do {
      FUN_01007150(param_5,local_14 + -2);
      local_4c = 1.0;
      if (*local_18 == -1) {
        local_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        uStack_64 = 0;
        FUN_01007150(param_5,&local_70);
        (**(code **)(*param_1 + 0x30))(&local_30,&local_70,param_6,param_7,param_8);
        local_60 = local_4c;
      }
      else {
        FUN_01007150(param_5,*local_18 * 0x30 + param_4);
        (**(code **)(*param_1 + 0x30))(&local_30,&local_b0,param_6,param_7,param_8);
        fVar5 = (local_30 - local_b0) * (local_30 - local_b0);
        fVar6 = (fStack_2c - fStack_ac) * (fStack_2c - fStack_ac);
        fVar7 = (fStack_28 - fStack_a8) * (fStack_28 - fStack_a8);
        fVar8 = fVar6 + fVar5 + fVar7;
        auVar9._4_4_ = fVar6 + fVar5 + fVar7;
        auVar9._0_4_ = fVar8;
        auVar9._8_4_ = fVar6 + fVar5 + fVar7;
        auVar9._12_4_ = fVar6 + fVar5 + fVar7;
        auVar9 = rsqrtps(in_XMM3,auVar9);
        fVar6 = auVar9._0_4_;
        fVar5 = 10.0;
        local_60 = (float)(~-(uint)(fVar8 <= 0.0) &
                          (uint)((3.0 - fVar6 * fVar8 * fVar6) * fVar6 * 0.5 * fVar8));
        if ((10.0 < local_60) || (fVar5 = 0.1, local_60 < 0.1)) {
          local_60 = fVar5;
        }
      }
      fVar4 = fStack_24;
      fVar3 = fStack_28;
      fVar8 = fStack_2c;
      fVar7 = local_30;
      uVar1 = *(undefined8 *)(param_5 + 0x10);
      fVar5 = *(float *)((int)local_14 + 0xc);
      uStack_88 = *(undefined8 *)(param_5 + 0x18);
      uVar2 = *local_14;
      local_90._0_4_ = (float)uVar1;
      local_90._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      uStack_98 = local_14[1];
      local_a0._0_4_ = (float)uVar2;
      local_a0._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      fVar6 = *(float *)(param_5 + 0x1c);
      local_60 = local_60 * 0.25;
      local_80 = (local_90._4_4_ * (float)uStack_98 - (float)uStack_88 * local_a0._4_4_) +
                 (float)local_a0 * fVar6 + (float)local_90 * fVar5;
      fStack_7c = ((float)uStack_88 * (float)local_a0 - (float)local_90 * (float)uStack_98) +
                  local_a0._4_4_ * fVar6 + local_90._4_4_ * fVar5;
      fStack_78 = ((float)local_90 * local_a0._4_4_ - local_90._4_4_ * (float)local_a0) +
                  (float)uStack_98 * fVar6 + (float)uStack_88 * fVar5;
      fStack_74 = fVar5 * fVar6 -
                  (local_90._4_4_ * local_a0._4_4_ + (float)local_90 * (float)local_a0 +
                  (float)uStack_88 * (float)uStack_98);
      fStack_5c = 0.0;
      fStack_58 = 0.0;
      uStack_54 = 0;
      local_a0 = uVar2;
      local_90 = uVar1;
      local_44 = local_60;
      FUN_01007460(&local_80,&local_60);
      local_40 = local_40 + local_30;
      fStack_3c = fStack_3c + fStack_2c;
      fStack_38 = fStack_38 + fStack_28;
      fStack_34 = fStack_34 + fStack_24;
      (**(code **)(*param_1 + 0x30))(&local_30,&local_40,0x7fff0000,param_7,param_8);
      local_60 = 0.0;
      fStack_5c = local_44;
      fStack_58 = 0.0;
      uStack_54 = 0;
      local_30 = fVar7;
      fStack_2c = fVar8;
      fStack_28 = fVar3;
      fStack_24 = fVar4;
      FUN_01007460(&local_80,&local_60);
      local_40 = local_40 + local_30;
      fStack_3c = fStack_3c + fStack_2c;
      fStack_38 = fStack_38 + fStack_28;
      fStack_34 = fStack_34 + fStack_24;
      (**(code **)(*param_1 + 0x30))(&local_30,&local_40,0x7f00ff00,param_7,param_8);
      in_XMM3 = ZEXT416((uint)local_44);
      local_60 = 0.0;
      fStack_5c = 0.0;
      fStack_58 = local_44;
      uStack_54 = 0;
      local_30 = fVar7;
      fStack_2c = fVar8;
      fStack_28 = fVar3;
      fStack_24 = fVar4;
      FUN_01007460(&local_80,&local_60);
      local_40 = local_40 + local_30;
      fStack_3c = fStack_3c + fStack_2c;
      fStack_38 = fStack_38 + fStack_28;
      fStack_34 = fStack_34 + fStack_24;
      (**(code **)(*param_1 + 0x30))(&local_30,&local_40,0x7f0000ff,param_7,param_8);
      local_18 = local_18 + 1;
      local_14 = local_14 + 6;
      local_48 = local_48 - 1;
    } while (local_48 != 0);
  }
  return;
}

// 0111E1C0  FUN_0111e1c0  size=580  [run]
void FUN_0111e1c0(int param_1,int param_2,float *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  LPVOID pvVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int local_18;
  int local_14;
  
  pvVar8 = TlsGetValue(DAT_01f8fc4c);
  local_14 = *(int *)((int)pvVar8 + 0xc);
  uVar12 = param_1 * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar8 + 8) < (int)uVar12) ||
     (*(uint *)((int)pvVar8 + 0x10) < local_14 + uVar12)) {
    local_14 = FUN_0100b780(uVar12);
  }
  else {
    *(uint *)((int)pvVar8 + 0xc) = local_14 + uVar12;
  }
  local_18 = 0;
  if (0 < param_1) {
    iVar11 = local_14 - (int)param_3;
    do {
      iVar9 = (int)*(short *)(param_2 + local_18 * 2);
      if (iVar9 == -1) {
        pfVar10 = (float *)&DAT_018e9ca0;
      }
      else {
        pfVar10 = (float *)(iVar9 * 0x30 + local_14);
      }
      fVar2 = pfVar10[4];
      fVar3 = pfVar10[5];
      fVar4 = pfVar10[6];
      fVar19 = pfVar10[7];
      fVar18 = *param_3;
      fVar5 = param_3[1];
      fVar6 = param_3[2];
      fVar7 = param_3[3];
      fVar13 = fVar18 * fVar2;
      fVar14 = fVar5 * fVar3;
      fVar15 = fVar6 * fVar4;
      fVar16 = (fVar14 + fVar13 + fVar15) * fVar2 + (fVar19 * fVar19 + -0.5) * fVar18 +
               (fVar3 * fVar6 - fVar4 * fVar5) * fVar19;
      fVar17 = (fVar14 + fVar13 + fVar15) * fVar3 + (fVar19 * fVar19 + -0.5) * fVar5 +
               (fVar4 * fVar18 - fVar2 * fVar6) * fVar19;
      fVar18 = (fVar14 + fVar13 + fVar15) * fVar4 + (fVar19 * fVar19 + -0.5) * fVar6 +
               (fVar2 * fVar5 - fVar3 * fVar18) * fVar19;
      fVar19 = (fVar14 + fVar13 + fVar15) * fVar19 + (fVar19 * fVar19 + -0.5) * fVar7 +
               (fVar19 * fVar7 - fVar19 * fVar7) * fVar19;
      fVar2 = pfVar10[1];
      fVar3 = pfVar10[2];
      fVar4 = pfVar10[3];
      pfVar1 = (float *)(iVar11 + (int)param_3);
      *pfVar1 = fVar16 + fVar16 + *pfVar10;
      pfVar1[1] = fVar17 + fVar17 + fVar2;
      pfVar1[2] = fVar18 + fVar18 + fVar3;
      pfVar1[3] = fVar19 + fVar19 + fVar4;
      fVar2 = param_3[7];
      local_30 = (float)*(undefined8 *)(pfVar10 + 4);
      fStack_2c = (float)((ulonglong)*(undefined8 *)(pfVar10 + 4) >> 0x20);
      fStack_28 = (float)*(undefined8 *)(pfVar10 + 6);
      local_40 = (float)*(undefined8 *)(param_3 + 4);
      fStack_3c = (float)((ulonglong)*(undefined8 *)(param_3 + 4) >> 0x20);
      fStack_38 = (float)*(undefined8 *)(param_3 + 6);
      fVar3 = pfVar10[7];
      pfVar1 = (float *)(iVar11 + 0x10 + (int)param_3);
      *pfVar1 = (fStack_2c * fStack_38 - fStack_28 * fStack_3c) + local_40 * fVar3 +
                local_30 * fVar2;
      pfVar1[1] = (fStack_28 * local_40 - local_30 * fStack_38) + fStack_3c * fVar3 +
                  fStack_2c * fVar2;
      pfVar1[2] = (local_30 * fStack_3c - fStack_2c * local_40) + fStack_38 * fVar3 +
                  fStack_28 * fVar2;
      pfVar1[3] = fVar2 * fVar3 -
                  (fStack_2c * fStack_3c + local_30 * local_40 + fStack_28 * fStack_38);
      fVar2 = param_3[9];
      fVar3 = param_3[10];
      fVar4 = param_3[0xb];
      fVar19 = pfVar10[9];
      fVar18 = pfVar10[10];
      fVar5 = pfVar10[0xb];
      local_18 = local_18 + 1;
      pfVar1 = (float *)(iVar11 + 0x20 + (int)param_3);
      *pfVar1 = param_3[8] * pfVar10[8];
      pfVar1[1] = fVar2 * fVar19;
      pfVar1[2] = fVar3 * fVar18;
      pfVar1[3] = fVar4 * fVar5;
      param_3 = param_3 + 0xc;
    } while (local_18 < param_1);
  }
  FUN_0111de60(param_1,param_2,local_14,param_4,param_5,param_6,param_7);
  pvVar8 = TlsGetValue(DAT_01f8fc4c);
  if ((((int)uVar12 <= *(int *)((int)pvVar8 + 8)) &&
      (uVar12 + local_14 == *(int *)((int)pvVar8 + 0xc))) &&
     (*(int *)((int)pvVar8 + 0x14) != local_14)) {
    *(int *)((int)pvVar8 + 0xc) = local_14;
    return;
  }
  FUN_0100b9b0(local_14,uVar12);
  return;
}

// 0111E410  FUN_0111e410  size=115  [run]
undefined4 __thiscall
FUN_0111e410(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_14 = &local_8;
  local_8 = param_2;
  local_c = -0x7fffffff;
  local_10 = 1;
  uVar1 = (**(code **)(*param_1 + 8))(&local_14,param_2 + 0x10,param_3,param_4,param_5);
  local_10 = 0;
  if (-1 < local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 4);
  }
  return uVar1;
}

// 0111E730  FUN_0111e730  size=311  [run]
undefined4 __thiscall
FUN_0111e730(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_23c [524];
  undefined1 *local_30;
  int local_2c;
  int local_28;
  undefined1 local_24 [32];
  
  local_30 = local_24;
  local_2c = 0;
  local_28 = -0x7ffffff8;
  (**(code **)(*param_3 + 0xc))(param_2,&local_30);
  iVar2 = local_2c;
  iVar1 = local_2c;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(int *)(*(int *)(local_30 + iVar1 * 4) + 0x50) == 6) &&
       (*(int *)(*(int *)(local_30 + iVar1 * 4) + 8) == 0)) {
      hkErrStream::hkErrStream(local_23c,0x200);
      FUN_01018d00("Unable to build display geometry from source");
      (**(code **)(*DAT_01f8fc58 + 0xc))
                (0,0xffffffff,local_23c,
                 "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\Visualize\\hkDebugDisplayHandler.cpp"
                 ,0xdd);
      hkBaseObject::hkBaseObject_38();
      FUN_010060a0();
      iVar2 = local_2c + -1;
      local_2c = iVar2;
      if (iVar2 != iVar1) {
        *(undefined4 *)(local_30 + iVar1 * 4) = *(undefined4 *)(local_30 + iVar2 * 4);
      }
    }
  }
  uVar3 = 1;
  if (0 < iVar2) {
    uVar3 = (**(code **)(*param_1 + 8))(&local_30,param_4,param_5,param_6,param_7);
    iVar2 = local_2c;
  }
  FUN_01006230(local_30,iVar2,4);
  local_2c = 0;
  if (-1 < local_28) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30,local_28 * 4);
  }
  return uVar3;
}

// 0111E9F0  FUN_0111e9f0  size=15  [run]
int __thiscall FUN_0111e9f0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0111EA20  FUN_0111ea20  size=9  [run]
void FUN_0111ea20(void)

{
  FUN_01006230();
  return;
}

// 0111EA30  FUN_0111ea30  size=12  [run]
void __thiscall FUN_0111ea30(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0111EA60  FUN_0111ea60  size=12  [run]
void __thiscall FUN_0111ea60(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 0111EAB0  FUN_0111eab0  size=32  [run]
void __thiscall FUN_0111eab0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0111EAF0  FUN_0111eaf0  size=34  [run]
void FUN_0111eaf0(int param_1,int param_2,undefined4 *param_3)

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

// 0111EB40  FUN_0111eb40  size=26  [run]
void __thiscall FUN_0111eb40(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0111EB60  FUN_0111eb60  size=28  [run]
void __thiscall FUN_0111eb60(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 0111EB80  FUN_0111eb80  size=25  [run]
void __thiscall FUN_0111eb80(int *param_1,undefined4 *param_2)

{
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0111EBA0  FUN_0111eba0  size=15  [run]
int __thiscall FUN_0111eba0(int *param_1,int param_2)

{
  return param_2 * 0x40 + *param_1;
}

// 0111EBC0  FUN_0111ebc0  size=18  [run]
int __thiscall FUN_0111ebc0(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 0111EBF0  FUN_0111ebf0  size=32  [run]
void __thiscall FUN_0111ebf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0111EC30  FUN_0111ec30  size=61  [run]
void __thiscall FUN_0111ec30(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111EC70  FUN_0111ec70  size=61  [run]
void FUN_0111ec70(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0x40 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 0111ECB0  FUN_0111ecb0  size=72  [run]
void FUN_0111ecb0(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0x40 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 0111ED00  FUN_0111ed00  size=64  [run]
void FUN_0111ed00(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0x30 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 0111ED40  FUN_0111ed40  size=75  [run]
void FUN_0111ed40(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0x30 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 0111ED90  FUN_0111ed90  size=91  [run]
int * __thiscall FUN_0111ed90(int *param_1,int param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = *(int *)((int)pvVar2 + 0xc);
  uVar4 = param_2 * 0x40 + 0x7fU & 0xffffff80;
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

// 0111EE40  FUN_0111ee40  size=92  [run]
int * __thiscall FUN_0111ee40(int *param_1,int param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = *(int *)((int)pvVar2 + 0xc);
  uVar4 = param_2 * 0x30 + 0x7fU & 0xffffff80;
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

// 0111EEF0  FUN_0111eef0  size=61  [run]
void __fastcall FUN_0111eef0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F090  FUN_0111f090  size=61  [run]
void __fastcall FUN_0111f090(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F0D0  FUN_0111f0d0  size=27  [run]
void __thiscall FUN_0111f0d0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffff;
  return;
}

// 0111F0F0  FUN_0111f0f0  size=27  [run]
void __thiscall FUN_0111f0f0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7ffffff8;
  return;
}

// 0111F110  FUN_0111f110  size=61  [run]
void __fastcall FUN_0111f110(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F150  FUN_0111f150  size=61  [run]
void __fastcall FUN_0111f150(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F190  FUN_0111f190  size=8  [run]
undefined4 FUN_0111f190(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0111F1A0  FUN_0111f1a0  size=8  [run]
undefined4 FUN_0111f1a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0111F1B0  FUN_0111f1b0  size=8  [run]
undefined4 FUN_0111f1b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0111F1C0  FUN_0111f1c0  size=8  [run]
undefined4 FUN_0111f1c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0111F290  FUN_0111f290  size=67  [run]
void FUN_0111f290(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F2E0  FUN_0111f2e0  size=66  [run]
void FUN_0111f2e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F330  FUN_0111f330  size=65  [run]
void FUN_0111f330(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F380  FUN_0111f380  size=67  [run]
void FUN_0111f380(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F3D0  FUN_0111f3d0  size=65  [run]
void FUN_0111f3d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F420  FUN_0111f420  size=66  [run]
void FUN_0111f420(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F470  FUN_0111f470  size=65  [run]
void FUN_0111f470(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F4C0  FUN_0111f4c0  size=65  [run]
void FUN_0111f4c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F510  FUN_0111f510  size=8  [run]
undefined4 FUN_0111f510(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0111F530  FUN_0111f530  size=8  [run]
undefined4 FUN_0111f530(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0111F550  FUN_0111f550  size=8  [run]
undefined4 FUN_0111f550(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0111F570  FUN_0111f570  size=8  [run]
undefined4 FUN_0111f570(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0111F620  FUN_0111f620  size=26  [run]
void __thiscall FUN_0111f620(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0111F650  FUN_0111f650  size=25  [run]
void __thiscall FUN_0111f650(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 5);
  return;
}

// 0111F680  FUN_0111f680  size=27  [run]
void __thiscall FUN_0111f680(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 6);
  return;
}

// 0111F6B0  FUN_0111f6b0  size=25  [run]
void __thiscall FUN_0111f6b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 0111F710  FUN_0111f710  size=39  [run]
void FUN_0111f710(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x30);
  }
  return;
}

// 0111F740  FUN_0111f740  size=39  [run]
void FUN_0111f740(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x30);
  }
  return;
}

// 0111F770  FUN_0111f770  size=39  [run]
void FUN_0111f770(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x30);
  }
  return;
}

// 0111F7A0  FUN_0111f7a0  size=39  [run]
void FUN_0111f7a0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x30);
  }
  return;
}

// 0111F850  FUN_0111f850  size=61  [run]
void __thiscall FUN_0111f850(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F890  FUN_0111f890  size=60  [run]
void __thiscall FUN_0111f890(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(*param_2 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F8D0  FUN_0111f8d0  size=62  [run]
void __thiscall FUN_0111f8d0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F910  FUN_0111f910  size=60  [run]
void __thiscall FUN_0111f910(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F950  FUN_0111f950  size=61  [run]
void __fastcall FUN_0111f950(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F990  FUN_0111f990  size=60  [run]
void __fastcall FUN_0111f990(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111F9D0  FUN_0111f9d0  size=62  [run]
void __fastcall FUN_0111f9d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FA10  FUN_0111fa10  size=60  [run]
void __fastcall FUN_0111fa10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FA50  FUN_0111fa50  size=61  [run]
void __fastcall FUN_0111fa50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FA90  FUN_0111fa90  size=60  [run]
void __fastcall FUN_0111fa90(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FAD0  FUN_0111fad0  size=62  [run]
void __fastcall FUN_0111fad0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FB10  FUN_0111fb10  size=60  [run]
void __fastcall FUN_0111fb10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FB50  FUN_0111fb50  size=61  [run]
void __fastcall FUN_0111fb50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FBA0  FUN_0111fba0  size=60  [run]
void __fastcall FUN_0111fba0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FBF0  FUN_0111fbf0  size=62  [run]
void __fastcall FUN_0111fbf0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FC40  FUN_0111fc40  size=60  [run]
void __fastcall FUN_0111fc40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FC90  FUN_0111fc90  size=61  [run]
void __fastcall FUN_0111fc90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FCD0  FUN_0111fcd0  size=60  [run]
void __fastcall FUN_0111fcd0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FD10  FUN_0111fd10  size=60  [run]
void __fastcall FUN_0111fd10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FD70  FUN_0111fd70  size=62  [run]
void __fastcall FUN_0111fd70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FDD0  FUN_0111fdd0  size=61  [run]
void __fastcall FUN_0111fdd0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FE20  FUN_0111fe20  size=60  [run]
void __fastcall FUN_0111fe20(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FE70  FUN_0111fe70  size=62  [run]
void __fastcall FUN_0111fe70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FEC0  FUN_0111fec0  size=60  [run]
void __fastcall FUN_0111fec0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FF30  FUN_0111ff30  size=62  [run]
void __fastcall FUN_0111ff30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FF90  FUN_0111ff90  size=61  [run]
void __fastcall FUN_0111ff90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0111FFD0  FUN_0111ffd0  size=60  [run]
void __fastcall FUN_0111ffd0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01120010  FUN_01120010  size=102  [run]
undefined4 * __thiscall FUN_01120010(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x30);
  }
  return param_1;
}

// 01120080  FUN_01120080  size=60  [run]
void __fastcall FUN_01120080(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011200C0  FUN_011200c0  size=65  [run]
undefined4 * __fastcall FUN_011200c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return param_1;
}

// 01120110  FUN_01120110  size=64  [run]
undefined4 * __fastcall FUN_01120110(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return param_1;
}

// 01120150  FUN_01120150  size=66  [run]
undefined4 * __fastcall FUN_01120150(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return param_1;
}

// 011201A0  FUN_011201a0  size=64  [run]
undefined4 * __fastcall FUN_011201a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return param_1;
}

// 011201E0  FUN_011201e0  size=101  [run]
undefined4 * __thiscall FUN_011201e0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x30);
  }
  return param_1;
}

// 01120250  FUN_01120250  size=100  [run]
undefined4 * __thiscall FUN_01120250(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(param_1,0x30);
  }
  return param_1;
}

// 011202C0  FUN_011202c0  size=100  [run]
undefined4 * __thiscall FUN_011202c0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x30);
  }
  return param_1;
}

// 01120330  FUN_01120330  size=8  [run]
undefined4 FUN_01120330(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01120340  FUN_01120340  size=8  [run]
undefined4 FUN_01120340(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01120350  FUN_01120350  size=8  [run]
undefined4 FUN_01120350(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01120360  FUN_01120360  size=8  [run]
undefined4 FUN_01120360(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01120430  FUN_01120430  size=67  [run]
void FUN_01120430(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01120480  FUN_01120480  size=66  [run]
void FUN_01120480(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011204D0  FUN_011204d0  size=65  [run]
void FUN_011204d0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01120520  FUN_01120520  size=67  [run]
void FUN_01120520(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01120570  FUN_01120570  size=65  [run]
void FUN_01120570(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011205C0  FUN_011205c0  size=66  [run]
void FUN_011205c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01120610  FUN_01120610  size=65  [run]
void FUN_01120610(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01120660  FUN_01120660  size=65  [run]
void FUN_01120660(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011206B0  FUN_011206b0  size=8  [run]
undefined4 FUN_011206b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011206D0  FUN_011206d0  size=8  [run]
undefined4 FUN_011206d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011206F0  FUN_011206f0  size=8  [run]
undefined4 FUN_011206f0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01120710  FUN_01120710  size=8  [run]
undefined4 FUN_01120710(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01120730  FUN_01120730  size=39  [run]
void FUN_01120730(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01120760  FUN_01120760  size=39  [run]
void FUN_01120760(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01120790  FUN_01120790  size=39  [run]
void FUN_01120790(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 011207C0  FUN_011207c0  size=39  [run]
void FUN_011207c0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 011207F0  FUN_011207f0  size=102  [run]
undefined4 * __thiscall FUN_011207f0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 01120860  FUN_01120860  size=65  [run]
undefined4 * __fastcall FUN_01120860(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return param_1;
}

// 011208B0  FUN_011208b0  size=64  [run]
undefined4 * __fastcall FUN_011208b0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return param_1;
}

// 011208F0  FUN_011208f0  size=66  [run]
undefined4 * __fastcall FUN_011208f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 6);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return param_1;
}

// 01120940  FUN_01120940  size=64  [run]
undefined4 * __fastcall FUN_01120940(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return param_1;
}

// 01120980  FUN_01120980  size=101  [run]
undefined4 * __thiscall FUN_01120980(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 011209F0  FUN_011209f0  size=100  [run]
undefined4 * __thiscall FUN_011209f0(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 01120A60  FUN_01120a60  size=100  [run]
undefined4 * __thiscall FUN_01120a60(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 01120B70  FUN_01120b70  size=8  [run]
undefined4 FUN_01120b70(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01120B80  FUN_01120b80  size=8  [run]
undefined4 FUN_01120b80(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01120C30  FUN_01120c30  size=21  [run]
void FUN_01120c30(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_0112a5c0(param_2);
  }
  return;
}

// 01120C90  FUN_01120c90  size=66  [run]
void FUN_01120c90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01120CE0  FUN_01120ce0  size=12  [run]
void FUN_01120ce0(void)

{
  FUN_01121230();
  return;
}

// 01120D20  FUN_01120d20  size=28  [run]
void __thiscall FUN_01120d20(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x60);
  return;
}

// 01120D50  FUN_01120d50  size=26  [run]
void __thiscall FUN_01120d50(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01120D80  FUN_01120d80  size=39  [run]
void FUN_01120d80(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x60);
  }
  return;
}

// 01120DB0  FUN_01120db0  size=39  [run]
void FUN_01120db0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x60);
  }
  return;
}

// 01120DF0  FUN_01120df0  size=61  [run]
void __thiscall FUN_01120df0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01120E30  FUN_01120e30  size=61  [run]
void __fastcall FUN_01120e30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01120E70  FUN_01120e70  size=61  [run]
void __fastcall FUN_01120e70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01120EC0  FUN_01120ec0  size=61  [run]
void __fastcall FUN_01120ec0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01120F00  FUN_01120f00  size=101  [run]
undefined4 * __thiscall FUN_01120f00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x60);
  }
  return param_1;
}

// 01120F70  FUN_01120f70  size=92  [run]
void FUN_01120f70(int param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    piVar1 = (int *)(param_2 * 0x60 + 8 + param_1);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      param_2 = param_2 + -1;
      piVar1 = piVar1 + -0x18;
    } while (-1 < param_2);
  }
  return;
}

// 01120FD0  FUN_01120fd0  size=113  [run]
void __fastcall FUN_01120fd0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(iVar2 * 0x60 + 8 + *param_1);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + -0x18;
    } while (-1 < iVar2);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 01121050  FUN_01121050  size=152  [run]
void __thiscall FUN_01121050(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(iVar2 * 0x60 + 8 + *param_1);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      piVar1 = piVar1 + -0x18;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0x60);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 011210F0  FUN_011210f0  size=148  [run]
void __fastcall FUN_011210f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(iVar2 * 0x60 + 8 + *param_1);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      piVar1 = piVar1 + -0x18;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0x60);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01121190  FUN_01121190  size=148  [run]
void __fastcall FUN_01121190(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(iVar2 * 0x60 + 8 + *param_1);
    do {
      piVar1[-1] = 0;
      if (-1 < *piVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar1[-2],*piVar1 * 4);
      }
      piVar1[-2] = 0;
      *piVar1 = -0x80000000;
      piVar1 = piVar1 + -0x18;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0x60);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01121230  FUN_01121230  size=290  [run]
void __fastcall FUN_01121230(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  param_1[0x16] = 0;
  if ((param_1[0x17] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x15],(param_1[0x17] & 0x3fffffff) * 2);
  }
  param_1[0x15] = 0;
  param_1[0x17] = 0x80000000;
  param_1[0x13] = 0;
  if ((param_1[0x14] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x12],param_1[0x14] * 4);
  }
  param_1[0x14] = 0x80000000;
  param_1[0x12] = 0;
  iVar2 = param_1[0x10] + -1;
  if (-1 < iVar2) {
    piVar3 = (int *)(iVar2 * 0x60 + 8 + param_1[0xf]);
    do {
      piVar3[-1] = 0;
      if (-1 < *piVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar3[-2],*piVar3 * 4);
      }
      piVar3[-2] = 0;
      *piVar3 = -0x80000000;
      piVar3 = piVar3 + -0x18;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[0x10] = 0;
  if ((param_1[0x11] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xf],(param_1[0x11] & 0x3fffffff) * 0x60);
  }
  param_1[0xf] = 0;
  param_1[0x11] = 0x80000000;
  uVar1 = param_1[2];
  param_1[1] = 0;
  if ((uVar1 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  return;
}

// 01121360  FUN_01121360  size=53  [run]
int __thiscall FUN_01121360(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01121230();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x60);
  }
  return param_1;
}

// 011213B0  FUN_011213b0  size=8  [run]
undefined4 FUN_011213b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011213C0  FUN_011213c0  size=8  [run]
undefined4 FUN_011213c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011213D0  FUN_011213d0  size=8  [run]
undefined4 FUN_011213d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01121450  FUN_01121450  size=68  [run]
void FUN_01121450(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011214B0  FUN_011214b0  size=68  [run]
void FUN_011214b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121510  FUN_01121510  size=65  [run]
void FUN_01121510(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121560  FUN_01121560  size=68  [run]
void FUN_01121560(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011215B0  FUN_011215b0  size=68  [run]
void FUN_011215b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121600  FUN_01121600  size=65  [run]
void FUN_01121600(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121650  FUN_01121650  size=8  [run]
undefined4 FUN_01121650(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01121660  FUN_01121660  size=8  [run]
undefined4 FUN_01121660(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01121670  FUN_01121670  size=8  [run]
undefined4 FUN_01121670(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011216E0  FUN_011216e0  size=28  [run]
void __thiscall FUN_011216e0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x30);
  return;
}

// 01121710  FUN_01121710  size=25  [run]
void __thiscall FUN_01121710(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 01121750  FUN_01121750  size=39  [run]
void FUN_01121750(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return;
}

// 01121780  FUN_01121780  size=39  [run]
void FUN_01121780(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return;
}

// 011217B0  FUN_011217b0  size=39  [run]
void FUN_011217b0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return;
}

// 011217E0  FUN_011217e0  size=39  [run]
void FUN_011217e0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return;
}

// 01121810  FUN_01121810  size=39  [run]
void FUN_01121810(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return;
}

// 01121840  FUN_01121840  size=39  [run]
void FUN_01121840(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return;
}

// 011218C0  FUN_011218c0  size=63  [run]
void __thiscall FUN_011218c0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121900  FUN_01121900  size=60  [run]
void __thiscall FUN_01121900(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121940  FUN_01121940  size=63  [run]
void __fastcall FUN_01121940(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121980  FUN_01121980  size=60  [run]
void __fastcall FUN_01121980(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011219C0  FUN_011219c0  size=63  [run]
void __fastcall FUN_011219c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121A00  FUN_01121a00  size=60  [run]
void __fastcall FUN_01121a00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121A40  FUN_01121a40  size=63  [run]
void __fastcall FUN_01121a40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121A80  FUN_01121a80  size=60  [run]
void __fastcall FUN_01121a80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121AF0  FUN_01121af0  size=63  [run]
void __fastcall FUN_01121af0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121B30  FUN_01121b30  size=60  [run]
void __fastcall FUN_01121b30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121B70  FUN_01121b70  size=63  [run]
void __fastcall FUN_01121b70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121BB0  FUN_01121bb0  size=60  [run]
void __fastcall FUN_01121bb0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121C50  FUN_01121c50  size=63  [run]
void __fastcall FUN_01121c50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121C90  FUN_01121c90  size=60  [run]
void __fastcall FUN_01121c90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121CD0  FUN_01121cd0  size=63  [run]
void __fastcall FUN_01121cd0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121D10  FUN_01121d10  size=63  [run]
void __fastcall FUN_01121d10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121D50  FUN_01121d50  size=60  [run]
void __fastcall FUN_01121d50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01121D90  FUN_01121d90  size=103  [run]
undefined4 * __thiscall FUN_01121d90(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return param_1;
}

// 01121E00  FUN_01121e00  size=103  [run]
undefined4 * __thiscall FUN_01121e00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return param_1;
}

// 01121E70  FUN_01121e70  size=100  [run]
undefined4 * __thiscall FUN_01121e70(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return param_1;
}

// 01121F40  FUN_01121f40  size=103  [run]
undefined4 * __thiscall FUN_01121f40(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return param_1;
}

// 01121FC0  FUN_01121fc0  size=103  [run]
undefined4 * __thiscall FUN_01121fc0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return param_1;
}

// 01122030  FUN_01122030  size=100  [run]
undefined4 * __thiscall FUN_01122030(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return param_1;
}

// 011220A0  FUN_011220a0  size=8  [run]
undefined4 FUN_011220a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011220B0  FUN_011220b0  size=8  [run]
undefined4 FUN_011220b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011220C0  FUN_011220c0  size=8  [run]
undefined4 FUN_011220c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01122110  FUN_01122110  size=68  [run]
void FUN_01122110(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01122170  FUN_01122170  size=68  [run]
void FUN_01122170(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011221D0  FUN_011221d0  size=65  [run]
void FUN_011221d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01122230  FUN_01122230  size=68  [run]
void FUN_01122230(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01122290  FUN_01122290  size=68  [run]
void FUN_01122290(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011222F0  FUN_011222f0  size=65  [run]
void FUN_011222f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01122350  FUN_01122350  size=68  [run]
void FUN_01122350(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011223B0  FUN_011223b0  size=68  [run]
void FUN_011223b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01122410  FUN_01122410  size=65  [run]
void FUN_01122410(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01122460  FUN_01122460  size=8  [run]
undefined4 FUN_01122460(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01122470  FUN_01122470  size=8  [run]
undefined4 FUN_01122470(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01122480  FUN_01122480  size=8  [run]
undefined4 FUN_01122480(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01122490  FUN_01122490  size=8  [run]
undefined4 FUN_01122490(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011224A0  FUN_011224a0  size=8  [run]
undefined4 FUN_011224a0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011224B0  FUN_011224b0  size=8  [run]
undefined4 FUN_011224b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011224C0  FUN_011224c0  size=39  [run]
void FUN_011224c0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 011224F0  FUN_011224f0  size=39  [run]
void FUN_011224f0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 01122520  FUN_01122520  size=39  [run]
void FUN_01122520(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 01122550  FUN_01122550  size=39  [run]
void FUN_01122550(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 01122580  FUN_01122580  size=39  [run]
void FUN_01122580(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 011225B0  FUN_011225b0  size=39  [run]
void FUN_011225b0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 011225E0  FUN_011225e0  size=39  [run]
void FUN_011225e0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 01122610  FUN_01122610  size=39  [run]
void FUN_01122610(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 01122640  FUN_01122640  size=39  [run]
void FUN_01122640(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 01122670  FUN_01122670  size=103  [run]
undefined4 * __thiscall FUN_01122670(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 011226E0  FUN_011226e0  size=103  [run]
undefined4 * __thiscall FUN_011226e0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 01122750  FUN_01122750  size=100  [run]
undefined4 * __thiscall FUN_01122750(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 011227C0  FUN_011227c0  size=103  [run]
undefined4 * __thiscall FUN_011227c0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 01122830  FUN_01122830  size=103  [run]
undefined4 * __thiscall FUN_01122830(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 011228A0  FUN_011228a0  size=100  [run]
undefined4 * __thiscall FUN_011228a0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 01122910  FUN_01122910  size=103  [run]
undefined4 * __thiscall FUN_01122910(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 01122980  FUN_01122980  size=103  [run]
undefined4 * __thiscall FUN_01122980(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 011229F0  FUN_011229f0  size=100  [run]
undefined4 * __thiscall FUN_011229f0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 01122A60  FUN_01122a60  size=8  [run]
undefined4 FUN_01122a60(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01122A80  FUN_01122a80  size=8  [run]
undefined4 FUN_01122a80(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01122AA0  FUN_01122aa0  size=8  [run]
undefined4 FUN_01122aa0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01122AB0  FUN_01122ab0  size=8  [run]
undefined4 FUN_01122ab0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01122BC0  FUN_01122bc0  size=8  [run]
undefined4 FUN_01122bc0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01122BE0  FUN_01122be0  size=8  [run]
undefined4 FUN_01122be0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01122C20  FUN_01122c20  size=8  [run]
undefined4 FUN_01122c20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01122C40  FUN_01122c40  size=8  [run]
undefined4 FUN_01122c40(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01122C60  FUN_01122c60  size=8  [run]
undefined4 FUN_01122c60(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01122D00  FUN_01122d00  size=96  [run]
void FUN_01122d00(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = *param_4;
  fVar8 = param_4[1];
  fVar9 = param_4[2];
  fVar10 = *param_5;
  fVar11 = param_5[1];
  fVar12 = param_5[2];
  *param_6 = param_2[2] * fVar3 + param_2[1] * fVar2 + *param_2 * fVar1;
  param_6[1] = fVar6 * fVar3 + fVar5 * fVar2 + fVar4 * fVar1;
  param_6[2] = fVar9 * fVar3 + fVar8 * fVar2 + fVar7 * fVar1;
  param_6[3] = fVar12 * fVar3 + fVar11 * fVar2 + fVar10 * fVar1;
  return;
}

// 01122F60  FUN_01122f60  size=41  [run]
void __thiscall FUN_01122f60(float *param_1,int *param_2,float *param_3)

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
  
  fVar1 = param_3[5];
  fVar2 = param_3[6];
  fVar3 = param_3[7];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  fVar10 = param_1[5];
  fVar11 = param_1[6];
  fVar12 = param_1[7];
  *param_2 = -(uint)(*param_1 <= param_3[4] && *param_3 <= param_1[4]);
  param_2[1] = -(uint)(fVar4 <= fVar1 && fVar7 <= fVar10);
  param_2[2] = -(uint)(fVar5 <= fVar2 && fVar8 <= fVar11);
  param_2[3] = -(uint)(fVar6 <= fVar3 && fVar9 <= fVar12);
  return;
}

// 01123230  FUN_01123230  size=5068  [run]
bool FUN_01123230(float *param_1,float *param_2)

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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar28;
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar62;
  float fVar71;
  float fVar72;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined1 local_110 [8];
  float fStack_108;
  float fStack_104;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 local_d0 [8];
  float fStack_c8;
  float fStack_c4;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [8];
  float fStack_48;
  float fStack_44;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[8];
  fVar5 = param_1[9];
  fVar6 = param_1[10];
  fVar28 = param_1[4];
  fVar7 = param_1[5];
  fVar8 = param_1[6];
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  fVar31 = fVar4 - fVar28;
  fVar35 = fVar5 - fVar7;
  fVar37 = fVar6 - fVar8;
  fVar32 = fVar1 - fVar4;
  fVar36 = fVar2 - fVar5;
  fVar38 = fVar3 - fVar6;
  fVar12 = param_2[4];
  fVar13 = param_2[5];
  fVar14 = param_2[6];
  fVar62 = fVar12 - fVar9;
  fVar71 = fVar13 - fVar10;
  fVar72 = fVar14 - fVar11;
  fVar15 = param_2[8];
  fVar16 = param_2[9];
  fVar17 = param_2[10];
  fVar73 = fVar15 - fVar12;
  fVar76 = fVar16 - fVar13;
  fVar79 = fVar17 - fVar14;
  fVar74 = fVar9 - fVar15;
  fVar77 = fVar10 - fVar16;
  fVar80 = fVar11 - fVar17;
  fVar39 = fVar28 - fVar1;
  fVar53 = fVar7 - fVar2;
  fVar57 = fVar8 - fVar3;
  fVar40 = fVar53 * fVar72 - fVar57 * fVar71;
  fVar54 = fVar57 * fVar62 - fVar39 * fVar72;
  fVar58 = fVar39 * fVar71 - fVar53 * fVar62;
  fVar41 = fVar35 * fVar72 - fVar37 * fVar71;
  fVar55 = fVar37 * fVar62 - fVar31 * fVar72;
  fVar59 = fVar31 * fVar71 - fVar35 * fVar62;
  fVar42 = fVar36 * fVar72 - fVar38 * fVar71;
  fVar56 = fVar38 * fVar62 - fVar32 * fVar72;
  fVar60 = fVar32 * fVar71 - fVar36 * fVar62;
  fVar75 = fVar77 * fVar72 - fVar80 * fVar71;
  fVar78 = fVar80 * fVar62 - fVar74 * fVar72;
  fVar81 = fVar74 * fVar71 - fVar77 * fVar62;
  fVar62 = fVar8 * fVar58 + fVar7 * fVar54 + fVar28 * fVar40;
  fVar71 = fVar8 * fVar59 + fVar7 * fVar55 + fVar28 * fVar41;
  fVar72 = fVar8 * fVar60 + fVar7 * fVar56 + fVar28 * fVar42;
  fVar61 = fVar8 * fVar81 + fVar7 * fVar78 + fVar28 * fVar75;
  auVar46._4_4_ = fVar3 * fVar59 + fVar2 * fVar55 + fVar1 * fVar41;
  auVar46._0_4_ = fVar3 * fVar58 + fVar2 * fVar54 + fVar1 * fVar40;
  auVar46._8_4_ = fVar3 * fVar60 + fVar2 * fVar56 + fVar1 * fVar42;
  auVar46._12_4_ = fVar3 * fVar81 + fVar2 * fVar78 + fVar1 * fVar75;
  local_d0._4_4_ = fVar6 * fVar59 + fVar5 * fVar55 + fVar4 * fVar41;
  local_d0._0_4_ = fVar6 * fVar58 + fVar5 * fVar54 + fVar4 * fVar40;
  fStack_c8 = fVar6 * fVar60 + fVar5 * fVar56 + fVar4 * fVar42;
  fStack_c4 = fVar6 * fVar81 + fVar5 * fVar78 + fVar4 * fVar75;
  auVar44._4_4_ = fVar71;
  auVar44._0_4_ = fVar62;
  auVar44._8_4_ = fVar72;
  auVar44._12_4_ = fVar61;
  auVar43 = minps(auVar46,auVar44);
  auVar44 = minps(auVar43,_local_d0);
  auVar47._4_4_ = fVar71;
  auVar47._0_4_ = fVar62;
  auVar47._8_4_ = fVar72;
  auVar47._12_4_ = fVar61;
  auVar43 = maxps(auVar46,auVar47);
  auVar63 = maxps(auVar43,_local_d0);
  local_110._4_4_ = fVar14 * fVar59 + fVar13 * fVar55 + fVar12 * fVar41;
  local_110._0_4_ = fVar14 * fVar58 + fVar13 * fVar54 + fVar12 * fVar40;
  fStack_108 = fVar14 * fVar60 + fVar13 * fVar56 + fVar12 * fVar42;
  fStack_104 = fVar14 * fVar81 + fVar13 * fVar78 + fVar12 * fVar75;
  auVar43._4_4_ = fVar11 * fVar59 + fVar10 * fVar55 + fVar9 * fVar41;
  auVar43._0_4_ = fVar11 * fVar58 + fVar10 * fVar54 + fVar9 * fVar40;
  auVar43._8_4_ = fVar11 * fVar60 + fVar10 * fVar56 + fVar9 * fVar42;
  auVar43._12_4_ = fVar11 * fVar81 + fVar10 * fVar78 + fVar9 * fVar75;
  fVar40 = fVar17 * fVar58 + fVar16 * fVar54 + fVar15 * fVar40;
  fVar41 = fVar17 * fVar59 + fVar16 * fVar55 + fVar15 * fVar41;
  fVar42 = fVar17 * fVar60 + fVar16 * fVar56 + fVar15 * fVar42;
  fVar62 = fVar17 * fVar81 + fVar16 * fVar78 + fVar15 * fVar75;
  auVar45 = minps(auVar43,_local_110);
  auVar48._4_4_ = fVar41;
  auVar48._0_4_ = fVar40;
  auVar48._8_4_ = fVar42;
  auVar48._12_4_ = fVar62;
  auVar46 = minps(auVar45,auVar48);
  auVar43 = maxps(auVar43,_local_110);
  auVar64._4_4_ = fVar41;
  auVar64._0_4_ = fVar40;
  auVar64._8_4_ = fVar42;
  auVar64._12_4_ = fVar62;
  auVar64 = maxps(auVar43,auVar64);
  fVar40 = fVar79 * fVar53 - fVar76 * fVar57;
  fVar54 = fVar73 * fVar57 - fVar79 * fVar39;
  fVar58 = fVar76 * fVar39 - fVar73 * fVar53;
  fVar75 = fVar79 * fVar35 - fVar76 * fVar37;
  fVar78 = fVar73 * fVar37 - fVar79 * fVar31;
  fVar81 = fVar76 * fVar31 - fVar73 * fVar35;
  fVar41 = fVar79 * fVar36 - fVar76 * fVar38;
  fVar55 = fVar73 * fVar38 - fVar79 * fVar32;
  fVar59 = fVar76 * fVar32 - fVar73 * fVar36;
  fVar42 = fVar1 - fVar9;
  fVar56 = fVar2 - fVar10;
  fVar60 = fVar3 - fVar11;
  local_d0._4_4_ = fVar3 * fVar81 + fVar2 * fVar78 + fVar1 * fVar75;
  local_d0._0_4_ = fVar3 * fVar58 + fVar2 * fVar54 + fVar1 * fVar40;
  fStack_c8 = fVar3 * fVar59 + fVar2 * fVar55 + fVar1 * fVar41;
  fStack_c4 = fVar3 * fVar60 + fVar2 * fVar56 + fVar1 * fVar42;
  fVar62 = fVar8 * fVar58 + fVar7 * fVar54 + fVar28 * fVar40;
  fVar71 = fVar8 * fVar81 + fVar7 * fVar78 + fVar28 * fVar75;
  fVar72 = fVar8 * fVar59 + fVar7 * fVar55 + fVar28 * fVar41;
  fVar61 = fVar8 * fVar60 + fVar7 * fVar56 + fVar28 * fVar42;
  local_50._4_4_ = fVar6 * fVar81 + fVar5 * fVar78 + fVar4 * fVar75;
  local_50._0_4_ = fVar6 * fVar58 + fVar5 * fVar54 + fVar4 * fVar40;
  fStack_48 = fVar6 * fVar59 + fVar5 * fVar55 + fVar4 * fVar41;
  fStack_44 = fVar6 * fVar60 + fVar5 * fVar56 + fVar4 * fVar42;
  auVar45._4_4_ = fVar71;
  auVar45._0_4_ = fVar62;
  auVar45._8_4_ = fVar72;
  auVar45._12_4_ = fVar61;
  auVar43 = minps(_local_d0,auVar45);
  auVar47 = minps(auVar43,_local_50);
  auVar29._4_4_ = fVar71;
  auVar29._0_4_ = fVar62;
  auVar29._8_4_ = fVar72;
  auVar29._12_4_ = fVar61;
  auVar43 = maxps(_local_d0,auVar29);
  auVar65 = maxps(auVar43,_local_50);
  local_d0._4_4_ = fVar11 * fVar81 + fVar10 * fVar78 + fVar9 * fVar75;
  local_d0._0_4_ = fVar11 * fVar58 + fVar10 * fVar54 + fVar9 * fVar40;
  fStack_c8 = fVar11 * fVar59 + fVar10 * fVar55 + fVar9 * fVar41;
  fStack_c4 = fVar11 * fVar60 + fVar10 * fVar56 + fVar9 * fVar42;
  fVar62 = fVar14 * fVar58 + fVar13 * fVar54 + fVar12 * fVar40;
  fVar71 = fVar14 * fVar81 + fVar13 * fVar78 + fVar12 * fVar75;
  fVar72 = fVar14 * fVar59 + fVar13 * fVar55 + fVar12 * fVar41;
  fVar61 = fVar14 * fVar60 + fVar13 * fVar56 + fVar12 * fVar42;
  local_50._4_4_ = fVar17 * fVar81 + fVar16 * fVar78 + fVar15 * fVar75;
  local_50._0_4_ = fVar17 * fVar58 + fVar16 * fVar54 + fVar15 * fVar40;
  fStack_48 = fVar17 * fVar59 + fVar16 * fVar55 + fVar15 * fVar41;
  fStack_44 = fVar17 * fVar60 + fVar16 * fVar56 + fVar15 * fVar42;
  auVar34._4_4_ = fVar71;
  auVar34._0_4_ = fVar62;
  auVar34._8_4_ = fVar72;
  auVar34._12_4_ = fVar61;
  auVar43 = minps(_local_d0,auVar34);
  auVar48 = minps(auVar43,_local_50);
  auVar49._4_4_ = fVar71;
  auVar49._0_4_ = fVar62;
  auVar49._8_4_ = fVar72;
  auVar49._12_4_ = fVar61;
  auVar43 = maxps(_local_d0,auVar49);
  auVar66 = maxps(auVar43,_local_50);
  fVar40 = fVar80 * fVar53 - fVar77 * fVar57;
  fVar41 = fVar74 * fVar57 - fVar80 * fVar39;
  fVar55 = fVar77 * fVar39 - fVar74 * fVar53;
  fVar60 = fVar80 * fVar35 - fVar77 * fVar37;
  fVar72 = fVar74 * fVar37 - fVar80 * fVar31;
  fVar61 = fVar77 * fVar31 - fVar74 * fVar35;
  fVar31 = fVar80 * fVar36 - fVar77 * fVar38;
  fVar42 = fVar74 * fVar38 - fVar80 * fVar32;
  fVar56 = fVar77 * fVar32 - fVar74 * fVar36;
  fVar35 = fVar1 - fVar12;
  fVar62 = fVar2 - fVar13;
  fVar71 = fVar3 - fVar14;
  local_d0._4_4_ = fVar3 * fVar61 + fVar2 * fVar72 + fVar1 * fVar60;
  local_d0._0_4_ = fVar3 * fVar55 + fVar2 * fVar41 + fVar1 * fVar40;
  fStack_c8 = fVar3 * fVar56 + fVar2 * fVar42 + fVar1 * fVar31;
  fStack_c4 = fVar3 * fVar71 + fVar2 * fVar62 + fVar1 * fVar35;
  fVar37 = fVar8 * fVar55 + fVar7 * fVar41 + fVar28 * fVar40;
  fVar54 = fVar8 * fVar61 + fVar7 * fVar72 + fVar28 * fVar60;
  fVar58 = fVar8 * fVar56 + fVar7 * fVar42 + fVar28 * fVar31;
  fVar59 = fVar8 * fVar71 + fVar7 * fVar62 + fVar28 * fVar35;
  local_50._4_4_ = fVar6 * fVar61 + fVar5 * fVar72 + fVar4 * fVar60;
  local_50._0_4_ = fVar6 * fVar55 + fVar5 * fVar41 + fVar4 * fVar40;
  fStack_48 = fVar6 * fVar56 + fVar5 * fVar42 + fVar4 * fVar31;
  fStack_44 = fVar6 * fVar71 + fVar5 * fVar62 + fVar4 * fVar35;
  auVar50._4_4_ = fVar54;
  auVar50._0_4_ = fVar37;
  auVar50._8_4_ = fVar58;
  auVar50._12_4_ = fVar59;
  auVar45 = maxps(_local_d0,auVar50);
  auVar51._4_4_ = fVar54;
  auVar51._0_4_ = fVar37;
  auVar51._8_4_ = fVar58;
  auVar51._12_4_ = fVar59;
  auVar43 = minps(_local_d0,auVar51);
  auVar67 = maxps(auVar45,_local_50);
  auVar49 = minps(auVar43,_local_50);
  local_d0._4_4_ = fVar11 * fVar61 + fVar10 * fVar72 + fVar9 * fVar60;
  local_d0._0_4_ = fVar11 * fVar55 + fVar10 * fVar41 + fVar9 * fVar40;
  fStack_c8 = fVar11 * fVar56 + fVar10 * fVar42 + fVar9 * fVar31;
  fStack_c4 = fVar11 * fVar71 + fVar10 * fVar62 + fVar9 * fVar35;
  fVar37 = fVar14 * fVar55 + fVar13 * fVar41 + fVar12 * fVar40;
  fVar54 = fVar14 * fVar61 + fVar13 * fVar72 + fVar12 * fVar60;
  fVar58 = fVar14 * fVar56 + fVar13 * fVar42 + fVar12 * fVar31;
  fVar59 = fVar14 * fVar71 + fVar13 * fVar62 + fVar12 * fVar35;
  local_50._4_4_ = fVar17 * fVar61 + fVar16 * fVar72 + fVar15 * fVar60;
  local_50._0_4_ = fVar17 * fVar55 + fVar16 * fVar41 + fVar15 * fVar40;
  fStack_48 = fVar17 * fVar56 + fVar16 * fVar42 + fVar15 * fVar31;
  fStack_44 = fVar17 * fVar71 + fVar16 * fVar62 + fVar15 * fVar35;
  auVar52._4_4_ = fVar54;
  auVar52._0_4_ = fVar37;
  auVar52._8_4_ = fVar58;
  auVar52._12_4_ = fVar59;
  auVar43 = maxps(_local_d0,auVar52);
  auVar68 = maxps(auVar43,_local_50);
  auVar69._4_4_ = fVar54;
  auVar69._0_4_ = fVar37;
  auVar69._8_4_ = fVar58;
  auVar69._12_4_ = fVar59;
  auVar43 = minps(_local_d0,auVar69);
  auVar50 = minps(auVar43,_local_50);
  fVar55 = fVar36 * fVar57 - fVar38 * fVar53;
  fVar56 = fVar38 * fVar39 - fVar32 * fVar57;
  fVar71 = fVar32 * fVar53 - fVar36 * fVar39;
  fVar31 = fVar28 - fVar9;
  fVar36 = fVar7 - fVar10;
  fVar39 = fVar8 - fVar11;
  fVar32 = fVar28 - fVar12;
  fVar37 = fVar7 - fVar13;
  fVar40 = fVar8 - fVar14;
  fVar62 = fVar1 - fVar15;
  fVar53 = fVar2 - fVar16;
  fVar54 = fVar3 - fVar17;
  local_d0._4_4_ = fVar3 * fVar54 + fVar2 * fVar53 + fVar1 * fVar62;
  local_d0._0_4_ = fVar3 * fVar71 + fVar2 * fVar56 + fVar1 * fVar55;
  fStack_c8 = fVar3 * fVar39 + fVar2 * fVar36 + fVar1 * fVar31;
  fStack_c4 = fVar3 * fVar40 + fVar2 * fVar37 + fVar1 * fVar32;
  fVar35 = fVar8 * fVar71 + fVar7 * fVar56 + fVar28 * fVar55;
  fVar38 = fVar8 * fVar54 + fVar7 * fVar53 + fVar28 * fVar62;
  fVar41 = fVar8 * fVar39 + fVar7 * fVar36 + fVar28 * fVar31;
  fVar42 = fVar8 * fVar40 + fVar7 * fVar37 + fVar28 * fVar32;
  local_50._4_4_ = fVar6 * fVar54 + fVar5 * fVar53 + fVar4 * fVar62;
  local_50._0_4_ = fVar6 * fVar71 + fVar5 * fVar56 + fVar4 * fVar55;
  fStack_48 = fVar6 * fVar39 + fVar5 * fVar36 + fVar4 * fVar31;
  fStack_44 = fVar6 * fVar40 + fVar5 * fVar37 + fVar4 * fVar32;
  auVar70._4_4_ = fVar38;
  auVar70._0_4_ = fVar35;
  auVar70._8_4_ = fVar41;
  auVar70._12_4_ = fVar42;
  auVar43 = maxps(_local_d0,auVar70);
  auVar69 = maxps(auVar43,_local_50);
  auVar18._4_4_ = fVar38;
  auVar18._0_4_ = fVar35;
  auVar18._8_4_ = fVar41;
  auVar18._12_4_ = fVar42;
  auVar43 = minps(_local_d0,auVar18);
  auVar51 = minps(auVar43,_local_50);
  local_d0._4_4_ = fVar11 * fVar54 + fVar10 * fVar53 + fVar9 * fVar62;
  local_d0._0_4_ = fVar11 * fVar71 + fVar10 * fVar56 + fVar9 * fVar55;
  fStack_c8 = fVar11 * fVar39 + fVar10 * fVar36 + fVar9 * fVar31;
  fStack_c4 = fVar11 * fVar40 + fVar10 * fVar37 + fVar9 * fVar32;
  fVar35 = fVar14 * fVar71 + fVar13 * fVar56 + fVar12 * fVar55;
  fVar38 = fVar14 * fVar54 + fVar13 * fVar53 + fVar12 * fVar62;
  fVar41 = fVar14 * fVar39 + fVar13 * fVar36 + fVar12 * fVar31;
  fVar42 = fVar14 * fVar40 + fVar13 * fVar37 + fVar12 * fVar32;
  local_50._4_4_ = fVar17 * fVar54 + fVar16 * fVar53 + fVar15 * fVar62;
  local_50._0_4_ = fVar17 * fVar71 + fVar16 * fVar56 + fVar15 * fVar55;
  fStack_48 = fVar17 * fVar39 + fVar16 * fVar36 + fVar15 * fVar31;
  fStack_44 = fVar17 * fVar40 + fVar16 * fVar37 + fVar15 * fVar32;
  auVar19._4_4_ = fVar38;
  auVar19._0_4_ = fVar35;
  auVar19._8_4_ = fVar41;
  auVar19._12_4_ = fVar42;
  auVar43 = minps(_local_d0,auVar19);
  auVar20._4_4_ = fVar38;
  auVar20._0_4_ = fVar35;
  auVar20._8_4_ = fVar41;
  auVar20._12_4_ = fVar42;
  auVar45 = maxps(_local_d0,auVar20);
  auVar52 = minps(auVar43,_local_50);
  auVar70 = maxps(auVar45,_local_50);
  fVar36 = fVar28 - fVar15;
  fVar37 = fVar7 - fVar16;
  fVar38 = fVar8 - fVar17;
  fVar39 = fVar4 - fVar9;
  fVar42 = fVar5 - fVar10;
  fVar54 = fVar6 - fVar11;
  fVar40 = fVar4 - fVar12;
  fVar62 = fVar5 - fVar13;
  fVar55 = fVar6 - fVar14;
  fVar41 = fVar4 - fVar15;
  fVar53 = fVar5 - fVar16;
  fVar56 = fVar6 - fVar17;
  fVar31 = fVar8 * fVar38 + fVar7 * fVar37 + fVar28 * fVar36;
  fVar32 = fVar8 * fVar54 + fVar7 * fVar42 + fVar28 * fVar39;
  fVar35 = fVar8 * fVar55 + fVar7 * fVar62 + fVar28 * fVar40;
  fVar28 = fVar8 * fVar56 + fVar7 * fVar53 + fVar28 * fVar41;
  auVar25._0_4_ = fVar6 * fVar38 + fVar5 * fVar37 + fVar4 * fVar36;
  auVar25._4_4_ = fVar6 * fVar54 + fVar5 * fVar42 + fVar4 * fVar39;
  auVar25._8_4_ = fVar6 * fVar55 + fVar5 * fVar62 + fVar4 * fVar40;
  auVar25._12_4_ = fVar6 * fVar56 + fVar5 * fVar53 + fVar4 * fVar41;
  auVar21._4_4_ = fVar3 * fVar54 + fVar2 * fVar42 + fVar1 * fVar39;
  auVar21._0_4_ = fVar3 * fVar38 + fVar2 * fVar37 + fVar1 * fVar36;
  auVar21._8_4_ = fVar3 * fVar55 + fVar2 * fVar62 + fVar1 * fVar40;
  auVar21._12_4_ = fVar3 * fVar56 + fVar2 * fVar53 + fVar1 * fVar41;
  auVar22._4_4_ = fVar32;
  auVar22._0_4_ = fVar31;
  auVar22._8_4_ = fVar35;
  auVar22._12_4_ = fVar28;
  auVar43 = minps(auVar21,auVar22);
  auVar23._4_4_ = fVar32;
  auVar23._0_4_ = fVar31;
  auVar23._8_4_ = fVar35;
  auVar23._12_4_ = fVar28;
  auVar29 = maxps(auVar21,auVar23);
  auVar45 = minps(auVar43,auVar25);
  auVar29 = maxps(auVar29,auVar25);
  auVar26._0_8_ =
       CONCAT44(fVar11 * fVar54 + fVar10 * fVar42 + fVar9 * fVar39,
                fVar11 * fVar38 + fVar10 * fVar37 + fVar9 * fVar36);
  auVar26._8_4_ = fVar11 * fVar55 + fVar10 * fVar62 + fVar9 * fVar40;
  auVar26._12_4_ = fVar11 * fVar56 + fVar10 * fVar53 + fVar9 * fVar41;
  auVar27._0_4_ = fVar14 * fVar38 + fVar13 * fVar37 + fVar12 * fVar36;
  auVar27._4_4_ = fVar14 * fVar54 + fVar13 * fVar42 + fVar12 * fVar39;
  auVar27._8_4_ = fVar14 * fVar55 + fVar13 * fVar62 + fVar12 * fVar40;
  auVar27._12_4_ = fVar14 * fVar56 + fVar13 * fVar53 + fVar12 * fVar41;
  auVar30._0_4_ = fVar17 * fVar38 + fVar16 * fVar37 + fVar15 * fVar36;
  auVar30._4_4_ = fVar17 * fVar54 + fVar16 * fVar42 + fVar15 * fVar39;
  auVar30._8_4_ = fVar17 * fVar55 + fVar16 * fVar62 + fVar15 * fVar40;
  auVar30._12_4_ = fVar17 * fVar56 + fVar16 * fVar53 + fVar15 * fVar41;
  auVar33._8_4_ = auVar26._8_4_;
  auVar33._0_8_ = auVar26._0_8_;
  auVar33._12_4_ = auVar26._12_4_;
  auVar43 = maxps(auVar26,auVar27);
  auVar43 = maxps(auVar43,auVar30);
  auVar34 = minps(auVar33,auVar27);
  local_1d0 = auVar44._0_4_;
  fStack_1cc = auVar44._4_4_;
  fStack_1c8 = auVar44._8_4_;
  fStack_1c4 = auVar44._12_4_;
  local_1e0 = auVar64._0_4_;
  fStack_1dc = auVar64._4_4_;
  fStack_1d8 = auVar64._8_4_;
  fStack_1d4 = auVar64._12_4_;
  local_1f0 = auVar46._0_4_;
  fStack_1ec = auVar46._4_4_;
  fStack_1e8 = auVar46._8_4_;
  fStack_1e4 = auVar46._12_4_;
  local_1c0 = auVar63._0_4_;
  fStack_1bc = auVar63._4_4_;
  fStack_1b8 = auVar63._8_4_;
  fStack_1b4 = auVar63._12_4_;
  local_210 = auVar47._0_4_;
  fStack_20c = auVar47._4_4_;
  fStack_208 = auVar47._8_4_;
  fStack_204 = auVar47._12_4_;
  auVar34 = minps(auVar34,auVar30);
  local_110._0_4_ = auVar66._0_4_;
  local_110._4_4_ = auVar66._4_4_;
  fStack_108 = auVar66._8_4_;
  fStack_104 = auVar66._12_4_;
  local_120 = auVar48._0_4_;
  fStack_11c = auVar48._4_4_;
  fStack_118 = auVar48._8_4_;
  fStack_114 = auVar48._12_4_;
  local_200 = auVar65._0_4_;
  fStack_1fc = auVar65._4_4_;
  fStack_1f8 = auVar65._8_4_;
  fStack_1f4 = auVar65._12_4_;
  local_50._0_4_ = auVar29._0_4_;
  local_50._4_4_ = auVar29._4_4_;
  fStack_48 = auVar29._8_4_;
  fStack_44 = auVar29._12_4_;
  local_170 = auVar50._0_4_;
  fStack_16c = auVar50._4_4_;
  fStack_168 = auVar50._8_4_;
  fStack_164 = auVar50._12_4_;
  local_140 = auVar67._0_4_;
  fStack_13c = auVar67._4_4_;
  fStack_138 = auVar67._8_4_;
  fStack_134 = auVar67._12_4_;
  local_150 = auVar49._0_4_;
  fStack_14c = auVar49._4_4_;
  fStack_148 = auVar49._8_4_;
  fStack_144 = auVar49._12_4_;
  local_160 = auVar68._0_4_;
  fStack_15c = auVar68._4_4_;
  fStack_158 = auVar68._8_4_;
  fStack_154 = auVar68._12_4_;
  local_e0 = auVar52._0_4_;
  fStack_dc = auVar52._4_4_;
  fStack_d8 = auVar52._8_4_;
  fStack_d4 = auVar52._12_4_;
  local_180 = auVar69._0_4_;
  fStack_17c = auVar69._4_4_;
  fStack_178 = auVar69._8_4_;
  fStack_174 = auVar69._12_4_;
  local_190 = auVar51._0_4_;
  fStack_18c = auVar51._4_4_;
  fStack_188 = auVar51._8_4_;
  fStack_184 = auVar51._12_4_;
  local_d0._0_4_ = auVar70._0_4_;
  local_d0._4_4_ = auVar70._4_4_;
  fStack_c8 = auVar70._8_4_;
  fStack_c4 = auVar70._12_4_;
  local_60 = auVar45._0_4_;
  fStack_5c = auVar45._4_4_;
  fStack_58 = auVar45._8_4_;
  fStack_54 = auVar45._12_4_;
  auVar63._0_4_ =
       -(uint)(((((local_210 <= (float)local_110._0_4_ && local_120 <= local_200) &&
                 (local_1d0 <= local_1e0 && local_1f0 <= local_1c0)) &&
                (local_170 <= local_140 && local_150 <= local_160)) &&
               (local_e0 <= local_180 && local_190 <= (float)local_d0._0_4_)) &&
              (local_60 <= auVar43._0_4_ && auVar34._0_4_ <= (float)local_50._0_4_));
  auVar63._4_4_ =
       -(uint)(((((fStack_20c <= (float)local_110._4_4_ && fStack_11c <= fStack_1fc) &&
                 (fStack_1cc <= fStack_1dc && fStack_1ec <= fStack_1bc)) &&
                (fStack_16c <= fStack_13c && fStack_14c <= fStack_15c)) &&
               (fStack_dc <= fStack_17c && fStack_18c <= (float)local_d0._4_4_)) &&
              (fStack_5c <= auVar43._4_4_ && auVar34._4_4_ <= (float)local_50._4_4_));
  auVar63._8_4_ =
       -(uint)(((((fStack_208 <= fStack_108 && fStack_118 <= fStack_1f8) &&
                 (fStack_1c8 <= fStack_1d8 && fStack_1e8 <= fStack_1b8)) &&
                (fStack_168 <= fStack_138 && fStack_148 <= fStack_158)) &&
               (fStack_d8 <= fStack_178 && fStack_188 <= fStack_c8)) &&
              (auVar34._8_4_ <= fStack_48 && fStack_58 <= auVar43._8_4_));
  auVar63._12_4_ =
       -(uint)(((((fStack_204 <= fStack_104 && fStack_114 <= fStack_1f4) &&
                 (fStack_1c4 <= fStack_1d4 && fStack_1e4 <= fStack_1b4)) &&
                (fStack_164 <= fStack_134 && fStack_144 <= fStack_154)) &&
               (fStack_d4 <= fStack_174 && fStack_184 <= fStack_c4)) &&
              (auVar34._12_4_ <= fStack_44 && fStack_54 <= auVar43._12_4_));
  iVar24 = movmskps(param_2,auVar63);
  return iVar24 == 0xf;
}

// 01125220  FUN_01125220  size=5993  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_01125220(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int *param_6,int *param_7,float *param_8,float *param_9)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined4 extraout_EDX;
  undefined4 uVar15;
  int iVar16;
  float *pfVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar31;
  float fVar32;
  undefined4 uVar33;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar34;
  float fVar44;
  float fVar45;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar46;
  float fVar47;
  undefined1 auVar43 [16];
  float fVar48;
  float fVar59;
  float fVar60;
  undefined1 auVar49 [16];
  float fVar61;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar62;
  float fVar67;
  float fVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar69;
  float fVar73;
  float fVar74;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  int local_32e8;
  int local_32e4;
  int local_32e0;
  float afStack_32d0 [4];
  float afStack_32c0 [8];
  float local_32a0 [868];
  int aiStack_2510 [100];
  float local_2380 [17];
  undefined4 local_233c [1983];
  int local_440 [100];
  float local_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float local_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float local_270 [4];
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  float local_230;
  float local_22c;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  float local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined1 local_1c0 [16];
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined1 local_180 [16];
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float *local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100 [48];
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  int *local_b0;
  float local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  float *local_84;
  undefined4 *local_80;
  float *local_7c;
  undefined4 local_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  int *local_4c;
  int local_48;
  float *local_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int local_2c;
  float *local_28;
  float *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  float *local_14;
  
  local_14 = (float *)0x1125240;
  iVar16 = *param_7;
  uVar15 = 4;
  if (iVar16 < 3) {
    iVar9 = *param_6;
    if (iVar9 < 3) {
      uVar1 = *(ulonglong *)(param_1 + 0x20);
      uVar2 = *(ulonglong *)(param_1 + 0x28);
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      local_60._0_4_ = (float)uVar1;
      local_60._4_4_ = (float)(uVar1 >> 0x20);
      uStack_58._0_4_ = (float)uVar2;
      uStack_58._4_4_ = (float)(uVar2 >> 0x20);
      puVar14 = (undefined4 *)(param_1 + (iVar9 + 2) * 0x10);
      *puVar14 = (float)local_60;
      puVar14[1] = local_60._4_4_;
      puVar14[2] = (float)uStack_58;
      puVar14[3] = uStack_58._4_4_;
      puVar14 = (undefined4 *)(param_1 + (*param_6 + 3) * 0x10);
      *puVar14 = (float)local_60;
      puVar14[1] = local_60._4_4_;
      puVar14[2] = (float)uStack_58;
      puVar14[3] = uStack_58._4_4_;
      local_110._0_4_ = (float)uVar3;
      local_110._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
      uStack_108._0_4_ = (float)uVar4;
      uStack_108._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
      puVar14 = (undefined4 *)(param_1 + (*param_7 + 6) * 0x10);
      *puVar14 = (float)local_110;
      puVar14[1] = local_110._4_4_;
      puVar14[2] = (float)uStack_108;
      puVar14[3] = uStack_108._4_4_;
      uVar15 = 1;
      puVar14 = (undefined4 *)(param_1 + (*param_7 + 7) * 0x10);
      *puVar14 = (float)local_110;
      puVar14[1] = local_110._4_4_;
      puVar14[2] = (float)uStack_108;
      puVar14[3] = uStack_108._4_4_;
      local_110 = uVar3;
      uStack_108 = uVar4;
      local_60 = uVar1;
      uStack_58 = uVar2;
    }
    else {
      if (iVar9 < 4) {
        if (iVar16 < 2) {
          uVar15 = 3;
        }
        else {
          *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x20);
          *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x24);
          *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x28);
          *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x2c);
          *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x70);
          *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x74);
          *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x78);
          *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x7c);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x60);
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 100);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x6c);
      }
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x6c);
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x6c);
    }
  }
  else {
    if (iVar16 < 4) {
      if (*param_6 < 2) {
        uVar15 = 3;
      }
      else {
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x30);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x3c);
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x60);
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 100);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x6c);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x2c);
    }
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x2c);
  }
  local_2a0 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x70);
  fStack_29c = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x74);
  fStack_298 = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x78);
  fStack_294 = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x7c);
  local_2b0 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x60);
  fStack_2ac = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 100);
  fStack_2a8 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x68);
  fStack_2a4 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x6c);
  local_290 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x80);
  fStack_28c = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x84);
  fStack_288 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x88);
  fStack_284 = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x8c);
  local_280 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x90);
  fStack_27c = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x94);
  fStack_278 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x98);
  fStack_274 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x9c);
  local_48 = param_1;
  FUN_01127460(param_2,param_3,param_4,param_5,0x38d1b717,param_1 + 0x20,param_1 + 0x60,&local_2b0,
               uVar15);
  pfVar17 = local_7c;
  fVar23 = local_a0;
  fVar48 = local_d0;
  fVar59 = fStack_cc;
  fVar60 = fStack_c8;
  fVar61 = fStack_c4;
LAB_011253f0:
  iVar16 = -1;
  switch(local_78) {
  case 0:
    do {
      local_130 = -fVar48;
      fStack_12c = -fVar59;
      fStack_128 = -fVar60;
      fStack_124 = -fVar61;
      if (fVar59 * fVar59 + fVar48 * fVar48 + fVar60 * fVar60 <= fVar23) {
        local_130 = 0.0;
        fStack_12c = 1.0;
        fStack_128 = 0.0;
        fStack_124 = 0.0;
      }
      FUN_0112adb0(&local_130,&local_1b0);
      *local_7c = local_1b0;
      local_7c[1] = fStack_1ac;
      local_7c[2] = fStack_1a8;
      local_7c[3] = fStack_1a4;
      *local_84 = local_1a0;
      local_84[1] = fStack_19c;
      local_84[2] = fStack_198;
      local_84[3] = fStack_194;
      *local_80 = local_190;
      local_80[1] = uStack_18c;
      local_80[2] = uStack_188;
      local_80[3] = uStack_184;
      local_78 = 1;
      if (local_7c[1] * local_7c[1] + *local_7c * *local_7c + local_7c[2] * local_7c[2] <= local_a0)
      {
        fVar23 = *local_7c * *local_7c;
        fVar48 = local_7c[1] * local_7c[1];
        fVar59 = local_7c[2] * local_7c[2];
        auVar52._4_4_ = fVar23;
        auVar52._0_4_ = fVar23;
        auVar52._8_4_ = fVar23;
        auVar52._12_4_ = fVar23;
        auVar30._0_4_ = fVar48 + fVar23 + fVar59;
        auVar30._4_4_ = fVar48 + fVar23 + fVar59;
        auVar30._8_4_ = fVar48 + fVar23 + fVar59;
        auVar30._12_4_ = fVar48 + fVar23 + fVar59;
        auVar50 = rsqrtps(auVar52,auVar30);
        fVar60 = auVar50._0_4_;
        fVar61 = auVar50._4_4_;
        fVar22 = auVar50._8_4_;
        fVar32 = auVar50._12_4_;
        param_8[8] = local_1a0;
        param_8[9] = fStack_19c;
        param_8[10] = fStack_198;
        param_8[0xb] = fStack_194;
        fVar23 = local_130 * local_130;
        fVar48 = fStack_12c * fStack_12c;
        fVar59 = fStack_128 * fStack_128;
        auVar51._4_4_ = fVar23;
        auVar51._0_4_ = fVar23;
        auVar51._8_4_ = fVar23;
        auVar51._12_4_ = fVar23;
        auVar50._0_4_ = fVar48 + fVar23 + fVar59;
        auVar50._4_4_ = fVar48 + fVar23 + fVar59;
        auVar50._8_4_ = fVar48 + fVar23 + fVar59;
        auVar50._12_4_ = fVar48 + fVar23 + fVar59;
        auVar52 = rsqrtps(auVar51,auVar50);
        fVar23 = auVar52._0_4_;
        fVar48 = auVar52._4_4_;
        fVar59 = auVar52._8_4_;
        fVar34 = auVar52._12_4_;
        param_8[4] = (float)(~-(uint)(auVar50._0_4_ <= 0.0) &
                            (uint)((3.0 - fVar23 * auVar50._0_4_ * fVar23) * fVar23 * 0.5)) *
                     local_130;
        param_8[5] = (float)(~-(uint)(auVar50._4_4_ <= 0.0) &
                            (uint)((3.0 - fVar48 * auVar50._4_4_ * fVar48) * fVar48 * 0.5)) *
                     fStack_12c;
        param_8[6] = (float)(~-(uint)(auVar50._8_4_ <= 0.0) &
                            (uint)((3.0 - fVar59 * auVar50._8_4_ * fVar59) * fVar59 * 0.5)) *
                     fStack_128;
        param_8[7] = (float)(~-(uint)(auVar50._12_4_ <= 0.0) &
                            (uint)((3.0 - fVar34 * auVar50._12_4_ * fVar34) * fVar34 * 0.5)) *
                     fStack_124;
        *param_8 = (float)(~-(uint)(auVar30._0_4_ <= 0.0) &
                          (uint)((3.0 - fVar60 * auVar30._0_4_ * fVar60) * fVar60 * 0.5 *
                                auVar30._0_4_));
        param_8[1] = (float)(~-(uint)(auVar30._4_4_ <= 0.0) &
                            (uint)((3.0 - fVar61 * auVar30._4_4_ * fVar61) * fVar61 * 0.5 *
                                  auVar30._4_4_));
        param_8[2] = (float)(~-(uint)(auVar30._8_4_ <= 0.0) &
                            (uint)((3.0 - fVar22 * auVar30._8_4_ * fVar22) * fVar22 * 0.5 *
                                  auVar30._8_4_));
        param_8[3] = (float)(~-(uint)(auVar30._12_4_ <= 0.0) &
                            (uint)((3.0 - fVar32 * auVar30._12_4_ * fVar32) * fVar32 * 0.5 *
                                  auVar30._12_4_));
LAB_01125f2e:
        local_14 = (float *)0x1;
        goto LAB_01125f35;
      }
      iVar16 = 0;
      pfVar17 = local_7c;
      fVar23 = local_a0;
      fVar48 = local_d0;
      fVar59 = fStack_cc;
      fVar60 = fStack_c8;
      fVar61 = fStack_c4;
switchD_011253fc_caseD_1:
      while (fVar23 < pfVar17[1] * pfVar17[1] + *pfVar17 * *pfVar17 + pfVar17[2] * pfVar17[2]) {
        iVar16 = 1;
        FUN_0112adb0(pfVar17,&local_1b0);
        local_110 = CONCAT44((fStack_1ac - local_7c[1]) * (fStack_1ac - local_7c[1]),
                             (local_1b0 - *local_7c) * (local_1b0 - *local_7c));
        uStack_108 = CONCAT44((fStack_1a4 - local_7c[3]) * (fStack_1a4 - local_7c[3]),
                              (fStack_1a8 - local_7c[2]) * (fStack_1a8 - local_7c[2]));
        local_60 = *(ulonglong *)pfVar17 ^ 0x8000000080000000;
        uStack_58 = *(ulonglong *)(pfVar17 + 2) ^ 0x8000000080000000;
        FUN_0112adb0(&local_60,&local_210);
        pfVar17 = local_7c;
        fVar23 = local_a0;
        fVar48 = local_d0;
        fVar59 = fStack_cc;
        fVar60 = fStack_c8;
        fVar61 = fStack_c4;
        if (local_110._4_4_ + (float)local_110 + (float)uStack_108 <
            (fStack_20c - local_7c[1]) * (fStack_20c - local_7c[1]) +
            (local_210 - *local_7c) * (local_210 - *local_7c) +
            (fStack_208 - local_7c[2]) * (fStack_208 - local_7c[2])) {
          local_7c[4] = local_210;
          local_7c[5] = fStack_20c;
          local_7c[6] = fStack_208;
          local_7c[7] = fStack_204;
          local_84[4] = local_200;
          local_84[5] = fStack_1fc;
          local_84[6] = fStack_1f8;
          local_84[7] = fStack_1f4;
          local_80[4] = local_1f0;
          local_80[5] = uStack_1ec;
          local_80[6] = uStack_1e8;
          local_80[7] = uStack_1e4;
        }
        else {
          local_7c[4] = local_1b0;
          local_7c[5] = fStack_1ac;
          local_7c[6] = fStack_1a8;
          local_7c[7] = fStack_1a4;
          local_84[4] = local_1a0;
          local_84[5] = fStack_19c;
          local_84[6] = fStack_198;
          local_84[7] = fStack_194;
          local_80[4] = local_190;
          local_80[5] = uStack_18c;
          local_80[6] = uStack_188;
          local_80[7] = uStack_184;
        }
        while( true ) {
          local_78 = 2;
switchD_011253fc_caseD_2:
          if ((pfVar17[1] - pfVar17[5]) * (pfVar17[1] - pfVar17[5]) +
              (*pfVar17 - pfVar17[4]) * (*pfVar17 - pfVar17[4]) +
              (pfVar17[2] - pfVar17[6]) * (pfVar17[2] - pfVar17[6]) <= fVar23) break;
          fVar23 = *pfVar17 - pfVar17[4];
          fVar59 = pfVar17[1] - pfVar17[5];
          fVar61 = pfVar17[2] - pfVar17[6];
          fVar32 = pfVar17[3] - pfVar17[7];
          fVar62 = fVar59 * 1.0 - fVar61 * 1.0;
          fVar67 = fVar61 * 1.0 - fVar23 * 1.0;
          fVar68 = fVar23 * 1.0 - fVar59 * 1.0;
          fVar46 = fVar59 * 0.0 - fVar61 * 0.0;
          fVar47 = fVar61 * 1.0 - fVar23 * 0.0;
          fVar69 = fVar23 * 0.0 - fVar59 * 1.0;
          fVar48 = fVar62 * fVar62;
          fVar60 = fVar67 * fVar67;
          fVar22 = fVar68 * fVar68;
          fVar34 = fVar46 * fVar46;
          fVar44 = fVar47 * fVar47;
          fVar45 = fVar69 * fVar69;
          uVar18 = -(uint)(fVar60 + fVar48 + fVar22 < fVar44 + fVar34 + fVar45);
          uVar19 = -(uint)(fVar60 + fVar48 + fVar22 < fVar44 + fVar34 + fVar45);
          uVar20 = -(uint)(fVar60 + fVar48 + fVar22 < fVar44 + fVar34 + fVar45);
          uVar21 = -(uint)(fVar60 + fVar48 + fVar22 < fVar44 + fVar34 + fVar45);
          local_150 = (float)(uVar18 & (uint)fVar46 | ~uVar18 & (uint)fVar62);
          fStack_14c = (float)(uVar19 & (uint)fVar47 | ~uVar19 & (uint)fVar67);
          fStack_148 = (float)(uVar20 & (uint)fVar69 | ~uVar20 & (uint)fVar68);
          fVar60 = (float)(uVar21 & (uint)(fVar32 * 0.0 - fVar32 * 0.0) |
                          ~uVar21 & (uint)(fVar32 * 1.0 - fVar32 * 1.0));
          local_220 = fStack_148 * fVar59 - fStack_14c * fVar61;
          fStack_21c = local_150 * fVar61 - fStack_148 * fVar23;
          fStack_218 = fStack_14c * fVar23 - local_150 * fVar59;
          fVar23 = local_150 * local_150;
          fVar48 = fStack_14c * fStack_14c;
          fVar59 = fStack_148 * fStack_148;
          auVar70._4_4_ = fVar23;
          auVar70._0_4_ = fVar23;
          auVar70._8_4_ = fVar23;
          auVar70._12_4_ = fVar23;
          auVar63._0_4_ = fVar48 + fVar23 + fVar59;
          auVar63._4_4_ = fVar48 + fVar23 + fVar59;
          auVar63._8_4_ = fVar48 + fVar23 + fVar59;
          auVar63._12_4_ = fVar48 + fVar23 + fVar59;
          auVar30 = rsqrtps(auVar70,auVar63);
          fVar23 = auVar30._0_4_;
          fVar48 = auVar30._4_4_;
          fVar59 = auVar30._8_4_;
          fVar61 = auVar30._12_4_;
          local_150 = (float)(~-(uint)(auVar63._0_4_ <= 0.0) &
                             (uint)((3.0 - fVar23 * auVar63._0_4_ * fVar23) * fVar23 * 0.5)) *
                      local_150;
          fStack_14c = (float)(~-(uint)(auVar63._4_4_ <= 0.0) &
                              (uint)((3.0 - fVar48 * auVar63._4_4_ * fVar48) * fVar48 * 0.5)) *
                       fStack_14c;
          fStack_148 = (float)(~-(uint)(auVar63._8_4_ <= 0.0) &
                              (uint)((3.0 - fVar59 * auVar63._8_4_ * fVar59) * fVar59 * 0.5)) *
                       fStack_148;
          fStack_144 = (float)(~-(uint)(auVar63._12_4_ <= 0.0) &
                              (uint)((3.0 - fVar61 * auVar63._12_4_ * fVar61) * fVar61 * 0.5)) *
                       fVar60;
          fVar23 = local_220 * local_220;
          fVar48 = fStack_21c * fStack_21c;
          fVar59 = fStack_218 * fStack_218;
          iVar16 = 2;
          auVar64._4_4_ = fVar23;
          auVar64._0_4_ = fVar23;
          auVar64._8_4_ = fVar23;
          auVar64._12_4_ = fVar23;
          auVar35._0_4_ = fVar48 + fVar23 + fVar59;
          auVar35._4_4_ = fVar48 + fVar23 + fVar59;
          auVar35._8_4_ = fVar48 + fVar23 + fVar59;
          auVar35._12_4_ = fVar48 + fVar23 + fVar59;
          auVar30 = rsqrtps(auVar64,auVar35);
          fVar23 = auVar30._0_4_;
          fVar48 = auVar30._4_4_;
          fVar59 = auVar30._8_4_;
          fVar61 = auVar30._12_4_;
          local_220 = (float)(~-(uint)(auVar35._0_4_ <= 0.0) &
                             (uint)((3.0 - fVar23 * auVar35._0_4_ * fVar23) * fVar23 * 0.5)) *
                      local_220;
          fStack_21c = (float)(~-(uint)(auVar35._4_4_ <= 0.0) &
                              (uint)((3.0 - fVar48 * auVar35._4_4_ * fVar48) * fVar48 * 0.5)) *
                       fStack_21c;
          fStack_218 = (float)(~-(uint)(auVar35._8_4_ <= 0.0) &
                              (uint)((3.0 - fVar59 * auVar35._8_4_ * fVar59) * fVar59 * 0.5)) *
                       fStack_218;
          fStack_214 = (float)(~-(uint)(auVar35._12_4_ <= 0.0) &
                              (uint)((3.0 - fVar61 * auVar35._12_4_ * fVar61) * fVar61 * 0.5)) *
                       (fVar60 * fVar32 - fVar60 * fVar32);
          FUN_0112ae20(&local_1d0,&local_150,pfVar17,&local_210);
          FUN_0112ae20(local_1c0,&local_220,local_7c,&local_1b0);
          if (local_1d0 <= (float)local_1c0._0_4_) {
            local_7c[8] = local_1b0;
            local_7c[9] = fStack_1ac;
            local_7c[10] = fStack_1a8;
            local_7c[0xb] = fStack_1a4;
            local_84[8] = local_1a0;
            local_84[9] = fStack_19c;
            local_84[10] = fStack_198;
            local_84[0xb] = fStack_194;
            fVar23 = local_190;
            uVar15 = uStack_18c;
            uVar31 = uStack_188;
            uVar33 = uStack_184;
          }
          else {
            local_7c[8] = local_210;
            local_7c[9] = fStack_20c;
            local_7c[10] = fStack_208;
            local_7c[0xb] = fStack_204;
            local_84[8] = local_200;
            local_84[9] = fStack_1fc;
            local_84[10] = fStack_1f8;
            local_84[0xb] = fStack_1f4;
            fVar23 = (float)local_1f0;
            uVar15 = uStack_1ec;
            uVar31 = uStack_1e8;
            uVar33 = uStack_1e4;
          }
          local_80[8] = fVar23;
          local_80[9] = uVar15;
          local_80[10] = uVar31;
          local_80[0xb] = uVar33;
          pfVar17 = local_7c;
          fVar23 = local_a0;
          fVar48 = local_d0;
          fVar59 = fStack_cc;
          fVar60 = fStack_c8;
          fVar61 = fStack_c4;
          while( true ) {
            local_78 = 3;
switchD_011253fc_caseD_3:
            fVar22 = *pfVar17 - pfVar17[4];
            fVar32 = pfVar17[1] - pfVar17[5];
            fVar34 = pfVar17[2] - pfVar17[6];
            fVar44 = pfVar17[3] - pfVar17[7];
            fVar45 = pfVar17[4] - pfVar17[8];
            fVar62 = pfVar17[5] - pfVar17[9];
            fVar67 = pfVar17[6] - pfVar17[10];
            fVar68 = pfVar17[7] - pfVar17[0xb];
            local_40 = fVar67 * fVar32 - fVar62 * fVar34;
            fStack_3c = fVar45 * fVar34 - fVar67 * fVar22;
            fStack_38 = fVar62 * fVar22 - fVar45 * fVar32;
            fStack_34 = fVar68 * fVar44 - fVar68 * fVar44;
            if (fStack_3c * fStack_3c + local_40 * local_40 + fStack_38 * fStack_38 <= 0.0) break;
            fVar23 = local_40 * local_40;
            fVar48 = fStack_3c * fStack_3c;
            fVar59 = fStack_38 * fStack_38;
            auVar49._0_4_ = fVar48 + fVar23 + fVar59;
            auVar49._4_4_ = fVar48 + fVar23 + fVar59;
            auVar49._8_4_ = fVar48 + fVar23 + fVar59;
            auVar49._12_4_ = fVar48 + fVar23 + fVar59;
            auVar65._0_12_ = ZEXT812(0);
            auVar65._12_4_ = 0;
            auVar30 = rsqrtps(auVar65,auVar49);
            fVar23 = auVar30._0_4_;
            fVar48 = auVar30._4_4_;
            fVar59 = auVar30._8_4_;
            fVar60 = auVar30._12_4_;
            local_40 = (float)(~-(uint)(auVar49._0_4_ <= 0.0) &
                              (uint)((3.0 - fVar23 * auVar49._0_4_ * fVar23) * fVar23 * 0.5)) *
                       local_40;
            fStack_3c = (float)(~-(uint)(auVar49._4_4_ <= 0.0) &
                               (uint)((3.0 - fVar48 * auVar49._4_4_ * fVar48) * fVar48 * 0.5)) *
                        fStack_3c;
            fStack_38 = (float)(~-(uint)(auVar49._8_4_ <= 0.0) &
                               (uint)((3.0 - fVar59 * auVar49._8_4_ * fVar59) * fVar59 * 0.5)) *
                        fStack_38;
            fStack_34 = (float)(~-(uint)(auVar49._12_4_ <= 0.0) &
                               (uint)((3.0 - fVar60 * auVar49._12_4_ * fVar60) * fVar60 * 0.5)) *
                        fStack_34;
            iVar16 = 3;
            FUN_0112ae20(&local_170,&local_40,pfVar17,&local_210);
            if (local_170 < local_c0) {
              param_8[4] = local_40;
              param_8[5] = fStack_3c;
              param_8[6] = fStack_38;
              param_8[7] = fStack_34;
              *param_8 = 0.0;
              param_8[1] = 0.0;
              param_8[2] = 0.0;
              param_8[3] = 0.0;
              FUN_0112b1d0(&DAT_01701b10,local_7c,local_7c + 4,local_7c + 8,&local_140);
              fVar23 = local_84[5];
              fVar48 = local_84[6];
              fVar59 = local_84[7];
              fVar60 = local_84[1];
              fVar61 = local_84[2];
              fVar22 = local_84[3];
              fVar32 = local_84[9];
              fVar34 = local_84[10];
              fVar44 = local_84[0xb];
              param_8[8] = fStack_13c * local_84[4] + local_140 * *local_84 +
                           fStack_138 * local_84[8];
              param_8[9] = fStack_13c * fVar23 + local_140 * fVar60 + fStack_138 * fVar32;
              param_8[10] = fStack_13c * fVar48 + local_140 * fVar61 + fStack_138 * fVar34;
              param_8[0xb] = fStack_13c * fVar59 + local_140 * fVar22 + fStack_138 * fVar44;
              goto LAB_01125f2e;
            }
            local_7c[0xc] = local_210;
            local_7c[0xd] = fStack_20c;
            local_7c[0xe] = fStack_208;
            local_7c[0xf] = fStack_204;
            local_84[0xc] = local_200;
            local_84[0xd] = fStack_1fc;
            local_84[0xe] = fStack_1f8;
            local_84[0xf] = fStack_1f4;
            local_80[0xc] = local_1f0;
            local_80[0xd] = uStack_1ec;
            local_80[0xe] = uStack_1e8;
            local_80[0xf] = uStack_1e4;
            local_78 = 4;
            pfVar17 = local_7c;
            fVar23 = local_a0;
            fVar48 = local_d0;
            fVar59 = fStack_cc;
            fVar60 = fStack_c8;
            fVar61 = fStack_c4;
switchD_011253fc_caseD_4:
            fVar22 = *pfVar17 - pfVar17[4];
            fVar32 = pfVar17[1] - pfVar17[5];
            fVar34 = pfVar17[2] - pfVar17[6];
            fVar44 = pfVar17[3] - pfVar17[7];
            fVar45 = pfVar17[4] - pfVar17[8];
            fVar62 = pfVar17[5] - pfVar17[9];
            fVar67 = pfVar17[6] - pfVar17[10];
            fVar68 = pfVar17[7] - pfVar17[0xb];
            local_40 = fVar67 * fVar32 - fVar62 * fVar34;
            fStack_3c = fVar45 * fVar34 - fVar67 * fVar22;
            fStack_38 = fVar62 * fVar22 - fVar45 * fVar32;
            fStack_34 = fVar68 * fVar44 - fVar68 * fVar44;
            fVar22 = (pfVar17[0xd] - pfVar17[1]) * fStack_3c + (pfVar17[0xc] - *pfVar17) * local_40
                     + (pfVar17[0xe] - pfVar17[2]) * fStack_38;
            if ((fStack_3c * fStack_3c + local_40 * local_40 + fStack_38 * fStack_38) * fVar23 <
                fVar22 * fVar22) {
              FUN_01126c80(local_84,local_80,pfVar17);
              goto LAB_01125a43;
            }
            if (2 < iVar16) goto switchD_011253fc_default;
          }
          if (1 < iVar16) {
            fVar23 = *pfVar17 - pfVar17[4];
            fVar48 = pfVar17[1] - pfVar17[5];
            fVar59 = pfVar17[2] - pfVar17[6];
            fVar60 = pfVar17[3] - pfVar17[7];
            fVar34 = fVar48 * 1.0 - fVar59 * 1.0;
            fVar44 = fVar59 * 1.0 - fVar23 * 1.0;
            fVar45 = fVar23 * 1.0 - fVar48 * 1.0;
            fVar62 = fVar48 * 0.0 - fVar59 * 0.0;
            fVar67 = fVar59 * 1.0 - fVar23 * 0.0;
            fVar68 = fVar23 * 0.0 - fVar48 * 1.0;
            fVar61 = fVar62 * fVar62;
            fVar22 = fVar67 * fVar67;
            fVar32 = fVar68 * fVar68;
            fVar23 = fVar34 * fVar34;
            fVar48 = fVar44 * fVar44;
            fVar59 = fVar45 * fVar45;
            uVar18 = -(uint)(fVar48 + fVar23 + fVar59 < fVar22 + fVar61 + fVar32);
            uVar19 = -(uint)(fVar48 + fVar23 + fVar59 < fVar22 + fVar61 + fVar32);
            uVar20 = -(uint)(fVar48 + fVar23 + fVar59 < fVar22 + fVar61 + fVar32);
            uVar21 = -(uint)(fVar48 + fVar23 + fVar59 < fVar22 + fVar61 + fVar32);
            fVar22 = (float)(uVar18 & (uint)fVar62 | ~uVar18 & (uint)fVar34);
            fVar32 = (float)(uVar19 & (uint)fVar67 | ~uVar19 & (uint)fVar44);
            fVar34 = (float)(uVar20 & (uint)fVar68 | ~uVar20 & (uint)fVar45);
            fVar23 = fVar22 * fVar22;
            fVar48 = fVar32 * fVar32;
            fVar59 = fVar34 * fVar34;
            auVar37._0_4_ = fVar48 + fVar23 + fVar59;
            auVar37._4_4_ = fVar48 + fVar23 + fVar59;
            auVar37._8_4_ = fVar48 + fVar23 + fVar59;
            auVar37._12_4_ = fVar48 + fVar23 + fVar59;
            auVar53._0_12_ = ZEXT812(0);
            auVar53._12_4_ = 0;
            auVar30 = rsqrtps(auVar53,auVar37);
            fVar23 = auVar30._0_4_;
            fVar48 = auVar30._4_4_;
            fVar59 = auVar30._8_4_;
            fVar61 = auVar30._12_4_;
            param_8[4] = (float)(~-(uint)(auVar37._0_4_ <= 0.0) &
                                (uint)((3.0 - fVar23 * auVar37._0_4_ * fVar23) * fVar23 * 0.5)) *
                         fVar22;
            param_8[5] = (float)(~-(uint)(auVar37._4_4_ <= 0.0) &
                                (uint)((3.0 - fVar48 * auVar37._4_4_ * fVar48) * fVar48 * 0.5)) *
                         fVar32;
            param_8[6] = (float)(~-(uint)(auVar37._8_4_ <= 0.0) &
                                (uint)((3.0 - fVar59 * auVar37._8_4_ * fVar59) * fVar59 * 0.5)) *
                         fVar34;
            param_8[7] = (float)(~-(uint)(auVar37._12_4_ <= 0.0) &
                                (uint)((3.0 - fVar61 * auVar37._12_4_ * fVar61) * fVar61 * 0.5)) *
                         (float)(uVar21 & (uint)(fVar60 * 0.0 - fVar60 * 0.0) |
                                ~uVar21 & (uint)(fVar60 * 1.0 - fVar60 * 1.0));
            *param_8 = 0.0;
            param_8[1] = 0.0;
            param_8[2] = 0.0;
            param_8[3] = 0.0;
            fVar23 = *pfVar17;
            fVar48 = ABS(fVar23);
            fVar59 = ABS(pfVar17[1]);
            fVar45 = ABS(pfVar17[2]);
            auVar54._0_8_ = CONCAT44(fVar23,fVar23) & 0x7fffffff7fffffff;
            auVar54._8_4_ = fVar48;
            auVar54._12_4_ = fVar48;
            fVar62 = fVar59 + fVar48 + fVar45;
            fVar67 = fVar59 + fVar48 + fVar45;
            fVar68 = fVar59 + fVar48 + fVar45;
            fVar45 = fVar59 + fVar48 + fVar45;
            auVar24._0_4_ = fVar62 + fVar62 + 1.1920929e-07;
            auVar24._4_4_ = fVar67 + fVar67 + 1.1920929e-07;
            auVar24._8_4_ = fVar68 + fVar68 + 1.1920929e-07;
            auVar24._12_4_ = fVar45 + fVar45 + 1.1920929e-07;
            auVar30 = rcpps(auVar54,auVar24);
            fVar23 = local_84[5];
            fVar48 = local_84[6];
            fVar59 = local_84[7];
            fVar60 = local_84[1];
            fVar61 = local_84[2];
            fVar22 = local_84[3];
            fVar32 = local_84[1];
            fVar34 = local_84[2];
            fVar44 = local_84[3];
            param_8[8] = (local_84[4] - *local_84) *
                         (2.0 - auVar30._0_4_ * auVar24._0_4_) * auVar30._0_4_ * fVar62 + *local_84;
            param_8[9] = (fVar23 - fVar60) *
                         (2.0 - auVar30._4_4_ * auVar24._4_4_) * auVar30._4_4_ * fVar67 + fVar32;
            param_8[10] = (fVar48 - fVar61) *
                          (2.0 - auVar30._8_4_ * auVar24._8_4_) * auVar30._8_4_ * fVar68 + fVar34;
            param_8[0xb] = (fVar59 - fVar22) *
                           (2.0 - auVar30._12_4_ * auVar24._12_4_) * auVar30._12_4_ * fVar45 +
                           fVar44;
            goto LAB_01125f2e;
          }
        }
        if (0 < iVar16) goto switchD_011253fc_default;
        local_78 = 1;
      }
      if (-1 < iVar16) break;
      local_78 = 0;
    } while( true );
  case 1:
    goto switchD_011253fc_caseD_1;
  case 2:
    goto switchD_011253fc_caseD_2;
  case 3:
    goto switchD_011253fc_caseD_3;
  case 4:
    goto switchD_011253fc_caseD_4;
  }
switchD_011253fc_default:
  local_88 = local_88 + 1;
  if (local_88 == 1) {
    local_78 = 1;
    goto LAB_011253f0;
  }
  if (local_88 < 0x14) {
    fVar22 = ((float)(local_88 * -0x3e39b193 + 0x3039U & 0x7fffffff) * 4.656613e-10 - 0.0001) *
             0.0002;
    fVar48 = fVar48 + fVar22;
    fVar59 = fVar59 + fVar22;
    fVar60 = fVar60 + fVar22;
    fVar61 = fVar61 + fStack_64;
    local_78 = 0;
    local_d0 = fVar48;
    fStack_cc = fVar59;
    fStack_c8 = fVar60;
    fStack_c4 = fVar61;
    local_70 = fVar48;
    fStack_6c = fVar59;
    fStack_68 = fVar60;
    fStack_64 = fVar61;
    goto LAB_011253f0;
  }
  local_130 = 1.0;
  fStack_12c = 0.0;
  fStack_128 = 0.0;
  fStack_124 = 0.0;
  local_180._8_4_ = 0xff7fffee;
  local_180._0_8_ = 0xff7fffeeff7fffee;
  local_180._12_4_ = 0xff7fffee;
  local_70 = 0.0;
  fStack_6c = 0.0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  local_1a0 = 0.0;
  fStack_19c = 0.0;
  fStack_198 = 0.0;
  fStack_194 = 0.0;
  local_190 = 0.0;
  uStack_18c = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  local_150 = 0.0;
  fStack_14c = 1.0;
  fStack_148 = 0.0;
  fStack_144 = 0.0;
  local_110._0_4_ = 0.0;
  local_110._4_4_ = 0.0;
  uStack_108._0_4_ = 1.0;
  uStack_108._4_4_ = 0.0;
  auVar29._8_4_ = 0x3f800000;
  auVar29._0_8_ = 0x3f8000003f800000;
  auVar29._12_4_ = 0x3f800000;
  auVar66._8_4_ = 0x40400000;
  auVar66._0_8_ = 0x4040000040400000;
  auVar66._12_4_ = 0x40400000;
  auVar30 = rsqrtps(auVar29,auVar66);
  local_40 = auVar30._0_4_ * -1.0;
  fStack_3c = auVar30._4_4_ * -1.0;
  fStack_38 = auVar30._8_4_ * -1.0;
  fStack_34 = auVar30._12_4_ * -1.0;
  local_60._0_4_ = 1.0;
  local_60._4_4_ = 1.0;
  uStack_58._0_4_ = 1.0;
  uStack_58._4_4_ = 1.0;
  local_14 = (float *)0x0;
  while( true ) {
    local_18 = (float *)0x4;
    do {
      local_140 = -local_130;
      fStack_13c = -fStack_12c;
      fStack_138 = -fStack_128;
      fStack_134 = -fStack_124;
      (**(code **)(*param_2 + 4))
                (param_3,&local_140,param_4,param_5,&local_160,&local_1d0,&local_170);
      auVar58._4_4_ = fStack_12c;
      auVar58._0_4_ = local_130;
      auVar58._8_4_ = fStack_128;
      local_130 = (local_160 - local_170) * local_130;
      fStack_12c = (fStack_15c - fStack_16c) * fStack_12c;
      fStack_128 = (fStack_158 - fStack_168) * fStack_128;
      if (local_180._12_4_ < fStack_12c + local_130 + fStack_128) {
        auVar58._12_4_ = fStack_12c + local_130 + fStack_128;
        local_1a0 = local_160;
        fStack_19c = fStack_15c;
        fStack_198 = fStack_158;
        fStack_194 = fStack_154;
        local_190 = local_1d0;
        uStack_18c = uStack_1cc;
        uStack_188 = uStack_1c8;
        uStack_184 = uStack_1c4;
        local_180 = auVar58;
      }
      local_18 = (float *)((int)local_18 + -1);
      fVar23 = (float)local_110;
      fVar48 = local_110._4_4_;
      fVar59 = (float)uStack_108;
      fVar60 = uStack_108._4_4_;
      local_130 = local_150;
      fStack_12c = fStack_14c;
      fStack_128 = fStack_148;
      fStack_124 = fStack_144;
      local_110._0_4_ = local_40;
      local_110._4_4_ = fStack_3c;
      uStack_108._0_4_ = fStack_38;
      uStack_108._4_4_ = fStack_34;
      local_150 = fVar23;
      fStack_14c = fVar48;
      fStack_148 = fVar59;
      fStack_144 = fVar60;
    } while (local_18 != (float *)0x0);
    fVar23 = local_180._0_4_;
    fVar48 = local_180._4_4_;
    fVar59 = local_180._8_4_;
    fVar60 = local_180._12_4_;
    if (0x13 < (int)local_14) break;
    local_1c0._0_8_ = local_180._4_8_;
    local_1c0._8_4_ = fVar23;
    local_1c0._12_4_ = fVar60;
    fVar62 = fVar48 * 1.0 - fVar59 * 1.0;
    fVar67 = fVar59 * 1.0 - fVar23 * 1.0;
    fVar68 = fVar23 * 1.0 - fVar48 * 1.0;
    auVar72._0_4_ = fVar48 * 0.0 - fVar59 * 0.0;
    auVar72._4_4_ = fVar59 * 1.0 - fVar23 * 0.0;
    auVar72._8_4_ = fVar23 * 0.0 - fVar48 * 1.0;
    auVar72._12_4_ = fVar60 * 0.0 - fVar60 * 0.0;
    fVar34 = auVar72._0_4_ * auVar72._0_4_;
    fVar44 = auVar72._4_4_ * auVar72._4_4_;
    fVar45 = auVar72._8_4_ * auVar72._8_4_;
    fVar61 = fVar62 * fVar62;
    fVar22 = fVar67 * fVar67;
    fVar32 = fVar68 * fVar68;
    uVar18 = -(uint)(fVar22 + fVar61 + fVar32 < fVar44 + fVar34 + fVar45);
    uVar19 = -(uint)(fVar22 + fVar61 + fVar32 < fVar44 + fVar34 + fVar45);
    uVar20 = -(uint)(fVar22 + fVar61 + fVar32 < fVar44 + fVar34 + fVar45);
    uVar21 = -(uint)(fVar22 + fVar61 + fVar32 < fVar44 + fVar34 + fVar45);
    auVar41._0_4_ = ~uVar18 & (uint)fVar62;
    auVar41._4_4_ = ~uVar19 & (uint)fVar67;
    auVar41._8_4_ = ~uVar20 & (uint)fVar68;
    auVar41._12_4_ = ~uVar21 & (uint)(fVar60 * 1.0 - fVar60 * 1.0);
    auVar77._0_4_ = uVar18 & (uint)auVar72._0_4_;
    auVar77._4_4_ = uVar19 & (uint)auVar72._4_4_;
    auVar77._8_4_ = uVar20 & (uint)auVar72._8_4_;
    auVar77._12_4_ = uVar21 & (uint)auVar72._12_4_;
    auVar77 = auVar77 | auVar41;
    fVar22 = auVar77._0_4_;
    fVar34 = auVar77._4_4_;
    fVar45 = auVar77._8_4_;
    fVar61 = fVar22 * fVar22;
    fVar32 = fVar34 * fVar34;
    fVar44 = fVar45 * fVar45;
    auVar42._0_4_ = fVar32 + fVar61 + fVar44;
    auVar42._4_4_ = fVar32 + fVar61 + fVar44;
    auVar42._8_4_ = fVar32 + fVar61 + fVar44;
    auVar42._12_4_ = fVar32 + fVar61 + fVar44;
    auVar30 = rsqrtps(auVar72,auVar42);
    fVar61 = auVar30._0_4_;
    fVar32 = auVar30._4_4_;
    fVar44 = auVar30._8_4_;
    fVar62 = auVar30._12_4_;
    fVar22 = (float)(~-(uint)(auVar42._0_4_ <= local_70) &
                    (uint)((3.0 - fVar61 * auVar42._0_4_ * fVar61) * fVar61 * 0.5)) * fVar22;
    fVar34 = (float)(~-(uint)(auVar42._4_4_ <= fStack_6c) &
                    (uint)((3.0 - fVar32 * auVar42._4_4_ * fVar32) * fVar32 * 0.5)) * fVar34;
    fVar45 = (float)(~-(uint)(auVar42._8_4_ <= fStack_68) &
                    (uint)((3.0 - fVar44 * auVar42._8_4_ * fVar44) * fVar44 * 0.5)) * fVar45;
    fVar61 = (float)(~-(uint)(auVar42._12_4_ <= fStack_64) &
                    (uint)((3.0 - fVar62 * auVar42._12_4_ * fVar62) * fVar62 * 0.5)) *
             auVar77._12_4_;
    fVar62 = fVar61 * uStack_58._4_4_;
    fVar67 = (fVar45 * fVar48 - fVar34 * fVar59) * (float)local_60;
    fVar68 = (fVar22 * fVar59 - fVar45 * fVar23) * local_60._4_4_;
    fVar46 = (fVar34 * fVar23 - fVar22 * fVar48) * (float)uStack_58;
    fVar47 = (fVar61 * fVar60 - fVar61 * fVar60) * uStack_58._4_4_;
    fVar69 = fVar22 * (float)local_60 + fVar23;
    fVar73 = fVar34 * local_60._4_4_ + fVar48;
    fVar74 = fVar45 * (float)uStack_58 + fVar59;
    local_14 = (float *)((int)local_14 + 1);
    fVar61 = fVar69 * fVar69;
    fVar32 = fVar73 * fVar73;
    fVar44 = fVar74 * fVar74;
    auVar43._0_4_ = fVar32 + fVar61 + fVar44;
    auVar43._4_4_ = fVar32 + fVar61 + fVar44;
    auVar43._8_4_ = fVar32 + fVar61 + fVar44;
    auVar43._12_4_ = fVar32 + fVar61 + fVar44;
    auVar30 = rsqrtps(auVar77,auVar43);
    fVar61 = auVar30._0_4_;
    fVar32 = auVar30._4_4_;
    fVar44 = auVar30._8_4_;
    fVar78 = auVar30._12_4_;
    local_130 = (float)(~-(uint)(auVar43._0_4_ <= local_70) &
                       (uint)((3.0 - fVar61 * auVar43._0_4_ * fVar61) * fVar61 * 0.5));
    fStack_12c = (float)(~-(uint)(auVar43._4_4_ <= fStack_6c) &
                        (uint)((3.0 - fVar32 * auVar43._4_4_ * fVar32) * fVar32 * 0.5));
    fStack_128 = (float)(~-(uint)(auVar43._8_4_ <= fStack_68) &
                        (uint)((3.0 - fVar44 * auVar43._8_4_ * fVar44) * fVar44 * 0.5));
    fStack_124 = (float)(~-(uint)(auVar43._12_4_ <= fStack_64) &
                        (uint)((3.0 - fVar78 * auVar43._12_4_ * fVar78) * fVar78 * 0.5));
    local_150 = local_130 * (fVar23 - fVar22 * (float)local_60);
    fStack_14c = fStack_12c * (fVar48 - fVar34 * local_60._4_4_);
    fStack_148 = fStack_128 * (fVar59 - fVar45 * (float)uStack_58);
    fStack_144 = fStack_124 * (fVar60 - fVar62);
    local_40 = local_130 * (fVar23 - fVar67);
    fStack_3c = fStack_12c * (fVar48 - fVar68);
    fStack_38 = fStack_128 * (fVar59 - fVar46);
    fStack_34 = fStack_124 * (fVar60 - fVar47);
    local_60._0_4_ = (float)local_60 * 0.5;
    local_60._4_4_ = local_60._4_4_ * 0.5;
    uStack_58._0_4_ = (float)uStack_58 * 0.5;
    uStack_58._4_4_ = uStack_58._4_4_ * 0.5;
    local_110._0_4_ = local_130 * (fVar67 + fVar23);
    local_110._4_4_ = fStack_12c * (fVar68 + fVar48);
    uStack_108._0_4_ = fStack_128 * (fVar46 + fVar59);
    uStack_108._4_4_ = fStack_124 * (fVar47 + fVar60);
    local_130 = local_130 * fVar69;
    fStack_12c = fStack_12c * fVar73;
    fStack_128 = fStack_128 * fVar74;
    fStack_124 = fStack_124 * (fVar62 + fVar60);
  }
  *(float *)(local_48 + 0x20) = local_1a0;
  *(float *)(local_48 + 0x24) = fStack_19c;
  *(float *)(local_48 + 0x28) = fStack_198;
  *(float *)(local_48 + 0x2c) = fStack_194;
  *(float *)(local_48 + 0x60) = local_190;
  *(undefined4 *)(local_48 + 100) = uStack_18c;
  *(undefined4 *)(local_48 + 0x68) = uStack_188;
  *(undefined4 *)(local_48 + 0x6c) = uStack_184;
  *(undefined1 (*) [16])(param_8 + 4) = local_180;
  *param_8 = fVar60;
  param_8[1] = fVar60;
  param_8[2] = fVar60;
  param_8[3] = fVar60;
  param_8[8] = local_1a0;
  param_8[9] = fStack_19c;
  param_8[10] = fStack_198;
  param_8[0xb] = fStack_194;
  local_14 = (float *)0x2;
  *param_6 = 1;
LAB_0112696c:
  *param_7 = 1;
LAB_01126972:
  fVar23 = param_8[5];
  fVar48 = param_8[6];
  fVar59 = param_8[7];
  *param_9 = param_8[4];
  param_9[1] = fVar23;
  param_9[2] = fVar48;
  param_9[3] = fVar59;
  return local_14;
LAB_01125a43:
  pfVar7 = (float *)FUN_01126b50();
  iVar16 = local_32e8 + 1;
  afStack_32c0[local_32e8 * 0x10 + 8] = 0.0;
  local_1c = afStack_32d0 + local_32e8 * 0x10;
  local_14 = pfVar7;
  (**(code **)(*local_b0 + 4))
            (local_90,pfVar7,local_8c,local_100,afStack_32c0 + local_32e8 * 0x10,&local_140,
             &local_160);
  fVar23 = afStack_32c0[local_32e8 * 0x10 + 3];
  fVar60 = afStack_32c0[local_32e8 * 0x10] - local_160;
  fVar61 = afStack_32c0[local_32e8 * 0x10 + 1] - fStack_15c;
  fVar22 = afStack_32c0[local_32e8 * 0x10 + 2] - fStack_158;
  afStack_32c0[local_32e8 * 0x10 + 4] = local_160;
  afStack_32c0[local_32e8 * 0x10 + 5] = fStack_15c;
  afStack_32c0[local_32e8 * 0x10 + 6] = fStack_158;
  afStack_32c0[local_32e8 * 0x10 + 7] = fStack_134;
  afStack_32d0[local_32e8 * 0x10] = fVar60;
  afStack_32d0[local_32e8 * 0x10 + 1] = fVar61;
  afStack_32d0[local_32e8 * 0x10 + 2] = fVar22;
  afStack_32d0[local_32e8 * 0x10 + 3] = fVar23 - fStack_154;
  pfVar17 = (float *)pfVar7[4];
  pfVar13 = (float *)pfVar7[8];
  pfVar5 = (float *)pfVar7[0xc];
  fVar32 = (fVar23 - fStack_154) - pfVar5[3];
  fVar23 = *pfVar7;
  fVar48 = pfVar7[1];
  fVar59 = pfVar7[2];
  auVar75._4_4_ =
       -(uint)((fVar61 - pfVar13[1]) * fVar48 + fVar23 * (fVar60 - *pfVar13) +
               (fVar22 - pfVar13[2]) * fVar59 < fStack_bc);
  auVar75._0_4_ =
       -(uint)((fVar61 - pfVar17[1]) * fVar48 + fVar23 * (fVar60 - *pfVar17) +
               (fVar22 - pfVar17[2]) * fVar59 < local_c0);
  auVar75._8_4_ =
       -(uint)((fVar61 - pfVar5[1]) * fVar48 + fVar23 * (fVar60 - *pfVar5) +
               (fVar22 - pfVar5[2]) * fVar59 < fStack_b8);
  auVar75._12_4_ =
       -(uint)(fVar32 * fVar48 + fVar23 * (fVar61 - pfVar5[1]) + fVar32 * fVar59 < fStack_b4);
  uVar18 = movmskps(pfVar17,auVar75);
  if ((uVar18 & 7) != 0) {
    local_1c = (float *)0x1;
    goto LAB_011261ad;
  }
  pfVar17 = local_270;
  for (iVar9 = 0x14; pfVar13 = local_14, iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar17 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar17 = pfVar17 + 1;
  }
  local_20 = (float *)((local_32e4 - local_32e0) + 100);
  local_2c = 0;
  iVar9 = FUN_01127100(local_14,local_1c,&local_2c,&local_4c);
  pfVar5 = local_20;
  pfVar17 = local_7c;
  fVar23 = local_a0;
  fVar48 = local_d0;
  fVar59 = fStack_cc;
  fVar60 = fStack_c8;
  fVar61 = fStack_c4;
  local_32e8 = iVar16;
  if (iVar9 != 0) goto switchD_011253fc_default;
  pfVar7 = local_14;
  if ((local_32e4 - local_32e0) + 100 < local_2c) goto joined_r0x0112655d;
  iVar9 = 0;
  local_20 = (float *)local_4c;
  local_18 = (float *)local_2c;
  iVar12 = local_32e4;
  iVar8 = local_2c;
  iVar6 = local_2c;
  while ((local_2c = iVar6, iVar8 != 0 && (iVar12 = iVar12 + -1, -1 < iVar12))) {
    local_440[iVar9] = aiStack_2510[iVar12];
    local_32e4 = local_32e4 + -1;
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + -1;
    iVar6 = local_2c;
  }
  if (0 < iVar8) {
    piVar11 = local_440 + iVar9;
    do {
      iVar9 = local_32e0 + 1;
      *piVar11 = (int)(local_2380 + local_32e0 * 0x14);
      piVar11 = piVar11 + 1;
      iVar8 = iVar8 + -1;
      local_32e0 = iVar9;
    } while (iVar8 != 0);
  }
  pfVar13 = (float *)0x0;
  piVar11 = local_4c;
  piVar10 = local_4c;
  pfVar17 = local_7c;
  fVar23 = local_a0;
  fVar48 = local_d0;
  fVar59 = fStack_cc;
  fVar60 = fStack_c8;
  fVar61 = fStack_c4;
  if (0 < iVar6) {
    do {
      if (piVar10 == (int *)0x0) goto switchD_011253fc_default;
      pfVar5 = (float *)local_440[(int)pfVar13];
      local_44 = (float *)((int)pfVar13 + 1);
      local_28 = (float *)local_440[0];
      if ((int)local_44 < (int)local_18) {
        local_28 = (float *)local_440[(int)pfVar13 + 1];
      }
      pfVar5[7] = (float)pfVar5;
      pfVar5[0xb] = (float)pfVar5;
      pfVar5[0xf] = (float)pfVar5;
      pfVar5[5] = (float)(pfVar5 + 8);
      pfVar13 = pfVar5 + 0xc;
      pfVar5[9] = (float)pfVar13;
      pfVar5[0xd] = (float)(pfVar5 + 4);
      local_24 = *(float **)piVar10[1];
      local_114 = (float *)*piVar10;
      pfVar5[4] = (float)local_24;
      *pfVar13 = (float)local_1c;
      pfVar5[8] = (float)local_114;
      piVar10[2] = (int)(pfVar5 + 4);
      pfVar5[6] = (float)piVar10;
      *(float **)((int)local_28 + 0x28) = pfVar13;
      pfVar5[0xe] = (float)((int)local_28 + 0x20);
      fVar22 = *local_24 - *local_114;
      fVar34 = local_24[1] - local_114[1];
      fVar44 = local_24[2] - local_114[2];
      fVar67 = local_24[3] - local_114[3];
      fVar45 = *local_114 - *local_1c;
      fVar62 = local_114[1] - local_1c[1];
      fVar68 = local_114[2] - local_1c[2];
      fVar46 = local_114[3] - local_1c[3];
      fVar32 = fVar68 * fVar34 - fVar62 * fVar44;
      fVar44 = fVar45 * fVar44 - fVar68 * fVar22;
      fVar62 = fVar62 * fVar22 - fVar45 * fVar34;
      fVar22 = fVar32 * fVar32;
      fVar34 = fVar44 * fVar44;
      fVar45 = fVar62 * fVar62;
      if (fVar34 + fVar22 + fVar45 <= 0.0) goto switchD_011253fc_default;
      auVar36._0_4_ = fVar34 + fVar22 + fVar45;
      auVar36._4_4_ = fVar34 + fVar22 + fVar45;
      auVar36._8_4_ = fVar34 + fVar22 + fVar45;
      auVar36._12_4_ = fVar34 + fVar22 + fVar45;
      auVar71._0_12_ = ZEXT812(0);
      auVar71._12_4_ = 0;
      auVar30 = rsqrtps(auVar71,auVar36);
      fVar22 = auVar30._0_4_;
      fVar34 = auVar30._4_4_;
      fVar45 = auVar30._8_4_;
      fVar68 = auVar30._12_4_;
      fVar32 = (float)(~-(uint)(auVar36._0_4_ <= 0.0) &
                      (uint)((3.0 - fVar22 * auVar36._0_4_ * fVar22) * fVar22 * 0.5)) * fVar32;
      fVar44 = (float)(~-(uint)(auVar36._4_4_ <= 0.0) &
                      (uint)((3.0 - fVar34 * auVar36._4_4_ * fVar34) * fVar34 * 0.5)) * fVar44;
      fVar62 = (float)(~-(uint)(auVar36._8_4_ <= 0.0) &
                      (uint)((3.0 - fVar45 * auVar36._8_4_ * fVar45) * fVar45 * 0.5)) * fVar62;
      pfVar5[0x10] = local_24[1] * fVar44 + *local_24 * fVar32 + local_24[2] * fVar62;
      *pfVar5 = fVar32;
      pfVar5[1] = fVar44;
      pfVar5[2] = fVar62;
      pfVar5[3] = (float)(~-(uint)(auVar36._12_4_ <= 0.0) &
                         (uint)((3.0 - fVar68 * auVar36._12_4_ * fVar68) * fVar68 * 0.5)) *
                  (fVar46 * fVar67 - fVar46 * fVar67);
      piVar11 = *(int **)(*(int *)piVar10[1] + 0x30);
      *(undefined4 *)(*(int *)piVar10[1] + 0x30) = 0;
      piVar10 = piVar11;
      pfVar13 = local_44;
    } while ((int)local_44 < (int)local_18);
  }
  iVar9 = 0;
  if (0 < local_32e0) {
    puVar14 = local_233c;
    do {
      *puVar14 = 0;
      iVar9 = iVar9 + 1;
      puVar14 = puVar14 + 0x14;
    } while (iVar9 < local_32e0);
  }
  iVar9 = 0;
  if (0 < iVar16) {
    pfVar13 = afStack_32c0 + 8;
    do {
      *pfVar13 = 0.0;
      iVar9 = iVar9 + 1;
      pfVar13 = pfVar13 + 0x10;
    } while (iVar9 < iVar16);
  }
  if (local_20 != (float *)piVar11) goto switchD_011253fc_default;
  if (0x36 < iVar16) {
    local_1c = (float *)0x3;
    pfVar7 = local_14;
    goto LAB_011261ad;
  }
  goto LAB_01125a43;
joined_r0x0112655d:
  for (; local_14 = pfVar7, (int)pfVar5 < local_32e4; local_32e4 = local_32e4 + -1) {
                    /* WARNING: Read-only address (ram,0x01701b10) is written */
    FUN_0112a8d0();
    pfVar7 = local_14;
  }
                    /* WARNING: Read-only address (ram,0x01701b10) is written */
  *pfVar13 = local_270[0];
  pfVar13[1] = local_270[1];
  pfVar13[2] = local_270[2];
  pfVar13[3] = local_270[3];
  *(undefined8 *)(pfVar13 + 4) = local_260;
  *(undefined8 *)(pfVar13 + 6) = local_258;
  *(undefined8 *)(pfVar13 + 8) = local_250;
  *(undefined8 *)(pfVar13 + 10) = local_248;
  *(undefined8 *)(pfVar13 + 0xc) = local_240;
  *(undefined8 *)(pfVar13 + 0xe) = local_238;
  pfVar13[0x10] = local_230;
  pfVar13[0x11] = local_22c;
  local_1c = (float *)0x3;
LAB_011261ad:
  local_18 = (float *)pfVar7[0xc];
  local_44 = (float *)pfVar7[4];
  local_24 = pfVar7 + 4;
  local_28 = pfVar7 + 8;
  local_20 = (float *)*local_28;
  uVar15 = FUN_0112b1d0(&DAT_01701b10,local_44,local_20,local_18,&local_40);
  auVar38._4_4_ = -(uint)(fStack_3c < 0.0);
  auVar38._0_4_ = -(uint)(local_40 < 0.0);
  auVar38._8_4_ = -(uint)(fStack_38 < 0.0);
  auVar38._12_4_ = -(uint)(fStack_34 < 0.0);
  uVar18 = movmskps(uVar15,auVar38);
  local_70 = 0.0;
  fStack_6c = 0.0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  if ((uVar18 & 7) != 0) {
    iVar16 = local_32e0 + -1;
    pfVar17 = local_2380;
    local_60 = 0xff7fffeeff7fffee;
    uStack_58 = 0xff7fffeeff7fffee;
    if (-1 < iVar16) {
      local_170 = *local_20;
      fStack_16c = local_20[1];
      fStack_168 = local_20[2];
      local_160 = *local_44;
      fStack_15c = local_44[1];
      fStack_158 = local_44[2];
      fVar23 = *local_18;
      fVar48 = local_18[1];
      fVar59 = local_18[2];
      fVar60 = local_170 - local_160;
      fVar61 = fStack_16c - fStack_15c;
      fVar34 = fStack_168 - fStack_158;
      fStack_164 = local_20[3];
      fStack_13c = fVar23 - local_170;
      fStack_138 = fVar48 - fStack_16c;
      local_140 = fVar59 - fStack_168;
      fStack_134 = local_18[3] - local_20[3];
      fVar22 = fVar61 * local_140 - fVar34 * fStack_138;
      fVar32 = fVar34 * fStack_13c - fVar60 * local_140;
      fVar44 = fVar60 * fStack_138 - fVar61 * fStack_13c;
      fVar45 = fVar44 * fVar61 - fVar32 * fVar34;
      fVar62 = fVar22 * fVar34 - fVar44 * fVar60;
      fVar67 = fVar32 * fVar60 - fVar22 * fVar61;
      fStack_154 = local_44[3];
      fVar68 = fVar44 * fStack_138 - fVar32 * local_140;
      fVar46 = fVar22 * local_140 - fVar44 * fStack_13c;
      fVar47 = fVar32 * fStack_13c - fVar22 * fStack_138;
      fVar60 = (fStack_15c - fVar48) * fVar44 - (fStack_158 - fVar59) * fVar32;
      fVar61 = (fStack_158 - fVar59) * fVar22 - (local_160 - fVar23) * fVar44;
      fVar22 = (local_160 - fVar23) * fVar32 - (fStack_15c - fVar48) * fVar22;
      fVar32 = fVar60 * fVar60;
      fVar34 = fVar61 * fVar61;
      auVar39._8_4_ = fVar22 * fVar22;
      auVar39._4_4_ = auVar39._8_4_;
      auVar39._0_4_ = auVar39._8_4_;
      auVar39._12_4_ = auVar39._8_4_;
      auVar55._0_4_ = fVar34 + fVar32 + auVar39._8_4_;
      auVar55._4_4_ = fVar34 + fVar32 + auVar39._8_4_;
      auVar55._8_4_ = fVar34 + fVar32 + auVar39._8_4_;
      auVar55._12_4_ = fVar34 + fVar32 + auVar39._8_4_;
      auVar30 = rsqrtps(auVar39,auVar55);
      fVar23 = fVar60 * auVar30._0_4_ * fVar23;
      fVar48 = fVar61 * auVar30._4_4_ * fVar48;
      fVar59 = fVar22 * auVar30._8_4_ * fVar59;
      auVar76._0_4_ = fVar48 + fVar23 + fVar59;
      auVar76._4_4_ = fVar48 + fVar23 + fVar59;
      auVar76._8_4_ = fVar48 + fVar23 + fVar59;
      auVar76._12_4_ = fVar48 + fVar23 + fVar59;
      auVar30 = minps(auVar76,_DAT_01701b10);
      do {
        fVar23 = pfVar17[0x10];
        fVar48 = fVar45 * fVar45;
        fVar59 = fVar62 * fVar62;
        auVar25._8_4_ = fVar67 * fVar67;
        auVar25._4_4_ = auVar25._8_4_;
        auVar25._0_4_ = auVar25._8_4_;
        auVar25._12_4_ = auVar25._8_4_;
        auVar40._0_4_ = fVar59 + fVar48 + auVar25._8_4_;
        auVar40._4_4_ = fVar59 + fVar48 + auVar25._8_4_;
        auVar40._8_4_ = fVar59 + fVar48 + auVar25._8_4_;
        auVar40._12_4_ = fVar59 + fVar48 + auVar25._8_4_;
        auVar50 = rsqrtps(auVar25,auVar40);
        fVar61 = fVar45 * auVar50._0_4_ * local_160;
        fVar22 = fVar62 * auVar50._4_4_ * fStack_15c;
        fVar32 = fVar67 * auVar50._8_4_ * fStack_158;
        fVar48 = fVar68 * fVar68;
        fVar59 = fVar46 * fVar46;
        fVar60 = fVar47 * fVar47;
        auVar56._0_4_ = fVar59 + fVar48 + fVar60;
        auVar56._4_4_ = fVar59 + fVar48 + fVar60;
        auVar56._8_4_ = fVar59 + fVar48 + fVar60;
        auVar56._12_4_ = fVar59 + fVar48 + fVar60;
        auVar50 = rsqrtps(auVar56,auVar56);
        fVar48 = fVar68 * auVar50._0_4_ * local_170;
        fVar59 = fVar46 * auVar50._4_4_ * fStack_16c;
        fVar60 = fVar47 * auVar50._8_4_ * fStack_168;
        auVar57._0_4_ = fVar59 + fVar48 + fVar60;
        auVar57._4_4_ = fVar59 + fVar48 + fVar60;
        auVar57._8_4_ = fVar59 + fVar48 + fVar60;
        auVar57._12_4_ = fVar59 + fVar48 + fVar60;
        auVar26._0_4_ = fVar22 + fVar61 + fVar32;
        auVar26._4_4_ = fVar22 + fVar61 + fVar32;
        auVar26._8_4_ = fVar22 + fVar61 + fVar32;
        auVar26._12_4_ = fVar22 + fVar61 + fVar32;
        auVar50 = minps(auVar26,auVar57);
        auVar50 = minps(auVar50,auVar30);
        fVar48 = auVar50._0_4_ - fVar23;
        if ((float)local_60 < fVar48) {
          local_60 = CONCAT44(auVar50._4_4_ - fVar23,fVar48);
          uStack_58 = CONCAT44(auVar50._12_4_ - fVar23,auVar50._8_4_ - fVar23);
          pfVar7 = pfVar17;
        }
        pfVar17 = pfVar17 + 0x14;
        iVar16 = iVar16 + -1;
      } while (-1 < iVar16);
    }
    local_28 = pfVar7 + 8;
    local_24 = pfVar7 + 4;
    FUN_0112b1d0(&DAT_01701b10,pfVar7[4],pfVar7[8],pfVar7[0xc],&local_40);
  }
  pfVar17 = (float *)*local_24;
  fVar23 = pfVar17[1];
  fVar48 = pfVar17[2];
  fVar59 = pfVar17[3];
  *local_7c = *pfVar17;
  local_7c[1] = fVar23;
  local_7c[2] = fVar48;
  local_7c[3] = fVar59;
  pfVar17 = (float *)*local_28;
  fVar23 = pfVar17[1];
  fVar48 = pfVar17[2];
  fVar59 = pfVar17[3];
  local_7c[4] = *pfVar17;
  local_7c[5] = fVar23;
  local_7c[6] = fVar48;
  local_7c[7] = fVar59;
  pfVar17 = (float *)pfVar7[0xc];
  fVar23 = pfVar17[1];
  fVar48 = pfVar17[2];
  fVar59 = pfVar17[3];
  local_7c[8] = *pfVar17;
  local_7c[9] = fVar23;
  local_7c[10] = fVar48;
  local_7c[0xb] = fVar59;
  local_20 = (float *)0x0;
  FUN_0112b1d0(&DAT_01701b10,local_7c,local_7c + 4,local_7c + 8,&local_40);
  auVar27._4_4_ = -(uint)(fStack_3c < fStack_6c);
  auVar27._0_4_ = -(uint)(local_40 < local_70);
  auVar27._8_4_ = -(uint)(fStack_38 < fStack_68);
  auVar27._12_4_ = -(uint)(fStack_34 < fStack_64);
  uVar18 = movmskps(extraout_EDX,auVar27);
  pfVar17 = local_20;
  while (((uVar18 & 7) != 0 && ((int)pfVar17 < 10))) {
    pfVar7 = (float *)FUN_0112a770(pfVar7);
    pfVar13 = (float *)pfVar7[4];
    fVar23 = pfVar13[1];
    fVar48 = pfVar13[2];
    fVar59 = pfVar13[3];
    *local_7c = *pfVar13;
    local_7c[1] = fVar23;
    local_7c[2] = fVar48;
    local_7c[3] = fVar59;
    pfVar13 = (float *)pfVar7[8];
    fVar23 = pfVar13[1];
    fVar48 = pfVar13[2];
    fVar59 = pfVar13[3];
    local_7c[4] = *pfVar13;
    local_7c[5] = fVar23;
    local_7c[6] = fVar48;
    local_7c[7] = fVar59;
    pfVar13 = (float *)pfVar7[0xc];
    fVar23 = pfVar13[1];
    fVar48 = pfVar13[2];
    fVar59 = pfVar13[3];
    local_7c[8] = *pfVar13;
    local_7c[9] = fVar23;
    local_7c[10] = fVar48;
    local_7c[0xb] = fVar59;
    pfVar17 = (float *)((int)pfVar17 + 1);
    uVar15 = FUN_0112b1d0(&DAT_01701b10,local_7c,local_7c + 4,local_7c + 8,&local_40);
    auVar28._4_4_ = -(uint)(fStack_3c < fStack_6c);
    auVar28._0_4_ = -(uint)(local_40 < local_70);
    auVar28._8_4_ = -(uint)(fStack_38 < fStack_68);
    auVar28._12_4_ = -(uint)(fStack_34 < fStack_64);
    uVar18 = movmskps(uVar15,auVar28);
  }
  fVar23 = pfVar7[4];
  fVar60 = *(float *)((int)fVar23 + 0x14);
  fVar61 = *(float *)((int)fVar23 + 0x18);
  fVar22 = *(float *)((int)fVar23 + 0x1c);
  fVar48 = pfVar7[8];
  fVar59 = pfVar7[0xc];
  *local_84 = *(float *)((int)fVar23 + 0x10);
  local_84[1] = fVar60;
  local_84[2] = fVar61;
  local_84[3] = fVar22;
  uVar15 = *(undefined4 *)((int)fVar23 + 0x24);
  uVar31 = *(undefined4 *)((int)fVar23 + 0x28);
  uVar33 = *(undefined4 *)((int)fVar23 + 0x2c);
  *local_80 = *(undefined4 *)((int)fVar23 + 0x20);
  local_80[1] = uVar15;
  local_80[2] = uVar31;
  local_80[3] = uVar33;
  fVar23 = *(float *)((int)fVar48 + 0x14);
  fVar60 = *(float *)((int)fVar48 + 0x18);
  fVar61 = *(float *)((int)fVar48 + 0x1c);
  local_84[4] = *(float *)((int)fVar48 + 0x10);
  local_84[5] = fVar23;
  local_84[6] = fVar60;
  local_84[7] = fVar61;
  uVar15 = *(undefined4 *)((int)fVar48 + 0x24);
  uVar31 = *(undefined4 *)((int)fVar48 + 0x28);
  uVar33 = *(undefined4 *)((int)fVar48 + 0x2c);
  local_80[4] = *(undefined4 *)((int)fVar48 + 0x20);
  local_80[5] = uVar15;
  local_80[6] = uVar31;
  local_80[7] = uVar33;
  fVar23 = *(float *)((int)fVar59 + 0x14);
  fVar48 = *(float *)((int)fVar59 + 0x18);
  fVar60 = *(float *)((int)fVar59 + 0x1c);
  local_84[8] = *(float *)((int)fVar59 + 0x10);
  local_84[9] = fVar23;
  local_84[10] = fVar48;
  local_84[0xb] = fVar60;
  uVar15 = *(undefined4 *)((int)fVar59 + 0x24);
  uVar31 = *(undefined4 *)((int)fVar59 + 0x28);
  uVar33 = *(undefined4 *)((int)fVar59 + 0x2c);
  local_80[8] = *(undefined4 *)((int)fVar59 + 0x20);
  local_80[9] = uVar15;
  local_80[10] = uVar31;
  local_80[0xb] = uVar33;
  local_78 = 3;
  fVar23 = local_84[5];
  fVar48 = local_84[6];
  fVar59 = local_84[7];
  fVar60 = local_84[1];
  fVar61 = local_84[2];
  fVar22 = local_84[3];
  fVar32 = local_84[9];
  fVar34 = local_84[10];
  fVar44 = local_84[0xb];
  param_8[8] = fStack_3c * local_84[4] + local_40 * *local_84 + fStack_38 * local_84[8];
  param_8[9] = fStack_3c * fVar23 + local_40 * fVar60 + fStack_38 * fVar32;
  param_8[10] = fStack_3c * fVar48 + local_40 * fVar61 + fStack_38 * fVar34;
  param_8[0xb] = fStack_3c * fVar59 + local_40 * fVar22 + fStack_38 * fVar44;
  fVar23 = pfVar7[1];
  fVar48 = pfVar7[2];
  fVar59 = pfVar7[3];
  param_8[4] = -*pfVar7;
  param_8[5] = -fVar23;
  param_8[6] = -fVar48;
  param_8[7] = -fVar59;
  fVar23 = pfVar7[0x10];
  *param_8 = local_70 - fVar23;
  param_8[1] = fStack_6c - fVar23;
  param_8[2] = fStack_68 - fVar23;
  param_8[3] = fStack_64 - fVar23;
  local_14 = local_1c;
LAB_01125f35:
  *param_6 = 3;
  *param_7 = 3;
  if ((*(short *)(local_48 + 0x3c) == *(short *)(local_48 + 0x4c)) ||
     (*(short *)(local_48 + 0x2c) == *(short *)(local_48 + 0x4c))) {
    *param_6 = *param_6 + -1;
  }
  if ((1 < *param_6) && (*(short *)(local_48 + 0x2c) == *(short *)(local_48 + 0x3c))) {
    iVar16 = *param_6;
    *param_6 = iVar16 + -1;
    puVar14 = (undefined4 *)(local_48 + (iVar16 + 1) * 0x10);
    uVar15 = puVar14[1];
    uVar31 = puVar14[2];
    uVar33 = puVar14[3];
    *(undefined4 *)(local_48 + 0x20) = *puVar14;
    *(undefined4 *)(local_48 + 0x24) = uVar15;
    *(undefined4 *)(local_48 + 0x28) = uVar31;
    *(undefined4 *)(local_48 + 0x2c) = uVar33;
  }
  if ((*(short *)(local_48 + 0x7c) == *(short *)(local_48 + 0x8c)) ||
     (*(short *)(local_48 + 0x6c) == *(short *)(local_48 + 0x8c))) {
    *param_7 = *param_7 + -1;
  }
  if ((1 < *param_7) && (*(short *)(local_48 + 0x6c) == *(short *)(local_48 + 0x7c))) {
    iVar16 = *param_7;
    *param_7 = iVar16 + -1;
    puVar14 = (undefined4 *)(local_48 + (iVar16 + 5) * 0x10);
    uVar15 = puVar14[1];
    uVar31 = puVar14[2];
    uVar33 = puVar14[3];
    *(undefined4 *)(local_48 + 0x60) = *puVar14;
    *(undefined4 *)(local_48 + 100) = uVar15;
    *(undefined4 *)(local_48 + 0x68) = uVar31;
    *(undefined4 *)(local_48 + 0x6c) = uVar33;
  }
  if (*param_6 + *param_7 < 5) goto LAB_01126972;
  if (*param_7 < *param_6) {
    *param_6 = 3;
    *param_7 = 1;
    goto LAB_01126972;
  }
  *param_7 = 3;
  param_7 = param_6;
  goto LAB_0112696c;
}

// 011269B0  FUN_011269b0  size=39  [run]
float10 FUN_011269b0(int param_1)

{
  return (float10)(param_1 * -0x3e39b193 + 0x3039U & 0x7fffffff) * (float10)4.656613e-10;
}

// 01126A00  FUN_01126a00  size=12  [run]
void __thiscall FUN_01126a00(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01126A30  FUN_01126a30  size=12  [run]
void __thiscall FUN_01126a30(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01126A60  FUN_01126a60  size=12  [run]
void __thiscall FUN_01126a60(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01126A90  FUN_01126a90  size=12  [run]
void __thiscall FUN_01126a90(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01126AC0  FUN_01126ac0  size=32  [run]
void __thiscall FUN_01126ac0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2;
  param_1[3] = param_1[3];
  return;
}

// 01126AE0  FUN_01126ae0  size=19  [run]
bool __thiscall FUN_01126ae0(float *param_1,float *param_2)

{
  return *param_2 <= *param_1;
}

// 01126B00  FUN_01126b00  size=22  [run]
void __thiscall
FUN_01126b00(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = minps(*param_2,*param_3);
  *param_1 = auVar1;
  return;
}

// 01126B50  FUN_01126b50  size=175  [run]
int __fastcall FUN_01126b50(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + 0xfb0);
  iVar4 = *(int *)(param_1 + 0x10) + -2;
  iVar1 = param_1 + 0xf70;
  if (-1 < iVar4) {
    uVar2 = *(int *)(param_1 + 0x10) - 1;
    iVar3 = iVar1;
    if (3 < (int)uVar2) {
      uVar2 = uVar2 >> 2;
      iVar4 = iVar4 + uVar2 * -4;
      do {
        if (*(float *)(iVar3 + 0x90) < fVar5) {
          iVar1 = iVar3 + 0x50;
          fVar5 = *(float *)(iVar3 + 0x90);
        }
        if (*(float *)(iVar3 + 0xe0) < fVar5) {
          iVar1 = iVar3 + 0xa0;
          fVar5 = *(float *)(iVar3 + 0xe0);
        }
        if (*(float *)(iVar3 + 0x130) < fVar5) {
          iVar1 = iVar3 + 0xf0;
          fVar5 = *(float *)(iVar3 + 0x130);
        }
        if (*(float *)(iVar3 + 0x180) < fVar5) {
          iVar1 = iVar3 + 0x140;
          fVar5 = *(float *)(iVar3 + 0x180);
        }
        iVar3 = iVar3 + 0x140;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    for (; -1 < iVar4; iVar4 = iVar4 + -1) {
      if (*(float *)(iVar3 + 0x90) < fVar5) {
        iVar1 = iVar3 + 0x50;
        fVar5 = *(float *)(iVar3 + 0x90);
      }
      iVar3 = iVar3 + 0x50;
    }
  }
  return iVar1;
}

// 01126C50  FUN_01126c50  size=19  [run]
void __thiscall FUN_01126c50(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 8) < 0x37;
  return;
}

// 01126C80  FUN_01126c80  size=176  [run]
void __thiscall
FUN_01126c80(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 8) = 4;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0x40) = *param_3;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 0x20) = *param_4;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  *(undefined4 *)(param_1 + 0x7c) = uVar4;
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *(undefined4 *)(param_1 + 0x80) = param_3[4];
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  uVar1 = param_4[5];
  uVar2 = param_4[6];
  uVar3 = param_4[7];
  *(undefined4 *)(param_1 + 0x60) = param_4[4];
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  *(undefined4 *)(param_1 + 0xc0) = param_3[8];
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  *(undefined4 *)(param_1 + 200) = uVar2;
  *(undefined4 *)(param_1 + 0xcc) = uVar3;
  uVar1 = param_4[9];
  uVar2 = param_4[10];
  uVar3 = param_4[0xb];
  *(undefined4 *)(param_1 + 0xa0) = param_4[8];
  *(undefined4 *)(param_1 + 0xa4) = uVar1;
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xac) = uVar3;
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar4 = param_2[0xf];
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xf0) = uVar1;
  *(undefined4 *)(param_1 + 0xf4) = uVar2;
  *(undefined4 *)(param_1 + 0xf8) = uVar3;
  *(undefined4 *)(param_1 + 0xfc) = uVar4;
  uVar1 = param_3[0xd];
  uVar2 = param_3[0xe];
  uVar3 = param_3[0xf];
  *(undefined4 *)(param_1 + 0x100) = param_3[0xc];
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  uVar1 = param_4[0xd];
  uVar2 = param_4[0xe];
  uVar3 = param_4[0xf];
  *(undefined4 *)(param_1 + 0xe0) = param_4[0xc];
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  *(undefined4 *)(param_1 + 0x110) = 0;
  FUN_0112ac40();
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 01126D50  FUN_01126d50  size=99  [run]
void __thiscall FUN_01126d50(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 0;
  iVar3 = *(int *)(param_1 + 0xc) + -1;
  if (param_2 != (undefined4 *)0x0) {
    iVar2 = (int)param_2;
    param_2 = (undefined4 *)(param_1 + 0xde0 + iVar3 * 4);
    do {
      if (iVar3 < 0) break;
      uVar1 = *param_2;
      param_2 = param_2 + -1;
      *(undefined4 *)(param_3 + iVar4 * 4) = uVar1;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (0 < iVar2) {
      piVar5 = (int *)(param_3 + iVar4 * 4);
      do {
        iVar3 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar3 + 1;
        *piVar5 = param_1 + 0xf70 + iVar3 * 0x50;
        piVar5 = piVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

// 01126E40  FUN_01126e40  size=90  [run]
void __thiscall FUN_01126e40(undefined4 *param_1,undefined4 *param_2)

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
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  return;
}

// 01126EA0  FUN_01126ea0  size=78  [run]
void FUN_01126ea0(int param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = ((float)(param_1 * -0x3e39b193 + 0x3039U & 0x7fffffff) * 4.656613e-10 + param_2) *
          (param_3 - param_2);
  *param_4 = fVar1;
  param_4[1] = fVar1;
  param_4[2] = fVar1;
  return;
}

// 01126F30  FUN_01126f30  size=55  [run]
void __thiscall FUN_01126f30(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x84);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1 = *(undefined4 **)(param_1 + 0x7c);
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *puVar1 = param_2[4];
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1 = *(undefined4 **)(param_1 + 0x80);
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *puVar1 = param_2[8];
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  *(undefined4 *)(param_1 + 0x88) = 1;
  return;
}

// 01126F70  FUN_01126f70  size=58  [run]
void __thiscall FUN_01126f70(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x84);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar1 + 0x10) = *param_2;
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = uVar3;
  *(undefined4 *)(iVar1 + 0x1c) = uVar4;
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined4 *)(iVar1 + 0x10) = param_2[4];
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = uVar3;
  *(undefined4 *)(iVar1 + 0x1c) = uVar4;
  iVar1 = *(int *)(param_1 + 0x80);
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x10) = param_2[8];
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0x18) = uVar3;
  *(undefined4 *)(iVar1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = 2;
  return;
}

// 01126FB0  FUN_01126fb0  size=58  [run]
void __thiscall FUN_01126fb0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x84);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar1 + 0x20) = *param_2;
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  *(undefined4 *)(iVar1 + 0x2c) = uVar4;
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined4 *)(iVar1 + 0x20) = param_2[4];
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  *(undefined4 *)(iVar1 + 0x2c) = uVar4;
  iVar1 = *(int *)(param_1 + 0x80);
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x20) = param_2[8];
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  *(undefined4 *)(iVar1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = 3;
  return;
}

// 01126FF0  FUN_01126ff0  size=58  [run]
void __thiscall FUN_01126ff0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x84);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar1 + 0x30) = *param_2;
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(iVar1 + 0x38) = uVar3;
  *(undefined4 *)(iVar1 + 0x3c) = uVar4;
  iVar1 = *(int *)(param_1 + 0x7c);
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  *(undefined4 *)(iVar1 + 0x30) = param_2[4];
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(iVar1 + 0x38) = uVar3;
  *(undefined4 *)(iVar1 + 0x3c) = uVar4;
  iVar1 = *(int *)(param_1 + 0x80);
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x30) = param_2[8];
  *(undefined4 *)(iVar1 + 0x34) = uVar2;
  *(undefined4 *)(iVar1 + 0x38) = uVar3;
  *(undefined4 *)(iVar1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x88) = 4;
  return;
}

// 01127030  FUN_01127030  size=16  [run]
void __thiscall FUN_01127030(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  
  auVar1 = rsqrtps(in_XMM0,*param_1);
  *param_2 = auVar1;
  return;
}

// 01127040  FUN_01127040  size=54  [run]
float10 __thiscall FUN_01127040(float *param_1,float *param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)param_1[4];
  return (float10)((param_2[1] - pfVar1[1]) * param_1[1] + (*param_2 - *pfVar1) * *param_1 +
                  (param_2[2] - pfVar1[2]) * param_1[2]);
}

// 01127080  FUN_01127080  size=120  [run]
undefined4 __thiscall FUN_01127080(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  
  pfVar1 = (float *)param_1[4];
  fVar3 = (param_2[1] - pfVar1[1]) * param_1[1] + (*param_2 - *pfVar1) * *param_1 +
          (param_2[2] - pfVar1[2]) * param_1[2];
  uVar2 = 1;
  if (fVar3 <= *param_3) {
    if (*param_3 < fVar3 + 1e-07) {
      *param_3 = fVar3 + 1e-07;
    }
    uVar2 = 2;
  }
  else if (fVar3 < *param_4) {
    *param_4 = fVar3;
  }
  if (*param_4 <= *param_3) {
    uVar2 = 4;
  }
  return uVar2;
}

// 01127100  FUN_01127100  size=190  [run]
undefined4 __thiscall
FUN_01127100(float *param_1,float *param_2,float *param_3,undefined4 *param_4,undefined4 *param_5)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  *param_5 = 0;
  *param_4 = 0;
  param_1[1] = 3.40282e+38;
  *param_1 = 1e-07;
  pfVar1 = (float *)param_2[4];
  fVar4 = (param_3[2] - pfVar1[2]) * param_2[2] +
          (param_3[1] - pfVar1[1]) * param_2[1] + (*param_3 - *pfVar1) * *param_2;
  fVar3 = 1.4013e-45;
  if (fVar4 <= 1e-07) {
    if (1e-07 < fVar4 + 1e-07) {
      *param_1 = fVar4 + 1e-07;
    }
    fVar3 = 2.8026e-45;
  }
  else if (fVar4 < param_1[1]) {
    param_1[1] = fVar4;
  }
  if (param_1[1] <= *param_1) {
    fVar3 = 5.60519e-45;
  }
  param_2[0x11] = fVar3;
  if (fVar3 == 1.4013e-45) {
    uVar2 = FUN_0112a640(param_2,param_3,param_4,param_5);
    return uVar2;
  }
  return 2;
}

// 01127430  FUN_01127430  size=46  [run]
void __thiscall FUN_01127430(float *param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar4;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  fVar1 = *param_1 * *param_1;
  fVar4 = param_1[1] * param_1[1];
  auVar2._8_4_ = param_1[2] * param_1[2];
  auVar2._4_4_ = auVar2._8_4_;
  auVar2._0_4_ = auVar2._8_4_;
  auVar2._12_4_ = auVar2._8_4_;
  auVar3._4_4_ = fVar4 + fVar1 + auVar2._8_4_;
  auVar3._0_4_ = fVar4 + fVar1 + auVar2._8_4_;
  auVar3._8_4_ = fVar4 + fVar1 + auVar2._8_4_;
  auVar3._12_4_ = fVar4 + fVar1 + auVar2._8_4_;
  auVar3 = rsqrtps(auVar2,auVar3);
  *param_2 = auVar3;
  return;
}

// 01127460  FUN_01127460  size=144  [run]
void __thiscall
FUN_01127460(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,float param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_1 = *param_5;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_5[5];
  uVar2 = param_5[6];
  uVar3 = param_5[7];
  param_1[4] = param_5[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_5[9];
  uVar2 = param_5[10];
  uVar3 = param_5[0xb];
  param_1[8] = param_5[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_5[0xd];
  uVar2 = param_5[0xe];
  uVar3 = param_5[0xf];
  param_1[0xc] = param_5[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x14] = param_2;
  param_1[0x1c] = param_3;
  param_1[0x1d] = param_4;
  param_1[0x10] = param_6;
  param_1[0x11] = param_6;
  param_1[0x12] = param_6;
  param_1[0x13] = param_1[0x13];
  param_6 = param_6 * param_6;
  param_1[0x1f] = param_7;
  param_1[0x20] = param_8;
  param_1[0x1e] = 0;
  param_1[0x18] = param_6;
  param_1[0x19] = param_6;
  param_1[0x1a] = param_6;
  param_1[0x1b] = param_6;
  param_1[0x21] = param_9;
  param_1[0x22] = param_10;
  return;
}

// 011278F0  FUN_011278f0  size=231  [run]
undefined4 __thiscall FUN_011278f0(float *param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar15;
  
  fVar1 = *param_2 - *param_3;
  fVar2 = param_2[1] - param_3[1];
  fVar3 = param_2[2] - param_3[2];
  fVar4 = param_2[3] - param_3[3];
  fVar5 = *param_3 - *param_4;
  fVar6 = param_3[1] - param_4[1];
  fVar8 = param_3[2] - param_4[2];
  fVar10 = param_3[3] - param_4[3];
  fVar11 = fVar8 * fVar2 - fVar6 * fVar3;
  fVar3 = fVar5 * fVar3 - fVar8 * fVar1;
  fVar6 = fVar6 * fVar1 - fVar5 * fVar2;
  fVar1 = fVar11 * fVar11;
  fVar2 = fVar3 * fVar3;
  fVar5 = fVar6 * fVar6;
  if (fVar2 + fVar1 + fVar5 <= 0.0) {
    return 1;
  }
  fVar8 = fVar2 + fVar1 + fVar5;
  fVar7 = fVar2 + fVar1 + fVar5;
  fVar9 = fVar2 + fVar1 + fVar5;
  fVar5 = fVar2 + fVar1 + fVar5;
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  auVar13._4_4_ = fVar7;
  auVar13._0_4_ = fVar8;
  auVar13._8_4_ = fVar9;
  auVar13._12_4_ = fVar5;
  auVar13 = rsqrtps(auVar12,auVar13);
  fVar1 = auVar13._0_4_;
  fVar2 = auVar13._4_4_;
  fVar14 = auVar13._8_4_;
  fVar15 = auVar13._12_4_;
  fVar11 = (float)(~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar1 * fVar8 * fVar1) * fVar1 * 0.5)) *
           fVar11;
  fVar3 = (float)(~-(uint)(fVar7 <= 0.0) & (uint)((3.0 - fVar2 * fVar7 * fVar2) * fVar2 * 0.5)) *
          fVar3;
  fVar6 = (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar14 * fVar9 * fVar14) * fVar14 * 0.5)) *
          fVar6;
  param_1[0x10] = param_2[1] * fVar3 + *param_2 * fVar11 + param_2[2] * fVar6;
  *param_1 = fVar11;
  param_1[1] = fVar3;
  param_1[2] = fVar6;
  param_1[3] = (float)(~-(uint)(fVar5 <= 0.0) &
                      (uint)((3.0 - fVar15 * fVar5 * fVar15) * fVar15 * 0.5)) *
               (fVar10 * fVar4 - fVar10 * fVar4);
  return 0;
}

// 011279E0  FUN_011279e0  size=480  [run]
byte __thiscall FUN_011279e0(int param_1,int *param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
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
  float fVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  int local_8;
  
  iVar8 = 0;
  piVar10 = param_4;
  if (0 < param_3) {
    do {
      if (piVar10 == (int *)0x0) {
        return 2;
      }
      pfVar4 = (float *)param_2[iVar8];
      iVar1 = iVar8 + 1;
      if (iVar1 < param_3) {
        local_8 = param_2[iVar8 + 1];
      }
      else {
        local_8 = *param_2;
      }
      pfVar4[7] = (float)pfVar4;
      pfVar4[0xb] = (float)pfVar4;
      pfVar4[0xf] = (float)pfVar4;
      pfVar4[5] = (float)(pfVar4 + 8);
      pfVar2 = pfVar4 + 0xc;
      pfVar4[9] = (float)pfVar2;
      pfVar4[0xd] = (float)(pfVar4 + 4);
      pfVar5 = *(float **)piVar10[1];
      pfVar6 = (float *)*piVar10;
      pfVar7 = (float *)*param_5;
      pfVar4[4] = (float)pfVar5;
      *pfVar2 = (float)pfVar7;
      pfVar4[8] = (float)pfVar6;
      piVar10[2] = (int)(pfVar4 + 4);
      pfVar4[6] = (float)piVar10;
      *(float **)(local_8 + 0x28) = pfVar2;
      pfVar4[0xe] = (float)(local_8 + 0x20);
      fVar11 = *pfVar5 - *pfVar6;
      fVar12 = pfVar5[1] - pfVar6[1];
      fVar13 = pfVar5[2] - pfVar6[2];
      fVar14 = pfVar5[3] - pfVar6[3];
      fVar15 = *pfVar6 - *pfVar7;
      fVar16 = pfVar6[1] - pfVar7[1];
      fVar18 = pfVar6[2] - pfVar7[2];
      fVar20 = pfVar6[3] - pfVar7[3];
      fVar21 = fVar18 * fVar12 - fVar16 * fVar13;
      fVar13 = fVar15 * fVar13 - fVar18 * fVar11;
      fVar16 = fVar16 * fVar11 - fVar15 * fVar12;
      fVar11 = fVar21 * fVar21;
      fVar12 = fVar13 * fVar13;
      fVar15 = fVar16 * fVar16;
      if (fVar12 + fVar11 + fVar15 <= 0.0) {
        return 2;
      }
      fVar18 = fVar12 + fVar11 + fVar15;
      fVar17 = fVar12 + fVar11 + fVar15;
      fVar19 = fVar12 + fVar11 + fVar15;
      fVar15 = fVar12 + fVar11 + fVar15;
      auVar22._0_12_ = ZEXT812(0);
      auVar22._12_4_ = 0;
      auVar23._4_4_ = fVar17;
      auVar23._0_4_ = fVar18;
      auVar23._8_4_ = fVar19;
      auVar23._12_4_ = fVar15;
      auVar23 = rsqrtps(auVar22,auVar23);
      fVar11 = auVar23._0_4_;
      fVar12 = auVar23._4_4_;
      fVar24 = auVar23._8_4_;
      fVar25 = auVar23._12_4_;
      fVar21 = (float)(~-(uint)(fVar18 <= 0.0) &
                      (uint)((3.0 - fVar11 * fVar18 * fVar11) * fVar11 * 0.5)) * fVar21;
      fVar13 = (float)(~-(uint)(fVar17 <= 0.0) &
                      (uint)((3.0 - fVar12 * fVar17 * fVar12) * fVar12 * 0.5)) * fVar13;
      fVar16 = (float)(~-(uint)(fVar19 <= 0.0) &
                      (uint)((3.0 - fVar24 * fVar19 * fVar24) * fVar24 * 0.5)) * fVar16;
      pfVar4[0x10] = pfVar5[1] * fVar13 + *pfVar5 * fVar21 + pfVar5[2] * fVar16;
      *pfVar4 = fVar21;
      pfVar4[1] = fVar13;
      pfVar4[2] = fVar16;
      pfVar4[3] = (float)(~-(uint)(fVar15 <= 0.0) &
                         (uint)((3.0 - fVar25 * fVar15 * fVar25) * fVar25 * 0.5)) *
                  (fVar20 * fVar14 - fVar20 * fVar14);
      piVar3 = piVar10 + 1;
      piVar10 = *(int **)(*(int *)*piVar3 + 0x30);
      *(undefined4 *)(*(int *)*piVar3 + 0x30) = 0;
      iVar8 = iVar1;
    } while (iVar1 < param_3);
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    puVar9 = (undefined4 *)(param_1 + 0xfb4);
    do {
      *puVar9 = 0;
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 0x14;
    } while (iVar8 < *(int *)(param_1 + 0x10));
  }
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    puVar9 = (undefined4 *)(param_1 + 0x50);
    do {
      *puVar9 = 0;
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 0x10;
    } while (iVar8 < *(int *)(param_1 + 8));
  }
  return -(param_4 != piVar10) & 2;
}

// 01127BC0  FUN_01127bc0  size=591  [run]
byte __thiscall FUN_01127bc0(int param_1,int param_2,int *param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
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
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar24;
  int local_1a4 [100];
  int local_14;
  float *local_10;
  int local_c;
  int *local_8;
  
  iVar8 = 0;
  iVar4 = *(int *)(param_1 + 0xc) + -1;
  if (param_2 != 0) {
    local_8 = (int *)(param_1 + 0xde0 + iVar4 * 4);
    iVar5 = param_2;
    do {
      if (iVar4 < 0) break;
      iVar1 = *local_8;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      local_8 = local_8 + -1;
      local_1a4[iVar8] = iVar1;
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (0 < iVar5) {
      iVar4 = *(int *)(param_1 + 0x10);
      piVar7 = local_1a4 + iVar8;
      do {
        *piVar7 = param_1 + 0xf70 + iVar4 * 0x50;
        iVar4 = iVar4 + 1;
        piVar7 = piVar7 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *(int *)(param_1 + 0x10) = iVar4;
    }
  }
  local_c = 0;
  piVar6 = param_3;
  piVar7 = param_3;
  if (0 < param_2) {
    do {
      if (piVar6 == (int *)0x0) {
        return 2;
      }
      pfVar2 = (float *)local_1a4[local_c];
      local_14 = local_c + 1;
      local_8 = (int *)local_1a4[0];
      if (local_14 < param_2) {
        local_8 = (int *)local_1a4[local_c + 1];
      }
      pfVar2[5] = (float)(pfVar2 + 8);
      pfVar2[7] = (float)pfVar2;
      pfVar2[0xb] = (float)pfVar2;
      pfVar2[0xf] = (float)pfVar2;
      pfVar2[9] = (float)(pfVar2 + 0xc);
      pfVar2[0xd] = (float)(pfVar2 + 4);
      pfVar3 = *(float **)piVar6[1];
      local_10 = (float *)*piVar6;
      pfVar2[4] = (float)pfVar3;
      pfVar2[8] = (float)local_10;
      pfVar2[0xc] = (float)param_4;
      piVar6[2] = (int)(pfVar2 + 4);
      pfVar2[6] = (float)piVar6;
      *(float **)((int)local_8 + 0x28) = pfVar2 + 0xc;
      pfVar2[0xe] = (float)((int)local_8 + 0x20);
      fVar10 = *pfVar3 - *local_10;
      fVar11 = pfVar3[1] - local_10[1];
      fVar12 = pfVar3[2] - local_10[2];
      fVar13 = pfVar3[3] - local_10[3];
      fVar14 = *local_10 - *param_4;
      fVar15 = local_10[1] - param_4[1];
      fVar17 = local_10[2] - param_4[2];
      fVar19 = local_10[3] - param_4[3];
      fVar20 = fVar17 * fVar11 - fVar15 * fVar12;
      fVar12 = fVar14 * fVar12 - fVar17 * fVar10;
      fVar15 = fVar15 * fVar10 - fVar14 * fVar11;
      fVar10 = fVar20 * fVar20;
      fVar11 = fVar12 * fVar12;
      fVar14 = fVar15 * fVar15;
      if (fVar11 + fVar10 + fVar14 <= 0.0) {
        return 2;
      }
      fVar17 = fVar11 + fVar10 + fVar14;
      fVar16 = fVar11 + fVar10 + fVar14;
      fVar18 = fVar11 + fVar10 + fVar14;
      fVar14 = fVar11 + fVar10 + fVar14;
      auVar21._0_12_ = ZEXT812(0);
      auVar21._12_4_ = 0;
      auVar22._4_4_ = fVar16;
      auVar22._0_4_ = fVar17;
      auVar22._8_4_ = fVar18;
      auVar22._12_4_ = fVar14;
      auVar22 = rsqrtps(auVar21,auVar22);
      fVar10 = auVar22._0_4_;
      fVar11 = auVar22._4_4_;
      fVar23 = auVar22._8_4_;
      fVar24 = auVar22._12_4_;
      fVar20 = (float)(~-(uint)(fVar17 <= 0.0) &
                      (uint)((3.0 - fVar10 * fVar17 * fVar10) * fVar10 * 0.5)) * fVar20;
      fVar12 = (float)(~-(uint)(fVar16 <= 0.0) &
                      (uint)((3.0 - fVar11 * fVar16 * fVar11) * fVar11 * 0.5)) * fVar12;
      fVar15 = (float)(~-(uint)(fVar18 <= 0.0) &
                      (uint)((3.0 - fVar23 * fVar18 * fVar23) * fVar23 * 0.5)) * fVar15;
      pfVar2[0x10] = pfVar3[1] * fVar12 + *pfVar3 * fVar20 + pfVar3[2] * fVar15;
      *pfVar2 = fVar20;
      pfVar2[1] = fVar12;
      pfVar2[2] = fVar15;
      pfVar2[3] = (float)(~-(uint)(fVar14 <= 0.0) &
                         (uint)((3.0 - fVar24 * fVar14 * fVar24) * fVar24 * 0.5)) *
                  (fVar19 * fVar13 - fVar19 * fVar13);
      piVar7 = *(int **)(*(int *)piVar6[1] + 0x30);
      *(undefined4 *)(*(int *)piVar6[1] + 0x30) = 0;
      local_c = local_14;
      piVar6 = piVar7;
    } while (local_14 < param_2);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    puVar9 = (undefined4 *)(param_1 + 0xfb4);
    do {
      *puVar9 = 0;
      iVar4 = iVar4 + 1;
      puVar9 = puVar9 + 0x14;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    puVar9 = (undefined4 *)(param_1 + 0x50);
    do {
      *puVar9 = 0;
      iVar4 = iVar4 + 1;
      puVar9 = puVar9 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  return -(param_3 != piVar7) & 2;
}

// 0112A5C0  FUN_0112a5c0  size=5  [run]
undefined4 __fastcall FUN_0112a5c0(undefined4 param_1)

{
  return param_1;
}

// 0112A630  FUN_0112a630  size=10  [run]
void FUN_0112a630(void)

{
  return;
}

// 0112A640  FUN_0112a640  size=302  [run]
int __thiscall FUN_0112a640(float *param_1,float param_2,float *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int local_c;
  int *local_8;
  
  iVar5 = 0;
  local_8 = (int *)((int)param_2 + 0x18);
  local_c = 0;
  do {
    piVar1 = (int *)*local_8;
    pfVar2 = (float *)piVar1[3];
    fVar4 = pfVar2[0x11];
    if (fVar4 == 0.0) {
      pfVar3 = (float *)pfVar2[4];
      fVar6 = (param_3[1] - pfVar3[1]) * pfVar2[1] + (*param_3 - *pfVar3) * *pfVar2 +
              (param_3[2] - pfVar3[2]) * pfVar2[2];
      fVar4 = 1.4013e-45;
      if (fVar6 <= *param_1) {
        if (*param_1 < fVar6 + 1e-07) {
          *param_1 = fVar6 + 1e-07;
        }
        fVar4 = 2.8026e-45;
      }
      else if (fVar6 < param_1[1]) {
        param_1[1] = fVar6;
      }
      if (param_1[1] <= *param_1) {
        fVar4 = 5.60519e-45;
      }
      pfVar2[0x11] = fVar4;
      if (fVar4 != 1.4013e-45) {
        if (fVar4 != 5.60519e-45) goto LAB_0112a706;
        iVar5 = 2;
        goto LAB_0112a735;
      }
      iVar5 = FUN_0112a640(pfVar2,param_3,param_4,param_5);
      if (iVar5 == 2) goto LAB_0112a735;
    }
    else {
LAB_0112a706:
      if (fVar4 == 2.8026e-45) {
        *(int **)(*piVar1 + 0x30) = piVar1;
        *param_4 = *param_4 + 1;
        *param_5 = (int)piVar1;
      }
    }
    local_8 = local_8 + 4;
    local_c = local_c + 1;
    if (2 < local_c) {
LAB_0112a735:
      *(undefined4 *)((int)param_2 + 0x40) = 0x7f7fffee;
      if ((int)param_1[3] < 100) {
        param_1[(int)param_1[3] + 0x378] = param_2;
        param_1[3] = (float)((int)param_1[3] + 1);
        return iVar5;
      }
      return 2;
    }
  } while( true );
}

// 0112A770  FUN_0112a770  size=342  [run]
float * __thiscall FUN_0112a770(int param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float *local_8;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    puVar6 = (undefined4 *)(param_1 + 0xfb4);
    do {
      *puVar6 = 0;
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 0x14;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    puVar6 = (undefined4 *)(param_1 + 0x50);
    do {
      *puVar6 = 0;
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  local_8 = (float *)0x0;
  bVar8 = false;
  pfVar7 = param_2;
  do {
    if (bVar8) {
      return pfVar7;
    }
    pfVar7[0x11] = 4.2039e-45;
    iVar4 = 0;
    pfVar3 = pfVar7;
    do {
      pfVar5 = pfVar3 + 4;
      if (pfVar5 != local_8) {
        pfVar1 = (float *)*pfVar5;
        pfVar2 = *(float **)pfVar3[5];
        fVar12 = *pfVar2 - *pfVar1;
        fVar14 = pfVar2[1] - pfVar1[1];
        fVar16 = pfVar2[2] - pfVar1[2];
        fVar9 = (pfVar7[2] * fVar14 - pfVar7[1] * fVar16) * *pfVar1;
        fVar10 = (*pfVar7 * fVar16 - pfVar7[2] * fVar12) * pfVar1[1];
        fVar11 = (pfVar7[1] * fVar12 - *pfVar7 * fVar14) * pfVar1[2];
        fVar13 = fVar10 + fVar9 + fVar11;
        fVar15 = fVar10 + fVar9 + fVar11;
        fVar17 = fVar10 + fVar9 + fVar11;
        fVar11 = fVar10 + fVar9 + fVar11;
        auVar18._4_4_ = fVar15;
        auVar18._0_4_ = fVar13;
        auVar18._8_4_ = fVar17;
        auVar18._12_4_ = fVar11;
        auVar19._4_4_ = 0.0 - fVar15;
        auVar19._0_4_ = 0.0 - fVar13;
        auVar19._8_4_ = 0.0 - fVar17;
        auVar19._12_4_ = 0.0 - fVar11;
        auVar19 = maxps(auVar18,auVar19);
        if (auVar19._0_4_ * fVar13 <
            (fVar14 * fVar14 + fVar12 * fVar12 + fVar16 * fVar16) * -9.9999994e-11) {
          pfVar3 = *(float **)((int)pfVar3[6] + 0xc);
          if ((param_2[0x10] <= 0.0) ||
             (fVar9 = param_2[0x10] * 0.9, fVar9 < pfVar3[0x10] || fVar9 == pfVar3[0x10])) {
            local_8 = (float *)pfVar7[iVar4 * 4 + 6];
            bVar8 = pfVar3[0x11] == 4.2039e-45;
            pfVar7 = pfVar3;
            break;
          }
        }
      }
      iVar4 = iVar4 + 1;
      pfVar3 = pfVar5;
    } while (iVar4 < 3);
    if (iVar4 == 3) {
      return pfVar7;
    }
  } while( true );
}

// 0112A8D0  FUN_0112a8d0  size=172  [run]
void __fastcall FUN_0112a8d0(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
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
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  
  pfVar1 = (float *)param_1[8];
  pfVar2 = (float *)param_1[4];
  pfVar3 = (float *)param_1[0xc];
  fVar4 = *pfVar2 - *pfVar1;
  fVar5 = pfVar2[1] - pfVar1[1];
  fVar6 = pfVar2[2] - pfVar1[2];
  fVar7 = pfVar2[3] - pfVar1[3];
  fVar8 = *pfVar1 - *pfVar3;
  fVar10 = pfVar1[1] - pfVar3[1];
  fVar11 = pfVar1[2] - pfVar3[2];
  fVar12 = pfVar1[3] - pfVar3[3];
  fVar9 = fVar11 * fVar5 - fVar10 * fVar6;
  fVar11 = fVar8 * fVar6 - fVar11 * fVar4;
  fVar8 = fVar10 * fVar4 - fVar8 * fVar5;
  fVar4 = fVar9 * fVar9;
  fVar5 = fVar11 * fVar11;
  fVar6 = fVar8 * fVar8;
  fVar10 = fVar5 + fVar4 + fVar6;
  fVar13 = fVar5 + fVar4 + fVar6;
  fVar14 = fVar5 + fVar4 + fVar6;
  fVar6 = fVar5 + fVar4 + fVar6;
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar16._4_4_ = fVar13;
  auVar16._0_4_ = fVar10;
  auVar16._8_4_ = fVar14;
  auVar16._12_4_ = fVar6;
  auVar16 = rsqrtps(auVar15,auVar16);
  fVar4 = auVar16._0_4_;
  fVar5 = auVar16._4_4_;
  fVar17 = auVar16._8_4_;
  fVar18 = auVar16._12_4_;
  fVar9 = fVar9 * (float)(~-(uint)(fVar10 <= 0.0) &
                         (uint)((3.0 - fVar4 * fVar10 * fVar4) * fVar4 * 0.5));
  fVar11 = fVar11 * (float)(~-(uint)(fVar13 <= 0.0) &
                           (uint)((3.0 - fVar5 * fVar13 * fVar5) * fVar5 * 0.5));
  fVar8 = fVar8 * (float)(~-(uint)(fVar14 <= 0.0) &
                         (uint)((3.0 - fVar17 * fVar14 * fVar17) * fVar17 * 0.5));
  *param_1 = fVar9;
  param_1[1] = fVar11;
  param_1[2] = fVar8;
  param_1[3] = (fVar12 * fVar7 - fVar12 * fVar7) *
               (float)(~-(uint)(fVar6 <= 0.0) &
                      (uint)((3.0 - fVar18 * fVar6 * fVar18) * fVar18 * 0.5));
  param_1[0x10] = pfVar2[1] * fVar11 + *pfVar2 * fVar9 + pfVar2[2] * fVar8;
  return;
}

// 0112A980  FUN_0112a980  size=681  [run]
void FUN_0112a980(int param_1,int param_2,float *param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
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
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  float local_10;
  float local_c;
  float local_8;
  
  fVar20 = 3.40282e+38;
  iVar4 = *(int *)(param_1 + 0x10) + -1;
  local_8 = 3.40282e+38;
  local_c = 0.0;
  local_10 = 0.0;
  if (-1 < iVar4) {
    pfVar3 = (float *)(param_1 + 0xf70 + iVar4 * 0x50);
    do {
      if ((pfVar3[0x10] * pfVar3[0x10] <= fVar20) &&
         (iVar2 = *(int *)(param_2 + 0x10) + -1, 0 < iVar2)) {
        pfVar1 = (float *)(param_2 + 0xf70 + iVar2 * 0x50);
        do {
          if ((pfVar1[0x10] * pfVar1[0x10] <= fVar20) &&
             (fVar20 = pfVar1[1] * pfVar3[1] + *pfVar1 * *pfVar3 + pfVar1[2] * pfVar3[2],
             -0.5 <= fVar20)) {
            fVar5 = pfVar3[0x10];
            fVar6 = pfVar1[0x10];
            fVar7 = fVar5 - fVar20 * fVar6;
            fVar11 = fVar6 - fVar20 * fVar5;
            if (fVar7 <= 1.1920929e-07) {
              if (fVar5 <= 1.1920929e-07) {
LAB_0112ab30:
                fVar7 = 0.5;
                fVar5 = -(fVar20 * fVar20);
                fVar12 = 0.5;
              }
              else {
                fVar7 = 0.0;
                fVar12 = 1.0;
                fVar5 = fVar6 * fVar6;
              }
            }
            else if (fVar11 <= 1.1920929e-07) {
              if (fVar6 <= 0.0) goto LAB_0112ab30;
              fVar7 = 1.0;
              fVar12 = 0.0;
              fVar5 = fVar5 * fVar5;
            }
            else {
              if (fVar7 <= fVar11) {
                fVar7 = fVar7 / fVar11;
                fVar12 = 1.0 / (fVar20 * fVar7 + 1.0);
                fVar11 = fVar12 * fVar6;
                fVar5 = fVar7 * fVar11;
                fVar7 = fVar7 * fVar12;
              }
              else {
                fVar11 = fVar11 / fVar7;
                fVar7 = 1.0 / (fVar20 * fVar11 + 1.0);
                fVar5 = fVar5 * fVar7;
                fVar12 = fVar7 * fVar11;
                fVar11 = fVar5 * fVar11;
              }
              fVar5 = fVar20 * fVar11 + fVar5;
              fVar5 = (1.0 - fVar20 * fVar20) * fVar11 * fVar11 + fVar5 * fVar5;
            }
            if (fVar5 < local_8) {
              *param_4 = (int)pfVar3;
              *param_5 = (int)pfVar1;
              local_10 = fVar12;
              local_c = fVar7;
              local_8 = fVar5;
            }
          }
          pfVar1 = pfVar1 + -0x14;
          iVar2 = iVar2 + -1;
          fVar20 = local_8;
        } while (iVar2 != 0);
      }
      pfVar3 = pfVar3 + -0x14;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  pfVar3 = (float *)*param_4;
  fVar5 = *pfVar3;
  fVar6 = pfVar3[1];
  fVar7 = pfVar3[2];
  fVar11 = pfVar3[3];
  *param_3 = fVar5 * local_c;
  param_3[1] = fVar6 * local_c;
  param_3[2] = fVar7 * local_c;
  param_3[3] = fVar11 * local_c;
  pfVar3 = (float *)*param_5;
  fVar12 = pfVar3[3];
  fVar13 = *pfVar3 * local_10 + fVar5 * local_c;
  fVar14 = pfVar3[1] * local_10 + fVar6 * local_c;
  fVar15 = pfVar3[2] * local_10 + fVar7 * local_c;
  fVar5 = fVar13 * fVar13;
  fVar6 = fVar14 * fVar14;
  fVar7 = fVar15 * fVar15;
  fVar8 = fVar6 + fVar5 + fVar7;
  fVar9 = fVar6 + fVar5 + fVar7;
  fVar10 = fVar6 + fVar5 + fVar7;
  fVar7 = fVar6 + fVar5 + fVar7;
  auVar16._0_12_ = ZEXT812(0);
  auVar16._12_4_ = 0;
  auVar17._4_4_ = fVar9;
  auVar17._0_4_ = fVar8;
  auVar17._8_4_ = fVar10;
  auVar17._12_4_ = fVar7;
  auVar17 = rsqrtps(auVar16,auVar17);
  fVar5 = auVar17._0_4_;
  fVar6 = auVar17._4_4_;
  fVar18 = auVar17._8_4_;
  fVar19 = auVar17._12_4_;
  *param_3 = (float)(~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar5 * fVar8 * fVar5) * fVar5 * 0.5)) *
             fVar13;
  param_3[1] = (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar6 * fVar9 * fVar6) * fVar6 * 0.5))
               * fVar14;
  param_3[2] = (float)(~-(uint)(fVar10 <= 0.0) &
                      (uint)((3.0 - fVar18 * fVar10 * fVar18) * fVar18 * 0.5)) * fVar15;
  param_3[3] = (float)(~-(uint)(fVar7 <= 0.0) &
                      (uint)((3.0 - fVar19 * fVar7 * fVar19) * fVar19 * 0.5)) *
               (fVar12 * local_10 + fVar11 * local_c);
  if (0.0 <= fVar20) {
    param_3[3] = SQRT(fVar20);
    return;
  }
  param_3[3] = 0.0;
  return;
}

// 0112AC40  FUN_0112ac40  size=254  [run]
void __fastcall FUN_0112ac40(int param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  int *piVar3;
  int iVar4;
  float *extraout_ECX;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar4 = param_1 + 0xf70;
  *(undefined4 *)(param_1 + 0x10) = 4;
  piVar6 = &DAT_017dc520;
  if (iVar4 != param_1 + 0x10b0) {
    do {
      *(int *)(iVar4 + 0x14) = iVar4 + 0x20;
      *(int *)(iVar4 + 0x24) = iVar4 + 0x30;
      piVar3 = (int *)(iVar4 + 0x10);
      *(undefined4 *)(iVar4 + 0x44) = 0;
      *(int **)(iVar4 + 0x34) = piVar3;
      if (piVar3 < (int *)(iVar4 + 0x40U)) {
        do {
          *piVar3 = *piVar6 + 0x20 + param_1;
          iVar1 = piVar6[2];
          iVar5 = piVar6[1];
          piVar3[3] = iVar4;
          piVar3[2] = iVar1 + iVar5 + 0xf80 + param_1;
          piVar3 = piVar3 + 4;
          piVar6 = piVar6 + 3;
        } while (piVar3 < (int *)(iVar4 + 0x40U));
      }
      iVar4 = iVar4 + 0x50;
    } while (iVar4 != param_1 + 0x10b0);
  }
  FUN_0112a8d0();
  fVar7 = (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x60)) * *extraout_ECX;
  fVar8 = (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 100)) * extraout_ECX[1];
  fVar9 = (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x68)) * extraout_ECX[2];
  iVar4 = param_1 + 0x20;
  iVar1 = param_1 + 0x60;
  auVar2._4_4_ = fVar8 + fVar7 + fVar9;
  auVar2._0_4_ = fVar8 + fVar7 + fVar9;
  auVar2._8_4_ = fVar8 + fVar7 + fVar9;
  auVar2._12_4_ = fVar8 + fVar7 + fVar9;
  iVar5 = movmskps(extraout_ECX,auVar2);
  if (iVar5 == 0) {
    *(int *)(param_1 + 0x1020) = iVar1;
    *(int *)(param_1 + 0xfd0) = iVar1;
    *(int *)(param_1 + 0xf80) = iVar1;
    *(int *)(param_1 + 0x1070) = iVar4;
    *(int *)(param_1 + 0xfe0) = iVar4;
    *(int *)(param_1 + 4000) = iVar4;
  }
  iVar4 = 3;
  do {
    FUN_0112a8d0();
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return;
}

// 0112AD50  FUN_0112ad50  size=11  [run]
int FUN_0112ad50(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0112AD60  FUN_0112ad60  size=11  [run]
int FUN_0112ad60(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0112AD70  FUN_0112ad70  size=11  [run]
int FUN_0112ad70(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0112AD80  FUN_0112ad80  size=40  [run]
void __thiscall FUN_0112ad80(undefined4 *param_1,undefined4 *param_2)

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
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = param_2[0xc];
  return;
}

// 0112ADB0  FUN_0112adb0  size=110  [run]
void __thiscall FUN_0112adb0(int param_1,undefined4 param_2,float *param_3)

{
  undefined1 local_30 [12];
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(**(int **)(param_1 + 0x50) + 4))
            (*(undefined4 *)(param_1 + 0x70),param_2,*(undefined4 *)(param_1 + 0x74),param_1,
             param_3 + 4,local_30,&local_20);
  *param_3 = param_3[4] - local_20;
  param_3[1] = param_3[5] - fStack_1c;
  param_3[2] = param_3[6] - fStack_18;
  param_3[3] = param_3[7] - fStack_14;
  param_3[8] = local_20;
  param_3[9] = fStack_1c;
  param_3[10] = fStack_18;
  param_3[0xb] = fStack_24;
  return;
}

// 0112AE20  FUN_0112ae20  size=203  [run]
void FUN_0112ae20(undefined1 (*param_1) [16],float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar4;
  float fVar5;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar6;
  float fVar7;
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
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_20 = -*param_2;
  fStack_1c = -param_2[1];
  fStack_18 = -param_2[2];
  fStack_14 = -param_2[3];
  FUN_0112adb0(param_2,&local_60);
  FUN_0112adb0(&local_20,param_4);
  fVar1 = (local_60 - *param_3) * *param_2;
  fVar4 = (fStack_5c - param_3[1]) * param_2[1];
  fVar5 = (fStack_58 - param_3[2]) * param_2[2];
  fVar6 = fVar4 + fVar1 + fVar5;
  local_20 = (*param_4 - *param_3) * local_20;
  fStack_1c = (param_4[1] - param_3[1]) * fStack_1c;
  fStack_18 = (param_4[2] - param_3[2]) * fStack_18;
  fVar7 = fStack_1c + local_20 + fStack_18;
  auVar2._4_4_ = fVar4 + fVar1 + fVar5;
  auVar2._0_4_ = fVar6;
  auVar2._8_4_ = fVar4 + fVar1 + fVar5;
  auVar2._12_4_ = fVar4 + fVar1 + fVar5;
  auVar3._4_4_ = fStack_1c + local_20 + fStack_18;
  auVar3._0_4_ = fVar7;
  auVar3._8_4_ = fStack_1c + local_20 + fStack_18;
  auVar3._12_4_ = fStack_1c + local_20 + fStack_18;
  auVar3 = maxps(auVar2,auVar3);
  *param_1 = auVar3;
  if (fVar7 < fVar6) {
    *param_4 = local_60;
    param_4[1] = fStack_5c;
    param_4[2] = fStack_58;
    param_4[3] = fStack_54;
    param_4[4] = local_50;
    param_4[5] = fStack_4c;
    param_4[6] = fStack_48;
    param_4[7] = fStack_44;
    param_4[8] = local_40;
    param_4[9] = fStack_3c;
    param_4[10] = fStack_38;
    param_4[0xb] = fStack_34;
    param_4[0xc] = local_30;
  }
  return;
}

// 0112AEF0  FUN_0112aef0  size=8  [run]
undefined4 FUN_0112aef0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0112AF70  FUN_0112af70  size=21  [run]
void FUN_0112af70(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkcdShape::hkcdShape(param_2);
  }
  return;
}

// 0112AF90  FUN_0112af90  size=16  [run]
void FUN_0112af90(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 0112AFA0  FUN_0112afa0  size=46  [run]
undefined4 FUN_0112afa0(void)

{
  undefined4 local_20;
  
  hkcdShape::hkcdShape(0);
  return local_20;
}

// 0112AFD0  FUN_0112afd0  size=20  [run]
void __thiscall FUN_0112afd0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  *param_1 = uVar2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar2;
  return;
}

// 0112B020  FUN_0112b020  size=44  [run]
float10 __fastcall FUN_0112b020(float *param_1)

{
  float *in_EAX;
  
  return (float10)(param_1[1] * in_EAX[1]) + (float10)(*param_1 * *in_EAX) +
         (float10)(param_1[2] * in_EAX[2]);
}

// 0112B050  FUN_0112b050  size=383  [run]
undefined4 FUN_0112b050(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
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
  undefined1 auVar19 [16];
  
  fVar12 = *param_1;
  fVar2 = param_1[1];
  fVar11 = param_1[2];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar16 = *param_3;
  fVar17 = param_3[1];
  fVar18 = param_3[2];
  fVar13 = fVar12 - fVar3;
  fVar14 = fVar2 - fVar4;
  fVar15 = fVar11 - fVar5;
  fVar7 = (fVar11 - fVar18) * fVar14 - (fVar2 - fVar17) * fVar15;
  fVar8 = (fVar12 - fVar16) * fVar15 - (fVar11 - fVar18) * fVar13;
  fVar9 = (fVar2 - fVar17) * fVar13 - (fVar12 - fVar16) * fVar14;
  fVar10 = (fVar5 - fVar18) * (fVar4 - fVar2) - (fVar4 - fVar17) * (fVar5 - fVar11);
  fVar11 = (fVar3 - fVar16) * (fVar5 - fVar11) - (fVar5 - fVar18) * (fVar3 - fVar12);
  fVar12 = (fVar4 - fVar17) * (fVar3 - fVar12) - (fVar3 - fVar16) * (fVar4 - fVar2);
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar11 * fVar11;
  fVar12 = fVar12 * fVar12;
  fVar7 = fVar7 * fVar7;
  fVar8 = fVar8 * fVar8;
  fVar9 = fVar9 * fVar9;
  auVar19._4_4_ = -(uint)(fVar11 + fVar10 + fVar12 < param_4[1]);
  auVar19._0_4_ = -(uint)(fVar11 + fVar10 + fVar12 < *param_4);
  auVar19._8_4_ = -(uint)(fVar11 + fVar10 + fVar12 < param_4[2]);
  auVar19._12_4_ = -(uint)(fVar11 + fVar10 + fVar12 < param_4[3]);
  auVar1._4_4_ = -(uint)(fVar8 + fVar7 + fVar9 < param_4[1]);
  auVar1._0_4_ = -(uint)(fVar8 + fVar7 + fVar9 < *param_4);
  auVar1._8_4_ = -(uint)(fVar8 + fVar7 + fVar9 < param_4[2]);
  auVar1._12_4_ = -(uint)(fVar8 + fVar7 + fVar9 < param_4[3]);
  iVar6 = movmskps(param_2,auVar19 | auVar1);
  if (iVar6 != 0xf) {
    fVar16 = fVar16 - fVar3;
    fVar17 = fVar17 - fVar4;
    fVar18 = fVar18 - fVar5;
    fVar12 = fVar17 * fVar14 + fVar16 * fVar13 + fVar18 * fVar15;
    if ((fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18) *
        (fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15) - fVar12 * fVar12 != 0.0) {
      return 0;
    }
  }
  return 1;
}

// 0112B1D0  FUN_0112b1d0  size=663  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0112b1d0(undefined1 (*param_1) [16],float *param_2,float *param_3,float *param_4,
                 float *param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar21;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float afStack_c0 [2];
  uint auStack_b8 [2];
  float local_b0 [2];
  uint auStack_a8 [3];
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float local_90;
  undefined4 uStack_8c;
  float fStack_88;
  undefined4 uStack_84;
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
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar23 = param_2[3];
  local_50 = *param_3;
  fStack_4c = param_3[1];
  fStack_48 = param_3[2];
  fStack_44 = param_3[3];
  local_30 = *param_4;
  fStack_2c = param_4[1];
  fStack_28 = param_4[2];
  fStack_24 = param_4[3];
  fVar10 = local_50 - fVar4;
  fVar11 = fStack_4c - fVar5;
  fVar12 = fStack_48 - fVar6;
  fStack_7c = (fStack_28 - fVar6) * fVar11 - (fStack_2c - fVar5) * fVar12;
  fStack_78 = (local_30 - fVar4) * fVar12 - (fStack_28 - fVar6) * fVar10;
  local_80 = (fStack_2c - fVar5) * fVar10 - (local_30 - fVar4) * fVar11;
  fStack_74 = (fStack_24 - fVar23) * (fStack_44 - fVar23) -
              (fStack_24 - fVar23) * (fStack_44 - fVar23);
  auVar16 = *param_1;
  fVar1 = auVar16._4_4_;
  fVar2 = auVar16._12_4_;
  fVar15 = auVar16._0_4_;
  local_70 = local_30 - fVar15;
  fStack_6c = fStack_2c - fVar1;
  fVar21 = auVar16._8_4_;
  fStack_68 = fStack_28 - fVar21;
  fStack_64 = fStack_24 - fVar2;
  fVar24 = fVar4 - fVar15;
  fVar25 = fVar5 - fVar1;
  fVar26 = fVar6 - fVar21;
  local_60 = fVar26 * fStack_78;
  fStack_5c = fVar24 * local_80;
  fStack_58 = fVar25 * fStack_7c;
  fStack_54 = (fVar23 - fVar2) * fStack_74;
  local_40 = fStack_78;
  fStack_3c = local_80;
  fStack_38 = fStack_7c;
  fStack_34 = fStack_74;
  fVar27 = local_50 - fVar15;
  fVar28 = fStack_4c - fVar1;
  fVar29 = fStack_48 - fVar21;
  fVar13 = (fVar29 * fStack_7c - fVar27 * local_80) * fVar25;
  fVar14 = ((fStack_44 - fVar2) * fStack_74 - (fStack_44 - fVar2) * fStack_74) * (fVar23 - fVar2);
  fVar22 = (local_70 * fStack_78 - fStack_6c * fStack_7c) * fVar29 +
           (fStack_6c * local_80 - fStack_68 * fStack_78) * fVar27 +
           (fStack_68 * fStack_7c - local_70 * local_80) * fVar28;
  fVar25 = (fVar24 * fStack_78 - fVar25 * fStack_7c) * fStack_68 +
           (fVar25 * local_80 - fVar26 * fStack_78) * local_70 +
           (fVar26 * fStack_7c - fVar24 * local_80) * fStack_6c;
  fVar27 = (fVar27 * fStack_78 - fVar28 * fStack_7c) * fVar26 +
           (fVar28 * local_80 - fVar29 * fStack_78) * fVar24 + fVar13;
  fVar24 = fVar25 + fVar22 + fVar27;
  fVar26 = fVar25 + fVar22 + fVar27;
  fVar28 = fVar25 + fVar22 + fVar27;
  fVar29 = fVar25 + fVar22 + fVar27;
  if (fVar24 != 0.0) {
    auVar3._4_4_ = fVar26;
    auVar3._0_4_ = fVar24;
    auVar3._8_4_ = fVar28;
    auVar3._12_4_ = fVar29;
    auVar16 = rcpps(auVar16,auVar3);
    *param_5 = (2.0 - auVar16._0_4_ * fVar24) * auVar16._0_4_ * fVar22;
    param_5[1] = (2.0 - auVar16._4_4_ * fVar26) * auVar16._4_4_ * fVar25;
    param_5[2] = (2.0 - auVar16._8_4_ * fVar28) * auVar16._8_4_ * fVar27;
    param_5[3] = (2.0 - auVar16._12_4_ * fVar29) * auVar16._12_4_ * (fVar14 + fVar13 + fVar14);
    return;
  }
  fVar24 = fVar4 - local_30;
  fVar25 = fVar5 - fStack_2c;
  fVar26 = fVar6 - fStack_28;
  fVar23 = fVar23 - fStack_24;
  fVar13 = local_30 - local_50;
  fVar14 = fStack_2c - fStack_4c;
  fVar22 = fStack_28 - fStack_48;
  local_20 = (fVar15 - local_30) * fVar24;
  fStack_1c = (fVar1 - fStack_2c) * fVar25;
  fStack_18 = (fVar21 - fStack_28) * fVar26;
  fStack_14 = (fVar2 - fStack_24) * fVar23;
  auVar16._0_4_ = fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11;
  auVar16._4_4_ = fVar22 * fVar22 + fVar13 * fVar13 + fVar14 * fVar14;
  auVar16._8_4_ = fVar26 * fVar26 + fVar24 * fVar24 + fVar25 * fVar25;
  auVar16._12_4_ = fVar23 * fVar23 + fVar25 * fVar25 + fVar23 * fVar23;
  auVar17._4_4_ = auVar16._4_4_;
  auVar17._0_4_ = auVar16._4_4_;
  auVar17._8_4_ = auVar16._4_4_;
  auVar17._12_4_ = auVar16._4_4_;
  auVar18._4_4_ = auVar16._0_4_;
  auVar18._0_4_ = auVar16._0_4_;
  auVar18._8_4_ = auVar16._0_4_;
  auVar18._12_4_ = auVar16._0_4_;
  auVar18 = maxps(auVar17,auVar18);
  auVar20._4_4_ = auVar16._8_4_;
  auVar20._0_4_ = auVar16._8_4_;
  auVar20._8_4_ = auVar16._8_4_;
  auVar20._12_4_ = auVar16._8_4_;
  auVar18 = maxps(auVar20,auVar18);
  auVar19._4_4_ = -(uint)(auVar18._4_4_ == auVar16._4_4_);
  auVar19._0_4_ = -(uint)(auVar18._0_4_ == auVar16._0_4_);
  auVar19._8_4_ = -(uint)(auVar18._8_4_ == auVar16._8_4_);
  auVar19._12_4_ = -(uint)(auVar18._12_4_ == auVar16._12_4_);
  uVar9 = movmskps(param_1,auVar19);
  if ((uVar9 & 7) == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = (uint)(byte)(&DAT_0182bb80)[uVar9];
  }
  auVar16 = maxps(auVar16,_DAT_01701cf0);
  auVar20 = rcpps(auVar19,auVar16);
  local_b0[1] = (2.0 - auVar20._0_4_ * auVar16._0_4_) * auVar20._0_4_ *
                ((fVar21 - fVar6) * fVar12 + (fVar15 - fVar4) * fVar10 + (fVar1 - fVar5) * fVar11);
  fStack_98 = (2.0 - auVar20._4_4_ * auVar16._4_4_) * auVar20._4_4_ *
              ((fVar21 - fStack_48) * fVar22 +
              (fVar15 - local_50) * fVar13 + (fVar1 - fStack_4c) * fVar14);
  local_90 = (2.0 - auVar20._8_4_ * auVar16._8_4_) * auVar20._8_4_ *
             (fStack_18 + local_20 + fStack_1c);
  auStack_a8[2] = 0;
  fStack_9c = 1.0 - fStack_98;
  uStack_94 = 0;
  local_b0[0] = 1.0 - local_b0[1];
  auStack_a8[0] = 0;
  auStack_a8[1] = 0;
  uStack_8c = 0;
  fStack_88 = 1.0 - local_90;
  uStack_84 = 0;
  fVar1 = local_b0[uVar9 * 4 + 1];
  uVar7 = auStack_a8[uVar9 * 4];
  uVar8 = auStack_a8[uVar9 * 4 + 1];
  *param_5 = (float)((uint)local_b0[uVar9 * 4] & -(uint)(0.0 < auVar18._0_4_));
  param_5[1] = (float)((uint)fVar1 & -(uint)(0.0 < auVar18._4_4_));
  param_5[2] = (float)(uVar7 & -(uint)(0.0 < auVar18._8_4_));
  param_5[3] = (float)(uVar8 & -(uint)(0.0 < auVar18._12_4_));
  return;
}

// 0112B970  FUN_0112b970  size=19  [run]
void __thiscall FUN_0112b970(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar2;
  return;
}

// 0112B990  FUN_0112b990  size=22  [run]
void __thiscall FUN_0112b990(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *param_1 = *param_2 | *param_3;
  param_1[1] = uVar1 | uVar4;
  param_1[2] = uVar2 | uVar5;
  param_1[3] = uVar3 | uVar6;
  return;
}

// 0112B9B0  FUN_0112b9b0  size=23  [run]
void __thiscall FUN_0112b9b0(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *param_2 = -(uint)(0.0 < *param_1);
  param_2[1] = -(uint)(0.0 < fVar1);
  param_2[2] = -(uint)(0.0 < fVar2);
  param_2[3] = -(uint)(0.0 < fVar3);
  return;
}

// 0112B9F0  FUN_0112b9f0  size=23  [run]
void __thiscall FUN_0112b9f0(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *param_2 = -(uint)(0.0 < *param_1);
  param_2[1] = -(uint)(0.0 < fVar1);
  param_2[2] = -(uint)(0.0 < fVar2);
  param_2[3] = -(uint)(0.0 < fVar3);
  return;
}

// 0112BA10  FUN_0112ba10  size=40  [run]
void __thiscall FUN_0112ba10(undefined4 *param_1,undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  auVar5._4_4_ = uVar2;
  auVar5._0_4_ = uVar2;
  auVar5._8_4_ = uVar2;
  auVar5._12_4_ = uVar2;
  auVar6._4_4_ = uVar1;
  auVar6._0_4_ = uVar1;
  auVar6._8_4_ = uVar1;
  auVar6._12_4_ = uVar1;
  auVar6 = maxps(auVar5,auVar6);
  auVar4._4_4_ = uVar3;
  auVar4._0_4_ = uVar3;
  auVar4._8_4_ = uVar3;
  auVar4._12_4_ = uVar3;
  auVar6 = maxps(auVar4,auVar6);
  *param_2 = auVar6;
  return;
}

// 0112BA70  hkcdShape::hkcdShape  size=11  [run]
void __fastcall hkcdShape::hkcdShape(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 0112BA90  FUN_0112ba90  size=36  [run]
void __thiscall FUN_0112ba90(int param_1,undefined1 *param_2,int param_3)

{
  if (*(float *)(param_1 + 0x1c) <= *(float *)(param_3 + 0x1c) &&
      *(float *)(param_3 + 0x1c) != *(float *)(param_1 + 0x1c)) {
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 0112BAC0  FUN_0112bac0  size=50  [run]
undefined4 FUN_0112bac0(int param_1,int param_2)

{
  if (*(float *)(param_1 + 0x1c) <= *(float *)(param_2 + 0x1c) &&
      *(float *)(param_2 + 0x1c) != *(float *)(param_1 + 0x1c)) {
    return 1;
  }
  return 0;
}

// 0112BB00  FUN_0112bb00  size=303  [run]
void FUN_0112bb00(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float *pfVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  
  do {
    fVar6 = *(float *)(param_1 + (param_2 + param_3 >> 1) * 0x30 + 0x1c);
    iVar21 = param_3;
    iVar22 = param_2;
    do {
      for (pfVar17 = (float *)(param_1 + 0x1c + iVar22 * 0x30);
          *pfVar17 <= fVar6 && fVar6 != *pfVar17; pfVar17 = pfVar17 + 0xc) {
        iVar22 = iVar22 + 1;
      }
      for (pfVar17 = (float *)(param_1 + 0x1c + iVar21 * 0x30); fVar6 < *pfVar17;
          pfVar17 = pfVar17 + -0xc) {
        iVar21 = iVar21 + -1;
      }
      if (iVar21 < iVar22) break;
      if (iVar21 != iVar22) {
        iVar18 = iVar21 * 0x30;
        puVar1 = (undefined4 *)(iVar18 + param_1);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar1 = (undefined4 *)(iVar18 + 0x10 + param_1);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        uVar13 = puVar1[2];
        uVar14 = puVar1[3];
        puVar19 = (undefined4 *)(iVar18 + param_1);
        puVar1 = (undefined4 *)(iVar22 * 0x30 + param_1);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar15 = puVar1[3];
        puVar20 = (undefined4 *)(iVar22 * 0x30 + param_1);
        uVar2 = puVar19[8];
        uVar3 = puVar19[9];
        *puVar19 = *puVar1;
        puVar19[1] = uVar4;
        puVar19[2] = uVar5;
        puVar19[3] = uVar15;
        uVar5 = puVar20[5];
        uVar15 = puVar20[6];
        uVar16 = puVar20[7];
        uVar4 = puVar19[10];
        puVar19[4] = puVar20[4];
        puVar19[5] = uVar5;
        puVar19[6] = uVar15;
        puVar19[7] = uVar16;
        uVar5 = puVar19[0xb];
        puVar19[8] = puVar20[8];
        puVar19[9] = puVar20[9];
        puVar19[10] = puVar20[10];
        puVar19[0xb] = puVar20[0xb];
        puVar20[8] = uVar2;
        puVar20[9] = uVar3;
        puVar20[10] = uVar4;
        *puVar20 = uVar7;
        puVar20[1] = uVar8;
        puVar20[2] = uVar9;
        puVar20[3] = uVar10;
        puVar20[4] = uVar11;
        puVar20[5] = uVar12;
        puVar20[6] = uVar13;
        puVar20[7] = uVar14;
        puVar20[0xb] = uVar5;
      }
      iVar21 = iVar21 + -1;
      iVar22 = iVar22 + 1;
    } while (iVar22 <= iVar21);
    if (param_2 < iVar21) {
      FUN_0112bb00(param_1,param_2,iVar21,param_4);
    }
    param_2 = iVar22;
    if (param_3 <= iVar22) {
      return;
    }
  } while( true );
}

// 0112BC30  FUN_0112bc30  size=33  [run]
void FUN_0112bc30(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_0112bb00(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 0112BC60  hkpAllCdPointCollector::vf04  size=138  [run]
void __thiscall hkpAllCdPointCollector::vf04(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x10),0x30);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar1 + 1;
  puVar6 = (undefined4 *)(iVar1 * 0x30 + *(int *)(param_1 + 0x10));
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *puVar6 = *param_2;
  puVar6[1] = uVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  puVar6[4] = param_2[4];
  puVar6[5] = uVar2;
  puVar6[6] = uVar3;
  puVar6[7] = uVar4;
  iVar1 = param_2[0xc];
  for (iVar5 = *(int *)(param_2[0xc] + 0xc); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
    iVar1 = iVar5;
  }
  puVar6[8] = iVar1;
  puVar6[9] = *(undefined4 *)(param_2[0xc] + 4);
  iVar1 = param_2[0xd];
  for (iVar5 = *(int *)(param_2[0xd] + 0xc); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xc)) {
    iVar1 = iVar5;
  }
  puVar6[10] = iVar1;
  puVar6[0xb] = *(undefined4 *)(param_2[0xd] + 4);
  return;
}

// 0112BCF0  FUN_0112bcf0  size=40  [run]
void __fastcall FUN_0112bcf0(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  if (1 < *(int *)(param_1 + 0x14)) {
    FUN_0112bb00(*(undefined4 *)(param_1 + 0x10),0,*(int *)(param_1 + 0x14) + -1,local_8);
  }
  return;
}

// 0112BD20  FUN_0112bd20  size=40  [run]
void FUN_0112bd20(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_0112bb00(param_1,0,param_2 + -1,0);
  }
  return;
}

// 0112BD60  FUN_0112bd60  size=36  [run]
void __thiscall FUN_0112bd60(int param_1,undefined1 *param_2,int param_3)

{
  if (*(float *)(param_1 + 0x10) <= *(float *)(param_3 + 0x10) &&
      *(float *)(param_3 + 0x10) != *(float *)(param_1 + 0x10)) {
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 0112BD90  FUN_0112bd90  size=50  [run]
undefined4 FUN_0112bd90(int param_1,int param_2)

{
  if (*(float *)(param_1 + 0x10) <= *(float *)(param_2 + 0x10) &&
      *(float *)(param_2 + 0x10) != *(float *)(param_1 + 0x10)) {
    return 1;
  }
  return 0;
}

// 0112BDD0  FUN_0112bdd0  size=97  [run]
int __thiscall FUN_0112bdd0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x60);
  }
  iVar1 = param_1[1] * 0x60 + *param_1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x50) = 0;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x60 + *param_1;
}

// 0112BE40  FUN_0112be40  size=92  [run]
int __fastcall FUN_0112be40(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x60);
  }
  iVar1 = param_1[1] * 0x60 + *param_1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x50) = 0;
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x60 + *param_1;
}

// 0112BEA0  FUN_0112bea0  size=520  [run]
void FUN_0112bea0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float *pfVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  int iVar25;
  
  do {
    fVar1 = *(float *)((param_2 + param_3 >> 1) * 0x60 + param_1 + 0x10);
    iVar24 = param_3;
    iVar25 = param_2;
    do {
      for (pfVar21 = (float *)(iVar25 * 0x60 + 0x10 + param_1);
          *pfVar21 <= fVar1 && fVar1 != *pfVar21; pfVar21 = pfVar21 + 0x18) {
        iVar25 = iVar25 + 1;
      }
      for (pfVar21 = (float *)(iVar24 * 0x60 + 0x10 + param_1); fVar1 < *pfVar21;
          pfVar21 = pfVar21 + -0x18) {
        iVar24 = iVar24 + -1;
      }
      if (iVar24 < iVar25) break;
      if (iVar24 != iVar25) {
        puVar22 = (undefined4 *)(iVar24 * 0x60 + param_1);
        uVar16 = *puVar22;
        uVar17 = puVar22[1];
        uVar18 = puVar22[2];
        uVar19 = puVar22[3];
        uVar2 = puVar22[4];
        puVar23 = (undefined4 *)(iVar25 * 0x60 + param_1);
        uVar3 = puVar22[5];
        uVar4 = puVar22[6];
        uVar5 = puVar22[7];
        uVar14 = puVar23[1];
        uVar15 = puVar23[2];
        uVar20 = puVar23[3];
        uVar6 = puVar22[8];
        uVar7 = puVar22[9];
        uVar8 = puVar22[10];
        uVar9 = puVar22[0xb];
        uVar10 = puVar22[0xc];
        uVar11 = puVar22[0xd];
        uVar12 = puVar22[0xe];
        uVar13 = puVar22[0xf];
        *puVar22 = *puVar23;
        puVar22[1] = uVar14;
        puVar22[2] = uVar15;
        puVar22[3] = uVar20;
        puVar22[4] = puVar23[4];
        uVar14 = puVar22[0x10];
        uVar15 = puVar22[0x14];
        puVar22[5] = puVar23[5];
        puVar22[6] = puVar23[6];
        puVar22[7] = puVar23[7];
        puVar22[8] = puVar23[8];
        puVar22[9] = puVar23[9];
        puVar22[10] = puVar23[10];
        puVar22[0xb] = puVar23[0xb];
        puVar22[0xc] = puVar23[0xc];
        puVar22[0xd] = puVar23[0xd];
        puVar22[0xe] = puVar23[0xe];
        puVar22[0xf] = puVar23[0xf];
        puVar22[0x10] = puVar23[0x10];
        puVar22[0x14] = puVar23[0x14];
        puVar23[5] = uVar3;
        *puVar23 = uVar16;
        puVar23[1] = uVar17;
        puVar23[2] = uVar18;
        puVar23[3] = uVar19;
        puVar23[4] = uVar2;
        puVar23[6] = uVar4;
        puVar23[7] = uVar5;
        puVar23[8] = uVar6;
        puVar23[9] = uVar7;
        puVar23[10] = uVar8;
        puVar23[0xb] = uVar9;
        puVar23[0xc] = uVar10;
        puVar23[0xd] = uVar11;
        puVar23[0xe] = uVar12;
        puVar23[0xf] = uVar13;
        puVar23[0x10] = uVar14;
        puVar23[0x14] = uVar15;
      }
      iVar24 = iVar24 + -1;
      iVar25 = iVar25 + 1;
    } while (iVar25 <= iVar24);
    if (param_2 < iVar24) {
      FUN_0112bea0(param_1,param_2,iVar24,param_4);
    }
    param_2 = iVar25;
    if (param_3 <= iVar25) {
      return;
    }
  } while( true );
}

// 0112C0B0  hkpAllRayHitCollector::vf00  size=187  [run]
void __thiscall hkpAllRayHitCollector::vf00(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar1 = (int *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,0x60);
  }
  iVar5 = *(int *)(param_1 + 0x14) * 0x60 + *piVar1;
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0x10) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0x14) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x40) = 0;
    *(undefined4 *)(iVar5 + 0x20) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x50) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar5 + 1;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar7 = (undefined4 *)(iVar5 * 0x60 + *piVar1);
  *puVar7 = *param_3;
  puVar7[1] = uVar2;
  puVar7[2] = uVar3;
  puVar7[3] = uVar4;
  puVar7[4] = param_3[4];
  puVar7[5] = param_3[5];
  puVar7[6] = param_3[6];
  puVar7[7] = param_3[7];
  FUN_0114f7e0(puVar7 + 8,8,param_2);
  iVar5 = *(int *)(param_2 + 0xc);
  if (*(int *)(param_2 + 0xc) == 0) {
    puVar7[0x14] = param_2;
    return;
  }
  do {
    iVar6 = iVar5;
    iVar5 = *(int *)(iVar6 + 0xc);
  } while (iVar5 != 0);
  puVar7[0x14] = iVar6;
  return;
}

// 0112C170  FUN_0112c170  size=40  [run]
void __fastcall FUN_0112c170(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  if (1 < *(int *)(param_1 + 0x14)) {
    FUN_0112bea0(*(undefined4 *)(param_1 + 0x10),0,*(int *)(param_1 + 0x14) + -1,local_8);
  }
  return;
}

// 0112C1A0  FUN_0112c1a0  size=33  [run]
void FUN_0112c1a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_0112bea0(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 0112C1D0  FUN_0112c1d0  size=40  [run]
void FUN_0112c1d0(undefined4 param_1,int param_2)

{
  if (1 < param_2) {
    FUN_0112bea0(param_1,0,param_2 + -1,0);
  }
  return;
}

// 0112C210  FUN_0112c210  size=53  [run]
int __thiscall FUN_0112c210(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 0112C250  FUN_0112c250  size=48  [run]
int __fastcall FUN_0112c250(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 0112C280  hkpAllCdBodyPairCollector::vf04  size=119  [run]
void __thiscall hkpAllCdBodyPairCollector::vf04(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 8),0x10);
  }
  piVar4 = (int *)(*(int *)(param_1 + 0xc) * 0x10 + *(int *)(param_1 + 8));
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  iVar3 = *(int *)(param_2 + 0xc);
  iVar2 = param_2;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar2 = iVar1;
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  *piVar4 = iVar2;
  piVar4[1] = *(int *)(param_2 + 4);
  iVar3 = *(int *)(param_3 + 0xc);
  iVar2 = param_3;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar2 = iVar1;
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  piVar4[2] = iVar2;
  piVar4[3] = *(int *)(param_3 + 4);
  return;
}

// 0112C350  FUN_0112c350  size=14  [run]
int FUN_0112c350(float param_1)

{
  return (int)param_1;
}

// 0112C3B0  FUN_0112c3b0  size=68  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0112c3b0(int param_1)

{
  _DAT_01b20708 = ((float)((int)(param_1 + (param_1 >> 0x1f & 7U)) >> 3) - 0.1) * 1.4144272;
  _DAT_01b2070c = 1.0 / _DAT_01b20708;
  return;
}

// 0112C400  FUN_0112c400  size=4  [run]
float10 __fastcall FUN_0112c400(int param_1)

{
  return (float10)*(float *)(param_1 + 0x14);
}

// 0112C410  FUN_0112c410  size=10  [run]
void FUN_0112c410(void)

{
  return;
}

// 0112C420  FUN_0112c420  size=25  [run]
void FUN_0112c420(void)

{
  return;
}

// 0112C440  FUN_0112c440  size=45  [run]
void __thiscall FUN_0112c440(int param_1,float param_2)

{
  *(float *)(param_1 + 0x14) = param_2;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x10) + param_2;
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x10) + param_2;
  return;
}

// 0112C470  hkpCylinderShape::vf24  size=262  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall hkpCylinderShape::vf24(int param_1,ushort *param_2,int param_3,float *param_4)

{
  float *pfVar1;
  ushort uVar2;
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
  
  while (param_3 = param_3 + -1, -1 < param_3) {
    uVar2 = *param_2;
    fVar12 = ((float)(*param_2 & 0xf) + 0.5) * _DAT_01b2070c;
    fVar14 = SQRT(1.0 - fVar12 * fVar12);
    fVar13 = fVar12;
    if ((*param_2 & 0x10) != 0) {
      fVar13 = fVar14;
      fVar14 = fVar12;
    }
    if ((uVar2 >> 6 & 1) == 0) {
      fVar14 = -fVar14;
    }
    if ((uVar2 >> 5 & 1) == 0) {
      fVar13 = -fVar13;
    }
    fVar3 = *(float *)(param_1 + 0x54);
    fVar4 = *(float *)(param_1 + 0x58);
    fVar5 = *(float *)(param_1 + 0x5c);
    param_2 = param_2 + 1;
    fVar6 = *(float *)(param_1 + 0x44);
    fVar7 = *(float *)(param_1 + 0x48);
    fVar8 = *(float *)(param_1 + 0x4c);
    fVar12 = *(float *)(param_1 + 0x14);
    pfVar1 = (float *)(param_1 + (3 - (uVar2 >> 7 & 1)) * 0x10);
    fVar9 = pfVar1[1];
    fVar10 = pfVar1[2];
    fVar11 = pfVar1[3];
    *param_4 = (fVar13 * *(float *)(param_1 + 0x40) + fVar14 * *(float *)(param_1 + 0x50)) * fVar12
               + *pfVar1;
    param_4[1] = (fVar13 * fVar6 + fVar14 * fVar3) * fVar12 + fVar9;
    param_4[2] = (fVar13 * fVar7 + fVar14 * fVar4) * fVar12 + fVar10;
    param_4[3] = (fVar13 * fVar8 + fVar14 * fVar5) * fVar12 + fVar11;
    param_4[3] = (float)(uVar2 | 0x3f000000);
    param_4 = param_4 + 4;
  }
  return;
}

// 0112C580  hkpCylinderShape::vf28  size=31  [run]
void __thiscall hkpCylinderShape::vf28(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x28);
  fVar4 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x2c);
  *param_2 = fVar1;
  param_2[1] = fVar2;
  param_2[2] = fVar3;
  param_2[3] = fVar4;
  *param_2 = fVar1 * 0.5;
  param_2[1] = fVar2 * 0.5;
  param_2[2] = fVar3 * 0.5;
  param_2[3] = fVar4 * 0.5;
  return;
}

// 0112C5A0  hkpCylinderShape::vf44  size=17  [run]
void __thiscall hkpCylinderShape::vf44(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}

// 0112C5C0  hkpCylinderShape::hkpCylinderShape_2  size=138  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall hkpCylinderShape::hkpCylinderShape_2(undefined4 *param_1,int param_2)

{
  hkpConvexShape::hkpConvexShape(param_2);
  *param_1 = vftable;
  if ((param_2 != 0) && (_DAT_01b20710 < 0.0)) {
    _DAT_01b20710 = 0.0;
    do {
      if ((int)_DAT_01b20710 != 0) {
        _DAT_01b20710 = 1.0 - _DAT_01b20710;
        *(undefined1 *)(param_1 + 2) = 1;
        return param_1;
      }
      _DAT_01b20710 = _DAT_01b20710 + 0.01;
    } while (_DAT_01b20710 < 1.1);
    _DAT_01b20710 = 0.0;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}

// 0112C650  hkpCylinderShape::vf20  size=555  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall hkpCylinderShape::vf20(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar14 = *param_2;
  fVar13 = param_2[1];
  fVar17 = param_2[2];
  fVar3 = *(float *)(param_1 + 0x44);
  fVar4 = *(float *)(param_1 + 0x48);
  fVar5 = *(float *)(param_1 + 0x4c);
  fVar15 = fVar13 * fVar3 + fVar14 * *(float *)(param_1 + 0x40) + fVar17 * fVar4;
  fVar6 = *(float *)(param_1 + 0x54);
  fVar7 = *(float *)(param_1 + 0x58);
  fVar8 = *(float *)(param_1 + 0x5c);
  fVar16 = fVar6 * fVar13 + *(float *)(param_1 + 0x50) * fVar14 + fVar7 * fVar17;
  fVar12 = fVar16 * fVar16 + fVar15 * fVar15;
  if (fVar12 < 1.4210855e-14) {
    fVar16 = 0.0;
    fVar15 = 1.0;
    iVar11 = 1;
  }
  else {
    fVar12 = 1.0 / SQRT(fVar12);
    fVar16 = fVar16 * fVar12;
    fVar15 = fVar15 * fVar12;
    if (fVar16 < 0.0) {
      iVar11 = 0;
    }
    else {
      iVar11 = 1;
    }
  }
  fVar16 = ABS(fVar16);
  fVar12 = ABS(fVar15);
  bVar2 = fVar16 <= fVar12;
  if (bVar2) {
    fVar12 = fVar16;
  }
  uVar9 = (int)((fVar12 * _DAT_01b20708 - _DAT_01b20710) - -0.05) +
          ((uint)bVar2 +
          ((uint)(0.0 <= fVar15) +
          (iVar11 + (uint)(fVar13 * (*(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x24)) +
                           fVar14 * (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x20)) +
                           fVar17 * (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x28)) <= 0.0
                          ) * 2) * 2) * 2) * 0x10;
  uVar10 = uVar9 & 0xffff;
  fVar13 = ((float)(uVar9 & 0xf) + 0.5) * _DAT_01b2070c;
  fVar17 = SQRT(1.0 - fVar13 * fVar13);
  fVar14 = fVar17;
  if ((uVar9 & 0x10) != 0) {
    fVar14 = fVar13;
    fVar13 = fVar17;
  }
  if ((uVar10 >> 6 & 1) == 0) {
    fVar14 = -fVar14;
  }
  if ((uVar10 >> 5 & 1) == 0) {
    fVar13 = -fVar13;
  }
  fVar17 = *(float *)(param_1 + 0x14);
  pfVar1 = (float *)(param_1 + (3 - (uVar10 >> 7 & 1)) * 0x10);
  fVar12 = pfVar1[1];
  fVar16 = pfVar1[2];
  fVar15 = pfVar1[3];
  *param_3 = (fVar14 * *(float *)(param_1 + 0x50) + fVar13 * *(float *)(param_1 + 0x40)) * fVar17 +
             *pfVar1;
  param_3[1] = (fVar14 * fVar6 + fVar13 * fVar3) * fVar17 + fVar12;
  param_3[2] = (fVar14 * fVar7 + fVar13 * fVar4) * fVar17 + fVar16;
  param_3[3] = (fVar14 * fVar8 + fVar13 * fVar5) * fVar17 + fVar15;
  param_3[3] = (float)(uVar9 | 0x3f000000);
  return;
}

// 0112C880  hkpCylinderShape::vf30  size=441  [run]
void __thiscall hkpCylinderShape::vf30(int param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  undefined8 *puVar3;
  int iVar4;
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
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  fVar5 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x20);
  fVar7 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x24);
  fVar9 = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x28);
  fVar1 = *(float *)(param_1 + 0x14);
  puVar3 = (undefined8 *)(param_1 + 0x20);
  fVar10 = fVar1;
  fVar18 = 0.0;
  if (fVar1 * 4.0 * fVar1 <= fVar9 * fVar9 + fVar7 * fVar7 + fVar5 * fVar5) {
    fVar10 = *(float *)(param_1 + 0x18) * fVar1;
    fVar18 = fVar1;
  }
  fVar5 = *(float *)(param_1 + 0x40);
  fVar7 = *(float *)(param_1 + 0x44);
  fVar9 = *(float *)(param_1 + 0x48);
  fVar13 = *(float *)(param_1 + 0x50);
  fVar15 = *(float *)(param_1 + 0x54);
  fVar17 = *(float *)(param_1 + 0x58);
  fVar11 = fVar10 * 0.70710677;
  fVar12 = (fVar13 + fVar5) * fVar11;
  fVar14 = (fVar15 + fVar7) * fVar11;
  fVar16 = (fVar17 + fVar9) * fVar11;
  fVar6 = (fVar5 - fVar13) * fVar11;
  fVar8 = (fVar7 - fVar15) * fVar11;
  fVar11 = (fVar9 - fVar17) * fVar11;
  fVar1 = *(float *)(param_1 + 0x10);
  pfVar2 = (float *)(param_2 + 0x20);
  iVar4 = 2;
  do {
    fStack_18 = (float)puVar3[1];
    local_20 = (float)*puVar3;
    fStack_1c = (float)((ulonglong)*puVar3 >> 0x20);
    pfVar2[-8] = local_20 + fVar5 * fVar10;
    pfVar2[-7] = fStack_1c + fVar7 * fVar10;
    pfVar2[-6] = fStack_18 + fVar9 * fVar10;
    pfVar2[-5] = fVar1 + 0.0;
    pfVar2[-4] = local_20 + fVar12;
    pfVar2[-3] = fStack_1c + fVar14;
    pfVar2[-2] = fStack_18 + fVar16;
    pfVar2[-1] = fVar1 + 0.0;
    *pfVar2 = local_20 + fVar13 * fVar10;
    pfVar2[1] = fStack_1c + fVar15 * fVar10;
    pfVar2[2] = fStack_18 + fVar17 * fVar10;
    pfVar2[3] = fVar1 + 0.0;
    pfVar2[4] = local_20 - fVar6;
    pfVar2[5] = fStack_1c - fVar8;
    pfVar2[6] = fStack_18 - fVar11;
    pfVar2[7] = fVar1 - 0.0;
    pfVar2[8] = local_20 - fVar5 * fVar10;
    pfVar2[9] = fStack_1c - fVar7 * fVar10;
    pfVar2[10] = fStack_18 - fVar9 * fVar10;
    pfVar2[0xb] = fVar1 - 0.0;
    pfVar2[0xc] = local_20 - fVar12;
    pfVar2[0xd] = fStack_1c - fVar14;
    pfVar2[0xe] = fStack_18 - fVar16;
    pfVar2[0xf] = fVar1 - 0.0;
    pfVar2[0x10] = local_20 - fVar13 * fVar10;
    pfVar2[0x11] = fStack_1c - fVar15 * fVar10;
    pfVar2[0x12] = fStack_18 - fVar17 * fVar10;
    pfVar2[0x13] = fVar1 - 0.0;
    pfVar2[0x14] = local_20 + fVar6;
    pfVar2[0x15] = fStack_1c + fVar8;
    pfVar2[0x16] = fStack_18 + fVar11;
    pfVar2[0x17] = fVar1 + 0.0;
    puVar3 = puVar3 + 2;
    pfVar2 = pfVar2 + 0x20;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  fVar13 = *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x44) -
           *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x48);
  fVar15 = *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x48) -
           *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x40);
  fVar17 = *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x40) -
           *(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x44);
  fVar6 = *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x4c) -
          *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x4c);
  fVar10 = *(float *)(param_1 + 0x24);
  fVar5 = *(float *)(param_1 + 0x28);
  fVar7 = *(float *)(param_1 + 0x2c);
  *(float *)(param_2 + 0x100) = fVar18 * fVar13 + *(float *)(param_1 + 0x20);
  *(float *)(param_2 + 0x104) = fVar18 * fVar15 + fVar10;
  *(float *)(param_2 + 0x108) = fVar18 * fVar17 + fVar5;
  *(float *)(param_2 + 0x10c) = fVar18 * fVar6 + fVar7;
  fVar9 = -fVar18;
  fVar10 = *(float *)(param_1 + 0x34);
  fVar5 = *(float *)(param_1 + 0x38);
  fVar7 = *(float *)(param_1 + 0x3c);
  *(float *)(param_2 + 0x110) = fVar9 * fVar13 + *(float *)(param_1 + 0x30);
  *(float *)(param_2 + 0x114) = fVar9 * fVar15 + fVar10;
  *(float *)(param_2 + 0x118) = fVar9 * fVar17 + fVar5;
  *(float *)(param_2 + 0x11c) = fVar9 * fVar6 + fVar7;
  *(float *)(param_2 + 0x10c) = fVar1 + fVar18;
  *(float *)(param_2 + 0x11c) = fVar1 + fVar18;
  return;
}

// 0112CA40  hkpCylinderShape::vf10  size=327  [run]
void __thiscall hkpCylinderShape::vf10(int param_1,undefined4 *param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 local_50 [16];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20 [4];
  
  puVar7 = (undefined4 *)local_50;
  for (iVar4 = 0x10; fVar11 = local_20[3], fVar10 = local_20[2], fVar9 = local_20[1],
      fVar8 = local_20[0], iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar4 = 1;
  pfVar6 = local_20;
  pfVar5 = (float *)(param_1 + 0x30);
  do {
    fVar16 = *pfVar5;
    fVar1 = pfVar5[1];
    fVar2 = pfVar5[2];
    *pfVar6 = fVar1 * local_40 + fVar16 * local_50._0_4_ + fVar2 * local_30 + fVar8;
    pfVar6[1] = fVar1 * fStack_3c + fVar16 * local_50._4_4_ + fVar2 * fStack_2c + fVar9;
    pfVar6[2] = fVar1 * fStack_38 + fVar16 * local_50._8_4_ + fVar2 * fStack_28 + fVar10;
    pfVar6[3] = fVar1 * fStack_34 + fVar16 * local_50._12_4_ + fVar2 * fStack_24 + fVar11;
    pfVar5 = pfVar5 + -4;
    pfVar6 = pfVar6 + -4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  auVar3._4_4_ = local_20[1];
  auVar3._0_4_ = local_20[0];
  auVar3._8_4_ = local_20[2];
  auVar3._12_4_ = local_20[3];
  auVar13._4_4_ = fStack_2c;
  auVar13._0_4_ = local_30;
  auVar13._8_4_ = fStack_28;
  auVar13._12_4_ = fStack_24;
  fVar8 = (local_20[0] - local_30) * (local_20[0] - local_30);
  fVar9 = (local_20[1] - fStack_2c) * (local_20[1] - fStack_2c);
  fVar10 = (local_20[2] - fStack_28) * (local_20[2] - fStack_28);
  fVar11 = (local_20[3] - fStack_24) * (local_20[3] - fStack_24);
  auVar15._0_4_ = fVar9 + fVar8 + fVar10;
  auVar15._4_4_ = fVar9 + fVar8 + fVar10;
  auVar15._8_4_ = fVar9 + fVar8 + fVar10;
  auVar15._12_4_ = fVar9 + fVar8 + fVar10;
  auVar14 = rcpps(local_50,auVar15);
  auVar12._0_4_ = (fVar10 + fVar9) * (2.0 - auVar14._0_4_ * auVar15._0_4_) * auVar14._0_4_;
  auVar12._4_4_ = (fVar8 + fVar10) * (2.0 - auVar14._4_4_ * auVar15._4_4_) * auVar14._4_4_;
  auVar12._8_4_ = (fVar9 + fVar8) * (2.0 - auVar14._8_4_ * auVar15._8_4_) * auVar14._8_4_;
  auVar12._12_4_ = (fVar11 + fVar11) * (2.0 - auVar14._12_4_ * auVar15._12_4_) * auVar14._12_4_;
  auVar15 = rsqrtps(auVar14,auVar12);
  fVar9 = auVar15._0_4_;
  fVar10 = auVar15._4_4_;
  fVar11 = auVar15._8_4_;
  fVar16 = auVar15._12_4_;
  fVar8 = *(float *)(param_1 + 0x14);
  param_3 = *(float *)(param_1 + 0x10) + param_3;
  fVar9 = (float)(~-(uint)(auVar12._0_4_ <= 0.0) &
                 (uint)((3.0 - fVar9 * auVar12._0_4_ * fVar9) * fVar9 * 0.5 * auVar12._0_4_)) *
          fVar8 + param_3;
  fVar10 = (float)(~-(uint)(auVar12._4_4_ <= 0.0) &
                  (uint)((3.0 - fVar10 * auVar12._4_4_ * fVar10) * fVar10 * 0.5 * auVar12._4_4_)) *
           fVar8 + param_3;
  fVar11 = (float)(~-(uint)(auVar12._8_4_ <= 0.0) &
                  (uint)((3.0 - fVar11 * auVar12._8_4_ * fVar11) * fVar11 * 0.5 * auVar12._8_4_)) *
           fVar8 + param_3;
  param_3 = (float)(~-(uint)(auVar12._12_4_ <= 0.0) &
                   (uint)((3.0 - fVar16 * auVar12._12_4_ * fVar16) * fVar16 * 0.5 * auVar12._12_4_))
            * fVar8 + param_3;
  auVar15 = minps(auVar13,auVar3);
  *param_4 = auVar15._0_4_ - fVar9;
  param_4[1] = auVar15._4_4_ - fVar10;
  param_4[2] = auVar15._8_4_ - fVar11;
  param_4[3] = auVar15._12_4_ - param_3;
  auVar13 = maxps(auVar13,auVar3);
  *(undefined1 (*) [16])(param_4 + 4) = auVar13;
  param_4[4] = param_4[4] + fVar9;
  param_4[5] = param_4[5] + fVar10;
  param_4[6] = param_4[6] + fVar11;
  param_4[7] = param_4[7] + param_3;
  return;
}

// 0112CB90  FUN_0112cb90  size=387  [run]
void __fastcall FUN_0112cb90(int param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
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
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  fVar13 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x20);
  fVar15 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x24);
  fVar17 = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x28);
  fVar6 = fVar13 * fVar13;
  fVar7 = fVar15 * fVar15;
  fVar8 = fVar17 * fVar17;
  fVar10 = fVar7 + fVar6 + fVar8;
  fVar11 = fVar7 + fVar6 + fVar8;
  fVar12 = fVar7 + fVar6 + fVar8;
  fVar8 = fVar7 + fVar6 + fVar8;
  auVar20._0_12_ = ZEXT812(0);
  auVar20._12_4_ = 0;
  auVar21._4_4_ = fVar11;
  auVar21._0_4_ = fVar10;
  auVar21._8_4_ = fVar12;
  auVar21._12_4_ = fVar8;
  auVar21 = rsqrtps(auVar20,auVar21);
  fVar6 = auVar21._0_4_;
  fVar7 = auVar21._4_4_;
  fVar9 = auVar21._8_4_;
  fVar14 = auVar21._12_4_;
  fVar13 = (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar6 * fVar10 * fVar6) * fVar6 * 0.5)) *
           fVar13;
  fVar15 = (float)(~-(uint)(fVar11 <= 0.0) & (uint)((3.0 - fVar7 * fVar11 * fVar7) * fVar7 * 0.5)) *
           fVar15;
  fVar17 = (float)(~-(uint)(fVar12 <= 0.0) & (uint)((3.0 - fVar9 * fVar12 * fVar9) * fVar9 * 0.5)) *
           fVar17;
  fVar9 = (float)(~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar14 * fVar8 * fVar14) * fVar14 * 0.5)) *
          (*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x2c));
  fVar14 = fVar15 * 1.0 - fVar17 * 1.0;
  fVar16 = fVar17 * 1.0 - fVar13 * 1.0;
  fVar18 = fVar13 * 1.0 - fVar15 * 1.0;
  fVar19 = fVar15 * 0.0 - fVar17 * 0.0;
  fVar23 = fVar17 * 1.0 - fVar13 * 0.0;
  fVar24 = fVar13 * 0.0 - fVar15 * 1.0;
  fVar10 = fVar19 * fVar19;
  fVar11 = fVar23 * fVar23;
  fVar12 = fVar24 * fVar24;
  fVar6 = fVar14 * fVar14;
  fVar7 = fVar16 * fVar16;
  fVar8 = fVar18 * fVar18;
  uVar2 = -(uint)(fVar7 + fVar6 + fVar8 < fVar11 + fVar10 + fVar12);
  uVar3 = -(uint)(fVar7 + fVar6 + fVar8 < fVar11 + fVar10 + fVar12);
  uVar4 = -(uint)(fVar7 + fVar6 + fVar8 < fVar11 + fVar10 + fVar12);
  uVar5 = -(uint)(fVar7 + fVar6 + fVar8 < fVar11 + fVar10 + fVar12);
  *(uint *)(param_1 + 0x40) = uVar2 & (uint)fVar19 | ~uVar2 & (uint)fVar14;
  *(uint *)(param_1 + 0x44) = uVar3 & (uint)fVar23 | ~uVar3 & (uint)fVar16;
  *(uint *)(param_1 + 0x48) = uVar4 & (uint)fVar24 | ~uVar4 & (uint)fVar18;
  *(uint *)(param_1 + 0x4c) =
       uVar5 & (uint)(fVar9 * 0.0 - fVar9 * 0.0) | ~uVar5 & (uint)(fVar9 * 1.0 - fVar9 * 1.0);
  fVar6 = *(float *)(param_1 + 0x40);
  fVar7 = *(float *)(param_1 + 0x44);
  fVar8 = *(float *)(param_1 + 0x48);
  fVar10 = fVar6 * fVar6;
  fVar11 = fVar7 * fVar7;
  fVar12 = fVar8 * fVar8;
  auVar22._4_4_ = fVar10;
  auVar22._0_4_ = fVar10;
  auVar22._8_4_ = fVar10;
  auVar22._12_4_ = fVar10;
  fVar14 = fVar11 + fVar10 + fVar12;
  fVar16 = fVar11 + fVar10 + fVar12;
  fVar18 = fVar11 + fVar10 + fVar12;
  fVar12 = fVar11 + fVar10 + fVar12;
  auVar1._4_4_ = fVar16;
  auVar1._0_4_ = fVar14;
  auVar1._8_4_ = fVar18;
  auVar1._12_4_ = fVar12;
  auVar21 = rsqrtps(auVar22,auVar1);
  fVar10 = auVar21._0_4_;
  fVar11 = auVar21._4_4_;
  fVar19 = auVar21._8_4_;
  fVar23 = auVar21._12_4_;
  *(float *)(param_1 + 0x40) =
       (float)(~-(uint)(fVar14 <= 0.0) & (uint)((3.0 - fVar10 * fVar14 * fVar10) * fVar10 * 0.5)) *
       fVar6;
  *(float *)(param_1 + 0x44) =
       (float)(~-(uint)(fVar16 <= 0.0) & (uint)((3.0 - fVar11 * fVar16 * fVar11) * fVar11 * 0.5)) *
       fVar7;
  *(float *)(param_1 + 0x48) =
       (float)(~-(uint)(fVar18 <= 0.0) & (uint)((3.0 - fVar19 * fVar18 * fVar19) * fVar19 * 0.5)) *
       fVar8;
  *(float *)(param_1 + 0x4c) =
       (float)(~-(uint)(fVar12 <= 0.0) & (uint)((3.0 - fVar23 * fVar12 * fVar23) * fVar23 * 0.5)) *
       *(float *)(param_1 + 0x4c);
  *(float *)(param_1 + 0x50) =
       *(float *)(param_1 + 0x48) * fVar15 - *(float *)(param_1 + 0x44) * fVar17;
  *(float *)(param_1 + 0x54) =
       *(float *)(param_1 + 0x40) * fVar17 - *(float *)(param_1 + 0x48) * fVar13;
  *(float *)(param_1 + 0x58) =
       *(float *)(param_1 + 0x44) * fVar13 - *(float *)(param_1 + 0x40) * fVar15;
  *(float *)(param_1 + 0x5c) =
       *(float *)(param_1 + 0x4c) * fVar9 - *(float *)(param_1 + 0x4c) * fVar9;
  return;
}

// 0112CD20  hkpCylinderShape::vf14  size=1503  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall hkpCylinderShape::vf14(int param_1,undefined1 *param_2,float *param_3,uint *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  LPVOID pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar17;
  float fVar18;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar29;
  undefined1 auVar14 [16];
  uint uVar19;
  float fVar20;
  uint uVar26;
  float fVar27;
  uint uVar30;
  undefined1 auVar15 [16];
  float fVar21;
  float fVar28;
  undefined1 auVar16 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar40 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar52;
  float fVar53;
  undefined1 in_XMM5 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar54;
  float fVar57;
  float fVar58;
  undefined1 auVar55 [16];
  float fVar59;
  undefined1 auVar56 [16];
  float fVar60;
  float fVar64;
  float fVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  pvVar5 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar5 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
    *puVar1 = "TtrcCylinder";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
  }
  fVar27 = *param_3;
  fVar21 = param_3[1];
  fVar28 = param_3[2];
  fVar38 = *(float *)(param_1 + 0x10);
  fVar12 = param_3[4] - fVar27;
  fVar17 = param_3[5] - fVar21;
  fVar22 = param_3[6] - fVar28;
  fVar20 = *(float *)(param_1 + 0x14);
  local_50 = (float)*(undefined8 *)(param_1 + 0x30);
  fStack_4c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  fStack_48 = (float)*(undefined8 *)(param_1 + 0x38);
  fStack_44 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  local_40 = (float)*(undefined8 *)(param_1 + 0x20);
  fStack_3c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fStack_38 = (float)*(undefined8 *)(param_1 + 0x28);
  fStack_34 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  fVar39 = local_50 - local_40;
  fVar41 = fStack_4c - fStack_3c;
  fVar43 = fStack_48 - fStack_38;
  fVar13 = fVar39 * fVar39;
  fVar18 = fVar41 * fVar41;
  fVar23 = fVar43 * fVar43;
  auVar56._0_4_ = fVar18 + fVar13 + fVar23;
  auVar56._4_4_ = fVar18 + fVar13 + fVar23;
  auVar56._8_4_ = fVar18 + fVar13 + fVar23;
  auVar56._12_4_ = fVar18 + fVar13 + fVar23;
  auVar49 = rsqrtps(in_XMM5,auVar56);
  fVar18 = auVar49._0_4_;
  fVar23 = auVar49._4_4_;
  fVar42 = auVar49._8_4_;
  fVar25 = auVar49._12_4_;
  fVar13 = (float)param_4[4];
  fVar18 = (float)(~-(uint)(auVar56._0_4_ <= 0.0) &
                  (uint)((3.0 - fVar18 * auVar56._0_4_ * fVar18) * fVar18 * 0.5)) * fVar39 * fVar38;
  fVar41 = (float)(~-(uint)(auVar56._4_4_ <= 0.0) &
                  (uint)((3.0 - fVar23 * auVar56._4_4_ * fVar23) * fVar23 * 0.5)) * fVar41 * fVar38;
  fVar24 = (float)(~-(uint)(auVar56._8_4_ <= 0.0) &
                  (uint)((3.0 - fVar42 * auVar56._8_4_ * fVar42) * fVar42 * 0.5)) * fVar43 * fVar38;
  fVar29 = (float)(~-(uint)(auVar56._12_4_ <= 0.0) &
                  (uint)((3.0 - fVar25 * auVar56._12_4_ * fVar25) * fVar25 * 0.5)) *
           (fStack_44 - fStack_34) * fVar38;
  local_40 = local_40 - fVar18;
  fStack_3c = fStack_3c - fVar41;
  fStack_38 = fStack_38 - fVar24;
  fStack_34 = fStack_34 - fVar29;
  fVar18 = fVar18 + local_50;
  fVar41 = fVar41 + fStack_4c;
  fVar24 = fVar24 + fStack_48;
  fVar39 = fVar18 - local_40;
  fVar42 = fVar41 - fStack_3c;
  fVar44 = fVar24 - fStack_38;
  fVar23 = fVar39 * fVar39;
  fVar43 = fVar42 * fVar42;
  fVar25 = fVar44 * fVar44;
  auVar45._4_4_ = fVar23;
  auVar45._0_4_ = fVar23;
  auVar45._8_4_ = fVar23;
  auVar45._12_4_ = fVar23;
  auVar51._0_4_ = fVar43 + fVar23 + fVar25;
  auVar51._4_4_ = fVar43 + fVar23 + fVar25;
  auVar51._8_4_ = fVar43 + fVar23 + fVar25;
  auVar51._12_4_ = fVar43 + fVar23 + fVar25;
  auVar49 = rsqrtps(auVar45,auVar51);
  fVar23 = auVar49._0_4_;
  fVar43 = auVar49._4_4_;
  fVar25 = auVar49._8_4_;
  fVar35 = auVar49._12_4_;
  fVar39 = (float)(~-(uint)(auVar51._0_4_ <= 0.0) &
                  (uint)((3.0 - fVar23 * auVar51._0_4_ * fVar23) * fVar23 * 0.5)) * fVar39;
  fVar42 = (float)(~-(uint)(auVar51._4_4_ <= 0.0) &
                  (uint)((3.0 - fVar43 * auVar51._4_4_ * fVar43) * fVar43 * 0.5)) * fVar42;
  fVar44 = (float)(~-(uint)(auVar51._8_4_ <= 0.0) &
                  (uint)((3.0 - fVar25 * auVar51._8_4_ * fVar25) * fVar25 * 0.5)) * fVar44;
  fVar25 = (float)(~-(uint)(auVar51._12_4_ <= 0.0) &
                  (uint)((3.0 - fVar35 * auVar51._12_4_ * fVar35) * fVar35 * 0.5)) *
           ((fVar29 + fStack_44) - fStack_34);
  fVar29 = fVar27 - local_40;
  fVar35 = fVar21 - fStack_3c;
  fVar36 = fVar28 - fStack_38;
  fVar23 = fVar44 * fVar36 + fVar39 * fVar29 + fVar42 * fVar35;
  fVar43 = (fVar28 - fVar24) * fVar44 + (fVar27 - fVar18) * fVar39 + (fVar21 - fVar41) * fVar42;
  auVar49._8_4_ = fVar44 * fVar22 + fVar39 * fVar12 + fVar42 * fVar17;
  auVar49._4_4_ = auVar49._8_4_;
  auVar49._0_4_ = auVar49._8_4_;
  auVar49._12_4_ = auVar49._8_4_;
  uVar7 = -(uint)(auVar49._8_4_ == 0.0);
  uVar8 = -(uint)(auVar49._8_4_ == 0.0);
  uVar9 = -(uint)(auVar49._8_4_ == 0.0);
  uVar10 = -(uint)(auVar49._8_4_ == 0.0);
  auVar55._0_8_ = CONCAT44(uVar8,uVar7) & 0x3400000034000000;
  auVar55._8_4_ = uVar9 & 0x34000000;
  auVar55._12_4_ = uVar10 & 0x34000000;
  auVar61._0_4_ = ~uVar7 & (uint)auVar49._8_4_;
  auVar61._4_4_ = ~uVar8 & (uint)auVar49._8_4_;
  auVar61._8_4_ = ~uVar9 & (uint)auVar49._8_4_;
  auVar61._12_4_ = ~uVar10 & (uint)auVar49._8_4_;
  auVar55 = auVar55 | auVar61;
  auVar49 = rcpps(auVar49,auVar55);
  fVar54 = (2.0 - auVar49._0_4_ * auVar55._0_4_) * auVar49._0_4_;
  fVar57 = (2.0 - auVar49._4_4_ * auVar55._4_4_) * auVar49._4_4_;
  fVar58 = (2.0 - auVar49._8_4_ * auVar55._8_4_) * auVar49._8_4_;
  fVar59 = (2.0 - auVar49._12_4_ * auVar55._12_4_) * auVar49._12_4_;
  auVar14._0_4_ = ~uVar7 & (uint)((0.0 - fVar23) * fVar54);
  auVar14._4_4_ = ~uVar8 & (uint)((0.0 - fVar23) * fVar57);
  auVar14._8_4_ = ~uVar9 & (uint)((0.0 - fVar23) * fVar58);
  auVar14._12_4_ = ~uVar10 & (uint)((0.0 - fVar23) * fVar59);
  auVar31._0_4_ = ((uint)fVar23 & 0x80000000 ^ 0x7f7fffee) & uVar7;
  auVar31._4_4_ = ((uint)fVar23 & 0x80000000 ^ 0x7f7fffee) & uVar8;
  auVar31._8_4_ = ((uint)fVar23 & 0x80000000 ^ 0x7f7fffee) & uVar9;
  auVar31._12_4_ = ((uint)fVar23 & 0x80000000 ^ 0x7f7fffee) & uVar10;
  auVar14 = auVar14 | auVar31;
  auVar40._0_4_ = ((uint)fVar43 & 0x80000000 ^ 0x7f7fffee) & uVar7;
  auVar40._4_4_ = ((uint)fVar43 & 0x80000000 ^ 0x7f7fffee) & uVar8;
  auVar40._8_4_ = ((uint)fVar43 & 0x80000000 ^ 0x7f7fffee) & uVar9;
  auVar40._12_4_ = ((uint)fVar43 & 0x80000000 ^ 0x7f7fffee) & uVar10;
  auVar32._0_4_ = ~uVar7 & (uint)((0.0 - fVar43) * fVar54);
  auVar32._4_4_ = ~uVar8 & (uint)((0.0 - fVar43) * fVar57);
  auVar32._8_4_ = ~uVar9 & (uint)((0.0 - fVar43) * fVar58);
  auVar32._12_4_ = ~uVar10 & (uint)((0.0 - fVar43) * fVar59);
  auVar32 = auVar32 | auVar40;
  auVar49 = minps(auVar14,auVar32);
  auVar56 = maxps(auVar14,auVar32);
  fVar23 = auVar49._0_4_;
  if (fVar23 != auVar56._0_4_) {
    uVar7 = -(uint)(auVar14._0_4_ < auVar32._0_4_);
    uVar8 = -(uint)(auVar14._4_4_ < auVar32._4_4_);
    uVar9 = -(uint)(auVar14._8_4_ < auVar32._8_4_);
    uVar10 = uVar7 & 0x80000000 ^ (uint)fVar39;
    uVar19 = uVar8 & 0x80000000 ^ (uint)fVar42;
    uVar26 = uVar9 & 0x80000000 ^ (uint)fVar44;
    uVar30 = -(uint)(auVar14._12_4_ < auVar32._12_4_) & 0x80000000 ^ (uint)fVar25;
    fVar43 = fVar22 * fVar22 + fVar17 * fVar17 + fVar12 * fVar12;
    fVar54 = fVar44 * fVar22 + fVar42 * fVar17 + fVar39 * fVar12;
    fVar58 = fVar36 * fVar22 + fVar35 * fVar17 + fVar29 * fVar12;
    fVar37 = fVar36 * fVar44 + fVar35 * fVar42 + fVar29 * fVar39;
    fVar60 = fVar43 - fVar54 * fVar54;
    fVar64 = fVar43 - fVar54 * fVar54;
    fVar65 = fVar43 - fVar54 * fVar54;
    fVar43 = fVar43 - fVar54 * fVar54;
    fVar48 = fVar58 - fVar37 * fVar54;
    fVar52 = fVar58 - fVar37 * fVar54;
    fVar53 = fVar58 - fVar37 * fVar54;
    fVar58 = fVar58 - fVar37 * fVar54;
    fVar54 = (fVar20 + fVar38) * (fVar20 + fVar38);
    fVar57 = (fVar20 + fVar38) * (fVar20 + fVar38);
    fVar59 = (fVar20 + fVar38) * (fVar20 + fVar38);
    fVar38 = (fVar20 + fVar38) * (fVar20 + fVar38);
    fVar29 = fVar29 * fVar29;
    fVar35 = fVar35 * fVar35;
    fVar36 = fVar36 * fVar36;
    auVar4._4_4_ = fVar57;
    auVar4._0_4_ = fVar54;
    auVar4._8_4_ = fVar59;
    auVar4._12_4_ = fVar38;
    auVar33._0_4_ =
         fVar48 * fVar48 - (((fVar35 + fVar29 + fVar36) - fVar37 * fVar37) - fVar54) * fVar60;
    auVar33._4_4_ =
         fVar52 * fVar52 - (((fVar35 + fVar29 + fVar36) - fVar37 * fVar37) - fVar57) * fVar64;
    auVar33._8_4_ =
         fVar53 * fVar53 - (((fVar35 + fVar29 + fVar36) - fVar37 * fVar37) - fVar59) * fVar65;
    auVar33._12_4_ =
         fVar58 * fVar58 - (((fVar35 + fVar29 + fVar36) - fVar37 * fVar37) - fVar38) * fVar43;
    if (0.0 <= auVar33._0_4_) {
      if (1.1920929e-07 <= fVar60) {
        auVar14 = rsqrtps(auVar4,auVar33);
        fVar38 = auVar14._0_4_;
        fVar20 = auVar14._4_4_;
        fVar18 = auVar14._8_4_;
        fVar41 = auVar14._12_4_;
        auVar46._0_4_ = (3.0 - fVar38 * auVar33._0_4_ * fVar38) * fVar38 * 0.5 * auVar33._0_4_;
        auVar46._4_4_ = (3.0 - fVar20 * auVar33._4_4_ * fVar20) * fVar20 * 0.5 * auVar33._4_4_;
        auVar46._8_4_ = (3.0 - fVar18 * auVar33._8_4_ * fVar18) * fVar18 * 0.5 * auVar33._8_4_;
        auVar46._12_4_ = (3.0 - fVar41 * auVar33._12_4_ * fVar41) * fVar41 * 0.5 * auVar33._12_4_;
        fVar38 = (float)(~-(uint)(auVar33._0_4_ <= 0.0) & (uint)auVar46._0_4_);
        fVar20 = (float)(~-(uint)(auVar33._4_4_ <= 0.0) & (uint)auVar46._4_4_);
        fVar18 = (float)(~-(uint)(auVar33._8_4_ <= 0.0) & (uint)auVar46._8_4_);
        fVar41 = (float)(~-(uint)(auVar33._12_4_ <= 0.0) & (uint)auVar46._12_4_);
        auVar3._4_4_ = fVar64;
        auVar3._0_4_ = fVar60;
        auVar3._8_4_ = fVar65;
        auVar3._12_4_ = fVar43;
        auVar14 = rcpps(auVar46,auVar3);
        fVar24 = auVar14._0_4_ * (2.0 - auVar14._0_4_ * fVar60);
        fVar29 = auVar14._4_4_ * (2.0 - auVar14._4_4_ * fVar64);
        fVar35 = auVar14._8_4_ * (2.0 - auVar14._8_4_ * fVar65);
        fVar43 = auVar14._12_4_ * (2.0 - auVar14._12_4_ * fVar43);
        auVar34._0_4_ = (fVar38 - fVar48) * fVar24;
        auVar34._4_4_ = (fVar20 - fVar52) * fVar29;
        auVar34._8_4_ = (fVar18 - fVar53) * fVar35;
        auVar34._12_4_ = (fVar41 - fVar58) * fVar43;
        auVar15._0_8_ =
             CONCAT44((0.0 - (fVar20 + fVar52)) * fVar29,(0.0 - (fVar38 + fVar48)) * fVar24);
        auVar15._8_4_ = (0.0 - (fVar18 + fVar53)) * fVar35;
        auVar15._12_4_ = (0.0 - (fVar41 + fVar58)) * fVar43;
        auVar62._8_4_ = auVar15._8_4_;
        auVar62._0_8_ = auVar15._0_8_;
        auVar62._12_4_ = auVar15._12_4_;
        auVar14 = maxps(auVar15,auVar34);
        auVar63 = minps(auVar62,auVar34);
        local_40 = (auVar63._0_4_ * fVar12 + fVar27) - local_40;
        fStack_3c = (auVar63._4_4_ * fVar17 + fVar21) - fStack_3c;
        fStack_38 = (auVar63._8_4_ * fVar22 + fVar28) - fStack_38;
        fVar38 = local_40 * fVar39;
        fVar27 = fStack_3c * fVar42;
        fVar28 = fStack_38 * fVar44;
        auVar50._4_4_ = fVar38;
        auVar50._0_4_ = fVar38;
        auVar50._8_4_ = fVar38;
        auVar50._12_4_ = fVar38;
        local_40 = local_40 - (fVar27 + fVar38 + fVar28) * fVar39;
        fStack_3c = fStack_3c - (fVar27 + fVar38 + fVar28) * fVar42;
        fStack_38 = fStack_38 - (fVar27 + fVar38 + fVar28) * fVar44;
        fVar20 = local_40 * local_40;
        fVar21 = fStack_3c * fStack_3c;
        fVar12 = fStack_38 * fStack_38;
        auVar47._0_4_ = fVar21 + fVar20 + fVar12;
        auVar47._4_4_ = fVar21 + fVar20 + fVar12;
        auVar47._8_4_ = fVar21 + fVar20 + fVar12;
        auVar47._12_4_ = fVar21 + fVar20 + fVar12;
        auVar51 = rsqrtps(auVar50,auVar47);
        fVar20 = auVar51._0_4_;
        fVar21 = auVar51._4_4_;
        fVar12 = auVar51._8_4_;
        fVar18 = auVar51._12_4_;
        uVar7 = -(uint)(auVar63._0_4_ < fVar23);
        uVar8 = -(uint)(auVar63._4_4_ < auVar49._4_4_);
        uVar9 = -(uint)(auVar63._8_4_ < auVar49._8_4_);
        uVar11 = -(uint)(auVar63._12_4_ < auVar49._12_4_);
        uVar10 = uVar7 & uVar10 |
                 ~uVar7 & (uint)((float)(~-(uint)(auVar47._0_4_ <= 0.0) &
                                        (uint)((3.0 - fVar20 * auVar47._0_4_ * fVar20) *
                                              fVar20 * 0.5)) * local_40);
        uVar19 = uVar8 & uVar19 |
                 ~uVar8 & (uint)((float)(~-(uint)(auVar47._4_4_ <= 0.0) &
                                        (uint)((3.0 - fVar21 * auVar47._4_4_ * fVar21) *
                                              fVar21 * 0.5)) * fStack_3c);
        uVar26 = uVar9 & uVar26 |
                 ~uVar9 & (uint)((float)(~-(uint)(auVar47._8_4_ <= 0.0) &
                                        (uint)((3.0 - fVar12 * auVar47._8_4_ * fVar12) *
                                              fVar12 * 0.5)) * fStack_38);
        uVar30 = uVar11 & uVar30 |
                 ~uVar11 & (uint)((float)(~-(uint)(auVar47._12_4_ <= 0.0) &
                                         (uint)((3.0 - fVar18 * auVar47._12_4_ * fVar18) *
                                               fVar18 * 0.5)) *
                                 (((auVar63._12_4_ * (param_3[7] - param_3[3]) + param_3[3]) -
                                  fStack_34) - (fVar27 + fVar38 + fVar28) * fVar25));
      }
      else {
        fVar38 = (fVar23 * fVar12 + fVar27) -
                 (float)(~uVar7 & (uint)fVar18 | uVar7 & (uint)local_40);
        fVar20 = (auVar49._4_4_ * fVar17 + fVar21) -
                 (float)(~uVar8 & (uint)fVar41 | uVar8 & (uint)fStack_3c);
        fVar27 = (auVar49._8_4_ * fVar22 + fVar28) -
                 (float)(~uVar9 & (uint)fVar24 | uVar9 & (uint)fStack_38);
        if (fVar54 < fVar20 * fVar20 + fVar38 * fVar38 + fVar27 * fVar27) goto LAB_0112d2c0;
        auVar63._0_4_ = 0.0 - (float)DAT_01701ce0;
        auVar63._4_4_ = 0.0 - DAT_01701ce0._4_4_;
        auVar63._8_4_ = 0.0 - DAT_01701ce0._8_4_;
        auVar63._12_4_ = 0.0 - DAT_01701ce0._12_4_;
        auVar14 = _DAT_01701ce0;
      }
      auVar49 = maxps(auVar49,auVar63);
      auVar14 = minps(auVar56,auVar14);
      fVar38 = auVar49._0_4_;
      fVar20 = auVar49._4_4_;
      fVar27 = auVar49._8_4_;
      fVar21 = auVar49._12_4_;
      auVar16._0_4_ = -(uint)((0.0 <= fVar38 && fVar38 <= auVar14._0_4_) && fVar38 < fVar13);
      auVar16._4_4_ = -(uint)((0.0 <= fVar20 && fVar20 <= auVar14._4_4_) && fVar20 < fVar13);
      auVar16._8_4_ = -(uint)((0.0 <= fVar27 && fVar27 <= auVar14._8_4_) && fVar27 < fVar13);
      auVar16._12_4_ = -(uint)((0.0 <= fVar21 && fVar21 <= auVar14._12_4_) && fVar21 < fVar13);
      iVar6 = movmskps(pvVar5,auVar16);
      if (iVar6 != 0) {
        *param_4 = uVar10;
        param_4[1] = uVar19;
        param_4[2] = uVar26;
        param_4[3] = uVar30;
        param_4[4] = auVar16._0_4_ & (uint)fVar38 | ~auVar16._0_4_ & (uint)fVar13;
        param_4[param_4[0x10] + 8] = 0xffffffff;
        pvVar5 = TlsGetValue(DAT_01f8fc54);
        puVar1 = *(undefined4 **)((int)pvVar5 + 4);
        if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
          *puVar1 = &DAT_0164b09c;
          uVar2 = rdtsc();
          puVar1[1] = (int)uVar2;
          *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
        }
        *param_2 = 1;
        return;
      }
    }
  }
LAB_0112d2c0:
  pvVar5 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar5 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
  }
  *param_2 = 0;
  return;
}

// 0112D300  hkpCylinderShape::hkpCylinderShape  size=194  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
hkpCylinderShape::hkpCylinderShape
          (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int extraout_ECX;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x401;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = param_5;
  *param_1 = vftable;
  if (_DAT_01b20710 < 0.0) {
    _DAT_01b20710 = 0.0;
    do {
      if ((int)_DAT_01b20710 != 0) {
        _DAT_01b20710 = 1.0 - _DAT_01b20710;
        goto LAB_0112d370;
      }
      _DAT_01b20710 = _DAT_01b20710 + 0.01;
    } while (_DAT_01b20710 < 1.1);
    _DAT_01b20710 = 0.0;
  }
LAB_0112d370:
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  param_1[8] = *param_2;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[0xc] = *param_3;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  FUN_0112c440(param_4);
  FUN_0112cb90();
  *(undefined4 *)(extraout_ECX + 0x18) = 0x3f4ccccd;
  return extraout_ECX;
}

// 0112D3D0  FUN_0112d3d0  size=27  [run]
void __thiscall FUN_0112d3d0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  param_2 = param_2 * 0x10;
  uVar1 = *(uint *)(&UNK_017dcad4 + param_2);
  uVar2 = *(uint *)(&UNK_017dcad8 + param_2);
  uVar3 = *(uint *)(&UNK_017dcadc + param_2);
  *param_1 = *(uint *)(&DAT_017dcad0 + param_2) & *param_1;
  param_1[1] = uVar1 & param_1[1];
  param_1[2] = uVar2 & param_1[2];
  param_1[3] = uVar3 & param_1[3];
  return;
}

// 0112D3F0  FUN_0112d3f0  size=23  [run]
void __thiscall FUN_0112d3f0(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *param_2 = -(uint)(0.0 <= *param_1);
  param_2[1] = -(uint)(0.0 <= fVar1);
  param_2[2] = -(uint)(0.0 <= fVar2);
  param_2[3] = -(uint)(0.0 <= fVar3);
  return;
}

// 0112D410  FUN_0112d410  size=23  [run]
void __thiscall FUN_0112d410(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *param_2 = -(uint)(*param_1 == 0.0);
  param_2[1] = -(uint)(fVar1 == 0.0);
  param_2[2] = -(uint)(fVar2 == 0.0);
  param_2[3] = -(uint)(fVar3 == 0.0);
  return;
}

// 0112D430  FUN_0112d430  size=29  [run]
bool __thiscall FUN_0112d430(float *param_1,float *param_2)

{
  return *param_1 == *param_2;
}

// 0112D450  FUN_0112d450  size=27  [run]
void __thiscall FUN_0112d450(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  param_2 = param_2 * 0x10;
  uVar1 = *(uint *)(&UNK_017dcad4 + param_2);
  uVar2 = *(uint *)(&UNK_017dcad8 + param_2);
  uVar3 = *(uint *)(&UNK_017dcadc + param_2);
  *param_1 = *(uint *)(&DAT_017dcad0 + param_2) & *param_1;
  param_1[1] = uVar1 & param_1[1];
  param_1[2] = uVar2 & param_1[2];
  param_1[3] = uVar3 & param_1[3];
  return;
}

// 0112D470  FUN_0112d470  size=22  [run]
void __thiscall FUN_0112d470(float *param_1,float *param_2,float *param_3)

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
  *param_1 = *param_2 + *param_3;
  param_1[1] = fVar1 + fVar4;
  param_1[2] = fVar2 + fVar5;
  param_1[3] = fVar3 + fVar6;
  return;
}

// 0112D490  FUN_0112d490  size=28  [run]
void __thiscall FUN_0112d490(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  *param_1 = *param_3 * *param_4 + *param_2;
  param_1[1] = fVar1 * fVar4 + fVar7;
  param_1[2] = fVar2 * fVar5 + fVar8;
  param_1[3] = fVar3 * fVar6 + fVar9;
  return;
}

// 0112D4B0  FUN_0112d4b0  size=22  [run]
void FUN_0112d4b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  return;
}

// 0112D4D0  FUN_0112d4d0  size=17  [run]
void __thiscall FUN_0112d4d0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20 + *(int *)(param_1 + 0x40) * 4) = param_2;
  return;
}

// 0112D4F0  FUN_0112d4f0  size=12  [run]
void __thiscall FUN_0112d4f0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0112D500  FUN_0112d500  size=55  [run]
void FUN_0112d500(float *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16];
  undefined1 auVar3 [16];
  float fVar6;
  
  auVar1 = *param_2;
  auVar3 = rsqrtps(in_XMM1,auVar1);
  fVar2 = auVar3._0_4_;
  fVar4 = auVar3._4_4_;
  fVar5 = auVar3._8_4_;
  fVar6 = auVar3._12_4_;
  *param_1 = (3.0 - auVar1._0_4_ * fVar2 * fVar2) * fVar2 * 0.5 * auVar1._0_4_;
  param_1[1] = (3.0 - auVar1._4_4_ * fVar4 * fVar4) * fVar4 * 0.5 * auVar1._4_4_;
  param_1[2] = (3.0 - auVar1._8_4_ * fVar5 * fVar5) * fVar5 * 0.5 * auVar1._8_4_;
  param_1[3] = (3.0 - auVar1._12_4_ * fVar6 * fVar6) * fVar6 * 0.5 * auVar1._12_4_;
  return;
}

// 0112D5A0  FUN_0112d5a0  size=185  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0112d5a0(int param_1,uint param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar11 = param_2 & 0xffff;
  fVar12 = ((float)(param_2 & 0xf) + 0.5) * _DAT_01b2070c;
  fVar14 = SQRT(1.0 - fVar12 * fVar12);
  fVar13 = fVar14;
  if ((param_2 & 0x10) != 0) {
    fVar13 = fVar12;
    fVar12 = fVar14;
  }
  if ((uVar11 >> 6 & 1) == 0) {
    fVar13 = -fVar13;
  }
  if ((uVar11 >> 5 & 1) == 0) {
    fVar12 = -fVar12;
  }
  fVar2 = *(float *)(param_1 + 0x54);
  fVar3 = *(float *)(param_1 + 0x58);
  fVar4 = *(float *)(param_1 + 0x5c);
  fVar5 = *(float *)(param_1 + 0x44);
  fVar6 = *(float *)(param_1 + 0x48);
  fVar7 = *(float *)(param_1 + 0x4c);
  fVar14 = *(float *)(param_1 + 0x14);
  pfVar1 = (float *)(param_1 + (3 - (uVar11 >> 7 & 1)) * 0x10);
  fVar8 = pfVar1[1];
  fVar9 = pfVar1[2];
  fVar10 = pfVar1[3];
  *param_3 = (fVar13 * *(float *)(param_1 + 0x50) + fVar12 * *(float *)(param_1 + 0x40)) * fVar14 +
             *pfVar1;
  param_3[1] = (fVar13 * fVar2 + fVar12 * fVar5) * fVar14 + fVar8;
  param_3[2] = (fVar13 * fVar3 + fVar12 * fVar6) * fVar14 + fVar9;
  param_3[3] = (fVar13 * fVar4 + fVar12 * fVar7) * fVar14 + fVar10;
  return;
}

// 0112D660  FUN_0112d660  size=13  [run]
void __thiscall FUN_0112d660(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}

// 0112D670  FUN_0112d670  size=68  [run]
void FUN_0112d670(uint *param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16];
  undefined1 auVar6 [16];
  float fVar9;
  
  auVar6 = *param_2;
  fVar1 = auVar6._0_4_;
  fVar2 = auVar6._4_4_;
  fVar3 = auVar6._8_4_;
  fVar4 = auVar6._12_4_;
  auVar6 = rsqrtps(in_XMM3,auVar6);
  fVar5 = auVar6._0_4_;
  fVar7 = auVar6._4_4_;
  fVar8 = auVar6._8_4_;
  fVar9 = auVar6._12_4_;
  *param_1 = ~-(uint)(fVar1 <= 0.0) & (uint)((3.0 - fVar1 * fVar5 * fVar5) * fVar5 * 0.5 * fVar1);
  param_1[1] = ~-(uint)(fVar2 <= 0.0) & (uint)((3.0 - fVar2 * fVar7 * fVar7) * fVar7 * 0.5 * fVar2);
  param_1[2] = ~-(uint)(fVar3 <= 0.0) & (uint)((3.0 - fVar3 * fVar8 * fVar8) * fVar8 * 0.5 * fVar3);
  param_1[3] = ~-(uint)(fVar4 <= 0.0) & (uint)((3.0 - fVar4 * fVar9 * fVar9) * fVar9 * 0.5 * fVar4);
  return;
}

// 0112D6C0  hkpCylinderShape::vf40  size=8  [run]
undefined4 hkpCylinderShape::vf40(void)

{
  return 0x60;
}

// 0112D6D0  hkpCylinderShape::vf2C  size=6  [run]
undefined4 hkpCylinderShape::vf2C(void)

{
  return 0x12;
}

// 0112D6F0  FUN_0112d6f0  size=38  [run]
void FUN_0112d6f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0112D720  hkpCylinderShape::vf00  size=53  [run]
undefined4 * __thiscall hkpCylinderShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0112D760  FUN_0112d760  size=67  [run]
void __thiscall FUN_0112d760(uint *param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16];
  undefined1 auVar6 [16];
  float fVar9;
  
  auVar6 = *param_2;
  fVar1 = auVar6._0_4_;
  fVar2 = auVar6._4_4_;
  fVar3 = auVar6._8_4_;
  fVar4 = auVar6._12_4_;
  auVar6 = rsqrtps(in_XMM3,auVar6);
  fVar5 = auVar6._0_4_;
  fVar7 = auVar6._4_4_;
  fVar8 = auVar6._8_4_;
  fVar9 = auVar6._12_4_;
  *param_1 = ~-(uint)(fVar1 <= 0.0) & (uint)((3.0 - fVar1 * fVar5 * fVar5) * fVar5 * 0.5 * fVar1);
  param_1[1] = ~-(uint)(fVar2 <= 0.0) & (uint)((3.0 - fVar2 * fVar7 * fVar7) * fVar7 * 0.5 * fVar2);
  param_1[2] = ~-(uint)(fVar3 <= 0.0) & (uint)((3.0 - fVar3 * fVar8 * fVar8) * fVar8 * 0.5 * fVar3);
  param_1[3] = ~-(uint)(fVar4 <= 0.0) & (uint)((3.0 - fVar4 * fVar9 * fVar9) * fVar9 * 0.5 * fVar4);
  return;
}

// 0112D7B0  FUN_0112d7b0  size=67  [run]
void __thiscall FUN_0112d7b0(undefined1 (*param_1) [16],uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16];
  undefined1 auVar6 [16];
  float fVar9;
  
  auVar6 = *param_1;
  fVar1 = auVar6._0_4_;
  fVar2 = auVar6._4_4_;
  fVar3 = auVar6._8_4_;
  fVar4 = auVar6._12_4_;
  auVar6 = rsqrtps(in_XMM3,auVar6);
  fVar5 = auVar6._0_4_;
  fVar7 = auVar6._4_4_;
  fVar8 = auVar6._8_4_;
  fVar9 = auVar6._12_4_;
  *param_2 = ~-(uint)(fVar1 <= 0.0) & (uint)((3.0 - fVar1 * fVar5 * fVar5) * fVar5 * 0.5 * fVar1);
  param_2[1] = ~-(uint)(fVar2 <= 0.0) & (uint)((3.0 - fVar2 * fVar7 * fVar7) * fVar7 * 0.5 * fVar2);
  param_2[2] = ~-(uint)(fVar3 <= 0.0) & (uint)((3.0 - fVar3 * fVar8 * fVar8) * fVar8 * 0.5 * fVar3);
  param_2[3] = ~-(uint)(fVar4 <= 0.0) & (uint)((3.0 - fVar4 * fVar9 * fVar9) * fVar9 * 0.5 * fVar4);
  return;
}

// 0112DD20  hkpSphereShape::vf44  size=16  [run]
void hkpSphereShape::vf44(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 0112DD30  hkpSphereShape::hkpSphereShape  size=49  [run]
void __thiscall hkpSphereShape::hkpSphereShape(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x400;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *param_1 = vftable;
  return;
}

// 0112DD70  hkpSphereShape::hkpSphereShape_2  size=32  [run]
undefined4 * __thiscall hkpSphereShape::hkpSphereShape_2(undefined4 *param_1,undefined4 param_2)

{
  hkpConvexShape::hkpConvexShape(param_2);
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}

// 0112DD90  hkpSphereShape::vf1C  size=971  [run]
undefined1 (*) [16] __thiscall
hkpSphereShape::vf1C
          (int param_1,undefined1 (*param_2) [16],float *param_3,float *param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  LPVOID pvVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  float local_e0 [7];
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
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
  float local_40 [4];
  undefined1 local_30 [8];
  float fStack_28;
  float fStack_24;
  float *local_14;
  
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = "TtrcSphereBundle";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  *(undefined8 *)*param_2 = *param_5;
  local_a0 = *param_3;
  fStack_9c = param_3[1];
  fStack_98 = param_3[2];
  fStack_94 = param_3[3];
  local_60 = param_3[0x10];
  fStack_5c = param_3[0x11];
  fStack_58 = param_3[0x12];
  fStack_54 = param_3[0x13];
  local_70 = param_3[4];
  fStack_6c = param_3[5];
  fStack_68 = param_3[6];
  fStack_64 = param_3[7];
  local_80 = param_3[0x14];
  fStack_7c = param_3[0x15];
  fStack_78 = param_3[0x16];
  fStack_74 = param_3[0x17];
  local_50 = param_3[8];
  fStack_4c = param_3[9];
  fStack_48 = param_3[10];
  fStack_44 = param_3[0xb];
  *(undefined8 *)(*param_2 + 8) = param_5[1];
  fVar22 = *(float *)(param_1 + 0x10);
  local_90 = param_3[0xc];
  fStack_8c = param_3[0xd];
  fStack_88 = param_3[0xe];
  fStack_84 = param_3[0xf];
  fVar11 = local_90 - local_a0;
  fVar15 = fStack_8c - fStack_9c;
  fVar17 = fStack_88 - fStack_98;
  fVar19 = fStack_84 - fStack_94;
  fVar27 = local_60 - local_70;
  fVar28 = fStack_5c - fStack_6c;
  fVar29 = fStack_58 - fStack_68;
  fVar30 = fStack_54 - fStack_64;
  fVar31 = local_80 - local_50;
  fVar32 = fStack_7c - fStack_4c;
  fVar33 = fStack_78 - fStack_48;
  fVar34 = fStack_74 - fStack_44;
  fVar21 = local_70 * fVar27 + local_a0 * fVar11 + local_50 * fVar31;
  fVar23 = fStack_6c * fVar28 + fStack_9c * fVar15 + fStack_4c * fVar32;
  fVar24 = fStack_68 * fVar29 + fStack_98 * fVar17 + fStack_48 * fVar33;
  fVar25 = fStack_64 * fVar30 + fStack_94 * fVar19 + fStack_44 * fVar34;
  auVar26._0_4_ = fVar11 * fVar11 + fVar27 * fVar27 + fVar31 * fVar31;
  auVar26._4_4_ = fVar15 * fVar15 + fVar28 * fVar28 + fVar32 * fVar32;
  auVar26._8_4_ = fVar17 * fVar17 + fVar29 * fVar29 + fVar33 * fVar33;
  auVar26._12_4_ = fVar19 * fVar19 + fVar30 * fVar30 + fVar34 * fVar34;
  uVar7 = -(uint)(auVar26._0_4_ * fVar22 * fVar22 * 100.0 < fVar21 * fVar21);
  uVar8 = -(uint)(auVar26._4_4_ * fVar22 * fVar22 * 100.0 < fVar23 * fVar23);
  uVar9 = -(uint)(auVar26._8_4_ * fVar22 * fVar22 * 100.0 < fVar24 * fVar24);
  uVar10 = -(uint)(auVar26._12_4_ * fVar22 * fVar22 * 100.0 < fVar25 * fVar25);
  _local_30 = ZEXT816(0);
  auVar13._0_4_ = ~uVar7 & (uint)(fVar21 * fVar21);
  auVar13._4_4_ = ~uVar8 & (uint)(fVar23 * fVar23);
  auVar13._8_4_ = ~uVar9 & (uint)(fVar24 * fVar24);
  auVar13._12_4_ = ~uVar10 & (uint)(fVar25 * fVar25);
  auVar13 = auVar13 | _local_30;
  auVar14 = rcpps(auVar13,auVar26);
  local_40[0] = (2.0 - auVar14._0_4_ * auVar26._0_4_) * auVar14._0_4_;
  local_40[1] = (2.0 - auVar14._4_4_ * auVar26._4_4_) * auVar14._4_4_;
  local_40[2] = (2.0 - auVar14._8_4_ * auVar26._8_4_) * auVar14._8_4_;
  local_40[3] = (2.0 - auVar14._12_4_ * auVar26._12_4_) * auVar14._12_4_;
  fVar27 = local_40[0] * -(float)(uVar7 & (uint)fVar21);
  fVar28 = local_40[1] * -(float)(uVar8 & (uint)fVar23);
  fVar29 = local_40[2] * -(float)(uVar9 & (uint)fVar24);
  fVar30 = local_40[3] * -(float)(uVar10 & (uint)fVar25);
  fVar31 = 1.0 - fVar27;
  fVar33 = 1.0 - fVar28;
  fVar35 = 1.0 - fVar29;
  fVar37 = 1.0 - fVar30;
  fVar11 = local_90 * fVar27 + local_a0 * fVar31;
  fVar15 = fStack_8c * fVar28 + fStack_9c * fVar33;
  fVar17 = fStack_88 * fVar29 + fStack_98 * fVar35;
  fVar19 = fStack_84 * fVar30 + fStack_94 * fVar37;
  fVar32 = local_60 * fVar27 + local_70 * fVar31;
  fVar34 = fStack_5c * fVar28 + fStack_6c * fVar33;
  fVar36 = fStack_58 * fVar29 + fStack_68 * fVar35;
  fVar38 = fStack_54 * fVar30 + fStack_64 * fVar37;
  fVar27 = local_80 * fVar27 + local_50 * fVar31;
  fVar28 = fStack_7c * fVar28 + fStack_4c * fVar33;
  fVar29 = fStack_78 * fVar29 + fStack_48 * fVar35;
  fVar30 = fStack_74 * fVar30 + fStack_44 * fVar37;
  auVar39._0_4_ = fVar27 * fVar27;
  auVar39._4_4_ = fVar28 * fVar28;
  auVar39._8_4_ = fVar29 * fVar29;
  auVar39._12_4_ = fVar30 * fVar30;
  local_30._0_4_ = auVar13._0_4_;
  local_30._4_4_ = auVar13._4_4_;
  fStack_28 = auVar13._8_4_;
  fStack_24 = auVar13._12_4_;
  fVar27 = ((fVar11 * fVar11 + fVar32 * fVar32 + auVar39._0_4_) - fVar22 * fVar22) * -auVar26._0_4_
           + (float)local_30._0_4_;
  fVar28 = ((fVar15 * fVar15 + fVar34 * fVar34 + auVar39._4_4_) - fVar22 * fVar22) * -auVar26._4_4_
           + (float)local_30._4_4_;
  fVar29 = ((fVar17 * fVar17 + fVar36 * fVar36 + auVar39._8_4_) - fVar22 * fVar22) * -auVar26._8_4_
           + fStack_28;
  fVar19 = ((fVar19 * fVar19 + fVar38 * fVar38 + auVar39._12_4_) - fVar22 * fVar22) *
           -auVar26._12_4_ + fStack_24;
  auVar14._4_4_ = fVar28;
  auVar14._0_4_ = fVar27;
  auVar14._8_4_ = fVar29;
  auVar14._12_4_ = fVar19;
  _local_30 = rsqrtps(auVar39,auVar14);
  fVar30 = local_30._0_4_;
  fVar31 = local_30._4_4_;
  fVar32 = local_30._8_4_;
  fVar33 = local_30._12_4_;
  uVar12 = *(uint *)*param_2 & -(uint)(0.0 < fVar27);
  uVar16 = *(uint *)(*param_2 + 4) & -(uint)(0.0 < fVar28);
  uVar18 = *(uint *)(*param_2 + 8) & -(uint)(0.0 < fVar29);
  uVar20 = *(uint *)(*param_2 + 0xc) & -(uint)(0.0 < fVar19);
  *(uint *)*param_2 = uVar12;
  *(uint *)(*param_2 + 4) = uVar16;
  *(uint *)(*param_2 + 8) = uVar18;
  *(uint *)(*param_2 + 0xc) = uVar20;
  fVar11 = param_4[0x40];
  fVar15 = param_4[0x18];
  fVar17 = param_4[0x2c];
  fVar21 = (-(float)(uVar7 & (uint)fVar21) - (float)(~uVar7 & (uint)fVar21)) -
           (float)((uint)((float)(~-(uint)(fVar27 <= 0.0) &
                                 (uint)((3.0 - fVar30 * fVar27 * fVar30) * fVar30 * 0.5)) * fVar27)
                  & -(uint)(0.0 < fVar27));
  fVar27 = (-(float)(uVar8 & (uint)fVar23) - (float)(~uVar8 & (uint)fVar23)) -
           (float)((uint)((float)(~-(uint)(fVar28 <= 0.0) &
                                 (uint)((3.0 - fVar31 * fVar28 * fVar31) * fVar31 * 0.5)) * fVar28)
                  & -(uint)(0.0 < fVar28));
  fVar23 = (-(float)(uVar9 & (uint)fVar24) - (float)(~uVar9 & (uint)fVar24)) -
           (float)((uint)((float)(~-(uint)(fVar29 <= 0.0) &
                                 (uint)((3.0 - fVar32 * fVar29 * fVar32) * fVar32 * 0.5)) * fVar29)
                  & -(uint)(0.0 < fVar29));
  fVar19 = (-(float)(uVar10 & (uint)fVar25) - (float)(~uVar10 & (uint)fVar25)) -
           (float)((uint)((float)(~-(uint)(fVar19 <= 0.0) &
                                 (uint)((3.0 - fVar33 * fVar19 * fVar33) * fVar33 * 0.5)) * fVar19)
                  & -(uint)(0.0 < fVar19));
  local_40[0] = fVar21 * local_40[0];
  local_40[1] = fVar27 * local_40[1];
  local_40[2] = fVar23 * local_40[2];
  local_40[3] = fVar19 * local_40[3];
  *(uint *)*param_2 = -(uint)(fVar21 < param_4[4] * auVar26._0_4_) & uVar12 & -(uint)(0.0 <= fVar21)
  ;
  *(uint *)(*param_2 + 4) =
       -(uint)(fVar27 < fVar15 * auVar26._4_4_) & uVar16 & -(uint)(0.0 <= fVar27);
  *(uint *)(*param_2 + 8) =
       -(uint)(fVar23 < fVar17 * auVar26._8_4_) & uVar18 & -(uint)(0.0 <= fVar23);
  *(uint *)(*param_2 + 0xc) =
       -(uint)(fVar19 < fVar11 * auVar26._12_4_) & uVar20 & -(uint)(0.0 <= fVar19);
  auVar3._4_4_ = fVar22;
  auVar3._0_4_ = fVar22;
  auVar3._8_4_ = fVar22;
  auVar3._12_4_ = fVar22;
  auVar14 = rcpps(auVar26,auVar3);
  fVar19 = (2.0 - auVar14._0_4_ * fVar22) * auVar14._0_4_;
  fVar21 = (2.0 - auVar14._4_4_ * fVar22) * auVar14._4_4_;
  fVar27 = (2.0 - auVar14._8_4_ * fVar22) * auVar14._8_4_;
  fVar23 = (2.0 - auVar14._12_4_ * fVar22) * auVar14._12_4_;
  fVar22 = 1.0 - local_40[0];
  fVar11 = 1.0 - local_40[1];
  fVar15 = 1.0 - local_40[2];
  fVar17 = 1.0 - local_40[3];
  local_e0[4] = fVar21 * (local_40[1] * fStack_8c + fStack_9c * fVar11);
  local_e0[5] = (local_40[1] * fStack_5c + fStack_6c * fVar11) * fVar21;
  local_e0[6] = (local_40[1] * fStack_7c + fStack_4c * fVar11) * fVar21;
  uStack_c4 = 0;
  iVar5 = 0;
  pfVar6 = local_e0;
  local_c0 = fVar27 * (local_40[2] * fStack_88 + fStack_98 * fVar15);
  fStack_bc = (local_40[2] * fStack_58 + fStack_68 * fVar15) * fVar27;
  fStack_b8 = (local_40[2] * fStack_78 + fStack_48 * fVar15) * fVar27;
  uStack_b4 = 0;
  auVar14 = *param_2;
  local_e0[0] = fVar19 * (local_40[0] * local_90 + local_a0 * fVar22);
  local_e0[1] = (local_40[0] * local_60 + local_70 * fVar22) * fVar19;
  local_e0[2] = (local_40[0] * local_80 + local_50 * fVar22) * fVar19;
  local_e0[3] = 0.0;
  local_b0 = fVar23 * (local_40[3] * fStack_84 + fStack_94 * fVar17);
  fStack_ac = (local_40[3] * fStack_54 + fStack_64 * fVar17) * fVar23;
  fStack_a8 = (local_40[3] * fStack_74 + fStack_44 * fVar17) * fVar23;
  uStack_a4 = 0;
  uVar7 = 1;
  local_14 = pfVar6;
  do {
    pfVar6 = (float *)movmskps(pfVar6,auVar14);
    if ((uVar7 & (uint)pfVar6) != 0) {
      fVar22 = *local_14;
      fVar11 = local_14[1];
      fVar15 = local_14[2];
      fVar17 = local_14[3];
      param_4[4] = local_40[iVar5];
      *param_4 = fVar22;
      param_4[1] = fVar11;
      param_4[2] = fVar15;
      param_4[3] = fVar17;
      pfVar6 = (float *)param_4[0x10];
      param_4[(int)(pfVar6 + 2)] = -NAN;
    }
    local_14 = local_14 + 4;
    iVar5 = iVar5 + 1;
    param_4 = param_4 + 0x14;
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
  } while (iVar5 < 4);
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  return param_2;
}

// 0112E160  hkpSphereShape::vf14  size=673  [run]
undefined1 * __thiscall
hkpSphereShape::vf14(int param_1,undefined1 *param_2,float *param_3,float *param_4)

{
  float fVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  LPVOID pvVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  undefined1 auVar12 [16];
  float fVar23;
  undefined1 auVar13 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  pvVar6 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar6 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar6 + 0xc)) {
    *puVar2 = "TtrcSphere";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)((int)pvVar6 + 4) = puVar2 + 3;
  }
  fVar18 = *param_3;
  fVar24 = param_3[1];
  fVar28 = param_3[2];
  fVar5 = param_3[3];
  fVar1 = *(float *)(param_1 + 0x10);
  fVar7 = param_3[4] - fVar18;
  fVar14 = param_3[5] - fVar24;
  fVar19 = param_3[6] - fVar28;
  fVar11 = param_4[4];
  fVar8 = (fVar18 - 0.0) * fVar7;
  fVar15 = (fVar24 - 0.0) * fVar14;
  fVar20 = (fVar28 - 0.0) * fVar19;
  fVar9 = 0.0 - (fVar15 + fVar8 + fVar20);
  fVar16 = 0.0 - (fVar15 + fVar8 + fVar20);
  fVar21 = 0.0 - (fVar15 + fVar8 + fVar20);
  if (0.0 < fVar9) {
    fVar10 = fVar7 * fVar7;
    fVar17 = fVar14 * fVar14;
    fVar22 = fVar19 * fVar19;
    fVar25 = fVar17 + fVar10 + fVar22;
    fVar26 = fVar17 + fVar10 + fVar22;
    fVar27 = fVar17 + fVar10 + fVar22;
    fVar22 = fVar17 + fVar10 + fVar22;
    auVar31._0_4_ = fVar1 * fVar1;
    auVar31._4_4_ = fVar1 * fVar1;
    auVar31._8_4_ = fVar1 * fVar1;
    auVar31._12_4_ = fVar1 * fVar1;
    auVar12._4_4_ = fVar26;
    auVar12._0_4_ = fVar25;
    auVar12._8_4_ = fVar27;
    auVar12._12_4_ = fVar22;
    auVar12 = rcpps(auVar31,auVar12);
    fVar10 = (2.0 - auVar12._0_4_ * fVar25) * auVar12._0_4_ * fVar9 * fVar7 + (fVar18 - 0.0);
    fVar17 = (2.0 - auVar12._4_4_ * fVar26) * auVar12._4_4_ * fVar16 * fVar14 + (fVar24 - 0.0);
    fVar23 = (2.0 - auVar12._8_4_ * fVar27) * auVar12._8_4_ * fVar21 * fVar19 + (fVar28 - 0.0);
    fVar10 = fVar10 * fVar10;
    fVar17 = fVar17 * fVar17;
    fVar23 = fVar23 * fVar23;
    auVar13._0_4_ = ((fVar17 + fVar10 + fVar23) - auVar31._0_4_) * (0.0 - fVar25);
    auVar13._4_4_ = ((fVar17 + fVar10 + fVar23) - auVar31._4_4_) * (0.0 - fVar26);
    auVar13._8_4_ = ((fVar17 + fVar10 + fVar23) - auVar31._8_4_) * (0.0 - fVar27);
    auVar13._12_4_ = ((fVar17 + fVar10 + fVar23) - auVar31._12_4_) * (0.0 - fVar22);
    if (0.0 <= auVar13._0_4_) {
      auVar33._4_4_ = -(uint)(auVar13._4_4_ <= 0.0);
      auVar33._0_4_ = -(uint)(auVar13._0_4_ <= 0.0);
      auVar33._8_4_ = -(uint)(auVar13._8_4_ <= 0.0);
      auVar33._12_4_ = -(uint)(auVar13._12_4_ <= 0.0);
      auVar12 = rsqrtps(auVar33,auVar13);
      auVar29._0_4_ = 3.0 - auVar12._0_4_ * auVar13._0_4_ * auVar12._0_4_;
      auVar29._4_4_ = 3.0 - auVar12._4_4_ * auVar13._4_4_ * auVar12._4_4_;
      auVar29._8_4_ = 3.0 - auVar12._8_4_ * auVar13._8_4_ * auVar12._8_4_;
      auVar29._12_4_ = 3.0 - auVar12._12_4_ * auVar13._12_4_ * auVar12._12_4_;
      auVar12 = rsqrtps(auVar29,auVar13);
      fVar9 = (0.0 - (float)(~-(uint)(auVar13._0_4_ <= 0.0) &
                            (uint)(auVar29._0_4_ * auVar12._0_4_ * 0.5 * auVar13._0_4_))) + fVar9;
      auVar30._0_4_ = fVar25 * fVar11;
      auVar30._4_4_ = fVar26 * fVar11;
      auVar30._8_4_ = fVar27 * fVar11;
      auVar30._12_4_ = fVar22 * fVar11;
      if (fVar9 < auVar30._0_4_ && 0.0 <= fVar9) {
        auVar4._4_4_ = fVar26;
        auVar4._0_4_ = fVar25;
        auVar4._8_4_ = fVar27;
        auVar4._12_4_ = fVar22;
        auVar31 = rcpps(auVar30,auVar4);
        fVar9 = (2.0 - auVar31._0_4_ * fVar25) * auVar31._0_4_ * fVar9;
        fVar7 = (fVar9 * fVar7 + fVar18) - 0.0;
        fVar14 = ((2.0 - auVar31._4_4_ * fVar26) * auVar31._4_4_ *
                  ((0.0 - (float)(~-(uint)(auVar13._4_4_ <= 0.0) &
                                 (uint)(auVar29._4_4_ * auVar12._4_4_ * 0.5 * auVar13._4_4_))) +
                  fVar16) * fVar14 + fVar24) - 0.0;
        fVar28 = ((2.0 - auVar31._8_4_ * fVar27) * auVar31._8_4_ *
                  ((0.0 - (float)(~-(uint)(auVar13._8_4_ <= 0.0) &
                                 (uint)(auVar29._8_4_ * auVar12._8_4_ * 0.5 * auVar13._8_4_))) +
                  fVar21) * fVar19 + fVar28) - 0.0;
        fVar11 = fVar7 * fVar7;
        fVar18 = fVar14 * fVar14;
        fVar24 = fVar28 * fVar28;
        auVar32._0_4_ = fVar18 + fVar11 + fVar24;
        auVar32._4_4_ = fVar18 + fVar11 + fVar24;
        auVar32._8_4_ = fVar18 + fVar11 + fVar24;
        auVar32._12_4_ = fVar18 + fVar11 + fVar24;
        auVar33 = rsqrtps(ZEXT816(0),auVar32);
        fVar11 = auVar33._0_4_;
        fVar18 = auVar33._4_4_;
        fVar24 = auVar33._8_4_;
        fVar16 = auVar33._12_4_;
        *param_4 = (float)(~-(uint)(auVar32._0_4_ <= 0.0) &
                          (uint)((3.0 - fVar11 * auVar32._0_4_ * fVar11) * fVar11 * 0.5)) * fVar7;
        param_4[1] = (float)(~-(uint)(auVar32._4_4_ <= 0.0) &
                            (uint)((3.0 - fVar18 * auVar32._4_4_ * fVar18) * fVar18 * 0.5)) * fVar14
        ;
        param_4[2] = (float)(~-(uint)(auVar32._8_4_ <= 0.0) &
                            (uint)((3.0 - fVar24 * auVar32._8_4_ * fVar24) * fVar24 * 0.5)) * fVar28
        ;
        param_4[3] = (float)(~-(uint)(auVar32._12_4_ <= 0.0) &
                            (uint)((3.0 - fVar16 * auVar32._12_4_ * fVar16) * fVar16 * 0.5)) *
                     (((2.0 - auVar31._12_4_ * fVar22) * auVar31._12_4_ *
                       ((0.0 - (float)(~-(uint)(auVar13._12_4_ <= 0.0) &
                                      (uint)(auVar29._12_4_ * auVar12._12_4_ * 0.5 * auVar13._12_4_)
                                      )) + (0.0 - (fVar15 + fVar8 + fVar20))) * 1.0 + fVar5) - fVar1
                     );
        param_4[4] = fVar9;
        param_4[(int)param_4[0x10] + 8] = -NAN;
        *param_2 = 1;
        goto LAB_0112e3c6;
      }
    }
  }
  *param_2 = 0;
LAB_0112e3c6:
  pvVar6 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar6 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar6 + 0xc)) {
    *puVar2 = &DAT_0164b09c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)((int)pvVar6 + 4) = puVar2 + 3;
  }
  return param_2;
}

// 0112E410  FUN_0112e410  size=29  [run]
bool __thiscall FUN_0112e410(float *param_1,float *param_2)

{
  return *param_2 <= *param_1;
}

// 0112E460  FUN_0112e460  size=19  [run]
void __thiscall FUN_0112e460(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - fVar1;
  param_1[2] = param_1[2] - fVar2;
  param_1[3] = param_1[3] - fVar3;
  return;
}

// 0112E480  FUN_0112e480  size=19  [run]
void __thiscall FUN_0112e480(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_2 * *param_1;
  param_1[1] = fVar1 * param_1[1];
  param_1[2] = fVar2 * param_1[2];
  param_1[3] = fVar3 * param_1[3];
  return;
}

// 0112E4A0  FUN_0112e4a0  size=22  [run]
void __thiscall FUN_0112e4a0(float *param_1,float *param_2,float *param_3)

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
  *param_1 = *param_2 * *param_3;
  param_1[1] = fVar1 * fVar4;
  param_1[2] = fVar2 * fVar5;
  param_1[3] = fVar3 * fVar6;
  return;
}

// 0112E4C0  FUN_0112e4c0  size=37  [run]
void __thiscall FUN_0112e4c0(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

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
  
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  *param_1 = *param_3 & *param_4 | ~*param_4 & *param_2;
  param_1[1] = uVar4 & uVar1 | ~uVar1 & uVar7;
  param_1[2] = uVar5 & uVar2 | ~uVar2 & uVar8;
  param_1[3] = uVar6 & uVar3 | ~uVar3 & uVar9;
  return;
}

// 0112E4F0  FUN_0112e4f0  size=15  [run]
int FUN_0112e4f0(byte param_1)

{
  return 1 << (param_1 & 0x1f);
}

// 0112E500  FUN_0112e500  size=112  [run]
void __thiscall
FUN_0112e500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  *param_3 = param_1[4];
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  *param_4 = param_1[8];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  param_5[3] = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = *param_4;
  uVar9 = param_4[1];
  uVar10 = param_4[2];
  uVar11 = param_4[3];
  *param_2 = *param_2;
  param_2[1] = uVar4;
  param_2[2] = uVar8;
  param_2[3] = 0;
  *param_3 = uVar1;
  param_3[1] = uVar5;
  param_3[2] = uVar9;
  param_3[3] = 0;
  *param_4 = uVar2;
  param_4[1] = uVar6;
  param_4[2] = uVar10;
  param_4[3] = 0;
  *param_5 = uVar3;
  param_5[1] = uVar7;
  param_5[2] = uVar11;
  param_5[3] = 0;
  return;
}

// 0112E570  FUN_0112e570  size=46  [run]
void __thiscall FUN_0112e570(float *param_1,float *param_2,float *param_3)

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
  *param_1 = *param_2 - *param_3;
  param_1[1] = fVar1 - fVar4;
  param_1[2] = fVar2 - fVar5;
  param_1[3] = fVar3 - fVar6;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar4 = param_3[5];
  fVar5 = param_3[6];
  fVar6 = param_3[7];
  param_1[4] = param_2[4] - param_3[4];
  param_1[5] = fVar1 - fVar4;
  param_1[6] = fVar2 - fVar5;
  param_1[7] = fVar3 - fVar6;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  fVar4 = param_3[9];
  fVar5 = param_3[10];
  fVar6 = param_3[0xb];
  param_1[8] = param_2[8] - param_3[8];
  param_1[9] = fVar1 - fVar4;
  param_1[10] = fVar2 - fVar5;
  param_1[0xb] = fVar3 - fVar6;
  return;
}

// 0112E5A0  FUN_0112e5a0  size=44  [run]
void __thiscall FUN_0112e5a0(float *param_1,float *param_2,float *param_3)

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
  *param_1 = *param_2 * *param_3;
  param_1[1] = fVar1 * fVar4;
  param_1[2] = fVar2 * fVar5;
  param_1[3] = fVar3 * fVar6;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  param_1[4] = param_2[4] * *param_3;
  param_1[5] = fVar1 * fVar4;
  param_1[6] = fVar2 * fVar5;
  param_1[7] = fVar3 * fVar6;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  param_1[8] = param_2[8] * *param_3;
  param_1[9] = fVar1 * fVar4;
  param_1[10] = fVar2 * fVar5;
  param_1[0xb] = fVar3 * fVar6;
  return;
}

// 0112E5D0  FUN_0112e5d0  size=55  [run]
void __thiscall FUN_0112e5d0(float *param_1,float *param_2,float *param_3)

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
  *param_1 = *param_2 * *param_3 + *param_1;
  param_1[1] = fVar1 * fVar4 + param_1[1];
  param_1[2] = fVar2 * fVar5 + param_1[2];
  param_1[3] = fVar3 * fVar6 + param_1[3];
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  param_1[4] = param_2[4] * *param_3 + param_1[4];
  param_1[5] = fVar1 * fVar4 + param_1[5];
  param_1[6] = fVar2 * fVar5 + param_1[6];
  param_1[7] = fVar3 * fVar6 + param_1[7];
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  param_1[8] = param_2[8] * *param_3 + param_1[8];
  param_1[9] = fVar1 * fVar4 + param_1[9];
  param_1[10] = fVar2 * fVar5 + param_1[10];
  param_1[0xb] = fVar3 * fVar6 + param_1[0xb];
  return;
}

// 0112E610  FUN_0112e610  size=41  [run]
void __thiscall FUN_0112e610(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_2 * *param_1;
  param_1[1] = fVar1 * param_1[1];
  param_1[2] = fVar2 * param_1[2];
  param_1[3] = fVar3 * param_1[3];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  param_1[4] = param_1[4] * *param_2;
  param_1[5] = param_1[5] * fVar1;
  param_1[6] = param_1[6] * fVar2;
  param_1[7] = param_1[7] * fVar3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  param_1[8] = param_1[8] * *param_2;
  param_1[9] = param_1[9] * fVar1;
  param_1[10] = param_1[10] * fVar2;
  param_1[0xb] = param_1[0xb] * fVar3;
  return;
}

// 0112E640  FUN_0112e640  size=44  [run]
void __thiscall FUN_0112e640(float *param_1,float *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  
  auVar1 = *param_3;
  auVar5 = rcpps(in_XMM2,auVar1);
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_1 = *param_2 * (2.0 - auVar1._0_4_ * auVar5._0_4_) * auVar5._0_4_;
  param_1[1] = fVar2 * (2.0 - auVar1._4_4_ * auVar5._4_4_) * auVar5._4_4_;
  param_1[2] = fVar3 * (2.0 - auVar1._8_4_ * auVar5._8_4_) * auVar5._8_4_;
  param_1[3] = fVar4 * (2.0 - auVar1._12_4_ * auVar5._12_4_) * auVar5._12_4_;
  return;
}

// 0112E670  FUN_0112e670  size=35  [run]
void __thiscall FUN_0112e670(float *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = *param_2;
  auVar2 = rcpps(in_XMM1,auVar1);
  *param_1 = (2.0 - auVar1._0_4_ * auVar2._0_4_) * auVar2._0_4_;
  param_1[1] = (2.0 - auVar1._4_4_ * auVar2._4_4_) * auVar2._4_4_;
  param_1[2] = (2.0 - auVar1._8_4_ * auVar2._8_4_) * auVar2._8_4_;
  param_1[3] = (2.0 - auVar1._12_4_ * auVar2._12_4_) * auVar2._12_4_;
  return;
}

// 0112E6A0  FUN_0112e6a0  size=26  [run]
void __thiscall FUN_0112e6a0(float *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = -(uint)(*param_1 < *param_3);
  param_2[1] = -(uint)(fVar4 < fVar1);
  param_2[2] = -(uint)(fVar5 < fVar2);
  param_2[3] = -(uint)(fVar6 < fVar3);
  return;
}

// 0112E6C0  FUN_0112e6c0  size=26  [run]
void __thiscall FUN_0112e6c0(float *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = -(uint)(*param_3 < *param_1);
  param_2[1] = -(uint)(fVar1 < fVar4);
  param_2[2] = -(uint)(fVar2 < fVar5);
  param_2[3] = -(uint)(fVar3 < fVar6);
  return;
}

// 0112E6E0  FUN_0112e6e0  size=26  [run]
void __thiscall FUN_0112e6e0(float *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = -(uint)(*param_3 <= *param_1);
  param_2[1] = -(uint)(fVar1 <= fVar4);
  param_2[2] = -(uint)(fVar2 <= fVar5);
  param_2[3] = -(uint)(fVar3 <= fVar6);
  return;
}

// 0112E700  FUN_0112e700  size=86  [run]
void __thiscall FUN_0112e700(int param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar2 = *(undefined4 *)(*param_2 + 4);
  uVar3 = *(undefined4 *)(*param_2 + 8);
  auVar8 = *param_3;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)*param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(int *)(param_1 + 0x1c) = auVar8._12_4_;
  auVar1 = *param_2;
  auVar8 = rcpps(auVar8,auVar1);
  uVar4 = -(uint)(auVar1._0_4_ == 0.0);
  uVar5 = -(uint)(auVar1._4_4_ == 0.0);
  uVar6 = -(uint)(auVar1._8_4_ == 0.0);
  uVar7 = -(uint)(auVar1._12_4_ == 0.0);
  *(uint *)(param_1 + 0x20) =
       uVar4 & 0x7f7fffee | ~uVar4 & (uint)((2.0 - auVar1._0_4_ * auVar8._0_4_) * auVar8._0_4_);
  *(uint *)(param_1 + 0x24) =
       uVar5 & 0x7f7fffee | ~uVar5 & (uint)((2.0 - auVar1._4_4_ * auVar8._4_4_) * auVar8._4_4_);
  *(uint *)(param_1 + 0x28) =
       uVar6 & 0x7f7fffee | ~uVar6 & (uint)((2.0 - auVar1._8_4_ * auVar8._8_4_) * auVar8._8_4_);
  *(uint *)(param_1 + 0x2c) =
       uVar7 & 0x7f7fffee | ~uVar7 & (uint)((2.0 - auVar1._12_4_ * auVar8._12_4_) * auVar8._12_4_);
  return;
}

// 0112E760  FUN_0112e760  size=95  [run]
void __thiscall
FUN_0112e760(undefined4 *param_1,undefined4 *param_2,undefined1 (*param_3) [16],
            undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  
  uVar2 = *(undefined4 *)(*param_3 + 4);
  uVar3 = *(undefined4 *)(*param_3 + 8);
  auVar9 = *param_4;
  param_1[4] = *(undefined4 *)*param_3;
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = auVar9._12_4_;
  auVar1 = *param_3;
  auVar9 = rcpps(auVar9,auVar1);
  uVar5 = -(uint)(auVar1._0_4_ == 0.0);
  uVar6 = -(uint)(auVar1._4_4_ == 0.0);
  uVar7 = -(uint)(auVar1._8_4_ == 0.0);
  uVar8 = -(uint)(auVar1._12_4_ == 0.0);
  param_1[8] = uVar5 & 0x7f7fffee |
               ~uVar5 & (uint)((2.0 - auVar1._0_4_ * auVar9._0_4_) * auVar9._0_4_);
  param_1[9] = uVar6 & 0x7f7fffee |
               ~uVar6 & (uint)((2.0 - auVar1._4_4_ * auVar9._4_4_) * auVar9._4_4_);
  param_1[10] = uVar7 & 0x7f7fffee |
                ~uVar7 & (uint)((2.0 - auVar1._8_4_ * auVar9._8_4_) * auVar9._8_4_);
  param_1[0xb] = uVar8 & 0x7f7fffee |
                 ~uVar8 & (uint)((2.0 - auVar1._12_4_ * auVar9._12_4_) * auVar9._12_4_);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}

// 0112E7C0  hkpSphereShape::vf40  size=8  [run]
undefined4 hkpSphereShape::vf40(void)

{
  return 0x20;
}

// 0112E7D0  hkpSphereShape::vf2C  size=6  [run]
undefined4 hkpSphereShape::vf2C(void)

{
  return 1;
}

// 0112E800  hkpSphereShape::vf20  size=16  [run]
void hkpSphereShape::vf20(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}

// 0112E810  hkpSphereShape::vf24  size=33  [run]
void hkpSphereShape::vf24(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    puVar1 = (undefined4 *)(param_2 * 0x10 + param_3);
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1 = puVar1 + -4;
      param_2 = param_2 + -1;
    } while (-1 < param_2);
  }
  return;
}

// 0112E840  hkpSphereShape::vf28  size=16  [run]
void hkpSphereShape::vf28(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 0112E850  hkpSphereShape::vf10  size=48  [run]
void __thiscall hkpSphereShape::vf10(int param_1,int param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_3 = *(float *)(param_1 + 0x10) + param_3;
  fVar1 = *(float *)(param_2 + 0x34);
  fVar2 = *(float *)(param_2 + 0x38);
  fVar3 = *(float *)(param_2 + 0x3c);
  *param_4 = *(float *)(param_2 + 0x30) - param_3;
  param_4[1] = fVar1 - param_3;
  param_4[2] = fVar2 - param_3;
  param_4[3] = fVar3 - param_3;
  fVar1 = *(float *)(param_2 + 0x34);
  fVar2 = *(float *)(param_2 + 0x38);
  fVar3 = *(float *)(param_2 + 0x3c);
  param_4[4] = *(float *)(param_2 + 0x30) + param_3;
  param_4[5] = fVar1 + param_3;
  param_4[6] = fVar2 + param_3;
  param_4[7] = fVar3 + param_3;
  return;
}

// 0112E880  hkpSphereShape::vf30  size=22  [run]
void __thiscall hkpSphereShape::vf30(int param_1,undefined4 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[3] = *(undefined4 *)(param_1 + 0x10);
  return;
}

// 0112E8A0  FUN_0112e8a0  size=38  [run]
void FUN_0112e8a0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0112E8D0  hkpSphereShape::vf00  size=53  [run]
undefined4 * __thiscall hkpSphereShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0112E910  FUN_0112e910  size=98  [run]
void __thiscall FUN_0112e910(float *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  fVar2 = *param_3 - *param_2;
  fVar3 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  fVar5 = param_3[3] - param_2[3];
  fVar1 = *(float *)(param_4 + 0xc);
  auVar6._4_4_ = *(undefined4 *)(param_4 + 8);
  auVar6._0_4_ = fVar4;
  auVar6._8_4_ = fVar5;
  auVar6._12_4_ = fVar1;
  auVar7._4_4_ = fVar3;
  auVar7._0_4_ = fVar2;
  auVar7._8_4_ = fVar4;
  auVar7._12_4_ = fVar5;
  auVar7 = rcpps(auVar6,auVar7);
  param_1[4] = fVar2;
  param_1[5] = fVar3;
  param_1[6] = fVar4;
  param_1[7] = fVar1;
  param_1[8] = (float)(-(uint)(fVar2 == 0.0) & 0x7f7fffee |
                      ~-(uint)(fVar2 == 0.0) & (uint)((2.0 - auVar7._0_4_ * fVar2) * auVar7._0_4_));
  param_1[9] = (float)(-(uint)(fVar3 == 0.0) & 0x7f7fffee |
                      ~-(uint)(fVar3 == 0.0) & (uint)((2.0 - auVar7._4_4_ * fVar3) * auVar7._4_4_));
  param_1[10] = (float)(-(uint)(fVar4 == 0.0) & 0x7f7fffee |
                       ~-(uint)(fVar4 == 0.0) & (uint)((2.0 - auVar7._8_4_ * fVar4) * auVar7._8_4_))
  ;
  param_1[0xb] = (float)(-(uint)(fVar5 == 0.0) & 0x7f7fffee |
                        ~-(uint)(fVar5 == 0.0) &
                        (uint)((2.0 - auVar7._12_4_ * fVar5) * auVar7._12_4_));
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  param_1[3] = fVar3;
  return;
}

// 0112EDF0  hkpConvexTranslateShape::vf34  size=8  [run]
undefined4 hkpConvexTranslateShape::vf34(void)

{
  return 2;
}

// 0112EE30  hkpConvexShape::vf28  size=83  [run]
void __thiscall hkpConvexShape::vf28(int *param_1,float *param_2)

{
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*param_1 + 0x10))(&DAT_01701ca0,0,&local_30);
  *param_2 = local_20 + local_30;
  param_2[1] = fStack_1c + fStack_2c;
  param_2[2] = fStack_18 + fStack_28;
  param_2[3] = fStack_14 + fStack_24;
  *param_2 = (local_20 + local_30) * 0.5;
  param_2[1] = (fStack_1c + fStack_2c) * 0.5;
  param_2[2] = (fStack_18 + fStack_28) * 0.5;
  param_2[3] = (fStack_14 + fStack_24) * 0.5;
  return;
}

// 0112EE90  hkpConvexShape::hkpConvexShape  size=32  [run]
undefined4 * __thiscall hkpConvexShape::hkpConvexShape(undefined4 *param_1,undefined4 param_2)

{
  hkpShape::hkpShape(param_2);
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 2) = 0x17;
  return param_1;
}

// 0112EEB0  hkpConvexShape::vf18  size=151  [run]
void __thiscall
hkpConvexShape::vf18(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  float *pfVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_30;
  undefined1 local_11;
  
  local_60 = param_4[1];
  local_5c = 0xffffffff;
  local_50 = 0xffffffff;
  local_30 = 0;
  pcVar2 = (char *)(**(code **)(*param_1 + 0x14))(&local_11,param_2,&local_70);
  if (*pcVar2 != '\0') {
    pfVar1 = *(float **)(param_3 + 8);
    fVar3 = fStack_6c * pfVar1[6];
    fVar4 = fStack_6c * pfVar1[7];
    fVar5 = local_70 * pfVar1[1];
    fVar6 = local_70 * pfVar1[2];
    fVar7 = local_70 * pfVar1[3];
    fStack_64 = fStack_68 * pfVar1[0xb];
    local_70 = fStack_6c * pfVar1[4] + local_70 * *pfVar1 + fStack_68 * pfVar1[8];
    fStack_6c = fStack_6c * pfVar1[5] + fVar5 + fStack_68 * pfVar1[9];
    fStack_68 = fVar3 + fVar6 + fStack_68 * pfVar1[10];
    fStack_64 = fVar4 + fVar7 + fStack_64;
    (**(code **)*param_4)(param_3,&local_70);
  }
  return;
}

// 0112EF50  hkpSingleShapeContainer::hkpSingleShapeContainer_14  size=82  [run]
undefined4 * __thiscall
hkpSingleShapeContainer::hkpSingleShapeContainer_14
          (undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 2) = param_2;
  *(undefined2 *)((int)param_1 + 9) = 4;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  param_1[3] = 0;
  param_1[4] = param_3;
  *param_1 = hkpConvexTransformShapeBase::vftable;
  param_1[5] = vftable;
  param_1[6] = param_4;
  if (param_5 == 1) {
    FUN_01006000();
  }
  return param_1;
}

// 0112EFB0  hkpConvexShape::vf3C  size=196  [run]
float10 __thiscall hkpConvexShape::vf3C(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 in_XMM4 [16];
  undefined1 auVar8 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  
  (**(code **)(*param_1 + 0x20))(param_2,&local_30);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = fVar1 * fVar1;
  fVar6 = fVar2 * fVar2;
  fVar7 = fVar3 * fVar3;
  fVar5 = fVar6 + fVar4 + fVar7;
  auVar8._4_4_ = fVar6 + fVar4 + fVar7;
  auVar8._0_4_ = fVar5;
  auVar8._8_4_ = fVar6 + fVar4 + fVar7;
  auVar8._12_4_ = fVar6 + fVar4 + fVar7;
  auVar8 = rsqrtps(in_XMM4,auVar8);
  fVar4 = auVar8._0_4_;
  return (float10)((float)param_1[4] *
                   (float)(~-(uint)(fVar5 <= 0.0) &
                          (uint)((3.0 - fVar4 * fVar5 * fVar4) * fVar4 * 0.5 * fVar5)) +
                  fVar2 * fStack_2c + fVar1 * local_30 + fVar3 * fStack_28);
}

// 0112F090  hkpSingleShapeContainer::hkpSingleShapeContainer_13  size=36  [run]
undefined4 * __thiscall
hkpSingleShapeContainer::hkpSingleShapeContainer_13
          (undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = vftable;
  param_1[1] = param_2;
  if (param_3 == 1) {
    FUN_01006000();
  }
  return param_1;
}

// 0112F0C0  FUN_0112f0c0  size=54  [run]
void __thiscall FUN_0112f0c0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  *param_1 = fVar2 * param_2[4] + fVar1 * *param_2 + fVar3 * param_2[8];
  param_1[1] = fVar2 * fVar4 + fVar1 * fVar7 + fVar3 * fVar10;
  param_1[2] = fVar2 * fVar5 + fVar1 * fVar8 + fVar3 * fVar11;
  param_1[3] = fVar2 * fVar6 + fVar1 * fVar9 + fVar3 * fVar12;
  return;
}

// 0112F100  hkpSphereRepShape::hkpSphereRepShape  size=32  [run]
undefined4 * __thiscall hkpSphereRepShape::hkpSphereRepShape(undefined4 *param_1,undefined4 param_2)

{
  hkpShape::hkpShape(param_2);
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 2) = 0x1d;
  return param_1;
}

// 0112F120  FUN_0112f120  size=38  [run]
void FUN_0112f120(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0112F150  hkpConvexTransformShapeBase::vf00  size=79  [run]
undefined4 * __thiscall hkpConvexTransformShapeBase::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[5] = hkpSingleShapeContainer::vftable;
  if (param_1[6] != 0) {
    FUN_010060a0();
  }
  param_1[5] = hkpShapeContainer::vftable;
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0112F1F0  FUN_0112f1f0  size=10  [run]
void FUN_0112f1f0(void)

{
  return;
}

// 0112F200  hkpCapsuleShape::vf44  size=17  [run]
void __thiscall hkpCapsuleShape::vf44(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}

// 0112F220  hkpCapsuleShape::vf30  size=25  [run]
void __thiscall hkpCapsuleShape::vf30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  param_2[4] = *(undefined4 *)(param_1 + 0x30);
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  return;
}

// 0112F240  hkpCapsuleShape::hkpCapsuleShape  size=93  [run]
void __thiscall
hkpCapsuleShape::hkpCapsuleShape
          (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x404;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = param_4;
  *param_1 = vftable;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[8] = *param_2;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = param_4;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  param_1[0xc] = *param_3;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = param_4;
  return;
}

// 0112F2A0  hkpCapsuleShape::hkpCapsuleShape_2  size=32  [run]
undefined4 * __thiscall hkpCapsuleShape::hkpCapsuleShape_2(undefined4 *param_1,undefined4 param_2)

{
  hkpConvexShape::hkpConvexShape(param_2);
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 2) = 4;
  return param_1;
}

// 0112F2C0  FUN_0112f2c0  size=116  [run]
void FUN_0112f2c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,
                 undefined4 *param_9)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_014461d0(param_1,param_2,param_3,param_4,&local_40);
  *param_8 = local_30;
  param_8[1] = uStack_2c;
  param_8[2] = uStack_28;
  param_8[3] = uStack_24;
  *param_9 = local_20;
  param_9[1] = uStack_1c;
  param_9[2] = uStack_18;
  param_9[3] = uStack_14;
  *param_6 = local_3c;
  *param_7 = local_38;
  *param_5 = local_40;
  return;
}

// 0112F340  FUN_0112f340  size=148  [run]
void FUN_0112f340(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar8 = *param_3 - fVar1;
  fVar9 = fVar5 - fVar2;
  fVar10 = fVar6 - fVar3;
  fVar11 = -((fVar2 - param_1[1]) * fVar9 + (fVar1 - *param_1) * fVar8 +
            (fVar3 - param_1[2]) * fVar10);
  fVar12 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
  if (fVar11 <= 0.0) {
    *param_4 = fVar1;
    param_4[1] = fVar2;
    param_4[2] = fVar3;
    param_4[3] = fVar4;
    return;
  }
  if (fVar12 <= fVar11) {
    *param_4 = *param_3;
    param_4[1] = fVar5;
    param_4[2] = fVar6;
    param_4[3] = fVar7;
    return;
  }
  fVar11 = fVar11 / fVar12;
  *param_4 = fVar11 * fVar8 + fVar1;
  param_4[1] = fVar11 * fVar9 + fVar2;
  param_4[2] = fVar11 * fVar10 + fVar3;
  param_4[3] = fVar11 * (fVar7 - fVar4) + fVar4;
  return;
}

// 0112F3E0  hkpCapsuleShape::vf14  size=1721  [run]
undefined1 * __thiscall
hkpCapsuleShape::vf14(int param_1,undefined1 *param_2,float *param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  DWORD DVar6;
  LPVOID pvVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  undefined1 auVar23 [16];
  float fVar25;
  undefined1 auVar26 [12];
  undefined1 in_XMM4 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [16];
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [8];
  float fStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float *local_18;
  float local_14;
  
  pvVar7 = TlsGetValue(DAT_01f8fc54);
  puVar9 = *(undefined4 **)((int)pvVar7 + 4);
  if (puVar9 < *(undefined4 **)((int)pvVar7 + 0xc)) {
    *puVar9 = "TtrcCapsule";
    uVar3 = rdtsc();
    puVar9[1] = (int)uVar3;
    *(undefined4 **)((int)pvVar7 + 4) = puVar9 + 3;
  }
  local_18 = (float *)(param_1 + 0x30);
  FUN_0112f340(param_3,param_1 + 0x20,local_18,local_50);
  fVar10 = *param_3 - (float)local_50._0_4_;
  fVar12 = param_3[1] - (float)local_50._4_4_;
  fVar15 = param_3[2] - fStack_48;
  if (*(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) <=
      fVar12 * fVar12 + fVar10 * fVar10 + fVar15 * fVar15) {
    local_1c = 3.40282e+38;
    local_30 = param_3[4] - *param_3;
    fStack_2c = param_3[5] - param_3[1];
    fStack_28 = param_3[6] - param_3[2];
    fStack_24 = param_3[7] - param_3[3];
    local_40 = *local_18 - *(float *)(param_1 + 0x20);
    fStack_3c = local_18[1] - *(float *)(param_1 + 0x24);
    fStack_38 = local_18[2] - *(float *)(param_1 + 0x28);
    fStack_34 = local_18[3] - *(float *)(param_1 + 0x2c);
    FUN_0112f2c0(param_3,&local_30,param_1 + 0x20,&local_40,&local_1c,&local_14,&local_20,&local_90,
                 &local_80);
    DVar6 = DAT_01f8fc54;
    if (local_1c <= *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10)) {
      fVar10 = local_40 * local_40;
      fVar12 = fStack_3c * fStack_3c;
      fVar15 = fStack_38 * fStack_38;
      auVar23._0_12_ = ZEXT812(0);
      auVar23._12_4_ = 0;
      if (fVar12 + fVar10 + fVar15 <= 1.1920929e-07) {
        local_20 = 0.0;
        auVar26 = ZEXT412(0) << 0x20;
      }
      else {
        auVar29._0_4_ = fVar12 + fVar10 + fVar15;
        auVar29._4_4_ = fVar12 + fVar10 + fVar15;
        auVar29._8_4_ = fVar12 + fVar10 + fVar15;
        auVar29._12_4_ = fVar12 + fVar10 + fVar15;
        auVar27 = rsqrtps(in_XMM4,auVar29);
        fVar10 = auVar27._0_4_;
        fVar12 = auVar27._4_4_;
        fVar15 = auVar27._8_4_;
        fVar10 = (float)(~-(uint)(auVar29._0_4_ <= 0.0) &
                        (uint)((3.0 - fVar10 * auVar29._0_4_ * fVar10) * fVar10 * 0.5));
        local_20 = fVar10 * auVar29._0_4_;
        auVar26._0_4_ = fVar10 * local_40;
        auVar26._4_4_ =
             (float)(~-(uint)(auVar29._4_4_ <= 0.0) &
                    (uint)((3.0 - fVar12 * auVar29._4_4_ * fVar12) * fVar12 * 0.5)) * fStack_3c;
        auVar26._8_4_ =
             (float)(~-(uint)(auVar29._8_4_ <= 0.0) &
                    (uint)((3.0 - fVar15 * auVar29._8_4_ * fVar15) * fVar15 * 0.5)) * fStack_38;
      }
      fVar32 = auVar26._0_4_;
      fVar10 = local_30 * fVar32;
      fVar11 = auVar26._4_4_;
      fVar15 = fStack_2c * fVar11;
      fVar14 = auVar26._8_4_;
      fVar16 = fStack_28 * fVar14;
      fVar12 = (0.0 - (fVar15 + fVar10 + fVar16)) * fVar32 + local_30;
      fVar13 = (0.0 - (fVar15 + fVar10 + fVar16)) * fVar11 + fStack_2c;
      fVar10 = (0.0 - (fVar15 + fVar10 + fVar16)) * fVar14 + fStack_28;
      fVar10 = fVar10 * fVar10 + fVar12 * fVar12 + fVar13 * fVar13;
      if (fVar10 == 0.0) {
        local_1c = -1.0;
      }
      else {
        local_1c = local_14 -
                   SQRT((*(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) - local_1c) /
                        fVar10);
      }
      if (local_1c < param_4[4]) {
        local_60 = *(float *)(param_1 + 0x20);
        fStack_5c = *(float *)(param_1 + 0x24);
        fStack_58 = *(float *)(param_1 + 0x28);
        fStack_54 = *(float *)(param_1 + 0x2c);
        fVar10 = param_3[7];
        local_80 = *param_3;
        fStack_7c = param_3[1];
        fStack_78 = param_3[2];
        fStack_74 = param_3[3];
        local_14 = fStack_5c * fVar11 + local_60 * fVar32 + fStack_58 * fVar14;
        fVar15 = (param_3[4] - local_80) * local_1c + local_80;
        fVar13 = (param_3[5] - fStack_7c) * local_1c + fStack_7c;
        fVar16 = (param_3[6] - fStack_78) * local_1c + fStack_78;
        fVar12 = (fVar13 * fVar11 + fVar15 * fVar32 + fVar16 * fVar14) - local_14;
        if (((local_1c < 0.0) || (fVar12 <= 0.0)) || (local_20 <= fVar12)) {
          fVar10 = ((fStack_78 * fVar14 + fStack_7c * fVar11 + local_80 * fVar32) - local_14) /
                   local_20;
          fVar15 = local_80 - (fVar10 * (*local_18 - local_60) + local_60);
          fVar13 = fStack_7c - (fVar10 * (local_18[1] - fStack_5c) + fStack_5c);
          fVar10 = fStack_78 - (fVar10 * (local_18[2] - fStack_58) + fStack_58);
          if ((local_1c < 0.0) &&
             (*(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) <
              fVar10 * fVar10 + fVar13 * fVar13 + fVar15 * fVar15)) goto LAB_0112f7c9;
          fVar10 = *(float *)(param_1 + 0x10);
          iVar1 = (0.0 < fVar12) + 2;
          pfVar2 = (float *)(param_1 + iVar1 * 0x10);
          local_80 = local_80 - *pfVar2;
          fStack_7c = fStack_7c - pfVar2[1];
          fStack_78 = fStack_78 - pfVar2[2];
          fStack_74 = fStack_74 - pfVar2[3];
          pfVar2 = (float *)(param_1 + iVar1 * 0x10);
          fVar32 = (param_3[4] - *pfVar2) - local_80;
          fVar11 = (param_3[5] - pfVar2[1]) - fStack_7c;
          fVar14 = (param_3[6] - pfVar2[2]) - fStack_78;
          local_90 = param_4[4];
          fVar15 = fVar32 * (local_80 - 0.0);
          fVar13 = fVar11 * (fStack_7c - 0.0);
          fVar16 = fVar14 * (fStack_78 - 0.0);
          local_60 = 0.0 - (fVar13 + fVar15 + fVar16);
          fStack_5c = 0.0 - (fVar13 + fVar15 + fVar16);
          fStack_58 = 0.0 - (fVar13 + fVar15 + fVar16);
          fStack_54 = 0.0 - (fVar13 + fVar15 + fVar16);
          fStack_8c = local_90;
          fStack_88 = local_90;
          fStack_84 = local_90;
          if (0.0 < local_60) {
            fVar15 = fVar32 * fVar32;
            fVar13 = fVar11 * fVar11;
            fVar16 = fVar14 * fVar14;
            fVar20 = fVar13 + fVar15 + fVar16;
            fVar21 = fVar13 + fVar15 + fVar16;
            fVar22 = fVar13 + fVar15 + fVar16;
            fVar16 = fVar13 + fVar15 + fVar16;
            local_70._0_4_ = fVar10 * fVar10;
            local_70._4_4_ = fVar10 * fVar10;
            local_70._8_4_ = fVar10 * fVar10;
            local_70._12_4_ = fVar10 * fVar10;
            auVar27._4_4_ = fVar21;
            auVar27._0_4_ = fVar20;
            auVar27._8_4_ = fVar22;
            auVar27._12_4_ = fVar16;
            _local_50 = rcpps(local_70,auVar27);
            fVar15 = (2.0 - local_50._0_4_ * fVar20) * local_50._0_4_ * local_60 * fVar32 +
                     (local_80 - 0.0);
            fVar13 = (2.0 - local_50._4_4_ * fVar21) * local_50._4_4_ * fStack_5c * fVar11 +
                     (fStack_7c - 0.0);
            fVar17 = (2.0 - local_50._8_4_ * fVar22) * local_50._8_4_ * fStack_58 * fVar14 +
                     (fStack_78 - 0.0);
            fVar15 = fVar15 * fVar15;
            fVar13 = fVar13 * fVar13;
            fVar17 = fVar17 * fVar17;
            auVar18._0_4_ = ((fVar13 + fVar15 + fVar17) - local_70._0_4_) * (0.0 - fVar20);
            auVar18._4_4_ = ((fVar13 + fVar15 + fVar17) - local_70._4_4_) * (0.0 - fVar21);
            auVar18._8_4_ = ((fVar13 + fVar15 + fVar17) - (float)local_70._8_4_) * (0.0 - fVar22);
            auVar18._12_4_ = ((fVar13 + fVar15 + fVar17) - (float)local_70._12_4_) * (0.0 - fVar16);
            if (0.0 <= auVar18._0_4_) {
              local_70._8_4_ = 0x40400000;
              local_70._0_8_ = 0x4040000040400000;
              local_70._12_4_ = 0x40400000;
              auVar28._4_4_ = -(uint)(auVar18._4_4_ <= 0.0);
              auVar28._0_4_ = -(uint)(auVar18._0_4_ <= 0.0);
              auVar28._8_4_ = -(uint)(auVar18._8_4_ <= 0.0);
              auVar28._12_4_ = -(uint)(auVar18._12_4_ <= 0.0);
              fStack_48 = 0.5;
              local_50 = (undefined1  [8])0x3f0000003f000000;
              uStack_44 = 0x3f000000;
              auVar29 = rsqrtps(auVar28,auVar18);
              auVar30._0_4_ = 3.0 - auVar29._0_4_ * auVar18._0_4_ * auVar29._0_4_;
              auVar30._4_4_ = 3.0 - auVar29._4_4_ * auVar18._4_4_ * auVar29._4_4_;
              auVar30._8_4_ = 3.0 - auVar29._8_4_ * auVar18._8_4_ * auVar29._8_4_;
              auVar30._12_4_ = 3.0 - auVar29._12_4_ * auVar18._12_4_ * auVar29._12_4_;
              auVar29 = rsqrtps(auVar30,auVar18);
              fVar15 = (0.0 - (float)(~-(uint)(auVar18._0_4_ <= 0.0) &
                                     (uint)(auVar30._0_4_ * auVar29._0_4_ * 0.5 * auVar18._0_4_))) +
                       local_60;
              auVar31._0_4_ = fVar20 * local_90;
              auVar31._4_4_ = fVar21 * local_90;
              auVar31._8_4_ = fVar22 * local_90;
              auVar31._12_4_ = fVar16 * local_90;
              if (fVar15 < auVar31._0_4_ && 0.0 <= fVar15) {
                auVar5._4_4_ = fVar21;
                auVar5._0_4_ = fVar20;
                auVar5._8_4_ = fVar22;
                auVar5._12_4_ = fVar16;
                auVar27 = rcpps(auVar31,auVar5);
                fVar15 = (2.0 - auVar27._0_4_ * fVar20) * auVar27._0_4_ * fVar15;
                fVar13 = (fVar32 * fVar15 + local_80) - 0.0;
                fVar11 = (fVar11 * (2.0 - auVar27._4_4_ * fVar21) * auVar27._4_4_ *
                                   ((0.0 - (float)(~-(uint)(auVar18._4_4_ <= 0.0) &
                                                  (uint)(auVar30._4_4_ * auVar29._4_4_ * 0.5 *
                                                        auVar18._4_4_))) + fStack_5c) + fStack_7c) -
                         0.0;
                fVar17 = (fVar14 * (2.0 - auVar27._8_4_ * fVar22) * auVar27._8_4_ *
                                   ((0.0 - (float)(~-(uint)(auVar18._8_4_ <= 0.0) &
                                                  (uint)(auVar30._8_4_ * auVar29._8_4_ * 0.5 *
                                                        auVar18._8_4_))) + fStack_58) + fStack_78) -
                         0.0;
                fVar32 = fVar13 * fVar13;
                fVar14 = fVar11 * fVar11;
                fVar20 = fVar17 * fVar17;
                auVar19._0_4_ = fVar14 + fVar32 + fVar20;
                auVar19._4_4_ = fVar14 + fVar32 + fVar20;
                auVar19._8_4_ = fVar14 + fVar32 + fVar20;
                auVar19._12_4_ = fVar14 + fVar32 + fVar20;
                auVar23 = rsqrtps(auVar23,auVar19);
                fVar32 = auVar23._0_4_;
                fVar14 = auVar23._4_4_;
                fVar20 = auVar23._8_4_;
                fVar21 = auVar23._12_4_;
                *param_4 = (float)(~-(uint)(auVar19._0_4_ <= 0.0) &
                                  (uint)((3.0 - fVar32 * auVar19._0_4_ * fVar32) * fVar32 * 0.5)) *
                           fVar13;
                param_4[1] = (float)(~-(uint)(auVar19._4_4_ <= 0.0) &
                                    (uint)((3.0 - fVar14 * auVar19._4_4_ * fVar14) * fVar14 * 0.5))
                             * fVar11;
                param_4[2] = (float)(~-(uint)(auVar19._8_4_ <= 0.0) &
                                    (uint)((3.0 - fVar20 * auVar19._8_4_ * fVar20) * fVar20 * 0.5))
                             * fVar17;
                param_4[3] = (float)(~-(uint)(auVar19._12_4_ <= 0.0) &
                                    (uint)((3.0 - fVar21 * auVar19._12_4_ * fVar21) * fVar21 * 0.5))
                             * (((2.0 - auVar27._12_4_ * fVar16) * auVar27._12_4_ *
                                 ((0.0 - (float)(~-(uint)(auVar18._12_4_ <= 0.0) &
                                                (uint)(auVar30._12_4_ * auVar29._12_4_ * 0.5 *
                                                      auVar18._12_4_))) + fStack_54) * 1.0 +
                                fStack_74) - fVar10);
                param_4[4] = fVar15;
                param_4[(int)param_4[0x10] + 8] = -NAN;
                param_4[5] = (float)(uint)(0.0 < fVar12);
                DVar6 = DAT_01f8fc54;
                *param_2 = 1;
                pvVar7 = TlsGetValue(DVar6);
                puVar9 = *(undefined4 **)((int)pvVar7 + 4);
                if (*(undefined4 **)((int)pvVar7 + 0xc) <= puVar9) {
                  return param_2;
                }
                *puVar9 = &DAT_0164b09c;
                uVar3 = rdtsc();
                uVar8 = (undefined4)uVar3;
                goto LAB_0112fa83;
              }
            }
          }
          *param_2 = 0;
          pvVar7 = TlsGetValue(DVar6);
          puVar9 = *(undefined4 **)((int)pvVar7 + 4);
          if (*(undefined4 **)((int)pvVar7 + 0xc) <= puVar9) {
            return param_2;
          }
          *puVar9 = &DAT_0164b09c;
          uVar3 = rdtsc();
          uVar8 = (undefined4)uVar3;
        }
        else {
          fVar32 = local_18[3];
          fVar12 = fVar12 / local_20;
          fVar15 = fVar15 - ((*local_18 - local_60) * fVar12 + local_60);
          fVar13 = fVar13 - ((local_18[1] - fStack_5c) * fVar12 + fStack_5c);
          fVar16 = fVar16 - ((local_18[2] - fStack_58) * fVar12 + fStack_58);
          fVar11 = fVar15 * fVar15;
          fVar14 = fVar13 * fVar13;
          fVar17 = fVar16 * fVar16;
          fVar20 = fVar14 + fVar11 + fVar17;
          fVar21 = fVar14 + fVar11 + fVar17;
          fVar22 = fVar14 + fVar11 + fVar17;
          fVar17 = fVar14 + fVar11 + fVar17;
          auVar4._4_4_ = fVar21;
          auVar4._0_4_ = fVar20;
          auVar4._8_4_ = fVar22;
          auVar4._12_4_ = fVar17;
          auVar23 = rsqrtps(auVar23,auVar4);
          fVar11 = auVar23._0_4_;
          fVar14 = auVar23._4_4_;
          fVar24 = auVar23._8_4_;
          fVar25 = auVar23._12_4_;
          *param_4 = (float)(~-(uint)(fVar20 <= 0.0) &
                            (uint)((3.0 - fVar11 * fVar20 * fVar11) * fVar11 * 0.5)) * fVar15;
          param_4[1] = (float)(~-(uint)(fVar21 <= 0.0) &
                              (uint)((3.0 - fVar14 * fVar21 * fVar14) * fVar14 * 0.5)) * fVar13;
          param_4[2] = (float)(~-(uint)(fVar22 <= 0.0) &
                              (uint)((3.0 - fVar24 * fVar22 * fVar24) * fVar24 * 0.5)) * fVar16;
          param_4[3] = (float)(~-(uint)(fVar17 <= 0.0) &
                              (uint)((3.0 - fVar25 * fVar17 * fVar25) * fVar25 * 0.5)) *
                       (((fVar10 - fStack_74) * local_1c + fStack_74) -
                       ((fVar32 - fStack_54) * fVar12 + fStack_54));
          param_4[4] = local_1c;
          param_4[5] = 2.8026e-45;
          param_4[(int)param_4[0x10] + 8] = -NAN;
          DVar6 = DAT_01f8fc54;
          *param_2 = 1;
          pvVar7 = TlsGetValue(DVar6);
          puVar9 = *(undefined4 **)((int)pvVar7 + 4);
          if (*(undefined4 **)((int)pvVar7 + 0xc) <= puVar9) {
            return param_2;
          }
          *puVar9 = &DAT_0164b09c;
          uVar3 = rdtsc();
          uVar8 = (undefined4)uVar3;
        }
LAB_0112fa83:
        puVar9[1] = uVar8;
        *(undefined4 **)((int)pvVar7 + 4) = puVar9 + 3;
        return param_2;
      }
    }
  }
LAB_0112f7c9:
  DVar6 = DAT_01f8fc54;
  *param_2 = 0;
  pvVar7 = TlsGetValue(DVar6);
  puVar9 = *(undefined4 **)((int)pvVar7 + 4);
  if (*(undefined4 **)((int)pvVar7 + 0xc) <= puVar9) {
    return param_2;
  }
  *puVar9 = &DAT_0164b09c;
  uVar3 = rdtsc();
  puVar9[1] = (int)uVar3;
  *(undefined4 **)((int)pvVar7 + 4) = puVar9 + 3;
  return param_2;
}

// 0112FAA0  FUN_0112faa0  size=16  [run]
void __thiscall FUN_0112faa0(undefined4 *param_1,undefined4 *param_2)

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
  return;
}

// 0112FAC0  hkpCapsuleShape::vf40  size=8  [run]
undefined4 hkpCapsuleShape::vf40(void)

{
  return 0x40;
}

// 0112FAD0  hkpCapsuleShape::vf2C  size=6  [run]
undefined4 hkpCapsuleShape::vf2C(void)

{
  return 2;
}

// 0112FAE0  FUN_0112fae0  size=11  [run]
int FUN_0112fae0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0112FB00  hkpCapsuleShape::vf28  size=31  [run]
void __thiscall hkpCapsuleShape::vf28(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x28);
  fVar4 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x2c);
  *param_2 = fVar1;
  param_2[1] = fVar2;
  param_2[2] = fVar3;
  param_2[3] = fVar4;
  *param_2 = fVar1 * 0.5;
  param_2[1] = fVar2 * 0.5;
  param_2[2] = fVar3 * 0.5;
  param_2[3] = fVar4 * 0.5;
  return;
}

// 0112FB20  hkpCapsuleShape::vf24  size=51  [run]
void __thiscall hkpCapsuleShape::vf24(int param_1,ushort *param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  while (param_3 = param_3 + -1, -1 < param_3) {
    uVar2 = *param_2;
    puVar1 = (undefined4 *)(param_1 + 0x20 + (uint)uVar2);
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    *param_4 = *puVar1;
    param_4[1] = uVar3;
    param_4[2] = uVar4;
    param_4[3] = uVar5;
    param_4[3] = uVar2 | 0x3f000000;
    param_4 = param_4 + 4;
    param_2 = param_2 + 1;
  }
  return;
}

// 0112FB60  FUN_0112fb60  size=38  [run]
void FUN_0112fb60(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0112FB90  hkpCapsuleShape::vf00  size=53  [run]
undefined4 * __thiscall hkpCapsuleShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0112FBD0  hkpCapsuleShape::vf10  size=197  [run]
void __thiscall hkpCapsuleShape::vf10(int param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20 [4];
  
  param_3 = *(float *)(param_1 + 0x10) + param_3;
  pfVar11 = local_50;
  for (iVar9 = 0x10; fVar8 = local_20[3], fVar7 = local_20[2], fVar6 = local_20[1],
      fVar5 = local_20[0], iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar11 = *param_2;
    param_2 = param_2 + 1;
    pfVar11 = pfVar11 + 1;
  }
  iVar9 = 1;
  pfVar11 = local_20;
  pfVar10 = (float *)(param_1 + 0x30);
  do {
    fVar1 = *pfVar10;
    fVar2 = pfVar10[1];
    fVar3 = pfVar10[2];
    *pfVar11 = fVar2 * local_40 + fVar1 * local_50[0] + fVar3 * local_30 + fVar5;
    pfVar11[1] = fVar2 * fStack_3c + fVar1 * local_50[1] + fVar3 * fStack_2c + fVar6;
    pfVar11[2] = fVar2 * fStack_38 + fVar1 * local_50[2] + fVar3 * fStack_28 + fVar7;
    pfVar11[3] = fVar2 * fStack_34 + fVar1 * local_50[3] + fVar3 * fStack_24 + fVar8;
    pfVar10 = pfVar10 + -4;
    pfVar11 = pfVar11 + -4;
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  auVar13._4_4_ = fStack_2c;
  auVar13._0_4_ = local_30;
  auVar13._8_4_ = fStack_28;
  auVar13._12_4_ = fStack_24;
  auVar12._4_4_ = local_20[1];
  auVar12._0_4_ = local_20[0];
  auVar12._8_4_ = local_20[2];
  auVar12._12_4_ = local_20[3];
  auVar12 = maxps(auVar13,auVar12);
  auVar4._4_4_ = local_20[1];
  auVar4._0_4_ = local_20[0];
  auVar4._8_4_ = local_20[2];
  auVar4._12_4_ = local_20[3];
  auVar13 = minps(auVar13,auVar4);
  *(undefined1 (*) [16])(param_4 + 4) = auVar12;
  *param_4 = auVar13._0_4_ - param_3;
  param_4[1] = auVar13._4_4_ - param_3;
  param_4[2] = auVar13._8_4_ - param_3;
  param_4[3] = auVar13._12_4_ - 0.0;
  param_4[4] = param_4[4] + param_3;
  param_4[5] = param_4[5] + param_3;
  param_4[6] = param_4[6] + param_3;
  param_4[7] = param_4[7] + 0.0;
  return;
}

// 0112FCA0  hkpCapsuleShape::vf20  size=159  [run]
void __thiscall hkpCapsuleShape::vf20(int param_1,float *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  
  fVar5 = (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x20)) * *param_2;
  fVar6 = (*(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x24)) * param_2[1];
  fVar7 = (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x28)) * param_2[2];
  uVar1 = -(uint)(fVar6 + fVar5 + fVar7 < 0.0);
  uVar2 = -(uint)(fVar6 + fVar5 + fVar7 < 0.0);
  uVar3 = -(uint)(fVar6 + fVar5 + fVar7 < 0.0);
  uVar4 = -(uint)(fVar6 + fVar5 + fVar7 < 0.0);
  uStack_18 = (uint)*(undefined8 *)(param_1 + 0x38);
  local_20 = (uint)*(undefined8 *)(param_1 + 0x30);
  uStack_1c = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  uStack_28 = (uint)*(undefined8 *)(param_1 + 0x28);
  local_30 = (uint)*(undefined8 *)(param_1 + 0x20);
  uStack_2c = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  *param_3 = ~uVar1 & local_20 | local_30 & uVar1;
  param_3[1] = ~uVar2 & uStack_1c | uStack_2c & uVar2;
  param_3[2] = ~uVar3 & uStack_18 | uStack_28 & uVar3;
  param_3[3] = ~uVar4 & 0x3f000010 | uVar4 & 0x3f000000;
  return;
}

// 0112FD40  FUN_0112fd40  size=103  [run]
void __thiscall FUN_0112fd40(float *param_1,float *param_2)

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
  undefined1 in_XMM4 [16];
  undefined1 auVar12 [16];
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = fVar1 * fVar1;
  fVar5 = fVar2 * fVar2;
  fVar6 = fVar3 * fVar3;
  fVar9 = fVar5 + fVar4 + fVar6;
  fVar10 = fVar5 + fVar4 + fVar6;
  fVar11 = fVar5 + fVar4 + fVar6;
  fVar6 = fVar5 + fVar4 + fVar6;
  auVar12._4_4_ = fVar10;
  auVar12._0_4_ = fVar9;
  auVar12._8_4_ = fVar11;
  auVar12._12_4_ = fVar6;
  auVar12 = rsqrtps(in_XMM4,auVar12);
  fVar4 = auVar12._0_4_;
  fVar5 = auVar12._4_4_;
  fVar7 = auVar12._8_4_;
  fVar8 = auVar12._12_4_;
  fVar4 = (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar4 * fVar9 * fVar4) * fVar4 * 0.5));
  fVar5 = (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar5 * fVar10 * fVar5) * fVar5 * 0.5));
  fVar7 = (float)(~-(uint)(fVar11 <= 0.0) & (uint)((3.0 - fVar7 * fVar11 * fVar7) * fVar7 * 0.5));
  fVar8 = (float)(~-(uint)(fVar6 <= 0.0) & (uint)((3.0 - fVar8 * fVar6 * fVar8) * fVar8 * 0.5));
  *param_1 = fVar1 * fVar4;
  param_1[1] = fVar2 * fVar5;
  param_1[2] = fVar3 * fVar7;
  param_1[3] = param_1[3] * fVar8;
  *param_2 = fVar4 * fVar9;
  param_2[1] = fVar5 * fVar10;
  param_2[2] = fVar7 * fVar11;
  param_2[3] = fVar8 * fVar6;
  return;
}

// 0112FDB0  FUN_0112fdb0  size=103  [run]
void __thiscall FUN_0112fdb0(float *param_1,float *param_2)

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
  undefined1 in_XMM4 [16];
  undefined1 auVar12 [16];
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = fVar1 * fVar1;
  fVar5 = fVar2 * fVar2;
  fVar6 = fVar3 * fVar3;
  fVar9 = fVar5 + fVar4 + fVar6;
  fVar10 = fVar5 + fVar4 + fVar6;
  fVar11 = fVar5 + fVar4 + fVar6;
  fVar6 = fVar5 + fVar4 + fVar6;
  auVar12._4_4_ = fVar10;
  auVar12._0_4_ = fVar9;
  auVar12._8_4_ = fVar11;
  auVar12._12_4_ = fVar6;
  auVar12 = rsqrtps(in_XMM4,auVar12);
  fVar4 = auVar12._0_4_;
  fVar5 = auVar12._4_4_;
  fVar7 = auVar12._8_4_;
  fVar8 = auVar12._12_4_;
  fVar4 = (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar4 * fVar9 * fVar4) * fVar4 * 0.5));
  fVar5 = (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar5 * fVar10 * fVar5) * fVar5 * 0.5));
  fVar7 = (float)(~-(uint)(fVar11 <= 0.0) & (uint)((3.0 - fVar7 * fVar11 * fVar7) * fVar7 * 0.5));
  fVar8 = (float)(~-(uint)(fVar6 <= 0.0) & (uint)((3.0 - fVar8 * fVar6 * fVar8) * fVar8 * 0.5));
  *param_1 = fVar1 * fVar4;
  param_1[1] = fVar2 * fVar5;
  param_1[2] = fVar3 * fVar7;
  param_1[3] = param_1[3] * fVar8;
  *param_2 = fVar4 * fVar9;
  param_2[1] = fVar5 * fVar10;
  param_2[2] = fVar7 * fVar11;
  param_2[3] = fVar8 * fVar6;
  return;
}

// 0112FE80  hkpConvexVerticesShape::vf28  size=17  [run]
void __thiscall hkpConvexVerticesShape::vf28(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  *param_2 = *(undefined4 *)(param_1 + 0x30);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}

// 0112FEA0  FUN_0112fea0  size=4  [run]
int __fastcall FUN_0112fea0(int param_1)

{
  return param_1 + 0x54;
}

// 0112FEB0  hkpConvexVerticesShape::vf44  size=42  [run]
void __thiscall hkpConvexVerticesShape::vf44(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  uVar2 = puVar1[4];
  uVar3 = puVar1[8];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = 0;
  return;
}

// 0112FEE0  hkpConvexVerticesShape::vf30  size=210  [run]
undefined4 * __thiscall hkpConvexVerticesShape::vf30(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar15 = *(undefined4 **)(param_1 + 0x40);
  iVar16 = *(uint *)(param_1 + 0x4c) - 1;
  puVar14 = param_2;
  if (2 < iVar16) {
    uVar13 = *(uint *)(param_1 + 0x4c) >> 2;
    iVar16 = iVar16 + uVar13 * -4;
    do {
      uVar2 = *puVar15;
      uVar3 = puVar15[2];
      uVar4 = puVar15[3];
      uVar5 = puVar15[4];
      uVar6 = puVar15[5];
      uVar7 = puVar15[6];
      uVar8 = puVar15[7];
      uVar9 = puVar15[8];
      uVar10 = puVar15[9];
      uVar11 = puVar15[10];
      uVar12 = puVar15[0xb];
      puVar14[4] = puVar15[1];
      puVar14[5] = uVar6;
      puVar14[6] = uVar10;
      puVar14[7] = uVar1;
      *puVar14 = uVar2;
      puVar14[1] = uVar5;
      puVar14[2] = uVar9;
      puVar14[3] = uVar1;
      puVar14[8] = uVar3;
      puVar14[9] = uVar7;
      puVar14[10] = uVar11;
      puVar14[0xb] = uVar1;
      puVar14[0xc] = uVar4;
      puVar14[0xd] = uVar8;
      puVar14[0xe] = uVar12;
      puVar14[0xf] = uVar1;
      puVar14 = puVar14 + 0x10;
      puVar15 = puVar15 + 0xc;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (-1 < iVar16) {
    uVar2 = *puVar15;
    uVar3 = puVar15[1];
    uVar4 = puVar15[4];
    uVar5 = puVar15[5];
    uVar6 = puVar15[6];
    uVar7 = puVar15[8];
    uVar8 = puVar15[9];
    uVar9 = puVar15[10];
    if (iVar16 != 0) {
      if (iVar16 != 1) {
        if (iVar16 != 2) {
          return param_2;
        }
        puVar14[8] = puVar15[2];
        puVar14[9] = uVar6;
        puVar14[10] = uVar9;
        puVar14[0xb] = uVar1;
      }
      puVar14[4] = uVar3;
      puVar14[5] = uVar5;
      puVar14[6] = uVar8;
      puVar14[7] = uVar1;
    }
    *puVar14 = uVar2;
    puVar14[1] = uVar4;
    puVar14[2] = uVar7;
    puVar14[3] = uVar1;
  }
  return param_2;
}

// 0112FFC0  hkpConvexVerticesShape::vf24  size=184  [run]
void __thiscall
hkpConvexVerticesShape::vf24(int param_1,ushort *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_60 [5];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_14;
  
  local_14 = param_3 + -1;
  while (-1 < local_14) {
    uVar6 = (uint)*param_2;
    puVar4 = (undefined4 *)(((int)uVar6 >> 2) * 0x30 + *(int *)(param_1 + 0x40));
    local_60[4] = puVar4[1];
    uStack_4c = puVar4[5];
    uStack_48 = puVar4[9];
    uStack_44 = 0;
    uVar5 = uVar6 & 3;
    local_60[0] = *puVar4;
    local_60[1] = puVar4[4];
    local_60[2] = puVar4[8];
    local_60[3] = 0;
    local_40 = puVar4[2];
    uStack_3c = puVar4[6];
    uStack_38 = puVar4[10];
    uStack_34 = 0;
    local_30 = puVar4[3];
    uStack_2c = puVar4[7];
    uStack_28 = puVar4[0xb];
    uStack_24 = 0;
    uVar1 = local_60[uVar5 * 4 + 1];
    uVar2 = local_60[uVar5 * 4 + 2];
    uVar3 = local_60[uVar5 * 4 + 3];
    *param_4 = local_60[uVar5 * 4];
    param_4[1] = uVar1;
    param_4[2] = uVar2;
    param_4[3] = uVar3;
    param_4[3] = uVar6 | 0x3f000000;
    param_2 = param_2 + 1;
    local_14 = local_14 + -1;
    param_4 = param_4 + 4;
  }
  return;
}

// 01130080  hkpConvexVerticesShape::vf10  size=200  [run]
void __thiscall
hkpConvexVerticesShape::vf10(int param_1,float *param_2,float param_3,float *param_4)

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
  
  fVar6 = *(float *)(param_1 + 0x20);
  fVar1 = *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x28);
  param_3 = *(float *)(param_1 + 0x10) + param_3;
  fVar7 = ABS(fVar6 * *param_2) + ABS(fVar1 * param_2[4]) + ABS(fVar2 * param_2[8]) + param_3;
  fVar8 = ABS(fVar6 * param_2[1]) + ABS(fVar1 * param_2[5]) + ABS(fVar2 * param_2[9]) + param_3;
  fVar9 = ABS(fVar6 * param_2[2]) + ABS(fVar1 * param_2[6]) + ABS(fVar2 * param_2[10]) + param_3;
  fVar10 = ABS(fVar6 * param_2[3]) + ABS(fVar1 * param_2[7]) + ABS(fVar2 * param_2[0xb]) + param_3;
  fVar6 = *(float *)(param_1 + 0x30);
  fVar1 = *(float *)(param_1 + 0x34);
  fVar2 = *(float *)(param_1 + 0x38);
  fVar3 = fVar1 * param_2[4] + fVar6 * *param_2 + fVar2 * param_2[8] + param_2[0xc];
  fVar4 = fVar1 * param_2[5] + fVar6 * param_2[1] + fVar2 * param_2[9] + param_2[0xd];
  fVar5 = fVar1 * param_2[6] + fVar6 * param_2[2] + fVar2 * param_2[10] + param_2[0xe];
  fVar6 = fVar1 * param_2[7] + fVar6 * param_2[3] + fVar2 * param_2[0xb] + param_2[0xf];
  param_4[4] = fVar3 + fVar7;
  param_4[5] = fVar4 + fVar8;
  param_4[6] = fVar5 + fVar9;
  param_4[7] = fVar6 + fVar10;
  *param_4 = -fVar7 + fVar3;
  param_4[1] = -fVar8 + fVar4;
  param_4[2] = -fVar9 + fVar5;
  param_4[3] = -fVar10 + fVar6;
  return;
}

// 01130150  hkpConvexVerticesShape::vf20  size=499  [run]
void __thiscall hkpConvexVerticesShape::vf20(int param_1,float *param_2,uint *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar19 [16];
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  float fStack_28;
  float fStack_24;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  pfVar4 = *(float **)(param_1 + 0x40);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar18 = *(float *)*(undefined1 (*) [16])(pfVar4 + 4);
  fVar20 = pfVar4[5];
  fVar21 = pfVar4[6];
  fVar22 = pfVar4[7];
  _local_30 = *(undefined1 (*) [16])(pfVar4 + 4);
  fVar28 = *pfVar4;
  fVar29 = pfVar4[1];
  fVar30 = pfVar4[2];
  fVar31 = pfVar4[3];
  local_40 = *(undefined1 (*) [16])(pfVar4 + 8);
  uVar23 = 0x3f000000;
  uVar24 = 0x3f000001;
  uVar25 = 0x3f000002;
  uVar26 = 0x3f000003;
  local_20 = 0x3f000000;
  uStack_1c = 0x3f000001;
  uStack_18 = 0x3f000002;
  uStack_14 = 0x3f000003;
  fVar14 = fVar28 * fVar1 + fVar18 * fVar2 + local_40._0_4_ * fVar3;
  fVar15 = fVar29 * fVar1 + fVar20 * fVar2 + local_40._4_4_ * fVar3;
  fVar16 = fVar30 * fVar1 + fVar21 * fVar2 + local_40._8_4_ * fVar3;
  fVar17 = fVar31 * fVar1 + fVar22 * fVar2 + local_40._12_4_ * fVar3;
  if (*(int *)(param_1 + 0x44) < 2) {
    local_20 = 0x3f000000;
    uStack_1c = 0x3f000001;
    uStack_18 = 0x3f000002;
    uStack_14 = 0x3f000003;
  }
  else {
    pfVar4 = pfVar4 + 0x14;
    iVar5 = *(int *)(param_1 + 0x44) + -1;
    do {
      uVar23 = uVar23 + 4;
      uVar24 = uVar24 + 4;
      uVar25 = uVar25 + 4;
      uVar26 = uVar26 + 4;
      fVar18 = pfVar4[-4] * fVar2 + pfVar4[-8] * fVar1 + *pfVar4 * fVar3;
      fVar20 = pfVar4[-3] * fVar2 + pfVar4[-7] * fVar1 + pfVar4[1] * fVar3;
      fVar21 = pfVar4[-2] * fVar2 + pfVar4[-6] * fVar1 + pfVar4[2] * fVar3;
      fVar22 = pfVar4[-1] * fVar2 + pfVar4[-5] * fVar1 + pfVar4[3] * fVar3;
      uVar6 = -(uint)(fVar14 < fVar18);
      uVar7 = -(uint)(fVar15 < fVar20);
      uVar8 = -(uint)(fVar16 < fVar21);
      uVar10 = -(uint)(fVar17 < fVar22);
      fVar14 = (float)(uVar6 & (uint)fVar18 | ~uVar6 & (uint)fVar14);
      fVar15 = (float)(uVar7 & (uint)fVar20 | ~uVar7 & (uint)fVar15);
      fVar16 = (float)(uVar8 & (uint)fVar21 | ~uVar8 & (uint)fVar16);
      fVar17 = (float)(uVar10 & (uint)fVar22 | ~uVar10 & (uint)fVar17);
      fVar28 = (float)(~uVar6 & (uint)fVar28 | (uint)pfVar4[-8] & uVar6);
      fVar29 = (float)(~uVar7 & (uint)fVar29 | (uint)pfVar4[-7] & uVar7);
      fVar30 = (float)(~uVar8 & (uint)fVar30 | (uint)pfVar4[-6] & uVar8);
      fVar31 = (float)(~uVar10 & (uint)fVar31 | (uint)pfVar4[-5] & uVar10);
      fVar18 = (float)((uint)pfVar4[-4] & uVar6 | ~uVar6 & local_30._0_4_);
      fVar20 = (float)((uint)pfVar4[-3] & uVar7 | ~uVar7 & local_30._4_4_);
      fVar21 = (float)((uint)pfVar4[-2] & uVar8 | ~uVar8 & (uint)fStack_28);
      fVar22 = (float)((uint)pfVar4[-1] & uVar10 | ~uVar10 & (uint)fStack_24);
      auVar27._0_4_ = (uint)*pfVar4 & uVar6;
      auVar27._4_4_ = (uint)pfVar4[1] & uVar7;
      auVar27._8_4_ = (uint)pfVar4[2] & uVar8;
      auVar27._12_4_ = (uint)pfVar4[3] & uVar10;
      auVar19._0_4_ = ~uVar6 & local_40._0_4_;
      auVar19._4_4_ = ~uVar7 & local_40._4_4_;
      auVar19._8_4_ = ~uVar8 & local_40._8_4_;
      auVar19._12_4_ = ~uVar10 & local_40._12_4_;
      local_40 = auVar19 | auVar27;
      pfVar4 = pfVar4 + 0xc;
      iVar5 = iVar5 + -1;
      local_20 = uVar6 & uVar23 | ~uVar6 & local_20;
      uStack_1c = uVar7 & uVar24 | ~uVar7 & uStack_1c;
      uStack_18 = uVar8 & uVar25 | ~uVar8 & uStack_18;
      uStack_14 = uVar10 & uVar26 | ~uVar10 & uStack_14;
      local_30._4_4_ = fVar20;
      local_30._0_4_ = fVar18;
      fStack_28 = fVar21;
      fStack_24 = fVar22;
    } while (iVar5 != 0);
  }
  uVar23 = -(uint)(fVar14 < fVar15);
  uVar26 = -(uint)(fVar14 < fVar15);
  uVar8 = -(uint)(fVar14 < fVar15);
  uVar11 = -(uint)(fVar14 < fVar15);
  uVar24 = -(uint)(fVar16 < fVar17);
  uVar6 = -(uint)(fVar16 < fVar17);
  uVar10 = -(uint)(fVar16 < fVar17);
  uVar12 = -(uint)(fVar16 < fVar17);
  uVar25 = -(uint)((float)(uVar23 & (uint)fVar15 | ~uVar23 & (uint)fVar14) <
                  (float)(uVar24 & (uint)fVar17 | ~uVar24 & (uint)fVar16));
  uVar7 = -(uint)((float)(uVar26 & (uint)fVar15 | ~uVar26 & (uint)fVar14) <
                 (float)(uVar6 & (uint)fVar17 | ~uVar6 & (uint)fVar16));
  uVar9 = -(uint)((float)(uVar8 & (uint)fVar15 | ~uVar8 & (uint)fVar14) <
                 (float)(uVar10 & (uint)fVar17 | ~uVar10 & (uint)fVar16));
  uVar13 = -(uint)((float)(uVar11 & (uint)fVar15 | ~uVar11 & (uint)fVar14) <
                  (float)(uVar12 & (uint)fVar17 | ~uVar12 & (uint)fVar16));
  local_30._0_4_ = local_40._8_4_;
  local_30._4_4_ = local_40._12_4_;
  *param_3 = ~uVar25 & (~uVar23 & (uint)fVar28 | (uint)fVar29 & uVar23) |
             (~uVar24 & (uint)fVar30 | (uint)fVar31 & uVar24) & uVar25;
  param_3[1] = ~uVar7 & (~uVar26 & (uint)fVar18 | (uint)fVar20 & uVar26) |
               (~uVar6 & (uint)fVar21 | (uint)fVar22 & uVar6) & uVar7;
  param_3[2] = ~uVar9 & (~uVar8 & local_40._0_4_ | local_40._4_4_ & uVar8) |
               (~uVar10 & local_30._0_4_ | local_30._4_4_ & uVar10) & uVar9;
  param_3[3] = ~uVar13 & (~uVar11 & local_20 | uStack_1c & uVar11) |
               (~uVar12 & uStack_18 | uStack_14 & uVar12) & uVar13;
  return;
}

// 01130350  hkpConvexVerticesShape::vf14  size=1296  [run]
void __thiscall
hkpConvexVerticesShape::vf14(int param_1,char *param_2,float *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar29;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar35;
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float local_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 local_d0 [8];
  float fStack_c8;
  float fStack_c4;
  undefined1 local_c0 [8];
  float fStack_b8;
  float fStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
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
  undefined1 local_60 [16];
  float local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  int local_18;
  char local_11;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    pvVar6 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar6 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar6 + 0xc)) {
      *puVar1 = "TtconvexVertCastRayGSK";
      uVar2 = rdtsc();
      local_18 = (int)uVar2;
      puVar1[1] = local_18;
      *(undefined4 **)((int)pvVar6 + 4) = puVar1 + 3;
    }
    local_f0 = *(float *)(param_1 + 0x10);
    fStack_ec = (local_f0 + 0.001) * (local_f0 + 0.001);
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    local_130 = 0x3f800000;
    uStack_12c = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    local_120 = 0;
    uStack_11c = 0x3f800000;
    uStack_118 = 0;
    uStack_114 = 0;
    local_110 = 0;
    uStack_10c = 0;
    uStack_108 = 0x3f800000;
    uStack_104 = 0;
    local_150 = *param_3;
    fStack_14c = param_3[1];
    fStack_148 = param_3[2];
    fStack_144 = param_3[3];
    local_140 = param_3[4] - local_150;
    fStack_13c = param_3[5] - fStack_14c;
    fStack_138 = param_3[6] - fStack_148;
    fStack_134 = param_3[7] - fStack_144;
    local_30 = (float)param_4[4];
    uStack_e8 = 0;
    uStack_e4 = 0;
    local_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    local_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    local_50 = fStack_ec;
    fStack_2c = local_30;
    fStack_28 = local_30;
    uStack_24 = local_30;
    FUN_0145bc10(&local_11,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c),
                 &local_150,&local_40);
    if (local_11 != '\0') {
      *param_4 = local_40;
      param_4[1] = uStack_3c;
      param_4[2] = uStack_38;
      param_4[3] = uStack_34;
      param_4[4] = local_30;
      param_4[param_4[0x10] + 8] = 0xffffffff;
    }
    pvVar6 = TlsGetValue(DAT_01f8fc54);
    puVar1 = *(undefined4 **)((int)pvVar6 + 4);
    if (puVar1 < *(undefined4 **)((int)pvVar6 + 0xc)) {
      *puVar1 = &DAT_0164b09c;
      uVar2 = rdtsc();
      puVar1[1] = (int)uVar2;
      *(undefined4 **)((int)pvVar6 + 4) = puVar1 + 3;
    }
    *param_2 = local_11;
    return;
  }
  pvVar6 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar6 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar6 + 0xc)) {
    *puVar1 = "TtconvexVertCastRayPlaneEq";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar6 + 4) = puVar1 + 3;
  }
  fVar28 = *param_3;
  fVar35 = param_3[1];
  fVar39 = param_3[2];
  uVar8 = *(uint *)(param_1 + 0x58);
  local_18 = *(int *)(param_1 + 0x54);
  local_d0._4_4_ = param_4[4];
  local_d0._0_4_ = local_d0._4_4_;
  fStack_c8 = (float)local_d0._4_4_;
  fStack_c4 = (float)local_d0._4_4_;
  local_b0 = uVar8 - 4;
  local_60 = (undefined1  [16])0x0;
  uStack_a8 = uVar8 - 2;
  uStack_a4 = uVar8 - 1;
  uStack_ac = uVar8 - 3;
  fStack_b8 = -1.0;
  local_c0 = (undefined1  [8])0xbf800000bf800000;
  fStack_b4 = -1.0;
  iVar10 = uStack_a4 * 2;
  pfVar7 = (float *)(local_18 + local_b0 * 0x10);
  local_70 = *pfVar7;
  fStack_6c = pfVar7[1];
  fStack_68 = pfVar7[2];
  fStack_64 = pfVar7[3];
  pfVar7 = (float *)(local_18 + 0x10 + local_b0 * 0x10);
  local_a0 = *pfVar7;
  fStack_9c = pfVar7[1];
  fStack_98 = pfVar7[2];
  fStack_94 = pfVar7[3];
  pfVar7 = (float *)(local_18 + uStack_a8 * 0x10);
  local_90 = *pfVar7;
  fStack_8c = pfVar7[1];
  fStack_88 = pfVar7[2];
  fStack_84 = pfVar7[3];
  pfVar7 = (float *)(local_18 + uStack_a4 * 0x10);
  local_80 = *pfVar7;
  fStack_7c = pfVar7[1];
  fStack_78 = pfVar7[2];
  fStack_74 = pfVar7[3];
  local_30 = (param_3[4] - fVar28) + fVar28;
  fStack_2c = (param_3[5] - fVar35) + fVar35;
  fStack_28 = (param_3[6] - fVar39) + fVar39;
  local_50 = 0.0;
  uStack_4c = 1;
  uStack_48 = 2;
  uStack_44 = 3;
  uStack_24 = 0x3f800000;
  iVar9 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  pfVar7 = (float *)(local_18 + 0x20);
  fVar29 = local_30;
  fVar32 = fStack_2c;
  fVar33 = fStack_28;
  do {
    fVar20 = fStack_64 * 1.0 + fVar39 * fStack_68 + fVar35 * fStack_6c + fVar28 * local_70;
    fVar25 = fStack_94 * 1.0 + fVar39 * fStack_98 + fVar35 * fStack_9c + fVar28 * local_a0;
    fVar26 = fStack_84 * 1.0 + fVar39 * fStack_88 + fVar35 * fStack_8c + fVar28 * local_90;
    fVar27 = fStack_74 * 1.0 + fVar39 * fStack_78 + fVar35 * fStack_7c + fVar28 * local_80;
    auVar36._4_4_ = fStack_84 * 1.0;
    auVar36._0_4_ = fVar33 * fStack_88;
    auVar36._8_4_ = fVar33 * fStack_78;
    auVar36._12_4_ = fStack_74 * 1.0;
    fVar43 = fStack_64 * 1.0 + fVar33 * fStack_68 + fVar32 * fStack_6c + fVar29 * local_70;
    fVar45 = fStack_94 * 1.0 + fVar33 * fStack_98 + fVar32 * fStack_9c + fVar29 * local_a0;
    fVar46 = fStack_84 * 1.0 + fVar33 * fStack_88 + fVar32 * fStack_8c + fVar29 * local_90;
    fVar47 = fStack_74 * 1.0 + fVar33 * fStack_78 + fVar32 * fStack_7c + fVar29 * local_80;
    auVar22._0_4_ = fVar20 - fVar43;
    auVar22._4_4_ = fVar25 - fVar45;
    auVar22._8_4_ = fVar26 - fVar46;
    auVar22._12_4_ = fVar27 - fVar47;
    auVar36 = rcpps(auVar36,auVar22);
    fVar29 = (2.0 - auVar36._0_4_ * auVar22._0_4_) * auVar36._0_4_ * fVar20;
    fVar32 = (2.0 - auVar36._4_4_ * auVar22._4_4_) * auVar36._4_4_ * fVar25;
    fVar33 = (2.0 - auVar36._8_4_ * auVar22._8_4_) * auVar36._8_4_ * fVar26;
    fVar34 = (2.0 - auVar36._12_4_ * auVar22._12_4_) * auVar36._12_4_ * fVar27;
    uVar12 = -(uint)(0.0 <= fVar20);
    uVar14 = -(uint)(0.0 <= fVar25);
    uVar16 = -(uint)(0.0 <= fVar26);
    uVar18 = -(uint)(0.0 <= fVar27);
    uVar13 = -(uint)(0.0 <= fVar43);
    uVar15 = -(uint)(0.0 <= fVar45);
    uVar17 = -(uint)(0.0 <= fVar46);
    uVar19 = -(uint)(0.0 <= fVar47);
    auVar40._0_4_ = uVar13 & uVar12;
    auVar40._4_4_ = uVar15 & uVar14;
    auVar40._8_4_ = uVar17 & uVar16;
    auVar40._12_4_ = uVar19 & uVar18;
    iVar10 = movmskps(iVar10,auVar40);
    if (iVar10 != 0) {
      bVar11 = false;
LAB_0113081d:
      pvVar6 = TlsGetValue(DAT_01f8fc54);
      puVar1 = *(undefined4 **)((int)pvVar6 + 4);
      if (puVar1 < *(undefined4 **)((int)pvVar6 + 0xc)) {
        *puVar1 = &DAT_0164b09c;
        uVar2 = rdtsc();
        puVar1[1] = (int)uVar2;
        *(undefined4 **)((int)pvVar6 + 4) = puVar1 + 3;
      }
      *param_2 = bVar11;
      return;
    }
    uVar13 = ~uVar13 & -(uint)((float)local_c0._0_4_ < fVar29 && 0.0 <= fVar20);
    uVar15 = ~uVar15 & -(uint)((float)local_c0._4_4_ < fVar32 && 0.0 <= fVar25);
    uVar17 = ~uVar17 & -(uint)(fStack_b8 < fVar33 && 0.0 <= fVar26);
    uVar19 = ~uVar19 & -(uint)(fStack_b4 < fVar34 && 0.0 <= fVar27);
    auVar48._0_4_ = ~uVar13 & local_c0._0_4_;
    auVar48._4_4_ = ~uVar15 & local_c0._4_4_;
    auVar48._8_4_ = ~uVar17 & (uint)fStack_b8;
    auVar48._12_4_ = ~uVar19 & (uint)fStack_b4;
    auVar44._0_4_ = uVar13 & (uint)fVar29;
    auVar44._4_4_ = uVar15 & (uint)fVar32;
    auVar44._8_4_ = uVar17 & (uint)fVar33;
    auVar44._12_4_ = uVar19 & (uint)fVar34;
    _local_c0 = auVar44 | auVar48;
    local_60._4_4_ = uVar15 & uStack_ac | ~uVar15 & local_60._4_4_;
    local_60._0_4_ = uVar13 & local_b0 | ~uVar13 & local_60._0_4_;
    local_60._8_4_ = uVar17 & uStack_a8 | ~uVar17 & local_60._8_4_;
    local_60._12_4_ = uVar19 & uStack_a4 | ~uVar19 & local_60._12_4_;
    uVar12 = ~uVar12 & -(uint)(fVar29 < (float)local_d0._0_4_ && 0.0 <= fVar43);
    uVar13 = ~uVar14 & -(uint)(fVar32 < (float)local_d0._4_4_ && 0.0 <= fVar45);
    uVar14 = ~uVar16 & -(uint)(fVar33 < fStack_c8 && 0.0 <= fVar46);
    uVar15 = ~uVar18 & -(uint)(fVar34 < fStack_c4 && 0.0 <= fVar47);
    auVar30._0_4_ = (uint)fVar29 & uVar12;
    auVar30._4_4_ = (uint)fVar32 & uVar13;
    auVar30._8_4_ = (uint)fVar33 & uVar14;
    auVar30._12_4_ = (uint)fVar34 & uVar15;
    auVar37._0_4_ = ~uVar12 & local_d0._0_4_;
    auVar37._4_4_ = ~uVar13 & local_d0._4_4_;
    auVar37._8_4_ = ~uVar14 & (uint)fStack_c8;
    auVar37._12_4_ = ~uVar15 & (uint)fStack_c4;
    _local_d0 = auVar30 | auVar37;
    if ((int)(uVar8 & 0xfffffffc) <= iVar9) {
      auVar21._0_8_ = local_c0._8_8_;
      auVar21._8_4_ = local_c0._0_4_;
      auVar21._12_4_ = local_c0._4_4_;
      auVar22 = maxps(auVar21,_local_c0);
      auVar38._4_4_ = auVar22._0_4_;
      auVar38._0_4_ = auVar22._4_4_;
      auVar38._8_4_ = auVar22._12_4_;
      auVar38._12_4_ = auVar22._8_4_;
      auVar22 = maxps(auVar22,auVar38);
      fVar28 = auVar22._12_4_;
      auVar23._0_8_ = local_d0._8_8_;
      auVar23._8_4_ = local_d0._0_4_;
      auVar23._12_4_ = local_d0._4_4_;
      auVar36 = minps(auVar23,_local_d0);
      fVar35 = auVar22._0_4_;
      fVar39 = auVar22._4_4_;
      fVar29 = auVar22._8_4_;
      auVar31._4_4_ = -(uint)(fVar39 == local_c0._4_4_);
      auVar31._0_4_ = -(uint)(fVar35 == local_c0._0_4_);
      auVar31._8_4_ = -(uint)(fVar29 == local_c0._8_4_);
      auVar31._12_4_ = -(uint)(fVar28 == local_c0._12_4_);
      uVar12 = movmskps(uVar8 & 0xfffffffc,auVar31);
      uVar8 = (int)uVar12 >> 1 & 1;
      iVar10 = 1 - uVar8;
      auVar41._4_4_ = auVar36._0_4_;
      auVar41._0_4_ = auVar36._4_4_;
      auVar41._8_4_ = auVar36._12_4_;
      auVar41._12_4_ = auVar36._8_4_;
      auVar22 = minps(auVar36,auVar41);
      puVar1 = (undefined4 *)
               (local_18 +
               *(int *)(local_60 +
                       ((uVar8 * -2 - ((int)uVar12 >> 2 & 1U) * iVar10) + 3) * (1 - (uVar12 & 1)) *
                       4) * 0x10);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      auVar24._4_4_ = -(uint)(auVar22._4_4_ < fVar39);
      auVar24._0_4_ = -(uint)(auVar22._0_4_ < fVar35);
      auVar24._8_4_ = -(uint)(auVar22._8_4_ < fVar29);
      auVar24._12_4_ = -(uint)(auVar22._12_4_ < fVar28);
      auVar42._4_4_ = -(uint)(fVar39 < 0.0);
      auVar42._0_4_ = -(uint)(fVar35 < 0.0);
      auVar42._8_4_ = -(uint)(fVar29 < 0.0);
      auVar42._12_4_ = -(uint)(fVar28 < 0.0);
      iVar10 = movmskps(iVar10,auVar24 | auVar42);
      bVar11 = iVar10 == 0;
      if (bVar11) {
        *param_4 = *puVar1;
        param_4[1] = uVar3;
        param_4[2] = uVar4;
        param_4[3] = uVar5;
        param_4[4] = fVar35;
        param_4[param_4[0x10] + 8] = 0xffffffff;
      }
      goto LAB_0113081d;
    }
    local_70 = pfVar7[-8];
    fStack_6c = pfVar7[-7];
    fStack_68 = pfVar7[-6];
    fStack_64 = pfVar7[-5];
    local_a0 = pfVar7[-4];
    fStack_9c = pfVar7[-3];
    fStack_98 = pfVar7[-2];
    fStack_94 = pfVar7[-1];
    local_90 = *pfVar7;
    fStack_8c = pfVar7[1];
    fStack_88 = pfVar7[2];
    fStack_84 = pfVar7[3];
    local_80 = pfVar7[4];
    fStack_7c = pfVar7[5];
    fStack_78 = pfVar7[6];
    fStack_74 = pfVar7[7];
    local_b0 = (uint)local_50;
    uStack_ac = uStack_4c;
    uStack_a8 = uStack_48;
    uStack_a4 = uStack_44;
    iVar9 = iVar9 + 4;
    local_50 = (float)((int)local_50 + 4);
    uStack_4c = uStack_4c + 4;
    uStack_48 = uStack_48 + 4;
    uStack_44 = uStack_44 + 4;
    pfVar7 = pfVar7 + 0x10;
    iVar10 = 0;
    fVar29 = local_30;
    fVar32 = fStack_2c;
    fVar33 = fStack_28;
  } while( true );
}

// 01130860  hkpConvexVerticesShape::hkpConvexVerticesShape_3  size=78  [run]
void __thiscall
hkpConvexVerticesShape::hkpConvexVerticesShape_3(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x405;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *param_1 = vftable;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x80000000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x80000000;
  param_1[0x18] = 0;
  return;
}

// 011308B0  hkpConvexVerticesShape::hkpConvexVerticesShape_4  size=174  [run]
undefined4 * __thiscall
hkpConvexVerticesShape::hkpConvexVerticesShape_4
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,
          float *param_6,undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x405;
  param_1[4] = param_7;
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[0x10] = param_2;
  uVar7 = (int)((param_3 + 3U & 0xfffffffc) + ((int)(param_3 + 3U) >> 0x1f & 3U)) >> 2;
  param_1[0x11] = uVar7;
  param_1[0x12] = uVar7 | 0x80000000;
  param_1[0x13] = param_3;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = param_4;
  param_1[0x16] = param_5;
  param_1[0x17] = param_5 | 0x80000000;
  param_1[0x18] = 0;
  fVar1 = param_6[5];
  fVar2 = param_6[6];
  fVar3 = param_6[7];
  fVar4 = param_6[1];
  fVar5 = param_6[2];
  fVar6 = param_6[3];
  param_1[8] = param_6[4] - *param_6;
  param_1[9] = fVar1 - fVar4;
  param_1[10] = fVar2 - fVar5;
  param_1[0xb] = fVar3 - fVar6;
  param_1[8] = (float)param_1[8] * 0.5;
  param_1[9] = (float)param_1[9] * 0.5;
  param_1[10] = (float)param_1[10] * 0.5;
  param_1[0xb] = (float)param_1[0xb] * 0.5;
  fVar1 = param_6[5];
  fVar2 = param_6[6];
  fVar3 = param_6[7];
  fVar4 = param_6[1];
  fVar5 = param_6[2];
  fVar6 = param_6[3];
  param_1[0xc] = param_6[4] + *param_6;
  param_1[0xd] = fVar1 + fVar4;
  param_1[0xe] = fVar2 + fVar5;
  param_1[0xf] = fVar3 + fVar6;
  param_1[0xc] = (float)param_1[0xc] * 0.5;
  param_1[0xd] = (float)param_1[0xd] * 0.5;
  param_1[0xe] = (float)param_1[0xe] * 0.5;
  param_1[0xf] = (float)param_1[0xf] * 0.5;
  return param_1;
}

// 01130960  hkpConvexVerticesShape::hkpConvexVerticesShape_2  size=38  [run]
undefined4 * __thiscall
hkpConvexVerticesShape::hkpConvexVerticesShape_2(undefined4 *param_1,int param_2)

{
  hkpConvexShape::hkpConvexShape(param_2);
  *param_1 = vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 5;
  }
  return param_1;
}

// 01130990  hkBaseObject::hkBaseObject_116  size=133  [run]
void __fastcall hkBaseObject::hkBaseObject_116(undefined4 *param_1)

{
  *param_1 = hkpConvexVerticesShape::vftable;
  if (param_1[0x18] != 0) {
    FUN_010060a0();
  }
  param_1[0x16] = 0;
  if (-1 < (int)param_1[0x17]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x15],param_1[0x17] << 4);
  }
  param_1[0x15] = 0;
  param_1[0x17] = 0x80000000;
  param_1[0x11] = 0;
  if (-1 < (int)param_1[0x12]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x10],(param_1[0x12] & 0x3fffffff) * 0x30);
  }
  param_1[0x10] = 0;
  param_1[0x12] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01130A20  FUN_01130a20  size=127  [run]
void __thiscall FUN_01130a20(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x44) * 4;
  if ((int)(param_2[2] & 0x3fffffff) < iVar1) {
    iVar2 = (param_2[2] & 0x3fffffff) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar2,0x10);
  }
  param_2[1] = iVar1;
  FUN_01446740(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c),*param_2);
  iVar1 = *(int *)(param_1 + 0x4c);
  if ((int)(param_2[2] & 0x3fffffff) < iVar1) {
    iVar2 = (param_2[2] & 0x3fffffff) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar2,0x10);
  }
  param_2[1] = iVar1;
  return;
}

// 01130AA0  FUN_01130aa0  size=610  [run]
void __thiscall FUN_01130aa0(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 local_80 [8];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  
  *(int *)(param_1 + 0x4c) = param_4;
  iVar17 = (int)(((int)(param_4 + 3U) >> 0x1f & 3U) + (param_4 + 3U & 0xfffffffc)) >> 2;
  uVar13 = *(uint *)(param_1 + 0x48) & 0x3fffffff;
  local_20 = param_1;
  local_14 = (int *)(param_1 + 0x40);
  if ((int)uVar13 < iVar17) {
    iVar18 = uVar13 * 2;
    if (iVar18 <= iVar17) {
      iVar18 = iVar17;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_1 + 0x40),iVar18,0x30);
  }
  iVar18 = param_4 >> 2;
  local_14[1] = iVar17;
  local_1c = iVar18;
  puVar14 = param_2;
  if (0 < iVar18) {
    iVar17 = 0;
    local_18 = iVar18;
    do {
      uVar1 = puVar14[2];
      uVar2 = *puVar14;
      uVar3 = puVar14[1];
      puVar14 = (undefined4 *)((int)puVar14 + param_3);
      iVar16 = *local_14;
      uVar4 = puVar14[2];
      uVar5 = *puVar14;
      uVar6 = puVar14[1];
      puVar14 = (undefined4 *)((int)puVar14 + param_3);
      uVar7 = puVar14[1];
      uVar8 = puVar14[2];
      uVar9 = *puVar14;
      uVar10 = *(undefined4 *)((int)puVar14 + param_3 + 8);
      puVar14 = (undefined4 *)((int)puVar14 + param_3);
      iVar17 = iVar17 + 0x30;
      uVar11 = *puVar14;
      uVar12 = puVar14[1];
      puVar14 = (undefined4 *)((int)puVar14 + param_3);
      local_18 = local_18 + -1;
      puVar15 = (undefined4 *)(iVar16 + -0x30 + iVar17);
      *puVar15 = uVar2;
      puVar15[1] = uVar5;
      puVar15[2] = uVar9;
      puVar15[3] = uVar11;
      puVar15 = (undefined4 *)(iVar16 + -0x20 + iVar17);
      *puVar15 = uVar3;
      puVar15[1] = uVar6;
      puVar15[2] = uVar7;
      puVar15[3] = uVar12;
      puVar15 = (undefined4 *)(iVar16 + -0x10 + iVar17);
      *puVar15 = uVar1;
      puVar15[1] = uVar4;
      puVar15[2] = uVar8;
      puVar15[3] = uVar10;
    } while (local_18 != 0);
  }
  iVar17 = param_4 + iVar18 * -4;
  local_18 = iVar17;
  if (iVar17 != 0) {
    if (0 < iVar17) {
      puVar15 = local_80;
      do {
        uVar1 = *puVar14;
        uVar2 = puVar14[1];
        uVar3 = puVar14[2];
        puVar14 = (undefined4 *)((int)puVar14 + param_3);
        iVar17 = iVar17 + -1;
        *puVar15 = uVar1;
        puVar15[1] = uVar2;
        puVar15[2] = uVar3;
        puVar15[3] = 0;
        puVar15 = puVar15 + 4;
      } while (iVar17 != 0);
    }
    iVar17 = local_18;
    puVar14 = (undefined4 *)((int)puVar14 - param_3);
    if (local_18 < 4) {
      uVar1 = puVar14[1];
      uVar2 = puVar14[2];
      iVar18 = local_18 * 4;
      uVar13 = 3 - local_18;
      local_80[iVar18] = *puVar14;
      local_80[iVar17 * 4 + 1] = uVar1;
      local_80[iVar17 * 4 + 2] = uVar2;
      local_80[iVar17 * 4 + 3] = 0;
      puVar14 = local_80 + iVar18;
      puVar15 = local_80 + iVar17 * 4 + 4;
      for (iVar16 = (uVar13 & 0xfffffff) << 2; iVar18 = local_1c, iVar16 != 0; iVar16 = iVar16 + -1)
      {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      }
    }
    puVar14 = (undefined4 *)(iVar18 * 0x30 + *local_14);
    *puVar14 = local_80[0];
    puVar14[1] = local_80[4];
    puVar14[2] = local_60;
    puVar14[3] = local_50;
    puVar14[4] = local_80[1];
    puVar14[5] = local_80[5];
    puVar14[6] = uStack_5c;
    puVar14[7] = uStack_4c;
    puVar14[8] = local_80[2];
    puVar14[9] = local_80[6];
    puVar14[10] = uStack_58;
    puVar14[0xb] = uStack_48;
  }
  FUN_014413e0(param_2,param_4,param_3,&local_40);
  *(float *)(local_20 + 0x20) = (local_30 - local_40) * 0.5;
  *(float *)(local_20 + 0x24) = (fStack_2c - fStack_3c) * 0.5;
  *(float *)(local_20 + 0x28) = (fStack_28 - fStack_38) * 0.5;
  *(float *)(local_20 + 0x2c) = (fStack_24 - fStack_34) * 0.5;
  *(float *)(local_20 + 0x30) = (local_40 + local_30) * 0.5;
  *(float *)(local_20 + 0x34) = (fStack_3c + fStack_2c) * 0.5;
  *(float *)(local_20 + 0x38) = (fStack_38 + fStack_28) * 0.5;
  *(float *)(local_20 + 0x3c) = (fStack_34 + fStack_24) * 0.5;
  return;
}

// 01130D10  hkpConvexVerticesShape::hkpConvexVerticesShape_5  size=234  [run]
undefined4 * __thiscall
hkpConvexVerticesShape::hkpConvexVerticesShape_5
          (undefined4 *param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x405;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = param_4;
  *param_1 = vftable;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x80000000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x17] = 0x80000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  uVar2 = param_1[0x17];
  if ((int)(uVar2 & 0x3fffffff) < param_3[1]) {
    if (-1 < (int)uVar2) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x15],uVar2 << 4);
    }
    param_4 = param_3[1] << 4;
    uVar5 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_4);
    param_1[0x15] = uVar5;
    param_1[0x17] = (int)(param_4 + (param_4 >> 0x1f & 0xfU)) >> 4;
  }
  iVar8 = param_3[1];
  puVar6 = (undefined4 *)param_1[0x15];
  param_1[0x16] = iVar8;
  if (0 < iVar8) {
    iVar7 = *param_3 - (int)puVar6;
    do {
      puVar1 = (undefined4 *)(iVar7 + (int)puVar6);
      uVar5 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar6 = *puVar1;
      puVar6[1] = uVar5;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      puVar6 = puVar6 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_01130aa0(*param_2,param_2[2],param_2[1]);
  return param_1;
}

// 01131090  FUN_01131090  size=982  [run]
void __fastcall FUN_01131090(int param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  LPVOID pvVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int local_74 [4];
  uint local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  float *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  float *local_14;
  
  piVar1 = (int *)(param_1 + 0x54);
  local_30 = (float *)0x0;
  local_28 = -0x80000000;
  local_1c = param_1;
  if (0 < *(int *)(param_1 + 0x58)) {
    local_20 = *(int *)(param_1 + 0x58) << 4;
    local_30 = (float *)(**(code **)(PTR_vftable_018e9b8c + 0xc))(&local_20);
    local_28 = (int)(local_20 + (local_20 >> 0x1f & 0xfU)) >> 4;
  }
  local_2c = *(int *)(param_1 + 0x58);
  iVar7 = *piVar1;
  if (0 < local_2c) {
    pfVar9 = local_30;
    iVar12 = local_2c;
    do {
      pfVar8 = (float *)((iVar7 - (int)local_30) + (int)pfVar9);
      fVar17 = pfVar8[1];
      fVar18 = pfVar8[2];
      fVar19 = pfVar8[3];
      *pfVar9 = *pfVar8;
      pfVar9[1] = fVar17;
      pfVar9[2] = fVar18;
      pfVar9[3] = fVar19;
      pfVar9 = pfVar9 + 4;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  local_74[3] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar15 = *(uint *)(param_1 + 0x4c);
  local_74[0] = 0;
  local_74[1] = 0;
  local_74[2] = 0x80000000;
  local_64 = uVar15;
  if (uVar15 != 0) {
    pvVar6 = TlsGetValue(DAT_01f8fc4c);
    local_74[3] = *(int *)((int)pvVar6 + 0xc);
    uVar13 = uVar15 * 0x10 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar6 + 8) < (int)uVar13) ||
       (*(uint *)((int)pvVar6 + 0x10) < local_74[3] + uVar13)) {
      local_24 = local_74[3];
      local_74[3] = FUN_0100b780(uVar13);
    }
    else {
      *(uint *)((int)pvVar6 + 0xc) = local_74[3] + uVar13;
      local_24 = local_74[3];
    }
  }
  local_74[2] = uVar15 | 0x80000000;
  local_74[0] = local_74[3];
  FUN_01130a20(local_74);
  uVar15 = 0;
  local_24 = 0;
  if (0 < *(int *)(*(int *)(local_1c + 0x60) + 0x18)) {
    local_14 = local_30 + local_2c * 4;
    do {
      if (local_2c == 0) break;
      local_18 = (uint)*(byte *)(*(int *)(*(int *)(local_1c + 0x60) + 0x14) + local_24);
      if (2 < local_18) {
        iVar7 = *(int *)(*(int *)(local_1c + 0x60) + 8);
        uVar13 = (uint)*(ushort *)(iVar7 + uVar15 * 2);
        uVar10 = (uint)*(ushort *)(iVar7 + 2 + uVar15 * 2);
        uVar14 = (uint)*(ushort *)(iVar7 + 4 + uVar15 * 2);
        uVar15 = uVar15 + local_18;
        uVar2 = *(undefined8 *)(local_74[0] + uVar13 * 0x10);
        uStack_48 = *(undefined8 *)(local_74[0] + 8 + uVar13 * 0x10);
        uVar3 = *(undefined8 *)(local_74[0] + uVar10 * 0x10);
        uStack_38 = *(undefined8 *)(local_74[0] + 8 + uVar10 * 0x10);
        uVar4 = *(undefined8 *)(local_74[0] + uVar14 * 0x10);
        uStack_58 = *(undefined8 *)(local_74[0] + 8 + uVar14 * 0x10);
        local_40._0_4_ = (float)uVar3;
        local_40._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        local_50._0_4_ = (float)uVar2;
        local_50._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        local_60._0_4_ = (float)uVar4;
        local_60._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
        fVar20 = ((float)uStack_58 - (float)uStack_48) * (local_40._4_4_ - local_50._4_4_) -
                 (local_60._4_4_ - local_50._4_4_) * ((float)uStack_38 - (float)uStack_48);
        fVar21 = ((float)local_60 - (float)local_50) * ((float)uStack_38 - (float)uStack_48) -
                 ((float)uStack_58 - (float)uStack_48) * ((float)local_40 - (float)local_50);
        fVar22 = (local_60._4_4_ - local_50._4_4_) * ((float)local_40 - (float)local_50) -
                 ((float)local_60 - (float)local_50) * (local_40._4_4_ - local_50._4_4_);
        fVar17 = fVar20 * fVar20;
        fVar18 = fVar21 * fVar21;
        fVar19 = fVar22 * fVar22;
        fVar23 = fVar18 + fVar17 + fVar19;
        fVar24 = fVar18 + fVar17 + fVar19;
        fVar25 = fVar18 + fVar17 + fVar19;
        fVar19 = fVar18 + fVar17 + fVar19;
        auVar26._0_12_ = ZEXT812(0);
        auVar26._12_4_ = 0;
        uVar10 = -(uint)(0.0 - fVar23 < 0.0);
        uVar14 = -(uint)(0.0 - fVar24 < 0.0);
        uVar16 = -(uint)(0.0 - fVar25 < 0.0);
        auVar27._4_4_ = fVar24;
        auVar27._0_4_ = fVar23;
        auVar27._8_4_ = fVar25;
        auVar27._12_4_ = fVar19;
        auVar27 = rsqrtps(auVar26,auVar27);
        fVar17 = auVar27._0_4_;
        fVar18 = auVar27._4_4_;
        fVar28 = auVar27._8_4_;
        auVar5._4_4_ = uVar14;
        auVar5._0_4_ = uVar10;
        auVar5._8_4_ = uVar16;
        auVar5._12_4_ = -(uint)(0.0 - fVar19 < 0.0);
        iVar7 = movmskps(uVar13 * 2,auVar5);
        fVar17 = (float)((uint)((float)(~-(uint)(fVar23 <= 0.0) &
                                       (uint)((3.0 - fVar17 * fVar23 * fVar17) * fVar17 * 0.5)) *
                               fVar20) & uVar10 | ~uVar10 & (uint)fVar20);
        fVar18 = (float)((uint)((float)(~-(uint)(fVar24 <= 0.0) &
                                       (uint)((3.0 - fVar18 * fVar24 * fVar18) * fVar18 * 0.5)) *
                               fVar21) & uVar14 | ~uVar14 & (uint)fVar21);
        fVar19 = (float)((uint)((float)(~-(uint)(fVar25 <= 0.0) &
                                       (uint)((3.0 - fVar28 * fVar25 * fVar28) * fVar28 * 0.5)) *
                               fVar22) & uVar16 | ~uVar16 & (uint)fVar22);
        local_60 = uVar4;
        local_50 = uVar2;
        local_40 = uVar3;
        local_18 = uVar15;
        if (iVar7 == 0) {
          fVar17 = local_30[1];
          fVar18 = local_30[2];
          fVar19 = local_30[3];
          pfVar9 = (float *)(*(int *)(param_1 + 0x58) * 0x10 + *piVar1);
          *pfVar9 = *local_30;
          pfVar9[1] = fVar17;
          pfVar9[2] = fVar18;
          pfVar9[3] = fVar19;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        }
        else {
          iVar12 = 0;
          iVar7 = 1;
          fVar20 = fVar17 * *local_30 + fVar18 * local_30[1] + fVar19 * local_30[2];
          pfVar9 = local_30;
          if (1 < local_2c) {
            do {
              fVar21 = pfVar9[6] * fVar19 + pfVar9[5] * fVar18 + pfVar9[4] * fVar17;
              if (fVar20 < fVar21) {
                iVar12 = iVar7;
                fVar20 = fVar21;
              }
              iVar7 = iVar7 + 1;
              pfVar9 = pfVar9 + 4;
            } while (iVar7 < local_2c);
          }
          local_14 = local_14 + -4;
          pfVar9 = local_30 + iVar12 * 4;
          fVar17 = pfVar9[1];
          fVar18 = pfVar9[2];
          fVar19 = pfVar9[3];
          pfVar8 = local_30 + iVar12 * 4;
          pfVar11 = (float *)(*(int *)(param_1 + 0x58) * 0x10 + *piVar1);
          local_2c = local_2c + -1;
          *pfVar11 = *pfVar9;
          pfVar11[1] = fVar17;
          pfVar11[2] = fVar18;
          pfVar11[3] = fVar19;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
          if (local_2c != iVar12) {
            iVar7 = (int)local_14 - (int)pfVar8;
            iVar12 = 2;
            do {
              *pfVar8 = *(float *)(iVar7 + (int)pfVar8);
              pfVar8[1] = *(float *)(iVar7 + 4 + (int)pfVar8);
              pfVar8 = pfVar8 + 2;
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(*(int *)(local_1c + 0x60) + 0x18));
  }
  if (0 < local_2c) {
    FUN_010d7ae0(&PTR_vftable_018e9b94,*(undefined4 *)(local_1c + 0x58),local_30,local_2c);
  }
  uVar15 = local_64;
  iVar7 = local_74[3];
  if (local_74[3] == local_74[0]) {
    local_74[1] = 0;
  }
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  uVar15 = uVar15 * 0x10 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar6 + 8) < (int)uVar15) || (uVar15 + iVar7 != *(int *)((int)pvVar6 + 0xc)))
     || (*(int *)((int)pvVar6 + 0x14) == iVar7)) {
    FUN_0100b9b0(iVar7,uVar15);
  }
  else {
    *(int *)((int)pvVar6 + 0xc) = iVar7;
  }
  local_74[1] = 0;
  if (-1 < local_74[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_74[0],local_74[2] << 4);
  }
  local_74[0] = 0;
  local_74[2] = 0x80000000;
  if (-1 < local_28) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_30,local_28 << 4);
  }
  return;
}

// 01131470  FUN_01131470  size=59  [run]
void __thiscall FUN_01131470(int param_1,int param_2,char param_3)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_010060a0();
  }
  *(int *)(param_1 + 0x60) = param_2;
  if ((param_3 != '\0') && (param_2 != 0)) {
    FUN_01131090();
  }
  return;
}

// 011314B0  FUN_011314b0  size=148  [run]
void __thiscall FUN_011314b0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  piVar5 = param_2;
  uVar2 = *(uint *)(param_1 + 0x5c);
  if ((int)(uVar2 & 0x3fffffff) < param_2[1]) {
    if (-1 < (int)uVar2) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*(undefined4 *)(param_1 + 0x54),uVar2 << 4);
    }
    param_2 = (int *)(piVar5[1] << 4);
    uVar6 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *(undefined4 *)(param_1 + 0x54) = uVar6;
    *(int *)(param_1 + 0x5c) = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  }
  iVar8 = piVar5[1];
  puVar7 = *(undefined4 **)(param_1 + 0x54);
  *(int *)(param_1 + 0x58) = iVar8;
  if (0 < iVar8) {
    iVar9 = *piVar5 - (int)puVar7;
    do {
      puVar1 = (undefined4 *)(iVar9 + (int)puVar7);
      uVar6 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar6;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7 = puVar7 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_01131090();
  }
  return;
}

// 01131550  FUN_01131550  size=25  [run]
void __thiscall FUN_01131550(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = ~*param_3 & *param_2;
  param_1[1] = ~uVar1 & uVar4;
  param_1[2] = ~uVar2 & uVar5;
  param_1[3] = ~uVar3 & uVar6;
  return;
}

// 01131570  FUN_01131570  size=29  [run]
void __thiscall FUN_01131570(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = uVar1;
  return;
}

// 011315A0  FUN_011315a0  size=43  [run]
void __thiscall
FUN_011315a0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((int)param_1 + 0xc) = param_4;
  return;
}

// 01131600  FUN_01131600  size=32  [run]
void __thiscall FUN_01131600(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01131620  FUN_01131620  size=106  [run]
void FUN_01131620(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

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
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  fVar9 = *param_4;
  fVar10 = param_4[1];
  fVar11 = param_4[2];
  fVar12 = param_4[3];
  fVar13 = *param_5;
  fVar14 = param_5[1];
  fVar15 = param_5[2];
  fVar16 = param_5[3];
  *param_6 = param_2[3] * fVar4 + param_2[2] * fVar3 + param_2[1] * fVar2 + *param_2 * fVar1;
  param_6[1] = fVar8 * fVar4 + fVar7 * fVar3 + fVar6 * fVar2 + fVar5 * fVar1;
  param_6[2] = fVar12 * fVar4 + fVar11 * fVar3 + fVar10 * fVar2 + fVar9 * fVar1;
  param_6[3] = fVar16 * fVar4 + fVar15 * fVar3 + fVar14 * fVar2 + fVar13 * fVar1;
  return;
}

// 01131690  FUN_01131690  size=18  [run]
int __thiscall FUN_01131690(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 011316B0  FUN_011316b0  size=18  [run]
int __thiscall FUN_011316b0(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 011316D0  FUN_011316d0  size=19  [run]
void __thiscall FUN_011316d0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 4) == 0;
  return;
}

// 011316F0  FUN_011316f0  size=15  [run]
int __thiscall FUN_011316f0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 2;
}

// 01131700  FUN_01131700  size=115  [run]
void __thiscall
FUN_01131700(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_3 = *param_1;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  *param_4 = param_1[4];
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  *param_5 = param_1[8];
  param_5[1] = uVar1;
  param_5[2] = uVar2;
  param_5[3] = uVar3;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_6 = uVar1;
  param_6[1] = uVar2;
  param_6[2] = uVar3;
  param_6[3] = uVar4;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = *param_4;
  uVar9 = param_4[1];
  uVar10 = param_4[2];
  uVar11 = param_4[3];
  uVar12 = *param_5;
  uVar13 = param_5[1];
  uVar14 = param_5[2];
  uVar15 = param_5[3];
  *param_3 = *param_3;
  param_3[1] = uVar8;
  param_3[2] = uVar12;
  param_3[3] = uVar1;
  *param_4 = uVar5;
  param_4[1] = uVar9;
  param_4[2] = uVar13;
  param_4[3] = uVar2;
  *param_5 = uVar6;
  param_5[1] = uVar10;
  param_5[2] = uVar14;
  param_5[3] = uVar3;
  *param_6 = uVar7;
  param_6[1] = uVar11;
  param_6[2] = uVar15;
  param_6[3] = uVar4;
  return;
}

// 01131800  FUN_01131800  size=20  [run]
void __thiscall FUN_01131800(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = param_1[4] + *param_1;
  param_2[1] = fVar1 + fVar4;
  param_2[2] = fVar2 + fVar5;
  param_2[3] = fVar3 + fVar6;
  return;
}

// 01131820  FUN_01131820  size=53  [run]
void __thiscall FUN_01131820(int param_1,float param_2,float param_3,float param_4)

{
  param_4 = param_2 + param_3 + param_4;
  *(float *)(param_1 + 0x60) = param_2 + param_3;
  *(float *)(param_1 + 100) = param_4 * param_4;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}

// 01131860  FUN_01131860  size=23  [run]
void __thiscall FUN_01131860(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *param_2 = -(uint)(0.0 <= *param_1);
  param_2[1] = -(uint)(0.0 <= fVar1);
  param_2[2] = -(uint)(0.0 <= fVar2);
  param_2[3] = -(uint)(0.0 <= fVar3);
  return;
}

// 01131880  FUN_01131880  size=36  [run]
void __thiscall FUN_01131880(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar2 = *param_1;
  auVar1._0_8_ = auVar2._8_8_;
  auVar1._8_4_ = auVar2._0_4_;
  auVar1._12_4_ = auVar2._4_4_;
  auVar1 = minps(auVar1,auVar2);
  auVar2._4_4_ = auVar1._0_4_;
  auVar2._0_4_ = auVar1._4_4_;
  auVar2._8_4_ = auVar1._12_4_;
  auVar2._12_4_ = auVar1._8_4_;
  auVar2 = minps(auVar1,auVar2);
  *param_2 = auVar2;
  return;
}

// 011318C0  FUN_011318c0  size=32  [run]
void __thiscall FUN_011318c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01131DF0  FUN_01131df0  size=156  [run]
void FUN_01131df0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = *param_3;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar7 = ABS(fVar3 * *param_1) + ABS(fVar4 * param_1[4]) + ABS(fVar5 * param_1[8]) + *param_4;
  fVar8 = ABS(fVar3 * param_1[1]) + ABS(fVar4 * param_1[5]) + ABS(fVar5 * param_1[9]) + param_4[1];
  fVar9 = ABS(fVar3 * param_1[2]) + ABS(fVar4 * param_1[6]) + ABS(fVar5 * param_1[10]) + param_4[2];
  fVar10 = ABS(fVar3 * param_1[3]) + ABS(fVar4 * param_1[7]) +
           ABS(fVar5 * param_1[0xb]) + param_4[3];
  fVar3 = fVar6 * *param_1 + fVar1 * param_1[4] + fVar2 * param_1[8] + param_1[0xc];
  fVar4 = fVar6 * param_1[1] + fVar1 * param_1[5] + fVar2 * param_1[9] + param_1[0xd];
  fVar5 = fVar6 * param_1[2] + fVar1 * param_1[6] + fVar2 * param_1[10] + param_1[0xe];
  fVar6 = fVar6 * param_1[3] + fVar1 * param_1[7] + fVar2 * param_1[0xb] + param_1[0xf];
  param_5[4] = fVar3 + fVar7;
  param_5[5] = fVar4 + fVar8;
  param_5[6] = fVar5 + fVar9;
  param_5[7] = fVar6 + fVar10;
  *param_5 = -fVar7 + fVar3;
  param_5[1] = -fVar8 + fVar4;
  param_5[2] = -fVar9 + fVar5;
  param_5[3] = -fVar10 + fVar6;
  return;
}

// 01131E90  FUN_01131e90  size=55  [run]
void __thiscall FUN_01131e90(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x30);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01131ED0  FUN_01131ed0  size=134  [run]
int * __thiscall FUN_01131ed0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  
  piVar6 = param_2;
  uVar2 = param_1[2];
  if ((int)(uVar2 & 0x3fffffff) < param_2[1]) {
    if (-1 < (int)uVar2) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,uVar2 << 4);
    }
    param_2 = (int *)(piVar6[1] << 4);
    iVar7 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    *param_1 = iVar7;
    param_1[2] = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  }
  iVar7 = piVar6[1];
  puVar8 = (undefined4 *)*param_1;
  param_1[1] = iVar7;
  if (0 < iVar7) {
    iVar9 = *piVar6 - (int)puVar8;
    do {
      puVar1 = (undefined4 *)(iVar9 + (int)puVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar8 = puVar8 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return param_1;
}

// 01131F60  FUN_01131f60  size=60  [run]
void __fastcall FUN_01131f60(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01131FA0  FUN_01131fa0  size=56  [run]
void __thiscall FUN_01131fa0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x30);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01131FE0  FUN_01131fe0  size=60  [run]
void __fastcall FUN_01131fe0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011320A0  hkpConvexVerticesShape::vf40  size=8  [run]
undefined4 hkpConvexVerticesShape::vf40(void)

{
  return 0x70;
}

// 011320B0  hkpConvexVerticesShape::vf2C  size=4  [run]
undefined4 __fastcall hkpConvexVerticesShape::vf2C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}

// 011320C0  FUN_011320c0  size=38  [run]
void FUN_011320c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 011320F0  hkpConvexVerticesShape::vf00  size=52  [run]
int __thiscall hkpConvexVerticesShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_116();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01132140  hkpCollidableCollidableFilter::vf00  size=34  [run]
undefined4 * __thiscall hkpCollidableCollidableFilter::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01132180  hkpRayCollidableFilter::vf00  size=34  [run]
undefined4 * __thiscall hkpRayCollidableFilter::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 011321C0  hkpShapeCollectionFilter::vf0C  size=34  [run]
undefined4 * __thiscall hkpShapeCollectionFilter::vf0C(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01132200  hkpRayShapeCollectionFilter::vf04  size=34  [run]
undefined4 * __thiscall hkpRayShapeCollectionFilter::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 01132230  FUN_01132230  size=110  [run]
void __thiscall FUN_01132230(int param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  if ((((param_3 ^ param_4) & 0xffff0000) != 0) || ((param_3 & 0xffff0000) == 0)) {
    *param_2 = (*(uint *)(param_1 + 0x34 + (param_3 & 0x1f) * 4) & 1 << ((byte)param_4 & 0x1f)) != 0
    ;
    return;
  }
  if ((((param_4 >> 5 ^ param_3) & 0x3e0) != 0) && (((param_3 >> 5 ^ param_4) & 0x3e0) != 0)) {
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 011322A0  GroupFilterImplement::vf00  size=49  [run]
undefined4
GroupFilterImplement::vf00
          (undefined4 param_1,int param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_4 + 0x10))(param_5);
  FUN_01132230(param_1,*(undefined4 *)(param_2 + 0x20),uVar1);
  return param_1;
}

// 011322E0  FUN_011322e0  size=48  [run]
void __thiscall FUN_011322e0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
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

// 01132310  FUN_01132310  size=45  [run]
void __thiscall FUN_01132310(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x34 + param_2 * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
  puVar1 = (uint *)(param_1 + 0x34 + param_3 * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  return;
}

// 01132340  FUN_01132340  size=49  [run]
void __thiscall FUN_01132340(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x34 + param_2 * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_3 & 0x1f));
  puVar1 = (uint *)(param_1 + 0x34 + param_3 * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_2 & 0x1f));
  return;
}

// 01132380  FUN_01132380  size=58  [run]
void __thiscall FUN_01132380(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
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

// 011323C0  hkpGroupFilter::hkpGroupFilter  size=198  [run]
undefined4 * __fastcall hkpGroupFilter::hkpGroupFilter(undefined4 *param_1)

{
  hkpCollidableCollidableFilter::hkpCollidableCollidableFilter();
  *param_1 = vftable;
  param_1[2] = vftable;
  param_1[3] = vftable;
  param_1[4] = vftable;
  param_1[5] = vftable;
  param_1[8] = 2;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 0xffffffff;
  param_1[0x2c] = 0xffffffff;
  param_1[0xc] = 0;
  return param_1;
}

// 01132490  hkBaseObject::hkBaseObject_98  size=35  [run]
void __fastcall hkBaseObject::hkBaseObject_98(undefined4 *param_1)

{
  param_1[5] = hkpRayCollidableFilter::vftable;
  param_1[4] = hkpRayShapeCollectionFilter::vftable;
  param_1[3] = hkpShapeCollectionFilter::vftable;
  param_1[2] = hkpCollidableCollidableFilter::vftable;
  *param_1 = vftable;
  return;
}

// 011324C0  hkpGroupFilter::vf04  size=37  [run]
undefined4 hkpGroupFilter::vf04(undefined4 param_1,int param_2,int param_3)

{
  FUN_01132230(param_1,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_3 + 0x1c));
  return param_1;
}

// 011324F0  GroupFilterImplement::vf00  size=114  [run]
undefined4
GroupFilterImplement::vf00
          (undefined4 param_1,undefined4 param_2,int param_3,int param_4,int *param_5,int *param_6,
          undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_5 + 0x10))(param_7);
  if (iVar2 == -1) {
    iVar2 = *(int *)(param_3 + 0xc);
    while (iVar3 = iVar2, iVar3 != 0) {
      param_3 = iVar3;
      iVar2 = *(int *)(iVar3 + 0xc);
    }
    iVar2 = *(int *)(param_3 + 0x1c);
  }
  iVar3 = (**(code **)(*param_6 + 0x10))(param_8);
  if (iVar3 == -1) {
    iVar3 = *(int *)(param_4 + 0xc);
    while (iVar1 = iVar3, iVar1 != 0) {
      param_4 = iVar1;
      iVar3 = *(int *)(iVar1 + 0xc);
    }
    iVar3 = *(int *)(param_4 + 0x1c);
  }
  FUN_01132230(param_1,iVar2,iVar3);
  return param_1;
}

// 01132570  hkpGroupFilter::vf04  size=37  [run]
undefined4 hkpGroupFilter::vf04(undefined4 param_1,int param_2,int param_3)

{
  FUN_01132230(param_1,*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_3 + 0x1c));
  return param_1;
}

// 011325A0  GroupFilterImplement::vf04  size=254  [run]
undefined1 * __thiscall
GroupFilterImplement::vf04
          (undefined4 param_1,undefined1 *param_2,int *param_3,int *param_4,int param_5,int *param_6
          ,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  param_6 = (int *)(**(code **)(*param_6 + 0x10))(param_7,param_1);
  if (param_6 == (int *)0xffffffff) {
    iVar5 = *(int *)(param_5 + 0xc);
    while (iVar2 = iVar5, iVar2 != 0) {
      param_5 = iVar2;
      iVar5 = *(int *)(iVar2 + 0xc);
    }
    param_6 = *(int **)(param_5 + 0x1c);
  }
  if ((int *)param_4[3] == (int *)0x0) {
    iVar5 = param_4[7];
  }
  else {
    piVar4 = (int *)param_4[3];
    piVar6 = param_4;
    do {
      piVar3 = piVar4;
      uVar1 = *(uint *)(*param_3 + 0x110 + (uint)*(byte *)(*piVar3 + 8) * 4);
      if ((uVar1 & 0x40000) != 0) {
        iVar5 = (**(code **)(*(int *)(*piVar3 + 0x10) + 0x10))(piVar6[1]);
        goto LAB_01132649;
      }
      if ((uVar1 & 0x400000) != 0) {
        piVar4 = (int *)(**(code **)(*(int *)*piVar3 + 0x38))();
        iVar5 = (**(code **)(*piVar4 + 0x10))(piVar6[1]);
        goto LAB_01132649;
      }
      if ((uVar1 & 0x2000000) != 0) {
        piVar4 = (int *)param_4[3];
        while (piVar6 = piVar4, piVar6 != (int *)0x0) {
          param_4 = piVar6;
          piVar4 = (int *)piVar6[3];
        }
        iVar5 = param_4[7];
        goto LAB_01132649;
      }
      if ((uVar1 & 0x4000000) != 0) {
        *param_2 = 1;
        return param_2;
      }
      piVar4 = (int *)piVar3[3];
      piVar6 = piVar3;
    } while ((int *)piVar3[3] != (int *)0x0);
    iVar5 = piVar3[7];
  }
LAB_01132649:
  FUN_01132230(param_2,iVar5,param_6);
  return param_2;
}

// 011326D0  FUN_011326d0  size=12  [run]
void __thiscall FUN_011326d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01132700  FUN_01132700  size=31  [run]
uint __thiscall FUN_01132700(int param_1,int param_2,byte param_3)

{
  return *(uint *)(param_1 + 0x110 + param_2 * 4) & 1 << (param_3 & 0x1f);
}

// 01132750  FUN_01132750  size=16  [run]
void FUN_01132750(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0113275e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x38))();
  return;
}

// 01132760  hkpGroupFilter::vf04  size=8  [run]
void hkpGroupFilter::vf04(void)

{
  vf00();
  return;
}

// 01132770  hkpGroupFilter::vf00  size=8  [run]
void hkpGroupFilter::vf00(void)

{
  vf00();
  return;
}

// 01132780  hkpGroupFilter::vf00  size=8  [run]
void hkpGroupFilter::vf00(void)

{
  vf00();
  return;
}

// 01132790  hkpGroupFilter::vf0C  size=8  [run]
void hkpGroupFilter::vf0C(void)

{
  vf00();
  return;
}

// 011327A0  FUN_011327a0  size=38  [run]
void FUN_011327a0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 011327D0  hkpGroupFilter::vf00  size=52  [run]
int __thiscall hkpGroupFilter::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_98();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01132850  GroupFilterImplement::vf08  size=10  [run]
undefined4 GroupFilterImplement::vf08(void)

{
  undefined4 in_stack_0000001c;
  
  return in_stack_0000001c;
}

// 01132860  hkpCollidableCollidableFilter::hkpCollidableCollidableFilter  size=81  [run]
void __fastcall hkpCollidableCollidableFilter::hkpCollidableCollidableFilter(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = vftable;
  param_1[3] = hkpShapeCollectionFilter::vftable;
  param_1[4] = hkpRayShapeCollectionFilter::vftable;
  param_1[5] = hkpRayCollidableFilter::vftable;
  *param_1 = hkpCollisionFilter::vftable;
  param_1[2] = hkpCollisionFilter::vftable;
  param_1[3] = hkpCollisionFilter::vftable;
  param_1[4] = hkpCollisionFilter::vftable;
  param_1[5] = hkpCollisionFilter::vftable;
  param_1[8] = 0;
  return;
}

// 011328C0  FUN_011328c0  size=14  [run]
void __thiscall FUN_011328c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 011328D0  hkpCollisionFilter::vf00  size=8  [run]
void hkpCollisionFilter::vf00(void)

{
  vf00();
  return;
}

// 011328E0  hkpCollisionFilter::vf0C  size=8  [run]
void hkpCollisionFilter::vf0C(void)

{
  vf00();
  return;
}

// 011328F0  hkpCollisionFilter::vf04  size=8  [run]
void hkpCollisionFilter::vf04(void)

{
  vf00();
  return;
}

// 01132900  hkpCollisionFilter::vf00  size=8  [run]
void hkpCollisionFilter::vf00(void)

{
  vf00();
  return;
}

// 01132910  FUN_01132910  size=38  [run]
void FUN_01132910(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01132940  hkpCollisionFilter::vf00  size=81  [run]
undefined4 * __thiscall hkpCollisionFilter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[5] = hkpRayCollidableFilter::vftable;
  param_1[4] = hkpRayShapeCollectionFilter::vftable;
  param_1[3] = hkpShapeCollectionFilter::vftable;
  param_1[2] = hkpCollidableCollidableFilter::vftable;
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 011329B0  hkpCompressedMeshShape::vf08  size=10  [run]
void __fastcall hkpCompressedMeshShape::vf08(int *param_1)

{
  (**(code **)(*param_1 + 0xc))(0xffffffff);
  return;
}

// 011329C0  hkpCompressedMeshShape::vf40  size=8  [run]
undefined4 hkpCompressedMeshShape::vf40(void)

{
  return 0xe0;
}

// 011329D0  FUN_011329d0  size=52  [run]
void __thiscall FUN_011329d0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = param_2 + 1;
    *(int *)(param_1 + 0x18) = param_2;
    *(int *)(param_1 + 0x20) = (1 << ((byte)(param_2 + 1) & 0x1f)) + -1;
    *(int *)(param_1 + 0x24) = (1 << ((byte)param_2 & 0x1f)) + -1;
  }
  return;
}

// 01132A10  FUN_01132a10  size=169  [run]
uint __thiscall FUN_01132a10(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  *param_3 = 0;
  uVar1 = 0;
  if (-1 < param_2) {
    iVar3 = *(int *)(param_1 + 0x2c);
    uVar6 = param_2 + 1;
    iVar4 = 0;
    uVar5 = 0;
    if (iVar3 != 0) {
      puVar2 = *(ushort **)(param_1 + 0x28);
      for (uVar1 = (uint)*puVar2; (int)uVar1 <= (int)uVar6; uVar1 = uVar1 + *puVar2) {
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 1;
        if (iVar3 <= iVar4) goto LAB_01132a61;
        uVar5 = uVar1;
      }
    }
    if (iVar4 < iVar3) {
      if ((int)uVar6 < (int)(uVar1 - 2)) {
        *param_3 = uVar6 - uVar5 & 1;
        uVar1 = uVar6;
      }
    }
    else {
LAB_01132a61:
      for (iVar3 = uVar6 - uVar1; uVar1 = uVar6, iVar3 % 3 != 0; iVar3 = iVar3 + 1) {
        uVar6 = uVar6 + 1;
      }
    }
    if (*(int *)(param_1 + 0x20) <= (int)uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

// 01132AC0  hkpCompressedMeshShape::vf0C  size=490  [run]
uint __thiscall hkpCompressedMeshShape::vf0C(int *param_1,uint param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  undefined1 local_240 [512];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0xffffffff;
  }
  else {
    uVar3 = param_2 >> ((byte)param_1[3] & 0x1f);
    param_2 = param_1[5] & param_2;
    if (uVar3 != 0) goto LAB_01132b77;
  }
  local_14 = param_2 + 1;
  if ((int)local_14 < param_1[0x18]) {
    local_18 = local_14 * 0x10;
    do {
      iVar1 = param_1[0x14];
      puVar2 = (ushort *)(param_1[0x17] + local_18);
      local_40 = DAT_01b2154c;
      uStack_3c = DAT_01b2154c;
      uStack_38 = DAT_01b2154c;
      uStack_34 = DAT_01b2154c;
      iVar1 = FUN_0112b050((uint)*puVar2 * 0x10 + iVar1,
                           (uint)*(ushort *)(param_1[0x17] + 2 + local_18) * 0x10 + iVar1,
                           (uint)puVar2[2] * 0x10 + iVar1,&local_40);
      if (iVar1 == 0) {
        return local_14;
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 0x10;
    } while ((int)local_14 < param_1[0x18]);
  }
  uVar3 = 1;
  param_2 = 0xffffffff;
LAB_01132b77:
  local_24 = (1 << (0x20U - (char)param_1[3] & 0x1f)) - 1;
  if ((uVar3 != local_24) && (local_18 = uVar3 - 1, local_18 < param_1[0x1b])) {
    do {
      local_20 = local_18 * 0x50 + param_1[0x1a];
      local_14 = 0;
      while( true ) {
        if (*(short *)(local_20 + 0x44) == -1) {
          local_1c = FUN_01132a10(param_2,&local_14);
        }
        else {
          local_1c = FUN_01132a10(param_2,&local_14);
        }
        if (local_1c == 0xffffffff) break;
        uVar3 = (local_14 & 1) << ((byte)param_1[2] & 0x1f) |
                local_18 + 1 << ((byte)param_1[3] & 0x1f) | param_1[4] & local_1c;
        iVar1 = (**(code **)(*param_1 + 0x14))(uVar3,local_240);
        local_40 = DAT_01b2154c;
        uStack_3c = DAT_01b2154c;
        uStack_38 = DAT_01b2154c;
        uStack_34 = DAT_01b2154c;
        iVar1 = FUN_0112b050(iVar1 + 0x20,iVar1 + 0x30,iVar1 + 0x40,&local_40);
        param_2 = local_1c;
        if (iVar1 == 0) {
          return uVar3;
        }
      }
      local_18 = local_18 + 1;
      param_2 = 0xffffffff;
    } while (local_18 < param_1[0x1b]);
  }
  if (param_1[0x1e] <= (int)(param_2 + 1)) {
    return 0xffffffff;
  }
  return local_24 << ((byte)param_1[3] & 0x1f) | param_2 + 1;
}

// 01132CB0  FUN_01132cb0  size=210  [run]
void __thiscall
FUN_01132cb0(float *param_1,int param_2,int param_3,int param_4,float param_5,float *param_6,
            float *param_7,float *param_8)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = param_1[4];
  uVar1 = *(ushort *)((int)fVar3 + 2 + param_2 * 2);
  uVar2 = *(ushort *)((int)fVar3 + 4 + param_2 * 2);
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_6 = (float)*(ushort *)((int)fVar3 + param_2 * 2) * param_5 + *param_1;
  param_6[1] = (float)uVar1 * param_5 + fVar4;
  param_6[2] = (float)uVar2 * param_5 + fVar5;
  param_6[3] = param_5 * 0.0 + fVar6;
  fVar3 = param_1[4];
  uVar1 = *(ushort *)((int)fVar3 + 2 + param_3 * 2);
  uVar2 = *(ushort *)((int)fVar3 + 4 + param_3 * 2);
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_7 = (float)*(ushort *)((int)fVar3 + param_3 * 2) * param_5 + *param_1;
  param_7[1] = (float)uVar1 * param_5 + fVar4;
  param_7[2] = (float)uVar2 * param_5 + fVar5;
  param_7[3] = param_5 * 0.0 + fVar6;
  fVar3 = param_1[4];
  uVar1 = *(ushort *)((int)fVar3 + 2 + param_4 * 2);
  uVar2 = *(ushort *)((int)fVar3 + 4 + param_4 * 2);
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_8 = (float)*(ushort *)((int)fVar3 + param_4 * 2) * param_5 + *param_1;
  param_8[1] = (float)uVar1 * param_5 + fVar4;
  param_8[2] = (float)uVar2 * param_5 + fVar5;
  param_8[3] = param_5 * 0.0 + fVar6;
  return;
}

// 01132D90  FUN_01132d90  size=132  [run]
int __fastcall FUN_01132d90(int param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_c;
  int local_8;
  
  iVar5 = 0;
  iVar6 = 0;
  iVar7 = 0;
  local_8 = 0;
  local_c = 0;
  if (1 < *(int *)(param_1 + 0x2c)) {
    puVar3 = *(ushort **)(param_1 + 0x28);
    iVar4 = (*(int *)(param_1 + 0x2c) - 2U >> 1) + 1;
    iVar5 = iVar4 * 2;
    do {
      puVar1 = puVar3 + 1;
      uVar2 = *puVar3;
      local_8 = local_8 + (uint)uVar2;
      iVar6 = iVar6 + (uint)*puVar1;
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
      iVar7 = iVar7 + -4 + (uint)*puVar1 + (uint)uVar2;
    } while (iVar4 != 0);
  }
  if (iVar5 < *(int *)(param_1 + 0x2c)) {
    local_c = (uint)*(ushort *)(*(int *)(param_1 + 0x28) + iVar5 * 2);
    iVar7 = iVar7 + -2 + local_c;
  }
  return (int)(((*(int *)(param_1 + 0x20) - iVar6) - local_8) - local_c) / 3 + iVar7;
}

// 01132E20  FUN_01132e20  size=156  [run]
undefined4 __thiscall FUN_01132e20(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x20) & param_2;
  uVar1 = param_2 >> ((byte)*(undefined4 *)(param_1 + 0x1c) & 0x1f);
  uVar3 = uVar2 & *(uint *)(param_1 + 0x24);
  uVar2 = (int)uVar2 >> ((byte)*(undefined4 *)(param_1 + 0x18) & 0x1f);
  if (uVar1 == 0) {
    if (uVar2 != 0) {
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x7c) <= (int)(uVar1 - 1)) {
      return 2;
    }
    uVar1 = FUN_01132a10(uVar3 - 1,&param_2);
    if (uVar1 != uVar3) {
      return 3;
    }
    if (param_2 != uVar2) {
      return 4;
    }
  }
  return 0;
}

// 01132EC0  hkpCompressedMeshShape::vf48  size=99  [run]
void __thiscall hkpCompressedMeshShape::vf48(int param_1,uint param_2,undefined2 param_3)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = param_2 >> ((byte)*(undefined4 *)(param_1 + 0x1c) & 0x1f);
  if (uVar2 == 0) {
    *(undefined2 *)(*(int *)(param_1 + 0x6c) + 0xc + (*(uint *)(param_1 + 0x20) & param_2) * 0x10) =
         param_3;
    return;
  }
  uVar2 = uVar2 - 1;
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x78) + 0x44 + uVar2 * 0x50);
  if (uVar1 != 0xffff) {
    uVar2 = (uint)uVar1;
  }
  *(undefined2 *)
   (*(int *)(*(int *)(param_1 + 0x78) + 0x34 + uVar2 * 0x50) +
   (*(uint *)(param_1 + 0x24) & param_2) * 2) = param_3;
  return;
}

// 01132F30  FUN_01132f30  size=69  [run]
void __thiscall
FUN_01132f30(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  FUN_01132cb0((uint)*(ushort *)(iVar1 + param_2 * 2) * 3,
               (uint)*(ushort *)(iVar1 + 2 + param_2 * 2) * 3,
               (uint)*(ushort *)(iVar1 + 4 + param_2 * 2) * 3,param_3,param_4,param_5,param_6);
  return;
}

// 01132F80  FUN_01132f80  size=288  [run]
int __thiscall FUN_01132f80(int param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  if (iVar1 == 0) {
    return 0;
  }
  bVar2 = (byte)*(undefined4 *)(param_1 + 0x1c);
  uVar4 = param_2 >> (bVar2 & 0x1f);
  param_2 = *(uint *)(param_1 + 0x24) & param_2;
  if (uVar4 != 0) {
    if (uVar4 != (1 << (0x20 - bVar2 & 0x1f)) - 1U) {
      iVar3 = *(int *)(param_1 + 0x78) + -0x50 + uVar4 * 0x50;
      if (*(ushort *)(iVar3 + 0x44) != 0xffff) {
        iVar3 = (uint)*(ushort *)(iVar3 + 0x44) * 0x50 + *(int *)(param_1 + 0x78);
      }
      iVar3 = *(int *)(iVar3 + 0x40);
      switch(*(undefined1 *)(param_1 + 0x2d)) {
      case 1:
        return (uint)*(ushort *)(param_1 + 200) * iVar3 + iVar1;
      case 2:
        return (uint)*(ushort *)(param_1 + 200) *
               (uint)*(byte *)(*(int *)(param_1 + 0x48) + iVar3 + param_2) + iVar1;
      case 3:
        return (uint)*(ushort *)(param_1 + 200) *
               (uint)*(ushort *)(*(int *)(param_1 + 0x3c) + (iVar3 + param_2) * 2) + iVar1;
      case 4:
        return (uint)*(ushort *)(param_1 + 200) *
               *(int *)(*(int *)(param_1 + 0x30) + (iVar3 + param_2) * 4) + iVar1;
      }
    }
    return 0;
  }
  return (uint)*(ushort *)(param_1 + 200) * *(int *)(*(int *)(param_1 + 0x6c) + 8 + param_2 * 0x10)
         + iVar1;
}

// 011330B0  hkpCompressedMeshShape::vf10  size=40  [run]
undefined4 __thiscall hkpCompressedMeshShape::vf10(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_01132f80(param_2);
  if (puVar1 != (undefined4 *)0x0) {
    return *puVar1;
  }
  return *(undefined4 *)(param_1 + 0xb0);
}

// 011330E0  hkpCompressedMeshShape::vf10  size=224  [run]
void __thiscall
hkpCompressedMeshShape::vf10(int param_1,float *param_2,float param_3,float *param_4)

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
  
  fVar7 = (*(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0xb0)) * 0.5;
  fVar8 = (*(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0xb4)) * 0.5;
  fVar9 = (*(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xb8)) * 0.5;
  fVar1 = (*(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0xa0)) * 0.5;
  fVar3 = (*(float *)(param_1 + 0xb4) - *(float *)(param_1 + 0xa4)) * 0.5;
  fVar5 = (*(float *)(param_1 + 0xb8) - *(float *)(param_1 + 0xa8)) * 0.5;
  fVar2 = fVar7 * *param_2 + fVar8 * param_2[4] + fVar9 * param_2[8] + param_2[0xc];
  fVar4 = fVar7 * param_2[1] + fVar8 * param_2[5] + fVar9 * param_2[9] + param_2[0xd];
  fVar6 = fVar7 * param_2[2] + fVar8 * param_2[6] + fVar9 * param_2[10] + param_2[0xe];
  fVar7 = fVar7 * param_2[3] + fVar8 * param_2[7] + fVar9 * param_2[0xb] + param_2[0xf];
  fVar8 = ABS(fVar1 * *param_2) + ABS(fVar3 * param_2[4]) + ABS(fVar5 * param_2[8]) + param_3;
  fVar9 = ABS(fVar1 * param_2[1]) + ABS(fVar3 * param_2[5]) + ABS(fVar5 * param_2[9]) + param_3;
  fVar10 = ABS(fVar1 * param_2[2]) + ABS(fVar3 * param_2[6]) + ABS(fVar5 * param_2[10]) + param_3;
  fVar1 = ABS(fVar1 * param_2[3]) + ABS(fVar3 * param_2[7]) + ABS(fVar5 * param_2[0xb]) + param_3;
  param_4[4] = fVar2 + fVar8;
  param_4[5] = fVar4 + fVar9;
  param_4[6] = fVar6 + fVar10;
  param_4[7] = fVar7 + fVar1;
  *param_4 = -fVar8 + fVar2;
  param_4[1] = -fVar9 + fVar4;
  param_4[2] = -fVar10 + fVar6;
  param_4[3] = -fVar1 + fVar7;
  return;
}

// 011331C0  hkpCompressedMeshShape::vf14  size=1334  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall hkpCompressedMeshShape::vf14(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  LPVOID pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  ushort *puVar10;
  undefined1 (*pauVar11) [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_f0 [16];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 local_b0 [8];
  float fStack_a8;
  float fStack_a4;
  undefined1 local_a0 [16];
  int local_8c;
  float *local_88;
  int local_84;
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
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 *local_2c;
  int local_28;
  undefined4 *local_24;
  uint local_20;
  int local_1c;
  undefined *local_18;
  undefined4 *local_14;
  
  uVar3 = DAT_01b20754;
  uVar8 = *(uint *)(param_1 + 0x10) & param_2;
  param_2 = param_2 >> ((byte)*(undefined4 *)(param_1 + 0xc) & 0x1f);
  local_20 = (int)uVar8 >> ((byte)*(undefined4 *)(param_1 + 8) & 0x1f);
  if (param_2 == (1 << (0x20U - (char)*(undefined4 *)(param_1 + 0xc) & 0x1f)) - 1U) {
    local_80 = CONCAT44(uRam018e9ca4,_DAT_018e9ca0);
    uStack_78 = CONCAT44(uRam018e9cac,uRam018e9ca8);
    local_70 = CONCAT44(uRam018e9cb4,_DAT_018e9cb0);
    uStack_68 = CONCAT44(uRam018e9cbc,uRam018e9cb8);
    local_60 = CONCAT44(uRam018e9cc4,_DAT_018e9cc0);
    uStack_58 = CONCAT44(uRam018e9ccc,uRam018e9cc8);
    if (param_3 == (undefined4 *)0x0) {
      local_24 = (undefined4 *)0x0;
    }
    else {
      local_24 = (undefined4 *)
                 hkpConvexVerticesShape::hkpConvexVerticesShape_3(*(undefined4 *)(param_1 + 0x18));
    }
    local_1c = uVar8 * 0x20 + *(int *)(param_1 + 0x74);
    if (*(ushort *)(local_1c + 0x1e) != 0xffff) {
      puVar4 = (undefined8 *)((uint)*(ushort *)(local_1c + 0x1e) * 0x30 + *(int *)(param_1 + 0x44));
      local_80 = *puVar4;
      uStack_78 = puVar4[1];
      local_70 = puVar4[2];
      uStack_68 = puVar4[3];
      local_60 = puVar4[4];
      uStack_58 = puVar4[5];
    }
    if (*(ushort *)(local_1c + 0x1c) != 0xffff) {
      uVar8 = (uint)*(ushort *)(local_1c + 0x1c);
    }
    pfVar9 = (float *)(uVar8 * 0x20 + *(int *)(param_1 + 0x74));
    local_88 = pfVar9;
    pvVar5 = TlsGetValue(DAT_01f8fc5c);
    local_40 = *(float *)(param_1 + 0x80);
    local_20 = (int)pfVar9[5] / 3;
    puVar10 = (ushort *)pfVar9[4];
    local_84 = (int)(local_20 + 3) >> 2;
    local_18 = &DAT_0209c340 + (int)pvVar5 * 0x180;
    local_a0._8_4_ = 0xff7fffee;
    local_a0._0_8_ = 0xff7fffeeff7fffee;
    local_a0._12_4_ = 0xff7fffee;
    fStack_a8 = 3.40282e+38;
    local_b0 = (undefined1  [8])0x7f7fffee7f7fffee;
    fStack_a4 = 3.40282e+38;
    local_14 = (undefined4 *)0x0;
    fVar12 = 3.40282e+38;
    fVar13 = 3.40282e+38;
    fVar14 = 3.40282e+38;
    fVar15 = 3.40282e+38;
    if (0 < local_84) {
      local_8c = local_20 + -1;
      local_2c = (undefined4 *)(&DAT_0209c360 + (int)pvVar5 * 0x180);
      fStack_3c = local_40;
      fStack_38 = local_40;
      fStack_34 = local_40;
      local_1c = local_84;
      do {
        pauVar11 = &local_f0;
        local_28 = 4;
        do {
          local_50 = (float)*puVar10 * local_40 + *local_88;
          fStack_4c = (float)puVar10[1] * fStack_3c + local_88[1];
          fStack_48 = (float)puVar10[2] * fStack_38 + local_88[2];
          fStack_44 = fStack_34 * 0.0 + local_88[3];
          FUN_01007150(&local_80,&local_50);
          _local_b0 = minps(_local_b0,*pauVar11);
          local_a0 = maxps(local_a0,*pauVar11);
          if ((int)local_14 < local_8c) {
            local_14 = (undefined4 *)((int)local_14 + 1);
            puVar10 = puVar10 + 3;
          }
          pauVar11 = pauVar11 + 1;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
        local_2c[-8] = local_f0._0_4_;
        local_2c[-7] = local_e0;
        local_2c[-6] = local_d0;
        local_2c[-5] = local_c0;
        local_2c[-4] = local_f0._4_4_;
        local_2c[-3] = uStack_dc;
        local_2c[-2] = uStack_cc;
        local_2c[-1] = uStack_bc;
        *local_2c = local_f0._8_4_;
        local_2c[1] = uStack_d8;
        local_2c[2] = uStack_c8;
        local_2c[3] = uStack_b8;
        local_2c = local_2c + 0xc;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
      fVar12 = (float)local_b0._0_4_;
      fVar13 = (float)local_b0._4_4_;
      fVar14 = fStack_a8;
      fVar15 = fStack_a4;
    }
    local_24[0x10] = local_18;
    local_24[0x11] = local_84;
    local_24[0x12] = 8;
    local_24[0x13] = local_20;
    *(undefined1 *)(local_24 + 0x14) = 1;
    local_24[8] = (local_a0._0_4_ - fVar12) * 0.5;
    local_24[9] = (local_a0._4_4_ - fVar13) * 0.5;
    local_24[10] = (local_a0._8_4_ - fVar14) * 0.5;
    local_24[0xb] = (local_a0._12_4_ - fVar15) * 0.5;
    local_24[0xc] = (local_a0._0_4_ + fVar12) * 0.5;
    local_24[0xd] = (local_a0._4_4_ + fVar13) * 0.5;
    local_24[0xe] = (local_a0._8_4_ + fVar14) * 0.5;
    local_24[0xf] = (local_a0._12_4_ + fVar15) * 0.5;
    return local_24;
  }
  if (param_3 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)((int)param_3 + 6) = 1;
    *(undefined2 *)(param_3 + 2) = 0x402;
    param_3[4] = uVar3;
    *(undefined2 *)((int)param_3 + 10) = 0;
    param_3[3] = 0;
    *param_3 = hkpTriangleShape::vftable;
    param_3[0x14] = 0;
    param_3[0x15] = 0;
    param_3[0x16] = 0;
    param_3[0x17] = 0;
    param_3[5] = 0x60000;
    local_14 = param_3;
  }
  uVar2 = *(undefined1 *)(param_1 + 0x1c);
  local_14[4] = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)((int)local_14 + 0x16) = uVar2;
  if (param_2 == 0) {
    puVar10 = (ushort *)(uVar8 * 0x10 + *(int *)(param_1 + 0x5c));
    local_18 = (undefined *)(uint)puVar10[6];
    iVar6 = *(int *)(param_1 + 0x50);
    local_a0 = *(undefined1 (*) [16])(iVar6 + (uint)*puVar10 * 0x10);
    pfVar9 = (float *)(iVar6 + (uint)puVar10[1] * 0x10);
    local_50 = *pfVar9;
    fStack_4c = pfVar9[1];
    fStack_48 = pfVar9[2];
    fStack_44 = pfVar9[3];
    pfVar9 = (float *)(iVar6 + (uint)puVar10[2] * 0x10);
    local_40 = *pfVar9;
    fStack_3c = pfVar9[1];
    fStack_38 = pfVar9[2];
    fStack_34 = pfVar9[3];
    if (puVar10[7] != 0xffff) {
      iVar6 = (uint)puVar10[7] * 0x30;
      local_80 = *(undefined8 *)(iVar6 + *(int *)(param_1 + 0x44));
      iVar6 = iVar6 + *(int *)(param_1 + 0x44);
      uStack_78 = *(undefined8 *)(iVar6 + 8);
      local_70 = *(undefined8 *)(iVar6 + 0x10);
      uStack_68 = *(undefined8 *)(iVar6 + 0x18);
      local_60 = *(undefined8 *)(iVar6 + 0x20);
      uStack_58 = *(undefined8 *)(iVar6 + 0x28);
      FUN_01007150(&local_80,local_a0);
      FUN_01007150(&local_80,&local_50);
      FUN_01007150(&local_80,&local_40);
    }
    *(undefined2 *)(local_14 + 5) = local_18._0_2_;
    local_14[8] = local_a0._0_4_;
    local_14[9] = local_a0._4_4_;
    local_14[10] = local_a0._8_4_;
    local_14[0xb] = local_a0._12_4_;
    local_14[0xc] = local_50;
    local_14[0xd] = fStack_4c;
    local_14[0xe] = fStack_48;
    local_14[0xf] = fStack_44;
    local_14[0x10] = local_40;
    local_14[0x11] = fStack_3c;
    local_14[0x12] = fStack_38;
    local_14[0x13] = fStack_34;
    return local_14;
  }
  uVar8 = uVar8 & *(uint *)(param_1 + 0x14);
  local_80 = 0;
  uStack_78 = 0;
  local_18 = (undefined *)(*(int *)(param_1 + 0x68) + (param_2 - 1) * 0x50);
  local_70 = 0;
  uStack_68 = 0x3f80000000000000;
  local_60 = 0x3f8000003f800000;
  uStack_58 = 0x3f8000003f800000;
  if (*(ushort *)((int)local_18 + 0x46) != 0xffff) {
    puVar4 = (undefined8 *)
             ((uint)*(ushort *)((int)local_18 + 0x46) * 0x30 + *(int *)(param_1 + 0x44));
    local_80 = *puVar4;
    uStack_78 = puVar4[1];
    local_70 = puVar4[2];
    uStack_68 = puVar4[3];
    local_60 = puVar4[4];
    uStack_58 = puVar4[5];
  }
  uVar7 = param_2 - 1;
  if (*(ushort *)((int)local_18 + 0x44) != 0xffff) {
    uVar7 = (uint)*(ushort *)((int)local_18 + 0x44);
  }
  iVar6 = uVar7 * 0x50 + *(int *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0x1c) != '\x06') {
    *(undefined2 *)(local_14 + 5) = *(undefined2 *)(*(int *)(iVar6 + 0x34) + uVar8 * 2);
  }
  iVar6 = *(int *)(iVar6 + 0x1c);
  FUN_01132cb0((uint)*(ushort *)(iVar6 + uVar8 * 2) * 3,(uint)*(ushort *)(iVar6 + 2 + uVar8 * 2) * 3
               ,(uint)*(ushort *)(iVar6 + 4 + uVar8 * 2) * 3,*(undefined4 *)(param_1 + 0x80),
               &local_40,&local_50,local_a0);
  FUN_01007150(&local_80,&local_40);
  FUN_01007150(&local_80,&local_50);
  FUN_01007150(&local_80,local_a0);
  pfVar9 = (float *)(local_14 + (local_20 + 1) * 8);
  *pfVar9 = local_40;
  pfVar9[1] = fStack_3c;
  pfVar9[2] = fStack_38;
  pfVar9[3] = fStack_34;
  local_14[0xc] = local_50;
  local_14[0xd] = fStack_4c;
  local_14[0xe] = fStack_48;
  local_14[0xf] = fStack_44;
  puVar1 = local_14 + ((local_20 ^ 1) + 1) * 8;
  *puVar1 = local_a0._0_4_;
  puVar1[1] = local_a0._4_4_;
  puVar1[2] = local_a0._8_4_;
  puVar1[3] = local_a0._12_4_;
  return local_14;
}

// 01133700  hkpCompressedMeshShape::vf44  size=112  [run]
void __thiscall hkpCompressedMeshShape::vf44(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_8;
  
  *(char *)(param_1 + 0x2c) = (char)param_2;
  if ((param_2 != 6) && (local_8 = 0, 0 < *(int *)(param_1 + 0x7c))) {
    param_2 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 0x20 + param_2);
      iVar1 = *(int *)(param_1 + 0x78) + 0x34 + param_2;
      uVar3 = *(uint *)(iVar1 + 8) & 0x3fffffff;
      if ((int)uVar3 < iVar2) {
        iVar4 = uVar3 * 2;
        if (iVar4 <= iVar2) {
          iVar4 = iVar2;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,iVar1,iVar4,2);
      }
      param_2 = param_2 + 0x50;
      local_8 = local_8 + 1;
      *(int *)(iVar1 + 4) = iVar2;
    } while (local_8 < *(int *)(param_1 + 0x7c));
  }
  return;
}

// 01133B90  hkpCompressedMeshShape::hkpCompressedMeshShape  size=227  [run]
undefined4 * __thiscall
hkpCompressedMeshShape::hkpCompressedMeshShape(undefined4 *param_1,int param_2,undefined4 param_3)

{
  hkpShapeContainer::hkpShapeContainer_9(0xf,6);
  param_1[6] = param_2;
  *param_1 = vftable;
  param_1[4] = vftable;
  param_1[10] = param_3;
  param_1[7] = param_2 + 1;
  param_1[8] = (1 << ((byte)(param_2 + 1) & 0x1f)) + -1;
  param_1[9] = (1 << ((byte)param_2 & 0x1f)) + -1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x80000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0x80000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x80000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x80000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x80000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x80000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0x80000000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x80000000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined2 *)((int)param_1 + 0xca) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0x80000000;
  *(undefined2 *)(param_1 + 0x32) = 4;
  *(undefined1 *)(param_1 + 0xb) = 6;
  return param_1;
}

// 01133C80  hkpCompressedMeshShape::hkpCompressedMeshShape_2  size=82  [run]
undefined4 * __thiscall
hkpCompressedMeshShape::hkpCompressedMeshShape_2(undefined4 *param_1,int param_2)

{
  hkpShapeContainer::hkpShapeContainer_10(param_2);
  *param_1 = vftable;
  param_1[4] = vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 0xf;
    *(undefined1 *)((int)param_1 + 0x15) = 6;
    if (param_1[0x34] != 0) {
      param_1[0x31] = param_1[0x33];
      *(undefined2 *)(param_1 + 0x32) = 8;
    }
  }
  return param_1;
}

// 01133CE0  FUN_01133ce0  size=8  [run]
undefined4 FUN_01133ce0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01133CF0  FUN_01133cf0  size=8  [run]
undefined4 FUN_01133cf0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01133D10  FUN_01133d10  size=12  [run]
void __thiscall FUN_01133d10(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 01133D30  FUN_01133d30  size=20  [run]
void __thiscall FUN_01133d30(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 != param_3;
  return;
}

// 01133DC0  FUN_01133dc0  size=15  [run]
int __thiscall FUN_01133dc0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01133E00  FUN_01133e00  size=18  [run]
int __thiscall FUN_01133e00(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 01133E20  FUN_01133e20  size=18  [run]
int __thiscall FUN_01133e20(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 01133E80  FUN_01133e80  size=15  [run]
int __thiscall FUN_01133e80(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 01133E90  FUN_01133e90  size=15  [run]
int __thiscall FUN_01133e90(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 01133EF0  FUN_01133ef0  size=18  [run]
int __thiscall FUN_01133ef0(int *param_1,int param_2)

{
  return param_2 * 0x50 + *param_1;
}

// 01133F10  FUN_01133f10  size=18  [run]
int __thiscall FUN_01133f10(int *param_1,int param_2)

{
  return param_2 * 0x50 + *param_1;
}

// 01133F80  FUN_01133f80  size=15  [run]
int __thiscall FUN_01133f80(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 01133F90  FUN_01133f90  size=15  [run]
int __thiscall FUN_01133f90(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 01134000  FUN_01134000  size=11  [run]
int FUN_01134000(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01134020  FUN_01134020  size=28  [run]
void __thiscall FUN_01134020(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x30);
  return;
}

// 01134050  FUN_01134050  size=25  [run]
void __thiscall FUN_01134050(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 01134080  FUN_01134080  size=28  [run]
void __thiscall FUN_01134080(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x50);
  return;
}

// 011340B0  FUN_011340b0  size=25  [run]
void __thiscall FUN_011340b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 011340E0  FUN_011340e0  size=28  [run]
void __thiscall FUN_011340e0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01134100  FUN_01134100  size=24  [run]
void __thiscall
FUN_01134100(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 011341B0  FUN_011341b0  size=39  [run]
void FUN_011341b0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 011341E0  FUN_011341e0  size=39  [run]
void FUN_011341e0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x50);
  }
  return;
}

// 01134210  FUN_01134210  size=39  [run]
void FUN_01134210(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x20);
  }
  return;
}

// 01134330  FUN_01134330  size=25  [run]
void __thiscall FUN_01134330(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar1 = (undefined4 *)(param_1 + (param_2 + 2) * 0x10);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  return;
}

// 01134440  FUN_01134440  size=24  [run]
void __thiscall
FUN_01134440(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01134480  FUN_01134480  size=56  [run]
int __thiscall FUN_01134480(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 011344C0  hkpTriangleShape::hkpTriangleShape_2  size=73  [run]
void __thiscall
hkpTriangleShape::hkpTriangleShape_2
          (undefined4 *param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x402;
  *(undefined2 *)(param_1 + 5) = param_3;
  param_1[4] = param_2;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  *param_1 = vftable;
  *(undefined1 *)((int)param_1 + 0x16) = param_4;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)((int)param_1 + 0x17) = 0;
  return;
}

// 01134510  FUN_01134510  size=24  [run]
void __thiscall
FUN_01134510(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01134530  FUN_01134530  size=63  [run]
void __thiscall FUN_01134530(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01134570  FUN_01134570  size=60  [run]
void __thiscall FUN_01134570(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011345B0  FUN_011345b0  size=35  [run]
void FUN_011345b0(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_01006770();
  }
  return;
}

// 011345E0  FUN_011345e0  size=63  [run]
void __fastcall FUN_011345e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01134620  FUN_01134620  size=60  [run]
void __fastcall FUN_01134620(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01134660  FUN_01134660  size=41  [run]
undefined4 __fastcall FUN_01134660(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar2 = FUN_01006770();
  }
  param_1[1] = 0;
  return uVar2;
}

// 01134690  FUN_01134690  size=192  [run]
void __fastcall FUN_01134690(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  if ((*(uint *)(param_1 + 0x3c) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x34),(*(uint *)(param_1 + 0x3c) & 0x3fffffff) * 2);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(uint *)(param_1 + 0x30) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x28),(*(uint *)(param_1 + 0x30) & 0x3fffffff) * 2);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(uint *)(param_1 + 0x24) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x1c),(*(uint *)(param_1 + 0x24) & 0x3fffffff) * 2);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(uint *)(param_1 + 0x18) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x10),(*(uint *)(param_1 + 0x18) & 0x3fffffff) * 2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  return;
}

// 01134750  FUN_01134750  size=61  [run]
void __fastcall FUN_01134750(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x18)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x10),(*(uint *)(param_1 + 0x18) & 0x3fffffff) * 2);
  }
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 01134790  FUN_01134790  size=63  [run]
void __fastcall FUN_01134790(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011347D0  FUN_011347d0  size=60  [run]
void __fastcall FUN_011347d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01134810  FUN_01134810  size=93  [run]
void __thiscall FUN_01134810(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01134870  FUN_01134870  size=53  [run]
int __thiscall FUN_01134870(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01134690();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x50);
  }
  return param_1;
}

// 011348B0  FUN_011348b0  size=105  [run]
int __thiscall FUN_011348b0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x18)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x10),(*(uint *)(param_1 + 0x18) & 0x3fffffff) * 2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x20);
  }
  return param_1;
}

// 01134920  FUN_01134920  size=93  [run]
void __fastcall FUN_01134920(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01134980  FUN_01134980  size=37  [run]
void FUN_01134980(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_01134690();
  }
  return;
}

// 011349B0  FUN_011349b0  size=90  [run]
void FUN_011349b0(int param_1,int param_2)

{
  uint *puVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    puVar1 = (uint *)(param_2 * 0x20 + 0x18 + param_1);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar1[-2],(*puVar1 & 0x3fffffff) * 2);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + -8;
    } while (-1 < param_2);
  }
  return;
}

// 01134A10  FUN_01134a10  size=93  [run]
void __fastcall FUN_01134a10(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01134A70  FUN_01134a70  size=45  [run]
undefined4 __fastcall FUN_01134a70(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar2 = FUN_01134690();
  }
  param_1[1] = 0;
  return uVar2;
}

// 01134AA0  FUN_01134aa0  size=111  [run]
void __fastcall FUN_01134aa0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(iVar2 * 0x20 + 0x18 + *param_1);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar1[-2],(*puVar1 & 0x3fffffff) * 2);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -8;
    } while (-1 < iVar2);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 01134B10  FUN_01134b10  size=97  [run]
void __thiscall FUN_01134b10(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01134690();
  }
  uVar2 = param_1[2];
  param_1[1] = 0;
  if ((uVar2 & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,((uVar2 & 0x3fffffff) + uVar2 * 4) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01134B80  FUN_01134b80  size=147  [run]
void __thiscall FUN_01134b80(int *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(iVar2 * 0x20 + 0x18 + *param_1);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar1[-2],(*puVar1 & 0x3fffffff) * 2);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      puVar1 = puVar1 + -8;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01134C20  FUN_01134c20  size=97  [run]
void __fastcall FUN_01134c20(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01134690();
  }
  uVar2 = param_1[2];
  param_1[1] = 0;
  if ((uVar2 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar2 & 0x3fffffff) + uVar2 * 4) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01134C90  FUN_01134c90  size=142  [run]
void __fastcall FUN_01134c90(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(iVar2 * 0x20 + 0x18 + *param_1);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar1[-2],(*puVar1 & 0x3fffffff) * 2);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      puVar1 = puVar1 + -8;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01134D30  FUN_01134d30  size=97  [run]
void __fastcall FUN_01134d30(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01134690();
  }
  uVar2 = param_1[2];
  param_1[1] = 0;
  if ((uVar2 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar2 & 0x3fffffff) + uVar2 * 4) * 0x10);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01134DA0  FUN_01134da0  size=142  [run]
void __fastcall FUN_01134da0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(iVar2 * 0x20 + 0x18 + *param_1);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar1[-2],(*puVar1 & 0x3fffffff) * 2);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      puVar1 = puVar1 + -8;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01134E40  hkpCompressedMeshShape::vf18  size=9  [run]
bool __fastcall hkpCompressedMeshShape::vf18(int param_1)

{
  return *(char *)(param_1 + 4) == '\0';
}

// 01134E50  hkpCompressedMeshShape::vf00  size=8  [run]
void hkpCompressedMeshShape::vf00(void)

{
  vf00();
  return;
}

// 01134E60  FUN_01134e60  size=38  [run]
void FUN_01134e60(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01134E90  hkBaseObject::hkBaseObject_145  size=631  [run]
void __fastcall hkBaseObject::hkBaseObject_145(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  iVar2 = param_1[0x34];
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    FUN_01006770();
  }
  param_1[0x34] = 0;
  if (-1 < (int)param_1[0x35]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x33],param_1[0x35] * 8);
  }
  param_1[0x33] = 0;
  param_1[0x35] = 0x80000000;
  iVar2 = param_1[0x22] + -1;
  if (-1 < iVar2) {
    puVar3 = (uint *)(iVar2 * 0x20 + 0x18 + param_1[0x21]);
    do {
      puVar3[-1] = 0;
      if (-1 < (int)*puVar3) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar3[-2],(*puVar3 & 0x3fffffff) * 2);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 + -8;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[0x22] = 0;
  if (-1 < (int)param_1[0x23]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x21],param_1[0x23] << 5);
  }
  param_1[0x21] = 0;
  param_1[0x23] = 0x80000000;
  iVar2 = param_1[0x1f];
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    FUN_01134690();
  }
  uVar1 = param_1[0x20];
  param_1[0x1f] = 0;
  if ((uVar1 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (param_1[0x1e],((uVar1 & 0x3fffffff) + uVar1 * 4) * 0x10);
  }
  param_1[0x1e] = 0;
  param_1[0x20] = 0x80000000;
  param_1[0x1c] = 0;
  if ((param_1[0x1d] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x1b],param_1[0x1d] << 4);
  }
  param_1[0x1b] = 0;
  param_1[0x1d] = 0x80000000;
  param_1[0x19] = 0;
  if ((param_1[0x1a] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x18],param_1[0x1a] << 4);
  }
  param_1[0x18] = 0;
  param_1[0x1a] = 0x80000000;
  param_1[0x16] = 0;
  if ((param_1[0x17] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x15],(param_1[0x17] & 0x3fffffff) * 0x30);
  }
  param_1[0x15] = 0;
  param_1[0x17] = 0x80000000;
  param_1[0x13] = 0;
  if ((param_1[0x14] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x12],param_1[0x14] & 0x3fffffff);
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0x80000000;
  param_1[0x10] = 0;
  if ((param_1[0x11] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xf],(param_1[0x11] & 0x3fffffff) * 2);
  }
  param_1[0xf] = 0;
  param_1[0x11] = 0x80000000;
  param_1[0xd] = 0;
  if ((param_1[0xe] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xc],param_1[0xe] * 4);
  }
  param_1[0xc] = 0;
  param_1[0xe] = 0x80000000;
  param_1[4] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  return;
}

// 01135110  hkpCompressedMeshShape::vf00  size=52  [run]
int __thiscall hkpCompressedMeshShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_145();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01135150  FUN_01135150  size=8  [run]
undefined4 FUN_01135150(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01135160  FUN_01135160  size=8  [run]
undefined4 FUN_01135160(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01135180  FUN_01135180  size=8  [run]
undefined4 FUN_01135180(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 011351B0  FUN_011351b0  size=30  [run]
uint __thiscall FUN_011351b0(int param_1,uint param_2)

{
  return (param_2 & 0x7fffffff) >> (0x20U - (char)*(undefined4 *)(param_1 + 0xb4) & 0x1f);
}

// 011351D0  FUN_011351d0  size=13  [run]
uint FUN_011351d0(uint param_1)

{
  return param_1 >> 0x1f;
}

// 011352A0  hkpExtendedMeshShape::vf04  size=31  [run]
undefined4 __fastcall hkpExtendedMeshShape::vf04(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xd4) < 0) {
    uVar1 = hkpShapeContainer::vf04();
    *(undefined4 *)(param_1 + 0xd4) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0xd4);
}

// 01135300  FUN_01135300  size=13  [run]
undefined4 FUN_01135300(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}

// 01135310  FUN_01135310  size=154  [run]
int __thiscall FUN_01135310(int param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  bVar2 = (byte)*(undefined4 *)(param_1 + 0xb4);
  uVar3 = (param_2 & 0x7fffffff) >> (0x20 - bVar2 & 0x1f);
  if ((int)param_2 < 0) {
    pbVar4 = (byte *)(uVar3 * 0x40 + *(int *)(param_1 + 0xc4));
  }
  else if (*(int *)(param_1 + 0xbc) == 1) {
    pbVar4 = (byte *)(param_1 + 0x20);
  }
  else {
    pbVar4 = (byte *)(uVar3 * 0x70 + *(int *)(param_1 + 0xb8));
  }
  iVar1 = *(int *)(pbVar4 + 8);
  iVar6 = (int)*(short *)(pbVar4 + 4);
  if ((iVar1 != 0) && (0 < iVar6)) {
    iVar5 = (uint)*(ushort *)(pbVar4 + 6) * (0xffffffffU >> (bVar2 & 0x1f) & param_2);
    if ((*pbVar4 & 6) == 2) {
      return (uint)*(byte *)(iVar5 + iVar1) * iVar6 + *(int *)(pbVar4 + 0xc);
    }
    return (uint)*(ushort *)(iVar5 + iVar1) * iVar6 + *(int *)(pbVar4 + 0xc);
  }
  return 0;
}

// 011353B0  hkpExtendedMeshShape::vf10  size=40  [run]
undefined4 __thiscall hkpExtendedMeshShape::vf10(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_01135310(param_2);
  if (puVar1 != (undefined4 *)0x0) {
    return *puVar1;
  }
  return *(undefined4 *)(param_1 + 0xd0);
}

// 01135450  FUN_01135450  size=410  [run]
void FUN_01135450(int param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 auVar8 [16];
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_18;
  int local_14;
  
  *(undefined4 *)*param_2 = 0x7f7fffee;
  *(undefined4 *)(*param_2 + 4) = 0x7f7fffee;
  *(undefined4 *)(*param_2 + 8) = 0x7f7fffee;
  *(undefined4 *)(*param_2 + 0xc) = 0x7f7fffee;
  *(undefined4 *)param_2[1] = 0xff7fffee;
  *(undefined4 *)(param_2[1] + 4) = 0xff7fffee;
  *(undefined4 *)(param_2[1] + 8) = 0xff7fffee;
  *(undefined4 *)(param_2[1] + 0xc) = 0xff7fffee;
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      puVar5 = (uint *)((uint)*(ushort *)(param_1 + 0x2c) * local_14 + *(int *)(param_1 + 0x20));
      if (*(char *)(param_1 + 0x2e) == '\x01') {
        uVar1 = (uint)(byte)*puVar5;
        uVar4 = (uint)*(byte *)((int)puVar5 + 1);
        uVar3 = (uint)*(ushort *)(param_1 + 0x24);
        uVar6 = (uint)*(byte *)((int)puVar5 + 2);
      }
      else {
        uVar3 = (uint)*(ushort *)(param_1 + 0x24);
        if (*(char *)(param_1 + 0x2e) == '\x02') {
          uVar1 = (uint)(ushort)*puVar5;
          uVar4 = (uint)*(ushort *)((int)puVar5 + 2);
          uVar6 = (uint)(ushort)puVar5[1];
        }
        else {
          uVar1 = *puVar5;
          uVar4 = puVar5[1];
          uVar6 = puVar5[2];
        }
      }
      puVar2 = (undefined4 *)(uVar1 * uVar3 + *(int *)(param_1 + 0x18));
      local_30 = *puVar2;
      uStack_2c = puVar2[1];
      uStack_28 = puVar2[2];
      puVar2 = (undefined4 *)(uVar4 * uVar3 + *(int *)(param_1 + 0x18));
      puVar7 = (undefined4 *)(uVar6 * *(ushort *)(param_1 + 0x24) + *(int *)(param_1 + 0x18));
      uStack_24 = 0;
      FUN_01007150(param_1 + 0x40,&local_30);
      auVar8 = minps(*param_2,local_40);
      *param_2 = auVar8;
      auVar8 = maxps(param_2[1],local_40);
      param_2[1] = auVar8;
      local_50 = *puVar2;
      uStack_4c = puVar2[1];
      uStack_48 = puVar2[2];
      local_18 = param_1 + 0x40;
      uStack_44 = 0;
      FUN_01007150(local_18,&local_50);
      auVar8 = minps(*param_2,local_60);
      *param_2 = auVar8;
      auVar8 = maxps(param_2[1],local_60);
      param_2[1] = auVar8;
      local_70 = *puVar7;
      uStack_6c = puVar7[1];
      uStack_68 = puVar7[2];
      uStack_64 = 0;
      FUN_01007150(local_18,&local_70);
      auVar8 = minps(*param_2,local_80);
      *param_2 = auVar8;
      local_14 = local_14 + 1;
      auVar8 = maxps(param_2[1],local_80);
      param_2[1] = auVar8;
    } while (local_14 < *(int *)(param_1 + 0x14));
  }
  return;
}

// 01135600  FUN_01135600  size=157  [run]
void FUN_01135600(int param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 local_70 [48];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  *(undefined4 *)*param_2 = 0x7f7fffee;
  *(undefined4 *)(*param_2 + 4) = 0x7f7fffee;
  *(undefined4 *)(*param_2 + 8) = 0x7f7fffee;
  *(undefined4 *)(*param_2 + 0xc) = 0x7f7fffee;
  *(undefined4 *)param_2[1] = 0xff7fffee;
  *(undefined4 *)(param_2[1] + 4) = 0xff7fffee;
  *(undefined4 *)(param_2[1] + 8) = 0xff7fffee;
  *(undefined4 *)(param_2[1] + 0xc) = 0xff7fffee;
  FUN_0100ac20(param_1 + 0x20);
  local_40 = *(undefined4 *)(param_1 + 0x30);
  uStack_3c = *(undefined4 *)(param_1 + 0x34);
  uStack_38 = *(undefined4 *)(param_1 + 0x38);
  uStack_34 = *(undefined4 *)(param_1 + 0x3c);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x14) + iVar1 * 4) + 0x10))(local_70,0,local_30);
      auVar2 = minps(*param_2,local_30);
      auVar3 = maxps(param_2[1],local_20);
      iVar1 = iVar1 + 1;
      *param_2 = auVar2;
      param_2[1] = auVar3;
    } while (iVar1 < *(int *)(param_1 + 0x18));
  }
  return;
}

// 011356A0  hkpExtendedMeshShape::vf40  size=158  [run]
undefined4 __thiscall hkpExtendedMeshShape::vf40(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  if (0 < *(int *)(param_1 + 200)) {
    local_8 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0xc4) + local_8;
      iVar5 = 0;
      if (0 < *(int *)(iVar4 + 0x18)) {
        do {
          iVar1 = (**(code **)(**(int **)(*(int *)(iVar4 + 0x14) + iVar5 * 4) + 0x40))
                            (param_2,0x100);
          uVar2 = *(uint *)(iVar4 + 0x3c) & 0xc0ffffff;
          if (uVar2 == 0) {
            iVar3 = 0x200;
          }
          else {
            iVar3 = (-(uint)(uVar2 != 1) & 0xffffffd0) + 0x1d0;
          }
          if ((iVar1 < 0) || (iVar3 < iVar1)) {
            return 0xffffffff;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar4 + 0x18));
      }
      local_8 = local_8 + 0x40;
      local_c = local_c + 1;
    } while (local_c < *(int *)(param_1 + 200));
  }
  return 0xf0;
}

// 01135750  hkpExtendedMeshShape::vf08  size=173  [run]
int __fastcall hkpExtendedMeshShape::vf08(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_220 [512];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1[0x2e] + param_1[0x2b] == 0) {
    return -1;
  }
  iVar1 = (-(uint)(param_1[0x2b] != 0) & 0x80000000) + 0x80000000;
  iVar2 = (**(code **)(*param_1 + 0x14))(iVar1,local_220);
  if (*(char *)(iVar2 + 8) == '\x02') {
    local_20 = DAT_01b2154c;
    uStack_1c = DAT_01b2154c;
    uStack_18 = DAT_01b2154c;
    uStack_14 = DAT_01b2154c;
    iVar2 = FUN_0112b050(iVar2 + 0x20,iVar2 + 0x30,iVar2 + 0x40,&local_20);
    if (iVar2 != 0) {
      iVar1 = (**(code **)(*param_1 + 0xc))(iVar1);
      return iVar1;
    }
  }
  return iVar1;
}

// 01135800  hkpExtendedMeshShape::vf0C  size=294  [run]
uint __thiscall hkpExtendedMeshShape::vf0C(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_230 [512];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *local_1c;
  uint local_18;
  uint local_14;
  
  uVar3 = (param_2 & 0x7fffffff) >> (0x20U - (char)param_1[0x29] & 0x1f);
  uVar2 = 0xffffffffU >> ((byte)param_1[0x29] & 0x1f) & param_2;
  local_14 = param_2 & 0x80000000;
  local_1c = param_1;
LAB_01135850:
  do {
    uVar2 = uVar2 + 1;
    if (local_14 == 0) {
      if (*(int *)(param_1[0x2a] + 0x14 + uVar3 * 0x70) <= (int)uVar2) {
        uVar3 = uVar3 + 1;
        uVar2 = 0;
        if ((uint)param_1[0x2b] <= uVar3) {
          if (param_1[0x2e] == 0) {
            return 0xffffffff;
          }
          uVar3 = 0;
          local_14 = 0x80000000;
          uVar2 = 0xffffffff;
          goto LAB_01135850;
        }
      }
    }
    else if (*(int *)(param_1[0x2d] + 0x18 + uVar3 * 0x40) <= (int)uVar2) {
      uVar3 = uVar3 + 1;
      if ((uint)param_1[0x2e] <= uVar3) {
        return 0xffffffff;
      }
      uVar2 = 0;
    }
    local_18 = uVar3 << (0x20U - (char)param_1[0x29] & 0x1f) | local_14 | uVar2;
    iVar1 = (**(code **)(*param_1 + 0x14))(local_18,local_230);
    if (*(char *)(iVar1 + 8) != '\x02') {
      return local_18;
    }
    local_30 = DAT_01b2154c;
    uStack_2c = DAT_01b2154c;
    uStack_28 = DAT_01b2154c;
    uStack_24 = DAT_01b2154c;
    iVar1 = FUN_0112b050(iVar1 + 0x20,iVar1 + 0x30,iVar1 + 0x40,&local_30);
    param_1 = local_1c;
    if (iVar1 == 0) {
      return local_18;
    }
  } while( true );
}

// 01135930  hkpExtendedMeshShape::vf10  size=201  [run]
void __thiscall hkpExtendedMeshShape::vf10(int param_1,float *param_2,float param_3,float *param_4)

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
  
  fVar6 = *(float *)(param_1 + 0x90);
  fVar1 = *(float *)(param_1 + 0x94);
  fVar2 = *(float *)(param_1 + 0x98);
  fVar7 = ABS(fVar6 * *param_2) + ABS(fVar1 * param_2[4]) + ABS(fVar2 * param_2[8]) + param_3;
  fVar8 = ABS(fVar6 * param_2[1]) + ABS(fVar1 * param_2[5]) + ABS(fVar2 * param_2[9]) + param_3;
  fVar9 = ABS(fVar6 * param_2[2]) + ABS(fVar1 * param_2[6]) + ABS(fVar2 * param_2[10]) + param_3;
  fVar10 = ABS(fVar6 * param_2[3]) + ABS(fVar1 * param_2[7]) + ABS(fVar2 * param_2[0xb]) + param_3;
  fVar6 = *(float *)(param_1 + 0xa0);
  fVar1 = *(float *)(param_1 + 0xa4);
  fVar2 = *(float *)(param_1 + 0xa8);
  fVar3 = fVar6 * *param_2 + fVar1 * param_2[4] + fVar2 * param_2[8] + param_2[0xc];
  fVar4 = fVar6 * param_2[1] + fVar1 * param_2[5] + fVar2 * param_2[9] + param_2[0xd];
  fVar5 = fVar6 * param_2[2] + fVar1 * param_2[6] + fVar2 * param_2[10] + param_2[0xe];
  fVar6 = fVar6 * param_2[3] + fVar1 * param_2[7] + fVar2 * param_2[0xb] + param_2[0xf];
  param_4[4] = fVar3 + fVar7;
  param_4[5] = fVar4 + fVar8;
  param_4[6] = fVar5 + fVar9;
  param_4[7] = fVar6 + fVar10;
  *param_4 = -fVar7 + fVar3;
  param_4[1] = -fVar8 + fVar4;
  param_4[2] = -fVar9 + fVar5;
  param_4[3] = -fVar10 + fVar6;
  return;
}

// 01135A00  FUN_01135a00  size=274  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_01135a00(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 auVar5 [16];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_14;
  
  local_30 = *(float *)(param_1 + 0xe8);
  iVar4 = 0;
  local_40._0_8_ = (ulonglong)DAT_017dd230 ^ 0x8000000080000000;
  local_40._8_4_ = DAT_017dd230._8_4_ ^ 0x80000000;
  local_40._12_4_ = DAT_017dd230._12_4_ ^ 0x80000000;
  local_50 = _DAT_017dd230;
  fStack_2c = local_30;
  fStack_28 = local_30;
  fStack_24 = local_30;
  if (0 < *(int *)(param_1 + 0xbc)) {
    local_14 = 0;
    do {
      FUN_01135450(*(int *)(param_1 + 0xb8) + local_14,&local_70);
      auVar5._0_4_ = local_70 - local_30;
      auVar5._4_4_ = fStack_6c - fStack_2c;
      auVar5._8_4_ = fStack_68 - fStack_28;
      auVar5._12_4_ = fStack_64 - fStack_24;
      local_14 = local_14 + 0x70;
      local_50 = minps(local_50,auVar5);
      iVar4 = iVar4 + 1;
      auVar1._4_4_ = fStack_5c + fStack_2c;
      auVar1._0_4_ = local_60 + local_30;
      auVar1._8_4_ = fStack_58 + fStack_28;
      auVar1._12_4_ = fStack_54 + fStack_24;
      local_40 = maxps(local_40,auVar1);
    } while (iVar4 < *(int *)(param_1 + 0xbc));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    local_14 = 0;
    do {
      FUN_01135600(*(int *)(param_1 + 0xc4) + local_14,&local_70);
      local_14 = local_14 + 0x40;
      auVar2._4_4_ = fStack_6c;
      auVar2._0_4_ = local_70;
      auVar2._8_4_ = fStack_68;
      auVar2._12_4_ = fStack_64;
      local_50 = minps(local_50,auVar2);
      auVar3._4_4_ = fStack_5c;
      auVar3._0_4_ = local_60;
      auVar3._8_4_ = fStack_58;
      auVar3._12_4_ = fStack_54;
      local_40 = maxps(local_40,auVar3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 200));
  }
  *(float *)(param_1 + 0xa0) = (local_40._0_4_ + local_50._0_4_) * 0.5;
  *(float *)(param_1 + 0xa4) = (local_40._4_4_ + local_50._4_4_) * 0.5;
  *(float *)(param_1 + 0xa8) = (local_40._8_4_ + local_50._8_4_) * 0.5;
  *(float *)(param_1 + 0xac) = (local_40._12_4_ + local_50._12_4_) * 0.5;
  *(float *)(param_1 + 0x90) = (local_40._0_4_ - local_50._0_4_) * 0.5;
  *(float *)(param_1 + 0x94) = (local_40._4_4_ - local_50._4_4_) * 0.5;
  *(float *)(param_1 + 0x98) = (local_40._8_4_ - local_50._8_4_) * 0.5;
  *(float *)(param_1 + 0x9c) = (local_40._12_4_ - local_50._12_4_) * 0.5;
  return;
}

// 01135B20  hkpExtendedMeshShape::vf48  size=231  [run]
void __thiscall hkpExtendedMeshShape::vf48(int param_1,uint param_2,undefined2 param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xd4) == 0) {
    iVar5 = 0;
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0xbc)) {
      iVar2 = *(int *)(param_1 + 0xb8);
      iVar4 = 0;
      do {
        *(int *)(iVar4 + 0x28 + iVar2) = iVar6;
        iVar2 = *(int *)(param_1 + 0xb8);
        iVar6 = iVar6 + *(int *)(iVar4 + 0x14 + iVar2);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x70;
      } while (iVar5 < *(int *)(param_1 + 0xbc));
    }
    if ((int)(*(uint *)(param_1 + 0xd8) & 0x3fffffff) < iVar6) {
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0xd0,iVar6,2);
    }
    uVar3 = *(uint *)(param_1 + 0xd8) & 0x3fffffff;
    if ((int)uVar3 < iVar6) {
      iVar5 = uVar3 * 2;
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0xd0,iVar5,2);
    }
    *(int *)(param_1 + 0xd4) = iVar6;
  }
  if (-1 < (int)param_2) {
    bVar1 = (byte)*(undefined4 *)(param_1 + 0xb4);
    *(undefined2 *)
     (*(int *)(param_1 + 0xd0) +
     ((0xffffffffU >> (bVar1 & 0x1f) & param_2) +
     *(int *)(((param_2 & 0x7fffffff) >> (0x20 - bVar1 & 0x1f)) * 0x70 + 0x28 +
             *(int *)(param_1 + 0xb8))) * 2) = param_3;
  }
  return;
}

// 01135C10  FUN_01135c10  size=106  [run]
int __fastcall FUN_01135c10(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    *(int *)(param_1 + 0xb8) = param_1 + 0x20;
    *(undefined4 *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0xc0) = 0x80000001;
    return param_1 + 0x20;
  }
  iVar2 = *(int *)(param_1 + 0xbc);
  iVar1 = iVar2 + 1;
  uVar3 = *(uint *)(param_1 + 0xc0) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_1 + 0xb8),iVar4,0x70);
  }
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  return iVar2 * 0x70 + *(int *)(param_1 + 0xb8);
}

// 01135C80  hkpExtendedMeshShape::vf44  size=227  [run]
void __thiscall hkpExtendedMeshShape::vf44(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  *(char *)(param_1 + 0xdc) = (char)param_2;
  if (param_2 != 6) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0xbc)) {
      iVar1 = *(int *)(param_1 + 0xb8);
      iVar3 = 0;
      do {
        *(int *)(iVar3 + 0x28 + iVar1) = iVar5;
        iVar1 = *(int *)(param_1 + 0xb8);
        iVar5 = iVar5 + *(int *)(iVar3 + 0x14 + iVar1);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x70;
      } while (iVar4 < *(int *)(param_1 + 0xbc));
    }
    if ((int)(*(uint *)(param_1 + 0xd8) & 0x3fffffff) < iVar5) {
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0xd0,iVar5,2);
    }
    uVar2 = *(uint *)(param_1 + 0xd8) & 0x3fffffff;
    if ((int)uVar2 < iVar5) {
      iVar4 = uVar2 * 2;
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0xd0,iVar4,2);
    }
    *(int *)(param_1 + 0xd4) = iVar5;
    return;
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xd8)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0xd0),(*(uint *)(param_1 + 0xd8) & 0x3fffffff) * 2);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0x80000000;
  return;
}

// 01135D70  hkpExtendedMeshShape::vf14  size=1121  [run]
undefined4 * __thiscall hkpExtendedMeshShape::vf14(int param_1,uint param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined2 uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  float *pfVar21;
  undefined4 *puVar22;
  uint *puVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined4 local_100 [3];
  undefined1 local_f1 [5];
  int local_ec;
  undefined1 local_e0 [16];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined1 local_80 [48];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_24;
  int local_20;
  undefined4 *local_18;
  int local_14;
  
  bVar5 = (byte)*(undefined4 *)(param_1 + 0xa4);
  uVar14 = (param_2 & 0x7fffffff) >> (0x20 - bVar5 & 0x1f);
  local_20 = param_1;
  uVar18 = 0xffffffffU >> (bVar5 & 0x1f) & param_2;
  local_18 = (undefined4 *)uVar18;
  if (-1 < (int)param_2) {
    puVar16 = (undefined4 *)((uint)local_f1 & 0xffffff90);
    if (*(int *)(param_1 + 0xac) == 1) {
      puVar16 = (undefined4 *)(param_1 + 0x10);
    }
    else {
      puVar22 = (undefined4 *)(uVar14 * 0x70 + *(int *)(param_1 + 0xa8));
      puVar24 = puVar16;
      for (iVar17 = 0x1c; iVar17 != 0; iVar17 = iVar17 + -1) {
        *puVar24 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar24 = puVar24 + 1;
      }
    }
    uVar8 = DAT_01b20754;
    puVar23 = (uint *)(*(ushort *)(puVar16 + 0xb) * uVar18 + puVar16[8]);
    uVar6 = (short)*(char *)((int)puVar16 + 0x2f) & (ushort)uVar18;
    cVar2 = *(char *)((int)puVar16 + 0x2e);
    if (cVar2 == '\x01') {
      uVar14 = (uint)(byte)*puVar23;
      uVar19 = (uint)*(byte *)((int)(short)(uVar6 + 1) + (int)puVar23);
      uStack_24 = (uint)*(byte *)((int)(short)((uVar6 ^ 1) + 1) + (int)puVar23);
    }
    else if (cVar2 == '\x02') {
      uVar14 = (uint)(ushort)*puVar23;
      uVar19 = (uint)*(ushort *)((int)puVar23 + (short)(uVar6 + 1) * 2);
      uStack_24 = (uint)*(ushort *)((int)puVar23 + (short)((uVar6 ^ 1) + 1) * 2);
    }
    else if (cVar2 == '\x03') {
      uVar14 = *puVar23;
      uVar19 = puVar23[(short)(uVar6 + 1)];
      uStack_24 = puVar23[(short)((uVar6 ^ 1) + 1)];
    }
    else {
      uVar19 = 0;
      uVar14 = 0;
      uStack_24 = 0;
    }
    iVar17 = puVar16[6];
    uVar15 = (uint)*(ushort *)(puVar16 + 9);
    if (param_3 == (undefined4 *)0x0) {
      param_3 = (undefined4 *)0x0;
    }
    else {
      *(undefined2 *)((int)param_3 + 6) = 1;
      *(undefined2 *)(param_3 + 2) = 0x402;
      param_3[4] = uVar8;
      *(undefined2 *)((int)param_3 + 10) = 0;
      param_3[3] = 0;
      *param_3 = hkpTriangleShape::vftable;
      param_3[0x14] = 0;
      param_3[0x15] = 0;
      param_3[0x16] = 0;
      param_3[0x17] = 0;
      param_3[5] = 0x60000;
    }
    fVar30 = (float)puVar16[0xc];
    fVar35 = (float)puVar16[0xd];
    fVar7 = (float)puVar16[0xe];
    uVar8 = puVar16[0xf];
    uVar3 = *(undefined1 *)(param_1 + 0xcc);
    param_3[4] = *(undefined4 *)(param_1 + 0xd8);
    *(undefined1 *)((int)param_3 + 0x16) = uVar3;
    *(bool *)((int)param_3 + 0x17) = 0.0 < fVar35 * fVar35 + fVar30 * fVar30 + fVar7 * fVar7;
    iVar4 = *(int *)(param_1 + 0xc4);
    *(undefined1 *)(param_3 + 2) = 2;
    param_3[3] = 0;
    param_3[0x14] = fVar30;
    param_3[0x15] = fVar35;
    param_3[0x16] = fVar7;
    param_3[0x17] = uVar8;
    if (iVar4 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined2 *)(*(int *)(param_1 + 0xc0) + (puVar16[10] + uVar18) * 2);
    }
    pfVar20 = (float *)(uVar19 * uVar15 + iVar17);
    puVar25 = (undefined8 *)(uVar14 * uVar15 + iVar17);
    fVar35 = (float)puVar16[0x14];
    fVar7 = (float)puVar16[0x15];
    fVar9 = (float)puVar16[0x16];
    fVar27 = (float)puVar16[0x17];
    fVar43 = (float)puVar16[0x18];
    fVar44 = (float)puVar16[0x19];
    fVar45 = (float)puVar16[0x1a];
    fVar46 = (float)puVar16[0x1b];
    uVar1 = *puVar25;
    fVar30 = *(float *)(puVar25 + 1);
    pfVar21 = (float *)(uStack_24 * uVar15 + iVar17);
    *(undefined2 *)(param_3 + 5) = uVar13;
    fVar26 = fVar43 * (float)uVar1;
    fVar29 = fVar44 * (float)((ulonglong)uVar1 >> 0x20);
    fVar30 = fVar45 * fVar30;
    fVar31 = fVar46 * 0.0;
    fVar32 = fVar35 * fVar26;
    fVar33 = fVar7 * fVar29;
    fVar34 = fVar9 * fVar30;
    fVar10 = (float)puVar16[0x14];
    fVar11 = (float)puVar16[0x15];
    fVar12 = (float)puVar16[0x16];
    fVar28 = (float)puVar16[0x17];
    fVar36 = (fVar33 + fVar32 + fVar34) * fVar35 + (fVar27 * fVar27 + -0.5) * fVar26 +
             (fVar7 * fVar30 - fVar9 * fVar29) * fVar27;
    fVar37 = (fVar33 + fVar32 + fVar34) * fVar7 + (fVar27 * fVar27 + -0.5) * fVar29 +
             (fVar9 * fVar26 - fVar35 * fVar30) * fVar27;
    fVar38 = (fVar33 + fVar32 + fVar34) * fVar9 + (fVar27 * fVar27 + -0.5) * fVar30 +
             (fVar35 * fVar29 - fVar7 * fVar26) * fVar27;
    fVar39 = (fVar33 + fVar32 + fVar34) * fVar27 + (fVar27 * fVar27 + -0.5) * fVar31 +
             (fVar27 * fVar31 - fVar27 * fVar31) * fVar27;
    fVar27 = fVar43 * *pfVar20;
    fVar26 = fVar44 * pfVar20[1];
    fVar29 = fVar45 * pfVar20[2];
    fVar31 = fVar46 * 0.0;
    fVar32 = fVar10 * fVar27;
    fVar33 = fVar11 * fVar26;
    fVar34 = fVar12 * fVar29;
    fVar43 = fVar43 * *pfVar21;
    fVar44 = fVar44 * pfVar21[1];
    fVar45 = fVar45 * pfVar21[2];
    fVar46 = fVar46 * 0.0;
    fVar30 = (float)puVar16[0x14];
    fVar35 = (float)puVar16[0x15];
    fVar7 = (float)puVar16[0x16];
    fVar9 = (float)puVar16[0x17];
    fVar40 = (fVar33 + fVar32 + fVar34) * fVar10 + (fVar28 * fVar28 + -0.5) * fVar27 +
             (fVar11 * fVar29 - fVar12 * fVar26) * fVar28;
    fVar41 = (fVar33 + fVar32 + fVar34) * fVar11 + (fVar28 * fVar28 + -0.5) * fVar26 +
             (fVar12 * fVar27 - fVar10 * fVar29) * fVar28;
    fVar42 = (fVar33 + fVar32 + fVar34) * fVar12 + (fVar28 * fVar28 + -0.5) * fVar29 +
             (fVar10 * fVar26 - fVar11 * fVar27) * fVar28;
    fVar33 = (fVar33 + fVar32 + fVar34) * fVar28 + (fVar28 * fVar28 + -0.5) * fVar31 +
             (fVar28 * fVar31 - fVar28 * fVar31) * fVar28;
    fVar28 = fVar30 * fVar43;
    fVar26 = fVar35 * fVar44;
    fVar29 = fVar7 * fVar45;
    fVar27 = (float)puVar16[0x10];
    fVar10 = (float)puVar16[0x11];
    fVar11 = (float)puVar16[0x12];
    fVar12 = (float)puVar16[0x13];
    fVar31 = (fVar26 + fVar28 + fVar29) * fVar30 + (fVar9 * fVar9 + -0.5) * fVar43 +
             (fVar35 * fVar45 - fVar7 * fVar44) * fVar9;
    fVar32 = (fVar26 + fVar28 + fVar29) * fVar35 + (fVar9 * fVar9 + -0.5) * fVar44 +
             (fVar7 * fVar43 - fVar30 * fVar45) * fVar9;
    fVar30 = (fVar26 + fVar28 + fVar29) * fVar7 + (fVar9 * fVar9 + -0.5) * fVar45 +
             (fVar30 * fVar44 - fVar35 * fVar43) * fVar9;
    fVar35 = (fVar26 + fVar28 + fVar29) * fVar9 + (fVar9 * fVar9 + -0.5) * fVar46 +
             (fVar9 * fVar46 - fVar9 * fVar46) * fVar9;
    param_3[8] = fVar36 + fVar36 + fVar27;
    param_3[9] = fVar37 + fVar37 + fVar10;
    param_3[10] = fVar38 + fVar38 + fVar11;
    param_3[0xb] = fVar39 + fVar39 + fVar12;
    param_3[0xc] = fVar40 + fVar40 + fVar27;
    param_3[0xd] = fVar41 + fVar41 + fVar10;
    param_3[0xe] = fVar42 + fVar42 + fVar11;
    param_3[0xf] = fVar33 + fVar33 + fVar12;
    param_3[0x10] = fVar31 + fVar31 + fVar27;
    param_3[0x11] = fVar32 + fVar32 + fVar10;
    param_3[0x12] = fVar30 + fVar30 + fVar11;
    param_3[0x13] = fVar35 + fVar35 + fVar12;
    return param_3;
  }
  puVar16 = local_100;
  iVar17 = (uVar14 * 0x40 + *(int *)(param_1 + 0xb4)) - (int)puVar16;
  local_14 = 8;
  do {
    *puVar16 = *(undefined4 *)((int)puVar16 + iVar17);
    puVar16[1] = *(undefined4 *)((int)puVar16 + iVar17 + 4);
    puVar16 = puVar16 + 2;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  local_18 = *(undefined4 **)(local_ec + uVar18 * 4);
  if ((uStack_c4 & 0xc0ffffff) != 0) {
    if ((uStack_c4 & 0xc0ffffff) == 1) {
      if (param_3 != (undefined4 *)0x0) {
        hkpSingleShapeContainer::hkpSingleShapeContainer_14(10,local_18[4],local_18,0);
        *param_3 = hkpConvexTranslateShape::vftable;
        param_3[8] = local_d0;
        param_3[9] = uStack_cc;
        param_3[10] = uStack_c8;
        param_3[0xb] = 0;
        param_3[7] = 0;
        return param_3;
      }
    }
    else {
      FUN_0100ac20(local_e0);
      local_50 = local_d0;
      uStack_4c = uStack_cc;
      uStack_48 = uStack_c8;
      uStack_44 = uStack_c4;
      if (param_3 != (undefined4 *)0x0) {
        puVar16 = (undefined4 *)
                  hkpConvexTransformShape::hkpConvexTransformShape_2(local_18,local_80,0);
        return puVar16;
      }
    }
    local_18 = (undefined4 *)0x0;
  }
  return local_18;
}

// 011361E0  FUN_011361e0  size=152  [run]
int __thiscall FUN_011361e0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 local_230 [512];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_14;
  
  uVar2 = 0;
  local_14 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_2 + 0x14)) {
    do {
      iVar1 = hkpExtendedMeshShape::vf14
                        (param_3 << (0x20U - (char)*(undefined4 *)(param_1 + 0xb4) & 0x1f) | uVar2,
                         local_230);
      local_30 = DAT_01b2154c;
      uStack_2c = DAT_01b2154c;
      uStack_28 = DAT_01b2154c;
      uStack_24 = DAT_01b2154c;
      iVar1 = FUN_0112b050(iVar1 + 0x20,iVar1 + 0x30,iVar1 + 0x40,&local_30);
      if (iVar1 == 0) {
        local_14 = local_14 + 1;
      }
      uVar2 = uVar2 + 1;
      iVar1 = local_14;
    } while ((int)uVar2 < *(int *)(param_2 + 0x14));
  }
  return iVar1;
}

// 01136280  hkpExtendedMeshShape::vf4C  size=207  [run]
void __thiscall hkpExtendedMeshShape::vf4C(int param_1,undefined4 param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar4 = FUN_01135c10();
  FUN_00919310(param_2);
  local_30 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x90);
  fStack_2c = *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0x94);
  fStack_28 = *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0x98);
  fStack_24 = *(float *)(param_1 + 0xac) - *(float *)(param_1 + 0x9c);
  local_20 = *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0xa0);
  fStack_1c = *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0xa4);
  fStack_18 = *(float *)(param_1 + 0x98) + *(float *)(param_1 + 0xa8);
  fStack_14 = *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0xac);
  FUN_01135450(uVar4,&local_50);
  fVar1 = *(float *)(param_1 + 0xe8);
  auVar2._4_4_ = fStack_2c;
  auVar2._0_4_ = local_30;
  auVar2._8_4_ = fStack_28;
  auVar2._12_4_ = fStack_24;
  auVar6._4_4_ = fStack_4c - fVar1;
  auVar6._0_4_ = local_50 - fVar1;
  auVar6._8_4_ = fStack_48 - fVar1;
  auVar6._12_4_ = fStack_44 - fVar1;
  auVar6 = minps(auVar2,auVar6);
  auVar3._4_4_ = fStack_1c;
  auVar3._0_4_ = local_20;
  auVar3._8_4_ = fStack_18;
  auVar3._12_4_ = fStack_14;
  auVar7._4_4_ = fStack_3c + fVar1;
  auVar7._0_4_ = local_40 + fVar1;
  auVar7._8_4_ = fStack_38 + fVar1;
  auVar7._12_4_ = fStack_34 + fVar1;
  auVar7 = maxps(auVar3,auVar7);
  *(float *)(param_1 + 0xa0) = (auVar7._0_4_ + auVar6._0_4_) * 0.5;
  *(float *)(param_1 + 0xa4) = (auVar7._4_4_ + auVar6._4_4_) * 0.5;
  *(float *)(param_1 + 0xa8) = (auVar7._8_4_ + auVar6._8_4_) * 0.5;
  *(float *)(param_1 + 0xac) = (auVar7._12_4_ + auVar6._12_4_) * 0.5;
  *(float *)(param_1 + 0x90) = (auVar7._0_4_ - auVar6._0_4_) * 0.5;
  *(float *)(param_1 + 0x94) = (auVar7._4_4_ - auVar6._4_4_) * 0.5;
  *(float *)(param_1 + 0x98) = (auVar7._8_4_ - auVar6._8_4_) * 0.5;
  *(float *)(param_1 + 0x9c) = (auVar7._12_4_ - auVar6._12_4_) * 0.5;
  iVar5 = FUN_011361e0(param_2,*(int *)(param_1 + 0xbc) + -1);
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + iVar5;
  return;
}

// 01136350  FUN_01136350  size=220  [run]
int __thiscall FUN_01136350(int param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined4 in_EAX;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  
  if (param_2 != 0) {
    auVar1._4_4_ = -(uint)(ABS(*(float *)(param_1 + 0x34) - 0.0) <= 0.001);
    auVar1._0_4_ = -(uint)(ABS(*(float *)(param_1 + 0x30) - 0.0) <= 0.001);
    auVar1._8_4_ = -(uint)(ABS(*(float *)(param_1 + 0x38) - 0.0) <= 0.001);
    auVar1._12_4_ = -(uint)(ABS(*(float *)(param_1 + 0x3c) - 0.0) <= 0.001);
    uVar2 = movmskps(in_EAX,auVar1);
    fVar4 = ABS(*(float *)(param_1 + 0x2c));
    if (ABS(*(float *)(param_1 + 0x2c)) < 1.0) {
      FUN_014376e0();
    }
    else if (fVar4 <= 0.0) {
      fVar4 = 3.1415927;
    }
    else {
      fVar4 = 0.0;
    }
    if (0.001 <= fVar4 * 2.0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
    }
    *(uint *)(param_1 + 0x3c) = uVar3 | ((byte)uVar2 & 7) != 7 | 0x3f000000;
  }
  return param_1;
}

// 01136430  FUN_01136430  size=301  [run]
undefined2 * __thiscall FUN_01136430(undefined2 *param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  
  *param_1 = 0xb;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  piVar7 = (int *)(param_1 + 10);
  *(undefined4 *)(param_1 + 2) = 0;
  *piVar7 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)param_4;
  fVar2 = param_4[3];
  *(float *)(param_1 + 0x1c) = param_4[2];
  *(float *)(param_1 + 0x1e) = fVar2;
  iVar1 = *(int *)(param_1 + 0xc);
  iVar6 = iVar1 + param_3;
  if ((int)(*(uint *)(param_1 + 0xe) & 0x3fffffff) < iVar6) {
    iVar3 = (*(uint *)(param_1 + 0xe) & 0x3fffffff) * 2;
    if (iVar3 <= iVar6) {
      iVar3 = iVar6;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar7,iVar3,4);
  }
  puVar4 = (undefined4 *)(*piVar7 + *(int *)(param_1 + 0xc) * 4);
  iVar6 = param_3;
  if (0 < param_3) {
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  piVar7 = (int *)(*piVar7 + iVar1 * 4);
  if (0 < param_3) {
    iVar6 = param_2 - (int)piVar7;
    param_2 = param_3;
    do {
      iVar1 = *(int *)(iVar6 + (int)piVar7);
      if (iVar1 != 0) {
        FUN_01006000();
      }
      param_3 = 0;
      if (*piVar7 != 0) {
        FUN_010060a0();
        param_3 = extraout_ECX;
      }
      *piVar7 = iVar1;
      piVar7 = piVar7 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  auVar8._4_4_ = -(uint)(ABS(param_4[1] - 0.0) <= 0.001);
  auVar8._0_4_ = -(uint)(ABS(*param_4 - 0.0) <= 0.001);
  auVar8._8_4_ = -(uint)(ABS(param_4[2] - 0.0) <= 0.001);
  auVar8._12_4_ = -(uint)(ABS(param_4[3] - 0.0) <= 0.001);
  uVar5 = movmskps(param_3,auVar8);
  *(uint *)(param_1 + 0x1e) = ((byte)uVar5 & 7) != 7 | 0x3f000000;
  return param_1;
}

// 01136560  FUN_01136560  size=346  [run]
undefined2 * __thiscall FUN_01136560(undefined2 *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  
  *param_1 = 0xb;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  piVar7 = (int *)(param_1 + 10);
  *(undefined4 *)(param_1 + 0xe) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_4 + 0x30);
  uVar5 = *(undefined4 *)(param_4 + 0x3c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_4 + 0x38);
  *(undefined4 *)(param_1 + 0x1e) = uVar5;
  FUN_010087a0(param_4);
  iVar4 = *(int *)(param_1 + 0xc);
  iVar6 = iVar4 + param_3;
  if ((int)(*(uint *)(param_1 + 0xe) & 0x3fffffff) < iVar6) {
    iVar2 = (*(uint *)(param_1 + 0xe) & 0x3fffffff) * 2;
    if (iVar2 <= iVar6) {
      iVar2 = iVar6;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar7,iVar2,4);
  }
  puVar3 = (undefined4 *)(*piVar7 + *(int *)(param_1 + 0xc) * 4);
  iVar6 = param_3;
  if (0 < param_3) {
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  iVar6 = *piVar7;
  piVar7 = (int *)(iVar6 + iVar4 * 4);
  if (0 < param_3) {
    iVar4 = param_2 - (int)piVar7;
    param_2 = param_3;
    do {
      iVar6 = *(int *)(iVar4 + (int)piVar7);
      if (iVar6 != 0) {
        FUN_01006000();
      }
      if (*piVar7 != 0) {
        FUN_010060a0();
      }
      *piVar7 = iVar6;
      piVar7 = piVar7 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  auVar8._4_4_ = -(uint)(ABS(*(float *)(param_1 + 0x1a) - 0.0) <= 0.001);
  auVar8._0_4_ = -(uint)(ABS(*(float *)(param_1 + 0x18) - 0.0) <= 0.001);
  auVar8._8_4_ = -(uint)(ABS(*(float *)(param_1 + 0x1c) - 0.0) <= 0.001);
  auVar8._12_4_ = -(uint)(ABS(*(float *)(param_1 + 0x1e) - 0.0) <= 0.001);
  uVar5 = movmskps(iVar6,auVar8);
  cVar1 = FUN_01013de0(&DAT_01701ca0,0x3a83126f);
  *(uint *)(param_1 + 0x1e) =
       (uint)(((byte)uVar5 & 7) != 7) | (-(uint)(cVar1 != '\0') & 0xfffffffe) + 2 | 0x3f000000;
  return param_1;
}

// 011366C0  FUN_011366c0  size=110  [run]
void __fastcall FUN_011366c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18) + -1;
  iVar1 = *(int *)(param_1 + 0x14);
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(uint *)(param_1 + 0x1c) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x14),*(uint *)(param_1 + 0x1c) * 4);
    *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 01136730  FUN_01136730  size=111  [run]
int __fastcall FUN_01136730(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  
  piVar2 = (int *)(param_1 + 0xc4);
  iVar3 = *(int *)(param_1 + 200);
  iVar1 = iVar3 + 1;
  uVar4 = *(uint *)(param_1 + 0xcc) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar2,iVar5,0x40);
  }
  puVar6 = (undefined2 *)(*(int *)(param_1 + 200) * 0x40 + *piVar2);
  if (puVar6 != (undefined2 *)0x0) {
    *puVar6 = 0xb;
    *(undefined4 *)(puVar6 + 2) = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    *(undefined4 *)(puVar6 + 4) = 0;
    *(undefined4 *)(puVar6 + 10) = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    *(undefined4 *)(puVar6 + 0xe) = 0x80000000;
  }
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  return iVar3 * 0x40 + *piVar2;
}

// 011367A0  hkpExtendedMeshShape::vf50  size=179  [run]
int __thiscall hkpExtendedMeshShape::vf50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar1 = FUN_01136730();
  FUN_01137f50(param_2);
  local_30 = *(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0x90);
  fStack_2c = *(float *)(param_1 + 0xa4) - *(float *)(param_1 + 0x94);
  fStack_28 = *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0x98);
  fStack_24 = *(float *)(param_1 + 0xac) - *(float *)(param_1 + 0x9c);
  local_20 = *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0xa0);
  fStack_1c = *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0xa4);
  fStack_18 = *(float *)(param_1 + 0x98) + *(float *)(param_1 + 0xa8);
  fStack_14 = *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0xac);
  FUN_01135600(uVar1,local_50);
  auVar3._4_4_ = fStack_1c;
  auVar3._0_4_ = local_20;
  auVar3._8_4_ = fStack_18;
  auVar3._12_4_ = fStack_14;
  auVar3 = maxps(auVar3,local_40);
  auVar4._4_4_ = fStack_2c;
  auVar4._0_4_ = local_30;
  auVar4._8_4_ = fStack_28;
  auVar4._12_4_ = fStack_24;
  auVar4 = minps(auVar4,local_50);
  *(float *)(param_1 + 0xa0) = (auVar3._0_4_ + auVar4._0_4_) * 0.5;
  *(float *)(param_1 + 0xa4) = (auVar3._4_4_ + auVar4._4_4_) * 0.5;
  *(float *)(param_1 + 0xa8) = (auVar3._8_4_ + auVar4._8_4_) * 0.5;
  *(float *)(param_1 + 0xac) = (auVar3._12_4_ + auVar4._12_4_) * 0.5;
  *(float *)(param_1 + 0x90) = (auVar3._0_4_ - auVar4._0_4_) * 0.5;
  *(float *)(param_1 + 0x94) = (auVar3._4_4_ - auVar4._4_4_) * 0.5;
  *(float *)(param_1 + 0x98) = (auVar3._8_4_ - auVar4._8_4_) * 0.5;
  *(float *)(param_1 + 0x9c) = (auVar3._12_4_ - auVar4._12_4_) * 0.5;
  iVar2 = FUN_01135300(param_2);
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + iVar2;
  return *(int *)(param_1 + 200) + -1;
}

// 01136860  hkpExtendedMeshShape::hkpExtendedMeshShape  size=226  [run]
undefined4 * __thiscall
hkpExtendedMeshShape::hkpExtendedMeshShape
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  hkpShapeContainer::hkpShapeContainer_9(0xd,1);
  *param_1 = vftable;
  param_1[4] = vftable;
  *(undefined2 *)(param_1 + 8) = 10;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined1 *)((int)param_1 + 0x4f) = 0;
  param_1[0xc] = 0;
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
  param_1[0x1f] = 0x3f800000;
  param_1[0x20] = 0x3f800000;
  param_1[0x21] = 0x3f800000;
  param_1[0x22] = 0x3f800000;
  param_1[0x23] = 0x3f800000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x80000000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0x80000000;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x80000000;
  param_1[0x3a] = param_2;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = param_3;
  *(undefined1 *)(param_1 + 0x37) = 6;
  param_1[0x24] = 0xff7fffee;
  param_1[0x25] = 0xff7fffee;
  param_1[0x26] = 0xff7fffee;
  param_1[0x27] = 0xff7fffee;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return param_1;
}

// 01136CF0  hkBaseObject::hkBaseObject_130  size=269  [run]
void __fastcall hkBaseObject::hkBaseObject_130(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = hkpExtendedMeshShape::vftable;
  param_1[4] = hkpExtendedMeshShape::vftable;
  param_1[0x35] = 0;
  if (-1 < (int)param_1[0x36]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x34],(param_1[0x36] & 0x3fffffff) * 2);
  }
  param_1[0x34] = 0;
  param_1[0x36] = 0x80000000;
  iVar1 = param_1[0x32];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_011366c0();
  }
  param_1[0x32] = 0;
  if ((param_1[0x33] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x31],param_1[0x33] << 6);
  }
  param_1[0x31] = 0;
  param_1[0x33] = 0x80000000;
  param_1[0x2f] = 0;
  if ((param_1[0x30] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x2e],(param_1[0x30] & 0x3fffffff) * 0x70);
  }
  param_1[0x30] = 0x80000000;
  param_1[0x2e] = 0;
  param_1[4] = hkpShapeContainer::vftable;
  *param_1 = vftable;
  return;
}

// 01136E00  hkpExtendedMeshShape::hkpExtendedMeshShape_2  size=351  [run]
undefined4 * __thiscall
hkpExtendedMeshShape::hkpExtendedMeshShape_2(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  hkpShapeContainer::hkpShapeContainer_10(param_2);
  *param_1 = vftable;
  param_1[4] = vftable;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 2) = 0xd;
  }
  else {
    iVar3 = 0;
    *(undefined1 *)((int)param_1 + 0x15) = 1;
    if (0 < (int)param_1[0x2f]) {
      iVar5 = 0;
      do {
        iVar1 = param_1[0x2e];
        if ((*(byte *)(iVar1 + iVar5) & 6) == 0) {
          *(ushort *)(iVar1 + iVar5) = *(ushort *)(iVar1 + iVar5) & 0xfffb | 2;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar3 < (int)param_1[0x2f]);
    }
    iVar3 = 0;
    if (0 < (int)param_1[0x32]) {
      iVar5 = 0;
      do {
        if (param_1[0x31] + iVar5 != 0) {
          FUN_01136350(param_2);
        }
        iVar1 = param_1[0x31];
        if ((*(byte *)(iVar1 + iVar5) & 6) == 0) {
          *(ushort *)(iVar1 + iVar5) = *(ushort *)(iVar1 + iVar5) & 0xfffb | 2;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x40;
      } while (iVar3 < (int)param_1[0x32]);
    }
    if (param_1[0x2f] == 1) {
      iVar3 = param_1[0x2e];
      uVar2 = 0;
      puVar4 = param_1 + 8;
      do {
        *puVar4 = *(undefined4 *)(iVar3 + uVar2 * 8);
        puVar4[1] = *(undefined4 *)(iVar3 + 4 + uVar2 * 8);
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 2;
      } while (uVar2 < 0xe);
      param_1[0x2f] = 0;
      if (-1 < (int)param_1[0x30]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))
                  (param_1[0x2e],(param_1[0x30] & 0x3fffffff) * 0x70);
      }
      param_1[0x30] = 0x80000000;
      param_1[0x2e] = param_1 + 8;
      param_1[0x2f] = 1;
      param_1[0x30] = 0x80000001;
    }
    *(undefined1 *)(param_1 + 2) = 0xd;
    if (param_1[0x39] == -1) {
      param_1[0x39] = 0x80000000;
      return param_1;
    }
  }
  return param_1;
}

// 01136F70  FUN_01136f70  size=21  [run]
uint __thiscall FUN_01136f70(int param_1,uint param_2)

{
  return 0xffffffffU >> ((byte)*(undefined4 *)(param_1 + 0xb4) & 0x1f) & param_2;
}

// 01137020  FUN_01137020  size=24  [run]
int __thiscall FUN_01137020(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x38;
}

// 01137080  FUN_01137080  size=15  [run]
int __thiscall FUN_01137080(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01137130  FUN_01137130  size=15  [run]
int __thiscall FUN_01137130(int *param_1,int param_2)

{
  return param_2 * 0x40 + *param_1;
}

// 01137140  FUN_01137140  size=15  [run]
int __thiscall FUN_01137140(int *param_1,int param_2)

{
  return param_2 * 0x40 + *param_1;
}

// 01137170  FUN_01137170  size=38  [run]
void FUN_01137170(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 - (int)param_1;
  iVar1 = 0xe;
  do {
    *param_1 = *(undefined4 *)(param_2 + (int)param_1);
    param_1[1] = *(undefined4 *)(param_2 + 4 + (int)param_1);
    param_1 = param_1 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 011371A0  FUN_011371a0  size=15  [run]
int FUN_011371a0(int param_1,int param_2,int param_3)

{
  return param_2 * param_3 + param_1;
}

// 011371B0  FUN_011371b0  size=15  [run]
int FUN_011371b0(int param_1,int param_2,int param_3)

{
  return param_2 * param_3 + param_1;
}

// 011371C0  FUN_011371c0  size=15  [run]
int FUN_011371c0(int param_1,int param_2,int param_3)

{
  return param_2 * param_3 + param_1;
}

// 011371D0  FUN_011371d0  size=15  [run]
int FUN_011371d0(int param_1,int param_2,int param_3)

{
  return param_2 * param_3 + param_1;
}

// 011371E0  FUN_011371e0  size=40  [run]
void __thiscall FUN_011371e0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = param_2;
  return;
}

// 01137220  FUN_01137220  size=15  [run]
int FUN_01137220(int param_1,int param_2,int param_3)

{
  return param_2 * param_3 + param_1;
}

// 01137230  FUN_01137230  size=15  [run]
int FUN_01137230(int param_1,int param_2,int param_3)

{
  return param_2 * param_3 + param_1;
}

// 01137240  FUN_01137240  size=15  [run]
int FUN_01137240(int param_1,int param_2,int param_3)

{
  return param_2 * param_3 + param_1;
}

// 01137250  FUN_01137250  size=15  [run]
int FUN_01137250(int param_1,int param_2,int param_3)

{
  return param_2 * param_3 + param_1;
}

// 01137270  FUN_01137270  size=52  [run]
undefined4 __thiscall FUN_01137270(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x70);
    return uVar3;
  }
  return 0;
}

// 011372B0  FUN_011372b0  size=25  [run]
void __thiscall FUN_011372b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x70);
  return;
}

// 011372F0  FUN_011372f0  size=35  [run]
void FUN_011372f0(undefined2 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined2 *)(param_2 + (int)param_1);
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 01137330  FUN_01137330  size=26  [run]
void __thiscall FUN_01137330(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01137360  FUN_01137360  size=24  [run]
void __thiscall
FUN_01137360(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01137390  FUN_01137390  size=25  [run]
void __thiscall FUN_01137390(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 6);
  return;
}

// 011373B0  FUN_011373b0  size=33  [run]
int * __thiscall FUN_011373b0(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = *param_2;
  return param_1;
}

// 011373E0  FUN_011373e0  size=22  [run]
void __fastcall FUN_011373e0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01137400  FUN_01137400  size=52  [run]
void __thiscall FUN_01137400(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  if (*param_1 != 0) {
    FUN_010060a0();
    *param_1 = *param_2;
    return;
  }
  *param_1 = *param_2;
  return;
}

// 01137440  FUN_01137440  size=22  [run]
void __thiscall
FUN_01137440(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = minps(*param_2,*param_3);
  *param_1 = auVar1;
  return;
}

// 01137460  FUN_01137460  size=22  [run]
void __thiscall
FUN_01137460(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = maxps(*param_2,*param_3);
  *param_1 = auVar1;
  return;
}

// 01137480  FUN_01137480  size=13  [run]
void __thiscall FUN_01137480(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// 011374A0  FUN_011374a0  size=25  [run]
int __thiscall FUN_011374a0(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x34) + param_2 * 0x38;
}

// 011374D0  FUN_011374d0  size=39  [run]
void FUN_011374d0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x40);
  }
  return;
}

// 01137500  FUN_01137500  size=18  [run]
void __thiscall FUN_01137500(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3c) = param_2 | 0x3f000000;
  return;
}

// 011375D0  FUN_011375d0  size=45  [run]
undefined4 __thiscall FUN_011375d0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,2);
    return uVar1;
  }
  return 0;
}

// 01137600  FUN_01137600  size=55  [run]
void __thiscall FUN_01137600(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x70);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01137640  FUN_01137640  size=70  [run]
int __thiscall FUN_01137640(int *param_1,undefined4 param_2,int param_3)

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
    FUN_0100a210(param_2,param_1,iVar3,0x70);
  }
  param_1[1] = param_1[1] + param_3;
  return iVar2 * 0x70 + *param_1;
}

// 01137690  FUN_01137690  size=120  [run]
undefined4 * __thiscall FUN_01137690(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = param_3;
  uVar2 = param_1[2] & 0x3fffffff;
  if ((int)uVar2 < param_3[1]) {
    if (-1 < (int)param_1[2]) {
      (**(code **)(*param_2 + 0x10))(*param_1,uVar2 * 2);
    }
    param_3 = (int *)(piVar1[1] * 2);
    uVar3 = (**(code **)(*param_2 + 0xc))(&param_3);
    *param_1 = uVar3;
    param_1[2] = (int)param_3 / 2;
  }
  iVar6 = piVar1[1];
  puVar4 = (undefined2 *)*param_1;
  param_1[1] = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar1 - (int)puVar4;
    do {
      *puVar4 = *(undefined2 *)(iVar5 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return param_1;
}

// 01137710  FUN_01137710  size=52  [run]
undefined4 __thiscall FUN_01137710(int param_1,undefined4 param_2,int param_3)

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

// 01137750  FUN_01137750  size=34  [run]
void FUN_01137750(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01137790  FUN_01137790  size=24  [run]
void __thiscall
FUN_01137790(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 011377B0  FUN_011377b0  size=52  [run]
undefined4 __thiscall FUN_011377b0(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x40);
    return uVar3;
  }
  return 0;
}

// 011377F0  FUN_011377f0  size=62  [run]
void FUN_011377f0(int *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      if (*(int *)(param_2 + (int)param_1) != 0) {
        FUN_01006000();
      }
      if (*param_1 != 0) {
        FUN_010060a0();
      }
      *param_1 = *(int *)(param_2 + (int)param_1);
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 01137830  FUN_01137830  size=59  [run]
void FUN_01137830(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  
  if (0 < param_2) {
    param_1 = param_1 - (int)param_3;
    do {
      piVar1 = (int *)(param_1 + (int)param_3);
      if (piVar1 != (int *)0x0) {
        if (*param_3 != 0) {
          FUN_01006000();
        }
        *piVar1 = *param_3;
      }
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01137870  FUN_01137870  size=39  [run]
void FUN_01137870(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 011378A0  FUN_011378a0  size=61  [run]
void __thiscall FUN_011378a0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(bool *)(param_1 + 0x17) =
       0.0 < param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_1 + 0x50) = *param_2;
  *(float *)(param_1 + 0x54) = fVar1;
  *(float *)(param_1 + 0x58) = fVar2;
  *(float *)(param_1 + 0x5c) = fVar3;
  return;
}

// 011378E0  FUN_011378e0  size=46  [run]
undefined4 __thiscall FUN_011378e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,2);
    return uVar1;
  }
  return 0;
}

// 01137910  FUN_01137910  size=56  [run]
void __thiscall FUN_01137910(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x70);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01137950  FUN_01137950  size=71  [run]
int __thiscall FUN_01137950(int *param_1,int param_2)

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
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar3,0x70);
  }
  param_1[1] = param_1[1] + param_2;
  return iVar2 * 0x70 + *param_1;
}

// 011379A0  FUN_011379a0  size=130  [run]
undefined4 * __thiscall FUN_011379a0(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = param_2;
  uVar2 = param_1[2] & 0x3fffffff;
  if ((int)uVar2 < param_2[1]) {
    if (-1 < (int)param_1[2]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar2 * 2);
    }
    param_2 = (int *)(piVar1[1] * 2);
    uVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *param_1 = uVar3;
    param_1[2] = (int)param_2 / 2;
  }
  iVar6 = piVar1[1];
  puVar4 = (undefined2 *)*param_1;
  param_1[1] = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar1 - (int)puVar4;
    do {
      *puVar4 = *(undefined2 *)(iVar5 + (int)puVar4);
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return param_1;
}

// 01137A30  FUN_01137a30  size=98  [run]
int __thiscall FUN_01137a30(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = iVar1 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  puVar3 = (undefined4 *)(*param_1 + param_1[1] * 4);
  iVar4 = param_3;
  if (0 < param_3) {
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_1[1] + param_3;
  return *param_1 + iVar1 * 4;
}

// 01137AA0  FUN_01137aa0  size=60  [run]
void __thiscall FUN_01137aa0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x70);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01137AE0  FUN_01137ae0  size=29  [run]
void __thiscall FUN_01137ae0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01137B00  FUN_01137b00  size=61  [run]
int * __thiscall FUN_01137b00(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 01137B40  FUN_01137b40  size=99  [run]
int __thiscall FUN_01137b40(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = iVar1 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  puVar3 = (undefined4 *)(*param_1 + param_1[1] * 4);
  iVar4 = param_2;
  if (0 < param_2) {
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar1 * 4;
}

// 01137BB0  FUN_01137bb0  size=60  [run]
void __fastcall FUN_01137bb0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x70);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01137BF0  FUN_01137bf0  size=60  [run]
void __fastcall FUN_01137bf0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x70);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01137C30  FUN_01137c30  size=43  [run]
void FUN_01137c30(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 4) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 4 + param_2 * 4) = 0;
  }
  return;
}

// 01137C60  FUN_01137c60  size=25  [run]
void __thiscall FUN_01137c60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  return;
}

// 01137C80  FUN_01137c80  size=268  [run]
void __thiscall FUN_01137c80(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_c;
  
  iVar2 = param_3[1];
  iVar5 = param_1[1];
  local_c = iVar5;
  if (iVar2 <= iVar5) {
    local_c = iVar2;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar2) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    FUN_0100a210(param_2,param_1,iVar4,4);
  }
  iVar4 = (iVar5 - iVar2) + -1;
  iVar5 = *param_1 + iVar2 * 4;
  while (-1 < iVar4) {
    if (*(int *)(iVar5 + iVar4 * 4) != 0) {
      FUN_010060a0();
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar5 + 4 + iVar4 * 4) = 0;
  }
  piVar3 = (int *)*param_1;
  if (0 < local_c) {
    iVar5 = *param_3 - (int)piVar3;
    param_2 = local_c;
    do {
      if (*(int *)(iVar5 + (int)piVar3) != 0) {
        FUN_01006000();
      }
      if (*piVar3 != 0) {
        FUN_010060a0();
      }
      *piVar3 = *(int *)(iVar5 + (int)piVar3);
      piVar3 = piVar3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  piVar3 = (int *)(*param_3 + local_c * 4);
  param_3 = (int *)(iVar2 - local_c);
  if (0 < (int)param_3) {
    iVar5 = (*param_1 + local_c * 4) - (int)piVar3;
    do {
      piVar1 = (int *)(iVar5 + (int)piVar3);
      if (piVar1 != (int *)0x0) {
        if (*piVar3 != 0) {
          FUN_01006000();
        }
        *piVar1 = *piVar3;
      }
      piVar3 = piVar3 + 1;
      param_3 = (int *)((int)param_3 + -1);
    } while (param_3 != (int *)0x0);
    param_1[1] = iVar2;
    return;
  }
  param_1[1] = iVar2;
  return;
}

// 01137DD0  FUN_01137dd0  size=271  [run]
void __thiscall FUN_01137dd0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  
  iVar2 = param_2[1];
  iVar5 = param_1[1];
  local_c = iVar5;
  if (iVar2 <= iVar5) {
    local_c = iVar2;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar2) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar4,4);
  }
  iVar4 = (iVar5 - iVar2) + -1;
  iVar5 = *param_1 + iVar2 * 4;
  while (-1 < iVar4) {
    if (*(int *)(iVar5 + iVar4 * 4) != 0) {
      FUN_010060a0();
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar5 + 4 + iVar4 * 4) = 0;
  }
  piVar3 = (int *)*param_1;
  if (0 < local_c) {
    iVar5 = *param_2 - (int)piVar3;
    local_10 = local_c;
    do {
      if (*(int *)(iVar5 + (int)piVar3) != 0) {
        FUN_01006000();
      }
      if (*piVar3 != 0) {
        FUN_010060a0();
      }
      *piVar3 = *(int *)(iVar5 + (int)piVar3);
      piVar3 = piVar3 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  piVar3 = (int *)(*param_2 + local_c * 4);
  param_2 = (int *)(iVar2 - local_c);
  if (0 < (int)param_2) {
    iVar5 = (*param_1 + local_c * 4) - (int)piVar3;
    do {
      piVar1 = (int *)(iVar5 + (int)piVar3);
      if (piVar1 != (int *)0x0) {
        if (*piVar3 != 0) {
          FUN_01006000();
        }
        *piVar1 = *piVar3;
      }
      piVar3 = piVar3 + 1;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
    param_1[1] = iVar2;
    return;
  }
  param_1[1] = iVar2;
  return;
}

// 01137EE0  FUN_01137ee0  size=97  [run]
void __thiscall FUN_01137ee0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01137F50  FUN_01137f50  size=328  [run]
void __thiscall FUN_01137f50(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_10;
  int local_8;
  
  *param_1 = *param_2;
  uVar3 = *(undefined4 *)((int)param_2 + 0xc);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((int)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  iVar10 = *(int *)(param_1 + 3);
  iVar2 = *(int *)(param_2 + 3);
  local_8 = iVar10;
  if (iVar2 <= iVar10) {
    local_8 = iVar2;
  }
  uVar9 = *(uint *)((int)param_1 + 0x1c) & 0x3fffffff;
  if ((int)uVar9 < iVar2) {
    iVar8 = uVar9 * 2;
    iVar6 = iVar2;
    if (iVar2 < iVar8) {
      iVar6 = iVar8;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)((int)param_1 + 0x14),iVar6,4);
  }
  iVar8 = (iVar10 - iVar2) + -1;
  iVar10 = *(int *)((int)param_1 + 0x14) + iVar2 * 4;
  while (-1 < iVar8) {
    if (*(int *)(iVar10 + iVar8 * 4) != 0) {
      FUN_010060a0();
    }
    iVar8 = iVar8 + -1;
    *(undefined4 *)(iVar10 + 4 + iVar8 * 4) = 0;
  }
  piVar7 = *(int **)((int)param_1 + 0x14);
  if (0 < local_8) {
    iVar10 = *(int *)((int)param_2 + 0x14) - (int)piVar7;
    local_10 = local_8;
    do {
      if (*(int *)(iVar10 + (int)piVar7) != 0) {
        FUN_01006000();
      }
      if (*piVar7 != 0) {
        FUN_010060a0();
      }
      *piVar7 = *(int *)(iVar10 + (int)piVar7);
      piVar7 = piVar7 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  piVar7 = (int *)(*(int *)((int)param_2 + 0x14) + local_8 * 4);
  local_10 = iVar2 - local_8;
  if (0 < local_10) {
    iVar10 = (*(int *)((int)param_1 + 0x14) + local_8 * 4) - (int)piVar7;
    do {
      piVar1 = (int *)(iVar10 + (int)piVar7);
      if (piVar1 != (int *)0x0) {
        if (*piVar7 != 0) {
          FUN_01006000();
        }
        *piVar1 = *piVar7;
      }
      piVar7 = piVar7 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *(int *)(param_1 + 3) = iVar2;
  uVar3 = *(undefined4 *)((int)param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 5);
  uVar5 = *(undefined4 *)((int)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((int)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((int)param_1 + 0x2c) = uVar5;
  uVar3 = *(undefined4 *)((int)param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 7);
  uVar5 = *(undefined4 *)((int)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((int)param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)((int)param_1 + 0x3c) = uVar5;
  return;
}

// 011380A0  FUN_011380a0  size=100  [run]
void __fastcall FUN_011380a0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01138110  FUN_01138110  size=100  [run]
void __fastcall FUN_01138110(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 011381B0  FUN_011381b0  size=72  [run]
void FUN_011381b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x1c);
    do {
      if (puVar1 != (undefined4 *)0x1c) {
        *(undefined2 *)(puVar1 + -7) = 0xb;
        *(undefined2 *)((int)puVar1 + -0x16) = 0;
        *(undefined2 *)(puVar1 + -6) = 0;
        puVar1[-4] = 0;
        puVar1[-5] = 0;
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
      }
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01138200  FUN_01138200  size=53  [run]
int __thiscall FUN_01138200(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_011366c0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x40);
  }
  return param_1;
}

// 01138240  FUN_01138240  size=152  [run]
int __thiscall FUN_01138240(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = iVar1 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x40);
  }
  if (0 < param_3) {
    puVar3 = (undefined4 *)(param_1[1] * 0x40 + *param_1 + 0x1c);
    iVar4 = param_3;
    do {
      if (puVar3 != (undefined4 *)0x1c) {
        *(undefined2 *)(puVar3 + -7) = 0xb;
        *(undefined2 *)((int)puVar3 + -0x16) = 0;
        *(undefined2 *)(puVar3 + -6) = 0;
        puVar3[-4] = 0;
        puVar3[-5] = 0;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
      }
      puVar3 = puVar3 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_1[1] + param_3;
  return iVar1 * 0x40 + *param_1;
}

// 011382E0  FUN_011382e0  size=36  [run]
void FUN_011382e0(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_011366c0();
  }
  return;
}

// 01138310  FUN_01138310  size=152  [run]
int __thiscall FUN_01138310(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1[1];
  iVar4 = iVar1 + param_2;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x40);
  }
  if (0 < param_2) {
    puVar3 = (undefined4 *)(param_1[1] * 0x40 + *param_1 + 0x1c);
    iVar4 = param_2;
    do {
      if (puVar3 != (undefined4 *)0x1c) {
        *(undefined2 *)(puVar3 + -7) = 0xb;
        *(undefined2 *)((int)puVar3 + -0x16) = 0;
        *(undefined2 *)(puVar3 + -6) = 0;
        puVar3[-4] = 0;
        puVar3[-5] = 0;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
      }
      puVar3 = puVar3 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_1[1] + param_2;
  return iVar1 * 0x40 + *param_1;
}

// 011383B0  FUN_011383b0  size=44  [run]
undefined4 __fastcall FUN_011383b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar2 = FUN_011366c0();
  }
  param_1[1] = 0;
  return uVar2;
}

// 011383E0  FUN_011383e0  size=93  [run]
void __thiscall FUN_011383e0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_011366c0();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01138440  FUN_01138440  size=93  [run]
void __fastcall FUN_01138440(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_011366c0();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011384A0  FUN_011384a0  size=93  [run]
void __fastcall FUN_011384a0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_011366c0();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01138500  hkpExtendedMeshShape::vf00  size=8  [run]
void hkpExtendedMeshShape::vf00(void)

{
  vf00();
  return;
}

// 01138510  FUN_01138510  size=38  [run]
void FUN_01138510(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01138540  hkpExtendedMeshShape::vf00  size=52  [run]
int __thiscall hkpExtendedMeshShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_130();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 011385B0  hkBaseObject::hkBaseObject_44  size=7  [run]
void __fastcall hkBaseObject::hkBaseObject_44(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 011385C0  hkpBoxShape::vf44  size=17  [run]
void __thiscall hkpBoxShape::vf44(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}

// 011385E0  hkpBoxShape::vf10  size=161  [run]
void __thiscall hkpBoxShape::vf10(int param_1,float *param_2,float param_3,float *param_4)

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
  
  fVar10 = *(float *)(param_1 + 0x20);
  fVar1 = *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x28);
  param_3 = *(float *)(param_1 + 0x10) + param_3;
  fVar3 = param_2[0xc];
  fVar4 = param_2[0xd];
  fVar5 = param_2[0xe];
  fVar6 = param_2[0xf];
  fVar7 = ABS(fVar1 * param_2[4]) + ABS(fVar10 * *param_2) + ABS(fVar2 * param_2[8]) + param_3;
  fVar8 = ABS(fVar1 * param_2[5]) + ABS(fVar10 * param_2[1]) + ABS(fVar2 * param_2[9]) + param_3;
  fVar9 = ABS(fVar1 * param_2[6]) + ABS(fVar10 * param_2[2]) + ABS(fVar2 * param_2[10]) + param_3;
  fVar10 = ABS(fVar1 * param_2[7]) + ABS(fVar10 * param_2[3]) + ABS(fVar2 * param_2[0xb]) + param_3;
  param_4[4] = fVar3 + fVar7;
  param_4[5] = fVar4 + fVar8;
  param_4[6] = fVar5 + fVar9;
  param_4[7] = fVar6 + fVar10;
  *param_4 = -fVar7 + fVar3;
  param_4[1] = -fVar8 + fVar4;
  param_4[2] = -fVar9 + fVar5;
  param_4[3] = -fVar10 + fVar6;
  return;
}

// 01138690  hkpBoxShape::vf28  size=16  [run]
void hkpBoxShape::vf28(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 011386A0  hkpBoxShape::vf24  size=73  [run]
void __thiscall hkpBoxShape::vf24(int param_1,ushort *param_2,int param_3,float *param_4)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  while (param_3 = param_3 + -1, -1 < param_3) {
    uVar1 = *param_2;
    iVar8 = (uint)uVar1 * 0x10;
    fVar2 = *(float *)(&UNK_017dd2e4 + iVar8);
    fVar3 = *(float *)(&UNK_017dd2e8 + iVar8);
    fVar4 = *(float *)(&UNK_017dd2ec + iVar8);
    fVar5 = *(float *)(param_1 + 0x24);
    fVar6 = *(float *)(param_1 + 0x28);
    fVar7 = *(float *)(param_1 + 0x2c);
    *param_4 = *(float *)(&DAT_017dd2e0 + iVar8) * *(float *)(param_1 + 0x20);
    param_4[1] = fVar2 * fVar5;
    param_4[2] = fVar3 * fVar6;
    param_4[3] = fVar4 * fVar7;
    param_4[3] = (float)(uVar1 | 0x3f000000);
    param_4 = param_4 + 4;
    param_2 = param_2 + 1;
  }
  return;
}

// 011386F0  hkpBoxShape::vf30  size=121  [run]
void __thiscall hkpBoxShape::vf30(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  fVar2 = *(float *)(param_1 + 0x10);
  pfVar10 = (float *)&DAT_017dd2e0;
  fStack_18 = (float)*(undefined8 *)(param_1 + 0x28);
  local_20 = (float)*(undefined8 *)(param_1 + 0x20);
  fStack_1c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  iVar12 = 3;
  pfVar11 = (float *)(param_2 + 0x10);
  do {
    fVar3 = pfVar10[4];
    fVar4 = pfVar10[5];
    fVar5 = pfVar10[6];
    fVar6 = pfVar10[7];
    fVar7 = pfVar10[1];
    fVar8 = pfVar10[2];
    fVar9 = pfVar10[3];
    pfVar1 = (float *)(param_2 + -0x17dd2e0 + (int)pfVar10);
    *pfVar1 = local_20 * *pfVar10;
    pfVar1[1] = fStack_1c * fVar7;
    pfVar1[2] = fStack_18 * fVar8;
    pfVar1[3] = fVar2 * fVar9;
    *pfVar11 = fVar3 * local_20;
    pfVar11[1] = fVar4 * fStack_1c;
    pfVar11[2] = fVar5 * fStack_18;
    pfVar11[3] = fVar6 * fVar2;
    pfVar10 = pfVar10 + 8;
    pfVar11 = pfVar11 + 8;
    iVar12 = iVar12 + -1;
  } while (-1 < iVar12);
  return;
}

// 01138770  hkpBoxShape::hkpBoxShape  size=112  [run]
void __thiscall hkpBoxShape::hkpBoxShape(undefined4 *param_1,undefined8 *param_2,undefined4 param_3)

{
  float fVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *(undefined2 *)(param_1 + 2) = 0x403;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = param_3;
  *param_1 = vftable;
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined8 *)(param_1 + 10) = param_2[1];
  fVar1 = (float)param_1[8];
  if ((float)param_1[9] <= (float)param_1[8]) {
    fVar1 = (float)param_1[9];
  }
  param_1[0xb] = fVar1;
  if ((float)param_1[10] < fVar1) {
    fVar1 = (float)param_1[10];
  }
  param_1[0xb] = fVar1;
  return;
}

// 011387E0  hkpBoxShape::hkpBoxShape_2  size=32  [run]
undefined4 * __thiscall hkpBoxShape::hkpBoxShape_2(undefined4 *param_1,undefined4 param_2)

{
  hkpConvexShape::hkpConvexShape(param_2);
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 2) = 3;
  return param_1;
}

// 01138800  FUN_01138800  size=54  [run]
void __thiscall FUN_01138800(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  auVar5._4_4_ = uVar2;
  auVar5._0_4_ = uVar2;
  auVar5._8_4_ = uVar2;
  auVar5._12_4_ = uVar2;
  auVar6._4_4_ = uVar1;
  auVar6._0_4_ = uVar1;
  auVar6._8_4_ = uVar1;
  auVar6._12_4_ = uVar1;
  auVar6 = minps(auVar5,auVar6);
  auVar4._4_4_ = uVar3;
  auVar4._0_4_ = uVar3;
  auVar4._8_4_ = uVar3;
  auVar4._12_4_ = uVar3;
  auVar6 = minps(auVar4,auVar6);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  *(int *)(param_1 + 0x2c) = auVar6._12_4_;
  return;
}

// 01138840  hkpBoxShape::vf20  size=87  [run]
void __thiscall hkpBoxShape::vf20(int param_1,uint *param_2,float *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = (float)(*param_2 & 0x80000000 ^ *(uint *)(param_1 + 0x20));
  fVar4 = (float)(param_2[1] & 0x80000000 ^ *(uint *)(param_1 + 0x24));
  fVar5 = (float)(param_2[2] & 0x80000000 ^ *(uint *)(param_1 + 0x28));
  auVar1._4_4_ = -(uint)(fVar4 < 0.0);
  auVar1._0_4_ = -(uint)(fVar3 < 0.0);
  auVar1._8_4_ = -(uint)(fVar5 < 0.0);
  auVar1._12_4_ = -(uint)((float)(param_2[3] & 0x80000000 ^ *(uint *)(param_1 + 0x2c)) < 0.0);
  uVar2 = movmskps(param_1,auVar1);
  *param_3 = fVar3;
  param_3[1] = fVar4;
  param_3[2] = fVar5;
  param_3[3] = (float)(uVar2 & 7 | 0x3f000000);
  return;
}

// 011388A0  hkpBoxShape::vf14  size=632  [run]
void __thiscall hkpBoxShape::vf14(int param_1,undefined1 *param_2,float *param_3,uint *param_4)

{
  float fVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  LPVOID pvVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 extraout_EDX;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar22;
  float fVar23;
  float fVar27;
  ulonglong uVar24;
  float fVar28;
  undefined1 auVar25 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar26 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  pvVar6 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar6 + 4);
  uVar7 = extraout_EDX;
  if (puVar2 < *(undefined4 **)((int)pvVar6 + 0xc)) {
    *puVar2 = "TtrcBox";
    uVar3 = rdtsc();
    uVar7 = (undefined4)uVar3;
    puVar2[1] = uVar7;
    *(undefined4 **)((int)pvVar6 + 4) = puVar2 + 3;
  }
  fVar18 = *param_3;
  fVar20 = param_3[1];
  fVar22 = param_3[2];
  fVar23 = param_3[3];
  fVar1 = (float)param_4[4];
  fVar21 = *(float *)(param_1 + 0x10);
  fVar14 = fVar21 + *(float *)(param_1 + 0x20);
  fVar17 = fVar21 + *(float *)(param_1 + 0x24);
  fVar19 = fVar21 + *(float *)(param_1 + 0x28);
  fVar21 = fVar21 + *(float *)(param_1 + 0x2c);
  auVar33._0_4_ = param_3[4] - fVar18;
  auVar33._4_4_ = param_3[5] - fVar20;
  auVar33._8_4_ = param_3[6] - fVar22;
  auVar33._12_4_ = param_3[7] - fVar23;
  fVar38 = -fVar14;
  fVar39 = -fVar17;
  fVar40 = -fVar19;
  auVar44._4_4_ = -(uint)(fVar20 <= fVar39);
  auVar44._0_4_ = -(uint)(fVar18 <= fVar38);
  auVar44._8_4_ = -(uint)(fVar22 <= fVar40);
  auVar44._12_4_ = -(uint)(fVar23 <= fVar21);
  auVar46._0_4_ = -(uint)(auVar33._0_4_ + fVar18 <= fVar38 && fVar18 <= fVar38);
  auVar46._4_4_ = -(uint)(auVar33._4_4_ + fVar20 <= fVar39 && fVar20 <= fVar39);
  auVar46._8_4_ = -(uint)(auVar33._8_4_ + fVar22 <= fVar40 && fVar22 <= fVar40);
  auVar46._12_4_ = -(uint)(auVar33._12_4_ + fVar23 <= fVar21 && fVar23 <= fVar21);
  auVar36._4_4_ = -(uint)(fVar17 <= auVar33._4_4_ + fVar20 && fVar17 <= fVar20);
  auVar36._0_4_ = -(uint)(fVar14 <= auVar33._0_4_ + fVar18 && fVar14 <= fVar18);
  auVar36._8_4_ = -(uint)(fVar19 <= auVar33._8_4_ + fVar22 && fVar19 <= fVar22);
  auVar36._12_4_ = -(uint)(fVar21 <= auVar33._12_4_ + fVar23 && fVar21 <= fVar23);
  uVar8 = movmskps(pvVar6,auVar46 | auVar36);
  if (((uVar8 & 7) == 0) &&
     (auVar4._4_4_ = -(uint)(fVar17 <= fVar20), auVar4._0_4_ = -(uint)(fVar14 <= fVar18),
     auVar4._8_4_ = -(uint)(fVar19 <= fVar22), auVar4._12_4_ = -(uint)(fVar21 <= fVar23),
     uVar10 = movmskps(uVar7,auVar44 | auVar4), (uVar10 & 7) != 0)) {
    uVar10 = -(uint)(auVar33._0_4_ != 0.0);
    uVar11 = -(uint)(auVar33._4_4_ != 0.0);
    uVar12 = -(uint)(auVar33._8_4_ != 0.0);
    uVar13 = -(uint)(auVar33._12_4_ != 0.0);
    auVar25._0_8_ = CONCAT44(~uVar11,~uVar10) & 0x3400000034000000;
    auVar25._8_4_ = ~uVar12 & 0x34000000;
    auVar25._12_4_ = ~uVar13 & 0x34000000;
    auVar41._0_4_ = uVar10 & (uint)auVar33._0_4_;
    auVar41._4_4_ = uVar11 & (uint)auVar33._4_4_;
    auVar41._8_4_ = uVar12 & (uint)auVar33._8_4_;
    auVar41._12_4_ = uVar13 & (uint)auVar33._12_4_;
    auVar25 = auVar25 | auVar41;
    auVar36 = rcpps(auVar33,auVar25);
    fVar38 = (2.0 - auVar36._0_4_ * auVar25._0_4_) * auVar36._0_4_;
    fVar40 = (2.0 - auVar36._4_4_ * auVar25._4_4_) * auVar36._4_4_;
    fVar28 = (2.0 - auVar36._8_4_ * auVar25._8_4_) * auVar36._8_4_;
    fVar30 = (2.0 - auVar36._12_4_ * auVar25._12_4_) * auVar36._12_4_;
    fVar39 = fVar38 * (fVar14 + fVar18);
    fVar27 = fVar40 * (fVar17 + fVar20);
    uVar24 = CONCAT44(fVar27,fVar39) ^ 0x8000000080000000;
    fVar29 = -(fVar28 * (fVar19 + fVar22));
    fVar31 = -(fVar30 * (fVar21 + fVar23));
    auVar37._0_4_ = fVar38 * (fVar14 - fVar18);
    auVar37._4_4_ = fVar40 * (fVar17 - fVar20);
    auVar37._8_4_ = fVar28 * (fVar19 - fVar22);
    auVar37._12_4_ = fVar30 * (fVar21 - fVar23);
    auVar32._8_4_ = fVar29;
    auVar32._0_8_ = uVar24;
    auVar32._12_4_ = fVar31;
    auVar33 = minps(auVar32,auVar37);
    fVar23 = (float)(~uVar10 & 0xff7fffee | auVar33._0_4_ & uVar10);
    fVar14 = (float)(~uVar11 & 0xff7fffee | auVar33._4_4_ & uVar11);
    fVar17 = (float)(~uVar12 & 0xff7fffee | auVar33._8_4_ & uVar12);
    auVar34._8_4_ = fVar29;
    auVar34._0_8_ = uVar24;
    auVar34._12_4_ = fVar31;
    auVar36 = maxps(auVar34,auVar37);
    uVar10 = auVar36._0_4_ & uVar10 | ~uVar10 & 0x7f7fffee;
    uVar11 = auVar36._4_4_ & uVar11 | ~uVar11 & 0x7f7fffee;
    auVar35._8_4_ = auVar36._8_4_ & uVar12 | ~uVar12 & 0x7f7fffee;
    auVar42._4_4_ = fVar14;
    auVar42._0_4_ = fVar14;
    auVar42._8_4_ = fVar14;
    auVar42._12_4_ = fVar14;
    auVar15._4_4_ = fVar23;
    auVar15._0_4_ = fVar23;
    auVar15._8_4_ = fVar23;
    auVar15._12_4_ = fVar23;
    auVar36 = maxps(auVar42,auVar15);
    auVar16._4_4_ = fVar17;
    auVar16._0_4_ = fVar17;
    auVar16._8_4_ = fVar17;
    auVar16._12_4_ = fVar17;
    auVar36 = maxps(auVar16,auVar36);
    auVar43._4_4_ = uVar11;
    auVar43._0_4_ = uVar11;
    auVar43._8_4_ = uVar11;
    auVar43._12_4_ = uVar11;
    auVar5._4_4_ = uVar10;
    auVar5._0_4_ = uVar10;
    auVar5._8_4_ = uVar10;
    auVar5._12_4_ = uVar10;
    auVar44 = minps(auVar43,auVar5);
    auVar35._4_4_ = auVar35._8_4_;
    auVar35._0_4_ = auVar35._8_4_;
    auVar35._12_4_ = auVar35._8_4_;
    auVar44 = minps(auVar35,auVar44);
    fVar21 = auVar36._0_4_;
    fVar18 = auVar36._4_4_;
    fVar20 = auVar36._8_4_;
    fVar22 = auVar36._12_4_;
    auVar45._4_4_ = -(uint)(fVar18 == fVar14);
    auVar45._0_4_ = -(uint)(fVar21 == fVar23);
    auVar45._8_4_ = -(uint)(fVar20 == fVar17);
    auVar45._12_4_ = -(uint)(fVar22 == (float)(~uVar13 & 0xff7fffee | auVar33._12_4_ & uVar13));
    uVar8 = movmskps(uVar8,auVar45);
    if ((uVar8 & 7) == 0) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)(byte)(&DAT_0182bb80)[uVar8];
    }
    auVar26._0_4_ = -(uint)((fVar21 <= auVar44._0_4_ && 0.0 <= fVar21) && fVar21 < fVar1);
    auVar26._4_4_ = -(uint)((fVar18 <= auVar44._4_4_ && 0.0 <= fVar18) && fVar18 < fVar1);
    auVar26._8_4_ = -(uint)((fVar20 <= auVar44._8_4_ && 0.0 <= fVar20) && fVar20 < fVar1);
    auVar26._12_4_ = -(uint)((fVar22 <= auVar44._12_4_ && 0.0 <= fVar22) && fVar22 < fVar1);
    uVar10 = *(uint *)((int)&DAT_01701ca0 + uVar8 * 0x10 + 4);
    uVar11 = *(uint *)(&DAT_01701ca8 + uVar8 * 2);
    uVar12 = *(uint *)((int)&DAT_01701ca8 + uVar8 * 0x10 + 4);
    iVar9 = movmskps(&DAT_01701ca0 + uVar8 * 2,auVar26);
    if (iVar9 != 0) {
      *param_4 = -(uint)(-fVar39 < auVar37._0_4_) & 0x80000000 ^
                 *(uint *)(&DAT_01701ca0 + uVar8 * 2);
      param_4[1] = -(uint)(-fVar27 < auVar37._4_4_) & 0x80000000 ^ uVar10;
      param_4[2] = -(uint)(fVar29 < auVar37._8_4_) & 0x80000000 ^ uVar11;
      param_4[3] = -(uint)(fVar31 < auVar37._12_4_) & 0x80000000 ^ uVar12;
      param_4[4] = auVar26._0_4_ & (uint)fVar21 | ~auVar26._0_4_ & (uint)fVar1;
      param_4[param_4[0x10] + 8] = 0xffffffff;
      pvVar6 = TlsGetValue(DAT_01f8fc54);
      puVar2 = *(undefined4 **)((int)pvVar6 + 4);
      if (puVar2 < *(undefined4 **)((int)pvVar6 + 0xc)) {
        *puVar2 = &DAT_0164b09c;
        uVar3 = rdtsc();
        puVar2[1] = (int)uVar3;
        *(undefined4 **)((int)pvVar6 + 4) = puVar2 + 3;
      }
      *param_2 = 1;
      return;
    }
  }
  pvVar6 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar6 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar6 + 0xc)) {
    *puVar2 = &DAT_0164b09c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)((int)pvVar6 + 4) = puVar2 + 3;
  }
  *param_2 = 0;
  return;
}

// 01138B20  FUN_01138b20  size=29  [run]
void __thiscall FUN_01138b20(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_3 & 0x80000000 ^ *param_2;
  param_1[1] = uVar1 & 0x80000000 ^ uVar4;
  param_1[2] = uVar2 & 0x80000000 ^ uVar5;
  param_1[3] = uVar3 & 0x80000000 ^ uVar6;
  return;
}

// 01138B40  FUN_01138b40  size=115  [run]
void FUN_01138b40(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar5 = ABS(fVar2 * param_1[4]) + ABS(fVar1 * *param_1) + ABS(fVar3 * param_1[8]) + *param_3;
  fVar6 = ABS(fVar2 * param_1[5]) + ABS(fVar1 * param_1[1]) + ABS(fVar3 * param_1[9]) + param_3[1];
  fVar7 = ABS(fVar2 * param_1[6]) + ABS(fVar1 * param_1[2]) + ABS(fVar3 * param_1[10]) + param_3[2];
  fVar8 = ABS(fVar2 * param_1[7]) + ABS(fVar1 * param_1[3]) + ABS(fVar3 * param_1[0xb]) + param_3[3]
  ;
  fVar1 = param_1[0xc];
  fVar2 = param_1[0xd];
  fVar3 = param_1[0xe];
  fVar4 = param_1[0xf];
  param_4[4] = fVar1 + fVar5;
  param_4[5] = fVar2 + fVar6;
  param_4[6] = fVar3 + fVar7;
  param_4[7] = fVar4 + fVar8;
  *param_4 = -fVar5 + fVar1;
  param_4[1] = -fVar6 + fVar2;
  param_4[2] = -fVar7 + fVar3;
  param_4[3] = -fVar8 + fVar4;
  return;
}

// 01138BC0  FUN_01138bc0  size=26  [run]
void __thiscall FUN_01138bc0(float *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = -(uint)(*param_3 != *param_1);
  param_2[1] = -(uint)(fVar1 != fVar4);
  param_2[2] = -(uint)(fVar2 != fVar5);
  param_2[3] = -(uint)(fVar3 != fVar6);
  return;
}

// 01138BE0  FUN_01138be0  size=23  [run]
void __thiscall FUN_01138be0(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *param_2 = -(uint)(*param_1 < 0.0);
  param_2[1] = -(uint)(fVar1 < 0.0);
  param_2[2] = -(uint)(fVar2 < 0.0);
  param_2[3] = -(uint)(fVar3 < 0.0);
  return;
}

// 01138DE0  hkpBoxShape::vf40  size=8  [run]
undefined4 hkpBoxShape::vf40(void)

{
  return 0x30;
}

// 01138DF0  hkpBoxShape::vf2C  size=6  [run]
undefined4 hkpBoxShape::vf2C(void)

{
  return 8;
}

// 01138E00  FUN_01138e00  size=38  [run]
void FUN_01138e00(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01138E30  hkpBoxShape::vf00  size=52  [run]
int __thiscall hkpBoxShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_44();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01138E70  hkpFirstCdBodyPairCollector::vf04  size=75  [run]
void __thiscall hkpFirstCdBodyPairCollector::vf04(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0xc);
  iVar2 = param_2;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar2 = iVar1;
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  *(int *)(param_1 + 8) = iVar2;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 4);
  iVar3 = *(int *)(param_3 + 0xc);
  iVar2 = param_3;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar2 = iVar1;
    iVar3 = *(int *)(iVar1 + 0xc);
  }
  *(int *)(param_1 + 0x10) = iVar2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 4);
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

// 01138EC0  hkpShapeContainer::vf10  size=5  [run]
undefined4 hkpShapeContainer::vf10(void)

{
  return 0;
}

// 01138ED0  hkpShapeContainer::vf04  size=39  [run]
int __fastcall hkpShapeContainer::vf04(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = (**(code **)(*param_1 + 8))(); iVar1 != -1;
      iVar1 = (**(code **)(*param_1 + 0xc))(iVar1)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

// 01138F00  hkpSingleShapeContainer::vf14  size=6  [run]
undefined4 __fastcall hkpSingleShapeContainer::vf14(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 01138F20  hkpConvexTranslateShape::vf40  size=83  [run]
int __thiscall hkpConvexTranslateShape::vf40(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x18) + 0x40))(param_2,param_3 + -0x30);
  if ((-1 < iVar1) && (iVar1 <= param_3 + -0x30)) {
    if (*(int *)(param_1 + 0x18) == param_1 + 0x30) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return iVar1 + 0x30;
    }
    *(int *)(param_1 + 0x1c) = iVar1;
    return 0x30;
  }
  return -1;
}

// 01138F80  hkpConvexTranslateShape::vf38  size=4  [run]
int __fastcall hkpConvexTranslateShape::vf38(int param_1)

{
  return param_1 + 0x14;
}

// 01138F90  hkpConvexTranslateShape::vf20  size=61  [run]
void __thiscall hkpConvexTranslateShape::vf20(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x20))(param_2,param_3);
  fVar1 = *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x28);
  *param_3 = *(float *)(param_1 + 0x20) + *param_3;
  param_3[1] = fVar1 + param_3[1];
  param_3[2] = fVar2 + param_3[2];
  param_3[3] = param_3[3];
  return;
}

// 01138FD0  hkpConvexTranslateShape::vf24  size=73  [run]
void __thiscall
hkpConvexTranslateShape::vf24(int param_1,undefined4 param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x24))(param_2,param_3,param_4);
  if (0 < param_3) {
    do {
      fVar1 = *(float *)(param_1 + 0x24);
      fVar2 = *(float *)(param_1 + 0x28);
      *param_4 = *(float *)(param_1 + 0x20) + *param_4;
      param_4[1] = fVar1 + param_4[1];
      param_4[2] = fVar2 + param_4[2];
      param_4[3] = param_4[3];
      param_4 = param_4 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 01139020  hkpConvexTranslateShape::vf28  size=37  [run]
void __thiscall hkpConvexTranslateShape::vf28(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x28))(param_2);
  fVar1 = *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(param_1 + 0x2c);
  *param_2 = *(float *)(param_1 + 0x20) + *param_2;
  param_2[1] = fVar1 + param_2[1];
  param_2[2] = fVar2 + param_2[2];
  param_2[3] = fVar3 + param_2[3];
  return;
}

// 01139050  hkpConvexTranslateShape::vf44  size=37  [run]
void __thiscall hkpConvexTranslateShape::vf44(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x44))(param_2);
  fVar1 = *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x28);
  fVar3 = *(float *)(param_1 + 0x2c);
  *param_2 = *(float *)(param_1 + 0x20) + *param_2;
  param_2[1] = fVar1 + param_2[1];
  param_2[2] = fVar2 + param_2[2];
  param_2[3] = fVar3 + param_2[3];
  return;
}

// 01139080  hkpConvexTranslateShape::vf30  size=82  [run]
int __thiscall hkpConvexTranslateShape::vf30(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  
  pfVar8 = (float *)(**(code **)(**(int **)(param_1 + 0x18) + 0x30))(param_2);
  iVar9 = (**(code **)(**(int **)(param_1 + 0x18) + 0x2c))();
  if (0 < iVar9) {
    iVar10 = param_2 - (int)pfVar8;
    do {
      fVar2 = *(float *)(param_1 + 0x24);
      fVar3 = *(float *)(param_1 + 0x28);
      fVar4 = *(float *)(param_1 + 0x2c);
      fVar5 = pfVar8[1];
      fVar6 = pfVar8[2];
      fVar7 = pfVar8[3];
      pfVar1 = (float *)(iVar10 + (int)pfVar8);
      *pfVar1 = *(float *)(param_1 + 0x20) + *pfVar8;
      pfVar1[1] = fVar2 + fVar5;
      pfVar1[2] = fVar3 + fVar6;
      pfVar1[3] = fVar4 + fVar7;
      pfVar8 = pfVar8 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    return param_2;
  }
  return param_2;
}

// 011390E0  hkpConvexTranslateShape::vf10  size=108  [run]
void __thiscall
hkpConvexTranslateShape::vf10(int param_1,float *param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  (**(code **)(**(int **)(param_1 + 0x18) + 0x10))(param_2,param_3,param_4);
  fVar6 = *(float *)(param_1 + 0x20);
  fVar1 = *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x28);
  fVar3 = fVar1 * param_2[4] + fVar6 * *param_2 + fVar2 * param_2[8];
  fVar4 = fVar1 * param_2[5] + fVar6 * param_2[1] + fVar2 * param_2[9];
  fVar5 = fVar1 * param_2[6] + fVar6 * param_2[2] + fVar2 * param_2[10];
  fVar6 = fVar1 * param_2[7] + fVar6 * param_2[3] + fVar2 * param_2[0xb];
  *param_4 = *param_4 + fVar3;
  param_4[1] = param_4[1] + fVar4;
  param_4[2] = param_4[2] + fVar5;
  param_4[3] = param_4[3] + fVar6;
  param_4[4] = param_4[4] + fVar3;
  param_4[5] = param_4[5] + fVar4;
  param_4[6] = param_4[6] + fVar5;
  param_4[7] = param_4[7] + fVar6;
  return;
}

// 01139150  hkpSingleShapeContainer::hkpSingleShapeContainer_3  size=39  [run]
undefined4 * __thiscall
hkpSingleShapeContainer::hkpSingleShapeContainer_3(undefined4 *param_1,undefined4 param_2)

{
  hkpConvexShape::hkpConvexShape(param_2);
  param_1[5] = vftable;
  *param_1 = hkpConvexTranslateShape::vftable;
  *(undefined1 *)(param_1 + 2) = 10;
  return param_1;
}

// 01139180  hkpConvexTranslateShape::vf3C  size=66  [run]
float10 __thiscall hkpConvexTranslateShape::vf3C(int param_1,float *param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x3c))(param_2);
  return fVar1 + (float10)(*(float *)(param_1 + 0x24) * param_2[1] +
                           *(float *)(param_1 + 0x20) * *param_2 +
                          *(float *)(param_1 + 0x28) * param_2[2]);
}

// 011391D0  hkpConvexTranslateShape::vf14  size=262  [run]
char * __thiscall
hkpConvexTranslateShape::vf14(int param_1,char *param_2,float *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  LPVOID pvVar11;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_14;
  
  pvVar11 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar11 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar11 + 0xc)) {
    *puVar1 = "TtrcConvTransl";
    uVar2 = rdtsc();
    local_14 = (undefined4)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar11 + 4) = puVar1 + 3;
  }
  local_30 = *(undefined8 *)(param_3 + 8);
  _local_50 = CONCAT44(param_3[1] - *(float *)(param_1 + 0x24),*param_3 - *(float *)(param_1 + 0x20)
                      );
  _fStack_48 = CONCAT44(param_3[3] - *(float *)(param_1 + 0x2c),
                        param_3[2] - *(float *)(param_1 + 0x28));
  fVar3 = param_3[4];
  fVar4 = param_3[5];
  fVar5 = param_3[6];
  fVar6 = param_3[7];
  fVar7 = *(float *)(param_1 + 0x20);
  fVar8 = *(float *)(param_1 + 0x24);
  fVar9 = *(float *)(param_1 + 0x28);
  fVar10 = *(float *)(param_1 + 0x2c);
  local_28 = *(undefined8 *)(param_3 + 10);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  _local_40 = CONCAT44(fVar4 - fVar8,fVar3 - fVar7);
  _fStack_38 = CONCAT44(fVar6 - fVar10,fVar5 - fVar9);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(param_2,&local_50,param_4);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + -1;
  if (*param_2 != '\0') {
    *(undefined4 *)(param_4 + 0x20 + *(int *)(param_4 + 0x40) * 4) = 0;
  }
  pvVar11 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar11 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar11 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar11 + 4) = puVar1 + 3;
  }
  return param_2;
}

// 011392E0  hkpConvexTranslateShape::vf18  size=233  [run]
void __thiscall
hkpConvexTranslateShape::vf18(int param_1,float *param_2,int param_3,undefined4 param_4)

{
  undefined1 local_d0 [64];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
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
  undefined8 local_30;
  undefined8 local_28;
  int *local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  int local_14;
  
  local_30 = *(undefined8 *)(param_2 + 8);
  local_28 = *(undefined8 *)(param_2 + 10);
  local_60 = *(float *)(param_1 + 0x20);
  fStack_5c = *(float *)(param_1 + 0x24);
  fStack_58 = *(float *)(param_1 + 0x28);
  fStack_54 = *(float *)(param_1 + 0x2c);
  _local_50 = CONCAT44(param_2[1] - fStack_5c,*param_2 - local_60);
  _fStack_48 = CONCAT44(param_2[3] - fStack_54,param_2[2] - fStack_58);
  _local_40 = CONCAT44(param_2[5] - fStack_5c,param_2[4] - local_60);
  _fStack_38 = CONCAT44(param_2[7] - fStack_54,param_2[6] - fStack_58);
  local_90 = 0x3f800000;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0;
  uStack_7c = 0x3f800000;
  uStack_78 = 0;
  uStack_74 = 0;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0x3f800000;
  uStack_64 = 0;
  FUN_01004cf0(*(undefined4 *)(param_3 + 8),&local_90);
  local_20 = *(int **)(param_1 + 0x18);
  local_18 = local_d0;
  local_14 = param_3;
  local_1c = 0;
  (**(code **)(*local_20 + 0x18))(&local_50,&local_20,param_4);
  return;
}

// 011393E0  FUN_011393e0  size=13  [run]
void __thiscall FUN_011393e0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + param_2;
  return;
}

// 011393F0  FUN_011393f0  size=13  [run]
void __thiscall FUN_011393f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 01139400  FUN_01139400  size=21  [run]
void __thiscall FUN_01139400(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}

// 01139420  FUN_01139420  size=18  [run]
void __thiscall FUN_01139420(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 01139450  hkpSingleShapeContainer::hkpSingleShapeContainer_4  size=35  [run]
undefined4 * __thiscall
hkpSingleShapeContainer::hkpSingleShapeContainer_4(undefined4 *param_1,undefined4 param_2)

{
  hkpConvexShape::hkpConvexShape(param_2);
  *param_1 = hkpConvexTransformShapeBase::vftable;
  param_1[5] = vftable;
  return param_1;
}

// 01139490  hkpShape::vf40  size=6  [run]
undefined4 hkpShape::vf40(void)

{
  return 0xffffffff;
}

// 011394A0  hkpShape::vf1C  size=335  [run]
void __thiscall
hkpShape::vf1C(int *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,
              undefined1 (*param_5) [16])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint extraout_EDX;
  int iVar4;
  uint uVar5;
  undefined4 local_d0 [35];
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_20;
  uint local_1c;
  uint local_18;
  char local_11;
  
  local_30 = param_3[0x18];
  local_d0[0x14] = param_3[1];
  local_d0[0x15] = param_3[5];
  local_d0[0x16] = param_3[9];
  local_d0[0x17] = 0;
  local_d0[0x18] = param_3[2];
  local_d0[0x19] = param_3[6];
  local_d0[0x1a] = param_3[10];
  local_d0[0x1b] = 0;
  local_d0[0x1c] = param_3[3];
  local_d0[0x1d] = param_3[7];
  local_d0[0x1e] = param_3[0xb];
  local_d0[0x1f] = 0;
  local_28 = param_3[0x1a];
  local_d0[4] = param_3[0xd];
  local_d0[5] = param_3[0x11];
  local_d0[6] = param_3[0x15];
  local_d0[7] = 0;
  iVar4 = 0;
  local_d0[0x10] = *param_3;
  local_d0[0x11] = param_3[4];
  local_d0[0x12] = param_3[8];
  local_d0[0x13] = 0;
  local_d0[0] = param_3[0xc];
  local_d0[1] = param_3[0x10];
  local_d0[2] = param_3[0x14];
  local_d0[3] = 0;
  local_d0[8] = param_3[0xe];
  local_d0[9] = param_3[0x12];
  local_d0[10] = param_3[0x16];
  local_d0[0xb] = 0;
  local_d0[0xc] = param_3[0xf];
  local_d0[0xd] = param_3[0x13];
  local_d0[0xe] = param_3[0x17];
  local_d0[0xf] = 0;
  local_2c = 0;
  local_1c = 0;
  uVar5 = 1;
  local_18 = param_4;
  local_20 = param_1;
  do {
    param_4 = movmskps(param_4,*param_5);
    if ((uVar5 & param_4) != 0) {
      uStack_44 = *(undefined4 *)((int)local_d0 + iVar4 + 0x4c);
      local_d0[0x20] = *(undefined4 *)((int)local_d0 + iVar4 + 0x40);
      local_d0[0x21] = *(undefined4 *)((int)local_d0 + iVar4 + 0x44);
      local_d0[0x22] = *(undefined4 *)((int)local_d0 + iVar4 + 0x48);
      local_40 = *(undefined4 *)((int)local_d0 + iVar4);
      uStack_3c = *(undefined4 *)((int)local_d0 + iVar4 + 4);
      uStack_38 = *(undefined4 *)((int)local_d0 + iVar4 + 8);
      uStack_34 = *(undefined4 *)((int)local_d0 + iVar4 + 0xc);
      (**(code **)(*local_20 + 0x14))(&local_11,local_d0 + 0x20,local_18);
      param_4 = extraout_EDX;
      if (local_11 != '\0') {
        local_1c = local_1c | uVar5;
      }
    }
    local_18 = local_18 + 0x50;
    iVar4 = iVar4 + 0x10;
    uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
  } while (iVar4 < 0x40);
  iVar4 = local_1c * 0x10;
  uVar1 = *(undefined4 *)(&UNK_017dd3f4 + iVar4);
  uVar2 = *(undefined4 *)(&UNK_017dd3f8 + iVar4);
  uVar3 = *(undefined4 *)(&UNK_017dd3fc + iVar4);
  *param_2 = *(undefined4 *)(&DAT_017dd3f0 + iVar4);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}

// 011395F0  hkpShape::hkpShape  size=38  [run]
undefined4 * __thiscall hkpShape::hkpShape(undefined4 *param_1,int param_2)

{
  hkpShapeBase::hkpShapeBase(param_2);
  *param_1 = vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 0x22;
  }
  return param_1;
}

// 01139620  hkpShape::vf3C  size=184  [run]
float10 __thiscall hkpShape::vf3C(int *param_1,float *param_2)

{
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  
  local_80 = 0x3f800000;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_70 = 0;
  uStack_6c = 0x3f800000;
  uStack_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0x3f800000;
  uStack_54 = 0;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  (**(code **)(*param_1 + 0x10))(&local_80,0,&local_40);
  return (float10)(((float)((uint)((fStack_2c - fStack_3c) * 0.5) ^ (uint)param_2[1] & 0x80000000) +
                   (fStack_2c + fStack_3c) * 0.5) * param_2[1] +
                   ((float)((uint)((local_30 - local_40) * 0.5) ^ (uint)*param_2 & 0x80000000) +
                   (local_30 + local_40) * 0.5) * *param_2 +
                  ((float)((uint)((fStack_28 - fStack_38) * 0.5) ^ (uint)param_2[2] & 0x80000000) +
                  (fStack_28 + fStack_38) * 0.5) * param_2[2]);
}

// 011396E0  hkpShapeBase::vf10  size=3  [run]
void hkpShapeBase::vf10(void)

{
  return;
}

// 011396F0  hkpShapeBase::vf18  size=3  [run]
void hkpShapeBase::vf18(void)

{
  return;
}

// 01139700  hkpShapeBase::vf20  size=3  [run]
void hkpShapeBase::vf20(void)

{
  return;
}

// 01139710  hkpShapeBase::vf24  size=3  [run]
void hkpShapeBase::vf24(void)

{
  return;
}

// 01139720  hkpShapeBase::vf28  size=3  [run]
void hkpShapeBase::vf28(void)

{
  return;
}

// 01139730  hkpShapeBase::vf2C  size=3  [run]
undefined4 hkpShapeBase::vf2C(void)

{
  return 0;
}

// 01139740  hkpShapeBase::vf30  size=5  [run]
undefined4 hkpShapeBase::vf30(void)

{
  return 0;
}

// 01139750  hkpShapeBase::vf34  size=5  [run]
undefined4 hkpShapeBase::vf34(void)

{
  return 0;
}

// 01139760  hkpShapeBase::vf14  size=13  [run]
void hkpShapeBase::vf14(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}

// 01139770  hkpShapeBase::vf1C  size=20  [run]
void hkpShapeBase::vf1C(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

// 01139790  hkpShapeBase::hkpShapeBase  size=38  [run]
undefined4 * __thiscall hkpShapeBase::hkpShapeBase(undefined4 *param_1,int param_2)

{
  hkcdShape::hkcdShape(param_2);
  *param_1 = vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 0x22;
  }
  return param_1;
}

// 01139860  FUN_01139860  size=26  [run]
ushort FUN_01139860(ushort param_1,char param_2)

{
  return param_1 >> (param_2 * '\x05' & 0x1fU) & 0x1f;
}

// 01139890  FUN_01139890  size=218  [run]
void __thiscall FUN_01139890(float *param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar14;
  float fVar15;
  float *in_EAX;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar23 = *param_1;
  fVar19 = param_1[1];
  fVar27 = param_1[2];
  fVar1 = in_EAX[1];
  fVar2 = in_EAX[2];
  fVar3 = in_EAX[3];
  fVar4 = in_EAX[9];
  fVar5 = in_EAX[10];
  fVar6 = in_EAX[0xb];
  fVar7 = in_EAX[5];
  fVar8 = in_EAX[6];
  fVar9 = in_EAX[7];
  fVar20 = *in_EAX - fVar23;
  fVar21 = fVar1 - fVar23;
  fVar22 = fVar2 - fVar23;
  fVar23 = fVar3 - fVar23;
  fVar24 = in_EAX[8] - fVar27;
  fVar25 = fVar4 - fVar27;
  fVar26 = fVar5 - fVar27;
  fVar27 = fVar6 - fVar27;
  fVar10 = *param_3;
  fVar11 = param_3[1];
  fVar12 = param_3[2];
  fVar16 = in_EAX[4] - fVar19;
  fVar17 = fVar7 - fVar19;
  fVar18 = fVar8 - fVar19;
  fVar19 = fVar9 - fVar19;
  fVar13 = *param_2;
  fVar14 = param_2[1];
  fVar15 = param_2[2];
  *param_4 = (fVar12 * fVar20 - fVar10 * fVar24) * (in_EAX[4] - fVar14) +
             (*in_EAX - fVar13) * (fVar11 * fVar24 - fVar12 * fVar16) +
             (in_EAX[8] - fVar15) * (fVar10 * fVar16 - fVar11 * fVar20);
  param_4[1] = (fVar12 * fVar21 - fVar10 * fVar25) * (fVar7 - fVar14) +
               (fVar1 - fVar13) * (fVar11 * fVar25 - fVar12 * fVar17) +
               (fVar4 - fVar15) * (fVar10 * fVar17 - fVar11 * fVar21);
  param_4[2] = (fVar12 * fVar22 - fVar10 * fVar26) * (fVar8 - fVar14) +
               (fVar2 - fVar13) * (fVar11 * fVar26 - fVar12 * fVar18) +
               (fVar5 - fVar15) * (fVar10 * fVar18 - fVar11 * fVar22);
  param_4[3] = (fVar12 * fVar23 - fVar10 * fVar27) * (fVar9 - fVar14) +
               (fVar3 - fVar13) * (fVar11 * fVar27 - fVar12 * fVar19) +
               (fVar6 - fVar15) * (fVar10 * fVar19 - fVar11 * fVar23);
  return;
}

// 01139970  hkpTriangleShape::vf44  size=17  [run]
void __thiscall hkpTriangleShape::vf44(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}

// 01139990  hkpTriangleShape::vf24  size=92  [run]
void __thiscall hkpTriangleShape::vf24(int param_1,ushort *param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  while (param_3 = param_3 + -1, -1 < param_3) {
    pfVar1 = (float *)(param_1 + (*(int *)(&DAT_01b20858 + (uint)*param_2 * 4) + 2) * 0x10);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar5 = pfVar1[2];
    fVar6 = pfVar1[3];
    *param_4 = fVar3;
    param_4[1] = fVar4;
    param_4[2] = fVar5;
    param_4[3] = fVar6;
    fVar2 = *(float *)(&DAT_01b2082c + (uint)*param_2 * 4);
    fVar7 = *(float *)(param_1 + 0x54);
    fVar8 = *(float *)(param_1 + 0x58);
    fVar9 = *(float *)(param_1 + 0x5c);
    *param_4 = fVar2 * *(float *)(param_1 + 0x50) + fVar3;
    param_4[1] = fVar2 * fVar7 + fVar4;
    param_4[2] = fVar2 * fVar8 + fVar5;
    param_4[3] = fVar2 * fVar9 + fVar6;
    param_4[3] = (float)(*param_2 | 0x3f000000);
    param_4 = param_4 + 4;
    param_2 = param_2 + 1;
  }
  return;
}

// 011399F0  hkpTriangleShape::vf10  size=182  [run]
void __thiscall
hkpTriangleShape::vf10(int param_1,undefined4 param_2,float param_3,undefined1 (*param_4) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  
  param_3 = *(float *)(param_1 + 0x10) + param_3;
  FUN_01007050(param_2,param_1 + 0x20);
  FUN_01007050(param_2,param_1 + 0x30);
  FUN_01007050(param_2,param_1 + 0x40);
  auVar5 = maxps(local_20,local_30);
  auVar6 = maxps(auVar5,local_40);
  auVar5 = minps(local_20,local_30);
  auVar4 = minps(auVar5,local_40);
  *param_4 = auVar4;
  param_4[1] = auVar6;
  auVar5._4_4_ = auVar4._4_4_ + *(float *)(param_1 + 0x54);
  auVar5._0_4_ = auVar4._0_4_ + *(float *)(param_1 + 0x50);
  auVar5._8_4_ = auVar4._8_4_ + *(float *)(param_1 + 0x58);
  auVar5._12_4_ = auVar4._12_4_ + *(float *)(param_1 + 0x5c);
  auVar5 = minps(auVar4,auVar5);
  *param_4 = auVar5;
  auVar4._0_4_ = auVar6._0_4_ + *(float *)(param_1 + 0x50);
  auVar4._4_4_ = auVar6._4_4_ + *(float *)(param_1 + 0x54);
  auVar4._8_4_ = auVar6._8_4_ + *(float *)(param_1 + 0x58);
  auVar4._12_4_ = auVar6._12_4_ + *(float *)(param_1 + 0x5c);
  auVar5 = maxps(auVar6,auVar4);
  param_4[1] = auVar5;
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

// 01139AB0  hkpTriangleShape::vf30  size=111  [run]
void __thiscall hkpTriangleShape::vf30(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  uVar9 = *(undefined4 *)(param_1 + 0x2c);
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  param_2[1] = uVar7;
  param_2[2] = uVar8;
  param_2[3] = uVar9;
  param_2[3] = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x34);
  uVar8 = *(undefined4 *)(param_1 + 0x38);
  uVar9 = *(undefined4 *)(param_1 + 0x3c);
  param_2[4] = *(undefined4 *)(param_1 + 0x30);
  param_2[5] = uVar7;
  param_2[6] = uVar8;
  param_2[7] = uVar9;
  param_2[7] = *(undefined4 *)(param_1 + 0x10);
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  uVar8 = *(undefined4 *)(param_1 + 0x48);
  uVar9 = *(undefined4 *)(param_1 + 0x4c);
  param_2[8] = *(undefined4 *)(param_1 + 0x40);
  param_2[9] = uVar7;
  param_2[10] = uVar8;
  param_2[0xb] = uVar9;
  param_2[0xb] = *(undefined4 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x17) != '\0') {
    fVar1 = *(float *)(param_1 + 0x54);
    fVar2 = *(float *)(param_1 + 0x58);
    fVar3 = *(float *)(param_1 + 0x5c);
    fVar4 = *(float *)(param_1 + 0x24);
    fVar5 = *(float *)(param_1 + 0x28);
    fVar6 = *(float *)(param_1 + 0x2c);
    param_2[0xc] = *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x20);
    param_2[0xd] = fVar1 + fVar4;
    param_2[0xe] = fVar2 + fVar5;
    param_2[0xf] = fVar3 + fVar6;
    param_2[0xf] = *(undefined4 *)(param_1 + 0x10);
    fVar1 = *(float *)(param_1 + 0x34);
    fVar2 = *(float *)(param_1 + 0x38);
    fVar3 = *(float *)(param_1 + 0x3c);
    fVar4 = *(float *)(param_1 + 0x54);
    fVar5 = *(float *)(param_1 + 0x58);
    fVar6 = *(float *)(param_1 + 0x5c);
    param_2[0x10] = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x50);
    param_2[0x11] = fVar1 + fVar4;
    param_2[0x12] = fVar2 + fVar5;
    param_2[0x13] = fVar3 + fVar6;
    param_2[0x13] = *(undefined4 *)(param_1 + 0x10);
    fVar1 = *(float *)(param_1 + 0x44);
    fVar2 = *(float *)(param_1 + 0x48);
    fVar3 = *(float *)(param_1 + 0x4c);
    fVar4 = *(float *)(param_1 + 0x54);
    fVar5 = *(float *)(param_1 + 0x58);
    fVar6 = *(float *)(param_1 + 0x5c);
    param_2[0x14] = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x50);
    param_2[0x15] = fVar1 + fVar4;
    param_2[0x16] = fVar2 + fVar5;
    param_2[0x17] = fVar3 + fVar6;
    param_2[0x17] = *(undefined4 *)(param_1 + 0x10);
  }
  return;
}

// 01139B20  hkpTriangleShape::hkpTriangleShape  size=32  [run]
undefined4 * __thiscall hkpTriangleShape::hkpTriangleShape(undefined4 *param_1,undefined4 param_2)

{
  hkpConvexShape::hkpConvexShape(param_2);
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 2) = 2;
  return param_1;
}

// 01139B40  hkpTriangleShape::vf20  size=300  [run]
void __thiscall hkpTriangleShape::vf20(int param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  local_20 = (float)*(undefined8 *)(param_1 + 0x20);
  fStack_1c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fStack_18 = (float)*(undefined8 *)(param_1 + 0x28);
  local_30 = (float)*(undefined8 *)(param_1 + 0x30);
  fStack_2c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  fStack_28 = (float)*(undefined8 *)(param_1 + 0x38);
  local_40 = (float)*(undefined8 *)(param_1 + 0x40);
  fStack_3c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
  fStack_38 = (float)*(undefined8 *)(param_1 + 0x48);
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar6 = fVar3 * fStack_2c + fVar2 * local_30 + fVar4 * fStack_28;
  fVar7 = fVar3 * fStack_3c + fVar2 * local_40 + fVar4 * fStack_38;
  if (fVar7 <= fVar6) {
    uVar5 = 1;
  }
  else {
    uVar5 = 2;
    fVar6 = fVar7;
  }
  if (fVar6 < fVar3 * fStack_1c + fVar2 * local_20 + fVar4 * fStack_18) {
    uVar5 = 0;
  }
  pfVar1 = (float *)(param_1 + (uVar5 + 2) * 0x10);
  fVar6 = pfVar1[1];
  fVar2 = pfVar1[2];
  fVar3 = pfVar1[3];
  *param_3 = *pfVar1;
  param_3[1] = fVar6;
  param_3[2] = fVar2;
  param_3[3] = fVar3;
  fVar6 = *(float *)(param_1 + 0x54);
  fVar2 = *(float *)(param_1 + 0x58);
  fVar3 = *(float *)(param_1 + 0x5c);
  if (0.0 < param_2[2] * fVar2 + param_2[1] * fVar6 + *param_2 * *(float *)(param_1 + 0x50)) {
    uVar5 = uVar5 + 3;
    *param_3 = *(float *)(param_1 + 0x50) + *param_3;
    param_3[1] = fVar6 + param_3[1];
    param_3[2] = fVar2 + param_3[2];
    param_3[3] = fVar3 + param_3[3];
  }
  param_3[3] = (float)(uVar5 | 0x3f000000);
  return;
}

// 01139C70  hkpTriangleShape::vf28  size=41  [run]
void __thiscall hkpTriangleShape::vf28(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x28);
  fVar4 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x2c);
  *param_2 = fVar1;
  param_2[1] = fVar2;
  param_2[2] = fVar3;
  param_2[3] = fVar4;
  fVar1 = *(float *)(param_1 + 0x40) + fVar1;
  fVar2 = *(float *)(param_1 + 0x44) + fVar2;
  fVar3 = *(float *)(param_1 + 0x48) + fVar3;
  fVar4 = *(float *)(param_1 + 0x4c) + fVar4;
  *param_2 = fVar1;
  param_2[1] = fVar2;
  param_2[2] = fVar3;
  param_2[3] = fVar4;
  *param_2 = fVar1 * 0.33333334;
  param_2[1] = fVar2 * 0.33333334;
  param_2[2] = fVar3 * 0.33333334;
  param_2[3] = fVar4 * 0.33333334;
  return;
}

// 01139CA0  hkpTriangleShape::vf14  size=700  [run]
void __thiscall
hkpTriangleShape::vf14(int param_1,undefined1 *param_2,float *param_3,float *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  LPVOID pvVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
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
  float fVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = "TtrcTriangle";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  fVar15 = param_4[4];
  fVar25 = *(float *)(param_1 + 0x20);
  fVar26 = *(float *)(param_1 + 0x24);
  fVar27 = *(float *)(param_1 + 0x28);
  fVar14 = *param_3;
  fVar17 = param_3[1];
  fVar19 = param_3[2];
  fVar8 = *(float *)(param_1 + 0x40) - fVar25;
  fVar10 = *(float *)(param_1 + 0x44) - fVar26;
  fVar11 = *(float *)(param_1 + 0x48) - fVar27;
  fVar12 = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x2c);
  fVar13 = *(float *)(param_1 + 0x30) - fVar25;
  fVar16 = *(float *)(param_1 + 0x34) - fVar26;
  fVar18 = *(float *)(param_1 + 0x38) - fVar27;
  fVar20 = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x2c);
  fVar9 = fVar11 * fVar16 - fVar10 * fVar18;
  fVar11 = fVar8 * fVar18 - fVar11 * fVar13;
  fVar8 = fVar10 * fVar13 - fVar8 * fVar16;
  fVar21 = (fVar14 - fVar25) * fVar9;
  fVar24 = (fVar17 - fVar26) * fVar11;
  fVar18 = (fVar19 - fVar27) * fVar8;
  fVar10 = fVar24 + fVar21 + fVar18;
  fVar13 = fVar24 + fVar21 + fVar18;
  fVar16 = fVar24 + fVar21 + fVar18;
  fVar18 = fVar24 + fVar21 + fVar18;
  fVar21 = fVar9 * (param_3[4] - fVar14);
  fVar24 = fVar11 * (param_3[5] - fVar17);
  auVar22._8_4_ = fVar8 * (param_3[6] - fVar19);
  auVar22._4_4_ = auVar22._8_4_;
  auVar22._0_4_ = auVar22._8_4_;
  auVar22._12_4_ = auVar22._8_4_;
  auVar33._0_4_ = fVar24 + fVar21 + auVar22._8_4_;
  auVar33._4_4_ = fVar24 + fVar21 + auVar22._8_4_;
  auVar33._8_4_ = fVar24 + fVar21 + auVar22._8_4_;
  auVar33._12_4_ = fVar24 + fVar21 + auVar22._8_4_;
  auVar22 = rcpps(auVar22,auVar33);
  fVar21 = 0.0 - (2.0 - auVar22._0_4_ * auVar33._0_4_) * auVar22._0_4_ * fVar10;
  fVar24 = 0.0 - (2.0 - auVar22._4_4_ * auVar33._4_4_) * auVar22._4_4_ * fVar13;
  fVar35 = 0.0 - (2.0 - auVar22._8_4_ * auVar33._8_4_) * auVar22._8_4_ * fVar16;
  auVar34._0_4_ =
       ~-(uint)((auVar33._0_4_ + fVar10 == 0.0 || fVar10 != 0.0) &&
               0.0 <= (auVar33._0_4_ + fVar10) * fVar10) & -(uint)(fVar21 < fVar15);
  auVar34._4_4_ =
       ~-(uint)((auVar33._4_4_ + fVar13 == 0.0 || fVar13 != 0.0) &&
               0.0 <= (auVar33._4_4_ + fVar13) * fVar13) & -(uint)(fVar24 < fVar15);
  auVar34._8_4_ =
       ~-(uint)((auVar33._8_4_ + fVar16 == 0.0 || fVar16 != 0.0) &&
               0.0 <= (auVar33._8_4_ + fVar16) * fVar16) & -(uint)(fVar35 < fVar15);
  auVar34._12_4_ =
       ~-(uint)((auVar33._12_4_ + fVar18 == 0.0 || fVar18 != 0.0) &&
               0.0 <= (auVar33._12_4_ + fVar18) * fVar18) &
       -(uint)(0.0 - (2.0 - auVar22._12_4_ * auVar33._12_4_) * auVar22._12_4_ * fVar18 < fVar15);
  iVar5 = movmskps(param_3,auVar34);
  if (iVar5 == 0) {
    bVar7 = false;
  }
  else {
    fVar14 = fVar21 * (param_3[4] - fVar14) + fVar14;
    fVar17 = fVar24 * (param_3[5] - fVar17) + fVar17;
    fVar19 = fVar35 * (param_3[6] - fVar19) + fVar19;
    fVar25 = fVar25 - fVar14;
    fVar26 = fVar26 - fVar17;
    fVar27 = fVar27 - fVar19;
    fVar29 = *(float *)(param_1 + 0x40) - fVar14;
    fVar31 = *(float *)(param_1 + 0x44) - fVar17;
    fVar32 = *(float *)(param_1 + 0x48) - fVar19;
    fVar14 = *(float *)(param_1 + 0x30) - fVar14;
    fVar17 = *(float *)(param_1 + 0x34) - fVar17;
    fVar19 = *(float *)(param_1 + 0x38) - fVar19;
    fVar28 = (fVar32 * fVar17 - fVar31 * fVar19) * fVar9;
    fVar35 = (fVar31 * fVar27 - fVar32 * fVar26) * fVar9;
    fVar15 = (fVar26 * fVar19 - fVar27 * fVar17) * fVar9;
    auVar30._4_4_ = fVar28;
    auVar30._0_4_ = fVar15;
    auVar30._8_4_ = fVar35;
    auVar30._12_4_ = fVar9 * fVar9;
    fVar24 = fVar8 * fVar8 + fVar11 * fVar11 + fVar9 * fVar9;
    auVar23._0_4_ =
         -(uint)((0.0 - fVar24) * 0.0001 <=
                (fVar25 * fVar17 - fVar26 * fVar14) * fVar8 +
                (fVar27 * fVar14 - fVar25 * fVar19) * fVar11 + fVar15) & auVar34._0_4_;
    auVar23._4_4_ =
         -(uint)((0.0 - fVar24) * 0.0001 <=
                (fVar31 * fVar14 - fVar29 * fVar17) * fVar8 +
                (fVar29 * fVar19 - fVar32 * fVar14) * fVar11 + fVar28) & auVar34._4_4_;
    auVar23._8_4_ =
         -(uint)((0.0 - fVar24) * 0.0001 <=
                (fVar29 * fVar26 - fVar31 * fVar25) * fVar8 +
                (fVar32 * fVar25 - fVar29 * fVar27) * fVar11 + fVar35) & auVar34._8_4_;
    auVar23._12_4_ = -(uint)((0.0 - fVar24) * 0.0001 <= fVar24) & auVar34._12_4_;
    uVar6 = movmskps(pvVar4,auVar23);
    bVar7 = ((byte)uVar6 & 7) == 7;
    auVar3._4_4_ = fVar24;
    auVar3._0_4_ = fVar24;
    auVar3._8_4_ = fVar24;
    auVar3._12_4_ = fVar24;
    auVar22 = rsqrtps(auVar30,auVar3);
    fVar15 = auVar22._0_4_;
    fVar25 = auVar22._4_4_;
    fVar26 = auVar22._8_4_;
    fVar27 = auVar22._12_4_;
    if (bVar7) {
      *param_4 = (float)(~-(uint)(fVar24 <= 0.0) &
                        (uint)((3.0 - fVar15 * fVar24 * fVar15) * fVar15 * 0.5)) *
                 (float)((uint)fVar10 & 0x80000000 ^ (uint)fVar9);
      param_4[1] = (float)(~-(uint)(fVar24 <= 0.0) &
                          (uint)((3.0 - fVar25 * fVar24 * fVar25) * fVar25 * 0.5)) *
                   (float)((uint)fVar13 & 0x80000000 ^ (uint)fVar11);
      param_4[2] = (float)(~-(uint)(fVar24 <= 0.0) &
                          (uint)((3.0 - fVar26 * fVar24 * fVar26) * fVar26 * 0.5)) *
                   (float)((uint)fVar16 & 0x80000000 ^ (uint)fVar8);
      param_4[3] = (float)(~-(uint)(fVar24 <= 0.0) &
                          (uint)((3.0 - fVar27 * fVar24 * fVar27) * fVar27 * 0.5)) *
                   (float)((uint)fVar18 & 0x80000000 ^ (uint)(fVar12 * fVar20 - fVar12 * fVar20));
      param_4[4] = fVar21;
      param_4[(int)param_4[0x10] + 8] = -NAN;
    }
  }
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  *param_2 = bVar7;
  return;
}

// 01139F60  FUN_01139f60  size=141  [run]
void __thiscall FUN_01139f60(float *param_1,float *param_2,float *param_3)

{
  float *in_EAX;
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
  float fVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar15;
  
  fVar1 = *param_2 - *in_EAX;
  fVar2 = param_2[1] - in_EAX[1];
  fVar3 = param_2[2] - in_EAX[2];
  fVar4 = param_2[3] - in_EAX[3];
  fVar6 = *in_EAX - *param_1;
  fVar7 = in_EAX[1] - param_1[1];
  fVar9 = in_EAX[2] - param_1[2];
  fVar11 = in_EAX[3] - param_1[3];
  fVar5 = fVar7 * fVar3 - fVar9 * fVar2;
  fVar9 = fVar9 * fVar1 - fVar6 * fVar3;
  fVar6 = fVar6 * fVar2 - fVar7 * fVar1;
  fVar1 = fVar5 * fVar5;
  fVar2 = fVar9 * fVar9;
  fVar3 = fVar6 * fVar6;
  fVar7 = fVar2 + fVar1 + fVar3;
  fVar8 = fVar2 + fVar1 + fVar3;
  fVar10 = fVar2 + fVar1 + fVar3;
  fVar3 = fVar2 + fVar1 + fVar3;
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  auVar13._4_4_ = fVar8;
  auVar13._0_4_ = fVar7;
  auVar13._8_4_ = fVar10;
  auVar13._12_4_ = fVar3;
  auVar13 = rsqrtps(auVar12,auVar13);
  fVar1 = auVar13._0_4_;
  fVar2 = auVar13._4_4_;
  fVar14 = auVar13._8_4_;
  fVar15 = auVar13._12_4_;
  *param_3 = (float)(~-(uint)(fVar7 <= 0.0) & (uint)((3.0 - fVar1 * fVar7 * fVar1) * fVar1 * 0.5)) *
             fVar5;
  param_3[1] = (float)(~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar2 * fVar8 * fVar2) * fVar2 * 0.5))
               * fVar9;
  param_3[2] = (float)(~-(uint)(fVar10 <= 0.0) &
                      (uint)((3.0 - fVar14 * fVar10 * fVar14) * fVar14 * 0.5)) * fVar6;
  param_3[3] = (float)(~-(uint)(fVar3 <= 0.0) &
                      (uint)((3.0 - fVar15 * fVar3 * fVar15) * fVar15 * 0.5)) *
               (fVar11 * fVar4 - fVar11 * fVar4);
  return;
}

// 01139FF0  hkpTriangleShape::vf34  size=1522  [run]
undefined4 __thiscall
hkpTriangleShape::vf34
          (int param_1,ushort *param_2,byte *param_3,float *param_4,float *param_5,int *param_6,
          undefined4 param_7,float *param_8)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
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
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  float *local_20;
  uint local_1c;
  float local_18;
  int local_14;
  
  local_1c = (uint)*(byte *)(param_1 + 0x16);
  if (local_1c == 6) {
    return 2;
  }
  local_14 = *(int *)(&DAT_01b20858 + (uint)*param_2 * 4);
  if (1 < *param_3) {
    local_18 = *(float *)(&DAT_01b20858 + (uint)param_2[1] * 4);
    iVar11 = (int)local_18;
    if (*param_3 == 3) {
      if ((uint)param_2[1] + (uint)param_2[2] + (uint)*param_2 == 3) {
        return 2;
      }
      if (local_18 == (float)local_14) {
        iVar11 = *(int *)(&DAT_01b20858 + (uint)param_2[2] * 4);
      }
      *param_3 = 2;
      *param_2 = (ushort)local_14;
      param_2[1] = (ushort)iVar11;
    }
    if (*(int *)(&DAT_01b2085c + local_14 * 4) != iVar11) {
      local_14 = iVar11;
    }
  }
  uVar3 = *(undefined8 *)param_8;
  uStack_28 = *(undefined8 *)(param_8 + 2);
  uVar4 = *(undefined8 *)param_5;
  uStack_48 = *(undefined8 *)(param_5 + 2);
  uVar5 = *(undefined8 *)(param_5 + 4);
  uStack_38 = *(undefined8 *)(param_5 + 6);
  local_40._0_4_ = (float)uVar5;
  local_40._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  local_50._0_4_ = (float)uVar4;
  local_50._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  local_60 = (float)*(undefined8 *)(param_5 + 8);
  fStack_5c = (float)((ulonglong)*(undefined8 *)(param_5 + 8) >> 0x20);
  fStack_58 = (float)*(undefined8 *)(param_5 + 10);
  fStack_54 = (float)((ulonglong)*(undefined8 *)(param_5 + 10) >> 0x20);
  local_30._0_4_ = (float)uVar3;
  local_30._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  local_20 = (float *)(param_1 + 0x20);
  auVar28._0_4_ =
       local_30._4_4_ * local_50._4_4_ + (float)local_30 * (float)local_50 +
       (float)uStack_28 * (float)uStack_48;
  auVar28._4_4_ =
       local_30._4_4_ * local_40._4_4_ + (float)local_30 * (float)local_40 +
       (float)uStack_28 * (float)uStack_38;
  auVar28._8_4_ =
       local_30._4_4_ * fStack_5c + (float)local_30 * local_60 + (float)uStack_28 * fStack_58;
  auVar28._12_4_ =
       local_30._4_4_ * fStack_54 + (float)local_30 * fStack_5c + (float)uStack_28 * fStack_54;
  auVar29 = auVar28;
  local_50 = uVar4;
  local_40 = uVar5;
  local_30 = uVar3;
  FUN_01139f60(param_1 + 0x40,&local_40);
  fVar16 = (float)local_40 * auVar29._0_4_;
  fVar17 = local_40._4_4_ * auVar29._4_4_;
  fVar18 = (float)uStack_38 * auVar29._8_4_;
  pfVar1 = (float *)(param_1 + (*(int *)(&DAT_01b2085c + local_14 * 4) + 2) * 0x10);
  local_18 = uStack_28._4_4_ * ABS(fVar17 + fVar16 + fVar18);
  pfVar2 = (float *)(param_1 + (local_14 + 2) * 0x10);
  fVar22 = *pfVar1 - *pfVar2;
  fVar25 = pfVar1[1] - pfVar2[1];
  fVar26 = pfVar1[2] - pfVar2[2];
  fVar13 = fVar22 * fVar22;
  fVar14 = fVar25 * fVar25;
  fVar15 = fVar26 * fVar26;
  fVar19 = fVar14 + fVar13 + fVar15;
  fVar20 = fVar14 + fVar13 + fVar15;
  fVar21 = fVar14 + fVar13 + fVar15;
  auVar30._4_4_ = fVar20;
  auVar30._0_4_ = fVar19;
  auVar30._8_4_ = fVar21;
  auVar30._12_4_ = fVar14 + fVar13 + fVar15;
  auVar30 = rsqrtps(auVar29,auVar30);
  local_50._0_4_ = 0.5;
  fVar13 = (float)local_50;
  local_50._0_4_ = 0.5;
  local_50._4_4_ = 0.5;
  uStack_48 = 0x3f0000003f000000;
  fVar14 = auVar30._0_4_;
  fVar15 = auVar30._4_4_;
  fVar31 = auVar30._8_4_;
  uVar9 = *(ushort *)(param_1 + 0x14) >> ((char)local_14 * '\x05' & 0x1fU) & 0x1f;
  fVar22 = (float)(~-(uint)(fVar19 <= 0.0) & (uint)((3.0 - fVar14 * fVar19 * fVar14) * fVar14 * 0.5)
                  ) * fVar22;
  fVar25 = (float)(~-(uint)(fVar20 <= 0.0) & (uint)((3.0 - fVar15 * fVar20 * fVar15) * fVar15 * 0.5)
                  ) * fVar25;
  fVar26 = (float)(~-(uint)(fVar21 <= 0.0) & (uint)((3.0 - fVar31 * fVar21 * fVar31) * fVar31 * 0.5)
                  ) * fVar26;
  if (local_1c == 5) {
    auVar29._4_4_ = -(uint)((float)(&DAT_0209e61c)[uVar9 * 6] <= fVar17 + fVar16 + fVar18);
    auVar29._0_4_ = -(uint)((float)(&DAT_0209e620)[uVar9 * 6] <= fVar17 + fVar16 + fVar18);
    auVar29._8_4_ = -(uint)((float)(&DAT_0209e618)[uVar9 * 6] <= fVar17 + fVar16 + fVar18);
    auVar29._12_4_ = -(uint)((float)(&DAT_0209e610)[uVar9 * 6] <= fVar17 + fVar16 + fVar18);
    movmskps(5,auVar29);
    local_50._0_4_ = fVar13;
    uVar10 = __aullshr();
    uVar10 = uVar10 & 0xf;
    if (uVar10 != 0) {
      if (uVar10 == 2) {
        return 0;
      }
      if (uVar10 != 4) {
        return 2;
      }
    }
    if (*param_3 == 1) {
      return 0;
    }
    fVar13 = (float)(&DAT_0209e614)[uVar9 * 6 + uVar10];
    fVar14 = (float)(&DAT_0209e610)[uVar9 * 6 + uVar10];
    fVar15 = (fVar25 * (float)uStack_38 - fVar26 * local_40._4_4_) * fVar13 +
             fVar14 * (float)local_40;
    fVar16 = (fVar26 * (float)local_40 - fVar22 * (float)uStack_38) * fVar13 +
             fVar14 * local_40._4_4_;
    fVar17 = (fVar22 * local_40._4_4_ - fVar25 * (float)local_40) * fVar13 +
             fVar14 * (float)uStack_38;
    fVar13 = fVar15 * fVar15;
    fVar14 = fVar16 * fVar16;
    fVar18 = fVar17 * fVar17;
    auVar27._4_4_ = fVar13;
    auVar27._0_4_ = fVar13;
    auVar27._8_4_ = fVar13;
    auVar27._12_4_ = fVar13;
    fVar19 = fVar14 + fVar13 + fVar18;
    fVar20 = fVar14 + fVar13 + fVar18;
    fVar21 = fVar14 + fVar13 + fVar18;
    auVar8._4_4_ = fVar20;
    auVar8._0_4_ = fVar19;
    auVar8._8_4_ = fVar21;
    auVar8._12_4_ = fVar14 + fVar13 + fVar18;
    auVar30 = rsqrtps(auVar27,auVar8);
    fVar13 = auVar30._0_4_;
    fVar14 = auVar30._4_4_;
    fVar18 = auVar30._8_4_;
    fVar15 = (float)(~-(uint)(fVar19 <= 0.0) &
                    (uint)((3.0 - fVar13 * fVar19 * fVar13) * fVar13 * (float)local_50)) * fVar15;
    fVar16 = (float)(~-(uint)(fVar20 <= 0.0) &
                    (uint)((3.0 - fVar14 * fVar20 * fVar14) * fVar14 * local_50._4_4_)) * fVar16;
    fVar17 = (float)(~-(uint)(fVar21 <= 0.0) &
                    (uint)((3.0 - fVar18 * fVar21 * fVar18) * fVar18 * (float)uStack_48)) * fVar17;
    fVar19 = fVar22 * auVar28._0_4_;
    fVar20 = fVar25 * auVar28._4_4_;
    fVar21 = fVar26 * auVar28._8_4_;
    fVar13 = fVar15 * auVar28._0_4_;
    fVar14 = fVar16 * auVar28._4_4_;
    fVar18 = fVar17 * auVar28._8_4_;
    fVar22 = (fVar20 + fVar19 + fVar21) * fVar22 + (fVar14 + fVar13 + fVar18) * fVar15;
    fVar25 = (fVar20 + fVar19 + fVar21) * fVar25 + (fVar14 + fVar13 + fVar18) * fVar16;
    fVar26 = (fVar20 + fVar19 + fVar21) * fVar26 + (fVar14 + fVar13 + fVar18) * fVar17;
    fVar13 = fVar22 * fVar22;
    fVar14 = fVar25 * fVar25;
    fVar15 = fVar26 * fVar26;
    auVar24._4_4_ = fVar13;
    auVar24._0_4_ = fVar13;
    auVar24._8_4_ = fVar13;
    auVar24._12_4_ = fVar13;
    fVar16 = fVar14 + fVar13 + fVar15;
    fVar18 = fVar14 + fVar13 + fVar15;
    fVar17 = fVar14 + fVar13 + fVar15;
    auVar6._4_4_ = fVar18;
    auVar6._0_4_ = fVar16;
    auVar6._8_4_ = fVar17;
    auVar6._12_4_ = fVar14 + fVar13 + fVar15;
    auVar30 = rsqrtps(auVar24,auVar6);
    fVar13 = auVar30._0_4_;
    fVar14 = auVar30._4_4_;
    fVar15 = auVar30._8_4_;
    fVar22 = (float)(~-(uint)(fVar16 <= 0.0) &
                    (uint)((3.0 - fVar13 * fVar16 * fVar13) * fVar13 * (float)local_50)) * fVar22;
    fVar25 = (float)(~-(uint)(fVar18 <= 0.0) &
                    (uint)((3.0 - fVar14 * fVar18 * fVar14) * fVar14 * local_50._4_4_)) * fVar25;
    fVar26 = (float)(~-(uint)(fVar17 <= 0.0) &
                    (uint)((3.0 - fVar15 * fVar17 * fVar15) * fVar15 * (float)uStack_48)) * fVar26;
    local_30._0_4_ = fVar22 * *param_5 + fVar25 * param_5[4] + fVar26 * param_5[8];
    local_30._4_4_ = fVar22 * param_5[1] + fVar25 * param_5[5] + fVar26 * param_5[9];
    uStack_28._0_4_ = fVar22 * param_5[2] + fVar25 * param_5[6] + fVar26 * param_5[10];
    uStack_28._4_4_ = fVar22 * param_5[3] + fVar25 * param_5[7] + fVar26 * param_5[0xb];
  }
  else {
    if (uVar9 == 0x1f) {
      return 2;
    }
    fVar18 = fVar18 + fVar17 + fVar16;
    pfVar1 = (float *)(&DAT_0209e610 + uVar9 * 6);
    if (local_1c == 0) {
      fVar13 = *pfVar1;
      bVar12 = fVar13 < fVar18;
    }
    else {
      fVar13 = pfVar1[local_1c];
      bVar12 = fVar18 < pfVar1[local_1c];
    }
    if (bVar12 || fVar13 == fVar18) {
      return 2;
    }
    fVar13 = (float)(&DAT_0209e614)[uVar9 * 6 + local_1c];
    fVar14 = pfVar1[local_1c];
    fVar15 = (fVar25 * (float)uStack_38 - fVar26 * local_40._4_4_) * fVar13 +
             fVar14 * (float)local_40;
    fVar26 = (fVar26 * (float)local_40 - fVar22 * (float)uStack_38) * fVar13 +
             fVar14 * local_40._4_4_;
    fVar25 = (fVar22 * local_40._4_4_ - fVar25 * (float)local_40) * fVar13 +
             fVar14 * (float)uStack_38;
    fVar13 = fVar15 * fVar15;
    fVar22 = fVar26 * fVar26;
    fVar14 = fVar25 * fVar25;
    auVar23._4_4_ = fVar13;
    auVar23._0_4_ = fVar13;
    auVar23._8_4_ = fVar13;
    auVar23._12_4_ = fVar13;
    fVar16 = fVar22 + fVar13 + fVar14;
    fVar18 = fVar22 + fVar13 + fVar14;
    fVar17 = fVar22 + fVar13 + fVar14;
    auVar7._4_4_ = fVar18;
    auVar7._0_4_ = fVar16;
    auVar7._8_4_ = fVar17;
    auVar7._12_4_ = fVar22 + fVar13 + fVar14;
    auVar30 = rsqrtps(auVar23,auVar7);
    fVar13 = auVar30._0_4_;
    fVar22 = auVar30._4_4_;
    fVar14 = auVar30._8_4_;
    fVar15 = (float)(~-(uint)(fVar16 <= 0.0) &
                    (uint)((3.0 - fVar13 * fVar16 * fVar13) * fVar13 * 0.5)) * fVar15;
    fVar26 = (float)(~-(uint)(fVar18 <= 0.0) &
                    (uint)((3.0 - fVar22 * fVar18 * fVar22) * fVar22 * 0.5)) * fVar26;
    fVar25 = (float)(~-(uint)(fVar17 <= 0.0) &
                    (uint)((3.0 - fVar14 * fVar17 * fVar14) * fVar14 * 0.5)) * fVar25;
    local_30._0_4_ = fVar15 * *param_5 + fVar26 * param_5[4] + fVar25 * param_5[8];
    local_30._4_4_ = fVar15 * param_5[1] + fVar26 * param_5[5] + fVar25 * param_5[9];
    uStack_28._0_4_ = fVar15 * param_5[2] + fVar26 * param_5[6] + fVar25 * param_5[10];
    uStack_28._4_4_ = fVar15 * param_5[3] + fVar26 * param_5[7] + fVar25 * param_5[0xb];
    if (*(char *)(param_1 + 0x17) == '\0') {
      (**(code **)(*param_6 + 0x28))(&local_50);
      FUN_01007050(param_7,&local_50);
      if (0.0 <= (param_4[2] - (float)uStack_48) * (float)uStack_28 +
                 (param_4[1] - local_50._4_4_) * local_30._4_4_ +
                 (*param_4 - (float)local_50) * (float)local_30) {
        return 0;
      }
    }
    else {
      fVar13 = *(float *)(&DAT_01b20844 + local_1c * 4);
      local_40._0_4_ = fVar13 * (float)local_40;
      local_40._4_4_ = fVar13 * local_40._4_4_;
      uStack_38 = CONCAT44(fVar13 * uStack_38._4_4_,fVar13 * (float)uStack_38);
      FUN_01007090(param_5,param_4);
      fVar13 = (0.0 - local_20[2]) * (float)uStack_38 +
               (0.0 - local_20[1]) * local_40._4_4_ + (0.0 - *local_20) * (float)local_40;
      if (fVar13 < local_18) {
        local_18 = fVar13;
      }
    }
  }
  *param_8 = (float)local_30;
  param_8[1] = local_30._4_4_;
  param_8[2] = (float)uStack_28;
  param_8[3] = uStack_28._4_4_;
  param_8[3] = local_18;
  return 1;
}

// 0113A5F0  hkpTriangleShape::vf1C  size=1222  [run]
undefined1 (*) [16] __thiscall
hkpTriangleShape::vf1C
          (int param_1,undefined1 (*param_2) [16],float *param_3,undefined1 (*param_4) [16],
          undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined1 (*pauVar5) [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
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
  undefined8 local_60;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [16];
  uint local_18;
  int local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtrayBundleTriangle";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_90 = *param_3;
  fStack_8c = param_3[1];
  fStack_88 = param_3[2];
  fStack_84 = param_3[3];
  local_80 = param_3[4];
  fStack_7c = param_3[5];
  fStack_78 = param_3[6];
  fStack_74 = param_3[7];
  local_70 = param_3[8];
  fStack_6c = param_3[9];
  fStack_68 = param_3[10];
  fStack_64 = param_3[0xb];
  fVar7 = *(float *)(param_1 + 0x20);
  fVar9 = *(float *)(param_1 + 0x24);
  fVar11 = *(float *)(param_1 + 0x28);
  fVar14 = *(float *)(param_1 + 0x30) - fVar7;
  fVar16 = *(float *)(param_1 + 0x34) - fVar9;
  fVar17 = *(float *)(param_1 + 0x38) - fVar11;
  fVar18 = *(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x2c);
  local_60 = CONCAT44(*(float *)param_4[6],*(float *)param_4[1]);
  fStack_58 = *(float *)param_4[0xb];
  fStack_54 = *(float *)param_4[0x10];
  fVar6 = *(float *)(param_1 + 0x40) - fVar7;
  fVar8 = *(float *)(param_1 + 0x44) - fVar9;
  fVar10 = *(float *)(param_1 + 0x48) - fVar11;
  fVar12 = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x2c);
  local_18 = param_1 + 0x30;
  local_50 = fVar10 * fVar16 - fVar8 * fVar17;
  fStack_4c = fVar6 * fVar17 - fVar10 * fVar14;
  fStack_48 = fVar8 * fVar14 - fVar6 * fVar16;
  auVar19._0_4_ = (local_80 - fVar9) * fStack_4c;
  auVar19._4_4_ = (fStack_7c - fVar9) * fStack_4c;
  auVar19._8_4_ = (fStack_78 - fVar9) * fStack_4c;
  auVar19._12_4_ = (fStack_74 - fVar9) * fStack_4c;
  local_f0 = local_50 * (local_90 - fVar7) + auVar19._0_4_ + (local_70 - fVar11) * fStack_48;
  fStack_ec = local_50 * (fStack_8c - fVar7) + auVar19._4_4_ + (fStack_6c - fVar11) * fStack_48;
  fStack_e8 = local_50 * (fStack_88 - fVar7) + auVar19._8_4_ + (fStack_68 - fVar11) * fStack_48;
  fStack_e4 = local_50 * (fStack_84 - fVar7) + auVar19._12_4_ + (fStack_64 - fVar11) * fStack_48;
  local_120 = 0.0;
  fStack_11c = 0.0;
  fStack_118 = 0.0;
  uStack_114 = 0;
  local_d0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_14 = param_1 + 0x40;
  fStack_44 = fVar12 * fVar18 - fVar12 * fVar18;
  auVar13._0_4_ =
       local_50 * (param_3[0xc] - local_90) + (param_3[0x10] - local_80) * fStack_4c +
       (param_3[0x14] - local_70) * fStack_48;
  auVar13._4_4_ =
       local_50 * (param_3[0xd] - fStack_8c) + (param_3[0x11] - fStack_7c) * fStack_4c +
       (param_3[0x15] - fStack_6c) * fStack_48;
  auVar13._8_4_ =
       local_50 * (param_3[0xe] - fStack_88) + (param_3[0x12] - fStack_78) * fStack_4c +
       (param_3[0x16] - fStack_68) * fStack_48;
  auVar13._12_4_ =
       local_50 * (param_3[0xf] - fStack_84) + (param_3[0x13] - fStack_74) * fStack_4c +
       (param_3[0x17] - fStack_64) * fStack_48;
  auVar19 = rcpps(auVar19,auVar13);
  fStack_38 = -((2.0 - auVar19._8_4_ * auVar13._8_4_) * auVar19._8_4_ * fStack_e8);
  fStack_34 = -((2.0 - auVar19._12_4_ * auVar13._12_4_) * auVar19._12_4_ * fStack_e4);
  local_40 = CONCAT44((2.0 - auVar19._4_4_ * auVar13._4_4_) * auVar19._4_4_ * fStack_ec,
                      (2.0 - auVar19._0_4_ * auVar13._0_4_) * auVar19._0_4_ * local_f0) ^
             0x8000000080000000;
  auVar19 = _local_40;
  local_150 = (uint)*param_5;
  uStack_14c = (uint)((ulonglong)*param_5 >> 0x20);
  uStack_148 = (uint)param_5[1];
  uStack_144 = (uint)((ulonglong)param_5[1] >> 0x20);
  local_30._0_4_ =
       ~-(uint)((local_f0 != 0.0 || auVar13._0_4_ + local_f0 == 0.0) &&
               0.0 <= local_f0 * (auVar13._0_4_ + local_f0)) &
       -(uint)((float)local_40 < *(float *)param_4[1]) & local_150;
  local_30._4_4_ =
       ~-(uint)((fStack_ec != 0.0 || auVar13._4_4_ + fStack_ec == 0.0) &&
               0.0 <= fStack_ec * (auVar13._4_4_ + fStack_ec)) &
       -(uint)(local_40._4_4_ < *(float *)param_4[6]) & uStack_14c;
  local_30._8_4_ =
       ~-(uint)((fStack_e8 != 0.0 || auVar13._8_4_ + fStack_e8 == 0.0) &&
               0.0 <= fStack_e8 * (auVar13._8_4_ + fStack_e8)) &
       -(uint)(fStack_38 < *(float *)param_4[0xb]) & uStack_148;
  local_30._12_4_ =
       ~-(uint)((fStack_e4 != 0.0 || auVar13._12_4_ + fStack_e4 == 0.0) &&
               0.0 <= fStack_e4 * (auVar13._12_4_ + fStack_e4)) &
       -(uint)(fStack_34 < *(float *)param_4[0x10]) & uStack_144;
  iVar4 = movmskps(param_1 + 0x40,local_30);
  _local_40 = auVar19;
  if (iVar4 == 0) {
    local_a0 = 0;
    local_90 = 0.0;
    local_80 = 0.0;
    local_70 = 0.0;
    uStack_98 = 0;
    fStack_88 = 0.0;
    fStack_78 = 0.0;
    fStack_68 = 0.0;
    uStack_9c = 0;
    fStack_8c = 0.0;
    fStack_7c = 0.0;
    fStack_6c = 0.0;
  }
  else {
    fVar7 = local_50 * local_50;
    fVar9 = fStack_4c * fStack_4c;
    fVar11 = fStack_48 * fStack_48;
    auVar20._4_4_ = fVar7;
    auVar20._0_4_ = fVar7;
    auVar20._8_4_ = fVar7;
    auVar20._12_4_ = fVar7;
    local_90 = (float)local_40 * (param_3[0xc] - local_90) + local_90;
    fStack_8c = local_40._4_4_ * (param_3[0xd] - fStack_8c) + fStack_8c;
    fStack_88 = fStack_38 * (param_3[0xe] - fStack_88) + fStack_88;
    fStack_84 = fStack_34 * (param_3[0xf] - fStack_84) + fStack_84;
    local_e0 = (0.0 - (fVar9 + fVar7 + fVar11)) * 0.0001;
    fStack_dc = (0.0 - (fVar9 + fVar7 + fVar11)) * 0.0001;
    fStack_d8 = (0.0 - (fVar9 + fVar7 + fVar11)) * 0.0001;
    fStack_d4 = (0.0 - (fVar9 + fVar7 + fVar11)) * 0.0001;
    local_80 = (param_3[0x10] - local_80) * (float)local_40 + local_80;
    fStack_7c = (param_3[0x11] - fStack_7c) * local_40._4_4_ + fStack_7c;
    fStack_78 = (param_3[0x12] - fStack_78) * fStack_38 + fStack_78;
    fStack_74 = (param_3[0x13] - fStack_74) * fStack_34 + fStack_74;
    local_70 = (param_3[0x14] - local_70) * (float)local_40 + local_70;
    fStack_6c = (param_3[0x15] - fStack_6c) * local_40._4_4_ + fStack_6c;
    fStack_68 = (param_3[0x16] - fStack_68) * fStack_38 + fStack_68;
    fStack_64 = (param_3[0x17] - fStack_64) * fStack_34 + fStack_64;
    FUN_01139890(local_18,&local_50,&local_110);
    FUN_01139890(local_14,&local_50,&local_130);
    FUN_01139890(param_1 + 0x20,&local_50,&local_100);
    local_30._0_4_ =
         -(uint)(local_e0 <= local_110) & local_30._0_4_ & -(uint)(local_e0 <= local_130) &
         -(uint)(local_e0 <= local_100);
    local_30._4_4_ =
         -(uint)(fStack_dc <= fStack_10c) & local_30._4_4_ & -(uint)(fStack_dc <= fStack_12c) &
         -(uint)(fStack_dc <= fStack_fc);
    local_30._8_4_ =
         -(uint)(fStack_d8 <= fStack_108) & local_30._8_4_ & -(uint)(fStack_d8 <= fStack_128) &
         -(uint)(fStack_d8 <= fStack_f8);
    local_30._12_4_ =
         -(uint)(fStack_d4 <= fStack_104) & local_30._12_4_ & -(uint)(fStack_d4 <= fStack_124) &
         -(uint)(fStack_d4 <= fStack_f4);
    local_60 = CONCAT44(~local_30._4_4_ & local_60._4_4_ | local_30._4_4_ & (uint)local_40._4_4_,
                        ~local_30._0_4_ & (uint)local_60 | local_30._0_4_ & (uint)(float)local_40);
    fStack_58 = (float)(~local_30._8_4_ & (uint)fStack_58 | local_30._8_4_ & (uint)fStack_38);
    fStack_54 = (float)(~local_30._12_4_ & (uint)fStack_54 | local_30._12_4_ & (uint)fStack_34);
    auVar15._0_4_ = fVar9 + fVar7 + fVar11;
    auVar15._4_4_ = fVar9 + fVar7 + fVar11;
    auVar15._8_4_ = fVar9 + fVar7 + fVar11;
    auVar15._12_4_ = fVar9 + fVar7 + fVar11;
    auVar19 = rsqrtps(auVar20,auVar15);
    fVar7 = auVar19._0_4_;
    fVar9 = auVar19._4_4_;
    fVar11 = auVar19._8_4_;
    uVar21 = (uint)local_f0 & 0x80000000;
    uVar22 = (uint)fStack_ec & 0x80000000;
    uVar23 = (uint)fStack_e8 & 0x80000000;
    uVar24 = (uint)fStack_e4 & 0x80000000;
    fVar7 = (float)(~-(uint)(auVar15._0_4_ <= local_120) &
                   (uint)((3.0 - fVar7 * auVar15._0_4_ * fVar7) * fVar7 * 0.5)) * local_50;
    fVar9 = (float)(~-(uint)(auVar15._4_4_ <= fStack_11c) &
                   (uint)((3.0 - fVar9 * auVar15._4_4_ * fVar9) * fVar9 * 0.5)) * fStack_4c;
    fVar11 = (float)(~-(uint)(auVar15._8_4_ <= fStack_118) &
                    (uint)((3.0 - fVar11 * auVar15._8_4_ * fVar11) * fVar11 * 0.5)) * fStack_48;
    local_a0 = ((uint)fVar7 ^ uVar21) & local_30._0_4_ | ~local_30._0_4_ & local_d0;
    local_90 = (float)(((uint)fVar7 ^ uVar22) & local_30._4_4_ | ~local_30._4_4_ & uStack_cc);
    local_80 = (float)(((uint)fVar7 ^ uVar23) & local_30._8_4_ | ~local_30._8_4_ & uStack_c8);
    local_70 = (float)(((uint)fVar7 ^ uVar24) & local_30._12_4_ | ~local_30._12_4_ & uStack_c4);
    uStack_9c = ((uint)fVar9 ^ uVar21) & local_30._0_4_ | ~local_30._0_4_ & local_c0;
    fStack_8c = (float)(((uint)fVar9 ^ uVar22) & local_30._4_4_ | ~local_30._4_4_ & uStack_bc);
    fStack_7c = (float)(((uint)fVar9 ^ uVar23) & local_30._8_4_ | ~local_30._8_4_ & uStack_b8);
    fStack_6c = (float)(((uint)fVar9 ^ uVar24) & local_30._12_4_ | ~local_30._12_4_ & uStack_b4);
    uStack_98 = local_30._0_4_ & ((uint)fVar11 ^ uVar21) | ~local_30._0_4_ & local_b0;
    fStack_88 = (float)(local_30._4_4_ & ((uint)fVar11 ^ uVar22) | ~local_30._4_4_ & uStack_ac);
    fStack_78 = (float)(local_30._8_4_ & ((uint)fVar11 ^ uVar23) | ~local_30._8_4_ & uStack_a8);
    fStack_68 = (float)(local_30._12_4_ & ((uint)fVar11 ^ uVar24) | ~local_30._12_4_ & uStack_a4);
  }
  *(undefined8 *)*param_2 = local_30._0_8_;
  *(undefined8 *)(*param_2 + 8) = local_30._8_8_;
  fStack_84 = fStack_11c;
  local_18 = movmskps(param_2,*param_2);
  iVar4 = 0;
  fStack_94 = local_120;
  fStack_74 = fStack_118;
  fStack_64 = (float)uStack_114;
  uVar21 = 1;
  pauVar5 = (undefined1 (*) [16])&local_a0;
  do {
    if ((local_18 & uVar21) != 0) {
      auVar19 = *pauVar5;
      *(undefined4 *)param_4[1] = *(undefined4 *)((int)&local_60 + iVar4 * 4);
      *param_4 = auVar19;
      *(undefined4 *)(param_4[2] + *(int *)param_4[4] * 4) = 0xffffffff;
    }
    iVar4 = iVar4 + 1;
    pauVar5 = pauVar5 + 1;
    param_4 = param_4 + 5;
    uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
  } while (iVar4 < 4);
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

// 0113AAC0  FUN_0113aac0  size=23  [run]
void __thiscall FUN_0113aac0(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *param_2 = -(uint)(*param_1 != 0.0);
  param_2[1] = -(uint)(fVar1 != 0.0);
  param_2[2] = -(uint)(fVar2 != 0.0);
  param_2[3] = -(uint)(fVar3 != 0.0);
  return;
}

// 0113AAE0  FUN_0113aae0  size=28  [run]
void __thiscall FUN_0113aae0(float *param_1,float *param_2,float *param_3)

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

// 0113AB00  FUN_0113ab00  size=17  [run]
void __thiscall FUN_0113ab00(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// 0113AB20  FUN_0113ab20  size=65  [run]
void __thiscall FUN_0113ab20(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *param_1 = *param_2 - fVar1;
  param_1[1] = fVar4 - fVar1;
  param_1[2] = fVar5 - fVar1;
  param_1[3] = fVar6 - fVar1;
  fVar1 = param_2[5];
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  param_1[4] = param_2[4] - fVar2;
  param_1[5] = fVar1 - fVar2;
  param_1[6] = fVar4 - fVar2;
  param_1[7] = fVar5 - fVar2;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar4 = param_2[0xb];
  param_1[8] = param_2[8] - fVar3;
  param_1[9] = fVar1 - fVar3;
  param_1[10] = fVar2 - fVar3;
  param_1[0xb] = fVar4 - fVar3;
  return;
}

// 0113AB70  FUN_0113ab70  size=54  [run]
void __thiscall FUN_0113ab70(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[7];
  fVar7 = param_1[9];
  fVar8 = param_1[10];
  fVar9 = param_1[0xb];
  fVar10 = param_1[1];
  fVar11 = param_1[2];
  fVar12 = param_1[3];
  *param_3 = fVar2 * param_1[4] + fVar1 * *param_1 + fVar3 * param_1[8];
  param_3[1] = fVar2 * fVar4 + fVar1 * fVar10 + fVar3 * fVar7;
  param_3[2] = fVar2 * fVar5 + fVar1 * fVar11 + fVar3 * fVar8;
  param_3[3] = fVar2 * fVar6 + fVar1 * fVar12 + fVar3 * fVar9;
  return;
}

// 0113ABB0  FUN_0113abb0  size=60  [run]
void __thiscall FUN_0113abb0(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  *param_1 = *param_3 * *param_4 + *param_2;
  param_1[1] = fVar1 * fVar4 + fVar7;
  param_1[2] = fVar2 * fVar5 + fVar8;
  param_1[3] = fVar3 * fVar6 + fVar9;
  fVar1 = param_3[5];
  fVar2 = param_3[6];
  fVar3 = param_3[7];
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  fVar7 = param_2[5];
  fVar8 = param_2[6];
  fVar9 = param_2[7];
  param_1[4] = param_3[4] * *param_4 + param_2[4];
  param_1[5] = fVar1 * fVar4 + fVar7;
  param_1[6] = fVar2 * fVar5 + fVar8;
  param_1[7] = fVar3 * fVar6 + fVar9;
  fVar1 = param_3[9];
  fVar2 = param_3[10];
  fVar3 = param_3[0xb];
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  fVar7 = param_2[9];
  fVar8 = param_2[10];
  fVar9 = param_2[0xb];
  param_1[8] = param_3[8] * *param_4 + param_2[8];
  param_1[9] = fVar1 * fVar4 + fVar7;
  param_1[10] = fVar2 * fVar5 + fVar8;
  param_1[0xb] = fVar3 * fVar6 + fVar9;
  return;
}

// 0113ABF0  FUN_0113abf0  size=92  [run]
void __thiscall FUN_0113abf0(float *param_1,float *param_2,float *param_3)

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
  float fVar14;
  float fVar15;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_3[8];
  fVar5 = param_3[9];
  fVar6 = param_3[10];
  fVar7 = param_3[0xb];
  fVar8 = *param_3;
  fVar9 = param_3[1];
  fVar10 = param_3[2];
  fVar11 = param_3[3];
  fVar12 = param_3[4];
  fVar13 = param_3[5];
  fVar14 = param_3[6];
  fVar15 = param_3[7];
  *param_1 = fVar4 * fVar2 - fVar12 * fVar3;
  param_1[1] = fVar5 * fVar2 - fVar13 * fVar3;
  param_1[2] = fVar6 * fVar2 - fVar14 * fVar3;
  param_1[3] = fVar7 * fVar2 - fVar15 * fVar3;
  param_1[4] = fVar8 * fVar3 - fVar4 * fVar1;
  param_1[5] = fVar9 * fVar3 - fVar5 * fVar1;
  param_1[6] = fVar10 * fVar3 - fVar6 * fVar1;
  param_1[7] = fVar11 * fVar3 - fVar7 * fVar1;
  param_1[8] = fVar12 * fVar1 - fVar8 * fVar2;
  param_1[9] = fVar13 * fVar1 - fVar9 * fVar2;
  param_1[10] = fVar14 * fVar1 - fVar10 * fVar2;
  param_1[0xb] = fVar15 * fVar1 - fVar11 * fVar2;
  return;
}

// 0113AC50  FUN_0113ac50  size=62  [run]
void __thiscall FUN_0113ac50(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2 & 0x80000000 ^ *param_1;
  param_1[1] = uVar1 & 0x80000000 ^ param_1[1];
  param_1[2] = uVar2 & 0x80000000 ^ param_1[2];
  param_1[3] = uVar3 & 0x80000000 ^ param_1[3];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  param_1[4] = *param_2 & 0x80000000 ^ param_1[4];
  param_1[5] = uVar1 & 0x80000000 ^ param_1[5];
  param_1[6] = uVar2 & 0x80000000 ^ param_1[6];
  param_1[7] = uVar3 & 0x80000000 ^ param_1[7];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  param_1[8] = *param_2 & 0x80000000 ^ param_1[8];
  param_1[9] = uVar1 & 0x80000000 ^ param_1[9];
  param_1[10] = uVar2 & 0x80000000 ^ param_1[10];
  param_1[0xb] = uVar3 & 0x80000000 ^ param_1[0xb];
  return;
}

// 0113AC90  FUN_0113ac90  size=93  [run]
void __thiscall FUN_0113ac90(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

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
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  uVar7 = param_4[1];
  uVar8 = param_4[2];
  uVar9 = param_4[3];
  *param_1 = *param_3 & *param_2 | ~*param_2 & *param_4;
  param_1[1] = uVar4 & uVar1 | ~uVar1 & uVar7;
  param_1[2] = uVar5 & uVar2 | ~uVar2 & uVar8;
  param_1[3] = uVar6 & uVar3 | ~uVar3 & uVar9;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_4[5];
  uVar5 = param_4[6];
  uVar6 = param_4[7];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar9 = param_3[7];
  param_1[4] = ~*param_2 & param_4[4] | param_3[4] & *param_2;
  param_1[5] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[6] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[7] = ~uVar3 & uVar6 | uVar9 & uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_4[9];
  uVar5 = param_4[10];
  uVar6 = param_4[0xb];
  uVar7 = param_3[9];
  uVar8 = param_3[10];
  uVar9 = param_3[0xb];
  param_1[8] = ~*param_2 & param_4[8] | param_3[8] & *param_2;
  param_1[9] = ~uVar1 & uVar4 | uVar7 & uVar1;
  param_1[10] = ~uVar2 & uVar5 | uVar8 & uVar2;
  param_1[0xb] = ~uVar3 & uVar6 | uVar9 & uVar3;
  return;
}

// 0113ACF0  FUN_0113acf0  size=44  [run]
void __thiscall FUN_0113acf0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[0xd];
  fVar2 = param_1[0xe];
  fVar3 = param_1[0xf];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = param_1[0xc] - *param_1;
  param_2[1] = fVar1 - fVar4;
  param_2[2] = fVar2 - fVar5;
  param_2[3] = fVar3 - fVar6;
  fVar1 = param_1[0x11];
  fVar2 = param_1[0x12];
  fVar3 = param_1[0x13];
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[7];
  param_2[4] = param_1[0x10] - param_1[4];
  param_2[5] = fVar1 - fVar4;
  param_2[6] = fVar2 - fVar5;
  param_2[7] = fVar3 - fVar6;
  fVar1 = param_1[0x15];
  fVar2 = param_1[0x16];
  fVar3 = param_1[0x17];
  fVar4 = param_1[9];
  fVar5 = param_1[10];
  fVar6 = param_1[0xb];
  param_2[8] = param_1[0x14] - param_1[8];
  param_2[9] = fVar1 - fVar4;
  param_2[10] = fVar2 - fVar5;
  param_2[0xb] = fVar3 - fVar6;
  return;
}

// 0113AD20  FUN_0113ad20  size=28  [run]
undefined4 FUN_0113ad20(float *param_1)

{
  if (*param_1 < 0.0) {
    return 1;
  }
  return 0;
}

// 0113AD60  FUN_0113ad60  size=34  [run]
void __thiscall FUN_0113ad60(undefined4 *param_1,undefined4 *param_2)

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
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return;
}

// 0113AD90  FUN_0113ad90  size=120  [run]
uint FUN_0113ad90(float *param_1,float *param_2,int param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_1 * *param_2;
  fVar4 = param_1[1] * param_2[1];
  fVar5 = param_1[2] * param_2[2];
  auVar1._4_4_ = -(uint)((float)(&DAT_0209e61c)[param_3 * 6] <= fVar4 + fVar3 + fVar5);
  auVar1._0_4_ = -(uint)((float)(&DAT_0209e620)[param_3 * 6] <= fVar4 + fVar3 + fVar5);
  auVar1._8_4_ = -(uint)((float)(&DAT_0209e618)[param_3 * 6] <= fVar4 + fVar3 + fVar5);
  auVar1._12_4_ = -(uint)((float)(&DAT_0209e610)[param_3 * 6] <= fVar4 + fVar3 + fVar5);
  movmskps(param_2,auVar1);
  uVar2 = __aullshr();
  return uVar2 & 0xf;
}

// 0113AE10  FUN_0113ae10  size=108  [run]
void FUN_0113ae10(undefined1 *param_1,int param_2,float *param_3,float *param_4,int param_5)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  
  if (param_5 == 0x1f) {
    *param_1 = 0;
    return;
  }
  fVar4 = param_3[2] * param_4[2] + param_3[1] * param_4[1] + *param_3 * *param_4;
  pfVar1 = (float *)(&DAT_0209e610 + param_5 * 6);
  if (param_2 == 0) {
    fVar2 = *pfVar1;
    bVar3 = fVar2 < fVar4;
  }
  else {
    fVar2 = pfVar1[param_2];
    bVar3 = fVar4 < pfVar1[param_2];
  }
  if (!bVar3 && fVar2 != fVar4) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}

// 0113B410  FUN_0113b410  size=182  [run]
void FUN_0113b410(float *param_1,float *param_2,int param_3,int param_4,float *param_5)

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
  float fVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[3];
  fVar1 = (float)(&DAT_0209e614)[param_3 * 6 + param_4];
  fVar2 = (float)(&DAT_0209e610)[param_3 * 6 + param_4];
  fVar8 = (param_2[1] * fVar7 - param_2[2] * fVar6) * fVar1 + fVar2 * fVar5;
  fVar9 = (param_2[2] * fVar5 - *param_2 * fVar7) * fVar1 + fVar2 * fVar6;
  fVar10 = (*param_2 * fVar6 - param_2[1] * fVar5) * fVar1 + fVar2 * fVar7;
  fVar5 = fVar8 * fVar8;
  fVar6 = fVar9 * fVar9;
  fVar7 = fVar10 * fVar10;
  fVar11 = fVar6 + fVar5 + fVar7;
  fVar12 = fVar6 + fVar5 + fVar7;
  fVar13 = fVar6 + fVar5 + fVar7;
  fVar7 = fVar6 + fVar5 + fVar7;
  auVar14._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0;
  auVar15._4_4_ = fVar12;
  auVar15._0_4_ = fVar11;
  auVar15._8_4_ = fVar13;
  auVar15._12_4_ = fVar7;
  auVar15 = rsqrtps(auVar14,auVar15);
  fVar5 = auVar15._0_4_;
  fVar6 = auVar15._4_4_;
  fVar16 = auVar15._8_4_;
  fVar17 = auVar15._12_4_;
  *param_5 = (float)(~-(uint)(fVar11 <= 0.0) & (uint)((3.0 - fVar5 * fVar11 * fVar5) * fVar5 * 0.5))
             * fVar8;
  param_5[1] = (float)(~-(uint)(fVar12 <= 0.0) &
                      (uint)((3.0 - fVar6 * fVar12 * fVar6) * fVar6 * 0.5)) * fVar9;
  param_5[2] = (float)(~-(uint)(fVar13 <= 0.0) &
                      (uint)((3.0 - fVar16 * fVar13 * fVar16) * fVar16 * 0.5)) * fVar10;
  param_5[3] = (float)(~-(uint)(fVar7 <= 0.0) &
                      (uint)((3.0 - fVar17 * fVar7 * fVar17) * fVar17 * 0.5)) *
               ((fVar4 * fVar3 - fVar4 * fVar3) * fVar1 + fVar2 * fVar3);
  return;
}

// 0113B4D0  FUN_0113b4d0  size=182  [run]
void FUN_0113b4d0(float *param_1,float *param_2,int param_3,int param_4,float *param_5)

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
  float fVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[3];
  fVar1 = (float)(&DAT_0209e614)[param_3 * 6 + param_4];
  fVar2 = (float)(&DAT_0209e610)[param_3 * 6 + param_4];
  fVar8 = (param_2[1] * fVar7 - param_2[2] * fVar6) * fVar1 + fVar2 * fVar5;
  fVar9 = (param_2[2] * fVar5 - *param_2 * fVar7) * fVar1 + fVar2 * fVar6;
  fVar10 = (*param_2 * fVar6 - param_2[1] * fVar5) * fVar1 + fVar2 * fVar7;
  fVar5 = fVar8 * fVar8;
  fVar6 = fVar9 * fVar9;
  fVar7 = fVar10 * fVar10;
  fVar11 = fVar6 + fVar5 + fVar7;
  fVar12 = fVar6 + fVar5 + fVar7;
  fVar13 = fVar6 + fVar5 + fVar7;
  fVar7 = fVar6 + fVar5 + fVar7;
  auVar14._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0;
  auVar15._4_4_ = fVar12;
  auVar15._0_4_ = fVar11;
  auVar15._8_4_ = fVar13;
  auVar15._12_4_ = fVar7;
  auVar15 = rsqrtps(auVar14,auVar15);
  fVar5 = auVar15._0_4_;
  fVar6 = auVar15._4_4_;
  fVar16 = auVar15._8_4_;
  fVar17 = auVar15._12_4_;
  *param_5 = (float)(~-(uint)(fVar11 <= 0.0) & (uint)((3.0 - fVar5 * fVar11 * fVar5) * fVar5 * 0.5))
             * fVar8;
  param_5[1] = (float)(~-(uint)(fVar12 <= 0.0) &
                      (uint)((3.0 - fVar6 * fVar12 * fVar6) * fVar6 * 0.5)) * fVar9;
  param_5[2] = (float)(~-(uint)(fVar13 <= 0.0) &
                      (uint)((3.0 - fVar16 * fVar13 * fVar16) * fVar16 * 0.5)) * fVar10;
  param_5[3] = (float)(~-(uint)(fVar7 <= 0.0) &
                      (uint)((3.0 - fVar17 * fVar7 * fVar17) * fVar17 * 0.5)) *
               ((fVar4 * fVar3 - fVar4 * fVar3) * fVar1 + fVar2 * fVar3);
  return;
}

// 0113B710  FUN_0113b710  size=51  [run]
void __thiscall FUN_0113b710(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x50 + (param_2 >> 5) * 4);
  uVar2 = ~(1 << ((byte)param_2 & 0x1f)) & uVar1;
  if (uVar1 != uVar2) {
    *(uint *)(param_1 + 0x50 + (param_2 >> 5) * 4) = uVar2;
    *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
  }
  return;
}

// 0113B750  FUN_0113b750  size=54  [run]
void __thiscall FUN_0113b750(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x50 + (param_2 >> 5) * 4);
  uVar2 = 1 << ((byte)param_2 & 0x1f) | uVar1;
  if (uVar1 != uVar2) {
    *(uint *)(param_1 + 0x50 + (param_2 >> 5) * 4) = uVar2;
    *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + -1;
  }
  return;
}

// 0113B790  FUN_0113b790  size=62  [run]
void __thiscall FUN_0113b790(int param_1,int *param_2)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2[1]) {
    do {
      *(undefined4 *)(param_1 + 0x50 + iVar3 * 4) = *(undefined4 *)(*param_2 + iVar3 * 4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2[1]);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  sVar2 = FUN_01446a80(*param_2,param_2[3]);
  *(short *)(param_1 + 0x26) = (short)uVar1 - sVar2;
  return;
}

// 0113B7D0  hkpListShape::vf14  size=18  [run]
undefined4 __thiscall hkpListShape::vf14(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 0x10);
}

// 0113B7F0  hkpListShape::vf10  size=19  [run]
undefined4 __thiscall hkpListShape::vf10(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 4 + param_2 * 0x10);
}

// 0113B810  FUN_0113b810  size=22  [run]
void __thiscall FUN_0113b810(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4 + param_2 * 0x10) = param_3;
  return;
}

// 0113B830  hkpListShape::vf40  size=147  [run]
undefined4 __thiscall hkpListShape::vf40(int param_1,char *param_2)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int local_8;
  
  if ((((*param_2 == '\0') || (param_2[1] != '\0')) || (*(int *)(param_1 + 0x1c) < 0xfd)) &&
     (*(int *)(param_1 + 0x1c) < 0x7ff)) {
    local_8 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x18);
        uVar2 = (**(code **)(**(int **)(iVar1 + iVar3) + 0x40))(param_2,0x100);
        *(undefined2 *)(iVar1 + 10 + iVar3) = uVar2;
        *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc + iVar3) = *(undefined4 *)(param_1 + 0x1c);
        if (*(short *)(*(int *)(param_1 + 0x18) + 10 + iVar3) == -1) {
          return 0xffffffff;
        }
        local_8 = local_8 + 1;
        iVar3 = iVar3 + 0x10;
      } while (local_8 < *(int *)(param_1 + 0x1c));
    }
    return 0x70;
  }
  return 0xffffffff;
}

// 0113B8D0  hkpListShape::vf14  size=363  [run]
void __thiscall hkpListShape::vf14(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  LPVOID pvVar4;
  char *pcVar5;
  uint uVar6;
  int local_10;
  uint local_c;
  undefined1 local_5;
  
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  iVar3 = param_3;
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = "TtrcList";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar6 = 0;
  local_c = 0xffffffff;
  if (*(int *)(param_3 + 0x28) == 0) {
    if (0 < *(int *)(param_1 + 0x1c)) {
      local_10 = 0;
      do {
        if (((0xff < uVar6) ||
            ((1 << ((byte)uVar6 & 0x1f) & *(uint *)(param_1 + 0x50 + (uVar6 >> 5) * 4)) != 0)) &&
           (pcVar5 = (char *)(**(code **)(**(int **)(local_10 + *(int *)(param_1 + 0x18)) + 0x14))
                                       ((int)&param_3 + 3,iVar3,param_4), *pcVar5 != '\0')) {
          local_c = uVar6;
        }
        local_10 = local_10 + 0x10;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)(param_1 + 0x1c));
    }
  }
  else if (0 < *(int *)(param_1 + 0x1c)) {
    local_10 = 0;
    do {
      if ((((0xff < uVar6) ||
           ((1 << ((byte)uVar6 & 0x1f) & *(uint *)(param_1 + 0x50 + (uVar6 >> 5) * 4)) != 0)) &&
          (pcVar5 = (char *)(**(code **)**(undefined4 **)(iVar3 + 0x28))
                                      ((int)&param_3 + 3,iVar3,param_1,param_1 + 0x10,uVar6),
          *pcVar5 != '\0')) &&
         (pcVar5 = (char *)(**(code **)(**(int **)(local_10 + *(int *)(param_1 + 0x18)) + 0x14))
                                     (&local_5,iVar3,param_4), *pcVar5 != '\0')) {
        local_c = uVar6;
      }
      local_10 = local_10 + 0x10;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(param_1 + 0x1c));
  }
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + -1;
  if (local_c != 0xffffffff) {
    *(uint *)(param_4 + 0x20 + *(int *)(param_4 + 0x40) * 4) = local_c;
  }
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  *(bool *)param_2 = local_c != 0xffffffff;
  return;
}

// 0113BA40  hkpListShape::vf18  size=340  [run]
void __thiscall hkpListShape::vf18(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  LPVOID pvVar4;
  char *pcVar5;
  uint uVar6;
  int *local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  iVar3 = param_2;
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = "TtrcList";
    uVar2 = rdtsc();
    local_8 = (int)uVar2;
    puVar1[1] = local_8;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    if (0 < *(int *)(param_1 + 0x1c)) {
      param_2 = 0;
      uVar6 = 0;
      do {
        if ((0xff < uVar6) ||
           ((1 << ((byte)uVar6 & 0x1f) & *(uint *)(param_1 + 0x50 + (uVar6 >> 5) * 4)) != 0)) {
          local_18 = *(int **)(param_2 + *(int *)(param_1 + 0x18));
          local_10 = *(undefined4 *)(param_3 + 8);
          local_c = param_3;
          local_14 = uVar6;
          (**(code **)(*local_18 + 0x18))(iVar3,&local_18,param_4);
        }
        param_2 = param_2 + 0x10;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)(param_1 + 0x1c));
    }
  }
  else if (0 < *(int *)(param_1 + 0x1c)) {
    local_8 = 0;
    uVar6 = 0;
    do {
      if (((0xff < uVar6) ||
          ((1 << ((byte)uVar6 & 0x1f) & *(uint *)(param_1 + 0x50 + (uVar6 >> 5) * 4)) != 0)) &&
         (pcVar5 = (char *)(**(code **)**(undefined4 **)(iVar3 + 0x28))
                                     ((int)&param_2 + 3,iVar3,param_1,param_1 + 0x10,uVar6),
         *pcVar5 != '\0')) {
        local_18 = *(int **)(local_8 + *(int *)(param_1 + 0x18));
        local_10 = *(undefined4 *)(param_3 + 8);
        local_c = param_3;
        local_14 = uVar6;
        (**(code **)(*local_18 + 0x18))(iVar3,&local_18,param_4);
      }
      local_8 = local_8 + 0x10;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(param_1 + 0x1c));
  }
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
  }
  return;
}

// 0113BBA0  FUN_0113bba0  size=198  [run]
void __thiscall FUN_0113bba0(int param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  int local_18;
  int local_14;
  
  (**(code **)(*(int *)**(undefined4 **)(param_1 + 0x18) + 0x10))(&DAT_01701ca0,0,param_2);
  local_18 = 1;
  if (1 < *(int *)(param_1 + 0x1c)) {
    local_14 = 0x10;
    do {
      (**(code **)(**(int **)(local_14 + *(int *)(param_1 + 0x18)) + 0x10))
                (&DAT_01701ca0,0,local_40);
      auVar7 = minps(*param_2,local_40);
      local_14 = local_14 + 0x10;
      *param_2 = auVar7;
      auVar7 = maxps(param_2[1],local_30);
      local_18 = local_18 + 1;
      param_2[1] = auVar7;
    } while (local_18 < *(int *)(param_1 + 0x1c));
  }
  fVar1 = *(float *)(param_2[1] + 4);
  fVar2 = *(float *)(param_2[1] + 8);
  fVar3 = *(float *)(param_2[1] + 0xc);
  fVar4 = *(float *)(*param_2 + 4);
  fVar5 = *(float *)(*param_2 + 8);
  fVar6 = *(float *)(*param_2 + 0xc);
  *(float *)(param_1 + 0x40) = (*(float *)param_2[1] + *(float *)*param_2) * 0.5;
  *(float *)(param_1 + 0x44) = (fVar1 + fVar4) * 0.5;
  *(float *)(param_1 + 0x48) = (fVar2 + fVar5) * 0.5;
  *(float *)(param_1 + 0x4c) = (fVar3 + fVar6) * 0.5;
  fVar1 = *(float *)(param_2[1] + 4);
  fVar2 = *(float *)(param_2[1] + 8);
  fVar3 = *(float *)(param_2[1] + 0xc);
  fVar4 = *(float *)(*param_2 + 4);
  fVar5 = *(float *)(*param_2 + 8);
  fVar6 = *(float *)(*param_2 + 0xc);
  *(float *)(param_1 + 0x30) = (*(float *)param_2[1] - *(float *)*param_2) * 0.5;
  *(float *)(param_1 + 0x34) = (fVar1 - fVar4) * 0.5;
  *(float *)(param_1 + 0x38) = (fVar2 - fVar5) * 0.5;
  *(float *)(param_1 + 0x3c) = (fVar3 - fVar6) * 0.5;
  return;
}

// 0113BC70  FUN_0113bc70  size=41  [run]
void FUN_0113bc70(void)

{
  undefined1 local_30 [32];
  
  FUN_0113bba0(local_30);
  return;
}

// 0113BCA0  hkpListShape::hkpListShape  size=49  [run]
undefined4 * __thiscall hkpListShape::hkpListShape(undefined4 *param_1,int param_2)

{
  hkpShapeContainer::hkpShapeContainer_10(param_2);
  *param_1 = vftable;
  param_1[4] = vftable;
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 2) = 8;
    *(undefined1 *)((int)param_1 + 0x15) = 0;
  }
  return param_1;
}

// 0113BCE0  hkBaseObject::hkBaseObject_5  size=123  [run]
void __fastcall hkBaseObject::hkBaseObject_5(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = hkpListShape::vftable;
  param_1[4] = hkpListShape::vftable;
  if (0 < (int)param_1[7]) {
    do {
      FUN_010060a0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[7]);
  }
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

// 0113BD60  FUN_0113bd60  size=200  [run]
void __thiscall FUN_0113bd60(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar2 = param_3;
  piVar1 = (int *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x20) & 0x3fffffff;
  if ((int)uVar3 < param_3) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= param_3) {
      iVar4 = param_3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,iVar4,0x10);
  }
  iVar4 = 0;
  if (param_3 != *(int *)(param_1 + 0x1c) && -1 < param_3 - *(int *)(param_1 + 0x1c)) {
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3 - *(int *)(param_1 + 0x1c));
  }
  *(int *)(param_1 + 0x1c) = param_3;
  if (0 < param_3) {
    iVar4 = 0;
    iVar5 = param_4 - (int)param_2;
    do {
      if (*param_2 != 0) {
        *(int *)(iVar4 + *piVar1) = *param_2;
        if (param_4 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(iVar5 + (int)param_2);
        }
        *(undefined4 *)(iVar4 + 4 + *piVar1) = uVar6;
        *(int *)(iVar4 + 0xc + *piVar1) = iVar2;
        *(undefined2 *)(iVar4 + 10 + *piVar1) = 0;
      }
      param_2 = param_2 + 1;
      iVar4 = iVar4 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (param_5 == 1) {
    FUN_01006170(*piVar1,*(undefined4 *)(param_1 + 0x1c),0x10);
  }
  FUN_0113bc70();
  return;
}

// 0113BE30  hkpListShape::vf10  size=178  [run]
void __thiscall
hkpListShape::vf10(int param_1,undefined4 param_2,undefined4 param_3,undefined1 (*param_4) [16])

{
  undefined4 in_EAX;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  int local_18;
  int local_14;
  
  auVar2._4_4_ = -(uint)(*(float *)(param_1 + 0x34) <= 0.0);
  auVar2._0_4_ = -(uint)(*(float *)(param_1 + 0x30) <= 0.0);
  auVar2._8_4_ = -(uint)(*(float *)(param_1 + 0x38) <= 0.0);
  auVar2._12_4_ = -(uint)(*(float *)(param_1 + 0x3c) <= 0.0);
  iVar1 = movmskps(in_EAX,auVar2);
  if (iVar1 == 0xf) {
    FUN_0113bc70();
  }
  *(undefined4 *)*param_4 = 0x7effffee;
  *(undefined4 *)(*param_4 + 4) = 0x7effffee;
  *(undefined4 *)(*param_4 + 8) = 0x7effffee;
  *(undefined4 *)(*param_4 + 0xc) = 0x7effffee;
  *(undefined4 *)param_4[1] = 0xfeffffee;
  *(undefined4 *)(param_4[1] + 4) = 0xfeffffee;
  *(undefined4 *)(param_4[1] + 8) = 0xfeffffee;
  *(undefined4 *)(param_4[1] + 0xc) = 0xfeffffee;
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    local_14 = 0;
    do {
      (**(code **)(**(int **)(local_14 + *(int *)(param_1 + 0x18)) + 0x10))
                (param_2,param_3,local_40);
      auVar2 = minps(*param_4,local_40);
      local_14 = local_14 + 0x10;
      *param_4 = auVar2;
      auVar2 = maxps(param_4[1],local_30);
      local_18 = local_18 + 1;
      param_4[1] = auVar2;
    } while (local_18 < *(int *)(param_1 + 0x1c));
  }
  return;
}

// 0113BEF0  hkpListShape::hkpListShape_2  size=154  [run]
undefined4 * __thiscall
hkpListShape::hkpListShape_2
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  hkpShapeContainer::hkpShapeContainer_9(8,0);
  *param_1 = vftable;
  param_1[4] = vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x80000000;
  uVar1 = param_1[8] & 0x3fffffff;
  if (uVar1 < 4) {
    uVar2 = uVar1 * 2;
    if (uVar1 == 2 || uVar2 < 4) {
      uVar2 = 4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 6,uVar2,0x10);
  }
  FUN_0113bd60(param_2,param_3,0,param_4);
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[9] = 0;
  return param_1;
}

// 0113BFD0  FUN_0113bfd0  size=15  [run]
int __thiscall FUN_0113bfd0(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 0113BFF0  FUN_0113bff0  size=9  [run]
void FUN_0113bff0(void)

{
  FUN_01006170();
  return;
}

// 0113C040  FUN_0113c040  size=25  [run]
void __thiscall FUN_0113c040(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 0113C060  FUN_0113c060  size=21  [run]
void __thiscall FUN_0113c060(int param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return;
}

// 0113C090  FUN_0113c090  size=15  [run]
undefined4 __thiscall FUN_0113c090(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 4);
}

// 0113C0E0  FUN_0113c0e0  size=52  [run]
undefined4 __thiscall FUN_0113c0e0(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 0113C120  FUN_0113c120  size=55  [run]
void __thiscall FUN_0113c120(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x10);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 0113C160  FUN_0113c160  size=60  [run]
void __thiscall FUN_0113c160(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0113C1A0  FUN_0113c1a0  size=26  [run]
void __thiscall FUN_0113c1a0(float *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *param_2 = -(uint)(*param_1 <= *param_3);
  param_2[1] = -(uint)(fVar4 <= fVar1);
  param_2[2] = -(uint)(fVar5 <= fVar2);
  param_2[3] = -(uint)(fVar6 <= fVar3);
  return;
}

// 0113C1C0  FUN_0113c1c0  size=53  [run]
undefined4 __thiscall FUN_0113c1c0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 0113C200  FUN_0113c200  size=56  [run]
void __thiscall FUN_0113c200(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x10);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 0113C240  FUN_0113c240  size=60  [run]
void __fastcall FUN_0113c240(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0113C280  FUN_0113c280  size=60  [run]
void __fastcall FUN_0113c280(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0113C2C0  hkpListShape::vf00  size=8  [run]
void hkpListShape::vf00(void)

{
  vf00();
  return;
}

// 0113C2D0  FUN_0113c2d0  size=38  [run]
void FUN_0113c2d0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0113C300  hkpListShape::vf04  size=10  [run]
int __fastcall hkpListShape::vf04(int param_1)

{
  return *(int *)(param_1 + 0xc) - (uint)*(ushort *)(param_1 + 0x16);
}

// 0113C310  hkpListShape::vf0C  size=62  [run]
uint __thiscall hkpListShape::vf0C(int param_1,uint param_2)

{
  while( true ) {
    param_2 = param_2 + 1;
    if (*(int *)(param_1 + 0xc) <= (int)param_2) {
      return 0xffffffff;
    }
    if (0xff < param_2) break;
    if ((1 << ((byte)param_2 & 0x1f) & *(uint *)(param_1 + 0x40 + (param_2 >> 5) * 4)) != 0) {
      return param_2;
    }
  }
  return param_2;
}

// 0113C350  hkpListShape::vf08  size=61  [run]
uint __fastcall hkpListShape::vf08(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      if (0xff < uVar1) {
        return uVar1;
      }
      if ((1 << ((byte)uVar1 & 0x1f) & *(uint *)(param_1 + 0x40 + (uVar1 >> 5) * 4)) != 0) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < *(int *)(param_1 + 0xc));
  }
  return 0xffffffff;
}

// 0113C390  hkpListShape::vf00  size=52  [run]
int __thiscall hkpListShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_5();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0113C3D0  FUN_0113c3d0  size=68  [run]
void __fastcall FUN_0113c3d0(undefined2 *param_1)

{
  *param_1 = 0x100;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = DAT_01b20754;
  *(undefined4 *)(param_1 + 6) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 8) = 0x3d8f5c29;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 10) = 0xbdcccccd;
  return;
}


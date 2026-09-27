// lib/havok/unit_0100B350.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0100B350..01022FF0, 960 functions

#include "mgrr.h"
#include "hkArrayStreamWriter.h"
#include "hkBaseObject.h"
#include "hkBufferedStreamWriter.h"
#include "hkCpuJobThreadPool.h"
#include "hkCrc32StreamWriter.h"
#include "hkDefaultError.h"
#include "hkDummySingleton.h"
#include "hkErrStream.h"
#include "hkError.h"
#include "hkFileSystem.h"
#include "hkJobThreadPool.h"
#include "hkLifoAllocator.h"
#include "hkLocalFrame.h"
#include "hkLocalFrameGroup.h"
#include "hkMallocAllocator.h"
#include "hkMemoryAllocator.h"
#include "hkMemorySystem.h"
#include "hkMemoryTrackStreamWriter.h"
#include "hkMonitorStreamColorTable.h"
#include "hkNativeFileSystem.h"
#include "hkOArchive.h"
#include "hkOstream.h"
#include "hkReferencedObject.h"
#include "hkSimpleLocalFrame.h"
#include "hkSocket.h"
#include "hkStreamReader.h"
#include "hkStreamWriter.h"

// 0100B350  FUN_0100b350  size=38  [run]
void FUN_0100b350(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0100B380  hkErrStream::vf00  size=52  [run]
int __thiscall hkErrStream::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_38();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0100B3C0  FUN_0100b3c0  size=188  [run]
void __thiscall FUN_0100b3c0(undefined1 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  fVar1 = *param_2;
  if (0.0099983215 <= fVar1) {
    uVar5 = 0;
    uVar4 = 0x80;
    iVar3 = 6;
    uVar6 = 0x100;
    do {
      fVar2 = (float)((*(ushort *)(&DAT_0164c9e0 + (uVar4 & 0xff) * 2) + 0x3b800) * 0x1000);
      if (*(ushort *)(&DAT_0164c9e0 + (uVar4 & 0xff) * 2) == 0) {
        fVar2 = 0.0;
      }
      uVar7 = uVar4;
      if (fVar2 < fVar1) {
        uVar5 = uVar4;
        uVar7 = uVar6;
      }
      uVar4 = (int)(uVar7 + uVar5) >> 1;
      iVar3 = iVar3 + -1;
      uVar6 = uVar7;
    } while (-1 < iVar3);
    fVar2 = (float)((*(ushort *)(&DAT_0164c9e0 + (uVar4 & 0xff) * 2) + 0x3b800) * 0x1000);
    if (*(ushort *)(&DAT_0164c9e0 + (uVar4 & 0xff) * 2) == 0) {
      fVar2 = 0.0;
    }
    if ((fVar2 < fVar1) && (uVar4 < 0xff)) {
      uVar4 = uVar4 + 1;
    }
    *param_1 = (char)uVar4;
    return;
  }
  *param_1 = 0;
  return;
}

// 0100B480  FUN_0100b480  size=8  [run]
undefined4 FUN_0100b480(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0100B4C0  hkLifoAllocator::hkLifoAllocator  size=28  [run]
void __thiscall hkLifoAllocator::hkLifoAllocator(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = param_2;
  return;
}

// 0100B4E0  FUN_0100b4e0  size=92  [run]
void __thiscall FUN_0100b4e0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_4 + 4))(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x80000000;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0x80000000;
    puVar1[6] = 0;
  }
  *(undefined4 **)(param_1 + 4) = puVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int **)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  return;
}

// 0100B540  hkLifoAllocator::vf14  size=117  [run]
int __thiscall hkLifoAllocator::vf14(int *param_1,int param_2,int param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_4 + 0xf & 0xfffffff0;
  uVar3 = param_3 + 0xfU & 0xfffffff0;
  *param_4 = uVar1;
  if ((uVar3 + param_2 == param_1[3]) && (uVar1 + param_2 <= (uint)param_1[4])) {
    param_1[3] = uVar1 + param_2;
    return param_2;
  }
  iVar2 = (**(code **)(*param_1 + 4))(uVar1);
  uVar1 = *param_4;
  if ((int)uVar3 < (int)*param_4) {
    uVar1 = uVar3;
  }
  FUN_010199f0(iVar2,param_2,uVar1);
  (**(code **)(*param_1 + 8))(param_2,uVar3);
  return iVar2;
}

// 0100B5E0  FUN_0100b5e0  size=208  [run]
void __fastcall FUN_0100b5e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 4) + -1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (-1 < iVar4) {
    iVar5 = iVar4 * 0xc;
    do {
      iVar2 = **(int **)(param_1 + 4);
      if (*(int *)(iVar2 + 4 + iVar5) != iVar3) break;
      iVar3 = *(int *)(iVar2 + iVar5);
      piVar1 = *(int **)(param_1 + 4) + 1;
      *piVar1 = *piVar1 + -1;
      iVar5 = iVar5 + -0xc;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  while (1 < iVar4) {
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    iVar5 = *(int *)(*(int *)(param_1 + 4) + 0xc);
    if ((iVar3 != *(int *)(iVar5 + -4 + iVar4 * 4)) &&
       ((uint)(iVar3 - *(int *)(iVar5 + -4 + iVar4 * 4)) <= *(uint *)(param_1 + 8))) break;
    if (*(int *)(param_1 + 0x18) != 0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 8))
                (*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
      piVar1 = (int *)(*(int *)(param_1 + 4) + 0x18);
      *piVar1 = *piVar1 + -1;
    }
    iVar4 = *(int *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x18) =
         *(undefined4 *)(*(int *)(iVar4 + 0xc) + -4 + *(int *)(iVar4 + 0x10) * 4);
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + -1;
    iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  }
  piVar1 = *(int **)(param_1 + 4);
  *(int *)(param_1 + 0xc) = iVar3;
  if (piVar1[4] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(piVar1[3] + -4 + piVar1[4] * 4) + *(int *)(param_1 + 8);
  }
  *(int *)(param_1 + 0x10) = iVar3;
  if (piVar1[1] == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + -8 + piVar1[1] * 0xc);
  return;
}

// 0100B6C0  FUN_0100b6c0  size=192  [run]
void __fastcall FUN_0100b6c0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))
              (**(undefined4 **)(*(int *)(param_1 + 4) + 0xc),*(undefined4 *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))
              (*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8));
  }
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = *(int **)(param_1 + 0x24);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  if (-1 < *(int *)(iVar1 + 0x14)) {
    (**(code **)(*piVar2 + 0x10))(*(undefined4 *)(iVar1 + 0xc),*(int *)(iVar1 + 0x14) * 4);
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0x80000000;
  puVar3 = *(undefined4 **)(param_1 + 4);
  piVar2 = *(int **)(param_1 + 0x24);
  puVar3[1] = 0;
  if (-1 < (int)puVar3[2]) {
    (**(code **)(*piVar2 + 0x10))(*puVar3,(puVar3[2] & 0x3fffffff) * 0xc);
  }
  *puVar3 = 0;
  puVar3[2] = 0x80000000;
  (**(code **)(**(int **)(param_1 + 0x24) + 8))(*(undefined4 *)(param_1 + 4),0x1c);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 0100B780  FUN_0100b780  size=247  [run]
int __thiscall FUN_0100b780(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 <= *(int *)(param_1 + 8)) {
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 == 0) {
      if (*(int *)(*(int *)(param_1 + 4) + 0x10) < 2) {
        iVar4 = (**(code **)(**(int **)(param_1 + 0x24) + 4))(*(int *)(param_1 + 8));
      }
      else {
        piVar1 = (int *)(*(int *)(param_1 + 4) + 0x18);
        *piVar1 = *piVar1 + 1;
        iVar4 = (**(code **)(**(int **)(param_1 + 0x1c) + 4))(*(undefined4 *)(param_1 + 8));
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    piVar1 = *(int **)(param_1 + 4);
    if (piVar1[4] != 0) {
      if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
        FUN_0100a290(*(undefined4 *)(param_1 + 0x24),piVar1,0xc);
      }
      iVar3 = piVar1[1];
      piVar1[1] = iVar3 + 1;
      puVar2 = (undefined4 *)(*piVar1 + iVar3 * 0xc);
      puVar2[1] = iVar4;
      *puVar2 = *(undefined4 *)(param_1 + 0xc);
      puVar2[2] = *(int *)(*(int *)(param_1 + 4) + 0x10) + -1;
      *(int *)(param_1 + 0x14) = iVar4;
    }
    iVar3 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 8) + iVar4;
    *(int *)(param_1 + 0xc) = iVar4 + param_2;
    if (*(uint *)(iVar3 + 0x10) == (*(uint *)(iVar3 + 0x14) & 0x3fffffff)) {
      FUN_0100a290(*(undefined4 *)(param_1 + 0x24),(int *)(iVar3 + 0xc),4);
    }
    *(int *)(*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x10) * 4) = iVar4;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    return iVar4;
  }
  piVar1 = (int *)(*(int *)(param_1 + 4) + 0x18);
  *piVar1 = *piVar1 + 1;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(param_2);
  return iVar4;
}

// 0100B880  FUN_0100b880  size=302  [run]
void __thiscall FUN_0100b880(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  uint local_8;
  
  piVar1 = *(int **)(param_1 + 4);
  uVar3 = piVar1[4] - 1;
  local_8 = 0xffffffff;
  uVar6 = local_8;
  if (-1 < (int)uVar3) {
    piVar7 = (int *)(piVar1[3] + uVar3 * 4);
    do {
      uVar6 = uVar3;
      if (param_2 - *piVar7 < *(uint *)(param_1 + 8)) break;
      piVar7 = piVar7 + -1;
      uVar3 = uVar3 - 1;
      uVar6 = local_8;
    } while (-1 < (int)uVar3);
  }
  local_8 = uVar6;
  uVar6 = param_2 + param_3;
  iVar9 = 0;
  iVar4 = piVar1[1] + -1;
  if (-1 < iVar4) {
    puVar8 = (uint *)(*piVar1 + iVar4 * 0xc);
    do {
      if (puVar8[2] == local_8) {
        if (param_2 == puVar8[1]) {
          puVar8[1] = uVar6;
          goto LAB_0100b97f;
        }
        if (uVar6 == *puVar8) {
          *puVar8 = param_2;
          goto LAB_0100b97f;
        }
        if (*puVar8 < param_2) goto LAB_0100b90c;
      }
      else if ((int)puVar8[2] < (int)local_8) {
LAB_0100b90c:
        iVar9 = iVar4 + 1;
        break;
      }
      puVar8 = puVar8 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar2 = piVar1[1];
  iVar4 = iVar2 + 1;
  if ((int)(piVar1[2] & 0x3fffffffU) < iVar4) {
    iVar5 = (piVar1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    FUN_0100a210(*(undefined4 *)(param_1 + 0x24),piVar1,iVar5,0xc);
  }
  iVar5 = iVar9 * 0xc;
  FUN_01019bd0(*piVar1 + iVar5 + 0xc,*piVar1 + iVar5,(iVar2 - iVar9) * 0xc);
  iVar9 = *piVar1;
  piVar1[1] = iVar4;
  *(uint *)(iVar9 + iVar5) = param_2;
  *(uint *)(iVar9 + 4 + iVar5) = uVar6;
  *(uint *)(iVar9 + 8 + iVar5) = local_8;
LAB_0100b97f:
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1[1] == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + -8 + piVar1[1] * 0xc);
  return;
}

// 0100B9B0  FUN_0100b9b0  size=81  [run]
void __thiscall FUN_0100b9b0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    if (param_3 <= *(int *)(param_1 + 8)) {
      uVar2 = param_3 + 0xfU & 0xfffffff0;
      if (uVar2 + param_2 == *(int *)(param_1 + 0xc)) {
        *(int *)(param_1 + 0xc) = param_2;
        FUN_0100b5e0();
        return;
      }
      FUN_0100b880(param_2,uVar2);
      return;
    }
    piVar1 = (int *)(*(int *)(param_1 + 4) + 0x18);
    *piVar1 = *piVar1 + -1;
    (**(code **)(**(int **)(param_1 + 0x20) + 8))(param_2,param_3);
  }
  return;
}

// 0100BA10  hkLifoAllocator::vf04  size=48  [run]
void __thiscall hkLifoAllocator::vf04(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 + 0xfU & 0xfffffff0;
  uVar1 = *(int *)(param_1 + 0xc) + uVar2;
  if (((int)uVar2 <= *(int *)(param_1 + 8)) && (uVar1 <= *(uint *)(param_1 + 0x10))) {
    *(uint *)(param_1 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar2);
  return;
}

// 0100BA40  hkLifoAllocator::vf08  size=53  [run]
void __thiscall hkLifoAllocator::vf08(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_3 + 0xfU & 0xfffffff0;
  if (((param_3 <= *(int *)(param_1 + 8)) && (uVar1 + param_2 == *(int *)(param_1 + 0xc))) &&
     (*(int *)(param_1 + 0x14) != param_2)) {
    *(int *)(param_1 + 0xc) = param_2;
    return;
  }
  FUN_0100b9b0(param_2,uVar1);
  return;
}

// 0100BA80  hkLifoAllocator::vf0C  size=58  [run]
void __thiscall hkLifoAllocator::vf0C(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_2 + 0xf & 0xfffffff0;
  *param_2 = uVar2;
  uVar1 = *(int *)(param_1 + 0xc) + uVar2;
  if (((int)uVar2 <= *(int *)(param_1 + 8)) && (uVar1 <= *(uint *)(param_1 + 0x10))) {
    *(uint *)(param_1 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar2);
  return;
}

// 0100BAC0  hkLifoAllocator::vf10  size=53  [run]
void __thiscall hkLifoAllocator::vf10(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_3 + 0xfU & 0xfffffff0;
  if (((param_3 <= *(int *)(param_1 + 8)) && (uVar1 + param_2 == *(int *)(param_1 + 0xc))) &&
     (*(int *)(param_1 + 0x14) != param_2)) {
    *(int *)(param_1 + 0xc) = param_2;
    return;
  }
  FUN_0100b9b0(param_2,uVar1);
  return;
}

// 0100BB30  FUN_0100bb30  size=18  [run]
int __thiscall FUN_0100bb30(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 0100BBA0  FUN_0100bba0  size=15  [run]
int __thiscall FUN_0100bba0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0100BBD0  FUN_0100bbd0  size=19  [run]
void __thiscall FUN_0100bbd0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 4) == 0;
  return;
}

// 0100BBF0  FUN_0100bbf0  size=33  [run]
void __thiscall FUN_0100bbf0(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 4))(param_2 * 0x1c);
  return;
}

// 0100BC20  FUN_0100bc20  size=37  [run]
void __thiscall FUN_0100bc20(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 8))(param_2,param_3 * 0x1c);
  return;
}

// 0100BC60  FUN_0100bc60  size=52  [run]
undefined4 __thiscall FUN_0100bc60(int param_1,undefined4 param_2,int param_3)

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

// 0100BCA0  FUN_0100bca0  size=29  [run]
void __thiscall FUN_0100bca0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 0100BCE0  FUN_0100bce0  size=26  [run]
void __thiscall FUN_0100bce0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0100BD10  FUN_0100bd10  size=34  [run]
void FUN_0100bd10(int param_1,int param_2,undefined4 *param_3)

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

// 0100BD70  hkLifoAllocator::vf20  size=3  [run]
void hkLifoAllocator::vf20(void)

{
  return;
}

// 0100BD80  hkLifoAllocator::vf24  size=10  [run]
undefined4 hkLifoAllocator::vf24(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0100BD90  hkLifoAllocator::vf00  size=14  [run]
undefined4 __fastcall hkLifoAllocator::vf00(undefined4 param_1)

{
  hkMemoryAllocator::~hkMemoryAllocator();
  return param_1;
}

// 0100BDB0  FUN_0100bdb0  size=13  [run]
void __thiscall FUN_0100bdb0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 0100BDC0  FUN_0100bdc0  size=13  [run]
void __thiscall FUN_0100bdc0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 0100BDD0  FUN_0100bdd0  size=57  [run]
void __thiscall FUN_0100bdd0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0100BE50  FUN_0100be50  size=64  [run]
void __thiscall FUN_0100be50(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0100BE90  FUN_0100be90  size=54  [run]
int __thiscall FUN_0100be90(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 0100BED0  FUN_0100bed0  size=127  [run]
int __thiscall FUN_0100bed0(int *param_1,undefined4 param_2,int param_3,int param_4)

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

// 0100BF50  FUN_0100bf50  size=61  [run]
void __thiscall FUN_0100bf50(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0100BFC0  FUN_0100bfc0  size=16  [run]
void __thiscall FUN_0100bfc0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x288) = param_2;
  return;
}

// 0100BFD0  FUN_0100bfd0  size=17  [run]
PRTL_CRITICAL_SECTION_DEBUG __fastcall FUN_0100bfd0(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return param_1[1].DebugInfo;
}

// 0100BFF0  FUN_0100bff0  size=10  [run]
void __fastcall FUN_0100bff0(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return;
}

// 0100C010  FUN_0100c010  size=7  [run]
undefined4 __fastcall FUN_0100c010(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c);
}

// 0100C020  FUN_0100c020  size=130  [run]
void __thiscall FUN_0100c020(int param_1,undefined4 param_2)

{
  short *psVar1;
  int iVar2;
  undefined1 local_260 [592];
  
  iVar2 = FUN_0100bfd0(local_260);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c) = param_2;
  if (*(short *)(iVar2 + 0x36 + *(char *)(param_1 + 0x11c) * 2) != 0) {
    psVar1 = (short *)(iVar2 + 0x36 + *(char *)(param_1 + 0x11c) * 2);
    *psVar1 = *psVar1 + -1;
    FUN_01019c80(*(undefined4 *)(param_1 + 0x78 + *(char *)(param_1 + 0x11c) * 4),1);
  }
  FUN_0100bff0(iVar2);
  return;
}

// 0100C0B0  FUN_0100c0b0  size=38  [run]
void __thiscall FUN_0100c0b0(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x128 + param_2 * 0x10);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}

// 0100C0E0  FUN_0100c0e0  size=100  [run]
void __thiscall FUN_0100c0e0(int param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    puVar3 = (undefined4 *)(param_1 + 0x78);
    puVar1 = (ushort *)(param_2 + 0x36);
    do {
      uVar2 = (uint)*puVar1;
      *puVar1 = 0;
      if (uVar2 != 0) {
        do {
          FUN_01019c80(*puVar3,1);
          uVar2 = uVar2 - 1;
        } while (0 < (int)uVar2);
      }
      local_8 = local_8 + 1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (local_8 < *(int *)(param_1 + 0x8c));
  }
  return;
}

// 0100C170  FUN_0100c170  size=38  [run]
void FUN_0100c170(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  (**(code **)(param_1 + (*(byte *)(param_3 + 1) + 0x13) * 0x10))(param_1,param_2,param_3,param_4);
  return;
}

// 0100C1A0  FUN_0100c1a0  size=39  [run]
void FUN_0100c1a0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  (**(code **)(param_1 + 0x134 + (uint)*(byte *)(param_3 + 1) * 0x10))
            (param_1,param_2,param_3,param_4);
  return;
}

// 0100C1D0  FUN_0100c1d0  size=71  [run]
uint __thiscall FUN_0100c1d0(int param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    pcVar1 = (char *)(param_1 + 0x3c);
    do {
      if ((param_2[1] == pcVar1[-4]) && (*param_2 == *pcVar1)) {
        return (uint)*(byte *)(param_1 + 0x3d + iVar2 * 8);
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x48));
  }
  return (uint)(byte)param_2[1] + *(int *)(param_1 + 0x30);
}

// 0100C220  FUN_0100c220  size=174  [run]
void __thiscall FUN_0100c220(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  bVar1 = false;
  if (iVar2 < *(int *)(param_1 + 0x50)) {
    psVar4 = (short *)(param_2 + 0x36 + iVar2 * 2);
    piVar3 = (int *)(param_2 + (iVar2 * 5 + 0x14) * 4);
    bVar1 = false;
    do {
      if ((*piVar3 != 0) && (bVar1 = true, *psVar4 != 0)) goto LAB_0100c2ac;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 5;
      psVar4 = psVar4 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x50));
  }
  if (iVar2 < *(int *)(param_1 + 0x34)) {
    piVar3 = (int *)(param_2 + (iVar2 * 5 + 0x14) * 4);
    do {
      if (*piVar3 != 0) goto LAB_0100c281;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 5;
    } while (iVar2 < *(int *)(param_1 + 0x34));
  }
  if (bVar1) {
LAB_0100c281:
    iVar2 = *(int *)(param_1 + 0x4c);
    if (iVar2 < *(int *)(param_1 + 0x8c)) {
      psVar4 = (short *)(param_2 + 0x36 + iVar2 * 2);
      while (*psVar4 == 0) {
        iVar2 = iVar2 + 1;
        psVar4 = psVar4 + 1;
        if (*(int *)(param_1 + 0x8c) <= iVar2) {
          return;
        }
      }
LAB_0100c2ac:
      psVar4 = (short *)(param_2 + 0x36 + iVar2 * 2);
      *psVar4 = *psVar4 + -1;
      FUN_01019c80(*(undefined4 *)(param_1 + 0x78 + iVar2 * 4),1);
    }
  }
  return;
}

// 0100C2D0  FUN_0100c2d0  size=65  [run]
void __thiscall FUN_0100c2d0(int param_1,int param_2,int param_3)

{
  short sVar1;
  
  if ((param_2 < *(int *)(param_1 + 0x8c)) &&
     (sVar1 = *(short *)(param_3 + 0x36 + param_2 * 2), sVar1 != 0)) {
    *(short *)(param_3 + 0x36 + param_2 * 2) = sVar1 + -1;
    FUN_01019c80(*(undefined4 *)(param_1 + 0x78 + param_2 * 4),1);
    return;
  }
  FUN_0100c220(param_3);
  return;
}

// 0100C320  FUN_0100c320  size=86  [run]
void __thiscall FUN_0100c320(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 local_260 [592];
  
  uVar1 = FUN_0100bfd0(local_260);
  *(int *)(*(int *)(param_1 + 0x18) + 0x30) = param_2;
  if (param_2 == 0) {
    FUN_0100c0e0(uVar1);
  }
  FUN_0100bff0(uVar1);
  return;
}

// 0100C380  FUN_0100c380  size=851  [run]
void __fastcall FUN_0100c380(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  LPVOID pvVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  byte *pbVar10;
  int local_c;
  int *local_8;
  
  local_8 = (int *)0x1;
  if (*(int *)(param_1 + 0x6c) != 0) {
    local_8 = (int *)*(int *)(param_1 + 0x6c);
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x280);
  if (*(char *)(param_1 + 0x5c) == '\0') {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar9 = *(int *)(param_1 + 0x28);
  iVar3 = iVar9 + (int)local_8;
  iVar7 = *(int *)(param_1 + 0x280) + iVar3;
  *(int *)(param_1 + 0x2c) = iVar3;
  *(int *)(param_1 + 0x30) = iVar7;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x24) + iVar7;
  if (iVar9 < iVar3) {
    do {
      FUN_0100df00(0x80);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x2c));
  }
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x30);
  if (0 < iVar3) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 100)) {
      do {
        *(undefined1 *)(param_1 + 0x11c + iVar3) = 0xff;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 100));
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x6c)) {
      iVar9 = 0;
      do {
        iVar7 = 0;
        if (0 < *(int *)(*(int *)(param_1 + 0x68) + 4 + iVar9)) {
          do {
            *(char *)(*(int *)(*(int *)(*(int *)(param_1 + 0x68) + iVar9) + iVar7 * 4) + 0x11c +
                     param_1) = *(char *)(param_1 + 0x28) + (char)iVar3;
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(*(int *)(param_1 + 0x68) + 4 + iVar9));
        }
        iVar3 = iVar3 + 1;
        iVar9 = iVar9 + 0xc;
      } while (iVar3 < *(int *)(param_1 + 0x6c));
    }
    iVar3 = *(int *)(param_1 + 0x6c);
  }
  if ((iVar3 == 0) && (iVar3 = 0, 0 < *(int *)(param_1 + 100))) {
    do {
      *(undefined1 *)(param_1 + 0x11c + iVar3) = *(undefined1 *)(param_1 + 0x28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 100));
  }
  iVar3 = 0;
  if (0 < (int)local_8) {
    do {
      pcVar4 = (char *)(param_1 + 0x90 + (*(int *)(param_1 + 0x28) + iVar3) * 0x1c);
      *pcVar4 = *(char *)(param_1 + 0x28) + (char)iVar3;
      iVar9 = 0;
      pcVar4 = pcVar4 + 1;
      if (0 < *(int *)(param_1 + 0x6c)) {
        do {
          if (iVar3 != iVar9) {
            *pcVar4 = *(char *)(param_1 + 0x28) + (char)iVar9;
            pcVar4 = pcVar4 + 1;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x6c));
      }
      if (0 < *(int *)(param_1 + 0x24)) {
        iVar9 = 0;
        do {
          *pcVar4 = *(char *)(param_1 + 0x30) + (char)iVar9;
          iVar9 = iVar9 + 1;
          pcVar4 = pcVar4 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x24));
      }
      if ((*(int *)(param_1 + 0x58) == 0) && (iVar9 = 0, 0 < *(int *)(param_1 + 0x24))) {
        do {
          *pcVar4 = (char)iVar9;
          iVar9 = iVar9 + 1;
          pcVar4 = pcVar4 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x24));
      }
      iVar9 = 0;
      if (0 < *(int *)(param_1 + 0x48)) {
        do {
          *pcVar4 = *(char *)(param_1 + 0x2c) + (char)iVar9;
          iVar9 = iVar9 + 1;
          pcVar4 = pcVar4 + 1;
        } while (iVar9 < *(int *)(param_1 + 0x48));
      }
      iVar3 = iVar3 + 1;
      *pcVar4 = -1;
    } while (iVar3 < (int)local_8);
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    local_c = 0;
    pbVar10 = (byte *)(param_1 + 0x3d);
    do {
      *(undefined4 *)(pbVar10 + -5) = *(undefined4 *)(local_c + *(int *)(param_1 + 0x27c));
      pbVar10[-1] = *(byte *)(*(int *)(param_1 + 0x27c) + 4 + local_c);
      bVar2 = *(char *)(param_1 + 0x2c) + (char)iVar3;
      *pbVar10 = bVar2;
      iVar9 = *(int *)(*(int *)(param_1 + 0x27c) + 8 + local_c);
      cVar1 = *(char *)(iVar9 + 0x11c + param_1);
      *(byte *)(iVar9 + 0x11c + param_1) = bVar2;
      pcVar4 = (char *)(param_1 + 0x90 + (*(int *)(param_1 + 0x2c) + iVar3) * 0x1c);
      *pcVar4 = *(char *)(param_1 + 0x2c) + (char)iVar3;
      pcVar8 = (char *)(param_1 + 0x90 + cVar1 * 0x1c);
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar8;
      while (cVar1 != -1) {
        if ((int)*pcVar8 != (uint)*pbVar10) {
          *pcVar4 = *pcVar8;
          pcVar4 = pcVar4 + 1;
        }
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar8;
      }
      iVar3 = iVar3 + 1;
      local_c = local_c + 0xc;
      *pcVar4 = -1;
      pbVar10 = pbVar10 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x48));
  }
  local_c = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x54) = (int)*(char *)(param_1 + 0x11c);
  iVar3 = 1;
  if (1 < *(int *)(param_1 + 100)) {
    do {
      if (*(char *)(param_1 + 0x11c + iVar3) == *(char *)(param_1 + 0x11c)) {
        *(char *)(param_1 + 0x11c) = (char)local_c;
        local_c = local_c + 1;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 100));
  }
  if ((*(char *)(param_1 + 0x74) != '\0') &&
     (iVar3 = *(int *)(param_1 + 0x28), iVar3 < *(int *)(param_1 + 0x8c))) {
    local_8 = (int *)(param_1 + 0x78 + iVar3 * 4);
    do {
      iVar9 = *local_8;
      if (iVar9 != 0) {
        FUN_01019c30();
        pvVar5 = TlsGetValue(DAT_01f8fc4c);
        (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 8))(iVar9,4);
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x8c));
  }
  iVar3 = 0;
  *(int *)(param_1 + 0x8c) = local_c;
  if (0 < local_c) {
    local_8 = (int *)(param_1 + 0x78);
    iVar9 = 0x36;
    do {
      *(undefined2 *)(iVar9 + *(int *)(param_1 + 0x18)) = 0;
      if (*(int *)(param_1 + 0x28) <= iVar3) {
        pvVar5 = TlsGetValue(DAT_01f8fc4c);
        iVar7 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(4);
        if (iVar7 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_01019c00(0,1000);
        }
        *local_8 = uVar6;
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 1;
      iVar9 = iVar9 + 2;
    } while (iVar3 < *(int *)(param_1 + 0x8c));
  }
  *(undefined1 *)(param_1 + 0x74) = 1;
  return;
}

// 0100C6F0  FUN_0100c6f0  size=435  [run]
void __thiscall FUN_0100c6f0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPVOID pvVar5;
  undefined1 local_280 [596];
  byte *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = param_1;
  local_20 = FUN_0100bfd0(local_280);
  FUN_0100df00(param_3);
  local_28 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    local_2c = (byte *)(param_1 + 0x3d);
    do {
      piVar1 = (int *)(local_20 + 0x40 + (uint)*local_2c * 0x14);
      local_14 = param_3;
      if (piVar1[1] < param_3) {
        iVar2 = piVar1[1] * 2;
        local_14 = param_3;
        if (param_3 <= iVar2) {
          local_14 = iVar2;
        }
        pvVar5 = TlsGetValue(DAT_01f8fc4c);
        local_1c = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(local_14 << 7);
        if ((local_1c != 0) && (iVar2 = *piVar1, iVar2 != 0)) {
          if (piVar1[4] != 0) {
            iVar3 = piVar1[3];
            iVar4 = piVar1[2];
            if (iVar4 < iVar3) {
              FUN_01015e80(local_1c,iVar4 * 0x80 + iVar2,piVar1[4] << 7);
            }
            else {
              local_24 = (piVar1[1] - iVar4) * 0x80;
              FUN_01015e80(local_1c,iVar4 * 0x80 + iVar2,local_24);
              FUN_01015e80(local_24 + local_1c,*piVar1,iVar3 << 7);
            }
          }
          piVar1[2] = 0;
          piVar1[3] = piVar1[4];
        }
        iVar2 = piVar1[1];
        if (iVar2 != 0) {
          local_24 = *piVar1;
          pvVar5 = TlsGetValue(DAT_01f8fc4c);
          (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 8))(local_24,iVar2 << 7);
        }
        *piVar1 = local_1c;
        piVar1[1] = local_14;
      }
      local_28 = local_28 + 1;
      local_2c = local_2c + 8;
      param_1 = local_18;
    } while (local_28 < *(int *)(local_18 + 0x48));
  }
  local_18 = *(int *)(param_1 + 0x28);
  if (local_18 < *(int *)(param_1 + 0x2c)) {
    local_14 = local_20 + 0x40 + local_18 * 0x14;
    do {
      FUN_0100df00(param_3);
      local_14 = local_14 + 0x14;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x2c));
  }
  FUN_0100bff0(local_20);
  return;
}

// 0100C8B0  FUN_0100c8b0  size=143  [run]
void __thiscall FUN_0100c8b0(int param_1,int param_2,char param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x280);
  if ((0 < iVar1) && (iVar3 = 0, 0 < iVar1)) {
    piVar2 = *(int **)(param_1 + 0x27c);
    do {
      if (((*piVar2 == param_2) && ((char)piVar2[1] == param_3)) && (piVar2[2] == param_4)) {
        return;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar3 < iVar1);
  }
  if (*(uint *)(param_1 + 0x280) == (*(uint *)(param_1 + 0x284) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x27c),0xc);
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x27c) + *(int *)(param_1 + 0x280) * 0xc);
  *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + 1;
  *piVar2 = param_2;
  *(char *)(piVar2 + 1) = param_3;
  piVar2[2] = param_4;
  FUN_0100c380();
  return;
}

// 0100C940  FUN_0100c940  size=190  [run]
void FUN_0100c940(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = FUN_0100c1d0(param_2);
  piVar1 = (int *)(param_1 + 0x40 + iVar2 * 0x14);
  iVar4 = piVar1[1];
  if (param_3 == 0) {
    if (iVar4 <= piVar1[4]) {
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 * 2;
      }
      FUN_0100df00(iVar4);
    }
    if (piVar1[2] == 0) {
      piVar1[2] = piVar1[1];
    }
    piVar1[2] = piVar1[2] + -1;
    puVar3 = (undefined4 *)(piVar1[2] * 0x80 + *piVar1);
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    piVar1[4] = piVar1[4] + 1;
  }
  else {
    if (iVar4 <= piVar1[4]) {
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 * 2;
      }
      FUN_0100df00(iVar4);
    }
    if (piVar1[3] == piVar1[1]) {
      piVar1[3] = 0;
    }
    puVar3 = (undefined4 *)(piVar1[3] * 0x80 + *piVar1);
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    piVar1[3] = piVar1[3] + 1;
    piVar1[4] = piVar1[4] + 1;
  }
  FUN_0100c2d0(iVar2,param_1);
  return;
}

// 0100CA00  FUN_0100ca00  size=81  [run]
void FUN_0100ca00(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_260 [592];
  
  uVar1 = FUN_0100bfd0(local_260);
  FUN_0100c940(uVar1,param_1,param_2);
  FUN_0100bff0(uVar1);
  return;
}

// 0100CA60  FUN_0100ca60  size=77  [run]
void FUN_0100ca60(int param_1,undefined4 param_2)

{
  undefined1 local_90 [128];
  
  FUN_01015e80(local_90,param_1,*(undefined2 *)(param_1 + 4));
  FUN_0100ca00(local_90,param_2);
  return;
}

// 0100CC70  FUN_0100cc70  size=280  [run]
void __thiscall FUN_0100cc70(int param_1,int param_2,int param_3)

{
  short *psVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  int iVar5;
  int iVar6;
  undefined1 local_300 [592];
  int local_b0 [4];
  undefined1 local_a0 [140];
  undefined4 local_14;
  
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar2 = "TtfinishJob";
    uVar3 = rdtsc();
    local_14 = (undefined4)uVar3;
    puVar2[1] = local_14;
    *(undefined4 **)((int)pvVar4 + 4) = puVar2 + 3;
  }
  iVar5 = FUN_0100bfd0(local_300);
  iVar6 = (**(code **)(param_1 + 0x20))(param_1,iVar5,param_2,local_b0);
  if (iVar6 == 0) {
    local_14 = FUN_0100c1d0(local_a0);
    if (local_b0[0] == 0) {
      FUN_0100e1b0(local_a0);
    }
    else {
      FUN_0100e150(local_a0);
    }
    FUN_0100c2d0(local_14,iVar5);
  }
  if (param_3 == 0) {
    psVar1 = (short *)(iVar5 + (uint)*(byte *)(param_2 + 1) * 2);
    *psVar1 = *psVar1 + -1;
  }
  FUN_0100bff0(iVar5);
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  puVar2 = *(undefined4 **)((int)pvVar4 + 4);
  if (puVar2 < *(undefined4 **)((int)pvVar4 + 0xc)) {
    *puVar2 = &DAT_0164b09c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)((int)pvVar4 + 4) = puVar2 + 3;
  }
  return;
}

// 0100CD90  FUN_0100cd90  size=441  [run]
int __thiscall FUN_0100cd90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_300 [592];
  int local_b0 [4];
  undefined4 local_a0 [32];
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  
  local_1c = param_1;
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar6 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar6 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar6 = "TtGetNextJob";
    uVar2 = rdtsc();
    local_14 = (int *)uVar2;
    puVar6[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar6 + 3;
  }
  do {
    iVar4 = FUN_0100bfd0(local_300);
    local_18 = -1;
    local_20 = iVar4;
    if (param_2 != 0) {
      iVar5 = (**(code **)(param_1 + 0x20))(param_1,iVar4,param_2,local_b0);
      if (iVar5 == 0) {
        local_18 = FUN_0100c1d0(local_a0);
        local_14 = (int *)(iVar4 + 0x40 + local_18 * 0x14);
        iVar4 = local_14[1];
        if (local_b0[0] == 0) {
          if (iVar4 <= local_14[4]) {
            if (iVar4 == 0) {
              iVar4 = 8;
            }
            else {
              iVar4 = iVar4 * 2;
            }
            FUN_0100df00(iVar4);
          }
          if (local_14[2] == 0) {
            local_14[2] = local_14[1];
          }
          local_14[2] = local_14[2] + -1;
          puVar6 = local_a0;
          puVar7 = (undefined4 *)(local_14[2] * 0x80 + *local_14);
          for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          local_14[4] = local_14[4] + 1;
          iVar4 = local_20;
          param_1 = local_1c;
        }
        else {
          if (iVar4 <= local_14[4]) {
            if (iVar4 == 0) {
              iVar4 = 8;
            }
            else {
              iVar4 = iVar4 * 2;
            }
            FUN_0100df00(iVar4);
          }
          if (local_14[3] == local_14[1]) {
            local_14[3] = 0;
          }
          puVar6 = local_a0;
          puVar7 = (undefined4 *)(local_14[3] * 0x80 + *local_14);
          for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          local_14[3] = local_14[3] + 1;
          local_14[4] = local_14[4] + 1;
          iVar4 = local_20;
          param_1 = local_1c;
        }
      }
      psVar1 = (short *)(iVar4 + (uint)*(byte *)(param_2 + 1) * 2);
      *psVar1 = *psVar1 + -1;
      param_2 = 0;
    }
    iVar4 = FUN_0100e400(local_18,iVar4,param_4,param_3);
  } while (iVar4 == -1);
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar6 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar6 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar6 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar6[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar6 + 3;
  }
  return iVar4;
}

// 0100CF50  FUN_0100cf50  size=390  [run]
int FUN_0100cf50(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  short *psVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 local_280 [604];
  int local_24;
  int local_1c;
  int *local_18;
  char local_11;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar5 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar5 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar5 = "TtGetNextJob";
    uVar2 = rdtsc();
    local_18 = (int *)uVar2;
    puVar5[1] = local_18;
    *(undefined4 **)((int)pvVar3 + 4) = puVar5 + 3;
  }
  local_11 = '\x01';
  do {
    iVar4 = FUN_0100bfd0(local_280);
    iVar7 = -1;
    local_24 = iVar4;
    if (local_11 != '\0') {
      psVar1 = (short *)(iVar4 + param_1 * 2);
      *psVar1 = *psVar1 + -1;
      local_1c = FUN_0100c1d0(param_3);
      iVar7 = *(int *)(iVar4 + 0x44 + local_1c * 0x14);
      local_18 = (int *)(iVar4 + 0x40 + local_1c * 0x14);
      if (param_2 == 0) {
        if (iVar7 <= local_18[4]) {
          if (iVar7 == 0) {
            iVar7 = 8;
          }
          else {
            iVar7 = iVar7 * 2;
          }
          FUN_0100df00(iVar7);
        }
        if (local_18[2] == 0) {
          local_18[2] = local_18[1];
        }
        local_18[2] = local_18[2] + -1;
        puVar5 = param_3;
        puVar6 = (undefined4 *)(local_18[2] * 0x80 + *local_18);
        for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        local_18[4] = local_18[4] + 1;
      }
      else {
        if (iVar7 <= local_18[4]) {
          if (iVar7 == 0) {
            iVar7 = 8;
          }
          else {
            iVar7 = iVar7 * 2;
          }
          FUN_0100df00(iVar7);
        }
        if (local_18[3] == local_18[1]) {
          local_18[3] = 0;
        }
        puVar5 = param_3;
        puVar6 = (undefined4 *)(local_18[3] * 0x80 + *local_18);
        for (iVar7 = 0x20; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        local_18[3] = local_18[3] + 1;
        local_18[4] = local_18[4] + 1;
      }
      local_11 = '\0';
      iVar7 = local_1c;
    }
    iVar7 = FUN_0100e400(iVar7,local_24,param_4,param_3);
  } while (iVar7 == -1);
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar5 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar5 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar5 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar5[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar5 + 3;
  }
  return iVar7;
}

// 0100D0E0  FUN_0100d0e0  size=22  [run]
void FUN_0100d0e0(undefined4 param_1,undefined4 param_2)

{
  FUN_0100cd90(0,param_1,param_2);
  return;
}

// 0100D100  FUN_0100d100  size=415  [run]
void FUN_0100d100(char param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  LPVOID pvVar4;
  char *pcVar5;
  byte local_a0;
  byte local_9f;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = FUN_0100d0e0(&local_a0,0);
  while (iVar3 == 0) {
    switch(local_9f) {
    case 0:
    case 1:
    case 0x11:
      pcVar5 = "TtPhysics";
      break;
    case 2:
      pcVar5 = "TtCollision Query";
      break;
    case 3:
      pcVar5 = "TtRayCast Query";
      break;
    case 4:
      pcVar5 = "TtAnimation Sample and Combine";
      break;
    case 5:
      pcVar5 = "TtAnimation Sample and Blend";
      break;
    case 6:
      pcVar5 = "TtAnimation Mapping";
      break;
    case 7:
      pcVar5 = "TtBehavior";
      break;
    case 8:
      pcVar5 = "TtCloth";
      break;
    case 9:
      pcVar5 = "TtPathfinding Jobs";
      break;
    case 10:
      pcVar5 = "TtAI Dynamic Jobs";
      break;
    case 0xb:
      pcVar5 = "TtLocalSteering Jobs";
      break;
    case 0xc:
      pcVar5 = "TtAI Generation";
      break;
    case 0xd:
      pcVar5 = "TtDestruction";
      break;
    default:
      pcVar5 = "TtOther";
      break;
    case 0xf:
      pcVar5 = "TtCharacter Proxy";
      break;
    case 0x10:
      pcVar5 = "TtVehicle";
      break;
    case 0x14:
      pcVar5 = "TtUserJob";
    }
    pvVar4 = TlsGetValue(DAT_01f8fc54);
    iVar3 = local_1c;
    if ((param_1 != '\0') &&
       (puVar1 = *(undefined4 **)((int)pvVar4 + 4), puVar1 < *(undefined4 **)((int)pvVar4 + 0xc))) {
      *puVar1 = pcVar5;
      uVar2 = rdtsc();
      local_14 = (undefined4)uVar2;
      puVar1[1] = local_14;
      *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
    }
    if (*(int *)(local_1c + 0x288) != 0) {
      (**(code **)(**(int **)(local_1c + 0x288) + 4))(local_9f,local_a0);
    }
    local_20 = (**(code **)(*(int *)(iVar3 + 0x128 + (uint)local_9f * 0x10) + (uint)local_a0 * 4))
                         (iVar3,&local_a0);
    if (*(int *)(iVar3 + 0x288) != 0) {
      (**(code **)(**(int **)(iVar3 + 0x288) + 8))(local_9f);
    }
    iVar3 = local_20;
    if ((param_1 != '\0') &&
       (puVar1 = *(undefined4 **)((int)pvVar4 + 4), puVar1 < *(undefined4 **)((int)pvVar4 + 0xc))) {
      *puVar1 = &DAT_0164b09c;
      uVar2 = rdtsc();
      local_18 = (undefined4)uVar2;
      puVar1[1] = local_18;
      *(undefined4 **)((int)pvVar4 + 4) = puVar1 + 3;
    }
  }
  return;
}

// 0100D300  FUN_0100d300  size=70  [run]
undefined4 * __fastcall FUN_0100d300(undefined4 *param_1)

{
  undefined4 *local_8;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  *param_1 = 1;
  local_8 = param_1;
  FUN_0100efe0(&local_8);
  param_1[3] = local_8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

// 0100D350  FUN_0100d350  size=319  [run]
int __thiscall FUN_0100d350(int param_1,int param_2)

{
  uint *puVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 *puVar4;
  byte bVar5;
  int local_8;
  
  FUN_01015ac0(0);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x1c);
  FUN_0100d300();
  *(undefined4 *)(param_1 + 0x27c) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined4 *)(param_1 + 0x284) = 0x80000000;
  *(undefined4 *)(param_1 + 0x288) = 0;
  TlsSetValue(DAT_01f8fc5c,(LPVOID)0x0);
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x250);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    local_8 = 0x19;
    do {
      FUN_0100d6d0();
      local_8 = local_8 + -1;
    } while (-1 < local_8);
  }
  *(int *)(param_1 + 0x18) = iVar3;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x18) + 0x34) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x30) = 0;
  FUN_0100ebe0(param_2);
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x2c) = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    puVar4 = (undefined4 *)(param_1 + 0x128);
    do {
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[2] = &LAB_0100bf90;
      puVar4[3] = &LAB_0100bfa0;
      *(undefined2 *)(*(int *)(param_1 + 0x18) + iVar3 * 2) = 0;
      bVar5 = (byte)iVar3;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 4;
      puVar1 = (uint *)(*(int *)(param_1 + 0x18) + 0x2c);
      *puVar1 = *puVar1 | 1 << (bVar5 & 0x1f);
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  *(code **)(param_1 + 0x1c) = FUN_0100c170;
  *(code **)(param_1 + 0x20) = FUN_0100c1a0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_0100c380();
  return param_1;
}

// 0100D4A0  FUN_0100d4a0  size=248  [run]
void __fastcall FUN_0100d4a0(LPCRITICAL_SECTION param_1)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  LPVOID pvVar2;
  int iVar3;
  LPCRITICAL_SECTION local_8;
  
  p_Var1 = param_1[1].DebugInfo;
  if (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    local_8 = (LPCRITICAL_SECTION)0x19;
    do {
      FUN_0100ded0();
      local_8 = (LPCRITICAL_SECTION)((int)local_8 + -1);
    } while (-1 < (int)local_8);
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(p_Var1,0x250);
  }
  if (((char)param_1[4].SpinCount != '\0') && (iVar3 = 0, 0 < (int)param_1[5].SpinCount)) {
    local_8 = param_1 + 5;
    do {
      p_Var1 = local_8->DebugInfo;
      if (p_Var1 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        FUN_01019c30();
        pvVar2 = TlsGetValue(DAT_01f8fc4c);
        (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(p_Var1,4);
      }
      local_8 = (LPCRITICAL_SECTION)&local_8->LockCount;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[5].SpinCount);
  }
  param_1[0x1a].LockSemaphore = (HANDLE)0x0;
  if (-1 < (int)param_1[0x1a].SpinCount) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (param_1[0x1a].OwningThread,(param_1[0x1a].SpinCount & 0x3fffffff) * 0xc);
  }
  param_1[0x1a].OwningThread = (HANDLE)0x0;
  param_1[0x1a].SpinCount = 0x80000000;
  FUN_0092f020();
  DeleteCriticalSection(param_1);
  return;
}

// 0100D5A0  FUN_0100d5a0  size=18  [run]
int __thiscall FUN_0100d5a0(int param_1,int param_2)

{
  return (int)*(char *)(param_2 + 0x11c + param_1);
}

// 0100D5C0  FUN_0100d5c0  size=15  [run]
DWORD * __fastcall FUN_0100d5c0(DWORD *param_1)

{
  DWORD DVar1;
  
  DVar1 = TlsAlloc();
  *param_1 = DVar1;
  return param_1;
}

// 0100D5F0  FUN_0100d5f0  size=20  [run]
void __thiscall FUN_0100d5f0(DWORD *param_1,LPVOID param_2)

{
  TlsSetValue(*param_1,param_2);
  return;
}

// 0100D630  FUN_0100d630  size=20  [run]
void __thiscall FUN_0100d630(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 0100D6A0  FUN_0100d6a0  size=18  [run]
int __thiscall FUN_0100d6a0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 0100D6D0  FUN_0100d6d0  size=19  [run]
void __fastcall FUN_0100d6d0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 0100D6F0  FUN_0100d6f0  size=52  [run]
void __thiscall FUN_0100d6f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1[2] * 0x80 + *param_1);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  param_1[2] = param_1[2] + 1;
  param_1[4] = param_1[4] + -1;
  if (param_1[2] == param_1[1]) {
    param_1[2] = 0;
  }
  return;
}

// 0100D730  FUN_0100d730  size=19  [run]
void __thiscall FUN_0100d730(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 0x10) == 0;
  return;
}

// 0100D790  FUN_0100d790  size=18  [run]
int __thiscall FUN_0100d790(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 0100D7D0  FUN_0100d7d0  size=15  [run]
int __thiscall FUN_0100d7d0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0100D810  FUN_0100d810  size=52  [run]
undefined4 __thiscall FUN_0100d810(int param_1,undefined4 param_2,int param_3)

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

// 0100D850  FUN_0100d850  size=29  [run]
void __thiscall FUN_0100d850(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 0100D8A0  FUN_0100d8a0  size=24  [run]
void __thiscall
FUN_0100d8a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0100D8C0  FUN_0100d8c0  size=50  [run]
undefined4 __thiscall FUN_0100d8c0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 0100D900  FUN_0100d900  size=33  [run]
void FUN_0100d900(undefined4 *param_1,int param_2,int param_3)

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

// 0100D930  FUN_0100d930  size=33  [run]
void FUN_0100d930(undefined4 *param_1,int param_2,int param_3)

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

// 0100D960  FUN_0100d960  size=55  [run]
void FUN_0100d960(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  
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

// 0100D9A0  FUN_0100d9a0  size=31  [run]
void FUN_0100d9a0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 0100D9C0  FUN_0100d9c0  size=39  [run]
void FUN_0100d9c0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 0100DA10  FUN_0100da10  size=31  [run]
void FUN_0100da10(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 0100DA30  FUN_0100da30  size=42  [run]
void FUN_0100da30(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x250);
  }
  return;
}

// 0100DA60  FUN_0100da60  size=53  [run]
int __thiscall FUN_0100da60(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01019c30();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 0100DAF0  FUN_0100daf0  size=54  [run]
int __thiscall FUN_0100daf0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 0100DB30  FUN_0100db30  size=34  [run]
void FUN_0100db30(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1 << 7);
  return;
}

// 0100DB60  FUN_0100db60  size=38  [run]
void FUN_0100db60(undefined4 param_1,int param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,param_2 << 7);
  return;
}

// 0100DBA0  FUN_0100dba0  size=141  [run]
undefined4 * __thiscall FUN_0100dba0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int local_8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  iVar3 = param_2[1];
  if (iVar3 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    local_8 = iVar3 * 4;
    puVar1 = (undefined4 *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_8);
    iVar2 = (int)((local_8 >> 0x1f & 3U) + local_8) >> 2;
    if (iVar2 != 0) goto LAB_0100dc01;
  }
  iVar2 = -0x80000000;
LAB_0100dc01:
  param_1[2] = iVar2;
  *param_1 = puVar1;
  param_1[1] = iVar3;
  if (0 < iVar3) {
    iVar2 = *param_2 - (int)puVar1;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}

// 0100DC30  FUN_0100dc30  size=128  [run]
int * __thiscall FUN_0100dc30(int *param_1,int *param_2,int *param_3)

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

// 0100DCC0  FUN_0100dcc0  size=49  [run]
int __fastcall FUN_0100dcc0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 0100DD30  FUN_0100dd30  size=64  [run]
void __thiscall FUN_0100dd30(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0100DD70  FUN_0100dd70  size=194  [run]
void FUN_0100dd70(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_c = (int)param_2;
  if (0 < (int)param_2) {
    param_2 = param_3;
    piVar3 = (int *)(param_1 + 4);
    do {
      if (piVar3 != (int *)&DAT_00000004) {
        piVar3[-1] = 0;
        *piVar3 = 0;
        piVar3[1] = -0x80000000;
        iVar4 = *(int *)(((int)param_3 - param_1) + (int)piVar3);
        if (iVar4 == 0) {
          puVar1 = (undefined4 *)0x0;
LAB_0100ddfa:
          iVar2 = -0x80000000;
        }
        else {
          local_8 = iVar4 * 4;
          puVar1 = (undefined4 *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_8);
          iVar2 = (int)((local_8 >> 0x1f & 3U) + local_8) >> 2;
          if (iVar2 == 0) goto LAB_0100ddfa;
        }
        piVar3[1] = iVar2;
        piVar3[-1] = (int)puVar1;
        *piVar3 = iVar4;
        if (0 < iVar4) {
          iVar2 = *param_2 - (int)puVar1;
          do {
            *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
            puVar1 = puVar1 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      param_2 = param_2 + 3;
      piVar3 = piVar3 + 3;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

// 0100DE40  FUN_0100de40  size=134  [run]
int * __thiscall FUN_0100de40(int *param_1,int *param_2)

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

// 0100DED0  FUN_0100ded0  size=41  [run]
void __fastcall FUN_0100ded0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    uVar2 = *param_1;
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(uVar2,iVar1 << 7);
  }
  return;
}

// 0100DF00  FUN_0100df00  size=228  [run]
void __thiscall FUN_0100df00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LPVOID pvVar4;
  int iVar5;
  int iVar6;
  
  if (param_1[1] < param_2) {
    iVar5 = param_1[1] * 2;
    if (param_2 <= iVar5) {
      param_2 = iVar5;
    }
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(param_2 << 7);
    if ((iVar5 != 0) && (iVar1 = *param_1, iVar1 != 0)) {
      if (param_1[4] != 0) {
        iVar2 = param_1[3];
        iVar3 = param_1[2];
        if (iVar3 < iVar2) {
          FUN_01015e80(iVar5,iVar3 * 0x80 + iVar1,param_1[4] << 7);
        }
        else {
          iVar6 = (param_1[1] - iVar3) * 0x80;
          FUN_01015e80(iVar5,iVar3 * 0x80 + iVar1,iVar6);
          FUN_01015e80(iVar6 + iVar5,*param_1,iVar2 << 7);
        }
      }
      param_1[2] = 0;
      param_1[3] = param_1[4];
    }
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar2 = *param_1;
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 8))(iVar2,iVar1 << 7);
    }
    *param_1 = iVar5;
    param_1[1] = param_2;
  }
  return;
}

// 0100DFF0  FUN_0100dff0  size=64  [run]
void __fastcall FUN_0100dff0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0100E050  FUN_0100e050  size=177  [run]
void FUN_0100e050(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int local_8;
  
  if (0 < param_3) {
    puVar5 = (uint *)(param_2 + 4);
    puVar4 = (uint *)(param_1 + 8);
    local_8 = param_3;
    do {
      uVar1 = *puVar4;
      if ((int)(uVar1 & 0x3fffffff) < (int)*puVar5) {
        if (-1 < (int)uVar1) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar4[-2],uVar1 * 4);
        }
        param_3 = *puVar5 * 4;
        uVar1 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_3);
        puVar4[-2] = uVar1;
        *puVar4 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
      }
      uVar1 = *puVar5;
      puVar2 = (undefined4 *)puVar4[-2];
      puVar4[-1] = uVar1;
      if (0 < (int)uVar1) {
        iVar3 = puVar5[-1] - (int)puVar2;
        do {
          *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
          puVar2 = puVar2 + 1;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      puVar5 = puVar5 + 3;
      puVar4 = puVar4 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

// 0100E110  FUN_0100e110  size=12  [run]
undefined4 __fastcall FUN_0100e110(undefined4 param_1)

{
  FUN_0100d6d0();
  return param_1;
}

// 0100E150  FUN_0100e150  size=83  [run]
void __thiscall FUN_0100e150(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 <= param_1[4]) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 * 2;
    }
    FUN_0100df00(iVar2);
  }
  if (param_1[3] == param_1[1]) {
    param_1[3] = 0;
  }
  puVar1 = (undefined4 *)(param_1[3] * 0x80 + *param_1);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  param_1[3] = param_1[3] + 1;
  param_1[4] = param_1[4] + 1;
  return;
}

// 0100E1B0  FUN_0100e1b0  size=75  [run]
void __thiscall FUN_0100e1b0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 <= param_1[4]) {
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar2 * 2;
    }
    FUN_0100df00(iVar2);
  }
  if (param_1[2] == 0) {
    param_1[2] = param_1[1];
  }
  param_1[2] = param_1[2] + -1;
  puVar1 = (undefined4 *)(param_1[2] * 0x80 + *param_1);
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  param_1[4] = param_1[4] + 1;
  return;
}

// 0100E200  FUN_0100e200  size=64  [run]
void __fastcall FUN_0100e200(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0100E270  FUN_0100e270  size=79  [run]
int __thiscall FUN_0100e270(int param_1,byte param_2)

{
  LPVOID pvVar1;
  int iVar2;
  
  iVar2 = 0x19;
  do {
    FUN_0100ded0();
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x250);
  }
  return param_1;
}

// 0100E400  FUN_0100e400  size=856  [run]
undefined4 __thiscall
FUN_0100e400(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  short *psVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 local_a0;
  int local_20;
  undefined4 *local_1c;
  int *local_18;
  char local_11;
  
  local_1c = param_1;
  pvVar3 = TlsGetValue(DAT_01f8fc5c);
  if (pvVar3 == (LPVOID)0x0) {
    iVar7 = *(int *)((int)param_1 + 0x54);
  }
  else {
    pvVar3 = TlsGetValue(DAT_01f8fc5c);
    iVar7 = (int)*(char *)((int)pvVar3 + (int)param_1 + 0x11c);
  }
  local_20 = (int)*(char *)((int)param_1 + 0x90 + iVar7 * 0x1c);
  pcVar6 = (char *)((int)param_1 + 0x90 + iVar7 * 0x1c);
  if (-1 < local_20) {
LAB_0100e4aa:
    piVar8 = (int *)(param_3 + 0x40 + local_20 * 0x14);
    pcVar6 = pcVar6 + 1;
    local_18 = piVar8;
    if (piVar8[4] == 0) goto code_r0x0100e4be;
    puVar9 = (undefined4 *)(piVar8[2] * 0x80 + *piVar8);
    puVar10 = &local_a0;
    for (iVar7 = 0x20; param_1 = local_1c, iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar7 = piVar8[2];
    piVar8[2] = iVar7 + 1;
    if (iVar7 + 1 == piVar8[1]) {
      piVar8[2] = 0;
    }
    piVar8[4] = piVar8[4] + -1;
    iVar7 = (**(code **)((int)local_1c + 0x1c))(local_1c,param_3,&local_a0,param_5);
    if (iVar7 == 1) {
      FUN_0100e1b0(&local_a0);
      FUN_0100c2d0(local_20,param_3);
    }
    psVar1 = (short *)(param_3 + (uint)local_a0._1_1_ * 2);
    *psVar1 = *psVar1 + 1;
    iVar7 = local_20;
    goto LAB_0100e470;
  }
LAB_0100e46d:
  iVar7 = -1;
LAB_0100e470:
  if ((param_2 != -1) && (param_2 != iVar7)) {
    FUN_0100c2d0(param_2,param_3);
  }
  if (-1 < iVar7) {
    FUN_0100bff0(param_3);
    return 0;
  }
  iVar7 = *(int *)((int)param_1 + 0x4c);
  local_20 = 0;
  local_1c = (undefined4 *)0x0;
  local_18 = (int *)0x0;
  iVar4 = *(int *)((int)param_1 + 0x50);
  if (iVar7 < iVar4) {
    if (1 < iVar4 - iVar7) {
      iVar4 = ((iVar4 - iVar7) - 2U >> 1) + 1;
      piVar8 = (int *)(param_3 + (iVar7 * 5 + 0x19) * 4);
      iVar7 = iVar7 + iVar4 * 2;
      do {
        local_20 = local_20 + piVar8[-5];
        local_1c = (undefined4 *)((int)local_1c + *piVar8);
        piVar8 = piVar8 + 10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = 0;
    if (iVar7 < *(int *)((int)param_1 + 0x50)) {
      iVar4 = *(int *)(param_3 + (iVar7 * 5 + 0x14) * 4);
    }
    if (iVar4 + local_20 + (int)local_1c != 0) goto LAB_0100e699;
  }
  iVar7 = 0;
  uVar11 = 0;
  if (0 < *(int *)((int)param_1 + 0x24)) {
    do {
      if ((*(short *)(param_3 + iVar7 * 2) < 1) &&
         (*(int *)(param_3 + (*(int *)((int)param_1 + 0x30) + 4 + iVar7) * 0x14) == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
      bVar5 = (byte)iVar7;
      iVar7 = iVar7 + 1;
      uVar11 = uVar11 | iVar4 << (bVar5 & 0x1f);
    } while (iVar7 < *(int *)((int)param_1 + 0x24));
  }
  local_11 = uVar11 == 0;
  if ((*(uint *)(param_3 + 0x2c) & uVar11) == 0) {
    pvVar3 = TlsGetValue(DAT_01f8fc5c);
    if (pvVar3 == (LPVOID)0x0) {
      if (local_11 != '\0') {
        FUN_0100c0e0(param_3);
      }
      FUN_0100bff0(param_3);
      return 2;
    }
    if (*(short *)(param_3 + 0x36 + *(char *)((int)param_1 + 0x11c) * 2) != 0) {
      psVar1 = (short *)(param_3 + 0x36 + *(char *)((int)param_1 + 0x11c) * 2);
      *psVar1 = *psVar1 + -1;
      FUN_01019c80(*(undefined4 *)((int)param_1 + 0x78 + *(char *)((int)param_1 + 0x11c) * 4),1);
    }
  }
  if ((local_11 != '\0') && (*(int *)(param_3 + 0x30) != 1)) {
    FUN_0100c0e0(param_3);
    FUN_0100bff0(param_3);
    return 2;
  }
LAB_0100e699:
  if (param_4 != 1) {
    pvVar3 = TlsGetValue(DAT_01f8fc5c);
    iVar7 = (int)*(char *)((int)pvVar3 + (int)param_1 + 0x11c);
    psVar1 = (short *)(param_3 + 0x36 + iVar7 * 2);
    *psVar1 = *psVar1 + 1;
    FUN_0100bff0(param_3);
    pvVar3 = TlsGetValue(DAT_01f8fc54);
    local_1c = *(undefined4 **)((int)pvVar3 + 4);
    if (local_1c < *(undefined4 **)((int)pvVar3 + 0xc)) {
      *local_1c = "TtNoJobAvailable";
      uVar2 = rdtsc();
      local_18 = (int *)uVar2;
      local_1c[1] = local_18;
      *(undefined4 **)((int)pvVar3 + 4) = local_1c + 3;
    }
    FUN_01019c70(*(undefined4 *)((int)param_1 + 0x78 + iVar7 * 4));
    pvVar3 = TlsGetValue(DAT_01f8fc54);
    puVar9 = *(undefined4 **)((int)pvVar3 + 4);
    if (puVar9 < *(undefined4 **)((int)pvVar3 + 0xc)) {
      *puVar9 = &DAT_0164b09c;
      uVar2 = rdtsc();
      puVar9[1] = (int)uVar2;
      *(undefined4 **)((int)pvVar3 + 4) = puVar9 + 3;
    }
    return 0xffffffff;
  }
  FUN_0100bff0(param_3);
  return 1;
code_r0x0100e4be:
  local_20 = (int)*pcVar6;
  if (local_20 < 0) goto LAB_0100e46d;
  goto LAB_0100e4aa;
}

// 0100E760  FUN_0100e760  size=570  [run]
void __thiscall FUN_0100e760(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  int local_14;
  
  iVar1 = param_3[1];
  iVar7 = param_1[1];
  iVar5 = iVar1;
  if (iVar7 < iVar1) {
    iVar5 = iVar7;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar6 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar6,0xc);
  }
  iVar7 = (iVar7 - iVar1) + -1;
  if (-1 < iVar7) {
    piVar9 = (int *)(*param_1 + iVar1 * 0xc + 8 + iVar7 * 0xc);
    do {
      piVar9[-1] = 0;
      if (-1 < *piVar9) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar9[-2],*piVar9 * 4);
      }
      piVar9[-2] = 0;
      *piVar9 = -0x80000000;
      piVar9 = piVar9 + -3;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  if (0 < iVar5) {
    puVar10 = (uint *)(*param_3 + 4);
    puVar8 = (uint *)(*param_1 + 8);
    local_14 = iVar5;
    do {
      uVar3 = *puVar8;
      if ((int)(uVar3 & 0x3fffffff) < (int)*puVar10) {
        if (-1 < (int)uVar3) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar8[-2],uVar3 * 4);
        }
        param_2 = (undefined4 *)(*puVar10 * 4);
        uVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
        puVar8[-2] = uVar3;
        *puVar8 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
      }
      uVar3 = *puVar10;
      param_2 = (undefined4 *)puVar8[-2];
      puVar8[-1] = uVar3;
      uVar2 = puVar10[-1];
      if (0 < (int)uVar3) {
        puVar4 = param_2;
        do {
          *puVar4 = *(undefined4 *)((uVar2 - (int)param_2) + (int)puVar4);
          puVar4 = puVar4 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar10 = puVar10 + 3;
      puVar8 = puVar8 + 3;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  param_3 = (int *)(*param_3 + iVar5 * 0xc);
  iVar7 = *param_1 + iVar5 * 0xc;
  local_14 = iVar1 - iVar5;
  if (local_14 < 1) {
    param_1[1] = iVar1;
    return;
  }
  iVar5 = (int)param_3 - iVar7;
  piVar9 = (int *)(iVar7 + 4);
  do {
    if (piVar9 != (int *)&DAT_00000004) {
      piVar9[-1] = 0;
      *piVar9 = 0;
      piVar9[1] = -0x80000000;
      iVar7 = *(int *)((int)piVar9 + iVar5);
      if (iVar7 == 0) {
        puVar4 = (undefined4 *)0x0;
LAB_0100e948:
        iVar6 = -0x80000000;
      }
      else {
        param_2 = (undefined4 *)(iVar7 * 4);
        puVar4 = (undefined4 *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
        iVar6 = (int)(((int)param_2 >> 0x1f & 3U) + (int)param_2) >> 2;
        if (iVar6 == 0) goto LAB_0100e948;
      }
      piVar9[1] = iVar6;
      piVar9[-1] = (int)puVar4;
      *piVar9 = iVar7;
      if (0 < iVar7) {
        iVar6 = *param_3 - (int)puVar4;
        do {
          *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
          puVar4 = puVar4 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    param_3 = param_3 + 3;
    piVar9 = piVar9 + 3;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      param_1[1] = iVar1;
      return;
    }
  } while( true );
}

// 0100E9A0  FUN_0100e9a0  size=570  [run]
void __thiscall FUN_0100e9a0(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  local_c = param_2[1];
  iVar9 = param_1[1];
  iVar5 = local_c;
  if (iVar9 < local_c) {
    iVar5 = iVar9;
  }
  local_14 = iVar5;
  local_8 = param_1;
  if ((int)(param_1[2] & 0x3fffffffU) < local_c) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= local_c) {
      iVar2 = local_c;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  iVar9 = (iVar9 - local_c) + -1;
  piVar6 = local_8;
  if (-1 < iVar9) {
    piVar7 = (int *)(*local_8 + local_c * 0xc + 8 + iVar9 * 0xc);
    do {
      piVar7[-1] = 0;
      if (-1 < *piVar7) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar7[-2],*piVar7 * 4);
        piVar6 = local_8;
      }
      piVar7[-2] = 0;
      *piVar7 = -0x80000000;
      piVar7 = piVar7 + -3;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  if (0 < iVar5) {
    puVar10 = (uint *)(*param_2 + 4);
    puVar8 = (uint *)(*piVar6 + 8);
    local_18 = iVar5;
    do {
      uVar3 = *puVar8;
      if ((int)(uVar3 & 0x3fffffff) < (int)*puVar10) {
        if (-1 < (int)uVar3) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar8[-2],uVar3 * 4);
        }
        local_10 = (undefined4 *)(*puVar10 * 4);
        uVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_10);
        puVar8[-2] = uVar3;
        *puVar8 = (int)((int)local_10 + ((int)local_10 >> 0x1f & 3U)) >> 2;
      }
      uVar3 = *puVar10;
      local_10 = (undefined4 *)puVar8[-2];
      puVar8[-1] = uVar3;
      uVar1 = puVar10[-1];
      if (0 < (int)uVar3) {
        puVar4 = local_10;
        do {
          *puVar4 = *(undefined4 *)((uVar1 - (int)local_10) + (int)puVar4);
          puVar4 = puVar4 + 1;
          uVar3 = uVar3 - 1;
          iVar5 = local_14;
        } while (uVar3 != 0);
      }
      puVar10 = puVar10 + 3;
      puVar8 = puVar8 + 3;
      local_18 = local_18 + -1;
      piVar6 = local_8;
    } while (local_18 != 0);
  }
  param_2 = (int *)(*param_2 + iVar5 * 0xc);
  iVar9 = *piVar6 + iVar5 * 0xc;
  local_14 = local_c - iVar5;
  if (local_14 < 1) {
    local_8[1] = local_c;
    return;
  }
  local_10 = (undefined4 *)((int)param_2 - iVar9);
  piVar6 = (int *)(iVar9 + 4);
  do {
    if (piVar6 != (int *)&DAT_00000004) {
      piVar6[-1] = 0;
      *piVar6 = 0;
      piVar6[1] = -0x80000000;
      iVar9 = *(int *)((int)piVar6 + (int)local_10);
      if (iVar9 == 0) {
        puVar4 = (undefined4 *)0x0;
LAB_0100eb88:
        iVar5 = -0x80000000;
      }
      else {
        local_18 = iVar9 * 4;
        puVar4 = (undefined4 *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_18);
        iVar5 = (int)((local_18 >> 0x1f & 3U) + local_18) >> 2;
        if (iVar5 == 0) goto LAB_0100eb88;
      }
      piVar6[1] = iVar5;
      piVar6[-1] = (int)puVar4;
      *piVar6 = iVar9;
      if (0 < iVar9) {
        iVar5 = *param_2 - (int)puVar4;
        do {
          *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
          puVar4 = puVar4 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    param_2 = param_2 + 3;
    piVar6 = piVar6 + 3;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      local_8[1] = local_c;
      return;
    }
  } while( true );
}

// 0100EBE0  FUN_0100ebe0  size=596  [run]
undefined4 * __thiscall FUN_0100ebe0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  local_c = param_2[5];
  iVar8 = param_1[5];
  iVar5 = local_c;
  if (iVar8 < local_c) {
    iVar5 = iVar8;
  }
  local_14 = iVar5;
  local_8 = param_1;
  if ((int)(param_1[6] & 0x3fffffff) < local_c) {
    iVar2 = (param_1[6] & 0x3fffffff) * 2;
    if (iVar2 <= local_c) {
      iVar2 = local_c;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 4,iVar2,0xc);
  }
  iVar8 = (iVar8 - local_c) + -1;
  puVar4 = local_8;
  if (-1 < iVar8) {
    piVar7 = (int *)(param_1[4] + local_c * 0xc + 8 + iVar8 * 0xc);
    do {
      piVar7[-1] = 0;
      if (-1 < *piVar7) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar7[-2],*piVar7 * 4);
        puVar4 = local_8;
      }
      piVar7[-2] = 0;
      *piVar7 = -0x80000000;
      piVar7 = piVar7 + -3;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  if (0 < iVar5) {
    puVar9 = (uint *)(param_2[4] + 4);
    puVar6 = (uint *)(puVar4[4] + 8);
    local_18 = iVar5;
    do {
      uVar3 = *puVar6;
      if ((int)(uVar3 & 0x3fffffff) < (int)*puVar9) {
        if (-1 < (int)uVar3) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar6[-2],uVar3 * 4);
        }
        local_10 = (undefined4 *)(*puVar9 * 4);
        uVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_10);
        puVar6[-2] = uVar3;
        *puVar6 = (int)((int)local_10 + ((int)local_10 >> 0x1f & 3U)) >> 2;
      }
      uVar3 = *puVar9;
      local_10 = (undefined4 *)puVar6[-2];
      puVar6[-1] = uVar3;
      uVar1 = puVar9[-1];
      if (0 < (int)uVar3) {
        puVar4 = local_10;
        do {
          *puVar4 = *(undefined4 *)((uVar1 - (int)local_10) + (int)puVar4);
          puVar4 = puVar4 + 1;
          uVar3 = uVar3 - 1;
          iVar5 = local_14;
        } while (uVar3 != 0);
      }
      puVar9 = puVar9 + 3;
      puVar6 = puVar6 + 3;
      local_18 = local_18 + -1;
      puVar4 = local_8;
    } while (local_18 != 0);
  }
  param_2 = (int *)(param_2[4] + iVar5 * 0xc);
  iVar8 = puVar4[4] + iVar5 * 0xc;
  local_14 = local_c - iVar5;
  if (local_14 < 1) {
    puVar4[5] = local_c;
    return local_8;
  }
  local_10 = (undefined4 *)((int)param_2 - iVar8);
  piVar7 = (int *)(iVar8 + 4);
  do {
    if (piVar7 != (int *)&DAT_00000004) {
      piVar7[-1] = 0;
      *piVar7 = 0;
      piVar7[1] = -0x80000000;
      iVar8 = *(int *)((int)piVar7 + (int)local_10);
      if (iVar8 == 0) {
        puVar4 = (undefined4 *)0x0;
LAB_0100eddc:
        iVar5 = -0x80000000;
      }
      else {
        local_18 = iVar8 * 4;
        puVar4 = (undefined4 *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_18);
        iVar5 = (int)((local_18 >> 0x1f & 3U) + local_18) >> 2;
        if (iVar5 == 0) goto LAB_0100eddc;
      }
      piVar7[1] = iVar5;
      piVar7[-1] = (int)puVar4;
      *piVar7 = iVar8;
      if (0 < iVar8) {
        iVar5 = *param_2 - (int)puVar4;
        do {
          *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
          puVar4 = puVar4 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    param_2 = param_2 + 3;
    piVar7 = piVar7 + 3;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      local_8[5] = local_c;
      return local_8;
    }
  } while( true );
}

// 0100EE50  hkMemoryAllocator::~hkMemoryAllocator  size=7  [run]
void __fastcall hkMemoryAllocator::~hkMemoryAllocator(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 0100EE60  hkMemoryAllocator::vf0C  size=20  [run]
void __thiscall hkMemoryAllocator::vf0C(int *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 4))(*param_2);
  return;
}

// 0100EE80  hkMemoryAllocator::vf10  size=11  [run]
void __fastcall hkMemoryAllocator::vf10(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0100ee89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}

// 0100EE90  hkMemoryAllocator::vf18  size=48  [run]
void __thiscall hkMemoryAllocator::vf18(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      uVar1 = (**(code **)(*param_1 + 4))(param_4);
      *(undefined4 *)(param_2 + iVar2 * 4) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}

// 0100EEC0  hkMemoryAllocator::vf1C  size=52  [run]
void __thiscall hkMemoryAllocator::vf1C(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = *(int *)(param_2 + iVar2 * 4);
      if (iVar1 != 0) {
        (**(code **)(*param_1 + 8))(iVar1,param_4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}

// 0100EF10  hkMemoryAllocator::vf14  size=78  [run]
int __thiscall hkMemoryAllocator::vf14(int *param_1,undefined4 param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xc))(param_4);
  if (iVar1 != 0) {
    iVar2 = *param_4;
    if (param_3 < *param_4) {
      iVar2 = param_3;
    }
    FUN_010199f0(iVar1,param_2,iVar2);
  }
  (**(code **)(*param_1 + 0x10))(param_2,param_3);
  return iVar1;
}

// 0100EF60  FUN_0100ef60  size=28  [run]
void __thiscall FUN_0100ef60(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = (*param_1 != '\0') == (bool)param_3;
  return;
}

// 0100EFA0  FUN_0100efa0  size=24  [run]
undefined4 FUN_0100efa0(undefined4 param_1)

{
  FUN_01005d60(param_1);
  FUN_01006bf0();
  return 0;
}

// 0100EFC0  FUN_0100efc0  size=16  [run]
void FUN_0100efc0(undefined1 *param_1)

{
  *param_1 = DAT_01f8fc64;
  return;
}

// 0100EFE0  FUN_0100efe0  size=159  [run]
void FUN_0100efe0(DWORD *param_1)

{
  DWORD *pDVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  undefined1 local_c28 [4];
  int aiStack_c24 [767];
  _SYSTEM_INFO local_28;
  
  GetSystemInfo(&local_28);
  pDVar1 = param_1;
  if (0xb < (int)local_28.dwNumberOfProcessors) {
    local_28.dwNumberOfProcessors = 0xc;
  }
  *param_1 = local_28.dwNumberOfProcessors;
  hModule = LoadLibraryA("kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"GetLogicalProcessorInformation");
    if (pFVar2 != (FARPROC)0x0) {
      param_1 = (DWORD *)0x0;
      (*pFVar2)(0,&param_1);
      if (param_1 < (DWORD *)0xc01) {
        (*pFVar2)(local_c28,&param_1);
        pDVar3 = (DWORD *)0x0;
        DVar4 = 0;
        if (param_1 != (DWORD *)0x0) {
          do {
            if (*(int *)((int)aiStack_c24 + (int)pDVar3) == 0) {
              DVar4 = DVar4 + 1;
            }
            pDVar3 = pDVar3 + 6;
          } while (pDVar3 < param_1);
        }
        *pDVar1 = DVar4;
      }
    }
    FreeLibrary(hModule);
  }
  return;
}

// 0100F090  FUN_0100f090  size=55  [run]
undefined4 FUN_0100f090(void)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc54);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_01006c30(pvVar1);
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_01005d60(0);
  }
  return 0;
}

// 0100F100  FUN_0100f100  size=257  [run]
void FUN_0100f100(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  uint local_c;
  uint local_8;
  
  piVar5 = &DAT_01f9091c;
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  iVar4 = DAT_01f9091c;
  if (DAT_01f9091c != 0) {
    do {
      if ((**(int **)(iVar4 + 0xc) == 0) && (*(code **)(iVar4 + 4) != (code *)0x0)) {
        iVar2 = (**(code **)(iVar4 + 4))();
        if (iVar2 != 0) {
          **(int **)(iVar4 + 0xc) = iVar2;
          goto LAB_0100f144;
        }
        if (local_c == (local_8 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b8c,&local_10,4);
        }
        *(int *)(local_10 + local_c * 4) = iVar4;
        local_c = local_c + 1;
        iVar4 = *(int *)(iVar4 + 8);
        *(undefined4 *)(*piVar5 + 8) = 0;
        *piVar5 = iVar4;
      }
      else {
LAB_0100f144:
        piVar5 = (int *)(iVar4 + 8);
        iVar4 = *piVar5;
      }
      uVar3 = local_c;
    } while (iVar4 != 0);
    while (uVar1 = uVar3, uVar3 != 0) {
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        iVar4 = *(int *)(local_10 + uVar1 * 4);
        iVar2 = (**(code **)(iVar4 + 4))();
        uVar3 = local_c;
        if (iVar2 != 0) {
          **(int **)(iVar4 + 0xc) = iVar2;
          *piVar5 = iVar4;
          uVar3 = local_c - 1;
          piVar5 = (int *)(iVar4 + 8);
          local_c = uVar3;
          if (uVar3 != uVar1) {
            *(undefined4 *)(local_10 + uVar1 * 4) = *(undefined4 *)(local_10 + uVar3 * 4);
          }
        }
      }
    }
  }
  local_c = 0;
  if (-1 < (int)local_8) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 * 4);
  }
  return;
}

// 0100F210  hkNativeFileSystem::hkNativeFileSystem  size=196  [run]
undefined4
hkNativeFileSystem::hkNativeFileSystem(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (DAT_01f8fc64 == '\0') {
    FUN_0100efa0(param_1);
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(8);
    puVar2[1] = 0x10008;
    *puVar2 = vftable;
    if (DAT_01f909a4 != (undefined4 *)0x0) {
      FUN_01005e60();
    }
    DAT_01f909a4 = puVar2;
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar3 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x28);
    *(undefined2 *)(iVar3 + 4) = 0x28;
    iVar3 = hkDefaultError::hkDefaultError(param_2,param_3);
    if (DAT_01f8fc58 != 0) {
      FUN_01005e60();
    }
    DAT_01f8fc58 = iVar3;
    FUN_0100f100();
    (**(code **)(*DAT_01f8fc60 + 0xc))();
    FUN_0092fc40();
    DAT_01f8fc64 = '\x01';
  }
  return 0;
}

// 0100F2E0  FUN_0100f2e0  size=232  [run]
void FUN_0100f2e0(void)

{
  int iVar1;
  uint uVar2;
  undefined1 *local_210;
  uint local_20c;
  uint local_208;
  undefined1 local_204 [512];
  
  local_210 = local_204;
  local_20c = 0;
  local_208 = 0x80000080;
  for (iVar1 = DAT_01f9091c; uVar2 = local_20c, iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (local_20c == (local_208 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,&local_210,4);
    }
    *(int *)(local_210 + local_20c * 4) = iVar1;
    local_20c = local_20c + 1;
  }
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    if (**(int **)(*(int *)(local_210 + uVar2 * 4) + 0xc) != 0) {
      FUN_01005e60();
      **(undefined4 **)(*(int *)(local_210 + uVar2 * 4) + 0xc) = 0;
    }
  }
  local_20c = 0;
  if (-1 < (int)local_208) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_210,local_208 * 4);
  }
  return;
}

// 0100F3D0  FUN_0100f3d0  size=107  [run]
undefined4 FUN_0100f3d0(void)

{
  if (DAT_01f8fc64 != '\0') {
    FUN_01005f00(0);
    FUN_0100f2e0();
    if ((DAT_01f909a8 != '\0') && (PTR_FUN_018eaae4 != (undefined *)0x0)) {
      (*(code *)PTR_FUN_018eaae4)();
      DAT_01f909a8 = '\0';
    }
    if (DAT_01f8fc58 != 0) {
      FUN_01005e60();
    }
    DAT_01f8fc58 = 0;
    if (DAT_01f909a4 != 0) {
      FUN_01005e60();
    }
    DAT_01f909a4 = 0;
    FUN_0100f090();
    DAT_01f8fc64 = '\0';
  }
  return 0;
}

// 0100F440  FUN_0100f440  size=39  [run]
void FUN_0100f440(undefined4 param_1)

{
  if (DAT_01f8fc58 != 0) {
    FUN_01005e60();
    DAT_01f8fc58 = param_1;
    return;
  }
  DAT_01f8fc58 = param_1;
  return;
}

// 0100F470  FUN_0100f470  size=39  [run]
void FUN_0100f470(undefined4 param_1)

{
  if (DAT_01f909a4 != 0) {
    FUN_01005e60();
    DAT_01f909a4 = param_1;
    return;
  }
  DAT_01f909a4 = param_1;
  return;
}

// 0100F500  FUN_0100f500  size=15  [run]
int __thiscall FUN_0100f500(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0100F520  FUN_0100f520  size=32  [run]
void __thiscall FUN_0100f520(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0100F560  FUN_0100f560  size=15  [run]
void FUN_0100f560(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}

// 0100F570  FUN_0100f570  size=34  [run]
void FUN_0100f570(int param_1,int param_2,undefined4 *param_3)

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

// 0100F5B0  FUN_0100f5b0  size=26  [run]
void __thiscall FUN_0100f5b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0100F5F0  hkFileSystem::vf14  size=8  [run]
undefined4 hkFileSystem::vf14(void)

{
  return 1;
}

// 0100F620  FUN_0100f620  size=37  [run]
void FUN_0100f620(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0100F650  FUN_0100f650  size=37  [run]
void FUN_0100f650(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0100F6A0  hkNativeFileSystem::vf14  size=24  [run]
void hkNativeFileSystem::vf14(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FUN_018eaa70)(param_1,param_2);
  return;
}

// 0100F6C0  FUN_0100f6c0  size=38  [run]
void FUN_0100f6c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0100F700  FUN_0100f700  size=37  [run]
void FUN_0100f700(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0100F760  hkDummySingleton::vf0C  size=1  [run]
void hkDummySingleton::vf0C(void)

{
  return;
}

// 0100F780  hkDummySingleton::vf00  size=53  [run]
undefined4 * __thiscall hkDummySingleton::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0100F7E0  FUN_0100f7e0  size=28  [run]
void __thiscall FUN_0100f7e0(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 0100F800  FUN_0100f800  size=57  [run]
void __thiscall FUN_0100f800(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0100F840  FUN_0100f840  size=32  [run]
void __thiscall FUN_0100f840(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0100F860  FUN_0100f860  size=61  [run]
void __thiscall FUN_0100f860(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0100F8A0  FUN_0100f8a0  size=38  [run]
void FUN_0100f8a0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0100F8D0  hkFileSystem::vf00  size=53  [run]
undefined4 * __thiscall hkFileSystem::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0100F910  hkNativeFileSystem::vf00  size=53  [run]
undefined4 * __thiscall hkNativeFileSystem::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0100F950  FUN_0100f950  size=58  [run]
void __thiscall FUN_0100f950(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0100F990  FUN_0100f990  size=58  [run]
void __thiscall FUN_0100f990(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0100F9D0  FUN_0100f9d0  size=61  [run]
void __fastcall FUN_0100f9d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0100FA10  FUN_0100fa10  size=61  [run]
void __fastcall FUN_0100fa10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0100FA50  FUN_0100fa50  size=61  [run]
void __fastcall FUN_0100fa50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0100FA90  FUN_0100fa90  size=61  [run]
void __fastcall FUN_0100fa90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0100FAD0  FUN_0100fad0  size=27  [run]
void __thiscall FUN_0100fad0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffff80;
  return;
}

// 0100FAF0  FUN_0100faf0  size=61  [run]
void __fastcall FUN_0100faf0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0100FB30  FUN_0100fb30  size=8  [run]
undefined4 FUN_0100fb30(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0100FB40  FUN_0100fb40  size=8  [run]
undefined4 FUN_0100fb40(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0100FBB0  FUN_0100fbb0  size=18  [run]
bool FUN_0100fbb0(uint param_1)

{
  return (param_1 - 1 & param_1) == 0;
}

// 0100FBD0  FUN_0100fbd0  size=8  [run]
undefined4 FUN_0100fbd0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0100FBE0  FUN_0100fbe0  size=8  [run]
undefined4 FUN_0100fbe0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0100FC10  FUN_0100fc10  size=8  [run]
undefined4 FUN_0100fc10(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0100FC20  FUN_0100fc20  size=8  [run]
undefined4 FUN_0100fc20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0100FCB0  FUN_0100fcb0  size=18  [run]
bool FUN_0100fcb0(uint param_1)

{
  return (param_1 - 1 & param_1) == 0;
}

// 0100FCD0  FUN_0100fcd0  size=8  [run]
undefined4 FUN_0100fcd0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0100FCE0  FUN_0100fce0  size=8  [run]
undefined4 FUN_0100fce0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0100FD10  FUN_0100fd10  size=1  [run]
void FUN_0100fd10(void)

{
  return;
}

// 0100FD20  FUN_0100fd20  size=15  [run]
undefined4 __thiscall FUN_0100fd20(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 8);
}

// 0100FD30  FUN_0100fd30  size=16  [run]
undefined4 __thiscall FUN_0100fd30(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 0100FD40  FUN_0100fd40  size=19  [run]
void __thiscall FUN_0100fd40(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*param_1 + 4 + param_2 * 8) = param_3;
  return;
}

// 0100FD60  FUN_0100fd60  size=21  [run]
void __thiscall FUN_0100fd60(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 0100FD90  FUN_0100fd90  size=31  [run]
void __thiscall FUN_0100fd90(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3 | 0x80000000;
  param_1[2] = param_4 + -1;
  return;
}

// 0100FDB0  FUN_0100fdb0  size=31  [run]
int FUN_0100fdb0(int param_1)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 * 8;
}

// 0100FDD0  FUN_0100fdd0  size=48  [run]
void __thiscall FUN_0100fdd0(undefined4 *param_1,undefined4 *param_2)

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

// 0100FE00  FUN_0100fe00  size=1  [run]
void FUN_0100fe00(void)

{
  return;
}

// 0100FE10  FUN_0100fe10  size=21  [run]
undefined8 __thiscall FUN_0100fe10(int *param_1,int param_2)

{
  return CONCAT44(*(undefined4 *)(*param_1 + 4 + param_2 * 0x10),
                  *(undefined4 *)(*param_1 + param_2 * 0x10));
}

// 0100FE30  FUN_0100fe30  size=22  [run]
undefined8 __thiscall FUN_0100fe30(int *param_1,int param_2)

{
  return CONCAT44(*(undefined4 *)(*param_1 + 0xc + param_2 * 0x10),
                  *(undefined4 *)(*param_1 + 8 + param_2 * 0x10));
}

// 0100FE50  FUN_0100fe50  size=28  [run]
void __thiscall FUN_0100fe50(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 8 + param_2 * 0x10) = param_3;
  *(undefined4 *)(iVar1 + 0xc + param_2 * 0x10) = param_4;
  return;
}

// 0100FE70  FUN_0100fe70  size=21  [run]
void __thiscall FUN_0100fe70(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 0100FEA0  FUN_0100fea0  size=31  [run]
void __thiscall FUN_0100fea0(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3 | 0x80000000;
  param_1[2] = param_4 + -1;
  return;
}

// 0100FEC0  FUN_0100fec0  size=28  [run]
int FUN_0100fec0(int param_1)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 << 4;
}

// 0100FEE0  FUN_0100fee0  size=48  [run]
void __thiscall FUN_0100fee0(undefined4 *param_1,undefined4 *param_2)

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

// 0100FF10  FUN_0100ff10  size=20  [run]
uint FUN_0100ff10(uint param_1,uint param_2)

{
  return (param_1 >> 4) * -0x61c8864f & param_2;
}

// 0100FF30  FUN_0100ff30  size=14  [run]
void FUN_0100ff30(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}

// 0100FF40  FUN_0100ff40  size=14  [run]
bool FUN_0100ff40(int param_1)

{
  return param_1 != -1;
}

// 0100FF50  FUN_0100ff50  size=16  [run]
bool FUN_0100ff50(int param_1,int param_2)

{
  return param_1 == param_2;
}

// 0100FF60  FUN_0100ff60  size=20  [run]
uint FUN_0100ff60(uint param_1,undefined4 param_2,uint param_3)

{
  return (param_1 >> 4) * -0x61c8864f & param_3;
}

// 0100FF80  FUN_0100ff80  size=21  [run]
void FUN_0100ff80(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return;
}

// 0100FFA0  FUN_0100ffa0  size=25  [run]
undefined4 FUN_0100ffa0(uint param_1,uint param_2)

{
  if ((param_1 & param_2) != 0xffffffff) {
    return 1;
  }
  return 0;
}

// 0100FFC0  FUN_0100ffc0  size=30  [run]
undefined4 FUN_0100ffc0(int param_1,int param_2,int param_3,int param_4)

{
  if ((param_1 == param_3) && (param_2 == param_4)) {
    return 1;
  }
  return 0;
}

// 0100FFF0  FUN_0100fff0  size=22  [run]
void __thiscall FUN_0100fff0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = (*(uint *)(param_1 + 4) & 0x80000000) == 0;
  return;
}

// 01010020  FUN_01010020  size=22  [run]
void __thiscall FUN_01010020(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = (*(uint *)(param_1 + 4) & 0x80000000) == 0;
  return;
}

// 01010070  FUN_01010070  size=36  [run]
void __thiscall FUN_01010070(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 8);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 2;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 010100A0  FUN_010100a0  size=120  [run]
void __thiscall FUN_010100a0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_010103a0(param_2,param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar4 = (param_3 >> 4) * -0x61c8864f & param_1[2];
  iVar2 = *(int *)(iVar1 + uVar4 * 8);
  iVar3 = 1;
  do {
    if (iVar2 == -1) {
LAB_01010102:
      param_1[1] = param_1[1] + iVar3;
      *(uint *)(iVar1 + uVar4 * 8) = param_3;
      *(undefined4 *)(*param_1 + 4 + uVar4 * 8) = param_4;
      return;
    }
    if (*(uint *)(iVar1 + uVar4 * 8) == param_3) {
      iVar3 = 0;
      goto LAB_01010102;
    }
    uVar4 = uVar4 + 1 & param_1[2];
    iVar2 = *(int *)(iVar1 + uVar4 * 8);
  } while( true );
}

// 01010120  FUN_01010120  size=62  [run]
uint __thiscall FUN_01010120(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    uVar3 = (param_2 >> 4) * -0x61c8864f & uVar1;
    uVar2 = *(uint *)(*param_1 + uVar3 * 8);
    while (uVar2 != 0xffffffff) {
      if (uVar2 == param_2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1 & uVar1;
      uVar2 = *(uint *)(*param_1 + uVar3 * 8);
    }
  }
  return uVar1 + 1;
}

// 01010160  FUN_01010160  size=72  [run]
undefined4 __thiscall FUN_01010160(int *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    iVar2 = *param_1;
    uVar4 = (param_2 >> 4) * -0x61c8864f & uVar1;
    uVar3 = *(uint *)(iVar2 + uVar4 * 8);
    while (uVar3 != 0xffffffff) {
      if (uVar3 == param_2) {
        return *(undefined4 *)(iVar2 + 4 + uVar4 * 8);
      }
      uVar4 = uVar4 + 1 & uVar1;
      uVar3 = *(uint *)(iVar2 + uVar4 * 8);
    }
  }
  return param_3;
}

// 010101B0  FUN_010101b0  size=48  [run]
undefined4 __thiscall FUN_010101b0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_2);
  if (iVar1 <= param_1[2]) {
    *param_3 = *(undefined4 *)(*param_1 + 4 + iVar1 * 8);
    return 0;
  }
  return 1;
}

// 010101E0  FUN_010101e0  size=161  [run]
void __thiscall FUN_010101e0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 8) = 0xffffffff;
  iVar1 = *param_1;
  uVar5 = param_1[2];
  uVar3 = uVar5 + param_2 & uVar5;
  iVar2 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar2 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar2 = *(int *)(iVar1 + uVar3 * 8);
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_2 + 1 & uVar5;
  iVar1 = *(int *)(iVar1 + uVar3 * 8);
  while (iVar1 != -1) {
    iVar1 = *param_1;
    uVar5 = (*(uint *)(iVar1 + uVar3 * 8) >> 4) * -0x61c8864f & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= param_2)) &&
        ((param_2 <= uVar3 || ((uVar5 <= param_2 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= param_2 || (uVar4 <= uVar5)))) {
      *(undefined4 *)(iVar1 + param_2 * 8) = *(undefined4 *)(iVar1 + uVar3 * 8);
      *(undefined4 *)(*param_1 + 4 + param_2 * 8) = *(undefined4 *)(*param_1 + 4 + uVar3 * 8);
      *(undefined4 *)(*param_1 + uVar3 * 8) = 0xffffffff;
      param_2 = uVar3;
    }
    uVar5 = param_1[2];
    uVar3 = uVar3 + 1 & uVar5;
    iVar1 = *(int *)(*param_1 + uVar3 * 8);
  }
  return;
}

// 01010290  FUN_01010290  size=73  [run]
void __thiscall FUN_01010290(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = param_1[2];
  iVar6 = 0;
  if (-1 < (int)uVar1) {
    iVar2 = *param_1;
    do {
      uVar3 = *(uint *)(iVar2 + iVar6 * 8);
      if (uVar3 != 0xffffffff) {
        uVar5 = (uVar3 >> 4) * -0x61c8864f & uVar1;
        uVar4 = *(uint *)(iVar2 + uVar5 * 8);
        while (uVar4 != uVar3) {
          uVar5 = uVar5 + 1 & uVar1;
          uVar4 = *(uint *)(iVar2 + uVar5 * 8);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar1);
  }
  *param_2 = 1;
  return;
}

// 010102E0  FUN_010102e0  size=36  [run]
void __fastcall FUN_010102e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[2];
  iVar2 = 0;
  if (0 < iVar1 + 1) {
    do {
      *(undefined4 *)(*param_1 + iVar2 * 8) = 0xffffffff;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1 + 1);
  }
  param_1[1] = param_1[1] & 0x80000000;
  return;
}

// 01010310  FUN_01010310  size=69  [run]
void __thiscall FUN_01010310(undefined4 *param_1,int *param_2)

{
  FUN_010102e0();
  if ((param_1[1] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 8))(*param_1,param_1[2] * 8 + 8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 01010360  FUN_01010360  size=53  [run]
void __thiscall FUN_01010360(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  
  param_3 = param_3 >> 3;
  *param_1 = param_2;
  param_1[2] = param_3 - 1;
  iVar1 = 0;
  param_1[1] = -0x80000000;
  if (param_3 != 0) {
    do {
      *(undefined4 *)(*param_1 + iVar1 * 8) = 0xffffffff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_3);
  }
  return;
}

// 010103A0  FUN_010103a0  size=189  [run]
undefined4 __thiscall FUN_010103a0(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 < 9) {
    param_3 = 8;
  }
  uVar1 = param_1[1];
  iVar2 = *param_1;
  iVar5 = param_1[2] + 1;
  iVar4 = (**(code **)(*param_2 + 4))(param_3 * 8);
  if (iVar4 == 0) {
    return 1;
  }
  *param_1 = iVar4;
  iVar4 = 0;
  if (0 < param_3) {
    do {
      *(undefined4 *)(*param_1 + iVar4 * 8) = 0xffffffff;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3);
  }
  param_1[2] = param_3 + -1;
  iVar4 = 0;
  param_1[1] = 0;
  if (0 < iVar5) {
    do {
      iVar3 = *(int *)(iVar2 + iVar4 * 8);
      if (iVar3 != -1) {
        FUN_010100a0(param_2,iVar3,*(undefined4 *)(iVar2 + 4 + iVar4 * 8));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  if ((uVar1 & 0x80000000) == 0) {
    (**(code **)(*param_2 + 8))(iVar2,iVar5 * 8);
  }
  return 0;
}

// 01010490  FUN_01010490  size=45  [run]
void __thiscall FUN_01010490(int *param_1,int param_2)

{
  uint *puVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    puVar1 = (uint *)(param_2 * 0x10 + *param_1);
    do {
      if ((*puVar1 & puVar1[1]) != 0xffffffff) {
        return;
      }
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 4;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 010104C0  FUN_010104c0  size=147  [run]
void __thiscall
FUN_010104c0(int *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_01010870(param_2,param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar5 = (param_3 >> 4) * -0x61c8864f;
  do {
    uVar5 = uVar5 & param_1[2];
    uVar2 = *(uint *)(iVar1 + uVar5 * 0x10);
    uVar3 = *(uint *)(iVar1 + 4 + uVar5 * 0x10);
    if ((uVar2 & uVar3) == 0xffffffff) {
      iVar4 = 1;
LAB_0101052a:
      param_1[1] = param_1[1] + iVar4;
      *(uint *)(iVar1 + uVar5 * 0x10) = param_3;
      *(uint *)(iVar1 + 4 + uVar5 * 0x10) = param_4;
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 8 + uVar5 * 0x10) = param_5;
      *(undefined4 *)(iVar1 + 0xc + uVar5 * 0x10) = param_6;
      return;
    }
    if ((uVar2 == param_3) && (uVar3 == param_4)) {
      iVar4 = 0;
      goto LAB_0101052a;
    }
    uVar5 = uVar5 + 1;
  } while( true );
}

// 01010560  FUN_01010560  size=72  [run]
uint __thiscall FUN_01010560(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    uVar4 = (param_2 >> 4) * -0x61c8864f;
    while( true ) {
      uVar4 = uVar4 & uVar1;
      uVar2 = *(uint *)(*param_1 + uVar4 * 0x10);
      uVar3 = *(uint *)(*param_1 + 4 + uVar4 * 0x10);
      if ((uVar2 & uVar3) == 0xffffffff) break;
      if ((uVar2 == param_2) && (uVar3 == param_3)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
    }
  }
  return uVar1 + 1;
}

// 010105B0  FUN_010105b0  size=92  [run]
undefined8 __thiscall FUN_010105b0(int *param_1,uint param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (0 < param_1[2]) {
    iVar1 = *param_1;
    uVar4 = (param_2 >> 4) * -0x61c8864f;
    while( true ) {
      uVar4 = uVar4 & param_1[2];
      uVar2 = *(uint *)(iVar1 + uVar4 * 0x10);
      uVar3 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
      if ((uVar2 & uVar3) == 0xffffffff) break;
      if ((uVar2 == param_2) && (uVar3 == param_3)) {
        return CONCAT44(*(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10),
                        *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10));
      }
      uVar4 = uVar4 + 1;
    }
  }
  return param_4;
}

// 01010610  FUN_01010610  size=63  [run]
undefined4 __thiscall
FUN_01010610(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_01010560(param_2,param_3);
  if (iVar2 <= param_1[2]) {
    iVar1 = *param_1;
    *param_4 = *(undefined4 *)(iVar1 + 8 + iVar2 * 0x10);
    param_4[1] = *(undefined4 *)(iVar1 + 0xc + iVar2 * 0x10);
    return 0;
  }
  return 1;
}

// 01010650  FUN_01010650  size=222  [run]
void __thiscall FUN_01010650(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *param_1;
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(iVar1 + param_2 * 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 4 + param_2 * 0x10) = 0xffffffff;
  uVar4 = param_1[2];
  uVar3 = param_2;
  do {
    uVar3 = uVar4 + uVar3 & uVar4;
  } while ((*(uint *)(*param_1 + uVar3 * 0x10) & *(uint *)(*param_1 + 4 + uVar3 * 0x10)) !=
           0xffffffff);
  uVar3 = uVar3 + 1 & uVar4;
  uVar4 = param_2 + 1 & uVar4;
  while( true ) {
    iVar1 = *param_1;
    uVar2 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((*(uint *)(iVar1 + uVar4 * 0x10) & uVar2) == 0xffffffff) break;
    uVar5 = (*(uint *)(iVar1 + uVar4 * 0x10) >> 4) * -0x61c8864f & param_1[2];
    if ((((uVar4 < uVar3) || (uVar5 <= param_2)) &&
        ((param_2 <= uVar4 || ((uVar5 <= param_2 && (uVar4 < uVar5)))))) &&
       ((uVar5 <= param_2 || (uVar3 <= uVar5)))) {
      *(undefined4 *)(iVar1 + param_2 * 0x10) = *(undefined4 *)(iVar1 + uVar4 * 0x10);
      *(uint *)(iVar1 + 4 + param_2 * 0x10) = uVar2;
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 8 + param_2 * 0x10) = *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10);
      *(undefined4 *)(iVar1 + 0xc + param_2 * 0x10) = *(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10);
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + uVar4 * 0x10) = 0xffffffff;
      *(undefined4 *)(iVar1 + 4 + uVar4 * 0x10) = 0xffffffff;
      param_2 = uVar4;
    }
    uVar4 = uVar4 + 1 & param_1[2];
  }
  return;
}

// 01010730  FUN_01010730  size=114  [run]
void __thiscall FUN_01010730(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int local_c;
  
  uVar1 = param_1[2];
  if (-1 < (int)uVar1) {
    puVar2 = (uint *)*param_1;
    local_c = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if ((uVar3 & puVar5[1]) != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while ((uVar4 = uVar4 & uVar1, puVar2[uVar4 * 4] != uVar3 ||
               (puVar2[uVar4 * 4 + 1] != puVar5[1]))) {
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 4;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  *param_2 = 1;
  return;
}

// 010107B0  FUN_010107b0  size=48  [run]
void __fastcall FUN_010107b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[2] + 1;
  if (0 < iVar3) {
    iVar2 = 0;
    do {
      iVar1 = *param_1;
      *(undefined4 *)(iVar2 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar2 + 4 + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[1] = param_1[1] & 0x80000000;
  return;
}

// 010107E0  FUN_010107e0  size=66  [run]
void __thiscall FUN_010107e0(undefined4 *param_1,int *param_2)

{
  FUN_010107b0();
  if ((param_1[1] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 8))(*param_1,(param_1[2] + 1) * 0x10);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 01010830  FUN_01010830  size=64  [run]
void __thiscall FUN_01010830(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  param_3 = param_3 >> 4;
  *param_1 = param_2;
  param_1[1] = -0x80000000;
  param_1[2] = param_3 - 1;
  if (param_3 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *param_1;
      *(undefined4 *)(iVar2 + iVar1) = 0xffffffff;
      *(undefined4 *)(iVar2 + 4 + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 0x10;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// 01010870  FUN_01010870  size=216  [run]
undefined4 __thiscall FUN_01010870(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  
  if (param_3 < 9) {
    param_3 = 8;
  }
  uVar1 = param_1[1];
  puVar2 = (uint *)*param_1;
  iVar6 = param_1[2] + 1;
  iVar4 = (**(code **)(*param_2 + 4))(param_3 << 4);
  if (iVar4 != 0) {
    *param_1 = iVar4;
    if (0 < param_3) {
      iVar5 = 0;
      iVar4 = param_3;
      do {
        iVar3 = *param_1;
        *(undefined4 *)(iVar5 + iVar3) = 0xffffffff;
        *(undefined4 *)(iVar5 + 4 + iVar3) = 0xffffffff;
        iVar5 = iVar5 + 0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_1[1] = 0;
    param_1[2] = param_3 + -1;
    puVar7 = puVar2;
    param_3 = iVar6;
    if (0 < iVar6) {
      do {
        if ((*puVar7 & puVar7[1]) != 0xffffffff) {
          FUN_010104c0(param_2,*puVar7,puVar7[1],puVar7[2],puVar7[3]);
        }
        param_3 = param_3 + -1;
        puVar7 = puVar7 + 4;
      } while (param_3 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      (**(code **)(*param_2 + 8))(puVar2,iVar6 * 0x10);
    }
    return 0;
  }
  return 1;
}

// 01010950  FUN_01010950  size=31  [run]
void FUN_01010950(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01010970  FUN_01010970  size=39  [run]
void FUN_01010970(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010109A0  FUN_010109a0  size=31  [run]
void __thiscall FUN_010109a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 010109C0  FUN_010109c0  size=31  [run]
void FUN_010109c0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010109E0  FUN_010109e0  size=39  [run]
void FUN_010109e0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01010A10  FUN_01010a10  size=31  [run]
void FUN_01010a10(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01010A30  FUN_01010a30  size=39  [run]
void FUN_01010a30(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01010A60  FUN_01010a60  size=37  [run]
void __thiscall FUN_01010a60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_01010560(param_3,param_4);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 01010A90  FUN_01010a90  size=31  [run]
void FUN_01010a90(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01010AB0  FUN_01010ab0  size=39  [run]
void FUN_01010ab0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01010AF0  FUN_01010af0  size=33  [run]
void FUN_01010af0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_010104c0(&PTR_vftable_018e9b94,param_1,param_2,param_3,param_4);
  return;
}

// 01010B20  FUN_01010b20  size=28  [run]
undefined4 __thiscall FUN_01010b20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01010360(param_2,param_3);
  return param_1;
}

// 01010B40  FUN_01010b40  size=89  [run]
undefined4 __thiscall
FUN_01010b40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4) * 2) {
    iVar1 = FUN_010103a0(param_2,*(int *)(param_1 + 8) * 2 + 2);
    *param_5 = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_5 = 0;
  }
  uVar2 = FUN_010100a0(param_2,param_3,param_4);
  return uVar2;
}

// 01010BA0  FUN_01010ba0  size=111  [run]
void __thiscall FUN_01010ba0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_010103a0(param_2,param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar2 = (param_3 >> 4) * -0x61c8864f & param_1[2];
  if (*(uint *)(iVar1 + uVar2 * 8) != param_3) {
    while (*(int *)(iVar1 + uVar2 * 8) != -1) {
      uVar2 = uVar2 + 1 & param_1[2];
      if (*(uint *)(iVar1 + uVar2 * 8) == param_3) {
        return;
      }
    }
    *(uint *)(iVar1 + uVar2 * 8) = param_3;
    *(undefined4 *)(*param_1 + 4 + uVar2 * 8) = param_4;
    param_1[1] = param_1[1] + 1;
  }
  return;
}

// 01010C10  FUN_01010c10  size=45  [run]
undefined4 __thiscall FUN_01010c10(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_2);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    FUN_010101e0(iVar1);
    return 0;
  }
  return 1;
}

// 01010C40  FUN_01010c40  size=37  [run]
void FUN_01010c40(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  FUN_010103a0(param_1,iVar1);
  return;
}

// 01010C70  FUN_01010c70  size=28  [run]
undefined4 __thiscall FUN_01010c70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01010830(param_2,param_3);
  return param_1;
}

// 01010C90  FUN_01010c90  size=97  [run]
undefined4 __thiscall
FUN_01010c90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,int *param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4) * 2) {
    iVar1 = FUN_01010870(param_2,*(int *)(param_1 + 8) * 2 + 2);
    *param_7 = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_7 = 0;
  }
  uVar2 = FUN_010104c0(param_2,param_3,param_4,param_5,param_6);
  return uVar2;
}

// 01010D00  FUN_01010d00  size=135  [run]
void __thiscall
FUN_01010d00(int *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_01010870(param_2,param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar4 = (param_3 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & param_1[2];
    uVar2 = *(uint *)(iVar1 + uVar4 * 0x10);
    uVar3 = *(uint *)(iVar1 + 4 + uVar4 * 0x10);
    if ((uVar2 == param_3) && (uVar3 == param_4)) break;
    if ((uVar2 & uVar3) == 0xffffffff) {
      *(uint *)(iVar1 + uVar4 * 0x10) = param_3;
      *(uint *)(iVar1 + 4 + uVar4 * 0x10) = param_4;
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 8 + uVar4 * 0x10) = param_5;
      *(undefined4 *)(iVar1 + 0xc + uVar4 * 0x10) = param_6;
      param_1[1] = param_1[1] + 1;
      return;
    }
    uVar4 = uVar4 + 1;
  }
  return;
}

// 01010D90  FUN_01010d90  size=51  [run]
undefined4 __thiscall FUN_01010d90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010560(param_2,param_3);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    FUN_01010650(iVar1);
    return 0;
  }
  return 1;
}

// 01010DD0  FUN_01010dd0  size=37  [run]
void FUN_01010dd0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  FUN_01010870(param_1,iVar1);
  return;
}

// 01010E00  FUN_01010e00  size=28  [run]
undefined4 __thiscall FUN_01010e00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01010b20(param_2,param_3);
  return param_1;
}

// 01010E20  FUN_01010e20  size=29  [run]
void FUN_01010e20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01010b40(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 01010E40  FUN_01010e40  size=25  [run]
void FUN_01010e40(undefined4 param_1,undefined4 param_2)

{
  FUN_01010ba0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01010E60  FUN_01010e60  size=28  [run]
undefined4 __thiscall FUN_01010e60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01010c70(param_2,param_3);
  return param_1;
}

// 01010E80  FUN_01010e80  size=37  [run]
void FUN_01010e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_01010c90(&PTR_vftable_018e9b94,param_1,param_2,param_3,param_4,param_5);
  return;
}

// 01010EB0  FUN_01010eb0  size=33  [run]
void FUN_01010eb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01010d00(&PTR_vftable_018e9b94,param_1,param_2,param_3,param_4);
  return;
}

// 01010EE0  FUN_01010ee0  size=21  [run]
void FUN_01010ee0(undefined4 param_1)

{
  FUN_01010dd0(&PTR_vftable_018e9b94,param_1);
  return;
}

// 01010F00  FUN_01010f00  size=51  [run]
undefined4 * __thiscall FUN_01010f00(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  if (param_2 != 0) {
    FUN_01010dd0(&PTR_vftable_018e9b94,param_2);
  }
  return param_1;
}

// 01010F40  FUN_01010f40  size=14  [run]
void __thiscall FUN_01010f40(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01010F50  FUN_01010f50  size=13  [run]
void FUN_01010f50(undefined4 param_1)

{
  DAT_01f8fc68 = param_1;
  return;
}

// 01010F60  FUN_01010f60  size=6  [run]
undefined4 FUN_01010f60(void)

{
  return DAT_01f8fc68;
}

// 01010F80  hkMemorySystem::~hkMemorySystem  size=7  [run]
void __fastcall hkMemorySystem::~hkMemorySystem(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 01010F90  hkMemorySystem::vf34  size=3  [run]
void hkMemorySystem::vf34(void)

{
  return;
}

// 01010FA0  hkMemorySystem::vf38  size=1  [run]
void hkMemorySystem::vf38(void)

{
  return;
}

// 01010FB0  hkMemorySystem::vf14  size=8  [run]
undefined4 hkMemorySystem::vf14(void)

{
  return 1;
}

// 01010FC0  hkMemorySystem::vf18  size=4  [run]
undefined4 hkMemorySystem::vf18(void)

{
  return 0xffffffff;
}

// 01010FD0  hkMemorySystem::vf1C  size=5  [run]
undefined1 hkMemorySystem::vf1C(void)

{
  return 1;
}

// 01010FE0  hkMemorySystem::vf20  size=5  [run]
undefined1 hkMemorySystem::vf20(void)

{
  return 1;
}

// 01010FF0  hkMemorySystem::vf3C  size=35  [run]
void __fastcall hkMemorySystem::vf3C(int *param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(*param_1 + 0x34))(pvVar1);
                    /* WARNING: Could not recover jumptable at 0x01011011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}

// 01011030  hkMemorySystem::vf40  size=1  [run]
void hkMemorySystem::vf40(void)

{
  return;
}

// 01011040  hkMemorySystem::vf44  size=5  [run]
undefined4 hkMemorySystem::vf44(void)

{
  return 0;
}

// 01011050  hkMemorySystem::vf48  size=8  [run]
undefined4 hkMemorySystem::vf48(void)

{
  return 1;
}

// 01011060  hkMemorySystem::vf4C  size=3  [run]
void hkMemorySystem::vf4C(void)

{
  return;
}

// 01011070  hkMemorySystem::vf50  size=3  [run]
void hkMemorySystem::vf50(void)

{
  return;
}

// 01011080  hkMemorySystem::vf54  size=3  [run]
void hkMemorySystem::vf54(void)

{
  return;
}

// 01011090  hkMemorySystem::vf58  size=8  [run]
undefined4 hkMemorySystem::vf58(void)

{
  return 1;
}

// 010110A0  hkMemorySystem::vf5C  size=6  [run]
undefined4 hkMemorySystem::vf5C(void)

{
  return 1;
}

// 010110B0  hkMemorySystem::vf00  size=10  [run]
undefined4 hkMemorySystem::vf00(void)

{
  undefined4 extraout_ECX;
  
  ~hkMemorySystem();
  return extraout_ECX;
}

// 01011130  FUN_01011130  size=19  [run]
undefined4 __fastcall FUN_01011130(undefined4 param_1)

{
  FUN_01019c00(0,0xc);
  return param_1;
}

// 01011150  FUN_01011150  size=58  [run]
undefined4 * __fastcall FUN_01011150(undefined4 *param_1)

{
  FUN_0101a970();
  FUN_01019c00(0,1);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0xffffffff;
  *param_1 = 0;
  return param_1;
}

// 01011190  hkCpuJobThreadPool::vf0C  size=60  [run]
void __thiscall hkCpuJobThreadPool::vf0C(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x248) = param_2;
  *(undefined1 *)(param_1 + 600) = 1;
  iVar1 = *(int *)(param_1 + 0x250);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01019c50(1);
  }
  return;
}

// 010111D0  hkCpuJobThreadPool::vf14  size=12  [run]
bool __fastcall hkCpuJobThreadPool::vf14(int param_1)

{
  return *(char *)(param_1 + 600) != '\0';
}

// 010111E0  hkCpuJobThreadPool::vf18  size=7  [run]
undefined4 __fastcall hkCpuJobThreadPool::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x250);
}

// 010111F0  FUN_010111f0  size=60  [run]
void __fastcall FUN_010111f0(int param_1)

{
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + -1;
  *(undefined1 *)(param_1 + *(int *)(param_1 + 0x250) * 0x30 + 0x28) = 1;
  FUN_01019c50(1);
  FUN_01019c40();
  FUN_0101a980();
  return;
}

// 01011230  hkCpuJobThreadPool::vf10  size=57  [run]
void __fastcall hkCpuJobThreadPool::vf10(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 600) != '\0') {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x250)) {
      do {
        FUN_01019c40();
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x250));
    }
    *(undefined1 *)(param_1 + 600) = 0;
  }
  return;
}

// 01011270  hkCpuJobThreadPool::vf24  size=39  [run]
void __fastcall hkCpuJobThreadPool::vf24(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x250)) {
    puVar1 = (undefined4 *)(param_1 + 0x34);
    do {
      *puVar1 = puVar1[-1];
      *(undefined1 *)((int)puVar1 + -0xb) = 1;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0xc;
    } while (iVar2 < *(int *)(param_1 + 0x250));
  }
  return;
}

// 010112A0  hkBaseObject::hkBaseObject_108  size=152  [run]
void __fastcall hkBaseObject::hkBaseObject_108(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = hkCpuJobThreadPool::vftable;
  hkCpuJobThreadPool::vf10();
  iVar1 = 0;
  if (0 < (int)param_1[0x94]) {
    puVar2 = param_1 + 0xb;
    do {
      *(undefined1 *)(puVar2 + -1) = 1;
      FUN_01019c50(1);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0xc;
    } while (iVar1 < (int)param_1[0x94]);
  }
  iVar1 = 0;
  if (0 < (int)param_1[0x94]) {
    do {
      FUN_01019c40();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0x94]);
  }
  FUN_01005f00(0);
  FUN_01019c30();
  iVar1 = 0xb;
  do {
    FUN_01019c30();
    thunk_FUN_0101a980();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *param_1 = vftable;
  return;
}

// 01011340  hkCpuJobThreadPool::vf20  size=107  [run]
void __thiscall hkCpuJobThreadPool::vf20(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x250)) {
    puVar3 = (undefined4 *)(param_1 + 0x34);
    do {
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        FUN_0100a290(param_3,param_2,8);
      }
      puVar1 = (undefined4 *)(*param_2 + param_2[1] * 8);
      param_2[1] = param_2[1] + 1;
      *puVar1 = puVar3[-1];
      iVar2 = iVar2 + 1;
      puVar1[1] = *puVar3;
      puVar3 = puVar3 + 0xc;
    } while (iVar2 < *(int *)(param_1 + 0x250));
  }
  return;
}

// 010113B0  FUN_010113b0  size=345  [run]
undefined4 FUN_010113b0(int *param_1)

{
  char cVar1;
  int iVar2;
  HANDLE hThread;
  int *piVar3;
  LPVOID pvVar4;
  DWORD dwIdealProcessor;
  undefined1 local_44 [64];
  
  iVar2 = *param_1;
  MXCSR = MXCSR | 0x8000;
  dwIdealProcessor = param_1[7];
  hThread = GetCurrentThread();
  SetThreadIdealProcessor(hThread,dwIdealProcessor);
  FUN_01005d80();
  piVar3 = (int *)FUN_01010f60();
  (**(code **)(*piVar3 + 0xc))(local_44,"hkCpuJobThreadPool",3);
  FUN_0100efa0(local_44);
  TlsSetValue(DAT_01f8fc5c,(LPVOID)param_1[6]);
  if (0 < *(int *)(iVar2 + 0xc)) {
    pvVar4 = TlsGetValue(DAT_01f8fc54);
    FUN_01006ca0(pvVar4,*(undefined4 *)(iVar2 + 0xc));
  }
  piVar3 = TlsGetValue(DAT_01f8fc54);
  param_1[10] = *piVar3;
  pvVar4 = TlsGetValue(DAT_01f8fc54);
  param_1[0xb] = *(int *)((int)pvVar4 + 4);
  FUN_01019c40();
  cVar1 = (char)param_1[8];
  while (cVar1 == '\0') {
    if (*(char *)((int)param_1 + 0x21) != '\0') {
      pvVar4 = TlsGetValue(DAT_01f8fc54);
      FUN_01006be0(pvVar4);
      pvVar4 = TlsGetValue(DAT_01f8fc54);
      param_1[0xb] = *(int *)((int)pvVar4 + 4);
      *(undefined1 *)((int)param_1 + 0x21) = 0;
    }
    FUN_0100d100(1);
    pvVar4 = TlsGetValue(DAT_01f8fc54);
    param_1[0xb] = *(int *)((int)pvVar4 + 4);
    FUN_01019c50(1);
    FUN_01019c40();
    cVar1 = (char)param_1[8];
  }
  FUN_0100f090();
  piVar3 = (int *)FUN_01010f60();
  (**(code **)(*piVar3 + 0x10))(local_44,3);
  FUN_01019c50(1);
  hkMemoryAllocator::~hkMemoryAllocator();
  return 0;
}

// 01011510  hkCpuJobThreadPool::hkCpuJobThreadPool  size=296  [run]
undefined4 * __thiscall hkCpuJobThreadPool::hkCpuJobThreadPool(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  iVar2 = 0xb;
  do {
    FUN_01011150();
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  FUN_01011130();
  *(undefined1 *)(param_1 + 0x96) = 0;
  param_1[0x97] = param_2[6];
  param_1[0x98] = param_2[1];
  param_1[0x95] = param_2[2];
  local_8 = *param_2;
  if (0xb < local_8) {
    local_8 = 0xb;
  }
  iVar2 = local_8;
  param_1[0x94] = local_8;
  FUN_0100efe0(&local_10);
  if (0 < iVar2) {
    local_c = 0;
    iVar2 = 1;
    puVar1 = param_1;
    do {
      puVar1[2] = param_1 + 0x92;
      puVar1[8] = iVar2;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      *(undefined2 *)(puVar1 + 10) = 0;
      if (param_2[4] < 1) {
        puVar1[9] = iVar2 % local_10;
      }
      else {
        puVar1[9] = *(undefined4 *)(local_c + param_2[3]);
      }
      FUN_0101a9a0(FUN_010113b0,puVar1 + 2,param_1[0x97],param_1[0x98]);
      local_c = local_c + 4;
      iVar2 = iVar2 + 1;
      local_8 = local_8 + -1;
      puVar1 = puVar1 + 0xc;
    } while (local_8 != 0);
  }
  FUN_01005f00(1);
  return param_1;
}

// 01011640  FUN_01011640  size=115  [run]
void __fastcall FUN_01011640(int param_1)

{
  int *piVar1;
  int iVar2;
  _SYSTEM_INFO local_28;
  
  piVar1 = (int *)(param_1 + 8 + *(int *)(param_1 + 0x250) * 0x30);
  *piVar1 = param_1 + 0x248;
  iVar2 = *(int *)(param_1 + 0x250);
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  *(undefined2 *)(piVar1 + 8) = 0;
  piVar1[6] = iVar2 + 1;
  GetSystemInfo(&local_28);
  piVar1[7] = piVar1[6] % (int)local_28.dwNumberOfProcessors;
  FUN_0101a9a0(FUN_010113b0,piVar1,*(undefined4 *)(param_1 + 0x25c),*(undefined4 *)(param_1 + 0x260)
              );
  *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
  return;
}

// 010116C0  hkCpuJobThreadPool::vf1C  size=70  [run]
void __thiscall hkCpuJobThreadPool::vf1C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0xb < param_2) {
    param_2 = 0xb;
  }
  iVar1 = *(int *)(param_1 + 0x250);
  iVar2 = iVar1 - param_2;
  while (iVar1 < param_2) {
    FUN_01011640();
    iVar1 = *(int *)(param_1 + 0x250);
    iVar2 = iVar1 - param_2;
  }
  if (iVar1 != param_2 && SBORROW4(iVar1,param_2) == iVar2 < 0) {
    do {
      FUN_010111f0();
    } while (param_2 < *(int *)(param_1 + 0x250));
  }
  return;
}

// 01011710  FUN_01011710  size=37  [run]
void __fastcall FUN_01011710(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  param_1[6] = "HavokWorkerThread";
  param_1[1] = 0;
  return;
}

// 01011760  FUN_01011760  size=20  [run]
void FUN_01011760(void)

{
  FUN_01019c30();
  thunk_FUN_0101a980();
  return;
}

// 01011790  FUN_01011790  size=15  [run]
int __thiscall FUN_01011790(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010117C0  FUN_010117c0  size=38  [run]
void FUN_010117c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010117F0  hkJobThreadPool::vf00  size=53  [run]
undefined4 * __thiscall hkJobThreadPool::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01011830  FUN_01011830  size=38  [run]
void FUN_01011830(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01011880  FUN_01011880  size=51  [run]
int __thiscall FUN_01011880(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010118C0  hkCpuJobThreadPool::vf00  size=52  [run]
int __thiscall hkCpuJobThreadPool::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_108();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01011930  FUN_01011930  size=8  [run]
undefined4 FUN_01011930(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01011940  hkLocalFrameGroup::hkLocalFrameGroup  size=31  [run]
undefined4 * __thiscall hkLocalFrameGroup::hkLocalFrameGroup(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  return param_1;
}

// 01011960  hkBaseObject::hkBaseObject_100  size=19  [run]
void __fastcall hkBaseObject::hkBaseObject_100(undefined4 *param_1)

{
  FUN_01006770();
  *param_1 = vftable;
  return;
}

// 01011980  FUN_01011980  size=8  [run]
undefined4 FUN_01011980(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010119B0  hkLocalFrameGroup::hkLocalFrameGroup_2  size=30  [run]
void hkLocalFrameGroup::hkLocalFrameGroup_2(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
  }
  return;
}

// 010119D0  FUN_010119d0  size=16  [run]
void FUN_010119d0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010119E0  hkLocalFrameGroup::hkLocalFrameGroup_3  size=53  [run]
undefined ** hkLocalFrameGroup::hkLocalFrameGroup_3(void)

{
  FUN_010065b0(0);
  return vftable;
}

// 01011A30  FUN_01011a30  size=16  [run]
void FUN_01011a30(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01011A40  hkSimpleLocalFrame::hkSimpleLocalFrame  size=30  [run]
void hkSimpleLocalFrame::hkSimpleLocalFrame(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
    FUN_010065b0(param_2);
  }
  return;
}

// 01011A60  hkSimpleLocalFrame::hkSimpleLocalFrame_3  size=53  [run]
undefined ** hkSimpleLocalFrame::hkSimpleLocalFrame_3(void)

{
  FUN_010065b0(0);
  return vftable;
}

// 01011AD0  FUN_01011ad0  size=26  [run]
void __thiscall FUN_01011ad0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01011B00  FUN_01011b00  size=38  [run]
void FUN_01011b00(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01011B30  hkLocalFrame::vf00  size=53  [run]
undefined4 * __thiscall hkLocalFrame::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01011B70  FUN_01011b70  size=38  [run]
void FUN_01011b70(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01011BA0  hkLocalFrameGroup::vf00  size=61  [run]
undefined4 * __thiscall hkLocalFrameGroup::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01011C00  FUN_01011c00  size=61  [run]
void __thiscall FUN_01011c00(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01011C40  FUN_01011c40  size=61  [run]
void __fastcall FUN_01011c40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01011C80  FUN_01011c80  size=61  [run]
void __fastcall FUN_01011c80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01011CC0  hkSimpleLocalFrame::hkSimpleLocalFrame_2  size=31  [run]
undefined4 * __thiscall
hkSimpleLocalFrame::hkSimpleLocalFrame_2(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  return param_1;
}

// 01011CE0  hkSimpleLocalFrame::vf20  size=4  [run]
undefined4 __fastcall hkSimpleLocalFrame::vf20(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}

// 01011CF0  hkSimpleLocalFrame::vf24  size=13  [run]
void __thiscall hkSimpleLocalFrame::vf24(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x5c) = param_2;
  return;
}

// 01011D00  hkSimpleLocalFrame::vf30  size=4  [run]
undefined4 __fastcall hkSimpleLocalFrame::vf30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}

// 01011D10  FUN_01011d10  size=38  [run]
void FUN_01011d10(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01011D40  hkSimpleLocalFrame::vf1C  size=7  [run]
uint __fastcall hkSimpleLocalFrame::vf1C(int param_1)

{
  return *(uint *)(param_1 + 100) & 0xfffffffe;
}

// 01011D50  hkSimpleLocalFrame::vf00  size=52  [run]
int __thiscall hkSimpleLocalFrame::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_12();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01011D90  FUN_01011d90  size=8  [run]
undefined4 FUN_01011d90(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01011DA0  FUN_01011da0  size=8  [run]
undefined4 FUN_01011da0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01011DB0  FUN_01011db0  size=8  [run]
undefined4 FUN_01011db0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01011DC0  FUN_01011dc0  size=8  [run]
undefined4 FUN_01011dc0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01011DD0  FUN_01011dd0  size=8  [run]
undefined4 FUN_01011dd0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01011DF0  FUN_01011df0  size=21  [run]
void FUN_01011df0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_0101b140(param_2);
  }
  return;
}

// 01011E20  FUN_01011e20  size=21  [run]
void FUN_01011e20(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_0101f0a0(param_2);
  }
  return;
}

// 01011E70  FUN_01011e70  size=16  [run]
void FUN_01011e70(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01011E80  FUN_01011e80  size=21  [run]
void FUN_01011e80(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_010065b0(param_2);
  }
  return;
}

// 01011EA0  FUN_01011ea0  size=21  [run]
void FUN_01011ea0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_010065b0(param_2);
  }
  return;
}

// 01011EC0  FUN_01011ec0  size=15  [run]
void FUN_01011ec0(void)

{
  FUN_01006770();
  return;
}

// 01011ED0  FUN_01011ed0  size=12  [run]
void FUN_01011ed0(void)

{
  FUN_01006770();
  return;
}

// 01011EE0  FUN_01011ee0  size=12  [run]
void FUN_01011ee0(void)

{
  FUN_01006770();
  return;
}

// 01011EF0  hkMonitorStreamColorTable::hkMonitorStreamColorTable  size=18  [run]
void hkMonitorStreamColorTable::hkMonitorStreamColorTable(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01011F10  FUN_01011f10  size=6  [run]
undefined ** FUN_01011f10(void)

{
  return hkMonitorStreamColorTable::vftable;
}

// 01011F20  FUN_01011f20  size=12  [run]
void FUN_01011f20(void)

{
  FUN_01012580();
  return;
}

// 01011FC0  FUN_01011fc0  size=25  [run]
void __thiscall FUN_01011fc0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 01011FF0  FUN_01011ff0  size=28  [run]
void __thiscall FUN_01011ff0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01012010  FUN_01012010  size=39  [run]
void FUN_01012010(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01012040  FUN_01012040  size=39  [run]
void FUN_01012040(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 01012070  FUN_01012070  size=39  [run]
void FUN_01012070(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x24);
  }
  return;
}

// 010120A0  FUN_010120a0  size=22  [run]
undefined4 __thiscall FUN_010120a0(undefined4 param_1,undefined4 param_2)

{
  FUN_010065b0(param_2);
  return param_1;
}

// 010120C0  FUN_010120c0  size=39  [run]
void FUN_010120c0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 010120F0  FUN_010120f0  size=22  [run]
undefined4 __thiscall FUN_010120f0(undefined4 param_1,undefined4 param_2)

{
  FUN_010065b0(param_2);
  return param_1;
}

// 01012110  FUN_01012110  size=56  [run]
int __thiscall FUN_01012110(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 01012150  FUN_01012150  size=53  [run]
int __thiscall FUN_01012150(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x24);
  }
  return param_1;
}

// 01012190  FUN_01012190  size=53  [run]
int __thiscall FUN_01012190(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01006770();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 010121E0  FUN_010121e0  size=39  [run]
void FUN_010121e0(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_01006770();
  }
  return;
}

// 01012210  FUN_01012210  size=34  [run]
void FUN_01012210(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_01006770();
  }
  return;
}

// 01012240  FUN_01012240  size=45  [run]
undefined4 __fastcall FUN_01012240(undefined4 *param_1)

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

// 01012270  FUN_01012270  size=40  [run]
undefined4 __fastcall FUN_01012270(undefined4 *param_1)

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

// 010122A0  FUN_010122a0  size=94  [run]
void __thiscall FUN_010122a0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01012300  FUN_01012300  size=92  [run]
void __thiscall FUN_01012300(undefined4 *param_1,int *param_2)

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

// 01012360  FUN_01012360  size=93  [run]
void __fastcall FUN_01012360(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010123C0  FUN_010123c0  size=92  [run]
void __fastcall FUN_010123c0(undefined4 *param_1)

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

// 01012420  FUN_01012420  size=93  [run]
void __fastcall FUN_01012420(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01012480  FUN_01012480  size=92  [run]
void __fastcall FUN_01012480(undefined4 *param_1)

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

// 010124F0  FUN_010124f0  size=38  [run]
void FUN_010124f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01012520  hkBaseObject::hkBaseObject_95  size=94  [run]
void __fastcall hkBaseObject::hkBaseObject_95(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[3];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 8);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01012580  FUN_01012580  size=93  [run]
void __fastcall FUN_01012580(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010125E0  hkMonitorStreamColorTable::vf00  size=52  [run]
int __thiscall hkMonitorStreamColorTable::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_95();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01012620  FUN_01012620  size=53  [run]
int __thiscall FUN_01012620(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01012580();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 01012840  FUN_01012840  size=8  [run]
undefined4 FUN_01012840(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01012880  FUN_01012880  size=66  [run]
void FUN_01012880(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010128D0  FUN_010128d0  size=66  [run]
void FUN_010128d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01012920  FUN_01012920  size=8  [run]
undefined4 FUN_01012920(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01012960  FUN_01012960  size=26  [run]
void __thiscall FUN_01012960(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01012990  FUN_01012990  size=39  [run]
void FUN_01012990(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 010129C0  FUN_010129c0  size=39  [run]
void FUN_010129c0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 01012A10  FUN_01012a10  size=61  [run]
void __thiscall FUN_01012a10(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01012A50  FUN_01012a50  size=61  [run]
void __fastcall FUN_01012a50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01012A90  FUN_01012a90  size=61  [run]
void __fastcall FUN_01012a90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01012AD0  FUN_01012ad0  size=61  [run]
void __fastcall FUN_01012ad0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01012B10  FUN_01012b10  size=61  [run]
void __fastcall FUN_01012b10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01012B50  FUN_01012b50  size=101  [run]
undefined4 * __thiscall FUN_01012b50(undefined4 *param_1,byte param_2)

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
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 01012BE0  FUN_01012be0  size=101  [run]
undefined4 * __thiscall FUN_01012be0(undefined4 *param_1,byte param_2)

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
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 01012C50  FUN_01012c50  size=8  [run]
undefined4 FUN_01012c50(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01012C60  FUN_01012c60  size=8  [run]
undefined4 FUN_01012c60(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01012C90  FUN_01012c90  size=21  [run]
void FUN_01012c90(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    hkRefCountedProperties::hkRefCountedProperties(param_2);
  }
  return;
}

// 01012CB0  FUN_01012cb0  size=16  [run]
void FUN_01012cb0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01012CC0  FUN_01012cc0  size=46  [run]
undefined4 FUN_01012cc0(void)

{
  undefined4 local_30;
  
  hkRefCountedProperties::hkRefCountedProperties(0);
  return local_30;
}

// 01012D00  FUN_01012d00  size=27  [run]
void FUN_01012d00(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01012D30  FUN_01012d30  size=22  [run]
void __fastcall FUN_01012d30(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01012D50  FUN_01012d50  size=39  [run]
void FUN_01012d50(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return;
}

// 01012D90  FUN_01012d90  size=22  [run]
void __fastcall FUN_01012d90(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01012DB0  FUN_01012db0  size=61  [run]
int * __thiscall FUN_01012db0(int *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,8);
  }
  return param_1;
}

// 01012E20  FUN_01012e20  size=8  [run]
undefined4 FUN_01012e20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01012EA0  FUN_01012ea0  size=8  [run]
undefined4 FUN_01012ea0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01012EE0  FUN_01012ee0  size=21  [run]
void FUN_01012ee0(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    FUN_01023a10(param_2);
  }
  return;
}

// 01012F00  FUN_01012f00  size=12  [run]
void FUN_01012f00(void)

{
  FUN_009211c0();
  return;
}

// 01013090  FUN_01013090  size=8  [run]
undefined4 FUN_01013090(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010130C0  FUN_010130c0  size=66  [run]
void FUN_010130c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01013110  FUN_01013110  size=39  [run]
void FUN_01013110(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 01013140  FUN_01013140  size=61  [run]
void __fastcall FUN_01013140(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01013190  FUN_01013190  size=101  [run]
undefined4 * __thiscall FUN_01013190(undefined4 *param_1,byte param_2)

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
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 01013260  FUN_01013260  size=8  [run]
undefined4 FUN_01013260(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01013280  hkReferencedObject::hkReferencedObject  size=18  [run]
void hkReferencedObject::hkReferencedObject(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 010132A0  FUN_010132a0  size=16  [run]
void FUN_010132a0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 010132B0  FUN_010132b0  size=6  [run]
undefined ** FUN_010132b0(void)

{
  return hkReferencedObject::vftable;
}

// 010132C0  FUN_010132c0  size=8  [run]
undefined4 FUN_010132c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 010132D0  FUN_010132d0  size=63  [run]
void FUN_010132d0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)hkSimpleMemorySystem::hkSimpleMemorySystem();
  DAT_01f90914 = piVar1;
  FUN_01023fd0(param_1);
  FUN_01010f50(piVar1);
  (**(code **)(*piVar1 + 4))(param_2,3);
  return;
}

// 01013310  FUN_01013310  size=31  [run]
void FUN_01013310(LPCSTR param_1)

{
  OutputDebugStringA(param_1);
  FID_conflict__wprintf("%s",param_1);
  return;
}

// 01013330  FUN_01013330  size=94  [run]
undefined4 FUN_01013330(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_01f90914 != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_01f90914 + 8))(3);
    (**(code **)*DAT_01f90914)(0);
    DAT_01f90914 = (int *)0x0;
    FUN_01010f50(0);
  }
  if (DAT_01f90918 != (code *)0x0) {
    (*DAT_01f90918)();
    DAT_01f90918 = (code *)0x0;
  }
  return uVar1;
}

// 010133B0  FUN_010133b0  size=19  [run]
void FUN_010133b0(LONG *param_1,LONG param_2)

{
  InterlockedExchangeAdd(param_1,param_2);
  return;
}

// 010133D0  hkMallocAllocator::vf04  size=54  [run]
void __thiscall hkMallocAllocator::vf04(int param_1,size_t param_2)

{
  LONG LVar1;
  
  LVar1 = InterlockedExchangeAdd((LONG *)(param_1 + 8),param_2);
  if (*(uint *)(param_1 + 0xc) < LVar1 + param_2) {
    *(LONG *)(param_1 + 0xc) = *(LONG *)(param_1 + 8);
  }
  __aligned_malloc(param_2,*(size_t *)(param_1 + 4));
  return;
}

// 01013410  hkMallocAllocator::vf08  size=35  [run]
void __thiscall hkMallocAllocator::vf08(int param_1,void *param_2,int param_3)

{
  InterlockedExchangeAdd((LONG *)(param_1 + 8),-param_3);
  __aligned_free(param_2);
  return;
}

// 01013440  hkMallocAllocator::vf20  size=21  [run]
void __thiscall hkMallocAllocator::vf20(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 8);
  param_2[2] = *(undefined4 *)(param_1 + 0xc);
  return;
}

// 01013460  hkMallocAllocator::vf28  size=7  [run]
void __fastcall hkMallocAllocator::vf28(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  return;
}

// 01013470  hkMallocAllocator::vf24  size=10  [run]
undefined4 hkMallocAllocator::vf24(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01013480  FUN_01013480  size=49  [run]
void __fastcall FUN_01013480(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[6];
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_1;
  param_1[1] = param_1[4];
  param_1[2] = param_1[8];
  param_1[3] = param_1[9];
  param_1[4] = uVar2;
  param_1[5] = param_1[5];
  param_1[6] = param_1[9];
  param_1[7] = param_1[0xb];
  param_1[8] = uVar3;
  param_1[9] = uVar1;
  param_1[10] = param_1[10];
  param_1[0xb] = param_1[0xb];
  return;
}

// 01013560  FUN_01013560  size=10  [run]
void FUN_01013560(void)

{
  return;
}

// 01013570  FUN_01013570  size=25  [run]
void FUN_01013570(void)

{
  return;
}

// 010135D0  FUN_010135d0  size=200  [run]
void __thiscall FUN_010135d0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = param_2[8];
  fVar6 = param_2[9];
  fVar7 = param_2[10];
  fVar8 = param_2[0xb];
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  fVar11 = param_2[6];
  *param_1 = param_2[2] * fVar3 + *param_2 * fVar1 + param_2[1] * fVar2;
  param_1[1] = fVar3 * fVar11 + fVar1 * fVar9 + fVar2 * fVar10;
  param_1[2] = fVar7 * fVar3 + fVar5 * fVar1 + fVar6 * fVar2;
  param_1[3] = fVar8 * fVar4 + fVar6 * fVar2 + fVar8 * fVar4;
  fVar1 = param_3[4];
  fVar2 = param_3[5];
  fVar3 = param_3[6];
  fVar4 = param_3[7];
  fVar5 = param_2[8];
  fVar6 = param_2[9];
  fVar7 = param_2[10];
  fVar8 = param_2[0xb];
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  fVar11 = param_2[6];
  param_1[4] = param_2[2] * fVar3 + *param_2 * fVar1 + param_2[1] * fVar2;
  param_1[5] = fVar3 * fVar11 + fVar1 * fVar9 + fVar2 * fVar10;
  param_1[6] = fVar7 * fVar3 + fVar5 * fVar1 + fVar6 * fVar2;
  param_1[7] = fVar8 * fVar4 + fVar6 * fVar2 + fVar8 * fVar4;
  fVar1 = param_3[8];
  fVar2 = param_3[9];
  fVar3 = param_3[10];
  fVar4 = param_3[0xb];
  fVar5 = param_2[8];
  fVar6 = param_2[9];
  fVar7 = param_2[10];
  fVar8 = param_2[0xb];
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  fVar11 = param_2[6];
  param_1[8] = param_2[2] * fVar3 + *param_2 * fVar1 + param_2[1] * fVar2;
  param_1[9] = fVar3 * fVar11 + fVar1 * fVar9 + fVar2 * fVar10;
  param_1[10] = fVar7 * fVar3 + fVar5 * fVar1 + fVar6 * fVar2;
  param_1[0xb] = fVar8 * fVar4 + fVar6 * fVar2 + fVar8 * fVar4;
  return;
}

// 010136A0  FUN_010136a0  size=41  [run]
void __thiscall FUN_010136a0(float *param_1,float *param_2)

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

// 010136D0  FUN_010136d0  size=96  [run]
void __thiscall FUN_010136d0(undefined4 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *param_1 = 0;
  param_1[1] = fVar3;
  param_1[2] = 0.0 - fVar2;
  param_1[3] = 0;
  param_1[4] = 0.0 - fVar3;
  param_1[5] = 0;
  param_1[6] = fVar1;
  param_1[7] = 0;
  param_1[8] = fVar2;
  param_1[9] = 0.0 - fVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}

// 01013730  FUN_01013730  size=44  [run]
void __thiscall FUN_01013730(float *param_1,float *param_2,float *param_3)

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
  fVar1 = param_3[5];
  fVar2 = param_3[6];
  fVar3 = param_3[7];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  param_1[4] = param_3[4] * *param_2;
  param_1[5] = fVar1 * fVar4;
  param_1[6] = fVar2 * fVar5;
  param_1[7] = fVar3 * fVar6;
  fVar1 = param_3[9];
  fVar2 = param_3[10];
  fVar3 = param_3[0xb];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  param_1[8] = param_3[8] * *param_2;
  param_1[9] = fVar1 * fVar4;
  param_1[10] = fVar2 * fVar5;
  param_1[0xb] = fVar3 * fVar6;
  return;
}

// 01013760  FUN_01013760  size=43  [run]
void __thiscall FUN_01013760(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_2 + *param_1;
  param_1[1] = fVar1 + param_1[1];
  param_1[2] = fVar2 + param_1[2];
  param_1[3] = fVar3 + param_1[3];
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  param_1[4] = param_2[4] + param_1[4];
  param_1[5] = fVar1 + param_1[5];
  param_1[6] = fVar2 + param_1[6];
  param_1[7] = fVar3 + param_1[7];
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  param_1[8] = param_2[8] + param_1[8];
  param_1[9] = fVar1 + param_1[9];
  param_1[10] = fVar2 + param_1[10];
  param_1[0xb] = fVar3 + param_1[0xb];
  return;
}

// 01013790  FUN_01013790  size=43  [run]
void __thiscall FUN_01013790(float *param_1,float *param_2)

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
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  param_1[4] = param_1[4] - param_2[4];
  param_1[5] = param_1[5] - fVar1;
  param_1[6] = param_1[6] - fVar2;
  param_1[7] = param_1[7] - fVar3;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  param_1[8] = param_1[8] - param_2[8];
  param_1[9] = param_1[9] - fVar1;
  param_1[10] = param_1[10] - fVar2;
  param_1[0xb] = param_1[0xb] - fVar3;
  return;
}

// 01013860  FUN_01013860  size=139  [run]
void __thiscall FUN_01013860(float param_1,int param_2)

{
  float in_EAX;
  float *unaff_ESI;
  float fVar1;
  float fVar2;
  
  unaff_ESI[3] = in_EAX;
  unaff_ESI[2] = param_1;
  fVar1 = (*(float *)(param_2 + (int)in_EAX * 0x14) - *(float *)(param_2 + (int)param_1 * 0x14)) /
          (*(float *)(param_2 + ((int)param_1 + (int)in_EAX * 4) * 4) * 2.0);
  fVar2 = SQRT(fVar1 * fVar1 + 1.0);
  if (fVar1 < (float)(undefined *)0x0) {
    fVar2 = fVar1 - fVar2;
  }
  else {
    fVar2 = fVar2 + fVar1;
  }
  fVar2 = 1.0 / fVar2;
  fVar1 = 1.0 / SQRT(fVar2 * fVar2 + 1.0);
  *unaff_ESI = fVar1;
  unaff_ESI[1] = fVar1 * fVar2;
  return;
}

// 01013990  FUN_01013990  size=170  [run]
void FUN_01013990(int param_1,undefined8 *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
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
  
  local_40 = (float)*param_2;
  fStack_3c = (float)((ulonglong)*param_2 >> 0x20);
  fStack_38 = (float)param_2[1];
  fStack_34 = (float)((ulonglong)param_2[1] >> 0x20);
  local_30 = (float)param_2[2];
  fStack_2c = (float)((ulonglong)param_2[2] >> 0x20);
  fStack_28 = (float)param_2[3];
  fStack_24 = (float)((ulonglong)param_2[3] >> 0x20);
  local_20 = (float)param_2[4];
  fStack_1c = (float)((ulonglong)param_2[4] >> 0x20);
  fStack_18 = (float)param_2[5];
  fStack_14 = (float)((ulonglong)param_2[5] >> 0x20);
  iVar6 = 2;
  pfVar5 = (float *)(param_3 + 0x20);
  do {
    fVar2 = *pfVar5;
    fVar3 = pfVar5[1];
    fVar4 = pfVar5[2];
    pfVar1 = (float *)((param_1 - param_3) + (int)pfVar5);
    *pfVar1 = fVar2 * local_40 + fVar3 * local_30 + fVar4 * local_20;
    pfVar1[1] = fVar2 * fStack_3c + fVar3 * fStack_2c + fVar4 * fStack_1c;
    pfVar1[2] = fVar2 * fStack_38 + fVar3 * fStack_28 + fVar4 * fStack_18;
    pfVar1[3] = fVar2 * fStack_34 + fVar3 * fStack_24 + fVar4 * fStack_14;
    pfVar5 = pfVar5 + -4;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  return;
}

// 01013A40  FUN_01013a40  size=151  [run]
void __thiscall FUN_01013a40(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_30 = (undefined4)param_2[2];
  uStack_2c = (undefined4)((ulonglong)param_2[2] >> 0x20);
  uStack_28 = (undefined4)param_2[3];
  local_20 = (undefined4)*param_2;
  uStack_1c = (undefined4)((ulonglong)*param_2 >> 0x20);
  uStack_18 = (undefined4)param_2[1];
  local_40 = (undefined4)param_2[4];
  uStack_3c = (undefined4)((ulonglong)param_2[4] >> 0x20);
  uStack_38 = (undefined4)param_2[5];
  uStack_34 = (undefined4)((ulonglong)param_2[5] >> 0x20);
  *param_1 = local_20;
  param_1[1] = local_30;
  param_1[2] = local_40;
  param_1[3] = uStack_3c;
  param_1[4] = uStack_1c;
  param_1[5] = uStack_2c;
  param_1[6] = uStack_3c;
  param_1[7] = uStack_34;
  param_1[8] = uStack_18;
  param_1[9] = uStack_28;
  param_1[10] = uStack_38;
  param_1[0xb] = uStack_34;
  return;
}

// 01013AE0  FUN_01013ae0  size=169  [run]
void __thiscall FUN_01013ae0(int param_1,undefined8 *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
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
  
  local_40 = (float)*param_2;
  fStack_3c = (float)((ulonglong)*param_2 >> 0x20);
  fStack_38 = (float)param_2[1];
  fStack_34 = (float)((ulonglong)param_2[1] >> 0x20);
  local_30 = (float)param_2[2];
  fStack_2c = (float)((ulonglong)param_2[2] >> 0x20);
  fStack_28 = (float)param_2[3];
  fStack_24 = (float)((ulonglong)param_2[3] >> 0x20);
  local_20 = (float)param_2[4];
  fStack_1c = (float)((ulonglong)param_2[4] >> 0x20);
  fStack_18 = (float)param_2[5];
  fStack_14 = (float)((ulonglong)param_2[5] >> 0x20);
  iVar6 = 2;
  pfVar5 = (float *)(param_3 + 0x20);
  do {
    fVar2 = *pfVar5;
    fVar3 = pfVar5[1];
    fVar4 = pfVar5[2];
    pfVar1 = (float *)((param_1 - param_3) + (int)pfVar5);
    *pfVar1 = fVar2 * local_40 + fVar3 * local_30 + fVar4 * local_20;
    pfVar1[1] = fVar2 * fStack_3c + fVar3 * fStack_2c + fVar4 * fStack_1c;
    pfVar1[2] = fVar2 * fStack_38 + fVar3 * fStack_28 + fVar4 * fStack_18;
    pfVar1[3] = fVar2 * fStack_34 + fVar3 * fStack_24 + fVar4 * fStack_14;
    pfVar5 = pfVar5 + -4;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  return;
}

// 01013B90  FUN_01013b90  size=297  [run]
void __thiscall FUN_01013b90(int param_1,undefined8 *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float local_80 [4];
  undefined8 local_70;
  undefined4 uStack_68;
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
  float fStack_28;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_70 = *(undefined8 *)(param_3 + 0x10);
  uStack_68 = (undefined4)*(undefined8 *)(param_3 + 0x18);
  fStack_28 = (float)*(undefined8 *)(param_3 + 8);
  uStack_18 = (undefined4)*(undefined8 *)(param_3 + 0x28);
  uStack_14 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x28) >> 0x20);
  local_50 = (float)param_2[2];
  fStack_4c = (float)((ulonglong)param_2[2] >> 0x20);
  fStack_48 = (float)param_2[3];
  fStack_44 = (float)((ulonglong)param_2[3] >> 0x20);
  local_80[0] = fStack_28;
  local_80[1] = (float)uStack_68;
  local_80[2] = (float)uStack_18;
  local_80[3] = (float)uStack_14;
  local_60 = (float)*param_2;
  fStack_5c = (float)((ulonglong)*param_2 >> 0x20);
  fStack_58 = (float)param_2[1];
  fStack_54 = (float)((ulonglong)param_2[1] >> 0x20);
  local_40 = (float)param_2[4];
  fStack_3c = (float)((ulonglong)param_2[4] >> 0x20);
  fStack_38 = (float)param_2[5];
  fStack_34 = (float)((ulonglong)param_2[5] >> 0x20);
  pfVar6 = (float *)(param_1 + 0x20);
  iVar4 = 2;
  pfVar5 = local_80;
  do {
    fVar1 = *pfVar5;
    fVar2 = pfVar5[1];
    fVar3 = pfVar5[2];
    *pfVar6 = fVar2 * local_50 + fVar1 * local_60 + fVar3 * local_40;
    pfVar6[1] = fVar2 * fStack_4c + fVar1 * fStack_5c + fVar3 * fStack_3c;
    pfVar6[2] = fVar2 * fStack_48 + fVar1 * fStack_58 + fVar3 * fStack_38;
    pfVar6[3] = fVar2 * fStack_44 + fVar1 * fStack_54 + fVar3 * fStack_34;
    pfVar5 = pfVar5 + -4;
    pfVar6 = pfVar6 + -4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return;
}

// 01013CC0  FUN_01013cc0  size=220  [run]
void __thiscall FUN_01013cc0(float *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  local_20 = (float)*param_2;
  fStack_1c = (float)((ulonglong)*param_2 >> 0x20);
  fStack_18 = (float)param_2[1];
  local_30 = (float)param_2[2];
  fStack_2c = (float)((ulonglong)param_2[2] >> 0x20);
  fStack_28 = (float)param_2[3];
  local_40 = (float)param_2[4];
  fVar2 = local_40;
  fStack_3c = (float)((ulonglong)param_2[4] >> 0x20);
  fVar3 = fStack_3c;
  fStack_38 = (float)param_2[5];
  fVar4 = fStack_38;
  fStack_34 = (float)((ulonglong)param_2[5] >> 0x20);
  param_3 = param_3 - (int)param_1;
  iVar5 = 3;
  do {
    uVar1 = *(undefined8 *)(param_3 + (int)param_1);
    local_40 = (float)uVar1;
    fStack_3c = (float)((ulonglong)uVar1 >> 0x20);
    fStack_38 = (float)*(undefined8 *)(param_3 + 8 + (int)param_1);
    *param_1 = fStack_3c * fStack_1c + local_40 * local_20 + fStack_38 * fStack_18;
    param_1[1] = fStack_3c * fStack_2c + local_40 * local_30 + fStack_38 * fStack_28;
    param_1[2] = fStack_3c * fVar3 + local_40 * fVar2 + fStack_38 * fVar4;
    param_1[3] = fStack_3c * fStack_34 + local_40 * fVar3 + fStack_38 * fStack_34;
    param_1 = param_1 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

// 01013DA0  FUN_01013da0  size=55  [run]
void __thiscall FUN_01013da0(float *param_1,float *param_2,float *param_3)

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
  fVar1 = param_3[5];
  fVar2 = param_3[6];
  fVar3 = param_3[7];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  param_1[4] = param_3[4] * *param_2 + param_1[4];
  param_1[5] = fVar1 * fVar4 + param_1[5];
  param_1[6] = fVar2 * fVar5 + param_1[6];
  param_1[7] = fVar3 * fVar6 + param_1[7];
  fVar1 = param_3[9];
  fVar2 = param_3[10];
  fVar3 = param_3[0xb];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  param_1[8] = param_3[8] * *param_2 + param_1[8];
  param_1[9] = fVar1 * fVar4 + param_1[9];
  param_1[10] = fVar2 * fVar5 + param_1[10];
  param_1[0xb] = fVar3 * fVar6 + param_1[0xb];
  return;
}

// 01013DE0  FUN_01013de0  size=127  [run]
undefined4 __fastcall FUN_01013de0(float *param_1,undefined4 param_2,float *param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 in_EAX;
  uint uVar4;
  undefined4 uVar5;
  
  auVar1._4_4_ = -(uint)(ABS(param_1[1] - param_3[1]) < param_4);
  auVar1._0_4_ = -(uint)(ABS(*param_1 - *param_3) < param_4);
  auVar1._8_4_ = -(uint)(ABS(param_1[2] - param_3[2]) < param_4);
  auVar1._12_4_ = -(uint)(ABS(param_1[3] - param_3[3]) < param_4);
  uVar4 = movmskps(in_EAX,auVar1);
  if ((((char)(uVar4 & 7) == '\a') &&
      (auVar2._4_4_ = -(uint)(ABS(param_1[5] - param_3[5]) < param_4),
      auVar2._0_4_ = -(uint)(ABS(param_1[4] - param_3[4]) < param_4),
      auVar2._8_4_ = -(uint)(ABS(param_1[6] - param_3[6]) < param_4),
      auVar2._12_4_ = -(uint)(ABS(param_1[7] - param_3[7]) < param_4),
      uVar5 = movmskps(param_2,auVar2), ((byte)uVar5 & 7) == 7)) &&
     (auVar3._4_4_ = -(uint)(ABS(param_1[9] - param_3[9]) < param_4),
     auVar3._0_4_ = -(uint)(ABS(param_1[8] - param_3[8]) < param_4),
     auVar3._8_4_ = -(uint)(ABS(param_1[10] - param_3[10]) < param_4),
     auVar3._12_4_ = -(uint)(ABS(param_1[0xb] - param_3[0xb]) < param_4),
     uVar5 = movmskps(uVar4 & 7,auVar3), ((byte)uVar5 & 7) == 7)) {
    return 1;
  }
  return 0;
}

// 01013E60  FUN_01013e60  size=125  [run]
undefined4 __fastcall FUN_01013e60(float *param_1,undefined4 param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  fVar4 = *param_4;
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = param_4[3];
  auVar1._4_4_ = -(uint)(ABS(param_1[1] - param_3[1]) < fVar5);
  auVar1._0_4_ = -(uint)(ABS(*param_1 - *param_3) < fVar4);
  auVar1._8_4_ = -(uint)(ABS(param_1[2] - param_3[2]) < fVar6);
  auVar1._12_4_ = -(uint)(ABS(param_1[3] - param_3[3]) < fVar7);
  uVar8 = movmskps(param_2,auVar1);
  if (((((byte)uVar8 & 7) == 7) &&
      (auVar2._4_4_ = -(uint)(ABS(param_1[5] - param_3[5]) < fVar5),
      auVar2._0_4_ = -(uint)(ABS(param_1[4] - param_3[4]) < fVar4),
      auVar2._8_4_ = -(uint)(ABS(param_1[6] - param_3[6]) < fVar6),
      auVar2._12_4_ = -(uint)(ABS(param_1[7] - param_3[7]) < fVar7),
      uVar8 = movmskps(param_4,auVar2), ((byte)uVar8 & 7) == 7)) &&
     (auVar3._4_4_ = -(uint)(ABS(param_1[9] - param_3[9]) < fVar5),
     auVar3._0_4_ = -(uint)(ABS(param_1[8] - param_3[8]) < fVar4),
     auVar3._8_4_ = -(uint)(ABS(param_1[10] - param_3[10]) < fVar6),
     auVar3._12_4_ = -(uint)(ABS(param_1[0xb] - param_3[0xb]) < fVar7),
     uVar8 = movmskps(param_1,auVar3), ((byte)uVar8 & 7) == 7)) {
    return 1;
  }
  return 0;
}

// 01013F90  FUN_01013f90  size=216  [run]
undefined4 __thiscall FUN_01013f90(float *param_1,float param_2)

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
  undefined1 auVar23 [16];
  
  fVar2 = param_1[8];
  fVar3 = param_1[9];
  fVar4 = param_1[10];
  fVar5 = param_1[0xb];
  fVar6 = param_1[4];
  fVar7 = param_1[5];
  fVar8 = param_1[6];
  fVar9 = param_1[7];
  fVar20 = fVar7 * fVar4 - fVar8 * fVar3;
  fVar21 = fVar8 * fVar2 - fVar6 * fVar4;
  fVar22 = fVar6 * fVar3 - fVar7 * fVar2;
  fVar10 = *param_1;
  fVar11 = param_1[1];
  fVar12 = param_1[2];
  fVar13 = param_1[3];
  fVar14 = fVar10 * fVar20;
  fVar15 = fVar11 * fVar21;
  fVar16 = fVar12 * fVar22;
  fVar17 = fVar15 + fVar14 + fVar16;
  fVar18 = fVar15 + fVar14 + fVar16;
  fVar19 = fVar15 + fVar14 + fVar16;
  fVar16 = fVar15 + fVar14 + fVar16;
  auVar23._0_8_ = CONCAT44(fVar18,fVar17) & 0x7fffffff7fffffff;
  auVar23._8_4_ = ABS(fVar19);
  auVar23._12_4_ = ABS(fVar16);
  if (param_2 * param_2 * param_2 < ABS(fVar17)) {
    auVar1._4_4_ = fVar18;
    auVar1._0_4_ = fVar17;
    auVar1._8_4_ = fVar19;
    auVar1._12_4_ = fVar16;
    auVar23 = rcpps(auVar23,auVar1);
    fVar14 = (2.0 - auVar23._0_4_ * fVar17) * auVar23._0_4_;
    fVar15 = (2.0 - auVar23._4_4_ * fVar18) * auVar23._4_4_;
    fVar17 = (2.0 - auVar23._8_4_ * fVar19) * auVar23._8_4_;
    fVar16 = (2.0 - auVar23._12_4_ * fVar16) * auVar23._12_4_;
    *param_1 = fVar14 * fVar20;
    param_1[1] = fVar15 * fVar21;
    param_1[2] = fVar17 * fVar22;
    param_1[3] = fVar16 * (fVar9 * fVar5 - fVar9 * fVar5);
    param_1[4] = fVar14 * (fVar3 * fVar12 - fVar4 * fVar11);
    param_1[5] = fVar15 * (fVar4 * fVar10 - fVar2 * fVar12);
    param_1[6] = fVar17 * (fVar2 * fVar11 - fVar3 * fVar10);
    param_1[7] = fVar16 * (fVar5 * fVar13 - fVar5 * fVar13);
    param_1[8] = fVar14 * (fVar8 * fVar11 - fVar7 * fVar12);
    param_1[9] = fVar15 * (fVar6 * fVar12 - fVar8 * fVar10);
    param_1[10] = fVar17 * (fVar7 * fVar10 - fVar6 * fVar11);
    param_1[0xb] = fVar16 * (fVar9 * fVar13 - fVar9 * fVar13);
    FUN_01013480();
    return 0;
  }
  return 1;
}

// 01014070  FUN_01014070  size=249  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_01014070(float *param_1)

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
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar5 = param_1[8];
  fVar6 = param_1[9];
  fVar7 = param_1[10];
  fVar8 = param_1[0xb];
  fVar24 = fVar7 * fVar2 - fVar6 * fVar3;
  fVar25 = fVar5 * fVar3 - fVar7 * fVar1;
  fVar26 = fVar6 * fVar1 - fVar5 * fVar2;
  fVar9 = *param_1;
  fVar10 = param_1[1];
  fVar11 = param_1[2];
  fVar12 = param_1[3];
  fVar17 = fVar9 * fVar24;
  fVar18 = fVar10 * fVar25;
  fVar19 = fVar11 * fVar26;
  fVar20 = fVar18 + fVar17 + fVar19;
  fVar21 = fVar18 + fVar17 + fVar19;
  fVar22 = fVar18 + fVar17 + fVar19;
  fVar19 = fVar18 + fVar17 + fVar19;
  uVar13 = -(uint)(1.6940659e-21 < fVar20);
  uVar14 = -(uint)(1.6940659e-21 < fVar21);
  uVar15 = -(uint)(1.6940659e-21 < fVar22);
  uVar16 = -(uint)(1.6940659e-21 < fVar19);
  auVar23._0_4_ = uVar13 & (uint)fVar20;
  auVar23._4_4_ = uVar14 & (uint)fVar21;
  auVar23._8_4_ = uVar15 & (uint)fVar22;
  auVar23._12_4_ = uVar16 & (uint)fVar19;
  auVar27._0_4_ = ~uVar13 & (uint)DAT_01701b20;
  auVar27._4_4_ = ~uVar14 & DAT_01701b20._4_4_;
  auVar27._8_4_ = ~uVar15 & DAT_01701b20._8_4_;
  auVar27._12_4_ = ~uVar16 & DAT_01701b20._12_4_;
  auVar23 = auVar23 | auVar27;
  auVar27 = rcpps(_DAT_01701b20,auVar23);
  fVar17 = (float)((uint)((2.0 - auVar27._0_4_ * auVar23._0_4_) * auVar27._0_4_) & uVar13);
  fVar18 = (float)((uint)((2.0 - auVar27._4_4_ * auVar23._4_4_) * auVar27._4_4_) & uVar14);
  fVar19 = (float)((uint)((2.0 - auVar27._8_4_ * auVar23._8_4_) * auVar27._8_4_) & uVar15);
  fVar20 = (float)((uint)((2.0 - auVar27._12_4_ * auVar23._12_4_) * auVar27._12_4_) & uVar16);
  *param_1 = fVar17 * fVar24;
  param_1[1] = fVar18 * fVar25;
  param_1[2] = fVar19 * fVar26;
  param_1[3] = fVar20 * (fVar8 * fVar4 - fVar8 * fVar4);
  param_1[4] = fVar17 * (fVar6 * fVar11 - fVar7 * fVar10);
  param_1[5] = fVar18 * (fVar7 * fVar9 - fVar5 * fVar11);
  param_1[6] = fVar19 * (fVar5 * fVar10 - fVar6 * fVar9);
  param_1[7] = fVar20 * (fVar8 * fVar12 - fVar8 * fVar12);
  param_1[8] = fVar17 * (fVar3 * fVar10 - fVar2 * fVar11);
  param_1[9] = fVar18 * (fVar1 * fVar11 - fVar3 * fVar9);
  param_1[10] = fVar19 * (fVar2 * fVar9 - fVar1 * fVar10);
  param_1[0xb] = fVar20 * (fVar4 * fVar12 - fVar4 * fVar12);
  return;
}

// 01014170  FUN_01014170  size=74  [run]
void __thiscall FUN_01014170(undefined4 *param_1,undefined4 param_2)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_01013ae0(param_1,param_2);
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_34;
  param_1[4] = local_30;
  param_1[5] = uStack_2c;
  param_1[6] = uStack_28;
  param_1[7] = uStack_24;
  param_1[8] = local_20;
  param_1[9] = uStack_1c;
  param_1[10] = uStack_18;
  param_1[0xb] = uStack_14;
  return;
}

// 010141C0  FUN_010141c0  size=201  [run]
void __thiscall FUN_010141c0(undefined8 *param_1,float *param_2)

{
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  local_20 = (float)*param_1;
  fStack_1c = (float)((ulonglong)*param_1 >> 0x20);
  fStack_18 = (float)param_1[1];
  local_30 = (float)param_1[2];
  fStack_2c = (float)((ulonglong)param_1[2] >> 0x20);
  fStack_28 = (float)param_1[3];
  local_40 = (float)param_1[4];
  fStack_3c = (float)((ulonglong)param_1[4] >> 0x20);
  fStack_38 = (float)param_1[5];
  local_20 = (fStack_38 * fStack_2c - fStack_28 * fStack_3c) * local_20;
  local_30 = (fStack_18 * fStack_3c - fStack_38 * fStack_1c) * local_30;
  local_40 = (fStack_28 * fStack_1c - fStack_18 * fStack_2c) * local_40;
  *param_2 = local_30 + local_20 + local_40;
  param_2[1] = local_30 + local_20 + local_40;
  param_2[2] = local_30 + local_20 + local_40;
  param_2[3] = local_30 + local_20 + local_40;
  return;
}

// 01014420  FUN_01014420  size=12  [run]
void FUN_01014420(void)

{
  FUN_01014070();
  return;
}

// 01014430  FUN_01014430  size=65  [run]
void __thiscall FUN_01014430(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_40 [48];
  
  FUN_01013b90(param_1,param_2);
  FUN_01013ae0(param_2,local_40);
  return;
}

// 01014480  FUN_01014480  size=877  [run]
bool __thiscall
FUN_01014480(float *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,float param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  uint uVar13;
  float local_d0 [13];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float local_90 [13];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  int local_14;
  
  local_50 = *(undefined8 *)param_1;
  uStack_48 = *(undefined8 *)(param_1 + 2);
  local_40 = *(undefined8 *)(param_1 + 4);
  uVar3 = local_40;
  uStack_38 = *(undefined8 *)(param_1 + 6);
  local_30 = *(undefined8 *)(param_1 + 8);
  uVar4 = local_30;
  uStack_28 = *(undefined8 *)(param_1 + 10);
  uVar5 = uStack_28;
  *param_2 = 0x3f800000;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0x3f800000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3f800000;
  param_2[0xb] = 0;
  local_40._4_4_ = (undefined4)((ulonglong)local_40 >> 0x20);
  fVar12 = (param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2] +
            param_1[5] * param_1[5] + param_1[4] * param_1[4] + param_1[6] * param_1[6] +
           param_1[9] * param_1[9] + param_1[8] * param_1[8] + param_1[10] * param_1[10]) *
           param_5 * param_5;
  local_30._4_4_ = (float)((ulonglong)local_30 >> 0x20);
  fVar8 = ((float)local_30 * (float)local_30 + (float)local_40 * (float)local_40 +
          local_30._4_4_ * local_30._4_4_) * 2.0;
  local_14 = 0;
  uVar10 = (undefined4)uStack_28;
  uVar11 = local_40._4_4_;
  if (fVar12 < fVar8) {
    uVar13 = 0x80000000;
    local_40 = uVar3;
    local_30 = uVar4;
    uStack_28 = uVar5;
    do {
      fVar9 = 0.0;
      if (param_4 <= local_14) break;
      local_90[0xc] = ABS((float)local_30);
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      local_d0[0xc] = ABS((float)local_40);
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      iVar7 = 1;
      fVar8 = local_d0[0xc];
      if (local_d0[0xc] < local_90[0xc]) {
        iVar7 = 2;
        fVar8 = local_90[0xc];
      }
      if (fVar8 < ABS(local_30._4_4_)) {
        iVar7 = 2;
      }
      uVar6 = (uint)(fVar8 < ABS(local_30._4_4_));
      iVar1 = uVar6 + iVar7 * 4;
      fVar8 = *(float *)((int)&local_50 + iVar1 * 4);
      if (fVar8 == 0.0) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = (*(float *)((int)&local_50 + iVar7 * 0x14) -
                *(float *)((int)&local_50 + uVar6 * 0x14)) / (fVar8 * 2.0);
        fVar9 = SQRT(fVar8 * fVar8 + 1.0);
        if (fVar8 < 0.0) {
          fVar9 = fVar8 - fVar9;
        }
        else {
          fVar9 = fVar9 + fVar8;
        }
        fVar9 = 1.0 / fVar9;
        fVar8 = 1.0 / SQRT(fVar9 * fVar9 + 1.0);
        fVar9 = fVar8 * fVar9;
      }
      iVar2 = iVar7 + uVar6 * 4;
      local_90[0] = 1.0;
      local_90[1] = 0.0;
      local_90[2] = 0.0;
      local_90[3] = 0.0;
      local_90[4] = 0.0;
      local_90[5] = 1.0;
      local_90[6] = 0.0;
      local_90[7] = 0.0;
      local_90[8] = 0.0;
      local_90[9] = 0.0;
      local_90[10] = 1.0;
      local_90[0xb] = 0.0;
      local_d0[0] = 1.0;
      local_d0[1] = 0.0;
      local_d0[2] = 0.0;
      local_d0[3] = 0.0;
      local_d0[4] = 0.0;
      local_d0[5] = 1.0;
      local_d0[6] = 0.0;
      local_d0[7] = 0.0;
      local_d0[8] = 0.0;
      local_d0[9] = 0.0;
      local_d0[10] = 1.0;
      local_d0[0xb] = 0.0;
      local_90[uVar6 * 5] = fVar8;
      local_d0[uVar6 * 5] = fVar8;
      local_90[iVar1] = fVar9;
      local_90[iVar2] = (float)((uint)fVar9 ^ uVar13);
      local_d0[iVar1] = (float)((uint)fVar9 ^ uVar13);
      local_d0[iVar2] = fVar9;
      local_90[iVar7 * 5] = fVar8;
      local_d0[iVar7 * 5] = fVar8;
      FUN_01014170(local_90);
      FUN_01013ae0(local_d0,&local_50);
      FUN_01014170(local_90);
      local_14 = local_14 + 1;
      fVar8 = ((float)local_30 * (float)local_30 + (float)local_40 * (float)local_40 +
              local_30._4_4_ * local_30._4_4_) * 2.0;
      uVar10 = (undefined4)uStack_28;
      uVar11 = local_40._4_4_;
    } while (fVar12 < fVar8);
  }
  *param_3 = (undefined4)local_50;
  param_3[1] = uVar11;
  param_3[2] = uVar10;
  param_3[3] = uVar10;
  return fVar12 < fVar8;
}

// 01014FC0  FUN_01014fc0  size=19  [run]
bool __thiscall FUN_01014fc0(float *param_1,float *param_2)

{
  return *param_1 < *param_2 || *param_1 == *param_2;
}

// 01014FE0  FUN_01014fe0  size=26  [run]
void __thiscall FUN_01014fe0(float *param_1,int *param_2,float *param_3)

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

// 01015000  FUN_01015000  size=37  [run]
void __thiscall FUN_01015000(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

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
  return;
}

// 01015030  FUN_01015030  size=82  [run]
void FUN_01015030(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = *param_4;
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = *param_5;
  fVar8 = param_5[1];
  fVar9 = param_5[2];
  fVar10 = param_5[3];
  fVar11 = *param_6;
  fVar12 = param_6[1];
  fVar13 = param_6[2];
  fVar14 = param_6[3];
  *param_7 = param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1];
  param_7[1] = fVar3 * fVar6 + fVar1 * fVar4 + fVar2 * fVar5;
  param_7[2] = fVar9 * fVar13 + fVar7 * fVar11 + fVar8 * fVar12;
  param_7[3] = fVar10 * fVar14 + fVar8 * fVar12 + fVar10 * fVar14;
  return;
}

// 01015090  FUN_01015090  size=18  [run]
void FUN_01015090(undefined4 *param_1)

{
  *param_1 = 0x34000000;
  param_1[1] = 0x34000000;
  param_1[2] = 0x34000000;
  param_1[3] = 0x34000000;
  return;
}

// 010150B0  FUN_010150b0  size=20  [run]
void __thiscall FUN_010150b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 010150D0  FUN_010150d0  size=21  [run]
void __thiscall FUN_010150d0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 010150F0  FUN_010150f0  size=21  [run]
void __thiscall FUN_010150f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 01015110  FUN_01015110  size=21  [run]
void __thiscall FUN_01015110(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 01015130  FUN_01015130  size=21  [run]
void __thiscall FUN_01015130(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 01015150  FUN_01015150  size=21  [run]
void __thiscall FUN_01015150(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 01015170  FUN_01015170  size=18  [run]
void FUN_01015170(undefined4 *param_1)

{
  *param_1 = 0x40000000;
  param_1[1] = 0x40000000;
  param_1[2] = 0x40000000;
  param_1[3] = 0x40000000;
  return;
}

// 01015230  FUN_01015230  size=55  [run]
void __thiscall FUN_01015230(float *param_1,float *param_2,float *param_3)

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
  fVar1 = param_3[5];
  fVar2 = param_3[6];
  fVar3 = param_3[7];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  param_1[4] = param_3[4] * *param_2 + param_1[4];
  param_1[5] = fVar1 * fVar4 + param_1[5];
  param_1[6] = fVar2 * fVar5 + param_1[6];
  param_1[7] = fVar3 * fVar6 + param_1[7];
  fVar1 = param_3[9];
  fVar2 = param_3[10];
  fVar3 = param_3[0xb];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  param_1[8] = param_3[8] * *param_2 + param_1[8];
  param_1[9] = fVar1 * fVar4 + param_1[9];
  param_1[10] = fVar2 * fVar5 + param_1[10];
  param_1[0xb] = fVar3 * fVar6 + param_1[0xb];
  return;
}

// 01015280  FUN_01015280  size=63  [run]
int * __thiscall FUN_01015280(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  while ((*param_1 == 0 || (iVar1 = FUN_01015b90(param_2,*param_1), iVar1 != 0))) {
    param_1 = (int *)param_1[2];
    if (param_1 == (int *)0x0) {
      return (int *)0x0;
    }
  }
  return param_1;
}

// 010152C0  FUN_010152c0  size=126  [run]
void FUN_010152c0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  FUN_01025830(local_8);
  for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)param_2[2]) {
    FUN_01025470(*param_2,param_2);
  }
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)param_1[2]) {
    iVar1 = FUN_01025be0(*param_1,0);
    if ((iVar1 != 0) &&
       (*(undefined4 *)param_1[3] = **(undefined4 **)(iVar1 + 0xc), *(int *)param_1[3] != 0)) {
      FUN_01005e50();
    }
  }
  FUN_01025870();
  return;
}

// 01015340  FUN_01015340  size=125  [run]
void FUN_01015340(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  FUN_01025830(local_8);
  for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)param_2[2]) {
    FUN_01025470(*param_2,param_2);
  }
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)param_1[2]) {
    iVar1 = FUN_01025be0(*param_1,0);
    if (iVar1 != 0) {
      if (*(int *)param_1[3] != 0) {
        FUN_01005e60();
      }
      *(undefined4 *)param_1[3] = 0;
    }
  }
  FUN_01025870();
  return;
}

// 010153C0  FUN_010153c0  size=27  [run]
uint __fastcall FUN_010153c0(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 010153E0  FUN_010153e0  size=9  [run]
void FUN_010153e0(void)

{
  FUN_01025470();
  return;
}

// 010153F0  FUN_010153f0  size=9  [run]
void FUN_010153f0(void)

{
  FUN_01025be0();
  return;
}

// 01015400  FUN_01015400  size=8  [run]
undefined4 FUN_01015400(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01015420  FUN_01015420  size=13  [run]
void __thiscall FUN_01015420(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

// 01015450  FUN_01015450  size=25  [run]
undefined4 * __thiscall FUN_01015450(undefined4 *param_1,LPCRITICAL_SECTION param_2)

{
  *param_1 = param_2;
  EnterCriticalSection(param_2);
  return param_1;
}

// 01015480  FUN_01015480  size=14  [run]
undefined4 __fastcall FUN_01015480(undefined4 param_1)

{
  thunk_FUN_01024920();
  return param_1;
}

// 01015490  FUN_01015490  size=90  [run]
void __thiscall FUN_01015490(int *param_1,int param_2)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = DAT_01f90928;
  if (((*(ushort *)(param_1 + 2) & 0x8000) == 0) && (DAT_01f90928 != (LPCRITICAL_SECTION)0x0)) {
    EnterCriticalSection(DAT_01f90928);
    iVar1 = *param_1;
    if ((iVar1 == -0x3f) || ((iVar1 == -0x1f || (iVar1 == -0xf)))) {
      *param_1 = (-(uint)(param_2 != 1) & 0xffffffe0) - 0x1f;
    }
    *(short *)((int)param_1 + 10) = *(short *)((int)param_1 + 10) << 1;
    *(short *)(param_1 + 2) = (short)param_1[2] + 1;
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// 010154F0  FUN_010154f0  size=74  [run]
void __fastcall FUN_010154f0(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = DAT_01f90928;
  if (((*(ushort *)(param_1 + 2) & 0x8000) == 0) && (DAT_01f90928 != (LPCRITICAL_SECTION)0x0)) {
    EnterCriticalSection(DAT_01f90928);
    iVar1 = FUN_0101aaa0();
    *(short *)(param_1 + 2) = (short)param_1[2] + 1;
    *(ushort *)((int)param_1 + 10) = *(short *)((int)param_1 + 10) * 2 | 1;
    if (*param_1 == -0xf) {
      *param_1 = iVar1;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// 01015590  FUN_01015590  size=71  [run]
void __fastcall FUN_01015590(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = DAT_01f90928;
  if (((*(ushort *)(param_1 + 2) & 0x8000) == 0) && (DAT_01f90928 != (LPCRITICAL_SECTION)0x0)) {
    EnterCriticalSection(DAT_01f90928);
    *(ushort *)((int)param_1 + 10) = *(ushort *)((int)param_1 + 10) >> 1;
    *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + -1;
    if (*(short *)(param_1 + 2) == 0) {
      *param_1 = 0xfffffff1;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// 010155E0  FUN_010155e0  size=71  [run]
void __fastcall FUN_010155e0(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = DAT_01f90928;
  if (((*(ushort *)(param_1 + 2) & 0x8000) == 0) && (DAT_01f90928 != (LPCRITICAL_SECTION)0x0)) {
    EnterCriticalSection(DAT_01f90928);
    *(ushort *)((int)param_1 + 10) = *(ushort *)((int)param_1 + 10) >> 1;
    *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + -1;
    if (*(short *)(param_1 + 2) == 0) {
      *param_1 = 0xfffffff1;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// 01015650  FUN_01015650  size=10  [run]
void __fastcall FUN_01015650(int param_1)

{
  *(ushort *)(param_1 + 8) = *(ushort *)(param_1 + 8) | 0x8000;
  return;
}

// 01015660  FUN_01015660  size=33  [run]
void __fastcall FUN_01015660(undefined4 *param_1)

{
  if (((*(ushort *)(param_1 + 2) & 0x8000) != 0) || (DAT_01f90928 == 0)) {
    *param_1 = 0xfffffff1;
    *(undefined2 *)(param_1 + 2) = 0;
  }
  return;
}

// 010156C0  FUN_010156c0  size=169  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010156c0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x18);
  if (iVar2 == 0) {
    DAT_01f90928 = 0;
  }
  else {
    DAT_01f90928 = FUN_01015ac0(1000);
  }
  iVar2 = DAT_01f909ac;
  if ((DAT_01f909ac == 0) && (iVar2 = FUN_010247d0(), DAT_01f909ac != 0)) {
    FUN_01005e60();
  }
  DAT_01f909ac = iVar2;
  _DAT_01f90920 = DAT_01f909ac;
  _DAT_01f9092c = 0;
  _DAT_01f90930 = 0;
  _DAT_01f90934 = 0x80000000;
  _DAT_01f9093c = 0xffffffff;
  _DAT_01f90940 = 0xffffffff;
  _DAT_01f90924 = &DAT_01f9092c;
  _DAT_01f90938 = param_1;
  return;
}

// 010157E0  FUN_010157e0  size=160  [run]
void FUN_010157e0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_90;
  uint local_88;
  
  FUN_01026840(param_1);
  iVar1 = FUN_01025cc0("Cannot find symbol",0,0x7fffffff);
  if (iVar1 == -1) {
    iVar1 = FUN_01025dc0(&DAT_016c505c,0,0x7fffffff);
    if (iVar1 != -1) {
      FUN_010260c0(iVar1 + 1);
    }
    FUN_010267c0(local_90);
  }
  if (-1 < (int)local_88) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_90,local_88 & 0x3fffffff);
  }
  return;
}

// 01015880  FUN_01015880  size=39  [run]
void FUN_01015880(undefined4 param_1)

{
  if (DAT_01f909ac != 0) {
    FUN_01005e60();
    DAT_01f909ac = param_1;
    return;
  }
  DAT_01f909ac = param_1;
  return;
}

// 010158F0  FUN_010158f0  size=44  [run]
void __thiscall FUN_010158f0(undefined4 *param_1,undefined4 param_2)

{
  param_1[3] = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  return;
}

// 01015930  FUN_01015930  size=31  [run]
void FUN_01015930(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01015950  FUN_01015950  size=39  [run]
void FUN_01015950(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x18);
  }
  return;
}

// 01015980  FUN_01015980  size=55  [run]
LPCRITICAL_SECTION __thiscall FUN_01015980(LPCRITICAL_SECTION param_1,byte param_2)

{
  LPVOID pvVar1;
  
  DeleteCriticalSection(param_1);
  if (((param_2 & 1) != 0) && (param_1 != (LPCRITICAL_SECTION)0x0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x18);
  }
  return param_1;
}

// 010159C0  FUN_010159c0  size=57  [run]
void __fastcall FUN_010159c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01015A00  FUN_01015a00  size=57  [run]
void __fastcall FUN_01015a00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01015A40  FUN_01015a40  size=57  [run]
void __fastcall FUN_01015a40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01015A80  FUN_01015a80  size=57  [run]
void __fastcall FUN_01015a80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01015AC0  FUN_01015ac0  size=49  [run]
LPCRITICAL_SECTION __thiscall FUN_01015ac0(LPCRITICAL_SECTION param_1,DWORD param_2)

{
  DWORD dwSpinCount;
  
  dwSpinCount = param_2;
  if (param_2 == 0) {
    FUN_0100efe0(&param_2);
    dwSpinCount = param_2 * 1000;
  }
  InitializeCriticalSectionAndSpinCount(param_1,dwSpinCount);
  return param_1;
}

// 01015B00  FUN_01015b00  size=18  [run]
char FUN_01015b00(char param_1)

{
  if ((byte)(param_1 + 0x9fU) < 0x1a) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}

// 01015B20  FUN_01015b20  size=18  [run]
char FUN_01015b20(char param_1)

{
  if ((byte)(param_1 + 0xbfU) < 0x1a) {
    param_1 = param_1 + ' ';
  }
  return param_1;
}

// 01015B40  FUN_01015b40  size=9  [run]
void FUN_01015b40(char *param_1,size_t param_2,char *param_3,va_list param_4)

{
  __vsnprintf(param_1,param_2,param_3,param_4);
  return;
}

// 01015B50  FUN_01015b50  size=29  [run]
void FUN_01015b50(char *param_1,size_t param_2,char *param_3)

{
  __vsnprintf(param_1,param_2,param_3,&stack0x00000010);
  return;
}

// 01015B70  FUN_01015b70  size=25  [run]
void FUN_01015b70(char *param_1,char *param_2)

{
  _vsprintf(param_1,param_2,&stack0x0000000c);
  return;
}

// 01015B90  FUN_01015b90  size=55  [run]
int FUN_01015b90(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  
  while( true ) {
    bVar1 = *param_1;
    bVar2 = bVar1 < *param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = param_1[1];
    bVar2 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar2) - (uint)(bVar2 != 0);
}

// 01015BD0  FUN_01015bd0  size=9  [run]
void FUN_01015bd0(char *param_1,char *param_2,size_t param_3)

{
  _strncmp(param_1,param_2,param_3);
  return;
}

// 01015BE0  FUN_01015be0  size=79  [run]
undefined4 FUN_01015be0(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 *extraout_EDX;
  int extraout_EDX_00;
  
  param_1 = param_1 - (int)param_2;
  while( true ) {
    if ((param_2[param_1] == '\0') && (*param_2 == '\0')) {
      return 0;
    }
    cVar1 = FUN_01015b20(param_2[param_1]);
    cVar2 = FUN_01015b20(*extraout_EDX);
    if (cVar1 < cVar2) {
      return 0xffffffff;
    }
    if (cVar2 < cVar1) break;
    param_2 = (char *)(extraout_EDX_00 + 1);
  }
  return 1;
}

// 01015C30  FUN_01015c30  size=88  [run]
undefined4 FUN_01015c30(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  undefined1 *extraout_EDX;
  int extraout_EDX_00;
  int iVar3;
  
  iVar3 = 0;
  param_1 = param_1 - (int)param_2;
  while( true ) {
    if (((param_2[param_1] == '\0') && (*param_2 == '\0')) || (param_3 <= iVar3)) {
      return 0;
    }
    cVar1 = FUN_01015b20(param_2[param_1]);
    cVar2 = FUN_01015b20(*extraout_EDX);
    if (cVar1 < cVar2) {
      return 0xffffffff;
    }
    if (cVar2 < cVar1) break;
    iVar3 = iVar3 + 1;
    param_2 = (char *)(extraout_EDX_00 + 1);
  }
  return 1;
}

// 01015C90  FUN_01015c90  size=25  [run]
void FUN_01015c90(int param_1,char *param_2)

{
  char cVar1;
  
  param_1 = param_1 - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[param_1] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}

// 01015CB0  FUN_01015cb0  size=29  [run]
void FUN_01015cb0(char *param_1,char *param_2,size_t param_3)

{
  if (param_3 != 0) {
    _strncpy(param_1,param_2,param_3);
  }
  return;
}

// 01015CD0  FUN_01015cd0  size=27  [run]
int FUN_01015cd0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  return (int)param_1 - (int)pcVar1;
}

// 01015CF0  FUN_01015cf0  size=23  [run]
void FUN_01015cf0(char *param_1,int param_2)

{
  _strtoul(param_1,(char **)0x0,param_2);
  return;
}

// 01015D10  FUN_01015d10  size=23  [run]
longlong FUN_01015d10(char *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = __strtoi64(param_1,(char **)0x0,param_2);
  return lVar1;
}

// 01015D30  FUN_01015d30  size=19  [run]
void FUN_01015d30(undefined4 param_1)

{
  FUN_00fe0840(param_1,0);
  return;
}

// 01015D50  FUN_01015d50  size=9  [run]
void FUN_01015d50(void)

{
  FUN_00fdbbd0();
  return;
}

// 01015D60  FUN_01015d60  size=9  [run]
void FUN_01015d60(void)

{
  FUN_00fdc7b0();
  return;
}

// 01015D70  FUN_01015d70  size=9  [run]
void FUN_01015d70(char *param_1,int param_2)

{
  _strrchr(param_1,param_2);
  return;
}

// 01015D80  FUN_01015d80  size=43  [run]
undefined4 FUN_01015d80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01015cd0(param_1);
  uVar2 = FUN_01005cb0(param_2,iVar1 + 1);
  FUN_01015c90(uVar2,param_1);
  return uVar2;
}

// 01015DB0  FUN_01015db0  size=21  [run]
void FUN_01015db0(undefined4 param_1,undefined4 param_2)

{
  FUN_01005d00(param_2,param_1);
  return;
}

// 01015DD0  FUN_01015dd0  size=65  [run]
int FUN_01015dd0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01015cd0(param_1);
  if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  iVar2 = FUN_01005cb0(param_3,iVar1 + 1);
  FUN_01015cb0(iVar2,param_1,iVar1);
  *(undefined1 *)(iVar2 + iVar1) = 0;
  return iVar2;
}

// 01015E20  FUN_01015e20  size=41  [run]
char * FUN_01015e20(char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *extraout_EDX;
  char *pcVar3;
  
  cVar1 = *param_1;
  pcVar3 = param_1;
  while (cVar1 != '\0') {
    uVar2 = FUN_01015b20(*pcVar3);
    *extraout_EDX = uVar2;
    pcVar3 = extraout_EDX + 1;
    cVar1 = *pcVar3;
  }
  return param_1;
}

// 01015E50  FUN_01015e50  size=41  [run]
char * FUN_01015e50(char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 *extraout_EDX;
  char *pcVar3;
  
  cVar1 = *param_1;
  pcVar3 = param_1;
  while (cVar1 != '\0') {
    uVar2 = FUN_01015b00(*pcVar3);
    *extraout_EDX = uVar2;
    pcVar3 = extraout_EDX + 1;
    cVar1 = *pcVar3;
  }
  return param_1;
}

// 01015E80  FUN_01015e80  size=9  [run]
void FUN_01015e80(void *param_1,void *param_2,size_t param_3)

{
  FID_conflict__memcpy(param_1,param_2,param_3);
  return;
}

// 01015E90  FUN_01015e90  size=9  [run]
void FUN_01015e90(void *param_1,void *param_2,size_t param_3)

{
  FID_conflict__memcpy(param_1,param_2,param_3);
  return;
}

// 01015EA0  FUN_01015ea0  size=9  [run]
void FUN_01015ea0(void *param_1,int param_2,size_t param_3)

{
  _memset(param_1,param_2,param_3);
  return;
}

// 01015EB0  FUN_01015eb0  size=118  [run]
uint FUN_01015eb0(byte *param_1,byte *param_2,uint param_3)

{
  int iVar1;
  
  for (; 3 < param_3; param_3 = param_3 - 4) {
    if (*(int *)param_1 != *(int *)param_2) goto LAB_01015edb;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_01015edb:
  iVar1 = (uint)*param_1 - (uint)*param_2;
  if (iVar1 == 0) {
    if (param_3 < 2) {
      return 0;
    }
    iVar1 = (uint)param_1[1] - (uint)param_2[1];
    if (iVar1 == 0) {
      if (param_3 < 3) {
        return 0;
      }
      iVar1 = (uint)param_1[2] - (uint)param_2[2];
      if (iVar1 == 0) {
        if (param_3 < 4) {
          return 0;
        }
        iVar1 = (uint)param_1[3] - (uint)param_2[3];
      }
    }
  }
  return iVar1 >> 0x1f | 1;
}

// 01015F30  FUN_01015f30  size=46  [run]
void FUN_01015f30(undefined1 *param_1,int param_2,char *param_3)

{
  char cVar1;
  
  cVar1 = *param_3;
  if (cVar1 != '\0') {
    param_2 = param_2 - (int)param_3;
    do {
      if (param_3[param_2] != cVar1) {
        *param_1 = 0;
        return;
      }
      cVar1 = param_3[1];
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
  }
  *param_1 = 1;
  return;
}

// 01015F60  FUN_01015f60  size=78  [run]
void FUN_01015f60(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_01015cd0(param_2);
  iVar2 = FUN_01015cd0(param_3);
  if (iVar1 < iVar2) {
LAB_01015f81:
    *param_1 = 0;
    return;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (*(char *)((iVar1 - iVar2) + param_2 + iVar3) != *(char *)(iVar3 + param_3))
      goto LAB_01015f81;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  *param_1 = 1;
  return;
}

// 01015FB0  FUN_01015fb0  size=36  [run]
int FUN_01015fb0(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = FUN_01015d70(param_1,(int)param_2);
  if (iVar1 != 0) {
    return iVar1 - param_1;
  }
  return -1;
}

// 01015FE0  FUN_01015fe0  size=69  [run]
int FUN_01015fe0(int param_1,char param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      if (*(char *)(iVar1 + param_1) == '\0') {
        return -1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3);
  }
  for (; (param_3 < param_4 && (*(char *)(param_3 + param_1) != '\0')); param_3 = param_3 + 1) {
    if (*(char *)(param_3 + param_1) == param_2) {
      return param_3;
    }
  }
  return -1;
}

// 01016030  FUN_01016030  size=31  [run]
void FUN_01016030(undefined4 *param_1,int param_2)

{
  param_2 = param_2 >> 4;
  while (param_2 = param_2 + -1, -1 < param_2) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  return;
}

// 01016050  FUN_01016050  size=33  [run]
void FUN_01016050(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01015db0(param_1,*(undefined4 *)((int)pvVar1 + 0x2c));
  return;
}

// 01016080  FUN_01016080  size=33  [run]
void FUN_01016080(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01015d80(param_1,*(undefined4 *)((int)pvVar1 + 0x2c));
  return;
}

// 010160B0  FUN_010160b0  size=37  [run]
void FUN_010160b0(undefined4 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01015dd0(param_1,param_2,*(undefined4 *)((int)pvVar1 + 0x2c));
  return;
}

// 010160E0  FUN_010160e0  size=156  [run]
undefined1 * FUN_010160e0(undefined1 *param_1,int param_2,char *param_3,int *param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = FUN_01015d50(param_2,param_3);
  *param_1 = 0;
  while( true ) {
    if (iVar4 == 0) {
      return param_1;
    }
    uVar2 = param_4[2];
    *param_1 = 1;
    if (param_4[1] == (uVar2 & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,param_4,4);
    }
    *(int *)(*param_4 + param_4[1] * 4) = iVar4 - param_2;
    param_4[1] = param_4[1] + 1;
    if (param_5 == 0) break;
    iVar4 = FUN_01015d50(pcVar3 + (iVar4 - (int)(param_3 + 1)),param_3);
  }
  return param_1;
}

// 01016180  FUN_01016180  size=34  [run]
void FUN_01016180(int param_1,int param_2,undefined4 *param_3)

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

// 010161B0  FUN_010161b0  size=29  [run]
void FUN_010161b0(undefined4 *param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  return;
}

// 010161D0  FUN_010161d0  size=57  [run]
void __thiscall FUN_010161d0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01016210  FUN_01016210  size=58  [run]
void __thiscall FUN_01016210(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01016260  FUN_01016260  size=18  [run]
undefined * FUN_01016260(int param_1)

{
  return &DAT_018ea820 + param_1 * 0xc;
}

// 01016280  FUN_01016280  size=43  [run]
undefined4 FUN_01016280(void)

{
  int in_EAX;
  
  if ((-1 < in_EAX) &&
     ((((in_EAX < 0x14 || (in_EAX == 0x1c)) || (in_EAX == 0x1e)) ||
      (((in_EAX == 0x1d || (in_EAX == 0x20)) || (in_EAX == 0x21)))))) {
    return 1;
  }
  return 0;
}

// 010162B0  FUN_010162b0  size=53  [run]
void __fastcall FUN_010162b0(undefined4 param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    FUN_01026140((&PTR_DAT_018ea824)[param_3 * 3]);
    return;
  }
  FUN_010262e0(param_1,"%s[%i]",(&PTR_DAT_018ea824)[param_3 * 3],param_2);
  return;
}

// 010162F0  FUN_010162f0  size=4  [run]
undefined4 __fastcall FUN_010162f0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 01016300  FUN_01016300  size=4  [run]
undefined4 __fastcall FUN_01016300(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// 01016310  FUN_01016310  size=4  [run]
undefined4 __fastcall FUN_01016310(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 01016320  FUN_01016320  size=5  [run]
int __fastcall FUN_01016320(int param_1)

{
  return (int)*(short *)(param_1 + 0xe);
}

// 01016330  FUN_01016330  size=4  [run]
undefined4 __fastcall FUN_01016330(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 01016340  FUN_01016340  size=22  [run]
undefined4 __fastcall FUN_01016340(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = FUN_01009350();
    return uVar1;
  }
  return 0;
}

// 01016360  FUN_01016360  size=185  [run]
int __fastcall FUN_01016360(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined8 uVar3;
  
  switch(*(undefined1 *)(param_1 + 0xc)) {
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
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x21:
  case 0x22:
    break;
  default:
    return -1;
  case 0x18:
  case 0x1f:
    iVar1 = FUN_01016320();
    if (iVar1 == 0) {
      iVar2 = 1;
      iVar1 = extraout_ECX;
    }
    else {
      iVar2 = FUN_01016320();
      iVar1 = extraout_ECX_00;
    }
    return *(short *)(&DAT_018ea828 + (uint)*(byte *)(iVar1 + 0xd) * 0xc) * iVar2;
  case 0x19:
    iVar1 = FUN_01016320();
    if (iVar1 == 0) {
      FUN_010162f0();
      iVar1 = FUN_01009750();
      return iVar1;
    }
    iVar1 = FUN_01016320();
    FUN_010162f0();
    iVar2 = FUN_01009750();
    return iVar2 * iVar1;
  }
  uVar3 = FUN_01016320();
  if ((int)uVar3 == 0) {
    return (int)*(short *)(&DAT_018ea828 + (int)((ulonglong)uVar3 >> 0x20) * 0xc);
  }
  uVar3 = FUN_01016320();
  return (int)*(short *)(&DAT_018ea828 + (int)((ulonglong)uVar3 >> 0x20) * 0xc) * (int)uVar3;
}

// 01016450  FUN_01016450  size=32  [run]
void __thiscall FUN_01016450(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = (*(ushort *)(param_1 + 0x10) & 0x200) == 0x200;
  return;
}

// 01016470  FUN_01016470  size=152  [run]
int __fastcall FUN_01016470(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xc);
  if ((uVar1 == 0x18) || (uVar1 == 0x1f)) {
    uVar1 = (uint)*(byte *)(param_1 + 0xd);
  }
  if (uVar1 == 0x19) {
    iVar3 = 1;
    iVar4 = 0;
    iVar2 = FUN_01009570();
    if (0 < iVar2) {
      do {
        FUN_01009590(iVar4);
        iVar2 = FUN_01016470();
        if (iVar3 < iVar2) {
          FUN_01009590(iVar4);
          iVar3 = FUN_01016470();
        }
        iVar4 = iVar4 + 1;
        iVar2 = FUN_01009570();
      } while (iVar4 < iVar2);
    }
  }
  else {
    iVar3 = (int)*(short *)(&DAT_018ea82a + uVar1 * 0xc);
  }
  if (((*(ushort *)(param_1 + 0x10) & 0x180) != 0) &&
     (iVar2 = (-(uint)((*(ushort *)(param_1 + 0x10) & 0x100) != 0) & 8) + 8, iVar3 < iVar2)) {
    iVar3 = iVar2;
  }
  return iVar3;
}

// 01016510  FUN_01016510  size=5  [run]
undefined1 __fastcall FUN_01016510(int param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}

// 01016520  FUN_01016520  size=63  [run]
int FUN_01016520(void)

{
  int iVar1;
  
  iVar1 = FUN_01016510();
  if (iVar1 != 0x18) {
    iVar1 = FUN_01016510();
    if (iVar1 != 0x1f) {
      iVar1 = FUN_01016510();
      if (iVar1 != 0x19) {
        iVar1 = FUN_01016510();
        return (int)*(short *)(&DAT_018ea828 + iVar1 * 0xc);
      }
      FUN_010162f0();
      iVar1 = FUN_01009750();
      return iVar1;
    }
  }
  return -1;
}

// 01016560  FUN_01016560  size=29  [run]
void __thiscall FUN_01016560(int param_1,undefined4 param_2)

{
  FUN_01027640(*(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd),param_2);
  return;
}

// 01016580  FUN_01016580  size=35  [run]
void __thiscall FUN_01016580(int param_1,undefined4 param_2,int param_3)

{
  FUN_01027760(*(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd),param_2,param_3,
               param_3 >> 0x1f);
  return;
}

// 010165B0  FUN_010165b0  size=373  [run]
int FUN_010165b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  
  iVar1 = FUN_01015bd0(param_1,"enum ",5);
  if (iVar1 == 0) {
    return 0x18;
  }
  iVar1 = FUN_01015bd0(param_1,"flags ",6);
  if (iVar1 == 0) {
    return 0x1f;
  }
  iVar1 = FUN_01015bd0(param_1,"hkArray<",8);
  if (iVar1 == 0) {
    return 0x16;
  }
  iVar1 = FUN_01015bd0(param_1,"hkRelArray<",0xb);
  if (iVar1 == 0) {
    return 0x22;
  }
  iVar1 = FUN_01015bd0(param_1,"hkSimpleArray<",0xe);
  if (iVar1 == 0) {
    return 0x1a;
  }
  iVar1 = FUN_01015bd0(param_1,"char*",5);
  if (iVar1 == 0) {
    return 0x1d;
  }
  iVar1 = FUN_01015bd0(param_1,"hkStringPtr",0xb);
  if (iVar1 == 0) {
    return 0x21;
  }
  iVar1 = FUN_01015d70(param_1,0x2a);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 1) == '\0')) {
    return 0x14;
  }
  FUN_01026840(param_1);
  iVar1 = FUN_01015d60(param_1,0x5b);
  if (iVar1 != 0) {
    FUN_01026570(0,iVar1 - param_1);
  }
  iVar1 = 0;
  ppuVar3 = &PTR_DAT_018ea824;
  do {
    iVar2 = FUN_01025e60(*ppuVar3);
    if (iVar2 != 0) {
      FUN_01015a80();
      return iVar1;
    }
    ppuVar3 = ppuVar3 + 3;
    iVar1 = iVar1 + 1;
  } while ((int)ppuVar3 < 0x18ea9c8);
  FUN_01015a80();
  return 0;
}

// 01016730  FUN_01016730  size=423  [run]
undefined4 FUN_01016730(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_90;
  uint local_88;
  
  iVar1 = FUN_01015bd0(param_1,"hkArray<",8);
  if (iVar1 == 0) {
    iVar1 = FUN_01015cd0(param_1 + 8);
    FUN_01026950(param_1 + 8,iVar1 + -1);
    uVar2 = FUN_010165b0(local_90);
    if (-1 < (int)local_88) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_90,local_88 & 0x3fffffff);
    }
    return uVar2;
  }
  iVar1 = FUN_01015bd0(param_1,"hkRelArray<",0xb);
  if (iVar1 == 0) {
    iVar1 = FUN_01015cd0(param_1 + 0xb);
    FUN_01026950(param_1 + 0xb,iVar1 + -1);
    uVar2 = FUN_010165b0(local_90);
    if (-1 < (int)local_88) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_90,local_88 & 0x3fffffff);
    }
    return uVar2;
  }
  iVar1 = FUN_01015bd0(param_1,"hkSimpleArray<",0xe);
  if (iVar1 == 0) {
    iVar1 = FUN_01015cd0(param_1 + 0xe);
    FUN_01026950(param_1 + 0xe,iVar1 + -1);
    uVar2 = FUN_010165b0(local_90);
    FUN_01015a80();
    return uVar2;
  }
  iVar1 = FUN_01015d60(param_1,0x5b);
  if (iVar1 != 0) {
    iVar3 = FUN_01015d60(param_1,0x5d);
    FUN_01026950(iVar1 + 1,(iVar3 - iVar1) + -1);
    uVar2 = FUN_01015cf0(local_90,0);
    FUN_01015a80();
    return uVar2;
  }
  return 0;
}

// 010168E0  FUN_010168e0  size=678  [run]
int __thiscall FUN_010168e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  int extraout_ECX;
  undefined4 extraout_EDX;
  undefined1 *local_90;
  int local_8c;
  uint local_88;
  undefined1 local_84 [128];
  
  bVar1 = *(byte *)(param_1 + 0xc);
  if (*(int *)(param_1 + 4) == 0) {
    pcVar4 = "unknown";
  }
  else {
    pcVar4 = (char *)FUN_010093a0();
  }
  if (*(undefined4 **)(param_1 + 8) == (undefined4 *)0x0) {
    pcVar5 = "unknown";
  }
  else {
    pcVar5 = (char *)**(undefined4 **)(param_1 + 8);
  }
  local_90 = local_84;
  local_88 = 0x80000080;
  local_8c = 1;
  local_84[0] = 0;
  if (((((bVar1 < 0x14) || (bVar1 == 0x1c)) || (bVar1 == 0x1e)) ||
      ((bVar1 == 0x1d || (bVar1 == 0x20)))) || ((bVar1 == 0x21 || (bVar1 == 0x1b)))) {
    FUN_010162b0(bVar1);
  }
  else if (bVar1 == 0x14) {
    if (*(int *)(param_1 + 4) == 0) {
      if (*(char *)(param_1 + 0xd) == '\x02') {
        FUN_01026140("char*");
      }
      else {
        FUN_01026140("void*");
      }
    }
    else {
      uVar6 = FUN_010093a0();
      FUN_010262e0(&local_90,"struct %s*",uVar6);
    }
  }
  else if (((bVar1 == 0x16) || (bVar1 == 0x1a)) || (bVar1 == 0x22)) {
    FUN_01016510();
    cVar3 = FUN_01016280();
    if (cVar3 == '\0') {
      if (extraout_ECX == 0x14) {
        if (*(int *)(param_1 + 4) == 0) {
          FUN_010262e0(&local_90,"%s&lt;void*&gt;",extraout_EDX);
        }
        else {
          FUN_010262e0(&local_90,"%s&lt;%s*&gt;",extraout_EDX,pcVar4);
        }
      }
      else if (extraout_ECX == 0x19) {
        FUN_010262e0(&local_90,"%s&lt;struct %s&gt;",extraout_EDX,pcVar4);
      }
    }
    else {
      FUN_010262e0(&local_90,"%s&lt;%s&gt;",extraout_EDX,(&PTR_DAT_018ea824)[extraout_ECX * 3]);
    }
  }
  else if (bVar1 == 0x18) {
    FUN_010262e0(&local_90,"enum %s",pcVar5);
  }
  else if (bVar1 == 0x1f) {
    FUN_010262e0(&local_90,"flags %s",pcVar5);
  }
  else if (bVar1 == 0x19) {
    if (*(short *)(param_1 + 0xe) == 0) {
      FUN_010262e0(&local_90,"struct %s",pcVar4);
    }
    else {
      FUN_010262e0(&local_90,"struct %s[%i]",pcVar4,(int)*(short *)(param_1 + 0xe));
    }
  }
  FUN_01015cb0(param_2,local_90,param_3);
  iVar2 = local_8c;
  local_8c = 0;
  if (-1 < (int)local_88) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_90,local_88 & 0x3fffffff);
  }
  return iVar2 + -1;
}

// 01016B90  FUN_01016b90  size=14  [run]
void __thiscall FUN_01016b90(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 01016BA0  FUN_01016ba0  size=16  [run]
ushort __thiscall FUN_01016ba0(ushort *param_1,ushort param_2)

{
  return *param_1 & param_2;
}

// 01016BB0  FUN_01016bb0  size=25  [run]
bool __thiscall FUN_01016bb0(ushort *param_1,ushort param_2)

{
  return (*param_1 & param_2) == param_2;
}

// 01016BD0  FUN_01016bd0  size=12  [run]
int __thiscall FUN_01016bd0(int *param_1,int param_2)

{
  return *param_1 + param_2;
}

// 01016C20  FUN_01016c20  size=32  [run]
void __thiscall FUN_01016c20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01016C40  FUN_01016c40  size=55  [run]
void __thiscall FUN_01016c40(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,1);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01016C80  FUN_01016c80  size=56  [run]
void __thiscall FUN_01016c80(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,1);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01016CC0  FUN_01016cc0  size=27  [run]
void __thiscall FUN_01016cc0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffff80;
  return;
}

// 01016CE0  FUN_01016ce0  size=67  [run]
void __thiscall FUN_01016ce0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + 1;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,1);
  }
  param_1[1] = iVar1;
  *(undefined1 *)(param_2 + *param_1) = 0;
  return;
}

// 01016D50  hkStreamWriter::vf1C  size=8  [run]
undefined4 hkStreamWriter::vf1C(void)

{
  return 1;
}

// 01016D60  hkStreamWriter::vf20  size=4  [run]
undefined4 hkStreamWriter::vf20(void)

{
  return 0xffffffff;
}

// 01016D70  hkStreamWriter::vf18  size=13  [run]
void hkStreamWriter::vf18(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}

// 01016D80  hkOArchive::hkOArchive_4  size=45  [run]
undefined4 * __thiscall
hkOArchive::hkOArchive_4(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = param_3;
  FUN_01006000();
  return param_1;
}

// 01016DB0  hkBaseObject::hkBaseObject_129  size=25  [run]
void __fastcall hkBaseObject::hkBaseObject_129(undefined4 *param_1)

{
  *param_1 = hkOArchive::vftable;
  FUN_010060a0();
  *param_1 = vftable;
  return;
}

// 01016DD0  FUN_01016dd0  size=23  [run]
void __fastcall FUN_01016dd0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(&stack0x00000004,1);
  return;
}

// 01016DF0  FUN_01016df0  size=23  [run]
void __fastcall FUN_01016df0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(&stack0x00000004,1);
  return;
}

// 01016E20  FUN_01016e20  size=366  [run]
void __thiscall FUN_01016e20(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 local_210 [512];
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = param_1;
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar6 = 0x200;
    iVar3 = (int)(0x200 / (longlong)param_3);
    uVar8 = param_3 * param_4;
    uVar4 = uVar8 & 0x800001ff;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffe00) + 1;
    }
    local_c = (int)uVar4 / param_3;
    iVar2 = iVar3;
    local_8 = param_2;
    for (; 0 < (int)uVar8; uVar8 = uVar8 - uVar6) {
      iVar7 = iVar3;
      param_2 = iVar2;
      if ((int)uVar8 < 0x200) {
        uVar6 = uVar4;
        iVar7 = local_c;
        param_2 = local_c;
      }
      FUN_01015e80(local_210,local_8,uVar6);
      iVar3 = iVar7;
      if (param_3 == 2) {
        puVar5 = local_210;
        if (0 < iVar7) {
          do {
            uVar1 = *puVar5;
            *puVar5 = puVar5[1];
            puVar5[1] = uVar1;
            puVar5 = puVar5 + 2;
            iVar7 = iVar7 + -1;
            iVar3 = param_2;
          } while (iVar7 != 0);
        }
      }
      else if (param_3 == 4) {
        if (0 < iVar7) {
          puVar5 = local_210 + 2;
          do {
            uVar1 = puVar5[-2];
            puVar5[-2] = puVar5[1];
            puVar5[1] = uVar1;
            uVar1 = puVar5[-1];
            puVar5[-1] = *puVar5;
            *puVar5 = uVar1;
            puVar5 = puVar5 + 4;
            iVar7 = iVar7 + -1;
            iVar3 = param_2;
          } while (iVar7 != 0);
        }
      }
      else if ((param_3 == 8) && (0 < iVar7)) {
        puVar5 = local_210 + 6;
        do {
          uVar1 = puVar5[-6];
          puVar5[-6] = puVar5[1];
          puVar5[1] = uVar1;
          uVar1 = puVar5[-5];
          puVar5[-5] = *puVar5;
          *puVar5 = uVar1;
          uVar1 = puVar5[-4];
          puVar5[-4] = puVar5[-1];
          puVar5[-1] = uVar1;
          uVar1 = puVar5[-3];
          puVar5[-3] = puVar5[-2];
          puVar5[-2] = uVar1;
          puVar5 = puVar5 + 8;
          iVar7 = iVar7 + -1;
          iVar3 = param_2;
        } while (iVar7 != 0);
      }
      (**(code **)(**(int **)(local_10 + 8) + 0x10))(local_210,uVar6);
      local_8 = local_8 + uVar6;
      iVar2 = param_2;
    }
    return;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(param_2,param_3 * param_4);
  return;
}

// 01016F90  FUN_01016f90  size=14  [run]
void __fastcall FUN_01016f90(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01016f9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  return;
}

// 01016FA0  FUN_01016fa0  size=13  [run]
void __thiscall FUN_01016fa0(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0xc) = param_2;
  return;
}

// 01016FB0  FUN_01016fb0  size=15  [run]
void __thiscall FUN_01016fb0(int param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0xc);
  return;
}

// 01016FC0  FUN_01016fc0  size=25  [run]
undefined4 __thiscall FUN_01016fc0(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
  return param_2;
}

// 01016FE0  FUN_01016fe0  size=4  [run]
undefined4 __fastcall FUN_01016fe0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 01016FF0  FUN_01016ff0  size=34  [run]
void __thiscall FUN_01016ff0(int param_1,undefined4 param_2)

{
  FUN_01006000();
  FUN_010060a0();
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 01017020  hkOArchive::hkOArchive  size=54  [run]
undefined4 * __thiscall
hkOArchive::hkOArchive(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 3) = param_3;
  uVar1 = (**(code **)(*DAT_01f909a4 + 0x10))(param_2);
  param_1[2] = uVar1;
  return param_1;
}

// 01017060  hkOArchive::hkOArchive_2  size=92  [run]
undefined4 * __thiscall
hkOArchive::hkOArchive_2
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 3) = param_4;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1c);
  *(undefined2 *)(iVar2 + 4) = 0x1c;
  uVar3 = hkBufferedStreamWriter::hkBufferedStreamWriter(param_2,param_3,0);
  param_1[2] = uVar3;
  return param_1;
}

// 010170C0  FUN_010170c0  size=20  [run]
void FUN_010170c0(void)

{
  FUN_01016e20(&stack0x00000004,2,1);
  return;
}

// 010170E0  FUN_010170e0  size=20  [run]
void FUN_010170e0(void)

{
  FUN_01016e20(&stack0x00000004,2,1);
  return;
}

// 01017100  FUN_01017100  size=20  [run]
void FUN_01017100(void)

{
  FUN_01016e20(&stack0x00000004,4,1);
  return;
}

// 01017120  FUN_01017120  size=20  [run]
void FUN_01017120(void)

{
  FUN_01016e20(&stack0x00000004,4,1);
  return;
}

// 01017140  FUN_01017140  size=20  [run]
void FUN_01017140(void)

{
  FUN_01016e20(&stack0x00000004,8,1);
  return;
}

// 01017160  FUN_01017160  size=20  [run]
void FUN_01017160(void)

{
  FUN_01016e20(&stack0x00000004,8,1);
  return;
}

// 01017180  FUN_01017180  size=20  [run]
void FUN_01017180(void)

{
  FUN_01016e20(&stack0x00000004,4,1);
  return;
}

// 010171A0  FUN_010171a0  size=20  [run]
void FUN_010171a0(void)

{
  FUN_01016e20(&stack0x00000004,8,1);
  return;
}

// 010171C0  FUN_010171c0  size=22  [run]
void FUN_010171c0(undefined4 param_1,undefined4 param_2)

{
  FUN_01016e20(param_1,1,param_2);
  return;
}

// 010171E0  FUN_010171e0  size=22  [run]
void FUN_010171e0(undefined4 param_1,undefined4 param_2)

{
  FUN_01016e20(param_1,1,param_2);
  return;
}

// 01017200  FUN_01017200  size=22  [run]
void FUN_01017200(undefined4 param_1,undefined4 param_2)

{
  FUN_01016e20(param_1,2,param_2);
  return;
}

// 01017220  FUN_01017220  size=22  [run]
void FUN_01017220(undefined4 param_1,undefined4 param_2)

{
  FUN_01016e20(param_1,2,param_2);
  return;
}

// 01017240  FUN_01017240  size=22  [run]
void FUN_01017240(undefined4 param_1,undefined4 param_2)

{
  FUN_01016e20(param_1,4,param_2);
  return;
}

// 01017260  FUN_01017260  size=22  [run]
void FUN_01017260(undefined4 param_1,undefined4 param_2)

{
  FUN_01016e20(param_1,4,param_2);
  return;
}

// 01017280  FUN_01017280  size=22  [run]
void FUN_01017280(undefined4 param_1,undefined4 param_2)

{
  FUN_01016e20(param_1,8,param_2);
  return;
}

// 010172A0  FUN_010172a0  size=22  [run]
void FUN_010172a0(undefined4 param_1,undefined4 param_2)

{
  FUN_01016e20(param_1,8,param_2);
  return;
}

// 010172C0  FUN_010172c0  size=22  [run]
void FUN_010172c0(undefined4 param_1,undefined4 param_2)

{
  FUN_01016e20(param_1,4,param_2);
  return;
}

// 010172E0  FUN_010172e0  size=54  [run]
void FUN_010172e0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      FUN_01017180((float)*(double *)(param_1 + iVar1 * 8));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 01017320  FUN_01017320  size=22  [run]
void FUN_01017320(undefined4 param_1,undefined4 param_2)

{
  FUN_01016e20(param_1,8,param_2);
  return;
}

// 01017340  hkOArchive::hkOArchive_3  size=84  [run]
undefined4 * __thiscall
hkOArchive::hkOArchive_3(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 3) = param_3;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x14);
  *(undefined2 *)(iVar2 + 4) = 0x14;
  uVar3 = hkArrayStreamWriter::hkArrayStreamWriter(param_2,1);
  param_1[2] = uVar3;
  return param_1;
}

// 010173B0  FUN_010173b0  size=37  [run]
void FUN_010173b0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 010173E0  FUN_010173e0  size=37  [run]
void FUN_010173e0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01017410  FUN_01017410  size=38  [run]
void FUN_01017410(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01017440  hkOArchive::vf00  size=52  [run]
int __thiscall hkOArchive::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_129();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01017480  FUN_01017480  size=62  [run]
void __fastcall FUN_01017480(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(iVar1 + 4) + 1;
  uVar4 = *(uint *)(iVar1 + 8) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar2 = uVar4 * 2;
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,iVar1,iVar3,1);
  }
  *(undefined1 *)((*(int **)(param_1 + 8))[1] + **(int **)(param_1 + 8)) = 0;
  return;
}

// 010174C0  hkArrayStreamWriter::hkArrayStreamWriter  size=100  [run]
undefined4 * __thiscall
hkArrayStreamWriter::hkArrayStreamWriter(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = param_2;
  param_1[3] = *(undefined4 *)(param_2 + 4);
  param_1[4] = param_3;
  iVar2 = *(int *)(param_2 + 4) + 1;
  uVar3 = *(uint *)(param_2 + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar1 = uVar3 * 2;
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar2,1);
  }
  *(undefined1 *)(((int *)param_1[2])[1] + *(int *)param_1[2]) = 0;
  return param_1;
}

// 01017530  hkArrayStreamWriter::vf0C  size=13  [run]
void hkArrayStreamWriter::vf0C(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 01017540  hkArrayStreamWriter::vf18  size=13  [run]
void hkArrayStreamWriter::vf18(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 01017550  hkArrayStreamWriter::vf20  size=4  [run]
undefined4 __fastcall hkArrayStreamWriter::vf20(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 01017560  hkArrayStreamWriter::vf08  size=6  [run]
undefined * hkArrayStreamWriter::vf08(void)

{
  return &DAT_01f90a08;
}

// 01017570  FUN_01017570  size=38  [run]
void FUN_01017570(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010175A0  FUN_010175a0  size=39  [run]
void FUN_010175a0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 010175D0  FUN_010175d0  size=97  [run]
undefined4 * __thiscall FUN_010175d0(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 01017640  hkBaseObject::hkBaseObject_127  size=118  [run]
void __fastcall hkBaseObject::hkBaseObject_127(undefined4 *param_1)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  
  *param_1 = hkArrayStreamWriter::vftable;
  if (param_1[4] == 0) {
    puVar1 = (undefined4 *)param_1[2];
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0;
      if (-1 < (int)puVar1[2]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar1,puVar1[2] & 0x3fffffff);
      }
      *puVar1 = 0;
      puVar1[2] = 0x80000000;
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(puVar1,0xc);
    }
    *param_1 = vftable;
    return;
  }
  *param_1 = vftable;
  return;
}

// 010176C0  hkArrayStreamWriter::vf00  size=52  [run]
int __thiscall hkArrayStreamWriter::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_127();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01017730  FUN_01017730  size=16  [run]
int __thiscall FUN_01017730(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 8;
}

// 01017740  FUN_01017740  size=62  [run]
undefined4 __thiscall FUN_01017740(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar2 = *(int **)(param_1 + 4);
    do {
      if (*piVar2 == param_2) {
        *param_3 = (*(int **)(param_1 + 4))[iVar1 * 2 + 1];
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return 1;
}

// 01017780  FUN_01017780  size=77  [run]
undefined4 __thiscall FUN_01017780(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = FUN_01015be0(param_2,*(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar2 * 8));
      if (iVar1 == 0) {
        *param_3 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 8);
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return 1;
}

// 010177D0  FUN_010177d0  size=145  [run]
void __thiscall FUN_010177d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  hkOArchive::hkOArchive_4(param_2,(uint)param_1 & 0xffffff00);
  uVar1 = *param_1;
  uVar4 = FUN_01015cd0(uVar1);
  FUN_01016f90(uVar1,uVar4);
  iVar2 = param_1[2];
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = param_1[1];
      uVar1 = *(undefined4 *)(iVar3 + 4 + iVar5 * 8);
      uVar4 = FUN_01015cd0(uVar1);
      FUN_01016f90(uVar1,uVar4);
      FUN_01017100(*(undefined4 *)(iVar3 + iVar5 * 8));
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  FUN_01017100(iVar2);
  hkBaseObject::hkBaseObject_129();
  return;
}

// 01017870  FUN_01017870  size=22  [run]
undefined4 __fastcall FUN_01017870(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = FUN_01009350();
    return uVar1;
  }
  return 0;
}

// 01017890  hkCrc32StreamWriter::hkCrc32StreamWriter  size=50  [run]
void hkCrc32StreamWriter::hkCrc32StreamWriter(void)

{
  undefined **local_10;
  undefined2 local_a;
  undefined4 local_8;
  
  local_a = 1;
  local_8 = 0xffffffff;
  local_10 = vftable;
  FUN_010177d0(&local_10);
  FUN_01009e30();
  return;
}

// 010178D0  FUN_010178d0  size=144  [run]
bool __thiscall FUN_010178d0(int param_1,uint param_2,int *param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  param_3[1] = 0;
  iVar1 = *(int *)(param_1 + 8);
  while ((iVar1 = iVar1 + -1, -1 < iVar1 && (param_2 != 0))) {
    uVar2 = *(uint *)(*(int *)(param_1 + 4) + iVar1 * 8);
    if ((uVar2 & param_2) == uVar2) {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar1 * 8 + 4);
      if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,param_3,4);
      }
      *(undefined4 *)(*param_3 + param_3[1] * 4) = uVar3;
      param_3[1] = param_3[1] + 1;
      param_2 = param_2 & ~uVar2;
    }
  }
  *param_4 = param_2;
  return param_2 != 0;
}

// 01017980  FUN_01017980  size=34  [run]
void FUN_01017980(int param_1,int param_2,undefined4 *param_3)

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

// 010179C0  FUN_010179c0  size=57  [run]
void __thiscall FUN_010179c0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01017A00  FUN_01017a00  size=58  [run]
void __thiscall FUN_01017a00(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01017EC0  FUN_01017ec0  size=1967  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01017ec0(undefined4 param_1,undefined4 *param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar22;
  float fVar25;
  undefined1 auVar18 [16];
  float fVar23;
  float fVar26;
  float fVar28;
  undefined1 auVar19 [16];
  float fVar24;
  float fVar27;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar29;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar34;
  float fVar40;
  float fVar41;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uVar49;
  undefined1 local_1d0 [16];
  float local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined1 local_190 [16];
  float local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
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
  float local_d0;
  float fStack_cc;
  float fStack_c8;
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
  undefined1 local_30 [8];
  float fStack_28;
  float fStack_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  FUN_01005190(param_1);
  FUN_0102ab50(param_1);
  fStack_104 = 0.0;
  fStack_f4 = 0.0;
  fStack_e4 = 0.0;
  *param_2 = local_120;
  param_2[1] = uStack_11c;
  param_2[2] = uStack_118;
  param_2[3] = uStack_114;
  fStack_d4 = 1.0;
  iVar14 = 0;
  local_90 = local_150;
  uStack_8c = uStack_14c;
  uStack_88 = uStack_148;
  uStack_84 = uStack_144;
  local_80 = local_140;
  uStack_7c = uStack_13c;
  uStack_78 = uStack_138;
  uStack_74 = uStack_134;
  local_70 = local_130;
  uStack_6c = uStack_12c;
  uStack_68 = uStack_128;
  uStack_64 = uStack_124;
  local_20 = 0x3f0000003f000000;
  uStack_18 = 0x3f0000003f000000;
  do {
    local_1c0 = local_90;
    uStack_1bc = uStack_8c;
    uStack_1b8 = uStack_88;
    uStack_1b4 = uStack_84;
    local_1b0 = local_80;
    uStack_1ac = uStack_7c;
    uStack_1a8 = uStack_78;
    uStack_1a4 = uStack_74;
    local_1a0 = local_70;
    uStack_19c = uStack_6c;
    uStack_198 = uStack_68;
    uStack_194 = uStack_64;
    local_180 = local_90;
    uStack_17c = uStack_8c;
    uStack_178 = uStack_88;
    uStack_174 = uStack_84;
    local_170 = local_80;
    uStack_16c = uStack_7c;
    uStack_168 = uStack_78;
    uStack_164 = uStack_74;
    local_160 = local_70;
    uStack_15c = uStack_6c;
    uStack_158 = uStack_68;
    uStack_154 = uStack_64;
    FUN_01013f90(0x34000000);
    FUN_01013480();
    local_c0 = local_180;
    fStack_bc = (float)uStack_17c;
    fStack_b8 = (float)uStack_178;
    fStack_b4 = (float)uStack_174;
    local_b0 = (float)local_170;
    fStack_ac = (float)uStack_16c;
    fStack_a8 = (float)uStack_168;
    fStack_a4 = (float)uStack_164;
    local_a0 = (float)local_160;
    fStack_9c = (float)uStack_15c;
    fStack_98 = (float)uStack_158;
    fStack_94 = (float)uStack_154;
    FUN_01013760(&local_1c0);
    FUN_01013730(&local_20,&local_c0);
    iVar14 = iVar14 + 1;
    if (0x1d < iVar14) break;
    cVar12 = FUN_01013de0(&local_180,0x34000000);
  } while (cVar12 == '\0');
  param_2[0x30] = local_90;
  param_2[0x31] = uStack_8c;
  param_2[0x32] = uStack_88;
  param_2[0x33] = uStack_84;
  param_2[0x34] = local_80;
  param_2[0x35] = uStack_7c;
  param_2[0x36] = uStack_78;
  param_2[0x37] = uStack_74;
  param_2[0x38] = local_70;
  param_2[0x39] = uStack_6c;
  param_2[0x3a] = uStack_68;
  param_2[0x3b] = uStack_64;
  local_20._0_4_ = (float)*(undefined8 *)(param_2 + 0x30);
  local_20._4_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
  uStack_18._0_4_ = (float)*(undefined8 *)(param_2 + 0x32);
  uStack_18._4_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 0x32) >> 0x20);
  fVar15 = (float)local_20 * (float)local_20;
  fVar22 = local_20._4_4_ * local_20._4_4_;
  fVar25 = (float)uStack_18 * (float)uStack_18;
  auVar35._4_4_ = fVar15;
  auVar35._0_4_ = fVar15;
  auVar35._8_4_ = fVar15;
  auVar35._12_4_ = fVar15;
  auVar47._0_4_ = fVar22 + fVar15 + fVar25;
  auVar47._4_4_ = fVar22 + fVar15 + fVar25;
  auVar47._8_4_ = fVar22 + fVar15 + fVar25;
  auVar47._12_4_ = fVar22 + fVar15 + fVar25;
  auVar36 = rsqrtps(auVar35,auVar47);
  fVar15 = auVar36._0_4_;
  fVar22 = auVar36._4_4_;
  fVar25 = auVar36._8_4_;
  fVar42 = auVar36._12_4_;
  auVar46._0_4_ = fVar15 * 0.5;
  auVar46._4_4_ = fVar22 * 0.5;
  auVar46._8_4_ = fVar25 * 0.5;
  auVar46._12_4_ = fVar42 * 0.5;
  local_c0 = (float)local_20 *
             (float)(~-(uint)(auVar47._0_4_ <= 0.0) &
                    (uint)((3.0 - fVar15 * auVar47._0_4_ * fVar15) * auVar46._0_4_));
  fStack_bc = local_20._4_4_ *
              (float)(~-(uint)(auVar47._4_4_ <= 0.0) &
                     (uint)((3.0 - fVar22 * auVar47._4_4_ * fVar22) * auVar46._4_4_));
  fStack_b8 = (float)uStack_18 *
              (float)(~-(uint)(auVar47._8_4_ <= 0.0) &
                     (uint)((3.0 - fVar25 * auVar47._8_4_ * fVar25) * auVar46._8_4_));
  fStack_b4 = uStack_18._4_4_ *
              (float)(~-(uint)(auVar47._12_4_ <= 0.0) &
                     (uint)((3.0 - fVar42 * auVar47._12_4_ * fVar42) * auVar46._12_4_));
  local_20._0_4_ = (float)*(undefined8 *)(param_2 + 0x34);
  local_20._4_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 0x34) >> 0x20);
  uStack_18._0_4_ = (float)*(undefined8 *)(param_2 + 0x36);
  fVar15 = (float)local_20 * (float)local_20;
  fVar22 = local_20._4_4_ * local_20._4_4_;
  fVar25 = (float)uStack_18 * (float)uStack_18;
  auVar36._0_4_ = fVar22 + fVar15 + fVar25;
  auVar36._4_4_ = fVar22 + fVar15 + fVar25;
  auVar36._8_4_ = fVar22 + fVar15 + fVar25;
  auVar36._12_4_ = fVar22 + fVar15 + fVar25;
  auVar47 = rsqrtps(auVar46,auVar36);
  fVar15 = auVar47._0_4_;
  fVar22 = auVar47._4_4_;
  fVar25 = auVar47._8_4_;
  fVar42 = auVar47._12_4_;
  uVar49 = *(undefined8 *)(param_2 + 0x38);
  uStack_18._4_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 0x36) >> 0x20);
  local_b0 = (float)(~-(uint)(auVar36._0_4_ <= 0.0) &
                    (uint)((3.0 - fVar15 * auVar36._0_4_ * fVar15) * fVar15 * 0.5)) *
             (float)local_20;
  fStack_ac = (float)(~-(uint)(auVar36._4_4_ <= 0.0) &
                     (uint)((3.0 - fVar22 * auVar36._4_4_ * fVar22) * fVar22 * 0.5)) *
              local_20._4_4_;
  fStack_a8 = (float)(~-(uint)(auVar36._8_4_ <= 0.0) &
                     (uint)((3.0 - fVar25 * auVar36._8_4_ * fVar25) * fVar25 * 0.5)) *
              (float)uStack_18;
  fStack_a4 = (float)(~-(uint)(auVar36._12_4_ <= 0.0) &
                     (uint)((3.0 - fVar42 * auVar36._12_4_ * fVar42) * fVar42 * 0.5)) *
              uStack_18._4_4_;
  uVar2 = *(undefined8 *)(param_2 + 0x3a);
  local_20._0_4_ = (float)uVar49;
  local_20._4_4_ = (float)((ulonglong)uVar49 >> 0x20);
  uStack_18._0_4_ = (float)uVar2;
  fVar15 = (float)local_20 * (float)local_20;
  fVar22 = local_20._4_4_ * local_20._4_4_;
  fVar25 = (float)uStack_18 * (float)uStack_18;
  auVar48._4_4_ = fVar15;
  auVar48._0_4_ = fVar15;
  auVar48._8_4_ = fVar15;
  auVar48._12_4_ = fVar15;
  auVar30._0_4_ = fVar22 + fVar15 + fVar25;
  auVar30._4_4_ = fVar22 + fVar15 + fVar25;
  auVar30._8_4_ = fVar22 + fVar15 + fVar25;
  auVar30._12_4_ = fVar22 + fVar15 + fVar25;
  local_60 = 3.0;
  fStack_5c = 3.0;
  fStack_58 = 3.0;
  fStack_54 = 3.0;
  local_50 = 0.5;
  fStack_4c = 0.5;
  fStack_48 = 0.5;
  fStack_44 = 0.5;
  _local_30 = rsqrtps(auVar48,auVar30);
  local_40 = (float)local_30._0_4_ * auVar30._0_4_ * (float)local_30._0_4_;
  fStack_3c = (float)local_30._4_4_ * auVar30._4_4_ * (float)local_30._4_4_;
  fStack_38 = fStack_28 * auVar30._8_4_ * fStack_28;
  fStack_34 = fStack_24 * auVar30._12_4_ * fStack_24;
  uStack_18._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
  local_a0 = (float)(~-(uint)(auVar30._0_4_ <= 0.0) &
                    (uint)((3.0 - local_40) * (float)local_30._0_4_ * 0.5)) * (float)local_20;
  fStack_9c = (float)(~-(uint)(auVar30._4_4_ <= 0.0) &
                     (uint)((3.0 - fStack_3c) * (float)local_30._4_4_ * 0.5)) * local_20._4_4_;
  fStack_98 = (float)(~-(uint)(auVar30._8_4_ <= 0.0) & (uint)((3.0 - fStack_38) * fStack_28 * 0.5))
              * (float)uStack_18;
  fStack_94 = (float)(~-(uint)(auVar30._12_4_ <= 0.0) & (uint)((3.0 - fStack_34) * fStack_24 * 0.5))
              * uStack_18._4_4_;
  bVar3 = (fStack_a8 * local_a0 - local_b0 * fStack_98) * fStack_bc +
          (fStack_ac * fStack_98 - fStack_a8 * fStack_9c) * local_c0 +
          (local_b0 * fStack_9c - fStack_ac * local_a0) * fStack_b8 < 0.0;
  if (bVar3) {
    local_c0 = local_c0 * -1.0;
    fStack_bc = fStack_bc * -1.0;
    fStack_b8 = fStack_b8 * -1.0;
    fStack_b4 = fStack_b4 * -1.0;
  }
  pfVar1 = (float *)(param_2 + 4);
  *(bool *)((int)param_2 + 0x32) = bVar3;
  local_20 = uVar49;
  uStack_18 = uVar2;
  FUN_010087a0(&local_c0);
  fVar15 = *pfVar1;
  fVar22 = (float)param_2[5];
  fVar25 = (float)param_2[6];
  fVar42 = (float)param_2[7];
  auVar18._0_4_ = fVar25 * fVar25 + fVar15 * fVar15;
  auVar18._4_4_ = fVar42 * fVar42 + fVar22 * fVar22;
  auVar18._8_4_ = fVar15 * fVar15 + fVar25 * fVar25;
  auVar18._12_4_ = fVar22 * fVar22 + fVar42 * fVar42;
  auVar37._0_4_ = auVar18._4_4_ + auVar18._0_4_;
  auVar37._4_4_ = auVar18._0_4_ + auVar18._4_4_;
  auVar37._8_4_ = auVar18._12_4_ + auVar18._8_4_;
  auVar37._12_4_ = auVar18._8_4_ + auVar18._12_4_;
  auVar47 = rsqrtps(auVar18,auVar37);
  fVar16 = auVar47._0_4_;
  fVar23 = auVar47._4_4_;
  fVar26 = auVar47._8_4_;
  fVar28 = auVar47._12_4_;
  *pfVar1 = fVar15 * (local_60 - fVar16 * auVar37._0_4_ * fVar16) * local_50 * fVar16;
  param_2[5] = fVar22 * (fStack_5c - fVar23 * auVar37._4_4_ * fVar23) * fStack_4c * fVar23;
  param_2[6] = fVar25 * (fStack_58 - fVar26 * auVar37._8_4_ * fVar26) * fStack_48 * fVar26;
  param_2[7] = fVar42 * (fStack_54 - fVar28 * auVar37._12_4_ * fVar28) * fStack_44 * fVar28;
  FUN_0100ac20(pfVar1);
  local_1a0 = *param_2;
  uStack_19c = param_2[1];
  uStack_198 = param_2[2];
  uStack_194 = param_2[3];
  FUN_01004c20(local_1d0);
  uVar49 = FUN_0102ab50(local_190);
  param_2[0x10] =
       fStack_10c * local_c0 + local_110 * local_d0 + fStack_108 * local_b0 + fStack_104 * local_a0;
  param_2[0x11] =
       fStack_10c * fStack_bc + local_110 * fStack_cc + fStack_108 * fStack_ac +
       fStack_104 * fStack_9c;
  param_2[0x12] =
       fStack_10c * fStack_b8 + local_110 * fStack_c8 + fStack_108 * fStack_a8 +
       fStack_104 * fStack_98;
  param_2[0x13] = fStack_10c * 0.0 + local_110 * 0.0 + fStack_108 * 0.0 + fStack_104 * 1.0;
  param_2[0x14] =
       fStack_fc * local_c0 + local_100 * local_d0 + fStack_f8 * local_b0 + fStack_f4 * local_a0;
  param_2[0x15] =
       fStack_fc * fStack_bc + local_100 * fStack_cc + fStack_f8 * fStack_ac + fStack_f4 * fStack_9c
  ;
  param_2[0x16] =
       fStack_fc * fStack_b8 + local_100 * fStack_c8 + fStack_f8 * fStack_a8 + fStack_f4 * fStack_98
  ;
  param_2[0x17] = fStack_fc * 0.0 + local_100 * 0.0 + fStack_f8 * 0.0 + fStack_f4 * 1.0;
  param_2[0x18] =
       fStack_ec * local_c0 + local_f0 * local_d0 + fStack_e8 * local_b0 + fStack_e4 * local_a0;
  param_2[0x19] =
       fStack_ec * fStack_bc + local_f0 * fStack_cc + fStack_e8 * fStack_ac + fStack_e4 * fStack_9c;
  param_2[0x1a] =
       fStack_ec * fStack_b8 + local_f0 * fStack_c8 + fStack_e8 * fStack_a8 + fStack_e4 * fStack_98;
  param_2[0x1b] = fStack_ec * 0.0 + local_f0 * 0.0 + fStack_e8 * 0.0 + fStack_e4 * 1.0;
  param_2[0x1c] =
       fStack_dc * local_c0 + local_e0 * local_d0 + fStack_d8 * local_b0 + fStack_d4 * local_a0;
  param_2[0x1d] =
       fStack_dc * fStack_bc + local_e0 * fStack_cc + fStack_d8 * fStack_ac + fStack_d4 * fStack_9c;
  param_2[0x1e] =
       fStack_dc * fStack_b8 + local_e0 * fStack_c8 + fStack_d8 * fStack_a8 + fStack_d4 * fStack_98;
  param_2[0x1f] = fStack_dc * 0.0 + local_e0 * 0.0 + fStack_d8 * 0.0 + fStack_d4 * 1.0;
  auVar36 = _DAT_01705820;
  fVar15 = DAT_01705820._12_4_;
  *(ulonglong *)(param_2 + 8) = CONCAT44(param_2[0x15],param_2[0x10]);
  *(ulonglong *)(param_2 + 10) = CONCAT44(0x3f800000,param_2[0x1a]);
  auVar19._4_4_ = -(uint)(ABS((float)param_2[0x15] - 1.0) < auVar36._4_4_);
  auVar19._0_4_ = -(uint)(ABS((float)param_2[0x10] - 1.0) < auVar36._0_4_);
  auVar19._8_4_ = -(uint)(ABS((float)param_2[0x1a] - 1.0) < auVar36._8_4_);
  auVar19._12_4_ = -(uint)(0.0 < fVar15);
  uVar13 = movmskps((int)uVar49,auVar19);
  *(bool *)(param_2 + 0xc) = ((byte)uVar13 & 7) != 7;
  auVar47 = *(undefined1 (*) [16])(param_2 + 8);
  fVar15 = (float)param_2[0x18];
  auVar36 = rcpps(auVar36,auVar47);
  fVar17 = (2.0 - auVar36._0_4_ * auVar47._0_4_) * auVar36._0_4_;
  fVar24 = (2.0 - auVar36._4_4_ * auVar47._4_4_) * auVar36._4_4_;
  fVar27 = (2.0 - auVar36._8_4_ * auVar47._8_4_) * auVar36._8_4_;
  fVar22 = (float)param_2[0x14];
  fVar29 = fVar17 * 1.0;
  fVar32 = fVar17 * 0.0;
  fVar33 = fVar17 * 0.0;
  fVar17 = fVar17 * 0.0;
  fVar34 = fVar24 * 0.0;
  fVar40 = fVar24 * 1.0;
  fVar41 = fVar24 * 0.0;
  fVar24 = fVar24 * 0.0;
  fVar43 = fVar27 * 0.0;
  fVar44 = fVar27 * 0.0;
  fVar45 = fVar27 * 1.0;
  fVar27 = fVar27 * 0.0;
  fVar25 = (float)param_2[0x15];
  fVar42 = (float)param_2[0x19];
  fVar16 = (float)param_2[0x1d];
  fVar23 = (float)param_2[0x16];
  fVar26 = (float)param_2[0x1a];
  fVar28 = (float)param_2[0x1e];
  fVar4 = (float)param_2[0x17];
  fVar5 = (float)param_2[0x1c];
  fVar6 = (float)param_2[0x1b];
  fVar7 = (float)param_2[0x1f];
  fVar8 = (float)param_2[0x10];
  fVar9 = (float)param_2[0x11];
  fVar10 = (float)param_2[0x12];
  fVar11 = (float)param_2[0x13];
  param_2[0x24] = fVar22 * fVar29 + fVar25 * fVar34 + fVar23 * fVar43 + fVar4 * 0.0;
  param_2[0x25] = fVar22 * fVar32 + fVar25 * fVar40 + fVar23 * fVar44 + fVar4 * 0.0;
  param_2[0x26] = fVar22 * fVar33 + fVar25 * fVar41 + fVar23 * fVar45 + fVar4 * 0.0;
  param_2[0x27] = fVar22 * fVar17 + fVar25 * fVar24 + fVar23 * fVar27 + fVar4 * 1.0;
  param_2[0x28] = fVar15 * fVar29 + fVar42 * fVar34 + fVar26 * fVar43 + fVar6 * 0.0;
  param_2[0x29] = fVar15 * fVar32 + fVar42 * fVar40 + fVar26 * fVar44 + fVar6 * 0.0;
  param_2[0x2a] = fVar15 * fVar33 + fVar42 * fVar41 + fVar26 * fVar45 + fVar6 * 0.0;
  param_2[0x2b] = fVar15 * fVar17 + fVar42 * fVar24 + fVar26 * fVar27 + fVar6 * 1.0;
  param_2[0x2c] = fVar5 * fVar29 + fVar16 * fVar34 + fVar28 * fVar43 + fVar7 * 0.0;
  param_2[0x2d] = fVar5 * fVar32 + fVar16 * fVar40 + fVar28 * fVar44 + fVar7 * 0.0;
  param_2[0x2e] = fVar5 * fVar33 + fVar16 * fVar41 + fVar28 * fVar45 + fVar7 * 0.0;
  param_2[0x2f] = fVar5 * fVar17 + fVar16 * fVar24 + fVar28 * fVar27 + fVar7 * 1.0;
  param_2[0x20] = fVar9 * fVar34 + fVar8 * fVar29 + fVar10 * fVar43 + fVar11 * 0.0;
  param_2[0x21] = fVar9 * fVar40 + fVar8 * fVar32 + fVar10 * fVar44 + fVar11 * 0.0;
  param_2[0x22] = fVar9 * fVar41 + fVar8 * fVar33 + fVar10 * fVar45 + fVar11 * 0.0;
  param_2[0x23] = fVar9 * fVar24 + fVar8 * fVar17 + fVar10 * fVar27 + fVar11 * 1.0;
  auVar20._0_8_ =
       CONCAT44((float)param_2[0x2d] - 0.0,(float)param_2[0x2c] - 0.0) & 0x7fffffff7fffffff;
  auVar20._8_4_ = ABS((float)param_2[0x2e] - 0.0);
  auVar20._12_4_ = ABS((float)param_2[0x2f] - 1.0);
  auVar31._0_8_ =
       CONCAT44((float)param_2[0x29] - 0.0,(float)param_2[0x28] - 0.0) & 0x7fffffff7fffffff;
  auVar31._8_4_ = ABS((float)param_2[0x2a] - 1.0);
  auVar31._12_4_ = ABS((float)param_2[0x2b] - 0.0);
  auVar47 = maxps(auVar31,auVar20);
  auVar38._0_8_ =
       CONCAT44((float)param_2[0x21] - 0.0,(float)param_2[0x20] - 1.0) & 0x7fffffff7fffffff;
  auVar38._8_4_ = ABS((float)param_2[0x22] - 0.0);
  auVar38._12_4_ = ABS((float)param_2[0x23] - 0.0);
  auVar21._0_8_ =
       CONCAT44((float)param_2[0x25] - 1.0,(float)param_2[0x24] - 0.0) & 0x7fffffff7fffffff;
  auVar21._8_4_ = ABS((float)param_2[0x26] - 0.0);
  auVar21._12_4_ = ABS((float)param_2[0x27] - 0.0);
  auVar36 = maxps(auVar38,auVar21);
  auVar47 = maxps(auVar36,auVar47);
  auVar39._4_4_ = -(uint)(auVar47._4_4_ <= 0.001);
  auVar39._0_4_ = -(uint)(auVar47._0_4_ <= 0.001);
  auVar39._8_4_ = -(uint)(auVar47._8_4_ <= 0.001);
  auVar39._12_4_ = -(uint)(auVar47._12_4_ <= 0.001);
  iVar14 = movmskps((int)((ulonglong)uVar49 >> 0x20),auVar39);
  *(bool *)((int)param_2 + 0x31) = iVar14 != 0xf;
  return;
}

// 01018670  FUN_01018670  size=9  [run]
void FUN_01018670(void)

{
  FUN_01017ec0();
  return;
}

// 01018700  FUN_01018700  size=22  [run]
void __thiscall
FUN_01018700(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = maxps(*param_2,*param_3);
  *param_1 = auVar1;
  return;
}

// 01018720  FUN_01018720  size=23  [run]
void __thiscall FUN_01018720(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = param_1[3];
  return;
}

// 01018740  FUN_01018740  size=29  [run]
void __thiscall FUN_01018740(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *param_1 = *param_1;
  param_1[1] = uVar1;
  param_1[2] = param_1[2];
  param_1[3] = param_1[3];
  return;
}

// 01018760  FUN_01018760  size=29  [run]
void __thiscall FUN_01018760(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = uVar1;
  param_1[3] = param_1[3];
  return;
}

// 010187A0  FUN_010187a0  size=36  [run]
void __thiscall
FUN_010187a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

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
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[4] = *param_3;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  param_1[8] = *param_4;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return;
}

// 01018810  FUN_01018810  size=46  [run]
void __thiscall
FUN_01018810(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

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
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  param_1[4] = *param_3;
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  param_1[8] = *param_4;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  param_1[0xc] = *param_5;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return;
}

// 01018850  FUN_01018850  size=18  [run]
void FUN_01018850(undefined4 *param_1)

{
  *param_1 = 0xbf800000;
  param_1[1] = 0xbf800000;
  param_1[2] = 0xbf800000;
  param_1[3] = 0xbf800000;
  return;
}

// 01018870  FUN_01018870  size=20  [run]
void __thiscall FUN_01018870(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 01018890  FUN_01018890  size=21  [run]
void __thiscall FUN_01018890(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 010188B0  FUN_010188b0  size=21  [run]
void __thiscall FUN_010188b0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return;
}

// 010188D0  FUN_010188d0  size=35  [run]
void __thiscall FUN_010188d0(float *param_1,undefined1 (*param_2) [16])

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

// 01018900  FUN_01018900  size=43  [run]
void __thiscall FUN_01018900(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_2 + *param_1;
  param_1[1] = fVar1 + param_1[1];
  param_1[2] = fVar2 + param_1[2];
  param_1[3] = fVar3 + param_1[3];
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  param_1[4] = param_2[4] + param_1[4];
  param_1[5] = fVar1 + param_1[5];
  param_1[6] = fVar2 + param_1[6];
  param_1[7] = fVar3 + param_1[7];
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  param_1[8] = param_2[8] + param_1[8];
  param_1[9] = fVar1 + param_1[9];
  param_1[10] = fVar2 + param_1[10];
  param_1[0xb] = fVar3 + param_1[0xb];
  return;
}

// 01018930  FUN_01018930  size=74  [run]
void __thiscall
FUN_01018930(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_1 = *param_2 * 1.0;
  param_1[1] = fVar1 * 0.0;
  param_1[2] = fVar2 * 0.0;
  param_1[3] = fVar3 * 0.0;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  param_1[4] = *param_3 * 0.0;
  param_1[5] = fVar1 * 1.0;
  param_1[6] = fVar2 * 0.0;
  param_1[7] = fVar3 * 0.0;
  fVar1 = param_4[1];
  fVar2 = param_4[2];
  fVar3 = param_4[3];
  param_1[8] = *param_4 * 0.0;
  param_1[9] = fVar1 * 0.0;
  param_1[10] = fVar2 * 1.0;
  param_1[0xb] = fVar3 * 0.0;
  fVar1 = param_5[1];
  fVar2 = param_5[2];
  fVar3 = param_5[3];
  param_1[0xc] = *param_5 * 0.0;
  param_1[0xd] = fVar1 * 0.0;
  param_1[0xe] = fVar2 * 0.0;
  param_1[0xf] = fVar3 * 1.0;
  return;
}

// 01018980  FUN_01018980  size=111  [run]
undefined4 __thiscall FUN_01018980(float *param_1,float *param_2,float param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar2._0_8_ = CONCAT44(param_1[9] - param_2[9],param_1[8] - param_2[8]) & 0x7fffffff7fffffff;
  auVar2._8_4_ = ABS(param_1[10] - param_2[10]);
  auVar2._12_4_ = ABS(param_1[0xb] - param_2[0xb]);
  auVar3._8_4_ = ABS(param_1[0xe] - param_2[0xe]);
  auVar3._0_8_ = CONCAT44(param_1[0xd] - param_2[0xd],param_1[0xc] - param_2[0xc]) &
                 0x7fffffff7fffffff;
  auVar3._12_4_ = ABS(param_1[0xf] - param_2[0xf]);
  auVar3 = maxps(auVar2,auVar3);
  auVar4._0_8_ = CONCAT44(param_1[1] - param_2[1],*param_1 - *param_2) & 0x7fffffff7fffffff;
  auVar4._8_4_ = ABS(param_1[2] - param_2[2]);
  auVar4._12_4_ = ABS(param_1[3] - param_2[3]);
  auVar5._8_4_ = ABS(param_1[6] - param_2[6]);
  auVar5._0_8_ = CONCAT44(param_1[5] - param_2[5],param_1[4] - param_2[4]) & 0x7fffffff7fffffff;
  auVar5._12_4_ = ABS(param_1[7] - param_2[7]);
  auVar5 = maxps(auVar4,auVar5);
  auVar3 = maxps(auVar5,auVar3);
  auVar6._4_4_ = -(uint)(auVar3._4_4_ <= param_3);
  auVar6._0_4_ = -(uint)(auVar3._0_4_ <= param_3);
  auVar6._8_4_ = -(uint)(auVar3._8_4_ <= param_3);
  auVar6._12_4_ = -(uint)(auVar3._12_4_ <= param_3);
  iVar1 = movmskps(param_2,auVar6);
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == 0xf);
}

// 01018B60  hkMemoryTrackStreamWriter::hkMemoryTrackStreamWriter_2  size=36  [run]
void __thiscall
hkMemoryTrackStreamWriter::hkMemoryTrackStreamWriter_2
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = param_2;
  param_1[3] = param_3;
  return;
}

// 01018B90  hkMemoryTrackStreamWriter::vf0C  size=13  [run]
void hkMemoryTrackStreamWriter::vf0C(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}

// 01018BA0  hkMemoryTrackStreamWriter::vf18  size=13  [run]
void hkMemoryTrackStreamWriter::vf18(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}

// 01018BB0  hkMemoryTrackStreamWriter::vf1C  size=8  [run]
undefined4 hkMemoryTrackStreamWriter::vf1C(void)

{
  return 1;
}

// 01018BC0  FUN_01018bc0  size=44  [run]
void FUN_01018bc0(void)

{
  int iVar1;
  int unaff_ESI;
  int *unaff_EDI;
  
  if (unaff_ESI != 0) {
    iVar1 = *unaff_EDI;
    FUN_01015cd0();
    (**(code **)(iVar1 + 0x10))();
    return;
  }
  (**(code **)(*unaff_EDI + 0x10))(&DAT_016f5bf8,6);
  return;
}

// 01018BF0  hkOstream::hkOstream_4  size=43  [run]
undefined4 * __thiscall hkOstream::hkOstream_4(undefined4 *param_1,int param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = param_2;
  if (param_2 != 0) {
    FUN_01005e50();
  }
  return param_1;
}

// 01018C20  hkBaseObject::hkBaseObject_38  size=29  [run]
void __fastcall hkBaseObject::hkBaseObject_38(undefined4 *param_1)

{
  *param_1 = hkOstream::vftable;
  if (param_1[2] != 0) {
    FUN_01005e60();
  }
  *param_1 = vftable;
  return;
}

// 01018C40  FUN_01018c40  size=25  [run]
undefined4 __thiscall FUN_01018c40(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
  return param_2;
}

// 01018C60  FUN_01018c60  size=72  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall FUN_01018c60(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_272c [10020];
  undefined4 uStack_8;
  
  uStack_8 = 0x1018c6d;
  FUN_01015b50(local_272c,0x2728,&DAT_016cc50c,param_2);
  FUN_01018bc0();
  return param_1;
}

// 01018CB0  FUN_01018cb0  size=41  [run]
undefined4 __fastcall FUN_01018cb0(undefined4 param_1)

{
  FUN_01018bc0();
  return param_1;
}

// 01018CE0  FUN_01018ce0  size=29  [run]
int __fastcall FUN_01018ce0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(&stack0x00000004,1);
  return param_1;
}

// 01018D00  FUN_01018d00  size=28  [run]
undefined4 __fastcall FUN_01018d00(undefined4 param_1)

{
  FUN_01018bc0();
  return param_1;
}

// 01018D20  FUN_01018d20  size=73  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall FUN_01018d20(undefined4 param_1,short param_2)

{
  undefined1 local_272c [10020];
  undefined4 uStack_8;
  
  uStack_8 = 0x1018d2d;
  FUN_01015b50(local_272c,0x2728,&DAT_0170586c,(int)param_2);
  FUN_01018bc0();
  return param_1;
}

// 01018D70  FUN_01018d70  size=73  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall FUN_01018d70(undefined4 param_1,undefined2 param_2)

{
  undefined1 local_272c [10020];
  undefined4 uStack_8;
  
  uStack_8 = 0x1018d7d;
  FUN_01015b50(local_272c,0x2728,&DAT_016cc3e0,param_2);
  FUN_01018bc0();
  return param_1;
}

// 01018DC0  FUN_01018dc0  size=72  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall FUN_01018dc0(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_272c [10020];
  undefined4 uStack_8;
  
  uStack_8 = 0x1018dcd;
  FUN_01015b50(local_272c,0x2728,&DAT_0170586c,param_2);
  FUN_01018bc0();
  return param_1;
}

// 01018E10  FUN_01018e10  size=72  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall FUN_01018e10(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_272c [10020];
  undefined4 uStack_8;
  
  uStack_8 = 0x1018e1d;
  FUN_01015b50(local_272c,0x2728,&DAT_016cc3e0,param_2);
  FUN_01018bc0();
  return param_1;
}

// 01018E60  FUN_01018e60  size=84  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall FUN_01018e60(undefined4 param_1,float param_2)

{
  undefined1 local_272c [10020];
  undefined4 uStack_8;
  
  uStack_8 = 0x1018e6d;
  FUN_01015b50(local_272c,0x2728,&DAT_016cc3e4,(double)param_2);
  FUN_01018bc0();
  return param_1;
}

// 01018EC0  FUN_01018ec0  size=76  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall FUN_01018ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_272c [10020];
  undefined4 uStack_8;
  
  uStack_8 = 0x1018ecd;
  FUN_01015b50(local_272c,0x2728,"%I64i",param_2,param_3);
  FUN_01018bc0();
  return param_1;
}

// 01018F10  FUN_01018f10  size=76  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __thiscall FUN_01018f10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_272c [10020];
  undefined4 uStack_8;
  
  uStack_8 = 0x1018f1d;
  FUN_01015b50(local_272c,0x2728,"%I64u",param_2,param_3);
  FUN_01018bc0();
  return param_1;
}

// 01018F60  FUN_01018f60  size=66  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_01018f60(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_272c [10020];
  undefined4 uStack_8;
  
  uStack_8 = 0x1018f6d;
  FUN_01015b40(local_272c,0x2728,param_2,&stack0x0000000c);
  FUN_01018bc0();
  return;
}

// 01018FC0  FUN_01018fc0  size=14  [run]
void __fastcall FUN_01018fc0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01018fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  return;
}

// 01018FD0  FUN_01018fd0  size=38  [run]
void __thiscall FUN_01018fd0(int param_1,undefined4 param_2)

{
  FUN_01006000();
  if (*(int *)(param_1 + 8) != 0) {
    FUN_010060a0();
  }
  *(undefined4 *)(param_1 + 8) = param_2;
  return;
}

// 01019000  hkErrStream::vf08  size=6  [run]
undefined * hkErrStream::vf08(void)

{
  return &DAT_01f90944;
}

// 01019010  hkOstream::hkOstream  size=48  [run]
undefined4 * __thiscall hkOstream::hkOstream(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  uVar1 = (**(code **)(*DAT_01f909a4 + 0x10))(param_2);
  param_1[2] = uVar1;
  return param_1;
}

// 01019040  hkOstream::hkOstream_2  size=84  [run]
undefined4 * __thiscall
hkOstream::hkOstream_2(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1c);
  *(undefined2 *)(iVar2 + 4) = 0x1c;
  uVar3 = hkBufferedStreamWriter::hkBufferedStreamWriter(param_2,param_3,param_4);
  param_1[2] = uVar3;
  return param_1;
}

// 010190A0  hkMemoryTrackStreamWriter::hkMemoryTrackStreamWriter  size=82  [run]
undefined4 * __thiscall
hkMemoryTrackStreamWriter::hkMemoryTrackStreamWriter(undefined4 *param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = hkOstream::vftable;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x10);
  puVar2[1] = 0x10010;
  *puVar2 = vftable;
  puVar2[2] = param_2;
  puVar2[3] = 1;
  param_1[2] = puVar2;
  return param_1;
}

// 01019100  FUN_01019100  size=88  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_01019100(float *param_1)

{
  undefined1 local_2730 [10024];
  undefined4 local_8;
  
  FUN_01015b50(local_2730,0x2728,&DAT_016cc3e4,(double)*param_1);
  FUN_01018bc0();
  return local_8;
}

// 01019160  FUN_01019160  size=87  [run]
undefined4 __thiscall FUN_01019160(undefined4 param_1,float *param_2)

{
  FUN_01018f60(param_1,"[%g,%g,%g,%g]",(double)*param_2,(double)param_2[1],(double)param_2[2],
               (double)param_2[3]);
  return param_1;
}

// 010191C0  FUN_010191c0  size=87  [run]
undefined4 __thiscall FUN_010191c0(undefined4 param_1,float *param_2)

{
  FUN_01018f60(param_1,"[%f,%f,%f,(%f)]",(double)*param_2,(double)param_2[1],(double)param_2[2],
               (double)param_2[3]);
  return param_1;
}

// 01019220  FUN_01019220  size=91  [run]
undefined4 __thiscall FUN_01019220(undefined4 param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  
  pfVar2 = (float *)(param_2 + 0x10);
  iVar1 = 3;
  do {
    FUN_01018f60(param_1,"|%f,%f,%f|\n",(double)pfVar2[-4],(double)*pfVar2,(double)pfVar2[4]);
    pfVar2 = pfVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return param_1;
}

// 01019280  FUN_01019280  size=27  [run]
void FUN_01019280(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x30;
  FUN_01019220(param_1);
  FUN_01019160(iVar1);
  return;
}

// 010192A0  FUN_010192a0  size=78  [run]
int __thiscall FUN_010192a0(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  if ((uVar1 & 0xfffffffe) != 0) {
    iVar2 = **(int **)(param_1 + 8);
    uVar3 = FUN_010065c0();
    (**(code **)(iVar2 + 0x10))(uVar1 & 0xfffffffe,uVar3);
    return param_1;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(&DAT_016f5bf8,6);
  return param_1;
}

// 010192F0  FUN_010192f0  size=61  [run]
int __thiscall FUN_010192f0(int param_1,int *param_2)

{
  if (*param_2 != 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x10))(*param_2,param_2[1] + -1);
    return param_1;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x10))(&DAT_016f5bf8,6);
  return param_1;
}

// 01019330  hkOstream::hkOstream_3  size=78  [run]
undefined4 * __thiscall hkOstream::hkOstream_3(undefined4 *param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x14);
  *(undefined2 *)(iVar2 + 4) = 0x14;
  uVar3 = hkArrayStreamWriter::hkArrayStreamWriter(param_2,1);
  param_1[2] = uVar3;
  return param_1;
}

// 01019390  FUN_01019390  size=39  [run]
void FUN_01019390(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return;
}

// 010193C0  FUN_010193c0  size=38  [run]
void FUN_010193c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01019410  FUN_01019410  size=37  [run]
void FUN_01019410(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01019440  FUN_01019440  size=38  [run]
void FUN_01019440(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01019470  hkOstream::vf00  size=52  [run]
int __thiscall hkOstream::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_38();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010194B0  hkMemoryTrackStreamWriter::vf20  size=20  [run]
int __fastcall hkMemoryTrackStreamWriter::vf20(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  return (piVar1[5] + -1 + piVar1[3]) * *piVar1 + piVar1[1];
}

// 010194D0  FUN_010194d0  size=53  [run]
int __thiscall FUN_010194d0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_010299d0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return param_1;
}

// 01019510  hkBaseObject::hkBaseObject_30  size=72  [run]
void __fastcall hkBaseObject::hkBaseObject_30(undefined4 *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  *param_1 = hkMemoryTrackStreamWriter::vftable;
  if (param_1[3] == 0) {
    iVar1 = param_1[2];
    if (iVar1 != 0) {
      FUN_010299d0();
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,0x1c);
    }
    *param_1 = vftable;
    return;
  }
  *param_1 = vftable;
  return;
}

// 01019560  hkMemoryTrackStreamWriter::vf00  size=107  [run]
undefined4 * __thiscall hkMemoryTrackStreamWriter::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  LPVOID pvVar2;
  
  *param_1 = vftable;
  if ((param_1[3] == 0) && (iVar1 = param_1[2], iVar1 != 0)) {
    FUN_010299d0();
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,0x1c);
  }
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 010195D0  FUN_010195d0  size=68  [run]
int __fastcall FUN_010195d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x10))
                        (*(int *)(param_1 + 0xc) + iVar3,iVar1 - iVar3);
      iVar3 = iVar3 + iVar2;
      if (iVar2 == 0) {
        return iVar3;
      }
    } while (iVar3 < iVar1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return iVar3;
}

// 01019620  hkBufferedStreamWriter::vf10  size=137  [run]
int __thiscall hkBufferedStreamWriter::vf10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar2 = param_3;
  if (iVar3 < param_3) {
    do {
      FUN_01015e80(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc),param_2,iVar3);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar3;
      iVar1 = *(int *)(param_1 + 0x10);
      param_2 = param_2 + iVar3;
      iVar2 = iVar2 - iVar3;
      iVar3 = FUN_010195d0();
      if (iVar3 != iVar1) {
        return param_3 - iVar2;
      }
      iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
    } while (iVar3 < iVar2);
  }
  FUN_01015e80(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10),param_2,iVar2);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar2;
  return param_3;
}

// 010196B0  hkBufferedStreamWriter::vf14  size=27  [run]
void __fastcall hkBufferedStreamWriter::vf14(int param_1)

{
  FUN_010195d0();
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x010196c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 8) + 0x14))();
    return;
  }
  return;
}

// 010196D0  hkBufferedStreamWriter::vf0C  size=65  [run]
void __thiscall hkBufferedStreamWriter::vf0C(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 8) != 0) {
    uStack_8 = param_1;
    puVar1 = (undefined1 *)(**(code **)(**(int **)(param_1 + 8) + 0xc))((int)&uStack_8 + 3);
    *param_2 = *puVar1;
    return;
  }
  *param_2 = *(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14);
  return;
}

// 01019720  hkBufferedStreamWriter::vf18  size=57  [run]
void __thiscall hkBufferedStreamWriter::vf18(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined4 uStack_8;
  
  if (*(int *)(param_1 + 8) != 0) {
    uStack_8 = param_1;
    puVar1 = (undefined1 *)(**(code **)(**(int **)(param_1 + 8) + 0x18))((int)&uStack_8 + 3);
    *param_2 = *puVar1;
    return;
  }
  *param_2 = 1;
  return;
}

// 01019760  hkBufferedStreamWriter::vf1C  size=106  [run]
uint __thiscall hkBufferedStreamWriter::vf1C(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_010195d0();
                    /* WARNING: Could not recover jumptable at 0x0101977b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
    return uVar2;
  }
  iVar3 = param_2;
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar3 = *(int *)(param_1 + 0x10) + param_2;
    }
    else {
      iVar3 = -1;
      if (param_3 == 2) {
        iVar3 = *(int *)(param_1 + 0x10) - param_2;
      }
    }
  }
  if (-1 < iVar3) {
    iVar1 = *(int *)(param_1 + 0x14);
    iVar4 = iVar3;
    if (iVar1 < iVar3) {
      iVar4 = iVar1;
    }
    *(int *)(param_1 + 0x10) = iVar4;
    return (uint)(iVar1 < iVar3);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 1;
}

// 010197D0  hkBufferedStreamWriter::vf20  size=46  [run]
int __fastcall hkBufferedStreamWriter::vf20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    return *(int *)(param_1 + 0x10);
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  if (-1 < iVar1) {
    return *(int *)(param_1 + 0x10) + iVar1;
  }
  return -1;
}

// 01019800  hkBufferedStreamWriter::hkBufferedStreamWriter  size=88  [run]
undefined4 * __thiscall
hkBufferedStreamWriter::hkBufferedStreamWriter
          (undefined4 *param_1,undefined4 param_2,int param_3,char param_4)

{
  int iVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  iVar1 = param_3 + -1;
  if (param_4 == '\0') {
    iVar1 = param_3;
  }
  param_1[5] = iVar1;
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_4 != '\0') {
    FUN_01015ea0(param_2,0,param_3);
  }
  return param_1;
}

// 01019860  hkBufferedStreamWriter::hkBufferedStreamWriter_2  size=95  [run]
undefined4 * __thiscall
hkBufferedStreamWriter::hkBufferedStreamWriter_2
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  undefined4 uVar2;
  
  param_1[2] = param_2;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  *(undefined1 *)(param_1 + 6) = 1;
  if (param_1[2] != 0) {
    FUN_01006000();
  }
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = FUN_01005c40(*(undefined4 *)((int)pvVar1 + 0x2c),param_3,0x40);
  param_1[5] = param_3;
  param_1[3] = uVar2;
  param_1[4] = 0;
  return param_1;
}

// 010198C0  hkBaseObject::hkBaseObject_19  size=70  [run]
void __fastcall hkBaseObject::hkBaseObject_19(undefined4 *param_1)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  
  *param_1 = hkBufferedStreamWriter::vftable;
  hkBufferedStreamWriter::vf14();
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  if (*(char *)(param_1 + 6) != '\0') {
    uVar1 = param_1[3];
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    FUN_01005c80(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
  }
  *param_1 = vftable;
  return;
}

// 01019910  hkBufferedStreamWriter::vf08  size=6  [run]
undefined * hkBufferedStreamWriter::vf08(void)

{
  return &DAT_01f90974;
}

// 01019920  FUN_01019920  size=37  [run]
void FUN_01019920(undefined4 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005c40(*(undefined4 *)((int)pvVar1 + 0x2c),param_2,param_1);
  return;
}

// 01019950  FUN_01019950  size=33  [run]
void FUN_01019950(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005c80(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return;
}

// 01019980  FUN_01019980  size=38  [run]
void FUN_01019980(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010199B0  hkBufferedStreamWriter::vf00  size=52  [run]
int __thiscall hkBufferedStreamWriter::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_19();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010199F0  FUN_010199f0  size=9  [run]
void FUN_010199f0(void *param_1,void *param_2,size_t param_3)

{
  FID_conflict__memcpy(param_1,param_2,param_3);
  return;
}

// 01019A00  FUN_01019a00  size=9  [run]
void FUN_01019a00(void *param_1,int param_2,size_t param_3)

{
  _memset(param_1,param_2,param_3);
  return;
}

// 01019A10  FUN_01019a10  size=44  [run]
void __thiscall FUN_01019a10(int param_1,int param_2)

{
  uint in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = in_EAX >> 3;
  if (7 < in_EAX) {
    puVar1 = (undefined4 *)(param_2 + -8 + uVar2 * 8);
    do {
      *puVar1 = *(undefined4 *)((param_1 - param_2) + (int)puVar1);
      puVar1[1] = *(undefined4 *)((param_1 - param_2) + 4 + (int)puVar1);
      puVar1 = puVar1 + -2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// 01019A40  FUN_01019a40  size=37  [run]
void __fastcall FUN_01019a40(undefined4 param_1,int param_2,int param_3)

{
  uint in_EAX;
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = in_EAX >> 2;
  if (3 < in_EAX) {
    puVar1 = (undefined4 *)(param_3 + -4 + uVar2 * 4);
    do {
      *puVar1 = *(undefined4 *)((param_2 - param_3) + (int)puVar1);
      puVar1 = puVar1 + -1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// 01019A70  FUN_01019a70  size=38  [run]
void __fastcall FUN_01019a70(undefined4 param_1,int param_2,int param_3)

{
  uint in_EAX;
  undefined2 *puVar1;
  uint uVar2;
  
  uVar2 = in_EAX >> 1;
  if (1 < in_EAX) {
    puVar1 = (undefined2 *)(param_3 + -2 + uVar2 * 2);
    do {
      *puVar1 = *(undefined2 *)((param_2 - param_3) + (int)puVar1);
      puVar1 = puVar1 + -1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

// 01019AA0  FUN_01019aa0  size=32  [run]
void __fastcall FUN_01019aa0(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)(param_2 + -1 + param_3);
    do {
      *puVar1 = puVar1[param_1 - param_3];
      puVar1 = puVar1 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01019AC0  FUN_01019ac0  size=257  [run]
void FUN_01019ac0(uint param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  
  uVar3 = param_3 & 0xfffffff8;
  if ((((uVar3 != 0) && ((param_3 & 7) == 0)) && ((param_1 & 7) == 0)) && ((param_2 & 7) == 0)) {
    uVar4 = param_3 >> 3;
    if (7 < param_3) {
      puVar1 = (undefined4 *)((param_1 - 8) + uVar4 * 8);
      do {
        *puVar1 = *(undefined4 *)((param_2 - param_1) + (int)puVar1);
        puVar1[1] = *(undefined4 *)((param_2 - param_1) + 4 + (int)puVar1);
        puVar1 = puVar1 + -2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    param_1 = param_1 + uVar3;
    param_2 = param_2 + uVar3;
    param_3 = 0;
  }
  uVar3 = param_3 & 0xfffffffc;
  if (((uVar3 != 0) && ((param_3 & 3) == 0)) && (((param_1 & 3) == 0 && ((param_2 & 3) == 0)))) {
    uVar4 = param_3 >> 2;
    if (3 < param_3) {
      puVar1 = (undefined4 *)((param_1 - 4) + uVar4 * 4);
      do {
        *puVar1 = *(undefined4 *)((int)puVar1 + (param_2 - param_1));
        puVar1 = puVar1 + -1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    param_1 = param_1 + uVar3;
    param_2 = param_2 + uVar3;
    param_3 = 0;
  }
  uVar3 = param_3 & 0xfffffffe;
  if (((uVar3 != 0) && ((param_3 & 1) == 0)) && (((param_1 & 1) == 0 && ((param_2 & 1) == 0)))) {
    uVar4 = param_3 >> 1;
    if (1 < param_3) {
      puVar2 = (undefined2 *)((param_1 - 2) + uVar4 * 2);
      do {
        *puVar2 = *(undefined2 *)((int)puVar2 + (param_2 - param_1));
        puVar2 = puVar2 + -1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    param_1 = param_1 + uVar3;
    param_2 = param_2 + uVar3;
    param_3 = 0;
  }
  if (param_3 != 0) {
    puVar5 = (undefined1 *)((param_3 - 1) + param_1);
    do {
      *puVar5 = puVar5[param_2 - param_1];
      puVar5 = puVar5 + -1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}

// 01019BD0  FUN_01019bd0  size=47  [run]
void FUN_01019bd0(uint param_1,uint param_2,undefined4 param_3)

{
  if (param_2 < param_1) {
    FUN_01019ac0(param_1,param_2,param_3);
    return;
  }
  if (param_1 < param_2) {
    FUN_010199f0(param_1,param_2,param_3);
  }
  return;
}

// 01019C00  FUN_01019c00  size=33  [run]
undefined4 * __thiscall FUN_01019c00(undefined4 *param_1,LONG param_2,LONG param_3)

{
  HANDLE pvVar1;
  
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,param_2,param_3,(LPCSTR)0x0);
  *param_1 = pvVar1;
  return param_1;
}

// 01019C30  FUN_01019c30  size=10  [run]
void __fastcall FUN_01019c30(undefined4 *param_1)

{
  CloseHandle((HANDLE)*param_1);
  return;
}

// 01019C40  FUN_01019c40  size=12  [run]
void __fastcall FUN_01019c40(undefined4 *param_1)

{
  WaitForSingleObject((HANDLE)*param_1,0xffffffff);
  return;
}

// 01019C50  FUN_01019c50  size=22  [run]
void __thiscall FUN_01019c50(undefined4 *param_1,LONG param_2)

{
  ReleaseSemaphore((HANDLE)*param_1,param_2,(LPLONG)0x0);
  return;
}

// 01019C70  FUN_01019c70  size=12  [run]
void FUN_01019c70(void)

{
  FUN_01019c40();
  return;
}

// 01019C80  FUN_01019c80  size=17  [run]
void FUN_01019c80(undefined4 param_1,undefined4 param_2)

{
  FUN_01019c50(param_2);
  return;
}

// 01019CA0  FUN_01019ca0  size=10  [run]
void FUN_01019ca0(void)

{
                    /* WARNING: Could not recover jumptable at 0x01019ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_018eaa74)();
  return;
}

// 01019CC0  FUN_01019cc0  size=36  [run]
undefined4 FUN_01019cc0(undefined4 param_1,undefined4 *param_2)

{
  FUN_01026140(param_1);
  FUN_01025ff0(0x2f,0x5c,1);
  return *param_2;
}

// 01019CF0  FUN_01019cf0  size=80  [run]
undefined4 FUN_01019cf0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  FUN_01026140(param_1);
  FUN_01025ff0(0x5c,0x2f,1);
  FUN_01026c40(&DAT_0170590c,&DAT_01701298,1);
  iVar1 = FUN_01025e80(&DAT_01705908);
  if (iVar1 != 0) {
    FUN_010260c0(2);
  }
  return *param_2;
}

// 01019D40  hkNativeFileSystem::vf10  size=222  [run]
undefined4 hkNativeFileSystem::vf10(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84 [128];
  
  local_90 = local_84;
  local_88 = 0x80000080;
  local_8c = 1;
  local_84[0] = 0;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x10);
  *(undefined2 *)(iVar2 + 4) = 0x10;
  uVar3 = (*(code *)PTR_FUN_018eaa74)(param_1,&local_90);
  uVar3 = hkStdioStreamWriter::hkStdioStreamWriter_2(uVar3);
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1c);
  *(undefined2 *)(iVar2 + 4) = 0x1c;
  uVar3 = hkBufferedStreamWriter::hkBufferedStreamWriter_2(uVar3,0x1000);
  FUN_010060a0();
  local_8c = 0;
  if (-1 < (int)local_88) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_90,local_88 & 0x3fffffff);
  }
  return uVar3;
}

// 01019E20  hkNativeFileSystem::vf0C  size=241  [run]
int * hkNativeFileSystem::vf0C(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined1 *local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84 [128];
  
  local_90 = local_84;
  local_88 = 0x80000080;
  local_8c = 1;
  local_84[0] = 0;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x14);
  *(undefined2 *)(iVar2 + 4) = 0x14;
  uVar3 = (*(code *)PTR_FUN_018eaa74)(param_1,&local_90);
  piVar4 = (int *)hkStdioStreamReader::hkStdioStreamReader(uVar3);
  pcVar5 = (char *)(**(code **)(*piVar4 + 0x18))((int)&param_1 + 3);
  if (*pcVar5 == '\0') {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x24);
    *(undefined2 *)(iVar2 + 4) = 0x24;
    piVar4 = (int *)hkBufferedStreamReader::hkBufferedStreamReader(piVar4,0x1000);
    FUN_010060a0();
  }
  local_8c = 0;
  if (-1 < (int)local_88) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_90,local_88 & 0x3fffffff);
  }
  return piVar4;
}

// 01019F20  FUN_01019f20  size=12  [run]
int __thiscall FUN_01019f20(int *param_1,int param_2)

{
  return *param_1 + param_2;
}

// 01019F30  FUN_01019f30  size=15  [run]
undefined4 __thiscall FUN_01019f30(int *param_1,int param_2)

{
  return CONCAT31((int3)((uint)*param_1 >> 8),*(undefined1 *)(param_2 + *param_1));
}

// 01019F40  FUN_01019f40  size=37  [run]
void FUN_01019f40(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01019F70  FUN_01019f70  size=37  [run]
void FUN_01019f70(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01019FA0  FUN_01019fa0  size=37  [run]
void FUN_01019fa0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01019FE0  FUN_01019fe0  size=9  [run]
void FUN_01019fe0(void)

{
  FUN_01010160();
  return;
}

// 01019FF0  FUN_01019ff0  size=9  [run]
void FUN_01019ff0(void)

{
  FUN_01010c10();
  return;
}

// 0101A040  hkError::vf1C  size=3  [run]
void hkError::vf1C(void)

{
  return;
}

// 0101A050  hkError::vf20  size=1  [run]
void hkError::vf20(void)

{
  return;
}

// 0101A070  hkDefaultError::vf14  size=31  [run]
void hkDefaultError::vf14(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01010160(param_2,0);
  *(bool *)param_1 = iVar1 == 0;
  return;
}

// 0101A090  hkDefaultError::vf18  size=8  [run]
void hkDefaultError::vf18(void)

{
  FUN_010102e0();
  return;
}

// 0101A0A0  hkDefaultError::vf24  size=296  [run]
void __thiscall
hkDefaultError::vf24
          (int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
          undefined4 param_6,char param_7)

{
  int iVar1;
  undefined1 local_a04 [2047];
  undefined1 local_205;
  undefined1 local_204 [8];
  undefined1 local_1fc [504];
  
  if (param_3 == 0) {
    if (param_5 == 0) {
      FUN_01015b50(local_a04,0x800,&DAT_016575ac,param_4);
      goto LAB_0101a130;
    }
  }
  else if (param_3 == -1) {
    FUN_01015b50(local_a04,0x800,"%s(%d): %s: %s",param_5,param_6,param_2,param_4);
    goto LAB_0101a130;
  }
  FUN_01015b50(local_a04,0x800,"%s(%d): [0x%08X] %s: %s",param_5,param_6,param_3,param_2,param_4);
LAB_0101a130:
  local_205 = 0;
  (**(code **)(param_1 + 0x20))(local_a04,*(undefined4 *)(param_1 + 0x24));
  if (param_7 != '\0') {
    iVar1 = DAT_01f909ac;
    if ((DAT_01f909ac == 0) && (iVar1 = FUN_010247d0(), DAT_01f909ac != 0)) {
      FUN_01005e60();
    }
    DAT_01f909ac = iVar1;
    iVar1 = FUN_01024590(local_204,0x80);
    if (2 < iVar1) {
      (**(code **)(param_1 + 0x20))("Stack trace is:\n",*(undefined4 *)(param_1 + 0x24));
      FUN_01024430(local_1fc,iVar1 + -2,*(undefined4 *)(param_1 + 0x20),
                   *(undefined4 *)(param_1 + 0x24));
    }
  }
  return;
}

// 0101A1D0  hkDefaultError::vf0C  size=171  [run]
undefined4 __thiscall
hkDefaultError::vf0C
          (int *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = param_3;
  if ((param_3 == 0xffffffff) && (param_1[6] != 0)) {
    uVar3 = *(uint *)(param_1[5] + -4 + param_1[6] * 4);
  }
  pcVar2 = (char *)(**(code **)(*param_1 + 0x14))((int)&param_3 + 3,uVar3);
  if (*pcVar2 == '\0') {
    return 0;
  }
  pcVar2 = "";
  uVar1 = param_3 >> 8;
  param_3 = param_3 & 0xffffff00;
  switch(param_2) {
  case 0:
    pcVar2 = "Report";
    break;
  case 1:
    pcVar2 = "Warning";
    break;
  case 2:
    pcVar2 = "Assert";
    goto LAB_0101a23d;
  case 3:
    pcVar2 = "Error";
LAB_0101a23d:
    param_3 = CONCAT31((int3)uVar1,1);
  }
  (**(code **)(*param_1 + 0x24))(pcVar2,uVar3,param_4,param_5,param_6,param_3);
  if ((param_2 != 2) && (param_2 != 3)) {
    return 0;
  }
  return 1;
}

// 0101A290  hkDefaultError::vf20  size=4  [run]
void __fastcall hkDefaultError::vf20(int param_1)

{
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  return;
}

// 0101A2A0  hkDefaultError::vf10  size=45  [run]
void hkDefaultError::vf10(undefined4 param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_01010c10(param_1);
    return;
  }
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,1);
  return;
}

// 0101A2D0  hkDefaultError::vf1C  size=57  [run]
void __thiscall hkDefaultError::vf1C(int param_1,undefined4 param_2)

{
  if (*(uint *)(param_1 + 0x18) == (*(uint *)(param_1 + 0x1c) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x14),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18) * 4) = param_2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}

// 0101A310  hkDefaultError::hkDefaultError  size=64  [run]
void __thiscall
hkDefaultError::hkDefaultError(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  param_1[8] = param_2;
  param_1[9] = param_3;
  return;
}

// 0101A350  FUN_0101a350  size=13  [run]
void __thiscall FUN_0101a350(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 0101A360  FUN_0101a360  size=38  [run]
void FUN_0101a360(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0101A3B0  hkError::vf00  size=53  [run]
undefined4 * __thiscall hkError::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0101A3F0  FUN_0101a3f0  size=25  [run]
void FUN_0101a3f0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0101A430  FUN_0101a430  size=38  [run]
void FUN_0101a430(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0101A460  hkBaseObject::hkBaseObject_16  size=86  [run]
void __fastcall hkBaseObject::hkBaseObject_16(undefined4 *param_1)

{
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = vftable;
  return;
}

// 0101A4C0  hkDefaultError::vf00  size=129  [run]
undefined4 * __thiscall hkDefaultError::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] * 4);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0101A550  hkSocket::ReaderAdapter::vf10  size=66  [run]
int __thiscall hkSocket::ReaderAdapter::vf10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x14))(param_2 + iVar2,param_3 - iVar2);
      iVar2 = iVar2 + iVar1;
      if (iVar1 == 0) {
        return iVar2;
      }
    } while (iVar2 < param_3);
  }
  return param_3;
}

// 0101A5A0  hkSocket::ReaderAdapter::vf0C  size=25  [run]
undefined4 __thiscall hkSocket::ReaderAdapter::vf0C(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
  return param_2;
}

// 0101A5C0  hkSocket::WriterAdapter::vf10  size=66  [run]
int __thiscall hkSocket::WriterAdapter::vf10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(param_2 + iVar2,param_3 - iVar2);
      iVar2 = iVar2 + iVar1;
      if (iVar1 == 0) {
        return iVar2;
      }
    } while (iVar2 < param_3);
  }
  return param_3;
}

// 0101A610  hkSocket::WriterAdapter::vf0C  size=25  [run]
undefined4 __thiscall hkSocket::WriterAdapter::vf0C(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
  return param_2;
}

// 0101A630  hkSocket::ReaderAdapter::ReaderAdapter  size=82  [run]
undefined4 * __fastcall hkSocket::ReaderAdapter::ReaderAdapter(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = hkSocket::vftable;
  param_1[2] = vftable;
  *(undefined2 *)((int)param_1 + 0xe) = 1;
  *(undefined2 *)((int)param_1 + 0x1a) = 1;
  param_1[5] = WriterAdapter::vftable;
  param_1[4] = param_1;
  param_1[7] = param_1;
  if ((DAT_01f909a8 == '\0') && (PTR_FUN_018eaae0 != (undefined *)0x0)) {
    (*(code *)PTR_FUN_018eaae0)();
    DAT_01f909a8 = '\x01';
  }
  return param_1;
}

// 0101A750  hkSocket::vf24  size=8  [run]
undefined4 hkSocket::vf24(void)

{
  return 1;
}

// 0101A760  hkSocket::vf28  size=3  [run]
undefined1 hkSocket::vf28(void)

{
  return 0;
}

// 0101A780  FUN_0101a780  size=38  [run]
void FUN_0101a780(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0101A7B0  hkStreamReader::vf00  size=53  [run]
undefined4 * __thiscall hkStreamReader::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0101A7F0  FUN_0101a7f0  size=38  [run]
void FUN_0101a7f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0101A820  FUN_0101a820  size=38  [run]
void FUN_0101a820(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0101A850  FUN_0101a850  size=38  [run]
void FUN_0101a850(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0101A880  hkSocket::ReaderAdapter::vf00  size=53  [run]
undefined4 * __thiscall hkSocket::ReaderAdapter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0101A8C0  hkSocket::WriterAdapter::vf00  size=53  [run]
undefined4 * __thiscall hkSocket::WriterAdapter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0101A900  FUN_0101a900  size=37  [run]
void FUN_0101a900(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0101A930  hkSocket::vf00  size=60  [run]
undefined4 * __thiscall hkSocket::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[5] = hkBaseObject::vftable;
  param_1[2] = hkBaseObject::vftable;
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0101A970  FUN_0101a970  size=9  [run]
void __fastcall FUN_0101a970(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 0101A980  FUN_0101a980  size=24  [run]
void __fastcall FUN_0101a980(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}

// 0101A9A0  FUN_0101a9a0  size=173  [run]
undefined4 __thiscall
FUN_0101a9a0(undefined4 *param_1,LPTHREAD_START_ROUTINE param_2,LPVOID param_3,undefined4 param_4,
            SIZE_T param_5)

{
  HANDLE pvVar1;
  ULONG_PTR local_2c;
  undefined4 local_28;
  LPVOID local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0187a458;
  puStack_10 = &LAB_01438018;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffc8;
  ExceptionList = &local_14;
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,param_5,param_2,param_3,0,(LPDWORD)&param_3);
  *param_1 = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    ExceptionList = local_14;
    return 1;
  }
  param_1[2] = param_3;
  param_1[3] = 0;
  local_2c = 0x1000;
  local_28 = param_4;
  local_24 = param_3;
  local_20 = 0;
  local_8 = 0;
  RaiseException(0x406d1388,0,4,&local_2c);
  ExceptionList = local_14;
  return 0;
}

// 0101AA70  FUN_0101aa70  size=46  [run]
undefined1 __fastcall FUN_0101aa70(undefined4 *param_1)

{
  undefined4 *local_8;
  
  if ((HANDLE)*param_1 == (HANDLE)0x0) {
    return 2;
  }
  local_8 = param_1;
  GetExitCodeThread((HANDLE)*param_1,(LPDWORD)&local_8);
  return local_8 == (undefined4 *)0x103;
}

// 0101AAA0  FUN_0101aaa0  size=9  [run]
void FUN_0101aaa0(void)

{
  GetCurrentThreadId();
  return;
}

// 0101AAD0  thunk_FUN_0101a980  size=5  [run]
void __fastcall thunk_FUN_0101a980(undefined4 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}

// 0101ABD0  hkSimpleLocalFrame::vf34  size=42  [run]
void __thiscall hkSimpleLocalFrame::vf34(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_010060a0();
  }
  *(int *)(param_1 + 0x60) = param_2;
  return;
}

// 0101AC30  hkLocalFrame::vf14  size=55  [run]
void __thiscall hkLocalFrame::vf14(int *param_1,undefined4 *param_2)

{
  undefined1 local_50 [48];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  (**(code **)(*param_1 + 0xc))(local_50);
  *param_2 = local_20;
  param_2[1] = uStack_1c;
  param_2[2] = uStack_18;
  param_2[3] = uStack_14;
  return;
}

// 0101AC70  hkSimpleLocalFrame::vf14  size=17  [run]
void __thiscall hkSimpleLocalFrame::vf14(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x4c);
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}

// 0101AC90  hkSimpleLocalFrame::vf28  size=4  [run]
undefined4 __fastcall hkSimpleLocalFrame::vf28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}

// 0101ACA0  hkSimpleLocalFrame::vf2C  size=16  [run]
undefined4 __thiscall hkSimpleLocalFrame::vf2C(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x50) + param_2 * 4);
}

// 0101ACB0  hkLocalFrame::vf38  size=148  [run]
void __thiscall hkLocalFrame::vf38(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  iVar1 = (**(code **)(*param_1 + 0x28))();
  if (iVar1 != 0) {
    local_8 = 0;
    iVar1 = (**(code **)(*param_1 + 0x28))();
    if (0 < iVar1) {
      do {
        piVar2 = (int *)(**(code **)(*param_1 + 0x2c))(local_8);
        if (piVar2 != (int *)0x0) {
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            FUN_0100a290(param_3,param_2,4);
          }
          *(int **)(*param_2 + param_2[1] * 4) = piVar2;
          param_2[1] = param_2[1] + 1;
          (**(code **)(*piVar2 + 0x38))(param_2,param_3);
        }
        local_8 = local_8 + 1;
        iVar1 = (**(code **)(*param_1 + 0x28))();
      } while (local_8 < iVar1);
    }
  }
  return;
}

// 0101AD50  hkSimpleLocalFrame::vf10  size=41  [run]
void __thiscall hkSimpleLocalFrame::vf10(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(param_1 + 0x20) = param_2[4];
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x30) = param_2[8];
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(undefined4 *)(param_1 + 0x40) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  return;
}

// 0101AD80  hkSimpleLocalFrame::vf0C  size=41  [run]
void __thiscall hkSimpleLocalFrame::vf0C(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  param_2[4] = *(undefined4 *)(param_1 + 0x20);
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  param_2[8] = *(undefined4 *)(param_1 + 0x30);
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x4c);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x40);
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  return;
}

// 0101ADB0  hkSimpleLocalFrame::vf18  size=225  [run]
void __thiscall hkSimpleLocalFrame::vf18(int param_1,float *param_2,float param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM3 [16];
  undefined1 auVar6 [16];
  undefined1 local_20 [16];
  
  fVar2 = *param_2 - *(float *)(param_1 + 0x40);
  fVar3 = param_2[1] - *(float *)(param_1 + 0x44);
  fVar4 = param_2[2] - *(float *)(param_1 + 0x48);
  fVar2 = fVar2 * fVar2;
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar3 + fVar2 + fVar4;
  auVar6._4_4_ = fVar3 + fVar2 + fVar4;
  auVar6._0_4_ = fVar5;
  auVar6._8_4_ = fVar3 + fVar2 + fVar4;
  auVar6._12_4_ = fVar3 + fVar2 + fVar4;
  auVar6 = rsqrtps(in_XMM3,auVar6);
  fVar2 = auVar6._0_4_;
  fVar2 = (float)(~-(uint)(fVar5 <= 0.0) &
                 (uint)((3.0 - fVar2 * fVar5 * fVar2) * fVar2 * 0.5 * fVar5));
  if (fVar2 <= param_3) {
    (**(code **)(*param_4 + 0xc))(param_1,fVar2);
  }
  if (0 < *(int *)(param_1 + 0x54)) {
    FUN_01007090(param_1 + 0x10,param_2);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x54)) {
      do {
        (**(code **)(**(int **)(*(int *)(param_1 + 0x50) + iVar1 * 4) + 0x18))
                  (local_20,param_3,param_4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x54));
    }
  }
  return;
}

// 0101AEA0  hkBaseObject::hkBaseObject_12  size=118  [run]
void __fastcall hkBaseObject::hkBaseObject_12(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x15];
  iVar2 = 0;
  *param_1 = hkSimpleLocalFrame::vftable;
  if (0 < iVar1) {
    do {
      FUN_010060a0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (param_1[0x18] != 0) {
    FUN_010060a0();
  }
  FUN_01006770();
  param_1[0x15] = 0;
  if (-1 < (int)param_1[0x16]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x14],param_1[0x16] * 4);
  }
  param_1[0x14] = 0;
  param_1[0x16] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0101AF20  FUN_0101af20  size=15  [run]
int __thiscall FUN_0101af20(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0101AF30  FUN_0101af30  size=15  [run]
int __thiscall FUN_0101af30(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0101AF60  FUN_0101af60  size=34  [run]
void FUN_0101af60(int param_1,int param_2,undefined4 *param_3)

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

// 0101AF90  FUN_0101af90  size=57  [run]
void __thiscall FUN_0101af90(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0101AFD0  FUN_0101afd0  size=49  [run]
void __thiscall FUN_0101afd0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (*param_1 - *param_3) * (*param_1 - *param_3);
  fVar2 = (param_1[1] - param_3[1]) * (param_1[1] - param_3[1]);
  fVar3 = (param_1[2] - param_3[2]) * (param_1[2] - param_3[2]);
  *param_2 = fVar2 + fVar1 + fVar3;
  param_2[1] = fVar2 + fVar1 + fVar3;
  param_2[2] = fVar2 + fVar1 + fVar3;
  param_2[3] = fVar2 + fVar1 + fVar3;
  return;
}

// 0101B010  FUN_0101b010  size=100  [run]
void __thiscall FUN_0101b010(float *param_1,uint *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  undefined1 in_XMM3 [16];
  undefined1 auVar7 [16];
  float fVar9;
  
  fVar1 = (*param_1 - *param_3) * (*param_1 - *param_3);
  fVar2 = (param_1[1] - param_3[1]) * (param_1[1] - param_3[1]);
  fVar3 = (param_1[2] - param_3[2]) * (param_1[2] - param_3[2]);
  fVar4 = fVar2 + fVar1 + fVar3;
  fVar5 = fVar2 + fVar1 + fVar3;
  fVar6 = fVar2 + fVar1 + fVar3;
  fVar3 = fVar2 + fVar1 + fVar3;
  auVar7._4_4_ = fVar5;
  auVar7._0_4_ = fVar4;
  auVar7._8_4_ = fVar6;
  auVar7._12_4_ = fVar3;
  auVar7 = rsqrtps(in_XMM3,auVar7);
  fVar1 = auVar7._0_4_;
  fVar2 = auVar7._4_4_;
  fVar8 = auVar7._8_4_;
  fVar9 = auVar7._12_4_;
  *param_2 = ~-(uint)(fVar4 <= 0.0) & (uint)((3.0 - fVar1 * fVar4 * fVar1) * fVar1 * 0.5 * fVar4);
  param_2[1] = ~-(uint)(fVar5 <= 0.0) & (uint)((3.0 - fVar2 * fVar5 * fVar2) * fVar2 * 0.5 * fVar5);
  param_2[2] = ~-(uint)(fVar6 <= 0.0) & (uint)((3.0 - fVar8 * fVar6 * fVar8) * fVar8 * 0.5 * fVar6);
  param_2[3] = ~-(uint)(fVar3 <= 0.0) & (uint)((3.0 - fVar9 * fVar3 * fVar9) * fVar9 * 0.5 * fVar3);
  return;
}

// 0101B0B0  FUN_0101b0b0  size=8  [run]
undefined4 FUN_0101b0b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0101B0C0  FUN_0101b0c0  size=63  [run]
float10 __fastcall FUN_0101b0c0(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = 0.0;
  pfVar1 = (float *)(param_1 + 8);
  iVar2 = 2;
  do {
    fVar3 = fVar3 + pfVar1[-2] + pfVar1[-1] + *pfVar1 + pfVar1[1] + pfVar1[2] + pfVar1[3];
    pfVar1 = pfVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (float10)fVar3;
}

// 0101B130  FUN_0101b130  size=15  [run]
undefined4 __fastcall FUN_0101b130(undefined4 param_1)

{
  FUN_010065a0();
  return param_1;
}

// 0101B140  FUN_0101b140  size=25  [run]
undefined4 __thiscall FUN_0101b140(undefined4 param_1,undefined4 param_2)

{
  FUN_010065b0(param_2);
  return param_1;
}

// 0101B160  FUN_0101b160  size=194  [run]
void FUN_0101b160(int param_1)

{
  int in_EAX;
  short *psVar1;
  float *pfVar2;
  short *psVar3;
  float *pfVar4;
  int local_8;
  
  pfVar4 = (float *)(in_EAX + 0xc);
  psVar3 = (short *)(in_EAX + 0x34);
  pfVar2 = (float *)(param_1 + 4);
  psVar1 = (short *)(param_1 + 0x30);
  local_8 = 2;
  do {
    pfVar2[-1] = pfVar4[-3] + pfVar2[-1];
    *psVar1 = *psVar1 + *(short *)((in_EAX - param_1) + (int)psVar1);
    *pfVar2 = *(float *)((in_EAX - param_1) + (int)pfVar2) + *pfVar2;
    psVar1[1] = psVar1[1] + psVar3[-1];
    pfVar2[1] = pfVar4[-1] + pfVar2[1];
    psVar1[2] = psVar1[2] + *psVar3;
    pfVar2[2] = pfVar2[2] + *pfVar4;
    psVar1[3] = psVar1[3] + psVar3[1];
    pfVar2[3] = pfVar4[1] + pfVar2[3];
    psVar1[4] = psVar1[4] + psVar3[2];
    pfVar2[4] = pfVar4[2] + pfVar2[4];
    psVar1[5] = psVar1[5] + psVar3[3];
    psVar1 = psVar1 + 6;
    psVar3 = psVar3 + 6;
    pfVar2 = pfVar2 + 6;
    pfVar4 = pfVar4 + 6;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

// 0101B230  FUN_0101b230  size=331  [run]
void FUN_0101b230(undefined4 param_1,float param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  short *psVar5;
  undefined1 local_104 [256];
  
  uVar2 = 0;
  puVar3 = (ushort *)(param_3 + 0x32);
  iVar4 = 2;
  do {
    uVar1 = puVar3[-1];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = uVar1;
    }
    uVar1 = *puVar3;
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = uVar1;
    }
    uVar1 = puVar3[1];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = uVar1;
    }
    uVar1 = puVar3[2];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = uVar1;
    }
    uVar1 = puVar3[3];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = uVar1;
    }
    uVar1 = puVar3[4];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = uVar1;
    }
    puVar3 = puVar3 + 6;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (param_2 <= 0.0) {
    FUN_01015b50(local_104,200,"%s (%i)",*(undefined4 *)(param_3 + 100),uVar2);
  }
  else {
    FUN_01015b50(local_104,200,"%s (%i) %4.1f%%",*(undefined4 *)(param_3 + 100),uVar2,
                 (double)((*(float *)(param_3 + 4) * 100.0) / param_2));
  }
  FUN_01018f60(param_1,"%-34s%s",local_104,&DAT_01705acc);
  iVar4 = 0;
  psVar5 = (short *)(param_3 + 0x30);
  do {
    if (*psVar5 != 0) {
      FUN_01018f60(param_1,"% 12.3f: ",(double)*(float *)(param_3 + iVar4 * 4));
    }
    iVar4 = iVar4 + 1;
    psVar5 = psVar5 + 1;
  } while (iVar4 < 0xc);
  FUN_01018f60(param_1,&DAT_016cc51c);
  return;
}

// 0101B380  FUN_0101b380  size=91  [run]
undefined4 FUN_0101b380(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined1 local_18 [2];
  undefined1 local_16;
  undefined2 local_c;
  undefined2 local_a;
  undefined1 local_8;
  
  FUN_01015ea0(local_18,0,0x12);
  local_16 = 2;
  local_a = (undefined2)param_4;
  local_c = (undefined2)param_3;
  local_8 = 0x20;
  FUN_01018fc0(local_18,0x12);
  FUN_01018fc0(param_1,param_3 * param_4 * 4);
  return 1;
}

// 0101B3E0  FUN_0101b3e0  size=211  [run]
void __fastcall FUN_0101b3e0(int param_1)

{
  int *piVar1;
  int in_EAX;
  byte bVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  undefined4 *local_8;
  
  piVar1 = (int *)(&PTR_DAT_018eac98)[param_1];
  local_8 = (undefined4 *)(unaff_ESI + in_EAX * 4);
  iVar4 = 0;
  iVar3 = 0;
  do {
    bVar2 = (byte)iVar3;
    if ((piVar1[6] << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *(undefined4 *)(iVar3 + unaff_ESI) = 0xff000000;
    }
    if ((piVar1[5] << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *local_8 = 0xff000000;
    }
    if ((piVar1[4] << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *(undefined4 *)(unaff_ESI + (iVar4 + in_EAX * 2) * 4) = 0xff000000;
    }
    if ((piVar1[3] << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *(undefined4 *)(unaff_ESI + (iVar4 + in_EAX * 3) * 4) = 0xff000000;
    }
    if ((piVar1[2] << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *(undefined4 *)(unaff_ESI + (iVar4 + in_EAX * 4) * 4) = 0xff000000;
    }
    if ((piVar1[1] << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *(undefined4 *)(unaff_ESI + (iVar4 + in_EAX * 5) * 4) = 0xff000000;
    }
    if ((*piVar1 << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *(undefined4 *)(unaff_ESI + (iVar4 + in_EAX * 6) * 4) = 0xff000000;
    }
    local_8 = local_8 + 1;
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar3 < 0x20);
  return;
}

// 0101B4C0  FUN_0101b4c0  size=69  [run]
int FUN_0101b4c0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1000;
  do {
    FUN_0101b3e0();
    iVar1 = iVar2 * 0x66666667;
    iVar2 = iVar2 / 10;
  } while (0 < iVar2);
  return iVar1;
}

// 0101B550  FUN_0101b550  size=22  [run]
int FUN_0101b550(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return (param_1 / param_2 - param_4) / param_3 - param_5;
}

// 0101B5B0  FUN_0101b5b0  size=59  [run]
int __fastcall FUN_0101b5b0(int param_1)

{
  FUN_010066e0("Unknown Heading");
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  return param_1;
}

// 0101B5F0  FUN_0101b5f0  size=525  [run]
void FUN_0101b5f0(uint *param_1,uint *param_2,undefined4 param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_2c;
  uint local_28;
  undefined1 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar3 = param_1;
  if (param_1 < param_2) {
    do {
      uVar1 = *puVar3;
      if (param_4 == '\0') {
        if (uVar1 < 0x15) goto switchD_0101b66e_caseD_46;
LAB_0101b647:
        iVar2 = FUN_010101b0(uVar1,&local_24);
        if (iVar2 != 0) break;
        *puVar3 = (uint)local_24;
        switch(*local_24) {
        case 0x45:
        case 0x53:
        case 0x54:
        case 0x6c:
          puVar4 = puVar3 + 3;
          if (param_4 != '\0') {
            uVar1 = puVar3[1];
            local_8 = CONCAT13((char)uVar1,
                               CONCAT12((char)(uVar1 >> 8),
                                        CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18))));
            puVar3[1] = local_8;
            uVar1 = puVar3[2];
            local_c = CONCAT13((char)uVar1,
                               CONCAT12((char)(uVar1 >> 8),
                                        CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18))));
            puVar3[2] = local_c;
          }
          break;
        case 0x46:
        case 0x4e:
        case 0x50:
        case 0x70:
          goto switchD_0101b66e_caseD_46;
        default:
          goto switchD_0101b66e_caseD_47;
        case 0x4c:
          puVar4 = puVar3 + 4;
          iVar2 = FUN_010101b0(puVar3[3],&local_2c);
          if (iVar2 == 0) {
            puVar3[3] = local_2c;
          }
          if (param_4 != '\0') {
            uVar1 = puVar3[1];
            local_18._0_2_ = CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18));
            local_18 = CONCAT13((char)uVar1,CONCAT12((char)(uVar1 >> 8),(undefined2)local_18));
            puVar3[1] = local_18;
            uVar1 = puVar3[2];
            local_1c = CONCAT13((char)uVar1,
                                CONCAT12((char)(uVar1 >> 8),
                                         CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18))));
            puVar3[2] = local_1c;
          }
          break;
        case 0x4d:
          puVar4 = puVar3 + 2;
          if (param_4 != '\0') {
            uVar1 = puVar3[1];
            local_20 = CONCAT13((char)uVar1,
                                CONCAT12((char)(uVar1 >> 8),
                                         CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18))));
            puVar3[1] = local_20;
          }
          break;
        case 0x4f:
          puVar4 = puVar3 + 4;
          iVar2 = FUN_010101b0(puVar3[3],&local_28);
          if (iVar2 == 0) {
            puVar3[3] = local_28;
          }
          if (param_4 != '\0') {
            uVar1 = puVar3[1];
            local_10._0_2_ = CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18));
            local_10 = CONCAT13((char)uVar1,CONCAT12((char)(uVar1 >> 8),(undefined2)local_10));
            puVar3[1] = local_10;
            uVar1 = puVar3[2];
            local_14 = CONCAT13((char)uVar1,
                                CONCAT12((char)(uVar1 >> 8),
                                         CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18))));
            puVar3[2] = local_14;
          }
        }
      }
      else {
        param_1 = (uint *)CONCAT13((char)uVar1,
                                   CONCAT12((char)(uVar1 >> 8),
                                            CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18))));
        if (0x14 < param_1) goto LAB_0101b647;
        *puVar3 = (uint)param_1;
switchD_0101b66e_caseD_46:
        puVar4 = puVar3 + 1;
      }
      puVar3 = puVar4;
    } while (puVar4 < param_2);
switchD_0101b66e_caseD_47:
  }
  return;
}

// 0101B850  FUN_0101b850  size=195  [run]
void __thiscall FUN_0101b850(int param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  
  uVar3 = *(uint *)(param_2 + 4);
  if (uVar3 < 0xc) {
    uVar4 = *(uint *)(param_4 + 4);
    uVar5 = *(uint *)(param_3 + 4);
    if (uVar4 < uVar5) {
      iVar8 = (uVar4 - uVar5) + -1;
    }
    else {
      iVar8 = uVar4 - uVar5;
    }
    fVar2 = (float)iVar8;
    if (iVar8 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(float *)(param_1 + uVar3 * 4) =
         fVar2 * *(float *)(param_2 + 0x10) + *(float *)(param_1 + uVar3 * 4);
    psVar1 = (short *)(param_1 + 0x30 + uVar3 * 2);
    *psVar1 = *psVar1 + 1;
  }
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar3 < 0xc) {
    if (*(uint *)(param_4 + 4) < *(uint *)(param_3 + 4)) {
      iVar8 = (*(int *)(param_4 + 8) - *(int *)(param_3 + 8)) + -1;
    }
    else {
      iVar8 = *(int *)(param_4 + 8) - *(int *)(param_3 + 8);
    }
    fVar2 = (float)iVar8;
    if (iVar8 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(float *)(param_1 + uVar3 * 4) =
         fVar2 * *(float *)(param_2 + 0x14) + *(float *)(param_1 + uVar3 * 4);
    psVar1 = (short *)(param_1 + 0x30 + uVar3 * 2);
    *psVar1 = *psVar1 + 1;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar6 = *(int *)(param_3 + 4);
    fVar2 = *(float *)(param_2 + 0x10);
    iVar8 = *(int *)(param_3 + 4);
  }
  else {
    if (*(int *)(param_2 + 0xc) != 1) {
      return;
    }
    iVar6 = *(int *)(param_3 + 8);
    fVar2 = *(float *)(param_2 + 0x14);
    iVar8 = *(int *)(param_3 + 8);
  }
  fVar7 = (float)iVar8;
  if (iVar6 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  *(double *)(param_1 + 0x58) = (double)(fVar7 * fVar2);
  return;
}

// 0101B920  FUN_0101b920  size=107  [run]
uint FUN_0101b920(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int unaff_EDI;
  
  uVar1 = *param_2;
  if (((int)uVar1 < *(int *)(unaff_EDI + 0x4c)) &&
     (uVar1 = FUN_01015b90(*(undefined4 *)(*(int *)(*(int *)(unaff_EDI + 0x48) + uVar1 * 4) + 100),
                           param_1), uVar1 == 0)) {
    return 1;
  }
  uVar2 = 0;
  if (0 < *(int *)(unaff_EDI + 0x4c)) {
    do {
      uVar1 = FUN_01015b90(*(undefined4 *)(*(int *)(*(int *)(unaff_EDI + 0x48) + uVar2 * 4) + 100),
                           param_1);
      if (uVar1 == 0) {
        *param_2 = uVar2;
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)(unaff_EDI + 0x4c));
  }
  return uVar1 & 0xffffff00;
}

// 0101B9A0  FUN_0101b9a0  size=86  [run]
void FUN_0101b9a0(int param_1,int param_2,float param_3)

{
  int iVar1;
  
  *(float *)(param_1 + param_2 * 4) = *(float *)(param_1 + param_2 * 4) * param_3;
  *(undefined2 *)(param_1 + 0x30 + param_2 * 2) = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      FUN_0101b9a0(*(undefined4 *)(*(int *)(param_1 + 0x48) + iVar1 * 4),param_2,param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  return;
}

// 0101BA00  FUN_0101ba00  size=276  [run]
int FUN_0101ba00(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*param_1 != '\0') {
    iVar2 = *(int *)(param_2 + 0x60);
    piVar6 = *(int **)(iVar2 + 0x48);
    iVar3 = *piVar6;
    if (iVar3 == param_2) {
      if (*(int *)(iVar2 + 0x60) != 0) {
        param_2 = iVar2;
      }
    }
    else {
      iVar1 = 0;
      piVar5 = piVar6;
      if (0 < *(int *)(iVar2 + 0x4c)) {
        do {
          if (*piVar5 == param_2) {
            iVar3 = piVar6[iVar1 + -1];
            break;
          }
          iVar1 = iVar1 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar1 < *(int *)(iVar2 + 0x4c));
      }
      iVar2 = *(int *)(iVar3 + 0x4c);
      param_2 = iVar3;
      while ((0 < iVar2 && ((*(byte *)(param_2 + 0x68) & 1) != 0))) {
        param_2 = *(int *)(*(int *)(param_2 + 0x48) + -4 + iVar2 * 4);
        iVar2 = *(int *)(param_2 + 0x4c);
      }
    }
  }
  if (param_1[1] != '\0') {
    iVar2 = param_2;
    if ((*(int *)(param_2 + 0x4c) < 1) || ((*(byte *)(param_2 + 0x68) & 1) == 0)) {
      do {
        iVar3 = *(int *)(iVar2 + 0x60);
        iVar1 = *(int *)(iVar3 + 0x4c);
        iVar4 = 0;
        if (0 < iVar1) {
          piVar6 = *(int **)(iVar3 + 0x48);
          do {
            if ((*piVar6 == iVar2) && (iVar4 < iVar1 + -1)) {
              param_2 = *(int *)(*(int *)(iVar3 + 0x48) + 4 + iVar4 * 4);
              goto LAB_0101baca;
            }
            iVar4 = iVar4 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar4 < iVar1);
        }
        iVar2 = iVar3;
      } while (*(int *)(iVar3 + 0x60) != 0);
    }
    else {
      param_2 = **(int **)(param_2 + 0x48);
    }
  }
LAB_0101baca:
  if (param_1[2] != '\0') {
    if ((*(uint *)(param_2 + 0x68) & 1) == 0) {
      iVar2 = *(int *)(param_2 + 0x60);
      if (*(int *)(iVar2 + 0x60) != 0) {
        *(uint *)(iVar2 + 0x68) = *(uint *)(iVar2 + 0x68) & 0xfffffffe;
        param_2 = iVar2;
      }
    }
    else {
      *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xfffffffe;
    }
  }
  if (param_1[3] != '\0') {
    if ((*(uint *)(param_2 + 0x68) & 1) == 0) {
      *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) | 1;
    }
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) | 1;
  }
  return param_2;
}

// 0101BB20  FUN_0101bb20  size=118  [run]
int FUN_0101bb20(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_01015cd0(*(undefined4 *)(param_1 + 100));
  iVar1 = iVar1 + 8 + param_2 * param_3;
  if (((char)param_4 != '\0') && ((*(byte *)(param_1 + 0x68) & 1) == 0)) {
    return iVar1;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      iVar2 = FUN_0101bb20(*(undefined4 *)(*(int *)(param_1 + 0x48) + iVar3 * 4),param_2 + 1,param_3
                           ,param_4);
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x4c));
  }
  return iVar1;
}

// 0101BBA0  FUN_0101bba0  size=604  [run]
void FUN_0101bba0(undefined4 param_1,ushort *param_2,int param_3,float param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  char *pcVar8;
  undefined1 local_108 [256];
  int local_8;
  
  iVar2 = (int)param_2;
  if (param_3 != 0) {
    if (1 < param_3) {
      iVar5 = param_3 + -1;
      do {
        FUN_01018f60(param_1,&DAT_016c5974);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar4 = 0;
    iVar6 = 0;
    puVar3 = (ushort *)((int)param_2 + 0x32);
    iVar5 = 2;
    do {
      uVar1 = puVar3[-1];
      if ((uVar1 != 0) && (iVar6 = iVar6 + 1, uVar4 < uVar1)) {
        uVar4 = uVar1;
      }
      uVar1 = *puVar3;
      if ((uVar1 != 0) && (iVar6 = iVar6 + 1, uVar4 < uVar1)) {
        uVar4 = uVar1;
      }
      uVar1 = puVar3[1];
      if ((uVar1 != 0) && (iVar6 = iVar6 + 1, uVar4 < uVar1)) {
        uVar4 = uVar1;
      }
      uVar1 = puVar3[2];
      if ((uVar1 != 0) && (iVar6 = iVar6 + 1, uVar4 < uVar1)) {
        uVar4 = uVar1;
      }
      uVar1 = puVar3[3];
      if ((uVar1 != 0) && (iVar6 = iVar6 + 1, uVar4 < uVar1)) {
        uVar4 = uVar1;
      }
      uVar1 = puVar3[4];
      if ((uVar1 != 0) && (iVar6 = iVar6 + 1, uVar4 < uVar1)) {
        uVar4 = uVar1;
      }
      puVar3 = puVar3 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_01015b50(local_108,200,"%s(%i)",*(undefined4 *)((int)param_2 + 100),uVar4);
    if (uVar4 < 2) {
      FUN_01015b50(local_108,200,&DAT_016575ac,*(undefined4 *)((int)param_2 + 100));
    }
    else if (param_4 == 1.0) {
      FUN_01015b50(local_108,200,"%s (%i)",*(undefined4 *)((int)param_2 + 100),uVar4);
    }
    else {
      FUN_01015b50(local_108,200,"%s (%4.1f)",*(undefined4 *)((int)param_2 + 100),
                   (double)((float)uVar4 * param_4));
    }
    FUN_01018f60(param_1,"%-32s",local_108);
    iVar5 = 3;
    do {
      FUN_01018f60(param_1,&DAT_016c5974);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (iVar6 < 1) {
      FUN_01018f60(param_1,"% 12.3f\n",0);
    }
    else {
      param_2 = (ushort *)((int)param_2 + 0x30);
      iVar5 = 0;
      local_8 = iVar6;
      do {
        uVar1 = *param_2;
        if (uVar1 != 0) {
          fVar7 = *(float *)(iVar2 + iVar5 * 4) * param_4;
          if (uVar1 < uVar4) {
            fVar7 = fVar7 * ((float)uVar4 / (float)uVar1);
          }
          local_8 = local_8 + -1;
          if (local_8 == 0) {
            pcVar8 = "% 12.3f\n";
          }
          else {
            pcVar8 = "% 12.3f: ";
          }
          FUN_01018f60(param_1,pcVar8,(double)fVar7);
        }
        param_2 = param_2 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0xc);
    }
  }
  iVar5 = 0;
  if (0 < *(int *)(iVar2 + 0x4c)) {
    do {
      FUN_0101bba0(param_1,*(undefined4 *)(*(int *)(iVar2 + 0x48) + iVar5 * 4),param_3 + 1,param_4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar2 + 0x4c));
  }
  return;
}

// 0101BE00  FUN_0101be00  size=85  [run]
undefined4 FUN_0101be00(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = 0;
  if (0 < *(int *)(unaff_EDI + 0x4c)) {
    do {
      iVar1 = FUN_01015b90(param_1,*(undefined4 *)
                                    (*(int *)(*(int *)(unaff_EDI + 0x48) + iVar2 * 4) + 100));
      if (iVar1 == 0) {
        return *(undefined4 *)(*(int *)(unaff_EDI + 0x48) + iVar2 * 4);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_EDI + 0x4c));
  }
  if ((param_2 != '\0') && (0 < *(int *)(unaff_EDI + 0x4c))) {
    return **(undefined4 **)(unaff_EDI + 0x48);
  }
  return 0;
}

// 0101BE60  FUN_0101be60  size=85  [run]
undefined4 __fastcall FUN_0101be60(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x4c);
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = *(int **)(unaff_EDI + 0x48);
    do {
      if (*piVar2 == param_2) break;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar1);
  }
  iVar3 = iVar3 + 1;
  if (iVar3 < iVar1) {
    do {
      iVar1 = FUN_01015b90(param_3,*(undefined4 *)
                                    (*(int *)(*(int *)(unaff_EDI + 0x48) + iVar3 * 4) + 100));
      if (iVar1 == 0) {
        return *(undefined4 *)(*(int *)(unaff_EDI + 0x48) + iVar3 * 4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(unaff_EDI + 0x4c));
  }
  return 0;
}

// 0101BEC0  FUN_0101bec0  size=85  [run]
int FUN_0101bec0(int param_1,int param_2,double param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) ||
     (iVar2 = param_2,
     (double)*(float *)(param_2 + param_4 * 4) + *(double *)(param_2 + 0x58) < param_3)) {
    iVar2 = param_1;
    param_2 = param_1;
  }
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = FUN_01020f20(iVar1,param_3,param_4);
    param_2 = iVar1;
  }
  return param_2;
}

// 0101BF20  FUN_0101bf20  size=71  [run]
undefined4 __thiscall FUN_0101bf20(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = FUN_01015be0(*(uint *)(*(int *)(param_1 + 8) + iVar2 * 8) & 0xfffffffe,param_2);
      if (iVar1 == 0) {
        return *(undefined4 *)(*(int *)(param_1 + 8) + 4 + iVar2 * 8);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return *(undefined4 *)(param_1 + 0x14);
}

// 0101BF80  FUN_0101bf80  size=99  [run]
void FUN_0101bf80(int *param_1,double param_2,double param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      iVar1 = *(int *)(*param_1 + iVar2 * 4);
      if ((*(int *)(iVar1 + 0x6c) != 2) &&
         (*(double *)(iVar1 + 0x58) <= param_2 && param_2 != *(double *)(iVar1 + 0x58))) {
        *(double *)(iVar1 + 0x58) = *(double *)(iVar1 + 0x58) + param_3;
      }
      FUN_0101bf80(*(int *)(*param_1 + iVar2 * 4) + 0x48,param_2,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return;
}

// 0101BFF0  FUN_0101bff0  size=138  [run]
undefined4 FUN_0101bff0(int *param_1,double param_2,double *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      iVar1 = *(int *)(iVar3 * 4 + *param_1);
      if (*(int *)(iVar1 + 0x6c) != 2) {
        dVar4 = *(double *)(iVar1 + 0x58);
        if ((dVar4 < param_2) && (param_2 < *param_3 - dVar4)) {
          return 1;
        }
        if (dVar4 < *param_3) {
          dVar4 = *param_3;
        }
        *param_3 = dVar4;
      }
      cVar2 = FUN_0101bff0(*(int *)(*param_1 + iVar3 * 4) + 0x48,param_2,param_3);
      if (cVar2 != '\0') {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  return 0;
}

// 0101C090  FUN_0101c090  size=111  [run]
void FUN_0101c090(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  if (param_1 < param_2) {
    do {
      uVar1 = *param_1;
      if (uVar1 < 0x15) {
switchD_0101c0cc_caseD_4e:
        param_1 = param_1 + 1;
      }
      else {
        FUN_010100a0(&PTR_vftable_018e9b94,uVar1,uVar1);
        switch(*(undefined1 *)*param_1) {
        case 0x45:
        case 0x53:
        case 0x54:
        case 0x6c:
          param_1 = param_1 + 3;
          break;
        default:
          goto switchD_0101c0cc_caseD_46;
        case 0x4c:
        case 0x4f:
          FUN_010100a0(&PTR_vftable_018e9b94,param_1[3],param_1[3]);
          param_1 = param_1 + 4;
          break;
        case 0x4d:
          param_1 = param_1 + 2;
          break;
        case 0x4e:
        case 0x50:
        case 0x70:
          goto switchD_0101c0cc_caseD_4e;
        }
      }
    } while (param_1 < param_2);
switchD_0101c0cc_caseD_46:
  }
  return;
}

// 0101C140  FUN_0101c140  size=246  [run]
void __thiscall FUN_0101c140(int *param_1,undefined1 *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  param_4 = param_4 - param_3;
  if ((int)((param_1[5] & 0x3fffffffU) - param_1[4]) < param_4) {
    *param_2 = 0;
    return;
  }
  piVar1 = (int *)(*param_1 + *(int *)(param_5 + 0x18) * 0xc);
  if (piVar1[1] == (*(uint *)(*param_1 + 8 + *(int *)(param_5 + 0x18) * 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,0x24);
  }
  if (*piVar1 + piVar1[1] * 0x24 != 0) {
    FUN_0101b5b0();
  }
  iVar2 = *piVar1 + piVar1[1] * 0x24;
  piVar1[1] = piVar1[1] + 1;
  FUN_010067a0(param_5);
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_5 + 4);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_5 + 8);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_5 + 0x10);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_5 + 0x14);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_5 + 0x18);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_5 + 0x1c);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_5 + 0x20);
  iVar3 = param_1[4];
  *(int *)(iVar2 + 0x1c) = iVar3;
  *(int *)(iVar2 + 0x20) = iVar3 + param_4;
  iVar2 = param_1[4];
  param_1[4] = iVar2 + param_4;
  FUN_01015e80(param_1[3] + iVar2,param_3,param_4);
  *param_2 = 1;
  return;
}

// 0101C240  FUN_0101c240  size=442  [run]
void FUN_0101c240(int param_1,float param_2,float param_3,int param_4,int param_5)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *unaff_ESI;
  int iVar6;
  double dVar7;
  double local_10;
  int local_8;
  
  piVar4 = *(int **)(param_1 + 0x48);
  iVar6 = *piVar4;
  iVar2 = 0;
  piVar5 = piVar4;
  while( true ) {
    if ((iVar6 == 0) || (*(int *)(iVar6 + 0x6c) != 2)) goto LAB_0101c271;
    iVar2 = iVar2 + 1;
    piVar5 = piVar5 + 1;
    if (*(int *)(param_1 + 0x4c) <= iVar2) break;
    iVar6 = *piVar5;
  }
  iVar6 = 0;
LAB_0101c271:
  iVar2 = piVar4[*(int *)(param_1 + 0x4c) + -1];
  iVar3 = *(int *)(param_1 + 0x4c) + -1;
  if (iVar2 != 0) {
    piVar4 = piVar4 + iVar3;
    while (*(int *)(iVar2 + 0x6c) == 2) {
      piVar4 = piVar4 + -1;
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return;
      }
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        return;
      }
    }
    if (iVar6 != 0) {
      dVar1 = *(double *)(iVar6 + 0x58);
      local_10 = 0.0;
      local_8 = param_4;
      while ((local_8 != 0 && (local_10 < dVar1 - (double)param_2))) {
        local_10 = local_10 + (double)param_3;
        if (unaff_ESI[1] == (unaff_ESI[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94);
        }
        *(undefined4 *)(*unaff_ESI + unaff_ESI[1] * 4) = 0;
        unaff_ESI[1] = unaff_ESI[1] + 1;
        local_8 = local_8 + -1;
      }
      dVar7 = ((double)*(float *)(iVar2 + param_5 * 4) + *(double *)(iVar2 + 0x58)) -
              (double)param_2;
      dVar1 = *(double *)(iVar6 + 0x58);
      *(double *)(param_1 + 0x58) = dVar1;
      iVar6 = 0;
      *(float *)(param_1 + param_5 * 4) = (float)((((double)param_2 + dVar7) - dVar1) + 1.0);
      if (local_8 == 0) {
        return;
      }
      do {
        if (dVar7 <= local_10) {
          return;
        }
        iVar6 = FUN_0101bec0(param_1,iVar6,(double)param_2 + local_10,param_5);
        if (iVar6 != 0) {
          if (unaff_ESI[1] == (unaff_ESI[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94);
          }
          *(int *)(*unaff_ESI + unaff_ESI[1] * 4) = iVar6;
          unaff_ESI[1] = unaff_ESI[1] + 1;
        }
        local_8 = local_8 + -1;
        local_10 = (double)param_3 + local_10;
      } while (local_8 != 0);
    }
  }
  return;
}

// 0101C400  FUN_0101c400  size=146  [run]
int __thiscall FUN_0101c400(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x80000000;
  *(int *)(param_1 + 0x60) = param_2;
  *(undefined4 *)(param_1 + 100) = param_3;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = param_4;
  if (param_2 != 0) {
    if (*(uint *)(param_2 + 0x4c) == (*(uint *)(param_2 + 0x50) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_2 + 0x48),4);
    }
    *(int *)(*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x4c) * 4) = param_1;
    *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  }
  iVar1 = 0;
  puVar2 = (undefined2 *)(param_1 + 0x30);
  do {
    *(undefined4 *)(param_1 + iVar1 * 4) = 0;
    *puVar2 = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0xc);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return param_1;
}

// 0101C4A0  FUN_0101c4a0  size=94  [run]
void __fastcall FUN_0101c4a0(int param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x4c)) {
    iVar1 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x48) + iVar1 * 4) != 0) {
        FUN_010221a0(1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if ((*(uint *)(param_1 + 0x50) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x48),*(uint *)(param_1 + 0x50) * 4);
  }
  *(undefined4 *)(param_1 + 0x50) = 0x80000000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}

// 0101C500  FUN_0101c500  size=126  [run]
undefined4 FUN_0101c500(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EDI;
  
  if ((param_3 != '\0') && (iVar4 = 0, unaff_EDI != 0)) {
    for (; (param_1 != 0 && (iVar4 < *(int *)(unaff_EDI + 0x4c))); iVar4 = iVar4 + 1) {
      iVar1 = *(int *)(*(int *)(unaff_EDI + 0x48) + iVar4 * 4);
      if (*(int *)(iVar1 + 100) != 0) {
        iVar1 = FUN_01015b90(*(undefined4 *)(iVar1 + 100),param_1);
        if (iVar1 == 0) {
          return *(undefined4 *)(*(int *)(unaff_EDI + 0x48) + iVar4 * 4);
        }
      }
    }
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar4 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x70);
  if (iVar4 != 0) {
    uVar3 = FUN_0101c400(unaff_EDI,param_1,param_2);
    return uVar3;
  }
  return 0;
}

// 0101C580  FUN_0101c580  size=263  [run]
void FUN_0101c580(int param_1,int param_2,int param_3,int param_4,float param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  LPVOID pvVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int local_8;
  
  iVar6 = param_3;
  if (0xb < param_3) {
    iVar6 = 0xb;
  }
  param_3 = 0;
  local_8 = 0;
  if (0 < *(int *)(param_2 + 0x4c)) {
    fVar7 = 1.0 - param_5;
    do {
      iVar1 = *(int *)(*(int *)(param_2 + 0x48) + local_8 * 4);
      cVar3 = FUN_0101b920(*(undefined4 *)(iVar1 + 100),&param_3);
      iVar2 = param_3;
      if (cVar3 == '\0') {
        pvVar4 = TlsGetValue(DAT_01f8fc4c);
        iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x70);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_0101c400(param_1,*(undefined4 *)(iVar1 + 100),*(undefined4 *)(iVar1 + 0x6c));
        }
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x48) + param_3 * 4);
      }
      *(float *)(iVar5 + iVar6 * 4) =
           *(float *)(iVar1 + param_4 * 4) * fVar7 + *(float *)(iVar5 + iVar6 * 4);
      *(undefined2 *)(iVar5 + 0x30 + iVar6 * 2) = *(undefined2 *)(iVar1 + 0x30 + param_4 * 2);
      FUN_0101c580(iVar5,iVar1,iVar6,param_4,param_5);
      if (iVar2 < *(int *)(param_2 + 0x4c) + -1) {
        param_3 = iVar2 + 1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_2 + 0x4c));
  }
  return;
}

// 0101C690  FUN_0101c690  size=59  [run]
void FUN_0101c690(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0101b9a0(param_1,param_3,param_5);
  FUN_0101c580(param_1,param_2,param_3,param_4,param_5);
  return;
}

// 0101C6D0  FUN_0101c6d0  size=909  [run]
void FUN_0101c6d0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  undefined1 local_24 [12];
  int local_18;
  float local_14;
  int local_10;
  float local_c;
  int local_8;
  
  piVar1 = param_6;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x80000000;
  hkOstream::hkOstream_3(&local_30);
  iVar8 = param_4 + param_5;
  local_8 = iVar8;
  if (param_3 != 0) {
    if ((char)param_6[4] != '\0') {
      if (param_6[5] == param_2) {
        uVar2 = CONCAT31((int3)((uint)param_6[5] >> 8),(char)param_6[6]);
      }
      else {
        uVar2 = 0x20;
      }
      FUN_01018ce0(uVar2);
    }
    iVar3 = param_6[2] * (param_3 + -1);
    if (0 < iVar3) {
      do {
        FUN_01018ce0(0x20);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if ((char)param_6[4] != '\0') {
      if (*(int *)(param_2 + 0x4c) < 1) {
        uVar10 = 0x20;
      }
      else if ((*(byte *)(param_2 + 0x68) & 1) == 0) {
        uVar10 = (undefined1)param_6[6];
      }
      else {
        uVar10 = *(undefined1 *)((int)param_6 + 0x19);
      }
      FUN_01018ce0(uVar10);
    }
    iVar7 = 0;
    iVar9 = 0;
    iVar3 = 0;
    local_18 = 0;
    if (1 < iVar8) {
      puVar4 = (ushort *)(param_2 + 0x32);
      iVar5 = (iVar8 - 2U >> 1) + 1;
      iVar3 = iVar5 * 2;
      do {
        iVar7 = iVar7 + (uint)puVar4[-1];
        iVar9 = iVar9 + (uint)*puVar4;
        puVar4 = puVar4 + 2;
        iVar5 = iVar5 + -1;
        iVar8 = local_8;
      } while (iVar5 != 0);
    }
    uVar6 = 0;
    if (iVar3 < iVar8) {
      uVar6 = (uint)*(ushort *)(param_2 + 0x30 + iVar3 * 2);
    }
    if ((*(char *)((int)param_6 + 0x1b) == '\0') || (*(int *)(param_2 + 0x6c) != 0)) {
      uVar2 = *(undefined4 *)(param_2 + 100);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x4c);
      if (0 < iVar3) {
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      uVar2 = *(undefined4 *)(param_2 + 100);
    }
    FUN_01018f60(local_24,CONCAT44(uVar2,"%s (%i) "),uVar6 + iVar7 + iVar9);
    iVar3 = 0;
    local_c = 0.0;
    param_6 = (int *)0x0;
    local_14 = 0.0;
    local_10 = 0;
    if (0 < iVar8) {
      puVar4 = (ushort *)(param_2 + 0x30);
      do {
        if (*(char *)((int)piVar1 + 0x1a) == '\0') {
          iVar8 = ((piVar1[3] * (param_3 + -1) + piVar1[1] * iVar3) - local_2c) + *piVar1;
          if (0 < iVar8) {
            do {
              local_18 = iVar8;
              FUN_01018ce0(0x20);
              local_18 = local_18 + -1;
              iVar8 = local_18;
            } while (local_18 != 0);
          }
        }
        else {
          FUN_01018ce0(9);
        }
        FUN_01018f60(local_24,"%-6.3f (%i)",(double)*(float *)(param_2 + iVar3 * 4),*puVar4);
        if (iVar3 < param_4) {
          local_c = *(float *)(param_2 + iVar3 * 4) + local_c;
          param_6 = (int *)((int)param_6 + (uint)*puVar4);
        }
        else {
          local_14 = *(float *)(param_2 + iVar3 * 4) + local_14;
          local_10 = local_10 + (uint)*puVar4;
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
        iVar8 = local_8;
      } while (iVar3 < local_8);
    }
    if (1 < param_4) {
      if (*(char *)((int)piVar1 + 0x1a) == '\0') {
        iVar3 = ((piVar1[3] * (param_3 + -1) + piVar1[1] * iVar8) - local_2c) + *piVar1;
        if (0 < iVar3) {
          do {
            FUN_01018ce0(0x20);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        FUN_01018ce0(9);
      }
      iVar8 = iVar8 + 1;
      FUN_01018f60(local_24,"%-6.3f (%i)",(double)(local_c / (float)param_4),param_6);
    }
    if (1 < param_5) {
      if (*(char *)((int)piVar1 + 0x1a) == '\0') {
        iVar8 = ((piVar1[3] * (param_3 + -1) + piVar1[1] * iVar8) - local_2c) + *piVar1;
        if (0 < iVar8) {
          do {
            FUN_01018ce0(0x20);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      else {
        FUN_01018ce0(9);
      }
      FUN_01018f60(local_24,"%-6.3f (%i)",(double)(local_14 / (float)param_5),local_10);
    }
    FUN_01018d00(local_30);
    FUN_01018ce0(10);
  }
  if ((((char)piVar1[4] == '\0') || ((*(byte *)(param_2 + 0x68) & 1) != 0)) &&
     (iVar8 = 0, 0 < *(int *)(param_2 + 0x4c))) {
    do {
      FUN_0101c6d0(param_1,*(undefined4 *)(*(int *)(param_2 + 0x48) + iVar8 * 4),param_3 + 1,param_4
                   ,param_5,piVar1);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_2 + 0x4c));
  }
  hkBaseObject::hkBaseObject_38();
  local_2c = 0;
  if (-1 < (int)local_28) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30,local_28 & 0x3fffffff);
  }
  return;
}

// 0101CA60  FUN_0101ca60  size=522  [run]
void FUN_0101ca60(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  undefined1 local_10 [12];
  
  iVar2 = 0;
  iVar1 = FUN_0101bb20(param_1,0,param_5[2],(char)param_5[4]);
  *param_5 = iVar1;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x80000000;
  hkOstream::hkOstream_3(&local_1c);
  FUN_01018f60(local_10,"Timer Name");
  if ((1 < param_2) || (0 < param_3)) {
    if (0 < param_2) {
      do {
        if (*(char *)((int)param_5 + 0x1a) == '\0') {
          iVar1 = (param_5[1] * iVar2 - local_18) + *param_5;
          if (0 < iVar1) {
            do {
              FUN_01018ce0(0x20);
              iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
          }
        }
        else {
          FUN_01018ce0(9);
        }
        FUN_01018f60(local_10,"Thread %d",iVar2);
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_2);
    }
    if (0 < param_3) {
      iVar1 = 0;
      do {
        if (*(char *)((int)param_5 + 0x1a) == '\0') {
          iVar2 = ((iVar1 + param_2) * param_5[1] - local_18) + *param_5;
          if (0 < iVar2) {
            do {
              FUN_01018ce0(0x20);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        else {
          FUN_01018ce0(9);
        }
        FUN_01018f60(local_10,"Spu %d",iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_3);
    }
    iVar1 = param_2 + param_3;
    if (1 < param_2) {
      if (*(char *)((int)param_5 + 0x1a) == '\0') {
        iVar2 = (param_5[1] * iVar1 - local_18) + *param_5;
        if (0 < iVar2) {
          do {
            FUN_01018ce0(0x20);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        FUN_01018ce0(9);
      }
      iVar1 = iVar1 + 1;
      FUN_01018f60(local_10,"Average Cpu");
    }
    if (1 < param_3) {
      if (*(char *)((int)param_5 + 0x1a) == '\0') {
        iVar1 = (param_5[1] * iVar1 - local_18) + *param_5;
        if (0 < iVar1) {
          do {
            FUN_01018ce0(0x20);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      else {
        FUN_01018ce0(9);
      }
      FUN_01018f60(local_10,"Average Spu");
    }
  }
  FUN_01018d00(local_1c);
  FUN_01018f60(param_4,&DAT_01705b38);
  FUN_0101c6d0(param_4,param_1,0,param_2,param_3,param_5);
  hkBaseObject::hkBaseObject_38();
  local_18 = 0;
  if (-1 < (int)local_14) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 & 0x3fffffff);
  }
  return;
}

// 0101CC80  FUN_0101cc80  size=340  [run]
void FUN_0101cc80(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  short *psVar4;
  float *pfVar5;
  short *psVar6;
  float *pfVar7;
  int local_10;
  int local_c;
  
  local_10 = 0;
  if (0 < *(int *)(param_2 + 0x4c)) {
    do {
      iVar1 = *(int *)(*(uint *)(param_2 + 0x48) + local_10 * 4);
      iVar2 = FUN_0101be00(*(undefined4 *)(iVar1 + 100),*(uint *)(param_2 + 0x48) & 0xffffff00);
      if (iVar2 == 0) {
        pvVar3 = TlsGetValue(DAT_01f8fc4c);
        iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x70);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_0101c400(param_1,*(undefined4 *)(iVar1 + 100),*(undefined4 *)(iVar1 + 0x6c));
        }
      }
      pfVar5 = (float *)(iVar2 + 4);
      psVar4 = (short *)(iVar2 + 0x30);
      pfVar7 = (float *)(iVar1 + 0xc);
      psVar6 = (short *)(iVar1 + 0x34);
      local_c = 2;
      do {
        pfVar5[-1] = pfVar7[-3] + pfVar5[-1];
        *psVar4 = *psVar4 + *(short *)((iVar1 - iVar2) + (int)psVar4);
        *pfVar5 = *(float *)((iVar1 - iVar2) + (int)pfVar5) + *pfVar5;
        psVar4[1] = psVar4[1] + psVar6[-1];
        pfVar5[1] = pfVar7[-1] + pfVar5[1];
        psVar4[2] = psVar4[2] + *psVar6;
        pfVar5[2] = pfVar5[2] + *pfVar7;
        psVar4[3] = psVar4[3] + psVar6[1];
        pfVar5[3] = pfVar7[1] + pfVar5[3];
        psVar4[4] = psVar4[4] + psVar6[2];
        pfVar5[4] = pfVar7[2] + pfVar5[4];
        psVar4[5] = psVar4[5] + psVar6[3];
        psVar4 = psVar4 + 6;
        psVar6 = psVar6 + 6;
        pfVar5 = pfVar5 + 6;
        pfVar7 = pfVar7 + 6;
        local_c = local_c + -1;
      } while (local_c != 0);
      FUN_0101cc80(iVar2,iVar1);
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(param_2 + 0x4c));
  }
  return;
}

// 0101CDE0  FUN_0101cde0  size=109  [run]
void __thiscall FUN_0101cde0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_c [4];
  undefined4 local_8;
  
  FUN_010066e0(param_2);
  local_8 = param_3;
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 8),8);
  }
  iVar1 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 8;
  if (iVar1 != 0) {
    FUN_01006740(local_c);
    *(undefined4 *)(iVar1 + 4) = local_8;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  FUN_01006770();
  return;
}

// 0101CE50  FUN_0101ce50  size=213  [run]
undefined4 FUN_0101ce50(undefined4 param_1,int param_2,int param_3,int *param_4,undefined4 param_5)

{
  int *piVar1;
  int in_EAX;
  undefined4 uVar2;
  float in_XMM0_Da;
  int local_14;
  int local_10;
  int local_c;
  float local_8;
  
  uVar2 = 0;
  local_8 = in_XMM0_Da / (float)in_EAX;
  local_14 = 0;
  local_10 = 0;
  local_c = -0x80000000;
  if (0 < in_EAX) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_14);
  }
  piVar1 = (int *)(*param_4 + param_2 * 4);
  if (0 < *(int *)(*piVar1 + 0x4c)) {
    local_10 = 0;
    FUN_0101c240(*piVar1,param_5,local_8);
    if (param_3 < local_10) {
      uVar2 = *(undefined4 *)(local_14 + param_3 * 4);
    }
  }
  local_10 = 0;
  if (-1 < local_c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 4);
  }
  return uVar2;
}

// 0101CF30  FUN_0101cf30  size=517  [run]
void FUN_0101cf30(float param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,float param_8,undefined4 param_9)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int *piVar6;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  float local_8;
  
  iVar5 = param_7;
  param_8 = param_8 / (float)param_7;
  local_18 = 0;
  local_14 = 0;
  local_10 = -0x80000000;
  if (0 < param_7) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_18,param_7,4);
  }
  piVar6 = (int *)(*param_2 + (int)param_1 * 4);
  if (0 < *(int *)(*piVar6 + 0x4c)) {
    local_14 = 0;
    if (*(int *)(in_EAX + 0xc) == 0) {
      uVar1 = *(undefined4 *)(in_EAX + 4);
    }
    else {
      uVar1 = *(undefined4 *)(in_EAX + 8);
    }
    FUN_0101c240(*piVar6,param_9,param_8,iVar5,uVar1);
    local_c = local_14;
    param_2 = (int *)0x0;
    if (0 < local_14) {
      do {
        if (iVar5 <= (int)param_2) break;
        param_8 = -1.7014118e+38;
        piVar6 = param_2;
        if (*(int *)(local_18 + (int)param_2 * 4) != 0) {
          iVar5 = *(int *)(local_18 + (int)param_2 * 4);
          param_8 = -NAN;
          for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x60)) {
            uVar1 = *(undefined4 *)(iVar5 + 100);
            iVar2 = FUN_010101b0(uVar1,&local_8);
            if (iVar2 == 0) {
              param_8 = local_8;
              break;
            }
            iVar2 = FUN_010101b0(uVar1,&param_1);
            if (iVar2 == 0) {
              param_8 = param_1;
            }
            else {
              iVar2 = 0;
              if (0 < *(int *)(param_5 + 0xc)) {
                do {
                  iVar3 = FUN_01015be0(*(uint *)(*(int *)(param_5 + 8) + iVar2 * 8) & 0xfffffffe,
                                       uVar1);
                  if (iVar3 == 0) {
                    param_8 = *(float *)(*(int *)(param_5 + 8) + 4 + iVar2 * 8);
                    FUN_010100a0(&PTR_vftable_018e9b94,uVar1,param_8);
                    piVar6 = param_2;
                    goto LAB_0101d0bc;
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 < *(int *)(param_5 + 0xc));
              }
              FUN_010100a0(&PTR_vftable_018e9b94,uVar1,param_8);
              piVar6 = param_2;
            }
          }
        }
LAB_0101d0bc:
        if (0 < param_4) {
          pfVar4 = (float *)(param_3 + (int)piVar6 * 4);
          iVar5 = param_4;
          do {
            *pfVar4 = param_8;
            pfVar4 = pfVar4 + param_6;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        param_2 = (int *)((int)piVar6 + 1);
        iVar5 = param_7;
      } while ((int)param_2 < local_c);
    }
  }
  local_14 = 0;
  if (-1 < local_10) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 * 4);
  }
  local_18 = 0;
  local_10 = 0x80000000;
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  return;
}

// 0101D140  FUN_0101d140  size=95  [run]
void __fastcall FUN_0101d140(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  param_1[4] = 0;
  local_c = 0;
  if (0 < param_1[1]) {
    local_8 = 0;
    do {
      iVar2 = *param_1 + local_8;
      iVar1 = *(int *)(iVar2 + 4);
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        FUN_01006770();
      }
      local_8 = local_8 + 0xc;
      local_c = local_c + 1;
      *(undefined4 *)(iVar2 + 4) = 0;
    } while (local_c < param_1[1]);
  }
  return;
}

// 0101D1A0  FUN_0101d1a0  size=2094  [run]
int FUN_0101d1a0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                char param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined1 *local_1c8;
  uint local_1c4;
  undefined1 *local_1c0;
  undefined1 local_1bc [192];
  undefined1 *local_fc;
  uint local_f8;
  undefined1 *local_f4;
  undefined1 local_f0 [192];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int iStack_10;
  int local_c;
  undefined1 *local_8;
  
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  iVar7 = (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(0x70);
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_0101c400(0,param_4,1);
  }
  local_fc = local_f0;
  puVar13 = &DAT_80000010;
  local_1c8 = local_1bc;
  puVar8 = &DAT_80000010;
  local_1c4 = 0;
  local_1c0 = &DAT_80000010;
  local_f8 = 0;
  local_f4 = &DAT_80000010;
  iVar9 = iVar7;
  while (param_1 < param_2) {
    local_8 = *(undefined1 **)param_1;
    if (local_8 < (undefined1 *)0x15) {
      param_1 = (undefined8 *)((int)param_1 + 4);
      goto switchD_0101d24c_caseD_46;
    }
    uVar14 = local_f8;
    switch(*local_8) {
    case 0x45:
      if (local_1c4 == 0) {
        local_f8 = 0;
        if (-1 < (int)puVar8) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_fc,((uint)puVar8 & 0x3fffffff) * 0xc);
          puVar13 = local_1c0;
        }
        goto LAB_0101d390;
      }
      piVar3 = (int *)(local_1c8 + local_1c4 * 0xc + -0xc);
      if ((local_8[2] == '\0') || (iVar10 = FUN_01015b90(*piVar3 + 2,local_8 + 2), iVar10 == 0)) {
        FUN_0101b850(param_3,piVar3,param_1);
        iVar9 = *(int *)(iVar9 + 0x60);
        local_1c4 = local_1c4 - 1;
        uVar14 = local_f8 - 1;
        puVar8 = local_f4;
        puVar13 = local_1c0;
        if ((int)((uint)local_f4 & 0x3fffffff) < (int)uVar14) {
          uVar11 = ((uint)local_f4 & 0x3fffffff) * 2;
          if ((int)uVar11 <= (int)uVar14) {
            uVar11 = uVar14;
          }
          goto LAB_0101d44c;
        }
        goto switchD_0101d24c_caseD_6d;
      }
      local_f8 = 0;
      if (-1 < (int)local_f4) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_fc,((uint)local_f4 & 0x3fffffff) * 0xc);
      }
      puVar13 = local_1c0;
      if ((int)local_1c0 < 0) {
        return iVar7;
      }
      goto LAB_0101d3a7;
    case 0x46:
      break;
    default:
      goto switchD_0101d24c_caseD_47;
    case 0x4c:
      if (local_1c4 == ((uint)puVar13 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_1c8,0xc);
        puVar8 = local_f4;
      }
      puVar2 = (undefined8 *)(local_1c8 + local_1c4 * 0xc);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *param_1;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 1);
        puVar8 = local_f4;
      }
      local_1c4 = local_1c4 + 1;
      if (local_f8 == ((uint)puVar8 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_fc,0xc);
      }
      puVar2 = (undefined8 *)(local_fc + local_f8 * 0xc);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *param_1;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 1);
      }
      local_f8 = local_f8 + 1;
      local_2c = CONCAT31(local_2c._1_3_,param_5 != '\0');
      FUN_0101c500(local_8 + 2,0,local_2c);
      iStack_10 = *(int *)((int)param_1 + 4);
      local_c = *(int *)(param_1 + 1);
      iVar9 = *(int *)((int)param_1 + 0xc);
      local_14 = iVar9;
      if (local_1c4 == ((uint)local_1c0 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_1c8,0xc);
      }
      piVar3 = (int *)(local_1c8 + local_1c4 * 0xc);
      if (piVar3 != (int *)0x0) {
        *piVar3 = local_14;
        piVar3[1] = iStack_10;
        piVar3[2] = local_c;
      }
      local_1c4 = local_1c4 + 1;
      if (local_f8 == ((uint)local_f4 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_fc,0xc);
      }
      piVar3 = (int *)(local_fc + local_f8 * 0xc);
      if (piVar3 != (int *)0x0) {
        *piVar3 = local_14;
        piVar3[1] = iStack_10;
        piVar3[2] = local_c;
      }
      local_f8 = local_f8 + 1;
      local_24 = CONCAT31(local_24._1_3_,param_5 != '\0');
      iVar9 = FUN_0101c500(iVar9 + 2,0,local_24);
      param_1 = param_1 + 2;
      puVar8 = local_f4;
      puVar13 = local_1c0;
      break;
    case 0x4d:
      uVar14 = (uint)local_1c >> 8;
      local_1c = CONCAT31((int3)uVar14,param_5 != '\0');
      pfVar12 = (float *)FUN_0101c500(local_8 + 2,2,local_1c);
      fVar4 = *(float *)((int)param_1 + 4);
      *(short *)(pfVar12 + 0xc) = *(short *)(pfVar12 + 0xc) + 1;
      *pfVar12 = fVar4 + *pfVar12;
      param_1 = param_1 + 1;
      puVar8 = local_f4;
      puVar13 = local_1c0;
      break;
    case 0x4e:
      goto switchD_0101d24c_caseD_4e;
    case 0x4f:
      if (local_1c4 == ((uint)puVar13 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_1c8,0xc);
      }
      puVar1 = (undefined4 *)(local_1c8 + local_1c4 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        uVar5 = *(undefined4 *)((int)param_1 + 4);
        *puVar1 = *(undefined4 *)param_1;
        puVar1[1] = uVar5;
        puVar1[2] = *(undefined4 *)(param_1 + 1);
      }
      local_1c4 = local_1c4 + 1;
      local_28 = CONCAT31(local_28._1_3_,param_5 != '\0');
      iVar9 = FUN_0101c500(*(undefined4 *)((int)param_1 + 0xc),0,local_28);
      if (local_f8 == ((uint)local_f4 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_fc,0xc);
      }
      puVar1 = (undefined4 *)(local_fc + local_f8 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        uVar5 = *(undefined4 *)((int)param_1 + 4);
        *puVar1 = *(undefined4 *)param_1;
        puVar1[1] = uVar5;
        puVar1[2] = *(undefined4 *)(param_1 + 1);
      }
      local_f8 = local_f8 + 1;
      param_1 = param_1 + 2;
      puVar8 = local_f4;
      puVar13 = local_1c0;
      break;
    case 0x50:
      uVar14 = (uint)local_20 >> 8;
      local_20 = CONCAT31((int3)uVar14,param_5 != '\0');
      iVar9 = FUN_0101c500(local_8 + 2,1,local_20);
      param_1 = (undefined8 *)((int)param_1 + 4);
      puVar8 = local_f4;
      puVar13 = local_1c0;
      break;
    case 0x53:
      if (local_1c4 != 0) {
        puVar1 = (undefined4 *)(local_1c8 + local_1c4 * 0xc + -0xc);
        FUN_0101b850(param_3,puVar1,param_1);
        local_18 = CONCAT31(local_18._1_3_,param_5 != '\0');
        iVar9 = FUN_0101c500(local_8 + 2,0,local_18);
        uVar5 = *(undefined4 *)((int)param_1 + 4);
        *puVar1 = *(undefined4 *)param_1;
        puVar1[1] = uVar5;
        puVar1[2] = *(undefined4 *)(param_1 + 1);
        puVar8 = local_f4;
        puVar13 = local_1c0;
        uVar14 = local_f8;
        goto switchD_0101d24c_caseD_6d;
      }
LAB_0101d98a:
      local_f8 = 0;
      if (-1 < (int)puVar8) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_fc,((uint)puVar8 & 0x3fffffff) * 0xc);
        puVar13 = local_1c0;
      }
      goto LAB_0101d390;
    case 0x54:
      uVar14 = (uint)local_30 >> 8;
      local_30 = CONCAT31((int3)uVar14,param_5 != '\0');
      iVar9 = FUN_0101c500(local_8 + 2,0,local_30);
      if (local_1c4 == ((uint)local_1c0 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_1c8,0xc);
      }
      puVar1 = (undefined4 *)(local_1c8 + local_1c4 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        uVar5 = *(undefined4 *)((int)param_1 + 4);
        *puVar1 = *(undefined4 *)param_1;
        puVar1[1] = uVar5;
        puVar1[2] = *(undefined4 *)(param_1 + 1);
      }
      local_1c4 = local_1c4 + 1;
      if (local_f8 == ((uint)local_f4 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_fc,0xc);
      }
      puVar1 = (undefined4 *)(local_fc + local_f8 * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        uVar5 = *(undefined4 *)((int)param_1 + 4);
        *puVar1 = *(undefined4 *)param_1;
        puVar1[1] = uVar5;
        puVar1[2] = *(undefined4 *)(param_1 + 1);
      }
      puVar8 = local_f4;
      puVar13 = local_1c0;
      uVar14 = local_f8 + 1;
    case 0x6d:
switchD_0101d24c_caseD_6d:
      local_f8 = uVar14;
      param_1 = (undefined8 *)((int)param_1 + 0xc);
      break;
    case 0x6c:
      if ((1 < (int)local_1c4) && (**(char **)(local_1c8 + local_1c4 * 0xc + -0xc) == 'S')) {
        FUN_0101b850(param_3,local_1c8 + local_1c4 * 0xc + -0xc,param_1);
        iVar9 = *(int *)(iVar9 + 0x60);
        local_1c4 = local_1c4 - 1;
        uVar14 = local_f8 - 1;
        if ((int)((uint)local_f4 & 0x3fffffff) < (int)uVar14) {
          uVar11 = ((uint)local_f4 & 0x3fffffff) * 2;
          if ((int)uVar11 <= (int)uVar14) {
            uVar11 = uVar14;
          }
          FUN_0100a210(&PTR_vftable_018e9b94,&local_fc,uVar11,0xc);
        }
        local_f8 = uVar14;
        FUN_0101b850(param_3,local_1c8 + local_1c4 * 0xc + -0xc,param_1);
        iVar9 = *(int *)(iVar9 + 0x60);
        local_1c4 = local_1c4 - 1;
        uVar14 = local_f8 - 1;
        puVar8 = local_f4;
        puVar13 = local_1c0;
        if ((int)((uint)local_f4 & 0x3fffffff) < (int)uVar14) {
          uVar11 = ((uint)local_f4 & 0x3fffffff) * 2;
          if ((int)uVar11 <= (int)uVar14) {
            uVar11 = uVar14;
          }
LAB_0101d44c:
          FUN_0100a210(&PTR_vftable_018e9b94,&local_fc,uVar11,0xc);
          puVar8 = local_f4;
          puVar13 = local_1c0;
        }
        goto switchD_0101d24c_caseD_6d;
      }
      goto switchD_0101d24c_caseD_47;
    case 0x70:
      iVar9 = *(int *)(iVar9 + 0x60);
      if (iVar9 == 0) goto LAB_0101d98a;
switchD_0101d24c_caseD_4e:
      param_1 = (undefined8 *)((int)param_1 + 4);
    }
switchD_0101d24c_caseD_46:
  }
switchD_0101d24c_caseD_47:
  local_f8 = 0;
  if (-1 < (int)puVar8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_fc,((uint)puVar8 & 0x3fffffff) * 0xc);
    puVar13 = local_1c0;
  }
LAB_0101d390:
  if (-1 < (int)puVar13) {
LAB_0101d3a7:
    local_f4 = (undefined1 *)0x80000000;
    local_fc = (undefined1 *)0x0;
    local_1c4 = 0;
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c8,((uint)puVar13 & 0x3fffffff) * 0xc);
  }
  return iVar7;
}

// 0101DA30  FUN_0101da30  size=241  [run]
int FUN_0101da30(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int local_8;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x70);
  if (iVar3 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = FUN_0101c400(0,&DAT_01701298,1);
  }
  iVar1 = param_2 * 0xc;
  iVar3 = *(int *)(iVar1 + 4 + *param_1);
  uVar4 = *(uint *)(local_8 + 0x50) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar3) {
      iVar5 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,local_8 + 0x48,iVar5,4);
  }
  *(int *)(local_8 + 0x4c) = iVar3;
  iVar3 = 0;
  piVar8 = (int *)(iVar1 + *param_1);
  if (0 < *(int *)(iVar1 + 4 + *param_1)) {
    param_2 = 0;
    do {
      puVar6 = (uint *)(*piVar8 + param_2);
      iVar5 = *(int *)(local_8 + 0x48);
      uVar7 = FUN_0101d1a0(puVar6[7] + param_1[3],puVar6[8] + param_1[3],puVar6,*puVar6 & 0xfffffffe
                           ,param_3);
      param_2 = param_2 + 0x24;
      *(undefined4 *)(iVar5 + iVar3 * 4) = uVar7;
      piVar8 = (int *)(iVar1 + *param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < piVar8[1]);
  }
  return local_8;
}

// 0101DB30  FUN_0101db30  size=1033  [run]
void __thiscall FUN_0101db30(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  uint *puVar7;
  undefined1 *local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  uVar4 = param_2;
  local_24 = (undefined1 *)0x0;
  local_20 = 0;
  local_1c = 0x80000000;
  local_14 = param_1;
  FUN_0100a210(&PTR_vftable_018e9b90,&local_24,0x40,1);
  if (local_20 == (local_1c & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b90,&local_24,1);
  }
  local_24[local_20] = 0;
  local_20 = local_20 + 1;
  FUN_01018f60(param_2,"StatisticsDumpInfo(num_threads=%i, num_spus=%i, num_frames=%i)\n",param_1[6]
               ,param_1[7],*(undefined4 *)(*param_1 + 4));
  local_18 = 0;
  if (0 < param_1[1]) {
    local_c = 0;
    do {
      local_10 = (int *)(*param_1 + local_c);
      param_2 = 0;
      if (0 < local_10[1]) {
        local_8 = 0;
        do {
          puVar7 = (uint *)(*local_10 + local_8);
          FUN_01018f60(uVar4,"FrameInfo(heading=\'%s\', frame=%i, thread_id=%i, time_counter=%i)\n",
                       *puVar7 & 0xfffffffe,param_2,puVar7[6],puVar7[3]);
          iVar1 = param_1[3];
          uVar2 = puVar7[8];
          piVar6 = (int *)(puVar7[7] + iVar1);
          if ((local_1c & 0x3fffffff) == 0) {
            FUN_0100a210(&PTR_vftable_018e9b90,&local_24);
          }
          local_20 = 1;
          *local_24 = 0;
          param_1 = local_14;
          while (local_14 = param_1, piVar6 < (int *)(uVar2 + iVar1)) {
            puVar3 = (undefined1 *)*piVar6;
            switch(*puVar3) {
            case 0x45:
              local_24[local_20 - 3] = 0;
              local_20 = local_20 - 2;
              FUN_01018f60(uVar4,"%sTimerEnd(\'%s\',%u,%u)\n",local_24,*piVar6 + 2);
              goto LAB_0101dea8;
            case 0x46:
            case 0x4f:
            case 0x50:
            case 0x70:
              break;
            default:
              local_20 = 0;
              if ((int)local_1c < 0) {
                return;
              }
              (**(code **)(PTR_vftable_018e9b90 + 0x10))(local_24,local_1c & 0x3fffffff);
              return;
            case 0x4c:
              FUN_01018f60(uVar4,"%sTimerBegin(\'%s\', %u, %u)\n",local_24,puVar3 + 2,piVar6[1],
                           piVar6[2]);
              FUN_01018f60(uVar4,"%sTimerSplit(\'%s\', %u, %u)\n",local_24,piVar6[3] + 2,piVar6[1],
                           piVar6[2]);
              local_24[local_20 - 1] = 0x20;
              if (local_20 == (local_1c & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b90);
              }
              local_24[local_20] = 0x20;
              local_20 = local_20 + 1;
              if (local_20 == (local_1c & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b90);
              }
              local_24[local_20] = 0;
              local_20 = local_20 + 1;
              piVar6 = piVar6 + 4;
              break;
            case 0x4d:
              FUN_01018f60(uVar4,"%sAddValue(%s,%f)\n",local_24,puVar3 + 1);
              piVar6 = piVar6 + 2;
              break;
            case 0x4e:
              piVar6 = piVar6 + 1;
              break;
            case 0x53:
              local_24[local_20 - 3] = 0;
              puVar3 = (undefined1 *)*piVar6;
              pcVar5 = "%sTimerSplit(\'%s\', %u, %u)\n";
              local_20 = local_20 - 2;
              goto LAB_0101dc8b;
            case 0x54:
              pcVar5 = "%sTimerBegin(\'%s\',%u,%u)\n";
LAB_0101dc8b:
              FUN_01018f60(uVar4,pcVar5,local_24,puVar3 + 2);
              local_24[local_20 - 1] = 0x20;
              if (local_20 == (local_1c & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b90);
              }
              local_24[local_20] = 0x20;
              local_20 = local_20 + 1;
              if (local_20 == (local_1c & 0x3fffffff)) {
                FUN_0100a290(&PTR_vftable_018e9b90);
              }
              local_24[local_20] = 0;
              local_20 = local_20 + 1;
              goto LAB_0101dea8;
            case 0x6c:
              local_24[local_20 - 3] = 0;
              local_20 = local_20 - 2;
              FUN_01018f60(uVar4,"%sTimerEnd(\'%s\', %u, %u)\n",local_24,*piVar6 + 2,piVar6[1],
                           piVar6[2]);
              goto LAB_0101dea8;
            case 0x6d:
              pcVar5 = "Free";
              if (-1 < piVar6[2]) {
                pcVar5 = "Alloc";
              }
              FUN_01018f60(uVar4,"%s%s%s(ptr=0x%p, nbytes=%i)\n",local_24,pcVar5,puVar3 + 1,
                           piVar6[1]);
LAB_0101dea8:
              piVar6 = piVar6 + 3;
            }
            param_1 = local_14;
          }
          local_8 = local_8 + 0x24;
          param_2 = param_2 + 1;
        } while (param_2 < local_10[1]);
      }
      local_c = local_c + 0xc;
      local_18 = local_18 + 1;
    } while (local_18 < param_1[1]);
  }
  local_20 = 0;
  if (-1 < (int)local_1c) {
    (**(code **)(PTR_vftable_018e9b90 + 0x10))(local_24,local_1c & 0x3fffffff);
  }
  return;
}

// 0101E490  FUN_0101e490  size=1430  [run]
void FUN_0101e490(int *param_1,int *param_2,undefined4 *param_3,float *param_4,int *param_5)

{
  int iVar1;
  char cVar2;
  double *pdVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int extraout_EDX;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined8 local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  undefined8 *local_10;
  int local_c;
  int local_8;
  
  local_8 = param_1[1];
  iVar8 = *(int *)(*(int *)*param_1 + 0x4c);
  local_2c = param_2[1];
  local_14 = *param_2 + local_2c;
  if (iVar8 < local_14) {
    local_2c = iVar8 - *param_2;
    local_14 = iVar8;
  }
  if (0 < local_2c) {
    iVar8 = param_2[1];
    if ((int)(param_5[2] & 0x3fffffffU) < iVar8) {
      iVar4 = (param_5[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_5,iVar4,4);
    }
    iVar4 = iVar8 - param_5[1];
    puVar10 = (undefined4 *)(*param_5 + param_5[1] * 4);
    if (0 < iVar4) {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    param_5[1] = iVar8;
    *param_4 = 0.0;
    local_c = *param_2;
    if (local_c < local_14) {
      local_20 = local_c * 0x24;
      do {
        local_18 = local_c - *param_2;
        iVar8 = *(int *)*param_3;
        if (*(int *)(iVar8 + 0xc + local_20) == 0) {
          local_28 = *(int *)(iVar8 + 4 + local_20);
        }
        else {
          local_28 = *(int *)(iVar8 + 8 + local_20);
        }
        iVar8 = *(int *)*param_3;
        if (*(int *)(iVar8 + 0xc + local_20) == 0) {
          fVar13 = *(float *)(iVar8 + 0x10 + local_20);
        }
        else {
          fVar13 = *(float *)(iVar8 + 0x14 + local_20);
        }
        dVar14 = (double)fVar13 * 4294967295.0;
        iVar8 = 0;
        dVar15 = dVar14 * 0.5;
        local_34 = 0;
        if (0 < local_8) {
          piVar7 = (int *)*param_1;
LAB_0101e5b0:
          cVar2 = FUN_0101bff0(*(int *)(*(int *)(*piVar7 + 0x48) + local_c * 4) + 0x48,
                               SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),&local_34);
          if (cVar2 == '\0') goto code_r0x0101e5d7;
          iVar8 = 0;
          do {
            FUN_0101bf80(*(int *)(*(int *)(*(int *)(*param_1 + iVar8 * 4) + 0x48) + local_c * 4) +
                         0x48,SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),SUB84(dVar14,0),
                         (int)((ulonglong)dVar14 >> 0x20));
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_8);
        }
LAB_0101e615:
        iVar8 = local_8;
        if (local_8 == 0) {
          local_10 = (undefined8 *)0x0;
LAB_0101e654:
          local_1c = 0x80000000;
        }
        else {
          local_24 = local_8 * 8;
          local_10 = (undefined8 *)(**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_24);
          local_1c = (int)(local_24 + (local_24 >> 0x1f & 7U)) >> 3;
          if (local_1c == 0) goto LAB_0101e654;
        }
        if (0 < iVar8) {
          *local_10 = 0x47effffdc0000000;
          puVar9 = local_10;
          puVar11 = local_10 + 1;
          for (uVar5 = local_8 * 8 - 5U >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)puVar11 = *(undefined4 *)puVar9;
            puVar9 = (undefined8 *)((int)puVar9 + 4);
            puVar11 = (undefined8 *)((int)puVar11 + 4);
          }
        }
        iVar8 = 0;
        if (0 < local_8) {
          do {
            iVar4 = *(int *)(*(int *)(*(int *)(*param_1 + iVar8 * 4) + 0x48) + local_c * 4);
            iVar6 = 0;
            if (0 < *(int *)(iVar4 + 0x4c)) {
              do {
                iVar1 = *(int *)(*(int *)(iVar4 + 0x48) + iVar6 * 4);
                if (*(int *)(iVar1 + 0x6c) != 2) {
                  dVar14 = *(double *)(iVar1 + 0x58);
                  if ((double)local_10[iVar8] <= dVar14) {
                    dVar14 = (double)local_10[iVar8];
                  }
                  local_10[iVar8] = dVar14;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(iVar4 + 0x4c));
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_8);
        }
        iVar8 = 0;
        *(undefined4 *)(*param_5 + local_18 * 4) = 0x7f7fffee;
        if (3 < local_8) {
          pdVar3 = (double *)(local_10 + 2);
          iVar4 = (local_8 - 4U >> 2) + 1;
          iVar8 = iVar4 * 4;
          do {
            fVar13 = *(float *)(*param_5 + local_18 * 4);
            fVar12 = (float)pdVar3[-2];
            if (fVar13 <= (float)pdVar3[-2]) {
              fVar12 = fVar13;
            }
            *(float *)(*param_5 + local_18 * 4) = fVar12;
            fVar13 = *(float *)(*param_5 + local_18 * 4);
            fVar12 = (float)pdVar3[-1];
            if (fVar13 <= (float)pdVar3[-1]) {
              fVar12 = fVar13;
            }
            *(float *)(*param_5 + local_18 * 4) = fVar12;
            fVar13 = *(float *)(*param_5 + local_18 * 4);
            fVar12 = (float)*pdVar3;
            if (fVar13 <= (float)*pdVar3) {
              fVar12 = fVar13;
            }
            *(float *)(*param_5 + local_18 * 4) = fVar12;
            fVar13 = *(float *)(*param_5 + local_18 * 4);
            fVar12 = (float)pdVar3[1];
            if (fVar13 <= (float)pdVar3[1]) {
              fVar12 = fVar13;
            }
            pdVar3 = pdVar3 + 4;
            iVar4 = iVar4 + -1;
            *(float *)(*param_5 + local_18 * 4) = fVar12;
          } while (iVar4 != 0);
        }
        for (; iVar8 < local_8; iVar8 = iVar8 + 1) {
          fVar13 = *(float *)(*param_5 + local_18 * 4);
          fVar12 = (float)(double)local_10[iVar8];
          if (fVar13 <= (float)(double)local_10[iVar8]) {
            fVar12 = fVar13;
          }
          *(float *)(*param_5 + local_18 * 4) = fVar12;
        }
        iVar8 = 0;
        if (0 < local_8) {
          do {
            iVar4 = *(int *)(*(int *)(*(int *)(*param_1 + iVar8 * 4) + 0x48) + local_c * 4);
            iVar6 = 0;
            if (0 < *(int *)(iVar4 + 0x4c)) {
              do {
                iVar1 = *(int *)(*(int *)(iVar4 + 0x48) + iVar6 * 4);
                if (*(int *)(iVar1 + 0x6c) != 2) {
                  fVar13 = (float)(((double)*(float *)(iVar1 + local_28 * 4) +
                                   *(double *)(iVar1 + 0x58)) -
                                  (double)*(float *)(*param_5 + local_18 * 4));
                  if (fVar13 <= *param_4) {
                    fVar13 = *param_4;
                  }
                  *param_4 = fVar13;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(iVar4 + 0x4c));
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < local_8);
        }
        if ((local_1c & 0x80000000) == 0) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_1c * 8);
        }
        local_20 = local_20 + 0x24;
        local_c = local_c + 1;
      } while (local_c < local_14);
    }
    if ((0.0 < (float)param_2[7]) && (iVar8 = *param_2, iVar8 < local_14)) {
      if (3 < local_14 - iVar8) {
        do {
          *(float *)(*param_5 + (iVar8 - *param_2) * 4) =
               *(float *)(*param_5 + (iVar8 - *param_2) * 4) + (float)param_2[7];
          *(float *)(*param_5 + 4 + (iVar8 - *param_2) * 4) =
               *(float *)(*param_5 + 4 + (iVar8 - *param_2) * 4) + (float)param_2[7];
          *(float *)(*param_5 + 8 + (iVar8 - *param_2) * 4) =
               (float)param_2[7] + *(float *)(*param_5 + 8 + (iVar8 - *param_2) * 4);
          iVar4 = iVar8 - *param_2;
          iVar8 = iVar8 + 4;
          *(float *)(*param_5 + 0xc + iVar4 * 4) =
               (float)param_2[7] + *(float *)(*param_5 + 0xc + iVar4 * 4);
        } while (iVar8 < local_14 + -3);
      }
      for (; iVar8 < local_14; iVar8 = iVar8 + 1) {
        *(float *)(*param_5 + (iVar8 - *param_2) * 4) =
             *(float *)(*param_5 + (iVar8 - *param_2) * 4) + (float)param_2[7];
      }
    }
    if (0.0 < (float)param_2[6]) {
      *param_4 = (float)param_2[6];
      return;
    }
    if (local_2c == 1) {
      local_34._0_4_ = (uint)(longlong)ROUND(*param_4 * 0.001);
      local_34._0_4_ = (uint)local_34 | (uint)local_34 >> 1;
      local_34._0_4_ = (uint)local_34 | (uint)local_34 >> 2;
      local_34._0_4_ = (uint)local_34 | (uint)local_34 >> 4;
      local_34._0_4_ = (uint)local_34 | (uint)local_34 >> 8;
      iVar8 = ((uint)local_34 >> 0x10 | (uint)local_34) + 1;
      fVar13 = (float)iVar8;
      if (iVar8 < 0) {
        fVar13 = fVar13 + 4.2949673e+09;
      }
      fVar13 = fVar13 * 1000.0 - DAT_018eab7c;
      fVar12 = DAT_018eab7c * 0.25;
      if (fVar13 <= DAT_018eab7c * 0.25) {
        fVar12 = fVar13;
      }
      DAT_018eab7c = fVar12 * 0.05 + DAT_018eab7c;
      *param_4 = DAT_018eab7c;
      if (DAT_018eab7c < 16666.0) {
        DAT_018eab7c = 16666.0;
      }
      *param_4 = DAT_018eab7c;
    }
  }
  return;
code_r0x0101e5d7:
  iVar8 = iVar8 + 1;
  piVar7 = (int *)(extraout_EDX + 4);
  if (local_8 <= iVar8) goto LAB_0101e615;
  goto LAB_0101e5b0;
}

// 0101EA40  FUN_0101ea40  size=889  [run]
void FUN_0101ea40(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,float *param_6)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int local_44 [8];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  float local_10;
  int local_c;
  int local_8;
  
  iVar3 = param_1[1];
  if (0 < iVar3) {
    local_44[0] = 0;
    local_44[1] = 0;
    local_10 = -1.0;
    local_44[2] = -0x80000000;
    local_44[7] = iVar3;
    FUN_0101e490(param_1,param_2,param_3,&local_10,local_44);
    local_18 = param_2[1];
    iVar1 = *(int *)(*param_3 + 4) - *param_2;
    if (iVar1 < local_18) {
      local_18 = iVar1;
    }
    local_24 = param_2[3] + param_2[2];
    local_44[6] = *param_2 + local_18;
    iVar1 = (local_24 * iVar3 + param_2[4]) * local_18;
    iVar3 = param_2[5];
    local_14 = (local_18 < 2) - 1 & 0x20;
    local_20 = iVar3 - local_14;
    local_8 = iVar1;
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    local_1c = (iVar3 + 1) * iVar1 * 4;
    iVar3 = FUN_01005cb0(*(undefined4 *)((int)pvVar2 + 0x2c),local_1c);
    *param_4 = iVar3;
    *param_5 = iVar1;
    FUN_01015ea0(*param_4,0,local_1c);
    if (param_6 != (float *)0x0) {
      *param_6 = local_10;
    }
    local_c = *param_2;
    local_44[3] = 0;
    local_44[4] = 0;
    local_44[5] = -1;
    if (local_c < local_44[6]) {
      do {
        local_8 = local_8 - param_2[4];
        if (1 < local_18) {
          FUN_0101b4c0(local_c,param_2[5]);
        }
        iVar3 = 0;
        if (0 < local_44[7]) {
          local_1c = 0;
          do {
            local_8 = local_8 - local_24;
            FUN_0101cf30(local_c,*(int *)(*param_1 + iVar3 * 4) + 0x48,
                         *param_4 + (param_2[5] * local_8 + local_14) * 4,param_2[2],param_2[9],
                         param_2[5],local_20,local_10,
                         *(undefined4 *)(local_44[0] + (local_c - *param_2) * 4),local_44 + 3);
            local_1c = local_1c + 0xc;
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_44[7]);
        }
        local_c = local_c + 1;
      } while (local_c < local_44[6]);
    }
    fVar6 = (float)(local_20 * 1000) * (1.0 / local_10);
    local_44[7] = (int)((float)((int)(float)param_2[7] % 1000) * 0.001 * fVar6);
    if (5.0 < fVar6) {
      iVar3 = local_14 - local_44[7];
      local_44[6] = 0;
      if (iVar3 < param_2[5]) {
        do {
          if ((-1 < iVar3) && (param_1 = (int *)0x0, 0 < iVar1)) {
            do {
              *(undefined4 *)(*param_4 + (param_2[5] * (int)param_1 + iVar3) * 4) = 0xff0000ff;
              param_1 = (int *)((int)param_1 + 1);
            } while ((int)param_1 < iVar1);
          }
          local_44[6] = local_44[6] + 1;
          iVar3 = ((int)((float)local_44[6] * fVar6) - local_44[7]) + local_14;
        } while (iVar3 < param_2[5]);
      }
    }
    local_44[6] = (int)((float)(local_20 * 0x411a) * (1.0 / local_10));
    if ((0 < local_44[6]) && (iVar3 = local_14 - local_44[7], iVar3 < param_2[5])) {
      do {
        if ((-1 < iVar3) && (iVar4 = 0, 0 < iVar1)) {
          do {
            *(undefined4 *)(*param_4 + (param_2[5] * iVar4 + iVar3) * 4) = 0xff00ff00;
            iVar5 = param_2[5] * iVar4;
            iVar4 = iVar4 + 1;
            *(undefined4 *)(*param_4 + 4 + (iVar5 + iVar3) * 4) = 0xff00ff00;
          } while (iVar4 < iVar1);
        }
        iVar3 = iVar3 + local_44[6];
      } while (iVar3 < param_2[5]);
    }
    if ((char)param_2[8] != '\0') {
      iVar3 = 0;
      if (-1 < local_44[5]) {
        do {
          if (*(int *)(local_44[3] + iVar3 * 8) != -1) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= local_44[5]);
      }
      do {
        if ((local_44[5] < iVar3) || (iVar3 = iVar3 + 1, local_44[5] < iVar3)) break;
        do {
          if (*(int *)(local_44[3] + iVar3 * 8) != -1) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= local_44[5]);
      } while( true );
    }
    FUN_01010310(&PTR_vftable_018e9b94);
    FUN_0100fd10();
    local_44[1] = 0;
    if (-1 < local_44[2]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_44[0],local_44[2] * 4);
    }
  }
  return;
}

// 0101EDD0  FUN_0101edd0  size=114  [run]
void FUN_0101edd0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  FUN_0101ea40(param_1,param_2,param_3,&local_8,&local_c,param_5);
  iVar1 = local_8;
  if (local_8 != 0) {
    FUN_0101b380(local_8,param_4,*(undefined4 *)(param_2 + 0x14),local_c);
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    FUN_01005d00(*(undefined4 *)((int)pvVar2 + 0x2c),iVar1);
  }
  return;
}

// 0101EE50  FUN_0101ee50  size=237  [run]
void __thiscall FUN_0101ee50(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  uint extraout_ECX;
  uint uVar5;
  uint extraout_ECX_00;
  int iVar6;
  undefined1 *local_28;
  int local_24;
  int local_20;
  undefined1 local_1c [24];
  
  iVar1 = *(int *)(param_1 + 4);
  local_28 = local_1c;
  local_24 = 0;
  local_20 = -0x7ffffffa;
  uVar5 = param_1;
  if (6 < iVar1) {
    iVar6 = 0xc;
    if (0xb < iVar1) {
      iVar6 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_28,iVar6,4);
    uVar5 = extraout_ECX;
  }
  iVar6 = 0;
  local_24 = iVar1;
  if (0 < iVar1) {
    do {
      uVar3 = FUN_0101da30(param_1,iVar6,uVar5 & 0xffffff00);
      *(undefined4 *)(local_28 + iVar6 * 4) = uVar3;
      iVar6 = iVar6 + 1;
      uVar5 = extraout_ECX_00;
    } while (iVar6 < iVar1);
  }
  FUN_0101edd0(&local_28,param_2,param_1,param_3,0);
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(local_28 + iVar6 * 4);
      if (iVar2 != 0) {
        FUN_0101c4a0();
        pvVar4 = TlsGetValue(DAT_01f8fc4c);
        (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 8))(iVar2,0x70);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  local_24 = 0;
  if (-1 < local_20) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_28,local_20 * 4);
  }
  return;
}

// 0101EF40  FUN_0101ef40  size=320  [run]
undefined4 FUN_0101ef40(int param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_1c [4];
  uint local_c;
  undefined4 local_8;
  
  if (param_3[1] < 1) {
    return 0;
  }
  local_c = (*(int *)(param_4 + 4) < 2) - 1 & 0x20;
  if (((int)local_c <= param_1) && (param_1 < *(int *)(param_4 + 0x14))) {
    iVar5 = *(int *)(param_4 + 0xc) + *(int *)(param_4 + 8);
    local_1c[3] = *(int *)(param_4 + 0x14) - local_c;
    iVar4 = iVar5 * param_3[1] + *(int *)(param_4 + 0x10);
    iVar1 = iVar4 * *(int *)(param_4 + 4);
    if ((-1 < param_2) && (param_2 < iVar1)) {
      iVar1 = (iVar1 - param_2) + -1;
      iVar2 = iVar1 / iVar4;
      local_8 = 0xbf800000;
      local_1c[2] = -0x80000000;
      iVar5 = (iVar1 % iVar4) / iVar5;
      local_1c[0] = 0;
      local_1c[1] = 0;
      FUN_0101e490(param_3,param_4,param_5,&local_8,local_1c);
      uVar3 = FUN_0101ce50(*(undefined4 *)(*param_5 + iVar5 * 0xc),iVar2,param_1 - local_c,
                           *(int *)(*param_3 + iVar5 * 4) + 0x48,
                           *(undefined4 *)(local_1c[0] + iVar2 * 4));
      local_1c[1] = 0;
      if (-1 < local_1c[2]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c[0],local_1c[2] * 4);
      }
      return uVar3;
    }
    return 0;
  }
  return 0;
}

// 0101F0A0  FUN_0101f0a0  size=5  [run]
undefined4 __fastcall FUN_0101f0a0(undefined4 param_1)

{
  return param_1;
}

// 0101F0B0  FUN_0101f0b0  size=1118  [run]
void FUN_0101f0b0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  LPVOID pvVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int local_18;
  int local_14;
  int local_10;
  
  uVar1 = *(undefined4 *)(param_1 + 100);
  iVar2 = FUN_01025be0(uVar1,0);
  if (iVar2 == 0) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar3 + 0x30) + 4))(0x88);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      FUN_0101c400(0,0,0);
      *(undefined4 *)(iVar2 + 0x70) = 0;
      *(undefined4 *)(iVar2 + 0x74) = 0;
      *(undefined4 *)(iVar2 + 0x78) = 0x80000000;
      *(undefined4 *)(iVar2 + 0x7c) = 0;
      *(undefined4 *)(iVar2 + 0x80) = 0;
      *(undefined4 *)(iVar2 + 0x84) = 0x80000000;
    }
    *(undefined4 *)(iVar2 + 100) = uVar1;
    FUN_01025470(uVar1,iVar2);
  }
  pfVar9 = (float *)(param_1 + 0xc);
  psVar6 = (short *)(param_1 + 0x34);
  pfVar10 = (float *)(iVar2 + 4);
  psVar7 = (short *)(iVar2 + 0x30);
  local_10 = 2;
  do {
    pfVar10[-1] = pfVar9[-3] + pfVar10[-1];
    *psVar7 = *psVar7 + *(short *)((param_1 - iVar2) + (int)psVar7);
    *pfVar10 = *(float *)((param_1 - iVar2) + (int)pfVar10) + *pfVar10;
    psVar7[1] = psVar7[1] + psVar6[-1];
    pfVar10[1] = pfVar9[-1] + pfVar10[1];
    psVar7[2] = psVar7[2] + *psVar6;
    pfVar10[2] = pfVar10[2] + *pfVar9;
    psVar7[3] = psVar7[3] + psVar6[1];
    pfVar10[3] = pfVar9[1] + pfVar10[3];
    psVar7[4] = psVar7[4] + psVar6[2];
    pfVar10[4] = pfVar9[2] + pfVar10[4];
    psVar7[5] = psVar7[5] + psVar6[3];
    psVar7 = psVar7 + 6;
    psVar6 = psVar6 + 6;
    pfVar10 = pfVar10 + 6;
    pfVar9 = pfVar9 + 6;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      iVar13 = *(int *)(*(int *)(param_1 + 0x48) + local_18 * 4);
      FUN_0101f0b0(iVar13,param_2);
      uVar1 = *(undefined4 *)(iVar13 + 100);
      iVar11 = *(int *)(iVar2 + 0x80) + -1;
      if (-1 < iVar11) {
        iVar8 = iVar11 * 0x70;
        do {
          iVar14 = *(int *)(iVar2 + 0x7c) + iVar8;
          iVar4 = FUN_01015b90(uVar1,*(undefined4 *)(*(int *)(iVar2 + 0x7c) + 100 + iVar8));
          if (iVar4 == 0) {
            if (-1 < iVar11) goto LAB_0101f2d4;
            break;
          }
          iVar8 = iVar8 + -0x70;
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
      }
      iVar8 = *(int *)(iVar2 + 0x80);
      piVar12 = (int *)(iVar2 + 0x7c);
      iVar11 = iVar8 + 1;
      uVar5 = *(uint *)(iVar2 + 0x84) & 0x3fffffff;
      if ((int)uVar5 < iVar11) {
        iVar4 = uVar5 * 2;
        if (iVar11 < iVar4) {
          iVar11 = iVar4;
        }
        FUN_0100a210(&PTR_vftable_018e9b90,piVar12,iVar11,0x70);
      }
      iVar11 = *(int *)(iVar2 + 0x80) * 0x70 + *piVar12;
      if (iVar11 != 0) {
        *(undefined4 *)(iVar11 + 0x48) = 0;
        *(undefined4 *)(iVar11 + 0x4c) = 0;
        *(undefined4 *)(iVar11 + 0x50) = 0x80000000;
      }
      *(int *)(iVar2 + 0x80) = *(int *)(iVar2 + 0x80) + 1;
      if (iVar8 * 0x70 + *piVar12 == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = FUN_0101c400(0,uVar1,0);
      }
LAB_0101f2d4:
      pfVar9 = (float *)(iVar14 + 4);
      psVar6 = (short *)(iVar14 + 0x30);
      pfVar10 = (float *)(iVar13 + 0xc);
      psVar7 = (short *)(iVar13 + 0x34);
      local_14 = 2;
      do {
        pfVar9[-1] = pfVar10[-3] + pfVar9[-1];
        *psVar6 = *psVar6 + *(short *)((iVar13 - iVar14) + (int)psVar6);
        *pfVar9 = *(float *)((iVar13 - iVar14) + (int)pfVar9) + *pfVar9;
        psVar6[1] = psVar6[1] + psVar7[-1];
        pfVar9[1] = pfVar10[-1] + pfVar9[1];
        psVar6[2] = psVar6[2] + *psVar7;
        pfVar9[2] = pfVar9[2] + *pfVar10;
        psVar6[3] = psVar6[3] + psVar7[1];
        pfVar9[3] = pfVar10[1] + pfVar9[3];
        psVar6[4] = psVar6[4] + psVar7[2];
        pfVar9[4] = pfVar10[2] + pfVar9[4];
        psVar6[5] = psVar6[5] + psVar7[3];
        psVar6 = psVar6 + 6;
        psVar7 = psVar7 + 6;
        pfVar9 = pfVar9 + 6;
        pfVar10 = pfVar10 + 6;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x4c));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar13 = *(int *)(iVar2 + 0x74) + -1;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 100);
    if (-1 < iVar13) {
      iVar11 = iVar13 * 0x70;
      do {
        iVar4 = *(int *)(iVar2 + 0x70) + iVar11;
        iVar8 = FUN_01015b90(uVar1,*(undefined4 *)(*(int *)(iVar2 + 0x70) + 100 + iVar11));
        if (iVar8 == 0) {
          if (-1 < iVar13) goto LAB_0101f452;
          break;
        }
        iVar11 = iVar11 + -0x70;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
    }
    iVar11 = *(int *)(iVar2 + 0x74);
    piVar12 = (int *)(iVar2 + 0x70);
    iVar13 = iVar11 + 1;
    uVar5 = *(uint *)(iVar2 + 0x78) & 0x3fffffff;
    if ((int)uVar5 < iVar13) {
      iVar8 = uVar5 * 2;
      if (iVar13 < iVar8) {
        iVar13 = iVar8;
      }
      FUN_0100a210(&PTR_vftable_018e9b90,piVar12,iVar13,0x70);
    }
    iVar13 = *(int *)(iVar2 + 0x74) * 0x70 + *piVar12;
    if (iVar13 != 0) {
      *(undefined4 *)(iVar13 + 0x48) = 0;
      *(undefined4 *)(iVar13 + 0x4c) = 0;
      *(undefined4 *)(iVar13 + 0x50) = 0x80000000;
    }
    *(int *)(iVar2 + 0x74) = *(int *)(iVar2 + 0x74) + 1;
    if (iVar11 * 0x70 + *piVar12 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0101c400(0,uVar1,0);
    }
LAB_0101f452:
    iVar2 = *(int *)(param_1 + 0x60);
    pfVar9 = (float *)(iVar2 + 0xc);
    psVar6 = (short *)(iVar2 + 0x34);
    pfVar10 = (float *)(iVar4 + 4);
    psVar7 = (short *)(iVar4 + 0x30);
    param_1 = 2;
    do {
      pfVar10[-1] = pfVar9[-3] + pfVar10[-1];
      *psVar7 = *psVar7 + *(short *)((iVar2 - iVar4) + (int)psVar7);
      *pfVar10 = *(float *)((iVar2 - iVar4) + (int)pfVar10) + *pfVar10;
      psVar7[1] = psVar7[1] + psVar6[-1];
      pfVar10[1] = pfVar9[-1] + pfVar10[1];
      psVar7[2] = psVar7[2] + *psVar6;
      pfVar10[2] = *pfVar9 + pfVar10[2];
      psVar7[3] = psVar7[3] + psVar6[1];
      pfVar10[3] = pfVar9[1] + pfVar10[3];
      psVar7[4] = psVar7[4] + psVar6[2];
      pfVar10[4] = pfVar9[2] + pfVar10[4];
      psVar7[5] = psVar7[5] + psVar6[3];
      psVar7 = psVar7 + 6;
      psVar6 = psVar6 + 6;
      pfVar10 = pfVar10 + 6;
      pfVar9 = pfVar9 + 6;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

// 0101F520  FUN_0101f520  size=268  [run]
void __thiscall FUN_0101f520(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_2 + param_3;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar5) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar4,0xc);
  }
  iVar4 = (param_1[1] - iVar5) + -1;
  if (-1 < iVar4) {
    puVar3 = (undefined4 *)(*param_1 + iVar5 * 0xc + iVar4 * 0xc);
    do {
      iVar1 = puVar3[1];
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        FUN_01006770();
      }
      uVar2 = puVar3[2];
      puVar3[1] = 0;
      if (-1 < (int)uVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar3,((uVar2 & 0x3fffffff) + uVar2 * 8) * 4);
      }
      iVar4 = iVar4 + -1;
      *puVar3 = 0;
      puVar3[2] = 0x80000000;
      puVar3 = puVar3 + -3;
    } while (-1 < iVar4);
  }
  iVar4 = iVar5 - param_1[1];
  puVar3 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar4) {
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0x80000000;
      }
      puVar3 = puVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[7] = param_3;
  param_1[1] = iVar5;
  param_1[6] = param_2;
  FUN_0101d140();
  return;
}

// 0101F630  FUN_0101f630  size=611  [run]
void FUN_0101f630(undefined4 param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  int iVar5;
  undefined1 local_34 [4];
  int local_30;
  int local_24;
  int local_20;
  uint local_1c;
  float local_18;
  uint local_14;
  float local_10;
  int local_c;
  char local_5;
  
  local_14 = local_14 & 0xffffff00;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  FUN_01025830(local_14);
  FUN_0101f0b0(param_1,local_34);
  if ((int)(local_1c & 0x3fffffff) < local_30) {
    iVar1 = (local_1c & 0x3fffffff) * 2;
    if (iVar1 <= local_30) {
      iVar1 = local_30;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_24,iVar1,4);
  }
  uVar2 = FUN_010253c0();
  FUN_01025890(&local_5,uVar2);
  while (local_5 != '\0') {
    uVar3 = FUN_01025400(uVar2);
    *(undefined4 *)(local_24 + local_20 * 4) = uVar3;
    local_20 = local_20 + 1;
    uVar2 = FUN_01025440(uVar2);
    FUN_01025890(&local_5,uVar2);
  }
  if (1 < local_20) {
    FUN_01020a10(local_24,0,local_20 + -1,FUN_01020300);
  }
  FUN_01025870();
  local_10 = *(float *)(*(int *)(local_24 + -4 + local_20 * 4) + 4);
  FUN_01018f60();
  FUN_01018f60();
  FUN_01018f60();
  FUN_01018f60();
  local_14 = local_20 + -1;
  if (-1 < (int)local_14) {
    local_18 = local_10 * param_2;
    do {
      iVar1 = *(int *)(local_24 + local_14 * 4);
      if (local_18 < *(float *)(iVar1 + 4)) {
        FUN_01018f60();
        FUN_01018f60();
        iVar5 = 0;
        if (0 < *(int *)(iVar1 + 0x74)) {
          local_c = 0;
          do {
            FUN_01018f60();
            FUN_0101b230();
            local_c = local_c + 0x70;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(iVar1 + 0x74));
        }
        FUN_0101b230();
        iVar5 = 0;
        if (0 < *(int *)(iVar1 + 0x80)) {
          local_c = 0;
          do {
            FUN_01018f60();
            FUN_0101b230();
            local_c = local_c + 0x70;
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(iVar1 + 0x80));
        }
      }
      FUN_01022a80();
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      (**(code **)(**(int **)((int)pvVar4 + 0x30) + 8))(iVar1,0x88);
      local_14 = local_14 + -1;
    } while (-1 < (int)local_14);
  }
  local_20 = 0;
  if (-1 < (int)local_1c) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_24,local_1c * 4);
  }
  return;
}

// 0101F8A0  FUN_0101f8a0  size=2015  [run]
void FUN_0101f8a0(undefined4 param_1,int *param_2,int param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,char param_7)

{
  uint uVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  LPVOID pvVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined1 *puVar13;
  char *pcVar14;
  undefined1 local_d4 [112];
  undefined1 local_64 [20];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  uint local_3c;
  undefined4 local_38;
  int *local_30;
  undefined4 *local_2c;
  int local_28;
  uint local_24;
  undefined4 *local_20;
  uint local_1c;
  char *local_18;
  float local_14;
  size_t local_10;
  float local_c;
  float local_8;
  
  FUN_01018f60(param_1,"Havok version: %s\n");
  iVar4 = *(int *)*param_2;
  piVar11 = (int *)(iVar4 + 0x48);
  local_14 = 0.0;
  local_30 = piVar11;
  FUN_0101c400(0,&DAT_017063f0,1);
  iVar12 = 0;
  local_8 = 1.0 / (float)*(int *)(iVar4 + 0x4c);
  if (0 < *(int *)(iVar4 + 0x4c)) {
    do {
      FUN_0101cc80(local_d4);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(iVar4 + 0x4c));
  }
  pfVar3 = (float *)FUN_0101be00((ulonglong)CONCAT14(1,param_6));
  if (pfVar3 != (float *)0x0) {
    do {
      local_14 = *pfVar3 * local_8 + local_14;
      pfVar3 = (float *)FUN_0101be60();
    } while (pfVar3 != (float *)0x0);
    if (0.0 < local_14) goto LAB_0101f991;
  }
  local_14 = 1000.0;
LAB_0101f991:
  if ((param_5 & 1) != 0) {
    FUN_01018f60(param_1);
    FUN_01018f60(param_1,"*********************************\n");
    FUN_01018f60(param_1,"********** Total Times    *******\n");
    FUN_01018f60(param_1,"*********************************\n");
    FUN_01018f60(param_1,"Timers are added together\n");
    FUN_0101bba0(param_1,local_d4,0);
  }
  FUN_0101c4a0();
  if ((param_5 & 2) != 0) {
    FUN_01018f60(param_1);
    FUN_01018f60(param_1,"*********************************\n");
    FUN_01018f60(param_1,"********** Per Frame Time *******\n");
    FUN_01018f60(param_1,"*********************************\n");
    FUN_01018f60(param_1,"Ascii Art all frames overview\n");
    FUN_01015ea0(local_64,0x20,0x28);
    local_3c = local_3c & 0xffffff00;
    local_8 = 0.0;
    if (0 < *(int *)(iVar4 + 0x4c)) {
      do {
        if (*(int *)(*(int *)(*piVar11 + (int)local_8 * 4) + 0x4c) != 0) {
          local_c = 0.0;
          local_18 = "Unknown";
          pfVar3 = (float *)FUN_0101be00(CONCAT35((int3)((uint)*piVar11 >> 8),CONCAT14(1,param_6)));
          while (pfVar3 != (float *)0x0) {
            local_18 = (char *)pfVar3[0x19];
            local_c = *pfVar3 + local_c;
            pfVar3 = (float *)FUN_0101be60();
          }
          iVar4 = (int)((local_c * 20.0) / local_14);
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          else if (0x27 < iVar4) {
            iVar4 = 0x27;
          }
          iVar12 = 0;
          puVar13 = local_64;
          if (4 < iVar4) {
            iVar8 = 4;
            do {
              *puVar13 = 9;
              iVar8 = iVar8 + 4;
              puVar13 = puVar13 + 1;
              iVar12 = iVar12 + 4;
            } while (iVar8 < iVar4);
          }
          iVar8 = iVar12;
          if (iVar12 < iVar4) {
            local_10 = iVar4 - iVar12;
            _memset(puVar13,0x20,local_10);
            puVar13 = puVar13 + local_10;
            iVar8 = local_10 + iVar12;
          }
          *puVar13 = 0x23;
          iVar12 = iVar12 + 4;
          puVar13 = puVar13 + 1;
          if (iVar8 + 1 < iVar12) {
            local_10 = iVar12 - (iVar8 + 1);
            _memset(puVar13,0x20,local_10);
            puVar13 = puVar13 + local_10;
          }
          if (iVar12 < 0x28) {
            local_10 = (0x27U - iVar12 >> 2) + 1;
            _memset(puVar13,9,local_10);
            puVar13 = puVar13 + local_10;
          }
          *puVar13 = 0;
          FUN_01018f60(CONCAT44(local_64,param_1));
          FUN_01018f60(param_1,"%i %-12s %f\n",local_8,local_18,(double)local_c);
          piVar11 = local_30;
        }
        local_8 = (float)((int)local_8 + 1);
      } while ((int)local_8 < piVar11[1]);
    }
  }
  if ((param_5 & 4) != 0) {
    iVar4 = param_2[1];
    if ((iVar4 == 1) || (param_7 == '\0')) {
      iVar12 = 0;
      if (0 < *(int *)(*(int *)*param_2 + 0x4c)) {
        do {
          local_8 = 0.0;
          if (0 < iVar4) {
            do {
              iVar4 = *(int *)(*param_2 + (int)local_8 * 4);
              if (iVar12 < *(int *)(iVar4 + 0x4c)) {
                FUN_0101c400(0,&DAT_017063f0,1);
                FUN_0101cc80(local_d4);
                FUN_01018f60(param_1,&DAT_016cc51c);
                FUN_01018f60(param_1,"****************************************\n");
                FUN_01018f60(param_1,"****** Summary Frame:%i Thread:%i ******\n",iVar12,local_8);
                FUN_01018f60(param_1,"****************************************\n");
                FUN_01018f60(param_1,&DAT_017062b4,
                             *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x48) + iVar12 * 4) + 100));
                FUN_0101bba0(param_1,local_d4);
                if ((param_5 & 8) != 0) {
                  FUN_0101f630();
                }
                FUN_0101c4a0();
              }
              iVar4 = param_2[1];
              local_8 = (float)((int)local_8 + 1);
            } while ((int)local_8 < iVar4);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < *(int *)(*(int *)*param_2 + 0x4c));
      }
    }
    else {
      local_c = 0.0;
      if (0 < *(int *)(*(int *)*param_2 + 0x4c)) {
        local_30 = (int *)(param_5 & 8);
        do {
          FUN_01018f60(param_1);
          FUN_01018f60(param_1,"****************************************\n");
          FUN_01018f60(param_1,"****** Summary Frame:%i ******\n",local_c);
          FUN_01018f60(param_1,"****************************************\n");
          uVar10 = param_2[1];
          puVar5 = (undefined4 *)0x0;
          local_2c = (undefined4 *)0x0;
          local_28 = 0;
          local_24 = 0x80000000;
          local_1c = uVar10;
          if (uVar10 != 0) {
            pvVar6 = TlsGetValue(DAT_01f8fc4c);
            puVar5 = *(undefined4 **)((int)pvVar6 + 0xc);
            uVar9 = uVar10 * 4 + 0x7f & 0xffffff80;
            uVar1 = (int)puVar5 + uVar9;
            if ((*(int *)((int)pvVar6 + 8) < (int)uVar9) || (*(uint *)((int)pvVar6 + 0x10) < uVar1))
            {
              puVar5 = (undefined4 *)FUN_0100b780();
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = uVar1;
            }
          }
          iVar4 = param_2[1];
          local_24 = uVar10 | 0x80000000;
          local_2c = puVar5;
          local_20 = puVar5;
          if ((int)(uVar10 & 0x3fffffff) < iVar4) {
            iVar12 = (uVar10 & 0x3fffffff) * 2;
            if (iVar12 <= iVar4) {
              iVar12 = iVar4;
            }
            FUN_0100a210(&PTR_vftable_018e9b94,&local_2c,iVar12);
          }
          fVar2 = local_c;
          iVar12 = 0;
          local_28 = iVar4;
          if (0 < param_2[1]) {
            do {
              pvVar6 = TlsGetValue(DAT_01f8fc4c);
              iVar4 = (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))();
              if (iVar4 == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = FUN_0101c400(0,&DAT_016416fa,1);
              }
              local_2c[iVar12] = uVar7;
              if ((int)fVar2 < *(int *)(*(int *)(*param_2 + iVar12 * 4) + 0x4c)) {
                FUN_0101cc80(local_2c[iVar12]);
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < param_2[1]);
          }
          iVar4 = 1;
          local_50 = 0;
          local_3c = 0;
          local_48 = 4;
          local_44 = 2;
          local_4c = 0x10;
          local_40 = 0;
          local_38 = 0x5f3e;
          if (1 < local_28) {
            do {
              FUN_0101c690(*local_2c,local_2c[iVar4],iVar4,0);
              iVar4 = iVar4 + 1;
            } while (iVar4 < local_28);
          }
          FUN_0101ca60(*local_2c,param_3,param_4,param_1);
          if (local_30 != (int *)0x0) {
            FUN_0101f630(*local_2c);
          }
          iVar4 = 0;
          if (0 < param_2[1]) {
            do {
              iVar12 = local_2c[iVar4];
              if (iVar12 != 0) {
                FUN_0101c4a0();
                pvVar6 = TlsGetValue(DAT_01f8fc4c);
                (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 8))(iVar12);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < param_2[1]);
          }
          uVar10 = local_1c;
          puVar5 = local_20;
          if (local_20 == local_2c) {
            local_28 = 0;
          }
          pvVar6 = TlsGetValue(DAT_01f8fc4c);
          uVar10 = uVar10 * 4 + 0x7f & 0xffffff80;
          if (((*(int *)((int)pvVar6 + 8) < (int)uVar10) ||
              (uVar10 + (int)puVar5 != *(int *)((int)pvVar6 + 0xc))) ||
             (*(undefined4 **)((int)pvVar6 + 0x14) == puVar5)) {
            FUN_0100b9b0(puVar5,uVar10);
          }
          else {
            *(undefined4 **)((int)pvVar6 + 0xc) = puVar5;
          }
          local_28 = 0;
          if (-1 < (int)local_24) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c);
          }
          local_c = (float)((int)local_c + 1);
        } while ((int)local_c < *(int *)(*(int *)*param_2 + 0x4c));
      }
    }
  }
  if (((param_5 & 0x10) != 0) && (iVar4 = 0, 0 < *(int *)(*(int *)*param_2 + 0x4c))) {
    do {
      iVar12 = 0;
      if (0 < param_2[1]) {
        param_5 = -param_3;
        do {
          local_18 = *(char **)(*param_2 + iVar12 * 4);
          if (iVar4 < *(int *)((int)local_18 + 0x4c)) {
            FUN_01018f60(param_1,&DAT_01705b38);
            FUN_01018f60(param_1,"***************************************\n");
            if (iVar12 < param_3) {
              pcVar14 = "***** Details Frame-%i Thread:%i ******\n";
              iVar8 = iVar12;
            }
            else {
              pcVar14 = "***** Details Frame-%i Spu:%i ******\n";
              iVar8 = param_5;
            }
            FUN_01018f60(param_1,pcVar14,CONCAT44(iVar8,iVar4));
            FUN_01018f60(param_1);
            FUN_01018f60(param_1,&DAT_017062b4,
                         *(undefined4 *)(*(int *)(*(int *)((int)local_18 + 0x48) + iVar4 * 4) + 100)
                        );
            FUN_0101bba0(param_1,*(undefined4 *)(*(int *)((int)local_18 + 0x48) + iVar4 * 4));
          }
          param_5 = param_5 + 1;
          iVar12 = iVar12 + 1;
        } while (iVar12 < param_2[1]);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(*(int *)*param_2 + 0x4c));
  }
  return;
}

// 010200A0  FUN_010200a0  size=245  [run]
void __thiscall FUN_010200a0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar4;
  int iVar5;
  int local_10;
  uint local_c;
  uint local_8;
  
  iVar5 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  uVar4 = param_1;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      uVar2 = FUN_0101da30(param_1,iVar5,uVar4 & 0xffffff00);
      uVar4 = extraout_ECX;
      if (local_c == (local_8 & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_10,4);
        uVar4 = extraout_ECX_00;
      }
      *(undefined4 *)(local_10 + local_c * 4) = uVar2;
      local_c = local_c + 1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 4));
  }
  FUN_0101f8a0(param_2,&local_10,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
               param_3,*(undefined4 *)(param_1 + 0x20),1);
  iVar5 = 0;
  if (0 < (int)local_c) {
    do {
      iVar1 = *(int *)(local_10 + iVar5 * 4);
      if (iVar1 != 0) {
        FUN_0101c4a0();
        pvVar3 = TlsGetValue(DAT_01f8fc4c);
        (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(iVar1,0x70);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)local_c);
  }
  local_c = 0;
  if (-1 < (int)local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 * 4);
  }
  return;
}

// 010201A0  FUN_010201a0  size=118  [run]
undefined4 * __thiscall
FUN_010201a0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  DAT_018eab7c = 0x46823533;
  if ((int)(param_1[5] & 0x3fffffff) < param_2) {
    iVar1 = (param_1[5] & 0x3fffffff) * 2;
    if (iVar1 <= param_2) {
      iVar1 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b90,param_1 + 3,iVar1,1);
  }
  param_1[8] = "Physics";
  FUN_0101f520(param_3,param_4);
  return param_1;
}

// 01020220  FUN_01020220  size=42  [run]
void FUN_01020220(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  uVar1 = *param_1;
  param_1 = (undefined4 *)
            CONCAT13((char)uVar1,
                     CONCAT12((char)((uint)uVar1 >> 8),
                              CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18))));
  *puVar2 = param_1;
  return;
}

// 01020250  FUN_01020250  size=56  [run]
void FUN_01020250(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  uVar1 = *param_1;
  param_1 = (undefined4 *)
            CONCAT13((char)uVar1,
                     CONCAT12((char)((uint)uVar1 >> 8),
                              CONCAT11((char)((uint)uVar1 >> 0x10),(char)((uint)uVar1 >> 0x18))));
  *puVar2 = param_1;
  return;
}

// 01020290  FUN_01020290  size=72  [run]
int __thiscall FUN_01020290(int param_1,int param_2)

{
  FUN_010067a0(param_2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}

// 010202E0  FUN_010202e0  size=32  [run]
undefined4 __thiscall FUN_010202e0(int param_1,int param_2)

{
  if (*(float *)(param_1 + 4) <= *(float *)(param_2 + 4) &&
      *(float *)(param_2 + 4) != *(float *)(param_1 + 4)) {
    return 1;
  }
  return 0;
}

// 01020300  FUN_01020300  size=31  [run]
undefined4 FUN_01020300(int param_1,int param_2)

{
  if (*(float *)(param_1 + 4) <= *(float *)(param_2 + 4) &&
      *(float *)(param_2 + 4) != *(float *)(param_1 + 4)) {
    return 1;
  }
  return 0;
}

// 01020330  FUN_01020330  size=14  [run]
void __thiscall FUN_01020330(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 01020350  FUN_01020350  size=20  [run]
void __thiscall FUN_01020350(int *param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 01020370  FUN_01020370  size=14  [run]
void __thiscall FUN_01020370(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010203A0  FUN_010203a0  size=14  [run]
void __thiscall FUN_010203a0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010203C0  FUN_010203c0  size=20  [run]
void __thiscall FUN_010203c0(int *param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 010203E0  FUN_010203e0  size=20  [run]
void __thiscall FUN_010203e0(int *param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = *param_1 != param_3;
  return;
}

// 01020400  FUN_01020400  size=43  [run]
undefined4 FUN_01020400(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_010101b0(param_1,&param_1);
  if (iVar1 == 0) {
    *param_2 = param_1;
    return 0;
  }
  return 1;
}

// 01020430  FUN_01020430  size=27  [run]
uint __fastcall FUN_01020430(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 01020450  FUN_01020450  size=9  [run]
void FUN_01020450(void)

{
  FUN_01025470();
  return;
}

// 01020460  FUN_01020460  size=9  [run]
void FUN_01020460(void)

{
  FUN_01025be0();
  return;
}

// 01020480  FUN_01020480  size=9  [run]
void FUN_01020480(void)

{
  FUN_01025400();
  return;
}

// 01020490  FUN_01020490  size=9  [run]
void FUN_01020490(void)

{
  FUN_01025440();
  return;
}

// 010204A0  FUN_010204a0  size=24  [run]
undefined4 FUN_010204a0(undefined4 param_1,undefined4 param_2)

{
  FUN_01025890(param_1,param_2);
  return param_1;
}

// 010204C0  FUN_010204c0  size=43  [run]
undefined4 FUN_010204c0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_010101b0(param_1,&param_1);
  if (iVar1 == 0) {
    *param_2 = param_1;
    return 0;
  }
  return 1;
}

// 01020510  FUN_01020510  size=20  [run]
void __thiscall FUN_01020510(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 01020550  FUN_01020550  size=15  [run]
int __thiscall FUN_01020550(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010205A0  FUN_010205a0  size=15  [run]
int __thiscall FUN_010205a0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 010205B0  FUN_010205b0  size=15  [run]
int __thiscall FUN_010205b0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01020610  FUN_01020610  size=18  [run]
int __thiscall FUN_01020610(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 01020630  FUN_01020630  size=18  [run]
int __thiscall FUN_01020630(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 01020690  FUN_01020690  size=18  [run]
int __thiscall FUN_01020690(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x24;
}

// 010206B0  FUN_010206b0  size=18  [run]
int __thiscall FUN_010206b0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x24;
}

// 010206E0  FUN_010206e0  size=18  [run]
int __thiscall FUN_010206e0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 01020740  FUN_01020740  size=15  [run]
int __thiscall FUN_01020740(int *param_1,int param_2)

{
  return param_2 * 0x70 + *param_1;
}

// 01020750  FUN_01020750  size=15  [run]
int __thiscall FUN_01020750(int *param_1,int param_2)

{
  return param_2 * 0x70 + *param_1;
}

// 010207A0  FUN_010207a0  size=15  [run]
int __thiscall FUN_010207a0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01020810  FUN_01020810  size=15  [run]
int __thiscall FUN_01020810(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01020820  FUN_01020820  size=15  [run]
int __thiscall FUN_01020820(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01020830  FUN_01020830  size=32  [run]
void __thiscall FUN_01020830(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01020860  FUN_01020860  size=52  [run]
undefined4 __thiscall FUN_01020860(int param_1,undefined4 param_2,int param_3)

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

// 010208B0  FUN_010208b0  size=34  [run]
void FUN_010208b0(int param_1,int param_2,undefined4 *param_3)

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

// 010208F0  FUN_010208f0  size=34  [run]
void FUN_010208f0(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined1 *)(iVar1 + param_1) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 01020930  FUN_01020930  size=32  [run]
void __thiscall FUN_01020930(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01020970  FUN_01020970  size=52  [run]
undefined4 __thiscall FUN_01020970(int param_1,undefined4 param_2,int param_3)

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

// 010209E0  FUN_010209e0  size=34  [run]
void FUN_010209e0(int param_1,int param_2,undefined4 *param_3)

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

// 01020A10  FUN_01020a10  size=219  [run]
void FUN_01020a10(int param_1,int param_2,int param_3,code *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int local_14;
  
  do {
    local_14 = param_2;
    uVar2 = *(undefined4 *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar5 = param_3;
    do {
      cVar4 = (*param_4)(*(undefined4 *)(param_1 + local_14 * 4),uVar2);
      while (cVar4 != '\0') {
        iVar1 = local_14 * 4;
        local_14 = local_14 + 1;
        cVar4 = (*param_4)(*(undefined4 *)(param_1 + 4 + iVar1),uVar2);
      }
      cVar4 = (*param_4)(uVar2,*(undefined4 *)(param_1 + iVar5 * 4));
      while (cVar4 != '\0') {
        iVar1 = iVar5 * 4;
        iVar5 = iVar5 + -1;
        cVar4 = (*param_4)(uVar2,*(undefined4 *)(param_1 + -4 + iVar1));
      }
      if (iVar5 < local_14) break;
      if (iVar5 != local_14) {
        uVar3 = *(undefined4 *)(param_1 + iVar5 * 4);
        *(undefined4 *)(param_1 + iVar5 * 4) = *(undefined4 *)(param_1 + local_14 * 4);
        *(undefined4 *)(param_1 + local_14 * 4) = uVar3;
      }
      local_14 = local_14 + 1;
      iVar5 = iVar5 + -1;
    } while (local_14 <= iVar5);
    if (param_2 < iVar5) {
      FUN_01020a10(param_1,param_2,iVar5,param_4);
    }
    param_2 = local_14;
    if (param_3 <= local_14) {
      return;
    }
  } while( true );
}

// 01020B10  FUN_01020b10  size=85  [run]
void FUN_01020b10(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (3 < param_2) {
    iVar2 = (param_2 - 4U >> 2) + 1;
    iVar3 = iVar2 * 4;
    puVar1 = (undefined4 *)(param_1 + 8);
    do {
      iVar2 = iVar2 + -1;
      puVar1[-2] = *param_3;
      puVar1[-1] = *param_3;
      *puVar1 = *param_3;
      puVar1[1] = *param_3;
      puVar1 = puVar1 + 4;
    } while (iVar2 != 0);
  }
  while (iVar3 < param_2) {
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + -4 + iVar3 * 4) = *param_3;
  }
  return;
}

// 01020BA0  FUN_01020ba0  size=24  [run]
void __thiscall
FUN_01020ba0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01020BC0  FUN_01020bc0  size=52  [run]
undefined4 __thiscall FUN_01020bc0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 8);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 7U)) >> 3;
  return uVar2;
}

// 01020C00  FUN_01020c00  size=85  [run]
void FUN_01020c00(int param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (3 < param_2) {
    iVar2 = (param_2 - 4U >> 2) + 1;
    iVar3 = iVar2 * 4;
    puVar1 = (undefined8 *)(param_1 + 0x10);
    do {
      iVar2 = iVar2 + -1;
      puVar1[-2] = *param_3;
      puVar1[-1] = *param_3;
      *puVar1 = *param_3;
      puVar1[1] = *param_3;
      puVar1 = puVar1 + 4;
    } while (iVar2 != 0);
  }
  while (iVar3 < param_2) {
    iVar3 = iVar3 + 1;
    *(undefined8 *)(param_1 + -8 + iVar3 * 8) = *param_3;
  }
  return;
}

// 01020C60  FUN_01020c60  size=30  [run]
int __thiscall FUN_01020c60(int param_1,int param_2)

{
  FUN_01006740(param_2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}

// 01020C80  FUN_01020c80  size=11  [run]
int FUN_01020c80(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01020C90  FUN_01020c90  size=26  [run]
void __thiscall FUN_01020c90(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01020CC0  FUN_01020cc0  size=29  [run]
void __thiscall FUN_01020cc0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 01020D20  FUN_01020d20  size=29  [run]
void __thiscall FUN_01020d20(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 01020D40  FUN_01020d40  size=11  [run]
int FUN_01020d40(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01020D60  FUN_01020d60  size=25  [run]
void __thiscall FUN_01020d60(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x70);
  return;
}

// 01020D80  FUN_01020d80  size=26  [run]
void __thiscall FUN_01020d80(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01020DC0  FUN_01020dc0  size=26  [run]
void __thiscall FUN_01020dc0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01020DF0  FUN_01020df0  size=28  [run]
void __thiscall FUN_01020df0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01020E30  FUN_01020e30  size=29  [run]
void __thiscall FUN_01020e30(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x24);
  return;
}

// 01020E50  FUN_01020e50  size=28  [run]
int __thiscall FUN_01020e50(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_010066e0(param_2);
  *(undefined4 *)(param_1 + 4) = param_3;
  return param_1;
}

// 01020E70  FUN_01020e70  size=31  [run]
void FUN_01020e70(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01020E90  FUN_01020e90  size=39  [run]
void FUN_01020e90(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x70);
  }
  return;
}

// 01020EC0  FUN_01020ec0  size=31  [run]
void FUN_01020ec0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x30) + 4))(param_1);
  return;
}

// 01020EE0  FUN_01020ee0  size=42  [run]
void FUN_01020ee0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x30) + 8))(param_1,0x88);
  }
  return;
}

// 01020F20  FUN_01020f20  size=140  [run]
int FUN_01020f20(int param_1,double param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x4c);
  iVar6 = 0;
  if (2 < iVar5) {
    iVar3 = 0;
    do {
      iVar2 = iVar5 + iVar3 >> 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x48) + iVar2 * 4);
      iVar6 = iVar3;
      if (*(int *)(iVar1 + 0x6c) == 2) break;
      iVar6 = iVar2;
      if (param_2 < *(double *)(iVar1 + 0x58)) {
        iVar6 = iVar3;
        iVar5 = iVar2;
      }
      iVar3 = iVar6;
    } while (2 < iVar5 - iVar6);
  }
  if (iVar6 < iVar5) {
    piVar4 = (int *)(*(int *)(param_1 + 0x48) + iVar6 * 4);
    while ((iVar3 = *piVar4, *(int *)(iVar3 + 0x6c) == 2 ||
           ((double)*(float *)(iVar3 + param_3 * 4) + *(double *)(iVar3 + 0x58) < param_2))) {
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
      if (iVar5 <= iVar6) {
        return 0;
      }
    }
    if (*(double *)(iVar3 + 0x58) <= param_2) {
      return iVar3;
    }
  }
  return 0;
}

// 01021080  FUN_01021080  size=53  [run]
undefined4 __thiscall FUN_01021080(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b90,param_1,iVar2,1);
    return uVar3;
  }
  return 0;
}

// 010210C0  FUN_010210c0  size=25  [run]
void FUN_010210c0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01021130  FUN_01021130  size=25  [run]
void FUN_01021130(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01021150  FUN_01021150  size=21  [run]
void __thiscall FUN_01021150(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 010211A0  FUN_010211a0  size=57  [run]
void __thiscall FUN_010211a0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010211E0  FUN_010211e0  size=45  [run]
undefined4 __thiscall FUN_010211e0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,4);
    return uVar1;
  }
  return 0;
}

// 01021210  FUN_01021210  size=55  [run]
void __thiscall FUN_01021210(int param_1,undefined4 param_2,int param_3)

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

// 01021250  FUN_01021250  size=13  [run]
void __thiscall FUN_01021250(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 01021260  FUN_01021260  size=54  [run]
void __thiscall FUN_01021260(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,1);
  }
  *(undefined1 *)(*param_1 + param_1[1]) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010212A0  FUN_010212a0  size=22  [run]
int __thiscall FUN_010212a0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_1[1] = param_2 + iVar1;
  return *param_1 + iVar1;
}

// 010212C0  FUN_010212c0  size=13  [run]
void __thiscall FUN_010212c0(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 010212D0  FUN_010212d0  size=55  [run]
void __thiscall FUN_010212d0(int param_1,undefined4 param_2,int param_3)

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

// 01021310  FUN_01021310  size=25  [run]
void __thiscall FUN_01021310(int *param_1,undefined4 *param_2)

{
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01021330  FUN_01021330  size=52  [run]
undefined4 __thiscall FUN_01021330(int param_1,undefined4 param_2,int param_3)

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

// 01021370  FUN_01021370  size=33  [run]
void FUN_01021370(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01020a10(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 010213A0  FUN_010213a0  size=188  [run]
int * __thiscall FUN_010213a0(int *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    local_8 = param_2 * 8;
    param_2 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&local_8);
    iVar3 = (int)((local_8 >> 0x1f & 7U) + local_8) >> 3;
    if (iVar3 != 0) goto LAB_010213fd;
  }
  iVar3 = -0x80000000;
LAB_010213fd:
  iVar4 = 0;
  param_1[2] = iVar3;
  *param_1 = param_2;
  param_1[1] = iVar1;
  if (3 < iVar1) {
    iVar3 = (iVar1 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    puVar2 = (undefined8 *)(param_2 + 0x10);
    do {
      iVar3 = iVar3 + -1;
      puVar2[-2] = *param_3;
      puVar2[-1] = *param_3;
      *puVar2 = *param_3;
      puVar2[1] = *param_3;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  while (iVar4 < iVar1) {
    iVar4 = iVar4 + 1;
    *(undefined8 *)(param_2 + -8 + iVar4 * 8) = *param_3;
  }
  return param_1;
}

// 01021460  FUN_01021460  size=40  [run]
void FUN_01021460(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 * 4);
  return;
}

// 01021490  FUN_01021490  size=33  [run]
void FUN_01021490(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return;
}

// 010214C0  FUN_010214c0  size=62  [run]
void FUN_010214c0(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 01021500  FUN_01021500  size=73  [run]
void FUN_01021500(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 01021550  FUN_01021550  size=32  [run]
void __thiscall FUN_01021550(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01021570  FUN_01021570  size=32  [run]
void __thiscall FUN_01021570(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01021590  FUN_01021590  size=48  [run]
void FUN_01021590(int param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        FUN_01006740(param_3);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
      }
      param_1 = param_1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010215C0  FUN_010215c0  size=61  [run]
void __thiscall FUN_010215c0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01021600  FUN_01021600  size=52  [run]
undefined4 __thiscall FUN_01021600(int param_1,undefined4 param_2,int param_3)

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

// 01021640  FUN_01021640  size=37  [run]
void FUN_01021640(int param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        FUN_0101b5b0();
      }
      param_1 = param_1 + 0x24;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01021670  FUN_01021670  size=64  [run]
void __thiscall FUN_01021670(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010216B0  FUN_010216b0  size=44  [run]
void FUN_010216b0(undefined8 *param_1,int param_2,undefined8 *param_3)

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

// 010216E0  FUN_010216e0  size=52  [run]
undefined4 __thiscall FUN_010216e0(int param_1,undefined4 param_2,int param_3)

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

// 01021720  FUN_01021720  size=61  [run]
void __thiscall FUN_01021720(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01021760  FUN_01021760  size=52  [run]
undefined4 __thiscall FUN_01021760(int param_1,undefined4 param_2,int param_3)

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

// 010217C0  FUN_010217c0  size=39  [run]
void FUN_010217c0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01021820  FUN_01021820  size=58  [run]
void __thiscall FUN_01021820(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01021860  FUN_01021860  size=46  [run]
undefined4 __thiscall FUN_01021860(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,4);
    return uVar1;
  }
  return 0;
}

// 01021890  FUN_01021890  size=56  [run]
void __thiscall FUN_01021890(int param_1,int param_2)

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

// 010218D0  FUN_010218d0  size=55  [run]
void __thiscall FUN_010218d0(int *param_1,undefined1 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b90,param_1,1);
  }
  *(undefined1 *)(*param_1 + param_1[1]) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01021910  FUN_01021910  size=56  [run]
void __thiscall FUN_01021910(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b90,param_1,iVar2,1);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01021950  FUN_01021950  size=56  [run]
void __thiscall FUN_01021950(int param_1,int param_2)

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

// 01021990  FUN_01021990  size=53  [run]
undefined4 __thiscall FUN_01021990(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 01021A10  FUN_01021a10  size=36  [run]
void __thiscall FUN_01021a10(int *param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + 1;
  if (param_2 <= param_1[2]) {
    piVar1 = (int *)(*param_1 + param_2 * 8);
    do {
      if (*piVar1 != -1) {
        return;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 2;
    } while (param_2 <= param_1[2]);
  }
  return;
}

// 01021A40  FUN_01021a40  size=75  [run]
void __thiscall FUN_01021a40(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = *param_1 + param_1[1] * 8;
  if (iVar1 != 0) {
    FUN_01006740(param_3);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_3 + 4);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01021A90  FUN_01021a90  size=74  [run]
int __thiscall FUN_01021a90(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x24);
  }
  if (*param_1 + param_1[1] * 0x24 != 0) {
    FUN_0101b5b0();
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0x24;
}

// 01021AE0  FUN_01021ae0  size=74  [run]
void __thiscall FUN_01021ae0(int *param_1,undefined4 param_2,undefined8 *param_3)

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

// 01021B30  FUN_01021b30  size=170  [run]
void __thiscall FUN_01021b30(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= param_3) {
      iVar1 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar1,4);
  }
  iVar3 = param_3 - param_1[1];
  iVar4 = 0;
  iVar1 = *param_1 + param_1[1] * 4;
  if (3 < iVar3) {
    iVar5 = (iVar3 - 4U >> 2) + 1;
    iVar4 = iVar5 * 4;
    puVar2 = (undefined4 *)(iVar1 + 8);
    do {
      iVar5 = iVar5 + -1;
      puVar2[-2] = *param_4;
      puVar2[-1] = *param_4;
      *puVar2 = *param_4;
      puVar2[1] = *param_4;
      puVar2 = puVar2 + 4;
    } while (iVar5 != 0);
  }
  if (iVar3 <= iVar4) {
    param_1[1] = param_3;
    return;
  }
  do {
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar1 + -4 + iVar4 * 4) = *param_4;
  } while (iVar4 < iVar3);
  param_1[1] = param_3;
  return;
}

// 01021BE0  FUN_01021be0  size=61  [run]
void __fastcall FUN_01021be0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01021C20  FUN_01021c20  size=57  [run]
void __fastcall FUN_01021c20(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b90 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01021C60  FUN_01021c60  size=64  [run]
void __fastcall FUN_01021c60(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01021CA0  FUN_01021ca0  size=61  [run]
void __fastcall FUN_01021ca0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01021CE0  FUN_01021ce0  size=46  [run]
void FUN_01021ce0(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0x80000000;
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01021D10  FUN_01021d10  size=61  [run]
void __thiscall FUN_01021d10(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01021D50  FUN_01021d50  size=63  [run]
void __thiscall FUN_01021d50(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01021D90  FUN_01021d90  size=97  [run]
void __fastcall FUN_01021d90(int *param_1)

{
  *(undefined1 *)(*param_1 + -1 + param_1[1]) = 0x20;
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b90,param_1,1);
  }
  *(undefined1 *)(*param_1 + param_1[1]) = 0x20;
  param_1[1] = param_1[1] + 1;
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b90,param_1,1);
  }
  *(undefined1 *)(*param_1 + param_1[1]) = 0;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01021E00  FUN_01021e00  size=59  [run]
void __fastcall FUN_01021e00(undefined4 *param_1)

{
  if ((param_1[2] & 0x3fffffff) == 0) {
    FUN_0100a210(&PTR_vftable_018e9b90,param_1,1,1);
  }
  param_1[1] = 1;
  *(undefined1 *)*param_1 = 0;
  return;
}

// 01021E40  FUN_01021e40  size=76  [run]
void __thiscall FUN_01021e40(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = *param_1 + param_1[1] * 8;
  if (iVar1 != 0) {
    FUN_01006740(param_2);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01021E90  FUN_01021e90  size=75  [run]
void __thiscall FUN_01021e90(int *param_1,undefined8 *param_2)

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

// 01021EE0  FUN_01021ee0  size=167  [run]
void __thiscall FUN_01021ee0(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= param_2) {
      iVar1 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar1,4);
  }
  iVar3 = param_2 - param_1[1];
  iVar4 = 0;
  iVar1 = *param_1 + param_1[1] * 4;
  if (3 < iVar3) {
    iVar5 = (iVar3 - 4U >> 2) + 1;
    iVar4 = iVar5 * 4;
    puVar2 = (undefined4 *)(iVar1 + 8);
    do {
      iVar5 = iVar5 + -1;
      puVar2[-2] = *param_3;
      puVar2[-1] = *param_3;
      *puVar2 = *param_3;
      puVar2[1] = *param_3;
      puVar2 = puVar2 + 4;
    } while (iVar5 != 0);
  }
  if (iVar3 <= iVar4) {
    param_1[1] = param_2;
    return;
  }
  do {
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar1 + -4 + iVar4 * 4) = *param_3;
  } while (iVar4 < iVar3);
  param_1[1] = param_2;
  return;
}

// 01021F90  FUN_01021f90  size=61  [run]
void __fastcall FUN_01021f90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01021FD0  FUN_01021fd0  size=57  [run]
void __fastcall FUN_01021fd0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b90 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01022010  FUN_01022010  size=64  [run]
void __fastcall FUN_01022010(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01022050  FUN_01022050  size=27  [run]
void __thiscall FUN_01022050(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = (int)&DAT_80000010;
  return;
}

// 01022070  FUN_01022070  size=61  [run]
void __fastcall FUN_01022070(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010220B0  FUN_010220b0  size=27  [run]
void __thiscall FUN_010220b0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7ffffffa;
  return;
}

// 010220D0  FUN_010220d0  size=61  [run]
void __fastcall FUN_010220d0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01022110  FUN_01022110  size=63  [run]
void __fastcall FUN_01022110(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01022150  FUN_01022150  size=37  [run]
void FUN_01022150(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_01006770();
  }
  return;
}

// 010221A0  FUN_010221a0  size=53  [run]
int __thiscall FUN_010221a0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_0101c4a0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x70);
  }
  return param_1;
}

// 010221E0  FUN_010221e0  size=85  [run]
int * __fastcall FUN_010221e0(int *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  FUN_0100a210(&PTR_vftable_018e9b90,param_1,0x40,1);
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b90,param_1,1);
  }
  *(undefined1 *)(param_1[1] + *param_1) = 0;
  param_1[1] = param_1[1] + 1;
  return param_1;
}

// 01022240  FUN_01022240  size=57  [run]
void __fastcall FUN_01022240(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b90 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01022280  FUN_01022280  size=64  [run]
void __fastcall FUN_01022280(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010222C0  FUN_010222c0  size=108  [run]
int * __thiscall FUN_010222c0(int *param_1,uint param_2)

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
    uVar3 = param_2 * 4 + 0x7f & 0xffffff80;
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

// 01022330  FUN_01022330  size=143  [run]
void __fastcall FUN_01022330(int *param_1)

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
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010223C0  FUN_010223c0  size=61  [run]
void __fastcall FUN_010223c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01022400  FUN_01022400  size=43  [run]
undefined4 __fastcall FUN_01022400(undefined4 *param_1)

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

// 01022430  FUN_01022430  size=61  [run]
void __fastcall FUN_01022430(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01022470  FUN_01022470  size=63  [run]
void __fastcall FUN_01022470(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010224B0  FUN_010224b0  size=47  [run]
void FUN_010224b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    do {
      if (puVar1 != (undefined4 *)0x50) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
      }
      puVar1 = puVar1 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010224E0  FUN_010224e0  size=96  [run]
void __thiscall FUN_010224e0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  uVar2 = param_1[2];
  param_1[1] = 0;
  if ((uVar2 & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,((uVar2 & 0x3fffffff) + uVar2 * 8) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01022540  FUN_01022540  size=36  [run]
void FUN_01022540(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_0101c4a0();
  }
  return;
}

// 01022570  FUN_01022570  size=127  [run]
int __thiscall FUN_01022570(int *param_1,undefined4 param_2,int param_3)

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
    FUN_0100a210(param_2,param_1,iVar2,0x70);
  }
  if (0 < param_3) {
    puVar3 = (undefined4 *)(param_1[1] * 0x70 + *param_1 + 0x50);
    iVar4 = param_3;
    do {
      if (puVar3 != (undefined4 *)0x50) {
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
      }
      puVar3 = puVar3 + 0x1c;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_1[1] + param_3;
  return iVar1 * 0x70 + *param_1;
}

// 01022620  FUN_01022620  size=96  [run]
void __fastcall FUN_01022620(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  uVar2 = param_1[2];
  param_1[1] = 0;
  if ((uVar2 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar2 & 0x3fffffff) + uVar2 * 8) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01022680  FUN_01022680  size=127  [run]
int __thiscall FUN_01022680(int *param_1,int param_2)

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
    FUN_0100a210(&PTR_vftable_018e9b90,param_1,iVar2,0x70);
  }
  if (0 < param_2) {
    puVar3 = (undefined4 *)(param_1[1] * 0x70 + *param_1 + 0x50);
    iVar4 = param_2;
    do {
      if (puVar3 != (undefined4 *)0x50) {
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
      }
      puVar3 = puVar3 + 0x1c;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_1[1] + param_2;
  return iVar1 * 0x70 + *param_1;
}

// 01022700  FUN_01022700  size=93  [run]
void __thiscall FUN_01022700(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_0101c4a0();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x70);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01022760  FUN_01022760  size=96  [run]
void __fastcall FUN_01022760(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  uVar2 = param_1[2];
  param_1[1] = 0;
  if ((uVar2 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar2 & 0x3fffffff) + uVar2 * 8) * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01022820  FUN_01022820  size=135  [run]
undefined4 * __thiscall FUN_01022820(undefined4 *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  LPVOID pvVar3;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  uVar2 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar2) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar2 & 0x3fffffff) + uVar2 * 8) * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(param_1,0xc);
  }
  return param_1;
}

// 010228B0  FUN_010228b0  size=93  [run]
void __fastcall FUN_010228b0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_0101c4a0();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b90 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x70);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01022910  FUN_01022910  size=132  [run]
void FUN_01022910(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    puVar3 = (undefined4 *)(param_1 + param_2 * 0xc);
    do {
      iVar1 = puVar3[1];
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        FUN_01006770();
      }
      uVar2 = puVar3[2];
      puVar3[1] = 0;
      if (-1 < (int)uVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar3,((uVar2 & 0x3fffffff) + uVar2 * 8) * 4);
      }
      param_2 = param_2 + -1;
      *puVar3 = 0;
      puVar3[2] = 0x80000000;
      puVar3 = puVar3 + -3;
    } while (-1 < param_2);
  }
  return;
}

// 010229A0  FUN_010229a0  size=167  [run]
void __fastcall FUN_010229a0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    puVar4 = (undefined4 *)(*param_1 + iVar3 * 0xc);
    do {
      iVar1 = puVar4[1];
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        FUN_01006770();
      }
      uVar2 = puVar4[2];
      puVar4[1] = 0;
      if (-1 < (int)uVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar4,((uVar2 & 0x3fffffff) + uVar2 * 8) * 4);
      }
      iVar3 = iVar3 + -1;
      *puVar4 = 0;
      puVar4[2] = 0x80000000;
      puVar4 = puVar4 + -3;
    } while (-1 < iVar3);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 01022A80  FUN_01022a80  size=187  [run]
void __fastcall FUN_01022a80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_0101c4a0();
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x84)) {
    (**(code **)(PTR_vftable_018e9b90 + 0x10))
              (*(undefined4 *)(param_1 + 0x7c),(*(uint *)(param_1 + 0x84) & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  iVar1 = *(int *)(param_1 + 0x74);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_0101c4a0();
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x78)) {
    (**(code **)(PTR_vftable_018e9b90 + 0x10))
              (*(undefined4 *)(param_1 + 0x70),(*(uint *)(param_1 + 0x78) & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x80000000;
  FUN_0101c4a0();
  return;
}

// 01022B40  FUN_01022b40  size=246  [run]
void __thiscall FUN_01022b40(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= param_3) {
      iVar4 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar4,0xc);
  }
  iVar4 = (param_1[1] - param_3) + -1;
  if (-1 < iVar4) {
    puVar3 = (undefined4 *)(*param_1 + param_3 * 0xc + iVar4 * 0xc);
    do {
      iVar1 = puVar3[1];
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        FUN_01006770();
      }
      uVar2 = puVar3[2];
      puVar3[1] = 0;
      if (-1 < (int)uVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar3,((uVar2 & 0x3fffffff) + uVar2 * 8) * 4);
      }
      iVar4 = iVar4 + -1;
      *puVar3 = 0;
      puVar3[2] = 0x80000000;
      puVar3 = puVar3 + -3;
    } while (-1 < iVar4);
  }
  iVar4 = param_3 - param_1[1];
  puVar3 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (0 < iVar4) {
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0x80000000;
      }
      puVar3 = puVar3 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 01022C40  FUN_01022c40  size=203  [run]
void __thiscall FUN_01022c40(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    puVar4 = (undefined4 *)(*param_1 + iVar3 * 0xc);
    do {
      iVar1 = puVar4[1];
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        FUN_01006770();
      }
      uVar2 = puVar4[2];
      puVar4[1] = 0;
      if (-1 < (int)uVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar4,((uVar2 & 0x3fffffff) + uVar2 * 8) * 4);
      }
      iVar3 = iVar3 + -1;
      *puVar4 = 0;
      puVar4[2] = 0x80000000;
      puVar4 = puVar4 + -3;
    } while (-1 < iVar3);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01022D10  FUN_01022d10  size=56  [run]
int __thiscall FUN_01022d10(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01022a80();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x30) + 8))(param_1,0x88);
  }
  return param_1;
}

// 01022D50  FUN_01022d50  size=206  [run]
void __fastcall FUN_01022d50(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    puVar4 = (undefined4 *)(*param_1 + iVar3 * 0xc);
    do {
      iVar1 = puVar4[1];
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        FUN_01006770();
      }
      uVar2 = puVar4[2];
      puVar4[1] = 0;
      if (-1 < (int)uVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar4,((uVar2 & 0x3fffffff) + uVar2 * 8) * 4);
      }
      iVar3 = iVar3 + -1;
      *puVar4 = 0;
      puVar4[2] = 0x80000000;
      puVar4 = puVar4 + -3;
    } while (-1 < iVar3);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01022E20  FUN_01022e20  size=206  [run]
void __fastcall FUN_01022e20(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_1[1] + -1;
  if (-1 < iVar3) {
    puVar4 = (undefined4 *)(*param_1 + iVar3 * 0xc);
    do {
      iVar1 = puVar4[1];
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        FUN_01006770();
      }
      uVar2 = puVar4[2];
      puVar4[1] = 0;
      if (-1 < (int)uVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(*puVar4,((uVar2 & 0x3fffffff) + uVar2 * 8) * 4);
      }
      iVar3 = iVar3 + -1;
      *puVar4 = 0;
      puVar4[2] = 0x80000000;
      puVar4 = puVar4 + -3;
    } while (-1 < iVar3);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01022F00  FUN_01022f00  size=15  [run]
void __thiscall FUN_01022f00(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 4) = param_2;
  return;
}

// 01022F50  FUN_01022f50  size=15  [run]
int __thiscall FUN_01022f50(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01022F60  FUN_01022f60  size=15  [run]
int __thiscall FUN_01022f60(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01022F90  FUN_01022f90  size=31  [run]
void FUN_01022f90(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 - (int)param_1;
  iVar1 = 2;
  do {
    *param_1 = *(undefined4 *)(param_2 + (int)param_1);
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 01022FB0  FUN_01022fb0  size=28  [run]
void __thiscall FUN_01022fb0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01022FD0  FUN_01022fd0  size=31  [run]
int * __thiscall FUN_01022fd0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 01022FF0  FUN_01022ff0  size=40  [run]
void __thiscall FUN_01022ff0(int *param_1,int param_2)

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


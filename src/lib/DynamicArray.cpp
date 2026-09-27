// src/lib/DynamicArray.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008D9250..00E9BD40, 119 functions

#include "mgrr.h"

// 008D9250  lib::DynamicArray<char,sys::StringSystem::Allocator>::vf04  size=4  [class]
undefined4 lib::DynamicArray<char,sys::StringSystem::Allocator>::vf04(void)

{
  return 0xffffffff;
}

// 008D9280  lib::DynamicArray<char,sys::StringSystem::Allocator>::vf08  size=87  [class]
uint __thiscall
lib::DynamicArray<char,sys::StringSystem::Allocator>::vf08(int *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  
  uVar2 = param_1[3];
  if (uVar2 < (uint)param_1[2]) goto LAB_008d92d1;
  if (uVar2 == 0) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = 0x20;
LAB_008d92a6:
    (*pcVar3)(iVar4);
  }
  else if (param_1[2] == uVar2) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = uVar2 * 2;
    goto LAB_008d92a6;
  }
  uVar2 = param_1[1];
  if ((uVar2 != 0) && ((uint)param_1[2] < (uint)param_1[3])) {
    puVar1 = (undefined1 *)(uVar2 + param_1[2]);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_2;
    }
    param_1[2] = param_1[2] + 1;
    return 1;
  }
LAB_008d92d1:
  return uVar2 & 0xffffff00;
}

// 008D92E0  lib::DynamicArray<char,sys::StringSystem::Allocator>::vf0C  size=80  [class]
int __thiscall
lib::DynamicArray<char,sys::StringSystem::Allocator>::vf0C
          (int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  uVar3 = param_2 - param_1[1];
  if (uVar1 < uVar3) {
    return uVar1 + param_1[1];
  }
  uVar2 = param_1[3];
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = uVar2 * 2;
    }
    (**(code **)(*param_1 + 0x14))(iVar4);
    param_2 = param_1[1] + uVar3;
  }
  iVar4 = Array<char>::vf0C(param_2,param_3);
  return iVar4;
}

// 008D9340  lib::DynamicArray<char,sys::StringSystem::Allocator>::vf18  size=45  [class]
void __thiscall lib::DynamicArray<char,sys::StringSystem::Allocator>::vf18(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}

// 008D9770  lib::DynamicArray<char,sys::StringSystem::Allocator>::vf14  size=133  [class]
void __thiscall lib::DynamicArray<char,sys::StringSystem::Allocator>::vf14(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  if (*(uint *)(param_1 + 0xc) < param_2) {
    uVar3 = param_2;
    if (param_2 < 0x21) {
      uVar3 = 0x20;
    }
    puVar4 = (undefined1 *)FUN_00e913a0(uVar3);
    if (puVar4 != (undefined1 *)0x0) {
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 != 0) {
        puVar5 = puVar4;
        iVar6 = iVar2;
        do {
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = puVar5[iVar1 - (int)puVar4];
          }
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_00e913d0(*(int *)(param_1 + 4));
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      *(int *)(param_1 + 8) = iVar2;
      *(undefined1 **)(param_1 + 4) = puVar4;
      *(uint *)(param_1 + 0xc) = param_2;
    }
  }
  return;
}

// 008D9800  lib::DynamicArray<char,sys::StringSystem::Allocator>::vf00  size=80  [class]
undefined4 * __thiscall
lib::DynamicArray<char,sys::StringSystem::Allocator>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
    FUN_00e913d0(param_1[1]);
    param_1[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = Array<char>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008D9F40  FUN_008d9f40  size=81  [callgraph]
int * __thiscall FUN_008d9f40(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  iVar3 = 0;
  if (param_2 != (char *)0x0) {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = FUN_00ea1210(param_2,(int)pcVar4 - (int)(param_2 + 1));
    iVar3 = FUN_008d93a0(uVar5,param_2,(int)pcVar4 - (int)(param_2 + 1));
  }
  iVar2 = *param_1;
  *param_1 = iVar3;
  if (iVar2 != 0) {
    FUN_008d98a0(iVar2);
  }
  return param_1;
}

// 008D9FA0  lib::DynamicArray<char,sys::StringSystem::Allocator>::DynamicArray<char,sys::StringSystem::Allocator>  size=217  [class]
undefined4
lib::DynamicArray<char,sys::StringSystem::Allocator>::
DynamicArray<char,sys::StringSystem::Allocator>(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined **ppuStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  cVar1 = (**(code **)*param_1)();
  if (cVar1 == '\0') {
    if (*param_2 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x70))(*(undefined4 *)(*param_2 + 0x14));
      return uVar2;
    }
    uVar2 = (**(code **)(*param_1 + 0x70))(&DAT_016416fa);
    return uVar2;
  }
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  ppuStack_14 = vftable;
  vf14(0x400);
  cVar1 = (**(code **)(*param_1 + 0x74))(&ppuStack_14);
  if (cVar1 != '\0') {
    FUN_008d9f40(ppuStack_14);
    if (ppuStack_14 != (undefined **)0x0) {
      uStack_10 = 0;
      FUN_00e913d0(ppuStack_14);
    }
    return 1;
  }
  if (ppuStack_14 != (undefined **)0x0) {
    uStack_10 = 0;
    FUN_00e913d0(ppuStack_14);
  }
  return 0;
}

// 008DA080  FUN_008da080  size=116  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_008da080(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01b35c04 & 1) == 0) {
    _DAT_01b35c04 = _DAT_01b35c04 | 1;
    DAT_01b35c00 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01b35c00;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01b35c00);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = lib::DynamicArray<char,sys::StringSystem::Allocator>::
          DynamicArray<char,sys::StringSystem::Allocator>(param_1,param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00C4BCE0  lib::DynamicArray<int,sys::GlobalAllocator>::vf04  size=4  [class]
undefined4 lib::DynamicArray<int,sys::GlobalAllocator>::vf04(void)

{
  return 0xffffffff;
}

// 00C4BD70  lib::DynamicArray<int,sys::GlobalAllocator>::vf08  size=90  [class]
uint __thiscall lib::DynamicArray<int,sys::GlobalAllocator>::vf08(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  
  uVar2 = param_1[3];
  if (uVar2 < (uint)param_1[2]) goto LAB_00c4bdc4;
  if (uVar2 == 0) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = 0x20;
LAB_00c4bd96:
    (*pcVar3)(iVar4);
  }
  else if (param_1[2] == uVar2) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = uVar2 * 2;
    goto LAB_00c4bd96;
  }
  uVar2 = param_1[1];
  if ((uVar2 != 0) && ((uint)param_1[2] < (uint)param_1[3])) {
    puVar1 = (undefined4 *)(uVar2 + param_1[2] * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
    }
    param_1[2] = param_1[2] + 1;
    return 1;
  }
LAB_00c4bdc4:
  return uVar2 & 0xffffff00;
}

// 00C4BDD0  lib::DynamicArray<int,sys::GlobalAllocator>::vf0C  size=84  [class]
int __thiscall
lib::DynamicArray<int,sys::GlobalAllocator>::vf0C(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  uVar3 = param_2 - param_1[1] >> 2;
  if (uVar1 < uVar3) {
    return param_1[1] + uVar1 * 4;
  }
  uVar2 = param_1[3];
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = uVar2 * 2;
    }
    (**(code **)(*param_1 + 0x14))(iVar4);
    param_2 = param_1[1] + uVar3 * 4;
  }
  iVar4 = Array<int>::vf0C(param_2,param_3);
  return iVar4;
}

// 00C4BE70  lib::DynamicArray<int,sys::GlobalAllocator>::vf18  size=45  [class]
void __thiscall lib::DynamicArray<int,sys::GlobalAllocator>::vf18(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}

// 00C4BEC0  lib::DynamicArray<sInst,sys::GlobalAllocator>::vf04  size=4  [class]
undefined4 lib::DynamicArray<sInst,sys::GlobalAllocator>::vf04(void)

{
  return 0xffffffff;
}

// 00C4BF40  lib::DynamicArray<sInst,sys::GlobalAllocator>::vf08  size=96  [class]
uint __thiscall
lib::DynamicArray<sInst,sys::GlobalAllocator>::vf08(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  
  uVar2 = param_1[3];
  if (uVar2 < (uint)param_1[2]) goto LAB_00c4bf9a;
  if (uVar2 == 0) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = 0x20;
LAB_00c4bf66:
    (*pcVar3)(iVar4);
  }
  else if (param_1[2] == uVar2) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = uVar2 * 2;
    goto LAB_00c4bf66;
  }
  uVar2 = param_1[1];
  if ((uVar2 != 0) && ((uint)param_1[2] < (uint)param_1[3])) {
    puVar1 = (undefined4 *)(uVar2 + param_1[2] * 8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
    }
    param_1[2] = param_1[2] + 1;
    return 1;
  }
LAB_00c4bf9a:
  return uVar2 & 0xffffff00;
}

// 00C4BFA0  lib::DynamicArray<sInst,sys::GlobalAllocator>::vf0C  size=84  [class]
int __thiscall
lib::DynamicArray<sInst,sys::GlobalAllocator>::vf0C(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  uVar3 = param_2 - param_1[1] >> 3;
  if (uVar1 < uVar3) {
    return param_1[1] + uVar1 * 8;
  }
  uVar2 = param_1[3];
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = uVar2 * 2;
    }
    (**(code **)(*param_1 + 0x14))(iVar4);
    param_2 = param_1[1] + uVar3 * 8;
  }
  iVar4 = Array<sInst>::vf0C(param_2,param_3);
  return iVar4;
}

// 00C4C030  lib::DynamicArray<sInst,sys::GlobalAllocator>::vf18  size=45  [class]
void __thiscall lib::DynamicArray<sInst,sys::GlobalAllocator>::vf18(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}

// 00C4C080  lib::DynamicArray<cVMSyntaxCode*,sys::GlobalAllocator>::vf04  size=4  [class]
undefined4 lib::DynamicArray<cVMSyntaxCode*,sys::GlobalAllocator>::vf04(void)

{
  return 0xffffffff;
}

// 00C4C0F0  lib::DynamicArray<cVMSyntaxCode*,sys::GlobalAllocator>::vf08  size=90  [class]
uint __thiscall
lib::DynamicArray<cVMSyntaxCode*,sys::GlobalAllocator>::vf08(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  
  uVar2 = param_1[3];
  if (uVar2 < (uint)param_1[2]) goto LAB_00c4c144;
  if (uVar2 == 0) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = 0x20;
LAB_00c4c116:
    (*pcVar3)(iVar4);
  }
  else if (param_1[2] == uVar2) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = uVar2 * 2;
    goto LAB_00c4c116;
  }
  uVar2 = param_1[1];
  if ((uVar2 != 0) && ((uint)param_1[2] < (uint)param_1[3])) {
    puVar1 = (undefined4 *)(uVar2 + param_1[2] * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
    }
    param_1[2] = param_1[2] + 1;
    return 1;
  }
LAB_00c4c144:
  return uVar2 & 0xffffff00;
}

// 00C4C150  lib::DynamicArray<cVMSyntaxCode*,sys::GlobalAllocator>::vf0C  size=84  [class]
int __thiscall
lib::DynamicArray<cVMSyntaxCode*,sys::GlobalAllocator>::vf0C
          (int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  uVar3 = param_2 - param_1[1] >> 2;
  if (uVar1 < uVar3) {
    return param_1[1] + uVar1 * 4;
  }
  uVar2 = param_1[3];
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = uVar2 * 2;
    }
    (**(code **)(*param_1 + 0x14))(iVar4);
    param_2 = param_1[1] + uVar3 * 4;
  }
  iVar4 = Array<cVMSyntaxCode*>::vf0C(param_2,param_3);
  return iVar4;
}

// 00C4C1E0  FUN_00c4c1e0  size=44  [between]
void __fastcall FUN_00c4c1e0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00C4C210  lib::DynamicArray<cVMSyntaxCode*,sys::GlobalAllocator>::vf18  size=45  [class]
void __thiscall
lib::DynamicArray<cVMSyntaxCode*,sys::GlobalAllocator>::vf18(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}

// 00C56290  lib::DynamicArray<sLINEDATA,sys::GlobalAllocator>::vf04  size=4  [class]
undefined4 lib::DynamicArray<sLINEDATA,sys::GlobalAllocator>::vf04(void)

{
  return 0xffffffff;
}

// 00C56300  lib::DynamicArray<sLINEDATA,sys::GlobalAllocator>::vf08  size=117  [class]
uint __thiscall
lib::DynamicArray<sLINEDATA,sys::GlobalAllocator>::vf08(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  
  uVar2 = param_1[3];
  if (uVar2 < (uint)param_1[2]) goto LAB_00c5636f;
  if (uVar2 == 0) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = 0x20;
LAB_00c56326:
    uVar2 = (*pcVar3)(iVar4);
  }
  else if (param_1[2] == uVar2) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = uVar2 * 2;
    goto LAB_00c56326;
  }
  if ((param_1[1] != 0) && (uVar2 = param_1[2], uVar2 < (uint)param_1[3])) {
    puVar1 = (undefined4 *)(param_1[1] + uVar2 * 0x14);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      puVar1[2] = param_2[2];
      puVar1[3] = param_2[3];
      puVar1[4] = param_2[4];
    }
    param_1[2] = param_1[2] + 1;
    return 1;
  }
LAB_00c5636f:
  return uVar2 & 0xffffff00;
}

// 00C56380  lib::DynamicArray<sLINEDATA,sys::GlobalAllocator>::vf0C  size=118  [class]
int __thiscall
lib::DynamicArray<sLINEDATA,sys::GlobalAllocator>::vf0C(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  uVar3 = (param_2 - param_1[1]) / 0x14;
  if (uVar1 < uVar3) {
    return param_1[1] + uVar1 * 0x14;
  }
  uVar2 = param_1[3];
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
      (**(code **)(*param_1 + 0x14))(0x20);
    }
    else {
      (**(code **)(*param_1 + 0x14))(uVar2 * 2);
    }
    param_2 = param_1[1] + uVar3 * 0x14;
  }
  iVar4 = Array<sLINEDATA>::vf0C(param_2,param_3);
  return iVar4;
}

// 00C56400  lib::DynamicArray<sLINEDATA,sys::GlobalAllocator>::vf18  size=45  [class]
void __thiscall lib::DynamicArray<sLINEDATA,sys::GlobalAllocator>::vf18(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}

// 00C56480  lib::DynamicArray<sGloblVariable,sys::GlobalAllocator>::vf04  size=4  [class]
undefined4 lib::DynamicArray<sGloblVariable,sys::GlobalAllocator>::vf04(void)

{
  return 0xffffffff;
}

// 00C564F0  lib::DynamicArray<sGloblVariable,sys::GlobalAllocator>::vf08  size=100  [class]
uint __thiscall
lib::DynamicArray<sGloblVariable,sys::GlobalAllocator>::vf08(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = param_1[3];
  if (uVar1 < (uint)param_1[2]) goto LAB_00c5654e;
  if (uVar1 == 0) {
    pcVar2 = *(code **)(*param_1 + 0x14);
    iVar4 = 0x20;
LAB_00c56516:
    uVar1 = (*pcVar2)(iVar4);
  }
  else if (param_1[2] == uVar1) {
    pcVar2 = *(code **)(*param_1 + 0x14);
    iVar4 = uVar1 * 2;
    goto LAB_00c56516;
  }
  if ((param_1[1] != 0) && (uVar1 = param_1[2], uVar1 < (uint)param_1[3])) {
    puVar3 = (undefined4 *)(param_1[1] + uVar1 * 0x24);
    if (puVar3 != (undefined4 *)0x0) {
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1[2] = param_1[2] + 1;
    return 1;
  }
LAB_00c5654e:
  return uVar1 & 0xffffff00;
}

// 00C56560  lib::DynamicArray<sGloblVariable,sys::GlobalAllocator>::vf0C  size=118  [class]
int __thiscall
lib::DynamicArray<sGloblVariable,sys::GlobalAllocator>::vf0C
          (int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  uVar3 = (param_2 - param_1[1]) / 0x24;
  if (uVar1 < uVar3) {
    return param_1[1] + uVar1 * 0x24;
  }
  uVar2 = param_1[3];
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
      (**(code **)(*param_1 + 0x14))(0x20);
    }
    else {
      (**(code **)(*param_1 + 0x14))(uVar2 * 2);
    }
    param_2 = param_1[1] + uVar3 * 0x24;
  }
  iVar4 = Array<sGloblVariable>::vf0C(param_2,param_3);
  return iVar4;
}

// 00C565E0  lib::DynamicArray<sGloblVariable,sys::GlobalAllocator>::vf18  size=45  [class]
void __thiscall
lib::DynamicArray<sGloblVariable,sys::GlobalAllocator>::vf18(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}

// 00C56680  lib::DynamicArray<cVMSyntaxCode*,sys::GlobalAllocator>::vf14  size=151  [class]
void __thiscall
lib::DynamicArray<cVMSyntaxCode*,sys::GlobalAllocator>::vf14(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (*(uint *)(param_1 + 0xc) < param_2) {
    uVar3 = param_2;
    if (param_2 < 0x21) {
      uVar3 = 0x20;
    }
    puVar4 = (undefined4 *)FUN_00dd29b0(uVar3 * 4,0x20,0,0);
    if (puVar4 != (undefined4 *)0x0) {
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 != 0) {
        puVar5 = puVar4;
        iVar6 = iVar2;
        do {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *(undefined4 *)((iVar1 - (int)puVar4) + (int)puVar5);
          }
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      *(int *)(param_1 + 8) = iVar2;
      *(undefined4 **)(param_1 + 4) = puVar4;
      *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
    }
  }
  return;
}

// 00C56780  lib::DynamicArray<cVMSyntaxCode*,sys::GlobalAllocator>::vf00  size=81  [class]
undefined4 * __thiscall
lib::DynamicArray<cVMSyntaxCode*,sys::GlobalAllocator>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = Array<cVMSyntaxCode*>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C5D140  lib::DynamicArray<int,sys::GlobalAllocator>::vf14  size=151  [class]
void __thiscall lib::DynamicArray<int,sys::GlobalAllocator>::vf14(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (*(uint *)(param_1 + 0xc) < param_2) {
    uVar3 = param_2;
    if (param_2 < 0x21) {
      uVar3 = 0x20;
    }
    puVar4 = (undefined4 *)FUN_00dd29b0(uVar3 * 4,0x20,0,0);
    if (puVar4 != (undefined4 *)0x0) {
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 != 0) {
        puVar5 = puVar4;
        iVar6 = iVar2;
        do {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *(undefined4 *)((iVar1 - (int)puVar4) + (int)puVar5);
          }
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      *(int *)(param_1 + 8) = iVar2;
      *(undefined4 **)(param_1 + 4) = puVar4;
      *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
    }
  }
  return;
}

// 00C5D220  lib::DynamicArray<sLINEDATA,sys::GlobalAllocator>::vf14  size=196  [class]
uint __thiscall lib::DynamicArray<sLINEDATA,sys::GlobalAllocator>::vf14(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = param_2;
  if (*(uint *)(param_1 + 0xc) < param_2) {
    if (param_2 < 0x21) {
      uVar2 = 0x20;
    }
    puVar3 = (undefined4 *)FUN_00dd29b0(uVar2 * 0x14,0x20,0,0);
    uVar2 = 0;
    if (puVar3 != (undefined4 *)0x0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 != 0) {
        iVar5 = *(int *)(param_1 + 4) - (int)puVar3;
        puVar4 = puVar3;
        iVar6 = iVar1;
        do {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
            puVar4[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar4);
            puVar4[2] = *(undefined4 *)(iVar5 + 8 + (int)puVar4);
            puVar4[3] = *(undefined4 *)(iVar5 + 0xc + (int)puVar4);
            puVar4[4] = *(undefined4 *)(iVar5 + 0x10 + (int)puVar4);
          }
          puVar4 = puVar4 + 5;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      uVar2 = param_2 * 4;
      *(int *)(param_1 + 8) = iVar1;
      *(undefined4 **)(param_1 + 4) = puVar3;
      *(uint *)(param_1 + 0xc) = (param_2 * 0x14) / 0x14;
    }
  }
  return uVar2;
}

// 00C5D330  lib::DynamicArray<sInst,sys::GlobalAllocator>::vf14  size=160  [class]
void __thiscall lib::DynamicArray<sInst,sys::GlobalAllocator>::vf14(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  if (*(uint *)(param_1 + 0xc) < param_2) {
    uVar2 = param_2;
    if (param_2 < 0x21) {
      uVar2 = 0x20;
    }
    puVar3 = (undefined4 *)FUN_00dd29b0(uVar2 * 8,0x20,0,0);
    if (puVar3 != (undefined4 *)0x0) {
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 != 0) {
        iVar5 = *(int *)(param_1 + 4) - (int)puVar3;
        puVar4 = puVar3;
        iVar6 = iVar1;
        do {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
            puVar4[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar4);
          }
          puVar4 = puVar4 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      *(int *)(param_1 + 8) = iVar1;
      *(undefined4 **)(param_1 + 4) = puVar3;
      *(uint *)(param_1 + 0xc) = param_2 & 0x1fffffff;
    }
  }
  return;
}

// 00C5D410  lib::DynamicArray<sGloblVariable,sys::GlobalAllocator>::vf14  size=188  [class]
uint __thiscall
lib::DynamicArray<sGloblVariable,sys::GlobalAllocator>::vf14(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  uVar3 = param_2;
  if (*(uint *)(param_1 + 0xc) < param_2) {
    if (param_2 < 0x21) {
      uVar3 = 0x20;
    }
    puVar4 = (undefined4 *)FUN_00dd29b0(uVar3 * 0x24,0x20,0,0);
    uVar3 = 0;
    if (puVar4 != (undefined4 *)0x0) {
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 != 0) {
        puVar5 = puVar4;
        iVar7 = iVar2;
        do {
          if (puVar5 != (undefined4 *)0x0) {
            puVar8 = (undefined4 *)((iVar1 - (int)puVar4) + (int)puVar5);
            puVar9 = puVar5;
            for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            }
          }
          puVar5 = puVar5 + 9;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      uVar3 = param_2 * 4;
      *(int *)(param_1 + 8) = iVar2;
      *(undefined4 **)(param_1 + 4) = puVar4;
      *(uint *)(param_1 + 0xc) = (param_2 * 0x24) / 0x24;
    }
  }
  return uVar3;
}

// 00C5D4D0  FUN_00c5d4d0  size=244  [between]
undefined4 __thiscall FUN_00c5d4d0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00c5c970();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00C5D5D0  FUN_00c5d5d0  size=244  [between]
undefined4 __thiscall FUN_00c5d5d0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00c5c9e0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00C5D6D0  FUN_00c5d6d0  size=239  [between]
undefined4 __thiscall FUN_00c5d6d0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00c5ca50();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 << 5);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x7ffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00C5D7C0  FUN_00c5d7c0  size=250  [between]
undefined4 __thiscall FUN_00c5d7c0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00c5cac0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 0x2c);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(int *)(param_1 + 4) = iVar3;
        *(uint *)(param_1 + 0xc) = (uint)(param_2 * 0x2c) / 0x2c;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00C5D8C0  FUN_00c5d8c0  size=253  [between]
undefined4 __thiscall FUN_00c5d8c0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00c5cb30();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 0x30);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(int *)(param_1 + 4) = iVar3;
        *(uint *)(param_1 + 0xc) = (uint)(param_2 * 0x30) / 0x30;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00C5D9C0  FUN_00c5d9c0  size=244  [between]
undefined4 __thiscall FUN_00c5d9c0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00c5cba0();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00C5DAC0  FUN_00c5dac0  size=244  [between]
undefined4 __thiscall FUN_00c5dac0(int param_1,uint param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  LONG LVar4;
  int *local_8;
  int *local_4;
  
  FUN_00c5cc10();
  local_8 = (int *)0x0;
  local_4 = (int *)0x0;
  cVar2 = lib::helper::AllocatorProxy::CoreT<sys::AllocatorByHeap>::CoreT<sys::AllocatorByHeap>
                    (*param_3);
  if (cVar2 != '\0') {
    if (local_8 != (int *)0x0) {
      iVar3 = (**(code **)(*local_8 + 4))(param_2 * 4);
      if (iVar3 != 0) {
        FUN_00401f90(&local_8);
        piVar1 = local_4;
        if (*(int *)(param_1 + 4) != 0) {
          *(undefined4 *)(param_1 + 8) = 0;
        }
        *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
        *(int *)(param_1 + 4) = iVar3;
        if (local_4 != (int *)0x0) {
          LVar4 = InterlockedDecrement(local_4 + 1);
          if (LVar4 == 0) {
            (**(code **)(*piVar1 + 4))();
            LVar4 = InterlockedDecrement(piVar1 + 2);
            if (LVar4 == 0) {
              (**(code **)(*piVar1 + 8))();
            }
          }
        }
        return 1;
      }
    }
  }
  piVar1 = local_4;
  if (local_4 != (int *)0x0) {
    LVar4 = InterlockedDecrement(local_4 + 1);
    if (LVar4 == 0) {
      (**(code **)(*piVar1 + 4))();
      LVar4 = InterlockedDecrement(piVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)(*piVar1 + 8))();
      }
    }
  }
  return 0;
}

// 00C5DBC0  FUN_00c5dbc0  size=40  [between]
void FUN_00c5dbc0(undefined1 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00c55960(param_2,0,0xffffffff);
  }
  return;
}

// 00C5DBF0  lib::DynamicArray<int,sys::GlobalAllocator>::vf00  size=81  [class]
undefined4 * __thiscall
lib::DynamicArray<int,sys::GlobalAllocator>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = Array<int>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C5DC50  lib::DynamicArray<sLINEDATA,sys::GlobalAllocator>::vf00  size=81  [class]
undefined4 * __thiscall
lib::DynamicArray<sLINEDATA,sys::GlobalAllocator>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = Array<sLINEDATA>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C5DCB0  lib::DynamicArray<sInst,sys::GlobalAllocator>::vf00  size=81  [class]
undefined4 * __thiscall
lib::DynamicArray<sInst,sys::GlobalAllocator>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = Array<sInst>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C5DD10  lib::DynamicArray<sGloblVariable,sys::GlobalAllocator>::vf00  size=81  [class]
undefined4 * __thiscall
lib::DynamicArray<sGloblVariable,sys::GlobalAllocator>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = Array<sGloblVariable>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C61A70  lib::DynamicArray<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>,sys::GlobalAllocator>::vf04  size=4  [class]
undefined4
lib::
DynamicArray<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>,sys::GlobalAllocator>
::vf04(void)

{
  return 0xffffffff;
}

// 00C61AD0  lib::DynamicArray<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>,sys::GlobalAllocator>::vf18  size=45  [class]
void __thiscall
lib::
DynamicArray<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>,sys::GlobalAllocator>
::vf18(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}

// 00C61B00  FUN_00c61b00  size=42  [between]
int __thiscall FUN_00c61b00(int param_1,undefined4 param_2,uint param_3)

{
  FUN_00c5c740();
  *(undefined4 *)(param_1 + 4) = param_2;
  *(uint *)(param_1 + 0xc) = param_3 / 0x1c;
  return param_3 * 0x24924925;
}

// 00C61B30  lib::DynamicArray<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>,sys::GlobalAllocator>::vf08  size=82  [class]
uint __thiscall
lib::
DynamicArray<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>,sys::GlobalAllocator>
::vf08(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  uVar1 = param_1[3];
  if (uVar1 < (uint)param_1[2]) {
    return uVar1 & 0xffffff00;
  }
  if (uVar1 == 0) {
    (**(code **)(*param_1 + 0x14))(0x20);
    uVar1 = Array<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
            ::vf08(unaff_retaddr);
    return uVar1;
  }
  if (param_1[2] == uVar1) {
    (**(code **)(*param_1 + 0x14))(uVar1 * 2);
  }
  uVar1 = Array<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
          ::vf08(param_2);
  return uVar1;
}

// 00C63FE0  lib::DynamicArray<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>,sys::GlobalAllocator>::vf14  size=236  [class]
void __thiscall
lib::
DynamicArray<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>,sys::GlobalAllocator>
::vf14(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int local_8;
  
  if (*(uint *)(param_1 + 0xc) < param_2) {
    uVar3 = param_2;
    if (param_2 < 0x21) {
      uVar3 = 0x20;
    }
    puVar4 = (undefined1 *)FUN_00dd29b0(uVar3 * 0x1c,0x20,0,0);
    if (puVar4 != (undefined1 *)0x0) {
      iVar1 = *(int *)(param_1 + 8);
      iVar2 = *(int *)(param_1 + 4);
      if (iVar1 != 0) {
        puVar5 = puVar4;
        local_8 = iVar1;
        do {
          if (puVar5 != (undefined1 *)0x0) {
            *(undefined4 *)(puVar5 + 0x14) = 0xf;
            *(undefined4 *)(puVar5 + 0x10) = 0;
            *puVar5 = 0;
            FUN_00c55960(puVar5 + (iVar2 - (int)puVar4),0,0xffffffff);
          }
          puVar5 = puVar5 + 0x1c;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
      }
      FUN_00c5c740();
      if (*(int *)(param_1 + 4) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      FUN_00c5c740();
      *(undefined1 **)(param_1 + 4) = puVar4;
      *(uint *)(param_1 + 0xc) = (param_2 * 0x1c) / 0x1c;
      *(int *)(param_1 + 8) = iVar1;
    }
  }
  return;
}

// 00C640D0  lib::DynamicArray<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>,sys::GlobalAllocator>::vf0C  size=132  [class]
int __thiscall
lib::
DynamicArray<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>,sys::GlobalAllocator>
::vf0C(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  uVar3 = (param_2 - param_1[1]) / 0x1c;
  if (uVar1 < uVar3) {
    return param_1[1] + uVar1 * 0x1c;
  }
  uVar2 = param_1[3];
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
      (**(code **)(*param_1 + 0x14))(0x20);
    }
    else {
      (**(code **)(*param_1 + 0x14))(uVar2 * 2);
    }
    param_2 = param_1[1] + uVar3 * 0x1c;
  }
  iVar4 = Array<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
          ::vf0C(param_2,param_3);
  return iVar4;
}

// 00C64160  lib::DynamicArray<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>,sys::GlobalAllocator>::vf00  size=82  [class]
undefined4 * __thiscall
lib::
DynamicArray<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>,sys::GlobalAllocator>
::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00c5c740();
  if (param_1[1] != 0) {
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = Array<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>_>
             ::vftable;
  FUN_00c5c740();
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C64AB0  lib::DynamicArray<int,sys::GlobalAllocator>::DynamicArray<int,sys::GlobalAllocator>_4  size=317  [class]
undefined4 * __thiscall
lib::DynamicArray<int,sys::GlobalAllocator>::DynamicArray<int,sys::GlobalAllocator>_4
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[0x12] = DynamicArray<sInst,sys::GlobalAllocator>::vftable;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = DynamicArray<sGloblVariable,sys::GlobalAllocator>::vftable;
  param_1[0x89d] = 0;
  param_1[0x89e] = 0;
  param_1[0x89f] = 0;
  param_1[0x89c] = vftable;
  param_1[0x8a9] = 0;
  param_1[0x8aa] = 0;
  param_1[0x8ab] = 0;
  param_1[0x8a8] =
       DynamicArray<std::basic_string<char,std::char_traits<char>,sys::StringSystem::StdAllocator<char>_>,sys::GlobalAllocator>
       ::vftable;
  param_1[0x8ae] = 0;
  param_1[0x8af] = 0;
  param_1[0x8b0] = 0;
  param_1[0x8ad] = DynamicArray<sLINEDATA,sys::GlobalAllocator>::vftable;
  param_1[0x1c] = 0;
  param_1[0x892] = 4;
  param_1[0x893] = 0xffffffff;
  param_1[9] = 0;
  param_1[0x894] = 0;
  param_1[0x896] = 0xffffffff;
  param_1[0x8a2] = 0;
  param_1[0x8a5] = 0;
  param_1[0x8a3] = 0;
  param_1[0x8a1] = 0;
  param_1[0x8a4] = 0;
  param_1[0x8a7] = 0;
  param_1[0x8a6] = 0;
  param_1[0x898] = 0;
  if (param_1[0x89d] != 0) {
    param_1[0x89e] = 0;
  }
  param_1[0x899] = 0;
  param_1[0x89a] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  _memset(param_1 + 0x882,0,0x40);
  _memset(param_1 + 0x82,0,0x2000);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = param_4;
  param_1[4] = param_3;
  param_1[0x895] = 0;
  return param_1;
}

// 00C736F0  lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::vf04  size=4  [class]
undefined4 lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::vf04(void)

{
  return 0xffffffff;
}

// 00C73780  FUN_00c73780  size=57  [between]
void __thiscall FUN_00c73780(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  return;
}

// 00C737C0  lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::vf08  size=95  [class]
uint __thiscall
lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::vf08
          (int *param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  
  uVar1 = param_1[3];
  if (uVar1 < (uint)param_1[2]) goto LAB_00c73819;
  if (uVar1 == 0) {
    pcVar2 = *(code **)(*param_1 + 0x14);
    iVar3 = 0x20;
LAB_00c737e6:
    uVar1 = (*pcVar2)(iVar3);
  }
  else if (param_1[2] == uVar1) {
    pcVar2 = *(code **)(*param_1 + 0x14);
    iVar3 = uVar1 * 2;
    goto LAB_00c737e6;
  }
  if ((param_1[1] != 0) && (uVar1 = param_1[2], uVar1 < (uint)param_1[3])) {
    waypoint::WaypointLinkNodeArray::WaypointLinkNodeArray_2(param_1[1] + uVar1 * 0x18,param_2);
    param_1[2] = param_1[2] + 1;
    return 1;
  }
LAB_00c73819:
  return uVar1 & 0xffffff00;
}

// 00C73820  lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::vf0C  size=118  [class]
int __thiscall
lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::vf0C
          (int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  uVar3 = (param_2 - param_1[1]) / 0x18;
  if (uVar1 < uVar3) {
    return param_1[1] + uVar1 * 0x18;
  }
  uVar2 = param_1[3];
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
      (**(code **)(*param_1 + 0x14))(0x20);
    }
    else {
      (**(code **)(*param_1 + 0x14))(uVar2 * 2);
    }
    param_2 = param_1[1] + uVar3 * 0x18;
  }
  iVar4 = Array<waypoint::WaypointNode>::vf0C(param_2,param_3);
  return iVar4;
}

// 00C73F30  lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::vf14  size=250  [class]
/* WARNING: Removing unreachable block (ram,0x00c73fba) */

void __thiscall
lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::vf14(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if (*(uint *)(param_1 + 0xc) < param_2) {
    uVar2 = param_2;
    if (param_2 < 0x21) {
      uVar2 = 0x20;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (iVar3 = FUN_00dd29b0(uVar2 * 0x18,0x20,0,0), iVar3 != 0)
       ) {
      piVar5 = *(int **)(param_1 + 4);
      iVar1 = *(int *)(param_1 + 8);
      if (iVar1 != 0) {
        piVar4 = (int *)(iVar3 + 8);
        iVar6 = iVar1;
        do {
          if (piVar4 != (int *)&DAT_00000008) {
            piVar4[-2] = *piVar5;
            *piVar4 = 0;
            piVar4[1] = 0;
            piVar4[2] = 0;
            piVar4[-1] = (int)waypoint::WaypointLinkNodeArray::vftable;
            piVar4[1] = (uint)*(ushort *)(piVar4[-2] + 0x18);
            *piVar4 = piVar4[-2] + 0x20;
            piVar4[2] = 8;
          }
          piVar4 = piVar4 + 6;
          piVar5 = piVar5 + 6;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      Array<unsigned_short>::Array<unsigned_short>_2();
      if (*(int *)(param_1 + 4) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      Array<unsigned_short>::Array<unsigned_short>_2();
      *(int *)(param_1 + 4) = iVar3;
      *(int *)(param_1 + 8) = iVar1;
      *(uint *)(param_1 + 0xc) = (param_2 * 0x18) / 0x18;
    }
  }
  return;
}

// 00C74030  FUN_00c74030  size=112  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00c74030(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01d644bc & 1) == 0) {
    _DAT_01d644bc = _DAT_01d644bc | 1;
    DAT_01d644b8 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01d644b8;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01d644b8);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_00c71a40(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00C74180  lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::vf00  size=82  [class]
undefined4 * __thiscall
lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  Array<unsigned_short>::Array<unsigned_short>_2();
  if (param_1[1] != 0) {
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = Array<waypoint::WaypointNode>::vftable;
  Array<unsigned_short>::Array<unsigned_short>_2();
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C75930  lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>  size=163  [class]
int __fastcall
lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::
DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined ***)(param_1 + 0x2c) = vftable;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined2 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  iVar1 = 2;
  do {
    FUN_00904d60();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 2;
  do {
    FUN_00904d60();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00904d60();
  return param_1;
}

// 00E94370  lib::DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vf04  size=4  [class]
undefined4 lib::DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vf04(void)

{
  return 0xffffffff;
}

// 00E943C0  lib::DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vf08  size=90  [class]
uint __thiscall
lib::DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vf08(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  
  uVar2 = param_1[3];
  if (uVar2 < (uint)param_1[2]) goto LAB_00e94414;
  if (uVar2 == 0) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = 0x20;
LAB_00e943e6:
    (*pcVar3)(iVar4);
  }
  else if (param_1[2] == uVar2) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = uVar2 * 2;
    goto LAB_00e943e6;
  }
  uVar2 = param_1[1];
  if ((uVar2 != 0) && ((uint)param_1[2] < (uint)param_1[3])) {
    puVar1 = (undefined4 *)(uVar2 + param_1[2] * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
    }
    param_1[2] = param_1[2] + 1;
    return 1;
  }
LAB_00e94414:
  return uVar2 & 0xffffff00;
}

// 00E94420  lib::DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vf0C  size=84  [class]
int __thiscall
lib::DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vf0C
          (int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  uVar3 = param_2 - param_1[1] >> 2;
  if (uVar1 < uVar3) {
    return param_1[1] + uVar1 * 4;
  }
  uVar2 = param_1[3];
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = uVar2 * 2;
    }
    (**(code **)(*param_1 + 0x14))(iVar4);
    param_2 = param_1[1] + uVar3 * 4;
  }
  iVar4 = Array<cXml::ELEM>::vf0C(param_2,param_3);
  return iVar4;
}

// 00E944E0  lib::DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vf18  size=45  [class]
void __thiscall lib::DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vf18(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}

// 00E95D30  FUN_00e95d30  size=138  [callgraph]
undefined4 __thiscall FUN_00e95d30(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 < 0x21) {
    param_2 = 0x20;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
  *(int *)(param_1 + 4) = iVar1;
  FUN_00a5d3c0(param_3,param_4);
  return 1;
}

// 00E95DC0  FUN_00e95dc0  size=44  [callgraph]
void __fastcall FUN_00e95dc0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00E95DF0  FUN_00e95df0  size=149  [callgraph]
undefined4 __thiscall FUN_00e95df0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 < 0x21) {
    param_2 = 0x20;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xc,0x20,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(uint *)(param_1 + 0xc) = (param_2 * 0xc) / 0xc;
  *(int *)(param_1 + 4) = iVar1;
  FUN_00e93cd0(param_3,param_4);
  return 1;
}

// 00E95EB0  lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::vf04  size=4  [class]
undefined4
lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::vf04
          (void)

{
  return 0xffffffff;
}

// 00E95ED0  lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::vf08  size=87  [class]
uint __thiscall
lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::vf08
          (int *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  
  uVar2 = param_1[3];
  if (uVar2 < (uint)param_1[2]) goto LAB_00e95f21;
  if (uVar2 == 0) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = 0x20;
LAB_00e95ef6:
    (*pcVar3)(iVar4);
  }
  else if (param_1[2] == uVar2) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = uVar2 * 2;
    goto LAB_00e95ef6;
  }
  uVar2 = param_1[1];
  if ((uVar2 != 0) && ((uint)param_1[2] < (uint)param_1[3])) {
    puVar1 = (undefined1 *)(uVar2 + param_1[2]);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *param_2;
    }
    param_1[2] = param_1[2] + 1;
    return 1;
  }
LAB_00e95f21:
  return uVar2 & 0xffffff00;
}

// 00E95F30  lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::vf0C  size=80  [class]
int __thiscall
lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::vf0C
          (int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  uVar3 = param_2 - param_1[1];
  if (uVar1 < uVar3) {
    return uVar1 + param_1[1];
  }
  uVar2 = param_1[3];
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = uVar2 * 2;
    }
    (**(code **)(*param_1 + 0x14))(iVar4);
    param_2 = param_1[1] + uVar3;
  }
  iVar4 = Array<char>::vf0C(param_2,param_3);
  return iVar4;
}

// 00E95FA0  lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::vf18  size=58  [class]
void __thiscall
lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::vf18
          (int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_2 + 0x10) = (undefined1)param_2;
  return;
}

// 00E96020  lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vf04  size=4  [class]
undefined4 lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vf04(void)

{
  return 0xffffffff;
}

// 00E96040  lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vf08  size=105  [class]
uint __thiscall
lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vf08(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  
  uVar2 = param_1[3];
  if (uVar2 < (uint)param_1[2]) goto LAB_00e960a3;
  if (uVar2 == 0) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = 0x20;
LAB_00e96066:
    uVar2 = (*pcVar3)(iVar4);
  }
  else if (param_1[2] == uVar2) {
    pcVar3 = *(code **)(*param_1 + 0x14);
    iVar4 = uVar2 * 2;
    goto LAB_00e96066;
  }
  if ((param_1[1] != 0) && (uVar2 = param_1[2], uVar2 < (uint)param_1[3])) {
    puVar1 = (undefined4 *)(param_1[1] + uVar2 * 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      puVar1[2] = param_2[2];
    }
    param_1[2] = param_1[2] + 1;
    return 1;
  }
LAB_00e960a3:
  return uVar2 & 0xffffff00;
}

// 00E960B0  lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vf0C  size=117  [class]
int __thiscall
lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vf0C(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  uVar3 = (param_2 - param_1[1]) / 0xc;
  if (uVar1 < uVar3) {
    return param_1[1] + uVar1 * 0xc;
  }
  uVar2 = param_1[3];
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
      (**(code **)(*param_1 + 0x14))(0x20);
    }
    else {
      (**(code **)(*param_1 + 0x14))(uVar2 * 2);
    }
    param_2 = param_1[1] + uVar3 * 0xc;
  }
  iVar4 = Array<Hw::cVec3>::vf0C(param_2,param_3);
  return iVar4;
}

// 00E96130  lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vf18  size=45  [class]
void __thiscall lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vf18(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}

// 00E96790  lib::DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vf14  size=151  [class]
void __thiscall lib::DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vf14(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (*(uint *)(param_1 + 0xc) < param_2) {
    uVar3 = param_2;
    if (param_2 < 0x21) {
      uVar3 = 0x20;
    }
    puVar4 = (undefined4 *)FUN_00dd29b0(uVar3 * 4,0x20,0,0);
    if (puVar4 != (undefined4 *)0x0) {
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 != 0) {
        puVar5 = puVar4;
        iVar6 = iVar2;
        do {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *(undefined4 *)((iVar1 - (int)puVar4) + (int)puVar5);
          }
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      *(int *)(param_1 + 8) = iVar2;
      *(undefined4 **)(param_1 + 4) = puVar4;
      *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
    }
  }
  return;
}

// 00E96830  FUN_00e96830  size=579  [between]
undefined4 FUN_00e96830(int *param_1,int param_2,byte param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = param_2;
  puVar1 = *(undefined1 **)(param_2 + 8);
  if (puVar1 == *(undefined1 **)(param_2 + 4)) {
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  else {
    param_2 = CONCAT31(param_2._1_3_,*puVar1);
    *(undefined1 **)(iVar5 + 8) = puVar1 + 1;
  }
  if ((byte)param_2 == param_3) {
    cVar6 = FUN_00e92d60();
    while (cVar6 != '\0') {
      pbVar2 = *(byte **)(iVar5 + 8);
      if (pbVar2 == *(byte **)(iVar5 + 4)) {
        *(undefined1 *)(iVar5 + 0xc) = 1;
      }
      else {
        param_3 = *pbVar2;
        *(byte **)(iVar5 + 8) = pbVar2 + 1;
      }
      if (param_3 == (byte)param_2) break;
      if (((param_3 < 0x81) || (0x9f < param_3)) && (0xf < (byte)(param_3 + 0x20))) {
        if (param_3 == 0x5c) {
          pbVar2 = *(byte **)(iVar5 + 8);
          if (pbVar2 == *(byte **)(iVar5 + 4)) goto LAB_00e96978;
          *(byte **)(iVar5 + 8) = pbVar2 + 1;
          if ((char)param_1[1] == '\0') {
            piVar3 = (int *)*param_1;
            if ((piVar3 == (int *)0x0) ||
               (iVar4 = piVar3[2], iVar7 = (**(code **)(*piVar3 + 4))(), iVar7 == iVar4)) {
              *(undefined1 *)(param_1 + 1) = 1;
            }
            if ((char)param_1[1] == '\0') {
              (**(code **)(*(int *)*param_1 + 8))(pbVar2);
            }
          }
        }
        else if ((char)param_1[1] == '\0') {
          piVar3 = (int *)*param_1;
          if ((piVar3 == (int *)0x0) ||
             (iVar4 = piVar3[2], iVar7 = (**(code **)(*piVar3 + 4))(), iVar7 == iVar4)) {
            *(undefined1 *)(param_1 + 1) = 1;
          }
          if ((char)param_1[1] == '\0') {
            (**(code **)(*(int *)*param_1 + 8))(&param_3);
          }
        }
      }
      else {
        if ((char)param_1[1] == '\0') {
          piVar3 = (int *)*param_1;
          if ((piVar3 == (int *)0x0) ||
             (iVar4 = piVar3[2], iVar7 = (**(code **)(*piVar3 + 4))(), iVar7 == iVar4)) {
            *(undefined1 *)(param_1 + 1) = 1;
          }
          if ((char)param_1[1] == '\0') {
            (**(code **)(*(int *)*param_1 + 8))(&param_3);
          }
        }
        iVar4 = *(int *)(iVar5 + 8);
        if (iVar4 == *(int *)(iVar5 + 4)) {
LAB_00e96978:
          *(undefined1 *)(iVar5 + 0xc) = 1;
        }
        else {
          *(int *)(iVar5 + 8) = iVar4 + 1;
          if ((char)param_1[1] == '\0') {
            piVar3 = (int *)*param_1;
            if ((piVar3 == (int *)0x0) ||
               (iVar7 = piVar3[2], iVar8 = (**(code **)(*piVar3 + 4))(), iVar8 == iVar7)) {
              *(undefined1 *)(param_1 + 1) = 1;
            }
            if ((char)param_1[1] == '\0') {
              (**(code **)(*(int *)*param_1 + 8))(iVar4);
            }
          }
        }
      }
      cVar6 = FUN_00e92d60();
    }
  }
  else {
    if ((char)param_1[1] == '\0') {
      piVar3 = (int *)*param_1;
      if ((piVar3 == (int *)0x0) ||
         (iVar4 = piVar3[2], iVar7 = (**(code **)(*piVar3 + 4))(), iVar7 == iVar4)) {
        *(undefined1 *)(param_1 + 1) = 1;
      }
      if ((char)param_1[1] == '\0') {
        (**(code **)(*(int *)*param_1 + 8))(&param_2);
      }
    }
    cVar6 = FUN_00e92d60();
    while (cVar6 != '\0') {
      iVar4 = *(int *)(iVar5 + 8);
      if (iVar4 == *(int *)(iVar5 + 4)) {
        *(undefined1 *)(iVar5 + 0xc) = 1;
      }
      else {
        *(int *)(iVar5 + 8) = iVar4 + 1;
        if ((char)param_1[1] == '\0') {
          piVar3 = (int *)*param_1;
          if ((piVar3 == (int *)0x0) ||
             (iVar7 = piVar3[2], iVar8 = (**(code **)(*piVar3 + 4))(), iVar8 == iVar7)) {
            *(undefined1 *)(param_1 + 1) = 1;
          }
          else if ((char)param_1[1] == '\0') {
            (**(code **)(*(int *)*param_1 + 8))(iVar4);
          }
        }
      }
      cVar6 = FUN_00e92d60();
    }
  }
  if (((char)param_1[1] == '\0') && (*(char *)(iVar5 + 0xc) == '\0')) {
    return 1;
  }
  return 0;
}

// 00E96A80  lib::DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vf00  size=81  [class]
undefined4 * __thiscall
lib::DynamicArray<cXml::ELEM,sys::GlobalAllocator>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = Array<cXml::ELEM>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E96F20  lib::DynamicArray<int,sys::GlobalAllocator>::DynamicArray<int,sys::GlobalAllocator>_3  size=52  [class]
undefined4 * __thiscall
lib::DynamicArray<int,sys::GlobalAllocator>::DynamicArray<int,sys::GlobalAllocator>_3
          (undefined4 *param_1,int param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = vftable;
  FUN_00e95d30(*(undefined4 *)(param_2 + 0xc),*(int *)(param_2 + 4),
               *(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 4);
  return param_1;
}

// 00E96F60  lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_3  size=55  [class]
undefined4 * __thiscall
lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_3
          (undefined4 *param_1,int param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = vftable;
  FUN_00e95df0(*(undefined4 *)(param_2 + 0xc),*(int *)(param_2 + 4),
               *(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 0xc);
  return param_1;
}

// 00E96FE0  lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vf14  size=380  [class]
uint __thiscall lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vf14(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar3 = param_2;
  if (*(uint *)(param_1 + 0xc) < param_2) {
    if (param_2 < 0x21) {
      uVar3 = 0x20;
    }
    iVar4 = FUN_00dd29b0(uVar3 * 0xc,0x20,0,0);
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar1 = *(uint *)(param_1 + 8);
      iVar2 = *(int *)(param_1 + 4);
      uVar3 = 0;
      if (3 < (int)uVar1) {
        iVar7 = (uVar1 - 4 >> 2) + 1;
        puVar6 = (undefined4 *)(iVar2 + 0x1c);
        puVar5 = (undefined4 *)(iVar4 + 0x10);
        uVar3 = iVar7 * 4;
        do {
          if (puVar5 != (undefined4 *)0x10) {
            puVar5[-4] = puVar6[-7];
            puVar5[-3] = puVar6[-6];
            puVar5[-2] = puVar6[-5];
          }
          if (puVar5 != (undefined4 *)&DAT_00000004) {
            puVar5[-1] = puVar6[-4];
            *puVar5 = *(undefined4 *)((iVar2 - iVar4) + (int)puVar5);
            puVar5[1] = puVar6[-2];
          }
          if (puVar5 + 2 != (undefined4 *)0x0) {
            puVar5[2] = puVar6[-1];
            puVar5[3] = *puVar6;
            puVar5[4] = puVar6[1];
          }
          if (puVar5 + 5 != (undefined4 *)0x0) {
            puVar5[5] = puVar6[2];
            puVar5[6] = puVar6[3];
            puVar5[7] = puVar6[4];
          }
          puVar5 = puVar5 + 0xc;
          puVar6 = puVar6 + 0xc;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (uVar3 < uVar1) {
        puVar6 = (undefined4 *)(uVar3 * 0xc + iVar2);
        puVar5 = (undefined4 *)(uVar3 * 0xc + 4 + iVar4);
        iVar7 = uVar1 - uVar3;
        do {
          if (puVar5 != (undefined4 *)&DAT_00000004) {
            puVar5[-1] = *puVar6;
            *puVar5 = *(undefined4 *)((iVar2 - iVar4) + (int)puVar5);
            puVar5[1] = puVar6[2];
          }
          puVar5 = puVar5 + 3;
          puVar6 = puVar6 + 3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      uVar3 = param_2 * 4;
      *(uint *)(param_1 + 0xc) = (param_2 * 0xc) / 0xc;
      *(int *)(param_1 + 4) = iVar4;
      *(uint *)(param_1 + 8) = uVar1;
    }
  }
  return uVar3;
}

// 00E97560  lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vf00  size=81  [class]
undefined4 * __thiscall
lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = Array<Hw::cVec3>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E97770  lib::DynamicArray<int,sys::GlobalAllocator>::DynamicArray<int,sys::GlobalAllocator>_2  size=105  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
lib::DynamicArray<int,sys::GlobalAllocator>::DynamicArray<int,sys::GlobalAllocator>_2
          (undefined4 *param_1,int param_2)

{
  if ((_DAT_01dda78c & 1) == 0) {
    _DAT_01dda78c = _DAT_01dda78c | 1;
    DAT_01dda788 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda788;
  *param_1 = sany_detail::SerializableAnyImplT<lib::DynamicArray<int,sys::GlobalAllocator>_>::
             vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = vftable;
  FUN_00e95d30(*(undefined4 *)(param_2 + 0xc),*(int *)(param_2 + 4),
               *(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 4);
  return param_1;
}

// 00E97990  lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_2  size=108  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_2
          (undefined4 *param_1,int param_2)

{
  if ((_DAT_01dda794 & 1) == 0) {
    _DAT_01dda794 = _DAT_01dda794 | 1;
    DAT_01dda790 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda790;
  *param_1 = sany_detail::SerializableAnyImplT<lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>_>::
             vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = vftable;
  FUN_00e95df0(*(undefined4 *)(param_2 + 0xc),*(int *)(param_2 + 4),
               *(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 0xc);
  return param_1;
}

// 00E98700  lib::DynamicArray<int,sys::GlobalAllocator>::DynamicArray<int,sys::GlobalAllocator>  size=117  [class]
void lib::DynamicArray<int,sys::GlobalAllocator>::DynamicArray<int,sys::GlobalAllocator>
               (undefined4 param_1,int param_2)

{
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_18;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_18 = vftable;
  FUN_00e947d0(param_1,&local_18);
  if (param_2 != 0) {
    DynamicArray<int,sys::GlobalAllocator>_2(&local_18);
  }
  (*(code *)*local_18)(0);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffe4);
  return;
}

// 00E98780  lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::DynamicArray<Hw::cVec3,sys::GlobalAllocator>  size=117  [class]
void lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::DynamicArray<Hw::cVec3,sys::GlobalAllocator>
               (undefined4 param_1,int param_2)

{
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_18;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_18 = vftable;
  FUN_00e972d0(param_1,&local_18);
  if (param_2 != 0) {
    DynamicArray<Hw::cVec3,sys::GlobalAllocator>_2(&local_18);
  }
  (*(code *)*local_18)(0);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffe4);
  return;
}

// 00E988F0  lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::vf14  size=153  [class]
void __thiscall
lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::vf14
          (int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  
  if (*(uint *)(param_1 + 0xc) < param_2) {
    uVar3 = param_2;
    if (param_2 < 0x21) {
      uVar3 = 0x20;
    }
    if ((DAT_01dda6a0 != '\0') &&
       (puVar4 = (undefined1 *)FUN_00dd29b0(uVar3,4,0,0), puVar4 != (undefined1 *)0x0)) {
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 != 0) {
        puVar5 = puVar4;
        iVar6 = iVar2;
        do {
          if (puVar5 != (undefined1 *)0x0) {
            *puVar5 = puVar5[iVar1 - (int)puVar4];
          }
          puVar5 = puVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
        if (DAT_01dda6a0 != '\0') {
          FUN_00dd48d0(*(int *)(param_1 + 4),0);
        }
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      if (*(int *)(param_1 + 4) != 0) {
        *(undefined4 *)(param_1 + 8) = 0;
      }
      *(int *)(param_1 + 8) = iVar2;
      *(undefined1 **)(param_1 + 4) = puVar4;
      *(uint *)(param_1 + 0xc) = param_2;
    }
  }
  return;
}

// 00E989E0  lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::vf00  size=89  [class]
undefined4 * __thiscall
lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
    if (DAT_01dda6a0 != '\0') {
      FUN_00dd48d0(param_1[1],0);
    }
    param_1[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = Array<char>::vftable;
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E99870  FUN_00e99870  size=64  [callgraph]
void __fastcall FUN_00e99870(int *param_1)

{
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(0);
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    FUN_008d98a0(*param_1);
    *param_1 = 0;
  }
  return;
}

// 00E998B0  FUN_00e998b0  size=84  [callgraph]
int * __thiscall FUN_00e998b0(int *param_1,byte param_2)

{
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(0);
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    FUN_008d98a0(*param_1);
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E99930  FUN_00e99930  size=65  [callgraph]
int * __thiscall FUN_00e99930(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
  }
  iVar2 = *param_1;
  *param_1 = iVar1;
  if (iVar2 != 0) {
    FUN_008d98a0(iVar2);
  }
  return param_1;
}

// 00E99980  FUN_00e99980  size=48  [callgraph]
int * __thiscall FUN_00e99980(int *param_1,byte param_2)

{
  if (*param_1 != 0) {
    FUN_008d98a0(*param_1);
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E999B0  lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>  size=176  [class]
undefined4
lib::DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>::
DynamicArray<char,lib::detail::AllocatorFromStd<sys::StringSystem::StdAllocator<char>_>_>
          (int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined **ppuStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  cVar1 = (**(code **)*param_1)();
  if (cVar1 == '\0') {
    if (0xf < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    uVar3 = (**(code **)(*param_1 + 0x70))(param_2);
    return uVar3;
  }
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  ppuStack_14 = vftable;
  vf14(0x400);
  cVar1 = (**(code **)(*param_1 + 0x74))(&ppuStack_14);
  if (cVar1 != '\0') {
    ppuVar2 = ppuStack_14;
    do {
      cVar1 = *(char *)ppuVar2;
      ppuVar2 = (undefined **)((int)ppuVar2 + 1);
    } while (cVar1 != '\0');
    FUN_00e97ef0(ppuStack_14,(int)ppuVar2 - (int)((int)ppuStack_14 + 1));
    Array<char>::Array<char>_2();
    return 1;
  }
  Array<char>::Array<char>_2();
  return 0;
}

// 00E9AC70  lib::DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>::vf04  size=4  [class]
undefined4
lib::
DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
::vf04(void)

{
  return 0xffffffff;
}

// 00E9AC90  FUN_00e9ac90  size=45  [callgraph]
void __thiscall FUN_00e9ac90(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}

// 00E9ACC0  FUN_00e9acc0  size=95  [callgraph]
uint __thiscall FUN_00e9acc0(int *param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  
  uVar1 = param_1[3];
  if (uVar1 < (uint)param_1[2]) goto LAB_00e9ad19;
  if (uVar1 == 0) {
    pcVar2 = *(code **)(*param_1 + 0x14);
    iVar3 = 0x20;
LAB_00e9ace6:
    uVar1 = (*pcVar2)(iVar3);
  }
  else if (param_1[2] == uVar1) {
    pcVar2 = *(code **)(*param_1 + 0x14);
    iVar3 = uVar1 * 2;
    goto LAB_00e9ace6;
  }
  if ((param_1[1] != 0) && (uVar1 = param_1[2], uVar1 < (uint)param_1[3])) {
    if (param_1[1] + uVar1 * 0xc != 0) {
      FUN_00e997f0(param_2);
    }
    param_1[2] = param_1[2] + 1;
    return 1;
  }
LAB_00e9ad19:
  return uVar1 & 0xffffff00;
}

// 00E9AEB0  lib::DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>::vf00  size=82  [class]
undefined4 * __thiscall
lib::
DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00e9a0f0();
  if (param_1[1] != 0) {
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = Array<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>
             ::vftable;
  FUN_00e9a0f0();
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E9AF40  lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_3  size=52  [class]
undefined4 * __thiscall
lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::
DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_3
          (undefined4 *param_1,int param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = vftable;
  FUN_00e9aa20(*(undefined4 *)(param_2 + 0xc),*(int *)(param_2 + 4),
               *(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 4);
  return param_1;
}

// 00E9AF80  lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::vf04  size=4  [class]
undefined4
lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::vf04(void)

{
  return 0xffffffff;
}

// 00E9AFA0  lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::vf18  size=45  [class]
void __thiscall
lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::vf18
          (int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar1;
  return;
}

// 00E9AFD0  lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::vf08  size=82  [class]
uint __thiscall
lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::vf08
          (int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 unaff_retaddr;
  
  uVar1 = param_1[3];
  if (uVar1 < (uint)param_1[2]) {
    return uVar1 & 0xffffff00;
  }
  if (uVar1 == 0) {
    (**(code **)(*param_1 + 0x14))(0x20);
    uVar1 = Array<lib::HashedString<sys::StringSystem::Allocator>_>::vf08(unaff_retaddr);
    return uVar1;
  }
  if (param_1[2] == uVar1) {
    (**(code **)(*param_1 + 0x14))(uVar1 * 2);
  }
  uVar1 = Array<lib::HashedString<sys::StringSystem::Allocator>_>::vf08(param_2);
  return uVar1;
}

// 00E9B030  lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::vf0C  size=84  [class]
int __thiscall
lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::vf0C
          (int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[2];
  uVar3 = param_2 - param_1[1] >> 2;
  if (uVar1 < uVar3) {
    return param_1[1] + uVar1 * 4;
  }
  uVar2 = param_1[3];
  if (uVar1 == uVar2) {
    if (uVar2 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = uVar2 * 2;
    }
    (**(code **)(*param_1 + 0x14))(iVar4);
    param_2 = param_1[1] + uVar3 * 4;
  }
  iVar4 = Array<lib::HashedString<sys::StringSystem::Allocator>_>::vf0C(param_2,param_3);
  return iVar4;
}

// 00E9B0D0  lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::vf14  size=225  [class]
void __thiscall
lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::vf14
          (int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int local_c;
  
  if (*(uint *)(param_1 + 0xc) < param_2) {
    uVar4 = param_2;
    if (param_2 < 0x21) {
      uVar4 = 0x20;
    }
    piVar5 = (int *)FUN_00dd29b0(uVar4 * 4,0x20,0,0);
    if (piVar5 != (int *)0x0) {
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 != 0) {
        piVar6 = piVar5;
        local_c = iVar2;
        do {
          if (piVar6 != (int *)0x0) {
            iVar3 = *(int *)((int)piVar6 + (iVar1 - (int)piVar5));
            *piVar6 = iVar3;
            if (iVar3 != 0) {
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
              if (iVar3 != 0) {
                *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01880260);
            }
          }
          piVar6 = piVar6 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      FUN_00e9a230();
      if (*(int *)(param_1 + 4) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
      FUN_00e9a230();
      *(int *)(param_1 + 8) = iVar2;
      *(int **)(param_1 + 4) = piVar5;
      *(uint *)(param_1 + 0xc) = param_2 & 0x3fffffff;
    }
  }
  return;
}

// 00E9B1C0  lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::vf00  size=82  [class]
undefined4 * __thiscall
lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::vf00
          (undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00e9a230();
  if (param_1[1] != 0) {
    FUN_00dd48d0(param_1[1],0);
    param_1[1] = 0;
    param_1[3] = 0;
  }
  *param_1 = Array<lib::HashedString<sys::StringSystem::Allocator>_>::vftable;
  FUN_00e9a230();
  param_1[1] = 0;
  param_1[3] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E9B220  lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_2  size=105  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::
DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_2
          (undefined4 *param_1,int param_2)

{
  if ((_DAT_01dda79c & 1) == 0) {
    _DAT_01dda79c = _DAT_01dda79c | 1;
    DAT_01dda798 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda798;
  *param_1 = sany_detail::
             SerializableAnyImplT<lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_>
             ::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = vftable;
  FUN_00e9aa20(*(undefined4 *)(param_2 + 0xc),*(int *)(param_2 + 4),
               *(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 4);
  return param_1;
}

// 00E9B600  lib::DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>::DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>_5  size=63  [class]
int __fastcall
lib::
DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
::
DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>_5
          (int *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 == 0) {
    puVar1 = (undefined4 *)FUN_00dd29b0(0x14,0x20,0,0);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = vftable;
      *param_1 = (int)puVar1;
    }
  }
  return *param_1;
}

// 00E9B670  lib::DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>::DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>_4  size=88  [class]
undefined4 __thiscall
lib::
DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
::
DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>_4
          (int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*param_1 == 0) {
    puVar1 = (undefined4 *)FUN_00dd29b0(0x14,0x20,0,0);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = vftable;
      *param_1 = (int)puVar1;
    }
  }
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))(param_2);
    return 1;
  }
  return 0;
}

// 00E9B6D0  FUN_00e9b6d0  size=150  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00e9b6d0(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 unaff_retaddr;
  
  uVar3 = 1;
  if ((_DAT_01dda7a4 & 1) == 0) {
    _DAT_01dda7a4 = _DAT_01dda7a4 | 1;
    DAT_01dda7a0 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01dda7a0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01dda7a0);
  if (cVar2 != '\0') {
    (**(code **)*param_1)();
    cVar2 = FUN_008da080(param_1,&DAT_0164d4cc,param_1);
    if ((cVar2 == '\0') || (cVar2 = FUN_00e94fa0(param_1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    (**(code **)(*param_1 + 0x14))(unaff_retaddr,iVar1);
    return uVar3;
  }
  return 0;
}

// 00E9B770  FUN_00e9b770  size=154  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00e9b770(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  
  if ((_DAT_01dda7a4 & 1) == 0) {
    _DAT_01dda7a4 = _DAT_01dda7a4 | 1;
    DAT_01dda7a0 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01dda7a0;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01dda7a0);
  if (cVar2 == '\0') {
    return 0;
  }
  cVar2 = FUN_008da080(param_1,&DAT_0164d4cc,param_1);
  if ((cVar2 != '\0') && (cVar2 = FUN_00e94fa0(param_1), cVar2 != '\0')) {
    (**(code **)(*param_1 + 0x14))(param_2,iVar1);
    return 1;
  }
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return 0;
}

// 00E9B8D0  lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>  size=117  [class]
void lib::DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::
     DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>
               (undefined4 param_1,int param_2)

{
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_18;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_18 = vftable;
  FUN_00e9a600(param_1,&local_18);
  if (param_2 != 0) {
    DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>_2(&local_18);
  }
  (*(code *)*local_18)(0);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xffffffe4);
  return;
}

// 00E9B950  lib::DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>::DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>  size=150  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
lib::
DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
::
DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
          (undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((_DAT_01dda764 & 1) == 0) {
    _DAT_01dda764 = _DAT_01dda764 | 1;
    DAT_01dda760 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda760;
  *param_1 = sany_detail::
             SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>
             ::vftable;
  param_1[2] = 0;
  if (*param_2 != 0) {
    puVar2 = (undefined4 *)FUN_00dd29b0(0x14,0x20,0,0);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = vftable;
      param_1[2] = puVar2;
    }
    if ((param_1[2] != 0) && (iVar1 = *param_2, param_1[2] != iVar1)) {
      FUN_00e9a950(*(undefined4 *)(iVar1 + 0xc),*(int *)(iVar1 + 4),
                   *(int *)(iVar1 + 4) + *(int *)(iVar1 + 8) * 0xc);
    }
  }
  return param_1;
}

// 00E9BAA0  lib::DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>::DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>_2  size=387  [class]
/* WARNING: Removing unreachable block (ram,0x00e9bb11) */
/* WARNING: Removing unreachable block (ram,0x00e9bb1b) */
/* WARNING: Removing unreachable block (ram,0x00e9bb33) */
/* WARNING: Removing unreachable block (ram,0x00e9bb5c) */
/* WARNING: Removing unreachable block (ram,0x00e9bb60) */
/* WARNING: Removing unreachable block (ram,0x00e9bb87) */
/* WARNING: Removing unreachable block (ram,0x00e9bb8b) */
/* WARNING: Removing unreachable block (ram,0x00e9bb9f) */
/* WARNING: Removing unreachable block (ram,0x00e9bbb0) */
/* WARNING: Removing unreachable block (ram,0x00e9bc0f) */
/* WARNING: Removing unreachable block (ram,0x00e9bbb6) */
/* WARNING: Removing unreachable block (ram,0x00e9bbca) */
/* WARNING: Removing unreachable block (ram,0x00e9bbe3) */
/* WARNING: Removing unreachable block (ram,0x00e9bbeb) */
/* WARNING: Removing unreachable block (ram,0x00e9bbfa) */
/* WARNING: Removing unreachable block (ram,0x00e9bc04) */

uint __thiscall
lib::
DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
::
DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>_2
          (int *param_1,int *param_2)

{
  uint uVar1;
  
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)();
    FUN_00dd48d0();
    *param_1 = 0;
  }
  uVar1 = (**(code **)(*param_2 + 0x10))();
  if ((char)uVar1 != '\0') {
    (**(code **)(*param_2 + 0x28))();
    uVar1 = (**(code **)(*param_2 + 0x14))("count",8);
  }
  return uVar1 & 0xffffff00;
}

// 00E9BC30  FUN_00e9bc30  size=149  [between]
undefined4 __thiscall FUN_00e9bc30(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = (**(code **)(*param_2 + 0x10))("count",8);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_2 + 0x54))(&stack0xfffffff4);
    (**(code **)(*param_2 + 0x14))("count",8);
    if (cVar2 != '\0') {
      iVar1 = *param_1;
      if (iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 4);
        iVar1 = iVar3 + *(int *)(iVar1 + 8) * 0xc;
        for (; iVar3 != iVar1; iVar3 = iVar3 + 0xc) {
          cVar2 = FUN_00e9b770(param_2,"value",iVar3);
          if (cVar2 == '\0') {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

// 00E9BCD0  FUN_00e9bcd0  size=98  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00e9bcd0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if ((_DAT_01dda79c & 1) == 0) {
    _DAT_01dda79c = _DAT_01dda79c | 1;
    DAT_01dda798 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda798;
  param_1[2] = param_2;
  uVar1 = FUN_00ea11e0(param_2);
  param_1[3] = uVar1;
  param_1[4] = 0x1c;
  param_1[5] = lib::
               DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>::
               DynamicArray<lib::HashedString<sys::StringSystem::Allocator>,sys::GlobalAllocator>;
  FUN_00ea3ce0(param_1);
  return param_1;
}

// 00E9BD40  lib::DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>::DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>_3  size=114  [class]
undefined4 * __thiscall
lib::
DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>
::
DynamicArray<lib::MetaValue<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>,sys::MetaParamSystem::Allocator>_3
          (undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = *(undefined4 *)(param_2 + 4);
  *param_1 = sany_detail::
             SerializableAnyImplT<lib::MetaParam<lib::HashedString<sys::StringSystem::Allocator>,lib::SerializableAny<sys::MetaParamSystem::Allocator>_>_>
             ::vftable;
  param_1[2] = 0;
  if (*(int *)(param_2 + 8) != 0) {
    puVar2 = (undefined4 *)FUN_00dd29b0(0x14,0x20,0,0);
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = vftable;
      param_1[2] = puVar2;
    }
    if ((param_1[2] != 0) && (iVar1 = *(int *)(param_2 + 8), param_1[2] != iVar1)) {
      FUN_00e9a950(*(undefined4 *)(iVar1 + 0xc),*(int *)(iVar1 + 4),
                   *(int *)(iVar1 + 4) + *(int *)(iVar1 + 8) * 0xc);
    }
  }
  return param_1;
}


// src/lib/InputBinaryArchive.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C6AD70..00C760E0, 19 functions

#include "mgrr.h"

// 00C6AD70  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf04  size=3  [class]
undefined1 lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf04(void)

{
  return 1;
}

// 00C6AE20  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf78  size=31  [class]
undefined4 * __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf78(undefined4 *param_1,byte param_2)

{
  *param_1 = Archive::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C6E8C0  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf74  size=127  [class]
undefined4 __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf74(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = param_2;
  bVar3 = false;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0xc)) {
    while (((puVar1 = *(undefined1 **)(param_1 + 0x10), puVar1 != *(undefined1 **)(param_1 + 0xc) &&
            (*(char *)(param_1 + 0x14) == '\0')) && (!bVar3))) {
      if (puVar1 == *(undefined1 **)(param_1 + 0xc)) {
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
      else {
        param_2 = (int *)CONCAT31(param_2._1_3_,*puVar1);
        *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
      }
      if (piVar4 == (int *)0x0) {
LAB_00c6e914:
        bVar3 = true;
      }
      else {
        iVar2 = piVar4[2];
        iVar5 = (**(code **)(*piVar4 + 4))();
        if (iVar5 == iVar2) goto LAB_00c6e914;
        (**(code **)(*piVar4 + 8))(&param_2);
      }
      if ((char)param_2 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}

// 00C71290  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf40  size=56  [class]
undefined4 __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf40(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined3 uVar2;
  
  if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x10)) {
    return 0;
  }
  *param_2 = **(undefined1 **)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = (undefined3)((uint)iVar1 >> 8);
  if (1 < (uint)(iVar1 - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    return CONCAT31(uVar2,1);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return CONCAT31(uVar2,1);
}

// 00C712D0  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf3C  size=56  [class]
undefined4 __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf3C(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined3 uVar2;
  
  if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x10)) {
    return 0;
  }
  *param_2 = **(undefined1 **)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = (undefined3)((uint)iVar1 >> 8);
  if (1 < (uint)(iVar1 - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    return CONCAT31(uVar2,1);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return CONCAT31(uVar2,1);
}

// 00C71310  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf38  size=56  [class]
undefined4 __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf38(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined3 uVar2;
  
  if (*(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x10)) {
    return 0;
  }
  *param_2 = **(undefined1 **)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = (undefined3)((uint)iVar1 >> 8);
  if (1 < (uint)(iVar1 - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    return CONCAT31(uVar2,1);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return CONCAT31(uVar2,1);
}

// 00C71350  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf34  size=59  [class]
uint __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf34(int param_1,undefined2 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined3 uVar3;
  
  uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
  if (uVar2 < 2) {
    return uVar2 & 0xffffff00;
  }
  *param_2 = **(undefined2 **)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = (undefined3)((uint)iVar1 >> 8);
  if (2 < (uint)(iVar1 - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 2;
    return CONCAT31(uVar3,1);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return CONCAT31(uVar3,1);
}

// 00C71390  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf30  size=59  [class]
uint __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf30(int param_1,undefined2 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined3 uVar3;
  
  uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
  if (uVar2 < 2) {
    return uVar2 & 0xffffff00;
  }
  *param_2 = **(undefined2 **)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = (undefined3)((uint)iVar1 >> 8);
  if (2 < (uint)(iVar1 - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 2;
    return CONCAT31(uVar3,1);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return CONCAT31(uVar3,1);
}

// 00C713D0  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf2C  size=57  [class]
uint __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf2C(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined3 uVar3;
  
  uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
  if (uVar2 < 4) {
    return uVar2 & 0xffffff00;
  }
  *param_2 = **(undefined4 **)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = (undefined3)((uint)iVar1 >> 8);
  if (4 < (uint)(iVar1 - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
    return CONCAT31(uVar3,1);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return CONCAT31(uVar3,1);
}

// 00C71410  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf28  size=57  [class]
uint __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf28(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined3 uVar3;
  
  uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
  if (uVar2 < 4) {
    return uVar2 & 0xffffff00;
  }
  *param_2 = **(undefined4 **)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = (undefined3)((uint)iVar1 >> 8);
  if (4 < (uint)(iVar1 - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
    return CONCAT31(uVar3,1);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return CONCAT31(uVar3,1);
}

// 00C71450  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf24  size=65  [class]
uint __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf24(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined3 uVar4;
  
  uVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
  if (uVar3 < 8) {
    return uVar3 & 0xffffff00;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  iVar2 = *(int *)(param_1 + 0xc);
  uVar4 = (undefined3)((uint)iVar2 >> 8);
  if (8 < (uint)(iVar2 - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 8;
    return CONCAT31(uVar4,1);
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return CONCAT31(uVar4,1);
}

// 00C714A0  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf20  size=65  [class]
uint __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf20(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined3 uVar4;
  
  uVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
  if (uVar3 < 8) {
    return uVar3 & 0xffffff00;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  iVar2 = *(int *)(param_1 + 0xc);
  uVar4 = (undefined3)((uint)iVar2 >> 8);
  if (8 < (uint)(iVar2 - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 8;
    return CONCAT31(uVar4,1);
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return CONCAT31(uVar4,1);
}

// 00C714F0  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf1C  size=57  [class]
uint __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf1C(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined3 uVar3;
  
  uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
  if (uVar2 < 4) {
    return uVar2 & 0xffffff00;
  }
  *param_2 = **(undefined4 **)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = (undefined3)((uint)iVar1 >> 8);
  if (4 < (uint)(iVar1 - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
    return CONCAT31(uVar3,1);
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return CONCAT31(uVar3,1);
}

// 00C71530  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf18  size=65  [class]
uint __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::vf18(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined3 uVar4;
  
  uVar3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
  if (uVar3 < 8) {
    return uVar3 & 0xffffff00;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  iVar2 = *(int *)(param_1 + 0xc);
  uVar4 = (undefined3)((uint)iVar2 >> 8);
  if (8 < (uint)(iVar2 - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 8;
    return CONCAT31(uVar4,1);
  }
  *(int *)(param_1 + 0x10) = iVar2;
  return CONCAT31(uVar4,1);
}

// 00C759E0  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::InputBinaryArchive<unsigned_char_const*,unsigned_char>  size=100  [class]
uint __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::
InputBinaryArchive<unsigned_char_const*,unsigned_char>
          (int param_1,uint param_2,int param_3,int param_4)

{
  uint in_EAX;
  uint uVar1;
  undefined **local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  uint local_8;
  undefined1 local_4;
  
  if (((*(int *)(param_1 + 0x28) != 0) && (in_EAX = param_2, param_2 != 0)) && (param_4 != 0)) {
    local_c = param_2 + param_3;
    local_10 = param_2;
    local_8 = param_2;
    local_14 = 0;
    local_18 = vftable;
    local_4 = 0;
    uVar1 = FUN_00c74a60(&local_18);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

// 00C75A50  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::InputBinaryArchive<unsigned_char_const*,unsigned_char>_2  size=74  [class]
void __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::
InputBinaryArchive<unsigned_char_const*,unsigned_char>_2
          (undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined **local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined1 local_4;
  
  *param_1 = param_4;
  local_c = param_3 + param_2;
  local_10 = param_2;
  local_8 = param_2;
  param_1[1] = param_5;
  local_14 = 0;
  local_18 = vftable;
  local_4 = 0;
  FUN_00c74a60(&local_18);
  return;
}

// 00C75AA0  FUN_00c75aa0  size=1229  [between]
int __fastcall FUN_00c75aa0(int param_1)

{
  int iVar1;
  
  lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::
  DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>();
  iVar1 = 3;
  do {
    lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::
    DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)(param_1 + 2000) = 0;
  *(undefined4 *)(param_1 + 0x7d4) = 0;
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  *(undefined4 *)(param_1 + 0x7e4) = 0;
  *(undefined4 *)(param_1 + 0x7e8) = 0;
  *(undefined4 *)(param_1 + 0x7ec) = 0;
  *(undefined4 *)(param_1 + 0x7f0) = 0;
  *(undefined4 *)(param_1 + 0x7fc) = 0;
  *(undefined4 *)(param_1 + 0x800) = 0;
  *(undefined4 *)(param_1 + 0x804) = 0;
  *(undefined4 *)(param_1 + 0x808) = 0;
  *(undefined4 *)(param_1 + 0x80c) = 0;
  *(undefined4 *)(param_1 + 0x818) = 0;
  *(undefined4 *)(param_1 + 0x81c) = 0;
  *(undefined4 *)(param_1 + 0x820) = 0;
  *(undefined4 *)(param_1 + 0x8a0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8a8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x880) = 0;
  *(undefined4 *)(param_1 + 0x884) = 0;
  *(undefined4 *)(param_1 + 0x888) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x890) = 0;
  *(undefined4 *)(param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x898) = 0;
  *(undefined4 *)(param_1 + 0x89c) = 0;
  *(undefined4 *)(param_1 + 0x8a4) = 0;
  *(undefined2 *)(param_1 + 0x8ac) = 0xffff;
  *(undefined4 *)(param_1 + 0x900) = 0;
  *(undefined4 *)(param_1 + 0x904) = 0;
  *(undefined4 *)(param_1 + 0x908) = 0;
  *(undefined4 *)(param_1 + 0x928) = 0;
  *(undefined4 *)(param_1 + 0x95a0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x930) = 0;
  *(undefined4 *)(param_1 + 0x95a8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x9580) = 0;
  *(undefined4 *)(param_1 + 0x9584) = 0;
  *(undefined4 *)(param_1 + 0x9588) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x958c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9590) = 0;
  *(undefined4 *)(param_1 + 0x9594) = 0;
  *(undefined4 *)(param_1 + 0x9598) = 0;
  *(undefined4 *)(param_1 + 0x959c) = 0;
  *(undefined4 *)(param_1 + 0x95a4) = 0;
  *(undefined2 *)(param_1 + 0x95ac) = 0xffff;
  *(undefined4 *)(param_1 + 0x9600) = 0;
  *(undefined4 *)(param_1 + 0x9604) = 0;
  *(undefined4 *)(param_1 + 0x9608) = 0;
  *(undefined4 *)(param_1 + 0x9628) = 0;
  *(undefined4 *)(param_1 + 0x122a0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x9630) = 0;
  *(undefined4 *)(param_1 + 0x122a8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x12280) = 0;
  *(undefined4 *)(param_1 + 0x12284) = 0;
  *(undefined4 *)(param_1 + 0x12288) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1228c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12290) = 0;
  *(undefined4 *)(param_1 + 0x12294) = 0;
  *(undefined4 *)(param_1 + 0x12298) = 0;
  *(undefined4 *)(param_1 + 0x1229c) = 0;
  *(undefined4 *)(param_1 + 0x122a4) = 0;
  *(undefined2 *)(param_1 + 0x122ac) = 0xffff;
  *(undefined4 *)(param_1 + 0x12300) = 0;
  *(undefined4 *)(param_1 + 0x12304) = 0;
  *(undefined4 *)(param_1 + 0x12308) = 0;
  *(undefined4 *)(param_1 + 0x12328) = 0;
  *(undefined1 *)(param_1 + 0x12330) = 0;
  *(undefined4 *)(param_1 + 0x1af80) = 0;
  *(undefined4 *)(param_1 + 0x1af84) = 0;
  *(undefined4 *)(param_1 + 0x1af88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1af8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1af90) = 0;
  *(undefined4 *)(param_1 + 0x1af94) = 0;
  *(undefined4 *)(param_1 + 0x1af98) = 0;
  *(undefined4 *)(param_1 + 0x1afa0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1af9c) = 0;
  *(undefined4 *)(param_1 + 0x1afa4) = 0;
  *(undefined4 *)(param_1 + 0x1afa8) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x1afac) = 0xffff;
  *(undefined4 *)(param_1 + 0x1b000) = 0;
  *(undefined4 *)(param_1 + 0x1b004) = 0;
  *(undefined4 *)(param_1 + 0x1b008) = 0;
  *(undefined4 *)(param_1 + 0x1b028) = 0;
  *(undefined4 *)(param_1 + 0x23ca0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1b030) = 0;
  *(undefined4 *)(param_1 + 0x23ca8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x23c80) = 0;
  *(undefined4 *)(param_1 + 0x23c84) = 0;
  *(undefined4 *)(param_1 + 0x23c88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x23c8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x23c90) = 0;
  *(undefined4 *)(param_1 + 0x23c94) = 0;
  *(undefined4 *)(param_1 + 0x23c98) = 0;
  *(undefined4 *)(param_1 + 0x23c9c) = 0;
  *(undefined4 *)(param_1 + 0x23ca4) = 0;
  *(undefined2 *)(param_1 + 0x23cac) = 0xffff;
  *(undefined4 *)(param_1 + 0x23d00) = 0;
  *(undefined4 *)(param_1 + 0x23d04) = 0;
  *(undefined4 *)(param_1 + 0x23d08) = 0;
  *(undefined4 *)(param_1 + 0x23d28) = 0;
  *(undefined4 *)(param_1 + 0x2c9a0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x23d30) = 0;
  *(undefined4 *)(param_1 + 0x2c9a8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x2c980) = 0;
  *(undefined4 *)(param_1 + 0x2c984) = 0;
  *(undefined4 *)(param_1 + 0x2c988) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c98c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c990) = 0;
  *(undefined4 *)(param_1 + 0x2c994) = 0;
  *(undefined4 *)(param_1 + 0x2c998) = 0;
  *(undefined4 *)(param_1 + 0x2c99c) = 0;
  *(undefined4 *)(param_1 + 0x2c9a4) = 0;
  *(undefined2 *)(param_1 + 0x2c9ac) = 0xffff;
  *(undefined4 *)(param_1 + 0x2ca00) = 0;
  *(undefined4 *)(param_1 + 0x2ca04) = 0;
  *(undefined4 *)(param_1 + 0x2ca08) = 0;
  *(undefined4 *)(param_1 + 0x2ca28) = 0;
  *(undefined4 *)(param_1 + 0x356a0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2ca30) = 0;
  *(undefined4 *)(param_1 + 0x356a8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x35680) = 0;
  *(undefined4 *)(param_1 + 0x35684) = 0;
  *(undefined4 *)(param_1 + 0x35688) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3568c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x35690) = 0;
  *(undefined4 *)(param_1 + 0x35694) = 0;
  *(undefined4 *)(param_1 + 0x35698) = 0;
  *(undefined4 *)(param_1 + 0x3569c) = 0;
  *(undefined4 *)(param_1 + 0x356a4) = 0;
  *(undefined2 *)(param_1 + 0x356ac) = 0xffff;
  *(undefined4 *)(param_1 + 0x35700) = 0;
  *(undefined4 *)(param_1 + 0x35704) = 0;
  *(undefined4 *)(param_1 + 0x35708) = 0;
  *(undefined4 *)(param_1 + 0x35728) = 0;
  *(undefined4 *)(param_1 + 0x3e3a0) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x35730) = 0;
  *(undefined4 *)(param_1 + 0x3e380) = 0;
  *(undefined4 *)(param_1 + 0x3e384) = 0;
  *(undefined4 *)(param_1 + 0x3e388) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e38c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e390) = 0;
  *(undefined4 *)(param_1 + 0x3e394) = 0;
  *(undefined4 *)(param_1 + 0x3e398) = 0;
  *(undefined4 *)(param_1 + 0x3e39c) = 0;
  *(undefined4 *)(param_1 + 0x3e3a4) = 0;
  *(undefined2 *)(param_1 + 0x3e3ac) = 0xffff;
  *(undefined4 *)(param_1 + 0x3e3a8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x3e400) = 0;
  *(undefined4 *)(param_1 + 0x3e404) = 0;
  *(undefined4 *)(param_1 + 0x3e408) = 0;
  *(undefined4 *)(param_1 + 0x3e428) = 0;
  *(undefined4 *)(param_1 + 0x470a0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x47088) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x470a8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x4708c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3e430) = 0;
  *(undefined4 *)(param_1 + 0x47080) = 0;
  *(undefined4 *)(param_1 + 0x47084) = 0;
  *(undefined4 *)(param_1 + 0x47090) = 0;
  *(undefined4 *)(param_1 + 0x47094) = 0;
  *(undefined4 *)(param_1 + 0x47098) = 0;
  *(undefined4 *)(param_1 + 0x4709c) = 0;
  *(undefined4 *)(param_1 + 0x470a4) = 0;
  *(undefined2 *)(param_1 + 0x470ac) = 0xffff;
  *(undefined4 *)(param_1 + 0x47100) = 0;
  *(undefined4 *)(param_1 + 0x47104) = 0;
  *(undefined4 *)(param_1 + 0x47108) = 0;
  *(undefined4 *)(param_1 + 0x47128) = 0;
  *(undefined4 *)(param_1 + 0x4fda0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4fd88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4fd8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4fda8) = 0xbf800000;
  *(undefined2 *)(param_1 + 0x4fdac) = 0xffff;
  *(undefined1 *)(param_1 + 0x47130) = 0;
  *(undefined4 *)(param_1 + 0x4fd80) = 0;
  *(undefined4 *)(param_1 + 0x4fd84) = 0;
  *(undefined4 *)(param_1 + 0x4fd90) = 0;
  *(undefined4 *)(param_1 + 0x4fd94) = 0;
  *(undefined4 *)(param_1 + 0x4fd98) = 0;
  *(undefined4 *)(param_1 + 0x4fd9c) = 0;
  *(undefined4 *)(param_1 + 0x4fda4) = 0;
  *(undefined4 *)(param_1 + 0x4fe00) = 0;
  *(undefined4 *)(param_1 + 0x4fe04) = 0;
  *(undefined4 *)(param_1 + 0x4fe08) = 0;
  *(undefined4 *)(param_1 + 0x4fe28) = 0;
  *(undefined1 *)(param_1 + 0x4fe30) = 0;
  *(undefined4 *)(param_1 + 0x58a98) = 0;
  lib::DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>::
  DynamicArray<waypoint::WaypointNode,sys::AllocatorByHeap>();
  return param_1;
}

// 00C75F70  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::InputBinaryArchive<unsigned_char_const*,unsigned_char>_3  size=364  [class]
void __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::
InputBinaryArchive<unsigned_char_const*,unsigned_char>_3(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_34;
  undefined **local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 local_1c;
  undefined **local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined1 local_4;
  
  local_34 = 0;
  iVar1 = FUN_00a54ae0(&local_34,param_2,"_path.bin");
  if ((iVar1 != 0) && (0 < local_34)) {
    local_24 = local_34 + iVar1;
    local_2c = 0;
    local_30 = vftable;
    local_1c = 0;
    local_28 = iVar1;
    local_20 = iVar1;
    Array<waypoint::WaypointNode>::Array<waypoint::WaypointNode>_5(&DAT_01b7bd48);
    waypoint::WaypointLinkNodeArray::WaypointLinkNodeArray(&local_30);
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  iVar1 = FUN_00de4550("_path_navi.bin",0);
  iVar2 = FUN_00de46d0("_path_navi.bin",0);
  if ((iVar1 != 0) && (0 < iVar2)) {
    local_24 = iVar2 + iVar1;
    local_2c = 0;
    local_30 = vftable;
    local_1c = 0;
    local_28 = iVar1;
    local_20 = iVar1;
    Array<waypoint::WaypointNode>::Array<waypoint::WaypointNode>_5(&DAT_01b7bd48);
    waypoint::WaypointLinkNodeArray::WaypointLinkNodeArray(&local_30);
    *(undefined4 *)(param_1 + 0x58ac8) = 0xffffffff;
  }
  uVar3 = 0;
  do {
    _sprintf_s((char *)&local_30,0x10,"_path%02x.bin",uVar3);
    local_34 = 0;
    iVar1 = FUN_00a54ae0(&local_34,param_2,&local_30);
    if ((iVar1 != 0) && (0 < local_34)) {
      local_c = iVar1 + local_34;
      local_14 = 0;
      local_18 = vftable;
      local_4 = 0;
      local_10 = iVar1;
      local_8 = iVar1;
      Array<waypoint::WaypointNode>::Array<waypoint::WaypointNode>_5(&DAT_01b7bd48);
      waypoint::WaypointLinkNodeArray::WaypointLinkNodeArray(&local_18);
      *(uint *)(param_1 + 0x1b0) = uVar3;
    }
    uVar3 = uVar3 + 1;
    param_1 = param_1 + 400;
  } while (uVar3 < 4);
  return;
}

// 00C760E0  lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::InputBinaryArchive<unsigned_char_const*,unsigned_char>_3  size=5  [class]
void __thiscall
lib::InputBinaryArchive<unsigned_char_const*,unsigned_char>::
InputBinaryArchive<unsigned_char_const*,unsigned_char>_3(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iStack_34;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined1 uStack_1c;
  undefined **ppuStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  undefined1 uStack_4;
  
  iStack_34 = 0;
  iVar1 = FUN_00a54ae0(&iStack_34,param_2,"_path.bin");
  if ((iVar1 != 0) && (0 < iStack_34)) {
    iStack_24 = iStack_34 + iVar1;
    uStack_2c = 0;
    ppuStack_30 = vftable;
    uStack_1c = 0;
    iStack_28 = iVar1;
    iStack_20 = iVar1;
    Array<waypoint::WaypointNode>::Array<waypoint::WaypointNode>_5(&DAT_01b7bd48);
    waypoint::WaypointLinkNodeArray::WaypointLinkNodeArray(&ppuStack_30);
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  iVar1 = FUN_00de4550("_path_navi.bin",0);
  iVar2 = FUN_00de46d0("_path_navi.bin",0);
  if ((iVar1 != 0) && (0 < iVar2)) {
    iStack_24 = iVar2 + iVar1;
    uStack_2c = 0;
    ppuStack_30 = vftable;
    uStack_1c = 0;
    iStack_28 = iVar1;
    iStack_20 = iVar1;
    Array<waypoint::WaypointNode>::Array<waypoint::WaypointNode>_5(&DAT_01b7bd48);
    waypoint::WaypointLinkNodeArray::WaypointLinkNodeArray(&ppuStack_30);
    *(undefined4 *)(param_1 + 0x58ac8) = 0xffffffff;
  }
  uVar3 = 0;
  do {
    _sprintf_s((char *)&ppuStack_30,0x10,"_path%02x.bin",uVar3);
    iStack_34 = 0;
    iVar1 = FUN_00a54ae0(&iStack_34,param_2,&ppuStack_30);
    if ((iVar1 != 0) && (0 < iStack_34)) {
      iStack_c = iVar1 + iStack_34;
      uStack_14 = 0;
      ppuStack_18 = vftable;
      uStack_4 = 0;
      iStack_10 = iVar1;
      iStack_8 = iVar1;
      Array<waypoint::WaypointNode>::Array<waypoint::WaypointNode>_5(&DAT_01b7bd48);
      waypoint::WaypointLinkNodeArray::WaypointLinkNodeArray(&ppuStack_18);
      *(uint *)(param_1 + 0x1b0) = uVar3;
    }
    uVar3 = uVar3 + 1;
    param_1 = param_1 + 400;
  } while (uVar3 < 4);
  return;
}


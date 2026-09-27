// src/unsorted/unit_00E98A60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E98A60..00E99040, 14 functions

#include "types.h"

// 00E98A60  FUN_00e98a60  size=322  [run]
undefined4 __thiscall FUN_00e98a60(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *local_8;
  char local_4;
  
  piVar2 = param_2;
  for (pcVar4 = *(char **)(param_1 + 0x10);
      (pcVar4 != *(char **)(param_1 + 0xc) && (*pcVar4 == ' ')); pcVar4 = pcVar4 + 1) {
  }
  uVar5 = (int)pcVar4 - *(int *)(param_1 + 0x10);
  if (uVar5 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar5;
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
  }
  local_8 = param_2;
  local_4 = '\0';
  piVar8 = param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0xc)) {
    if (**(char **)(param_1 + 0x10) == '\"') {
      cVar3 = FUN_00e96830(&local_8,param_1 + 8,0x22);
      piVar8 = local_8;
      if (cVar3 == '\0') {
        return 0;
      }
    }
    else {
      while (((iVar1 = *(int *)(param_1 + 0x10), iVar1 != *(int *)(param_1 + 0xc) &&
              (*(char *)(param_1 + 0x14) == '\0')) && (**(char **)(param_1 + 0x10) != ' '))) {
        if (iVar1 == *(int *)(param_1 + 0xc)) {
          *(undefined1 *)(param_1 + 0x14) = 1;
        }
        else {
          *(int *)(param_1 + 0x10) = iVar1 + 1;
          if (local_4 == '\0') {
            if ((piVar2 == (int *)0x0) ||
               (iVar7 = piVar2[2], iVar6 = (**(code **)(*piVar2 + 4))(), piVar8 = local_8,
               iVar6 == iVar7)) {
              local_4 = '\x01';
            }
            else {
              (**(code **)(*piVar2 + 8))(iVar1);
              piVar8 = local_8;
            }
          }
        }
      }
    }
  }
  param_2 = (int *)((uint)param_2 & 0xffffff00);
  if (((local_4 == '\0') && (piVar8 != (int *)0x0)) &&
     ((iVar1 = piVar8[2], iVar7 = (**(code **)(*piVar8 + 4))(), iVar7 != iVar1 &&
      ((**(code **)(*piVar8 + 8))(&param_2), *(char *)(param_1 + 0x14) == '\0')))) {
    return 1;
  }
  return 0;
}

// 00E98BB0  FUN_00e98bb0  size=139  [run]
uint __thiscall FUN_00e98bb0(int param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined3 uVar3;
  
  for (pcVar1 = *(char **)(param_1 + 0x10);
      (pcVar1 != *(char **)(param_1 + 0xc) && (*pcVar1 == ' ')); pcVar1 = pcVar1 + 1) {
  }
  uVar2 = (int)pcVar1 - *(int *)(param_1 + 0x10);
  if (uVar2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar2;
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
  }
  pcVar1 = (char *)FUN_00ea36d0(param_2,*(undefined4 *)(param_1 + 0x10),
                                *(undefined4 *)(param_1 + 0xc));
  if (pcVar1 != (char *)0x0) {
    if (pcVar1 != *(char **)(param_1 + 0xc)) {
      if (*pcVar1 != ' ') goto LAB_00e98c34;
      pcVar1 = pcVar1 + 1;
    }
    uVar2 = (int)pcVar1 - *(int *)(param_1 + 0x10);
    uVar3 = (undefined3)(uVar2 >> 8);
    if (uVar2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10))) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar2;
      return CONCAT31(uVar3,*(char *)(param_1 + 0x14) == '\0');
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
    return CONCAT31(uVar3,*(char *)(param_1 + 0x14) == '\0');
  }
LAB_00e98c34:
  return (uint)pcVar1 & 0xffffff00;
}

// 00E98C40  FUN_00e98c40  size=139  [run]
uint __thiscall FUN_00e98c40(int param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined3 uVar3;
  
  for (pcVar1 = *(char **)(param_1 + 0x10);
      (pcVar1 != *(char **)(param_1 + 0xc) && (*pcVar1 == ' ')); pcVar1 = pcVar1 + 1) {
  }
  uVar2 = (int)pcVar1 - *(int *)(param_1 + 0x10);
  if (uVar2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar2;
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
  }
  pcVar1 = (char *)FUN_00ea36d0(param_2,*(undefined4 *)(param_1 + 0x10),
                                *(undefined4 *)(param_1 + 0xc));
  if (pcVar1 != (char *)0x0) {
    if (pcVar1 != *(char **)(param_1 + 0xc)) {
      if (*pcVar1 != ' ') goto LAB_00e98cc4;
      pcVar1 = pcVar1 + 1;
    }
    uVar2 = (int)pcVar1 - *(int *)(param_1 + 0x10);
    uVar3 = (undefined3)(uVar2 >> 8);
    if (uVar2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10))) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar2;
      return CONCAT31(uVar3,*(char *)(param_1 + 0x14) == '\0');
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
    return CONCAT31(uVar3,*(char *)(param_1 + 0x14) == '\0');
  }
LAB_00e98cc4:
  return (uint)pcVar1 & 0xffffff00;
}

// 00E98CD0  FUN_00e98cd0  size=139  [run]
uint __thiscall FUN_00e98cd0(int param_1,undefined4 param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined3 uVar3;
  
  for (pcVar1 = *(char **)(param_1 + 0x10);
      (pcVar1 != *(char **)(param_1 + 0xc) && (*pcVar1 == ' ')); pcVar1 = pcVar1 + 1) {
  }
  uVar2 = (int)pcVar1 - *(int *)(param_1 + 0x10);
  if (uVar2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10))) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar2;
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
  }
  pcVar1 = (char *)FUN_00ea3a20(param_2,*(undefined4 *)(param_1 + 0x10),
                                *(undefined4 *)(param_1 + 0xc));
  if (pcVar1 != (char *)0x0) {
    if (pcVar1 != *(char **)(param_1 + 0xc)) {
      if (*pcVar1 != ' ') goto LAB_00e98d54;
      pcVar1 = pcVar1 + 1;
    }
    uVar2 = (int)pcVar1 - *(int *)(param_1 + 0x10);
    uVar3 = (undefined3)(uVar2 >> 8);
    if (uVar2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10))) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + uVar2;
      return CONCAT31(uVar3,*(char *)(param_1 + 0x14) == '\0');
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
    return CONCAT31(uVar3,*(char *)(param_1 + 0x14) == '\0');
  }
LAB_00e98d54:
  return (uint)pcVar1 & 0xffffff00;
}

// 00E98D90  FUN_00e98d90  size=98  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00e98d90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if ((_DAT_01dda76c & 1) == 0) {
    _DAT_01dda76c = _DAT_01dda76c | 1;
    DAT_01dda768 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda768;
  param_1[2] = param_2;
  uVar1 = FUN_00ea11e0(param_2);
  param_1[3] = uVar1;
  param_1[4] = 0x20;
  param_1[5] = FUN_00e98650;
  FUN_00ea3ce0(param_1);
  return param_1;
}

// 00E98E00  FUN_00e98e00  size=98  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00e98e00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if ((_DAT_01d644dc & 1) == 0) {
    _DAT_01d644dc = _DAT_01d644dc | 1;
    DAT_01d644d8 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01d644d8;
  param_1[2] = param_2;
  uVar1 = FUN_00ea11e0(param_2);
  param_1[3] = uVar1;
  param_1[4] = 0xc;
  param_1[5] = lib::sany_detail::SerializableAnyImplT<eObjId>::SerializableAnyImplT<eObjId>;
  FUN_00ea3ce0(param_1);
  return param_1;
}

// 00E98E70  FUN_00e98e70  size=98  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00e98e70(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if ((_DAT_01dda78c & 1) == 0) {
    _DAT_01dda78c = _DAT_01dda78c | 1;
    DAT_01dda788 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda788;
  param_1[2] = param_2;
  uVar1 = FUN_00ea11e0(param_2);
  param_1[3] = uVar1;
  param_1[4] = 0x1c;
  param_1[5] = lib::DynamicArray<int,sys::GlobalAllocator>::DynamicArray<int,sys::GlobalAllocator>;
  FUN_00ea3ce0(param_1);
  return param_1;
}

// 00E98EE0  FUN_00e98ee0  size=98  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00e98ee0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if ((_DAT_01dda794 & 1) == 0) {
    _DAT_01dda794 = _DAT_01dda794 | 1;
    DAT_01dda790 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  param_1[1] = DAT_01dda790;
  param_1[2] = param_2;
  uVar1 = FUN_00ea11e0(param_2);
  param_1[3] = uVar1;
  param_1[4] = 0x1c;
  param_1[5] = lib::DynamicArray<Hw::cVec3,sys::GlobalAllocator>::
               DynamicArray<Hw::cVec3,sys::GlobalAllocator>;
  FUN_00ea3ce0(param_1);
  return param_1;
}

// 00E98F50  FUN_00e98f50  size=41  [run]
undefined4 FUN_00e98f50(undefined1 *param_1)

{
  char cVar1;
  undefined1 local_8 [8];
  
  cVar1 = FUN_00e98bb0(local_8);
  if (cVar1 != '\0') {
    *param_1 = local_8[0];
    return 1;
  }
  return 0;
}

// 00E98F80  FUN_00e98f80  size=41  [run]
undefined4 FUN_00e98f80(undefined1 *param_1)

{
  char cVar1;
  undefined1 local_8 [8];
  
  cVar1 = FUN_00e98bb0(local_8);
  if (cVar1 != '\0') {
    *param_1 = local_8[0];
    return 1;
  }
  return 0;
}

// 00E98FB0  FUN_00e98fb0  size=43  [run]
undefined4 FUN_00e98fb0(undefined2 *param_1)

{
  char cVar1;
  undefined2 local_8 [4];
  
  cVar1 = FUN_00e98bb0(local_8);
  if (cVar1 != '\0') {
    *param_1 = local_8[0];
    return 1;
  }
  return 0;
}

// 00E98FE0  FUN_00e98fe0  size=43  [run]
undefined4 FUN_00e98fe0(undefined2 *param_1)

{
  char cVar1;
  undefined2 local_8 [4];
  
  cVar1 = FUN_00e98bb0(local_8);
  if (cVar1 != '\0') {
    *param_1 = local_8[0];
    return 1;
  }
  return 0;
}

// 00E99010  FUN_00e99010  size=41  [run]
undefined4 FUN_00e99010(undefined4 *param_1)

{
  char cVar1;
  undefined4 local_8 [2];
  
  cVar1 = FUN_00e98bb0(local_8);
  if (cVar1 != '\0') {
    *param_1 = local_8[0];
    return 1;
  }
  return 0;
}

// 00E99040  FUN_00e99040  size=41  [run]
undefined4 FUN_00e99040(undefined4 *param_1)

{
  char cVar1;
  undefined4 local_8 [2];
  
  cVar1 = FUN_00e98bb0(local_8);
  if (cVar1 != '\0') {
    *param_1 = local_8[0];
    return 1;
  }
  return 0;
}


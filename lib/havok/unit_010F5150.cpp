// lib/havok/unit_010F5150.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010F5150..010F55F0, 13 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkDataWorldDict.h"
#include "hkObjectCopier.h"

// 010F5150  FUN_010f5150  size=515  [run]
void __thiscall FUN_010f5150(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  LPVOID pvVar6;
  uint uVar7;
  int *piVar8;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_5;
  
  piVar8 = param_2;
  local_c = param_1;
  local_10 = (**(code **)(*param_2 + 8))();
  if (local_10 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_01025be0(local_10,0);
  }
  FUN_010f4eb0(piVar8);
  iVar5 = (**(code **)(*piVar4 + 0x10))();
  if (iVar5 != 0) {
    FUN_010f1390(iVar5,&param_2);
  }
  FUN_010f1d30();
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  local_14 = 0x40;
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  local_18 = *(int *)((int)pvVar6 + 0xc);
  if ((*(int *)((int)pvVar6 + 8) < 0x100) || (*(uint *)((int)pvVar6 + 0x10) < local_18 + 0x100U)) {
    local_18 = FUN_0100b780(0x100);
  }
  else {
    *(uint *)((int)pvVar6 + 0xc) = local_18 + 0x100U;
  }
  local_1c = 0x80000040;
  local_24 = local_18;
  iVar5 = FUN_010ef510(piVar8);
  local_5 = iVar5 != -1;
  if ((bool)local_5) {
    for (; iVar5 != -1; iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 4 + iVar5 * 8)) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x14) + iVar5 * 8);
      if (local_20 == (local_1c & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,&local_24,4);
      }
      *(undefined4 *)(local_24 + local_20 * 4) = uVar1;
      local_20 = local_20 + 1;
      piVar8 = param_2;
    }
  }
  iVar5 = 0;
  if (0 < (int)local_20) {
    do {
      FUN_010f5150(*(undefined4 *)(local_24 + iVar5 * 4));
      puVar2 = *(undefined4 **)(local_24 + iVar5 * 4);
      piVar4 = puVar2 + 2;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)*puVar2)(1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)local_20);
  }
  if (local_5 != '\0') {
    FUN_010ef530(piVar8);
  }
  iVar3 = local_14;
  iVar5 = local_18;
  if (local_18 == local_24) {
    local_20 = 0;
  }
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  uVar7 = iVar3 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar6 + 8) < (int)uVar7) || (uVar7 + iVar5 != *(int *)((int)pvVar6 + 0xc)))
     || (*(int *)((int)pvVar6 + 0x14) == iVar5)) {
    FUN_0100b9b0(iVar5,uVar7);
  }
  else {
    *(int *)((int)pvVar6 + 0xc) = iVar5;
  }
  local_20 = 0;
  if (-1 < (int)local_1c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c * 4);
  }
  iVar5 = local_10;
  FUN_01025be0(local_10,0);
  FUN_01025950(iVar5);
  FUN_010060a0();
  FUN_01025950(iVar5);
  return;
}

// 010F5360  FUN_010f5360  size=101  [run]
void __thiscall FUN_010f5360(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_3;
  if (param_2 != 0) {
    iVar2 = FUN_010ef510(param_2);
    if (iVar2 != -1) {
      do {
        if (*(int **)(*(int *)(param_1 + 0x14) + iVar2 * 8) == piVar1) {
          FUN_010f1300(param_2,iVar2);
          break;
        }
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4 + iVar2 * 8);
      } while (iVar2 != -1);
    }
  }
  iVar2 = (**(code **)(*piVar1 + 0x10))();
  if (iVar2 != 0) {
    FUN_010f4780(iVar2,&param_3);
  }
  return;
}

// 010F53D0  FUN_010f53d0  size=95  [run]
void __thiscall FUN_010f53d0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  for (iVar2 = FUN_010ef5a0(iVar1); (iVar1 != 0 && (iVar2 != -1));
      iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 4 + iVar2 * 8)) {
    if (param_2 == *(int **)(*(int *)(param_1 + 0x34) + iVar2 * 8)) {
      FUN_010f13e0(iVar1,iVar2);
      FUN_010f4810(param_3,&param_2);
      iVar1 = 0;
    }
  }
  return;
}

// 010F5430  FUN_010f5430  size=53  [run]
int __thiscall FUN_010f5430(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_010ec080();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x7c);
  }
  return param_1;
}

// 010F5490  FUN_010f5490  size=38  [run]
void FUN_010f5490(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010F54C0  hkDataWorldDict::vf00  size=52  [run]
int __thiscall hkDataWorldDict::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_200();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010F5510  FUN_010f5510  size=20  [run]
void __thiscall FUN_010f5510(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 010F5530  FUN_010f5530  size=32  [run]
void __thiscall
FUN_010f5530(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}

// 010F5550  FUN_010f5550  size=20  [run]
void __thiscall FUN_010f5550(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 010F5570  FUN_010f5570  size=27  [run]
undefined4 FUN_010f5570(int param_1,int param_2,int param_3)

{
  if ((param_2 <= param_1) && (param_1 < param_3)) {
    return 1;
  }
  return 0;
}

// 010F5590  FUN_010f5590  size=24  [run]
undefined4 FUN_010f5590(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01016320();
  if (iVar1 != 0) {
    uVar2 = FUN_01016320();
    return uVar2;
  }
  return 1;
}

// 010F55B0  hkObjectCopier::hkObjectCopier  size=58  [run]
void __thiscall
hkObjectCopier::hkObjectCopier
          (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = *param_2;
  param_1[3] = *param_3;
  param_1[4] = param_4;
  *(bool *)(param_1 + 5) = *(char *)((int)param_1 + 9) != *(char *)((int)param_1 + 0xd);
  return;
}

// 010F55F0  hkBaseObject::hkBaseObject_138  size=7  [run]
void __fastcall hkBaseObject::hkBaseObject_138(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}


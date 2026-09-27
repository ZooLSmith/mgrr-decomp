// lib/havok/unit_010F6F80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010F6F80..010F8D60, 58 functions

#include "mgrr.h"
#include "hkObjectCopier.h"
#include "hkXmlObjectWriter.h"

// 010F6F80  _anon_B1A2C86F::PackfileObjectCopier::vf0C  size=152  [run]
bool __thiscall
_anon_B1A2C86F::PackfileObjectCopier::vf0C
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 local_14 [16];
  
  uVar2 = param_4;
  hkOArchive::hkOArchive(param_4,*(undefined1 *)(param_1 + 0x14));
  uVar3 = param_5;
  param_4 = FUN_010f5c60(param_2,param_3,local_14,param_5);
  FUN_010f5850(uVar2);
  FUN_010f6590(param_2,param_3,local_14,uVar3,param_4,param_6,0);
  FUN_010f5850(uVar2);
  pcVar4 = (char *)FUN_01016fc0((int)&param_3 + 3);
  cVar1 = *pcVar4;
  ::hkBaseObject::hkBaseObject();
  return cVar1 == '\0';
}

// 010F7020  FUN_010f7020  size=12  [run]
uint __thiscall FUN_010f7020(uint *param_1,uint param_2)

{
  return *param_1 & param_2;
}

// 010F7060  FUN_010f7060  size=15  [run]
int __thiscall FUN_010f7060(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 010F7080  FUN_010f7080  size=17  [run]
int FUN_010f7080(int param_1,int param_2)

{
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  return param_1;
}

// 010F70C0  FUN_010f70c0  size=12  [run]
void __thiscall FUN_010f70c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010F7100  FUN_010f7100  size=36  [run]
void FUN_010f7100(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010F7130  FUN_010f7130  size=42  [run]
void FUN_010f7130(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010F7160  FUN_010f7160  size=36  [run]
void FUN_010f7160(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010F71A0  FUN_010f71a0  size=25  [run]
void __thiscall FUN_010f71a0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 010F71C0  FUN_010f71c0  size=11  [run]
int FUN_010f71c0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010F71E0  FUN_010f71e0  size=19  [run]
void __thiscall FUN_010f71e0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = *(int *)(param_1 + 8) != 0;
  return;
}

// 010F7220  FUN_010f7220  size=63  [run]
void __thiscall FUN_010f7220(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 010F7260  FUN_010f7260  size=71  [run]
void __thiscall FUN_010f7260(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x10 + *param_1);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 010F72B0  FUN_010f72b0  size=63  [run]
void __thiscall FUN_010f72b0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 010F72F0  FUN_010f72f0  size=15  [run]
int __thiscall FUN_010f72f0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 010F7320  FUN_010f7320  size=62  [run]
void FUN_010f7320(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 8 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 010F7360  FUN_010f7360  size=73  [run]
void FUN_010f7360(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 8 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 010F73B0  FUN_010f73b0  size=46  [run]
void FUN_010f73b0(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010F73F0  hkObjectCopier::vf00  size=52  [run]
int __thiscall hkObjectCopier::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::~hkBaseObject();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010F7430  FUN_010f7430  size=64  [run]
void __thiscall FUN_010f7430(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 010F7470  FUN_010f7470  size=72  [run]
void __thiscall FUN_010f7470(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x10);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x10 + *param_1);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 010F74C0  FUN_010f74c0  size=64  [run]
void __thiscall FUN_010f74c0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 010F7500  FUN_010f7500  size=90  [run]
int * __thiscall FUN_010f7500(int *param_1,int param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = *(int *)((int)pvVar2 + 0xc);
  uVar4 = param_2 * 8 + 0x7fU & 0xffffff80;
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

// 010F75B0  FUN_010f75b0  size=73  [run]
void __thiscall FUN_010f75b0(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x10 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010F7600  FUN_010f7600  size=60  [run]
void __thiscall FUN_010f7600(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010F7640  FUN_010f7640  size=66  [run]
void __thiscall FUN_010f7640(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010F7690  FUN_010f7690  size=100  [run]
void __thiscall
FUN_010f7690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined8 *puVar1;
  
  if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0xc),0x10);
  }
  puVar1 = (undefined8 *)(*(int *)(param_1 + 0x10) * 0x10 + *(int *)(param_1 + 0xc));
  *puVar1 = CONCAT44(param_3,param_2);
  puVar1[1] = CONCAT44(param_5,param_4);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

// 010F7700  FUN_010f7700  size=67  [run]
void __thiscall FUN_010f7700(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 0x1c) == (*(uint *)(param_1 + 0x20) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x18),8);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c) * 8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}

// 010F7750  FUN_010f7750  size=74  [run]
void __thiscall FUN_010f7750(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,0x10);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x10 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010F77A0  FUN_010f77a0  size=60  [run]
void __fastcall FUN_010f77a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010F77E0  FUN_010f77e0  size=60  [run]
void __fastcall FUN_010f77e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010F7820  FUN_010f7820  size=20  [run]
void __thiscall FUN_010f7820(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 010F7840  FUN_010f7840  size=36  [run]
void FUN_010f7840(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010F7870  FUN_010f7870  size=77  [run]
void __thiscall FUN_010f7870(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      iVar1 = iVar2 * 8;
      iVar3 = iVar2 * 8;
      iVar2 = iVar2 + 1;
      *(int *)(param_2 + *(int *)(*param_1 + iVar3)) = *(int *)(*param_1 + 4 + iVar1) + param_2;
    } while (iVar2 < param_1[1]);
  }
  iVar2 = 0;
  if (0 < param_1[4]) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_2 + *(int *)(param_1[3] + iVar3)) =
           *(undefined4 *)(param_1[3] + 4 + iVar3);
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < param_1[4]);
  }
  return;
}

// 010F78C0  FUN_010f78c0  size=217  [run]
void __thiscall FUN_010f78c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint local_8;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar3 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(0x10);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      local_8 = local_8 & 0xffffff00;
      FUN_01025830(local_8);
    }
    *(int *)(param_1 + 0x30) = iVar3;
  }
  uVar5 = param_3;
  uVar4 = FUN_01025530(param_3);
  FUN_01025890((int)&param_3 + 3,uVar4);
  if (param_3._3_1_ == '\0') {
    uVar5 = FUN_01015d80(uVar5,&PTR_vftable_018e9b94);
    FUN_01025470(uVar5,0);
  }
  else {
    uVar5 = FUN_010253e0(uVar4);
    FUN_01025420(uVar4,0);
  }
  if (*(uint *)(param_1 + 0x28) == (*(uint *)(param_1 + 0x2c) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x24),8);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x28) * 8);
  *puVar1 = param_2;
  puVar1[1] = uVar5;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

// 010F79A0  FUN_010f79a0  size=249  [run]
void __fastcall FUN_010f79a0(undefined4 *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[0xc];
  if (iVar1 != 0) {
    FUN_0105d070();
    FUN_01025870();
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,0x10);
  }
  param_1[10] = 0;
  if ((param_1[0xb] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[9],param_1[0xb] * 8);
  }
  param_1[9] = 0;
  param_1[0xb] = 0x80000000;
  param_1[7] = 0;
  if ((param_1[8] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[6],param_1[8] * 8);
  }
  param_1[6] = 0;
  param_1[8] = 0x80000000;
  param_1[4] = 0;
  if ((param_1[5] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] << 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010F7AA0  FUN_010f7aa0  size=63  [run]
void __thiscall FUN_010f7aa0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 010F7AE0  FUN_010f7ae0  size=64  [run]
void __thiscall FUN_010f7ae0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  param_1[1] = param_1[1] + 1;
  return;
}

// 010F7B20  FUN_010f7b20  size=31  [run]
void FUN_010f7b20(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 010F7B40  FUN_010f7b40  size=39  [run]
void FUN_010f7b40(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return;
}

// 010F7B70  FUN_010f7b70  size=60  [run]
int __thiscall FUN_010f7b70(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_0105d070();
  FUN_01025870();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x10);
  }
  return param_1;
}

// 010F7BB0  FUN_010f7bb0  size=14  [run]
void __fastcall FUN_010f7bb0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x010f7bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x24) + 4))();
  return;
}

// 010F7BC0  FUN_010f7bc0  size=15  [run]
void __thiscall FUN_010f7bc0(int param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x28);
  return;
}

// 010F7BF0  FUN_010f7bf0  size=15  [run]
int FUN_010f7bf0(void)

{
  int iVar1;
  
  iVar1 = FUN_01016320();
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}

// 010F7C00  FUN_010f7c00  size=440  [run]
undefined4 FUN_010f7c00(int *param_1,int param_2,uint param_3)

{
  undefined1 uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
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
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_c;
  undefined1 local_8;
  undefined1 local_7;
  undefined2 local_6;
  
  iVar3 = param_2;
  local_5c = 0x44434241;
  local_58 = 0x48474645;
  local_54 = 0x4c4b4a49;
  local_50 = 0x504f4e4d;
  local_4c = 0x54535251;
  local_48 = 0x58575655;
  local_44 = 0x62615a59;
  local_40 = 0x66656463;
  local_3c = 0x6a696867;
  local_38 = 0x6e6d6c6b;
  local_34 = 0x7271706f;
  local_30 = 0x76757473;
  local_2c = 0x7a797877;
  local_28 = 0x33323130;
  local_24 = 0x37363534;
  local_20 = 0x2f2b3938;
  hkOArchive::hkOArchive(param_1,0);
  local_c = 0x13;
  uVar5 = param_3;
  if (0 < (int)param_3) {
    while( true ) {
      param_3 = param_3 & 0xff000000;
      uVar4 = 3;
      if ((int)uVar5 < 3) {
        uVar4 = uVar5;
      }
      FUN_01015e80(&param_3,iVar3,uVar4);
      local_8 = *(undefined1 *)((int)&local_5c + (param_3 >> 2 & 0x3f));
      local_7 = *(undefined1 *)((int)&local_5c + ((uint)(param_3._1_1_ >> 4) | (param_3 & 3) << 4));
      uVar1 = *(undefined1 *)
               ((int)&local_5c + ((uint)(param_3._2_1_ >> 6) | (param_3._1_1_ & 0xf) * 4));
      iVar3 = iVar3 + uVar4;
      uVar5 = uVar5 - uVar4;
      local_6 = CONCAT11(*(undefined1 *)((int)&local_5c + (param_3._2_1_ & 0x3f)),uVar1);
      if ((int)uVar4 < 3) break;
      FUN_01016f90(&local_8,4);
      local_c = local_c + -1;
      if (local_c == 0) {
        FUN_01016f90(&DAT_016cc51c,1);
        local_c = 0x13;
      }
      pcVar2 = (char *)(**(code **)(*param_1 + 0xc))((int)&param_2 + 3);
      if (*pcVar2 == '\0') {
        hkBaseObject::hkBaseObject();
        return 1;
      }
      if ((int)uVar5 < 1) {
        hkBaseObject::hkBaseObject();
        return 0;
      }
    }
    if (uVar4 == 1) {
      local_6 = 0x3d3d;
    }
    else {
      if (uVar4 != 2) goto LAB_010f7da7;
      local_6 = CONCAT11(0x3d,uVar1);
    }
    FUN_01016f90(&local_8,4);
  }
LAB_010f7da7:
  hkBaseObject::hkBaseObject();
  return 0;
}

// 010F7DC0  FUN_010f7dc0  size=273  [run]
undefined4 FUN_010f7dc0(undefined4 param_1)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *local_1c [5];
  undefined4 local_8;
  
  if (in_EAX == (char *)0x0) {
    FUN_01018d00("&#9216;");
    return 0;
  }
  cVar1 = *in_EAX;
  pcVar5 = in_EAX;
  do {
    if (cVar1 == '\0') {
      FUN_01018fc0(pcVar5,(int)in_EAX - (int)pcVar5);
      return 0;
    }
    cVar1 = *in_EAX;
    if ((cVar1 < '\x15') || ('~' < cVar1)) {
      FUN_01018fc0(pcVar5,(int)in_EAX - (int)pcVar5);
      FUN_01018f60(param_1,"&#%u;",*in_EAX);
      pcVar5 = in_EAX + 1;
    }
    else {
      switch(cVar1) {
      case '\"':
      case '&':
      case '\'':
      case '<':
      case '>':
        FUN_01018fc0(pcVar5,(int)in_EAX - (int)pcVar5);
        pcVar2 = "<&lt;";
        pcVar5 = in_EAX + 1;
        local_1c[0] = "<&lt;";
        local_1c[1] = ">&gt;";
        local_1c[2] = "&&amp;";
        local_1c[3] = "\"&quot;";
        local_1c[4] = "\'&apos;";
        local_8 = 0;
        iVar4 = 0;
        do {
          if (*pcVar2 == *in_EAX) {
            pcVar2 = local_1c[iVar4];
            uVar3 = FUN_01015cd0(pcVar2 + 1);
            FUN_01018fc0(pcVar2 + 1,uVar3);
            break;
          }
          pcVar2 = local_1c[iVar4 + 1];
          iVar4 = iVar4 + 1;
        } while (pcVar2 != (char *)0x0);
      }
    }
    in_EAX = in_EAX + 1;
    cVar1 = *in_EAX;
  } while( true );
}

// 010F7F00  FUN_010f7f00  size=300  [run]
undefined4 FUN_010f7f00(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_20 [5];
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < param_2) {
    do {
      iVar4 = local_8;
      pcVar5 = *(char **)(param_1 + local_8 * 4);
      if (pcVar5 == (char *)0x0) {
        FUN_01018d00("&#9216;");
      }
      else {
        cVar1 = *pcVar5;
        pcVar6 = pcVar5;
        while (local_8 = iVar4, cVar1 != '\0') {
          cVar1 = *pcVar5;
          if ((cVar1 < '\x15') || ('~' < cVar1)) {
            FUN_01018fc0(pcVar6,(int)pcVar5 - (int)pcVar6);
            FUN_01018f60(param_3,"&#%u;",*pcVar5);
            pcVar6 = pcVar5 + 1;
          }
          else {
            switch(cVar1) {
            case '\"':
            case '&':
            case '\'':
            case '<':
            case '>':
              FUN_01018fc0(pcVar6,(int)pcVar5 - (int)pcVar6);
              pcVar2 = "<&lt;";
              pcVar6 = pcVar5 + 1;
              local_20[0] = "<&lt;";
              local_20[1] = ">&gt;";
              local_20[2] = "&&amp;";
              local_20[3] = "\"&quot;";
              local_20[4] = "\'&apos;";
              local_c = 0;
              iVar4 = 0;
              do {
                if (*pcVar2 == *pcVar5) {
                  pcVar2 = local_20[iVar4];
                  uVar3 = FUN_01015cd0(pcVar2 + 1);
                  FUN_01018fc0(pcVar2 + 1,uVar3);
                  break;
                }
                pcVar2 = local_20[iVar4 + 1];
                iVar4 = iVar4 + 1;
              } while (pcVar2 != (char *)0x0);
            }
          }
          pcVar5 = pcVar5 + 1;
          iVar4 = local_8;
          cVar1 = *pcVar5;
        }
        FUN_01018fc0(pcVar6,(int)pcVar5 - (int)pcVar6);
      }
      local_8 = iVar4 + 1;
    } while (local_8 < param_2);
  }
  return 0;
}

// 010F8060  FUN_010f8060  size=300  [run]
undefined4 FUN_010f8060(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_20 [5];
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  if (0 < param_2) {
    do {
      iVar4 = local_8;
      pcVar5 = (char *)(*(uint *)(param_1 + local_8 * 4) & 0xfffffffe);
      if (pcVar5 == (char *)0x0) {
        FUN_01018d00("&#9216;");
      }
      else {
        cVar1 = *pcVar5;
        pcVar6 = pcVar5;
        while (local_8 = iVar4, cVar1 != '\0') {
          cVar1 = *pcVar5;
          if ((cVar1 < '\x15') || ('~' < cVar1)) {
            FUN_01018fc0(pcVar6,(int)pcVar5 - (int)pcVar6);
            FUN_01018f60(param_3,"&#%u;",*pcVar5);
            pcVar6 = pcVar5 + 1;
          }
          else {
            switch(cVar1) {
            case '\"':
            case '&':
            case '\'':
            case '<':
            case '>':
              FUN_01018fc0(pcVar6,(int)pcVar5 - (int)pcVar6);
              pcVar2 = "<&lt;";
              pcVar6 = pcVar5 + 1;
              local_20[0] = "<&lt;";
              local_20[1] = ">&gt;";
              local_20[2] = "&&amp;";
              local_20[3] = "\"&quot;";
              local_20[4] = "\'&apos;";
              local_c = 0;
              iVar4 = 0;
              do {
                if (*pcVar2 == *pcVar5) {
                  pcVar2 = local_20[iVar4];
                  uVar3 = FUN_01015cd0(pcVar2 + 1);
                  FUN_01018fc0(pcVar2 + 1,uVar3);
                  break;
                }
                pcVar2 = local_20[iVar4 + 1];
                iVar4 = iVar4 + 1;
              } while (pcVar2 != (char *)0x0);
            }
          }
          pcVar5 = pcVar5 + 1;
          iVar4 = local_8;
          cVar1 = *pcVar5;
        }
        FUN_01018fc0(pcVar6,(int)pcVar5 - (int)pcVar6);
      }
      local_8 = iVar4 + 1;
    } while (local_8 < param_2);
  }
  return 0;
}

// 010F81C0  FUN_010f81c0  size=1458  [run]
void FUN_010f81c0(int param_1)

{
  undefined4 in_EAX;
  
  switch(in_EAX) {
  case 1:
    FUN_010f9670();
    FUN_01018d00();
    return;
  case 2:
    FUN_010f9680();
    FUN_01018f60();
    return;
  case 3:
    FUN_010f9690();
    FUN_01018f60();
    return;
  case 4:
    FUN_010f96a0();
    FUN_01018f60();
    return;
  case 5:
    FUN_010f96b0();
    FUN_01018f60();
    return;
  case 6:
    FUN_010f96c0();
    FUN_01018f60();
    return;
  case 7:
    FUN_010f96d0();
    FUN_01018f60();
    return;
  case 8:
    FUN_010f96e0();
    FUN_01018f60();
    return;
  case 9:
    FUN_010f96f0();
    FUN_01018f60();
    return;
  case 10:
    FUN_010f9700();
    FUN_01018f60();
    return;
  case 0xb:
    FUN_010f9720();
    FUN_01018f60();
    return;
  case 0xc:
  case 0xd:
    goto LAB_010f83b5;
  case 0xe:
  case 0xf:
    FUN_01018f60();
    FUN_01018f60();
    goto LAB_010f8461;
  case 0x10:
    FUN_01018f60();
    FUN_01018f60();
    FUN_01018f60();
    return;
  case 0x11:
    FUN_01018f60();
    FUN_01018f60();
    FUN_01018f60();
LAB_010f83b5:
    FUN_01018f60();
    return;
  case 0x12:
    FUN_01018f60();
    FUN_01018f60();
    FUN_01018f60();
LAB_010f8461:
    FUN_01018f60();
    return;
  default:
    goto switchD_010f81dd_caseD_13;
  case 0x14:
    FUN_010f9740();
    (**(code **)(**(int **)(param_1 + 0x24) + 4))();
    FUN_01018fc0();
    return;
  case 0x1d:
    FUN_01018f60();
    break;
  case 0x1e:
    FUN_010f9710();
    FUN_01018f60();
    return;
  case 0x20:
    FUN_010f9730();
    FUN_01018f60();
    return;
  case 0x21:
    FUN_01018f60();
  }
  FUN_010f7dc0();
  FUN_01018f60();
switchD_010f81dd_caseD_13:
  return;
}

// 010F87F0  hkXmlObjectWriter::vf10  size=94  [run]
undefined4 __thiscall
hkXmlObjectWriter::vf10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_10 [12];
  
  hkOstream::hkOstream(param_2);
  FUN_01018f60(local_10,"\n%s<hkrawdata size=\"%i\"><![CDATA[\n",*(undefined4 *)(param_1 + 8),
               param_4);
  uVar1 = FUN_010f7c00(param_2,param_3,param_4);
  FUN_01018f60(local_10,"\n]]></hkrawdata>");
  ::hkBaseObject::hkBaseObject_38();
  return uVar1;
}

// 010F8850  FUN_010f8850  size=86  [run]
void __thiscall FUN_010f8850(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = FUN_01010160(param_2,0);
  if (uVar1 == 0) {
    uVar1 = *(uint *)(param_1 + 8) & 0x7fffffff;
    FUN_010100a0(&PTR_vftable_018e9b94,param_2,uVar1 + 1);
  }
  FUN_01015b50(param_3,param_4,"#%04i",uVar1);
  return;
}

// 010F88B0  FUN_010f88b0  size=87  [run]
void __fastcall FUN_010f88b0(int param_1)

{
  int iVar1;
  size_t _Size;
  int *unaff_ESI;
  
  iVar1 = param_1 + 1 + unaff_ESI[1];
  if ((int)(unaff_ESI[2] & 0x3fffffffU) < iVar1) {
    FUN_0100a210(&PTR_vftable_018e9b94);
  }
  _Size = iVar1 - unaff_ESI[1];
  if (0 < (int)_Size) {
    _memset((void *)(*unaff_ESI + unaff_ESI[1]),9,_Size);
  }
  unaff_ESI[1] = iVar1;
  *(undefined1 *)(*unaff_ESI + -1 + iVar1) = 0;
  unaff_ESI[1] = unaff_ESI[1] + -1;
  return;
}

// 010F8930  FUN_010f8930  size=131  [run]
undefined4 FUN_010f8930(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_EAX;
  int iVar1;
  int iVar2;
  
  FUN_01018f60(param_3,"\n%s<hkobject>",*in_EAX);
  FUN_010f88b0();
  iVar2 = 0;
  iVar1 = FUN_01009570();
  if (0 < iVar1) {
    do {
      FUN_01009590(iVar2);
      FUN_010f8dd0();
      iVar2 = iVar2 + 1;
      iVar1 = FUN_01009570();
    } while (iVar2 < iVar1);
  }
  FUN_010f88b0();
  FUN_01018f60(param_3,"\n%s</hkobject>",*in_EAX);
  return 0;
}

// 010F89C0  FUN_010f89c0  size=20  [run]
void FUN_010f89c0(void)

{
  FUN_010f88b0();
  return;
}

// 010F89E0  FUN_010f89e0  size=178  [run]
void __thiscall FUN_010f89e0(int param_1,int *param_2,undefined4 param_3,int *param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_10 [12];
  
  if (param_5 != '\0') {
    (**(code **)(*param_2 + 0x10))(&DAT_016cc51c,1);
    (**(code **)(*param_2 + 0x10))(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  hkOstream::hkOstream(param_2);
  FUN_01018f60(local_10,&DAT_016cc53c,param_3);
  if (param_4 != (int *)0x0) {
    iVar3 = 0;
    iVar2 = *param_4;
    piVar1 = param_4;
    while (iVar2 != 0) {
      FUN_01018f60(local_10," %s=\"%s\"",iVar2,piVar1[1]);
      iVar3 = iVar3 + 2;
      piVar1 = param_4 + iVar3;
      iVar2 = param_4[iVar3];
    }
  }
  FUN_01018f60(local_10,&DAT_016cc48c);
  FUN_010f89c0(1);
  hkBaseObject::hkBaseObject_38();
  return;
}

// 010F8AA0  FUN_010f8aa0  size=119  [run]
void __thiscall FUN_010f8aa0(int param_1,int *param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_010f89c0(0xffffffff);
  if (param_4 != '\0') {
    (**(code **)(*param_2 + 0x10))(&DAT_016cc51c,1);
    (**(code **)(*param_2 + 0x10))(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  (**(code **)(*param_2 + 0x10))(&DAT_017d9f6c,2);
  iVar1 = *param_2;
  uVar2 = FUN_01015cd0(param_3);
  (**(code **)(iVar1 + 0x10))(param_3,uVar2);
  (**(code **)(*param_2 + 0x10))(&DAT_016cc48c,1);
  return;
}

// 010F8B20  FUN_010f8b20  size=498  [run]
void FUN_010f8b20(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 local_210 [256];
  undefined1 local_110 [256];
  int local_10;
  int local_c;
  int local_8;
  
  piVar2 = param_3;
  local_c = FUN_01016520();
  iVar6 = *param_3;
  local_8 = FUN_01016510();
  if (param_3[1] != 0) {
    FUN_010f88b0();
    switch(local_8) {
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
    case 0x1d:
    case 0x1e:
    case 0x20:
    case 0x21:
      local_10 = (-(uint)(6 < local_8 - 0xcU) & 0xf) + 1;
      iVar6 = 0;
      if (0 < param_3[1]) {
        do {
          if (((iVar6 % local_10 == 0) || (local_8 == 0x1d)) || (local_8 == 0x21)) {
            FUN_01018f60(param_4,&DAT_017d9f94,*param_1);
          }
          else {
            FUN_01018ce0(0x20);
          }
          FUN_010f81c0(param_5);
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_3[1]);
      }
      break;
    case 0x13:
      FUN_01018f60(param_4,"<!-- zero array %s -->",*param_2);
      break;
    case 0x19:
      iVar7 = 0;
      if (0 < param_3[1]) {
        do {
          uVar3 = FUN_010162f0(iVar6,param_4,param_5);
          FUN_010f8930(uVar3);
          iVar6 = iVar6 + local_c;
          iVar7 = iVar7 + 1;
        } while (iVar7 < param_3[1]);
      }
      break;
    case 0x1c:
      piVar1 = param_3 + 1;
      param_3 = (int *)0x0;
      if (0 < *piVar1) {
        do {
          puVar4 = (undefined4 *)FUN_010f9750(iVar6);
          (**(code **)(**(int **)(param_5 + 0x24) + 4))(*puVar4,local_210,0x100);
          (**(code **)(**(int **)(param_5 + 0x24) + 4))(puVar4[1],local_110,0x100);
          param_3 = (int *)((int)param_3 + 1);
          puVar5 = &DAT_01663284;
          if (piVar2[1] <= (int)param_3) {
            puVar5 = &DAT_016416fa;
          }
          FUN_01018f60(param_4,"(%s %s%s)",local_210,local_110,puVar5);
          iVar6 = iVar6 + local_c;
        } while ((int)param_3 < piVar2[1]);
      }
    }
    FUN_010f88b0();
    FUN_01018f60(param_4,&DAT_017d9f94,*param_1);
  }
  return;
}

// 010F8D60  hkXmlObjectWriter::hkXmlObjectWriter  size=108  [run]
undefined4 * __thiscall
hkXmlObjectWriter::hkXmlObjectWriter(undefined4 *param_1,undefined4 param_2,undefined1 param_3)

{
  int *piVar1;
  
  piVar1 = param_1 + 2;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  *piVar1 = (int)(param_1 + 5);
  param_1[3] = 0;
  param_1[4] = &DAT_80000010;
  param_1[9] = param_2;
  *(undefined1 *)(param_1 + 10) = param_3;
  if (param_1[3] == (param_1[4] & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,1);
  }
  *(undefined1 *)(*piVar1 + param_1[3]) = 0;
  param_1[3] = param_1[3] + 1;
  param_1[3] = param_1[3] + -1;
  return param_1;
}


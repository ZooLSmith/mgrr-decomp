// lib/havok/unit_010E60C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 010E60C0..010E6CE0, 41 functions

#include "mgrr.h"
#include "hkPackfileWriter.h"
#include "hkXmlPackfileWriter.h"

// 010E60C0  hkPackfileWriter::hkPackfileWriter  size=370  [run]
undefined4 * __thiscall hkPackfileWriter::hkPackfileWriter(undefined4 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int local_8;
  
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  uVar1 = (uint)param_1 >> 8;
  local_8 = uVar1 << 8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffff;
  FUN_01025830(local_8);
  local_8 = uVar1 << 8;
  FUN_01025830(local_8);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff;
  local_8 = uVar1 << 8;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x80000000;
  FUN_01025830(local_8);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x80000000;
  local_8 = uVar1 << 8;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0xffffffff;
  FUN_01025830(local_8);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x80000000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0xffffffff;
  param_1[0x34] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x35) = *param_2;
  *(undefined8 *)(param_1 + 0x37) = param_2[1];
  FUN_010100a0(&PTR_vftable_018e9b94,&DAT_01f904dc,0xffffffff);
  FUN_010100a0(&PTR_vftable_018e9b94,&DAT_01f9047c,0xffffffff);
  FUN_010100a0(&PTR_vftable_018e9b94,&DAT_01f9050c,0xffffffff);
  return param_1;
}

// 010E6240  hkXmlPackfileWriter::vf0C  size=138  [run]
void __thiscall
hkXmlPackfileWriter::vf0C
          (int param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  int *piVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = param_4;
  if (param_4 == (int *)0x0) {
    piVar1 = (int *)(**(code **)(*DAT_0209b610 + 0x14))();
  }
  uVar3 = param_3;
  pcVar2 = (char *)FUN_01009770((int)&param_3 + 3);
  if (*pcVar2 != '\0') {
    uVar3 = (**(code **)(*piVar1 + 0x14))(param_2);
  }
  FUN_010e5db0(param_2,uVar3,param_4,param_5,PTR_s___data___01b1dc00);
  uVar4 = FUN_01010160(param_2,0xffffffff);
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  uVar3 = FUN_01010160(uVar3,0xffffffff);
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  return;
}

// 010E62D0  FUN_010e62d0  size=27  [run]
uint __fastcall FUN_010e62d0(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 010E62F0  FUN_010e62f0  size=9  [run]
void FUN_010e62f0(void)

{
  FUN_01025470();
  return;
}

// 010E6300  FUN_010e6300  size=9  [run]
void FUN_010e6300(void)

{
  FUN_01025be0();
  return;
}

// 010E6310  FUN_010e6310  size=9  [run]
void FUN_010e6310(void)

{
  FUN_01010160();
  return;
}

// 010E6320  FUN_010e6320  size=9  [run]
void FUN_010e6320(void)

{
  FUN_01025be0();
  return;
}

// 010E6330  FUN_010e6330  size=12  [run]
void __thiscall FUN_010e6330(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}

// 010E63F0  FUN_010e63f0  size=34  [run]
void FUN_010e63f0(int param_1,int param_2,undefined4 *param_3)

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

// 010E6420  FUN_010e6420  size=31  [run]
void __thiscall FUN_010e6420(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x18);
  return;
}

// 010E6440  FUN_010e6440  size=11  [run]
int FUN_010e6440(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 010E6450  FUN_010e6450  size=26  [run]
void __thiscall FUN_010e6450(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 010E6490  FUN_010e6490  size=28  [run]
void __thiscall FUN_010e6490(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 010E6580  FUN_010e6580  size=25  [run]
void FUN_010e6580(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010E65C0  FUN_010e65c0  size=25  [run]
void FUN_010e65c0(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 010E6600  FUN_010e6600  size=57  [run]
void __thiscall FUN_010e6600(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010E6640  FUN_010e6640  size=56  [run]
void FUN_010e6640(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010E66B0  FUN_010e66b0  size=51  [run]
int __thiscall FUN_010e66b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010E66F0  FUN_010e66f0  size=31  [run]
void __thiscall FUN_010e66f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 010E6750  FUN_010e6750  size=58  [run]
void __thiscall FUN_010e6750(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 010E67B0  FUN_010e67b0  size=31  [run]
void __thiscall FUN_010e67b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01010120(param_3);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 010E67D0  FUN_010e67d0  size=88  [run]
void __thiscall FUN_010e67d0(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x18);
  }
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010E6830  FUN_010e6830  size=66  [run]
void __thiscall FUN_010e6830(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x18);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E6880  FUN_010e6880  size=61  [run]
void __thiscall FUN_010e6880(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E68C0  FUN_010e68c0  size=63  [run]
void __thiscall FUN_010e68c0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E6900  FUN_010e6900  size=46  [run]
int __fastcall FUN_010e6900(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010E6930  FUN_010e6930  size=89  [run]
void __thiscall FUN_010e6930(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x18);
  }
  puVar1 = (undefined8 *)(*param_1 + param_1[1] * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010E6990  FUN_010e6990  size=66  [run]
void __fastcall FUN_010e6990(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x18);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E69E0  FUN_010e69e0  size=61  [run]
void __fastcall FUN_010e69e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E6A20  FUN_010e6a20  size=63  [run]
void __fastcall FUN_010e6a20(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E6A60  FUN_010e6a60  size=62  [run]
uint __fastcall FUN_010e6a60(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[6];
  if (uVar1 != 0xffffffff) {
    param_1[6] = *(int *)(*param_1 + 4 + uVar1 * 8);
    return uVar1;
  }
  uVar1 = param_1[1];
  if (uVar1 == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  param_1[1] = param_1[1] + 1;
  return uVar1;
}

// 010E6AA0  FUN_010e6aa0  size=66  [run]
void __fastcall FUN_010e6aa0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x18);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E6AF0  FUN_010e6af0  size=61  [run]
void __fastcall FUN_010e6af0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E6B30  FUN_010e6b30  size=63  [run]
void __fastcall FUN_010e6b30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E6B70  FUN_010e6b70  size=72  [run]
void __thiscall FUN_010e6b70(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_01010160(param_2,0xffffffff);
  iVar3 = FUN_010e6a60();
  puVar1 = (undefined4 *)(*param_1 + iVar3 * 8);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  FUN_010100a0(&PTR_vftable_018e9b94,param_2,iVar3);
  return;
}

// 010E6BC0  FUN_010e6bc0  size=87  [run]
void __fastcall FUN_010e6bc0(undefined4 *param_1)

{
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010E6C20  FUN_010e6c20  size=38  [run]
void FUN_010e6c20(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010E6C70  hkPackfileWriter::vf00  size=52  [run]
int __thiscall hkPackfileWriter::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_239();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010E6CB0  FUN_010e6cb0  size=11  [run]
void __fastcall FUN_010e6cb0(undefined4 *param_1)

{
  *param_1 = DAT_01b1dc08;
  return;
}

// 010E6CC0  FUN_010e6cc0  size=16  [run]
void __thiscall FUN_010e6cc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}

// 010E6CE0  FUN_010e6ce0  size=13  [run]
void __thiscall FUN_010e6ce0(int param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x12) = param_2;
  return;
}


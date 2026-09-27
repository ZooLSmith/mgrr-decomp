// lib/havok/unit_01065C00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01065C00..010776A0, 547 functions

#include "types.h"

// 01065C00  hkStorageSkinnedMeshShape::hkStorageSkinnedMeshShape  size=52  [run]
undefined4 * __fastcall hkStorageSkinnedMeshShape::hkStorageSkinnedMeshShape(undefined4 *param_1)

{
  hkSkinnedMeshShape::hkSkinnedMeshShape();
  *param_1 = vftable;
  param_1[4] = 0x80000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0x80000000;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_010066e0(0);
  return param_1;
}

// 01065C40  hkStorageSkinnedMeshShape::hkStorageSkinnedMeshShape_2  size=37  [run]
undefined4 * __thiscall
hkStorageSkinnedMeshShape::hkStorageSkinnedMeshShape_2(undefined4 *param_1,undefined4 param_2)

{
  undefined4 extraout_EDX;
  
  hkSkinnedMeshShape::hkSkinnedMeshShape_2(param_2);
  *param_1 = vftable;
  FUN_010065b0(extraout_EDX);
  return param_1;
}

// 01065C70  hkSkinnedMeshShape::vf20  size=3  [run]
undefined4 hkSkinnedMeshShape::vf20(void)

{
  return 0;
}

// 01065C80  hkSkinnedMeshShape::vf24  size=3  [run]
void hkSkinnedMeshShape::vf24(void)

{
  return;
}

// 01065C90  hkSkinnedMeshShape::vf28  size=3  [run]
void hkSkinnedMeshShape::vf28(void)

{
  return;
}

// 01065CA0  hkSkinnedMeshShape::vf2C  size=3  [run]
void hkSkinnedMeshShape::vf2C(void)

{
  return;
}

// 01065CB0  hkSkinnedMeshShape::vf30  size=1  [run]
void hkSkinnedMeshShape::vf30(void)

{
  return;
}

// 01065CE0  FUN_01065ce0  size=20  [run]
void __thiscall FUN_01065ce0(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 01065D20  FUN_01065d20  size=31  [run]
int * __thiscall FUN_01065d20(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 01065D50  FUN_01065d50  size=40  [run]
void __thiscall FUN_01065d50(int *param_1,int param_2)

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

// 01065D80  FUN_01065d80  size=52  [run]
void __thiscall FUN_01065d80(int *param_1,int *param_2)

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

// 01065DF0  FUN_01065df0  size=15  [run]
int __thiscall FUN_01065df0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01065E40  FUN_01065e40  size=18  [run]
int __thiscall FUN_01065e40(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 01065E60  FUN_01065e60  size=18  [run]
int __thiscall FUN_01065e60(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 01065ED0  FUN_01065ed0  size=28  [run]
void __thiscall FUN_01065ed0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01065EF0  FUN_01065ef0  size=28  [run]
void __thiscall FUN_01065ef0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x30);
  return;
}

// 01065F10  FUN_01065f10  size=11  [run]
int FUN_01065f10(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01065F50  FUN_01065f50  size=60  [run]
int * __thiscall FUN_01065f50(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = *param_2;
  *(short *)(param_1 + 1) = (short)param_2[1];
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)param_2 + 6);
  return param_1;
}

// 01065F90  FUN_01065f90  size=58  [run]
void __thiscall FUN_01065f90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x12);
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return;
}

// 01066100  FUN_01066100  size=36  [run]
void FUN_01066100(int param_1,int param_2)

{
  int extraout_EDX;
  int iVar1;
  
  if (0 < param_2) {
    do {
      iVar1 = 0;
      if (param_1 != 0) {
        FUN_01065290();
        iVar1 = extraout_EDX;
      }
      param_1 = iVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01066130  FUN_01066130  size=86  [run]
void FUN_01066130(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
        param_1[3] = param_3[3];
        param_1[4] = param_3[4];
        param_1[5] = param_3[5];
      }
      param_1 = param_1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 010661A0  FUN_010661a0  size=38  [run]
void FUN_010661a0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 010661D0  hkSkinnedMeshShape::vf00  size=52  [run]
int __thiscall hkSkinnedMeshShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_242();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01066220  FUN_01066220  size=68  [run]
int __thiscall FUN_01066220(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  if (*param_1 + param_1[1] * 8 != 0) {
    FUN_01065290();
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01066270  FUN_01066270  size=116  [run]
void __thiscall FUN_01066270(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x30);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x30 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
    puVar1[4] = param_3[4];
    puVar1[5] = param_3[5];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 010662F0  FUN_010662f0  size=63  [run]
void __thiscall FUN_010662f0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01066330  FUN_01066330  size=43  [run]
void FUN_01066330(int param_1,int param_2)

{
  param_2 = param_2 + -1;
  while (-1 < param_2) {
    if (*(int *)(param_1 + param_2 * 8) != 0) {
      FUN_010060a0();
    }
    param_2 = param_2 + -1;
    *(undefined4 *)(param_1 + 8 + param_2 * 8) = 0;
  }
  return;
}

// 01066360  FUN_01066360  size=63  [run]
int __fastcall FUN_01066360(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  if (*param_1 + param_1[1] * 8 != 0) {
    FUN_01065290();
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 010663A0  FUN_010663a0  size=117  [run]
void __thiscall FUN_010663a0(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x30);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x30 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    puVar1[4] = param_2[4];
    puVar1[5] = param_2[5];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01066420  FUN_01066420  size=63  [run]
void __fastcall FUN_01066420(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010664A0  FUN_010664a0  size=63  [run]
void __fastcall FUN_010664a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010664E0  FUN_010664e0  size=99  [run]
void __thiscall FUN_010664e0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 8) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar2 * 8) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01066550  FUN_01066550  size=102  [run]
void __fastcall FUN_01066550(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 8) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar2 * 8) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010665C0  FUN_010665c0  size=102  [run]
void __fastcall FUN_010665c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  iVar1 = *param_1;
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 8) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar2 * 8) = 0;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01066630  FUN_01066630  size=38  [run]
void FUN_01066630(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01066660  FUN_01066660  size=173  [run]
void __fastcall FUN_01066660(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_01006770();
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1c)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x14),(*(uint *)(param_1 + 0x1c) & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  iVar2 = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(param_1 + 8);
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 8) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar2 * 8) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < *(int *)(param_1 + 0x10)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x10) * 8);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x80000000;
  hkBaseObject::hkBaseObject_242();
  return;
}

// 01066710  hkStorageSkinnedMeshShape::vf00  size=52  [run]
int __thiscall hkStorageSkinnedMeshShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_01066660();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01066760  FUN_01066760  size=33  [run]
bool FUN_01066760(byte *param_1,byte *param_2)

{
  bool bVar1;
  
  bVar1 = *param_1 < *param_2;
  if (*param_1 == *param_2) {
    bVar1 = param_1[1] < param_2[1];
  }
  return bVar1;
}

// 01066790  hkMultipleVertexBuffer::vf24  size=27  [run]
void hkMultipleVertexBuffer::vf24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01070e60(param_1,param_2,param_3);
  return;
}

// 010667B0  hkMultipleVertexBuffer::vf28  size=27  [run]
void hkMultipleVertexBuffer::vf28(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01070e90(param_1,param_2,param_3);
  return;
}

// 010667D0  hkMultipleVertexBuffer::vf2C  size=27  [run]
void hkMultipleVertexBuffer::vf2C(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0106f5c0(param_1,param_2,param_3);
  return;
}

// 010667F0  hkMultipleVertexBuffer::vf30  size=27  [run]
void hkMultipleVertexBuffer::vf30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0106f7b0(param_1,param_2,param_3);
  return;
}

// 01066810  FUN_01066810  size=92  [run]
void __fastcall FUN_01066810(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x141) = 1;
  if (*(int *)(param_1 + 300) < 1) {
    *(undefined1 *)(param_1 + 0x142) = 1;
    return;
  }
  iVar2 = 0;
  do {
    cVar1 = (**(code **)(**(int **)(iVar2 + *(int *)(param_1 + 0x128)) + 0x10))();
    if (cVar1 == '\0') {
      *(undefined2 *)(param_1 + 0x141) = 0x100;
      return;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0xc;
  } while (iVar3 < *(int *)(param_1 + 300));
  *(undefined1 *)(param_1 + 0x142) = 1;
  return;
}

// 01066880  FUN_01066880  size=120  [run]
void __fastcall FUN_01066880(int param_1)

{
  int iVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  int local_c;
  int local_8;
  
  local_c = *(int *)(param_1 + 300);
  if (0 < local_c) {
    local_8 = 0;
    do {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x128) + local_8);
      if (*(char *)(puVar3 + 2) != '\0') {
        (**(code **)(*(int *)*puVar3 + 0x34))(puVar3[1]);
        *(undefined1 *)(puVar3 + 2) = 0;
      }
      iVar1 = puVar3[1];
      if (iVar1 != 0) {
        pvVar2 = TlsGetValue(DAT_01f8fc4c);
        (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,0x20c);
        puVar3[1] = 0;
      }
      local_8 = local_8 + 0xc;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

// 01066900  hkMultipleVertexBuffer::vf34  size=228  [run]
void __fastcall hkMultipleVertexBuffer::vf34(int param_1)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 local_1c [16];
  undefined4 local_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x138) != '\0') {
    if (*(int **)(param_1 + 0x118) != (int *)0x0) {
      local_c = (**(code **)(**(int **)(param_1 + 0x118) + 0x18))();
      if (0 < *(int *)(param_1 + 0x110)) {
        iVar2 = 0;
        local_8 = *(int *)(param_1 + 0x110);
        do {
          pbVar3 = (byte *)(*(int *)(param_1 + 0x10c) + iVar2);
          if (((pbVar3[4] & 2) != 0) && (-1 < (char)pbVar3[6])) {
            FUN_0106bb40((int)(char)pbVar3[6],local_1c);
            FUN_010711f0(local_1c,(uint)pbVar3[2] * 0x10 +
                                  *(int *)(*(int *)(param_1 + 0x128) + 4 + (uint)*pbVar3 * 0xc),
                         local_c);
          }
          iVar2 = iVar2 + 7;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        local_8 = 0;
      }
      if (*(int *)(param_1 + 0x118) != 0) {
        FUN_010060a0();
      }
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
    FUN_01066880();
    if (*(char *)(param_1 + 0x140) != '\0') {
      piVar1 = (int *)(param_1 + 0x13c);
      *piVar1 = *piVar1 + 1;
      if (*piVar1 == 0) {
        *(undefined4 *)(param_1 + 0x13c) = 1;
      }
    }
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  return;
}

// 010669F0  FUN_010669f0  size=1000  [run]
int __thiscall FUN_010669f0(int param_1,int *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 local_1d0 [256];
  int local_d0;
  int local_cc;
  uint auStack_c8 [32];
  byte abStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  int local_14;
  byte *local_10;
  undefined4 *local_c;
  byte *local_8;
  
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 300)) {
    iVar11 = 0;
    do {
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      uVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x20c);
      *(undefined4 *)(iVar11 + 4 + *(int *)(param_1 + 0x128)) = uVar4;
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + 0xc;
    } while (iVar8 < *(int *)(param_1 + 300));
  }
  iVar8 = param_2[1];
  iVar11 = *(int *)(param_1 + 0x110);
  if (iVar8 < 0) {
    iVar8 = *(int *)(param_1 + 0x134) - *param_2;
  }
  local_18 = iVar11;
  local_14 = iVar8;
  if (1 < iVar11) {
    FUN_01067790(*(undefined4 *)(param_1 + 0x10c),0,iVar11 + -1,FUN_01066760);
  }
  local_8 = *(byte **)(param_1 + 0x10c);
  local_10 = local_8 + *(int *)(param_1 + 0x110) * 7;
  if (local_8 < local_10) {
    do {
      pbVar9 = local_8;
      do {
        pbVar9 = pbVar9 + 7;
        if (local_10 <= pbVar9) break;
      } while ((uint)*pbVar9 == (uint)*local_8);
      local_c = (undefined4 *)(*(int *)(param_1 + 0x128) + (uint)*local_8 * 0xc);
      local_cc = ((int)pbVar9 - (int)local_8) / 7;
      iVar8 = 0;
      if (0 < local_cc) {
        pbVar10 = local_8 + 4;
        do {
          auStack_c8[iVar8] = (uint)pbVar10[-3];
          pbVar10[-2] = (byte)iVar8;
          abStack_48[iVar8] = *pbVar10;
          iVar8 = iVar8 + 1;
          pbVar10 = pbVar10 + 7;
        } while (iVar8 < local_cc);
      }
      puVar7 = local_c;
      if (local_c[1] == 0) {
        pvVar3 = TlsGetValue(DAT_01f8fc4c);
        uVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x20c);
        puVar7[1] = uVar4;
      }
      local_c = (undefined4 *)(**(code **)(*(int *)*puVar7 + 0x20))(param_2,&local_cc,puVar7[1]);
      if (local_c != (undefined4 *)0x1) {
        FUN_01066880();
        return (int)local_c;
      }
      *(undefined1 *)(puVar7 + 2) = 1;
      local_8 = pbVar9;
    } while (pbVar9 < local_10);
    local_c = (undefined4 *)0x1;
    iVar8 = local_14;
    iVar11 = local_18;
  }
  *(int *)(param_3 + 0x200) = iVar11;
  *(int *)(param_3 + 0x204) = iVar8;
  *(undefined1 *)(param_3 + 0x208) = 0;
  FUN_0106e670();
  if (0 < iVar11) {
    local_10 = (byte *)0x0;
    local_c = (undefined4 *)iVar11;
    do {
      pbVar9 = local_10 + *(int *)(param_1 + 0x10c);
      puVar5 = (undefined8 *)
               ((uint)pbVar9[2] * 0x10 +
               *(int *)(*(int *)(param_1 + 0x128) + 4 + (uint)*pbVar9 * 0xc));
      cVar1 = *(char *)(param_1 + 8 + (uint)pbVar9[3] * 8);
      local_8 = (byte *)(param_1 + 8 + (uint)pbVar9[3] * 8);
      puVar12 = (undefined8 *)((uint)pbVar9[5] * 0x10 + param_3);
      if ((cVar1 == *(char *)(puVar5 + 1)) && (local_8[1] == *(byte *)((int)puVar5 + 9))) {
        *puVar12 = *puVar5;
        puVar12[1] = puVar5[1];
        pbVar9[6] = 0xff;
      }
      else if ((*(char *)(puVar5 + 1) == '\v') &&
              (((*(char *)((int)puVar5 + 9) == '\x01' && (cVar1 == '\n')) && (local_8[1] < 5)))) {
        *puVar12 = *puVar5;
        puVar12[1] = puVar5[1];
        *(byte *)(puVar12 + 1) = *local_8;
        *(byte *)((int)puVar12 + 9) = local_8[1];
        pbVar9[6] = 0xff;
      }
      else {
        FUN_0106e870(local_8);
        pbVar9[6] = 0;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)local_8;
        *(undefined4 *)((int)puVar12 + 0xc) = *(undefined4 *)(local_8 + 4);
      }
      local_10 = local_10 + 7;
      local_c = (undefined4 *)((int)local_c + -1);
    } while (local_c != (undefined4 *)0x0);
    local_c = (undefined4 *)0x0;
    iVar8 = local_14;
    iVar11 = local_18;
  }
  if (0 < local_d0) {
    FUN_0106e930();
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar6 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x1a8);
    *(undefined2 *)(iVar6 + 4) = 0x1a8;
    iVar8 = hkMemoryMeshVertexBuffer::~hkMemoryMeshVertexBuffer(local_1d0,iVar8);
    if (iVar8 != 0) {
      FUN_01006000();
    }
    if (*(int *)(param_1 + 0x118) != 0) {
      FUN_010060a0();
    }
    *(int *)(param_1 + 0x118) = iVar8;
    FUN_010060a0();
    if (0 < iVar11) {
      param_2 = (int *)0x0;
      do {
        pbVar9 = (byte *)(*(int *)(param_1 + 0x10c) + (int)param_2);
        if (-1 < (char)pbVar9[6]) {
          bVar2 = FUN_0106e770(*(undefined1 *)(param_1 + 10 + (uint)pbVar9[3] * 8),
                               *(undefined1 *)(param_1 + 0xb + (uint)pbVar9[3] * 8));
          pbVar9[6] = bVar2;
          FUN_0106bb40((int)(char)bVar2,&local_28);
          if ((pbVar9[4] & 4) == 0) {
            FUN_010711f0((uint)pbVar9[2] * 0x10 +
                         *(int *)(*(int *)(param_1 + 0x128) + 4 + (uint)*pbVar9 * 0xc),&local_28,
                         local_14);
          }
          puVar7 = (undefined4 *)((uint)pbVar9[5] * 0x10 + param_3);
          *puVar7 = local_28;
          puVar7[1] = local_24;
        }
        param_2 = (int *)((int)param_2 + 7);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  *(undefined1 *)(param_1 + 0x138) = 1;
  return 1;
}

// 01066DF0  FUN_01066df0  size=70  [run]
void __thiscall FUN_01066df0(int param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  
  if (*(uint *)(param_1 + 0x120) == (*(uint *)(param_1 + 0x124) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x11c),2);
  }
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x11c) + *(int *)(param_1 + 0x120) * 2);
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}

// 01066E40  hkMultipleVertexBuffer::vf1C  size=173  [run]
undefined4 __thiscall hkMultipleVertexBuffer::vf1C(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int local_8;
  
  iVar6 = 0;
  if (*(char *)(param_1 + 0x138) == '\0') {
    *(byte *)(param_1 + 0x140) = (byte)(*(uint *)(param_2 + 0xc) >> 1) & 1;
    iVar2 = *(int *)(param_1 + 0x108);
    iVar3 = 0;
    if (iVar2 != *(int *)(param_1 + 0x110) && -1 < iVar2 - *(int *)(param_1 + 0x110)) {
      do {
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2 - *(int *)(param_1 + 0x110));
    }
    *(int *)(param_1 + 0x110) = iVar2;
    if (0 < iVar2) {
      local_8 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x11c);
        puVar4 = (undefined1 *)(*(int *)(param_1 + 0x10c) + local_8);
        local_8 = local_8 + 7;
        *puVar4 = *(undefined1 *)(iVar3 + iVar6 * 2);
        puVar4[1] = *(undefined1 *)(iVar3 + iVar6 * 2 + 1);
        uVar1 = *(undefined1 *)(param_2 + 0xc);
        puVar4[5] = (char)iVar6;
        puVar4[3] = (char)iVar6;
        iVar6 = iVar6 + 1;
        puVar4[4] = uVar1;
      } while (iVar6 < iVar2);
    }
    uVar5 = FUN_010669f0(param_2,param_3);
    return uVar5;
  }
  return 0;
}

// 01066EF0  hkMultipleVertexBuffer::vf20  size=197  [run]
undefined4 __thiscall
hkMultipleVertexBuffer::vf20(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int local_8;
  
  iVar8 = 0;
  if (*(char *)(param_1 + 0x138) != '\0') {
    return 0;
  }
  iVar3 = *param_3;
  iVar6 = 0;
  if (iVar3 != *(int *)(param_1 + 0x110) && -1 < iVar3 - *(int *)(param_1 + 0x110)) {
    do {
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3 - *(int *)(param_1 + 0x110));
  }
  uVar7 = 0;
  *(int *)(param_1 + 0x110) = iVar3;
  if (0 < iVar3) {
    local_8 = 0;
    piVar9 = param_3;
    do {
      piVar9 = piVar9 + 1;
      puVar4 = (undefined1 *)(*(int *)(param_1 + 0x10c) + local_8);
      local_8 = local_8 + 7;
      puVar1 = (undefined1 *)(*(int *)(param_1 + 0x11c) + *piVar9 * 2);
      *puVar4 = *puVar1;
      puVar4[1] = puVar1[1];
      bVar2 = *(byte *)((int)param_3 + iVar8 + 0x84);
      puVar4[5] = (char)iVar8;
      puVar4[4] = bVar2;
      iVar8 = iVar8 + 1;
      uVar7 = uVar7 | bVar2;
      puVar4[3] = (char)*piVar9;
    } while (iVar8 < iVar3);
  }
  *(byte *)(param_1 + 0x140) = (byte)(uVar7 >> 1) & 1;
  uVar5 = FUN_010669f0(param_2,param_4);
  return uVar5;
}

// 01066FC0  FUN_01066fc0  size=116  [run]
void __thiscall FUN_01066fc0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x128);
  if (*(uint *)(param_1 + 300) == (*(uint *)(param_1 + 0x130) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,0xc);
  }
  puVar2 = (undefined4 *)(*piVar1 + *(int *)(param_1 + 300) * 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
  }
  iVar3 = *(int *)(param_1 + 300);
  *(int *)(param_1 + 300) = iVar3 + 1;
  piVar1 = (int *)(*piVar1 + iVar3 * 0xc);
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*piVar1 != 0) {
    FUN_010060a0();
  }
  *piVar1 = param_2;
  return;
}

// 01067040  hkMultipleVertexBuffer::hkMultipleVertexBuffer_2  size=230  [run]
undefined4 * __thiscall
hkMultipleVertexBuffer::hkMultipleVertexBuffer_2(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_0106e670();
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0x80000000;
  param_1[0x46] = 0;
  param_1[0x49] = 0x80000000;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4c] = 0x80000000;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  FUN_0106e6a0(param_2);
  param_1[0x4d] = param_3;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 1;
  *(undefined1 *)((int)param_1 + 0x142) = 0;
  iVar1 = *(int *)(param_2 + 0x100);
  if ((int)(param_1[0x45] & 0x3fffffff) < iVar1) {
    iVar2 = (param_1[0x45] & 0x3fffffff) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x43,iVar2,7);
  }
  iVar2 = 0;
  if (iVar1 != param_1[0x44] && -1 < iVar1 - param_1[0x44]) {
    do {
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1 - param_1[0x44]);
  }
  param_1[0x44] = iVar1;
  return param_1;
}

// 01067130  hkMultipleVertexBuffer::hkMultipleVertexBuffer  size=11  [run]
void __fastcall hkMultipleVertexBuffer::hkMultipleVertexBuffer(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 01067140  hkMultipleVertexBuffer::~hkMultipleVertexBuffer  size=799  [run]
undefined4 * __thiscall
hkMultipleVertexBuffer::~hkMultipleVertexBuffer(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_0106e670();
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0x80000000;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0x80000000;
  piVar3 = param_1 + 0x47;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0x80000000;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x4d] = *(undefined4 *)(param_2 + 0x134);
  FUN_0106e6a0(param_2 + 8);
  iVar5 = *(int *)(param_2 + 0x120);
  local_8 = param_1[0x48];
  if (iVar5 <= (int)param_1[0x48]) {
    local_8 = iVar5;
  }
  if ((int)(param_1[0x49] & 0x3fffffff) < iVar5) {
    iVar1 = (param_1[0x49] & 0x3fffffff) * 2;
    if (iVar1 <= iVar5) {
      iVar1 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar3,iVar1,2);
  }
  puVar2 = (undefined2 *)*piVar3;
  if (0 < local_8) {
    iVar1 = *(int *)(param_2 + 0x11c) - (int)puVar2;
    local_c = local_8;
    do {
      *puVar2 = *(undefined2 *)(iVar1 + (int)puVar2);
      puVar2 = puVar2 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  puVar2 = (undefined2 *)(*piVar3 + local_8 * 2);
  iVar1 = iVar5 - local_8;
  if (0 < iVar1) {
    iVar4 = (*(int *)(param_2 + 0x11c) + local_8 * 2) - (int)puVar2;
    do {
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = *(undefined2 *)(iVar4 + (int)puVar2);
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[0x48] = iVar5;
  iVar5 = param_1[0x4b];
  iVar1 = *(int *)(param_2 + 300);
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  if ((int)(param_1[0x4c] & 0x3fffffff) < iVar1) {
    iVar4 = (param_1[0x4c] & 0x3fffffff) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x4a,iVar4,0xc);
  }
  iVar5 = (iVar5 - iVar1) + -1;
  if (-1 < iVar5) {
    piVar3 = (int *)(param_1[0x4a] + iVar1 * 0xc + iVar5 * 0xc);
    do {
      if (*piVar3 != 0) {
        FUN_010060a0();
      }
      *piVar3 = 0;
      piVar3 = piVar3 + -3;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  piVar3 = (int *)param_1[0x4a];
  if (0 < local_8) {
    iVar5 = *(int *)(param_2 + 0x128) - (int)piVar3;
    local_10 = local_8;
    do {
      if (*(int *)(iVar5 + (int)piVar3) != 0) {
        FUN_01006000();
      }
      if (*piVar3 != 0) {
        FUN_010060a0();
      }
      *piVar3 = *(int *)(iVar5 + (int)piVar3);
      piVar3[1] = *(int *)(iVar5 + 4 + (int)piVar3);
      *(undefined1 *)(piVar3 + 2) = *(undefined1 *)(iVar5 + 8 + (int)piVar3);
      piVar3 = piVar3 + 3;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  piVar3 = (int *)(*(int *)(param_2 + 0x128) + local_8 * 0xc);
  iVar5 = param_1[0x4a] + local_8 * 0xc;
  param_2 = iVar1 - local_8;
  if (0 < param_2) {
    iVar4 = (int)piVar3 - iVar5;
    puVar6 = (undefined4 *)(iVar5 + 4);
    do {
      if (puVar6 != (undefined4 *)&DAT_00000004) {
        if (*piVar3 != 0) {
          FUN_01006000();
        }
        puVar6[-1] = *piVar3;
        *puVar6 = *(undefined4 *)(iVar4 + (int)puVar6);
        *(char *)(puVar6 + 1) = (char)piVar3[2];
      }
      puVar6 = puVar6 + 3;
      piVar3 = piVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  param_1[0x4b] = iVar1;
  if (0 < iVar1) {
    iVar5 = 0;
    param_2 = iVar1;
    do {
      iVar1 = param_1[0x4a];
      iVar4 = (**(code **)(**(int **)(iVar1 + iVar5) + 0xc))();
      if (iVar4 != 0) {
        FUN_01006000();
      }
      if (*(int *)(iVar1 + iVar5) != 0) {
        FUN_010060a0();
      }
      *(int *)(iVar1 + iVar5) = iVar4;
      FUN_010060a0();
      iVar5 = iVar5 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  iVar5 = param_1[0x42];
  if ((int)(param_1[0x45] & 0x3fffffff) < iVar5) {
    iVar1 = (param_1[0x45] & 0x3fffffff) * 2;
    if (iVar1 <= iVar5) {
      iVar1 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x43,iVar1,7);
  }
  iVar1 = 0;
  if (iVar5 != param_1[0x44] && -1 < iVar5 - param_1[0x44]) {
    do {
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar5 - param_1[0x44]);
  }
  param_1[0x44] = iVar5;
  *(undefined1 *)((int)param_1 + 0x142) = 0;
  return param_1;
}

// 01067460  hkMultipleVertexBuffer::vf0C  size=78  [run]
int __fastcall hkMultipleVertexBuffer::vf0C(int param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x141) == '\0') {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x144);
    *(undefined2 *)(iVar2 + 4) = 0x144;
    iVar2 = ~hkMultipleVertexBuffer(param_1);
    FUN_01066810();
    return iVar2;
  }
  FUN_01006000();
  return param_1;
}

// 010674C0  FUN_010674c0  size=20  [run]
void __thiscall FUN_010674c0(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 010674E0  FUN_010674e0  size=20  [run]
void __thiscall FUN_010674e0(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 != param_3;
  return;
}

// 01067550  FUN_01067550  size=40  [run]
void __thiscall FUN_01067550(int *param_1,int param_2)

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

// 010675C0  FUN_010675c0  size=21  [run]
int __thiscall FUN_010675c0(int *param_1,int param_2)

{
  return param_2 * 7 + *param_1;
}

// 01067630  FUN_01067630  size=22  [run]
void __fastcall FUN_01067630(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 01067650  FUN_01067650  size=40  [run]
void __thiscall FUN_01067650(int *param_1,int param_2)

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

// 010676C0  FUN_010676c0  size=15  [run]
int __thiscall FUN_010676c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 2;
}

// 01067700  FUN_01067700  size=18  [run]
int __thiscall FUN_01067700(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 01067790  FUN_01067790  size=342  [run]
void FUN_01067790(int param_1,int param_2,int param_3,code *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  int local_18;
  int local_14;
  
  do {
    puVar6 = (undefined4 *)((param_2 + param_3 >> 1) * 7 + param_1);
    local_30 = *puVar6;
    local_2c = *(undefined2 *)(puVar6 + 1);
    local_2a = *(undefined1 *)((int)puVar6 + 6);
    iVar7 = param_2;
    iVar9 = param_3;
    do {
      local_18 = iVar7 * 7 + param_1;
      local_14 = iVar7;
      cVar5 = (*param_4)(local_18,&local_30);
      iVar4 = local_14;
      while (cVar5 != '\0') {
        local_18 = local_18 + 7;
        iVar7 = iVar7 + 1;
        cVar5 = (*param_4)(local_18,&local_30);
        iVar4 = iVar7;
      }
      local_18 = iVar9 * 7 + param_1;
      local_14 = iVar4;
      cVar5 = (*param_4)(&local_30,local_18);
      while (cVar5 != '\0') {
        local_18 = local_18 + -7;
        iVar9 = iVar9 + -1;
        cVar5 = (*param_4)(&local_30,local_18);
      }
      if (iVar9 < iVar7) break;
      if (iVar9 != iVar7) {
        puVar6 = (undefined4 *)(iVar9 * 7 + param_1);
        uVar2 = *(undefined2 *)(puVar6 + 1);
        uVar3 = *puVar6;
        uVar1 = *(undefined1 *)((int)puVar6 + 6);
        puVar8 = (undefined4 *)((iVar7 * 8 - local_14) + param_1);
        *puVar6 = *puVar8;
        *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar8 + 1);
        *(undefined1 *)((int)puVar6 + 6) = *(undefined1 *)((int)puVar8 + 6);
        *puVar8 = uVar3;
        *(undefined2 *)(puVar8 + 1) = uVar2;
        *(undefined1 *)((int)puVar8 + 6) = uVar1;
        iVar7 = local_14;
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + -1;
      local_14 = iVar7;
    } while (iVar7 <= iVar9);
    if (param_2 < iVar9) {
      FUN_01067790(param_1,param_2,iVar9,param_4);
    }
    param_2 = iVar7;
    if (param_3 <= iVar7) {
      return;
    }
  } while( true );
}

// 01067910  FUN_01067910  size=33  [run]
void __thiscall FUN_01067910(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 7);
  return;
}

// 01067950  FUN_01067950  size=52  [run]
undefined4 __thiscall FUN_01067950(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,2);
    return uVar3;
  }
  return 0;
}

// 01067990  FUN_01067990  size=35  [run]
void FUN_01067990(undefined2 *param_1,int param_2,int param_3)

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

// 010679C0  FUN_010679c0  size=24  [run]
void __thiscall FUN_010679c0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 2);
  return;
}

// 010679F0  FUN_010679f0  size=39  [run]
void FUN_010679f0(undefined2 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      if (param_1 != (undefined2 *)0x0) {
        *param_1 = *(undefined2 *)(param_3 + (int)param_1);
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01067A20  FUN_01067a20  size=52  [run]
undefined4 __thiscall FUN_01067a20(int param_1,undefined4 param_2,int param_3)

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

// 01067A60  FUN_01067a60  size=29  [run]
void __thiscall FUN_01067a60(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 01067A80  FUN_01067a80  size=33  [run]
int * __thiscall FUN_01067a80(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = *param_2;
  return param_1;
}

// 01067AB0  FUN_01067ab0  size=52  [run]
void __thiscall FUN_01067ab0(int *param_1,int *param_2)

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

// 01067BD0  FUN_01067bd0  size=13  [run]
void __thiscall FUN_01067bd0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 01067BF0  FUN_01067bf0  size=51  [run]
int __thiscall FUN_01067bf0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,2);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 2;
}

// 01067C30  FUN_01067c30  size=33  [run]
void FUN_01067c30(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01067790(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 01067C60  FUN_01067c60  size=68  [run]
void __thiscall FUN_01067c60(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(*param_2 + 0x10))(*param_1,uVar1 * 8 - (uVar1 & 0x3fffffff));
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01067CB0  FUN_01067cb0  size=52  [run]
undefined4 __thiscall FUN_01067cb0(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,7);
    return uVar3;
  }
  return 0;
}

// 01067CF0  FUN_01067cf0  size=151  [run]
int * __thiscall FUN_01067cf0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
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
    FUN_0100a210(param_2,param_1,iVar4,2);
  }
  puVar3 = (undefined2 *)*param_1;
  if (0 < iVar5) {
    iVar2 = *param_3 - (int)puVar3;
    iVar4 = iVar5;
    do {
      *puVar3 = *(undefined2 *)(iVar2 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined2 *)(*param_1 + iVar5 * 2);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*param_3 + iVar5 * 2) - (int)puVar3;
    do {
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = *(undefined2 *)(iVar5 + (int)puVar3);
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = iVar1;
  return param_1;
}

// 01067D90  FUN_01067d90  size=33  [run]
void FUN_01067d90(undefined4 *param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
        *(undefined1 *)(param_1 + 2) = 0;
      }
      param_1 = param_1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01067DD0  FUN_01067dd0  size=56  [run]
int * __thiscall FUN_01067dd0(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  return param_1;
}

// 01067E10  FUN_01067e10  size=45  [run]
int * __thiscall FUN_01067e10(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  return param_1;
}

// 01067E40  FUN_01067e40  size=38  [run]
void FUN_01067e40(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01067E70  FUN_01067e70  size=31  [run]
void FUN_01067e70(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01067E90  FUN_01067e90  size=42  [run]
void FUN_01067e90(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x20c);
  }
  return;
}

// 01067EC0  hkMeshVertexBuffer::vf00  size=53  [run]
undefined4 * __thiscall hkMeshVertexBuffer::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01067F00  FUN_01067f00  size=37  [run]
void FUN_01067f00(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01067F30  FUN_01067f30  size=37  [run]
void FUN_01067f30(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01067F60  FUN_01067f60  size=46  [run]
int __fastcall FUN_01067f60(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,2);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 2;
}

// 01067F90  FUN_01067f90  size=55  [run]
void __thiscall FUN_01067f90(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,7);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01067FD0  FUN_01067fd0  size=151  [run]
int * __thiscall FUN_01067fd0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
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
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar4,2);
  }
  puVar3 = (undefined2 *)*param_1;
  if (0 < iVar5) {
    iVar2 = *param_2 - (int)puVar3;
    iVar4 = iVar5;
    do {
      *puVar3 = *(undefined2 *)(iVar2 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined2 *)(*param_1 + iVar5 * 2);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*param_2 + iVar5 * 2) - (int)puVar3;
    do {
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = *(undefined2 *)(iVar5 + (int)puVar3);
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = iVar1;
  return param_1;
}

// 01068070  FUN_01068070  size=79  [run]
int __thiscall FUN_01068070(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 0xc;
}

// 010680C0  FUN_010680c0  size=65  [run]
void __fastcall FUN_010680c0(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar1 * 8 - (uVar1 & 0x3fffffff));
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01068110  FUN_01068110  size=59  [run]
void __thiscall FUN_01068110(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01068150  FUN_01068150  size=76  [run]
void FUN_01068150(int *param_1,int param_2,int param_3)

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
      param_1[1] = *(int *)(param_2 + 4 + (int)param_1);
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 8 + (int)param_1);
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 010681A0  FUN_010681a0  size=82  [run]
void FUN_010681a0(int param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 4);
    param_1 = (int)param_3 - param_1;
    do {
      if (puVar1 != (undefined4 *)&DAT_00000004) {
        if (*param_3 != 0) {
          FUN_01006000();
        }
        puVar1[-1] = *param_3;
        *puVar1 = *(undefined4 *)(param_1 + (int)puVar1);
        *(char *)(puVar1 + 1) = (char)param_3[2];
      }
      puVar1 = puVar1 + 3;
      param_3 = param_3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01068200  FUN_01068200  size=56  [run]
void __thiscall FUN_01068200(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,7);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01068240  FUN_01068240  size=74  [run]
int __fastcall FUN_01068240(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0xc);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 0xc;
}

// 01068290  FUN_01068290  size=65  [run]
void __fastcall FUN_01068290(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar1 * 8 - (uVar1 & 0x3fffffff));
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 010682E0  FUN_010682e0  size=59  [run]
void __fastcall FUN_010682e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01068320  FUN_01068320  size=47  [run]
void FUN_01068320(int param_1,int param_2)

{
  int *piVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    piVar1 = (int *)(param_1 + param_2 * 0xc);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      piVar1 = piVar1 + -3;
      param_2 = param_2 + -1;
    } while (-1 < param_2);
  }
  return;
}

// 01068350  FUN_01068350  size=59  [run]
void __fastcall FUN_01068350(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01068390  FUN_01068390  size=315  [run]
void __thiscall FUN_01068390(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_8;
  
  iVar1 = param_3[1];
  iVar4 = param_1[1];
  local_8 = iVar4;
  if (iVar1 <= iVar4) {
    local_8 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar2,0xc);
  }
  iVar4 = (iVar4 - iVar1) + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + iVar1 * 0xc + iVar4 * 0xc);
    do {
      if (*piVar3 != 0) {
        FUN_010060a0();
      }
      *piVar3 = 0;
      piVar3 = piVar3 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  piVar3 = (int *)*param_1;
  if (0 < local_8) {
    iVar4 = *param_3 - (int)piVar3;
    param_2 = local_8;
    do {
      if (*(int *)(iVar4 + (int)piVar3) != 0) {
        FUN_01006000();
      }
      if (*piVar3 != 0) {
        FUN_010060a0();
      }
      *piVar3 = *(int *)(iVar4 + (int)piVar3);
      piVar3[1] = *(int *)(iVar4 + 4 + (int)piVar3);
      *(undefined1 *)(piVar3 + 2) = *(undefined1 *)(iVar4 + 8 + (int)piVar3);
      piVar3 = piVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  piVar3 = (int *)(*param_3 + local_8 * 0xc);
  iVar4 = *param_1 + local_8 * 0xc;
  param_3 = (int *)(iVar1 - local_8);
  if ((int)param_3 < 1) {
    param_1[1] = iVar1;
    return;
  }
  puVar5 = (undefined4 *)(iVar4 + 4);
  iVar4 = (int)piVar3 - iVar4;
  do {
    if (puVar5 != (undefined4 *)&DAT_00000004) {
      if (*piVar3 != 0) {
        FUN_01006000();
      }
      puVar5[-1] = *piVar3;
      *puVar5 = *(undefined4 *)(iVar4 + (int)puVar5);
      *(char *)(puVar5 + 1) = (char)piVar3[2];
    }
    puVar5 = puVar5 + 3;
    piVar3 = piVar3 + 3;
    param_3 = (int *)((int)param_3 + -1);
  } while (param_3 != (int *)0x0);
  param_1[1] = iVar1;
  return;
}

// 010684D0  FUN_010684d0  size=53  [run]
void __fastcall FUN_010684d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[1] + -1;
  if (-1 < iVar1) {
    piVar2 = (int *)(*param_1 + iVar1 * 0xc);
    do {
      if (*piVar2 != 0) {
        FUN_010060a0();
      }
      *piVar2 = 0;
      piVar2 = piVar2 + -3;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  param_1[1] = 0;
  return;
}

// 01068510  FUN_01068510  size=318  [run]
void __thiscall FUN_01068510(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_10;
  int local_8;
  
  iVar1 = param_2[1];
  iVar4 = param_1[1];
  local_8 = iVar4;
  if (iVar1 <= iVar4) {
    local_8 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xc);
  }
  iVar4 = (iVar4 - iVar1) + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*param_1 + iVar1 * 0xc + iVar4 * 0xc);
    do {
      if (*piVar3 != 0) {
        FUN_010060a0();
      }
      *piVar3 = 0;
      piVar3 = piVar3 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  piVar3 = (int *)*param_1;
  if (0 < local_8) {
    iVar4 = *param_2 - (int)piVar3;
    local_10 = local_8;
    do {
      if (*(int *)(iVar4 + (int)piVar3) != 0) {
        FUN_01006000();
      }
      if (*piVar3 != 0) {
        FUN_010060a0();
      }
      *piVar3 = *(int *)(iVar4 + (int)piVar3);
      piVar3[1] = *(int *)(iVar4 + 4 + (int)piVar3);
      *(undefined1 *)(piVar3 + 2) = *(undefined1 *)(iVar4 + 8 + (int)piVar3);
      piVar3 = piVar3 + 3;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  piVar3 = (int *)(*param_2 + local_8 * 0xc);
  iVar4 = *param_1 + local_8 * 0xc;
  param_2 = (int *)(iVar1 - local_8);
  if ((int)param_2 < 1) {
    param_1[1] = iVar1;
    return;
  }
  puVar5 = (undefined4 *)(iVar4 + 4);
  iVar4 = (int)piVar3 - iVar4;
  do {
    if (puVar5 != (undefined4 *)&DAT_00000004) {
      if (*piVar3 != 0) {
        FUN_01006000();
      }
      puVar5[-1] = *piVar3;
      *puVar5 = *(undefined4 *)(iVar4 + (int)puVar5);
      *(char *)(puVar5 + 1) = (char)piVar3[2];
    }
    puVar5 = puVar5 + 3;
    piVar3 = piVar3 + 3;
    param_2 = (int *)((int)param_2 + -1);
  } while (param_2 != (int *)0x0);
  param_1[1] = iVar1;
  return;
}

// 01068650  FUN_01068650  size=106  [run]
void __thiscall FUN_01068650(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + iVar2 * 0xc);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      piVar1 = piVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010686C0  FUN_010686c0  size=105  [run]
void __fastcall FUN_010686c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + iVar2 * 0xc);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      piVar1 = piVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01068730  FUN_01068730  size=105  [run]
void __fastcall FUN_01068730(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    piVar1 = (int *)(*param_1 + iVar2 * 0xc);
    do {
      if (*piVar1 != 0) {
        FUN_010060a0();
      }
      *piVar1 = 0;
      piVar1 = piVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010687A0  hkMultipleVertexBuffer::vf10  size=12  [run]
bool __fastcall hkMultipleVertexBuffer::vf10(int param_1)

{
  return *(char *)(param_1 + 0x141) != '\0';
}

// 010687B0  hkMultipleVertexBuffer::vf14  size=19  [run]
void __fastcall hkMultipleVertexBuffer::vf14(int param_1)

{
  FUN_0106e6a0(param_1 + 8);
  return;
}

// 010687D0  hkMultipleVertexBuffer::vf18  size=7  [run]
undefined4 __fastcall hkMultipleVertexBuffer::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x134);
}

// 010687E0  hkMultipleVertexBuffer::vf08  size=6  [run]
undefined * hkMultipleVertexBuffer::vf08(void)

{
  return &DAT_0209a718;
}

// 010687F0  FUN_010687f0  size=38  [run]
void FUN_010687f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01068820  hkBaseObject::hkBaseObject_170  size=294  [run]
void __fastcall hkBaseObject::hkBaseObject_170(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = param_1[0x4b] + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(param_1[0x4a] + iVar3 * 0xc);
    do {
      if (*piVar2 != 0) {
        FUN_010060a0();
      }
      *piVar2 = 0;
      piVar2 = piVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  param_1[0x4b] = 0;
  if ((param_1[0x4c] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x4a],(param_1[0x4c] & 0x3fffffff) * 0xc);
  }
  param_1[0x4a] = 0;
  param_1[0x4c] = 0x80000000;
  param_1[0x48] = 0;
  if ((param_1[0x49] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x47],(param_1[0x49] & 0x3fffffff) * 2);
  }
  param_1[0x47] = 0;
  param_1[0x49] = 0x80000000;
  if (param_1[0x46] != 0) {
    FUN_010060a0();
  }
  param_1[0x46] = 0;
  param_1[0x44] = 0;
  uVar1 = param_1[0x45];
  if ((uVar1 & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x43],uVar1 * 8 - (uVar1 & 0x3fffffff));
  }
  param_1[0x45] = 0x80000000;
  param_1[0x43] = 0;
  *param_1 = vftable;
  return;
}

// 01068950  hkMultipleVertexBuffer::vf00  size=52  [run]
int __thiscall hkMultipleVertexBuffer::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_170();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 010689C0  FUN_010689c0  size=79  [run]
void __thiscall FUN_010689c0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (0 < param_4) {
    puVar4 = (undefined4 *)(param_2 * 0x40 + *(int *)(param_1 + 8));
    param_4 = param_4 * 4;
    if (0 < param_4) {
      puVar5 = (undefined4 *)(param_3 + 8);
      do {
        uVar1 = puVar5[-1];
        uVar2 = *puVar5;
        uVar3 = puVar5[1];
        *puVar4 = puVar5[-2];
        puVar4[1] = uVar1;
        puVar4[2] = uVar2;
        puVar4[3] = uVar3;
        puVar4 = puVar4 + 4;
        puVar5 = puVar5 + 4;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  return;
}

// 01068A10  FUN_01068a10  size=79  [run]
void __thiscall FUN_01068a10(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (0 < param_4) {
    puVar4 = (undefined4 *)(param_2 * 0x40 + *(int *)(param_1 + 8));
    param_4 = param_4 * 4;
    if (0 < param_4) {
      puVar5 = (undefined4 *)(param_3 + 8);
      do {
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        puVar5[-2] = *puVar4;
        puVar5[-1] = uVar1;
        *puVar5 = uVar2;
        puVar5[1] = uVar3;
        puVar5 = puVar5 + 4;
        puVar4 = puVar4 + 4;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  return;
}

// 01068F90  FUN_01068f90  size=157  [run]
void __thiscall FUN_01068f90(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (*(int *)(param_1 + 0x18) < 1) {
    if (0 < param_4) {
      puVar4 = (undefined4 *)(param_3 + 0x20);
      do {
        puVar4[-8] = 0x3f800000;
        puVar4[-7] = 0;
        puVar4[-6] = 0;
        puVar4[-5] = 0;
        puVar4[-4] = 0;
        puVar4[-3] = 0x3f800000;
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0x3f800000;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0x3f800000;
        puVar4 = puVar4 + 0x10;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  else if (0 < param_4) {
    puVar4 = (undefined4 *)(param_2 * 0x40 + *(int *)(param_1 + 0x14));
    param_4 = param_4 * 4;
    if (0 < param_4) {
      puVar5 = (undefined4 *)(param_3 + 8);
      do {
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        puVar5[-2] = *puVar4;
        puVar5[-1] = uVar1;
        *puVar5 = uVar2;
        puVar5[1] = uVar3;
        puVar5 = puVar5 + 4;
        puVar4 = puVar4 + 4;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  return;
}

// 01069850  hkIndexedTransformSet::hkIndexedTransformSet  size=11  [run]
void __fastcall hkIndexedTransformSet::hkIndexedTransformSet(undefined4 *param_1)

{
  *param_1 = vftable;
  return;
}

// 01069860  hkIndexedTransformSet::hkIndexedTransformSet_2  size=919  [run]
undefined4 * __thiscall
hkIndexedTransformSet::hkIndexedTransformSet_2(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint local_c;
  
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x80000000;
  piVar1 = param_1 + 2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x80000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x80000000;
  uVar2 = param_2[4];
  if ((int)(param_1[4] & 0x3fffffff) < (int)uVar2) {
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,uVar2,0x40);
  }
  param_1[3] = uVar2;
  puVar7 = (undefined4 *)param_2[1];
  if (puVar7 == (undefined4 *)0x0) {
    if (0 < (int)uVar2) {
      iVar9 = 0;
      local_c = uVar2;
      do {
        puVar7 = (undefined4 *)(*piVar1 + iVar9);
        *puVar7 = 0x3f800000;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0x3f800000;
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[8] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0x3f800000;
        puVar7[0xb] = 0;
        iVar9 = iVar9 + 0x40;
        local_c = local_c - 1;
        puVar7[0xc] = 0;
        puVar7[0xd] = 0;
        puVar7[0xe] = 0;
        puVar7[0xf] = 0x3f800000;
      } while (local_c != 0);
    }
  }
  else {
    puVar11 = (undefined4 *)*piVar1;
    uVar12 = (uVar2 & 0x3ffffff) << 2;
    uVar6 = uVar2 & 0x3ffffff;
    while (uVar6 != 0) {
      uVar3 = puVar7[1];
      uVar4 = puVar7[2];
      uVar5 = puVar7[3];
      *puVar11 = *puVar7;
      puVar11[1] = uVar3;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar11 = puVar11 + 4;
      puVar7 = puVar7 + 4;
      uVar12 = uVar12 - 1;
      uVar6 = uVar12;
    }
  }
  if (*param_2 != 0) {
    if ((int)(param_1[7] & 0x3fffffff) < (int)uVar2) {
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 5,uVar2,0x40);
    }
    uVar12 = (uVar2 & 0x3ffffff) << 2;
    param_1[6] = uVar2;
    puVar7 = (undefined4 *)*param_2;
    puVar11 = (undefined4 *)param_1[5];
    uVar6 = uVar2 & 0x3ffffff;
    while (uVar6 != 0) {
      uVar3 = puVar7[2];
      uVar4 = puVar7[1];
      uVar5 = puVar7[3];
      *puVar11 = *puVar7;
      puVar11[2] = uVar3;
      puVar11[1] = uVar4;
      puVar11[3] = uVar5;
      puVar11 = puVar11 + 4;
      puVar7 = puVar7 + 4;
      uVar12 = uVar12 - 1;
      uVar6 = uVar12;
    }
  }
  *(char *)(param_1 + 0x11) = (char)param_2[5];
  if (param_2[2] != 0) {
    if ((int)(param_1[10] & 0x3fffffff) < (int)uVar2) {
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 8,uVar2,2);
    }
    param_1[9] = uVar2;
    FUN_01015e80(param_1[8],param_2[2],uVar2 * 2);
  }
  if (param_2[3] != 0) {
    if ((int)(param_1[0xd] & 0x3fffffff) < (int)uVar2) {
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0xb,uVar2,4);
    }
    iVar9 = param_1[0xc] - uVar2;
    while (iVar9 = iVar9 + -1, -1 < iVar9) {
      FUN_01006770();
    }
    iVar8 = uVar2 - param_1[0xc];
    iVar9 = param_1[0xb] + param_1[0xc] * 4;
    if (0 < iVar8) {
      do {
        if (iVar9 != 0) {
          FUN_010065a0();
        }
        iVar9 = iVar9 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar9 = 0;
    param_1[0xc] = uVar2;
    if (0 < (int)uVar2) {
      do {
        FUN_010067a0(param_2[3] + iVar9 * 4);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar2);
    }
  }
  if (param_2[6] != 0) {
    if ((int)(param_1[0x10] & 0x3fffffff) < param_2[7]) {
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0xe,param_2[7],0xc);
    }
    iVar9 = param_2[7];
    iVar8 = (param_1[0xf] - iVar9) + -1;
    if (-1 < iVar8) {
      puVar10 = (uint *)(param_1[0xe] + iVar9 * 0xc + 8 + iVar8 * 0xc);
      do {
        puVar10[-1] = 0;
        if (-1 < (int)*puVar10) {
          (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar10[-2],(*puVar10 & 0x3fffffff) * 2);
        }
        puVar10[-2] = 0;
        *puVar10 = 0x80000000;
        puVar10 = puVar10 + -3;
        iVar8 = iVar8 + -1;
      } while (-1 < iVar8);
    }
    iVar8 = iVar9 - param_1[0xf];
    puVar7 = (undefined4 *)(param_1[0xe] + param_1[0xf] * 0xc);
    if (0 < iVar8) {
      do {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0x80000000;
        }
        puVar7 = puVar7 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = 0;
    param_1[0xf] = iVar9;
    if (0 < param_2[7]) {
      iVar9 = 0;
      do {
        FUN_0106a3b0(param_2[6] + iVar9);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 0xc;
      } while (iVar8 < param_2[7]);
      return param_1;
    }
  }
  return param_1;
}

// 01069C60  FUN_01069c60  size=15  [run]
int __thiscall FUN_01069c60(int *param_1,int param_2)

{
  return param_2 * 0x40 + *param_1;
}

// 01069CD0  FUN_01069cd0  size=15  [run]
int __thiscall FUN_01069cd0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01069D10  FUN_01069d10  size=18  [run]
int __thiscall FUN_01069d10(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 01069D50  FUN_01069d50  size=52  [run]
undefined4 __thiscall FUN_01069d50(int param_1,undefined4 param_2,int param_3)

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

// 01069DC0  FUN_01069dc0  size=37  [run]
void FUN_01069dc0(int param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        FUN_010065a0();
      }
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01069E00  FUN_01069e00  size=35  [run]
void FUN_01069e00(undefined2 *param_1,int param_2,int param_3)

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

// 01069E30  FUN_01069e30  size=44  [run]
undefined4 __thiscall FUN_01069e30(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 2);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)param_2 / 2;
  return uVar2;
}

// 01069E70  FUN_01069e70  size=25  [run]
void __thiscall FUN_01069e70(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 6);
  return;
}

// 01069E90  FUN_01069e90  size=26  [run]
void __thiscall FUN_01069e90(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01069EB0  FUN_01069eb0  size=29  [run]
void __thiscall FUN_01069eb0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 01069ED0  FUN_01069ed0  size=76  [run]
void FUN_01069ed0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (0 < param_3) {
    puVar5 = (undefined4 *)(param_2 + 0xc);
    puVar4 = (undefined4 *)(param_1 + 8);
    do {
      uVar1 = puVar5[-2];
      uVar2 = *(undefined4 *)((param_2 - param_1) + (int)puVar4);
      uVar3 = *puVar5;
      puVar4[-2] = puVar5[-3];
      puVar4[-1] = uVar1;
      *puVar4 = uVar2;
      puVar4[1] = uVar3;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 01069FD0  FUN_01069fd0  size=45  [run]
undefined4 __thiscall FUN_01069fd0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,2);
    return uVar1;
  }
  return 0;
}

// 0106A000  FUN_0106a000  size=13  [run]
void __thiscall FUN_0106a000(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 0106A010  FUN_0106a010  size=45  [run]
undefined4 __thiscall FUN_0106a010(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,0x40);
    return uVar1;
  }
  return 0;
}

// 0106A040  FUN_0106a040  size=55  [run]
void __thiscall FUN_0106a040(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x40);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 0106A080  FUN_0106a080  size=13  [run]
void __thiscall FUN_0106a080(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 0106A090  FUN_0106a090  size=45  [run]
undefined4 __thiscall FUN_0106a090(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,4);
    return uVar1;
  }
  return 0;
}

// 0106A0C0  FUN_0106a0c0  size=45  [run]
undefined4 __thiscall FUN_0106a0c0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_3) {
    uVar1 = FUN_0100a210(param_2,param_1,param_3,0xc);
    return uVar1;
  }
  return 0;
}

// 0106A0F0  FUN_0106a0f0  size=120  [run]
undefined4 * __thiscall FUN_0106a0f0(undefined4 *param_1,int *param_2,int *param_3)

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

// 0106A170  FUN_0106a170  size=60  [run]
void __thiscall FUN_0106a170(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106A1E0  FUN_0106a1e0  size=46  [run]
undefined4 __thiscall FUN_0106a1e0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,2);
    return uVar1;
  }
  return 0;
}

// 0106A210  FUN_0106a210  size=46  [run]
undefined4 __thiscall FUN_0106a210(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,0x40);
    return uVar1;
  }
  return 0;
}

// 0106A240  FUN_0106a240  size=56  [run]
void __thiscall FUN_0106a240(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x40);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 0106A280  FUN_0106a280  size=46  [run]
undefined4 __thiscall FUN_0106a280(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,4);
    return uVar1;
  }
  return 0;
}

// 0106A2B0  FUN_0106a2b0  size=46  [run]
undefined4 __thiscall FUN_0106a2b0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((int)(*(uint *)(param_1 + 8) & 0x3fffffff) < param_2) {
    uVar1 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,param_2,0xc);
    return uVar1;
  }
  return 0;
}

// 0106A2E0  FUN_0106a2e0  size=130  [run]
undefined4 * __thiscall FUN_0106a2e0(undefined4 *param_1,int *param_2)

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

// 0106A370  FUN_0106a370  size=60  [run]
void __fastcall FUN_0106a370(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106A3B0  FUN_0106a3b0  size=130  [run]
undefined4 * __thiscall FUN_0106a3b0(undefined4 *param_1,int *param_2)

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

// 0106A440  FUN_0106a440  size=60  [run]
void __fastcall FUN_0106a440(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106A480  FUN_0106a480  size=34  [run]
void FUN_0106a480(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_01006770();
  }
  return;
}

// 0106A4B0  FUN_0106a4b0  size=40  [run]
undefined4 __fastcall FUN_0106a4b0(undefined4 *param_1)

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

// 0106A500  FUN_0106a500  size=93  [run]
void __thiscall FUN_0106a500(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1] - param_2;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    FUN_01006770();
  }
  iVar1 = param_2 - param_1[1];
  iVar2 = *param_1 + param_1[1] * 4;
  if (0 < iVar1) {
    do {
      if (iVar2 != 0) {
        FUN_010065a0();
      }
      iVar2 = iVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 0106A560  FUN_0106a560  size=90  [run]
void __thiscall FUN_0106a560(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106A5C0  FUN_0106a5c0  size=46  [run]
void FUN_0106a5c0(undefined4 *param_1,int param_2)

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

// 0106A5F0  FUN_0106a5f0  size=90  [run]
void __fastcall FUN_0106a5f0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106A650  FUN_0106a650  size=90  [run]
void FUN_0106a650(int param_1,int param_2)

{
  uint *puVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    puVar1 = (uint *)(param_1 + 8 + param_2 * 0xc);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar1[-2],(*puVar1 & 0x3fffffff) * 2);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + -3;
    } while (-1 < param_2);
  }
  return;
}

// 0106A6B0  FUN_0106a6b0  size=108  [run]
void __fastcall FUN_0106a6b0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar1[-2],(*puVar1 & 0x3fffffff) * 2);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -3;
    } while (-1 < iVar2);
    param_1[1] = 0;
    return;
  }
  param_1[1] = 0;
  return;
}

// 0106A720  FUN_0106a720  size=90  [run]
void __fastcall FUN_0106a720(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106A780  FUN_0106a780  size=164  [run]
void __thiscall FUN_0106a780(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = (param_1[1] - param_2) + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*param_1 + param_2 * 0xc + 8 + iVar3 * 0xc);
    do {
      puVar2[-1] = 0;
      if (-1 < (int)*puVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar2[-2],(*puVar2 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -3;
    } while (-1 < iVar3);
  }
  iVar3 = param_2 - param_1[1];
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  if (iVar3 < 1) {
    param_1[1] = param_2;
    return;
  }
  do {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0x80000000;
    }
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[1] = param_2;
  return;
}

// 0106A830  FUN_0106a830  size=145  [run]
void __thiscall FUN_0106a830(int *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = param_1[1] + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(*param_1 + 8 + iVar2 * 0xc);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar1[-2],(*puVar1 & 0x3fffffff) * 2);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      puVar1 = puVar1 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  param_1[1] = 0;
  if (-1 < param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0xc);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 0106A9F0  FUN_0106a9f0  size=38  [run]
void FUN_0106a9f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0106AA20  hkBaseObject::hkBaseObject_156  size=378  [run]
void __fastcall hkBaseObject::hkBaseObject_156(undefined4 *param_1)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = param_1[0xf] + -1;
  if (-1 < iVar1) {
    puVar2 = (uint *)(param_1[0xe] + 8 + iVar1 * 0xc);
    do {
      puVar2[-1] = 0;
      if (-1 < (int)*puVar2) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(puVar2[-2],(*puVar2 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + -3;
    } while (-1 < iVar1);
  }
  param_1[0xf] = 0;
  if (-1 < (int)param_1[0x10]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xe],(param_1[0x10] & 0x3fffffff) * 0xc);
  }
  param_1[0xe] = 0;
  param_1[0x10] = 0x80000000;
  iVar1 = param_1[0xc];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_01006770();
  }
  param_1[0xc] = 0;
  if (-1 < (int)param_1[0xd]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0xb],param_1[0xd] * 4);
  }
  param_1[0xb] = 0;
  param_1[0xd] = 0x80000000;
  param_1[9] = 0;
  if (-1 < (int)param_1[10]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[8],(param_1[10] & 0x3fffffff) * 2);
  }
  param_1[8] = 0;
  param_1[10] = 0x80000000;
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],param_1[7] << 6);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 6);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0106ABA0  hkIndexedTransformSet::vf00  size=52  [run]
int __thiscall hkIndexedTransformSet::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_156();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0106ABE0  hkSkinnedRefMeshShape::vf0C  size=3  [run]
undefined4 hkSkinnedRefMeshShape::vf0C(void)

{
  return 0;
}

// 0106ABF0  hkSkinnedRefMeshShape::vf10  size=3  [run]
void hkSkinnedRefMeshShape::vf10(void)

{
  return;
}

// 0106AC00  hkSkinnedRefMeshShape::vf14  size=3  [run]
void hkSkinnedRefMeshShape::vf14(void)

{
  return;
}

// 0106AC10  hkSkinnedRefMeshShape::vf1C  size=12  [run]
void hkSkinnedRefMeshShape::vf1C(void)

{
  FUN_01006780();
  return;
}

// 0106AC20  hkSkinnedRefMeshShape::vf08  size=6  [run]
undefined * hkSkinnedRefMeshShape::vf08(void)

{
  return &DAT_0209a7d8;
}

// 0106AC30  hkSkinnedRefMeshShape::vf18  size=7  [run]
uint __fastcall hkSkinnedRefMeshShape::vf18(int param_1)

{
  return *(uint *)(param_1 + 0x24) & 0xfffffffe;
}

// 0106AC40  hkSkinnedRefMeshShape::hkSkinnedRefMeshShape_2  size=140  [run]
undefined4 * __thiscall
hkSkinnedRefMeshShape::hkSkinnedRefMeshShape_2
          (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  if (param_2 != 0) {
    FUN_01006000();
  }
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x80000000;
  FUN_010066e0(0);
  FUN_0106b2d0(&PTR_vftable_018e9b94,param_3,param_5);
  FUN_0106b520(&PTR_vftable_018e9b94,param_4,param_5);
  return param_1;
}

// 0106ACD0  hkSkinnedRefMeshShape::hkSkinnedRefMeshShape_3  size=83  [run]
undefined4 * __thiscall
hkSkinnedRefMeshShape::hkSkinnedRefMeshShape_3(undefined4 *param_1,int param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  if (param_2 != 0) {
    FUN_01006000();
  }
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0x80000000;
  FUN_010066e0(0);
  return param_1;
}

// 0106AD30  hkSkinnedRefMeshShape::hkSkinnedRefMeshShape  size=31  [run]
undefined4 * __thiscall
hkSkinnedRefMeshShape::hkSkinnedRefMeshShape(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  return param_1;
}

// 0106AD50  hkBaseObject::hkBaseObject_157  size=204  [run]
void __fastcall hkBaseObject::hkBaseObject_157(undefined4 *param_1)

{
  *param_1 = hkSkinnedRefMeshShape::vftable;
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = 0;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 2);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  FUN_01006770();
  param_1[7] = 0;
  if (-1 < (int)param_1[8]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[6],param_1[8] << 5);
  }
  param_1[6] = 0;
  param_1[8] = 0x80000000;
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],(param_1[5] & 0x3fffffff) * 2);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  if (param_1[2] != 0) {
    FUN_010060a0();
  }
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 0106AE20  FUN_0106ae20  size=353  [run]
int FUN_0106ae20(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined *puVar2;
  LPVOID pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = 0;
  iVar8 = 0;
  local_8 = 0;
  if (0 < param_3) {
    do {
      piVar1 = *(int **)(param_1 + local_8 * 4);
      puVar2 = (undefined *)(**(code **)(*piVar1 + 8))();
      if ((puVar2 != &DAT_0209a7d8) || ((iVar8 != 0 && (iVar8 != piVar1[2])))) {
        return 0;
      }
      iVar6 = iVar6 + piVar1[4];
      iVar8 = piVar1[2];
      local_8 = local_8 + 1;
    } while (local_8 < param_3);
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  iVar4 = (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 4))(0x28);
  *(undefined2 *)(iVar4 + 4) = 0x28;
  iVar8 = hkSkinnedRefMeshShape::hkSkinnedRefMeshShape_3(iVar8);
  uVar5 = *(uint *)(iVar8 + 0x14) & 0x3fffffff;
  if ((int)uVar5 < iVar6) {
    iVar4 = uVar5 * 2;
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,iVar8 + 0xc,iVar4,2);
  }
  *(int *)(iVar8 + 0x10) = iVar6;
  uVar5 = *(uint *)(iVar8 + 0x20) & 0x3fffffff;
  if ((int)uVar5 < iVar6) {
    iVar4 = uVar5 * 2;
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,iVar8 + 0x18,iVar4,0x20);
  }
  *(int *)(iVar8 + 0x1c) = iVar6;
  local_18 = 0;
  local_8 = 0;
  if (0 < param_3) {
    local_10 = param_2;
    do {
      iVar6 = *(int *)(param_1 + local_18 * 4);
      iVar4 = *(int *)(iVar6 + 0x10);
      iVar7 = 0;
      if (0 < iVar4) {
        local_c = 0;
        do {
          *(undefined2 *)(*(int *)(iVar8 + 0xc) + local_8 * 2) =
               *(undefined2 *)(*(int *)(iVar6 + 0xc) + iVar7 * 2);
          FUN_0143f2a0(local_10,*(int *)(iVar6 + 0x18) + local_c);
          local_c = local_c + 0x20;
          local_8 = local_8 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar4);
      }
      local_10 = local_10 + 0x20;
      local_18 = local_18 + 1;
    } while (local_18 < param_3);
  }
  return iVar8;
}

// 0106AFA0  FUN_0106afa0  size=31  [run]
int * __thiscall FUN_0106afa0(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 0106AFD0  FUN_0106afd0  size=22  [run]
void __fastcall FUN_0106afd0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 0106AFF0  FUN_0106aff0  size=40  [run]
void __thiscall FUN_0106aff0(int *param_1,int param_2)

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

// 0106B020  FUN_0106b020  size=15  [run]
int __thiscall FUN_0106b020(int *param_1,int param_2)

{
  return *param_1 + param_2 * 2;
}

// 0106B030  FUN_0106b030  size=15  [run]
int __thiscall FUN_0106b030(int *param_1,int param_2)

{
  return *param_1 + param_2 * 2;
}

// 0106B070  FUN_0106b070  size=15  [run]
int __thiscall FUN_0106b070(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 0106B080  FUN_0106b080  size=15  [run]
int __thiscall FUN_0106b080(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 0106B0A0  FUN_0106b0a0  size=52  [run]
undefined4 __thiscall FUN_0106b0a0(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,2);
    return uVar3;
  }
  return 0;
}

// 0106B0E0  FUN_0106b0e0  size=35  [run]
void FUN_0106b0e0(undefined2 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      *param_1 = *(undefined2 *)(param_3 + (int)param_1);
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0106B120  FUN_0106b120  size=52  [run]
undefined4 __thiscall FUN_0106b120(int param_1,undefined4 param_2,int param_3)

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

// 0106B180  FUN_0106b180  size=25  [run]
void __thiscall FUN_0106b180(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 0106B1B0  FUN_0106b1b0  size=50  [run]
void __thiscall FUN_0106b1b0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}

// 0106B210  hkMeshShape::vf18  size=3  [run]
undefined4 hkMeshShape::vf18(void)

{
  return 0;
}

// 0106B220  hkMeshShape::vf1C  size=3  [run]
void hkMeshShape::vf1C(void)

{
  return;
}

// 0106B290  FUN_0106b290  size=55  [run]
void __thiscall FUN_0106b290(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,2);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 0106B2D0  FUN_0106b2d0  size=96  [run]
void __thiscall FUN_0106b2d0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  
  iVar3 = param_1[1] + param_4;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar3) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= iVar3) {
      iVar1 = iVar3;
    }
    FUN_0100a210(param_2,param_1,iVar1,2);
  }
  puVar2 = (undefined2 *)(*param_1 + param_1[1] * 2);
  if (0 < param_4) {
    param_3 = param_3 - (int)puVar2;
    do {
      *puVar2 = *(undefined2 *)(param_3 + (int)puVar2);
      puVar2 = puVar2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  param_1[1] = iVar3;
  return;
}

// 0106B340  FUN_0106b340  size=60  [run]
void __thiscall FUN_0106b340(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106B390  FUN_0106b390  size=72  [run]
void FUN_0106b390(undefined8 *param_1,int param_2,int param_3)

{
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *(undefined8 *)(param_3 + (int)param_1);
        param_1[1] = *(undefined8 *)(param_3 + 8 + (int)param_1);
        param_1[2] = *(undefined8 *)(param_3 + 0x10 + (int)param_1);
        param_1[3] = *(undefined8 *)(param_3 + 0x18 + (int)param_1);
      }
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0106B3E0  FUN_0106b3e0  size=38  [run]
void FUN_0106b3e0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0106B410  hkMeshShape::vf00  size=53  [run]
undefined4 * __thiscall hkMeshShape::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0106B450  FUN_0106b450  size=37  [run]
void FUN_0106b450(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0106B480  FUN_0106b480  size=56  [run]
void __thiscall FUN_0106b480(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,2);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 0106B4C0  FUN_0106b4c0  size=25  [run]
void FUN_0106b4c0(undefined4 param_1,undefined4 param_2)

{
  FUN_0106b2d0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0106B4E0  FUN_0106b4e0  size=55  [run]
void __thiscall FUN_0106b4e0(int param_1,undefined4 param_2,int param_3)

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

// 0106B520  FUN_0106b520  size=133  [run]
void __thiscall FUN_0106b520(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = param_1[1] + param_4;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar3) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= iVar3) {
      iVar1 = iVar3;
    }
    FUN_0100a210(param_2,param_1,iVar1,0x20);
  }
  puVar2 = (undefined8 *)(param_1[1] * 0x20 + *param_1);
  if (0 < param_4) {
    param_3 = param_3 - (int)puVar2;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *(undefined8 *)(param_3 + (int)puVar2);
        puVar2[1] = *(undefined8 *)(param_3 + 8 + (int)puVar2);
        puVar2[2] = *(undefined8 *)(param_3 + 0x10 + (int)puVar2);
        puVar2[3] = *(undefined8 *)(param_3 + 0x18 + (int)puVar2);
      }
      puVar2 = puVar2 + 4;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  param_1[1] = iVar3;
  return;
}

// 0106B5B0  FUN_0106b5b0  size=60  [run]
void __fastcall FUN_0106b5b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106B5F0  FUN_0106b5f0  size=56  [run]
void __thiscall FUN_0106b5f0(int param_1,int param_2)

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

// 0106B630  FUN_0106b630  size=25  [run]
void FUN_0106b630(undefined4 param_1,undefined4 param_2)

{
  FUN_0106b520(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0106B650  FUN_0106b650  size=60  [run]
void __fastcall FUN_0106b650(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106B690  FUN_0106b690  size=38  [run]
void FUN_0106b690(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0106B6C0  hkSkinnedRefMeshShape::vf00  size=52  [run]
int __thiscall hkSkinnedRefMeshShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_157();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0106B700  hkMemoryMeshVertexBuffer::vf34  size=10  [run]
void __fastcall hkMemoryMeshVertexBuffer::vf34(int param_1)

{
  *(undefined1 *)(param_1 + 0x19c) = 0;
  return;
}

// 0106B710  hkMemoryMeshVertexBuffer::vf24  size=27  [run]
void hkMemoryMeshVertexBuffer::vf24(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01070e60(param_1,param_2,param_3);
  return;
}

// 0106B730  hkMemoryMeshVertexBuffer::vf28  size=27  [run]
void hkMemoryMeshVertexBuffer::vf28(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01070e90(param_1,param_2,param_3);
  return;
}

// 0106B750  hkMemoryMeshVertexBuffer::vf2C  size=27  [run]
void hkMemoryMeshVertexBuffer::vf2C(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0106f5c0(param_1,param_2,param_3);
  return;
}

// 0106B770  hkMemoryMeshVertexBuffer::vf30  size=27  [run]
void hkMemoryMeshVertexBuffer::vf30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0106f7b0(param_1,param_2,param_3);
  return;
}

// 0106B790  FUN_0106b790  size=269  [run]
void __fastcall FUN_0106b790(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int local_14;
  int local_c;
  int *local_8;
  
  iVar3 = *(int *)(param_1 + 0x18c);
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x1a0)) {
    do {
      local_c = 0;
      if (0 < *(int *)(param_1 + 0x108)) {
        local_8 = (int *)(param_1 + 0x10c);
        pbVar6 = (byte *)(param_1 + 9);
        do {
          iVar4 = 0;
          puVar2 = (undefined1 *)(*local_8 + iVar3);
          if (*pbVar6 != 0) {
            do {
              switch(pbVar6[-1]) {
              case 3:
              case 4:
              case 9:
                uVar1 = *puVar2;
                *puVar2 = puVar2[1];
                puVar2[1] = uVar1;
                puVar2 = puVar2 + 2;
                break;
              case 5:
              case 6:
              case 7:
              case 8:
              case 10:
                uVar1 = *puVar2;
                *puVar2 = puVar2[3];
                puVar2[3] = uVar1;
                uVar1 = puVar2[1];
                puVar2[1] = puVar2[2];
                puVar2[2] = uVar1;
                puVar2 = puVar2 + 4;
                break;
              case 0xb:
                iVar5 = 4;
                do {
                  uVar1 = *puVar2;
                  *puVar2 = puVar2[3];
                  puVar2[3] = uVar1;
                  uVar1 = puVar2[1];
                  puVar2[1] = puVar2[2];
                  puVar2[2] = uVar1;
                  puVar2 = puVar2 + 4;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)(uint)*pbVar6);
          }
          local_8 = local_8 + 1;
          local_c = local_c + 1;
          pbVar6 = pbVar6 + 8;
        } while (local_c < *(int *)(param_1 + 0x108));
      }
      iVar3 = iVar3 + *(int *)(param_1 + 0x198);
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(param_1 + 0x1a0));
  }
  return;
}

// 0106B8D0  FUN_0106b8d0  size=132  [run]
uint FUN_0106b8d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = param_1;
  iVar1 = *(int *)(param_1 + 0x100);
  uVar4 = 0;
  iVar5 = 4;
  iVar3 = 0;
  param_1 = 4;
  if (0 < iVar1) {
    do {
      if (*(char *)(iVar2 + iVar3 * 8) == '\v') {
        *(uint *)(param_2 + iVar3 * 4) = uVar4;
        uVar4 = uVar4 + (uint)*(byte *)(iVar2 + 1 + iVar3 * 8) * 0x10;
        iVar5 = 0x10;
      }
      iVar3 = iVar3 + 1;
      param_1 = iVar5;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (*(char *)(iVar2 + iVar3 * 8) != '\v') {
        *(uint *)(param_2 + iVar3 * 4) = uVar4;
        uVar4 = (uint)(byte)(&DAT_017d5474)[*(byte *)(iVar2 + iVar3 * 8)] *
                (uint)*(byte *)(iVar2 + 1 + iVar3 * 8) + 3 + uVar4 & 0xfffffffc;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return param_1 + -1 + uVar4 & ~(param_1 - 1U);
}

// 0106B960  FUN_0106b960  size=155  [run]
uint FUN_0106b960(int param_1,byte param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x100);
  uVar4 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    pbVar2 = (byte *)(param_1 + 3);
    do {
      if ((pbVar2[-1] == param_2) && (*pbVar2 == param_3)) {
        return uVar4;
      }
      if (pbVar2[-3] == 0xb) {
        uVar4 = uVar4 + (uint)pbVar2[-2] * 0x10;
      }
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 8;
    } while (iVar3 < iVar1);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    pbVar2 = (byte *)(param_1 + 3);
    do {
      if ((pbVar2[-1] == param_2) && (*pbVar2 == param_3)) {
        return uVar4;
      }
      if (pbVar2[-3] != 0xb) {
        uVar4 = (uint)(byte)(&DAT_017d5474)[pbVar2[-3]] * (uint)pbVar2[-2] + 3 + uVar4 & 0xfffffffc;
      }
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 8;
    } while (iVar3 < iVar1);
  }
  return 0xffffffff;
}

// 0106BA00  FUN_0106ba00  size=133  [run]
void __thiscall FUN_0106ba00(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  if (param_3 < 0) {
    param_3 = param_1[0x68] - param_2;
  }
  iVar1 = param_1[0x66];
  iVar2 = param_1[99];
  *(undefined1 *)(param_4 + 0x208) = 1;
  *(int *)(param_4 + 0x204) = param_3;
  param_3 = param_1[0x42];
  *(int *)(param_4 + 0x200) = param_3;
  if (0 < param_3) {
    puVar4 = (undefined4 *)(param_4 + 8);
    piVar5 = param_1 + 0x43;
    puVar3 = param_1;
    do {
      puVar4[-2] = *piVar5 + iVar1 * param_2 + iVar2;
      puVar4[-1] = param_1[0x66];
      *puVar4 = puVar3[2];
      puVar4[1] = puVar3[3];
      piVar5 = piVar5 + 1;
      puVar4 = puVar4 + 4;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return;
}

// 0106BA90  hkMemoryMeshVertexBuffer::vf20  size=162  [run]
undefined4 __thiscall
hkMemoryMeshVertexBuffer::vf20(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (*(char *)(param_1 + 0x19c) != '\0') {
    return 0;
  }
  iVar4 = param_2[1];
  if (iVar4 < 0) {
    iVar4 = *(int *)(param_1 + 0x1a0) - *param_2;
  }
  iVar1 = *(int *)(param_1 + 0x198);
  iVar2 = *param_2;
  iVar3 = *(int *)(param_1 + 0x18c);
  *(undefined1 *)(param_4 + 0x208) = 1;
  *(int *)(param_4 + 0x204) = iVar4;
  param_2 = (int *)*param_3;
  *(int **)(param_4 + 0x200) = param_2;
  if (0 < (int)param_2) {
    puVar5 = (undefined4 *)(param_4 + 8);
    do {
      param_3 = param_3 + 1;
      iVar4 = *param_3;
      puVar5[-2] = *(int *)(param_1 + 0x10c + iVar4 * 4) + iVar1 * iVar2 + iVar3;
      puVar5[-1] = *(undefined4 *)(param_1 + 0x198);
      *puVar5 = *(undefined4 *)(param_1 + 8 + iVar4 * 8);
      puVar5[1] = *(undefined4 *)(param_1 + 0xc + iVar4 * 8);
      puVar5 = puVar5 + 4;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
  }
  *(undefined1 *)(param_1 + 0x19c) = 1;
  return 1;
}

// 0106BB40  FUN_0106bb40  size=53  [run]
void __thiscall FUN_0106bb40(int param_1,int param_2,int *param_3)

{
  *param_3 = *(int *)(param_1 + 0x10c + param_2 * 4) + *(int *)(param_1 + 0x18c);
  param_3[1] = *(int *)(param_1 + 0x198);
  param_3[2] = *(int *)(param_1 + 8 + param_2 * 8);
  param_3[3] = *(int *)(param_1 + 0xc + param_2 * 8);
  return;
}

// 0106BB80  FUN_0106bb80  size=75  [run]
void __thiscall FUN_0106bb80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0106e6a0(param_2);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  uVar1 = FUN_0106b8d0(param_2,param_1 + 0x10c);
  *(undefined4 *)(param_1 + 0x198) = uVar1;
  iVar2 = FUN_0106e8c0();
  *(bool *)(param_1 + 0x1a5) = iVar2 == 0;
  return;
}

// 0106BBD0  hkMemoryMeshVertexBuffer::vf1C  size=52  [run]
undefined4 __thiscall
hkMemoryMeshVertexBuffer::vf1C(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int extraout_ECX;
  
  if (*(char *)(param_1 + 0x19c) != '\0') {
    return 0;
  }
  FUN_0106ba00(*param_2,param_2[1],param_3);
  *(undefined1 *)(extraout_ECX + 0x19c) = 1;
  return 1;
}

// 0106BC10  FUN_0106bc10  size=36  [run]
void __thiscall FUN_0106bc10(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *(undefined4 *)(param_1 + 0x18c) = param_2;
  *(uint *)(param_1 + 400) = param_4;
  *(uint *)(param_1 + 0x194) = param_4 | 0x80000000;
  return;
}

// 0106BC40  hkMemoryMeshVertexBuffer::hkMemoryMeshVertexBuffer  size=85  [run]
undefined4 * __fastcall hkMemoryMeshVertexBuffer::hkMemoryMeshVertexBuffer(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_0106e670();
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0x80000000;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x68] = 0;
  *(undefined1 *)((int)param_1 + 0x1a5) = 1;
  param_1[0x66] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  return param_1;
}

// 0106BCA0  hkMemoryMeshVertexBuffer::hkMemoryMeshVertexBuffer_2  size=39  [run]
undefined4 * __thiscall
hkMemoryMeshVertexBuffer::hkMemoryMeshVertexBuffer_2(undefined4 *param_1,int param_2)

{
  *param_1 = vftable;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x69) != '\0')) {
    FUN_0106b790();
  }
  return param_1;
}

// 0106BCD0  FUN_0106bcd0  size=153  [run]
void __thiscall FUN_0106bcd0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x198) * param_2;
  uVar4 = iVar3 + 0xfU & 0xfffffff0;
  uVar1 = *(uint *)(param_1 + 0x194) & 0x3fffffff;
  if ((int)uVar1 < (int)uVar4) {
    uVar1 = uVar1 * 2;
    if ((int)uVar1 <= (int)uVar4) {
      uVar1 = uVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(undefined4 *)(param_1 + 0x18c),uVar1,1);
  }
  *(uint *)(param_1 + 400) = uVar4;
  iVar5 = ((int)(iVar3 + 0xfU) >> 4) + -1;
  puVar2 = *(undefined4 **)(param_1 + 0x18c);
  if (-1 < iVar5) {
    do {
      iVar5 = iVar5 + -1;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2 = puVar2 + 4;
    } while (-1 < iVar5);
    *(int *)(param_1 + 400) = iVar3;
    *(int *)(param_1 + 0x1a0) = param_2;
    return;
  }
  *(int *)(param_1 + 400) = iVar3;
  *(int *)(param_1 + 0x1a0) = param_2;
  return;
}

// 0106BD70  hkBaseObject::hkBaseObject_153  size=86  [run]
void __fastcall hkBaseObject::hkBaseObject_153(undefined4 *param_1)

{
  *param_1 = hkMemoryMeshVertexBuffer::vftable;
  param_1[100] = 0;
  if (-1 < (int)param_1[0x65]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[99],param_1[0x65] & 0x3fffffff);
  }
  param_1[99] = 0;
  param_1[0x65] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0106BDD0  hkMemoryMeshVertexBuffer::~hkMemoryMeshVertexBuffer  size=96  [run]
undefined4 * __thiscall
hkMemoryMeshVertexBuffer::~hkMemoryMeshVertexBuffer
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_0106e670();
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0x80000000;
  *(undefined1 *)(param_1 + 0x67) = 0;
  FUN_0106bb80(param_2);
  FUN_0106bcd0(param_3);
  *(undefined1 *)(param_1 + 0x69) = 0;
  return param_1;
}

// 0106BE30  hkMemoryMeshVertexBuffer::vf0C  size=183  [run]
int __fastcall hkMemoryMeshVertexBuffer::vf0C(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_8;
  
  if (*(char *)(param_1 + 0x1a5) == '\0') {
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x1a8);
    *(undefined2 *)(iVar5 + 4) = 0x1a8;
    iVar5 = ~hkMemoryMeshVertexBuffer(param_1 + 8,*(undefined4 *)(param_1 + 0x1a0));
    iVar8 = *(int *)(param_1 + 0x198) * *(int *)(param_1 + 0x1a0);
    puVar7 = *(undefined4 **)(param_1 + 0x18c);
    puVar6 = *(undefined4 **)(iVar5 + 0x18c);
    local_8 = iVar8 + 0xf >> 4;
    if (0 < local_8) {
      do {
        uVar1 = puVar7[3];
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        *puVar6 = *puVar7;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar1;
        puVar6 = puVar6 + 4;
        puVar7 = puVar7 + 4;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    *(int *)(iVar5 + 400) = iVar8;
    return iVar5;
  }
  FUN_01006000();
  return param_1;
}

// 0106BEF0  FUN_0106bef0  size=20  [run]
void __thiscall FUN_0106bef0(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 0106BF10  FUN_0106bf10  size=21  [run]
void FUN_0106bf10(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

// 0106BF30  FUN_0106bf30  size=24  [run]
void __thiscall
FUN_0106bf30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0106BF50  FUN_0106bf50  size=49  [run]
void FUN_0106bf50(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  puVar2 = param_1 + param_2 + -1;
  param_2 = param_2 / 2;
  if (0 < param_2) {
    do {
      uVar1 = *param_1;
      *param_1 = *puVar2;
      *puVar2 = uVar1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0106BF90  FUN_0106bf90  size=24  [run]
void __thiscall
FUN_0106bf90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0106BFB0  FUN_0106bfb0  size=29  [run]
void __thiscall FUN_0106bfb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0106BFD0  hkMemoryMeshVertexBuffer::vf14  size=19  [run]
void __fastcall hkMemoryMeshVertexBuffer::vf14(int param_1)

{
  FUN_0106e6a0(param_1 + 8);
  return;
}

// 0106BFF0  hkMemoryMeshVertexBuffer::vf18  size=7  [run]
undefined4 __fastcall hkMemoryMeshVertexBuffer::vf18(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1a0);
}

// 0106C000  hkMemoryMeshVertexBuffer::vf10  size=12  [run]
bool __fastcall hkMemoryMeshVertexBuffer::vf10(int param_1)

{
  return *(char *)(param_1 + 0x1a5) != '\0';
}

// 0106C010  FUN_0106c010  size=38  [run]
void FUN_0106c010(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0106C040  hkMemoryMeshVertexBuffer::vf00  size=52  [run]
int __thiscall hkMemoryMeshVertexBuffer::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_153();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0106C080  hkMemoryMeshTexture::vf18  size=12  [run]
void hkMemoryMeshTexture::vf18(void)

{
  FUN_01006780();
  return;
}

// 0106C090  hkMemoryMeshTexture::vf34  size=4  [run]
undefined4 __fastcall hkMemoryMeshTexture::vf34(int param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}

// 0106C0A0  hkMemoryMeshTexture::vf38  size=13  [run]
void __thiscall hkMemoryMeshTexture::vf38(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}

// 0106C0B0  hkMemoryMeshTexture::vf0C  size=32  [run]
void __thiscall
hkMemoryMeshTexture::vf0C(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  *param_3 = *(undefined4 *)(param_1 + 0x10);
  *param_4 = (int)*(char *)(param_1 + 0x18);
  return;
}

// 0106C0D0  hkMemoryMeshTexture::vf14  size=7  [run]
uint __fastcall hkMemoryMeshTexture::vf14(int param_1)

{
  return *(uint *)(param_1 + 8) & 0xfffffffe;
}

// 0106C0E0  hkMemoryMeshTexture::vf1C  size=9  [run]
bool __fastcall hkMemoryMeshTexture::vf1C(int param_1)

{
  return *(char *)(param_1 + 0x19) != '\0';
}

// 0106C0F0  hkMemoryMeshTexture::vf20  size=13  [run]
void __thiscall hkMemoryMeshTexture::vf20(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x19) = param_2;
  return;
}

// 0106C100  hkMemoryMeshTexture::vf24  size=5  [run]
int __fastcall hkMemoryMeshTexture::vf24(int param_1)

{
  return (int)*(char *)(param_1 + 0x1a);
}

// 0106C110  hkMemoryMeshTexture::vf28  size=13  [run]
void __thiscall hkMemoryMeshTexture::vf28(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1a) = param_2;
  return;
}

// 0106C120  hkMemoryMeshTexture::vf2C  size=5  [run]
int __fastcall hkMemoryMeshTexture::vf2C(int param_1)

{
  return (int)*(char *)(param_1 + 0x1b);
}

// 0106C130  hkMemoryMeshTexture::vf30  size=13  [run]
void __thiscall hkMemoryMeshTexture::vf30(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1b) = param_2;
  return;
}

// 0106C140  hkMemoryMeshTexture::vf10  size=33  [run]
void __thiscall
hkMemoryMeshTexture::vf10(int param_1,undefined4 param_2,uint param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(uint *)(param_1 + 0x10) = param_3;
  *(uint *)(param_1 + 0x14) = param_3 | 0x80000000;
  *(undefined1 *)(param_1 + 0x18) = param_4;
  return;
}

// 0106C170  hkMemoryMeshTexture::hkMemoryMeshTexture  size=62  [run]
undefined4 * __fastcall hkMemoryMeshTexture::hkMemoryMeshTexture(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_010065a0();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 2;
  param_1[7] = 0xffffffff;
  return param_1;
}

// 0106C1B0  FUN_0106c1b0  size=14  [run]
void __thiscall FUN_0106c1b0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0106C1D0  FUN_0106c1d0  size=12  [run]
void __thiscall FUN_0106c1d0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0106C1E0  FUN_0106c1e0  size=14  [run]
void __thiscall FUN_0106c1e0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0106C200  FUN_0106c200  size=12  [run]
void __thiscall FUN_0106c200(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0106C210  FUN_0106c210  size=14  [run]
void __thiscall FUN_0106c210(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0106C230  FUN_0106c230  size=12  [run]
void __thiscall FUN_0106c230(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0106C260  hkMemoryMeshShape::vf14  size=3  [run]
void hkMemoryMeshShape::vf14(void)

{
  return;
}

// 0106C270  hkMemoryMeshShape::vf0C  size=4  [run]
undefined4 __fastcall hkMemoryMeshShape::vf0C(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// 0106C280  hkMemoryMeshShape::vf10  size=125  [run]
void __thiscall hkMemoryMeshShape::vf10(int param_1,int param_2,byte param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_2 * 0x20 + *(int *)(param_1 + 8));
  *param_4 = *(undefined1 *)(puVar2 + 2);
  *(undefined4 *)(param_4 + 4) = puVar2[3];
  uVar1 = FUN_01072b80(*(undefined1 *)(puVar2 + 2),puVar2[3]);
  *(undefined4 *)(param_4 + 8) = uVar1;
  *(undefined4 *)(param_4 + 0xc) = puVar2[6];
  param_4[0x14] = *(undefined1 *)(puVar2 + 4);
  *(undefined4 *)(param_4 + 0x10) = puVar2[7];
  if ((param_3 & 2) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2;
  }
  *(undefined4 *)(param_4 + 0x1c) = uVar1;
  *(undefined4 *)(param_4 + 0x18) = 0;
  if (((param_3 & 1) != 0) && (*(char *)(puVar2 + 4) != '\0')) {
    *(undefined4 *)(param_4 + 0x18) = puVar2[5];
  }
  uVar1 = puVar2[1];
  *(int *)(param_4 + 0x24) = param_2;
  *(undefined4 *)(param_4 + 0x20) = uVar1;
  return;
}

// 0106C300  hkMemoryMeshShape::hkMemoryMeshShape  size=665  [run]
undefined4 * __thiscall
hkMemoryMeshShape::hkMemoryMeshShape(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int local_14;
  int local_10;
  int local_8;
  
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  piVar1 = param_1 + 5;
  param_1[7] = 0x80000000;
  *piVar1 = 0;
  param_1[6] = 0;
  param_1[10] = 0x80000000;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_010065a0();
  FUN_01006780(0);
  local_10 = 0;
  local_8 = 0;
  iVar2 = 0;
  if (0 < param_3) {
    puVar7 = (undefined4 *)(param_2 + 0xc);
    local_14 = param_3;
    do {
      iVar2 = FUN_01072b80(*(undefined1 *)(puVar7 + -1),*puVar7);
      if (*(char *)(puVar7 + 1) == '\x01') {
        local_10 = local_10 + iVar2;
      }
      else if (*(char *)(puVar7 + 1) == '\x02') {
        local_8 = local_8 + iVar2;
      }
      puVar7 = puVar7 + 8;
      local_14 = local_14 + -1;
      iVar2 = local_10;
    } while (local_14 != 0);
  }
  if ((int)(param_1[7] & 0x3fffffff) < iVar2) {
    iVar5 = (param_1[7] & 0x3fffffff) * 2;
    if (iVar2 < iVar5) {
      iVar2 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,iVar2,2);
  }
  if ((int)(param_1[10] & 0x3fffffff) < local_8) {
    iVar2 = (param_1[10] & 0x3fffffff) * 2;
    if (local_8 < iVar2) {
      local_8 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 8,local_8,4);
  }
  if ((int)(param_1[4] & 0x3fffffff) < param_3) {
    iVar2 = (param_1[4] & 0x3fffffff) * 2;
    iVar5 = param_3;
    if (param_3 < iVar2) {
      iVar5 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 2,iVar5,0x20);
  }
  param_1[3] = param_3;
  if (param_3 < 1) {
    return param_1;
  }
  puVar6 = (undefined8 *)(param_2 + 8);
  local_14 = param_3;
  do {
    puVar8 = (undefined8 *)((int)puVar6 + param_1[2] + (-8 - param_2));
    *puVar8 = puVar6[-1];
    puVar8[1] = *puVar6;
    puVar8[2] = puVar6[1];
    puVar8[3] = puVar6[2];
    FUN_01006000();
    if (*(int *)((int)puVar8 + 4) != 0) {
      FUN_01006000();
    }
    if (*(char *)(puVar6 + 1) == '\x01') {
      iVar3 = FUN_01072b80(*(undefined1 *)puVar6,*(undefined4 *)((int)puVar6 + 4));
      iVar5 = param_1[6];
      iVar2 = iVar5 + iVar3;
      if ((int)(param_1[7] & 0x3fffffff) < iVar2) {
        iVar4 = (param_1[7] & 0x3fffffff) * 2;
        if (iVar4 <= iVar2) {
          iVar4 = iVar2;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,piVar1,iVar4,2);
      }
      param_1[6] = param_1[6] + iVar3;
      iVar2 = *piVar1 + iVar5 * 2;
LAB_0106c55d:
      FUN_01015e80(iVar2,*(undefined4 *)((int)puVar6 + 0xc),iVar3 * 2);
      *(int *)((int)puVar8 + 0x14) = iVar2;
    }
    else if (*(char *)(puVar6 + 1) == '\x02') {
      iVar3 = FUN_01072b80(*(undefined1 *)puVar6,*(undefined4 *)((int)puVar6 + 4));
      iVar5 = param_1[9];
      iVar2 = iVar5 + iVar3;
      if ((int)(param_1[10] & 0x3fffffff) < iVar2) {
        iVar4 = (param_1[10] & 0x3fffffff) * 2;
        if (iVar4 <= iVar2) {
          iVar4 = iVar2;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 8,iVar4,4);
      }
      param_1[9] = param_1[9] + iVar3;
      iVar2 = param_1[8] + iVar5 * 4;
      iVar3 = iVar3 * 2;
      goto LAB_0106c55d;
    }
    puVar6 = puVar6 + 4;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      return param_1;
    }
  } while( true );
}

// 0106C5A0  hkMemoryMeshShape::hkMemoryMeshShape_2  size=164  [run]
undefined4 * __thiscall hkMemoryMeshShape::hkMemoryMeshShape_2(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  *param_1 = vftable;
  FUN_010065b0(param_2);
  iVar4 = 0;
  if (param_2 != 0) {
    local_8 = param_1[8];
    iVar3 = param_1[5];
    local_c = 0;
    if (0 < (int)param_1[3]) {
      do {
        cVar1 = *(char *)(param_1[2] + 0x10 + iVar4);
        iVar2 = param_1[2] + iVar4;
        if (cVar1 == '\x01') {
          iVar2 = FUN_01072b80(*(undefined1 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
          *(int *)(param_1[2] + 0x14 + iVar4) = iVar3;
          iVar3 = iVar3 + iVar2 * 2;
        }
        else if (cVar1 == '\x02') {
          iVar2 = FUN_01072b80(*(undefined1 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
          *(int *)(param_1[2] + 0x14 + iVar4) = local_8;
          local_8 = local_8 + iVar2 * 4;
        }
        local_c = local_c + 1;
        iVar4 = iVar4 + 0x20;
      } while (local_c < (int)param_1[3]);
    }
    return param_1;
  }
  return param_1;
}

// 0106C650  hkBaseObject::hkBaseObject_203  size=224  [run]
void __fastcall hkBaseObject::hkBaseObject_203(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  local_8 = param_1[3];
  iVar2 = 0;
  *param_1 = hkMemoryMeshShape::vftable;
  if (0 < local_8) {
    do {
      iVar1 = param_1[2];
      FUN_010060a0();
      if (*(int *)(iVar1 + 4 + iVar2) != 0) {
        FUN_010060a0();
      }
      iVar2 = iVar2 + 0x20;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  FUN_01006770();
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
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] << 5);
  }
  param_1[4] = 0x80000000;
  param_1[2] = 0;
  *param_1 = vftable;
  return;
}

// 0106C760  FUN_0106c760  size=20  [run]
void __thiscall FUN_0106c760(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 != param_3;
  return;
}

// 0106C7D0  FUN_0106c7d0  size=15  [run]
int __thiscall FUN_0106c7d0(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 0106C7E0  FUN_0106c7e0  size=15  [run]
int __thiscall FUN_0106c7e0(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 0106C8B0  FUN_0106c8b0  size=25  [run]
void __thiscall FUN_0106c8b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 0106C8D0  FUN_0106c8d0  size=24  [run]
void __thiscall FUN_0106c8d0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 2);
  return;
}

// 0106C980  FUN_0106c980  size=60  [run]
void __thiscall FUN_0106c980(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106C9C0  FUN_0106c9c0  size=52  [run]
undefined4 __thiscall FUN_0106c9c0(int param_1,undefined4 param_2,int param_3)

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

// 0106CA10  FUN_0106ca10  size=53  [run]
undefined4 __thiscall FUN_0106ca10(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,2);
    return uVar3;
  }
  return 0;
}

// 0106CA50  FUN_0106ca50  size=53  [run]
undefined4 __thiscall FUN_0106ca50(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 0106CA90  FUN_0106ca90  size=55  [run]
void __thiscall FUN_0106ca90(int param_1,undefined4 param_2,int param_3)

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

// 0106CAD0  FUN_0106cad0  size=60  [run]
void __fastcall FUN_0106cad0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106CB10  FUN_0106cb10  size=59  [run]
void __thiscall FUN_0106cb10(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106CB50  FUN_0106cb50  size=56  [run]
void __thiscall FUN_0106cb50(int param_1,int param_2)

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

// 0106CB90  FUN_0106cb90  size=60  [run]
void __fastcall FUN_0106cb90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106CBD0  FUN_0106cbd0  size=59  [run]
void __fastcall FUN_0106cbd0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106CC10  FUN_0106cc10  size=59  [run]
void __fastcall FUN_0106cc10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 2);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106CC50  hkMemoryMeshShape::vf08  size=6  [run]
undefined * hkMemoryMeshShape::vf08(void)

{
  return &DAT_0209a8b0;
}

// 0106CC60  hkMemoryMeshShape::vf1C  size=12  [run]
void hkMemoryMeshShape::vf1C(void)

{
  FUN_01006780();
  return;
}

// 0106CC70  hkMemoryMeshShape::vf18  size=7  [run]
uint __fastcall hkMemoryMeshShape::vf18(int param_1)

{
  return *(uint *)(param_1 + 0x2c) & 0xfffffffe;
}

// 0106CC80  FUN_0106cc80  size=38  [run]
void FUN_0106cc80(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0106CCB0  hkMemoryMeshShape::vf00  size=52  [run]
int __thiscall hkMemoryMeshShape::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_203();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0106CCF0  hkMemoryMeshMaterial::vf0C  size=21  [run]
undefined4 hkMemoryMeshMaterial::vf0C(undefined4 param_1)

{
  FUN_0106e6a0(param_1);
  return 0;
}

// 0106CD10  hkMemoryMeshMaterial::vf10  size=21  [run]
undefined4 hkMemoryMeshMaterial::vf10(undefined4 param_1)

{
  FUN_01006000();
  return param_1;
}

// 0106CD30  hkMemoryMeshMaterial::vf14  size=27  [run]
bool hkMemoryMeshMaterial::vf14(int *param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)(**(code **)(*param_1 + 8))();
  return puVar1 == &DAT_0209a820;
}

// 0106CD50  hkMemoryMeshMaterial::vf1C  size=12  [run]
void hkMemoryMeshMaterial::vf1C(void)

{
  FUN_01006780();
  return;
}

// 0106CD60  hkMemoryMeshMaterial::vf20  size=7  [run]
uint __fastcall hkMemoryMeshMaterial::vf20(int param_1)

{
  return *(uint *)(param_1 + 8) & 0xfffffffe;
}

// 0106CD70  hkMemoryMeshMaterial::vf24  size=4  [run]
undefined4 __fastcall hkMemoryMeshMaterial::vf24(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// 0106CD80  hkMemoryMeshMaterial::vf30  size=47  [run]
void __thiscall
hkMemoryMeshMaterial::vf30
          (int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 *param_5)

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
  *param_3 = *(undefined4 *)(param_1 + 0x30);
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x44);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = *(undefined4 *)(param_1 + 0x4c);
  *param_4 = *(undefined4 *)(param_1 + 0x40);
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  uVar3 = *(undefined4 *)(param_1 + 0x5c);
  *param_5 = *(undefined4 *)(param_1 + 0x50);
  param_5[1] = uVar1;
  param_5[2] = uVar2;
  param_5[3] = uVar3;
  return;
}

// 0106CDB0  hkMemoryMeshMaterial::vf34  size=47  [run]
void __thiscall
hkMemoryMeshMaterial::vf34
          (int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 *param_5)

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
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0x30) = *param_3;
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 0x40) = *param_4;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x50) = *param_5;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  return;
}

// 0106CDE0  hkMemoryMeshMaterial::vf28  size=16  [run]
undefined4 __thiscall hkMemoryMeshMaterial::vf28(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 4);
}

// 0106CDF0  hkMemoryMeshMaterial::vf18  size=190  [run]
uint __thiscall hkMemoryMeshMaterial::vf18(int param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  puVar2 = (undefined *)(**(code **)(*param_2 + 8))();
  if (puVar2 == &DAT_0209a8f8) {
    uVar3 = param_2[2] & 0xfffffffe;
    uVar5 = *(uint *)(param_1 + 8) & 0xfffffffe;
    if (uVar5 == 0) {
      puVar2 = (undefined *)-(uint)(uVar3 != 0);
    }
    else {
      puVar2 = (undefined *)0x0;
      if (uVar3 == 0) goto LAB_0106ce0e;
      puVar2 = (undefined *)FUN_01015b90(uVar5,uVar3);
    }
    if ((puVar2 == (undefined *)0x0) &&
       (puVar2 = *(undefined **)(param_1 + 0x10), puVar2 == (undefined *)param_2[4])) {
      puVar2 = puVar2 + -1;
      if (-1 < (int)puVar2) {
        piVar6 = (int *)(*(int *)(param_1 + 0xc) + (int)puVar2 * 4);
        do {
          if (*piVar6 != *(int *)((param_2[3] - *(int *)(param_1 + 0xc)) + (int)piVar6))
          goto LAB_0106ce0e;
          piVar6 = piVar6 + -1;
          puVar2 = puVar2 + -1;
        } while (-1 < (int)puVar2);
      }
      auVar1._4_4_ = -(uint)(((float)param_2[0xd] == *(float *)(param_1 + 0x34) &&
                             (float)param_2[9] == *(float *)(param_1 + 0x24)) &&
                            ((float)param_2[0x15] == *(float *)(param_1 + 0x54) &&
                            (float)param_2[0x11] == *(float *)(param_1 + 0x44)));
      auVar1._0_4_ = -(uint)(((float)param_2[0xc] == *(float *)(param_1 + 0x30) &&
                             (float)param_2[8] == *(float *)(param_1 + 0x20)) &&
                            ((float)param_2[0x14] == *(float *)(param_1 + 0x50) &&
                            (float)param_2[0x10] == *(float *)(param_1 + 0x40)));
      auVar1._8_4_ = -(uint)(((float)param_2[0xe] == *(float *)(param_1 + 0x38) &&
                             (float)param_2[10] == *(float *)(param_1 + 0x28)) &&
                            ((float)param_2[0x16] == *(float *)(param_1 + 0x58) &&
                            (float)param_2[0x12] == *(float *)(param_1 + 0x48)));
      auVar1._12_4_ =
           -(uint)(((float)param_2[0xf] == *(float *)(param_1 + 0x3c) &&
                   (float)param_2[0xb] == *(float *)(param_1 + 0x2c)) &&
                  ((float)param_2[0x17] == *(float *)(param_1 + 0x5c) &&
                  (float)param_2[0x13] == *(float *)(param_1 + 0x4c)));
      iVar4 = movmskps(puVar2,auVar1);
      return CONCAT31((int3)((uint)iVar4 >> 8),iVar4 == 0xf);
    }
  }
LAB_0106ce0e:
  return (uint)puVar2 & 0xffffff00;
}

// 0106CEB0  hkMemoryMeshMaterial::vf2C  size=100  [run]
void __thiscall hkMemoryMeshMaterial::vf2C(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    FUN_01006000();
  }
  if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0xc),4);
  }
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 4);
  if (piVar1 != (int *)0x0) {
    if (param_2 != 0) {
      FUN_01006000();
    }
    *piVar1 = param_2;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  if (param_2 != 0) {
    FUN_010060a0();
  }
  return;
}

// 0106CF20  hkMemoryMeshMaterial::hkMemoryMeshMaterial  size=102  [run]
undefined4 * __thiscall
hkMemoryMeshMaterial::hkMemoryMeshMaterial(undefined4 *param_1,undefined4 param_2)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  FUN_010065a0();
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  FUN_01006780(param_2);
  param_1[8] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}

// 0106CF90  hkMemoryMeshMaterial::hkMemoryMeshMaterial_2  size=31  [run]
undefined4 * __thiscall
hkMemoryMeshMaterial::hkMemoryMeshMaterial_2(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  return param_1;
}

// 0106CFF0  FUN_0106cff0  size=15  [run]
int __thiscall FUN_0106cff0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0106D000  FUN_0106d000  size=15  [run]
int __thiscall FUN_0106d000(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0106D020  FUN_0106d020  size=31  [run]
int * __thiscall FUN_0106d020(int *param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = param_2;
  return param_1;
}

// 0106D040  FUN_0106d040  size=22  [run]
void __fastcall FUN_0106d040(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 0106D080  FUN_0106d080  size=26  [run]
void __thiscall FUN_0106d080(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0106D0A0  FUN_0106d0a0  size=11  [run]
int FUN_0106d0a0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0106D0B0  FUN_0106d0b0  size=33  [run]
int * __thiscall FUN_0106d0b0(int *param_1,int *param_2)

{
  if (*param_2 != 0) {
    FUN_01006000();
  }
  *param_1 = *param_2;
  return param_1;
}

// 0106D0E0  FUN_0106d0e0  size=22  [run]
void __thiscall FUN_0106d0e0(uint *param_1,uint *param_2,uint *param_3)

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
  *param_1 = *param_2 & *param_3;
  param_1[1] = uVar1 & uVar4;
  param_1[2] = uVar2 & uVar5;
  param_1[3] = uVar3 & uVar6;
  return;
}

// 0106D180  FUN_0106d180  size=51  [run]
void FUN_0106d180(int *param_1,int param_2,int *param_3)

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

// 0106D1C0  FUN_0106d1c0  size=39  [run]
void FUN_0106d1c0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 0106D1F0  FUN_0106d1f0  size=26  [run]
void __thiscall FUN_0106d1f0(float *param_1,int *param_2,float *param_3)

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
  *param_2 = -(uint)(*param_3 == *param_1);
  param_2[1] = -(uint)(fVar1 == fVar4);
  param_2[2] = -(uint)(fVar2 == fVar5);
  param_2[3] = -(uint)(fVar3 == fVar6);
  return;
}

// 0106D210  FUN_0106d210  size=38  [run]
void FUN_0106d210(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0106D240  hkMeshMaterial::vf00  size=53  [run]
undefined4 * __thiscall hkMeshMaterial::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0106D280  FUN_0106d280  size=76  [run]
void __thiscall FUN_0106d280(int *param_1,undefined4 param_2,int *param_3)

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

// 0106D2D0  FUN_0106d2d0  size=61  [run]
int * __thiscall FUN_0106d2d0(int *param_1,byte param_2)

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

// 0106D310  FUN_0106d310  size=77  [run]
void __thiscall FUN_0106d310(int *param_1,int *param_2)

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

// 0106D360  FUN_0106d360  size=43  [run]
void FUN_0106d360(int param_1,int param_2)

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

// 0106D3D0  FUN_0106d3d0  size=97  [run]
void __thiscall FUN_0106d3d0(int *param_1,int *param_2)

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

// 0106D440  FUN_0106d440  size=100  [run]
void __fastcall FUN_0106d440(int *param_1)

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

// 0106D4B0  FUN_0106d4b0  size=100  [run]
void __fastcall FUN_0106d4b0(int *param_1)

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

// 0106D520  hkMemoryMeshMaterial::vf08  size=6  [run]
undefined * hkMemoryMeshMaterial::vf08(void)

{
  return &DAT_0209a8f8;
}

// 0106D530  FUN_0106d530  size=38  [run]
void FUN_0106d530(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0106D560  hkBaseObject::hkBaseObject_194  size=115  [run]
void __fastcall hkBaseObject::hkBaseObject_194(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[4] + -1;
  iVar1 = param_1[3];
  while (-1 < iVar2) {
    if (*(int *)(iVar1 + iVar2 * 4) != 0) {
      FUN_010060a0();
    }
    iVar2 = iVar2 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 4) = 0;
  }
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 4);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  FUN_01006770();
  *param_1 = vftable;
  return;
}

// 0106D5E0  hkMemoryMeshMaterial::vf00  size=52  [run]
int __thiscall hkMemoryMeshMaterial::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_194();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0106D630  FUN_0106d630  size=20  [run]
void __thiscall FUN_0106d630(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0106D670  FUN_0106d670  size=22  [run]
void __fastcall FUN_0106d670(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 0106D690  FUN_0106d690  size=40  [run]
void __thiscall FUN_0106d690(int *param_1,int param_2)

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

// 0106D6F0  FUN_0106d6f0  size=22  [run]
void __fastcall FUN_0106d6f0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
  }
  *param_1 = 0;
  return;
}

// 0106D710  FUN_0106d710  size=40  [run]
void __thiscall FUN_0106d710(int *param_1,int param_2)

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

// 0106D770  FUN_0106d770  size=15  [run]
int __thiscall FUN_0106d770(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0106D790  FUN_0106d790  size=52  [run]
int __thiscall FUN_0106d790(int *param_1,int *param_2,int param_3,int param_4)

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

// 0106D7E0  FUN_0106d7e0  size=9  [run]
void FUN_0106d7e0(void)

{
  FUN_01006230();
  return;
}

// 0106D800  FUN_0106d800  size=52  [run]
undefined4 __thiscall FUN_0106d800(int param_1,undefined4 param_2,int param_3)

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

// 0106D850  FUN_0106d850  size=34  [run]
void FUN_0106d850(int param_1,int param_2,undefined4 *param_3)

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

// 0106D890  FUN_0106d890  size=26  [run]
void __thiscall FUN_0106d890(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0106D8D0  hkMeshBody::vf2C  size=3  [run]
undefined4 hkMeshBody::vf2C(void)

{
  return 0;
}

// 0106D8E0  hkMeshBody::vf30  size=3  [run]
undefined4 hkMeshBody::vf30(void)

{
  return 0;
}

// 0106D8F0  hkMeshBody::vf34  size=3  [run]
undefined4 hkMeshBody::vf34(void)

{
  return 0;
}

// 0106D900  hkMeshBody::vf38  size=3  [run]
undefined4 hkMeshBody::vf38(void)

{
  return 0;
}

// 0106D910  hkMeshBody::vf3C  size=5  [run]
undefined4 hkMeshBody::vf3C(void)

{
  return 0;
}

// 0106D920  hkMeshBody::vf48  size=3  [run]
undefined4 hkMeshBody::vf48(void)

{
  return 0;
}

// 0106D930  hkMeshBody::vf4C  size=3  [run]
void hkMeshBody::vf4C(void)

{
  return;
}

// 0106D9A0  FUN_0106d9a0  size=57  [run]
void __thiscall FUN_0106d9a0(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0106D9E0  FUN_0106d9e0  size=55  [run]
void __thiscall FUN_0106d9e0(int param_1,undefined4 param_2,int param_3)

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

// 0106DA20  FUN_0106da20  size=62  [run]
void FUN_0106da20(int param_1)

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

// 0106DA60  FUN_0106da60  size=73  [run]
void FUN_0106da60(int param_1,int param_2)

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

// 0106DAB0  FUN_0106dab0  size=61  [run]
void __thiscall FUN_0106dab0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106DAF0  FUN_0106daf0  size=38  [run]
void FUN_0106daf0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0106DB20  hkMeshBody::vf00  size=53  [run]
undefined4 * __thiscall hkMeshBody::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0106DB60  FUN_0106db60  size=37  [run]
void FUN_0106db60(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0106DB90  FUN_0106db90  size=58  [run]
void __thiscall FUN_0106db90(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0106DBD0  FUN_0106dbd0  size=56  [run]
void __thiscall FUN_0106dbd0(int param_1,int param_2)

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

// 0106DC10  FUN_0106dc10  size=61  [run]
void __fastcall FUN_0106dc10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106DC50  FUN_0106dc50  size=61  [run]
void __fastcall FUN_0106dc50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0106DC90  hkMemoryMeshBody::hkMemoryMeshBody_2  size=31  [run]
undefined4 * __thiscall hkMemoryMeshBody::hkMemoryMeshBody_2(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = vftable;
  FUN_010065b0(param_2);
  return param_1;
}

// 0106DCB0  hkBaseObject::hkBaseObject_189  size=135  [run]
void __fastcall hkBaseObject::hkBaseObject_189(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = hkMemoryMeshBody::vftable;
  if (0 < (int)param_1[0x17]) {
    do {
      FUN_010060a0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[0x17]);
  }
  FUN_01006770();
  param_1[0x17] = 0;
  if (-1 < (int)param_1[0x18]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x16],param_1[0x18] * 4);
  }
  param_1[0x16] = 0;
  param_1[0x18] = 0x80000000;
  if (param_1[0x15] != 0) {
    FUN_010060a0();
  }
  param_1[0x15] = 0;
  if (param_1[0x14] != 0) {
    FUN_010060a0();
  }
  param_1[0x14] = 0;
  *param_1 = vftable;
  return;
}

// 0106DD40  hkMemoryMeshBody::hkMemoryMeshBody  size=1380  [run]
undefined4 * __thiscall
hkMemoryMeshBody::hkMemoryMeshBody
          (undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 local_74 [28];
  undefined4 local_58;
  uint local_4c;
  uint local_48;
  undefined4 *local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x80000000;
  local_44 = param_1;
  FUN_010065a0();
  FUN_01006780(&DAT_016416fa);
  if (param_5 != 0) {
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    iVar5 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x48);
    *(undefined2 *)(iVar5 + 4) = 0x48;
    iVar5 = hkIndexedTransformSet::hkIndexedTransformSet_2(param_5);
    if (iVar5 != 0) {
      FUN_01006000();
    }
    if (param_1[0x14] != 0) {
      FUN_010060a0();
    }
    param_1[0x14] = iVar5;
    FUN_010060a0();
  }
  if (param_3 != (int *)0x0) {
    uVar6 = (**(code **)(*param_3 + 0xc))();
    local_20 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0x80000000;
    local_48 = uVar6;
    local_1c = uVar6;
    if (uVar6 != 0) {
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      local_20 = *(int *)((int)pvVar4 + 0xc);
      uVar11 = uVar6 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar4 + 8) < (int)uVar11) ||
         (*(uint *)((int)pvVar4 + 0x10) < uVar11 + local_20)) {
        local_20 = FUN_0100b780(uVar11);
      }
      else {
        *(uint *)((int)pvVar4 + 0xc) = uVar11 + local_20;
      }
    }
    uVar11 = uVar6 | 0x80000000;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0x80000000;
    local_4c = uVar11;
    local_2c = local_20;
    local_24 = uVar11;
    local_8 = uVar6;
    if (uVar6 == 0) {
      local_18 = 0;
    }
    else {
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      iVar5 = *(int *)((int)pvVar4 + 0xc);
      uVar12 = uVar6 * 4 + 0x7f & 0xffffff80;
      uVar9 = iVar5 + uVar12;
      if ((*(int *)((int)pvVar4 + 8) < (int)uVar12) || (*(uint *)((int)pvVar4 + 0x10) < uVar9)) {
        local_18 = FUN_0100b780(uVar12);
      }
      else {
        *(uint *)((int)pvVar4 + 0xc) = uVar9;
        local_18 = iVar5;
      }
    }
    local_34 = 0;
    local_c = local_18;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x80000000;
    local_30 = uVar6;
    local_10 = uVar11;
    if (uVar6 != 0) {
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      local_34 = *(int *)((int)pvVar4 + 0xc);
      uVar11 = uVar6 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar4 + 8) < (int)uVar11) ||
         (*(uint *)((int)pvVar4 + 0x10) < uVar11 + local_34)) {
        local_34 = FUN_0100b780(uVar11);
        uVar11 = local_4c;
      }
      else {
        *(uint *)((int)pvVar4 + 0xc) = uVar11 + local_34;
        uVar11 = local_4c;
      }
    }
    iVar5 = 0;
    local_40 = local_34;
    local_38 = uVar11;
    if (0 < (int)uVar6) {
      do {
        (**(code **)(*param_3 + 0x10))(iVar5,2,local_74);
        FUN_01006000();
        if (local_28 == (local_24 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_2c,4);
        }
        *(undefined4 *)(local_2c + local_28 * 4) = local_58;
        local_28 = local_28 + 1;
        (**(code **)(*param_3 + 0x14))(local_74);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)uVar6);
    }
    param_5 = 0;
    uVar11 = local_14;
    iVar5 = local_18;
    if (0 < (int)uVar6) {
      do {
        iVar8 = *(int *)(local_2c + param_5 * 4);
        iVar10 = 0;
        if (0 < (int)uVar11) {
          do {
            if (*(int *)(iVar5 + iVar10 * 4) == iVar8) {
              if (-1 < iVar10) goto LAB_0106dfe7;
              break;
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)uVar11);
        }
        if (uVar11 == (local_10 & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,&local_18,4);
          uVar11 = local_14;
          iVar5 = local_18;
        }
        *(int *)(iVar5 + uVar11 * 4) = iVar8;
        uVar11 = local_14 + 1;
        iVar5 = local_18;
        local_14 = uVar11;
LAB_0106dfe7:
        param_5 = param_5 + 1;
      } while (param_5 < (int)uVar6);
    }
    if ((int)(local_38 & 0x3fffffff) < (int)uVar11) {
      uVar6 = (local_38 & 0x3fffffff) * 2;
      uVar9 = uVar11;
      if ((int)uVar11 < (int)uVar6) {
        uVar9 = uVar6;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,&local_40,uVar9,4);
    }
    local_3c = uVar11;
    FUN_0106e670();
    iVar5 = 0;
    if (0 < (int)uVar11) {
      do {
        puVar1 = (undefined4 *)(local_40 + iVar5 * 4);
        uVar7 = (**(code **)(**(int **)(local_18 + iVar5 * 4) + 0xc))();
        iVar5 = iVar5 + 1;
        *puVar1 = uVar7;
      } while (iVar5 < (int)uVar11);
    }
    puVar1 = local_44;
    uVar6 = local_48;
    if ((int)(local_44[0x18] & 0x3fffffff) < (int)local_48) {
      uVar11 = (local_44[0x18] & 0x3fffffff) * 2;
      if ((int)uVar11 <= (int)local_48) {
        uVar11 = local_48;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,local_44 + 0x16,uVar11,4);
    }
    puVar1[0x17] = uVar6;
    iVar5 = 0;
    if (0 < (int)uVar6) {
      do {
        iVar8 = 0;
        if (0 < (int)local_14) {
          do {
            if (*(int *)(local_18 + iVar8 * 4) == *(int *)(local_2c + iVar5 * 4)) goto LAB_0106e0a5;
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)local_14);
        }
        iVar8 = -1;
LAB_0106e0a5:
        uVar7 = *(undefined4 *)(local_40 + iVar8 * 4);
        FUN_01006000();
        *(undefined4 *)(local_44[0x16] + iVar5 * 4) = uVar7;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_48);
    }
    FUN_01006230(local_2c,local_28,4);
    FUN_01006230(local_40,local_3c,4);
    uVar6 = local_30;
    iVar5 = local_34;
    if (local_34 == local_40) {
      local_3c = 0;
    }
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    uVar6 = uVar6 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar4 + 8) < (int)uVar6) || (uVar6 + iVar5 != *(int *)((int)pvVar4 + 0xc)))
       || (*(int *)((int)pvVar4 + 0x14) == iVar5)) {
      FUN_0100b9b0(iVar5,uVar6);
    }
    else {
      *(int *)((int)pvVar4 + 0xc) = iVar5;
    }
    local_3c = 0;
    if (-1 < (int)local_38) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_40,local_38 * 4);
    }
    uVar6 = local_8;
    iVar5 = local_c;
    local_40 = 0;
    local_38 = 0x80000000;
    if (local_c == local_18) {
      local_14 = 0;
    }
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    uVar6 = uVar6 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar4 + 8) < (int)uVar6) || (uVar6 + iVar5 != *(int *)((int)pvVar4 + 0xc)))
       || (*(int *)((int)pvVar4 + 0x14) == iVar5)) {
      FUN_0100b9b0(iVar5,uVar6);
    }
    else {
      *(int *)((int)pvVar4 + 0xc) = iVar5;
    }
    local_14 = 0;
    if (-1 < (int)local_10) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 * 4);
    }
    uVar6 = local_1c;
    iVar5 = local_20;
    local_18 = 0;
    local_10 = 0x80000000;
    if (local_20 == local_2c) {
      local_28 = 0;
    }
    pvVar4 = TlsGetValue(DAT_01f8fc4c);
    uVar6 = uVar6 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar4 + 8) < (int)uVar6) || (uVar6 + iVar5 != *(int *)((int)pvVar4 + 0xc)))
       || (*(int *)((int)pvVar4 + 0x14) == iVar5)) {
      FUN_0100b9b0(iVar5,uVar6);
    }
    else {
      *(int *)((int)pvVar4 + 0xc) = iVar5;
    }
    local_28 = 0;
    if (-1 < (int)local_24) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,local_24 * 4);
    }
  }
  puVar1 = local_44;
  uVar7 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  local_44[4] = *param_4;
  local_44[5] = uVar7;
  local_44[6] = uVar2;
  local_44[7] = uVar3;
  uVar7 = param_4[5];
  uVar2 = param_4[6];
  uVar3 = param_4[7];
  local_44[8] = param_4[4];
  local_44[9] = uVar7;
  local_44[10] = uVar2;
  local_44[0xb] = uVar3;
  uVar7 = param_4[9];
  uVar2 = param_4[10];
  uVar3 = param_4[0xb];
  local_44[0xc] = param_4[8];
  local_44[0xd] = uVar7;
  local_44[0xe] = uVar2;
  local_44[0xf] = uVar3;
  uVar7 = param_4[0xd];
  uVar2 = param_4[0xe];
  uVar3 = param_4[0xf];
  local_44[0x10] = param_4[0xc];
  local_44[0x11] = uVar7;
  local_44[0x12] = uVar2;
  local_44[0x13] = uVar3;
  if (param_3 != (int *)0x0) {
    FUN_01006000();
  }
  if (puVar1[0x15] != 0) {
    FUN_010060a0();
  }
  puVar1[0x15] = param_3;
  return puVar1;
}

// 0106E2C0  hkMemoryMeshBody::vf3C  size=8  [run]
undefined4 hkMemoryMeshBody::vf3C(void)

{
  return 1;
}

// 0106E2D0  hkMemoryMeshBody::vf44  size=1  [run]
void hkMemoryMeshBody::vf44(void)

{
  return;
}

// 0106E2E0  hkMemoryMeshBody::vf40  size=3  [run]
void hkMemoryMeshBody::vf40(void)

{
  return;
}

// 0106E2F0  hkMemoryMeshBody::vf4C  size=12  [run]
void hkMemoryMeshBody::vf4C(void)

{
  FUN_01006780();
  return;
}

// 0106E350  hkMemoryMeshBody::vf10  size=41  [run]
void __thiscall hkMemoryMeshBody::vf10(int param_1,undefined4 *param_2)

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

// 0106E380  hkMemoryMeshBody::vf14  size=41  [run]
void __thiscall hkMemoryMeshBody::vf14(int param_1,undefined4 *param_2)

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

// 0106E3B0  hkMemoryMeshBody::vf18  size=16  [run]
undefined4 __thiscall hkMemoryMeshBody::vf18(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x58) + param_2 * 4);
}

// 0106E3C0  hkMemoryMeshBody::vf20  size=12  [run]
void hkMemoryMeshBody::vf20(void)

{
  FUN_010689c0();
  return;
}

// 0106E3D0  hkMemoryMeshBody::vf24  size=12  [run]
void hkMemoryMeshBody::vf24(void)

{
  FUN_01068a10();
  return;
}

// 0106E3E0  hkMemoryMeshBody::vf28  size=12  [run]
void hkMemoryMeshBody::vf28(void)

{
  FUN_01068f90();
  return;
}

// 0106E3F0  hkMemoryMeshBody::vf2C  size=7  [run]
undefined4 __fastcall hkMemoryMeshBody::vf2C(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x20);
}

// 0106E400  hkMemoryMeshBody::vf30  size=7  [run]
undefined4 __fastcall hkMemoryMeshBody::vf30(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x2c);
}

// 0106E410  hkMemoryMeshBody::vf34  size=7  [run]
undefined4 __fastcall hkMemoryMeshBody::vf34(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x38);
}

// 0106E420  hkMemoryMeshBody::vf48  size=7  [run]
uint __fastcall hkMemoryMeshBody::vf48(int param_1)

{
  return *(uint *)(param_1 + 100) & 0xfffffffe;
}

// 0106E450  FUN_0106e450  size=38  [run]
void FUN_0106e450(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0106E480  hkMemoryMeshBody::vf0C  size=4  [run]
undefined4 __fastcall hkMemoryMeshBody::vf0C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}

// 0106E490  hkMemoryMeshBody::vf1C  size=14  [run]
undefined4 __fastcall hkMemoryMeshBody::vf1C(int param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x50) + 0xc);
  }
  return 0;
}

// 0106E4A0  hkMemoryMeshBody::vf38  size=12  [run]
undefined4 __fastcall hkMemoryMeshBody::vf38(int param_1)

{
  if (*(int *)(param_1 + 0x50) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x3c);
}

// 0106E4B0  FUN_0106e4b0  size=108  [run]
int * __thiscall FUN_0106e4b0(int *param_1,uint param_2)

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

// 0106E520  FUN_0106e520  size=143  [run]
void __fastcall FUN_0106e520(int *param_1)

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

// 0106E5B0  hkMemoryMeshBody::vf00  size=52  [run]
int __thiscall hkMemoryMeshBody::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_189();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0106E5F0  FUN_0106e5f0  size=56  [run]
void __thiscall FUN_0106e5f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x40] = *(undefined4 *)(param_2 + 0x100);
  iVar1 = *(int *)(param_2 + 0x100);
  if (0 < iVar1) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined4 *)(param_2 + (int)param_1);
      param_1[1] = *(undefined4 *)(param_2 + 4 + (int)param_1);
      param_1 = param_1 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 0106E630  FUN_0106e630  size=57  [run]
void __thiscall FUN_0106e630(byte *param_1,undefined4 param_2)

{
  FUN_010262e0(param_2,"%s(%i) %s(%i)",(&PTR_DAT_017d54b4)[param_1[2]],param_1[3],
               (&PTR_DAT_017d5484)[*param_1],param_1[1]);
  return;
}

// 0106E670  FUN_0106e670  size=13  [run]
void __fastcall FUN_0106e670(int param_1)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  return;
}

// 0106E680  FUN_0106e680  size=22  [run]
undefined4 __thiscall FUN_0106e680(undefined4 param_1,undefined4 param_2)

{
  FUN_0106e5f0(param_2);
  return param_1;
}

// 0106E6A0  FUN_0106e6a0  size=9  [run]
void FUN_0106e6a0(void)

{
  FUN_0106e5f0();
  return;
}

// 0106E6B0  FUN_0106e6b0  size=115  [run]
undefined4 __thiscall FUN_0106e6b0(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 != *(int *)(param_2 + 0x100)) {
    return 0;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    pcVar3 = (char *)(param_2 + 3);
    pcVar2 = (char *)(param_1 + 1);
    do {
      if ((((pcVar2[-1] != pcVar3[-3]) || (*pcVar2 != pcVar2[param_2 - param_1])) ||
          (pcVar2[1] != pcVar3[-1])) || ((pcVar2[2] != *pcVar3 || (pcVar3[1] != pcVar2[3])))) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 8;
      pcVar2 = pcVar2 + 8;
    } while (iVar4 < iVar1);
  }
  return 1;
}

// 0106E730  FUN_0106e730  size=59  [run]
void __thiscall FUN_0106e730(int param_1,byte param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x100);
  uVar1 = 0;
  if (0 < iVar3) {
    pbVar2 = (byte *)(param_1 + 3);
    do {
      if ((pbVar2[-1] == param_2) && (uVar1 < *pbVar2 + 1)) {
        uVar1 = *pbVar2 + 1;
      }
      pbVar2 = pbVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 0106E770  FUN_0106e770  size=59  [run]
int __thiscall FUN_0106e770(int param_1,byte param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x100)) {
    pbVar2 = (byte *)(param_1 + 3);
    do {
      if ((pbVar2[-1] == param_2) && (*pbVar2 == param_3)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x100));
  }
  return -1;
}

// 0106E7B0  FUN_0106e7b0  size=61  [run]
undefined4 __fastcall FUN_0106e7b0(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar4 = 1;
  if (1 < *(int *)(param_1 + 0x100)) {
    pbVar3 = (byte *)(param_1 + 3);
    do {
      if ((pbVar3[7] < pbVar3[-1]) ||
         ((pbVar3[7] <= pbVar3[-1] &&
          ((bVar1 = *pbVar3, bVar2 = pbVar3[8], bVar2 <= bVar1 && bVar1 != bVar2 || (bVar1 == bVar2)
           ))))) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      pbVar3 = pbVar3 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x100));
  }
  return 1;
}

// 0106E7F0  FUN_0106e7f0  size=43  [run]
void FUN_0106e7f0(undefined1 *param_1,int param_2,int param_3)

{
  if ((*(byte *)(param_3 + 2) <= *(byte *)(param_2 + 2)) &&
     (*(byte *)(param_3 + 3) <= *(byte *)(param_2 + 3))) {
    *param_1 = 0;
    return;
  }
  *param_1 = 1;
  return;
}

// 0106E820  FUN_0106e820  size=72  [run]
void __thiscall
FUN_0106e820(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,undefined1 param_5
            )

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (iVar1 < 0x20) {
    uVar2 = FUN_0106e730(param_2);
    *(int *)(param_1 + 0x100) = iVar1 + 1;
    *(undefined1 *)(param_1 + iVar1 * 8) = param_3;
    *(char *)(param_1 + 2 + iVar1 * 8) = (char)param_2;
    *(undefined1 *)(param_1 + 1 + iVar1 * 8) = param_4;
    *(undefined1 *)(param_1 + 3 + iVar1 * 8) = uVar2;
    *(undefined1 *)(param_1 + 4 + iVar1 * 8) = param_5;
  }
  return;
}

// 0106E870  FUN_0106e870  size=68  [run]
void __thiscall FUN_0106e870(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if ((iVar1 < 0x20) &&
     (iVar2 = FUN_0106e770(*(undefined1 *)((int)param_2 + 2),*(undefined1 *)((int)param_2 + 3)),
     iVar2 < 0)) {
    *(undefined4 *)(param_1 + iVar1 * 8) = *param_2;
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = param_2[1];
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  }
  return;
}

// 0106E8C0  FUN_0106e8c0  size=48  [run]
char __fastcall FUN_0106e8c0(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x100);
  iVar4 = 0;
  if (0 < iVar1) {
    pbVar2 = (byte *)(param_1 + 4);
    iVar3 = iVar1;
    do {
      if ((*pbVar2 & 8) != 0) {
        iVar4 = iVar4 + 1;
      }
      pbVar2 = pbVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (iVar4 != 0) {
      return (iVar4 != iVar1) + '\x01';
    }
  }
  return '\0';
}

// 0106E8F0  FUN_0106e8f0  size=59  [run]
int __thiscall FUN_0106e8f0(int param_1,byte param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x200)) {
    pbVar2 = (byte *)(param_1 + 0xb);
    do {
      if ((pbVar2[-1] == param_2) && (*pbVar2 == param_3)) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      pbVar2 = pbVar2 + 0x10;
    } while (iVar1 < *(int *)(param_1 + 0x200));
  }
  return -1;
}

// 0106E930  FUN_0106e930  size=43  [run]
void __fastcall FUN_0106e930(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0106e7b0();
  if ((cVar1 == '\0') && (1 < *(int *)(param_1 + 0x100))) {
    FUN_0106ea50(param_1,0,*(int *)(param_1 + 0x100) + -1,FUN_0106e7f0);
  }
  return;
}

// 0106E960  FUN_0106e960  size=12  [run]
void __thiscall FUN_0106e960(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0106E970  FUN_0106e970  size=12  [run]
void __thiscall FUN_0106e970(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0106E980  FUN_0106e980  size=14  [run]
void __thiscall FUN_0106e980(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 0106E990  FUN_0106e990  size=16  [run]
byte __thiscall FUN_0106e990(byte *param_1,byte param_2)

{
  return *param_1 & param_2;
}

// 0106E9A0  FUN_0106e9a0  size=19  [run]
bool __thiscall FUN_0106e9a0(char *param_1,char *param_2)

{
  return *param_2 == *param_1;
}

// 0106E9C0  FUN_0106e9c0  size=59  [run]
undefined4 __thiscall FUN_0106e9c0(char *param_1,char *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     ((param_1[3] == param_2[3] && (param_2[4] == param_1[4])))) {
    return 1;
  }
  return 0;
}

// 0106EA00  FUN_0106ea00  size=73  [run]
undefined4 __thiscall FUN_0106ea00(char *param_1,char *param_2)

{
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     ((param_1[3] == param_2[3] && (param_2[4] == param_1[4])))) {
    return 0;
  }
  return 1;
}

// 0106EA50  FUN_0106ea50  size=286  [run]
void FUN_0106ea50(int param_1,int param_2,int param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 local_2c;
  int local_18;
  undefined1 local_12;
  undefined1 local_11;
  
  do {
    iVar3 = param_2 + param_3 >> 1;
    local_30 = *(undefined4 *)(param_1 + iVar3 * 8);
    local_2c = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
    iVar3 = param_3;
    iVar5 = param_2;
    do {
      pcVar4 = (char *)(*param_4)(&local_11,param_1 + iVar5 * 8,&local_30);
      if (*pcVar4 != '\0') {
        local_18 = param_1 + iVar5 * 8;
        do {
          local_18 = local_18 + 8;
          iVar5 = iVar5 + 1;
          pcVar4 = (char *)(*param_4)(&local_11,local_18,&local_30);
        } while (*pcVar4 != '\0');
      }
      pcVar4 = (char *)(*param_4)(&local_12,&local_30,param_1 + iVar3 * 8);
      if (*pcVar4 != '\0') {
        local_18 = param_1 + iVar3 * 8;
        do {
          local_18 = local_18 + -8;
          iVar3 = iVar3 + -1;
          pcVar4 = (char *)(*param_4)(&local_12,&local_30,local_18);
        } while (*pcVar4 != '\0');
      }
      if (iVar3 < iVar5) break;
      if (iVar3 != iVar5) {
        uVar1 = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
        uVar2 = *(undefined4 *)(param_1 + iVar3 * 8);
        *(undefined4 *)(param_1 + iVar3 * 8) = *(undefined4 *)(param_1 + iVar5 * 8);
        *(undefined4 *)(param_1 + 4 + iVar3 * 8) = *(undefined4 *)(param_1 + 4 + iVar5 * 8);
        *(undefined4 *)(param_1 + iVar5 * 8) = uVar2;
        *(undefined4 *)(param_1 + 4 + iVar5 * 8) = uVar1;
      }
      iVar3 = iVar3 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar3);
    if (param_2 < iVar3) {
      FUN_0106ea50(param_1,param_2,iVar3,param_4);
    }
    param_2 = iVar5;
    if (param_3 <= iVar5) {
      return;
    }
  } while( true );
}

// 0106EB80  FUN_0106eb80  size=33  [run]
void FUN_0106eb80(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_0106ea50(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 0106EBB0  FUN_0106ebb0  size=23  [run]
bool FUN_0106ebb0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_0106e6b0(param_1);
  return cVar1 == '\0';
}

// 0106EBE0  FUN_0106ebe0  size=251  [run]
void FUN_0106ebe0(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_3 == 0) {
    return;
  }
  if (param_2 == param_3) {
    FUN_01015ea0(param_1,0,param_3 * param_4);
    return;
  }
  puVar1 = (undefined4 *)(param_3 * param_4 + (int)param_1);
  if ((param_3 & 3) == 0) {
    switch((int)param_3 >> 2) {
    case 1:
      if (param_1 != puVar1) {
        do {
          *param_1 = 0;
          param_1 = (undefined4 *)((int)param_1 + param_2);
        } while (param_1 != puVar1);
        return;
      }
      break;
    case 2:
      if (param_1 != puVar1) {
        do {
          *param_1 = 0;
          param_1[1] = 0;
          param_1 = (undefined4 *)((int)param_1 + param_2);
        } while (param_1 != puVar1);
        return;
      }
      break;
    case 3:
      if (param_1 != puVar1) {
        do {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1 = (undefined4 *)((int)param_1 + param_2);
        } while (param_1 != puVar1);
        return;
      }
      break;
    case 4:
      if (param_1 != puVar1) {
        param_1 = param_1 + 2;
        do {
          param_1[-2] = 0;
          param_1[-1] = 0;
          *param_1 = 0;
          param_1[1] = 0;
          param_1 = (undefined4 *)((int)param_1 + param_2);
        } while (param_1 + -2 != puVar1);
        return;
      }
      break;
    default:
      goto switchD_0106ec30_default;
    }
  }
  else {
switchD_0106ec30_default:
    for (; param_1 != puVar1; param_1 = (undefined4 *)((int)param_1 + param_2)) {
      FUN_01015ea0(param_1,0,param_3);
    }
  }
  return;
}

// 0106ECF0  FUN_0106ecf0  size=326  [run]
void FUN_0106ecf0(undefined4 *param_1,uint param_2,undefined4 *param_3,uint param_4,uint param_5,
                 int param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_5 == 0) {
    return;
  }
  if ((param_2 == param_4) && (param_2 == param_5)) {
    FUN_01015e80(param_3,param_1,param_5 * param_6);
    return;
  }
  if ((param_5 & 3) == 0) {
    puVar2 = (undefined4 *)(param_2 * param_6 + (int)param_1);
    switch((int)param_5 >> 2) {
    case 1:
      if (param_1 != puVar2) {
        do {
          *param_3 = *param_1;
          param_1 = (undefined4 *)((int)param_1 + param_2);
          param_3 = (undefined4 *)((int)param_3 + param_4);
        } while (param_1 != puVar2);
        return;
      }
      break;
    case 2:
      if (param_1 != puVar2) {
        do {
          *param_3 = *param_1;
          param_3[1] = param_1[1];
          param_1 = (undefined4 *)((int)param_1 + param_2);
          param_3 = (undefined4 *)((int)param_3 + param_4);
        } while (param_1 != puVar2);
        return;
      }
      break;
    case 3:
      if (param_1 != puVar2) {
        param_3 = param_3 + 2;
        do {
          param_3[-2] = *param_1;
          param_3[-1] = param_1[1];
          *param_3 = param_1[2];
          param_1 = (undefined4 *)((int)param_1 + param_2);
          param_3 = (undefined4 *)((int)param_3 + param_4);
        } while (param_1 != puVar2);
        return;
      }
      break;
    case 4:
      if (param_1 != puVar2) {
        param_3 = param_3 + 2;
        param_1 = param_1 + 2;
        do {
          param_3[-2] = param_1[-2];
          param_3[-1] = param_1[-1];
          *param_3 = *param_1;
          puVar1 = param_1 + 1;
          param_1 = (undefined4 *)((int)param_1 + param_2);
          param_3[1] = *puVar1;
          param_3 = (undefined4 *)((int)param_3 + param_4);
        } while (param_1 + -2 != puVar2);
        return;
      }
      break;
    default:
      goto switchD_0106ed4e_default;
    }
  }
  else {
switchD_0106ed4e_default:
    puVar2 = (undefined4 *)(param_2 * param_6 + (int)param_1);
    for (; param_1 != puVar2; param_1 = (undefined4 *)((int)param_1 + param_2)) {
      FUN_01015e80(param_3,param_1,param_5);
      param_3 = (undefined4 *)((int)param_3 + param_4);
    }
  }
  return;
}

// 0106EEA0  FUN_0106eea0  size=84  [run]
void __thiscall FUN_0106eea0(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar2 = in_EAX[1];
  iVar3 = param_1[1];
  iVar6 = *param_1;
  iVar5 = *in_EAX;
  bVar1 = *(byte *)((int)param_1 + 9);
  if (bVar1 == *(byte *)((int)in_EAX + 9)) {
    if (0 < param_2) {
      local_8 = param_2;
      do {
        iVar4 = 0;
        if (bVar1 != 0) {
          do {
            *(ushort *)(iVar5 + iVar4 * 2) = (ushort)*(byte *)(iVar4 + iVar6);
            iVar4 = iVar4 + 1;
          } while (iVar4 < (int)(uint)bVar1);
        }
        iVar5 = iVar5 + iVar2;
        iVar6 = iVar6 + iVar3;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  return;
}

// 0106EF00  FUN_0106ef00  size=81  [run]
void __thiscall FUN_0106ef00(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = in_EAX[1];
  iVar3 = param_1[1];
  iVar6 = *param_1;
  bVar1 = *(byte *)((int)param_1 + 9);
  iVar5 = *in_EAX;
  if ((bVar1 == *(byte *)((int)in_EAX + 9)) && (0 < param_2)) {
    do {
      iVar4 = 0;
      if (bVar1 != 0) {
        do {
          *(undefined1 *)(iVar4 + iVar5) = *(undefined1 *)(iVar6 + iVar4 * 2);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)bVar1);
      }
      iVar5 = iVar5 + iVar2;
      iVar6 = iVar6 + iVar3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0106EFA0  FUN_0106efa0  size=135  [run]
void FUN_0106efa0(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined1 local_108 [260];
  
  FUN_0106e670();
  (**(code **)(*param_2 + 0x14))(local_108);
  iVar1 = FUN_0106e770(1,0);
  if (iVar1 < 0) {
    iVar1 = FUN_0106e770(2,0);
    if (iVar1 < 0) {
      iVar1 = FUN_0106e770(4,0);
      if (iVar1 < 0) {
        iVar1 = FUN_0106e770(5,0);
        if (iVar1 < 0) {
          *param_1 = 0;
          return;
        }
      }
    }
  }
  *param_1 = 1;
  return;
}

// 0106F030  FUN_0106f030  size=118  [run]
void FUN_0106f030(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_108 [260];
  
  FUN_0106e670();
  (**(code **)(*param_2 + 0x14))(local_108);
  iVar1 = FUN_0106e770(7,0);
  iVar2 = FUN_0106e770(6,0);
  if (iVar2 < 0) {
    iVar2 = FUN_0106e770(8,0);
  }
  if ((-1 < iVar1) && (-1 < iVar2)) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}

// 0106F0C0  FUN_0106f0c0  size=23  [run]
void FUN_0106f0c0(byte param_1,byte param_2)

{
  undefined1 *in_EAX;
  undefined1 *puVar1;
  
  puVar1 = &param_1;
  if (param_1 <= param_2) {
    puVar1 = &param_2;
  }
  *in_EAX = *puVar1;
  return;
}

// 0106F0E0  FUN_0106f0e0  size=562  [run]
/* WARNING: Removing unreachable block (ram,0x0106f2df) */

undefined4 FUN_0106f0e0(int *param_1,int param_2,float *param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  float *pfVar3;
  int iVar4;
  char local_c;
  
  iVar4 = param_1[2];
  local_c = (char)iVar4;
  bVar2 = (byte)((uint)iVar4 >> 8);
  if ((((char)((uint)iVar4 >> 0x10) == '\x03') && (bVar2 == 4)) && (local_c == '\x02')) {
    local_c = '\b';
  }
  if (local_c == '\b') {
    iVar4 = 0;
    if (0 < param_4) {
      do {
        uVar1 = *(uint *)(*(int *)(param_2 + iVar4 * 4) * param_1[1] + *param_1);
        iVar4 = iVar4 + 1;
        *param_3 = (float)(uVar1 & 0xff) * 0.003921569;
        param_3[1] = (float)(uVar1 >> 8 & 0xff) * 0.003921569;
        param_3[2] = (float)(uVar1 >> 0x10 & 0xff) * 0.003921569;
        param_3[3] = (float)(uVar1 >> 0x18) * 0.003921569;
        param_3 = param_3 + 4;
      } while (iVar4 < param_4);
    }
  }
  else {
    if (local_c != '\n') {
      return 1;
    }
    if (4 < bVar2) {
      bVar2 = 4;
    }
    switch(bVar2) {
    case 1:
      iVar4 = 0;
      if (0 < param_4) {
        param_3 = param_3 + 2;
        do {
          param_3[-2] = *(float *)(*(int *)(param_2 + iVar4 * 4) * param_1[1] + *param_1);
          param_3[-1] = 0.0;
          *param_3 = 0.0;
          param_3[1] = 0.0;
          iVar4 = iVar4 + 1;
          param_3 = param_3 + 4;
        } while (iVar4 < param_4);
        return 0;
      }
      break;
    case 2:
      iVar4 = 0;
      if (0 < param_4) {
        param_3 = param_3 + 2;
        do {
          pfVar3 = (float *)(*(int *)(param_2 + iVar4 * 4) * param_1[1] + *param_1);
          iVar4 = iVar4 + 1;
          param_3[-2] = *pfVar3;
          param_3[-1] = pfVar3[1];
          *param_3 = 0.0;
          param_3[1] = 0.0;
          param_3 = param_3 + 4;
        } while (iVar4 < param_4);
        return 0;
      }
      break;
    case 3:
      iVar4 = 0;
      if (0 < param_4) {
        param_3 = param_3 + 2;
        do {
          pfVar3 = (float *)(*(int *)(param_2 + iVar4 * 4) * param_1[1] + *param_1);
          iVar4 = iVar4 + 1;
          param_3[-2] = *pfVar3;
          param_3[-1] = pfVar3[1];
          *param_3 = pfVar3[2];
          param_3[1] = 0.0;
          param_3 = param_3 + 4;
        } while (iVar4 < param_4);
        return 0;
      }
      break;
    case 4:
      iVar4 = 0;
      if (0 < param_4) {
        param_3 = param_3 + 2;
        do {
          pfVar3 = (float *)(*(int *)(param_2 + iVar4 * 4) * param_1[1] + *param_1);
          iVar4 = iVar4 + 1;
          param_3[-2] = *pfVar3;
          param_3[-1] = pfVar3[1];
          *param_3 = pfVar3[2];
          param_3[1] = pfVar3[3];
          param_3 = param_3 + 4;
        } while (iVar4 < param_4);
        return 0;
      }
    }
  }
  return 0;
}

// 0106F330  FUN_0106f330  size=273  [run]
/* WARNING: Removing unreachable block (ram,0x0106f412) */

undefined4 FUN_0106f330(undefined4 *param_1,float *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  uint *puVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 2) == '\b') {
    iVar1 = param_1[1];
    puVar3 = (uint *)*param_1;
    if (0 < param_3) {
      do {
        uVar4 = *puVar3;
        puVar3 = (uint *)((int)puVar3 + iVar1);
        param_3 = param_3 + -1;
        *param_2 = (float)(uVar4 & 0xff) * 0.003921569;
        param_2[1] = (float)(uVar4 >> 8 & 0xff) * 0.003921569;
        param_2[2] = (float)(uVar4 >> 0x10 & 0xff) * 0.003921569;
        param_2[3] = (float)(uVar4 >> 0x18) * 0.003921569;
        param_2 = param_2 + 4;
      } while (param_3 != 0);
    }
    return 0;
  }
  if (*(char *)(param_1 + 2) != '\n') {
    return 1;
  }
  uVar4 = (uint)*(byte *)((int)param_1 + 9);
  pfVar2 = param_2;
  iVar1 = param_3;
  if (uVar4 < 4) {
    while (-1 < iVar1 + -1) {
      *pfVar2 = 0.0;
      pfVar2[1] = 0.0;
      pfVar2[2] = 0.0;
      pfVar2[3] = 0.0;
      pfVar2 = pfVar2 + 4;
      iVar1 = iVar1 + -1;
    }
  }
  if (4 < uVar4) {
    uVar4 = 4;
  }
  FUN_0106ecf0(*param_1,param_1[1],param_2,0x10,uVar4 * 4,param_3);
  return 0;
}

// 0106F450  FUN_0106f450  size=354  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0106f450(int *param_1,float *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint local_20;
  
  auVar4 = _DAT_017d5540;
  if ((char)param_1[2] == '\b') {
    iVar1 = param_1[1];
    puVar5 = (uint *)*param_1;
    fVar2 = DAT_017d5540._4_4_;
    fVar3 = DAT_017d5540._12_4_;
    if (0 < param_3) {
      do {
        auVar7._0_4_ = auVar4._0_4_ * *param_2;
        auVar7._4_4_ = fVar2 * param_2[1];
        auVar7._8_4_ = auVar4._8_4_ * param_2[2];
        auVar7._12_4_ = fVar3 * param_2[3];
        auVar7 = maxps(ZEXT816(0),auVar7);
        auVar7 = minps(auVar4,auVar7);
        fStack_34 = auVar7._12_4_;
        param_2 = param_2 + 4;
        local_20 = (uint)(longlong)ROUND(fStack_34);
        uVar6 = local_20 << 8;
        fStack_38 = auVar7._8_4_;
        local_20 = (uint)(longlong)ROUND(fStack_38);
        uVar6 = uVar6 | local_20;
        fStack_3c = auVar7._4_4_;
        local_20 = (uint)(longlong)ROUND(fStack_3c);
        uVar6 = uVar6 << 8 | local_20;
        local_40 = auVar7._0_4_;
        local_20 = (uint)(longlong)ROUND(local_40);
        *puVar5 = uVar6 << 8 | local_20;
        puVar5 = (uint *)((int)puVar5 + iVar1);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    return 0;
  }
  if ((char)param_1[2] == '\n') {
    if (4 < *(byte *)((int)param_1 + 9)) {
      FUN_0106ebe0(*param_1 + 0x10,param_1[1],(uint)*(byte *)((int)param_1 + 9) * 4 + -0x10,param_3)
      ;
    }
    FUN_0106ecf0(param_2,0x10,*param_1,param_1[1],(uint)*(byte *)((int)param_1 + 9) * 4,param_3);
    return 0;
  }
  return 1;
}

// 0106F5C0  FUN_0106f5c0  size=458  [run]
undefined4 FUN_0106f5c0(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_2 * 0x10 + param_1);
  iVar3 = param_2 * 0x10 + param_1;
  param_1 = *(int *)(param_1 + 0x204);
  iVar1 = *(int *)(iVar3 + 4);
  uVar5 = (uint)*(byte *)(iVar3 + 9);
  param_2 = param_1;
  switch(*(undefined1 *)(iVar3 + 8)) {
  case 1:
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            *param_3 = (int)*(char *)(iVar3 + iVar4);
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 1;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return 0;
    }
    break;
  case 2:
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            *param_3 = (uint)*(byte *)(iVar3 + iVar4);
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 1;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return 0;
    }
    break;
  case 3:
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            *param_3 = (int)*(short *)(iVar4 + iVar3 * 2);
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 1;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case 4:
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            *param_3 = (uint)*(ushort *)(iVar4 + iVar3 * 2);
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 1;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case 5:
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            *param_3 = *(uint *)(iVar4 + iVar3 * 4);
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 1;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case 6:
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            *param_3 = *(uint *)(iVar4 + iVar3 * 4);
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 1;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case 7:
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            uVar2 = *(uint *)(iVar4 + iVar3 * 4);
            *param_3 = uVar2 & 0xff;
            param_3[1] = uVar2 >> 8 & 0xff;
            param_3[2] = uVar2 >> 0x10 & 0xff;
            param_3[3] = uVar2 >> 0x18;
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 4;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    break;
  default:
    return 1;
  }
  return 0;
}

// 0106F7B0  FUN_0106f7b0  size=442  [run]
undefined4 FUN_0106f7b0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_2 * 0x10 + 4 + param_1);
  piVar2 = (int *)(param_2 * 0x10 + param_1);
  param_1 = *(int *)(param_1 + 0x204);
  iVar4 = *piVar2;
  uVar5 = (uint)*(byte *)((int)piVar2 + 9);
  param_2 = param_1;
  switch((char)piVar2[2]) {
  case '\x01':
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            *(undefined1 *)(iVar3 + iVar4) = *(undefined1 *)param_3;
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 1;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return 0;
    }
    break;
  case '\x02':
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            *(undefined1 *)(iVar3 + iVar4) = *(undefined1 *)param_3;
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 1;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return 0;
    }
    break;
  case '\x03':
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            *(undefined2 *)(iVar4 + iVar3 * 2) = *(undefined2 *)param_3;
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 1;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case '\x04':
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            *(undefined2 *)(iVar4 + iVar3 * 2) = *(undefined2 *)param_3;
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 1;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case '\x05':
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            *(undefined4 *)(iVar4 + iVar3 * 4) = *param_3;
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 1;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case '\x06':
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            *(undefined4 *)(iVar4 + iVar3 * 4) = *param_3;
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 1;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case '\a':
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar5 != 0) {
          do {
            *(uint *)(iVar4 + iVar3 * 4) =
                 CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)param_3,*(undefined1 *)(param_3 + 1)),
                                   *(undefined1 *)(param_3 + 2)),*(undefined1 *)(param_3 + 3));
            iVar3 = iVar3 + 1;
            param_3 = param_3 + 4;
          } while (iVar3 < (int)uVar5);
        }
        iVar4 = iVar4 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    break;
  default:
    return 1;
  }
  return 0;
}

// 0106F990  FUN_0106f990  size=62  [run]
void FUN_0106f990(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  FUN_0106ecf0(*param_1,param_1[1],*param_2,param_2[1],
               (uint)(byte)(&DAT_017d5474)[*(byte *)(param_1 + 2)] *
               (uint)*(byte *)((int)param_1 + 9) + 3 & 0xfffffffc,param_3);
  return;
}

// 0106F9D0  FUN_0106f9d0  size=385  [run]
void __fastcall FUN_0106f9d0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte bVar8;
  uint uVar9;
  undefined4 *puVar10;
  int local_c;
  int local_8;
  
  if (((*(char *)((int)param_1 + 9) == *(char *)((int)param_2 + 9)) &&
      (*(char *)(param_1 + 2) == '\a')) && (*(char *)(param_2 + 2) == '\x02')) {
    puVar7 = (undefined1 *)*param_2;
    iVar1 = param_2[1];
    iVar2 = param_1[1];
    puVar10 = (undefined4 *)*param_1;
    switch(*(char *)((int)param_1 + 9)) {
    case '\x01':
      if (0 < param_3) {
        do {
          *puVar7 = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + iVar2);
          puVar7 = puVar7 + iVar1;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        return;
      }
      break;
    case '\x02':
      if (0 < param_3) {
        do {
          uVar3 = *puVar10;
          *puVar7 = (char)uVar3;
          puVar7[1] = (char)((uint)uVar3 >> 8);
          puVar10 = (undefined4 *)((int)puVar10 + iVar2);
          puVar7 = puVar7 + iVar1;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        return;
      }
      break;
    case '\x03':
      if (0 < param_3) {
        local_8 = param_3;
        do {
          uVar3 = *puVar10;
          *puVar7 = (char)uVar3;
          puVar7[1] = (char)((uint)uVar3 >> 8);
          puVar7[2] = (char)((uint)uVar3 >> 0x10);
          puVar10 = (undefined4 *)((int)puVar10 + iVar2);
          puVar7 = puVar7 + iVar1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        return;
      }
      break;
    case '\x04':
      if (0 < param_3) {
        local_8 = param_3;
        do {
          uVar3 = *puVar10;
          puVar7[1] = (char)((uint)uVar3 >> 8);
          *puVar7 = (char)uVar3;
          puVar7[2] = (char)((uint)uVar3 >> 0x10);
          puVar7[3] = (char)((uint)uVar3 >> 0x18);
          puVar10 = (undefined4 *)((int)puVar10 + iVar2);
          puVar7 = puVar7 + iVar1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        return;
      }
      break;
    default:
      bVar8 = *(byte *)((int)param_1 + 9) & 3;
      uVar9 = (uint)(*(byte *)((int)param_1 + 9) >> 2);
      if (0 < param_3) {
        local_c = param_3;
        puVar4 = puVar7;
        puVar5 = puVar10;
        uVar6 = uVar9;
        do {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar3 = *puVar5;
            puVar4[1] = (char)((uint)uVar3 >> 8);
            *puVar4 = (char)uVar3;
            puVar4[2] = (char)((uint)uVar3 >> 0x10);
            puVar4[3] = (char)((uint)uVar3 >> 0x18);
            puVar4 = puVar4 + 4;
            puVar5 = puVar5 + 1;
          }
          if (bVar8 == 1) {
            *puVar4 = *(undefined1 *)puVar5;
          }
          else if (bVar8 == 2) {
            uVar3 = *puVar5;
            *puVar4 = (char)uVar3;
            puVar4[1] = (char)((uint)uVar3 >> 8);
          }
          else if (bVar8 == 3) {
            uVar3 = *puVar5;
            *puVar4 = (char)uVar3;
            puVar4[1] = (char)((uint)uVar3 >> 8);
            puVar4[2] = (char)((uint)uVar3 >> 0x10);
          }
          local_c = local_c + -1;
          puVar4 = puVar7;
          puVar5 = puVar10;
          uVar6 = uVar9;
        } while (local_c != 0);
      }
    }
  }
  return;
}

// 0106FB70  FUN_0106fb70  size=106  [run]
void __fastcall FUN_0106fb70(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  ushort *puVar4;
  undefined4 *puVar5;
  
  if ((((*(char *)((int)in_EAX + 9) == '\x04') && (*(char *)((int)param_3 + 9) == '\x04')) &&
      (*(char *)(in_EAX + 2) == '\a')) && ((char)param_3[2] == '\x03')) {
    puVar4 = (ushort *)*param_3;
    puVar5 = (undefined4 *)*in_EAX;
    iVar1 = in_EAX[1];
    uVar2 = param_3[1];
    if (0 < param_2) {
      do {
        uVar3 = *puVar5;
        *puVar4 = (ushort)uVar3 & 0xff;
        puVar4[1] = (ushort)((uint)uVar3 >> 8) & 0xff;
        puVar4[2] = (ushort)((uint)uVar3 >> 0x10) & 0xff;
        puVar4[3] = (ushort)(byte)((uint)uVar3 >> 0x18);
        puVar4 = (ushort *)((int)puVar4 + (uVar2 & 0xfffffffe));
        puVar5 = (undefined4 *)((int)puVar5 + iVar1);
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return;
}

// 0106FBE0  FUN_0106fbe0  size=88  [run]
void __fastcall FUN_0106fbe0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_EAX;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if (((*(char *)((int)in_EAX + 9) == *(char *)((int)param_2 + 9)) &&
      (*(char *)(in_EAX + 2) == '\a')) && (*(char *)(param_2 + 2) == '\b')) {
    puVar3 = (undefined1 *)*in_EAX;
    puVar4 = (undefined1 *)*param_2;
    iVar1 = in_EAX[1];
    iVar2 = param_2[1];
    if ((*(char *)((int)in_EAX + 9) == '\x04') && (0 < param_3)) {
      do {
        *puVar4 = *puVar3;
        puVar4[1] = puVar3[1];
        puVar4[2] = puVar3[2];
        puVar4[3] = puVar3[3];
        puVar3 = puVar3 + iVar1;
        puVar4 = puVar4 + iVar2;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}

// 0106FC40  FUN_0106fc40  size=607  [run]
/* WARNING: Removing unreachable block (ram,0x0106fe00) */
/* WARNING: Removing unreachable block (ram,0x0106fd3e) */
/* WARNING: Removing unreachable block (ram,0x0106fcdd) */
/* WARNING: Removing unreachable block (ram,0x0106fd9f) */
/* WARNING: Removing unreachable block (ram,0x0106fe79) */

void __fastcall FUN_0106fc40(undefined4 param_1,int *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  int *unaff_ESI;
  uint *puVar5;
  int local_8;
  
  if ((((*(char *)((int)param_2 + 9) == '\x01') || (*(char *)((int)unaff_ESI + 9) == '\x04')) &&
      ((char)param_2[2] == '\b')) && ((char)unaff_ESI[2] == '\n')) {
    pfVar3 = (float *)*unaff_ESI;
    iVar4 = 0;
    puVar5 = (uint *)*param_2;
    if (3 < param_3) {
      local_8 = (param_3 - 4U >> 2) + 1;
      iVar4 = local_8 * 4;
      do {
        uVar2 = *puVar5;
        *pfVar3 = (float)(uVar2 & 0xff) * 0.003921569;
        pfVar3[1] = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        pfVar3[2] = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        pfVar3[3] = (float)(uVar2 >> 0x18) * 0.003921569;
        puVar5 = puVar5 + *(byte *)((int)param_2 + 9);
        pfVar3 = pfVar3 + *(byte *)((int)unaff_ESI + 9);
        uVar2 = *puVar5;
        *pfVar3 = (float)(uVar2 & 0xff) * 0.003921569;
        pfVar3[1] = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        pfVar3[2] = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        pfVar3[3] = (float)(uVar2 >> 0x18) * 0.003921569;
        puVar5 = puVar5 + *(byte *)((int)param_2 + 9);
        pfVar3 = pfVar3 + *(byte *)((int)unaff_ESI + 9);
        uVar2 = *puVar5;
        *pfVar3 = (float)(uVar2 & 0xff) * 0.003921569;
        pfVar3[1] = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        pfVar3[2] = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        pfVar3[3] = (float)(uVar2 >> 0x18) * 0.003921569;
        bVar1 = *(byte *)((int)param_2 + 9);
        pfVar3 = pfVar3 + *(byte *)((int)unaff_ESI + 9);
        uVar2 = puVar5[bVar1];
        *pfVar3 = (float)(uVar2 & 0xff) * 0.003921569;
        pfVar3[1] = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        pfVar3[2] = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        local_8 = local_8 + -1;
        pfVar3[3] = (float)(uVar2 >> 0x18) * 0.003921569;
        puVar5 = puVar5 + bVar1 + *(byte *)((int)param_2 + 9);
        pfVar3 = pfVar3 + *(byte *)((int)unaff_ESI + 9);
      } while (local_8 != 0);
    }
    if (iVar4 < param_3) {
      local_8 = param_3 - iVar4;
      do {
        uVar2 = *puVar5;
        *pfVar3 = (float)(uVar2 & 0xff) * 0.003921569;
        pfVar3[1] = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        pfVar3[2] = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        local_8 = local_8 + -1;
        pfVar3[3] = (float)(uVar2 >> 0x18) * 0.003921569;
        puVar5 = puVar5 + *(byte *)((int)param_2 + 9);
        pfVar3 = pfVar3 + *(byte *)((int)unaff_ESI + 9);
      } while (local_8 != 0);
    }
  }
  return;
}

// 0106FEA0  FUN_0106fea0  size=492  [run]
void __thiscall FUN_0106fea0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  byte *pbVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (((*(char *)((int)param_1 + 9) == *(char *)((int)in_EAX + 9)) &&
      (*(char *)(param_1 + 2) == '\a')) && ((char)in_EAX[2] == '\n')) {
    pfVar4 = (float *)*in_EAX;
    pbVar3 = (byte *)*param_1;
    iVar1 = param_1[1];
    uVar6 = (uint)in_EAX[1] >> 2;
    if (*(char *)((int)param_1 + 9) == '\x04') {
      iVar5 = 0;
      if (3 < param_2) {
        iVar7 = (param_2 - 4U >> 2) + 1;
        iVar5 = iVar7 * 4;
        do {
          *pfVar4 = (float)*pbVar3;
          pfVar4[1] = (float)pbVar3[1];
          pfVar4[2] = (float)pbVar3[2];
          pfVar4[3] = (float)pbVar3[3];
          pfVar4[uVar6] = (float)pbVar3[iVar1];
          pfVar4[uVar6 + 1] = (float)pbVar3[iVar1 + 1];
          pfVar4[uVar6 + 2] = (float)pbVar3[iVar1 + 2];
          pfVar4[uVar6 + 3] = (float)pbVar3[iVar1 + 3];
          pfVar4[uVar6 * 2] = (float)pbVar3[iVar1 * 2];
          pfVar4[uVar6 * 2 + 1] = (float)pbVar3[iVar1 * 2 + 1];
          pfVar4[uVar6 * 2 + 2] = (float)pbVar3[iVar1 * 2 + 2];
          pfVar4[uVar6 * 2 + 3] = (float)pbVar3[iVar1 * 2 + 3];
          iVar2 = iVar1 * 3;
          pfVar4[uVar6 * 3] = (float)pbVar3[iVar1 * 3];
          pfVar4[uVar6 * 3 + 1] = (float)pbVar3[iVar2 + 1];
          pfVar4[uVar6 * 3 + 2] = (float)pbVar3[iVar2 + 2];
          pfVar4[uVar6 * 3 + 3] = (float)pbVar3[iVar2 + 3];
          pbVar3 = pbVar3 + iVar1 * 4;
          pfVar4 = pfVar4 + uVar6 * 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (iVar5 < param_2) {
        param_2 = param_2 - iVar5;
        do {
          *pfVar4 = (float)*pbVar3;
          pfVar4[1] = (float)pbVar3[1];
          pfVar4[2] = (float)pbVar3[2];
          pfVar4[3] = (float)pbVar3[3];
          pbVar3 = pbVar3 + iVar1;
          pfVar4 = pfVar4 + uVar6;
          param_2 = param_2 + -1;
        } while (param_2 != 0);
      }
    }
  }
  return;
}

// 01070090  FUN_01070090  size=428  [run]
void __thiscall FUN_01070090(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *in_EAX;
  uint *puVar6;
  byte bVar7;
  uint *puVar8;
  uint uVar9;
  int local_10;
  int local_8;
  
  if (((*(char *)((int)param_1 + 9) == *(char *)((int)in_EAX + 9)) &&
      (*(char *)(param_1 + 2) == '\x02')) && (*(char *)(in_EAX + 2) == '\a')) {
    puVar8 = (uint *)*in_EAX;
    puVar6 = (uint *)*param_1;
    iVar1 = in_EAX[1];
    iVar2 = param_1[1];
    switch(*(char *)((int)param_1 + 9)) {
    case '\x01':
      if (0 < param_2) {
        do {
          *puVar8 = (uint)(byte)*puVar6;
          puVar6 = (uint *)((int)puVar6 + iVar2);
          puVar8 = (uint *)((int)puVar8 + iVar1);
          param_2 = param_2 + -1;
        } while (param_2 != 0);
        return;
      }
      break;
    case '\x02':
      if (0 < param_2) {
        local_8 = param_2;
        do {
          *puVar8 = (uint)(ushort)*puVar6;
          puVar6 = (uint *)((int)puVar6 + iVar2);
          puVar8 = (uint *)((int)puVar8 + iVar1);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        return;
      }
      break;
    case '\x03':
      if (0 < param_2) {
        local_8 = param_2;
        do {
          *puVar8 = (uint)(uint3)*puVar6;
          puVar6 = (uint *)((int)puVar6 + iVar2);
          puVar8 = (uint *)((int)puVar8 + iVar1);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        return;
      }
      break;
    case '\x04':
      if (0 < param_2) {
        local_8 = param_2;
        do {
          *puVar8 = *puVar6;
          puVar6 = (uint *)((int)puVar6 + iVar2);
          puVar8 = (uint *)((int)puVar8 + iVar1);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        return;
      }
      break;
    default:
      bVar7 = *(byte *)((int)param_1 + 9) & 3;
      uVar9 = (uint)(*(byte *)((int)param_1 + 9) >> 2);
      if (0 < param_2) {
        local_10 = param_2;
        puVar3 = puVar8;
        puVar4 = puVar6;
        uVar5 = uVar9;
        do {
          for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar3 = *puVar4;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          if (bVar7 == 1) {
            *puVar3 = (uint)(byte)*puVar4;
          }
          else if (bVar7 == 2) {
            *puVar3 = (uint)(ushort)*puVar4;
          }
          else if (bVar7 == 3) {
            *puVar3 = (uint)(uint3)*puVar4;
          }
          local_10 = local_10 + -1;
          puVar3 = puVar8;
          puVar4 = puVar6;
          uVar5 = uVar9;
        } while (local_10 != 0);
      }
    }
  }
  return;
}

// 01070260  FUN_01070260  size=710  [run]
void __thiscall FUN_01070260(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *in_EAX;
  int iVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_20;
  uint local_1c;
  int local_10;
  int local_c;
  
  iVar3 = in_EAX[1];
  bVar1 = *(byte *)((int)in_EAX + 9);
  iVar4 = param_1[1];
  iVar10 = *param_1;
  bVar2 = *(byte *)((int)param_1 + 9);
  iVar6 = *in_EAX;
  if (bVar2 == bVar1) {
    uVar7 = (uint)bVar2;
    if (0 < param_2) {
      iVar11 = iVar10 + 2;
      local_c = param_2;
      do {
        iVar5 = 0;
        if (3 < uVar7) {
          pfVar8 = (float *)(iVar6 + 8);
          do {
            pfVar8[-2] = (float)*(byte *)(iVar11 + -2 + iVar5) * 0.003921569;
            pfVar8[-1] = (float)*(byte *)(iVar11 + -1 + iVar5) * 0.003921569;
            *pfVar8 = (float)*(byte *)(iVar11 + iVar5) * 0.003921569;
            pfVar8[1] = (float)*(byte *)(iVar11 + 1 + iVar5) * 0.003921569;
            iVar5 = iVar5 + 4;
            pfVar8 = pfVar8 + 4;
          } while (iVar5 < (int)(uVar7 - 3));
        }
        for (; iVar5 < (int)uVar7; iVar5 = iVar5 + 1) {
          *(float *)(iVar6 + iVar5 * 4) = (float)*(byte *)(iVar5 + iVar10) * 0.003921569;
        }
        iVar6 = iVar6 + iVar3;
        iVar10 = iVar10 + iVar4;
        iVar11 = iVar11 + iVar4;
        local_c = local_c + -1;
      } while (local_c != 0);
      return;
    }
  }
  else if ((*(char *)((int)param_1 + 10) == '\a') && (*(char *)((int)in_EAX + 10) == '\b')) {
    uVar7 = (uint)bVar1;
    if (((uint)bVar2 == uVar7 - 1) && (0 < param_2)) {
      iVar11 = iVar10 + 2;
      local_10 = param_2;
      do {
        iVar5 = 0;
        if (3 < uVar7) {
          pfVar8 = (float *)(iVar6 + 8);
          do {
            pfVar8[-2] = (float)*(byte *)(iVar11 + -2 + iVar5) * 0.003921569;
            pfVar8[-1] = (float)*(byte *)(iVar11 + -1 + iVar5) * 0.003921569;
            *pfVar8 = (float)*(byte *)(iVar11 + iVar5) * 0.003921569;
            pfVar8[1] = (float)*(byte *)(iVar11 + 1 + iVar5) * 0.003921569;
            iVar5 = iVar5 + 4;
            pfVar8 = pfVar8 + 4;
          } while (iVar5 < (int)(uVar7 - 3));
        }
        for (; iVar5 < (int)uVar7; iVar5 = iVar5 + 1) {
          *(float *)(iVar6 + iVar5 * 4) = (float)*(byte *)(iVar5 + iVar10) * 0.003921569;
        }
        iVar6 = iVar6 + iVar3;
        iVar10 = iVar10 + iVar4;
        iVar11 = iVar11 + iVar4;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      return;
    }
  }
  else if (((*(char *)((int)param_1 + 10) == '\b') || (*(char *)((int)in_EAX + 10) == '\a')) &&
          ((uVar7 = (uint)bVar1, uVar7 == bVar2 - 1 && (0 < param_2)))) {
    local_20 = param_2;
    do {
      iVar5 = 0;
      iVar11 = 0;
      local_10 = 0;
      local_1c = 0;
      if (1 < uVar7) {
        do {
          bVar1 = *(byte *)(iVar11 + iVar10);
          *(float *)(iVar6 + iVar11 * 4) = (float)bVar1 * 0.003921569;
          iVar5 = iVar5 + (uint)bVar1;
          uVar9 = (uint)*(byte *)(iVar11 + 1 + iVar10);
          local_10 = local_10 + uVar9;
          *(float *)(iVar6 + 4 + iVar11 * 4) = (float)uVar9 * 0.003921569;
          iVar11 = iVar11 + 2;
        } while (iVar11 < (int)(uVar7 - 1));
      }
      if (iVar11 < (int)uVar7) {
        local_1c = (uint)*(byte *)(iVar11 + iVar10);
        *(float *)(iVar6 + iVar11 * 4) = (float)local_1c * 0.003921569;
      }
      iVar10 = iVar10 + iVar4;
      *(float *)(iVar6 + uVar7 * 4) =
           (float)(int)(((0xff - local_10) - iVar5) - local_1c) * 0.003921569;
      iVar6 = iVar6 + iVar3;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}

// 01070530  FUN_01070530  size=327  [run]
void __thiscall FUN_01070530(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *in_EAX;
  int iVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int local_14;
  
  iVar3 = in_EAX[1];
  bVar1 = *(byte *)((int)in_EAX + 9);
  iVar4 = param_1[1];
  iVar9 = *param_1;
  bVar2 = *(byte *)((int)param_1 + 9);
  iVar6 = *in_EAX;
  if (bVar2 == bVar1) {
    if (0 < param_2) {
      do {
        iVar5 = 0;
        if (bVar2 != 0) {
          do {
            *(char *)(iVar5 + iVar6) = (char)(int)(*(float *)(iVar9 + iVar5 * 4) * 255.0);
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)(uint)bVar2);
        }
        iVar6 = iVar6 + iVar3;
        iVar9 = iVar9 + iVar4;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return;
    }
  }
  else if ((*(char *)((int)param_1 + 10) == '\a') && (*(char *)((int)in_EAX + 10) == '\b')) {
    uVar10 = (uint)bVar1;
    if (((uint)bVar2 == uVar10 - 1) && (0 < param_2)) {
      do {
        iVar5 = 0;
        if (uVar10 != 0) {
          do {
            *(char *)(iVar5 + iVar6) = (char)(int)(*(float *)(iVar9 + iVar5 * 4) * 255.0);
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)uVar10);
        }
        iVar6 = iVar6 + iVar3;
        iVar9 = iVar9 + iVar4;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return;
    }
  }
  else if (((*(char *)((int)param_1 + 10) == '\b') || (*(char *)((int)in_EAX + 10) == '\a')) &&
          ((uVar10 = (uint)bVar1, uVar10 == bVar2 - 1 && (0 < param_2)))) {
    local_14 = param_2;
    do {
      cVar8 = '\0';
      iVar5 = 0;
      if (uVar10 != 0) {
        do {
          cVar7 = (char)(int)(*(float *)(iVar9 + iVar5 * 4) * 255.0);
          cVar8 = cVar8 + cVar7;
          *(char *)(iVar5 + iVar6) = cVar7;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar10);
      }
      iVar9 = iVar9 + iVar4;
      *(char *)(uVar10 + iVar6) = -1 - cVar8;
      iVar6 = iVar6 + iVar3;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

// 01070690  FUN_01070690  size=275  [run]
void __fastcall FUN_01070690(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if ((((*(char *)((int)param_2 + 9) == '\x03') && (*(char *)((int)in_EAX + 9) == '\x04')) &&
      (*(char *)(param_2 + 2) == '\n')) && (*(char *)(in_EAX + 2) == '\n')) {
    puVar2 = (undefined4 *)*in_EAX;
    puVar4 = (undefined4 *)*param_2;
    uVar5 = (uint)param_2[1] >> 2;
    uVar7 = (uint)in_EAX[1] >> 2;
    iVar6 = 0;
    if (3 < param_3) {
      iVar8 = (param_3 - 4U >> 2) + 1;
      iVar6 = iVar8 * 4;
      do {
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar3 = puVar4 + uVar5;
        puVar2[2] = puVar4[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + uVar7;
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar4 = puVar3 + uVar5;
        puVar2[2] = puVar3[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + uVar7;
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar3 = puVar4 + uVar5;
        puVar2[2] = puVar4[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + uVar7;
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar4 = puVar3 + uVar5;
        puVar2[2] = puVar3[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + uVar7;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (iVar6 < param_3) {
      param_3 = param_3 - iVar6;
      do {
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        uVar1 = puVar4[2];
        puVar2[3] = 0;
        puVar2[2] = uVar1;
        puVar4 = puVar4 + uVar5;
        puVar2 = puVar2 + uVar7;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  return;
}

// 010707B0  FUN_010707b0  size=76  [run]
void FUN_010707b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 0x100) = 0;
  *(undefined4 *)(param_3 + 0x100) = 0;
  iVar1 = *(int *)(param_1 + 0x100);
  if (0 < iVar1) {
    do {
      FUN_0106e870(param_1);
      param_1 = param_1 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

// 01070800  FUN_01070800  size=95  [run]
void __fastcall
FUN_01070800(undefined4 *param_1,byte *param_2,undefined4 param_3,float param_4,int param_5)

{
  int iVar1;
  
  iVar1 = (int)((uint)(byte)(&DAT_017d5474)[*param_2] * (uint)param_2[1] + 3) >> 2;
  if (0.5 <= param_4) {
    FUN_01015e80(param_5,param_3,iVar1);
  }
  else if (iVar1 != 0) {
    param_5 = param_5 - (int)param_1;
    do {
      *(undefined4 *)(param_5 + (int)param_1) = *param_1;
      param_1 = param_1 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
  }
  return;
}

// 01070860  FUN_01070860  size=767  [run]
/* WARNING: Removing unreachable block (ram,0x01070a54) */
/* WARNING: Removing unreachable block (ram,0x01070abd) */

void __thiscall FUN_01070860(float *param_1,uint *param_2,float param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char *in_EAX;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  uint *puVar15;
  float fVar16;
  uint local_1c;
  
  cVar1 = *in_EAX;
  local_1c = (uint)(byte)in_EAX[1];
  if (cVar1 == '\b') {
    if (local_1c != 0) {
      puVar15 = param_2;
      do {
        uVar2 = *(uint *)((int)puVar15 + ((int)param_1 - (int)param_2));
        uVar3 = *puVar15;
        fVar16 = (float)(uVar2 >> 0x10 & 0xff);
        fVar4 = (float)(uVar2 >> 8 & 0xff);
        local_1c = local_1c - 1;
        *(uint *)((int)puVar15 + (param_4 - (int)param_2)) =
             (((uint)(((float)(uVar3 >> 0x10 & 0xff) - fVar16) * param_3 + fVar16 + 8388608.0) &
               0xff | (int)(((float)(uVar3 >> 0x18) - (float)(uVar2 >> 0x18)) * param_3 +
                            (float)(uVar2 >> 0x18) + 8388608.0) << 8) << 8 |
             (uint)(((float)(uVar3 >> 8 & 0xff) - fVar4) * param_3 + fVar4 + 8388608.0) & 0xff) << 8
             | (uint)(((float)(uVar3 & 0xff) - (float)(uVar2 & 0xff)) * param_3 +
                      (float)(uVar2 & 0xff) + 8388608.0) & 0xff;
        puVar15 = puVar15 + 1;
      } while (local_1c != 0);
    }
  }
  else if (cVar1 == '\n') {
    iVar14 = 0;
    if (3 < local_1c) {
      pfVar12 = (float *)(param_2 + 1);
      pfVar13 = (float *)(param_4 + 8);
      iVar14 = 0;
      fVar16 = 1.0 - param_3;
      do {
        pfVar13[-2] = param_1[iVar14] * fVar16 + pfVar12[-1] * param_3;
        *(float *)((param_4 - (int)param_2) + (int)pfVar12) =
             *(float *)(((int)param_1 - (int)param_2) + (int)pfVar12) * fVar16 + *pfVar12 * param_3;
        *pfVar13 = *(float *)((int)pfVar13 + ((int)param_1 - param_4)) * fVar16 +
                   pfVar12[1] * param_3;
        pfVar13[1] = param_1[iVar14 + 3] * fVar16 + pfVar12[2] * param_3;
        iVar14 = iVar14 + 4;
        pfVar12 = pfVar12 + 4;
        pfVar13 = pfVar13 + 4;
      } while (iVar14 < (int)(local_1c - 3));
    }
    if (iVar14 < (int)local_1c) {
      pfVar12 = (float *)(param_2 + iVar14);
      iVar14 = local_1c - iVar14;
      do {
        *(float *)((int)pfVar12 + (param_4 - (int)param_2)) =
             *(float *)((int)pfVar12 + ((int)param_1 - (int)param_2)) * (1.0 - param_3) +
             *pfVar12 * param_3;
        pfVar12 = pfVar12 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      return;
    }
  }
  else {
    if (cVar1 != '\v') {
      FUN_01070800(param_2,param_3,param_4);
      return;
    }
    if (local_1c != 0) {
      iVar14 = (int)param_2 - (int)param_1;
      param_4 = param_4 - (int)param_1;
      do {
        pfVar12 = (float *)(iVar14 + (int)param_1);
        fVar16 = pfVar12[1];
        fVar4 = pfVar12[2];
        fVar5 = pfVar12[3];
        fVar6 = param_1[1];
        fVar7 = param_1[2];
        fVar8 = param_1[3];
        fVar9 = param_1[1];
        fVar10 = param_1[2];
        fVar11 = param_1[3];
        pfVar13 = (float *)(param_4 + (int)param_1);
        *pfVar13 = (*pfVar12 - *param_1) * param_3 + *param_1;
        pfVar13[1] = (fVar16 - fVar6) * param_3 + fVar9;
        pfVar13[2] = (fVar4 - fVar7) * param_3 + fVar10;
        pfVar13[3] = (fVar5 - fVar8) * param_3 + fVar11;
        param_1 = param_1 + 4;
        local_1c = local_1c - 1;
      } while (local_1c != 0);
      return;
    }
  }
  return;
}

// 01070B60  FUN_01070b60  size=502  [run]
void FUN_01070b60(undefined1 *param_1,int *param_2,int *param_3,float param_4)

{
  float *pfVar1;
  char *pcVar2;
  short *psVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_18;
  int local_14;
  
  if (((char)param_2[2] != (char)param_3[2]) ||
     (*(byte *)((int)param_2 + 9) != *(byte *)((int)param_3 + 9))) goto switchD_01070ba9_caseD_9;
  uVar10 = (uint)*(byte *)((int)param_2 + 9);
  switch((char)param_2[2]) {
  case '\x01':
  case '\x02':
    pcVar2 = (char *)*param_2;
    iVar4 = 0;
    if (uVar10 == 0) goto LAB_01070d41;
    iVar8 = *param_3 - (int)pcVar2;
    while (*pcVar2 == pcVar2[iVar8]) {
      iVar4 = iVar4 + 1;
      pcVar2 = pcVar2 + 1;
      if ((int)uVar10 <= iVar4) {
        *param_1 = 1;
        return;
      }
    }
    break;
  case '\x03':
  case '\x04':
    psVar3 = (short *)*param_2;
    iVar4 = 0;
    if (uVar10 != 0) {
      iVar8 = *param_3 - (int)psVar3;
      do {
        if (*psVar3 != *(short *)(iVar8 + (int)psVar3)) goto switchD_01070ba9_caseD_9;
        iVar4 = iVar4 + 1;
        psVar3 = psVar3 + 1;
      } while (iVar4 < (int)uVar10);
    }
    goto LAB_01070d41;
  case '\x05':
  case '\x06':
  case '\a':
    param_2 = (int *)*param_2;
    iVar4 = 0;
    if (uVar10 == 0) goto LAB_01070d41;
    iVar8 = *param_3 - (int)param_2;
    while (*param_2 == *(int *)(iVar8 + (int)param_2)) {
      iVar4 = iVar4 + 1;
      param_2 = param_2 + 1;
      if ((int)uVar10 <= iVar4) {
        *param_1 = 1;
        return;
      }
    }
    break;
  case '\b':
    puVar5 = (uint *)*param_3;
    local_18 = 0;
    if (uVar10 != 0) {
      iVar4 = *param_2 - (int)puVar5;
      do {
        uVar7 = *(uint *)(iVar4 + (int)puVar5);
        uVar9 = *puVar5;
        if (uVar7 != uVar9) {
          if (param_4 == 0.0) goto switchD_01070ba9_caseD_9;
          local_14 = 0;
          do {
            iVar8 = (uVar7 & 0xff) - (uVar9 & 0xff);
            uVar6 = iVar8 >> 0x1f;
            if ((int)(param_4 * 255.0) < (int)(iVar8 + uVar6 ^ uVar6))
            goto switchD_01070ba9_caseD_9;
            local_14 = local_14 + 1;
            uVar7 = uVar7 >> 8;
            uVar9 = uVar9 >> 8;
          } while (local_14 < 4);
        }
        local_18 = local_18 + 1;
        puVar5 = puVar5 + 1;
        if ((int)uVar10 <= local_18) {
          *param_1 = 1;
          return;
        }
      } while( true );
    }
LAB_01070d41:
    *param_1 = 1;
    return;
  case '\n':
    pfVar1 = (float *)*param_2;
    iVar4 = 0;
    if (uVar10 == 0) goto LAB_01070d41;
    iVar8 = *param_3 - (int)pfVar1;
    while (ABS(*pfVar1 - *(float *)(iVar8 + (int)pfVar1)) < param_4) {
      iVar4 = iVar4 + 1;
      pfVar1 = pfVar1 + 1;
      if ((int)uVar10 <= iVar4) {
        *param_1 = 1;
        return;
      }
    }
  }
switchD_01070ba9_caseD_9:
  *param_1 = 0;
  return;
}

// 01070D90  FUN_01070d90  size=139  [run]
void __thiscall FUN_01070d90(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 local_8;
  
  iVar5 = *(int *)(param_3 + 0x100);
  if (0 < iVar5) {
    puVar6 = (undefined1 *)(param_3 + 3);
    local_8 = param_1;
    do {
      iVar2 = FUN_0106e770(puVar6[-1],*puVar6);
      if (iVar2 < 0) {
        iVar2 = *(int *)(param_2 + 0x100);
        *(int *)(param_2 + 0x100) = iVar2 + 1;
        *(undefined4 *)(param_2 + iVar2 * 8) = *(undefined4 *)(puVar6 + -3);
        *(undefined4 *)(param_2 + 4 + iVar2 * 8) = *(undefined4 *)(puVar6 + 1);
      }
      else {
        bVar1 = *(byte *)(param_2 + 1 + iVar2 * 8);
        bVar3 = puVar6[-2];
        if ((byte)puVar6[-2] < bVar1) {
          bVar3 = bVar1;
        }
        bVar1 = *(byte *)(param_2 + iVar2 * 8);
        *(byte *)(param_2 + 1 + iVar2 * 8) = bVar3;
        local_8 = CONCAT31(local_8._1_3_,puVar6[-3]);
        param_3 = CONCAT31(param_3._1_3_,bVar1);
        puVar4 = &param_3;
        if (bVar1 <= (byte)puVar6[-3]) {
          puVar4 = &local_8;
        }
        *(undefined1 *)(param_2 + iVar2 * 8) = *(undefined1 *)puVar4;
      }
      puVar6 = puVar6 + 8;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

// 01070E20  FUN_01070e20  size=56  [run]
void FUN_01070e20(int param_1,int param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (0 < param_3) {
    do {
      FUN_01070d90(param_1,param_2);
      param_2 = param_2 + 0x104;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 01070E60  FUN_01070e60  size=36  [run]
void FUN_01070e60(int param_1,int param_2,undefined4 param_3)

{
  FUN_0106f330(param_2 * 0x10 + param_1,param_3,*(undefined4 *)(param_1 + 0x204));
  return;
}

// 01070E90  FUN_01070e90  size=36  [run]
void FUN_01070e90(int param_1,int param_2,undefined4 param_3)

{
  FUN_0106f450(param_2 * 0x10 + param_1,param_3,*(undefined4 *)(param_1 + 0x204));
  return;
}

// 01070EC0  FUN_01070ec0  size=79  [run]
void FUN_01070ec0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x204);
  iVar2 = *(int *)(param_1 + 0x200);
  if (((*(int *)(param_2 + 0x204) == iVar1) || (iVar2 != *(int *)(param_2 + 0x200))) && (0 < iVar2))
  {
    param_2 = param_2 - param_1;
    do {
      FUN_0106f990(param_1,param_2 + param_1,iVar1);
      param_1 = param_1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 01070F10  FUN_01070f10  size=509  [run]
int * FUN_01070f10(int *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_844 [131];
  undefined1 local_638 [516];
  undefined4 local_434;
  int local_42c [128];
  int local_22c;
  undefined4 local_228;
  undefined1 local_220 [260];
  undefined1 local_11c [260];
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_8;
  
  if (param_3 == 0) {
    return (int *)0x0;
  }
  if (param_3 == 1) {
    FUN_01006000();
    return (int *)*param_2;
  }
  FUN_0106e670();
  (**(code **)(*(int *)*param_2 + 0x14))(local_11c);
  iVar5 = 0;
  iVar6 = 0;
  if (0 < param_3) {
    do {
      piVar3 = (int *)param_2[iVar6];
      FUN_0106e670();
      (**(code **)(*piVar3 + 0x14))(local_220);
      cVar1 = FUN_0106e6b0(local_11c);
      if (cVar1 == '\0') {
        return (int *)0x0;
      }
      iVar2 = (**(code **)(*piVar3 + 0x18))();
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + iVar2;
    } while (iVar6 < param_3);
  }
  local_18 = (int *)(**(code **)(*param_1 + 0x24))(local_11c,iVar5);
  if (local_18 != (int *)0x0) {
    local_14 = 0;
    local_10 = 0xffffffff;
    local_c = 0;
    local_8 = 6;
    iVar5 = (**(code **)(*local_18 + 0x1c))(&local_14,local_844);
    if (iVar5 != 1) {
      FUN_010060a0();
      return (int *)0x0;
    }
    iVar6 = 0;
    piVar3 = local_844;
    piVar7 = local_42c;
    for (iVar5 = 0x83; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar7 = piVar7 + 1;
    }
    iVar5 = local_22c;
    if (0 < param_3) {
      do {
        piVar3 = (int *)param_2[iVar6];
        local_14 = 0;
        local_10 = 0xffffffff;
        local_c = 0;
        local_8 = 1;
        iVar2 = (**(code **)(*piVar3 + 0x1c))(&local_14,local_638);
        if (iVar2 != 1) {
          FUN_010060a0();
          return (int *)0x0;
        }
        local_228 = local_434;
        FUN_01070ec0(local_638,local_42c);
        (**(code **)(*piVar3 + 0x34))(local_638);
        iVar2 = (**(code **)(*piVar3 + 0x18))();
        iVar4 = 0;
        if (0 < iVar5) {
          piVar3 = local_42c;
          do {
            *piVar3 = *piVar3 + piVar3[1] * iVar2;
            iVar4 = iVar4 + 1;
            piVar3 = piVar3 + 4;
            iVar5 = local_22c;
          } while (iVar4 < local_22c);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_3);
    }
    piVar3 = local_18;
    (**(code **)(*local_18 + 0x34))(local_844);
    return piVar3;
  }
  return (int *)0x0;
}

// 01071120  FUN_01071120  size=207  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_01071120(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  int in_EAX;
  float *pfVar4;
  uint *puVar5;
  undefined1 auVar6 [16];
  
  auVar3 = _DAT_017d5540;
  if ((((*(char *)((int)param_2 + 9) == '\x04') && (*(char *)((int)param_3 + 9) == '\x01')) &&
      (*(char *)(param_2 + 2) == '\n')) && ((char)param_3[2] == '\b')) {
    puVar5 = (uint *)*param_3;
    pfVar4 = (float *)*param_2;
    uVar1 = param_2[1];
    uVar2 = param_3[1];
    if (0 < in_EAX) {
      do {
        auVar6._0_4_ = *pfVar4 * 255.0;
        auVar6._4_4_ = pfVar4[1] * 255.0;
        auVar6._8_4_ = pfVar4[2] * 255.0;
        auVar6._12_4_ = pfVar4[3] * 255.0;
        pfVar4 = (float *)((int)pfVar4 + (uVar1 & 0xfffffffc));
        auVar6 = maxps(ZEXT816(0),auVar6);
        auVar6 = minps(auVar3,auVar6);
        *puVar5 = (((int)(auVar6._12_4_ + 8388608.0) << 8 | (uint)(auVar6._8_4_ + 8388608.0) & 0xff)
                   << 8 | (uint)(auVar6._4_4_ + 8388608.0) & 0xff) << 8 |
                  (uint)(auVar6._0_4_ + 8388608.0) & 0xff;
        puVar5 = (uint *)((int)puVar5 + (uVar2 & 0xfffffffc));
        in_EAX = in_EAX + -1;
      } while (in_EAX != 0);
    }
  }
  return;
}

// 010711F0  FUN_010711f0  size=809  [run]
void FUN_010711f0(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 local_214 [512];
  undefined8 local_14;
  undefined1 local_c;
  undefined7 uStack_b;
  
  bVar1 = *(byte *)(param_2 + 2);
  bVar2 = *(byte *)(param_1 + 1);
  if (bVar2 == bVar1) {
    if (*(byte *)((int)param_1 + 9) == *(byte *)((int)param_2 + 9)) {
      FUN_0106ecf0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),*param_2,param_2[1],
                   (uint)(byte)(&DAT_017d5474)[bVar2] * (uint)*(byte *)((int)param_1 + 9) + 3 &
                   0xfffffffc,param_3);
      return;
    }
    if ((bVar2 == bVar1) && (*(byte *)((int)param_2 + 9) <= *(byte *)((int)param_1 + 9))) {
      uVar3 = (uint)(byte)(&DAT_017d5474)[bVar1] * (uint)*(byte *)((int)param_2 + 9) + 3 &
              0xfffffffc;
      goto LAB_01071275;
    }
  }
  if (bVar2 == 7) {
    switch(bVar1) {
    case 2:
      FUN_0106f9d0(param_3);
      return;
    case 3:
      FUN_0106fb70(param_2);
      return;
    case 8:
      FUN_0106fbe0(param_3);
      return;
    case 10:
      FUN_0106fea0(param_3);
      return;
    }
  }
  else {
    if (bVar2 == 2) {
      if (bVar1 == 3) {
        FUN_0106eea0(param_3);
        return;
      }
      if (bVar1 != 7) {
        if (bVar1 != 10) {
          return;
        }
        FUN_01070260(param_3);
        return;
      }
      FUN_01070090(param_3);
      return;
    }
    if (bVar2 == 3) {
      if (bVar1 != 2) {
        return;
      }
      FUN_0106ef00(param_3);
      return;
    }
    if (bVar2 == 10) {
      if (bVar1 == 2) {
        FUN_01070530(param_3);
        return;
      }
      if (bVar1 != 8) {
        if (bVar1 != 10) {
          return;
        }
        FUN_01070690(param_3);
        return;
      }
      FUN_01071120(param_2);
      return;
    }
    if ((((bVar2 == 0xb) && (bVar1 == 10)) && (*(byte *)((int)param_2 + 9) < 5)) &&
       (*(char *)((int)param_1 + 9) == '\x01')) {
      uVar3 = (uint)*(byte *)((int)param_2 + 9) * 4;
LAB_01071275:
      FUN_0106ecf0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),*param_2,param_2[1],
                   uVar3,param_3);
      return;
    }
    if ((bVar2 == 6) && (*(char *)((int)param_1 + 9) == '\x01')) {
      if (bVar1 == 8) goto LAB_01071416;
      if ((*(char *)((int)param_1 + 10) == '\x03') && (bVar1 == 10)) {
        local_14 = *param_1;
        _local_c = CONCAT71((int7)((ulonglong)param_1[1] >> 8),8);
        FUN_0106fc40(param_3);
        return;
      }
    }
    if ((bVar2 == 8) && (*(char *)((int)param_1 + 9) == '\x01')) {
      if (bVar1 == 6) {
LAB_01071416:
        FUN_0106ecf0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),*param_2,param_2[1],4,
                     param_3);
        return;
      }
      if (bVar1 == 10) {
        FUN_0106fc40(param_3);
        return;
      }
    }
    hkErrStream::hkErrStream(local_214,0x200);
    uVar3 = (uint)*(byte *)(param_2 + 2);
    uVar4 = (uint)*(byte *)(param_1 + 1);
    puVar5 = &DAT_017d560c;
    FUN_01018d00("Cannot convert vertex format from ");
    FUN_01018dc0(uVar4);
    FUN_01018d00(puVar5);
    FUN_01018dc0(uVar3);
    (**(code **)(*DAT_01f8fc58 + 0xc))
              (1,0xabba4523,local_214,
               "D:\\project\\PRJ_012\\p1\\common\\mw\\hk2011_3_0_r1\\Source\\Common\\GeometryUtilities\\Mesh\\Utils\\VertexBufferUtil\\hkMeshVertexBufferUtil.cpp"
               ,0x5b0);
    hkBaseObject::hkBaseObject_38();
  }
  return;
}

// 01071540  FUN_01071540  size=379  [run]
void FUN_01071540(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_634 [524];
  undefined1 local_428 [516];
  undefined4 local_224;
  undefined1 local_21c [260];
  undefined1 local_118 [2];
  undefined1 local_116 [254];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0xffffffff;
  local_c = 0;
  local_8 = 3;
  iVar2 = (**(code **)(*param_1 + 0x18))();
  iVar3 = (**(code **)(*param_2 + 0x18))();
  if ((iVar2 == iVar3) && (iVar2 = (**(code **)(*param_1 + 0x1c))(&local_14,local_428), iVar2 == 1))
  {
    iVar2 = (**(code **)(*param_2 + 0x1c))(&local_14,local_634);
    if (iVar2 != 1) {
      (**(code **)(*param_1 + 0x34))(local_428);
      return;
    }
    FUN_0106e670();
    FUN_0106e670();
    (**(code **)(*param_1 + 0x14))(local_118);
    (**(code **)(*param_2 + 0x14))(local_21c);
    cVar1 = FUN_0106e6b0(local_21c);
    if (cVar1 == '\0') {
      iVar2 = 0;
      if (0 < local_18) {
        puVar4 = local_428;
        puVar5 = local_116 + 1;
        do {
          iVar3 = FUN_0106e770(puVar5[-1],*puVar5);
          if (-1 < iVar3) {
            FUN_010711f0(puVar4,local_634 + iVar3 * 0x10,local_224);
          }
          iVar2 = iVar2 + 1;
          puVar5 = puVar5 + 8;
          puVar4 = puVar4 + 0x10;
        } while (iVar2 < local_18);
      }
    }
    else {
      FUN_01070ec0(local_428,local_634);
    }
    (**(code **)(*param_1 + 0x34))(local_428);
    (**(code **)(*param_2 + 0x34))(local_634);
  }
  return;
}

// 010716C0  FUN_010716c0  size=242  [run]
undefined1 * FUN_010716c0(undefined1 *param_1,undefined4 *param_2,int param_3,float param_4)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_2 + 2) == *(char *)(param_3 + 8)) {
    if (*(char *)((int)param_2 + 9) == *(char *)(param_3 + 9)) {
      if ((*(char *)(param_2 + 2) != '\n') && (*(char *)((int)param_2 + 9) != '\x03')) {
        FUN_01070b60(param_1,param_2,param_3,param_4);
        return param_1;
      }
      puVar1 = (undefined8 *)*param_2;
      if (ABS(1.0 - (*(float *)(puVar1 + 1) * *(float *)(puVar1 + 1) +
                    (float)((ulonglong)*puVar1 >> 0x20) * (float)((ulonglong)*puVar1 >> 0x20) +
                    (float)*puVar1 * (float)*puVar1)) < param_4) {
        *param_1 = 1;
        return param_1;
      }
      *param_1 = 0;
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}

// 010717C0  FUN_010717c0  size=215  [run]
void FUN_010717c0(undefined1 *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_9;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  undefined1 local_5;
  
  iVar3 = 0;
  if (0 < param_4) {
    param_3 = param_3 - param_2;
    do {
      if (*(char *)(param_2 + 10) != *(char *)(param_2 + 10 + param_3)) goto LAB_0107188a;
      switch(*(char *)(param_2 + 10)) {
      case '\x01':
      case '\n':
        uVar4 = *param_5;
        puVar1 = &local_5;
        break;
      case '\x02':
      case '\x04':
      case '\x05':
        pcVar2 = (char *)FUN_010716c0(&local_6,param_2,param_3 + param_2,param_5[1]);
        goto LAB_01071867;
      case '\x03':
        uVar4 = param_5[2];
        puVar1 = &local_7;
        break;
      default:
        uVar4 = param_5[3];
        puVar1 = &local_9;
        break;
      case '\t':
        uVar4 = param_5[4];
        puVar1 = &local_8;
      }
      pcVar2 = (char *)FUN_01070b60(puVar1,param_2,param_3 + param_2,uVar4);
LAB_01071867:
      if (*pcVar2 == '\0') {
LAB_0107188a:
        *param_1 = 0;
        return;
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 0x10;
    } while (iVar3 < param_4);
  }
  *param_1 = 1;
  return;
}

// 010718C0  FUN_010718c0  size=81  [run]
void FUN_010718c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x204);
  iVar2 = *(int *)(param_1 + 0x200);
  if (((*(int *)(param_2 + 0x204) == iVar1) || (iVar2 != *(int *)(param_2 + 0x200))) && (0 < iVar2))
  {
    param_2 = param_2 - param_1;
    do {
      FUN_010711f0(param_1,param_2 + param_1,iVar1);
      param_1 = param_1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 01071920  FUN_01071920  size=251  [run]
undefined4 FUN_01071920(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 local_3c8 [516];
  int local_1c4;
  undefined1 local_1bc [260];
  undefined4 local_b8;
  int local_b4;
  undefined1 local_34;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_8;
  
  FUN_0106e670();
  (**(code **)(*param_1 + 0x14))(local_1bc);
  local_b4 = FUN_0106e770(param_2,param_3);
  if (-1 < local_b4) {
    local_14 = 0;
    local_10 = 0xffffffff;
    local_c = 0;
    local_8 = 3;
    local_b8 = 1;
    local_34 = 9;
    iVar1 = (**(code **)(*param_1 + 0x20))(&local_14,&local_b8,local_3c8);
    if (iVar1 == 1) {
      if ((int)(param_4[2] & 0x3fffffff) < local_1c4) {
        iVar1 = (param_4[2] & 0x3fffffff) * 2;
        if (iVar1 <= local_1c4) {
          iVar1 = local_1c4;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar1,0x10);
      }
      param_4[1] = local_1c4;
      (**(code **)(*param_1 + 0x24))(local_3c8,0,*param_4);
      (**(code **)(*param_1 + 0x34))(local_3c8);
      return 0;
    }
  }
  return 1;
}

// 01071A20  FUN_01071a20  size=578  [run]
void FUN_01071a20(undefined4 *param_1,float *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 (*pauVar4) [12];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar10;
  undefined1 auVar9 [12];
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
  
  pauVar4 = (undefined1 (*) [12])*param_1;
  iVar1 = param_1[1];
  switch(*(undefined1 *)((int)param_1 + 10)) {
  case 1:
    if (0 < param_4) {
      do {
        fVar11 = (float)*(undefined8 *)*pauVar4;
        fVar12 = (float)((ulonglong)*(undefined8 *)*pauVar4 >> 0x20);
        fVar17 = *(float *)(*pauVar4 + 8);
        fVar15 = param_2[2];
        fVar8 = param_2[0xe];
        fVar16 = param_2[6];
        fVar10 = param_2[10];
        *(ulonglong *)*pauVar4 =
             CONCAT44(fVar11 * param_2[1] + param_2[0xd] + fVar12 * param_2[5] + fVar17 * param_2[9]
                      ,fVar11 * *param_2 + param_2[0xc] + fVar12 * param_2[4] + fVar17 * param_2[8])
        ;
        *(float *)(*pauVar4 + 8) = fVar11 * fVar15 + fVar8 + fVar12 * fVar16 + fVar17 * fVar10;
        pauVar4 = (undefined1 (*) [12])(*pauVar4 + iVar1);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  case 2:
  case 5:
    if (0 < param_4) {
      param_1 = (undefined4 *)param_4;
      do {
        auVar3 = *pauVar4;
        auVar9 = auVar3;
        if ((param_3 & 2) != 0) {
          auVar9._0_8_ = CONCAT44(auVar3._4_4_,(int)*(undefined8 *)*pauVar4) ^ 0x8000000080000000;
          auVar9._8_4_ = auVar3._8_4_ ^ 0x80000000;
        }
        fVar17 = auVar9._0_4_;
        fVar8 = auVar9._4_4_;
        fVar10 = auVar9._8_4_;
        fVar15 = fVar17 * *param_2 + fVar8 * param_2[4] + fVar10 * param_2[8];
        fVar16 = fVar17 * param_2[1] + fVar8 * param_2[5] + fVar10 * param_2[9];
        fVar17 = fVar17 * param_2[2] + fVar8 * param_2[6] + fVar10 * param_2[10];
        if ((param_3 & 4) != 0) {
          fVar15 = -fVar15;
          fVar16 = -fVar16;
          fVar17 = -fVar17;
        }
        if ((param_3 & 1) != 0) {
          fVar8 = fVar15 * fVar15;
          fVar10 = fVar16 * fVar16;
          fVar11 = fVar17 * fVar17;
          fVar12 = fVar10 + fVar8 + fVar11;
          fVar13 = fVar10 + fVar8 + fVar11;
          fVar14 = fVar10 + fVar8 + fVar11;
          auVar19._0_12_ = ZEXT812(0);
          auVar19._12_4_ = 0;
          uVar5 = -(uint)(0.0 - fVar12 < 0.0);
          uVar6 = -(uint)(0.0 - fVar13 < 0.0);
          uVar7 = -(uint)(0.0 - fVar14 < 0.0);
          auVar2._4_4_ = fVar13;
          auVar2._0_4_ = fVar12;
          auVar2._8_4_ = fVar14;
          auVar2._12_4_ = fVar10 + fVar8 + fVar11;
          auVar20 = rsqrtps(auVar19,auVar2);
          fVar8 = auVar20._0_4_;
          fVar10 = auVar20._4_4_;
          fVar11 = auVar20._8_4_;
          fVar15 = (float)((uint)((float)(~-(uint)(fVar12 <= 0.0) &
                                         (uint)((3.0 - fVar8 * fVar12 * fVar8) * fVar8 * 0.5)) *
                                 fVar15) & uVar5 | ~uVar5 & (uint)fVar15);
          fVar16 = (float)((uint)((float)(~-(uint)(fVar13 <= 0.0) &
                                         (uint)((3.0 - fVar10 * fVar13 * fVar10) * fVar10 * 0.5)) *
                                 fVar16) & uVar6 | ~uVar6 & (uint)fVar16);
          fVar17 = (float)((uint)((float)(~-(uint)(fVar14 <= 0.0) &
                                         (uint)((3.0 - fVar11 * fVar14 * fVar11) * fVar11 * 0.5)) *
                                 fVar17) & uVar7 | ~uVar7 & (uint)fVar17);
        }
        *(ulonglong *)*pauVar4 = CONCAT44(fVar16,fVar15);
        *(float *)(*pauVar4 + 8) = fVar17;
        pauVar4 = (undefined1 (*) [12])(*pauVar4 + iVar1);
        param_1 = (undefined4 *)((int)param_1 + -1);
      } while (param_1 != (undefined4 *)0x0);
    }
    break;
  case 3:
    break;
  case 4:
    if (0 < param_4) {
      do {
        fVar17 = *(float *)(*pauVar4 + 8);
        fVar15 = (float)*(undefined8 *)*pauVar4;
        fVar16 = (float)((ulonglong)*(undefined8 *)*pauVar4 >> 0x20);
        fVar8 = fVar16 * param_2[4] + fVar15 * *param_2 + fVar17 * param_2[8];
        fVar10 = fVar16 * param_2[5] + fVar15 * param_2[1] + fVar17 * param_2[9];
        fVar17 = fVar16 * param_2[6] + fVar15 * param_2[2] + fVar17 * param_2[10];
        if ((param_3 & 1) != 0) {
          fVar15 = fVar8 * fVar8;
          fVar16 = fVar10 * fVar10;
          fVar11 = fVar17 * fVar17;
          fVar12 = fVar16 + fVar15 + fVar11;
          fVar13 = fVar16 + fVar15 + fVar11;
          fVar14 = fVar16 + fVar15 + fVar11;
          auVar18._0_12_ = ZEXT812(0);
          auVar18._12_4_ = 0;
          uVar5 = -(uint)(0.0 - fVar12 < 0.0);
          uVar6 = -(uint)(0.0 - fVar13 < 0.0);
          uVar7 = -(uint)(0.0 - fVar14 < 0.0);
          auVar20._4_4_ = fVar13;
          auVar20._0_4_ = fVar12;
          auVar20._8_4_ = fVar14;
          auVar20._12_4_ = fVar16 + fVar15 + fVar11;
          auVar20 = rsqrtps(auVar18,auVar20);
          fVar15 = auVar20._0_4_;
          fVar16 = auVar20._4_4_;
          fVar11 = auVar20._8_4_;
          fVar8 = (float)((uint)((float)(~-(uint)(fVar12 <= 0.0) &
                                        (uint)((3.0 - fVar15 * fVar12 * fVar15) * fVar15 * 0.5)) *
                                fVar8) & uVar5 | ~uVar5 & (uint)fVar8);
          fVar10 = (float)((uint)((float)(~-(uint)(fVar13 <= 0.0) &
                                         (uint)((3.0 - fVar16 * fVar13 * fVar16) * fVar16 * 0.5)) *
                                 fVar10) & uVar6 | ~uVar6 & (uint)fVar10);
          fVar17 = (float)((uint)((float)(~-(uint)(fVar14 <= 0.0) &
                                         (uint)((3.0 - fVar11 * fVar14 * fVar11) * fVar11 * 0.5)) *
                                 fVar17) & uVar7 | ~uVar7 & (uint)fVar17);
        }
        *(ulonglong *)*pauVar4 = CONCAT44(fVar10,fVar8);
        *(float *)(*pauVar4 + 8) = fVar17;
        pauVar4 = (undefined1 (*) [12])(*pauVar4 + iVar1);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
    break;
  default:
    goto switchD_01071a3c_default;
  }
switchD_01071a3c_default:
  return;
}

// 01071C80  FUN_01071c80  size=150  [run]
undefined4 FUN_01071c80(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_220 [512];
  int local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_8;
  
  local_14 = 0;
  local_10 = 0xffffffff;
  local_c = 0;
  local_8 = 3;
  iVar1 = (**(code **)(*param_1 + 0x1c))(&local_14,local_220);
  if (iVar1 == 1) {
    if (0 < local_20) {
      puVar2 = local_220;
      iVar1 = local_20;
      do {
        FUN_01071a20(puVar2,param_2,param_3,local_1c);
        puVar2 = puVar2 + 0x10;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    (**(code **)(*param_1 + 0x34))(local_220);
    return 0;
  }
  return 1;
}

// 01071D20  FUN_01071d20  size=402  [run]
undefined1 * FUN_01071d20(undefined1 *param_1,int *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  LPVOID pvVar3;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  DWORD dwTlsIndex;
  int local_c;
  
  uVar1 = param_2[0x80];
  if ((int)uVar1 < 1) {
    *param_1 = 0;
    return param_1;
  }
  if (uVar1 == 1) {
    *param_3 = *param_2;
    *param_4 = (uint)(byte)(&DAT_017d5474)[*(byte *)(param_2 + 2)] *
               (uint)*(byte *)((int)param_2 + 9) + 3 & 0xfffffffc;
    *param_1 = 1;
    return param_1;
  }
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  piVar4 = *(int **)((int)pvVar3 + 0xc);
  uVar7 = uVar1 * 0x10 + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar7) ||
     (*(uint *)((int)pvVar3 + 0x10) < (int)piVar4 + uVar7)) {
    piVar4 = (int *)FUN_0100b780(uVar7);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = (int)piVar4 + uVar7;
  }
  FUN_01015e80(piVar4,param_2,uVar1 * 0x10);
  if (1 < (int)uVar1) {
    FUN_01072690(piVar4,0,uVar1 - 1,FUN_01072360);
  }
  dwTlsIndex = DAT_01f8fc4c;
  iVar2 = *piVar4;
  local_c = 0;
  iVar6 = iVar2;
  if (0 < (int)uVar1) {
    pbVar5 = (byte *)(param_2 + 2);
    do {
      if (*(int *)(pbVar5 + -8) != iVar6) {
        *param_1 = 0;
        goto LAB_01071e4e;
      }
      iVar6 = iVar6 + ((uint)(byte)(&DAT_017d5474)[*pbVar5] * (uint)pbVar5[1] + 3 & 0xfffffffc);
      local_c = local_c + 1;
      pbVar5 = pbVar5 + 0x10;
    } while (local_c < (int)uVar1);
  }
  *param_4 = iVar6 - iVar2;
  *param_3 = iVar2;
  dwTlsIndex = DAT_01f8fc4c;
  *param_1 = 1;
LAB_01071e4e:
  pvVar3 = TlsGetValue(dwTlsIndex);
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar7) ||
      (uVar7 + (int)piVar4 != *(int *)((int)pvVar3 + 0xc))) ||
     (*(int **)((int)pvVar3 + 0x14) == piVar4)) {
    FUN_0100b9b0(piVar4,uVar7);
  }
  else {
    *(int **)((int)pvVar3 + 0xc) = piVar4;
  }
  if (-1 < (int)(uVar1 | 0x80000000)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(piVar4,uVar1 << 4);
  }
  return param_1;
}

// 01071EC0  FUN_01071ec0  size=1016  [run]
/* WARNING: Removing unreachable block (ram,0x01072164) */
/* WARNING: Removing unreachable block (ram,0x010721c9) */

void __fastcall
FUN_01071ec0(float *param_1,undefined1 (*param_2) [12],char *param_3,float param_4,float *param_5)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar27;
  float fVar28;
  undefined1 in_XMM3 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [12];
  uint local_14;
  
  local_14 = (uint)(byte)param_3[1];
  cVar3 = *param_3;
  if (cVar3 == '\b') {
    if (local_14 != 0) {
      iVar8 = (int)param_1 - (int)param_2;
      iVar7 = (int)param_5 - (int)param_2;
      do {
        uVar9 = *(uint *)(iVar8 + (int)param_2);
        uVar10 = *(uint *)*param_2;
        fVar14 = (float)(uVar9 >> 8 & 0xff);
        fVar16 = (float)(uVar9 >> 0x10 & 0xff);
        fVar17 = ((float)(uVar10 & 0xff) - (float)(uVar9 & 0xff)) * param_4 + (float)(uVar9 & 0xff);
        fVar14 = ((float)(uVar10 >> 8 & 0xff) - fVar14) * param_4 + fVar14;
        fVar16 = ((float)(uVar10 >> 0x10 & 0xff) - fVar16) * param_4 + fVar16;
        fVar18 = fVar17 * fVar17;
        fVar13 = fVar14 * fVar14;
        fVar15 = fVar16 * fVar16;
        auVar26._4_4_ = fVar18;
        auVar26._0_4_ = fVar18;
        auVar26._8_4_ = fVar18;
        auVar26._12_4_ = fVar18;
        auVar22._0_4_ = fVar13 + fVar18 + fVar15;
        auVar22._4_4_ = fVar13 + fVar18 + fVar15;
        auVar22._8_4_ = fVar13 + fVar18 + fVar15;
        auVar22._12_4_ = fVar13 + fVar18 + fVar15;
        auVar23 = rsqrtps(auVar26,auVar22);
        fVar18 = auVar23._0_4_;
        fVar13 = auVar23._4_4_;
        fVar15 = auVar23._8_4_;
        fVar19 = auVar23._12_4_;
        auVar23._0_4_ =
             (float)(~-(uint)(auVar22._0_4_ <= 0.0) &
                    (uint)((3.0 - fVar18 * auVar22._0_4_ * fVar18) * fVar18 * 0.5 * auVar22._0_4_));
        auVar23._4_4_ =
             (float)(~-(uint)(auVar22._4_4_ <= 0.0) &
                    (uint)((3.0 - fVar13 * auVar22._4_4_ * fVar13) * fVar13 * 0.5 * auVar22._4_4_));
        auVar23._8_4_ =
             (float)(~-(uint)(auVar22._8_4_ <= 0.0) &
                    (uint)((3.0 - fVar15 * auVar22._8_4_ * fVar15) * fVar15 * 0.5 * auVar22._8_4_));
        auVar23._12_4_ =
             ~-(uint)(auVar22._12_4_ <= 0.0) &
             (uint)((3.0 - fVar19 * auVar22._12_4_ * fVar19) * fVar19 * 0.5 * auVar22._12_4_);
        auVar30._4_4_ = fVar14;
        auVar30._0_4_ = fVar17;
        auVar30._8_4_ = fVar16;
        if (1e-06 < auVar23._0_4_) {
          auVar22 = rcpps(auVar22,auVar23);
          auVar30._0_4_ = (2.0 - auVar22._0_4_ * auVar23._0_4_) * auVar22._0_4_ * 255.0 * fVar17;
          auVar30._4_4_ = (2.0 - auVar22._4_4_ * auVar23._4_4_) * auVar22._4_4_ * 255.0 * fVar14;
          auVar30._8_4_ = (2.0 - auVar22._8_4_ * auVar23._8_4_) * auVar22._8_4_ * 255.0 * fVar16;
        }
        *(uint *)(iVar7 + (int)param_2) =
             (((int)(((float)(uVar10 >> 0x18) - (float)(uVar9 >> 0x18)) * param_4 +
                     (float)(uVar9 >> 0x18) + 8388608.0) << 8 |
              (uint)(auVar30._8_4_ + 8388608.0) & 0xff) << 8 |
             (uint)(auVar30._4_4_ + 8388608.0) & 0xff) << 8 |
             (uint)(auVar30._0_4_ + 8388608.0) & 0xff;
        param_2 = (undefined1 (*) [12])(*param_2 + 4);
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
  }
  else {
    if (cVar3 == '\n') {
      if (local_14 == 3) {
        fVar13 = (float)*(undefined8 *)param_1;
        fVar17 = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
        fVar13 = param_4 * ((float)*(undefined8 *)*param_2 - fVar13) + fVar13;
        fVar17 = param_4 * (SUB124(*param_2,4) - fVar17) + fVar17;
        fVar21 = param_4 * (SUB124(*param_2,8) - param_1[2]) + param_1[2];
        fVar14 = fVar13 * fVar13;
        fVar16 = fVar17 * fVar17;
        fVar18 = fVar21 * fVar21;
        fVar15 = fVar16 + fVar14 + fVar18;
        fVar19 = fVar16 + fVar14 + fVar18;
        fVar20 = fVar16 + fVar14 + fVar18;
        auVar25._0_12_ = ZEXT812(0);
        auVar25._12_4_ = 0;
        auVar6._4_4_ = fVar19;
        auVar6._0_4_ = fVar15;
        auVar6._8_4_ = fVar20;
        auVar6._12_4_ = fVar16 + fVar14 + fVar18;
        auVar23 = rsqrtps(auVar25,auVar6);
        fVar14 = auVar23._0_4_;
        fVar16 = auVar23._4_4_;
        fVar18 = auVar23._8_4_;
        *(ulonglong *)param_5 =
             CONCAT44((float)(~-(uint)(fVar19 <= 0.0) &
                             (uint)((3.0 - fVar16 * fVar19 * fVar16) * fVar16 * 0.5)) * fVar17,
                      (float)(~-(uint)(fVar15 <= 0.0) &
                             (uint)((3.0 - fVar14 * fVar15 * fVar14) * fVar14 * 0.5)) * fVar13);
        param_5[2] = (float)(~-(uint)(fVar20 <= 0.0) &
                            (uint)((3.0 - fVar18 * fVar20 * fVar18) * fVar18 * 0.5)) * fVar21;
        return;
      }
      if (local_14 == 4) {
        fVar17 = *param_1 + (*(float *)*param_2 - *param_1) * param_4;
        fVar19 = param_1[1] + (*(float *)(*param_2 + 4) - param_1[1]) * param_4;
        fVar20 = param_1[2] + (*(float *)(*param_2 + 8) - param_1[2]) * param_4;
        fVar21 = param_1[3] + (*(float *)param_2[1] - param_1[3]) * param_4;
        fVar14 = fVar20 * fVar20 + fVar17 * fVar17;
        fVar16 = fVar21 * fVar21 + fVar19 * fVar19;
        fVar18 = fVar17 * fVar17 + fVar20 * fVar20;
        fVar13 = fVar19 * fVar19 + fVar21 * fVar21;
        fVar15 = fVar16 + fVar14;
        fVar14 = fVar14 + fVar16;
        fVar16 = fVar13 + fVar18;
        fVar18 = fVar18 + fVar13;
        auVar24._0_12_ = ZEXT812(0);
        auVar24._12_4_ = 0;
        auVar5._4_4_ = fVar14;
        auVar5._0_4_ = fVar15;
        auVar5._8_4_ = fVar16;
        auVar5._12_4_ = fVar18;
        auVar23 = rsqrtps(auVar24,auVar5);
        fVar13 = auVar23._0_4_;
        fVar27 = auVar23._4_4_;
        fVar28 = auVar23._8_4_;
        fVar29 = auVar23._12_4_;
        *param_5 = (float)(~-(uint)(fVar15 <= 0.0) &
                          (uint)((3.0 - fVar13 * fVar15 * fVar13) * fVar13 * 0.5)) * fVar17;
        param_5[1] = (float)(~-(uint)(fVar14 <= 0.0) &
                            (uint)((3.0 - fVar27 * fVar14 * fVar27) * fVar27 * 0.5)) * fVar19;
        param_5[2] = (float)(~-(uint)(fVar16 <= 0.0) &
                            (uint)((3.0 - fVar28 * fVar16 * fVar28) * fVar28 * 0.5)) * fVar20;
        param_5[3] = (float)(~-(uint)(fVar18 <= 0.0) &
                            (uint)((3.0 - fVar29 * fVar18 * fVar29) * fVar29 * 0.5)) * fVar21;
      }
      FUN_01070860(param_2,param_4,param_5);
      return;
    }
    if (cVar3 != '\v') {
      FUN_01070860(param_2,param_4,param_5);
      return;
    }
    if (local_14 != 0) {
      iVar7 = (int)param_1 - (int)param_5;
      do {
        pfVar1 = (float *)(iVar7 + (int)param_5);
        pfVar2 = (float *)((int)pfVar1 + ((int)param_2 - (int)param_1));
        fVar14 = pfVar2[1];
        fVar16 = pfVar2[2];
        fVar18 = pfVar2[3];
        fVar13 = pfVar1[1];
        fVar15 = pfVar1[2];
        fVar17 = pfVar1[3];
        fVar19 = pfVar1[1];
        fVar20 = pfVar1[2];
        fVar21 = pfVar1[3];
        *param_5 = (*pfVar2 - *pfVar1) * param_4 + *pfVar1;
        param_5[1] = (fVar14 - fVar13) * param_4 + fVar19;
        param_5[2] = (fVar16 - fVar15) * param_4 + fVar20;
        param_5[3] = (fVar18 - fVar17) * param_4 + fVar21;
        fVar14 = *param_5;
        fVar16 = param_5[1];
        fVar18 = param_5[2];
        fVar13 = fVar14 * fVar14;
        fVar15 = fVar16 * fVar16;
        fVar17 = fVar18 * fVar18;
        fVar19 = fVar15 + fVar13 + fVar17;
        fVar20 = fVar15 + fVar13 + fVar17;
        fVar21 = fVar15 + fVar13 + fVar17;
        fVar17 = fVar15 + fVar13 + fVar17;
        auVar4._4_4_ = fVar20;
        auVar4._0_4_ = fVar19;
        auVar4._8_4_ = fVar21;
        auVar4._12_4_ = fVar17;
        auVar23 = rsqrtps(in_XMM3,auVar4);
        fVar13 = auVar23._0_4_;
        fVar15 = auVar23._4_4_;
        fVar27 = auVar23._8_4_;
        fVar28 = auVar23._12_4_;
        in_XMM3._0_4_ = fVar13 * 0.5;
        in_XMM3._4_4_ = fVar15 * 0.5;
        in_XMM3._8_4_ = fVar27 * 0.5;
        in_XMM3._12_4_ = fVar28 * 0.5;
        uVar9 = -(uint)(0.0 - fVar19 < 0.0);
        uVar10 = -(uint)(0.0 - fVar20 < 0.0);
        uVar11 = -(uint)(0.0 - fVar21 < 0.0);
        uVar12 = -(uint)(0.0 - fVar17 < 0.0);
        *param_5 = (float)((uint)((float)(~-(uint)(fVar19 <= 0.0) &
                                         (uint)((3.0 - fVar13 * fVar19 * fVar13) * in_XMM3._0_4_)) *
                                 fVar14) & uVar9 | ~uVar9 & (uint)fVar14);
        param_5[1] = (float)((uint)((float)(~-(uint)(fVar20 <= 0.0) &
                                           (uint)((3.0 - fVar15 * fVar20 * fVar15) * in_XMM3._4_4_))
                                   * fVar16) & uVar10 | ~uVar10 & (uint)fVar16);
        param_5[2] = (float)((uint)((float)(~-(uint)(fVar21 <= 0.0) &
                                           (uint)((3.0 - fVar27 * fVar21 * fVar27) * in_XMM3._8_4_))
                                   * fVar18) & uVar11 | ~uVar11 & (uint)fVar18);
        param_5[3] = (float)((uint)((float)(~-(uint)(fVar17 <= 0.0) &
                                           (uint)((3.0 - fVar28 * fVar17 * fVar28) * in_XMM3._12_4_)
                                           ) * param_5[3]) & uVar12 | ~uVar12 & (uint)param_5[3]);
        param_5 = param_5 + 4;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
      return;
    }
  }
  return;
}

// 010722C0  FUN_010722c0  size=128  [run]
void FUN_010722c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  switch(*(undefined1 *)(param_1 + 2)) {
  case 1:
  case 3:
  case 9:
  case 10:
    FUN_01070860(param_3,param_4,param_5);
    return;
  case 2:
  case 4:
  case 5:
    FUN_01071ec0(param_1,param_4,param_5);
    return;
  case 6:
  case 7:
  case 8:
    FUN_01070800(param_3,param_4,param_5);
  }
  return;
}

// 01072360  FUN_01072360  size=19  [run]
bool FUN_01072360(uint *param_1,uint *param_2)

{
  return *param_1 < *param_2;
}

// 01072380  FUN_01072380  size=20  [run]
void __thiscall FUN_01072380(char *param_1,undefined4 param_2,char param_3)

{
  *(bool *)param_2 = *param_1 != param_3;
  return;
}

// 010723A0  FUN_010723a0  size=20  [run]
void __thiscall FUN_010723a0(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 010723F0  FUN_010723f0  size=15  [run]
int __thiscall FUN_010723f0(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 01072410  FUN_01072410  size=26  [run]
void FUN_01072410(undefined4 *param_1,undefined4 *param_2)

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

// 01072430  FUN_01072430  size=27  [run]
void FUN_01072430(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return;
}

// 01072470  FUN_01072470  size=25  [run]
void __thiscall FUN_01072470(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 010724A0  FUN_010724a0  size=33  [run]
void FUN_010724a0(int param_1,undefined4 *param_2,int param_3)

{
  if (0 < param_3) {
    param_1 = param_1 - (int)param_2;
    do {
      *(undefined4 *)(param_1 + (int)param_2) = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 010724D0  FUN_010724d0  size=45  [run]
void FUN_010724d0(float *param_1,float *param_2,undefined1 (*param_3) [16])

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

// 01072550  FUN_01072550  size=18  [run]
void FUN_01072550(undefined4 *param_1)

{
  *param_1 = 0x437f0000;
  param_1[1] = 0x437f0000;
  param_1[2] = 0x437f0000;
  param_1[3] = 0x437f0000;
  return;
}

// 01072570  FUN_01072570  size=61  [run]
void FUN_01072570(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0x10 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 010725B0  FUN_010725b0  size=72  [run]
void FUN_010725b0(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0x10 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 01072600  FUN_01072600  size=26  [run]
void FUN_01072600(undefined4 *param_1,undefined4 *param_2)

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

// 01072620  FUN_01072620  size=27  [run]
void FUN_01072620(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return;
}

// 01072640  FUN_01072640  size=60  [run]
void __thiscall FUN_01072640(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01072690  FUN_01072690  size=298  [run]
void FUN_01072690(int param_1,int param_2,int param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 local_30;
  undefined8 local_28;
  int local_14;
  
  do {
    puVar4 = (undefined8 *)((param_2 + param_3 >> 1) * 0x10 + param_1);
    local_30 = *puVar4;
    local_28 = puVar4[1];
    iVar6 = param_3;
    iVar7 = param_2;
    do {
      local_14 = iVar7 * 0x10 + param_1;
      cVar3 = (*param_4)(local_14,&local_30);
      while (cVar3 != '\0') {
        local_14 = local_14 + 0x10;
        iVar7 = iVar7 + 1;
        cVar3 = (*param_4)(local_14,&local_30);
      }
      local_14 = param_1 + iVar6 * 0x10;
      cVar3 = (*param_4)(&local_30,local_14);
      while (cVar3 != '\0') {
        local_14 = local_14 + -0x10;
        iVar6 = iVar6 + -1;
        cVar3 = (*param_4)(&local_30,local_14);
      }
      if (iVar6 < iVar7) break;
      if (iVar6 != iVar7) {
        iVar5 = iVar6 * 0x10;
        uVar1 = *(undefined8 *)(iVar5 + param_1);
        uVar2 = *(undefined8 *)(iVar5 + 8 + param_1);
        puVar4 = (undefined8 *)(iVar7 * 0x10 + param_1);
        *(undefined8 *)(iVar5 + param_1) = *(undefined8 *)(iVar7 * 0x10 + param_1);
        ((undefined8 *)(iVar5 + param_1))[1] = puVar4[1];
        *puVar4 = uVar1;
        puVar4[1] = uVar2;
      }
      iVar6 = iVar6 + -1;
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar6);
    if (param_2 < iVar6) {
      FUN_01072690(param_1,param_2,iVar6,param_4);
    }
    param_2 = iVar7;
    if (param_3 <= iVar7) {
      return;
    }
  } while( true );
}

// 010727C0  FUN_010727c0  size=44  [run]
void __thiscall FUN_010727c0(float *param_1,float *param_2,undefined1 (*param_3) [16])

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

// 010727F0  FUN_010727f0  size=44  [run]
void __thiscall FUN_010727f0(float *param_1,float *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 in_XMM2 [16];
  undefined1 auVar5 [16];
  
  auVar1 = *param_3;
  auVar5 = rcpps(in_XMM2,auVar1);
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  *param_2 = *param_1 * (2.0 - auVar1._0_4_ * auVar5._0_4_) * auVar5._0_4_;
  param_2[1] = fVar2 * (2.0 - auVar1._4_4_ * auVar5._4_4_) * auVar5._4_4_;
  param_2[2] = fVar3 * (2.0 - auVar1._8_4_ * auVar5._8_4_) * auVar5._8_4_;
  param_2[3] = fVar4 * (2.0 - auVar1._12_4_ * auVar5._12_4_) * auVar5._12_4_;
  return;
}

// 01072820  FUN_01072820  size=16  [run]
void __thiscall FUN_01072820(undefined4 *param_1,undefined4 *param_2)

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

// 01072830  FUN_01072830  size=13  [run]
void __thiscall FUN_01072830(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 01072840  FUN_01072840  size=33  [run]
void FUN_01072840(undefined4 param_1,int param_2,undefined4 param_3)

{
  if (1 < param_2) {
    FUN_01072690(param_1,0,param_2 + -1,param_3);
  }
  return;
}

// 01072870  FUN_01072870  size=25  [run]
void __thiscall FUN_01072870(undefined4 *param_1,undefined4 *param_2)

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

// 01072890  FUN_01072890  size=30  [run]
void __thiscall FUN_01072890(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  return;
}

// 010728B0  FUN_010728b0  size=16  [run]
void __thiscall FUN_010728b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return;
}

// 010728C0  FUN_010728c0  size=60  [run]
void __fastcall FUN_010728c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01072980  FUN_01072980  size=60  [run]
void __fastcall FUN_01072980(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01072A40  FUN_01072a40  size=109  [run]
int * __thiscall FUN_01072a40(int *param_1,uint param_2)

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
    uVar3 = param_2 * 0x10 + 0x7f & 0xffffff80;
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

// 01072AB0  FUN_01072ab0  size=141  [run]
void __fastcall FUN_01072ab0(int *param_1)

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
  uVar4 = iVar2 * 0x10 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01072B40  FUN_01072b40  size=43  [run]
undefined4 FUN_01072b40(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 0;
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
  case 4:
    return 3;
  }
}

// 01072B80  FUN_01072b80  size=51  [run]
int FUN_01072b80(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 1:
    return param_2;
  case 2:
    return param_2 * 2;
  case 3:
    return param_2 * 3;
  case 4:
    return param_2 + 2;
  default:
    return 0;
  }
}

// 01072BD0  FUN_01072bd0  size=63  [run]
int FUN_01072bd0(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 1:
    return param_2;
  case 2:
    return param_2 / 2;
  case 3:
    return param_2 / 3;
  case 4:
    return param_2 + -2;
  default:
    return 0;
  }
}

// 01072C40  FUN_01072c40  size=673  [run]
void FUN_01072c40(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  int iVar10;
  int local_4c;
  int local_48;
  int local_44;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_8;
  
  uVar2 = param_2;
  uVar3 = 0;
  local_2c = 0xffffffff;
  local_28 = 0xffffffff;
  local_24 = 0xffffffff;
  local_4c = -1;
  local_48 = -1;
  local_44 = -1;
  iVar4 = 0;
  bVar1 = false;
  local_8 = 0;
  if (0 < param_4) {
    do {
      uVar6 = local_24;
      switch(uVar2) {
      case 1:
        local_2c = uVar3;
        local_28 = uVar3;
        local_24 = uVar3;
        if (param_1 != 0) {
          if (param_3 == 1) {
            local_2c = (uint)*(ushort *)(param_1 + uVar3 * 2);
            local_28 = local_2c;
            local_24 = local_2c;
          }
          else {
            local_2c = *(uint *)(param_1 + uVar3 * 4);
            local_28 = local_2c;
            local_24 = local_2c;
          }
        }
        break;
      case 2:
        local_2c = uVar3;
        if (param_1 != 0) {
          if (param_3 == 1) {
            local_2c = (uint)*(ushort *)(param_1 + uVar3 * 2);
          }
          else {
            local_2c = *(uint *)(param_1 + uVar3 * 4);
          }
        }
        uVar3 = uVar3 + 1;
        local_28 = uVar3;
        local_24 = uVar3;
        if (param_1 != 0) {
          if (param_3 == 1) {
            local_28 = (uint)*(ushort *)(param_1 + uVar3 * 2);
            local_24 = local_28;
          }
          else {
            local_28 = *(uint *)(param_1 + uVar3 * 4);
            local_24 = local_28;
          }
        }
        break;
      case 3:
switchD_01072c93_caseD_3:
        local_2c = uVar3;
        if (param_1 != 0) {
          if (param_3 == 1) {
            local_2c = (uint)*(ushort *)(param_1 + uVar3 * 2);
          }
          else {
            local_2c = *(uint *)(param_1 + uVar3 * 4);
          }
        }
        local_28 = uVar3 + 1;
        if (param_1 != 0) {
          if (param_3 == 1) {
            local_28 = (uint)*(ushort *)(param_1 + local_28 * 2);
          }
          else {
            local_28 = *(uint *)(param_1 + local_28 * 4);
          }
        }
        uVar3 = uVar3 + 2;
        local_24 = uVar3;
        if (param_1 != 0) {
          if (param_3 == 1) {
            local_24 = (uint)*(ushort *)(param_1 + uVar3 * 2);
          }
          else {
            local_24 = *(uint *)(param_1 + uVar3 * 4);
          }
        }
        break;
      case 4:
        if ((int)local_2c < 0) goto switchD_01072c93_caseD_3;
        local_2c = local_28;
        local_28 = local_24;
        uVar6 = uVar3;
        if (param_1 != 0) {
          if (param_3 == 1) {
            uVar6 = (uint)*(ushort *)(param_1 + uVar3 * 2);
          }
          else {
            uVar6 = *(uint *)(param_1 + uVar3 * 4);
          }
        }
        uVar3 = uVar3 + 1;
        if (bVar1) {
          local_28 = uVar6;
          uVar6 = local_24;
        }
      default:
        goto switchD_01072c93_default;
      }
      uVar3 = uVar3 + 1;
      uVar6 = local_24;
switchD_01072c93_default:
      local_24 = uVar6;
      bVar1 = (bool)(bVar1 ^ 1);
      iVar7 = local_24 + param_8;
      iVar10 = local_28 + param_8;
      iVar8 = local_2c + param_8;
      uVar5 = (undefined2)iVar8;
      uVar9 = (undefined2)iVar10;
      param_2._0_2_ = (undefined2)iVar7;
      switch(param_6) {
      case 1:
switchD_01072dd3_caseD_1:
        if (param_5 != 0) {
          if (param_7 == 1) {
            *(undefined2 *)(param_5 + iVar4 * 2) = uVar5;
            iVar4 = iVar4 + 1;
          }
          else {
            *(int *)(param_5 + iVar4 * 4) = iVar8;
            iVar4 = iVar4 + 1;
          }
        }
        break;
      case 2:
        if (param_5 != 0) {
          if (param_7 == 1) {
            *(undefined2 *)(param_5 + iVar4 * 2) = uVar5;
            *(undefined2 *)(param_5 + 2 + iVar4 * 2) = uVar9;
            iVar4 = iVar4 + 2;
          }
          else {
            *(int *)(param_5 + iVar4 * 4) = iVar8;
            *(int *)(param_5 + 4 + iVar4 * 4) = iVar10;
            iVar4 = iVar4 + 2;
          }
        }
        break;
      case 3:
switchD_01072dd3_caseD_3:
        if (param_5 != 0) {
          if (param_7 == 1) {
            *(undefined2 *)(param_5 + iVar4 * 2) = uVar5;
            *(undefined2 *)(param_5 + 2 + iVar4 * 2) = uVar9;
            *(undefined2 *)(param_5 + 4 + iVar4 * 2) = (undefined2)param_2;
          }
          else {
            *(int *)(param_5 + iVar4 * 4) = iVar8;
            *(int *)(param_5 + 4 + iVar4 * 4) = iVar10;
            *(int *)(param_5 + 8 + iVar4 * 4) = iVar7;
          }
          iVar4 = iVar4 + 3;
        }
        break;
      case 4:
        if (local_4c < 0) goto switchD_01072dd3_caseD_3;
        if (((iVar8 != local_4c) && (iVar8 != local_48)) && (iVar8 != local_44))
        goto switchD_01072dd3_caseD_1;
        if (((iVar10 == local_4c) || (iVar10 == local_48)) || (iVar10 == local_44)) {
          if (param_5 != 0) {
            if (param_7 == 1) {
              *(undefined2 *)(param_5 + iVar4 * 2) = (undefined2)param_2;
              iVar4 = iVar4 + 1;
            }
            else {
              *(int *)(param_5 + iVar4 * 4) = iVar7;
              iVar4 = iVar4 + 1;
            }
          }
        }
        else if (param_5 != 0) {
          if (param_7 == 1) {
            *(undefined2 *)(param_5 + iVar4 * 2) = uVar9;
            iVar4 = iVar4 + 1;
          }
          else {
            *(int *)(param_5 + iVar4 * 4) = iVar10;
            iVar4 = iVar4 + 1;
          }
        }
      }
      local_8 = local_8 + 1;
      local_4c = iVar8;
      local_48 = iVar10;
      local_44 = iVar7;
    } while (local_8 < param_4);
  }
  return;
}

// 01072F20  FUN_01072f20  size=120  [run]
void __thiscall FUN_01072f20(uint *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  param_1[2] = param_1[2] + param_2;
  uVar1 = param_1[1];
  if ((int)param_1[1] <= (int)param_4) {
    uVar1 = param_4;
  }
  param_1[1] = uVar1;
  if (param_3 == 1) {
    uVar1 = *param_1;
    if (-1 < (int)uVar1) {
      if ((int)uVar1 < 2) {
        *param_1 = 1;
        return;
      }
      if (uVar1 == 2) {
        *param_1 = 2;
        return;
      }
    }
  }
  else {
    if (param_3 == 2) {
      *param_1 = (2 < *param_1) + 2;
      return;
    }
    if ((param_3 == 4) && ((*param_1 == 0 || (*param_1 == 4)))) {
      *param_1 = 4;
      return;
    }
  }
  *param_1 = 3;
  return;
}

// 01072FA0  FUN_01072fa0  size=235  [run]
void FUN_01072fa0(int param_1,int param_2,short param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  
  if (param_1 == 3) {
    iVar2 = param_4[1];
    iVar1 = iVar2 + param_2;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar1) {
      iVar5 = (param_4[2] & 0x3fffffffU) * 2;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
      }
      FUN_0100a210(param_5,param_4,iVar5,2);
    }
    iVar1 = *param_4;
    param_4[1] = param_4[1] + param_2;
    iVar5 = 0;
    if (0 < param_2) {
      do {
        *(short *)(iVar1 + iVar2 * 2 + iVar5 * 2) = (short)iVar5 + param_3;
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_2);
    }
  }
  else if (param_1 == 4) {
    iVar5 = param_4[1];
    iVar2 = param_2 * 3 + -6;
    iVar1 = iVar5 + iVar2;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar1) {
      iVar3 = (param_4[2] & 0x3fffffffU) * 2;
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      FUN_0100a210(param_5,param_4,iVar3,2);
    }
    param_4[1] = param_4[1] + iVar2;
    uVar7 = 2;
    psVar4 = (short *)(*param_4 + iVar5 * 2);
    if (2 < param_2) {
      do {
        sVar6 = param_3 + (short)uVar7;
        *psVar4 = sVar6 + -2;
        if ((uVar7 & 1) == 0) {
          psVar4[1] = sVar6 + -1;
        }
        else {
          psVar4[1] = sVar6;
          sVar6 = sVar6 + -1;
        }
        psVar4[2] = sVar6;
        uVar7 = uVar7 + 1;
        psVar4 = psVar4 + 3;
      } while ((int)uVar7 < param_2);
      return;
    }
  }
  return;
}

// 010730A0  FUN_010730a0  size=245  [run]
void FUN_010730a0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 3) {
    iVar1 = param_4[1];
    iVar5 = iVar1 + param_2;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar5) {
      iVar4 = (param_4[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar4,4);
    }
    iVar5 = *param_4;
    param_4[1] = param_4[1] + param_2;
    iVar4 = 0;
    if (0 < param_2) {
      do {
        *(uint *)(iVar5 + iVar1 * 4 + iVar4 * 4) = param_3 + iVar4 & 0xffff;
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_2);
    }
  }
  else if (param_1 == 4) {
    iVar4 = param_4[1];
    iVar1 = param_2 * 3 + -6;
    iVar5 = iVar4 + iVar1;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar5) {
      iVar2 = (param_4[2] & 0x3fffffffU) * 2;
      if (iVar2 <= iVar5) {
        iVar2 = iVar5;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar2,4);
    }
    param_4[1] = param_4[1] + iVar1;
    piVar3 = (int *)(*param_4 + iVar4 * 4);
    if (2 < param_2) {
      iVar5 = param_3 + 1;
      do {
        *piVar3 = iVar5 + -1;
        iVar1 = iVar5 + 1;
        if (((1 - param_3) + iVar5 & 1U) == 0) {
          piVar3[1] = iVar5;
          piVar3[2] = iVar1;
        }
        else {
          piVar3[1] = iVar1;
          piVar3[2] = iVar5;
        }
        piVar3 = piVar3 + 3;
        iVar5 = iVar1;
      } while ((1 - param_3) + iVar1 < param_2);
      return;
    }
  }
  return;
}

// 010731A0  FUN_010731a0  size=298  [run]
void FUN_010731a0(int param_1,short *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  short sVar9;
  
  sVar9 = (short)param_4;
  if (param_1 == 3) {
    iVar1 = param_5[1];
    iVar6 = iVar1 + param_3;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar6) {
      iVar4 = (param_5[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar6) {
        iVar4 = iVar6;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_5,iVar4,2);
    }
    param_5[1] = param_5[1] + param_3;
    psVar3 = (short *)(*param_5 + iVar1 * 2);
    if (param_4 == 0) {
      FUN_01015e80(psVar3,param_2,param_3 * 2);
      return;
    }
    if (0 < param_3) {
      iVar6 = (int)param_2 - (int)psVar3;
      do {
        *psVar3 = *(short *)(iVar6 + (int)psVar3) + sVar9;
        psVar3 = psVar3 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (param_1 == 4) {
    iVar4 = param_5[1];
    iVar1 = param_3 * 3 + -6;
    iVar6 = iVar4 + iVar1;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar6) {
      iVar2 = (param_5[2] & 0x3fffffffU) * 2;
      if (iVar2 <= iVar6) {
        iVar2 = iVar6;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_5,iVar2,2);
    }
    param_5[1] = param_5[1] + iVar1;
    uVar7 = 2;
    psVar3 = (short *)(*param_5 + iVar4 * 2);
    if (2 < param_3) {
      do {
        psVar5 = param_2 + 1;
        *psVar3 = *param_2 + sVar9;
        if ((uVar7 & 1) == 0) {
          psVar3[1] = *psVar5 + sVar9;
          sVar8 = param_2[2];
        }
        else {
          psVar3[1] = param_2[2] + sVar9;
          sVar8 = *psVar5;
        }
        psVar3[2] = sVar8 + sVar9;
        uVar7 = uVar7 + 1;
        psVar3 = psVar3 + 3;
        param_2 = psVar5;
      } while ((int)uVar7 < param_3);
      return;
    }
  }
  return;
}

// 010732D0  FUN_010732d0  size=290  [run]
void FUN_010732d0(int param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 == 3) {
    iVar1 = param_5[1];
    iVar6 = iVar1 + param_3;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar6) {
      iVar4 = (param_5[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar6) {
        iVar4 = iVar6;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_5,iVar4,4);
    }
    param_5[1] = param_5[1] + param_3;
    piVar3 = (int *)(*param_5 + iVar1 * 4);
    if (param_4 == 0) {
      FUN_01015e80(piVar3,param_2,param_3 * 4);
      return;
    }
    if (0 < param_3) {
      iVar6 = (int)param_2 - (int)piVar3;
      do {
        *piVar3 = *(int *)(iVar6 + (int)piVar3) + param_4;
        piVar3 = piVar3 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (param_1 == 4) {
    iVar4 = param_5[1];
    iVar1 = param_3 * 3 + -6;
    iVar6 = iVar4 + iVar1;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar6) {
      iVar2 = (param_5[2] & 0x3fffffffU) * 2;
      if (iVar2 <= iVar6) {
        iVar2 = iVar6;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_5,iVar2,4);
    }
    param_5[1] = param_5[1] + iVar1;
    uVar7 = 2;
    piVar3 = (int *)(*param_5 + iVar4 * 4);
    if (2 < param_3) {
      do {
        piVar5 = param_2 + 1;
        *piVar3 = *param_2 + param_4;
        if ((uVar7 & 1) == 0) {
          piVar3[1] = *piVar5 + param_4;
          iVar6 = param_2[2];
        }
        else {
          piVar3[1] = param_2[2] + param_4;
          iVar6 = *piVar5;
        }
        piVar3[2] = iVar6 + param_4;
        uVar7 = uVar7 + 1;
        piVar3 = piVar3 + 3;
        param_2 = piVar5;
      } while ((int)uVar7 < param_3);
      return;
    }
  }
  return;
}

// 01073400  FUN_01073400  size=457  [run]
void FUN_01073400(byte *param_1,int *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_18 [4];
  uint local_8;
  
  bVar1 = param_1[0x14];
  if (bVar1 == 0) {
    FUN_01072fa0(*param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_2,
                 &PTR_vftable_018e9b94);
  }
  else if (bVar1 == 1) {
    if (*param_1 - 3 < 2) {
      FUN_010731a0((uint)*param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0,
                   param_2);
      return;
    }
  }
  else if ((bVar1 == 2) && (*param_1 - 3 < 2)) {
    uVar5 = *(uint *)(param_1 + 8);
    local_18[0] = 0;
    local_18[1] = 0;
    local_18[2] = 0x80000000;
    local_8 = uVar5;
    if (uVar5 == 0) {
      local_18[3] = 0;
    }
    else {
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      local_18[3] = *(int *)((int)pvVar3 + 0xc);
      uVar4 = uVar5 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar3 + 8) < (int)uVar4) ||
         (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + uVar4)) {
        local_18[3] = FUN_0100b780(uVar4);
      }
      else {
        *(uint *)((int)pvVar3 + 0xc) = local_18[3] + uVar4;
      }
    }
    local_18[2] = uVar5 | 0x80000000;
    local_18[0] = local_18[3];
    FUN_010732d0(*param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0,local_18);
    if (0 < *(int *)(param_1 + 8)) {
      iVar6 = 0;
      do {
        uVar2 = *(undefined2 *)(local_18[0] + iVar6 * 4);
        if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,param_2,2);
        }
        *(undefined2 *)(*param_2 + param_2[1] * 2) = uVar2;
        param_2[1] = param_2[1] + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 8));
    }
    uVar5 = local_8;
    iVar6 = local_18[3];
    if (local_18[3] == local_18[0]) {
      local_18[1] = 0;
    }
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    uVar5 = uVar5 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar3 + 8) < (int)uVar5) || (uVar5 + iVar6 != *(int *)((int)pvVar3 + 0xc)))
       || (*(int *)((int)pvVar3 + 0x14) == iVar6)) {
      FUN_0100b9b0(iVar6,uVar5);
    }
    else {
      *(int *)((int)pvVar3 + 0xc) = iVar6;
    }
    local_18[1] = 0;
    if (-1 < local_18[2]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],local_18[2] * 4);
      return;
    }
  }
  return;
}

// 010735D0  FUN_010735d0  size=439  [run]
void FUN_010735d0(byte *param_1,int *param_2)

{
  byte bVar1;
  ushort uVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_18 [4];
  uint local_8;
  
  bVar1 = param_1[0x14];
  if (bVar1 == 0) {
    FUN_010730a0(*param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_2);
  }
  else if (bVar1 == 1) {
    if (*param_1 - 3 < 2) {
      uVar5 = *(uint *)(param_1 + 8);
      local_18[0] = 0;
      local_18[1] = 0;
      local_18[2] = 0x80000000;
      local_8 = uVar5;
      if (uVar5 == 0) {
        local_18[3] = 0;
      }
      else {
        pvVar3 = TlsGetValue(DAT_01f8fc4c);
        local_18[3] = *(int *)((int)pvVar3 + 0xc);
        uVar4 = uVar5 * 2 + 0x7f & 0xffffff80;
        if ((*(int *)((int)pvVar3 + 8) < (int)uVar4) ||
           (*(uint *)((int)pvVar3 + 0x10) < local_18[3] + uVar4)) {
          local_18[3] = FUN_0100b780(uVar4);
        }
        else {
          *(uint *)((int)pvVar3 + 0xc) = local_18[3] + uVar4;
        }
      }
      local_18[2] = uVar5 | 0x80000000;
      local_18[0] = local_18[3];
      FUN_010731a0(*param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0,local_18)
      ;
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          uVar2 = *(ushort *)(local_18[0] + iVar6 * 2);
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
          }
          *(uint *)(*param_2 + param_2[1] * 4) = (uint)uVar2;
          param_2[1] = param_2[1] + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 8));
      }
      uVar5 = local_8;
      iVar6 = local_18[3];
      if (local_18[3] == local_18[0]) {
        local_18[1] = 0;
      }
      pvVar3 = TlsGetValue(DAT_01f8fc4c);
      uVar5 = uVar5 * 2 + 0x7f & 0xffffff80;
      if (((*(int *)((int)pvVar3 + 8) < (int)uVar5) ||
          (uVar5 + iVar6 != *(int *)((int)pvVar3 + 0xc))) || (*(int *)((int)pvVar3 + 0x14) == iVar6)
         ) {
        FUN_0100b9b0(iVar6,uVar5);
      }
      else {
        *(int *)((int)pvVar3 + 0xc) = iVar6;
      }
      local_18[1] = 0;
      if (-1 < local_18[2]) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18[0],(local_18[2] & 0x3fffffffU) * 2);
        return;
      }
    }
  }
  else if ((bVar1 == 2) && (*param_1 - 3 < 2)) {
    FUN_010732d0((uint)*param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0,
                 param_2);
    return;
  }
  return;
}

// 01073790  FUN_01073790  size=63  [run]
void FUN_01073790(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_2c [40];
  
  (**(code **)(*param_1 + 0x10))(param_2,1,local_2c);
  FUN_01073400(local_2c,param_3);
  (**(code **)(*param_1 + 0x14))(local_2c);
  return;
}

// 010737D0  FUN_010737d0  size=46  [run]
void __thiscall
FUN_010737d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  param_1[3] = param_3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = param_4;
  param_1[7] = param_2;
  return;
}

// 01073830  FUN_01073830  size=57  [run]
void __thiscall FUN_01073830(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x10) == 1) {
      *(undefined2 *)(iVar1 + *(int *)(param_1 + 0x14) * 2) = (undefined2)param_2;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      return;
    }
    *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x14) * 4) = param_2;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return;
}

// 01073A20  FUN_01073a20  size=314  [run]
void __thiscall FUN_01073a20(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar2 = (undefined2)param_2;
  switch(param_1[3]) {
  case 1:
switchD_01073a41_caseD_1:
    iVar1 = param_1[7];
    if (iVar1 == 0) goto switchD_01073a41_default;
    if (param_1[4] == 1) {
      *(undefined2 *)(iVar1 + param_1[5] * 2) = uVar2;
    }
    else {
      *(int *)(iVar1 + param_1[5] * 4) = param_2;
    }
    break;
  case 2:
    iVar1 = param_1[7];
    if (iVar1 != 0) {
      if (param_1[4] == 1) {
        *(undefined2 *)(iVar1 + param_1[5] * 2) = uVar2;
      }
      else {
        *(int *)(iVar1 + param_1[5] * 4) = param_2;
      }
      param_1[5] = param_1[5] + 1;
    }
LAB_01073a87:
    iVar1 = param_1[7];
    if (iVar1 == 0) goto switchD_01073a41_default;
    if (param_1[4] == 1) {
      *(short *)(iVar1 + param_1[5] * 2) = (short)param_3;
    }
    else {
      *(int *)(iVar1 + param_1[5] * 4) = param_3;
    }
    break;
  case 3:
switchD_01073a41_caseD_3:
    iVar1 = param_1[7];
    if (iVar1 != 0) {
      if (param_1[4] == 1) {
        *(undefined2 *)(iVar1 + param_1[5] * 2) = uVar2;
      }
      else {
        *(int *)(iVar1 + param_1[5] * 4) = param_2;
      }
      param_1[5] = param_1[5] + 1;
    }
    iVar1 = param_1[7];
    if (iVar1 != 0) {
      if (param_1[4] == 1) {
        *(short *)(iVar1 + param_1[5] * 2) = (short)param_3;
      }
      else {
        *(int *)(iVar1 + param_1[5] * 4) = param_3;
      }
      param_1[5] = param_1[5] + 1;
    }
    iVar1 = param_1[7];
    if (iVar1 == 0) goto switchD_01073a41_default;
    iVar3 = param_1[5];
    if (param_1[4] != 1) goto LAB_01073b3c;
    *(undefined2 *)(iVar1 + iVar3 * 2) = (undefined2)param_4;
    break;
  case 4:
    iVar1 = *param_1;
    if (iVar1 < 0) goto switchD_01073a41_caseD_3;
    if (((param_2 != iVar1) && (param_2 != param_1[1])) && (param_2 != param_1[2]))
    goto switchD_01073a41_caseD_1;
    if (((param_3 != iVar1) && (param_3 != param_1[1])) && (param_3 != param_1[2]))
    goto LAB_01073a87;
    iVar1 = param_1[7];
    if (iVar1 == 0) goto switchD_01073a41_default;
    iVar3 = param_1[5];
    if (param_1[4] == 1) {
      *(undefined2 *)(iVar1 + iVar3 * 2) = (undefined2)param_4;
      break;
    }
LAB_01073b3c:
    *(int *)(iVar1 + iVar3 * 4) = param_4;
    break;
  default:
    goto switchD_01073a41_default;
  }
  param_1[5] = param_1[5] + 1;
switchD_01073a41_default:
  param_1[6] = param_1[6] + 1;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[2] = param_4;
  return;
}

// 01073B70  FUN_01073b70  size=20  [run]
void __thiscall FUN_01073b70(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 01073B90  FUN_01073b90  size=20  [run]
void __thiscall FUN_01073b90(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 01073BB0  FUN_01073bb0  size=15  [run]
int __thiscall FUN_01073bb0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 2;
}

// 01073BC0  FUN_01073bc0  size=15  [run]
int __thiscall FUN_01073bc0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01073BD0  FUN_01073bd0  size=36  [run]
void FUN_01073bd0(int param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined2 *)(param_1 + iVar1 * 2) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 01073C00  FUN_01073c00  size=34  [run]
void FUN_01073c00(int param_1,int param_2,undefined4 *param_3)

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

// 01073C30  FUN_01073c30  size=59  [run]
void __thiscall FUN_01073c30(int *param_1,undefined4 param_2,undefined2 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,2);
  }
  *(undefined2 *)(*param_1 + param_1[1] * 2) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01073C70  FUN_01073c70  size=57  [run]
void __thiscall FUN_01073c70(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01073CB0  FUN_01073cb0  size=62  [run]
void FUN_01073cb0(int param_1)

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

// 01073CF0  FUN_01073cf0  size=73  [run]
void FUN_01073cf0(int param_1,int param_2)

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

// 01073D40  FUN_01073d40  size=59  [run]
void FUN_01073d40(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 2 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 01073D80  FUN_01073d80  size=70  [run]
void FUN_01073d80(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 2 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 01073DD0  FUN_01073dd0  size=60  [run]
void __thiscall FUN_01073dd0(int *param_1,undefined2 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,2);
  }
  *(undefined2 *)(*param_1 + param_1[1] * 2) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01073E10  FUN_01073e10  size=58  [run]
void __thiscall FUN_01073e10(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01073E50  FUN_01073e50  size=108  [run]
int * __thiscall FUN_01073e50(int *param_1,uint param_2)

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

// 01073EC0  FUN_01073ec0  size=143  [run]
void __fastcall FUN_01073ec0(int *param_1)

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

// 01073F50  FUN_01073f50  size=105  [run]
int * __thiscall FUN_01073f50(int *param_1,uint param_2)

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
    uVar3 = param_2 * 2 + 0x7f & 0xffffff80;
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

// 01073FC0  FUN_01073fc0  size=138  [run]
void __fastcall FUN_01073fc0(int *param_1)

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
  uVar4 = iVar2 * 2 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 2);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01074050  FUN_01074050  size=17  [run]
void __thiscall FUN_01074050(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  return;
}

// 01074090  FUN_01074090  size=45  [run]
float10 __fastcall FUN_01074090(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(int *)(param_1 + 4) = iVar1;
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return fVar2 * (float10)2.3283064e-10;
}

// 010740C0  FUN_010740c0  size=75  [run]
void FUN_010740c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_14 [16];
  
  hkgpConvexHull::hkgpConvexHull();
  FUN_01077490();
  local_14[0] = 1;
  iVar1 = FUN_01079670(param_1,local_14);
  if (iVar1 != -1) {
    FUN_01078bd0(1,param_2,0xffffffff);
  }
  hkBaseObject::hkBaseObject_27();
  return;
}

// 01074110  FUN_01074110  size=115  [run]
void FUN_01074110(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint extraout_ECX;
  undefined1 local_14 [16];
  
  hkgpConvexHull::hkgpConvexHull();
  FUN_01077490();
  local_14[0] = 1;
  iVar1 = FUN_01079670(param_1,local_14);
  if (iVar1 != -1) {
    FUN_01078bd0(1,param_2,0xffffffff);
    FUN_01079310(0x3f7fff58,extraout_ECX & 0xffffff00);
    FUN_01078a50(param_3);
  }
  hkBaseObject::hkBaseObject_27();
  return;
}

// 01074190  FUN_01074190  size=9  [run]
void FUN_01074190(void)

{
  FUN_0108c9e0();
  return;
}

// 01074220  FUN_01074220  size=10  [run]
void FUN_01074220(void)

{
  return;
}

// 01074230  FUN_01074230  size=25  [run]
void FUN_01074230(void)

{
  return;
}

// 01074260  FUN_01074260  size=55  [run]
void FUN_01074260(int *param_1,float param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(float *)(*param_1 + 0xc + iVar2) = *(float *)(*param_1 + 0xc + iVar2) - param_2;
      iVar2 = iVar2 + 0x10;
    } while (iVar1 < param_1[1]);
  }
  return;
}

// 010745E0  FUN_010745e0  size=1371  [run]
void FUN_010745e0(undefined1 *param_1,float *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float local_34 [8];
  int local_14;
  
  fVar12 = 0.0;
  iVar3 = 3;
  pfVar2 = param_2;
  do {
    fVar6 = *pfVar2 * *pfVar2;
    fVar7 = pfVar2[1] * pfVar2[1];
    fVar8 = pfVar2[2] * pfVar2[2];
    auVar10._4_4_ = fVar6;
    auVar10._0_4_ = fVar6;
    auVar10._8_4_ = fVar6;
    auVar10._12_4_ = fVar6;
    fVar9 = fVar7 + fVar6 + fVar8;
    auVar11._4_4_ = fVar7 + fVar6 + fVar8;
    auVar11._0_4_ = fVar9;
    auVar11._8_4_ = fVar7 + fVar6 + fVar8;
    auVar11._12_4_ = fVar7 + fVar6 + fVar8;
    auVar11 = rsqrtps(auVar10,auVar11);
    fVar6 = auVar11._0_4_;
    fVar6 = (float)(~-(uint)(fVar9 <= 0.0) &
                   (uint)((3.0 - fVar6 * fVar9 * fVar6) * fVar6 * 0.5 * fVar9));
    if (fVar12 < fVar6) {
      fVar12 = fVar6;
    }
    pfVar2 = pfVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (fVar12 != 0.0) {
    fVar12 = 1.0 / fVar12;
    *param_2 = *param_2 * fVar12;
    param_2[4] = param_2[4] * fVar12;
    param_2[8] = param_2[8] * fVar12;
    param_2[1] = param_2[1] * fVar12;
    param_2[5] = param_2[5] * fVar12;
    param_2[9] = fVar12 * param_2[9];
    param_2[2] = param_2[2] * fVar12;
    param_2[6] = param_2[6] * fVar12;
    param_2[10] = param_2[10] * fVar12;
  }
  fVar12 = param_2[8];
  local_34[3] = *param_2;
  if (fVar12 == 0.0) {
    local_34[4] = param_2[5];
    local_34[5] = param_2[10];
    local_34[0] = param_2[4];
    local_34[1] = param_2[9];
    *param_2 = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 1.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    param_2[10] = 1.0;
    param_2[0xb] = 0.0;
  }
  else {
    fVar6 = param_2[4];
    local_34[0] = SQRT(fVar6 * fVar6 + fVar12 * fVar12);
    fVar8 = 1.0 / local_34[0];
    fVar12 = fVar8 * fVar12;
    fVar8 = fVar8 * fVar6;
    fVar6 = param_2[9];
    fVar9 = (param_2[10] - param_2[5]) * fVar12 + fVar8 * 2.0 * fVar6;
    fVar13 = fVar9 * fVar12;
    local_34[5] = param_2[10] - fVar13;
    fVar7 = param_2[5];
    *param_2 = 1.0;
    param_2[4] = 0.0;
    param_2[8] = 0.0;
    param_2[1] = 0.0;
    param_2[5] = fVar8;
    param_2[9] = fVar12;
    param_2[2] = 0.0;
    param_2[6] = fVar12;
    local_34[4] = fVar13 + fVar7;
    local_34[1] = fVar6 - fVar9 * fVar8;
    param_2[10] = -fVar8;
  }
  iVar3 = 0;
  do {
    local_14 = 0;
    bVar5 = param_3 == 0;
    if (0 < param_3) {
      do {
        fVar12 = 0.0;
        iVar1 = iVar3;
        if (1 < iVar3) break;
        do {
          if (ABS(local_34[iVar1]) < 1e-06) break;
          iVar1 = iVar1 + 1;
        } while (iVar1 < 2);
        if (iVar1 == iVar3) break;
        fVar6 = (local_34[iVar3 + 4] - local_34[iVar3 + 3]) / (local_34[iVar3] * 2.0);
        fVar7 = SQRT(fVar6 * fVar6 + 1.0);
        if (0.0 <= fVar6) {
          fVar6 = fVar7 + fVar6;
        }
        else {
          fVar6 = fVar6 - fVar7;
        }
        iVar4 = iVar1 + -1;
        fVar8 = local_34[iVar3] / fVar6 + (local_34[iVar1 + 3] - local_34[iVar3 + 3]);
        fVar6 = 1.0;
        fVar7 = 1.0;
        if (iVar3 <= iVar4) {
          pfVar2 = param_2 + iVar4 * 4 + 5;
          do {
            fVar9 = local_34[iVar4] * fVar6;
            fVar13 = local_34[iVar4] * fVar7;
            if (ABS(fVar9) <= ABS(fVar8)) {
              fVar9 = (-1.0 / fVar8) * fVar9;
              fVar7 = -1.0 / SQRT(fVar9 * fVar9 + 1.0);
              fVar6 = fVar9 * fVar7;
              fVar7 = -fVar7;
              local_34[iVar4 + 1] = fVar8 / fVar7;
            }
            else {
              fVar8 = (-1.0 / fVar9) * fVar8;
              fVar6 = -1.0 / SQRT(fVar8 * fVar8 + 1.0);
              fVar7 = fVar8 * fVar6;
              fVar6 = -fVar6;
              local_34[iVar4 + 1] = fVar9 / fVar6;
            }
            fVar8 = local_34[iVar4 + 4] - fVar12;
            fVar9 = (local_34[iVar4 + 3] - fVar8) * fVar6 + fVar13 * 2.0 * fVar7;
            fVar12 = fVar6 * fVar9;
            local_34[iVar4 + 4] = fVar12 + fVar8;
            fVar8 = fVar7 * fVar9 - fVar13;
            fVar9 = pfVar2[-1];
            pfVar2[-1] = pfVar2[-5] * fVar6 + fVar7 * fVar9;
            fVar13 = *pfVar2;
            pfVar2[-5] = pfVar2[-5] * fVar7 - fVar6 * fVar9;
            *pfVar2 = pfVar2[-4] * fVar6 + fVar7 * fVar13;
            fVar9 = pfVar2[1];
            pfVar2[-4] = pfVar2[-4] * fVar7 - fVar6 * fVar13;
            pfVar2[1] = pfVar2[-3] * fVar6 + fVar7 * fVar9;
            pfVar2[-3] = pfVar2[-3] * fVar7 - fVar6 * fVar9;
            iVar4 = iVar4 + -1;
            pfVar2 = pfVar2 + -4;
          } while (iVar3 <= iVar4);
        }
        local_14 = local_14 + 1;
        local_34[iVar3] = fVar8;
        local_34[iVar3 + 3] = local_34[iVar3 + 3] - fVar12;
        local_34[iVar1] = 0.0;
      } while (local_14 < param_3);
      bVar5 = local_14 == param_3;
    }
    if (bVar5) {
      *param_1 = 0;
      return;
    }
    iVar3 = iVar3 + 1;
    if (2 < iVar3) {
      *param_1 = 1;
      return;
    }
  } while( true );
}

// 01074B40  FUN_01074b40  size=181  [run]
char * FUN_01074b40(char *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FUN_010745e0(param_1,param_2,0x1e);
  if (*param_1 == '\0') {
    *param_3 = 1.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    *param_4 = 0.0;
    param_4[1] = 1.0;
    param_4[2] = 0.0;
    param_4[3] = 0.0;
    *param_5 = 0.0;
    param_5[1] = 0.0;
    param_5[2] = 1.0;
    param_5[3] = 0.0;
    return param_1;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *param_3 = *param_2;
  param_3[1] = fVar1;
  param_3[2] = fVar2;
  param_3[3] = fVar3;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  *param_4 = param_2[4];
  param_4[1] = fVar1;
  param_4[2] = fVar2;
  param_4[3] = fVar3;
  fVar1 = param_2[8];
  fVar2 = param_2[9];
  fVar3 = param_2[10];
  fVar4 = param_2[0xb];
  *param_5 = fVar1;
  param_5[1] = fVar2;
  param_5[2] = fVar3;
  param_5[3] = fVar4;
  if ((*param_3 * param_4[1] - param_3[1] * *param_4) * fVar3 +
      (param_3[2] * *param_4 - *param_3 * param_4[2]) * fVar2 +
      (param_3[1] * param_4[2] - param_3[2] * param_4[1]) * fVar1 < 0.0) {
    *param_5 = -fVar1;
    param_5[1] = -fVar2;
    param_5[2] = -fVar3;
    param_5[3] = -fVar4;
  }
  return param_1;
}

// 01074C00  FUN_01074c00  size=121  [run]
void __thiscall FUN_01074c00(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_EAX;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 in_XMM3 [16];
  undefined1 auVar12 [16];
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[3];
  fVar5 = (*param_2 - *param_1) * 0.5;
  fVar7 = (param_2[1] - fVar1) * 0.5;
  fVar9 = (param_2[2] - fVar2) * 0.5;
  fVar6 = fVar5 * fVar5;
  fVar8 = fVar7 * fVar7;
  fVar10 = fVar9 * fVar9;
  fVar11 = fVar8 + fVar6 + fVar10;
  auVar12._4_4_ = fVar8 + fVar6 + fVar10;
  auVar12._0_4_ = fVar11;
  auVar12._8_4_ = fVar8 + fVar6 + fVar10;
  auVar12._12_4_ = fVar8 + fVar6 + fVar10;
  auVar12 = rsqrtps(in_XMM3,auVar12);
  fVar6 = auVar12._0_4_;
  *in_EAX = *param_1 + fVar5;
  in_EAX[1] = fVar1 + fVar7;
  in_EAX[2] = fVar2 + fVar9;
  in_EAX[3] = fVar3 + (fVar4 - fVar3) * 0.5;
  in_EAX[3] = (float)(~-(uint)(fVar11 <= 0.0) &
                     (uint)((3.0 - fVar6 * fVar11 * fVar6) * fVar6 * 0.5 * fVar11)) + param_3;
  return;
}

// 01074C80  FUN_01074c80  size=384  [run]
void __thiscall FUN_01074c80(float *param_1,float *param_2,float *param_3,float param_4)

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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  fVar6 = *param_2 - *param_1;
  fVar9 = param_2[1] - param_1[1];
  fVar11 = param_2[2] - param_1[2];
  fVar13 = param_2[3] - param_1[3];
  fVar14 = *param_3 - *param_1;
  fVar16 = param_3[1] - param_1[1];
  fVar18 = param_3[2] - param_1[2];
  fVar20 = param_3[3] - param_1[3];
  fVar1 = fVar9 * fVar18 - fVar11 * fVar16;
  fVar3 = fVar11 * fVar14 - fVar6 * fVar18;
  fVar4 = fVar6 * fVar16 - fVar9 * fVar14;
  fVar5 = fVar13 * fVar20 - fVar13 * fVar20;
  fVar15 = fVar14 * fVar14;
  fVar17 = fVar16 * fVar16;
  fVar19 = fVar18 * fVar18;
  fVar7 = fVar6 * fVar6;
  fVar10 = fVar9 * fVar9;
  fVar12 = fVar11 * fVar11;
  fVar8 = 0.5 / (fVar3 * fVar3 + fVar1 * fVar1 + fVar4 * fVar4);
  local_30 = (float)*(undefined8 *)param_1;
  fStack_2c = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
  fStack_28 = (float)*(undefined8 *)(param_1 + 2);
  fStack_24 = (float)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
  fVar2 = ((fVar17 + fVar15 + fVar19) * (fVar3 * fVar11 - fVar4 * fVar9) + 0.0 +
          (fVar10 + fVar7 + fVar12) * (fVar4 * fVar16 - fVar3 * fVar18)) * fVar8;
  fVar4 = ((fVar17 + fVar15 + fVar19) * (fVar4 * fVar6 - fVar1 * fVar11) + 0.0 +
          (fVar10 + fVar7 + fVar12) * (fVar1 * fVar18 - fVar4 * fVar14)) * fVar8;
  fVar6 = ((fVar17 + fVar15 + fVar19) * (fVar1 * fVar9 - fVar3 * fVar6) + 0.0 +
          (fVar10 + fVar7 + fVar12) * (fVar3 * fVar14 - fVar1 * fVar16)) * fVar8;
  fVar1 = fVar2 * fVar2;
  fVar3 = fVar4 * fVar4;
  fVar9 = fVar6 * fVar6;
  auVar21._4_4_ = fVar1;
  auVar21._0_4_ = fVar1;
  auVar21._8_4_ = fVar1;
  auVar21._12_4_ = fVar1;
  fVar11 = fVar3 + fVar1 + fVar9;
  auVar22._4_4_ = fVar3 + fVar1 + fVar9;
  auVar22._0_4_ = fVar11;
  auVar22._8_4_ = fVar3 + fVar1 + fVar9;
  auVar22._12_4_ = fVar3 + fVar1 + fVar9;
  auVar22 = rsqrtps(auVar21,auVar22);
  fVar1 = auVar22._0_4_;
  *in_EAX = local_30 + fVar2;
  in_EAX[1] = fStack_2c + fVar4;
  in_EAX[2] = fStack_28 + fVar6;
  in_EAX[3] = fStack_24 +
              ((fVar17 + fVar15 + fVar19) * (fVar5 * fVar13 - fVar5 * fVar13) + 0.0 +
              (fVar10 + fVar7 + fVar12) * (fVar5 * fVar20 - fVar5 * fVar20)) * fVar8;
  in_EAX[3] = (float)(~-(uint)(fVar11 <= 0.0) &
                     (uint)((3.0 - fVar1 * fVar11 * fVar1) * fVar1 * 0.5 * fVar11)) + param_4;
  return;
}

// 01074E00  FUN_01074e00  size=506  [run]
void __thiscall
FUN_01074e00(float *param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_EAX;
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
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar15 = *param_4 - fVar1;
  fVar16 = param_4[1] - fVar2;
  fVar17 = param_4[2] - fVar3;
  fVar18 = param_4[3] - fVar4;
  fVar5 = *param_2 - fVar1;
  fVar7 = param_2[1] - fVar2;
  fVar8 = param_2[2] - fVar3;
  fVar9 = param_2[3] - fVar4;
  fVar19 = fVar15 * fVar15;
  fVar21 = fVar16 * fVar16;
  fVar22 = fVar17 * fVar17;
  fVar10 = *param_3 - fVar1;
  fVar12 = param_3[1] - fVar2;
  fVar13 = param_3[2] - fVar3;
  fVar14 = param_3[3] - fVar4;
  fVar26 = fVar5 * fVar5;
  fVar27 = fVar7 * fVar7;
  fVar28 = fVar8 * fVar8;
  fVar23 = fVar10 * fVar10;
  fVar24 = fVar12 * fVar12;
  fVar25 = fVar13 * fVar13;
  fVar11 = 0.5 / (((fVar17 * fVar12 - fVar16 * fVar13) * fVar5 -
                  (fVar10 * fVar17 - fVar15 * fVar13) * fVar7) +
                 (fVar10 * fVar16 - fVar15 * fVar12) * fVar8);
  fVar6 = ((fVar21 + fVar19 + fVar22) * (fVar7 * fVar13 - fVar8 * fVar12) + 0.0 +
           (fVar24 + fVar23 + fVar25) * (fVar16 * fVar8 - fVar17 * fVar7) +
          (fVar27 + fVar26 + fVar28) * (fVar17 * fVar12 - fVar16 * fVar13)) * fVar11;
  fVar8 = ((fVar21 + fVar19 + fVar22) * (fVar8 * fVar10 - fVar5 * fVar13) + 0.0 +
           (fVar24 + fVar23 + fVar25) * (fVar17 * fVar5 - fVar15 * fVar8) +
          (fVar27 + fVar26 + fVar28) * (fVar15 * fVar13 - fVar17 * fVar10)) * fVar11;
  fVar10 = ((fVar21 + fVar19 + fVar22) * (fVar5 * fVar12 - fVar7 * fVar10) + 0.0 +
            (fVar24 + fVar23 + fVar25) * (fVar15 * fVar7 - fVar16 * fVar5) +
           (fVar27 + fVar26 + fVar28) * (fVar16 * fVar10 - fVar15 * fVar12)) * fVar11;
  fVar5 = fVar6 * fVar6;
  fVar7 = fVar8 * fVar8;
  fVar13 = fVar10 * fVar10;
  fVar16 = fVar7 + fVar5 + fVar13;
  auVar20._4_4_ = fVar7 + fVar5 + fVar13;
  auVar20._0_4_ = fVar16;
  auVar20._8_4_ = fVar7 + fVar5 + fVar13;
  auVar20._12_4_ = fVar7 + fVar5 + fVar13;
  auVar20 = rsqrtps(ZEXT416((uint)(fVar15 * fVar12)),auVar20);
  fVar5 = auVar20._0_4_;
  *in_EAX = fVar1 + fVar6;
  in_EAX[1] = fVar2 + fVar8;
  in_EAX[2] = fVar3 + fVar10;
  in_EAX[3] = fVar4 + ((fVar21 + fVar19 + fVar22) * (fVar9 * fVar14 - fVar9 * fVar14) + 0.0 +
                       (fVar24 + fVar23 + fVar25) * (fVar18 * fVar9 - fVar18 * fVar9) +
                      (fVar27 + fVar26 + fVar28) * (fVar18 * fVar14 - fVar18 * fVar14)) * fVar11;
  in_EAX[3] = (float)(~-(uint)(fVar16 <= 0.0) &
                     (uint)((3.0 - fVar5 * fVar16 * fVar5) * fVar5 * 0.5 * fVar16)) + param_5;
  return;
}

// 01075000  FUN_01075000  size=481  [run]
float * FUN_01075000(float *param_1,float *param_2,int param_3,int param_4,float param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 in_XMM3 [16];
  float fVar11;
  undefined1 local_70 [16];
  float local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  float *local_14;
  
  fVar11 = param_5;
  switch(param_4) {
  case 0:
    local_30 = 0;
    uStack_28 = 0xbf80000000000000;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = -1.0;
    goto LAB_010750a7;
  case 1:
    fVar7 = param_2[-4];
    fVar8 = param_2[-3];
    local_30 = *(undefined8 *)(param_2 + -4);
    fVar9 = param_2[-2];
    uStack_28 = CONCAT44(param_5,fVar9);
    fVar10 = param_5;
    goto LAB_010750a7;
  case 2:
    pfVar5 = (float *)FUN_01074c00(param_2 + -8,param_5);
    break;
  case 3:
    pfVar5 = (float *)FUN_01074c80(param_2 + -8,param_2 + -0xc,param_5);
    break;
  default:
    pfVar5 = (float *)FUN_01074e00(param_2 + -8,param_2 + -0xc,param_2 + -0x10,param_5);
    fVar11 = pfVar5[1];
    fVar7 = pfVar5[2];
    fVar8 = pfVar5[3];
    *param_1 = *pfVar5;
    param_1[1] = fVar11;
    param_1[2] = fVar7;
    param_1[3] = fVar8;
    return param_1;
  }
  fVar7 = *pfVar5;
  fVar8 = pfVar5[1];
  fVar9 = pfVar5[2];
  fVar10 = pfVar5[3];
LAB_010750a7:
  iVar6 = 0;
  *param_1 = fVar7;
  param_1[1] = fVar8;
  param_1[2] = fVar9;
  param_1[3] = fVar10;
  if (0 < param_3) {
    local_40 = 0.0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    local_50 = 3.0;
    uStack_4c = 0x40400000;
    uStack_48 = 0x40400000;
    uStack_44 = 0x40400000;
    local_60 = 0.5;
    uStack_5c = 0x3f000000;
    uStack_58 = 0x3f000000;
    uStack_54 = 0x3f000000;
    local_14 = param_2;
    do {
      fVar7 = (*local_14 - *param_1) * (*local_14 - *param_1);
      fVar8 = (local_14[1] - param_1[1]) * (local_14[1] - param_1[1]);
      fVar9 = (local_14[2] - param_1[2]) * (local_14[2] - param_1[2]);
      fVar10 = fVar8 + fVar7 + fVar9;
      auVar3._4_4_ = fVar8 + fVar7 + fVar9;
      auVar3._0_4_ = fVar10;
      auVar3._8_4_ = fVar8 + fVar7 + fVar9;
      auVar3._12_4_ = fVar8 + fVar7 + fVar9;
      in_XMM3 = rsqrtps(in_XMM3,auVar3);
      fVar7 = in_XMM3._0_4_;
      fVar7 = (float)(~-(uint)(fVar10 <= local_40) &
                     (uint)((local_50 - fVar7 * fVar10 * fVar7) * local_60 * fVar7 * fVar10));
      pfVar5 = local_14;
      iVar4 = iVar6;
      if (param_1[3] <= fVar7 && fVar7 != param_1[3]) {
        for (; 0 < iVar4; iVar4 = iVar4 + -1) {
          uVar1 = *(undefined8 *)pfVar5;
          uVar2 = *(undefined8 *)(pfVar5 + 2);
          *pfVar5 = pfVar5[-4];
          pfVar5[1] = pfVar5[-3];
          pfVar5[2] = pfVar5[-2];
          pfVar5[3] = pfVar5[-1];
          local_30._0_4_ = (float)uVar1;
          local_30._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
          uStack_28._0_4_ = (float)uVar2;
          uStack_28._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          pfVar5[-4] = (float)local_30;
          pfVar5[-3] = local_30._4_4_;
          pfVar5[-2] = (float)uStack_28;
          pfVar5[-1] = uStack_28._4_4_;
          pfVar5 = pfVar5 + -4;
          local_30 = uVar1;
          uStack_28 = uVar2;
        }
        pfVar5 = (float *)FUN_01075000(local_70,param_2 + 4,iVar6,param_4 + 1,fVar11);
        fVar11 = pfVar5[1];
        fVar7 = pfVar5[2];
        fVar8 = pfVar5[3];
        *param_1 = *pfVar5;
        param_1[1] = fVar11;
        param_1[2] = fVar7;
        param_1[3] = fVar8;
        fVar11 = param_5;
      }
      iVar6 = iVar6 + 1;
      local_14 = local_14 + 4;
    } while (iVar6 < param_3);
  }
  return param_1;
}

// 01075200  FUN_01075200  size=185  [run]
undefined4 FUN_01075200(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = param_2[1];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  iVar4 = FUN_01005cb0(*(undefined4 *)((int)pvVar3 + 0x2c),iVar2 << 4);
  iVar2 = param_2[2];
  iVar7 = 0;
  if (0 < param_2[1]) {
    iVar6 = 0;
    puVar5 = (undefined4 *)(iVar4 + 8);
    do {
      iVar7 = iVar7 + 1;
      puVar5[-2] = *(undefined4 *)(iVar6 + *param_2);
      puVar5[-1] = *(undefined4 *)(iVar6 + 4 + *param_2);
      iVar1 = iVar6 + 8;
      iVar6 = iVar6 + ((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) * 4;
      *puVar5 = *(undefined4 *)(iVar1 + *param_2);
      puVar5 = puVar5 + 4;
    } while (iVar7 < param_2[1]);
  }
  FUN_01075000(param_1,iVar4,param_2[1],0,param_3);
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar3 + 0x2c),iVar4);
  return param_1;
}

// 010752C0  FUN_010752c0  size=131  [run]
void FUN_010752c0(undefined4 param_1,int param_2)

{
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = -0x80000000;
  FUN_0108c9e0(param_1,&local_10);
  if (local_c < 1) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 4) = 0;
  }
  else {
    local_18 = local_c;
    local_1c = local_10;
    local_14 = 0x10;
    FUN_010740c0(&local_1c,param_2);
  }
  local_c = 0;
  if (-1 < local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 << 4);
  }
  return;
}

// 01076670  FUN_01076670  size=385  [run]
void __fastcall FUN_01076670(float *param_1,int param_2,int param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float *pfVar4;
  int iVar5;
  float in_XMM0_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  undefined1 auVar15 [16];
  float fVar17;
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  iVar5 = 2;
  pfVar4 = param_1;
  do {
    pfVar1 = (float *)((param_2 - (int)param_1) + (int)pfVar4);
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    *pfVar4 = *pfVar1;
    pfVar4[1] = fVar6;
    pfVar4[2] = fVar7;
    pfVar4[3] = fVar8;
    pfVar1 = (float *)((param_3 - (int)param_1) + (int)pfVar4);
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    *pfVar4 = *pfVar1 * in_XMM0_Da + *pfVar4;
    pfVar4[1] = fVar6 * in_XMM0_Da + pfVar4[1];
    pfVar4[2] = fVar7 * in_XMM0_Da + pfVar4[2];
    pfVar4[3] = fVar8 * in_XMM0_Da + pfVar4[3];
    pfVar4 = pfVar4 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  fVar6 = *param_1 * *param_1;
  fVar7 = param_1[1] * param_1[1];
  fVar8 = param_1[2] * param_1[2];
  fVar9 = fVar7 + fVar6 + fVar8;
  fVar10 = fVar7 + fVar6 + fVar8;
  fVar12 = fVar7 + fVar6 + fVar8;
  fVar8 = fVar7 + fVar6 + fVar8;
  auVar18._4_4_ = fVar10;
  auVar18._0_4_ = fVar9;
  auVar18._8_4_ = fVar12;
  auVar18._12_4_ = fVar8;
  auVar18 = rsqrtps(in_XMM5,auVar18);
  fVar6 = auVar18._0_4_;
  fVar7 = auVar18._4_4_;
  fVar14 = auVar18._8_4_;
  fVar11 = auVar18._12_4_;
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  fVar9 = *param_1 *
          (float)(~-(uint)(fVar9 <= 0.0) & (uint)((3.0 - fVar6 * fVar9 * fVar6) * fVar6 * 0.5));
  fVar10 = param_1[1] *
           (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar7 * fVar10 * fVar7) * fVar7 * 0.5));
  fVar12 = param_1[2] *
           (float)(~-(uint)(fVar12 <= 0.0) & (uint)((3.0 - fVar14 * fVar12 * fVar14) * fVar14 * 0.5)
                  );
  fVar14 = param_1[3] *
           (float)(~-(uint)(fVar8 <= 0.0) & (uint)((3.0 - fVar11 * fVar8 * fVar11) * fVar11 * 0.5));
  fVar6 = param_1[4] * fVar9;
  fVar7 = param_1[5] * fVar10;
  fVar8 = param_1[6] * fVar12;
  *param_1 = fVar9;
  param_1[1] = fVar10;
  param_1[2] = fVar12;
  param_1[3] = fVar14;
  param_1[4] = param_1[4] - (fVar7 + fVar6 + fVar8) * fVar9;
  param_1[5] = param_1[5] - (fVar7 + fVar6 + fVar8) * fVar10;
  param_1[6] = param_1[6] - (fVar7 + fVar6 + fVar8) * fVar12;
  param_1[7] = param_1[7] - (fVar7 + fVar6 + fVar8) * fVar14;
  fVar6 = param_1[4];
  fVar7 = param_1[5];
  fVar8 = param_1[6];
  fVar9 = fVar6 * fVar6;
  fVar10 = fVar7 * fVar7;
  fVar12 = fVar8 * fVar8;
  auVar19._4_4_ = fVar9;
  auVar19._0_4_ = fVar9;
  auVar19._8_4_ = fVar9;
  auVar19._12_4_ = fVar9;
  fVar14 = fVar10 + fVar9 + fVar12;
  fVar11 = fVar10 + fVar9 + fVar12;
  fVar13 = fVar10 + fVar9 + fVar12;
  fVar12 = fVar10 + fVar9 + fVar12;
  auVar2._4_4_ = fVar11;
  auVar2._0_4_ = fVar14;
  auVar2._8_4_ = fVar13;
  auVar2._12_4_ = fVar12;
  auVar18 = rsqrtps(auVar19,auVar2);
  fVar9 = auVar18._0_4_;
  fVar10 = auVar18._4_4_;
  fVar16 = auVar18._8_4_;
  fVar17 = auVar18._12_4_;
  param_1[4] = (float)(~-(uint)(fVar14 <= 0.0) &
                      (uint)((3.0 - fVar9 * fVar14 * fVar9) * fVar9 * 0.5)) * fVar6;
  param_1[5] = (float)(~-(uint)(fVar11 <= 0.0) &
                      (uint)((3.0 - fVar10 * fVar11 * fVar10) * fVar10 * 0.5)) * fVar7;
  param_1[6] = (float)(~-(uint)(fVar13 <= 0.0) &
                      (uint)((3.0 - fVar16 * fVar13 * fVar16) * fVar16 * 0.5)) * fVar8;
  param_1[7] = (float)(~-(uint)(fVar12 <= 0.0) &
                      (uint)((3.0 - fVar17 * fVar12 * fVar17) * fVar17 * 0.5)) * param_1[7];
  param_1[8] = param_1[1] * param_1[6] - param_1[2] * param_1[5];
  param_1[9] = param_1[2] * param_1[4] - *param_1 * param_1[6];
  param_1[10] = *param_1 * param_1[5] - param_1[1] * param_1[4];
  param_1[0xb] = param_1[3] * param_1[7] - param_1[3] * param_1[7];
  fVar6 = param_1[8];
  fVar7 = param_1[9];
  fVar8 = param_1[10];
  fVar9 = fVar6 * fVar6;
  fVar10 = fVar7 * fVar7;
  fVar12 = fVar8 * fVar8;
  fVar14 = fVar10 + fVar9 + fVar12;
  fVar11 = fVar10 + fVar9 + fVar12;
  fVar13 = fVar10 + fVar9 + fVar12;
  fVar12 = fVar10 + fVar9 + fVar12;
  auVar3._4_4_ = fVar11;
  auVar3._0_4_ = fVar14;
  auVar3._8_4_ = fVar13;
  auVar3._12_4_ = fVar12;
  auVar18 = rsqrtps(auVar15,auVar3);
  fVar9 = auVar18._0_4_;
  fVar10 = auVar18._4_4_;
  fVar16 = auVar18._8_4_;
  fVar17 = auVar18._12_4_;
  param_1[8] = (float)(~-(uint)(fVar14 <= 0.0) &
                      (uint)((3.0 - fVar9 * fVar14 * fVar9) * fVar9 * 0.5)) * fVar6;
  param_1[9] = (float)(~-(uint)(fVar11 <= 0.0) &
                      (uint)((3.0 - fVar10 * fVar11 * fVar10) * fVar10 * 0.5)) * fVar7;
  param_1[10] = (float)(~-(uint)(fVar13 <= 0.0) &
                       (uint)((3.0 - fVar16 * fVar13 * fVar16) * fVar16 * 0.5)) * fVar8;
  param_1[0xb] = (float)(~-(uint)(fVar12 <= 0.0) &
                        (uint)((3.0 - fVar17 * fVar12 * fVar17) * fVar17 * 0.5)) * param_1[0xb];
  return;
}

// 01077020  FUN_01077020  size=20  [run]
void __thiscall FUN_01077020(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 01077040  FUN_01077040  size=11  [run]
int FUN_01077040(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01077050  FUN_01077050  size=24  [run]
void __thiscall
FUN_01077050(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 01077070  FUN_01077070  size=36  [run]
void __thiscall
FUN_01077070(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
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
  return;
}

// 010770A0  FUN_010770a0  size=167  [run]
void __thiscall FUN_010770a0(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(int *)(param_1 + 4) = iVar2;
  fVar1 = (float)iVar2;
  if (iVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *param_2 = fVar1 * 2.3283064e-10;
  iVar2 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(int *)(param_1 + 4) = iVar2;
  fVar1 = (float)iVar2;
  if (iVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  param_2[1] = fVar1 * 2.3283064e-10;
  iVar2 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(int *)(param_1 + 4) = iVar2;
  fVar1 = (float)iVar2;
  if (iVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  param_2[2] = fVar1 * 2.3283064e-10;
  iVar2 = *(int *)(param_1 + 4) * 0x19660d + 0x3c6ef35f;
  *(int *)(param_1 + 4) = iVar2;
  fVar1 = (float)iVar2;
  if (iVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  param_2[3] = fVar1 * 2.3283064e-10;
  return;
}

// 01077150  FUN_01077150  size=28  [run]
void __thiscall FUN_01077150(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

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
  param_1[3] = param_3;
  return;
}

// 01077180  FUN_01077180  size=18  [run]
void __thiscall FUN_01077180(undefined4 *param_1,undefined4 *param_2)

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

// 010771A0  FUN_010771a0  size=105  [run]
undefined4 * __thiscall FUN_010771a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    param_2 = param_2 << 4;
    uVar2 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0xfU)) >> 4;
    if (iVar3 != 0) goto LAB_010771f5;
  }
  iVar3 = -0x80000000;
LAB_010771f5:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 01077210  FUN_01077210  size=18  [run]
void FUN_01077210(undefined4 *param_1)

{
  *param_1 = 0x3eaaaaab;
  param_1[1] = 0x3eaaaaab;
  param_1[2] = 0x3eaaaaab;
  param_1[3] = 0x3eaaaaab;
  return;
}

// 01077230  FUN_01077230  size=36  [run]
void FUN_01077230(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005cb0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 << 4);
  return;
}

// 01077260  FUN_01077260  size=33  [run]
void FUN_01077260(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  FUN_01005d00(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return;
}

// 01077290  FUN_01077290  size=32  [run]
void __thiscall FUN_01077290(undefined4 *param_1,undefined4 *param_2)

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

// 010772B0  FUN_010772b0  size=109  [run]
int * __thiscall FUN_010772b0(int *param_1,uint param_2)

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
    uVar3 = param_2 * 0x10 + 0x7f & 0xffffff80;
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

// 01077320  FUN_01077320  size=141  [run]
void __fastcall FUN_01077320(int *param_1)

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
  uVar4 = iVar2 * 0x10 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 010773B0  FUN_010773b0  size=44  [run]
int FUN_010773b0(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1U | param_1 - 1U >> 0x10;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 2;
  return (uVar1 >> 1 | uVar1) + 1;
}

// 01077490  FUN_01077490  size=44  [run]
void __fastcall FUN_01077490(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f7fff58;
  param_1[4] = 0x100;
  param_1[5] = 0x100;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}

// 010774E0  FUN_010774e0  size=22  [run]
void __fastcall FUN_010774e0(undefined4 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0x34000000;
  return;
}

// 01077520  FUN_01077520  size=27  [run]
void __fastcall FUN_01077520(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x10))(1);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 01077550  FUN_01077550  size=19  [run]
void __thiscall FUN_01077550(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x1a0) = param_2;
  return;
}

// 01077580  FUN_01077580  size=21  [run]
void __thiscall FUN_01077580(int param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(*(int *)(param_1 + 8) + 0x1a6);
  return;
}

// 010775A0  FUN_010775a0  size=21  [run]
void __thiscall FUN_010775a0(int param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(*(int *)(param_1 + 8) + 0x1a4);
  return;
}

// 010775C0  FUN_010775c0  size=46  [run]
void __thiscall FUN_010775c0(int param_1,undefined1 *param_2)

{
  if ((*(char *)(*(int *)(param_1 + 8) + 0x1a4) != '\0') &&
     (*(char *)(*(int *)(param_1 + 8) + 0x1a5) == '\0')) {
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 01077600  FUN_01077600  size=4  [run]
undefined4 __fastcall FUN_01077600(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// 01077610  FUN_01077610  size=10  [run]
undefined4 __fastcall FUN_01077610(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + 0x198);
}

// 01077620  FUN_01077620  size=38  [run]
void __thiscall FUN_01077620(int param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *param_2 = *(undefined8 *)(iVar1 + 0xc0);
  param_2[1] = *(undefined8 *)(iVar1 + 200);
  return;
}

// 01077650  FUN_01077650  size=9  [run]
int __fastcall FUN_01077650(int param_1)

{
  return *(int *)(param_1 + 8) + 0xd0;
}

// 01077660  FUN_01077660  size=13  [run]
int FUN_01077660(int param_1)

{
  return param_1 + 0x10;
}

// 010776A0  FUN_010776a0  size=49  [run]
undefined1 *
FUN_010776a0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0107d040(param_2,param_3,param_4,param_5,param_6);
  *param_1 = uVar1;
  return param_1;
}


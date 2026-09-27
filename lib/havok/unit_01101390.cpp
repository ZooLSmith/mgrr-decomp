// lib/havok/unit_01101390.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01101390..0110F9E0, 467 functions

#include "types.h"

// 01101390  hkXmlTagfileReader::vf0C  size=144  [run]
undefined4 * hkXmlTagfileReader::vf0C(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  
  FUN_01100c20(param_2,param_3);
  param_3 = (undefined4 *)0x0;
  iVar2 = FUN_011010b0(&param_3);
  if (iVar2 == 0) {
    *param_1 = param_3;
    if (param_3 == (undefined4 *)0x0) goto LAB_0110140c;
    *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
    param_3[2] = param_3[2] + 1;
    *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
    piVar1 = param_3 + 2;
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  else {
    *param_1 = 0;
    if (param_3 == (undefined4 *)0x0) goto LAB_0110140c;
    *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
    piVar1 = param_3 + 2;
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  if (iVar2 == 0) {
    (**(code **)*param_3)(1);
  }
LAB_0110140c:
  FUN_01100d90();
  return param_1;
}

// 01101420  FUN_01101420  size=27  [run]
uint __fastcall FUN_01101420(uint param_1)

{
  undefined4 local_8;
  
  local_8 = param_1 & 0xffffff00;
  FUN_01025830(local_8);
  return param_1;
}

// 01101440  FUN_01101440  size=9  [run]
void FUN_01101440(void)

{
  FUN_01025470();
  return;
}

// 01101450  FUN_01101450  size=9  [run]
void FUN_01101450(void)

{
  FUN_01025be0();
  return;
}

// 01101470  FUN_01101470  size=9  [run]
void FUN_01101470(void)

{
  FUN_01025400();
  return;
}

// 01101480  FUN_01101480  size=9  [run]
void FUN_01101480(void)

{
  FUN_01025440();
  return;
}

// 01101490  FUN_01101490  size=24  [run]
undefined4 FUN_01101490(undefined4 param_1,undefined4 param_2)

{
  FUN_01025890(param_1,param_2);
  return param_1;
}

// 011014E0  FUN_011014e0  size=15  [run]
int __thiscall FUN_011014e0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01101530  FUN_01101530  size=15  [run]
int __thiscall FUN_01101530(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 011015C0  FUN_011015c0  size=32  [run]
void __thiscall FUN_011015c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 011015F0  FUN_011015f0  size=28  [run]
void __thiscall FUN_011015f0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01101610  FUN_01101610  size=28  [run]
void __thiscall FUN_01101610(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01101630  FUN_01101630  size=11  [run]
int FUN_01101630(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01101640  FUN_01101640  size=28  [run]
void __thiscall FUN_01101640(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 01101660  FUN_01101660  size=11  [run]
int FUN_01101660(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01101670  FUN_01101670  size=26  [run]
void __thiscall FUN_01101670(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01101690  FUN_01101690  size=11  [run]
int FUN_01101690(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 011016D0  FUN_011016d0  size=39  [run]
void FUN_011016d0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 01101700  FUN_01101700  size=31  [run]
void FUN_01101700(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01101720  FUN_01101720  size=39  [run]
void FUN_01101720(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return;
}

// 01101750  FUN_01101750  size=129  [run]
void __fastcall FUN_01101750(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[2]) {
    do {
      puVar2 = (undefined4 *)*param_1;
      if (puVar2 != (undefined4 *)0x0) {
        *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
        puVar2[2] = puVar2[2] + 1;
      }
      (**(code **)(**(int **)(param_1[1] + iVar3 * 8) + 0x60))
                (*(undefined4 *)(param_1[1] + iVar3 * 8 + 4),puVar2);
      if (puVar2 != (undefined4 *)0x0) {
        *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
        piVar1 = puVar2 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[2]);
  }
  iVar3 = 0;
  if (0 < param_1[5]) {
    do {
      (**(code **)(**(int **)(param_1[4] + iVar3 * 8) + 0x5c))
                (*(undefined4 *)(param_1[4] + iVar3 * 8 + 4),*param_1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[5]);
  }
  return;
}

// 01101860  FUN_01101860  size=13  [run]
void __thiscall FUN_01101860(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 01101870  FUN_01101870  size=32  [run]
void __thiscall FUN_01101870(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01101890  FUN_01101890  size=40  [run]
void FUN_01101890(undefined4 *param_1,int param_2,undefined4 *param_3)

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

// 011018C0  FUN_011018c0  size=40  [run]
void FUN_011018c0(undefined4 *param_1,int param_2,undefined4 *param_3)

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

// 011018F0  FUN_011018f0  size=62  [run]
void FUN_011018f0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (0 < param_2) {
    do {
      if (param_1 != (int *)0x0) {
        iVar1 = *param_3;
        *param_1 = iVar1;
        if (iVar1 != 0) {
          *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
          *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
        }
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01101960  FUN_01101960  size=70  [run]
int * __thiscall FUN_01101960(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  LPVOID pvVar3;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 != (undefined4 *)0x0) {
    *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  if ((param_2 & 1) != 0) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar3 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 011019B0  FUN_011019b0  size=58  [run]
void __thiscall FUN_011019b0(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 011019F0  FUN_011019f0  size=67  [run]
void __thiscall FUN_011019f0(int *param_1,undefined4 param_2,undefined4 *param_3)

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

// 01101A40  FUN_01101a40  size=67  [run]
void __thiscall FUN_01101a40(int *param_1,undefined4 param_2,undefined4 *param_3)

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

// 01101A90  FUN_01101a90  size=85  [run]
void __thiscall FUN_01101a90(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  piVar1 = (int *)(*param_1 + param_1[1] * 4);
  if (piVar1 != (int *)0x0) {
    iVar2 = *param_3;
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      *(short *)(iVar2 + 6) = *(short *)(iVar2 + 6) + 1;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      param_1[1] = param_1[1] + 1;
      return;
    }
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01101AF0  FUN_01101af0  size=63  [run]
void __thiscall FUN_01101af0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01101B30  FUN_01101b30  size=63  [run]
void __thiscall FUN_01101b30(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01101B70  FUN_01101b70  size=63  [run]
void __thiscall FUN_01101b70(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01101BB0  FUN_01101bb0  size=50  [run]
void FUN_01101bb0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  while (param_2 = param_2 + -1, -1 < param_2) {
    puVar2 = *(undefined4 **)(param_1 + param_2 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
      piVar1 = puVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  return;
}

// 01101BF0  FUN_01101bf0  size=68  [run]
void __thiscall FUN_01101bf0(int *param_1,undefined4 *param_2)

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

// 01101C40  FUN_01101c40  size=68  [run]
void __thiscall FUN_01101c40(int *param_1,undefined4 *param_2)

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

// 01101C90  FUN_01101c90  size=86  [run]
void __thiscall FUN_01101c90(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  piVar1 = (int *)(*param_1 + param_1[1] * 4);
  if (piVar1 != (int *)0x0) {
    iVar2 = *param_2;
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      *(short *)(iVar2 + 6) = *(short *)(iVar2 + 6) + 1;
      *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
      param_1[1] = param_1[1] + 1;
      return;
    }
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01101CF0  FUN_01101cf0  size=27  [run]
void __thiscall FUN_01101cf0(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffff80;
  return;
}

// 01101D10  FUN_01101d10  size=27  [run]
void __thiscall FUN_01101d10(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = (int)&DAT_80000010;
  return;
}

// 01101D30  FUN_01101d30  size=61  [run]
void __fastcall FUN_01101d30(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01101D70  FUN_01101d70  size=63  [run]
void __fastcall FUN_01101d70(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01101DB0  FUN_01101db0  size=63  [run]
void __fastcall FUN_01101db0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01101DF0  FUN_01101df0  size=63  [run]
void __fastcall FUN_01101df0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01101E70  FUN_01101e70  size=67  [run]
void __thiscall FUN_01101e70(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x10),8);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}

// 01101EC0  FUN_01101ec0  size=67  [run]
void __thiscall FUN_01101ec0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 8) == (*(uint *)(param_1 + 0xc) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 4),8);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

// 01101F10  FUN_01101f10  size=57  [run]
void __fastcall FUN_01101f10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01101F50  FUN_01101f50  size=61  [run]
void __fastcall FUN_01101f50(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01101F90  FUN_01101f90  size=61  [run]
void __fastcall FUN_01101f90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01101FD0  FUN_01101fd0  size=63  [run]
void __fastcall FUN_01101fd0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01102010  FUN_01102010  size=63  [run]
void __fastcall FUN_01102010(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01102050  FUN_01102050  size=63  [run]
void __fastcall FUN_01102050(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01102090  FUN_01102090  size=104  [run]
void __thiscall FUN_01102090(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *param_1;
  iVar3 = param_1[1];
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    puVar4 = *(undefined4 **)(iVar2 + iVar3 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1;
      piVar1 = puVar4 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01102120  hkBaseObject::hkBaseObject_211  size=186  [run]
void __fastcall hkBaseObject::hkBaseObject_211(undefined4 *param_1)

{
  param_1[0x1b] = 0;
  if (-1 < (int)param_1[0x1c]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x1a],param_1[0x1c] * 8);
  }
  param_1[0x1a] = 0;
  param_1[0x1c] = 0x80000000;
  hkBaseObject_21();
  param_1[0xc] = vftable;
  param_1[10] = 0;
  if (-1 < (int)param_1[0xb]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[9],param_1[0xb] & 0x3fffffff);
  }
  param_1[9] = 0;
  param_1[0xb] = 0x80000000;
  param_1[7] = 0;
  if (-1 < (int)param_1[8]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[6],param_1[8] * 4);
  }
  param_1[6] = 0;
  param_1[8] = 0x80000000;
  FUN_01025870();
  *param_1 = vftable;
  return;
}

// 011021E0  FUN_011021e0  size=113  [run]
void __fastcall FUN_011021e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < *(int *)(param_1 + 0x18)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x18) * 8);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < *(int *)(param_1 + 0xc)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0xc) * 8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x80000000;
  return;
}

// 01102260  FUN_01102260  size=268  [run]
undefined4 __thiscall FUN_01102260(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 local_10 [11];
  undefined1 local_5;
  
  FUN_010ff7b0();
  if (*(int *)(param_1 + 0x74) == 1) {
    puVar5 = &DAT_016a3db4;
    puVar4 = &local_5;
    FUN_0111a1e0(local_10);
    pcVar1 = (char *)FUN_014455c0(puVar4,puVar5);
    if (*pcVar1 != '\0') {
      FUN_010ffa30();
      FUN_0111a740();
      iVar2 = FUN_010ff7b0();
      if (iVar2 == 4) {
        uVar3 = FUN_0111a220(local_10);
        iVar2 = FUN_010ff900(uVar3);
        if (iVar2 == *(int *)(param_1 + 0xd0)) {
          (**(code **)(*(int *)*param_2 + 0x60))(param_2[1],0);
        }
        else {
          FUN_010ffe70(iVar2);
          FUN_01101ec0(*param_2,param_2[1]);
        }
        FUN_0111a740();
        FUN_010ff7b0();
        uVar3 = FUN_010ffa90();
        return uVar3;
      }
    }
  }
  else if (*(int *)(param_1 + 0x74) == 2) {
    puVar5 = &DAT_0164cd24;
    puVar4 = &local_5;
    FUN_0111a1e0(local_10);
    pcVar1 = (char *)FUN_014455c0(puVar4,puVar5);
    if (*pcVar1 != '\0') {
      (**(code **)(*(int *)*param_2 + 0x60))(param_2[1],0);
      return 0;
    }
  }
  return 1;
}

// 01102370  FUN_01102370  size=268  [run]
undefined4 __thiscall FUN_01102370(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 local_10 [11];
  undefined1 local_5;
  
  FUN_010ff7b0();
  if (*(int *)(param_1 + 0x74) == 1) {
    puVar5 = &DAT_016a3db4;
    puVar4 = &local_5;
    FUN_0111a1e0(local_10);
    pcVar1 = (char *)FUN_014455c0(puVar4,puVar5);
    if (*pcVar1 != '\0') {
      FUN_010ffa30();
      FUN_0111a740();
      iVar2 = FUN_010ff7b0();
      if (iVar2 == 4) {
        uVar3 = FUN_0111a220(local_10);
        iVar2 = FUN_010ff900(uVar3);
        if (iVar2 == *(int *)(param_1 + 0xd0)) {
          (**(code **)(*(int *)*param_2 + 0x44))(param_2[1],0);
        }
        else {
          FUN_010ffe70(iVar2);
          FUN_01101e70(*param_2,param_2[1]);
        }
        FUN_0111a740();
        FUN_010ff7b0();
        uVar3 = FUN_010ffa90();
        return uVar3;
      }
    }
  }
  else if (*(int *)(param_1 + 0x74) == 2) {
    puVar5 = &DAT_0164cd24;
    puVar4 = &local_5;
    FUN_0111a1e0(local_10);
    pcVar1 = (char *)FUN_014455c0(puVar4,puVar5);
    if (*pcVar1 != '\0') {
      (**(code **)(*(int *)*param_2 + 0x44))(param_2[1],0);
      return 0;
    }
  }
  return 1;
}

// 01102480  FUN_01102480  size=107  [run]
void __fastcall FUN_01102480(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *param_1;
  iVar3 = param_1[1];
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    puVar4 = *(undefined4 **)(iVar2 + iVar3 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1;
      piVar1 = puVar4 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 011024F0  FUN_011024f0  size=9  [run]
void FUN_011024f0(void)

{
  FUN_01102260();
  return;
}

// 01102500  FUN_01102500  size=9  [run]
void FUN_01102500(void)

{
  FUN_01102370();
  return;
}

// 01102510  FUN_01102510  size=53  [run]
int __thiscall FUN_01102510(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_011021e0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x1c);
  }
  return param_1;
}

// 01102550  FUN_01102550  size=107  [run]
void __fastcall FUN_01102550(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *param_1;
  iVar3 = param_1[1];
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    puVar4 = *(undefined4 **)(iVar2 + iVar3 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1;
      piVar1 = puVar4 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 011025E0  hkBinaryPackfileWriter::hkBinaryPackfileWriter  size=117  [run]
undefined4 * __thiscall
hkBinaryPackfileWriter::hkBinaryPackfileWriter(undefined4 *param_1,undefined4 param_2)

{
  hkPackfileWriter::hkPackfileWriter(param_2);
  *param_1 = vftable;
  hkXmlPackfileWriter::vf20(PTR_s___classnames___01b1e0fc);
  hkXmlPackfileWriter::vf28(&DAT_01f9050c,PTR_s___types___01b1dc04);
  hkXmlPackfileWriter::vf28(&DAT_01f9047c,PTR_s___types___01b1dc04);
  hkXmlPackfileWriter::vf28(&DAT_01f904dc,PTR_s___types___01b1dc04);
  hkXmlPackfileWriter::vf28(&DAT_01f904ac,PTR_s___types___01b1dc04);
  return param_1;
}

// 01102660  hkBinaryPackfileWriter::~hkBinaryPackfileWriter  size=11  [run]
void __fastcall hkBinaryPackfileWriter::~hkBinaryPackfileWriter(undefined4 *param_1)

{
  *param_1 = vftable;
  hkBaseObject::hkBaseObject_239();
  return;
}

// 01102670  FUN_01102670  size=149  [run]
void FUN_01102670(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  undefined1 local_c;
  undefined4 local_8;
  
  uVar2 = hkCrc32StreamWriter::hkCrc32StreamWriter_3(0);
  param_2 = uVar2;
  if (*(char *)(param_1 + 0x4c) != '\0') {
    local_8._3_1_ = (undefined1)((uint)uVar2 >> 0x18);
    param_2._2_1_ = (undefined1)((uint)uVar2 >> 0x10);
    param_2._1_1_ = (undefined1)((uint)uVar2 >> 8);
    uVar1 = param_2._1_1_;
    param_2._0_2_ = CONCAT11(param_2._2_1_,local_8._3_1_);
    param_2 = CONCAT13((char)uVar2,CONCAT12(uVar1,(undefined2)param_2));
  }
  local_c = 9;
  local_10 = param_2;
  local_8 = uVar2;
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))(&local_10,5);
  uVar2 = FUN_010093a0();
  iVar3 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))();
  FUN_01025470(uVar2,iVar3 - param_3);
  iVar3 = **(int **)(param_1 + 0x1c);
  iVar4 = FUN_01015cd0(uVar2);
  (**(code **)(iVar3 + 0x10))(uVar2,iVar4 + 1);
  return;
}

// 01102710  FUN_01102710  size=190  [run]
void __thiscall FUN_01102710(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar5 = param_2;
  iVar6 = *(int *)(param_1 + 0x68);
  piVar7 = (int *)(param_2 + 4);
  uVar2 = *(uint *)(param_2 + 0xc) & 0x3fffffff;
  if ((int)uVar2 < iVar6) {
    iVar4 = uVar2 * 2;
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar7,iVar4,0x30);
  }
  piVar1 = (int *)(param_2 + 8);
  param_2 = iVar6 - *piVar1;
  iVar4 = *piVar1 * 0x30 + *piVar7;
  if (0 < param_2) {
    do {
      if (iVar4 != 0) {
        FUN_01015ea0(iVar4,0,4);
      }
      iVar4 = iVar4 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *(int *)(iVar5 + 8) = iVar6;
  uVar3 = FUN_01103750(piVar7);
  FUN_01015ea0(*piVar7,0xffffffff,uVar3);
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    iVar5 = 0;
    do {
      FUN_01015cb0(*piVar7 + iVar5,*(undefined4 *)(*(int *)(param_1 + 100) + iVar6 * 4),0x13);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar6 < *(int *)(param_1 + 0x68));
  }
  return;
}

// 011027D0  FUN_011027d0  size=214  [run]
void FUN_011027d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_EAX;
  int *unaff_EDI;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_01015ea0(&local_78,0xffffffff,0x40);
  local_70 = *in_EAX;
  local_78 = 0x57e0e057;
  local_74 = 0x10c0c010;
  local_50[0] = 0;
  local_40 = 0;
  local_6c = 9;
  FUN_01015e80(local_68,in_EAX + 1,4);
  local_64 = param_2;
  FUN_01015ea0(local_3c,0xffffffff,4);
  if (in_EAX[3] == 0) {
    FUN_010e56c0(local_50);
  }
  else {
    FUN_01015cb0(local_50,in_EAX[3],0x10);
  }
  local_30 = 0x80000000;
  local_24 = 0x80000000;
  local_18 = 0x80000000;
  local_c = 0x80000000;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  local_8 = 0;
  (**(code **)(*unaff_EDI + 0xc))(param_1,&local_78,&DAT_0209b80c,&local_38);
  FUN_010f79a0();
  return;
}

// 011028B0  FUN_011028b0  size=986  [run]
void __thiscall FUN_011028b0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  iVar3 = param_2;
  local_2c = param_1;
  hkOArchive::hkOArchive_4(*(undefined4 *)(param_2 + 0x1c),*(undefined1 *)(param_2 + 0x4c));
  local_30 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    local_24 = 0;
    local_28 = 0;
    do {
      iVar8 = *(int *)(iVar3 + 4) + local_28;
      piVar1 = (int *)(*(int *)(iVar3 + 0x40) + 0xc + local_24);
      local_14 = 0;
      local_10 = 0;
      local_c = -0x80000000;
      uVar2 = piVar1[1] * 3;
      uVar6 = 0;
      local_34 = iVar8;
      if (0 < (int)uVar2) {
        FUN_0100a210(&PTR_vftable_018e9b94,&local_14,uVar2 & ((int)uVar2 < 0) - 1,4);
        uVar6 = local_10;
      }
      iVar7 = uVar2 - uVar6;
      puVar5 = (undefined4 *)(local_14 + uVar6 * 4);
      if (0 < iVar7) {
        for (; iVar8 = local_34, iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar5 = 0xffffffff;
          puVar5 = puVar5 + 1;
        }
      }
      local_8 = 0;
      local_10 = uVar2;
      if (0 < piVar1[1]) {
        local_3c = local_2c + 0x14;
        local_38 = 0;
        param_2 = 0;
        do {
          iVar7 = FUN_01010160(*(undefined4 *)(*piVar1 + 4 + param_2),0xfffffffd);
          if ((-1 < iVar7) && (-1 < *(int *)(*(int *)(iVar3 + 0x10) + iVar7 * 8))) {
            *(int *)(local_38 + local_14) = *(int *)(*piVar1 + param_2) - *(int *)(iVar8 + 0x14);
            *(undefined4 *)(local_38 + 4 + local_14) =
                 *(undefined4 *)(*(int *)(iVar3 + 0x10) + iVar7 * 8);
            *(undefined4 *)(local_38 + 8 + local_14) =
                 *(undefined4 *)(*(int *)(iVar3 + 0x10) + 4 + iVar7 * 8);
            local_38 = local_38 + 0xc;
            iVar8 = local_34;
          }
          param_2 = param_2 + 0x10;
          local_8 = local_8 + 1;
        } while (local_8 < piVar1[1]);
      }
      (**(code **)(**(int **)(iVar3 + 0x1c) + 0x1c))
                (*(int *)(iVar8 + 0x1c) + *(int *)(iVar8 + 0x14),0);
      FUN_01017260(local_14,local_10);
      local_10 = 0;
      if (-1 < local_c) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_14,local_c * 4);
      }
      iVar8 = *(int *)(iVar3 + 4) + local_28;
      piVar1 = (int *)(*(int *)(iVar3 + 0x40) + 0x18 + local_24);
      local_14 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = -0x80000000;
      uVar2 = piVar1[1] * 3;
      local_c = 0x80000000;
      local_8 = iVar8;
      if (0 < (int)uVar2) {
        FUN_0100a210(&PTR_vftable_018e9b94,&local_20,((int)uVar2 < 0) - 1 & uVar2,4);
      }
      iVar7 = 0;
      local_1c = uVar2;
      if (0 < piVar1[1]) {
        iVar9 = 0;
        do {
          *(int *)(local_20 + iVar9) = *(int *)(*piVar1 + iVar7 * 8) - *(int *)(local_8 + 0x14);
          *(undefined4 *)(local_20 + 4 + iVar9) = 0;
          uVar4 = FUN_01025be0(*(undefined4 *)(*piVar1 + 4 + iVar7 * 8),0xffffffff);
          *(undefined4 *)(local_20 + 8 + iVar9) = uVar4;
          iVar7 = iVar7 + 1;
          iVar9 = iVar9 + 0xc;
          iVar8 = local_8;
        } while (iVar7 < piVar1[1]);
      }
      (**(code **)(**(int **)(iVar3 + 0x1c) + 0x1c))
                (*(int *)(iVar8 + 0x20) + *(int *)(iVar8 + 0x14),0);
      FUN_01017260(local_20,local_1c);
      local_1c = 0;
      if (-1 < local_18) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 * 4);
      }
      local_28 = local_28 + 0x30;
      local_24 = local_24 + 0x34;
      local_30 = local_30 + 1;
      local_20 = 0;
      local_18 = 0x80000000;
      param_1 = local_2c;
    } while (local_30 < *(int *)(iVar3 + 8));
  }
  (**(code **)(**(int **)(iVar3 + 0x1c) + 0x1c))(param_3,0);
  param_2 = 0;
  if (0 < *(int *)(iVar3 + 8)) {
    iVar8 = 0;
    do {
      local_78 = 0x80000000;
      local_6c = 0x80000000;
      local_60 = 0x80000000;
      local_54 = 0x80000000;
      local_80 = 0;
      local_7c = 0;
      local_74 = 0;
      local_70 = 0;
      local_68 = 0;
      local_64 = 0;
      local_5c = 0;
      local_58 = 0;
      local_50 = 0;
      (**(code **)(*(int *)(iVar3 + 0x20) + 0xc))
                (*(undefined4 *)(iVar3 + 0x1c),*(int *)(iVar3 + 4) + iVar8,&DAT_0209b7dc,&local_80);
      FUN_010f79a0();
      param_2 = param_2 + 1;
      iVar8 = iVar8 + 0x30;
      param_1 = local_2c;
    } while (param_2 < *(int *)(iVar3 + 8));
  }
  (**(code **)(**(int **)(iVar3 + 0x1c) + 0x1c))(0x18,0);
  puVar5 = (undefined4 *)FUN_01113500();
  param_2 = CONCAT31(param_2._1_3_,(char)((uint)*puVar5 >> 8) != DAT_01b1dc08._1_1_);
  hkOArchive::hkOArchive_4(*(undefined4 *)(iVar3 + 0x1c),param_2);
  FUN_01017100(*(undefined4 *)(*(int *)(iVar3 + 0x10) + *(int *)(param_1 + 0x8c) * 8));
  FUN_01017100(*(undefined4 *)(*(int *)(iVar3 + 0x10) + 4 + *(int *)(param_1 + 0x8c) * 8));
  FUN_01017100(0);
  uVar4 = FUN_010093a0();
  uVar4 = FUN_01025be0(uVar4,0xffffffff);
  FUN_01017100(uVar4);
  hkBaseObject::hkBaseObject_129();
  hkBaseObject::hkBaseObject_129();
  return;
}

// 01102C90  FUN_01102c90  size=182  [run]
void FUN_01102c90(void)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  int *unaff_EDI;
  undefined1 *local_34;
  int local_30;
  uint local_2c;
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = (**(code **)(*unaff_EDI + 0x20))();
  local_34 = local_28;
  local_30 = 0;
  local_2c = 0x80000020;
  if (0x20 < in_EAX) {
    iVar1 = 0x40;
    if (0x3f < in_EAX) {
      iVar1 = in_EAX;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_34,iVar1,1);
  }
  if (0 < in_EAX - local_30) {
    _memset(local_34 + local_30,-1,in_EAX - local_30);
  }
  uVar2 = in_EAX - 1U & local_8;
  if (uVar2 != 0) {
    (**(code **)(*unaff_EDI + 0x10))(local_34,in_EAX - uVar2);
  }
  local_30 = 0;
  if (-1 < (int)local_2c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_34,local_2c & 0x3fffffff);
  }
  return;
}

// 01102D50  FUN_01102d50  size=1795  [run]
void __thiscall FUN_01102d50(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  undefined *local_38 [4];
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar1 = param_2;
  iVar8 = param_2[1];
  local_8 = param_1;
  uVar2 = (**(code **)(*(int *)param_2[7] + 0x20))();
  *(undefined4 *)(iVar8 + 0x14) = uVar2;
  param_2 = (int *)((uint)param_2 & 0xffffff00);
  FUN_01025830(param_2);
  local_38[0] = &DAT_01f9050c;
  local_38[1] = &DAT_01f9047c;
  local_38[2] = &DAT_01f904dc;
  local_38[3] = &DAT_01f904ac;
  param_2 = (int *)0x0;
  do {
    uVar2 = FUN_010093a0();
    FUN_01025470(uVar2,1);
    FUN_01102670(piVar1,local_38[(int)param_2],*(undefined4 *)(iVar8 + 0x14));
    param_2 = (int *)((int)param_2 + 1);
  } while ((int)param_2 < 4);
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    local_c = 0;
    do {
      uVar2 = FUN_010093a0();
      uVar2 = FUN_01025530(uVar2);
      FUN_01025890((int)&param_2 + 3,uVar2);
      if (param_2._3_1_ == '\0') {
        uVar2 = FUN_010093a0();
        FUN_01025470(uVar2,1);
        FUN_01102670(piVar1,*(undefined4 *)(*(int *)(param_1 + 8) + 4 + local_c),
                     *(undefined4 *)(iVar8 + 0x14));
      }
      local_c = local_c + 0x18;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0xc));
  }
  FUN_01102c90();
  iVar3 = (**(code **)(*(int *)piVar1[7] + 0x20))();
  iVar3 = iVar3 - *(int *)(iVar8 + 0x14);
  *(int *)(iVar8 + 0x18) = iVar3;
  *(int *)(iVar8 + 0x1c) = iVar3;
  *(int *)(iVar8 + 0x20) = iVar3;
  *(int *)(iVar8 + 0x24) = iVar3;
  *(int *)(iVar8 + 0x28) = iVar3;
  *(int *)(iVar8 + 0x2c) = iVar3;
  FUN_01025870();
  iVar8 = *(int *)(local_8 + 0xc);
  if ((int)(piVar1[6] & 0x3fffffffU) < iVar8) {
    iVar3 = (piVar1[6] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar8) {
      iVar3 = iVar8;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1 + 4,iVar3,8);
  }
  iVar3 = 0;
  if (iVar8 != piVar1[5] && -1 < iVar8 - piVar1[5]) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar8 - piVar1[5]);
  }
  piVar1[5] = iVar8;
  param_2 = (int *)piVar1[2];
  if ((int)(piVar1[0x12] & 0x3fffffffU) < (int)param_2) {
    iVar8 = (piVar1[0x12] & 0x3fffffffU) * 2;
    iVar3 = (int)param_2;
    if ((int)param_2 < iVar8) {
      iVar3 = iVar8;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1 + 0x10,iVar3,0x34);
  }
  iVar8 = piVar1[0x11] - (int)param_2;
  while (iVar8 = iVar8 + -1, -1 < iVar8) {
    FUN_010f79a0();
  }
  iVar8 = (int)param_2 - piVar1[0x11];
  if (0 < iVar8) {
    puVar4 = (undefined4 *)(piVar1[0x11] * 0x34 + piVar1[0x10] + 0x14);
    do {
      if (puVar4 != (undefined4 *)0x14) {
        puVar4[-5] = 0;
        puVar4[-4] = 0;
        puVar4[-3] = 0x80000000;
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0x80000000;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0x80000000;
        puVar4[7] = 0;
      }
      puVar4 = puVar4 + 0xd;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  piVar1[0x11] = (int)param_2;
  local_24 = FUN_010e59a0(PTR_s___types___01b1dc04);
  local_c = 1;
  if (1 < piVar1[2]) {
    local_10 = 0x34;
    local_18 = 0x30;
    do {
      iVar3 = piVar1[1] + local_18;
      uVar2 = (**(code **)(*(int *)piVar1[7] + 0x20))();
      *(undefined4 *)(iVar3 + 0x14) = uVar2;
      iVar8 = 0;
      local_74 = 0x80000000;
      local_68 = 0x80000000;
      local_5c = 0x80000000;
      local_50 = 0x80000000;
      local_7c = 0;
      local_78 = 0;
      local_70 = 0;
      local_6c = 0;
      local_64 = 0;
      local_60 = 0;
      local_58 = 0;
      local_54 = 0;
      local_4c = 0;
      if ((*(char *)(*piVar1 + 8) == '\0') && (local_c == local_24)) {
        if (0 < *(int *)(local_8 + 0xc)) {
          iVar6 = 0;
          do {
            if (*(int *)(iVar6 + 0x10 + *(int *)(local_8 + 8)) == local_24) {
              *(undefined4 *)(piVar1[4] + iVar8 * 8) = 0xffffffff;
              *(undefined4 *)(piVar1[4] + 4 + iVar8 * 8) = 0xffffffff;
            }
            iVar8 = iVar8 + 1;
            iVar6 = iVar6 + 0x18;
          } while (iVar8 < *(int *)(local_8 + 0xc));
        }
      }
      else {
        param_2 = (int *)0x0;
        if (0 < *(int *)(local_8 + 0xc)) {
          local_14 = 0;
          do {
            local_20 = (int *)(*(int *)(local_8 + 8) + local_14);
            if (local_20[4] == local_c) {
              local_28 = *local_20;
              local_1c = local_20[1];
              iVar6 = (int)param_2 * 8;
              *(int *)(iVar6 + piVar1[4]) = local_c;
              iVar8 = piVar1[4];
              iVar5 = (**(code **)(*(int *)piVar1[7] + 0x20))();
              *(int *)(iVar8 + iVar6 + 4) = iVar5 - *(int *)(iVar3 + 0x14);
              if (local_1c == 0) {
                (**(code **)(*(int *)piVar1[7] + 0x10))(*local_20,local_20[5]);
              }
              else {
                (**(code **)(piVar1[8] + 0xc))(piVar1[7],local_28,local_1c,&local_7c);
              }
            }
            local_14 = local_14 + 0x18;
            param_2 = (int *)((int)param_2 + 1);
          } while ((int)param_2 < *(int *)(local_8 + 0xc));
        }
      }
      iVar8 = 0;
      if (0 < local_78) {
        do {
          piVar7 = (int *)(local_7c + iVar8 * 8);
          *piVar7 = *piVar7 - *(int *)(iVar3 + 0x14);
          piVar7 = (int *)(local_7c + 4 + iVar8 * 8);
          *piVar7 = *piVar7 - *(int *)(iVar3 + 0x14);
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_78);
      }
      param_2 = (int *)(local_6c - 1);
      if (-1 < (int)param_2) {
        local_28 = local_8 + 0x20;
        iVar8 = (int)param_2 * 0x10;
        do {
          local_1c = FUN_01010160(*(undefined4 *)(local_70 + 4 + iVar8),0);
          if (local_1c != 0) {
            local_20 = (int *)(local_70 + iVar8);
            if (local_54 == (local_50 & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,&local_58,8);
            }
            piVar7 = (int *)(local_58 + local_54 * 8);
            local_54 = local_54 + 1;
            *piVar7 = *local_20 - *(int *)(iVar3 + 0x14);
            piVar7[1] = local_1c;
            local_6c = local_6c - 1;
            if ((int *)local_6c != param_2) {
              puVar4 = (undefined4 *)(local_70 + iVar8);
              iVar6 = (local_6c * 0x10 + local_70) - (int)puVar4;
              local_20 = (int *)&DAT_00000004;
              do {
                *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
                puVar4 = puVar4 + 1;
                local_20 = (int *)((int)local_20 + -1);
              } while (local_20 != (int *)0x0);
            }
          }
          param_2 = (int *)((int)param_2 - 1);
          iVar8 = iVar8 + -0x10;
        } while (-1 < (int)param_2);
      }
      hkOArchive::hkOArchive_4(piVar1[7],(char)piVar1[0x13]);
      iVar8 = (**(code **)(*(int *)piVar1[7] + 0x20))();
      *(int *)(iVar3 + 0x18) = iVar8 - *(int *)(iVar3 + 0x14);
      FUN_01016e20(local_7c,4,local_78 * 2);
      FUN_01102c90();
      iVar8 = (**(code **)(*(int *)piVar1[7] + 0x20))();
      *(int *)(iVar3 + 0x1c) = iVar8 - *(int *)(iVar3 + 0x14);
      (**(code **)(*(int *)piVar1[7] + 0x1c))(local_6c * 0xc,1);
      FUN_011035d0(&local_70);
      FUN_01102c90();
      iVar8 = (**(code **)(*(int *)piVar1[7] + 0x20))();
      *(int *)(iVar3 + 0x20) = iVar8 - *(int *)(iVar3 + 0x14);
      (**(code **)(*(int *)piVar1[7] + 0x1c))(local_60 * 0xc,1);
      FUN_01103600(&local_64);
      FUN_01102c90();
      iVar8 = (**(code **)(*(int *)piVar1[7] + 0x20))();
      *(int *)(iVar3 + 0x24) = iVar8 - *(int *)(iVar3 + 0x14);
      local_14 = 0;
      if (-1 < *(int *)(local_8 + 0x34)) {
        piVar7 = *(int **)(local_8 + 0x2c);
        do {
          if (*piVar7 != -1) break;
          local_14 = local_14 + 1;
          piVar7 = piVar7 + 2;
        } while (local_14 <= *(int *)(local_8 + 0x34));
      }
      param_2 = (int *)((uint)param_2 & 0xffffff);
      iVar8 = local_8;
      if (local_14 <= *(int *)(local_8 + 0x34)) {
        do {
          iVar6 = FUN_01010160(*(undefined4 *)(*(int *)(iVar8 + 0x2c) + local_14 * 8),0xffffffff);
          if ((-1 < iVar6) && (*(int *)(*(int *)(iVar8 + 8) + 0x10 + iVar6 * 0x18) == local_c)) {
            uVar2 = *(undefined4 *)(*(int *)(local_8 + 0x2c) + 4 + local_14 * 8);
            param_2 = (int *)CONCAT13(1,param_2._0_3_);
            FUN_01017100(*(undefined4 *)(piVar1[4] + 4 + iVar6 * 8));
            iVar8 = FUN_01015cd0(uVar2);
            FUN_01016f90(uVar2,iVar8 + 1);
            FUN_01102c90();
            iVar8 = local_8;
          }
          iVar6 = *(int *)(iVar8 + 0x34);
          local_14 = local_14 + 1;
          if (local_14 <= iVar6) {
            piVar7 = (int *)(*(int *)(iVar8 + 0x2c) + local_14 * 8);
            do {
              if (*piVar7 != -1) break;
              local_14 = local_14 + 1;
              piVar7 = piVar7 + 2;
            } while (local_14 <= iVar6);
          }
        } while (local_14 <= iVar6);
        if (param_2._3_1_ != '\0') {
          FUN_01017100(0xffffffff);
          FUN_01102c90();
        }
      }
      iVar8 = (**(code **)(*(int *)piVar1[7] + 0x20))();
      param_2 = (int *)0x0;
      *(int *)(iVar3 + 0x28) = iVar8 - *(int *)(iVar3 + 0x14);
      if (0 < (int)local_54) {
        do {
          iVar8 = local_58 + (int)param_2 * 8;
          FUN_01017100(*(undefined4 *)(local_58 + (int)param_2 * 8));
          iVar6 = FUN_01015cd0(*(undefined4 *)(iVar8 + 4));
          FUN_01016f90(*(undefined4 *)(iVar8 + 4),iVar6 + 1);
          FUN_01102c90();
          param_2 = (int *)((int)param_2 + 1);
        } while ((int)param_2 < (int)local_54);
      }
      if (local_54 != 0) {
        FUN_01017100(0xffffffff);
        FUN_01103630(&local_58);
        FUN_01102c90();
      }
      iVar8 = (**(code **)(*(int *)piVar1[7] + 0x20))();
      *(int *)(iVar3 + 0x2c) = iVar8 - *(int *)(iVar3 + 0x14);
      hkBaseObject::hkBaseObject_129();
      FUN_010f79a0();
      local_18 = local_18 + 0x30;
      local_10 = local_10 + 0x34;
      local_c = local_c + 1;
    } while (local_c < piVar1[2]);
  }
  return;
}

// 01103460  hkBinaryPackfileWriter::vf1C  size=276  [run]
bool hkBinaryPackfileWriter::vf1C(int *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined ***local_48;
  undefined **local_14;
  undefined2 local_e;
  int *local_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  pcVar3 = (char *)(**(code **)(*param_1 + 0x18))((int)&param_1 + 3);
  if (*pcVar3 == '\0') {
    return true;
  }
  FUN_011044d0(param_2);
  local_e = 1;
  local_14 = hkSubStreamWriter::vftable;
  local_c = piVar2;
  local_8 = (**(code **)(*piVar2 + 0x20))();
  local_48 = &local_14;
  FUN_01102710(local_64);
  FUN_011027d0(local_48,local_5c);
  uVar4 = (*(code *)local_14[8])();
  uVar5 = FUN_01103750(local_60,1);
  (*(code *)local_14[7])(uVar5);
  FUN_01102d50(local_64);
  uVar5 = (*(code *)local_14[8])();
  FUN_011028b0(local_64,uVar4);
  (*(code *)local_14[7])(uVar5,0);
  (*(code *)local_14[5])();
  pcVar3 = (char *)(*(code *)local_14[3])((int)&param_1 + 3);
  cVar1 = *pcVar3;
  local_14 = hkBaseObject::vftable;
  FUN_01104540();
  return cVar1 == '\0';
}

// 01103580  FUN_01103580  size=43  [run]
undefined4 FUN_01103580(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_010101b0(param_1,&param_1);
  if (iVar1 == 0) {
    *param_2 = param_1;
    return 0;
  }
  return 1;
}

// 011035C0  FUN_011035c0  size=15  [run]
int __thiscall FUN_011035c0(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 011035D0  FUN_011035d0  size=44  [run]
void __thiscall FUN_011035d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}

// 01103600  FUN_01103600  size=44  [run]
void __thiscall FUN_01103600(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}

// 01103630  FUN_01103630  size=44  [run]
void __thiscall FUN_01103630(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}

// 01103690  FUN_01103690  size=18  [run]
int __thiscall FUN_01103690(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 01103700  FUN_01103700  size=15  [run]
int __thiscall FUN_01103700(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01103740  FUN_01103740  size=15  [run]
int __thiscall FUN_01103740(int *param_1,int param_2)

{
  return param_2 * 0x34 + *param_1;
}

// 01103750  FUN_01103750  size=17  [run]
int FUN_01103750(int param_1)

{
  return *(int *)(param_1 + 4) * 0x30;
}

// 01103770  FUN_01103770  size=52  [run]
undefined4 __thiscall FUN_01103770(int param_1,undefined4 param_2,int param_3)

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

// 011037E0  FUN_011037e0  size=44  [run]
void FUN_011037e0(int param_1,int param_2)

{
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        FUN_01015ea0(param_1,0,4);
      }
      param_1 = param_1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01103850  FUN_01103850  size=28  [run]
void __thiscall FUN_01103850(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x30);
  return;
}

// 01103890  FUN_01103890  size=28  [run]
void __thiscall FUN_01103890(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 011038C0  FUN_011038c0  size=25  [run]
void __thiscall FUN_011038c0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x34);
  return;
}

// 011038E0  hkSubStreamWriter::hkSubStreamWriter  size=44  [run]
undefined4 * __thiscall hkSubStreamWriter::hkSubStreamWriter(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = param_2;
  uVar1 = (**(code **)(*param_2 + 0x20))();
  param_1[3] = uVar1;
  return param_1;
}

// 01103910  FUN_01103910  size=25  [run]
undefined4 __thiscall FUN_01103910(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 8) + 0xc))(param_2);
  return param_2;
}

// 01103930  FUN_01103930  size=14  [run]
void __fastcall FUN_01103930(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0110393c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x10))();
  return;
}

// 01103940  FUN_01103940  size=10  [run]
void __fastcall FUN_01103940(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01103948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x14))();
  return;
}

// 01103950  FUN_01103950  size=25  [run]
undefined4 __thiscall FUN_01103950(int param_1,undefined4 param_2)

{
  (**(code **)(**(int **)(param_1 + 8) + 0x18))(param_2);
  return param_2;
}

// 01103970  FUN_01103970  size=55  [run]
void __thiscall FUN_01103970(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    (**(code **)(**(int **)(param_1 + 8) + 0x1c))(*(int *)(param_1 + 0xc) + param_2,0);
    return;
  }
  (**(code **)(**(int **)(param_1 + 8) + 0x1c))(param_2,param_3);
  return;
}

// 011039B0  FUN_011039b0  size=18  [run]
int __fastcall FUN_011039b0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  return iVar1 - *(int *)(param_1 + 0xc);
}

// 011039E0  FUN_011039e0  size=39  [run]
void FUN_011039e0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x34);
  }
  return;
}

// 01103A10  FUN_01103a10  size=15  [run]
undefined4 __thiscall FUN_01103a10(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + param_2 * 8);
}

// 01103A20  FUN_01103a20  size=16  [run]
undefined4 __thiscall FUN_01103a20(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 01103A30  FUN_01103a30  size=21  [run]
void __thiscall FUN_01103a30(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 01103AB0  FUN_01103ab0  size=52  [run]
void __thiscall FUN_01103ab0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    puVar1 = (undefined4 *)(param_2 * 0x10 + *param_1);
    iVar2 = (*param_1 + param_1[1] * 0x10) - (int)puVar1;
    iVar3 = 4;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 01103AF0  FUN_01103af0  size=55  [run]
void __thiscall FUN_01103af0(int param_1,undefined4 param_2,int param_3)

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

// 01103B30  FUN_01103b30  size=51  [run]
int __thiscall FUN_01103b30(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01103B70  FUN_01103b70  size=63  [run]
void __thiscall FUN_01103b70(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01103BB0  FUN_01103bb0  size=52  [run]
undefined4 __thiscall FUN_01103bb0(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x30);
    return uVar3;
  }
  return 0;
}

// 01103BF0  FUN_01103bf0  size=63  [run]
void __thiscall FUN_01103bf0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01103C30  FUN_01103c30  size=52  [run]
undefined4 __thiscall FUN_01103c30(int param_1,undefined4 param_2,int param_3)

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

// 01103C70  FUN_01103c70  size=52  [run]
undefined4 __thiscall FUN_01103c70(int param_1,undefined4 param_2,int param_3)

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
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x34);
    return uVar3;
  }
  return 0;
}

// 01103CB0  FUN_01103cb0  size=53  [run]
int __thiscall FUN_01103cb0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_010f79a0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x34);
  }
  return param_1;
}

// 01103CF0  FUN_01103cf0  size=38  [run]
void FUN_01103cf0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01103D20  hkSubStreamWriter::vf00  size=53  [run]
undefined4 * __thiscall hkSubStreamWriter::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01103D60  FUN_01103d60  size=38  [run]
void FUN_01103d60(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01103D90  hkBinaryPackfileWriter::vf00  size=52  [run]
int __thiscall hkBinaryPackfileWriter::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkBinaryPackfileWriter();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01103DF0  FUN_01103df0  size=36  [run]
void __thiscall FUN_01103df0(int *param_1,int param_2)

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

// 01103E20  FUN_01103e20  size=56  [run]
void __thiscall FUN_01103e20(int param_1,int param_2)

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

// 01103E60  FUN_01103e60  size=46  [run]
int __fastcall FUN_01103e60(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 8;
}

// 01103E90  FUN_01103e90  size=116  [run]
void __thiscall FUN_01103e90(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= param_3) {
      iVar1 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar1,0x30);
  }
  iVar1 = param_3 - param_1[1];
  iVar2 = param_1[1] * 0x30 + *param_1;
  if (0 < iVar1) {
    do {
      if (iVar2 != 0) {
        FUN_01015ea0(iVar2,0,4);
      }
      iVar2 = iVar2 + 0x30;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 01103F10  FUN_01103f10  size=55  [run]
void __thiscall FUN_01103f10(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,8);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01103F50  FUN_01103f50  size=88  [run]
void __thiscall FUN_01103f50(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  iVar2 = param_1[1];
  iVar1 = *param_1;
  iVar3 = param_3 - iVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4 + iVar4 * 4) = *param_4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  param_1[1] = param_3;
  return;
}

// 01103FB0  FUN_01103fb0  size=63  [run]
void __fastcall FUN_01103fb0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01103FF0  FUN_01103ff0  size=63  [run]
void __fastcall FUN_01103ff0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01104030  FUN_01104030  size=36  [run]
void FUN_01104030(undefined4 param_1,int param_2)

{
  while (param_2 = param_2 + -1, -1 < param_2) {
    FUN_010f79a0();
  }
  return;
}

// 01104060  FUN_01104060  size=44  [run]
undefined4 __fastcall FUN_01104060(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    uVar2 = FUN_010f79a0();
  }
  param_1[1] = 0;
  return uVar2;
}

// 01104090  FUN_01104090  size=116  [run]
void __thiscall FUN_01104090(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= param_2) {
      iVar1 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar1,0x30);
  }
  iVar1 = param_2 - param_1[1];
  iVar2 = param_1[1] * 0x30 + *param_1;
  if (0 < iVar1) {
    do {
      if (iVar2 != 0) {
        FUN_01015ea0(iVar2,0,4);
      }
      iVar2 = iVar2 + 0x30;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 01104110  FUN_01104110  size=56  [run]
void __thiscall FUN_01104110(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,8);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01104150  FUN_01104150  size=89  [run]
void __thiscall FUN_01104150(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  iVar2 = param_1[1];
  iVar1 = *param_1;
  iVar3 = param_2 - iVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      *(undefined4 *)(iVar1 + iVar2 * 4 + iVar4 * 4) = *param_3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  param_1[1] = param_2;
  return;
}

// 011041B0  FUN_011041b0  size=63  [run]
void __fastcall FUN_011041b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011041F0  FUN_011041f0  size=63  [run]
void __fastcall FUN_011041f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01104230  FUN_01104230  size=27  [run]
void __thiscall FUN_01104230(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffe0;
  return;
}

// 01104250  FUN_01104250  size=93  [run]
void __thiscall FUN_01104250(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_010f79a0();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x34);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011042B0  FUN_011042b0  size=57  [run]
void __fastcall FUN_011042b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011042F0  FUN_011042f0  size=93  [run]
void __fastcall FUN_011042f0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_010f79a0();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x34);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01104350  FUN_01104350  size=87  [run]
void FUN_01104350(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x14);
    do {
      if (puVar1 != (undefined4 *)0x14) {
        puVar1[-5] = 0;
        puVar1[-4] = 0;
        puVar1[-3] = 0x80000000;
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0x80000000;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0x80000000;
        puVar1[7] = 0;
      }
      puVar1 = puVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 011043B0  FUN_011043b0  size=178  [run]
void __thiscall FUN_011043b0(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x34);
  }
  iVar2 = param_1[1] - param_3;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    FUN_010f79a0();
  }
  iVar2 = param_3 - param_1[1];
  if (0 < iVar2) {
    puVar1 = (undefined4 *)(param_1[1] * 0x34 + *param_1 + 0x14);
    do {
      if (puVar1 != (undefined4 *)0x14) {
        puVar1[-5] = 0;
        puVar1[-4] = 0;
        puVar1[-3] = 0x80000000;
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0x80000000;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0x80000000;
        puVar1[7] = 0;
      }
      puVar1 = puVar1 + 0xd;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 01104470  FUN_01104470  size=93  [run]
void __fastcall FUN_01104470(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_010f79a0();
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x34);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011044D0  FUN_011044d0  size=112  [run]
uint * __thiscall FUN_011044d0(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x80000000;
  param_1[6] = 0x80000000;
  param_1[4] = 0;
  param_1[5] = 0;
  hkPlatformObjectWriter::hkPlatformObjectWriter(param_2 + 4,0,2);
  param_2 = param_2 & 0xffffff00;
  FUN_01025830(param_2);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x80000000;
  *(bool *)(param_1 + 0x13) = DAT_01b1dc08._1_1_ != *(char *)(uVar1 + 5);
  return param_1;
}

// 01104540  FUN_01104540  size=201  [run]
void __fastcall FUN_01104540(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x44);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    FUN_010f79a0();
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  if ((*(uint *)(param_1 + 0x48) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x40),(*(uint *)(param_1 + 0x48) & 0x3fffffff) * 0x34);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x80000000;
  FUN_01025870();
  hkBaseObject::hkBaseObject_86();
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((*(uint *)(param_1 + 0x18) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x10),*(uint *)(param_1 + 0x18) * 8);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(uint *)(param_1 + 0xc) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 4),(*(uint *)(param_1 + 0xc) & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x80000000;
  return;
}

// 01104610  FUN_01104610  size=175  [run]
void __thiscall FUN_01104610(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x34);
  }
  iVar2 = param_1[1] - param_2;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    FUN_010f79a0();
  }
  iVar2 = param_2 - param_1[1];
  if (0 < iVar2) {
    puVar1 = (undefined4 *)(param_1[1] * 0x34 + *param_1 + 0x14);
    do {
      if (puVar1 != (undefined4 *)0x14) {
        puVar1[-5] = 0;
        puVar1[-4] = 0;
        puVar1[-3] = 0x80000000;
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0x80000000;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0x80000000;
        puVar1[7] = 0;
      }
      puVar1 = puVar1 + 0xd;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 011046D0  FUN_011046d0  size=35  [run]
undefined4 __thiscall FUN_011046d0(int *param_1,int *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 0;
  }
  return 1;
}

// 01104710  FUN_01104710  size=13  [run]
void __fastcall FUN_01104710(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0110471b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x18))();
  return;
}

// 01104720  FUN_01104720  size=13  [run]
void __fastcall FUN_01104720(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0110472b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x1c))();
  return;
}

// 01104730  FUN_01104730  size=13  [run]
void __fastcall FUN_01104730(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0110473b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x20))();
  return;
}

// 01104740  FUN_01104740  size=28  [run]
undefined4 __thiscall FUN_01104740(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*(int *)*param_1 + 0x24))(param_2,param_3);
  return param_2;
}

// 01104760  FUN_01104760  size=20  [run]
void __thiscall FUN_01104760(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = *param_1;
  param_2[1] = param_3;
  return;
}

// 011047B0  FUN_011047b0  size=45  [run]
void __thiscall FUN_011047b0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)*param_1 + 100))(param_1[1]);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return;
}

// 011047E0  FUN_011047e0  size=119  [run]
char * __fastcall FUN_011047e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  switch(*param_1) {
  case 1:
    return "void";
  case 2:
    return "byte";
  case 3:
    return "real";
  case 4:
    return "int";
  case 5:
    return "string";
  case 6:
    return "struct";
  case 7:
    return "ref";
  case 9:
    if (*(int *)param_1[1] == 3) {
      uVar1 = FUN_010e0cc0();
      switch(uVar1) {
      case 4:
        return "vec4";
      case 8:
        return "vec8";
      case 0xc:
        return "vec12";
      case 0x10:
        return "vec16";
      }
    }
  }
  return (char *)0x0;
}

// 011048A0  FUN_011048a0  size=43  [run]
undefined4 FUN_011048a0(void)

{
  undefined4 *in_EAX;
  
  switch(*in_EAX) {
  case 1:
    return 0x20;
  case 2:
    return 0x10;
  case 3:
  case 4:
    return 8;
  default:
    return 1;
  case 6:
    return 0xffffffff;
  }
}

// 01104900  FUN_01104900  size=470  [run]
uint FUN_01104900(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  longlong lVar9;
  int *local_c;
  int local_8;
  
  piVar2 = (int *)(**(code **)(*(int *)*param_1 + 4))();
  iVar4 = *piVar2;
  if (iVar4 == 8) {
    piVar2 = (int *)(**(code **)(*(int *)*param_1 + 100))(param_1[1]);
    if (piVar2 != (int *)0x0) {
      *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
      piVar2[2] = piVar2[2] + 1;
    }
    uVar3 = (**(code **)(*piVar2 + 0x14))();
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar2)(1);
    }
    return uVar3;
  }
  if (iVar4 != 9) {
    switch(iVar4) {
    case 2:
    case 4:
      lVar9 = (**(code **)(*(int *)*param_1 + 0x54))(param_1[1]);
      if (lVar9 != 0) {
        return 1;
      }
      break;
    case 3:
      fVar8 = (float10)(**(code **)(*(int *)*param_1 + 0x3c))(param_1[1]);
      if (fVar8 != (float10)0) {
        return 1;
      }
      break;
    case 5:
      iVar4 = (**(code **)(*(int *)*param_1 + 0x34))(param_1[1]);
      return (uint)(iVar4 != 0);
    case 6:
    case 7:
      puVar6 = (undefined4 *)(**(code **)(*(int *)*param_1 + 0x5c))(param_1[1]);
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
        puVar6[2] = puVar6[2] + 1;
      }
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
        piVar2 = puVar6 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar6)(1);
        }
      }
      return (uint)(puVar6 != (undefined4 *)0x0);
    }
    return 0;
  }
  if ((*(int *)piVar2[1] == 3) &&
     ((((iVar4 = piVar2[2], iVar4 == 4 || (iVar4 == 8)) || (iVar4 == 0xc)) || (iVar4 == 0x10)))) {
    return 1;
  }
  piVar2 = (int *)(**(code **)(*(int *)*param_1 + 100))(param_1[1]);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  iVar4 = (**(code **)(*piVar2 + 0x14))();
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      local_c = piVar2;
      local_8 = iVar7;
      iVar5 = FUN_01104900(&local_c);
      if (iVar5 != 0) {
        *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
        piVar1 = piVar2 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*piVar2)(1);
        }
        return 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar1 = piVar2 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar2)(1);
  }
  return 0;
}

// 01104B00  FUN_01104b00  size=467  [run]
uint FUN_01104b00(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  longlong lVar9;
  int *local_c;
  int local_8;
  
  piVar2 = (int *)FUN_010e5220();
  iVar4 = *piVar2;
  if (iVar4 == 8) {
    piVar2 = (int *)(**(code **)(*(int *)*in_EAX + 0x28))(in_EAX[1]);
    if (piVar2 != (int *)0x0) {
      *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
      piVar2[2] = piVar2[2] + 1;
    }
    uVar3 = (**(code **)(*piVar2 + 0x14))();
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar2)(1);
    }
    return uVar3;
  }
  if (iVar4 != 9) {
    switch(iVar4) {
    case 2:
    case 4:
      lVar9 = (**(code **)(*(int *)*in_EAX + 0x30))(in_EAX[1]);
      if (lVar9 != 0) {
        return 1;
      }
      break;
    case 3:
      fVar8 = (float10)(**(code **)(*(int *)*in_EAX + 0x3c))(in_EAX[1]);
      if (fVar8 != (float10)0) {
        return 1;
      }
      break;
    case 5:
      iVar4 = (**(code **)(*(int *)*in_EAX + 0x2c))(in_EAX[1]);
      return (uint)(iVar4 != 0);
    case 6:
    case 7:
      puVar6 = (undefined4 *)(**(code **)(*(int *)*in_EAX + 0x34))(in_EAX[1]);
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
        puVar6[2] = puVar6[2] + 1;
      }
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
        piVar2 = puVar6 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar6)(1);
        }
      }
      return (uint)(puVar6 != (undefined4 *)0x0);
    }
    return 0;
  }
  if ((*(int *)piVar2[1] == 3) &&
     ((((iVar4 = piVar2[2], iVar4 == 4 || (iVar4 == 8)) || (iVar4 == 0xc)) || (iVar4 == 0x10)))) {
    return 1;
  }
  piVar2 = (int *)(**(code **)(*(int *)*in_EAX + 0x28))(in_EAX[1]);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  iVar4 = (**(code **)(*piVar2 + 0x14))();
  iVar7 = 0;
  piVar1 = piVar2;
  if (0 < iVar4) {
    do {
      local_c = piVar1;
      local_8 = iVar7;
      iVar5 = FUN_01104900(&local_c);
      if (iVar5 != 0) {
        *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
        piVar1 = piVar2 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*piVar2)(1);
        }
        return 1;
      }
      iVar7 = iVar7 + 1;
      piVar1 = local_c;
    } while (iVar7 < iVar4);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar1 = piVar2 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)*piVar2)(1);
  }
  return 0;
}

// 01104CF0  FUN_01104cf0  size=137  [run]
bool FUN_01104cf0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 local_60;
  uint local_58;
  
  FUN_01107cc0(param_3,param_4);
  FUN_01106c50(param_1);
  FUN_011069d0(param_1,param_2);
  (**(code **)(*param_2 + 0x14))();
  pcVar2 = (char *)(**(code **)(*param_2 + 0xc))((int)&param_4 + 3);
  cVar1 = *pcVar2;
  FUN_011077a0();
  if (-1 < (int)local_58) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_60,local_58 & 0x3fffffff);
  }
  return cVar1 == '\0';
}

// 01104D80  FUN_01104d80  size=22  [run]
uint FUN_01104d80(uint *param_1,uint param_2)

{
  return (*param_1 >> 4) * -0x61c8864f & param_2;
}

// 01104DA0  FUN_01104da0  size=14  [run]
void FUN_01104da0(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}

// 01104DB0  FUN_01104db0  size=16  [run]
bool FUN_01104db0(int *param_1)

{
  return *param_1 != -1;
}

// 01104DC0  FUN_01104dc0  size=34  [run]
undefined4 FUN_01104dc0(int *param_1,int *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

// 01104E10  FUN_01104e10  size=8  [run]
undefined4 FUN_01104e10(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01104E20  FUN_01104e20  size=8  [run]
undefined4 FUN_01104e20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01104E50  FUN_01104e50  size=8  [run]
undefined4 FUN_01104e50(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01104E60  FUN_01104e60  size=8  [run]
undefined4 FUN_01104e60(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01104EF0  FUN_01104ef0  size=22  [run]
void __thiscall FUN_01104ef0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = (*(uint *)(param_1 + 4) & 0x80000000) == 0;
  return;
}

// 01104F10  FUN_01104f10  size=18  [run]
bool FUN_01104f10(uint param_1)

{
  return (param_1 - 1 & param_1) == 0;
}

// 01104F60  FUN_01104f60  size=32  [run]
void __thiscall FUN_01104f60(int *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_1 + 4 + param_3 * 0xc);
  *param_2 = *(undefined4 *)(*param_1 + param_3 * 0xc);
  param_2[1] = uVar1;
  return;
}

// 01104F80  FUN_01104f80  size=19  [run]
undefined4 __thiscall FUN_01104f80(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 8 + param_2 * 0xc);
}

// 01104FA0  FUN_01104fa0  size=22  [run]
void __thiscall FUN_01104fa0(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*param_1 + 8 + param_2 * 0xc) = param_3;
  return;
}

// 01104FC0  FUN_01104fc0  size=41  [run]
void __thiscall FUN_01104fc0(int *param_1,int param_2)

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

// 01104FF0  FUN_01104ff0  size=21  [run]
void __thiscall FUN_01104ff0(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 01105010  FUN_01105010  size=161  [run]
void __thiscall
FUN_01105010(int *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_01105af0(param_2,param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar3 = (param_3 >> 4) * -0x61c8864f & param_1[2];
  iVar4 = uVar3 * 0xc;
  iVar2 = 1;
  if (*(int *)(iVar1 + iVar4) != -1) {
    do {
      if ((*(uint *)(iVar1 + iVar4) == param_3) && (*(int *)(iVar1 + 4 + iVar4) == param_4)) {
        iVar2 = 0;
        goto LAB_01105086;
      }
      uVar3 = uVar3 + 1 & param_1[2];
      iVar4 = uVar3 * 0xc;
    } while (*(int *)(iVar4 + iVar1) != -1);
    iVar2 = 1;
  }
LAB_01105086:
  param_1[1] = param_1[1] + iVar2;
  iVar2 = uVar3 * 0xc;
  *(uint *)(iVar1 + iVar2) = param_3;
  *(int *)(iVar1 + 4 + iVar2) = param_4;
  *(undefined4 *)(iVar2 + 8 + *param_1) = param_5;
  return;
}

// 011050C0  FUN_011050c0  size=82  [run]
uint __thiscall FUN_011050c0(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    iVar2 = *param_1;
    uVar4 = (param_2 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_2) && (puVar5[1] == param_3)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return uVar1 + 1;
}

// 01105120  FUN_01105120  size=96  [run]
undefined4 __thiscall FUN_01105120(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    iVar2 = *param_1;
    uVar4 = (param_2 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_2) && (puVar5[1] == param_3)) {
        return *(undefined4 *)(iVar2 + 8 + uVar4 * 0xc);
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return param_4;
}

// 01105180  FUN_01105180  size=57  [run]
undefined4 __thiscall
FUN_01105180(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_011050c0(param_2,param_3);
  if (iVar1 <= param_1[2]) {
    *param_4 = *(undefined4 *)(*param_1 + 8 + iVar1 * 0xc);
    return 0;
  }
  return 1;
}

// 011051C0  FUN_011051c0  size=213  [run]
void __thiscall FUN_011051c0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 0xc) = 0xffffffff;
  uVar6 = param_1[2];
  uVar4 = uVar6 + param_2 & uVar6;
  iVar1 = *(int *)(*param_1 + uVar4 * 0xc);
  while (iVar1 != -1) {
    uVar4 = uVar4 + uVar6 & uVar6;
    iVar1 = *(int *)(*param_1 + uVar4 * 0xc);
  }
  uVar5 = uVar4 + 1 & uVar6;
  uVar4 = param_2 + 1 & uVar6;
  iVar2 = uVar4 * 0xc;
  iVar1 = *(int *)(*param_1 + iVar2);
  while (iVar1 != -1) {
    iVar1 = *param_1;
    uVar6 = (*(uint *)(iVar1 + iVar2) >> 4) * -0x61c8864f & uVar6;
    if ((((uVar4 < uVar5) || (uVar6 <= param_2)) &&
        ((param_2 <= uVar4 || ((uVar6 <= param_2 && (uVar4 < uVar6)))))) &&
       ((uVar6 <= param_2 || (uVar5 <= uVar6)))) {
      iVar3 = param_2 * 0xc;
      *(undefined4 *)(iVar3 + iVar1) = *(undefined4 *)(iVar1 + iVar2);
      *(undefined4 *)(iVar3 + 4 + iVar1) = *(undefined4 *)(iVar1 + 4 + iVar2);
      *(undefined4 *)(iVar3 + 8 + *param_1) = *(undefined4 *)(*param_1 + 8 + iVar2);
      *(undefined4 *)(iVar2 + *param_1) = 0xffffffff;
      param_2 = uVar4;
    }
    uVar6 = param_1[2];
    uVar4 = uVar4 + 1 & uVar6;
    iVar2 = uVar4 * 0xc;
    iVar1 = *(int *)(iVar2 + *param_1);
  }
  return;
}

// 011052B0  FUN_011052b0  size=89  [run]
void __thiscall FUN_011052b0(int *param_1,undefined1 *param_2)

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

// 01105310  FUN_01105310  size=37  [run]
void __fastcall FUN_01105310(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2] + 1;
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      *(undefined4 *)(iVar1 + *param_1) = 0xffffffff;
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_1[1] & 0x80000000;
  return;
}

// 01105340  FUN_01105340  size=70  [run]
void __thiscall FUN_01105340(undefined4 *param_1,int *param_2)

{
  FUN_01105310();
  if ((param_1[1] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 8))(*param_1,(param_1[2] * 3 + 3) * 4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 01105390  FUN_01105390  size=31  [run]
void __thiscall FUN_01105390(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3 | 0x80000000;
  param_1[2] = param_4 + -1;
  return;
}

// 011053B0  FUN_011053b0  size=32  [run]
int FUN_011053b0(int param_1)

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

// 011053D0  FUN_011053d0  size=61  [run]
void __thiscall FUN_011053d0(int *param_1,int param_2,uint param_3)

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

// 01105420  FUN_01105420  size=48  [run]
void __thiscall FUN_01105420(undefined4 *param_1,undefined4 *param_2)

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

// 01105450  FUN_01105450  size=15  [run]
int __thiscall FUN_01105450(int *param_1,int param_2)

{
  return *param_1 + param_2 * 8;
}

// 01105490  FUN_01105490  size=15  [run]
int __thiscall FUN_01105490(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 011054B0  FUN_011054b0  size=34  [run]
void FUN_011054b0(undefined4 *param_1,int param_2)

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

// 011054F0  FUN_011054f0  size=26  [run]
void __thiscall FUN_011054f0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01105510  FUN_01105510  size=11  [run]
int FUN_01105510(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01105520  FUN_01105520  size=38  [run]
void __thiscall FUN_01105520(int *param_1,undefined1 *param_2)

{
  if ((*param_1 == 7) && (*(int *)param_1[1] == 6)) {
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 01105550  FUN_01105550  size=39  [run]
void FUN_01105550(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return;
}

// 01105580  FUN_01105580  size=112  [run]
undefined4 __thiscall FUN_01105580(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_14 [8];
  int local_c [2];
  
  local_c[0] = 0;
  local_c[1] = 0;
  if ((int *)*param_1 == (int *)0x0) {
    piVar3 = local_c;
  }
  else {
    piVar3 = (int *)(**(code **)(*(int *)*param_1 + 4))(local_14);
  }
  iVar1 = piVar3[1];
  iVar2 = *piVar3;
  local_c[0] = 0;
  local_c[1] = 0;
  if ((int *)*param_2 == (int *)0x0) {
    piVar3 = local_c;
  }
  else {
    piVar3 = (int *)(**(code **)(*(int *)*param_2 + 4))(local_14);
  }
  if ((iVar2 == *piVar3) && (iVar1 == piVar3[1])) {
    return 1;
  }
  return 0;
}

// 011055F0  FUN_011055f0  size=126  [run]
undefined4 __thiscall FUN_011055f0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  int local_c [2];
  
  local_c[0] = 0;
  local_c[1] = 0;
  if ((int *)*param_1 == (int *)0x0) {
    piVar3 = local_c;
  }
  else {
    piVar3 = (int *)(**(code **)(*(int *)*param_1 + 4))(local_14);
  }
  iVar1 = piVar3[1];
  iVar2 = *piVar3;
  local_c[0] = 0;
  local_c[1] = 0;
  if ((int *)*param_2 == (int *)0x0) {
    piVar3 = local_c;
  }
  else {
    piVar3 = (int *)(**(code **)(*(int *)*param_2 + 4))(local_1c);
  }
  if ((iVar2 == *piVar3) && (iVar1 == piVar3[1])) {
    return 0;
  }
  return 1;
}

// 01105680  FUN_01105680  size=65  [run]
void FUN_01105680(int *param_1)

{
  undefined4 *puVar1;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  if ((int *)*param_1 == (int *)0x0) {
    puVar1 = &local_c;
  }
  else {
    puVar1 = (undefined4 *)(**(code **)(*(int *)*param_1 + 4))(local_14);
  }
  FUN_01105120(*puVar1,puVar1[1],0xffffffff);
  return;
}

// 011056D0  FUN_011056d0  size=605  [run]
void FUN_011056d0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int *local_14;
  int *local_10;
  undefined4 local_c;
  
  local_c = (**(code **)(*(int *)*param_1 + 0x14))();
  iVar2 = (**(code **)(*(int *)*param_1 + 0x18))(local_c);
  do {
    if (iVar2 == 0) {
      return;
    }
    (**(code **)(*(int *)*param_1 + 0x24))(&local_24,local_c);
    puVar3 = (undefined4 *)FUN_010e5220();
    piVar4 = (int *)FUN_010e0d90();
    if (*piVar4 == 6) {
      switch(*puVar3) {
      case 6:
        local_10 = (int *)(**(code **)(*local_24 + 0x34))(local_20);
        if (local_10 != (int *)0x0) {
          *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + 1;
          local_10[2] = local_10[2] + 1;
        }
        FUN_011056d0(&local_10);
        piVar4 = local_10;
        break;
      case 7:
        local_14 = (int *)(**(code **)(*local_24 + 0x34))(local_20);
        if (local_14 != (int *)0x0) {
          *(short *)((int)local_14 + 6) = *(short *)((int)local_14 + 6) + 1;
          local_14[2] = local_14[2] + 1;
        }
        FUN_01106c50(&local_14);
        piVar4 = local_14;
        break;
      case 8:
      case 9:
        iVar2 = *(int *)puVar3[1];
        if ((iVar2 == 7) && (*(int *)((int *)puVar3[1])[1] == 6)) {
          piVar4 = (int *)(**(code **)(*local_24 + 0x28))(local_20);
          if (piVar4 != (int *)0x0) {
            *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
            piVar4[2] = piVar4[2] + 1;
          }
          iVar2 = (**(code **)(*piVar4 + 0x14))();
          iVar5 = 0;
          if (0 < iVar2) {
            do {
              local_18 = (undefined4 *)(**(code **)(*piVar4 + 0x5c))(iVar5);
              if (local_18 != (undefined4 *)0x0) {
                *(short *)((int)local_18 + 6) = *(short *)((int)local_18 + 6) + 1;
                local_18[2] = local_18[2] + 1;
              }
              FUN_01106c50(&local_18);
              if (local_18 != (undefined4 *)0x0) {
                *(short *)((int)local_18 + 6) = *(short *)((int)local_18 + 6) + -1;
                piVar1 = local_18 + 2;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  (**(code **)*local_18)(1);
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar2);
          }
        }
        else {
          if (iVar2 != 6) goto switchD_0110573d_default;
          piVar4 = (int *)(**(code **)(*local_24 + 0x28))(local_20);
          if (piVar4 != (int *)0x0) {
            *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
            piVar4[2] = piVar4[2] + 1;
          }
          iVar2 = (**(code **)(*piVar4 + 0x14))();
          iVar5 = 0;
          if (0 < iVar2) {
            do {
              local_1c = (undefined4 *)(**(code **)(*piVar4 + 0x5c))(iVar5);
              if (local_1c != (undefined4 *)0x0) {
                *(short *)((int)local_1c + 6) = *(short *)((int)local_1c + 6) + 1;
                local_1c[2] = local_1c[2] + 1;
              }
              FUN_011056d0(&local_1c);
              if (local_1c != (undefined4 *)0x0) {
                *(short *)((int)local_1c + 6) = *(short *)((int)local_1c + 6) + -1;
                piVar1 = local_1c + 2;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  (**(code **)*local_1c)(1);
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < iVar2);
          }
        }
        *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + -1;
        piVar1 = piVar4 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) goto switchD_0110573d_default;
        puVar3 = (undefined4 *)*piVar4;
        goto LAB_011058f9;
      default:
        goto switchD_0110573d_default;
      }
      if (piVar4 != (int *)0x0) {
        *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + -1;
        piVar1 = piVar4 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          puVar3 = (undefined4 *)*piVar4;
LAB_011058f9:
          (*(code *)*puVar3)(1);
        }
      }
    }
switchD_0110573d_default:
    local_c = (**(code **)(*(int *)*param_1 + 0x1c))(local_c);
    iVar2 = (**(code **)(*(int *)*param_1 + 0x18))(local_c);
  } while( true );
}

// 01105940  FUN_01105940  size=31  [run]
void FUN_01105940(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01105960  FUN_01105960  size=39  [run]
void FUN_01105960(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 011059B0  FUN_011059b0  size=29  [run]
void FUN_011059b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01105010(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 011059D0  FUN_011059d0  size=31  [run]
void FUN_011059d0(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 011059F0  FUN_011059f0  size=39  [run]
void FUN_011059f0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01105A20  FUN_01105a20  size=37  [run]
void __thiscall FUN_01105a20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_011050c0(param_3,param_4);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 01105A90  FUN_01105a90  size=28  [run]
undefined4 __thiscall FUN_01105a90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_011053d0(param_2,param_3);
  return param_1;
}

// 01105AB0  FUN_01105ab0  size=51  [run]
undefined4 __thiscall FUN_01105ab0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_011050c0(param_2,param_3);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    FUN_011051c0(iVar1);
    return 0;
  }
  return 1;
}

// 01105AF0  FUN_01105af0  size=206  [run]
undefined4 __thiscall FUN_01105af0(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (param_3 < 9) {
    param_3 = 8;
  }
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  iVar5 = param_1[2] + 1;
  iVar3 = (**(code **)(*param_2 + 4))(param_3 * 0xc);
  if (iVar3 != 0) {
    *param_1 = iVar3;
    if (0 < param_3) {
      iVar4 = 0;
      iVar3 = param_3;
      do {
        *(undefined4 *)(iVar4 + *param_1) = 0xffffffff;
        iVar4 = iVar4 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    param_1[1] = 0;
    param_1[2] = param_3 + -1;
    piVar6 = piVar2;
    param_3 = iVar5;
    if (0 < iVar5) {
      do {
        if (*piVar6 != -1) {
          FUN_01105010(param_2,*piVar6,piVar6[1],piVar6[2]);
        }
        param_3 = param_3 + -1;
        piVar6 = piVar6 + 3;
      } while (param_3 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      (**(code **)(*param_2 + 8))(piVar2,iVar5 * 0xc);
    }
    return 0;
  }
  return 1;
}

// 01105BC0  FUN_01105bc0  size=69  [run]
int __thiscall FUN_01105bc0(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 4;
}

// 01105C10  FUN_01105c10  size=34  [run]
void FUN_01105c10(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01105C40  FUN_01105c40  size=52  [run]
undefined4 __thiscall FUN_01105c40(int param_1,undefined4 param_2,int param_3)

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

// 01105C80  FUN_01105c80  size=48  [run]
int __thiscall FUN_01105c80(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 01105CB0  FUN_01105cb0  size=28  [run]
undefined4 __thiscall FUN_01105cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01105a90(param_2,param_3);
  return param_1;
}

// 01105CD0  FUN_01105cd0  size=64  [run]
int __fastcall FUN_01105cd0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar2 + 1;
  return *param_1 + iVar2 * 4;
}

// 01105D10  FUN_01105d10  size=93  [run]
undefined4 __thiscall
FUN_01105d10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4) * 2) {
    iVar1 = FUN_01105af0(param_2,*(int *)(param_1 + 8) * 2 + 2);
    *param_6 = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_6 = 0;
  }
  uVar2 = FUN_01105010(param_2,param_3,param_4,param_5);
  return uVar2;
}

// 01105D70  FUN_01105d70  size=124  [run]
void __thiscall
FUN_01105d70(int *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_01105af0(param_2,param_1[2] * 2 + 2);
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

// 01105DF0  FUN_01105df0  size=37  [run]
void FUN_01105df0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  FUN_01105af0(param_1,iVar1);
  return;
}

// 01105E20  FUN_01105e20  size=61  [run]
void __thiscall FUN_01105e20(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_3;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 01105E60  FUN_01105e60  size=102  [run]
void __thiscall FUN_01105e60(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x10);
  }
  iVar2 = param_3 - param_1[1];
  if (0 < iVar2) {
    puVar1 = (undefined4 *)(param_1[1] * 0x10 + *param_1 + 8);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000008) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_3;
  return;
}

// 01105EE0  FUN_01105ee0  size=125  [run]
void __fastcall FUN_01105ee0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_1[3] + param_1[1];
  if ((int)(param_1[2] & 0x3fffffffU) < (int)uVar6) {
    uVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if ((int)uVar3 <= (int)uVar6) {
      uVar3 = uVar6;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,uVar3,1);
  }
  iVar1 = param_1[1];
  iVar2 = *param_1;
  iVar4 = uVar6 - iVar1;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(char *)(iVar5 + iVar2 + iVar1) = (char)param_1[4];
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  param_1[1] = uVar6;
  if (uVar6 == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,1);
  }
  *(undefined1 *)(param_1[1] + *param_1) = 0;
  param_1[1] = param_1[1];
  return;
}

// 01105F60  FUN_01105f60  size=65  [run]
void __fastcall FUN_01105f60(int *param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)((param_1[1] - param_1[3]) + *param_1) = 0;
  iVar2 = param_1[1] - param_1[3];
  if ((int)(param_1[2] & 0x3fffffffU) < iVar2) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar1,1);
  }
  param_1[1] = iVar2;
  return;
}

// 01105FB0  FUN_01105fb0  size=365  [run]
int * __thiscall FUN_01105fb0(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_24 [8];
  undefined1 local_1c [12];
  int local_10;
  int local_c [2];
  
  piVar1 = param_3;
  if (*(int *)(param_1 + 0x18) != 0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0xc))(&param_3,param_3);
    local_c[0] = 0;
    local_c[1] = 0;
    if (param_3 == (int *)0x0) {
      piVar4 = local_c;
    }
    else {
      piVar4 = (int *)(**(code **)(*param_3 + 4))(local_1c);
    }
    iVar3 = *piVar4;
    local_10 = piVar4[1];
    piVar4 = (int *)*piVar1;
    local_c[0] = 0;
    local_c[1] = 0;
    if (piVar4 == (int *)0x0) {
      piVar4 = local_c;
    }
    else {
      piVar4 = (int *)(**(code **)(*piVar4 + 4))(local_24);
    }
    if ((iVar3 != *piVar4) || (local_10 != piVar4[1])) {
      piVar1 = (int *)(param_1 + 0x1c);
      if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar1,4);
      }
      puVar2 = (undefined4 *)(*piVar1 + *(int *)(param_1 + 0x20) * 4);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
      }
      piVar1 = (int *)(*piVar1 + *(int *)(param_1 + 0x20) * 4);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      if (param_3 != (int *)0x0) {
        *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
        param_3[2] = param_3[2] + 1;
      }
      puVar2 = (undefined4 *)*piVar1;
      if (puVar2 != (undefined4 *)0x0) {
        *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
        piVar4 = puVar2 + 2;
        *piVar4 = *piVar4 + -1;
        if (*piVar4 == 0) {
          (**(code **)*puVar2)(1);
        }
      }
      *piVar1 = (int)param_3;
      *param_2 = (int)param_3;
      if (param_3 != (int *)0x0) {
        *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + 1;
        param_3[2] = param_3[2] + 1;
        if (param_3 != (int *)0x0) {
          *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
          piVar1 = param_3 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*param_3)(1);
          }
        }
      }
      return param_2;
    }
    if (param_3 != (int *)0x0) {
      *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
      piVar4 = param_3 + 2;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        (**(code **)*param_3)(1);
      }
    }
  }
  iVar3 = *piVar1;
  *param_2 = iVar3;
  if (iVar3 != 0) {
    *(short *)(iVar3 + 6) = *(short *)(iVar3 + 6) + 1;
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  }
  return param_2;
}

// 01106120  FUN_01106120  size=579  [run]
void __thiscall FUN_01106120(int *param_1,undefined4 *param_2,char *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *local_18;
  undefined4 local_14;
  int *local_10;
  char *local_c;
  uint local_8;
  
  uVar1 = param_3;
  local_8 = 0;
  FUN_01105ee0();
  uVar2 = (**(code **)(*(int *)*param_2 + 0x14))();
  iVar3 = (**(code **)(*(int *)*param_2 + 0x18))(uVar2);
  do {
    if (iVar3 == 0) {
      *(undefined1 *)((param_1[1] - param_1[3]) + *param_1) = 0;
      iVar3 = param_1[1] - param_1[3];
      if ((int)(param_1[2] & 0x3fffffffU) < iVar3) {
        iVar6 = (param_1[2] & 0x3fffffffU) * 2;
        if (iVar6 <= iVar3) {
          iVar6 = iVar3;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar6,1);
      }
      param_1[1] = iVar3;
      return;
    }
    (**(code **)(*(int *)*param_2 + 0x24))(&local_18,uVar2);
    piVar4 = (int *)FUN_010e5220();
    iVar3 = FUN_01104b00();
    if (iVar3 != 0) {
      iVar3 = *piVar4;
      if ((iVar3 == 8) ||
         ((iVar3 == 9 &&
          ((*(int *)piVar4[1] != 3 ||
           ((((iVar6 = piVar4[2], iVar6 != 4 && (iVar6 != 8)) && (iVar6 != 0xc)) && (iVar6 != 0x10))
           )))))) {
        param_3 = "tuple";
        if (iVar3 == 9) {
          local_c = (char *)FUN_010e0cc0();
        }
        else {
          local_8 = local_8 | 1;
          param_3 = "array";
          local_10 = (int *)(**(code **)(*local_18 + 0x28))(local_14);
          if (local_10 != (int *)0x0) {
            *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + 1;
            local_10[2] = local_10[2] + 1;
          }
          local_c = (char *)(**(code **)(*local_10 + 0x14))();
        }
        if (((local_8 & 1) != 0) && (local_8 = local_8 & 0xfffffffe, local_10 != (int *)0x0)) {
          *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + -1;
          piVar4 = local_10 + 2;
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            (**(code **)*local_10)(1);
          }
        }
        uVar5 = (**(code **)(*(int *)*param_2 + 0x20))(uVar2);
        FUN_01018f60(uVar1,"\n%s<%s name=\"%s\" size=\"%i\">",*param_1,param_3,uVar5,local_c);
        FUN_011078e0(&local_18,uVar1);
      }
      else {
        local_c = (char *)FUN_011047e0();
        if ((*piVar4 == 5) && (iVar3 = (**(code **)(*local_18 + 0x2c))(local_14), iVar3 == 0)) {
          uVar5 = (**(code **)(*(int *)*param_2 + 0x20))(uVar2);
          FUN_01018f60(uVar1,"\n%s<null name=\"%s\"/>",*param_1,uVar5);
          goto LAB_011062f2;
        }
        uVar5 = (**(code **)(*(int *)*param_2 + 0x20))(uVar2);
        FUN_01018f60(uVar1,"\n%s<%s name=\"%s\">",*param_1,local_c,uVar5);
        FUN_011078e0(&local_18,uVar1);
        param_3 = local_c;
      }
      FUN_01018f60(uVar1,"</%s>",param_3);
    }
LAB_011062f2:
    uVar2 = (**(code **)(*(int *)*param_2 + 0x1c))(uVar2);
    iVar3 = (**(code **)(*(int *)*param_2 + 0x18))(uVar2);
  } while( true );
}

// 01106370  FUN_01106370  size=138  [run]
void __thiscall FUN_01106370(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  if ((int *)*param_2 == (int *)0x0) {
    puVar1 = &local_c;
  }
  else {
    puVar1 = (undefined4 *)(**(code **)(*(int *)*param_2 + 4))(local_14);
  }
  uVar2 = FUN_01105120(*puVar1,puVar1[1],0xffffffff);
  piVar3 = (int *)(**(code **)(*(int *)*param_2 + 8))();
  uVar4 = (**(code **)(*piVar3 + 8))();
  FUN_01018f60(param_3,"\n%s<object id=\"#%04i\" type=\"%s\">",*param_1,uVar2,uVar4);
  FUN_01106120(param_2,param_3);
  FUN_01018f60(param_3,"\n%s</object>",*param_1);
  return;
}

// 01106400  FUN_01106400  size=33  [run]
void FUN_01106400(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01105d10(&PTR_vftable_018e9b94,param_1,param_2,param_3,param_4);
  return;
}

// 01106430  FUN_01106430  size=29  [run]
void FUN_01106430(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01105d70(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 01106450  FUN_01106450  size=21  [run]
void FUN_01106450(undefined4 param_1)

{
  FUN_01105df0(&PTR_vftable_018e9b94,param_1);
  return;
}

// 01106470  FUN_01106470  size=62  [run]
void __thiscall FUN_01106470(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 011064B0  FUN_011064b0  size=103  [run]
void __thiscall FUN_011064b0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,0x10);
  }
  iVar2 = param_2 - param_1[1];
  if (0 < iVar2) {
    puVar1 = (undefined4 *)(param_1[1] * 0x10 + *param_1 + 8);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000008) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 01106530  FUN_01106530  size=75  [run]
int * __thiscall FUN_01106530(int *param_1,int param_2,undefined1 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[3] = param_2;
  *(undefined1 *)(param_1 + 4) = param_3;
  FUN_0100a290(&PTR_vftable_018e9b94,param_1,1);
  *(undefined1 *)(param_1[1] + *param_1) = 0;
  param_1[1] = param_1[1];
  return param_1;
}

// 01106580  FUN_01106580  size=440  [run]
void __thiscall FUN_01106580(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_14 = param_1;
  uVar1 = (**(code **)(*(int *)*param_2 + 8))();
  iVar2 = FUN_01025be0(uVar1,0xffffffff);
  if (iVar2 == -1) {
    iVar2 = (**(code **)(*(int *)*param_2 + 0x10))();
    if (iVar2 != 0) {
      local_c = (**(code **)(*(int *)*param_2 + 0x10))();
      FUN_01106580(&local_c);
    }
    local_c = *(int *)(param_1 + 0x2c);
    uVar1 = (**(code **)(*(int *)*param_2 + 8))();
    FUN_01025470(uVar1,local_c);
    if (*(uint *)(param_1 + 0x2c) == (*(uint *)(param_1 + 0x30) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x28),4);
    }
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c) * 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_2;
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0x80000000;
    iVar2 = (**(code **)(*(int *)*param_2 + 0x18))();
    if ((int)(local_18 & 0x3fffffff) < iVar2) {
      iVar5 = (local_18 & 0x3fffffff) * 2;
      if (iVar5 <= iVar2) {
        iVar5 = iVar2;
      }
      FUN_0100a210(&PTR_vftable_018e9b8c,&local_20,iVar5,0x10);
    }
    iVar5 = iVar2 - local_1c;
    if (0 < iVar5) {
      puVar3 = (undefined4 *)(local_1c * 0x10 + local_20 + 8);
      do {
        if (puVar3 != (undefined4 *)&DAT_00000008) {
          puVar3[-2] = 0;
          puVar3[-1] = 0;
          *puVar3 = 0;
          puVar3[1] = 0;
        }
        puVar3 = puVar3 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_1c = iVar2;
    FUN_010e5310(&local_20);
    local_8 = 0;
    if (0 < local_1c) {
      local_c = 0;
      do {
        piVar4 = (int *)FUN_010e0d90();
        if (*piVar4 == 6) {
          piVar4 = (int *)(**(code **)(*(int *)*param_2 + 4))();
          iVar2 = *piVar4;
          uVar1 = FUN_010e0cd0();
          local_10 = (**(code **)(iVar2 + 0x24))(uVar1);
          FUN_01106580(&local_10);
        }
        local_8 = local_8 + 1;
        local_c = local_c + 0x10;
      } while (local_8 < local_1c);
    }
    local_1c = 0;
    if (-1 < (int)local_18) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_20,local_18 << 4);
    }
  }
  return;
}

// 01106740  FUN_01106740  size=642  [run]
void __thiscall FUN_01106740(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = param_1;
  (**(code **)(*(int *)*param_2 + 0xc))();
  uVar2 = (**(code **)(*(int *)*param_2 + 0xc))();
  uVar3 = (**(code **)(*(int *)*param_2 + 8))();
  FUN_01018f60(param_3,"%s<class name=\"%s\" version=\"%i\"",*param_1,uVar3,uVar2);
  iVar4 = (**(code **)(*(int *)*param_2 + 0x10))();
  if (iVar4 != 0) {
    piVar5 = (int *)(**(code **)(*(int *)*param_2 + 0x10))();
    uVar2 = (**(code **)(*piVar5 + 8))();
    FUN_01018f60(param_3," parent=\"%s\"",uVar2);
  }
  FUN_01018f60(param_3,&DAT_017da730);
  FUN_01105ee0();
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x80000000;
  iVar4 = (**(code **)(*(int *)*param_2 + 0x18))();
  if ((int)(local_18 & 0x3fffffff) < iVar4) {
    iVar7 = (local_18 & 0x3fffffff) * 2;
    if (iVar7 <= iVar4) {
      iVar7 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_20,iVar7,0x10);
  }
  iVar7 = iVar4 - local_1c;
  if (0 < iVar7) {
    puVar6 = (undefined4 *)(local_1c * 0x10 + local_20 + 8);
    do {
      if (puVar6 != (undefined4 *)&DAT_00000008) {
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      puVar6 = puVar6 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_1c = iVar4;
  FUN_010e5310(&local_20);
  local_10 = 0;
  if (0 < local_1c) {
    local_8 = 0;
    do {
      puVar6 = (undefined4 *)(local_8 + local_20);
      bVar1 = false;
      piVar5 = (int *)puVar6[2];
      local_c = 0;
      if (*piVar5 == 8) {
        bVar1 = true;
      }
      else if ((*piVar5 == 9) &&
              ((*(int *)piVar5[1] != 3 ||
               ((((iVar4 = piVar5[2], iVar4 != 4 && (iVar4 != 8)) && (iVar4 != 0xc)) &&
                (iVar4 != 0x10)))))) {
        local_c = FUN_010e0cc0();
      }
      iVar4 = *param_1;
      uVar2 = FUN_011047e0();
      FUN_01018f60(param_3,"%s<member name=\"%s\" type=\"%s\"",iVar4,*puVar6,uVar2);
      if (bVar1) {
        FUN_01018f60(param_3," array=\"true\"");
      }
      if (local_c != 0) {
        FUN_01018f60(param_3," count=\"%i\"",local_c);
      }
      piVar5 = (int *)FUN_010e0d90();
      if (*piVar5 == 6) {
        uVar2 = FUN_010e0cd0();
        FUN_01018f60(param_3," class=\"%s\"",uVar2);
      }
      FUN_01018f60(param_3,&DAT_017da6e4);
      local_8 = local_8 + 0x10;
      local_10 = local_10 + 1;
      param_1 = local_14;
    } while (local_10 < local_1c);
  }
  *(undefined1 *)((param_1[1] - param_1[3]) + *param_1) = 0;
  iVar4 = param_1[1] - param_1[3];
  if ((int)(param_1[2] & 0x3fffffffU) < iVar4) {
    iVar7 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar7 <= iVar4) {
      iVar7 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar7,1);
  }
  param_1[1] = iVar4;
  FUN_01018f60(param_3,"%s</class>\n",*param_1);
  local_1c = 0;
  if (-1 < (int)local_18) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_20,local_18 << 4);
  }
  return;
}

// 011069D0  FUN_011069d0  size=436  [run]
void __thiscall FUN_011069d0(int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_24 [12];
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  hkOstream::hkOstream_4(param_3);
  FUN_01018f60(local_24,"<?xml version=\"1.0\" encoding=\"ascii\"?>");
  FUN_01018f60(local_24,"\n<hktagfile version=\"%d\">\n",1);
  FUN_01105ee0();
  iVar6 = 0;
  if (0 < param_1[0x10]) {
    do {
      FUN_01106740(param_1[0xf] + iVar6 * 4,local_24);
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_1[0x10]);
  }
  piVar1 = (int *)(**(code **)(*(int *)*param_2 + 8))();
  local_8 = (int *)(**(code **)(*piVar1 + 4))();
  param_2 = (undefined4 *)0x1;
  if (1 < param_1[9]) {
    local_10 = 0;
    local_c = 0;
    do {
      (**(code **)(*local_8 + 0x28))(&param_3,param_1[8] + (int)param_2 * 8);
      if (param_3 == (int *)0x0) {
        puVar2 = &local_10;
      }
      else {
        puVar2 = (undefined4 *)(**(code **)(*param_3 + 4))(local_18);
      }
      piVar1 = param_3;
      uVar3 = FUN_01105120(*puVar2,puVar2[1],0xffffffff);
      piVar1 = (int *)(**(code **)(*piVar1 + 8))();
      uVar4 = (**(code **)(*piVar1 + 8))();
      FUN_01018f60(local_24,"\n%s<object id=\"#%04i\" type=\"%s\">",*param_1,uVar3,uVar4);
      FUN_01106120(&param_3,local_24);
      FUN_01018f60(local_24,"\n%s</object>",*param_1);
      if (param_3 != (int *)0x0) {
        *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
        piVar1 = param_3 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*param_3)(1);
        }
      }
      param_2 = (undefined4 *)((int)param_2 + 1);
    } while ((int)param_2 < param_1[9]);
  }
  *(undefined1 *)((*param_1 - param_1[3]) + param_1[1]) = 0;
  iVar6 = param_1[1] - param_1[3];
  if ((int)(param_1[2] & 0x3fffffffU) < iVar6) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar6) {
      iVar5 = iVar6;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar5,1);
  }
  param_1[1] = iVar6;
  FUN_01018f60(local_24,"\n</hktagfile>\n");
  hkBaseObject::hkBaseObject_38();
  return;
}

// 01106B90  FUN_01106b90  size=57  [run]
void __fastcall FUN_01106b90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01106BD0  FUN_01106bd0  size=51  [run]
undefined4 * __thiscall FUN_01106bd0(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  if (param_2 != 0) {
    FUN_01105df0(&PTR_vftable_018e9b94,param_2);
  }
  return param_1;
}

// 01106C10  FUN_01106c10  size=63  [run]
void __thiscall FUN_01106c10(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01106C50  FUN_01106c50  size=466  [run]
void __thiscall FUN_01106c50(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  int local_1c [5];
  int *local_8;
  
  if ((int *)*param_2 != (int *)0x0) {
    local_1c[0] = 0;
    local_1c[1] = 0;
    puVar1 = (undefined4 *)(**(code **)(*(int *)*param_2 + 4))(local_1c + 2);
    iVar2 = FUN_01105120(*puVar1,puVar1[1],0xffffffff);
    if (iVar2 == -1) {
      FUN_01105fb0(&local_8,param_2);
      if (*param_2 == 0) {
        if (local_8 != (int *)0x0) {
          *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
          piVar3 = local_8 + 2;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            (**(code **)*local_8)(1);
            return;
          }
        }
      }
      else {
        local_1c[4] = (**(code **)(*local_8 + 8))();
        FUN_01106580(local_1c + 4);
        local_1c[4] = *(undefined4 *)(param_1 + 0x10);
        local_1c[0] = 0;
        local_1c[1] = 0;
        puVar1 = (undefined4 *)(**(code **)(*local_8 + 4))(local_24);
        local_1c[2] = *puVar1;
        local_1c[3] = puVar1[1];
        if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
          FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0xc),8);
        }
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 8);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = local_1c[2];
          puVar1[1] = local_1c[3];
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        local_1c[2] = 0;
        local_1c[3] = 0;
        if ((int *)*param_2 == (int *)0x0) {
          piVar3 = local_1c + 2;
        }
        else {
          piVar3 = (int *)(**(code **)(*(int *)*param_2 + 4))(local_24);
        }
        FUN_01105010(&PTR_vftable_018e9b94,*piVar3,piVar3[1],local_1c[4]);
        local_1c[0] = 0;
        local_1c[1] = 0;
        if ((int *)*param_2 == (int *)0x0) {
          piVar3 = local_1c;
        }
        else {
          piVar3 = (int *)(**(code **)(*(int *)*param_2 + 4))(local_24);
        }
        local_1c[2] = *piVar3;
        local_1c[3] = piVar3[1];
        local_1c[0] = 0;
        local_1c[1] = 0;
        piVar3 = (int *)(**(code **)(*local_8 + 4))(local_2c);
        if ((*piVar3 != local_1c[2]) || (piVar3[1] != local_1c[3])) {
          local_1c[0] = 0;
          local_1c[1] = 0;
          puVar1 = (undefined4 *)(**(code **)(*local_8 + 4))(local_2c);
          FUN_01105010(&PTR_vftable_018e9b94,*puVar1,puVar1[1],local_1c[4]);
        }
        FUN_011056d0(&local_8);
        *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
        piVar3 = local_8 + 2;
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          (**(code **)*local_8)(1);
        }
      }
    }
  }
  return;
}

// 01106E30  FUN_01106e30  size=12  [run]
void FUN_01106e30(void)

{
  FUN_01106c50();
  return;
}

// 01106E40  FUN_01106e40  size=60  [run]
void __fastcall FUN_01106e40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01106E80  FUN_01106e80  size=358  [run]
void __thiscall FUN_01106e80(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *local_11c;
  undefined4 local_118;
  uint local_114;
  undefined1 local_110 [128];
  undefined1 *local_90;
  int local_8c;
  uint local_88;
  undefined1 local_84 [128];
  
  local_90 = local_84;
  local_88 = 0x80000080;
  local_8c = 1;
  local_84[0] = 0;
  if (*(char *)(param_1 + 0x58) == '\0') {
    FUN_0111ab10(param_3,&local_90);
  }
  else {
    FUN_010262e0(&local_90,"x%08x",param_3);
    if (*(char *)(param_1 + 0x59) != '\0') {
      local_11c = local_110;
      local_114 = 0x80000080;
      local_118 = 1;
      local_110[0] = 0;
      FUN_0111ab10(param_3,&local_11c);
      FUN_01026640(" <!-- ",0xffffffff);
      FUN_01026640(local_11c,0xffffffff);
      FUN_01026640(&DAT_017da7b8,0xffffffff);
      local_118 = 0;
      if (-1 < (int)local_114) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_11c,local_114 & 0x3fffffff);
      }
    }
  }
  FUN_01018fc0(local_90,local_8c + -1);
  local_8c = 0;
  if (-1 < (int)local_88) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_90,local_88 & 0x3fffffff);
  }
  return;
}

// 01106FF0  FUN_01106ff0  size=420  [run]
void __thiscall FUN_01106ff0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 *local_124;
  undefined4 local_120;
  uint local_11c;
  undefined1 local_118 [128];
  undefined1 *local_98;
  int local_94;
  uint local_90;
  undefined1 local_8c [128];
  int local_c;
  undefined4 local_8;
  
  iVar1 = 0;
  local_c = param_1;
  if (0 < param_4) {
    do {
      if (iVar1 != 0) {
        FUN_01018f60(param_2,&DAT_01663284);
      }
      local_8 = *(undefined4 *)(param_3 + iVar1 * 4);
      local_98 = local_8c;
      local_90 = 0x80000080;
      local_94 = 1;
      local_8c[0] = 0;
      if (*(char *)(local_c + 0x58) == '\0') {
        FUN_0111ab10(local_8,&local_98);
      }
      else {
        FUN_010262e0(&local_98,"x%08x",local_8);
        if (*(char *)(local_c + 0x59) != '\0') {
          local_124 = local_118;
          local_11c = 0x80000080;
          local_120 = 1;
          local_118[0] = 0;
          FUN_0111ab10(local_8,&local_124);
          FUN_01026640(" <!-- ",0xffffffff);
          FUN_01026640(local_124,0xffffffff);
          FUN_01026640(&DAT_017da7b8,0xffffffff);
          local_120 = 0;
          if (-1 < (int)local_11c) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_124,local_11c & 0x3fffffff);
          }
        }
      }
      FUN_01018fc0(local_98,local_94 + -1);
      local_94 = 0;
      if (-1 < (int)local_90) {
        (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_98,local_90 & 0x3fffffff);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_4);
  }
  return;
}

// 011071A0  FUN_011071a0  size=60  [run]
void __fastcall FUN_011071a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011071E0  FUN_011071e0  size=967  [run]
void __thiscall FUN_011071e0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  undefined8 uVar9;
  undefined4 local_98;
  int local_94;
  undefined4 *local_c;
  undefined4 *local_8;
  
  puVar6 = param_2;
  piVar2 = (int *)(**(code **)(*(int *)*param_2 + 4))();
  switch(*piVar2) {
  case 2:
  case 4:
    uVar9 = (**(code **)(*(int *)*puVar6 + 0x54))(puVar6[1]);
    FUN_01018f60(param_3,&DAT_017da80c,uVar9);
    return;
  case 3:
    fVar8 = (float10)(**(code **)(*(int *)*puVar6 + 0x3c))(puVar6[1]);
    FUN_01106e80(param_3,(float)fVar8);
    return;
  case 5:
    iVar5 = (**(code **)(*(int *)*puVar6 + 0x34))(puVar6[1]);
    if (iVar5 == 0) {
      FUN_01018f60(param_3,"<null/>");
      return;
    }
    FUN_01026840(iVar5);
    FUN_01026c40(&DAT_017012a0,"&amp;",1);
    FUN_01026c40(&DAT_016cc4e0,&DAT_017da7fc,1);
    FUN_01026c40(&DAT_016cc48c,&DAT_017da7f4,1);
    FUN_01018fc0(local_98,local_94 + -1);
    FUN_01015a80();
    return;
  case 6:
    puVar6 = (undefined4 *)(**(code **)(*(int *)*puVar6 + 0x5c))(puVar6[1]);
    uVar3 = param_3;
    if (puVar6 != (undefined4 *)0x0) {
      *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
      puVar6[2] = puVar6[2] + 1;
    }
    param_2 = puVar6;
    FUN_01106120(&param_2,param_3);
    if (puVar6 != (undefined4 *)0x0) {
      *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
      piVar2 = puVar6 + 2;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar6)(1);
      }
    }
    FUN_01018f60(uVar3,&DAT_017d9f94,*param_1);
    return;
  case 7:
    puVar6 = (undefined4 *)(**(code **)(*(int *)*puVar6 + 0x5c))(puVar6[1]);
    if (puVar6 != (undefined4 *)0x0) {
      *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
      puVar6[2] = puVar6[2] + 1;
    }
    param_2 = puVar6;
    uVar3 = FUN_01105680(&param_2);
    FUN_01018f60(param_3,"#%04i",uVar3);
    if (puVar6 != (undefined4 *)0x0) {
      *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
      piVar2 = puVar6 + 2;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar6)(1);
        return;
      }
    }
    break;
  case 9:
    if (((*piVar2 == 9) && (*(int *)piVar2[1] == 3)) &&
       ((iVar5 = piVar2[2], iVar5 == 4 || (((iVar5 == 8 || (iVar5 == 0xc)) || (iVar5 == 0x10)))))) {
      uVar4 = FUN_010e0cc0();
      uVar3 = puVar6[1];
      uVar4 = (**(code **)(*(int *)*puVar6 + 0x2c))(uVar3,uVar4);
      FUN_01106ff0(param_3,uVar4,uVar3);
      return;
    }
  case 8:
    if (*(int *)piVar2[1] == 6) {
      piVar2 = (int *)(**(code **)(*(int *)*puVar6 + 100))(puVar6[1]);
      if (piVar2 != (int *)0x0) {
        *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
        piVar2[2] = piVar2[2] + 1;
      }
      FUN_01105ee0();
      param_2 = (undefined4 *)0x0;
      iVar5 = (**(code **)(*piVar2 + 0x14))();
      if (0 < iVar5) {
        do {
          FUN_01018f60(param_3,"\n%s<struct>",*param_1);
          puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(param_2);
          if (puVar6 != (undefined4 *)0x0) {
            *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
            puVar6[2] = puVar6[2] + 1;
          }
          local_c = puVar6;
          FUN_01106120(&local_c,param_3);
          if (puVar6 != (undefined4 *)0x0) {
            *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
            piVar1 = puVar6 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar6)(1);
            }
          }
          FUN_01018f60(param_3,"\n%s</struct>",*param_1);
          iVar7 = (int)param_2 + 1;
          param_2 = (undefined4 *)iVar7;
          iVar5 = (**(code **)(*piVar2 + 0x14))();
        } while (iVar7 < iVar5);
      }
      FUN_01105f60();
      FUN_01018f60(param_3,&DAT_017d9f94,*param_1);
      *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
      piVar1 = piVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*piVar2)(1);
        return;
      }
    }
    else {
      FUN_01105ee0();
      local_8 = (undefined4 *)(**(code **)(*(int *)*puVar6 + 100))(puVar6[1]);
      uVar3 = param_3;
      if (local_8 != (undefined4 *)0x0) {
        *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + 1;
        local_8[2] = local_8[2] + 1;
      }
      FUN_01107670(&local_8,param_3);
      if (local_8 != (undefined4 *)0x0) {
        *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
        piVar2 = local_8 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*local_8)(1);
        }
      }
      FUN_01105f60();
      FUN_01018f60(uVar3,&DAT_017d9f94,*param_1);
    }
  }
  return;
}

// 011075D0  FUN_011075d0  size=155  [run]
undefined4 * __thiscall FUN_011075d0(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x80000000;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  param_2 = param_2 & 0xffffff00;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x80000000;
  FUN_01025830(param_2);
  if (param_1[4] == (param_1[5] & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 3,8);
  }
  puVar1 = (undefined4 *)(param_1[3] + param_1[4] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  param_1[4] = param_1[4] + 1;
  FUN_01105010(&PTR_vftable_018e9b94,0,0,0);
  return param_1;
}

// 01107670  FUN_01107670  size=291  [run]
void FUN_01107670(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  puVar1 = param_1;
  piVar2 = (int *)(**(code **)(*(int *)*param_1 + 4))();
  local_14 = piVar2;
  local_10 = FUN_011048a0();
  local_8 = 1;
  iVar3 = (**(code **)(*(int *)*param_1 + 0x14))();
  local_18 = iVar3;
  param_1 = (undefined4 *)FUN_011047e0();
  iVar4 = *piVar2;
  if (((iVar4 == 4) || (iVar4 == 3)) || (iVar4 == 2)) {
    param_1 = (undefined4 *)0x0;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      local_8 = local_8 + -1;
      if (local_8 == 0) {
        FUN_01018f60(param_2,&DAT_017d9f94,*local_c);
        local_8 = local_10;
      }
      if (param_1 == (undefined4 *)0x0) {
        local_28 = *puVar1;
        local_24 = iVar4;
        FUN_011071e0(&local_28,param_2);
        pcVar5 = " ";
LAB_01107777:
        FUN_01018f60(param_2,pcVar5);
      }
      else {
        if ((*local_14 == 5) && (iVar3 = (**(code **)(*(int *)*puVar1 + 0x34))(iVar4), iVar3 == 0))
        {
          pcVar5 = "<null/>";
          goto LAB_01107777;
        }
        FUN_01018f60(param_2,&DAT_017da814,param_1);
        local_20 = *puVar1;
        local_1c = iVar4;
        FUN_011071e0(&local_20,param_2);
        FUN_01018f60(param_2,"</%s>",param_1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_18);
  }
  return;
}

// 011077A0  FUN_011077a0  size=235  [run]
void __fastcall FUN_011077a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  FUN_01025870();
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (-1 < *(int *)(param_1 + 0x30)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x28),*(int *)(param_1 + 0x30) * 4);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x80000000;
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x1c);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    puVar4 = *(undefined4 **)(iVar3 + iVar2 * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1;
      piVar1 = puVar4 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(uint *)(param_1 + 0x24) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x1c),*(uint *)(param_1 + 0x24) * 4);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(uint *)(param_1 + 0x14) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0xc),*(uint *)(param_1 + 0x14) * 8);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  FUN_01105340(&PTR_vftable_018e9b94);
  return;
}

// 01107890  FUN_01107890  size=65  [run]
void __fastcall FUN_01107890(undefined4 *param_1)

{
  FUN_011077a0();
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011078E0  FUN_011078e0  size=952  [run]
void __thiscall FUN_011078e0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  undefined8 uVar9;
  undefined4 local_94;
  int local_90;
  undefined4 *local_8;
  
  puVar6 = param_2;
  piVar2 = (int *)FUN_010e5220();
  switch(*piVar2) {
  case 2:
  case 4:
    uVar9 = (**(code **)(*(int *)*puVar6 + 0x30))(puVar6[1]);
    FUN_01018f60(param_3,&DAT_017da80c,uVar9);
    return;
  case 3:
    fVar8 = (float10)(**(code **)(*(int *)*puVar6 + 0x3c))(puVar6[1]);
    FUN_01106e80(param_3,(float)fVar8);
    return;
  case 5:
    iVar5 = (**(code **)(*(int *)*puVar6 + 0x2c))(puVar6[1]);
    if (iVar5 == 0) {
      FUN_01018f60(param_3,"<null/>");
      return;
    }
    FUN_01026840(iVar5);
    FUN_01026c40(&DAT_017012a0,"&amp;",1);
    FUN_01026c40(&DAT_016cc4e0,&DAT_017da7fc,1);
    FUN_01026c40(&DAT_016cc48c,&DAT_017da7f4,1);
    FUN_01018fc0(local_94,local_90 + -1);
    FUN_01015a80();
    return;
  case 6:
    puVar6 = (undefined4 *)(**(code **)(*(int *)*puVar6 + 0x34))(puVar6[1]);
    uVar3 = param_3;
    if (puVar6 != (undefined4 *)0x0) {
      *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
      puVar6[2] = puVar6[2] + 1;
    }
    param_2 = puVar6;
    FUN_01106120(&param_2,param_3);
    if (puVar6 != (undefined4 *)0x0) {
      *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
      piVar2 = puVar6 + 2;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar6)(1);
      }
    }
    goto LAB_01107c7e;
  case 7:
    puVar6 = (undefined4 *)(**(code **)(*(int *)*puVar6 + 0x34))(puVar6[1]);
    if (puVar6 != (undefined4 *)0x0) {
      *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
      puVar6[2] = puVar6[2] + 1;
    }
    param_2 = puVar6;
    uVar3 = FUN_01105680(&param_2);
    FUN_01018f60(param_3,"#%04i",uVar3);
    if (puVar6 != (undefined4 *)0x0) {
      *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
      piVar2 = puVar6 + 2;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        (**(code **)*puVar6)(1);
        return;
      }
    }
    break;
  case 9:
    if (((*piVar2 == 9) && (*(int *)piVar2[1] == 3)) &&
       ((iVar5 = piVar2[2], iVar5 == 4 || (((iVar5 == 8 || (iVar5 == 0xc)) || (iVar5 == 0x10)))))) {
      uVar4 = FUN_010e0cc0();
      uVar3 = puVar6[1];
      uVar4 = (**(code **)(*(int *)*puVar6 + 0x38))(uVar3,uVar4,uVar4);
      FUN_01106ff0(param_3,uVar4,uVar3);
      return;
    }
  case 8:
    if (*(int *)piVar2[1] == 6) {
      piVar2 = (int *)(**(code **)(*(int *)*puVar6 + 0x28))(puVar6[1]);
      if (piVar2 != (int *)0x0) {
        *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
        piVar2[2] = piVar2[2] + 1;
      }
      FUN_01105ee0();
      param_2 = (undefined4 *)0x0;
      iVar5 = (**(code **)(*piVar2 + 0x14))();
      if (0 < iVar5) {
        do {
          FUN_01018f60(param_3,"\n%s<struct>",*param_1);
          puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x5c))(param_2);
          if (puVar6 != (undefined4 *)0x0) {
            *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
            puVar6[2] = puVar6[2] + 1;
          }
          local_8 = puVar6;
          FUN_01106120(&local_8,param_3);
          if (puVar6 != (undefined4 *)0x0) {
            *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
            piVar1 = puVar6 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*puVar6)(1);
            }
          }
          FUN_01018f60(param_3,"\n%s</struct>",*param_1);
          iVar7 = (int)param_2 + 1;
          param_2 = (undefined4 *)iVar7;
          iVar5 = (**(code **)(*piVar2 + 0x14))();
        } while (iVar7 < iVar5);
      }
      FUN_01105f60();
      FUN_01018f60(param_3,&DAT_017d9f94,*param_1);
      *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
      piVar1 = piVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*piVar2)(1);
        return;
      }
    }
    else {
      FUN_01105ee0();
      puVar6 = (undefined4 *)(**(code **)(*(int *)*puVar6 + 0x28))(puVar6[1]);
      uVar3 = param_3;
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + 1;
        puVar6[2] = puVar6[2] + 1;
      }
      param_2 = puVar6;
      FUN_01107670(&param_2,param_3);
      if (puVar6 != (undefined4 *)0x0) {
        *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
        piVar2 = puVar6 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*puVar6)(1);
        }
      }
      FUN_01105f60();
LAB_01107c7e:
      FUN_01018f60(uVar3,&DAT_017d9f94,*param_1);
    }
  }
  return;
}

// 01107CC0  FUN_01107cc0  size=100  [run]
int * __thiscall FUN_01107cc0(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[3] = 2;
  *(undefined1 *)(param_1 + 4) = 0x20;
  FUN_0100a290(&PTR_vftable_018e9b94,param_1,1);
  *(undefined1 *)(param_1[1] + *param_1) = 0;
  param_1[1] = param_1[1];
  FUN_011075d0(param_2);
  *(undefined1 *)(param_1 + 0x16) = param_3[1];
  *(undefined1 *)((int)param_1 + 0x59) = *param_3;
  return param_1;
}

// 01107D40  FUN_01107d40  size=13  [run]
void __fastcall FUN_01107d40(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01107d4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x30))();
  return;
}

// 01107D60  FUN_01107d60  size=22  [run]
uint FUN_01107d60(uint *param_1,uint param_2)

{
  return (*param_1 >> 4) * -0x61c8864f & param_2;
}

// 01107D80  FUN_01107d80  size=14  [run]
void FUN_01107d80(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}

// 01107D90  FUN_01107d90  size=16  [run]
bool FUN_01107d90(int *param_1)

{
  return *param_1 != -1;
}

// 01107DA0  FUN_01107da0  size=34  [run]
undefined4 FUN_01107da0(int *param_1,int *param_2)

{
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

// 01107DD0  FUN_01107dd0  size=150  [run]
void FUN_01107dd0(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 == 0) && (param_2 == -0x80000000)) {
    FUN_01016df0(0x81);
    param_1 = 0;
    uVar3 = 0x2000000;
  }
  else if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    uVar3 = (param_2 + (param_1 != 0)) * -2 | -param_1 >> 0x1f;
    param_1 = param_1 * -2 | 1;
  }
  else {
    uVar3 = param_2 << 1 | param_1 >> 0x1f;
    param_1 = param_1 * 2;
  }
  bVar1 = (byte)param_1;
  uVar2 = param_1 >> 7 | uVar3 << 0x19;
  uVar3 = uVar3 >> 7;
  param_2 = CONCAT31(param_2._1_3_,bVar1) & 0xffffff7f;
  if (uVar2 != 0 || uVar3 != 0) {
    do {
      FUN_01016df0(bVar1 & 0x7f | 0x80);
      bVar1 = (byte)uVar2;
      uVar2 = uVar2 >> 7 | uVar3 << 0x19;
      uVar3 = uVar3 >> 7;
    } while (uVar2 != 0 || uVar3 != 0);
    param_2 = CONCAT31(param_2._1_3_,bVar1) & 0xffffff7f;
  }
  FUN_01016df0(param_2);
  return;
}

// 01107E70  FUN_01107e70  size=23  [run]
void FUN_01107e70(undefined4 param_1)

{
  FUN_01017180(param_1);
  return;
}

// 01107E90  FUN_01107e90  size=9  [run]
void FUN_01107e90(void)

{
  FUN_010172c0();
  return;
}

// 01107EA0  FUN_01107ea0  size=26  [run]
void __thiscall FUN_01107ea0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_3;
  return;
}

// 01107EC0  FUN_01107ec0  size=25  [run]
bool FUN_01107ec0(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_010e0d90();
  return *piVar1 == 6;
}

// 01107F10  FUN_01107f10  size=8  [run]
undefined4 FUN_01107f10(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01107F20  FUN_01107f20  size=8  [run]
undefined4 FUN_01107f20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01107F50  FUN_01107f50  size=8  [run]
undefined4 FUN_01107f50(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01107F60  FUN_01107f60  size=8  [run]
undefined4 FUN_01107f60(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01107FF0  FUN_01107ff0  size=22  [run]
void __thiscall FUN_01107ff0(int param_1,undefined4 param_2)

{
  *(bool *)param_2 = (*(uint *)(param_1 + 4) & 0x80000000) == 0;
  return;
}

// 01108010  FUN_01108010  size=18  [run]
bool FUN_01108010(uint param_1)

{
  return (param_1 - 1 & param_1) == 0;
}

// 01108030  FUN_01108030  size=32  [run]
void __thiscall FUN_01108030(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 011080D0  FUN_011080d0  size=32  [run]
void __thiscall FUN_011080d0(int *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*param_1 + 4 + param_3 * 0xc);
  *param_2 = *(undefined4 *)(*param_1 + param_3 * 0xc);
  param_2[1] = uVar1;
  return;
}

// 011080F0  FUN_011080f0  size=19  [run]
undefined4 __thiscall FUN_011080f0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 8 + param_2 * 0xc);
}

// 01108110  FUN_01108110  size=22  [run]
void __thiscall FUN_01108110(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*param_1 + 8 + param_2 * 0xc) = param_3;
  return;
}

// 01108130  FUN_01108130  size=41  [run]
void __thiscall FUN_01108130(int *param_1,int param_2)

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

// 01108160  FUN_01108160  size=21  [run]
void __thiscall FUN_01108160(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 01108180  FUN_01108180  size=161  [run]
void __thiscall
FUN_01108180(int *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_01108cf0(param_2,param_1[2] * 2 + 2);
  }
  iVar1 = *param_1;
  uVar3 = (param_3 >> 4) * -0x61c8864f & param_1[2];
  iVar4 = uVar3 * 0xc;
  iVar2 = 1;
  if (*(int *)(iVar1 + iVar4) != -1) {
    do {
      if ((*(uint *)(iVar1 + iVar4) == param_3) && (*(int *)(iVar1 + 4 + iVar4) == param_4)) {
        iVar2 = 0;
        goto LAB_011081f6;
      }
      uVar3 = uVar3 + 1 & param_1[2];
      iVar4 = uVar3 * 0xc;
    } while (*(int *)(iVar4 + iVar1) != -1);
    iVar2 = 1;
  }
LAB_011081f6:
  param_1[1] = param_1[1] + iVar2;
  iVar2 = uVar3 * 0xc;
  *(uint *)(iVar1 + iVar2) = param_3;
  *(int *)(iVar1 + 4 + iVar2) = param_4;
  *(undefined4 *)(iVar2 + 8 + *param_1) = param_5;
  return;
}

// 01108230  FUN_01108230  size=82  [run]
uint __thiscall FUN_01108230(int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    iVar2 = *param_1;
    uVar4 = (param_2 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_2) && (puVar5[1] == param_3)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return uVar1 + 1;
}

// 01108290  FUN_01108290  size=96  [run]
undefined4 __thiscall FUN_01108290(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar1 = param_1[2];
  if (0 < (int)uVar1) {
    iVar2 = *param_1;
    uVar4 = (param_2 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_2) && (puVar5[1] == param_3)) {
        return *(undefined4 *)(iVar2 + 8 + uVar4 * 0xc);
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return param_4;
}

// 011082F0  FUN_011082f0  size=57  [run]
undefined4 __thiscall
FUN_011082f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_01108230(param_2,param_3);
  if (iVar1 <= param_1[2]) {
    *param_4 = *(undefined4 *)(*param_1 + 8 + iVar1 * 0xc);
    return 0;
  }
  return 1;
}

// 01108330  FUN_01108330  size=213  [run]
void __thiscall FUN_01108330(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  param_1[1] = param_1[1] + -1;
  *(undefined4 *)(*param_1 + param_2 * 0xc) = 0xffffffff;
  uVar6 = param_1[2];
  uVar4 = uVar6 + param_2 & uVar6;
  iVar1 = *(int *)(*param_1 + uVar4 * 0xc);
  while (iVar1 != -1) {
    uVar4 = uVar4 + uVar6 & uVar6;
    iVar1 = *(int *)(*param_1 + uVar4 * 0xc);
  }
  uVar5 = uVar4 + 1 & uVar6;
  uVar4 = param_2 + 1 & uVar6;
  iVar2 = uVar4 * 0xc;
  iVar1 = *(int *)(*param_1 + iVar2);
  while (iVar1 != -1) {
    iVar1 = *param_1;
    uVar6 = (*(uint *)(iVar1 + iVar2) >> 4) * -0x61c8864f & uVar6;
    if ((((uVar4 < uVar5) || (uVar6 <= param_2)) &&
        ((param_2 <= uVar4 || ((uVar6 <= param_2 && (uVar4 < uVar6)))))) &&
       ((uVar6 <= param_2 || (uVar5 <= uVar6)))) {
      iVar3 = param_2 * 0xc;
      *(undefined4 *)(iVar3 + iVar1) = *(undefined4 *)(iVar1 + iVar2);
      *(undefined4 *)(iVar3 + 4 + iVar1) = *(undefined4 *)(iVar1 + 4 + iVar2);
      *(undefined4 *)(iVar3 + 8 + *param_1) = *(undefined4 *)(*param_1 + 8 + iVar2);
      *(undefined4 *)(iVar2 + *param_1) = 0xffffffff;
      param_2 = uVar4;
    }
    uVar6 = param_1[2];
    uVar4 = uVar4 + 1 & uVar6;
    iVar2 = uVar4 * 0xc;
    iVar1 = *(int *)(iVar2 + *param_1);
  }
  return;
}

// 01108420  FUN_01108420  size=89  [run]
void __thiscall FUN_01108420(int *param_1,undefined1 *param_2)

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

// 01108480  FUN_01108480  size=37  [run]
void __fastcall FUN_01108480(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2] + 1;
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      *(undefined4 *)(iVar1 + *param_1) = 0xffffffff;
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_1[1] & 0x80000000;
  return;
}

// 011084B0  FUN_011084b0  size=70  [run]
void __thiscall FUN_011084b0(undefined4 *param_1,int *param_2)

{
  FUN_01108480();
  if ((param_1[1] & 0x80000000) == 0) {
    (**(code **)(*param_2 + 8))(*param_1,(param_1[2] * 3 + 3) * 4);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  return;
}

// 01108500  FUN_01108500  size=31  [run]
void __thiscall FUN_01108500(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3 | 0x80000000;
  param_1[2] = param_4 + -1;
  return;
}

// 01108520  FUN_01108520  size=32  [run]
int FUN_01108520(int param_1)

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

// 01108540  FUN_01108540  size=61  [run]
void __thiscall FUN_01108540(int *param_1,int param_2,uint param_3)

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

// 01108590  FUN_01108590  size=48  [run]
void __thiscall FUN_01108590(undefined4 *param_1,undefined4 *param_2)

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

// 011085F0  FUN_011085f0  size=15  [run]
int __thiscall FUN_011085f0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 01108640  FUN_01108640  size=15  [run]
int __thiscall FUN_01108640(int *param_1,int param_2)

{
  return param_2 * 0x10 + *param_1;
}

// 01108660  FUN_01108660  size=278  [run]
bool FUN_01108660(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  longlong lVar6;
  
  puVar2 = (undefined4 *)(**(code **)(*(int *)*param_1 + 4))();
  switch(*puVar2) {
  case 2:
  case 4:
    lVar6 = (**(code **)(*(int *)*param_1 + 0x54))(param_1[1]);
    if (lVar6 != 0) {
      return true;
    }
    break;
  case 3:
    fVar5 = (float10)(**(code **)(*(int *)*param_1 + 0x3c))(param_1[1]);
    if (fVar5 != (float10)0) {
      return true;
    }
    break;
  case 5:
    iVar4 = (**(code **)(*(int *)*param_1 + 0x34))(param_1[1]);
    return iVar4 != 0;
  case 6:
  case 7:
    puVar2 = (undefined4 *)(**(code **)(*(int *)*param_1 + 0x5c))(param_1[1]);
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
      piVar3 = puVar2 + 2;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    return puVar2 != (undefined4 *)0x0;
  case 8:
    piVar3 = (int *)(**(code **)(*(int *)*param_1 + 100))(param_1[1]);
    if (piVar3 != (int *)0x0) {
      *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
      piVar3[2] = piVar3[2] + 1;
    }
    iVar4 = (**(code **)(*piVar3 + 0x14))();
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
    piVar1 = piVar3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar3)(1);
    }
    return iVar4 != 0;
  case 9:
    return true;
  }
  return false;
}

// 011087E0  FUN_011087e0  size=87  [run]
bool FUN_011087e0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  
  FUN_0110b4c0(param_2,param_3,param_4);
  FUN_0110b790(param_1);
  (**(code **)(*param_2 + 0x14))();
  pcVar2 = (char *)(**(code **)(*param_2 + 0xc))((int)&param_4 + 3);
  cVar1 = *pcVar2;
  FUN_0110b630();
  return cVar1 == '\0';
}

// 01108890  FUN_01108890  size=29  [run]
void __thiscall FUN_01108890(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 011088B0  FUN_011088b0  size=26  [run]
void __thiscall FUN_011088b0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 011088D0  FUN_011088d0  size=25  [run]
void __thiscall FUN_011088d0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 4);
  return;
}

// 01108910  FUN_01108910  size=31  [run]
void FUN_01108910(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01108930  FUN_01108930  size=45  [run]
undefined4 FUN_01108930(int *param_1)

{
  undefined4 uVar1;
  
  if ((int *)*param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*(int *)*param_1 + 8))();
  uVar1 = FUN_01025be0(uVar1,0xffffffff);
  return uVar1;
}

// 01108980  FUN_01108980  size=12  [run]
int __thiscall FUN_01108980(int *param_1,int param_2)

{
  return *param_1 + param_2;
}

// 01108990  FUN_01108990  size=83  [run]
void __thiscall FUN_01108990(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  if ((int *)*param_2 == (int *)0x0) {
    puVar1 = &local_c;
  }
  else {
    puVar1 = (undefined4 *)(**(code **)(*(int *)*param_2 + 4))(local_14);
  }
  iVar2 = FUN_01108290(*puVar1,puVar1[1],0xffffffff);
  FUN_0110b240(param_2,iVar2 * 0x10 + *(int *)(param_1 + 0x4c));
  return;
}

// 011089F0  FUN_011089f0  size=112  [run]
void __thiscall FUN_011089f0(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*param_1 != 0) && ((int *)*param_3 != (int *)0x0)) {
    local_c = 0;
    local_8 = 0;
    puVar1 = (undefined4 *)(**(code **)(*(int *)*param_3 + 4))(local_14);
    iVar2 = FUN_01108290(*puVar1,puVar1[1],0xffffffff);
    if (iVar2 != -1) {
      iVar2 = **(int **)(param_1[4] + iVar2 * 4);
      goto LAB_01108a43;
    }
  }
  iVar2 = *param_3;
LAB_01108a43:
  *param_2 = iVar2;
  if (iVar2 != 0) {
    *(short *)(iVar2 + 6) = *(short *)(iVar2 + 6) + 1;
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  return;
}

// 01108A60  FUN_01108a60  size=32  [run]
void __thiscall FUN_01108a60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01108A80  FUN_01108a80  size=31  [run]
void FUN_01108a80(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01108AA0  FUN_01108aa0  size=39  [run]
void FUN_01108aa0(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01108AF0  FUN_01108af0  size=29  [run]
void FUN_01108af0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01108180(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 01108B10  FUN_01108b10  size=31  [run]
void FUN_01108b10(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 01108B30  FUN_01108b30  size=39  [run]
void FUN_01108b30(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0xc);
  }
  return;
}

// 01108B60  FUN_01108b60  size=37  [run]
void __thiscall FUN_01108b60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_01108230(param_3,param_4);
  *(bool *)param_2 = iVar1 <= *(int *)(param_1 + 8);
  return;
}

// 01108C00  FUN_01108c00  size=13  [run]
void __thiscall FUN_01108c00(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - param_2;
  return;
}

// 01108C10  FUN_01108c10  size=52  [run]
undefined4 __thiscall FUN_01108c10(int param_1,undefined4 param_2,int param_3)

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

// 01108C50  FUN_01108c50  size=54  [run]
int __thiscall FUN_01108c50(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 01108C90  FUN_01108c90  size=28  [run]
undefined4 __thiscall FUN_01108c90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01108540(param_2,param_3);
  return param_1;
}

// 01108CB0  FUN_01108cb0  size=51  [run]
undefined4 __thiscall FUN_01108cb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01108230(param_2,param_3);
  if (iVar1 <= *(int *)(param_1 + 8)) {
    FUN_01108330(iVar1);
    return 0;
  }
  return 1;
}

// 01108CF0  FUN_01108cf0  size=206  [run]
undefined4 __thiscall FUN_01108cf0(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (param_3 < 9) {
    param_3 = 8;
  }
  uVar1 = param_1[1];
  piVar2 = (int *)*param_1;
  iVar5 = param_1[2] + 1;
  iVar3 = (**(code **)(*param_2 + 4))(param_3 * 0xc);
  if (iVar3 != 0) {
    *param_1 = iVar3;
    if (0 < param_3) {
      iVar4 = 0;
      iVar3 = param_3;
      do {
        *(undefined4 *)(iVar4 + *param_1) = 0xffffffff;
        iVar4 = iVar4 + 0xc;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    param_1[1] = 0;
    param_1[2] = param_3 + -1;
    piVar6 = piVar2;
    param_3 = iVar5;
    if (0 < iVar5) {
      do {
        if (*piVar6 != -1) {
          FUN_01108180(param_2,*piVar6,piVar6[1],piVar6[2]);
        }
        param_3 = param_3 + -1;
        piVar6 = piVar6 + 3;
      } while (param_3 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      (**(code **)(*param_2 + 8))(piVar2,iVar5 * 0xc);
    }
    return 0;
  }
  return 1;
}

// 01108DC0  FUN_01108dc0  size=51  [run]
int __thiscall FUN_01108dc0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 4;
}

// 01108E00  FUN_01108e00  size=52  [run]
undefined4 __thiscall FUN_01108e00(int param_1,undefined4 param_2,int param_3)

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

// 01108E40  FUN_01108e40  size=53  [run]
int __thiscall FUN_01108e40(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 01108E80  FUN_01108e80  size=276  [run]
bool FUN_01108e80(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  longlong lVar6;
  
  puVar2 = (undefined4 *)FUN_010e5220();
  switch(*puVar2) {
  case 2:
  case 4:
    lVar6 = (**(code **)(*(int *)*param_1 + 0x30))(param_1[1]);
    if (lVar6 != 0) {
      return true;
    }
    break;
  case 3:
    fVar5 = (float10)(**(code **)(*(int *)*param_1 + 0x3c))(param_1[1]);
    if (fVar5 != (float10)0) {
      return true;
    }
    break;
  case 5:
    iVar4 = (**(code **)(*(int *)*param_1 + 0x2c))(param_1[1]);
    return iVar4 != 0;
  case 6:
  case 7:
    puVar2 = (undefined4 *)(**(code **)(*(int *)*param_1 + 0x34))(param_1[1]);
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
      piVar3 = puVar2 + 2;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    return puVar2 != (undefined4 *)0x0;
  case 8:
    piVar3 = (int *)(**(code **)(*(int *)*param_1 + 0x28))(param_1[1]);
    if (piVar3 != (int *)0x0) {
      *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
      piVar3[2] = piVar3[2] + 1;
    }
    iVar4 = (**(code **)(*piVar3 + 0x14))();
    *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
    piVar1 = piVar3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar3)(1);
    }
    return iVar4 != 0;
  case 9:
    return true;
  }
  return false;
}

// 01108FC0  FUN_01108fc0  size=64  [run]
void __thiscall FUN_01108fc0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01109020  FUN_01109020  size=118  [run]
void __thiscall FUN_01109020(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    FUN_01016df0(3);
    return;
  }
  iVar1 = FUN_01025be0(param_2,0xffffffff);
  if (iVar1 == -1) {
    iVar1 = FUN_01015cd0(param_2);
    FUN_01107dd0(iVar1,iVar1 >> 0x1f);
    FUN_01016f90(param_2,iVar1);
    FUN_01025470(param_2,*(int *)(param_1 + 0x14) + 1);
    return;
  }
  FUN_01107dd0(-iVar1,-iVar1 >> 0x1f);
  return;
}

// 011090A0  FUN_011090a0  size=126  [run]
void __thiscall FUN_011090a0(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_011089f0(&param_2,param_2);
  piVar2 = param_2;
  local_c = 0;
  local_8 = 0;
  if (param_2 == (int *)0x0) {
    puVar3 = &local_c;
  }
  else {
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 4))(local_14);
  }
  iVar4 = FUN_01108290(*puVar3,puVar3[1],0xffffffff);
  iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + 0xc + iVar4 * 0x10);
  FUN_01107dd0(iVar4,iVar4 >> 0x1f);
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar2)(1);
    }
  }
  return;
}

// 01109120  FUN_01109120  size=53  [run]
undefined4 __thiscall FUN_01109120(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,1);
    return uVar3;
  }
  return 0;
}

// 01109160  FUN_01109160  size=88  [run]
void __thiscall FUN_01109160(int *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar2 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,1);
  }
  iVar2 = param_1[1];
  iVar1 = *param_1;
  iVar3 = param_2 - iVar2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      *(undefined1 *)(iVar4 + iVar1 + iVar2) = *param_3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  param_1[1] = param_2;
  return;
}

// 011091C0  FUN_011091c0  size=68  [run]
int __thiscall FUN_011091c0(int *param_1,int param_2)

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
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar3,1);
  }
  param_1[1] = param_1[1] + param_2;
  return *param_1 + iVar2;
}

// 01109210  FUN_01109210  size=28  [run]
undefined4 __thiscall FUN_01109210(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01108c90(param_2,param_3);
  return param_1;
}

// 01109230  FUN_01109230  size=46  [run]
int __fastcall FUN_01109230(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,4);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 4;
}

// 01109260  FUN_01109260  size=53  [run]
undefined4 __thiscall FUN_01109260(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 011092A0  FUN_011092a0  size=48  [run]
int __fastcall FUN_011092a0(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,0x10);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return iVar1 * 0x10 + *param_1;
}

// 011092D0  FUN_011092d0  size=53  [run]
undefined4 __thiscall FUN_011092d0(int param_1,int param_2)

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
    uVar3 = FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,0xc);
    return uVar3;
  }
  return 0;
}

// 01109310  FUN_01109310  size=49  [run]
int __fastcall FUN_01109310(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,param_1,0xc);
  }
  iVar1 = param_1[1];
  param_1[1] = iVar1 + 1;
  return *param_1 + iVar1 * 0xc;
}

// 01109350  FUN_01109350  size=93  [run]
undefined4 __thiscall
FUN_01109350(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) < *(int *)(param_1 + 4) * 2) {
    iVar1 = FUN_01108cf0(param_2,*(int *)(param_1 + 8) * 2 + 2);
    *param_6 = iVar1;
    if (iVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_6 = 0;
  }
  uVar2 = FUN_01108180(param_2,param_3,param_4,param_5);
  return uVar2;
}

// 011093B0  FUN_011093b0  size=124  [run]
void __thiscall
FUN_011093b0(int *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[2] < param_1[1] * 2) {
    FUN_01108cf0(param_2,param_1[2] * 2 + 2);
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

// 01109430  FUN_01109430  size=37  [run]
void FUN_01109430(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  FUN_01108cf0(param_1,iVar1);
  return;
}

// 01109460  FUN_01109460  size=64  [run]
void __fastcall FUN_01109460(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011094A0  FUN_011094a0  size=61  [run]
void __thiscall FUN_011094a0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011094E0  FUN_011094e0  size=60  [run]
void __thiscall FUN_011094e0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01109520  FUN_01109520  size=262  [run]
void __thiscall FUN_01109520(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = param_1[1];
  uVar5 = iVar2 + 7U & 0xfffffff8;
  if ((int)(param_1[2] & 0x3fffffffU) < (int)uVar5) {
    uVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if ((int)uVar3 <= (int)uVar5) {
      uVar3 = uVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,uVar3,1);
  }
  _Size = uVar5 - param_1[1];
  if (0 < (int)_Size) {
    _memset((void *)(*param_1 + param_1[1]),0,_Size);
  }
  param_1[1] = uVar5;
  iVar4 = 0;
  iVar6 = 0;
  if (0 < param_3) {
    do {
      bVar1 = *(byte *)(iVar6 + param_2);
      *(byte *)(iVar4 + *param_1) = bVar1 & 1;
      *(byte *)(*param_1 + 1 + iVar4) = bVar1 >> 1 & 1;
      *(byte *)(*param_1 + 2 + iVar4) = bVar1 >> 2 & 1;
      *(byte *)(*param_1 + 3 + iVar4) = bVar1 >> 3 & 1;
      *(byte *)(*param_1 + 4 + iVar4) = bVar1 >> 4 & 1;
      *(byte *)(*param_1 + 5 + iVar4) = bVar1 >> 5 & 1;
      *(byte *)(*param_1 + 6 + iVar4) = bVar1 >> 6 & 1;
      *(byte *)(*param_1 + 7 + iVar4) = bVar1 >> 7;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar6 < param_3);
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar2) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar4,1);
  }
  param_1[1] = iVar2;
  return;
}

// 01109630  FUN_01109630  size=197  [run]
void __thiscall FUN_01109630(int *param_1,byte *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  iVar2 = param_1[1];
  uVar6 = iVar2 + 7U & 0xfffffff8;
  if ((int)(param_1[2] & 0x3fffffffU) < (int)uVar6) {
    uVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if ((int)uVar3 <= (int)uVar6) {
      uVar3 = uVar6;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,uVar3,1);
  }
  _Size = uVar6 - param_1[1];
  if (0 < (int)_Size) {
    _memset((void *)(*param_1 + param_1[1]),0,_Size);
  }
  param_1[1] = uVar6;
  if (0 < (int)uVar6) {
    iVar5 = 0;
    do {
      pcVar1 = (char *)(*param_1 + 7 + iVar5);
      pbVar4 = (byte *)(*param_1 + iVar5);
      iVar5 = iVar5 + 8;
      *param_2 = ((((((*pcVar1 * '\x02' | pbVar4[6]) * '\x02' | pbVar4[5]) * '\x02' | pbVar4[4]) *
                    '\x02' | pbVar4[3]) * '\x02' | pbVar4[2]) * '\x02' | pbVar4[1]) * '\x02' |
                 *pbVar4;
      param_2 = param_2 + 1;
    } while (iVar5 < param_1[1]);
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar2) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar2) {
      iVar5 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar5,1);
  }
  param_1[1] = iVar2;
  return;
}

// 01109700  FUN_01109700  size=455  [run]
int * __thiscall FUN_01109700(int *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  LPVOID pvVar4;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [4];
  int local_1c;
  int local_18 [3];
  undefined4 local_c;
  int *local_8;
  
  if ((*param_1 != 0) && ((int *)*param_3 != (int *)0x0)) {
    local_18[0] = 0;
    local_18[1] = 0;
    puVar1 = (undefined4 *)(**(code **)(*(int *)*param_3 + 4))(local_20);
    local_c = puVar1[1];
    local_18[2] = *puVar1;
    iVar2 = FUN_01108290(local_18[2],local_c,0xffffffff);
    if (iVar2 != -1) {
      iVar2 = **(int **)(param_1[4] + iVar2 * 4);
      goto LAB_0110989f;
    }
    (**(code **)(*(int *)*param_1 + 0xc))(&local_8,param_3);
    local_18[0] = 0;
    local_18[1] = 0;
    if (local_8 == (int *)0x0) {
      piVar3 = local_18;
    }
    else {
      piVar3 = (int *)(**(code **)(*local_8 + 4))(local_28);
    }
    iVar2 = *piVar3;
    local_1c = piVar3[1];
    local_18[0] = 0;
    local_18[1] = 0;
    if ((int *)*param_3 == (int *)0x0) {
      piVar3 = local_18;
    }
    else {
      piVar3 = (int *)(**(code **)(*(int *)*param_3 + 4))(local_30);
    }
    if ((iVar2 != *piVar3) || (local_1c != piVar3[1])) {
      FUN_01108180(&PTR_vftable_018e9b94,local_18[2],local_c,param_1[5]);
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      puVar1 = (undefined4 *)(**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(4);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *puVar1 = local_8;
        if (local_8 != (int *)0x0) {
          *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + 1;
          local_8[2] = local_8[2] + 1;
        }
      }
      if (param_1[5] == (param_1[6] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b8c,param_1 + 4,4);
      }
      iVar2 = param_1[5];
      param_1[5] = iVar2 + 1;
      *(undefined4 **)(param_1[4] + iVar2 * 4) = puVar1;
      *param_2 = (int)local_8;
      if (local_8 != (int *)0x0) {
        *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + 1;
        local_8[2] = local_8[2] + 1;
        if (local_8 != (int *)0x0) {
          *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
          piVar3 = local_8 + 2;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            (**(code **)*local_8)(1);
          }
        }
      }
      return param_2;
    }
    if (local_8 != (int *)0x0) {
      *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
      piVar3 = local_8 + 2;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        (**(code **)*local_8)(1);
      }
    }
  }
  iVar2 = *param_3;
LAB_0110989f:
  *param_2 = iVar2;
  if (iVar2 != 0) {
    *(short *)(iVar2 + 6) = *(short *)(iVar2 + 6) + 1;
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
  }
  return param_2;
}

// 011098D0  FUN_011098d0  size=33  [run]
void FUN_011098d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01109350(&PTR_vftable_018e9b94,param_1,param_2,param_3,param_4);
  return;
}

// 01109900  FUN_01109900  size=29  [run]
void FUN_01109900(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_011093b0(&PTR_vftable_018e9b94,param_1,param_2,param_3);
  return;
}

// 01109920  FUN_01109920  size=21  [run]
void FUN_01109920(undefined4 param_1)

{
  FUN_01109430(&PTR_vftable_018e9b94,param_1);
  return;
}

// 01109940  FUN_01109940  size=64  [run]
void __fastcall FUN_01109940(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01109980  FUN_01109980  size=61  [run]
void __fastcall FUN_01109980(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 011099C0  FUN_011099c0  size=60  [run]
void __fastcall FUN_011099c0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01109A00  FUN_01109a00  size=145  [run]
int * __thiscall FUN_01109a00(int *param_1,int param_2)

{
  size_t _Size;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 + 7U & 0xfffffff8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  if (0 < (int)uVar2) {
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,((int)uVar2 < 0) - 1 & uVar2,1);
  }
  _Size = uVar2 - param_1[1];
  if (0 < (int)_Size) {
    _memset((void *)(*param_1 + param_1[1]),0,_Size);
  }
  param_1[1] = uVar2;
  if ((int)(param_1[2] & 0x3fffffffU) < param_2) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= param_2) {
      iVar1 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar1,1);
  }
  param_1[1] = param_2;
  return param_1;
}

// 01109AA0  FUN_01109aa0  size=57  [run]
void __fastcall FUN_01109aa0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01109AE0  FUN_01109ae0  size=51  [run]
undefined4 * __thiscall FUN_01109ae0(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  if (param_2 != 0) {
    FUN_01109430(&PTR_vftable_018e9b94,param_2);
  }
  return param_1;
}

// 01109B20  FUN_01109b20  size=61  [run]
void __fastcall FUN_01109b20(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01109B60  FUN_01109b60  size=60  [run]
void __fastcall FUN_01109b60(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01109BA0  FUN_01109ba0  size=691  [run]
int __thiscall FUN_01109ba0(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  piVar1 = param_2;
  if ((int *)*param_2 == (int *)0x0) {
    return 0;
  }
  uVar2 = (**(code **)(*(int *)*param_2 + 8))();
  iVar3 = FUN_01025be0(uVar2,0xffffffff);
  if (-1 < iVar3) {
    return iVar3;
  }
  param_2 = (int *)(**(code **)(*(int *)*piVar1 + 0x10))();
  local_10 = (int *)FUN_01109ba0(&param_2);
  uVar2 = (**(code **)(*(int *)*piVar1 + 8))();
  iVar3 = FUN_01025be0(uVar2,0xffffffff);
  if (iVar3 != -1) {
    return iVar3;
  }
  local_8 = *(int *)(param_1 + 0x24);
  uVar2 = (**(code **)(*(int *)*piVar1 + 8))();
  FUN_01025470(uVar2,local_8);
  piVar4 = (int *)(**(code **)(*(int *)*piVar1 + 0x18))();
  local_24 = 0;
  local_20 = (int *)0x0;
  local_1c = 0x80000000;
  local_18 = piVar4;
  if (piVar4 == (int *)0x0) {
    local_24 = 0;
  }
  else {
    param_2 = (int *)((int)piVar4 << 4);
    local_24 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    local_1c = (int)((int)param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
    if (local_1c != 0) goto LAB_01109c84;
  }
  local_1c = -0x80000000;
LAB_01109c84:
  if (0 < (int)piVar4) {
    puVar6 = (undefined4 *)(local_24 + 8);
    local_c = piVar4;
    do {
      if (puVar6 != (undefined4 *)&DAT_00000008) {
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      puVar6 = puVar6 + 4;
      local_c = (int *)((int)local_c + -1);
    } while (local_c != (int *)0x0);
  }
  local_20 = piVar4;
  FUN_010e5310(&local_24);
  FUN_01107dd0(2,0);
  uVar2 = (**(code **)(*(int *)*piVar1 + 8))();
  FUN_01109020(uVar2);
  iVar3 = (**(code **)(*(int *)*piVar1 + 0xc))();
  FUN_01107dd0(iVar3,iVar3 >> 0x1f);
  (**(code **)(*(int *)*piVar1 + 0xc))();
  FUN_01107dd0(local_10,(int)local_10 >> 0x1f);
  FUN_01107dd0(piVar4,(int)piVar4 >> 0x1f);
  if (0 < (int)piVar4) {
    param_2 = (int *)0x0;
    local_10 = piVar4;
    do {
      puVar6 = (undefined4 *)((int)param_2 + local_24);
      FUN_01109020(*puVar6);
      uVar5 = FUN_010e1210(puVar6[2],&local_c,&local_14);
      FUN_01107dd0(uVar5,(int)uVar5 >> 0x1f);
      if ((uVar5 & 0x20) != 0) {
        FUN_01107dd0(local_14,(int)local_14 >> 0x1f);
      }
      if (((uVar5 & 0xf) == 9) || ((uVar5 & 0xf) == 8)) {
        if (local_c == (int *)0x0) {
          FUN_01016df0(3);
        }
        else {
          piVar4 = (int *)(**(code **)(*(int *)*piVar1 + 4))();
          piVar4 = (int *)(**(code **)(*piVar4 + 0x24))(local_c);
          uVar2 = (**(code **)(*piVar4 + 8))();
          FUN_01109020(uVar2);
        }
      }
      param_2 = (int *)((int)param_2 + 0x10);
      local_10 = (int *)((int)local_10 + -1);
    } while (local_10 != (int *)0x0);
    local_10 = (int *)0x0;
    if (0 < (int)local_18) {
      param_2 = (int *)0x0;
      local_10 = local_18;
      do {
        local_18 = (int *)FUN_010e0d90();
        if (*local_18 == 6) {
          local_14 = (int *)(**(code **)(*(int *)*piVar1 + 4))();
          iVar3 = *local_14;
          uVar2 = FUN_010e0cd0();
          local_c = (int *)(**(code **)(iVar3 + 0x24))(uVar2);
          FUN_01109ba0(&local_c);
        }
        param_2 = (int *)((int)param_2 + 0x10);
        local_10 = (int *)((int)local_10 + -1);
      } while (local_10 != (int *)0x0);
    }
  }
  local_20 = (int *)0x0;
  if (-1 < local_1c) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_24,local_1c << 4);
  }
  return local_8;
}

// 01109E60  FUN_01109e60  size=1014  [run]
void FUN_01109e60(undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined4 *local_10 [2];
  int *local_8;
  
  puVar6 = param_1;
  puVar4 = (undefined4 *)(**(code **)(*(int *)*param_1 + 4))();
  switch(*puVar4) {
  case 6:
    local_8 = (int *)(**(code **)(*(int *)*puVar6 + 0x18))();
    FUN_01109ba0(&local_8);
    iVar9 = 0;
    local_18 = 0;
    iVar8 = (**(code **)(*local_8 + 0x24))();
    piVar2 = param_2;
    if (0 < iVar8) {
      do {
        local_48 = 0;
        local_44 = 0;
        local_40 = (int *)0x0;
        local_3c = 0;
        (**(code **)(*local_8 + 0x28))(iVar9,&local_48);
        iVar8 = *local_40;
        if (iVar8 == 6) {
          piVar5 = (int *)(**(code **)(*(int *)*puVar6 + 0x28))(local_48);
          if (piVar5 != (int *)0x0) {
            *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
            piVar5[2] = piVar5[2] + 1;
          }
          param_2 = (int *)(**(code **)(*piVar5 + 0x14))();
          iVar8 = 0;
          if (0 < (int)param_2) {
            do {
              local_14 = (undefined4 *)(**(code **)(*piVar5 + 0x5c))(iVar8);
              if (local_14 != (undefined4 *)0x0) {
                *(short *)((int)local_14 + 6) = *(short *)((int)local_14 + 6) + 1;
                local_14[2] = local_14[2] + 1;
              }
              FUN_0110a270(&local_14,piVar2,1);
              if (local_14 != (undefined4 *)0x0) {
                *(short *)((int)local_14 + 6) = *(short *)((int)local_14 + 6) + -1;
                piVar7 = local_14 + 2;
                *piVar7 = *piVar7 + -1;
                if (*piVar7 == 0) {
                  (**(code **)*local_14)(1);
                }
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < (int)param_2);
          }
          *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + -1;
          piVar7 = piVar5 + 2;
          *piVar7 = *piVar7 + -1;
          puVar6 = param_1;
          if (*piVar7 == 0) {
            (**(code **)*piVar5)(1);
            puVar6 = param_1;
          }
        }
        else if (iVar8 == 7) {
          piVar5 = (int *)(**(code **)(*(int *)*puVar6 + 0x28))(local_48);
          if (piVar5 != (int *)0x0) {
            *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
            piVar5[2] = piVar5[2] + 1;
          }
          local_1c = (**(code **)(*piVar5 + 0x14))();
          param_2 = (int *)0x0;
          if (0 < local_1c) {
            local_30 = 0;
            local_2c = 0;
            do {
              piVar7 = (int *)(**(code **)(*piVar5 + 0x5c))(param_2);
              if (piVar7 == (int *)0x0) {
                puVar6 = &local_30;
              }
              else {
                *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + 1;
                piVar7[2] = piVar7[2] + 1;
                puVar6 = (undefined4 *)(**(code **)(*piVar7 + 4))(local_38);
              }
              local_28 = *puVar6;
              local_24 = puVar6[1];
              if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
                FUN_0100a290(&PTR_vftable_018e9b8c,piVar2,0xc);
              }
              puVar6 = (undefined4 *)(*piVar2 + piVar2[1] * 0xc);
              piVar2[1] = piVar2[1] + 1;
              *puVar6 = local_28;
              puVar6[1] = local_24;
              puVar6[2] = 0;
              if (piVar7 != (int *)0x0) {
                *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + -1;
                piVar1 = piVar7 + 2;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  (**(code **)*piVar7)(1);
                }
              }
              param_2 = (int *)((int)param_2 + 1);
            } while ((int)param_2 < local_1c);
          }
          *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + -1;
          piVar7 = piVar5 + 2;
          *piVar7 = *piVar7 + -1;
          puVar6 = param_1;
          if (*piVar7 == 0) {
            (**(code **)*piVar5)(1);
            puVar6 = param_1;
          }
        }
        else if (iVar8 == 8) {
          local_10[0] = (undefined4 *)(**(code **)(*(int *)*puVar6 + 0x28))(local_48);
          if (local_10[0] != (undefined4 *)0x0) {
            *(short *)((int)local_10[0] + 6) = *(short *)((int)local_10[0] + 6) + 1;
            local_10[0][2] = local_10[0][2] + 1;
          }
          FUN_01109e60(local_10,piVar2,param_3);
          if (local_10[0] != (undefined4 *)0x0) {
            *(short *)((int)local_10[0] + 6) = *(short *)((int)local_10[0] + 6) + -1;
            piVar5 = local_10[0] + 2;
            *piVar5 = *piVar5 + -1;
            if (*piVar5 == 0) {
              (**(code **)*local_10[0])(1);
            }
          }
        }
        iVar9 = local_18 + 1;
        local_18 = iVar9;
        iVar8 = (**(code **)(*local_8 + 0x24))();
      } while (iVar9 < iVar8);
      return;
    }
    break;
  case 7:
    local_18 = (**(code **)(*(int *)*puVar6 + 0x14))();
    piVar2 = param_2;
    param_3 = 0;
    if (0 < local_18) {
      local_28 = 0;
      local_24 = 0;
      do {
        piVar5 = (int *)(**(code **)(*(int *)*puVar6 + 0x5c))(param_3);
        if (piVar5 == (int *)0x0) {
          puVar6 = &local_28;
        }
        else {
          *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
          piVar5[2] = piVar5[2] + 1;
          puVar6 = (undefined4 *)(**(code **)(*piVar5 + 4))(local_20);
        }
        uVar3 = *puVar6;
        local_2c = puVar6[1];
        if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b8c,piVar2,0xc);
        }
        puVar6 = (undefined4 *)(*piVar2 + piVar2[1] * 0xc);
        piVar2[1] = piVar2[1] + 1;
        *puVar6 = uVar3;
        puVar6[1] = local_2c;
        puVar6[2] = 0;
        if (piVar5 != (int *)0x0) {
          *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + -1;
          piVar7 = piVar5 + 2;
          *piVar7 = *piVar7 + -1;
          if (*piVar7 == 0) {
            (**(code **)*piVar5)(1);
          }
        }
        param_3 = param_3 + 1;
        puVar6 = param_1;
      } while (param_3 < local_18);
      return;
    }
    break;
  case 8:
  case 9:
    iVar8 = (**(code **)(*(int *)*puVar6 + 0x14))();
    iVar9 = 0;
    if (0 < iVar8) {
      do {
        param_1 = (undefined4 *)(**(code **)(*(int *)*puVar6 + 100))(iVar9);
        if (param_1 != (undefined4 *)0x0) {
          *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
          param_1[2] = param_1[2] + 1;
        }
        FUN_01109e60(&param_1,param_2,param_3);
        if (param_1 != (undefined4 *)0x0) {
          *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1;
          piVar2 = param_1 + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*param_1)(1);
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar8);
    }
  }
  return;
}

// 0110A270  FUN_0110a270  size=615  [run]
void FUN_0110a270(undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_48 [8];
  undefined1 local_40 [12];
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  int *local_10 [2];
  undefined4 local_8;
  
  (**(code **)(*(int *)*param_1 + 8))();
  local_8 = (**(code **)(*(int *)*param_1 + 0x14))();
  iVar3 = (**(code **)(*(int *)*param_1 + 0x18))(local_8);
  piVar2 = param_2;
  do {
    if (iVar3 == 0) {
      return;
    }
    (**(code **)(*(int *)*param_1 + 0x24))(&local_18,local_8);
    puVar4 = (undefined4 *)FUN_010e5220();
    piVar5 = (int *)FUN_010e0d90();
    if (*piVar5 == 6) {
      switch(*puVar4) {
      case 6:
        piVar5 = (int *)(**(code **)(*local_18 + 0x34))(local_14);
        if (param_3 == 0) {
          if (piVar5 != (int *)0x0) {
            *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
            piVar5[2] = piVar5[2] + 1;
          }
          local_28 = 0;
          local_24 = 0;
          if (piVar5 == (int *)0x0) {
            puVar4 = &local_28;
          }
          else {
            puVar4 = (undefined4 *)(**(code **)(*piVar5 + 4))(local_48);
          }
          uVar7 = *puVar4;
          local_34 = puVar4[1];
          if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
            FUN_0100a290(&PTR_vftable_018e9b8c,piVar2,0xc);
          }
          puVar4 = (undefined4 *)(*piVar2 + piVar2[1] * 0xc);
          piVar2[1] = piVar2[1] + 1;
          puVar4[2] = 1;
          uVar6 = local_34;
          goto LAB_0110a36d;
        }
        if (piVar5 != (int *)0x0) {
          *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        param_2 = piVar5;
        FUN_0110a270(&param_2,piVar2,1);
        if (param_2 != (int *)0x0) {
          *(short *)((int)param_2 + 6) = *(short *)((int)param_2 + 6) + -1;
          piVar5 = param_2 + 2;
          *piVar5 = *piVar5 + -1;
          if (*piVar5 == 0) {
            puVar4 = (undefined4 *)*param_2;
            goto LAB_0110a4a3;
          }
        }
        break;
      case 7:
        piVar5 = (int *)(**(code **)(*local_18 + 0x34))(local_14);
        if (piVar5 != (int *)0x0) {
          *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        local_20 = 0;
        local_1c = 0;
        if (piVar5 == (int *)0x0) {
          puVar4 = &local_20;
        }
        else {
          puVar4 = (undefined4 *)(**(code **)(*piVar5 + 4))(local_40);
        }
        uVar7 = *puVar4;
        local_2c = puVar4[1];
        if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b8c,piVar2,0xc);
        }
        puVar4 = (undefined4 *)(*piVar2 + piVar2[1] * 0xc);
        piVar2[1] = piVar2[1] + 1;
        puVar4[2] = 0;
        uVar6 = local_2c;
LAB_0110a36d:
        puVar4[1] = uVar6;
        *puVar4 = uVar7;
        if (piVar5 != (int *)0x0) {
          *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + -1;
          piVar1 = piVar5 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*piVar5)(1);
          }
        }
        break;
      case 8:
      case 9:
        piVar5 = (int *)(**(code **)(*local_18 + 0x28))(local_14);
        if (piVar5 != (int *)0x0) {
          *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
          piVar5[2] = piVar5[2] + 1;
        }
        local_10[0] = piVar5;
        FUN_01109e60(local_10,piVar2,param_3);
        if (piVar5 != (int *)0x0) {
          *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + -1;
          piVar1 = piVar5 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            puVar4 = (undefined4 *)*piVar5;
LAB_0110a4a3:
            (*(code *)*puVar4)(1);
          }
        }
      }
    }
    local_8 = (**(code **)(*(int *)*param_1 + 0x1c))(local_8);
    iVar3 = (**(code **)(*(int *)*param_1 + 0x18))(local_8);
  } while( true );
}

// 0110A4F0  FUN_0110a4f0  size=974  [run]
void __thiscall FUN_0110a4f0(int param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined8 local_70;
  int local_68;
  int local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_58 = 0;
  local_54 = 0;
  local_50 = 0x80000000;
  local_8 = param_1;
  FUN_0100a210(&PTR_vftable_018e9b8c,&local_58,0x80,0xc);
  local_14 = 0;
  local_10 = 0;
  if ((int *)*param_3 == (int *)0x0) {
    puVar4 = &local_14;
  }
  else {
    puVar4 = (undefined4 *)(**(code **)(*(int *)*param_3 + 4))(&local_34);
  }
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  if (local_54 == (local_50 & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,&local_58,0xc);
  }
  puVar4 = (undefined4 *)(local_58 + local_54 * 0xc);
  puVar4[1] = uVar7;
  *puVar4 = uVar6;
  puVar4[2] = param_4;
  local_54 = local_54 + 1;
  while (local_54 != 0) {
    local_70 = *(undefined8 *)(local_58 + -0xc + local_54 * 0xc);
    local_68 = *(int *)(local_58 + local_54 * 0xc + -4);
    local_54 = local_54 + -1;
    if (((int)local_70 != 0) ||
       (local_70._4_4_ = (int)((ulonglong)local_70 >> 0x20), bVar12 = local_70._4_4_ != 0, bVar12))
    {
      (**(code **)(*param_2 + 0x28))(&param_3,&local_70);
      FUN_01109700(&local_c,&param_3);
      piVar1 = local_c;
      if (local_c == (int *)0x0) {
        if (param_3 != (int *)0x0) {
          *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
          piVar1 = param_3 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*param_3)(1);
          }
        }
      }
      else {
        local_1c = 0;
        local_18 = 0;
        puVar4 = (undefined4 *)(**(code **)(*local_c + 4))(local_3c);
        iVar5 = FUN_01108290(*puVar4,puVar4[1],0xffffffff);
        if (iVar5 == -1) {
          param_4 = (int *)(**(code **)(*piVar1 + 8))();
          FUN_01109ba0(&param_4);
          uVar6 = (**(code **)(*param_4 + 0x24))();
          FUN_01109a00(uVar6);
          uVar6 = (**(code **)(*piVar1 + 0x14))();
          iVar5 = (**(code **)(*piVar1 + 0x18))(uVar6);
          while (iVar5 != 0) {
            (**(code **)(*piVar1 + 0x24))(local_24,uVar6);
            iVar5 = FUN_01108e80(local_24);
            if (iVar5 != 0) {
              uVar7 = (**(code **)(*piVar1 + 0x20))(uVar6);
              iVar5 = (**(code **)(*param_4 + 0x2c))(uVar7);
              *(undefined1 *)(local_64 + iVar5) = 1;
            }
            uVar6 = (**(code **)(*piVar1 + 0x1c))(uVar6);
            iVar5 = (**(code **)(*piVar1 + 0x18))(uVar6);
          }
          uVar9 = *(uint *)(param_1 + 0x38);
          local_2c = 0;
          local_28 = 0;
          puVar4 = (undefined4 *)(**(code **)(*piVar1 + 4))(local_44);
          FUN_01108180(&PTR_vftable_018e9b94,*puVar4,puVar4[1],uVar9 & 0x7fffffff);
          if (*(uint *)(param_1 + 0x50) == (*(uint *)(param_1 + 0x54) & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b8c,(int *)(param_1 + 0x4c),0x10);
          }
          iVar5 = *(int *)(param_1 + 0x50);
          *(int *)(param_1 + 0x50) = iVar5 + 1;
          puVar11 = (undefined4 *)(iVar5 * 0x10 + *(int *)(param_1 + 0x4c));
          local_34 = 0;
          local_30 = 0;
          puVar4 = (undefined4 *)(**(code **)(*piVar1 + 4))(local_4c);
          iVar5 = local_8;
          *puVar11 = *puVar4;
          puVar11[1] = puVar4[1];
          puVar11[2] = *(undefined4 *)(local_8 + 0x44);
          if (local_68 == 0) {
            iVar8 = *(int *)(local_8 + 0x30);
            *(int *)(local_8 + 0x30) = iVar8 + 1;
          }
          else {
            iVar8 = -1;
          }
          puVar11[3] = iVar8;
          local_10 = *(int *)(local_8 + 0x44);
          piVar2 = (int *)(local_8 + 0x40);
          iVar10 = (int)(((int)(local_60 + 7U) >> 0x1f & 7U) + (local_60 + 7U & 0xfffffff8)) >> 3;
          iVar8 = local_10 + iVar10;
          uVar9 = *(uint *)(local_8 + 0x48) & 0x3fffffff;
          if ((int)uVar9 < iVar8) {
            iVar3 = uVar9 * 2;
            if (iVar8 < iVar3) {
              iVar8 = iVar3;
            }
            FUN_0100a210(&PTR_vftable_018e9b8c,piVar2,iVar8,1);
          }
          iVar8 = *piVar2;
          *(int *)(iVar5 + 0x44) = *(int *)(iVar5 + 0x44) + iVar10;
          FUN_01109630(iVar8 + local_10);
          FUN_0110a270(&local_c,&local_58,0);
          local_60 = 0;
          if (-1 < (int)local_5c) {
            (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_64,local_5c & 0x3fffffff);
          }
          local_64 = 0;
          local_5c = 0x80000000;
          *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + -1;
          piVar2 = piVar1 + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*piVar1)(1);
          }
          param_1 = local_8;
          if (param_3 != (int *)0x0) {
            *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
            piVar1 = param_3 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*param_3)(1);
              param_1 = local_8;
            }
          }
        }
        else {
          *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + -1;
          piVar2 = piVar1 + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*piVar1)(1);
          }
          if (param_3 != (int *)0x0) {
            *(short *)((int)param_3 + 6) = *(short *)((int)param_3 + 6) + -1;
            piVar1 = param_3 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              (**(code **)*param_3)(1);
            }
          }
        }
      }
    }
  }
  local_54 = 0;
  if (-1 < (int)local_50) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_58,(local_50 & 0x3fffffff) * 0xc);
  }
  return;
}

// 0110A8C0  FUN_0110a8c0  size=1568  [run]
void FUN_0110a8c0(int *param_1,float param_2)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  undefined8 uVar12;
  int local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int local_c [2];
  
  piVar6 = param_1;
  piVar2 = (int *)(**(code **)(*(int *)*param_1 + 4))();
  fVar1 = param_2;
  iVar8 = *piVar2;
  if ((iVar8 == 9) &&
     ((*(int *)piVar2[1] != 3 ||
      ((((iVar9 = piVar2[2], iVar9 != 4 && (iVar9 != 8)) && (iVar9 != 0xc)) && (iVar9 != 0x10))))))
  {
    iVar8 = 0;
    if ((int)param_2 < 1) {
      return;
    }
    do {
      param_1 = (int *)(**(code **)(*(int *)*piVar6 + 100))(iVar8);
      if (param_1 != (int *)0x0) {
        *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
        param_1[2] = param_1[2] + 1;
      }
      uVar3 = (**(code **)(*param_1 + 0x14))();
      FUN_0110a8c0(&param_1,uVar3);
      if (param_1 != (int *)0x0) {
        *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1;
        piVar2 = param_1 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          (**(code **)*param_1)(1);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)param_2);
    return;
  }
  switch(iVar8) {
  case 2:
    iVar8 = 0;
    if (0 < (int)param_2) {
      do {
        uVar3 = (**(code **)(*(int *)*param_1 + 0x4c))(iVar8);
        FUN_01016df0(uVar3);
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)fVar1);
      return;
    }
    break;
  case 3:
    iVar8 = 0;
    if (0 < (int)param_2) {
      do {
        fVar11 = (float10)(**(code **)(*(int *)*param_1 + 0x3c))(iVar8);
        param_2 = (float)fVar11;
        FUN_01017180(param_2);
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)fVar1);
      return;
    }
    break;
  case 4:
    iVar8 = (**(code **)(*(int *)*piVar6 + 0x24))();
    if (iVar8 == 4) {
      FUN_01107dd0(4,0);
      fVar1 = param_2;
      iVar8 = 0;
      if (0 < (int)param_2) {
        do {
          iVar9 = (**(code **)(*(int *)*param_1 + 0x4c))(iVar8);
          FUN_01107dd0(iVar9,iVar9 >> 0x1f);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)fVar1);
        return;
      }
    }
    else {
      FUN_01107dd0(8,0);
      fVar1 = param_2;
      iVar8 = 0;
      if (0 < (int)param_2) {
        do {
          uVar12 = (**(code **)(*(int *)*param_1 + 0x54))(iVar8);
          FUN_01107dd0(uVar12);
          iVar8 = iVar8 + 1;
        } while (iVar8 < (int)fVar1);
        return;
      }
    }
    break;
  case 5:
    iVar8 = 0;
    if (0 < (int)param_2) {
      do {
        uVar3 = (**(code **)(*(int *)*param_1 + 0x34))(iVar8);
        FUN_01109020(uVar3);
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)fVar1);
      return;
    }
    break;
  case 6:
    piVar2 = (int *)(**(code **)(*(int *)*piVar6 + 0x18))();
    piVar2 = (int *)(**(code **)(*piVar2 + 0x24))();
    local_24 = 0;
    local_20 = (int *)0x0;
    local_1c = 0x80000000;
    local_10 = piVar2;
    if (piVar2 == (int *)0x0) {
      local_24 = 0;
LAB_0110ab82:
      local_1c = -0x80000000;
    }
    else {
      local_c[0] = (int)piVar2 << 4;
      local_24 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(local_c);
      local_1c = (int)(local_c[0] + (local_c[0] >> 0x1f & 0xfU)) >> 4;
      if (local_1c == 0) goto LAB_0110ab82;
    }
    if (0 < (int)piVar2) {
      puVar5 = (undefined4 *)(local_24 + 8);
      piVar7 = piVar2;
      do {
        if (puVar5 != (undefined4 *)&DAT_00000008) {
          puVar5[-2] = 0;
          puVar5[-1] = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        puVar5 = puVar5 + 4;
        piVar7 = (int *)((int)piVar7 + -1);
      } while (piVar7 != (int *)0x0);
    }
    local_20 = piVar2;
    piVar6 = (int *)(**(code **)(*(int *)*piVar6 + 0x18))();
    (**(code **)(*piVar6 + 0x30))(&local_24);
    FUN_01109a00(piVar2);
    local_c[0] = 0;
    if (0 < (int)piVar2) {
      iVar8 = 0;
      do {
        if (**(int **)(iVar8 + 8 + local_24) != 1) {
          piVar6 = (int *)(**(code **)(*(int *)*param_1 + 0x28))(*(undefined4 *)(iVar8 + local_24));
          if (piVar6 != (int *)0x0) {
            *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + 1;
            piVar6[2] = piVar6[2] + 1;
          }
          iVar4 = 0;
          iVar9 = (**(code **)(*piVar6 + 0x14))();
          piVar2 = piVar6;
          if (0 < iVar9) {
            do {
              local_18 = piVar2;
              local_14 = iVar4;
              iVar9 = FUN_01108660(&local_18);
              if (iVar9 != 0) {
                *(undefined1 *)(local_3c + local_c[0]) = 1;
                break;
              }
              iVar4 = iVar4 + 1;
              iVar9 = (**(code **)(*piVar6 + 0x14))();
              piVar2 = local_18;
            } while (iVar4 < iVar9);
          }
          *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + -1;
          piVar2 = piVar6 + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*piVar6)(1);
          }
        }
        local_c[0] = local_c[0] + 1;
        iVar8 = iVar8 + 0x10;
      } while (local_c[0] < (int)local_10);
    }
    iVar8 = 0;
    uVar10 = (int)(((int)(local_38 + 7U) >> 0x1f & 7U) + (local_38 + 7U & 0xfffffff8)) >> 3;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0x80000000;
    if (0 < (int)uVar10) {
      FUN_0100a210(&PTR_vftable_018e9b8c,&local_30,((int)uVar10 < 0) - 1 & uVar10,1);
    }
    local_2c = uVar10;
    FUN_01109630(local_30);
    FUN_01016f90(local_30,local_2c);
    local_2c = 0;
    if (-1 < (int)local_28) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_30,local_28 & 0x3fffffff);
    }
    piVar6 = param_1;
    iVar9 = 0;
    if (0 < (int)local_10) {
      do {
        if (*(char *)(local_3c + iVar9) != '\0') {
          param_1 = (int *)(**(code **)(*(int *)*piVar6 + 0x28))(*(undefined4 *)(iVar8 + local_24));
          if (param_1 != (int *)0x0) {
            *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
            param_1[2] = param_1[2] + 1;
          }
          FUN_0110a8c0(&param_1,param_2);
          if (param_1 != (int *)0x0) {
            *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1;
            piVar2 = param_1 + 2;
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              (**(code **)*param_1)(1);
            }
          }
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + 0x10;
      } while (iVar9 < (int)local_10);
    }
    if (-1 < (int)local_34) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_3c,local_34 & 0x3fffffff);
    }
    local_20 = (int *)0x0;
    if (-1 < local_1c) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_24,local_1c << 4);
      return;
    }
    break;
  case 7:
    iVar8 = 0;
    if (0 < (int)param_2) {
      do {
        piVar6 = (int *)(**(code **)(*(int *)*param_1 + 0x5c))(iVar8);
        if (piVar6 != (int *)0x0) {
          *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + 1;
          piVar6[2] = piVar6[2] + 1;
        }
        local_10 = piVar6;
        FUN_011090a0(&local_10);
        if (piVar6 != (int *)0x0) {
          *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + -1;
          piVar2 = piVar6 + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*piVar6)(1);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)param_2);
      return;
    }
    break;
  case 8:
    if (0 < (int)param_2) {
      iVar8 = 0;
      do {
        local_10 = (int *)(**(code **)(*(int *)*param_1 + 100))(iVar8);
        if (local_10 != (int *)0x0) {
          *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + 1;
          local_10[2] = local_10[2] + 1;
        }
        iVar9 = (**(code **)(*local_10 + 0x14))();
        FUN_01107dd0(iVar9,iVar9 >> 0x1f);
        FUN_0110a8c0(&local_10,iVar9);
        if (local_10 != (int *)0x0) {
          *(short *)((int)local_10 + 6) = *(short *)((int)local_10 + 6) + -1;
          piVar6 = local_10 + 2;
          *piVar6 = *piVar6 + -1;
          if (*piVar6 == 0) {
            (**(code **)*local_10)(1);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)param_2);
    }
    break;
  case 9:
    if (((iVar8 == 9) && (*(int *)piVar2[1] == 3)) &&
       (((iVar8 = piVar2[2], iVar8 == 4 || ((iVar8 == 8 || (iVar8 == 0xc)))) || (iVar8 == 0x10)))) {
      iVar8 = FUN_010e0cc0();
      fVar1 = param_2;
      if (iVar8 == 4) {
        iVar9 = 0;
        iVar8 = 3;
        if (0 < (int)param_2) {
          iVar8 = 3;
          do {
            iVar4 = (**(code **)(*(int *)*param_1 + 0x2c))(iVar9);
            if (*(float *)(iVar4 + 0xc) != (float)(undefined *)0x0) {
              iVar8 = 4;
              break;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)fVar1);
        }
        FUN_01107dd0(iVar8,0);
      }
      iVar9 = 0;
      if (0 < (int)fVar1) {
        do {
          uVar3 = (**(code **)(*(int *)*param_1 + 0x2c))(iVar9);
          FUN_010172c0(uVar3,iVar8);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)fVar1);
        return;
      }
    }
  }
  return;
}

// 0110AF10  FUN_0110af10  size=777  [run]
void FUN_0110af10(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined8 uVar9;
  int *local_c;
  int local_8;
  
  puVar7 = param_1;
  param_1 = (int *)FUN_010e5220();
  iVar4 = *param_1;
  if ((iVar4 == 9) &&
     ((*(int *)param_1[1] != 3 ||
      ((((iVar1 = param_1[2], iVar1 != 4 && (iVar1 != 8)) && (iVar1 != 0xc)) && (iVar1 != 0x10))))))
  {
    piVar2 = (int *)(**(code **)(*(int *)*puVar7 + 0x28))(puVar7[1]);
    if (piVar2 != (int *)0x0) {
      *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
      piVar2[2] = piVar2[2] + 1;
    }
    param_1 = piVar2;
    uVar3 = (**(code **)(*piVar2 + 0x14))();
    FUN_0110a8c0(&param_1,uVar3);
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
    piVar5 = piVar2 + 2;
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      (**(code **)*piVar2)(1);
      return;
    }
  }
  else {
    if (iVar4 == 8) {
      piVar2 = (int *)(**(code **)(*(int *)*puVar7 + 0x28))(puVar7[1]);
      if (piVar2 != (int *)0x0) {
        *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
        piVar2[2] = piVar2[2] + 1;
      }
      local_c = piVar2;
      local_8 = (**(code **)(*piVar2 + 0x14))();
      FUN_01107dd0(local_8,local_8 >> 0x1f);
      if ((**(int **)(*(int *)((int)param_2 + 8) + 4) == 6) && (iVar4 = FUN_010e0cd0(), iVar4 == 0))
      {
        param_1 = (int *)param_1[1];
        piVar5 = (int *)(**(code **)(*(int *)*puVar7 + 8))();
        piVar5 = (int *)(**(code **)(*piVar5 + 4))();
        param_2 = (undefined4 *)*piVar5;
        uVar3 = FUN_010e0cd0();
        piVar5 = (int *)(**(code **)((int)param_2 + 0x24))(uVar3);
        uVar3 = (**(code **)(*piVar5 + 8))();
        iVar4 = FUN_01025be0(uVar3,0);
        FUN_01107dd0(iVar4,iVar4 >> 0x1f);
      }
      FUN_0110a8c0(&local_c,local_8);
      *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
      piVar5 = piVar2 + 2;
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        (**(code **)*piVar2)(1);
        return;
      }
    }
    else {
      switch(iVar4) {
      case 2:
        uVar3 = (**(code **)(*(int *)*puVar7 + 0x30))(puVar7[1]);
        FUN_01016df0(uVar3);
        return;
      case 3:
        fVar8 = (float10)(**(code **)(*(int *)*puVar7 + 0x3c))(puVar7[1]);
        param_2 = (undefined4 *)(float)fVar8;
        FUN_01017180(param_2);
        return;
      case 4:
        uVar9 = (**(code **)(*(int *)*puVar7 + 0x30))(puVar7[1]);
        FUN_01107dd0(uVar9);
        return;
      case 5:
        uVar3 = (**(code **)(*(int *)*puVar7 + 0x2c))(puVar7[1]);
        FUN_01109020(uVar3);
        break;
      case 6:
        param_1 = (int *)(**(code **)(*(int *)*puVar7 + 0x34))(puVar7[1]);
        if (param_1 != (undefined4 *)0x0) {
          *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
          param_1[2] = param_1[2] + 1;
        }
        FUN_01108990(&param_1);
        if (param_1 != (undefined4 *)0x0) {
          *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + -1;
          piVar2 = param_1 + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*param_1)(1);
            return;
          }
        }
        break;
      case 7:
        puVar7 = (undefined4 *)(**(code **)(*(int *)*puVar7 + 0x34))(puVar7[1]);
        if (puVar7 != (undefined4 *)0x0) {
          *(short *)((int)puVar7 + 6) = *(short *)((int)puVar7 + 6) + 1;
          puVar7[2] = puVar7[2] + 1;
        }
        param_2 = puVar7;
        FUN_011090a0(&param_2);
        if (puVar7 != (undefined4 *)0x0) {
          *(short *)((int)puVar7 + 6) = *(short *)((int)puVar7 + 6) + -1;
          piVar2 = puVar7 + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*puVar7)(1);
            return;
          }
        }
        break;
      case 9:
        if (((iVar4 == 9) && (*(int *)param_1[1] == 3)) &&
           (((iVar4 = param_1[2], iVar4 == 4 || ((iVar4 == 8 || (iVar4 == 0xc)))) || (iVar4 == 0x10)
            ))) {
          uVar3 = FUN_010e0cc0();
          uVar6 = (**(code **)(*(int *)*puVar7 + 0x38))(puVar7[1],uVar3);
          FUN_010172c0(uVar6,uVar3);
          return;
        }
      }
    }
  }
  return;
}

// 0110B240  FUN_0110b240  size=431  [run]
void __thiscall FUN_0110b240(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  int *local_10;
  int local_c;
  int local_8;
  
  local_8 = param_1;
  local_10 = (int *)(**(code **)(*(int *)*param_2 + 8))();
  local_c = (**(code **)(*local_10 + 0x24))();
  FUN_01109a00(local_c);
  iVar5 = *(int *)(param_1 + 0x40) + *(int *)(param_3 + 8);
  uVar3 = (int)(((int)(local_28 + 7U) >> 0x1f & 7U) + (local_28 + 7U & 0xfffffff8)) >> 3;
  FUN_01016f90(iVar5,uVar3);
  FUN_01109520(iVar5,uVar3);
  if (-1 < (int)(uVar3 | 0x80000000)) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(iVar5,uVar3 & 0x3fffffff);
  }
  iVar5 = local_c;
  iVar4 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x80000000;
  if (local_c == 0) {
    local_20 = 0;
  }
  else {
    param_3 = local_c << 4;
    local_20 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_3);
    local_18 = (int)(param_3 + (param_3 >> 0x1f & 0xfU)) >> 4;
    if (local_18 != 0) goto LAB_0110b310;
  }
  local_18 = -0x80000000;
LAB_0110b310:
  local_1c = iVar5;
  if (0 < iVar5) {
    puVar1 = (undefined4 *)(local_20 + 8);
    iVar2 = iVar5;
    do {
      if (puVar1 != (undefined4 *)&DAT_00000008) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(*local_10 + 0x30))(&local_20);
  if (0 < iVar5) {
    iVar5 = 0;
    do {
      puVar1 = (undefined4 *)(iVar5 + local_20);
      if (*(char *)(local_2c + iVar4) != '\0') {
        (**(code **)(*(int *)*param_2 + 0xc))(local_14,*puVar1);
        FUN_0110af10(local_14,puVar1);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar4 < local_c);
  }
  local_1c = 0;
  if (-1 < local_18) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_20,local_18 << 4);
  }
  local_20 = 0;
  local_18 = 0x80000000;
  if (-1 < (int)local_24) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_2c,local_24 & 0x3fffffff);
  }
  return;
}

// 0110B3F0  FUN_0110b3f0  size=42  [run]
void __thiscall FUN_0110b3f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  return;
}

// 0110B420  FUN_0110b420  size=153  [run]
void __fastcall FUN_0110b420(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  LPVOID pvVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x10) + iVar5 * 4);
      if (piVar2 != (int *)0x0) {
        puVar3 = (undefined4 *)*piVar2;
        if (puVar3 != (undefined4 *)0x0) {
          *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1;
          piVar1 = puVar3 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*puVar3)(1);
          }
        }
        pvVar4 = TlsGetValue(DAT_01f8fc4c);
        (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 8))(piVar2,4);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < *(int *)(param_1 + 0x18)) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))
              (*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 0x18) * 4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  FUN_011084b0(&PTR_vftable_018e9b94);
  return;
}

// 0110B4C0  FUN_0110b4c0  size=356  [run]
uint __thiscall FUN_0110b4c0(uint param_1,uint param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  hkOArchive::hkOArchive_4(param_2,param_1 & 0xffffff00);
  uVar2 = param_2 >> 8;
  param_2 = uVar2 << 8;
  FUN_01025830(param_2);
  param_2 = uVar2 << 8;
  FUN_01025830(param_2);
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x80000000;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  piVar1 = (int *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0x80000000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_4 + 2);
  FUN_01025470(&DAT_016416fa,0);
  FUN_01025470(&DAT_016416fa,0);
  FUN_01108180(&PTR_vftable_018e9b94,0,0,0);
  uVar2 = *(uint *)(param_1 + 0x48) & 0x3fffffff;
  if (uVar2 < 0x200) {
    uVar3 = uVar2 * 2;
    if (uVar2 == 0x100 || uVar3 < 0x200) {
      uVar3 = 0x200;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1 + 0x40,uVar3,1);
  }
  uVar2 = *(uint *)(param_1 + 0x54) & 0x3fffffff;
  if (uVar2 < 0x80) {
    uVar3 = uVar2 * 2;
    if (uVar2 == 0x40 || uVar3 < 0x80) {
      uVar3 = 0x80;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,piVar1,uVar3,0x10);
  }
  if (*(uint *)(param_1 + 0x50) == (*(uint *)(param_1 + 0x54) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b8c,piVar1,0x10);
  }
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x50) * 0x10 + *piVar1);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  puVar4[2] = 0xffffffff;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[3] = 0;
  return param_1;
}

// 0110B630  FUN_0110b630  size=147  [run]
void __fastcall FUN_0110b630(int param_1)

{
  FUN_0110b420();
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (-1 < *(int *)(param_1 + 0x54)) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))
              (*(undefined4 *)(param_1 + 0x4c),*(int *)(param_1 + 0x54) << 4);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x48)) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))
              (*(undefined4 *)(param_1 + 0x40),*(uint *)(param_1 + 0x48) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x80000000;
  FUN_011084b0(&PTR_vftable_018e9b94);
  FUN_01025870();
  FUN_01025870();
  hkBaseObject::hkBaseObject_129();
  return;
}

// 0110B6D0  FUN_0110b6d0  size=180  [run]
void __thiscall FUN_0110b6d0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  int *local_8;
  
  FUN_011089f0(&local_8,param_2);
  local_14 = 0;
  local_10 = 0;
  if (local_8 == (int *)0x0) {
    puVar2 = &local_14;
  }
  else {
    puVar2 = (undefined4 *)(**(code **)(*local_8 + 4))(local_c);
  }
  iVar3 = FUN_01108290(*puVar2,puVar2[1],0xffffffff);
  iVar1 = *(int *)(param_1 + 0x4c);
  FUN_01016df0(8);
  piVar4 = (int *)(**(code **)(*local_8 + 8))();
  iVar6 = 0;
  if (piVar4 != (int *)0x0) {
    uVar5 = (**(code **)(*piVar4 + 8))();
    iVar6 = FUN_01025be0(uVar5,0xffffffff);
  }
  FUN_01107dd0(iVar6,iVar6 >> 0x1f);
  FUN_0110b240(param_2,iVar3 * 0x10 + iVar1);
  *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
  piVar4 = local_8 + 2;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    (**(code **)*local_8)(1);
  }
  return;
}

// 0110B790  FUN_0110b790  size=198  [run]
undefined4 __thiscall FUN_0110b790(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *local_8;
  
  local_8 = param_1;
  piVar2 = (int *)(**(code **)(*(int *)*param_2 + 8))();
  piVar2 = (int *)(**(code **)(*piVar2 + 4))();
  FUN_01017100(0xcab00d1e);
  FUN_01017100(0xd011face);
  FUN_01016df0(2);
  FUN_01016df0(6);
  FUN_0110a4f0(piVar2,param_2,0);
  iVar3 = 1;
  if (1 < (int)param_1[0x14]) {
    param_2 = (undefined4 *)0x10;
    do {
      if (*(int *)(param_1[0x13] + (int)param_2 + 0xc) != -1) {
        (**(code **)(*piVar2 + 0x28))(&local_8,param_1[0x13] + (int)param_2);
        FUN_0110b6d0(&local_8);
        if (local_8 != (undefined4 *)0x0) {
          *(short *)((int)local_8 + 6) = *(short *)((int)local_8 + 6) + -1;
          piVar1 = local_8 + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            (**(code **)*local_8)(1);
          }
        }
      }
      param_2 = (undefined4 *)((int)param_2 + 0x10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x14]);
  }
  FUN_01016df0(0xe);
  return 0;
}

// 0110B860  FUN_0110b860  size=352  [run]
undefined4 FUN_0110b860(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_1c;
  undefined4 local_c;
  
  if (param_1 == (int *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Pointer is null";
    }
    return 1;
  }
  FUN_01015ea0(&local_44,0xffffffff,0x40);
  local_44 = 0x57e0e057;
  local_40 = 0x10c0c010;
  local_1c = 0;
  local_c = 0;
  if ((*param_1 != 0x57e0e057) || (param_1[1] != 0x10c0c010)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Missing packfile magic header. Is this from a binary file?";
    }
    return 1;
  }
  if ((char)param_1[4] != (char)DAT_01b1dc08) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Trying to process a binary file with a different pointer size than this platform."
      ;
    }
    return 1;
  }
  if (*(char *)((int)param_1 + 0x11) != (char)((uint)DAT_01b1dc08 >> 8)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Trying to process a binary file with a different endian than this platform.";
    }
    return 1;
  }
  if (*(char *)((int)param_1 + 0x12) != DAT_01b1dc08._2_1_) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 
      "Trying to process a binary file with a different padding optimization than this platform.";
    }
    return 1;
  }
  if (*(char *)((int)param_1 + 0x13) != DAT_01b1dc08._3_1_) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 
      "Trying to process a binary file with a different empty base class optimization than this platform."
      ;
    }
    return 1;
  }
  if (((uint)param_1 & 3) != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Packfile data source needs to be 4 byte aligned";
    }
    return 1;
  }
  if ((char)param_1[10] == -1) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Packfile file format is too old";
    }
    return 1;
  }
  uVar1 = FUN_010e0a10();
  iVar2 = FUN_01015b90(param_1 + 10,uVar1);
  if (iVar2 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = "Packfile contents are not up to date";
    }
    return 1;
  }
  return 0;
}

// 0110B9C0  FUN_0110b9c0  size=251  [run]
int FUN_0110b9c0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  local_18 = 0;
  local_14 = 0;
  if (iVar1 < 1) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x40;
  }
  iVar2 = 0;
  local_8 = 0;
  local_10 = 0;
  local_c = 0;
  if (1 < iVar1) {
    piVar3 = (int *)(param_1 + 0x54);
    iVar5 = (iVar1 - 2U >> 1) + 1;
    iVar2 = iVar5 * 2;
    do {
      iVar4 = iVar4 + (piVar3[-0xc] - piVar3[-0xd]) / 0xc;
      local_10 = local_10 + ((piVar3[-0xf] + piVar3[-10]) - piVar3[-0xc]);
      local_8 = local_8 + (*piVar3 - piVar3[-1]) / 0xc;
      local_c = local_c + ((piVar3[-3] + piVar3[2]) - *piVar3);
      piVar3 = piVar3 + 0x18;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (iVar2 < iVar1) {
    iVar2 = iVar2 * 0x30;
    iVar5 = param_1 + iVar2;
    local_14 = (*(int *)(param_1 + 0x24 + iVar2) - *(int *)(param_1 + 0x20 + iVar2)) / 0xc;
    local_18 = (*(int *)(iVar5 + 0x2c) + *(int *)(iVar5 + 0x18)) - *(int *)(iVar5 + 0x24);
  }
  return local_c + (local_8 + (iVar1 * 3 + 3) * 2 + iVar4 + local_14) * 8 + local_10 + local_18;
}

// 0110BAC0  FUN_0110bac0  size=82  [run]
int FUN_0110bac0(int *param_1,int param_2)

{
  if ((((param_1 != (int *)0x0) && (0x3f < param_2)) && (*param_1 == 0x57e0e057)) &&
     (((param_1[1] == 0x10c0c010 && (0 < param_1[5])) &&
      ((param_1[5] * 0x30 + 0x40 <= param_2 &&
       (param_1[param_1[8] * 0xc + 0x15] + param_1[9] <= param_2)))))) {
    return (int)param_1 + param_1[param_1[8] * 0xc + 0x15] + param_1[9];
  }
  return 0;
}

// 0110BB20  FUN_0110bb20  size=31  [run]
int __thiscall FUN_0110bb20(int param_1,int param_2,int param_3)

{
  int in_EAX;
  
  if (*(int *)(param_1 + 0x18 + in_EAX * 0x30) != 0) {
    return *(int *)(param_1 + 0x14 + in_EAX * 0x30) + param_2 + param_3;
  }
  return 0;
}

// 0110BB40  FUN_0110bb40  size=150  [run]
void FUN_0110bb40(int param_1,int param_2,int param_3)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_01015e80();
  *(undefined1 *)(unaff_EDI + 0x13) = *(undefined1 *)(unaff_ESI + 0x13);
  *(int *)(unaff_EDI + 0x14) = param_1;
  *(undefined4 *)(unaff_EDI + 0x18) = *(undefined4 *)(unaff_ESI + 0x18);
  *(undefined4 *)(unaff_EDI + 0x1c) = *(undefined4 *)(unaff_ESI + 0x18);
  *(undefined4 *)(unaff_EDI + 0x20) = *(undefined4 *)(unaff_ESI + 0x18);
  param_1 = param_1 + param_3;
  *(undefined4 *)(unaff_EDI + 0x24) = *(undefined4 *)(unaff_ESI + 0x18);
  *(int *)(unaff_EDI + 0x28) =
       (*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x24)) + *(int *)(unaff_ESI + 0x28);
  *(int *)(unaff_EDI + 0x2c) =
       (*(int *)(unaff_ESI + 0x18) - *(int *)(unaff_ESI + 0x24)) + *(int *)(unaff_ESI + 0x2c);
  param_2 = *(int *)(unaff_ESI + 0x14) + param_2;
  FUN_01015e80(param_1,param_2,*(undefined4 *)(unaff_ESI + 0x18));
  FUN_01015e80(*(int *)(unaff_EDI + 0x24) + param_1,*(int *)(unaff_ESI + 0x24) + param_2,
               *(int *)(unaff_ESI + 0x28) - *(int *)(unaff_ESI + 0x24));
  FUN_01015e80(*(int *)(unaff_EDI + 0x28) + param_1,*(int *)(unaff_ESI + 0x28) + param_2,
               *(int *)(unaff_ESI + 0x2c) - *(int *)(unaff_ESI + 0x28));
  return;
}

// 0110BBE0  FUN_0110bbe0  size=82  [run]
void __thiscall FUN_0110bbe0(int param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x1c) - *(int *)(unaff_EDI + 0x18);
  param_2 = *(int *)(unaff_EDI + 0x14) + *(int *)(unaff_EDI + 0x18) + param_2;
  iVar2 = 0;
  if (0 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) {
    do {
      iVar1 = *(int *)(param_2 + iVar2 * 4);
      if (iVar1 != -1) {
        *(int *)(iVar1 + param_1 + in_EAX) = *(int *)(param_2 + 4 + iVar2 * 4) + param_1 + in_EAX;
      }
      iVar1 = *(int *)(unaff_EDI + 0x1c) - *(int *)(unaff_EDI + 0x18);
      iVar2 = iVar2 + 2;
    } while (iVar2 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
  }
  return;
}

// 0110BC40  FUN_0110bc40  size=120  [run]
void FUN_0110bc40(int param_1,int param_2,int param_3)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_ESI;
  
  iVar1 = *(int *)(in_EAX + 0x14);
  iVar2 = *(int *)(unaff_ESI + 0x20) - *(int *)(unaff_ESI + 0x1c);
  iVar4 = 0;
  if (0 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2) {
    piVar3 = (int *)(*(int *)(unaff_ESI + 0x14) + *(int *)(unaff_ESI + 0x1c) + param_1 + 8);
    do {
      if (piVar3[-2] != -1) {
        if (*(int *)(param_3 + 0x18 + piVar3[-1] * 0x30) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_3 + 0x14 + piVar3[-1] * 0x30) + *piVar3 + param_2;
        }
        *(int *)(piVar3[-2] + iVar1 + param_2) = iVar2;
      }
      iVar2 = *(int *)(unaff_ESI + 0x20) - *(int *)(unaff_ESI + 0x1c);
      iVar4 = iVar4 + 3;
      piVar3 = piVar3 + 3;
    } while (iVar4 < (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  }
  return;
}

// 0110BCC0  FUN_0110bcc0  size=152  [run]
void FUN_0110bcc0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_1 + 0x40;
  }
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar2 = (int *)(iVar1 + 0x24);
    do {
      iVar1 = *piVar2 - piVar2[-1];
      if (iVar1 != 0) {
        iVar3 = piVar2[-4] + piVar2[-1] + param_1;
        iVar4 = 0;
        if (0 < (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2) {
          do {
            iVar1 = *(int *)(iVar3 + iVar4 * 4);
            if ((iVar1 != -1) && (*(int *)(iVar3 + 8 + iVar4 * 4) != 0)) {
              FUN_0102cc00(piVar2[-4] + iVar1 + param_1);
            }
            iVar4 = iVar4 + 3;
          } while (iVar4 < (int)((*piVar2 - piVar2[-1]) + (*piVar2 - piVar2[-1] >> 0x1f & 3U)) >> 2)
          ;
        }
      }
      local_8 = local_8 + 1;
      piVar2 = piVar2 + 0xc;
    } while (local_8 < *(int *)(param_1 + 0x14));
  }
  return;
}

// 0110BD60  FUN_0110bd60  size=81  [run]
void FUN_0110bd60(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  
  iVar1 = param_1;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    param_1 = 0;
    do {
      iVar2 = *(int *)(*(int *)(iVar1 + 0x14) + param_1 + 0x14) + iVar1;
      FUN_010fb110(iVar2,param_2);
      FUN_010fb1b0(iVar2,param_3);
      param_1 = param_1 + 0x30;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(iVar1 + 0x18));
  }
  return;
}

// 0110BDC0  FUN_0110bdc0  size=79  [run]
void FUN_0110bdc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x14) < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + 0x40;
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar2 = *(int *)(iVar3 + 0x14) + param_1;
      FUN_010fb110(iVar2,param_2);
      FUN_010fb1b0(iVar2,param_3);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x30;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  return;
}

// 0110BE10  FUN_0110be10  size=432  [run]
void FUN_0110be10(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,
                 int *param_7,int *param_8,int *param_9)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int local_10;
  
  iVar4 = *(int *)(param_2 + 0x14);
  iVar5 = *(int *)(param_4 + 4);
  iVar6 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
  iVar9 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x20) + param_3;
  local_10 = 0;
  if (0 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2) {
    piVar10 = (int *)(iVar9 + 8);
    param_3 = 8;
    do {
      iVar6 = piVar10[-2];
      if (iVar6 != -1) {
        if (*(int *)(param_5 + 0x18 + piVar10[-1] * 0x30) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(param_5 + 0x14 + piVar10[-1] * 0x30) + param_4 + *piVar10;
        }
        iVar1 = iVar6 + iVar4 + param_4;
        puVar8 = (undefined4 *)(**(code **)(*param_7 + 0x10))(iVar1,iVar7);
        if (puVar8 != (undefined4 *)0x0) {
          if (param_6 == (int *)0x0) {
            iVar6 = *(int *)(param_2 + 0x20) + param_4 + *(int *)(param_2 + 0x14);
            *(undefined4 *)((int)piVar10 + iVar6 + (-4 - iVar9)) = 0;
            *(undefined4 **)(param_3 + iVar6) = puVar8;
          }
          else {
            iVar7 = *(int *)(param_2 + 0x14);
            if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_6,8);
            }
            puVar2 = (undefined4 *)(*param_6 + param_6[1] * 8);
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = puVar8;
              puVar2[1] = iVar7 + iVar6;
            }
            param_6[1] = param_6[1] + 1;
            if (iVar1 == iVar5 + param_4) {
              *(undefined4 **)(param_4 + 0x20) = puVar8;
            }
          }
          if (((param_8 != (int *)0x0) &&
              (iVar6 = (**(code **)(*param_8 + 0x10))(*puVar8), iVar6 != 0)) &&
             (iVar7 = FUN_01009990("hk.PostFinish"), iVar7 != 0)) {
            if (param_9[1] == (param_9[2] & 0x3fffffffU)) {
              FUN_0100a290(&PTR_vftable_018e9b94,param_9,8);
            }
            piVar3 = (int *)(*param_9 + param_9[1] * 8);
            *piVar3 = iVar1;
            piVar3[1] = iVar6;
            param_9[1] = param_9[1] + 1;
          }
        }
      }
      iVar6 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
      param_3 = param_3 + 0xc;
      local_10 = local_10 + 3;
      piVar10 = piVar10 + 3;
    } while (local_10 < (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2);
  }
  return;
}

// 0110BFC0  FUN_0110bfc0  size=566  [run]
int FUN_0110bfc0(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  puVar2 = param_3;
  iVar6 = param_1;
  if (*(int *)(param_1 + 0x14) < 1) {
    local_8 = 0;
  }
  else {
    local_8 = param_1 + 0x40;
  }
  *param_3 = 0xd5109142;
  if (param_3 + 5 != (undefined4 *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x14);
    param_3[6] = uVar1;
    param_3[5] = param_3 + 0xc;
    param_3[7] = uVar1 | 0x80000000;
  }
  piVar7 = (int *)(param_1 + 0x14);
  param_1 = (*piVar7 * 3 + 3) * 0x10;
  local_c = 0;
  if (0 < *piVar7) {
    local_10 = (int *)0x0;
    do {
      local_14 = param_3[5] + (int)local_10;
      FUN_0110bb40(param_1,iVar6,param_3);
      if (local_c == *(int *)(iVar6 + 0x18)) {
        param_3[1] = *(int *)(iVar6 + 0x1c) + param_1;
      }
      FUN_0110bbe0(iVar6);
      param_1 = param_1 + *(int *)(local_14 + 0x2c);
      local_10 = local_10 + 0xc;
      local_c = local_c + 1;
    } while (local_c < *(int *)(iVar6 + 0x14));
  }
  param_3 = (undefined4 *)0x0;
  if (0 < *(int *)(iVar6 + 0x14)) {
    local_10 = (int *)(local_8 + 0x1c);
    local_14 = -0x1c - local_8;
    do {
      if (local_10[1] != *local_10) {
        FUN_0110bc40(iVar6,puVar2,puVar2[5]);
      }
      param_3 = (undefined4 *)((int)param_3 + 1);
      local_10 = local_10 + 0xc;
    } while ((int)param_3 < *(int *)(iVar6 + 0x14));
  }
  if (puVar2 + 2 != (int *)0x0) {
    puVar2[2] = param_1 + (int)puVar2;
    puVar2[3] = 0;
    puVar2[4] = param_4 - param_1 | 0x80000000;
  }
  if (param_5 == 0) {
    param_5 = (**(code **)(*DAT_0209b610 + 0xc))();
  }
  uVar3 = (**(code **)(*DAT_0209b610 + 0x10))();
  puVar2[8] = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = -0x80000000;
  param_1 = 0;
  if (0 < *(int *)(iVar6 + 0x14)) {
    piVar7 = (int *)(local_8 + 0x20);
    iVar5 = -0x20 - local_8;
    local_14 = iVar5;
    do {
      if (piVar7[1] != *piVar7) {
        FUN_0110be10(piVar7 + -8,(int)piVar7 + puVar2[5] + iVar5,iVar6,puVar2,puVar2[5],puVar2 + 2,
                     param_5,uVar3,&local_20);
        iVar5 = local_14;
      }
      param_1 = param_1 + 1;
      piVar7 = piVar7 + 0xc;
    } while (param_1 < *(int *)(iVar6 + 0x14));
  }
  iVar6 = 0;
  if (0 < local_1c) {
    do {
      uVar3 = *(undefined4 *)(local_20 + iVar6 * 8);
      puVar4 = (undefined4 *)FUN_01009990("hk.PostFinish");
      (**(code **)*puVar4)(uVar3);
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_1c);
  }
  iVar6 = puVar2[1];
  local_1c = 0;
  if (-1 < local_18) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_20,local_18 * 8);
  }
  return iVar6 + (int)puVar2;
}

// 0110C200  FUN_0110c200  size=412  [run]
int FUN_0110c200(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar4 = 0;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  iVar2 = FUN_0110b860(param_1,param_4);
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x14) < 1) {
      param_4 = (undefined4 *)0x0;
    }
    else {
      param_4 = (undefined4 *)(param_1 + 0x40);
    }
    if ((*(uint *)(param_1 + 0x38) & 1) == 0) {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 1;
      local_c = -1;
      iVar2 = (int)param_4;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          local_8 = *(int *)(iVar2 + 0x14);
          FUN_01015b90(iVar2,"__types__");
          if (iVar4 == *(int *)(param_1 + 0x18)) {
            local_c = *(int *)(param_1 + 0x1c) + local_8;
          }
          FUN_0110bbe0(param_1);
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + 0x30;
        } while (iVar4 < *(int *)(param_1 + 0x14));
      }
      iVar2 = 0;
      iVar4 = (int)param_4;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          if (*(int *)(iVar4 + 0x20) != *(int *)(iVar4 + 0x1c)) {
            FUN_0110bc40(param_1,param_1,param_4);
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 0x30;
        } while (iVar2 < *(int *)(param_1 + 0x14));
      }
      if (param_3 == 0) {
        param_3 = (**(code **)(*DAT_0209b610 + 0xc))();
      }
      local_8 = param_3;
      local_10 = (**(code **)(*DAT_0209b610 + 0x10))();
      iVar2 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = -0x80000000;
      iVar4 = (int)param_4;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          if (*(int *)(iVar4 + 0x24) != *(int *)(iVar4 + 0x20)) {
            FUN_0110be10(iVar4,iVar4,param_1,param_1,param_4,0,local_8,local_10,&local_1c);
          }
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 0x30;
        } while (iVar2 < *(int *)(param_1 + 0x14));
      }
      iVar4 = 0;
      if (0 < local_18) {
        do {
          uVar1 = *(undefined4 *)(local_1c + iVar4 * 8);
          puVar3 = (undefined4 *)FUN_01009990("hk.PostFinish");
          (**(code **)*puVar3)(uVar1);
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_18);
      }
      param_1 = param_1 + local_c;
      local_18 = 0;
      if (-1 < local_14) {
        (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_1c,local_14 * 8);
      }
      return param_1;
    }
  }
  return 0;
}

// 0110C3A0  LOCALNAMESPACE::hkNativeResource::hkNativeResource_2  size=235  [run]
undefined4 *
LOCALNAMESPACE::hkNativeResource::hkNativeResource_2
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  uVar2 = FUN_0110b9c0(param_1,param_2);
  if (0 < (int)uVar2) {
    FUN_0100a210(&PTR_vftable_018e9b94,&local_10,((int)uVar2 < 0) - 1 & uVar2,1);
  }
  local_c = uVar2;
  uVar3 = FUN_0110bfc0(param_1,param_2,local_10,uVar2,param_3);
  pvVar4 = TlsGetValue(DAT_01f8fc4c);
  puVar5 = (undefined4 *)(**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x1c);
  *(undefined2 *)(puVar5 + 1) = 0x1c;
  uVar1 = **(undefined4 **)(local_10 + 0x20);
  *(undefined2 *)((int)puVar5 + 6) = 1;
  *puVar5 = vftable;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0x80000000;
  puVar5[5] = uVar3;
  puVar5[6] = uVar1;
  FUN_0110c5f0(&local_10);
  local_c = 0;
  if (-1 < (int)local_8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_10,local_8 & 0x3fffffff);
  }
  return puVar5;
}

// 0110C490  FUN_0110c490  size=167  [run]
void FUN_0110c490(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = 0;
  uVar1 = param_1[2];
  if (uVar1 < uVar1 + param_1[3] * 8) {
    do {
      FUN_0102cc00(*(int *)(uVar1 + 4) + (int)param_1);
      uVar1 = uVar1 + 8;
    } while (uVar1 < (uint)(param_1[2] + param_1[3] * 8));
  }
  param_1[6] = 0;
  if ((param_1[7] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],(param_1[7] & 0x3fffffff) * 0x30);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[3] = 0;
  if ((param_1[4] & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 8);
  }
  param_1[4] = 0x80000000;
  param_1[2] = 0;
  return;
}

// 0110C540  FUN_0110c540  size=8  [run]
undefined4 FUN_0110c540(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0110C550  FUN_0110c550  size=8  [run]
undefined4 FUN_0110c550(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 0110C560  FUN_0110c560  size=32  [run]
void __thiscall FUN_0110c560(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0110C5B0  FUN_0110c5b0  size=32  [run]
void __thiscall FUN_0110c5b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0110C5D0  FUN_0110c5d0  size=18  [run]
int __thiscall FUN_0110c5d0(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 0110C5F0  FUN_0110c5f0  size=44  [run]
void __thiscall FUN_0110c5f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  param_2[2] = uVar1;
  return;
}

// 0110C630  FUN_0110c630  size=28  [run]
void __thiscall FUN_0110c630(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 8);
  return;
}

// 0110C650  FUN_0110c650  size=11  [run]
int FUN_0110c650(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0110C670  FUN_0110c670  size=32  [run]
void __thiscall FUN_0110c670(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0110C690  FUN_0110c690  size=32  [run]
void __thiscall FUN_0110c690(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0110C6B0  FUN_0110c6b0  size=40  [run]
void FUN_0110c6b0(undefined4 *param_1,int param_2,undefined4 *param_3)

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

// 0110C6F0  FUN_0110c6f0  size=37  [run]
void FUN_0110c6f0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0110C720  FUN_0110c720  size=67  [run]
void __thiscall FUN_0110c720(int *param_1,undefined4 param_2,undefined4 *param_3)

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

// 0110C770  FUN_0110c770  size=63  [run]
void __thiscall FUN_0110c770(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0110C7B0  FUN_0110c7b0  size=68  [run]
void __thiscall FUN_0110c7b0(int *param_1,undefined4 *param_2)

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

// 0110C800  FUN_0110c800  size=63  [run]
void __fastcall FUN_0110c800(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0110C840  LOCALNAMESPACE::hkNativeResource::hkNativeResource  size=72  [run]
undefined4 * __thiscall
LOCALNAMESPACE::hkNativeResource::hkNativeResource
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  param_1[5] = param_3;
  param_1[6] = param_4;
  FUN_0110c5f0(param_2);
  return param_1;
}

// 0110C890  LOCALNAMESPACE::hkNativeResource::vf0C  size=6  [run]
char * LOCALNAMESPACE::hkNativeResource::vf0C(void)

{
  return "hkNativeResource";
}

// 0110C8A0  LOCALNAMESPACE::hkNativeResource::vf1C  size=4  [run]
undefined4 __fastcall LOCALNAMESPACE::hkNativeResource::vf1C(int param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}

// 0110C8B0  LOCALNAMESPACE::hkNativeResource::vf18  size=109  [run]
undefined4 __thiscall LOCALNAMESPACE::hkNativeResource::vf18(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = param_2;
  if (param_2 != 0) {
    piVar1 = (int *)(**(code **)(*DAT_0209b610 + 0x10))();
    iVar2 = (**(code **)(*piVar1 + 0x10))(*(undefined4 *)(param_1 + 0x18));
    iVar3 = (**(code **)(*piVar1 + 0x10))(iVar3);
    if (((iVar2 != 0) && (iVar3 != 0)) &&
       (pcVar4 = (char *)FUN_010093e0((int)&param_2 + 3,iVar2), *pcVar4 == '\0')) {
      return 0;
    }
  }
  return *(undefined4 *)(param_1 + 0x14);
}

// 0110C920  LOCALNAMESPACE::hkNativeResource::vf14  size=27  [run]
void __thiscall
LOCALNAMESPACE::hkNativeResource::vf14(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0110bd60(*(undefined4 *)(param_1 + 8),param_3,param_2);
  return;
}

// 0110C940  FUN_0110c940  size=63  [run]
void __fastcall FUN_0110c940(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0110C980  FUN_0110c980  size=113  [run]
void __fastcall FUN_0110c980(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x1c)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x14),(*(uint *)(param_1 + 0x1c) & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < *(int *)(param_1 + 0x10)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x10) * 8);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x80000000;
  return;
}

// 0110CA00  FUN_0110ca00  size=33  [run]
undefined4 __thiscall FUN_0110ca00(undefined4 param_1,byte param_2)

{
  FUN_0110c980();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0110CA30  LOCALNAMESPACE::hkNativeResource::vf10  size=41  [run]
void __fastcall LOCALNAMESPACE::hkNativeResource::vf10(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_0110c490(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}

// 0110CA60  hkBaseObject::hkBaseObject_198  size=93  [run]
void __fastcall hkBaseObject::hkBaseObject_198(undefined4 *param_1)

{
  *param_1 = LOCALNAMESPACE::hkNativeResource::vftable;
  if (param_1[5] != 0) {
    FUN_0110c490(param_1[2],param_1[3]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] & 0x3fffffff);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0110CAC0  LOCALNAMESPACE::hkNativeResource::vf00  size=52  [run]
int __thiscall LOCALNAMESPACE::hkNativeResource::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkBaseObject::hkBaseObject_198();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 0110CB00  FUN_0110cb00  size=24  [run]
undefined1 FUN_0110cb00(void)

{
  undefined1 local_5;
  
  FUN_01445680(&local_5,1,1);
  return local_5;
}

// 0110CB20  FUN_0110cb20  size=24  [run]
undefined4 FUN_0110cb20(void)

{
  undefined4 local_8;
  
  FUN_01445680(&local_8,4,1);
  return local_8;
}

// 0110CB40  FUN_0110cb40  size=24  [run]
float10 FUN_0110cb40(void)

{
  float local_8;
  
  FUN_01445680(&local_8,4,1);
  return (float10)local_8;
}

// 0110CB60  FUN_0110cb60  size=22  [run]
void FUN_0110cb60(undefined4 param_1,undefined4 param_2)

{
  FUN_01445680(param_1,1,param_2);
  return;
}

// 0110CB80  FUN_0110cb80  size=22  [run]
void FUN_0110cb80(undefined4 param_1,undefined4 param_2)

{
  FUN_01445680(param_1,4,param_2);
  return;
}

// 0110CBA0  FUN_0110cba0  size=13  [run]
void __fastcall FUN_0110cba0(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0110cbab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x74))();
  return;
}

// 0110CBB0  FUN_0110cbb0  size=16  [run]
void __fastcall FUN_0110cbb0(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0110cbbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x8c))();
  return;
}

// 0110CBE0  FUN_0110cbe0  size=13  [run]
void __fastcall FUN_0110cbe0(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0110cbeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)*param_1 + 0x20))();
  return;
}

// 0110CBF0  FUN_0110cbf0  size=165  [run]
undefined8 FUN_0110cbf0(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  byte local_5;
  
  FUN_01445680(&local_5,1,1);
  bVar1 = local_5 & 1;
  uVar3 = local_5 >> 1 & 0xffffffbf;
  uVar4 = 0;
  bVar2 = local_5;
  while ((bVar2 & 0x80) != 0) {
    FUN_01445680(&local_5,1,1);
    bVar2 = local_5;
    uVar6 = __allshl();
    uVar3 = uVar3 | (uint)uVar6;
    uVar4 = uVar4 | (uint)((ulonglong)uVar6 >> 0x20);
  }
  if (bVar1 != 0) {
    bVar5 = uVar3 != 0;
    uVar3 = -uVar3;
    uVar4 = -(uVar4 + bVar5);
  }
  return CONCAT44(uVar4,uVar3);
}

// 0110CCA0  FUN_0110cca0  size=27  [run]
float10 FUN_0110cca0(void)

{
  float local_8;
  
  FUN_01445680(&local_8,4,1);
  return (float10)local_8;
}

// 0110CCC0  FUN_0110ccc0  size=9  [run]
void FUN_0110ccc0(void)

{
  FUN_01010120();
  return;
}

// 0110CCD0  FUN_0110ccd0  size=9  [run]
void FUN_0110ccd0(void)

{
  FUN_010101e0();
  return;
}

// 0110CCE0  FUN_0110cce0  size=20  [run]
void __thiscall FUN_0110cce0(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0110CD00  FUN_0110cd00  size=20  [run]
void __thiscall FUN_0110cd00(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0110CD20  FUN_0110cd20  size=20  [run]
void __thiscall FUN_0110cd20(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0110CD50  FUN_0110cd50  size=122  [run]
uint FUN_0110cd50(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte local_5;
  
  FUN_01445680(&local_5,1,1);
  bVar2 = local_5 & 1;
  uVar3 = local_5 >> 1 & 0x7fffffbf;
  bVar4 = 6;
  while ((char)local_5 < '\0') {
    FUN_01445680(&local_5,1,1);
    bVar1 = bVar4 & 0x1f;
    bVar4 = bVar4 + 7;
    uVar3 = uVar3 | (local_5 & 0xffffff7f) << bVar1;
  }
  if (bVar2 != 0) {
    uVar3 = -uVar3;
  }
  return uVar3;
}

// 0110CDD0  FUN_0110cdd0  size=122  [run]
uint FUN_0110cdd0(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte local_5;
  
  FUN_01445680(&local_5,1,1);
  bVar2 = local_5 & 1;
  uVar3 = local_5 >> 1 & 0x7fffffbf;
  bVar4 = 6;
  while ((char)local_5 < '\0') {
    FUN_01445680(&local_5,1,1);
    bVar1 = bVar4 & 0x1f;
    bVar4 = bVar4 + 7;
    uVar3 = uVar3 | (local_5 & 0xffffff7f) << bVar1;
  }
  if (bVar2 != 0) {
    uVar3 = -uVar3;
  }
  return uVar3;
}

// 0110CE80  FUN_0110ce80  size=15  [run]
int __thiscall FUN_0110ce80(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0110CE90  FUN_0110ce90  size=122  [run]
uint FUN_0110ce90(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte local_5;
  
  FUN_01445680(&local_5,1,1);
  bVar2 = local_5 & 1;
  uVar3 = local_5 >> 1 & 0x7fffffbf;
  bVar4 = 6;
  while ((char)local_5 < '\0') {
    FUN_01445680(&local_5,1,1);
    bVar1 = bVar4 & 0x1f;
    bVar4 = bVar4 + 7;
    uVar3 = uVar3 | (local_5 & 0xffffff7f) << bVar1;
  }
  if (bVar2 != 0) {
    uVar3 = -uVar3;
  }
  return uVar3;
}

// 0110CF10  FUN_0110cf10  size=33  [run]
void __thiscall FUN_0110cf10(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2;
  param_2 = (undefined4 *)*param_2;
  (**(code **)(*param_1 + 0xc))(&param_2);
  *puVar1 = param_2;
  return;
}

// 0110CF40  FUN_0110cf40  size=33  [run]
void FUN_0110cf40(undefined4 *param_1,int param_2,int param_3)

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

// 0110CF70  FUN_0110cf70  size=24  [run]
void __thiscall
FUN_0110cf70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}

// 0110CF90  FUN_0110cf90  size=50  [run]
undefined4 __thiscall FUN_0110cf90(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_2;
  param_2 = (int *)(*param_2 * 4);
  uVar2 = (**(code **)(*param_1 + 0xc))(&param_2);
  *piVar1 = (int)((int)param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2;
  return uVar2;
}

// 0110D000  FUN_0110d000  size=26  [run]
void __thiscall FUN_0110d000(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 0110D020  FUN_0110d020  size=31  [run]
void FUN_0110d020(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  return;
}

// 0110D040  FUN_0110d040  size=39  [run]
void FUN_0110d040(int param_1)

{
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x18);
  }
  return;
}

// 0110D070  FUN_0110d070  size=93  [run]
void __thiscall FUN_0110d070(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      (**(code **)(**(int **)(*param_1 + iVar1 * 8) + 0x60))
                (*(undefined4 *)(*param_1 + iVar1 * 8 + 4),*param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  iVar1 = 0;
  if (0 < param_1[4]) {
    do {
      (**(code **)(**(int **)(param_1[3] + iVar1 * 8) + 0x5c))
                (*(undefined4 *)(param_1[3] + iVar1 * 8 + 4),*param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[4]);
  }
  return;
}

// 0110D0F0  hkBinaryTagfileReader::hkBinaryTagfileReader  size=18  [run]
void __fastcall hkBinaryTagfileReader::hkBinaryTagfileReader(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  return;
}

// 0110D110  hkBinaryTagfileReader::vf0C  size=52  [run]
undefined4 hkBinaryTagfileReader::vf0C(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0110e210(param_2,param_3);
  FUN_01110040(param_1);
  FUN_0110e310();
  return param_1;
}

// 0110D150  FUN_0110d150  size=38  [run]
void FUN_0110d150(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 0110D180  hkBinaryTagfileReader::vf00  size=53  [run]
undefined4 * __thiscall hkBinaryTagfileReader::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 0110D1E0  FUN_0110d1e0  size=16  [run]
undefined4 __thiscall FUN_0110d1e0(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 0110D1F0  FUN_0110d1f0  size=21  [run]
void __thiscall FUN_0110d1f0(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 0110D270  FUN_0110d270  size=89  [run]
undefined4 * __thiscall FUN_0110d270(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x80000000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    if (param_2 != 0) goto LAB_0110d2b5;
  }
  param_2 = -0x80000000;
LAB_0110d2b5:
  param_1[1] = iVar1;
  *param_1 = uVar2;
  param_1[2] = param_2;
  return param_1;
}

// 0110D2D0  FUN_0110d2d0  size=92  [run]
void __thiscall FUN_0110d2d0(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = param_1[1] + param_4;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar3) {
    iVar1 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar1 <= iVar3) {
      iVar1 = iVar3;
    }
    FUN_0100a210(param_2,param_1,iVar1,4);
  }
  puVar2 = (undefined4 *)(*param_1 + param_1[1] * 4);
  if (0 < param_4) {
    param_3 = param_3 - (int)puVar2;
    do {
      *puVar2 = *(undefined4 *)(param_3 + (int)puVar2);
      puVar2 = puVar2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  param_1[1] = iVar3;
  return;
}

// 0110D330  FUN_0110d330  size=106  [run]
undefined4 * __thiscall FUN_0110d330(undefined4 *param_1,int param_2)

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
    param_2 = param_2 * 4;
    uVar2 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_2);
    iVar3 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_0110d386;
  }
  iVar3 = -0x80000000;
LAB_0110d386:
  param_1[1] = iVar1;
  param_1[2] = iVar3;
  *param_1 = uVar2;
  return param_1;
}

// 0110D3A0  FUN_0110d3a0  size=66  [run]
void __thiscall FUN_0110d3a0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_2 - param_1[1];
  if (0 < iVar2) {
    puVar1 = (undefined4 *)(param_1[1] * 0x10 + *param_1 + 8);
    do {
      if (puVar1 != (undefined4 *)&DAT_00000008) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = param_2;
  return;
}

// 0110D400  FUN_0110d400  size=13  [run]
void __thiscall FUN_0110d400(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 0110D410  FUN_0110d410  size=58  [run]
void FUN_0110d410(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 0110D450  FUN_0110d450  size=69  [run]
void FUN_0110d450(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 0110D4A0  FUN_0110d4a0  size=61  [run]
void FUN_0110d4a0(int param_1)

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

// 0110D4E0  FUN_0110d4e0  size=72  [run]
void FUN_0110d4e0(int param_1,int param_2)

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

// 0110D530  FUN_0110d530  size=62  [run]
void FUN_0110d530(int param_1)

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

// 0110D570  FUN_0110d570  size=73  [run]
void FUN_0110d570(int param_1,int param_2)

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

// 0110D5C0  FUN_0110d5c0  size=25  [run]
void FUN_0110d5c0(undefined4 param_1,undefined4 param_2)

{
  FUN_01010ba0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0110D5E0  FUN_0110d5e0  size=19  [run]
void __thiscall FUN_0110d5e0(int *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*param_1 + 4 + param_2 * 8) = param_3;
  return;
}

// 0110D600  FUN_0110d600  size=61  [run]
void __thiscall FUN_0110d600(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0110D640  FUN_0110d640  size=45  [run]
undefined1 __fastcall FUN_0110d640(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  param_1[5] = *param_1;
  FUN_01445680(param_1[4],1,*param_1);
  puVar2 = (undefined1 *)param_1[4];
  param_1[2] = puVar2;
  param_1[3] = puVar2 + param_1[5];
  uVar1 = *puVar2;
  param_1[2] = puVar2 + 1;
  return uVar1;
}

// 0110D670  FUN_0110d670  size=53  [run]
undefined1 __fastcall FUN_0110d670(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)param_1[2];
  if ((undefined1 *)param_1[3] <= puVar2) {
    param_1[5] = *param_1;
    FUN_01445680(param_1[4],1,*param_1);
    puVar2 = (undefined1 *)param_1[4];
    param_1[2] = puVar2;
    param_1[3] = puVar2 + param_1[5];
  }
  uVar1 = *puVar2;
  param_1[2] = puVar2 + 1;
  return uVar1;
}

// 0110D6B0  FUN_0110d6b0  size=179  [run]
uint __fastcall FUN_0110d6b0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  
  pbVar4 = (byte *)param_1[2];
  if ((byte *)param_1[3] <= pbVar4) {
    param_1[5] = *param_1;
    FUN_01445680(param_1[4],1,*param_1);
    pbVar4 = (byte *)param_1[4];
    param_1[2] = (int)pbVar4;
    param_1[3] = (int)(pbVar4 + param_1[5]);
  }
  bVar1 = *pbVar4;
  param_1[2] = (int)(pbVar4 + 1);
  bVar3 = bVar1 & 1;
  uVar6 = bVar1 >> 1 & 0x7fffffbf;
  bVar5 = 6;
  while ((char)bVar1 < '\0') {
    pbVar4 = (byte *)param_1[2];
    if ((byte *)param_1[3] <= pbVar4) {
      param_1[5] = *param_1;
      FUN_01445680(param_1[4],1,*param_1);
      pbVar4 = (byte *)param_1[4];
      param_1[2] = (int)pbVar4;
      param_1[3] = (int)(pbVar4 + param_1[5]);
    }
    bVar1 = *pbVar4;
    param_1[2] = (int)(pbVar4 + 1);
    bVar2 = bVar5 & 0x1f;
    bVar5 = bVar5 + 7;
    uVar6 = uVar6 | (bVar1 & 0xffffff7f) << bVar2;
  }
  *param_1 = *param_1 + -1;
  if (bVar3 != 0) {
    uVar6 = -uVar6;
  }
  return uVar6;
}

// 0110D770  FUN_0110d770  size=58  [run]
void __thiscall FUN_0110d770(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 0110D7B0  FUN_0110d7b0  size=25  [run]
void FUN_0110d7b0(undefined4 param_1,undefined4 param_2)

{
  FUN_0110d2d0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 0110D7F0  FUN_0110d7f0  size=61  [run]
void __fastcall FUN_0110d7f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0110D830  FUN_0110d830  size=60  [run]
void __fastcall FUN_0110d830(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0110D870  FUN_0110d870  size=61  [run]
void __fastcall FUN_0110d870(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0110D8B0  FUN_0110d8b0  size=242  [run]
int __fastcall FUN_0110d8b0(int param_1)

{
  byte bVar1;
  byte bVar2;
  LPVOID pvVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte local_6;
  byte local_5;
  
  FUN_01445680(&local_5,1,1);
  bVar2 = local_5 & 1;
  uVar5 = local_5 >> 1 & 0x7fffffbf;
  bVar6 = 6;
  while ((char)local_5 < '\0') {
    FUN_01445680(&local_6,1,1);
    bVar1 = bVar6 & 0x1f;
    bVar6 = bVar6 + 7;
    uVar5 = uVar5 | (local_6 & 0xffffff7f) << bVar1;
    local_5 = local_6;
  }
  if (bVar2 != 0) {
    uVar5 = -uVar5;
  }
  if (0 < (int)uVar5) {
    pvVar3 = TlsGetValue(DAT_01f8fc4c);
    iVar4 = FUN_01005cb0(*(undefined4 *)((int)pvVar3 + 0x2c),uVar5 + 1);
    FUN_01445770(iVar4,uVar5);
    *(undefined1 *)(uVar5 + iVar4) = 0;
    if (*(uint *)(param_1 + 0x2c) == (*(uint *)(param_1 + 0x30) & 0x3fffffff)) {
      FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x28),4);
    }
    *(int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c) * 4) = iVar4;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    return iVar4;
  }
  return *(int *)(*(int *)(param_1 + 0x28) + uVar5 * -4);
}

// 0110D9B0  FUN_0110d9b0  size=260  [run]
void FUN_0110d9b0(int param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte local_48 [68];
  
  uVar5 = param_1 + 7U & 0xfffffff8;
  iVar4 = (int)(((int)(param_1 + 7U) >> 0x1f & 7U) + uVar5) >> 3;
  if ((int)(param_2[2] & 0x3fffffffU) < (int)uVar5) {
    uVar2 = (param_2[2] & 0x3fffffffU) * 2;
    if ((int)uVar2 <= (int)uVar5) {
      uVar2 = uVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,uVar2,1);
  }
  param_2[1] = uVar5;
  FUN_01445680(local_48,1,iVar4);
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      bVar1 = local_48[iVar3];
      *(byte *)(*param_2 + iVar3 * 8) = bVar1 & 1;
      *(byte *)(*param_2 + 1 + iVar3 * 8) = bVar1 >> 1 & 1;
      *(byte *)(*param_2 + 2 + iVar3 * 8) = bVar1 >> 2 & 1;
      *(byte *)(*param_2 + 3 + iVar3 * 8) = bVar1 >> 3 & 1;
      *(byte *)(*param_2 + 4 + iVar3 * 8) = bVar1 >> 4 & 1;
      *(byte *)(*param_2 + 5 + iVar3 * 8) = bVar1 >> 5 & 1;
      *(byte *)(*param_2 + 6 + iVar3 * 8) = bVar1 >> 6 & 1;
      *(byte *)(*param_2 + 7 + iVar3 * 8) = bVar1 >> 7;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  if ((int)(param_2[2] & 0x3fffffffU) < param_1) {
    iVar4 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar4 <= param_1) {
      iVar4 = param_1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_2,iVar4,1);
  }
  param_2[1] = param_1;
  return;
}

// 0110DAC0  FUN_0110dac0  size=56  [run]
void __thiscall FUN_0110dac0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 0110DB00  FUN_0110db00  size=61  [run]
void __fastcall FUN_0110db00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0110DB40  FUN_0110db40  size=60  [run]
void __fastcall FUN_0110db40(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0110DB80  FUN_0110db80  size=61  [run]
void __fastcall FUN_0110db80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0110DBC0  FUN_0110dbc0  size=61  [run]
void __fastcall FUN_0110dbc0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0110DC00  FUN_0110dc00  size=111  [run]
int * __thiscall FUN_0110dc00(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  param_1[1] = param_2;
  piVar1 = param_1 + 4;
  *param_1 = param_3;
  *piVar1 = 0;
  param_1[5] = 0;
  param_1[6] = -0x80000000;
  if ((int)(param_1[6] & 0x3fffffffU) < param_3) {
    iVar2 = (param_1[6] & 0x3fffffffU) * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(&PTR_vftable_018e9b8c,piVar1,iVar2,1);
  }
  param_1[5] = param_3;
  param_1[5] = 0;
  param_1[2] = *piVar1;
  param_1[3] = *piVar1 + param_1[5];
  return param_1;
}

// 0110DC70  FUN_0110dc70  size=339  [run]
void __thiscall FUN_0110dc70(uint *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar6 = *param_1;
  local_1c = 0;
  local_18 = 0;
  local_14 = -0x80000000;
  local_c = uVar6;
  if (0 < (int)uVar6) {
    FUN_0100a210(&PTR_vftable_018e9b8c,&local_1c,((int)uVar6 < 0) - 1 & uVar6,4);
  }
  local_8 = 0;
  local_18 = uVar6;
  if (0 < (int)uVar6) {
    do {
      pbVar3 = (byte *)param_1[2];
      if ((byte *)param_1[3] <= pbVar3) {
        param_1[5] = *param_1;
        FUN_01445680(param_1[4],1,*param_1);
        pbVar3 = (byte *)param_1[4];
        param_1[2] = (uint)pbVar3;
        param_1[3] = (uint)(pbVar3 + param_1[5]);
      }
      bVar1 = *pbVar3;
      param_1[2] = (uint)(pbVar3 + 1);
      local_10 = bVar1 & 1;
      uVar5 = bVar1 >> 1 & 0x7fffffbf;
      bVar4 = 6;
      uVar6 = local_c;
      while (local_c = uVar6, (char)bVar1 < '\0') {
        pbVar3 = (byte *)param_1[2];
        if ((byte *)param_1[3] <= pbVar3) {
          param_1[5] = *param_1;
          FUN_01445680(param_1[4],1,*param_1);
          pbVar3 = (byte *)param_1[4];
          param_1[2] = (uint)pbVar3;
          param_1[3] = (uint)(pbVar3 + param_1[5]);
        }
        bVar1 = *pbVar3;
        param_1[2] = (uint)(pbVar3 + 1);
        bVar2 = bVar4 & 0x1f;
        bVar4 = bVar4 + 7;
        uVar5 = uVar5 | (bVar1 & 0xffffff7f) << bVar2;
        uVar6 = local_c;
      }
      *param_1 = *param_1 - 1;
      if (local_10 != 0) {
        uVar5 = -uVar5;
      }
      *(uint *)(local_1c + local_8 * 4) = uVar5;
      local_8 = local_8 + 1;
    } while (local_8 < (int)uVar6);
  }
  (**(code **)(*(int *)*param_2 + 0x80))(local_1c,uVar6);
  local_18 = 0;
  if (-1 < local_14) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_1c,local_14 * 4);
  }
  return;
}

// 0110DDD0  FUN_0110ddd0  size=67  [run]
void __thiscall FUN_0110ddd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (*(uint *)(param_1 + 0x10) == (*(uint *)(param_1 + 0x14) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0xc),8);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10) * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

// 0110DE20  FUN_0110de20  size=66  [run]
void __thiscall FUN_0110de20(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,8);
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0110DE70  FUN_0110de70  size=59  [run]
void __fastcall FUN_0110de70(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x18)) {
    (**(code **)(PTR_vftable_018e9b8c + 0x10))
              (*(undefined4 *)(param_1 + 0x10),*(uint *)(param_1 + 0x18) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x18) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

// 0110DEB0  FUN_0110deb0  size=104  [run]
int * __thiscall FUN_0110deb0(int *param_1,uint param_2)

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
    uVar3 = param_2 + 0x7f & 0xffffff80;
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

// 0110DF20  FUN_0110df20  size=135  [run]
void __fastcall FUN_0110df20(int *param_1)

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
  uVar4 = iVar2 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 0110DFB0  FUN_0110dfb0  size=109  [run]
int * __thiscall FUN_0110dfb0(int *param_1,uint param_2)

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

// 0110E020  FUN_0110e020  size=141  [run]
void __fastcall FUN_0110e020(int *param_1)

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

// 0110E0B0  FUN_0110e0b0  size=108  [run]
int * __thiscall FUN_0110e0b0(int *param_1,uint param_2)

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

// 0110E120  FUN_0110e120  size=143  [run]
void __fastcall FUN_0110e120(int *param_1)

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

// 0110E1B0  FUN_0110e1b0  size=61  [run]
void __fastcall FUN_0110e1b0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0110E210  FUN_0110e210  size=252  [run]
undefined4 * __thiscall FUN_0110e210(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  *param_1 = 0xffffffff;
  hkIArchive::hkIArchive_3(param_2,(uint)param_1 & 0xffffff00);
  param_1[5] = param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x80000000;
  param_1[0xd] = 0;
  piVar1 = param_1 + 10;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x80000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0xffffffff;
  if (param_1[8] == (param_1[9] & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1 + 7,4);
  }
  *(undefined4 *)(param_1[7] + param_1[8] * 4) = 0;
  param_1[8] = param_1[8] + 1;
  if (param_1[0xb] == (param_1[0xc] & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,4);
  }
  *(undefined1 **)(*piVar1 + param_1[0xb] * 4) = &DAT_016416fa;
  param_1[0xb] = param_1[0xb] + 1;
  if (param_1[0xb] == (param_1[0xc] & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,piVar1,4);
  }
  *(undefined4 *)(*piVar1 + param_1[0xb] * 4) = 0;
  param_1[0xb] = param_1[0xb] + 1;
  param_1[0xd] = 2;
  return param_1;
}

// 0110E310  FUN_0110e310  size=231  [run]
void __fastcall FUN_0110e310(int param_1)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 < *(int *)(param_1 + 0x2c)) {
    do {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar3 * 4);
      pvVar2 = TlsGetValue(DAT_01f8fc4c);
      FUN_01005d00(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x2c));
  }
  FUN_01010310(&PTR_vftable_018e9b94);
  FUN_0100fd10();
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if ((*(uint *)(param_1 + 0x40) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x38),*(uint *)(param_1 + 0x40) * 4);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((*(uint *)(param_1 + 0x30) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x28),*(uint *)(param_1 + 0x30) * 4);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((*(uint *)(param_1 + 0x24) & 0x80000000) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 0x1c),*(uint *)(param_1 + 0x24) * 4);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  hkBaseObject::hkBaseObject_238();
  return;
}

// 0110E400  FUN_0110e400  size=84  [run]
void __thiscall FUN_0110e400(int param_1,undefined4 param_2,int param_3)

{
  undefined4 local_10;
  uint local_8;
  
  if (0 < param_3) {
    FUN_0110dc00(param_1 + 4,param_3);
    FUN_0110dc70(param_2);
    if (-1 < (int)local_8) {
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_10,local_8 & 0x3fffffff);
    }
  }
  return;
}

// 0110E460  FUN_0110e460  size=985  [run]
undefined4 FUN_0110e460(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  undefined4 *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  local_2c = 0;
  local_28 = 0;
  local_24 = 0x80000000;
  local_38 = FUN_0110d8b0();
  FUN_01445680(&local_5,1,1);
  local_1c = local_5 & 1;
  local_34 = local_5 >> 1 & 0x7fffffbf;
  bVar6 = 6;
  bVar1 = local_5;
  while ((char)bVar1 < '\0') {
    FUN_01445680(&local_6,1,1);
    bVar1 = bVar6 & 0x1f;
    bVar6 = bVar6 + 7;
    local_34 = local_34 | (local_6 & 0xffffff7f) << bVar1;
    bVar1 = local_6;
  }
  if (local_1c != 0) {
    local_34 = -local_34;
  }
  piVar3 = (int *)(**(code **)(**(int **)(local_c + 0x14) + 0x18))(&local_20);
  if (*piVar3 == 0) {
    local_28 = 0;
    if (-1 < (int)local_24) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,(local_24 & 0x3fffffff) * 0xc);
    }
    return 1;
  }
  FUN_01445680(&local_6,1,1);
  local_1c = local_6 & 1;
  uVar7 = local_6 >> 1 & 0x7fffffbf;
  bVar6 = 6;
  bVar1 = local_6;
  while ((char)bVar1 < '\0') {
    FUN_01445680(&local_5,1,1);
    bVar1 = bVar6 & 0x1f;
    bVar6 = bVar6 + 7;
    uVar7 = uVar7 | (local_5 & 0xffffff7f) << bVar1;
    bVar1 = local_5;
  }
  if (local_1c != 0) {
    uVar7 = -uVar7;
  }
  if (((int)uVar7 < 0) || (*(int *)(*(int *)(local_c + 0x1c) + uVar7 * 4) == 0)) {
    local_30 = 0;
  }
  else {
    local_30 = (**(code **)(**(int **)(*(int *)(local_c + 0x1c) + uVar7 * 4) + 8))();
  }
  FUN_01445680(&local_6,1,1);
  local_1c = local_6 & 1;
  uVar7 = local_6 >> 1 & 0x7fffffbf;
  bVar6 = 6;
  bVar1 = local_6;
  while ((char)bVar1 < '\0') {
    FUN_01445680(&local_5,1,1);
    bVar1 = bVar6 & 0x1f;
    bVar6 = bVar6 + 7;
    uVar7 = uVar7 | (local_5 & 0xffffff7f) << bVar1;
    bVar1 = local_5;
  }
  if (local_1c != 0) {
    uVar7 = -uVar7;
  }
  if ((int)(local_24 & 0x3fffffff) < (int)uVar7) {
    uVar4 = (local_24 & 0x3fffffff) * 2;
    if ((int)uVar4 <= (int)uVar7) {
      uVar4 = uVar7;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_2c,uVar4,0xc);
  }
  local_1c = 0;
  local_28 = uVar7;
  if (0 < (int)uVar7) {
    local_14 = 0;
    do {
      puVar8 = (undefined4 *)(local_2c + local_14);
      local_20 = puVar8;
      uVar5 = FUN_0110d8b0();
      *puVar8 = uVar5;
      FUN_01445680(&local_6,1,1);
      local_18 = local_6 & 1;
      uVar7 = local_6 >> 1 & 0x7fffffbf;
      bVar6 = 6;
      bVar1 = local_6;
      while ((char)bVar1 < '\0') {
        FUN_01445680(&local_5,1,1);
        bVar1 = bVar6 & 0x1f;
        bVar6 = bVar6 + 7;
        uVar7 = uVar7 | (local_5 & 0xffffff7f) << bVar1;
        bVar1 = local_5;
      }
      if (local_18 != 0) {
        uVar7 = -uVar7;
      }
      local_10 = uVar7;
      if ((uVar7 & 0x20) == 0) {
        local_18 = 0;
      }
      else {
        FUN_01445680(&local_7,1,1);
        local_18 = local_7 & 1;
        uVar7 = local_7 >> 1 & 0x7fffffbf;
        bVar6 = 6;
        bVar1 = local_7;
        while ((char)bVar1 < '\0') {
          FUN_01445680(&local_8,1,1);
          bVar1 = bVar6 & 0x1f;
          bVar6 = bVar6 + 7;
          uVar7 = uVar7 | (local_8 & 0xffffff7f) << bVar1;
          bVar1 = local_8;
        }
        bVar10 = local_18 != 0;
        local_18 = uVar7;
        if (bVar10) {
          local_18 = -uVar7;
        }
      }
      iVar2 = local_c;
      if (((local_10 & 0xf) == 9) || ((local_10 & 0xf) == 8)) {
        iVar9 = FUN_0110d8b0();
        if (iVar9 != 0) {
          (**(code **)(**(int **)(iVar2 + 0x14) + 0x24))(iVar9);
        }
      }
      else {
        iVar9 = 0;
      }
      uVar7 = local_10;
      uVar4 = local_18;
      (**(code **)(**(int **)(iVar2 + 0x14) + 0x2c))(local_10,iVar9,local_18);
      uVar5 = FUN_010e1a70(uVar7,iVar9,uVar4);
      local_14 = local_14 + 0xc;
      local_20[1] = uVar5;
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)local_28);
  }
  uVar5 = (**(code **)(**(int **)(local_c + 0x14) + 0xc))(&local_38);
  if (*(uint *)(local_c + 0x20) == (*(uint *)(local_c + 0x24) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(local_c + 0x1c),4);
  }
  *(undefined4 *)(*(int *)(local_c + 0x1c) + *(int *)(local_c + 0x20) * 4) = uVar5;
  *(int *)(local_c + 0x20) = *(int *)(local_c + 0x20) + 1;
  local_28 = 0;
  if (-1 < (int)local_24) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,(local_24 & 0x3fffffff) * 0xc);
  }
  return 0;
}

// 0110E840  FUN_0110e840  size=123  [run]
void __fastcall FUN_0110e840(undefined4 *param_1)

{
  param_1[4] = 0;
  if (-1 < (int)param_1[5]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[3],param_1[5] * 8);
  }
  param_1[3] = 0;
  param_1[5] = 0x80000000;
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0110E8C0  FUN_0110e8c0  size=427  [run]
void __thiscall FUN_0110e8c0(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  LPVOID pvVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  byte bVar8;
  undefined4 *local_c;
  byte local_6;
  byte local_5;
  
  if (*param_1 < 2) {
    FUN_0110fa20(&local_c,0,0);
    (**(code **)(*param_2 + 0x60))(param_3,local_c);
    if (local_c != (undefined4 *)0x0) {
      *(short *)((int)local_c + 6) = *(short *)((int)local_c + 6) + -1;
      piVar7 = local_c + 2;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        (**(code **)*local_c)(1);
        return;
      }
    }
  }
  else {
    FUN_01445680(&local_5,1,1);
    local_c = (undefined4 *)(local_5 & 1);
    uVar6 = local_5 >> 1 & 0x7fffffbf;
    bVar8 = 6;
    while ((char)local_5 < '\0') {
      FUN_01445680(&local_6,1,1);
      bVar2 = bVar8 & 0x1f;
      bVar8 = bVar8 + 7;
      uVar6 = uVar6 | (local_6 & 0xffffff7f) << bVar2;
      local_5 = local_6;
    }
    if (local_c != (undefined4 *)0x0) {
      uVar6 = -uVar6;
    }
    if (param_1[0xf] <= (int)uVar6) {
      iVar3 = FUN_01010ba0(&PTR_vftable_018e9b94,uVar6,0);
      piVar7 = *(int **)(param_1[0x11] + 4 + iVar3 * 8);
      if (piVar7 == (int *)0x0) {
        pvVar4 = TlsGetValue(DAT_01f8fc4c);
        piVar5 = (int *)(**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0x18);
        if (piVar5 != (int *)0x0) {
          *piVar5 = 0;
          piVar5[1] = 0;
          piVar5[2] = -0x80000000;
          piVar5[3] = 0;
          piVar5[4] = 0;
          piVar5[5] = -0x80000000;
          piVar7 = piVar5;
        }
        *(int **)(param_1[0x11] + 4 + iVar3 * 8) = piVar7;
      }
      if (piVar7[1] == (piVar7[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar7,8);
      }
      puVar1 = (undefined4 *)(*piVar7 + piVar7[1] * 8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = param_2;
        puVar1[1] = param_3;
      }
      piVar7[1] = piVar7[1] + 1;
      return;
    }
    puVar1 = *(undefined4 **)(param_1[0xe] + uVar6 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + 1;
      puVar1[2] = puVar1[2] + 1;
    }
    (**(code **)(*param_2 + 0x60))(param_3,puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      *(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1;
      piVar7 = puVar1 + 2;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  }
  return;
}

// 0110EA70  FUN_0110ea70  size=2664  [run]
void __thiscall FUN_0110ea70(int *param_1,undefined4 *param_2,uint param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LPVOID pvVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  byte bVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined1 local_88 [12];
  undefined4 local_7c;
  int local_48 [4];
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int *local_18;
  undefined4 *local_14;
  int *local_10;
  int *local_c;
  byte local_6;
  byte local_5;
  
  local_10 = param_1;
  piVar2 = (int *)(**(code **)(*(int *)*param_2 + 4))();
  uVar6 = param_3;
  switch(*piVar2) {
  case 2:
    local_24 = 0;
    local_20 = 0;
    local_1c = 0x80000000;
    if (param_3 == 0) {
      local_24 = 0;
LAB_0110eadc:
      local_1c = 0x80000000;
    }
    else {
      local_24 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_3);
      local_1c = param_3;
      if (param_3 == 0) goto LAB_0110eadc;
    }
    local_20 = uVar6;
    if ((int)(local_1c & 0x3fffffff) < (int)uVar6) {
      uVar13 = (local_1c & 0x3fffffff) * 2;
      if ((int)uVar13 <= (int)uVar6) {
        uVar13 = uVar6;
      }
      FUN_0100a210(&PTR_vftable_018e9b8c,&local_24,uVar13,1);
    }
    FUN_01445680(local_24,1,uVar6);
    (**(code **)(*(int *)*param_2 + 0x8c))(local_24,uVar6);
    if (-1 < (int)local_1c) {
      uVar6 = local_1c & 0x3fffffff;
LAB_0110eb4d:
      local_20 = 0;
      (**(code **)(PTR_vftable_018e9b8c + 0x10))(local_24,uVar6);
      return;
    }
    break;
  case 3:
    uVar13 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0x80000000;
    if (param_3 == 0) {
LAB_0110ed06:
      local_1c = 0x80000000;
    }
    else {
      param_3 = param_3 * 4;
      uVar13 = (**(code **)(PTR_vftable_018e9b8c + 0xc))(&param_3);
      local_1c = (int)(param_3 + ((int)param_3 >> 0x1f & 3U)) >> 2;
      if (local_1c == 0) goto LAB_0110ed06;
    }
    local_20 = uVar6;
    local_24 = uVar13;
    if ((int)(local_1c & 0x3fffffff) < (int)uVar6) {
      uVar13 = (local_1c & 0x3fffffff) * 2;
      if ((int)uVar13 <= (int)uVar6) {
        uVar13 = uVar6;
      }
      FUN_0100a210(&PTR_vftable_018e9b8c,&local_24,uVar13,4);
    }
    local_20 = uVar6;
    FUN_01445680(local_24,4,uVar6);
    (**(code **)(*(int *)*param_2 + 0x70))(local_24,local_20);
    if ((int)local_1c < 0) {
      return;
    }
    uVar6 = local_1c * 4;
    goto LAB_0110eb4d;
  case 4:
    if (2 < *param_1) {
      local_c = param_1 + 1;
      FUN_01445680(&local_5,1,1);
      local_14 = (undefined4 *)(local_5 & 1);
      uVar6 = local_5 >> 1 & 0x7fffffbf;
      bVar12 = 6;
      bVar14 = local_5;
      while ((char)bVar14 < '\0') {
        FUN_01445680(&local_6,1,1);
        bVar14 = bVar12 & 0x1f;
        bVar12 = bVar12 + 7;
        uVar6 = uVar6 | (local_6 & 0xffffff7f) << bVar14;
        bVar14 = local_6;
      }
      if (local_14 != (undefined4 *)0x0) {
        uVar6 = -uVar6;
      }
      if (uVar6 != 4) {
        local_18 = (int *)0x0;
        if ((int)param_3 < 1) {
          return;
        }
        do {
          FUN_01445680(&local_6,1,1);
          local_14 = (undefined4 *)(local_6 & 1);
          uVar6 = local_6 >> 1 & 0xffffffbf;
          uVar13 = 0;
          local_30 = 6;
          piVar2 = local_18;
          bVar12 = local_6;
          while (local_18 = piVar2, (bVar12 & 0x80) != 0) {
            FUN_01445680(&local_5,1,1);
            bVar12 = local_5;
            uVar16 = __allshl();
            local_30 = local_30 + 7;
            uVar6 = uVar6 | (uint)uVar16;
            uVar13 = uVar13 | (uint)((ulonglong)uVar16 >> 0x20);
            piVar2 = local_18;
          }
          if (local_14 != (undefined4 *)0x0) {
            bVar15 = uVar6 != 0;
            uVar6 = -uVar6;
            uVar13 = -(uVar13 + bVar15);
          }
          (**(code **)(*(int *)*param_2 + 0x58))(piVar2,uVar6,uVar13);
          local_18 = (int *)((int)piVar2 + 1);
        } while ((int)local_18 < (int)param_3);
        return;
      }
    }
    FUN_0110e400(param_2,param_3);
    return;
  case 5:
    iVar3 = 0;
    if (0 < (int)param_3) {
      do {
        uVar9 = FUN_0110d8b0();
        (**(code **)(*(int *)*param_2 + 0x38))(iVar3,uVar9);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar6);
      return;
    }
    break;
  case 6:
    (**(code **)(*(int *)*param_2 + 0x10))(param_3);
    piVar2 = (int *)(**(code **)(*(int *)*param_2 + 0x18))();
    local_30 = (**(code **)(*piVar2 + 0x24))();
    local_48[0] = 0;
    local_48[1] = 0;
    local_48[2] = 0x80000000;
    local_38 = 0x80;
    pvVar7 = TlsGetValue(DAT_01f8fc4c);
    local_48[3] = *(int *)((int)pvVar7 + 0xc);
    if ((*(int *)((int)pvVar7 + 8) < 0x80) || (*(uint *)((int)pvVar7 + 0x10) < local_48[3] + 0x80U))
    {
      local_48[3] = FUN_0100b780(0x80);
    }
    else {
      *(uint *)((int)pvVar7 + 0xc) = local_48[3] + 0x80U;
    }
    uVar6 = local_30;
    local_48[2] = 0x80000080;
    local_48[0] = local_48[3];
    FUN_0110d9b0(local_30,local_48);
    local_20 = 0;
    uVar13 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0x80000000;
    local_1c = uVar6;
    if (uVar6 != 0) {
      pvVar7 = TlsGetValue(DAT_01f8fc4c);
      local_20 = *(int *)((int)pvVar7 + 0xc);
      uVar13 = uVar6 * 0x10 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar7 + 8) < (int)uVar13) ||
         (*(uint *)((int)pvVar7 + 0x10) < local_20 + uVar13)) {
        local_20 = FUN_0100b780(uVar13);
        uVar13 = local_28;
      }
      else {
        *(uint *)((int)pvVar7 + 0xc) = local_20 + uVar13;
        uVar13 = local_28;
      }
    }
    local_24 = uVar6 | 0x80000000;
    iVar3 = uVar6 - uVar13;
    if (0 < iVar3) {
      puVar8 = (undefined4 *)(uVar13 * 0x10 + local_20 + 8);
      do {
        if (puVar8 != (undefined4 *)&DAT_00000008) {
          puVar8[-2] = 0;
          puVar8[-1] = 0;
          *puVar8 = 0;
          puVar8[1] = 0;
        }
        puVar8 = puVar8 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_28 = uVar6;
    local_2c = local_20;
    (**(code **)(*piVar2 + 0x30))(&local_2c);
    local_34 = 0;
    if (0 < (int)uVar6) {
      local_18 = (int *)0x0;
      do {
        puVar8 = (undefined4 *)(local_2c + (int)local_18);
        if (*(char *)(local_48[0] + local_34) != '\0') {
          local_c = (int *)(**(code **)(*(int *)*param_2 + 0x28))(*puVar8);
          if (local_c != (int *)0x0) {
            *(short *)((int)local_c + 6) = *(short *)((int)local_c + 6) + 1;
            local_c[2] = local_c[2] + 1;
          }
          piVar2 = (int *)puVar8[2];
          if ((*piVar2 == 9) &&
             ((*(int *)piVar2[1] != 3 ||
              ((((iVar3 = piVar2[2], iVar3 != 4 && (iVar3 != 8)) && (iVar3 != 0xc)) &&
               (iVar3 != 0x10)))))) {
            iVar3 = 0;
            if (0 < (int)param_3) {
              do {
                local_14 = (undefined4 *)(**(code **)(*local_c + 100))(iVar3);
                if (local_14 != (undefined4 *)0x0) {
                  *(short *)((int)local_14 + 6) = *(short *)((int)local_14 + 6) + 1;
                  local_14[2] = local_14[2] + 1;
                }
                uVar9 = FUN_010e0cc0();
                FUN_0110ea70(&local_14,uVar9);
                if (local_14 != (undefined4 *)0x0) {
                  *(short *)((int)local_14 + 6) = *(short *)((int)local_14 + 6) + -1;
                  piVar2 = local_14 + 2;
                  *piVar2 = *piVar2 + -1;
                  if (*piVar2 == 0) {
                    (**(code **)*local_14)(1);
                  }
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < (int)param_3);
            }
          }
          else {
            FUN_0110ea70(&local_c,param_3);
          }
          if (local_c != (int *)0x0) {
            *(short *)((int)local_c + 6) = *(short *)((int)local_c + 6) + -1;
            piVar2 = local_c + 2;
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              (**(code **)*local_c)(1);
            }
          }
        }
        local_18 = local_18 + 4;
        local_34 = local_34 + 1;
      } while (local_34 < (int)local_30);
    }
    uVar13 = local_1c;
    uVar6 = local_20;
    if (local_20 == local_2c) {
      local_28 = 0;
    }
    pvVar7 = TlsGetValue(DAT_01f8fc4c);
    uVar13 = uVar13 * 0x10 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar7 + 8) < (int)uVar13) ||
        (uVar13 + uVar6 != *(int *)((int)pvVar7 + 0xc))) || (*(int *)((int)pvVar7 + 0x14) == uVar6))
    {
      FUN_0100b9b0(uVar6,uVar13);
    }
    else {
      *(uint *)((int)pvVar7 + 0xc) = uVar6;
    }
    local_28 = 0;
    if (-1 < (int)local_24) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,local_24 << 4);
    }
    iVar11 = local_38;
    iVar3 = local_48[3];
    local_2c = 0;
    local_24 = 0x80000000;
    if (local_48[3] == local_48[0]) {
      local_48[1] = 0;
    }
    pvVar7 = TlsGetValue(DAT_01f8fc4c);
    uVar6 = iVar11 + 0x7fU & 0xffffff80;
    if (((*(int *)((int)pvVar7 + 8) < (int)uVar6) || (uVar6 + iVar3 != *(int *)((int)pvVar7 + 0xc)))
       || (*(int *)((int)pvVar7 + 0x14) == iVar3)) {
      FUN_0100b9b0(iVar3,uVar6);
    }
    else {
      *(int *)((int)pvVar7 + 0xc) = iVar3;
    }
    local_48[1] = 0;
    if (-1 < local_48[2]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_48[0],local_48[2] & 0x3fffffff);
      return;
    }
    break;
  case 7:
    iVar3 = 0;
    if (0 < (int)param_3) {
      do {
        FUN_0110e8c0(*param_2,iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar6);
      return;
    }
    break;
  case 8:
    (**(code **)(*(int *)*param_2 + 0x10))(param_3);
    local_14 = (undefined4 *)0x0;
    if (0 < (int)uVar6) {
      do {
        FUN_01445680(&local_6,1,1);
        uVar6 = local_6 >> 1 & 0x7fffffbf;
        bVar12 = local_6 & 1;
        bVar14 = 6;
        puVar8 = local_14;
        bVar1 = local_6;
        while (local_14 = puVar8, (char)bVar1 < '\0') {
          FUN_01445680(&local_5,1,1);
          bVar1 = bVar14 & 0x1f;
          bVar14 = bVar14 + 7;
          uVar6 = uVar6 | (local_5 & 0xffffff7f) << bVar1;
          puVar8 = local_14;
          bVar1 = local_5;
        }
        if (bVar12 != 0) {
          uVar6 = -uVar6;
        }
        local_18 = (int *)(**(code **)(*(int *)*param_2 + 100))(puVar8);
        if (local_18 != (int *)0x0) {
          *(short *)((int)local_18 + 6) = *(short *)((int)local_18 + 6) + 1;
          local_18[2] = local_18[2] + 1;
        }
        (**(code **)(*local_18 + 0x10))(uVar6);
        FUN_0110ea70(&local_18,uVar6);
        if (local_18 != (int *)0x0) {
          *(short *)((int)local_18 + 6) = *(short *)((int)local_18 + 6) + -1;
          piVar2 = local_18 + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)*local_18)(1);
          }
        }
        local_14 = (undefined4 *)((int)puVar8 + 1);
      } while ((int)local_14 < (int)param_3);
    }
    break;
  case 9:
    if (*piVar2 != 9) {
      return;
    }
    if (*(int *)piVar2[1] != 3) {
      return;
    }
    iVar3 = piVar2[2];
    if ((((iVar3 != 4) && (iVar3 != 8)) && (iVar3 != 0xc)) && (iVar3 != 0x10)) {
      return;
    }
    iVar3 = (**(code **)(*(int *)*param_2 + 0x20))(local_48);
    if (iVar3 != 0) {
      uVar6 = FUN_010e0cc0();
      if (uVar6 == 4) {
        local_7c = 0;
        FUN_01445680(&local_6,1,1);
        local_14 = (undefined4 *)(local_6 & 1);
        uVar6 = local_6 >> 1 & 0x7fffffbf;
        bVar12 = 6;
        while ((char)local_6 < '\0') {
          FUN_01445680(&local_5,1,1);
          bVar14 = bVar12 & 0x1f;
          bVar12 = bVar12 + 7;
          uVar6 = uVar6 | (local_5 & 0xffffff7f) << bVar14;
          local_6 = local_5;
        }
        if (local_14 != (undefined4 *)0x0) {
          uVar6 = -uVar6;
        }
      }
      iVar3 = 0;
      if ((int)param_3 < 1) {
        return;
      }
      local_c = local_10 + 1;
      do {
        FUN_01445680(local_88,4,uVar6);
        (**(code **)(*(int *)*param_2 + 0x30))(iVar3,local_88);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_3);
      return;
    }
    local_18 = (int *)FUN_010e0cc0();
    local_c = local_18;
    if (local_18 == (int *)&DAT_00000004) {
      local_c = local_18;
      FUN_01445680(&local_6,1,1);
      local_14 = (undefined4 *)(local_6 & 1);
      piVar2 = (int *)(local_6 >> 1 & 0x7fffffbf);
      bVar12 = 6;
      while ((char)local_6 < '\0') {
        FUN_01445680(&local_5,1,1);
        bVar14 = bVar12 & 0x1f;
        bVar12 = bVar12 + 7;
        piVar2 = (int *)((uint)piVar2 | (local_5 & 0xffffff7f) << bVar14);
        local_6 = local_5;
      }
      local_c = piVar2;
      if (local_14 != (undefined4 *)0x0) {
        local_c = (int *)-(int)piVar2;
      }
    }
    piVar2 = local_18;
    uVar6 = param_3;
    uVar13 = (int)local_18 * param_3;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0x80000000;
    if (0 < (int)uVar13) {
      FUN_0100a210(&PTR_vftable_018e9b8c,&local_24,((int)uVar13 < 0) - 1 & uVar13,4);
    }
    local_20 = uVar13;
    FUN_01445680(local_24,4,(int)local_c * uVar6);
    if (piVar2 != local_c) {
      iVar3 = 0;
      puVar8 = (undefined4 *)(local_24 + (uVar6 - 1) * (int)local_c * 4);
      puVar5 = (undefined4 *)(local_24 + (uVar6 - 1) * (int)piVar2 * 4);
      if (3 < (int)uVar6) {
        iVar11 = (uVar6 - 4 >> 2) + 1;
        iVar3 = iVar11 * 4;
        puVar4 = puVar5;
        puVar10 = puVar8;
        do {
          puVar4[3] = 0;
          puVar4[2] = puVar10[2];
          puVar8 = puVar10 + -0xc;
          puVar5 = puVar4 + -0x10;
          iVar11 = iVar11 + -1;
          puVar4[1] = puVar10[1];
          uVar9 = *puVar10;
          puVar4[-1] = 0;
          *puVar4 = uVar9;
          puVar4[-2] = puVar10[-1];
          puVar4[-3] = puVar10[-2];
          uVar9 = puVar10[-3];
          puVar4[-5] = 0;
          puVar4[-4] = uVar9;
          puVar4[-6] = puVar10[-4];
          puVar4[-7] = puVar10[-5];
          uVar9 = puVar10[-6];
          puVar4[-9] = 0;
          puVar4[-8] = uVar9;
          puVar4[-10] = puVar10[-7];
          puVar4[-0xb] = puVar10[-8];
          puVar4[-0xc] = puVar10[-9];
          puVar4 = puVar5;
          puVar10 = puVar8;
        } while (iVar11 != 0);
      }
      if (iVar3 < (int)uVar6) {
        iVar3 = uVar6 - iVar3;
        puVar5 = puVar5 + 2;
        puVar8 = puVar8 + 1;
        do {
          puVar5[1] = 0;
          *puVar5 = puVar8[1];
          iVar3 = iVar3 + -1;
          puVar5[-1] = *puVar8;
          puVar5[-2] = puVar8[-1];
          puVar5 = puVar5 + -4;
          puVar8 = puVar8 + -3;
        } while (iVar3 != 0);
      }
    }
    (**(code **)(*(int *)*param_2 + 0x70))(local_24,uVar6);
    if ((int)local_1c < 0) {
      return;
    }
    uVar6 = local_1c * 4;
    goto LAB_0110eb4d;
  }
  return;
}

// 0110F510  FUN_0110f510  size=1197  [run]
void __thiscall FUN_0110f510(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  undefined8 uVar14;
  undefined4 local_6c [16];
  undefined8 local_2c;
  undefined8 local_24;
  int *local_1c;
  uint local_18;
  undefined4 *local_14;
  int local_10;
  int *local_c;
  byte local_5;
  
  puVar7 = (undefined8 *)param_4;
  local_c = param_2;
  if (param_2 != (int *)0x0) {
    *(short *)((int)param_2 + 6) = *(short *)((int)param_2 + 6) + 1;
    param_2[2] = param_2[2] + 1;
  }
  piVar6 = *(int **)((int)param_4 + 8);
  iVar5 = *piVar6;
  if ((iVar5 == 9) &&
     ((*(int *)piVar6[1] != 3 ||
      ((((iVar11 = piVar6[2], iVar11 != 4 && (iVar11 != 8)) && (iVar11 != 0xc)) && (iVar11 != 0x10))
      )))) {
    puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x28))(param_3);
    if (puVar3 != (undefined4 *)0x0) {
      *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + 1;
      puVar3[2] = puVar3[2] + 1;
    }
    param_4 = puVar3;
    uVar4 = FUN_010e0cc0();
    FUN_0110ea70(&param_4,uVar4);
    if (puVar3 != (undefined4 *)0x0) {
      *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1;
      piVar6 = puVar3 + 2;
      *piVar6 = *piVar6 + -1;
      if (*piVar6 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    if (local_c == (int *)0x0) {
      return;
    }
    *(short *)((int)local_c + 6) = *(short *)((int)local_c + 6) + -1;
    piVar6 = local_c + 2;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 != 0) {
      return;
    }
    (**(code **)*local_c)(1);
    return;
  }
  if (iVar5 == 8) {
    local_1c = (int *)(**(code **)(*(int *)param_1[5] + 0x2c))();
    local_2c = *puVar7;
    local_24 = puVar7[1];
    FUN_01445680((int)&param_4 + 3,1,1);
    local_14 = (undefined4 *)(param_4._3_1_ & 1);
    puVar3 = (undefined4 *)(param_4._3_1_ >> 1 & 0x7fffffbf);
    local_10 = 6;
    if ((int)param_4 < 0) {
      do {
        FUN_01445680(&local_5,1,1);
        iVar5 = local_10 + 7;
        puVar3 = (undefined4 *)((uint)puVar3 | (local_5 & 0xffffff7f) << ((byte)local_10 & 0x1f));
        local_10 = iVar5;
      } while ((char)local_5 < '\0');
    }
    if (local_14 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)-(int)puVar3;
    }
    local_14 = puVar3;
    iVar5 = FUN_010e5220();
    if ((**(int **)(iVar5 + 4) == 6) && (iVar5 = FUN_010e0cd0(), iVar5 == 0)) {
      FUN_01445680((int)&param_4 + 3,1,1);
      local_18 = param_4._3_1_ & 1;
      uVar9 = param_4._3_1_ >> 1 & 0x7fffffbf;
      local_10 = 6;
      if ((int)param_4 < 0) {
        do {
          FUN_01445680(&local_5,1,1);
          iVar5 = local_10 + 7;
          uVar9 = uVar9 | (local_5 & 0xffffff7f) << ((byte)local_10 & 0x1f);
          local_10 = iVar5;
        } while ((char)local_5 < '\0');
      }
      if (local_18 != 0) {
        uVar9 = -uVar9;
      }
      uVar4 = (**(code **)(**(int **)(param_1[7] + uVar9 * 4) + 8))();
      uVar4 = FUN_010e1290(uVar4);
      uVar4 = FUN_010e16c0(uVar4);
      local_24 = CONCAT44(local_24._4_4_,uVar4);
    }
    piVar6 = (int *)(**(code **)(*(int *)param_1[5] + 0x14))(&local_c,param_3,&local_2c);
    puVar3 = local_14;
    if (piVar6 != (int *)0x0) {
      *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + 1;
      piVar6[2] = piVar6[2] + 1;
    }
    param_4 = piVar6;
    (**(code **)(*piVar6 + 0x10))(local_14);
    FUN_0110ea70(&param_4,puVar3);
    *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + -1;
    piVar1 = piVar6 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*piVar6)(1);
    }
    if (local_c == (int *)0x0) {
      return;
    }
    *(short *)((int)local_c + 6) = *(short *)((int)local_c + 6) + -1;
    piVar6 = local_c + 2;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 != 0) {
      return;
    }
    (**(code **)*local_c)(1);
    return;
  }
  switch(iVar5) {
  case 2:
    FUN_01445680((int)&param_4 + 3,1,1);
    puVar7 = (undefined8 *)((uint)param_4 >> 0x18);
    pcVar8 = *(code **)(*param_2 + 0x44);
    goto LAB_0110f993;
  case 3:
    fVar13 = (float10)FUN_0110cca0();
    param_4 = (int *)(float)fVar13;
    pcVar8 = *(code **)(*param_2 + 0x50);
    puVar7 = (undefined8 *)param_4;
    goto LAB_0110f993;
  case 4:
    local_1c = param_1 + 1;
    FUN_01445680((int)&param_4 + 3,1,1);
    local_18 = param_4._3_1_ & 1;
    uVar9 = param_4._3_1_ >> 1 & 0xffffffbf;
    uVar10 = 0;
    local_10 = 6;
    if (((uint)param_4 & 0x80000000) != 0) {
      do {
        FUN_01445680(&local_5,1,1);
        bVar2 = local_5;
        uVar14 = __allshl();
        local_10 = local_10 + 7;
        uVar9 = uVar9 | (uint)uVar14;
        uVar10 = uVar10 | (uint)((ulonglong)uVar14 >> 0x20);
      } while ((bVar2 & 0x80) != 0);
    }
    if (local_18 != 0) {
      bVar12 = uVar9 != 0;
      uVar9 = -uVar9;
      uVar10 = -(uVar10 + bVar12);
    }
    (**(code **)(*param_2 + 0x40))(param_3,uVar9,uVar10);
    break;
  case 5:
    puVar7 = (undefined8 *)FUN_0110d8b0();
    pcVar8 = *(code **)(*param_2 + 0x54);
LAB_0110f993:
    (*pcVar8)(param_3,puVar7);
    break;
  case 6:
    if (1 < *param_1) {
      iVar5 = *(int *)param_1[5];
      uVar4 = FUN_010e0cd0();
      uVar4 = (**(code **)(iVar5 + 0x24))(uVar4);
      puVar3 = (undefined4 *)FUN_0110fa20(&local_14,3,uVar4);
      (**(code **)(*param_2 + 0x5c))(param_3,*puVar3);
      if (local_14 != (undefined4 *)0x0) {
        *(short *)((int)local_14 + 6) = *(short *)((int)local_14 + 6) + -1;
        piVar6 = local_14 + 2;
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
          (**(code **)*local_14)(1);
        }
      }
      break;
    }
  case 7:
    FUN_011104c0(param_2,param_3);
    break;
  case 9:
    if (((iVar5 == 9) && (*(int *)piVar6[1] == 3)) &&
       ((iVar5 = piVar6[2], iVar5 == 4 || (((iVar5 == 8 || (iVar5 == 0xc)) || (iVar5 == 0x10)))))) {
      iVar5 = FUN_010e0cc0();
      iVar11 = 0;
      if (0 < iVar5) {
        do {
          FUN_01445680(&param_4,4,1);
          local_6c[iVar11] = param_4;
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar5);
      }
      (**(code **)(*param_2 + 0x48))(param_3,local_6c,iVar5);
    }
  }
  if (local_c != (int *)0x0) {
    *(short *)((int)local_c + 6) = *(short *)((int)local_c + 6) + -1;
    piVar6 = local_c + 2;
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      (**(code **)*local_c)(1);
    }
  }
  return;
}

// 0110F9E0  FUN_0110f9e0  size=53  [run]
int __thiscall FUN_0110f9e0(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  FUN_0110e840();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,0x18);
  }
  return param_1;
}


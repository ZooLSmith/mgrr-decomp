// src/unsorted/unit_01292FA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01292FA0..01293212, 6 functions

#include "types.h"

// 01292FA0  FUN_01292fa0  size=35  [run]
void __thiscall FUN_01292fa0(undefined1 *param_1,undefined1 param_2,undefined2 param_3)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0x210;
  *(undefined2 *)(param_1 + 4) = param_3;
  *(undefined2 *)(param_1 + 6) = 0xffff;
  return;
}

// 01292FD0  FUN_01292fd0  size=74  [run]
void __thiscall
FUN_01292fd0(undefined2 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 *param_5)

{
  undefined8 uVar1;
  
  *param_1 = 0x1000;
  *(undefined1 *)(param_1 + 1) = 2;
  param_1[2] = 0x30;
  param_1[3] = 0xffff;
  *(undefined8 *)(param_1 + 0x10) = *param_5;
  uVar1 = param_5[1];
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 10) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  return;
}

// 01293030  FUN_01293030  size=1  [run]
void FUN_01293030(void)

{
  return;
}

// 01293105  FUN_01293105  size=26  [run]
int __fastcall FUN_01293105(uint param_1)

{
  int in_EAX;
  int iVar1;
  uint uVar2;
  
  if ((int)param_1 < 8) {
    param_1 = 8;
  }
  uVar2 = (in_EAX + 0x1aU) % param_1;
  iVar1 = 0;
  if (uVar2 != 0) {
    iVar1 = param_1 - uVar2;
  }
  return iVar1;
}

// 0129311F  FUN_0129311f  size=123  [run]
void FUN_0129311f(void)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  void *_Dst;
  int unaff_EDI;
  
  _Dst = (void *)(unaff_EDI + 0x1fU & 0xfffffff8);
  iVar2 = (int)_Dst - (unaff_EDI + 0x18);
  *(int *)(unaff_EDI + 4) = in_EAX;
  _memset(_Dst,0,0x16);
  uVar1 = FUN_01293105();
  *(undefined4 *)((int)_Dst + 4) = 0;
  *(ushort *)((int)_Dst + 0xe) = uVar1;
  *(undefined2 *)((int)_Dst + 0x10) = 0;
  *(undefined1 *)((int)_Dst + 0xd) = 0;
  *(uint *)((int)_Dst + 8) = ((in_EAX - (uint)(ushort)(uVar1 + 0x1a)) - iVar2) + -0x18;
  *(uint *)((uVar1 + 0x1d + (int)_Dst & 0xfffffff8) - 4) = uVar1 + 0x1a;
  iVar2 = iVar2 + 0x18;
  *(void **)(unaff_EDI + 0x10) = _Dst;
  *(void **)(unaff_EDI + 0x14) = _Dst;
  *(int *)(unaff_EDI + 0xc) = iVar2;
  *(int *)(unaff_EDI + 8) = iVar2;
  return;
}

// 01293212  FUN_01293212  size=98  [run]
int * FUN_01293212(int param_1)

{
  ushort uVar1;
  int in_EAX;
  int *piVar2;
  
  piVar2 = *(int **)(in_EAX + 0x14);
  do {
    if ((char)piVar2[3] == '\0') {
      uVar1 = FUN_01293105();
      if ((int)((uint)uVar1 + param_1) <=
          (int)((uint)*(ushort *)((int)piVar2 + 0xe) + (uint)*(ushort *)(piVar2 + 4) + piVar2[2])) {
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          return piVar2;
        }
        if (*(char *)((int)piVar2 + 0xd) == '\x02') {
          return piVar2;
        }
      }
      if (((piVar2[2] == param_1) && (*(ushort *)((int)piVar2 + 0xe) == uVar1)) &&
         (*(char *)((int)piVar2 + 0xd) == '\x02')) {
        return piVar2;
      }
    }
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
  } while( true );
}


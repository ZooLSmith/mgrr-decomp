// src/hw/cHeapOneTime.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD2D40..00DD5130, 12 functions

#include "mgrr.h"

// 00DD2D40  Hw::cHeapOneTime::vf04  size=21  [class]
void __fastcall Hw::cHeapOneTime::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x48);
  return;
}

// 00DD2D60  Hw::cHeapOneTime::createChildHeap  size=18  [class]
undefined4 Hw::cHeapOneTime::createChildHeap(void)

{
  FUN_00dd56a0(&DAT_016c44cc);
  return 0;
}

// 00DD2D80  Hw::cHeapOneTime::vf34  size=14  [class]
void Hw::cHeapOneTime::vf34(void)

{
  FUN_00dd56a0(&DAT_016c4504);
  return;
}

// 00DD2D90  Hw::cHeapOneTime::vf0C  size=9  [class]
bool __fastcall Hw::cHeapOneTime::vf0C(int param_1)

{
  return *(int *)(param_1 + 0x40) != 0;
}

// 00DD2DA0  Hw::cHeapOneTime::vf10  size=4  [class]
undefined4 __fastcall Hw::cHeapOneTime::vf10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}

// 00DD2DB0  Hw::cHeapOneTime::vf14  size=7  [class]
int __fastcall Hw::cHeapOneTime::vf14(int param_1)

{
  return *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x58);
}

// 00DD2DC0  Hw::cHeapOneTime::vf18  size=13  [class]
uint __fastcall Hw::cHeapOneTime::vf18(int param_1)

{
  return ~-(uint)(*(uint *)(param_1 + 0x58) < 0x10) & *(uint *)(param_1 + 0x58);
}

// 00DD3840  Hw::cHeapOneTime::vf1C  size=29  [class]
int __thiscall Hw::cHeapOneTime::vf1C(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x50);
  }
  else {
    iVar1 = *(int *)(param_2 + -0xc);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1 + 0x10;
}

// 00DD40C0  Hw::cHeapOneTime::vf3C  size=102  [class]
void __thiscall Hw::cHeapOneTime::vf3C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -0x10);
    puVar3 = (undefined4 *)(param_2 + -0x10);
    piVar2 = *(int **)(param_2 + -0xc);
    if (*(int *)(param_1 + 0x20) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    if (iVar1 != 0) {
      *(int **)(iVar1 + 4) = piVar2;
    }
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar1;
    }
    if (*(undefined4 **)(param_1 + 0x50) == puVar3) {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + -0xc);
    }
    if (*(undefined4 **)(param_1 + 0x54) == puVar3) {
      *(undefined4 *)(param_1 + 0x54) = *puVar3;
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
  }
  return;
}

// 00DD49F0  Hw::cHeapOneTime::vf08  size=53  [class]
void __fastcall Hw::cHeapOneTime::vf08(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + -4) + 0x3c))(iVar1,0);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_00dd7270();
  return;
}

// 00DD4DE0  Hw::cHeapOneTime::vf28  size=3  [class]
undefined4 Hw::cHeapOneTime::vf28(void)

{
  return 0;
}

// 00DD5130  Hw::cHeapOneTime::vf00  size=108  [class]
undefined4 * __thiscall Hw::cHeapOneTime::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = param_1[0x10];
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + -4) + 0x3c))(iVar1,0);
    param_1[0x10] = 0;
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  FUN_00dd7270();
  *param_1 = cHeap::vftable;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_00dd7270();
  if ((param_2 & 1) != 0) {
    (**(code **)(*(int *)param_1[-1] + 0x3c))(param_1,0);
  }
  return param_1;
}


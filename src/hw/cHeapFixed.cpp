// src/hw/cHeapFixed.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD2C00..00DD50C0, 13 functions

#include "mgrr.h"

// 00DD2C00  Hw::cHeapFixed::createChildHeap  size=18  [class]
undefined4 Hw::cHeapFixed::createChildHeap(void)

{
  FUN_00dd56a0(&DAT_016c4430);
  return 0;
}

// 00DD2C20  Hw::cHeapFixed::vf34  size=14  [class]
void Hw::cHeapFixed::vf34(void)

{
  FUN_00dd56a0(&DAT_016c4464);
  return;
}

// 00DD2C30  Hw::cHeapFixed::vf0C  size=9  [class]
bool __fastcall Hw::cHeapFixed::vf0C(int param_1)

{
  return *(int *)(param_1 + 0x40) != 0;
}

// 00DD2C40  Hw::cHeapFixed::vf10  size=4  [class]
undefined4 __fastcall Hw::cHeapFixed::vf10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}

// 00DD2C50  Hw::cHeapFixed::vf14  size=25  [class]
int __fastcall Hw::cHeapFixed::vf14(int param_1)

{
  return (*(int *)(param_1 + 0x48) + 0xb + *(int *)(param_1 + 0x50) &
         ~(*(int *)(param_1 + 0x50) - 1U)) * (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x54));
}

// 00DD2C70  Hw::cHeapFixed::vf18  size=13  [class]
undefined4 __fastcall Hw::cHeapFixed::vf18(int param_1)

{
  if (*(int *)(param_1 + 0x54) == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x48);
}

// 00DD36F0  Hw::cHeapFixed::cHeapFixed  size=35  [class]
void __fastcall Hw::cHeapFixed::cHeapFixed(undefined4 *param_1)

{
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = vftable;
  param_1[0x10] = 0;
  return;
}

// 00DD3720  Hw::cHeapFixed::vf04  size=112  [class]
void __fastcall Hw::cHeapFixed::vf04(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x50);
  uVar3 = *(int *)(param_1 + 0x40) + 0xb + iVar5 & ~(iVar5 - 1U);
  uVar2 = *(int *)(param_1 + 0x48) + 0xb + iVar5 & ~(iVar5 - 1U);
  iVar5 = *(int *)(param_1 + 0x4c);
  puVar4 = (undefined4 *)(uVar3 - 0xc);
  if (iVar5 != 0) {
    piVar1 = (int *)(uVar3 - 8);
    do {
      piVar1[-1] = (-4 - uVar2) + (int)piVar1;
      *piVar1 = (uVar2 - 4) + (int)piVar1;
      piVar1[1] = param_1;
      piVar1 = (int *)((int)piVar1 + uVar2);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *puVar4 = 0;
  *(undefined4 *)((*(int *)(param_1 + 0x4c) + -1) * uVar2 + 4 + (int)puVar4) = 0;
  *(undefined4 **)(param_1 + 0x58) = puVar4;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
  return;
}

// 00DD3790  Hw::cHeapFixed::vf1C  size=29  [class]
int __thiscall Hw::cHeapFixed::vf1C(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x5c);
  }
  else {
    iVar1 = *(int *)(param_2 + -8);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1 + 0xc;
}

// 00DD3EA0  Hw::cHeapFixed::vf3C  size=126  [class]
void __thiscall Hw::cHeapFixed::vf3C(int param_1,void *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_2 != (void *)0x0) {
    piVar1 = (int *)((int)param_2 + -0xc);
    if (*(int *)(param_1 + 0x20) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((int)param_2 + -8);
    }
    else {
      *(undefined4 *)(*piVar1 + 4) = *(undefined4 *)((int)param_2 + -8);
    }
    if (*(int **)((int)param_2 + -8) != (int *)0x0) {
      **(int **)((int)param_2 + -8) = *piVar1;
    }
    *piVar1 = 0;
    puVar2 = *(undefined4 **)(param_1 + 0x58);
    *(undefined4 **)((int)param_2 + -8) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = piVar1;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    *(int **)(param_1 + 0x58) = piVar1;
    _memset(param_2,0xee,*(size_t *)(param_1 + 0x48));
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
  }
  return;
}

// 00DD4960  Hw::cHeapFixed::vf08  size=47  [class]
void __fastcall Hw::cHeapFixed::vf08(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + -4) + 0x3c))(iVar1,0);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_00dd7270();
  return;
}

// 00DD4DD0  Hw::cHeapFixed::vf28  size=3  [class]
undefined4 Hw::cHeapFixed::vf28(void)

{
  return 0;
}

// 00DD50C0  Hw::cHeapFixed::vf00  size=102  [class]
undefined4 * __thiscall Hw::cHeapFixed::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = param_1[0x10];
  if (iVar1 != 0) {
    (**(code **)(**(int **)(iVar1 + -4) + 0x3c))(iVar1,0);
    param_1[0x10] = 0;
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
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


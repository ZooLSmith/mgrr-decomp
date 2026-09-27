// src/hw/cHeapVariableBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD3280..00DD5040, 12 functions

#include "mgrr.h"

// 00DD3280  Hw::cHeapVariableBase::vf24  size=6  [class]
undefined4 Hw::cHeapVariableBase::vf24(void)

{
  return 0x14;
}

// 00DD32A0  Hw::cHeapVariableBase::vf10  size=4  [class]
undefined4 __fastcall Hw::cHeapVariableBase::vf10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}

// 00DD32B0  Hw::cHeapVariableBase::vf14  size=7  [class]
int __fastcall Hw::cHeapVariableBase::vf14(int param_1)

{
  return *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x50);
}

// 00DD32C0  Hw::cHeapVariableBase::vf18  size=15  [class]
uint __fastcall Hw::cHeapVariableBase::vf18(int param_1)

{
  return *(uint *)(param_1 + 0x50) & ((int)*(uint *)(param_1 + 0x50) < 0x14) - 1;
}

// 00DD3C20  Hw::cHeapVariableBase::vf1C  size=29  [class]
int __thiscall Hw::cHeapVariableBase::vf1C(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x44);
  }
  else {
    iVar1 = *(int *)(param_2 + -0x10);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1 + 0x14;
}

// 00DD3C40  Hw::cHeapVariableBase::vf20  size=22  [class]
uint Hw::cHeapVariableBase::vf20(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -8) & 0x3fffffff;
}

// 00DD3CB0  Hw::cHeapVariableBase::vf34  size=31  [class]
void __thiscall Hw::cHeapVariableBase::vf34(int param_1,int *param_2,int param_3)

{
  if (*param_2 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - param_3;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + param_3;
    HeapDestroy((HANDLE)*param_2);
  }
  return;
}

// 00DD3D10  FUN_00dd3d10  size=101  [callgraph]
void FUN_00dd3d10(void *param_1,size_t param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    _memset(param_1,0xee,param_2);
    return;
  case 1:
    _memset(param_1,0xee,param_2);
    return;
  case 2:
    _memset(param_1,0xee,param_2);
    return;
  case 3:
    _memset(param_1,0xee,param_2);
    return;
  default:
    return;
  }
}

// 00DD4590  Hw::cHeapVariableBase::allocImpl  size=383  [class]
void * __thiscall Hw::cHeapVariableBase::allocImpl(int param_1,int param_2,int param_3,int param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint dwBytes;
  LPVOID pvVar1;
  uint uVar2;
  uint _Size;
  void *_Dst;
  undefined4 *puVar3;
  
  _Size = param_2 + 3U & 0xfffffffc;
  uVar2 = param_3 + 3U & 0xfffffffc;
  switch(param_4) {
  case 1:
  case 2:
    if (uVar2 != 0x1000) {
      FUN_00dd5650(&DAT_016c45a4,uVar2,param_4);
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  dwBytes = _Size + 0x13 + uVar2;
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  switch(param_4) {
  case 0:
    pvVar1 = HeapAlloc(*(HANDLE *)(param_1 + 0x40),1,dwBytes);
    break;
  case 1:
  case 2:
    pvVar1 = (LPVOID)MemoryDevice::allocPhysical(dwBytes,uVar2);
    break;
  case 3:
    pvVar1 = (LPVOID)MemoryDevice::allocPhysical_2(dwBytes,uVar2);
    break;
  default:
    goto switchD_00dd4601_default;
  }
  if (pvVar1 != (LPVOID)0x0) {
    _Dst = (void *)(uVar2 + 0x13 + (int)pvVar1 & ~(uVar2 - 1));
    puVar3 = (undefined4 *)((int)_Dst + -0x14);
    if (dwBytes + (int)pvVar1 < (int)_Dst + _Size) {
      FUN_00dd56a0(&DAT_016c499c,*(undefined4 *)(param_1 + 0x38));
    }
    *(int *)((int)_Dst + -4) = param_1;
    *(LPVOID *)((int)_Dst + -0xc) = pvVar1;
    *(uint *)((int)_Dst + -8) = dwBytes & 0x3fffffff | param_4 << 0x1e;
    *(undefined4 *)((int)_Dst + -0x10) = 0;
    *puVar3 = *(undefined4 *)(param_1 + 0x48);
    if (*(int *)(param_1 + 0x48) != 0) {
      *(undefined4 **)(*(int *)(param_1 + 0x48) + 4) = puVar3;
    }
    *(undefined4 **)(param_1 + 0x48) = puVar3;
    if (*(int *)(param_1 + 0x44) == 0) {
      *(undefined4 **)(param_1 + 0x44) = puVar3;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - dwBytes;
    if ((param_4 == 0) || (param_4 == 3)) {
      _memset(_Dst,0xef,_Size);
    }
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return _Dst;
  }
switchD_00dd4601_default:
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return (void *)0x0;
}

// 00DD4730  Hw::cHeapVariableBase::vf3C  size=192  [class]
void __thiscall Hw::cHeapVariableBase::vf3C(int param_1,int param_2)

{
  LPVOID lpMem;
  uint uVar1;
  int *piVar2;
  HANDLE hHeap;
  
  if (param_2 == 0) {
    return;
  }
  piVar2 = (int *)(param_2 + -0x14);
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (*(uint *)(param_2 + -8) & 0x3fffffff);
  uVar1 = *(uint *)(param_2 + -8) >> 0x1e;
  lpMem = *(LPVOID *)(param_2 + -0xc);
  if (*piVar2 != 0) {
    *(undefined4 *)(*piVar2 + 4) = *(undefined4 *)(param_2 + -0x10);
  }
  if (*(int **)(param_2 + -0x10) != (int *)0x0) {
    **(int **)(param_2 + -0x10) = *piVar2;
  }
  if (*(int **)(param_1 + 0x44) == piVar2) {
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + -0x10);
  }
  if (*(int **)(param_1 + 0x48) == piVar2) {
    *(int *)(param_1 + 0x48) = *piVar2;
  }
  FUN_00dd3d10(lpMem,*(uint *)(param_2 + -8) & 0x3fffffff,uVar1);
  switch(uVar1) {
  case 0:
  case 3:
    hHeap = *(HANDLE *)(param_1 + 0x40);
    break;
  case 1:
    hHeap = *(HANDLE *)(param_1 + 0x40);
    break;
  case 2:
    hHeap = *(HANDLE *)(param_1 + 0x40);
    break;
  default:
    goto switchD_00dd47b2_default;
  }
  HeapFree(hHeap,1,lpMem);
switchD_00dd47b2_default:
  if (*(int *)(param_1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}

// 00DD4E70  Hw::cHeapVariableBase::vf28  size=4  [class]
undefined4 __fastcall Hw::cHeapVariableBase::vf28(int param_1)

{
  return *(undefined4 *)(param_1 + 0x54);
}

// 00DD5040  Hw::cHeapVariableBase::vf00  size=67  [class]
undefined4 * __thiscall Hw::cHeapVariableBase::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
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


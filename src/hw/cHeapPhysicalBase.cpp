// src/hw/cHeapPhysicalBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A1D250..00DD4F70, 21 functions

#include "types.h"

// 00A1D250  Hw::cHeapPhysicalBase::vf0C  size=9  [class]
bool __fastcall Hw::cHeapPhysicalBase::vf0C(int param_1)

{
  return *(int *)(param_1 + 0x44) != 0;
}

// 00DD2E30  Hw::cHeapPhysicalBase::vf04  size=18  [class]
void __fastcall Hw::cHeapPhysicalBase::vf04(int param_1)

{
  FUN_00dd5650(&DAT_016c453c,*(undefined4 *)(param_1 + 0x38));
  return;
}

// 00DD2E50  Hw::cHeapPhysicalBase::vf2C  size=10  [class]
void __thiscall Hw::cHeapPhysicalBase::vf2C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  return;
}

// 00DD2E60  FUN_00dd2e60  size=113  [between]
int __thiscall FUN_00dd2e60(int param_1,uint *param_2,int *param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (((*(int *)(param_1 + 0x54) != 0) && (*(uint *)(param_1 + 0x5c) <= param_4)) &&
     (*(uint *)(param_1 + 100) <= param_5)) {
    iVar1 = *(int *)(param_1 + 0x54);
  }
  do {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_4 <= *(uint *)(iVar1 + 8)) {
      uVar3 = *(int *)(iVar1 + 0xc) + iVar1 + 0x1f + param_5 & ~(param_5 - 1);
      iVar2 = ((uVar3 - *(int *)(iVar1 + 0xc)) - iVar1) + -0x20;
      if (iVar2 + param_4 <= *(uint *)(iVar1 + 8)) {
        *param_2 = uVar3;
        *param_3 = iVar2;
        return iVar1;
      }
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

// 00DD2EE0  FUN_00dd2ee0  size=132  [between]
undefined4 * __thiscall
FUN_00dd2ee0(int param_1,int *param_2,int *param_3,uint param_4,uint param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = *(undefined4 **)(param_1 + 0x48);
  if (((*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) &&
      (*(uint *)(param_1 + 0x60) <= param_4)) && (*(uint *)(param_1 + 0x68) <= param_5)) {
    puVar1 = *(undefined4 **)(param_1 + 0x58);
  }
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    uVar2 = puVar1[2];
    if (param_4 <= uVar2) {
      uVar5 = (int)puVar1 + param_5 + puVar1[3] + 0x1f & ~(param_5 - 1);
      iVar4 = ((uVar5 - puVar1[3]) - (int)puVar1) + -0x20;
      if (iVar4 + param_4 <= uVar2) {
        iVar3 = (((uVar2 - iVar4) - param_4) / param_5) * param_5;
        *param_2 = iVar3 + uVar5;
        *param_3 = iVar3 + iVar4;
        return puVar1;
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

// 00DD2F70  FUN_00dd2f70  size=185  [between]
int __thiscall FUN_00dd2f70(int param_1,int *param_2,int *param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = (param_4 + param_5 >> 6) + 1;
  if (uVar4 < 0x100) {
    if (0xff < uVar4) {
      return 0;
    }
  }
  else {
    uVar4 = 0xff;
  }
  do {
    for (iVar1 = *(int *)(param_1 + 0x70 + uVar4 * 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x18)) {
      uVar2 = *(uint *)(iVar1 + 8);
      if (param_4 <= uVar2) {
        uVar5 = *(int *)(iVar1 + 0xc) + iVar1 + 0x1f + param_5 & ~(param_5 - 1);
        iVar6 = ((uVar5 - *(int *)(iVar1 + 0xc)) - iVar1) + -0x20;
        if (param_4 + iVar6 <= uVar2) {
          iVar3 = (((uVar2 - iVar6) - param_4) / param_5) * param_5;
          *param_2 = iVar3 + uVar5;
          *param_3 = iVar3 + iVar6;
          return iVar1;
        }
      }
      if (uVar4 != 0xff) break;
    }
    uVar4 = uVar4 + 1;
    if (0xff < (int)uVar4) {
      return 0;
    }
  } while( true );
}

// 00DD3060  FUN_00dd3060  size=70  [between]
void __thiscall FUN_00dd3060(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 8) >> 6;
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  iVar1 = *(int *)(param_1 + 0x70 + uVar2 * 4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(int *)(param_1 + 0x70 + uVar2 * 4) = param_2;
    return;
  }
  *(int *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x70 + uVar2 * 4);
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(int *)(param_1 + 0x70 + uVar2 * 4) = param_2;
  return;
}

// 00DD30B0  FUN_00dd30b0  size=79  [between]
void __thiscall FUN_00dd30b0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 8) >> 6;
  if (0xff < uVar1) {
    uVar1 = 0xff;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x14) + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0x18) + 0x14) = *(undefined4 *)(param_2 + 0x14);
  }
  if (*(int *)(param_1 + 0x70 + uVar1 * 4) == param_2) {
    *(undefined4 *)(param_1 + 0x70 + uVar1 * 4) = *(undefined4 *)(param_2 + 0x18);
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}

// 00DD3100  Hw::cHeapPhysicalBase::vf18  size=94  [class]
int __fastcall Hw::cHeapPhysicalBase::vf18(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x6c) == 0) {
    iVar3 = *(int *)(param_1 + 0x44);
    if (iVar3 == 0) {
      return 0;
    }
    do {
      if (uVar4 <= *(uint *)(iVar3 + 8)) {
        uVar4 = *(uint *)(iVar3 + 8);
      }
      iVar3 = *(int *)(iVar3 + 4);
    } while (iVar3 != 0);
  }
  else {
    iVar3 = 0xff;
    piVar2 = (int *)(param_1 + 0x46c);
    while (iVar1 = *piVar2, iVar1 == 0) {
      piVar2 = piVar2 + -1;
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return 0;
      }
    }
    do {
      if (uVar4 <= *(uint *)(iVar1 + 8)) {
        uVar4 = *(uint *)(iVar1 + 8);
      }
      iVar1 = *(int *)(iVar1 + 0x18);
    } while (iVar1 != 0);
  }
  if (uVar4 < 0x20) {
    return 0;
  }
  return uVar4 - 0x20;
}

// 00DD3990  Hw::cHeapPhysicalBase::vf1C  size=32  [class]
int __thiscall Hw::cHeapPhysicalBase::vf1C(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 4);
  }
  else {
    iVar1 = *(int *)(param_2 + -0x1c);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1 + 0x20;
}

// 00DD39B0  Hw::cHeapPhysicalBase::vf20  size=17  [class]
undefined4 Hw::cHeapPhysicalBase::vf20(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + -0x14);
}

// 00DD4290  Hw::cHeapPhysicalBase::vf38  size=409  [class]
int __thiscall Hw::cHeapPhysicalBase::vf38(int *param_1,int param_2,uint param_3,int param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_8;
  LPCRITICAL_SECTION local_4;
  
  uVar6 = param_2 + 3;
  uVar5 = param_3 + 3 & 0xfffffffc;
  param_3 = uVar5;
  switch(param_4) {
  case 1:
  case 2:
    if (uVar5 != 0x1000) {
      FUN_00dd5650(&DAT_016c45a4,uVar5,param_4);
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
  iVar7 = (uVar6 & 0xfffffffc) + 0x20;
  local_4 = lpCriticalSection;
  if (param_1[8] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_1[0x1b] == 0) {
    if (param_4 == 2) {
      iVar3 = FUN_00dd2ee0(&local_8,&param_2,iVar7,uVar5);
    }
    else {
      iVar3 = FUN_00dd2e60(&local_8,&param_2,iVar7,uVar5);
    }
  }
  else {
    iVar3 = FUN_00dd2f70(&local_8,&param_2,iVar7,uVar5);
  }
  iVar4 = local_8;
  if (iVar3 != 0) {
    piVar1 = (int *)(local_8 + -0x20);
    *(int **)(local_8 + -4) = param_1;
    *(undefined4 *)(local_8 + -0x1c) = *(undefined4 *)(iVar3 + 4);
    *piVar1 = iVar3;
    if (*(int **)(iVar3 + 4) != (int *)0x0) {
      **(int **)(iVar3 + 4) = (int)piVar1;
    }
    *(int **)(iVar3 + 4) = piVar1;
    if (param_1[0x12] == iVar3) {
      param_1[0x12] = (int)piVar1;
    }
    *(int *)(local_8 + -0x14) = iVar7;
    iVar2 = *(int *)(iVar3 + 8);
    *(int *)(local_8 + -0x10) = param_4;
    *(int *)(local_8 + -0x18) = (iVar2 - param_2) - iVar7;
    if (param_1[0x1b] != 0) {
      FUN_00dd30b0(iVar3);
    }
    *(int *)(iVar3 + 8) = param_2;
    if (param_1[0x1b] != 0) {
      FUN_00dd3060(iVar3);
      FUN_00dd3060(piVar1);
    }
    param_1[0x14] = param_1[0x14] - *(int *)(iVar4 + -0x14);
    if (param_4 == 2) {
      param_1[0x16] = (int)piVar1;
      param_1[0x18] = iVar7;
      param_1[0x1a] = param_3;
    }
    else {
      param_1[0x15] = (int)piVar1;
      param_1[0x17] = iVar7;
      param_1[0x19] = param_3;
    }
    if (local_4[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(local_4);
    }
    return local_8;
  }
  iVar3 = param_1[0xe];
  iVar4 = (**(code **)(*param_1 + 0x18))(iVar7);
  FUN_00dd5650(&DAT_016c491c,iVar3,iVar7 - iVar4);
  if (param_1[8] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00DD4440  Hw::cHeapPhysicalBase::vf3C  size=175  [class]
void __thiscall Hw::cHeapPhysicalBase::vf3C(int param_1,int param_2)

{
  int iVar1;
  int *_Dst;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    _Dst = (int *)(param_2 + -0x20);
    if (*(int *)(param_1 + 0x20) != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
    if (*(int **)(param_1 + 0x48) == _Dst) {
      *(int *)(param_1 + 0x48) = *_Dst;
    }
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_2 + -0x14);
    iVar1 = *_Dst;
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_00dd30b0(_Dst);
      FUN_00dd30b0(iVar1);
    }
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_2 + -0x1c);
    *(int *)(iVar1 + 8) =
         *(int *)(iVar1 + 8) + *(int *)(param_2 + -0x18) + *(int *)(param_2 + -0x14);
    if (*(int **)(param_2 + -0x1c) != (int *)0x0) {
      **(int **)(param_2 + -0x1c) = iVar1;
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_00dd3060(iVar1);
    }
    _memset(_Dst,0xee,*(size_t *)(param_2 + -0x14));
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    }
  }
  return;
}

// 00DD4DF0  Hw::cHeapPhysicalBase::vf10  size=4  [class]
undefined4 __fastcall Hw::cHeapPhysicalBase::vf10(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}

// 00DD4E00  Hw::cHeapPhysicalBase::vf14  size=7  [class]
int __fastcall Hw::cHeapPhysicalBase::vf14(int param_1)

{
  return *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x50);
}

// 00DD4E10  Hw::cHeapPhysicalBase::vf28  size=3  [class]
undefined4 Hw::cHeapPhysicalBase::vf28(void)

{
  return 0;
}

// 00DD4E20  Hw::cHeapPhysicalBase::vf40  size=6  [class]
undefined4 Hw::cHeapPhysicalBase::vf40(void)

{
  return 1;
}

// 00DD4E30  Hw::cHeapPhysicalBase::vf24  size=6  [class]
undefined4 Hw::cHeapPhysicalBase::vf24(void)

{
  return 0x20;
}

// 00DD4E40  Hw::cHeapPhysicalBase::vf30  size=18  [class]
undefined4 Hw::cHeapPhysicalBase::vf30(void)

{
  FUN_00dd56a0(&DAT_016c4728);
  return 0;
}

// 00DD4E60  Hw::cHeapPhysicalBase::vf34  size=14  [class]
void Hw::cHeapPhysicalBase::vf34(void)

{
  FUN_00dd56a0(&DAT_016c475c);
  return;
}

// 00DD4F70  Hw::cHeapPhysicalBase::vf00  size=88  [class]
undefined4 * __thiscall Hw::cHeapPhysicalBase::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
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


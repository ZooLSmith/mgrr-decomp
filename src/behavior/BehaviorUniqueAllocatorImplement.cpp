// src/behavior/BehaviorUniqueAllocatorImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A914F0..00A9C9B0, 11 functions

#include "mgrr.h"
#include "BehaviorUniqueAllocatorImplement.h"

// 00A914F0  FUN_00a914f0  size=244  [callgraph]
void __fastcall FUN_00a914f0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)FUN_00dd3580(0x14008,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 2;
    *puVar1 = 0x800;
    iVar4 = 0x7ff;
    puVar1 = puVar2;
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[8] = 0;
      FUN_00dd7240();
      puVar1 = puVar1 + 10;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *param_1 = (int)puVar2;
  iVar4 = FUN_00dd3580(0x2000,&DAT_01b7bd48);
  param_1[1] = iVar4;
  iVar3 = 0;
  param_1[2] = 0;
  iVar4 = 0;
  do {
    *(int *)(iVar4 + *param_1) = iVar3;
    iVar4 = iVar4 + 0x28;
    iVar3 = iVar3 + 1;
  } while (iVar4 < 0x14000);
  iVar4 = 0x13fb0;
  do {
    iVar3 = iVar4 + 0x28 + *param_1;
    if (iVar3 != 0) {
      *(int *)(param_1[1] + param_1[2] * 4) = iVar3;
      param_1[2] = param_1[2] + 1;
    }
    if (*param_1 + iVar4 != 0) {
      *(int *)(param_1[1] + param_1[2] * 4) = *param_1 + iVar4;
      param_1[2] = param_1[2] + 1;
    }
    iVar3 = iVar4 + -0x28 + *param_1;
    if (iVar3 != 0) {
      *(int *)(param_1[1] + param_1[2] * 4) = iVar3;
      param_1[2] = param_1[2] + 1;
    }
    iVar3 = iVar4 + -0x50 + *param_1;
    if (iVar3 != 0) {
      *(int *)(param_1[1] + param_1[2] * 4) = iVar3;
      param_1[2] = param_1[2] + 1;
    }
    iVar4 = iVar4 + -0xa0;
  } while (-0x50 < iVar4);
  return;
}

// 00A91670  BehaviorUniqueAllocatorImplement::BehaviorUniqueAllocatorImplement  size=31  [class]
undefined4 * __fastcall
BehaviorUniqueAllocatorImplement::BehaviorUniqueAllocatorImplement(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00a914f0();
  return param_1;
}

// 00A916D0  BehaviorUniqueAllocatorImplement::vf04  size=25  [class]
void __thiscall BehaviorUniqueAllocatorImplement::vf04(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4) = param_2;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  return;
}

// 00A916F0  BehaviorUniqueAllocatorImplement::vf08  size=5  [class]
undefined4 BehaviorUniqueAllocatorImplement::vf08(void)

{
  return 0;
}

// 00A91700  BehaviorUniqueAllocatorImplement::vf0C  size=9  [class]
int __fastcall BehaviorUniqueAllocatorImplement::vf0C(int param_1)

{
  return 0x800 - *(int *)(param_1 + 0xc);
}

// 00A91710  BehaviorUniqueAllocatorImplement::vf10  size=37  [class]
float10 __fastcall BehaviorUniqueAllocatorImplement::vf10(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = 0x800 - *(int *)(param_1 + 0xc);
  fVar2 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar2 = fVar2 + (float10)4.2949673e+09;
  }
  return fVar2 * (float10)0.00048828125 * (float10)100.0;
}

// 00A91740  FUN_00a91740  size=68  [between]
int __fastcall FUN_00a91740(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4);
  if (*(int *)(iVar1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 8));
  }
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  if (*(int *)(iVar1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 8));
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 4) = 0;
  return iVar1;
}

// 00A91790  BehaviorUniqueAllocatorImplement::vf00  size=68  [class]
int __fastcall BehaviorUniqueAllocatorImplement::vf00(int param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar1 = *(int *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4);
  if (*(int *)(iVar1 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(iVar1 + 8));
  }
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  if (*(int *)(iVar1 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar1 + 8));
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4) = 0;
  return iVar1;
}

// 00A9C8D0  FUN_00a9c8d0  size=96  [callgraph]
void __fastcall FUN_00a9c8d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + -8);
    iVar2 = *piVar1;
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      FUN_00dd7270();
      FUN_00dd7270();
    }
    FUN_00dd4940(piVar1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_00dd4940(param_1[1]);
    param_1[1] = 0;
  }
  return;
}

// 00A9C930  BehaviorUniqueAllocatorImplement::BehaviorUniqueAllocatorImplement  size=88  [class]
bool BehaviorUniqueAllocatorImplement::BehaviorUniqueAllocatorImplement(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x10,&DAT_01b7bd48);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = vftable;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    FUN_00a914f0();
    DAT_01be9bf0 = puVar1;
    return puVar1 != (undefined4 *)0x0;
  }
  DAT_01be9bf0 = (undefined4 *)0x0;
  return false;
}

// 00A9C9B0  BehaviorUniqueAllocatorImplement::vf14  size=45  [class]
undefined4 * __thiscall BehaviorUniqueAllocatorImplement::vf14(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00a9c8d0();
  *param_1 = BehaviorUniqueAllocator::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


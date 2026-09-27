// src/unsorted/unit_00C2D7B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C2D7B0..00C2DAD0, 11 functions

#include "mgrr.h"

// 00C2D7B0  FUN_00c2d7b0  size=14  [run]
void __fastcall FUN_00c2d7b0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// 00C2D7C0  FUN_00c2d7c0  size=14  [run]
void __fastcall FUN_00c2d7c0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// 00C2D7D0  FUN_00c2d7d0  size=26  [run]
void __fastcall FUN_00c2d7d0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  param_1[1] = uVar1;
  if (1 < DAT_01d64254) {
    *param_1 = uVar1 | 1;
    return;
  }
  *param_1 = uVar1 & 0xfffffffe;
  return;
}

// 00C2D7F0  FUN_00c2d7f0  size=44  [run]
undefined4 __thiscall FUN_00c2d7f0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  piVar1 = piVar3 + *(int *)(param_1 + 8);
  uVar2 = 0;
  if (piVar3 != piVar1) {
    while (*piVar3 != param_2) {
      piVar3 = piVar3 + 1;
      if (piVar3 == piVar1) {
        return uVar2;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

// 00C2D860  thunk_FUN_00c1c060  size=5  [run]
void __fastcall thunk_FUN_00c1c060(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x40;
  puVar1 = (undefined4 *)(param_1 + 8);
  do {
    puVar1[4] = 0;
    puVar1[-2] = 0;
    puVar1[3] = 0xffffffff;
    puVar1[-1] = 0;
    puVar1[2] = 0xffffffff;
    *puVar1 = 0;
    puVar1[5] = 0;
    iVar2 = iVar2 + -1;
    puVar1[1] = 0x3f800000;
    puVar1 = puVar1 + 8;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x800) = 0;
  return;
}

// 00C2D870  thunk_FUN_00c1c060  size=5  [run]
void __fastcall thunk_FUN_00c1c060(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x40;
  puVar1 = (undefined4 *)(param_1 + 8);
  do {
    puVar1[4] = 0;
    puVar1[-2] = 0;
    puVar1[3] = 0xffffffff;
    puVar1[-1] = 0;
    puVar1[2] = 0xffffffff;
    *puVar1 = 0;
    puVar1[5] = 0;
    iVar2 = iVar2 + -1;
    puVar1[1] = 0x3f800000;
    puVar1 = puVar1 + 8;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x800) = 0;
  return;
}

// 00C2D880  FUN_00c2d880  size=193  [run]
void __fastcall FUN_00c2d880(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iStack_c;
  int iStack_8;
  
  uVar2 = 0;
  iVar1 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if (iVar1 != 0) {
    FUN_00a7c8b0();
    uVar4 = 0;
    iStack_c = 0;
    if (0 < *(int *)(param_1 + 0x800)) {
      puVar3 = (uint *)(param_1 + 0x1c);
      do {
        *puVar3 = *puVar3 & 0xffffffef;
        if ((*puVar3 & 1) != 0) {
          if (puVar3[-1] == 1) {
            if (uVar4 < 10) {
              FUN_00c1d2f0(puVar3 + -7,puVar3[-3]);
              FUN_00cb8e60(uVar4,puVar3 + -7);
              uVar4 = uVar4 + 1;
            }
          }
          else if (uVar2 < 10) {
            FUN_00c1d240(puVar3 + -7,puVar3[-3]);
            FUN_00cb7850(uVar2,puVar3 + -7);
            uVar2 = uVar2 + 1;
          }
        }
        iStack_c = iStack_c + 1;
        puVar3 = puVar3 + 8;
      } while (iStack_c < *(int *)(iStack_8 + 0x800));
    }
  }
  return;
}

// 00C2D950  FUN_00c2d950  size=66  [run]
undefined4 __fastcall FUN_00c2d950(int param_1)

{
  undefined4 *puVar1;
  undefined4 extraout_ECX;
  int iVar2;
  
  iVar2 = 0x3f;
  puVar1 = (undefined4 *)(param_1 + 8);
  do {
    puVar1[4] = 0;
    puVar1[-2] = 0;
    puVar1[3] = 0xffffffff;
    puVar1[-1] = 0;
    puVar1[2] = 0xffffffff;
    *puVar1 = 0;
    puVar1[5] = 0;
    iVar2 = iVar2 + -1;
    puVar1[1] = 0x3f800000;
    puVar1 = puVar1 + 8;
  } while (-1 < iVar2);
  FUN_00c1c060();
  return extraout_ECX;
}

// 00C2D9B0  FUN_00c2d9b0  size=72  [run]
void FUN_00c2d9b0(undefined4 param_1)

{
  undefined4 uVar1;
  char local_100 [256];
  
  _sprintf_s(local_100,0x100,"_ObjectivePos.bxm",param_1);
  uVar1 = FUN_00de4550(local_100,0);
  cXmlBinary::cXmlBinary_36(uVar1);
  return;
}

// 00C2DA00  FUN_00c2da00  size=100  [run]
void __thiscall FUN_00c2da00(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1[0x2a] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  }
  piVar2 = (int *)param_1[1];
  piVar1 = piVar2 + param_1[2];
  if (piVar2 != piVar1) {
    do {
      if (*(int *)(*piVar2 + 0x4e0) == *(int *)(param_2 + 0x4e0)) {
        return;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  (**(code **)(*param_1 + 8))(&param_2);
  if (param_1[0x2a] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  }
  return;
}

// 00C2DAD0  FUN_00c2dad0  size=51  [run]
undefined4 __thiscall FUN_00c2dad0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  piVar1 = piVar2 + *(int *)(param_1 + 8);
  while( true ) {
    if (piVar2 == piVar1) {
      return 0;
    }
    if (*(int *)(*piVar2 + 0x4e0) == param_2) break;
    piVar2 = piVar2 + 1;
  }
  return *(undefined4 *)(*piVar2 + 0x4f0);
}


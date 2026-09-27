// src/unsorted/unit_00935480.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00935480..00935B10, 16 functions

#include "mgrr.h"

// 00935480  FUN_00935480  size=106  [run]
void __fastcall FUN_00935480(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x848)) {
    puVar1 = (undefined4 *)(param_1 + 0x800);
    do {
      (**(code **)(*(int *)*puVar1 + 0xe0))(0,&DAT_0164ee3c,1,0);
      (**(code **)(*(int *)*puVar1 + 0xe0))(0,&DAT_0164ee38,0,1);
      (**(code **)(*(int *)*puVar1 + 0xe0))(0,&DAT_0164ee34,0,1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x848));
  }
  return;
}

// 009354F0  FUN_009354f0  size=178  [run]
undefined4 * __fastcall FUN_009354f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x210] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  Hw::cTexture::cTexture_6();
  Hw::cTexture::cTexture_6();
  puVar2 = param_1;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  param_1[0x202] = 0;
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  param_1[0x206] = 0;
  param_1[0x207] = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  param_1[0x20e] = 0;
  param_1[0x20f] = 0;
  param_1[0x211] = 0xffffffff;
  return param_1;
}

// 009355B0  FUN_009355b0  size=58  [run]
void __thiscall FUN_009355b0(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + uVar3 * 4) != 0) {
      piVar1 = (int *)FUN_00a7c800();
      if (param_2 == 0) {
        pcVar2 = *(code **)(*piVar1 + 0x20);
      }
      else {
        pcVar2 = *(code **)(*piVar1 + 0x1c);
      }
      (*pcVar2)();
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x200);
  return;
}

// 009355F0  FUN_009355f0  size=34  [run]
void __thiscall FUN_009355f0(int param_1,int param_2)

{
  FUN_00a805f0();
  *(undefined4 *)(param_1 + param_2 * 4) = 0;
  *(int *)(param_1 + 0x840) = *(int *)(param_1 + 0x840) + -1;
  return;
}

// 00935620  FUN_00935620  size=140  [run]
void __fastcall FUN_00935620(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + uVar2 * 4) != 0) {
      FUN_00a805f0();
      *(undefined4 *)(param_1 + uVar2 * 4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x200);
  piVar3 = (int *)(param_1 + 0x800);
  iVar1 = 0x10;
  do {
    if (*piVar3 != 0) {
      HkRemovePhysicsSystem::HkRemovePhysicsSystem();
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 4))(1);
        *piVar3 = 0;
      }
    }
    piVar3 = piVar3 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00f972f0();
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 0x840) = 0;
  *(undefined4 *)(param_1 + 0x848) = 0;
  *(undefined4 *)(param_1 + 0x84c) = 0;
  *(undefined4 *)(param_1 + 0x844) = 0xffffffff;
  return;
}

// 009356B0  FUN_009356b0  size=70  [run]
undefined4 __thiscall FUN_009356b0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + uVar2 * 4) != 0) {
      iVar1 = FUN_00a7c800();
      iVar1 = FUN_00fdbbd0(iVar1 + 0x870,param_2);
      if (iVar1 != 0) {
        return *(undefined4 *)(param_1 + uVar2 * 4);
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x200);
  return 0;
}

// 00935700  FUN_00935700  size=69  [run]
undefined4 __thiscall FUN_00935700(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + uVar2 * 4) != 0) {
      iVar1 = FUN_00a7c800();
      iVar1 = FUN_00e03ea0(iVar1 + 0x870);
      if (iVar1 == param_2) {
        return *(undefined4 *)(param_1 + uVar2 * 4);
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x200);
  return 0;
}

// 00935750  FUN_00935750  size=10  [run]
undefined4 __thiscall FUN_00935750(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4);
}

// 00935760  FUN_00935760  size=81  [run]
void __thiscall FUN_00935760(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x848)) {
    piVar2 = (int *)(param_1 + 0x800);
    do {
      if (((int *)*piVar2 != (int *)0x0) &&
         (iVar1 = (**(code **)(*(int *)*piVar2 + 8))(), iVar1 != 0)) {
        (**(code **)(*(int *)*piVar2 + 0xdc))(param_2);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x848));
  }
  return;
}

// 009357C0  FUN_009357c0  size=90  [run]
void __thiscall FUN_009357c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x848)) {
    piVar2 = (int *)(param_1 + 0x800);
    do {
      if (((int *)*piVar2 != (int *)0x0) &&
         (iVar1 = (**(code **)(*(int *)*piVar2 + 8))(), iVar1 != 0)) {
        (**(code **)(*(int *)*piVar2 + 0xe0))(param_2,param_3,1,0);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x848));
  }
  return;
}

// 00935880  FUN_00935880  size=88  [run]
void __thiscall FUN_00935880(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x848)) {
    piVar2 = (int *)(param_1 + 0x800);
    do {
      if (((int *)*piVar2 != (int *)0x0) &&
         (iVar1 = (**(code **)(*(int *)*piVar2 + 8))(), iVar1 != 0)) {
        (**(code **)(*(int *)*piVar2 + 0x118))(param_2,param_3,0);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x848));
  }
  return;
}

// 009358E0  FUN_009358e0  size=134  [run]
undefined4 __thiscall FUN_009358e0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = param_2;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x848)) {
    piVar3 = (int *)(param_1 + 0x800);
    do {
      if ((int *)*piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*(int *)*piVar3 + 8))();
        if (iVar2 != 0) {
          param_2 = 0;
          iVar2 = (**(code **)(*(int *)*piVar3 + 0xe8))(uVar1,&param_2,0);
          if (iVar2 != 0) {
            *param_3 = param_2;
            return 1;
          }
        }
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x848));
  }
  *param_3 = 0;
  return 0;
}

// 00935A00  FUN_00935a00  size=54  [run]
void __fastcall FUN_00935a00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + uVar2 * 4) != 0) {
      iVar1 = FUN_00a7c8a0();
      *(uint *)(iVar1 + 0x4c0) = *(uint *)(iVar1 + 0x4c0) & 0xfffbffff | 0x30000;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x200);
  return;
}

// 00935A40  FUN_00935a40  size=119  [run]
undefined4 __fastcall FUN_00935a40(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((DAT_01bea064 & 0x20000000) != 0) {
    return 1;
  }
  uVar2 = 0;
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + uVar2 * 4) != 0) {
      iVar1 = FUN_00a7c8a0();
      if (((*(uint *)(iVar1 + 0x4c0) & 0x20000) != 0) && ((*(uint *)(iVar1 + 0x4c0) & 0x40000) == 0)
         ) {
        iVar1 = FUN_00a7c8a0();
        *(uint *)(iVar1 + 0x4c0) = *(uint *)(iVar1 + 0x4c0) | 0x40000;
        iVar3 = iVar3 + 1;
        if (1 < iVar3) {
          return 1;
        }
      }
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x200);
  return 0;
}

// 00935AC0  FUN_00935ac0  size=74  [run]
int __thiscall FUN_00935ac0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = param_2;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x848)) {
    puVar3 = (undefined4 *)(param_1 + 0x800);
    do {
      piVar2 = (int *)(**(code **)(*(int *)*puVar3 + 0x34))(&param_2,uVar1);
      if (*piVar2 != 0) {
        return *piVar2;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x848));
  }
  return 0;
}

// 00935B10  FUN_00935b10  size=85  [run]
undefined4 __thiscall FUN_00935b10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = param_2;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x848)) {
    puVar3 = (undefined4 *)(param_1 + 0x800);
    do {
      piVar2 = (int *)(**(code **)(*(int *)*puVar3 + 0x34))(&param_2,uVar1);
      if (*piVar2 != 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x848));
  }
  return 0;
}


// src/unsorted/unit_00C18350.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C18350..00C1A5A0, 103 functions

#include "types.h"

// 00C18350  FUN_00c18350  size=6  [run]
undefined4 FUN_00c18350(void)

{
  return DAT_01bea180;
}

// 00C18360  FUN_00c18360  size=33  [run]
void FUN_00c18360(void)

{
  if (DAT_01bea180 != (int *)0x0) {
    (**(code **)(*DAT_01bea180 + 0x9c))(1);
    DAT_01bea180 = (int *)0x0;
  }
  return;
}

// 00C18390  FUN_00c18390  size=88  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00c18390(int param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_00dd7240();
  *(undefined4 *)(param_1 + 0xe2e28) = 0;
  iVar2 = 0x20;
  do {
    FUN_00ca3540();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = 0;
  do {
    *(undefined4 *)((int)&DAT_01c72620 + uVar1) = 0;
    *(undefined4 *)((int)&DAT_01c722d8 + uVar1) = 0;
    uVar1 = uVar1 + 0x34c;
  } while (uVar1 < 0x6980);
  _DAT_01c78c5c = 0;
  _DAT_01c78c60 = 0;
  return;
}

// 00C183F0  FUN_00c183f0  size=73  [run]
void FUN_00c183f0(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0x20;
  do {
    FUN_00ca3540();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00dd7270();
  uVar1 = 0;
  do {
    *(undefined4 *)((int)&DAT_01c72620 + uVar1) = 0;
    *(undefined4 *)((int)&DAT_01c722d8 + uVar1) = 0;
    uVar1 = uVar1 + 0x34c;
  } while (uVar1 < 0x6980);
  return;
}

// 00C18440  FUN_00c18440  size=62  [run]
void __fastcall FUN_00c18440(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xe2e28) = 0;
  iVar1 = 0x20;
  do {
    FUN_00ca80a0();
    FUN_00c9df30();
    FUN_00c9df40();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00ca7890();
  return;
}

// 00C18480  FUN_00c18480  size=21  [run]
void FUN_00c18480(void)

{
  FUN_00ca66e0();
  FUN_00c183f0();
  return;
}

// 00C184A0  FUN_00c184a0  size=145  [run]
void __thiscall FUN_00c184a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  uVar1 = FUN_00e03ea0(param_3);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x4c);
  piVar5 = piVar4;
  do {
    iVar2 = FUN_00c9e010(uVar1);
    if ((iVar2 != 0) && (*piVar5 != 0)) {
      *piVar5 = 0;
      EnemySetReader::requestEnd(uVar3);
    }
    uVar3 = uVar3 + 1;
    piVar5 = piVar5 + 0x1c5c;
  } while (uVar3 < 0x20);
  uVar3 = 0;
  do {
    iVar2 = FUN_00c9dff0(uVar1);
    if ((iVar2 != 0) && (*piVar4 == 0)) {
      *piVar4 = 1;
      EnemySetReader::requestStart(uVar3);
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x1c5c;
  } while (uVar3 < 0x20);
  FUN_00ca33f0();
  return;
}

// 00C18540  FUN_00c18540  size=10  [run]
void FUN_00c18540(void)

{
  FUN_00ca5830();
  return;
}

// 00C18550  FUN_00c18550  size=10  [run]
void FUN_00c18550(void)

{
  FUN_00ca57e0();
  return;
}

// 00C18580  FUN_00c18580  size=62  [run]
void __thiscall FUN_00c18580(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((int)param_3 < 0) {
    puVar1 = (undefined4 *)(param_1 + 0x34);
    iVar2 = 0x20;
    do {
      *puVar1 = param_2;
      puVar1 = puVar1 + 0x1c5c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return;
  }
  if ((param_3 < 0x20) && (param_1 = param_3 * 0x7170 + 0x20 + param_1, param_1 != 0)) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
  }
  return;
}

// 00C185C0  FUN_00c185c0  size=71  [run]
undefined4 __thiscall FUN_00c185c0(int param_1,uint param_2)

{
  if ((DAT_01bea070 & 0x2000) != 0) {
    return 0;
  }
  if (0x1f < param_2) {
    return 0;
  }
  FUN_00ca7fd0();
  *(uint *)(param_1 + 0xe2e24) = param_2;
  return 1;
}

// 00C18610  FUN_00c18610  size=55  [run]
undefined4 __thiscall FUN_00c18610(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((((DAT_01bea070 & 0x2000) == 0) && (param_2 < 0x20)) &&
     (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca7ac0(param_3,1);
    return uVar1;
  }
  return 0;
}

// 00C18650  FUN_00c18650  size=73  [run]
undefined4 __thiscall FUN_00c18650(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((DAT_01bea070 & 0x2000) != 0) {
    return 0;
  }
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e770(param_3);
    uVar1 = FUN_00ca7ac0(uVar1,1);
    return uVar1;
  }
  return 0;
}

// 00C186A0  FUN_00c186a0  size=70  [run]
undefined4 __thiscall
FUN_00c186a0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  if ((((DAT_01bea070 & 0x2000) == 0) && (param_2 < 0x20)) &&
     (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00ca7640(param_3,param_4,param_5,param_6,param_7);
  }
  return 0;
}

// 00C18740  FUN_00c18740  size=46  [run]
uint __thiscall FUN_00c18740(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = FUN_00e03ea0(param_2);
  piVar3 = (int *)(param_1 + 0x28);
  uVar2 = 0;
  do {
    if (*piVar3 == iVar1) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 0x1c5c;
  } while (uVar2 < 0x20);
  return 0xffffffff;
}

// 00C18770  FUN_00c18770  size=10  [run]
void FUN_00c18770(void)

{
  FUN_009c4bf0();
  return;
}

// 00C18780  FUN_00c18780  size=36  [run]
void __thiscall FUN_00c18780(int param_1,uint param_2,undefined4 param_3)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00ca15d0(param_3);
  }
  return;
}

// 00C187B0  FUN_00c187b0  size=31  [run]
void __thiscall FUN_00c187b0(int param_1,uint param_2)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00ca1600();
  }
  return;
}

// 00C18830  FUN_00c18830  size=36  [run]
void __thiscall FUN_00c18830(int param_1,uint param_2,undefined4 param_3)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00c9ebb0(param_3);
  }
  return;
}

// 00C188E0  FUN_00c188e0  size=36  [run]
void __thiscall FUN_00c188e0(int param_1,uint param_2,undefined4 param_3)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00c9eca0(param_3);
  }
  return;
}

// 00C18A80  FUN_00c18a80  size=36  [run]
void __thiscall FUN_00c18a80(int param_1,uint param_2,undefined4 param_3)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00ca13f0(param_3);
  }
  return;
}

// 00C18AD0  FUN_00c18ad0  size=38  [run]
void __thiscall FUN_00c18ad0(int param_1,uint param_2,undefined4 param_3)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00ca7580(param_3,0);
  }
  return;
}

// 00C18B30  FUN_00c18b30  size=38  [run]
void __thiscall FUN_00c18b30(int param_1,uint param_2,undefined4 param_3)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00ca7580(param_3,1);
  }
  return;
}

// 00C18B60  FUN_00c18b60  size=39  [run]
void __thiscall FUN_00c18b60(int param_1,uint param_2)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00ca75d0();
    return;
  }
  return;
}

// 00C18B90  FUN_00c18b90  size=49  [run]
undefined4 __fastcall FUN_00c18b90(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  param_1 = param_1 + 0x20;
  do {
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar1 = FUN_00c9e190();
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x7170;
  } while (uVar2 < 0x20);
  return 1;
}

// 00C18BD0  FUN_00c18bd0  size=49  [run]
undefined4 __fastcall FUN_00c18bd0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  param_1 = param_1 + 0x20;
  do {
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar1 = FUN_00c9e0f0();
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x7170;
  } while (uVar2 < 0x20);
  return 1;
}

// 00C18C10  FUN_00c18c10  size=41  [run]
undefined4 __thiscall FUN_00c18c10(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e0b0(param_3);
    return uVar1;
  }
  return 0;
}

// 00C18C40  FUN_00c18c40  size=41  [run]
undefined4 __thiscall FUN_00c18c40(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca0760(param_3);
    return uVar1;
  }
  return 0;
}

// 00C18C70  FUN_00c18c70  size=69  [run]
undefined4 __thiscall FUN_00c18c70(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = FUN_00e03ea0(param_2);
  uVar2 = 0;
  piVar3 = (int *)(param_1 + 0x28);
  while (*piVar3 != iVar1) {
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 0x1c5c;
    if (0x1f < uVar2) {
      return 0;
    }
  }
  if (0x1f < uVar2) {
    return 0;
  }
  param_1 = uVar2 * 0x7170 + 0x20 + param_1;
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x10);
}

// 00C18CC0  FUN_00c18cc0  size=34  [run]
undefined4 __thiscall FUN_00c18cc0(int param_1,uint param_2)

{
  if ((param_2 < 0x20) && (param_1 = param_2 * 0x7170 + 0x20 + param_1, param_1 != 0)) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 0;
}

// 00C18CF0  FUN_00c18cf0  size=36  [run]
undefined4 __thiscall FUN_00c18cf0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e0f0();
    return uVar1;
  }
  return 0;
}

// 00C18D20  FUN_00c18d20  size=41  [run]
undefined4 __thiscall FUN_00c18d20(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e0d0(param_3);
    return uVar1;
  }
  return 0;
}

// 00C18D50  FUN_00c18d50  size=41  [run]
undefined4 __thiscall FUN_00c18d50(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca07d0(param_3);
    return uVar1;
  }
  return 0;
}

// 00C18D80  FUN_00c18d80  size=71  [run]
undefined4 __thiscall FUN_00c18d80(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = FUN_00e03ea0(param_2);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x28);
  while (*piVar4 != iVar1) {
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x1c5c;
    if (0x1f < uVar3) {
      return 0;
    }
  }
  if (0x1f < uVar3) {
    return 0;
  }
  if (uVar3 * 0x7170 + 0x20 + param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_00c9e0f0();
  return uVar2;
}

// 00C18DD0  FUN_00c18dd0  size=36  [run]
undefined4 __thiscall FUN_00c18dd0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e190();
    return uVar1;
  }
  return 0;
}

// 00C18E00  FUN_00c18e00  size=41  [run]
undefined4 __thiscall FUN_00c18e00(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e170(param_3);
    return uVar1;
  }
  return 0;
}

// 00C18E30  FUN_00c18e30  size=41  [run]
undefined4 __thiscall FUN_00c18e30(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca0840(param_3);
    return uVar1;
  }
  return 0;
}

// 00C18E60  FUN_00c18e60  size=75  [run]
undefined4 __thiscall FUN_00c18e60(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = FUN_00e03ea0(param_2);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x28);
  while (*piVar4 != iVar1) {
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x1c5c;
    if (0x1f < uVar3) {
      return 0;
    }
  }
  if (0x1f < uVar3) {
    return 0;
  }
  if (uVar3 * 0x7170 + 0x20 + param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_00ca0840(param_2);
  return uVar2;
}

// 00C18EB0  FUN_00c18eb0  size=41  [run]
undefined4 __thiscall FUN_00c18eb0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e500(param_3);
    return uVar1;
  }
  return 0;
}

// 00C18F40  FUN_00c18f40  size=36  [run]
undefined4 __thiscall FUN_00c18f40(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca08b0();
    return uVar1;
  }
  return 0;
}

// 00C18F70  FUN_00c18f70  size=41  [run]
undefined4 __thiscall FUN_00c18f70(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e210(param_3);
    return uVar1;
  }
  return 0;
}

// 00C18FA0  FUN_00c18fa0  size=41  [run]
undefined4 __thiscall FUN_00c18fa0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca0930(param_3);
    return uVar1;
  }
  return 0;
}

// 00C18FD0  FUN_00c18fd0  size=71  [run]
undefined4 __thiscall FUN_00c18fd0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = FUN_00e03ea0(param_2);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x28);
  while (*piVar4 != iVar1) {
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x1c5c;
    if (0x1f < uVar3) {
      return 0;
    }
  }
  if (0x1f < uVar3) {
    return 0;
  }
  if (uVar3 * 0x7170 + 0x20 + param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_00ca08b0();
  return uVar2;
}

// 00C19020  FUN_00c19020  size=49  [run]
undefined4 __fastcall FUN_00c19020(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  param_1 = param_1 + 0x20;
  do {
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar1 = FUN_00ca08b0();
      if (iVar1 == 0) {
        return 0;
      }
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x7170;
  } while (uVar2 < 0x20);
  return 1;
}

// 00C19090  FUN_00c19090  size=36  [run]
undefined4 __thiscall FUN_00c19090(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca0540();
    return uVar1;
  }
  return 0;
}

// 00C190C0  FUN_00c190c0  size=71  [run]
undefined4 __thiscall FUN_00c190c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = FUN_00e03ea0(param_2);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x28);
  while (*piVar4 != iVar1) {
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x1c5c;
    if (0x1f < uVar3) {
      return 0;
    }
  }
  if (0x1f < uVar3) {
    return 0;
  }
  if (uVar3 * 0x7170 + 0x20 + param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_00ca0540();
  return uVar2;
}

// 00C19110  FUN_00c19110  size=36  [run]
undefined4 __thiscall FUN_00c19110(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca0580();
    return uVar1;
  }
  return 0;
}

// 00C19140  FUN_00c19140  size=71  [run]
undefined4 __thiscall FUN_00c19140(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = FUN_00e03ea0(param_2);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x28);
  while (*piVar4 != iVar1) {
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x1c5c;
    if (0x1f < uVar3) {
      return 0;
    }
  }
  if (0x1f < uVar3) {
    return 0;
  }
  if (uVar3 * 0x7170 + 0x20 + param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_00ca0580();
  return uVar2;
}

// 00C19190  FUN_00c19190  size=36  [run]
undefined4 __thiscall FUN_00c19190(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca05c0();
    return uVar1;
  }
  return 0;
}

// 00C191C0  FUN_00c191c0  size=71  [run]
undefined4 __thiscall FUN_00c191c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = FUN_00e03ea0(param_2);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x28);
  while (*piVar4 != iVar1) {
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x1c5c;
    if (0x1f < uVar3) {
      return 0;
    }
  }
  if (0x1f < uVar3) {
    return 0;
  }
  if (uVar3 * 0x7170 + 0x20 + param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_00ca05c0();
  return uVar2;
}

// 00C19210  FUN_00c19210  size=35  [run]
void FUN_00c19210(void)

{
  int iVar1;
  
  iVar1 = 0x20;
  do {
    FUN_00c9e290();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C192D0  FUN_00c192d0  size=31  [run]
void __thiscall FUN_00c192d0(int param_1,uint param_2)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00c9e290();
  }
  return;
}

// 00C193B0  FUN_00c193b0  size=35  [run]
void FUN_00c193b0(void)

{
  int iVar1;
  
  iVar1 = 0x20;
  do {
    FUN_00ca0b50();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C193E0  FUN_00c193e0  size=31  [run]
void __thiscall FUN_00c193e0(int param_1,uint param_2)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00ca0b50();
  }
  return;
}

// 00C19400  FUN_00c19400  size=36  [run]
void __thiscall FUN_00c19400(int param_1,uint param_2,undefined4 param_3)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00ca09b0(param_3);
  }
  return;
}

// 00C19430  FUN_00c19430  size=69  [run]
void __thiscall FUN_00c19430(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = FUN_00e03ea0(param_2);
  uVar2 = 0;
  piVar3 = (int *)(param_1 + 0x28);
  do {
    if (*piVar3 == iVar1) {
      if ((uVar2 < 0x20) && (uVar2 * 0x7170 + 0x20 + param_1 != 0)) {
        FUN_00ca0b50();
      }
      return;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 0x1c5c;
  } while (uVar2 < 0x20);
  return;
}

// 00C194F0  FUN_00c194f0  size=39  [run]
undefined4 __thiscall FUN_00c194f0(int param_1,uint param_2,undefined4 param_3)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00c9e770(param_3);
  }
  return 0xffffffff;
}

// 00C19550  FUN_00c19550  size=37  [run]
int FUN_00c19550(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x20;
  do {
    iVar1 = FUN_00c9e3b0();
    iVar3 = iVar3 + iVar1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar3;
}

// 00C19580  FUN_00c19580  size=37  [run]
int FUN_00c19580(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x20;
  do {
    iVar1 = FUN_00c9e430();
    iVar3 = iVar3 + iVar1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar3;
}

// 00C195B0  FUN_00c195b0  size=37  [run]
int FUN_00c195b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x20;
  do {
    iVar1 = FUN_00c9e4c0();
    iVar3 = iVar3 + iVar1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar3;
}

// 00C195E0  FUN_00c195e0  size=37  [run]
int FUN_00c195e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x20;
  do {
    iVar1 = FUN_00c9e5a0();
    iVar3 = iVar3 + iVar1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar3;
}

// 00C19610  FUN_00c19610  size=37  [run]
int FUN_00c19610(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x20;
  do {
    iVar1 = FUN_00c9e600();
    iVar3 = iVar3 + iVar1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar3;
}

// 00C19640  FUN_00c19640  size=37  [run]
int FUN_00c19640(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x20;
  do {
    iVar1 = FUN_00c9e690();
    iVar3 = iVar3 + iVar1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar3;
}

// 00C19670  FUN_00c19670  size=37  [run]
int FUN_00c19670(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0x20;
  do {
    iVar1 = FUN_00c9e720();
    iVar3 = iVar3 + iVar1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar3;
}

// 00C196A0  FUN_00c196a0  size=41  [run]
undefined4 __thiscall FUN_00c196a0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e380(param_3);
    return uVar1;
  }
  return 0;
}

// 00C196D0  FUN_00c196d0  size=41  [run]
undefined4 __thiscall FUN_00c196d0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca0d90(param_3);
    return uVar1;
  }
  return 0;
}

// 00C19730  FUN_00c19730  size=36  [run]
undefined4 __thiscall FUN_00c19730(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e3b0();
    return uVar1;
  }
  return 0;
}

// 00C19760  FUN_00c19760  size=71  [run]
undefined4 __thiscall FUN_00c19760(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = FUN_00e03ea0(param_2);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x28);
  while (*piVar4 != iVar1) {
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x1c5c;
    if (0x1f < uVar3) {
      return 0;
    }
  }
  if (0x1f < uVar3) {
    return 0;
  }
  if (uVar3 * 0x7170 + 0x20 + param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_00c9e3b0();
  return uVar2;
}

// 00C197B0  FUN_00c197b0  size=41  [run]
undefined4 __thiscall FUN_00c197b0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e400(param_3);
    return uVar1;
  }
  return 0;
}

// 00C197E0  FUN_00c197e0  size=41  [run]
undefined4 __thiscall FUN_00c197e0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca0e00(param_3);
    return uVar1;
  }
  return 0;
}

// 00C19810  FUN_00c19810  size=36  [run]
undefined4 __thiscall FUN_00c19810(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e430();
    return uVar1;
  }
  return 0;
}

// 00C19840  FUN_00c19840  size=71  [run]
undefined4 __thiscall FUN_00c19840(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = FUN_00e03ea0(param_2);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x28);
  while (*piVar4 != iVar1) {
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x1c5c;
    if (0x1f < uVar3) {
      return 0;
    }
  }
  if (0x1f < uVar3) {
    return 0;
  }
  if (uVar3 * 0x7170 + 0x20 + param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_00c9e430();
  return uVar2;
}

// 00C19890  FUN_00c19890  size=41  [run]
undefined4 __thiscall FUN_00c19890(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e480(param_3);
    return uVar1;
  }
  return 0;
}

// 00C198C0  FUN_00c198c0  size=41  [run]
undefined4 __thiscall FUN_00c198c0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca0e70(param_3);
    return uVar1;
  }
  return 0;
}

// 00C198F0  FUN_00c198f0  size=36  [run]
undefined4 __thiscall FUN_00c198f0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e4c0();
    return uVar1;
  }
  return 0;
}

// 00C19920  FUN_00c19920  size=71  [run]
undefined4 __thiscall FUN_00c19920(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = FUN_00e03ea0(param_2);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x28);
  while (*piVar4 != iVar1) {
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x1c5c;
    if (0x1f < uVar3) {
      return 0;
    }
  }
  if (0x1f < uVar3) {
    return 0;
  }
  if (uVar3 * 0x7170 + 0x20 + param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_00c9e4c0();
  return uVar2;
}

// 00C19970  FUN_00c19970  size=41  [run]
undefined4 __thiscall FUN_00c19970(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e560(param_3);
    return uVar1;
  }
  return 0;
}

// 00C199A0  FUN_00c199a0  size=41  [run]
undefined4 __thiscall FUN_00c199a0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca0f70(param_3);
    return uVar1;
  }
  return 0;
}

// 00C199D0  FUN_00c199d0  size=36  [run]
undefined4 __thiscall FUN_00c199d0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e5a0();
    return uVar1;
  }
  return 0;
}

// 00C19A00  FUN_00c19a00  size=71  [run]
undefined4 __thiscall FUN_00c19a00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  iVar1 = FUN_00e03ea0(param_2);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x28);
  while (*piVar4 != iVar1) {
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x1c5c;
    if (0x1f < uVar3) {
      return 0;
    }
  }
  if (0x1f < uVar3) {
    return 0;
  }
  if (uVar3 * 0x7170 + 0x20 + param_1 == 0) {
    return 0;
  }
  uVar2 = FUN_00c9e5a0();
  return uVar2;
}

// 00C19C00  FUN_00c19c00  size=46  [run]
undefined4 __thiscall FUN_00c19c00(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e8b0(param_3,param_4);
    return uVar1;
  }
  return 0;
}

// 00C19C30  FUN_00c19c30  size=41  [run]
undefined4 __thiscall FUN_00c19c30(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e8e0(param_3);
    return uVar1;
  }
  return 0;
}

// 00C19C60  FUN_00c19c60  size=41  [run]
undefined4 __thiscall FUN_00c19c60(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9e920(param_3);
    return uVar1;
  }
  return 0;
}

// 00C19C90  FUN_00c19c90  size=46  [run]
undefined4 __thiscall FUN_00c19c90(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca1220(param_3,param_4);
    return uVar1;
  }
  return 0;
}

// 00C19CC0  FUN_00c19cc0  size=51  [run]
undefined4 __thiscall
FUN_00c19cc0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca12c0(param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

// 00C19D00  FUN_00c19d00  size=46  [run]
undefined4 __thiscall FUN_00c19d00(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca3640(param_3,param_4);
    return uVar1;
  }
  return 0;
}

// 00C19D30  FUN_00c19d30  size=41  [run]
undefined4 __thiscall FUN_00c19d30(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca36d0(param_3);
    return uVar1;
  }
  return 0;
}

// 00C19DA0  FUN_00c19da0  size=61  [run]
undefined4 __thiscall FUN_00c19da0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 < 0x20) {
    if (param_2 * 0x7170 + 0x20 + param_1 != 0) {
      uVar1 = FUN_00e03ea0(param_4);
      FUN_00c9e990(param_3,uVar1);
    }
    return 0;
  }
  return 0;
}

// 00C19E40  FUN_00c19e40  size=41  [run]
undefined4 __thiscall FUN_00c19e40(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9ea70(param_3);
    return uVar1;
  }
  return 0;
}

// 00C19EB0  FUN_00c19eb0  size=41  [run]
undefined4 __thiscall FUN_00c19eb0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9eb00(param_3);
    return uVar1;
  }
  return 0;
}

// 00C19F10  FUN_00c19f10  size=77  [run]
undefined4 __thiscall FUN_00c19f10(int param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    local_c = *param_4;
    local_8 = param_4[1];
    local_4 = param_4[2];
    uVar1 = FUN_00ca61f0(param_3,&local_c);
    return uVar1;
  }
  return 0;
}

// 00C19F60  FUN_00c19f60  size=41  [run]
undefined4 __thiscall FUN_00c19f60(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9eb20(param_3);
    return uVar1;
  }
  return 0;
}

// 00C19F90  FUN_00c19f90  size=46  [run]
undefined4 __thiscall FUN_00c19f90(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_3 < 0x20) && (param_3 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca1550(param_2,param_4);
    return uVar1;
  }
  return 0;
}

// 00C1A020  FUN_00c1a020  size=41  [run]
undefined4 __thiscall FUN_00c1a020(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9eb80(param_3);
    return uVar1;
  }
  return 0;
}

// 00C1A130  FUN_00c1a130  size=41  [run]
undefined4 __thiscall FUN_00c1a130(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00ca11d0(param_3);
    return uVar1;
  }
  return 0;
}

// 00C1A160  FUN_00c1a160  size=41  [run]
void __thiscall FUN_00c1a160(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00c9e840(param_3,param_4);
  }
  return;
}

// 00C1A1C0  FUN_00c1a1c0  size=3  [run]
void FUN_00c1a1c0(void)

{
  return;
}

// 00C1A280  FUN_00c1a280  size=33  [run]
void __thiscall FUN_00c1a280(int param_1,uint param_2)

{
  if ((param_2 < 0x20) && (param_1 = param_2 * 0x7170 + 0x20 + param_1, param_1 != 0)) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  return;
}

// 00C1A300  FUN_00c1a300  size=54  [run]
void __thiscall FUN_00c1a300(int param_1,undefined4 param_2,int param_3)

{
  if ((*(uint *)(param_3 + 0xec) < 0x20) &&
     (*(uint *)(param_3 + 0xec) * 0x7170 + 0x20 + param_1 != 0)) {
    FUN_00c9eab0((int)*(short *)(param_3 + 2),(int)*(short *)(param_3 + 4),param_2);
  }
  return;
}

// 00C1A340  FUN_00c1a340  size=46  [run]
undefined4 __thiscall FUN_00c1a340(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9ee70(param_3,param_4);
    return uVar1;
  }
  return 0;
}

// 00C1A4B0  FUN_00c1a4b0  size=51  [run]
undefined4 __thiscall
FUN_00c1a4b0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    uVar1 = FUN_00c9efc0(param_3,param_4,param_5);
    return uVar1;
  }
  return 0;
}

// 00C1A530  FUN_00c1a530  size=46  [run]
void __thiscall
FUN_00c1a530(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  if ((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) {
    EmSetCorps::setAddedKillCount(param_3,param_4,param_5);
  }
  return;
}

// 00C1A5A0  FUN_00c1a5a0  size=67  [run]
void __thiscall FUN_00c1a5a0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((((param_2 < 0x20) && (param_2 * 0x7170 + 0x20 + param_1 != 0)) &&
      (iVar1 = FUN_00c9e8b0(param_3,param_4), iVar1 != 0)) && (iVar1 = FUN_00a7c7e0(), iVar1 != 0))
  {
    FUN_00a805f0();
  }
  return;
}


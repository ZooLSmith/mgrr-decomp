// src/managers/scenebgmanager/SceneBgManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C17C70..00C62910, 64 functions

#include "types.h"

// 00C17C70  SceneBgManagerImplement::PredicateRigidBodyBase::vf00  size=31  [class]
undefined4 * __thiscall
SceneBgManagerImplement::PredicateRigidBodyBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C17D20  SceneBgManagerImplement::vf94  size=53  [class]
void __thiscall
SceneBgManagerImplement::vf94(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 8;
  do {
    if (*piVar1 == param_2) {
      FUN_00934890(param_3,param_4);
    }
    piVar1 = piVar1 + 0x8ae;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C17D60  SceneBgManagerImplement::vf5C  size=42  [class]
void __thiscall SceneBgManagerImplement::vf5C(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 8;
  do {
    if (*piVar1 == param_2) {
      FUN_00934810();
    }
    piVar1 = piVar1 + 0x8ae;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C17D90  SceneBgManagerImplement::vf60  size=42  [class]
void __thiscall SceneBgManagerImplement::vf60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 8;
  do {
    if (*piVar1 == param_2) {
      FUN_00934850();
    }
    piVar1 = piVar1 + 0x8ae;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C17DC0  SceneBgManagerImplement::vf68  size=70  [class]
undefined4 __thiscall SceneBgManagerImplement::vf68(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == -8) {
    return 0;
  }
  uVar5 = 0;
  piVar2 = (int *)(param_1 + 0x1c);
  iVar4 = 0;
  do {
    iVar1 = *piVar2;
    if (param_2 < iVar1 + iVar4) {
      uVar3 = FUN_00933d60(param_2 - iVar4);
      return uVar3;
    }
    uVar5 = uVar5 + 1;
    piVar2 = piVar2 + 0x8ae;
    iVar4 = iVar1 + iVar4;
  } while (uVar5 < 8);
  return 0;
}

// 00C17E10  SceneBgManagerImplement::vf64  size=42  [class]
void __thiscall SceneBgManagerImplement::vf64(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 8;
  do {
    if (*piVar1 == param_2) {
      FUN_00933db0();
    }
    piVar1 = piVar1 + 0x8ae;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C17E40  SceneBgManagerImplement::vf40  size=53  [class]
int __thiscall SceneBgManagerImplement::vf40(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = (int *)(param_1 + 8);
  while ((*piVar2 == -1 || (iVar1 = FUN_009340d0(param_2), iVar1 == 0))) {
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 0x8ae;
    if (7 < uVar3) {
      return 0;
    }
  }
  return iVar1;
}

// 00C17E80  SceneBgManagerImplement::vf44  size=44  [class]
void __thiscall SceneBgManagerImplement::vf44(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 8;
  do {
    if (*piVar1 != -1) {
      FUN_00934130(param_2);
    }
    piVar1 = piVar1 + 0x8ae;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C17EB0  SceneBgManagerImplement::vf48  size=44  [class]
void __thiscall SceneBgManagerImplement::vf48(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 8;
  do {
    if (*piVar1 != -1) {
      FUN_009341d0(param_2);
    }
    piVar1 = piVar1 + 0x8ae;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C17EE0  SceneBgManagerImplement::vf4C  size=44  [class]
void __thiscall SceneBgManagerImplement::vf4C(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 8;
  do {
    if (*piVar1 != -1) {
      FUN_00934270(param_2);
    }
    piVar1 = piVar1 + 0x8ae;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C17F10  SceneBgManagerImplement::vf50  size=44  [class]
void __thiscall SceneBgManagerImplement::vf50(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 8;
  do {
    if (*piVar1 != -1) {
      FUN_00934320(param_2);
    }
    piVar1 = piVar1 + 0x8ae;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C17F40  SceneBgManagerImplement::vf54  size=44  [class]
void __thiscall SceneBgManagerImplement::vf54(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 8;
  do {
    if (*piVar1 != -1) {
      FUN_009343d0(param_2);
    }
    piVar1 = piVar1 + 0x8ae;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C17F70  SceneBgManagerImplement::vf58  size=44  [class]
void __thiscall SceneBgManagerImplement::vf58(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 8;
  do {
    if (*piVar1 != -1) {
      FUN_00934470(param_2);
    }
    piVar1 = piVar1 + 0x8ae;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C17FD0  SceneBgManagerImplement::vf34  size=35  [class]
void SceneBgManagerImplement::vf34(void)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    FUN_00934ab0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C18000  SceneBgManagerImplement::vf24  size=37  [class]
void SceneBgManagerImplement::vf24(void)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    FUN_009338b0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C18030  SceneBgManagerImplement::vf28  size=37  [class]
void SceneBgManagerImplement::vf28(void)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    FUN_00933f00();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C18060  SceneBgManagerImplement::vf2C  size=37  [class]
void SceneBgManagerImplement::vf2C(void)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    FUN_009338c0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C18090  SceneBgManagerImplement::vf30  size=37  [class]
void SceneBgManagerImplement::vf30(void)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    FUN_009338d0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C180C0  SceneBgManagerImplement::vf1C  size=31  [class]
undefined4 __fastcall SceneBgManagerImplement::vf1C(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 0x50);
  do {
    if (*piVar2 != 0) {
      return 0;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x8ae;
  } while (uVar1 < 8);
  return 1;
}

// 00C180E0  SceneBgManagerImplement::vf20  size=36  [class]
undefined4 __fastcall SceneBgManagerImplement::vf20(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(param_1 + 8);
  while ((piVar1[0x12] == 0 || (*piVar1 == -1))) {
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 0x8ae;
    if (7 < uVar2) {
      return 1;
    }
  }
  return 0;
}

// 00C18110  SceneBgManagerImplement::vf6C  size=112  [class]
int __fastcall SceneBgManagerImplement::vf6C(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 8) != -1) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (*(int *)(param_1 + 0x22c0) != -1) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x22d4);
  }
  if (*(int *)(param_1 + 0x4578) != -1) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x458c);
  }
  if (*(int *)(param_1 + 0x6830) != -1) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x6844);
  }
  if (*(int *)(param_1 + 0x8ae8) != -1) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x8afc);
  }
  if (*(int *)(param_1 + 0xada0) != -1) {
    iVar1 = iVar1 + *(int *)(param_1 + 0xadb4);
  }
  if (*(int *)(param_1 + 0xd058) != -1) {
    iVar1 = iVar1 + *(int *)(param_1 + 0xd06c);
  }
  if (*(int *)(param_1 + 0xf310) != -1) {
    iVar1 = iVar1 + *(int *)(param_1 + 0xf324);
  }
  return iVar1;
}

// 00C18180  SceneBgManagerImplement::vf70  size=64  [class]
undefined4 __thiscall SceneBgManagerImplement::vf70(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  piVar3 = (int *)(param_1 + 8);
  iVar5 = 0;
  while ((iVar1 = iVar5, *piVar3 == -1 || (iVar1 = piVar3[5] + iVar5, iVar1 <= param_2))) {
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 0x8ae;
    iVar5 = iVar1;
    if (7 < uVar4) {
      return 0;
    }
  }
  uVar2 = FUN_00933e80(param_2 - iVar5);
  return uVar2;
}

// 00C181C0  SceneBgManagerImplement::vf98  size=3  [class]
void SceneBgManagerImplement::vf98(void)

{
  return;
}

// 00C181D0  SceneBgManagerImplement::vf04  size=56  [class]
void __fastcall SceneBgManagerImplement::vf04(int param_1)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x115d0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x115c8) = 1;
  piVar1 = (int *)(param_1 + 8);
  iVar2 = 8;
  do {
    if (*piVar1 != -1) {
      FUN_00933ff0();
    }
    piVar1 = piVar1 + 0x8ae;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00C18240  FUN_00c18240  size=104  [between]
void __fastcall FUN_00c18240(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 8);
  iVar3 = 8;
  do {
    if (*piVar4 != -1) {
      iVar1 = FUN_00933750();
      if (piVar4[0x14] != 0) {
        FUN_00935420();
        iVar2 = FUN_00933750();
        if (iVar1 != iVar2) {
          FUN_00933900();
        }
        if (piVar4[0x13] == 0) {
          FUN_00935420();
          if (piVar4[0x15] != 0) {
            FUN_00934940();
            FUN_00933910();
          }
        }
      }
    }
    piVar4 = piVar4 + 0x8ae;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 00C18320  SceneBgManagerImplement::EntityDeletedSlot::vf10  size=1  [class]
void SceneBgManagerImplement::EntityDeletedSlot::vf10(void)

{
  return;
}

// 00C18330  SceneBgManagerImplement::EntityDeletedSlot::vf14  size=13  [class]
void __fastcall SceneBgManagerImplement::EntityDeletedSlot::vf14(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}

// 00C29AD0  SceneBgManagerImplement::DisableHitByRange::vf04  size=129  [class]
void __fastcall SceneBgManagerImplement::DisableHitByRange::vf04(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00911d10(&local_20);
  pfVar1 = *(float **)(param_1 + 4);
  if ((((*pfVar1 <= local_20) &&
       (pfVar2 = *(float **)(param_1 + 8), local_20 < *pfVar2 != (local_20 == *pfVar2))) &&
      (pfVar1[1] <= local_1c)) &&
     (((local_1c < pfVar2[1] != (local_1c == pfVar2[1]) && (pfVar1[2] <= local_18)) &&
      (local_18 < pfVar2[2] != (local_18 == pfVar2[2]))))) {
    FUN_00916360();
    return;
  }
  return;
}

// 00C29B80  SceneBgManagerImplement::EnableHitByRange::vf04  size=129  [class]
void __fastcall SceneBgManagerImplement::EnableHitByRange::vf04(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float local_20;
  float local_1c;
  float local_18;
  
  FUN_00911d10(&local_20);
  pfVar1 = *(float **)(param_1 + 4);
  if ((((*pfVar1 <= local_20) &&
       (pfVar2 = *(float **)(param_1 + 8), local_20 < *pfVar2 != (local_20 == *pfVar2))) &&
      (pfVar1[1] <= local_1c)) &&
     (((local_1c < pfVar2[1] != (local_1c == pfVar2[1]) && (pfVar1[2] <= local_18)) &&
      (local_18 < pfVar2[2] != (local_18 == pfVar2[2]))))) {
    FUN_0091a8a0();
    return;
  }
  return;
}

// 00C29C30  SceneBgManagerImplement::DisableHitByRangeX::vf04  size=77  [class]
void __fastcall SceneBgManagerImplement::DisableHitByRangeX::vf04(int param_1)

{
  float local_20 [7];
  
  FUN_00911d10(local_20);
  if ((*(float *)(param_1 + 4) <= local_20[0]) &&
     (local_20[0] < *(float *)(param_1 + 8) != (local_20[0] == *(float *)(param_1 + 8)))) {
    FUN_00916360();
    return;
  }
  return;
}

// 00C29CA0  SceneBgManagerImplement::EnableHitByRangeX::vf04  size=77  [class]
void __fastcall SceneBgManagerImplement::EnableHitByRangeX::vf04(int param_1)

{
  float local_20 [7];
  
  FUN_00911d10(local_20);
  if ((*(float *)(param_1 + 4) <= local_20[0]) &&
     (local_20[0] < *(float *)(param_1 + 8) != (local_20[0] == *(float *)(param_1 + 8)))) {
    FUN_0091a8a0();
    return;
  }
  return;
}

// 00C29D10  SceneBgManagerImplement::DisableHitByRangeY::vf04  size=77  [class]
void __fastcall SceneBgManagerImplement::DisableHitByRangeY::vf04(int param_1)

{
  undefined1 local_20 [4];
  float local_1c;
  
  FUN_00911d10(local_20);
  if ((*(float *)(param_1 + 4) <= local_1c) &&
     (local_1c < *(float *)(param_1 + 8) != (local_1c == *(float *)(param_1 + 8)))) {
    FUN_00916360();
    return;
  }
  return;
}

// 00C29D80  SceneBgManagerImplement::EnableHitByRangeY::vf04  size=77  [class]
void __fastcall SceneBgManagerImplement::EnableHitByRangeY::vf04(int param_1)

{
  undefined1 local_20 [4];
  float local_1c;
  
  FUN_00911d10(local_20);
  if ((*(float *)(param_1 + 4) <= local_1c) &&
     (local_1c < *(float *)(param_1 + 8) != (local_1c == *(float *)(param_1 + 8)))) {
    FUN_0091a8a0();
    return;
  }
  return;
}

// 00C29DF0  SceneBgManagerImplement::DisableHitByRangeZ::vf04  size=77  [class]
void __fastcall SceneBgManagerImplement::DisableHitByRangeZ::vf04(int param_1)

{
  undefined1 local_20 [8];
  float local_18;
  
  FUN_00911d10(local_20);
  if ((*(float *)(param_1 + 8) <= local_18) &&
     (local_18 < *(float *)(param_1 + 8) != (local_18 == *(float *)(param_1 + 8)))) {
    FUN_00916360();
    return;
  }
  return;
}

// 00C29E60  SceneBgManagerImplement::EnableHitByRangeZ::vf04  size=77  [class]
void __fastcall SceneBgManagerImplement::EnableHitByRangeZ::vf04(int param_1)

{
  undefined1 local_20 [8];
  float local_18;
  
  FUN_00911d10(local_20);
  if ((*(float *)(param_1 + 8) <= local_18) &&
     (local_18 < *(float *)(param_1 + 8) != (local_18 == *(float *)(param_1 + 8)))) {
    FUN_0091a8a0();
    return;
  }
  return;
}

// 00C29EB0  SceneBgManagerImplement::EntityDeletedSlot::vf18  size=75  [class]
void SceneBgManagerImplement::EntityDeletedSlot::vf18(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar3 = &DAT_01dc53d8;
    (**(code **)*param_2)(&DAT_01dc53d8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      uVar1 = param_2[2];
      iVar2 = 8;
      do {
        FUN_00933e10(uVar1);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

// 00C29F00  SceneBgManagerImplement::DisableHitByRange::vf00  size=31  [class]
undefined4 * __thiscall
SceneBgManagerImplement::DisableHitByRange::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = PredicateRigidBodyBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C29F20  SceneBgManagerImplement::EnableHitByRange::vf00  size=31  [class]
undefined4 * __thiscall
SceneBgManagerImplement::EnableHitByRange::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = PredicateRigidBodyBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C29F40  SceneBgManagerImplement::DisableHitByRangeX::vf00  size=31  [class]
undefined4 * __thiscall
SceneBgManagerImplement::DisableHitByRangeX::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = PredicateRigidBodyBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C29F60  SceneBgManagerImplement::EnableHitByRangeX::vf00  size=31  [class]
undefined4 * __thiscall
SceneBgManagerImplement::EnableHitByRangeX::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = PredicateRigidBodyBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C29F80  SceneBgManagerImplement::DisableHitByRangeY::vf00  size=31  [class]
undefined4 * __thiscall
SceneBgManagerImplement::DisableHitByRangeY::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = PredicateRigidBodyBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C29FA0  SceneBgManagerImplement::EnableHitByRangeY::vf00  size=31  [class]
undefined4 * __thiscall
SceneBgManagerImplement::EnableHitByRangeY::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = PredicateRigidBodyBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C29FC0  SceneBgManagerImplement::DisableHitByRangeZ::vf00  size=31  [class]
undefined4 * __thiscall
SceneBgManagerImplement::DisableHitByRangeZ::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = PredicateRigidBodyBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C29FE0  SceneBgManagerImplement::EnableHitByRangeZ::vf00  size=31  [class]
undefined4 * __thiscall
SceneBgManagerImplement::EnableHitByRangeZ::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = PredicateRigidBodyBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C2A000  FUN_00c2a000  size=151  [between]
void __thiscall FUN_00c2a000(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iStack_4 = (**(code **)(*param_1 + 0x6c))();
  iStack_8 = 0;
  if (0 < iStack_4) {
    do {
      iVar2 = (**(code **)(*param_1 + 0x70))(iStack_8);
      if (iVar2 != 0) {
        iVar3 = FUN_00a7c8a0();
        iVar2 = *(int *)(iVar3 + 0x360);
        if (*(int *)(iVar3 + 0x360) == 0) {
          iVar2 = iVar3;
        }
        sVar1 = *(short *)(iVar2 + 0x358);
        iVar2 = -1;
        if (-1 < sVar1) {
          do {
            FUN_00a8c570(&iStack_c,iVar2);
            if (iStack_c != 0) {
              (**(code **)(*param_2 + 4))(&iStack_c);
            }
            iVar2 = iVar2 + 1;
          } while ((short)iVar2 < sVar1);
        }
      }
      iStack_8 = iStack_8 + 1;
    } while (iStack_8 < iStack_4);
  }
  return;
}

// 00C2A0A0  SceneBgManagerImplement::vf08  size=46  [class]
void __thiscall SceneBgManagerImplement::vf08(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 8);
  do {
    if (*piVar2 == *param_2) {
      if (piVar2[0x14] == 0) {
        FUN_00934940();
      }
      return;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x8ae;
  } while (uVar1 < 8);
  return;
}

// 00C2A0E0  SceneBgManagerImplement::vf0C  size=40  [class]
void __thiscall SceneBgManagerImplement::vf0C(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 8);
  do {
    if (*piVar2 == *param_2) {
      FUN_00934a70();
      return;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x8ae;
  } while (uVar1 < 8);
  return;
}

// 00C2A110  SceneBgManagerImplement::vf10  size=43  [class]
void __thiscall SceneBgManagerImplement::vf10(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 8);
  do {
    if (*piVar2 == param_2) {
      FUN_00934f10();
      return;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x8ae;
  } while (uVar1 < 8);
  return;
}

// 00C2A140  SceneBgManagerImplement::vf18  size=108  [class]
void __thiscall SceneBgManagerImplement::vf18(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  char local_10 [16];
  
  uVar1 = 0;
  piVar3 = (int *)(param_1 + 8);
  do {
    if (*piVar3 == -1) {
      *piVar3 = *param_2;
      _sprintf_s(local_10,0x10,"r%03x.ly2",*param_2);
      uVar2 = FUN_00de4500(local_10);
      FUN_00933890(uVar2);
      FUN_00933720();
      return;
    }
    uVar1 = uVar1 + 1;
    piVar3 = piVar3 + 0x8ae;
  } while (uVar1 < 8);
  return;
}

// 00C2A1B0  SceneBgManagerImplement::vf14  size=112  [class]
undefined4 __thiscall SceneBgManagerImplement::vf14(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)(param_1 + 8);
  iVar3 = 8;
  piVar5 = piVar4;
  do {
    if (*piVar5 != -1) {
      FUN_00935420();
    }
    piVar5 = piVar5 + 0x8ae;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = 0;
  do {
    if (*piVar4 == *param_2) {
      if (piVar4[0x14] != 0) {
        iVar3 = FUN_00933750();
        if (iVar3 != 0) {
          FUN_00933900();
        }
      }
      uVar2 = FUN_00933750();
      return uVar2;
    }
    uVar1 = uVar1 + 1;
    piVar4 = piVar4 + 0x8ae;
  } while (uVar1 < 8);
  return 1;
}

// 00C2A220  SceneBgManagerImplement::vf38  size=43  [class]
void __thiscall SceneBgManagerImplement::vf38(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 8);
  do {
    if (*piVar2 == param_2) {
      FUN_009338e0();
      return;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x8ae;
  } while (uVar1 < 8);
  return;
}

// 00C2A250  SceneBgManagerImplement::vf3C  size=43  [class]
void __thiscall SceneBgManagerImplement::vf3C(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 8);
  do {
    if (*piVar2 == param_2) {
      FUN_009338f0();
      return;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x8ae;
  } while (uVar1 < 8);
  return;
}

// 00C2A280  SceneBgManagerImplement::vf00  size=193  [class]
void __fastcall SceneBgManagerImplement::vf00(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  FUN_00c18240();
  if (*(int *)(param_1 + 0x115c8) == 0) {
    piVar4 = (int *)(param_1 + 8);
    iVar3 = 8;
    do {
      if (*piVar4 != -1) {
        FUN_00934db0();
      }
      piVar4 = piVar4 + 0x8ae;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return;
  }
  fVar1 = *(float *)(param_1 + 0x115d0) - 0.016666668;
  *(float *)(param_1 + 0x115d0) = fVar1;
  if (fVar1 <= 0.0) {
    FUN_00fde300((double)(ABS(fVar1) * 60.0));
    uVar2 = FUN_00fdbc60();
    uVar2 = uVar2 & 0x80000001;
    bVar5 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar5 = (uVar2 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar5) {
      uVar2 = 0;
      piVar4 = (int *)(param_1 + 8);
      while ((*piVar4 == -1 || (iVar3 = FUN_00934040(), iVar3 == 0))) {
        uVar2 = uVar2 + 1;
        piVar4 = piVar4 + 0x8ae;
        if (7 < uVar2) {
          *(undefined4 *)(param_1 + 0x115c8) = 0;
          *(undefined4 *)(param_1 + 0x115cc) = 1;
          return;
        }
      }
    }
  }
  return;
}

// 00C2A350  SceneBgManagerImplement::EntityDeletedSlot::vf00  size=31  [class]
undefined4 * __thiscall
SceneBgManagerImplement::EntityDeletedSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C420F0  SceneBgManagerImplement::vf74  size=42  [class]
void SceneBgManagerImplement::vf74(undefined4 param_1,undefined4 param_2)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_1;
  local_c = DisableHitByRange::vftable;
  local_4 = param_2;
  FUN_00c2a000(&local_c);
  return;
}

// 00C42120  SceneBgManagerImplement::vf78  size=42  [class]
void SceneBgManagerImplement::vf78(undefined4 param_1,undefined4 param_2)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_1;
  local_c = DisableHitByRangeX::vftable;
  local_4 = param_2;
  FUN_00c2a000(&local_c);
  return;
}

// 00C42150  SceneBgManagerImplement::vf7C  size=42  [class]
void SceneBgManagerImplement::vf7C(undefined4 param_1,undefined4 param_2)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_1;
  local_c = DisableHitByRangeY::vftable;
  local_4 = param_2;
  FUN_00c2a000(&local_c);
  return;
}

// 00C42180  SceneBgManagerImplement::vf80  size=42  [class]
void SceneBgManagerImplement::vf80(undefined4 param_1,undefined4 param_2)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_1;
  local_c = DisableHitByRangeZ::vftable;
  local_4 = param_2;
  FUN_00c2a000(&local_c);
  return;
}

// 00C421B0  SceneBgManagerImplement::vf84  size=42  [class]
void SceneBgManagerImplement::vf84(undefined4 param_1,undefined4 param_2)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_1;
  local_c = EnableHitByRange::vftable;
  local_4 = param_2;
  FUN_00c2a000(&local_c);
  return;
}

// 00C421E0  SceneBgManagerImplement::vf88  size=42  [class]
void SceneBgManagerImplement::vf88(undefined4 param_1,undefined4 param_2)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_1;
  local_c = EnableHitByRangeX::vftable;
  local_4 = param_2;
  FUN_00c2a000(&local_c);
  return;
}

// 00C42210  SceneBgManagerImplement::vf8C  size=42  [class]
void SceneBgManagerImplement::vf8C(undefined4 param_1,undefined4 param_2)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_1;
  local_c = EnableHitByRangeY::vftable;
  local_4 = param_2;
  FUN_00c2a000(&local_c);
  return;
}

// 00C42240  SceneBgManagerImplement::vf90  size=42  [class]
void SceneBgManagerImplement::vf90(undefined4 param_1,undefined4 param_2)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_1;
  local_c = EnableHitByRangeZ::vftable;
  local_4 = param_2;
  FUN_00c2a000(&local_c);
  return;
}

// 00C625E0  SceneBgManagerImplement::EntityDeletedSlot::EntityDeletedSlot  size=807  [class]
undefined4 * __thiscall
SceneBgManagerImplement::EntityDeletedSlot::EntityDeletedSlot
          (undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = SceneBgManagerImplement::vftable;
  param_1[1] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = param_1 + 0x20;
  param_1[0x1f] = 0x80;
  param_1[0x1c] = lib::StaticArray<SceneBgWork::LayoutUnit,128>::vftable;
  param_1[0x8b6] = 0;
  param_1[0x8b7] = 0;
  param_1[0x8ba] = 0;
  param_1[0x8bb] = 0;
  param_1[0x8bc] = 0;
  param_1[0x8bd] = 0;
  param_1[0x8be] = 0;
  param_1[0x8bf] = 0;
  param_1[0x8c0] = 0;
  param_1[0x8c1] = 0;
  param_1[0x8cb] = param_1 + 0x8ce;
  param_1[0x8cc] = 0;
  param_1[0x8cd] = 0x80;
  param_1[0x8ca] = lib::StaticArray<SceneBgWork::LayoutUnit,128>::vftable;
  param_1[0x1164] = 0;
  param_1[0x1165] = 0;
  param_1[0x1168] = 0;
  param_1[0x1169] = 0;
  param_1[0x116a] = 0;
  param_1[0x116b] = 0;
  param_1[0x116c] = 0;
  param_1[0x116d] = 0;
  param_1[0x116e] = 0;
  param_1[0x116f] = 0;
  param_1[0x1179] = param_1 + 0x117c;
  param_1[0x117a] = 0;
  param_1[0x117b] = 0x80;
  param_1[0x1178] = lib::StaticArray<SceneBgWork::LayoutUnit,128>::vftable;
  param_1[0x1a12] = 0;
  param_1[0x1a13] = 0;
  param_1[0x1a16] = 0;
  param_1[0x1a17] = 0;
  param_1[0x1a18] = 0;
  param_1[0x1a19] = 0;
  param_1[0x1a1a] = 0;
  param_1[0x1a1b] = 0;
  param_1[0x1a1c] = 0;
  param_1[0x1a1d] = 0;
  param_1[0x1a27] = param_1 + 0x1a2a;
  param_1[0x1a28] = 0;
  param_1[0x1a29] = 0x80;
  param_1[0x1a26] = lib::StaticArray<SceneBgWork::LayoutUnit,128>::vftable;
  param_1[0x22c0] = 0;
  param_1[0x22c1] = 0;
  param_1[0x22c4] = 0;
  param_1[0x22c5] = 0;
  param_1[0x22c6] = 0;
  param_1[0x22c7] = 0;
  param_1[0x22c8] = 0;
  param_1[0x22c9] = 0;
  param_1[0x22ca] = 0;
  param_1[0x22cb] = 0;
  param_1[0x22d5] = param_1 + 0x22d8;
  param_1[0x22d6] = 0;
  param_1[0x22d7] = 0x80;
  param_1[0x22d4] = lib::StaticArray<SceneBgWork::LayoutUnit,128>::vftable;
  param_1[0x2b6e] = 0;
  param_1[0x2b6f] = 0;
  param_1[0x2b72] = 0;
  param_1[0x2b73] = 0;
  param_1[0x2b74] = 0;
  param_1[0x2b75] = 0;
  param_1[0x2b76] = 0;
  param_1[0x2b77] = 0;
  param_1[0x2b78] = 0;
  param_1[0x2b79] = 0;
  param_1[0x2b83] = param_1 + 0x2b86;
  param_1[0x2b84] = 0;
  param_1[0x2b85] = 0x80;
  param_1[0x2b82] = lib::StaticArray<SceneBgWork::LayoutUnit,128>::vftable;
  param_1[0x341c] = 0;
  param_1[0x341d] = 0;
  param_1[0x3420] = 0;
  param_1[0x3421] = 0;
  param_1[0x3422] = 0;
  param_1[0x3423] = 0;
  param_1[0x3424] = 0;
  param_1[0x3425] = 0;
  param_1[0x3426] = 0;
  param_1[0x3427] = 0;
  param_1[0x3431] = param_1 + 0x3434;
  param_1[0x3432] = 0;
  param_1[0x3433] = 0x80;
  param_1[0x3430] = lib::StaticArray<SceneBgWork::LayoutUnit,128>::vftable;
  param_1[0x3cca] = 0;
  param_1[0x3ccb] = 0;
  param_1[0x3cce] = 0;
  param_1[0x3ccf] = 0;
  param_1[0x3cd0] = 0;
  param_1[0x3cd1] = 0;
  param_1[0x3cd2] = 0;
  param_1[0x3cd3] = 0;
  param_1[0x3cd4] = 0;
  param_1[0x3cd5] = 0;
  param_1[0x3cdf] = param_1 + 0x3ce2;
  param_1[0x3ce0] = 0;
  param_1[0x3ce1] = 0x80;
  param_1[0x3cde] = lib::StaticArray<SceneBgWork::LayoutUnit,128>::vftable;
  param_1[0x4574] = 0;
  param_1[0x4572] = 0;
  iVar2 = 8;
  do {
    FUN_00935030();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)FUN_00dd3500(4,param_2);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = vftable;
  }
  param_1[0x4575] = puVar1;
  FUN_00d89ec0(0x3a,puVar1);
  return param_1;
}

// 00C62910  SceneBgManagerImplement::vf9C  size=30  [class]
undefined4 __thiscall SceneBgManagerImplement::vf9C(undefined4 param_1,byte param_2)

{
  SceneBgManager::SceneBgManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


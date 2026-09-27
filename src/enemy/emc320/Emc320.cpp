// src/enemy/emc320/Emc320.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0083ECD0..00AB99A0, 10 functions

#include "types.h"

// 0083ECD0  Emc320::vf44  size=70  [class]
void __fastcall Emc320::vf44(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xeb8) != 0) {
    FUN_00dd7270();
  }
  piVar1 = (int *)(param_1 + 0xe90);
  iVar2 = 3;
  do {
    if (*piVar1 != 0) {
      FUN_00a805f0();
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00a944d0();
  BehaviorEmBase::vf44();
  return;
}

// 0083ED20  Emc320::vf4C  size=28  [class]
void Emc320::vf4C(void)

{
  FUN_00ac80a0(0x3f800000,0x3f800000);
  BehaviorEmBase::vf4C();
  return;
}

// 0083ED40  Emc320::vf50  size=16  [class]
void Emc320::vf50(void)

{
  FUN_00a93170();
  BehaviorEmBase::vf50();
  return;
}

// 0083ED50  Emc320::vf264  size=29  [class]
undefined4 __thiscall Emc320::vf264(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xab0);
  for (iVar1 = 0x48; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return 1;
}

// 0083ED70  Emc320::vf34C  size=1  [class]
void Emc320::vf34C(void)

{
  return;
}

// 0083EDC0  FUN_0083edc0  size=42  [between]
uint FUN_0083edc0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35a54;
  (**(code **)(*param_1 + 4))(&DAT_01b35a54);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0083EE20  Emc320::vf40  size=484  [class]
undefined4 __fastcall Emc320::vf40(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  iVar1 = EmBaseDLC::vf40();
  if (iVar1 != 0) {
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      iVar1 = FUN_00a92f90();
      if (iVar1 != 0) {
        uVar5 = 1;
        FUN_00a92f90(1);
        FUN_00e26e50(uVar5);
      }
      FUN_00a9e290(&DAT_0163b7bc,0,0,0,0,0xbf800000,0x3f800000);
      FUN_00a96070(0,0x8000000,1);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00a8edf0(1);
      iVar1 = FUN_00dd7240();
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xe90) = 0;
      *(undefined4 *)(param_1 + 0xe94) = 0;
      *(undefined4 *)(param_1 + 0xe98) = 0;
      uVar5 = FUN_00a82090("MetarGearRayBody",0xf0152,0);
      *(undefined4 *)(param_1 + 0xe90) = uVar5;
      uVar5 = FUN_00a82090("MetarGearRayLeftArm",0xf0153,0);
      *(undefined4 *)(param_1 + 0xe94) = uVar5;
      uVar5 = FUN_00a82090("MetarGearRayRightArm",0xf0154,0);
      *(undefined4 *)(param_1 + 0xe98) = uVar5;
      uVar2 = 0;
      piVar3 = (int *)(param_1 + 0xe90);
      do {
        if (*piVar3 == 0) {
          return 0;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < 3);
      FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xe90),1,0xffffffff)
      ;
      FUN_00a8c5f0(1,*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xe94),1,0xffffffff)
      ;
      FUN_00a8c5f0(2,*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0xe98),1,0xffffffff)
      ;
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 != (int *)0x0) {
        puVar4 = &DAT_01b35a54;
        (**(code **)(*piVar3 + 4))(&DAT_01b35a54);
        iVar1 = FUN_00dd6d80(puVar4);
        if (iVar1 != 0) {
          piVar3[0x2d8] = *(int *)(param_1 + 0x4f0);
        }
      }
      if (*(int *)(param_1 + 0xe90) != 0) {
        uVar5 = FUN_00a7c8a0(0xffffffff,0);
        FUN_00e5e0c0("ba0152_se_targetboard_pop_up",uVar5);
      }
      *(undefined4 *)(param_1 + 0xec0) = 0;
      *(undefined4 *)(param_1 + 0xec4) = 0;
      return 1;
    }
  }
  return 0;
}

// 0083F220  Emc320::vf48  size=394  [class]
void __fastcall Emc320::vf48(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if (param_1[0x3b0] == 0) {
    if (param_1[0x3b1] == 0) {
      if (param_1[0x3ae] != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a8));
      }
      if (param_1[0x3a4] != 0) {
        iVar2 = FUN_00a7c7e0();
        if (iVar2 == 0) {
          param_1[0x3a4] = 0;
        }
        else {
          uVar3 = FUN_00a7c8a0();
          iVar2 = FUN_0083edc0(uVar3);
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0x4e4) != 0)) {
            if ((param_1[0x3a5] != 0) && (iVar2 = FUN_00a7c7e0(), iVar2 != 0)) {
              uVar3 = FUN_00a7c8a0();
              iVar2 = FUN_0083edc0(uVar3);
              if ((iVar2 != 0) && (*(int *)(iVar2 + 0x4e4) == 0)) {
                FUN_0083f1d0();
              }
            }
            if ((param_1[0x3a6] != 0) && (iVar2 = FUN_00a7c7e0(), iVar2 != 0)) {
              uVar3 = FUN_00a7c8a0();
              iVar2 = FUN_0083edc0(uVar3);
              if ((iVar2 != 0) && (*(int *)(iVar2 + 0x4e4) == 0)) {
                FUN_0083f1d0();
              }
            }
            pcVar1 = *(code **)(*param_1 + 0x20);
            param_1[0x248] = 0;
            param_1[0x3b1] = 1;
            (*pcVar1)();
          }
        }
      }
      if ((param_1[0x3a5] != 0) && (iVar2 = FUN_00a7c7e0(), iVar2 == 0)) {
        param_1[0x3a5] = 0;
      }
      if ((param_1[0x3a6] != 0) && (iVar2 = FUN_00a7c7e0(), iVar2 == 0)) {
        param_1[0x3a6] = 0;
      }
      EmBaseDLC::vf48();
      if (param_1[0x3ae] != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a8));
      }
    }
    else {
      fVar4 = (float10)FUN_00a92ff0();
      fVar4 = fVar4 * (float10)0.016666668 + (float10)(float)param_1[0x248];
      param_1[0x248] = (int)(float)fVar4;
      if ((float10)3.0 <= fVar4) {
        FUN_009fdde0();
        return;
      }
    }
  }
  return;
}

// 00AB1640  Emc320::vf04  size=6  [class]
undefined * Emc320::vf04(void)

{
  return &DAT_01b35a50;
}

// 00AB99A0  Emc320::vf00  size=54  [class]
undefined4 __thiscall Emc320::vf00(undefined4 param_1,byte param_2)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


// src/behavior/BehaviorDatabaseImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A917E0..00AC1EC0, 7 functions

#include "types.h"

// 00A917E0  BehaviorDatabaseImplement::vf00  size=171  [class]
int __thiscall BehaviorDatabaseImplement::vf00(int *param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
  if (param_1[10] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = (**(code **)(*param_1 + 4))(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00dd3500(0x160,&DAT_01b7bd48);
    if (iVar1 == 0) {
      if (param_1[10] != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return 0;
    }
    *(undefined4 *)(iVar1 + 0x134) = param_2;
    *(undefined4 *)(iVar1 + 0x150) = 0;
    FUN_00dd7240();
    FUN_00a912e0();
    (**(code **)(*(int *)param_1[2] + 8))(&stack0xfffffff8);
  }
  if (param_1[10] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar1;
}

// 00A91890  BehaviorDatabaseImplement::vf04  size=58  [class]
int __thiscall BehaviorDatabaseImplement::vf04(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  piVar3 = *(int **)(iVar2 + 4);
  if (piVar3 != piVar3 + *(int *)(iVar2 + 8)) {
    piVar1 = piVar3 + *(int *)(iVar2 + 8);
    do {
      if (**(int **)(*piVar3 + 0x134) == *param_2) {
        return *piVar3;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
  }
  return 0;
}

// 00AC1A70  BehaviorDatabaseImplement::vf0C  size=50  [class]
undefined4 __fastcall BehaviorDatabaseImplement::vf0C(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  uVar1 = (**(code **)*DAT_01be9bf0)();
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return uVar1;
}

// 00AC1AB0  BehaviorDatabaseImplement::vf10  size=133  [class]
void __thiscall BehaviorDatabaseImplement::vf10(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 8));
  }
  piVar1 = (int *)(param_2 + 4);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  if (*(int *)(param_2 + 0x20) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 8));
  }
  if (iVar2 == 0) {
    local_4 = 0;
    local_8 = param_3;
    local_c = param_2;
    (**(code **)(**(int **)(param_1 + 4) + 8))(&local_c);
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return;
}

// 00AC1B40  FUN_00ac1b40  size=78  [between]
int __thiscall FUN_00ac1b40(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x130) = 0;
  }
  FUN_00dd7270();
  FUN_00dd7270();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC1C50  BehaviorDatabaseImplement::vf08  size=432  [class]
void __thiscall BehaviorDatabaseImplement::vf08(int param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  puVar7 = *(undefined4 **)(*(int *)(param_1 + 4) + 4);
  if (puVar7 != puVar7 + *(int *)(*(int *)(param_1 + 4) + 8) * 3) {
    do {
      fVar2 = (float)puVar7[2];
      puVar7[2] = fVar2 + param_2;
      if (fVar2 + param_2 < 0.5) {
        puVar8 = puVar7 + 3;
      }
      else {
        (**(code **)(*DAT_01be9bf0 + 4))(*puVar7);
        iVar3 = *(int *)(param_1 + 8);
        piVar9 = *(int **)(iVar3 + 4);
        if (piVar9 != piVar9 + *(int *)(iVar3 + 8)) {
          piVar1 = piVar9 + *(int *)(iVar3 + 8);
          do {
            if (*piVar9 == puVar7[1]) {
              iVar3 = *piVar9;
              if (iVar3 != 0) {
                if (*(int *)(iVar3 + 0x130) != 0) {
                  FUN_00dd4920(*(int *)(iVar3 + 0x130));
                  *(undefined4 *)(iVar3 + 0x130) = 0;
                }
                FUN_00dd7270();
                FUN_00dd7270();
                FUN_00dd4920(iVar3);
              }
              iVar3 = *(int *)(param_1 + 8);
              uVar4 = *(uint *)(iVar3 + 8);
              iVar5 = *(int *)(iVar3 + 4);
              piVar1 = (int *)(iVar5 + uVar4 * 4);
              if ((((piVar9 != piVar1) && (iVar5 != 0)) && (uVar4 != 0)) &&
                 ((uint)((int)piVar9 - iVar5 >> 2) < uVar4)) {
                for (; piVar9 != piVar1 + -1; piVar9 = piVar9 + 1) {
                  *piVar9 = piVar9[1];
                }
                *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
              }
              break;
            }
            piVar9 = piVar9 + 1;
          } while (piVar9 != piVar1);
        }
        iVar3 = *(int *)(param_1 + 4);
        uVar4 = *(uint *)(iVar3 + 8);
        iVar5 = *(int *)(iVar3 + 4);
        puVar8 = (undefined4 *)(iVar5 + uVar4 * 0xc);
        if (((puVar7 != puVar8) && (iVar5 != 0)) &&
           ((uVar4 != 0 && ((uint)(((int)puVar7 - iVar5) / 0xc) < uVar4)))) {
          for (puVar6 = puVar7; puVar6 != puVar8 + -3; puVar6 = puVar6 + 3) {
            *puVar6 = puVar6[3];
            puVar6[1] = puVar6[4];
            puVar6[2] = puVar6[5];
          }
          *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -1;
          puVar8 = puVar7;
        }
      }
      puVar7 = puVar8;
    } while (puVar8 != (undefined4 *)
                       (*(int *)(*(int *)(param_1 + 4) + 4) +
                       *(int *)(*(int *)(param_1 + 4) + 8) * 0xc));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return;
}

// 00AC1EC0  BehaviorDatabaseImplement::vf14  size=30  [class]
undefined4 __thiscall BehaviorDatabaseImplement::vf14(undefined4 param_1,byte param_2)

{
  BehaviorDatabase::BehaviorDatabase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


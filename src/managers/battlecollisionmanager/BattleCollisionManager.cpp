// src/managers/battlecollisionmanager/BattleCollisionManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D770A0..00D7B9C0, 2 functions

#include "types.h"

// 00D770A0  BattleCollisionManager::vf24  size=31  [class]
undefined4 * __thiscall BattleCollisionManager::vf24(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7B9C0  BattleCollisionManager::BattleCollisionManager  size=818  [class]
void __fastcall BattleCollisionManager::BattleCollisionManager(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  *param_1 = BattleCollisionManagerImplement::vftable;
  FUN_00d8a1d0(9,param_1[0xe]);
  if ((undefined4 *)param_1[0xe] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xe])(1);
    param_1[0xe] = 0;
  }
  if (*(int *)(param_1[3] + 4) != 0) {
    *(undefined4 *)(param_1[3] + 8) = 0;
  }
  if (*(int *)(param_1[5] + 4) != 0) {
    *(undefined4 *)(param_1[5] + 8) = 0;
  }
  if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[5])(1);
    param_1[5] = 0;
  }
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[3])(1);
    param_1[3] = 0;
  }
  piVar5 = *(int **)(param_1[2] + 4);
  if (piVar5 != piVar5 + *(int *)(param_1[2] + 8)) {
    do {
      piVar2 = (int *)*piVar5;
      iVar3 = piVar2[0xdf];
      if (iVar3 != 0) {
        if (DAT_01885d68 != 1) {
          iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          if ((*(int *)(iVar4 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar4 + 4);
          *piVar1 = *piVar1 + 1;
        }
        FUN_00900ca0();
        *(undefined4 *)(iVar3 + 0x14) = 0;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
        FUN_00dd4920(iVar3);
        piVar2[0xdf] = 0;
      }
      if (piVar2[0x10a] != -1) {
        FUN_009fe7d0(piVar2[0x10a],piVar2[0x10b]);
      }
      piVar2[0x10a] = -1;
      piVar2[0x10b] = -1;
      piVar2[0x10c] = 0;
      (**(code **)(*piVar2 + 8))(1);
      piVar5 = piVar5 + 1;
    } while (piVar5 != (int *)(*(int *)(param_1[2] + 4) + *(int *)(param_1[2] + 8) * 4));
  }
  if (*(int *)(param_1[2] + 4) != 0) {
    *(undefined4 *)(param_1[2] + 8) = 0;
  }
  piVar5 = *(int **)(param_1[4] + 4);
  if (piVar5 != piVar5 + *(int *)(param_1[4] + 8)) {
    do {
      piVar2 = (int *)*piVar5;
      iVar3 = piVar2[0xdf];
      if (iVar3 != 0) {
        if (DAT_01885d68 != 1) {
          iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
          if ((*(int *)(iVar4 + 4) == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          piVar1 = (int *)(iVar4 + 4);
          *piVar1 = *piVar1 + 1;
        }
        FUN_00900ca0();
        *(undefined4 *)(iVar3 + 0x14) = 0;
        if (DAT_01885d68 != 1) {
          piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar1 = *piVar1 + -1;
          if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
        FUN_00dd4920(iVar3);
        piVar2[0xdf] = 0;
      }
      if (piVar2[0x10a] != -1) {
        FUN_009fe7d0(piVar2[0x10a],piVar2[0x10b]);
      }
      piVar2[0x10a] = -1;
      piVar2[0x10b] = -1;
      piVar2[0x10c] = 0;
      (**(code **)(*piVar2 + 8))(1);
      piVar5 = piVar5 + 1;
    } while (piVar5 != (int *)(*(int *)(param_1[4] + 4) + *(int *)(param_1[4] + 8) * 4));
  }
  if (*(int *)(param_1[4] + 4) != 0) {
    *(undefined4 *)(param_1[4] + 8) = 0;
  }
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[4])(1);
    param_1[4] = 0;
  }
  FUN_00dd7270();
  FUN_00dd7270();
  *param_1 = vftable;
  return;
}


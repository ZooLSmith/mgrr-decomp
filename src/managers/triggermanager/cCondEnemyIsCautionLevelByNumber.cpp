// src/managers/triggermanager/cCondEnemyIsCautionLevelByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7DFF0..00C9CCA0, 4 functions

#include "mgrr.h"

// 00C7DFF0  Trigger::cCondEnemyIsCautionLevelByNumber::vf10  size=1  [class]
void Trigger::cCondEnemyIsCautionLevelByNumber::vf10(void)

{
  return;
}

// 00C7E000  Trigger::cCondEnemyIsCautionLevelByNumber::vf1C  size=22  [class]
void __thiscall Trigger::cCondEnemyIsCautionLevelByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C86C70  Trigger::cCondEnemyIsCautionLevelByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyIsCautionLevelByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C9CCA0  Trigger::cCondEnemyIsCautionLevelByNumber::vf14  size=238  [class]
int __fastcall Trigger::cCondEnemyIsCautionLevelByNumber::vf14(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined **local_110;
  int *local_10c;
  int local_108;
  undefined4 local_104;
  int local_100 [64];
  
  local_10c = local_100;
  iVar4 = 0;
  local_108 = 0;
  local_104 = 0x40;
  local_110 = lib::StaticArray<Entity*,64>::vftable;
  iVar1 = FUN_00c19d30(*(undefined4 *)(param_1 + 0x10),&local_110);
  if (iVar1 < 1) {
    return 0;
  }
  piVar3 = local_10c;
  if (local_10c == local_10c + local_108) {
    return 0;
  }
  do {
    if ((*piVar3 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar5 = &DAT_01be9c78;
      (**(code **)(*piVar2 + 4))(&DAT_01be9c78);
      iVar1 = FUN_00dd6d80(puVar5);
      if ((iVar1 != 0) && (piVar2 != (int *)0xfffff3f0)) {
        iVar1 = *(int *)(param_1 + 0x14);
        if (iVar1 == 0) {
          iVar4 = FUN_00a82e80();
        }
        else if (iVar1 == 1) {
          iVar4 = FUN_00a82e70();
        }
        else {
          if (iVar1 != 2) {
            iVar4 = 0;
            goto LAB_00c9cd58;
          }
          iVar4 = FUN_00a82e60();
        }
        if (iVar4 == 1) {
          return 1;
        }
      }
    }
LAB_00c9cd58:
    piVar3 = piVar3 + 1;
    if (piVar3 == local_10c + local_108) {
      return iVar4;
    }
  } while( true );
}


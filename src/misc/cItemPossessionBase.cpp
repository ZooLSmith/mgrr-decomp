// src/misc/cItemPossessionBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009496E0..009530A0, 5 functions

#include "mgrr.h"
#include "cItemPossessionBase.h"

// 009496E0  cItemPossessionBase::vf00  size=6  [class]
char * cItemPossessionBase::vf00(void)

{
  return "cItemPossessionBase";
}

// 009496F0  cItemPossessionBase::vf10  size=6  [class]
char * cItemPossessionBase::vf10(void)

{
  return "cItemBase";
}

// 0094D7D0  cItemPossessionBase::vf04  size=75  [class]
undefined4 * __thiscall cItemPossessionBase::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cItemBase::vftable;
  if (param_1[0x14] != 0) {
    FUN_00a805f0();
    param_1[0x14] = 0;
  }
  *param_1 = cItemBase::vftable;
  if (param_1[0x14] != 0) {
    FUN_00a805f0();
    param_1[0x14] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00951C80  cItemPossessionBase::cItemPossessionBase_2  size=215  [class]
int * cItemPossessionBase::cItemPossessionBase_2(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar3 = param_1[1];
  if (iVar3 == 0) {
    piVar2 = (int *)FUN_00dd3500(0x70,&DAT_01b7bd48);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    *piVar2 = (int)cItemPossessionWeaponGun::vftable;
    piVar2[0x17] = 0;
    piVar2[0x18] = 0;
    piVar2[0x1a] = 0;
    piVar2[0x1b] = 0;
    piVar2[0x19] = 0;
  }
  else if (iVar3 == 2) {
    piVar2 = (int *)FUN_00dd3500(0x68,&DAT_01b7bd48);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    *piVar2 = (int)cItemPossessionCure::vftable;
    piVar2[0x17] = 0;
    piVar2[0x18] = 0;
    piVar2[0x19] = (int)&DAT_01b37458;
  }
  else {
    if (iVar3 == 0xe) {
      if (param_1[2] == 0x154b4aab) {
        piVar2 = (int *)cItemPossessionWeaponHeatKnife::cItemPossessionWeaponHeatKnife();
      }
      else {
        piVar2 = (int *)cItemPossessionWeaponGranade::cItemPossessionWeaponGranade();
      }
      goto LAB_00951d33;
    }
    piVar2 = (int *)FUN_00dd3500(0x5c,&DAT_01b7bd48);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    *piVar2 = (int)vftable;
  }
  piVar2[0x16] = 0;
  piVar2[0x15] = 0;
  piVar2[1] = 0;
  piVar2[0x14] = 0;
LAB_00951d33:
  if (piVar2 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar2 + 8);
    piVar4 = param_1;
    piVar5 = piVar2 + 2;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    (*pcVar1)(param_1);
  }
  return piVar2;
}

// 009530A0  cItemPossessionBase::cItemPossessionBase  size=218  [class]
undefined4 cItemPossessionBase::cItemPossessionBase(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uStack_9c;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  piVar2 = (int *)FUN_0094df20(param_1);
  if (piVar2 != (int *)0x0) {
    FUN_0040b190();
    local_40 = *param_2;
    local_3c = param_2[1];
    local_38 = param_2[2];
    iVar3 = FUN_00a82090(piVar2 + 6,piVar2[3],local_90);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00dd3500(0x5c,&DAT_01b7bd48);
      if (piVar4 != (int *)0x0) {
        piVar4[0x14] = 0;
        piVar4[1] = 0;
        piVar4[0x15] = 0;
        piVar4[0x16] = 0;
        *piVar4 = (int)vftable;
        iVar1 = *piVar4;
        piVar6 = piVar2;
        piVar7 = piVar4 + 2;
        for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar7 = piVar7 + 1;
        }
        piVar4[0x14] = iVar3;
        (**(code **)(iVar1 + 8))(piVar2);
        return uStack_9c;
      }
      FUN_00a805f0();
      return 0;
    }
  }
  return 0;
}


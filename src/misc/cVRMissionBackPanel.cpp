// src/misc/cVRMissionBackPanel.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC1380..00D35C80, 4 functions

#include "mgrr.h"
#include "cVRMissionBackPanel.h"

// 00CC1380  cVRMissionBackPanel::vf08  size=37  [class]
void __fastcall cVRMissionBackPanel::vf08(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x18) + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00CD9820  cVRMissionBackPanel::create  size=112  [class]
void __fastcall cVRMissionBackPanel::create(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_00f98a90();
  if (((iVar2 != 800) && (iVar2 != 0x690)) && (iVar2 != 0x780)) {
    FUN_00ccdf50(*(undefined4 *)(param_1 + 0x1c),0x44344000);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x1c) < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x1c) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 1) {
      piVar1[2] = 0x44340000;
    }
  }
  return;
}

// 00CF2E10  cVRMissionBackPanel::vf00  size=63  [class]
undefined4 * __thiscall cVRMissionBackPanel::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D35C80  cVRMissionBackPanel::cVRMissionBackPanel  size=92  [class]
undefined4 * cVRMissionBackPanel::cVRMissionBackPanel(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x20,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 1;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *puVar1 = vftable;
    puVar1[3] = "cVRMissionBackPanel";
    puVar1[2] = 1;
    uVar2 = FUN_00d29960(0x51);
    puVar1[4] = 0;
    puVar1[5] = uVar2;
    return puVar1;
  }
  return (undefined4 *)0x0;
}


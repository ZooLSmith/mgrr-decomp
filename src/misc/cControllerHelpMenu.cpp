// src/misc/cControllerHelpMenu.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098E1B0..0098E2D0, 4 functions

#include "mgrr.h"
#include "cControllerHelpMenu.h"

// 0098E1B0  cControllerHelpMenu::cControllerHelpMenu  size=39  [class]
undefined4 * __fastcall cControllerHelpMenu::cControllerHelpMenu(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[9] = 0;
  *param_1 = vftable;
  param_1[8] = 0;
  FUN_00cb2630(1);
  return param_1;
}

// 0098E1F0  cControllerHelpMenu::vf00  size=36  [class]
undefined4 * __thiscall cControllerHelpMenu::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0098E280  cControllerHelpMenu::vf08  size=76  [class]
void __fastcall cControllerHelpMenu::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  FUN_00ce4dc0(4,1);
  FUN_00cb2600(1);
  if ((DAT_01b77e30 == 0) || (DAT_01b77e30 == 1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  FUN_00ce4d70(uVar1);
  FUN_00cb2740(*(undefined4 *)(param_1 + 0x24));
  return;
}

// 0098E2D0  cControllerHelpMenu::vf14  size=125  [class]
void __fastcall cControllerHelpMenu::vf14(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x20) == 1) {
    fVar1 = (float10)FUN_00cacf20();
    fVar1 = fVar1 + (float10)*(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x24) = (float)fVar1;
    fVar2 = (float10)1;
    if (fVar2 < fVar1 != (fVar2 == fVar1)) {
LAB_0098e2fb:
      *(float *)(param_1 + 0x24) = (float)fVar2;
      *(undefined4 *)(param_1 + 0x20) = 2;
    }
  }
  else {
    if (*(int *)(param_1 + 0x20) != 3) goto LAB_0098e334;
    fVar1 = (float10)FUN_00cacf20();
    fVar1 = (float10)*(float *)(param_1 + 0x24) - fVar1;
    *(float *)(param_1 + 0x24) = (float)fVar1;
    fVar2 = (float10)0;
    if (fVar1 <= fVar2) goto LAB_0098e2fb;
  }
  FUN_00cb2740(*(undefined4 *)(param_1 + 0x24));
LAB_0098e334:
  FUN_00cb2310(*(undefined4 *)(param_1 + 0x1c),DAT_01dc1418 == '\0');
  return;
}


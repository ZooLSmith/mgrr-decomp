// src/managers/tutorialmanager/TutorialManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1C450..015EE900, 3 functions

#include "mgrr.h"
#include "TutorialManager.h"

// 00C1C450  TutorialManager::TutorialManager  size=134  [class]
undefined4 * __fastcall TutorialManager::TutorialManager(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  char local_10 [16];
  
  *param_1 = vftable;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar3 = 0;
  puVar2 = param_1 + 8;
  do {
    local_10[1] = '\0';
    local_10[2] = '\0';
    local_10[3] = '\0';
    local_10[4] = '\0';
    local_10[5] = '\0';
    local_10[6] = '\0';
    local_10[7] = '\0';
    local_10[8] = '\0';
    local_10[9] = '\0';
    local_10[10] = '\0';
    local_10[0xb] = '\0';
    local_10[0xc] = '\0';
    local_10[0xd] = '\0';
    local_10[0xe] = '\0';
    local_10[0xf] = 0;
    local_10[0] = '\0';
    _sprintf_s(local_10,0x10,"tutr_b_%04d",iVar3);
    uVar1 = FUN_00e03ea0(local_10);
    *puVar2 = uVar1;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 200);
  return param_1;
}

// 00C2DB10  TutorialManager::vf00  size=31  [class]
undefined4 * __thiscall TutorialManager::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015EE900  TutorialManager::TutorialManager_2  size=11  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TutorialManager::TutorialManager_2(void)

{
  _DAT_01d61380 = vftable;
  return;
}


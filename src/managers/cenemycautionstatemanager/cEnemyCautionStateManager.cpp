// src/managers/cenemycautionstatemanager/cEnemyCautionStateManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004EC010..00AB5410, 6 functions

#include "mgrr.h"
#include "cEnemyCautionStateManager.h"

// 004EC010  cEnemyCautionStateManager::vf00  size=74  [class]
undefined4 * __thiscall cEnemyCautionStateManager::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00a82d10();
  iVar1 = 9;
  do {
    FUN_00905ce0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00905ce0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 004EC410  cEnemyCautionStateManager::cEnemyCautionStateManager_5  size=420  [class]
undefined4 * __fastcall cEnemyCautionStateManager::cEnemyCautionStateManager_5(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_00a7c930();
  FUN_00904d60();
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x1e] = 0;
  param_1[0x16] = 0;
  param_1[0x27] = 0;
  param_1[0x17] = 0;
  param_1[0x30] = 0;
  param_1[0x18] = 0;
  param_1[0x39] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0xbf800000;
  param_1[0x45] = 0;
  param_1[0x46] = 1;
  FUN_00a7c930();
  iVar1 = 9;
  do {
    FUN_00904d60();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a7c950();
  param_1[0x4d] = 0;
  iVar1 = FUN_00d466f0();
  if (iVar1 != 0) {
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
  }
  return param_1;
}

// 004ECE70  cEnemyCautionStateManager::cEnemyCautionStateManager_3  size=106  [class]
void __fastcall cEnemyCautionStateManager::cEnemyCautionStateManager_3(int param_1)

{
  int iVar1;
  
  *(undefined ***)(param_1 + 0xc10) = vftable;
  FUN_00a82d10();
  iVar1 = 9;
  do {
    FUN_00905ce0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00dd7270();
  Behavior::Behavior_96();
  return;
}

// 00AACF30  cEnemyCautionStateManager::cEnemyCautionStateManager_4  size=334  [class]
void __fastcall cEnemyCautionStateManager::cEnemyCautionStateManager_4(int param_1)

{
  int iVar1;
  
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  FUN_00485560();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
  }
  RayCastManager::getWork(param_1 + 0x2114);
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  *(undefined ***)(param_1 + 0x1b90) = vftable;
  FUN_00a82d10();
  iVar1 = 9;
  do {
    FUN_00905ce0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00905ce0();
  cXml::cXml_7();
  if (*(int *)(param_1 + 0x11dc) != 0) {
    *(undefined4 *)(param_1 + 0x11e4) = 0;
    if (*(int *)(param_1 + 0x11e8) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x11dc),0);
      *(undefined4 *)(param_1 + 0x11e8) = 0;
    }
    *(undefined4 *)(param_1 + 0x11dc) = 0;
    *(undefined4 *)(param_1 + 0x11e0) = 0;
  }
  cEspControler::~cEspControler();
  Animation::PostControl::Work::Work_2();
  FUN_00905ce0();
  cEnemyCautionStateManager_3();
  return;
}

// 00AB2CD0  cEnemyCautionStateManager::cEnemyCautionStateManager  size=345  [class]
void __fastcall cEnemyCautionStateManager::cEnemyCautionStateManager(int param_1)

{
  int iVar1;
  
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  FUN_007b7800();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
  }
  RayCastManager::getWork(param_1 + 0x21e4);
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  *(undefined ***)(param_1 + 0x1c60) = vftable;
  FUN_00a82d10();
  iVar1 = 9;
  do {
    FUN_00905ce0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00905ce0();
  cXml::cXml_7();
  if (*(int *)(param_1 + 0x12ac) != 0) {
    *(undefined4 *)(param_1 + 0x12b4) = 0;
    if (*(int *)(param_1 + 0x12b8) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x12ac),0);
      *(undefined4 *)(param_1 + 0x12b8) = 0;
    }
    *(undefined4 *)(param_1 + 0x12ac) = 0;
    *(undefined4 *)(param_1 + 0x12b0) = 0;
  }
  cEspControler::~cEspControler();
  Animation::PostControl::Work::Work_2();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager_3();
  return;
}

// 00AB5410  cEnemyCautionStateManager::cEnemyCautionStateManager_2  size=345  [class]
void __fastcall cEnemyCautionStateManager::cEnemyCautionStateManager_2(int param_1)

{
  int iVar1;
  
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  FUN_006c1cb0();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
  }
  RayCastManager::getWork(param_1 + 0x21e4);
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  *(undefined ***)(param_1 + 0x1c60) = vftable;
  FUN_00a82d10();
  iVar1 = 9;
  do {
    FUN_00905ce0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00905ce0();
  cXml::cXml_7();
  if (*(int *)(param_1 + 0x12ac) != 0) {
    *(undefined4 *)(param_1 + 0x12b4) = 0;
    if (*(int *)(param_1 + 0x12b8) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x12ac),0);
      *(undefined4 *)(param_1 + 0x12b8) = 0;
    }
    *(undefined4 *)(param_1 + 0x12ac) = 0;
    *(undefined4 *)(param_1 + 0x12b0) = 0;
  }
  cEspControler::~cEspControler();
  Animation::PostControl::Work::Work_2();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager_3();
  return;
}


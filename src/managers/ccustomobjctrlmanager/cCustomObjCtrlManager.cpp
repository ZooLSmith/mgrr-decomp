// src/managers/ccustomobjctrlmanager/cCustomObjCtrlManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098E6E0..00D0A5B0, 39 functions

#include "mgrr.h"
#include "cCustomObjCtrlManager.h"

// 0098E6E0  cCustomObjCtrlManager::create  size=1  [class]
void cCustomObjCtrlManager::create(void)

{
  return;
}

// 00CB21E0  cCustomObjCtrlManager::cCustomObjCtrlManager  size=33  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

// 00CCDD30  cCustomObjCtrlManager::~cCustomObjCtrlManager  size=48  [class]
void __fastcall cCustomObjCtrlManager::~cCustomObjCtrlManager(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD0260  cCustomObjCtrlManager::cCustomObjCtrlManager_21  size=111  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_21(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x49];
  *param_1 = cActionMessageParts::vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x49] = 0;
  }
  iVar1 = param_1[0x4a];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x4a] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD0450  cCustomObjCtrlManager::cCustomObjCtrlManager_22  size=143  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_22(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cBossWeaponInfoDispParts::vftable;
  iVar1 = param_1[0x2e];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x2e] = 0;
  }
  iVar1 = param_1[0x2f];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x2f] = 0;
  }
  iVar1 = param_1[0x2d];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x2d] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD0610  cCustomObjCtrlManager::cCustomObjCtrlManager_23  size=143  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_23(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x47];
  *param_1 = cChainComboParts::vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x47] = 0;
  }
  iVar1 = param_1[0x48];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x48] = 0;
  }
  iVar1 = param_1[0x49];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x49] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD0F20  cCustomObjCtrlManager::cCustomObjCtrlManager_20  size=188  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_20(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x2d];
  *param_1 = cCodecRealTimeDispParts::vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x2d] = 0;
  }
  iVar1 = param_1[0x2e];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x2e] = 0;
  }
  iVar1 = param_1[0x2f];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x2f] = 0;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
    FUN_00a7c950();
  }
  DAT_01dc1508 = 0;
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD1660  cCustomObjCtrlManager::cCustomObjCtrlManager_19  size=143  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_19(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cCutPointDispParts::vftable;
  iVar1 = param_1[0x30];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x30] = 0;
  }
  iVar1 = param_1[0x31];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x31] = 0;
  }
  iVar1 = param_1[0x2f];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x2f] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD1D10  cCustomObjCtrlManager::cCustomObjCtrlManager  size=825  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  param_1[0x6e] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x80] = 0;
  *param_1 = cDryCellGauge2::vftable;
  param_1[0x85] = 0;
  param_1[0x6b] = 1;
  param_1[0x8c] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0xffffffff;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8d] = 0;
  cEspControler::cEspControler();
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = vftable;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 1;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = vftable;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 1;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = vftable;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 1;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = vftable;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 1;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = vftable;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe3] = 1;
  param_1[0xe2] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = vftable;
  param_1[0xf5] = 1;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x100] = 0xffffffff;
  param_1[0x101] = 0xffffffff;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0x3f800000;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  puVar3 = param_1 + 0x24;
  for (iVar2 = 0x2e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0xea;
  puVar1 = param_1 + 0x52;
  iVar2 = 5;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *puVar3 = 0xbf800000;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  _DAT_01dc0884 = 0;
  DAT_01dc14f8 = param_1;
  _DAT_01dc0888 = 0;
  _DAT_01dc088c = 0;
  DAT_01dc0878 = 0;
  DAT_01dc087c = 0;
  DAT_01dc0890 = 0;
  DAT_01dc0894 = 0;
  DAT_01dc08a0 = 0;
  DAT_01dc08a4 = 0;
  DAT_01dc08a8 = 0;
  DAT_01dc08ac = 0;
  DAT_01dc08b0 = 0;
  DAT_01dc08b4 = 0;
  return param_1;
}

// 00CD3250  cCustomObjCtrlManager::cCustomObjCtrlManager_14  size=143  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_14(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cEnemyItemDispParts::vftable;
  iVar1 = param_1[0x26];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x26] = 0;
  }
  iVar1 = param_1[0x27];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x27] = 0;
  }
  iVar1 = param_1[0x25];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x25] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD3990  cCustomObjCtrlManager::cCustomObjCtrlManager_12  size=132  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_12(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cEnemyLogParts::vftable;
  if ((undefined4 *)param_1[0x1f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1f])(1);
    param_1[0x1f] = 0;
  }
  iVar1 = param_1[0x20];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x20] = 0;
  }
  iVar1 = param_1[0x21];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x21] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD40A0  cCustomObjCtrlManager::cCustomObjCtrlManager_34  size=182  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_34(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cEnergyGaugeWhiteRaiden::vftable;
  DAT_01dc0df4 = 0;
  if ((undefined4 *)param_1[0x35] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x35])(1);
    param_1[0x35] = 0;
  }
  iVar1 = param_1[0x26];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x26] = 0;
  }
  iVar1 = param_1[0x27];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x27] = 0;
  }
  iVar1 = param_1[0x28];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x28] = 0;
  }
  DAT_01dc14fc = 0;
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD4A70  cCustomObjCtrlManager::cCustomObjCtrlManager  size=275  [class]
undefined4 * cCustomObjCtrlManager::cCustomObjCtrlManager(void)

{
  undefined4 *extraout_EDX;
  
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  extraout_EDX[0x2e] = 0;
  *extraout_EDX = cItemGetDispParts::vftable;
  extraout_EDX[0x2c] = 0;
  extraout_EDX[0x2d] = 0;
  extraout_EDX[0x41] = 0;
  extraout_EDX[0x42] = 0;
  extraout_EDX[0x43] = 0;
  extraout_EDX[0x44] = 0;
  extraout_EDX[0x46] = 0;
  extraout_EDX[0x40] = 0xffffffff;
  extraout_EDX[0x45] = 0xffffffff;
  extraout_EDX[0x49] = 0;
  extraout_EDX[0x4a] = 0;
  extraout_EDX[0x4b] = 0;
  extraout_EDX[0x4d] = 0;
  extraout_EDX[0x4e] = 0;
  extraout_EDX[0x48] = vftable;
  extraout_EDX[0x4c] = 1;
  extraout_EDX[0x2f] = 0;
  extraout_EDX[0x30] = 0;
  extraout_EDX[0x31] = 0;
  extraout_EDX[0x24] = 0;
  extraout_EDX[0x25] = 0;
  extraout_EDX[0x26] = 0;
  extraout_EDX[0x27] = 0;
  extraout_EDX[0x28] = 0;
  extraout_EDX[0x29] = 0;
  extraout_EDX[0x2a] = 0;
  extraout_EDX[0x2b] = 0;
  extraout_EDX[0x34] = 0;
  extraout_EDX[0x35] = 0;
  extraout_EDX[0x36] = 0;
  extraout_EDX[0x37] = 0x3f800000;
  extraout_EDX[0x3b] = 0x3f800000;
  extraout_EDX[0x38] = 0;
  extraout_EDX[0x39] = 0;
  extraout_EDX[0x3a] = 0;
  extraout_EDX[0x3c] = 0;
  extraout_EDX[0x3d] = 0;
  extraout_EDX[0x3e] = 0;
  extraout_EDX[0x3f] = 0x3f800000;
  return extraout_EDX;
}

// 00CD4B90  cCustomObjCtrlManager::cCustomObjCtrlManager_32  size=193  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_32(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x2f];
  *param_1 = cItemGetDispParts::vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x2f] = 0;
  }
  iVar1 = param_1[0x30];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x30] = 0;
  }
  iVar1 = param_1[0x31];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x31] = 0;
  }
  iVar1 = param_1[0x4d];
  param_1[0x48] = vftable;
  param_1[0x4e] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x4d] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD4E60  cCustomObjCtrlManager::cCustomObjCtrlManager_33  size=143  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_33(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x47];
  *param_1 = cItemInfoDispParts::vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x47] = 0;
  }
  iVar1 = param_1[0x48];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x48] = 0;
  }
  iVar1 = param_1[0x49];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x49] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD5B60  cCustomObjCtrlManager::cCustomObjCtrlManager  size=257  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = cQTEButtonPCParts::vftable;
  param_1[4] = 1;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 1;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x26] = vftable;
  param_1[0x2d] = vftable;
  param_1[0x34] = vftable;
  param_1[0x3b] = vftable;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 1;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 1;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 1;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  return;
}

// 00CD5D60  cCustomObjCtrlManager::cCustomObjCtrlManager_28  size=99  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_28(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x1b];
  *param_1 = cSlashPointDispParts::vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x1b] = 0;
  }
  iVar1 = param_1[0x1c];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x1c] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD6000  cCustomObjCtrlManager::cCustomObjCtrlManager_26  size=406  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_26(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cRadarMap::vftable;
  DAT_01dc1304 = 0;
  if ((undefined4 *)param_1[0x62] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x62])(1);
    param_1[0x62] = 0;
  }
  if ((undefined4 *)param_1[99] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[99])(1);
    param_1[99] = 0;
  }
  if ((undefined4 *)param_1[100] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[100])(1);
    param_1[100] = 0;
  }
  if ((undefined4 *)param_1[0x65] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x65])(1);
    param_1[0x65] = 0;
  }
  if ((undefined4 *)param_1[0x66] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x66])(1);
    param_1[0x66] = 0;
  }
  iVar1 = param_1[0x13];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x13] = 0;
  }
  iVar1 = param_1[0x14];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x14] = 0;
  }
  iVar1 = param_1[0x15];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x15] = 0;
  }
  iVar1 = param_1[0x5e];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x5e] = 0;
  }
  iVar1 = param_1[0x5f];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x5f] = 0;
  }
  iVar1 = param_1[0x60];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x60] = 0;
  }
  DAT_01dc1500 = 0;
  iVar1 = param_1[0x29];
  param_1[0x24] = vftable;
  param_1[0x2a] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x29] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD7150  cCustomObjCtrlManager::cCustomObjCtrlManager  size=1087  [class]
undefined4 * cCustomObjCtrlManager::cCustomObjCtrlManager(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_EDX;
  int iVar2;
  
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  *extraout_EDX = cResultDispParts::vftable;
  extraout_EDX[0x82] = vftable;
  extraout_EDX[0x83] = 0;
  extraout_EDX[0x84] = 0;
  extraout_EDX[0x85] = 0;
  extraout_EDX[0x86] = 1;
  extraout_EDX[0x87] = 0;
  extraout_EDX[0x88] = 0;
  extraout_EDX[0x89] = vftable;
  extraout_EDX[0x8a] = 0;
  extraout_EDX[0x8b] = 0;
  extraout_EDX[0x8c] = 0;
  extraout_EDX[0x8d] = 1;
  extraout_EDX[0x8e] = 0;
  extraout_EDX[0x8f] = 0;
  extraout_EDX[0x90] = vftable;
  extraout_EDX[0x91] = 0;
  extraout_EDX[0x92] = 0;
  extraout_EDX[0x93] = 0;
  extraout_EDX[0x94] = 1;
  extraout_EDX[0x95] = 0;
  extraout_EDX[0x96] = 0;
  extraout_EDX[0x97] = vftable;
  extraout_EDX[0x98] = 0;
  extraout_EDX[0x99] = 0;
  extraout_EDX[0x9a] = 0;
  extraout_EDX[0x9b] = 1;
  extraout_EDX[0x9c] = 0;
  extraout_EDX[0x9d] = 0;
  extraout_EDX[0x9e] = vftable;
  extraout_EDX[0x9f] = 0;
  extraout_EDX[0xa0] = 0;
  extraout_EDX[0xa1] = 0;
  extraout_EDX[0xa2] = 1;
  extraout_EDX[0xa3] = 0;
  extraout_EDX[0xa4] = 0;
  extraout_EDX[0xa5] = vftable;
  extraout_EDX[0xa6] = 0;
  extraout_EDX[0xa7] = 0;
  extraout_EDX[0xa8] = 0;
  extraout_EDX[0xa9] = 1;
  extraout_EDX[0xaa] = 0;
  extraout_EDX[0xab] = 0;
  extraout_EDX[0xac] = vftable;
  extraout_EDX[0xad] = 0;
  extraout_EDX[0xae] = 0;
  extraout_EDX[0xaf] = 0;
  extraout_EDX[0xb0] = 1;
  extraout_EDX[0xb1] = 0;
  extraout_EDX[0xb2] = 0;
  extraout_EDX[0xb3] = vftable;
  extraout_EDX[0xb4] = 0;
  extraout_EDX[0xb5] = 0;
  extraout_EDX[0xb6] = 0;
  extraout_EDX[0xb7] = 1;
  extraout_EDX[0xb8] = 0;
  extraout_EDX[0xb9] = 0;
  extraout_EDX[0xba] = vftable;
  extraout_EDX[0xbb] = 0;
  extraout_EDX[0xbc] = 0;
  extraout_EDX[0xbd] = 0;
  extraout_EDX[0xbe] = 1;
  extraout_EDX[0xbf] = 0;
  extraout_EDX[0xc0] = 0;
  extraout_EDX[0xc9] = 0;
  extraout_EDX[200] = 0;
  extraout_EDX[0xca] = 0;
  extraout_EDX[0xcb] = 0;
  extraout_EDX[0xcc] = 0;
  extraout_EDX[0xcd] = 0;
  extraout_EDX[0xce] = 0;
  extraout_EDX[0xcf] = 0;
  extraout_EDX[0xd0] = 0;
  extraout_EDX[0xf2] = 0;
  extraout_EDX[0xd1] = 0;
  extraout_EDX[0x117] = 0;
  extraout_EDX[0xe5] = 0;
  extraout_EDX[0x118] = 0;
  extraout_EDX[0xe6] = 0;
  extraout_EDX[0x119] = 0;
  extraout_EDX[0xee] = 0;
  extraout_EDX[0x11a] = 0;
  extraout_EDX[0xef] = 0;
  extraout_EDX[0x11d] = 0;
  extraout_EDX[0xf0] = 0;
  extraout_EDX[0xf1] = 0;
  extraout_EDX[0x11b] = 0;
  extraout_EDX[0x11c] = 0;
  extraout_EDX[0x121] = 0;
  extraout_EDX[0x176] = 0;
  extraout_EDX[0xe7] = 0xffffffff;
  extraout_EDX[0xe8] = 0xffffffff;
  extraout_EDX[0xe9] = 0xffffffff;
  extraout_EDX[0xea] = 0xffffffff;
  extraout_EDX[0xeb] = 0xffffffff;
  extraout_EDX[0xec] = 0xffffffff;
  extraout_EDX[0xed] = 0xffffffff;
  extraout_EDX[0xf3] = 0;
  extraout_EDX[0xfc] = 0;
  extraout_EDX[0xd3] = 0;
  extraout_EDX[0xf4] = 0;
  extraout_EDX[0xdc] = 0xffffffff;
  extraout_EDX[0xfd] = 0;
  extraout_EDX[0x105] = 0;
  extraout_EDX[0xf5] = 0;
  extraout_EDX[0xd4] = 0;
  extraout_EDX[0xfe] = 0;
  extraout_EDX[0xdd] = 0xffffffff;
  extraout_EDX[0xf6] = 0;
  extraout_EDX[0x106] = 0;
  extraout_EDX[0xff] = 0;
  extraout_EDX[0xd5] = 0;
  extraout_EDX[0xf7] = 0;
  extraout_EDX[0xde] = 0xffffffff;
  extraout_EDX[0x100] = 0;
  extraout_EDX[0x107] = 0;
  extraout_EDX[0xf8] = 0;
  extraout_EDX[0xd6] = 0;
  extraout_EDX[0x101] = 0;
  extraout_EDX[0xdf] = 0xffffffff;
  extraout_EDX[0xf9] = 0;
  extraout_EDX[0x108] = 0;
  extraout_EDX[0x102] = 0;
  extraout_EDX[0xd7] = 0;
  extraout_EDX[0xfa] = 0;
  extraout_EDX[0xe0] = 0xffffffff;
  extraout_EDX[0x103] = 0;
  extraout_EDX[0x109] = 0;
  extraout_EDX[0xfb] = 0;
  extraout_EDX[0xd8] = 0;
  extraout_EDX[0x104] = 0;
  extraout_EDX[0xe1] = 0xffffffff;
  extraout_EDX[0x10a] = 0;
  extraout_EDX[0xd9] = 0;
  extraout_EDX[0xe2] = 0xffffffff;
  extraout_EDX[0x10b] = 0;
  extraout_EDX[0xda] = 0;
  extraout_EDX[0xe3] = 0xffffffff;
  extraout_EDX[0x10c] = 0;
  extraout_EDX[0xdb] = 0;
  extraout_EDX[0xe4] = 0xffffffff;
  extraout_EDX[0x10d] = 0;
  extraout_EDX[0x10e] = 0;
  extraout_EDX[0x10f] = 0;
  extraout_EDX[0x110] = 0;
  extraout_EDX[0x111] = 0;
  extraout_EDX[0x112] = 0;
  extraout_EDX[0x113] = 0;
  extraout_EDX[0x11e] = 0;
  extraout_EDX[0x11f] = 0;
  extraout_EDX[0x120] = 0;
  extraout_EDX[0x123] = 0;
  extraout_EDX[0x122] = 0;
  extraout_EDX[0x125] = 0;
  extraout_EDX[0x124] = 0;
  extraout_EDX[0x130] = 0;
  extraout_EDX[0x13b] = 0;
  extraout_EDX[0x146] = 0;
  extraout_EDX[0x151] = 0;
  extraout_EDX[0x160] = 0;
  puVar1 = extraout_EDX + 299;
  iVar2 = 5;
  do {
    puVar1[-5] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1[6] = 0xffffffff;
    puVar1[0xb] = 0xffffffff;
    puVar1[0x11] = 0xffffffff;
    puVar1[0x16] = 0xffffffff;
    puVar1[0x1c] = 0xffffffff;
    puVar1[0x21] = 0xffffffff;
    puVar1[0x27] = 0xffffffff;
    puVar1[0x2c] = 0xffffffff;
    puVar1[0x46] = 0xffffffff;
    puVar1[0x36] = 0xffffffff;
    puVar1[0x3b] = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  extraout_EDX[0x15c] = 0xffffffff;
  extraout_EDX[0x15d] = 0xffffffff;
  extraout_EDX[0x15e] = 0xffffffff;
  extraout_EDX[0x15f] = 0xffffffff;
  return extraout_EDX;
}

// 00CD7590  cCustomObjCtrlManager::cCustomObjCtrlManager_25  size=203  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_25(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = param_1[0x11e];
  *param_1 = cResultDispParts::vftable;
  if (iVar3 != 0) {
    if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    param_1[0x11e] = 0;
  }
  iVar3 = param_1[0x11f];
  if (iVar3 != 0) {
    if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    param_1[0x11f] = 0;
  }
  iVar3 = param_1[0x120];
  if (iVar3 != 0) {
    if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    param_1[0x120] = 0;
  }
  iVar3 = 8;
  puVar2 = param_1 + 0xc1;
  do {
    iVar1 = puVar2[-2];
    puVar2[-7] = vftable;
    puVar2[-1] = 0;
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      puVar2[-2] = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -7;
  } while (-1 < iVar3);
  iVar3 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar3 != 0) {
    if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD8810  cCustomObjCtrlManager::cCustomObjCtrlManager  size=337  [class]
undefined4 * cCustomObjCtrlManager::cCustomObjCtrlManager(void)

{
  undefined4 *extraout_EDX;
  
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  *extraout_EDX = cSubWeaponInfoDispParts::vftable;
  extraout_EDX[0x24] = vftable;
  extraout_EDX[0x28] = 1;
  extraout_EDX[0x25] = 0;
  extraout_EDX[0x26] = 0;
  extraout_EDX[0x27] = 0;
  extraout_EDX[0x29] = 0;
  extraout_EDX[0x2a] = 0;
  extraout_EDX[0x3a] = 0;
  extraout_EDX[0x38] = 0;
  extraout_EDX[0x39] = 0;
  extraout_EDX[0x52] = 0;
  extraout_EDX[0x53] = 0;
  extraout_EDX[0x54] = 0;
  extraout_EDX[0x55] = 0;
  extraout_EDX[0x56] = 0;
  extraout_EDX[0x57] = 0;
  extraout_EDX[0x3b] = 0;
  extraout_EDX[0x50] = 0xffffffff;
  extraout_EDX[0x51] = 0xffffffff;
  extraout_EDX[0x3c] = 0;
  extraout_EDX[0x3d] = 0;
  extraout_EDX[0x2b] = 0;
  extraout_EDX[0x2c] = 0;
  extraout_EDX[0x2d] = 0;
  extraout_EDX[0x2e] = 0;
  extraout_EDX[0x2f] = 0;
  extraout_EDX[0x30] = 0;
  extraout_EDX[0x31] = 0;
  extraout_EDX[0x32] = 0;
  extraout_EDX[0x33] = 0;
  extraout_EDX[0x34] = 0;
  extraout_EDX[0x35] = 0;
  extraout_EDX[0x36] = 0;
  extraout_EDX[0x37] = 0;
  extraout_EDX[0x40] = 0;
  extraout_EDX[0x41] = 0;
  extraout_EDX[0x42] = 0;
  extraout_EDX[0x43] = 0x3f800000;
  extraout_EDX[0x47] = 0x3f800000;
  extraout_EDX[0x44] = 0;
  extraout_EDX[0x45] = 0;
  extraout_EDX[0x46] = 0;
  extraout_EDX[0x48] = 0;
  extraout_EDX[0x49] = 0;
  extraout_EDX[0x4a] = 0;
  extraout_EDX[0x4b] = 0x3f800000;
  extraout_EDX[0x4f] = 0x3f800000;
  extraout_EDX[0x4c] = 0;
  extraout_EDX[0x4d] = 0;
  extraout_EDX[0x4e] = 0;
  return extraout_EDX;
}

// 00CD8970  cCustomObjCtrlManager::cCustomObjCtrlManager_8  size=193  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x3b];
  *param_1 = cSubWeaponInfoDispParts::vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x3b] = 0;
  }
  iVar1 = param_1[0x3c];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x3c] = 0;
  }
  iVar1 = param_1[0x3d];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x3d] = 0;
  }
  iVar1 = param_1[0x29];
  param_1[0x24] = vftable;
  param_1[0x2a] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x29] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD8FA0  cCustomObjCtrlManager::cCustomObjCtrlManager_9  size=111  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_9(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x88];
  *param_1 = cTutorialDispParts::vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x88] = 0;
  }
  iVar1 = param_1[0x89];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x89] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD9350  cCustomObjCtrlManager::cCustomObjCtrlManager_5  size=143  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_5(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x39];
  *param_1 = cUnLockInfoDispParts::vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x39] = 0;
  }
  iVar1 = param_1[0x3a];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x3a] = 0;
  }
  iVar1 = param_1[0x3b];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x3b] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD9750  cCustomObjCtrlManager::cCustomObjCtrlManager_6  size=99  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_6(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x12];
  *param_1 = cVRGoalPointSignParts::vftable;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x12] = 0;
  }
  iVar1 = param_1[0x13];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x13] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CD9930  cCustomObjCtrlManager::cCustomObjCtrlManager_3  size=900  [class]
undefined4 * __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_3(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[4] = 1;
  *param_1 = cVRMissionResult2::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = vftable;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = vftable;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = vftable;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = vftable;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = vftable;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = vftable;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = vftable;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = vftable;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 1;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = vftable;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 1;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = vftable;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 1;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x76] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0xbf] = 0;
  param_1[0xd2] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0xffffffff;
  param_1[0x77] = 0;
  param_1[0x78] = 0xffffffff;
  param_1[0x79] = 5;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0xbe] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0x119] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  _memset(param_1 + 0x4d,0,0x84);
  _memset(param_1 + 0x82,0,0xf0);
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xd5] = 0;
  param_1[0xe0] = 0;
  param_1[0xeb] = 0;
  param_1[0xf6] = 0;
  param_1[0x101] = 0;
  puVar1 = param_1 + 0xdb;
  iVar2 = 5;
  do {
    puVar1[-5] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1[6] = 0xffffffff;
    puVar1[0xb] = 0xffffffff;
    puVar1[0x11] = 0xffffffff;
    puVar1[0x16] = 0xffffffff;
    puVar1[0x1c] = 0xffffffff;
    puVar1[0x21] = 0xffffffff;
    puVar1[0x27] = 0xffffffff;
    puVar1[0x2c] = 0xffffffff;
    puVar1[0x39] = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x10c] = 0xffffffff;
  param_1[0x10d] = 0xffffffff;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11d] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  return param_1;
}

// 00CD9CC0  cCustomObjCtrlManager::cCustomObjCtrlManager_4  size=204  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = cVRMissionResult2::vftable;
  if ((undefined4 *)param_1[0x128] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x128])(1);
    param_1[0x128] = 0;
  }
  iVar3 = 7;
  puVar2 = param_1 + 0x4d;
  do {
    iVar1 = puVar2[-2];
    puVar2[-7] = vftable;
    puVar2[-1] = 0;
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      puVar2[-2] = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -7;
  } while (-1 < iVar3);
  iVar3 = param_1[0x13];
  param_1[0xe] = vftable;
  param_1[0x14] = 0;
  if (iVar3 != 0) {
    if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    param_1[0x13] = 0;
  }
  iVar3 = param_1[0xc];
  param_1[7] = vftable;
  param_1[0xd] = 0;
  if (iVar3 != 0) {
    if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    param_1[0xc] = 0;
  }
  iVar3 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar3 != 0) {
    if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CDAA80  cCustomObjCtrlManager::cCustomObjCtrlManager_2  size=271  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_2(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cWeaponInfoDispParts::vftable;
  iVar1 = param_1[0x2c];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x2c] = 0;
  }
  iVar1 = param_1[0x2d];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x2d] = 0;
  }
  iVar1 = param_1[0x2e];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x2e] = 0;
  }
  iVar1 = param_1[0x2f];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x2f] = 0;
  }
  iVar1 = param_1[0x30];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x30] = 0;
  }
  iVar1 = param_1[0x31];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x31] = 0;
  }
  iVar1 = param_1[0x32];
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[0x32] = 0;
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CDAFD0  cCustomObjCtrlManager::cCustomObjCtrlManager  size=567  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  
  *param_1 = cChapterResultParts::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 1;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 1;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[7] = vftable;
  param_1[0xe] = vftable;
  param_1[0x15] = vftable;
  param_1[0x1c] = vftable;
  param_1[0x23] = vftable;
  param_1[0x2a] = vftable;
  param_1[0x31] = vftable;
  param_1[0x38] = vftable;
  param_1[0x3f] = vftable;
  *(undefined2 *)(param_1 + 0x91) = 0;
  *(undefined1 *)((int)param_1 + 0x246) = 1;
  param_1[0x92] = 0;
  param_1[0x93] = 0xffffffff;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xb6] = 5;
  bVar1 = 0;
  do {
    bVar2 = bVar1 + 1;
    param_1[(char)bVar1 + 0xc2] = 0;
    param_1[(char)bVar1 + 0xcb] = 0;
    bVar1 = bVar2;
  } while (bVar2 < 9);
  return;
}

// 00CDBFA0  cCustomObjCtrlManager::~cCustomObjCtrlManager  size=557  [class]
void __fastcall cCustomObjCtrlManager::~cCustomObjCtrlManager(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = cBattleResultExParts::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 1;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 1;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 1;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 1;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[7] = vftable;
  param_1[0xe] = vftable;
  param_1[0x15] = vftable;
  param_1[0x1c] = vftable;
  param_1[0x23] = vftable;
  param_1[0x2a] = vftable;
  param_1[0x31] = vftable;
  param_1[0x38] = vftable;
  param_1[0x3f] = vftable;
  *(undefined2 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xb4] = 5;
  iVar2 = 9;
  puVar1 = param_1 + 0xcc;
  do {
    puVar1[-9] = 0;
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  return;
}

// 00CE3BC0  cCustomObjCtrlManager::cCustomObjCtrlManager_38  size=155  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_38(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = cQTEButtonPCParts::vftable;
  iVar2 = 2;
  puVar3 = param_1 + 0x42;
  do {
    iVar1 = puVar3[-2];
    puVar3[-7] = vftable;
    puVar3[-1] = 0;
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      puVar3[-2] = 0;
    }
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + -7;
  } while (-1 < iVar2);
  iVar2 = param_1[0x2b];
  param_1[0x26] = vftable;
  param_1[0x2c] = 0;
  if (iVar2 != 0) {
    if ((*(uint *)(iVar2 + 0x24) & 1) == 0) {
      *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) | 1;
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    param_1[0x2b] = 0;
  }
  iVar2 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar2 != 0) {
    if ((*(uint *)(iVar2 + 0x24) & 1) == 0) {
      *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) | 1;
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CE3FA0  cCustomObjCtrlManager::cCustomObjCtrlManager_39  size=106  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_39(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = cBattleResultExParts::vftable;
  iVar2 = 8;
  puVar3 = param_1 + 0x46;
  do {
    iVar1 = puVar3[-2];
    puVar3[-7] = vftable;
    puVar3[-1] = 0;
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      puVar3[-2] = 0;
    }
    iVar2 = iVar2 + -1;
    puVar3 = puVar3 + -7;
  } while (-1 < iVar2);
  iVar2 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar2 != 0) {
    if ((*(uint *)(iVar2 + 0x24) & 1) == 0) {
      *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) | 1;
      *(undefined4 *)(iVar2 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CE4C10  cCustomObjCtrlManager::vf00  size=63  [class]
undefined4 * __thiscall cCustomObjCtrlManager::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = vftable;
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

// 00CF37A0  cCustomObjCtrlManager::cCustomObjCtrlManager  size=158  [class]
undefined4 * __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = cChapterResult::vftable;
  cCustomObjCtrlManager();
  puVar2 = param_1 + 0xdb;
  iVar3 = 0x17;
  do {
    *puVar2 = vftable;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2 = puVar2 + 7;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined2 *)(param_1 + 0x1b5) = 0;
  *(undefined2 *)(param_1 + 0x1b4) = 0;
  *(undefined1 *)((int)param_1 + 0x6d2) = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  bVar1 = 0;
  do {
    iVar3 = (int)(char)bVar1;
    bVar1 = bVar1 + 1;
    param_1[iVar3 * 5 + 0x1bb] = 0;
  } while (bVar1 < 4);
  param_1[0x1b6] = 0;
  return param_1;
}

// 00CF3960  cCustomObjCtrlManager::cCustomObjCtrlManager_13  size=82  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_13(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cBattleResultEx::vftable;
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xdc])(1);
    param_1[0xdc] = 0;
  }
  cCustomObjCtrlManager_39();
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CF53F0  cCustomObjCtrlManager::cCustomObjCtrlManager_29  size=264  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_29(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = cGameResult::vftable;
  if ((undefined4 *)param_1[0x17d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17d])(1);
    param_1[0x17d] = 0;
  }
  if ((undefined4 *)param_1[0x17e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17e])(1);
    param_1[0x17e] = 0;
  }
  if ((undefined4 *)param_1[0x17f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x17f])(1);
    param_1[0x17f] = 0;
  }
  if ((undefined4 *)param_1[0x180] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x180])(1);
    param_1[0x180] = 0;
  }
  iVar3 = param_1[0x11a];
  param_1[0x115] = vftable;
  param_1[0x11b] = 0;
  if (iVar3 != 0) {
    if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    param_1[0x11a] = 0;
  }
  iVar3 = 1;
  puVar2 = param_1 + 0x115;
  do {
    iVar1 = puVar2[-0x82];
    puVar2[-0x87] = vftable;
    puVar2[-0x81] = 0;
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      puVar2[-0x82] = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -0x87;
  } while (-1 < iVar3);
  iVar3 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar3 != 0) {
    if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00CF5660  cCustomObjCtrlManager::cCustomObjCtrlManager_30  size=197  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = cGameAllResult::vftable;
  if ((undefined4 *)param_1[0x281] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x281])(1);
    param_1[0x281] = 0;
  }
  iVar3 = 1;
  puVar2 = param_1 + 0x281;
  do {
    iVar1 = puVar2[-0x34];
    puVar2[-0x39] = vftable;
    puVar2[-0x33] = 0;
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      puVar2[-0x34] = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -0x39;
  } while (-1 < iVar3);
  iVar3 = 4;
  puVar2 = param_1 + 0x20f;
  do {
    iVar1 = puVar2[-99];
    puVar2[-0x68] = vftable;
    puVar2[-0x62] = 0;
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      puVar2[-99] = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -0x68;
  } while (-1 < iVar3);
  iVar3 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar3 != 0) {
    if ((*(uint *)(iVar3 + 0x24) & 1) == 0) {
      *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 1;
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00D085A0  cCustomObjCtrlManager::cCustomObjCtrlManager_36  size=80  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_36(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cUnLockDisp::vftable;
  if (DAT_01dc0730 != 0) {
    FUN_00cfcb70(0x18);
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}

// 00D0A5B0  cCustomObjCtrlManager::cCustomObjCtrlManager_35  size=80  [class]
void __fastcall cCustomObjCtrlManager::cCustomObjCtrlManager_35(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cTitleDisp::vftable;
  if (DAT_01dc0730 != 0) {
    FUN_00cfcb70(0x19);
  }
  iVar1 = param_1[5];
  *param_1 = vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  return;
}


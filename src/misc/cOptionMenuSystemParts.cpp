// src/misc/cOptionMenuSystemParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00996940..009A8C20, 5 functions

#include "mgrr.h"
#include "cOptionMenuSystemParts.h"

// 00996940  cOptionMenuSystemParts::cOptionMenuSystemParts  size=48  [class]
undefined4 * __fastcall cOptionMenuSystemParts::cOptionMenuSystemParts(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  iVar1 = 2;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 009969D0  cOptionMenuSystemParts::vf00  size=66  [class]
undefined4 * __thiscall cOptionMenuSystemParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 2;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009A8AA0  cOptionMenuSystemParts::cOptionMenuSystemParts_2  size=229  [class]
undefined4 * __fastcall cOptionMenuSystemParts::cOptionMenuSystemParts_2(undefined4 *param_1)

{
  int iVar1;
  
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = cOptionMenu::vftable;
  param_1[7] = cMessWindowCtrl::vftable;
  param_1[8] = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[0xd] = vftable;
  iVar1 = 2;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_17();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  param_1[0xcc] = cOptionMenuGraphicParts::vftable;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x15c] = 0;
  *(undefined2 *)(param_1 + 0x14f) = 0;
  param_1[0x150] = 0;
  param_1[0x15d] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x158] = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  param_1[0x161] = 0;
  param_1[0x159] = 1;
  return param_1;
}

// 009A8B90  cOptionMenuSystemParts::cOptionMenuSystemParts_3  size=141  [class]
void __fastcall cOptionMenuSystemParts::cOptionMenuSystemParts_3(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = cOptionMenu::vftable;
  if ((undefined4 *)param_1[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xb])(1);
    param_1[0xb] = 0;
  }
  FUN_00cfe0f0(0x14);
  param_1[0xcc] = cOptionMenuGraphicParts::vftable;
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  param_1[0xd] = vftable;
  iVar1 = 2;
  do {
    cCustomObjCtrlManager::cCustomObjCtrlManager_37();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  param_1[7] = cMessWindowCtrl::vftable;
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
    param_1[8] = 0;
  }
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 009A8C20  FUN_009a8c20  size=68  [callgraph]
int FUN_009a8c20(void)

{
  int iVar1;
  
  iVar1 = FUN_00dd3500(0x58c,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cOptionMenuSystemParts::cOptionMenuSystemParts_2();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cOptionMenu";
      FUN_00d29ca0(0x76,10);
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    return iVar1;
  }
  return 0;
}


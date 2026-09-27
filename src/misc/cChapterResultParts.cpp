// src/misc/cChapterResultParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099A770..0099A7A0, 2 functions

#include "mgrr.h"
#include "cChapterResultParts.h"

// 0099A770  cChapterResultParts::~cChapterResultParts  size=45  [class]
void __fastcall cChapterResultParts::~cChapterResultParts(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 8;
  do {
    cCustomObjCtrlManager::~cCustomObjCtrlManager();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  return;
}

// 0099A7A0  cChapterResultParts::vf00  size=66  [class]
undefined4 * __thiscall cChapterResultParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 8;
  do {
    cCustomObjCtrlManager::~cCustomObjCtrlManager();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cCustomObjCtrlManager::~cCustomObjCtrlManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


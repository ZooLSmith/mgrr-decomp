// src/misc/cGameResultParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE40A0..00CF5320, 2 functions

#include "types.h"

// 00CE40A0  cGameResultParts::vf00  size=63  [class]
undefined4 * __thiscall cGameResultParts::vf00(undefined4 *param_1,byte param_2)

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

// 00CF5320  cGameResultParts::cGameResultParts  size=201  [class]
void __fastcall cGameResultParts::cGameResultParts(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = cGameResult::vftable;
  param_1[4] = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[7] = vftable;
  param_1[0x8c] = 0xffffffff;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 1;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x8e] = vftable;
  param_1[0x113] = 0xffffffff;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 1;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x115] = cGameResultRankDisp::vftable;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x18c] = 0;
  return;
}


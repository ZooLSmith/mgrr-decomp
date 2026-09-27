// src/misc/cGameResultRankDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE4140..00CF5500, 2 functions

#include "types.h"

// 00CE4140  cGameResultRankDisp::vf00  size=63  [class]
undefined4 * __thiscall cGameResultRankDisp::vf00(undefined4 *param_1,byte param_2)

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

// 00CF5500  cGameResultRankDisp::cGameResultRankDisp  size=338  [class]
void __fastcall cGameResultRankDisp::cGameResultRankDisp(undefined4 *param_1)

{
  *param_1 = cGameAllResult::vftable;
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
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 1;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 1;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 1;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ab] = 1;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[7] = vftable;
  param_1[0x6f] = vftable;
  param_1[0xd7] = vftable;
  param_1[0x13f] = vftable;
  param_1[0x1a7] = vftable;
  param_1[0x20f] = cDLCRankDisp::vftable;
  param_1[0x248] = cDLCRankDisp::vftable;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  param_1[0x212] = 0;
  param_1[0x213] = 1;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  param_1[0x24b] = 0;
  param_1[0x24c] = 1;
  param_1[0x24d] = 0;
  param_1[0x24e] = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0;
  *(undefined1 *)((int)param_1 + 0xa32) = 0;
  param_1[0x281] = 0;
  return;
}


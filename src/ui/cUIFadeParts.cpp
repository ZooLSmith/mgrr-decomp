// src/ui/cUIFadeParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC0AF0..00CDEB70, 4 functions

#include "mgrr.h"
#include "cUIFadeParts.h"

// 00CC0AF0  cUIFadeParts::vf08  size=15  [class]
void __fastcall cUIFadeParts::vf08(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00CD9080  cUIFadeParts::vf04  size=93  [class]
void __fastcall cUIFadeParts::vf04(int *param_1)

{
  int iVar1;
  
  if (param_1[1] == 0) {
    FUN_00c1cf50();
    iVar1 = FUN_00c1cfd0();
    if ((iVar1 != 0) && (DAT_01dc1b74 == 5)) {
      iVar1 = FUN_00ccdda0(param_1[2]);
      if (iVar1 == 0) {
        param_1[1] = -1;
        return;
      }
      (**(code **)(*param_1 + 8))();
      param_1[1] = 2;
      goto LAB_00cd90d3;
    }
  }
  else if (param_1[1] == 2) {
LAB_00cd90d3:
                    /* WARNING: Could not recover jumptable at 0x00cd90db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x14))();
    return;
  }
  return;
}

// 00CD90E0  cUIFadeParts::create  size=420  [class]
void __fastcall cUIFadeParts::create(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_24;
  uint local_20;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  }
  uVar2 = FUN_00fdbc60();
  local_24 = FUN_00fdbc60();
  local_20 = FUN_00fdbc60();
  uVar3 = FUN_00fdbc60();
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xff < (int)uVar2) {
    uVar2 = 0xff;
  }
  if ((int)local_24 < 0) {
    local_24 = 0;
  }
  else if (0xff < (int)local_24) {
    local_24 = 0xff;
  }
  if ((int)local_20 < 0) {
    local_20 = 0;
  }
  else if (0xff < (int)local_20) {
    local_20 = 0xff;
  }
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xff < (int)uVar3) {
    uVar3 = 0xff;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    *(float *)(iVar1 + 0x50) = (float)(uVar2 & 0xff) * 0.003921569;
    *(float *)(iVar1 + 0x54) = (float)(local_24 & 0xff) * 0.003921569;
    *(float *)(iVar1 + 0x58) = (float)(local_20 & 0xff) * 0.003921569;
    *(float *)(iVar1 + 0x5c) = (float)(uVar3 & 0xff) * 0.003921569;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(uint *)(*(int *)(param_1 + 0x14) + 4) = (uint)(uVar3 != 0);
  }
  return;
}

// 00CDEB70  cUIFadeParts::vf00  size=63  [class]
undefined4 * __thiscall cUIFadeParts::vf00(undefined4 *param_1,byte param_2)

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


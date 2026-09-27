// src/misc/cCodecWindowParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD13B0..00D220A0, 5 functions

#include "mgrr.h"
#include "cCodecWindowParts.h"

// 00CD13B0  cCodecWindowParts::cCodecWindowParts  size=214  [class]
undefined4 * cCodecWindowParts::cCodecWindowParts(void)

{
  undefined4 *extraout_EDX;
  
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  extraout_EDX[0x3d] = 0;
  extraout_EDX[0x3e] = 0;
  extraout_EDX[0x5c] = 0;
  extraout_EDX[0x5d] = 0;
  extraout_EDX[0x5f] = 0;
  extraout_EDX[0x60] = 0;
  extraout_EDX[0x62] = 0;
  extraout_EDX[99] = 0;
  extraout_EDX[100] = 0;
  *extraout_EDX = vftable;
  extraout_EDX[0x5e] = 0xffffffff;
  extraout_EDX[0x61] = 1;
  extraout_EDX[0x45] = 0;
  extraout_EDX[0x4b] = 0;
  extraout_EDX[0x46] = 0;
  extraout_EDX[0x4c] = 0;
  extraout_EDX[0x47] = 0;
  extraout_EDX[0x4d] = 0;
  extraout_EDX[0x48] = 0;
  extraout_EDX[0x4e] = 0;
  extraout_EDX[0x49] = 0;
  extraout_EDX[0x4f] = 0;
  extraout_EDX[0x4a] = 0;
  extraout_EDX[0x50] = 0;
  extraout_EDX[0x54] = 0;
  extraout_EDX[0x55] = 0;
  extraout_EDX[0x56] = 0;
  extraout_EDX[0x57] = 0;
  extraout_EDX[0x58] = 0;
  extraout_EDX[0x59] = 0;
  extraout_EDX[0x5a] = 0;
  extraout_EDX[0x5b] = 0;
  return extraout_EDX;
}

// 00CD1490  cCodecWindowParts::vf04  size=93  [class]
void __fastcall cCodecWindowParts::vf04(int *param_1)

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
      goto LAB_00cd14e3;
    }
  }
  else if (param_1[1] == 2) {
LAB_00cd14e3:
                    /* WARNING: Could not recover jumptable at 0x00cd14eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x14))();
    return;
  }
  return;
}

// 00CE32E0  cCodecWindowParts::vf00  size=63  [class]
undefined4 * __thiscall cCodecWindowParts::vf00(undefined4 *param_1,byte param_2)

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

// 00D214A0  cCodecWindowParts::vf08  size=3061  [class]
void __fastcall cCodecWindowParts::vf08(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int extraout_EDX;
  char local_40 [64];
  
  if (*(int *)(param_1 + 0x174) == 1) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x14) + 0x28);
    *puVar1 = *puVar1 | 0x80000;
    puVar1 = (uint *)(*(int *)(param_1 + 0x14) + 0x28);
    *puVar1 = *puVar1 | 0x8000000;
    puVar1 = (uint *)(*(int *)(param_1 + 0x14) + 0x28);
    *puVar1 = *puVar1 & 0xfdffffff;
  }
  else {
    puVar1 = (uint *)(*(int *)(param_1 + 0x14) + 0x28);
    *puVar1 = *puVar1 & 0xfff7ffff;
    puVar1 = (uint *)(*(int *)(param_1 + 0x14) + 0x28);
    *puVar1 = *puVar1 & 0xf7ffffff;
    puVar1 = (uint *)(*(int *)(param_1 + 0x14) + 0x28);
    *puVar1 = *puVar1 | 0x2000000;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x204) = 1;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xfc) = 2;
  *(undefined4 *)(param_1 + 0x100) = 5;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 4;
  *(undefined4 *)(param_1 + 0x10c) = 1;
  *(undefined4 *)(param_1 + 0x110) = 3;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0x8a);
  }
  *(uint *)(param_1 + 0x90) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0x8e);
  }
  *(uint *)(param_1 + 0x94) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0x9c);
  }
  *(uint *)(param_1 + 0x98) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xa2);
  }
  *(uint *)(param_1 + 0x9c) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xa6);
  }
  *(uint *)(param_1 + 0xa0) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xa8);
  }
  *(uint *)(param_1 + 0xa4) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb0);
  }
  *(uint *)(param_1 + 0xa8) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb2);
  }
  *(uint *)(param_1 + 0xac) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb4);
  }
  *(uint *)(param_1 + 0xb0) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xb8);
  }
  *(uint *)(param_1 + 0xb4) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xba);
  }
  *(uint *)(param_1 + 0xb8) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xbc);
  }
  *(uint *)(param_1 + 0xbc) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xc4);
  }
  *(uint *)(param_1 + 0xc0) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xc6);
  }
  *(uint *)(param_1 + 0xc4) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 200);
  }
  *(uint *)(param_1 + 200) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xca);
  }
  *(uint *)(param_1 + 0xcc) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xcc);
  }
  *(uint *)(param_1 + 0xd0) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xce);
  }
  *(uint *)(param_1 + 0xd4) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xd0);
  }
  *(uint *)(param_1 + 0xd8) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xd2);
  }
  *(uint *)(param_1 + 0xdc) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xd8);
  }
  *(uint *)(param_1 + 0xe0) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xda);
  }
  *(uint *)(param_1 + 0xe4) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xec);
  }
  *(uint *)(param_1 + 0xe8) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0xee);
  }
  *(uint *)(param_1 + 0xec) = uVar7;
  if (iVar4 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar4 + 0x14c);
  }
  *(uint *)(param_1 + 0xf0) = uVar7;
  builtin_strncpy(local_40 + 8,"c_00",4);
  local_40[0xd] = '\0';
  local_40[0xe] = '\0';
  local_40[0xf] = '\0';
  local_40[0x10] = '\0';
  local_40[0x11] = '\0';
  local_40[0x12] = '\0';
  local_40[0x13] = '\0';
  local_40[0x14] = '\0';
  local_40[0x15] = '\0';
  local_40[0x16] = '\0';
  local_40[0x17] = '\0';
  local_40[0x18] = '\0';
  local_40[0x19] = '\0';
  local_40[0x1a] = '\0';
  local_40[0x1b] = '\0';
  local_40[0x1c] = '\0';
  local_40[0x1d] = '\0';
  local_40[0x1e] = '\0';
  local_40[0x1f] = 0;
  local_40[0x24] = 'c';
  local_40[0x25] = '_';
  local_40[0x26] = 'e';
  local_40[0x27] = 't';
  builtin_strncpy(local_40,"code",4);
  local_40[0x2d] = '\0';
  local_40[0x2e] = '\0';
  local_40[0x2f] = '\0';
  local_40[0x30] = '\0';
  local_40[0x31] = '\0';
  local_40[0x32] = '\0';
  local_40[0x33] = '\0';
  local_40[0x34] = '\0';
  local_40[0x35] = '\0';
  local_40[0x36] = '\0';
  local_40[0x37] = '\0';
  local_40[0x38] = '\0';
  local_40[0x39] = '\0';
  local_40[0x3a] = '\0';
  local_40[0x3b] = '\0';
  local_40[0x3c] = '\0';
  local_40[0x3d] = '\0';
  local_40[0x3e] = '\0';
  local_40[0x3f] = 0;
  local_40[0xc] = 0;
  builtin_strncpy(local_40 + 4,"c_et",4);
  local_40[0x28] = 'c';
  local_40[0x29] = '_';
  local_40[0x2a] = '0';
  local_40[0x2b] = '1';
  local_40[0x20] = 'c';
  local_40[0x21] = 'o';
  local_40[0x22] = 'd';
  local_40[0x23] = 'e';
  local_40[0x2c] = 0;
  iVar3 = FUN_00e03ea0(local_40 + *(int *)(param_1 + 0x17c) * 0x20);
  iVar4 = *(int *)(param_1 + 0x18);
  if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar4 + 0x80))) &&
      (piVar2 = *(int **)(*(int *)(iVar4 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0x98) * 0x400),
      piVar2 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 1)) {
    piVar2[9] = iVar3;
  }
  iVar3 = FUN_00cb6f30(*(undefined4 *)(param_1 + 0x178));
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  if ((((iVar3 == 6) || (iVar3 == 7)) ||
      ((((iVar3 == 8 || (((iVar3 == 9 || (iVar3 == 10)) || (iVar3 == 0xb)))) ||
        ((iVar3 == 0xc || (iVar3 == 0xd)))) || (iVar3 == 0xe)))) ||
     ((iVar3 == 0xf || (iVar3 == 0x10)))) {
    iVar4 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x184) = 0;
    if ((iVar4 != 0) &&
       ((*(uint *)(param_1 + 0x94) < *(uint *)(iVar4 + 0x80) &&
        (iVar4 = *(uint *)(param_1 + 0x94) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)))) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x184) = 1;
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x94),0);
    iVar3 = extraout_EDX;
  }
  iVar3 = iVar3 * 0x100;
  iVar5 = FUN_00e03ea0(s_codec_fw_f_01_018b4418 + iVar3);
  iVar4 = *(int *)(param_1 + 0x18);
  if ((((iVar4 != 0) && (*(uint *)(param_1 + 0xac) < *(uint *)(iVar4 + 0x80))) &&
      (piVar2 = *(int **)(*(uint *)(param_1 + 0xac) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar2 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 1)) {
    piVar2[9] = iVar5;
  }
  iVar5 = FUN_00e03ea0(s_codec_fw_f_01_018b4418 + iVar3);
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xb0) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar2 = *(int **)(*(int *)(iVar4 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0xb0) * 0x400),
      piVar2 != (int *)0x0 && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 1)))) {
    piVar2[9] = iVar5;
  }
  iVar5 = FUN_00e03ea0(s_codec_fw_s_01_018b4438 + iVar3);
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xb8) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar2 = *(int **)(*(uint *)(param_1 + 0xb8) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar2 != (int *)0x0 && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 1)))) {
    piVar2[9] = iVar5;
  }
  iVar5 = FUN_00e03ea0(s_codec_fw_s_01_018b4438 + iVar3);
  iVar4 = *(int *)(param_1 + 0x18);
  if ((((iVar4 != 0) && (*(uint *)(param_1 + 0xbc) < *(uint *)(iVar4 + 0x80))) &&
      (piVar2 = *(int **)(*(uint *)(param_1 + 0xbc) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar2 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 1)) {
    piVar2[9] = iVar5;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xcc) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar2 = *(int **)(*(uint *)(param_1 + 0xcc) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar2 != (int *)0x0 && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 3)))) {
    uVar6 = FUN_00e03ea0(s_PROFILE_A_01_018b4458 + iVar3);
    piVar2[0x2a] = -1;
    piVar2[0x2b] = 0;
    if (((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) &&
       (iVar4 = FUN_00cb1cd0(uVar6), -1 < iVar4)) {
      piVar2[0x2a] = iVar4;
      piVar2[0x2b] = 0;
      piVar2[0x2e] = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if ((((iVar4 != 0) && (*(uint *)(param_1 + 0xd0) < *(uint *)(iVar4 + 0x80))) &&
      (piVar2 = *(int **)(*(uint *)(param_1 + 0xd0) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar2 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 3)) {
    uVar6 = FUN_00e03ea0(s_PROFILE_B_01_018b4478 + iVar3);
    piVar2[0x2a] = -1;
    piVar2[0x2b] = 0;
    if (((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) &&
       (iVar4 = FUN_00cb1cd0(uVar6), -1 < iVar4)) {
      piVar2[0x2a] = iVar4;
      piVar2[0x2b] = 0;
      piVar2[0x2e] = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xd4) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar2 = *(int **)(*(uint *)(param_1 + 0xd4) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar2 != (int *)0x0 && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 3)))) {
    uVar6 = FUN_00e03ea0(s_PROFILE_F_01_018b4498 + iVar3);
    piVar2[0x2a] = -1;
    piVar2[0x2b] = 0;
    if (((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) &&
       (iVar4 = FUN_00cb1cd0(uVar6), -1 < iVar4)) {
      piVar2[0x2a] = iVar4;
      piVar2[0x2b] = 0;
      piVar2[0x2e] = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xd8) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar2 = *(int **)(*(uint *)(param_1 + 0xd8) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar2 != (int *)0x0 && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 3)))) {
    uVar6 = FUN_00e03ea0(s_PROFILE_E_01_018b44b8 + iVar3);
    piVar2[0x2a] = -1;
    piVar2[0x2b] = 0;
    if (((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) &&
       (iVar4 = FUN_00cb1cd0(uVar6), -1 < iVar4)) {
      piVar2[0x2a] = iVar4;
      piVar2[0x2b] = 0;
      piVar2[0x2e] = 0;
    }
  }
  if (s_PROFILE_G_01_018b44d8[iVar3] == '\0') {
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x180) = 1;
    if ((((iVar4 != 0) && (*(uint *)(param_1 + 0xdc) < *(uint *)(iVar4 + 0x80))) &&
        (piVar2 = *(int **)(*(uint *)(param_1 + 0xdc) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar2 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 3)) {
      uVar6 = FUN_00e03ea0(s_PROFILE_G_01_018b44d8 + iVar3);
      piVar2[0x2a] = -1;
      piVar2[0x2b] = 0;
      if (((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) &&
         (iVar4 = FUN_00cb1cd0(uVar6), -1 < iVar4)) {
        piVar2[0x2a] = iVar4;
        piVar2[0x2b] = 0;
        piVar2[0x2e] = 0;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xe0) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar2 = *(int **)(*(uint *)(param_1 + 0xe0) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar2 != (int *)0x0 && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 3)))) {
    uVar6 = FUN_00e03ea0(s_HUD_CHARA_NAME_S_0029_018b44f8 + iVar3);
    piVar2[0x2a] = -1;
    piVar2[0x2b] = 2;
    if (((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) &&
       (iVar4 = FUN_00cb1cd0(uVar6), -1 < iVar4)) {
      piVar2[0x2a] = iVar4;
      piVar2[0x2b] = 2;
      piVar2[0x2e] = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xe4) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar2 = *(int **)(*(uint *)(param_1 + 0xe4) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar2 != (int *)0x0 && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 3)))) {
    uVar6 = FUN_00e03ea0(s_HUD_CHARA_NAME_S_0029_018b44f8 + iVar3);
    piVar2[0x2a] = -1;
    piVar2[0x2b] = 2;
    if (((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) &&
       (iVar4 = FUN_00cb1cd0(uVar6), -1 < iVar4)) {
      piVar2[0x2a] = iVar4;
      piVar2[0x2b] = 2;
      piVar2[0x2e] = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if ((((iVar4 != 0) && (*(uint *)(param_1 + 0xe8) < *(uint *)(iVar4 + 0x80))) &&
      (piVar2 = *(int **)(*(uint *)(param_1 + 0xe8) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar2 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 3)) {
    uVar6 = FUN_00e03ea0(s_HUD_CHARA_NAME_S_0029_018b44f8 + iVar3);
    piVar2[0x2a] = -1;
    piVar2[0x2b] = 2;
    if (((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) &&
       (iVar4 = FUN_00cb1cd0(uVar6), -1 < iVar4)) {
      piVar2[0x2a] = iVar4;
      piVar2[0x2b] = 2;
      piVar2[0x2e] = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xec) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar2 = *(int **)(*(uint *)(param_1 + 0xec) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar2 != (int *)0x0 && (iVar4 = (**(code **)(*piVar2 + 8))(), iVar4 == 3)))) {
    uVar6 = FUN_00e03ea0(s_HUD_CHARA_NAME_S_0029_018b44f8 + iVar3);
    piVar2[0x2a] = -1;
    piVar2[0x2b] = 2;
    if (((piVar2[5] != 0) && (*(int *)(piVar2[5] + 4) != 0)) &&
       (iVar4 = FUN_00cb1cd0(uVar6), -1 < iVar4)) {
      piVar2[0x2a] = iVar4;
      piVar2[0x2b] = 2;
      piVar2[0x2e] = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x9c) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xcc) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xcc) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xd0) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xd0) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xd4) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xd4) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xd8) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xd8) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xdc) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xdc) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xe0) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xe0) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xe4) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xe4) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xe8) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xe8) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xec) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xec) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar4 + 0x80))) &&
     ((iVar4 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0 &&
      ((iVar4 = *(int *)(iVar4 + 0x3f4), iVar4 != 0 && (*(int *)(iVar4 + 4) == 500)))))) {
    *(undefined4 *)(iVar4 + 0x40) = *(undefined4 *)(param_1 + 0x17c);
  }
  FUN_00d139c0();
  *(uint *)(param_1 + 0x194) = (uint)DAT_01dc1418;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

// 00D220A0  cCodecWindowParts::vf14  size=1289  [class]
void __fastcall cCodecWindowParts::vf14(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x188) != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (((iVar1 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar1 + 0x80))) &&
       (iVar1 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0x3b0) = *(undefined4 *)(param_1 + 0x184);
    }
  }
  switch(*(undefined4 *)(param_1 + 0xf4)) {
  case 0:
    FUN_00e5e050("core_se_sys_radio_window_open",0);
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(1);
    }
    *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
    break;
  case 1:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar1 = FUN_00cdf400(1), iVar1 != 0)) {
      if (*(int *)(param_1 + 0x178) == 10) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xe8),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xec),1);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0xe8),0,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0xec),0,3);
        *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
      }
      else {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xe0),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xe4),1);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0xe0),0,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0xe4),0,3);
        *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
      }
    }
    break;
  case 2:
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    iVar1 = (int)(*(int *)(param_1 + 0xf8) + (*(int *)(param_1 + 0xf8) >> 0x1f & 3U)) >> 2;
    if (5 < iVar1) {
      iVar1 = 5;
    }
    *(undefined4 *)(param_1 + 0x114 + *(int *)(param_1 + 0xfc + iVar1 * 4) * 4) = 1;
    if ((*(int *)(param_1 + 0x114) != 0) && (*(int *)(param_1 + 300) == 0)) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(2);
      }
      *(undefined4 *)(param_1 + 300) = 0xffffffff;
    }
    if ((*(int *)(param_1 + 0x118) != 0) && (*(int *)(param_1 + 0x130) == 0)) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xa8),3);
      *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
    }
    if ((*(int *)(param_1 + 0x11c) != 0) && (*(int *)(param_1 + 0x134) == 0)) {
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xb4),3);
      *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
    }
    if (*(int *)(param_1 + 0x120) != 0) {
      if (*(int *)(param_1 + 0x138) == 0) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xc0),3);
        *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
      }
      else if ((*(int *)(param_1 + 0x138) == 1) &&
              (iVar1 = FUN_00cb24b0(*(undefined4 *)(param_1 + 0xc0)), iVar1 != 0)) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xcc),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xd0),1);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0xcc),0,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0xd0),0,3);
        *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
      }
    }
    if (*(int *)(param_1 + 0x124) != 0) {
      if (*(int *)(param_1 + 0x13c) == 0) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xc4),3);
        *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
      }
      else if ((*(int *)(param_1 + 0x13c) == 1) &&
              (iVar1 = FUN_00cb24b0(*(undefined4 *)(param_1 + 0xc4)), iVar1 != 0)) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xd4),1);
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xd8),1);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0xd4),0,3);
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0xd8),0,3);
        *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
      }
    }
    if (*(int *)(param_1 + 0x128) != 0) {
      if (*(int *)(param_1 + 0x140) == 0) {
        FUN_00ce4ce0(*(undefined4 *)(param_1 + 200),3);
        *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
      }
      else if ((*(int *)(param_1 + 0x140) == 1) &&
              (iVar1 = FUN_00cb24b0(*(undefined4 *)(param_1 + 200)), iVar1 != 0)) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0x180));
        FUN_00ccdf90(*(undefined4 *)(param_1 + 0xdc),0,3);
        *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
      }
    }
    if ((*(int *)(param_1 + 0x140) == -1) &&
       (*(int *)(param_1 + 0x13c) == -1 &&
        (*(int *)(param_1 + 0x138) == -1 &&
        (*(int *)(param_1 + 0x134) == -1 &&
        (*(int *)(param_1 + 0x130) == -1 && *(int *)(param_1 + 300) == -1))))) {
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
    }
    break;
  case 3:
    if (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x18c)) {
      if (*(int *)(param_1 + 0x18c) == 0) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x9c),0);
      }
      else {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x9c),1);
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(5);
        }
      }
    }
    *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x18c);
    if (*(int *)(param_1 + 0x170) != 0) {
      FUN_00e5e050("core_se_sys_radio_window_close",0);
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(4);
      }
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
    }
    break;
  case 4:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar1 = FUN_00cdf400(4), iVar1 != 0)) {
      *(undefined4 *)(param_1 + 0xf4) = 5;
    }
  }
  if (*(int *)(param_1 + 0x174) == 1) {
    FUN_00cb27c0(*(undefined4 *)(param_1 + 0xf0),param_1 + 0x150);
    FUN_00cb29c0(*(undefined4 *)(param_1 + 0xf0),param_1 + 0x160);
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x154);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x160);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x164);
    FUN_00cb33d0(*(undefined4 *)(param_1 + 0xf0),0x40c00000,0x40c00000,0x44160000,0x43c80000);
  }
  if ((*(uint *)(param_1 + 0x194) != (uint)DAT_01dc1418) || (DAT_01dc2d8c != 0)) {
    FUN_00d139c0();
    *(uint *)(param_1 + 0x194) = (uint)DAT_01dc1418;
  }
  return;
}


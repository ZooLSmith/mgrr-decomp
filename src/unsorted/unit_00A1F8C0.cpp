// src/unsorted/unit_00A1F8C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A1F8C0..00A20D20, 15 functions

#include "mgrr.h"

// 00A1F8C0  FUN_00a1f8c0  size=1  [run]
void FUN_00a1f8c0(void)

{
  return;
}

// 00A1FC60  FUN_00a1fc60  size=11  [run]
void FUN_00a1fc60(void)

{
  FUN_00dd7270();
  return;
}

// 00A1FCC0  FUN_00a1fcc0  size=371  [run]
void __fastcall FUN_00a1fcc0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int local_4;
  
  puVar2 = (uint *)(param_1 + 0x2208);
  local_4 = 0x100;
  do {
    if ((puVar2[-0x2c] & 1) != 0) {
      if ((puVar2[-0x2d] == 0) && ((int)puVar2[-0x2e] < 0xf000)) {
        puVar2[-0x2c] = puVar2[-0x2c] & 0xffffffdf;
      }
      else if ((*(int *)(param_1 + 0x5a19c) == 0) ||
              (puVar2[-0x2d] != *(uint *)(*(int *)(param_1 + 0x5a19c) + 8))) {
        if ((puVar2[-0x2c] & 4) != 0) {
          puVar2[-0x2c] = puVar2[-0x2c] & 0xfffffffe;
        }
        puVar2[-0x2c] = puVar2[-0x2c] | 0x20;
      }
      else {
        puVar2[-0x2c] = puVar2[-0x2c] & 0xffffffdf;
      }
    }
    uVar1 = *puVar2;
    if ((uVar1 & 1) != 0) {
      if ((puVar2[-1] == 0) && ((int)puVar2[-2] < 0xf000)) {
        *puVar2 = uVar1 & 0xffffffdf;
      }
      else if ((*(int *)(param_1 + 0x5a19c) == 0) ||
              (puVar2[-1] != *(uint *)(*(int *)(param_1 + 0x5a19c) + 8))) {
        if ((uVar1 & 4) != 0) {
          *puVar2 = uVar1 & 0xfffffffe;
        }
        *puVar2 = *puVar2 | 0x20;
      }
      else {
        *puVar2 = uVar1 & 0xffffffdf;
      }
    }
    uVar1 = puVar2[0x2c];
    if ((uVar1 & 1) != 0) {
      if ((puVar2[0x2b] == 0) && ((int)puVar2[0x2a] < 0xf000)) {
        puVar2[0x2c] = uVar1 & 0xffffffdf;
      }
      else if ((*(int *)(param_1 + 0x5a19c) == 0) ||
              (puVar2[0x2b] != *(uint *)(*(int *)(param_1 + 0x5a19c) + 8))) {
        if ((uVar1 & 4) != 0) {
          puVar2[0x2c] = uVar1 & 0xfffffffe;
        }
        puVar2[0x2c] = puVar2[0x2c] | 0x20;
      }
      else {
        puVar2[0x2c] = uVar1 & 0xffffffdf;
      }
    }
    uVar1 = puVar2[0x58];
    if ((uVar1 & 1) != 0) {
      if ((puVar2[0x57] == 0) && ((int)puVar2[0x56] < 0xf000)) {
        puVar2[0x58] = uVar1 & 0xffffffdf;
      }
      else if ((*(int *)(param_1 + 0x5a19c) == 0) ||
              (puVar2[0x57] != *(uint *)(*(int *)(param_1 + 0x5a19c) + 8))) {
        if ((uVar1 & 4) != 0) {
          puVar2[0x58] = uVar1 & 0xfffffffe;
        }
        puVar2[0x58] = puVar2[0x58] | 0x20;
      }
      else {
        puVar2[0x58] = uVar1 & 0xffffffdf;
      }
    }
    puVar2 = puVar2 + 0xb0;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 00A1FFE0  FUN_00a1ffe0  size=18  [run]
int __fastcall FUN_00a1ffe0(int param_1)

{
  return param_1 + ((uint)*(byte *)(param_1 + 0xbf0) * 3 + 0x7a4) * 4;
}

// 00A20070  FUN_00a20070  size=11  [run]
void __fastcall FUN_00a20070(int param_1)

{
  *(undefined4 *)(param_1 + 0x6e4) = 1;
  return;
}

// 00A20080  FUN_00a20080  size=11  [run]
void __fastcall FUN_00a20080(int param_1)

{
  *(undefined4 *)(param_1 + 0x6e4) = 0;
  return;
}

// 00A20090  FUN_00a20090  size=1  [run]
void FUN_00a20090(void)

{
  return;
}

// 00A200A0  FUN_00a200a0  size=1  [run]
void FUN_00a200a0(void)

{
  return;
}

// 00A201F0  FUN_00a201f0  size=147  [run]
void FUN_00a201f0(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_30 [44];
  undefined4 local_4;
  
  if (*param_1 == '\0') {
    uVar2 = 5;
  }
  else {
    uVar2 = 0;
  }
  FUN_00fba040(uVar2);
  Hw::cRenderTargetInfo::cRenderTargetInfo();
  FUN_00f97580(0,DAT_01b83c2c,0);
  local_4 = 1;
  FUN_00fa5730(local_30,1);
  FUN_00fba300();
  if (param_1[1] != '\x15') {
    iVar1 = FUN_00f99150();
    uVar2 = 6;
    if (iVar1 != 0) goto LAB_00a20264;
  }
  uVar2 = 7;
LAB_00a20264:
  FUN_00f98b60(0xffffffff,0x3f800000,0,uVar2);
  Hw::cRenderTargetInfo::cRenderTargetInfo_2();
  return;
}

// 00A202B0  FUN_00a202b0  size=195  [run]
void FUN_00a202b0(void)

{
  undefined1 *puStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  uStack_94 = 5;
  uStack_98 = 0xa202c3;
  FUN_00f9d810();
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  uStack_94 = DAT_01f6c7a0;
  local_6c = 0;
  uStack_98 = DAT_01f6c7a4;
  local_70 = 0;
  puStack_9c = local_50;
  local_74 = 0;
  local_78 = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_54 = 0x3f800000;
  local_68 = 0x3f800000;
  local_7c = 0x3f800000;
  local_90 = 0x3f800000;
  D3DXMatrixMultiply();
  FUN_00fa1ed0(&local_5c);
  FUN_00fa1ef0(&puStack_9c);
  FUN_00f9d760(1);
  FUN_00f9d7a0(0);
  FUN_00f9db30(0);
  FUN_00f9dcf0(1);
  FUN_00f9dd70(1,1,3);
  FUN_00f9d6e0(3);
  return;
}

// 00A20810  FUN_00a20810  size=106  [run]
void FUN_00a20810(void)

{
  undefined1 local_30 [44];
  undefined4 local_4;
  
  Hw::cRenderTargetInfo::cRenderTargetInfo();
  FUN_00f97580(0,DAT_01b83c28,0);
  local_4 = 0;
  FUN_00f9da90(1);
  FUN_00fa5730(local_30,1);
  FUN_00f98b60(0,0x3f800000,0,1);
  FUN_00f9d8f0(0);
  FUN_00f9db30(1);
  Hw::cRenderTargetInfo::cRenderTargetInfo_2();
  return;
}

// 00A20880  FUN_00a20880  size=64  [run]
void FUN_00a20880(void)

{
  undefined1 local_30 [44];
  undefined4 local_4;
  
  Hw::cRenderTargetInfo::cRenderTargetInfo();
  FUN_00f97580(0,DAT_01b83c2c,0);
  local_4 = 1;
  FUN_00fa5730(local_30,1);
  Hw::cRenderTargetInfo::cRenderTargetInfo_2();
  return;
}

// 00A20920  FUN_00a20920  size=280  [run]
void FUN_00a20920(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  FUN_00f9d760(0);
  FUN_00f9d7a0(0);
  FUN_00f9db30(0);
  FUN_00f9d8f0(0);
  FUN_00f9d6e0(1);
  FUN_00f9dcf0(1);
  FUN_00f9df20(0xff);
  FUN_00f9de50(8,0x80,0xff);
  FUN_00f9dd70(1,1,3);
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_78 = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  local_8c = 0;
  local_54 = 0x3f800000;
  local_68 = 0x3f800000;
  local_7c = 0x3f800000;
  local_90 = 0x3f800000;
  if (DAT_018a0570 == 0) {
    uVar2 = 0x44000000;
    uVar1 = 0x44000000;
  }
  else {
    uVar2 = 0x44400000;
    uVar1 = 0x44400000;
  }
  FUN_00ddcbb0(local_50,0,uVar1,uVar2,0,0,0x477fff00);
  FUN_00fa1ed0(local_50);
  FUN_00fa1ef0(&local_90);
  return;
}

// 00A20B10  FUN_00a20b10  size=496  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a20b10(undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined *puVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 unaff_retaddr;
  
  iVar4 = FUN_00f98a90();
  iVar5 = FUN_00f98aa0();
  if (DAT_018d1f70 != 0) {
    if ((_DAT_01be6720 & 1) == 0) {
      _DAT_01be6720 = _DAT_01be6720 | 1;
      _DAT_01be6710 = 0;
      _DAT_01be6714 = 0;
      _DAT_01be6718 = 0.0;
      _DAT_01be671c = 0.0;
    }
    if ((_DAT_01bea080 & 0x100000) == 0) {
      _DAT_01be6710 = _DAT_01b83d40;
      _DAT_01be6714 = _DAT_01b83d44;
      fVar8 = (float10)fsin((float10)_DAT_01f6c938);
      fVar9 = fVar8 * (float10)_DAT_01b83d4c + (float10)_DAT_01be671c;
      fVar1 = (float10)1;
      for (fVar8 = (float10)_DAT_01b83d48 * fVar8 + (float10)_DAT_01be6718; fVar1 < fVar8;
          fVar8 = fVar8 - fVar1) {
      }
      fVar10 = (float10)-1.0;
      for (; fVar8 < fVar10; fVar8 = fVar8 + fVar1) {
      }
      _DAT_01be6718 = (float)fVar8;
      for (; fVar1 < fVar9; fVar9 = fVar9 - fVar1) {
      }
      _DAT_01be671c = (float)fVar9;
      if (fVar9 < fVar10) {
        do {
          fVar9 = fVar9 + fVar1;
        } while (fVar9 < fVar10);
        _DAT_01be671c = (float)fVar9;
      }
    }
    FUN_00eb22a0(&DAT_01be6710,&DAT_01b83d50);
    FUN_00eb2340();
    puVar7 = &DAT_01edcea8;
    piVar6 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar6 + 0x28))(0xffffffff);
    if (iVar4 != 0) {
      piVar6 = (int *)FUN_00a7c8a0();
      iVar4 = (**(code **)(*piVar6 + 0x32c))();
      if (iVar4 != 0) {
        puVar7 = &DAT_01edce10;
      }
    }
    FUN_00eb84f0(puVar7,unaff_retaddr,&DAT_01be08e0,param_1);
    return;
  }
  fVar2 = (float)iVar5;
  if (iVar5 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (float)iVar4;
  if (iVar4 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  FUN_00eb76a0(param_1,param_2,0,0,fVar3,fVar2,0,1,1,0,0);
  return;
}

// 00A20D20  FUN_00a20d20  size=257  [run]
void FUN_00a20d20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 local_8;
  
  fVar4 = (float10)FUN_00cad4b0();
  local_8 = (undefined4)(longlong)ROUND(fVar4 * (float10)1004.0);
  uVar1 = local_8;
  fVar4 = (float10)FUN_00cad4d0();
  local_8 = (undefined4)(longlong)ROUND(fVar4 * (float10)54.0);
  uVar2 = local_8;
  fVar4 = (float10)FUN_00cad4b0();
  local_8 = (undefined4)(longlong)ROUND(fVar4 * (float10)180.0);
  uVar3 = local_8;
  fVar4 = (float10)FUN_00cad4d0();
  local_8 = (undefined4)(longlong)ROUND(fVar4 * (float10)180.0);
  thunk_FUN_00f98510(uVar1,uVar2,uVar3,local_8);
  FUN_00fba040(4);
  FUN_00fba300();
  FUN_00f9d850(0);
  return;
}


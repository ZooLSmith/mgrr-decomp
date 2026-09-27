// src/misc/esp09.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD3C0..00F2F790, 6 functions

#include "types.h"

// 00ECD3C0  esp09::esp09  size=18  [class]
undefined4 * __fastcall esp09::esp09(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0860  esp09::vf00  size=30  [class]
undefined4 __thiscall esp09::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ED7E20  esp09::vf14  size=32  [class]
void __fastcall esp09::vf14(int param_1)

{
  if (*(int *)(param_1 + 0x46c) != 0) {
    FUN_00f40f90();
    *(undefined4 *)(param_1 + 0x46c) = 0;
  }
  return;
}

// 00F14960  esp09::vf08  size=1168  [class]
void __fastcall esp09::vf08(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x460);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  fVar2 = *(float *)(param_1 + 400);
  if (*(short *)(param_1 + 0x4e) == -3) {
    iVar5 = FUN_00f98a90();
    *(float *)(param_1 + 0x450) = fVar2 / (float)iVar5 + 0.5;
    fVar2 = *(float *)(param_1 + 0x194);
    iVar5 = FUN_00f98aa0();
    *(float *)(param_1 + 0x454) = fVar2 / (float)iVar5 + 0.5;
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 0x25c);
  }
  else {
    local_3c = *(undefined4 *)(param_1 + 0x194);
    local_38 = *(float *)(param_1 + 0x198);
    local_34 = *(float *)(param_1 + 0x19c);
    local_40 = fVar2;
    iVar5 = FUN_00ea0000(&local_30,&local_40);
    if (iVar5 == 0) {
      pfVar6 = (float *)FUN_00e9fe70();
      fVar2 = local_40 - *pfVar6;
      fVar3 = local_38 - pfVar6[2];
      fVar4 = local_34 - pfVar6[3];
      pfVar6 = (float *)FUN_00e9fe70();
      local_40 = *pfVar6 - fVar2;
      local_38 = pfVar6[2] - fVar3;
      local_34 = pfVar6[3] - fVar4;
      local_3c = *(undefined4 *)(param_1 + 0x194);
      local_30 = 0.0;
      local_2c = 0.0;
      local_28 = 0;
      local_24 = local_14;
      FUN_00ea0000(&local_30,&local_40);
      iVar5 = FUN_00f98a90();
      iVar7 = FUN_00f98aa0();
      local_30 = (float)iVar5 * 0.5 - (local_30 - (float)iVar5 * 0.5);
      local_2c = (float)iVar7 + (float)iVar7 * 0.5;
    }
    *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 0x25c);
    if (0.0 < *(float *)(param_1 + 0x458)) {
      pfVar6 = (float *)FUN_00e9fe70();
      local_20 = *(float *)(param_1 + 400) - *pfVar6;
      local_1c = *(float *)(param_1 + 0x194) - pfVar6[1];
      local_18 = *(float *)(param_1 + 0x198) - pfVar6[2];
      fVar8 = (float10)FUN_00fdef70();
      fVar2 = (float)fVar8;
      if (*(float *)(param_1 + 0x458) < fVar2) {
        *(undefined4 *)(param_1 + 0x25c) = 0;
      }
      else if (*(float *)(param_1 + 0x45c) < fVar2 != (*(float *)(param_1 + 0x45c) == fVar2)) {
        *(float *)(param_1 + 0x25c) =
             (1.0 - (fVar2 - *(float *)(param_1 + 0x45c)) /
                    (*(float *)(param_1 + 0x458) - *(float *)(param_1 + 0x45c))) *
             *(float *)(param_1 + 0x25c);
      }
    }
    fVar8 = (float10)FUN_00efca70();
    *(float *)(param_1 + 0x25c) = (float)(fVar8 * (float10)*(float *)(param_1 + 0x25c));
    *(float *)(param_1 + 400) = local_30;
    *(float *)(param_1 + 0x194) = local_2c;
    *(undefined4 *)(param_1 + 0x198) = local_28;
    *(undefined4 *)(param_1 + 0x19c) = local_24;
    fVar2 = *(float *)(param_1 + 400);
    iVar5 = FUN_00f98a90();
    *(float *)(param_1 + 400) = fVar2 - (float)iVar5 * 0.5;
    fVar2 = *(float *)(param_1 + 0x194);
    iVar5 = FUN_00f98aa0();
    *(float *)(param_1 + 0x194) = fVar2 - (float)iVar5 * 0.5;
    fVar2 = *(float *)(param_1 + 400);
    iVar5 = FUN_00f98a90();
    *(float *)(param_1 + 0x450) = fVar2 / (float)iVar5 + 0.5;
    fVar2 = *(float *)(param_1 + 0x194);
    iVar5 = FUN_00f98aa0();
    fVar2 = fVar2 / (float)iVar5 + 0.5;
    *(float *)(param_1 + 0x454) = fVar2;
    if (*(float *)(param_1 + 0x450) < -0.1) {
      *(undefined4 *)(param_1 + 0x450) = 0xbdcccccd;
    }
    if (1.1 < *(float *)(param_1 + 0x450)) {
      *(undefined4 *)(param_1 + 0x450) = 0x3f8ccccd;
    }
    if (fVar2 < -0.1) {
      *(undefined4 *)(param_1 + 0x454) = 0xbdcccccd;
    }
    if (1.1 < *(float *)(param_1 + 0x454)) {
      *(undefined4 *)(param_1 + 0x454) = 0x3f8ccccd;
    }
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x194) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  if ((*(int *)(param_1 + 0x464) == 0) && (iVar5 = FUN_009d58f0(param_1), iVar5 != 0)) {
    FUN_00edbe30(0,0x40000000);
  }
  if ((*(int *)(param_1 + 0x468) != 0) &&
     (*(int *)(param_1 + 0x480) != *(int *)(*(int *)(param_1 + 0x28) + 0x1f2c))) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  }
  if (*(int *)(param_1 + 0x474) != 0) {
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x450);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x454);
  }
  return;
}

// 00F2F550  esp09::vf04  size=575  [class]
undefined4 __thiscall esp09::vf04(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  short *psVar6;
  
  if ((*(int *)(param_2 + 4) == 0) ||
     (puVar1 = (uint *)(*(int *)(param_2 + 4) + 0x30), puVar1 == (uint *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar1;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar4 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  if (0 < *(short *)(uVar5 + 0x2c)) {
    FUN_009cca90(param_1,&DAT_016dafb4);
    return 0;
  }
  if ((*(int *)(param_2 + 4) == 0) ||
     (puVar2 = (undefined4 *)(*(int *)(param_2 + 4) + 0x80), puVar2 == (undefined4 *)0x0)) {
    psVar6 = (short *)0x0;
  }
  else {
    psVar6 = (short *)*puVar2;
    if ((short *)((int)psVar6 + 0xfU & 0xfffffff0) != psVar6) {
      uVar4 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if ((psVar6 != (short *)0x0) && (psVar6[2] == 1)) {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x200000;
    }
  }
  iVar3 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x47c) = 2;
    if (psVar6 != (short *)0x0) {
      if (*psVar6 == 1) {
        *(undefined4 *)(param_1 + 0x464) = 1;
      }
      if (psVar6[1] == 1) {
        *(undefined4 *)(param_1 + 0x468) = 1;
      }
      if (psVar6[2] == 1) {
        *(undefined4 *)(param_1 + 0x474) = 1;
        *(undefined2 *)(param_1 + 0x428) = 0x66;
        *(undefined4 *)(param_1 + 0x47c) = 0;
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000000;
        if ((*(uint *)(param_1 + 0x38) & 0x8000000) != 0) {
          *(undefined2 *)(param_1 + 0x428) = 0x6b;
          *(undefined4 *)(param_1 + 0x47c) = 1;
        }
      }
      *(int *)(param_1 + 0x478) = (int)psVar6[3];
    }
    if ((*(int *)(param_1 + 0x474) != 0) && (*(int *)(param_1 + 0x478) != 0)) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000000;
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x800000;
    }
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar2 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar2 != (undefined4 *)0x0)) {
      puVar2 = (undefined4 *)*puVar2;
      if ((undefined4 *)((int)puVar2 + 0xfU & 0xfffffff0) != puVar2) {
        uVar4 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x458) = *puVar2;
        *(undefined4 *)(param_1 + 0x45c) = puVar2[1];
      }
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100;
    *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 0x25c);
    if (*(float *)(param_1 + 0x458) < 0.0) {
      FUN_009cca90(param_1,&DAT_016dafe4);
      return 0;
    }
    if (0.0 <= *(float *)(param_1 + 0x45c)) {
      *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfdffffff;
      InterlockedIncrement((LONG *)(*(int *)(param_1 + 0x28) + 0x1f28));
      *(undefined4 *)(param_1 + 0x46c) = 1;
      if (*(int *)(param_1 + 0x468) != 0) {
        InterlockedIncrement((LONG *)(*(int *)(param_1 + 0x28) + 0x1f2c));
        *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x1f2c);
      }
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016db014);
  }
  return 0;
}

// 00F2F790  esp09::vf10  size=450  [class]
void __fastcall esp09::vf10(int param_1)

{
  int iVar1;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_7c;
  if (*(int *)(param_1 + 0x474) == 0) {
    local_7c = (float)FUN_00f98a90();
    local_78 = (((1.0 - *(float *)(param_1 + 0x450)) - 0.5) * (*(float *)(param_1 + 0x100) - 1.0) *
                (float)(int)local_7c * 0.01) / *(float *)(param_1 + 0x100);
    iVar1 = FUN_00f98aa0();
    local_7c = ((*(float *)(param_1 + 0x104) - 1.0) * (*(float *)(param_1 + 0x454) - 0.5) *
                (float)iVar1 * 0.01) / *(float *)(param_1 + 0x104);
  }
  else {
    local_7c = 0.0;
    local_78 = 0.0;
    if (*(float *)(param_1 + 0x100) < 1.0) {
      *(undefined4 *)(param_1 + 0x100) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x104) < 1.0) {
      *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
    }
  }
  local_34 = local_78 - 6.9;
  local_30 = local_7c + 3.1;
  local_2c = 0;
  local_28 = local_78 + 5.9;
  local_20 = 0;
  local_7c = local_7c - 4.1;
  local_14 = 0;
  local_8 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_44 = 0;
  local_74 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_4c = 0x3f800000;
  local_40 = 0x3f800000;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_6c = 0x3f800000;
  local_60 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_78 = local_34;
  local_24 = local_30;
  local_1c = local_34;
  local_18 = local_7c;
  local_10 = local_28;
  local_c = local_7c;
  FUN_00f27f10(&local_34,&local_54,&local_74);
  __security_check_cookie(local_4 ^ (uint)&local_7c);
  return;
}


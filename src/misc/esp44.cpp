// src/misc/esp44.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD500..00F37BD0, 5 functions

#include "mgrr.h"
#include "esp44.h"

// 00ECD500  esp44::esp44  size=18  [class]
undefined4 * __fastcall esp44::esp44(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0B20  esp44::vf00  size=30  [class]
undefined4 __thiscall esp44::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F1C620  esp44::vf08  size=821  [class]
void __fastcall esp44::vf08(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
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
    local_2c = *(undefined4 *)(param_1 + 0x194);
    local_28 = *(float *)(param_1 + 0x198);
    local_24 = *(float *)(param_1 + 0x19c);
    local_30 = fVar2;
    FUN_00ea0000(&local_20,&local_30);
    if (!NAN(local_18) && 1.0 < local_18 != (local_18 == 1.0)) {
      pfVar6 = (float *)FUN_00e9fe70();
      fVar2 = local_30 - *pfVar6;
      fVar3 = local_28 - pfVar6[2];
      fVar4 = local_24 - pfVar6[3];
      pfVar6 = (float *)FUN_00e9fe70();
      local_30 = *pfVar6 - fVar2;
      local_28 = pfVar6[2] - fVar3;
      local_24 = pfVar6[3] - fVar4;
      local_2c = *(undefined4 *)(param_1 + 0x194);
      local_20 = 0.0;
      local_1c = 0.0;
      local_18 = 0.0;
      FUN_00ea0000(&local_20,&local_30);
      iVar5 = FUN_00f98a90();
      fVar2 = local_20;
      iVar7 = FUN_00f98a90();
      local_20 = (float)iVar5 * 0.5 - (fVar2 - (float)iVar7 * 0.5);
      iVar5 = FUN_00f98aa0();
      iVar7 = FUN_00f98aa0();
      local_1c = (float)iVar7 + (float)iVar5 * 0.5;
    }
    *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 0x25c);
    if (0.0 < *(float *)(param_1 + 0x458)) {
      FUN_00e9fe70();
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
  }
  if ((*(int *)(param_1 + 0x464) == 0) && (*(float *)(param_1 + 0x110) < 1.0)) {
    FUN_00edbe30(0,0x40000000);
    return;
  }
  return;
}

// 00F379B0  esp44::vf04  size=532  [class]
undefined4 __thiscall
esp44::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  short *psVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x200000;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000000;
  iVar1 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 == (uint *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar2;
    if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
      uVar5 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
  }
  if (0 < *(short *)(uVar6 + 0x2c)) {
    FUN_009cca90(param_1,&DAT_016dcf2c);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x474) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined2 *)(param_1 + 0x428) = 0x66;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x800000;
  if ((*(uint *)(param_1 + 0x3c) & 0x200000) != 0) {
    *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(uVar6 + 0x54);
  }
  if ((*(uint *)(param_1 + 0x38) & 0x8000000) == 0) {
    if ((*(uint *)(param_1 + 0x3c) & 0x200000) != 0) {
      FUN_009cca90(param_1,&DAT_016dcf5c);
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x47c) = 1;
    *(undefined2 *)(param_1 + 0x428) = 0x6b;
    FUN_00f2bc10();
    if ((*(uint *)(param_1 + 0x3c) & 0x200000) != 0) {
      *(undefined2 *)(param_1 + 0x428) = 0x6c;
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x2000000;
      *(undefined2 *)(param_1 + 0x42a) = 0x6b;
    }
  }
  psVar3 = (short *)FUN_009d4a80();
  if (psVar3 != (short *)0x0) {
    if (*psVar3 == 1) {
      *(undefined4 *)(param_1 + 0x464) = 1;
    }
    if (psVar3[1] != 0) {
      *(undefined4 *)(param_1 + 0x478) = 1;
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xff7fffff;
    }
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar4 != (undefined4 *)0x0)) {
    puVar4 = (undefined4 *)*puVar4;
    if ((undefined4 *)((int)puVar4 + 0xfU & 0xfffffff0) != puVar4) {
      uVar5 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x458) = *puVar4;
      *(undefined4 *)(param_1 + 0x45c) = puVar4[1];
      *(undefined4 *)(param_1 + 0x474) = puVar4[2];
    }
  }
  *(undefined4 *)(param_1 + 0x460) = *(undefined4 *)(param_1 + 0x25c);
  if (*(float *)(param_1 + 0x458) < 0.0) {
    FUN_009cca90(param_1,&DAT_016dcfd0);
    return 0;
  }
  if (*(float *)(param_1 + 0x45c) < 0.0) {
    FUN_009cca90(param_1,&DAT_016dd000);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x470) = 0;
  return 1;
}

// 00F37BD0  esp44::vf10  size=184  [class]
void __fastcall esp44::vf10(int param_1)

{
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
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [32];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_7c;
  FUN_00f24ba0(&local_7c,local_24);
  local_54 = 0xbf800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_3c = 0xbf800000;
  local_38 = 0xbf800000;
  local_2c = 0xbf800000;
  *(undefined4 *)(param_1 + 0x18c) = local_7c;
  *(undefined4 *)(param_1 + 0x19c) = local_78;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0x3f800000;
  local_60 = 0x3f800000;
  local_5c = 0x3f800000;
  local_58 = 0x3f800000;
  local_68 = 0;
  local_64 = 0;
  FUN_00f2bd60(&local_54,local_24,&local_74);
  __security_check_cookie(local_4 ^ (uint)&local_7c);
  return;
}


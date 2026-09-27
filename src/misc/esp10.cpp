// src/misc/esp10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD3E0..00F2F960, 4 functions

#include "mgrr.h"
#include "esp10.h"

// 00ECD3E0  esp10::esp10  size=18  [class]
undefined4 * __fastcall esp10::esp10(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 00ED0880  esp10::vf00  size=30  [class]
undefined4 __thiscall esp10::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F14DF0  esp10::vf08  size=1391  [class]
void __fastcall esp10::vf08(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  piVar1 = (int *)(param_1 + 0x3a0);
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
  if ((((*(int *)(param_1 + 0x470) != 0) &&
       (fVar2 = *(float *)(param_1 + 0x460) - *(float *)(param_1 + 0x110),
       *(float *)(param_1 + 0x460) = fVar2, fVar2 <= 0.0)) && (*(uint *)(param_1 + 0x464) != 0)) &&
     (*(uint *)(param_1 + 0x464) < 4)) {
    *(undefined4 *)(param_1 + 0x460) = 0x407fef9e;
    local_20 = *(undefined4 *)(param_1 + 0x450);
    local_1c = *(undefined4 *)(param_1 + 0x454);
    local_18 = *(undefined4 *)(param_1 + 0x458);
    local_14 = *(undefined4 *)(param_1 + 0x45c);
    local_54 = *(float *)(param_1 + 0x110);
    local_60 = local_54 * *(float *)(param_1 + 0x150);
    local_5c = *(float *)(param_1 + 0x154) * local_54;
    local_58 = *(float *)(param_1 + 0x158) * local_54;
    local_54 = local_54 * *(float *)(param_1 + 0x15c);
    local_80 = local_60 + *(float *)(param_1 + 400);
    local_7c = local_5c + *(float *)(param_1 + 0x194);
    local_78 = local_58 + *(float *)(param_1 + 0x198);
    local_74 = local_54 + *(float *)(param_1 + 0x19c);
    *(float *)(param_1 + 0x450) = local_80;
    *(float *)(param_1 + 0x454) = local_7c;
    *(float *)(param_1 + 0x458) = local_78;
    *(float *)(param_1 + 0x45c) = local_74;
    iVar3 = FUN_009d6070(&local_60,&local_30,&local_20,&local_80);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x470) = *(int *)(param_1 + 0x470) + -1;
      local_80 = *(float *)(param_1 + 0x150) - local_60;
      local_78 = *(float *)(param_1 + 0x158) - local_58;
      local_74 = *(float *)(param_1 + 0x15c) - local_54;
      local_7c = (*(float *)(param_1 + 0x154) - local_5c) * -1.0;
      *(float *)(param_1 + 400) = local_60;
      *(float *)(param_1 + 0x194) = local_5c;
      *(float *)(param_1 + 0x198) = local_58;
      *(float *)(param_1 + 0x19c) = local_54;
      local_70 = *(float *)(param_1 + 0x150) * -1.0;
      local_6c = *(float *)(param_1 + 0x154) * -1.0;
      local_68 = *(float *)(param_1 + 0x158) * -1.0;
      local_64 = *(float *)(param_1 + 0x15c) * -1.0;
      fVar2 = local_28 * local_68 + local_6c * local_2c + local_70 * local_30;
      local_40 = fVar2 * local_30 * 2.0;
      local_3c = fVar2 * local_2c * 2.0;
      local_38 = local_28 * fVar2 * 2.0;
      local_34 = local_24 * fVar2 * 2.0;
      local_50 = local_40 - local_70;
      local_4c = local_3c - local_6c;
      local_44 = local_34 - local_64;
      *(float *)(param_1 + 0x150) = local_50;
      *(float *)(param_1 + 0x154) = local_4c;
      *(float *)(param_1 + 0x158) = local_38 - local_68;
      *(float *)(param_1 + 0x15c) = local_44;
      fVar2 = *(float *)(param_1 + 0x468) / 100.0;
      *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) * fVar2;
      *(float *)(param_1 + 0x154) =
           (*(float *)(param_1 + 0x46c) / 100.0) * *(float *)(param_1 + 0x154);
      *(float *)(param_1 + 0x158) = fVar2 * *(float *)(param_1 + 0x158);
      if (*(int *)(param_1 + 0x470) == 0) {
        *(undefined4 *)(param_1 + 0x150) = 0;
        *(undefined4 *)(param_1 + 0x154) = 0;
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(undefined4 *)(param_1 + 0x15c) = local_14;
        *(undefined4 *)(param_1 + 0x160) = 0;
        *(undefined4 *)(param_1 + 0x164) = 0;
        *(undefined4 *)(param_1 + 0x168) = 0;
        *(undefined4 *)(param_1 + 0x16c) = local_14;
        *(undefined4 *)(param_1 + 0x140) = 0;
        *(undefined4 *)(param_1 + 0x144) = 0;
        *(undefined4 *)(param_1 + 0x148) = 0;
        *(undefined4 *)(param_1 + 0x14c) = local_14;
        *(undefined4 *)(param_1 + 0x1d0) = 0;
        *(undefined4 *)(param_1 + 0x1d4) = 0;
        *(undefined4 *)(param_1 + 0x1d8) = 0;
        *(undefined4 *)(param_1 + 0x1dc) = local_14;
      }
      if (((*(byte *)(param_1 + 0x30) & 0x10) == 0) &&
         ((*(int *)(param_1 + 0x474) == 1 || (*(int *)(param_1 + 0x474) == 2)))) {
        local_48 = -local_30 * 90.0 * 0.017453292;
        FUN_00fdef70();
        fVar5 = (float10)FUN_00fdecda();
        local_50 = (1.5707964 - (float)fVar5) - local_30 * 1.5707964;
        fVar5 = (float10)FUN_00fdecda();
        local_4c = (float)fVar5;
        local_40 = local_60;
        local_3c = local_5c;
        local_38 = local_58;
        local_34 = local_54;
        if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
          *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
        }
        uVar12 = *(undefined4 *)(param_1 + 0x47c);
        uVar11 = *(undefined4 *)(param_1 + 0x478);
        uVar20 = 0;
        uVar19 = 0;
        uVar18 = 0;
        uVar17 = 0;
        uVar16 = 0;
        uVar15 = 0x3f800000;
        uVar14 = 0xff;
        uVar13 = 0;
        uVar10 = *(undefined4 *)(param_1 + 0x6c);
        uVar9 = *(undefined4 *)(param_1 + 0x74);
        uVar8 = *(undefined4 *)(param_1 + 0x78);
        pfVar7 = &local_50;
        pfVar6 = &local_40;
        uVar4 = FUN_00a81330(pfVar6,pfVar7,uVar8,uVar9,uVar10,uVar11,uVar12,0,0xff,0x3f800000,0,0,0,
                             0,0);
        FUN_00f42b60(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x60),
                     *(undefined4 *)(param_1 + 0x68),param_1 + 0x7c,uVar4,pfVar6,pfVar7,uVar8,uVar9,
                     uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20);
      }
      if (((*(int *)(param_1 + 0x474) == 2) || (*(int *)(param_1 + 0x474) == 3)) &&
         (*(int *)(param_1 + 0x470) < 1)) {
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
      }
    }
  }
  return;
}

// 00F2F960  esp10::preTrans  size=604  [class]
undefined4 __thiscall
esp10::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  iVar4 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x47c) = param_4;
    *(undefined4 *)(param_1 + 0x464) = 0;
    *(undefined4 *)(param_1 + 0x470) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x474) = 0;
    *(undefined4 *)(param_1 + 0x478) = 0;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar5 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar5 != (undefined4 *)0x0)) {
      psVar2 = (short *)*puVar5;
      if ((short *)((int)psVar2 + 0xfU & 0xfffffff0) != psVar2) {
        uVar6 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar6);
      }
      if (psVar2 != (short *)0x0) {
        *(int *)(param_1 + 0x464) = (int)*psVar2;
        *(float *)(param_1 + 0x46c) = (float)(int)psVar2[1];
        *(float *)(param_1 + 0x468) = (float)(int)psVar2[2];
        sVar1 = psVar2[3];
        *(int *)(param_1 + 0x470) = (int)sVar1;
        *(int *)(param_1 + 0x474) = (int)psVar2[4];
        *(int *)(param_1 + 0x478) = (int)psVar2[5];
        if (sVar1 == 0) {
          *(undefined4 *)(param_1 + 0x470) = 0xffffffff;
        }
      }
    }
    if (*(uint **)(param_1 + 0x58) != (uint *)0x0) {
      uVar3 = **(uint **)(param_1 + 0x58);
      if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
        uVar6 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar6);
      }
      if (uVar3 != 0) {
        if (*(short *)(uVar3 + 0x10) != 0) {
          FUN_009cca90(param_1,&DAT_016db180);
          return 0;
        }
        uVar3 = *(uint *)(param_1 + 0x474);
        if ((((uVar3 == 2) || (uVar3 == 3)) && (*(int *)(param_1 + 0x120) == 0)) &&
           ((*(char *)(iVar4 + 0x79) == '\0' && (*(float *)(param_1 + 0x270) == 1.0)))) {
          FUN_009cca90(param_1,&DAT_016db1a4);
        }
        if (3 < *(uint *)(param_1 + 0x464)) {
          FUN_009cca90(param_1,&DAT_016db1e0,*(uint *)(param_1 + 0x464));
          return 0;
        }
        if (100.0 < *(float *)(param_1 + 0x46c)) {
          FUN_009cca90(param_1,&DAT_016db200);
          return 0;
        }
        if (100.0 < *(float *)(param_1 + 0x468)) {
          FUN_009cca90(param_1,&DAT_016db234);
          return 0;
        }
        if (3 < uVar3) {
          FUN_009cca90(param_1,&DAT_016db268);
          return 0;
        }
        FUN_00efcb90();
        *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 400);
        *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x194);
        *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x198);
        *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x19c);
        *(undefined4 *)(param_1 + 0x460) = 0x3f800000;
        return 1;
      }
    }
    FUN_009cca90(param_1,&DAT_016db168);
  }
  return 0;
}


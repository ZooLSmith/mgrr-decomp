// src/misc/esp38.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED0640..00F39470, 6 functions

#include "mgrr.h"
#include "esp38.h"

// 00ED0640  esp38::esp38  size=57  [class]
undefined4 * __fastcall esp38::esp38(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = ModelShaderJackModule::vftable;
  FUN_009e6c70();
  FUN_009d2900();
  FUN_00a7c930();
  *param_1 = vftable;
  return param_1;
}

// 00ED0A60  esp38::vf00  size=54  [class]
undefined4 __thiscall esp38::vf00(undefined4 param_1,byte param_2)

{
  FUN_009de370();
  Spline<float>::Spline<float>_2();
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EDA080  esp38::addOtTransList  size=1  [class]
void esp38::addOtTransList(void)

{
  return;
}

// 00EF5A40  esp38::vf14  size=63  [class]
void __fastcall esp38::vf14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x4b0) != 0) {
    uVar2 = 0x50000;
    iVar1 = param_1;
    iVar3 = param_1;
    FUN_00a7c940(param_1 + 0x4b4);
    FUN_009d5aa0(iVar1,uVar2,iVar3);
    *(undefined4 *)(param_1 + 0x4b0) = 0;
  }
  Spline<float>::Spline<float>_2();
  return;
}

// 00F1B610  esp38::vf08  size=1853  [class]
void __fastcall esp38::vf08(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  float *pfVar13;
  uint uVar14;
  undefined4 uVar15;
  code *pcVar16;
  float10 fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [76];
  
  piVar11 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar11);
  FUN_00f0b530(piVar11);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar11 = 0;
  }
  else {
    *piVar11 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar11);
  FUN_00efbd40(piVar11);
  iVar10 = FUN_00a81330();
  if (iVar10 == 0) {
    return;
  }
  piVar11 = (int *)FUN_00a7c800();
  iVar10 = FUN_009d5b00(param_1);
  if (iVar10 == 0) {
    pcVar16 = *(code **)(*piVar11 + 0x20);
  }
  else {
    pcVar16 = *(code **)(*piVar11 + 0x1c);
  }
  (*pcVar16)();
  esp107::vf10();
  ModelShaderJackModule::updateModule_4();
  if (*(int *)(param_1 + 0x4f8) == 0) {
    FUN_00f04bb0(piVar11);
    iVar10 = FUN_00a81330();
    if ((iVar10 != 0) && (iVar10 = FUN_00a7c800(), iVar10 != 0)) {
      switchD_0080dbae::default();
      FUN_00ef7e60();
      return;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x30) & 0xc0000000) != 0) {
      return;
    }
    iVar10 = FUN_00f41120();
    if (iVar10 != 0) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0x4e0) - *(float *)(param_1 + 0x110);
    *(float *)(param_1 + 0x4e0) = fVar1;
    if (((fVar1 <= 0.0) && (*(uint *)(param_1 + 0x4e4) != 0)) && (*(uint *)(param_1 + 0x4e4) < 4)) {
      *(undefined4 *)(param_1 + 0x4e0) = 0x407fef9e;
      uStack_60 = *(undefined4 *)(param_1 + 0x4d0);
      uStack_5c = *(undefined4 *)(param_1 + 0x4d4);
      uStack_58 = *(undefined4 *)(param_1 + 0x4d8);
      uStack_54 = *(undefined4 *)(param_1 + 0x4dc);
      fVar1 = *(float *)(param_1 + 0x110);
      fStack_70 = fVar1 * *(float *)(param_1 + 0x150) + *(float *)(param_1 + 400);
      fStack_6c = *(float *)(param_1 + 0x194) + fVar1 * *(float *)(param_1 + 0x154);
      fStack_68 = *(float *)(param_1 + 0x198) + fVar1 * *(float *)(param_1 + 0x158);
      fStack_64 = *(float *)(param_1 + 0x19c) + fVar1 * *(float *)(param_1 + 0x15c);
      *(float *)(param_1 + 0x4d0) = fStack_70;
      *(float *)(param_1 + 0x4d4) = fStack_6c;
      *(float *)(param_1 + 0x4d8) = fStack_68;
      *(float *)(param_1 + 0x4dc) = fStack_64;
      *(int *)(param_1 + 0x510) = *(int *)(param_1 + 0x510) + 1;
      if (1 < *(uint *)(param_1 + 0x510)) {
        FUN_009d60e0();
        iVar10 = FUN_009d60a0(auStack_50,&uStack_60,&fStack_70);
        if ((iVar10 != 0) &&
           ((iVar10 = FUN_009d6110(), iVar10 != 0 || (*(int *)(param_1 + 0x50c) != 1)))) {
          puVar12 = (undefined4 *)FUN_009cf200();
          uStack_80 = *puVar12;
          uStack_7c = puVar12[1];
          uStack_78 = puVar12[2];
          uStack_74 = puVar12[3];
          pfVar13 = (float *)FUN_009cf220();
          fVar1 = *pfVar13;
          fVar2 = pfVar13[1];
          fVar3 = pfVar13[2];
          fVar4 = pfVar13[3];
          *(undefined4 *)(param_1 + 0x4d0) = uStack_80;
          *(undefined4 *)(param_1 + 0x4d4) = uStack_7c;
          *(undefined4 *)(param_1 + 0x4d8) = uStack_78;
          *(undefined4 *)(param_1 + 0x4dc) = uStack_74;
          *(float *)(param_1 + 0x4d0) = fVar1 * 0.001 + *(float *)(param_1 + 0x4d0);
          *(float *)(param_1 + 0x4d4) = *(float *)(param_1 + 0x4d4) + fVar2 * 0.001;
          *(float *)(param_1 + 0x4d8) = *(float *)(param_1 + 0x4d8) + fVar3 * 0.001;
          *(float *)(param_1 + 0x4dc) = *(float *)(param_1 + 0x4dc) + fVar4 * 0.001;
          *(int *)(param_1 + 0x4f8) = *(int *)(param_1 + 0x4f8) + -1;
          *(undefined4 *)(param_1 + 0x180) = uStack_80;
          *(undefined4 *)(param_1 + 0x184) = uStack_7c;
          *(undefined4 *)(param_1 + 0x188) = uStack_78;
          *(undefined4 *)(param_1 + 0x18c) = uStack_74;
          fVar7 = *(float *)(param_1 + 0x150) * -1.0;
          fVar8 = *(float *)(param_1 + 0x154) * -1.0;
          fVar9 = *(float *)(param_1 + 0x158) * -1.0;
          fVar6 = fVar9 * fVar3 + fVar8 * fVar2 + fVar7 * fVar1;
          fStack_90 = fVar6 * fVar1 * 2.0;
          fStack_8c = fVar6 * fVar2 * 2.0;
          fStack_88 = fVar6 * fVar3 * 2.0;
          fStack_84 = fVar6 * fVar4 * 2.0;
          *(float *)(param_1 + 0x150) = fStack_90 - fVar7;
          *(float *)(param_1 + 0x154) = fStack_8c - fVar8;
          *(float *)(param_1 + 0x158) = fStack_88 - fVar9;
          *(float *)(param_1 + 0x15c) = fStack_84 - *(float *)(param_1 + 0x15c) * -1.0;
          fVar2 = *(float *)(param_1 + 0x4e8) / 100.0;
          *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) * fVar2;
          *(float *)(param_1 + 0x154) =
               (*(float *)(param_1 + 0x4ec) / 100.0) * *(float *)(param_1 + 0x154);
          *(float *)(param_1 + 0x158) = fVar2 * *(float *)(param_1 + 0x158);
          if (*(int *)(param_1 + 0x4f8) == 0) {
            *(undefined4 *)(param_1 + 0x150) = 0;
            *(undefined4 *)(param_1 + 0x154) = 0;
            *(undefined4 *)(param_1 + 0x158) = 0;
            *(undefined4 *)(param_1 + 0x15c) = uStack_54;
            *(undefined4 *)(param_1 + 0x160) = 0;
            *(undefined4 *)(param_1 + 0x164) = 0;
            *(undefined4 *)(param_1 + 0x168) = 0;
            *(undefined4 *)(param_1 + 0x16c) = uStack_54;
            *(undefined4 *)(param_1 + 0x140) = 0;
            *(undefined4 *)(param_1 + 0x144) = 0;
            *(undefined4 *)(param_1 + 0x148) = 0;
            *(undefined4 *)(param_1 + 0x14c) = uStack_54;
            *(undefined4 *)(param_1 + 0x1d0) = 0;
            *(undefined4 *)(param_1 + 0x1d4) = 0;
            *(undefined4 *)(param_1 + 0x1d8) = 0;
            *(undefined4 *)(param_1 + 0x1dc) = uStack_54;
            *(undefined4 *)(param_1 + 0x380) = 0;
          }
          iVar10 = FUN_009d6110();
          if ((iVar10 != 0) || (*(int *)(param_1 + 0x50c) != 2)) {
            iVar10 = FUN_009d4a80();
            if (((*(byte *)(param_1 + 0x30) & 0x10) == 0) &&
               ((((iVar5 = *(int *)(param_1 + 0x4f0), iVar5 == 1 || (iVar5 == 2)) ||
                 ((iVar5 == 4 && (*(int *)(param_1 + 0x4f8) == *(short *)(iVar10 + 6) + -1)))) ||
                ((iVar5 == 5 && (*(int *)(param_1 + 0x4f8) == 0)))))) {
              fStack_88 = -fVar1 * 90.0 * 0.017453292;
              FUN_00fdef70();
              fVar17 = (float10)FUN_00fdecda();
              fStack_90 = (1.5707964 - (float)fVar17) - fVar1 * 1.5707964;
              fVar17 = (float10)FUN_00fdecda();
              fStack_8c = (float)fVar17;
              iVar10 = FUN_009d49d0();
              if (*(char *)(iVar10 + 0x15) == '\0') {
                uVar14 = FUN_00dde2a0(0,0xffff);
                uVar14 = uVar14 & 0xffff;
              }
              else {
                uVar14 = *(uint *)(param_1 + 0x500);
              }
              if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
                *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
              }
              uVar21 = *(undefined4 *)(param_1 + 0x4f4);
              uVar29 = 0;
              uVar28 = 0;
              uVar27 = 0;
              uVar26 = 0;
              uVar25 = 0;
              uVar24 = 0x3f800000;
              uVar23 = 0xff;
              uVar22 = 0;
              uVar20 = *(undefined4 *)(param_1 + 0x6c);
              uVar19 = *(undefined4 *)(param_1 + 0x74);
              uVar18 = *(undefined4 *)(param_1 + 0x78);
              pfVar13 = &fStack_90;
              puVar12 = &uStack_80;
              uVar15 = FUN_00a81330(puVar12,pfVar13,uVar18,uVar19,uVar20,uVar21,uVar14,0,0xff,
                                    0x3f800000,0,0,0,0,0);
              FUN_00f42b60(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x60),
                           *(undefined4 *)(param_1 + 0x68),param_1 + 0x7c,uVar15,puVar12,pfVar13,
                           uVar18,uVar19,uVar20,uVar21,uVar14,uVar22,uVar23,uVar24,uVar25,uVar26,
                           uVar27,uVar28,uVar29);
            }
            if (((*(int *)(param_1 + 0x4f0) == 2) || (*(int *)(param_1 + 0x4f0) == 3)) &&
               (*(int *)(param_1 + 0x4f8) < 1)) {
              *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
            }
          }
        }
      }
    }
    FUN_00f04bb0(piVar11);
    FUN_00edafd0();
  }
  FUN_00ef7e60();
  return;
}

// 00F39470  esp38::preTrans  size=912  [class]
bool __thiscall esp38::preTrans(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
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
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  uVar5 = param_4;
  iVar2 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar2 != 0) {
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      param_4 = 0;
    }
    else {
      param_4 = **(uint **)(param_1 + 0x58);
      if ((param_4 + 0xf & 0xfffffff0) != param_4) {
        uVar3 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar3);
      }
    }
    if (*(char *)(param_4 + 0x15) == '\0') {
      *(undefined4 *)(param_1 + 0x500) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x500) = uVar5;
    }
    *(undefined4 *)(param_1 + 0x4fc) = 0;
    *(undefined4 *)(param_1 + 0x4e4) = 0;
    *(undefined4 *)(param_1 + 0x4f8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4f0) = 0;
    *(undefined4 *)(param_1 + 0x4f4) = 0;
    *(undefined4 *)(param_1 + 0x50c) = 0;
    local_2c = -1;
    local_28 = -1;
    local_24 = 1;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 != (undefined4 *)0x0)) {
      psVar1 = (short *)*puVar4;
      if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
        uVar5 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
      if (psVar1 != (short *)0x0) {
        *(int *)(param_1 + 0x4e4) = (int)*psVar1;
        *(float *)(param_1 + 0x4ec) = (float)(int)psVar1[1];
        *(float *)(param_1 + 0x4e8) = (float)(int)psVar1[2];
        *(int *)(param_1 + 0x4f8) = (int)psVar1[3];
        *(int *)(param_1 + 0x4f0) = (int)psVar1[4];
        *(int *)(param_1 + 0x4f4) = (int)psVar1[5];
        *(float *)(param_1 + 0x4fc) = (float)(int)psVar1[6] * 0.01;
        *(int *)(param_1 + 0x50c) = (int)psVar1[7];
        *(int *)(param_1 + 0x504) = (int)*(char *)((int)psVar1 + 0x13);
        *(int *)(param_1 + 0x508) = (int)(char)psVar1[10];
        if (*(int *)(param_1 + 0x4f8) == 0) {
          *(undefined4 *)(param_1 + 0x4f8) = 0xffffffff;
        }
        if (*(float *)(param_1 + 0x4fc) <= 0.0) {
          *(undefined4 *)(param_1 + 0x4fc) = 0;
        }
        local_1c = (int)*(char *)((int)psVar1 + 0x15);
        local_4 = (int)(char)psVar1[0xb];
        local_2c = *(char *)((int)psVar1 + 0x17) + -1;
        local_28 = local_2c;
      }
    }
    if (*(uint *)(param_1 + 0x4e4) < 4) {
      if (100.0 < *(float *)(param_1 + 0x4ec)) {
        FUN_009cca90(param_1,&DAT_016dcaa4);
        return false;
      }
      if (*(float *)(param_1 + 0x4e8) <= 100.0) {
        if (*(uint *)(param_1 + 0x4f0) < 6) {
          if (((*(byte *)(param_1 + 0x30) & 0x10) == 0) && (*(int *)(param_1 + 0x504) != 0)) {
            if (*(char *)(param_4 + 0x15) == '\0') {
              uVar6 = FUN_00dde2a0(0,0xffff);
              uVar6 = uVar6 & 0xffff;
            }
            else {
              uVar6 = *(uint *)(param_1 + 0x500);
            }
            uVar5 = *(undefined4 *)(param_1 + 0x70);
            uVar3 = *(undefined4 *)(param_1 + 0x88);
            uVar19 = 0;
            uVar18 = 0;
            uVar17 = 0;
            uVar13 = *(undefined4 *)(param_1 + 0x508);
            uVar16 = 0x3f800000;
            uVar15 = 0xff;
            uVar14 = 0;
            uVar8 = *(uint *)(param_1 + 0x6c) | 0x40;
            uVar12 = *(undefined4 *)(param_1 + 0x74);
            uVar11 = *(undefined4 *)(param_1 + 0x78);
            uVar10 = 0;
            uVar9 = 0;
            uVar7 = FUN_00a81330(0,0,uVar11,uVar12,uVar8,uVar13,uVar6,0,0xff,0x3f800000,uVar3,uVar5,
                                 0,0,0);
            FUN_00f42780(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0x68),param_1 + 0x7c,uVar7,uVar9,uVar10,uVar11,
                         uVar12,uVar8,uVar13,uVar6,uVar14,uVar15,uVar16,uVar3,uVar5,uVar17,uVar18,
                         uVar19);
          }
          if ((*(uint *)(param_1 + 0x4e4) != 0) && (*(uint *)(param_1 + 0x4e4) < 4)) {
            FUN_00efcb90();
            *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 400);
            *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_1 + 0x194);
            *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x198);
            *(undefined4 *)(param_1 + 0x4dc) = *(undefined4 *)(param_1 + 0x19c);
          }
          *(undefined4 *)(param_1 + 0x4e0) = 0x40c00000;
          *(undefined4 *)(param_1 + 0x510) = 0;
          iVar2 = FUN_00f38a30(&local_2c);
          return iVar2 != 0;
        }
        FUN_009cca90(param_1,&DAT_016dcbe4);
        return false;
      }
      FUN_009cca90(param_1,&DAT_016dcbb0);
      return false;
    }
    FUN_009cca90(param_1,&DAT_016dcb90,*(uint *)(param_1 + 0x4e4));
  }
  return false;
}


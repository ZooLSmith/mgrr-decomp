// src/misc/esp32.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED1C00..00F35BC0, 7 functions

#include "mgrr.h"
#include "esp32.h"

// 00ED1C00  esp32::esp32  size=18  [class]
undefined4 * __fastcall esp32::esp32(undefined4 *param_1)

{
  cEspModel::cEspModel();
  *param_1 = vftable;
  return param_1;
}

// 00ED2E30  esp32::vf00  size=36  [class]
undefined4 * __thiscall esp32::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspModel::vftable;
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ED9090  esp32::vf14  size=64  [class]
void __fastcall esp32::vf14(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x450) != 0) {
    uVar1 = *(byte *)(param_1 + 0x49e) & 1 | 0x50000;
    iVar2 = param_1;
    iVar3 = param_1;
    FUN_00a7c940(param_1 + 0x454);
    FUN_009d5aa0(iVar2,uVar1,iVar3);
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  return;
}

// 00EF3300  esp32::vf0C  size=32  [class]
void __fastcall esp32::vf0C(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x30) & 0x80000000) != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a805f0();
      return;
    }
  }
  return;
}

// 00F04AC0  esp32::addOtTransList  size=5  [class]
void __fastcall esp32::addOtTransList(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  fVar3 = (float10)FUN_00efca70();
  *(float *)(param_1 + 0x124) = (float)(fVar3 * (float10)*(float *)(param_1 + 0x124));
  fVar3 = (float10)FUN_00efcaf0();
  fVar1 = (float)(fVar3 * (float10)*(float *)(param_1 + 0x124));
  *(float *)(param_1 + 0x124) = fVar1;
  if ((*(byte *)(param_1 + 0x30) & 0x10) == 0) {
    fVar2 = 1.0;
  }
  else if (*(float *)(param_1 + 0x90) == 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x9c) / *(float *)(param_1 + 0x90);
  }
  fVar1 = fVar1 * fVar2;
  *(float *)(param_1 + 0x124) = fVar1;
  if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
    *(float *)(param_1 + 0x124) = fVar1 * *(float *)(param_1 + 0x128);
  }
  if ((*(uint *)(param_1 + 0x3c) & 0x800) != 0) {
    *(float *)(param_1 + 0x124) =
         *(float *)(*(int *)(param_1 + 0x28) + 0x1efc) * *(float *)(param_1 + 0x124);
  }
  return;
}

// 00F2A8A0  esp32::vf08  size=1809  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall esp32::vf08(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  float *pfVar14;
  uint uVar15;
  undefined4 uVar16;
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
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [76];
  
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
  if (*(int *)(param_1 + 0x4d8) == 0) {
    iVar11 = FUN_00a81330();
    if (iVar11 != 0) {
      uVar12 = FUN_00a7c800();
      FUN_00efee50(uVar12);
      FUN_00f22bb0(uVar12);
    }
    FUN_00ee0500();
    if (((*(byte *)(param_1 + 0x3c) & 8) != 0) && (*(int *)(param_1 + 0x120) == 0)) {
      iVar11 = FUN_00a81330();
      if (iVar11 != 0) {
        iVar11 = FUN_00a7c800();
        if (*(char *)(iVar11 + 0x470) != '\0') {
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
          return;
        }
      }
    }
  }
  else if ((*(uint *)(param_1 + 0x30) & 0xc0000000) == 0) {
    iVar11 = FUN_00f41120();
    if (iVar11 == 0) {
      fVar2 = *(float *)(param_1 + 0x4c0) - *(float *)(param_1 + 0x110);
      *(float *)(param_1 + 0x4c0) = fVar2;
      if (((fVar2 <= 0.0) && (*(uint *)(param_1 + 0x4c4) != 0)) && (*(uint *)(param_1 + 0x4c4) < 4))
      {
        *(undefined4 *)(param_1 + 0x4c0) = _DAT_018d6b60;
        local_70 = *(undefined4 *)(param_1 + 0x4b0);
        local_6c = *(undefined4 *)(param_1 + 0x4b4);
        local_68 = *(undefined4 *)(param_1 + 0x4b8);
        local_64 = *(undefined4 *)(param_1 + 0x4bc);
        fVar2 = *(float *)(param_1 + 0x110);
        local_60 = fVar2 * *(float *)(param_1 + 0x150) + *(float *)(param_1 + 400);
        local_5c = *(float *)(param_1 + 0x194) + fVar2 * *(float *)(param_1 + 0x154);
        local_58 = *(float *)(param_1 + 0x198) + fVar2 * *(float *)(param_1 + 0x158);
        local_54 = *(float *)(param_1 + 0x19c) + fVar2 * *(float *)(param_1 + 0x15c);
        *(float *)(param_1 + 0x4b0) = local_60;
        *(float *)(param_1 + 0x4b4) = local_5c;
        *(float *)(param_1 + 0x4b8) = local_58;
        *(float *)(param_1 + 0x4bc) = local_54;
        *(int *)(param_1 + 0x4f0) = *(int *)(param_1 + 0x4f0) + 1;
        if (1 < *(uint *)(param_1 + 0x4f0)) {
          FUN_009d60e0();
          iVar11 = FUN_009d60a0(local_50,&local_70,&local_60);
          if (iVar11 != 0) {
            iVar11 = FUN_009d6110();
            if ((iVar11 != 0) || (*(int *)(param_1 + 0x4ec) != 1)) {
              *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + -1;
              puVar13 = (undefined4 *)FUN_009cf200();
              local_80 = *puVar13;
              local_7c = puVar13[1];
              local_78 = puVar13[2];
              local_74 = puVar13[3];
              pfVar14 = (float *)FUN_009cf220();
              fVar2 = *pfVar14;
              fVar3 = pfVar14[1];
              fVar4 = pfVar14[2];
              fVar5 = pfVar14[3];
              if (*(int *)(param_1 + 0x50) == 0) {
                *(undefined4 *)(param_1 + 0x4b0) = local_80;
                *(undefined4 *)(param_1 + 0x4b4) = local_7c;
                *(undefined4 *)(param_1 + 0x4b8) = local_78;
                *(undefined4 *)(param_1 + 0x4bc) = local_74;
                *(float *)(param_1 + 0x4b0) = fVar2 * 0.001 + *(float *)(param_1 + 0x4b0);
                *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) + fVar3 * 0.001;
                *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4b8) + fVar4 * 0.001;
                *(float *)(param_1 + 0x4bc) = *(float *)(param_1 + 0x4bc) + fVar5 * 0.001;
                *(undefined4 *)(param_1 + 0x180) = local_80;
                *(undefined4 *)(param_1 + 0x184) = local_7c;
                *(undefined4 *)(param_1 + 0x188) = local_78;
                *(undefined4 *)(param_1 + 0x18c) = local_74;
              }
              fVar8 = *(float *)(param_1 + 0x150) * -1.0;
              fVar9 = *(float *)(param_1 + 0x154) * -1.0;
              fVar10 = *(float *)(param_1 + 0x158) * -1.0;
              fVar7 = fVar10 * fVar4 + fVar9 * fVar3 + fVar8 * fVar2;
              local_90 = fVar7 * fVar2 * 2.0;
              local_8c = fVar7 * fVar3 * 2.0;
              local_88 = fVar7 * fVar4 * 2.0;
              local_84 = fVar7 * fVar5 * 2.0;
              *(float *)(param_1 + 0x150) = local_90 - fVar8;
              *(float *)(param_1 + 0x154) = local_8c - fVar9;
              *(float *)(param_1 + 0x158) = local_88 - fVar10;
              *(float *)(param_1 + 0x15c) = local_84 - *(float *)(param_1 + 0x15c) * -1.0;
              fVar3 = *(float *)(param_1 + 0x4c8) / 100.0;
              *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) * fVar3;
              *(float *)(param_1 + 0x154) =
                   (*(float *)(param_1 + 0x4cc) / 100.0) * *(float *)(param_1 + 0x154);
              *(float *)(param_1 + 0x158) = fVar3 * *(float *)(param_1 + 0x158);
              if (*(int *)(param_1 + 0x4d8) == 0) {
                *(undefined4 *)(param_1 + 0x150) = 0;
                *(undefined4 *)(param_1 + 0x154) = 0;
                *(undefined4 *)(param_1 + 0x158) = 0;
                *(undefined4 *)(param_1 + 0x15c) = local_64;
                *(undefined4 *)(param_1 + 0x160) = 0;
                *(undefined4 *)(param_1 + 0x164) = 0;
                *(undefined4 *)(param_1 + 0x168) = 0;
                *(undefined4 *)(param_1 + 0x16c) = local_64;
                *(undefined4 *)(param_1 + 0x140) = 0;
                *(undefined4 *)(param_1 + 0x144) = 0;
                *(undefined4 *)(param_1 + 0x148) = 0;
                *(undefined4 *)(param_1 + 0x14c) = local_64;
                *(undefined4 *)(param_1 + 0x1d0) = 0;
                *(undefined4 *)(param_1 + 0x1d4) = 0;
                *(undefined4 *)(param_1 + 0x1d8) = 0;
                *(undefined4 *)(param_1 + 0x1dc) = local_64;
                *(undefined4 *)(param_1 + 0x380) = 0;
              }
              iVar11 = FUN_009d6110();
              if ((iVar11 != 0) || (*(int *)(param_1 + 0x4ec) != 2)) {
                iVar11 = FUN_009d4a80();
                if (((*(byte *)(param_1 + 0x30) & 0x10) == 0) &&
                   ((((iVar6 = *(int *)(param_1 + 0x4d0), iVar6 == 1 || (iVar6 == 2)) ||
                     ((iVar6 == 4 && (*(int *)(param_1 + 0x4d8) == *(short *)(iVar11 + 6) + -1))))
                    || ((iVar6 == 5 && (*(int *)(param_1 + 0x4d8) == 0)))))) {
                  local_88 = -fVar2 * 90.0 * 0.017453292;
                  FUN_00fdef70();
                  fVar17 = (float10)FUN_00fdecda();
                  local_90 = (1.5707964 - (float)fVar17) - fVar2 * 1.5707964;
                  fVar17 = (float10)FUN_00fdecda();
                  local_8c = (float)fVar17;
                  iVar11 = FUN_009d49d0();
                  if (*(char *)(iVar11 + 0x15) == '\0') {
                    uVar15 = FUN_00dde2a0(0,0xffff);
                    uVar15 = uVar15 & 0xffff;
                  }
                  else {
                    uVar15 = *(uint *)(param_1 + 0x4e0);
                  }
                  if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
                    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
                  }
                  uVar12 = *(undefined4 *)(param_1 + 0x4d4);
                  uVar28 = 0;
                  uVar27 = 0;
                  uVar26 = 0;
                  uVar25 = 0;
                  uVar24 = 0;
                  uVar23 = 0x3f800000;
                  uVar22 = 0xff;
                  uVar21 = 0;
                  uVar20 = *(undefined4 *)(param_1 + 0x6c);
                  uVar19 = *(undefined4 *)(param_1 + 0x74);
                  uVar18 = *(undefined4 *)(param_1 + 0x78);
                  pfVar14 = &local_90;
                  puVar13 = &local_80;
                  uVar16 = FUN_00a81330(puVar13,pfVar14,uVar18,uVar19,uVar20,uVar12,uVar15,0,0xff,
                                        0x3f800000,0,0,0,0,0);
                  FUN_00f42b60(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x60),
                               *(undefined4 *)(param_1 + 0x68),param_1 + 0x7c,uVar16,puVar13,pfVar14
                               ,uVar18,uVar19,uVar20,uVar12,uVar15,uVar21,uVar22,uVar23,uVar24,
                               uVar25,uVar26,uVar27,uVar28);
                }
                if (((*(int *)(param_1 + 0x4d0) == 2) || (*(int *)(param_1 + 0x4d0) == 3)) &&
                   (*(int *)(param_1 + 0x4d8) < 1)) {
                  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
                }
              }
            }
          }
        }
      }
      FUN_00f26e60();
      FUN_00ee0500();
      FUN_00ee06c0();
    }
  }
  return;
}

// 00F35BC0  esp32::preTrans  size=991  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
esp32::preTrans(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  short *psVar7;
  uint uVar8;
  bool bVar9;
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
  
  uVar4 = param_4;
  iVar1 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar1 != 0) {
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      param_4 = 0;
    }
    else {
      param_4 = **(uint **)(param_1 + 0x58);
      if ((param_4 + 0xf & 0xfffffff0) != param_4) {
        uVar2 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar2);
      }
    }
    if (*(char *)(param_4 + 0x15) == '\0') {
      *(undefined4 *)(param_1 + 0x4e0) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x4e0) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x4dc) = 0;
    *(undefined4 *)(param_1 + 0x4c4) = 0;
    *(undefined4 *)(param_1 + 0x4d8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    *(undefined4 *)(param_1 + 0x4d4) = 0;
    *(undefined4 *)(param_1 + 0x4ec) = 0;
    if ((*(int *)(param_1 + 0x58) == 0) ||
       (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar3 == (undefined4 *)0x0)) {
      psVar7 = (short *)0x0;
    }
    else {
      psVar7 = (short *)*puVar3;
      if ((short *)((int)psVar7 + 0xfU & 0xfffffff0) != psVar7) {
        uVar4 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
    }
    bVar9 = false;
    if (psVar7 != (short *)0x0) {
      *(int *)(param_1 + 0x4c4) = (int)*psVar7;
      *(float *)(param_1 + 0x4cc) = (float)(int)psVar7[1];
      *(float *)(param_1 + 0x4c8) = (float)(int)psVar7[2];
      *(int *)(param_1 + 0x4d8) = (int)psVar7[3];
      *(int *)(param_1 + 0x4d0) = (int)psVar7[4];
      *(int *)(param_1 + 0x4d4) = (int)psVar7[5];
      *(float *)(param_1 + 0x4dc) = (float)(int)psVar7[6] * 0.01;
      *(int *)(param_1 + 0x4ec) = (int)psVar7[7];
      *(int *)(param_1 + 0x4e4) = (int)*(char *)((int)psVar7 + 0x13);
      *(int *)(param_1 + 0x4e8) = (int)(char)psVar7[10];
      if (*(int *)(param_1 + 0x4d8) == 0) {
        *(undefined4 *)(param_1 + 0x4d8) = 0xffffffff;
      }
      if (*(float *)(param_1 + 0x4dc) <= 0.0) {
        *(undefined4 *)(param_1 + 0x4dc) = 0;
      }
      bVar9 = (char)psVar7[8] != '\0';
      if (bVar9) {
        *(float *)(param_1 + 0x468) = (float)(int)(char)psVar7[8];
      }
      if ((char)psVar7[9] != '\0') {
        *(float *)(param_1 + 0x468) = (float)(int)(char)psVar7[9] / 100.0;
      }
    }
    iVar1 = FUN_00f26e90();
    if ((iVar1 != 0) && (iVar1 = FUN_00f27000(), iVar1 != 0)) {
      uVar4 = FUN_00a81330();
      iVar1 = FUN_00ee0710(uVar4);
      if (iVar1 != 0) {
        uVar5 = *(uint *)(param_1 + 0x4d0);
        if ((((uVar5 == 2) || (uVar5 == 3)) && (*(int *)(param_1 + 0x120) == 0)) &&
           ((*(char *)(*(int *)(param_1 + 0x24) + 0x79) == '\0' &&
            (*(float *)(param_1 + 0x270) == 1.0)))) {
          FUN_009cca90(param_1,&DAT_016dc678);
        }
        if (*(uint *)(param_1 + 0x4c4) < 4) {
          if (100.0 < *(float *)(param_1 + 0x4cc)) {
            FUN_009cca90(param_1,&DAT_016dc6d4);
            return 0;
          }
          if (*(float *)(param_1 + 0x4c8) <= 100.0) {
            if (uVar5 < 6) {
              if (((*(byte *)(param_1 + 0x30) & 0x10) == 0) && (*(int *)(param_1 + 0x4e4) != 0)) {
                if (*(char *)(param_4 + 0x15) == '\0') {
                  uVar5 = FUN_00dde2a0(0,0xffff);
                  uVar5 = uVar5 & 0xffff;
                }
                else {
                  uVar5 = *(uint *)(param_1 + 0x4e0);
                }
                uVar4 = *(undefined4 *)(param_1 + 0x70);
                uVar2 = *(undefined4 *)(param_1 + 0x88);
                uVar20 = 0;
                uVar19 = 0;
                uVar18 = 0;
                uVar14 = *(undefined4 *)(param_1 + 0x4e8);
                uVar17 = 0x3f800000;
                uVar16 = 0xff;
                uVar15 = 0;
                uVar8 = *(uint *)(param_1 + 0x6c) | 0x40;
                uVar13 = *(undefined4 *)(param_1 + 0x74);
                uVar12 = *(undefined4 *)(param_1 + 0x78);
                uVar11 = 0;
                uVar10 = 0;
                uVar6 = FUN_00a81330(0,0,uVar12,uVar13,uVar8,uVar14,uVar5,0,0xff,0x3f800000,uVar2,
                                     uVar4,0,0,0);
                FUN_00f42780(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x60),
                             *(undefined4 *)(param_1 + 0x68),param_1 + 0x7c,uVar6,uVar10,uVar11,
                             uVar12,uVar13,uVar8,uVar14,uVar5,uVar15,uVar16,uVar17,uVar2,uVar4,
                             uVar18,uVar19,uVar20);
              }
              if ((*(uint *)(param_1 + 0x4c4) != 0) && (*(uint *)(param_1 + 0x4c4) < 4)) {
                FUN_00efcb90();
                *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_1 + 400);
                *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_1 + 0x194);
                *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x198);
                *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_1 + 0x19c);
              }
              uVar4 = _DAT_018d6b5c;
              *(undefined4 *)(param_1 + 0x4f0) = 0;
              *(undefined4 *)(param_1 + 0x4c0) = uVar4;
              if (bVar9) {
                FUN_00ee05a0();
              }
              return 1;
            }
            FUN_009cca90(param_1,&DAT_016dc73c);
            return 0;
          }
          FUN_009cca90(param_1,&DAT_016dc708);
          return 0;
        }
        FUN_009cca90(param_1,&DAT_016dc6b4,*(uint *)(param_1 + 0x4c4));
      }
    }
  }
  return 0;
}


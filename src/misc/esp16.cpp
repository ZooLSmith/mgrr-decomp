// src/misc/esp16.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED1BE0..00F31C70, 9 functions

#include "types.h"

// 00ED1BE0  esp16::esp16  size=18  [class]
undefined4 * __fastcall esp16::esp16(undefined4 *param_1)

{
  cEspModel::cEspModel();
  *param_1 = vftable;
  return param_1;
}

// 00ED2E00  esp16::vf00  size=36  [class]
undefined4 * __thiscall esp16::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspModel::vftable;
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ED8380  FUN_00ed8380  size=218  [callgraph]
void __thiscall
FUN_00ed8380(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 local_14;
  
  *param_1 = *(undefined4 *)(param_2 + 0x50);
  param_1[1] = *(undefined4 *)(param_2 + 0x54);
  param_1[2] = *(undefined4 *)(param_2 + 0x58);
  param_1[3] = *(undefined4 *)(param_2 + 0x5c);
  if (param_4 == 0) {
    param_1[4] = *param_3;
    param_1[5] = param_3[1];
    param_1[6] = param_3[2];
    uVar1 = param_3[3];
  }
  else {
    if (param_4 != 1) {
      FUN_00dd5650(&DAT_016db850);
    }
    param_1[4] = *(undefined4 *)(param_2 + 0x50);
    param_1[5] = *(undefined4 *)(param_2 + 0x54);
    param_1[6] = *(undefined4 *)(param_2 + 0x58);
    uVar1 = *(undefined4 *)(param_2 + 0x5c);
  }
  param_1[7] = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = local_14;
  param_1[0x10] = *(undefined4 *)(param_2 + 0x90);
  param_1[0x11] = *(undefined4 *)(param_2 + 0x94);
  param_1[0x12] = *(undefined4 *)(param_2 + 0x98);
  param_1[0x13] = *(undefined4 *)(param_2 + 0x9c);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = local_14;
  param_1[0xc] = *param_5;
  param_1[0xd] = param_5[1];
  param_1[0xe] = param_5[2];
  param_1[0xf] = param_5[3];
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

// 00ED8460  esp16::vf10  size=1  [class]
void esp16::vf10(void)

{
  return;
}

// 00EF10C0  FUN_00ef10c0  size=669  [callgraph]
void __thiscall
FUN_00ef10c0(float *param_1,int param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9)

{
  float10 fVar1;
  
  if ((param_7 == 0.0) || (param_6 < param_7)) {
    *param_1 = param_9 * param_1[8] + *param_1;
    param_1[1] = param_1[9] * param_9 + param_1[1];
    param_1[2] = param_1[10] * param_9 + param_1[2];
    param_1[0x10] = param_1[0x14] * param_9 + param_1[0x10];
    param_1[0x11] = param_1[0x15] * param_9 + param_1[0x11];
    param_1[0x12] = param_1[0x16] * param_9 + param_1[0x12];
    param_1[0x14] = param_5 * param_1[0x14];
    param_1[0x15] = param_1[0x15] * param_5;
    param_1[0x16] = param_1[0x16] * param_5;
    param_1[0x17] = param_5 * param_1[0x17];
    param_3 = param_3 * param_9;
    param_1[8] = param_1[8] + param_3 * param_1[0xc];
    param_1[9] = param_1[9] + param_1[0xd] * param_3;
    param_1[10] = param_1[10] + param_1[0xe] * param_3;
    param_1[0xb] = param_1[0xb] + param_3 * param_1[0xf];
    if (param_9 != 1.0) {
      if (param_4 < 2.0) {
        param_4 = param_4 / ((param_9 - param_4 * param_9) + param_4);
      }
      else {
        fVar1 = (float10)FUN_00fdc1f0();
        param_4 = (float)fVar1;
      }
    }
    param_1[8] = param_4 * param_1[8];
    param_1[9] = param_1[9] * param_4;
    param_1[10] = param_1[10] * param_4;
    param_1[0xb] = param_4 * param_1[0xb];
  }
  else if (param_8 != 0.0) {
    *param_1 = (param_1[4] - *param_1) * param_8 + *param_1;
    param_1[1] = param_1[1] + (param_1[5] - param_1[1]) * param_8;
    param_1[2] = (param_1[6] - param_1[2]) * param_8 + param_1[2];
    param_1[3] = param_1[3] + (param_1[7] - param_1[3]) * param_8;
    param_8 = 1.0 - param_8;
    param_1[0x10] = param_8 * param_1[0x10];
    param_1[0x11] = param_1[0x11] * param_8;
    param_1[0x12] = param_1[0x12] * param_8;
    param_1[0x13] = param_8 * param_1[0x13];
  }
  *(float *)(param_2 + 0x50) = *param_1;
  *(float *)(param_2 + 0x54) = param_1[1];
  *(float *)(param_2 + 0x58) = param_1[2];
  *(float *)(param_2 + 0x5c) = param_1[3];
  *(float *)(param_2 + 0x90) = param_1[0x10];
  *(float *)(param_2 + 0x94) = param_1[0x11];
  *(float *)(param_2 + 0x98) = param_1[0x12];
  *(float *)(param_2 + 0x9c) = param_1[0x13];
  return;
}

// 00EF1360  esp16::vf14  size=104  [class]
void __fastcall esp16::vf14(int param_1)

{
  uint uVar1;
  int extraout_ECX;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  if ((*(int *)(param_1 + 0x4b4) != 0) && (*(int *)(param_1 + 0x4b4) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x4b4),0);
    *(undefined4 *)(param_1 + 0x4b4) = 0;
    iVar2 = extraout_ECX;
  }
  if (*(int *)(param_1 + 0x450) != 0) {
    uVar1 = *(byte *)(param_1 + 0x49e) & 1 | 0x50000;
    iVar3 = param_1;
    FUN_00a7c940(param_1 + 0x454);
    FUN_009d5aa0(iVar2,uVar1,iVar3);
    *(undefined4 *)(param_1 + 0x450) = 0;
  }
  return;
}

// 00EF13D0  esp16::vf0C  size=32  [class]
void __fastcall esp16::vf0C(int param_1)

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

// 00F290A0  esp16::vf08  size=1154  [class]
/* WARNING: Removing unreachable block (ram,0x00f2931d) */
/* WARNING: Removing unreachable block (ram,0x00f2938b) */
/* WARNING: Removing unreachable block (ram,0x00f293e5) */

void __fastcall esp16::vf08(int param_1)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
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
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c800();
    if (*(int *)(*(int *)(param_1 + 0x28) + 0x1ecc) == 0) {
      *(undefined4 *)(param_1 + 0x4c0) = 0;
    }
    if ((*(uint *)(param_1 + 0x30) & 0xc0000000) == 0) {
      iVar5 = FUN_00a81330();
      if (iVar5 != 0) {
        uVar6 = FUN_00a7c800();
        FUN_00efee50(uVar6);
        FUN_00f22bb0(uVar6);
      }
      local_3c = 0;
      *(float *)(param_1 + 0x4f0) = *(float *)(param_1 + 0x4b8) + *(float *)(param_1 + 0x4f0);
      if (*(int *)(param_1 + 0x4b0) != 0) {
        iVar5 = 0;
        do {
          pfVar2 = (float *)(iVar5 + *(int *)(param_1 + 0x4b4));
          if (*(char *)(iVar5 + 0x60 + *(int *)(param_1 + 0x4b4)) == '\0') {
            local_30 = *pfVar2 - *(float *)(param_1 + 0x4e0);
            local_2c = pfVar2[1] - *(float *)(param_1 + 0x4e4);
            local_28 = pfVar2[2] - *(float *)(param_1 + 0x4e8);
            local_24 = pfVar2[3] - *(float *)(param_1 + 0x4ec);
            fVar9 = (float10)FUN_00fdef70();
            if ((float)fVar9 < *(float *)(param_1 + 0x4f0)) {
              *(undefined1 *)(pfVar2 + 0x18) = 1;
              fVar3 = local_30 * local_30 + local_2c * local_2c + local_28 * local_28;
              if (fVar3 < 0.0 == (fVar3 == 0.0)) {
                FUN_00ddf460(&local_30,&local_30);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                local_30 = 0.0;
                local_2c = 1.0;
                local_28 = 0.0;
              }
              local_14 = *(float *)(param_1 + 0x4bc);
              pfVar2 = (float *)(iVar5 + 0x20 + *(int *)(param_1 + 0x4b4));
              local_20 = local_14 * local_30;
              local_1c = local_2c * local_14;
              local_18 = local_28 * local_14;
              local_14 = local_14 * local_24;
              *pfVar2 = local_20;
              pfVar2[1] = local_1c;
              pfVar2[2] = local_18;
              pfVar2[3] = local_14;
              uVar7 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
              *(uint *)(param_1 + 0x114) = uVar7;
              *(float *)(iVar5 + 0x50 + *(int *)(param_1 + 0x4b4)) =
                   (1.0 - (float)(uVar7 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_1 + 0x4c4);
              uVar7 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
              *(uint *)(param_1 + 0x114) = uVar7;
              *(float *)(iVar5 + 0x54 + *(int *)(param_1 + 0x4b4)) =
                   (1.0 - (float)(uVar7 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_1 + 0x4c4);
              uVar7 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
              *(uint *)(param_1 + 0x114) = uVar7;
              *(float *)(iVar5 + 0x58 + *(int *)(param_1 + 0x4b4)) =
                   (1.0 - (float)(uVar7 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_1 + 0x4c4);
            }
          }
          else {
            uVar6 = *(undefined4 *)(param_1 + 0x118);
            uVar15 = *(undefined4 *)(param_1 + 0x110);
            uVar14 = *(undefined4 *)(param_1 + 0x4cc);
            uVar13 = *(undefined4 *)(param_1 + 0x4c8);
            uVar12 = *(undefined4 *)(param_1 + 0x4d4);
            uVar11 = *(undefined4 *)(param_1 + 0x4d0);
            uVar10 = *(undefined4 *)(param_1 + 0x4c0);
            uVar8 = FUN_00a12210(local_3c);
            FUN_00ef10c0(uVar8,uVar10,uVar11,uVar12,uVar6,uVar13,uVar14,uVar15);
          }
          local_3c = local_3c + 1;
          iVar5 = iVar5 + 0x70;
        } while (local_3c < *(uint *)(param_1 + 0x4b0));
      }
      *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(param_1 + 0x180);
      *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(param_1 + 0x188);
      *(undefined4 *)(iVar4 + 0x5c) = *(undefined4 *)(param_1 + 0x18c);
      *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(param_1 + 0x1b0);
      *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(param_1 + 0x1b4);
      *(undefined4 *)(iVar4 + 0x98) = *(undefined4 *)(param_1 + 0x1b8);
      *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(param_1 + 0x1bc);
      *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(param_1 + 0x100);
      *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(param_1 + 0x104);
      *(undefined4 *)(iVar4 + 0x78) = *(undefined4 *)(param_1 + 0x100);
      FUN_00ee0500();
    }
  }
  return;
}

// 00F31C70  esp16::vf04  size=1174  [class]
void __thiscall
esp16::vf04(undefined *param_1,undefined4 param_2,undefined *param_3,undefined *param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float unaff_ESI;
  float unaff_EDI;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 **ppuVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined *puStack_d8;
  undefined1 *puStack_d4;
  int local_c4 [7];
  undefined1 auStack_a8 [4];
  int local_a4;
  undefined1 local_a0 [64];
  undefined1 local_60 [56];
  uint uStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)local_c4;
  puStack_d4 = param_4;
  puStack_d8 = param_3;
  iVar1 = cEspModel::vf04(param_2);
  if (iVar1 != 0) {
    puStack_d4 = (undefined *)0xf31cb1;
    iVar1 = FUN_00f26e90();
    if (iVar1 != 0) {
      puStack_d4 = (undefined *)0xf31cc0;
      iVar1 = FUN_00f27000();
      if (iVar1 != 0) {
        puStack_d4 = (undefined1 *)0xf31cd3;
        puStack_d4 = (undefined1 *)FUN_00a81330();
        puStack_d8 = (undefined *)0xf31cdb;
        iVar1 = FUN_00ee0710();
        if (iVar1 != 0) {
          puStack_d4 = (undefined *)0xf31cee;
          iVar1 = FUN_00a81330();
          if (iVar1 != 0) {
            puStack_d4 = (undefined1 *)0xf31cfd;
            iVar2 = FUN_00a7c800();
            iVar1 = *(int *)(iVar2 + 0x360);
            if (*(int *)(iVar2 + 0x360) == 0) {
              iVar1 = iVar2;
            }
            *(int *)(param_1 + 0x4b0) = (int)*(short *)(iVar1 + 0x358);
            puStack_d4 = (undefined1 *)0xf31d24;
            local_a4 = iVar2;
            psVar3 = (short *)FUN_009d4a80();
            if (psVar3 != (short *)0x0) {
              *(float *)(param_1 + 0x4b8) = (float)(int)*psVar3 * 0.001;
              *(float *)(param_1 + 0x4bc) = (float)(int)psVar3[1] * 0.001;
              *(float *)(param_1 + 0x4c0) = (float)(int)psVar3[2] * -5e-05;
              *(float *)(param_1 + 0x4c4) = (float)(int)psVar3[3] * 0.002;
              *(float *)(param_1 + 0x4c8) = (float)(int)psVar3[4];
              *(float *)(param_1 + 0x4cc) = (float)(int)psVar3[5] * 0.01;
              *(float *)(param_1 + 0x4d0) =
                   (float)(int)psVar3[6] * 0.001 + (float)(int)psVar3[6] * 0.001 + 0.8;
              local_c4[0] = (int)psVar3[7];
              *(float *)(param_1 + 0x4d4) = (float)local_c4[0] * 0.002 + 0.8;
              *(int *)(param_1 + 0x4d8) = (int)(char)psVar3[8];
              puStack_d4 = (undefined1 *)(int)*(char *)((int)psVar3 + 0x11);
              *(undefined1 **)(param_1 + 0x4dc) = puStack_d4;
              if (1 < (int)puStack_d4) {
                puStack_d8 = &DAT_016db870;
                FUN_009cca90(param_1);
                *(undefined4 *)(param_1 + 0x4dc) = 0;
              }
              if (*(float *)(param_1 + 0x4d4) == 0.0) {
                *(undefined4 *)(param_1 + 0x4d4) = 0x3f800000;
              }
              if (*(float *)(param_1 + 0x4b8) == 0.0) {
                *(undefined4 *)(param_1 + 0x4b8) = 0x4cbebc20;
              }
              if (((param_1[0x30] & 0x10) == 0) &&
                 (puStack_d4 = *(undefined1 **)(param_1 + 0x4d8), puStack_d4 != (undefined1 *)0x0))
              {
                if ((int)puStack_d4 < 0xb) {
                  if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
                    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
                  }
                  puStack_d4 = (undefined1 *)0x0;
                  puStack_d8 = (undefined *)0x0;
                  uVar18 = 0;
                  uVar17 = 0;
                  uVar16 = 0;
                  uVar14 = 0x3f800000;
                  uVar10 = *(undefined4 *)(param_1 + 0x4d8);
                  uVar13 = 0xff;
                  uVar11 = 0;
                  uVar6 = *(uint *)(param_1 + 0x6c) | 0x40;
                  uVar5 = *(undefined4 *)(param_1 + 0x74);
                  uVar9 = *(undefined4 *)(param_1 + 0x78);
                  uVar8 = 0;
                  uVar7 = 0;
                  uVar4 = FUN_00a81330(0,0,uVar9,uVar5,uVar6,uVar10,param_4,0,0xff,0x3f800000,0,0,0)
                  ;
                  FUN_00f42780(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x60),
                               *(undefined4 *)(param_1 + 0x68),param_1 + 0x7c,uVar4,uVar7,uVar8,
                               uVar9,uVar5,uVar6,uVar10,param_4,uVar11,uVar13,uVar14,uVar16,uVar17,
                               uVar18);
                }
                else {
                  puStack_d8 = &DAT_016db890;
                  FUN_009cca90(param_1);
                }
              }
            }
            puStack_d4 = (undefined1 *)0xf31f0f;
            iVar1 = FUN_009d4ac0();
            if (iVar1 != 0) {
              *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(iVar1 + 0x30);
              *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(iVar1 + 0x34);
              *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(iVar1 + 0x38);
              *(undefined4 *)(param_1 + 0x4ec) = 0x3f800000;
            }
            *(undefined4 *)(param_1 + 0x4f0) = 0;
            puStack_d4 = (undefined1 *)0x0;
            puStack_d8 = (undefined *)0x0;
            iVar1 = FUN_00dd29b0(*(int *)(param_1 + 0x4b0) * 0x70,0x10);
            *(int *)(param_1 + 0x4b4) = iVar1;
            if (iVar1 != 0) {
              *(undefined4 *)(iVar2 + 0x90) = *(undefined4 *)(param_1 + 0x1b0);
              *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(param_1 + 0x1b4);
              *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(param_1 + 0x1b8);
              *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(param_1 + 0x1bc);
              puStack_d4 = (undefined1 *)0xf31fc0;
              FUN_00ee0500();
              local_c4[1] = 0;
              puStack_d8 = (undefined *)(iVar2 + 0x10);
              local_c4[2] = 0x3f800000;
              local_c4[3] = 0;
              puStack_d4 = puStack_d8;
              if (*(int *)(param_1 + 0x50) != 0) {
                puStack_d4 = (undefined1 *)(*(int *)(param_1 + 0x50) + 0x10);
                D3DXMatrixMultiply(local_60);
                puStack_d4 = local_60;
              }
              puStack_d8 = local_a0;
              D3DXMatrixTranspose();
              D3DXVec3TransformNormal(&stack0xffffff38,&stack0xffffff38,auStack_a8);
              puStack_d8 = (undefined *)
                           (unaff_EDI * unaff_EDI + (float)puStack_d4 * (float)puStack_d4 +
                           unaff_ESI * unaff_ESI);
              if ((float)puStack_d8 < 0.0 == ((float)puStack_d8 == 0.0)) {
                FUN_00ddf460(&puStack_d4,&puStack_d4);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                puStack_d4 = (undefined1 *)0x0;
              }
              uVar6 = 0;
              if (*(int *)(param_1 + 0x4b0) != 0) {
                do {
                  uVar10 = *(undefined4 *)(param_1 + 0x4dc);
                  ppuVar15 = &puStack_d4;
                  puVar12 = param_1 + 0x4e0;
                  uVar5 = FUN_00a12210(uVar6);
                  FUN_00ed8380(uVar5,puVar12,uVar10,ppuVar15);
                  uVar6 = uVar6 + 1;
                } while (uVar6 < *(uint *)(param_1 + 0x4b0));
              }
              __security_check_cookie(uStack_28 ^ (uint)&puStack_d8);
              return;
            }
            puStack_d4 = &DAT_016db8ac;
            puStack_d8 = param_1;
            FUN_009cca90();
          }
        }
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)local_c4);
  return;
}


// src/misc/esp107.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CFEE0..009F5300, 6 functions

#include "mgrr.h"
#include "esp107.h"

// 009CFEE0  esp107::thunk_vf14  size=5  [class]
void __fastcall esp107::thunk_vf14(int param_1)

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

// 009CFEF0  esp107::thunk_vf10  size=5  [class]
void __fastcall esp107::thunk_vf10(int param_1)

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

// 009E2410  esp107::vf04  size=850  [class]
undefined4 __thiscall esp107::vf04(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  short *psVar6;
  bool bVar7;
  uint local_6c;
  
  iVar3 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar3 != 0) {
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      local_6c = 0;
    }
    else {
      local_6c = **(uint **)(param_1 + 0x58);
      if ((local_6c + 0xf & 0xfffffff0) != local_6c) {
        uVar5 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
    }
    cVar1 = *(char *)(local_6c + 0x15);
    *(undefined4 *)(param_1 + 0x4dc) = 0;
    *(uint *)(param_1 + 0x4e0) = -(uint)(cVar1 != '\0') & param_4;
    *(undefined4 *)(param_1 + 0x4c4) = 0;
    *(undefined4 *)(param_1 + 0x4d8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    *(undefined4 *)(param_1 + 0x4ec) = 0;
    if ((*(int *)(param_1 + 0x58) == 0) ||
       (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 == (undefined4 *)0x0)) {
      psVar6 = (short *)0x0;
    }
    else {
      psVar6 = (short *)*puVar4;
      if ((short *)((int)psVar6 + 0xfU & 0xfffffff0) != psVar6) {
        uVar5 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar5);
      }
    }
    bVar7 = false;
    if (psVar6 != (short *)0x0) {
      *(int *)(param_1 + 0x4c4) = (int)*psVar6;
      *(float *)(param_1 + 0x4cc) = (float)(int)psVar6[1];
      *(float *)(param_1 + 0x4c8) = (float)(int)psVar6[2];
      *(int *)(param_1 + 0x4d8) = (int)psVar6[3];
      *(int *)(param_1 + 0x4d0) = (int)psVar6[4];
      *(int *)(param_1 + 0x4d4) = (int)psVar6[5];
      *(float *)(param_1 + 0x4dc) = (float)(int)psVar6[6] * 0.01;
      *(int *)(param_1 + 0x4ec) = (int)psVar6[7];
      *(int *)(param_1 + 0x4e4) = (int)*(char *)((int)psVar6 + 0x13);
      *(int *)(param_1 + 0x4e8) = (int)(char)psVar6[10];
      if (*(int *)(param_1 + 0x4d8) == 0) {
        *(undefined4 *)(param_1 + 0x4d8) = 0xffffffff;
      }
      if (*(float *)(param_1 + 0x4dc) <= 0.0) {
        *(undefined4 *)(param_1 + 0x4dc) = 0;
      }
      bVar7 = (char)psVar6[8] != '\0';
      if (bVar7) {
        *(float *)(param_1 + 0x468) = (float)(int)(char)psVar6[8];
      }
      if ((char)psVar6[9] != '\0') {
        *(float *)(param_1 + 0x468) = (float)(int)(char)psVar6[9] * 0.01;
      }
    }
    iVar3 = FUN_00f2dbf0();
    if (iVar3 != 0) {
      uVar2 = *(uint *)(param_1 + 0x4d0);
      if ((((uVar2 == 2) || (uVar2 == 3)) && (*(int *)(param_1 + 0x120) == 0)) &&
         ((*(char *)(*(int *)(param_1 + 0x24) + 0x79) == '\0' &&
          (*(float *)(param_1 + 0x270) == 1.0)))) {
        FUN_009cca90(param_1,&DAT_0165aae4);
      }
      if (*(uint *)(param_1 + 0x4c4) < 4) {
        if (100.0 < *(float *)(param_1 + 0x4cc)) {
          FUN_009cca90(param_1,&DAT_0165aa90);
          return 0;
        }
        if (*(float *)(param_1 + 0x4c8) <= 100.0) {
          if (uVar2 < 6) {
            if (((*(byte *)(param_1 + 0x30) & 0x10) == 0) && (*(int *)(param_1 + 0x4e4) != 0)) {
              if (*(char *)(local_6c + 0x15) == '\0') {
                FUN_00dde2a0(0,0xffff);
              }
              FUN_009dbcf0();
            }
            if ((*(uint *)(param_1 + 0x4c4) != 0) && (*(uint *)(param_1 + 0x4c4) < 4)) {
              FUN_00efcb90();
              *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_1 + 400);
              *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_1 + 0x194);
              *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x198);
              *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_1 + 0x19c);
            }
            *(undefined4 *)(param_1 + 0x4c0) = 0x40c00000;
            *(undefined4 *)(param_1 + 0x4f0) = 0;
            if (bVar7) {
              FUN_00ee05a0();
            }
            return 1;
          }
          FUN_009cca90(param_1,&DAT_0165aa24);
          return 0;
        }
        FUN_009cca90(param_1,&DAT_0165aa5c);
        return 0;
      }
      FUN_009cca90(param_1,&DAT_0165aac4,*(uint *)(param_1 + 0x4c4));
    }
  }
  return 0;
}

// 009E8430  esp107::esp107  size=18  [class]
undefined4 * __fastcall esp107::esp107(undefined4 *param_1)

{
  cEspModel::cEspModel();
  *param_1 = vftable;
  return param_1;
}

// 009EE280  esp107::vf00  size=36  [class]
undefined4 * __thiscall esp107::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspModel::vftable;
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009F5300  esp107::vf08  size=1336  [class]
void __fastcall esp107::vf08(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  undefined4 *puVar15;
  float *pfVar16;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_58;
  undefined4 local_50 [19];
  
  esp39::vf08();
  if (*(int *)(param_1 + 0x4d8) != 0) {
    if ((*(uint *)(param_1 + 0x30) & 0xc0000000) != 0) {
      return;
    }
    iVar14 = FUN_00f41120();
    if (iVar14 != 0) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0x4c0) - *(float *)(param_1 + 0x110);
    *(float *)(param_1 + 0x4c0) = fVar1;
    if (((fVar1 <= 0.0) && (*(uint *)(param_1 + 0x4c4) != 0)) && (*(uint *)(param_1 + 0x4c4) < 4)) {
      *(undefined4 *)(param_1 + 0x4c0) = 0x407fef9e;
      local_c0 = *(undefined4 *)(param_1 + 0x4b0);
      local_bc = *(undefined4 *)(param_1 + 0x4b4);
      local_b8 = *(undefined4 *)(param_1 + 0x4b8);
      local_b4 = *(undefined4 *)(param_1 + 0x4bc);
      fVar1 = *(float *)(param_1 + 0x110);
      local_b0 = *(float *)(param_1 + 400) + *(float *)(param_1 + 0x150) * fVar1;
      local_ac = *(float *)(param_1 + 0x194) + *(float *)(param_1 + 0x154) * fVar1;
      local_a8 = *(float *)(param_1 + 0x198) + *(float *)(param_1 + 0x158) * fVar1;
      local_a4 = *(float *)(param_1 + 0x19c) + *(float *)(param_1 + 0x15c) * fVar1;
      *(float *)(param_1 + 0x4bc) = local_a4;
      *(float *)(param_1 + 0x4b0) = local_b0;
      *(float *)(param_1 + 0x4b4) = local_ac;
      *(float *)(param_1 + 0x4b8) = local_a8;
      *(int *)(param_1 + 0x4f0) = *(int *)(param_1 + 0x4f0) + 1;
      if (1 < *(uint *)(param_1 + 0x4f0)) {
        local_50[0] = 0;
        iVar14 = FUN_009d60a0(local_50,&local_c0,&local_b0);
        if ((iVar14 != 0) &&
           ((iVar14 = FUN_009d6110(), iVar14 != 0 || (*(int *)(param_1 + 0x4ec) != 1)))) {
          puVar15 = (undefined4 *)FUN_009cf200();
          uVar2 = *puVar15;
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          pfVar16 = (float *)FUN_009cf220();
          fVar1 = *pfVar16;
          fVar6 = pfVar16[1];
          fVar7 = pfVar16[2];
          fVar8 = pfVar16[3];
          *(undefined4 *)(param_1 + 0x4b0) = uVar2;
          *(undefined4 *)(param_1 + 0x4b4) = uVar3;
          *(undefined4 *)(param_1 + 0x4b8) = uVar4;
          *(undefined4 *)(param_1 + 0x4bc) = uVar5;
          *(float *)(param_1 + 0x4b0) = *(float *)(param_1 + 0x4b0) + fVar1 * 0.001;
          *(float *)(param_1 + 0x4b4) = fVar6 * 0.001 + *(float *)(param_1 + 0x4b4);
          *(float *)(param_1 + 0x4b8) = fVar7 * 0.001 + *(float *)(param_1 + 0x4b8);
          *(float *)(param_1 + 0x4bc) = fVar8 * 0.001 + *(float *)(param_1 + 0x4bc);
          *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + -1;
          *(undefined4 *)(param_1 + 0x180) = uVar2;
          *(undefined4 *)(param_1 + 0x184) = uVar3;
          *(undefined4 *)(param_1 + 0x188) = uVar4;
          *(undefined4 *)(param_1 + 0x18c) = uVar5;
          fVar13 = *(float *)(param_1 + 0x150) * -1.0;
          fVar12 = *(float *)(param_1 + 0x154) * -1.0;
          fVar11 = *(float *)(param_1 + 0x158) * -1.0;
          fVar10 = fVar7 * fVar11 + fVar1 * fVar13 + fVar6 * fVar12;
          *(float *)(param_1 + 0x150) = fVar1 * fVar10 * 2.0 - fVar13;
          *(float *)(param_1 + 0x154) = fVar6 * fVar10 * 2.0 - fVar12;
          *(float *)(param_1 + 0x158) = fVar7 * fVar10 * 2.0 - fVar11;
          *(float *)(param_1 + 0x15c) = fVar10 * fVar8 * 2.0 - *(float *)(param_1 + 0x15c) * -1.0;
          fVar1 = *(float *)(param_1 + 0x4c8) * 0.01;
          *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) * fVar1;
          *(float *)(param_1 + 0x154) =
               *(float *)(param_1 + 0x4cc) * 0.01 * *(float *)(param_1 + 0x154);
          *(float *)(param_1 + 0x158) = fVar1 * *(float *)(param_1 + 0x158);
          if (*(int *)(param_1 + 0x4d8) == 0) {
            *(undefined4 *)(param_1 + 0x150) = 0;
            *(undefined4 *)(param_1 + 0x154) = 0;
            *(undefined4 *)(param_1 + 0x158) = 0;
            *(undefined4 *)(param_1 + 0x15c) = local_b4;
            *(undefined4 *)(param_1 + 0x160) = 0;
            *(undefined4 *)(param_1 + 0x164) = 0;
            *(undefined4 *)(param_1 + 0x168) = 0;
            *(undefined4 *)(param_1 + 0x16c) = local_b4;
            *(undefined4 *)(param_1 + 0x140) = 0;
            *(undefined4 *)(param_1 + 0x144) = 0;
            *(undefined4 *)(param_1 + 0x148) = 0;
            *(undefined4 *)(param_1 + 0x14c) = local_b4;
            *(undefined4 *)(param_1 + 0x1d0) = 0;
            *(undefined4 *)(param_1 + 0x1d4) = 0;
            *(undefined4 *)(param_1 + 0x1d8) = 0;
            *(undefined4 *)(param_1 + 0x1dc) = local_b4;
            *(undefined4 *)(param_1 + 0x380) = 0;
          }
          iVar14 = FUN_009d6110();
          if ((iVar14 != 0) || (*(int *)(param_1 + 0x4ec) != 2)) {
            iVar14 = FUN_009d4a80();
            if (((*(byte *)(param_1 + 0x30) & 0x10) == 0) &&
               ((((iVar9 = *(int *)(param_1 + 0x4d0), iVar9 == 1 || (iVar9 == 2)) ||
                 ((iVar9 == 4 && (*(int *)(param_1 + 0x4d8) == *(short *)(iVar14 + 6) + -1)))) ||
                ((iVar9 == 5 && (*(int *)(param_1 + 0x4d8) == 0)))))) {
              iVar14 = FUN_009d49d0();
              if (*(char *)(iVar14 + 0x15) == '\0') {
                FUN_00dde2a0(0,0xffff);
              }
              if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
                *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
              }
              FUN_009dbcf0();
              local_74 = *(undefined4 *)(param_1 + 0x4d4);
              local_78 = FUN_009e0f60();
              puVar15 = (undefined4 *)FUN_009cf200();
              local_a0 = *puVar15;
              local_9c = puVar15[1];
              local_98 = puVar15[2];
              local_94 = puVar15[3];
              puVar15 = (undefined4 *)FUN_009cf220();
              local_90 = *puVar15;
              local_8c = puVar15[1];
              local_88 = puVar15[2];
              local_84 = puVar15[3];
              local_80 = FUN_009d60f0();
              local_58 = *(undefined4 *)(param_1 + 0x84);
              iVar14 = FUN_009cf290();
              if (iVar14 != 0) {
                local_7c = *(undefined2 *)(iVar14 + 0xa0);
              }
              FUN_009f26b0(&local_a0);
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
  return;
}


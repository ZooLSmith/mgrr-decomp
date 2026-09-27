// src/misc/esp15.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED1BC0..00F315B0, 9 functions

#include "types.h"

// 00ED1BC0  esp15::esp15  size=28  [class]
undefined4 * __fastcall esp15::esp15(undefined4 *param_1)

{
  cEspModel::cEspModel();
  *param_1 = vftable;
  param_1[0x13f] = 0;
  return param_1;
}

// 00ED2DD0  esp15::vf00  size=36  [class]
undefined4 * __thiscall esp15::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspModel::vftable;
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ED8370  esp15::vf10  size=1  [class]
void esp15::vf10(void)

{
  return;
}

// 00EF0480  FUN_00ef0480  size=633  [callgraph]
void __thiscall
FUN_00ef0480(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  ushort uVar8;
  uint uVar9;
  int local_3c;
  int local_38;
  ushort local_2c;
  char local_28 [4];
  int local_24;
  undefined4 local_14;
  
  *param_1 = *(undefined4 *)(param_4 + 0x50);
  param_1[1] = *(undefined4 *)(param_4 + 0x54);
  param_1[2] = *(undefined4 *)(param_4 + 0x58);
  param_1[3] = *(undefined4 *)(param_4 + 0x5c);
  param_1[4] = *param_1;
  param_1[5] = param_1[1];
  param_1[6] = param_1[2];
  param_1[7] = param_1[3];
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = local_14;
  param_1[0x10] = *(undefined4 *)(param_4 + 0x90);
  param_1[0x11] = *(undefined4 *)(param_4 + 0x94);
  param_1[0x12] = *(undefined4 *)(param_4 + 0x98);
  param_1[0x13] = *(undefined4 *)(param_4 + 0x9c);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = local_14;
  param_1[0xc] = *param_5;
  param_1[0xd] = param_5[1];
  param_1[0xe] = param_5[2];
  param_1[0xf] = param_5[3];
  *(undefined2 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_2 + 0x4c8) == 1) {
    *(undefined1 *)((int)param_1 + 0x62) = 1;
  }
  else {
    *(char *)((int)param_1 + 0x62) = (*(int *)(param_2 + 0x4c8) != 2) + -1;
  }
  *(undefined1 *)((int)param_1 + 99) = 0xff;
  if ((*(int *)(param_2 + 0x58) == 0) ||
     (puVar5 = (uint *)(*(int *)(param_2 + 0x58) + 0x30), puVar5 == (uint *)0x0)) {
    uVar9 = 0;
  }
  else {
    uVar9 = *puVar5;
    if ((uVar9 + 0xf & 0xfffffff0) != uVar9) {
      uVar6 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
  }
  if (*(float *)(uVar9 + 0x10) + *(float *)(uVar9 + 0xc) != 0.0) {
    local_24 = (int)*(short *)(param_3 + 0x324);
    local_3c = 0;
    if (0 < local_24) {
      local_38 = 0;
      do {
        if ((((-1 < local_3c) && (local_3c < *(short *)(param_3 + 0x324))) &&
            (iVar7 = *(int *)(param_3 + 800) + local_38, iVar7 != 0)) &&
           ((iVar7 = *(int *)(*(int *)(iVar7 + 0x60) + 0x40), iVar7 != 0 &&
            (iVar7 = FUN_00e05f70(iVar7,&DAT_016db790), iVar7 != 0)))) {
          bVar1 = (&DAT_016cabd0)[*(byte *)(iVar7 + 4)];
          uVar8 = (ushort)bVar1;
          local_2c = 0;
          if (bVar1 == 0xff) {
            uVar8 = 0;
          }
          bVar2 = (&DAT_016cabd0)[*(byte *)(iVar7 + 5)];
          uVar4 = (ushort)bVar2;
          if (bVar2 == 0xff) {
            uVar4 = local_2c;
          }
          local_2c = uVar4;
          bVar3 = (&DAT_016cabd0)[*(byte *)(iVar7 + 6)];
          uVar4 = (ushort)bVar3;
          if (bVar3 == 0xff) {
            uVar4 = 0;
          }
          if (((bVar1 == 0xff) || (bVar2 == 0xff)) || (bVar3 == 0xff)) {
            _strncpy_s(local_28,4,(char *)(iVar7 + 4),3);
            FUN_009cca90(param_2,&DAT_016db798,local_28);
          }
          else if ((ushort)((uVar8 * 0x10 + local_2c) * 0x10 + uVar4) == *(short *)(param_4 + 0xa0))
          {
            *(undefined1 *)((int)param_1 + 99) = (undefined1)local_3c;
            return;
          }
        }
        local_38 = local_38 + 0x70;
        local_3c = local_3c + 1;
      } while (local_3c < local_24);
      return;
    }
  }
  return;
}

// 00EF0700  FUN_00ef0700  size=2345  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00ef0d92) */

void __thiscall
FUN_00ef0700(float *param_1,int param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10,uint *param_11,int param_12,
            int param_13)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBX;
  float10 fVar6;
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
  undefined1 auStack_124 [8];
  float local_11c;
  float local_118;
  uint *local_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  uint *puStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float fStack_cc;
  float fStack_c8;
  float local_c4;
  undefined1 local_c0 [4];
  undefined1 auStack_bc [12];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_a0 [48];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_60 [48];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_124;
  local_118 = param_3;
  local_c4 = param_4;
  local_114 = param_11;
  if ((((*(byte *)(param_2 + 0x4fc) & 2) != 0) || (param_12 == 0)) ||
     ((int)(uint)*(byte *)((int)param_1 + 0x61) < param_12)) {
    local_100 = param_10 * param_1[8];
    local_fc = param_1[9] * param_10;
    local_f8 = param_1[10] * param_10;
    param_1[0x10] = param_1[0x14] * param_10 + param_1[0x10];
    param_1[0x11] = param_1[0x15] * param_10 + param_1[0x11];
    local_11c = param_1[0x16] * param_10;
    param_1[0x12] = local_11c + param_1[0x12];
    fVar1 = param_8;
    if (param_10 != 1.0) {
      if (param_8 < 2.0) {
        fVar1 = param_8 / ((param_10 - param_8 * param_10) + param_8);
      }
      else {
        fVar6 = (float10)FUN_00fdc1f0();
        fVar1 = (float)fVar6;
      }
    }
    local_11c = fVar1;
    param_1[0x14] = local_11c * param_1[0x14];
    param_1[0x15] = param_1[0x15] * local_11c;
    param_1[0x16] = param_1[0x16] * local_11c;
    param_1[0x17] = local_11c * param_1[0x17];
    local_11c = param_5 * param_10;
    local_e0 = local_11c * param_1[0xc];
    local_dc = param_1[0xd] * local_11c;
    local_d8 = param_1[0xe] * local_11c;
    local_d4 = local_11c * param_1[0xf];
    param_1[8] = local_e0 + param_1[8];
    param_1[9] = param_1[9] + local_dc;
    param_1[10] = param_1[10] + local_d8;
    param_1[0xb] = param_1[0xb] + local_d4;
    if (param_10 != 1.0) {
      if (param_6 < 2.0) {
        param_6 = param_6 / ((param_10 - param_6 * param_10) + param_6);
      }
      else {
        fVar6 = (float10)FUN_00fdc1f0();
        param_6 = (float)fVar6;
      }
    }
    param_1[8] = param_6 * param_1[8];
    param_1[9] = param_1[9] * param_6;
    param_1[10] = param_1[10] * param_6;
    param_1[0xb] = param_6 * param_1[0xb];
    if ((param_13 == 0) || ((*(byte *)(param_2 + 0x4fc) & 2) != 0)) {
      *param_1 = *param_1 + local_100;
      param_1[1] = param_1[1] + local_fc;
      param_1[2] = param_1[2] + local_f8;
      param_1[3] = param_1[3] + local_f4;
      local_11c = param_6;
    }
    else {
      local_11c = (float)((int)local_118 + 0x10);
      pfVar7 = param_1 + 4;
      D3DXVec3TransformNormal(local_c0,pfVar7,local_11c);
      fStack_cc = *(float *)(unaff_EBX + 0x30) + fStack_cc;
      fStack_c8 = *(float *)(unaff_EBX + 0x34) + fStack_c8;
      local_c4 = *(float *)(unaff_EBX + 0x38) + local_c4;
      local_11c = *param_1 + fStack_10c;
      local_118 = param_1[1] + fStack_108;
      local_114 = (uint *)(param_1[2] + fStack_104);
      fStack_110 = param_1[3] + local_100;
      param_1[7] = fStack_110;
      *pfVar7 = local_11c;
      param_1[5] = local_118;
      param_1[6] = (float)local_114;
      fStack_ec = local_11c;
      fStack_e8 = local_118;
      puStack_e4 = local_114;
      local_e0 = fStack_110;
      D3DXVec3TransformNormal(&fStack_ec,&fStack_ec,unaff_EBX);
      local_e0 = *(float *)((int)local_11c + 0x30) + local_e0;
      local_dc = *(float *)((int)local_11c + 0x34) + local_dc;
      local_d8 = *(float *)((int)local_11c + 0x38) + local_d8;
      iVar2 = FUN_009d6070(&fStack_b0,&fStack_f0,local_c0,&local_e0);
      if (iVar2 == 0) {
        *param_1 = *param_1 + local_100;
        param_1[1] = param_1[1] + local_fc;
        param_1[2] = param_1[2] + local_f8;
        param_1[3] = param_1[3] + local_f4;
        param_4 = local_c4;
      }
      else {
        if (fStack_ec <= 0.5) {
          *(char *)((int)param_1 + 0x61) = *(char *)((int)param_1 + 0x61) + '\x03';
        }
        else {
          *(char *)((int)param_1 + 0x61) = *(char *)((int)param_1 + 0x61) + '\n';
        }
        if (param_1[0xd] < 0.995) {
          D3DXMatrixTranspose(auStack_a0,local_11c);
          D3DXVec3TransformNormal(&local_f8,&local_f8,&fStack_a8);
          fStack_f0 = fStack_f0 + fStack_70;
          fStack_ec = fStack_6c + fStack_ec;
          fStack_e8 = fStack_e8 + fStack_68;
          local_118 = fStack_ec * fStack_ec + fStack_f0 * fStack_f0 + fStack_e8 * fStack_e8;
          if (local_118 < 0.0 == (local_118 == 0.0)) {
            FUN_00ddf460(&fStack_f0,&fStack_f0);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            fStack_f0 = 0.0;
            fStack_ec = 1.0;
            fStack_e8 = 0.0;
          }
        }
        D3DXMatrixInverse(auStack_60,0,local_11c);
        D3DXVec3TransformNormal(param_1,auStack_bc,&fStack_6c);
        fVar1 = *param_1;
        *param_1 = fVar1 + fStack_30;
        fVar1 = fStack_f0 * 0.01 + fVar1 + fStack_30;
        *param_1 = fVar1;
        param_1[1] = param_1[1] + fStack_2c + fStack_ec * 0.01;
        param_1[2] = param_1[2] + fStack_28 + fStack_e8 * 0.01;
        param_1[3] = (float)puStack_e4 * 0.01 + param_1[3];
        *pfVar7 = fVar1;
        param_1[5] = param_1[1];
        param_1[6] = param_1[2];
        param_1[7] = param_1[3];
        fVar1 = param_1[10] * fStack_e8 + fStack_f0 * param_1[8] + param_1[9] * fStack_ec;
        local_100 = fVar1 * fStack_f0 * 2.0;
        local_fc = fVar1 * fStack_ec * 2.0;
        local_f8 = fStack_e8 * fVar1 * 2.0;
        local_f4 = fVar1 * (float)puStack_e4 * 2.0;
        param_1[8] = local_100 + param_1[8];
        param_1[9] = param_1[9] + local_fc;
        param_1[10] = param_1[10] + local_f8;
        param_1[0xb] = param_1[0xb] + local_f4;
        param_9 = -param_9;
        param_1[8] = param_9 * param_1[8];
        param_1[9] = param_1[9] * param_9;
        param_1[10] = param_1[10] * param_9;
        param_1[0xb] = param_9 * param_1[0xb];
        param_1[0x14] = param_1[0x14] * 0.5;
        param_1[0x15] = param_1[0x15] * 0.5;
        param_1[0x16] = param_1[0x16] * 0.5;
        param_1[0x17] = param_1[0x17] * 0.5;
        local_118 = param_1[10] * fStack_e8 + fStack_f0 * param_1[8] + param_1[9] * fStack_ec;
        fStack_110 = local_118 * fStack_f0;
        fStack_10c = local_118 * fStack_ec;
        fStack_108 = local_118 * fStack_e8;
        fStack_104 = (float)puStack_e4 * local_118;
        param_1[8] = param_1[8] - fStack_110;
        param_1[9] = param_1[9] - fStack_10c;
        param_1[10] = param_1[10] - fStack_108;
        param_1[0xb] = param_1[0xb] - fStack_104;
        uVar3 = *local_114 * 0x19660d + 0x3c6ef35f;
        *local_114 = uVar3;
        local_114 = (uint *)(1.0 - (float)(uVar3 >> 8) * 5.960465e-08 * 2.0);
        if (-0.5 <= (float)local_114) {
          local_11c = ((float)local_114 + 1.0) * 0.75;
        }
        else {
          local_11c = (float)local_114 * 0.2;
        }
        local_11c = local_11c * param_7;
        param_1[8] = local_11c * param_1[8];
        param_1[9] = param_1[9] * local_11c;
        param_1[10] = param_1[10] * local_11c;
        param_1[0xb] = local_11c * param_1[0xb];
        param_1[8] = param_1[8] + fStack_110;
        param_1[9] = fStack_10c + param_1[9];
        param_1[10] = fStack_108 + param_1[10];
        param_1[0xb] = fStack_104 + param_1[0xb];
        param_4 = local_c4;
        if (((*(byte *)(param_2 + 0x30) & 0x10) == 0) && (*(char *)((int)param_1 + 0x62) != '\0')) {
          fStack_110 = fStack_b0;
          *(char *)((int)param_1 + 0x62) = *(char *)((int)param_1 + 0x62) + -1;
          fStack_10c = fStack_ac;
          fStack_108 = fStack_a8;
          fStack_104 = fStack_a4;
          iVar2 = FUN_009d49d0();
          if (*(char *)(iVar2 + 0x15) == '\0') {
            uVar3 = FUN_00dde2a0(0,0xffff);
            uVar3 = uVar3 & 0xffff;
          }
          else {
            uVar3 = *(uint *)(param_2 + 0x50c);
          }
          if ((*(uint *)(param_2 + 0x6c) & 0x1000) != 0) {
            *(uint *)(param_2 + 0x6c) = *(uint *)(param_2 + 0x6c) & 0xffffefff;
          }
          uVar11 = *(undefined4 *)(param_2 + 0x4cc);
          uVar19 = 0;
          uVar18 = 0;
          uVar17 = 0;
          uVar16 = 0;
          uVar15 = 0;
          uVar14 = 0x3f800000;
          uVar13 = 0xff;
          uVar12 = 0;
          uVar5 = *(uint *)(param_2 + 0x6c) | 0x40;
          uVar10 = *(undefined4 *)(param_2 + 0x74);
          uVar9 = *(undefined4 *)(param_2 + 0x78);
          uVar8 = 0;
          pfVar7 = &fStack_110;
          uVar4 = FUN_00a81330(pfVar7,0,uVar9,uVar10,uVar5,uVar11,uVar3,0,0xff,0x3f800000,0,0,0,0,0)
          ;
          FUN_00f42b60(*(undefined4 *)(param_2 + 0x84),*(undefined4 *)(param_2 + 0x60),
                       *(undefined4 *)(param_2 + 0x68),param_2 + 0x7c,uVar4,pfVar7,uVar8,uVar9,
                       uVar10,uVar5,uVar11,uVar3,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,
                       uVar19);
          param_4 = local_c4;
        }
      }
    }
    *(float *)((int)param_4 + 0x50) = *param_1;
    *(float *)((int)param_4 + 0x54) = param_1[1];
    *(float *)((int)param_4 + 0x58) = param_1[2];
    *(float *)((int)param_4 + 0x5c) = param_1[3];
    *(float *)((int)param_4 + 0x90) = param_1[0x10];
    *(float *)((int)param_4 + 0x94) = param_1[0x11];
    *(float *)((int)param_4 + 0x98) = param_1[0x12];
    *(float *)((int)param_4 + 0x9c) = param_1[0x13];
    if (param_13 != 0) {
      local_114 = (uint *)(param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2]);
      fVar6 = (float10)FUN_00fdef70();
      local_114 = (uint *)(float)fVar6;
      if (*(float *)(param_2 + 0x504) < (float)local_114) {
        *(uint **)(param_2 + 0x504) = local_114;
        __security_check_cookie(local_14 ^ (uint)auStack_124);
        return;
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)auStack_124);
  return;
}

// 00EF1030  esp15::vf14  size=104  [class]
void __fastcall esp15::vf14(int param_1)

{
  uint uVar1;
  int extraout_ECX;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  if ((*(int *)(param_1 + 0x4c0) != 0) && (*(int *)(param_1 + 0x4c0) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x4c0),0);
    *(undefined4 *)(param_1 + 0x4c0) = 0;
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

// 00EF10A0  esp15::vf0C  size=32  [class]
void __fastcall esp15::vf0C(int param_1)

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

// 00F28780  esp15::vf08  size=2325  [class]
/* WARNING: Removing unreachable block (ram,0x00f28d5f) */
/* WARNING: Removing unreachable block (ram,0x00f28dcd) */
/* WARNING: Removing unreachable block (ram,0x00f28e27) */

void __fastcall esp15::vf08(int param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  float10 fVar10;
  undefined1 auStack_134 [12];
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_10c;
  float local_108;
  int local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 local_a0 [48];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_134;
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
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    fVar4 = (float)FUN_00a7c800();
    local_b4 = fVar4;
    if (((*(float *)(param_1 + 0x51c) == 0.0) || (*(int *)(param_1 + 900) == 1)) ||
       (*(float *)(param_1 + 0x118) <= *(float *)(param_1 + 0x51c))) {
      if (((*(byte *)(param_1 + 0x4fc) & 4) == 0) || (*(float *)(param_1 + 0x510) == 0.0)) {
        if ((*(uint *)(param_1 + 0x30) & 0xc0000000) != 0) goto LAB_00f29083;
        iVar3 = FUN_00a81330();
        if (iVar3 != 0) {
          uVar5 = FUN_00a7c800();
          FUN_00efee50(uVar5);
          FUN_00f22bb0(uVar5);
        }
        iVar3 = 0;
        *(float *)(param_1 + 0x508) = *(float *)(param_1 + 0x4dc) + *(float *)(param_1 + 0x508);
        local_128 = *(float *)(param_1 + 0x514) - *(float *)(param_1 + 0x110);
        *(float *)(param_1 + 0x514) = local_128;
        *(float *)(param_1 + 0x518) = *(float *)(param_1 + 0x518) - *(float *)(param_1 + 0x110);
        if (local_128 <= 0.0) {
          *(undefined4 *)(param_1 + 0x514) = 0x407fef9e;
        }
        local_124 = (float)(uint)(local_128 <= 0.0);
        local_f0 = *(float *)(param_1 + 0x250);
        iVar7 = *(int *)(param_1 + 0x84);
        local_ec = *(float *)(param_1 + 0x254);
        local_e8 = *(float *)(param_1 + 600);
        local_e4 = *(float *)(param_1 + 0x25c) * *(float *)(param_1 + 0x124);
        if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x68) & 8) != 0)) {
          local_f0 = *(float *)(iVar7 + 0x30) * local_f0;
          local_ec = *(float *)(iVar7 + 0x34) * local_ec;
          local_e8 = *(float *)(iVar7 + 0x38) * local_e8;
          local_e4 = *(float *)(iVar7 + 0x3c) * local_e4;
        }
        local_10c = 0.0;
        fVar6 = *(float *)((int)fVar4 + 0x360);
        if (*(float *)((int)fVar4 + 0x360) == 0.0) {
          fVar6 = fVar4;
        }
        local_108 = (float)(int)*(short *)((int)fVar6 + 0x358);
        if (local_108 != 0.0) {
          local_104 = 0;
          do {
            pfVar2 = (float *)(iVar3 + *(int *)(param_1 + 0x4c0));
            if (*(char *)(iVar3 + 0x60 + *(int *)(param_1 + 0x4c0)) == '\0') {
              local_120 = *pfVar2 - *(float *)(param_1 + 0x4b0);
              local_11c = pfVar2[1] - *(float *)(param_1 + 0x4b4);
              local_118 = pfVar2[2] - *(float *)(param_1 + 0x4b8);
              local_114 = pfVar2[3] - *(float *)(param_1 + 0x4bc);
              if (((local_120 == 0.0) && (local_11c == 0.0)) && (local_118 == 0.0)) {
                local_11c = 0.001;
              }
              local_128 = local_11c * local_11c + local_120 * local_120 + local_118 * local_118;
              fVar10 = (float10)FUN_00fdef70();
              local_128 = (float)fVar10;
              if ((local_128 < *(float *)(param_1 + 0x508)) ||
                 ((((*(byte *)(param_1 + 0x4fc) & 1) != 0 && (*(int *)(param_1 + 900) == 2)) &&
                  (iVar7 = FUN_00fdbc60(), (int)local_10c <= iVar7)))) {
                iVar7 = *(int *)(param_1 + 0x84);
                local_100 = 0.0;
                local_fc = 0.0;
                local_f8 = 0.0;
                local_f4 = 0.0;
                if ((iVar7 != 0) && ((*(byte *)(iVar7 + 0x68) & 4) != 0)) {
                  puVar9 = (undefined1 *)((int)fVar4 + 0x10);
                  local_128 = *(float *)(param_1 + 0x4d8);
                  local_100 = local_128 * *(float *)(iVar7 + 0x50);
                  local_fc = *(float *)(iVar7 + 0x54) * local_128;
                  local_f8 = local_128 * *(float *)(iVar7 + 0x58);
                  local_f4 = 1.0;
                  local_dc = local_100;
                  local_d8 = local_fc;
                  local_d4 = local_f8;
                  if (*(int *)(param_1 + 0x50) != 0) {
                    D3DXMatrixMultiply(local_60,puVar9,*(int *)(param_1 + 0x50) + 0x10);
                    puVar9 = local_60;
                  }
                  D3DXMatrixTranspose(local_a0,puVar9);
                  D3DXVec3TransformNormal(&local_108,&local_108,&fStack_a8);
                }
                *(undefined1 *)(iVar3 + 0x60 + *(int *)(param_1 + 0x4c0)) = 1;
                local_128 = local_120 * local_120 + local_11c * local_11c + local_118 * local_118;
                if (local_128 < 0.0 == (local_128 == 0.0)) {
                  FUN_00ddf460(&local_120,&local_120);
                }
                else {
                  FUN_00dd5650(&DAT_0163d0ac);
                  local_120 = 0.0;
                  local_11c = 1.0;
                  local_118 = 0.0;
                }
                fVar10 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4d0),
                                               *(undefined4 *)(param_1 + 0x4d0));
                pfVar2 = (float *)(iVar3 + 0x20 + *(int *)(param_1 + 0x4c0));
                fStack_a4 = (float)(fVar10 + (float10)*(float *)(param_1 + 0x4e0));
                fStack_b0 = fStack_a4 * local_120;
                fStack_ac = fStack_a4 * local_11c;
                fStack_a8 = fStack_a4 * local_118;
                fStack_a4 = fStack_a4 * local_114;
                fStack_d0 = fStack_b0 + local_100;
                fStack_cc = fStack_ac + local_fc;
                fStack_c8 = fStack_a8 + local_f8;
                fStack_c4 = fStack_a4 + local_f4;
                *pfVar2 = fStack_d0;
                pfVar2[1] = fStack_cc;
                pfVar2[2] = fStack_c8;
                pfVar2[3] = fStack_c4;
                uVar8 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
                *(uint *)(param_1 + 0x114) = uVar8;
                *(float *)(iVar3 + 0x50 + *(int *)(param_1 + 0x4c0)) =
                     (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_1 + 0x4e8);
                uVar8 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
                *(uint *)(param_1 + 0x114) = uVar8;
                *(float *)(iVar3 + 0x54 + *(int *)(param_1 + 0x4c0)) =
                     (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_1 + 0x4e8);
                uVar8 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
                *(uint *)(param_1 + 0x114) = uVar8;
                local_128 = (1.0 - (float)(uVar8 >> 8) * 5.960465e-08 * 2.0) *
                            *(float *)(param_1 + 0x4e8);
                *(float *)(iVar3 + 0x58 + *(int *)(param_1 + 0x4c0)) = local_128;
                fVar4 = local_b4;
              }
            }
            else if (0.0 < *(float *)(param_1 + 0x518)) {
              local_128 = fVar4;
              if (*(float *)((int)fVar4 + 0x360) != 0.0) {
                local_128 = *(float *)((int)fVar4 + 0x360);
              }
              if (((int)local_10c < 0) ||
                 ((int)*(short *)((int)local_128 + 0x358) <= (int)local_10c)) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)((int)local_128 + 0x350) + local_104;
              }
              FUN_00ef0700(param_1,fVar4,iVar7,*(undefined4 *)(param_1 + 0x4e4),
                           *(undefined4 *)(param_1 + 0x4f4),*(undefined4 *)(param_1 + 0x4f0),
                           *(undefined4 *)(param_1 + 0x4f8),*(undefined4 *)(param_1 + 0x4ec),
                           *(undefined4 *)(param_1 + 0x110),param_1 + 0x114,
                           *(undefined4 *)(param_1 + 0x4d4),local_124);
            }
            FUN_00f03fe0(param_1,fVar4,&local_f0);
            local_104 = local_104 + 0xb0;
            local_10c = (float)((int)local_10c + 1);
            iVar3 = iVar3 + 0x70;
          } while ((uint)local_10c < (uint)local_108);
        }
      }
      else {
        if ((*(uint *)(param_1 + 0x30) & 0xc0000000) == 0) {
          FUN_00f26e60();
        }
        if ((*(float *)(param_1 + 0x510) != 0.0) &&
           (*(float *)(param_1 + 0x510) < *(float *)(param_1 + 0x118))) {
          *(undefined4 *)(param_1 + 900) = 1;
          *(uint *)(param_1 + 0x4fc) = *(uint *)(param_1 + 0x4fc) & 0xfffffffb;
        }
      }
    }
    else {
      if ((*(uint *)(param_1 + 0x30) & 0xc0000000) == 0) {
        FUN_00f26e60();
      }
      if ((*(float *)(param_1 + 0x510) != 0.0) &&
         (*(float *)(param_1 + 0x510) < *(float *)(param_1 + 0x118))) {
        *(undefined4 *)(param_1 + 900) = 1;
      }
    }
    if ((*(uint *)(param_1 + 0x30) & 0xc0000000) == 0) {
      *(undefined4 *)((int)fVar4 + 0x50) = *(undefined4 *)(param_1 + 0x180);
      *(undefined4 *)((int)fVar4 + 0x54) = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)((int)fVar4 + 0x58) = *(undefined4 *)(param_1 + 0x188);
      *(undefined4 *)((int)fVar4 + 0x5c) = *(undefined4 *)(param_1 + 0x18c);
      *(undefined4 *)((int)fVar4 + 0x90) = *(undefined4 *)(param_1 + 0x1b0);
      *(undefined4 *)((int)fVar4 + 0x94) = *(undefined4 *)(param_1 + 0x1b4);
      *(undefined4 *)((int)fVar4 + 0x98) = *(undefined4 *)(param_1 + 0x1b8);
      *(undefined4 *)((int)fVar4 + 0x9c) = *(undefined4 *)(param_1 + 0x1bc);
      *(undefined4 *)((int)fVar4 + 0x70) = *(undefined4 *)(param_1 + 0x100);
      *(undefined4 *)((int)fVar4 + 0x74) = *(undefined4 *)(param_1 + 0x104);
      *(undefined4 *)((int)fVar4 + 0x78) = *(undefined4 *)(param_1 + 0x100);
      if (*(float *)(param_1 + 0x100) <= *(float *)(param_1 + 0x104)) {
        local_124 = *(float *)(param_1 + 0x104);
      }
      else {
        local_124 = *(float *)(param_1 + 0x100);
      }
      local_108 = *(float *)(param_1 + 0x504) * local_124 + *(float *)(param_1 + 0x500);
      D3DXMatrixInverse(local_a0,0,*(int *)((int)fVar4 + 0x334) + 0x10);
      pfVar2 = (float *)((int)fVar4 + 0x150);
      D3DXVec3TransformNormal(pfVar2,param_1 + 400,&fStack_ac);
      *pfVar2 = fStack_70 + *pfVar2;
      *(float *)((int)fVar4 + 0x154) = *(float *)((int)fVar4 + 0x154) + fStack_6c;
      *(float *)((int)fVar4 + 0x158) = fStack_68 + *(float *)((int)fVar4 + 0x158);
      *(float *)((int)fVar4 + 0x160) = local_108;
      *(float *)((int)fVar4 + 0x164) = local_108;
      *(float *)((int)fVar4 + 0x168) = local_108;
      *(undefined4 *)((int)fVar4 + 0x16c) = 0x3f800000;
      if (0.0 < *(float *)(param_1 + 0x518)) {
        FUN_00ee0500();
      }
    }
  }
LAB_00f29083:
  __security_check_cookie(local_14 ^ (uint)auStack_134);
  return;
}

// 00F315B0  esp15::vf04  size=1721  [class]
void __thiscall
esp15::vf04(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 *puStack_100;
  undefined4 *puStack_fc;
  undefined1 *local_f8;
  undefined1 *puStack_f4;
  int iStack_f0;
  undefined1 *local_ec;
  undefined *puStack_e8;
  undefined *puStack_e4;
  undefined1 auStack_d4 [4];
  int iStack_d0;
  int local_c8;
  undefined *local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8 [3];
  undefined1 auStack_ac [8];
  int local_a4;
  undefined1 local_a0 [32];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [56];
  uint uStack_40;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_d4;
  puStack_e4 = param_4;
  puStack_e8 = param_3;
  local_c4 = param_3;
  local_ec = param_2;
  iStack_f0 = 0xf315e4;
  iVar2 = cEspModel::vf04();
  if (iVar2 != 0) {
    puStack_e4 = (undefined *)0xf315f3;
    iVar2 = FUN_00f26e90();
    if (iVar2 != 0) {
      puStack_e4 = (undefined *)0xf31602;
      iVar2 = FUN_00f27000();
      if (iVar2 != 0) {
        puStack_e4 = (undefined *)0xf31615;
        puStack_e4 = (undefined *)FUN_00a81330();
        puStack_e8 = (undefined *)0xf3161d;
        iVar2 = FUN_00ee0710();
        if (iVar2 != 0) {
          puStack_e4 = (undefined *)0xf31630;
          iVar2 = FUN_00a81330();
          if (iVar2 != 0) {
            puStack_e4 = (undefined *)0xf3163f;
            iVar2 = FUN_00a7c800();
            *(undefined **)(param_1 + 0x50c) = param_4;
            puStack_e4 = (undefined *)0xf31653;
            local_a4 = iVar2;
            psVar3 = (short *)FUN_009d4a80();
            if (psVar3 != (short *)0x0) {
              sVar1 = *psVar3;
              if (sVar1 == -1) {
                *(uint *)(param_1 + 0x4fc) = *(uint *)(param_1 + 0x4fc) | 1;
                *(undefined4 *)(param_1 + 0x388) = 0xbf800000;
                *(undefined4 *)(param_1 + 0x4dc) = 0;
              }
              else {
                if (-2 < sVar1) {
                  *(float *)(param_1 + 0x4dc) = (float)(int)sVar1 * 0.001;
                }
                if (*(float *)(param_1 + 0x4dc) == 0.0) {
                  *(undefined4 *)(param_1 + 0x4dc) = 0x4cbebc20;
                }
                *(uint *)(param_1 + 0x4fc) = *(uint *)(param_1 + 0x4fc) | 4;
              }
              *(float *)(param_1 + 0x4e0) = (float)(int)psVar3[1] * 0.001;
              *(float *)(param_1 + 0x4e4) = (float)(int)psVar3[2] * -5e-05;
              *(float *)(param_1 + 0x4e8) = (float)(int)psVar3[3] * 0.002;
              *(float *)(param_1 + 0x4ec) = (float)(int)psVar3[4] * 0.0015;
              *(float *)(param_1 + 0x4f0) = (float)(int)psVar3[5] * -0.045;
              *(float *)(param_1 + 0x4f4) =
                   (float)(int)psVar3[6] * 0.001 + (float)(int)psVar3[6] * 0.001 + 0.8;
              *(float *)(param_1 + 0x4f8) = (float)(int)psVar3[7] * 0.002 + 0.8;
              *(int *)(param_1 + 0x4c4) = (int)(char)psVar3[8];
              local_c8 = (int)*(char *)((int)psVar3 + 0x11);
              *(float *)(param_1 + 0x4d0) = (float)local_c8 * 0.01;
              *(int *)(param_1 + 0x4d4) = (char)psVar3[9] * 10;
              if ((char)psVar3[9] == -1) {
                *(uint *)(param_1 + 0x4fc) = *(uint *)(param_1 + 0x4fc) | 2;
              }
              else if ((char)psVar3[9] < -1) {
                puStack_e4 = &DAT_016db7bc;
                local_ec = (undefined *)0xf3186a;
                puStack_e8 = param_1;
                FUN_009cca90();
                goto LAB_00f3186d;
              }
              local_c8 = (int)*(char *)((int)psVar3 + 0x13);
              *(float *)(param_1 + 0x4d8) = (float)local_c8 * 0.01;
              *(int *)(param_1 + 0x4c8) = (int)(char)psVar3[10];
              *(int *)(param_1 + 0x4cc) = (int)*(char *)((int)psVar3 + 0x15);
              if (*(float *)(param_1 + 0x4f8) == 0.0) {
                *(undefined4 *)(param_1 + 0x4f8) = 0x3f800000;
              }
              puStack_e4 = *(undefined **)(param_1 + 0x4c8);
              if (2 < (int)puStack_e4) {
                puStack_e8 = &DAT_016db7dc;
                iStack_f0 = 0xf31817;
                local_ec = param_1;
                FUN_009cca90();
                *(undefined4 *)(param_1 + 0x4c8) = 0;
              }
              if (((param_1[0x30] & 0x10) == 0) &&
                 (puStack_e4 = *(undefined **)(param_1 + 0x4c4), puStack_e4 != (undefined *)0x0)) {
                if ((int)puStack_e4 < 0xb) {
                  puStack_e4 = (undefined *)0xf3188e;
                  iVar6 = FUN_009d49d0();
                  if (*(char *)(iVar6 + 0x15) == '\0') {
                    puStack_e4 = (undefined *)0xffff;
                    puStack_e8 = (undefined *)0x0;
                    local_ec = (undefined1 *)0xf318a5;
                    uVar4 = FUN_00dde2a0();
                    uVar4 = uVar4 & 0xffff;
                  }
                  else {
                    uVar4 = *(uint *)(param_1 + 0x50c);
                  }
                  if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
                    *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xffffefff;
                  }
                  puStack_e4 = (undefined *)0x0;
                  puStack_e8 = (undefined *)0x0;
                  local_ec = (undefined *)0x0;
                  iStack_f0 = 0;
                  puStack_f4 = (undefined1 *)0x0;
                  local_f8 = (undefined1 *)0x3f800000;
                  puStack_fc = (undefined4 *)0xff;
                  puStack_100 = (undefined1 *)0x0;
                  uVar13 = *(undefined4 *)(param_1 + 0x4c4);
                  uVar7 = *(uint *)(param_1 + 0x6c) | 0x40;
                  uVar12 = *(undefined4 *)(param_1 + 0x74);
                  uVar11 = *(undefined4 *)(param_1 + 0x78);
                  uVar10 = 0;
                  uVar9 = 0;
                  uVar5 = FUN_00a81330(0,0,uVar11,uVar12,uVar7,uVar13,uVar4);
                  FUN_00f42780(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x60),
                               *(undefined4 *)(param_1 + 0x68),param_1 + 0x7c,uVar5,uVar9,uVar10,
                               uVar11,uVar12,uVar7,uVar13,uVar4);
                }
                else {
                  puStack_e8 = &DAT_016db800;
                  iStack_f0 = 0xf3184d;
                  local_ec = param_1;
                  FUN_009cca90();
                }
              }
            }
            puStack_e4 = (undefined *)0xf3192f;
            iVar6 = FUN_009d4ac0();
            if (iVar6 != 0) {
              *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(iVar6 + 0x30);
              *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(iVar6 + 0x34);
              *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(iVar6 + 0x38);
              *(undefined4 *)(param_1 + 0x4bc) = 0x3f800000;
              *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(iVar6 + 0x2c);
              if ((param_1[0x4fc] & 4) != 0) {
                *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(iVar6 + 0x2c);
              }
              if (*(float *)(iVar6 + 0x28) == 0.0) {
                *(ushort *)(param_1 + 0x49e) = *(ushort *)(param_1 + 0x49e) & 0xfffd;
              }
              else {
                *(ushort *)(param_1 + 0x49e) = *(ushort *)(param_1 + 0x49e) | 2;
              }
            }
            *(undefined4 *)(param_1 + 0x508) = 0;
            if (*(int *)(*(int *)(param_1 + 0x28) + 0x1ecc) == 0) {
              *(undefined4 *)(param_1 + 0x4e4) = 0;
            }
            iVar6 = *(int *)(iVar2 + 0x360);
            if (*(int *)(iVar2 + 0x360) == 0) {
              iVar6 = iVar2;
            }
            iStack_f0 = *(short *)(iVar6 + 0x358) * 0x70;
            puStack_e4 = (undefined *)0x0;
            puStack_e8 = (undefined *)0x0;
            local_ec = (undefined1 *)0x10;
            puStack_f4 = (undefined1 *)0xf319e0;
            iVar6 = FUN_00dd29b0();
            *(int *)(param_1 + 0x4c0) = iVar6;
            if (iVar6 == 0) {
              puStack_e4 = &DAT_016db81c;
              local_ec = (undefined1 *)0xf319f5;
              puStack_e8 = param_1;
              FUN_009cca90();
              __security_check_cookie(local_14 ^ (uint)auStack_d4);
              return;
            }
            *(undefined4 *)(iVar2 + 0x90) = *(undefined4 *)(param_1 + 0x1b0);
            *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(param_1 + 0x1b4);
            *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(param_1 + 0x1b8);
            *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(param_1 + 0x1bc);
            puStack_e4 = (undefined *)0xf31a48;
            FUN_00ee0500();
            local_c0 = 0;
            local_bc = 0x3f800000;
            local_b8[0] = 0;
            if (*(int *)(param_1 + 0x50) == 0) {
              puStack_e4 = local_c4;
              puStack_e8 = (undefined *)(iVar2 + 0x10);
              local_ec = local_a0;
              iStack_f0 = 0xf31aa5;
              D3DXMatrixMultiply();
            }
            else {
              puStack_e4 = (undefined *)(*(int *)(param_1 + 0x50) + 0x10);
              puStack_e8 = (undefined *)(iVar2 + 0x10);
              local_ec = local_a0;
              iStack_f0 = 0xf31a71;
              D3DXMatrixMultiply();
              iStack_f0 = iStack_d0;
              local_f8 = auStack_ac;
              puStack_fc = (undefined4 *)0xf31a83;
              puStack_f4 = local_f8;
              D3DXMatrixMultiply();
            }
            puStack_fc = local_b8;
            puStack_100 = auStack_78;
            D3DXMatrixTranspose();
            D3DXVec3TransformNormal(&stack0xffffff20,&stack0xffffff20,auStack_80);
            puStack_f4 = (undefined1 *)
                         ((float)puStack_e8 * (float)puStack_e8 + (float)local_ec * (float)local_ec
                         + (float)puStack_e4 * (float)puStack_e4);
            if ((float)puStack_f4 < 0.0 == ((float)puStack_f4 == 0.0)) {
              FUN_00ddf460(&local_ec,&local_ec);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              local_ec = (undefined1 *)0x0;
              puStack_e8 = (undefined *)0x3f800000;
              puStack_e4 = (undefined *)0x0;
            }
            iVar6 = *(int *)(iVar2 + 0x360);
            if (*(int *)(iVar2 + 0x360) == 0) {
              iVar6 = iVar2;
            }
            if (*(short *)(iVar6 + 0x358) != 0) {
              iVar2 = 0;
              iStack_f0 = (int)*(short *)(iVar6 + 0x358);
              do {
                iVar6 = *(int *)(iStack_d0 + 0x360);
                if (*(int *)(iStack_d0 + 0x360) == 0) {
                  iVar6 = iStack_d0;
                }
                FUN_00ef0480(param_1,iStack_d0,*(int *)(iVar6 + 0x350) + iVar2,&local_ec);
                iVar2 = iVar2 + 0xb0;
                iStack_f0 = iStack_f0 + -1;
              } while (iStack_f0 != 0);
              iStack_f0 = 0;
              iVar2 = iStack_d0;
            }
            fVar8 = (float10)FUN_00dde300(0,0x3f800000);
            *(float *)(param_1 + 0x514) = (float)(fVar8 * (float10)5.0 + (float10)1.0);
            if ((param_1[0x4fc] & 1) == 0) {
              uVar13 = 0x43960000;
            }
            else {
              uVar13 = 0x49127840;
            }
            *(undefined4 *)(param_1 + 0x518) = uVar13;
            puStack_f4 = (undefined1 *)
                         (*(float *)(iVar2 + 0x148) * *(float *)(iVar2 + 0x148) +
                         *(float *)(iVar2 + 0x140) * *(float *)(iVar2 + 0x140) +
                         *(float *)(iVar2 + 0x144) * *(float *)(iVar2 + 0x144));
            fVar8 = (float10)FUN_00fdef70();
            puStack_f4 = (undefined1 *)(float)fVar8;
            *(undefined1 **)(param_1 + 0x500) = puStack_f4;
            *(undefined4 *)(param_1 + 0x504) = 0;
            __security_check_cookie(uStack_40 ^ (uint)&puStack_100);
            return;
          }
        }
      }
    }
  }
LAB_00f3186d:
  __security_check_cookie(local_14 ^ (uint)auStack_d4);
  return;
}


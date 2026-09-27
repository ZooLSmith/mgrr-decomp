// src/misc/esp47.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD540..00F380E0, 8 functions

#include "mgrr.h"
#include "esp47.h"

// 00ECD540  esp47::esp47  size=29  [class]
undefined4 * __fastcall esp47::esp47(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  FUN_00a7c930();
  return param_1;
}

// 00ED0B80  esp47::vf00  size=30  [class]
undefined4 __thiscall esp47::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EDA190  esp47::vf10  size=1  [class]
void esp47::vf10(void)

{
  return;
}

// 00EF5AB0  esp47::vf14  size=82  [class]
void __fastcall esp47::vf14(int param_1)

{
  int extraout_ECX;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x450) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x450));
    *(undefined4 *)(param_1 + 0x450) = 0;
    iVar1 = extraout_ECX;
  }
  if (*(int *)(param_1 + 0x458) != 0) {
    uVar2 = 0x50000;
    iVar3 = param_1;
    FUN_00a7c940(param_1 + 0x45c);
    FUN_009d5aa0(iVar1,uVar2,iVar3);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  return;
}

// 00EF5B10  FUN_00ef5b10  size=397  [callgraph]
undefined4 __fastcall FUN_00ef5b10(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  
  if (*(int *)(param_1 + 0x450) == 0) {
    if (*(int *)(param_1 + 0x454) < 1) {
      FUN_009cca90(param_1,&DAT_016dd2c8);
      return 0;
    }
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c800();
      if (iVar3 == 0) {
        FUN_009cca90(param_1,&DAT_016dd2e4);
        return 0;
      }
      *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4;
      fVar8 = (float10)FUN_00fdef70();
      *(float *)(param_1 + 0x460) = (float)fVar8;
      iVar4 = *(int *)(iVar3 + 0x360);
      if (*(int *)(iVar3 + 0x360) == 0) {
        iVar4 = iVar3;
      }
      uVar2 = *(uint *)(param_1 + 0x454);
      if ((int)*(short *)(iVar4 + 0x358) < (int)uVar2) {
        FUN_009cca90(param_1,&DAT_016dd310);
        return 0;
      }
      iVar4 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar2 * 0x30 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar2 * 0x30),&DAT_01b7bdf8);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        FUN_00401040(iVar4,0x30,uVar2,&LAB_00ec8390);
      }
      *(int *)(param_1 + 0x450) = iVar4;
      if (iVar4 == 0) {
        FUN_009cca90(param_1,&DAT_016dd348);
      }
      else {
        iVar4 = (int)*(short *)(iVar3 + 0x324);
        if (0 < iVar4) {
          iVar6 = 0;
          if (0 < iVar4) {
            iVar7 = 0;
            do {
              if ((((-1 < iVar6) && (iVar6 < *(short *)(iVar3 + 0x324))) &&
                  (iVar5 = *(int *)(iVar3 + 800) + iVar7, iVar5 != 0)) &&
                 (*(int *)(param_1 + 0x454) <= iVar6)) {
                puVar1 = (uint *)(iVar5 + 0x38);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              iVar6 = iVar6 + 1;
              iVar7 = iVar7 + 0x70;
            } while (iVar6 < iVar4);
          }
          return 1;
        }
      }
      return 0;
    }
  }
  else {
    FUN_009cca90(param_1,&DAT_016dd298);
  }
  return 0;
}

// 00EF5CA0  FUN_00ef5ca0  size=1833  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00ef6028) */
/* WARNING: Removing unreachable block (ram,0x00ef607d) */
/* WARNING: Removing unreachable block (ram,0x00ef60be) */

undefined4 __fastcall FUN_00ef5ca0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float local_108;
  float local_104;
  float local_100;
  int local_fc;
  int local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_74;
  undefined4 local_64;
  undefined4 local_54;
  float local_44;
  float local_34;
  float local_24;
  float local_14;
  
  local_100 = 0.0;
  local_108 = 0.0;
  local_f4 = 0.0;
  local_104 = 1.0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar8 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar8 != (undefined4 *)0x0)) {
    pfVar7 = (float *)*puVar8;
    if ((float *)((int)pfVar7 + 0xfU & 0xfffffff0) != pfVar7) {
      uVar9 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar9);
    }
    if (pfVar7 != (float *)0x0) {
      local_f0 = *pfVar7;
      local_ec = pfVar7[1];
      local_e8 = pfVar7[2];
      local_d0 = pfVar7[3];
      local_cc = pfVar7[4];
      local_c8 = pfVar7[5];
      local_e0 = pfVar7[6];
      local_dc = pfVar7[7];
      local_d8 = pfVar7[8];
      local_100 = pfVar7[9];
      local_108 = pfVar7[10];
      local_f4 = pfVar7[0xb];
      local_104 = pfVar7[0xc];
      if (local_104 == 0.0) {
        local_104 = 1.0;
      }
      goto LAB_00ef5d73;
    }
  }
  local_f0 = 0.0;
  local_ec = 0.0;
  local_e8 = 0.0;
  local_d0 = 0.0;
  local_cc = 0.0;
  local_c8 = 0.0;
  local_e0 = 0.0;
  local_dc = 0.0;
  local_d8 = 0.0;
LAB_00ef5d73:
  iVar10 = FUN_00a81330();
  if (iVar10 != 0) {
    iVar10 = FUN_00a7c800();
    if (iVar10 != 0) {
      local_f8 = 0;
      if (0 < *(int *)(param_1 + 0x454)) {
        local_fc = 0;
        iVar15 = 0;
        do {
          iVar11 = iVar10;
          if (*(int *)(iVar10 + 0x360) != 0) {
            iVar11 = *(int *)(iVar10 + 0x360);
          }
          if (((local_f8 < 0) || (*(short *)(iVar11 + 0x358) <= local_f8)) ||
             (iVar11 = *(int *)(iVar11 + 0x350) + local_fc, iVar11 == 0)) {
            FUN_009cca90(param_1,&DAT_016dd3b8);
            return 0;
          }
          *(int *)(iVar15 + *(int *)(param_1 + 0x450)) = iVar11;
          fVar16 = (float10)FUN_00dde300(-local_f0,local_f0);
          fVar17 = (float10)FUN_00dde300(-local_ec,local_ec);
          fVar18 = (float10)FUN_00dde300(-local_e8,local_e8);
          fVar19 = (float10)FUN_00dde300(-local_d0 * 0.017453292,local_d0 * 0.017453292);
          fVar20 = (float10)FUN_00dde300(-local_cc * 0.017453292,local_cc * 0.017453292);
          fVar21 = (float10)FUN_00dde300(-local_c8 * 0.017453292,local_c8 * 0.017453292);
          fVar22 = (float10)FUN_00dde300(0,local_100);
          fVar23 = (float10)FUN_00dde300(0,local_100);
          fVar24 = (float10)FUN_00dde300(0,local_100);
          iVar11 = *(int *)(param_1 + 0x24);
          fVar1 = *(float *)(iVar11 + 0x1c);
          fVar2 = *(float *)(iVar11 + 0x20);
          fVar3 = *(float *)(iVar11 + 0x24);
          fVar4 = *(float *)(iVar11 + 0x28);
          fVar5 = *(float *)(iVar11 + 0x2c);
          fVar6 = *(float *)(iVar11 + 0x30);
          uVar12 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
          *(uint *)(param_1 + 0x114) = uVar12;
          uVar13 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
          *(uint *)(param_1 + 0x114) = uVar13;
          uVar14 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
          *(uint *)(param_1 + 0x114) = uVar14;
          fVar25 = (float10)FUN_00dde300(-local_e0 * 0.017453292,local_e0 * 0.017453292);
          fVar26 = (float10)FUN_00dde300(-local_dc * 0.017453292,local_dc * 0.017453292);
          fVar27 = (float10)FUN_00dde300(-local_d8 * 0.017453292,local_d8 * 0.017453292);
          iVar11 = *(int *)(iVar15 + *(int *)(param_1 + 0x450));
          *(float *)(iVar11 + 0x50) = (float)fVar16;
          local_fc = local_fc + 0xb0;
          *(float *)(iVar11 + 0x54) = (float)fVar17;
          *(float *)(iVar11 + 0x58) = (float)fVar18;
          *(undefined4 *)(iVar11 + 0x5c) = local_64;
          iVar11 = *(int *)(iVar15 + *(int *)(param_1 + 0x450));
          *(float *)(iVar11 + 0x90) = (float)fVar19;
          *(float *)(iVar11 + 0x94) = (float)fVar20;
          *(float *)(iVar11 + 0x98) = (float)fVar21;
          *(undefined4 *)(iVar11 + 0x9c) = local_54;
          iVar11 = *(int *)(*(int *)(param_1 + 0x450) + iVar15);
          *(float *)(iVar11 + 0x70) =
               (float)(fVar22 + (float10)local_108) + *(float *)(iVar11 + 0x70);
          *(float *)(iVar11 + 0x74) =
               *(float *)(iVar11 + 0x74) + (float)(fVar23 + (float10)local_108);
          *(float *)(iVar11 + 0x78) =
               *(float *)(iVar11 + 0x78) + (float)(fVar24 + (float10)local_108);
          *(float *)(iVar11 + 0x7c) = *(float *)(iVar11 + 0x7c) + local_34;
          pfVar7 = (float *)(iVar15 + 0x10 + *(int *)(param_1 + 0x450));
          *pfVar7 = (1.0 - (float)(uVar12 >> 8) * 5.960465e-08 * 2.0) * fVar4 + fVar1;
          pfVar7[1] = (1.0 - (float)(uVar13 >> 8) * 5.960465e-08 * 2.0) * fVar5 + fVar2;
          pfVar7[2] = (1.0 - (float)(uVar14 >> 8) * 5.960465e-08 * 2.0) * fVar6 + fVar3;
          pfVar7[3] = local_44 + local_74 * local_24;
          pfVar7 = (float *)(iVar15 + 0x20 + *(int *)(param_1 + 0x450));
          *pfVar7 = (float)fVar25;
          pfVar7[1] = (float)fVar26;
          pfVar7[2] = (float)fVar27;
          pfVar7[3] = local_14;
          *(float *)(iVar15 + 4 + *(int *)(param_1 + 0x450)) = local_f4;
          local_f8 = local_f8 + 1;
          *(float *)(iVar15 + 8 + *(int *)(param_1 + 0x450)) = local_104;
          iVar15 = iVar15 + 0x30;
        } while (local_f8 < *(int *)(param_1 + 0x454));
      }
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016dd38c);
  }
  return 0;
}

// 00F1D0E0  esp47::vf08  size=524  [class]
void __fastcall esp47::vf08(int param_1)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  float10 fVar7;
  undefined1 auStack_84 [8];
  float local_7c;
  float local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  int *local_68;
  undefined4 local_64;
  undefined1 local_60 [48];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_84;
  piVar4 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar4);
  FUN_00f0b530(piVar4);
  iVar6 = 0;
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar4 = 0;
  }
  else {
    *piVar4 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar4);
  FUN_00efbd40(piVar4);
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) goto LAB_00f1d2da;
  piVar4 = (int *)FUN_00a7c800();
  FUN_00f093b0(piVar4);
  FUN_00f09190(piVar4);
  FUN_00ec6df0();
  local_6c = *(undefined4 *)(param_1 + 0x24);
  local_78 = 0.0;
  local_64 = *(undefined4 *)(param_1 + 0x464);
  local_68 = piVar4 + 4;
  local_74 = 0;
  local_70 = param_1;
  if (0 < *(int *)(param_1 + 0x454)) {
    do {
      FUN_00eca280(&local_70);
      iVar3 = *(int *)(iVar6 + *(int *)(param_1 + 0x450));
      local_7c = *(float *)(iVar3 + 0x58) * *(float *)(iVar3 + 0x58) +
                 *(float *)(iVar3 + 0x50) * *(float *)(iVar3 + 0x50) +
                 *(float *)(iVar3 + 0x54) * *(float *)(iVar3 + 0x54);
      fVar7 = (float10)FUN_00fdef70();
      local_7c = (float)fVar7;
      if (local_78 < local_7c) {
        local_78 = local_7c;
      }
      local_74 = local_74 + 1;
      iVar6 = iVar6 + 0x30;
    } while (local_74 < *(int *)(param_1 + 0x454));
  }
  if (*(float *)(param_1 + 0x460) < local_78) {
    local_7c = local_78 * 1.2;
    D3DXMatrixInverse(local_60,0,piVar4[0xcd] + 0x10);
    pfVar1 = (float *)(piVar4 + 0x54);
    D3DXVec3TransformNormal(pfVar1,param_1 + 400,&local_6c);
    *pfVar1 = *pfVar1 + fStack_30;
    piVar4[0x55] = (int)((float)piVar4[0x55] + fStack_2c);
    piVar4[0x56] = (int)((float)piVar4[0x56] + fStack_28);
    piVar4[0x58] = (int)local_7c;
    piVar4[0x59] = (int)local_7c;
    piVar4[0x5a] = (int)local_7c;
    piVar4[0x5b] = 0x3f800000;
  }
  piVar4[0xd9] = piVar4[0xd9] | 0x10000;
  iVar6 = FUN_009d5b00(param_1);
  if (iVar6 == 0) {
LAB_00f1d2b1:
    pcVar5 = *(code **)(*piVar4 + 0x20);
  }
  else {
    iVar6 = FUN_009d58f0(param_1);
    if (iVar6 == 0) {
      bVar2 = *(byte *)(param_1 + 0x38) & 8;
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x38) & 4;
    }
    if (bVar2 != 0) goto LAB_00f1d2b1;
    pcVar5 = *(code **)(*piVar4 + 0x1c);
  }
  (*pcVar5)();
LAB_00f1d2da:
  __security_check_cookie(local_14 ^ (uint)auStack_84);
  return;
}

// 00F380E0  esp47::vf04  size=224  [class]
undefined4 __thiscall
esp47::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00f2c2d0();
  if (iVar2 == 0) {
    FUN_009cca90(param_1,&DAT_016dd208);
    return 0;
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar3 != (undefined4 *)0x0)) {
    psVar1 = (short *)*puVar3;
    if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
      uVar4 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (psVar1 != (short *)0x0) {
      if (*psVar1 < 0) {
        FUN_009cca90(param_1,&DAT_016dd228);
        return 0;
      }
      *(int *)(param_1 + 0x454) = (int)*psVar1;
      *(int *)(param_1 + 0x464) = (int)*(char *)((int)psVar1 + 0x13);
      iVar2 = FUN_00ef5b10();
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_00ef5ca0();
      if (iVar2 == 0) {
        return 0;
      }
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffbfff;
      return 1;
    }
  }
  FUN_009cca90(param_1,&DAT_016dd248);
  return 0;
}


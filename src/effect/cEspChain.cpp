// src/effect/cEspChain.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD5E0..00F2E180, 26 functions

#include "mgrr.h"
#include "cEspChain.h"

// 00ECD5E0  cEspChain::cEspChain  size=18  [class]
undefined4 * __fastcall cEspChain::cEspChain(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ECD6E0  cEspChain::vf00  size=30  [class]
undefined4 __thiscall cEspChain::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EE2020  FUN_00ee2020  size=395  [callgraph]
undefined4 __fastcall FUN_00ee2020(int param_1)

{
  short sVar1;
  short sVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  *(undefined4 *)(param_1 + 0x4c0) = 0x10001;
  *(undefined4 *)(param_1 + 0x4c4) = 1;
  *(undefined2 *)(param_1 + 0x4c8) = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar5 != (undefined4 *)0x0)) {
    puVar3 = (undefined2 *)*puVar5;
    if ((undefined2 *)((int)puVar3 + 0xfU & 0xfffffff0) != puVar3) {
      uVar6 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if (puVar3 != (undefined2 *)0x0) {
      *(undefined2 *)(param_1 + 0x4c2) = *puVar3;
      *(undefined2 *)(param_1 + 0x4c0) = puVar3[1];
      sVar1 = puVar3[2];
      *(short *)(param_1 + 0x4c4) = sVar1;
      *(undefined2 *)(param_1 + 0x4c6) = puVar3[3];
      sVar2 = puVar3[4];
      *(short *)(param_1 + 0x4c8) = sVar2;
      if ((((*(short *)(param_1 + 0x4c2) < 1) || (*(short *)(param_1 + 0x4c0) < 1)) || (sVar1 < 0))
         || ((*(short *)(param_1 + 0x4c6) < 0 || (sVar2 < 0)))) {
        return 0;
      }
    }
  }
  if (*(short *)(param_1 + 0x4c4) == 0) {
    *(int *)(param_1 + 0x494) = *(short *)(param_1 + 0x4c2) + 1;
  }
  else {
    *(int *)(param_1 + 0x494) =
         (int)*(short *)(param_1 + 0x4c2) / (int)*(short *)(param_1 + 0x4c4) + 1;
  }
  iVar8 = (int)*(short *)(param_1 + 0x4c0) * *(int *)(param_1 + 0x494);
  iVar4 = iVar8 * 0xc;
  *(int *)(param_1 + 0x494) = iVar8;
  *(int *)(param_1 + 0x4b0) = iVar8;
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  iVar7 = FUN_00dd29b0(iVar8 * 0x3c,0x20,0,0);
  *(int *)(param_1 + 0x490) = iVar7;
  if (iVar7 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x498) = iVar7;
  *(int *)(param_1 + 0x49c) = iVar7 + iVar4;
  iVar7 = iVar7 + iVar4 + iVar4;
  *(int *)(param_1 + 0x4a0) = iVar7;
  iVar7 = iVar7 + iVar4;
  *(int *)(param_1 + 0x4a4) = iVar7;
  iVar7 = iVar7 + iVar8 * 0x10;
  *(int *)(param_1 + 0x4a8) = iVar7;
  *(int *)(param_1 + 0x4ac) = iVar7 + iVar8 * 4;
  return 1;
}

// 00EE21B0  FUN_00ee21b0  size=71  [callgraph]
void __fastcall FUN_00ee21b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0;
  if (*(int *)(param_1 + 0x490) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x490),0);
    *(undefined4 *)(param_1 + 0x490) = 0;
  }
  return;
}

// 00EE2200  cEspChain::vf14  size=71  [class]
void __fastcall cEspChain::vf14(int param_1)

{
  *(undefined4 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0;
  if (*(int *)(param_1 + 0x490) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x490),0);
    *(undefined4 *)(param_1 + 0x490) = 0;
  }
  return;
}

// 00EE2250  cEspChain::vf1C  size=637  [class]
/* WARNING: Removing unreachable block (ram,0x00ee23b0) */
/* WARNING: Removing unreachable block (ram,0x00ee2412) */

void __thiscall cEspChain::vf1C(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  float local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  int local_88;
  uint local_84 [33];
  
  local_84[0x20] = DAT_018e8764 ^ (uint)&local_98;
  local_84[0] = 0;
  local_84[1] = 0;
  local_84[2] = 0x3f800000;
  local_84[5] = 0x3f800000;
  local_84[6] = 0x3f800000;
  local_88 = param_2;
  local_84[7] = 0x3f800000;
  local_84[8] = 0x3f800000;
  local_84[0xc] = 0x3f800000;
  local_84[0xd] = 0x3f800000;
  local_84[0xf] = 0x3f800000;
  local_84[0x11] = 0x3f800000;
  local_84[0x12] = 0x3f800000;
  local_84[0x13] = 0x3f800000;
  local_84[0x16] = 0x3f800000;
  local_84[0x18] = 0x3f800000;
  local_84[0x19] = 0x3f800000;
  local_84[0x1b] = 0x3f800000;
  local_84[0x1c] = 0x3f800000;
  local_84[3] = 0;
  local_84[4] = 0;
  local_84[9] = 0;
  local_84[10] = 0;
  local_84[0xb] = 0;
  local_84[0xe] = 0;
  local_84[0x10] = 0;
  local_84[0x14] = 0;
  local_84[0x15] = 0;
  local_84[0x17] = 0;
  local_84[0x1a] = 0;
  local_84[0x1d] = 0;
  local_84[0x1e] = 0;
  local_84[0x1f] = 0;
  local_90 = (uint)((*(uint *)(param_1 + 0x38) & 0x80000) != 0);
  if ((*(uint *)(param_1 + 0x38) & 0x40000) != 0) {
    local_90 = local_90 | 2;
  }
  iVar4 = FUN_00f99ca0();
  iVar5 = *(int *)(param_1 + 0x4b0);
  if (*(int *)(param_2 + 0x1c) != 0) {
    puVar6 = (uint *)(iVar4 + 0x10);
    local_8c = (*(int *)(param_2 + 0x1c) - 1U >> 2) + 1;
    do {
      uVar7 = local_90;
      FUN_00ddbbb0();
      FUN_00ddbbd0(*(undefined4 *)(*(int *)(param_1 + 0x4ac) + iVar5 * 4));
      if ((*(uint *)(param_1 + 0x38) & 0x20000) != 0) {
        local_94 = local_94 * 0x19660d + 0x3c6ef35f;
        fVar3 = (float)(local_94 >> 8) * 5.960465e-08;
        local_98 = 1.0 - (fVar3 + fVar3);
        if (0.0 <= local_98) {
          uVar7 = local_90 & 0xfffffffe;
        }
        else {
          uVar7 = local_90 | 1;
        }
      }
      if ((*(uint *)(param_1 + 0x38) & 0x10000) != 0) {
        local_94 = local_94 * 0x19660d + 0x3c6ef35f;
        fVar3 = (float)(local_94 >> 8) * 5.960465e-08;
        local_98 = 1.0 - (fVar3 + fVar3);
        if (0.0 <= local_98) {
          uVar7 = uVar7 & 0xfffffffd;
        }
        else {
          uVar7 = uVar7 | 2;
        }
      }
      uVar1 = local_84[uVar7 * 8 + 1];
      puVar6[-4] = local_84[uVar7 * 8];
      uVar2 = local_84[uVar7 * 8 + 2];
      puVar6[-3] = uVar1;
      uVar1 = local_84[uVar7 * 8 + 3];
      puVar6[-2] = uVar2;
      uVar2 = local_84[uVar7 * 8 + 4];
      puVar6[-1] = uVar1;
      uVar1 = local_84[uVar7 * 8 + 5];
      *puVar6 = uVar2;
      uVar2 = local_84[uVar7 * 8 + 6];
      puVar6[1] = uVar1;
      uVar7 = local_84[uVar7 * 8 + 7];
      puVar6[2] = uVar2;
      puVar6[3] = uVar7;
      iVar5 = (iVar5 + 1) % *(int *)(param_1 + 0x494);
      FUN_00ddbbc0();
      puVar6 = puVar6 + 8;
      local_8c = local_8c + -1;
    } while (local_8c != 0);
    local_8c = 0;
  }
  FUN_00f99d30();
  __security_check_cookie(local_84[0x20] ^ (uint)&local_98);
  return;
}

// 00EE24D0  cEspChain::vf28  size=102  [class]
void cEspChain::vf28(int param_1)

{
  int iVar1;
  short *psVar2;
  short sVar3;
  
  iVar1 = FUN_00f999c0();
  if (*(int *)(param_1 + 0x18) != 0) {
    psVar2 = (short *)(iVar1 + 4);
    sVar3 = 2;
    iVar1 = (*(int *)(param_1 + 0x18) - 1U) / 6 + 1;
    do {
      psVar2[-2] = sVar3 + -2;
      psVar2[-1] = sVar3 + -1;
      *psVar2 = sVar3;
      psVar2[1] = sVar3 + 1;
      psVar2[2] = sVar3;
      psVar2[3] = sVar3 + -1;
      psVar2 = psVar2 + 6;
      sVar3 = sVar3 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00f99a40();
  return;
}

// 00EFFF50  FUN_00efff50  size=807  [callgraph]
void __thiscall
FUN_00efff50(int param_1,int param_2,int param_3,int param_4,float param_5,float param_6)

{
  int iVar1;
  undefined1 *puVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  undefined1 *puStack_f4;
  undefined4 *puStack_f0;
  float *pfStack_ec;
  float *pfStack_e8;
  float fStack_e4;
  undefined4 *puStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 *puStack_c4;
  undefined4 uStack_c0;
  float local_b8;
  undefined1 *local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined1 auStack_94 [4];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&puStack_d4;
  local_a4 = param_5;
  if (param_2 != 0) {
    iVar4 = param_3 + 0x40;
    local_b4 = (undefined1 *)(*(float *)(param_1 + 0x100) * 0.5);
    pfStack_e8 = &local_d0;
    pfStack_ec = &local_a0;
    local_b0 = *(float *)(param_1 + 0x104) * 0.5;
    local_d0 = -(float)local_b4;
    local_cc = -local_b0;
    local_c8 = -param_6;
    puStack_f0 = (undefined4 *)0xefffea;
    fStack_e4 = (float)iVar4;
    local_b8 = local_c8;
    local_ac = local_d0;
    local_a8 = local_cc;
    D3DXVec3TransformNormal();
    puVar2 = local_b4;
    local_ac = *(float *)(param_3 + 0x70) + local_ac;
    puStack_f4 = &stack0xffffff24;
    local_a8 = *(float *)(param_3 + 0x74) + local_a8;
    local_a4 = *(float *)(param_3 + 0x78) + local_a4;
    puStack_d4 = puStack_c4;
    puStack_f0 = (undefined4 *)iVar4;
    D3DXVec3TransformNormal(&fStack_9c);
    local_a8 = local_a8 + *(float *)(param_3 + 0x70);
    local_a4 = *(float *)(param_3 + 0x74) + local_a4;
    local_a0 = *(float *)(param_3 + 0x78) + local_a0;
    pfStack_e8 = (float *)puStack_c4;
    fStack_e4 = local_c8;
    D3DXVec3TransformNormal(&fStack_98,&pfStack_e8,iVar4);
    local_a4 = local_a4 + *(float *)(param_3 + 0x70);
    local_a0 = *(float *)(param_3 + 0x74) + local_a0;
    fStack_9c = *(float *)(param_3 + 0x78) + fStack_9c;
    puStack_f4 = puVar2;
    puStack_f0 = puStack_d4;
    pfStack_ec = (float *)uStack_c0;
    D3DXVec3TransformNormal(auStack_94,&puStack_f4,iVar4);
    fStack_70 = fStack_70 + *(float *)(param_3 + 0x70);
    iVar4 = *(int *)(param_1 + 0x4b0);
    fStack_6c = *(float *)(param_3 + 0x74) + fStack_6c;
    fStack_68 = *(float *)(param_3 + 0x78) + fStack_68;
    if (0 < (int)local_a4) {
      iVar5 = ((int)local_a4 - 1U >> 2) + 1;
      pfVar3 = (float *)(param_4 + 0x14);
      do {
        local_d0 = *(float *)(param_2 + iVar4 * 0xc);
        iVar1 = param_2 + iVar4 * 0xc;
        local_cc = *(float *)(iVar1 + 4);
        local_c8 = *(float *)(iVar1 + 8);
        fStack_60 = local_d0 + local_a0;
        fStack_5c = local_cc + fStack_9c;
        fStack_58 = local_c8 + fStack_98;
        fStack_50 = fStack_90 + local_d0;
        fStack_4c = fStack_8c + local_cc;
        fStack_48 = fStack_88 + local_c8;
        fStack_40 = fStack_80 + local_d0;
        fStack_3c = fStack_7c + local_cc;
        fStack_38 = fStack_78 + local_c8;
        fStack_30 = fStack_70 + local_d0;
        fStack_2c = local_cc + fStack_6c;
        fStack_28 = local_c8 + fStack_68;
        pfVar3[-5] = fStack_60;
        pfVar3[-4] = fStack_5c;
        pfVar3[-3] = fStack_58;
        pfVar3[-2] = fStack_50;
        pfVar3[-1] = fStack_4c;
        *pfVar3 = fStack_48;
        pfVar3[1] = fStack_40;
        pfVar3[2] = fStack_3c;
        pfVar3[3] = fStack_38;
        pfVar3[4] = fStack_30;
        pfVar3[5] = fStack_2c;
        pfVar3[6] = fStack_28;
        iVar4 = (iVar4 + 1) % *(int *)(param_1 + 0x494);
        iVar5 = iVar5 + -1;
        pfVar3 = pfVar3 + 0xc;
      } while (iVar5 != 0);
    }
  }
  __security_check_cookie(local_14 ^ (uint)&puStack_d4);
  return;
}

// 00F00280  cEspChain::vf24  size=736  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall cEspChain::vf24(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_18 = 1.0;
  local_28 = *(float *)(param_1 + 0x124);
  if (((*(byte *)(param_1 + 0x33) & 1) == 0) && ((DAT_01bea070._3_1_ & 1) == 0)) {
    local_18 = _DAT_018d5df0;
  }
  iVar9 = *(int *)(param_1 + 0x84);
  local_20 = local_18;
  local_1c = local_18;
  if ((iVar9 != 0) && ((*(byte *)(iVar9 + 0x68) & 8) != 0)) {
    local_20 = *(float *)(iVar9 + 0x30) * local_18;
    local_1c = *(float *)(iVar9 + 0x34) * local_18;
    local_18 = *(float *)(iVar9 + 0x38) * local_18;
    local_28 = *(float *)(iVar9 + 0x3c) * local_28;
  }
  cVar1 = *(char *)(param_1 + 0x440);
  if ((((cVar1 == '\x06') || (cVar1 == '\n')) || (cVar1 == '\f')) || (cVar1 == '\x0f')) {
    local_20 = local_28 * local_20;
    local_1c = local_1c * local_28;
    local_18 = local_18 * local_28;
    if (cVar1 == '\x0f') {
      local_28 = 1.0;
    }
    else if ((*(int *)(param_1 + 0x58) == 0) ||
            (puVar7 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar7 == (uint *)0x0)) {
      local_28 = fRam00000028 * 0.5 * local_28;
    }
    else {
      uVar2 = *puVar7;
      if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
        uVar8 = FUN_00f59ed0(3);
        FUN_00dd5650(&DAT_016597b4,uVar8);
      }
      local_28 = *(float *)(uVar2 + 0x28) * 0.5 * local_28;
    }
  }
  if (*(char *)(param_1 + 0x440) == '\x0f') {
    iVar9 = FUN_00f99ca0();
    iVar12 = (*(int *)(param_1 + 0x4b0) + 1) % *(int *)(param_1 + 0x494);
    if (*(int *)(param_2 + 0x1c) != 0) {
      iVar13 = (*(int *)(param_2 + 0x1c) - 1U >> 2) + 1;
      pfVar11 = (float *)(iVar9 + 0x18);
      do {
        pfVar10 = (float *)(iVar12 * 0x10 + *(int *)(param_1 + 0x4a4));
        fVar5 = *pfVar10 * local_20;
        fVar4 = pfVar10[1] * local_1c;
        fVar3 = pfVar10[2] * local_18;
        pfVar11[-6] = fVar5;
        pfVar11[-5] = fVar4;
        pfVar11[-4] = fVar3;
        pfVar11[-3] = 1.0;
        pfVar11[-2] = fVar5;
        pfVar11[-1] = fVar4;
        *pfVar11 = fVar3;
        pfVar11[1] = 1.0;
        pfVar11[2] = fVar5;
        pfVar11[3] = fVar4;
        pfVar11[4] = fVar3;
        pfVar11[5] = 1.0;
        pfVar11[6] = fVar5;
        pfVar11[7] = fVar4;
        pfVar11[8] = fVar3;
        pfVar11[9] = 1.0;
        iVar12 = (iVar12 + 1) % *(int *)(param_1 + 0x494);
        iVar13 = iVar13 + -1;
        pfVar11 = pfVar11 + 0x10;
      } while (iVar13 != 0);
    }
  }
  else {
    iVar12 = FUN_00f99ca0();
    iVar9 = *(int *)(param_1 + 0x4b0);
    if (*(int *)(param_2 + 0x1c) != 0) {
      iVar13 = (*(int *)(param_2 + 0x1c) - 1U >> 2) + 1;
      pfVar11 = (float *)(iVar12 + 0x18);
      do {
        pfVar10 = (float *)(iVar9 * 0x10 + *(int *)(param_1 + 0x4a4));
        fVar5 = *pfVar10 * local_20;
        fVar4 = pfVar10[1] * local_1c;
        fVar3 = pfVar10[2] * local_18;
        fVar6 = pfVar10[3] * local_28;
        pfVar11[-6] = fVar5;
        pfVar11[-5] = fVar4;
        pfVar11[-4] = fVar3;
        pfVar11[-3] = fVar6;
        pfVar11[1] = fVar6;
        pfVar11[-2] = fVar5;
        pfVar11[-1] = fVar4;
        *pfVar11 = fVar3;
        pfVar11[2] = fVar5;
        pfVar11[3] = fVar4;
        pfVar11[4] = fVar3;
        pfVar11[5] = fVar6;
        pfVar11[9] = fVar6;
        pfVar11[6] = fVar5;
        pfVar11[7] = fVar4;
        pfVar11[8] = fVar3;
        iVar9 = (iVar9 + 1) % *(int *)(param_1 + 0x494);
        iVar13 = iVar13 + -1;
        pfVar11 = pfVar11 + 0x10;
      } while (iVar13 != 0);
    }
  }
  FUN_00f99d30();
  return;
}

// 00F00560  FUN_00f00560  size=337  [callgraph]
undefined4 __thiscall FUN_00f00560(int param_1,int param_2,float param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  fVar1 = (float)(int)*(short *)(param_4 + 0xea);
  fVar2 = param_3 + 1.0;
  if (fVar2 <= 0.0001) {
    fVar2 = 0.0001;
  }
  if (fVar2 <= fVar1) {
    *(float *)(param_2 + 0xc) = (fVar2 / fVar1) * *(float *)(param_5 + 0xc);
    return 1;
  }
  if (*(char *)(param_4 + 0x79) == '\0') {
    uVar3 = FUN_00ee2540(param_2,param_3,param_4,param_5);
    return uVar3;
  }
  if (*(char *)(param_4 + 0x79) != '\x01') {
    return 1;
  }
  if (((float)(int)*(short *)(param_4 + 0xea) + (float)(int)*(short *)(param_4 + 0xe8) < param_3) &&
     ((float)(int)*(short *)(param_4 + 0xe8) != 0.0)) {
    fVar1 = *(float *)(param_4 + 0x144);
    *(float *)(param_2 + 0xc) =
         (fVar1 / ((*(float *)(param_1 + 0x110) - fVar1 * *(float *)(param_1 + 0x110)) + fVar1)) *
         *(float *)(param_2 + 0xc);
    return 1;
  }
  uVar3 = FUN_00ee2800(param_2,param_3,param_4,param_5);
  return uVar3;
}

// 00F0B530  FUN_00f0b530  size=438  [callgraph]
void __thiscall FUN_00f0b530(int param_1,undefined4 *param_2)

{
  float fVar1;
  uint *puVar2;
  float *pfVar3;
  int iVar4;
  
  if ((((*(byte *)(param_1 + 0x6c) & 1) == 0) && ((*(byte *)(param_1 + 0x38) & 2) == 0)) &&
     ((*(uint *)(param_1 + 0x30) & 0x2000) == 0)) {
    fVar1 = (float)param_2[7];
  }
  else {
    fVar1 = (float)param_2[9];
  }
  *(float *)(param_1 + 0x110) = fVar1 * (float)param_2[8];
  if (((*(int *)(param_1 + 0x50) != 0) && (*(short *)(param_1 + 0x400) != -1)) &&
     (fVar1 = (float)(int)*(short *)(param_1 + 0x400),
     fVar1 < *(float *)(param_1 + 0x118) != (fVar1 == *(float *)(param_1 + 0x118)))) {
    FUN_00edc5c0(*param_2);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  iVar4 = FUN_00edb270(param_2);
  if ((iVar4 == 0) || (*(float *)(param_1 + 0x11c) == 0.0)) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x1000000;
  }
  else {
    puVar2 = (uint *)param_2[1];
    if ((*puVar2 & 0x4000000) != 0) {
      FUN_00edfda0(param_2);
    }
    if ((*puVar2 & 0x40000000) != 0) {
      FUN_00f0afe0(param_2);
    }
    FUN_00edffc0(param_2);
    iVar4 = param_2[6];
    if (((iVar4 != 0) && ((*(byte *)(iVar4 + 0x68) & 0x40) != 0)) &&
       ((*(uint *)(param_1 + 0x3c) & 0x40000) == 0)) {
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(iVar4 + 0x40);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(iVar4 + 0x44);
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(iVar4 + 0x48);
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(iVar4 + 0x4c);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x4000;
    }
    FUN_00ef8ed0(param_2);
    FUN_00ef9850(param_2);
    FUN_00efa160(param_2);
    if ((*(int *)(param_1 + 0x50) == 0) && (pfVar3 = (float *)param_2[4], pfVar3 != (float *)0x0)) {
      *(float *)(param_1 + 0x180) = *(float *)(param_1 + 0x180) + *pfVar3;
      *(float *)(param_1 + 0x184) = pfVar3[1] + *(float *)(param_1 + 0x184);
      *(float *)(param_1 + 0x188) = pfVar3[2] + *(float *)(param_1 + 0x188);
      *(float *)(param_1 + 0x18c) = pfVar3[3] + *(float *)(param_1 + 0x18c);
    }
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) & 0xfeffffff;
  }
  if (*(int *)(param_1 + 0x380) != 0) {
    FUN_00f0b110(param_2);
  }
  if (*(float *)(param_1 + 0x3f8) != 0.0) {
    *(float *)(param_1 + 0x3f8) = *(float *)(param_1 + 0x3f8) + *(float *)(param_1 + 0x110);
  }
  return;
}

// 00F0B6F0  FUN_00f0b6f0  size=2147  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00f0b9f0) */
/* WARNING: Removing unreachable block (ram,0x00f0bcac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f0b6f0(float *param_1,int *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float unaff_EDI;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *local_18c;
  float **local_188;
  float *local_184;
  float *pfStack_174;
  float local_170;
  float *local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float *local_138;
  float local_134;
  float *local_130;
  float **local_12c;
  float *local_128;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float *local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_9c [24];
  undefined1 auStack_84 [24];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  uint uStack_50;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&pfStack_174;
  if ((param_1[2] == 0.0) || (local_134 = 1.4013e-45, (*(uint *)(*param_2 + 4) & 0x120000) == 0)) {
    local_134 = 0.0;
  }
  puVar1 = (undefined4 *)param_2[7];
  local_120 = *puVar1;
  pfVar2 = (float *)param_2[4];
  local_11c = puVar1[1];
  local_118 = puVar1[2];
  pfVar3 = (float *)param_2[5];
  local_130 = (float *)(*pfVar3 + *pfVar2);
  local_12c = (float **)(pfVar2[1] + pfVar3[1]);
  local_128 = (float *)(pfVar2[2] + pfVar3[2]);
  iVar4 = param_2[3];
  local_124 = pfVar2[3] + pfVar3[3];
  local_154 = *(float *)(*(int *)(param_2[2] + 4) + 8);
  pfVar2 = (float *)param_2[6];
  if (local_154 == 0.0) {
LAB_00f0b834:
    local_164 = 1.0;
    local_170 = 0.0;
    local_16c = (float *)0x0;
    local_168 = 0.0;
  }
  else {
    local_170 = *(float *)(iVar4 + 0x40) - *pfVar2;
    local_16c = (float *)(*(float *)(iVar4 + 0x44) - pfVar2[1]);
    local_168 = *(float *)(iVar4 + 0x48) - pfVar2[2];
    local_164 = *(float *)(iVar4 + 0x4c) - pfVar2[3];
    if (((local_170 == 0.0) && ((float)local_16c == 0.0)) && (local_168 == 0.0)) goto LAB_00f0b834;
    local_188 = (float **)&local_170;
    local_18c = (float *)0xf0b805;
    local_184 = (float *)local_188;
    FUN_00ddf460();
    local_170 = local_154 * local_170;
    local_16c = (float *)((float)local_16c * local_154);
    local_168 = local_168 * local_154;
    local_164 = local_154 * local_164;
  }
  pfVar2 = *(float **)(param_2[2] + 0xc);
  if (pfVar2 == (float *)0x0) {
    local_184 = local_128;
    local_188 = local_12c;
    local_18c = local_130;
    D3DXMatrixTranslation();
  }
  else if ((*(uint *)(*param_2 + 4) & 0x40000000) == 0) {
    local_154 = *param_1;
    local_188 = &local_130;
    local_18c = &local_150;
    local_184 = pfVar2;
    D3DXVec3TransformNormal();
    if (local_16c != pfVar2) {
      FID_conflict__memcpy(local_16c,pfVar2,0x40);
    }
    local_16c[0xc] = local_168 + local_16c[0xc];
    local_16c[0xd] = local_16c[0xd] + local_164;
    local_16c[0xe] = local_160 + local_16c[0xe];
  }
  else {
    local_f4 = *pfVar2;
    local_138 = (float *)*param_1;
    local_154 = pfVar2[1];
    local_f8 = pfVar2[4];
    local_100 = pfVar2[5];
    local_158 = pfVar2[6];
    local_104 = pfVar2[8];
    local_fc = pfVar2[9];
    local_160 = pfVar2[10];
    local_15c = local_154 * local_154 + local_f4 * local_f4 + pfVar2[2] * pfVar2[2];
    local_184 = (float *)0xf0b8f7;
    fVar5 = (float10)FUN_00fdef70();
    local_15c = (float)fVar5;
    local_150 = 1.0 / local_15c;
    local_158 = local_100 * local_100 + local_f8 * local_f8 + local_158 * local_158;
    local_184 = (float *)0xf0b94e;
    fVar5 = (float10)FUN_00fdef70();
    local_158 = (float)fVar5;
    local_14c = 1.0 / local_158;
    local_160 = local_104 * local_104 + local_fc * local_fc + local_160 * local_160;
    local_184 = (float *)0xf0b9a2;
    fVar5 = (float10)FUN_00fdef70();
    local_160 = (float)fVar5;
    local_184 = &local_150;
    local_148 = 1.0 / local_160;
    local_188 = &local_e0;
    local_18c = (float *)0xf0b9c4;
    FUN_00ddd140();
    local_188 = &local_e0;
    local_18c = local_138;
    local_184 = pfVar2;
    D3DXMatrixMultiply();
    fVar10 = *param_1;
    D3DXVec3TransformNormal();
    *(float *)((int)fVar10 + 0x30) = *(float *)((int)fVar10 + 0x30) + local_168;
    *(float *)((int)fVar10 + 0x34) = local_164 + *(float *)((int)fVar10 + 0x34);
    *(float *)((int)fVar10 + 0x38) = local_160 + *(float *)((int)fVar10 + 0x38);
  }
  fVar10 = *param_1;
  *(float *)((int)fVar10 + 0x30) = *(float *)((int)fVar10 + 0x30) + (float)local_188;
  *(float *)((int)fVar10 + 0x34) = *(float *)((int)fVar10 + 0x34) + (float)local_184;
  *(float *)((int)fVar10 + 0x38) = unaff_EDI + *(float *)((int)fVar10 + 0x38);
  fVar10 = *param_1;
  local_134 = *(float *)(param_2[3] + 0x60) + local_134;
  uStack_c0 = 0;
  uStack_c4 = 0;
  uStack_c8 = 0;
  uStack_cc = 0;
  uStack_d4 = 0;
  uStack_d8 = 0;
  uStack_dc = 0;
  local_e0 = (float *)0x0;
  fStack_e8 = 0.0;
  fStack_ec = 0.0;
  uStack_f0 = 0;
  local_f4 = 0.0;
  uStack_bc = 0x3f800000;
  uStack_d0 = 0x3f800000;
  fStack_e4 = 1.0;
  local_f8 = 1.0;
  if ((float)local_130 != 0.0) {
    D3DXMatrixRotationZ();
    D3DXMatrixMultiply();
  }
  if (local_134 != 0.0) {
    D3DXMatrixRotationY();
    D3DXMatrixMultiply();
  }
  if ((float)local_138 != 0.0) {
    D3DXMatrixRotationX();
    D3DXMatrixMultiply();
  }
  D3DXMatrixMultiply();
  if (local_158 != 0.0) {
    FID_conflict__memcpy(auStack_84,(void *)*param_1,0x40);
  }
  pfStack_174 = (float *)param_2[9];
  local_170 = (float)param_2[10];
  if ((*(byte *)(*param_2 + 4) & 0x40) == 0) {
    local_16c = (float *)0x3f800000;
  }
  else {
    local_16c = (float *)param_2[0xb];
  }
  FUN_00ddd140();
  D3DXMatrixMultiply();
  local_168 = *(float *)(*(int *)(param_2[2] + 4) + 0x18);
  fVar6 = *param_1;
  local_120 = *(undefined4 *)(*(int *)(param_2[2] + 4) + 0x14);
  local_118 = 0;
  local_11c = local_168;
  D3DXVec3TransformNormal(&stack0xfffffe80,&local_120,fVar6);
  *(float *)((int)fVar6 + 0x30) = *(float *)((int)fVar6 + 0x30) + (float)local_18c;
  *(float *)((int)fVar6 + 0x34) = (float)local_188 + *(float *)((int)fVar6 + 0x34);
  *(float *)((int)fVar6 + 0x38) = (float)local_184 + *(float *)((int)fVar6 + 0x38);
  if (local_170 != 0.0) {
    D3DXVec3TransformNormal(&local_18c,&local_12c,auStack_9c);
    fStack_6c = fStack_6c + (float)local_18c;
    fStack_68 = (float)local_188 + fStack_68;
    fStack_64 = (float)local_184 + fStack_64;
  }
  pfStack_174 = (float *)param_1[1];
  if (pfStack_174 == (float *)0x0) goto LAB_00f0bf1e;
  if ((*(float *)((int)fVar10 + 0x14) != 0.5) || (*(float *)((int)fVar10 + 0x18) != 0.5)) {
    if ((_DAT_01ee12e0 & 1) == 0) {
      _DAT_01ee12e0 = _DAT_01ee12e0 | 1;
      _DAT_01ee12d0 = 0xbf000000;
      _DAT_01ee12d4 = 0xbf000000;
      _DAT_01ee12d8 = 0;
    }
    puVar1 = (undefined4 *)*param_1;
    D3DXVec3TransformNormal(&local_18c,&DAT_01ee12d0,puVar1);
    if (&local_11c != puVar1) {
      FID_conflict__memcpy(&local_11c,puVar1,0x40);
    }
    pfVar2 = (float *)param_1[1];
    fStack_ec = (float)local_18c + fStack_ec;
    fStack_e8 = (float)local_188 + fStack_e8;
    fStack_e4 = (float)local_184 + fStack_e4;
    *pfVar2 = fStack_ec;
    pfVar2[1] = fStack_e8;
    pfVar2[2] = fStack_e4;
    pfVar2[3] = (float)local_e0;
    goto LAB_00f0bf1e;
  }
  fVar10 = *(float *)(*(int *)(param_2[2] + 4) + 8);
  iVar4 = param_2[3];
  pfVar2 = (float *)param_2[6];
  if (fVar10 == 0.0) {
LAB_00f0be2a:
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar10 = 1.0;
  }
  else {
    fVar6 = *(float *)(iVar4 + 0x40) - *pfVar2;
    fVar7 = *(float *)(iVar4 + 0x44) - pfVar2[1];
    fVar8 = *(float *)(iVar4 + 0x48) - pfVar2[2];
    fVar9 = *(float *)(iVar4 + 0x4c) - pfVar2[3];
    if (((fVar6 == 0.0) && (fVar7 == 0.0)) && (fVar8 == 0.0)) goto LAB_00f0be2a;
    FUN_00ddf460(&stack0xfffffe54,&stack0xfffffe54);
    fVar6 = fVar10 * fVar6;
    fVar7 = fVar7 * fVar10;
    fVar8 = fVar8 * fVar10;
    fVar10 = fVar10 * fVar9;
  }
  *pfStack_174 = fVar6 + *pfVar2;
  pfStack_174[1] = pfVar2[1] + fVar7;
  pfStack_174[2] = pfVar2[2] + fVar8;
  pfStack_174[3] = pfVar2[3] + fVar10;
LAB_00f0bf1e:
  if (local_170 != 0.0) {
    FUN_00efe330(param_1,param_2);
    FUN_00efe790(param_1,param_2,auStack_9c);
  }
  __security_check_cookie(uStack_50 ^ (uint)&stack0xfffffe50);
  return;
}

// 00F0BF60  FUN_00f0bf60  size=3452  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00f0c28c) */
/* WARNING: Removing unreachable block (ram,0x00f0ca39) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f0bf60(int *param_1,int *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  void *_Dst;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 auStack_1a8 [4];
  int local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float *local_194;
  float local_190;
  float local_18c;
  float local_188;
  int iStack_180;
  float fStack_17c;
  float fStack_178;
  float local_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined4 uStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float local_12c;
  float local_128;
  float fStack_124;
  undefined1 auStack_114 [12];
  undefined4 uStack_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 auStack_84 [24];
  undefined1 auStack_6c [24];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint uStack_38;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_1c4;
  if ((param_1[2] == 0) || (local_174 = 1.4013e-45, (*(uint *)(*param_2 + 4) & 0x120000) == 0)) {
    local_174 = 0.0;
  }
  pfVar1 = (float *)param_2[7];
  local_130 = *pfVar1;
  pfVar2 = (float *)param_2[4];
  local_12c = pfVar1[1];
  local_128 = pfVar1[2];
  pfVar1 = (float *)param_2[5];
  local_150 = *pfVar2 + *pfVar1;
  local_14c = pfVar2[1] + pfVar1[1];
  local_148 = pfVar2[2] + pfVar1[2];
  iVar3 = param_2[3];
  local_144 = pfVar2[3] + pfVar1[3];
  local_194 = *(float **)(*(int *)(param_2[2] + 4) + 8);
  pfVar1 = (float *)param_2[6];
  if ((float)local_194 == 0.0) {
LAB_00f0c077:
    local_1c0 = 0.0;
    local_1bc = 0.0;
    local_1b8 = 0.0;
    local_1b4 = 1.0;
  }
  else {
    local_1c0 = *(float *)(iVar3 + 0x40) - *pfVar1;
    local_1bc = *(float *)(iVar3 + 0x44) - pfVar1[1];
    local_1b8 = *(float *)(iVar3 + 0x48) - pfVar1[2];
    local_1b4 = *(float *)(iVar3 + 0x4c) - pfVar1[3];
    if (((local_1c0 == 0.0) && (local_1bc == 0.0)) && (local_1b8 == 0.0)) goto LAB_00f0c077;
    FUN_00ddf460();
    local_1c0 = (float)local_194 * local_1c0;
    local_1bc = local_1bc * (float)local_194;
    local_1b8 = local_1b8 * (float)local_194;
    local_1b4 = (float)local_194 * local_1b4;
  }
  pfVar1 = *(float **)(param_2[2] + 0xc);
  if (pfVar1 == (float *)0x0) {
    _Dst = (void *)*param_1;
    if (_Dst != (void *)param_2[8]) {
      FID_conflict__memcpy(_Dst,(void *)param_2[8],0x40);
    }
    *(float *)((int)_Dst + 0x30) = *(float *)((int)_Dst + 0x30) + local_150;
    *(float *)((int)_Dst + 0x34) = local_14c + *(float *)((int)_Dst + 0x34);
    *(float *)((int)_Dst + 0x38) = *(float *)((int)_Dst + 0x38) + local_148;
  }
  else if ((*(uint *)(*param_2 + 4) & 0x40000000) == 0) {
    local_194 = (float *)*param_1;
    D3DXVec3TransformNormal();
    if (local_194 != pfVar1) {
      FID_conflict__memcpy(local_194,pfVar1,0x40);
    }
    local_194[0xc] = local_190 + local_194[0xc];
    local_194[0xd] = local_194[0xd] + local_18c;
    local_194[0xe] = local_194[0xe] + local_188;
  }
  else {
    local_f4 = *pfVar1;
    local_1a4 = *param_1;
    local_194 = (float *)pfVar1[1];
    local_fc = pfVar1[4];
    local_104 = pfVar1[5];
    local_19c = pfVar1[6];
    local_f8 = pfVar1[8];
    local_100 = pfVar1[9];
    local_1a0 = pfVar1[10];
    local_198 = (float)local_194 * (float)local_194 + local_f4 * local_f4 + pfVar1[2] * pfVar1[2];
    fVar4 = (float10)FUN_00fdef70();
    local_198 = (float)fVar4;
    local_190 = 1.0 / local_198;
    local_19c = local_104 * local_104 + local_fc * local_fc + local_19c * local_19c;
    fVar4 = (float10)FUN_00fdef70();
    local_19c = (float)fVar4;
    local_18c = 1.0 / local_19c;
    local_1a0 = local_100 * local_100 + local_f8 * local_f8 + local_1a0 * local_1a0;
    fVar4 = (float10)FUN_00fdef70();
    local_1a0 = (float)fVar4;
    local_188 = 1.0 / local_1a0;
    FUN_00ddd140();
    D3DXMatrixMultiply();
    iVar3 = *param_1;
    D3DXVec3TransformNormal();
    *(float *)(iVar3 + 0x30) = *(float *)(iVar3 + 0x30) + local_190;
    *(float *)(iVar3 + 0x34) = *(float *)(iVar3 + 0x34) + local_18c;
    *(float *)(iVar3 + 0x38) = local_188 + *(float *)(iVar3 + 0x38);
  }
  iVar3 = *param_1;
  *(float *)(iVar3 + 0x30) = *(float *)(iVar3 + 0x30) + local_1c0;
  *(float *)(iVar3 + 0x34) = local_1bc + *(float *)(iVar3 + 0x34);
  *(float *)(iVar3 + 0x38) = *(float *)(iVar3 + 0x38) + local_1b8;
  local_a8 = 0;
  local_ac = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_bc = 0;
  uStack_c0 = 0;
  uStack_c4 = 0;
  fStack_c8 = 0.0;
  fStack_d0 = 0.0;
  fStack_d4 = 0.0;
  uStack_d8 = 0;
  uStack_dc = 0;
  uStack_a4 = 0x3f800000;
  uStack_b8 = 0x3f800000;
  fStack_cc = 1.0;
  local_e0 = 0x3f800000;
  if (local_128 != 0.0) {
    D3DXMatrixRotationZ();
    D3DXMatrixMultiply();
  }
  if (local_12c != 0.0) {
    D3DXMatrixRotationY();
    D3DXMatrixMultiply();
  }
  if (local_130 != 0.0) {
    D3DXMatrixRotationX();
    D3DXMatrixMultiply();
  }
  D3DXMatrixMultiply();
  iVar3 = *param_1;
  fStack_16c = *(float *)(iVar3 + 0x10);
  fStack_168 = *(float *)(iVar3 + 0x14);
  fStack_164 = *(float *)(iVar3 + 0x18);
  uStack_160 = *(undefined4 *)(iVar3 + 0x1c);
  fStack_1b0 = fStack_16c * fStack_16c + fStack_168 * fStack_168 + fStack_164 * fStack_164;
  if (fStack_1b0 < 0.0 == (fStack_1b0 == 0.0)) {
    FUN_00ddf460();
  }
  else {
    FUN_00dd5650();
    fStack_16c = 0.0;
    fStack_168 = 1.0;
    fStack_164 = 0.0;
  }
  iVar3 = *param_1;
  fStack_15c = *(float *)(iVar3 + 0x30);
  fStack_158 = *(float *)(iVar3 + 0x34);
  fStack_154 = *(float *)(iVar3 + 0x38);
  local_150 = *(float *)(iVar3 + 0x3c);
  iVar3 = param_2[3];
  fStack_17c = *(float *)(iVar3 + 0x40) - fStack_15c;
  fStack_178 = *(float *)(iVar3 + 0x44) - fStack_158;
  local_174 = *(float *)(iVar3 + 0x48) - fStack_154;
  fStack_170 = *(float *)(iVar3 + 0x4c) - local_150;
  if (((fStack_17c == 0.0) && (fStack_178 == 0.0)) && (local_174 == 0.0)) {
    iVar3 = param_2[3];
    fStack_17c = *(float *)(iVar3 + 0x40) - *(float *)(iVar3 + 0x50);
    fStack_178 = *(float *)(iVar3 + 0x44) - *(float *)(iVar3 + 0x54);
    local_174 = *(float *)(iVar3 + 0x48) - *(float *)(iVar3 + 0x58);
    fStack_170 = *(float *)(iVar3 + 0x4c) - *(float *)(iVar3 + 0x5c);
    fStack_1b0 = fStack_17c * fStack_17c + fStack_178 * fStack_178 + local_174 * local_174;
    if (fStack_1b0 < 0.0 == (fStack_1b0 == 0.0)) goto LAB_00f0c6e1;
    FUN_00dd5650();
    fStack_17c = 0.0;
    fStack_178 = 1.0;
    local_174 = 0.0;
  }
  else {
LAB_00f0c6e1:
    FUN_00ddf460();
  }
  local_14c = fStack_168 * local_174 - fStack_164 * fStack_178;
  local_148 = fStack_17c * fStack_164 - fStack_16c * local_174;
  fStack_1c4 = fStack_178 * fStack_16c - fStack_168 * fStack_17c;
  fStack_1b0 = local_14c * local_14c + local_148 * local_148 + fStack_1c4 * fStack_1c4;
  local_144 = fStack_1c4;
  if (fStack_1b0 < 0.0 == (fStack_1b0 == 0.0)) {
    FUN_00ddf460();
  }
  else {
    FUN_00dd5650();
    local_14c = 0.0;
    local_148 = 1.0;
    local_144 = 0.0;
  }
  local_12c = fStack_164 * local_148 - fStack_168 * local_144;
  local_128 = fStack_16c * local_144 - local_14c * fStack_164;
  fStack_1c4 = local_14c * fStack_168 - fStack_16c * local_148;
  fStack_1b0 = local_12c * local_12c + local_128 * local_128 + fStack_1c4 * fStack_1c4;
  fStack_124 = fStack_1c4;
  if (fStack_1b0 < 0.0 == (fStack_1b0 == 0.0)) {
    FUN_00ddf460();
  }
  else {
    FUN_00dd5650();
    local_12c = 0.0;
    local_128 = 1.0;
    fStack_124 = 0.0;
  }
  pfVar1 = (float *)*param_1;
  fStack_13c = local_14c * -1.0;
  fStack_138 = local_148 * -1.0;
  fStack_134 = local_144 * -1.0;
  *pfVar1 = fStack_13c;
  pfVar1[1] = fStack_138;
  pfVar1[2] = fStack_134;
  iVar3 = *param_1;
  *(float *)(iVar3 + 0x10) = fStack_16c;
  *(float *)(iVar3 + 0x14) = fStack_168;
  *(float *)(iVar3 + 0x18) = fStack_164;
  iVar3 = *param_1;
  *(float *)(iVar3 + 0x20) = local_12c;
  *(float *)(iVar3 + 0x24) = local_128;
  *(float *)(iVar3 + 0x28) = fStack_124;
  if (iStack_180 != 0) {
    FID_conflict__memcpy(auStack_6c,(void *)*param_1,0x40);
  }
  local_19c = (float)param_2[9];
  local_198 = (float)param_2[10];
  if ((*(byte *)(*param_2 + 4) & 0x40) == 0) {
    local_194 = (float *)0x3f800000;
  }
  else {
    local_194 = (float *)param_2[0xb];
  }
  FUN_00ddd140();
  D3DXMatrixMultiply();
  local_1b8 = *(float *)(param_2[2] + 4);
  local_1bc = *(float *)((int)local_1b8 + 0x18);
  iVar3 = *param_1;
  uStack_108 = *(undefined4 *)((int)local_1b8 + 0x14);
  local_100 = 0.0;
  local_104 = local_1bc;
  D3DXVec3TransformNormal(auStack_1a8,&uStack_108,iVar3);
  *(float *)(iVar3 + 0x30) = *(float *)(iVar3 + 0x30) + local_1b4;
  *(float *)(iVar3 + 0x34) = fStack_1b0 + *(float *)(iVar3 + 0x34);
  *(float *)(iVar3 + 0x38) = *(float *)(iVar3 + 0x38) + fStack_1ac;
  if (local_198 != 0.0) {
    D3DXVec3TransformNormal(&local_1b4,auStack_114,auStack_84);
    fStack_54 = fStack_54 + local_1b4;
    fStack_50 = fStack_50 + fStack_1b0;
    fStack_4c = fStack_4c + fStack_1ac;
  }
  pfVar1 = (float *)param_1[1];
  if (pfVar1 == (float *)0x0) goto LAB_00f0cca7;
  if ((*(float *)((int)fStack_1c4 + 0x14) != 0.5) || (*(float *)((int)fStack_1c4 + 0x18) != 0.5)) {
    if ((_DAT_01ee1300 & 1) == 0) {
      _DAT_01ee1300 = _DAT_01ee1300 | 1;
      _DAT_01ee12f0 = 0xbf000000;
      _DAT_01ee12f4 = 0xbf000000;
      _DAT_01ee12f8 = 0;
    }
    pfVar1 = (float *)*param_1;
    D3DXVec3TransformNormal(&local_1b4,&DAT_01ee12f0,pfVar1);
    if (&local_104 != pfVar1) {
      FID_conflict__memcpy(&local_104,pfVar1,0x40);
    }
    pfVar1 = (float *)param_1[1];
    fStack_d4 = fStack_d4 + local_1b4;
    fStack_d0 = fStack_d0 + fStack_1b0;
    fStack_cc = fStack_cc + fStack_1ac;
    *pfVar1 = fStack_d4;
    pfVar1[1] = fStack_d0;
    pfVar1[2] = fStack_cc;
    pfVar1[3] = fStack_c8;
    goto LAB_00f0cca7;
  }
  local_1b8 = *(float *)(*(int *)(param_2[2] + 4) + 8);
  iVar3 = param_2[3];
  pfVar2 = (float *)param_2[6];
  if (local_1b8 == 0.0) {
LAB_00f0cbb3:
    fVar5 = 0.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar8 = 1.0;
  }
  else {
    fVar5 = *(float *)(iVar3 + 0x40) - *pfVar2;
    fVar6 = *(float *)(iVar3 + 0x44) - pfVar2[1];
    fVar7 = *(float *)(iVar3 + 0x48) - pfVar2[2];
    fVar8 = *(float *)(iVar3 + 0x4c) - pfVar2[3];
    if (((fVar5 == 0.0) && (fVar6 == 0.0)) && (fVar7 == 0.0)) goto LAB_00f0cbb3;
    FUN_00ddf460(&stack0xfffffe1c,&stack0xfffffe1c);
    fVar5 = local_1b8 * fVar5;
    fVar6 = local_1b8 * fVar6;
    fVar7 = local_1b8 * fVar7;
    fVar8 = local_1b8 * fVar8;
  }
  *pfVar1 = *pfVar2 + fVar5;
  pfVar1[1] = pfVar2[1] + fVar6;
  pfVar1[2] = pfVar2[2] + fVar7;
  pfVar1[3] = pfVar2[3] + fVar8;
LAB_00f0cca7:
  if (local_198 != 0.0) {
    FUN_00efe330(param_1,param_2);
    FUN_00efe790(param_1,param_2,auStack_84);
  }
  __security_check_cookie(uStack_38 ^ (uint)&stack0xfffffe18);
  return;
}

// 00F0CCE0  FUN_00f0cce0  size=1352  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00f0d070) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f0cce0(int *param_1,int *param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  float unaff_EBX;
  float fStack_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  int iStack_114;
  float fStack_110;
  float local_10c;
  uint local_108;
  uint local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined1 auStack_e8 [8];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 auStack_78 [24];
  undefined1 local_60 [24];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_134;
  if (param_1[2] == 0) {
    local_108 = 0;
  }
  else {
    local_108 = *(uint *)(*param_2 + 4) >> 0x14 & 1;
  }
  pfVar1 = (float *)param_2[7];
  if (*pfVar1 == 0.0) {
    if (pfVar1[1] == 0.0) {
      if (pfVar1[2] == 0.0) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
    }
    else {
      bVar5 = false;
    }
  }
  else {
    bVar5 = false;
  }
  local_120 = *pfVar1;
  local_11c = pfVar1[1];
  pfVar2 = (float *)param_2[6];
  local_118 = pfVar1[2];
  local_104 = (uint)!bVar5;
  local_10c = *(float *)(*(int *)(param_2[2] + 4) + 8);
  iVar3 = param_2[3];
  if (local_10c != 0.0) {
    local_130 = *(float *)(iVar3 + 0x40) - *pfVar2;
    local_12c = *(float *)(iVar3 + 0x44) - pfVar2[1];
    local_128 = *(float *)(iVar3 + 0x48) - pfVar2[2];
    local_124 = *(float *)(iVar3 + 0x4c) - pfVar2[3];
    if (((local_130 != 0.0) || (local_12c != 0.0)) || (local_128 != 0.0)) {
      FUN_00ddf460();
      local_130 = local_10c * local_130;
      local_12c = local_12c * local_10c;
      local_128 = local_128 * local_10c;
      local_124 = local_10c * local_124;
      goto LAB_00f0ce4c;
    }
  }
  local_124 = 1.0;
  local_130 = 0.0;
  local_12c = 0.0;
  local_128 = 0.0;
LAB_00f0ce4c:
  local_100 = *pfVar2 + local_130;
  local_fc = pfVar2[1] + local_12c;
  local_f8 = pfVar2[2] + local_128;
  local_f4 = pfVar2[3] + local_124;
  FID_conflict__memcpy((void *)*param_1,(void *)param_2[3],0x40);
  iVar3 = *param_1;
  *(float *)(iVar3 + 0x30) = local_100;
  *(float *)(iVar3 + 0x34) = local_fc;
  *(float *)(iVar3 + 0x38) = local_f8;
  if (local_104 != 0) {
    local_a8 = 0;
    local_ac = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_bc = 0.0;
    local_c0 = 0.0;
    local_c4 = 0.0;
    local_c8 = 0.0;
    local_d0 = 0;
    local_d4 = 0;
    local_d8 = 0;
    local_dc = 0;
    local_a4 = 0x3f800000;
    local_b8 = 0x3f800000;
    local_cc = 0x3f800000;
    local_e0 = 0x3f800000;
    if (local_118 != 0.0) {
      D3DXMatrixRotationZ();
      D3DXMatrixMultiply(auStack_e8,&local_a8);
    }
    if (local_11c != 0.0) {
      D3DXMatrixRotationY();
      D3DXMatrixMultiply(auStack_e8,&local_a8);
    }
    if (local_120 != 0.0) {
      D3DXMatrixRotationX();
      D3DXMatrixMultiply(auStack_e8,&local_a8);
    }
    D3DXMatrixMultiply();
  }
  if (local_108 != 0) {
    FID_conflict__memcpy(local_60,(void *)*param_1,0x40);
  }
  local_120 = (float)param_2[9];
  local_11c = (float)param_2[10];
  if ((*(byte *)(*param_2 + 4) & 0x40) == 0) {
    local_118 = 1.0;
  }
  else {
    local_118 = (float)param_2[0xb];
  }
  FUN_00ddd140();
  D3DXMatrixMultiply();
  local_118 = *(float *)(param_2[2] + 4);
  fStack_110 = *(float *)((int)local_118 + 0x18);
  iVar3 = *param_1;
  local_fc = *(float *)((int)local_118 + 0x14);
  local_f4 = 0.0;
  local_f8 = fStack_110;
  D3DXVec3TransformNormal(&local_12c,&local_fc,iVar3);
  *(float *)(iVar3 + 0x30) = *(float *)(iVar3 + 0x30) + unaff_EBX;
  *(float *)(iVar3 + 0x34) = fStack_134 + *(float *)(iVar3 + 0x34);
  *(float *)(iVar3 + 0x38) = local_130 + *(float *)(iVar3 + 0x38);
  if (local_120 != 0.0) {
    D3DXVec3TransformNormal(&stack0xfffffec8,&local_108,auStack_78);
    fStack_48 = fStack_48 + unaff_EBX;
    fStack_44 = fStack_44 + fStack_134;
    fStack_40 = fStack_40 + local_130;
  }
  piVar4 = (int *)param_1[1];
  if (piVar4 != (int *)0x0) {
    if ((*(float *)((int)local_124 + 0x14) == 0.5) && (*(float *)((int)local_124 + 0x18) == 0.5)) {
      *piVar4 = (int)local_118;
      piVar4[1] = iStack_114;
      piVar4[2] = (int)fStack_110;
      piVar4[3] = (int)local_10c;
    }
    else {
      if ((_DAT_01ee1320 & 1) == 0) {
        _DAT_01ee1320 = _DAT_01ee1320 | 1;
        _DAT_01ee1310 = 0xbf000000;
        _DAT_01ee1314 = 0xbf000000;
        _DAT_01ee1318 = 0;
      }
      pfVar1 = (float *)*param_1;
      D3DXVec3TransformNormal(&stack0xfffffec8,&DAT_01ee1310,pfVar1);
      if (&local_f8 != pfVar1) {
        FID_conflict__memcpy(&local_f8,pfVar1,0x40);
      }
      pfVar1 = (float *)param_1[1];
      local_c8 = local_c8 + unaff_EBX;
      local_c4 = local_c4 + fStack_134;
      local_c0 = local_c0 + local_130;
      *pfVar1 = local_c8;
      pfVar1[1] = local_c4;
      pfVar1[2] = local_c0;
      pfVar1[3] = local_bc;
    }
  }
  if (local_120 != 0.0) {
    FUN_00efe330(param_1,param_2);
    FUN_00efe790(param_1,param_2,auStack_78);
  }
  __security_check_cookie(uStack_2c ^ (uint)&stack0xfffffeb4);
  return;
}

// 00F0D230  FUN_00f0d230  size=2063  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00f0d519) */
/* WARNING: Removing unreachable block (ram,0x00f0d7cf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f0d230(float *param_1,int *param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float unaff_EDI;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fStack_1b0;
  float fVar9;
  float *local_188;
  float *local_184;
  undefined1 auStack_174 [4];
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float *pfStack_160;
  float fStack_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 uStack_12c;
  float afStack_128 [3];
  float *local_11c;
  float *local_118;
  float local_114;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float local_e0 [14];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_5c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_174;
  if ((param_1[2] == 0.0) ||
     (afStack_128[1] = 1.4013e-45, (*(uint *)(*param_2 + 4) & 0x120000) == 0)) {
    afStack_128[1] = 0.0;
  }
  pfVar2 = (float *)param_2[4];
  pfVar3 = (float *)param_2[5];
  afStack_128[2] = *pfVar2 + *pfVar3;
  local_11c = (float *)(pfVar2[1] + pfVar3[1]);
  local_118 = (float *)(pfVar2[2] + pfVar3[2]);
  iVar4 = param_2[3];
  local_114 = pfVar2[3] + pfVar3[3];
  local_148 = *(float *)(*(int *)(param_2[2] + 4) + 8);
  pfVar2 = (float *)param_2[6];
  if (local_148 == 0.0) {
LAB_00f0d35d:
    local_164 = 1.0;
    local_170 = 0.0;
    local_16c = 0.0;
    local_168 = 0.0;
  }
  else {
    local_170 = *(float *)(iVar4 + 0x40) - *pfVar2;
    local_16c = *(float *)(iVar4 + 0x44) - pfVar2[1];
    local_168 = *(float *)(iVar4 + 0x48) - pfVar2[2];
    local_164 = *(float *)(iVar4 + 0x4c) - pfVar2[3];
    if (((local_170 == 0.0) && (local_16c == 0.0)) && (local_168 == 0.0)) goto LAB_00f0d35d;
    local_188 = &local_170;
    local_184 = local_188;
    FUN_00ddf460();
    local_170 = local_148 * local_170;
    local_16c = local_16c * local_148;
    local_168 = local_168 * local_148;
    local_164 = local_148 * local_164;
  }
  pfVar2 = *(float **)(param_2[2] + 0xc);
  if (pfVar2 == (float *)0x0) {
    local_184 = local_118;
    local_188 = local_11c;
    D3DXMatrixTranslation();
  }
  else if ((*(uint *)(*param_2 + 4) & 0x40000000) == 0) {
    local_148 = *param_1;
    local_188 = afStack_128 + 2;
    local_184 = pfVar2;
    D3DXVec3TransformNormal();
    if (pfStack_160 != pfVar2) {
      FID_conflict__memcpy(pfStack_160,pfVar2,0x40);
    }
    pfStack_160[0xc] = fStack_158 + pfStack_160[0xc];
    pfStack_160[0xd] = local_154 + pfStack_160[0xd];
    pfStack_160[0xe] = pfStack_160[0xe] + local_150;
  }
  else {
    local_f4 = *pfVar2;
    local_144 = *param_1;
    local_148 = pfVar2[1];
    local_100 = pfVar2[4];
    local_fc = pfVar2[5];
    local_150 = pfVar2[6];
    local_104 = pfVar2[8];
    local_f8 = pfVar2[9];
    local_154 = pfVar2[10];
    local_14c = local_148 * local_148 + local_f4 * local_f4 + pfVar2[2] * pfVar2[2];
    local_184 = (float *)0xf0d420;
    fVar6 = (float10)FUN_00fdef70();
    local_14c = (float)fVar6;
    local_140 = 1.0 / local_14c;
    local_150 = local_fc * local_fc + local_100 * local_100 + local_150 * local_150;
    local_184 = (float *)0xf0d477;
    fVar6 = (float10)FUN_00fdef70();
    local_150 = (float)fVar6;
    local_13c = 1.0 / local_150;
    local_154 = local_f8 * local_f8 + local_104 * local_104 + local_154 * local_154;
    local_184 = (float *)0xf0d4cb;
    fVar6 = (float10)FUN_00fdef70();
    local_154 = (float)fVar6;
    local_184 = &local_140;
    local_138 = 1.0 / local_154;
    local_188 = local_e0;
    FUN_00ddd140();
    local_188 = local_e0;
    local_184 = pfVar2;
    D3DXMatrixMultiply();
    fVar9 = *param_1;
    D3DXVec3TransformNormal();
    *(float *)((int)fVar9 + 0x30) = *(float *)((int)fVar9 + 0x30) + fStack_158;
    *(float *)((int)fVar9 + 0x34) = local_154 + *(float *)((int)fVar9 + 0x34);
    *(float *)((int)fVar9 + 0x38) = local_150 + *(float *)((int)fVar9 + 0x38);
  }
  fVar9 = *param_1;
  *(float *)((int)fVar9 + 0x30) = *(float *)((int)fVar9 + 0x30) + (float)local_188;
  *(float *)((int)fVar9 + 0x34) = (float)local_184 + *(float *)((int)fVar9 + 0x34);
  *(float *)((int)fVar9 + 0x38) = unaff_EDI + *(float *)((int)fVar9 + 0x38);
  fVar9 = *param_1;
  D3DXMatrixMultiply();
  pfVar2 = (float *)param_2[7];
  local_e0[5] = 0.0;
  local_e0[4] = 0.0;
  local_168 = *param_1;
  local_e0[3] = 0.0;
  local_e0[2] = 0.0;
  local_e0[0] = 0.0;
  uStack_e4 = 0;
  uStack_e8 = 0;
  fStack_ec = 0.0;
  local_f4 = 0.0;
  local_f8 = 0.0;
  local_fc = 0.0;
  local_100 = 0.0;
  local_e0[6] = 1.0;
  local_e0[1] = 1.0;
  fStack_f0 = 1.0;
  local_104 = 1.0;
  if (pfVar2[2] != 0.0) {
    D3DXMatrixRotationZ();
    D3DXMatrixMultiply();
  }
  if (pfVar2[1] != 0.0) {
    D3DXMatrixRotationY();
    D3DXMatrixMultiply();
  }
  if (*pfVar2 != 0.0) {
    D3DXMatrixRotationX();
    D3DXMatrixMultiply();
  }
  D3DXMatrixMultiply();
  if (local_154 != 0.0) {
    FID_conflict__memcpy(auStack_90,(void *)*param_1,0x40);
  }
  local_170 = (float)param_2[9];
  local_16c = (float)param_2[10];
  if ((*(byte *)(*param_2 + 4) & 0x40) == 0) {
    local_168 = 1.0;
  }
  else {
    local_168 = (float)param_2[0xb];
  }
  FUN_00ddd140();
  D3DXMatrixMultiply();
  fVar1 = *(float *)(*(int *)(param_2[2] + 4) + 0x18);
  fVar5 = *param_1;
  uStack_12c = *(undefined4 *)(*(int *)(param_2[2] + 4) + 0x14);
  afStack_128[1] = 0.0;
  afStack_128[0] = fVar1;
  D3DXVec3TransformNormal(&stack0xfffffe84,&uStack_12c,fVar5);
  *(float *)((int)fVar5 + 0x30) = *(float *)((int)fVar5 + 0x30) + (float)local_188;
  *(float *)((int)fVar5 + 0x34) = (float)local_184 + *(float *)((int)fVar5 + 0x34);
  *(float *)((int)fVar5 + 0x38) = fVar1 + *(float *)((int)fVar5 + 0x38);
  pfVar2 = (float *)param_1[1];
  if (pfVar2 == (float *)0x0) goto LAB_00f0d9ea;
  if ((*(float *)((int)fVar9 + 0x14) != 0.5) || (*(float *)((int)fVar9 + 0x18) != 0.5)) {
    if ((_DAT_01ee1340 & 1) == 0) {
      _DAT_01ee1340 = _DAT_01ee1340 | 1;
      _DAT_01ee1330 = 0xbf000000;
      _DAT_01ee1334 = 0xbf000000;
      _DAT_01ee1338 = 0;
    }
    pfVar2 = (float *)*param_1;
    D3DXVec3TransformNormal(&local_188,&DAT_01ee1330,pfVar2);
    if (afStack_128 != pfVar2) {
      FID_conflict__memcpy(afStack_128,pfVar2,0x40);
    }
    pfVar2 = (float *)param_1[1];
    local_f8 = local_f8 + (float)local_188;
    local_f4 = local_f4 + (float)local_184;
    fStack_f0 = fStack_f0 + fVar1;
    *pfVar2 = local_f8;
    pfVar2[1] = local_f4;
    pfVar2[2] = fStack_f0;
    pfVar2[3] = fStack_ec;
    goto LAB_00f0d9ea;
  }
  fVar9 = *(float *)(*(int *)(param_2[2] + 4) + 8);
  iVar4 = param_2[3];
  pfVar3 = (float *)param_2[6];
  if (fVar9 == 0.0) {
LAB_00f0d8f6:
    fVar7 = 0.0;
    fVar8 = 0.0;
    fStack_1b0 = 0.0;
    fVar9 = 1.0;
  }
  else {
    fVar7 = *(float *)(iVar4 + 0x40) - *pfVar3;
    fVar8 = *(float *)(iVar4 + 0x44) - pfVar3[1];
    fStack_1b0 = *(float *)(iVar4 + 0x48) - pfVar3[2];
    fVar1 = *(float *)(iVar4 + 0x4c);
    fVar5 = pfVar3[3];
    if (((fVar7 == 0.0) && (fVar8 == 0.0)) && (fStack_1b0 == 0.0)) goto LAB_00f0d8f6;
    FUN_00ddf460(&stack0xfffffe48,&stack0xfffffe48);
    fVar7 = fVar9 * fVar7;
    fVar8 = fVar8 * fVar9;
    fStack_1b0 = fStack_1b0 * fVar9;
    fVar9 = fVar9 * (fVar1 - fVar5);
  }
  *pfVar2 = fVar7 + *pfVar3;
  pfVar2[1] = pfVar3[1] + fVar8;
  pfVar2[2] = pfVar3[2] + fStack_1b0;
  pfVar2[3] = pfVar3[3] + fVar9;
LAB_00f0d9ea:
  if (local_16c != 0.0) {
    fVar9 = *param_1;
    uStack_78 = *(undefined4 *)((int)fVar9 + 0x30);
    uStack_74 = *(undefined4 *)((int)fVar9 + 0x34);
    uStack_70 = *(undefined4 *)((int)fVar9 + 0x38);
    FUN_00efe330(param_1,param_2);
    FUN_00efe790(param_1,param_2,auStack_a8);
  }
  __security_check_cookie(uStack_5c ^ (uint)&stack0xfffffe44);
  return;
}

// 00F0DA40  FUN_00f0da40  size=27  [callgraph]
void __fastcall FUN_00f0da40(int param_1)

{
  FUN_00edfc20(param_1 + 0x3a0);
  FUN_00f0b530(param_1 + 0x3a0);
  return;
}

// 00F0DA60  FUN_00f0da60  size=256  [callgraph]
undefined4 __fastcall FUN_00f0da60(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  
  sVar1 = *(short *)(param_1 + 0x4e2);
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x58) != (uint *)0x0) {
      uVar2 = **(uint **)(param_1 + 0x58);
      if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
        uVar3 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar3);
      }
      if ((uVar2 != 0) && (*(uint *)(param_1 + 0x4d8) == (uint)*(byte *)(uVar2 + 0x14))) {
        FUN_009cca90(param_1,&DAT_016da870,*(uint *)(param_1 + 0x4d8));
        return 0;
      }
    }
  }
  else {
    if (sVar1 == 1) {
      *(undefined4 *)(param_1 + 0x4e4) = 0;
      FUN_009df6d0();
      uVar3 = FUN_00f4b0b0(0);
      FUN_009df740();
      *(undefined4 *)(param_1 + 0x4e8) = uVar3;
    }
    else {
      if (sVar1 != 2) goto LAB_00f0da92;
      *(undefined4 *)(param_1 + 0x4e4) = *(undefined4 *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_1 + 100);
    }
    *(undefined4 *)(param_1 + 0x4d8) = 0xff;
  }
LAB_00f0da92:
  if (*(int *)(param_1 + 0x4e4) == 0xfff) {
    FUN_009cca90(param_1,&DAT_016da8ac);
    return 0;
  }
  return 1;
}

// 00F0DB60  FUN_00f0db60  size=178  [callgraph]
void __thiscall FUN_00f0db60(int param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_4;
  if (param_4 != 0) {
    FUN_00effcf0(param_2,param_3,param_4,param_4 + 0x10,*(undefined4 *)(param_1 + 0x84),param_5);
    __security_check_cookie(local_4 ^ (uint)&local_4);
    return;
  }
  if (param_5 != 0) {
    *param_2 = *param_3 + *(float *)(param_1 + 0x170);
    param_2[1] = *(float *)(param_1 + 0x174) + param_3[1];
    param_2[2] = *(float *)(param_1 + 0x178) + param_3[2];
    param_2[3] = *(float *)(param_1 + 0x17c) + param_3[3];
    __security_check_cookie(local_4 ^ (uint)&local_4);
    return;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  __security_check_cookie(local_4 ^ (uint)&local_4);
  return;
}

// 00F0DC20  cEspChain::vf20  size=134  [class]
void __thiscall cEspChain::vf20(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = FUN_00f99ca0();
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar4 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  uVar4 = *(undefined4 *)(uVar3 + 8);
  uVar5 = FUN_00e9fe30(uVar1,uVar6,uVar4);
  FUN_00efff50(*(undefined4 *)(param_1 + 0x498),uVar5,uVar1,uVar6,uVar4);
  FUN_00f99d30();
  return;
}

// 00F0DCB0  FUN_00f0dcb0  size=178  [callgraph]
void __thiscall FUN_00f0dcb0(int param_1,float *param_2,float *param_3,int param_4,int param_5)

{
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_4;
  if (param_4 != 0) {
    FUN_00f00870(param_2,param_3,param_4,param_4 + 0x10,*(undefined4 *)(param_1 + 0x84),param_5);
    __security_check_cookie(local_4 ^ (uint)&local_4);
    return;
  }
  if (param_5 != 0) {
    *param_2 = *param_3 + *(float *)(param_1 + 0x170);
    param_2[1] = *(float *)(param_1 + 0x174) + param_3[1];
    param_2[2] = *(float *)(param_1 + 0x178) + param_3[2];
    param_2[3] = *(float *)(param_1 + 0x17c) + param_3[3];
    __security_check_cookie(local_4 ^ (uint)&local_4);
    return;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  __security_check_cookie(local_4 ^ (uint)&local_4);
  return;
}

// 00F0DD70  FUN_00f0dd70  size=1510  [callgraph]
void __fastcall FUN_00f0dd70(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  float *pfVar5;
  float unaff_ESI;
  float10 fVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float *pfStack_158;
  float **ppfStack_154;
  float *pfStack_150;
  float *pfStack_14c;
  float *pfStack_148;
  float *pfStack_144;
  float *pfStack_140;
  float *pfStack_13c;
  float *pfStack_138;
  float *pfStack_134;
  float fStack_128;
  float local_124;
  undefined8 local_120;
  float local_118 [6];
  float local_100;
  float local_fc;
  float local_f8 [2];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  float afStack_b4 [18];
  undefined1 auStack_6c [40];
  uint uStack_44;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_128;
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x450);
  pfVar1 = (float *)(param_1 + 0x3a0);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x454);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 0x45c);
  *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x490);
  pfStack_138 = (float *)0xf0ddd6;
  pfStack_134 = pfVar1;
  FUN_00edfc20();
  pfStack_138 = (float *)0xf0ddde;
  pfStack_134 = pfVar1;
  FUN_00f0b530();
  local_118[2] = 0.0;
  local_118[3] = 0.0;
  local_118[4] = 0.0;
  pfStack_134 = (float *)0xf0ddf1;
  pfVar5 = (float *)FUN_00e9fe70();
  local_f0 = *pfVar5;
  local_ec = pfVar5[1];
  local_e8 = pfVar5[2];
  local_e4 = pfVar5[3];
  pfStack_134 = (float *)0xf0de11;
  pfVar5 = (float *)FUN_00e9feb0();
  local_118[0] = pfVar5[2];
  local_100 = *pfVar5 - local_f0;
  local_fc = pfVar5[1] - local_ec;
  local_f8[0] = local_118[0] - local_e8;
  local_120 = (double)local_fc;
  local_124 = local_100 * local_100 + local_f8[0] * local_f8[0];
  pfStack_134 = (float *)0xf0de7e;
  fVar6 = (float10)FUN_00fdef70();
  local_124 = (float)fVar6;
  pfStack_134 = (float *)0xf0de8f;
  fVar6 = (float10)FUN_00fdecda();
  local_124 = (float)fVar6;
  local_120 = (double)CONCAT44(local_120._4_4_,-local_124);
  pfStack_134 = (float *)0xf0deaa;
  fVar6 = (float10)FUN_00fdecda();
  local_124 = (float)fVar6;
  local_120 = (double)CONCAT44(local_124,(undefined4)local_120);
  afStack_b4[3] = 0.0;
  afStack_b4[2] = 0.0;
  afStack_b4[1] = 0.0;
  afStack_b4[0] = 0.0;
  pfStack_134 = &fStack_e0;
  fStack_bc = 0.0;
  uStack_c0 = 0;
  pfStack_138 = &local_f0;
  uStack_c4 = 0;
  uStack_c8 = 0;
  pfStack_13c = &local_100;
  fStack_d0 = 0.0;
  fStack_d4 = 0.0;
  fStack_d8 = 0.0;
  fStack_dc = 0.0;
  afStack_b4[4] = 1.0;
  fStack_b8 = 1.0;
  fStack_cc = 1.0;
  fStack_e0 = 1.0;
  pfStack_140 = (float *)0xf0df1d;
  D3DXVec3TransformNormal();
  fStack_bc = fStack_bc + local_118[3];
  fStack_b8 = local_118[4] + fStack_b8;
  afStack_b4[0] = local_118[5] + afStack_b4[0];
  afStack_b4[0x10] = 0.0;
  afStack_b4[0xf] = 0.0;
  afStack_b4[0xe] = 0.0;
  afStack_b4[0xd] = 0.0;
  afStack_b4[0xb] = 0.0;
  afStack_b4[10] = 0.0;
  afStack_b4[9] = 0.0;
  afStack_b4[8] = 0.0;
  afStack_b4[6] = 0.0;
  afStack_b4[5] = 0.0;
  afStack_b4[4] = 0.0;
  afStack_b4[3] = 0.0;
  afStack_b4[0x11] = 1.0;
  afStack_b4[0xc] = 1.0;
  afStack_b4[7] = 1.0;
  afStack_b4[2] = 1.0;
  if (fStack_128 != 0.0) {
    pfStack_144 = (float *)auStack_6c;
    pfStack_140 = (float *)fStack_128;
    pfStack_148 = (float *)0xf0dfeb;
    D3DXMatrixRotationY();
    pfStack_150 = afStack_b4;
    pfStack_14c = afStack_b4 + 0x10;
    ppfStack_154 = (float **)0xf0e003;
    pfStack_148 = pfStack_150;
    D3DXMatrixMultiply();
  }
  if (unaff_ESI != 0.0) {
    pfStack_144 = (float *)auStack_6c;
    pfStack_148 = (float *)0xf0e02b;
    D3DXMatrixRotationX();
    pfStack_150 = afStack_b4;
    pfStack_14c = afStack_b4 + 0x10;
    ppfStack_154 = (float **)0xf0e043;
    pfStack_148 = pfStack_150;
    D3DXMatrixMultiply();
  }
  pfStack_148 = &local_ec;
  pfStack_144 = afStack_b4 + 2;
  pfStack_14c = (float *)0xf0e05c;
  pfStack_140 = pfStack_148;
  D3DXMatrixMultiply();
  pfStack_14c = local_f8;
  local_118[0] = 0.0;
  local_118[1] = 0.0;
  local_118[2] = *(float *)(param_1 + 0x480);
  pfStack_150 = local_118;
  ppfStack_154 = &pfStack_138;
  pfStack_158 = (float *)0xf0e084;
  D3DXVec3TransformNormal();
  fStack_d4 = fStack_d4 + (float)pfStack_144;
  pfStack_158 = local_118 + 5;
  fStack_d0 = (float)pfStack_140 + fStack_d0;
  fStack_cc = (float)pfStack_13c + fStack_cc;
  local_124 = 0.0;
  local_120 = 0.0;
  D3DXVec3TransformNormal(&pfStack_134,&local_124);
  pfStack_140 = (float *)(*(float *)(param_1 + 0x460) + fStack_e0 + (float)pfStack_140);
  pfStack_13c = (float *)(*(float *)(param_1 + 0x464) + fStack_dc + (float)pfStack_13c);
  pfStack_138 = (float *)(*(float *)(param_1 + 0x468) + fStack_d8 + (float)pfStack_138);
  pfStack_134 = (float *)(*(float *)(param_1 + 0x46c) + (float)pfStack_134);
  ppfStack_154 = (float **)(32767.0 / *(float *)(param_1 + 0x484));
  pfStack_150 = (float *)(32767.0 / *(float *)(param_1 + 0x488));
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x18c);
  sVar4 = FUN_00fdbc60();
  ppfStack_154 = (float **)(int)sVar4;
  *(float *)(param_1 + 0x180) = (float)((float10)(int)ppfStack_154 / extraout_ST1 + extraout_ST0);
  fVar7 = (float10)(float)pfStack_150;
  sVar4 = FUN_00fdbc60();
  pfStack_150 = (float *)(int)sVar4;
  *(float *)(param_1 + 0x184) =
       (float)(extraout_ST0_00 + (float10)(int)pfStack_150 / extraout_ST1_00);
  fVar6 = extraout_ST0_00;
  sVar4 = FUN_00fdbc60();
  *(float *)(param_1 + 0x188) = (float)(extraout_ST0_01 + (float10)(int)sVar4 / fVar7);
  *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x25c);
  fVar2 = (float)((float10)*(float *)(param_1 + 0x180) - fVar6);
  fVar3 = (float)((float10)*(float *)(param_1 + 0x184) - extraout_ST1_01);
  local_120 = (double)CONCAT44(fVar3,fVar2);
  local_118[0] = (float)((float10)*(float *)(param_1 + 0x188) - extraout_ST0_01);
  pfStack_150 = (float *)(local_118[0] * local_118[0] + fVar3 * fVar3 + fVar2 * fVar2);
  fVar6 = (float10)FUN_00fdef70();
  pfStack_150 = (float *)(float)fVar6;
  fVar2 = *(float *)(param_1 + 0x48c) * *(float *)(param_1 + 0x484);
  if (fVar2 < (float)pfStack_150) {
    pfStack_150 = (float *)(*(float *)(param_1 + 0x484) - (float)pfStack_150);
    if (0.0 <= (float)pfStack_150) {
      *(float *)(param_1 + 0x25c) =
           *(float *)(param_1 + 0x25c) *
           ((float)pfStack_150 / (*(float *)(param_1 + 0x484) - fVar2));
    }
    else {
      *(undefined4 *)(param_1 + 0x25c) = 0;
    }
  }
  if (1.0 < *(float *)(param_1 + 0x25c)) {
    *(undefined4 *)(param_1 + 0x25c) = 0x3f800000;
  }
  if (*(float *)(param_1 + 0x25c) < 0.0) {
    *(undefined4 *)(param_1 + 0x25c) = 0;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    *pfVar1 = 0.0;
  }
  else {
    *pfVar1 = (float)(*(int *)(param_1 + 0x50) + 0x10);
  }
  FUN_00efb130(pfVar1);
  FUN_00efbd40(pfVar1);
  __security_check_cookie(uStack_44 ^ (uint)&pfStack_158);
  return;
}

// 00F12B50  FUN_00f12b50  size=749  [callgraph]
undefined4 __fastcall FUN_00f12b50(int param_1)

{
  short *psVar1;
  int iVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0x468) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x454) = 1;
  *(undefined4 *)(param_1 + 0x474) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x450) = 4;
  *(undefined4 *)(param_1 + 0x478) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x470) = 0;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar4 != (undefined4 *)0x0)) {
    psVar1 = (short *)*puVar4;
    if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
      uVar5 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar5);
    }
    if (psVar1 != (short *)0x0) {
      *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + (int)*psVar1;
      *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0x454) + (int)psVar1[1];
      if (psVar1[2] != 0) {
        *(float *)(param_1 + 0x468) = *(float *)(param_1 + 0x468) / (float)(psVar1[2] + 1);
      }
      *(int *)(param_1 + 0x45c) = (int)psVar1[3];
      *(float *)(param_1 + 0x474) = *(float *)(param_1 + 0x474) + (float)(int)psVar1[4] * 0.1;
      *(float *)(param_1 + 0x478) = (float)(int)psVar1[5] * 0.1 + *(float *)(param_1 + 0x478);
      fVar3 = (float)(int)(char)psVar1[0xb] * 0.0005;
      *(float *)(param_1 + 0x494) = fVar3;
      if ('2' < (char)psVar1[0xb]) {
        *(float *)(param_1 + 0x494) = (float)((char)psVar1[0xb] + -0x32) * 0.0035 + fVar3;
      }
      if ((char)psVar1[0xb] < -0x32) {
        *(float *)(param_1 + 0x494) =
             (float)((char)psVar1[0xb] + 0x32) * 0.0035 + *(float *)(param_1 + 0x494);
      }
      *(uint *)(param_1 + 0x480) = (int)*(char *)((int)psVar1 + 0x17) & 1;
      *(uint *)(param_1 + 0x484) = (int)*(char *)((int)psVar1 + 0x17) & 2;
      *(int *)(param_1 + 0x490) = (int)*(char *)((int)psVar1 + 0x13);
      *(int *)(param_1 + 0x49c) = (int)(char)psVar1[10];
    }
  }
  iVar6 = *(int *)(param_1 + 0x490);
  if ((iVar6 < 0) || (2 < iVar6)) {
    FUN_009cca90(param_1,&DAT_016da8d4,iVar6);
  }
  else if ((-1 < *(int *)(param_1 + 0x49c)) && (*(int *)(param_1 + 0x49c) < 3)) {
    iVar6 = FUN_009d4ac0();
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(iVar6 + 0x30);
      *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(iVar6 + 0x34);
    }
    if (*(float *)(param_1 + 0x474) == 0.0) {
      *(undefined4 *)(param_1 + 0x474) = 0x3f800000;
    }
    if (*(float *)(param_1 + 0x478) == 0.0) {
      *(undefined4 *)(param_1 + 0x478) = 0x3f800000;
    }
    iVar6 = FUN_00dd29b0(*(int *)(param_1 + 0x450) * 0xc + 0xfU & 0xfffffff0,0x10,0,0);
    *(int *)(param_1 + 0x458) = iVar6;
    if (iVar6 != 0) {
      FUN_00efcb90();
      FUN_00f0db60(&local_20,param_1 + 0x180,*(undefined4 *)(param_1 + 0x50),1);
      uVar7 = 0;
      if (*(int *)(param_1 + 0x450) != 0) {
        iVar6 = 0;
        do {
          iVar2 = *(int *)(param_1 + 0x458);
          *(undefined4 *)(iVar2 + iVar6) = local_20;
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + 0xc;
          *(undefined4 *)(iVar2 + -8 + iVar6) = local_1c;
          *(undefined4 *)(iVar2 + -4 + iVar6) = local_18;
        } while (uVar7 < *(uint *)(param_1 + 0x450));
      }
      *(undefined4 *)(param_1 + 0x46c) = 0;
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016da8fc);
    return 0;
  }
  return 0;
}

// 00F12E40  FUN_00f12e40  size=1572  [callgraph]
void __thiscall FUN_00f12e40(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined2 in_FPUControlWord;
  float10 fVar12;
  undefined1 auStack_44 [4];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_2c;
  longlong local_28;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_44;
  piVar2 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar2);
  FUN_00f0b530(piVar2);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar2);
  FUN_00efbd40(piVar2);
  local_2c = *(float *)(param_1 + 0x110) * *(float *)(param_1 + 0x468) * 1.001;
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x460);
  *(float *)(param_1 + 0x460) = *(float *)(param_1 + 0x460) + local_2c;
  *(float *)(param_1 + 0x46c) = *(float *)(param_1 + 0x46c) + 1.0;
  if (*(uint *)(param_1 + 0x45c) != 0) {
    uVar10 = (uint)local_2c >> 0x10;
    local_2c = (float)CONCAT22((short)uVar10,in_FPUControlWord);
    local_28 = (longlong)ROUND(*(float *)(param_1 + 0x460));
    if (*(uint *)(param_1 + 0x45c) <= (uint)(float)local_28) {
      pfVar6 = *(float **)(*param_2 + 0x10);
      if (pfVar6 != (float *)0x0) {
        fVar3 = *pfVar6;
        uVar10 = *(uint *)(param_1 + 0x450);
        iVar11 = uVar10 - 1;
        fVar4 = pfVar6[1];
        fVar5 = pfVar6[2];
        if (-1 < iVar11) {
          if (3 < (int)uVar10) {
            uVar10 = uVar10 >> 2;
            iVar9 = iVar11 * 0xc;
            iVar11 = iVar11 + uVar10 * -4;
            do {
              pfVar6 = (float *)(*(int *)(param_1 + 0x458) + iVar9);
              iVar1 = iVar9 + -0x24;
              *pfVar6 = *(float *)(*(int *)(param_1 + 0x458) + iVar9) + fVar3;
              pfVar6[1] = fVar4 + pfVar6[1];
              pfVar6[2] = fVar5 + pfVar6[2];
              pfVar6 = (float *)(*(int *)(param_1 + 0x458) + -0xc + iVar9);
              pfVar7 = (float *)(*(int *)(param_1 + 0x458) + -0xc + iVar9);
              iVar9 = iVar9 + -0x30;
              *pfVar7 = *pfVar6 + fVar3;
              pfVar7[1] = fVar4 + pfVar7[1];
              pfVar7[2] = fVar5 + pfVar7[2];
              pfVar6 = (float *)(*(int *)(param_1 + 0x458) + 0xc + iVar1);
              *pfVar6 = *(float *)(*(int *)(param_1 + 0x458) + 0xc + iVar1) + fVar3;
              pfVar6[1] = fVar4 + pfVar6[1];
              pfVar6[2] = fVar5 + pfVar6[2];
              pfVar6 = (float *)(*(int *)(param_1 + 0x458) + iVar1);
              uVar10 = uVar10 - 1;
              *pfVar6 = *(float *)(*(int *)(param_1 + 0x458) + iVar1) + fVar3;
              pfVar6[1] = fVar4 + pfVar6[1];
              pfVar6[2] = fVar5 + pfVar6[2];
            } while (uVar10 != 0);
          }
          if (-1 < iVar11) {
            iVar9 = iVar11 * 0xc;
            do {
              pfVar6 = (float *)(*(int *)(param_1 + 0x458) + iVar9);
              pfVar7 = (float *)(*(int *)(param_1 + 0x458) + iVar9);
              iVar9 = iVar9 + -0xc;
              iVar11 = iVar11 + -1;
              *pfVar7 = *pfVar6 + fVar3;
              pfVar7[1] = fVar4 + pfVar7[1];
              pfVar7[2] = fVar5 + pfVar7[2];
            } while (-1 < iVar11);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x468) = 0x3f800000;
      goto LAB_00f13369;
    }
  }
  iVar11 = FUN_00fdbc60();
  iVar9 = FUN_00fdbc60();
  if ((iVar11 != iVar9) && (iVar11 = *(int *)(param_1 + 0x450) + -1, iVar11 != 0)) {
    iVar9 = iVar11 * 0xc;
    do {
      puVar8 = (undefined4 *)(*(int *)(param_1 + 0x458) + iVar9);
      *puVar8 = *(undefined4 *)(*(int *)(param_1 + 0x458) + -0xc + iVar9);
      iVar9 = iVar9 + -0xc;
      iVar11 = iVar11 + -1;
      puVar8[1] = puVar8[-2];
      puVar8[2] = puVar8[-1];
    } while (iVar11 != 0);
  }
  puVar8 = (undefined4 *)*param_2;
  pfVar6 = (float *)puVar8[4];
  local_28 = CONCAT44(local_28._4_4_,puVar8);
  if (pfVar6 != (float *)0x0) {
    local_40 = *pfVar6;
    uVar10 = *(uint *)(param_1 + 0x450);
    iVar11 = uVar10 - 1;
    local_3c = pfVar6[1];
    local_38 = pfVar6[2];
    if (-1 < iVar11) {
      if (3 < (int)uVar10) {
        uVar10 = uVar10 >> 2;
        iVar9 = iVar11 * 0xc;
        iVar11 = iVar11 + uVar10 * -4;
        do {
          pfVar6 = (float *)(*(int *)(param_1 + 0x458) + iVar9);
          iVar1 = iVar9 + -0x24;
          *pfVar6 = *(float *)(*(int *)(param_1 + 0x458) + iVar9) + local_40;
          pfVar6[1] = local_3c + pfVar6[1];
          pfVar6[2] = pfVar6[2] + local_38;
          pfVar6 = (float *)(*(int *)(param_1 + 0x458) + -0xc + iVar9);
          pfVar7 = (float *)(*(int *)(param_1 + 0x458) + -0xc + iVar9);
          iVar9 = iVar9 + -0x30;
          *pfVar7 = *pfVar6 + local_40;
          pfVar7[1] = local_3c + pfVar7[1];
          pfVar7[2] = pfVar7[2] + local_38;
          pfVar6 = (float *)(*(int *)(param_1 + 0x458) + 0xc + iVar1);
          *pfVar6 = *(float *)(*(int *)(param_1 + 0x458) + 0xc + iVar1) + local_40;
          pfVar6[1] = local_3c + pfVar6[1];
          pfVar6[2] = pfVar6[2] + local_38;
          pfVar6 = (float *)(*(int *)(param_1 + 0x458) + iVar1);
          uVar10 = uVar10 - 1;
          *pfVar6 = *(float *)(*(int *)(param_1 + 0x458) + iVar1) + local_40;
          pfVar6[1] = local_3c + pfVar6[1];
          pfVar6[2] = pfVar6[2] + local_38;
        } while (uVar10 != 0);
      }
      if (-1 < iVar11) {
        iVar9 = iVar11 * 0xc;
        do {
          pfVar6 = (float *)(*(int *)(param_1 + 0x458) + iVar9);
          pfVar7 = (float *)(*(int *)(param_1 + 0x458) + iVar9);
          iVar9 = iVar9 + -0xc;
          iVar11 = iVar11 + -1;
          *pfVar7 = *pfVar6 + local_40;
          pfVar7[1] = local_3c + pfVar7[1];
          pfVar7[2] = pfVar7[2] + local_38;
        } while (-1 < iVar11);
      }
    }
  }
  pfVar6 = *(float **)(param_1 + 0x458);
  FUN_00effcf0(&local_40,param_1 + 0x180,*(undefined4 *)(param_1 + 0x50),*puVar8,puVar8[6],1);
  *pfVar6 = local_40;
  pfVar6[1] = local_3c;
  pfVar6[2] = local_38;
  if ((*(float *)(param_1 + 0x47c) != 0.0) && (uVar10 = 1, 1 < *(uint *)(param_1 + 0x450))) {
    iVar11 = 0xc;
    do {
      iVar9 = *(int *)(param_1 + 0x458) + iVar11;
      local_20 = *(float *)(*(int *)(param_1 + 0x458) + iVar11) - *(float *)(iVar9 + -0xc);
      local_1c = *(float *)(iVar9 + 4) - *(float *)(iVar9 + -8);
      local_18 = *(float *)(iVar9 + 8) - *(float *)(iVar9 + -4);
      local_2c = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
      fVar12 = (float10)FUN_00fdef70();
      local_28 = CONCAT44(local_28._4_4_,(float)fVar12);
      if (*(float *)(param_1 + 0x47c) < (float)fVar12) {
        if (local_2c <= 0.0) {
          FUN_00dd5650(&DAT_0163d0ac);
          local_20 = 0.0;
          local_1c = 1.0;
          local_18 = 0.0;
        }
        D3DXVec3Normalize(&local_20,&local_20);
        fVar3 = *(float *)(param_1 + 0x47c);
        local_28 = CONCAT44(local_28._4_4_,fVar3);
        pfVar6 = (float *)(*(int *)(param_1 + 0x458) + iVar11);
        local_40 = pfVar6[-3] + fVar3 * local_20;
        local_3c = pfVar6[-2] + local_1c * fVar3;
        local_38 = pfVar6[-1] + fVar3 * local_18;
        *pfVar6 = local_40;
        pfVar6[1] = local_3c;
        pfVar6[2] = local_38;
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 0xc;
    } while (uVar10 < *(uint *)(param_1 + 0x450));
  }
LAB_00f13369:
  pfVar6 = *(float **)(param_1 + 0x458);
  iVar11 = *(int *)(param_1 + 0x450);
  local_20 = (pfVar6[iVar11 * 3 + -3] + *pfVar6) * 0.5;
  local_1c = (pfVar6[iVar11 * 3 + -2] + pfVar6[1]) * 0.5;
  local_18 = (pfVar6[iVar11 * 3 + -1] + pfVar6[2]) * 0.5;
  *(float *)(param_1 + 0x130) = local_20;
  *(float *)(param_1 + 0x134) = local_1c;
  *(float *)(param_1 + 0x138) = local_18;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  pfVar6 = *(float **)(param_1 + 0x458);
  iVar11 = *(int *)(param_1 + 0x450);
  local_40 = *pfVar6 - pfVar6[iVar11 * 3 + -3];
  local_3c = pfVar6[1] - pfVar6[iVar11 * 3 + -2];
  local_38 = pfVar6[2] - pfVar6[iVar11 * 3 + -1];
  local_28._0_4_ = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
  fVar12 = (float10)FUN_00fdef70();
  local_28 = CONCAT44(local_28._4_4_,(float)fVar12);
  *(float *)(param_1 + 300) = (float)fVar12;
  FUN_00ed6110();
  __security_check_cookie(local_14 ^ (uint)auStack_44);
  return;
}

// 00F13470  cEspChain::vf08  size=1695  [class]
void __fastcall cEspChain::vf08(int param_1)

{
  int *piVar1;
  void *_Dst;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  undefined1 local_a0 [64];
  float local_60 [19];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_e4;
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
  _Dst = (void *)(param_1 + 0x450);
  FID_conflict__memcpy(_Dst,(void *)(param_1 + 0x200),0x40);
  iVar7 = *(int *)(param_1 + 0x50);
  if (iVar7 != 0) {
    pfVar6 = (float *)(iVar7 + 0x10);
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) != 0) {
      local_dc = *pfVar6;
      local_d0 = *(float *)(iVar7 + 0x14);
      local_c4 = *(float *)(iVar7 + 0x20);
      local_c8 = *(float *)(iVar7 + 0x24);
      local_e0 = *(float *)(iVar7 + 0x28);
      local_d4 = *(float *)(iVar7 + 0x30);
      local_cc = *(float *)(iVar7 + 0x34);
      local_e4 = *(float *)(iVar7 + 0x38);
      local_d8 = local_d0 * local_d0 + local_dc * local_dc +
                 *(float *)(iVar7 + 0x18) * *(float *)(iVar7 + 0x18);
      fVar8 = (float10)FUN_00fdef70();
      local_d8 = (float)fVar8;
      local_c0 = 1.0 / local_d8;
      local_e0 = local_c8 * local_c8 + local_c4 * local_c4 + local_e0 * local_e0;
      fVar8 = (float10)FUN_00fdef70();
      local_e0 = (float)fVar8;
      local_bc = 1.0 / local_e0;
      local_e4 = local_cc * local_cc + local_d4 * local_d4 + local_e4 * local_e4;
      fVar8 = (float10)FUN_00fdef70();
      local_e4 = (float)fVar8;
      local_b8 = 1.0 / local_e4;
      FUN_00ddd140(local_a0,&local_c0);
      D3DXMatrixMultiply(local_60,local_a0,pfVar6);
      pfVar6 = local_60;
    }
    D3DXMatrixMultiply(_Dst,_Dst,pfVar6);
  }
  if (*(int *)(param_1 + 0x4b4) == 0) {
    iVar7 = *(int *)(param_1 + 0x4b0);
  }
  else {
    iVar7 = 0;
  }
  if (iVar7 < *(int *)(param_1 + 0x494)) {
    local_dc = (float)(iVar7 << 4);
    do {
      FUN_00ed6290(&local_c0,*(undefined4 *)(param_1 + 0x24),
                   *(undefined4 *)(*(int *)(param_1 + 0x4ac) + *(int *)(param_1 + 0x4b0) * 4));
      local_e4 = *(float *)(param_1 + 0x11c) - *(float *)(*(int *)(param_1 + 0x4a8) + iVar7 * 4);
      FUN_00f00560(*(int *)(param_1 + 0x4a4) + (int)local_dc,local_e4,
                   *(undefined4 *)(param_1 + 0x24),&local_c0);
      local_dc = (float)((int)local_dc + 0x10);
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(param_1 + 0x494));
  }
  if (((float)(int)*(short *)(param_1 + 0x4c6) <= *(float *)(param_1 + 0x11c)) &&
     ((*(short *)(param_1 + 0x4c8) == 0 ||
      (*(float *)(param_1 + 0x11c) <
       (float)((int)*(short *)(param_1 + 0x4c8) + (int)*(short *)(param_1 + 0x4c6)))))) {
    local_d4 = *(float *)(param_1 + 0x11c);
    *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_1 + 0x4b8);
    *(float *)(param_1 + 0x4b8) =
         *(float *)(param_1 + 0x4b8) - (*(float *)(param_1 + 0x118) - local_d4);
    fVar2 = *(float *)(param_1 + 0x4b8);
    while (fVar2 <= 0.0) {
      local_e4 = (float)(int)*(short *)(param_1 + 0x4c4);
      fVar2 = (float)(int)local_e4 + 0.999999;
      if (*(float *)(param_1 + 0x4b8) < -100.0 == (*(float *)(param_1 + 0x4b8) == -100.0)) {
        *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_1 + 0x4b8);
        *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4b8) + fVar2;
      }
      else {
        *(float *)(param_1 + 0x4b8) = fVar2;
        *(float *)(param_1 + 0x4bc) = fVar2 - 1.0;
      }
      local_dc = 0.0;
      if (0 < *(short *)(param_1 + 0x4c0)) {
        do {
          iVar7 = *(int *)(param_1 + 0x4b0);
          if (iVar7 == 0) {
            iVar7 = *(int *)(param_1 + 0x494);
            *(undefined4 *)(param_1 + 0x4b4) = 1;
          }
          *(int *)(param_1 + 0x4b0) = iVar7 + -1;
          uVar4 = FUN_00ddbbe0();
          *(undefined4 *)(*(int *)(param_1 + 0x4ac) + *(int *)(param_1 + 0x4b0) * 4) = uVar4;
          FUN_00dde2a0(0,0xffff);
          FUN_00ddbbb0();
          FUN_00ddbbd0(*(undefined4 *)(*(int *)(param_1 + 0x4ac) + *(int *)(param_1 + 0x4b0) * 4));
          iVar5 = *(int *)(param_1 + 0x4b0);
          iVar7 = *(int *)(param_1 + 0x498);
          *(float *)(iVar7 + iVar5 * 0xc) =
               *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
          iVar7 = iVar7 + iVar5 * 0xc;
          *(float *)(iVar7 + 4) = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x174);
          *(float *)(iVar7 + 8) = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x178);
          pfVar6 = (float *)(*(int *)(param_1 + 0x498) + *(int *)(param_1 + 0x4b0) * 0xc);
          D3DXVec3TransformNormal(pfVar6,pfVar6,_Dst);
          *pfVar6 = *(float *)(param_1 + 0x480) + *pfVar6;
          pfVar6[1] = *(float *)(param_1 + 0x484) + pfVar6[1];
          pfVar6[2] = *(float *)(param_1 + 0x488) + pfVar6[2];
          FUN_00ed6290(&local_c0,*(undefined4 *)(param_1 + 0x24),
                       *(undefined4 *)(*(int *)(param_1 + 0x4ac) + *(int *)(param_1 + 0x4b0) * 4));
          fVar2 = *(float *)(param_1 + 0x118);
          iVar7 = *(int *)(param_1 + 0x24);
          pfVar6 = (float *)(*(int *)(param_1 + 0x4b0) * 0x10 + *(int *)(param_1 + 0x4a4));
          *pfVar6 = local_c0;
          pfVar6[1] = local_bc;
          pfVar6[2] = local_b8;
          pfVar6[3] = fStack_b4;
          if (*(char *)(iVar7 + 0x79) == '\x01') {
            *pfVar6 = *(float *)(iVar7 + 0xfc) * local_c0;
            pfVar6[1] = *(float *)(iVar7 + 0x100) * local_bc;
            pfVar6[2] = local_b8 * *(float *)(iVar7 + 0x104);
            pfVar6[3] = fStack_b4 * *(float *)(iVar7 + 0x108);
          }
          local_e4 = (float)(int)*(short *)(iVar7 + 0xea);
          if (fVar2 < (float)(int)local_e4) {
            pfVar6[3] = 0.0;
          }
          *(undefined4 *)(*(int *)(param_1 + 0x4a8) + *(int *)(param_1 + 0x4b0) * 4) =
               *(undefined4 *)(param_1 + 0x11c);
          FUN_00ddbbc0();
          local_dc = (float)((int)local_dc + 1);
        } while ((int)local_dc < (int)*(short *)(param_1 + 0x4c0));
      }
      fVar2 = *(float *)(param_1 + 0x4b8);
    }
  }
  if (*(int *)(param_1 + 0x4b4) == 0) {
    iVar7 = *(int *)(param_1 + 0x4b0);
    iVar5 = *(int *)(param_1 + 0x494) + -1;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x4b0);
    iVar5 = (*(int *)(param_1 + 0x494) + -1 + iVar7) % *(int *)(param_1 + 0x494);
  }
  iVar3 = *(int *)(param_1 + 0x498);
  iVar5 = iVar5 * 0xc;
  iVar7 = iVar7 * 0xc;
  *(float *)(param_1 + 0x130) = *(float *)(iVar5 + iVar3) + *(float *)(iVar7 + iVar3);
  *(float *)(param_1 + 0x134) = *(float *)(iVar5 + 4 + iVar3) + *(float *)(iVar7 + 4 + iVar3);
  *(float *)(param_1 + 0x138) = *(float *)(iVar5 + 8 + iVar3) + *(float *)(iVar7 + 8 + iVar3);
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x130) * 0.5;
  *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x134) * 0.5;
  *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0x138) * 0.5;
  *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x13c) * 0.5;
  iVar3 = *(int *)(param_1 + 0x498);
  local_d4 = *(float *)(iVar5 + iVar3) - *(float *)(iVar7 + iVar3);
  fVar2 = *(float *)(iVar5 + 4 + iVar3) - *(float *)(iVar7 + 4 + iVar3);
  local_cc = *(float *)(iVar5 + 8 + iVar3) - *(float *)(iVar7 + 8 + iVar3);
  local_e4 = fVar2 * fVar2 + local_d4 * local_d4 + local_cc * local_cc;
  fVar8 = (float10)FUN_00fdef70();
  local_e4 = (float)fVar8;
  *(float *)(param_1 + 300) = local_e4;
  __security_check_cookie(local_14 ^ (uint)&local_e4);
  return;
}

// 00F278F0  cEspChain::vf10  size=563  [class]
void __fastcall cEspChain::vf10(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;
  int local_4;
  
  FUN_00efed20();
  if ((float)param_1[0x97] * (float)param_1[0x49] < 0.01 !=
      ((float)param_1[0x97] * (float)param_1[0x49] == 0.01)) {
    return;
  }
  if (((DAT_01edd490 == 0) || (iVar3 = cPrimHeap::allocBuffer(400,0x20), iVar3 == 0)) ||
     (iVar3 = cEspDrawChain::cEspDrawChain(), iVar3 == 0)) {
    FUN_009cca90(param_1,&DAT_016daaf0);
    return;
  }
  *(undefined4 *)(iVar3 + 0x78) = 0;
  *(undefined4 *)(iVar3 + 0x74) = 0;
  piVar1 = param_1 + 0xf2;
  *(undefined4 *)(iVar3 + 0x70) = 0;
  *(undefined4 *)(iVar3 + 0x6c) = 0;
  *(undefined4 *)(iVar3 + 100) = 0;
  *(undefined4 *)(iVar3 + 0x60) = 0;
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  *(undefined4 *)(iVar3 + 0x50) = 0;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined4 *)(iVar3 + 0x48) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0;
  *(undefined4 *)(iVar3 + 0x7c) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x68) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x54) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x40) = 0x3f800000;
  FUN_00edfcd0(piVar1);
  FUN_00f26b40(iVar3);
  iVar7 = param_1[0x21];
  iVar2 = param_1[10];
  FUN_00f45d50();
  local_14 = iVar3;
  local_10 = param_1;
  local_c = piVar1;
  local_8 = iVar2;
  local_4 = iVar7;
  FUN_00f49500(&local_14);
  iVar7 = param_1[0x125];
  if (param_1[0x12d] == 0) {
    iVar7 = (iVar7 - param_1[300]) + 1;
  }
  iVar2 = iVar7 * 4;
  iVar4 = FUN_00f51070(iVar3 + 0xd0,0xc,iVar2);
  if (iVar4 == 0) {
    FUN_009cca90(param_1,&DAT_016dab18,iVar2);
    return;
  }
  iVar4 = EspPrimitiveSystem::createIndexBuffer(iVar3 + 0x170,2,iVar7 * 6);
  if (iVar4 == 0) {
    FUN_009cca90(param_1,&DAT_016dab30,iVar7 * 6);
    return;
  }
  iVar7 = FUN_00f51070(iVar3 + 0xf8,8,iVar2);
  if (iVar7 != 0) {
    iVar7 = FUN_00f3ab20(iVar3 + 0x148,iVar2);
    if (iVar7 != 0) {
      (**(code **)(*param_1 + 0x20))(iVar3 + 0xd0);
      (**(code **)(*param_1 + 0x28))(iVar3 + 0x170);
      (**(code **)(*param_1 + 0x1c))(iVar3 + 0xf8);
      (**(code **)(*param_1 + 0x24))(iVar3 + 0x148);
      FUN_00edfcd0(piVar1);
      uVar5 = FUN_00e9fe70();
      uVar6 = FUN_00e9fe60(uVar5);
      FUN_00edc9e0(iVar3,iVar3,piVar1,uVar6,uVar5);
      return;
    }
    FUN_009cca90(param_1,&DAT_016dab68,iVar2);
    return;
  }
  FUN_009cca90(param_1,&DAT_016dab50,iVar2);
  return;
}

// 00F2E180  cEspChain::vf04  size=93  [class]
undefined4 __thiscall
cEspChain::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar1 != 0) {
    iVar1 = FUN_00ee2020();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x4b8) = 0xc2c80000;
      *(undefined4 *)(param_1 + 0x4bc) = 0xc2ca0000;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x10000000;
      return 1;
    }
  }
  return 0;
}


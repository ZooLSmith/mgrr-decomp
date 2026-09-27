// src/unsorted/unit_00A0A520.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A0A520..00A0C900, 47 functions

#include "types.h"

// 00A0A520  FUN_00a0a520  size=344  [run]
void __fastcall FUN_00a0a520(int param_1)

{
  undefined4 *puVar1;
  undefined1 *puStack_e4;
  undefined4 *puStack_e0;
  undefined4 *puStack_dc;
  undefined4 *puStack_d8;
  undefined4 *puStack_d4;
  undefined1 auStack_c4 [4];
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [13];
  undefined1 auStack_74 [112];
  
  puVar1 = (undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  puStack_dc = &local_b0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  *puVar1 = 0x3f800000;
  local_ac = 0x3f800000;
  local_b8 = 1.0;
  local_b0 = 0;
  local_a8[0] = 0;
  local_c0 = 0;
  local_bc = 0.0;
  puStack_e0 = (undefined4 *)0xa0a590;
  puStack_d8 = puStack_dc;
  puStack_d4 = puVar1;
  D3DXVec3TransformNormal();
  local_bc = *(float *)(param_1 + 0xe0) + local_bc;
  puStack_e4 = &stack0xffffff34;
  local_b8 = *(float *)(param_1 + 0xe4) + local_b8;
  fStack_b4 = *(float *)(param_1 + 0xe8) + fStack_b4;
  puStack_e0 = puVar1;
  D3DXVec3TransformNormal(puStack_e4);
  puStack_d8 = (undefined4 *)(*(float *)(param_1 + 0xe0) + (float)puStack_d8);
  puStack_d4 = (undefined4 *)(*(float *)(param_1 + 0xe4) + (float)puStack_d4);
  local_b8 = 0.0;
  fStack_b4 = 1.0;
  local_b0 = 0;
  FUN_00ddc1d0(local_a8,(undefined4 *)(param_1 + 0x90),5);
  D3DXVec3TransformNormal(&local_b8,&local_b8,local_a8);
  FUN_00de2bc0(auStack_74,&puStack_d4,auStack_c4,&puStack_e4,0x3f800000,0x40490fdb);
  D3DXMatrixMultiply(puVar1,puVar1,auStack_74);
  D3DXMatrixInverse(param_1 + 0xf0,0,puVar1);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}

// 00A0A680  FUN_00a0a680  size=236  [run]
undefined4 __thiscall FUN_00a0a680(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  
  uVar5 = *(ushort *)(param_2 + 0x44);
  if (uVar5 != 0) {
    iVar7 = FUN_00a07660((uint)uVar5,*(undefined4 *)(param_2 + 0x70),param_3);
    if (iVar7 == 0) {
      return 0;
    }
    if (0 < (short)uVar5) {
      iVar7 = 0;
      psVar8 = (short *)(*(int *)(param_2 + 0x40) + 4);
      param_2 = (uint)uVar5;
      do {
        iVar1 = iVar7 + *(int *)(param_1 + 0x350);
        iVar9 = param_1;
        if (-1 < *psVar8) {
          iVar9 = *psVar8 * 0xb0 + *(int *)(param_1 + 0x350);
        }
        *(int *)(iVar1 + 0xa8) = iVar9;
        uVar2 = *(undefined4 *)(psVar8 + 2);
        uVar3 = *(undefined4 *)(psVar8 + 4);
        sVar6 = psVar8[-2];
        uVar4 = *(undefined4 *)(psVar8 + 6);
        iVar7 = iVar7 + 0xb0;
        param_2 = param_2 - 1;
        *(undefined4 *)(iVar1 + 0x90) = 0;
        *(undefined4 *)(iVar1 + 0x94) = 0;
        *(undefined4 *)(iVar1 + 0x98) = 0;
        *(undefined4 *)(iVar1 + 0x70) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0x74) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0x78) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0x5c) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0x50) = uVar2;
        *(undefined4 *)(iVar1 + 0x54) = uVar3;
        *(undefined4 *)(iVar1 + 0x58) = uVar4;
        *(short *)(iVar1 + 0xa0) = sVar6;
        *(int *)(*(int *)(param_1 + 0x354) + psVar8[-1] * 4) = iVar1;
        psVar8 = psVar8 + 0x10;
      } while (param_2 != 0);
    }
  }
  return 1;
}

// 00A0A770  FUN_00a0a770  size=276  [run]
undefined4 __thiscall FUN_00a0a770(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (*(short *)(param_2 + 0x32c) == *(short *)(param_1 + 0x32c)) {
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x32c)) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x328);
        puVar1 = (undefined4 *)(*(int *)(param_2 + 0x328) + iVar4);
        *(undefined4 *)(iVar2 + 0x51c + iVar4) =
             *(undefined4 *)(*(int *)(param_2 + 0x328) + 0x51c + iVar4);
        puVar3 = (undefined4 *)(iVar2 + iVar4);
        puVar3[0x145] = puVar1[0x145];
        puVar3[0x146] = puVar1[0x146];
        puVar3[0x143] = puVar1[0x143];
        puVar3[0x144] = puVar1[0x144];
        puVar3[0x142] = puVar1[0x142];
        puVar3[0x141] = puVar1[0x141];
        puVar3[0x120] = puVar1[0x120];
        iVar5 = iVar5 + 1;
        puVar3[0x121] = puVar1[0x121];
        iVar4 = iVar4 + 0x560;
        puVar3[0x122] = puVar1[0x122];
        puVar3[0x123] = puVar1[0x123];
        puVar6 = puVar1;
        puVar7 = puVar3;
        for (iVar2 = 0x3c; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        puVar6 = puVar1 + 0x125;
        puVar7 = puVar3 + 0x125;
        for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      } while (iVar5 < *(short *)(param_1 + 0x32c));
    }
    return 1;
  }
  return 0;
}

// 00A0A890  FUN_00a0a890  size=569  [run]
undefined4 __thiscall FUN_00a0a890(int param_1,float *param_2,float *param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  float unaff_ESI;
  float fVar3;
  float *pfVar4;
  float fStack_6c;
  float fStack_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44 [2];
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  
  iVar1 = *(int *)(param_1 + 0x330);
  fVar3 = (float)(*(int *)(param_1 + 0x334) + 0x10);
  if ((((iVar1 != 0) && (-1 < param_4)) && (param_4 < *(int *)(iVar1 + 0x68))) &&
     (pfVar2 = (float *)(param_4 * 0x50 + *(int *)(iVar1 + 100)), pfVar2 != (float *)0x0)) {
    local_50 = (*pfVar2 - pfVar2[4]) * 0.5;
    local_4c = (pfVar2[1] - pfVar2[5]) * 0.5;
    local_48 = (pfVar2[2] - pfVar2[6]) * 0.5;
    local_44[0] = (pfVar2[3] - pfVar2[7]) * 0.5;
    local_60 = (pfVar2[4] + *pfVar2) * 0.5;
    local_5c = (pfVar2[5] + pfVar2[1]) * 0.5;
    local_58 = (pfVar2[6] + pfVar2[2]) * 0.5;
    local_54 = (pfVar2[7] + pfVar2[3]) * 0.5;
    D3DXVec4Transform(&local_60,&local_60);
    local_4c = local_5c;
    pfVar2 = &local_4c;
    local_48 = 0.0;
    local_44[0] = 0.0;
    uStack_3c = 0;
    fStack_38 = local_58;
    uStack_34 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    fStack_24 = local_54;
    pfVar4 = pfVar2;
    D3DXVec3TransformNormal(pfVar2,pfVar2,fVar3);
    D3DXVec3TransformNormal(&local_48);
    D3DXVec3TransformNormal(local_44,local_44,fVar3);
    local_60 = ABS(local_60);
    local_5c = ABS(local_5c);
    local_58 = ABS(local_58);
    if (local_60 < ABS(unaff_ESI)) {
      local_60 = ABS(unaff_ESI);
    }
    if (local_60 <= ABS(local_50)) {
      local_60 = ABS(local_50);
    }
    if (local_5c < ABS(fStack_6c)) {
      local_5c = ABS(fStack_6c);
    }
    if (local_5c <= ABS(local_4c)) {
      local_5c = ABS(local_4c);
    }
    if (local_58 < ABS(fStack_68)) {
      local_58 = ABS(fStack_68);
    }
    if (local_58 <= ABS(local_48)) {
      local_58 = ABS(local_48);
    }
    *param_2 = (float)&local_48 - local_60;
    param_2[1] = fVar3 - local_5c;
    param_2[2] = (float)pfVar2 - local_58;
    param_2[3] = (float)pfVar4 - fVar3;
    *param_3 = (float)&local_48 + local_60;
    param_3[1] = fVar3 + local_5c;
    param_3[2] = (float)pfVar2 + local_58;
    param_3[3] = fVar3 + (float)pfVar4;
    return 1;
  }
  return 0;
}

// 00A0AAD0  FUN_00a0aad0  size=93  [run]
void __fastcall FUN_00a0aad0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0x364) & 0x100) != 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x47c)) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x474) + 0xc + iVar3;
        iVar2 = *(int *)(iVar1 + 0x28);
        if (iVar2 != -1) {
          FUN_00f9a1d0(iVar2);
          *(undefined4 *)(iVar1 + 0x28) = 0xffffffff;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x44;
      } while (iVar4 < *(int *)(param_1 + 0x47c));
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffeff;
  }
  return;
}

// 00A0AB30  FUN_00a0ab30  size=182  [run]
void __thiscall FUN_00a0ab30(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x40000;
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x364) & 0xfffdffff;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x364) | 0x20000;
  }
  *(uint *)(param_1 + 0x364) = uVar1;
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfff7ffff;
  if (DAT_01f126c8 != 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x200;
  }
  *(undefined2 *)(param_1 + 0x470) = 0x101;
  *(undefined1 *)(param_1 + 0x472) = 0xff;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0;
  if ((param_2 != 0) && (iVar3 = 0, 0 < *(short *)(param_1 + 0x32c))) {
    piVar2 = (int *)(*(int *)(param_1 + 0x328) + 0x508);
    while (((*(byte *)(piVar2 + 5) & 4) == 0 && (*piVar2 == 0))) {
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x158;
      if (*(short *)(param_1 + 0x32c) <= iVar3) {
        return;
      }
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x80000;
  }
  return;
}

// 00A0ABF0  FUN_00a0abf0  size=97  [run]
undefined4 __fastcall FUN_00a0abf0(int param_1)

{
  float *pfVar1;
  int iVar2;
  
  if ((*(float *)(param_1 + 0x45c) < 1.0) || ((*(uint *)(param_1 + 0x364) & 0x80000) != 0)) {
    return 0;
  }
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    pfVar1 = (float *)(*(int *)(param_1 + 800) + 0x2c);
    do {
      if ((pfVar1[-4] < 1.0) || (*pfVar1 < 1.0)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + 0x1c;
    } while (iVar2 < *(short *)(param_1 + 0x324));
  }
  return 1;
}

// 00A0ACC0  FUN_00a0acc0  size=184  [run]
void FUN_00a0acc0(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  *param_1 = param_4 + 0x40;
  param_1[1] = param_3 + 0xf0;
  param_1[2] = param_3 + 0x470;
  param_1[4] = *(int *)(param_4 + 0x68);
  param_1[5] = *(int *)(param_4 + 0x6c);
  param_1[3] = *(int *)(param_4 + 100);
  *(short *)(param_1 + 6) = (short)param_2[2];
  *(undefined2 *)((int)param_1 + 0x1a) = *(undefined2 *)((int)param_2 + 10);
  param_1[7] = (uint)*(byte *)(param_2 + 3);
  param_1[8] = *param_2;
  param_1[9] = 1;
  param_1[0xb] = param_6;
  param_1[0xc] = -1;
  if (param_5 == 0) {
    param_1[10] = 0;
  }
  else {
    if (((*(byte *)(param_3 + 0x51c) & 4) == 0) && ((*(byte *)(param_4 + 0x38) & 2) == 0)) {
      param_1[10] = 1;
    }
    else {
      param_1[10] = 2;
    }
    if ((param_1[10] == 2) || ((*(uint *)(param_3 + 0x51c) & 0x400000) != 0)) {
      param_1[0xc] = *(int *)(param_3 + 0x514);
      return;
    }
  }
  return;
}

// 00A0AD80  FUN_00a0ad80  size=194  [run]
void __thiscall FUN_00a0ad80(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  param_2[0xd] = *(uint *)(param_1 + 0x364) & 0x800;
  *param_2 = param_1 + 0x250;
  param_2[1] = *param_3;
  param_2[2] = param_3[1];
  param_2[3] = param_3[2];
  param_2[4] = param_3[3];
  param_2[5] = param_3[0xc];
  iVar1 = param_3[7];
  if ((iVar1 < 0) || (*(int *)(param_1 + 0x454) < iVar1)) {
    param_2[9] = -1;
  }
  else {
    param_2[9] = iVar1 + -1;
  }
  *(undefined2 *)(param_2 + 8) = *(undefined2 *)((int)param_3 + 0x1a);
  param_2[6] = param_3[8];
  param_2[7] = param_3[9];
  param_2[0xb] = *(int *)(param_1 + 0x450);
  param_2[0xc] = *(int *)(param_1 + 0x454);
  if (param_4 == 0) {
    if (param_2[10] != -1) {
      FUN_00f9a1d0(param_2[10]);
      param_2[10] = -1;
      return;
    }
  }
  else {
    if (param_2[10] == -1) {
      iVar1 = OcclusionQueryManager::AllocQuery();
      param_2[10] = iVar1;
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100;
  }
  return;
}

// 00A0AE50  FUN_00a0ae50  size=168  [run]
void __thiscall FUN_00a0ae50(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  
  if (0 < *(int *)(param_2 + 0x24)) {
    if (*(int *)(param_1 + 0x478) < *(int *)(param_1 + 0x47c)) {
      puVar1 = (uint *)(*(int *)(param_1 + 0x474) + *(int *)(param_1 + 0x478) * 0x44);
      *puVar1 = (uint)*(ushort *)(param_2 + 0x18);
      uVar2 = *(uint *)(param_2 + 0x28);
      puVar1[1] = uVar2;
      puVar1[2] = *(uint *)(param_2 + 0x2c);
      bVar3 = false;
      if ((((param_3 != 0) && (bVar3 = uVar2 == 1, (DAT_01bea084 & 0x80000) != 0)) &&
          (*(int *)(param_2 + 4) != 0)) && (*(int *)(*(int *)(param_2 + 4) + 0x370) == 0)) {
        bVar3 = false;
      }
      FUN_00a0ad80(puVar1 + 3,param_2,bVar3);
      *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x478) + 1;
      *(undefined4 *)(param_2 + 0x24) = 0;
      return;
    }
    FUN_00dd5650(&DAT_0165c710);
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  return;
}

// 00A0AF60  FUN_00a0af60  size=369  [run]
void __thiscall FUN_00a0af60(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_48;
  int local_38;
  undefined1 local_34 [12];
  int local_28;
  int local_24;
  int local_20;
  short local_1c;
  short local_1a;
  uint local_18;
  int local_10;
  
  piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x330) + 0x6c) + param_2 * 8);
  local_10 = 0;
  local_48 = 0;
  if (0 < piVar1[1]) {
    param_2 = 0;
    do {
      iVar4 = *piVar1 + param_2;
      iVar3 = (uint)*(ushort *)(iVar4 + 8) * 0x560 + *(int *)(param_1 + 0x328);
      iVar5 = *(int *)(iVar4 + 4) * 0x70 + *(int *)(param_1 + 800);
      if ((*(char *)(iVar4 + 0xd) == '\0') ||
         (local_38 = param_4, (*(byte *)(iVar5 + 0x38) & 4) == 0)) {
LAB_00a0b016:
        FUN_00a0ae50(local_34,param_5);
      }
      else {
        if (((*(int *)(iVar3 + 0x47c) == 0) || ((*(uint *)(iVar3 + 0x51c) & 0x800000) == 0)) ||
           (((*(int *)(*(int *)(iVar3 + 0x470) + 0x10) != 0 && (iVar2 = FUN_00e6b900(), iVar2 == 3))
            && ((DAT_01b83d3c & 0x40) == 0)))) {
          local_38 = 0;
        }
        if ((param_3 == 0) && (local_38 == 0)) goto LAB_00a0b016;
        if ((((local_10 < 1) || (local_1c != *(short *)(iVar4 + 8))) ||
            ((local_1a != *(short *)(iVar4 + 10) ||
             (((local_18 != *(byte *)(iVar4 + 0xc) || (local_24 != *(int *)(iVar5 + 0x68))) ||
              (local_20 != *(int *)(iVar5 + 0x6c))))))) || (local_28 != *(int *)(iVar5 + 100))) {
          FUN_00a0ae50(local_34,param_5);
          FUN_00a0acc0(local_34,iVar4,iVar3,iVar5,param_3,local_38);
        }
        else {
          local_10 = local_10 + 1;
        }
      }
      param_2 = param_2 + 0x10;
      local_48 = local_48 + 1;
    } while (local_48 < piVar1[1]);
  }
  FUN_00a0ae50(local_34,param_5);
  return;
}

// 00A0B0E0  FUN_00a0b0e0  size=490  [run]
void __thiscall
FUN_00a0b0e0(int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,int param_7)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_3c;
  undefined1 local_34 [12];
  int local_28;
  int local_24;
  int local_20;
  ushort local_1c;
  short local_1a;
  uint local_18;
  int local_10;
  
  piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x330) + 0x6c) + param_5 * 8);
  local_10 = 0;
  local_3c = 0;
  if (0 < piVar1[1]) {
    param_5 = 0;
    do {
      iVar5 = *piVar1 + param_5;
      uVar2 = *(ushort *)(iVar5 + 8);
      iVar3 = *(int *)(iVar5 + 4);
      iVar4 = *(int *)(param_1 + 0x328);
      iVar6 = iVar3 * 0x70 + *(int *)(param_1 + 800);
      if ((((iVar3 < param_7) && (*(char *)(iVar5 + 0xd) != '\0')) &&
          ((*(byte *)(iVar6 + 0x38) & 4) != 0)) && (*(char *)(param_6 + iVar3) != '\0')) {
        if (0 < local_10) {
          if ((((local_1c == uVar2) && (local_1a == *(short *)(iVar5 + 10))) &&
              ((local_18 == *(byte *)(iVar5 + 0xc) &&
               ((local_24 == *(int *)(iVar6 + 0x68) && (local_20 == *(int *)(iVar6 + 0x6c))))))) &&
             (local_28 == *(int *)(iVar6 + 100))) {
            local_10 = local_10 + 1;
            goto LAB_00a0b25a;
          }
          if (*param_3 < param_4) {
            FUN_00a0ad80(param_2 + *param_3 * 0x38,local_34,0);
            *param_3 = *param_3 + 1;
          }
          else {
            FUN_00dd5650(&DAT_0165c710);
          }
          local_10 = 0;
        }
        FUN_00a0acc0(local_34,iVar5,(uint)uVar2 * 0x560 + iVar4,iVar6,1,0);
      }
      else if (0 < local_10) {
        if (*param_3 < param_4) {
          FUN_00a0ad80(param_2 + *param_3 * 0x38,local_34,0);
          *param_3 = *param_3 + 1;
          local_10 = 0;
        }
        else {
          FUN_00dd5650(&DAT_0165c710);
          local_10 = 0;
        }
      }
LAB_00a0b25a:
      param_5 = param_5 + 0x10;
      local_3c = local_3c + 1;
    } while (local_3c < piVar1[1]);
    if (0 < local_10) {
      if (*param_3 < param_4) {
        FUN_00a0ad80(param_2 + *param_3 * 0x38,local_34,0);
        *param_3 = *param_3 + 1;
        return;
      }
      FUN_00dd5650(&DAT_0165c710);
    }
  }
  return;
}

// 00A0B2D0  FUN_00a0b2d0  size=160  [run]
void __thiscall FUN_00a0b2d0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x484) = 1;
  *(undefined4 *)(param_1 + 0x488) = 1;
  if (((*(uint *)(param_1 + 0x364) & 0x100) != 0) && (iVar3 = 0, param_2 != 0)) {
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x484) = 0;
    *(undefined4 *)(param_1 + 0x488) = 0;
    if (0 < *(int *)(param_1 + 0x478)) {
      do {
        if ((*(int *)(*(int *)(param_1 + 0x474) + 4 + iVar3) == 1) &&
           (iVar1 = *(int *)(*(int *)(param_1 + 0x474) + 0x34 + iVar3), iVar1 != -1)) {
          iVar1 = FUN_00f9a310(&param_2,iVar1);
          if (iVar1 == 0) {
            param_2 = 0x32;
LAB_00a0b34b:
            *(undefined4 *)(param_1 + 0x484) = 1;
          }
          else if (param_2 != 0) goto LAB_00a0b34b;
          if (0x14 < param_2) {
            *(undefined4 *)(param_1 + 0x488) = 1;
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x44;
      } while (iVar2 < *(int *)(param_1 + 0x478));
    }
  }
  return;
}

// 00A0B370  FUN_00a0b370  size=168  [run]
void __thiscall FUN_00a0b370(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  FUN_00a0b2d0(param_2);
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffeff;
  uVar1 = *(uint *)(param_1 + 0x364) & 1;
  if (DAT_01be1f48 != 0) {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x478) = 0;
  if (uVar1 != 0) {
    FUN_00a0af60(*(undefined4 *)(param_1 + 0x198),*(char *)(param_1 + 0x470) == '\0',0,param_2);
    FUN_00a0af60(3,0,~(*(byte *)(param_1 + 0x472) >> 7) & 1,0);
    return;
  }
  FUN_00a0af60(*(undefined4 *)(param_1 + 0x198),*(char *)(param_1 + 0x470) == '\0',
               ~(*(byte *)(param_1 + 0x472) >> 7) & 1,param_2);
  return;
}

// 00A0B420  FUN_00a0b420  size=116  [run]
void __thiscall
FUN_00a0b420(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  iVar2 = 0;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x478)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x474) + 4 + iVar2);
      uVar3 = param_2;
      if ((iVar1 == 1) || (uVar3 = param_3, iVar1 == 2)) {
        FUN_00a212c0(uVar3,param_4,param_5,*(int *)(param_1 + 0x474) + iVar2 + 0xc,1);
      }
      local_4 = local_4 + 1;
      iVar2 = iVar2 + 0x44;
    } while (local_4 < *(int *)(param_1 + 0x478));
  }
  return;
}

// 00A0B4A0  FUN_00a0b4a0  size=130  [run]
bool __thiscall
FUN_00a0b4a0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,int param_6)

{
  *param_3 = 0;
  if (param_5 == 0) {
    return false;
  }
  if ((-1 < param_6) && (param_6 <= *(short *)(param_1 + 0x324))) {
    if (*(char *)(param_1 + 0x470) == '\0') {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffeff;
      *(undefined4 *)(param_1 + 0x484) = 1;
      *(undefined4 *)(param_1 + 0x488) = 1;
      FUN_00a0b0e0(param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x198),param_5,param_6);
      return 0 < *param_3;
    }
    FUN_00a0aad0();
  }
  return false;
}

// 00A0B530  FUN_00a0b530  size=121  [run]
void __thiscall FUN_00a0b530(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    local_4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x328) + local_4;
      *(undefined4 *)(iVar2 + 0x470) = param_2;
      if (*(int *)(iVar2 + 0x474) != 0) {
        *(undefined ***)(iVar2 + 0x474) = &PTR_PTR_018e7958;
      }
      FUN_00a084c0(param_2);
      FUN_00a085e0();
      FUN_00a082c0(param_2,&DAT_01b7bd48);
      local_4 = local_4 + 0x560;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0B5B0  FUN_00a0b5b0  size=512  [run]
void __fastcall FUN_00a0b5b0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined **ppuVar7;
  int local_14;
  int local_8;
  
  local_8 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    local_14 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0x328) + local_14;
      iVar1 = *(int *)(iVar6 + 0x470);
      iVar2 = *(int *)(iVar1 + 0x2c);
      if ((iVar2 == 0) && (*(int *)(iVar1 + 0x10) == 0)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      uVar5 = *(uint *)(iVar6 + 0x51c) & 1;
      if (uVar5 == 0) {
        if (*(int *)(iVar1 + 0x10) == 0) {
          if (*(int *)(iVar1 + 0x34) == 0) {
            ppuVar7 = &PTR_PTR_018dd8c8;
            if (iVar2 == 0) goto LAB_00a0b676;
          }
          else if (iVar2 == 0) {
            ppuVar7 = &PTR_PTR_018dd9b8;
          }
          else {
            ppuVar7 = &PTR_PTR_018ddaa8;
          }
        }
        else {
LAB_00a0b676:
          ppuVar7 = &PTR_PTR_018dd7d8;
        }
      }
      else if (*(int *)(iVar1 + 0x10) == 0) {
        if (*(int *)(iVar1 + 0x34) == 0) {
          if (iVar2 == 0) {
            ppuVar7 = &PTR_PTR_018dd760;
          }
          else {
            ppuVar7 = &PTR_PTR_018dd850;
          }
        }
        else if (iVar2 == 0) {
          ppuVar7 = &PTR_PTR_018dd940;
        }
        else {
          ppuVar7 = &PTR_PTR_018dda30;
        }
      }
      else {
        ppuVar7 = &PTR_PTR_018dd850;
      }
      if (*(int *)(iVar1 + 0x40) != 0) {
        ppuVar7 = (undefined **)0x0;
      }
      iVar4 = FUN_00e6b900();
      if (((iVar4 != 3) && (*(int *)(iVar1 + 0x10) != 0)) && (*(int *)(iVar1 + 0x60) == 0)) {
        ppuVar7 = (undefined **)0x0;
      }
      *(undefined ***)(iVar6 + 0x47c) = ppuVar7;
      if (*(undefined ***)(iVar6 + 0x474) != &PTR_PTR_018e7958) {
        if (((*(int *)(iVar1 + 0x10) == 0) && (*(int *)(iVar1 + 0x28) != 0)) ||
           (*(int *)(iVar6 + 0x508) == 2)) {
          if (uVar5 == 0) {
            if (*(int *)(iVar1 + 0x34) == 0) {
              ppuVar7 = &PTR_PTR_018e7a68;
              if (!bVar3) {
                ppuVar7 = &PTR_PTR_018e7868;
              }
            }
            else if (bVar3) {
              ppuVar7 = &PTR_PTR_018e7d38;
            }
            else {
              ppuVar7 = &PTR_PTR_018e7bd0;
            }
          }
          else {
            if (*(int *)(iVar1 + 0x34) == 0) goto LAB_00a0b6c6;
            if (bVar3) {
              ppuVar7 = &PTR_PTR_018e7cc0;
            }
            else {
              ppuVar7 = &PTR_PTR_018e7b58;
            }
          }
        }
        else {
LAB_00a0b6c6:
          if (bVar3) {
            ppuVar7 = &PTR_PTR_018e79d0;
          }
          else {
            ppuVar7 = &PTR_PTR_018e77f0;
          }
        }
        if (*(int *)(iVar1 + 0x28) == 0) {
          ppuVar7 = (undefined **)0x0;
        }
        *(undefined ***)(iVar6 + 0x474) = ppuVar7;
        if (ppuVar7 == (undefined **)0x0) {
          *(uint *)(iVar6 + 0x51c) = *(uint *)(iVar6 + 0x51c) & 0xffefffff;
        }
        else {
          *(uint *)(iVar6 + 0x51c) = *(uint *)(iVar6 + 0x51c) | 0x100000;
        }
      }
      if (((*(int *)(iVar1 + 0x10) == 0) || (*(int *)(iVar1 + 0x60) != 0)) &&
         (*(int *)(iVar1 + 0x28) != 0)) {
        if (uVar5 == 0) {
          ppuVar7 = &PTR_PTR_018e8060;
          if (iVar2 == 0) {
            ppuVar7 = &PTR_PTR_018e7fe8;
          }
        }
        else if (iVar2 == 0) {
          ppuVar7 = &PTR_PTR_018e7ed8;
        }
        else {
          ppuVar7 = &PTR_PTR_018e7f50;
        }
      }
      else {
        ppuVar7 = (undefined **)0x0;
      }
      local_14 = local_14 + 0x560;
      *(undefined ***)(iVar6 + 0x478) = ppuVar7;
      local_8 = local_8 + 1;
    } while (local_8 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0B7C0  FUN_00a0b7c0  size=94  [run]
void __thiscall FUN_00a0b7c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x328);
      if ((*(uint *)(iVar1 + 0x51c + iVar2) & 0x1000) == 0) {
        *(uint *)(iVar1 + 0x518 + iVar2) = 3 - (uint)(param_2 != 0);
      }
      else {
        *(undefined4 *)(iVar1 + 0x518 + iVar2) = 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x560;
    } while (iVar3 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0B820  FUN_00a0b820  size=55  [run]
void __thiscall FUN_00a0b820(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x328) + 0x514 + iVar2) = param_2;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x560;
    } while (iVar1 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0B860  FUN_00a0b860  size=78  [run]
void __thiscall FUN_00a0b860(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x328) + iVar3;
      if (param_2 == 0) {
        puVar1 = (uint *)(iVar2 + 0x51c);
        *puVar1 = *puVar1 & 0xffffdfff;
      }
      else {
        puVar1 = (uint *)(iVar2 + 0x51c);
        *puVar1 = *puVar1 | 0x2000;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x560;
    } while (iVar4 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0B8B0  FUN_00a0b8b0  size=78  [run]
void __thiscall FUN_00a0b8b0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x328) + iVar3;
      if (param_2 == 0) {
        puVar1 = (uint *)(iVar2 + 0x51c);
        *puVar1 = *puVar1 & 0xffffbfff;
      }
      else {
        puVar1 = (uint *)(iVar2 + 0x51c);
        *puVar1 = *puVar1 | 0x4000;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x560;
    } while (iVar4 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0B950  FUN_00a0b950  size=55  [run]
void __thiscall FUN_00a0b950(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x328) + 0x508 + iVar2) = param_2;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x560;
    } while (iVar1 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0B990  FUN_00a0b990  size=55  [run]
void __thiscall FUN_00a0b990(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x328) + 0x50c + iVar2) = param_2;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x560;
    } while (iVar1 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0B9D0  FUN_00a0b9d0  size=55  [run]
void __thiscall FUN_00a0b9d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x328) + 0x510 + iVar2) = param_2;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x560;
    } while (iVar1 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0BA10  FUN_00a0ba10  size=78  [run]
void __thiscall FUN_00a0ba10(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x328) + iVar3;
      if (param_2 == 0) {
        puVar1 = (uint *)(iVar2 + 0x51c);
        *puVar1 = *puVar1 & 0xffefffff;
      }
      else {
        puVar1 = (uint *)(iVar2 + 0x51c);
        *puVar1 = *puVar1 | 0x100000;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x560;
    } while (iVar4 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0BA60  FUN_00a0ba60  size=99  [run]
void __thiscall FUN_00a0ba60(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x328) + 0x490 + iVar4);
      iVar3 = *(int *)(param_1 + 0x328) + iVar4;
      if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x1e) & 8) != 0)) {
        if (param_2 == 0) {
          puVar1 = (uint *)(iVar3 + 0x51c);
          *puVar1 = *puVar1 & 0xff7fffff;
        }
        else {
          puVar1 = (uint *)(iVar3 + 0x51c);
          *puVar1 = *puVar1 | 0x800000;
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x560;
    } while (iVar5 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0BAD0  FUN_00a0bad0  size=55  [run]
void __thiscall FUN_00a0bad0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x328) + 0x484 + iVar2) = param_2;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x560;
    } while (iVar1 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0BB60  FUN_00a0bb60  size=55  [run]
void __thiscall FUN_00a0bb60(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x328) + 0x480 + iVar2) = param_2;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x560;
    } while (iVar1 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0BBA0  FUN_00a0bba0  size=92  [run]
void __thiscall FUN_00a0bba0(int param_1,char param_2)

{
  char cVar1;
  
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x37c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x380) = 0x3f800000;
  *(undefined4 *)(param_1 + 900) = 0x3f800000;
  cVar1 = '\a' - param_2;
  *(undefined4 *)(param_1 + 0x388) = 0x3f800000;
  *(char *)(param_1 + 0x44e) = param_2;
  *(char *)(param_1 + 0x374) = cVar1;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(char *)(param_1 + 0x375) = cVar1;
  *(char *)(param_1 + 0x376) = cVar1;
  *(char *)(param_1 + 0x377) = cVar1;
  *(undefined4 *)(param_1 + 0x438) = 0;
  return;
}

// 00A0BC00  FUN_00a0bc00  size=143  [run]
void __fastcall FUN_00a0bc00(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  iVar2 = 0;
  *(undefined1 *)(param_1 + 0x374) = 6;
  if (0 < *(short *)(param_1 + 0x32c)) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)(*(int *)(param_1 + 0x328) + 0x51c + iVar3);
      *puVar1 = *puVar1 & 0xffff7fff;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x560;
    } while (iVar2 < *(short *)(param_1 + 0x32c));
  }
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)(*(int *)(param_1 + 0x328) + 0x51c + iVar3);
      *puVar1 = *puVar1 & 0xffefffff;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x560;
    } while (iVar2 < *(short *)(param_1 + 0x32c));
  }
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 6;
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x8000000;
  return;
}

// 00A0BC90  FUN_00a0bc90  size=64  [run]
undefined4 __fastcall FUN_00a0bc90(int param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    do {
      if (*(int *)(*(int *)(sVar1 * 0x560 + 0x470 + *(int *)(param_1 + 0x328)) + 0x50) != 0) {
        return 1;
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 < *(short *)(param_1 + 0x32c));
  }
  return 0;
}

// 00A0BCE0  FUN_00a0bce0  size=64  [run]
undefined4 __fastcall FUN_00a0bce0(int param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    do {
      if (*(int *)(*(int *)(sVar1 * 0x560 + 0x470 + *(int *)(param_1 + 0x328)) + 0x38) != 0) {
        return 1;
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 < *(short *)(param_1 + 0x32c));
  }
  return 0;
}

// 00A0BD30  FUN_00a0bd30  size=64  [run]
undefined4 __fastcall FUN_00a0bd30(int param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    do {
      if (*(int *)(*(int *)(sVar1 * 0x560 + 0x470 + *(int *)(param_1 + 0x328)) + 0x60) != 0) {
        return 1;
      }
      sVar1 = sVar1 + 1;
    } while (sVar1 < *(short *)(param_1 + 0x32c));
  }
  return 0;
}

// 00A0BE30  FUN_00a0be30  size=182  [run]
undefined4 __thiscall FUN_00a0be30(int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x328) != 0) {
    sVar2 = 0;
    if (0 < *(short *)(param_1 + 0x32c)) {
      do {
        iVar4 = sVar2 * 0x560 + *(int *)(param_1 + 0x328);
        piVar6 = (int *)0x0;
        uVar7 = 0;
        piVar5 = (int *)(iVar4 + 0x494);
        do {
          if (*piVar5 == param_2) {
            if ((piVar5[1] == param_3) && (piVar5[2] == param_4)) goto LAB_00a0beb2;
            piVar5[1] = param_3;
            piVar5[2] = param_4;
            goto LAB_00a0beab;
          }
          if ((*piVar5 == 0) && (piVar6 == (int *)0x0)) {
            piVar6 = piVar5;
          }
          uVar7 = uVar7 + 1;
          piVar5 = piVar5 + 3;
        } while (uVar7 < 8);
        if (piVar6 != (int *)0x0) {
          *piVar6 = param_2;
          piVar6[1] = param_3;
          piVar6[2] = param_4;
LAB_00a0beab:
          puVar1 = (uint *)(iVar4 + 0x51c);
          *puVar1 = *puVar1 | 0x20;
        }
LAB_00a0beb2:
        sVar2 = sVar2 + 1;
      } while (sVar2 < *(short *)(param_1 + 0x32c));
    }
    uVar3 = 1;
  }
  return uVar3;
}

// 00A0BF60  FUN_00a0bf60  size=134  [run]
void __thiscall FUN_00a0bf60(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    do {
      iVar2 = sVar3 * 0x560 + *(int *)(param_1 + 0x328);
      if ((param_3 == 0) || (*(int *)(*(int *)(iVar2 + 0x490) + 0x20) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (param_2 == 0) {
        if (bVar1) {
          *(uint *)(iVar2 + 0x51c) = *(uint *)(iVar2 + 0x51c) | 0x40;
        }
        else {
          *(uint *)(iVar2 + 0x51c) = *(uint *)(iVar2 + 0x51c) & 0xffffffbf;
        }
      }
      else if (bVar1) {
        *(uint *)(iVar2 + 0x51c) = *(uint *)(iVar2 + 0x51c) | 0x80;
      }
      else {
        *(uint *)(iVar2 + 0x51c) = *(uint *)(iVar2 + 0x51c) & 0xffffff7f;
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 < *(short *)(param_1 + 0x32c));
  }
  return;
}

// 00A0BFF0  FUN_00a0bff0  size=138  [run]
void __thiscall FUN_00a0bff0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int extraout_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x45c);
  iVar4 = 0;
  iVar2 = 0;
  if (param_3 != 0) {
    iVar4 = *(int *)(param_1 + 0x338) * 0x30 + param_3;
    iVar2 = param_3 + 0x2a0;
  }
  if ((*(uint *)(param_1 + 0x364) & 0x8000000) != 0) {
    iVar4 = 0;
  }
  iVar3 = 0;
  if (*(short *)(param_1 + 0x324) < 1) {
    return;
  }
  do {
    iVar5 = iVar4;
    if ((*(byte *)(param_2 + 0x38) & 8) != 0) {
      iVar5 = iVar2;
    }
    FUN_00a09090(iVar5,uVar1);
    iVar3 = iVar3 + 1;
    param_2 = extraout_ECX + 0x70;
  } while (iVar3 < *(short *)(param_1 + 0x324));
  return;
}

// 00A0C110  FUN_00a0c110  size=132  [run]
undefined4 __thiscall
FUN_00a0c110(int param_1,short param_2,undefined4 param_3,byte param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_2) && ((int)param_2 < (int)(uint)*(ushort *)(param_1 + 0x88))) {
    iVar1 = param_2 * 0xa8 + *(int *)(param_1 + 0x84);
    iVar3 = 0;
    do {
      iVar2 = FUN_00dd3580((uint)param_4 * 0x30,param_5);
      *(int *)(iVar1 + iVar3 * 4) = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    *(undefined4 *)(iVar1 + 8) = param_3;
    *(byte *)(iVar1 + 0xc) = param_4;
    return 1;
  }
  return 0;
}

// 00A0C1A0  FUN_00a0c1a0  size=145  [run]
void __fastcall FUN_00a0c1a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_8;
  int local_4;
  
  local_4 = 0;
  if (*(short *)(param_1 + 0x88) != 0) {
    local_8 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x84) + local_8;
      puVar4 = *(undefined4 **)(iVar1 + (uint)*(byte *)(param_1 + 0x8e) * 4);
      if (((*(int *)(iVar1 + 8) != 0) && (puVar4 != (undefined4 *)0x0)) &&
         (iVar3 = 0, *(char *)(iVar1 + 0xc) != '\0')) {
        do {
          puVar5 = (undefined4 *)
                   ((uint)*(byte *)(*(int *)(iVar1 + 8) + iVar3) * 0x30 + *(int *)(param_1 + 0x80));
          puVar6 = puVar4;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 0xc;
        } while (iVar3 < (int)(uint)*(byte *)(iVar1 + 0xc));
      }
      local_8 = local_8 + 0xa8;
      local_4 = local_4 + 1;
    } while (local_4 < (int)(uint)*(ushort *)(param_1 + 0x88));
  }
  return;
}

// 00A0C240  FUN_00a0c240  size=150  [run]
undefined4 __thiscall FUN_00a0c240(int param_1,undefined4 *param_2,ushort param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(ushort *)(param_1 + 0x88) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined2 *)(param_2 + 3) = 0;
    param_2[2] = 0;
    *(undefined1 *)((int)param_2 + 0xe) = 0;
    return 1;
  }
  if (param_3 < *(ushort *)(param_1 + 0x88)) {
    uVar2 = (uint)*(byte *)(param_1 + 0x8e);
    uVar3 = uVar2;
    if (1 < *(byte *)(param_1 + 0x8f)) {
      uVar3 = uVar2 - 1 & 1;
    }
    iVar1 = (uint)param_3 * 0xa8 + *(int *)(param_1 + 0x84);
    *param_2 = *(undefined4 *)(iVar1 + uVar2 * 4);
    param_2[1] = *(undefined4 *)(iVar1 + uVar3 * 4);
    *(undefined2 *)(param_2 + 3) = *(undefined2 *)(param_1 + 0x8a);
    param_2[2] = *(undefined4 *)(iVar1 + 8);
    *(undefined1 *)((int)param_2 + 0xe) = *(undefined1 *)(iVar1 + 0xc);
    return 1;
  }
  return 0;
}

// 00A0C2E0  FUN_00a0c2e0  size=107  [run]
uint __thiscall FUN_00a0c2e0(int param_1,ushort param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x84) == 0) || (*(ushort *)(param_1 + 0x88) == 0)) {
    return 0;
  }
  if (param_2 < *(ushort *)(param_1 + 0x88)) {
    uVar1 = (uint)*(byte *)(param_1 + 0x8e);
    if (1 < *(byte *)(param_1 + 0x8f)) {
      uVar1 = uVar1 - 1 & 1;
    }
    iVar2 = (uint)param_2 * 0xa8 + *(int *)(param_1 + 0x84);
    if (*(int *)(uVar1 * 0x4c + 0x18 + iVar2) != 0) {
      return ~-(uint)(*(int *)(param_1 + 0x90) != 0) & uVar1 * 0x4c + 0x10 + iVar2;
    }
  }
  return 0;
}

// 00A0C350  FUN_00a0c350  size=514  [run]
void __fastcall FUN_00a0c350(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CRect *this;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  uVar1 = DAT_01bea084 >> 0x1e & 1;
  if (*(int *)(param_1 + 0x84) != 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    local_14 = 0;
    if (*(short *)(param_1 + 0x88) != 0) {
      local_10 = 0;
      local_8 = uVar1;
      do {
        iVar5 = 2;
        this = (CRect *)(*(int *)(param_1 + 0x84) + local_10 + 0x10);
        do {
          if ((uVar1 != 0) && (*(int *)(this + 8) == 0)) {
            CRect::SetRect(this,0x40,4,4,0);
            *(undefined4 *)(param_1 + 0x90) = 1;
            uVar1 = local_8;
          }
          this = this + 0x4c;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (uVar1 == 0) {
          FUN_00fa26b0();
          FUN_00fa26b0();
          uVar1 = local_8;
        }
        local_10 = local_10 + 0xa8;
        local_14 = local_14 + 1;
      } while (local_14 < (int)(uint)*(ushort *)(param_1 + 0x88));
    }
    if ((uVar1 != 0) && (local_14 = 0, *(short *)(param_1 + 0x88) != 0)) {
      local_10 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x84) + local_10;
        local_8 = *(int *)(iVar6 + (uint)*(byte *)(param_1 + 0x8e) * 4);
        local_4 = (uint)*(byte *)(param_1 + 0x8e) * 0x4c + 0x10 + iVar6;
        iVar5 = FUN_00f974a0(&local_18,&local_c);
        if ((iVar5 != 0) && (local_18 != 0)) {
          iVar5 = 0;
          if (*(char *)(iVar6 + 0xc) != '\0') {
            iVar2 = 0;
            puVar3 = (undefined4 *)(local_8 + 0x20);
            do {
              *(undefined4 *)(local_18 + iVar2) = puVar3[-8];
              iVar4 = local_18 + iVar2;
              iVar5 = iVar5 + 1;
              *(undefined4 *)(iVar4 + 4) = puVar3[-4];
              *(undefined4 *)(iVar4 + 8) = *puVar3;
              *(undefined4 *)(iVar4 + 0xc) = 0;
              iVar4 = local_c + local_18;
              *(undefined4 *)(iVar2 + iVar4) = puVar3[-7];
              *(undefined4 *)(iVar2 + 4 + iVar4) = puVar3[-3];
              *(undefined4 *)(iVar2 + 8 + iVar4) = puVar3[1];
              *(undefined4 *)(iVar2 + 0xc + iVar4) = 0;
              iVar4 = local_18 + local_c * 2;
              *(undefined4 *)(iVar2 + iVar4) = puVar3[-6];
              *(undefined4 *)(iVar2 + 4 + iVar4) = puVar3[-2];
              *(undefined4 *)(iVar2 + 8 + iVar4) = puVar3[2];
              *(undefined4 *)(iVar2 + 0xc + iVar4) = 0;
              iVar4 = local_18 + local_c * 3;
              *(undefined4 *)(iVar2 + iVar4) = puVar3[-5];
              *(undefined4 *)(iVar2 + 4 + iVar4) = puVar3[-1];
              *(undefined4 *)(iVar2 + 8 + iVar4) = puVar3[3];
              *(undefined4 *)(iVar2 + 0xc + iVar4) = 0;
              iVar2 = iVar2 + 0x10;
              puVar3 = puVar3 + 0xc;
            } while (iVar5 < (int)(uint)*(byte *)(iVar6 + 0xc));
          }
          cLockableTexture::unlock();
        }
        local_10 = local_10 + 0xa8;
        local_14 = local_14 + 1;
      } while (local_14 < (int)(uint)*(ushort *)(param_1 + 0x88));
    }
  }
  return;
}

// 00A0C560  FUN_00a0c560  size=542  [run]
void __fastcall FUN_00a0c560(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CRect *this;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  local_c = *(byte *)(param_1 + 0x8e) - 1 & 1;
  uVar1 = DAT_01bea084 >> 0x1e & 1;
  if (*(int *)(param_1 + 0x84) != 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    local_1c = 0;
    if (*(short *)(param_1 + 0x88) != 0) {
      local_18 = 0;
      local_10 = uVar1;
      do {
        iVar5 = 2;
        this = (CRect *)(*(int *)(param_1 + 0x84) + local_18 + 0x10);
        do {
          if ((uVar1 != 0) && (*(int *)(this + 8) == 0)) {
            CRect::SetRect(this,0x40,4,4,0);
            *(undefined4 *)(param_1 + 0x90) = 1;
            uVar1 = local_10;
          }
          this = this + 0x4c;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (uVar1 == 0) {
          FUN_00fa26b0();
          FUN_00fa26b0();
          uVar1 = local_10;
        }
        local_18 = local_18 + 0xa8;
        local_1c = local_1c + 1;
      } while (local_1c < (int)(uint)*(ushort *)(param_1 + 0x88));
    }
    if ((uVar1 != 0) && (local_1c = 0, *(short *)(param_1 + 0x88) != 0)) {
      local_10 = local_c * 0x4c + 0x10;
      local_18 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x84) + local_18;
        local_8 = *(int *)(iVar6 + local_c * 4);
        local_4 = local_10 + iVar6;
        iVar5 = FUN_00f974a0(&local_20,&local_14);
        if ((iVar5 != 0) && (local_20 != 0)) {
          iVar5 = 0;
          if (*(char *)(iVar6 + 0xc) != '\0') {
            iVar2 = 0;
            puVar3 = (undefined4 *)(local_8 + 0x20);
            do {
              *(undefined4 *)(local_20 + iVar2) = puVar3[-8];
              iVar4 = local_20 + iVar2;
              iVar5 = iVar5 + 1;
              *(undefined4 *)(iVar4 + 4) = puVar3[-4];
              *(undefined4 *)(iVar4 + 8) = *puVar3;
              *(undefined4 *)(iVar4 + 0xc) = 0;
              iVar4 = local_14 + local_20;
              *(undefined4 *)(iVar2 + iVar4) = puVar3[-7];
              *(undefined4 *)(iVar2 + 4 + iVar4) = puVar3[-3];
              *(undefined4 *)(iVar2 + 8 + iVar4) = puVar3[1];
              *(undefined4 *)(iVar2 + 0xc + iVar4) = 0;
              iVar4 = local_20 + local_14 * 2;
              *(undefined4 *)(iVar2 + iVar4) = puVar3[-6];
              *(undefined4 *)(iVar2 + 4 + iVar4) = puVar3[-2];
              *(undefined4 *)(iVar2 + 8 + iVar4) = puVar3[2];
              *(undefined4 *)(iVar2 + 0xc + iVar4) = 0;
              iVar4 = local_20 + local_14 * 3;
              *(undefined4 *)(iVar2 + iVar4) = puVar3[-5];
              *(undefined4 *)(iVar2 + 4 + iVar4) = puVar3[-1];
              *(undefined4 *)(iVar2 + 8 + iVar4) = puVar3[3];
              *(undefined4 *)(iVar2 + 0xc + iVar4) = 0;
              iVar2 = iVar2 + 0x10;
              puVar3 = puVar3 + 0xc;
            } while (iVar5 < (int)(uint)*(byte *)(iVar6 + 0xc));
          }
          cLockableTexture::unlock();
        }
        local_18 = local_18 + 0xa8;
        local_1c = local_1c + 1;
      } while (local_1c < (int)(uint)*(ushort *)(param_1 + 0x88));
    }
  }
  return;
}

// 00A0C7B0  FUN_00a0c7b0  size=24  [run]
void FUN_00a0c7b0(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0xf8) != 0)) {
    FUN_00a06520();
    return;
  }
  return;
}

// 00A0C820  FUN_00a0c820  size=99  [run]
uint * FUN_00a0c820(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = &DAT_0189eed4;
  uVar2 = 0;
  do {
    if (*puVar1 == param_1) {
      return puVar1;
    }
    uVar2 = uVar2 + 8;
    puVar1 = puVar1 + 2;
  } while (uVar2 < 8);
  puVar1 = &DAT_0189eedc;
  uVar2 = 0;
  do {
    if (*puVar1 == (param_1 & 0xffff00)) {
      return puVar1;
    }
    uVar2 = uVar2 + 8;
    puVar1 = puVar1 + 2;
  } while (uVar2 < 8);
  puVar1 = &DAT_0189eee4;
  uVar2 = 0;
  do {
    if (*puVar1 == (param_1 & 0xf0000)) {
      return puVar1;
    }
    uVar2 = uVar2 + 8;
    puVar1 = puVar1 + 2;
  } while (uVar2 < 8);
  return &DAT_0189eeec;
}

// 00A0C8A0  FUN_00a0c8a0  size=90  [run]
int __fastcall FUN_00a0c8a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x40);
  piVar1 = (int *)(param_1 + 0x40);
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    LOCK();
    iVar2 = *piVar1;
    if (iVar3 == iVar2) {
      *piVar1 = *(int *)(iVar3 + 0xc);
    }
    UNLOCK();
    if ((iVar3 == iVar2) && (*(int *)(iVar3 + 0x10) == 0)) break;
    iVar3 = *piVar1;
  }
  return iVar3;
}

// 00A0C900  FUN_00a0c900  size=87  [run]
void FUN_00a0c900(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_2 + 0x40);
  while (iVar2 = *piVar3, iVar2 != 0) {
    LOCK();
    iVar1 = *piVar3;
    if (iVar2 == iVar1) {
      *piVar3 = *(int *)(iVar2 + 0xc);
    }
    UNLOCK();
    if ((iVar2 == iVar1) && (*(int *)(iVar2 + 0x10) == 0)) {
      FUN_009f8a80();
    }
  }
  return;
}


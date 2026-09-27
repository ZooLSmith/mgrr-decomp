// src/unsorted/unit_00AE0EF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AE0EF0..00AE2570, 8 functions

#include "mgrr.h"

// 00AE0EF0  FUN_00ae0ef0  size=454  [run]
undefined4 __fastcall FUN_00ae0ef0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iStack_4;
  
  uVar4 = 0;
  param_1[0x1a1] = 0;
  if (param_1[0x139] != 0) {
    return 0;
  }
  FUN_00ac2080(0);
  piVar6 = (int *)param_1[0x19f];
  piVar5 = piVar6 + param_1[0x1a1] * 0x54;
  while( true ) {
    if (piVar6 == piVar5) {
      return uVar4;
    }
    iVar2 = *piVar6;
    if ((((iVar2 != 0) && (iVar2 != 1)) && (iVar2 != 2)) && ((iVar2 != 0x1b0 && (iVar2 != 0x147))))
    {
      uVar4 = 0;
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        uVar4 = FUN_00a7c8a0();
      }
      (**(code **)(*param_1 + 0x30c))(piVar6[1],0);
      (**(code **)(*param_1 + 0x198))(uVar4,piVar6,1);
    }
    if (param_1[0x21c] < 1) break;
    piVar6 = piVar6 + 0x54;
    uVar4 = 1;
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      FUN_00a9e060(param_1[0x284]);
      if (((*(int **)(iVar2 + 0x7b0) != (int *)0x0) &&
          (iVar2 = (**(code **)(**(int **)(iVar2 + 0x7b0) + 8))(), iVar2 != 0)) &&
         (FUN_00a8c570(&iStack_4,(short)param_1[0x281]), iStack_4 != 0)) {
        FUN_004066f0();
        uVar3 = -(uint)(*(uint *)(iStack_4 + 0xc) != 0) & *(uint *)(iStack_4 + 0xc);
        puVar1 = (uint *)(uVar3 + 4);
        *puVar1 = *puVar1 | 0x20;
        *(undefined4 *)(uVar3 + 0x9c) = 1;
        if (DAT_01885d68 != 1) {
          piVar5 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
          *piVar5 = *piVar5 + -1;
          if (((*piVar5 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
            FUN_00dd7320();
          }
        }
      }
    }
    if (piVar6[0x25] != 0) {
      FUN_00a8e5d0(param_1,piVar6,0);
    }
    FUN_00a7c970(0);
  }
  FUN_00a8caf0(1,0,0,0);
  return 1;
}

// 00AE10C0  FUN_00ae10c0  size=135  [run]
void __thiscall FUN_00ae10c0(int param_1,undefined4 param_2)

{
  undefined1 local_120 [284];
  
  *(undefined4 *)(param_1 + 0x9d0) = param_2;
  *(undefined4 *)(param_1 + 0x9d4) = param_2;
  if (*(int *)(param_1 + 0x9b8) == 0) {
    FUN_00e02fe0(param_1);
    FUN_00dffb30(param_1 + 0x920);
    FUN_00e00fb0(0,0xf7,local_120);
  }
  (**(code **)(*(int *)(param_1 + 0x870) + 8))(0x3f800000,0,0);
  *(undefined4 *)(param_1 + 0x618) = 2;
  return;
}

// 00AE1150  FUN_00ae1150  size=153  [run]
void __thiscall FUN_00ae1150(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 local_120 [284];
  
  *(undefined4 *)(param_1 + 0x9d0) = param_2;
  *(undefined4 *)(param_1 + 0x9d4) = param_2;
  if (*(int *)(param_1 + 0x908) == 0) {
    FUN_00e02fe0(param_1);
    FUN_00dffb30(param_1 + 0x870);
    if (param_3 == 0) {
      uVar1 = 0xf6;
    }
    else {
      uVar1 = 0xf8;
    }
    FUN_00e00fb0(0,uVar1,local_120);
  }
  (**(code **)(*(int *)(param_1 + 0x920) + 8))(0x3f800000,0,0);
  *(undefined4 *)(param_1 + 0x618) = 1;
  return;
}

// 00AE11F0  FUN_00ae11f0  size=2626  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ae11f0(int *param_1)

{
  short sVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  ushort *puVar13;
  float *pfVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fStack_180;
  float local_17c;
  float local_178;
  float local_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_150;
  float local_14c;
  float local_148;
  int local_144;
  uint local_140;
  float local_13c;
  float local_138;
  ushort *local_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_11c;
  float fStack_118;
  undefined4 local_114;
  float local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined1 auStack_e4 [4];
  float afStack_e0 [12];
  float fStack_b0;
  float afStack_ac [3];
  undefined1 local_a0 [4];
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_8c;
  float afStack_88 [4];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float afStack_6c [12];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_24 [32];
  
  if (1 < param_1[0x21d]) {
    return;
  }
  iVar5 = FUN_00a81330();
  if (iVar5 == 0) {
    if (0.0 < (float)param_1[0x287]) {
      fVar11 = (float)param_1[0x287];
      param_1[0x287] = (int)(fVar11 - 1.0);
      if (0.0 <= fVar11 - 1.0) {
        return;
      }
      param_1[0x287] = 0;
      return;
    }
    if (param_1[0x281] != 0) {
      local_114 = 0;
      local_110 = 0.0;
      local_10c = 0;
      local_108 = 0;
      local_104 = 0;
      uVar6 = FUN_00a1d5c0();
      FUN_008609b0(0x100,uVar6);
      local_108 = 0;
      FUN_009432a0(&local_114,param_1[0x25b]);
      local_174 = 0.0;
      local_148 = 0.0;
      local_140 = 0xffffffff;
      local_144 = -1;
      local_178 = -NAN;
      local_f8 = (float)((int)local_110 + local_108 * 4);
      local_14c = local_110;
      if (local_110 != local_f8) {
        do {
          local_fc = (float)FUN_00a81330();
          if ((local_fc != 0.0) && (local_17c = (float)FUN_00a7c8a0(), local_17c != 0.0)) {
            iVar9 = 0;
            iVar5 = FUN_00445b60(local_17c);
            if ((iVar5 != 0) &&
               ((iVar5 = FUN_00a81330(), iVar5 != 0 && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)))) {
              iVar9 = FUN_00445b90(iVar5);
            }
            iVar5 = FUN_00a12210(param_1[0x25c]);
            if (iVar5 != 0) {
              if (param_1[0xcc] == 0) {
                fVar15 = (float10)local_148;
              }
              else {
                fVar15 = (float10)0;
                local_148 = (float)fVar15;
                local_140 = 0xffffffff;
                local_144 = -1;
                if (iVar9 == 0) {
                  fVar11 = *(float *)((int)local_17c + 0x330);
                }
                else {
                  fVar11 = *(float *)(iVar9 + 0x330);
                }
                local_138 = fVar11;
                if (*(int *)((int)fVar11 + 0xcc) <= param_1[0x284]) goto LAB_00ae1be6;
                local_13c = 0.0;
                if (0 < *(int *)((int)fVar11 + 0xc4)) {
                  puVar13 = (ushort *)(*(int *)((int)fVar11 + 0xc0) + 0x68);
                  local_100 = 1.0;
                  do {
                    uVar2 = *puVar13;
                    if ((short)uVar2 < 0) {
LAB_00ae188f:
                      piVar7 = param_1 + 4;
                    }
                    else {
                      piVar7 = (int *)param_1[0xd8];
                      if ((int *)param_1[0xd8] == (int *)0x0) {
                        piVar7 = param_1;
                      }
                      if ((short)piVar7[0xd6] <= (short)uVar2) goto LAB_00ae188f;
                      fVar10 = *(float *)((int)local_17c + 0x360);
                      if (*(float *)((int)local_17c + 0x360) == 0.0) {
                        fVar10 = local_17c;
                      }
                      iVar5 = (int)(short)uVar2;
                      if ((iVar5 < 0) || (*(short *)((int)fVar10 + 0x358) <= iVar5)) {
                        piVar7 = (int *)0x10;
                      }
                      else {
                        piVar7 = (int *)(iVar5 * 0xb0 + *(int *)((int)fVar10 + 0x350) + 0x10);
                      }
                    }
                    local_134 = puVar13;
                    D3DXMatrixMultiply(afStack_6c + 3,puVar13 + -0x24,piVar7);
                    local_100 = SQRT((fStack_34 - (float)param_1[0x12]) *
                                     (fStack_34 - (float)param_1[0x12]) +
                                     (fStack_38 - (float)param_1[0x11]) *
                                     (fStack_38 - (float)param_1[0x11]) +
                                     (fStack_3c - (float)param_1[0x10]) *
                                     (fStack_3c - (float)param_1[0x10]));
                    if (1.0 < local_100) {
                      local_100 = 1.0;
                    }
                    local_100 = 1.0 - local_100;
                    fVar17 = (float10)FUN_00a13390();
                    fVar15 = (float10)1;
                    if (fVar15 < fVar17) {
                      fVar17 = fVar15;
                    }
                    fStack_128 = (float)fVar17;
                    fStack_124 = *(float *)(puVar13 + -4);
                    if (fVar15 < (float10)fStack_124) {
                      fStack_124 = (float)fVar15;
                    }
                    fStack_16c = 0.0;
                    fStack_164 = 0.0;
                    fStack_168 = (float)fVar15;
                    D3DXVec3TransformNormal(&fStack_16c,&fStack_16c,afStack_6c);
                    fVar16 = (float10)FUN_00ddbb50((fStack_158 * 0.0 + fStack_160 * 0.0 + fStack_15c
                                                   ) / (SQRT(fStack_158 * fStack_158 +
                                                             fStack_160 * fStack_160 +
                                                             fStack_15c * fStack_15c) * local_100));
                    fVar15 = (float10)1;
                    fVar17 = ABS(fVar16 * (float10)0.31830987);
                    if (fVar15 < ABS(fVar16 * (float10)0.31830987)) {
                      fVar17 = fVar15;
                    }
                    fVar17 = (float10)fStack_118 * (float10)_DAT_018a7940 +
                             (fVar15 - fVar17) * (float10)_DAT_018a7944 +
                             (float10)fStack_f4 * (float10)_DAT_018a7948 +
                             (float10)fStack_11c * (float10)_DAT_018a794c;
                    fVar15 = (float10)local_148;
                    if ((float10)local_148 < fVar17) {
                      local_140 = (uint)*local_134;
                      local_148 = (float)fVar17;
                      local_144 = (int)local_13c;
                      local_178 = *(float *)((int)local_138 + 0xcc);
                      pfVar8 = afStack_6c + 3;
                      pfVar12 = afStack_e0;
                      for (iVar5 = 0x10; puVar13 = local_134, fVar11 = local_138, fVar15 = fVar17,
                          iVar5 != 0; iVar5 = iVar5 + -1) {
                        *pfVar12 = *pfVar8;
                        pfVar8 = pfVar8 + 1;
                        pfVar12 = pfVar12 + 1;
                      }
                    }
                    local_13c = (float)((int)local_13c + 1);
                    puVar13 = puVar13 + 0x38;
                    local_134 = puVar13;
                  } while ((int)local_13c < *(int *)((int)fVar11 + 0xc4));
                }
              }
              if ((float10)local_174 < fVar15) {
                local_174 = (float)fVar15;
                uVar6 = FUN_00a7c7f0();
                FUN_00a7c960(uVar6);
                *(undefined2 *)(param_1 + 0x282) = (undefined2)local_140;
                param_1[0x283] = local_144;
                param_1[0x284] = (int)local_178;
                piVar7 = (int *)FUN_00c13920();
                iVar5 = (**(code **)(*piVar7 + 0x28))(0);
                if ((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
                  pfVar8 = (float *)FUN_00a925a0(auStack_24);
                  fStack_f4 = *pfVar8;
                  fStack_f0 = pfVar8[1];
                  fStack_ec = pfVar8[2];
                }
                local_174 = 0.0;
                fStack_170 = 0.0;
                fStack_16c = 1.0;
                D3DXVec3TransformNormal(&local_134,&local_174,auStack_e4);
                fStack_130 = fStack_b0 + fStack_130;
                fStack_12c = afStack_ac[0] + fStack_12c;
                fStack_128 = afStack_ac[1] + fStack_128;
                fVar11 = fStack_f0 * -1.0;
                fVar10 = fStack_ec * -1.0;
                fVar3 = fStack_e8 * -1.0;
                fVar15 = (float10)FUN_00ddbb50((fVar10 * fStack_16c + fVar11 * fStack_170 +
                                               fVar3 * fStack_168) /
                                               (SQRT(fStack_168 * fStack_168 +
                                                     fStack_170 * fStack_170 +
                                                     fStack_16c * fStack_16c) *
                                               SQRT(fVar10 * fVar10 + fVar11 * fVar11 +
                                                    fVar3 * fVar3)));
                param_1[0x285] = (int)(float)fVar15;
                param_1[0x287] = param_1[0x286];
              }
              iVar5 = FUN_00a81330();
              if ((iVar5 != 0) && (param_1[0x281] != 0)) {
                param_1[0x281] = 0;
              }
            }
          }
LAB_00ae1be6:
          local_14c = (float)((int)local_14c + 4);
        } while (local_14c != local_f8);
      }
      if (local_110 == 0.0) {
        return;
      }
      local_108 = 0;
      if (local_104 == 0) {
        return;
      }
      FUN_00dd48d0(local_110,0);
      return;
    }
LAB_00ae12e0:
    param_1[0x21d] = 2;
    return;
  }
  FUN_00a81330();
  FUN_00a7c940(param_1 + 0x25a);
  FUN_00a7c950();
  if (param_1[0x283] < 0) {
    return;
  }
  local_17c = (float)FUN_00a7c8a0();
  if (local_17c == 0.0) {
    return;
  }
  iVar5 = FUN_00445b60(local_17c);
  if ((((iVar5 == 0) || (iVar5 = FUN_00a81330(), iVar5 == 0)) ||
      (iVar5 = FUN_00a7c8a0(), iVar5 == 0)) || (iVar5 = FUN_00445b90(iVar5), iVar5 == 0)) {
    iVar5 = *(int *)((int)local_17c + 0x330);
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x330);
  }
  if (iVar5 == 0) {
    return;
  }
  if (*(int *)(iVar5 + 0xc0) == 0) {
    return;
  }
  if (*(int *)(iVar5 + 0xcc) == 0) {
    return;
  }
  if ((-1 < param_1[0x284]) && (param_1[0x284] < *(int *)(iVar5 + 0xcc))) {
    param_1[0x21e] = 0x43b40000;
    goto LAB_00ae12e0;
  }
  FUN_00a7c960(&local_14c);
  iVar5 = param_1[0x283] * 0x70 + *(int *)(iVar5 + 0xc0);
  sVar1 = *(short *)(iVar5 + 0x68);
  if (-1 < sVar1) {
    fVar11 = *(float *)((int)local_17c + 0x360);
    fVar10 = fVar11;
    if (fVar11 == 0.0) {
      fVar10 = local_17c;
    }
    if (sVar1 < *(short *)((int)fVar10 + 0x358)) {
      if (fVar11 == 0.0) {
        fVar11 = local_17c;
      }
      iVar9 = (int)sVar1;
      if ((iVar9 < 0) || (*(short *)((int)fVar11 + 0x358) <= iVar9)) {
        iVar9 = 0x10;
      }
      else {
        iVar9 = iVar9 * 0xb0 + *(int *)((int)fVar11 + 0x350) + 0x10;
      }
      goto LAB_00ae1365;
    }
  }
  iVar9 = (int)local_17c + 0x10;
LAB_00ae1365:
  D3DXMatrixMultiply(local_a0,iVar5 + 0x20,iVar9);
  fStack_16c = afStack_88[3];
  fStack_168 = fStack_78;
  pfVar8 = afStack_ac;
  pfVar12 = afStack_6c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar12 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar12 = pfVar12 + 1;
  }
  fStack_164 = fStack_74;
  fStack_160 = fStack_70;
  local_17c = SQRT(afStack_ac[2] * afStack_ac[2] +
                   afStack_ac[0] * afStack_ac[0] + afStack_ac[1] * afStack_ac[1]);
  local_178 = SQRT(fStack_94 * fStack_94 + fStack_9c * fStack_9c + fStack_98 * fStack_98);
  fVar11 = SQRT(afStack_88[1] * afStack_88[1] +
                fStack_8c * fStack_8c + afStack_88[0] * afStack_88[0]);
  fStack_180 = afStack_88[1] / fVar11;
  fVar15 = (float10)FUN_00ddbaa0(-(afStack_ac[2] / fVar11));
  fVar17 = (float10)fpatan((float10)(fStack_94 / fVar11),(float10)fStack_180);
  local_13c = (float)fVar17;
  local_138 = (float)fVar15;
  fVar15 = (float10)fpatan((float10)afStack_6c[1] / (float10)local_178,
                           (float10)afStack_6c[0] / (float10)local_17c);
  local_134 = (ushort *)(float)fVar15;
  if ((param_1[0x21c] == 0) || (param_1[0x21c] == 3)) {
    local_17c = 0.0;
    local_178 = 1.0;
    local_174 = 0.0;
    D3DXVec3TransformNormal(&local_17c,&local_17c,afStack_6c);
    fStack_16c = fStack_16c - local_17c * 0.15;
    fStack_168 = fStack_168 - local_178 * 0.15;
    fStack_164 = fStack_164 - local_174 * 0.15;
    fStack_160 = fStack_160 - fStack_170 * 0.15;
  }
  pfVar8 = &fStack_ec;
  D3DXMatrixRotationY(pfVar8,param_1[0x285]);
  D3DXMatrixMultiply(&fStack_f4,&fStack_f4,&fStack_74);
  fVar11 = local_fc * local_fc;
  fVar4 = local_100 * local_100;
  fVar3 = SQRT(afStack_e0[2] * afStack_e0[2] +
               afStack_e0[0] * afStack_e0[0] + afStack_e0[1] * afStack_e0[1]);
  fVar18 = fStack_e8 / fVar3;
  fVar10 = afStack_e0[2] / fVar3;
  fVar15 = (float10)FUN_00ddbaa0(-(local_f8 / fVar3));
  fVar17 = (float10)fpatan((float10)fVar18,(float10)fVar10);
  fStack_150 = (float)fVar17;
  local_14c = (float)fVar15;
  fVar15 = (float10)fpatan((float10)local_fc /
                           (float10)SQRT(fStack_e8 * fStack_e8 +
                                         fStack_f0 * fStack_f0 + fStack_ec * fStack_ec),
                           (float10)local_100 / (float10)SQRT(local_f8 * local_f8 + fVar4 + fVar11))
  ;
  local_148 = (float)fVar15;
  (**(code **)(*param_1 + 0x7c))(&fStack_180,&fStack_150);
  FUN_00ac7060(&stack0xfffffe78);
  pfVar12 = afStack_88;
  pfVar14 = (float *)(param_1 + 0x270);
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar14 = *pfVar12;
    pfVar12 = pfVar12 + 1;
    pfVar14 = pfVar14 + 1;
  }
  param_1[0x280] = 1;
  iVar5 = FUN_00445b60(pfVar8);
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 0xbfc) = 1;
  }
  FUN_00941570(pfVar8[0x147],1);
  return;
}

// 00AE1C40  FUN_00ae1c40  size=2007  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ae1c40(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined1 auStack_234 [4];
  float local_230;
  undefined4 local_22c;
  float local_228;
  undefined4 local_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  undefined4 local_204;
  undefined1 auStack_1f4 [4];
  undefined1 auStack_1f0 [16];
  undefined4 local_1e0 [12];
  float fStack_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  undefined4 uStack_194;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_140;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 auStack_90 [16];
  undefined1 auStack_50 [76];
  
  iVar3 = FUN_00a8cbe0(0);
  if (iVar3 == 0) {
    return;
  }
  switch(param_1[0x21d]) {
  case 0:
    fVar1 = (float)param_1[0x21e];
    fVar10 = (float10)FUN_00e049b0();
    param_1[0x21e] = (int)(float)((float10)fVar1 - fVar10);
    if ((float10)fVar1 - fVar10 < (float10)0) {
      param_1[0x221] = param_1[0x221] + 1;
      param_1[0x21e] = -0x40800000;
      param_1[0x21d] = 1;
      param_1[0x246] = 0x41f00000;
      return;
    }
    break;
  case 1:
    piVar5 = (int *)FUN_00c13920();
    iVar3 = (**(code **)(*piVar5 + 0x28))(0);
    if ((((iVar3 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) &&
        (((iVar3 = FUN_00416db0(), iVar3 == 0 && (iVar3 = FUN_00b8bb10(), iVar3 == 0)) ||
         (iVar3 = (**(code **)(*piVar5 + 0x32c))(), iVar3 == 0)))) ||
       ((param_1[0x281] == 0 && (iVar3 = FUN_00a81330(), iVar3 == 0)))) {
      param_1[0x21d] = 2;
      param_1[0x221] = 2;
    }
    fVar1 = (float)param_1[0x246];
    fVar10 = (float10)FUN_00e049b0();
    param_1[0x246] = (int)(float)((float10)fVar1 - fVar10);
    if ((float10)fVar1 - fVar10 < (float10)0) {
      param_1[0x245] = 1;
      param_1[0x246] = -0x40800000;
      return;
    }
    break;
  case 2:
    if (param_1[0x289] == 0) {
      FUN_0118f7b0();
      fVar10 = (float10)FUN_00dde300(0xbf8ccccd,0x3f8ccccd);
      fVar9 = (float10)FUN_00dde300(0xbf8ccccd,0x3f8ccccd);
      local_22c = 0x40000000;
      local_228 = (float)fVar9;
      local_224 = 0x3f800000;
      local_230 = (float)fVar10;
      if (param_1[0x280] != 0) {
        local_230 = 1.0;
        local_22c = 0x3f800000;
        local_228 = 1.0;
        local_224 = local_204;
        D3DXVec3TransformNormal(&local_230,&local_230,param_1 + 0x270);
      }
      fVar10 = (float10)FUN_00dde300(0xbdcccccd,0x3dcccccd);
      fStack_220 = (float)fVar10;
      fVar10 = (float10)FUN_00dde300(0xbdcccccd,0x3dcccccd);
      fStack_21c = (float)fVar10;
      fVar10 = (float10)FUN_00dde300(0xbdcccccd,0x3dcccccd);
      fStack_218 = (float)fVar10;
      uStack_150 = 0x3f800000;
      uStack_14c = 0x3f666666;
      uStack_148 = 0x3f666666;
      uStack_140 = 0x3f7d70a4;
      uStack_134 = _DAT_018a7954;
      uStack_130 = _DAT_018a7950;
      fStack_1b0 = local_230;
      uStack_1ac = local_22c;
      fStack_1a8 = local_228;
      uStack_1a4 = 0x3f800000;
      fStack_1a0 = fStack_220;
      fStack_19c = fStack_21c;
      uStack_194 = 0x3f800000;
      fStack_198 = fStack_218;
      uVar4 = FUN_009f8b40(0,0,0);
      local_1e0[0] = FUN_00410130(9,uVar4);
      fStack_210 = 0.05;
      fStack_20c = 0.05;
      fStack_208 = 0.05;
      piVar5 = (int *)FUN_00910da0();
      iVar3 = *piVar5;
      uVar4 = (**(code **)(*param_1 + 0x84))(&fStack_210,1);
      uVar4 = (**(code **)(iVar3 + 4))(auStack_1f4,local_1e0,param_1 + 0x10,uVar4);
      FUN_00910ab0(uVar4);
      param_1[0x289] = 1;
      param_1[0x254] = param_1[0x10];
      param_1[0x255] = param_1[0x11];
      param_1[0x256] = param_1[0x12];
      param_1[599] = param_1[0x13];
      if (param_1[0x1db] == 0) {
        return;
      }
      if (((param_1[0x21c] == 0) && (iVar3 = FUN_00de4550("_0_0_clp.bxm",0), iVar3 != 0)) &&
         ((FUN_009ff9b0(), param_1[0x1db] != 0 ||
          (FUN_00dd5650(&DAT_01665048,param_1[300]), param_1[0x1db] != 0)))) {
        uVar11 = 0x3f000000;
        piVar5 = param_1;
        uVar4 = FUN_00a7c800(param_1,0x3f000000);
        FUN_00a04230(iVar3,uVar4,piVar5,uVar11);
      }
      *(undefined4 *)param_1[0x1db] = 1;
      FUN_009fb990();
      *(undefined4 *)(param_1[0x1db] + 0xbac) = 1;
      return;
    }
    if (param_1[0x24d] != 0) {
      pcVar2 = *(code **)(*param_1 + 0x20);
      param_1[0x21e] = -0x40800000;
      param_1[0x21d] = 3;
      param_1[0x221] = 3;
      (*pcVar2)();
      FUN_00911f60(&fStack_210,auStack_1f0);
      FUN_004039a0(0x114,param_1,0);
      FUN_0041cdb0(&fStack_210);
      FUN_00dffb30(param_1 + 0x28c);
      FUN_00a8c930(0,local_1e0);
      if (param_1[0x21c] == 0) {
        iVar3 = FUN_00a82090("naizou_syo",0x70500,0);
        if ((iVar3 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
          FUN_00911f60(&local_230,&fStack_220);
          FUN_009f8ae0(param_1[0x25e]);
          pcVar2 = *(code **)(*piVar5 + 0x7c);
          piVar5[0x248] = param_1[0x21f];
          (*pcVar2)(auStack_234,&local_224);
          (**(code **)(*piVar5 + 0x30c))();
          uVar4 = 0;
LAB_00ae2201:
          iVar3 = FUN_00951970(piVar5[0x13c],uVar4);
          if (iVar3 == 0) {
            FUN_00a805f0();
          }
        }
      }
      else {
        iVar3 = FUN_00a82090("naizou_syo_meka",0x70510,0);
        if ((iVar3 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
          FUN_00911f60(&local_230,&fStack_220);
          FUN_009f8ae0(param_1[0x25e]);
          pcVar2 = *(code **)(*piVar5 + 0x7c);
          piVar5[0x248] = param_1[0x21f];
          (*pcVar2)(auStack_234,&local_224);
          (**(code **)(*piVar5 + 0x30c))();
          uVar4 = 1;
          goto LAB_00ae2201;
        }
      }
      FUN_00ac6fc0();
    }
    if ((param_1[0x289] != 0) && (param_1[0x24d] == 0)) {
      FUN_004066f0();
      iVar3 = FUN_00a12210(0);
      if (iVar3 != 0) {
        *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4;
        FUN_0091df60(auStack_50);
        FUN_01005140(auStack_90);
        puVar7 = auStack_90;
        puVar8 = (undefined4 *)(iVar3 + 0x10);
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        FUN_0091a4e0(&fStack_210,auStack_1f0);
        FUN_00911dc0(&fStack_220);
        FUN_00ac7060(&fStack_220);
        if (((0.5 < SQRT((fStack_218 - (float)param_1[0x256]) * (fStack_218 - (float)param_1[0x256])
                         + (fStack_21c - (float)param_1[0x255]) *
                           (fStack_21c - (float)param_1[0x255]) +
                           (fStack_220 - (float)param_1[0x254]) *
                           (fStack_220 - (float)param_1[0x254]))) && (ABS(fStack_20c) < 0.1)) ||
           (SQRT(fStack_208 * fStack_208 + fStack_210 * fStack_210 + fStack_20c * fStack_20c) < 0.1)
           ) {
          piVar5 = (int *)FUN_00c13920();
          iVar6 = (**(code **)(*piVar5 + 0x28))(0);
          if (((iVar6 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) &&
             ((iVar6 = FUN_00416db0(), iVar6 == 0 &&
              ((iVar6 = FUN_00b8bb10(), iVar6 == 0 &&
               (iVar6 = (**(code **)(*piVar5 + 0x32c))(), iVar6 == 0)))))) {
            param_1[0x24d] = 1;
          }
        }
        if (param_1[0x24d] != 0) {
          *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) & 0xfffb;
        }
      }
      FUN_00406760();
      return;
    }
    break;
  case 3:
    if (0.0 < (float)param_1[0x261]) {
      fVar1 = (float)param_1[0x261];
      fVar10 = (float10)FUN_00e049b0();
      param_1[0x261] = (int)(float)((float10)fVar1 - fVar10);
      if ((float10)fVar1 - fVar10 < (float10)0) {
        FUN_009fdde0();
      }
    }
  }
  return;
}

// 00AE2430  FUN_00ae2430  size=157  [run]
void __fastcall FUN_00ae2430(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_160 [348];
  
  switch(*(undefined4 *)(param_1 + 0x87c)) {
  case 0:
    FUN_004039a0(0,param_1,0);
    goto LAB_00ae24b1;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    FUN_004039a0(2,param_1,0);
    goto LAB_00ae24b1;
  case 3:
    FUN_004039a0(4,param_1,0);
    goto LAB_00ae24b1;
  case 4:
    uVar1 = 3;
    break;
  default:
    uVar1 = 0;
  }
  FUN_004039a0(uVar1,param_1,0);
LAB_00ae24b1:
  puVar2 = local_160;
  uVar1 = FUN_00e00b40(*(undefined4 *)(param_1 + 0x4b0),puVar2);
  FUN_00a8c930(uVar1,puVar2);
  return;
}

// 00AE24F0  FUN_00ae24f0  size=121  [run]
void __fastcall FUN_00ae24f0(int param_1)

{
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x870) == 0) {
    FUN_004039a0(0xae,param_1,0);
    FUN_00e021c0(param_1);
    FUN_00a8c930(0,local_160);
    return;
  }
  if (*(int *)(param_1 + 0x870) == 3) {
    FUN_004039a0(0xaf,param_1,0);
    FUN_00e021c0(param_1);
    FUN_00a8c930(0,local_160);
  }
  return;
}

// 00AE2570  FUN_00ae2570  size=105  [run]
void __fastcall FUN_00ae2570(int *param_1)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(0x40,param_1,0);
  FUN_00a8c930(0,local_160);
  param_1[0x261] = 0x41a00000;
  param_1[0x21d] = 3;
  param_1[0x21e] = -0x40800000;
  param_1[0x221] = 3;
  (**(code **)(*param_1 + 0x20))();
  FUN_00ac6fc0();
  return;
}


// src/ui/cUIEx0001.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC5C20..00CE7950, 4 functions

#include "mgrr.h"
#include "cUIEx0001.h"

// 00CC5C20  cUIEx0001::cUIEx0001  size=41  [class]
void cUIEx0001::cUIEx0001(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd29b0(0x10,0x20,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = vftable;
  puVar1[3] = 0;
  return;
}

// 00CCF740  cUIEx0001::vf00  size=31  [class]
undefined4 * __thiscall cUIEx0001::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIExtendObject::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CE78F0  cUIEx0001::vf08  size=87  [class]
void __thiscall cUIEx0001::vf08(int param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *param_2;
  fVar3 = ABS((float)iVar1 * 0.017453292);
  fVar2 = 0.0;
  if ((0.0 <= fVar3) && (fVar2 = fVar3, 6.2831855 < fVar3)) {
    fVar2 = 6.2831855;
  }
  *(float *)(param_1 + 8) = fVar2;
  if (0.0 <= (float)iVar1 * 0.017453292) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

// 00CE7950  cUIEx0001::vf1C  size=1652  [class]
void __thiscall cUIEx0001::vf1C(int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  float fStack_240;
  float fStack_23c;
  undefined4 uStack_238;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float afStack_210 [4];
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f4;
  float afStack_1f0 [21];
  float fStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  float fStack_190;
  float fStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  float fStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  float fStack_160;
  float fStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  float afStack_13c [8];
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [76];
  
  if (((((*(float *)(param_1 + 8) != 0.0) && (param_4 != (int *)0x0)) &&
       (iVar2 = (**(code **)(*param_4 + 8))(), iVar2 == 1)) &&
      ((0.0 < *(float *)(param_3 + 0x4c) && (0.0 < *(float *)(param_3 + 0x5c))))) &&
     ((*param_2 != 0 &&
      (puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar3 != (undefined4 *)0x0)))) {
    cUIPrimWorkBase::cUIPrimWorkBase();
    *puVar3 = cUIPrimWorkFan::vftable;
    puVar3[0x4c] = 0;
    puVar3[0x4d] = 0;
    iVar2 = FUN_00caef00(param_2,7,7);
    if (iVar2 != 0) {
      puVar3[3] = 0;
      puVar3[0x4c] = 0;
      puVar3[0x4d] = 7;
      FUN_00ce5440(&fStack_240,auStack_50,param_3);
      if ((fStack_230 != 0.0) && (fStack_22c != 0.0)) {
        uStack_180 = *(undefined4 *)(param_3 + 0x40);
        uStack_17c = *(undefined4 *)(param_3 + 0x44);
        uStack_178 = *(undefined4 *)(param_3 + 0x48);
        uStack_174 = *(undefined4 *)(param_3 + 0x4c);
        uStack_198 = uStack_238;
        uStack_168 = uStack_238;
        afStack_13c[1] = (float)uStack_238;
        uStack_108 = uStack_238;
        uStack_d8 = uStack_238;
        uStack_a8 = uStack_238;
        uStack_78 = uStack_238;
        uStack_194 = 0;
        uStack_188 = 0;
        uStack_184 = 0;
        uStack_164 = 0;
        uStack_158 = 0;
        uStack_154 = 0;
        uStack_140 = 0;
        afStack_13c[0] = 0.0;
        afStack_13c[2] = 0.0;
        afStack_13c[3] = 0.0;
        afStack_13c[4] = 0.0;
        afStack_13c[5] = 0.0;
        afStack_13c[6] = 0.0;
        uStack_110 = 0;
        uStack_10c = 0;
        uStack_104 = 0;
        uStack_100 = 0;
        uStack_fc = 0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        uStack_c8 = 0;
        uStack_c4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        uStack_80 = 0;
        uStack_7c = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
        uStack_68 = 0;
        uStack_64 = 0;
        afStack_1f0[0x14] = fStack_230 * 0.5 + fStack_240;
        fStack_19c = fStack_22c * 0.5 + fStack_23c;
        fStack_190 = (fStack_220 * 0.5 + fStack_228) * fStack_218;
        fStack_18c = (fStack_21c * 0.5 + fStack_224) * fStack_214;
        fStack_16c = fStack_23c;
        fStack_15c = fStack_224 * fStack_214;
        fStack_170 = afStack_1f0[0x14];
        fStack_160 = fStack_190;
        uStack_150 = uStack_180;
        uStack_14c = uStack_17c;
        uStack_148 = uStack_178;
        uStack_144 = uStack_174;
        afStack_13c[7] = (float)uStack_180;
        uStack_11c = uStack_17c;
        uStack_118 = uStack_178;
        uStack_114 = uStack_174;
        uStack_f0 = uStack_180;
        uStack_ec = uStack_17c;
        uStack_e8 = uStack_178;
        uStack_e4 = uStack_174;
        uStack_c0 = uStack_180;
        uStack_bc = uStack_17c;
        uStack_b8 = uStack_178;
        uStack_b4 = uStack_174;
        uStack_90 = uStack_180;
        uStack_8c = uStack_17c;
        uStack_88 = uStack_178;
        uStack_84 = uStack_174;
        uStack_60 = uStack_180;
        uStack_5c = uStack_17c;
        uStack_58 = uStack_178;
        uStack_54 = uStack_174;
        FUN_00cb3f90(afStack_210 + 0x12,fStack_230,fStack_22c,*(undefined4 *)(param_1 + 8));
        iVar2 = FUN_00cb3f90(afStack_210 + 8,fStack_220,fStack_21c,*(undefined4 *)(param_1 + 8));
        iVar5 = 0;
        if (3 < iVar2) {
          pfVar6 = afStack_13c;
          do {
            iVar1 = iVar5 * 2;
            iVar5 = iVar5 + 4;
            pfVar6[-1] = afStack_210[iVar1 + 0x12] + fStack_240;
            *pfVar6 = afStack_210[iVar5 * 2 + 0xb] + fStack_23c;
            pfVar6[3] = (afStack_210[iVar5 * 2] + fStack_228) * fStack_218;
            pfVar6[4] = (afStack_210[iVar5 * 2 + 1] + fStack_224) * fStack_214;
            pfVar6[0xb] = afStack_210[iVar5 * 2 + 0xc] + fStack_240;
            pfVar6[0xc] = afStack_210[iVar5 * 2 + 0xd] + fStack_23c;
            pfVar6[0xf] = (afStack_210[iVar5 * 2 + 2] + fStack_228) * fStack_218;
            pfVar6[0x10] = (afStack_210[iVar5 * 2 + 3] + fStack_224) * fStack_214;
            pfVar6[0x17] = afStack_210[iVar5 * 2 + 0xe] + fStack_240;
            pfVar6[0x18] = afStack_210[iVar5 * 2 + 0xf] + fStack_23c;
            pfVar6[0x1b] = (afStack_210[iVar5 * 2 + 4] + fStack_228) * fStack_218;
            pfVar6[0x1c] = (afStack_210[iVar5 * 2 + 5] + fStack_224) * fStack_214;
            pfVar6[0x23] = afStack_210[iVar5 * 2 + 0x10] + fStack_240;
            pfVar6[0x24] = afStack_210[iVar5 * 2 + 0x11] + fStack_23c;
            pfVar6[0x27] = (afStack_210[iVar5 * 2 + 6] + fStack_228) * fStack_218;
            pfVar6[0x28] = (afStack_210[iVar5 * 2 + 7] + fStack_224) * fStack_214;
            pfVar6 = pfVar6 + 0x30;
          } while (iVar5 < iVar2 + -3);
        }
        if (iVar5 < iVar2) {
          pfVar6 = afStack_13c + iVar5 * 0xc;
          do {
            iVar1 = iVar5 * 2;
            iVar5 = iVar5 + 1;
            pfVar6[-1] = afStack_210[iVar1 + 0x12] + fStack_240;
            *pfVar6 = afStack_210[iVar5 * 2 + 0x11] + fStack_23c;
            pfVar6[3] = (afStack_210[iVar5 * 2 + 6] + fStack_228) * fStack_218;
            pfVar6[4] = (afStack_210[iVar5 * 2 + 7] + fStack_224) * fStack_214;
            pfVar6 = pfVar6 + 0xc;
          } while (iVar5 < iVar2);
        }
        iVar2 = FUN_00ccc160(afStack_210 + 0x1c,iVar2 + 2);
        if (iVar2 != 0) {
          FUN_00cacde0(auStack_50,*(undefined4 *)(param_3 + 0x6c));
          puVar3[0x35] = *(undefined4 *)(param_3 + 0x74);
          if (afStack_210[0] == 0.0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined4 *)((int)afStack_210[0] + 0x10);
          }
          puVar3[0x1a] = uVar4;
          puVar3[0x1d] = uStack_1f4;
          puVar3[0x1b] = 0;
          iVar2 = *(int *)(param_3 + 0x6c);
          puVar3[0x47] = iVar2;
          puVar3[0x49] = (uint)(iVar2 == 3);
          FUN_00ccabb0(auStack_50,uStack_200,*(undefined4 *)(param_3 + 0x68),uStack_1fc);
          if (*(int *)(param_3 + 0x78) == 2) {
            FUN_00a30800(puVar3,0x3e,0);
            return;
          }
          if (*(int *)(param_3 + 0x78) == 1) {
            uVar4 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
            FUN_00a30800(puVar3,0x69,uVar4);
            return;
          }
          if (*(int *)(param_3 + 0x6c) != 3) {
            uVar4 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
            FUN_00a30800(puVar3,0x67,uVar4);
            return;
          }
          FUN_00a30800(puVar3,0x61,0);
          return;
        }
      }
    }
  }
  return;
}


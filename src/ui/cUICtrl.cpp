// src/ui/cUICtrl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC75D0..00D20260, 6 functions

#include "types.h"

// 00CC75D0  cUICtrl::cUICtrl  size=106  [class]
undefined4 * __fastcall cUICtrl::cUICtrl(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = vftable;
  D3DXMatrixTranslation(param_1 + 4,0,0,0);
  puVar2 = param_1 + 4;
  puVar3 = param_1 + 0x58;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x14] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x17] = 0x3f800000;
  param_1[0x18] = 0x3f800000;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1b] = 0x3f800000;
  param_1[0x21] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}

// 00CC7640  FUN_00cc7640  size=249  [callgraph]
void __fastcall FUN_00cc7640(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x7c) != 0) && (*(int *)(param_1 + 0x74) != 0)) {
    if (*(int *)(param_1 + 0x80) != 0) {
      iVar3 = 0;
      uVar2 = 0;
      do {
        if (*(int *)(iVar3 + 0x3f0 + *(int *)(param_1 + 0x7c)) != 0) {
          iVar1 = (**(code **)(**(int **)(iVar3 + 0x3f0 + *(int *)(param_1 + 0x7c)) + 8))();
          if (iVar1 == 3) {
            FUN_00cb3c20();
          }
          (**(code **)(**(int **)(iVar3 + 0x3f0 + *(int *)(param_1 + 0x7c)) + 4))();
          FUN_00dd48d0(*(undefined4 *)(iVar3 + 0x3f0 + *(int *)(param_1 + 0x7c)),0);
        }
        iVar1 = *(int *)(iVar3 + 0x3f4 + *(int *)(param_1 + 0x7c));
        if ((iVar1 != 0) && (*(int *)(iVar1 + 4) - 1U < 0x3f2)) {
          (**(code **)(**(int **)(iVar3 + 0x3f4 + *(int *)(param_1 + 0x7c)) + 4))();
          FUN_00dd48d0(*(undefined4 *)(iVar3 + 0x3f4 + *(int *)(param_1 + 0x7c)),0);
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x400;
      } while (uVar2 < *(uint *)(param_1 + 0x80));
    }
    FUN_00dd48d0(*(undefined4 *)(param_1 + 0x7c),0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}

// 00CF6AF0  cUICtrl::vf00  size=36  [class]
undefined4 * __thiscall cUICtrl::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00cc7640();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CF6B20  cUICtrl::vf04  size=1717  [class]
void __thiscall
cUICtrl::vf04(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5,float *param_6,
             float *param_7,undefined4 param_8)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte bVar11;
  int local_154;
  undefined4 *local_150;
  int local_14c;
  int local_144;
  uint local_140;
  char *local_13c;
  int *local_138;
  int local_134;
  int local_12c;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  int local_e8;
  int local_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 auStack_a0 [16];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  local_144 = *(int *)(param_1 + 0x78);
  iVar8 = 0;
  if ((local_144 != 0) && (*(int *)(param_1 + 0x7c) != 0)) {
    if (*(int *)(local_144 + 0x10) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(local_144 + 0x10) + local_144;
    }
    local_e8 = *(int *)(local_144 + 0xc);
    local_154 = param_3;
    local_120 = 0;
    local_12c = 0;
    bVar3 = false;
    local_114 = 0;
    local_118 = 0x7fffffff;
    local_134 = 0x7fffffff;
    local_150 = (undefined4 *)0x0;
    local_14c = 0;
    bVar2 = false;
    local_11c = 0;
    if ((local_e8 < 1) || (*(int *)(local_144 + 0x1c) == 0)) {
      local_144 = 0;
    }
    else {
      local_144 = *(int *)(local_144 + 0x1c) + local_144;
    }
    local_140 = 0;
    if (*(int *)(param_1 + 0x80) != 0) {
      local_138 = (int *)(iVar7 + 0x84);
      local_13c = (char *)(local_144 + 2);
      local_124 = 0;
      do {
        if (bVar2) {
          local_14c = local_14c + 1;
          if (local_13c[-1] <= local_14c) {
            if (local_150[1] != 0) {
              FUN_00f99d30();
            }
            if (local_150[2] != 0) {
              FUN_00f99a40();
            }
            local_150[0x39] = 0;
            FUN_00a30800(local_150,0x67,iVar8);
            local_11c = local_11c + 1;
            local_13c = local_13c + 4;
            bVar2 = false;
            local_14c = 0;
          }
        }
        else if (((local_144 != 0) && (local_11c < local_e8)) && (local_13c[-2] == (char)local_140))
        {
          if ((*param_2 == 0) ||
             (local_150 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20),
             local_150 == (undefined4 *)0x0)) {
            local_150 = (undefined4 *)0x0;
          }
          else {
            cUIPrimWorkBase::cUIPrimWorkBase();
            *local_150 = cUIPrimWork::vftable;
            iVar8 = FUN_00caefd0(param_2,(int)*local_13c,1,0);
            if (iVar8 == 0) {
              FUN_00dd5650(&DAT_016b911c);
              local_14c = local_14c + 1;
              local_150 = (undefined4 *)0x0;
            }
            else {
              bVar2 = true;
              local_14c = 0;
            }
          }
        }
        iVar7 = local_124 + *(int *)(param_1 + 0x7c);
        iVar8 = *(int *)(iVar7 + 0x3b4) + param_4;
        local_e4 = local_138[-0xd];
        if (local_118 < local_e4) {
          if (local_118 == 0x7fffffff) goto LAB_00cf6d32;
        }
        else {
          local_118 = 0x7fffffff;
LAB_00cf6d32:
          if ((*(int *)(iVar7 + 0x3b0) != 0) || (local_118 = local_e4, local_e4 == 0x7fffffff)) {
            if (local_e4 < local_134) {
              local_134 = 0x7fffffff;
            }
            bVar4 = true;
            if (local_134 == 0x7fffffff) {
              local_154 = param_3;
            }
            else if (local_134 < local_e4) {
              if ((local_154 != 5) && (local_154 != 10)) {
                if (local_114 == 0) {
                  if (local_12c == 0) {
                    bVar4 = false;
                    local_154 = (uint)(local_120 != 0) * 2 + 2;
                  }
                  else {
                    bVar4 = false;
                    local_154 = (uint)(local_120 != 0) * 2 + 7;
                  }
                }
                else {
LAB_00cf6d90:
                  local_154 = 0xb;
                }
              }
            }
            else if (bVar3) {
              if (local_114 != 0) goto LAB_00cf6d90;
              local_154 = (-(uint)(local_12c != 0) & 5) + 5;
            }
            else {
              local_154 = 0;
            }
            if (*local_138 != 0) {
              bVar4 = false;
            }
            if ((((local_154 == 0) && (local_140 < *(uint *)(param_1 + 0x80))) &&
                (piVar1 = *(int **)(iVar7 + 0x3f0), piVar1 != (int *)0x0)) &&
               (iVar5 = (**(code **)(*piVar1 + 8))(), iVar5 == 5)) {
              local_120 = piVar1[2];
              local_12c = piVar1[3];
              local_114 = piVar1[1];
              bVar3 = true;
              local_134 = local_e4;
            }
            if (bVar4) {
              pfVar6 = &fStack_b0;
              fStack_b0 = *param_6 * *(float *)(iVar7 + 0x340);
              fStack_ac = param_6[1] * *(float *)(iVar7 + 0x344);
              fStack_a8 = param_6[2] * *(float *)(iVar7 + 0x348);
              fStack_a4 = *(float *)(iVar7 + 0x34c) * param_6[3];
            }
            else {
              fStack_e0 = *(float *)(iVar7 + 0x340);
              pfVar6 = &fStack_e0;
              uStack_dc = *(undefined4 *)(iVar7 + 0x344);
              uStack_d8 = *(undefined4 *)(iVar7 + 0x348);
              uStack_d4 = *(undefined4 *)(iVar7 + 0x34c);
            }
            fStack_f8 = *pfVar6;
            fStack_f4 = pfVar6[1];
            fStack_f0 = pfVar6[2];
            fStack_ec = pfVar6[3];
            if (bVar4) {
              pfVar6 = &fStack_d0;
              fStack_d0 = *param_7 * *(float *)(iVar7 + 0x350);
              fStack_cc = param_7[1] * *(float *)(iVar7 + 0x354);
              fStack_c8 = param_7[2] * *(float *)(iVar7 + 0x358);
              fStack_c4 = *(float *)(iVar7 + 0x35c) * param_7[3];
            }
            else {
              fStack_c0 = *(float *)(iVar7 + 0x350);
              pfVar6 = &fStack_c0;
              uStack_bc = *(undefined4 *)(iVar7 + 0x354);
              uStack_b8 = *(undefined4 *)(iVar7 + 0x358);
              uStack_b4 = *(undefined4 *)(iVar7 + 0x35c);
            }
            fStack_108 = *pfVar6;
            fStack_104 = pfVar6[1];
            fStack_100 = pfVar6[2];
            fStack_fc = pfVar6[3];
            if (*(int *)(iVar7 + 0x3e4) == 0) {
              bVar11 = fStack_ec < 0.003921569 | (byte)((ushort)((ushort)NAN(fStack_ec) << 10) >> 8)
              ;
LAB_00cf6fbf:
              if (((POPCOUNT(bVar11) & 1U) != 0) && (*(int *)(iVar7 + 0x3f4) == 0))
              goto LAB_00cf718a;
            }
            else if (fStack_ec < 0.003921569) {
              bVar11 = fStack_fc < 0.003921569 | (byte)((ushort)((ushort)NAN(fStack_fc) << 10) >> 8)
              ;
              goto LAB_00cf6fbf;
            }
            FUN_00cc6430(&fStack_f8);
            FUN_00cc6430(&fStack_108);
            puVar9 = (undefined4 *)(iVar7 + 0x300);
            puVar10 = auStack_a0;
            for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            fStack_60 = fStack_f8;
            fStack_5c = fStack_f4;
            fStack_58 = fStack_f0;
            fStack_54 = fStack_ec;
            fStack_50 = fStack_108;
            fStack_4c = fStack_104;
            fStack_48 = fStack_100;
            fStack_44 = fStack_fc;
            uStack_40 = *(undefined4 *)(iVar7 + 0x3e4);
            uStack_3c = *(undefined4 *)(iVar7 + 1000);
            uStack_2c = param_8;
            iStack_38 = local_154;
            iStack_34 = local_138[0x44];
            iStack_30 = *(int *)(iVar7 + 0x3b4) + param_4;
            uStack_28 = param_5;
            uStack_24 = 0xffffffff;
            uStack_20 = 0;
            if (*(int *)(iVar7 + 0x3f4) == 0) {
              if (*(int *)(iVar7 + 0x3f0) != 0) {
                if (bVar2) {
                  iVar5 = (**(code **)(**(int **)(iVar7 + 0x3f0) + 8))();
                  if ((iVar5 < 1) || ((2 < iVar5 && (iVar5 != 8)))) {
                    (**(code **)(**(int **)(iVar7 + 0x3f0) + 0x14))(param_2,auStack_a0);
                  }
                  else {
                    (**(code **)(**(int **)(iVar7 + 0x3f0) + 0x18))(local_150,local_14c,auStack_a0);
                  }
                }
                else {
                  (**(code **)(**(int **)(iVar7 + 0x3f0) + 0x14))(param_2,auStack_a0);
                }
              }
            }
            else {
              (**(code **)(**(int **)(iVar7 + 0x3f4) + 0x1c))
                        (param_2,auStack_a0,*(undefined4 *)(iVar7 + 0x3f0));
            }
          }
        }
LAB_00cf718a:
        local_124 = local_124 + 0x400;
        local_138 = local_138 + 0x6c;
        local_140 = local_140 + 1;
      } while (local_140 < *(uint *)(param_1 + 0x80));
      if (bVar2) {
        FUN_00a30800(local_150,0x67,iVar8);
      }
    }
  }
  return;
}

// 00D120F0  cUICtrl::HIT  size=148  [class]
int __thiscall cUICtrl::HIT(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_34 [7];
  undefined4 uStack_18;
  undefined *puStack_14;
  
  if (*(undefined4 **)(param_1 + 4) == (undefined4 *)0x0) {
    return 0;
  }
  if (DAT_01dc0730 == 0) {
    iVar1 = 0;
  }
  else {
    puStack_14 = (undefined *)(param_1 + 0xc);
    puVar2 = *(undefined4 **)(param_1 + 4);
    puVar3 = auStack_34;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar1 = cUIHitDataManager::Dictionary(param_2,param_3,param_4);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 8) = 1;
      puStack_14 = *(undefined **)(param_1 + 4);
      *(undefined4 *)(param_1 + 0x10) = param_2;
      *(undefined4 *)(param_1 + 0x14) = param_3;
      *(undefined4 *)(param_1 + 0x18) = param_4;
      uStack_18 = 0xd12171;
      FUN_00dd4920();
      *(undefined4 *)(param_1 + 4) = 0;
      return 1;
    }
  }
  puStack_14 = &DAT_016bad74;
  uStack_18 = 0xd1211b;
  FUN_00dd5650();
  return iVar1;
}

// 00D20260  cUICtrl::HIT_2  size=117  [class]
int __thiscall
cUICtrl::HIT_2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  if ((DAT_01dc0730 != 0) &&
     (iVar1 = FUN_00d129f0(param_2,param_3,param_4,param_5,*(undefined4 *)(param_1 + 0x10),
                           *(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18)),
     iVar1 != 0)) {
    return iVar1;
  }
  FUN_00dd5650(&DAT_016bb338);
  return 0;
}


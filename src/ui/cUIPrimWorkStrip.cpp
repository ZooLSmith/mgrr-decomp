// src/ui/cUIPrimWorkStrip.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCC420..00CE97D0, 8 functions

#include "mgrr.h"
#include "cUIPrimWorkStrip.h"

// 00CCC420  cUIPrimWorkStrip::cUIPrimWorkStrip_5  size=32  [class]
undefined4 * __fastcall cUIPrimWorkStrip::cUIPrimWorkStrip_5(undefined4 *param_1)

{
  cUIPrimWorkBase::cUIPrimWorkBase();
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *param_1 = vftable;
  return param_1;
}

// 00CCC440  cUIPrimWorkStrip::vf08  size=6  [class]
undefined4 cUIPrimWorkStrip::vf08(void)

{
  return 5;
}

// 00CCC450  cUIPrimWorkStrip::vf0C  size=10  [class]
int __fastcall cUIPrimWorkStrip::vf0C(int param_1)

{
  return *(int *)(param_1 + 0x130) + -2;
}

// 00CCC490  cUIPrimWorkStrip::vf00  size=53  [class]
undefined4 * __thiscall cUIPrimWorkStrip::vf00(undefined4 *param_1,byte param_2)

{
  FUN_00fa5be0();
  thunk_FUN_00fa45a0();
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CE8060  cUIPrimWorkStrip::cUIPrimWorkStrip_3  size=1002  [class]
void __thiscall cUIPrimWorkStrip::cUIPrimWorkStrip_3(int param_1,int *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_118;
  float local_100;
  float local_fc;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  FUN_00ce5440(&local_100,local_50,param_3);
  if ((*param_2 != 0) &&
     (puVar5 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar5 != (undefined4 *)0x0)) {
    cUIPrimWorkBase::cUIPrimWorkBase();
    puVar5[0x4c] = 0;
    puVar5[0x4d] = 0;
    *puVar5 = vftable;
    iVar7 = *(int *)(param_1 + 8) * 2;
    if ((iVar7 != 0) && (iVar6 = FUN_00caef00(param_2,iVar7,iVar7), iVar6 != 0)) {
      puVar5[0x4d] = iVar7;
      puVar5[3] = 0;
      puVar5[0x4c] = 0;
      puVar5[0x35] = *(undefined4 *)(param_3 + 0x74);
      fVar2 = (float)(*(int *)(param_1 + 8) + -1);
      if (local_cc == 0) {
        fVar4 = local_e0 + local_e8;
        fVar3 = local_e8;
      }
      else {
        fVar3 = local_e0 + local_e8;
        fVar4 = local_e8;
      }
      if (local_c8 == 0) {
        fVar1 = local_dc / fVar2;
      }
      else {
        local_e4 = local_e4 + local_dc;
        fVar1 = (local_dc / fVar2) * -1.0;
      }
      FUN_00cacde0(local_50,*(undefined4 *)(param_3 + 0x6c));
      local_118 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          iVar7 = *(int *)(param_1 + 0x28);
          local_b0 = (*(float *)(iVar7 + 4 + local_118 * 8) - *(float *)(iVar7 + local_118 * 8)) *
                     *(float *)(param_1 + 0x24) + *(float *)(iVar7 + local_118 * 8) + local_100;
          local_ac = (local_ec / fVar2) * (float)local_118 + local_fc;
          local_9c = (float)local_118 * fVar1 * local_d4 + local_d4 * local_e4;
          local_a8 = 0;
          local_a4 = 0;
          local_98 = 0;
          local_94 = 0;
          local_90 = *(undefined4 *)(param_3 + 0x40);
          local_8c = *(undefined4 *)(param_3 + 0x44);
          local_88 = *(undefined4 *)(param_3 + 0x48);
          local_84 = *(undefined4 *)(param_3 + 0x4c);
          local_80 = local_f0 + local_b0;
          local_78 = 0;
          local_74 = 0;
          local_68 = 0;
          local_64 = 0;
          local_60 = *(undefined4 *)(param_3 + 0x40);
          local_5c = *(undefined4 *)(param_3 + 0x44);
          local_58 = *(undefined4 *)(param_3 + 0x48);
          local_54 = *(undefined4 *)(param_3 + 0x4c);
          local_a0 = local_d8 * fVar3;
          local_7c = local_ac;
          local_70 = local_d8 * fVar4;
          local_6c = local_9c;
          iVar7 = FUN_00caf960(&local_b0,2);
          if (iVar7 == 0) {
            return;
          }
          local_118 = local_118 + 1;
        } while (local_118 < *(int *)(param_1 + 8));
      }
      if (local_d0 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(local_d0 + 0x10);
      }
      puVar5[0x1a] = uVar8;
      puVar5[0x1d] = local_b4;
      puVar5[0x1b] = 0;
      iVar7 = *(int *)(param_3 + 0x6c);
      puVar5[0x47] = iVar7;
      puVar5[0x49] = (uint)(iVar7 == 3);
      uVar8 = *(undefined4 *)(param_3 + 0x68);
      if (puVar5[0x19] != 0) {
        FUN_00dd5650(&DAT_016b79e8);
      }
      puVar5[0x1c] = local_c0;
      puVar5[0x1e] = uVar8;
      puVar5[0x38] = local_bc;
      FID_conflict__memcpy(puVar5 + 8,local_50,0x40);
      puVar5[0x15] = (float)puVar5[0x15] - 1.0;
      if (*(int *)(param_3 + 0x78) == 2) {
        FUN_00a30800(puVar5,0x3e,0);
        return;
      }
      if (*(int *)(param_3 + 0x78) == 1) {
        iVar7 = *(int *)(param_3 + 0x70);
        iVar6 = *(int *)(param_3 + 0x7c);
        if (DAT_01dc5030 != 0) {
          if (iVar6 == 0) {
            FUN_00a30800(puVar5,0x69,iVar7 + -1);
            return;
          }
          if ((iVar6 != 1) && (iVar6 == 2)) {
            iVar7 = iVar7 + 1;
          }
        }
        FUN_00a30800(puVar5,0x69,iVar7);
        return;
      }
      if (*(int *)(param_3 + 0x6c) == 3) {
        FUN_00a30800(puVar5,0x61,0);
        return;
      }
      iVar7 = *(int *)(param_3 + 0x70);
      iVar6 = *(int *)(param_3 + 0x7c);
      if (DAT_01dc5030 != 0) {
        if (iVar6 == 0) {
          iVar7 = iVar7 + -1;
        }
        else if ((iVar6 != 1) && (iVar6 == 2)) {
          iVar7 = iVar7 + 1;
        }
      }
      FUN_00a30800(puVar5,0x67,iVar7);
    }
  }
  return;
}

// 00CE87E0  cUIPrimWorkStrip::cUIPrimWorkStrip_4  size=907  [class]
void __thiscall
cUIPrimWorkStrip::cUIPrimWorkStrip_4(int param_1,int *param_2,int param_3,int param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int local_1a8;
  float *local_1a0;
  int local_198;
  float local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  float local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [64];
  undefined1 local_e0 [48];
  int local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_88 [22];
  float local_30 [11];
  
  if ((param_4 != 0) && (0.0 < *(float *)(param_3 + 0x4c))) {
    FUN_00ce6d00(local_e0,local_120,param_3);
    FUN_00cacde0(local_120,*(undefined4 *)(param_3 + 0x6c));
    local_1a0 = local_30;
    puVar11 = local_88;
    local_198 = 0;
    while ((*param_2 != 0 &&
           (puVar8 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar8 != (undefined4 *)0x0))
          ) {
      cUIPrimWorkBase::cUIPrimWorkBase();
      puVar8[0x4c] = 0;
      puVar8[0x4d] = 0;
      *puVar8 = vftable;
      iVar10 = *(int *)(param_1 + 8) * 2;
      if (iVar10 == 0) {
        return;
      }
      iVar9 = FUN_00caef00(param_2,iVar10,iVar10);
      if (iVar9 == 0) {
        return;
      }
      uVar12 = puVar11[-2];
      puVar8[0x4d] = iVar10;
      uVar2 = *puVar11;
      fVar3 = (float)puVar11[-1];
      puVar8[3] = 0;
      puVar8[0x4c] = 0;
      puVar8[0x35] = *(undefined4 *)(param_3 + 0x74);
      fVar7 = (float)(*(int *)(param_1 + 8) + -1);
      fVar4 = (float)puVar11[1];
      fVar5 = (float)puVar11[-1];
      local_1a8 = 0;
      fVar6 = local_1a0[1];
      if (0 < *(int *)(param_1 + 8)) {
        do {
          pfVar1 = (float *)(*(int *)(param_1 + 0x28) + local_1a8 * 8);
          local_180 = (*(float *)(*(int *)(param_1 + 0x28) + 4 + local_1a8 * 8) - *pfVar1) *
                      *(float *)(param_1 + 0x24) + *pfVar1 + (float)puVar11[10];
          local_17c = (fVar6 / fVar7) * (float)local_1a8 + (float)puVar11[0xb];
          local_16c = (float)local_1a8 * ((fVar4 - fVar5) / fVar7) + fVar3;
          local_178 = 0;
          local_174 = 0;
          local_168 = 0;
          local_164 = 0;
          local_160 = *(undefined4 *)(param_3 + 0x40);
          local_15c = *(undefined4 *)(param_3 + 0x44);
          local_158 = *(undefined4 *)(param_3 + 0x48);
          local_154 = *(undefined4 *)(param_3 + 0x4c);
          local_150 = *local_1a0 + local_180;
          local_148 = 0;
          local_144 = 0;
          local_138 = 0;
          local_134 = 0;
          local_130 = *(undefined4 *)(param_3 + 0x40);
          local_12c = *(undefined4 *)(param_3 + 0x44);
          local_128 = *(undefined4 *)(param_3 + 0x48);
          local_124 = *(undefined4 *)(param_3 + 0x4c);
          local_170 = uVar12;
          local_14c = local_17c;
          local_140 = uVar2;
          local_13c = local_16c;
          iVar10 = FUN_00caf960(&local_180,2);
          if (iVar10 == 0) {
            return;
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < *(int *)(param_1 + 8));
      }
      if (local_b0 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(local_b0 + 0x10);
      }
      puVar8[0x1a] = uVar12;
      puVar8[0x1d] = local_9c;
      puVar8[0x1b] = 0;
      iVar10 = *(int *)(param_3 + 0x6c);
      puVar8[0x47] = iVar10;
      puVar8[0x49] = (uint)(iVar10 == 3);
      uVar12 = *(undefined4 *)(param_3 + 0x68);
      if (puVar8[0x19] != 0) {
        FUN_00dd5650(&DAT_016b79e8);
      }
      puVar8[0x1c] = local_a4;
      puVar8[0x1e] = uVar12;
      puVar8[0x38] = local_a0;
      FID_conflict__memcpy(puVar8 + 8,local_120,0x40);
      puVar8[0x15] = (float)puVar8[0x15] - 1.0;
      if (*(int *)(param_3 + 0x78) == 2) {
        iVar10 = 0;
        uVar12 = 0x3e;
      }
      else if (*(int *)(param_3 + 0x78) == 1) {
        iVar10 = *(int *)(param_3 + 0x70);
        iVar9 = *(int *)(param_3 + 0x7c);
        if (DAT_01dc5030 != 0) {
          if (iVar9 == 0) {
            iVar10 = iVar10 + -1;
            uVar12 = 0x69;
            goto LAB_00ce8b48;
          }
          if ((iVar9 != 1) && (iVar9 == 2)) {
            iVar10 = iVar10 + 1;
          }
        }
        uVar12 = 0x69;
      }
      else if (*(int *)(param_3 + 0x6c) == 3) {
        iVar10 = 0;
        uVar12 = 0x61;
      }
      else {
        iVar10 = *(int *)(param_3 + 0x70);
        iVar9 = *(int *)(param_3 + 0x7c);
        if (DAT_01dc5030 != 0) {
          if (iVar9 == 0) {
            iVar10 = iVar10 + -1;
          }
          else if ((iVar9 != 1) && (iVar9 == 2)) {
            iVar10 = iVar10 + 1;
          }
        }
        uVar12 = 0x67;
      }
LAB_00ce8b48:
      FUN_00a30800(puVar8,uVar12,iVar10);
      puVar11 = puVar11 + 4;
      local_1a0 = local_1a0 + 2;
      local_198 = local_198 + 1;
      if (2 < local_198) {
        return;
      }
    }
  }
  return;
}

// 00CE8F90  cUIPrimWorkStrip::cUIPrimWorkStrip_2  size=1074  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
cUIPrimWorkStrip::cUIPrimWorkStrip_2(int param_1,int *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  int local_118;
  float local_100;
  float local_fc;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  if ((param_4 != 0) && (0.0 < *(float *)(param_3 + 0x4c))) {
    FUN_00ce5440(&local_100,local_50,param_3);
    FUN_00cacde0(local_50,*(undefined4 *)(param_3 + 0x6c));
    if ((*param_2 != 0) &&
       (puVar7 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar7 != (undefined4 *)0x0)) {
      cUIPrimWorkBase::cUIPrimWorkBase();
      *puVar7 = vftable;
      puVar7[0x4c] = 0;
      puVar7[0x4d] = 0;
      bVar10 = *(int *)(param_4 + 0x14) == 4;
      cVar6 = bVar10 + '\x05';
      if (*(int *)(param_1 + 0x2c) == 0) {
        if (bVar10) {
          if (bVar10) {
            cVar6 = '\b';
          }
        }
        else {
          cVar6 = '\a';
        }
      }
      iVar8 = FUN_00caf910(param_2,*(int *)(param_1 + 8) * 2,cVar6);
      if (iVar8 != 0) {
        puVar7[0x35] = *(undefined4 *)(param_3 + 0x74);
        fVar3 = (float)(*(int *)(param_1 + 8) + -1);
        if (local_cc == 0) {
          fVar5 = local_e0 + local_e8;
          fVar4 = local_e8;
        }
        else {
          fVar4 = local_e0 + local_e8;
          fVar5 = local_e8;
        }
        if (local_c8 == 0) {
          fVar2 = local_dc / fVar3;
        }
        else {
          local_e4 = local_e4 + local_dc;
          fVar2 = (local_dc / fVar3) * -1.0;
        }
        local_118 = 0;
        if (0 < *(int *)(param_1 + 8)) {
          do {
            pfVar1 = (float *)(*(int *)(param_1 + 0x28) + local_118 * 8);
            local_b0 = (*(float *)(*(int *)(param_1 + 0x28) + 4 + local_118 * 8) - *pfVar1) *
                       *(float *)(param_1 + 0x24) + *pfVar1 + local_100;
            local_ac = (local_ec / fVar3) * (float)local_118 + local_fc;
            local_9c = (float)local_118 * fVar2 * local_d4 + local_d4 * local_e4;
            local_a8 = 0;
            local_a4 = 0x3f800000;
            local_98 = 0;
            local_94 = 0;
            local_90 = *(undefined4 *)(param_3 + 0x40);
            local_8c = *(undefined4 *)(param_3 + 0x44);
            local_88 = *(undefined4 *)(param_3 + 0x48);
            local_84 = *(undefined4 *)(param_3 + 0x4c);
            local_80 = local_f0 + local_b0;
            local_78 = 0;
            local_74 = 0x3f800000;
            local_68 = 0;
            local_64 = 0;
            local_60 = *(undefined4 *)(param_3 + 0x40);
            local_5c = *(undefined4 *)(param_3 + 0x44);
            local_58 = *(undefined4 *)(param_3 + 0x48);
            local_54 = *(undefined4 *)(param_3 + 0x4c);
            local_a0 = local_d8 * fVar4;
            local_7c = local_ac;
            local_70 = local_d8 * fVar5;
            local_6c = local_9c;
            iVar8 = FUN_00caf960(&local_b0,2);
            if (iVar8 == 0) {
              return;
            }
            local_118 = local_118 + 1;
          } while (local_118 < *(int *)(param_1 + 8));
        }
        if (local_d0 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined4 *)(local_d0 + 0x10);
        }
        puVar7[0x1d] = local_b4;
        puVar7[0x1a] = uVar9;
        puVar7[0x1b] = 0;
        iVar8 = *(int *)(param_3 + 0x6c);
        puVar7[0x47] = iVar8;
        puVar7[0x49] = (uint)(iVar8 == 3);
        FUN_00ccabb0(local_50,local_c0,*(undefined4 *)(param_3 + 0x68),local_bc);
        puVar7[0x3a] = *(undefined4 *)(param_1 + 0x2c);
        uVar9 = *(undefined4 *)(param_1 + 0x34);
        puVar7[0x3b] = *(undefined4 *)(param_1 + 0x30);
        puVar7[0x3c] = uVar9;
        puVar7[0x46] = *(undefined4 *)(param_3 + 0x80);
        puVar7[0x45] = 0;
        puVar7[0x1f] = 0x3f800000;
        puVar7[0x20] = 0x3f800000;
        puVar7[0x21] = 0x3f800000;
        puVar7[0x22] = 0x3f800000;
        uVar9 = _DAT_018d5df0;
        if ((*(int *)(param_3 + 0x78) == 2) && ((DAT_01bea070._3_1_ & 1) == 0)) {
          puVar7[0x1f] = _DAT_018d5df0;
          puVar7[0x20] = uVar9;
          puVar7[0x21] = uVar9;
          puVar7[0x22] = 0x3f800000;
          puVar7[0x45] = 1;
        }
        if (*(int *)(param_3 + 0x78) == 2) {
          FUN_00a30800(puVar7,0x3e,0);
          return;
        }
        if (*(int *)(param_3 + 0x78) == 1) {
          uVar9 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
          FUN_00a30800(puVar7,0x69,uVar9);
          return;
        }
        if (*(int *)(param_3 + 0x6c) == 3) {
          FUN_00a30800(puVar7,0x61,0);
          return;
        }
        uVar9 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
        FUN_00a30800(puVar7,0x67,uVar9);
      }
    }
  }
  return;
}

// 00CE97D0  cUIPrimWorkStrip::cUIPrimWorkStrip  size=1001  [class]
void __thiscall cUIPrimWorkStrip::cUIPrimWorkStrip(int param_1,int *param_2,int param_3,int param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int local_1a4;
  float *local_19c;
  undefined4 *local_198;
  int local_190;
  float local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  float local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [64];
  undefined1 local_e0 [48];
  int local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 auStack_88 [22];
  float afStack_30 [11];
  
  if ((param_4 != 0) && (0.0 < *(float *)(param_3 + 0x4c))) {
    FUN_00ce6d00(local_e0,local_120,param_3);
    FUN_00cacde0(local_120,*(undefined4 *)(param_3 + 0x6c));
    local_190 = DAT_01dc5034;
    if (DAT_01dc5034 < DAT_018b7768) {
      local_19c = afStack_30 + DAT_01dc5034 * 2;
      local_198 = auStack_88 + DAT_01dc5034 * 4;
      while ((*param_2 != 0 &&
             (puVar8 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar8 != (undefined4 *)0x0
             ))) {
        cUIPrimWorkBase::cUIPrimWorkBase();
        *puVar8 = vftable;
        puVar8[0x4c] = 0;
        puVar8[0x4d] = 0;
        uVar9 = (uint)(*(int *)(param_4 + 0x24) == 4);
        local_1a4 = uVar9 + 5;
        if (*(int *)(param_1 + 0x2c) == 0) {
          if (uVar9 == 0) {
            local_1a4 = 7;
          }
          else if (local_1a4 == 6) {
            local_1a4 = 8;
          }
        }
        iVar11 = *(int *)(param_1 + 8) * 2;
        if (iVar11 == 0) {
          return;
        }
        iVar10 = FUN_00caef00(param_2,iVar11,iVar11);
        if (iVar10 == 0) {
          return;
        }
        puVar8[0x4d] = iVar11;
        puVar8[3] = local_1a4;
        puVar8[0x4c] = 0;
        puVar8[0x35] = *(undefined4 *)(param_3 + 0x74);
        uVar12 = local_198[-2];
        uVar2 = *local_198;
        fVar3 = (float)local_198[-1];
        local_1a4 = 0;
        fVar7 = (float)(*(int *)(param_1 + 8) + -1);
        fVar4 = (float)local_198[1];
        fVar5 = (float)local_198[-1];
        fVar6 = local_19c[1];
        if (0 < *(int *)(param_1 + 8)) {
          do {
            pfVar1 = (float *)(*(int *)(param_1 + 0x28) + local_1a4 * 8);
            local_180 = (*(float *)(*(int *)(param_1 + 0x28) + 4 + local_1a4 * 8) - *pfVar1) *
                        *(float *)(param_1 + 0x24) + *pfVar1 + (float)local_198[10];
            local_17c = (fVar6 / fVar7) * (float)local_1a4 + (float)local_198[0xb];
            local_16c = (float)local_1a4 * ((fVar4 - fVar5) / fVar7) + fVar3;
            local_178 = 0;
            local_174 = 0x3f800000;
            local_168 = 0;
            local_164 = 0;
            local_160 = *(undefined4 *)(param_3 + 0x40);
            local_15c = *(undefined4 *)(param_3 + 0x44);
            local_158 = *(undefined4 *)(param_3 + 0x48);
            local_154 = *(undefined4 *)(param_3 + 0x4c);
            local_150 = *local_19c + local_180;
            local_148 = 0;
            local_144 = 0x3f800000;
            local_138 = 0;
            local_134 = 0;
            local_130 = *(undefined4 *)(param_3 + 0x40);
            local_12c = *(undefined4 *)(param_3 + 0x44);
            local_128 = *(undefined4 *)(param_3 + 0x48);
            local_124 = *(undefined4 *)(param_3 + 0x4c);
            local_170 = uVar12;
            local_14c = local_17c;
            local_140 = uVar2;
            local_13c = local_16c;
            iVar11 = FUN_00caf960(&local_180,2);
            if (iVar11 == 0) {
              return;
            }
            local_1a4 = local_1a4 + 1;
          } while (local_1a4 < *(int *)(param_1 + 8));
        }
        if (local_b0 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)(local_b0 + 0x10);
        }
        puVar8[0x1a] = uVar12;
        puVar8[0x1d] = local_9c;
        puVar8[0x1b] = 0;
        iVar11 = *(int *)(param_3 + 0x6c);
        puVar8[0x47] = iVar11;
        puVar8[0x49] = (uint)(iVar11 == 3);
        uVar12 = *(undefined4 *)(param_3 + 0x68);
        if (puVar8[0x19] != 0) {
          FUN_00dd5650(&DAT_016b79e8);
        }
        puVar8[0x1e] = uVar12;
        puVar8[0x1c] = local_a4;
        puVar8[0x38] = local_a0;
        FID_conflict__memcpy(puVar8 + 8,local_120,0x40);
        puVar8[0x15] = (float)puVar8[0x15] - 1.0;
        puVar8[0x3a] = *(undefined4 *)(param_1 + 0x2c);
        uVar12 = *(undefined4 *)(param_1 + 0x34);
        puVar8[0x3b] = *(undefined4 *)(param_1 + 0x30);
        puVar8[0x3c] = uVar12;
        puVar8[0x46] = *(undefined4 *)(param_3 + 0x80);
        if (*(int *)(param_3 + 0x78) == 2) {
          iVar11 = 0;
          uVar12 = 0x3e;
        }
        else if (*(int *)(param_3 + 0x78) == 1) {
          iVar11 = *(int *)(param_3 + 0x70);
          iVar10 = *(int *)(param_3 + 0x7c);
          if (DAT_01dc5030 != 0) {
            if (iVar10 == 0) {
              iVar11 = iVar11 + -1;
              uVar12 = 0x69;
              goto LAB_00ce9b90;
            }
            if ((iVar10 != 1) && (iVar10 == 2)) {
              iVar11 = iVar11 + 1;
            }
          }
          uVar12 = 0x69;
        }
        else if (*(int *)(param_3 + 0x6c) == 3) {
          iVar11 = 0;
          uVar12 = 0x61;
        }
        else {
          iVar11 = *(int *)(param_3 + 0x70);
          iVar10 = *(int *)(param_3 + 0x7c);
          if (DAT_01dc5030 != 0) {
            if (iVar10 == 0) {
              iVar11 = iVar11 + -1;
            }
            else if ((iVar10 != 1) && (iVar10 == 2)) {
              iVar11 = iVar11 + 1;
            }
          }
          uVar12 = 0x67;
        }
LAB_00ce9b90:
        FUN_00a30800(puVar8,uVar12,iVar11);
        local_198 = local_198 + 4;
        local_19c = local_19c + 2;
        local_190 = local_190 + 1;
        if (DAT_018b7768 <= local_190) {
          return;
        }
      }
    }
  }
  return;
}


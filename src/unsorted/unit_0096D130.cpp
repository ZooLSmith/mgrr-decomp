// src/unsorted/unit_0096D130.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0096D130..0096D6E0, 2 functions

#include "types.h"

// 0096D130  FUN_0096d130  size=1443  [run]
void __fastcall FUN_0096d130(int param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined1 auStack_174 [4];
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 auStack_168 [4];
  undefined4 uStack_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
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
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined1 local_a0 [48];
  float fStack_70;
  float fStack_6c;
  float afStack_68 [2];
  undefined1 auStack_60 [92];
  
  iVar5 = *(int *)(param_1 + 0x31c);
  if (0 < iVar5) {
    iVar7 = 0;
    do {
      iVar4 = FUN_00905f80(*(int *)(param_1 + 0x318) + iVar7 + 4,0);
      if (iVar4 == 0) {
        iVar4 = *(int *)(param_1 + 0x318);
        if (*(int *)(iVar4 + iVar7) == 0) {
          FUN_0096c6d0(*(undefined4 *)(iVar4 + 8 + iVar7),1);
        }
        else if ((*(int *)(iVar4 + iVar7) == 1) &&
                (iVar4 = *(int *)(*(int *)(param_1 + 0x130) + *(int *)(iVar4 + 8 + iVar7) * 4),
                iVar4 != 0)) {
          puVar1 = (uint *)(iVar4 + 0x84);
          *puVar1 = *puVar1 | 0x40000000;
        }
      }
      else if ((*(int *)(*(int *)(param_1 + 0x318) + iVar7) == 1) &&
              (iVar4 = *(int *)(*(int *)(param_1 + 0x130) +
                               *(int *)(*(int *)(param_1 + 0x318) + 8 + iVar7) * 4), iVar4 != 0)) {
        puVar1 = (uint *)(iVar4 + 0x84);
        *puVar1 = *puVar1 & 0xbfffffff;
      }
      RayCastManager::getWork(iVar7 + 4 + *(int *)(param_1 + 0x318));
      iVar7 = iVar7 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x31c);
  piVar2 = (int *)(param_1 + 0x318);
  while (iVar5 = iVar5 + -1, -1 < iVar5) {
    FUN_00905ce0();
  }
  *(undefined4 *)(param_1 + 0x31c) = 0;
  piVar6 = *(int **)(param_1 + 0x130);
  if (piVar6 != piVar6 + *(int *)(param_1 + 0x138)) {
    do {
      iVar5 = *piVar6;
      if (iVar5 != 0) {
        if ((*(uint *)(iVar5 + 0x80) & 0x10000000) == 0) {
          if ((*(uint *)(iVar5 + 0x80) & 0x8000000) != 0) {
            fStack_150 = *(float *)(iVar5 + 0x40);
            fStack_14c = *(float *)(iVar5 + 0x44);
            fStack_148 = *(float *)(iVar5 + 0x48);
            uStack_144 = *(undefined4 *)(iVar5 + 0x4c);
            uStack_130 = *(undefined4 *)(iVar5 + 0x50);
            uStack_12c = *(undefined4 *)(iVar5 + 0x54);
            uStack_128 = *(undefined4 *)(iVar5 + 0x58);
            uStack_124 = *(undefined4 *)(iVar5 + 0x5c);
            uStack_d0 = *(undefined4 *)(iVar5 + 0x68);
            uStack_cc = 0x3dcccccd;
            uStack_c8 = 0x3e4ccccd;
            FUN_00969370(local_a0,&fStack_150,&uStack_130);
            fStack_150 = fStack_70;
            fStack_14c = fStack_6c;
            fStack_148 = afStack_68[0];
            FUN_00ddba00(auStack_60,local_a0);
            FUN_00ddd760(&uStack_130,auStack_60,5);
            FUN_00904d60();
            uStack_164 = *(undefined4 *)(*piVar6 + 0x70);
            uStack_16c = 1;
            FUN_0090f470(auStack_168,0,&fStack_150,&uStack_130,&uStack_d0,0x1e,"cMapInfoManager");
            if (*(uint *)(param_1 + 0x31c) == (*(uint *)(param_1 + 800) & 0x3fffffff)) {
              FUN_0100a290(&PTR_vftable_018e9b94,piVar2,0xc);
            }
            puVar3 = (undefined4 *)(*piVar2 + *(int *)(param_1 + 0x31c) * 0xc);
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = uStack_16c;
              FUN_00905cf0(auStack_168);
              puVar3[2] = uStack_164;
            }
            *(int *)(param_1 + 0x31c) = *(int *)(param_1 + 0x31c) + 1;
            FUN_00905ce0();
          }
        }
        else {
          local_160 = *(float *)(iVar5 + 0x40);
          local_158 = *(float *)(iVar5 + 0x48);
          local_154 = *(undefined4 *)(iVar5 + 0x4c);
          local_140 = *(undefined4 *)(iVar5 + 0x50);
          local_13c = *(undefined4 *)(iVar5 + 0x54);
          local_138 = *(undefined4 *)(iVar5 + 0x58);
          local_134 = *(undefined4 *)(iVar5 + 0x5c);
          local_c0 = *(undefined4 *)(iVar5 + 0x68);
          local_bc = 0x3dcccccd;
          local_b8 = 0x3e4ccccd;
          local_15c = *(float *)(iVar5 + 0x44) + 0.5;
          D3DXMatrixTranslation(local_a0,local_160,local_15c,local_158);
          uStack_f8 = 0;
          uStack_fc = 0;
          uStack_100 = 0;
          uStack_104 = 0;
          uStack_10c = 0;
          uStack_110 = 0;
          uStack_114 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_124 = 0;
          uStack_128 = 0;
          uStack_12c = 0;
          uStack_f4 = 0x3f800000;
          uStack_108 = 0x3f800000;
          uStack_11c = 0x3f800000;
          uStack_130 = 0x3f800000;
          if (fStack_148 != 0.0) {
            D3DXMatrixRotationZ(auStack_60,fStack_148);
            D3DXMatrixMultiply(&local_138,afStack_68,&local_138);
          }
          if (fStack_14c != 0.0) {
            D3DXMatrixRotationY(auStack_60,fStack_14c);
            D3DXMatrixMultiply(&local_138,afStack_68,&local_138);
          }
          if (fStack_150 != 0.0) {
            D3DXMatrixRotationX(auStack_60,fStack_150);
            D3DXMatrixMultiply(&local_138,afStack_68,&local_138);
          }
          D3DXMatrixMultiply(&fStack_b0,&uStack_130,&fStack_b0);
          uStack_fc = 0;
          uStack_f8 = 0;
          uStack_f4 = 0xbf000000;
          D3DXVec3TransformNormal(&uStack_cc,&uStack_fc,&local_bc);
          local_160 = fStack_70 + fStack_b0;
          local_15c = fStack_6c + fStack_ac;
          local_158 = afStack_68[0] + fStack_a8;
          fStack_70 = local_160;
          fStack_6c = local_15c;
          afStack_68[0] = local_158;
          FUN_00904d60();
          uStack_170 = *(undefined4 *)(*piVar6 + 0x70);
          FUN_0090f470(auStack_174,0,&local_160,&local_140,&local_c0,0x1e,"cMapInfoManager");
          if (*(uint *)(param_1 + 0x31c) == (*(uint *)(param_1 + 800) & 0x3fffffff)) {
            FUN_0100a290(&PTR_vftable_018e9b94,piVar2,0xc);
          }
          puVar3 = (undefined4 *)(*piVar2 + *(int *)(param_1 + 0x31c) * 0xc);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0;
            FUN_00905cf0(auStack_174);
            puVar3[2] = uStack_170;
          }
          *(int *)(param_1 + 0x31c) = *(int *)(param_1 + 0x31c) + 1;
          FUN_00905ce0();
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != (int *)(*(int *)(param_1 + 0x130) + *(int *)(param_1 + 0x138) * 4));
  }
  return;
}

// 0096D6E0  FUN_0096d6e0  size=30  [run]
void FUN_0096d6e0(void)

{
  FUN_00963a30();
  FUN_009664f0();
  FUN_0096ac60();
  FUN_0096d130();
  return;
}


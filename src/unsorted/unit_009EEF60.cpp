// src/unsorted/unit_009EEF60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009EEF60..009EEF60, 1 functions

#include "mgrr.h"

// 009EEF60  FUN_009eef60  size=987  [run]
void __thiscall FUN_009eef60(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfStack_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  int iStack_144;
  undefined1 *puStack_140;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
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
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_78;
  float fStack_74;
  float afStack_70 [2];
  undefined4 auStack_68 [25];
  
  esp39::vf08();
  if (*(int *)(param_1 + 0x500) == 2) {
    FUN_009d0970();
  }
  else if (*(int *)(param_1 + 0x500) == 3) {
    FUN_009e36a0();
  }
  FUN_009ea770();
  if (*(int *)(param_1 + 0x500) == 4) {
    local_90 = 0.0;
    iVar1 = *(int *)(param_1 + 0x50);
    local_e8 = 0.0;
    local_ec = 0.0;
    local_f0 = 0.0;
    local_f4 = 0.0;
    local_fc = 0.0;
    local_100 = 0.0;
    local_104 = 0.0;
    local_108 = 0.0;
    local_110 = 0;
    local_114 = 0;
    local_118 = 0;
    local_11c = 0;
    local_e4 = 1.0;
    local_f8 = 1.0;
    local_10c = 0x3f800000;
    local_120 = 0x3f800000;
    if (iVar1 == 0) {
      local_84 = 0.0;
      local_8c = local_90;
      local_88 = local_90;
    }
    else {
      local_90 = *(float *)(iVar1 + 0x40);
      local_84 = *(float *)(iVar1 + 0x4c);
      local_8c = *(float *)(iVar1 + 0x44);
      local_88 = *(float *)(iVar1 + 0x48);
    }
    local_90 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180) + local_90;
    local_8c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184) + local_8c;
    local_88 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188) + local_88;
    local_84 = local_84 + *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
    FUN_00ee0200();
    puStack_140 = (undefined1 *)0x9ef08d;
    D3DXVec3TransformNormal();
    local_fc = local_fc + local_ec;
    puStack_148 = &stack0xfffffed4;
    iStack_144 = param_1 + 0x200;
    local_f8 = local_e8 + local_f8;
    local_f4 = local_e4 + local_f4;
    puStack_14c = (undefined1 *)0x9ef0c5;
    puStack_140 = puStack_148;
    D3DXMatrixMultiply();
    local_108 = local_108 + fStack_78;
    local_104 = fStack_74 + local_104;
    local_100 = afStack_70[0] + local_100;
    uStack_b0 = 0;
    uStack_b4 = 0;
    uStack_b8 = 0;
    uStack_bc = 0;
    uStack_c4 = 0;
    uStack_c8 = 0;
    uStack_cc = 0;
    uStack_d0 = 0;
    fStack_d8 = 0.0;
    fStack_dc = 0.0;
    local_e0 = 0.0;
    local_e4 = 0.0;
    uStack_ac = 0x3f800000;
    uStack_c0 = 0x3f800000;
    uStack_d4 = 0x3f800000;
    local_e8 = 1.0;
    if (*(float *)(param_1 + 0x1c8) != 0.0) {
      puStack_14c = *(undefined1 **)(param_1 + 0x1c8);
      pfStack_150 = (float *)auStack_68;
      D3DXMatrixRotationZ();
      D3DXMatrixMultiply(&local_f0,afStack_70,&local_f0);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      puStack_14c = *(undefined1 **)(param_1 + 0x1c4);
      pfStack_150 = (float *)auStack_68;
      D3DXMatrixRotationY();
      D3DXMatrixMultiply(&local_f0,afStack_70,&local_f0);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      puStack_14c = *(undefined1 **)(param_1 + 0x1c0);
      pfStack_150 = (float *)auStack_68;
      D3DXMatrixRotationX();
      D3DXMatrixMultiply(&local_f0,afStack_70,&local_f0);
    }
    puStack_14c = &stack0xfffffec8;
    pfStack_150 = &local_e8;
    D3DXMatrixMultiply(puStack_14c);
    uStack_a4 = *(undefined4 *)(param_2 + 0x70);
    fStack_a0 = *(float *)(param_2 + 0x74);
    fStack_9c = *(float *)(param_2 + 0x78);
    FUN_00ddd140(&fStack_74,&uStack_a4);
    D3DXMatrixMultiply(&iStack_144,&fStack_74,&iStack_144);
    if ((*(int *)(param_1 + 0x58) == 0) ||
       (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0xf0), puVar2 == (uint *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar2;
      if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
        uVar4 = FUN_00f59ed0(0xf);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
    }
    fStack_9c = *(float *)(uVar3 + 8) - 0.5;
    fStack_98 = *(float *)(uVar3 + 0xc) - 0.5;
    fStack_a0 = *(float *)(uVar3 + 4) - 0.5;
    D3DXVec3TransformNormal(&local_110,&fStack_a0,&pfStack_150);
    local_f0 = local_e0 + local_f0;
    local_ec = fStack_dc + local_ec;
    local_e8 = fStack_d8 + local_e8;
    puStack_140 = (undefined1 *)0x9ef321;
    FID_conflict__memcpy((void *)(param_2 + 0x10),&local_120,0x40);
  }
  FUN_00efed20();
  ModelShaderJackModule::updateModule_5();
  return;
}


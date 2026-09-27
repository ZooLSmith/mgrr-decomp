// src/unsorted/unit_00B7FDF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B7FDF0..00B804C0, 3 functions

#include "mgrr.h"

// 00B7FDF0  FUN_00b7fdf0  size=131  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00b7fdf0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [12];
  undefined1 local_50 [24];
  float fStack_38;
  
  uVar4 = 0xf0015;
  uVar1 = FUN_00e03ea0("NEWTOWER",0xf0015);
  iVar2 = FUN_00a18d70(uVar1,uVar4);
  if (iVar2 != 0) {
    FUN_00a7c8a0();
    iVar2 = FUN_00a12210(1);
    if (iVar2 != 0) {
      fVar3 = 0.0;
      D3DXMatrixInverse(local_50,0,iVar2 + 0x10);
      D3DXVec3TransformNormal(auStack_6c,param_1 + 0x40,auStack_5c);
      _DAT_01bea6c0 = (fStack_38 + fVar3) * 0.2 * -0.9599311;
    }
  }
  return;
}

// 00B7FE80  FUN_00b7fe80  size=1124  [run]
void __thiscall FUN_00b7fe80(int param_1,float *param_2,undefined4 *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  float *pfStack_148;
  float *pfStack_144;
  undefined1 **ppuStack_140;
  undefined1 **ppuStack_13c;
  undefined4 *puStack_138;
  float *pfStack_134;
  float fStack_130;
  undefined4 *puStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_124;
  float fStack_120;
  undefined4 *puStack_11c;
  undefined4 *puStack_118;
  undefined4 *puStack_114;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 auStack_dc [12];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_50 [76];
  
  *param_2 = 0.17453292;
  *param_3 = 0x3eb2b8c2;
  *param_4 = 1.3962634;
  if (*(float *)(param_1 + 0x44) <= 110.0) {
    *param_3 = 0x3db2b8c2;
  }
  local_ec = *(undefined4 *)(param_1 + 0x94);
  puStack_114 = (undefined4 *)0x5;
  puStack_118 = &local_f0;
  local_e4 = *(undefined4 *)(param_1 + 0x9c);
  puStack_11c = (undefined4 *)local_50;
  local_f0 = 0;
  local_e8 = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 0.0;
  local_a4 = 0.0;
  local_ac = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c4 = 0;
  local_c8 = 0;
  local_cc = 0;
  local_94 = 0x3f800000;
  local_a8 = 1.0;
  local_bc = 0x3f800000;
  local_d0 = 0x3f800000;
  fStack_120 = 1.6897472e-38;
  thunk_FUN_00ddc1d0();
  puStack_11c = &local_d0;
  puStack_118 = (undefined4 *)local_50;
  fStack_120 = 1.6897506e-38;
  puStack_114 = puStack_11c;
  D3DXMatrixMultiply();
  fStack_120 = (float)(param_1 + 0xb0);
  puStack_128 = auStack_dc;
  puStack_12c = (undefined4 *)0xb7ff73;
  puStack_124 = puStack_128;
  D3DXMatrixMultiply();
  local_b8 = *(undefined4 *)(param_1 + 0x40);
  puStack_12c = &local_e8;
  local_b4 = *(undefined4 *)(param_1 + 0x44);
  fStack_130 = 0.0;
  local_b0 = *(undefined4 *)(param_1 + 0x48);
  pfStack_134 = &local_a8;
  puStack_138 = (undefined4 *)0xb7ff9f;
  D3DXMatrixInverse();
  if ((*(float *)(param_1 + 0x44) <= 155.0) &&
     (fVar1 = *(float *)(param_1 + 0x44), !NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0))) {
    puStack_138 = (undefined4 *)0xf0018;
    ppuStack_13c = (undefined1 **)0x164129c;
    ppuStack_140 = (undefined1 **)0xb7ffd6;
    ppuStack_13c = (undefined1 **)FUN_00e03ea0();
    ppuStack_140 = (undefined1 **)0xb7ffe4;
    iVar2 = FUN_00a18d70();
    if (iVar2 != 0) {
      puStack_138 = (undefined4 *)0x0;
      ppuStack_13c = (undefined1 **)0xb7fff5;
      FUN_00a7c8a0();
      ppuStack_13c = (undefined1 **)0xb7fffc;
      iVar2 = FUN_00a12210();
      if (iVar2 != 0) {
        puStack_138 = (undefined4 *)(iVar2 + 0x10);
        puStack_124 = (undefined1 *)0x0;
        ppuStack_140 = &puStack_124;
        fStack_120 = 0.0;
        puStack_11c = (undefined4 *)0x0;
        pfStack_144 = (float *)0xb80023;
        ppuStack_13c = ppuStack_140;
        D3DXVec3TransformNormal();
        fStack_130 = *(float *)(iVar2 + 0x40) + fStack_130;
        pfStack_144 = (float *)&uStack_100;
        pfStack_148 = &fStack_120;
        puStack_12c = (undefined4 *)(*(float *)(iVar2 + 0x44) + (float)puStack_12c);
        puStack_128 = (undefined1 *)(*(float *)(iVar2 + 0x48) + (float)puStack_128);
        fStack_120 = -10.0;
        puStack_11c = (undefined4 *)0x0;
        puStack_118 = (undefined4 *)0x41200000;
        D3DXVec3TransformNormal(pfStack_148);
        ppuStack_13c = (undefined1 **)((float)puStack_12c + (float)ppuStack_13c);
        puStack_138 = (undefined4 *)((float)puStack_128 + (float)puStack_138);
        pfStack_134 = (float *)((float)puStack_124 + (float)pfStack_134);
        fStack_130 = fStack_120 + fStack_130;
        D3DXVec3TransformNormal(&ppuStack_13c,&ppuStack_13c,&local_cc);
        puStack_124 = (undefined1 *)(fStack_84 + (float)puStack_124);
        puStack_138 = &uStack_104;
        ppuStack_13c = &puStack_124;
        ppuStack_140 = (undefined1 **)param_3;
        fStack_120 = fStack_80 + fStack_120;
        pfStack_144 = param_2;
        puStack_11c = (undefined4 *)(fStack_7c + (float)puStack_11c);
        uStack_104 = 0;
        uStack_100 = 0;
        uStack_fc = 0;
        pfStack_148 = (float *)0xb80104;
        thunk_FUN_00dde510();
        *param_2 = *param_2 * -1.0;
      }
    }
  }
  if (*(float *)(param_1 + 0x44) <= 90.0) {
    if ((*(int *)(param_1 + 0x3ee4) == 0) && (*param_4 == 1.134464)) {
      *(undefined4 *)(param_1 + 0x3ee4) = 1;
    }
    puStack_138 = (undefined4 *)0x2020b;
    ppuStack_13c = (undefined1 **)0xb8015b;
    iVar2 = FUN_00a7f600();
    if (iVar2 != 0) {
      puStack_138 = (undefined4 *)0x6;
      ppuStack_13c = (undefined1 **)0xb8016c;
      FUN_00a7c8a0();
      ppuStack_13c = (undefined1 **)0xb80173;
      iVar2 = FUN_00a12210();
      if (iVar2 != 0) {
        puStack_138 = (undefined4 *)(iVar2 + 0x10);
        puStack_124 = (undefined1 *)0x0;
        ppuStack_140 = &puStack_124;
        fStack_120 = 0.0;
        puStack_11c = (undefined4 *)0x40a00000;
        pfStack_144 = (float *)0xb801a0;
        ppuStack_13c = ppuStack_140;
        D3DXVec3TransformNormal();
        fStack_130 = *(float *)(iVar2 + 0x40) + fStack_130;
        puStack_12c = (undefined4 *)(*(float *)(iVar2 + 0x44) + (float)puStack_12c);
        puStack_128 = (undefined1 *)(*(float *)(iVar2 + 0x48) + (float)puStack_128);
        fStack_120 = 0.0;
        puStack_11c = (undefined4 *)0xc1000000;
        puStack_118 = (undefined4 *)0x0;
        pfStack_144 = (float *)0xb801dc;
        iVar2 = FUN_00a8cab0();
        if (iVar2 == 0x39) {
          fStack_120 = 0.0;
          puStack_11c = (undefined4 *)0x0;
          puStack_118 = (undefined4 *)0x0;
        }
        pfStack_144 = (float *)&uStack_100;
        pfStack_148 = &fStack_120;
        D3DXVec3TransformNormal(pfStack_148);
        ppuStack_13c = (undefined1 **)((float)puStack_12c + (float)ppuStack_13c);
        puStack_138 = (undefined4 *)((float)puStack_128 + (float)puStack_138);
        pfStack_134 = (float *)((float)puStack_124 + (float)pfStack_134);
        fStack_130 = fStack_120 + fStack_130;
        D3DXVec3TransformNormal(&ppuStack_13c,&ppuStack_13c,&local_cc);
        pfStack_148 = (float *)(local_a8 + (float)pfStack_148);
        pfStack_144 = (float *)(local_a4 + (float)pfStack_144);
        ppuStack_140 = (undefined1 **)(local_a0 + (float)ppuStack_140);
        puStack_128 = (undefined1 *)0x0;
        puStack_124 = (undefined1 *)0x0;
        fStack_120 = 0.0;
        thunk_FUN_00dde510(param_2,param_3,&pfStack_148,&puStack_128);
        *param_2 = *param_2 * -1.0;
      }
    }
  }
  if (*(int *)(param_1 + 0x618) == 0x39) {
    if (0.0 < *(float *)(param_1 + 0x894)) {
      *param_2 = *param_2 - 0.17453292;
    }
    if (*(float *)(param_1 + 0x894) <= 0.0) {
      *param_2 = *param_2 + 0.34906584;
    }
  }
  return;
}

// 00B804C0  FUN_00b804c0  size=48  [run]
void __fastcall FUN_00b804c0(int param_1)

{
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e6c60(1);
    FUN_008e0ae0(1);
    FUN_008e0af0(1);
  }
  return;
}


// src/unsorted/unit_00590AE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00590AE0..00590F30, 2 functions

#include "types.h"

// 00590AE0  FUN_00590ae0  size=1098  [run]
void __thiscall FUN_00590ae0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fStack_280;
  float local_27c;
  float local_278;
  float fStack_274;
  float local_270;
  float local_26c;
  float local_268;
  undefined4 uStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  undefined4 uStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_210;
  undefined4 local_20c;
  float local_208;
  undefined4 local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  uint local_1e0 [12];
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_134;
  undefined4 local_130 [2];
  undefined1 auStack_128 [64];
  undefined1 auStack_e8 [56];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [100];
  
  if (*(int *)(param_1 + 0x8c0) == 0) {
    FUN_004066f0();
    local_210 = *(undefined4 *)(param_1 + 0x40);
    local_20c = *(undefined4 *)(param_1 + 0x44);
    local_208 = *(float *)(param_1 + 0x48);
    local_204 = *(undefined4 *)(param_1 + 0x4c);
    local_26c = SQRT(*(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
                     *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10) +
                     *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18));
    local_268 = SQRT(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
                     *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                     *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28));
    fVar1 = SQRT(*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
                 *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
                 *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30));
    local_278 = *(float *)(param_1 + 0x28) / fVar1;
    local_27c = *(float *)(param_1 + 0x38) / fVar1;
    fVar9 = (float10)FUN_00ddbaa0(-(*(float *)(param_1 + 0x18) / fVar1));
    fVar10 = (float10)fpatan((float10)local_278,(float10)local_27c);
    local_200 = (float)fVar10;
    local_1fc = (float)fVar9;
    fVar9 = (float10)fpatan((float10)*(float *)(param_1 + 0x14) / (float10)local_268,
                            (float10)*(float *)(param_1 + 0x10) / (float10)local_26c);
    local_1f8 = (float)fVar9;
    FUN_0118f7b0();
    local_150 = 0x3f800000;
    local_1b0 = *param_2;
    uStack_1ac = param_2[1];
    local_14c = 0x3ecccccd;
    uStack_1a8 = param_2[2];
    local_148 = 0x3ecccccd;
    local_140 = 0x3f4ccccd;
    local_134 = 0x41a00000;
    local_130[0] = 0x42f00000;
    uStack_1a4 = 0x3f800000;
    iVar6 = FUN_009f8b40();
    local_1e0[0] = iVar6 << 0x10 | 0xb;
    piVar7 = (int *)FUN_00910da0();
    uVar8 = (**(code **)(*piVar7 + 8))(&local_270,local_1e0,&local_210,&local_200,0x3e4ccccd,1);
    FUN_00910ab0(uVar8);
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x8c0),1);
    FUN_00917bd0(*(undefined4 *)(param_1 + 0x8c0),2);
    uStack_238 = *(undefined4 *)(param_1 + 0x40);
    uStack_234 = *(undefined4 *)(param_1 + 0x44);
    uStack_230 = *(undefined4 *)(param_1 + 0x48);
    fVar1 = *(float *)(param_1 + 0x10);
    fVar2 = *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(param_1 + 0x18);
    fStack_280 = SQRT(*(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20) +
                      *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                      *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28));
    fVar5 = SQRT(*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
                 *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
                 *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30));
    fVar4 = *(float *)(param_1 + 0x28);
    fVar12 = *(float *)(param_1 + 0x38) / fVar5;
    fVar10 = (float10)FUN_00ddbaa0(-(*(float *)(param_1 + 0x18) / fVar5));
    fVar9 = (float10)fpatan((float10)(fVar4 / fVar5),(float10)fVar12);
    local_208 = (float)fVar9;
    fVar11 = (float10)fpatan((float10)*(float *)(param_1 + 0x14) / (float10)fStack_280,
                             (float10)*(float *)(param_1 + 0x10) /
                             (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
    fVar9 = (float10)0;
    fStack_240 = (float)fVar9;
    fStack_244 = (float)fVar9;
    fStack_248 = (float)fVar9;
    fStack_24c = (float)fVar9;
    fStack_254 = (float)fVar9;
    fStack_258 = (float)fVar9;
    fStack_25c = (float)fVar9;
    fStack_260 = (float)fVar9;
    local_268 = (float)fVar9;
    local_26c = (float)fVar9;
    local_270 = (float)fVar9;
    fStack_274 = (float)fVar9;
    uStack_23c = 0x3f800000;
    uStack_250 = 0x3f800000;
    uStack_264 = 0x3f800000;
    local_278 = 1.0;
    if (fVar9 != fVar11) {
      D3DXMatrixRotationZ(auStack_68,(float)fVar11);
      D3DXMatrixMultiply(&fStack_280,auStack_70,&fStack_280);
      fVar10 = (float10)(float)fVar10;
    }
    if ((float10)0 != fVar10) {
      D3DXMatrixRotationY(auStack_128,(float)fVar10);
      D3DXMatrixMultiply(&fStack_280,local_130,&fStack_280);
    }
    if (local_208 != 0.0) {
      D3DXMatrixRotationX(auStack_a8,local_208);
      D3DXMatrixMultiply(&fStack_280,auStack_b0,&fStack_280);
    }
    fStack_248 = (float)uStack_238;
    fStack_244 = (float)uStack_234;
    fStack_240 = (float)uStack_230;
    FUN_01005190(&local_278);
    FUN_00915780(auStack_e8);
    if (DAT_01885d68 != 1) {
      piVar7 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar7 = *piVar7 + -1;
      if (((*piVar7 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 00590F30  FUN_00590f30  size=99  [run]
void __fastcall FUN_00590f30(int *param_1)

{
  undefined1 local_160 [348];
  
  FUN_004cb9a0(0x41);
  FUN_00dffb30(param_1 + 0x2a0);
  FUN_00e020f0(param_1[0x13c]);
  FUN_00a8c8b0(0x20310,local_160);
  (**(code **)(*param_1 + 0x20))();
  param_1[0x139] = 1;
  return;
}


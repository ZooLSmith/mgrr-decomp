// src/unsorted/unit_0089E060.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0089E060..0089E060, 1 functions

#include "mgrr.h"

// 0089E060  FUN_0089e060  size=1673  [run]
void FUN_0089e060(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 fVar11;
  undefined *puVar12;
  byte local_2d1;
  int *local_2d0;
  uint local_2cc;
  float local_2c8;
  float local_2c4;
  int local_2c0;
  uint local_2bc [2];
  int local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  int *local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_280;
  float local_27c;
  float local_278;
  undefined4 uStack_274;
  float local_270;
  float local_26c;
  float local_268;
  undefined4 uStack_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  float local_1f8;
  float local_1f4;
  float fStack_1ec;
  float fStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 auStack_1c4 [5];
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 auStack_16c [20];
  undefined1 auStack_158 [8];
  undefined1 local_150 [32];
  undefined1 local_130 [144];
  undefined1 local_a0 [156];
  
  if (param_1 == (undefined4 *)0x0) {
    local_2cc = 0;
  }
  else {
    puVar12 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar6 = FUN_00dd6d80(puVar12);
    local_2cc = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(local_2cc + 0x5e0);
  if (piVar2 == (int *)0x0) {
    local_2bc[0] = 0;
  }
  else {
    puVar12 = &DAT_01b35b20;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
    iVar6 = FUN_00dd6d80(puVar12);
    local_2bc[0] = -(uint)(iVar6 != 0) & (uint)piVar2;
  }
  local_2b4 = local_2cc + 0x5f0;
  FUN_00a7c950();
  *(undefined4 *)(local_2cc + 0x610) = 0xffffffff;
  *(undefined4 *)(local_2cc + 0x614) = 0xffffffff;
  *(undefined4 *)(local_2cc + 0x600) = 0;
  *(undefined4 *)(local_2cc + 0x604) = 0;
  *(undefined4 *)(local_2cc + 0x608) = 0;
  *(undefined4 *)(local_2cc + 0x60c) = 0x3f800000;
  if (*(int *)(local_2cc + 0x628) == 0) {
    iVar6 = FUN_00a7ca20();
    local_2d0 = *(int **)(iVar6 + 0x14);
    local_294 = *(int **)(iVar6 + 0x18);
    if (local_2d0 != local_294) {
      do {
        iVar6 = FUN_009f93b0(*(undefined4 *)(*local_2d0 + 0x24));
        if (((iVar6 != 0) && (local_2c0 = FUN_00a7c8a0(), local_2c0 != 0)) &&
           (fVar3 = *(float *)(local_2bc[0] + 0x40) - *(float *)(local_2c0 + 0x40),
           fVar5 = *(float *)(local_2bc[0] + 0x44) - *(float *)(local_2c0 + 0x44),
           fVar4 = *(float *)(local_2bc[0] + 0x48) - *(float *)(local_2c0 + 0x48),
           SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4) <=
           *(float *)(local_2cc + 0x574) * 5.0)) {
          local_2d1 = 0;
          do {
            iVar6 = FUN_00c5f290(*local_2d0,(local_2d1 == 0) * '\x02' + '\x02');
            puVar9 = *(undefined4 **)(iVar6 + 4);
            puVar1 = puVar9 + *(int *)(iVar6 + 0xc);
            for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
              FUN_00c5b080(*puVar9,1);
              iVar6 = FUN_00c52a30(*puVar9);
              if (iVar6 != 0) {
                iVar6 = FUN_00c518c0(local_a0,*puVar9);
                iVar6 = FUN_00a12210(*(undefined4 *)(iVar6 + 8));
                if (iVar6 != 0) {
                  FUN_00c518c0(local_130,*puVar9);
                  iVar7 = FUN_00c518c0(local_130,*puVar9);
                  local_210 = *(undefined4 *)(iVar7 + 0x20);
                  local_20c = *(undefined4 *)(iVar7 + 0x24);
                  local_208 = *(undefined4 *)(iVar7 + 0x28);
                  FID_conflict__memcpy(&local_290,(void *)(iVar6 + 0x10),0x40);
                  local_1e0 = local_260;
                  local_1dc = local_25c;
                  local_1d8 = local_258;
                  local_1d4 = local_254;
                  local_1f8 = SQRT(local_288 * local_288 +
                                   local_290 * local_290 + local_28c * local_28c);
                  local_1f4 = SQRT(local_278 * local_278 +
                                   local_280 * local_280 + local_27c * local_27c);
                  fVar3 = SQRT(local_268 * local_268 + local_270 * local_270 + local_26c * local_26c
                              );
                  local_2c4 = local_278 / fVar3;
                  local_2c8 = local_268 / fVar3;
                  fVar10 = (float10)FUN_00ddbaa0(-(local_288 / fVar3));
                  fVar11 = (float10)fpatan((float10)local_2c4,(float10)local_2c8);
                  local_2b0 = (float)fVar11;
                  local_2ac = (float)fVar10;
                  fVar10 = (float10)fpatan((float10)local_28c / (float10)local_1f4,
                                           (float10)local_290 / (float10)local_1f8);
                  local_2a8 = (float)fVar10;
                  local_1b0 = 0;
                  local_1ac = 0;
                  local_1a8 = 0x3f800000;
                  FUN_00ddc1d0(&local_250,&local_2b0,5);
                  D3DXVec3TransformNormal(local_150,&local_1b0,&local_250);
                  uStack_1cc = 0x3f800000;
                  uStack_1c8 = 0;
                  auStack_1c4[0] = 0;
                  FUN_00ddc1d0(&local_25c,local_2bc,5);
                  D3DXVec3TransformNormal(auStack_16c,&uStack_1cc,&local_25c);
                  fStack_1e8 = 0.0;
                  uStack_1e4 = 0x3f800000;
                  local_1e0 = 0;
                  FUN_00ddc1d0(&local_268,&local_2c8,5);
                  D3DXVec3TransformNormal(auStack_158,&fStack_1e8,&local_268);
                  uStack_23c = 0;
                  uStack_240 = 0;
                  uStack_244 = 0;
                  uStack_248 = 0;
                  local_250 = 0;
                  local_254 = 0;
                  local_258 = 0;
                  local_25c = 0;
                  uStack_264 = 0;
                  local_268 = 0.0;
                  local_26c = 0.0;
                  local_270 = 0.0;
                  uStack_238 = 0x3f800000;
                  uStack_24c = 0x3f800000;
                  local_260 = 0x3f800000;
                  uStack_274 = 0x3f800000;
                  if (fStack_22c != 0.0) {
                    D3DXMatrixRotationZ(auStack_1c4,fStack_22c);
                    D3DXMatrixMultiply(&local_27c,&uStack_1cc,&local_27c);
                  }
                  if (fStack_230 != 0.0) {
                    D3DXMatrixRotationY(auStack_1c4,fStack_230);
                    D3DXMatrixMultiply(&local_27c,&uStack_1cc,&local_27c);
                  }
                  if (fStack_234 != 0.0) {
                    D3DXMatrixRotationX(auStack_1c4,fStack_234);
                    D3DXMatrixMultiply(&local_27c,&uStack_1cc,&local_27c);
                  }
                  D3DXMatrixMultiply(&local_2b4,&uStack_274,&local_2b4);
                  fStack_1ec = SQRT(local_288 * local_288 +
                                    local_290 * local_290 + local_28c * local_28c);
                  fStack_1e8 = SQRT(local_278 * local_278 +
                                    local_280 * local_280 + local_27c * local_27c);
                  fVar3 = SQRT(local_268 * local_268 + local_270 * local_270 + local_26c * local_26c
                              );
                  local_2c8 = local_278 / fVar3;
                  local_2c4 = local_268 / fVar3;
                  fVar10 = (float10)FUN_00ddbaa0(-(local_288 / fVar3));
                  fVar11 = (float10)fpatan((float10)local_2c8,(float10)local_2c4);
                  local_2b0 = (float)fVar11;
                  local_2ac = (float)fVar10;
                  fVar10 = (float10)fpatan((float10)local_28c / (float10)fStack_1e8,
                                           (float10)local_290 / (float10)fStack_1ec);
                  local_2a8 = (float)fVar10;
                  iVar6 = FUN_0085f8f0(&local_1e0);
                  if (iVar6 == 0) goto LAB_0089e68a;
                }
                uVar8 = FUN_00a7c7f0();
                FUN_00a7c960(uVar8);
                *(undefined4 *)(local_2cc + 0x610) = *puVar9;
              }
LAB_0089e68a:
            }
            local_2d1 = local_2d1 + 1;
          } while (local_2d1 < 2);
        }
        local_2d0 = (int *)local_2d0[2];
      } while (local_2d0 != local_294);
    }
    iVar6 = FUN_00a81330();
    if (iVar6 == 0) {
      lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>(param_1);
    }
  }
  return;
}


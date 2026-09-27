// lib/havok/unit_00BEE8D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00BEE8D0..00BEE8D0, 1 functions

#include "types.h"

// 00BEE8D0  hkpAllCdPointCollector::hkpAllCdPointCollector_23  size=1567  [run]
void __fastcall hkpAllCdPointCollector::hkpAllCdPointCollector_23(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float local_230;
  float local_22c;
  float local_228;
  float fStack_224;
  float local_220;
  int iStack_218;
  int iStack_214;
  float fStack_20c;
  float fStack_208;
  float fStack_1fc;
  float fStack_1f8;
  undefined1 auStack_1f0 [48];
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  undefined **ppuStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *puStack_1a0;
  int iStack_19c;
  uint uStack_198;
  undefined1 auStack_190 [396];
  
  iVar11 = param_1[0x461];
  iVar12 = 0;
  param_1[0x461] = 0;
  iVar10 = FUN_00a81330();
  if (iVar10 != 0) {
    iVar12 = FUN_00a7c8a0();
  }
  if (param_1[0x447] != 0) {
    switchD_0080dbae::default();
    iVar10 = FUN_00a8c760(0x1e);
    if ((iVar10 != 0) || (iVar11 != 0)) {
      FUN_004066f0();
      if (param_1[0x43e] != 0) {
        if ((iVar12 == 0) || (iVar11 = (**(code **)(*param_1 + 0x32c))(), iVar11 != 0)) {
          local_230 = (float)param_1[0x10] + (float)param_1[0x448];
          local_22c = (float)param_1[0x449] + (float)param_1[0x11];
          local_228 = (float)param_1[0x44a] + (float)param_1[0x12];
          fVar3 = (float)param_1[1099] + (float)param_1[0x13];
          local_220 = (float)param_1[0x44c];
        }
        else {
          local_230 = (float)param_1[0x10] - *(float *)(iVar12 + 0x40);
          local_22c = (float)param_1[0x11] - *(float *)(iVar12 + 0x44);
          local_228 = (float)param_1[0x12] - *(float *)(iVar12 + 0x48);
          fStack_224 = (float)param_1[0x13] - *(float *)(iVar12 + 0x4c);
          fVar3 = local_228 * local_228 + local_22c * local_22c + local_230 * local_230;
          if (fVar3 < 0.0 == (fVar3 == 0.0)) {
            FUN_00ddf460(&local_230,&local_230);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            local_228 = 0.0;
            local_230 = 0.0;
            local_22c = 1.0;
          }
          fVar6 = (float)param_1[0x445] + (float)param_1[0x444];
          fVar4 = local_22c * fVar6;
          fVar5 = (float)param_1[0x10] + local_230 * fVar6;
          fVar2 = local_228 * fVar6 + (float)param_1[0x12];
          fVar3 = (float)param_1[0x443] + (float)param_1[0x444];
          fVar7 = *(float *)(iVar12 + 0x40) - local_230 * fVar3;
          fStack_1fc = *(float *)(iVar12 + 0x44) - local_22c * fVar3;
          fVar8 = *(float *)(iVar12 + 0x48) - local_228 * fVar3;
          local_230 = (fVar7 + fVar5) * 0.5;
          local_228 = (fVar8 + fVar2) * 0.5;
          fVar3 = ((*(float *)(iVar12 + 0x4c) - fStack_224 * fVar3) +
                  fStack_224 * fVar6 + (float)param_1[0x13]) * 0.5;
          local_22c = (float)param_1[0x11];
          fVar5 = fVar5 - fVar7;
          fVar4 = (fVar4 + (float)param_1[0x11]) - fStack_1fc;
          fVar2 = fVar2 - fVar8;
          local_220 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2) * 0.5;
          fStack_224 = fVar3;
          fStack_208 = local_228;
        }
        if (param_1[0x446] == 0) {
          param_1[0x446] = 1;
          fStack_1f8 = local_228 - (float)param_1[0x12];
          param_1[0x448] = (int)(local_230 - (float)param_1[0x10]);
          param_1[0x449] = (int)(local_22c - (float)param_1[0x11]);
          param_1[0x44a] = (int)fStack_1f8;
          param_1[1099] = (int)(fVar3 - (float)param_1[0x13]);
          param_1[0x44c] = (int)local_220;
        }
        else {
          if (local_220 <= (float)param_1[0x44c]) {
            param_1[0x44c] = (int)local_220;
          }
          local_220 = (float)param_1[0x44c];
        }
        param_1[0x448] = (int)(local_230 - (float)param_1[0x10]);
        param_1[0x449] = (int)(local_22c - (float)param_1[0x11]);
        param_1[0x44a] = (int)(local_228 - (float)param_1[0x12]);
        param_1[1099] = (int)(fVar3 - (float)param_1[0x13]);
        D3DXMatrixRotationY(auStack_1f0,param_1[0x25]);
        fStack_1c0 = local_230;
        fStack_1bc = local_22c;
        fStack_1b8 = local_228;
        Phantom::setTransform(auStack_1f0);
        FUN_0112c440(local_220);
        FUN_00901540(0xc);
        fStack_20c = local_22c + 1.1;
        if (param_1[0x43e] != 0) {
          puStack_1a0 = auStack_190;
          uStack_1ac = 0x7f7fffee;
          ppuStack_1b0 = vftable;
          uStack_198 = 0x80000008;
          iStack_19c = 0;
          FUN_00900350(&ppuStack_1b0);
          if (0 < iStack_19c) {
            iStack_214 = 0;
            iStack_218 = 0;
            local_220 = 0.0;
            do {
              puVar9 = puStack_1a0;
              fVar3 = local_220;
              iVar11 = *(int *)(puStack_1a0 + (int)local_220 + 0x28);
              if (*(char *)(iVar11 + 0x18) == '\x02') {
                iVar10 = *(char *)(iVar11 + 0x10) + iVar11;
              }
              else {
                iVar10 = 0;
              }
              if (*(char *)(iVar11 + 0x18) == '\x01') {
                iVar11 = *(char *)(iVar11 + 0x10) + iVar11;
              }
              else {
                iVar11 = 0;
              }
              if ((((iVar10 == 0) && (iVar11 != 0)) && (iVar11 != iStack_214)) &&
                 (((byte)*(undefined4 *)(iVar11 + 0x2c) & 0x1f) != 0xb)) {
                iStack_214 = iVar11;
                FUN_0048aaf0();
                fVar2 = *(float *)(puVar9 + (int)fVar3 + 0x1c);
                if (fVar2 < 0.0) {
                  local_230 = *(float *)(puVar9 + (int)fVar3 + 0x10) * fVar2;
                  local_22c = *(float *)(puVar9 + (int)fVar3 + 0x14) * fVar2;
                  local_228 = fVar2 * *(float *)(puVar9 + (int)fVar3 + 0x18);
                  fStack_224 = fVar2 * fStack_224;
                  if (param_1[0x44d] == 0) {
                    local_22c = 0.0;
                  }
                  else if ((0.0 <= local_22c) || (fStack_20c <= *(float *)(puVar9 + (int)fVar3 + 4))
                          ) {
                    if ((0.0 < local_22c) && (fStack_20c < *(float *)(puVar9 + (int)fVar3 + 4))) {
                      local_22c = 0.0;
                    }
                  }
                  else {
                    local_22c = 0.0;
                  }
                  param_1[0x14] = (int)(local_230 + (float)param_1[0x14]);
                  param_1[0x15] = (int)((float)param_1[0x15] + local_22c);
                  param_1[0x16] = (int)((float)param_1[0x16] + local_228);
                  param_1[0x17] = (int)((float)param_1[0x17] + fStack_224);
                  if (iVar12 == 0) {
                    FUN_00b89800(&local_230);
                  }
                  else {
                    *(float *)(iVar12 + 0x50) = *(float *)(iVar12 + 0x50) + local_230;
                    *(float *)(iVar12 + 0x54) = *(float *)(iVar12 + 0x54) + local_22c;
                    *(float *)(iVar12 + 0x58) = *(float *)(iVar12 + 0x58) + local_228;
                    *(float *)(iVar12 + 0x5c) = fStack_224 + *(float *)(iVar12 + 0x5c);
                    FUN_00b89800(&local_230);
                  }
                }
              }
              local_220 = (float)((int)local_220 + 0x30);
              iStack_218 = iStack_218 + 1;
            } while (iStack_218 < iStack_19c);
          }
          ppuStack_1b0 = vftable;
          iStack_19c = 0;
          if (-1 < (int)uStack_198) {
            (**(code **)(PTR_vftable_018e9b94 + 0x10))(puStack_1a0,(uStack_198 & 0x3fffffff) * 0x30)
            ;
          }
        }
      }
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
  }
  return;
}


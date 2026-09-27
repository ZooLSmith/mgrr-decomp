// src/unsorted/unit_00F1DAD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F1DAD0..00F1DAD0, 1 functions

#include "types.h"

// 00F1DAD0  FUN_00f1dad0  size=3713  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00f1dad0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  ushort uVar5;
  ushort *puVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  float *pfVar14;
  float *pfVar15;
  int *piVar16;
  ushort *puVar17;
  float fVar18;
  byte bVar19;
  float10 fVar20;
  undefined1 auStack_d4 [4];
  float local_d0;
  float local_cc;
  float local_c8;
  ushort *local_c4;
  float fStack_c0;
  ushort *local_bc;
  float fStack_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float afStack_68 [2];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_d4;
  if ((param_1[0x148] & 1U) == 0) {
    piVar16 = param_1 + 0xe8;
    FUN_00edfc20(piVar16);
    FUN_00edb3c0(piVar16);
    if (((((param_1[0x1b] & 0x1000U) != 0) && (iVar9 = FUN_00a7c990(&DAT_01ee11f4), iVar9 == 0)) &&
        (iVar9 = FUN_00a81330(), iVar9 != 0)) && (iVar9 = FUN_00a7c890(), iVar9 != 0)) {
      iVar9 = FUN_00e26e90();
      if (iVar9 == 0) {
        fVar20 = (float10)-1.0;
      }
      else {
        fVar20 = (float10)FUN_00e36970(0);
      }
      local_b4 = (float)fVar20;
      if ((float)param_1[0x150] < local_b4 == ((float)param_1[0x150] == local_b4)) {
        param_1[0x1b] = param_1[0x1b] & 0xffffefff;
      }
      else {
        local_c8 = local_b4 - (float)param_1[0x150];
        param_1[0x44] = (int)(local_c8 / 0.016666668);
        param_1[0x150] = (int)local_b4;
      }
    }
    FUN_00f0a1e0();
    if ((*(uint *)param_1[9] & 0x40000000) != 0) {
      FUN_00f0afe0(piVar16);
    }
    if ((param_1[0xc] & 0x4000U) != 0) {
      FUN_00ef8ed0(piVar16);
    }
    if ((*(uint *)param_1[9] & 0x10000000) != 0) {
      FUN_00ef9850(piVar16);
    }
    FUN_00efa160(piVar16);
    FUN_00edfc20(piVar16);
    FUN_00efb130(piVar16);
    FUN_00efbd40(piVar16);
    if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
      local_c4 = (ushort *)param_1[0x47];
      param_1[0x14a] = param_1[0x149];
      local_c8 = (float)param_1[0x46] - (float)local_c4;
      param_1[0x149] = (int)((float)param_1[0x149] - local_c8);
      if ((param_1[0x16] == 0) ||
         (puVar10 = (undefined4 *)(param_1[0x16] + 0x20), puVar10 == (undefined4 *)0x0)) {
        local_bc = (ushort *)0x0;
      }
      else {
        puVar6 = (ushort *)*puVar10;
        local_bc = puVar6;
        if ((ushort *)((int)puVar6 + 0xfU & 0xfffffff0) != puVar6) {
          uVar13 = FUN_00f59ed0(2);
          FUN_00dd5650(&DAT_016597b4,uVar13);
        }
      }
      fVar18 = (float)param_1[0x149];
      puVar6 = local_bc;
      while (local_bc = puVar6, fVar18 <= 0.0) {
        if ((param_1[0x48] != 0) &&
           (local_c8 = (float)(param_1[0x48] + -1), (float)(int)local_c8 < (float)param_1[0x14d])) {
          __security_check_cookie(local_14 ^ (uint)auStack_d4);
          return;
        }
        local_c8 = (float)(uint)puVar6[1];
        local_cc = (float)(int)local_c8 + 0.999999;
        fVar20 = (float10)FUN_00dde300(0,0x3f800000);
        local_c4 = (ushort *)(float)fVar20;
        uVar5 = puVar6[3];
        local_cc = (float)*(byte *)((int)puVar6 + 0xf) * (float)local_c4 + local_cc;
        local_c8 = (float)(uint)*(byte *)((int)puVar6 + 0xf);
        if (uVar5 != 0) {
          local_cc = (float)uVar5 * local_cc;
          local_c8 = (float)(uint)uVar5;
        }
        local_d0 = (float)param_1[0x48];
        if ((0 < (int)local_d0) && ((char)puVar6[7] != '\0')) {
          local_c8 = (float)(int)(char)puVar6[7];
          local_cc = ((float)(int)local_c8 * (float)param_1[0x46]) / (float)(int)local_d0 + local_cc
          ;
          if (local_cc < 1.0) {
            local_cc = 1.0;
          }
        }
        if ((float)param_1[0x149] < -100.0 == ((float)param_1[0x149] == -100.0)) {
          param_1[0x14a] = param_1[0x149];
          param_1[0x149] = (int)((float)param_1[0x149] + local_cc);
          param_1[0x14d] = (int)(local_cc + 0.0001 + (float)param_1[0x14d]);
        }
        else {
          param_1[0x149] = (int)local_cc;
          param_1[0x14a] = (int)(local_cc - 1.0);
          param_1[0x14d] = (int)(local_cc + 0.0001 + (float)param_1[0x14d]);
          if (((param_1[0xe] & 0x800000U) != 0) && (*(char *)((int)puVar6 + 0xf) != '\0')) break;
        }
        if (param_1[0x14f] == 0) {
          local_c8 = 1.4013e-45;
        }
        else {
          local_c8 = (float)((byte)puVar6[8] + 1);
        }
        local_b4 = 0.0;
        if (local_c8 != 0.0) {
          do {
            puVar6 = local_bc;
            if ((param_1[0xe] & 0x2000U) == 0) {
              uVar5 = local_bc[8];
              piVar16 = param_1 + 0x118;
              local_b0 = (float)param_1[0x60] + (float)param_1[0x5c];
              local_ac = (float)param_1[0x5d] + (float)param_1[0x61];
              local_a8 = (float)param_1[0x5e] + (float)param_1[0x62];
              param_1[0x126] = 0;
              param_1[0x125] = 0;
              param_1[0x124] = 0;
              param_1[0x123] = 0;
              param_1[0x121] = 0;
              param_1[0x120] = 0;
              param_1[0x11f] = 0;
              param_1[0x11e] = 0;
              param_1[0x11c] = 0;
              param_1[0x11b] = 0;
              param_1[0x11a] = 0;
              param_1[0x119] = 0;
              param_1[0x127] = 0x3f800000;
              param_1[0x122] = 0x3f800000;
              param_1[0x11d] = 0x3f800000;
              *piVar16 = 0x3f800000;
              if ((char)uVar5 == '\0') {
                if ((float)param_1[0x72] != 0.0) {
                  D3DXMatrixRotationZ(local_60,param_1[0x72]);
                  D3DXMatrixMultiply(piVar16,afStack_68,piVar16);
                }
                if ((float)param_1[0x71] != 0.0) {
                  D3DXMatrixRotationY(local_60,param_1[0x71]);
                  D3DXMatrixMultiply(piVar16,afStack_68,piVar16);
                }
                if ((float)param_1[0x70] != 0.0) {
                  D3DXMatrixRotationX(local_60,param_1[0x70]);
                  D3DXMatrixMultiply(piVar16,afStack_68,piVar16);
                }
                param_1[0x124] = (int)((float)param_1[0x124] + local_b0);
                param_1[0x125] = (int)((float)param_1[0x125] + local_ac);
                param_1[0x126] = (int)(local_a8 + (float)param_1[0x126]);
                D3DXMatrixMultiply(piVar16,piVar16,param_1 + 0x138);
              }
              else {
                if ((float)param_1[0x72] != 0.0) {
                  D3DXMatrixRotationZ(local_60,param_1[0x72]);
                  D3DXMatrixMultiply(piVar16,afStack_68,piVar16);
                }
                if ((float)param_1[0x71] != 0.0) {
                  D3DXMatrixRotationY(local_60,param_1[0x71]);
                  D3DXMatrixMultiply(piVar16,afStack_68,piVar16);
                }
                if ((float)param_1[0x70] != 0.0) {
                  D3DXMatrixRotationX(local_60,param_1[0x70]);
                  D3DXMatrixMultiply(piVar16,afStack_68,piVar16);
                }
                param_1[0x124] = (int)((float)param_1[0x124] + local_b0);
                param_1[0x125] = (int)((float)param_1[0x125] + local_ac);
                param_1[0x126] = (int)(local_a8 + (float)param_1[0x126]);
                D3DXMatrixMultiply(piVar16,piVar16,param_1 + 0x138);
                if (param_1[0x14] != 0) {
                  D3DXMatrixMultiply(piVar16,piVar16,param_1[0x14] + 0x10);
                }
                local_c4 = (ushort *)
                           ((1.0 / (float)((byte)puVar6[8] + 1)) * (float)((int)local_b4 + 1));
                if ((float)local_c4 < 0.99 != ((float)local_c4 == 0.99)) {
                  FUN_00ddcaa0(piVar16,param_1 + 0x128,piVar16,local_c4);
                }
              }
            }
            param_1[0x14e] = param_1[0x14e] + 1;
            if ((float *)param_1[0x16] == (float *)0x0) {
              puVar17 = (ushort *)0x0;
            }
            else {
              puVar17 = *(ushort **)param_1[0x16];
              if ((ushort *)((int)puVar17 + 0xfU & 0xfffffff0) != puVar17) {
                uVar13 = FUN_00f59ed0(0);
                FUN_00dd5650(&DAT_016597b4,uVar13);
              }
            }
            local_c4 = puVar17;
            if ((puVar17[2] & 1) == 0) {
              iVar9 = FUN_00f41620((int)*(char *)((int)puVar6 + 0x11));
            }
            else {
              iVar9 = FUN_00f41670((int)*(char *)((int)puVar6 + 0x11));
            }
            if (iVar9 == 0) break;
            iVar9 = FUN_009cde80(param_1);
            if (iVar9 != 0) {
              bVar19 = (param_1[0xf] & 0x800000U) != 0;
              if ((char)local_bc[9] != '\0') {
                bVar19 = bVar19 | 2;
              }
              if ((param_1[0xf] & 4U) != 0) {
                bVar19 = bVar19 | 4;
              }
              if (bVar19 != 0) {
                if ((param_1[0x16] == 0) ||
                   (puVar11 = (uint *)(param_1[0x16] + 0x10), puVar11 == (uint *)0x0)) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = *puVar11;
                  if ((uVar12 + 0xf & 0xfffffff0) != uVar12) {
                    uVar13 = FUN_00f59ed0(1);
                    FUN_00dd5650(&DAT_016597b4,uVar13);
                  }
                }
                D3DXVec3TransformNormal(&fStack_a0,uVar12 + 4,param_1 + 0x118);
                fStack_a0 = fStack_a0 + (float)param_1[0x124];
                fStack_9c = (float)param_1[0x125] + fStack_9c;
                fStack_98 = (float)param_1[0x126] + fStack_98;
                if ((((param_1[0xe] & 0x2000U) == 0) && ((char)local_bc[8] == '\0')) &&
                   (iVar9 = param_1[0x14], iVar9 != 0)) {
                  D3DXVec3TransformNormal(&fStack_a0,&fStack_a0,iVar9 + 0x10);
                  fStack_a0 = fStack_a0 + *(float *)(iVar9 + 0x40);
                  fStack_9c = *(float *)(iVar9 + 0x44) + fStack_9c;
                  fStack_98 = *(float *)(iVar9 + 0x48) + fStack_98;
                }
                if ((bVar19 & 5) != 0) {
                  pfVar14 = (float *)FUN_00e9fe70();
                  pfVar15 = (float *)FUN_00e9feb0();
                  fStack_80 = *pfVar15 - *pfVar14;
                  fStack_7c = pfVar15[1] - pfVar14[1];
                  fStack_78 = pfVar15[2] - pfVar14[2];
                  fStack_74 = pfVar15[3] - pfVar14[3];
                  pfVar14 = (float *)FUN_00e9fe70();
                  fStack_90 = fStack_a0 - *pfVar14;
                  fStack_8c = fStack_9c - pfVar14[1];
                  fStack_88 = fStack_98 - pfVar14[2];
                  fStack_84 = fStack_94 - pfVar14[3];
                  local_d0 = fStack_7c * fStack_7c + fStack_80 * fStack_80 + fStack_78 * fStack_78;
                  if (local_d0 < 0.0 == (local_d0 == 0.0)) {
                    FUN_00ddf460(&fStack_80,&fStack_80);
                  }
                  else {
                    FUN_00dd5650(&DAT_0163d0ac);
                    fStack_80 = 0.0;
                    fStack_7c = 1.0;
                    fStack_78 = 0.0;
                  }
                  local_d0 = fStack_8c * fStack_8c + fStack_90 * fStack_90 + fStack_88 * fStack_88;
                  if (local_d0 < 0.0 == (local_d0 == 0.0)) {
                    FUN_00ddf460(&fStack_90,&fStack_90);
                  }
                  else {
                    FUN_00dd5650(&DAT_0163d0ac);
                    fStack_90 = 0.0;
                    fStack_8c = 1.0;
                    fStack_88 = 0.0;
                  }
                  local_d0 = fStack_88 * fStack_78 + fStack_8c * fStack_7c + fStack_90 * fStack_80;
                  iVar9 = FUN_00e9fe50();
                  local_cc = *(float *)(iVar9 + 0x94) * 0.5 + _DAT_018d7058;
                  fVar20 = (float10)FUN_00fded30();
                  local_cc = (float)fVar20;
                  if ((bVar19 & 1) == 0) {
                    if (local_cc < local_d0) break;
                  }
                  else if (local_d0 < local_cc) break;
                }
                if ((bVar19 & 2) != 0) {
                  pfVar14 = (float *)FUN_00e9fe70();
                  fStack_70 = *pfVar14 - fStack_a0;
                  cVar4 = (char)local_bc[9];
                  fStack_6c = pfVar14[1] - fStack_9c;
                  afStack_68[0] = pfVar14[2] - fStack_98;
                  cVar8 = cVar4;
                  if (cVar4 < '\0') {
                    cVar8 = -cVar4;
                  }
                  fVar18 = *(float *)(param_1[10] + 8000 + cVar8 * 4);
                  local_d0 = afStack_68[0] * afStack_68[0] +
                             fStack_6c * fStack_6c + fStack_70 * fStack_70;
                  if (cVar4 < '\x01') {
                    if (local_d0 < fVar18 * fVar18) break;
                  }
                  else if (fVar18 * fVar18 < local_d0) break;
                }
              }
              puVar6 = local_bc;
              uVar5 = *local_bc;
              local_d0 = (float)(int)*(char *)((int)local_bc + 0xd);
              FUN_00dde300(0,0x3f800000);
              iVar9 = FUN_00fdbc60();
              fVar18 = (float)((uint)uVar5 + iVar9);
              local_d0 = (float)param_1[0x48];
              local_cc = fVar18;
              if ((0 < (int)local_d0) && ((char)puVar6[6] != '\0')) {
                local_cc = (float)(int)(char)puVar6[6];
                iVar9 = FUN_00fdbc60();
                local_cc = (float)((int)fVar18 + iVar9);
                if ((int)local_cc < 1) {
                  local_cc = 1.4013e-45;
                }
              }
              local_d0 = 0.0;
              if (0 < (int)local_cc) {
                do {
                  iVar9 = *(int *)(param_1[10] + 0x1e70);
                  fStack_b8 = (float)(uint)*local_c4;
                  if (*(int *)(iVar9 + 0x38) != 0) {
                    EnterCriticalSection((LPCRITICAL_SECTION)(iVar9 + 0x20));
                  }
                  piVar16 = (int *)FUN_00f42180(param_1,fStack_b8,0);
                  if (*(int *)(iVar9 + 0x38) != 0) {
                    LeaveCriticalSection((LPCRITICAL_SECTION)(iVar9 + 0x20));
                  }
                  if (piVar16 != (int *)0x0) {
                    piVar16[10] = param_1[10];
                    *(short *)(piVar16 + 0x103) = (short)param_1[0x103];
                    FUN_00ec7e40(param_1 + 0x18);
                    fVar18 = local_d0;
                    *(short *)((int)piVar16 + 0x402) = (short)param_1[0x14f];
                    pcVar7 = *(code **)(*param_1 + 0x1c);
                    param_1[0x14f] = param_1[0x14f] + 1;
                    (*pcVar7)(local_60,param_1 + 0x118,local_cc,local_d0);
                    uVar12 = FUN_00dde2a0(0,0xffff);
                    param_1[0x14b] = param_1[0x14b] + (uVar12 & 0xffff);
                    iVar9 = (**(code **)(*piVar16 + 4))(param_1 + 0x15,&fStack_70,param_1[0x14b]);
                    if (iVar9 == 0) {
                      piVar16[0xc] = piVar16[0xc] | 0x80000000;
                      piVar16[0x21] = 0;
                      break;
                    }
                    (**(code **)(*param_1 + 0x20))(piVar16,local_cc,fVar18);
                    FUN_00eaa260(param_1[0x21],piVar16);
                    if (param_1[0x14c] != 0) {
                      FUN_00f122f0(piVar16);
                      piVar16[0xc] = piVar16[0xc] | 0x200000;
                    }
                    if ((short)piVar16[0x13] == 0) {
                      piVar16[0xc] = piVar16[0xc] | 0x30000;
                    }
                    if ((param_1[0xf] & 0x40000000U) == 0) {
                      fVar1 = (float)param_1[0x41];
                      piVar16[0x7c] = (int)((float)param_1[0x40] * (float)piVar16[0x7c]);
                      piVar16[0x7d] = (int)(fVar1 * (float)piVar16[0x7d]);
                    }
                    fVar1 = (float)param_1[0x95];
                    fVar2 = (float)param_1[0x96];
                    fVar3 = (float)param_1[0x97];
                    piVar16[0x94] = (int)((float)param_1[0x94] * (float)piVar16[0x94]);
                    piVar16[0x95] = (int)((float)piVar16[0x95] * fVar1);
                    piVar16[0x96] = (int)(fVar2 * (float)piVar16[0x96]);
                    piVar16[0x97] = (int)((float)piVar16[0x97] * fVar3);
                    fStack_c0 = (float)piVar16[0x91] * (float)param_1[0x95];
                    fStack_b8 = (float)param_1[0x96] * (float)piVar16[0x92];
                    fVar1 = (float)piVar16[0x93];
                    fVar2 = (float)param_1[0x97];
                    piVar16[0x90] = (int)((float)param_1[0x94] * (float)piVar16[0x90]);
                    piVar16[0x91] = (int)fStack_c0;
                    piVar16[0x92] = (int)fStack_b8;
                    piVar16[0x93] = (int)(fVar1 * fVar2);
                    local_d0 = fVar18;
                    if (((uint *)piVar16[9] == (uint *)0x0) || ((*(uint *)piVar16[9] & 0x8000) == 0)
                       ) {
                      if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) {
                        fStack_c0 = (float)(uint)*(byte *)(param_1[9] + 0x152);
                        local_d0 = fVar1 * fVar2;
                        FUN_00edbe30((float)(int)fStack_c0,param_1[0x24]);
                        local_d0 = fVar18;
                        if ((float)piVar16[0x24] < (float)param_1[0x24]) {
                          fStack_c0 = (float)param_1[0x24] - (float)param_1[0x27];
                          if ((float)piVar16[0x24] <= fStack_c0) {
                            piVar16[0x27] = 0;
                            piVar16[0x28] = -0x40800000;
                          }
                          else {
                            fStack_c0 = (float)piVar16[0x24] - fStack_c0;
                            piVar16[0x27] = (int)fStack_c0;
                            piVar16[0x28] = (int)(fStack_c0 - 1.0);
                          }
                        }
                      }
                    }
                    else {
                      param_1[0x27] = 0;
                      fStack_c0 = -1.0;
                      param_1[0x28] = -0x40800000;
                      param_1[0x26] = -0x40800000;
                      param_1[0x25] = 0;
                    }
                  }
                  local_d0 = (float)((int)local_d0 + 1);
                } while ((int)local_d0 < (int)local_cc);
              }
            }
            local_b4 = (float)((int)local_b4 + 1);
          } while ((int)local_b4 < (int)local_c8);
        }
        if ((char)local_bc[8] != '\0') {
          FID_conflict__memcpy(param_1 + 0x128,param_1 + 0x118,0x40);
        }
        puVar6 = local_bc;
        fVar18 = (float)param_1[0x149];
      }
    }
  }
  else if ((param_1[0x14c] == 0) || (((param_1[0x148] & 2U) != 0 && (param_1[0x108] == 0)))) {
    param_1[0xc] = param_1[0xc] | 0x80000000;
    __security_check_cookie(local_14 ^ (uint)auStack_d4);
    return;
  }
  __security_check_cookie(local_14 ^ (uint)auStack_d4);
  return;
}


// src/unsorted/unit_00EB2490.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EB2490..00EB3850, 3 functions

#include "mgrr.h"

// 00EB2490  FUN_00eb2490  size=4557  [run]
void FUN_00eb2490(int param_1)

{
  void *_Src;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  float local_ba4;
  float fStack_ba0;
  float *local_b9c;
  float local_b98;
  int *local_b94;
  float fStack_b90;
  float local_b8c;
  float local_b88;
  float local_b84;
  float fStack_b80;
  float fStack_b7c;
  float fStack_b78;
  float fStack_b70;
  float fStack_b6c;
  float fStack_b68;
  float fStack_b60;
  float fStack_b5c;
  float fStack_b58;
  float fStack_b50;
  float fStack_b4c;
  float fStack_b48;
  float fStack_b40;
  float fStack_b3c;
  float fStack_b38;
  float afStack_b34 [5];
  float afStack_b20 [2];
  uint uStack_b18;
  uint uStack_b14;
  float local_b10;
  float local_b0c;
  float local_b08;
  undefined4 local_b04;
  float local_b00;
  float local_afc;
  float local_af8;
  float local_af4;
  float local_af0;
  float local_aec;
  float local_ae8;
  float local_ae4;
  float local_ae0;
  float local_adc;
  float local_ad8;
  float local_ad4;
  float local_ad0 [23];
  float local_a74 [5];
  float local_a60 [80];
  int local_920;
  float afStack_91c [527];
  undefined1 auStack_e0 [4];
  float fStack_dc;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_ba4;
  local_ba4 = (float)FUN_00da3980(0);
  _memset(&local_920,0,0x900);
  local_b10 = *(float *)(param_1 + 0x2d0);
  local_b0c = *(float *)(param_1 + 0x2d4);
  local_b08 = *(float *)(param_1 + 0x2d8);
  local_b04 = *(undefined4 *)(param_1 + 0x2dc);
  local_b00 = *(float *)(param_1 + 0x2e0) * -1.0;
  local_afc = *(float *)(param_1 + 0x2e4) * -1.0;
  local_af8 = *(float *)(param_1 + 0x2e8) * -1.0;
  local_af4 = *(float *)(param_1 + 0x2ec) * -1.0;
  local_af0 = *(float *)(param_1 + 0x2f0) * -1.0;
  local_aec = *(float *)(param_1 + 0x2f4) * -1.0;
  local_ae8 = *(float *)(param_1 + 0x2f8) * -1.0;
  local_ae4 = *(float *)(param_1 + 0x2fc) * -1.0;
  local_ae0 = *(float *)(param_1 + 0x300) * -1.0;
  local_adc = *(float *)(param_1 + 0x304) * -1.0;
  local_ad8 = *(float *)(param_1 + 0x308) * -1.0;
  local_ad4 = *(float *)(param_1 + 0x30c) * -1.0;
  local_ad0[0] = *(float *)(param_1 + 0x310) * -1.0;
  local_ad0[1] = *(float *)(param_1 + 0x314) * -1.0;
  local_ad0[2] = *(float *)(param_1 + 0x318) * -1.0;
  local_ad0[3] = *(float *)(param_1 + 0x31c) * -1.0;
  local_b8c = 0.0;
  local_a74[1] = -(local_af8 * *(float *)(param_1 + 0x1b8) +
                  *(float *)(param_1 + 0x1b4) * local_afc + *(float *)(param_1 + 0x1b0) * local_b00)
  ;
  local_a74[2] = -(local_ae8 * *(float *)(param_1 + 0x1b8) +
                  *(float *)(param_1 + 0x1b4) * local_aec + *(float *)(param_1 + 0x1b0) * local_af0)
  ;
  local_a74[3] = -(local_ad8 * *(float *)(param_1 + 0x1b8) +
                  *(float *)(param_1 + 0x1b4) * local_adc + *(float *)(param_1 + 0x1b0) * local_ae0)
  ;
  local_b98 = local_ad0[2] * *(float *)(param_1 + 0x1b8) +
              *(float *)(param_1 + 0x1b4) * local_ad0[1] +
              *(float *)(param_1 + 0x1b0) * local_ad0[0];
  local_a74[4] = -local_b98;
  local_a74[0] = -(*(float *)(param_1 + 0x2d8) * *(float *)(param_1 + 0x1b8) +
                  *(float *)(param_1 + 0x1b4) * *(float *)(param_1 + 0x2d4) +
                  *(float *)(param_1 + 0x1b0) * *(float *)(param_1 + 0x2d0)) -
                 *(float *)(param_1 + 0x344);
  do {
    iVar12 = *(int *)((int)&DAT_01ddaa90 + (int)local_b8c);
    if (iVar12 != 0) {
      local_b84 = (float)(iVar12 + 0x10);
      local_b88 = *(float *)((int)&DAT_01ddaaa0 + (int)local_b8c);
      local_b98 = 0.0;
      if (*(short *)(iVar12 + 6) != 0) {
        do {
          iVar12 = 0;
          fVar9 = 5.60519e-45;
          local_b9c = (float *)((int)local_b84 + 8);
          pfVar11 = local_a60 + 2;
          local_b94 = (int *)0x4;
          do {
            if (local_b88 == 0.0) {
              pfVar11[-2] = local_b9c[-2];
              pfVar11[-1] = local_b9c[-1];
              *pfVar11 = *local_b9c;
              pfVar11[1] = local_b9c[1];
            }
            else {
              D3DXVec3TransformNormal(pfVar11 + -2,local_b9c + -2,local_b88);
              pfVar11[-2] = *(float *)((int)local_b88 + 0x30) + pfVar11[-2];
              pfVar11[-1] = *(float *)((int)local_b88 + 0x34) + pfVar11[-1];
              *pfVar11 = *(float *)((int)local_b88 + 0x38) + *pfVar11;
            }
            local_b9c = local_b9c + 4;
            pfVar11 = pfVar11 + 4;
            local_b94 = (int *)((int)local_b94 + -1);
          } while (local_b94 != (int *)0x0);
          local_b9c = &local_b10;
          uVar10 = 0;
          local_b94 = (int *)0x0;
          do {
            fVar9 = (float)FUN_00eaf160(local_a60 + iVar12 * 0x28,fVar9,local_b9c,local_a74[uVar10])
            ;
            if (fVar9 == 0.0) break;
            local_b9c = local_b9c + 4;
            iVar12 = 1 - iVar12;
            uVar10 = uVar10 + 1;
          } while (uVar10 < 5);
          local_b9c = (float *)0x0;
          fStack_b90 = fVar9;
          if (2 < (uint)fVar9) {
            pfVar11 = local_a60 + iVar12 * 0x28;
            pfVar5 = pfVar11;
            for (local_b94 = (int *)fVar9; local_b94 != (int *)0x0;
                local_b94 = (int *)((int)local_b94 + -1)) {
              D3DXVec3TransformCoord(pfVar5,pfVar5,local_ba4);
              pfVar5 = pfVar5 + 4;
            }
            uVar13 = 1;
            uVar10 = (int)fVar9 - 1;
            if (1 < uVar10) {
              if (3 < (int)fVar9 + -2) {
                iVar7 = ((int)fVar9 - 6U >> 2) + 1;
                uVar13 = iVar7 * 4 + 1;
                pfVar5 = local_a60 + iVar12 * 0x28 + 0xd;
                do {
                  afStack_b20[0] = pfVar5[-9] - *pfVar11;
                  afStack_b20[1] = pfVar5[-8] - local_a60[iVar12 * 0x28 + 1];
                  fVar1 = pfVar5[-5] - *pfVar11;
                  afStack_b34[1] = fVar1;
                  fVar2 = pfVar5[-4] - local_a60[iVar12 * 0x28 + 1];
                  afStack_b34[2] = fVar2;
                  afStack_b20[0] = fVar1;
                  afStack_b20[1] = fVar2;
                  fVar3 = pfVar5[-1] - *pfVar11;
                  afStack_b34[1] = fVar3;
                  fVar4 = *pfVar5 - local_a60[iVar12 * 0x28 + 1];
                  afStack_b34[2] = fVar4;
                  afStack_b20[0] = fVar3;
                  afStack_b20[1] = fVar4;
                  afStack_b20[0] = pfVar5[3] - *pfVar11;
                  afStack_b34[1] = afStack_b20[0];
                  afStack_b20[1] = pfVar5[4] - local_a60[iVar12 * 0x28 + 1];
                  afStack_b34[2] = afStack_b20[1];
                  iVar7 = iVar7 + -1;
                  afStack_b34[1] = pfVar5[7] - *pfVar11;
                  afStack_b34[2] = pfVar5[8] - local_a60[iVar12 * 0x28 + 1];
                  fStack_ba0 = ABS((pfVar5[8] - local_a60[iVar12 * 0x28 + 1]) * afStack_b20[0] -
                                   (pfVar5[7] - *pfVar11) * afStack_b20[1]);
                  local_b9c = (float *)(fStack_ba0 +
                                       ABS(afStack_b20[1] * fVar3 - afStack_b20[0] * fVar4) +
                                       ABS(fVar4 * fVar1 - fVar3 * fVar2) +
                                       ABS(fVar2 * (pfVar5[-9] - *pfVar11) -
                                           fVar1 * (pfVar5[-8] - local_a60[iVar12 * 0x28 + 1])) +
                                       (float)local_b9c);
                  pfVar5 = pfVar5 + 0x10;
                } while (iVar7 != 0);
              }
              if (uVar13 < uVar10) {
                iVar7 = uVar10 - uVar13;
                pfVar5 = local_a60 + iVar12 * 0x28 + uVar13 * 4 + 1;
                do {
                  iVar7 = iVar7 + -1;
                  afStack_b20[0] = pfVar5[-1] - *pfVar11;
                  afStack_b20[1] = *pfVar5 - local_a60[iVar12 * 0x28 + 1];
                  afStack_b34[1] = pfVar5[3] - *pfVar11;
                  afStack_b34[2] = pfVar5[4] - local_a60[iVar12 * 0x28 + 1];
                  fStack_ba0 = ABS(afStack_b34[2] * (pfVar5[-1] - *pfVar11) -
                                   (pfVar5[3] - *pfVar11) * (*pfVar5 - local_a60[iVar12 * 0x28 + 1])
                                  );
                  local_b9c = (float *)(fStack_ba0 + (float)local_b9c);
                  pfVar5 = pfVar5 + 4;
                } while (iVar7 != 0);
              }
            }
            if (fStack_dc < (float)local_b9c) {
              uVar10 = 0;
              pfVar11 = afStack_91c;
LAB_00eb2b42:
              if ((float)local_b9c <= *pfVar11) goto code_r0x00eb2b51;
              if (uVar10 < 0xb) {
                local_b94 = (int *)auStack_e0;
                fStack_ba0 = (float)(0xb - uVar10);
                do {
                  FUN_00ec24a0((undefined1 *)((int)local_b94 + -0xc0));
                  local_b94 = (int *)((int)local_b94 + -0xc0);
                  fStack_ba0 = (float)((int)fStack_ba0 + -1);
                } while (fStack_ba0 != 0.0);
              }
              afStack_91c[uVar10 * 0x30] = (float)local_b9c;
              afStack_91c[uVar10 * 0x30 + 1] = local_b84;
              afStack_91c[uVar10 * 0x30 + 2] = local_b88;
              afStack_91c[uVar10 * 0x30 + 3] = fVar9;
              fStack_ba0 = 0.0;
              if (3 < (int)fVar9) {
                iVar7 = ((int)fVar9 - 4U >> 2) + 1;
                fStack_ba0 = (float)(iVar7 * 4);
                pfVar11 = local_a60 + iVar12 * 0x28 + 6;
                pfVar5 = afStack_91c + uVar10 * 0x30 + 9;
                do {
                  pfVar5[-2] = pfVar11[-6];
                  iVar7 = iVar7 + -1;
                  pfVar5[-1] = pfVar11[-5];
                  *pfVar5 = pfVar11[-4];
                  pfVar5[1] = pfVar11[-3];
                  pfVar5[2] = pfVar11[-2];
                  pfVar5[3] = pfVar11[-1];
                  pfVar5[4] = *pfVar11;
                  pfVar5[5] = pfVar11[1];
                  pfVar5[6] = pfVar11[2];
                  pfVar5[7] = pfVar11[3];
                  pfVar5[8] = pfVar11[4];
                  pfVar5[9] = pfVar11[5];
                  pfVar5[10] = pfVar11[6];
                  pfVar5[0xb] = pfVar11[7];
                  pfVar5[0xc] = pfVar11[8];
                  pfVar5[0xd] = pfVar11[9];
                  pfVar11 = pfVar11 + 0x10;
                  pfVar5 = pfVar5 + 0x10;
                  fVar9 = fStack_b90;
                } while (iVar7 != 0);
              }
              if ((uint)fStack_ba0 < (uint)fVar9) {
                iVar7 = (int)fVar9 - (int)fStack_ba0;
                pfVar11 = local_a60 + iVar12 * 0x28 + (int)fStack_ba0 * 4 + 2;
                pfVar5 = afStack_91c + ((int)fStack_ba0 + uVar10 * 0xc) * 4 + 9;
                do {
                  pfVar5[-2] = pfVar11[-2];
                  iVar7 = iVar7 + -1;
                  pfVar5[-1] = pfVar11[-1];
                  *pfVar5 = *pfVar11;
                  pfVar5[1] = pfVar11[1];
                  pfVar11 = pfVar11 + 4;
                  pfVar5 = pfVar5 + 4;
                } while (iVar7 != 0);
              }
            }
          }
LAB_00eb2b5f:
          local_b84 = (float)((int)local_b84 + 0x40);
          local_b98 = (float)((int)local_b98 + 1);
        } while ((uint)local_b98 <
                 (uint)*(ushort *)(*(int *)((int)&DAT_01ddaa90 + (int)local_b8c) + 6));
      }
    }
    local_b8c = (float)((int)local_b8c + 0x18);
  } while ((uint)local_b8c < 0xc0);
  fStack_b90 = 1.4013e-45;
  pfVar11 = afStack_91c + 7;
  do {
    if (pfVar11[-6] == 0.0) break;
    if ((pfVar11[-8] != 1.4013e-45) && (local_b98 = fStack_b90, (uint)fStack_b90 < 0xc)) {
      local_b9c = pfVar11 + 0x2c;
      do {
        if (local_b9c[-2] == 0.0) break;
        if (pfVar11[-8] != 1.4013e-45) {
          local_b94 = (int *)0x0;
          if (*local_b9c != 0.0) {
            pfVar5 = local_b9c;
            while( true ) {
              uVar10 = 0;
              if (pfVar11[-4] == 2.8026e-45) break;
              pfVar8 = pfVar11 + 9;
              fStack_b70 = pfVar5[4] - *pfVar11;
              fStack_b6c = pfVar5[5] - pfVar11[1];
              while( true ) {
                fStack_b60 = pfVar8[-5] - *pfVar11;
                fStack_b5c = pfVar8[-4] - pfVar11[1];
                fStack_b80 = pfVar8[-1] - *pfVar11;
                fStack_b7c = *pfVar8 - pfVar11[1];
                local_b84 = fStack_b60 * fStack_b60 + fStack_b5c * fStack_b5c;
                fVar1 = fStack_b80 * fStack_b60 + fStack_b7c * fStack_b5c;
                fVar9 = fStack_b80 * fStack_b80 + fStack_b7c * fStack_b7c;
                local_b88 = fStack_b6c * fStack_b5c + fStack_b70 * fStack_b60;
                local_b8c = fStack_b70 * fStack_b80 + fStack_b7c * fStack_b6c;
                fStack_ba0 = local_b84 * fVar9 - fVar1 * fVar1;
                local_ba4 = (local_b88 * fVar9 - local_b8c * fVar1) / fStack_ba0;
                fStack_ba0 = (local_b8c * local_b84 - local_b88 * fVar1) / fStack_ba0;
                if ((((-0.0001 < local_ba4) && (local_ba4 < 1.0001)) && (-0.0001 < fStack_ba0)) &&
                   (((fStack_ba0 < 1.0001 && (fStack_ba0 + local_ba4 < 1.0001)) &&
                    (local_ba4 = fStack_ba0 * pfVar8[1] +
                                 ((1.0 - local_ba4) - fStack_ba0) * pfVar11[2] +
                                 pfVar8[-3] * local_ba4, local_ba4 < pfVar5[6] + 0.0001)))) break;
                uVar10 = uVar10 + 1;
                pfVar8 = pfVar8 + 4;
                if ((int)pfVar11[-4] - 2U <= uVar10) goto LAB_00eb2f30;
              }
              local_b94 = (int *)((int)local_b94 + 1);
              pfVar5 = pfVar5 + 4;
              if ((uint)*local_b9c <= local_b94) break;
            }
          }
LAB_00eb2f30:
          if (local_b94 == (int *)*local_b9c) {
            local_b9c[-4] = 1.4013e-45;
          }
        }
        local_b98 = (float)((int)local_b98 + 1);
        local_b9c = local_b9c + 0x30;
      } while ((uint)local_b98 < 0xc);
    }
    pfVar11 = pfVar11 + 0x30;
    bVar14 = (uint)fStack_b90 < 0xb;
    fStack_b90 = (float)((int)fStack_b90 + 1);
  } while (bVar14);
  local_b94 = &local_920;
  DAT_01ddab50 = 0;
  fStack_b90 = 0.0;
  pfVar11 = (float *)&DAT_01edd2a8;
  do {
    _Src = (void *)local_b94[2];
    if (_Src == (void *)0x0) break;
    if (*local_b94 != 1) {
      iVar12 = local_b94[3];
      if (iVar12 == 0) {
        FID_conflict__memcpy(local_ad0 + 4,_Src,0x40);
      }
      else {
        local_ba4 = (float)((int)_Src - (int)(local_ad0 + 6));
        local_b98 = 5.60519e-45;
        pfVar5 = local_ad0 + 6;
        do {
          D3DXVec3TransformNormal(pfVar5 + -2,(int)local_ba4 + (int)pfVar5,iVar12);
          local_b98 = (float)((int)local_b98 + -1);
          pfVar5[-2] = pfVar5[-2] + *(float *)(iVar12 + 0x30);
          pfVar5[-1] = *(float *)(iVar12 + 0x34) + pfVar5[-1];
          *pfVar5 = *pfVar5 + *(float *)(iVar12 + 0x38);
          pfVar5 = pfVar5 + 4;
        } while (local_b98 != 0.0);
      }
      afStack_b34[1] =
           local_a74[0] +
           local_b0c * local_ad0[5] + local_b10 * local_ad0[4] + local_b08 * local_ad0[6];
      fVar9 = (float)(uint)(0.0 < afStack_b34[1]);
      afStack_b20[0] = fVar9;
      afStack_b34[2] =
           local_ad0[10] * local_b08 + local_ad0[8] * local_b10 + local_ad0[9] * local_b0c +
           local_a74[0];
      afStack_b20[1] = (float)(uint)(0.0 < afStack_b34[2]);
      afStack_b34[3] =
           local_ad0[0xe] * local_b08 + local_ad0[0xc] * local_b10 + local_ad0[0xd] * local_b0c +
           local_a74[0];
      uStack_b18 = (uint)(0.0 < afStack_b34[3]);
      local_ba4 = local_ad0[0x11] * local_b0c + local_ad0[0x10] * local_b10 +
                  local_ad0[0x12] * local_b08;
      afStack_b34[4] = local_ba4 + local_a74[0];
      uStack_b14 = (uint)(0.0 < local_ba4 + local_a74[0]);
      switch(uStack_b14 + uStack_b18 + (int)afStack_b20[1] + (int)fVar9) {
      case 0:
        goto switchD_00eb31a7_caseD_0;
      case 1:
        iVar12 = 0;
        while (fVar9 == 0.0) {
          iVar12 = iVar12 + 1;
          fVar9 = afStack_b20[iVar12];
        }
        pfVar5 = local_ad0 + iVar12 * 4 + 4;
        uVar13 = iVar12 - 1U & 3;
        uVar10 = iVar12 + 1U & 3;
        fVar9 = afStack_b34[iVar12 + 1] / (afStack_b34[iVar12 + 1] - afStack_b34[uVar13 + 1]);
        fStack_b40 = *pfVar5 + fVar9 * (local_ad0[uVar13 * 4 + 4] - *pfVar5);
        fStack_b3c = (local_ad0[uVar13 * 4 + 5] - local_ad0[iVar12 * 4 + 5]) * fVar9 +
                     local_ad0[iVar12 * 4 + 5];
        fStack_b38 = (local_ad0[uVar13 * 4 + 6] - local_ad0[iVar12 * 4 + 6]) * fVar9 +
                     local_ad0[iVar12 * 4 + 6];
        local_ba4 = afStack_b34[iVar12 + 1] / (afStack_b34[iVar12 + 1] - afStack_b34[uVar10 + 1]);
        fStack_b70 = *pfVar5 + local_ba4 * (local_ad0[uVar10 * 4 + 4] - *pfVar5);
        fStack_b6c = (local_ad0[uVar10 * 4 + 5] - local_ad0[iVar12 * 4 + 5]) * local_ba4 +
                     local_ad0[iVar12 * 4 + 5];
        fStack_b68 = (local_ad0[uVar10 * 4 + 6] - local_ad0[iVar12 * 4 + 6]) * local_ba4 +
                     local_ad0[iVar12 * 4 + 6];
        pfVar11[-6] = fStack_b40;
        pfVar11[-5] = fStack_b3c;
        pfVar11[-4] = fStack_b38;
        pfVar11[-3] = 1.0;
        pfVar11[-2] = *pfVar5;
        pfVar11[-1] = local_ad0[iVar12 * 4 + 5];
        *pfVar11 = local_ad0[iVar12 * 4 + 6];
        pfVar11[1] = local_ad0[iVar12 * 4 + 7];
        pfVar11[2] = fStack_b70;
        pfVar11[3] = fStack_b6c;
        pfVar11[4] = fStack_b68;
        pfVar11[5] = 1.0;
        pfVar11[6] = fStack_b70;
        pfVar11[7] = fStack_b6c;
        pfVar11[8] = fStack_b68;
        pfVar11[9] = 1.0;
        break;
      case 2:
        iVar7 = -1;
        iVar12 = -1;
        if (fVar9 == 0.0) {
          if (afStack_b20[1] == 0.0) goto LAB_00eb3316;
LAB_00eb3342:
          if (fVar9 == 0.0) {
            iVar7 = 1;
          }
          if (uStack_b18 != 0) goto LAB_00eb3320;
          iVar12 = 1;
LAB_00eb3358:
          if (uStack_b14 != 0) goto LAB_00eb335c;
        }
        else {
          if (uStack_b14 == 0) {
            iVar7 = 0;
          }
          if (afStack_b20[1] != 0.0) goto LAB_00eb3342;
          iVar12 = 0;
LAB_00eb3316:
          if (uStack_b18 == 0) goto LAB_00eb3358;
LAB_00eb3320:
          if (afStack_b20[1] == 0.0) {
            iVar7 = 2;
          }
          if (uStack_b14 == 0) {
            iVar12 = 2;
          }
          else {
LAB_00eb335c:
            if (uStack_b18 == 0) {
              iVar7 = 3;
            }
            if (fVar9 == 0.0) {
              iVar12 = 3;
            }
          }
        }
        uVar10 = iVar7 - 1U & 3;
        pfVar5 = local_ad0 + iVar7 * 4 + 4;
        fVar9 = afStack_b34[iVar7 + 1] / (afStack_b34[iVar7 + 1] - afStack_b34[uVar10 + 1]);
        pfVar8 = local_ad0 + iVar12 * 4 + 4;
        fStack_b60 = *pfVar5 + fVar9 * (local_ad0[uVar10 * 4 + 4] - *pfVar5);
        fStack_b5c = (local_ad0[uVar10 * 4 + 5] - local_ad0[iVar7 * 4 + 5]) * fVar9 +
                     local_ad0[iVar7 * 4 + 5];
        uVar13 = iVar12 + 1U & 3;
        fStack_b58 = (local_ad0[uVar10 * 4 + 6] - local_ad0[iVar7 * 4 + 6]) * fVar9 +
                     local_ad0[iVar7 * 4 + 6];
        local_ba4 = afStack_b34[iVar12 + 1] / (afStack_b34[iVar12 + 1] - afStack_b34[uVar13 + 1]);
        fStack_b80 = *pfVar8 + local_ba4 * (local_ad0[uVar13 * 4 + 4] - *pfVar8);
        fStack_b7c = (local_ad0[uVar13 * 4 + 5] - local_ad0[iVar12 * 4 + 5]) * local_ba4 +
                     local_ad0[iVar12 * 4 + 5];
        fStack_b78 = (local_ad0[uVar13 * 4 + 6] - local_ad0[iVar12 * 4 + 6]) * local_ba4 +
                     local_ad0[iVar12 * 4 + 6];
        pfVar11[-6] = *pfVar5;
        pfVar11[-5] = local_ad0[iVar7 * 4 + 5];
        pfVar11[-4] = local_ad0[iVar7 * 4 + 6];
        pfVar11[-3] = local_ad0[iVar7 * 4 + 7];
        pfVar11[-2] = *pfVar8;
        pfVar11[-1] = local_ad0[iVar12 * 4 + 5];
        *pfVar11 = local_ad0[iVar12 * 4 + 6];
        pfVar11[1] = local_ad0[iVar12 * 4 + 7];
        pfVar11[2] = fStack_b80;
        pfVar11[3] = fStack_b7c;
        pfVar11[4] = fStack_b78;
        pfVar11[5] = 1.0;
        pfVar11[6] = fStack_b60;
        pfVar11[7] = fStack_b5c;
        pfVar11[8] = fStack_b58;
        pfVar11[9] = 1.0;
        break;
      case 3:
        iVar12 = 0;
        while (fVar9 != 0.0) {
          iVar12 = iVar12 + 1;
          fVar9 = afStack_b20[iVar12];
        }
        uVar10 = iVar12 - 1U & 3;
        uVar13 = iVar12 + 1U & 3;
        if (afStack_b34[uVar13 + 1] <= afStack_b34[uVar10 + 1]) {
          local_ba4 = afStack_b34[uVar10 + 1] / (afStack_b34[uVar10 + 1] - afStack_b34[iVar12 + 1]);
          uVar6 = uVar10;
        }
        else {
          local_ba4 = afStack_b34[uVar13 + 1] / (afStack_b34[uVar13 + 1] - afStack_b34[iVar12 + 1]);
          uVar6 = uVar13;
        }
        fStack_b50 = local_ad0[uVar6 * 4 + 4] +
                     local_ba4 * (local_ad0[iVar12 * 4 + 4] - local_ad0[uVar6 * 4 + 4]);
        fStack_b4c = (local_ad0[iVar12 * 4 + 5] - local_ad0[uVar6 * 4 + 5]) * local_ba4 +
                     local_ad0[uVar6 * 4 + 5];
        fStack_b48 = (local_ad0[iVar12 * 4 + 6] - local_ad0[uVar6 * 4 + 6]) * local_ba4 +
                     local_ad0[uVar6 * 4 + 6];
        pfVar11[-6] = local_ad0[uVar13 * 4 + 4];
        pfVar11[-5] = local_ad0[uVar13 * 4 + 5];
        pfVar11[-4] = local_ad0[uVar13 * 4 + 6];
        pfVar11[-3] = local_ad0[uVar13 * 4 + 7];
        uVar13 = iVar12 - 2U & 3;
        pfVar11[-2] = local_ad0[uVar13 * 4 + 4];
        pfVar11[-1] = local_ad0[uVar13 * 4 + 5];
        *pfVar11 = local_ad0[uVar13 * 4 + 6];
        pfVar11[1] = local_ad0[uVar13 * 4 + 7];
        pfVar11[2] = local_ad0[uVar10 * 4 + 4];
        pfVar11[3] = local_ad0[uVar10 * 4 + 5];
        pfVar11[4] = local_ad0[uVar10 * 4 + 6];
        pfVar11[5] = local_ad0[uVar10 * 4 + 7];
        pfVar11[6] = fStack_b50;
        pfVar11[7] = fStack_b4c;
        pfVar11[8] = fStack_b48;
        pfVar11[9] = 1.0;
        break;
      case 4:
        FID_conflict__memcpy(pfVar11 + -6,local_ad0 + 4,0x40);
      }
      *local_b94 = 2;
      DAT_01ddab50 = DAT_01ddab50 + 1;
      pfVar11 = pfVar11 + 0x10;
      if (7 < DAT_01ddab50) break;
    }
switchD_00eb31a7_caseD_0:
    fStack_b90 = (float)((int)fStack_b90 + 1);
    local_b94 = local_b94 + 0x30;
  } while ((uint)fStack_b90 < 0xc);
  __security_check_cookie(local_14 ^ (uint)&local_ba4);
  return;
code_r0x00eb2b51:
  uVar10 = uVar10 + 1;
  pfVar11 = pfVar11 + 0x30;
  if (0xb < uVar10) goto LAB_00eb2b5f;
  goto LAB_00eb2b42;
}

// 00EB3690  FUN_00eb3690  size=429  [run]
void FUN_00eb3690(void)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  undefined1 local_4c [8];
  float local_44 [9];
  float afStack_20 [7];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_5c;
  local_58 = 0;
  do {
    iVar4 = *(int *)((int)&DAT_01ddaa90 + local_58);
    if (iVar4 != 0) {
      iVar2 = *(int *)((int)&DAT_01ddaaa0 + local_58);
      local_5c = iVar4 + 0x10;
      local_50 = 0;
      if (*(short *)(iVar4 + 6) != 0) {
        do {
          pfVar6 = local_44;
          pfVar7 = (float *)(local_5c + 8);
          local_54 = 3;
          do {
            pfVar1 = pfVar6 + -2;
            *pfVar1 = pfVar7[-2];
            pfVar6[-1] = pfVar7[-1];
            *pfVar6 = *pfVar7;
            if (iVar2 != 0) {
              D3DXVec3TransformNormal(pfVar1,pfVar1,iVar2);
              *pfVar1 = *(float *)(iVar2 + 0x30) + *pfVar1;
              pfVar6[-1] = *(float *)(iVar2 + 0x34) + pfVar6[-1];
              *pfVar6 = *(float *)(iVar2 + 0x38) + *pfVar6;
            }
            pfVar7 = pfVar7 + 4;
            pfVar6 = pfVar6 + 3;
            local_54 = local_54 + -1;
          } while (local_54 != 0);
          uVar5 = 3;
          pfVar6 = afStack_20;
          local_54 = 0;
          do {
            uVar3 = uVar5 - 1 & 3;
            pfVar7 = pfVar6 + -2;
            *pfVar7 = *(float *)(local_5c + uVar3 * 0x10);
            pfVar6[-1] = *(float *)(local_5c + 4 + uVar3 * 0x10);
            *pfVar6 = *(float *)(local_5c + 8 + uVar3 * 0x10);
            if (iVar2 != 0) {
              D3DXVec3TransformNormal(pfVar7,pfVar7,iVar2);
              *pfVar7 = *pfVar7 + *(float *)(iVar2 + 0x30);
              pfVar6[-1] = *(float *)(iVar2 + 0x34) + pfVar6[-1];
              *pfVar6 = *(float *)(iVar2 + 0x38) + *pfVar6;
            }
            uVar5 = uVar5 + 1;
            pfVar6 = pfVar6 + 3;
          } while (uVar5 < 6);
          iVar4 = Hw::cPrimF::cPrimF_2(local_4c,6);
          if (iVar4 == 0) goto LAB_00eb3830;
          *(undefined4 *)(iVar4 + 0x78) = 4;
          *(undefined4 *)(iVar4 + 0x7c) = 0xffff00ff;
          *(undefined4 *)(iVar4 + 0x48) = 0;
          *(undefined4 *)(iVar4 + 0x44) = 0;
          *(undefined4 *)(iVar4 + 0x40) = 0;
          *(undefined4 *)(iVar4 + 0x3c) = 0;
          *(undefined4 *)(iVar4 + 0x34) = 0;
          *(undefined4 *)(iVar4 + 0x30) = 0;
          *(undefined4 *)(iVar4 + 0x2c) = 0;
          *(undefined4 *)(iVar4 + 0x28) = 0;
          *(undefined4 *)(iVar4 + 0x20) = 0;
          *(undefined4 *)(iVar4 + 0x1c) = 0;
          *(undefined4 *)(iVar4 + 0x18) = 0;
          *(undefined4 *)(iVar4 + 0x14) = 0;
          *(undefined4 *)(iVar4 + 0x4c) = 0x3f800000;
          *(undefined4 *)(iVar4 + 0x38) = 0x3f800000;
          *(undefined4 *)(iVar4 + 0x24) = 0x3f800000;
          *(undefined4 *)(iVar4 + 0x10) = 0x3f800000;
          FUN_00932780(iVar4,0x19,0);
          local_5c = local_5c + 0x40;
          local_50 = local_50 + 1;
        } while (local_50 < *(ushort *)(*(int *)((int)&DAT_01ddaa90 + local_58) + 6));
      }
    }
    local_58 = local_58 + 0x18;
  } while (local_58 < 0xc0);
LAB_00eb3830:
  __security_check_cookie(local_4 ^ (uint)&local_5c);
  return;
}

// 00EB3850  FUN_00eb3850  size=20  [run]
void __fastcall FUN_00eb3850(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  return;
}


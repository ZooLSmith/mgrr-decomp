// src/misc/esp50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EDA250..00F40990, 6 functions

#include "types.h"

// 00EDA250  esp50::vf1C  size=2533  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall esp50::vf1C(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = FUN_00f99ca0();
  iVar14 = *(int *)(param_1 + 0x450);
  iVar10 = (iVar14 + -4) * *(int *)(param_1 + 0x454);
  uVar11 = iVar10 + 2;
  fVar1 = (float)(iVar10 + 1);
  if (iVar10 + 1 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  uVar7 = *(uint *)(param_1 + 0x38) >> 0x13 & 1;
  uVar13 = *(uint *)(param_1 + 0x38) >> 0x12 & 1;
  fVar4 = (*(float *)(param_1 + 0x474) / fVar1) * *(float *)(param_1 + 0x4a8);
  fVar1 = *(float *)(param_1 + 0x478);
  if (*(int *)(param_1 + 0x480) == 1) {
    fVar5 = (float)iVar14;
    if (iVar14 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    if (*(float *)(param_1 + 0x46c) - 1.0 < fVar5) {
      if (*(float *)(param_1 + 0x460) <= *(float *)(param_1 + 0x46c)) {
        local_10 = *(float *)(param_1 + 0x460);
      }
      else {
        local_10 = *(float *)(param_1 + 0x46c);
      }
      if (local_10 < 3.0) {
        local_10 = 3.0;
      }
      fVar4 = ((fVar5 - _DAT_018d6b70) / (_DAT_018d6b6c + local_10)) * fVar4;
      fVar5 = *(float *)(param_1 + 0x474) - 0.01;
      local_10 = 0.0;
      if (uVar11 != 0) {
        pfVar9 = (float *)(iVar6 + 8);
        do {
          fVar3 = local_10;
          local_8 = fVar1;
          local_4 = fVar1;
          if (uVar13 == 0) {
            if (uVar7 == 0) {
              local_4 = 0.0;
            }
            else {
              local_8 = 0.0;
            }
            local_c = local_10 * fVar4;
            local_10 = local_10 * fVar4;
            if (fVar5 < local_10) {
              local_10 = fVar5;
            }
            if (fVar5 < local_c) {
              local_c = fVar5;
            }
          }
          else {
            if (uVar7 == 0) {
              local_4 = 0.0;
            }
            else {
              local_8 = 0.0;
            }
            local_c = 1.0 - local_10 * fVar4;
            local_10 = local_c;
            if (local_c < 0.0) {
              local_10 = 0.0;
              local_c = 0.0;
            }
          }
          fVar2 = *(float *)(param_1 + 0x488);
          uVar11 = uVar11 - 1;
          *pfVar9 = local_8;
          pfVar9[1] = fVar2 + local_10;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar9[-2] = local_4;
          pfVar9[-1] = fVar2 + local_c;
          local_10 = fVar3 + 1.0;
          pfVar9 = pfVar9 + 4;
        } while (uVar11 != 0);
      }
      goto LAB_00edaa3d;
    }
  }
  uVar12 = 0;
  if (uVar13 == 0) {
    if (uVar7 == 0) {
      if (3 < (int)uVar11) {
        iVar14 = 2;
        pfVar9 = (float *)(iVar6 + 0x14);
        do {
          fVar5 = (float)(int)uVar12;
          if ((int)uVar12 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[-5] = 0.0;
          pfVar9[-4] = fVar3 + fVar5 * fVar4;
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[-3] = fVar1;
          pfVar9[-2] = fVar3 + fVar5 * fVar4;
          fVar5 = (float)(iVar14 + -1);
          if (iVar14 + -1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[-1] = 0.0;
          *pfVar9 = fVar3 + fVar5 * fVar4;
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[1] = fVar1;
          pfVar9[2] = fVar3 + fVar5 * fVar4;
          fVar5 = (float)iVar14;
          if (iVar14 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[3] = 0.0;
          pfVar9[4] = fVar3 + fVar5 * fVar4;
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[5] = fVar1;
          pfVar9[6] = fVar3 + fVar5 * fVar4;
          fVar5 = (float)(iVar14 + 1);
          if (iVar14 + 1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar12 = uVar12 + 4;
          fVar3 = *(float *)(param_1 + 0x488);
          iVar14 = iVar14 + 4;
          pfVar9[7] = 0.0;
          pfVar9[8] = fVar3 + fVar5 * fVar4;
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[9] = fVar1;
          pfVar9[10] = fVar3 + fVar5 * fVar4;
          pfVar9 = pfVar9 + 0x10;
        } while (uVar12 < iVar10 - 1U);
      }
      if (uVar11 <= uVar12) goto LAB_00edac1c;
      pfVar9 = (float *)(uVar12 * 0x10 + iVar6 + 4);
      do {
        fVar5 = (float)(int)uVar12;
        if ((int)uVar12 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar12 = uVar12 + 1;
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[-1] = 0.0;
        *pfVar9 = fVar3 + fVar5 * fVar4;
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[1] = fVar1;
        pfVar9[2] = fVar3 + fVar5 * fVar4;
        pfVar9 = pfVar9 + 4;
      } while (uVar12 < uVar11);
    }
    else {
      if (3 < (int)uVar11) {
        iVar14 = 2;
        pfVar9 = (float *)(iVar6 + 0x1c);
        do {
          fVar5 = (float)(int)uVar12;
          if ((int)uVar12 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[-5] = 0.0;
          pfVar9[-4] = fVar3 + fVar5 * fVar4;
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[-7] = fVar1;
          pfVar9[-6] = fVar3 + fVar5 * fVar4;
          fVar5 = (float)(iVar14 + -1);
          if (iVar14 + -1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[-1] = 0.0;
          *pfVar9 = fVar3 + fVar5 * fVar4;
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[-3] = fVar1;
          pfVar9[-2] = fVar3 + fVar5 * fVar4;
          fVar5 = (float)iVar14;
          if (iVar14 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[3] = 0.0;
          pfVar9[4] = fVar3 + fVar5 * fVar4;
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[1] = fVar1;
          pfVar9[2] = fVar3 + fVar5 * fVar4;
          fVar5 = (float)(iVar14 + 1);
          if (iVar14 + 1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar12 = uVar12 + 4;
          fVar3 = *(float *)(param_1 + 0x488);
          iVar14 = iVar14 + 4;
          pfVar9[7] = 0.0;
          pfVar9[8] = fVar3 + fVar5 * fVar4;
          fVar3 = *(float *)(param_1 + 0x488);
          pfVar9[5] = fVar1;
          pfVar9[6] = fVar3 + fVar5 * fVar4;
          pfVar9 = pfVar9 + 0x10;
        } while (uVar12 < iVar10 - 1U);
      }
      if (uVar11 <= uVar12) {
LAB_00edac1c:
        FUN_00f99d30();
        return;
      }
      puVar8 = (undefined4 *)(uVar12 * 0x10 + iVar6 + 8);
      do {
        fVar5 = (float)(int)uVar12;
        if ((int)uVar12 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar12 = uVar12 + 1;
        fVar3 = *(float *)(param_1 + 0x488);
        *puVar8 = 0;
        puVar8[1] = fVar3 + fVar5 * fVar4;
        fVar3 = *(float *)(param_1 + 0x488);
        puVar8[-2] = fVar1;
        puVar8[-1] = fVar3 + fVar5 * fVar4;
        puVar8 = puVar8 + 4;
      } while (uVar12 < uVar11);
    }
  }
  else if (uVar7 == 0) {
    if (3 < (int)uVar11) {
      iVar14 = 2;
      pfVar9 = (float *)(iVar6 + 0x14);
      do {
        fVar5 = (float)(int)uVar12;
        if ((int)uVar12 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[-5] = 0.0;
        pfVar9[-4] = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[-3] = fVar1;
        pfVar9[-2] = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)(iVar14 + -1);
        if (iVar14 + -1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[-1] = 0.0;
        *pfVar9 = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[1] = fVar1;
        pfVar9[2] = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)iVar14;
        if (iVar14 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[3] = 0.0;
        pfVar9[4] = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[5] = fVar1;
        pfVar9[6] = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)(iVar14 + 1);
        if (iVar14 + 1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar12 = uVar12 + 4;
        fVar3 = *(float *)(param_1 + 0x488);
        iVar14 = iVar14 + 4;
        pfVar9[7] = 0.0;
        pfVar9[8] = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[9] = fVar1;
        pfVar9[10] = (fVar3 + 1.0) - fVar5 * fVar4;
        pfVar9 = pfVar9 + 0x10;
      } while (uVar12 < iVar10 - 1U);
    }
    if (uVar11 <= uVar12) goto LAB_00edac01;
    pfVar9 = (float *)(uVar12 * 0x10 + iVar6 + 4);
    do {
      fVar5 = (float)(int)uVar12;
      if ((int)uVar12 < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      uVar12 = uVar12 + 1;
      fVar3 = *(float *)(param_1 + 0x488);
      pfVar9[-1] = 0.0;
      *pfVar9 = (fVar3 + 1.0) - fVar5 * fVar4;
      fVar3 = *(float *)(param_1 + 0x488);
      pfVar9[1] = fVar1;
      pfVar9[2] = (fVar3 + 1.0) - fVar5 * fVar4;
      pfVar9 = pfVar9 + 4;
    } while (uVar12 < uVar11);
  }
  else {
    if (3 < (int)uVar11) {
      iVar14 = 2;
      pfVar9 = (float *)(iVar6 + 0x1c);
      do {
        fVar5 = (float)(int)uVar12;
        if ((int)uVar12 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[-5] = 0.0;
        pfVar9[-4] = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[-7] = fVar1;
        pfVar9[-6] = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)(iVar14 + -1);
        if (iVar14 + -1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[-1] = 0.0;
        *pfVar9 = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[-3] = fVar1;
        pfVar9[-2] = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)iVar14;
        if (iVar14 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[3] = 0.0;
        pfVar9[4] = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[1] = fVar1;
        pfVar9[2] = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)(iVar14 + 1);
        if (iVar14 + 1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar12 = uVar12 + 4;
        fVar3 = *(float *)(param_1 + 0x488);
        iVar14 = iVar14 + 4;
        pfVar9[7] = 0.0;
        pfVar9[8] = (fVar3 + 1.0) - fVar5 * fVar4;
        fVar3 = *(float *)(param_1 + 0x488);
        pfVar9[5] = fVar1;
        pfVar9[6] = (fVar3 + 1.0) - fVar5 * fVar4;
        pfVar9 = pfVar9 + 0x10;
      } while (uVar12 < iVar10 - 1U);
    }
    if (uVar11 <= uVar12) {
LAB_00edac01:
      FUN_00f99d30();
      return;
    }
    puVar8 = (undefined4 *)(uVar12 * 0x10 + iVar6 + 8);
    do {
      fVar5 = (float)(int)uVar12;
      if ((int)uVar12 < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      uVar12 = uVar12 + 1;
      fVar3 = *(float *)(param_1 + 0x488);
      *puVar8 = 0;
      puVar8[1] = (fVar3 + 1.0) - fVar5 * fVar4;
      fVar3 = *(float *)(param_1 + 0x488);
      puVar8[-2] = fVar1;
      puVar8[-1] = (fVar3 + 1.0) - fVar5 * fVar4;
      puVar8 = puVar8 + 4;
    } while (uVar12 < uVar11);
  }
LAB_00edaa3d:
  FUN_00f99d30();
  return;
}

// 00EF6530  esp50::vf14  size=45  [class]
void __fastcall esp50::vf14(int param_1)

{
  if ((*(int *)(param_1 + 0x458) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  return;
}

// 00F1D470  esp50::vf08  size=1447  [class]
void __fastcall esp50::vf08(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float10 fVar12;
  int local_3c;
  uint local_30;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar6 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar6 == 0) {
    iVar6 = FUN_00a81330();
    iVar9 = 0;
    if ((iVar6 != 0) && (iVar6 = FUN_00a7c800(), iVar6 != 0)) {
      esp39::vf08();
      *(undefined4 *)(param_1 + 0x4a8) = 0;
      if ((*(uint *)(param_1 + 0x45c) == 0) ||
         (local_30 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x460)),
         local_30 < *(uint *)(param_1 + 0x45c))) {
        if (*(int *)(param_1 + 0x4a4) == 0) {
          iVar6 = *(int *)(param_1 + 0x4a0) + 1;
          if (0 < iVar6) {
            local_3c = 0;
            do {
              uVar7 = FUN_00a12290(*(short *)(param_1 + 0x4e) + iVar9);
              pfVar10 = (float *)(*(int *)(param_1 + 0x458) + local_3c);
              FUN_00f0db60(&local_20,param_1 + 0x180,uVar7,1);
              local_3c = local_3c + 0xc;
              *pfVar10 = local_20;
              iVar9 = iVar9 + 1;
              pfVar10[1] = local_1c;
              pfVar10[2] = local_18;
            } while (iVar9 < iVar6);
          }
          iVar9 = *(int *)(param_1 + 0x450);
          iVar6 = *(int *)(param_1 + 0x4a0) + 1;
          if (iVar6 < iVar9) {
            if (3 < iVar9 - iVar6) {
              iVar8 = iVar6 * 0xc;
              iVar11 = ((iVar9 - iVar6) - 4U >> 2) + 1;
              iVar6 = iVar6 + iVar11 * 4;
              do {
                iVar5 = *(int *)(param_1 + 0x458);
                iVar1 = iVar5 + *(int *)(param_1 + 0x4a0) * 0xc;
                *(undefined4 *)(iVar5 + iVar8) =
                     *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x4a0) * 0xc);
                iVar8 = iVar8 + 0x30;
                iVar11 = iVar11 + -1;
                *(undefined4 *)(iVar5 + -0x2c + iVar8) = *(undefined4 *)(iVar1 + 4);
                *(undefined4 *)(iVar5 + -0x28 + iVar8) = *(undefined4 *)(iVar1 + 8);
                iVar5 = *(int *)(param_1 + 0x458);
                iVar1 = iVar5 + *(int *)(param_1 + 0x4a0) * 0xc;
                *(undefined4 *)(iVar5 + -0x24 + iVar8) =
                     *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x4a0) * 0xc);
                *(undefined4 *)(iVar5 + -0x20 + iVar8) = *(undefined4 *)(iVar1 + 4);
                *(undefined4 *)(iVar5 + -0x1c + iVar8) = *(undefined4 *)(iVar1 + 8);
                iVar5 = *(int *)(param_1 + 0x458);
                iVar1 = iVar5 + *(int *)(param_1 + 0x4a0) * 0xc;
                *(undefined4 *)(iVar5 + -0x18 + iVar8) =
                     *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x4a0) * 0xc);
                *(undefined4 *)(iVar5 + -0x14 + iVar8) = *(undefined4 *)(iVar1 + 4);
                *(undefined4 *)(iVar5 + -0x10 + iVar8) = *(undefined4 *)(iVar1 + 8);
                iVar5 = *(int *)(param_1 + 0x458);
                iVar1 = iVar5 + *(int *)(param_1 + 0x4a0) * 0xc;
                *(undefined4 *)(iVar5 + -0xc + iVar8) =
                     *(undefined4 *)(iVar5 + *(int *)(param_1 + 0x4a0) * 0xc);
                *(undefined4 *)(iVar5 + -8 + iVar8) = *(undefined4 *)(iVar1 + 4);
                *(undefined4 *)(iVar5 + -4 + iVar8) = *(undefined4 *)(iVar1 + 8);
              } while (iVar11 != 0);
            }
            if (iVar6 < iVar9) {
              iVar8 = iVar6 * 0xc;
              iVar9 = iVar9 - iVar6;
              do {
                iVar11 = *(int *)(param_1 + 0x458);
                iVar6 = iVar11 + *(int *)(param_1 + 0x4a0) * 0xc;
                *(undefined4 *)(iVar11 + iVar8) =
                     *(undefined4 *)(iVar11 + *(int *)(param_1 + 0x4a0) * 0xc);
                iVar8 = iVar8 + 0xc;
                iVar9 = iVar9 + -1;
                *(undefined4 *)(iVar11 + -8 + iVar8) = *(undefined4 *)(iVar6 + 4);
                *(undefined4 *)(iVar11 + -4 + iVar8) = *(undefined4 *)(iVar6 + 8);
              } while (iVar9 != 0);
            }
          }
          pfVar10 = *(float **)(param_1 + 0x458);
          local_20 = *pfVar10;
          local_1c = pfVar10[1];
          local_18 = pfVar10[2];
          pfVar10 = pfVar10 + *(int *)(param_1 + 0x4a0) * 3;
          fVar2 = *pfVar10;
          fVar3 = pfVar10[1];
          fVar4 = pfVar10[2];
          *(float *)(param_1 + 0x130) = local_20 + fVar2;
          *(float *)(param_1 + 0x134) = local_1c + fVar3;
          *(float *)(param_1 + 0x138) = local_18 + fVar4;
          *(undefined4 *)(param_1 + 0x13c) = 0x40000000;
          *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x130) * 0.5;
          *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x134) * 0.5;
          *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0x138) * 0.5;
          *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x13c) * 0.5;
          local_20 = local_20 - fVar2;
          local_1c = local_1c - fVar3;
          local_18 = local_18 - fVar4;
          fVar12 = (float10)FUN_00fdef70();
          local_3c = *(int *)(param_1 + 0x4a0);
          *(float *)(param_1 + 300) = (float)fVar12;
          if (1 < local_3c + 1) {
            do {
              fVar12 = (float10)FUN_00fdef70();
              local_3c = local_3c + -1;
              *(float *)(param_1 + 0x4a8) = (float)fVar12 + *(float *)(param_1 + 0x4a8);
            } while (local_3c != 0);
            FUN_00ed6110();
            return;
          }
        }
        else {
          uVar7 = FUN_00a12290((int)*(short *)(param_1 + 0x4e));
          pfVar10 = *(float **)(param_1 + 0x458);
          FUN_00f0db60(&local_20,param_1 + 0x180,uVar7,1);
          *pfVar10 = local_20;
          pfVar10[1] = local_1c;
          pfVar10[2] = local_18;
          uVar7 = FUN_00a12290(*(undefined4 *)(param_1 + 0x4a4));
          iVar6 = *(int *)(param_1 + 0x458);
          FUN_00f0db60(&local_20,param_1 + 0x180,uVar7,1);
          *(float *)(iVar6 + 0xc) = local_20;
          *(float *)(iVar6 + 0x10) = local_1c;
          *(float *)(iVar6 + 0x14) = local_18;
          iVar6 = *(int *)(param_1 + 0x458);
          *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar6 + 0xc);
          *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar6 + 0x10);
          *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar6 + 0x14);
          iVar6 = *(int *)(param_1 + 0x458);
          *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(iVar6 + 0xc);
          *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar6 + 0x10);
          *(undefined4 *)(iVar6 + 0x2c) = *(undefined4 *)(iVar6 + 0x14);
          pfVar10 = *(float **)(param_1 + 0x458);
          local_20 = *pfVar10;
          local_1c = pfVar10[1];
          local_18 = pfVar10[2];
          fVar2 = pfVar10[3];
          fVar3 = pfVar10[4];
          fVar4 = pfVar10[5];
          *(float *)(param_1 + 0x130) = local_20 + fVar2;
          *(float *)(param_1 + 0x134) = local_1c + fVar3;
          *(float *)(param_1 + 0x138) = local_18 + fVar4;
          *(undefined4 *)(param_1 + 0x13c) = 0x40000000;
          *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x130) * 0.5;
          *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x134) * 0.5;
          *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0x138) * 0.5;
          *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x13c) * 0.5;
          local_20 = local_20 - fVar2;
          local_1c = local_1c - fVar3;
          local_18 = local_18 - fVar4;
          fVar12 = (float10)FUN_00fdef70();
          *(float *)(param_1 + 300) = (float)fVar12;
          *(float *)(param_1 + 0x4a8) = (float)fVar12;
        }
      }
      FUN_00ed6110();
    }
  }
  return;
}

// 00F250F0  esp50::esp50  size=18  [class]
undefined4 * __fastcall esp50::esp50(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00F38380  esp50::vf04  size=832  [class]
undefined4 __thiscall
esp50::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x50) == 0) {
      FUN_009cca90(param_1,&DAT_016dd454);
    }
    else {
      if (*(short *)(param_1 + 0x400) != -1) {
        FUN_009cca90(param_1,&DAT_016dd478);
        return 0;
      }
      psVar4 = (short *)FUN_009d4a80();
      if (psVar4 != (short *)0x0) {
        sVar1 = psVar4[7];
        if (((sVar1 != 0) || ((char)psVar4[8] != '\0')) && (*psVar4 != 0)) {
          FUN_009cca90(param_1,&DAT_016dd4a0);
          return 0;
        }
        if (sVar1 == 0) {
          *(int *)(param_1 + 0x4a4) = (int)(char)psVar4[8];
        }
        else {
          *(int *)(param_1 + 0x4a4) = (int)sVar1;
        }
        if (*psVar4 < 0) {
          FUN_009cca90(param_1,&DAT_016dd4d4);
          return 0;
        }
        *(float *)(param_1 + 0x474) = (float)(int)psVar4[4] * 0.1;
      }
      iVar3 = FUN_00f12b50();
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0x4a4) == 0) {
          sVar1 = *(short *)(param_1 + 0x4e);
          *(int *)(param_1 + 0x4a0) = *(int *)(param_1 + 0x450) + -4;
          iVar3 = FUN_00a7c990(&DAT_01ee11f4);
          if (((iVar3 == 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
             (iVar3 = FUN_00a7c800(), iVar3 != 0)) {
            iVar3 = FUN_00a12290((int)sVar1);
          }
          else {
            iVar3 = 0;
          }
          sVar1 = *(short *)(param_1 + 0x4e);
          iVar6 = *(int *)(param_1 + 0x4a0);
          iVar5 = FUN_00a7c990(&DAT_01ee11f4);
          if (((iVar5 == 0) && (iVar5 = FUN_00a81330(), iVar5 != 0)) &&
             (iVar5 = FUN_00a7c800(), iVar5 != 0)) {
            iVar6 = FUN_00a12290(sVar1 + iVar6);
          }
          else {
            iVar6 = 0;
          }
          if (iVar3 == 0) {
            iVar3 = (int)*(short *)(param_1 + 0x4e);
            if (iVar6 == 0) {
              FUN_009cca90(param_1,&DAT_016dd554,iVar3,*(int *)(param_1 + 0x4a0) + iVar3);
              return 0;
            }
            FUN_009cca90(param_1,&DAT_016dd4fc,iVar3,*(int *)(param_1 + 0x4a0) + iVar3,iVar3);
            return 0;
          }
          if (iVar6 == 0) {
            iVar3 = *(int *)(param_1 + 0x4a0) + (int)*(short *)(param_1 + 0x4e);
            FUN_009cca90(param_1,&DAT_016dd528,(int)*(short *)(param_1 + 0x4e),iVar3,iVar3);
            return 0;
          }
          iVar3 = 0;
          if (*(int *)(param_1 + 0x4a0) != -1 && -1 < *(int *)(param_1 + 0x4a0) + 1) {
            do {
              sVar1 = *(short *)(param_1 + 0x4e);
              iVar6 = FUN_00a7c990(&DAT_01ee11f4);
              if (((iVar6 != 0) || (iVar6 = FUN_00a81330(), iVar6 == 0)) ||
                 ((iVar6 = FUN_00a7c800(), iVar6 == 0 ||
                  (iVar6 = FUN_00a12290(sVar1 + iVar3), iVar6 == 0)))) {
                FUN_009cca90(param_1,&DAT_016dd580,(int)*(short *)(param_1 + 0x4e),
                             *(int *)(param_1 + 0x4a0) + (int)*(short *)(param_1 + 0x4e),iVar3);
                return 0;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < *(int *)(param_1 + 0x4a0) + 1);
          }
        }
        else {
          sVar1 = *(short *)(param_1 + 0x4e);
          iVar3 = FUN_00a7c990(&DAT_01ee11f4);
          if (((iVar3 != 0) || (iVar3 = FUN_00a81330(), iVar3 == 0)) ||
             ((iVar3 = FUN_00a7c800(), iVar3 == 0 || (iVar3 = FUN_00a12290((int)sVar1), iVar3 == 0))
             )) {
            FUN_009cca90(param_1,&DAT_016dd5ac,(int)*(short *)(param_1 + 0x4e));
          }
          uVar2 = *(undefined4 *)(param_1 + 0x4a4);
          iVar3 = FUN_00a7c990(&DAT_01ee11f4);
          if (((iVar3 != 0) || (iVar3 = FUN_00a81330(), iVar3 == 0)) ||
             ((iVar3 = FUN_00a7c800(), iVar3 == 0 || (iVar3 = FUN_00a12290(uVar2), iVar3 == 0)))) {
            FUN_009cca90(param_1,&DAT_016dd5d4,*(undefined4 *)(param_1 + 0x4a4));
          }
        }
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
        *(undefined4 *)(param_1 + 0x4a8) = 0;
        return 1;
      }
    }
  }
  return 0;
}

// 00F40990  esp50::vf00  size=72  [class]
undefined4 * __thiscall esp50::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspBase::vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


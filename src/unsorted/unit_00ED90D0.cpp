// src/unsorted/unit_00ED90D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED90D0..00ED9BD0, 3 functions

#include "mgrr.h"

// 00ED90D0  FUN_00ed90d0  size=179  [run]
undefined4 __fastcall FUN_00ed90d0(int param_1)

{
  int iVar1;
  uint local_c;
  
  if (*(int *)(param_1 + 0x5a4) == 0) {
    if ((*(uint *)(param_1 + 0x5a0) != 0) &&
       (local_c = (uint)(longlong)ROUND(*(float *)(param_1 + 0x528)),
       *(uint *)(param_1 + 0x5a0) <= local_c)) {
      return 1;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x45c) + -0xc + *(int *)(param_1 + 0x450) * 0xc;
    if (((*(float *)(param_1 + 0x590) !=
          *(float *)(*(int *)(param_1 + 0x45c) + -0xc + *(int *)(param_1 + 0x450) * 0xc)) ||
        (*(float *)(param_1 + 0x594) != *(float *)(iVar1 + 4))) ||
       (*(float *)(param_1 + 0x598) != *(float *)(iVar1 + 8))) {
      return 1;
    }
  }
  return 0;
}

// 00ED9190  FUN_00ed9190  size=2609  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ed9190(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = FUN_00f99ca0();
  uVar3 = *(uint *)(param_1 + 0x450);
  fVar4 = (float)(int)(uVar3 - 1);
  if ((int)(uVar3 - 1) < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  fVar4 = *(float *)(param_1 + 0x474) / fVar4;
  fVar1 = *(float *)(param_1 + 0x478);
  if (*(int *)(param_1 + 0x480) == 1) {
    fVar5 = (float)(int)uVar3;
    if ((int)uVar3 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    if (*(float *)(param_1 + 0x46c) - 1.0 < fVar5) {
      if (*(float *)(param_1 + 0x460) <= *(float *)(param_1 + 0x46c)) {
        local_8 = *(float *)(param_1 + 0x460);
      }
      else {
        local_8 = *(float *)(param_1 + 0x46c);
      }
      if (local_8 < 3.0) {
        local_8 = 3.0;
      }
      uVar10 = 0;
      fVar4 = ((fVar5 - _DAT_018d6c5c) / (_DAT_018d6c58 + local_8)) * fVar4;
      fVar5 = *(float *)(param_1 + 0x474) - 0.01;
      if (uVar3 == 0) {
        FUN_00f99d30();
        return;
      }
      pfVar8 = (float *)(iVar6 + 8);
      do {
        uVar9 = *(uint *)(param_1 + 0x38);
        local_8 = fVar1;
        local_4 = fVar1;
        if ((uVar9 & 0x40000) == 0) {
          if ((uVar9 & 0x80000) == 0) {
            local_4 = 0.0;
            local_c = (float)(int)uVar10;
            if ((int)uVar10 < 0) {
              local_c = local_c + 4.2949673e+09;
            }
          }
          else {
            local_8 = 0.0;
            local_c = (float)(int)uVar10;
            if ((int)uVar10 < 0) {
              local_c = local_c + 4.2949673e+09;
            }
          }
          local_c = local_c * fVar4;
          if (fVar5 < local_c) {
            local_c = fVar5;
          }
        }
        else {
          if ((uVar9 & 0x80000) == 0) {
            local_4 = 0.0;
            fVar2 = (float)(int)uVar10;
            if ((int)uVar10 < 0) {
              fVar2 = fVar2 + 4.2949673e+09;
            }
          }
          else {
            local_8 = 0.0;
            fVar2 = (float)(int)uVar10;
            if ((int)uVar10 < 0) {
              fVar2 = fVar2 + 4.2949673e+09;
            }
          }
          local_c = 1.0 - fVar2 * fVar4;
          if (local_c < 0.0) {
            local_c = 0.0;
          }
        }
        fVar2 = *(float *)(param_1 + 0x488);
        uVar10 = uVar10 + 1;
        *pfVar8 = local_8;
        pfVar8[1] = fVar2 + local_c;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-2] = local_4;
        pfVar8[-1] = fVar2 + local_c;
        pfVar8 = pfVar8 + 4;
      } while (uVar10 < uVar3);
      FUN_00f99d30();
      return;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x38);
  uVar9 = 0;
  if ((uVar10 & 0x40000) == 0) {
    if ((uVar10 & 0x80000) == 0) {
      if (3 < (int)uVar3) {
        iVar11 = 2;
        pfVar8 = (float *)(iVar6 + 0x14);
        do {
          fVar5 = (float)(int)uVar9;
          if ((int)uVar9 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-5] = 0.0;
          pfVar8[-4] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-3] = fVar1;
          pfVar8[-2] = fVar2 + fVar5 * fVar4;
          fVar5 = (float)(iVar11 + -1);
          if (iVar11 + -1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-1] = 0.0;
          *pfVar8 = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[1] = fVar1;
          pfVar8[2] = fVar2 + fVar5 * fVar4;
          fVar5 = (float)iVar11;
          if (iVar11 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[3] = 0.0;
          pfVar8[4] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[5] = fVar1;
          pfVar8[6] = fVar2 + fVar5 * fVar4;
          fVar5 = (float)(iVar11 + 1);
          if (iVar11 + 1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar9 = uVar9 + 4;
          fVar2 = *(float *)(param_1 + 0x488);
          iVar11 = iVar11 + 4;
          pfVar8[7] = 0.0;
          pfVar8[8] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[9] = fVar1;
          pfVar8[10] = fVar2 + fVar5 * fVar4;
          pfVar8 = pfVar8 + 0x10;
        } while (uVar9 < uVar3 - 3);
      }
      if (uVar9 < uVar3) {
        pfVar8 = (float *)(uVar9 * 0x10 + iVar6 + 4);
        do {
          fVar5 = (float)(int)uVar9;
          if ((int)uVar9 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar9 = uVar9 + 1;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-1] = 0.0;
          *pfVar8 = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[1] = fVar1;
          pfVar8[2] = fVar2 + fVar5 * fVar4;
          pfVar8 = pfVar8 + 4;
        } while (uVar9 < uVar3);
      }
    }
    else {
      if (3 < (int)uVar3) {
        iVar11 = 2;
        pfVar8 = (float *)(iVar6 + 0x1c);
        do {
          fVar5 = (float)(int)uVar9;
          if ((int)uVar9 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-5] = 0.0;
          pfVar8[-4] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-7] = fVar1;
          pfVar8[-6] = fVar2 + fVar5 * fVar4;
          fVar5 = (float)(iVar11 + -1);
          if (iVar11 + -1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-1] = 0.0;
          *pfVar8 = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[-3] = fVar1;
          pfVar8[-2] = fVar2 + fVar5 * fVar4;
          fVar5 = (float)iVar11;
          if (iVar11 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[3] = 0.0;
          pfVar8[4] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[1] = fVar1;
          pfVar8[2] = fVar2 + fVar5 * fVar4;
          fVar5 = (float)(iVar11 + 1);
          if (iVar11 + 1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar9 = uVar9 + 4;
          fVar2 = *(float *)(param_1 + 0x488);
          iVar11 = iVar11 + 4;
          pfVar8[7] = 0.0;
          pfVar8[8] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar8[5] = fVar1;
          pfVar8[6] = fVar2 + fVar5 * fVar4;
          pfVar8 = pfVar8 + 0x10;
        } while (uVar9 < uVar3 - 3);
      }
      if (uVar9 < uVar3) {
        puVar7 = (undefined4 *)(uVar9 * 0x10 + iVar6 + 8);
        do {
          fVar5 = (float)(int)uVar9;
          if ((int)uVar9 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar9 = uVar9 + 1;
          fVar2 = *(float *)(param_1 + 0x488);
          *puVar7 = 0;
          puVar7[1] = fVar2 + fVar5 * fVar4;
          fVar2 = *(float *)(param_1 + 0x488);
          puVar7[-2] = fVar1;
          puVar7[-1] = fVar2 + fVar5 * fVar4;
          puVar7 = puVar7 + 4;
        } while (uVar9 < uVar3);
        FUN_00f99d30();
        return;
      }
    }
    FUN_00f99d30();
    return;
  }
  if ((uVar10 & 0x80000) == 0) {
    if (3 < (int)uVar3) {
      iVar11 = 2;
      pfVar8 = (float *)(iVar6 + 0x14);
      do {
        fVar5 = (float)(int)uVar9;
        if ((int)uVar9 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-5] = 0.0;
        pfVar8[-4] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-3] = fVar1;
        pfVar8[-2] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)(iVar11 + -1);
        if (iVar11 + -1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-1] = 0.0;
        *pfVar8 = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[1] = fVar1;
        pfVar8[2] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)iVar11;
        if (iVar11 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[3] = 0.0;
        pfVar8[4] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[5] = fVar1;
        pfVar8[6] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)(iVar11 + 1);
        if (iVar11 + 1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar9 = uVar9 + 4;
        fVar2 = *(float *)(param_1 + 0x488);
        iVar11 = iVar11 + 4;
        pfVar8[7] = 0.0;
        pfVar8[8] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[9] = fVar1;
        pfVar8[10] = (fVar2 + 1.0) - fVar5 * fVar4;
        pfVar8 = pfVar8 + 0x10;
      } while (uVar9 < uVar3 - 3);
    }
    if (uVar9 < uVar3) {
      pfVar8 = (float *)(uVar9 * 0x10 + iVar6 + 4);
      do {
        fVar5 = (float)(int)uVar9;
        if ((int)uVar9 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar9 = uVar9 + 1;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-1] = 0.0;
        *pfVar8 = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[1] = fVar1;
        pfVar8[2] = (fVar2 + 1.0) - fVar5 * fVar4;
        pfVar8 = pfVar8 + 4;
      } while (uVar9 < uVar3);
      FUN_00f99d30();
      return;
    }
  }
  else {
    if (3 < (int)uVar3) {
      iVar11 = 2;
      pfVar8 = (float *)(iVar6 + 0x1c);
      do {
        fVar5 = (float)(int)uVar9;
        if ((int)uVar9 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-5] = 0.0;
        pfVar8[-4] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-7] = fVar1;
        pfVar8[-6] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)(iVar11 + -1);
        if (iVar11 + -1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-1] = 0.0;
        *pfVar8 = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[-3] = fVar1;
        pfVar8[-2] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)iVar11;
        if (iVar11 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[3] = 0.0;
        pfVar8[4] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[1] = fVar1;
        pfVar8[2] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar5 = (float)(iVar11 + 1);
        if (iVar11 + 1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar9 = uVar9 + 4;
        fVar2 = *(float *)(param_1 + 0x488);
        iVar11 = iVar11 + 4;
        pfVar8[7] = 0.0;
        pfVar8[8] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar8[5] = fVar1;
        pfVar8[6] = (fVar2 + 1.0) - fVar5 * fVar4;
        pfVar8 = pfVar8 + 0x10;
      } while (uVar9 < uVar3 - 3);
    }
    if (uVar9 < uVar3) {
      puVar7 = (undefined4 *)(iVar6 + 8 + uVar9 * 0x10);
      do {
        fVar5 = (float)(int)uVar9;
        if ((int)uVar9 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar9 = uVar9 + 1;
        fVar2 = *(float *)(param_1 + 0x488);
        *puVar7 = 0;
        puVar7[1] = (fVar2 + 1.0) - fVar5 * fVar4;
        fVar2 = *(float *)(param_1 + 0x488);
        puVar7[-2] = fVar1;
        puVar7[-1] = (fVar2 + 1.0) - fVar5 * fVar4;
        puVar7 = puVar7 + 4;
      } while (uVar9 < uVar3);
    }
  }
  FUN_00f99d30();
  return;
}

// 00ED9BD0  FUN_00ed9bd0  size=1178  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ed9bd0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar7 = (float *)FUN_00f99ca0();
  iVar4 = *(int *)(param_1 + 0x450);
  iVar8 = (iVar4 + -4) * *(int *)(param_1 + 0x454);
  fVar3 = (float)(iVar8 + 1);
  if (iVar8 + 1 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar3 = *(float *)(param_1 + 0x474) / fVar3;
  fVar1 = *(float *)(param_1 + 0x478);
  if (*(int *)(param_1 + 0x480) == 1) {
    fVar2 = (float)iVar4;
    if (iVar4 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    if (*(float *)(param_1 + 0x460) - 1.0 < fVar2) {
      local_4 = *(float *)(param_1 + 0x460);
      if (local_4 < 3.0) {
        local_4 = 3.0;
      }
      uVar9 = 0;
      fVar3 = ((fVar2 - _DAT_018d6c64) / (_DAT_018d6c60 + local_4)) * fVar3;
      fVar2 = *(float *)(param_1 + 0x474) - 0.01;
      if (iVar8 == -2) {
        FUN_00f99d30();
        return;
      }
      pfVar7 = pfVar7 + 2;
      do {
        uVar5 = *(uint *)(param_1 + 0x38);
        local_8 = fVar1;
        local_4 = fVar1;
        if ((uVar5 & 0x40000) == 0) {
          if ((uVar5 & 0x80000) == 0) {
            local_4 = 0.0;
            local_c = (float)(int)uVar9;
            if ((int)uVar9 < 0) {
              local_c = local_c + 4.2949673e+09;
            }
          }
          else {
            local_8 = 0.0;
            local_c = (float)(int)uVar9;
            if ((int)uVar9 < 0) {
              local_c = local_c + 4.2949673e+09;
            }
          }
          local_c = local_c * fVar3;
          if (fVar2 < local_c) {
            local_c = fVar2;
          }
        }
        else {
          if ((uVar5 & 0x80000) == 0) {
            local_4 = 0.0;
            fVar6 = (float)(int)uVar9;
            if ((int)uVar9 < 0) {
              fVar6 = fVar6 + 4.2949673e+09;
            }
          }
          else {
            local_8 = 0.0;
            fVar6 = (float)(int)uVar9;
            if ((int)uVar9 < 0) {
              fVar6 = fVar6 + 4.2949673e+09;
            }
          }
          local_c = 1.0 - fVar6 * fVar3;
          if (local_c < 0.0) {
            local_c = 0.0;
          }
        }
        uVar9 = uVar9 + 1;
        *pfVar7 = local_8;
        pfVar7[1] = local_c;
        pfVar7[-2] = local_4;
        pfVar7[-1] = local_c;
        pfVar7 = pfVar7 + 4;
      } while (uVar9 < iVar8 + 2U);
      FUN_00f99d30();
      return;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x38);
  if ((uVar9 & 0x40000) == 0) {
    fVar3 = 1.0 - fVar3;
    fVar2 = *(float *)(param_1 + 0x4a8) + fVar3;
    if ((uVar9 & 0x80000) == 0) {
      *pfVar7 = *(float *)(param_1 + 0x4ac);
      pfVar7[1] = fVar2;
      fVar2 = *(float *)(param_1 + 0x4a8);
      pfVar7[2] = fVar1 + *(float *)(param_1 + 0x4ac);
      pfVar7[3] = fVar3 + fVar2;
      fVar3 = *(float *)(param_1 + 0x4a8);
      pfVar7[4] = *(float *)(param_1 + 0x4ac);
      pfVar7[5] = fVar3 + 1.0;
      fVar3 = *(float *)(param_1 + 0x4a8) + 1.0;
      goto LAB_00ed9f44;
    }
    pfVar7[2] = -*(float *)(param_1 + 0x4ac);
    pfVar7[3] = fVar2;
    fVar2 = *(float *)(param_1 + 0x4a8);
    *pfVar7 = fVar1 - *(float *)(param_1 + 0x4ac);
    pfVar7[1] = fVar3 + fVar2;
    fVar3 = *(float *)(param_1 + 0x4a8);
    pfVar7[6] = -*(float *)(param_1 + 0x4ac);
    pfVar7[7] = fVar3 + 1.0;
    fVar3 = *(float *)(param_1 + 0x4a8) + 1.0;
  }
  else {
    fVar2 = fVar3 - *(float *)(param_1 + 0x4a8);
    if ((uVar9 & 0x80000) == 0) {
      *pfVar7 = *(float *)(param_1 + 0x4ac);
      pfVar7[1] = fVar2;
      fVar2 = *(float *)(param_1 + 0x4a8);
      pfVar7[2] = fVar1 + *(float *)(param_1 + 0x4ac);
      pfVar7[3] = fVar3 - fVar2;
      fVar3 = *(float *)(param_1 + 0x4a8);
      pfVar7[4] = *(float *)(param_1 + 0x4ac);
      pfVar7[5] = -fVar3;
      fVar3 = -*(float *)(param_1 + 0x4a8);
LAB_00ed9f44:
      pfVar7[6] = fVar1 + *(float *)(param_1 + 0x4ac);
      pfVar7[7] = fVar3;
      FUN_00f99d30();
      return;
    }
    pfVar7[2] = -*(float *)(param_1 + 0x4ac);
    pfVar7[3] = fVar2;
    fVar2 = *(float *)(param_1 + 0x4a8);
    *pfVar7 = fVar1 - *(float *)(param_1 + 0x4ac);
    pfVar7[1] = fVar3 - fVar2;
    fVar3 = *(float *)(param_1 + 0x4a8);
    pfVar7[6] = -*(float *)(param_1 + 0x4ac);
    pfVar7[7] = -fVar3;
    fVar3 = -*(float *)(param_1 + 0x4a8);
  }
  pfVar7[4] = fVar1 - *(float *)(param_1 + 0x4ac);
  pfVar7[5] = fVar3;
  FUN_00f99d30();
  return;
}


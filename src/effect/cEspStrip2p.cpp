// src/effect/cEspStrip2p.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED1D50..00F2E1E0, 9 functions

#include "mgrr.h"
#include "cEspStrip2p.h"

// 00ED1D50  cEspStrip2p::vf00  size=30  [class]
undefined4 __thiscall cEspStrip2p::vf00(undefined4 param_1,byte param_2)

{
  Spline<Hw::cVec4>::Spline<Hw::cVec4>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ED6550  cEspStrip2p::vf1C  size=2714  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEspStrip2p::vf1C(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float local_c;
  float local_8;
  float local_4;
  
  iVar13 = *(int *)(param_1 + 0x450);
  iVar4 = *(int *)(param_1 + 0x458);
  iVar10 = (iVar13 + -4) * *(int *)(param_1 + 0x454);
  uVar11 = iVar10 + 2;
  if (*(float *)(param_1 + 0x528) == 0.0) {
    if (uVar11 != 2) {
      fVar1 = *(float *)(param_1 + 0x538);
      iVar6 = iVar10;
      goto LAB_00ed65b9;
    }
    fVar1 = *(float *)(param_1 + 0x538);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x538);
    iVar6 = iVar10 + 1;
LAB_00ed65b9:
    fVar2 = (float)iVar6;
    if (iVar6 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar1 = fVar1 / fVar2;
  }
  fVar2 = *(float *)(param_1 + 0x53c);
  if (*(int *)(param_1 + 0x570) == 1) {
    fVar5 = (float)iVar13;
    if (iVar13 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    if (*(float *)(param_1 + 0x528) - 1.0 < fVar5) {
      local_4 = *(float *)(param_1 + 0x528);
      if (local_4 < 3.0) {
        local_4 = 3.0;
      }
      uVar12 = 0;
      fVar1 = ((fVar5 - _DAT_018d6c4c) / (_DAT_018d6c48 + local_4)) * fVar1;
      fVar5 = *(float *)(param_1 + 0x538) - 0.01;
      if (uVar11 != 0) {
        pfVar8 = (float *)(iVar4 + 8);
        do {
          uVar9 = *(uint *)(param_1 + 0x38);
          local_8 = fVar2;
          local_4 = fVar2;
          if ((uVar9 & 0x40000) == 0) {
            if ((uVar9 & 0x80000) == 0) {
              local_4 = 0.0;
              local_c = (float)(int)uVar12;
              if ((int)uVar12 < 0) {
                local_c = local_c + 4.2949673e+09;
              }
            }
            else {
              local_8 = 0.0;
              local_c = (float)(int)uVar12;
              if ((int)uVar12 < 0) {
                local_c = local_c + 4.2949673e+09;
              }
            }
            local_c = local_c * fVar1;
            if (fVar5 < local_c) {
              local_c = fVar5;
            }
          }
          else {
            if ((uVar9 & 0x80000) == 0) {
              local_4 = 0.0;
              fVar3 = (float)(int)uVar12;
              if ((int)uVar12 < 0) {
                fVar3 = fVar3 + 4.2949673e+09;
              }
            }
            else {
              local_8 = 0.0;
              fVar3 = (float)(int)uVar12;
              if ((int)uVar12 < 0) {
                fVar3 = fVar3 + 4.2949673e+09;
              }
            }
            local_c = 1.0 - fVar3 * fVar1;
            if (local_c < 0.0) {
              local_c = 0.0;
            }
          }
          fVar3 = *(float *)(param_1 + 0x578);
          uVar12 = uVar12 + 1;
          *pfVar8 = *(float *)(param_1 + 0x57c) + local_8;
          pfVar8[1] = fVar3 + local_c;
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[-2] = *(float *)(param_1 + 0x57c) + local_4;
          pfVar8[-1] = fVar3 + local_c;
          pfVar8 = pfVar8 + 4;
        } while (uVar12 < uVar11);
      }
      goto LAB_00ed6814;
    }
  }
  uVar12 = *(uint *)(param_1 + 0x38);
  uVar9 = 0;
  if ((uVar12 & 0x40000) == 0) {
    if ((uVar12 & 0x80000) == 0) {
      if (3 < (int)uVar11) {
        iVar13 = 2;
        pfVar8 = (float *)(iVar4 + 0x14);
        do {
          fVar5 = (float)(int)uVar9;
          if ((int)uVar9 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[-5] = *(float *)(param_1 + 0x57c);
          pfVar8[-4] = fVar3 + fVar5 * fVar1;
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[-3] = *(float *)(param_1 + 0x57c) + fVar2;
          pfVar8[-2] = fVar5 * fVar1 + fVar3;
          fVar5 = (float)(iVar13 + -1);
          if (iVar13 + -1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[-1] = *(float *)(param_1 + 0x57c);
          *pfVar8 = fVar3 + fVar5 * fVar1;
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[1] = *(float *)(param_1 + 0x57c) + fVar2;
          pfVar8[2] = fVar5 * fVar1 + fVar3;
          fVar5 = (float)iVar13;
          if (iVar13 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[3] = *(float *)(param_1 + 0x57c);
          pfVar8[4] = fVar3 + fVar5 * fVar1;
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[5] = *(float *)(param_1 + 0x57c) + fVar2;
          pfVar8[6] = fVar5 * fVar1 + fVar3;
          fVar5 = (float)(iVar13 + 1);
          if (iVar13 + 1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar9 = uVar9 + 4;
          fVar3 = *(float *)(param_1 + 0x578);
          iVar13 = iVar13 + 4;
          pfVar8[7] = *(float *)(param_1 + 0x57c);
          pfVar8[8] = fVar3 + fVar5 * fVar1;
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[9] = *(float *)(param_1 + 0x57c) + fVar2;
          pfVar8[10] = fVar5 * fVar1 + fVar3;
          pfVar8 = pfVar8 + 0x10;
        } while (uVar9 < iVar10 - 1U);
      }
      if (uVar9 < uVar11) {
        pfVar8 = (float *)(uVar9 * 0x10 + iVar4 + 4);
        do {
          fVar5 = (float)(int)uVar9;
          if ((int)uVar9 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar9 = uVar9 + 1;
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[-1] = *(float *)(param_1 + 0x57c);
          *pfVar8 = fVar3 + fVar5 * fVar1;
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[1] = *(float *)(param_1 + 0x57c) + fVar2;
          pfVar8[2] = fVar5 * fVar1 + fVar3;
          pfVar8 = pfVar8 + 4;
        } while (uVar9 < uVar11);
      }
    }
    else {
      if (3 < (int)uVar11) {
        iVar13 = 2;
        pfVar8 = (float *)(iVar4 + 0x1c);
        do {
          fVar5 = (float)(int)uVar9;
          if ((int)uVar9 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[-5] = *(float *)(param_1 + 0x57c);
          pfVar8[-4] = fVar3 + fVar5 * fVar1;
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[-7] = *(float *)(param_1 + 0x57c) + fVar2;
          pfVar8[-6] = fVar5 * fVar1 + fVar3;
          fVar5 = (float)(iVar13 + -1);
          if (iVar13 + -1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[-1] = *(float *)(param_1 + 0x57c);
          *pfVar8 = fVar3 + fVar5 * fVar1;
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[-3] = *(float *)(param_1 + 0x57c) + fVar2;
          pfVar8[-2] = fVar5 * fVar1 + fVar3;
          fVar5 = (float)iVar13;
          if (iVar13 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[3] = *(float *)(param_1 + 0x57c);
          pfVar8[4] = fVar3 + fVar5 * fVar1;
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[1] = *(float *)(param_1 + 0x57c) + fVar2;
          pfVar8[2] = fVar5 * fVar1 + fVar3;
          fVar5 = (float)(iVar13 + 1);
          if (iVar13 + 1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar9 = uVar9 + 4;
          fVar3 = *(float *)(param_1 + 0x578);
          iVar13 = iVar13 + 4;
          pfVar8[7] = *(float *)(param_1 + 0x57c);
          pfVar8[8] = fVar3 + fVar5 * fVar1;
          fVar3 = *(float *)(param_1 + 0x578);
          pfVar8[5] = *(float *)(param_1 + 0x57c) + fVar2;
          pfVar8[6] = fVar5 * fVar1 + fVar3;
          pfVar8 = pfVar8 + 0x10;
        } while (uVar9 < iVar10 - 1U);
      }
      if (uVar9 < uVar11) {
        puVar7 = (undefined4 *)(uVar9 * 0x10 + iVar4 + 8);
        do {
          fVar5 = (float)(int)uVar9;
          if ((int)uVar9 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar9 = uVar9 + 1;
          fVar3 = *(float *)(param_1 + 0x578);
          *puVar7 = *(undefined4 *)(param_1 + 0x57c);
          puVar7[1] = fVar3 + fVar5 * fVar1;
          fVar3 = *(float *)(param_1 + 0x578);
          puVar7[-2] = *(float *)(param_1 + 0x57c) + fVar2;
          puVar7[-1] = fVar5 * fVar1 + fVar3;
          puVar7 = puVar7 + 4;
        } while (uVar9 < uVar11);
      }
    }
  }
  else if ((uVar12 & 0x80000) == 0) {
    if (3 < (int)uVar11) {
      iVar13 = 2;
      pfVar8 = (float *)(iVar4 + 0x14);
      do {
        fVar5 = (float)(int)uVar9;
        if ((int)uVar9 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[-5] = *(float *)(param_1 + 0x57c);
        pfVar8[-4] = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[-3] = *(float *)(param_1 + 0x57c) + fVar2;
        pfVar8[-2] = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar5 = (float)(iVar13 + -1);
        if (iVar13 + -1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[-1] = *(float *)(param_1 + 0x57c);
        *pfVar8 = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[1] = *(float *)(param_1 + 0x57c) + fVar2;
        pfVar8[2] = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar5 = (float)iVar13;
        if (iVar13 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[3] = *(float *)(param_1 + 0x57c);
        pfVar8[4] = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[5] = *(float *)(param_1 + 0x57c) + fVar2;
        pfVar8[6] = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar5 = (float)(iVar13 + 1);
        if (iVar13 + 1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar9 = uVar9 + 4;
        fVar3 = *(float *)(param_1 + 0x578);
        iVar13 = iVar13 + 4;
        pfVar8[7] = *(float *)(param_1 + 0x57c);
        pfVar8[8] = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[9] = *(float *)(param_1 + 0x57c) + fVar2;
        pfVar8[10] = (fVar3 + 1.0) - fVar5 * fVar1;
        pfVar8 = pfVar8 + 0x10;
      } while (uVar9 < iVar10 - 1U);
    }
    if (uVar9 < uVar11) {
      pfVar8 = (float *)(uVar9 * 0x10 + iVar4 + 4);
      do {
        fVar5 = (float)(int)uVar9;
        if ((int)uVar9 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar9 = uVar9 + 1;
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[-1] = *(float *)(param_1 + 0x57c);
        *pfVar8 = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[1] = *(float *)(param_1 + 0x57c) + fVar2;
        pfVar8[2] = (fVar3 + 1.0) - fVar5 * fVar1;
        pfVar8 = pfVar8 + 4;
      } while (uVar9 < uVar11);
    }
  }
  else {
    if (3 < (int)uVar11) {
      iVar13 = 2;
      pfVar8 = (float *)(iVar4 + 0x1c);
      do {
        fVar5 = (float)(int)uVar9;
        if ((int)uVar9 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[-5] = *(float *)(param_1 + 0x57c);
        pfVar8[-4] = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[-7] = *(float *)(param_1 + 0x57c) + fVar2;
        pfVar8[-6] = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar5 = (float)(iVar13 + -1);
        if (iVar13 + -1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[-1] = *(float *)(param_1 + 0x57c);
        *pfVar8 = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[-3] = *(float *)(param_1 + 0x57c) + fVar2;
        pfVar8[-2] = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar5 = (float)iVar13;
        if (iVar13 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[3] = *(float *)(param_1 + 0x57c);
        pfVar8[4] = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[1] = *(float *)(param_1 + 0x57c) + fVar2;
        pfVar8[2] = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar5 = (float)(iVar13 + 1);
        if (iVar13 + 1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar9 = uVar9 + 4;
        fVar3 = *(float *)(param_1 + 0x578);
        iVar13 = iVar13 + 4;
        pfVar8[7] = *(float *)(param_1 + 0x57c);
        pfVar8[8] = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar3 = *(float *)(param_1 + 0x578);
        pfVar8[5] = *(float *)(param_1 + 0x57c) + fVar2;
        pfVar8[6] = (fVar3 + 1.0) - fVar5 * fVar1;
        pfVar8 = pfVar8 + 0x10;
      } while (uVar9 < iVar10 - 1U);
    }
    if (uVar9 < uVar11) {
      puVar7 = (undefined4 *)(uVar9 * 0x10 + iVar4 + 8);
      do {
        fVar5 = (float)(int)uVar9;
        if ((int)uVar9 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar9 = uVar9 + 1;
        fVar3 = *(float *)(param_1 + 0x578);
        *puVar7 = *(undefined4 *)(param_1 + 0x57c);
        puVar7[1] = (fVar3 + 1.0) - fVar5 * fVar1;
        fVar3 = *(float *)(param_1 + 0x578);
        puVar7[-2] = *(float *)(param_1 + 0x57c) + fVar2;
        puVar7[-1] = (fVar3 + 1.0) - fVar5 * fVar1;
        puVar7 = puVar7 + 4;
      } while (uVar9 < uVar11);
    }
  }
LAB_00ed6814:
  FUN_00f99d50(iVar4,8,uVar11 * 2);
  return;
}

// 00ED6FF0  cEspStrip2p::vf24  size=2926  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEspStrip2p::vf24(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_8;
  int local_4;
  
  iVar7 = *(int *)(param_1 + 0x458);
  iVar12 = *(int *)(param_1 + 0x450);
  iVar14 = (iVar12 + -4) * *(int *)(param_1 + 0x454);
  uVar15 = iVar14 + 2;
  if (*(float *)(param_1 + 0x528) == 0.0) {
    if (uVar15 != 2) {
      fVar1 = *(float *)(param_1 + 0x538);
      iVar8 = iVar14;
      goto LAB_00ed705e;
    }
    fVar1 = *(float *)(param_1 + 0x538);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x538);
    iVar8 = iVar14 + 1;
LAB_00ed705e:
    fVar9 = (float)iVar8;
    if (iVar8 < 0) {
      fVar9 = fVar9 + 4.2949673e+09;
    }
    fVar1 = fVar1 / fVar9;
  }
  iVar8 = *(int *)(param_1 + 0x540);
  local_20 = 0;
  fVar9 = 1.0 / (float)iVar8;
  local_1c = 0.0;
  local_24 = fVar9;
  if (*(int *)(param_1 + 0x570) == 1) {
    fVar6 = (float)iVar12;
    if (iVar12 < 0) {
      fVar6 = fVar6 + 4.2949673e+09;
    }
    if (*(float *)(param_1 + 0x528) < fVar6) {
      local_18 = *(float *)(param_1 + 0x528);
      if (local_18 < 1.0) {
        local_18 = 1.0;
      }
      fVar1 = ((fVar6 - _DAT_01ee11fc) / (_DAT_01ee11f8 + local_18)) * fVar1;
      local_4 = 0;
      fVar6 = *(float *)(param_1 + 0x538) - 0.01;
      if (0 < iVar8) {
        pfVar10 = (float *)(iVar7 + 0x14);
        do {
          fVar2 = *(float *)(param_1 + 0x53c);
          uVar13 = 0;
          if ((*(uint *)(param_1 + 0x38) & 0x40000) == 0) {
            if (3 < (int)uVar15) {
              fVar5 = fVar2 * local_24;
              iVar12 = 2;
              pfVar11 = pfVar10;
              do {
                fVar3 = (float)(int)uVar13;
                if ((int)uVar13 < 0) {
                  fVar3 = fVar3 + 4.2949673e+09;
                }
                fVar4 = fVar3 * fVar1;
                if (fVar6 < fVar3 * fVar1) {
                  fVar4 = fVar6;
                }
                fVar3 = *(float *)(param_1 + 0x578);
                pfVar11[-5] = local_1c + *(float *)(param_1 + 0x57c);
                pfVar11[-4] = fVar3 + fVar4;
                fVar3 = *(float *)(param_1 + 0x578);
                pfVar11[-3] = *(float *)(param_1 + 0x57c) + fVar5;
                pfVar11[-2] = fVar4 + fVar3;
                fVar3 = (float)(iVar12 + -1);
                if (iVar12 + -1 < 0) {
                  fVar3 = fVar3 + 4.2949673e+09;
                }
                fVar4 = fVar3 * fVar1;
                if (fVar6 < fVar3 * fVar1) {
                  fVar4 = fVar6;
                }
                fVar3 = *(float *)(param_1 + 0x578);
                pfVar11[-1] = local_1c + *(float *)(param_1 + 0x57c);
                *pfVar11 = fVar3 + fVar4;
                fVar3 = *(float *)(param_1 + 0x578);
                pfVar11[1] = *(float *)(param_1 + 0x57c) + fVar5;
                pfVar11[2] = fVar4 + fVar3;
                fVar3 = (float)iVar12;
                if (iVar12 < 0) {
                  fVar3 = fVar3 + 4.2949673e+09;
                }
                fVar4 = fVar3 * fVar1;
                if (fVar6 < fVar3 * fVar1) {
                  fVar4 = fVar6;
                }
                fVar3 = *(float *)(param_1 + 0x578);
                pfVar11[3] = local_1c + *(float *)(param_1 + 0x57c);
                pfVar11[4] = fVar3 + fVar4;
                fVar3 = *(float *)(param_1 + 0x578);
                pfVar11[5] = *(float *)(param_1 + 0x57c) + fVar5;
                pfVar11[6] = fVar4 + fVar3;
                fVar3 = (float)(iVar12 + 1);
                if (iVar12 + 1 < 0) {
                  fVar3 = fVar3 + 4.2949673e+09;
                }
                fVar4 = fVar3 * fVar1;
                if (fVar6 < fVar3 * fVar1) {
                  fVar4 = fVar6;
                }
                fVar3 = *(float *)(param_1 + 0x578);
                uVar13 = uVar13 + 4;
                iVar12 = iVar12 + 4;
                pfVar11[7] = local_1c + *(float *)(param_1 + 0x57c);
                pfVar11[8] = fVar3 + fVar4;
                fVar3 = *(float *)(param_1 + 0x578);
                pfVar11[9] = *(float *)(param_1 + 0x57c) + fVar5;
                pfVar11[10] = fVar4 + fVar3;
                pfVar11 = pfVar11 + 0x10;
              } while (uVar13 < iVar14 - 1U);
            }
            if (uVar13 < uVar15) {
              pfVar11 = (float *)(iVar7 + 4 + (local_20 + uVar13 * 2) * 8);
              do {
                fVar5 = (float)(int)uVar13;
                if ((int)uVar13 < 0) {
                  fVar5 = fVar5 + 4.2949673e+09;
                }
                fVar3 = fVar5 * fVar1;
                if (fVar6 < fVar5 * fVar1) {
                  fVar3 = fVar6;
                }
                fVar5 = *(float *)(param_1 + 0x578);
                uVar13 = uVar13 + 1;
                pfVar11[-1] = local_1c + *(float *)(param_1 + 0x57c);
                *pfVar11 = fVar5 + fVar3;
                fVar5 = *(float *)(param_1 + 0x578);
                pfVar11[1] = *(float *)(param_1 + 0x57c) + fVar2 * local_24;
                pfVar11[2] = fVar3 + fVar5;
                pfVar11 = pfVar11 + 4;
              } while (uVar13 < uVar15);
            }
          }
          else {
            if (3 < (int)uVar15) {
              fVar5 = fVar2 * local_24;
              iVar12 = 2;
              pfVar11 = pfVar10;
              do {
                fVar3 = (float)(int)uVar13;
                if ((int)uVar13 < 0) {
                  fVar3 = fVar3 + 4.2949673e+09;
                }
                fVar3 = 1.0 - fVar3 * fVar1;
                if (fVar3 < 0.0) {
                  fVar3 = 0.0;
                }
                fVar4 = *(float *)(param_1 + 0x578);
                pfVar11[-5] = local_1c + *(float *)(param_1 + 0x57c);
                pfVar11[-4] = fVar4 + fVar3;
                fVar4 = *(float *)(param_1 + 0x578);
                pfVar11[-3] = *(float *)(param_1 + 0x57c) + fVar5;
                pfVar11[-2] = fVar3 + fVar4;
                fVar3 = (float)(iVar12 + -1);
                if (iVar12 + -1 < 0) {
                  fVar3 = fVar3 + 4.2949673e+09;
                }
                fVar3 = 1.0 - fVar3 * fVar1;
                if (fVar3 < 0.0) {
                  fVar3 = 0.0;
                }
                fVar4 = *(float *)(param_1 + 0x578);
                pfVar11[-1] = local_1c + *(float *)(param_1 + 0x57c);
                *pfVar11 = fVar4 + fVar3;
                fVar4 = *(float *)(param_1 + 0x578);
                pfVar11[1] = *(float *)(param_1 + 0x57c) + fVar5;
                pfVar11[2] = fVar3 + fVar4;
                fVar3 = (float)iVar12;
                if (iVar12 < 0) {
                  fVar3 = fVar3 + 4.2949673e+09;
                }
                fVar3 = 1.0 - fVar3 * fVar1;
                if (fVar3 < 0.0) {
                  fVar3 = 0.0;
                }
                fVar4 = *(float *)(param_1 + 0x578);
                pfVar11[3] = local_1c + *(float *)(param_1 + 0x57c);
                pfVar11[4] = fVar4 + fVar3;
                fVar4 = *(float *)(param_1 + 0x578);
                pfVar11[5] = *(float *)(param_1 + 0x57c) + fVar5;
                pfVar11[6] = fVar3 + fVar4;
                fVar3 = (float)(iVar12 + 1);
                if (iVar12 + 1 < 0) {
                  fVar3 = fVar3 + 4.2949673e+09;
                }
                fVar3 = 1.0 - fVar3 * fVar1;
                if (fVar3 < 0.0) {
                  fVar3 = 0.0;
                }
                fVar4 = *(float *)(param_1 + 0x578);
                uVar13 = uVar13 + 4;
                iVar12 = iVar12 + 4;
                pfVar11[7] = local_1c + *(float *)(param_1 + 0x57c);
                pfVar11[8] = fVar4 + fVar3;
                fVar4 = *(float *)(param_1 + 0x578);
                pfVar11[9] = *(float *)(param_1 + 0x57c) + fVar5;
                pfVar11[10] = fVar3 + fVar4;
                pfVar11 = pfVar11 + 0x10;
              } while (uVar13 < iVar14 - 1U);
            }
            if (uVar13 < uVar15) {
              pfVar11 = (float *)(iVar7 + 4 + (local_20 + uVar13 * 2) * 8);
              do {
                fVar5 = (float)(int)uVar13;
                if ((int)uVar13 < 0) {
                  fVar5 = fVar5 + 4.2949673e+09;
                }
                fVar5 = 1.0 - fVar5 * fVar1;
                if (fVar5 < 0.0) {
                  fVar5 = 0.0;
                }
                fVar3 = *(float *)(param_1 + 0x578);
                uVar13 = uVar13 + 1;
                pfVar11[-1] = local_1c + *(float *)(param_1 + 0x57c);
                *pfVar11 = fVar3 + fVar5;
                fVar3 = *(float *)(param_1 + 0x578);
                pfVar11[1] = *(float *)(param_1 + 0x57c) + fVar2 * local_24;
                pfVar11[2] = fVar5 + fVar3;
                pfVar11 = pfVar11 + 4;
              } while (uVar13 < uVar15);
            }
          }
          pfVar10 = pfVar10 + (iVar14 + 3) * 4;
          local_1c = fVar9 + local_1c;
          local_20 = local_20 + iVar14 + 4 + uVar15;
          local_4 = local_4 + 1;
          local_24 = fVar9 + local_24;
        } while (local_4 < *(int *)(param_1 + 0x540));
      }
      goto LAB_00ed7b36;
    }
  }
  local_8 = 0;
  if (0 < iVar8) {
    pfVar10 = (float *)(iVar7 + 0x14);
    do {
      fVar6 = *(float *)(param_1 + 0x53c);
      uVar13 = 0;
      if ((*(uint *)(param_1 + 0x38) & 0x40000) == 0) {
        if (3 < (int)uVar15) {
          fVar2 = fVar6 * local_24;
          iVar12 = 2;
          pfVar11 = pfVar10;
          do {
            fVar5 = (float)(int)uVar13;
            if ((int)uVar13 < 0) {
              fVar5 = fVar5 + 4.2949673e+09;
            }
            fVar3 = *(float *)(param_1 + 0x578);
            pfVar11[-5] = local_1c + *(float *)(param_1 + 0x57c);
            pfVar11[-4] = fVar3 + fVar5 * fVar1;
            fVar3 = *(float *)(param_1 + 0x578);
            pfVar11[-3] = *(float *)(param_1 + 0x57c) + fVar2;
            pfVar11[-2] = fVar5 * fVar1 + fVar3;
            fVar5 = (float)(iVar12 + -1);
            if (iVar12 + -1 < 0) {
              fVar5 = fVar5 + 4.2949673e+09;
            }
            fVar3 = *(float *)(param_1 + 0x578);
            pfVar11[-1] = local_1c + *(float *)(param_1 + 0x57c);
            *pfVar11 = fVar3 + fVar5 * fVar1;
            fVar3 = *(float *)(param_1 + 0x578);
            pfVar11[1] = *(float *)(param_1 + 0x57c) + fVar2;
            pfVar11[2] = fVar5 * fVar1 + fVar3;
            fVar5 = (float)iVar12;
            if (iVar12 < 0) {
              fVar5 = fVar5 + 4.2949673e+09;
            }
            fVar3 = *(float *)(param_1 + 0x578);
            pfVar11[3] = local_1c + *(float *)(param_1 + 0x57c);
            pfVar11[4] = fVar3 + fVar5 * fVar1;
            fVar3 = *(float *)(param_1 + 0x578);
            pfVar11[5] = *(float *)(param_1 + 0x57c) + fVar2;
            pfVar11[6] = fVar5 * fVar1 + fVar3;
            fVar5 = (float)(iVar12 + 1);
            if (iVar12 + 1 < 0) {
              fVar5 = fVar5 + 4.2949673e+09;
            }
            uVar13 = uVar13 + 4;
            fVar3 = *(float *)(param_1 + 0x578);
            iVar12 = iVar12 + 4;
            pfVar11[7] = local_1c + *(float *)(param_1 + 0x57c);
            pfVar11[8] = fVar3 + fVar5 * fVar1;
            fVar3 = *(float *)(param_1 + 0x578);
            pfVar11[9] = *(float *)(param_1 + 0x57c) + fVar2;
            pfVar11[10] = fVar5 * fVar1 + fVar3;
            pfVar11 = pfVar11 + 0x10;
          } while (uVar13 < iVar14 - 1U);
        }
        if (uVar13 < uVar15) {
          pfVar11 = (float *)(iVar7 + 4 + (local_20 + uVar13 * 2) * 8);
          do {
            fVar2 = (float)(int)uVar13;
            if ((int)uVar13 < 0) {
              fVar2 = fVar2 + 4.2949673e+09;
            }
            uVar13 = uVar13 + 1;
            fVar5 = *(float *)(param_1 + 0x578);
            pfVar11[-1] = local_1c + *(float *)(param_1 + 0x57c);
            *pfVar11 = fVar5 + fVar2 * fVar1;
            fVar5 = *(float *)(param_1 + 0x578);
            pfVar11[1] = *(float *)(param_1 + 0x57c) + fVar6 * local_24;
            pfVar11[2] = fVar2 * fVar1 + fVar5;
            pfVar11 = pfVar11 + 4;
          } while (uVar13 < uVar15);
        }
      }
      else {
        if (3 < (int)uVar15) {
          fVar2 = fVar6 * local_24;
          iVar12 = 2;
          pfVar11 = pfVar10;
          do {
            fVar5 = (float)(int)uVar13;
            if ((int)uVar13 < 0) {
              fVar5 = fVar5 + 4.2949673e+09;
            }
            fVar3 = 1.0 - fVar5 * fVar1;
            fVar5 = *(float *)(param_1 + 0x578);
            pfVar11[-5] = local_1c + *(float *)(param_1 + 0x57c);
            pfVar11[-4] = fVar5 + fVar3;
            fVar5 = *(float *)(param_1 + 0x578);
            pfVar11[-3] = *(float *)(param_1 + 0x57c) + fVar2;
            pfVar11[-2] = fVar3 + fVar5;
            fVar5 = (float)(iVar12 + -1);
            if (iVar12 + -1 < 0) {
              fVar5 = fVar5 + 4.2949673e+09;
            }
            fVar3 = 1.0 - fVar5 * fVar1;
            fVar5 = *(float *)(param_1 + 0x578);
            pfVar11[-1] = local_1c + *(float *)(param_1 + 0x57c);
            *pfVar11 = fVar5 + fVar3;
            fVar5 = *(float *)(param_1 + 0x578);
            pfVar11[1] = *(float *)(param_1 + 0x57c) + fVar2;
            pfVar11[2] = fVar3 + fVar5;
            fVar5 = (float)iVar12;
            if (iVar12 < 0) {
              fVar5 = fVar5 + 4.2949673e+09;
            }
            fVar3 = 1.0 - fVar5 * fVar1;
            fVar5 = *(float *)(param_1 + 0x578);
            pfVar11[3] = local_1c + *(float *)(param_1 + 0x57c);
            pfVar11[4] = fVar5 + fVar3;
            fVar5 = *(float *)(param_1 + 0x578);
            pfVar11[5] = *(float *)(param_1 + 0x57c) + fVar2;
            pfVar11[6] = fVar3 + fVar5;
            fVar5 = (float)(iVar12 + 1);
            if (iVar12 + 1 < 0) {
              fVar5 = fVar5 + 4.2949673e+09;
            }
            uVar13 = uVar13 + 4;
            iVar12 = iVar12 + 4;
            fVar3 = 1.0 - fVar5 * fVar1;
            fVar5 = *(float *)(param_1 + 0x578);
            pfVar11[7] = local_1c + *(float *)(param_1 + 0x57c);
            pfVar11[8] = fVar5 + fVar3;
            fVar5 = *(float *)(param_1 + 0x578);
            pfVar11[9] = *(float *)(param_1 + 0x57c) + fVar2;
            pfVar11[10] = fVar3 + fVar5;
            pfVar11 = pfVar11 + 0x10;
          } while (uVar13 < iVar14 - 1U);
        }
        if (uVar13 < uVar15) {
          pfVar11 = (float *)(iVar7 + 4 + (local_20 + uVar13 * 2) * 8);
          do {
            fVar2 = (float)(int)uVar13;
            if ((int)uVar13 < 0) {
              fVar2 = fVar2 + 4.2949673e+09;
            }
            uVar13 = uVar13 + 1;
            fVar5 = 1.0 - fVar2 * fVar1;
            fVar2 = *(float *)(param_1 + 0x578);
            pfVar11[-1] = local_1c + *(float *)(param_1 + 0x57c);
            *pfVar11 = fVar2 + fVar5;
            fVar2 = *(float *)(param_1 + 0x578);
            pfVar11[1] = *(float *)(param_1 + 0x57c) + fVar6 * local_24;
            pfVar11[2] = fVar5 + fVar2;
            pfVar11 = pfVar11 + 4;
          } while (uVar13 < uVar15);
        }
      }
      local_20 = local_20 + iVar14 + 4 + uVar15;
      local_1c = fVar9 + local_1c;
      pfVar10 = pfVar10 + (iVar14 + 3) * 4;
      local_8 = local_8 + 1;
      local_24 = local_24 + fVar9;
    } while (local_8 < *(int *)(param_1 + 0x540));
  }
LAB_00ed7b36:
  FUN_00f99d50(iVar7,8,*(int *)(param_1 + 0x520) * uVar15 + *(int *)(param_1 + 0x524));
  return;
}

// 00EE29D0  cEspStrip2p::vf20  size=5620  [class]
/* WARNING: Removing unreachable block (ram,0x00ee3b78) */
/* WARNING: Removing unreachable block (ram,0x00ee39f8) */
/* WARNING: Removing unreachable block (ram,0x00ee3339) */
/* WARNING: Removing unreachable block (ram,0x00ee3175) */
/* WARNING: Removing unreachable block (ram,0x00ee3dec) */
/* WARNING: Removing unreachable block (ram,0x00ee382c) */

void __thiscall cEspStrip2p::vf20(int param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  ushort in_FPUControlWord;
  float10 fVar13;
  undefined1 auStack_1a4 [4];
  float local_1a0;
  float *local_19c;
  longlong local_198;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  uint local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  int local_150;
  float *local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  double local_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  int local_d8;
  undefined4 uStack_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_1a4;
  pfVar10 = *(float **)(param_1 + 0x458);
  local_b4 = param_2;
  local_19c = pfVar10;
  pfVar8 = (float *)FUN_00e9fe70();
  pfVar9 = (float *)FUN_00e9feb0();
  local_160 = *pfVar9 - *pfVar8;
  local_15c = pfVar9[1] - pfVar8[1];
  local_158 = pfVar9[2] - pfVar8[2];
  local_154 = pfVar9[3] - pfVar8[3];
  local_188 = local_15c * local_15c + local_160 * local_160 + local_158 * local_158;
  if (local_188 < 0.0 == (local_188 == 0.0)) {
    FUN_00ddf460(&local_160,&local_160);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_160 = 0.0;
    local_15c = 1.0;
    local_158 = 0.0;
  }
  local_38 = 0.0;
  local_30 = 0.0;
  local_34 = 1.0;
  local_1a0 = (float)CONCAT22(local_1a0._2_2_,in_FPUControlWord);
  lVar2 = (longlong)ROUND(*(float *)(param_1 + 0x528));
  local_d8 = (int)lVar2;
  local_188 = (float)local_d8;
  if (local_d8 < 0) {
    local_188 = local_188 + 4.2949673e+09;
  }
  local_188 = *(float *)(param_1 + 0x528) - local_188;
  uVar11 = *(uint *)(param_1 + 0x454);
  local_148 = 1.0 - local_188;
  _local_d8 = CONCAT44((int)((ulonglong)lVar2 >> 0x20),(*(int *)(param_1 + 0x450) + -4) * uVar11 + 2
                      );
  local_168 = 1.0;
  if (1 < uVar11) {
    local_198 = CONCAT44(local_198._4_4_,uVar11);
    local_168 = (float)(int)uVar11;
    if ((int)uVar11 < 0) {
      local_168 = local_168 + 4.2949673e+09;
    }
    local_168 = 1.0 / local_168;
  }
  pfVar8 = *(float **)(param_1 + 0x45c);
  uVar11 = 1;
  local_cc = pfVar8[3] - *pfVar8;
  iVar12 = 2;
  local_150 = 2;
  local_164 = 1;
  local_c8 = pfVar8[4] - pfVar8[1];
  local_c4 = pfVar8[5] - pfVar8[2];
  local_184 = *pfVar8;
  local_180 = pfVar8[1];
  local_17c = pfVar8[2];
  *pfVar10 = local_184;
  pfVar10[1] = local_180;
  pfVar10[2] = local_17c;
  pfVar8 = *(float **)(param_1 + 0x460);
  local_a4 = pfVar8[3] - *pfVar8;
  local_a0 = pfVar8[4] - pfVar8[1];
  local_9c = pfVar8[5] - pfVar8[2];
  local_174 = *pfVar8;
  local_170 = pfVar8[1];
  local_16c = pfVar8[2];
  pfVar10[3] = local_174;
  pfVar10[4] = local_170;
  pfVar10[5] = local_16c;
  local_144 = local_168 + 0.0;
  local_f0 = local_174;
  local_ec = local_170;
  local_e8 = local_16c;
  local_e4 = local_184;
  local_e0 = local_180;
  local_dc = local_17c;
  local_2c = local_cc;
  local_28 = local_c8;
  local_24 = local_c4;
  local_20 = local_a4;
  local_1c = local_a0;
  local_18 = local_9c;
  if (1 < *(int *)(param_1 + 0x450) - 3U) {
    do {
      local_188 = 0.0;
      if (*(int *)(param_1 + 0x454) != 0) {
        local_14c = pfVar10 + iVar12 * 3;
        do {
          fVar3 = local_144 + local_148;
          local_110 = (double)fVar3;
          local_18c = (float)(in_FPUControlWord | 0xc00);
          local_198 = (longlong)ROUND(fVar3);
          fVar7 = (float)local_198;
          fVar4 = (float)(int)(float)local_198;
          if ((int)(float)local_198 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
          }
          iVar12 = *(int *)(param_1 + 0x45c);
          local_1a0 = fVar3 - fVar4;
          pfVar10 = (float *)(iVar12 + ((int)(float)local_198 * 3 + 6) * 4);
          iVar5 = (int)(float)local_198 * 0xc;
          local_b0 = *pfVar10 - *(float *)(iVar12 + 0xc + iVar5);
          local_ac = pfVar10[1] - *(float *)(iVar12 + 0x10 + iVar5);
          local_a8 = pfVar10[2] - *(float *)(iVar12 + 0x14 + iVar5);
          if (((((float *)(iVar5 + iVar12))[3] == *(float *)(iVar5 + iVar12)) &&
              (*(float *)(iVar12 + 0x10 + iVar5) == *(float *)(iVar12 + 4 + iVar5))) &&
             (*(float *)(iVar5 + iVar12 + 0x14) == *(float *)(iVar5 + 8 + iVar12))) {
            local_184 = *(float *)(iVar12 + iVar5);
            local_180 = *(float *)(iVar12 + 4 + iVar5);
            local_17c = *(float *)(iVar12 + 8 + iVar5);
          }
          else {
            iVar1 = iVar5 + iVar12;
            local_98 = *(float *)(iVar5 + iVar12) - *(float *)(iVar1 + 0xc);
            local_94 = *(float *)(iVar1 + 4) - *(float *)(iVar1 + 0x10);
            local_90 = *(float *)(iVar1 + 8) - *(float *)(iVar1 + 0x14);
            local_18c = local_90 * local_90 + local_94 * local_94 + local_98 * local_98;
            fVar13 = (float10)FUN_00fdef70();
            if (0.01 <= (float)fVar13) {
              fVar6 = local_1a0 * local_1a0;
              pfVar10 = (float *)(iVar5 + *(int *)(param_1 + 0x45c));
              fVar3 = fVar6 * local_1a0;
              fVar4 = (fVar3 * 2.0 - fVar6 * 3.0) + 0.0 + 1.0;
              local_18c = (fVar3 - fVar6 * 2.0) + local_1a0;
              local_178 = fVar6 * 3.0 - fVar3 * 2.0;
              fVar3 = fVar3 - fVar6;
              local_198 = CONCAT44(local_198._4_4_,fVar3);
              local_184 = fVar3 * local_b0 +
                          local_178 * pfVar10[3] + fVar4 * *pfVar10 + local_18c * local_2c;
              local_180 = fVar3 * local_ac +
                          pfVar10[4] * local_178 + local_18c * local_28 + pfVar10[1] * fVar4;
              local_17c = fVar3 * local_a8 +
                          local_178 * pfVar10[5] + pfVar10[2] * fVar4 + local_24 * local_18c;
            }
            else {
              pfVar10 = (float *)(*(int *)(param_1 + 0x45c) + iVar5);
              local_18c = 1.0 - local_1a0;
              local_50 = local_18c * pfVar10[3];
              local_4c = pfVar10[4] * local_18c;
              local_48 = local_18c * pfVar10[5];
              local_80 = local_1a0 * *pfVar10;
              local_7c = pfVar10[1] * local_1a0;
              local_78 = local_1a0 * pfVar10[2];
              local_184 = local_80 + local_50;
              local_180 = local_7c + local_4c;
              local_17c = local_78 + local_48;
              local_c0 = local_184;
              local_bc = local_180;
              local_b8 = local_17c;
            }
          }
          local_140 = local_184 - local_e4;
          local_13c = local_180 - local_e0;
          local_138 = local_17c - local_dc;
          local_1a0 = local_138 * local_138 + local_13c * local_13c + local_140 * local_140;
          local_2c = local_140;
          local_28 = local_13c;
          local_24 = local_138;
          fVar13 = (float10)FUN_00fdef70();
          fVar3 = (float)fVar13;
          if (fVar3 <= 0.000125) {
            if (local_1a0 == 0.0) {
              local_38 = 0.0;
              local_34 = 1.0;
              local_30 = 0.0;
            }
            else {
              local_198._0_4_ = fVar3;
              if (local_1a0 <= 0.0) {
                FUN_00dd5650(&DAT_0163d0ac);
                local_2c = 0.0;
                local_28 = 1.0;
                local_24 = 0.0;
              }
              D3DXVec3Normalize(&local_2c,&local_2c);
              fStack_128 = local_15c * local_24 - local_158 * local_28;
              fStack_124 = local_2c * local_158 - local_160 * local_24;
              fStack_120 = local_28 * local_160 - local_15c * local_2c;
              local_198._0_4_ =
                   fStack_128 * fStack_128 + fStack_124 * fStack_124 + fStack_120 * fStack_120;
              local_38 = fStack_128;
              local_34 = fStack_124;
              local_30 = fStack_120;
              if ((float)local_198 != 0.0) {
                if ((float)local_198 <= 0.0) {
                  FUN_00dd5650(&DAT_0163d0ac);
                  local_38 = 0.0;
                  local_34 = 1.0;
                  local_30 = 0.0;
                }
                D3DXVec3Normalize(&local_38,&local_38);
              }
            }
          }
          else {
            local_fc = local_15c * local_138 - local_158 * local_13c;
            local_f8 = local_140 * local_158 - local_160 * local_138;
            local_f4 = local_13c * local_160 - local_15c * local_140;
            local_198._0_4_ = local_fc * local_fc + local_f8 * local_f8 + local_f4 * local_f4;
            local_38 = local_fc;
            local_34 = local_f8;
            local_30 = local_f4;
            if ((float)local_198 != 0.0) {
              if ((float)local_198 <= 0.0) {
                FUN_00dd5650(&DAT_0163d0ac);
                local_38 = 0.0;
                local_34 = 1.0;
                local_30 = 0.0;
              }
              D3DXVec3Normalize(&local_38,&local_38);
            }
          }
          local_150 = local_150 + 1;
          *local_14c = local_184;
          local_14c[1] = local_180;
          local_14c[2] = local_17c;
          fVar3 = (float)(int)fVar7;
          if ((int)fVar7 < 0) {
            fVar3 = fVar3 + 4.2949673e+09;
          }
          local_1a0 = (float)local_110 - fVar3;
          iVar12 = *(int *)(param_1 + 0x460);
          pfVar10 = (float *)(iVar12 + ((int)fVar7 * 3 + 6) * 4);
          iVar5 = (int)fVar7 * 0xc;
          fStack_68 = *pfVar10 - *(float *)(iVar12 + 0xc + iVar5);
          fStack_64 = pfVar10[1] - *(float *)(iVar12 + 0x10 + iVar5);
          fStack_60 = pfVar10[2] - *(float *)(iVar12 + 0x14 + iVar5);
          if (((((float *)(iVar12 + iVar5))[3] == *(float *)(iVar12 + iVar5)) &&
              (*(float *)(iVar12 + 0x10 + iVar5) == *(float *)(iVar12 + 4 + iVar5))) &&
             (*(float *)(iVar12 + iVar5 + 0x14) == *(float *)(iVar12 + 8 + iVar5))) {
            local_174 = *(float *)(iVar12 + iVar5);
            local_170 = *(float *)(iVar12 + 4 + iVar5);
            local_16c = *(float *)(iVar12 + 8 + iVar5);
            local_14c = local_14c + 3;
            local_198._0_4_ = fVar7;
          }
          else {
            iVar12 = *(int *)(param_1 + 0x45c) + iVar5;
            fStack_8c = *(float *)(*(int *)(param_1 + 0x45c) + iVar5) - *(float *)(iVar12 + 0xc);
            fStack_88 = *(float *)(iVar12 + 4) - *(float *)(iVar12 + 0x10);
            fStack_84 = *(float *)(iVar12 + 8) - *(float *)(iVar12 + 0x14);
            local_198._0_4_ = fStack_84 * fStack_84 + fStack_8c * fStack_8c + fStack_88 * fStack_88;
            local_14c = local_14c + 3;
            fVar13 = (float10)FUN_00fdef70();
            if (0.01 <= (float)fVar13) {
              fVar4 = local_1a0 * local_1a0;
              pfVar10 = (float *)(*(int *)(param_1 + 0x460) + iVar5);
              fVar3 = fVar4 * local_1a0;
              local_178 = (fVar3 * 2.0 - fVar4 * 3.0) + 0.0 + 1.0;
              local_198._0_4_ = (fVar3 - fVar4 * 2.0) + local_1a0;
              local_18c = fVar4 * 3.0 - fVar3 * 2.0;
              fVar3 = fVar3 - fVar4;
              local_174 = fVar3 * fStack_68 +
                          (float)local_198 * local_20 + local_178 * *pfVar10 +
                          local_18c * pfVar10[3];
              local_170 = fStack_64 * fVar3 +
                          pfVar10[4] * local_18c +
                          local_1c * (float)local_198 + pfVar10[1] * local_178;
              local_16c = local_18c * pfVar10[5] +
                          pfVar10[2] * local_178 + local_18 * (float)local_198 + fStack_60 * fVar3;
            }
            else {
              pfVar10 = (float *)(*(int *)(param_1 + 0x45c) + iVar5);
              local_198._0_4_ = 1.0 - local_1a0;
              fStack_5c = (float)local_198 * pfVar10[3];
              fStack_58 = pfVar10[4] * (float)local_198;
              fStack_54 = (float)local_198 * pfVar10[5];
              fStack_74 = *pfVar10 * local_1a0;
              fStack_70 = pfVar10[1] * local_1a0;
              fStack_6c = local_1a0 * pfVar10[2];
              local_184 = fStack_74 + fStack_5c;
              local_180 = fStack_70 + fStack_58;
              local_17c = fStack_6c + fStack_54;
              fStack_44 = local_184;
              fStack_40 = local_180;
              fStack_3c = local_17c;
            }
          }
          fStack_134 = local_174 - local_f0;
          fStack_130 = local_170 - local_ec;
          fStack_12c = local_16c - local_e8;
          local_1a0 = fStack_12c * fStack_12c + fStack_130 * fStack_130 + fStack_134 * fStack_134;
          local_20 = fStack_134;
          local_1c = fStack_130;
          local_18 = fStack_12c;
          fVar13 = (float10)FUN_00fdef70();
          local_198 = CONCAT44(local_198._4_4_,(float)fVar13);
          if ((float)fVar13 <= 0.000125) {
            if (local_1a0 == 0.0) {
              local_38 = 0.0;
              local_34 = 1.0;
              local_30 = 0.0;
            }
            else {
              if (local_1a0 <= 0.0) {
                FUN_00dd5650(&DAT_0163d0ac);
                local_20 = 0.0;
                local_1c = 1.0;
                local_18 = 0.0;
              }
              D3DXVec3Normalize(&local_20,&local_20);
              fStack_108 = local_15c * local_18 - local_158 * local_1c;
              fStack_104 = local_20 * local_158 - local_160 * local_18;
              fStack_100 = local_1c * local_160 - local_15c * local_20;
              fVar3 = fStack_108 * fStack_108 + fStack_104 * fStack_104 + fStack_100 * fStack_100;
              local_198 = CONCAT44(local_198._4_4_,fVar3);
              local_38 = fStack_108;
              local_34 = fStack_104;
              local_30 = fStack_100;
              if (fVar3 != 0.0) {
                if (fVar3 <= 0.0) {
                  FUN_00dd5650(&DAT_0163d0ac);
                  local_38 = 0.0;
                  local_34 = 1.0;
                  local_30 = 0.0;
                }
                D3DXVec3Normalize(&local_38,&local_38);
              }
            }
          }
          else {
            fStack_11c = local_15c * fStack_12c - local_158 * fStack_130;
            fStack_118 = fStack_134 * local_158 - local_160 * fStack_12c;
            fStack_114 = fStack_130 * local_160 - local_15c * fStack_134;
            fVar3 = fStack_11c * fStack_11c + fStack_118 * fStack_118 + fStack_114 * fStack_114;
            local_198 = CONCAT44(local_198._4_4_,fVar3);
            local_38 = fStack_11c;
            local_34 = fStack_118;
            local_30 = fStack_114;
            if (fVar3 != 0.0) {
              if (fVar3 <= 0.0) {
                FUN_00dd5650(&DAT_0163d0ac);
                local_38 = 0.0;
                local_34 = 1.0;
                local_30 = 0.0;
              }
              D3DXVec3Normalize(&local_38,&local_38);
            }
          }
          local_f0 = local_174;
          *local_14c = local_174;
          iVar12 = local_150 + 1;
          local_ec = local_170;
          pfVar8 = local_14c + 3;
          local_14c[1] = local_170;
          local_e8 = local_16c;
          local_14c[2] = local_16c;
          local_e4 = local_184;
          local_188 = (float)((int)local_188 + 1);
          local_e0 = local_180;
          local_dc = local_17c;
          local_144 = local_168 + local_144;
          pfVar10 = local_19c;
          local_150 = iVar12;
          local_14c = pfVar8;
        } while ((uint)local_188 < (uint)*(float *)(param_1 + 0x454));
      }
      uVar11 = local_164 + 1;
      local_164 = uVar11;
    } while (uVar11 < *(int *)(param_1 + 0x450) - 3U);
  }
  local_164 = uVar11 + 1;
  local_168 = local_38 * local_38 + local_34 * local_34 + local_30 * local_30;
  if (local_168 != 0.0) {
    if (!NAN(local_168) && local_168 < 0.0 != (local_168 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_38 = 0.0;
      local_34 = 1.0;
      local_30 = 0.0;
    }
    D3DXVec3Normalize(&local_38,&local_38);
  }
  fVar3 = *(float *)(param_1 + 0x104);
  local_164 = local_164 * 0xc;
  local_38 = fVar3 * local_38;
  pfVar8 = (float *)(local_164 + *(int *)(param_1 + 0x45c));
  local_1a0 = (float)CONCAT22(local_1a0._2_2_,in_FPUControlWord);
  local_34 = fVar3 * local_34;
  local_30 = local_30 * fVar3;
  local_110._0_4_ = (int)(longlong)ROUND(local_144 + local_148);
  local_188 = (float)local_110._0_4_;
  if (local_110._0_4_ < 0) {
    local_188 = local_188 + 4.2949673e+09;
  }
  local_188 = (local_144 + local_148) - local_188;
  fVar3 = local_188 * local_188;
  local_18c = fVar3 * local_188;
  local_178 = fVar3 * 3.0;
  local_110 = (double)local_178;
  local_198._0_4_ = (local_18c * 2.0 - local_178) + 0.0 + 1.0;
  local_19c = (float *)((local_18c - fVar3 * 2.0) + local_188);
  local_178 = local_178 - local_18c * 2.0;
  local_18c = local_18c - fVar3;
  local_184 = local_178 * *pfVar8 + local_2c * (float)local_19c + (float)local_198 * pfVar8[-3] +
              local_18c * local_2c;
  local_180 = local_18c * local_28 +
              pfVar8[1] * local_178 + (float)local_19c * local_28 + pfVar8[-2] * (float)local_198;
  local_17c = local_18c * local_24 +
              pfVar8[-1] * (float)local_198 + local_24 * (float)local_19c + pfVar8[2] * local_178;
  pfVar8 = pfVar10 + iVar12 * 3;
  *pfVar8 = local_184;
  pfVar8[1] = local_180;
  pfVar8[2] = local_17c;
  local_168 = local_38 * local_38 + local_34 * local_34 + local_30 * local_30;
  if (local_168 != 0.0) {
    if (!NAN(local_168) && local_168 < 0.0 != (local_168 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_38 = 0.0;
      local_34 = 1.0;
      local_30 = 0.0;
    }
    D3DXVec3Normalize(&local_38,&local_38);
  }
  fVar3 = *(float *)(param_1 + 0x104);
  pfVar9 = (float *)(*(int *)(param_1 + 0x460) + local_164);
  local_38 = fVar3 * local_38;
  local_34 = fVar3 * local_34;
  local_30 = local_30 * fVar3;
  fVar4 = local_188 * local_188;
  local_18c = fVar4 * local_188;
  fVar3 = (local_18c * 2.0 - fVar4 * 3.0) + 0.0 + 1.0;
  local_198 = CONCAT44(local_198._4_4_,fVar3);
  local_19c = (float *)((local_18c - fVar4 * 2.0) + local_188);
  local_178 = fVar4 * 3.0 - local_18c * 2.0;
  local_18c = local_18c - fVar4;
  local_174 = local_178 * *pfVar9 + local_20 * (float)local_19c + fVar3 * pfVar9[-3] +
              local_18c * local_20;
  local_170 = local_1c * local_18c +
              pfVar9[1] * local_178 + local_1c * (float)local_19c + pfVar9[-2] * fVar3;
  pfVar8 = pfVar10 + iVar12 * 3 + 3;
  local_16c = pfVar9[-1] * fVar3 + local_18 * (float)local_19c + pfVar9[2] * local_178 +
              local_18 * local_18c;
  *pfVar8 = local_174;
  pfVar8[1] = local_170;
  pfVar8[2] = local_16c;
  FUN_00f99d50(pfVar10,0xc,local_d8 * 2);
  __security_check_cookie(local_14 ^ (uint)auStack_1a4);
  return;
}

// 00EE3FD0  cEspStrip2p::vf28  size=20116  [class]
void __fastcall cEspStrip2p::vf28(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  uint uVar21;
  int iVar22;
  undefined4 *puVar23;
  uint uVar24;
  float *pfVar25;
  float *pfVar26;
  int iVar27;
  undefined4 *puVar28;
  int iVar29;
  float *pfVar30;
  int iVar31;
  float *pfVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  float *pfVar36;
  bool bVar37;
  float10 fVar38;
  undefined *puVar39;
  int local_1e0;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_194;
  float local_190;
  float local_188;
  uint local_184;
  uint local_164;
  float local_160;
  float local_154;
  float local_13c;
  float local_134;
  float local_114;
  
  if (param_1[0x15d] != 0) {
    (**(code **)(*param_1 + 0x2c))();
    return;
  }
  iVar16 = param_1[0x116];
  uVar17 = param_1[0x114];
  uVar21 = (uVar17 - 4) * param_1[0x115] + 2;
  bVar37 = (param_1[0xe] & 0x80000U) == 0;
  local_134 = (float)(uint)bVar37;
  uVar24 = (uint)!bVar37;
  local_1e0 = (int)(longlong)ROUND((float)param_1[0x14a]);
  iVar22 = local_1e0 * param_1[0x115] + 2;
  local_1e0 = (int)(longlong)ROUND((float)param_1[0x14a]);
  fVar20 = (float)local_1e0;
  if (local_1e0 < 0) {
    fVar20 = fVar20 + 4.2949673e+09;
  }
  iVar29 = param_1[0x150];
  fVar20 = (float)param_1[0x14a] - fVar20;
  if (1 < iVar29) {
    local_184 = 0;
    fVar2 = 1.0 / (float)iVar29;
    local_190 = 0.0;
    if (0 < iVar29) {
      fVar3 = (float)(int)uVar21;
      local_114 = fVar2;
      if ((int)uVar21 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      do {
        uVar17 = param_1[0x114];
        iVar29 = param_1[(int)local_134 + 0x117];
        iVar33 = (uVar21 * 2 + 2) * local_184;
        iVar31 = param_1[uVar24 + 0x117];
        if (uVar17 < 3) {
          FUN_00dd5650(&DAT_016df4c0,uVar17);
        }
        else {
          uVar35 = param_1[0x157];
          if (uVar35 < uVar17) {
            puVar39 = &DAT_016df478;
LAB_00ee6608:
            FUN_00dd5650(puVar39,CONCAT44(uVar35,uVar17));
          }
          else if (param_1[0x158] == 0) {
            FUN_00dd5650();
          }
          else {
            local_188 = 0.0;
            if (3 < (int)uVar17) {
              local_194 = (float)((uVar17 - 4 >> 2) + 1);
              iVar27 = 0;
              local_188 = (float)((int)local_194 * 4);
              pfVar32 = (float *)(iVar31 + 0x10);
              pfVar25 = (float *)(iVar29 + 0x1c);
              do {
                iVar1 = param_1[0x158];
                *(float *)(iVar1 + iVar27) = (pfVar25[-7] - pfVar32[-4]) * local_190 + pfVar32[-4];
                *(float *)(iVar1 + 4 + iVar27) =
                     (pfVar25[-6] - pfVar32[-3]) * local_190 + pfVar32[-3];
                *(float *)(iVar1 + 8 + iVar27) =
                     (pfVar25[-5] - pfVar32[-2]) * local_190 + pfVar32[-2];
                pfVar26 = (float *)(iVar27 + 0x10 + param_1[0x158]);
                *pfVar26 = (pfVar25[-4] - pfVar32[-1]) * local_190 + pfVar32[-1];
                pfVar26[1] = (*(float *)((iVar29 - iVar31) + -0x30 + (int)(pfVar32 + 0xc)) -
                             *pfVar32) * local_190 + *pfVar32;
                pfVar26[2] = (pfVar25[-2] - pfVar32[1]) * local_190 + pfVar32[1];
                pfVar26 = (float *)(iVar27 + 0x20 + param_1[0x158]);
                iVar27 = iVar27 + 0x40;
                local_194 = (float)((int)local_194 + -1);
                *pfVar26 = (pfVar25[-1] - pfVar32[2]) * local_190 + pfVar32[2];
                pfVar26[1] = (*pfVar25 - pfVar32[3]) * local_190 + pfVar32[3];
                pfVar26[2] = (pfVar25[1] - pfVar32[4]) * local_190 + pfVar32[4];
                iVar1 = param_1[0x158];
                *(float *)(iVar1 + -0x10 + iVar27) =
                     (pfVar25[2] - pfVar32[5]) * local_190 + pfVar32[5];
                *(float *)(iVar1 + -0xc + iVar27) =
                     (pfVar25[3] - pfVar32[6]) * local_190 + pfVar32[6];
                *(float *)(iVar1 + -8 + iVar27) = (pfVar25[4] - pfVar32[7]) * local_190 + pfVar32[7]
                ;
                pfVar32 = pfVar32 + 0xc;
                pfVar25 = pfVar25 + 0xc;
              } while (local_194 != 0.0);
            }
            if ((uint)local_188 < uVar17) {
              iVar29 = param_1[(int)local_134 + 0x117];
              iVar31 = param_1[uVar24 + 0x117];
              iVar27 = (int)local_188 << 4;
              local_194 = (float)(uVar17 - (int)local_188);
              pfVar32 = (float *)(iVar31 + 4 + (int)local_188 * 0xc);
              pfVar25 = (float *)(iVar29 + (int)local_188 * 0xc);
              do {
                iVar1 = param_1[0x158];
                iVar27 = iVar27 + 0x10;
                local_194 = (float)((int)local_194 + -1);
                *(float *)(iVar1 + -0x10 + iVar27) =
                     (*pfVar25 - pfVar32[-1]) * local_190 + pfVar32[-1];
                *(float *)(iVar1 + -0xc + iVar27) =
                     (*(float *)((int)pfVar32 + (iVar29 - iVar31)) - *pfVar32) * local_190 +
                     *pfVar32;
                *(float *)(iVar1 + -8 + iVar27) = (pfVar25[2] - pfVar32[1]) * local_190 + pfVar32[1]
                ;
                pfVar32 = pfVar32 + 3;
                pfVar25 = pfVar25 + 3;
              } while (local_194 != 0.0);
            }
            uVar35 = param_1[0x157];
            if (uVar35 < uVar17) {
              puVar39 = &DAT_016d98c0;
              goto LAB_00ee6608;
            }
            param_1[0x152] = param_1[0x158];
            puVar23 = (undefined4 *)param_1[0x154];
            *puVar23 = 0;
            uVar34 = uVar17 - 1;
            puVar23[1] = 0;
            puVar23[2] = 0;
            iVar29 = uVar34 * 0x10;
            puVar23[3] = 0;
            puVar23 = (undefined4 *)(param_1[0x154] + iVar29);
            *puVar23 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            uVar35 = 1;
            if (1 < uVar34) {
              if (3 < (int)(uVar17 - 2)) {
                iVar27 = (uVar17 - 6 >> 2) + 1;
                uVar35 = iVar27 * 4 + 1;
                iVar31 = 0x10;
                do {
                  pfVar32 = (float *)(iVar31 + param_1[0x152]);
                  fVar4 = pfVar32[-3];
                  fVar5 = pfVar32[5];
                  fVar6 = pfVar32[-2];
                  fVar7 = pfVar32[6];
                  fVar8 = pfVar32[-1];
                  fVar9 = pfVar32[7];
                  fVar10 = pfVar32[1];
                  fVar11 = pfVar32[2];
                  fVar12 = pfVar32[3];
                  pfVar25 = (float *)(param_1[0x154] + iVar31);
                  *pfVar25 = ((*(float *)(iVar31 + 0x10 + param_1[0x152]) + pfVar32[-4]) -
                             *pfVar32 * 2.0) * 3.0;
                  pfVar25[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar25[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar25[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar19 = param_1[0x152];
                  iVar1 = iVar31 + 0x20;
                  fVar4 = *(float *)(iVar31 + 4 + iVar19);
                  fVar5 = *(float *)(iVar31 + 0x24 + iVar19);
                  fVar6 = *(float *)(iVar31 + 8 + iVar19);
                  fVar7 = *(float *)(iVar31 + 0x28 + iVar19);
                  fVar8 = *(float *)(iVar31 + 0xc + iVar19);
                  fVar9 = *(float *)(iVar31 + 0x2c + iVar19);
                  fVar10 = *(float *)(iVar31 + 0x14 + iVar19);
                  fVar11 = *(float *)(iVar31 + 0x18 + iVar19);
                  fVar12 = *(float *)(iVar31 + 0x1c + iVar19);
                  pfVar32 = (float *)(iVar31 + 0x10 + param_1[0x154]);
                  iVar18 = iVar31 + 0x30;
                  *pfVar32 = ((*(float *)(iVar31 + 0x20 + iVar19) + *(float *)(iVar31 + iVar19)) -
                             *(float *)(iVar31 + 0x10 + iVar19) * 2.0) * 3.0;
                  pfVar32[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar32[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar32[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar19 = param_1[0x152];
                  fVar4 = *(float *)(iVar31 + 0x14 + iVar19);
                  fVar5 = *(float *)(iVar31 + 0x34 + iVar19);
                  fVar6 = *(float *)(iVar31 + 0x18 + iVar19);
                  fVar7 = *(float *)(iVar31 + 0x38 + iVar19);
                  fVar8 = *(float *)(iVar31 + 0x1c + iVar19);
                  fVar9 = *(float *)(iVar31 + 0x3c + iVar19);
                  fVar10 = *(float *)(iVar31 + 0x24 + iVar19);
                  fVar11 = *(float *)(iVar31 + 0x28 + iVar19);
                  fVar12 = *(float *)(iVar31 + 0x2c + iVar19);
                  pfVar32 = (float *)(param_1[0x154] + iVar1);
                  *pfVar32 = ((*(float *)(iVar18 + iVar19) + *(float *)(iVar31 + 0x10 + iVar19)) -
                             *(float *)(iVar1 + iVar19) * 2.0) * 3.0;
                  pfVar32[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar32[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar32[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar19 = param_1[0x152];
                  fVar4 = *(float *)(iVar31 + 0x24 + iVar19);
                  fVar5 = *(float *)(iVar31 + 0x44 + iVar19);
                  fVar6 = *(float *)(iVar31 + 0x28 + iVar19);
                  fVar7 = *(float *)(iVar31 + 0x48 + iVar19);
                  fVar8 = *(float *)(iVar31 + 0x2c + iVar19);
                  fVar9 = *(float *)(iVar31 + 0x4c + iVar19);
                  pfVar32 = (float *)(param_1[0x154] + iVar18);
                  iVar27 = iVar27 + -1;
                  fVar10 = *(float *)(iVar31 + 0x34 + iVar19);
                  fVar11 = *(float *)(iVar31 + 0x38 + iVar19);
                  fVar12 = *(float *)(iVar31 + 0x3c + iVar19);
                  *pfVar32 = ((*(float *)(iVar31 + 0x40 + iVar19) + *(float *)(iVar1 + iVar19)) -
                             *(float *)(iVar18 + iVar19) * 2.0) * 3.0;
                  pfVar32[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar32[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar32[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar31 = iVar31 + 0x40;
                } while (iVar27 != 0);
              }
              if (uVar35 < uVar34) {
                iVar31 = uVar35 << 4;
                iVar27 = uVar34 - uVar35;
                do {
                  pfVar32 = (float *)(param_1[0x152] + 0x10 + iVar31);
                  pfVar25 = (float *)(param_1[0x152] + iVar31);
                  fVar4 = pfVar25[-3];
                  fVar5 = pfVar25[5];
                  fVar6 = pfVar25[-2];
                  fVar7 = pfVar25[6];
                  fVar8 = pfVar25[-1];
                  fVar9 = pfVar25[7];
                  fVar10 = pfVar25[1];
                  fVar11 = pfVar25[2];
                  fVar12 = pfVar25[3];
                  pfVar26 = (float *)(param_1[0x154] + iVar31);
                  iVar31 = iVar31 + 0x10;
                  iVar27 = iVar27 + -1;
                  *pfVar26 = ((*pfVar32 + pfVar25[-4]) - *pfVar25 * 2.0) * 3.0;
                  pfVar26[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar26[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar26[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                } while (iVar27 != 0);
              }
            }
            uVar35 = 1;
            if (1 < uVar34) {
              if (3 < (int)(uVar17 - 2)) {
                iVar31 = 0x10;
                do {
                  pfVar32 = (float *)(param_1[0x154] + iVar31);
                  fVar4 = (float)(&DAT_01dd8f60)[uVar35];
                  *pfVar32 = fVar4 * (*(float *)(param_1[0x154] + iVar31) - pfVar32[-4]);
                  pfVar32[1] = (pfVar32[1] - pfVar32[-3]) * fVar4;
                  pfVar32[2] = (pfVar32[2] - pfVar32[-2]) * fVar4;
                  pfVar32[3] = fVar4 * (pfVar32[3] - pfVar32[-1]);
                  pfVar32 = (float *)(param_1[0x154] + iVar31);
                  fVar4 = (float)(&DAT_01dd8f64)[uVar35];
                  pfVar32[4] = fVar4 * (*(float *)(param_1[0x154] + 0x10 + iVar31) - *pfVar32);
                  pfVar32[5] = (pfVar32[5] - pfVar32[1]) * fVar4;
                  pfVar32[6] = (pfVar32[6] - pfVar32[2]) * fVar4;
                  pfVar32[7] = fVar4 * (pfVar32[7] - pfVar32[3]);
                  iVar27 = param_1[0x154];
                  pfVar32 = (float *)(iVar27 + 0x2c + iVar31);
                  pfVar25 = (float *)(iVar27 + 0x1c + iVar31);
                  fVar4 = (float)(&DAT_01dd8f68)[uVar35];
                  *(float *)(iVar27 + 0x20 + iVar31) =
                       fVar4 * (*(float *)(iVar27 + 0x20 + iVar31) -
                               *(float *)(iVar27 + 0x10 + iVar31));
                  *(float *)(iVar27 + 0x24 + iVar31) =
                       (*(float *)(iVar27 + 0x24 + iVar31) - *(float *)(iVar27 + 0x14 + iVar31)) *
                       fVar4;
                  *(float *)(iVar27 + 0x28 + iVar31) =
                       (*(float *)(iVar27 + 0x28 + iVar31) - *(float *)(iVar27 + 0x18 + iVar31)) *
                       fVar4;
                  uVar35 = uVar35 + 4;
                  iVar31 = iVar31 + 0x40;
                  *(float *)(iVar27 + -0x14 + iVar31) = fVar4 * (*pfVar32 - *pfVar25);
                  iVar27 = param_1[0x154];
                  fVar4 = *(float *)(uVar35 * 4 + 0x1dd8f5c);
                  *(float *)(iVar27 + -0x10 + iVar31) =
                       fVar4 * (*(float *)(iVar27 + -0x10 + iVar31) -
                               *(float *)(iVar27 + -0x20 + iVar31));
                  *(float *)(iVar27 + -0xc + iVar31) =
                       (*(float *)(iVar27 + -0xc + iVar31) - *(float *)(iVar27 + -0x1c + iVar31)) *
                       fVar4;
                  *(float *)(iVar27 + -8 + iVar31) =
                       (*(float *)(iVar27 + -8 + iVar31) - *(float *)(iVar27 + -0x18 + iVar31)) *
                       fVar4;
                  *(float *)(iVar27 + -4 + iVar31) =
                       fVar4 * (*(float *)(iVar27 + -4 + iVar31) -
                               *(float *)(iVar27 + -0x14 + iVar31));
                } while (uVar35 < uVar17 - 4);
              }
              if (uVar35 < uVar34) {
                iVar31 = uVar35 << 4;
                do {
                  pfVar32 = (float *)(param_1[0x154] + iVar31);
                  pfVar25 = (float *)(param_1[0x154] + iVar31);
                  uVar35 = uVar35 + 1;
                  iVar31 = iVar31 + 0x10;
                  fVar4 = *(float *)(uVar35 * 4 + 0x1dd8f5c);
                  *pfVar25 = fVar4 * (*pfVar32 - pfVar25[-4]);
                  pfVar25[1] = (pfVar25[1] - pfVar25[-3]) * fVar4;
                  pfVar25[2] = (pfVar25[2] - pfVar25[-2]) * fVar4;
                  pfVar25[3] = fVar4 * (pfVar25[3] - pfVar25[-1]);
                } while (uVar35 < uVar34);
              }
            }
            iVar31 = uVar17 - 2;
            if (iVar31 != 0) {
              iVar27 = iVar31 * 0x10;
              do {
                fVar4 = (float)(&DAT_01dd8f60)[iVar31] * -1.0;
                pfVar32 = (float *)(param_1[0x154] + iVar27);
                iVar27 = iVar27 + -0x10;
                iVar31 = iVar31 + -1;
                *pfVar32 = fVar4 * pfVar32[4] + *pfVar32;
                pfVar32[1] = pfVar32[1] + pfVar32[5] * fVar4;
                pfVar32[2] = pfVar32[2] + pfVar32[6] * fVar4;
                pfVar32[3] = pfVar32[3] + fVar4 * pfVar32[7];
              } while (iVar31 != 0);
            }
            puVar23 = (undefined4 *)(param_1[0x153] + iVar29);
            *puVar23 = 0;
            uVar35 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            if (3 < (int)uVar34) {
              iVar27 = (uVar17 - 5 >> 2) + 1;
              iVar31 = 0x20;
              uVar35 = iVar27 * 4;
              do {
                iVar1 = iVar31 + -0x20;
                pfVar32 = (float *)(param_1[0x154] + iVar1);
                fVar4 = pfVar32[5];
                fVar5 = pfVar32[1];
                fVar6 = pfVar32[6];
                fVar7 = pfVar32[2];
                fVar8 = pfVar32[7];
                fVar9 = pfVar32[3];
                pfVar25 = (float *)(param_1[0x155] + iVar1);
                *pfVar25 = (*(float *)(param_1[0x154] + 0x10 + iVar1) - *pfVar32) * 0.33333334;
                pfVar25[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar25[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar25[3] = (fVar8 - fVar9) * 0.33333334;
                iVar18 = param_1[0x154];
                fVar4 = *(float *)(iVar18 + 4 + iVar31);
                fVar5 = *(float *)(iVar18 + 0x14 + iVar1);
                fVar6 = *(float *)(iVar18 + 8 + iVar31);
                fVar7 = *(float *)(iVar18 + 0x18 + iVar1);
                fVar8 = *(float *)(iVar18 + 0xc + iVar31);
                fVar9 = *(float *)(iVar18 + 0x1c + iVar1);
                pfVar32 = (float *)(iVar31 + -0x10 + param_1[0x155]);
                *pfVar32 = (*(float *)(iVar18 + iVar31) - *(float *)(iVar18 + 0x10 + iVar1)) *
                           0.33333334;
                pfVar32[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar32[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar32[3] = (fVar8 - fVar9) * 0.33333334;
                iVar18 = param_1[0x154];
                iVar1 = iVar31 + 0x10;
                fVar4 = *(float *)(iVar18 + 4 + iVar1);
                fVar5 = *(float *)(iVar18 + 4 + iVar31);
                fVar6 = *(float *)(iVar18 + 8 + iVar1);
                fVar7 = *(float *)(iVar18 + 8 + iVar31);
                fVar8 = *(float *)(iVar18 + 0xc + iVar1);
                fVar9 = *(float *)(iVar18 + 0xc + iVar31);
                pfVar32 = (float *)(param_1[0x155] + iVar31);
                *pfVar32 = (*(float *)(iVar18 + 0x10 + iVar31) - *(float *)(iVar18 + iVar31)) *
                           0.33333334;
                pfVar32[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar32[2] = (fVar6 - fVar7) * 0.33333334;
                iVar31 = iVar31 + 0x40;
                pfVar32[3] = (fVar8 - fVar9) * 0.33333334;
                iVar18 = param_1[0x154];
                fVar4 = *(float *)(iVar18 + -0x1c + iVar31);
                fVar5 = *(float *)(iVar18 + 4 + iVar1);
                fVar6 = *(float *)(iVar18 + -0x18 + iVar31);
                fVar7 = *(float *)(iVar18 + 8 + iVar1);
                fVar8 = *(float *)(iVar18 + -0x14 + iVar31);
                fVar9 = *(float *)(iVar18 + 0xc + iVar1);
                pfVar32 = (float *)(param_1[0x155] + iVar1);
                iVar27 = iVar27 + -1;
                *pfVar32 = (*(float *)(iVar18 + -0x20 + iVar31) - *(float *)(iVar18 + iVar1)) *
                           0.33333334;
                pfVar32[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar32[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar32[3] = (fVar8 - fVar9) * 0.33333334;
              } while (iVar27 != 0);
            }
            if (uVar35 < uVar34) {
              iVar31 = uVar35 << 4;
              iVar27 = uVar34 - uVar35;
              do {
                pfVar32 = (float *)(param_1[0x154] + 0x10 + iVar31);
                pfVar25 = (float *)(param_1[0x154] + iVar31);
                fVar4 = pfVar25[5];
                fVar5 = pfVar25[1];
                fVar6 = pfVar25[6];
                fVar7 = pfVar25[2];
                fVar8 = pfVar25[7];
                fVar9 = pfVar25[3];
                pfVar26 = (float *)(param_1[0x155] + iVar31);
                iVar31 = iVar31 + 0x10;
                iVar27 = iVar27 + -1;
                *pfVar26 = (*pfVar32 - *pfVar25) * 0.33333334;
                pfVar26[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar26[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar26[3] = (fVar8 - fVar9) * 0.33333334;
              } while (iVar27 != 0);
            }
            puVar23 = (undefined4 *)(param_1[0x155] + iVar29);
            local_194 = 0.0;
            *puVar23 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            if (3 < (int)uVar34) {
              iVar31 = (uVar17 - 5 >> 2) + 1;
              local_194 = (float)(iVar31 * 4);
              iVar29 = 0x20;
              do {
                iVar27 = iVar29 + -0x20;
                pfVar32 = (float *)(param_1[0x152] + iVar27);
                pfVar36 = (float *)(param_1[0x154] + iVar27);
                fVar4 = pfVar32[5];
                fVar5 = pfVar32[1];
                fVar6 = pfVar32[6];
                fVar7 = pfVar32[2];
                fVar8 = pfVar32[7];
                fVar9 = pfVar32[3];
                pfVar25 = (float *)(param_1[0x155] + iVar27);
                fVar10 = pfVar36[1];
                fVar11 = pfVar25[1];
                fVar12 = pfVar36[2];
                fVar13 = pfVar25[2];
                fVar14 = pfVar36[3];
                fVar15 = pfVar25[3];
                pfVar26 = (float *)(param_1[0x153] + iVar27);
                *pfVar26 = (*(float *)(param_1[0x152] + 0x10 + iVar27) - *pfVar32) -
                           (*pfVar36 + *pfVar25);
                pfVar26[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar26[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar26[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
                iVar1 = param_1[0x152];
                pfVar32 = (float *)(param_1[0x154] + 0x10 + iVar27);
                fVar4 = *(float *)(iVar29 + 4 + iVar1);
                fVar5 = *(float *)(iVar29 + -0xc + iVar1);
                fVar6 = *(float *)(iVar29 + 8 + iVar1);
                fVar7 = *(float *)(iVar29 + -8 + iVar1);
                fVar8 = *(float *)(iVar29 + 0xc + iVar1);
                fVar9 = *(float *)(iVar29 + -4 + iVar1);
                pfVar25 = (float *)(iVar29 + -0x10 + param_1[0x155]);
                fVar10 = pfVar32[1];
                fVar11 = pfVar25[1];
                fVar12 = pfVar32[2];
                fVar13 = pfVar25[2];
                fVar14 = pfVar32[3];
                fVar15 = pfVar25[3];
                pfVar26 = (float *)(param_1[0x153] + 0x10 + iVar27);
                *pfVar26 = (*(float *)(iVar29 + iVar1) - *(float *)(iVar29 + -0x10 + iVar1)) -
                           (*pfVar32 + *pfVar25);
                pfVar26[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar26[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar26[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
                iVar1 = param_1[0x152];
                iVar27 = iVar29 + 0x10;
                pfVar26 = (float *)(param_1[0x154] + iVar29);
                fVar4 = *(float *)(iVar29 + 0x14 + iVar1);
                fVar5 = *(float *)(iVar29 + 4 + iVar1);
                fVar6 = *(float *)(iVar29 + 0x18 + iVar1);
                fVar7 = *(float *)(iVar29 + 8 + iVar1);
                fVar8 = *(float *)(iVar29 + 0x1c + iVar1);
                fVar9 = *(float *)(iVar29 + 0xc + iVar1);
                pfVar32 = (float *)(param_1[0x155] + iVar29);
                fVar10 = pfVar26[1];
                fVar11 = pfVar32[1];
                fVar12 = pfVar26[2];
                fVar13 = pfVar32[2];
                fVar14 = pfVar26[3];
                fVar15 = pfVar32[3];
                pfVar25 = (float *)(param_1[0x153] + iVar29);
                *pfVar25 = (*(float *)(iVar29 + 0x10 + iVar1) - *(float *)(iVar29 + iVar1)) -
                           (*pfVar26 + *pfVar32);
                pfVar25[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar25[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar25[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
                iVar18 = param_1[0x152];
                iVar1 = iVar29 + 0x20;
                fVar4 = *(float *)(iVar29 + 0x24 + iVar18);
                fVar5 = *(float *)(iVar29 + 0x14 + iVar18);
                fVar6 = *(float *)(iVar29 + 0x28 + iVar18);
                fVar7 = *(float *)(iVar29 + 0x18 + iVar18);
                fVar8 = *(float *)(iVar29 + 0x2c + iVar18);
                fVar9 = *(float *)(iVar29 + 0x1c + iVar18);
                pfVar32 = (float *)(param_1[0x155] + iVar27);
                pfVar26 = (float *)(param_1[0x154] + iVar27);
                fVar10 = pfVar26[1];
                fVar11 = pfVar32[1];
                fVar12 = pfVar26[2];
                fVar13 = pfVar32[2];
                fVar14 = pfVar26[3];
                fVar15 = pfVar32[3];
                pfVar25 = (float *)(param_1[0x153] + iVar27);
                iVar29 = iVar29 + 0x40;
                iVar31 = iVar31 + -1;
                *pfVar25 = (*(float *)(iVar1 + iVar18) - *(float *)(iVar27 + iVar18)) -
                           (*pfVar26 + *pfVar32);
                pfVar25[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar25[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar25[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
              } while (iVar31 != 0);
            }
            if ((uint)local_194 < uVar34) {
              iVar29 = (int)local_194 << 4;
              iVar31 = uVar34 - (int)local_194;
              do {
                pfVar32 = (float *)(param_1[0x152] + 0x10 + iVar29);
                pfVar25 = (float *)(param_1[0x152] + iVar29);
                pfVar30 = (float *)(param_1[0x154] + iVar29);
                fVar4 = pfVar25[5];
                fVar5 = pfVar25[1];
                fVar6 = pfVar25[6];
                fVar7 = pfVar25[2];
                fVar8 = pfVar25[7];
                fVar9 = pfVar25[3];
                pfVar26 = (float *)(param_1[0x155] + iVar29);
                fVar10 = pfVar30[1];
                fVar11 = pfVar26[1];
                fVar12 = pfVar30[2];
                fVar13 = pfVar26[2];
                fVar14 = pfVar30[3];
                fVar15 = pfVar26[3];
                pfVar36 = (float *)(param_1[0x153] + iVar29);
                iVar29 = iVar29 + 0x10;
                iVar31 = iVar31 + -1;
                *pfVar36 = (*pfVar32 - *pfVar25) - (*pfVar30 + *pfVar26);
                pfVar36[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar36[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar36[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
              } while (iVar31 != 0);
            }
            param_1[0x156] = uVar17;
          }
        }
        local_194 = 0.0;
        fVar4 = (float)(param_1[0x114] + -2);
        if (param_1[0x114] + -2 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        local_164 = 0;
        if (uVar21 != 0) {
          pfVar32 = (float *)(iVar16 + 8 + iVar33 * 0xc);
          do {
            local_188 = local_194;
            if (fVar20 < local_194) {
              local_188 = local_194 - (fVar20 - 1.0);
            }
            if ((int)local_164 <= iVar22) {
              fVar38 = (float10)FUN_00fddce0();
              fVar5 = (float)fVar38;
              fVar6 = (float)(param_1[0x156] + -1);
              if (param_1[0x156] + -1 < 0) {
                fVar6 = fVar6 + 4.2949673e+09;
              }
              if (fVar5 <= 0.0) {
                fVar5 = 0.0;
              }
              if (fVar6 < fVar5) {
                fVar5 = fVar6;
              }
              iVar29 = param_1[0x155];
              iVar31 = param_1[0x154];
              iVar27 = param_1[0x153];
              iVar1 = param_1[0x152];
              local_160 = (float)(longlong)ROUND(fVar5);
              local_188 = local_188 - fVar5;
              local_1d0 = (*(float *)(iVar27 + (int)local_160 * 0x10) +
                          (*(float *)(iVar31 + (int)local_160 * 0x10) +
                          local_188 * *(float *)(iVar29 + (int)local_160 * 0x10)) * local_188) *
                          local_188 + *(float *)(iVar1 + (int)local_160 * 0x10);
              local_1cc = *(float *)(iVar1 + 4 + (int)local_160 * 0x10) +
                          (*(float *)(iVar27 + 4 + (int)local_160 * 0x10) +
                          (*(float *)(iVar31 + 4 + (int)local_160 * 0x10) +
                          *(float *)(iVar29 + 4 + (int)local_160 * 0x10) * local_188) * local_188) *
                          local_188;
              local_1c8 = *(float *)(iVar1 + 8 + (int)local_160 * 0x10) +
                          local_188 *
                          (*(float *)(iVar27 + 8 + (int)local_160 * 0x10) +
                          (*(float *)(iVar31 + 8 + (int)local_160 * 0x10) +
                          *(float *)(iVar29 + 8 + (int)local_160 * 0x10) * local_188) * local_188);
            }
            local_164 = local_164 + 1;
            pfVar32[-2] = local_1d0;
            pfVar32[-1] = local_1cc;
            *pfVar32 = local_1c8;
            local_194 = fVar4 / fVar3 + local_194;
            pfVar32 = pfVar32 + 6;
          } while (local_164 < uVar21);
        }
        uVar17 = param_1[0x114];
        iVar29 = param_1[(int)local_134 + 0x117];
        iVar31 = param_1[uVar24 + 0x117];
        if (uVar17 < 3) {
          FUN_00dd5650(&DAT_016df4c0,uVar17);
        }
        else {
          uVar35 = param_1[0x157];
          if (uVar35 < uVar17) {
            puVar39 = &DAT_016df478;
LAB_00ee7a65:
            FUN_00dd5650(puVar39,CONCAT44(uVar35,uVar17));
          }
          else if (param_1[0x158] == 0) {
            FUN_00dd5650();
          }
          else {
            local_194 = 0.0;
            if (3 < (int)uVar17) {
              local_164 = (uVar17 - 4 >> 2) + 1;
              iVar27 = 0;
              local_194 = (float)(local_164 * 4);
              pfVar32 = (float *)(iVar31 + 0x10);
              pfVar25 = (float *)(iVar29 + 0x1c);
              do {
                iVar1 = param_1[0x158];
                *(float *)(iVar1 + iVar27) = (pfVar25[-7] - pfVar32[-4]) * local_114 + pfVar32[-4];
                *(float *)(iVar1 + 4 + iVar27) =
                     (pfVar25[-6] - pfVar32[-3]) * local_114 + pfVar32[-3];
                *(float *)(iVar1 + 8 + iVar27) =
                     (pfVar25[-5] - pfVar32[-2]) * local_114 + pfVar32[-2];
                pfVar26 = (float *)(iVar27 + 0x10 + param_1[0x158]);
                *pfVar26 = (pfVar25[-4] - pfVar32[-1]) * local_114 + pfVar32[-1];
                pfVar26[1] = (*(float *)((iVar29 - iVar31) + -0x30 + (int)(pfVar32 + 0xc)) -
                             *pfVar32) * local_114 + *pfVar32;
                pfVar26[2] = (pfVar25[-2] - pfVar32[1]) * local_114 + pfVar32[1];
                pfVar26 = (float *)(iVar27 + 0x20 + param_1[0x158]);
                iVar27 = iVar27 + 0x40;
                local_164 = local_164 + -1;
                *pfVar26 = (pfVar25[-1] - pfVar32[2]) * local_114 + pfVar32[2];
                pfVar26[1] = (*pfVar25 - pfVar32[3]) * local_114 + pfVar32[3];
                pfVar26[2] = (pfVar25[1] - pfVar32[4]) * local_114 + pfVar32[4];
                iVar1 = param_1[0x158];
                *(float *)(iVar1 + -0x10 + iVar27) =
                     (pfVar25[2] - pfVar32[5]) * local_114 + pfVar32[5];
                *(float *)(iVar1 + -0xc + iVar27) =
                     (pfVar25[3] - pfVar32[6]) * local_114 + pfVar32[6];
                *(float *)(iVar1 + -8 + iVar27) = (pfVar25[4] - pfVar32[7]) * local_114 + pfVar32[7]
                ;
                pfVar32 = pfVar32 + 0xc;
                pfVar25 = pfVar25 + 0xc;
              } while (local_164 != 0);
            }
            if ((uint)local_194 < uVar17) {
              iVar29 = param_1[(int)local_134 + 0x117];
              iVar31 = param_1[uVar24 + 0x117];
              iVar27 = (int)local_194 << 4;
              local_164 = uVar17 - (int)local_194;
              pfVar32 = (float *)(iVar31 + 4 + (int)local_194 * 0xc);
              pfVar25 = (float *)(iVar29 + (int)local_194 * 0xc);
              do {
                iVar1 = param_1[0x158];
                iVar27 = iVar27 + 0x10;
                local_164 = local_164 + -1;
                *(float *)(iVar1 + -0x10 + iVar27) =
                     (*pfVar25 - pfVar32[-1]) * local_114 + pfVar32[-1];
                *(float *)(iVar1 + -0xc + iVar27) =
                     (*(float *)((int)pfVar32 + (iVar29 - iVar31)) - *pfVar32) * local_114 +
                     *pfVar32;
                *(float *)(iVar1 + -8 + iVar27) = (pfVar25[2] - pfVar32[1]) * local_114 + pfVar32[1]
                ;
                pfVar32 = pfVar32 + 3;
                pfVar25 = pfVar25 + 3;
              } while (local_164 != 0);
            }
            uVar35 = param_1[0x157];
            if (uVar35 < uVar17) {
              puVar39 = &DAT_016d98c0;
              goto LAB_00ee7a65;
            }
            param_1[0x152] = param_1[0x158];
            puVar23 = (undefined4 *)param_1[0x154];
            *puVar23 = 0;
            uVar34 = uVar17 - 1;
            puVar23[1] = 0;
            puVar23[2] = 0;
            iVar29 = uVar34 * 0x10;
            puVar23[3] = 0;
            puVar23 = (undefined4 *)(param_1[0x154] + iVar29);
            *puVar23 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            uVar35 = 1;
            if (1 < uVar34) {
              if (3 < (int)(uVar17 - 2)) {
                iVar27 = (uVar17 - 6 >> 2) + 1;
                uVar35 = iVar27 * 4 + 1;
                iVar31 = 0x10;
                do {
                  pfVar32 = (float *)(iVar31 + param_1[0x152]);
                  fVar4 = pfVar32[-3];
                  fVar5 = pfVar32[5];
                  fVar6 = pfVar32[-2];
                  fVar7 = pfVar32[6];
                  fVar8 = pfVar32[-1];
                  fVar9 = pfVar32[7];
                  fVar10 = pfVar32[1];
                  fVar11 = pfVar32[2];
                  fVar12 = pfVar32[3];
                  pfVar25 = (float *)(param_1[0x154] + iVar31);
                  *pfVar25 = ((*(float *)(iVar31 + -0x10 + param_1[0x152]) + pfVar32[4]) -
                             *pfVar32 * 2.0) * 3.0;
                  pfVar25[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar25[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar25[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar19 = param_1[0x152];
                  iVar1 = iVar31 + 0x20;
                  fVar4 = *(float *)(iVar31 + 4 + iVar19);
                  fVar5 = *(float *)(iVar31 + 0x24 + iVar19);
                  fVar6 = *(float *)(iVar31 + 8 + iVar19);
                  fVar7 = *(float *)(iVar31 + 0x28 + iVar19);
                  fVar8 = *(float *)(iVar31 + 0xc + iVar19);
                  fVar9 = *(float *)(iVar31 + 0x2c + iVar19);
                  fVar10 = *(float *)(iVar31 + 0x14 + iVar19);
                  fVar11 = *(float *)(iVar31 + 0x18 + iVar19);
                  fVar12 = *(float *)(iVar31 + 0x1c + iVar19);
                  pfVar32 = (float *)(iVar31 + 0x10 + param_1[0x154]);
                  iVar18 = iVar31 + 0x30;
                  *pfVar32 = ((*(float *)(iVar31 + iVar19) + *(float *)(iVar1 + iVar19)) -
                             *(float *)(iVar31 + 0x10 + iVar19) * 2.0) * 3.0;
                  pfVar32[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar32[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar32[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar19 = param_1[0x152];
                  fVar4 = *(float *)(iVar31 + 0x14 + iVar19);
                  fVar5 = *(float *)(iVar31 + 0x34 + iVar19);
                  fVar6 = *(float *)(iVar31 + 0x18 + iVar19);
                  fVar7 = *(float *)(iVar31 + 0x38 + iVar19);
                  fVar8 = *(float *)(iVar31 + 0x1c + iVar19);
                  fVar9 = *(float *)(iVar31 + 0x3c + iVar19);
                  fVar10 = *(float *)(iVar31 + 0x24 + iVar19);
                  fVar11 = *(float *)(iVar31 + 0x28 + iVar19);
                  fVar12 = *(float *)(iVar31 + 0x2c + iVar19);
                  pfVar32 = (float *)(param_1[0x154] + iVar1);
                  *pfVar32 = ((*(float *)(iVar31 + 0x10 + iVar19) + *(float *)(iVar18 + iVar19)) -
                             *(float *)(iVar1 + iVar19) * 2.0) * 3.0;
                  pfVar32[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar32[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar32[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar19 = param_1[0x152];
                  fVar4 = *(float *)(iVar31 + 0x24 + iVar19);
                  fVar5 = *(float *)(iVar31 + 0x44 + iVar19);
                  fVar6 = *(float *)(iVar31 + 0x28 + iVar19);
                  fVar7 = *(float *)(iVar31 + 0x48 + iVar19);
                  fVar8 = *(float *)(iVar31 + 0x2c + iVar19);
                  fVar9 = *(float *)(iVar31 + 0x4c + iVar19);
                  pfVar32 = (float *)(param_1[0x154] + iVar18);
                  iVar27 = iVar27 + -1;
                  fVar10 = *(float *)(iVar31 + 0x34 + iVar19);
                  fVar11 = *(float *)(iVar31 + 0x38 + iVar19);
                  fVar12 = *(float *)(iVar31 + 0x3c + iVar19);
                  *pfVar32 = ((*(float *)(iVar1 + iVar19) + *(float *)(iVar31 + 0x40 + iVar19)) -
                             *(float *)(iVar18 + iVar19) * 2.0) * 3.0;
                  pfVar32[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar32[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar32[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar31 = iVar31 + 0x40;
                } while (iVar27 != 0);
              }
              if (uVar35 < uVar34) {
                iVar31 = uVar35 << 4;
                iVar27 = uVar34 - uVar35;
                do {
                  pfVar32 = (float *)(param_1[0x152] + -0x10 + iVar31);
                  pfVar25 = (float *)(param_1[0x152] + iVar31);
                  fVar4 = pfVar25[-3];
                  fVar5 = pfVar25[5];
                  fVar6 = pfVar25[-2];
                  fVar7 = pfVar25[6];
                  fVar8 = pfVar25[-1];
                  fVar9 = pfVar25[7];
                  fVar10 = pfVar25[1];
                  fVar11 = pfVar25[2];
                  fVar12 = pfVar25[3];
                  pfVar26 = (float *)(param_1[0x154] + iVar31);
                  iVar31 = iVar31 + 0x10;
                  iVar27 = iVar27 + -1;
                  *pfVar26 = ((*pfVar32 + pfVar25[4]) - *pfVar25 * 2.0) * 3.0;
                  pfVar26[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar26[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar26[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                } while (iVar27 != 0);
              }
            }
            uVar35 = 1;
            if (1 < uVar34) {
              if (3 < (int)(uVar17 - 2)) {
                iVar31 = 0x10;
                do {
                  pfVar32 = (float *)(param_1[0x154] + iVar31);
                  fVar4 = (float)(&DAT_01dd8f60)[uVar35];
                  *pfVar32 = fVar4 * (*(float *)(param_1[0x154] + iVar31) - pfVar32[-4]);
                  pfVar32[1] = (pfVar32[1] - pfVar32[-3]) * fVar4;
                  pfVar32[2] = (pfVar32[2] - pfVar32[-2]) * fVar4;
                  pfVar32[3] = fVar4 * (pfVar32[3] - pfVar32[-1]);
                  pfVar32 = (float *)(param_1[0x154] + iVar31);
                  fVar4 = (float)(&DAT_01dd8f64)[uVar35];
                  pfVar32[4] = fVar4 * (*(float *)(param_1[0x154] + 0x10 + iVar31) - *pfVar32);
                  pfVar32[5] = (pfVar32[5] - pfVar32[1]) * fVar4;
                  pfVar32[6] = (pfVar32[6] - pfVar32[2]) * fVar4;
                  pfVar32[7] = fVar4 * (pfVar32[7] - pfVar32[3]);
                  iVar27 = param_1[0x154];
                  fVar4 = *(float *)(iVar31 + 0x14 + iVar27);
                  fVar5 = *(float *)(iVar31 + 0x18 + iVar27);
                  pfVar32 = (float *)(iVar27 + 0x2c + iVar31);
                  fVar6 = *(float *)(iVar31 + 0x1c + iVar27);
                  fVar7 = (float)(&DAT_01dd8f68)[uVar35];
                  *(float *)(iVar27 + 0x20 + iVar31) =
                       fVar7 * (*(float *)(iVar27 + 0x20 + iVar31) -
                               *(float *)(iVar31 + 0x10 + iVar27));
                  *(float *)(iVar27 + 0x24 + iVar31) =
                       (*(float *)(iVar27 + 0x24 + iVar31) - fVar4) * fVar7;
                  *(float *)(iVar27 + 0x28 + iVar31) =
                       (*(float *)(iVar27 + 0x28 + iVar31) - fVar5) * fVar7;
                  uVar35 = uVar35 + 4;
                  iVar31 = iVar31 + 0x40;
                  *(float *)(iVar27 + -0x14 + iVar31) = fVar7 * (*pfVar32 - fVar6);
                  iVar27 = param_1[0x154];
                  fVar4 = *(float *)(uVar35 * 4 + 0x1dd8f5c);
                  *(float *)(iVar27 + -0x10 + iVar31) =
                       fVar4 * (*(float *)(iVar27 + -0x10 + iVar31) -
                               *(float *)(iVar27 + -0x20 + iVar31));
                  *(float *)(iVar27 + -0xc + iVar31) =
                       (*(float *)(iVar27 + -0xc + iVar31) - *(float *)(iVar27 + -0x1c + iVar31)) *
                       fVar4;
                  *(float *)(iVar27 + -8 + iVar31) =
                       (*(float *)(iVar27 + -8 + iVar31) - *(float *)(iVar27 + -0x18 + iVar31)) *
                       fVar4;
                  *(float *)(iVar27 + -4 + iVar31) =
                       fVar4 * (*(float *)(iVar27 + -4 + iVar31) -
                               *(float *)(iVar27 + -0x14 + iVar31));
                } while (uVar35 < uVar17 - 4);
              }
              if (uVar35 < uVar34) {
                iVar31 = uVar35 << 4;
                do {
                  pfVar32 = (float *)(param_1[0x154] + iVar31);
                  pfVar25 = (float *)(param_1[0x154] + iVar31);
                  uVar35 = uVar35 + 1;
                  iVar31 = iVar31 + 0x10;
                  fVar4 = *(float *)(uVar35 * 4 + 0x1dd8f5c);
                  *pfVar25 = fVar4 * (*pfVar32 - pfVar25[-4]);
                  pfVar25[1] = (pfVar25[1] - pfVar25[-3]) * fVar4;
                  pfVar25[2] = (pfVar25[2] - pfVar25[-2]) * fVar4;
                  pfVar25[3] = fVar4 * (pfVar25[3] - pfVar25[-1]);
                } while (uVar35 < uVar34);
              }
            }
            iVar31 = uVar17 - 2;
            if (iVar31 != 0) {
              iVar27 = iVar31 * 0x10;
              do {
                fVar4 = (float)(&DAT_01dd8f60)[iVar31] * -1.0;
                pfVar32 = (float *)(param_1[0x154] + iVar27);
                iVar27 = iVar27 + -0x10;
                iVar31 = iVar31 + -1;
                *pfVar32 = *pfVar32 + fVar4 * pfVar32[4];
                pfVar32[1] = pfVar32[1] + pfVar32[5] * fVar4;
                pfVar32[2] = pfVar32[2] + pfVar32[6] * fVar4;
                pfVar32[3] = pfVar32[3] + fVar4 * pfVar32[7];
              } while (iVar31 != 0);
            }
            puVar23 = (undefined4 *)(param_1[0x153] + iVar29);
            *puVar23 = 0;
            uVar35 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            if (3 < (int)uVar34) {
              iVar27 = (uVar17 - 5 >> 2) + 1;
              uVar35 = iVar27 * 4;
              iVar31 = 0x20;
              do {
                iVar1 = iVar31 + -0x20;
                pfVar32 = (float *)(param_1[0x154] + iVar1);
                fVar4 = pfVar32[5];
                fVar5 = pfVar32[1];
                fVar6 = pfVar32[6];
                fVar7 = pfVar32[2];
                fVar8 = pfVar32[7];
                fVar9 = pfVar32[3];
                pfVar25 = (float *)(param_1[0x155] + iVar1);
                *pfVar25 = (*(float *)(param_1[0x154] + 0x10 + iVar1) - *pfVar32) * 0.33333334;
                pfVar25[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar25[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar25[3] = (fVar8 - fVar9) * 0.33333334;
                iVar1 = param_1[0x154];
                fVar4 = *(float *)(iVar31 + 4 + iVar1);
                fVar5 = *(float *)(iVar31 + -0xc + iVar1);
                fVar6 = *(float *)(iVar31 + 8 + iVar1);
                fVar7 = *(float *)(iVar31 + -8 + iVar1);
                fVar8 = *(float *)(iVar31 + 0xc + iVar1);
                fVar9 = *(float *)(iVar31 + -4 + iVar1);
                pfVar32 = (float *)(iVar31 + -0x10 + param_1[0x155]);
                *pfVar32 = (*(float *)(iVar31 + iVar1) - *(float *)(iVar31 + -0x10 + iVar1)) *
                           0.33333334;
                pfVar32[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar32[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar32[3] = (fVar8 - fVar9) * 0.33333334;
                iVar1 = param_1[0x154];
                fVar4 = *(float *)(iVar31 + 0x14 + iVar1);
                fVar5 = *(float *)(iVar31 + 4 + iVar1);
                fVar6 = *(float *)(iVar31 + 0x18 + iVar1);
                fVar7 = *(float *)(iVar31 + 8 + iVar1);
                fVar8 = *(float *)(iVar31 + 0x1c + iVar1);
                fVar9 = *(float *)(iVar31 + 0xc + iVar1);
                pfVar32 = (float *)(param_1[0x155] + iVar31);
                *pfVar32 = (*(float *)(iVar31 + 0x10 + iVar1) - *(float *)(iVar31 + iVar1)) *
                           0.33333334;
                pfVar32[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar32[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar32[3] = (fVar8 - fVar9) * 0.33333334;
                iVar1 = param_1[0x154];
                fVar4 = *(float *)(iVar31 + 0x24 + iVar1);
                fVar5 = *(float *)(iVar31 + 0x14 + iVar1);
                fVar6 = *(float *)(iVar31 + 0x28 + iVar1);
                fVar7 = *(float *)(iVar31 + 0x18 + iVar1);
                fVar8 = *(float *)(iVar31 + 0x2c + iVar1);
                fVar9 = *(float *)(iVar31 + 0x1c + iVar1);
                pfVar32 = (float *)(param_1[0x155] + iVar31 + 0x10);
                iVar27 = iVar27 + -1;
                *pfVar32 = (*(float *)(iVar31 + 0x20 + iVar1) - *(float *)(iVar31 + 0x10 + iVar1)) *
                           0.33333334;
                pfVar32[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar32[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar32[3] = (fVar8 - fVar9) * 0.33333334;
                iVar31 = iVar31 + 0x40;
              } while (iVar27 != 0);
            }
            if (uVar35 < uVar34) {
              iVar31 = uVar35 << 4;
              iVar27 = uVar34 - uVar35;
              do {
                pfVar32 = (float *)(param_1[0x154] + 0x10 + iVar31);
                pfVar25 = (float *)(param_1[0x154] + iVar31);
                fVar4 = pfVar25[5];
                fVar5 = pfVar25[1];
                fVar6 = pfVar25[6];
                fVar7 = pfVar25[2];
                fVar8 = pfVar25[7];
                fVar9 = pfVar25[3];
                pfVar26 = (float *)(param_1[0x155] + iVar31);
                iVar31 = iVar31 + 0x10;
                iVar27 = iVar27 + -1;
                *pfVar26 = (*pfVar32 - *pfVar25) * 0.33333334;
                pfVar26[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar26[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar26[3] = (fVar8 - fVar9) * 0.33333334;
              } while (iVar27 != 0);
            }
            puVar23 = (undefined4 *)(param_1[0x155] + iVar29);
            *puVar23 = 0;
            local_164 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            if (3 < (int)uVar34) {
              iVar31 = (uVar17 - 5 >> 2) + 1;
              local_164 = iVar31 * 4;
              iVar29 = 0x20;
              do {
                iVar27 = iVar29 + -0x20;
                pfVar32 = (float *)(param_1[0x152] + iVar27);
                pfVar36 = (float *)(param_1[0x154] + iVar27);
                fVar4 = pfVar32[5];
                fVar5 = pfVar32[1];
                fVar6 = pfVar32[6];
                fVar7 = pfVar32[2];
                fVar8 = pfVar32[7];
                fVar9 = pfVar32[3];
                pfVar25 = (float *)(param_1[0x155] + iVar27);
                fVar10 = pfVar36[1];
                fVar11 = pfVar25[1];
                fVar12 = pfVar36[2];
                fVar13 = pfVar25[2];
                fVar14 = pfVar36[3];
                fVar15 = pfVar25[3];
                pfVar26 = (float *)(param_1[0x153] + iVar27);
                *pfVar26 = (*(float *)(param_1[0x152] + 0x10 + iVar27) - *pfVar32) -
                           (*pfVar36 + *pfVar25);
                pfVar26[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar26[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar26[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
                iVar1 = param_1[0x152];
                pfVar32 = (float *)(param_1[0x154] + 0x10 + iVar27);
                fVar4 = *(float *)(iVar29 + 4 + iVar1);
                fVar5 = *(float *)(iVar29 + -0xc + iVar1);
                fVar6 = *(float *)(iVar29 + 8 + iVar1);
                fVar7 = *(float *)(iVar29 + -8 + iVar1);
                fVar8 = *(float *)(iVar29 + 0xc + iVar1);
                fVar9 = *(float *)(iVar29 + -4 + iVar1);
                pfVar25 = (float *)(iVar29 + -0x10 + param_1[0x155]);
                fVar10 = pfVar32[1];
                fVar11 = pfVar25[1];
                fVar12 = pfVar32[2];
                fVar13 = pfVar25[2];
                fVar14 = pfVar32[3];
                fVar15 = pfVar25[3];
                pfVar26 = (float *)(param_1[0x153] + 0x10 + iVar27);
                *pfVar26 = (*(float *)(iVar29 + iVar1) - *(float *)(iVar29 + -0x10 + iVar1)) -
                           (*pfVar32 + *pfVar25);
                pfVar26[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar26[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar26[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
                iVar1 = param_1[0x152];
                iVar27 = iVar29 + 0x10;
                pfVar26 = (float *)(param_1[0x154] + iVar29);
                fVar4 = *(float *)(iVar29 + 0x14 + iVar1);
                fVar5 = *(float *)(iVar29 + 4 + iVar1);
                fVar6 = *(float *)(iVar29 + 0x18 + iVar1);
                fVar7 = *(float *)(iVar29 + 8 + iVar1);
                fVar8 = *(float *)(iVar29 + 0x1c + iVar1);
                fVar9 = *(float *)(iVar29 + 0xc + iVar1);
                pfVar32 = (float *)(param_1[0x155] + iVar29);
                fVar10 = pfVar26[1];
                fVar11 = pfVar32[1];
                fVar12 = pfVar26[2];
                fVar13 = pfVar32[2];
                fVar14 = pfVar26[3];
                fVar15 = pfVar32[3];
                pfVar25 = (float *)(param_1[0x153] + iVar29);
                *pfVar25 = (*(float *)(iVar29 + 0x10 + iVar1) - *(float *)(iVar29 + iVar1)) -
                           (*pfVar26 + *pfVar32);
                pfVar25[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar25[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar25[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
                iVar18 = param_1[0x152];
                iVar1 = iVar29 + 0x20;
                fVar4 = *(float *)(iVar29 + 0x24 + iVar18);
                fVar5 = *(float *)(iVar29 + 0x14 + iVar18);
                fVar6 = *(float *)(iVar29 + 0x28 + iVar18);
                fVar7 = *(float *)(iVar29 + 0x18 + iVar18);
                fVar8 = *(float *)(iVar29 + 0x2c + iVar18);
                fVar9 = *(float *)(iVar29 + 0x1c + iVar18);
                pfVar32 = (float *)(param_1[0x155] + iVar27);
                pfVar26 = (float *)(param_1[0x154] + iVar27);
                fVar10 = pfVar26[1];
                fVar11 = pfVar32[1];
                fVar12 = pfVar26[2];
                fVar13 = pfVar32[2];
                fVar14 = pfVar26[3];
                fVar15 = pfVar32[3];
                pfVar25 = (float *)(param_1[0x153] + iVar27);
                iVar29 = iVar29 + 0x40;
                iVar31 = iVar31 + -1;
                *pfVar25 = (*(float *)(iVar1 + iVar18) - *(float *)(iVar27 + iVar18)) -
                           (*pfVar26 + *pfVar32);
                pfVar25[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar25[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar25[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
              } while (iVar31 != 0);
            }
            if (local_164 < uVar34) {
              iVar29 = local_164 << 4;
              iVar31 = uVar34 - local_164;
              do {
                pfVar32 = (float *)(param_1[0x152] + 0x10 + iVar29);
                pfVar25 = (float *)(param_1[0x152] + iVar29);
                pfVar30 = (float *)(param_1[0x154] + iVar29);
                fVar4 = pfVar25[5];
                fVar5 = pfVar25[1];
                fVar6 = pfVar25[6];
                fVar7 = pfVar25[2];
                fVar8 = pfVar25[7];
                fVar9 = pfVar25[3];
                pfVar26 = (float *)(param_1[0x155] + iVar29);
                fVar10 = pfVar30[1];
                fVar11 = pfVar26[1];
                fVar12 = pfVar30[2];
                fVar13 = pfVar26[2];
                fVar14 = pfVar30[3];
                fVar15 = pfVar26[3];
                pfVar36 = (float *)(param_1[0x153] + iVar29);
                iVar29 = iVar29 + 0x10;
                iVar31 = iVar31 + -1;
                *pfVar36 = (*pfVar32 - *pfVar25) - (*pfVar30 + *pfVar26);
                pfVar36[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar36[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar36[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
              } while (iVar31 != 0);
            }
            param_1[0x156] = uVar17;
          }
        }
        local_188 = 0.0;
        fVar4 = (float)(param_1[0x114] + -2);
        if (param_1[0x114] + -2 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        local_164 = 0;
        if (uVar21 != 0) {
          pfVar32 = (float *)(iVar16 + 8 + (iVar33 * 3 + 3) * 4);
          do {
            local_194 = local_188;
            if (fVar20 < local_188) {
              local_194 = local_188 - (fVar20 - 1.0);
            }
            if ((int)local_164 <= iVar22) {
              fVar38 = (float10)FUN_00fddce0();
              local_160 = (float)fVar38;
              fVar5 = (float)(param_1[0x156] + -1);
              if (param_1[0x156] + -1 < 0) {
                fVar5 = fVar5 + 4.2949673e+09;
              }
              if (local_160 <= 0.0) {
                local_160 = 0.0;
              }
              if (fVar5 < local_160) {
                local_160 = fVar5;
              }
              iVar29 = param_1[0x155];
              iVar31 = param_1[0x154];
              iVar33 = param_1[0x153];
              iVar27 = param_1[0x152];
              local_1e0 = (int)(longlong)ROUND(local_160);
              local_194 = local_194 - local_160;
              local_1d0 = (*(float *)(iVar33 + local_1e0 * 0x10) +
                          (*(float *)(iVar31 + local_1e0 * 0x10) +
                          local_194 * *(float *)(iVar29 + local_1e0 * 0x10)) * local_194) *
                          local_194 + *(float *)(iVar27 + local_1e0 * 0x10);
              local_1cc = *(float *)(iVar27 + 4 + local_1e0 * 0x10) +
                          (*(float *)(iVar33 + 4 + local_1e0 * 0x10) +
                          (*(float *)(iVar31 + 4 + local_1e0 * 0x10) +
                          *(float *)(iVar29 + 4 + local_1e0 * 0x10) * local_194) * local_194) *
                          local_194;
              local_1c8 = *(float *)(iVar27 + 8 + local_1e0 * 0x10) +
                          local_194 *
                          (*(float *)(iVar33 + 8 + local_1e0 * 0x10) +
                          (*(float *)(iVar31 + 8 + local_1e0 * 0x10) +
                          *(float *)(iVar29 + 8 + local_1e0 * 0x10) * local_194) * local_194);
            }
            local_164 = local_164 + 1;
            pfVar32[-2] = local_1d0;
            pfVar32[-1] = local_1cc;
            *pfVar32 = local_1c8;
            local_188 = fVar4 / fVar3 + local_188;
            pfVar32 = pfVar32 + 6;
          } while (local_164 < uVar21);
        }
        local_184 = local_184 + 1;
        local_190 = fVar2 + local_190;
        local_114 = fVar2 + local_114;
      } while ((int)local_184 < param_1[0x150]);
    }
    iVar22 = 1;
    if (1 < param_1[0x150]) {
      puVar23 = (undefined4 *)(uVar21 * 0x18 + 4 + iVar16);
      do {
        iVar22 = iVar22 + 1;
        puVar23[-1] = puVar23[-4];
        *puVar23 = puVar23[-3];
        puVar23[1] = puVar23[-2];
        puVar23[2] = puVar23[5];
        puVar23[3] = puVar23[6];
        puVar23[4] = puVar23[7];
        puVar23 = puVar23 + uVar21 * 6 + 6;
      } while (iVar22 < param_1[0x150]);
    }
    goto LAB_00ee8e3e;
  }
  iVar29 = param_1[uVar24 + 0x117];
  if (uVar17 < 3) {
    FUN_00dd5650(&DAT_016df4c0,uVar17);
  }
  else {
    uVar24 = param_1[0x157];
    if (uVar24 < uVar17) {
      puVar39 = &DAT_016df478;
LAB_00ee4163:
      FUN_00dd5650(puVar39,CONCAT44(uVar24,uVar17));
    }
    else if (param_1[0x158] == 0) {
      FUN_00dd5650();
    }
    else {
      local_184 = 0;
      if (3 < (int)uVar17) {
        iVar33 = (uVar17 - 4 >> 2) + 1;
        local_184 = iVar33 * 4;
        puVar23 = (undefined4 *)(iVar29 + 0x14);
        iVar31 = 0;
        do {
          iVar27 = param_1[0x158];
          *(undefined4 *)(iVar27 + iVar31) = puVar23[-5];
          iVar27 = iVar27 + iVar31;
          *(undefined4 *)(iVar27 + 4) = puVar23[-4];
          *(undefined4 *)(iVar27 + 8) = puVar23[-3];
          *(undefined4 *)(iVar27 + 0xc) = 0x3f800000;
          puVar28 = (undefined4 *)(param_1[0x158] + 0x10 + iVar31);
          *puVar28 = puVar23[-2];
          puVar28[1] = puVar23[-1];
          puVar28[2] = *puVar23;
          puVar28[3] = 0x3f800000;
          puVar28 = (undefined4 *)(iVar31 + 0x20 + param_1[0x158]);
          *puVar28 = puVar23[1];
          puVar28[1] = puVar23[2];
          puVar28[2] = puVar23[3];
          puVar28[3] = 0x3f800000;
          puVar28 = (undefined4 *)(param_1[0x158] + iVar31 + 0x30);
          iVar33 = iVar33 + -1;
          *puVar28 = puVar23[4];
          puVar28[1] = puVar23[5];
          puVar28[2] = puVar23[6];
          puVar28[3] = 0x3f800000;
          puVar23 = puVar23 + 0xc;
          iVar31 = iVar31 + 0x40;
        } while (iVar33 != 0);
      }
      if (local_184 < uVar17) {
        iVar31 = local_184 << 4;
        iVar33 = uVar17 - local_184;
        puVar23 = (undefined4 *)(iVar29 + 8 + local_184 * 0xc);
        do {
          puVar28 = (undefined4 *)(param_1[0x158] + iVar31);
          *puVar28 = puVar23[-2];
          iVar31 = iVar31 + 0x10;
          iVar33 = iVar33 + -1;
          puVar28[1] = puVar23[-1];
          puVar28[2] = *puVar23;
          puVar28[3] = 0x3f800000;
          puVar23 = puVar23 + 3;
        } while (iVar33 != 0);
      }
      uVar24 = param_1[0x157];
      if (uVar24 < uVar17) {
        puVar39 = &DAT_016d98c0;
        goto LAB_00ee4163;
      }
      param_1[0x152] = param_1[0x158];
      puVar23 = (undefined4 *)param_1[0x154];
      *puVar23 = 0;
      uVar35 = uVar17 - 1;
      puVar23[1] = 0;
      puVar23[2] = 0;
      iVar29 = uVar35 * 0x10;
      puVar23[3] = 0;
      puVar23 = (undefined4 *)(param_1[0x154] + iVar29);
      *puVar23 = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      uVar24 = 1;
      if (1 < uVar35) {
        if (3 < (int)(uVar17 - 2)) {
          iVar33 = (uVar17 - 6 >> 2) + 1;
          uVar24 = iVar33 * 4 + 1;
          iVar31 = 0x10;
          do {
            pfVar32 = (float *)(iVar31 + param_1[0x152]);
            fVar2 = pfVar32[-3];
            fVar3 = pfVar32[5];
            fVar4 = pfVar32[-2];
            fVar5 = pfVar32[6];
            fVar6 = pfVar32[-1];
            fVar7 = pfVar32[7];
            fVar8 = pfVar32[1];
            fVar9 = pfVar32[2];
            fVar10 = pfVar32[3];
            pfVar25 = (float *)(param_1[0x154] + iVar31);
            *pfVar25 = ((*(float *)(iVar31 + -0x10 + param_1[0x152]) + pfVar32[4]) - *pfVar32 * 2.0)
                       * 3.0;
            pfVar25[1] = ((fVar2 + fVar3) - fVar8 * 2.0) * 3.0;
            pfVar25[2] = ((fVar4 + fVar5) - fVar9 * 2.0) * 3.0;
            pfVar25[3] = ((fVar6 + fVar7) - fVar10 * 2.0) * 3.0;
            iVar18 = param_1[0x152];
            iVar27 = iVar31 + 0x20;
            fVar2 = *(float *)(iVar18 + 4 + iVar31);
            fVar3 = *(float *)(iVar31 + 0x24 + iVar18);
            fVar4 = *(float *)(iVar18 + 8 + iVar31);
            fVar5 = *(float *)(iVar31 + 0x28 + iVar18);
            fVar6 = *(float *)(iVar18 + 0xc + iVar31);
            fVar7 = *(float *)(iVar31 + 0x2c + iVar18);
            fVar8 = *(float *)(iVar18 + 0x14 + iVar31);
            fVar9 = *(float *)(iVar18 + 0x18 + iVar31);
            fVar10 = *(float *)(iVar18 + 0x1c + iVar31);
            pfVar32 = (float *)(iVar31 + 0x10 + param_1[0x154]);
            iVar1 = iVar31 + 0x30;
            *pfVar32 = ((*(float *)(iVar18 + iVar31) + *(float *)(iVar27 + iVar18)) -
                       *(float *)(iVar18 + 0x10 + iVar31) * 2.0) * 3.0;
            pfVar32[1] = ((fVar2 + fVar3) - fVar8 * 2.0) * 3.0;
            pfVar32[2] = ((fVar4 + fVar5) - fVar9 * 2.0) * 3.0;
            pfVar32[3] = ((fVar6 + fVar7) - fVar10 * 2.0) * 3.0;
            iVar18 = param_1[0x152];
            fVar2 = *(float *)(iVar18 + 0x14 + iVar31);
            fVar3 = *(float *)(iVar31 + 0x34 + iVar18);
            fVar4 = *(float *)(iVar18 + 0x18 + iVar31);
            fVar5 = *(float *)(iVar31 + 0x38 + iVar18);
            fVar6 = *(float *)(iVar18 + 0x1c + iVar31);
            fVar7 = *(float *)(iVar31 + 0x3c + iVar18);
            fVar8 = *(float *)(iVar31 + 0x24 + iVar18);
            fVar9 = *(float *)(iVar31 + 0x28 + iVar18);
            fVar10 = *(float *)(iVar31 + 0x2c + iVar18);
            pfVar32 = (float *)(param_1[0x154] + iVar27);
            *pfVar32 = ((*(float *)(iVar18 + 0x10 + iVar31) + *(float *)(iVar1 + iVar18)) -
                       *(float *)(iVar27 + iVar18) * 2.0) * 3.0;
            pfVar32[1] = ((fVar2 + fVar3) - fVar8 * 2.0) * 3.0;
            pfVar32[2] = ((fVar4 + fVar5) - fVar9 * 2.0) * 3.0;
            pfVar32[3] = ((fVar6 + fVar7) - fVar10 * 2.0) * 3.0;
            iVar18 = param_1[0x152];
            local_1d0 = *(float *)(iVar27 + iVar18) + *(float *)(iVar31 + 0x40 + iVar18);
            local_1cc = *(float *)(iVar31 + 0x24 + iVar18) + *(float *)(iVar31 + 0x44 + iVar18);
            local_1c8 = *(float *)(iVar31 + 0x28 + iVar18) + *(float *)(iVar31 + 0x48 + iVar18);
            fVar2 = *(float *)(iVar31 + 0x2c + iVar18);
            fVar3 = *(float *)(iVar31 + 0x4c + iVar18);
            pfVar32 = (float *)(param_1[0x154] + iVar1);
            iVar33 = iVar33 + -1;
            fVar4 = *(float *)(iVar31 + 0x34 + iVar18);
            fVar5 = *(float *)(iVar31 + 0x38 + iVar18);
            fVar6 = *(float *)(iVar31 + 0x3c + iVar18);
            *pfVar32 = (local_1d0 - *(float *)(iVar1 + iVar18) * 2.0) * 3.0;
            pfVar32[1] = (local_1cc - fVar4 * 2.0) * 3.0;
            pfVar32[2] = (local_1c8 - fVar5 * 2.0) * 3.0;
            pfVar32[3] = ((fVar2 + fVar3) - fVar6 * 2.0) * 3.0;
            iVar31 = iVar31 + 0x40;
          } while (iVar33 != 0);
        }
        if (uVar24 < uVar35) {
          iVar31 = uVar24 << 4;
          iVar33 = uVar35 - uVar24;
          do {
            pfVar32 = (float *)(param_1[0x152] + iVar31);
            local_1d0 = *(float *)(param_1[0x152] + -0x10 + iVar31) + pfVar32[4];
            local_1cc = pfVar32[-3] + pfVar32[5];
            local_1c8 = pfVar32[-2] + pfVar32[6];
            fVar2 = pfVar32[-1];
            fVar3 = pfVar32[7];
            fVar4 = pfVar32[1];
            fVar5 = pfVar32[2];
            fVar6 = pfVar32[3];
            pfVar25 = (float *)(param_1[0x154] + iVar31);
            iVar31 = iVar31 + 0x10;
            iVar33 = iVar33 + -1;
            *pfVar25 = (local_1d0 - *pfVar32 * 2.0) * 3.0;
            pfVar25[1] = (local_1cc - fVar4 * 2.0) * 3.0;
            pfVar25[2] = (local_1c8 - fVar5 * 2.0) * 3.0;
            pfVar25[3] = ((fVar2 + fVar3) - fVar6 * 2.0) * 3.0;
          } while (iVar33 != 0);
        }
      }
      uVar24 = 1;
      if (1 < uVar35) {
        if (3 < (int)(uVar17 - 2)) {
          iVar31 = 0x10;
          do {
            pfVar32 = (float *)(param_1[0x154] + iVar31);
            fVar2 = (float)(&DAT_01dd8f60)[uVar24];
            *pfVar32 = fVar2 * (*(float *)(param_1[0x154] + iVar31) - pfVar32[-4]);
            pfVar32[1] = (pfVar32[1] - pfVar32[-3]) * fVar2;
            pfVar32[2] = (pfVar32[2] - pfVar32[-2]) * fVar2;
            pfVar32[3] = fVar2 * (pfVar32[3] - pfVar32[-1]);
            pfVar32 = (float *)(param_1[0x154] + iVar31);
            fVar2 = (float)(&DAT_01dd8f64)[uVar24];
            pfVar32[4] = fVar2 * (*(float *)(param_1[0x154] + 0x10 + iVar31) - *pfVar32);
            pfVar32[5] = (pfVar32[5] - pfVar32[1]) * fVar2;
            pfVar32[6] = (pfVar32[6] - pfVar32[2]) * fVar2;
            pfVar32[7] = fVar2 * (pfVar32[7] - pfVar32[3]);
            iVar33 = param_1[0x154];
            fVar2 = *(float *)(iVar31 + 0x14 + iVar33);
            fVar3 = *(float *)(iVar31 + 0x18 + iVar33);
            pfVar32 = (float *)(iVar33 + 0x2c + iVar31);
            fVar4 = *(float *)(iVar31 + 0x1c + iVar33);
            fVar5 = (float)(&DAT_01dd8f68)[uVar24];
            *(float *)(iVar33 + 0x20 + iVar31) =
                 fVar5 * (*(float *)(iVar33 + 0x20 + iVar31) - *(float *)(iVar31 + 0x10 + iVar33));
            *(float *)(iVar33 + 0x24 + iVar31) =
                 (*(float *)(iVar33 + 0x24 + iVar31) - fVar2) * fVar5;
            *(float *)(iVar33 + 0x28 + iVar31) =
                 (*(float *)(iVar33 + 0x28 + iVar31) - fVar3) * fVar5;
            uVar24 = uVar24 + 4;
            iVar31 = iVar31 + 0x40;
            *(float *)(iVar33 + -0x14 + iVar31) = fVar5 * (*pfVar32 - fVar4);
            iVar33 = param_1[0x154];
            local_1d0 = *(float *)(iVar33 + -0x10 + iVar31) - *(float *)(iVar33 + -0x20 + iVar31);
            local_1cc = *(float *)(iVar33 + -0xc + iVar31) - *(float *)(iVar33 + -0x1c + iVar31);
            local_1c8 = *(float *)(iVar33 + -8 + iVar31) - *(float *)(iVar33 + -0x18 + iVar31);
            fVar2 = *(float *)(uVar24 * 4 + 0x1dd8f5c);
            *(float *)(iVar33 + -0x10 + iVar31) = fVar2 * local_1d0;
            *(float *)(iVar33 + -0xc + iVar31) = local_1cc * fVar2;
            *(float *)(iVar33 + -8 + iVar31) = local_1c8 * fVar2;
            *(float *)(iVar33 + -4 + iVar31) =
                 fVar2 * (*(float *)(iVar33 + -4 + iVar31) - *(float *)(iVar33 + -0x14 + iVar31));
          } while (uVar24 < uVar17 - 4);
        }
        if (uVar24 < uVar35) {
          iVar31 = uVar24 << 4;
          do {
            pfVar32 = (float *)(param_1[0x154] + iVar31);
            local_1d0 = *(float *)(param_1[0x154] + iVar31) - pfVar32[-4];
            uVar24 = uVar24 + 1;
            iVar31 = iVar31 + 0x10;
            local_1cc = pfVar32[1] - pfVar32[-3];
            local_1c8 = pfVar32[2] - pfVar32[-2];
            fVar2 = *(float *)(uVar24 * 4 + 0x1dd8f5c);
            *pfVar32 = fVar2 * local_1d0;
            pfVar32[1] = local_1cc * fVar2;
            pfVar32[2] = local_1c8 * fVar2;
            pfVar32[3] = fVar2 * (pfVar32[3] - pfVar32[-1]);
          } while (uVar24 < uVar35);
        }
      }
      iVar31 = uVar17 - 2;
      if (iVar31 != 0) {
        iVar33 = iVar31 * 0x10;
        do {
          fVar2 = (float)(&DAT_01dd8f60)[iVar31] * -1.0;
          pfVar32 = (float *)(param_1[0x154] + iVar33);
          iVar33 = iVar33 + -0x10;
          iVar31 = iVar31 + -1;
          *pfVar32 = *pfVar32 + fVar2 * pfVar32[4];
          pfVar32[1] = pfVar32[1] + pfVar32[5] * fVar2;
          pfVar32[2] = pfVar32[2] + pfVar32[6] * fVar2;
          pfVar32[3] = pfVar32[3] + fVar2 * pfVar32[7];
        } while (iVar31 != 0);
      }
      puVar23 = (undefined4 *)(param_1[0x153] + iVar29);
      *puVar23 = 0;
      uVar24 = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      if (3 < (int)uVar35) {
        iVar33 = (uVar17 - 5 >> 2) + 1;
        iVar31 = 0x20;
        uVar24 = iVar33 * 4;
        do {
          iVar27 = iVar31 + -0x20;
          pfVar32 = (float *)(param_1[0x154] + iVar27);
          fVar2 = pfVar32[5];
          fVar3 = pfVar32[1];
          fVar4 = pfVar32[6];
          fVar5 = pfVar32[2];
          fVar6 = pfVar32[7];
          fVar7 = pfVar32[3];
          pfVar25 = (float *)(param_1[0x155] + iVar27);
          *pfVar25 = (*(float *)(param_1[0x154] + 0x10 + iVar27) - *pfVar32) * 0.33333334;
          pfVar25[1] = (fVar2 - fVar3) * 0.33333334;
          pfVar25[2] = (fVar4 - fVar5) * 0.33333334;
          pfVar25[3] = (fVar6 - fVar7) * 0.33333334;
          iVar18 = param_1[0x154];
          fVar2 = *(float *)(iVar18 + 4 + iVar31);
          fVar3 = *(float *)(iVar18 + 0x14 + iVar27);
          fVar4 = *(float *)(iVar18 + 8 + iVar31);
          fVar5 = *(float *)(iVar18 + 0x18 + iVar27);
          fVar6 = *(float *)(iVar18 + 0xc + iVar31);
          fVar7 = *(float *)(iVar18 + 0x1c + iVar27);
          pfVar32 = (float *)(param_1[0x155] + 0x10 + iVar27);
          iVar1 = iVar31 + 0x10;
          *pfVar32 = (*(float *)(iVar18 + iVar31) - *(float *)(iVar18 + 0x10 + iVar27)) * 0.33333334
          ;
          pfVar32[1] = (fVar2 - fVar3) * 0.33333334;
          pfVar32[2] = (fVar4 - fVar5) * 0.33333334;
          pfVar32[3] = (fVar6 - fVar7) * 0.33333334;
          iVar27 = param_1[0x154];
          fVar2 = *(float *)(iVar27 + 4 + iVar1);
          fVar3 = *(float *)(iVar27 + 4 + iVar31);
          fVar4 = *(float *)(iVar27 + 8 + iVar1);
          fVar5 = *(float *)(iVar27 + 8 + iVar31);
          fVar6 = *(float *)(iVar27 + 0xc + iVar1);
          fVar7 = *(float *)(iVar27 + 0xc + iVar31);
          pfVar32 = (float *)(param_1[0x155] + iVar31);
          *pfVar32 = (*(float *)(iVar27 + iVar1) - *(float *)(iVar27 + iVar31)) * 0.33333334;
          pfVar32[1] = (fVar2 - fVar3) * 0.33333334;
          pfVar32[2] = (fVar4 - fVar5) * 0.33333334;
          iVar31 = iVar31 + 0x40;
          pfVar32[3] = (fVar6 - fVar7) * 0.33333334;
          iVar27 = param_1[0x154];
          local_1d0 = *(float *)(iVar27 + -0x20 + iVar31) - *(float *)(iVar27 + iVar1);
          local_1cc = *(float *)(iVar27 + -0x1c + iVar31) - *(float *)(iVar27 + 4 + iVar1);
          local_1c8 = *(float *)(iVar27 + -0x18 + iVar31) - *(float *)(iVar27 + 8 + iVar1);
          fVar2 = *(float *)(iVar27 + -0x14 + iVar31);
          fVar3 = *(float *)(iVar27 + 0xc + iVar1);
          pfVar32 = (float *)(param_1[0x155] + iVar1);
          iVar33 = iVar33 + -1;
          *pfVar32 = local_1d0 * 0.33333334;
          pfVar32[1] = local_1cc * 0.33333334;
          pfVar32[2] = local_1c8 * 0.33333334;
          pfVar32[3] = (fVar2 - fVar3) * 0.33333334;
        } while (iVar33 != 0);
      }
      if (uVar24 < uVar35) {
        iVar31 = uVar24 << 4;
        iVar33 = uVar35 - uVar24;
        do {
          pfVar32 = (float *)(param_1[0x154] + iVar31);
          local_1d0 = *(float *)(param_1[0x154] + 0x10 + iVar31) - *pfVar32;
          local_1cc = pfVar32[5] - pfVar32[1];
          local_1c8 = pfVar32[6] - pfVar32[2];
          fVar2 = pfVar32[7];
          fVar3 = pfVar32[3];
          pfVar32 = (float *)(param_1[0x155] + iVar31);
          iVar31 = iVar31 + 0x10;
          iVar33 = iVar33 + -1;
          *pfVar32 = local_1d0 * 0.33333334;
          pfVar32[1] = local_1cc * 0.33333334;
          pfVar32[2] = local_1c8 * 0.33333334;
          pfVar32[3] = (fVar2 - fVar3) * 0.33333334;
        } while (iVar33 != 0);
      }
      puVar23 = (undefined4 *)(param_1[0x155] + iVar29);
      local_184 = 0;
      *puVar23 = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      if (3 < (int)uVar35) {
        iVar31 = (uVar17 - 5 >> 2) + 1;
        local_184 = iVar31 * 4;
        iVar29 = 0x20;
        do {
          iVar33 = iVar29 + -0x20;
          pfVar32 = (float *)(param_1[0x152] + iVar33);
          pfVar36 = (float *)(param_1[0x154] + iVar33);
          fVar2 = pfVar32[5];
          fVar3 = pfVar32[1];
          fVar4 = pfVar32[6];
          fVar5 = pfVar32[2];
          fVar6 = pfVar32[7];
          fVar7 = pfVar32[3];
          pfVar25 = (float *)(param_1[0x155] + iVar33);
          fVar8 = pfVar36[1];
          fVar9 = pfVar25[1];
          fVar10 = pfVar36[2];
          fVar11 = pfVar25[2];
          fVar12 = pfVar36[3];
          fVar13 = pfVar25[3];
          pfVar26 = (float *)(param_1[0x153] + iVar33);
          *pfVar26 = (*(float *)(param_1[0x152] + 0x10 + iVar33) - *pfVar32) - (*pfVar36 + *pfVar25)
          ;
          pfVar26[1] = (fVar2 - fVar3) - (fVar8 + fVar9);
          pfVar26[2] = (fVar4 - fVar5) - (fVar10 + fVar11);
          pfVar26[3] = (fVar6 - fVar7) - (fVar12 + fVar13);
          iVar27 = param_1[0x152];
          pfVar32 = (float *)(param_1[0x154] + 0x10 + iVar33);
          fVar2 = *(float *)(iVar27 + 4 + iVar29);
          fVar3 = *(float *)(iVar27 + 0x14 + iVar33);
          fVar4 = *(float *)(iVar27 + 8 + iVar29);
          fVar5 = *(float *)(iVar27 + 0x18 + iVar33);
          fVar6 = *(float *)(iVar27 + 0xc + iVar29);
          fVar7 = *(float *)(iVar27 + 0x1c + iVar33);
          pfVar25 = (float *)(param_1[0x155] + 0x10 + iVar33);
          fVar8 = pfVar32[1];
          fVar9 = pfVar25[1];
          fVar10 = pfVar32[2];
          fVar11 = pfVar25[2];
          fVar12 = pfVar32[3];
          fVar13 = pfVar25[3];
          pfVar26 = (float *)(param_1[0x153] + 0x10 + iVar33);
          *pfVar26 = (*(float *)(iVar27 + iVar29) - *(float *)(iVar27 + 0x10 + iVar33)) -
                     (*pfVar32 + *pfVar25);
          pfVar26[1] = (fVar2 - fVar3) - (fVar8 + fVar9);
          pfVar26[2] = (fVar4 - fVar5) - (fVar10 + fVar11);
          pfVar26[3] = (fVar6 - fVar7) - (fVar12 + fVar13);
          iVar27 = param_1[0x152];
          iVar33 = iVar29 + 0x10;
          pfVar26 = (float *)(param_1[0x154] + iVar29);
          fVar2 = *(float *)(iVar27 + 4 + iVar33);
          fVar3 = *(float *)(iVar27 + 4 + iVar29);
          fVar4 = *(float *)(iVar27 + 8 + iVar33);
          fVar5 = *(float *)(iVar27 + 8 + iVar29);
          fVar6 = *(float *)(iVar27 + 0xc + iVar33);
          fVar7 = *(float *)(iVar27 + 0xc + iVar29);
          pfVar32 = (float *)(param_1[0x155] + iVar29);
          fVar8 = pfVar26[1];
          fVar9 = pfVar32[1];
          fVar10 = pfVar26[2];
          fVar11 = pfVar32[2];
          fVar12 = pfVar26[3];
          fVar13 = pfVar32[3];
          pfVar25 = (float *)(param_1[0x153] + iVar29);
          *pfVar25 = (*(float *)(iVar27 + 0x10 + iVar29) - *(float *)(iVar27 + iVar29)) -
                     (*pfVar26 + *pfVar32);
          pfVar25[1] = (fVar2 - fVar3) - (fVar8 + fVar9);
          pfVar25[2] = (fVar4 - fVar5) - (fVar10 + fVar11);
          pfVar25[3] = (fVar6 - fVar7) - (fVar12 + fVar13);
          iVar27 = param_1[0x152];
          local_1d0 = *(float *)(iVar27 + 0x20 + iVar29) - *(float *)(iVar27 + iVar33);
          local_1cc = *(float *)(iVar27 + 0x24 + iVar29) - *(float *)(iVar27 + 4 + iVar33);
          local_1c8 = *(float *)(iVar27 + 0x28 + iVar29) - *(float *)(iVar27 + 8 + iVar33);
          fVar2 = *(float *)(iVar27 + 0x2c + iVar29);
          fVar3 = *(float *)(iVar27 + 0xc + iVar33);
          pfVar32 = (float *)(param_1[0x155] + iVar33);
          pfVar26 = (float *)(param_1[0x154] + iVar33);
          fVar4 = pfVar26[1];
          fVar5 = pfVar32[1];
          fVar6 = pfVar26[2];
          fVar7 = pfVar32[2];
          fVar8 = pfVar26[3];
          fVar9 = pfVar32[3];
          pfVar25 = (float *)(param_1[0x153] + iVar33);
          iVar29 = iVar29 + 0x40;
          iVar31 = iVar31 + -1;
          *pfVar25 = local_1d0 - (*pfVar26 + *pfVar32);
          pfVar25[1] = local_1cc - (fVar4 + fVar5);
          pfVar25[2] = local_1c8 - (fVar6 + fVar7);
          pfVar25[3] = (fVar2 - fVar3) - (fVar8 + fVar9);
        } while (iVar31 != 0);
      }
      if (local_184 < uVar35) {
        iVar29 = local_184 << 4;
        iVar31 = uVar35 - local_184;
        do {
          pfVar32 = (float *)(param_1[0x152] + iVar29);
          local_1d0 = *(float *)(param_1[0x152] + 0x10 + iVar29) - *pfVar32;
          pfVar26 = (float *)(param_1[0x154] + iVar29);
          local_1cc = pfVar32[5] - pfVar32[1];
          local_1c8 = pfVar32[6] - pfVar32[2];
          fVar2 = pfVar32[7];
          fVar3 = pfVar32[3];
          pfVar32 = (float *)(param_1[0x155] + iVar29);
          fVar4 = pfVar26[1];
          fVar5 = pfVar32[1];
          fVar6 = pfVar26[2];
          fVar7 = pfVar32[2];
          fVar8 = pfVar26[3];
          fVar9 = pfVar32[3];
          pfVar25 = (float *)(param_1[0x153] + iVar29);
          iVar29 = iVar29 + 0x10;
          iVar31 = iVar31 + -1;
          *pfVar25 = local_1d0 - (*pfVar26 + *pfVar32);
          pfVar25[1] = local_1cc - (fVar4 + fVar5);
          pfVar25[2] = local_1c8 - (fVar6 + fVar7);
          pfVar25[3] = (fVar2 - fVar3) - (fVar8 + fVar9);
        } while (iVar31 != 0);
      }
      param_1[0x156] = uVar17;
    }
  }
  local_114 = 0.0;
  fVar2 = (float)(int)uVar21;
  if ((int)uVar21 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar3 = (float)(param_1[0x114] + -2);
  if (param_1[0x114] + -2 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  local_194 = 0.0;
  if (uVar21 != 0) {
    pfVar32 = (float *)(iVar16 + 8);
    do {
      local_154 = local_114;
      if (fVar20 < local_114) {
        local_154 = local_114 - (fVar20 - 1.0);
      }
      if ((int)local_194 <= iVar22) {
        fVar38 = (float10)FUN_00fddce0((double)local_154);
        local_160 = (float)fVar38;
        fVar4 = (float)(param_1[0x156] + -1);
        if (param_1[0x156] + -1 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        if (local_160 <= 0.0) {
          local_160 = 0.0;
        }
        if (fVar4 < local_160) {
          local_160 = fVar4;
        }
        iVar29 = param_1[0x155];
        iVar31 = param_1[0x154];
        iVar33 = param_1[0x153];
        iVar27 = param_1[0x152];
        local_1e0 = (int)(longlong)ROUND(local_160);
        local_154 = local_154 - local_160;
        local_1d0 = ((local_154 * *(float *)(iVar29 + local_1e0 * 0x10) +
                     *(float *)(iVar31 + local_1e0 * 0x10)) * local_154 +
                    *(float *)(iVar33 + local_1e0 * 0x10)) * local_154 +
                    *(float *)(iVar27 + local_1e0 * 0x10);
        local_1cc = *(float *)(iVar27 + 4 + local_1e0 * 0x10) +
                    local_154 *
                    (*(float *)(iVar33 + 4 + local_1e0 * 0x10) +
                    local_154 *
                    (*(float *)(iVar31 + 4 + local_1e0 * 0x10) +
                    *(float *)(iVar29 + 4 + local_1e0 * 0x10) * local_154));
        local_1c8 = *(float *)(iVar27 + 8 + local_1e0 * 0x10) +
                    local_154 *
                    (*(float *)(iVar33 + 8 + local_1e0 * 0x10) +
                    local_154 *
                    (*(float *)(iVar31 + 8 + local_1e0 * 0x10) +
                    *(float *)(iVar29 + 8 + local_1e0 * 0x10) * local_154));
      }
      local_194 = (float)((int)local_194 + 1);
      pfVar32[-2] = local_1d0;
      pfVar32[-1] = local_1cc;
      *pfVar32 = local_1c8;
      local_114 = fVar3 / fVar2 + local_114;
      pfVar32 = pfVar32 + 6;
    } while ((uint)local_194 < uVar21);
  }
  uVar17 = param_1[0x114];
  iVar29 = param_1[(int)local_134 + 0x117];
  if (uVar17 < 3) {
    FUN_00dd5650(&DAT_016df4c0,uVar17);
  }
  else if ((uint)param_1[0x157] < uVar17) {
    FUN_00dd5650(&DAT_016df478,uVar17,param_1[0x157]);
  }
  else if (param_1[0x158] == 0) {
    FUN_00dd5650();
  }
  else {
    local_184 = 0;
    if (3 < (int)uVar17) {
      iVar33 = (uVar17 - 4 >> 2) + 1;
      local_184 = iVar33 * 4;
      puVar23 = (undefined4 *)(iVar29 + 0x14);
      iVar31 = 0;
      do {
        iVar27 = param_1[0x158];
        *(undefined4 *)(iVar27 + iVar31) = puVar23[-5];
        iVar27 = iVar27 + iVar31;
        *(undefined4 *)(iVar27 + 4) = puVar23[-4];
        *(undefined4 *)(iVar27 + 8) = puVar23[-3];
        *(undefined4 *)(iVar27 + 0xc) = 0x3f800000;
        puVar28 = (undefined4 *)(iVar31 + 0x10 + param_1[0x158]);
        *puVar28 = puVar23[-2];
        puVar28[1] = puVar23[-1];
        puVar28[2] = *puVar23;
        puVar28[3] = 0x3f800000;
        puVar28 = (undefined4 *)(iVar31 + 0x20 + param_1[0x158]);
        *puVar28 = puVar23[1];
        puVar28[1] = puVar23[2];
        puVar28[2] = puVar23[3];
        puVar28[3] = 0x3f800000;
        puVar28 = (undefined4 *)(param_1[0x158] + iVar31 + 0x30);
        iVar33 = iVar33 + -1;
        *puVar28 = puVar23[4];
        puVar28[1] = puVar23[5];
        puVar28[2] = puVar23[6];
        puVar28[3] = 0x3f800000;
        puVar23 = puVar23 + 0xc;
        iVar31 = iVar31 + 0x40;
      } while (iVar33 != 0);
    }
    if (local_184 < uVar17) {
      iVar31 = local_184 << 4;
      iVar33 = uVar17 - local_184;
      puVar23 = (undefined4 *)(iVar29 + 8 + local_184 * 0xc);
      do {
        puVar28 = (undefined4 *)(param_1[0x158] + iVar31);
        *puVar28 = puVar23[-2];
        iVar31 = iVar31 + 0x10;
        iVar33 = iVar33 + -1;
        puVar28[1] = puVar23[-1];
        puVar28[2] = *puVar23;
        puVar28[3] = 0x3f800000;
        puVar23 = puVar23 + 3;
      } while (iVar33 != 0);
    }
    if ((uint)param_1[0x157] < uVar17) {
      FUN_00dd5650(&DAT_016d98c0,uVar17,param_1[0x157]);
    }
    else {
      param_1[0x152] = param_1[0x158];
      puVar23 = (undefined4 *)param_1[0x154];
      *puVar23 = 0;
      uVar35 = uVar17 - 1;
      puVar23[1] = 0;
      puVar23[2] = 0;
      iVar29 = uVar35 * 0x10;
      puVar23[3] = 0;
      puVar23 = (undefined4 *)(param_1[0x154] + iVar29);
      *puVar23 = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      uVar24 = 1;
      if (1 < uVar35) {
        if (3 < (int)(uVar17 - 2)) {
          iVar33 = (uVar17 - 6 >> 2) + 1;
          iVar31 = 0x10;
          uVar24 = iVar33 * 4 + 1;
          do {
            pfVar32 = (float *)(iVar31 + param_1[0x152]);
            fVar3 = pfVar32[-3];
            fVar4 = pfVar32[5];
            fVar5 = pfVar32[-2];
            fVar6 = pfVar32[6];
            fVar7 = pfVar32[-1];
            fVar8 = pfVar32[7];
            fVar9 = pfVar32[1];
            fVar10 = pfVar32[2];
            fVar11 = pfVar32[3];
            pfVar25 = (float *)(param_1[0x154] + iVar31);
            *pfVar25 = ((*(float *)(iVar31 + -0x10 + param_1[0x152]) + pfVar32[4]) - *pfVar32 * 2.0)
                       * 3.0;
            pfVar25[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar25[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar25[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
            iVar18 = param_1[0x152];
            iVar27 = iVar31 + 0x20;
            fVar3 = *(float *)(iVar31 + 4 + iVar18);
            fVar4 = *(float *)(iVar18 + 4 + iVar27);
            fVar5 = *(float *)(iVar31 + 8 + iVar18);
            fVar6 = *(float *)(iVar18 + 8 + iVar27);
            fVar7 = *(float *)(iVar31 + 0xc + iVar18);
            fVar8 = *(float *)(iVar18 + 0xc + iVar27);
            fVar9 = *(float *)(iVar31 + 0x14 + iVar18);
            fVar10 = *(float *)(iVar31 + 0x18 + iVar18);
            fVar11 = *(float *)(iVar31 + 0x1c + iVar18);
            pfVar32 = (float *)(iVar31 + 0x10 + param_1[0x154]);
            iVar1 = iVar31 + 0x30;
            *pfVar32 = ((*(float *)(iVar31 + iVar18) + *(float *)(iVar18 + iVar27)) -
                       *(float *)(iVar31 + 0x10 + iVar18) * 2.0) * 3.0;
            pfVar32[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar32[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar32[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
            iVar18 = param_1[0x152];
            fVar3 = *(float *)(iVar31 + 0x14 + iVar18);
            fVar4 = *(float *)(iVar18 + 4 + iVar1);
            fVar5 = *(float *)(iVar31 + 0x18 + iVar18);
            fVar6 = *(float *)(iVar18 + 8 + iVar1);
            fVar7 = *(float *)(iVar31 + 0x1c + iVar18);
            fVar8 = *(float *)(iVar18 + 0xc + iVar1);
            fVar9 = *(float *)(iVar18 + 4 + iVar27);
            fVar10 = *(float *)(iVar18 + 8 + iVar27);
            fVar11 = *(float *)(iVar18 + 0xc + iVar27);
            pfVar32 = (float *)(param_1[0x154] + iVar27);
            *pfVar32 = ((*(float *)(iVar31 + 0x10 + iVar18) + *(float *)(iVar18 + iVar1)) -
                       *(float *)(iVar18 + iVar27) * 2.0) * 3.0;
            pfVar32[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar32[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar32[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
            iVar18 = param_1[0x152];
            fVar3 = *(float *)(iVar18 + 4 + iVar27);
            fVar4 = *(float *)(iVar18 + 0x24 + iVar27);
            iVar31 = iVar31 + 0x40;
            fVar5 = *(float *)(iVar18 + 8 + iVar27);
            fVar6 = *(float *)(iVar18 + 0x28 + iVar27);
            fVar7 = *(float *)(iVar18 + 0xc + iVar27);
            fVar8 = *(float *)(iVar18 + 0x2c + iVar27);
            pfVar32 = (float *)(param_1[0x154] + iVar1);
            iVar33 = iVar33 + -1;
            fVar9 = *(float *)(iVar18 + 4 + iVar1);
            fVar10 = *(float *)(iVar18 + 8 + iVar1);
            fVar11 = *(float *)(iVar18 + 0xc + iVar1);
            *pfVar32 = ((*(float *)(iVar18 + iVar27) + *(float *)(iVar18 + 0x20 + iVar27)) -
                       *(float *)(iVar18 + iVar1) * 2.0) * 3.0;
            pfVar32[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar32[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar32[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          } while (iVar33 != 0);
        }
        if (uVar24 < uVar35) {
          iVar31 = uVar24 << 4;
          iVar33 = uVar35 - uVar24;
          do {
            pfVar32 = (float *)(param_1[0x152] + -0x10 + iVar31);
            pfVar25 = (float *)(param_1[0x152] + iVar31);
            fVar3 = pfVar25[-3];
            fVar4 = pfVar25[5];
            fVar5 = pfVar25[-2];
            fVar6 = pfVar25[6];
            fVar7 = pfVar25[-1];
            fVar8 = pfVar25[7];
            fVar9 = pfVar25[1];
            fVar10 = pfVar25[2];
            fVar11 = pfVar25[3];
            pfVar26 = (float *)(param_1[0x154] + iVar31);
            iVar31 = iVar31 + 0x10;
            iVar33 = iVar33 + -1;
            *pfVar26 = ((*pfVar32 + pfVar25[4]) - *pfVar25 * 2.0) * 3.0;
            pfVar26[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar26[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar26[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          } while (iVar33 != 0);
        }
      }
      uVar24 = 1;
      if (1 < uVar35) {
        if (3 < (int)(uVar17 - 2)) {
          iVar31 = 0x10;
          do {
            pfVar32 = (float *)(param_1[0x154] + iVar31);
            fVar3 = (float)(&DAT_01dd8f60)[uVar24];
            *pfVar32 = fVar3 * (*(float *)(param_1[0x154] + iVar31) - pfVar32[-4]);
            pfVar32[1] = (pfVar32[1] - pfVar32[-3]) * fVar3;
            pfVar32[2] = (pfVar32[2] - pfVar32[-2]) * fVar3;
            pfVar32[3] = fVar3 * (pfVar32[3] - pfVar32[-1]);
            pfVar32 = (float *)(param_1[0x154] + iVar31);
            fVar3 = (float)(&DAT_01dd8f64)[uVar24];
            pfVar32[4] = fVar3 * (*(float *)(param_1[0x154] + 0x10 + iVar31) - *pfVar32);
            pfVar32[5] = (pfVar32[5] - pfVar32[1]) * fVar3;
            pfVar32[6] = (pfVar32[6] - pfVar32[2]) * fVar3;
            pfVar32[7] = fVar3 * (pfVar32[7] - pfVar32[3]);
            iVar33 = param_1[0x154];
            pfVar32 = (float *)(iVar33 + 0x2c + iVar31);
            pfVar25 = (float *)(iVar33 + 0x1c + iVar31);
            fVar3 = (float)(&DAT_01dd8f68)[uVar24];
            *(float *)(iVar33 + 0x20 + iVar31) =
                 fVar3 * (*(float *)(iVar33 + 0x20 + iVar31) - *(float *)(iVar33 + 0x10 + iVar31));
            *(float *)(iVar33 + 0x24 + iVar31) =
                 (*(float *)(iVar33 + 0x24 + iVar31) - *(float *)(iVar33 + 0x14 + iVar31)) * fVar3;
            *(float *)(iVar33 + 0x28 + iVar31) =
                 (*(float *)(iVar33 + 0x28 + iVar31) - *(float *)(iVar33 + 0x18 + iVar31)) * fVar3;
            uVar24 = uVar24 + 4;
            iVar31 = iVar31 + 0x40;
            *(float *)(iVar33 + -0x14 + iVar31) = fVar3 * (*pfVar32 - *pfVar25);
            iVar33 = param_1[0x154];
            fVar3 = *(float *)(uVar24 * 4 + 0x1dd8f5c);
            *(float *)(iVar33 + -0x10 + iVar31) =
                 fVar3 * (*(float *)(iVar33 + -0x10 + iVar31) - *(float *)(iVar33 + -0x20 + iVar31))
            ;
            *(float *)(iVar33 + -0xc + iVar31) =
                 (*(float *)(iVar33 + -0xc + iVar31) - *(float *)(iVar33 + -0x1c + iVar31)) * fVar3;
            *(float *)(iVar33 + -8 + iVar31) =
                 (*(float *)(iVar33 + -8 + iVar31) - *(float *)(iVar33 + -0x18 + iVar31)) * fVar3;
            *(float *)(iVar33 + -4 + iVar31) =
                 fVar3 * (*(float *)(iVar33 + -4 + iVar31) - *(float *)(iVar33 + -0x14 + iVar31));
          } while (uVar24 < uVar17 - 4);
        }
        if (uVar24 < uVar35) {
          iVar31 = uVar24 << 4;
          do {
            pfVar32 = (float *)(param_1[0x154] + iVar31);
            pfVar25 = (float *)(param_1[0x154] + iVar31);
            uVar24 = uVar24 + 1;
            iVar31 = iVar31 + 0x10;
            fVar3 = *(float *)(uVar24 * 4 + 0x1dd8f5c);
            *pfVar25 = fVar3 * (*pfVar32 - pfVar25[-4]);
            pfVar25[1] = (pfVar25[1] - pfVar25[-3]) * fVar3;
            pfVar25[2] = (pfVar25[2] - pfVar25[-2]) * fVar3;
            pfVar25[3] = fVar3 * (pfVar25[3] - pfVar25[-1]);
          } while (uVar24 < uVar35);
        }
      }
      iVar31 = uVar17 - 2;
      if (iVar31 != 0) {
        iVar33 = iVar31 * 0x10;
        do {
          fVar3 = (float)(&DAT_01dd8f60)[iVar31] * -1.0;
          pfVar32 = (float *)(param_1[0x154] + iVar33);
          iVar33 = iVar33 + -0x10;
          iVar31 = iVar31 + -1;
          *pfVar32 = fVar3 * pfVar32[4] + *pfVar32;
          pfVar32[1] = pfVar32[1] + pfVar32[5] * fVar3;
          pfVar32[2] = pfVar32[2] + pfVar32[6] * fVar3;
          pfVar32[3] = pfVar32[3] + fVar3 * pfVar32[7];
        } while (iVar31 != 0);
      }
      puVar23 = (undefined4 *)(param_1[0x153] + iVar29);
      uVar24 = 0;
      *puVar23 = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      if (3 < (int)uVar35) {
        iVar33 = (uVar17 - 5 >> 2) + 1;
        iVar31 = 0x20;
        uVar24 = iVar33 * 4;
        do {
          iVar27 = iVar31 + -0x20;
          pfVar32 = (float *)(param_1[0x154] + iVar27);
          fVar3 = pfVar32[5];
          fVar4 = pfVar32[1];
          fVar5 = pfVar32[6];
          fVar6 = pfVar32[2];
          fVar7 = pfVar32[7];
          fVar8 = pfVar32[3];
          pfVar25 = (float *)(param_1[0x155] + iVar27);
          *pfVar25 = (*(float *)(param_1[0x154] + 0x10 + iVar27) - *pfVar32) * 0.33333334;
          pfVar25[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar25[2] = (fVar5 - fVar6) * 0.33333334;
          pfVar25[3] = (fVar7 - fVar8) * 0.33333334;
          iVar18 = param_1[0x154];
          fVar3 = *(float *)(iVar18 + 4 + iVar31);
          fVar4 = *(float *)(iVar18 + 0x14 + iVar27);
          fVar5 = *(float *)(iVar18 + 8 + iVar31);
          fVar6 = *(float *)(iVar18 + 0x18 + iVar27);
          fVar7 = *(float *)(iVar18 + 0xc + iVar31);
          fVar8 = *(float *)(iVar18 + 0x1c + iVar27);
          pfVar32 = (float *)(iVar31 + -0x10 + param_1[0x155]);
          iVar1 = iVar31 + 0x10;
          *pfVar32 = (*(float *)(iVar18 + iVar31) - *(float *)(iVar18 + 0x10 + iVar27)) * 0.33333334
          ;
          pfVar32[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar32[2] = (fVar5 - fVar6) * 0.33333334;
          pfVar32[3] = (fVar7 - fVar8) * 0.33333334;
          iVar27 = param_1[0x154];
          fVar3 = *(float *)(iVar27 + 4 + iVar1);
          fVar4 = *(float *)(iVar27 + 4 + iVar31);
          fVar5 = *(float *)(iVar27 + 8 + iVar1);
          fVar6 = *(float *)(iVar27 + 8 + iVar31);
          fVar7 = *(float *)(iVar27 + 0xc + iVar1);
          fVar8 = *(float *)(iVar27 + 0xc + iVar31);
          pfVar32 = (float *)(param_1[0x155] + iVar31);
          *pfVar32 = (*(float *)(iVar27 + iVar1) - *(float *)(iVar27 + iVar31)) * 0.33333334;
          pfVar32[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar32[2] = (fVar5 - fVar6) * 0.33333334;
          iVar31 = iVar31 + 0x40;
          pfVar32[3] = (fVar7 - fVar8) * 0.33333334;
          iVar27 = param_1[0x154];
          fVar3 = *(float *)(iVar27 + -0x1c + iVar31);
          fVar4 = *(float *)(iVar27 + 4 + iVar1);
          fVar5 = *(float *)(iVar27 + -0x18 + iVar31);
          fVar6 = *(float *)(iVar27 + 8 + iVar1);
          fVar7 = *(float *)(iVar27 + -0x14 + iVar31);
          fVar8 = *(float *)(iVar27 + 0xc + iVar1);
          pfVar32 = (float *)(param_1[0x155] + iVar1);
          iVar33 = iVar33 + -1;
          *pfVar32 = (*(float *)(iVar27 + -0x20 + iVar31) - *(float *)(iVar27 + iVar1)) * 0.33333334
          ;
          pfVar32[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar32[2] = (fVar5 - fVar6) * 0.33333334;
          pfVar32[3] = (fVar7 - fVar8) * 0.33333334;
        } while (iVar33 != 0);
      }
      if (uVar24 < uVar35) {
        iVar31 = uVar24 << 4;
        iVar33 = uVar35 - uVar24;
        do {
          pfVar32 = (float *)(param_1[0x154] + 0x10 + iVar31);
          pfVar25 = (float *)(param_1[0x154] + iVar31);
          fVar3 = pfVar25[5];
          fVar4 = pfVar25[1];
          fVar5 = pfVar25[6];
          fVar6 = pfVar25[2];
          fVar7 = pfVar25[7];
          fVar8 = pfVar25[3];
          pfVar26 = (float *)(param_1[0x155] + iVar31);
          iVar31 = iVar31 + 0x10;
          iVar33 = iVar33 + -1;
          *pfVar26 = (*pfVar32 - *pfVar25) * 0.33333334;
          pfVar26[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar26[2] = (fVar5 - fVar6) * 0.33333334;
          pfVar26[3] = (fVar7 - fVar8) * 0.33333334;
        } while (iVar33 != 0);
      }
      puVar23 = (undefined4 *)(param_1[0x155] + iVar29);
      *puVar23 = 0;
      local_184 = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      if (3 < (int)uVar35) {
        iVar31 = (uVar17 - 5 >> 2) + 1;
        local_184 = iVar31 * 4;
        iVar29 = 0x20;
        do {
          iVar33 = iVar29 + -0x20;
          pfVar32 = (float *)(param_1[0x152] + iVar33);
          pfVar36 = (float *)(param_1[0x154] + iVar33);
          fVar3 = pfVar32[5];
          fVar4 = pfVar32[1];
          fVar5 = pfVar32[6];
          fVar6 = pfVar32[2];
          fVar7 = pfVar32[7];
          fVar8 = pfVar32[3];
          pfVar25 = (float *)(param_1[0x155] + iVar33);
          fVar9 = pfVar36[1];
          fVar10 = pfVar25[1];
          fVar11 = pfVar36[2];
          fVar12 = pfVar25[2];
          fVar13 = pfVar36[3];
          fVar14 = pfVar25[3];
          pfVar26 = (float *)(param_1[0x153] + iVar33);
          *pfVar26 = (*(float *)(param_1[0x152] + 0x10 + iVar33) - *pfVar32) - (*pfVar36 + *pfVar25)
          ;
          pfVar26[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar26[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar26[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
          iVar33 = param_1[0x152];
          pfVar32 = (float *)(iVar29 + -0x10 + param_1[0x154]);
          fVar3 = *(float *)(iVar33 + 4 + iVar29);
          fVar4 = *(float *)(iVar29 + -0xc + iVar33);
          fVar5 = *(float *)(iVar33 + 8 + iVar29);
          fVar6 = *(float *)(iVar29 + -8 + iVar33);
          fVar7 = *(float *)(iVar33 + 0xc + iVar29);
          fVar8 = *(float *)(iVar29 + -4 + iVar33);
          pfVar25 = (float *)(iVar29 + -0x10 + param_1[0x155]);
          fVar9 = pfVar32[1];
          fVar10 = pfVar25[1];
          fVar11 = pfVar32[2];
          fVar12 = pfVar25[2];
          fVar13 = pfVar32[3];
          fVar14 = pfVar25[3];
          pfVar26 = (float *)(iVar29 + -0x10 + param_1[0x153]);
          *pfVar26 = (*(float *)(iVar33 + iVar29) - *(float *)(iVar29 + -0x10 + iVar33)) -
                     (*pfVar32 + *pfVar25);
          pfVar26[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar26[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar26[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
          iVar27 = param_1[0x152];
          iVar33 = iVar29 + 0x10;
          pfVar26 = (float *)(param_1[0x154] + iVar29);
          fVar3 = *(float *)(iVar27 + 4 + iVar33);
          fVar4 = *(float *)(iVar27 + 4 + iVar29);
          fVar5 = *(float *)(iVar27 + 8 + iVar33);
          fVar6 = *(float *)(iVar27 + 8 + iVar29);
          fVar7 = *(float *)(iVar27 + 0xc + iVar33);
          fVar8 = *(float *)(iVar27 + 0xc + iVar29);
          pfVar32 = (float *)(param_1[0x155] + iVar29);
          fVar9 = pfVar26[1];
          fVar10 = pfVar32[1];
          fVar11 = pfVar26[2];
          fVar12 = pfVar32[2];
          fVar13 = pfVar26[3];
          fVar14 = pfVar32[3];
          pfVar25 = (float *)(param_1[0x153] + iVar29);
          *pfVar25 = (*(float *)(iVar27 + 0x10 + iVar29) - *(float *)(iVar27 + iVar29)) -
                     (*pfVar26 + *pfVar32);
          pfVar25[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar25[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar25[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
          iVar27 = param_1[0x152];
          pfVar32 = (float *)(iVar27 + 0x20 + iVar29);
          fVar3 = *(float *)(iVar27 + 0x24 + iVar29);
          fVar4 = *(float *)(iVar27 + 4 + iVar33);
          fVar5 = *(float *)(iVar27 + 0x28 + iVar29);
          fVar6 = *(float *)(iVar27 + 8 + iVar33);
          fVar7 = *(float *)(iVar27 + 0x2c + iVar29);
          fVar8 = *(float *)(iVar27 + 0xc + iVar33);
          pfVar25 = (float *)(param_1[0x155] + iVar33);
          pfVar36 = (float *)(param_1[0x154] + iVar33);
          fVar9 = pfVar36[1];
          fVar10 = pfVar25[1];
          fVar11 = pfVar36[2];
          fVar12 = pfVar25[2];
          fVar13 = pfVar36[3];
          fVar14 = pfVar25[3];
          pfVar26 = (float *)(param_1[0x153] + iVar33);
          iVar29 = iVar29 + 0x40;
          iVar31 = iVar31 + -1;
          *pfVar26 = (*pfVar32 - *(float *)(iVar27 + iVar33)) - (*pfVar36 + *pfVar25);
          pfVar26[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar26[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar26[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        } while (iVar31 != 0);
      }
      if (local_184 < uVar35) {
        iVar29 = local_184 << 4;
        iVar31 = uVar35 - local_184;
        do {
          pfVar32 = (float *)(param_1[0x152] + 0x10 + iVar29);
          pfVar25 = (float *)(param_1[0x152] + iVar29);
          pfVar30 = (float *)(param_1[0x154] + iVar29);
          fVar3 = pfVar25[5];
          fVar4 = pfVar25[1];
          fVar5 = pfVar25[6];
          fVar6 = pfVar25[2];
          fVar7 = pfVar25[7];
          fVar8 = pfVar25[3];
          pfVar26 = (float *)(param_1[0x155] + iVar29);
          fVar9 = pfVar30[1];
          fVar10 = pfVar26[1];
          fVar11 = pfVar30[2];
          fVar12 = pfVar26[2];
          fVar13 = pfVar30[3];
          fVar14 = pfVar26[3];
          pfVar36 = (float *)(param_1[0x153] + iVar29);
          iVar29 = iVar29 + 0x10;
          iVar31 = iVar31 + -1;
          *pfVar36 = (*pfVar32 - *pfVar25) - (*pfVar30 + *pfVar26);
          pfVar36[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar36[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar36[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        } while (iVar31 != 0);
      }
      param_1[0x156] = uVar17;
    }
  }
  local_154 = 0.0;
  fVar3 = (float)(param_1[0x114] + -2);
  if (param_1[0x114] + -2 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  local_194 = 0.0;
  if (uVar21 != 0) {
    pfVar32 = (float *)(iVar16 + 0x14);
    do {
      local_13c = local_154;
      if (fVar20 < local_154) {
        local_13c = local_154 - (fVar20 - 1.0);
      }
      if ((int)local_194 <= iVar22) {
        fVar38 = (float10)FUN_00fddce0((double)local_13c);
        local_134 = (float)fVar38;
        fVar4 = (float)(param_1[0x156] + -1);
        if (param_1[0x156] + -1 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        if (local_134 <= 0.0) {
          local_134 = 0.0;
        }
        if (fVar4 < local_134) {
          local_134 = fVar4;
        }
        iVar29 = param_1[0x155];
        iVar31 = param_1[0x154];
        iVar33 = param_1[0x153];
        iVar27 = param_1[0x152];
        local_1e0 = (int)(longlong)ROUND(local_134);
        local_13c = local_13c - local_134;
        local_1d0 = *(float *)(iVar27 + local_1e0 * 0x10) +
                    ((local_13c * *(float *)(iVar29 + local_1e0 * 0x10) +
                     *(float *)(iVar31 + local_1e0 * 0x10)) * local_13c +
                    *(float *)(iVar33 + local_1e0 * 0x10)) * local_13c;
        local_1cc = *(float *)(iVar27 + 4 + local_1e0 * 0x10) +
                    (*(float *)(iVar33 + 4 + local_1e0 * 0x10) +
                    (*(float *)(iVar31 + 4 + local_1e0 * 0x10) +
                    *(float *)(iVar29 + 4 + local_1e0 * 0x10) * local_13c) * local_13c) * local_13c;
        local_1c8 = *(float *)(iVar27 + 8 + local_1e0 * 0x10) +
                    local_13c *
                    (*(float *)(iVar33 + 8 + local_1e0 * 0x10) +
                    (*(float *)(iVar31 + 8 + local_1e0 * 0x10) +
                    *(float *)(iVar29 + 8 + local_1e0 * 0x10) * local_13c) * local_13c);
      }
      local_194 = (float)((int)local_194 + 1);
      pfVar32[-2] = local_1d0;
      pfVar32[-1] = local_1cc;
      *pfVar32 = local_1c8;
      local_154 = local_154 + fVar3 / fVar2;
      pfVar32 = pfVar32 + 6;
    } while ((uint)local_194 < uVar21);
  }
LAB_00ee8e3e:
  FUN_00f99d50(iVar16,0xc,param_1[0x148] * uVar21 + param_1[0x149]);
  return;
}

// 00EE8E70  cEspStrip2p::vf2C  size=20005  [class]
void __fastcall cEspStrip2p::vf2C(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  uint uVar21;
  int iVar22;
  undefined4 *puVar23;
  uint uVar24;
  float *pfVar25;
  float *pfVar26;
  int iVar27;
  int iVar28;
  undefined4 *puVar29;
  float *pfVar30;
  int iVar31;
  float *pfVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  float *pfVar36;
  bool bVar37;
  float10 fVar38;
  undefined *puVar39;
  int local_1e0;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_194;
  float local_18c;
  float local_188;
  uint local_184;
  uint local_164;
  float local_160;
  float local_154;
  float local_13c;
  float local_134;
  float local_114;
  
  iVar16 = *(int *)(param_1 + 0x458);
  uVar17 = *(uint *)(param_1 + 0x450);
  uVar21 = (uVar17 - 4) * *(int *)(param_1 + 0x454) + 2;
  bVar37 = (*(uint *)(param_1 + 0x38) & 0x80000) == 0;
  local_134 = (float)(uint)bVar37;
  uVar24 = (uint)!bVar37;
  local_1e0 = (int)(longlong)ROUND(*(float *)(param_1 + 0x528));
  iVar22 = local_1e0 * *(int *)(param_1 + 0x454) + 2;
  local_1e0 = (int)(longlong)ROUND(*(float *)(param_1 + 0x528));
  fVar20 = (float)local_1e0;
  if (local_1e0 < 0) {
    fVar20 = fVar20 + 4.2949673e+09;
  }
  iVar27 = *(int *)(param_1 + 0x540);
  fVar20 = *(float *)(param_1 + 0x528) - fVar20;
  if (1 < iVar27) {
    local_184 = 0;
    fVar2 = 1.0 / (float)iVar27;
    local_18c = 0.0;
    if (0 < iVar27) {
      fVar3 = (float)(int)uVar21;
      local_114 = fVar2;
      if ((int)uVar21 < 0) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      do {
        uVar17 = *(uint *)(param_1 + 0x450);
        iVar27 = *(int *)(param_1 + 0x45c + (int)local_134 * 4);
        iVar33 = (uVar21 * 2 + 2) * local_184;
        iVar31 = *(int *)(param_1 + 0x45c + uVar24 * 4);
        if (uVar17 < 3) {
          FUN_00dd5650(&DAT_016df4c0,uVar17);
        }
        else {
          uVar35 = *(uint *)(param_1 + 0x55c);
          if (uVar35 < uVar17) {
            puVar39 = &DAT_016df478;
LAB_00eeb460:
            FUN_00dd5650(puVar39,CONCAT44(uVar35,uVar17));
          }
          else if (*(int *)(param_1 + 0x560) == 0) {
            FUN_00dd5650();
          }
          else {
            local_188 = 0.0;
            if (3 < (int)uVar17) {
              local_194 = (float)((uVar17 - 4 >> 2) + 1);
              iVar28 = 0;
              local_188 = (float)((int)local_194 * 4);
              pfVar32 = (float *)(iVar31 + 0x10);
              pfVar25 = (float *)(iVar27 + 0x1c);
              do {
                iVar1 = *(int *)(param_1 + 0x560);
                *(float *)(iVar1 + iVar28) = (pfVar25[-7] - pfVar32[-4]) * local_18c + pfVar32[-4];
                *(float *)(iVar1 + 4 + iVar28) =
                     (pfVar25[-6] - pfVar32[-3]) * local_18c + pfVar32[-3];
                *(float *)(iVar1 + 8 + iVar28) =
                     (pfVar25[-5] - pfVar32[-2]) * local_18c + pfVar32[-2];
                pfVar26 = (float *)(iVar28 + 0x10 + *(int *)(param_1 + 0x560));
                *pfVar26 = (pfVar25[-4] - pfVar32[-1]) * local_18c + pfVar32[-1];
                pfVar26[1] = (*(float *)((iVar27 - iVar31) + -0x30 + (int)(pfVar32 + 0xc)) -
                             *pfVar32) * local_18c + *pfVar32;
                pfVar26[2] = (pfVar25[-2] - pfVar32[1]) * local_18c + pfVar32[1];
                pfVar26 = (float *)(*(int *)(param_1 + 0x560) + 0x20 + iVar28);
                iVar28 = iVar28 + 0x40;
                local_194 = (float)((int)local_194 + -1);
                *pfVar26 = (pfVar25[-1] - pfVar32[2]) * local_18c + pfVar32[2];
                pfVar26[1] = (*pfVar25 - pfVar32[3]) * local_18c + pfVar32[3];
                pfVar26[2] = (pfVar25[1] - pfVar32[4]) * local_18c + pfVar32[4];
                iVar1 = *(int *)(param_1 + 0x560);
                *(float *)(iVar1 + -0x10 + iVar28) =
                     (pfVar25[2] - pfVar32[5]) * local_18c + pfVar32[5];
                *(float *)(iVar1 + -0xc + iVar28) =
                     (pfVar25[3] - pfVar32[6]) * local_18c + pfVar32[6];
                *(float *)(iVar1 + -8 + iVar28) = (pfVar25[4] - pfVar32[7]) * local_18c + pfVar32[7]
                ;
                pfVar32 = pfVar32 + 0xc;
                pfVar25 = pfVar25 + 0xc;
              } while (local_194 != 0.0);
            }
            if ((uint)local_188 < uVar17) {
              iVar27 = *(int *)(param_1 + 0x45c + (int)local_134 * 4);
              iVar31 = *(int *)(param_1 + 0x45c + uVar24 * 4);
              iVar28 = (int)local_188 << 4;
              local_194 = (float)(uVar17 - (int)local_188);
              pfVar32 = (float *)(iVar31 + 4 + (int)local_188 * 0xc);
              pfVar25 = (float *)(iVar27 + (int)local_188 * 0xc);
              do {
                iVar1 = *(int *)(param_1 + 0x560);
                iVar28 = iVar28 + 0x10;
                local_194 = (float)((int)local_194 + -1);
                *(float *)(iVar1 + -0x10 + iVar28) =
                     (*pfVar25 - pfVar32[-1]) * local_18c + pfVar32[-1];
                *(float *)(iVar1 + -0xc + iVar28) =
                     (*(float *)((int)pfVar32 + (iVar27 - iVar31)) - *pfVar32) * local_18c +
                     *pfVar32;
                *(float *)(iVar1 + -8 + iVar28) = (pfVar25[2] - pfVar32[1]) * local_18c + pfVar32[1]
                ;
                pfVar32 = pfVar32 + 3;
                pfVar25 = pfVar25 + 3;
              } while (local_194 != 0.0);
            }
            uVar35 = *(uint *)(param_1 + 0x55c);
            if (uVar35 < uVar17) {
              puVar39 = &DAT_016d98c0;
              goto LAB_00eeb460;
            }
            *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x560);
            puVar23 = *(undefined4 **)(param_1 + 0x550);
            *puVar23 = 0;
            uVar34 = uVar17 - 1;
            puVar23[1] = 0;
            puVar23[2] = 0;
            iVar27 = uVar34 * 0x10;
            puVar23[3] = 0;
            puVar23 = (undefined4 *)(*(int *)(param_1 + 0x550) + iVar27);
            *puVar23 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            uVar35 = 1;
            if (1 < uVar34) {
              if (3 < (int)(uVar17 - 2)) {
                iVar28 = (uVar17 - 6 >> 2) + 1;
                uVar35 = iVar28 * 4 + 1;
                iVar31 = 0x10;
                do {
                  pfVar32 = (float *)(iVar31 + *(int *)(param_1 + 0x548));
                  fVar4 = pfVar32[-3];
                  fVar5 = pfVar32[5];
                  fVar6 = pfVar32[-2];
                  fVar7 = pfVar32[6];
                  fVar8 = pfVar32[-1];
                  fVar9 = pfVar32[7];
                  fVar10 = pfVar32[1];
                  fVar11 = pfVar32[2];
                  fVar12 = pfVar32[3];
                  pfVar25 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                  *pfVar25 = ((*(float *)(iVar31 + 0x10 + *(int *)(param_1 + 0x548)) + pfVar32[-4])
                             - *pfVar32 * 2.0) * 3.0;
                  pfVar25[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar25[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar25[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar19 = *(int *)(param_1 + 0x548);
                  iVar1 = iVar31 + 0x20;
                  fVar4 = *(float *)(iVar31 + 4 + iVar19);
                  fVar5 = *(float *)(iVar31 + 0x24 + iVar19);
                  fVar6 = *(float *)(iVar31 + 8 + iVar19);
                  fVar7 = *(float *)(iVar31 + 0x28 + iVar19);
                  fVar8 = *(float *)(iVar31 + 0xc + iVar19);
                  fVar9 = *(float *)(iVar31 + 0x2c + iVar19);
                  fVar10 = *(float *)(iVar31 + 0x14 + iVar19);
                  fVar11 = *(float *)(iVar31 + 0x18 + iVar19);
                  fVar12 = *(float *)(iVar31 + 0x1c + iVar19);
                  pfVar32 = (float *)(iVar31 + 0x10 + *(int *)(param_1 + 0x550));
                  iVar18 = iVar31 + 0x30;
                  *pfVar32 = ((*(float *)(iVar31 + 0x20 + iVar19) + *(float *)(iVar31 + iVar19)) -
                             *(float *)(iVar31 + 0x10 + iVar19) * 2.0) * 3.0;
                  pfVar32[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar32[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar32[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar19 = *(int *)(param_1 + 0x548);
                  fVar4 = *(float *)(iVar31 + 0x14 + iVar19);
                  fVar5 = *(float *)(iVar31 + 0x34 + iVar19);
                  fVar6 = *(float *)(iVar31 + 0x18 + iVar19);
                  fVar7 = *(float *)(iVar31 + 0x38 + iVar19);
                  fVar8 = *(float *)(iVar31 + 0x1c + iVar19);
                  fVar9 = *(float *)(iVar31 + 0x3c + iVar19);
                  fVar10 = *(float *)(iVar31 + 0x24 + iVar19);
                  fVar11 = *(float *)(iVar31 + 0x28 + iVar19);
                  fVar12 = *(float *)(iVar31 + 0x2c + iVar19);
                  pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar1);
                  *pfVar32 = ((*(float *)(iVar18 + iVar19) + *(float *)(iVar31 + 0x10 + iVar19)) -
                             *(float *)(iVar1 + iVar19) * 2.0) * 3.0;
                  pfVar32[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar32[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar32[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar19 = *(int *)(param_1 + 0x548);
                  fVar4 = *(float *)(iVar31 + 0x24 + iVar19);
                  fVar5 = *(float *)(iVar31 + 0x44 + iVar19);
                  fVar6 = *(float *)(iVar31 + 0x28 + iVar19);
                  fVar7 = *(float *)(iVar31 + 0x48 + iVar19);
                  fVar8 = *(float *)(iVar31 + 0x2c + iVar19);
                  fVar9 = *(float *)(iVar31 + 0x4c + iVar19);
                  pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar18);
                  iVar28 = iVar28 + -1;
                  fVar10 = *(float *)(iVar31 + 0x34 + iVar19);
                  fVar11 = *(float *)(iVar31 + 0x38 + iVar19);
                  fVar12 = *(float *)(iVar31 + 0x3c + iVar19);
                  *pfVar32 = ((*(float *)(iVar31 + 0x40 + iVar19) + *(float *)(iVar1 + iVar19)) -
                             *(float *)(iVar18 + iVar19) * 2.0) * 3.0;
                  pfVar32[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar32[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar32[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar31 = iVar31 + 0x40;
                } while (iVar28 != 0);
              }
              if (uVar35 < uVar34) {
                iVar31 = uVar35 << 4;
                iVar28 = uVar34 - uVar35;
                do {
                  pfVar32 = (float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar31);
                  pfVar25 = (float *)(*(int *)(param_1 + 0x548) + iVar31);
                  fVar4 = pfVar25[-3];
                  fVar5 = pfVar25[5];
                  fVar6 = pfVar25[-2];
                  fVar7 = pfVar25[6];
                  fVar8 = pfVar25[-1];
                  fVar9 = pfVar25[7];
                  fVar10 = pfVar25[1];
                  fVar11 = pfVar25[2];
                  fVar12 = pfVar25[3];
                  pfVar26 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                  iVar31 = iVar31 + 0x10;
                  iVar28 = iVar28 + -1;
                  *pfVar26 = ((*pfVar32 + pfVar25[-4]) - *pfVar25 * 2.0) * 3.0;
                  pfVar26[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar26[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar26[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                } while (iVar28 != 0);
              }
            }
            uVar35 = 1;
            if (1 < uVar34) {
              if (3 < (int)(uVar17 - 2)) {
                iVar31 = 0x10;
                do {
                  pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                  fVar4 = (float)(&DAT_01dd8f60)[uVar35];
                  *pfVar32 = fVar4 * (*(float *)(*(int *)(param_1 + 0x550) + iVar31) - pfVar32[-4]);
                  pfVar32[1] = (pfVar32[1] - pfVar32[-3]) * fVar4;
                  pfVar32[2] = (pfVar32[2] - pfVar32[-2]) * fVar4;
                  pfVar32[3] = fVar4 * (pfVar32[3] - pfVar32[-1]);
                  pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                  fVar4 = (float)(&DAT_01dd8f64)[uVar35];
                  pfVar32[4] = fVar4 * (*(float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar31) -
                                       *pfVar32);
                  pfVar32[5] = (pfVar32[5] - pfVar32[1]) * fVar4;
                  pfVar32[6] = (pfVar32[6] - pfVar32[2]) * fVar4;
                  pfVar32[7] = fVar4 * (pfVar32[7] - pfVar32[3]);
                  iVar28 = *(int *)(param_1 + 0x550);
                  pfVar32 = (float *)(iVar28 + 0x2c + iVar31);
                  pfVar25 = (float *)(iVar28 + 0x1c + iVar31);
                  fVar4 = (float)(&DAT_01dd8f68)[uVar35];
                  *(float *)(iVar28 + 0x20 + iVar31) =
                       fVar4 * (*(float *)(iVar28 + 0x20 + iVar31) -
                               *(float *)(iVar28 + 0x10 + iVar31));
                  *(float *)(iVar28 + 0x24 + iVar31) =
                       (*(float *)(iVar28 + 0x24 + iVar31) - *(float *)(iVar28 + 0x14 + iVar31)) *
                       fVar4;
                  *(float *)(iVar28 + 0x28 + iVar31) =
                       (*(float *)(iVar28 + 0x28 + iVar31) - *(float *)(iVar28 + 0x18 + iVar31)) *
                       fVar4;
                  uVar35 = uVar35 + 4;
                  iVar31 = iVar31 + 0x40;
                  *(float *)(iVar28 + -0x14 + iVar31) = fVar4 * (*pfVar32 - *pfVar25);
                  iVar28 = *(int *)(param_1 + 0x550);
                  fVar4 = *(float *)(uVar35 * 4 + 0x1dd8f5c);
                  *(float *)(iVar28 + -0x10 + iVar31) =
                       fVar4 * (*(float *)(iVar28 + -0x10 + iVar31) -
                               *(float *)(iVar28 + -0x20 + iVar31));
                  *(float *)(iVar28 + -0xc + iVar31) =
                       (*(float *)(iVar28 + -0xc + iVar31) - *(float *)(iVar28 + -0x1c + iVar31)) *
                       fVar4;
                  *(float *)(iVar28 + -8 + iVar31) =
                       (*(float *)(iVar28 + -8 + iVar31) - *(float *)(iVar28 + -0x18 + iVar31)) *
                       fVar4;
                  *(float *)(iVar28 + -4 + iVar31) =
                       fVar4 * (*(float *)(iVar28 + -4 + iVar31) -
                               *(float *)(iVar28 + -0x14 + iVar31));
                } while (uVar35 < uVar17 - 4);
              }
              if (uVar35 < uVar34) {
                iVar31 = uVar35 << 4;
                do {
                  pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                  pfVar25 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                  uVar35 = uVar35 + 1;
                  iVar31 = iVar31 + 0x10;
                  fVar4 = *(float *)(uVar35 * 4 + 0x1dd8f5c);
                  *pfVar25 = fVar4 * (*pfVar32 - pfVar25[-4]);
                  pfVar25[1] = (pfVar25[1] - pfVar25[-3]) * fVar4;
                  pfVar25[2] = (pfVar25[2] - pfVar25[-2]) * fVar4;
                  pfVar25[3] = fVar4 * (pfVar25[3] - pfVar25[-1]);
                } while (uVar35 < uVar34);
              }
            }
            iVar31 = uVar17 - 2;
            if (iVar31 != 0) {
              iVar28 = iVar31 * 0x10;
              do {
                fVar4 = (float)(&DAT_01dd8f60)[iVar31] * -1.0;
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar28);
                iVar28 = iVar28 + -0x10;
                iVar31 = iVar31 + -1;
                *pfVar32 = fVar4 * pfVar32[4] + *pfVar32;
                pfVar32[1] = pfVar32[1] + pfVar32[5] * fVar4;
                pfVar32[2] = pfVar32[2] + pfVar32[6] * fVar4;
                pfVar32[3] = pfVar32[3] + fVar4 * pfVar32[7];
              } while (iVar31 != 0);
            }
            puVar23 = (undefined4 *)(*(int *)(param_1 + 0x54c) + iVar27);
            *puVar23 = 0;
            uVar35 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            if (3 < (int)uVar34) {
              iVar28 = (uVar17 - 5 >> 2) + 1;
              iVar31 = 0x20;
              uVar35 = iVar28 * 4;
              do {
                iVar1 = iVar31 + -0x20;
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar1);
                fVar4 = pfVar32[5];
                fVar5 = pfVar32[1];
                fVar6 = pfVar32[6];
                fVar7 = pfVar32[2];
                fVar8 = pfVar32[7];
                fVar9 = pfVar32[3];
                pfVar25 = (float *)(*(int *)(param_1 + 0x554) + iVar1);
                *pfVar25 = (*(float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar1) - *pfVar32) *
                           0.33333334;
                pfVar25[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar25[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar25[3] = (fVar8 - fVar9) * 0.33333334;
                iVar18 = *(int *)(param_1 + 0x550);
                fVar4 = *(float *)(iVar18 + 4 + iVar31);
                fVar5 = *(float *)(iVar18 + 0x14 + iVar1);
                fVar6 = *(float *)(iVar18 + 8 + iVar31);
                fVar7 = *(float *)(iVar18 + 0x18 + iVar1);
                fVar8 = *(float *)(iVar18 + 0xc + iVar31);
                fVar9 = *(float *)(iVar18 + 0x1c + iVar1);
                pfVar32 = (float *)(*(int *)(param_1 + 0x554) + 0x10 + iVar1);
                *pfVar32 = (*(float *)(iVar18 + iVar31) - *(float *)(iVar18 + 0x10 + iVar1)) *
                           0.33333334;
                pfVar32[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar32[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar32[3] = (fVar8 - fVar9) * 0.33333334;
                iVar18 = *(int *)(param_1 + 0x550);
                iVar1 = iVar31 + 0x10;
                fVar4 = *(float *)(iVar18 + 4 + iVar1);
                fVar5 = *(float *)(iVar18 + 4 + iVar31);
                fVar6 = *(float *)(iVar18 + 8 + iVar1);
                fVar7 = *(float *)(iVar18 + 8 + iVar31);
                fVar8 = *(float *)(iVar18 + 0xc + iVar1);
                fVar9 = *(float *)(iVar18 + 0xc + iVar31);
                pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar31);
                *pfVar32 = (*(float *)(iVar18 + 0x10 + iVar31) - *(float *)(iVar18 + iVar31)) *
                           0.33333334;
                pfVar32[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar32[2] = (fVar6 - fVar7) * 0.33333334;
                iVar31 = iVar31 + 0x40;
                pfVar32[3] = (fVar8 - fVar9) * 0.33333334;
                iVar18 = *(int *)(param_1 + 0x550);
                fVar4 = *(float *)(iVar18 + -0x1c + iVar31);
                fVar5 = *(float *)(iVar18 + 4 + iVar1);
                fVar6 = *(float *)(iVar18 + -0x18 + iVar31);
                fVar7 = *(float *)(iVar18 + 8 + iVar1);
                fVar8 = *(float *)(iVar18 + -0x14 + iVar31);
                fVar9 = *(float *)(iVar18 + 0xc + iVar1);
                pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar1);
                iVar28 = iVar28 + -1;
                *pfVar32 = (*(float *)(iVar18 + -0x20 + iVar31) - *(float *)(iVar18 + iVar1)) *
                           0.33333334;
                pfVar32[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar32[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar32[3] = (fVar8 - fVar9) * 0.33333334;
              } while (iVar28 != 0);
            }
            if (uVar35 < uVar34) {
              iVar31 = uVar35 << 4;
              iVar28 = uVar34 - uVar35;
              do {
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar31);
                pfVar25 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                fVar4 = pfVar25[5];
                fVar5 = pfVar25[1];
                fVar6 = pfVar25[6];
                fVar7 = pfVar25[2];
                fVar8 = pfVar25[7];
                fVar9 = pfVar25[3];
                pfVar26 = (float *)(*(int *)(param_1 + 0x554) + iVar31);
                iVar31 = iVar31 + 0x10;
                iVar28 = iVar28 + -1;
                *pfVar26 = (*pfVar32 - *pfVar25) * 0.33333334;
                pfVar26[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar26[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar26[3] = (fVar8 - fVar9) * 0.33333334;
              } while (iVar28 != 0);
            }
            puVar23 = (undefined4 *)(*(int *)(param_1 + 0x554) + iVar27);
            local_194 = 0.0;
            *puVar23 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            if (3 < (int)uVar34) {
              iVar31 = (uVar17 - 5 >> 2) + 1;
              local_194 = (float)(iVar31 * 4);
              iVar27 = 0x20;
              do {
                iVar28 = iVar27 + -0x20;
                pfVar32 = (float *)(*(int *)(param_1 + 0x548) + iVar28);
                pfVar36 = (float *)(*(int *)(param_1 + 0x550) + iVar28);
                fVar4 = pfVar32[5];
                fVar5 = pfVar32[1];
                fVar6 = pfVar32[6];
                fVar7 = pfVar32[2];
                fVar8 = pfVar32[7];
                fVar9 = pfVar32[3];
                pfVar25 = (float *)(*(int *)(param_1 + 0x554) + iVar28);
                fVar10 = pfVar36[1];
                fVar11 = pfVar25[1];
                fVar12 = pfVar36[2];
                fVar13 = pfVar25[2];
                fVar14 = pfVar36[3];
                fVar15 = pfVar25[3];
                pfVar26 = (float *)(*(int *)(param_1 + 0x54c) + iVar28);
                *pfVar26 = (*(float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar28) - *pfVar32) -
                           (*pfVar36 + *pfVar25);
                pfVar26[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar26[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar26[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
                iVar28 = *(int *)(param_1 + 0x548);
                pfVar32 = (float *)(iVar27 + -0x10 + *(int *)(param_1 + 0x550));
                fVar4 = *(float *)(iVar27 + 4 + iVar28);
                fVar5 = *(float *)(iVar27 + -0xc + iVar28);
                fVar6 = *(float *)(iVar27 + 8 + iVar28);
                fVar7 = *(float *)(iVar27 + -8 + iVar28);
                fVar8 = *(float *)(iVar27 + 0xc + iVar28);
                fVar9 = *(float *)(iVar27 + -4 + iVar28);
                pfVar25 = (float *)(iVar27 + -0x10 + *(int *)(param_1 + 0x554));
                fVar10 = pfVar32[1];
                fVar11 = pfVar25[1];
                fVar12 = pfVar32[2];
                fVar13 = pfVar25[2];
                fVar14 = pfVar32[3];
                fVar15 = pfVar25[3];
                pfVar26 = (float *)(iVar27 + -0x10 + *(int *)(param_1 + 0x54c));
                *pfVar26 = (*(float *)(iVar27 + iVar28) - *(float *)(iVar27 + -0x10 + iVar28)) -
                           (*pfVar32 + *pfVar25);
                pfVar26[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar26[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar26[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
                iVar1 = *(int *)(param_1 + 0x548);
                iVar28 = iVar27 + 0x10;
                pfVar26 = (float *)(*(int *)(param_1 + 0x550) + iVar27);
                fVar4 = *(float *)(iVar27 + 0x14 + iVar1);
                fVar5 = *(float *)(iVar27 + 4 + iVar1);
                fVar6 = *(float *)(iVar27 + 0x18 + iVar1);
                fVar7 = *(float *)(iVar27 + 8 + iVar1);
                fVar8 = *(float *)(iVar27 + 0x1c + iVar1);
                fVar9 = *(float *)(iVar27 + 0xc + iVar1);
                pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar27);
                fVar10 = pfVar26[1];
                fVar11 = pfVar32[1];
                fVar12 = pfVar26[2];
                fVar13 = pfVar32[2];
                fVar14 = pfVar26[3];
                fVar15 = pfVar32[3];
                pfVar25 = (float *)(*(int *)(param_1 + 0x54c) + iVar27);
                *pfVar25 = (*(float *)(iVar27 + 0x10 + iVar1) - *(float *)(iVar27 + iVar1)) -
                           (*pfVar26 + *pfVar32);
                pfVar25[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar25[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar25[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
                iVar18 = *(int *)(param_1 + 0x548);
                iVar1 = iVar27 + 0x20;
                fVar4 = *(float *)(iVar27 + 0x24 + iVar18);
                fVar5 = *(float *)(iVar27 + 0x14 + iVar18);
                fVar6 = *(float *)(iVar27 + 0x28 + iVar18);
                fVar7 = *(float *)(iVar27 + 0x18 + iVar18);
                fVar8 = *(float *)(iVar27 + 0x2c + iVar18);
                fVar9 = *(float *)(iVar27 + 0x1c + iVar18);
                pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar28);
                pfVar26 = (float *)(*(int *)(param_1 + 0x550) + iVar28);
                fVar10 = pfVar26[1];
                fVar11 = pfVar32[1];
                fVar12 = pfVar26[2];
                fVar13 = pfVar32[2];
                fVar14 = pfVar26[3];
                fVar15 = pfVar32[3];
                pfVar25 = (float *)(*(int *)(param_1 + 0x54c) + iVar28);
                iVar27 = iVar27 + 0x40;
                iVar31 = iVar31 + -1;
                *pfVar25 = (*(float *)(iVar1 + iVar18) - *(float *)(iVar28 + iVar18)) -
                           (*pfVar26 + *pfVar32);
                pfVar25[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar25[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar25[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
              } while (iVar31 != 0);
            }
            if ((uint)local_194 < uVar34) {
              iVar27 = (int)local_194 << 4;
              iVar31 = uVar34 - (int)local_194;
              do {
                pfVar32 = (float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar27);
                pfVar25 = (float *)(*(int *)(param_1 + 0x548) + iVar27);
                pfVar30 = (float *)(*(int *)(param_1 + 0x550) + iVar27);
                fVar4 = pfVar25[5];
                fVar5 = pfVar25[1];
                fVar6 = pfVar25[6];
                fVar7 = pfVar25[2];
                fVar8 = pfVar25[7];
                fVar9 = pfVar25[3];
                pfVar26 = (float *)(*(int *)(param_1 + 0x554) + iVar27);
                fVar10 = pfVar30[1];
                fVar11 = pfVar26[1];
                fVar12 = pfVar30[2];
                fVar13 = pfVar26[2];
                fVar14 = pfVar30[3];
                fVar15 = pfVar26[3];
                pfVar36 = (float *)(*(int *)(param_1 + 0x54c) + iVar27);
                iVar27 = iVar27 + 0x10;
                iVar31 = iVar31 + -1;
                *pfVar36 = (*pfVar32 - *pfVar25) - (*pfVar30 + *pfVar26);
                pfVar36[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar36[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar36[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
              } while (iVar31 != 0);
            }
            *(uint *)(param_1 + 0x558) = uVar17;
          }
        }
        local_194 = 0.0;
        iVar27 = *(int *)(param_1 + 0x450) + -2;
        fVar4 = (float)iVar27;
        if (iVar27 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        local_164 = 0;
        if (uVar21 != 0) {
          pfVar32 = (float *)(iVar16 + 8 + iVar33 * 0xc);
          do {
            local_188 = local_194;
            if (fVar20 < local_194) {
              local_188 = local_194 - fVar20;
            }
            if ((int)local_164 <= iVar22) {
              fVar38 = (float10)FUN_00fddce0();
              fVar5 = (float)fVar38;
              iVar27 = *(int *)(param_1 + 0x558) + -1;
              fVar6 = (float)iVar27;
              if (iVar27 < 0) {
                fVar6 = fVar6 + 4.2949673e+09;
              }
              if (fVar5 <= 0.0) {
                fVar5 = 0.0;
              }
              if (fVar6 < fVar5) {
                fVar5 = fVar6;
              }
              iVar27 = *(int *)(param_1 + 0x554);
              iVar31 = *(int *)(param_1 + 0x550);
              iVar28 = *(int *)(param_1 + 0x54c);
              iVar1 = *(int *)(param_1 + 0x548);
              local_160 = (float)(longlong)ROUND(fVar5);
              local_188 = local_188 - fVar5;
              local_1d0 = (*(float *)(iVar28 + (int)local_160 * 0x10) +
                          (*(float *)(iVar31 + (int)local_160 * 0x10) +
                          local_188 * *(float *)(iVar27 + (int)local_160 * 0x10)) * local_188) *
                          local_188 + *(float *)(iVar1 + (int)local_160 * 0x10);
              local_1cc = *(float *)(iVar1 + 4 + (int)local_160 * 0x10) +
                          (*(float *)(iVar28 + 4 + (int)local_160 * 0x10) +
                          (*(float *)(iVar31 + 4 + (int)local_160 * 0x10) +
                          *(float *)(iVar27 + 4 + (int)local_160 * 0x10) * local_188) * local_188) *
                          local_188;
              local_1c8 = *(float *)(iVar1 + 8 + (int)local_160 * 0x10) +
                          local_188 *
                          (*(float *)(iVar28 + 8 + (int)local_160 * 0x10) +
                          (*(float *)(iVar31 + 8 + (int)local_160 * 0x10) +
                          *(float *)(iVar27 + 8 + (int)local_160 * 0x10) * local_188) * local_188);
            }
            local_164 = local_164 + 1;
            pfVar32[-2] = local_1d0;
            pfVar32[-1] = local_1cc;
            *pfVar32 = local_1c8;
            local_194 = local_194 + fVar4 / fVar3;
            pfVar32 = pfVar32 + 6;
          } while (local_164 < uVar21);
        }
        uVar17 = *(uint *)(param_1 + 0x450);
        iVar27 = *(int *)(param_1 + 0x45c + (int)local_134 * 4);
        iVar31 = *(int *)(param_1 + 0x45c + uVar24 * 4);
        if (uVar17 < 3) {
          FUN_00dd5650(&DAT_016df4c0,uVar17);
        }
        else {
          uVar35 = *(uint *)(param_1 + 0x55c);
          if (uVar35 < uVar17) {
            puVar39 = &DAT_016df478;
LAB_00eec8ab:
            FUN_00dd5650(puVar39,CONCAT44(uVar35,uVar17));
          }
          else if (*(int *)(param_1 + 0x560) == 0) {
            FUN_00dd5650();
          }
          else {
            local_194 = 0.0;
            if (3 < (int)uVar17) {
              local_164 = (uVar17 - 4 >> 2) + 1;
              iVar28 = 0;
              local_194 = (float)(local_164 * 4);
              pfVar32 = (float *)(iVar31 + 0x10);
              pfVar25 = (float *)(iVar27 + 0x1c);
              do {
                iVar1 = *(int *)(param_1 + 0x560);
                *(float *)(iVar1 + iVar28) = (pfVar25[-7] - pfVar32[-4]) * local_114 + pfVar32[-4];
                *(float *)(iVar1 + 4 + iVar28) =
                     (pfVar25[-6] - pfVar32[-3]) * local_114 + pfVar32[-3];
                *(float *)(iVar1 + 8 + iVar28) =
                     (pfVar25[-5] - pfVar32[-2]) * local_114 + pfVar32[-2];
                pfVar26 = (float *)(iVar28 + 0x10 + *(int *)(param_1 + 0x560));
                *pfVar26 = (pfVar25[-4] - pfVar32[-1]) * local_114 + pfVar32[-1];
                pfVar26[1] = (*(float *)((iVar27 - iVar31) + -0x30 + (int)(pfVar32 + 0xc)) -
                             *pfVar32) * local_114 + *pfVar32;
                pfVar26[2] = (pfVar25[-2] - pfVar32[1]) * local_114 + pfVar32[1];
                pfVar26 = (float *)(*(int *)(param_1 + 0x560) + 0x20 + iVar28);
                iVar28 = iVar28 + 0x40;
                local_164 = local_164 + -1;
                *pfVar26 = (pfVar25[-1] - pfVar32[2]) * local_114 + pfVar32[2];
                pfVar26[1] = (*pfVar25 - pfVar32[3]) * local_114 + pfVar32[3];
                pfVar26[2] = (pfVar25[1] - pfVar32[4]) * local_114 + pfVar32[4];
                iVar1 = *(int *)(param_1 + 0x560);
                *(float *)(iVar1 + -0x10 + iVar28) =
                     (pfVar25[2] - pfVar32[5]) * local_114 + pfVar32[5];
                *(float *)(iVar1 + -0xc + iVar28) =
                     (pfVar25[3] - pfVar32[6]) * local_114 + pfVar32[6];
                *(float *)(iVar1 + -8 + iVar28) = (pfVar25[4] - pfVar32[7]) * local_114 + pfVar32[7]
                ;
                pfVar32 = pfVar32 + 0xc;
                pfVar25 = pfVar25 + 0xc;
              } while (local_164 != 0);
            }
            if ((uint)local_194 < uVar17) {
              iVar27 = *(int *)(param_1 + 0x45c + (int)local_134 * 4);
              iVar31 = *(int *)(param_1 + 0x45c + uVar24 * 4);
              iVar28 = (int)local_194 << 4;
              local_164 = uVar17 - (int)local_194;
              pfVar32 = (float *)(iVar31 + 4 + (int)local_194 * 0xc);
              pfVar25 = (float *)(iVar27 + (int)local_194 * 0xc);
              do {
                iVar1 = *(int *)(param_1 + 0x560);
                iVar28 = iVar28 + 0x10;
                local_164 = local_164 + -1;
                *(float *)(iVar1 + -0x10 + iVar28) =
                     (*pfVar25 - pfVar32[-1]) * local_114 + pfVar32[-1];
                *(float *)(iVar1 + -0xc + iVar28) =
                     (*(float *)((int)pfVar32 + (iVar27 - iVar31)) - *pfVar32) * local_114 +
                     *pfVar32;
                *(float *)(iVar1 + -8 + iVar28) = (pfVar25[2] - pfVar32[1]) * local_114 + pfVar32[1]
                ;
                pfVar32 = pfVar32 + 3;
                pfVar25 = pfVar25 + 3;
              } while (local_164 != 0);
            }
            uVar35 = *(uint *)(param_1 + 0x55c);
            if (uVar35 < uVar17) {
              puVar39 = &DAT_016d98c0;
              goto LAB_00eec8ab;
            }
            *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x560);
            puVar23 = *(undefined4 **)(param_1 + 0x550);
            *puVar23 = 0;
            uVar34 = uVar17 - 1;
            puVar23[1] = 0;
            puVar23[2] = 0;
            iVar27 = uVar34 * 0x10;
            puVar23[3] = 0;
            puVar23 = (undefined4 *)(*(int *)(param_1 + 0x550) + iVar27);
            *puVar23 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            uVar35 = 1;
            if (1 < uVar34) {
              if (3 < (int)(uVar17 - 2)) {
                iVar28 = (uVar17 - 6 >> 2) + 1;
                uVar35 = iVar28 * 4 + 1;
                iVar31 = 0x10;
                do {
                  pfVar32 = (float *)(iVar31 + *(int *)(param_1 + 0x548));
                  fVar4 = pfVar32[-3];
                  fVar5 = pfVar32[5];
                  fVar6 = pfVar32[-2];
                  fVar7 = pfVar32[6];
                  fVar8 = pfVar32[-1];
                  fVar9 = pfVar32[7];
                  fVar10 = pfVar32[1];
                  fVar11 = pfVar32[2];
                  fVar12 = pfVar32[3];
                  pfVar25 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                  *pfVar25 = ((*(float *)(iVar31 + -0x10 + *(int *)(param_1 + 0x548)) + pfVar32[4])
                             - *pfVar32 * 2.0) * 3.0;
                  pfVar25[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar25[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar25[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar19 = *(int *)(param_1 + 0x548);
                  iVar1 = iVar31 + 0x20;
                  fVar4 = *(float *)(iVar31 + 4 + iVar19);
                  fVar5 = *(float *)(iVar31 + 0x24 + iVar19);
                  fVar6 = *(float *)(iVar31 + 8 + iVar19);
                  fVar7 = *(float *)(iVar31 + 0x28 + iVar19);
                  fVar8 = *(float *)(iVar31 + 0xc + iVar19);
                  fVar9 = *(float *)(iVar31 + 0x2c + iVar19);
                  fVar10 = *(float *)(iVar31 + 0x14 + iVar19);
                  fVar11 = *(float *)(iVar31 + 0x18 + iVar19);
                  fVar12 = *(float *)(iVar31 + 0x1c + iVar19);
                  pfVar32 = (float *)(iVar31 + 0x10 + *(int *)(param_1 + 0x550));
                  iVar18 = iVar31 + 0x30;
                  *pfVar32 = ((*(float *)(iVar31 + iVar19) + *(float *)(iVar1 + iVar19)) -
                             *(float *)(iVar31 + 0x10 + iVar19) * 2.0) * 3.0;
                  pfVar32[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar32[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar32[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar19 = *(int *)(param_1 + 0x548);
                  fVar4 = *(float *)(iVar31 + 0x14 + iVar19);
                  fVar5 = *(float *)(iVar31 + 0x34 + iVar19);
                  fVar6 = *(float *)(iVar31 + 0x18 + iVar19);
                  fVar7 = *(float *)(iVar31 + 0x38 + iVar19);
                  fVar8 = *(float *)(iVar31 + 0x1c + iVar19);
                  fVar9 = *(float *)(iVar31 + 0x3c + iVar19);
                  fVar10 = *(float *)(iVar31 + 0x24 + iVar19);
                  fVar11 = *(float *)(iVar31 + 0x28 + iVar19);
                  fVar12 = *(float *)(iVar31 + 0x2c + iVar19);
                  pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar1);
                  *pfVar32 = ((*(float *)(iVar31 + 0x10 + iVar19) + *(float *)(iVar18 + iVar19)) -
                             *(float *)(iVar1 + iVar19) * 2.0) * 3.0;
                  pfVar32[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar32[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar32[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar19 = *(int *)(param_1 + 0x548);
                  fVar4 = *(float *)(iVar31 + 0x24 + iVar19);
                  fVar5 = *(float *)(iVar31 + 0x44 + iVar19);
                  fVar6 = *(float *)(iVar31 + 0x28 + iVar19);
                  fVar7 = *(float *)(iVar31 + 0x48 + iVar19);
                  fVar8 = *(float *)(iVar31 + 0x2c + iVar19);
                  fVar9 = *(float *)(iVar31 + 0x4c + iVar19);
                  pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar18);
                  iVar28 = iVar28 + -1;
                  fVar10 = *(float *)(iVar31 + 0x34 + iVar19);
                  fVar11 = *(float *)(iVar31 + 0x38 + iVar19);
                  fVar12 = *(float *)(iVar31 + 0x3c + iVar19);
                  *pfVar32 = ((*(float *)(iVar1 + iVar19) + *(float *)(iVar31 + 0x40 + iVar19)) -
                             *(float *)(iVar18 + iVar19) * 2.0) * 3.0;
                  pfVar32[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar32[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar32[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                  iVar31 = iVar31 + 0x40;
                } while (iVar28 != 0);
              }
              if (uVar35 < uVar34) {
                iVar31 = uVar35 << 4;
                iVar28 = uVar34 - uVar35;
                do {
                  pfVar32 = (float *)(*(int *)(param_1 + 0x548) + -0x10 + iVar31);
                  pfVar25 = (float *)(*(int *)(param_1 + 0x548) + iVar31);
                  fVar4 = pfVar25[-3];
                  fVar5 = pfVar25[5];
                  fVar6 = pfVar25[-2];
                  fVar7 = pfVar25[6];
                  fVar8 = pfVar25[-1];
                  fVar9 = pfVar25[7];
                  fVar10 = pfVar25[1];
                  fVar11 = pfVar25[2];
                  fVar12 = pfVar25[3];
                  pfVar26 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                  iVar31 = iVar31 + 0x10;
                  iVar28 = iVar28 + -1;
                  *pfVar26 = ((*pfVar32 + pfVar25[4]) - *pfVar25 * 2.0) * 3.0;
                  pfVar26[1] = ((fVar4 + fVar5) - fVar10 * 2.0) * 3.0;
                  pfVar26[2] = ((fVar6 + fVar7) - fVar11 * 2.0) * 3.0;
                  pfVar26[3] = ((fVar8 + fVar9) - fVar12 * 2.0) * 3.0;
                } while (iVar28 != 0);
              }
            }
            uVar35 = 1;
            if (1 < uVar34) {
              if (3 < (int)(uVar17 - 2)) {
                iVar31 = 0x10;
                do {
                  pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                  fVar4 = (float)(&DAT_01dd8f60)[uVar35];
                  *pfVar32 = fVar4 * (*(float *)(*(int *)(param_1 + 0x550) + iVar31) - pfVar32[-4]);
                  pfVar32[1] = (pfVar32[1] - pfVar32[-3]) * fVar4;
                  pfVar32[2] = (pfVar32[2] - pfVar32[-2]) * fVar4;
                  pfVar32[3] = fVar4 * (pfVar32[3] - pfVar32[-1]);
                  pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                  fVar4 = (float)(&DAT_01dd8f64)[uVar35];
                  pfVar32[4] = fVar4 * (*(float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar31) -
                                       *pfVar32);
                  pfVar32[5] = (pfVar32[5] - pfVar32[1]) * fVar4;
                  pfVar32[6] = (pfVar32[6] - pfVar32[2]) * fVar4;
                  pfVar32[7] = fVar4 * (pfVar32[7] - pfVar32[3]);
                  iVar28 = *(int *)(param_1 + 0x550);
                  fVar4 = *(float *)(iVar31 + 0x14 + iVar28);
                  fVar5 = *(float *)(iVar31 + 0x18 + iVar28);
                  pfVar32 = (float *)(iVar28 + 0x2c + iVar31);
                  fVar6 = *(float *)(iVar31 + 0x1c + iVar28);
                  fVar7 = (float)(&DAT_01dd8f68)[uVar35];
                  *(float *)(iVar28 + 0x20 + iVar31) =
                       fVar7 * (*(float *)(iVar28 + 0x20 + iVar31) -
                               *(float *)(iVar31 + 0x10 + iVar28));
                  *(float *)(iVar28 + 0x24 + iVar31) =
                       (*(float *)(iVar28 + 0x24 + iVar31) - fVar4) * fVar7;
                  *(float *)(iVar28 + 0x28 + iVar31) =
                       (*(float *)(iVar28 + 0x28 + iVar31) - fVar5) * fVar7;
                  uVar35 = uVar35 + 4;
                  iVar31 = iVar31 + 0x40;
                  *(float *)(iVar28 + -0x14 + iVar31) = fVar7 * (*pfVar32 - fVar6);
                  iVar28 = *(int *)(param_1 + 0x550);
                  fVar4 = *(float *)(uVar35 * 4 + 0x1dd8f5c);
                  *(float *)(iVar28 + -0x10 + iVar31) =
                       fVar4 * (*(float *)(iVar28 + -0x10 + iVar31) -
                               *(float *)(iVar28 + -0x20 + iVar31));
                  *(float *)(iVar28 + -0xc + iVar31) =
                       (*(float *)(iVar28 + -0xc + iVar31) - *(float *)(iVar28 + -0x1c + iVar31)) *
                       fVar4;
                  *(float *)(iVar28 + -8 + iVar31) =
                       (*(float *)(iVar28 + -8 + iVar31) - *(float *)(iVar28 + -0x18 + iVar31)) *
                       fVar4;
                  *(float *)(iVar28 + -4 + iVar31) =
                       fVar4 * (*(float *)(iVar28 + -4 + iVar31) -
                               *(float *)(iVar28 + -0x14 + iVar31));
                } while (uVar35 < uVar17 - 4);
              }
              if (uVar35 < uVar34) {
                iVar31 = uVar35 << 4;
                do {
                  pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                  pfVar25 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                  uVar35 = uVar35 + 1;
                  iVar31 = iVar31 + 0x10;
                  fVar4 = *(float *)(uVar35 * 4 + 0x1dd8f5c);
                  *pfVar25 = fVar4 * (*pfVar32 - pfVar25[-4]);
                  pfVar25[1] = (pfVar25[1] - pfVar25[-3]) * fVar4;
                  pfVar25[2] = (pfVar25[2] - pfVar25[-2]) * fVar4;
                  pfVar25[3] = fVar4 * (pfVar25[3] - pfVar25[-1]);
                } while (uVar35 < uVar34);
              }
            }
            iVar31 = uVar17 - 2;
            if (iVar31 != 0) {
              iVar28 = iVar31 * 0x10;
              do {
                fVar4 = (float)(&DAT_01dd8f60)[iVar31] * -1.0;
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar28);
                iVar28 = iVar28 + -0x10;
                iVar31 = iVar31 + -1;
                *pfVar32 = *pfVar32 + fVar4 * pfVar32[4];
                pfVar32[1] = pfVar32[1] + pfVar32[5] * fVar4;
                pfVar32[2] = pfVar32[2] + pfVar32[6] * fVar4;
                pfVar32[3] = pfVar32[3] + fVar4 * pfVar32[7];
              } while (iVar31 != 0);
            }
            puVar23 = (undefined4 *)(*(int *)(param_1 + 0x54c) + iVar27);
            *puVar23 = 0;
            uVar35 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            if (3 < (int)uVar34) {
              iVar28 = (uVar17 - 5 >> 2) + 1;
              uVar35 = iVar28 * 4;
              iVar31 = 0x20;
              do {
                iVar1 = iVar31 + -0x20;
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar1);
                fVar4 = pfVar32[5];
                fVar5 = pfVar32[1];
                fVar6 = pfVar32[6];
                fVar7 = pfVar32[2];
                fVar8 = pfVar32[7];
                fVar9 = pfVar32[3];
                pfVar25 = (float *)(*(int *)(param_1 + 0x554) + iVar1);
                *pfVar25 = (*(float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar1) - *pfVar32) *
                           0.33333334;
                pfVar25[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar25[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar25[3] = (fVar8 - fVar9) * 0.33333334;
                iVar18 = *(int *)(param_1 + 0x550);
                fVar4 = *(float *)(iVar31 + 4 + iVar18);
                fVar5 = *(float *)(iVar31 + -0xc + iVar18);
                fVar6 = *(float *)(iVar31 + 8 + iVar18);
                fVar7 = *(float *)(iVar31 + -8 + iVar18);
                fVar8 = *(float *)(iVar31 + 0xc + iVar18);
                fVar9 = *(float *)(iVar31 + -4 + iVar18);
                pfVar32 = (float *)(*(int *)(param_1 + 0x554) + 0x10 + iVar1);
                *pfVar32 = (*(float *)(iVar31 + iVar18) - *(float *)(iVar31 + -0x10 + iVar18)) *
                           0.33333334;
                pfVar32[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar32[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar32[3] = (fVar8 - fVar9) * 0.33333334;
                iVar1 = *(int *)(param_1 + 0x550);
                fVar4 = *(float *)(iVar31 + 0x14 + iVar1);
                fVar5 = *(float *)(iVar31 + 4 + iVar1);
                fVar6 = *(float *)(iVar31 + 0x18 + iVar1);
                fVar7 = *(float *)(iVar31 + 8 + iVar1);
                fVar8 = *(float *)(iVar31 + 0x1c + iVar1);
                fVar9 = *(float *)(iVar31 + 0xc + iVar1);
                pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar31);
                *pfVar32 = (*(float *)(iVar31 + 0x10 + iVar1) - *(float *)(iVar31 + iVar1)) *
                           0.33333334;
                pfVar32[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar32[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar32[3] = (fVar8 - fVar9) * 0.33333334;
                iVar1 = *(int *)(param_1 + 0x550);
                fVar4 = *(float *)(iVar31 + 0x24 + iVar1);
                fVar5 = *(float *)(iVar31 + 0x14 + iVar1);
                fVar6 = *(float *)(iVar31 + 0x28 + iVar1);
                fVar7 = *(float *)(iVar31 + 0x18 + iVar1);
                fVar8 = *(float *)(iVar31 + 0x2c + iVar1);
                fVar9 = *(float *)(iVar31 + 0x1c + iVar1);
                pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar31 + 0x10);
                iVar28 = iVar28 + -1;
                *pfVar32 = (*(float *)(iVar31 + 0x20 + iVar1) - *(float *)(iVar31 + 0x10 + iVar1)) *
                           0.33333334;
                pfVar32[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar32[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar32[3] = (fVar8 - fVar9) * 0.33333334;
                iVar31 = iVar31 + 0x40;
              } while (iVar28 != 0);
            }
            if (uVar35 < uVar34) {
              iVar31 = uVar35 << 4;
              iVar28 = uVar34 - uVar35;
              do {
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar31);
                pfVar25 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                fVar4 = pfVar25[5];
                fVar5 = pfVar25[1];
                fVar6 = pfVar25[6];
                fVar7 = pfVar25[2];
                fVar8 = pfVar25[7];
                fVar9 = pfVar25[3];
                pfVar26 = (float *)(*(int *)(param_1 + 0x554) + iVar31);
                iVar31 = iVar31 + 0x10;
                iVar28 = iVar28 + -1;
                *pfVar26 = (*pfVar32 - *pfVar25) * 0.33333334;
                pfVar26[1] = (fVar4 - fVar5) * 0.33333334;
                pfVar26[2] = (fVar6 - fVar7) * 0.33333334;
                pfVar26[3] = (fVar8 - fVar9) * 0.33333334;
              } while (iVar28 != 0);
            }
            puVar23 = (undefined4 *)(*(int *)(param_1 + 0x554) + iVar27);
            *puVar23 = 0;
            local_164 = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            if (3 < (int)uVar34) {
              iVar31 = (uVar17 - 5 >> 2) + 1;
              local_164 = iVar31 * 4;
              iVar27 = 0x20;
              do {
                iVar28 = iVar27 + -0x20;
                pfVar32 = (float *)(*(int *)(param_1 + 0x548) + iVar28);
                pfVar36 = (float *)(*(int *)(param_1 + 0x550) + iVar28);
                fVar4 = pfVar32[5];
                fVar5 = pfVar32[1];
                fVar6 = pfVar32[6];
                fVar7 = pfVar32[2];
                fVar8 = pfVar32[7];
                fVar9 = pfVar32[3];
                pfVar25 = (float *)(*(int *)(param_1 + 0x554) + iVar28);
                fVar10 = pfVar36[1];
                fVar11 = pfVar25[1];
                fVar12 = pfVar36[2];
                fVar13 = pfVar25[2];
                fVar14 = pfVar36[3];
                fVar15 = pfVar25[3];
                pfVar26 = (float *)(*(int *)(param_1 + 0x54c) + iVar28);
                *pfVar26 = (*(float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar28) - *pfVar32) -
                           (*pfVar36 + *pfVar25);
                pfVar26[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar26[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar26[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
                iVar1 = *(int *)(param_1 + 0x548);
                pfVar32 = (float *)(iVar27 + -0x10 + *(int *)(param_1 + 0x550));
                fVar4 = *(float *)(iVar27 + 4 + iVar1);
                fVar5 = *(float *)(iVar27 + -0xc + iVar1);
                fVar6 = *(float *)(iVar27 + 8 + iVar1);
                fVar7 = *(float *)(iVar27 + -8 + iVar1);
                fVar8 = *(float *)(iVar27 + 0xc + iVar1);
                fVar9 = *(float *)(iVar27 + -4 + iVar1);
                pfVar25 = (float *)(*(int *)(param_1 + 0x554) + 0x10 + iVar28);
                fVar10 = pfVar32[1];
                fVar11 = pfVar25[1];
                fVar12 = pfVar32[2];
                fVar13 = pfVar25[2];
                fVar14 = pfVar32[3];
                fVar15 = pfVar25[3];
                pfVar26 = (float *)(iVar27 + -0x10 + *(int *)(param_1 + 0x54c));
                *pfVar26 = (*(float *)(iVar27 + iVar1) - *(float *)(iVar27 + -0x10 + iVar1)) -
                           (*pfVar32 + *pfVar25);
                pfVar26[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar26[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar26[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
                iVar1 = *(int *)(param_1 + 0x548);
                iVar28 = iVar27 + 0x10;
                pfVar26 = (float *)(*(int *)(param_1 + 0x550) + iVar27);
                fVar4 = *(float *)(iVar27 + 0x14 + iVar1);
                fVar5 = *(float *)(iVar27 + 4 + iVar1);
                fVar6 = *(float *)(iVar27 + 0x18 + iVar1);
                fVar7 = *(float *)(iVar27 + 8 + iVar1);
                fVar8 = *(float *)(iVar27 + 0x1c + iVar1);
                fVar9 = *(float *)(iVar27 + 0xc + iVar1);
                pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar27);
                fVar10 = pfVar26[1];
                fVar11 = pfVar32[1];
                fVar12 = pfVar26[2];
                fVar13 = pfVar32[2];
                fVar14 = pfVar26[3];
                fVar15 = pfVar32[3];
                pfVar25 = (float *)(*(int *)(param_1 + 0x54c) + iVar27);
                *pfVar25 = (*(float *)(iVar27 + 0x10 + iVar1) - *(float *)(iVar27 + iVar1)) -
                           (*pfVar26 + *pfVar32);
                pfVar25[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar25[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar25[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
                iVar18 = *(int *)(param_1 + 0x548);
                iVar1 = iVar27 + 0x20;
                fVar4 = *(float *)(iVar27 + 0x24 + iVar18);
                fVar5 = *(float *)(iVar27 + 0x14 + iVar18);
                fVar6 = *(float *)(iVar27 + 0x28 + iVar18);
                fVar7 = *(float *)(iVar27 + 0x18 + iVar18);
                fVar8 = *(float *)(iVar27 + 0x2c + iVar18);
                fVar9 = *(float *)(iVar27 + 0x1c + iVar18);
                pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar28);
                pfVar26 = (float *)(*(int *)(param_1 + 0x550) + iVar28);
                fVar10 = pfVar26[1];
                fVar11 = pfVar32[1];
                fVar12 = pfVar26[2];
                fVar13 = pfVar32[2];
                fVar14 = pfVar26[3];
                fVar15 = pfVar32[3];
                pfVar25 = (float *)(*(int *)(param_1 + 0x54c) + iVar28);
                iVar27 = iVar27 + 0x40;
                iVar31 = iVar31 + -1;
                *pfVar25 = (*(float *)(iVar1 + iVar18) - *(float *)(iVar28 + iVar18)) -
                           (*pfVar26 + *pfVar32);
                pfVar25[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar25[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar25[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
              } while (iVar31 != 0);
            }
            if (local_164 < uVar34) {
              iVar27 = local_164 << 4;
              iVar31 = uVar34 - local_164;
              do {
                pfVar32 = (float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar27);
                pfVar25 = (float *)(*(int *)(param_1 + 0x548) + iVar27);
                pfVar30 = (float *)(*(int *)(param_1 + 0x550) + iVar27);
                fVar4 = pfVar25[5];
                fVar5 = pfVar25[1];
                fVar6 = pfVar25[6];
                fVar7 = pfVar25[2];
                fVar8 = pfVar25[7];
                fVar9 = pfVar25[3];
                pfVar26 = (float *)(*(int *)(param_1 + 0x554) + iVar27);
                fVar10 = pfVar30[1];
                fVar11 = pfVar26[1];
                fVar12 = pfVar30[2];
                fVar13 = pfVar26[2];
                fVar14 = pfVar30[3];
                fVar15 = pfVar26[3];
                pfVar36 = (float *)(*(int *)(param_1 + 0x54c) + iVar27);
                iVar27 = iVar27 + 0x10;
                iVar31 = iVar31 + -1;
                *pfVar36 = (*pfVar32 - *pfVar25) - (*pfVar30 + *pfVar26);
                pfVar36[1] = (fVar4 - fVar5) - (fVar10 + fVar11);
                pfVar36[2] = (fVar6 - fVar7) - (fVar12 + fVar13);
                pfVar36[3] = (fVar8 - fVar9) - (fVar14 + fVar15);
              } while (iVar31 != 0);
            }
            *(uint *)(param_1 + 0x558) = uVar17;
          }
        }
        local_188 = 0.0;
        iVar27 = *(int *)(param_1 + 0x450) + -2;
        fVar4 = (float)iVar27;
        if (iVar27 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        local_164 = 0;
        if (uVar21 != 0) {
          pfVar32 = (float *)(iVar16 + 8 + (iVar33 * 3 + 3) * 4);
          do {
            local_194 = local_188;
            if (fVar20 < local_188) {
              local_194 = local_188 - fVar20;
            }
            if ((int)local_164 <= iVar22) {
              fVar38 = (float10)FUN_00fddce0();
              local_160 = (float)fVar38;
              iVar27 = *(int *)(param_1 + 0x558) + -1;
              fVar5 = (float)iVar27;
              if (iVar27 < 0) {
                fVar5 = fVar5 + 4.2949673e+09;
              }
              if (local_160 <= 0.0) {
                local_160 = 0.0;
              }
              if (fVar5 < local_160) {
                local_160 = fVar5;
              }
              iVar27 = *(int *)(param_1 + 0x554);
              iVar31 = *(int *)(param_1 + 0x550);
              iVar33 = *(int *)(param_1 + 0x54c);
              iVar28 = *(int *)(param_1 + 0x548);
              local_1e0 = (int)(longlong)ROUND(local_160);
              local_194 = local_194 - local_160;
              local_1d0 = (*(float *)(iVar33 + local_1e0 * 0x10) +
                          (*(float *)(iVar31 + local_1e0 * 0x10) +
                          local_194 * *(float *)(iVar27 + local_1e0 * 0x10)) * local_194) *
                          local_194 + *(float *)(iVar28 + local_1e0 * 0x10);
              local_1cc = *(float *)(iVar28 + 4 + local_1e0 * 0x10) +
                          (*(float *)(iVar33 + 4 + local_1e0 * 0x10) +
                          (*(float *)(iVar31 + 4 + local_1e0 * 0x10) +
                          *(float *)(iVar27 + 4 + local_1e0 * 0x10) * local_194) * local_194) *
                          local_194;
              local_1c8 = *(float *)(iVar28 + 8 + local_1e0 * 0x10) +
                          local_194 *
                          (*(float *)(iVar33 + 8 + local_1e0 * 0x10) +
                          (*(float *)(iVar31 + 8 + local_1e0 * 0x10) +
                          *(float *)(iVar27 + 8 + local_1e0 * 0x10) * local_194) * local_194);
            }
            local_164 = local_164 + 1;
            pfVar32[-2] = local_1d0;
            pfVar32[-1] = local_1cc;
            *pfVar32 = local_1c8;
            local_188 = fVar4 / fVar3 + local_188;
            pfVar32 = pfVar32 + 6;
          } while (local_164 < uVar21);
        }
        local_184 = local_184 + 1;
        local_18c = fVar2 + local_18c;
        local_114 = local_114 + fVar2;
      } while ((int)local_184 < *(int *)(param_1 + 0x540));
    }
    iVar22 = 1;
    if (1 < *(int *)(param_1 + 0x540)) {
      puVar23 = (undefined4 *)(uVar21 * 0x18 + 4 + iVar16);
      do {
        iVar22 = iVar22 + 1;
        puVar23[-1] = puVar23[-4];
        *puVar23 = puVar23[-3];
        puVar23[1] = puVar23[-2];
        puVar23[2] = puVar23[5];
        puVar23[3] = puVar23[6];
        puVar23[4] = puVar23[7];
        puVar23 = puVar23 + uVar21 * 6 + 6;
      } while (iVar22 < *(int *)(param_1 + 0x540));
    }
    goto LAB_00eedc5e;
  }
  iVar27 = *(int *)(param_1 + 0x45c + uVar24 * 4);
  if (uVar17 < 3) {
    FUN_00dd5650(&DAT_016df4c0,uVar17);
  }
  else {
    uVar24 = *(uint *)(param_1 + 0x55c);
    if (uVar24 < uVar17) {
      puVar39 = &DAT_016df478;
LAB_00ee8fe3:
      FUN_00dd5650(puVar39,CONCAT44(uVar24,uVar17));
    }
    else if (*(int *)(param_1 + 0x560) == 0) {
      FUN_00dd5650();
    }
    else {
      local_184 = 0;
      if (3 < (int)uVar17) {
        iVar33 = (uVar17 - 4 >> 2) + 1;
        local_184 = iVar33 * 4;
        puVar23 = (undefined4 *)(iVar27 + 0x14);
        iVar31 = 0;
        do {
          iVar28 = *(int *)(param_1 + 0x560);
          *(undefined4 *)(iVar28 + iVar31) = puVar23[-5];
          iVar28 = iVar28 + iVar31;
          *(undefined4 *)(iVar28 + 4) = puVar23[-4];
          *(undefined4 *)(iVar28 + 8) = puVar23[-3];
          *(undefined4 *)(iVar28 + 0xc) = 0x3f800000;
          puVar29 = (undefined4 *)(iVar31 + 0x10 + *(int *)(param_1 + 0x560));
          *puVar29 = puVar23[-2];
          puVar29[1] = puVar23[-1];
          puVar29[2] = *puVar23;
          puVar29[3] = 0x3f800000;
          puVar29 = (undefined4 *)(iVar31 + 0x20 + *(int *)(param_1 + 0x560));
          *puVar29 = puVar23[1];
          puVar29[1] = puVar23[2];
          puVar29[2] = puVar23[3];
          puVar29[3] = 0x3f800000;
          puVar29 = (undefined4 *)(*(int *)(param_1 + 0x560) + iVar31 + 0x30);
          iVar33 = iVar33 + -1;
          *puVar29 = puVar23[4];
          puVar29[1] = puVar23[5];
          puVar29[2] = puVar23[6];
          puVar29[3] = 0x3f800000;
          puVar23 = puVar23 + 0xc;
          iVar31 = iVar31 + 0x40;
        } while (iVar33 != 0);
      }
      if (local_184 < uVar17) {
        iVar31 = local_184 << 4;
        iVar33 = uVar17 - local_184;
        puVar23 = (undefined4 *)(iVar27 + 8 + local_184 * 0xc);
        do {
          puVar29 = (undefined4 *)(*(int *)(param_1 + 0x560) + iVar31);
          *puVar29 = puVar23[-2];
          iVar31 = iVar31 + 0x10;
          iVar33 = iVar33 + -1;
          puVar29[1] = puVar23[-1];
          puVar29[2] = *puVar23;
          puVar29[3] = 0x3f800000;
          puVar23 = puVar23 + 3;
        } while (iVar33 != 0);
      }
      uVar24 = *(uint *)(param_1 + 0x55c);
      if (uVar24 < uVar17) {
        puVar39 = &DAT_016d98c0;
        goto LAB_00ee8fe3;
      }
      *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x560);
      puVar23 = *(undefined4 **)(param_1 + 0x550);
      *puVar23 = 0;
      uVar35 = uVar17 - 1;
      puVar23[1] = 0;
      puVar23[2] = 0;
      iVar27 = uVar35 * 0x10;
      puVar23[3] = 0;
      puVar23 = (undefined4 *)(*(int *)(param_1 + 0x550) + iVar27);
      *puVar23 = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      uVar24 = 1;
      if (1 < uVar35) {
        if (3 < (int)(uVar17 - 2)) {
          iVar33 = (uVar17 - 6 >> 2) + 1;
          uVar24 = iVar33 * 4 + 1;
          iVar31 = 0x10;
          do {
            pfVar32 = (float *)(iVar31 + *(int *)(param_1 + 0x548));
            fVar2 = pfVar32[-3];
            fVar3 = pfVar32[5];
            fVar4 = pfVar32[-2];
            fVar5 = pfVar32[6];
            fVar6 = pfVar32[-1];
            fVar7 = pfVar32[7];
            fVar8 = pfVar32[1];
            fVar9 = pfVar32[2];
            fVar10 = pfVar32[3];
            pfVar25 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
            *pfVar25 = ((*(float *)(iVar31 + -0x10 + *(int *)(param_1 + 0x548)) + pfVar32[4]) -
                       *pfVar32 * 2.0) * 3.0;
            pfVar25[1] = ((fVar2 + fVar3) - fVar8 * 2.0) * 3.0;
            pfVar25[2] = ((fVar4 + fVar5) - fVar9 * 2.0) * 3.0;
            pfVar25[3] = ((fVar6 + fVar7) - fVar10 * 2.0) * 3.0;
            iVar18 = *(int *)(param_1 + 0x548);
            iVar28 = iVar31 + 0x20;
            fVar2 = *(float *)(iVar18 + 4 + iVar31);
            fVar3 = *(float *)(iVar31 + 0x24 + iVar18);
            fVar4 = *(float *)(iVar18 + 8 + iVar31);
            fVar5 = *(float *)(iVar31 + 0x28 + iVar18);
            fVar6 = *(float *)(iVar18 + 0xc + iVar31);
            fVar7 = *(float *)(iVar31 + 0x2c + iVar18);
            fVar8 = *(float *)(iVar18 + 0x14 + iVar31);
            fVar9 = *(float *)(iVar18 + 0x18 + iVar31);
            fVar10 = *(float *)(iVar18 + 0x1c + iVar31);
            pfVar32 = (float *)(iVar31 + 0x10 + *(int *)(param_1 + 0x550));
            iVar1 = iVar31 + 0x30;
            *pfVar32 = ((*(float *)(iVar18 + iVar31) + *(float *)(iVar28 + iVar18)) -
                       *(float *)(iVar18 + 0x10 + iVar31) * 2.0) * 3.0;
            pfVar32[1] = ((fVar2 + fVar3) - fVar8 * 2.0) * 3.0;
            pfVar32[2] = ((fVar4 + fVar5) - fVar9 * 2.0) * 3.0;
            pfVar32[3] = ((fVar6 + fVar7) - fVar10 * 2.0) * 3.0;
            iVar18 = *(int *)(param_1 + 0x548);
            fVar2 = *(float *)(iVar18 + 0x14 + iVar31);
            fVar3 = *(float *)(iVar31 + 0x34 + iVar18);
            fVar4 = *(float *)(iVar18 + 0x18 + iVar31);
            fVar5 = *(float *)(iVar31 + 0x38 + iVar18);
            fVar6 = *(float *)(iVar18 + 0x1c + iVar31);
            fVar7 = *(float *)(iVar31 + 0x3c + iVar18);
            fVar8 = *(float *)(iVar31 + 0x24 + iVar18);
            fVar9 = *(float *)(iVar31 + 0x28 + iVar18);
            fVar10 = *(float *)(iVar31 + 0x2c + iVar18);
            pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar28);
            *pfVar32 = ((*(float *)(iVar18 + 0x10 + iVar31) + *(float *)(iVar1 + iVar18)) -
                       *(float *)(iVar28 + iVar18) * 2.0) * 3.0;
            pfVar32[1] = ((fVar2 + fVar3) - fVar8 * 2.0) * 3.0;
            pfVar32[2] = ((fVar4 + fVar5) - fVar9 * 2.0) * 3.0;
            pfVar32[3] = ((fVar6 + fVar7) - fVar10 * 2.0) * 3.0;
            iVar18 = *(int *)(param_1 + 0x548);
            local_1d0 = *(float *)(iVar28 + iVar18) + *(float *)(iVar31 + 0x40 + iVar18);
            local_1cc = *(float *)(iVar31 + 0x24 + iVar18) + *(float *)(iVar31 + 0x44 + iVar18);
            local_1c8 = *(float *)(iVar31 + 0x28 + iVar18) + *(float *)(iVar31 + 0x48 + iVar18);
            fVar2 = *(float *)(iVar31 + 0x2c + iVar18);
            fVar3 = *(float *)(iVar31 + 0x4c + iVar18);
            pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar1);
            iVar33 = iVar33 + -1;
            fVar4 = *(float *)(iVar31 + 0x34 + iVar18);
            fVar5 = *(float *)(iVar31 + 0x38 + iVar18);
            fVar6 = *(float *)(iVar31 + 0x3c + iVar18);
            *pfVar32 = (local_1d0 - *(float *)(iVar1 + iVar18) * 2.0) * 3.0;
            pfVar32[1] = (local_1cc - fVar4 * 2.0) * 3.0;
            pfVar32[2] = (local_1c8 - fVar5 * 2.0) * 3.0;
            pfVar32[3] = ((fVar2 + fVar3) - fVar6 * 2.0) * 3.0;
            iVar31 = iVar31 + 0x40;
          } while (iVar33 != 0);
        }
        if (uVar24 < uVar35) {
          iVar31 = uVar24 << 4;
          iVar33 = uVar35 - uVar24;
          do {
            pfVar32 = (float *)(*(int *)(param_1 + 0x548) + iVar31);
            local_1d0 = *(float *)(*(int *)(param_1 + 0x548) + -0x10 + iVar31) + pfVar32[4];
            local_1cc = pfVar32[-3] + pfVar32[5];
            local_1c8 = pfVar32[-2] + pfVar32[6];
            fVar2 = pfVar32[-1];
            fVar3 = pfVar32[7];
            fVar4 = pfVar32[1];
            fVar5 = pfVar32[2];
            fVar6 = pfVar32[3];
            pfVar25 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
            iVar31 = iVar31 + 0x10;
            iVar33 = iVar33 + -1;
            *pfVar25 = (local_1d0 - *pfVar32 * 2.0) * 3.0;
            pfVar25[1] = (local_1cc - fVar4 * 2.0) * 3.0;
            pfVar25[2] = (local_1c8 - fVar5 * 2.0) * 3.0;
            pfVar25[3] = ((fVar2 + fVar3) - fVar6 * 2.0) * 3.0;
          } while (iVar33 != 0);
        }
      }
      uVar24 = 1;
      if (1 < uVar35) {
        if (3 < (int)(uVar17 - 2)) {
          iVar31 = 0x10;
          do {
            pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
            fVar2 = (float)(&DAT_01dd8f60)[uVar24];
            *pfVar32 = fVar2 * (*(float *)(*(int *)(param_1 + 0x550) + iVar31) - pfVar32[-4]);
            pfVar32[1] = (pfVar32[1] - pfVar32[-3]) * fVar2;
            pfVar32[2] = (pfVar32[2] - pfVar32[-2]) * fVar2;
            pfVar32[3] = fVar2 * (pfVar32[3] - pfVar32[-1]);
            pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
            fVar2 = (float)(&DAT_01dd8f64)[uVar24];
            pfVar32[4] = fVar2 * (*(float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar31) - *pfVar32);
            pfVar32[5] = (pfVar32[5] - pfVar32[1]) * fVar2;
            pfVar32[6] = (pfVar32[6] - pfVar32[2]) * fVar2;
            pfVar32[7] = fVar2 * (pfVar32[7] - pfVar32[3]);
            iVar33 = *(int *)(param_1 + 0x550);
            fVar2 = *(float *)(iVar31 + 0x14 + iVar33);
            fVar3 = *(float *)(iVar31 + 0x18 + iVar33);
            pfVar32 = (float *)(iVar33 + 0x2c + iVar31);
            fVar4 = *(float *)(iVar31 + 0x1c + iVar33);
            fVar5 = (float)(&DAT_01dd8f68)[uVar24];
            *(float *)(iVar33 + 0x20 + iVar31) =
                 fVar5 * (*(float *)(iVar33 + 0x20 + iVar31) - *(float *)(iVar31 + 0x10 + iVar33));
            *(float *)(iVar33 + 0x24 + iVar31) =
                 (*(float *)(iVar33 + 0x24 + iVar31) - fVar2) * fVar5;
            *(float *)(iVar33 + 0x28 + iVar31) =
                 (*(float *)(iVar33 + 0x28 + iVar31) - fVar3) * fVar5;
            uVar24 = uVar24 + 4;
            iVar31 = iVar31 + 0x40;
            *(float *)(iVar33 + -0x14 + iVar31) = fVar5 * (*pfVar32 - fVar4);
            iVar33 = *(int *)(param_1 + 0x550);
            local_1d0 = *(float *)(iVar33 + -0x10 + iVar31) - *(float *)(iVar33 + -0x20 + iVar31);
            local_1cc = *(float *)(iVar33 + -0xc + iVar31) - *(float *)(iVar33 + -0x1c + iVar31);
            local_1c8 = *(float *)(iVar33 + -8 + iVar31) - *(float *)(iVar33 + -0x18 + iVar31);
            fVar2 = *(float *)(uVar24 * 4 + 0x1dd8f5c);
            *(float *)(iVar33 + -0x10 + iVar31) = fVar2 * local_1d0;
            *(float *)(iVar33 + -0xc + iVar31) = local_1cc * fVar2;
            *(float *)(iVar33 + -8 + iVar31) = local_1c8 * fVar2;
            *(float *)(iVar33 + -4 + iVar31) =
                 fVar2 * (*(float *)(iVar33 + -4 + iVar31) - *(float *)(iVar33 + -0x14 + iVar31));
          } while (uVar24 < uVar17 - 4);
        }
        if (uVar24 < uVar35) {
          iVar31 = uVar24 << 4;
          do {
            pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
            local_1d0 = *(float *)(*(int *)(param_1 + 0x550) + iVar31) - pfVar32[-4];
            uVar24 = uVar24 + 1;
            iVar31 = iVar31 + 0x10;
            local_1cc = pfVar32[1] - pfVar32[-3];
            local_1c8 = pfVar32[2] - pfVar32[-2];
            fVar2 = *(float *)(uVar24 * 4 + 0x1dd8f5c);
            *pfVar32 = fVar2 * local_1d0;
            pfVar32[1] = local_1cc * fVar2;
            pfVar32[2] = local_1c8 * fVar2;
            pfVar32[3] = fVar2 * (pfVar32[3] - pfVar32[-1]);
          } while (uVar24 < uVar35);
        }
      }
      iVar31 = uVar17 - 2;
      if (iVar31 != 0) {
        iVar33 = iVar31 * 0x10;
        do {
          fVar2 = (float)(&DAT_01dd8f60)[iVar31] * -1.0;
          pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar33);
          iVar33 = iVar33 + -0x10;
          iVar31 = iVar31 + -1;
          *pfVar32 = *pfVar32 + fVar2 * pfVar32[4];
          pfVar32[1] = pfVar32[1] + pfVar32[5] * fVar2;
          pfVar32[2] = pfVar32[2] + pfVar32[6] * fVar2;
          pfVar32[3] = pfVar32[3] + fVar2 * pfVar32[7];
        } while (iVar31 != 0);
      }
      puVar23 = (undefined4 *)(*(int *)(param_1 + 0x54c) + iVar27);
      *puVar23 = 0;
      uVar24 = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      if (3 < (int)uVar35) {
        iVar33 = (uVar17 - 5 >> 2) + 1;
        iVar31 = 0x20;
        uVar24 = iVar33 * 4;
        do {
          iVar28 = iVar31 + -0x20;
          pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar28);
          fVar2 = pfVar32[5];
          fVar3 = pfVar32[1];
          fVar4 = pfVar32[6];
          fVar5 = pfVar32[2];
          fVar6 = pfVar32[7];
          fVar7 = pfVar32[3];
          pfVar25 = (float *)(*(int *)(param_1 + 0x554) + iVar28);
          *pfVar25 = (*(float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar28) - *pfVar32) * 0.33333334
          ;
          pfVar25[1] = (fVar2 - fVar3) * 0.33333334;
          pfVar25[2] = (fVar4 - fVar5) * 0.33333334;
          pfVar25[3] = (fVar6 - fVar7) * 0.33333334;
          iVar18 = *(int *)(param_1 + 0x550);
          fVar2 = *(float *)(iVar18 + 4 + iVar31);
          fVar3 = *(float *)(iVar18 + 0x14 + iVar28);
          fVar4 = *(float *)(iVar18 + 8 + iVar31);
          fVar5 = *(float *)(iVar18 + 0x18 + iVar28);
          fVar6 = *(float *)(iVar18 + 0xc + iVar31);
          fVar7 = *(float *)(iVar18 + 0x1c + iVar28);
          pfVar32 = (float *)(*(int *)(param_1 + 0x554) + 0x10 + iVar28);
          iVar1 = iVar31 + 0x10;
          *pfVar32 = (*(float *)(iVar18 + iVar31) - *(float *)(iVar18 + 0x10 + iVar28)) * 0.33333334
          ;
          pfVar32[1] = (fVar2 - fVar3) * 0.33333334;
          pfVar32[2] = (fVar4 - fVar5) * 0.33333334;
          pfVar32[3] = (fVar6 - fVar7) * 0.33333334;
          iVar28 = *(int *)(param_1 + 0x550);
          fVar2 = *(float *)(iVar28 + 4 + iVar1);
          fVar3 = *(float *)(iVar28 + 4 + iVar31);
          fVar4 = *(float *)(iVar28 + 8 + iVar1);
          fVar5 = *(float *)(iVar28 + 8 + iVar31);
          fVar6 = *(float *)(iVar28 + 0xc + iVar1);
          fVar7 = *(float *)(iVar28 + 0xc + iVar31);
          pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar31);
          *pfVar32 = (*(float *)(iVar28 + iVar1) - *(float *)(iVar28 + iVar31)) * 0.33333334;
          pfVar32[1] = (fVar2 - fVar3) * 0.33333334;
          pfVar32[2] = (fVar4 - fVar5) * 0.33333334;
          iVar31 = iVar31 + 0x40;
          pfVar32[3] = (fVar6 - fVar7) * 0.33333334;
          iVar28 = *(int *)(param_1 + 0x550);
          local_1d0 = *(float *)(iVar28 + -0x20 + iVar31) - *(float *)(iVar28 + iVar1);
          local_1cc = *(float *)(iVar28 + -0x1c + iVar31) - *(float *)(iVar28 + 4 + iVar1);
          local_1c8 = *(float *)(iVar28 + -0x18 + iVar31) - *(float *)(iVar28 + 8 + iVar1);
          fVar2 = *(float *)(iVar28 + -0x14 + iVar31);
          fVar3 = *(float *)(iVar28 + 0xc + iVar1);
          pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar1);
          iVar33 = iVar33 + -1;
          *pfVar32 = local_1d0 * 0.33333334;
          pfVar32[1] = local_1cc * 0.33333334;
          pfVar32[2] = local_1c8 * 0.33333334;
          pfVar32[3] = (fVar2 - fVar3) * 0.33333334;
        } while (iVar33 != 0);
      }
      if (uVar24 < uVar35) {
        iVar31 = uVar24 << 4;
        iVar33 = uVar35 - uVar24;
        do {
          pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
          local_1d0 = *(float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar31) - *pfVar32;
          local_1cc = pfVar32[5] - pfVar32[1];
          local_1c8 = pfVar32[6] - pfVar32[2];
          fVar2 = pfVar32[7];
          fVar3 = pfVar32[3];
          pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar31);
          iVar31 = iVar31 + 0x10;
          iVar33 = iVar33 + -1;
          *pfVar32 = local_1d0 * 0.33333334;
          pfVar32[1] = local_1cc * 0.33333334;
          pfVar32[2] = local_1c8 * 0.33333334;
          pfVar32[3] = (fVar2 - fVar3) * 0.33333334;
        } while (iVar33 != 0);
      }
      puVar23 = (undefined4 *)(*(int *)(param_1 + 0x554) + iVar27);
      local_184 = 0;
      *puVar23 = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      if (3 < (int)uVar35) {
        iVar31 = (uVar17 - 5 >> 2) + 1;
        local_184 = iVar31 * 4;
        iVar27 = 0x20;
        do {
          iVar33 = iVar27 + -0x20;
          pfVar32 = (float *)(*(int *)(param_1 + 0x548) + iVar33);
          pfVar36 = (float *)(*(int *)(param_1 + 0x550) + iVar33);
          fVar2 = pfVar32[5];
          fVar3 = pfVar32[1];
          fVar4 = pfVar32[6];
          fVar5 = pfVar32[2];
          fVar6 = pfVar32[7];
          fVar7 = pfVar32[3];
          pfVar25 = (float *)(*(int *)(param_1 + 0x554) + iVar33);
          fVar8 = pfVar36[1];
          fVar9 = pfVar25[1];
          fVar10 = pfVar36[2];
          fVar11 = pfVar25[2];
          fVar12 = pfVar36[3];
          fVar13 = pfVar25[3];
          pfVar26 = (float *)(*(int *)(param_1 + 0x54c) + iVar33);
          *pfVar26 = (*(float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar33) - *pfVar32) -
                     (*pfVar36 + *pfVar25);
          pfVar26[1] = (fVar2 - fVar3) - (fVar8 + fVar9);
          pfVar26[2] = (fVar4 - fVar5) - (fVar10 + fVar11);
          pfVar26[3] = (fVar6 - fVar7) - (fVar12 + fVar13);
          iVar28 = *(int *)(param_1 + 0x548);
          pfVar32 = (float *)(iVar27 + -0x10 + *(int *)(param_1 + 0x550));
          fVar2 = *(float *)(iVar28 + 4 + iVar27);
          fVar3 = *(float *)(iVar28 + 0x14 + iVar33);
          fVar4 = *(float *)(iVar28 + 8 + iVar27);
          fVar5 = *(float *)(iVar28 + 0x18 + iVar33);
          fVar6 = *(float *)(iVar28 + 0xc + iVar27);
          fVar7 = *(float *)(iVar28 + 0x1c + iVar33);
          pfVar25 = (float *)(*(int *)(param_1 + 0x554) + 0x10 + iVar33);
          fVar8 = pfVar32[1];
          fVar9 = pfVar25[1];
          fVar10 = pfVar32[2];
          fVar11 = pfVar25[2];
          fVar12 = pfVar32[3];
          fVar13 = pfVar25[3];
          pfVar26 = (float *)(iVar27 + -0x10 + *(int *)(param_1 + 0x54c));
          *pfVar26 = (*(float *)(iVar28 + iVar27) - *(float *)(iVar28 + 0x10 + iVar33)) -
                     (*pfVar32 + *pfVar25);
          pfVar26[1] = (fVar2 - fVar3) - (fVar8 + fVar9);
          pfVar26[2] = (fVar4 - fVar5) - (fVar10 + fVar11);
          pfVar26[3] = (fVar6 - fVar7) - (fVar12 + fVar13);
          iVar28 = *(int *)(param_1 + 0x548);
          iVar33 = iVar27 + 0x10;
          pfVar26 = (float *)(*(int *)(param_1 + 0x550) + iVar27);
          fVar2 = *(float *)(iVar28 + 4 + iVar33);
          fVar3 = *(float *)(iVar28 + 4 + iVar27);
          fVar4 = *(float *)(iVar28 + 8 + iVar33);
          fVar5 = *(float *)(iVar28 + 8 + iVar27);
          fVar6 = *(float *)(iVar28 + 0xc + iVar33);
          fVar7 = *(float *)(iVar28 + 0xc + iVar27);
          pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar27);
          fVar8 = pfVar26[1];
          fVar9 = pfVar32[1];
          fVar10 = pfVar26[2];
          fVar11 = pfVar32[2];
          fVar12 = pfVar26[3];
          fVar13 = pfVar32[3];
          pfVar25 = (float *)(*(int *)(param_1 + 0x54c) + iVar27);
          *pfVar25 = (*(float *)(iVar28 + 0x10 + iVar27) - *(float *)(iVar28 + iVar27)) -
                     (*pfVar26 + *pfVar32);
          pfVar25[1] = (fVar2 - fVar3) - (fVar8 + fVar9);
          pfVar25[2] = (fVar4 - fVar5) - (fVar10 + fVar11);
          pfVar25[3] = (fVar6 - fVar7) - (fVar12 + fVar13);
          iVar28 = *(int *)(param_1 + 0x548);
          local_1d0 = *(float *)(iVar28 + 0x20 + iVar27) - *(float *)(iVar28 + iVar33);
          local_1cc = *(float *)(iVar28 + 0x24 + iVar27) - *(float *)(iVar28 + 4 + iVar33);
          local_1c8 = *(float *)(iVar28 + 0x28 + iVar27) - *(float *)(iVar28 + 8 + iVar33);
          fVar2 = *(float *)(iVar28 + 0x2c + iVar27);
          fVar3 = *(float *)(iVar28 + 0xc + iVar33);
          pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar33);
          pfVar26 = (float *)(*(int *)(param_1 + 0x550) + iVar33);
          fVar4 = pfVar26[1];
          fVar5 = pfVar32[1];
          fVar6 = pfVar26[2];
          fVar7 = pfVar32[2];
          fVar8 = pfVar26[3];
          fVar9 = pfVar32[3];
          pfVar25 = (float *)(*(int *)(param_1 + 0x54c) + iVar33);
          iVar27 = iVar27 + 0x40;
          iVar31 = iVar31 + -1;
          *pfVar25 = local_1d0 - (*pfVar26 + *pfVar32);
          pfVar25[1] = local_1cc - (fVar4 + fVar5);
          pfVar25[2] = local_1c8 - (fVar6 + fVar7);
          pfVar25[3] = (fVar2 - fVar3) - (fVar8 + fVar9);
        } while (iVar31 != 0);
      }
      if (local_184 < uVar35) {
        iVar27 = local_184 << 4;
        iVar31 = uVar35 - local_184;
        do {
          pfVar32 = (float *)(*(int *)(param_1 + 0x548) + iVar27);
          local_1d0 = *(float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar27) - *pfVar32;
          pfVar26 = (float *)(*(int *)(param_1 + 0x550) + iVar27);
          local_1cc = pfVar32[5] - pfVar32[1];
          local_1c8 = pfVar32[6] - pfVar32[2];
          fVar2 = pfVar32[7];
          fVar3 = pfVar32[3];
          pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar27);
          fVar4 = pfVar26[1];
          fVar5 = pfVar32[1];
          fVar6 = pfVar26[2];
          fVar7 = pfVar32[2];
          fVar8 = pfVar26[3];
          fVar9 = pfVar32[3];
          pfVar25 = (float *)(*(int *)(param_1 + 0x54c) + iVar27);
          iVar27 = iVar27 + 0x10;
          iVar31 = iVar31 + -1;
          *pfVar25 = local_1d0 - (*pfVar26 + *pfVar32);
          pfVar25[1] = local_1cc - (fVar4 + fVar5);
          pfVar25[2] = local_1c8 - (fVar6 + fVar7);
          pfVar25[3] = (fVar2 - fVar3) - (fVar8 + fVar9);
        } while (iVar31 != 0);
      }
      *(uint *)(param_1 + 0x558) = uVar17;
    }
  }
  local_114 = 0.0;
  fVar2 = (float)(int)uVar21;
  if ((int)uVar21 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  iVar27 = *(int *)(param_1 + 0x450) + -2;
  fVar3 = (float)iVar27;
  if (iVar27 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  local_194 = 0.0;
  if (uVar21 != 0) {
    pfVar32 = (float *)(iVar16 + 8);
    do {
      local_154 = local_114;
      if (fVar20 < local_114) {
        local_154 = local_114 - fVar20;
      }
      if ((int)local_194 <= iVar22) {
        fVar38 = (float10)FUN_00fddce0((double)local_154);
        local_160 = (float)fVar38;
        iVar27 = *(int *)(param_1 + 0x558) + -1;
        fVar4 = (float)iVar27;
        if (iVar27 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        if (local_160 <= 0.0) {
          local_160 = 0.0;
        }
        if (fVar4 < local_160) {
          local_160 = fVar4;
        }
        iVar27 = *(int *)(param_1 + 0x554);
        iVar31 = *(int *)(param_1 + 0x550);
        iVar33 = *(int *)(param_1 + 0x54c);
        iVar28 = *(int *)(param_1 + 0x548);
        local_1e0 = (int)(longlong)ROUND(local_160);
        local_154 = local_154 - local_160;
        local_1d0 = ((local_154 * *(float *)(iVar27 + local_1e0 * 0x10) +
                     *(float *)(iVar31 + local_1e0 * 0x10)) * local_154 +
                    *(float *)(iVar33 + local_1e0 * 0x10)) * local_154 +
                    *(float *)(iVar28 + local_1e0 * 0x10);
        local_1cc = *(float *)(iVar28 + 4 + local_1e0 * 0x10) +
                    local_154 *
                    (*(float *)(iVar33 + 4 + local_1e0 * 0x10) +
                    local_154 *
                    (*(float *)(iVar31 + 4 + local_1e0 * 0x10) +
                    *(float *)(iVar27 + 4 + local_1e0 * 0x10) * local_154));
        local_1c8 = *(float *)(iVar28 + 8 + local_1e0 * 0x10) +
                    local_154 *
                    (*(float *)(iVar33 + 8 + local_1e0 * 0x10) +
                    local_154 *
                    (*(float *)(iVar31 + 8 + local_1e0 * 0x10) +
                    *(float *)(iVar27 + 8 + local_1e0 * 0x10) * local_154));
      }
      local_194 = (float)((int)local_194 + 1);
      pfVar32[-2] = local_1d0;
      pfVar32[-1] = local_1cc;
      *pfVar32 = local_1c8;
      local_114 = local_114 + fVar3 / fVar2;
      pfVar32 = pfVar32 + 6;
    } while ((uint)local_194 < uVar21);
  }
  uVar17 = *(uint *)(param_1 + 0x450);
  iVar27 = *(int *)(param_1 + 0x45c + (int)local_134 * 4);
  if (uVar17 < 3) {
    FUN_00dd5650(&DAT_016df4c0,uVar17);
  }
  else if (*(uint *)(param_1 + 0x55c) < uVar17) {
    FUN_00dd5650(&DAT_016df478,uVar17,*(uint *)(param_1 + 0x55c));
  }
  else if (*(int *)(param_1 + 0x560) == 0) {
    FUN_00dd5650();
  }
  else {
    local_184 = 0;
    if (3 < (int)uVar17) {
      iVar33 = (uVar17 - 4 >> 2) + 1;
      local_184 = iVar33 * 4;
      puVar23 = (undefined4 *)(iVar27 + 0x14);
      iVar31 = 0;
      do {
        iVar28 = *(int *)(param_1 + 0x560);
        *(undefined4 *)(iVar28 + iVar31) = puVar23[-5];
        iVar28 = iVar28 + iVar31;
        *(undefined4 *)(iVar28 + 4) = puVar23[-4];
        *(undefined4 *)(iVar28 + 8) = puVar23[-3];
        *(undefined4 *)(iVar28 + 0xc) = 0x3f800000;
        puVar29 = (undefined4 *)(iVar31 + 0x10 + *(int *)(param_1 + 0x560));
        *puVar29 = puVar23[-2];
        puVar29[1] = puVar23[-1];
        puVar29[2] = *puVar23;
        puVar29[3] = 0x3f800000;
        puVar29 = (undefined4 *)(iVar31 + 0x20 + *(int *)(param_1 + 0x560));
        *puVar29 = puVar23[1];
        puVar29[1] = puVar23[2];
        puVar29[2] = puVar23[3];
        puVar29[3] = 0x3f800000;
        puVar29 = (undefined4 *)(*(int *)(param_1 + 0x560) + iVar31 + 0x30);
        iVar33 = iVar33 + -1;
        *puVar29 = puVar23[4];
        puVar29[1] = puVar23[5];
        puVar29[2] = puVar23[6];
        puVar29[3] = 0x3f800000;
        puVar23 = puVar23 + 0xc;
        iVar31 = iVar31 + 0x40;
      } while (iVar33 != 0);
    }
    if (local_184 < uVar17) {
      iVar31 = local_184 << 4;
      iVar33 = uVar17 - local_184;
      puVar23 = (undefined4 *)(iVar27 + 8 + local_184 * 0xc);
      do {
        puVar29 = (undefined4 *)(*(int *)(param_1 + 0x560) + iVar31);
        *puVar29 = puVar23[-2];
        iVar31 = iVar31 + 0x10;
        iVar33 = iVar33 + -1;
        puVar29[1] = puVar23[-1];
        puVar29[2] = *puVar23;
        puVar29[3] = 0x3f800000;
        puVar23 = puVar23 + 3;
      } while (iVar33 != 0);
    }
    if (*(uint *)(param_1 + 0x55c) < uVar17) {
      FUN_00dd5650(&DAT_016d98c0,uVar17,*(uint *)(param_1 + 0x55c));
    }
    else {
      *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x560);
      puVar23 = *(undefined4 **)(param_1 + 0x550);
      *puVar23 = 0;
      uVar35 = uVar17 - 1;
      puVar23[1] = 0;
      puVar23[2] = 0;
      iVar27 = uVar35 * 0x10;
      puVar23[3] = 0;
      puVar23 = (undefined4 *)(*(int *)(param_1 + 0x550) + iVar27);
      *puVar23 = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      uVar24 = 1;
      if (1 < uVar35) {
        if (3 < (int)(uVar17 - 2)) {
          iVar33 = (uVar17 - 6 >> 2) + 1;
          iVar31 = 0x10;
          uVar24 = iVar33 * 4 + 1;
          do {
            pfVar32 = (float *)(iVar31 + *(int *)(param_1 + 0x548));
            fVar3 = pfVar32[-3];
            fVar4 = pfVar32[5];
            fVar5 = pfVar32[-2];
            fVar6 = pfVar32[6];
            fVar7 = pfVar32[-1];
            fVar8 = pfVar32[7];
            fVar9 = pfVar32[1];
            fVar10 = pfVar32[2];
            fVar11 = pfVar32[3];
            pfVar25 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
            *pfVar25 = ((*(float *)(iVar31 + -0x10 + *(int *)(param_1 + 0x548)) + pfVar32[4]) -
                       *pfVar32 * 2.0) * 3.0;
            pfVar25[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar25[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar25[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
            iVar18 = *(int *)(param_1 + 0x548);
            iVar28 = iVar31 + 0x20;
            fVar3 = *(float *)(iVar31 + 4 + iVar18);
            fVar4 = *(float *)(iVar18 + 4 + iVar28);
            fVar5 = *(float *)(iVar31 + 8 + iVar18);
            fVar6 = *(float *)(iVar18 + 8 + iVar28);
            fVar7 = *(float *)(iVar31 + 0xc + iVar18);
            fVar8 = *(float *)(iVar18 + 0xc + iVar28);
            fVar9 = *(float *)(iVar31 + 0x14 + iVar18);
            fVar10 = *(float *)(iVar31 + 0x18 + iVar18);
            fVar11 = *(float *)(iVar31 + 0x1c + iVar18);
            pfVar32 = (float *)(iVar31 + 0x10 + *(int *)(param_1 + 0x550));
            iVar1 = iVar31 + 0x30;
            *pfVar32 = ((*(float *)(iVar31 + iVar18) + *(float *)(iVar18 + iVar28)) -
                       *(float *)(iVar31 + 0x10 + iVar18) * 2.0) * 3.0;
            pfVar32[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar32[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar32[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
            iVar18 = *(int *)(param_1 + 0x548);
            fVar3 = *(float *)(iVar31 + 0x14 + iVar18);
            fVar4 = *(float *)(iVar18 + 4 + iVar1);
            fVar5 = *(float *)(iVar31 + 0x18 + iVar18);
            fVar6 = *(float *)(iVar18 + 8 + iVar1);
            fVar7 = *(float *)(iVar31 + 0x1c + iVar18);
            fVar8 = *(float *)(iVar18 + 0xc + iVar1);
            fVar9 = *(float *)(iVar18 + 4 + iVar28);
            fVar10 = *(float *)(iVar18 + 8 + iVar28);
            fVar11 = *(float *)(iVar18 + 0xc + iVar28);
            pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar28);
            *pfVar32 = ((*(float *)(iVar31 + 0x10 + iVar18) + *(float *)(iVar18 + iVar1)) -
                       *(float *)(iVar18 + iVar28) * 2.0) * 3.0;
            pfVar32[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar32[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar32[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
            iVar18 = *(int *)(param_1 + 0x548);
            fVar3 = *(float *)(iVar18 + 4 + iVar28);
            fVar4 = *(float *)(iVar18 + 0x24 + iVar28);
            iVar31 = iVar31 + 0x40;
            fVar5 = *(float *)(iVar18 + 8 + iVar28);
            fVar6 = *(float *)(iVar18 + 0x28 + iVar28);
            fVar7 = *(float *)(iVar18 + 0xc + iVar28);
            fVar8 = *(float *)(iVar18 + 0x2c + iVar28);
            pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar1);
            iVar33 = iVar33 + -1;
            fVar9 = *(float *)(iVar18 + 4 + iVar1);
            fVar10 = *(float *)(iVar18 + 8 + iVar1);
            fVar11 = *(float *)(iVar18 + 0xc + iVar1);
            *pfVar32 = ((*(float *)(iVar18 + iVar28) + *(float *)(iVar18 + 0x20 + iVar28)) -
                       *(float *)(iVar18 + iVar1) * 2.0) * 3.0;
            pfVar32[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar32[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar32[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          } while (iVar33 != 0);
        }
        if (uVar24 < uVar35) {
          iVar31 = uVar24 << 4;
          iVar33 = uVar35 - uVar24;
          do {
            pfVar32 = (float *)(*(int *)(param_1 + 0x548) + -0x10 + iVar31);
            pfVar25 = (float *)(*(int *)(param_1 + 0x548) + iVar31);
            fVar3 = pfVar25[-3];
            fVar4 = pfVar25[5];
            fVar5 = pfVar25[-2];
            fVar6 = pfVar25[6];
            fVar7 = pfVar25[-1];
            fVar8 = pfVar25[7];
            fVar9 = pfVar25[1];
            fVar10 = pfVar25[2];
            fVar11 = pfVar25[3];
            pfVar26 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
            iVar31 = iVar31 + 0x10;
            iVar33 = iVar33 + -1;
            *pfVar26 = ((*pfVar32 + pfVar25[4]) - *pfVar25 * 2.0) * 3.0;
            pfVar26[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar26[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar26[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          } while (iVar33 != 0);
        }
      }
      uVar24 = 1;
      if (1 < uVar35) {
        if (3 < (int)(uVar17 - 2)) {
          iVar31 = 0x10;
          do {
            pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
            fVar3 = (float)(&DAT_01dd8f60)[uVar24];
            *pfVar32 = fVar3 * (*(float *)(*(int *)(param_1 + 0x550) + iVar31) - pfVar32[-4]);
            pfVar32[1] = (pfVar32[1] - pfVar32[-3]) * fVar3;
            pfVar32[2] = (pfVar32[2] - pfVar32[-2]) * fVar3;
            pfVar32[3] = fVar3 * (pfVar32[3] - pfVar32[-1]);
            pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
            fVar3 = (float)(&DAT_01dd8f64)[uVar24];
            pfVar32[4] = fVar3 * (*(float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar31) - *pfVar32);
            pfVar32[5] = (pfVar32[5] - pfVar32[1]) * fVar3;
            pfVar32[6] = (pfVar32[6] - pfVar32[2]) * fVar3;
            pfVar32[7] = fVar3 * (pfVar32[7] - pfVar32[3]);
            iVar33 = *(int *)(param_1 + 0x550);
            pfVar32 = (float *)(iVar33 + 0x2c + iVar31);
            pfVar25 = (float *)(iVar33 + 0x1c + iVar31);
            fVar3 = (float)(&DAT_01dd8f68)[uVar24];
            *(float *)(iVar33 + 0x20 + iVar31) =
                 fVar3 * (*(float *)(iVar33 + 0x20 + iVar31) - *(float *)(iVar33 + 0x10 + iVar31));
            *(float *)(iVar33 + 0x24 + iVar31) =
                 (*(float *)(iVar33 + 0x24 + iVar31) - *(float *)(iVar33 + 0x14 + iVar31)) * fVar3;
            *(float *)(iVar33 + 0x28 + iVar31) =
                 (*(float *)(iVar33 + 0x28 + iVar31) - *(float *)(iVar33 + 0x18 + iVar31)) * fVar3;
            uVar24 = uVar24 + 4;
            iVar31 = iVar31 + 0x40;
            *(float *)(iVar33 + -0x14 + iVar31) = fVar3 * (*pfVar32 - *pfVar25);
            iVar33 = *(int *)(param_1 + 0x550);
            fVar3 = *(float *)(uVar24 * 4 + 0x1dd8f5c);
            *(float *)(iVar33 + -0x10 + iVar31) =
                 fVar3 * (*(float *)(iVar33 + -0x10 + iVar31) - *(float *)(iVar33 + -0x20 + iVar31))
            ;
            *(float *)(iVar33 + -0xc + iVar31) =
                 (*(float *)(iVar33 + -0xc + iVar31) - *(float *)(iVar33 + -0x1c + iVar31)) * fVar3;
            *(float *)(iVar33 + -8 + iVar31) =
                 (*(float *)(iVar33 + -8 + iVar31) - *(float *)(iVar33 + -0x18 + iVar31)) * fVar3;
            *(float *)(iVar33 + -4 + iVar31) =
                 fVar3 * (*(float *)(iVar33 + -4 + iVar31) - *(float *)(iVar33 + -0x14 + iVar31));
          } while (uVar24 < uVar17 - 4);
        }
        if (uVar24 < uVar35) {
          iVar31 = uVar24 << 4;
          do {
            pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
            pfVar25 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
            uVar24 = uVar24 + 1;
            iVar31 = iVar31 + 0x10;
            fVar3 = *(float *)(uVar24 * 4 + 0x1dd8f5c);
            *pfVar25 = fVar3 * (*pfVar32 - pfVar25[-4]);
            pfVar25[1] = (pfVar25[1] - pfVar25[-3]) * fVar3;
            pfVar25[2] = (pfVar25[2] - pfVar25[-2]) * fVar3;
            pfVar25[3] = fVar3 * (pfVar25[3] - pfVar25[-1]);
          } while (uVar24 < uVar35);
        }
      }
      iVar31 = uVar17 - 2;
      if (iVar31 != 0) {
        iVar33 = iVar31 * 0x10;
        do {
          fVar3 = (float)(&DAT_01dd8f60)[iVar31] * -1.0;
          pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar33);
          iVar33 = iVar33 + -0x10;
          iVar31 = iVar31 + -1;
          *pfVar32 = fVar3 * pfVar32[4] + *pfVar32;
          pfVar32[1] = pfVar32[1] + pfVar32[5] * fVar3;
          pfVar32[2] = pfVar32[2] + pfVar32[6] * fVar3;
          pfVar32[3] = pfVar32[3] + fVar3 * pfVar32[7];
        } while (iVar31 != 0);
      }
      puVar23 = (undefined4 *)(*(int *)(param_1 + 0x54c) + iVar27);
      uVar24 = 0;
      *puVar23 = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      if (3 < (int)uVar35) {
        iVar33 = (uVar17 - 5 >> 2) + 1;
        iVar31 = 0x20;
        uVar24 = iVar33 * 4;
        do {
          iVar28 = iVar31 + -0x20;
          pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar28);
          fVar3 = pfVar32[5];
          fVar4 = pfVar32[1];
          fVar5 = pfVar32[6];
          fVar6 = pfVar32[2];
          fVar7 = pfVar32[7];
          fVar8 = pfVar32[3];
          pfVar25 = (float *)(*(int *)(param_1 + 0x554) + iVar28);
          *pfVar25 = (*(float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar28) - *pfVar32) * 0.33333334
          ;
          pfVar25[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar25[2] = (fVar5 - fVar6) * 0.33333334;
          pfVar25[3] = (fVar7 - fVar8) * 0.33333334;
          iVar18 = *(int *)(param_1 + 0x550);
          fVar3 = *(float *)(iVar18 + 4 + iVar31);
          fVar4 = *(float *)(iVar18 + 0x14 + iVar28);
          fVar5 = *(float *)(iVar18 + 8 + iVar31);
          fVar6 = *(float *)(iVar18 + 0x18 + iVar28);
          fVar7 = *(float *)(iVar18 + 0xc + iVar31);
          fVar8 = *(float *)(iVar18 + 0x1c + iVar28);
          pfVar32 = (float *)(*(int *)(param_1 + 0x554) + 0x10 + iVar28);
          iVar1 = iVar31 + 0x10;
          *pfVar32 = (*(float *)(iVar18 + iVar31) - *(float *)(iVar18 + 0x10 + iVar28)) * 0.33333334
          ;
          pfVar32[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar32[2] = (fVar5 - fVar6) * 0.33333334;
          pfVar32[3] = (fVar7 - fVar8) * 0.33333334;
          iVar28 = *(int *)(param_1 + 0x550);
          fVar3 = *(float *)(iVar28 + 4 + iVar1);
          fVar4 = *(float *)(iVar28 + 4 + iVar31);
          fVar5 = *(float *)(iVar28 + 8 + iVar1);
          fVar6 = *(float *)(iVar28 + 8 + iVar31);
          fVar7 = *(float *)(iVar28 + 0xc + iVar1);
          fVar8 = *(float *)(iVar28 + 0xc + iVar31);
          pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar31);
          *pfVar32 = (*(float *)(iVar28 + iVar1) - *(float *)(iVar28 + iVar31)) * 0.33333334;
          pfVar32[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar32[2] = (fVar5 - fVar6) * 0.33333334;
          iVar31 = iVar31 + 0x40;
          pfVar32[3] = (fVar7 - fVar8) * 0.33333334;
          iVar28 = *(int *)(param_1 + 0x550);
          fVar3 = *(float *)(iVar28 + -0x1c + iVar31);
          fVar4 = *(float *)(iVar28 + 4 + iVar1);
          fVar5 = *(float *)(iVar28 + -0x18 + iVar31);
          fVar6 = *(float *)(iVar28 + 8 + iVar1);
          fVar7 = *(float *)(iVar28 + -0x14 + iVar31);
          fVar8 = *(float *)(iVar28 + 0xc + iVar1);
          pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar1);
          iVar33 = iVar33 + -1;
          *pfVar32 = (*(float *)(iVar28 + -0x20 + iVar31) - *(float *)(iVar28 + iVar1)) * 0.33333334
          ;
          pfVar32[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar32[2] = (fVar5 - fVar6) * 0.33333334;
          pfVar32[3] = (fVar7 - fVar8) * 0.33333334;
        } while (iVar33 != 0);
      }
      if (uVar24 < uVar35) {
        iVar31 = uVar24 << 4;
        iVar33 = uVar35 - uVar24;
        do {
          pfVar32 = (float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar31);
          pfVar25 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
          fVar3 = pfVar25[5];
          fVar4 = pfVar25[1];
          fVar5 = pfVar25[6];
          fVar6 = pfVar25[2];
          fVar7 = pfVar25[7];
          fVar8 = pfVar25[3];
          pfVar26 = (float *)(*(int *)(param_1 + 0x554) + iVar31);
          iVar31 = iVar31 + 0x10;
          iVar33 = iVar33 + -1;
          *pfVar26 = (*pfVar32 - *pfVar25) * 0.33333334;
          pfVar26[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar26[2] = (fVar5 - fVar6) * 0.33333334;
          pfVar26[3] = (fVar7 - fVar8) * 0.33333334;
        } while (iVar33 != 0);
      }
      puVar23 = (undefined4 *)(*(int *)(param_1 + 0x554) + iVar27);
      *puVar23 = 0;
      local_184 = 0;
      puVar23[1] = 0;
      puVar23[2] = 0;
      puVar23[3] = 0;
      if (3 < (int)uVar35) {
        iVar31 = (uVar17 - 5 >> 2) + 1;
        local_184 = iVar31 * 4;
        iVar27 = 0x20;
        do {
          iVar33 = iVar27 + -0x20;
          pfVar32 = (float *)(*(int *)(param_1 + 0x548) + iVar33);
          pfVar36 = (float *)(*(int *)(param_1 + 0x550) + iVar33);
          fVar3 = pfVar32[5];
          fVar4 = pfVar32[1];
          fVar5 = pfVar32[6];
          fVar6 = pfVar32[2];
          fVar7 = pfVar32[7];
          fVar8 = pfVar32[3];
          pfVar25 = (float *)(*(int *)(param_1 + 0x554) + iVar33);
          fVar9 = pfVar36[1];
          fVar10 = pfVar25[1];
          fVar11 = pfVar36[2];
          fVar12 = pfVar25[2];
          fVar13 = pfVar36[3];
          fVar14 = pfVar25[3];
          pfVar26 = (float *)(*(int *)(param_1 + 0x54c) + iVar33);
          *pfVar26 = (*(float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar33) - *pfVar32) -
                     (*pfVar36 + *pfVar25);
          pfVar26[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar26[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar26[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
          iVar28 = *(int *)(param_1 + 0x548);
          pfVar32 = (float *)(iVar27 + -0x10 + *(int *)(param_1 + 0x550));
          fVar3 = *(float *)(iVar28 + 4 + iVar27);
          fVar4 = *(float *)(iVar27 + -0xc + iVar28);
          fVar5 = *(float *)(iVar28 + 8 + iVar27);
          fVar6 = *(float *)(iVar27 + -8 + iVar28);
          fVar7 = *(float *)(iVar28 + 0xc + iVar27);
          fVar8 = *(float *)(iVar27 + -4 + iVar28);
          pfVar25 = (float *)(*(int *)(param_1 + 0x554) + 0x10 + iVar33);
          fVar9 = pfVar32[1];
          fVar10 = pfVar25[1];
          fVar11 = pfVar32[2];
          fVar12 = pfVar25[2];
          fVar13 = pfVar32[3];
          fVar14 = pfVar25[3];
          pfVar26 = (float *)(iVar27 + -0x10 + *(int *)(param_1 + 0x54c));
          *pfVar26 = (*(float *)(iVar28 + iVar27) - *(float *)(iVar27 + -0x10 + iVar28)) -
                     (*pfVar32 + *pfVar25);
          pfVar26[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar26[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar26[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
          iVar28 = *(int *)(param_1 + 0x548);
          iVar33 = iVar27 + 0x10;
          pfVar26 = (float *)(*(int *)(param_1 + 0x550) + iVar27);
          fVar3 = *(float *)(iVar28 + 4 + iVar33);
          fVar4 = *(float *)(iVar28 + 4 + iVar27);
          fVar5 = *(float *)(iVar28 + 8 + iVar33);
          fVar6 = *(float *)(iVar28 + 8 + iVar27);
          fVar7 = *(float *)(iVar28 + 0xc + iVar33);
          fVar8 = *(float *)(iVar28 + 0xc + iVar27);
          pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar27);
          fVar9 = pfVar26[1];
          fVar10 = pfVar32[1];
          fVar11 = pfVar26[2];
          fVar12 = pfVar32[2];
          fVar13 = pfVar26[3];
          fVar14 = pfVar32[3];
          pfVar25 = (float *)(*(int *)(param_1 + 0x54c) + iVar27);
          *pfVar25 = (*(float *)(iVar28 + 0x10 + iVar27) - *(float *)(iVar28 + iVar27)) -
                     (*pfVar26 + *pfVar32);
          pfVar25[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar25[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar25[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
          iVar28 = *(int *)(param_1 + 0x548);
          pfVar32 = (float *)(iVar28 + 0x20 + iVar27);
          fVar3 = *(float *)(iVar28 + 0x24 + iVar27);
          fVar4 = *(float *)(iVar28 + 4 + iVar33);
          fVar5 = *(float *)(iVar28 + 0x28 + iVar27);
          fVar6 = *(float *)(iVar28 + 8 + iVar33);
          fVar7 = *(float *)(iVar28 + 0x2c + iVar27);
          fVar8 = *(float *)(iVar28 + 0xc + iVar33);
          pfVar25 = (float *)(*(int *)(param_1 + 0x554) + iVar33);
          pfVar36 = (float *)(*(int *)(param_1 + 0x550) + iVar33);
          fVar9 = pfVar36[1];
          fVar10 = pfVar25[1];
          fVar11 = pfVar36[2];
          fVar12 = pfVar25[2];
          fVar13 = pfVar36[3];
          fVar14 = pfVar25[3];
          pfVar26 = (float *)(*(int *)(param_1 + 0x54c) + iVar33);
          iVar27 = iVar27 + 0x40;
          iVar31 = iVar31 + -1;
          *pfVar26 = (*pfVar32 - *(float *)(iVar28 + iVar33)) - (*pfVar36 + *pfVar25);
          pfVar26[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar26[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar26[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        } while (iVar31 != 0);
      }
      if (local_184 < uVar35) {
        iVar27 = local_184 << 4;
        iVar31 = uVar35 - local_184;
        do {
          pfVar32 = (float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar27);
          pfVar25 = (float *)(*(int *)(param_1 + 0x548) + iVar27);
          pfVar30 = (float *)(*(int *)(param_1 + 0x550) + iVar27);
          fVar3 = pfVar25[5];
          fVar4 = pfVar25[1];
          fVar5 = pfVar25[6];
          fVar6 = pfVar25[2];
          fVar7 = pfVar25[7];
          fVar8 = pfVar25[3];
          pfVar26 = (float *)(*(int *)(param_1 + 0x554) + iVar27);
          fVar9 = pfVar30[1];
          fVar10 = pfVar26[1];
          fVar11 = pfVar30[2];
          fVar12 = pfVar26[2];
          fVar13 = pfVar30[3];
          fVar14 = pfVar26[3];
          pfVar36 = (float *)(*(int *)(param_1 + 0x54c) + iVar27);
          iVar27 = iVar27 + 0x10;
          iVar31 = iVar31 + -1;
          *pfVar36 = (*pfVar32 - *pfVar25) - (*pfVar30 + *pfVar26);
          pfVar36[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar36[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar36[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        } while (iVar31 != 0);
      }
      *(uint *)(param_1 + 0x558) = uVar17;
    }
  }
  local_154 = 0.0;
  iVar27 = *(int *)(param_1 + 0x450) + -2;
  fVar3 = (float)iVar27;
  if (iVar27 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  local_194 = 0.0;
  if (uVar21 != 0) {
    pfVar32 = (float *)(iVar16 + 0x14);
    do {
      local_13c = local_154;
      if (fVar20 < local_154) {
        local_13c = local_154 - fVar20;
      }
      if ((int)local_194 <= iVar22) {
        fVar38 = (float10)FUN_00fddce0((double)local_13c);
        local_134 = (float)fVar38;
        iVar27 = *(int *)(param_1 + 0x558) + -1;
        fVar4 = (float)iVar27;
        if (iVar27 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        if (local_134 <= 0.0) {
          local_134 = 0.0;
        }
        if (fVar4 < local_134) {
          local_134 = fVar4;
        }
        iVar27 = *(int *)(param_1 + 0x554);
        iVar31 = *(int *)(param_1 + 0x550);
        iVar33 = *(int *)(param_1 + 0x54c);
        iVar28 = *(int *)(param_1 + 0x548);
        local_1e0 = (int)(longlong)ROUND(local_134);
        local_13c = local_13c - local_134;
        local_1d0 = *(float *)(iVar28 + local_1e0 * 0x10) +
                    ((local_13c * *(float *)(iVar27 + local_1e0 * 0x10) +
                     *(float *)(iVar31 + local_1e0 * 0x10)) * local_13c +
                    *(float *)(iVar33 + local_1e0 * 0x10)) * local_13c;
        local_1cc = *(float *)(iVar28 + 4 + local_1e0 * 0x10) +
                    (*(float *)(iVar33 + 4 + local_1e0 * 0x10) +
                    (*(float *)(iVar31 + 4 + local_1e0 * 0x10) +
                    *(float *)(iVar27 + 4 + local_1e0 * 0x10) * local_13c) * local_13c) * local_13c;
        local_1c8 = *(float *)(iVar28 + 8 + local_1e0 * 0x10) +
                    local_13c *
                    (*(float *)(iVar33 + 8 + local_1e0 * 0x10) +
                    (*(float *)(iVar31 + 8 + local_1e0 * 0x10) +
                    *(float *)(iVar27 + 8 + local_1e0 * 0x10) * local_13c) * local_13c);
      }
      local_194 = (float)((int)local_194 + 1);
      pfVar32[-2] = local_1d0;
      pfVar32[-1] = local_1cc;
      *pfVar32 = local_1c8;
      local_154 = local_154 + fVar3 / fVar2;
      pfVar32 = pfVar32 + 6;
    } while ((uint)local_194 < uVar21);
  }
LAB_00eedc5e:
  FUN_00f99d50(iVar16,0xc,*(int *)(param_1 + 0x520) * uVar21 + *(int *)(param_1 + 0x524));
  return;
}

// 00EEDCA0  cEspStrip2p::vf14  size=144  [class]
void __fastcall cEspStrip2p::vf14(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x51c)) {
    puVar2 = (undefined4 *)(param_1 + 0x45c);
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x51c));
  }
  if (*(int *)(param_1 + 0x458) != 0) {
    FUN_00dd3d90(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  *(undefined4 *)(param_1 + 0x548) = 0;
  *(undefined4 *)(param_1 + 0x54c) = 0;
  *(undefined4 *)(param_1 + 0x550) = 0;
  *(undefined4 *)(param_1 + 0x554) = 0;
  *(undefined4 *)(param_1 + 0x55c) = 0;
  *(undefined4 *)(param_1 + 0x560) = 0;
  if (*(int *)(param_1 + 0x56c) != 0) {
    FUN_00dd3d90(*(undefined4 *)(param_1 + 0x564),0);
    *(undefined4 *)(param_1 + 0x56c) = 0;
  }
  *(undefined4 *)(param_1 + 0x568) = 0;
  *(undefined4 *)(param_1 + 0x564) = 0;
  return;
}

// 00F27B30  cEspStrip2p::vf10  size=977  [class]
void __fastcall cEspStrip2p::vf10(int *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EDI;
  int iVar7;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;
  int local_4;
  
  if (DAT_01edd490 == 0) {
LAB_00f27b5e:
    FUN_009cca90(param_1,&DAT_016dac24);
    return;
  }
  iVar1 = cPrimHeap::allocBuffer(0x180,0x20);
  if (iVar1 == 0) goto LAB_00f27b5e;
  iVar1 = cEspDrawStrip2p::cEspDrawStrip2p();
  if (iVar1 == 0) goto LAB_00f27b5e;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x68) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x54) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x40) = 0x3f800000;
  FUN_00efed20();
  FUN_00edfcd0(param_1 + 0xf2);
  FUN_00f26b40(iVar1);
  iVar2 = param_1[0x21];
  iVar6 = param_1[10];
  FUN_00f45d50();
  local_14 = iVar1;
  local_10 = param_1;
  local_c = param_1 + 0xf2;
  local_8 = iVar6;
  local_4 = iVar2;
  FUN_00f49500(&local_14);
  iVar6 = ((param_1[0x114] + -4) * param_1[0x115] + 2) * param_1[0x148] + param_1[0x149];
  iVar2 = FUN_00f51070(iVar1 + 0xd0,0xc,iVar6);
  if (iVar2 == 0) {
    FUN_009cca90(param_1,&DAT_016dac4c);
    return;
  }
  if (param_1[0x150] == 0) {
    pcVar3 = *(code **)(*param_1 + 0x20);
  }
  else {
    pcVar3 = *(code **)(*param_1 + 0x28);
  }
  (*pcVar3)(iVar1 + 0xd0);
  if (param_1[0x162] == 1) {
    *(undefined4 *)(iVar1 + 0x170) = 1;
    iVar2 = FUN_00f51070(iVar1 + 0xf8,8,iVar6);
    if (iVar2 == 0) {
      FUN_009cca90(param_1,&DAT_016dac68);
      return;
    }
    iVar2 = FUN_00f51070(iVar1 + 0x120,8,iVar6);
    if (iVar2 == 0) {
      FUN_009cca90(param_1,&DAT_016dac84);
      return;
    }
    iVar2 = FUN_00f3ab20(iVar1 + 0x148,iVar6);
    if (iVar2 == 0) {
      FUN_009cca90(param_1,&DAT_016daca0);
      return;
    }
    FUN_00f006c0(iVar1 + 0x148);
    iVar2 = param_1[0x14f];
    param_1[0x14e] = 0x3f800000;
    param_1[0x14f] = 0x3f800000;
    if (param_1[0x150] == 0) {
      (**(code **)(*param_1 + 0x1c))(iVar1 + 0x120);
      iVar7 = iVar1 + 0xf8;
LAB_00f27ec0:
      pcVar3 = *(code **)(*param_1 + 0x1c);
    }
    else {
      (**(code **)(*param_1 + 0x24))();
      iVar7 = iVar1 + 0xf8;
      pcVar3 = *(code **)(*param_1 + 0x24);
    }
    param_1[0x14e] = iVar2;
  }
  else {
    if (param_1[0x162] != 2) {
      *(undefined4 *)(iVar1 + 0x170) = 0;
      iVar2 = FUN_00f51070(iVar1 + 0xf8,8,iVar6);
      if (iVar2 == 0) {
        FUN_009cca90(param_1,&DAT_016dad40);
        return;
      }
      if (param_1[0x150] == 0) {
        (**(code **)(*param_1 + 0x1c))(iVar1 + 0xf8);
      }
      else {
        (**(code **)(*param_1 + 0x24))();
      }
      goto LAB_00f27edd;
    }
    *(undefined4 *)(iVar1 + 0x170) = 1;
    iVar2 = FUN_00f51070(iVar1 + 0xf8,8,iVar6);
    if (iVar2 == 0) {
      FUN_009cca90(param_1,&DAT_016dacbc);
      return;
    }
    iVar7 = iVar1 + 0x120;
    iVar2 = FUN_00f51070(iVar7,8,iVar6);
    if (iVar2 == 0) {
      FUN_009cca90(param_1,&DAT_016dacd8);
      return;
    }
    iVar2 = FUN_00f3ab20(iVar1 + 0x148,iVar6);
    if (iVar2 == 0) {
      FUN_009cca90(param_1,&DAT_016dad0c);
      return;
    }
    FUN_00f006c0(iVar1 + 0x148);
    iVar2 = param_1[0x14e];
    if (param_1[0x150] == 0) {
      pcVar3 = *(code **)(*param_1 + 0x1c);
      iVar2 = param_1[0x14f];
      param_1[0x14e] = 0x3f800000;
      param_1[0x14f] = 0x3f800000;
      (*pcVar3)(iVar1 + 0xf8);
      goto LAB_00f27ec0;
    }
    pcVar3 = *(code **)(*param_1 + 0x24);
    param_1[0x14e] = 0x3f800000;
    param_1[0x14f] = 0x3f800000;
    (*pcVar3)();
    param_1[0x14e] = unaff_EDI;
    pcVar3 = *(code **)(*param_1 + 0x24);
    unaff_EDI = iVar2;
  }
  param_1[0x14f] = unaff_EDI;
  (*pcVar3)(iVar7);
LAB_00f27edd:
  uVar4 = FUN_00e9fe70();
  uVar5 = FUN_00e9fe60(uVar4);
  FUN_00edc9e0(iVar1,iVar1,param_1 + 0xf2,uVar5,uVar4);
  return;
}

// 00F2E1E0  cEspStrip2p::vf04  size=898  [class]
undefined4 __thiscall
cEspStrip2p::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  
  iVar5 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar5 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x454) = 1;
  *(undefined4 *)(param_1 + 0x538) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x450) = 4;
  *(undefined4 *)(param_1 + 0x53c) = 0x3f800000;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar6 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar6 != (undefined4 *)0x0)) {
    psVar2 = (short *)*puVar6;
    if ((short *)((int)psVar2 + 0xfU & 0xfffffff0) != psVar2) {
      uVar7 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar7);
    }
    if (psVar2 != (short *)0x0) {
      *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + (int)*psVar2;
      *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0x454) + (int)psVar2[1];
      if (psVar2[2] != 0) {
        *(float *)(param_1 + 0x530) = *(float *)(param_1 + 0x530) / (float)(psVar2[2] + 1);
      }
      *(float *)(param_1 + 0x538) = *(float *)(param_1 + 0x538) + (float)(int)psVar2[4] * 0.1;
      *(float *)(param_1 + 0x53c) = (float)(int)psVar2[5] * 0.1 + *(float *)(param_1 + 0x53c);
      sVar1 = psVar2[6];
      *(int *)(param_1 + 0x540) = (int)sVar1;
      if (5 < sVar1) {
        FUN_009cca90(param_1,&DAT_016dab80);
        return 0;
      }
      fVar4 = (float)(int)(char)psVar2[0xb] * 0.0005;
      *(float *)(param_1 + 0x580) = fVar4;
      if ('2' < (char)psVar2[0xb]) {
        *(float *)(param_1 + 0x580) = (float)((char)psVar2[0xb] + -0x32) * 0.0035 + fVar4;
      }
      if ((char)psVar2[0xb] < -0x32) {
        *(float *)(param_1 + 0x580) =
             (float)((char)psVar2[0xb] + 0x32) * 0.0035 + *(float *)(param_1 + 0x580);
      }
      *(int *)(param_1 + 0x570) = (int)*(char *)((int)psVar2 + 0x17);
    }
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar8 = (uint *)(*(int *)(param_1 + 0x58) + 0x70), puVar8 != (uint *)0x0)) {
    uVar10 = *puVar8;
    if ((uVar10 + 0xf & 0xfffffff0) != uVar10) {
      uVar7 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar7);
    }
    if (uVar10 != 0) {
      *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(uVar10 + 0x30);
      *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(uVar10 + 0x34);
    }
  }
  if (*(float *)(param_1 + 0x538) == 0.0) {
    *(undefined4 *)(param_1 + 0x538) = 0x3f800000;
  }
  if (*(float *)(param_1 + 0x53c) == 0.0) {
    *(undefined4 *)(param_1 + 0x53c) = 0x3f800000;
  }
  iVar5 = *(int *)(param_1 + 0x450);
  if (0xf0 < (uint)((*(int *)(param_1 + 0x540) + 1) * *(int *)(param_1 + 0x454) * iVar5)) {
    FUN_009cca90(param_1,&DAT_016daba4);
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x540);
  *(undefined4 *)(param_1 + 0x51c) = 2;
  *(undefined4 *)(param_1 + 0x520) = 2;
  *(undefined4 *)(param_1 + 0x524) = 0;
  if ((iVar3 != 0) && (1 < iVar3)) {
    *(int *)(param_1 + 0x520) = iVar3 * 2;
    *(int *)(param_1 + 0x524) = *(int *)(param_1 + 0x540) * 2 + -2;
  }
  uVar10 = (((iVar5 + -4) * *(int *)(param_1 + 0x454) + 2) * *(int *)(param_1 + 0x520) +
           *(int *)(param_1 + 0x524)) * 0xc + 0xfU & 0xfffffff0;
  uVar11 = iVar5 * 0xc + 0xfU & 0xfffffff0;
  iVar5 = FUN_00dd29b0(uVar10 + uVar11 * 2,0x20,0,0);
  *(int *)(param_1 + 0x458) = iVar5;
  if (iVar5 == 0) {
    FUN_009cca90(param_1,&DAT_016dabc0);
    return 0;
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x51c)) {
    piVar9 = (int *)(param_1 + 0x45c);
    do {
      *piVar9 = *(int *)(param_1 + 0x458) + uVar10;
      iVar5 = iVar5 + 1;
      piVar9 = piVar9 + 1;
      uVar10 = uVar10 + uVar11;
    } while (iVar5 < *(int *)(param_1 + 0x51c));
  }
  if ((*(int *)(param_1 + 0x540) != 0) &&
     (iVar5 = FUN_00f3f0f0(0x40,&DAT_01b7bdf8,0x20), iVar5 == 0)) {
    FUN_009cca90(param_1,&DAT_016dabf0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x528) = 0xba83126f;
  *(undefined4 *)(param_1 + 0x52c) = 0xbf8020c5;
  return 1;
}


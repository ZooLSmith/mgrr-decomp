// src/misc/esp162.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D0C10..009DAF30, 6 functions

#include "mgrr.h"
#include "esp162.h"

// 009D0C10  esp162::thunk_vf14  size=5  [class]
void __fastcall esp162::thunk_vf14(int param_1)

{
  if ((*(int *)(param_1 + 0x458) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  return;
}

// 009D0C20  esp162::vf1C  size=2084  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall esp162::vf1C(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  float local_8;
  
  iVar10 = FUN_00f99ca0();
  iVar18 = *(int *)(param_1 + 0x450);
  iVar14 = (iVar18 + -4) * *(int *)(param_1 + 0x454);
  uVar15 = iVar14 + 2;
  fVar1 = (float)(iVar14 + 1);
  if (iVar14 + 1 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  uVar11 = *(uint *)(param_1 + 0x38) >> 0x13 & 1;
  uVar17 = *(uint *)(param_1 + 0x38) >> 0x12 & 1;
  fVar6 = (*(float *)(param_1 + 0x474) / fVar1) * *(float *)(param_1 + 0x4a8);
  fVar1 = *(float *)(param_1 + 0x478);
  if (*(int *)(param_1 + 0x480) == 1) {
    fVar5 = (float)iVar18;
    if (iVar18 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    if (*(float *)(param_1 + 0x46c) - 1.0 < fVar5) {
      if (*(float *)(param_1 + 0x460) <= *(float *)(param_1 + 0x46c)) {
        fVar2 = *(float *)(param_1 + 0x460);
      }
      else {
        fVar2 = *(float *)(param_1 + 0x46c);
      }
      if (fVar2 < 3.0) {
        fVar2 = 3.0;
      }
      fVar6 = ((fVar5 - _DAT_0188f5d4) / (_DAT_0188f5d0 + fVar2)) * fVar6;
      fVar5 = *(float *)(param_1 + 0x474) - 0.01;
      fVar2 = 0.0;
      if (uVar15 != 0) {
        pfVar13 = (float *)(iVar10 + 8);
        fVar7 = fVar2;
        do {
          local_8 = fVar1;
          fVar9 = fVar2;
          if (uVar17 == 0) {
            if (uVar11 != 0) {
              local_8 = 0.0;
              fVar9 = fVar1;
            }
            fVar8 = fVar7 * fVar6;
            fVar4 = fVar7 * fVar6;
            if (fVar5 < fVar7 * fVar6) {
              fVar4 = fVar5;
            }
            if (fVar5 < fVar8) {
              fVar8 = fVar5;
            }
          }
          else {
            if (uVar11 != 0) {
              local_8 = 0.0;
              fVar9 = fVar1;
            }
            fVar4 = 1.0 - fVar7 * fVar6;
            fVar8 = fVar4;
            if (fVar4 < 0.0) {
              fVar4 = fVar2;
              fVar8 = fVar2;
            }
          }
          fVar3 = *(float *)(param_1 + 0x488);
          uVar15 = uVar15 - 1;
          *pfVar13 = local_8;
          pfVar13[1] = fVar3 + fVar4;
          fVar4 = *(float *)(param_1 + 0x488);
          pfVar13[-2] = fVar9;
          pfVar13[-1] = fVar4 + fVar8;
          fVar7 = fVar7 + 1.0;
          pfVar13 = pfVar13 + 4;
        } while (uVar15 != 0);
      }
      goto LAB_009d12c1;
    }
  }
  uVar16 = 0;
  if (uVar17 != 0) {
    if (uVar11 == 0) {
      if (3 < (int)uVar15) {
        iVar18 = 2;
        pfVar13 = (float *)(iVar10 + 0x14);
        do {
          fVar5 = (float)(int)uVar16;
          if ((int)uVar16 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[-5] = 0.0;
          pfVar13[-4] = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[-3] = fVar1;
          pfVar13[-2] = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar5 = (float)(iVar18 + -1);
          if (iVar18 + -1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[-1] = 0.0;
          *pfVar13 = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[1] = fVar1;
          pfVar13[2] = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar5 = (float)iVar18;
          if (iVar18 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[3] = 0.0;
          pfVar13[4] = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[5] = fVar1;
          pfVar13[6] = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar5 = (float)(iVar18 + 1);
          if (iVar18 + 1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar16 = uVar16 + 4;
          fVar2 = *(float *)(param_1 + 0x488);
          iVar18 = iVar18 + 4;
          pfVar13[7] = 0.0;
          pfVar13[8] = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[9] = fVar1;
          pfVar13[10] = (fVar2 + 1.0) - fVar5 * fVar6;
          pfVar13 = pfVar13 + 0x10;
        } while (uVar16 < iVar14 - 1U);
      }
      if (uVar16 < uVar15) {
        pfVar13 = (float *)(uVar16 * 0x10 + iVar10 + 4);
        do {
          fVar5 = (float)(int)uVar16;
          if ((int)uVar16 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar16 = uVar16 + 1;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[-1] = 0.0;
          *pfVar13 = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[1] = fVar1;
          pfVar13[2] = (fVar2 + 1.0) - fVar5 * fVar6;
          pfVar13 = pfVar13 + 4;
        } while (uVar16 < uVar15);
        FUN_00f99d30();
        return;
      }
    }
    else {
      if (3 < (int)uVar15) {
        iVar18 = 2;
        pfVar13 = (float *)(iVar10 + 0x1c);
        do {
          fVar5 = (float)(int)uVar16;
          if ((int)uVar16 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[-5] = 0.0;
          pfVar13[-4] = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[-7] = fVar1;
          pfVar13[-6] = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar5 = (float)(iVar18 + -1);
          if (iVar18 + -1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[-1] = 0.0;
          *pfVar13 = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[-3] = fVar1;
          pfVar13[-2] = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar5 = (float)iVar18;
          if (iVar18 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[3] = 0.0;
          pfVar13[4] = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[1] = fVar1;
          pfVar13[2] = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar5 = (float)(iVar18 + 1);
          if (iVar18 + 1 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar16 = uVar16 + 4;
          fVar2 = *(float *)(param_1 + 0x488);
          iVar18 = iVar18 + 4;
          pfVar13[7] = 0.0;
          pfVar13[8] = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar13[5] = fVar1;
          pfVar13[6] = (fVar2 + 1.0) - fVar5 * fVar6;
          pfVar13 = pfVar13 + 0x10;
        } while (uVar16 < iVar14 - 1U);
      }
      if (uVar16 < uVar15) {
        puVar12 = (undefined4 *)(uVar16 * 0x10 + iVar10 + 8);
        do {
          fVar5 = (float)(int)uVar16;
          if ((int)uVar16 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          uVar16 = uVar16 + 1;
          fVar2 = *(float *)(param_1 + 0x488);
          *puVar12 = 0;
          puVar12[1] = (fVar2 + 1.0) - fVar5 * fVar6;
          fVar2 = *(float *)(param_1 + 0x488);
          puVar12[-2] = fVar1;
          puVar12[-1] = (fVar2 + 1.0) - fVar5 * fVar6;
          puVar12 = puVar12 + 4;
        } while (uVar16 < uVar15);
      }
    }
    FUN_00f99d30();
    return;
  }
  if (uVar11 == 0) {
    if (3 < (int)uVar15) {
      iVar18 = 2;
      pfVar13 = (float *)(iVar10 + 0x14);
      do {
        fVar5 = (float)(int)uVar16;
        if ((int)uVar16 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[-5] = 0.0;
        pfVar13[-4] = fVar2 + fVar5 * fVar6;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[-3] = fVar1;
        pfVar13[-2] = fVar5 * fVar6 + fVar2;
        fVar5 = (float)(iVar18 + -1);
        if (iVar18 + -1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[-1] = 0.0;
        *pfVar13 = fVar5 * fVar6 + fVar2;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[1] = fVar1;
        pfVar13[2] = fVar5 * fVar6 + fVar2;
        fVar5 = (float)iVar18;
        if (iVar18 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[3] = 0.0;
        pfVar13[4] = fVar5 * fVar6 + fVar2;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[5] = fVar1;
        pfVar13[6] = fVar5 * fVar6 + fVar2;
        fVar5 = (float)(iVar18 + 1);
        if (iVar18 + 1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar16 = uVar16 + 4;
        fVar2 = *(float *)(param_1 + 0x488);
        iVar18 = iVar18 + 4;
        pfVar13[7] = 0.0;
        pfVar13[8] = fVar2 + fVar5 * fVar6;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[9] = fVar1;
        pfVar13[10] = fVar5 * fVar6 + fVar2;
        pfVar13 = pfVar13 + 0x10;
      } while (uVar16 < iVar14 - 1U);
    }
    if (uVar16 < uVar15) {
      pfVar13 = (float *)(uVar16 * 0x10 + iVar10 + 4);
      do {
        fVar5 = (float)(int)uVar16;
        if ((int)uVar16 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar16 = uVar16 + 1;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[-1] = 0.0;
        *pfVar13 = fVar2 + fVar5 * fVar6;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[1] = fVar1;
        pfVar13[2] = fVar5 * fVar6 + fVar2;
        pfVar13 = pfVar13 + 4;
      } while (uVar16 < uVar15);
    }
  }
  else {
    if (3 < (int)uVar15) {
      iVar18 = 2;
      pfVar13 = (float *)(iVar10 + 0x1c);
      do {
        fVar5 = (float)(int)uVar16;
        if ((int)uVar16 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[-5] = 0.0;
        pfVar13[-4] = fVar2 + fVar5 * fVar6;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[-7] = fVar1;
        pfVar13[-6] = fVar5 * fVar6 + fVar2;
        fVar5 = (float)(iVar18 + -1);
        if (iVar18 + -1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[-1] = 0.0;
        *pfVar13 = fVar2 + fVar5 * fVar6;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[-3] = fVar1;
        pfVar13[-2] = fVar5 * fVar6 + fVar2;
        fVar5 = (float)iVar18;
        if (iVar18 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[3] = 0.0;
        pfVar13[4] = fVar5 * fVar6 + fVar2;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[1] = fVar1;
        pfVar13[2] = fVar5 * fVar6 + fVar2;
        fVar5 = (float)(iVar18 + 1);
        if (iVar18 + 1 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar16 = uVar16 + 4;
        fVar2 = *(float *)(param_1 + 0x488);
        iVar18 = iVar18 + 4;
        pfVar13[7] = 0.0;
        pfVar13[8] = fVar2 + fVar5 * fVar6;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar13[5] = fVar1;
        pfVar13[6] = fVar5 * fVar6 + fVar2;
        pfVar13 = pfVar13 + 0x10;
      } while (uVar16 < iVar14 - 1U);
    }
    if (uVar16 < uVar15) {
      puVar12 = (undefined4 *)(uVar16 * 0x10 + iVar10 + 8);
      do {
        fVar5 = (float)(int)uVar16;
        if ((int)uVar16 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        uVar16 = uVar16 + 1;
        fVar2 = *(float *)(param_1 + 0x488);
        *puVar12 = 0;
        puVar12[1] = fVar2 + fVar5 * fVar6;
        fVar2 = *(float *)(param_1 + 0x488);
        puVar12[-2] = fVar1;
        puVar12[-1] = fVar5 * fVar6 + fVar2;
        puVar12 = puVar12 + 4;
      } while (uVar16 < uVar15);
    }
  }
LAB_009d12c1:
  FUN_00f99d30();
  return;
}

// 009DAC70  esp162::esp162  size=18  [class]
undefined4 * __fastcall esp162::esp162(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009DACA0  esp162::vf00  size=30  [class]
undefined4 __thiscall esp162::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009DACC0  esp162::vf04  size=612  [class]
undefined4 __thiscall
esp162::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  short *psVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = cEspModel::vf04(param_2,param_3,param_4);
  if (((iVar3 == 0) || (*(int *)(param_1 + 0x50) == 0)) || (*(short *)(param_1 + 0x400) != -1)) {
    return 0;
  }
  psVar4 = (short *)FUN_009d4a80();
  if (psVar4 != (short *)0x0) {
    sVar1 = psVar4[7];
    if (((sVar1 != 0) || ((char)psVar4[8] != '\0')) && (*psVar4 != 0)) {
      return 0;
    }
    if (sVar1 == 0) {
      *(int *)(param_1 + 0x4a4) = (int)(char)psVar4[8];
    }
    else {
      *(int *)(param_1 + 0x4a4) = (int)sVar1;
    }
    if (*psVar4 < 0) {
      return 0;
    }
    *(float *)(param_1 + 0x474) = (float)(int)psVar4[4] * 0.1;
  }
  puVar5 = (undefined4 *)FUN_009d4ac0();
  if (puVar5 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x4ac) = *puVar5;
    *(undefined4 *)(param_1 + 0x4b0) = puVar5[1];
    *(undefined4 *)(param_1 + 0x4b4) = puVar5[2];
  }
  iVar3 = FUN_00f12b50();
  if (iVar3 == 0) {
    return 0;
  }
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
    iVar7 = *(int *)(param_1 + 0x4a0);
    iVar6 = FUN_00a7c990(&DAT_01ee11f4);
    if (((iVar6 == 0) && (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
       (iVar6 = FUN_00a7c800(), iVar6 != 0)) {
      iVar7 = FUN_00a12290(sVar1 + iVar7);
    }
    else {
      iVar7 = 0;
    }
    if ((iVar3 == 0) || (iVar7 == 0)) {
      return 0;
    }
    iVar3 = 0;
    if (*(int *)(param_1 + 0x4a0) != -1 && -1 < *(int *)(param_1 + 0x4a0) + 1) {
      do {
        sVar1 = *(short *)(param_1 + 0x4e);
        iVar7 = FUN_00a7c990(&DAT_01ee11f4);
        if (iVar7 != 0) {
          return 0;
        }
        iVar7 = FUN_00a81330();
        if (iVar7 == 0) {
          return 0;
        }
        iVar7 = FUN_00a7c800();
        if (iVar7 == 0) {
          return 0;
        }
        iVar7 = FUN_00a12290(sVar1 + iVar3);
        if (iVar7 == 0) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x4a0) + 1);
    }
  }
  else {
    sVar1 = *(short *)(param_1 + 0x4e);
    iVar3 = FUN_00a7c990(&DAT_01ee11f4);
    if (((iVar3 == 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c800(), iVar3 != 0)) {
      FUN_00a12290((int)sVar1);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x4a4);
    iVar3 = FUN_00a7c990(&DAT_01ee11f4);
    if (((iVar3 == 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c800(), iVar3 != 0)) {
      FUN_00a12290(uVar2);
    }
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  return 1;
}

// 009DAF30  esp162::vf08  size=1217  [class]
void __fastcall esp162::vf08(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int local_30;
  uint local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar9 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar9 == 0) {
    iVar9 = FUN_00a81330();
    iVar14 = 0;
    if ((iVar9 != 0) && (iVar9 = FUN_00a7c800(), iVar9 != 0)) {
      esp39::vf08();
      *(undefined4 *)(param_1 + 0x4a8) = 0;
      if ((*(uint *)(param_1 + 0x45c) == 0) ||
         (local_28 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x460)),
         local_28 < *(uint *)(param_1 + 0x45c))) {
        if (*(int *)(param_1 + 0x4a4) == 0) {
          iVar9 = *(int *)(param_1 + 0x4a0) + 1;
          if (0 < iVar9) {
            local_30 = 0;
            do {
              uVar10 = FUN_00a12290(*(short *)(param_1 + 0x4e) + iVar14);
              puVar15 = (undefined4 *)(*(int *)(param_1 + 0x458) + local_30);
              FUN_00f0db60(&local_20,param_1 + 0x180,uVar10,1);
              local_30 = local_30 + 0xc;
              *puVar15 = local_20;
              iVar14 = iVar14 + 1;
              puVar15[1] = local_1c;
              puVar15[2] = local_18;
            } while (iVar14 < iVar9);
          }
          iVar14 = *(int *)(param_1 + 0x450);
          iVar9 = *(int *)(param_1 + 0x4a0) + 1;
          if (iVar9 < iVar14) {
            if (3 < iVar14 - iVar9) {
              iVar11 = iVar9 * 0xc;
              iVar16 = ((iVar14 - iVar9) - 4U >> 2) + 1;
              iVar9 = iVar9 + iVar16 * 4;
              do {
                iVar8 = *(int *)(param_1 + 0x458);
                iVar1 = iVar8 + *(int *)(param_1 + 0x4a0) * 0xc;
                *(undefined4 *)(iVar11 + iVar8) =
                     *(undefined4 *)(iVar8 + *(int *)(param_1 + 0x4a0) * 0xc);
                iVar16 = iVar16 + -1;
                *(undefined4 *)(iVar11 + 4 + iVar8) = *(undefined4 *)(iVar1 + 4);
                *(undefined4 *)(iVar11 + 8 + iVar8) = *(undefined4 *)(iVar1 + 8);
                iVar8 = *(int *)(param_1 + 0x458);
                iVar1 = iVar8 + *(int *)(param_1 + 0x4a0) * 0xc;
                *(undefined4 *)(iVar11 + 0xc + iVar8) =
                     *(undefined4 *)(iVar8 + *(int *)(param_1 + 0x4a0) * 0xc);
                *(undefined4 *)(iVar11 + 0x10 + iVar8) = *(undefined4 *)(iVar1 + 4);
                *(undefined4 *)(iVar11 + 0x14 + iVar8) = *(undefined4 *)(iVar1 + 8);
                iVar8 = *(int *)(param_1 + 0x458);
                iVar1 = iVar8 + *(int *)(param_1 + 0x4a0) * 0xc;
                *(undefined4 *)(iVar11 + 0x18 + iVar8) =
                     *(undefined4 *)(iVar8 + *(int *)(param_1 + 0x4a0) * 0xc);
                *(undefined4 *)(iVar11 + 0x1c + iVar8) = *(undefined4 *)(iVar1 + 4);
                *(undefined4 *)(iVar11 + 0x20 + iVar8) = *(undefined4 *)(iVar1 + 8);
                iVar8 = *(int *)(param_1 + 0x458);
                iVar1 = iVar8 + *(int *)(param_1 + 0x4a0) * 0xc;
                *(undefined4 *)(iVar11 + 0x24 + iVar8) =
                     *(undefined4 *)(iVar8 + *(int *)(param_1 + 0x4a0) * 0xc);
                *(undefined4 *)(iVar11 + 0x28 + iVar8) = *(undefined4 *)(iVar1 + 4);
                *(undefined4 *)(iVar11 + 0x2c + iVar8) = *(undefined4 *)(iVar1 + 8);
                iVar11 = iVar11 + 0x30;
              } while (iVar16 != 0);
            }
            if (iVar9 < iVar14) {
              iVar14 = iVar14 - iVar9;
              iVar9 = iVar9 * 0xc;
              do {
                iVar16 = *(int *)(param_1 + 0x458);
                iVar11 = iVar16 + *(int *)(param_1 + 0x4a0) * 0xc;
                *(undefined4 *)(iVar9 + iVar16) =
                     *(undefined4 *)(iVar16 + *(int *)(param_1 + 0x4a0) * 0xc);
                iVar14 = iVar14 + -1;
                *(undefined4 *)(iVar9 + 4 + iVar16) = *(undefined4 *)(iVar11 + 4);
                *(undefined4 *)(iVar9 + 8 + iVar16) = *(undefined4 *)(iVar11 + 8);
                iVar9 = iVar9 + 0xc;
              } while (iVar14 != 0);
            }
          }
          pfVar13 = *(float **)(param_1 + 0x458);
          fVar2 = *pfVar13;
          fVar3 = pfVar13[1];
          fVar4 = pfVar13[2];
          pfVar13 = pfVar13 + *(int *)(param_1 + 0x4a0) * 3;
          fVar5 = *pfVar13;
          fVar6 = pfVar13[1];
          fVar7 = pfVar13[2];
          *(float *)(param_1 + 0x130) = fVar5 + fVar2;
          *(float *)(param_1 + 0x134) = fVar6 + fVar3;
          *(float *)(param_1 + 0x138) = fVar7 + fVar4;
          *(undefined4 *)(param_1 + 0x13c) = 0x40000000;
          *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x130) * 0.5;
          *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x134) * 0.5;
          *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0x138) * 0.5;
          *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x13c) * 0.5;
          iVar9 = *(int *)(param_1 + 0x4a0);
          fVar2 = fVar2 - fVar5;
          fVar3 = fVar3 - fVar6;
          fVar4 = fVar4 - fVar7;
          *(float *)(param_1 + 300) = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
          if (1 < iVar9 + 1) {
            pfVar13 = *(float **)(param_1 + 0x458);
            fVar2 = *(float *)(param_1 + 0x4a8);
            pfVar12 = pfVar13 + 2;
            do {
              pfVar13 = pfVar13 + 3;
              iVar9 = iVar9 + -1;
              fVar3 = pfVar12[3] - *pfVar12;
              fVar2 = SQRT((*pfVar13 - pfVar12[-2]) * (*pfVar13 - pfVar12[-2]) +
                           (pfVar12[2] - pfVar12[-1]) * (pfVar12[2] - pfVar12[-1]) + fVar3 * fVar3)
                      + fVar2;
              *(float *)(param_1 + 0x4a8) = fVar2;
              pfVar12 = pfVar12 + 3;
            } while (iVar9 != 0);
            FUN_00ed6110();
            return;
          }
        }
        else {
          uVar10 = FUN_00a12290((int)*(short *)(param_1 + 0x4e));
          puVar15 = *(undefined4 **)(param_1 + 0x458);
          FUN_00f0db60(&local_20,param_1 + 0x180,uVar10,1);
          *puVar15 = local_20;
          puVar15[1] = local_1c;
          puVar15[2] = local_18;
          uVar10 = FUN_00a12290(*(undefined4 *)(param_1 + 0x4a4));
          iVar9 = *(int *)(param_1 + 0x458);
          FUN_00f0db60(&local_20,param_1 + 0x180,uVar10,1);
          *(undefined4 *)(iVar9 + 0xc) = local_20;
          *(undefined4 *)(iVar9 + 0x10) = local_1c;
          *(undefined4 *)(iVar9 + 0x14) = local_18;
          iVar9 = *(int *)(param_1 + 0x458);
          *(float *)(iVar9 + 0xc) = *(float *)(iVar9 + 0xc) + *(float *)(param_1 + 0x4ac);
          *(float *)(iVar9 + 0x10) = *(float *)(iVar9 + 0x10) + *(float *)(param_1 + 0x4b0);
          *(float *)(iVar9 + 0x14) = *(float *)(iVar9 + 0x14) + *(float *)(param_1 + 0x4b4);
          iVar9 = *(int *)(param_1 + 0x458);
          *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(iVar9 + 0xc);
          *(undefined4 *)(iVar9 + 0x1c) = *(undefined4 *)(iVar9 + 0x10);
          *(undefined4 *)(iVar9 + 0x20) = *(undefined4 *)(iVar9 + 0x14);
          iVar9 = *(int *)(param_1 + 0x458);
          *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar9 + 0xc);
          *(undefined4 *)(iVar9 + 0x28) = *(undefined4 *)(iVar9 + 0x10);
          *(undefined4 *)(iVar9 + 0x2c) = *(undefined4 *)(iVar9 + 0x14);
          pfVar13 = *(float **)(param_1 + 0x458);
          fVar2 = *pfVar13;
          fVar3 = pfVar13[1];
          fVar4 = pfVar13[2];
          fVar5 = pfVar13[3];
          fVar6 = pfVar13[4];
          fVar7 = pfVar13[5];
          *(float *)(param_1 + 0x130) = fVar5 + fVar2;
          *(float *)(param_1 + 0x134) = fVar6 + fVar3;
          *(float *)(param_1 + 0x138) = fVar7 + fVar4;
          *(undefined4 *)(param_1 + 0x13c) = 0x40000000;
          *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x130) * 0.5;
          *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x134) * 0.5;
          *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0x138) * 0.5;
          *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x13c) * 0.5;
          fVar2 = fVar2 - fVar5;
          fVar3 = fVar3 - fVar6;
          fVar4 = fVar4 - fVar7;
          fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
          *(float *)(param_1 + 300) = fVar2;
          *(float *)(param_1 + 0x4a8) = fVar2;
        }
      }
      FUN_00ed6110();
    }
  }
  return;
}


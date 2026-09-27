// src/effect/cEspStrip.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D0BC0..00F2DEC0, 10 functions

#include "mgrr.h"
#include "cEspStrip.h"

// 009D0BC0  cEspStrip::cEspStrip  size=18  [class]
undefined4 * __fastcall cEspStrip::cEspStrip(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009D0BF0  cEspStrip::vf00  size=30  [class]
undefined4 __thiscall cEspStrip::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ED54E0  cEspStrip::vf08  size=1  [class]
void cEspStrip::vf08(void)

{
  return;
}

// 00ED54F0  FUN_00ed54f0  size=38  [between]
void __fastcall FUN_00ed54f0(int param_1)

{
  if ((*(uint *)(param_1 + 0x38) & 0x8000000) != 0) {
    if (*(int *)(param_1 + 0x490) != 0) {
      FUN_00ed5150();
      return;
    }
    if (*(int *)(param_1 + 0x470) != 0) {
      FUN_00ed5150();
      return;
    }
  }
  return;
}

// 00ED5520  cEspStrip::vf1C  size=2777  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEspStrip::vf1C(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float local_c;
  float local_8;
  float local_4;
  
  iVar5 = FUN_00f99ca0();
  iVar12 = *(int *)(param_1 + 0x450);
  iVar9 = (iVar12 + -4) * *(int *)(param_1 + 0x454);
  uVar10 = iVar9 + 2;
  fVar3 = (float)(iVar9 + 1);
  if (iVar9 + 1 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar3 = *(float *)(param_1 + 0x474) / fVar3;
  fVar1 = *(float *)(param_1 + 0x478);
  if (*(int *)(param_1 + 0x480) == 1) {
    fVar4 = (float)iVar12;
    if (iVar12 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    if (*(float *)(param_1 + 0x46c) - 1.0 < fVar4) {
      if (*(float *)(param_1 + 0x460) <= *(float *)(param_1 + 0x46c)) {
        local_8 = *(float *)(param_1 + 0x460);
      }
      else {
        local_8 = *(float *)(param_1 + 0x46c);
      }
      if (local_8 < 3.0) {
        local_8 = 3.0;
      }
      uVar11 = 0;
      fVar3 = ((fVar4 - _DAT_018d6c44) / (_DAT_018d6c40 + local_8)) * fVar3;
      fVar4 = *(float *)(param_1 + 0x474) - 0.01;
      if (iVar9 != -2) {
        pfVar7 = (float *)(iVar5 + 8);
        do {
          uVar8 = *(uint *)(param_1 + 0x38);
          local_8 = fVar1;
          local_4 = fVar1;
          if ((uVar8 & 0x40000) == 0) {
            if ((uVar8 & 0x80000) == 0) {
              local_4 = 0.0;
              local_c = (float)(int)uVar11;
              if ((int)uVar11 < 0) {
                local_c = local_c + 4.2949673e+09;
              }
            }
            else {
              local_8 = 0.0;
              local_c = (float)(int)uVar11;
              if ((int)uVar11 < 0) {
                local_c = local_c + 4.2949673e+09;
              }
            }
            local_c = local_c * fVar3;
            if (fVar4 < local_c) {
              local_c = fVar4;
            }
          }
          else {
            if ((uVar8 & 0x80000) == 0) {
              local_4 = 0.0;
              fVar2 = (float)(int)uVar11;
              if ((int)uVar11 < 0) {
                fVar2 = fVar2 + 4.2949673e+09;
              }
            }
            else {
              local_8 = 0.0;
              fVar2 = (float)(int)uVar11;
              if ((int)uVar11 < 0) {
                fVar2 = fVar2 + 4.2949673e+09;
              }
            }
            local_c = 1.0 - fVar2 * fVar3;
            if (local_c < 0.0) {
              local_c = 0.0;
            }
          }
          fVar2 = *(float *)(param_1 + 0x488);
          uVar11 = uVar11 + 1;
          *pfVar7 = *(float *)(param_1 + 0x48c) + local_8;
          pfVar7[1] = fVar2 + local_c;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[-2] = *(float *)(param_1 + 0x48c) + local_4;
          pfVar7[-1] = fVar2 + local_c;
          pfVar7 = pfVar7 + 4;
        } while (uVar11 < uVar10);
      }
      FUN_00f99d30();
      return;
    }
  }
  uVar11 = *(uint *)(param_1 + 0x38);
  uVar8 = 0;
  if ((uVar11 & 0x40000) == 0) {
    if ((uVar11 & 0x80000) == 0) {
      if (3 < (int)uVar10) {
        iVar12 = 2;
        pfVar7 = (float *)(iVar5 + 0x14);
        do {
          fVar4 = (float)(int)uVar8;
          if ((int)uVar8 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[-5] = *(float *)(param_1 + 0x48c);
          pfVar7[-4] = fVar2 + fVar4 * fVar3;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[-3] = *(float *)(param_1 + 0x48c) + fVar1;
          pfVar7[-2] = fVar4 * fVar3 + fVar2;
          fVar4 = (float)(iVar12 + -1);
          if (iVar12 + -1 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[-1] = *(float *)(param_1 + 0x48c);
          *pfVar7 = fVar2 + fVar4 * fVar3;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[1] = *(float *)(param_1 + 0x48c) + fVar1;
          pfVar7[2] = fVar4 * fVar3 + fVar2;
          fVar4 = (float)iVar12;
          if (iVar12 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[3] = *(float *)(param_1 + 0x48c);
          pfVar7[4] = fVar2 + fVar4 * fVar3;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[5] = *(float *)(param_1 + 0x48c) + fVar1;
          pfVar7[6] = fVar4 * fVar3 + fVar2;
          fVar4 = (float)(iVar12 + 1);
          if (iVar12 + 1 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
          }
          uVar8 = uVar8 + 4;
          fVar2 = *(float *)(param_1 + 0x488);
          iVar12 = iVar12 + 4;
          pfVar7[7] = *(float *)(param_1 + 0x48c);
          pfVar7[8] = fVar2 + fVar4 * fVar3;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[9] = *(float *)(param_1 + 0x48c) + fVar1;
          pfVar7[10] = fVar4 * fVar3 + fVar2;
          pfVar7 = pfVar7 + 0x10;
        } while (uVar8 < iVar9 - 1U);
      }
      if (uVar8 < uVar10) {
        pfVar7 = (float *)(uVar8 * 0x10 + iVar5 + 4);
        do {
          fVar4 = (float)(int)uVar8;
          if ((int)uVar8 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
          }
          uVar8 = uVar8 + 1;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[-1] = *(float *)(param_1 + 0x48c);
          *pfVar7 = fVar2 + fVar4 * fVar3;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[1] = *(float *)(param_1 + 0x48c) + fVar1;
          pfVar7[2] = fVar4 * fVar3 + fVar2;
          pfVar7 = pfVar7 + 4;
        } while (uVar8 < uVar10);
      }
    }
    else {
      if (3 < (int)uVar10) {
        iVar12 = 2;
        pfVar7 = (float *)(iVar5 + 0x1c);
        do {
          fVar4 = (float)(int)uVar8;
          if ((int)uVar8 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[-5] = *(float *)(param_1 + 0x48c);
          pfVar7[-4] = fVar2 + fVar4 * fVar3;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[-7] = *(float *)(param_1 + 0x48c) + fVar1;
          pfVar7[-6] = fVar4 * fVar3 + fVar2;
          fVar4 = (float)(iVar12 + -1);
          if (iVar12 + -1 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[-1] = *(float *)(param_1 + 0x48c);
          *pfVar7 = fVar2 + fVar4 * fVar3;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[-3] = *(float *)(param_1 + 0x48c) + fVar1;
          pfVar7[-2] = fVar4 * fVar3 + fVar2;
          fVar4 = (float)iVar12;
          if (iVar12 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
          }
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[3] = *(float *)(param_1 + 0x48c);
          pfVar7[4] = fVar2 + fVar4 * fVar3;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[1] = *(float *)(param_1 + 0x48c) + fVar1;
          pfVar7[2] = fVar4 * fVar3 + fVar2;
          fVar4 = (float)(iVar12 + 1);
          if (iVar12 + 1 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
          }
          uVar8 = uVar8 + 4;
          fVar2 = *(float *)(param_1 + 0x488);
          iVar12 = iVar12 + 4;
          pfVar7[7] = *(float *)(param_1 + 0x48c);
          pfVar7[8] = fVar2 + fVar4 * fVar3;
          fVar2 = *(float *)(param_1 + 0x488);
          pfVar7[5] = *(float *)(param_1 + 0x48c) + fVar1;
          pfVar7[6] = fVar4 * fVar3 + fVar2;
          pfVar7 = pfVar7 + 0x10;
        } while (uVar8 < iVar9 - 1U);
      }
      if (uVar8 < uVar10) {
        puVar6 = (undefined4 *)(uVar8 * 0x10 + iVar5 + 8);
        do {
          fVar4 = (float)(int)uVar8;
          if ((int)uVar8 < 0) {
            fVar4 = fVar4 + 4.2949673e+09;
          }
          uVar8 = uVar8 + 1;
          fVar2 = *(float *)(param_1 + 0x488);
          *puVar6 = *(undefined4 *)(param_1 + 0x48c);
          puVar6[1] = fVar2 + fVar4 * fVar3;
          fVar2 = *(float *)(param_1 + 0x488);
          puVar6[-2] = *(float *)(param_1 + 0x48c) + fVar1;
          puVar6[-1] = fVar4 * fVar3 + fVar2;
          puVar6 = puVar6 + 4;
        } while (uVar8 < uVar10);
        FUN_00f99d30();
        return;
      }
    }
    FUN_00f99d30();
    return;
  }
  if ((uVar11 & 0x80000) == 0) {
    if (3 < (int)uVar10) {
      iVar12 = 2;
      pfVar7 = (float *)(iVar5 + 0x14);
      do {
        fVar4 = (float)(int)uVar8;
        if ((int)uVar8 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[-5] = *(float *)(param_1 + 0x48c);
        pfVar7[-4] = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[-3] = *(float *)(param_1 + 0x48c) + fVar1;
        pfVar7[-2] = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar4 = (float)(iVar12 + -1);
        if (iVar12 + -1 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[-1] = *(float *)(param_1 + 0x48c);
        *pfVar7 = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[1] = *(float *)(param_1 + 0x48c) + fVar1;
        pfVar7[2] = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar4 = (float)iVar12;
        if (iVar12 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[3] = *(float *)(param_1 + 0x48c);
        pfVar7[4] = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[5] = *(float *)(param_1 + 0x48c) + fVar1;
        pfVar7[6] = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar4 = (float)(iVar12 + 1);
        if (iVar12 + 1 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        uVar8 = uVar8 + 4;
        fVar2 = *(float *)(param_1 + 0x488);
        iVar12 = iVar12 + 4;
        pfVar7[7] = *(float *)(param_1 + 0x48c);
        pfVar7[8] = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[9] = *(float *)(param_1 + 0x48c) + fVar1;
        pfVar7[10] = (fVar2 + 1.0) - fVar4 * fVar3;
        pfVar7 = pfVar7 + 0x10;
      } while (uVar8 < iVar9 - 1U);
    }
    if (uVar8 < uVar10) {
      pfVar7 = (float *)(uVar8 * 0x10 + iVar5 + 4);
      do {
        fVar4 = (float)(int)uVar8;
        if ((int)uVar8 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        uVar8 = uVar8 + 1;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[-1] = *(float *)(param_1 + 0x48c);
        *pfVar7 = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[1] = *(float *)(param_1 + 0x48c) + fVar1;
        pfVar7[2] = (fVar2 + 1.0) - fVar4 * fVar3;
        pfVar7 = pfVar7 + 4;
      } while (uVar8 < uVar10);
      FUN_00f99d30();
      return;
    }
  }
  else {
    if (3 < (int)uVar10) {
      iVar12 = 2;
      pfVar7 = (float *)(iVar5 + 0x1c);
      do {
        fVar4 = (float)(int)uVar8;
        if ((int)uVar8 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[-5] = *(float *)(param_1 + 0x48c);
        pfVar7[-4] = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[-7] = *(float *)(param_1 + 0x48c) + fVar1;
        pfVar7[-6] = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar4 = (float)(iVar12 + -1);
        if (iVar12 + -1 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[-1] = *(float *)(param_1 + 0x48c);
        *pfVar7 = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[-3] = *(float *)(param_1 + 0x48c) + fVar1;
        pfVar7[-2] = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar4 = (float)iVar12;
        if (iVar12 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[3] = *(float *)(param_1 + 0x48c);
        pfVar7[4] = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[1] = *(float *)(param_1 + 0x48c) + fVar1;
        pfVar7[2] = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar4 = (float)(iVar12 + 1);
        if (iVar12 + 1 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        uVar8 = uVar8 + 4;
        fVar2 = *(float *)(param_1 + 0x488);
        iVar12 = iVar12 + 4;
        pfVar7[7] = *(float *)(param_1 + 0x48c);
        pfVar7[8] = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar2 = *(float *)(param_1 + 0x488);
        pfVar7[5] = *(float *)(param_1 + 0x48c) + fVar1;
        pfVar7[6] = (fVar2 + 1.0) - fVar4 * fVar3;
        pfVar7 = pfVar7 + 0x10;
      } while (uVar8 < iVar9 - 1U);
    }
    if (uVar8 < uVar10) {
      puVar6 = (undefined4 *)(uVar8 * 0x10 + iVar5 + 8);
      do {
        fVar4 = (float)(int)uVar8;
        if ((int)uVar8 < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        uVar8 = uVar8 + 1;
        fVar2 = *(float *)(param_1 + 0x488);
        *puVar6 = *(undefined4 *)(param_1 + 0x48c);
        puVar6[1] = (fVar2 + 1.0) - fVar4 * fVar3;
        fVar2 = *(float *)(param_1 + 0x488);
        puVar6[-2] = *(float *)(param_1 + 0x48c) + fVar1;
        puVar6[-1] = (fVar2 + 1.0) - fVar4 * fVar3;
        puVar6 = puVar6 + 4;
      } while (uVar8 < uVar10);
    }
  }
  FUN_00f99d30();
  return;
}

// 00EFF970  cEspStrip::vf14  size=45  [class]
void __fastcall cEspStrip::vf14(int param_1)

{
  if ((*(int *)(param_1 + 0x458) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  return;
}

// 00EFF9A0  cEspStrip::vf20  size=120  [class]
void __fastcall cEspStrip::vf20(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_00f99ca0();
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar2;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar4 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  uVar4 = *(undefined4 *)(uVar3 + 8);
  uVar5 = FUN_00e9fe30(uVar1,uVar4);
  FUN_00ee0d40(*(undefined4 *)(param_1 + 0x458),uVar5,uVar1,uVar4);
  FUN_00f99d30();
  return;
}

// 00EFFA20  cEspStrip::vf24  size=718  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEspStrip::vf24(int param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_34;
  local_30 = *(float *)(param_1 + 0x250);
  local_2c = *(float *)(param_1 + 0x254);
  local_28 = *(float *)(param_1 + 600);
  local_34 = *(float *)(param_1 + 0x25c) * *(float *)(param_1 + 0x124);
  if (((*(byte *)(param_1 + 0x33) & 1) == 0) && ((DAT_01bea070._3_1_ & 1) == 0)) {
    local_30 = _DAT_018d5df0 * local_30;
    local_2c = _DAT_018d5df0 * local_2c;
    local_28 = _DAT_018d5df0 * local_28;
  }
  iVar4 = *(int *)(param_1 + 0x84);
  if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x68) & 8) != 0)) {
    local_30 = *(float *)(iVar4 + 0x30) * local_30;
    local_2c = *(float *)(iVar4 + 0x34) * local_2c;
    local_28 = *(float *)(iVar4 + 0x38) * local_28;
    local_34 = *(float *)(iVar4 + 0x3c) * local_34;
  }
  cVar1 = *(char *)(param_1 + 0x440);
  if ((((cVar1 == '\x06') || (cVar1 == '\n')) || (cVar1 == '\f')) || (cVar1 == '\x0f')) {
    local_30 = local_34 * local_30;
    local_2c = local_34 * local_2c;
    local_28 = local_34 * local_28;
    if (cVar1 == '\x0f') {
      local_34 = 1.0;
    }
    else {
      if ((*(int *)(param_1 + 0x58) == 0) ||
         (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 == (uint *)0x0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *puVar2;
        if ((uVar8 + 0xf & 0xfffffff0) != uVar8) {
          uVar3 = FUN_00f59ed0(3);
          FUN_00dd5650(&DAT_016597b4,uVar3);
        }
      }
      local_34 = *(float *)(uVar8 + 0x28) * 0.5 * local_34;
    }
  }
  iVar6 = (*(int *)(param_1 + 0x450) + -4) * *(int *)(param_1 + 0x454);
  uVar7 = iVar6 + 2;
  iVar4 = FUN_00f99ca0();
  uVar8 = 0;
  if (3 < (int)uVar7) {
    iVar6 = (iVar6 - 2U >> 2) + 1;
    uVar8 = iVar6 * 4;
    pfVar5 = (float *)(iVar4 + 0x38);
    do {
      iVar6 = iVar6 + -1;
      pfVar5[-0xe] = local_30;
      pfVar5[-0xd] = local_2c;
      pfVar5[-0xc] = local_28;
      pfVar5[-0xb] = local_34;
      pfVar5[-10] = local_30;
      pfVar5[-9] = local_2c;
      pfVar5[-8] = local_28;
      pfVar5[-7] = local_34;
      pfVar5[-6] = local_30;
      pfVar5[-5] = local_2c;
      pfVar5[-4] = local_28;
      pfVar5[-3] = local_34;
      pfVar5[-2] = local_30;
      pfVar5[-1] = local_2c;
      *pfVar5 = local_28;
      pfVar5[1] = local_34;
      pfVar5[2] = local_30;
      pfVar5[3] = local_2c;
      pfVar5[4] = local_28;
      pfVar5[5] = local_34;
      pfVar5[6] = local_30;
      pfVar5[7] = local_2c;
      pfVar5[8] = local_28;
      pfVar5[9] = local_34;
      pfVar5[10] = local_30;
      pfVar5[0xb] = local_2c;
      pfVar5[0xc] = local_28;
      pfVar5[0xd] = local_34;
      pfVar5[0xe] = local_30;
      pfVar5[0xf] = local_2c;
      pfVar5[0x10] = local_28;
      pfVar5[0x11] = local_34;
      pfVar5 = pfVar5 + 0x20;
    } while (iVar6 != 0);
  }
  if (uVar8 < uVar7) {
    iVar6 = uVar7 - uVar8;
    pfVar5 = (float *)(iVar4 + uVar8 * 0x20 + 0x18);
    do {
      iVar6 = iVar6 + -1;
      pfVar5[-6] = local_30;
      pfVar5[-2] = local_30;
      pfVar5[-5] = local_2c;
      pfVar5[-4] = local_28;
      pfVar5[-3] = local_34;
      pfVar5[-1] = local_2c;
      *pfVar5 = local_28;
      pfVar5[1] = local_34;
      pfVar5 = pfVar5 + 8;
    } while (iVar6 != 0);
  }
  FUN_00f99d30();
  __security_check_cookie(local_14 ^ (uint)&local_34);
  return;
}

// 00F27760  cEspStrip::vf10  size=391  [class]
void __fastcall cEspStrip::vf10(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_14;
  int *local_10;
  int *local_c;
  int local_8;
  int local_4;
  
  if (DAT_01edd490 != 0) {
    iVar3 = cPrimHeap::allocBuffer(0x180,0x20);
    if (iVar3 != 0) {
      iVar3 = cEspDrawStrip::cEspDrawStrip();
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x78) = 0;
        *(undefined4 *)(iVar3 + 0x74) = 0;
        *(undefined4 *)(iVar3 + 0x70) = 0;
        *(undefined4 *)(iVar3 + 0x6c) = 0;
        *(undefined4 *)(iVar3 + 100) = 0;
        *(undefined4 *)(iVar3 + 0x60) = 0;
        *(undefined4 *)(iVar3 + 0x5c) = 0;
        *(undefined4 *)(iVar3 + 0x58) = 0;
        *(undefined4 *)(iVar3 + 0x50) = 0;
        *(undefined4 *)(iVar3 + 0x4c) = 0;
        *(undefined4 *)(iVar3 + 0x48) = 0;
        *(undefined4 *)(iVar3 + 0x44) = 0;
        *(undefined4 *)(iVar3 + 0x7c) = 0x3f800000;
        *(undefined4 *)(iVar3 + 0x68) = 0x3f800000;
        *(undefined4 *)(iVar3 + 0x54) = 0x3f800000;
        *(undefined4 *)(iVar3 + 0x40) = 0x3f800000;
        FUN_00efed20();
        piVar1 = param_1 + 0xf2;
        FUN_00edfcd0(piVar1);
        FUN_00f26b40(iVar3);
        iVar4 = param_1[0x21];
        iVar2 = param_1[10];
        FUN_00f45d50();
        local_14 = iVar3;
        local_10 = param_1;
        local_c = piVar1;
        local_8 = iVar2;
        local_4 = iVar4;
        FUN_00f49500(&local_14);
        if ((*(byte *)(param_1 + 0xf) & 0x10) != 0) {
          if (param_1[0x127] == 1) {
            *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xffffffbf | 0x400;
          }
          else if (param_1[0x127] == 2) {
            *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0xffffffbf | 0x200;
          }
          else {
            *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) | 0x40;
          }
        }
        iVar4 = FUN_00f51070(iVar3 + 0xd0,0xc,(param_1[0x114] + -4) * param_1[0x115] * 2 + 4);
        if (iVar4 == 0) {
          FUN_009cca90(param_1,&DAT_016daa1c);
          return;
        }
        (**(code **)(*param_1 + 0x20))(iVar3 + 0xd0);
        FUN_00ee0af0(iVar3);
        FUN_00ee0bd0(iVar3);
        FUN_00edfcd0(piVar1);
        uVar5 = FUN_00e9fe70();
        uVar6 = FUN_00e9fe60(uVar5);
        FUN_00edc9e0(iVar3,iVar3,piVar1,uVar6,uVar5);
        return;
      }
    }
  }
  FUN_009cca90(param_1,&DAT_016da9f4);
  return;
}

// 00F2DEC0  cEspStrip::vf04  size=50  [class]
bool cEspStrip::vf04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = cEspModel::vf04(param_1,param_2,param_3);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_00f12b50();
  return iVar1 != 0;
}


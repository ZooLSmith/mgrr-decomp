// src/misc/esp14.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD400..00F31450, 5 functions

#include "mgrr.h"
#include "esp14.h"

// 00ECD400  esp14::esp14  size=18  [class]
undefined4 * __fastcall esp14::esp14(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 00ED08E0  esp14::vf00  size=30  [class]
undefined4 __thiscall esp14::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F16E80  esp14::vf08  size=1882  [class]
void __fastcall esp14::vf08(int param_1)

{
  int *piVar1;
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
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  float *pfVar16;
  float10 fVar17;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  piVar1 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar1);
  FUN_00f0b530(piVar1);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar1 = 0;
  }
  else {
    *piVar1 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar1);
  FUN_00efbd40(piVar1);
  if (*(int *)(param_1 + 0x450) != 0) {
    if ((*(int *)(param_1 + 0x50) == 0) &&
       (pfVar16 = *(float **)(param_1 + 0x3b0), pfVar16 != (float *)0x0)) {
      local_20 = *pfVar16;
      iVar14 = 3;
      local_1c = pfVar16[1];
      local_18 = pfVar16[2];
      pfVar16 = (float *)(param_1 + 0x470);
      do {
        iVar14 = iVar14 + -1;
        pfVar16[-2] = pfVar16[-2] + local_20;
        pfVar16[-1] = local_1c + pfVar16[-1];
        *pfVar16 = local_18 + *pfVar16;
        pfVar16[1] = pfVar16[1] + local_20;
        pfVar16[2] = local_1c + pfVar16[2];
        pfVar16[3] = local_18 + pfVar16[3];
        pfVar16[4] = pfVar16[4] + local_20;
        pfVar16[5] = pfVar16[5] + local_1c;
        pfVar16[6] = local_18 + pfVar16[6];
        pfVar16[7] = local_20 + pfVar16[7];
        pfVar16[8] = local_1c + pfVar16[8];
        pfVar16[9] = local_18 + pfVar16[9];
        pfVar16[10] = pfVar16[10] + local_20;
        pfVar16[0xb] = pfVar16[0xb] + local_1c;
        pfVar16[0xc] = local_18 + pfVar16[0xc];
        pfVar16[0xd] = pfVar16[0xd] + local_20;
        pfVar16[0xe] = local_1c + pfVar16[0xe];
        pfVar16[0xf] = local_18 + pfVar16[0xf];
        pfVar16[0x10] = pfVar16[0x10] + local_20;
        pfVar16[0x11] = pfVar16[0x11] + local_1c;
        pfVar16[0x12] = local_18 + pfVar16[0x12];
        pfVar16 = pfVar16 + 0x15;
      } while (iVar14 != 0);
    }
    *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_1 + 0x6d0);
    *(float *)(param_1 + 0x6d0) = *(float *)(param_1 + 0x6d0) + *(float *)(param_1 + 0x110);
    iVar14 = FUN_00fdbc60();
    iVar12 = FUN_00fdbc60();
    if ((iVar12 == iVar14) && (*(int *)(param_1 + 0x6d8) == 0)) {
      iVar14 = *(int *)(param_1 + 0x454) * 3 + 0x117;
      *(undefined4 *)(param_1 + iVar14 * 4) = *(undefined4 *)(param_1 + 400);
      iVar14 = param_1 + iVar14 * 4;
      *(undefined4 *)(iVar14 + 4) = *(undefined4 *)(param_1 + 0x194);
      *(undefined4 *)(iVar14 + 8) = *(undefined4 *)(param_1 + 0x198);
      iVar14 = (*(int *)(param_1 + 0x454) + 0x56) * 0x10;
      *(undefined4 *)(iVar14 + param_1) = *(undefined4 *)(param_1 + 0x250);
      iVar14 = iVar14 + param_1;
      *(undefined4 *)(iVar14 + 4) = *(undefined4 *)(param_1 + 0x254);
      *(undefined4 *)(iVar14 + 8) = *(undefined4 *)(param_1 + 600);
      *(undefined4 *)(iVar14 + 0xc) = *(undefined4 *)(param_1 + 0x25c);
    }
    else {
      iVar14 = *(int *)(param_1 + 0x454);
      *(undefined4 *)(param_1 + 0x6d8) = 0;
      if (iVar14 < *(int *)(param_1 + 0x450)) {
        iVar14 = iVar14 * 3 + 0x11a;
        *(undefined4 *)(param_1 + iVar14 * 4) = *(undefined4 *)(param_1 + 400);
        iVar14 = param_1 + iVar14 * 4;
        *(undefined4 *)(iVar14 + 4) = *(undefined4 *)(param_1 + 0x194);
        *(undefined4 *)(iVar14 + 8) = *(undefined4 *)(param_1 + 0x198);
        iVar14 = (*(int *)(param_1 + 0x454) + 0x57) * 0x10;
        *(undefined4 *)(iVar14 + param_1) = *(undefined4 *)(param_1 + 0x250);
        iVar14 = iVar14 + param_1;
        *(undefined4 *)(iVar14 + 4) = *(undefined4 *)(param_1 + 0x254);
        *(undefined4 *)(iVar14 + 8) = *(undefined4 *)(param_1 + 600);
        *(undefined4 *)(iVar14 + 0xc) = *(undefined4 *)(param_1 + 0x25c);
        *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0x454) + 1;
      }
      else {
        iVar12 = 0;
        if (iVar14 != 1 && -1 < iVar14 + -1) {
          puVar13 = (undefined4 *)(param_1 + 0x46c);
          puVar15 = (undefined4 *)(param_1 + 0x578);
          do {
            iVar12 = iVar12 + 1;
            puVar13[-1] = puVar13[2];
            *puVar13 = puVar13[3];
            puVar13[1] = puVar13[4];
            puVar15[-2] = *(undefined4 *)(param_1 + 0x250);
            puVar15[-1] = *(undefined4 *)(param_1 + 0x254);
            *puVar15 = *(undefined4 *)(param_1 + 600);
            puVar15[1] = *(undefined4 *)(param_1 + 0x25c);
            puVar13 = puVar13 + 3;
            puVar15 = puVar15 + 4;
          } while (iVar12 < *(int *)(param_1 + 0x454) + -1);
        }
        iVar14 = *(int *)(param_1 + 0x454) * 3 + 0x117;
        *(undefined4 *)(param_1 + iVar14 * 4) = *(undefined4 *)(param_1 + 400);
        iVar14 = param_1 + iVar14 * 4;
        *(undefined4 *)(iVar14 + 4) = *(undefined4 *)(param_1 + 0x194);
        *(undefined4 *)(iVar14 + 8) = *(undefined4 *)(param_1 + 0x198);
        iVar14 = (*(int *)(param_1 + 0x454) + 0x56) * 0x10;
        *(undefined4 *)(iVar14 + param_1) = *(undefined4 *)(param_1 + 0x250);
        iVar14 = iVar14 + param_1;
        *(undefined4 *)(iVar14 + 4) = *(undefined4 *)(param_1 + 0x254);
        *(undefined4 *)(iVar14 + 8) = *(undefined4 *)(param_1 + 600);
        *(undefined4 *)(iVar14 + 0xc) = *(undefined4 *)(param_1 + 0x25c);
      }
      if (((1 < *(int *)(param_1 + 0x454)) && (*(float *)(param_1 + 0x6e4) != 0.0)) &&
         (iVar14 = *(int *)(param_1 + 0x454) + -2, -1 < iVar14)) {
        pfVar16 = (float *)(param_1 + 0x46c + iVar14 * 0xc);
        do {
          fVar2 = pfVar16[-1] - pfVar16[2];
          fVar3 = *pfVar16 - pfVar16[3];
          fVar4 = pfVar16[1] - pfVar16[4];
          fVar17 = (float10)FUN_00fdef70();
          if (*(float *)(param_1 + 0x6e4) < (float)fVar17) {
            fVar5 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
            local_30 = fVar2;
            local_2c = fVar3;
            local_28 = fVar4;
            if (fVar5 < 0.0 == (fVar5 == 0.0)) {
              FUN_00ddf460(&local_30,&local_30);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              local_30 = 0.0;
              local_2c = 1.0;
              local_28 = 0.0;
            }
            fVar2 = *(float *)(param_1 + 0x6e4);
            local_30 = fVar2 * local_30;
            local_2c = local_2c * fVar2;
            local_28 = local_28 * fVar2;
            local_24 = fVar2 * local_24;
            pfVar16[-1] = local_30 + pfVar16[2];
            *pfVar16 = pfVar16[3] + local_2c;
            pfVar16[1] = pfVar16[4] + local_28;
          }
          pfVar16 = pfVar16 + -3;
          iVar14 = iVar14 + -1;
        } while (-1 < iVar14);
      }
      fVar11 = (float)*(int *)(param_1 + 0x450);
      iVar14 = *(int *)(param_1 + 0x454) + -1;
      fVar2 = *(float *)(param_1 + 0x458);
      fVar3 = *(float *)(param_1 + 0x250);
      fVar4 = *(float *)(param_1 + 0x45c);
      fVar5 = *(float *)(param_1 + 0x254);
      fVar6 = *(float *)(param_1 + 0x460);
      fVar7 = *(float *)(param_1 + 600);
      fVar8 = *(float *)(param_1 + 0x464);
      fVar9 = *(float *)(param_1 + 0x25c);
      fVar10 = *(float *)(param_1 + 0x25c);
      if (-1 < iVar14) {
        pfVar16 = (float *)((*(int *)(param_1 + 0x454) + 0x56) * 0x10 + param_1);
        do {
          *pfVar16 = *(float *)(param_1 + 0x250);
          pfVar16[1] = *(float *)(param_1 + 0x254);
          pfVar16[2] = *(float *)(param_1 + 600);
          pfVar16[3] = *(float *)(param_1 + 0x25c);
          pfVar16[3] = pfVar16[3] * *(float *)(param_1 + 0x6dc);
          *pfVar16 = (float)(*(int *)(param_1 + 0x450) - iVar14) * ((fVar2 - fVar3) / fVar11) +
                     *pfVar16;
          pfVar16[1] = (float)(*(int *)(param_1 + 0x450) - iVar14) * ((fVar4 - fVar5) / fVar11) +
                       pfVar16[1];
          pfVar16[2] = (float)(*(int *)(param_1 + 0x450) - iVar14) * ((fVar6 - fVar7) / fVar11) +
                       pfVar16[2];
          pfVar16[3] = (float)(*(int *)(param_1 + 0x450) - iVar14) *
                       ((fVar8 * fVar9 - fVar10) / fVar11) + pfVar16[3];
          if (*pfVar16 < 0.0) {
            *pfVar16 = 0.0;
          }
          if (pfVar16[1] < 0.0) {
            pfVar16[1] = 0.0;
          }
          if (pfVar16[2] < 0.0) {
            pfVar16[2] = 0.0;
          }
          if (pfVar16[3] < 0.0) {
            pfVar16[3] = 0.0;
          }
          pfVar16 = pfVar16 + -4;
          iVar14 = iVar14 + -1;
        } while (-1 < iVar14);
      }
    }
    local_30 = (*(float *)(param_1 + 400) + *(float *)(param_1 + 0x468)) * 0.5;
    local_2c = (*(float *)(param_1 + 0x46c) + *(float *)(param_1 + 0x194)) * 0.5;
    local_28 = (*(float *)(param_1 + 0x198) + *(float *)(param_1 + 0x470)) * 0.5;
    local_24 = local_14 * 0.5;
    *(float *)(param_1 + 0x130) = local_30;
    *(float *)(param_1 + 0x134) = local_2c;
    *(float *)(param_1 + 0x138) = local_28;
    *(float *)(param_1 + 0x13c) = local_24;
    local_20 = *(float *)(param_1 + 400) - *(float *)(param_1 + 0x468);
    local_1c = *(float *)(param_1 + 0x194) - *(float *)(param_1 + 0x46c);
    local_18 = *(float *)(param_1 + 0x198) - *(float *)(param_1 + 0x470);
    fVar17 = (float10)FUN_00fdef70();
    *(float *)(param_1 + 300) = (float)fVar17;
  }
  return;
}

// 00F284D0  esp14::addOtTransList  size=686  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall esp14::addOtTransList(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  
  if ((*(int *)(param_1 + 0x450) != 0) && (1 < *(int *)(param_1 + 0x454))) {
    if ((DAT_01edd490 == 0) ||
       (puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0x120,0x20), puVar3 == (undefined4 *)0x0)) {
      FUN_009cca90(param_1,&DAT_016db730);
      return;
    }
    puVar3[9] = 0;
    *puVar3 = cEspDrawWork14::vftable;
    FUN_00f9c880();
    FUN_00f9c880();
    if (((*(int *)(param_1 + 0x6c) == 0x400) || (*(int *)(param_1 + 0x6c) == 0x800)) ||
       (*(int *)(param_1 + 0x50) == 0)) {
      puVar3[0x1e] = 0;
      puVar3[0x1d] = 0;
      puVar3[0x1c] = 0;
      puVar3[0x1b] = 0;
      puVar3[0x19] = 0;
      puVar3[0x18] = 0;
      puVar3[0x17] = 0;
      puVar3[0x16] = 0;
      puVar3[0x14] = 0;
      puVar3[0x13] = 0;
      puVar3[0x12] = 0;
      puVar3[0x11] = 0;
      puVar3[0x1f] = 0x3f800000;
      puVar3[0x1a] = 0x3f800000;
      puVar3[0x15] = 0x3f800000;
      puVar3[0x10] = 0x3f800000;
    }
    else {
      D3DXMatrixInverse(puVar3 + 0x10,0,*(int *)(param_1 + 0x50) + 0x10);
    }
    FUN_00edfcd0(param_1 + 0x3c8);
    FUN_00f26b40(puVar3);
    FUN_00ed4fa0(puVar3,param_1 + 0x3c8,*(undefined4 *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x84));
    iVar4 = FUN_00f510b0(puVar3 + 0x34,0xc,*(undefined4 *)(param_1 + 0x454),param_1 + 0x468);
    if (iVar4 == 0) {
      FUN_009cca90(param_1,&DAT_016db758);
      return;
    }
    iVar4 = FUN_00f510b0(puVar3 + 0x3e,0x10,*(undefined4 *)(param_1 + 0x454),param_1 + 0x570);
    if (iVar4 == 0) {
      FUN_009cca90(param_1,&DAT_016db774);
      return;
    }
    if (*(int *)(param_1 + 0x6e0) == 1) {
      FUN_00e9fe70();
      fVar7 = (float10)FUN_00fdef70();
      fVar1 = (1.0 / (float)fVar7) * *(float *)(param_1 + 0x100) * _DAT_018d7094;
      if (fVar1 <= 1.0) {
        puVar3[0x2c] = 0x3f800000;
        *(float *)(param_1 + 0x6dc) = fVar1;
        fVar2 = _DAT_018d708c;
        if (*(int *)(param_1 + 0x450) == 2) {
          fVar2 = _DAT_018d7090;
        }
        if (fVar1 < fVar2) {
          *(float *)(param_1 + 0x6dc) = fVar2;
        }
      }
      else {
        puVar3[0x2c] = fVar1;
        fVar2 = *(float *)(param_1 + 0x100) * 1.5;
        if (fVar1 <= fVar2) {
          *(undefined4 *)(param_1 + 0x6dc) = 0x3f800000;
        }
        else {
          puVar3[0x2c] = fVar2;
          *(undefined4 *)(param_1 + 0x6dc) = 0x3f800000;
        }
      }
    }
    else {
      puVar3[0x2c] = 0x3f800000;
      *(undefined4 *)(param_1 + 0x6dc) = 0x3f800000;
    }
    uVar5 = FUN_00e9fe70();
    uVar6 = FUN_00e9fe60(uVar5);
    FUN_00edc9e0(puVar3,puVar3,param_1 + 0x3c8,uVar6,uVar5);
  }
  return;
}

// 00F31450  esp14::preTrans  size=340  [class]
undefined4 __thiscall
esp14::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar2 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x450) = 0;
    *(undefined4 *)(param_1 + 0x454) = 0;
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar3 != (undefined4 *)0x0)) {
      psVar1 = (short *)*puVar3;
      if ((short *)((int)psVar1 + 0xfU & 0xfffffff0) != psVar1) {
        uVar4 = FUN_00f59ed0(8);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (psVar1 != (short *)0x0) {
        *(int *)(param_1 + 0x450) = (int)*psVar1;
        *(int *)(param_1 + 0x6e0) = (int)psVar1[1];
      }
    }
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar3 != (undefined4 *)0x0)) {
      puVar3 = (undefined4 *)*puVar3;
      if ((undefined4 *)((int)puVar3 + 0xfU & 0xfffffff0) != puVar3) {
        uVar4 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x458) = *puVar3;
        *(undefined4 *)(param_1 + 0x45c) = puVar3[1];
        *(undefined4 *)(param_1 + 0x460) = puVar3[2];
        *(undefined4 *)(param_1 + 0x464) = puVar3[3];
        *(float *)(param_1 + 0x6e4) = (float)puVar3[4] * 0.1;
      }
    }
    *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + 2;
    if (*(int *)(param_1 + 0x450) < 0x17) {
      if (1 < *(uint *)(param_1 + 0x6e0)) {
        FUN_009cca90(param_1,&DAT_016db714,*(uint *)(param_1 + 0x6e0));
        return 0;
      }
      *(undefined4 *)(param_1 + 0x6dc) = 0x3dcccccd;
      *(undefined4 *)(param_1 + 0x6d8) = 1;
      *(undefined2 *)(param_1 + 0x428) = 0x65;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016db6d8,0x16);
  }
  return 0;
}


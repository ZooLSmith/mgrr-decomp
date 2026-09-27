// src/misc/esp135.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D08A0..009DF670, 5 functions

#include "types.h"

// 009D08A0  esp135::vf04  size=54  [class]
undefined4 __thiscall
esp135::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x428) = 0x7d;
  return 1;
}

// 009D08E0  esp135::vf08  size=70  [class]
void __fastcall esp135::vf08(int param_1)

{
  esp39::vf08();
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(param_1 + 0x454) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(param_1 + 0x458) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x45c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x100);
  return;
}

// 009D4450  esp135::esp135  size=18  [class]
undefined4 * __fastcall esp135::esp135(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009DA7D0  esp135::vf10  size=547  [class]
void __fastcall esp135::vf10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  FUN_00efed20();
  if (0.01 < *(float *)(param_1 + 0x124)) {
    iVar9 = FUN_00e9ff10();
    pfVar11 = (float *)(param_1 + 0x460);
    D3DXVec3TransformNormal(pfVar11,param_1 + 0x450,iVar9);
    *pfVar11 = *(float *)(iVar9 + 0x30) + *pfVar11;
    *(float *)(param_1 + 0x464) = *(float *)(iVar9 + 0x34) + *(float *)(param_1 + 0x464);
    *(float *)(param_1 + 0x468) = *(float *)(iVar9 + 0x38) + *(float *)(param_1 + 0x468);
    puVar10 = (undefined4 *)FUN_00e9feb0();
    *(undefined4 *)(param_1 + 400) = *puVar10;
    *(undefined4 *)(param_1 + 0x194) = puVar10[1];
    *(undefined4 *)(param_1 + 0x198) = puVar10[2];
    *(undefined4 *)(param_1 + 0x19c) = puVar10[3];
    pfVar11 = (float *)FUN_00e9fe70();
    fVar1 = *pfVar11;
    fVar2 = *(float *)(param_1 + 400);
    fVar3 = pfVar11[1];
    fVar4 = *(float *)(param_1 + 0x194);
    fVar5 = pfVar11[2];
    fVar6 = *(float *)(param_1 + 0x198);
    iVar9 = FUN_00e9fe50();
    fVar14 = (float10)(fVar3 - fVar4);
    fVar15 = (float10)(fVar1 - fVar2);
    fVar16 = (float10)(fVar5 - fVar6);
    fVar17 = (float10)fptan((float10)*(float *)(iVar9 + 0x94));
    fVar1 = (float)(fVar17 * SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14));
    iVar9 = FUN_00e9fe50();
    *(float *)(param_1 + 0x100) = *(float *)(iVar9 + 0x90) * fVar1;
    *(float *)(param_1 + 0x104) = fVar1;
    *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x100) * 1.1 * 1.1;
    iVar9 = FUN_00dd7ad0();
    if (DAT_01edd490 != 0) {
      puVar10 = (undefined4 *)cPrimHeap::allocBuffer(0xd0,0x20);
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = cEspDrawWork::vftable;
        puVar10[9] = 0;
        *(undefined1 *)(puVar10 + 4) = 0;
        FUN_00edfcd0(param_1 + 0x3c8);
        FUN_00f26b40(puVar10);
        FUN_00f204b0(puVar10,puVar10,*(undefined4 *)(DAT_01b78870 + 0x1e74),param_1 + 0x3c8,
                     DAT_01b78870);
        sVar7 = *(short *)(param_1 + 0x4e);
        if ((ushort)(sVar7 + 0xdU) < 10) {
          if ((ushort)(sVar7 + 0xdU) < 10) {
            uVar12 = -(int)sVar7 - 4;
          }
          else {
            FUN_00dd5650(&DAT_01659438);
            uVar12 = 0;
          }
          uVar8 = *(uint *)(param_1 + 0x3c);
          uVar13 = uVar12 >> 5;
          uVar12 = 0x80000000 >> ((byte)uVar12 & 0x1f);
          (&DAT_01eddb60)[uVar13 + iVar9] = (&DAT_01eddb60)[uVar13 + iVar9] | uVar12;
          if ((uVar8 >> 0x16 & 1) == 0) {
            (&DAT_01eddb4c)[uVar13 + iVar9] = (&DAT_01eddb4c)[uVar13 + iVar9] & ~uVar12;
          }
          else {
            (&DAT_01eddb4c)[uVar13 + iVar9] = (&DAT_01eddb4c)[uVar13 + iVar9] | uVar12;
          }
          if ((uVar8 >> 7 & 1) != 0) {
            (&DAT_01eddb38)[uVar13 + iVar9] = (&DAT_01eddb38)[uVar13 + iVar9] | uVar12;
            return;
          }
          (&DAT_01eddb38)[uVar13 + iVar9] = (&DAT_01eddb38)[uVar13 + iVar9] & ~uVar12;
        }
      }
    }
  }
  return;
}

// 009DF670  esp135::vf00  size=30  [class]
undefined4 __thiscall esp135::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


// src/misc/esp33.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED05E0..00F35FA0, 5 functions

#include "mgrr.h"
#include "esp33.h"

// 00ED05E0  esp33::esp33  size=18  [class]
undefined4 * __fastcall esp33::esp33(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 00ED0A00  esp33::vf00  size=30  [class]
undefined4 __thiscall esp33::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EF3320  esp33::vf14  size=85  [class]
void __fastcall esp33::vf14(int param_1)

{
  if ((*(int *)(param_1 + 0x458) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  if ((*(int *)(param_1 + 0x4a0) != 0) && (*(int *)(param_1 + 0x4a0) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x4a0),0);
    *(undefined4 *)(param_1 + 0x4a0) = 0;
  }
  return;
}

// 00F1A6E0  esp33::vf08  size=699  [class]
void __fastcall esp33::vf08(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  float *pfVar10;
  float10 fVar11;
  int local_34;
  uint local_30;
  
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
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x460);
  *(float *)(param_1 + 0x460) =
       *(float *)(param_1 + 0x460) + *(float *)(param_1 + 0x468) * *(float *)(param_1 + 0x110);
  *(float *)(param_1 + 0x46c) = *(float *)(param_1 + 0x46c) + 1.0;
  if ((*(uint *)(param_1 + 0x45c) == 0) ||
     (local_30 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x460)),
     local_30 < *(uint *)(param_1 + 0x45c))) {
    iVar6 = FUN_00fdbc60();
    iVar7 = FUN_00fdbc60();
    if ((iVar7 != iVar6) && (iVar6 = *(int *)(param_1 + 0x450) + -1, iVar6 != 0)) {
      iVar7 = iVar6 * 0xc;
      do {
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x4a0) + iVar7);
        *puVar8 = *(undefined4 *)(*(int *)(param_1 + 0x4a0) + -0xc + iVar7);
        iVar7 = iVar7 + -0xc;
        iVar6 = iVar6 + -1;
        puVar8[1] = puVar8[-2];
        puVar8[2] = puVar8[-1];
      } while (iVar6 != 0);
    }
    pfVar10 = *(float **)(param_1 + 0x4a0);
    fVar2 = *(float *)(param_1 + 0x174);
    fVar3 = *(float *)(param_1 + 0x184);
    fVar4 = *(float *)(param_1 + 0x178);
    fVar5 = *(float *)(param_1 + 0x188);
    *pfVar10 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
    pfVar10[1] = fVar2 + fVar3;
    pfVar10[2] = fVar4 + fVar5;
    if ((*(int *)(param_1 + 0x50) != 0) && (uVar9 = 0, *(int *)(param_1 + 0x450) != 0)) {
      local_34 = 0;
      do {
        iVar6 = *(int *)(param_1 + 0x50);
        pfVar10 = (float *)(*(int *)(param_1 + 0x458) + local_34);
        D3DXVec3TransformNormal(pfVar10,*(int *)(param_1 + 0x4a0) + local_34,iVar6 + 0x10);
        local_34 = local_34 + 0xc;
        uVar9 = uVar9 + 1;
        *pfVar10 = *(float *)(iVar6 + 0x40) + *pfVar10;
        pfVar10[1] = *(float *)(iVar6 + 0x44) + pfVar10[1];
        pfVar10[2] = *(float *)(iVar6 + 0x48) + pfVar10[2];
      } while (uVar9 < *(uint *)(param_1 + 0x450));
    }
  }
  pfVar10 = *(float **)(param_1 + 0x458);
  iVar6 = *(int *)(param_1 + 0x450);
  fVar2 = pfVar10[iVar6 * 3 + -2];
  fVar3 = pfVar10[1];
  fVar4 = pfVar10[iVar6 * 3 + -1];
  fVar5 = pfVar10[2];
  *(float *)(param_1 + 0x130) = (pfVar10[iVar6 * 3 + -3] + *pfVar10) * 0.5;
  *(float *)(param_1 + 0x134) = (fVar2 + fVar3) * 0.5;
  *(float *)(param_1 + 0x138) = (fVar4 + fVar5) * 0.5;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  fVar11 = (float10)FUN_00fdef70();
  *(float *)(param_1 + 300) = (float)fVar11;
  FUN_00ed6110();
  return;
}

// 00F35FA0  esp33::preTrans  size=300  [class]
undefined4 __thiscall
esp33::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar8 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar8 != 0) {
    if ((*(int *)(param_1 + 0x50) == 0) || (*(short *)(param_1 + 0x400) != -1)) {
      FUN_009cca90(param_1,&DAT_016dc7e8);
    }
    else {
      iVar8 = FUN_00f12b50();
      if (iVar8 != 0) {
        iVar8 = FUN_00dd29b0(*(int *)(param_1 + 0x450) * 0xc,4,0,0);
        *(int *)(param_1 + 0x4a0) = iVar8;
        if (iVar8 != 0) {
          fVar1 = *(float *)(param_1 + 0x180);
          uVar9 = 0;
          fVar2 = *(float *)(param_1 + 0x170);
          fVar3 = *(float *)(param_1 + 0x174);
          fVar4 = *(float *)(param_1 + 0x184);
          fVar5 = *(float *)(param_1 + 0x178);
          fVar6 = *(float *)(param_1 + 0x188);
          if (*(int *)(param_1 + 0x450) != 0) {
            iVar8 = 0;
            do {
              iVar7 = *(int *)(param_1 + 0x4a0);
              *(float *)(iVar7 + iVar8) = fVar1 + fVar2;
              uVar9 = uVar9 + 1;
              iVar8 = iVar8 + 0xc;
              *(float *)(iVar7 + -8 + iVar8) = fVar3 + fVar4;
              *(float *)(iVar7 + -4 + iVar8) = fVar5 + fVar6;
            } while (uVar9 < *(uint *)(param_1 + 0x450));
          }
          *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
          return 1;
        }
        FUN_009cca90(param_1,&DAT_016dc834);
        return 0;
      }
    }
  }
  return 0;
}


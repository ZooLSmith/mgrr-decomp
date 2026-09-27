// src/misc/esp27.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED0560..00F34FF0, 6 functions

#include "types.h"

// 00ED0560  esp27::esp27  size=18  [class]
undefined4 * __fastcall esp27::esp27(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 00ED0980  esp27::vf00  size=30  [class]
undefined4 __thiscall esp27::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EF18E0  esp27::vf14  size=145  [class]
void __fastcall esp27::vf14(int param_1)

{
  if ((*(int *)(param_1 + 0x458) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  if ((*(int *)(param_1 + 0x4a0) != 0) && (*(int *)(param_1 + 0x4a0) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x4a0),0);
    *(undefined4 *)(param_1 + 0x4a0) = 0;
  }
  if ((*(int *)(param_1 + 0x4a4) != 0) && (*(int *)(param_1 + 0x4a4) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x4a4),0);
    *(undefined4 *)(param_1 + 0x4a4) = 0;
  }
  if ((*(int *)(param_1 + 0x4a8) != 0) && (*(int *)(param_1 + 0x4a8) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x4a8),0);
    *(undefined4 *)(param_1 + 0x4a8) = 0;
  }
  return;
}

// 00EF1980  FUN_00ef1980  size=745  [callgraph]
void __fastcall FUN_00ef1980(int param_1)

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
  int iVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  uint uVar15;
  int iVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  uint local_24;
  
  if (*(uint *)(param_1 + 0x4b8) == 0) {
    uVar13 = *(uint *)(param_1 + 0x450);
    uVar15 = 0;
    if (uVar13 != 0) {
      iVar16 = 0;
      do {
        if ((*(int *)(param_1 + 0x4bc) == 0) && ((uVar15 == 0 || (uVar15 == uVar13 - 1)))) {
          iVar12 = *(int *)(param_1 + 0x4a0);
          iVar10 = *(int *)(param_1 + 0x458);
          *(undefined4 *)(iVar10 + iVar16) = *(undefined4 *)(iVar12 + iVar16);
          *(undefined4 *)(iVar10 + 4 + iVar16) = *(undefined4 *)(iVar12 + 4 + iVar16);
          *(undefined4 *)(iVar10 + 8 + iVar16) = *(undefined4 *)(iVar12 + 8 + iVar16);
        }
        else {
          fVar17 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4ac),
                                         *(undefined4 *)(param_1 + 0x4ac));
          fVar18 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4b0),
                                         *(undefined4 *)(param_1 + 0x4b0));
          fVar19 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4b4),
                                         *(undefined4 *)(param_1 + 0x4b4));
          iVar12 = *(int *)(param_1 + 0x4a0);
          fVar1 = *(float *)(iVar12 + 4 + iVar16);
          fVar2 = *(float *)(iVar12 + 8 + iVar16);
          iVar10 = *(int *)(param_1 + 0x458);
          *(float *)(iVar10 + iVar16) = *(float *)(iVar12 + iVar16) + (float)fVar17;
          *(float *)(iVar10 + 4 + iVar16) = fVar1 + (float)fVar18;
          *(float *)(iVar10 + 8 + iVar16) = fVar2 + (float)fVar19;
        }
        uVar13 = *(uint *)(param_1 + 0x450);
        uVar15 = uVar15 + 1;
        iVar16 = iVar16 + 0xc;
      } while (uVar15 < uVar13);
      return;
    }
  }
  else {
    local_24 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x460));
    if (local_24 % *(uint *)(param_1 + 0x4b8) == 0) {
      iVar16 = FUN_00fdbc60();
      iVar12 = FUN_00fdbc60();
      if (iVar16 != iVar12) {
        FUN_00ed89f0();
      }
    }
    uVar13 = *(uint *)(param_1 + 0x4b8);
    fVar1 = (float)(int)uVar13;
    if ((int)uVar13 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar2 = 0.0;
    if (fVar1 - 0.0 != 0.0) {
      fVar2 = (float)(int)(local_24 % uVar13);
      if ((int)(local_24 % uVar13) < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      fVar2 = (fVar2 - 0.0) / (fVar1 - 0.0);
    }
    uVar13 = *(uint *)(param_1 + 0x450);
    uVar15 = 0;
    if (uVar13 != 0) {
      iVar16 = 0;
      do {
        if ((*(int *)(param_1 + 0x4bc) == 0) && ((uVar15 == 0 || (uVar15 == uVar13 - 1)))) {
          iVar12 = *(int *)(param_1 + 0x4a0);
          iVar10 = *(int *)(param_1 + 0x458);
          *(undefined4 *)(iVar10 + iVar16) = *(undefined4 *)(iVar12 + iVar16);
          *(undefined4 *)(iVar10 + 4 + iVar16) = *(undefined4 *)(iVar12 + 4 + iVar16);
          *(undefined4 *)(iVar10 + 8 + iVar16) = *(undefined4 *)(iVar12 + 8 + iVar16);
        }
        else {
          iVar12 = *(int *)(param_1 + 0x4a8);
          pfVar14 = (float *)(*(int *)(param_1 + 0x4a4) + iVar16);
          fVar1 = *(float *)(iVar12 + 4 + iVar16);
          fVar3 = pfVar14[1];
          fVar4 = pfVar14[1];
          fVar5 = *(float *)(iVar12 + 8 + iVar16);
          fVar6 = pfVar14[2];
          fVar7 = pfVar14[2];
          iVar10 = *(int *)(param_1 + 0x4a0);
          fVar8 = *(float *)(iVar10 + 4 + iVar16);
          fVar9 = *(float *)(iVar10 + 8 + iVar16);
          iVar11 = *(int *)(param_1 + 0x458);
          *(float *)(iVar11 + iVar16) =
               *(float *)(iVar10 + iVar16) +
               (*(float *)(iVar12 + iVar16) - *(float *)(*(int *)(param_1 + 0x4a4) + iVar16)) *
               fVar2 + *pfVar14;
          *(float *)(iVar11 + 4 + iVar16) = fVar8 + (fVar1 - fVar3) * fVar2 + fVar4;
          *(float *)(iVar11 + 8 + iVar16) = fVar9 + (fVar5 - fVar6) * fVar2 + fVar7;
        }
        uVar13 = *(uint *)(param_1 + 0x450);
        uVar15 = uVar15 + 1;
        iVar16 = iVar16 + 0xc;
      } while (uVar15 < uVar13);
    }
  }
  return;
}

// 00F18F60  esp27::vf08  size=1603  [class]
void __fastcall esp27::vf08(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined2 in_FPUControlWord;
  float10 fVar11;
  undefined1 auStack_44 [4];
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_2c;
  longlong local_28;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_44;
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
  local_2c = *(float *)(param_1 + 0x468) * *(float *)(param_1 + 0x110) * 1.001;
  *(undefined4 *)(param_1 + 0x464) = *(undefined4 *)(param_1 + 0x460);
  *(float *)(param_1 + 0x460) = *(float *)(param_1 + 0x460) + local_2c;
  *(float *)(param_1 + 0x46c) = *(float *)(param_1 + 0x46c) + 1.0;
  if (*(uint *)(param_1 + 0x45c) != 0) {
    uVar9 = (uint)local_2c >> 0x10;
    local_2c = (float)CONCAT22((short)uVar9,in_FPUControlWord);
    local_28 = (longlong)ROUND(*(float *)(param_1 + 0x460));
    if (*(uint *)(param_1 + 0x45c) <= (uint)(float)local_28) {
      pfVar5 = *(float **)(param_1 + 0x3b0);
      if (pfVar5 != (float *)0x0) {
        fVar2 = *pfVar5;
        uVar9 = *(uint *)(param_1 + 0x450);
        iVar10 = uVar9 - 1;
        fVar3 = pfVar5[1];
        fVar4 = pfVar5[2];
        if (-1 < iVar10) {
          if (3 < (int)uVar9) {
            uVar9 = uVar9 >> 2;
            iVar8 = iVar10 * 0xc;
            iVar10 = iVar10 + uVar9 * -4;
            do {
              pfVar5 = (float *)(*(int *)(param_1 + 0x4a0) + iVar8);
              *pfVar5 = *(float *)(*(int *)(param_1 + 0x4a0) + iVar8) + fVar2;
              pfVar5[1] = pfVar5[1] + fVar3;
              pfVar5[2] = pfVar5[2] + fVar4;
              pfVar5 = (float *)(iVar8 + -0xc + *(int *)(param_1 + 0x4a0));
              *pfVar5 = *(float *)(iVar8 + -0xc + *(int *)(param_1 + 0x4a0)) + fVar2;
              pfVar5[1] = pfVar5[1] + fVar3;
              pfVar5[2] = pfVar5[2] + fVar4;
              pfVar5 = (float *)(iVar8 + -0x18 + *(int *)(param_1 + 0x4a0));
              *pfVar5 = *(float *)(iVar8 + -0x18 + *(int *)(param_1 + 0x4a0)) + fVar2;
              pfVar5[1] = pfVar5[1] + fVar3;
              pfVar5[2] = pfVar5[2] + fVar4;
              pfVar5 = (float *)(*(int *)(param_1 + 0x4a0) + iVar8 + -0x24);
              uVar9 = uVar9 - 1;
              *pfVar5 = *(float *)(*(int *)(param_1 + 0x4a0) + iVar8 + -0x24) + fVar2;
              pfVar5[1] = pfVar5[1] + fVar3;
              pfVar5[2] = pfVar5[2] + fVar4;
              iVar8 = iVar8 + -0x30;
            } while (uVar9 != 0);
          }
          if (-1 < iVar10) {
            iVar8 = iVar10 * 0xc;
            do {
              pfVar5 = (float *)(*(int *)(param_1 + 0x4a0) + iVar8);
              pfVar6 = (float *)(*(int *)(param_1 + 0x4a0) + iVar8);
              iVar8 = iVar8 + -0xc;
              iVar10 = iVar10 + -1;
              *pfVar6 = *pfVar5 + fVar2;
              pfVar6[1] = pfVar6[1] + fVar3;
              pfVar6[2] = pfVar6[2] + fVar4;
            } while (-1 < iVar10);
          }
        }
      }
      goto LAB_00f19150;
    }
  }
  iVar10 = FUN_00fdbc60();
  iVar8 = FUN_00fdbc60();
  if ((iVar8 != iVar10) && (iVar10 = *(int *)(param_1 + 0x450) + -1, iVar10 != 0)) {
    iVar8 = iVar10 * 0xc;
    do {
      puVar7 = (undefined4 *)(*(int *)(param_1 + 0x4a0) + iVar8);
      *puVar7 = *(undefined4 *)(*(int *)(param_1 + 0x4a0) + -0xc + iVar8);
      iVar8 = iVar8 + -0xc;
      iVar10 = iVar10 + -1;
      puVar7[1] = puVar7[-2];
      puVar7[2] = puVar7[-1];
    } while (iVar10 != 0);
  }
  pfVar5 = *(float **)(param_1 + 0x3b0);
  if (pfVar5 != (float *)0x0) {
    local_40 = *pfVar5;
    uVar9 = *(uint *)(param_1 + 0x450);
    iVar10 = uVar9 - 1;
    local_3c = pfVar5[1];
    local_38 = pfVar5[2];
    if (-1 < iVar10) {
      if (3 < (int)uVar9) {
        uVar9 = uVar9 >> 2;
        iVar8 = iVar10 * 0xc;
        iVar10 = iVar10 + uVar9 * -4;
        do {
          pfVar5 = (float *)(*(int *)(param_1 + 0x4a0) + iVar8);
          *pfVar5 = *(float *)(*(int *)(param_1 + 0x4a0) + iVar8) + local_40;
          pfVar5[1] = pfVar5[1] + local_3c;
          pfVar5[2] = pfVar5[2] + local_38;
          pfVar5 = (float *)(iVar8 + -0xc + *(int *)(param_1 + 0x4a0));
          *pfVar5 = *(float *)(iVar8 + -0xc + *(int *)(param_1 + 0x4a0)) + local_40;
          pfVar5[1] = pfVar5[1] + local_3c;
          pfVar5[2] = pfVar5[2] + local_38;
          pfVar5 = (float *)(iVar8 + -0x18 + *(int *)(param_1 + 0x4a0));
          *pfVar5 = *(float *)(iVar8 + -0x18 + *(int *)(param_1 + 0x4a0)) + local_40;
          pfVar5[1] = pfVar5[1] + local_3c;
          pfVar5[2] = pfVar5[2] + local_38;
          pfVar5 = (float *)(*(int *)(param_1 + 0x4a0) + iVar8 + -0x24);
          uVar9 = uVar9 - 1;
          *pfVar5 = *(float *)(*(int *)(param_1 + 0x4a0) + iVar8 + -0x24) + local_40;
          pfVar5[1] = pfVar5[1] + local_3c;
          pfVar5[2] = pfVar5[2] + local_38;
          iVar8 = iVar8 + -0x30;
        } while (uVar9 != 0);
      }
      if (-1 < iVar10) {
        iVar8 = iVar10 * 0xc;
        do {
          pfVar5 = (float *)(*(int *)(param_1 + 0x4a0) + iVar8);
          pfVar6 = (float *)(*(int *)(param_1 + 0x4a0) + iVar8);
          iVar8 = iVar8 + -0xc;
          iVar10 = iVar10 + -1;
          *pfVar6 = *pfVar5 + local_40;
          pfVar6[1] = pfVar6[1] + local_3c;
          pfVar6[2] = pfVar6[2] + local_38;
        } while (-1 < iVar10);
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0x50);
  pfVar5 = *(float **)(param_1 + 0x4a0);
  if (iVar10 == 0) {
    local_40 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
    local_3c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
    local_38 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  }
  else {
    FUN_00effcf0(&local_40,(float *)(param_1 + 0x180),iVar10,iVar10 + 0x10,
                 *(undefined4 *)(param_1 + 0x84),1);
  }
  *pfVar5 = local_40;
  pfVar5[1] = local_3c;
  pfVar5[2] = local_38;
  if ((*(float *)(param_1 + 0x47c) != 0.0) && (uVar9 = 1, 1 < *(uint *)(param_1 + 0x450))) {
    iVar10 = 0xc;
    do {
      iVar8 = iVar10 + *(int *)(param_1 + 0x4a0);
      local_20 = *(float *)(iVar10 + *(int *)(param_1 + 0x4a0)) - *(float *)(iVar8 + -0xc);
      local_1c = *(float *)(iVar8 + 4) - *(float *)(iVar8 + -8);
      local_18 = *(float *)(iVar8 + 8) - *(float *)(iVar8 + -4);
      local_2c = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
      fVar11 = (float10)FUN_00fdef70();
      local_28 = CONCAT44(local_28._4_4_,(float)fVar11);
      if (*(float *)(param_1 + 0x47c) < (float)fVar11) {
        if (local_2c <= 0.0) {
          FUN_00dd5650(&DAT_0163d0ac);
          local_20 = 0.0;
          local_1c = 1.0;
          local_18 = 0.0;
        }
        D3DXVec3Normalize(&local_20,&local_20);
        fVar2 = *(float *)(param_1 + 0x47c);
        local_28 = CONCAT44(local_28._4_4_,fVar2);
        pfVar5 = (float *)(iVar10 + *(int *)(param_1 + 0x4a0));
        local_20 = fVar2 * local_20;
        local_1c = local_1c * fVar2;
        local_18 = fVar2 * local_18;
        local_40 = pfVar5[-3] + local_20;
        local_3c = pfVar5[-2] + local_1c;
        local_38 = pfVar5[-1] + local_18;
        *pfVar5 = local_40;
        pfVar5[1] = local_3c;
        pfVar5[2] = local_38;
      }
      uVar9 = uVar9 + 1;
      iVar10 = iVar10 + 0xc;
    } while (uVar9 < *(uint *)(param_1 + 0x450));
  }
  FUN_00ef1980();
LAB_00f19150:
  pfVar5 = *(float **)(param_1 + 0x458);
  iVar10 = *(int *)(param_1 + 0x450);
  local_20 = (*pfVar5 + pfVar5[iVar10 * 3 + -3]) * 0.5;
  local_1c = (pfVar5[iVar10 * 3 + -2] + pfVar5[1]) * 0.5;
  local_18 = (pfVar5[iVar10 * 3 + -1] + pfVar5[2]) * 0.5;
  *(float *)(param_1 + 0x130) = local_20;
  *(float *)(param_1 + 0x134) = local_1c;
  *(float *)(param_1 + 0x138) = local_18;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  pfVar5 = *(float **)(param_1 + 0x458);
  iVar10 = *(int *)(param_1 + 0x450);
  local_40 = *pfVar5 - pfVar5[iVar10 * 3 + -3];
  local_3c = pfVar5[1] - pfVar5[iVar10 * 3 + -2];
  local_38 = pfVar5[2] - pfVar5[iVar10 * 3 + -1];
  local_28._0_4_ = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
  fVar11 = (float10)FUN_00fdef70();
  local_28 = CONCAT44(local_28._4_4_,(float)fVar11);
  *(float *)(param_1 + 300) = (float)fVar11;
  FUN_00ed6110();
  __security_check_cookie(local_14 ^ (uint)auStack_44);
  return;
}

// 00F34FF0  esp27::vf04  size=640  [class]
undefined4 __thiscall
esp27::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = cEspModel::vf04(param_2,param_3,param_4);
  if ((iVar3 != 0) && (iVar3 = FUN_00f12b50(), iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x4a0) = 0;
    *(undefined4 *)(param_1 + 0x4a4) = 0;
    *(undefined4 *)(param_1 + 0x4a8) = 0;
    *(undefined4 *)(param_1 + 0x4ac) = 0;
    *(undefined4 *)(param_1 + 0x4b0) = 0;
    *(undefined4 *)(param_1 + 0x4b4) = 0;
    *(undefined4 *)(param_1 + 0x4b8) = 0;
    *(undefined4 *)(param_1 + 0x4bc) = 0;
    iVar3 = FUN_00dd29b0(*(int *)(param_1 + 0x450) * 0xc,4,0,0);
    *(int *)(param_1 + 0x4a0) = iVar3;
    if (iVar3 != 0) {
      FUN_00edfc20(param_1 + 0x3a0);
      FUN_00efb130(param_1 + 0x3a0);
      FUN_00f0db60(&local_20,param_1 + 0x180,*(undefined4 *)(param_1 + 0x50),1);
      uVar7 = 0;
      if (*(int *)(param_1 + 0x450) != 0) {
        iVar3 = 0;
        do {
          iVar1 = *(int *)(param_1 + 0x4a0);
          *(undefined4 *)(iVar1 + iVar3) = local_20;
          uVar7 = uVar7 + 1;
          iVar3 = iVar3 + 0xc;
          *(undefined4 *)(iVar1 + -8 + iVar3) = local_1c;
          *(undefined4 *)(iVar1 + -4 + iVar3) = local_18;
        } while (uVar7 < *(uint *)(param_1 + 0x450));
      }
      if ((*(int *)(param_1 + 0x58) != 0) &&
         (puVar4 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar4 != (undefined4 *)0x0)) {
        pfVar2 = (float *)*puVar4;
        if ((float *)((int)pfVar2 + 0xfU & 0xfffffff0) != pfVar2) {
          uVar5 = FUN_00f59ed0(7);
          FUN_00dd5650(&DAT_016597b4,uVar5);
        }
        if (pfVar2 != (float *)0x0) {
          *(float *)(param_1 + 0x47c) = *pfVar2 * 0.1;
          *(float *)(param_1 + 0x4ac) = pfVar2[1];
          *(float *)(param_1 + 0x4b0) = pfVar2[2];
          *(float *)(param_1 + 0x4b4) = pfVar2[3];
        }
      }
      if ((*(int *)(param_1 + 0x58) != 0) &&
         (puVar6 = (uint *)(*(int *)(param_1 + 0x58) + 0x80), puVar6 != (uint *)0x0)) {
        uVar7 = *puVar6;
        if ((uVar7 + 0xf & 0xfffffff0) != uVar7) {
          uVar5 = FUN_00f59ed0(8);
          FUN_00dd5650(&DAT_016597b4,uVar5);
        }
        if (uVar7 != 0) {
          *(int *)(param_1 + 0x4b8) = (int)*(char *)(uVar7 + 0x10);
          iVar3 = FUN_00dd29b0(*(int *)(param_1 + 0x450) * 0xc,4,0,0);
          *(int *)(param_1 + 0x4a4) = iVar3;
          if (iVar3 == 0) {
            FUN_009cca90(param_1,&DAT_016dc210);
            return 0;
          }
          iVar3 = FUN_00dd29b0(*(int *)(param_1 + 0x450) * 0xc,4,0,0);
          *(int *)(param_1 + 0x4a8) = iVar3;
          if (iVar3 == 0) {
            FUN_009cca90(param_1,&DAT_016dc23c);
            return 0;
          }
          *(int *)(param_1 + 0x4bc) = (int)*(char *)(uVar7 + 0x11);
        }
      }
      FUN_00ed8880();
      if (((*(uint *)(param_1 + 0x38) & 0x8000000) != 0) &&
         ((*(int *)(param_1 + 0x490) != 0 || (*(int *)(param_1 + 0x470) != 0)))) {
        FUN_00ed5150();
      }
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016dc1e0);
  }
  return 0;
}


// src/misc/esp21.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED2D30..00F34820, 6 functions

#include "mgrr.h"
#include "esp21.h"

// 00ED2D30  esp21::esp21  size=18  [class]
undefined4 * __fastcall esp21::esp21(undefined4 *param_1)

{
  FixedSplineLerp<Hw::cVec4>::FixedSplineLerp<Hw::cVec4>();
  *param_1 = vftable;
  return param_1;
}

// 00ED2D60  esp21::vf00  size=30  [class]
undefined4 __thiscall esp21::vf00(undefined4 param_1,byte param_2)

{
  Spline<Hw::cVec4>::Spline<Hw::cVec4>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EF1480  esp21::vf14  size=50  [class]
void __fastcall esp21::vf14(int param_1)

{
  cEspStrip2p::vf14();
  if ((*(int *)(param_1 + 0x594) != 0) && (*(int *)(param_1 + 0x594) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x594),0);
    *(undefined4 *)(param_1 + 0x594) = 0;
  }
  return;
}

// 00F17AE0  esp21::vf08  size=1436  [class]
void __fastcall esp21::vf08(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined2 in_FPUControlWord;
  float10 fVar12;
  undefined1 auStack_44 [4];
  float local_40;
  float local_3c;
  float local_38;
  float local_2c;
  undefined8 local_28;
  float local_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_44;
  piVar2 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar2);
  FUN_00f0b530(piVar2);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar2 = 0;
  }
  else {
    *piVar2 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar2);
  FUN_00efbd40(piVar2);
  if ((*(float *)(param_1 + 0x110) != 1.0) && (0.01 < *(float *)(param_1 + 0x110))) {
    *(undefined4 *)(param_1 + 0x574) = 0;
  }
  if (*(int *)(param_1 + 0x574) == 0) {
    if (*(float *)(param_1 + 0x110) <= 0.01) {
      *(undefined4 *)(param_1 + 0x534) = 2;
    }
    if (*(int *)(param_1 + 0x534) < 1) {
      local_2c = *(float *)(param_1 + 0x530) * *(float *)(param_1 + 0x110);
      goto LAB_00f17bb4;
    }
    *(int *)(param_1 + 0x534) = *(int *)(param_1 + 0x534) + -1;
  }
  else {
    local_2c = *(float *)(param_1 + 0x530) * *(float *)(param_1 + 0x110) * 1.001;
LAB_00f17bb4:
    *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_1 + 0x528);
    *(float *)(param_1 + 0x528) = local_2c + *(float *)(param_1 + 0x528);
  }
  uVar10 = *(uint *)(param_1 + 0x598);
  if (uVar10 != 0) {
    local_2c = (float)CONCAT22(local_2c._2_2_,in_FPUControlWord);
    local_28 = (longlong)ROUND(*(float *)(param_1 + 0x528));
    if (uVar10 <= (uint)(float)local_28) {
      if (*(int *)(param_1 + 0x574) == 0) {
        fVar3 = (float)(int)uVar10;
        if ((int)uVar10 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
        fVar3 = fVar3 - 0.0001;
      }
      else {
        fVar3 = (float)(int)uVar10;
        if ((int)uVar10 < 0) {
          fVar3 = fVar3 + 4.2949673e+09;
        }
      }
      *(float *)(param_1 + 0x528) = fVar3;
      *(float *)(param_1 + 0x52c) = fVar3 - 1.0;
      pfVar6 = *(float **)(param_1 + 0x3b0);
      if (pfVar6 != (float *)0x0) {
        fVar3 = *pfVar6;
        uVar10 = *(uint *)(param_1 + 0x450);
        iVar11 = uVar10 - 1;
        fVar4 = pfVar6[1];
        fVar5 = pfVar6[2];
        if (-1 < iVar11) {
          if (3 < (int)uVar10) {
            uVar10 = uVar10 >> 2;
            iVar9 = iVar11 * 0xc;
            iVar11 = iVar11 + uVar10 * -4;
            do {
              pfVar6 = (float *)(*(int *)(param_1 + 0x594) + iVar9);
              iVar1 = iVar9 + -0x24;
              *pfVar6 = *(float *)(*(int *)(param_1 + 0x594) + iVar9) + fVar3;
              pfVar6[1] = pfVar6[1] + fVar4;
              pfVar6[2] = fVar5 + pfVar6[2];
              pfVar6 = (float *)(*(int *)(param_1 + 0x594) + -0xc + iVar9);
              pfVar7 = (float *)(*(int *)(param_1 + 0x594) + -0xc + iVar9);
              iVar9 = iVar9 + -0x30;
              *pfVar7 = *pfVar6 + fVar3;
              pfVar7[1] = pfVar7[1] + fVar4;
              pfVar7[2] = fVar5 + pfVar7[2];
              pfVar6 = (float *)(*(int *)(param_1 + 0x594) + 0xc + iVar1);
              *pfVar6 = *(float *)(*(int *)(param_1 + 0x594) + 0xc + iVar1) + fVar3;
              pfVar6[1] = pfVar6[1] + fVar4;
              pfVar6[2] = fVar5 + pfVar6[2];
              pfVar6 = (float *)(*(int *)(param_1 + 0x594) + iVar1);
              uVar10 = uVar10 - 1;
              *pfVar6 = *(float *)(*(int *)(param_1 + 0x594) + iVar1) + fVar3;
              pfVar6[1] = pfVar6[1] + fVar4;
              pfVar6[2] = fVar5 + pfVar6[2];
            } while (uVar10 != 0);
          }
          if (-1 < iVar11) {
            iVar9 = iVar11 * 0xc;
            do {
              pfVar6 = (float *)(*(int *)(param_1 + 0x594) + iVar9);
              pfVar7 = (float *)(*(int *)(param_1 + 0x594) + iVar9);
              iVar9 = iVar9 + -0xc;
              iVar11 = iVar11 + -1;
              *pfVar7 = *pfVar6 + fVar3;
              pfVar7[1] = pfVar7[1] + fVar4;
              pfVar7[2] = fVar5 + pfVar7[2];
            } while (-1 < iVar11);
          }
        }
      }
      goto LAB_00f17d7e;
    }
  }
  iVar11 = FUN_00fdbc60();
  iVar9 = FUN_00fdbc60();
  if ((iVar11 != iVar9) && (*(float *)(param_1 + 0x590) + 0.8 < *(float *)(param_1 + 0x528))) {
    iVar11 = *(int *)(param_1 + 0x450) + -1;
    *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_1 + 0x528);
    if (iVar11 != 0) {
      iVar9 = iVar11 * 0xc;
      do {
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x594) + iVar9);
        *puVar8 = *(undefined4 *)(*(int *)(param_1 + 0x594) + -0xc + iVar9);
        iVar9 = iVar9 + -0xc;
        iVar11 = iVar11 + -1;
        puVar8[1] = puVar8[-2];
        puVar8[2] = puVar8[-1];
      } while (iVar11 != 0);
    }
  }
  pfVar6 = *(float **)(param_1 + 0x3b0);
  if (pfVar6 != (float *)0x0) {
    local_40 = *pfVar6;
    uVar10 = *(uint *)(param_1 + 0x450);
    iVar11 = uVar10 - 1;
    local_3c = pfVar6[1];
    local_38 = pfVar6[2];
    if (-1 < iVar11) {
      if (3 < (int)uVar10) {
        uVar10 = uVar10 >> 2;
        iVar9 = iVar11 * 0xc;
        iVar11 = iVar11 + uVar10 * -4;
        do {
          pfVar6 = (float *)(*(int *)(param_1 + 0x594) + iVar9);
          iVar1 = iVar9 + -0x24;
          *pfVar6 = *(float *)(*(int *)(param_1 + 0x594) + iVar9) + local_40;
          pfVar6[1] = local_3c + pfVar6[1];
          pfVar6[2] = local_38 + pfVar6[2];
          pfVar6 = (float *)(*(int *)(param_1 + 0x594) + -0xc + iVar9);
          pfVar7 = (float *)(*(int *)(param_1 + 0x594) + -0xc + iVar9);
          iVar9 = iVar9 + -0x30;
          *pfVar7 = *pfVar6 + local_40;
          pfVar7[1] = local_3c + pfVar7[1];
          pfVar7[2] = local_38 + pfVar7[2];
          pfVar6 = (float *)(*(int *)(param_1 + 0x594) + 0xc + iVar1);
          *pfVar6 = *(float *)(*(int *)(param_1 + 0x594) + 0xc + iVar1) + local_40;
          pfVar6[1] = local_3c + pfVar6[1];
          pfVar6[2] = local_38 + pfVar6[2];
          pfVar6 = (float *)(*(int *)(param_1 + 0x594) + iVar1);
          uVar10 = uVar10 - 1;
          *pfVar6 = *(float *)(*(int *)(param_1 + 0x594) + iVar1) + local_40;
          pfVar6[1] = local_3c + pfVar6[1];
          pfVar6[2] = local_38 + pfVar6[2];
        } while (uVar10 != 0);
      }
      if (-1 < iVar11) {
        iVar9 = iVar11 * 0xc;
        do {
          pfVar6 = (float *)(*(int *)(param_1 + 0x594) + iVar9);
          pfVar7 = (float *)(*(int *)(param_1 + 0x594) + iVar9);
          iVar9 = iVar9 + -0xc;
          iVar11 = iVar11 + -1;
          *pfVar7 = *pfVar6 + local_40;
          pfVar7[1] = local_3c + pfVar7[1];
          pfVar7[2] = local_38 + pfVar7[2];
        } while (-1 < iVar11);
      }
    }
  }
  iVar11 = *(int *)(param_1 + 0x50);
  pfVar6 = *(float **)(param_1 + 0x594);
  if (iVar11 == 0) {
    local_40 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
    local_3c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
    local_38 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  }
  else {
    FUN_00f00870(&local_40,(float *)(param_1 + 0x180),iVar11,iVar11 + 0x10,
                 *(undefined4 *)(param_1 + 0x84),1);
  }
  *pfVar6 = local_40;
  pfVar6[1] = local_3c;
  pfVar6[2] = local_38;
LAB_00f17d7e:
  pfVar6 = *(float **)(param_1 + 0x594);
  iVar11 = *(int *)(param_1 + 0x450);
  local_28._4_4_ = pfVar6[iVar11 * 3 + -2] + pfVar6[1];
  local_20 = pfVar6[iVar11 * 3 + -1] + pfVar6[2];
  *(float *)(param_1 + 0x130) = (*pfVar6 + pfVar6[iVar11 * 3 + -3]) * 0.5;
  *(float *)(param_1 + 0x134) = local_28._4_4_ * 0.5;
  *(float *)(param_1 + 0x138) = local_20 * 0.5;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  pfVar6 = *(float **)(param_1 + 0x594);
  iVar11 = *(int *)(param_1 + 0x450);
  local_40 = *pfVar6 - pfVar6[iVar11 * 3 + -3];
  local_3c = pfVar6[1] - pfVar6[iVar11 * 3 + -2];
  local_38 = pfVar6[2] - pfVar6[iVar11 * 3 + -1];
  local_28._0_4_ = local_38 * local_38 + local_3c * local_3c + local_40 * local_40;
  fVar12 = (float10)FUN_00fdef70();
  local_28 = CONCAT44(local_28._4_4_,(float)fVar12);
  *(float *)(param_1 + 300) = (float)fVar12;
  FUN_00ed7ce0();
  __security_check_cookie(local_14 ^ (uint)auStack_44);
  return;
}

// 00F29990  esp21::addOtTransList  size=1942  [class]
/* WARNING: Removing unreachable block (ram,0x00f29eeb) */
/* WARNING: Removing unreachable block (ram,0x00f29d80) */
/* WARNING: Removing unreachable block (ram,0x00f29cbd) */

void __fastcall esp21::addOtTransList(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  undefined2 in_FPUControlWord;
  float10 fVar9;
  float local_a4;
  undefined4 local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 uStack_3c;
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
  
  local_14 = DAT_018e8764 ^ (uint)&local_a4;
  pfVar5 = (float *)FUN_00e9fe70();
  pfVar6 = (float *)FUN_00e9feb0();
  local_80 = *pfVar6 - *pfVar5;
  local_7c = pfVar6[1] - pfVar5[1];
  local_78 = pfVar6[2] - pfVar5[2];
  local_74 = pfVar6[3] - pfVar5[3];
  local_90 = local_80 * local_80 + local_7c * local_7c + local_78 * local_78;
  if (local_90 < 0.0 == (local_90 == 0.0)) {
    FUN_00ddf460(&local_80,&local_80);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_80 = 0.0;
    local_7c = 1.0;
    local_78 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 0x528);
  iVar8 = *(int *)(param_1 + 0x450) + -2;
  local_2c = 0.0;
  local_28 = 0.0;
  local_24 = 0.0;
  local_90 = (float)iVar8;
  if (iVar8 < 0) {
    local_90 = local_90 + 4.2949673e+09;
  }
  local_90 = 1.0 / local_90;
  local_a0 = (float)CONCAT22((short)((uint)fVar1 >> 0x10),in_FPUControlWord);
  local_40 = (float)(longlong)ROUND(fVar1);
  local_a4 = (float)(int)local_40;
  if ((int)local_40 < 0) {
    local_a4 = local_a4 + 4.2949673e+09;
  }
  local_a4 = fVar1 - local_a4;
  uVar7 = 0;
  _local_40 = CONCAT44((int)((ulonglong)(longlong)ROUND(fVar1) >> 0x20),local_a4 * local_90);
  if (*(int *)(param_1 + 0x450) != 1) {
    iVar8 = 0;
    do {
      pfVar5 = (float *)(*(int *)(param_1 + 0x594) + iVar8);
      local_8c = *(float *)(*(int *)(param_1 + 0x594) + 0xc + iVar8) - *pfVar5;
      local_88 = pfVar5[4] - pfVar5[1];
      local_84 = pfVar5[5] - pfVar5[2];
      local_a0 = local_8c * local_8c + local_88 * local_88 + local_84 * local_84;
      local_20 = local_8c;
      local_1c = local_88;
      local_18 = local_84;
      fVar9 = (float10)FUN_00fdef70();
      local_a4 = (float)fVar9;
      if (local_a4 <= 0.000125) {
        if (((local_8c == 0.0) && (local_88 == 0.0)) && (local_84 == 0.0)) {
          local_2c = 0.0;
          local_28 = 1.0;
          local_24 = 0.0;
        }
        else {
          if (local_a0 <= 0.0) {
            FUN_00dd5650(&DAT_0163d0ac);
            local_20 = 0.0;
            local_1c = 1.0;
            local_18 = 0.0;
          }
          D3DXVec3Normalize(&local_20,&local_20);
          fStack_64 = local_18 * local_7c - local_1c * local_78;
          fStack_60 = local_20 * local_78 - local_80 * local_18;
          fStack_5c = local_80 * local_1c - local_7c * local_20;
          if (((fStack_64 != 0.0) || (fStack_60 != 0.0)) || (fStack_5c != 0.0)) {
            local_a4 = fStack_64 * fStack_64 + fStack_60 * fStack_60 + fStack_5c * fStack_5c;
            local_2c = fStack_64;
            local_28 = fStack_60;
            local_24 = fStack_5c;
            if (local_a4 < 0.0 != (local_a4 == 0.0)) {
              FUN_00dd5650(&DAT_0163d0ac);
              local_2c = 0.0;
              local_28 = 1.0;
              local_24 = 0.0;
            }
            goto LAB_00f29f24;
          }
          local_2c = local_80;
          local_28 = local_7c;
          local_24 = local_78;
        }
      }
      else {
        local_58 = local_7c * local_84 - local_78 * local_88;
        local_54 = local_8c * local_78 - local_80 * local_84;
        local_50 = local_80 * local_88 - local_7c * local_8c;
        if (((local_58 == 0.0) && (local_54 == 0.0)) && (local_50 == 0.0)) {
          local_2c = local_80;
          local_28 = local_7c;
          local_24 = local_78;
        }
        else {
          local_a4 = local_58 * local_58 + local_54 * local_54 + local_50 * local_50;
          local_2c = local_58;
          local_28 = local_54;
          local_24 = local_50;
          if (local_a4 < 0.0 != (local_a4 == 0.0)) {
            FUN_00dd5650(&DAT_0163d0ac);
            local_2c = 0.0;
            local_28 = 1.0;
            local_24 = 0.0;
          }
LAB_00f29f24:
          D3DXVec3Normalize(&local_2c,&local_2c);
        }
      }
      local_a0 = (float)(int)uVar7;
      if ((int)uVar7 < 0) {
        local_a0 = local_a0 + 4.2949673e+09;
      }
      local_a0 = local_a0 * local_90;
      if (uVar7 != 0) {
        local_a0 = local_a0 + local_40;
      }
      iVar3 = *(int *)(param_1 + 0x594);
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 0xc;
      local_a4 = (1.0 - local_a0) * *(float *)(param_1 + 0x100) +
                 *(float *)(param_1 + 0x104) * local_a0;
      local_4c = local_a4 * local_2c;
      local_48 = local_a4 * local_28;
      local_44 = local_a4 * local_24;
      local_38 = local_4c + *(float *)(iVar3 + -0xc + iVar8);
      local_34 = local_48 + *(float *)(iVar3 + -8 + iVar8);
      iVar4 = *(int *)(param_1 + 0x45c);
      local_30 = local_44 + *(float *)(iVar3 + -4 + iVar8);
      *(float *)(iVar4 + -0xc + iVar8) = local_38;
      *(float *)(iVar4 + -8 + iVar8) = local_34;
      *(float *)(iVar4 + -4 + iVar8) = local_30;
      iVar3 = *(int *)(param_1 + 0x594);
      local_9c = *(float *)(iVar3 + -0xc + iVar8) - local_4c;
      local_98 = *(float *)(iVar3 + -8 + iVar8) - local_48;
      iVar4 = *(int *)(param_1 + 0x460);
      local_94 = *(float *)(iVar3 + -4 + iVar8) - local_44;
      *(float *)(iVar4 + -0xc + iVar8) = local_9c;
      *(float *)(iVar4 + -8 + iVar8) = local_98;
      *(float *)(iVar4 + -4 + iVar8) = local_94;
    } while (uVar7 < *(int *)(param_1 + 0x450) - 1U);
  }
  iVar8 = *(int *)(param_1 + 0x594) + -0xc + *(int *)(param_1 + 0x450) * 0xc;
  fVar1 = *(float *)(iVar8 + 4);
  fVar2 = *(float *)(iVar8 + 8);
  pfVar5 = (float *)(*(int *)(param_1 + 0x45c) + -0xc + *(int *)(param_1 + 0x450) * 0xc);
  *pfVar5 = *(float *)(*(int *)(param_1 + 0x594) + -0xc + *(int *)(param_1 + 0x450) * 0xc) +
            local_4c;
  pfVar5[1] = fVar1 + local_48;
  pfVar5[2] = fVar2 + local_44;
  iVar8 = *(int *)(param_1 + 0x594) + -0xc + *(int *)(param_1 + 0x450) * 0xc;
  local_9c = *(float *)(*(int *)(param_1 + 0x594) + -0xc + *(int *)(param_1 + 0x450) * 0xc) -
             local_4c;
  local_98 = *(float *)(iVar8 + 4) - local_48;
  local_94 = *(float *)(iVar8 + 8) - local_44;
  pfVar5 = (float *)(*(int *)(param_1 + 0x460) + -0xc + *(int *)(param_1 + 0x450) * 0xc);
  *pfVar5 = local_9c;
  pfVar5[1] = local_98;
  pfVar5[2] = local_94;
  cEspStrip2p::addOtTransList();
  __security_check_cookie(local_14 ^ (uint)&local_a4);
  return;
}

// 00F34820  esp21::preTrans  size=843  [class]
/* WARNING: Removing unreachable block (ram,0x00f349ce) */
/* WARNING: Removing unreachable block (ram,0x00f34916) */
/* WARNING: Removing unreachable block (ram,0x00f3497c) */
/* WARNING: Removing unreachable block (ram,0x00f34a24) */

undefined4 __thiscall esp21::preTrans(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((*(int *)(param_2 + 4) != 0) &&
     (puVar2 = (uint *)(*(int *)(param_2 + 4) + 0x30), puVar2 != (uint *)0x0)) {
    uVar5 = *puVar2;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar3 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (uVar5 != 0) {
      if (0 < *(short *)(uVar5 + 0x2c)) {
        FUN_009cca90(param_1,&DAT_016dbf08);
        return 0;
      }
      iVar4 = cEspStrip2p::preTrans(param_2,param_3,param_4);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = FUN_009d4ac0();
      if (iVar4 != 0) {
        *(float *)(param_1 + 0x580) = *(float *)(iVar4 + 4) * 0.001;
        *(float *)(param_1 + 0x584) = *(float *)(iVar4 + 8) * 0.001;
        *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(iVar4 + 0xc);
        *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(iVar4 + 0x10);
        uVar5 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar5;
        *(float *)(param_1 + 0x578) =
             (1.0 - (float)(uVar5 >> 8) * 5.960465e-08 * 2.0) * *(float *)(iVar4 + 0x14) +
             *(float *)(param_1 + 0x578);
        uVar5 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar5;
        *(float *)(param_1 + 0x57c) =
             (1.0 - (float)(uVar5 >> 8) * 5.960465e-08 * 2.0) * *(float *)(iVar4 + 0x18) +
             *(float *)(param_1 + 0x57c);
        uVar5 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar5;
        *(float *)(param_1 + 0x580) =
             *(float *)(iVar4 + 0x1c) * 0.001 * (1.0 - (float)(uVar5 >> 8) * 5.960465e-08 * 2.0) +
             *(float *)(param_1 + 0x580);
        uVar5 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar5;
        *(float *)(param_1 + 0x584) =
             *(float *)(iVar4 + 0x20) * 0.001 * (1.0 - (float)(uVar5 >> 8) * 5.960465e-08 * 2.0) +
             *(float *)(param_1 + 0x584);
      }
      iVar4 = FUN_009d4a80();
      if (iVar4 != 0) {
        *(int *)(param_1 + 0x598) = (int)*(short *)(iVar4 + 6);
        *(int *)(param_1 + 0x588) = (int)*(char *)(iVar4 + 0x11);
      }
      iVar4 = FUN_00dd29b0(*(int *)(param_1 + 0x450) * 0xc,4,0,0);
      *(int *)(param_1 + 0x594) = iVar4;
      if (iVar4 != 0) {
        FUN_00edfc20(param_1 + 0x3a0);
        FUN_00efb130(param_1 + 0x3a0);
        FUN_00f0dcb0(&local_20,param_1 + 0x180,*(undefined4 *)(param_1 + 0x50),1);
        uVar5 = 0;
        if (*(int *)(param_1 + 0x450) != 0) {
          iVar4 = 0;
          do {
            iVar1 = *(int *)(param_1 + 0x594);
            *(undefined4 *)(iVar1 + iVar4) = local_20;
            uVar5 = uVar5 + 1;
            iVar4 = iVar4 + 0xc;
            *(undefined4 *)(iVar1 + -8 + iVar4) = local_1c;
            *(undefined4 *)(iVar1 + -4 + iVar4) = local_18;
          } while (uVar5 < *(uint *)(param_1 + 0x450));
        }
        *(undefined4 *)(param_1 + 0x590) = 0xbf800000;
        *(undefined4 *)(param_1 + 0x574) = 1;
        if ((*(int *)(param_1 + 0x588) != 0) && ((*(uint *)(param_1 + 0x38) & 0x8000000) != 0)) {
          FUN_00ed5150();
        }
        return 1;
      }
      FUN_009cca90(param_1,&DAT_016dbf38);
      cEspStrip2p::vf14();
      return 0;
    }
  }
  FUN_009cca90(param_1,&DAT_016dbee8);
  return 0;
}


// src/unsorted/unit_00A45590.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A45590..00A45A50, 3 functions

#include "types.h"

// 00A45590  FUN_00a45590  size=2191  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a45590(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_EBX;
  uint uVar7;
  undefined4 unaff_EDI;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  undefined4 uVar14;
  float *pfVar15;
  float fVar16;
  undefined8 uVar17;
  undefined4 local_8;
  int iStack_4;
  
  fVar16 = *(float *)(param_1 + 8) + 0.01;
  *(float *)(param_1 + 8) = fVar16;
  if (1.0 < fVar16) {
    *(float *)(param_1 + 8) = fVar16 - 1.0;
  }
  iVar4 = FUN_00a4d610();
  if (((iVar4 != -1) && (iVar4 != *(int *)(param_1 + 0x35e4))) &&
     (iVar5 = FUN_00e6b900(), iVar5 != 3)) {
    *(int *)(param_1 + 0x35e4) = iVar4;
  }
  if (DAT_01be8e44 < 2) {
    return;
  }
  if (*(int *)(param_1 + 0x360c) != 0) {
    fVar11 = (float10)FUN_00e773a0(param_1 + 0x3610);
    *(uint *)(param_1 + 0x361c) = (uint)((float10)0 != fVar11);
    _DAT_01be7544 = (float)fVar11;
    iVar4 = FUN_00e77370();
    iStack_4 = *(int *)(param_1 + 0x17c);
    if (iStack_4 != *(int *)(param_1 + 0x180)) {
      do {
        if (*(int *)(iStack_4 + 8) == iVar4) goto LAB_00a43a0c;
        iStack_4 = *(int *)(iStack_4 + 0x1e04);
      } while (iStack_4 != *(int *)(param_1 + 0x180));
    }
    iStack_4 = 0;
LAB_00a43a0c:
    iVar5 = *(int *)(param_1 + 0xf0);
    uVar17 = CONCAT44(unaff_EBX,unaff_EDI);
    iVar4 = param_1 + 0x200;
    iVar3 = iVar4;
    if (iVar5 != *(int *)(param_1 + 0xf4)) {
      do {
        iVar3 = iVar4;
        if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 0x35fc)) {
          iVar3 = iVar5;
          if (*(int *)(iVar5 + 8) == *(int *)(param_1 + 0x3600)) break;
          iVar3 = iVar4;
          if (*(int *)(iVar5 + 8) == 0) {
            iVar3 = iVar5;
          }
        }
        iVar5 = *(int *)(iVar5 + 0x1e04);
        iVar4 = iVar3;
      } while (iVar5 != *(int *)(param_1 + 0xf4));
    }
    fVar16 = *(float *)(param_1 + 0x363c);
    if ((iVar3 != 0) && (iStack_4 != 0)) {
      _DAT_01bdfcc0 = 0x3f800000;
      iVar4 = iStack_4;
      if (NAN(fVar16) || 1.0 < fVar16 == (fVar16 == 1.0)) {
        iVar4 = iVar3;
      }
      _DAT_01bdfcc4 = fVar16;
      FUN_00a36590(iVar4);
      _DAT_01bddebc = iStack_4;
      _DAT_01bddeb8 = iVar3;
      cLightApplyScale::cLightApplyScale_2();
      FUN_00a1fcc0();
    }
    iVar5 = FUN_00e77370(param_1 + 0x3610,uVar17);
    iVar4 = *(int *)(param_1 + 0x198);
    if (iVar4 != *(int *)(param_1 + 0x19c)) {
      do {
        if (*(int *)(iVar4 + 0x84) == iVar5) goto LAB_00a43aee;
        iVar4 = *(int *)(iVar4 + 0xa24);
      } while (iVar4 != *(int *)(param_1 + 0x19c));
    }
    iVar4 = 0;
LAB_00a43aee:
    uVar6 = *(undefined4 *)(param_1 + 0x363c);
    uVar2 = FUN_00a33220(*(undefined4 *)(param_1 + 0x35fc),*(undefined4 *)(param_1 + 0x3600));
    FUN_00eb5cf0(uVar2,iVar4,uVar6);
    iVar4 = FUN_00e6b900();
    if (iVar4 == 3) {
      iVar5 = FUN_00e77370(param_1 + 0x3610);
      iVar4 = *(int *)(param_1 + 0x1b4);
      if (iVar4 != *(int *)(param_1 + 0x1b8)) {
        do {
          if (*(int *)(iVar4 + 4) == iVar5) goto LAB_00a43b55;
          iVar4 = *(int *)(iVar4 + 0x88);
        } while (iVar4 != *(int *)(param_1 + 0x1b8));
      }
      iVar4 = 0;
LAB_00a43b55:
      iVar3 = FUN_00e77370(param_1 + 0x3610);
      iVar5 = *(int *)(param_1 + 0x1b4);
      if (iVar5 != *(int *)(param_1 + 0x1b8)) {
        do {
          if (*(int *)(iVar5 + 4) == iVar3) goto LAB_00a43b87;
          iVar5 = *(int *)(iVar5 + 0x88);
        } while (iVar5 != *(int *)(param_1 + 0x1b8));
      }
      iVar5 = 0;
LAB_00a43b87:
      uVar6 = *(undefined4 *)(param_1 + 0x363c);
    }
    else {
      iVar5 = FUN_00e77370(param_1 + 0x3610);
      iVar4 = *(int *)(param_1 + 0x1b4);
      if (iVar4 != *(int *)(param_1 + 0x1b8)) {
        do {
          if (*(int *)(iVar4 + 4) == iVar5) goto LAB_00a43bc5;
          iVar4 = *(int *)(iVar4 + 0x88);
        } while (iVar4 != *(int *)(param_1 + 0x1b8));
      }
      iVar4 = 0;
LAB_00a43bc5:
      uVar6 = *(undefined4 *)(param_1 + 0x363c);
      iVar5 = FUN_00a33270(*(undefined4 *)(param_1 + 0x35fc),*(undefined4 *)(param_1 + 0x3600));
    }
    FUN_00eb0300(iVar5,iVar4,uVar6);
    iVar4 = FUN_00e77370(param_1 + 0x3610);
    iStack_4 = *(int *)(param_1 + 0x1d0);
    if (iStack_4 != *(int *)(param_1 + 0x1d4)) {
      do {
        if (*(int *)(iStack_4 + 8) == iVar4) goto LAB_00a43c2c;
        iStack_4 = *(int *)(iStack_4 + 0x4c);
      } while (iStack_4 != *(int *)(param_1 + 0x1d4));
    }
    iStack_4 = 0;
LAB_00a43c2c:
    iVar5 = *(int *)(param_1 + 0x144);
    iVar4 = param_1 + 0x2aa4;
    iVar3 = iVar4;
    if (iVar5 != *(int *)(param_1 + 0x148)) {
      do {
        iVar4 = iVar3;
        if (*(int *)(iVar5 + 4) == *(int *)(param_1 + 0x35fc)) {
          iVar4 = iVar5;
          if (*(int *)(iVar5 + 8) == *(int *)(param_1 + 0x3600)) break;
          iVar4 = iVar3;
          if (*(int *)(iVar5 + 8) == 0) {
            iVar4 = iVar5;
          }
        }
        iVar5 = *(int *)(iVar5 + 0x4c);
        iVar3 = iVar4;
      } while (iVar5 != *(int *)(param_1 + 0x148));
    }
    FUN_00a28c40(iVar4,iStack_4,*(undefined4 *)(param_1 + 0x363c));
    iVar5 = FUN_00e77370(param_1 + 0x3610);
    iVar4 = *(int *)(param_1 + 0x1ec);
    if (iVar4 != *(int *)(param_1 + 0x1f0)) {
      do {
        if (*(int *)(iVar4 + 8) == iVar5) break;
        iVar4 = *(int *)(iVar4 + 0xd4);
      } while (iVar4 != *(int *)(param_1 + 0x1f0));
    }
    FUN_00eb1fb0();
    iVar5 = FUN_00e77370();
    iVar4 = *(int *)(param_1 + 0x1ec);
    if (iVar4 != *(int *)(param_1 + 0x1f0)) {
      do {
        if (*(int *)(iVar4 + 8) == iVar5) {
          FUN_00a28680();
          if (DAT_018d1fdc == 0) {
            fVar12 = (float10)_DAT_018d1f90 * (float10)0.017453292;
            fVar11 = (float10)0.017453292 * (float10)_DAT_018d1f94;
            fVar9 = (float10)fsin(fVar12);
            fVar10 = (float10)fsin(fVar11);
            _DAT_018d1f90 = (float)(fVar10 * fVar9);
            fVar11 = (float10)fcos(fVar11);
            _DAT_018d1f98 = (float)(fVar11 * fVar9);
            fVar11 = (float10)fcos(fVar12);
            _DAT_018d1f94 = (float)fVar11;
          }
          else {
            iVar4 = (uint)DAT_01b84910 * 0xc;
            _DAT_018d1f90 = *(float *)(&DAT_01b85bb0 + iVar4);
            _DAT_018d1f94 = *(float *)(&DAT_01b85bb4 + iVar4);
            _DAT_018d1f98 = *(float *)(&DAT_01b85bb8 + iVar4);
            _DAT_018d1f9c = 0;
          }
          break;
        }
        iVar4 = *(int *)(iVar4 + 0xd4);
      } while (iVar4 != *(int *)(param_1 + 0x1f0));
    }
    *(undefined4 *)(param_1 + 0x35f4) = DAT_01b84368;
    _DAT_018e84c0 = _DAT_01b84678;
    _DAT_018e84c4 = _DAT_01b84678;
    _DAT_018e84c8 = _DAT_01b8467c;
    _DAT_018e84cc = _DAT_01b8467c;
    _DAT_0189f748 = (uint)(*(int *)(param_1 + 0x35f4) == 0);
    iVar4 = FUN_00e6b900();
    if (iVar4 == 3) {
      _DAT_01bea268 = _DAT_01b84670;
      _DAT_01bea26c = _DAT_01b84674;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x3608) = 0;
  fVar16 = 0.0;
  *(undefined4 *)(param_1 + 0x3604) = *(undefined4 *)(param_1 + 0x35e4);
  *(undefined4 *)(param_1 + 0x3600) = 0;
  *(undefined4 *)(param_1 + 0x35fc) = *(undefined4 *)(param_1 + 0x35e4);
  *(undefined4 *)(param_1 + 0x35f0) = 0;
  _DAT_0189f748 = 1;
  bVar1 = false;
  uVar17 = 0;
  iVar4 = 0;
  if ((DAT_01be8e54 == 0) ||
     (pfVar8 = *(float **)(param_1 + 0xd4), pfVar8 == *(float **)(param_1 + 0xd8))) {
LAB_00a457c7:
    fVar16 = 60.0;
  }
  else {
    do {
      uVar7 = 0;
      pfVar15 = pfVar8 + 0x14;
      do {
        if (*pfVar15 == 0.0) break;
        iVar5 = FUN_00d900c0(*pfVar15,DAT_01be8e54 + 0x40);
        if ((iVar5 != 0) && (((uint)pfVar8[10] & 0xff000000) == 0)) {
          if (pfVar8[0xb] == 1.4013e-45) {
            if (iVar4 == 0) {
              local_8 = (undefined4)(longlong)ROUND(*pfVar8);
              *(undefined4 *)(param_1 + 0x3600) = local_8;
              uVar6 = FUN_00fdbc60();
              *(undefined4 *)(param_1 + 0x35fc) = uVar6;
              fVar16 = pfVar8[1] * 30.0;
              iVar4 = 1;
              bVar1 = true;
            }
          }
          else if ((int)uVar17 == 0) {
            *(int *)(param_1 + 0x3608) = (int)(longlong)ROUND(pfVar8[4]);
            uVar6 = FUN_00fdbc60();
            *(undefined4 *)(param_1 + 0x3604) = uVar6;
            uVar17 = 1;
          }
          _DAT_0189f748 = (uint)((pfVar8[3] != 0.0) == 0);
          *(uint *)(param_1 + 0x35f0) = (uint)(pfVar8[3] != 0.0);
          break;
        }
        pfVar15 = pfVar15 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x20);
      pfVar8 = (float *)pfVar8[0x35];
    } while (pfVar8 != *(float **)(param_1 + 0xd8));
    if (!bVar1) goto LAB_00a457c7;
  }
  *(undefined4 *)(param_1 + 0x35ec) = 0;
  if ((((DAT_01bea084 & 0x80000) == 0) || (iVar4 = FUN_00932720(), iVar4 != 0x340)) ||
     (iVar4 = FUN_00d45a70(&DAT_0166187c), iVar4 != 0)) {
    if (*(int *)(param_1 + 0x3628) == 0) goto LAB_00a45850;
    fVar16 = *(float *)(param_1 + 0x3630);
    *(undefined4 *)(param_1 + 0x35fc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3600) = *(undefined4 *)(param_1 + 0x362c);
  }
  else {
    fVar16 = 10.0;
    *(undefined4 *)(param_1 + 0x35fc) = 0x300;
    *(undefined4 *)(param_1 + 0x3600) = 0x10;
  }
  *(undefined4 *)(param_1 + 0x35ec) = 1;
LAB_00a45850:
  if (-1 < *(int *)(param_1 + 0x3640)) {
    fVar16 = *(float *)(param_1 + 0x3644);
    *(int *)(param_1 + 0x3600) = *(int *)(param_1 + 0x3640);
  }
  uVar6 = *(undefined4 *)(param_1 + 0x35ec);
  fVar13 = fVar16;
  uVar2 = FUN_00a331d0(*(undefined4 *)(param_1 + 0x35fc),*(undefined4 *)(param_1 + 0x3600));
  FUN_00a424b0(uVar2,fVar16,uVar6);
  uVar6 = *(undefined4 *)(param_1 + 0x35ec);
  uVar14 = 0xbf800000;
  fVar16 = fVar13;
  uVar2 = FUN_00a33220(*(undefined4 *)(param_1 + 0x35fc),*(undefined4 *)(param_1 + 0x3600));
  FUN_00eb5c50(uVar2,fVar13,uVar6,uVar14);
  uVar6 = FUN_00a33270(*(undefined4 *)(param_1 + 0x35fc),*(undefined4 *)(param_1 + 0x3600));
  FUN_00eb0240(uVar6,fVar16);
  uVar6 = *(undefined4 *)(param_1 + 0x35ec);
  uVar2 = FUN_00fdbc60(uVar6);
  uVar14 = FUN_00a332c0(*(undefined4 *)(param_1 + 0x35fc),*(undefined4 *)(param_1 + 0x3600));
  FUN_00a33cf0(uVar14,uVar2,uVar6);
  uVar6 = FUN_00a33310(*(undefined4 *)(param_1 + 0x35fc),*(undefined4 *)(param_1 + 0x3600));
  FUN_00eb1fb0(uVar6);
  iVar4 = FUN_00a33310(*(undefined4 *)(param_1 + 0x35fc),*(undefined4 *)(param_1 + 0x3600));
  if (iVar4 != 0) {
    FUN_00a28680(iVar4);
    if (DAT_018d1fdc != 0) {
      iVar4 = (uint)DAT_01b84910 * 0xc;
      _DAT_018d1f90 = (float)*(undefined4 *)(&DAT_01b85bb0 + iVar4);
      _DAT_018d1f94 = (float)*(undefined4 *)(&DAT_01b85bb4 + iVar4);
      _DAT_018d1f98 = (float)*(undefined4 *)(&DAT_01b85bb8 + iVar4);
      _DAT_018d1f9c = 0;
      return;
    }
    fVar12 = (float10)_DAT_018d1f90 * (float10)0.017453292;
    fVar11 = (float10)0.017453292 * (float10)_DAT_018d1f94;
    fVar9 = (float10)fsin(fVar12);
    fVar10 = (float10)fsin(fVar11);
    _DAT_018d1f90 = (float)(fVar10 * fVar9);
    fVar11 = (float10)fcos(fVar11);
    _DAT_018d1f98 = (float)(fVar11 * fVar9);
    fVar11 = (float10)fcos(fVar12);
    _DAT_018d1f94 = (float)fVar11;
  }
  return;
}

// 00A45A00  FUN_00a45a00  size=80  [run]
void __thiscall FUN_00a45a00(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x360c) == 0) {
    FUN_00a43860();
    *(undefined4 *)(param_1 + 0x360c) = 1;
    *(undefined4 *)(param_1 + 0x3610) = *param_2;
    *(undefined4 *)(param_1 + 0x3614) = param_2[1];
    *(undefined4 *)(param_1 + 0x3618) = param_2[2];
    FUN_00a2d740();
    return;
  }
  return;
}

// 00A45A50  FUN_00a45a50  size=2465  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00a45a50(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  void *_Dst;
  float10 fVar17;
  float *pfVar18;
  int local_10c;
  undefined *local_108;
  undefined4 *local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4 [3];
  int local_e8;
  float local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  undefined4 local_d0 [4];
  undefined1 auStack_c0 [12];
  undefined4 auStack_b4 [16];
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [24];
  undefined4 local_50 [19];
  
  uVar8 = _DAT_01be7560 & 1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  bVar9 = true;
  if (uVar8 == 0) {
    _DAT_01be7560 = _DAT_01be7560 | 1;
    _DAT_01be7550 = 0;
    _DAT_01be7554 = 0x3f800000;
    _DAT_01be7558 = 0;
  }
  local_10c = *(undefined4 *)(param_1 + 0x20);
  iVar11 = FUN_00e6b900();
  if (iVar11 != 3) {
    local_10c = *(undefined4 *)(param_1 + 0x18);
  }
  fVar4 = 0.0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if ((char)DAT_01bea084 < '\0') {
    if (DAT_01be7548 != 1) {
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    DAT_01be7548 = 1;
  }
  else if ((DAT_01bea084 & 0x40) == 0) {
    if (DAT_01be7548 != 0) {
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    DAT_01be7548 = 0;
  }
  else {
    if (DAT_01be7548 != 2) {
      *(undefined4 *)(param_1 + 0x114) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    DAT_01be7548 = 2;
  }
  if ((((DAT_01be5524 == 0) && (DAT_01be5520 == 0)) && (DAT_01be5528 == 0)) && (DAT_01b84368 == 0))
  {
    bVar9 = false;
  }
  *(uint *)(param_1 + 0x94) = (uint)!bVar9;
  if (!bVar9 == 0) {
    if ('\0' < DAT_01be1f33) {
      local_e8 = param_1 + 0x240;
      local_10c = param_1 + 0x120;
      local_104 = (undefined4 *)(param_1 + 0xe84);
      local_108 = (undefined *)0x0;
      do {
        iVar11 = (uint)(byte)(&DAT_01be1f34)[(int)local_108] * 0xb0;
        pfVar1 = (float *)(param_1 + 0x60);
        *pfVar1 = *(float *)(&DAT_01bb1e00 + iVar11);
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(&DAT_01bb1e04 + iVar11);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(&DAT_01bb1e08 + iVar11);
        *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(&DAT_01bb1e0c + iVar11);
        fVar4 = *(float *)(&DAT_01bb1e44 + iVar11);
        fVar2 = *(float *)(&DAT_01bb1e48 + iVar11);
        *(float *)(param_1 + 0x70) = *(float *)(&DAT_01bb1e40 + iVar11) * -1.0;
        *(float *)(param_1 + 0x74) = fVar4 * -1.0;
        *(float *)(param_1 + 0x78) = fVar2 * -1.0;
        *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
        *(undefined4 *)(param_1 + 0x88) = 0x3dcccccd;
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(&DAT_01bb1e38 + iVar11);
        fVar17 = (float10)FUN_00fdc4e0();
        local_e4 = (float)(fVar17 + fVar17);
        if (((*(float *)(param_1 + 0x70) == 0.0) && (*(float *)(param_1 + 0x74) == 0.0)) &&
           (*(float *)(param_1 + 0x78) == 0.0)) {
          local_100 = *pfVar1;
          local_fc = *(float *)(param_1 + 100) - 10.0;
          local_f8 = *(float *)(param_1 + 0x68);
          local_f4[0] = *(float *)(param_1 + 0x6c);
        }
        else {
          local_100 = *(float *)(param_1 + 0x70) * 10.0 + *pfVar1;
          local_fc = *(float *)(param_1 + 100) + *(float *)(param_1 + 0x74) * 10.0;
          local_f8 = *(float *)(param_1 + 0x78) * 10.0 + *(float *)(param_1 + 0x68);
          local_f4[0] = *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x7c) * 10.0;
        }
        pfVar18 = (float *)(param_1 + 0xa0);
        local_d8 = *(float *)(param_1 + 0x78) * -1000.0;
        *pfVar18 = local_100 + *(float *)(param_1 + 0x70) * -1000.0;
        *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0x74) * -1000.0 + local_fc;
        *(float *)(param_1 + 0xa8) = local_f8 + local_d8;
        *(float *)(param_1 + 0xac) = local_f4[0] + *(float *)(param_1 + 0x7c) * -1000.0;
        iVar15 = param_1 + 0xb0;
        FUN_00c12740(0);
        FUN_00d9fa80(iVar15,pfVar18);
        thunk_FUN_00de01a0(local_d0,pfVar1,&local_100,&DAT_01be7550);
        *local_104 = *(undefined4 *)(&DAT_01bb1e38 + iVar11);
        puVar12 = local_d0;
        puVar16 = (undefined4 *)(local_10c + 0xc60);
        for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar16 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar16 = puVar16 + 1;
        }
        FUN_00ddccc0(local_50,local_e4,0x3f800000,*(undefined4 *)(param_1 + 0x88),
                     *(undefined4 *)(param_1 + 0x8c),0,0);
        D3DXMatrixMultiply(local_10c,local_d0,local_50);
        iVar11 = local_e8;
        FUN_00de5560(local_e4,*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),1,1);
        FUN_00de6460(param_1 + 0x60,&local_100,&DAT_01be7550);
        local_104 = local_104 + 1;
        local_108 = (undefined *)((int)local_108 + 1);
        local_10c = local_10c + 0x40;
        local_e8 = iVar11 + 0x80;
      } while ((int)local_108 < (int)DAT_01be1f33);
      iVar11 = (int)DAT_01be1f33;
      if (iVar11 < 4) {
        _Dst = (void *)(iVar11 * 0x40 + 0x120 + param_1);
        iVar11 = 4 - iVar11;
        do {
          FID_conflict__memcpy(_Dst,(void *)(param_1 + 0x120),0x40);
          _Dst = (void *)((int)_Dst + 0x40);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
  }
  else {
    local_108 = &DAT_01bea1d0;
    if (DAT_01beb8c0 != (undefined *)0x0) {
      local_108 = DAT_01beb8c0;
    }
    iVar11 = (uint)DAT_01b84910 * 0xc;
    fVar2 = *(float *)(&DAT_01b85bb4 + iVar11);
    fVar3 = *(float *)(&DAT_01b85bb8 + iVar11);
    *(float *)(param_1 + 0x70) = *(float *)(&DAT_01b85bb0 + iVar11) * -1.0;
    *(float *)(param_1 + 0x74) = fVar2 * -1.0;
    *(float *)(param_1 + 0x78) = fVar3 * -1.0;
    *(undefined4 *)(param_1 + 0x7c) = 0xbf800000;
    fVar2 = _DAT_01b85c04 * -1.0;
    fVar3 = _DAT_01b85c08 * -1.0;
    fVar10 = _DAT_01b85c0c * -1.0;
    if ((DAT_01bea084 & 0xc0) != 0) {
      fVar4 = -50.0;
    }
    pfVar1 = (float *)(param_1 + 0x60);
    fVar4 = *(float *)(param_1 + 0x10) + fVar4;
    fVar5 = *(float *)(param_1 + 0x70) * fVar4;
    fVar7 = fVar4 * *(float *)(param_1 + 0x74);
    fVar6 = fVar4 * *(float *)(param_1 + 0x78);
    fVar4 = fVar4 * *(float *)(param_1 + 0x7c);
    if ((DAT_01bea084 & 0x200000) == 0) {
      *pfVar1 = *(float *)(local_108 + 0x1b0) + fVar5;
      *(float *)(param_1 + 100) = fVar7 + *(float *)(local_108 + 0x1b4);
      *(float *)(param_1 + 0x68) = *(float *)(local_108 + 0x1b8) + fVar6;
      fVar4 = *(float *)(local_108 + 0x1bc) + fVar4;
    }
    else {
      *pfVar1 = fVar5;
      *(float *)(param_1 + 100) = fVar7;
      *(float *)(param_1 + 0x68) = fVar6;
    }
    pfVar18 = (float *)(param_1 + 0xa0);
    *(float *)(param_1 + 0x6c) = fVar4;
    iVar11 = param_1 + 0xb0;
    *pfVar18 = fVar2 * -1000.0;
    *(float *)(param_1 + 0xa4) = fVar3 * -1000.0;
    *(float *)(param_1 + 0xa8) = fVar10 * -1000.0;
    *(undefined4 *)(param_1 + 0xac) = 0x447a0000;
    FUN_00c12740(0);
    FUN_00d9fa80(iVar11,pfVar18);
    thunk_FUN_00de01a0(local_d0,pfVar1,local_108 + 0x1b0,&DAT_01be7550);
    FID_conflict__memcpy(local_50,DAT_01beb8c0 + 0x10,0x40);
    puVar12 = local_50;
    puVar16 = &DAT_01f6bb20;
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    puVar12 = local_d0;
    puVar16 = &DAT_01f6bce0;
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    D3DXMatrixMultiply(auStack_b4 + 9,local_d0,local_50);
    puVar12 = auStack_b4 + 6;
    puVar16 = &DAT_01f6bea0;
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    D3DXMatrixInverse(auStack_b4 + 6,0,&uStack_dc);
    puVar12 = auStack_b4 + 3;
    puVar16 = &DAT_01f6c060;
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    D3DXMatrixInverse(auStack_b4 + 3,0,auStack_68);
    puVar12 = auStack_b4;
    puVar16 = &DAT_01f6c220;
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    D3DXMatrixMultiply(auStack_b4,local_f4,auStack_74);
    D3DXMatrixInverse(auStack_c0,0,auStack_c0);
    uVar8 = DAT_01bea084;
    local_100 = 3.4028235e+38;
    local_fc = 3.4028235e+38;
    local_f8 = 3.4028235e+38;
    puVar12 = auStack_b4 + 9;
    puVar16 = &DAT_01f6c3e0;
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    uStack_e0 = 0xff7fffff;
    uStack_dc = 0xff7fffff;
    local_d8 = -3.4028235e+38;
    *(uint *)(param_1 + 0x84) = uVar8 >> 0x1d & 1;
    FUN_00a3c710(local_108,local_10c,0x3f333333,local_d0,&local_100,&uStack_e0);
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(float *)(param_1 + 0x8c) = local_d8;
    puVar12 = local_d0;
    puVar16 = (undefined4 *)(param_1 + 0xd80);
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    puVar12 = local_d0;
    puVar16 = (undefined4 *)(param_1 + 0xdc0);
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    puVar12 = local_d0;
    puVar16 = (undefined4 *)(param_1 + 0xe00);
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    puVar12 = local_d0;
    puVar16 = (undefined4 *)(param_1 + 0xe40);
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar16 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar16 = puVar16 + 1;
    }
    *(undefined4 *)(param_1 + 0xe90) = 0;
    *(undefined4 *)(param_1 + 0xe8c) = 0;
    *(undefined4 *)(param_1 + 0xe88) = 0;
    *(undefined4 *)(param_1 + 0xe84) = 0;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    iVar11 = 0;
    puVar12 = (undefined4 *)(param_1 + 0x6c8);
    do {
      iVar15 = 0;
      do {
        iVar13 = (byte)(&DAT_018a07b4)[iVar15] + 0x4c + iVar11;
        puVar12[-2] = *(undefined4 *)(param_1 + iVar13 * 0x10);
        puVar12[-1] = *(undefined4 *)(param_1 + 4 + iVar13 * 0x10);
        *puVar12 = *(undefined4 *)(param_1 + 8 + iVar13 * 0x10);
        iVar13 = (byte)(&DAT_018a07b5)[iVar15] + 0x4c + iVar11;
        puVar12[1] = *(undefined4 *)(param_1 + iVar13 * 0x10);
        puVar12[2] = *(undefined4 *)(param_1 + 4 + iVar13 * 0x10);
        puVar12[3] = *(undefined4 *)(param_1 + 8 + iVar13 * 0x10);
        iVar13 = (byte)(&DAT_018a07b6)[iVar15] + 0x4c + iVar11;
        puVar12[4] = *(undefined4 *)(param_1 + iVar13 * 0x10);
        puVar12[5] = *(undefined4 *)(param_1 + 4 + iVar13 * 0x10);
        puVar12[6] = *(undefined4 *)(param_1 + 8 + iVar13 * 0x10);
        iVar13 = (byte)(&DAT_018a07b7)[iVar15] + 0x4c + iVar11;
        puVar12[7] = *(undefined4 *)(param_1 + iVar13 * 0x10);
        puVar12[8] = *(undefined4 *)(param_1 + 4 + iVar13 * 0x10);
        puVar12[9] = *(undefined4 *)(param_1 + 8 + iVar13 * 0x10);
        iVar13 = (byte)(&DAT_018a07b8)[iVar15] + 0x4c + iVar11;
        puVar12[10] = *(undefined4 *)(param_1 + iVar13 * 0x10);
        puVar12[0xb] = *(undefined4 *)(param_1 + 4 + iVar13 * 0x10);
        puVar12[0xc] = *(undefined4 *)(param_1 + 8 + iVar13 * 0x10);
        iVar13 = (byte)(&DAT_018a07b9)[iVar15] + 0x4c + iVar11;
        puVar12[0xd] = *(undefined4 *)(param_1 + iVar13 * 0x10);
        puVar12[0xe] = *(undefined4 *)(param_1 + 4 + iVar13 * 0x10);
        puVar12[0xf] = *(undefined4 *)(param_1 + 8 + iVar13 * 0x10);
        iVar13 = (byte)(&DAT_018a07ba)[iVar15] + 0x4c + iVar11;
        puVar12[0x10] = *(undefined4 *)(param_1 + iVar13 * 0x10);
        puVar12[0x11] = *(undefined4 *)(param_1 + 4 + iVar13 * 0x10);
        puVar12[0x12] = *(undefined4 *)(param_1 + 8 + iVar13 * 0x10);
        iVar13 = (byte)(&DAT_018a07bb)[iVar15] + 0x4c + iVar11;
        puVar12[0x13] = *(undefined4 *)(param_1 + iVar13 * 0x10);
        puVar12[0x14] = *(undefined4 *)(param_1 + 4 + iVar13 * 0x10);
        puVar12[0x15] = *(undefined4 *)(param_1 + 8 + iVar13 * 0x10);
        iVar13 = (byte)(&DAT_018a07bc)[iVar15] + 0x4c + iVar11;
        puVar12[0x16] = *(undefined4 *)(param_1 + iVar13 * 0x10);
        puVar12[0x17] = *(undefined4 *)(param_1 + 4 + iVar13 * 0x10);
        puVar12[0x18] = *(undefined4 *)(param_1 + 8 + iVar13 * 0x10);
        iVar15 = iVar15 + 9;
        puVar12 = puVar12 + 0x1b;
      } while (iVar15 < 0x24);
      iVar11 = iVar11 + 8;
    } while (iVar11 < 0x20);
    iVar11 = 0;
    local_10c = param_1 + 0x6c0;
    do {
      if ((-1 < iVar11) && (iVar11 < DAT_01b83ce4)) {
        iVar15 = *(int *)(&DAT_0165e1d4 + (&DAT_01b83cc4)[iVar11 * 2] * 0x10);
        iVar13 = Hw::cPrimF::cPrimF_2(local_10c,0x24);
        if (iVar13 == 0) {
          return;
        }
        *(undefined4 *)(iVar13 + 0x78) = 4;
        *(undefined4 *)(iVar13 + 0x7c) = 0xffffffff;
        *(undefined4 *)(iVar13 + 0x48) = 0;
        *(undefined4 *)(iVar13 + 0x44) = 0;
        *(undefined4 *)(iVar13 + 0x40) = 0;
        *(undefined4 *)(iVar13 + 0x3c) = 0;
        *(undefined4 *)(iVar13 + 0x34) = 0;
        *(undefined4 *)(iVar13 + 0x30) = 0;
        *(undefined4 *)(iVar13 + 0x2c) = 0;
        *(undefined4 *)(iVar13 + 0x28) = 0;
        *(undefined4 *)(iVar13 + 0x20) = 0;
        *(undefined4 *)(iVar13 + 0x1c) = 0;
        *(undefined4 *)(iVar13 + 0x18) = 0;
        *(undefined4 *)(iVar13 + 0x14) = 0;
        *(undefined4 *)(iVar13 + 0x4c) = 0x3f800000;
        *(undefined4 *)(iVar13 + 0x38) = 0x3f800000;
        *(undefined4 *)(iVar13 + 0x24) = 0x3f800000;
        *(undefined4 *)(iVar13 + 0x10) = 0x3f800000;
        if ((iVar15 != 0x49) ||
           (iVar14 = FUN_00f9aea0(1,0x48,1,0,&LAB_00f97db0,iVar13), iVar14 != 0)) {
          FUN_00f9aea0(1,iVar15,1,0,&LAB_00f97db0,iVar13);
        }
      }
      local_10c = local_10c + 0x1b0;
      iVar11 = iVar11 + 1;
    } while (iVar11 < 4);
  }
  return;
}


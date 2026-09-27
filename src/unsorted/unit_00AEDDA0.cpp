// src/unsorted/unit_00AEDDA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AEDDA0..00AEF4A0, 4 functions

#include "mgrr.h"

// 00AEDDA0  FUN_00aedda0  size=5514  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00aedda0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  float unaff_EBX;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float afStack_34 [4];
  undefined1 auStack_24 [4];
  float fStack_20;
  
  (**(code **)(*param_1 + 0x318))();
  param_1[0xc60] = 0;
  fStack_38 = 0.0;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    fStack_38 = (float)FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  _DAT_01bea860 = 1;
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0x10e,iVar4,0,0,0x3f800000,0x8000000,0,0x3f800000);
    pcVar2 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    if (fStack_3c != 0.0) {
      uVar16 = FUN_009f8b40();
      FUN_009f8ae0(uVar16);
    }
    DAT_01bea060 = DAT_01bea060 | 0x2000000;
    param_1[0x248] = 0x42200000;
    param_1[0xdfc] = param_1[0x10];
    param_1[0xdfd] = param_1[0x11];
    param_1[0xdfe] = param_1[0x12];
    param_1[0xdff] = param_1[0x13];
    param_1[0xe00] = param_1[0x25];
    FUN_00e5e1b0("bgm_MG_Ray_QTE1_start");
    FUN_00951940();
    piVar6 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar6 + 100))();
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4520(0x10f,iVar4,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f800000;
    FUN_00aa4520(0x11c,iVar4,5,0,0x3f800000,0x10,0,0x3f800000);
    FUN_00aa4520(0x120,iVar4,9,0,0x3f800000,0x10,0,0x3f800000);
    param_1[0x250] = 0;
    goto LAB_00aedfd3;
  case 3:
LAB_00aedfd3:
    FUN_00cbc8f0(0x1000,1);
    iVar4 = FUN_00a952e0(0,0x40c00000);
    if (iVar4 != 0) {
      param_1[0x250] = 1;
    }
    if (param_1[0x250] != 0) {
      uVar16 = 0;
      FUN_00a92f90(0);
      fVar9 = (float10)FUN_00407b40(uVar16);
      if (fVar9 < (float10)0.06666667) {
        fVar17 = (float)(float10)0.06666667;
        uVar16 = 0;
        FUN_00a92f90(0,fVar17);
        FUN_004b4c60(uVar16,fVar17);
      }
      if ((*(byte *)(param_1 + 0x33f) & 0x40) != 0) {
        param_1[0x248] = 0x40000000;
        FUN_00dda360(0,0x3f19999a,0x3f19999a,6);
        (**(code **)(*param_1 + 0x3e0))(0x73,0);
      }
      fVar17 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar17 - 0.1);
      if (fVar17 - 0.1 < -0.6) {
        param_1[0x248] = -0x40e66666;
      }
      iVar4 = param_1[0x248];
LAB_00aee0bc:
      FUN_00a96030(0,iVar4);
    }
LAB_00aee0c9:
    BehaviorAppBase::thunk_vf64();
    FUN_00a94ce0(0);
    goto switchD_00aede2d_default;
  case 4:
    FUN_00aa4520(0x110,iVar4,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a94bc0(5,0x3c888889);
    FUN_00a94bc0(9,0x3c888889);
    (**(code **)(*param_1 + 0x3e0))(0x73,0);
    goto LAB_00aee154;
  case 5:
LAB_00aee154:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      if (fStack_3c == 0.0) {
        return;
      }
      FUN_00a8cb60(param_1[0x187]);
    }
    goto switchD_00aede2d_default;
  case 6:
    FUN_00aa4520(0x111,iVar4,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a94bc0(3,0x3f800000);
    param_1[0x248] = 0x3f800000;
    FUN_00aa4520(0x11d,iVar4,5,0,0x3f800000,0x10,0,0x3f800000);
    FUN_00aa4520(0x121,iVar4,9,0,0x3f800000,0x10,0,0x3f800000);
    param_1[0x250] = 0;
    goto LAB_00aee252;
  case 7:
LAB_00aee252:
    FUN_00cbc8f0(0x2000,1);
    iVar4 = FUN_00a952e0(0,0x40a00000);
    if (iVar4 != 0) {
      param_1[0x250] = 1;
    }
    if ((param_1[0x250] != 0) && (iVar4 = FUN_00a959f0(0), (float)iVar4 < 240.0)) {
      uVar16 = 0;
      FUN_00a92f90(0);
      fVar9 = (float10)FUN_00407b40(uVar16);
      if (fVar9 < (float10)0.016666668) {
        fVar17 = (float)(float10)0.016666668;
        uVar16 = 0;
        FUN_00a92f90(0,fVar17);
        FUN_004b4c60(uVar16,fVar17);
      }
      if ((*(byte *)(param_1 + 0x33f) & 0x80) != 0) {
        param_1[0x248] = 0x40000000;
        FUN_00dda360(0,0x3f19999a,0x3f19999a,6);
        (**(code **)(*param_1 + 0x3e0))(0x74,0);
      }
      fVar17 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar17 - 0.1);
      if (fVar17 - 0.1 < -0.6) {
        param_1[0x248] = -0x40e66666;
      }
      FUN_00a96030(0,param_1[0x248]);
    }
    fStack_38 = (float)FUN_00a959f0(0);
    if (240.0 <= (float)(int)fStack_38) {
      iVar4 = 0x3f800000;
      goto LAB_00aee0bc;
    }
    goto LAB_00aee0c9;
  case 8:
    FUN_00aa4520(0x112,iVar4,0,0,0x3f800000,0x8000080,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    FUN_00a94bc0(5,0x3f800000);
    FUN_00a94bc0(9,0x3f800000);
    (**(code **)(*param_1 + 0x3e0))(0x74,0);
    FUN_00e5e1b0("bgm_MG_Ray_QTE1_succeeded");
    piVar6 = (int *)param_1[0xd8];
    if ((int *)param_1[0xd8] == (int *)0x0) {
      piVar6 = param_1;
    }
    iVar4 = piVar6[0xd6];
    uVar8 = 0;
    if ((int)(short)iVar4 != 0) {
      iVar7 = 0;
      do {
        piVar6 = (int *)param_1[0xd8];
        if ((int *)param_1[0xd8] == (int *)0x0) {
          piVar6 = param_1;
        }
        if (((int)uVar8 < 0) || ((int)(short)piVar6[0xd6] <= (int)uVar8)) {
          iVar5 = 0;
        }
        else {
          iVar5 = piVar6[0xd4] + iVar7;
        }
        *(ushort *)(iVar5 + 0xa2) = *(ushort *)(iVar5 + 0xa2) | 1;
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + 0xb0;
      } while (uVar8 < (uint)(int)(short)iVar4);
    }
    goto LAB_00aee46b;
  case 9:
LAB_00aee46b:
    if (fStack_3c != 0.0) {
      uVar16 = 0;
      FUN_00a92f90(0);
      fVar9 = (float10)FUN_00407b40(uVar16);
      fVar17 = (float)fVar9;
      uVar16 = 0;
      FUN_00a92f90(0,fVar17);
      FUN_004b4c60(uVar16,fVar17);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_00aede2d_default;
  case 10:
    FUN_00aa4520(0x113,iVar4,0,0,0x3f800000,0x8000080,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    piVar6 = (int *)param_1[0xd8];
    if ((int *)param_1[0xd8] == (int *)0x0) {
      piVar6 = param_1;
    }
    iVar4 = piVar6[0xd6];
    uVar8 = 0;
    if ((int)(short)iVar4 != 0) {
      iVar7 = 0;
      do {
        piVar6 = (int *)param_1[0xd8];
        if ((int *)param_1[0xd8] == (int *)0x0) {
          piVar6 = param_1;
        }
        if (((int)uVar8 < 0) || ((int)(short)piVar6[0xd6] <= (int)uVar8)) {
          iVar5 = 0;
        }
        else {
          iVar5 = piVar6[0xd4] + iVar7;
        }
        *(ushort *)(iVar5 + 0xa2) = *(ushort *)(iVar5 + 0xa2) & 0xfffe;
        uVar8 = uVar8 + 1;
        iVar7 = iVar7 + 0xb0;
      } while (uVar8 < (uint)(int)(short)iVar4);
    }
    goto LAB_00aee55b;
  case 0xb:
LAB_00aee55b:
    if (fStack_3c != 0.0) {
      uVar16 = 0;
      FUN_00a92f90(0);
      fVar9 = (float10)FUN_00407b40(uVar16);
      fVar17 = (float)fVar9;
      uVar16 = 0;
      FUN_00a92f90(0,fVar17);
      FUN_004b4c60(uVar16,fVar17);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_00aede2d_default;
  case 0xc:
    FUN_00aa4520(0x114,iVar4,0,0,0x3f800000,0x8000080,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00aee5f2;
  case 0xd:
LAB_00aee5f2:
    FUN_00cbc8f0(0x1000,1);
    if (fStack_3c != 0.0) {
      uVar16 = 0;
      FUN_00a92f90(0);
      fVar9 = (float10)FUN_00407b40(uVar16);
      fVar17 = (float)fVar9;
      uVar16 = 0;
      FUN_00a92f90(0,fVar17);
      FUN_004b4c60(uVar16,fVar17);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_00aede2d_default;
  case 0xe:
    FUN_00a9f4c0("RUNSLASH",0,0,0);
    FUN_00a9f650(iVar4,0xffffffff,0,0,0,0,0x115,0,0x8080000);
    FUN_00a9f650(iVar4,0xffffffff,0,0,1,0,0x11e,0,0x8080000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x249] = 0;
    param_1[0x250] = 0;
    FUN_00c81b30(0x32);
    goto LAB_00aee6e6;
  case 0xf:
LAB_00aee6e6:
    FUN_00cbc8f0(0x1000,1);
    iVar4 = FUN_00a94e10(0,0,0x41500000);
    if ((iVar4 != 0) && (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
      param_1[0x250] = param_1[0x250] | 1;
      param_1[0x249] = 0x41b00000;
      piVar6 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar6 + 0x34))(0);
    }
    iVar4 = FUN_00a94e10(0,0x41880000,0x41c80000);
    if ((iVar4 != 0) && (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
      param_1[0x250] = param_1[0x250] | 2;
      param_1[0x249] = 0x42080000;
      piVar6 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar6 + 0x34))(0);
    }
    iVar4 = FUN_00a94e10(0,0x41c80000,0x42100000);
    if ((iVar4 != 0) && (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
      param_1[0x250] = param_1[0x250] | 4;
      param_1[0x249] = 0x42240000;
      piVar6 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar6 + 0x34))(0);
    }
    iVar4 = FUN_00a94e10(0,0x42180000,0x422c0000);
    if ((iVar4 != 0) && (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
      param_1[0x250] = param_1[0x250] | 8;
      param_1[0x249] = 0x42480000;
      piVar6 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar6 + 0x34))(0);
    }
    iVar4 = FUN_00a94e10(0,0x423c0000,0x425c0000);
    if ((iVar4 != 0) && (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
      param_1[0x250] = param_1[0x250] | 0x10;
      param_1[0x249] = 0x42740000;
      piVar6 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar6 + 0x34))(0);
    }
    iVar4 = FUN_00a94e10(0,0x42680000,0x427c0000);
    if ((iVar4 != 0) && (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
      param_1[0x250] = param_1[0x250] | 0x20;
      param_1[0x249] = 0x428a0000;
      piVar6 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar6 + 0x34))(0);
    }
    iVar4 = FUN_00a94e10(0,0x42840000,0x42900000);
    if ((iVar4 != 0) && (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
      param_1[0x250] = param_1[0x250] | 0x40;
      param_1[0x249] = 0x429e0000;
      piVar6 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar6 + 0x34))(0);
    }
    iVar4 = FUN_00a94e10(0,0x42980000,0x42a40000);
    if ((iVar4 != 0) && (((param_1[0x33f] & param_1[0x388]) != 0 || (param_1[0x95a] != 0)))) {
      param_1[0x250] = param_1[0x250] | 0x80;
      param_1[0x249] = 0x42b40000;
      piVar6 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar6 + 0x34))(0);
    }
    DAT_01bea060 = DAT_01bea060 & 0xfbffffff;
    fStack_38 = (float)FUN_00a959f0(0);
    if ((float)(int)fStack_38 < (float)param_1[0x249] ==
        ((float)(int)fStack_38 == (float)param_1[0x249])) {
      param_1[0x248] = (int)(-(float)param_1[0x248] * 0.3 + (float)param_1[0x248]);
    }
    else {
      param_1[0x248] = (int)((1.0 - (float)param_1[0x248]) * 0.3 + (float)param_1[0x248]);
      DAT_01bea060 = DAT_01bea060 | 0x4000000;
      iVar4 = FUN_00a952e0(0,0x41500000);
      if (iVar4 != 0) {
        FUN_00e5e0c0("em0200_se_dmg_arm_slash",param_1,0x700,0);
      }
      iVar4 = FUN_00a952e0(0,0x41c00000);
      if (iVar4 != 0) {
        FUN_00e5e0c0("em0200_se_dmg_arm_slash",param_1,0x700,0);
      }
      iVar4 = FUN_00a952e0(0,0x420c0000);
      if (iVar4 != 0) {
        FUN_00e5e0c0("em0200_se_dmg_arm_slash",param_1,0x700,0);
      }
      iVar4 = FUN_00a952e0(0,0x422c0000);
      if (iVar4 != 0) {
        FUN_00e5e0c0("em0200_se_dmg_arm_slash",param_1,0x700,0);
      }
      iVar4 = FUN_00a952e0(0,0x42600000);
      if (iVar4 != 0) {
        FUN_00e5e0c0("em0200_se_dmg_arm_slash",param_1,0x700,0);
      }
      iVar4 = FUN_00a952e0(0,0x42740000);
      if (iVar4 != 0) {
        FUN_00e5e0c0("em0200_se_dmg_arm_slash",param_1,0x700,0);
      }
      iVar4 = FUN_00a952e0(0,0x428e0000);
      if (iVar4 != 0) {
        FUN_00e5e0c0("em0200_se_dmg_arm_slash",param_1,0x700,0);
      }
      iVar4 = FUN_00a952e0(0,0x42a20000);
      if (iVar4 != 0) {
        FUN_00e5e0c0("em0200_se_dmg_arm_slash",param_1,0x700,0);
      }
    }
    FUN_00a947e0(0,0,param_1[0x248],0);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94d60("RUNSLASH");
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_00aede2d_default;
  case 0x10:
    FUN_00aa4520(0x116,iVar4,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_004168f0(5);
    if (fStack_3c != 0.0) {
      FUN_00aecf90(param_1[0x250]);
    }
    FUN_00a94bc0(1,0);
    goto LAB_00aeec65;
  case 0x11:
LAB_00aeec65:
    if (fStack_3c != 0.0) {
      uVar16 = 0;
      FUN_00a92f90(0);
      fVar9 = (float10)FUN_00407b40(uVar16);
      fVar17 = (float)fVar9;
      uVar16 = 0;
      FUN_00a92f90(0,fVar17);
      FUN_004b4c60(uVar16,fVar17);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_00aede2d_default;
  case 0x12:
    FUN_00aa4520(0x117,iVar4,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00aeecf8;
  case 0x13:
LAB_00aeecf8:
    if (fStack_3c != 0.0) {
      uVar16 = 0;
      FUN_00a92f90(0);
      fVar9 = (float10)FUN_00407b40(uVar16);
      fVar17 = (float)fVar9;
      uVar16 = 0;
      FUN_00a92f90(0,fVar17);
      FUN_004b4c60(uVar16,fVar17);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_00aede2d_default;
  case 0x14:
    FUN_00aa4520(0x118,iVar4,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar7 = FUN_004b5380();
    if (iVar7 != 0) {
      uVar15 = 0x3f800000;
      uVar14 = 0;
      uVar13 = 0x8000000;
      uVar12 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 0;
      uVar16 = 0x123;
      FUN_004b5380(0x123,iVar4,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00aa4520(uVar16,iVar4,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
      param_1[0x2e7] = 4;
    }
    goto LAB_00aeedd9;
  case 0x15:
LAB_00aeedd9:
    if (fStack_3c != 0.0) {
      uVar16 = 0;
      FUN_00a92f90(0);
      fVar9 = (float10)FUN_00407b40(uVar16);
      fVar17 = (float)fVar9;
      uVar16 = 0;
      FUN_00a92f90(0,fVar17);
      FUN_004b4c60(uVar16,fVar17);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_00aede2d_default;
  case 0x16:
    FUN_00aa4520(0x119,iVar4,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar7 = FUN_004b5380();
    if (iVar7 != 0) {
      uVar15 = 0x3f800000;
      uVar14 = 0;
      uVar13 = 0x8000000;
      uVar12 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 0;
      uVar16 = 0x124;
      FUN_004b5380(0x124,iVar4,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00aa4520(uVar16,iVar4,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
      param_1[0x2e7] = 4;
    }
    goto LAB_00aeeeba;
  case 0x17:
LAB_00aeeeba:
    if (fStack_3c != 0.0) {
      uVar16 = 0;
      FUN_00a92f90(0);
      fVar9 = (float10)FUN_00407b40(uVar16);
      fVar17 = (float)fVar9;
      uVar16 = 0;
      FUN_00a92f90(0,fVar17);
      FUN_004b4c60(uVar16,fVar17);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_00aede2d_default;
  case 0x18:
    FUN_00aa4520(0x11a,iVar4,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00e03a70(0,0x3f800000);
    FUN_00a33520(0,0xa00,0x10);
    FUN_00a33520(1,0xa00,0x11);
    goto LAB_00aeef89;
  case 0x19:
LAB_00aeef89:
    if (fStack_3c != 0.0) {
      uVar16 = 0;
      FUN_00a92f90(0);
      fVar9 = (float10)FUN_00407b40(uVar16);
      fVar17 = (float)fVar9;
      uVar16 = 0;
      FUN_00a92f90(0,fVar17);
      FUN_004b4c60(uVar16,fVar17);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_00aede2d_default;
  case 0x1a:
    FUN_00aa4520(0x11b,iVar4,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    iVar7 = FUN_004b5380();
    if (iVar7 != 0) {
      uVar15 = 0x3f800000;
      uVar14 = 0;
      uVar13 = 0x8000000;
      uVar12 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 0;
      uVar16 = 0x125;
      FUN_004b5380(0x125,iVar4,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00aa4520(uVar16,iVar4,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15);
      param_1[0x2e7] = 4;
    }
    goto LAB_00aef070;
  case 0x1b:
LAB_00aef070:
    if (fStack_3c != 0.0) {
      uVar16 = 0;
      FUN_00a92f90(0);
      fVar9 = (float10)FUN_00407b40(uVar16);
      fVar17 = (float)fVar9;
      uVar16 = 0;
      FUN_00a92f90(0,fVar17);
      FUN_004b4c60(uVar16,fVar17);
    }
    iVar4 = FUN_00a8c760(0xb);
    if (iVar4 != 0) {
      if ((param_1[0x1d9] != 0) && (param_1[0x250] == 0)) {
        FUN_008e6d00();
      }
      (**(code **)(*param_1 + 0x314))();
      param_1[0x250] = 1;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00a94bc0(1,0);
      FUN_009f8b10();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      param_1[0x187] = param_1[0x187] + 1;
      FUN_004168f0(6);
      FUN_00ba6810(1,0);
      FUN_00a8caf0(0xdf,0x1c,0,0);
      FUN_00da8810(0x41f00000);
      DAT_01bea060 = DAT_01bea060 | 0x40000000;
      FUN_00d5ea40("btl_ray_ev",1,0);
    }
    goto switchD_00aede2d_default;
  case 0x1c:
    FUN_00b94790(0x3f800000,0x3f800000);
  default:
    goto switchD_00aede2d_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_00a94ce0(0);
switchD_00aede2d_default:
  if ((fStack_3c != 0.0) && (iVar4 = FUN_00a8c760(0xb), iVar4 == 0)) {
    if (1 < param_1[0x187]) {
      FUN_00a8ce90(afStack_34,auStack_24);
      fVar9 = (float10)FUN_00ddba30(*(float *)((int)fStack_3c + 0x94) + fStack_20);
      param_1[0x25] = (int)(float)fVar9;
      D3DXVec3TransformNormal(afStack_34,afStack_34,(int)fStack_3c + 0x10);
      fVar17 = *(float *)((int)fStack_3c + 0x44);
      fVar1 = *(float *)((int)fStack_3c + 0x48);
      param_1[0x14] = (int)(fStack_40 + *(float *)((int)fStack_3c + 0x40));
      param_1[0x15] = (int)(fVar17 + fStack_3c);
      param_1[0x16] = (int)(fVar1 + fStack_38);
      param_1[0x17] = (int)afStack_34[0];
      return;
    }
    fVar17 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar17 - (float)param_1[0x244]);
    if (fVar17 - (float)param_1[0x244] < 0.0) {
      param_1[0x248] = 0;
    }
    fVar17 = (float)param_1[0x248];
    FUN_00a8ce90(afStack_34,auStack_24);
    fVar9 = (float10)FUN_00ddba30(*(float *)((int)fStack_3c + 0x94) + fStack_20);
    D3DXVec3TransformNormal(afStack_34,afStack_34,(int)fStack_3c + 0x10);
    fVar1 = *(float *)((int)fStack_3c + 0x40) + fStack_40;
    fVar3 = *(float *)((int)fStack_3c + 0x44) + fVar17 * 0.025 * fVar17 * 0.025;
    fVar17 = *(float *)((int)fStack_3c + 0x48) + (float)fVar9;
    param_1[0x25] = iStack_44;
    param_1[0x14] = (int)(((float)param_1[0xdfc] - fVar1) * unaff_EBX + fVar1);
    param_1[0x15] = (int)(((float)param_1[0xdfd] - fVar3) * unaff_EBX + fVar3);
    param_1[0x16] = (int)(((float)param_1[0xdfe] - fVar17) * unaff_EBX + fVar17);
    param_1[0x17] = (int)(((float)param_1[0xdff] - afStack_34[0]) * unaff_EBX + afStack_34[0]);
  }
  return;
}

// 00AEF3A0  FUN_00aef3a0  size=96  [run]
void __fastcall FUN_00aef3a0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x61c) == 0) && (600.0 < *(float *)(param_1 + 0x878))) {
      FUN_00a8cb50(2);
      FUN_00a8cb60(0);
    }
  }
  else {
    if (iVar1 == 1) {
      FUN_00aea110();
      return;
    }
    if ((iVar1 == 2) && (*(int *)(param_1 + 0x61c) == 0)) {
      *(undefined4 *)(param_1 + 0x61c) = 1;
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 00AEF470  FUN_00aef470  size=43  [run]
undefined4 __fastcall FUN_00aef470(int param_1)

{
  int iVar1;
  
  iVar1 = BehaviorPartsModel::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  FUN_00a8caf0(1,0,0,0);
  return 1;
}

// 00AEF4A0  FUN_00aef4a0  size=27  [run]
void __fastcall FUN_00aef4a0(int param_1)

{
  BehaviorPartsModel::vf4C();
  if (*(int *)(param_1 + 0x618) == 1) {
    FUN_00aea810();
    return;
  }
  return;
}


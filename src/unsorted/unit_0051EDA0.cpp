// src/unsorted/unit_0051EDA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051EDA0..00520A80, 5 functions

#include "mgrr.h"

// 0051EDA0  FUN_0051eda0  size=237  [run]
void __fastcall FUN_0051eda0(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xd5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x529] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
      sVar1 = FUN_00dde2d0(0,1);
      FUN_0051d620(sVar1 + 0x1000a,uVar3,uVar4,uVar5,uVar6);
    }
    sVar1 = FUN_00dde2d0(0,3);
    if (sVar1 == 1) {
      FUN_0051d620(0x50009,0,0,0,0);
    }
  }
  return;
}

// 0051EE90  FUN_0051ee90  size=1167  [run]
void __fastcall FUN_0051ee90(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar9 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar9);
    if (iVar1 != 0) {
      FUN_00b8c350(0x41700000);
    }
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0xe2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar1 = FUN_00518ad0();
    if (iVar1 != 0) {
      uVar10 = 0x3f800000;
      uVar8 = 0xbf800000;
      uVar7 = 0x8000000;
      uVar6 = 0x3f800000;
      uVar5 = 0;
      uVar4 = 0;
      puVar9 = &DAT_01640d3c;
      FUN_00518ad0(&DAT_01640d3c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar9,uVar4,uVar5,uVar6,uVar7,uVar8,uVar10);
      uVar4 = 0;
      iVar1 = param_1;
      FUN_00518ad0(0,param_1);
      FUN_00a95ee0(uVar4,iVar1);
    }
    iVar1 = FUN_00518b00();
    if (iVar1 != 0) {
      puVar9 = &DAT_01640d3c;
LAB_0051efb9:
      uVar10 = 0x3f800000;
      uVar8 = 0xbf800000;
      uVar7 = 0x8000000;
      uVar6 = 0x3f800000;
      uVar5 = 0;
      uVar4 = 0;
      FUN_00518b00(puVar9,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
LAB_0051efc0:
      FUN_00a9e290(puVar9,uVar4,uVar5,uVar6,uVar7,uVar8,uVar10);
    }
    break;
  case 1:
  case 3:
  case 5:
  case 9:
    break;
  case 2:
    FUN_00aa4080(0xe3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar1 = FUN_00518ad0();
    if (iVar1 != 0) {
      uVar10 = 0x3f800000;
      uVar8 = 0xbf800000;
      uVar7 = 0x8000000;
      uVar6 = 0x3f800000;
      uVar5 = 0;
      uVar4 = 0;
      puVar9 = &DAT_01640d34;
      FUN_00518ad0(&DAT_01640d34,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar9,uVar4,uVar5,uVar6,uVar7,uVar8,uVar10);
    }
    iVar1 = FUN_00518b00();
    if (iVar1 != 0) {
      puVar9 = &DAT_01640d34;
      goto LAB_0051efb9;
    }
    break;
  case 4:
    FUN_00aa4080(0xe4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar1 = FUN_00518ad0();
    if (iVar1 != 0) {
      uVar10 = 0x3f800000;
      uVar8 = 0xbf800000;
      uVar7 = 0x8000000;
      uVar6 = 0x3f800000;
      uVar5 = 0;
      uVar4 = 0;
      puVar9 = &DAT_01640d2c;
      FUN_00518ad0(&DAT_01640d2c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      goto LAB_0051efc0;
    }
    break;
  case 6:
    FUN_00aa4080(0xe5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar1 = FUN_00518ad0();
    if (iVar1 != 0) {
      uVar10 = 0x3f800000;
      uVar8 = 0xbf800000;
      uVar7 = 0x8000000;
      uVar6 = 0x3f800000;
      uVar5 = 0;
      uVar4 = 0;
      puVar3 = &DAT_01640d24;
      FUN_00518ad0(&DAT_01640d24,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar10);
    }
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    FUN_00518ad0();
    return;
  case 8:
    FUN_00aa4080(0xf0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar1 = FUN_00518ad0();
    if (iVar1 != 0) {
      uVar10 = 0x3f800000;
      uVar8 = 0xbf800000;
      uVar7 = 0x8000000;
      uVar6 = 0x3f800000;
      uVar5 = 0;
      uVar4 = 0;
      puVar9 = &DAT_01640d1c;
      FUN_00518ad0(&DAT_01640d1c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      goto LAB_0051efc0;
    }
    break;
  case 10:
    FUN_00aa4080(0xf2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar1 = FUN_00518ad0();
    if (iVar1 != 0) {
      uVar10 = 0x3f800000;
      uVar8 = 0xbf800000;
      uVar7 = 0x8000000;
      uVar6 = 0x3f800000;
      uVar5 = 0;
      uVar4 = 0;
      puVar9 = &DAT_01640d14;
      FUN_00518ad0(&DAT_01640d14,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar9,uVar4,uVar5,uVar6,uVar7,uVar8,uVar10);
    }
    iVar1 = FUN_00518b00();
    if (iVar1 != 0) {
      uVar10 = 0x3f800000;
      uVar8 = 0xbf800000;
      uVar7 = 0x8000000;
      uVar6 = 0x3f800000;
      uVar5 = 0;
      uVar4 = 0;
      puVar9 = &DAT_01640d14;
      FUN_00518b00(&DAT_01640d14,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a9e290(puVar9,uVar4,uVar5,uVar6,uVar7,uVar8,uVar10);
    }
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_0051eef0_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
switchD_0051eef0_default:
  return;
}

// 005200A0  FUN_005200a0  size=1106  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005200a0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar5;
  undefined4 uVar6;
  float local_34;
  undefined4 local_30 [4];
  undefined1 local_20 [4];
  float local_1c;
  
  local_34 = 0.0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    local_34 = (float)FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4520(0xf5,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    *(undefined4 *)(param_1 + 0x37f0) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x37f4) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x37f8) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x37fc) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x3800) = *(undefined4 *)(param_1 + 0x94);
    FUN_00bc2e10(1);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0xb74) = 0;
    FUN_0093db80();
    break;
  case 1:
  case 3:
  case 5:
    break;
  case 2:
    uVar6 = 0xf6;
    goto LAB_00520226;
  case 4:
    uVar6 = 0xf7;
LAB_00520226:
    FUN_00aa4520(uVar6,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    break;
  case 6:
    FUN_00aa4520(0xf8,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    goto LAB_005202d4;
  case 7:
LAB_005202d4:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    iVar3 = FUN_00a8c760(0x20);
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0x940) != 0) {
        DAT_01dc08c8 = 1;
        DAT_01dc08cc = 0;
      }
      FUN_00cbc8f0(0x8000100,1);
      FUN_00b85350(0x40a00000,0x3c23d70a,0x3c23d70a,1,0,0x3dcccccd);
      *(undefined4 *)(param_1 + 0x940) = 1;
    }
    if ((*(int *)(param_1 + 0x940) != 0) &&
       ((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe48)) != 0)) {
      FUN_00a8caf0(0x120,0,0,0);
      FUN_00b7aa80();
    }
    goto switchD_0052010a_default;
  case 8:
    FUN_00aa4520(0x109,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    DAT_01dc08c8 = 0;
    FUN_00b7aa80();
    if (local_34 != 0.0) {
      FUN_0051d620(0xa0000,0,8,0,0);
    }
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    if (((DAT_01bea004 == 0) && (DAT_01bea000 == DAT_01be9ffc)) && (*DAT_01be9ff4 == 0x13007)) {
      piVar4 = (int *)FUN_00c209f0();
      (**(code **)(*piVar4 + 0x14))(0x11);
    }
    FUN_00c420c0(0x42f00000);
    piVar4 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar4 + 0x2c))();
  case 9:
    FUN_00b94790(0x3f800000,0x3f800000);
  default:
    goto switchD_0052010a_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
switchD_0052010a_default:
  if (local_34 != 0.0) {
    FUN_00a8ce90(local_30,local_20);
    fVar5 = (float10)FUN_00ddba30(*(float *)((int)local_34 + 0x94) + local_1c);
    *(float *)(param_1 + 0x94) = (float)fVar5;
    D3DXVec3TransformNormal(local_30,local_30,(int)local_34 + 0x10);
    fVar1 = *(float *)((int)local_34 + 0x44);
    fVar2 = *(float *)((int)local_34 + 0x48);
    *(float *)(param_1 + 0x50) = *(float *)((int)local_34 + 0x40) + unaff_ESI;
    *(float *)(param_1 + 0x54) = fVar1 + unaff_EBX;
    *(float *)(param_1 + 0x58) = fVar2 + local_34;
    *(undefined4 *)(param_1 + 0x5c) = local_30[0];
  }
  return;
}

// 00520520  FUN_00520520  size=1315  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00520520(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar6;
  float local_34;
  undefined4 local_30 [4];
  undefined1 local_20 [4];
  float local_1c;
  
  FUN_0093dc50();
  local_34 = 0.0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    local_34 = (float)FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4520(0xf9,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    DAT_01dc08cc = 1;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    if (local_34 != 0.0) {
      FUN_0051d620(0xa0001,0,0,0,0);
    }
    goto LAB_00520612;
  case 1:
LAB_00520612:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    goto switchD_00520594_default;
  case 2:
    uVar4 = 0xfa;
    goto LAB_0052066c;
  case 3:
  case 5:
  case 9:
    break;
  case 4:
    uVar4 = 0xfb;
LAB_0052066c:
    FUN_00aa4520(uVar4,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    break;
  case 6:
    FUN_00aa4520(0xfc,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x944) = 0;
    uVar4 = FUN_00a95df0(0);
    FUN_00b7e040(uVar4);
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    goto LAB_00520758;
  case 7:
LAB_00520758:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    iVar3 = FUN_00a8c760(0x20);
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x944) == 0)) {
      *(undefined4 *)(param_1 + 0x40a4) = *(undefined4 *)(param_1 + 0x40a8);
      *(undefined4 *)(param_1 + 0x944) = 1;
      FUN_00b89db0(1,0x3e800000);
    }
    uVar4 = 0;
    if (*(float *)(param_1 + 0x40a4) <= 0.0) {
      *(undefined4 *)(param_1 + 0x40a4) = 0xbf800000;
    }
    else {
      uVar4 = 0x40a00000;
    }
    FUN_00b7ab30(uVar4);
    if (*(float *)(param_1 + 0x3424) <= *(float *)(param_1 + 0x40a0)) {
      fVar1 = *(float *)(param_1 + 0x40a4) - 1.0;
      *(float *)(param_1 + 0x40a4) = fVar1;
      if (((fVar1 < *(float *)(param_1 + 0x40a8) - *(float *)(param_1 + 0x40ac)) &&
          (*(float *)(param_1 + 0x40a8) - *(float *)(param_1 + 0x40b0) < fVar1)) &&
         ((*(uint *)(param_1 + 0xcf8) & *(uint *)(param_1 + 0xe50)) != 0)) {
        *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_1 + 0x94);
        FUN_00b89d30(0x121,0,0x120,8,0x14,*(undefined4 *)(param_1 + 0x4f0),0,0x41f00000,0x41f00000,0
                    );
        *(undefined4 *)(param_1 + 0x40a4) = 0xbf800000;
      }
    }
    goto switchD_00520594_default;
  case 8:
    FUN_00aa4520(0x10a,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00b7aa80();
    if (local_34 != 0.0) {
      FUN_0051d620(0xa0001,0,8,0,0);
    }
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    piVar5 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar5 + 0x2c))();
    break;
  case 10:
    FUN_00aa4520(0x10c,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    if (((DAT_01bea004 == 0) && (DAT_01bea000 == DAT_01be9ffc)) && (*DAT_01be9ff4 == 0x13007)) {
      piVar5 = (int *)FUN_00c209f0();
      (**(code **)(*piVar5 + 0x14))(0x11);
    }
    FUN_00c420c0(0x42340000);
  case 0xb:
    FUN_00b94790(0x3f800000,0x3f800000);
  default:
    goto switchD_00520594_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
switchD_00520594_default:
  if (local_34 != 0.0) {
    FUN_00a8ce90(local_30,local_20);
    fVar6 = (float10)FUN_00ddba30(*(float *)((int)local_34 + 0x94) + local_1c);
    *(float *)(param_1 + 0x94) = (float)fVar6;
    D3DXVec3TransformNormal(local_30,local_30,(int)local_34 + 0x10);
    fVar1 = *(float *)((int)local_34 + 0x44);
    fVar2 = *(float *)((int)local_34 + 0x48);
    *(float *)(param_1 + 0x50) = *(float *)((int)local_34 + 0x40) + unaff_ESI;
    *(float *)(param_1 + 0x54) = fVar1 + unaff_EBX;
    *(float *)(param_1 + 0x58) = fVar2 + local_34;
    *(undefined4 *)(param_1 + 0x5c) = local_30[0];
  }
  return;
}

// 00520A80  FUN_00520a80  size=864  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00520a80(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar5;
  float local_34;
  undefined4 local_30 [4];
  undefined1 local_20 [4];
  float local_1c;
  
  local_34 = 0.0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    local_34 = (float)FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4520(0xfd,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    if (local_34 != 0.0) {
      FUN_0051d620(0xa0002,0,0,0,0);
    }
    goto LAB_00520b5e;
  case 1:
LAB_00520b5e:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    iVar3 = FUN_00a8c760(0x20);
    if (iVar3 != 0) {
      FUN_00b85350(0x40e00000,0x3d4ccccd,0x3d4ccccd,1,0,0x3dcccccd);
      FUN_00cbc8f0(10,1);
    }
    if ((*(int *)(param_1 + 0x940) != 0) &&
       ((((*(uint *)(param_1 + 0xe5c) & *(uint *)(param_1 + 0xcf8)) != 0 &&
         ((*(uint *)(param_1 + 0xe60) & *(uint *)(param_1 + 0xcf8)) != 0)) ||
        (iVar3 = FUN_00a1d280(0x14), iVar3 != 0)))) {
      FUN_00a8caf0(0x122,0,0,0);
      FUN_00b7aa80();
    }
    break;
  case 2:
    FUN_00aa4520(0x10b,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00b7aa80();
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    if (local_34 != 0.0) {
      FUN_0051d620(0xa0002,0,2,0,0);
    }
    piVar4 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar4 + 0x2c))();
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 4:
    FUN_00aa4520(0x10c,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (((DAT_01bea004 == 0) && (DAT_01bea000 == DAT_01be9ffc)) && (*DAT_01be9ff4 == 0x13007)) {
      piVar4 = (int *)FUN_00c209f0();
      (**(code **)(*piVar4 + 0x14))(0x11);
    }
    FUN_00c420c0(0x42340000);
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
  }
  if (local_34 != 0.0) {
    FUN_00a8ce90(local_30,local_20);
    fVar5 = (float10)FUN_00ddba30(*(float *)((int)local_34 + 0x94) + local_1c);
    *(float *)(param_1 + 0x94) = (float)fVar5;
    D3DXVec3TransformNormal(local_30,local_30,(int)local_34 + 0x10);
    fVar1 = *(float *)((int)local_34 + 0x44);
    fVar2 = *(float *)((int)local_34 + 0x48);
    *(float *)(param_1 + 0x50) = unaff_ESI + *(float *)((int)local_34 + 0x40);
    *(float *)(param_1 + 0x54) = fVar1 + unaff_EBX;
    *(float *)(param_1 + 0x58) = fVar2 + local_34;
    *(undefined4 *)(param_1 + 0x5c) = local_30[0];
  }
  return;
}


// src/unsorted/unit_0046E870.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0046E870..0046F140, 4 functions

#include "types.h"

// 0046E870  FUN_0046e870  size=324  [run]
void __fastcall FUN_0046e870(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b34d50;
    (**(code **)(*piVar2 + 4))(&DAT_01b34d50);
    iVar3 = FUN_00dd6d80(puVar4);
    if ((iVar3 != 0) && ((*(byte *)((int)piVar2 + 0x148a) & 8) != 0)) goto LAB_0046e8d1;
  }
  if (param_1[0x187] == 0) {
    return;
  }
  if (iVar1 != 0) {
    if (param_1[0x187] == 0) {
      return;
    }
    iVar1 = FUN_00a959f0(0);
    if (45.0 <= (float)iVar1) {
      return;
    }
    iVar1 = FUN_00b7c970();
    if (iVar1 < 1) {
      return;
    }
    FUN_00cbc8f0(0x4000,1);
    iVar1 = FUN_00b7a7c0();
    piVar2 = param_1 + 0x250;
    *piVar2 = *piVar2 - iVar1;
    if (-1 < *piVar2) {
      return;
    }
    iVar1 = FUN_00a959f0(0);
    if ((float)iVar1 < 35.0) {
      return;
    }
    FUN_00b96b30();
    FUN_00dc1270(0x41700000,0);
    FUN_00a8caf0(0x11,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x0046e9b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c))();
    return;
  }
LAB_0046e8d1:
  FUN_00b96b30();
  FUN_00dc1270(0x41700000,0);
  FUN_00a8caf0(0x11,0,0,0);
  return;
}

// 0046EC90  FUN_0046ec90  size=157  [run]
void __fastcall FUN_0046ec90(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b34d50;
    (**(code **)(*piVar2 + 4))(&DAT_01b34d50);
    iVar3 = FUN_00dd6d80(puVar4);
    if ((iVar3 != 0) && ((*(byte *)((int)piVar2 + 0x148a) & 0x10) != 0)) goto LAB_0046ecfd;
  }
  if (param_1[0x187] == 0) {
    return;
  }
  if (iVar1 != 0) {
    return;
  }
LAB_0046ecfd:
  FUN_00b96b30();
  FUN_00dc1270(0x41700000,0);
  FUN_00a8caf0(0x11,0,0,0);
  return;
}

// 0046ED30  FUN_0046ed30  size=324  [run]
void __fastcall FUN_0046ed30(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b34d50;
    (**(code **)(*piVar2 + 4))(&DAT_01b34d50);
    iVar3 = FUN_00dd6d80(puVar4);
    if ((iVar3 != 0) && ((*(byte *)((int)piVar2 + 0x148a) & 0x18) != 0)) goto LAB_0046ed91;
  }
  if (param_1[0x187] == 0) {
    return;
  }
  if (iVar1 != 0) {
    if (param_1[0x187] == 0) {
      return;
    }
    iVar1 = FUN_00a959f0(0);
    if (45.0 <= (float)iVar1) {
      return;
    }
    iVar1 = FUN_00b7c970();
    if (iVar1 < 1) {
      return;
    }
    FUN_00cbc8f0(0x4000,1);
    iVar1 = FUN_00b7a7c0();
    piVar2 = param_1 + 0x250;
    *piVar2 = *piVar2 - iVar1;
    if (-1 < *piVar2) {
      return;
    }
    iVar1 = FUN_00a959f0(0);
    if ((float)iVar1 < 35.0) {
      return;
    }
    FUN_00b96b30();
    FUN_00dc1270(0x41700000,0);
    FUN_00a8caf0(0x11,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x0046ee72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c))();
    return;
  }
LAB_0046ed91:
  FUN_00b96b30();
  FUN_00dc1270(0x41700000,0);
  FUN_00a8caf0(0x11,0,0,0);
  return;
}

// 0046F140  FUN_0046f140  size=1045  [run]
void __fastcall FUN_0046f140(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_00a81330();
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0x120,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    FUN_00db3e80(0x41f00000,0,&DAT_01bea1d0);
    piVar3 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar3 + 100))();
    param_1[0xe01] = -1;
    if (iVar2 != 0) {
      iVar4 = FUN_00a7c8a0();
      param_1[0xe01] = *(int *)(iVar4 + 0x4b0);
    }
    FUN_00b80920(iVar2,0x3f800000,0x3f000000,0x3f800000,1);
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4520(0x121,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    break;
  case 4:
    FUN_00aa4520(0x122,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    FUN_00b7dbe0(10);
    goto LAB_0046f30b;
  case 5:
LAB_0046f30b:
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      FUN_00ba6810(1,1);
    }
    iVar4 = FUN_00a8c760(0x20);
    if ((iVar4 != 0) && (param_1[0x250] == 0)) {
      param_1[0x1029] = param_1[0x102a];
      param_1[0x250] = 1;
      FUN_00b89db0(1,0x3dcccccd);
    }
    uVar6 = 0;
    if ((float)param_1[0x1029] <= 0.0) {
      param_1[0x1029] = -0x40800000;
    }
    else {
      uVar6 = 0x40a00000;
    }
    FUN_00b7ab30(uVar6);
    if ((float)param_1[0x1028] < (float)param_1[0xd09]) {
      return;
    }
    fVar1 = (float)param_1[0x1029] - 1.0;
    param_1[0x1029] = (int)fVar1;
    if ((float)param_1[0x102a] - (float)param_1[0x102b] <= fVar1) {
      return;
    }
    if (fVar1 <= (float)param_1[0x102a] - (float)param_1[0x102c]) {
      return;
    }
    if ((param_1[0x33e] & param_1[0x394]) == 0) {
      return;
    }
    uVar6 = 0;
    FUN_00a92f90(0);
    fVar5 = (float10)FUN_00407b40(uVar6);
    param_1[0x24f] = (int)(float)fVar5;
    FUN_00a96030(0,0x3f800000);
    FUN_00b89c20(0x113,6,10,iVar2,0x43340000,0x41f00000,0x41f00000,0);
    DAT_01dc08d8 = 1;
    DAT_01dc08d4 = 0;
    param_1[0x1029] = (int)((float)param_1[0x1029] - 1.0);
    return;
  case 6:
    if (param_1[0xe01] == -1) goto LAB_0046f536;
    FUN_00a9ed60(param_1[0xe01],&DAT_0163de5c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0046f4fa;
  case 7:
LAB_0046f4fa:
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
LAB_0046f536:
      (**(code **)(*param_1 + 0x388))(0);
      FUN_00ba6810(1,1);
      return;
    }
  default:
    goto switchD_0046f174_default;
  }
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_0046f174_default:
  return;
}


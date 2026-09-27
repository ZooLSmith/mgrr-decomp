// src/unsorted/unit_005AE530.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005AE530..005B04E0, 11 functions

#include "mgrr.h"

// 005AE530  FUN_005ae530  size=1  [run]
void FUN_005ae530(void)

{
  return;
}

// 005AE540  FUN_005ae540  size=627  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ae540(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0x9f,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0xdfc] = param_1[0x10];
    param_1[0xdfd] = param_1[0x11];
    param_1[0xdfe] = param_1[0x12];
    param_1[0xdff] = param_1[0x13];
    param_1[0xe00] = param_1[0x25];
    FUN_00db3e80(0x41a00000,0,&DAT_01bea1d0);
    param_1[0x248] = param_1[0x25];
    param_1[0x2dd] = 0;
    FUN_0093db80();
    param_1[0x245] = 0;
    param_1[0x250] = 0;
    fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
    param_1[0x9fb] = (int)(float)fVar3;
    FUN_00b80920(iVar1,0x3f333333,0x3f000000,0x3f800000,1);
    FUN_00b7d7a0(iVar1,0x216,0x8100000);
    (**(code **)(*param_1 + 0x314))();
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4520(0xa0,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar2 = FUN_00ac84d0(0x14);
    (**(code **)(*param_1 + 0x30c))(uVar2,0);
    FUN_00b7d7a0(iVar1,0x217,0x8100000);
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      FUN_00ba6810(1,1);
      FUN_00a8caf0(0xcd,0,0,0);
      iVar1 = FUN_00b7c970();
      if (iVar1 < 1) {
        FUN_00a8caf0(0xdb,0,0,0);
        return;
      }
    }
  }
  return;
}

// 005AE7E0  FUN_005ae7e0  size=1  [run]
void FUN_005ae7e0(void)

{
  return;
}

// 005AE7F0  FUN_005ae7f0  size=3592  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ae7f0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  undefined4 uVar9;
  uint local_20 [8];
  
  piVar7 = (int *)0x0;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    piVar7 = (int *)FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0xc6,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    param_1[0xdfc] = param_1[0x10];
    param_1[0xdfd] = param_1[0x11];
    param_1[0xdfe] = param_1[0x12];
    param_1[0xdff] = param_1[0x13];
    param_1[0xe00] = param_1[0x25];
    FUN_00db3e80(0x41a00000,0,&DAT_01bea1d0);
    param_1[0x248] = param_1[0x25];
    param_1[0x2dd] = 0;
    FUN_0093db80();
    param_1[0x245] = 0;
    param_1[0x250] = 0;
    fVar8 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
    param_1[0x9fb] = (int)(float)fVar8;
    FUN_00b7d7a0(iVar4,0x220,0x8100000);
    goto LAB_005ae94d;
  case 1:
LAB_005ae94d:
    iVar5 = FUN_00a8c760(0xb);
    if ((iVar5 != 0) && (FUN_00cbc8f0(0x1000,1), (*(byte *)(param_1 + 0x33f) & 0x40) != 0)) {
      FUN_00aa4520(199,iVar4,5,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
      FUN_00dda360(0,0x3f19999a,0x3f19999a,6);
    }
    break;
  case 2:
    FUN_00aa4520(200,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar4,0x221,0x8100000);
    break;
  case 3:
  case 5:
  case 7:
  case 0x13:
  case 0x15:
  case 0x17:
  case 0x1b:
    break;
  case 4:
    FUN_00aa4520(0xc9,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar4,0x222,0x8100000);
    break;
  case 6:
    FUN_00aa4520(0xca,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar4,0x223,0x8100000);
    break;
  case 8:
    FUN_00aa4520(0xcb,iVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    sVar3 = FUN_00dde2d0(0,3);
    param_1[0x250] = (int)sVar3;
    FUN_00b7d7a0(iVar4,0x224,0x8000000);
    FUN_00b7e210(1);
  case 9:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 0x20;
    }
    iVar4 = FUN_00a8c760(0x20);
    if (iVar4 != 0) {
      FUN_00b85350(0x40a00000,0x3d23d70a,0x3d23d70a,1,0,0x3dcccccd);
      local_20[0] = 1;
      local_20[1] = 2;
      local_20[2] = 4;
      local_20[3] = 8;
      local_20[4] = 0x10;
      local_20[5] = 0x20;
      local_20[6] = 0x40;
      local_20[7] = 0x80;
      FUN_00cbc8f0(local_20[param_1[0x250]],1);
      if ((param_1[0x33f] & 0x6cf0U) != 0) {
        param_1[0x187] =
             (-(uint)((local_20[param_1[0x250] + 4] & param_1[0x33f]) != 0) & 0xffffffea) + 0x20;
        return;
      }
      return;
    }
    return;
  case 10:
    FUN_00aa4520(0xcd,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8cb60(10);
    FUN_00b7d7a0(iVar4,0x225,0x8100000);
  case 0xb:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a33520(0,0x760,0);
    FUN_00a33520(1,0x760,1);
    FUN_00a33520(0,0x760,2);
    FUN_00a33520(0,0x760,3);
    FUN_00a33520(0,0x760,4);
    iVar4 = FUN_00a94e10(0,0x42380000,0x429a0000);
    if (iVar4 != 0) {
      FUN_00a33520(0,0x760,0);
      FUN_00a33520(0,0x760,1);
      FUN_00a33520(0,0x760,2);
      FUN_00a33520(1,0x760,3);
      FUN_00a33520(0,0x760,4);
      return;
    }
    return;
  case 0xc:
    FUN_00aa4520(0xce,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    sVar3 = FUN_00dde2d0(0,3);
    param_1[0x250] = (int)sVar3;
    FUN_00b7d7a0(iVar4,0x226,0x8100000);
  case 0xd:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x43340000;
      return;
    }
    return;
  case 0xe:
    FUN_00aa4520(0xcf,iVar4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8cb60(0xe);
    param_1[0x248] = 0x3f666666;
    param_1[0x250] = 0;
    FUN_00b7d7a0(iVar4,0x227,0);
    goto LAB_005aee9f;
  case 0xf:
LAB_005aee9f:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - 0.01);
    if (fVar1 - 0.01 < 0.7) {
      param_1[0x248] = 0x3f333333;
    }
    FUN_00a96030(0,param_1[0x248]);
    BehaviorAppBase::thunk_vf64();
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = 0x12;
    }
    FUN_00cbc8f0(0x1000,1);
    if ((*(byte *)(param_1 + 0x33f) & 0x40) != 0) {
      param_1[0x250] = param_1[0x250] + 1;
      if (piVar7 != (int *)0x0) {
        uVar6 = FUN_00ac84d0(0x1e);
        (**(code **)(*piVar7 + 0x30c))(uVar6,1);
      }
      fVar1 = (float)param_1[0x248] + 0.2;
      param_1[0x248] = (int)fVar1;
      if (!NAN(fVar1) && 1.5 < fVar1 != (fVar1 == 1.5)) {
        param_1[0x248] = 0x3fc00000;
      }
      FUN_00aa4520(0xd7,iVar4,5,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
      FUN_00dda360(0,0x3f19999a,0x3f19999a,6);
      return;
    }
    return;
  case 0x10:
    FUN_00aa4520(0xd7,iVar4,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8cb60(0x10);
  case 0x11:
    FUN_00b94790(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = 0x12;
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 0xe;
    }
    FUN_00cbc8f0(0x1000,1);
    iVar4 = FUN_00a8c760(1);
    if (iVar4 != 0) {
      if ((*(byte *)(param_1 + 0x33f) & 0x40) != 0) {
        param_1[0x187] = 0x10;
        return;
      }
      return;
    }
    return;
  case 0x12:
    FUN_00aa4520(0xd0,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8cb60(0x12);
    FUN_00b7d7a0(iVar4,0x228,0x8100000);
    break;
  case 0x14:
    FUN_00aa4520(0xd1,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar4,0x229,0x8100000);
    break;
  case 0x16:
    FUN_00aa4520(0xd2,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar4,0x22a,0x8100000);
    break;
  case 0x18:
    FUN_00aa4520(0xd3,iVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    sVar3 = FUN_00dde2d0(0,3);
    param_1[0x250] = (int)sVar3;
    FUN_00b7d7a0(iVar4,0x22b,0x8000000);
  case 0x19:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 0x20;
    }
    iVar4 = FUN_00a8c760(0x20);
    if (iVar4 != 0) {
      FUN_00b85350(0x40a00000,0x3d23d70a,0x3d23d70a,1,0,0x3dcccccd);
      local_20[4] = 1;
      local_20[5] = 2;
      local_20[6] = 4;
      local_20[7] = 8;
      local_20[0] = 0x10;
      local_20[1] = 0x20;
      local_20[2] = 0x40;
      local_20[3] = 0x80;
      FUN_00cbc8f0(local_20[param_1[0x250] + 4],1);
      if ((param_1[0x33f] & 0x6cf0U) != 0) {
        param_1[0x187] =
             (-(uint)((local_20[param_1[0x250]] & param_1[0x33f]) != 0) & 0xfffffffa) + 0x20;
        return;
      }
      return;
    }
    return;
  case 0x1a:
    FUN_00aa4520(0xd4,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8cb60(0x1a);
    FUN_00b7d7a0(iVar4,0x22c,0x8000000);
    break;
  case 0x1c:
    FUN_00aa4520(0xd5,iVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8cb60(0x1c);
    uVar9 = 0x8100000;
    uVar6 = 0x22d;
    goto LAB_005af380;
  case 0x1d:
  case 0x21:
    goto switchD_005ae854_caseD_1d;
  case 0x1e:
    FUN_00aa4520(0xd6,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar4,0x22e,0x8100000);
  case 0x1f:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x388);
      param_1[0x2dd] = 1;
      (*pcVar2)(0);
      FUN_00ba6810(1,0);
      return;
    }
    return;
  case 0x20:
    FUN_00aa4520(0xd9,iVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8cb60(0x20);
    uVar6 = FUN_00ac84d0(0x16);
    (**(code **)(*param_1 + 0x30c))(uVar6,0);
    uVar9 = 0x8000000;
    uVar6 = 0x22f;
LAB_005af380:
    FUN_00b7d7a0(iVar4,uVar6,uVar9);
switchD_005ae854_caseD_1d:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar4 = FUN_00a8c760(0xb);
    if (iVar4 != 0) {
      iVar4 = FUN_00a12210(0xf10);
      if (iVar4 != 0) {
        iVar4 = FUN_00a12210(0xf10);
        fVar1 = *(float *)(iVar4 + 0x54) * 10.0;
        if (0.01 <= fVar1) {
          if (2.01 < fVar1) {
            fVar1 = 2.0;
          }
        }
        else {
          fVar1 = 0.01;
        }
        FUN_00b7ab80(0x40000000,fVar1);
        return;
      }
      return;
    }
    return;
  case 0x22:
    FUN_00aa4520(0xda,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar4,0x230,0x8100000);
  case 0x23:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      return;
    }
    pcVar2 = *(code **)(*param_1 + 0x388);
    param_1[0x2dd] = 1;
    (*pcVar2)(0);
    FUN_00ba6810(1,0);
    FUN_00a8caf0(0xcd,0,0,0);
    iVar4 = FUN_00b7c970();
    if (0 < iVar4) {
      return;
    }
    FUN_00a8caf0(0xdb,0,0,0);
    return;
  default:
    goto switchD_005ae854_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_005ae854_default:
  return;
}

// 005AF6A0  FUN_005af6a0  size=1  [run]
void FUN_005af6a0(void)

{
  return;
}

// 005AF6B0  FUN_005af6b0  size=1855  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005af6b0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  uint local_20 [8];
  
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0xeb,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    param_1[0xdfc] = param_1[0x10];
    param_1[0xdfd] = param_1[0x11];
    param_1[0xdfe] = param_1[0x12];
    param_1[0xdff] = param_1[0x13];
    param_1[0xe00] = param_1[0x25];
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    param_1[0x248] = param_1[0x25];
    param_1[0x2dd] = 0;
    FUN_0093db80();
    param_1[0x245] = 0;
    param_1[0x250] = 0;
    fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
    param_1[0x9fb] = (int)(float)fVar5;
    FUN_00b7d7a0(iVar4,0x233,0x8100000);
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4520(0xec,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar4,0x234,0x8100000);
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar4 = FUN_00a8c760(0xb);
    if (iVar4 != 0) {
      FUN_00b7e210(1);
      return;
    }
    break;
  case 4:
    FUN_00aa4520(0xed,iVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    sVar3 = FUN_00dde2d0(0,3);
    param_1[0x250] = (int)sVar3;
    FUN_00b7d7a0(iVar4,0x235,0x8000000);
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = 0xc;
    }
    iVar4 = FUN_00a8c760(0x20);
    if (iVar4 != 0) {
      FUN_00b85350(0x40a00000,0x3d23d70a,0x3d23d70a,1,0,0x3dcccccd);
      local_20[0] = 1;
      local_20[1] = 2;
      local_20[2] = 4;
      local_20[3] = 8;
      local_20[4] = 0x10;
      local_20[5] = 0x20;
      local_20[6] = 0x40;
      local_20[7] = 0x80;
      FUN_00cbc8f0(local_20[param_1[0x250]],1);
      if ((param_1[0x33f] & 0x6cf0U) != 0) {
        param_1[0x187] =
             (-(uint)((local_20[param_1[0x250] + 4] & param_1[0x33f]) != 0) & 0xfffffffa) + 0xc;
        return;
      }
    }
    break;
  case 6:
    FUN_00aa4520(0xef,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8cb60(6);
    FUN_00b7d7a0(iVar4,0x239,0x8100000);
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 8:
    FUN_00aa4520(0xf0,iVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    sVar3 = FUN_00dde2d0(0,3);
    param_1[0x250] = (int)sVar3;
    uVar6 = 0x23a;
    goto LAB_005afaf9;
  case 9:
  case 0xf:
    goto switchD_005af714_caseD_9;
  case 10:
    FUN_00aa4520(0xf1,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar4,0x23b,0x8100000);
  case 0xb:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x388);
      param_1[0x2dd] = 1;
      (*pcVar1)(0);
      FUN_00ba6810(1,0);
      return;
    }
    break;
  case 0xc:
    FUN_00aa4520(0xf3,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8cb60(0xc);
    uVar6 = FUN_00ac84d0(0x1d);
    (**(code **)(*param_1 + 0x30c))(uVar6,0);
    FUN_00b7d7a0(iVar4,0x236,0x8100000);
  case 0xd:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 0xe:
    FUN_00aa4520(0xf4,iVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar6 = 0x237;
LAB_005afaf9:
    FUN_00b7d7a0(iVar4,uVar6,0x8000000);
switchD_005af714_caseD_9:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar4 = FUN_00a8c760(0xb);
    if ((iVar4 != 0) && (iVar4 = FUN_00a12210(0xf10), iVar4 != 0)) {
      iVar4 = FUN_00a12210(0xf10);
      fVar2 = *(float *)(iVar4 + 0x54) * 10.0;
      if (0.01 <= fVar2) {
        if (2.01 < fVar2) {
          fVar2 = 2.0;
        }
      }
      else {
        fVar2 = 0.01;
      }
      FUN_00b7ab80(0x40000000,fVar2);
      return;
    }
    break;
  case 0x10:
    FUN_00aa4520(0xf5,iVar4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar4,0x238,0x8100000);
  case 0x11:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x388);
      param_1[0x2dd] = 1;
      (*pcVar1)(0);
      FUN_00ba6810(1,0);
      FUN_00a8caf0(0xcd,0,0,0);
      iVar4 = FUN_00b7c970();
      if (iVar4 < 1) {
        FUN_00a8caf0(0xdb,0,0,0);
        return;
      }
    }
  }
  return;
}

// 005AFE50  FUN_005afe50  size=1  [run]
void FUN_005afe50(void)

{
  return;
}

// 005B0220  FUN_005b0220  size=1  [run]
void FUN_005b0220(void)

{
  return;
}

// 005B0230  FUN_005b0230  size=627  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005b0230(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0xfe,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0xdfc] = param_1[0x10];
    param_1[0xdfd] = param_1[0x11];
    param_1[0xdfe] = param_1[0x12];
    param_1[0xdff] = param_1[0x13];
    param_1[0xe00] = param_1[0x25];
    FUN_00db3e80(0x41a00000,0,&DAT_01bea1d0);
    param_1[0x248] = param_1[0x25];
    param_1[0x2dd] = 0;
    FUN_0093db80();
    param_1[0x245] = 0;
    param_1[0x250] = 0;
    fVar3 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
    param_1[0x9fb] = (int)(float)fVar3;
    FUN_00b80920(iVar1,0x3f333333,0x3f000000,0x3f800000,1);
    FUN_00b7d7a0(iVar1,0x218,0x8100000);
    (**(code **)(*param_1 + 0x314))();
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4520(0xff,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar2 = FUN_00ac84d0(0x13);
    (**(code **)(*param_1 + 0x30c))(uVar2,0);
    FUN_00b7d7a0(iVar1,0x219,0x8100000);
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      FUN_00ba6810(1,1);
      FUN_00a8caf0(0xcd,0,0,0);
      iVar1 = FUN_00b7c970();
      if (iVar1 < 1) {
        FUN_00a8caf0(0xdb,0,0,0);
        return;
      }
    }
  }
  return;
}

// 005B04D0  FUN_005b04d0  size=1  [run]
void FUN_005b04d0(void)

{
  return;
}

// 005B04E0  FUN_005b04e0  size=841  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005b04e0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0x186,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar1,0x21a,0x8100000);
    param_1[0xdfc] = param_1[0x10];
    param_1[0xdfd] = param_1[0x11];
    param_1[0xdfe] = param_1[0x12];
    param_1[0xdff] = param_1[0x13];
    param_1[0xe00] = param_1[0x25];
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    param_1[0x248] = param_1[0x25];
    param_1[0x2dd] = 0;
    FUN_0093db80();
    param_1[0x245] = 0;
    param_1[0x250] = 0;
    fVar2 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
    param_1[0x9fb] = (int)(float)fVar2;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    DAT_01bea094 = DAT_01bea094 & 0xffffffdf;
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
    break;
  case 2:
    FUN_00aa4520(0x187,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar1,0x21b,0x8100000);
    break;
  case 4:
    FUN_00aa4520(0x188,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar1,0x21c,0x8100000);
    break;
  case 6:
    FUN_00aa4520(0x189,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar1,0x21d,0x8100000);
    break;
  case 8:
    FUN_00aa4520(0x18a,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar1,0x21e,0x8100000);
    break;
  case 10:
    FUN_00aa4520(0x18b,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar1,0x21f,0x8100000);
  case 0xb:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      FUN_00ba6810(1,0);
      return;
    }
  default:
    goto switchD_005b0537_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_005b0537_default:
  return;
}


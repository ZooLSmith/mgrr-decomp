// src/unsorted/unit_00466DE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00466DE0..00467E70, 9 functions

#include "mgrr.h"

// 00466DE0  FUN_00466de0  size=120  [run]
void __fastcall FUN_00466de0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a8c760(10);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    uVar2 = FUN_00a81330();
    iVar1 = (**(code **)(iVar1 + 0x158))(0x37,uVar2);
    if (iVar1 != 0) {
      FUN_00a8caf0(0x2f,0,0,0);
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_009f8b10();
        FUN_00a7c950();
      }
      param_1[0x195] = -1;
      param_1[0x504] = 0x42700000;
    }
  }
  return;
}

// 00466E70  FUN_00466e70  size=1008  [run]
void __fastcall FUN_00466e70(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xee,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00c15aa0();
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar3 = FUN_00ac4780();
    if (0 < iVar3) {
      uVar2 = 0x3e0f5c29;
      fVar1 = (float)param_1[0x244] * 0.13962634;
      if (param_1[0x448] == 0) {
        iVar3 = FUN_00ac4780();
        if (iVar3 < 3) {
          uVar2 = 0x3d75c28f;
          fVar1 = (float)param_1[0x244] * 0.06981317;
        }
        else {
          uVar2 = 0x3e0f5c29;
        }
      }
      (**(code **)(*param_1 + 0x308))(uVar2,0x393702d3,fVar1,0);
    }
    iVar3 = FUN_00a952e0(0,0x42340000);
    if ((iVar3 != 0) && (iVar3 = FUN_00ac4780(), 2 < iVar3)) {
      uVar2 = 0x3e0f5c29;
      fVar1 = (float)param_1[0x244] * 0.13962634;
      if (param_1[0x448] == 0) {
        iVar3 = FUN_00ac4780();
        if (iVar3 < 3) {
          uVar2 = 0x3d75c28f;
          fVar1 = (float)param_1[0x244] * 0.06981317;
        }
        else {
          uVar2 = 0x3e0f5c29;
        }
      }
      (**(code **)(*param_1 + 0x308))(uVar2,0x393702d3,fVar1,0);
      param_1[0x187] = 2;
    }
    break;
  case 2:
    iVar3 = FUN_00ac4780();
    if (iVar3 < 3) {
      uVar2 = 0x3d088889;
    }
    else {
      uVar2 = 0x3e800000;
    }
    FUN_00aa4080(0xef,0,uVar2,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42700000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar3 = FUN_00ac4780();
    if (0 < iVar3) {
      uVar2 = 0x3df5c28f;
      fVar1 = (float)param_1[0x244] * 0.08726646;
      if (param_1[0x448] == 0) {
        iVar3 = FUN_00ac4780();
        if (iVar3 < 3) {
          uVar2 = 0x3d75c28f;
          fVar1 = (float)param_1[0x244] * 0.06981317;
        }
        else {
          uVar2 = 0x3df5c28f;
        }
      }
      (**(code **)(*param_1 + 0x308))(uVar2,0x393702d3,fVar1,0);
    }
    break;
  case 4:
    FUN_00aa4080(0xf0,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x504] = 0x42700000;
    }
  }
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    uVar2 = 0x3df5c28f;
    fVar1 = (float)param_1[0x244] * 0.13962634;
    if (param_1[0x448] == 0) {
      iVar3 = FUN_00ac4780();
      if (iVar3 < 3) {
        uVar2 = 0x3d75c28f;
        fVar1 = (float)param_1[0x244] * 0.06981317;
      }
      else {
        uVar2 = 0x3df5c28f;
      }
    }
    (**(code **)(*param_1 + 0x308))(uVar2,0x393702d3,fVar1,0);
  }
  return;
}

// 004672A0  FUN_004672a0  size=120  [run]
void __fastcall FUN_004672a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a8c760(10);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    uVar2 = FUN_00a81330();
    iVar1 = (**(code **)(iVar1 + 0x158))(0x39,uVar2);
    if (iVar1 != 0) {
      FUN_00a8caf0(0x2f,0,0,0);
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_009f8b10();
        FUN_00a7c950();
      }
      param_1[0x195] = -1;
      param_1[0x504] = 0x42700000;
    }
  }
  return;
}

// 00467850  FUN_00467850  size=32  [run]
void __fastcall FUN_00467850(int *param_1)

{
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  return;
}

// 00467870  FUN_00467870  size=32  [run]
void __fastcall FUN_00467870(int *param_1)

{
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  return;
}

// 00467890  FUN_00467890  size=649  [run]
void __fastcall FUN_00467890(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_00a81330();
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4520(0x125,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    FUN_00db3e80(0x41f00000,0,&DAT_01bea1d0);
    param_1[0x250] = 0;
    FUN_00b7dbe0(0x10);
    FUN_00b80920(iVar2,0x3f800000,0x3f000000,0x3f800000,1);
    piVar3 = (int *)FUN_00c209f0();
    (**(code **)(*piVar3 + 0x14))(0x10);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
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
    FUN_00b89db0(0,0x3dcccccd);
  }
  uVar6 = 0;
  if ((float)param_1[0x1029] <= 0.0) {
    param_1[0x1029] = -0x40800000;
  }
  else {
    uVar6 = 0x40a00000;
  }
  FUN_00b7ab30(uVar6);
  if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
    fVar1 = (float)param_1[0x1029] - 1.0;
    param_1[0x1029] = (int)fVar1;
    if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
        ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
       ((param_1[0x33e] & param_1[0x394]) != 0)) {
      uVar6 = 0;
      FUN_00a92f90(0);
      fVar5 = (float10)FUN_00407b40(uVar6);
      param_1[0x24f] = (int)(float)fVar5;
      FUN_00b89c20(0xb,0,0x10,iVar2,0x43340000,0x41f00000,0x41f00000,0);
      DAT_01dc08d4 = 0;
      DAT_01dc08d8 = 1;
      param_1[0x1029] = -0x40800000;
      if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        FUN_00a8cb60(2);
        return;
      }
    }
  }
  return;
}

// 00467B20  FUN_00467b20  size=32  [run]
void __fastcall FUN_00467b20(int *param_1)

{
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  return;
}

// 00467B40  FUN_00467b40  size=785  [run]
void __fastcall FUN_00467b40(int *param_1)

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
    FUN_00aa4520(0x127,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    FUN_00db3e80(0x41f00000,0,&DAT_01bea1d0);
    FUN_00b80920(iVar2,0x3f800000,0x3f000000,0x3f800000,1);
    piVar3 = (int *)FUN_00c209f0();
    (**(code **)(*piVar3 + 0x14))(0x10);
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4520(0x129,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    FUN_00b7dbe0(0x11);
    goto LAB_00467c9c;
  case 3:
LAB_00467c9c:
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
      FUN_00b89db0(0,0x3dcccccd);
    }
    uVar6 = 0;
    if ((float)param_1[0x1029] <= 0.0) {
      param_1[0x1029] = -0x40800000;
    }
    else {
      uVar6 = 0x40a00000;
    }
    FUN_00b7ab30(uVar6);
    if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
      fVar1 = (float)param_1[0x1029] - 1.0;
      param_1[0x1029] = (int)fVar1;
      if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
          ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
         ((param_1[0x33e] & param_1[0x394]) != 0)) {
        uVar6 = 0;
        FUN_00a92f90(0);
        fVar5 = (float10)FUN_00407b40(uVar6);
        param_1[0x24f] = (int)(float)fVar5;
        FUN_00b89c20(0,0,0x11,iVar2,0x43340000,0x41f00000,0x41f00000,0);
        DAT_01dc08d4 = 0;
        DAT_01dc08d8 = 1;
        if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
          FUN_00a8cb60(4);
        }
        param_1[0x1029] = -0x40800000;
        return;
      }
    }
  default:
    goto switchD_00467b6e_default;
  }
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00467b6e_default:
  return;
}

// 00467E70  FUN_00467e70  size=30  [run]
undefined4 __thiscall FUN_00467e70(undefined4 param_1,byte param_2)

{
  lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


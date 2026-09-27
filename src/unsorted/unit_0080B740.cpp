// src/unsorted/unit_0080B740.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0080B740..0080C240, 8 functions

#include "mgrr.h"

// 0080B740  FUN_0080b740  size=215  [run]
void __fastcall FUN_0080b740(int param_1)

{
  int iVar1;
  
  *(float *)(param_1 + 0x2078) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x2078);
  if (((*(int *)(param_1 + 0xa84) == 0) || (iVar1 = FUN_00a8cac0(), iVar1 == 0)) ||
     (3 < *(int *)(param_1 + 0x61c))) {
    return;
  }
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  iVar1 = FUN_00a8cac0();
  if (((iVar1 != 3) || (*(float *)(param_1 + 0xaa0) <= 1.3962634)) &&
     ((iVar1 = FUN_00a8cac0(), iVar1 != 3 || (900.0 <= *(float *)(param_1 + 0xa90))))) {
    if (*(int *)(param_1 + 0x2074) == 0) {
      return;
    }
    if (*(float *)(param_1 + 0x2078) <= 300.0) {
      return;
    }
    if (*(float *)(param_1 + 0xa90) <= 2500.0) {
      return;
    }
    FUN_00a8caf0(3,0,0,0);
    return;
  }
  FUN_00a8cb60(4);
  return;
}

// 0080B820  FUN_0080b820  size=253  [run]
void FUN_0080b820(int param_1,float *param_2,undefined4 param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float local_c [2];
  float local_4;
  
  FUN_00a581b0(local_c,0,param_3);
  iVar6 = *(int *)(param_1 + 0x44);
  iVar5 = 0;
  local_c[0] = *param_2 - local_c[0];
  local_4 = param_2[2] - local_4;
  if (3 < iVar6) {
    iVar3 = 0;
    iVar4 = (iVar6 - 4U >> 2) + 1;
    iVar5 = iVar4 * 4;
    do {
      *(float *)(*(int *)(param_1 + 0x3c) + iVar3) =
           local_c[0] + *(float *)(*(int *)(param_1 + 0x3c) + iVar3);
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 8 + iVar3);
      *pfVar1 = local_4 + *pfVar1;
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 0xc + iVar3);
      *pfVar1 = local_c[0] + *pfVar1;
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 0x14 + iVar3);
      *pfVar1 = local_4 + *pfVar1;
      *(float *)(*(int *)(param_1 + 0x3c) + 0x18 + iVar3) =
           *(float *)(*(int *)(param_1 + 0x3c) + 0x18 + iVar3) + local_c[0];
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 0x20 + iVar3);
      *pfVar1 = local_4 + *pfVar1;
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 0x24 + iVar3);
      *pfVar1 = local_c[0] + *pfVar1;
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 0x2c + iVar3);
      iVar3 = iVar3 + 0x30;
      iVar4 = iVar4 + -1;
      *pfVar1 = local_4 + *pfVar1;
    } while (iVar4 != 0);
  }
  if (iVar5 < iVar6) {
    iVar3 = iVar5 * 0xc;
    iVar6 = iVar6 - iVar5;
    do {
      *(float *)(*(int *)(param_1 + 0x3c) + iVar3) =
           *(float *)(*(int *)(param_1 + 0x3c) + iVar3) + local_c[0];
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 8 + iVar3);
      pfVar2 = (float *)(*(int *)(param_1 + 0x3c) + 8 + iVar3);
      iVar3 = iVar3 + 0xc;
      iVar6 = iVar6 + -1;
      *pfVar2 = *pfVar1 + local_4;
    } while (iVar6 != 0);
  }
  return;
}

// 0080B920  FUN_0080b920  size=1595  [run]
void __fastcall FUN_0080b920(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((param_1[0x187] != 0) && (param_1[0x81f] != 0)) {
    FUN_00a8caf0(0x27,0,0,0);
    param_1[0x82a] = 0;
    param_1[0x84c] = -1;
    return;
  }
  if ((float)param_1[0x833] <= 0.0) {
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
  }
  param_1[0x842] = 0x43f00000;
  param_1[0x588] = 1;
  param_1[0x587] = 1;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x251] = 0;
    param_1[0x187] = 1;
    FUN_008087c0();
    break;
  case 1:
    break;
  case 2:
    goto LAB_0080bb20;
  case 3:
    FUN_00aa4080(0x17,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43b40000;
    iVar2 = FUN_00a7f600(0xf0012);
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      fVar4 = (float10)fpatan((float10)*(float *)(iVar2 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar2 + 0x48) - (float10)(float)param_1[0x12]);
      fVar5 = (float10)fpatan((float10)*(float *)(param_1[0x2a1] + 0x40) -
                              (float10)(float)param_1[0x10],
                              (float10)*(float *)(param_1[0x2a1] + 0x48) -
                              (float10)(float)param_1[0x12]);
      fVar4 = (float10)FUN_00ddba30((float)(fVar4 - fVar5));
      if (fVar4 * fVar4 < (float10)0.06853892) {
        param_1[0x250] = 1;
      }
    }
    iVar2 = FUN_008086d0();
    if ((iVar2 != 0) && (param_1[0x251] == 2)) {
      param_1[0x250] = 1;
    }
    goto LAB_0080bcd5;
  case 4:
LAB_0080bcd5:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((1.5707964 < (float)param_1[0x2a8]) || (fVar1 - (float)param_1[0x244] < 0.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(param_1[0x249],0x3f800000);
    if ((float)param_1[0x2a4] <= 529.0) {
      return;
    }
    iVar2 = param_1[0x2a1];
    if (iVar2 == 0) {
      return;
    }
    goto LAB_0080bd51;
  case 5:
    param_1[0x187] = 6;
    param_1[0x248] = 0x41a00000;
    goto LAB_0080bdb2;
  case 6:
LAB_0080bdb2:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (iVar2 = FUN_00a94e10(0,0,0x40a00000), iVar2 != 0))
    {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(param_1[0x249],0x3f800000);
    return;
  case 7:
    FUN_00aa4080(0x18,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x251] = param_1[0x251] + 1;
    param_1[0x248] = 0x44160000;
    param_1[0x187] = param_1[0x187] + 1;
    iVar2 = param_1[0x251];
    iVar3 = FUN_008086d0();
    if (((iVar3 != 0) && (param_1[0x128] == 1)) && (iVar2 < 3)) {
      param_1[0x187] = 1;
    }
    goto LAB_0080be85;
  case 8:
LAB_0080be85:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8caf0(0,0,0,0);
    }
    iVar2 = FUN_00a8c760(4);
    if ((iVar2 != 0) &&
       (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0))) {
      if (0.7853982 < (float)param_1[0x2a7]) {
        FUN_00a8caf0(9,0,0,0);
      }
      if (2.1816616 < (float)param_1[0x2a7]) {
        FUN_00a8caf0(10,0,0,0);
      }
      if ((float)param_1[0x2a7] < -0.7853982) {
        FUN_00a8caf0(7,0,0,0);
      }
      if ((float)param_1[0x2a7] < -2.1816616) {
        FUN_00a8caf0(8,0,0,0);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_0080ba4c_default;
  }
  FUN_00aa4080(0x16,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x248] = 0x43d20000;
  param_1[0x81e] = 0;
  param_1[0x249] = 0x3f800000;
  iVar2 = FUN_00ac4780();
  if (1 < iVar2) {
    if (3025.0 < (float)param_1[0x2a4]) {
      param_1[0x249] = 0x3f933333;
    }
    if (6400.0 < (float)param_1[0x2a4]) {
      param_1[0x249] = 0x3fa66666;
    }
  }
  param_1[0x81f] = 0;
  param_1[0x250] = 0;
  FUN_00a8d280();
LAB_0080bb20:
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  FUN_00ac80a0(param_1[0x249],0x3f800000);
  if (625.0 < (float)param_1[0x2a4]) {
    iVar2 = FUN_00a959f0(0);
    if ((float)iVar2 < 300.0 == ((float)iVar2 == 300.0)) {
      if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
        iVar2 = param_1[0x2a1];
LAB_0080bd51:
        FUN_00a8e880(iVar2 + 0x50);
        (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.02094395,0);
        return;
      }
    }
    else if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
      return;
    }
  }
switchD_0080ba4c_default:
  return;
}

// 0080BF80  FUN_0080bf80  size=127  [run]
void __fastcall FUN_0080bf80(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_00ac4780();
    if (1 < iVar2) {
      FUN_00a8c760(4);
      iVar2 = FUN_00a8c760(4);
      if ((((iVar2 != 0) && (*(float *)(param_1 + 0xa90) <= 5625.0)) &&
          (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 1600.0 < fVar1 != (fVar1 == 1600.0)))
         && ((*(float *)(param_1 + 0xaa0) < 1.5707964 && (*(int *)(param_1 + 0x1dd4) == 0)))) {
        FUN_00a8caf0(0x1b,0,0,0);
      }
    }
  }
  return;
}

// 0080C020  FUN_0080c020  size=110  [run]
void __fastcall FUN_0080c020(int param_1)

{
  if ((*(int *)(param_1 + 0x3070) != 0) && (*(float *)(param_1 + 0xa90) < 1600.0)) {
    (**(code **)(*(int *)(param_1 + 0x1660) + 8))(0x41200000,0,0);
    if (*(int *)(param_1 + 0x1610) != 0) {
      FUN_00ad0a90();
    }
    *(undefined4 *)(param_1 + 0x1610) = 0;
    FUN_00a8caf0(0x17,0,0,0);
  }
  return;
}

// 0080C090  FUN_0080c090  size=301  [run]
void __fastcall FUN_0080c090(int param_1)

{
  float fVar1;
  int iVar2;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = 14.0;
  local_1c = 0.0;
  local_18 = 0.0;
  iVar2 = FUN_00a12210(0x13);
  if (iVar2 != 0) {
    D3DXVec3TransformNormal(&local_20,&local_20,iVar2 + 0x10);
    local_20 = *(float *)(iVar2 + 0x40) + local_20;
    local_1c = *(float *)(iVar2 + 0x44) + local_1c;
    local_18 = *(float *)(iVar2 + 0x48) + local_18;
  }
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_00a8c760(4);
    if ((((iVar2 != 0) && (*(float *)(param_1 + 0xa90) <= 2025.0)) &&
        (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0))) &&
       ((*(float *)(param_1 + 0xaa0) < 1.5707964 && (*(int *)(param_1 + 0x1dcc) == 0)))) {
      FUN_00a8caf0(0x17,0,0,0);
    }
    iVar2 = FUN_00a8c760(4);
    if (((iVar2 != 0) && (*(float *)(param_1 + 0xa90) <= 5625.0)) &&
       ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 1600.0 < fVar1 != (fVar1 == 1600.0) &&
        ((*(float *)(param_1 + 0xaa0) < 2.6179938 && (*(int *)(param_1 + 0x1dd4) == 0)))))) {
      FUN_00a8caf0(0x1b,0,0,0);
    }
  }
  return;
}

// 0080C1C0  FUN_0080c1c0  size=127  [run]
void __fastcall FUN_0080c1c0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_00ac4780();
    if (1 < iVar2) {
      FUN_00a8c760(4);
      iVar2 = FUN_00a8c760(4);
      if ((((iVar2 != 0) && (*(float *)(param_1 + 0xa90) <= 5625.0)) &&
          (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 1600.0 < fVar1 != (fVar1 == 1600.0)))
         && ((*(float *)(param_1 + 0xaa0) < 2.6179938 && (*(int *)(param_1 + 0x1dd4) == 0)))) {
        FUN_00a8caf0(0x1b,0,0,0);
      }
    }
  }
  return;
}

// 0080C240  FUN_0080c240  size=186  [run]
void __fastcall FUN_0080c240(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (((*(ushort *)(param_1 + 0xe94) & 4) != 0) && ((*(ushort *)(param_1 + 0xe94) & 2) != 0)) {
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 != 0) {
      sVar1 = FUN_00dde2d0(0,2);
      if (((sVar1 == 1) && (*(float *)(param_1 + 0xaa0) < 1.0471976)) &&
         (*(float *)(param_1 + 0xa8c) <= 1225.0)) {
        FUN_00a8caf0(3,0,0,0);
        sVar1 = FUN_00dde2d0(0,2);
        if (sVar1 == 1) {
          FUN_00a8caf0(0x1d,0,0,0);
        }
        sVar1 = FUN_00dde2d0(0,2);
        if (sVar1 == 1) {
          FUN_00a8caf0(0x16,0,0,0);
        }
      }
    }
  }
  return;
}


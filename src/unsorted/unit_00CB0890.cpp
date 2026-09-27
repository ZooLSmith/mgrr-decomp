// src/unsorted/unit_00CB0890.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB0890..00CB1CD0, 22 functions

#include "mgrr.h"

// 00CB0890  FUN_00cb0890  size=123  [run]
undefined4 __thiscall FUN_00cb0890(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00f9cae0(0x18,param_3,*(undefined4 *)(param_2 + 4));
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00f9c7d0(param_4,*(undefined4 *)(param_2 + 8));
  if (iVar1 != 0) {
    uVar2 = FUN_00f99ca0();
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    iVar1 = FUN_00f999c0();
    *(int *)(param_1 + 0x54) = iVar1;
    *(undefined4 *)(param_1 + 0xe4) = 1;
    if ((*(int *)(param_1 + 0x50) != 0) && (iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

// 00CB0910  FUN_00cb0910  size=43  [run]
void __fastcall FUN_00cb0910(int param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00f99d30();
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_00f99a40();
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}

// 00CB0980  FUN_00cb0980  size=137  [run]
void __thiscall FUN_00cb0980(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  }
  else {
    puVar2 = (undefined4 *)(param_1 + 0x60);
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) - 1.0;
  *(undefined4 *)(param_1 + 0xa0) = param_3;
  *(undefined4 *)(param_1 + 0xfc) = param_4;
  return;
}

// 00CB0A10  FUN_00cb0a10  size=57  [run]
void __thiscall FUN_00cb0a10(int param_1,float param_2,float param_3)

{
  int iVar1;
  
  iVar1 = FUN_00f98a90();
  *(float *)(param_1 + 0xf4) = param_2 / (float)iVar1;
  iVar1 = FUN_00f98aa0();
  *(float *)(param_1 + 0xf8) = -(param_3 / (float)iVar1);
  return;
}

// 00CB0A50  FUN_00cb0a50  size=218  [run]
void __thiscall
FUN_00cb0a50(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 == 0) {
    local_10 = *(undefined4 *)(param_1 + 0xf4);
    local_c = *(undefined4 *)(param_1 + 0xf8);
  }
  else {
    local_8 = 0;
    local_4 = 0;
    local_10 = 0;
    local_c = 0;
  }
  FUN_00fce3a0(&local_10);
  FUN_00fce3c0(*(undefined4 *)(param_1 + 0xe8));
  FUN_00fd1130(*(undefined4 *)(param_1 + 0x58),(param_4 != 0) + '\x01');
  FUN_00fd11c0(param_5,1);
  FUN_00fce360(param_3);
  FUN_00fce340(param_1 + 0x60);
  FUN_00fce380(param_1 + 0xec);
  FUN_00fce420(*(undefined4 *)(param_1 + 300));
  FUN_00f990e0(&DAT_01dc3e10);
  return;
}

// 00CB0B30  FUN_00cb0b30  size=241  [run]
void __thiscall
FUN_00cb0b30(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00eb9070(DAT_01b83bd8,1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fd16e0(uVar1);
  if (param_2 == 0) {
    local_10 = *(undefined4 *)(param_1 + 0xf4);
    local_c = *(undefined4 *)(param_1 + 0xf8);
  }
  else {
    local_8 = 0;
    local_4 = 0;
    local_10 = 0;
    local_c = 0;
  }
  FUN_00fce8b0(&local_10);
  FUN_00fce8d0(*(undefined4 *)(param_1 + 0xe8));
  FUN_00fd15c0(*(undefined4 *)(param_1 + 0x58),(param_4 != 0) + '\x01');
  FUN_00fd1650(param_5,1);
  FUN_00fce870(param_3);
  FUN_00fce850(param_1 + 0x60);
  FUN_00fce890(param_1 + 0xec);
  FUN_00f990e0(&DAT_01dc3e98);
  return;
}

// 00CB0C30  FUN_00cb0c30  size=241  [run]
void __thiscall
FUN_00cb0c30(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00eb9070(DAT_01b83bd8,1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fd1880(uVar1);
  if (param_2 == 0) {
    local_10 = *(undefined4 *)(param_1 + 0xf4);
    local_c = *(undefined4 *)(param_1 + 0xf8);
  }
  else {
    local_8 = 0;
    local_4 = 0;
    local_10 = 0;
    local_c = 0;
  }
  FUN_00fce9f0(&local_10);
  FUN_00fcea10(*(undefined4 *)(param_1 + 0xe8));
  FUN_00fd1760(*(undefined4 *)(param_1 + 0x58),(param_4 != 0) + '\x01');
  FUN_00fd17f0(param_5,1);
  FUN_00fce9b0(param_3);
  FUN_00fce990(param_1 + 0x60);
  FUN_00fce9d0(param_1 + 0xec);
  FUN_00f990e0(&DAT_01dc3f20);
  return;
}

// 00CB0D30  FUN_00cb0d30  size=241  [run]
void __thiscall
FUN_00cb0d30(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00eb9070(DAT_01b83bd8,1);
  uVar1 = FUN_00fa0740(0);
  FUN_00fd1a20(uVar1);
  if (param_2 == 0) {
    local_10 = *(undefined4 *)(param_1 + 0xf4);
    local_c = *(undefined4 *)(param_1 + 0xf8);
  }
  else {
    local_8 = 0;
    local_4 = 0;
    local_10 = 0;
    local_c = 0;
  }
  FUN_00fceb10(&local_10);
  FUN_00fceb50(*(undefined4 *)(param_1 + 0xe8));
  FUN_00fd1900(*(undefined4 *)(param_1 + 0x58),(param_4 != 0) + '\x01');
  FUN_00fd1990(param_5,1);
  FUN_00fceaf0(param_3);
  FUN_00fcead0(param_1 + 0x60);
  FUN_00fceb30(param_1 + 0xec);
  FUN_00f990e0(&DAT_01dc3fa8);
  return;
}

// 00CB0E30  FUN_00cb0e30  size=354  [run]
void __thiscall
FUN_00cb0e30(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  if (param_2 == 0) {
    local_10 = *(undefined4 *)(param_1 + 0xf4);
    local_c = *(undefined4 *)(param_1 + 0xf8);
  }
  else {
    local_8 = 0.0;
    local_4 = 0.0;
    local_10 = 0;
    local_c = 0;
  }
  FUN_00fce510(&local_10);
  FUN_00fce530(*(undefined4 *)(param_1 + 0xe8));
  FUN_00fd1260(*(undefined4 *)(param_1 + 0x58),(param_4 != 0) + '\x01');
  FUN_00fd1310(param_5,1);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x110) != 0) {
    uVar1 = -(uint)(DAT_01dc2d0c != 0) & DAT_01dc2d08;
  }
  FUN_00fd13c0(uVar1,1);
  FUN_00fce4d0(param_3);
  FUN_00fce4b0(param_1 + 0x60);
  FUN_00fce4f0(param_1 + 0xec);
  FUN_00fce590(*(undefined4 *)(param_1 + 300));
  local_4 = *(float *)(param_1 + 0x118) / (float)*(int *)(*(int *)(param_1 + 0x58) + 0xc);
  local_8 = *(float *)(param_1 + 0x114) / (float)*(int *)(*(int *)(param_1 + 0x58) + 8);
  FUN_00fce5c0(&local_8);
  FUN_00fce5e0(*(int *)(param_1 + 0x124) != 0);
  if ((DAT_01dc2d0c != 0) && (DAT_01dc2d08 != 0)) {
    FUN_00fce610(*(undefined4 *)(DAT_01dc2d08 + 8),*(undefined4 *)(DAT_01dc2d08 + 0xc));
  }
  FUN_00f990e0(&DAT_01dc4030);
  return;
}

// 00CB0FA0  FUN_00cb0fa0  size=262  [run]
void __thiscall
FUN_00cb0fa0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  if (param_2 == 0) {
    local_10 = *(undefined4 *)(param_1 + 0xf4);
    local_c = *(undefined4 *)(param_1 + 0xf8);
  }
  else {
    local_8 = 0.0;
    local_4 = 0.0;
    local_10 = 0;
    local_c = 0;
  }
  FUN_00fce720(&local_10);
  FUN_00fce740(*(undefined4 *)(param_1 + 0xe8));
  FUN_00fd1470(*(undefined4 *)(param_1 + 0x58),(param_4 != 0) + '\x01');
  FUN_00fd1510(param_5,1);
  FUN_00fce6e0(param_3);
  FUN_00fce6c0(param_1 + 0x60);
  FUN_00fce700(param_1 + 0xec);
  FUN_00fce7a0(*(undefined4 *)(param_1 + 300));
  local_4 = *(float *)(param_1 + 0x118) / (float)*(int *)(*(int *)(param_1 + 0x58) + 0xc);
  local_8 = *(float *)(param_1 + 0x114) / (float)*(int *)(*(int *)(param_1 + 0x58) + 8);
  FUN_00fce7d0(&local_8);
  FUN_00f990e0(&DAT_01dc40e8);
  return;
}

// 00CB10B0  FUN_00cb10b0  size=82  [run]
undefined4 __thiscall FUN_00cb10b0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = FUN_00cb0890(param_2,param_3 * 4,param_3 * 6);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x134) = param_3;
      *(undefined4 *)(param_1 + 0x4c) = param_4;
      *(undefined4 *)(param_1 + 0x130) = 0;
      return 1;
    }
  }
  return 0;
}

// 00CB1110  FUN_00cb1110  size=792  [run]
undefined4 __thiscall FUN_00cb1110(int param_1,int *param_2)

{
  int *piVar1;
  ushort *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint local_c;
  
  if (*param_2 == 0) {
    return 1;
  }
  iVar6 = *(int *)(param_1 + 0x130);
  if (((*(int *)(param_1 + 0x134) <= iVar6) || (*(int *)(param_1 + 0x50) == 0)) ||
     (*(int *)(param_1 + 0x54) == 0)) {
    return 0;
  }
  uVar7 = (short)iVar6 * 4;
  piVar1 = (int *)(*(int *)(param_1 + 0x50) + (uint)uVar7 * 0x18);
  puVar2 = (ushort *)(*(int *)(param_1 + 0x54) + iVar6 * 0xc);
  local_c = (uint)(longlong)ROUND((float)param_2[0x14] * 255.0);
  uVar8 = local_c << 8;
  local_c = (uint)(longlong)ROUND((float)param_2[0x11] * 255.0);
  uVar8 = uVar8 | local_c;
  local_c = (uint)(longlong)ROUND((float)param_2[0x12] * 255.0);
  uVar8 = uVar8 << 8 | local_c;
  local_c = (uint)(longlong)ROUND((float)param_2[0x13] * 255.0);
  uVar9 = uVar8 << 8 | local_c;
  local_c = (uint)(longlong)ROUND((float)param_2[0x18] * 255.0);
  uVar8 = local_c << 8;
  local_c = (uint)(longlong)ROUND((float)param_2[0x15] * 255.0);
  uVar8 = uVar8 | local_c;
  local_c = (uint)(longlong)ROUND((float)param_2[0x16] * 255.0);
  uVar8 = uVar8 << 8 | local_c;
  local_c = (uint)(longlong)ROUND((float)param_2[0x17] * 255.0);
  local_c = uVar8 << 8 | local_c;
  iVar6 = param_2[5];
  iVar3 = param_2[6];
  *piVar1 = param_2[4];
  piVar1[1] = iVar6;
  piVar1[2] = iVar3;
  iVar6 = param_2[5];
  iVar3 = param_2[6];
  piVar1[6] = (int)((float)param_2[8] + (float)param_2[4]);
  piVar1[7] = iVar6;
  piVar1[8] = iVar3;
  fVar4 = (float)param_2[9];
  fVar5 = (float)param_2[5];
  iVar6 = param_2[6];
  piVar1[0xc] = param_2[4];
  piVar1[0xd] = (int)(fVar4 + fVar5);
  piVar1[0xe] = iVar6;
  fVar4 = (float)param_2[9];
  fVar5 = (float)param_2[5];
  iVar6 = param_2[6];
  piVar1[0x12] = (int)((float)param_2[8] + (float)param_2[4]);
  piVar1[0x13] = (int)(fVar4 + fVar5);
  piVar1[0x14] = iVar6;
  iVar6 = param_2[0xd];
  piVar1[3] = param_2[0xc];
  piVar1[4] = iVar6;
  iVar6 = param_2[0xd];
  piVar1[9] = param_2[0xe];
  piVar1[10] = iVar6;
  iVar6 = param_2[0xf];
  piVar1[0xf] = param_2[0xc];
  piVar1[0x10] = iVar6;
  iVar6 = param_2[0xf];
  piVar1[0x15] = param_2[0xe];
  piVar1[0x16] = iVar6;
  switch(param_2[0x19]) {
  case 1:
    piVar1[0x11] = local_c;
    piVar1[0x17] = local_c;
    break;
  case 2:
    piVar1[5] = local_c;
    piVar1[0xb] = local_c;
    piVar1[0x11] = uVar9;
    piVar1[0x17] = uVar9;
    goto LAB_00cb13e5;
  case 3:
    piVar1[0xb] = local_c;
    piVar1[0x11] = uVar9;
    piVar1[0x17] = local_c;
    goto LAB_00cb13e2;
  case 4:
    piVar1[5] = local_c;
    piVar1[0xb] = uVar9;
    piVar1[0x11] = local_c;
    piVar1[0x17] = uVar9;
    goto LAB_00cb13e5;
  default:
    piVar1[0x11] = uVar9;
    piVar1[0x17] = uVar9;
  }
  piVar1[0xb] = uVar9;
LAB_00cb13e2:
  piVar1[5] = uVar9;
LAB_00cb13e5:
  *puVar2 = uVar7;
  puVar2[4] = uVar7 + 3;
  puVar2[1] = uVar7 + 1;
  puVar2[3] = uVar7 + 1;
  puVar2[2] = uVar7 + 2;
  puVar2[5] = uVar7 + 2;
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
  return 1;
}

// 00CB1440  FUN_00cb1440  size=843  [run]
undefined4 __thiscall FUN_00cb1440(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  ushort *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ushort uVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  int local_3c;
  uint local_38;
  
  local_3c = 0;
  if (0 < param_3) {
    pfVar8 = (float *)(param_2 + 0x44);
    do {
      if (pfVar8[-0x11] == 0.0) goto LAB_00cb1759;
      iVar6 = *(int *)(param_1 + 0x130);
      if (((*(int *)(param_1 + 0x134) <= iVar6) || (*(int *)(param_1 + 0x50) == 0)) ||
         (*(int *)(param_1 + 0x54) == 0)) {
        return 0;
      }
      uVar7 = (short)iVar6 * 4;
      pfVar1 = (float *)(*(int *)(param_1 + 0x50) + (uint)uVar7 * 0x18);
      puVar2 = (ushort *)(*(int *)(param_1 + 0x54) + iVar6 * 0xc);
      local_38 = (uint)(longlong)ROUND(pfVar8[3] * 255.0);
      uVar10 = local_38 << 8;
      local_38 = (uint)(longlong)ROUND(*pfVar8 * 255.0);
      uVar10 = uVar10 | local_38;
      local_38 = (uint)(longlong)ROUND(pfVar8[1] * 255.0);
      uVar10 = uVar10 << 8 | local_38;
      local_38 = (uint)(longlong)ROUND(pfVar8[2] * 255.0);
      fVar11 = (float)(uVar10 << 8 | local_38);
      local_38 = (uint)(longlong)ROUND(pfVar8[7] * 255.0);
      uVar10 = local_38 << 8;
      local_38 = (uint)(longlong)ROUND(pfVar8[4] * 255.0);
      uVar10 = uVar10 | local_38;
      local_38 = (uint)(longlong)ROUND(pfVar8[5] * 255.0);
      uVar10 = uVar10 << 8 | local_38;
      local_38 = (uint)(longlong)ROUND(pfVar8[6] * 255.0);
      fVar9 = (float)(uVar10 << 8 | local_38);
      fVar3 = pfVar8[-0xc];
      fVar4 = pfVar8[-0xb];
      *pfVar1 = pfVar8[-0xd];
      pfVar1[1] = fVar3;
      pfVar1[2] = fVar4;
      fVar3 = pfVar8[-0xc];
      fVar4 = pfVar8[-0xb];
      pfVar1[6] = pfVar8[-9] + pfVar8[-0xd];
      pfVar1[7] = fVar3;
      pfVar1[8] = fVar4;
      fVar3 = pfVar8[-8];
      fVar4 = pfVar8[-0xc];
      fVar5 = pfVar8[-0xb];
      pfVar1[0xc] = pfVar8[-0xd];
      pfVar1[0xd] = fVar3 + fVar4;
      pfVar1[0xe] = fVar5;
      fVar3 = pfVar8[-8];
      fVar4 = pfVar8[-0xc];
      fVar5 = pfVar8[-0xb];
      pfVar1[0x12] = pfVar8[-9] + pfVar8[-0xd];
      pfVar1[0x13] = fVar3 + fVar4;
      pfVar1[0x14] = fVar5;
      fVar3 = pfVar8[-4];
      pfVar1[3] = pfVar8[-5];
      pfVar1[4] = fVar3;
      fVar3 = pfVar8[-4];
      pfVar1[9] = pfVar8[-3];
      pfVar1[10] = fVar3;
      fVar3 = pfVar8[-2];
      pfVar1[0xf] = pfVar8[-5];
      pfVar1[0x10] = fVar3;
      fVar3 = pfVar8[-2];
      pfVar1[0x15] = pfVar8[-3];
      pfVar1[0x16] = fVar3;
      switch(pfVar8[8]) {
      case 1.4013e-45:
        pfVar1[0x11] = fVar9;
        pfVar1[0x17] = fVar9;
        goto LAB_00cb1723;
      case 2.8026e-45:
        pfVar1[5] = fVar9;
        pfVar1[0xb] = fVar9;
        pfVar1[0x11] = fVar11;
        pfVar1[0x17] = fVar11;
        break;
      case 4.2039e-45:
        pfVar1[0xb] = fVar9;
        pfVar1[0x11] = fVar11;
        pfVar1[0x17] = fVar9;
        goto LAB_00cb1726;
      case 5.60519e-45:
        pfVar1[5] = fVar9;
        pfVar1[0xb] = fVar11;
        pfVar1[0x11] = fVar9;
        pfVar1[0x17] = fVar11;
        break;
      default:
        pfVar1[0x11] = fVar11;
        pfVar1[0x17] = fVar11;
LAB_00cb1723:
        pfVar1[0xb] = fVar11;
LAB_00cb1726:
        pfVar1[5] = fVar11;
      }
      *puVar2 = uVar7;
      puVar2[4] = uVar7 + 3;
      puVar2[1] = uVar7 + 1;
      puVar2[2] = uVar7 + 2;
      puVar2[3] = uVar7 + 1;
      puVar2[5] = uVar7 + 2;
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
LAB_00cb1759:
      local_3c = local_3c + 1;
      pfVar8 = pfVar8 + 0x1c;
    } while (local_3c < param_3);
  }
  return 1;
}

// 00CB17F0  FUN_00cb17f0  size=131  [run]
undefined4 __thiscall FUN_00cb17f0(int param_1,void *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0x130) + param_3 <= *(int *)(param_1 + 0x134)) &&
      (*(int *)(param_1 + 0x50) != 0)) && (*(int *)(param_1 + 0x54) != 0)) {
    FID_conflict__memcpy
              ((void *)(*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x130) * 0x18),param_2,
               param_3 * 0x18);
    iVar2 = 0;
    if (0 < param_3) {
      do {
        sVar1 = (short)iVar2;
        iVar3 = *(int *)(param_1 + 0x130) + iVar2;
        iVar2 = iVar2 + 1;
        *(short *)(*(int *)(param_1 + 0x54) + iVar3 * 2) = *(short *)(param_1 + 0x130) + sVar1;
      } while (iVar2 < param_3);
    }
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + param_3;
    return 1;
  }
  return 0;
}

// 00CB1890  FUN_00cb1890  size=28  [run]
void __fastcall FUN_00cb1890(int param_1)

{
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  return;
}

// 00CB18B0  FUN_00cb18b0  size=95  [run]
undefined4 __thiscall
FUN_00cb18b0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_5 == 0)) {
    if (param_3 != 0) {
      iVar1 = FUN_00fa25d0(param_3);
      if (iVar1 == 0) goto LAB_00cb18da;
    }
    *(int *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 8) = param_4;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return 1;
  }
LAB_00cb18da:
  FUN_00f972f0();
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0;
}

// 00CB1930  FUN_00cb1930  size=183  [run]
void __thiscall FUN_00cb1930(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((0 < *(int *)(param_2 + 0xeb8)) && (*(int *)(param_1 + 4) != 0)) {
    if (-1 < *(int *)(param_2 + 0xec4)) {
      *(int *)(param_2 + 0xecc) = *(int *)(param_2 + 0xecc) + 1;
    }
    if (((*(int *)(param_2 + 0xec4) == 0) &&
        ((((DAT_01bea060 & 0x1000) == 0 && (-1 < (char)DAT_01bea060)) ||
         (*(int *)(param_2 + 0xec0) == 0)))) &&
       (iVar1 = *(int *)(param_2 + 0xecc) / *(int *)(param_2 + 0xf0c),
       *(int *)(param_2 + 0xec8) = iVar1, param_3 <= iVar1)) {
      *(int *)(param_2 + 0xec8) = param_3;
      *(undefined4 *)(param_2 + 0xec4) = 1;
      *(undefined4 *)(param_2 + 0xec4) = 1;
    }
    if (*(int *)(param_2 + 0xf0c) * param_3 + *(int *)(param_2 + 0xf10) < *(int *)(param_2 + 0xecc))
    {
      *(undefined4 *)(param_2 + 0xeb8) = 0;
      FUN_00ca91c0();
    }
    *(undefined4 *)(param_2 + 0xebc) = 1;
  }
  return;
}

// 00CB1AC0  FUN_00cb1ac0  size=155  [run]
undefined4 __thiscall FUN_00cb1ac0(int param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_c;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar7 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(int *)(param_1 + 8) + param_1;
  }
  uVar3 = 0xffffffff;
  if ((param_1 != 0) && (uVar2 != 0)) {
    local_c = 0;
    uVar5 = uVar2;
    while( true ) {
      uVar4 = (uVar5 - uVar7 >> 1) + uVar7;
      uVar1 = *(ushort *)(param_1 + uVar4 * 8);
      if ((uVar1 == param_2) && (*(ushort *)(param_1 + 2 + uVar4 * 8) == param_3)) break;
      uVar6 = uVar4;
      if ((uVar1 <= param_2) &&
         ((uVar1 != param_2 || (*(ushort *)(param_1 + 2 + uVar4 * 8) <= param_3)))) {
        uVar6 = uVar5;
        uVar7 = uVar4;
      }
      local_c = local_c + 1;
      uVar5 = uVar6;
      if (uVar2 <= local_c) {
        return 0xffffffff;
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 4 + uVar4 * 8);
  }
  return uVar3;
}

// 00CB1B60  FUN_00cb1b60  size=135  [run]
int __thiscall FUN_00cb1b60(int param_1,ushort param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int local_8;
  
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x18) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(int *)(param_1 + 0x18) + param_1;
  }
  local_8 = 0;
  if ((param_1 == 0) || (uVar1 == 0)) {
    return 0;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar5 = uVar1;
    uVar6 = 0;
    while( true ) {
      uVar4 = (uVar5 - uVar6 >> 1) + uVar6;
      uVar2 = *(uint *)(param_1 + uVar4 * 0x14);
      if (uVar2 == param_2) break;
      if ((int)(uint)param_2 < (int)uVar2) {
        uVar5 = uVar4;
        uVar4 = uVar6;
      }
      uVar3 = uVar3 + 1;
      uVar6 = uVar4;
      if (uVar1 <= uVar3) {
        return 0;
      }
    }
    local_8 = param_1 + uVar4 * 0x14;
  }
  return local_8;
}

// 00CB1BF0  FUN_00cb1bf0  size=79  [run]
int __thiscall FUN_00cb1bf0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_1 + (int)param_1;
  }
  if ((((-1 < param_2) && (param_2 < param_1[1])) &&
      (piVar1 = (int *)(param_2 * 0x10 + iVar2), piVar1 != (int *)0x0)) &&
     ((-1 < param_3 && (param_3 < piVar1[1])))) {
    if (*piVar1 != 0) {
      return (int)param_1 + param_3 * 0x14 + *piVar1;
    }
    return param_3 * 0x14;
  }
  return 0;
}

// 00CB1C40  FUN_00cb1c40  size=132  [run]
uint __thiscall FUN_00cb1c40(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  
  uVar1 = param_1[1];
  if (*param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_1 + (int)param_1;
  }
  if ((iVar3 != 0) && (uVar1 != 0)) {
    local_8 = 0;
    uVar5 = uVar1;
    uVar6 = 0;
    do {
      uVar4 = (uVar5 - uVar6 >> 1) + uVar6;
      iVar2 = *(int *)(iVar3 + 8 + uVar4 * 0x10);
      if (iVar2 == param_2) {
        return uVar4;
      }
      if (param_2 < iVar2) {
        uVar5 = uVar4;
        uVar4 = uVar6;
      }
      local_8 = local_8 + 1;
      uVar6 = uVar4;
    } while (local_8 < uVar1);
    return 0xffffffff;
  }
  return 0;
}

// 00CB1CD0  FUN_00cb1cd0  size=133  [run]
undefined4 __thiscall FUN_00cb1cd0(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_8;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar6 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = *(int *)(param_1 + 0x20) + param_1;
  }
  local_8 = 0xffffffff;
  if ((param_1 == 0) || (uVar1 == 0)) {
    return 0;
  }
  uVar3 = 0;
  uVar5 = uVar1;
  if (uVar1 != 0) {
    while( true ) {
      uVar4 = (uVar5 - uVar6 >> 1) + uVar6;
      uVar2 = *(uint *)(param_1 + uVar4 * 8);
      if (uVar2 == param_2) break;
      if (param_2 < uVar2) {
        uVar5 = uVar4;
        uVar4 = uVar6;
      }
      uVar3 = uVar3 + 1;
      uVar6 = uVar4;
      if (uVar1 <= uVar3) {
        return 0xffffffff;
      }
    }
    local_8 = *(undefined4 *)(param_1 + 4 + uVar4 * 8);
  }
  return local_8;
}


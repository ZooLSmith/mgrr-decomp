// src/unsorted/unit_00F24BA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F24BA0..00F24BA0, 1 functions

#include "types.h"

// 00F24BA0  FUN_00f24ba0  size=1225  [run]
void __thiscall FUN_00f24ba0(int param_1,float param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *unaff_EDI;
  float local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int iStack_110;
  double dStack_10c;
  float fStack_104;
  float fStack_100;
  float *pfStack_f0;
  float fStack_ec;
  float fStack_e8;
  float local_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined1 local_b4 [20];
  undefined1 local_a0 [44];
  float fStack_74;
  float fStack_70;
  float afStack_6c [11];
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint uStack_20;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_124;
  local_124 = param_3;
  local_e4 = param_2;
  FUN_00edfcd0(local_b4);
  FUN_00f20370(local_a0,local_b4,*(undefined4 *)(param_1 + 0x28));
  local_120 = 0xbf000000;
  local_11c = 0xbf000000;
  local_118 = 0;
  local_114 = 0;
  afStack_6c[3] = -1.0;
  local_40 = 0xbf800000;
  local_3c = -1.0;
  local_2c = 0xbf800000;
  afStack_6c[4] = 0.0;
  afStack_6c[5] = 0.0;
  afStack_6c[7] = 0.0;
  afStack_6c[8] = 0.0;
  afStack_6c[9] = 0.0;
  local_38 = 0.0;
  local_30 = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x470) == 1) {
    FUN_00f95f40(afStack_6c + 3,afStack_6c + 7,0xffff0000,0);
    FUN_00f95f40(afStack_6c + 3,&local_40,0xffff0000,0);
    FUN_00f95f40(afStack_6c + 7,&local_30,0xffff0000,0);
    FUN_00f95f40(&local_40,&local_30,0xffff0000,0);
  }
  iVar3 = 4;
  pfVar4 = afStack_6c + 3;
  do {
    D3DXVec3TransformNormal(pfVar4,pfVar4,local_a0);
    iVar3 = iVar3 + -1;
    *pfVar4 = *pfVar4 + fStack_70;
    pfVar4[1] = afStack_6c[0] + pfVar4[1];
    pfVar4[2] = pfVar4[2] + afStack_6c[1];
    pfVar4 = pfVar4 + 4;
  } while (iVar3 != 0);
  D3DXVec3TransformNormal(&local_120,&local_120,local_a0);
  local_124 = fStack_74 + local_124;
  if (*(int *)(param_1 + 0x470) == 2) {
    FUN_00f95f40(afStack_6c,afStack_6c + 4,0xff0000ff,0);
    FUN_00f95f40(afStack_6c,afStack_6c + 8,0xff0000ff,0);
    FUN_00f95f40(afStack_6c + 4,&local_3c,0xff0000ff,0);
    FUN_00f95f40(afStack_6c + 8,&local_3c,0xff0000ff,0);
  }
  iVar3 = 4;
  pfVar4 = afStack_6c + 2;
  do {
    dStack_10c = *(double *)(pfVar4 + -2);
    fStack_104 = *pfVar4;
    fStack_100 = pfVar4[1];
    FUN_00ea0000(&fStack_ec,&dStack_10c);
    pfVar4[-2] = fStack_ec;
    iVar3 = iVar3 + -1;
    pfVar4[-1] = fStack_e8;
    *pfVar4 = local_e4;
    pfVar4[1] = fStack_e0;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 != 0);
  FUN_00ea0000(&fStack_dc,&stack0xfffffed4);
  local_124 = fStack_d4;
  local_120 = uStack_d0;
  if (*(int *)(param_1 + 0x470) == 3) {
    FUN_00f95dd0(afStack_6c[0],afStack_6c[1],afStack_6c[4],afStack_6c[5],0xff00ff00);
    FUN_00f95dd0(afStack_6c[0],afStack_6c[1],afStack_6c[8],afStack_6c[9],0xff00ff00);
    FUN_00f95dd0(afStack_6c[4],afStack_6c[5],local_3c,local_38,0xff00ff00);
    FUN_00f95dd0(afStack_6c[8],afStack_6c[9],local_3c,local_38,0xff00ff00);
  }
  iVar3 = 4;
  pfVar4 = afStack_6c + 1;
  do {
    dStack_10c = (double)pfVar4[-1];
    iStack_110 = FUN_00f98a90();
    pfVar4[-1] = (float)dStack_10c / (float)iStack_110;
    dStack_10c = (double)*pfVar4;
    iStack_110 = FUN_00f98aa0();
    iVar3 = iVar3 + -1;
    *pfVar4 = (float)dStack_10c / (float)iStack_110;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 != 0);
  *unaff_EDI = afStack_6c[0];
  unaff_EDI[1] = afStack_6c[1];
  unaff_EDI[2] = afStack_6c[4];
  unaff_EDI[3] = afStack_6c[5];
  unaff_EDI[4] = afStack_6c[8];
  unaff_EDI[5] = afStack_6c[9];
  unaff_EDI[6] = local_3c;
  unaff_EDI[7] = local_38;
  dStack_10c = (double)fStack_dc;
  iVar3 = FUN_00f98a90();
  fVar1 = (float)dStack_10c;
  dStack_10c = (double)fStack_d8;
  iVar2 = FUN_00f98aa0();
  *pfStack_f0 = fVar1 / (float)iVar3;
  pfStack_f0[1] = (float)dStack_10c / (float)iVar2;
  __security_check_cookie(uStack_20 ^ (uint)&stack0xfffffed0);
  return;
}


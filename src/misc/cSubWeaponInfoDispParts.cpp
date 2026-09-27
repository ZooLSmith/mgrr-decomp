// src/misc/cSubWeaponInfoDispParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF2480..00D34790, 4 functions

#include "types.h"

// 00CF2480  cSubWeaponInfoDispParts::vf00  size=30  [class]
undefined4 __thiscall cSubWeaponInfoDispParts::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CF24A0  FUN_00cf24a0  size=291  [callgraph]
void __fastcall FUN_00cf24a0(int param_1)

{
  FUN_00cd8a40(*(undefined4 *)(param_1 + 0xb0),10,0x41a00000,0x42c80000,0xc0a00000);
  FUN_00cd8a40(*(undefined4 *)(param_1 + 0xb8),10,0x41a00000,0x42c80000,0xc0a00000);
  FUN_00cd8a40(*(undefined4 *)(param_1 + 0xbc),10,0x41a00000,0x42c80000,0xc0a00000);
  FUN_00cd8a40(*(undefined4 *)(param_1 + 0xc0),10,0x41a00000,0x42c80000,0xc0a00000);
  FUN_00cd8b00(*(undefined4 *)(param_1 + 0xd8),10,0x41a00000,0x42c80000,0xc0a00000);
  FUN_00cd8b00(*(undefined4 *)(param_1 + 0xdc),10,0x41a00000,0x42c80000,0xc0a00000);
  return;
}

// 00D26190  cSubWeaponInfoDispParts::vf14  size=3018  [class]
void __fastcall cSubWeaponInfoDispParts::vf14(int param_1)

{
  float *pfVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  uint uVar7;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  float10 extraout_ST0;
  float10 fVar8;
  float10 extraout_ST0_00;
  float10 fVar9;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  undefined4 uVar10;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 uStack_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  undefined1 auStack_98 [4];
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  iVar4 = *(int *)(param_1 + 0x18);
  pfVar6 = (float *)0x0;
  if (iVar4 != 0) {
    iVar3 = *(int *)(iVar4 + 0x78);
    if ((((iVar3 == 0) || (*(int *)(iVar3 + 0x10) == 0)) ||
        (iVar3 = iVar3 + *(int *)(iVar3 + 0x10), iVar3 == 0)) ||
       (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0xd0))) {
      pfVar6 = (float *)0x0;
    }
    else {
      pfVar6 = (float *)(*(uint *)(param_1 + 0xd0) * 0x1b0 + iVar3);
    }
  }
  iVar4 = FUN_00f98a90();
  *(float *)(param_1 + 0x120) = (float)iVar4 * 0.00078125 * *pfVar6;
  iVar3 = FUN_00f98aa0();
  iVar4 = *(int *)(param_1 + 0x18);
  *(float *)(param_1 + 0x124) = (float)iVar3 * 0.0013888889 * pfVar6[1];
  if (((iVar4 == 0) || (iVar3 = *(int *)(iVar4 + 0x78), iVar3 == 0)) ||
     ((*(int *)(iVar3 + 0x10) == 0 ||
      ((iVar3 = iVar3 + *(int *)(iVar3 + 0x10), iVar3 == 0 ||
       (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 200))))))) {
    pfVar6 = (float *)0x0;
  }
  else {
    pfVar6 = (float *)(*(uint *)(param_1 + 200) * 0x1b0 + iVar3);
  }
  pfVar1 = (float *)(param_1 + 0x120);
  *(float *)(param_1 + 0x130) = *pfVar6 + *pfVar1;
  *(float *)(param_1 + 0x134) = pfVar6[1] + *(float *)(param_1 + 0x124);
  fVar8 = (float10)1;
  switch(*(undefined4 *)(param_1 + 0xe0)) {
  case 0:
    if (DAT_01dc0e0c != 0) {
      return;
    }
    FUN_00d17ff0();
    if (DAT_01dc2d70 == 0) {
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      goto switchD_00d26275_caseD_1;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(4);
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0xb0),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0xcc),1);
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
    }
    fVar8 = (float10)1;
    *(undefined4 *)(param_1 + 0xe0) = 10;
    *(float *)(param_1 + 0xe8) = (float)fVar8;
    break;
  case 1:
switchD_00d26275_caseD_1:
    uVar7 = *(uint *)(param_1 + 0xe4) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xf0) + 4) = (uint)((int)uVar7 < 2);
    iVar4 = FUN_00ca8620(param_1 + 0xe4,0xc);
    fVar8 = extraout_ST0;
    if (iVar4 == 0) break;
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      break;
    }
    goto LAB_00d26436;
  case 2:
    uVar7 = *(uint *)(param_1 + 0xe4) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xf4) + 4) = (uint)((int)uVar7 < 2);
    uVar7 = *(uint *)(param_1 + 0xe4) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xec) + 4) = (uint)((int)uVar7 < 2);
    uVar7 = *(uint *)(param_1 + 0xe4) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    fVar8 = (float10)FUN_00cb2310(*(undefined4 *)(param_1 + 0xcc),(int)uVar7 < 2);
    fVar9 = (float10)*(float *)(param_1 + 0xe8) + (float10)0.1;
    *(float *)(param_1 + 0xe8) = (float)fVar9;
    if (fVar8 < fVar9) {
      *(float *)(param_1 + 0xe8) = (float)fVar8;
    }
    iVar4 = FUN_00ca8620(extraout_EDX,0xc);
    fVar8 = extraout_ST0_00;
    if (iVar4 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xf4) + 4) = 1;
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    }
    break;
  case 3:
    fVar9 = (float10)*(float *)(param_1 + 0xe8) + (float10)0.1;
    *(float *)(param_1 + 0xe8) = (float)fVar9;
    if (fVar8 < fVar9) {
      *(float *)(param_1 + 0xe8) = (float)fVar8;
    }
    goto LAB_00d26423;
  case 4:
    FUN_00cb2310(*(undefined4 *)(param_1 + 0xb0),1);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0xb0),1,3);
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
  case 5:
    fVar8 = (float10)1;
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
    if (0x1e < *(int *)(param_1 + 0xe4)) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    }
    break;
  case 6:
    uVar7 = *(uint *)(param_1 + 0xe4) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xf0) + 4) = (uint)(1 < (int)uVar7);
    uVar7 = *(uint *)(param_1 + 0xe4) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xec) + 4) = (uint)(1 < (int)uVar7);
    goto LAB_00d26423;
  case 7:
    iVar4 = FUN_00ca8620(param_1 + 0xe4,0x1e);
    fVar8 = extraout_ST0_02;
    if (iVar4 != 0) {
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
    break;
  case 8:
    iVar4 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0xb0));
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(3);
      }
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      goto switchD_00d26275_caseD_9;
    }
    fVar8 = (float10)1;
    break;
  case 9:
switchD_00d26275_caseD_9:
    fVar8 = (float10)1;
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
    *(float *)(param_1 + 0xe8) = *(float *)(param_1 + 0xe8) + 0.0714;
    if ((int)*(uint *)(param_1 + 0xe4) < 0xb) {
      uVar7 = *(uint *)(param_1 + 0xe4) & 0x80000003;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
      }
      *(uint *)(*(int *)(param_1 + 0xf4) + 4) = (uint)((int)uVar7 < 2);
    }
    if (fVar8 < (float10)*(float *)(param_1 + 0xe8)) {
      *(float *)(param_1 + 0xe8) = (float)fVar8;
    }
    if (0xd < *(int *)(param_1 + 0xe4)) {
      *(undefined4 *)(*(int *)(param_1 + 0xf4) + 4) = 0;
      *(float *)(param_1 + 0xe8) = (float)fVar8;
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      *(undefined4 *)(param_1 + 0xe4) = 0;
    }
    break;
  case 10:
    iVar4 = FUN_00ce4dd0(3);
    fVar8 = extraout_ST0_03;
    goto LAB_00d265c7;
  case 0xc:
    uVar10 = 0x1e;
    goto LAB_00d26425;
  case 0xd:
    uVar7 = *(uint *)(param_1 + 0xe4) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xf0) + 4) = (uint)((int)uVar7 < 2);
    goto LAB_00d26423;
  case 0xe:
    uVar7 = *(uint *)(param_1 + 0xe4) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xf4) + 4) = (uint)((int)uVar7 < 2);
    uVar7 = *(uint *)(param_1 + 0xe4) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xec) + 4) = (uint)((int)uVar7 < 2);
LAB_00d26423:
    uVar10 = 0xc;
LAB_00d26425:
    iVar4 = param_1 + 0xe4;
LAB_00d26426:
    iVar4 = FUN_00ca8620(iVar4,uVar10);
    fVar8 = extraout_ST0_01;
    if (iVar4 != 0) {
LAB_00d26436:
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    }
    break;
  case 0xf:
    *(undefined4 *)(param_1 + 0xe0) = 0x10;
    break;
  case 0x10:
    uVar7 = *(uint *)(param_1 + 0xe4) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    FUN_00cb2310(*(undefined4 *)(param_1 + 0xcc),(int)uVar7 < 2);
    uVar10 = 8;
    iVar4 = extraout_EDX_00;
    goto LAB_00d26426;
  case 0x11:
    uVar10 = 2;
    goto LAB_00d26425;
  case 0x12:
    uVar7 = *(uint *)(param_1 + 0xe4) & 0x80000003;
    puVar2 = (uint *)(param_1 + 0xe4);
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xf0) + 4) = (uint)(1 < (int)uVar7);
    uVar7 = *puVar2 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xf4) + 4) = (uint)(1 < (int)uVar7);
    uVar7 = *puVar2 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(uint *)(*(int *)(param_1 + 0xec) + 4) = (uint)(1 < (int)uVar7);
    iVar4 = FUN_00ca8620(puVar2,0xc);
    fVar8 = extraout_ST0_04;
LAB_00d265c7:
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0xe0) = 0xb;
    }
  }
  if (((((byte)DAT_01bea090 & 0x40) == 0) || (*(int *)(param_1 + 0xe0) < 0xb)) &&
     ((DAT_01bea094 & 0x20000) == 0)) {
    if (DAT_01dc14c8 != 0) {
      iVar4 = FUN_00b8c050();
      if (iVar4 != 0) goto LAB_00d2681b;
      fVar8 = (float10)1;
    }
    iVar4 = 0;
    if (*(int *)(param_1 + 0x150) != 0) {
      *(undefined4 *)(param_1 + 0x150) = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
      if ((*(int *)(param_1 + 0xe0) < 0xb) && (*(int *)(param_1 + 0x18) != 0)) {
        FUN_00cdeec0(4);
        fVar8 = (float10)1;
      }
      *(float *)(param_1 + 0xe8) = (float)fVar8;
      *(undefined4 *)(param_1 + 0xe4) = 0;
      if (*(int *)(param_1 + 0x154) == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0xf0) + 4) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xf4) + 4) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xec) + 4) = 0;
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xcc),1);
        *(undefined4 *)(param_1 + 0xe0) = 10;
        iVar4 = extraout_EDX_02;
      }
      else {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0xcc),0);
        *(undefined4 *)(param_1 + 0xe0) = 0xc;
        iVar4 = extraout_EDX_01;
      }
    }
  }
  else {
LAB_00d2681b:
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
    *(undefined4 *)(param_1 + 0x150) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0xf0) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xf4) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0xec) + 4) = 0;
    *(uint *)(param_1 + 0x154) = (byte)DAT_01bea090 >> 6 & 1;
    iVar4 = 0;
  }
  if (*(int *)(param_1 + 0x154) == iVar4) {
    if (*(int *)(param_1 + 0xe0) < 8) goto LAB_00d268d7;
    if (*(int *)(param_1 + 0x154) == iVar4) {
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x110);
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x114);
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x118);
      *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x11c);
    }
  }
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x13c);
LAB_00d268d7:
  if (*(int *)(param_1 + 0xe0) == 0xb) {
    FUN_00cb33d0(*(undefined4 *)(param_1 + 0xc4),0x40c00000,0x40400000,0x42480000,0x42c80000);
  }
  else {
    *(float *)(param_1 + 0x40) =
         ((*(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x100)) * *(float *)(param_1 + 0xe8) +
         *(float *)(param_1 + 0x100)) - *pfVar1;
    *(float *)(param_1 + 0x44) =
         (*(float *)(param_1 + 0x104) +
         *(float *)(param_1 + 0xe8) * (*(float *)(param_1 + 0x114) - *(float *)(param_1 + 0x104))) -
         *(float *)(param_1 + 0x124);
    FUN_00cb33d0(*(undefined4 *)(param_1 + 0xc4),0x40c00000,0x40400000,0x42480000,0x42c80000);
    local_c0 = *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x40);
    local_bc = *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x44);
    local_b8 = *(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x48);
    iVar4 = FUN_00f98a90();
    local_c0 = (float)iVar4 * 0.00078125 * local_c0;
    iVar4 = FUN_00f98aa0();
    local_bc = (float)iVar4 * 0.0013888889 * local_bc;
    local_b0 = *(float *)(param_1 + 0x80);
    local_ac = *(float *)(param_1 + 0x84);
    local_58 = 0.0;
    local_5c = 0.0;
    local_60 = 0.0;
    local_64 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_8c = 0;
    local_54 = 0x3f800000;
    local_68 = 0x3f800000;
    local_7c = 0x3f800000;
    local_90 = 0x3f800000;
    if (*(float *)(param_1 + 0x88) != 0.0) {
      D3DXMatrixRotationZ(local_50,*(float *)(param_1 + 0x88));
      D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
    }
    if (local_ac != 0.0) {
      D3DXMatrixRotationY(local_50,local_ac);
      D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
    }
    if (local_b0 != 0.0) {
      D3DXMatrixRotationX(local_50,local_b0);
      D3DXMatrixMultiply(auStack_98,&local_58,auStack_98);
    }
    D3DXVec3TransformNormal(&local_b0,pfVar1,&local_90);
    local_c0 = local_b0 + local_60 + local_c0;
    local_bc = local_ac + local_5c + local_bc;
    local_b8 = fStack_a8 + local_58 + local_b8;
    uStack_b4 = local_54;
    local_60 = local_c0;
    local_5c = local_bc;
    local_58 = local_b8;
    iStack_94 = FUN_00f98aa0();
    iVar3 = FUN_00f98a90();
    iVar4 = *(int *)(param_1 + 0xf0);
    local_b0 = (float)iVar3 * 0.00078125 * *(float *)(param_1 + 0x100);
    local_ac = (float)iStack_94 * 0.0013888889 * *(float *)(param_1 + 0x104);
    fStack_a8 = 0.0;
    if (*(int *)(iVar4 + 0x18) != 0) {
      *(float *)(iVar4 + 0x80) = local_b0;
      *(float *)(iVar4 + 0x84) = local_ac;
    }
    FUN_00cb5540(&local_b0,&local_c0,0x3f800000);
    if (*(int *)(*(int *)(param_1 + 0xf4) + 0x18) != 0) {
      FID_conflict__memcpy((void *)(*(int *)(param_1 + 0xf4) + 0x50),&local_90,0x40);
    }
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    iVar3 = FUN_009516c0(*(int *)(param_1 + 0x14c));
    iVar4 = *(int *)(param_1 + 0x14c);
    if ((iVar4 == 0x3800cb76) || (iVar4 == 0x7089ed6c)) {
      piVar5 = (int *)FUN_0094e5e0(iVar4);
      if (piVar5 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar5 + 0x4c))();
      }
    }
    else {
      iVar3 = FUN_009516c0(iVar4);
    }
    if (iVar3 != *(int *)(param_1 + 0x140)) {
      *(int *)(param_1 + 0x140) = iVar3;
      FUN_00d17ff0();
    }
  }
  if (*(int *)(param_1 + 0x158) == 0) {
    if (DAT_01dc0894 != 0) {
      *(undefined4 *)(param_1 + 0x158) = 1;
      if ((10 < *(int *)(param_1 + 0xe0)) && (*(int *)(param_1 + 0x18) != 0)) {
        FUN_00cdeec0(8);
      }
      FUN_00cf24a0();
    }
  }
  else if (DAT_01dc0894 == 0) {
    *(undefined4 *)(param_1 + 0x158) = 0;
    FUN_00cd8bd0();
  }
  if (((((DAT_01dc14f0 == 0) || (DAT_018b3934 != 3)) || (DAT_01dc1508 == 0)) ||
      (*(int *)(DAT_01dc1508 + 0xa4) < 4)) && (DAT_01dc1368 == 0)) {
    if (*(int *)(param_1 + 0x15c) != 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(7);
      }
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x15c) == 0) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(6);
      }
      *(undefined4 *)(param_1 + 0x15c) = 1;
    }
    if (*(int *)(param_1 + 0xf0) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xf0) + 4) = 0;
    }
    if (*(int *)(param_1 + 0xf4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xf4) + 4) = 0;
    }
    if (*(int *)(param_1 + 0xec) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xec) + 4) = 0;
      return;
    }
  }
  return;
}

// 00D34790  cSubWeaponInfoDispParts::vf08  size=1204  [class]
void __fastcall cSubWeaponInfoDispParts::vf08(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0x92);
  }
  *(uint *)(param_1 + 0xac) = uVar6;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x96);
  }
  *(uint *)(param_1 + 0xb0) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xa2);
  }
  *(uint *)(param_1 + 0xb4) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0xca);
  }
  *(uint *)(param_1 + 0xb8) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x106);
  }
  *(uint *)(param_1 + 0xbc) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x11a);
  }
  *(uint *)(param_1 + 0xc0) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x13a);
  }
  *(uint *)(param_1 + 0xc4) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x146);
  }
  *(uint *)(param_1 + 200) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x148);
  }
  *(uint *)(param_1 + 0xcc) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x14a);
  }
  *(uint *)(param_1 + 0xd0) = uVar5;
  if (iVar1 == 0) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0xd4) = uVar5;
  if ((((iVar1 == 0) || (*(uint *)(iVar1 + 0x80) <= uVar6)) ||
      (piVar2 = *(int **)(uVar6 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0)) ||
     (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 0)) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = piVar2 + 4;
  }
  *(int **)(param_1 + 0xa8) = piVar2;
  if (piVar2 == (int *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(piVar2 + 0x22);
  }
  *(uint *)(param_1 + 0xd8) = uVar6;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0xa8) + 0x8a);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0xdc) = uVar6;
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xb0) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xb0) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xcc) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xcc) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xd0) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xd0) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = FUN_00d29960(4);
  *(int *)(param_1 + 0xec) = iVar1;
  *(undefined4 *)(iVar1 + 0x210) = 0xc;
  *(undefined4 *)(*(int *)(param_1 + 0xec) + 0x214) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xec) + 4) = 0;
  piVar2 = (int *)(param_1 + 0xf0);
  iVar1 = 2;
  do {
    iVar3 = FUN_00d29960(5);
    *piVar2 = iVar3;
    *(undefined4 *)(iVar3 + 0x1e4) = 0xc;
    *(undefined4 *)(*piVar2 + 0x1e8) = 0;
    iVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
    *(undefined4 *)(iVar3 + 4) = 0;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(5);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(1);
  }
  if (DAT_01dc14c8 == 0) {
switchD_00d34a06_default:
    *(undefined4 *)(param_1 + 0xe0) = 0x13;
    goto LAB_00d34c2f;
  }
  uVar4 = FUN_00b7f610();
  switch(uVar4) {
  case 1:
    *(undefined4 *)(param_1 + 0x148) = 0x6b;
    *(undefined4 *)(param_1 + 0x14c) = 0x4b20f7ae;
    uVar4 = FUN_009516c0(0x4b20f7ae);
    uVar7 = 0x4b20f7ae;
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x148) = 0x6c;
    *(undefined4 *)(param_1 + 0x14c) = 0x20ceb102;
    uVar4 = FUN_009516c0(0x20ceb102);
    uVar7 = 0x20ceb102;
    break;
  case 3:
    *(undefined4 *)(param_1 + 0x148) = 0x6d;
    *(undefined4 *)(param_1 + 0x14c) = 0x126ffcbb;
    uVar4 = FUN_009516c0(0x126ffcbb);
    uVar7 = 0x126ffcbb;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x148) = 0x6e;
    *(undefined4 *)(param_1 + 0x14c) = 0x70dce4d0;
    uVar4 = FUN_009516c0(0x70dce4d0);
    uVar7 = 0x70dce4d0;
    break;
  case 5:
    *(undefined4 *)(param_1 + 0x148) = 0x69;
    *(undefined4 *)(param_1 + 0x14c) = 0x3800cb76;
    piVar2 = (int *)FUN_0094e5e0(0x3800cb76);
    if (piVar2 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar2 + 0x4c))();
      *(undefined4 *)(param_1 + 0x140) = uVar4;
      uVar4 = (**(code **)(*piVar2 + 0x50))();
      *(undefined4 *)(param_1 + 0x144) = uVar4;
    }
    goto LAB_00d34c2f;
  case 6:
    *(undefined4 *)(param_1 + 0x148) = 0x6a;
    *(undefined4 *)(param_1 + 0x14c) = 0x7089ed6c;
    piVar2 = (int *)FUN_0094e5e0(0x7089ed6c);
    if (piVar2 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar2 + 0x4c))();
      *(undefined4 *)(param_1 + 0x140) = uVar4;
      uVar4 = (**(code **)(*piVar2 + 0x50))();
      *(undefined4 *)(param_1 + 0x144) = uVar4;
    }
    goto LAB_00d34c2f;
  case 7:
    *(undefined4 *)(param_1 + 0x148) = 0x6f;
    *(undefined4 *)(param_1 + 0x14c) = 0x2250063d;
    uVar4 = FUN_009516c0(0x2250063d);
    uVar7 = 0x2250063d;
    break;
  case 8:
    *(undefined4 *)(param_1 + 0x148) = 0x70;
    *(undefined4 *)(param_1 + 0x14c) = 0x2a5686e6;
    uVar4 = FUN_009516c0(0x2a5686e6);
    uVar7 = 0x2a5686e6;
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x148) = 0x71;
    *(undefined4 *)(param_1 + 0x14c) = 0x4b211eb7;
    uVar4 = FUN_009516c0(0x4b211eb7);
    uVar7 = 0x4b211eb7;
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x148) = 0x99;
    *(undefined4 *)(param_1 + 0x14c) = 0x154b4aab;
    uVar4 = FUN_009516c0(0x154b4aab);
    uVar7 = 0x154b4aab;
    break;
  default:
    goto switchD_00d34a06_default;
  }
  *(undefined4 *)(param_1 + 0x140) = uVar4;
  uVar4 = FUN_00951700(uVar7);
  *(undefined4 *)(param_1 + 0x144) = uVar4;
LAB_00d34c2f:
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
  }
  return;
}


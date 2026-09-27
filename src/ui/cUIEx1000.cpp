// src/ui/cUIEx1000.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB4A00..00CEA020, 3 functions

#include "types.h"

// 00CB4A00  cUIEx1000::vf08  size=48  [class]
void __thiscall cUIEx1000::vf08(int *param_1,int param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x18);
  param_1[2] = (int)fVar1;
  if (fVar1 <= 0.0) {
    param_1[2] = 0;
    (**(code **)(*param_1 + 0xc))();
    return;
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}

// 00CCFC60  cUIEx1000::vf00  size=31  [class]
undefined4 * __thiscall cUIEx1000::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIExtendObject::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CEA020  cUIEx1000::vf1C  size=817  [class]
void cUIEx1000::vf1C(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fStack_130;
  float fStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  float afStack_11c [17];
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined1 auStack_c4 [8];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  float fStack_50;
  float fStack_4c;
  
  if ((param_3 != (int *)0x0) && (iVar1 = (**(code **)(*param_3 + 8))(), iVar1 == 1)) {
    FUN_00ce5440(&fStack_60,&fStack_a0,param_2);
    iStack_d8 = 0;
    iVar1 = param_3[3];
    afStack_11c[0xe] = 0.0;
    afStack_11c[0xc] = 0.0;
    afStack_11c[0xb] = 0.0;
    afStack_11c[10] = 0.0;
    afStack_11c[9] = 0.0;
    afStack_11c[7] = 0.0;
    afStack_11c[6] = 0.0;
    afStack_11c[5] = 0.0;
    afStack_11c[4] = 0.0;
    uStack_d4 = 0x3f800000;
    afStack_11c[0xd] = 1.0;
    afStack_11c[8] = 1.0;
    afStack_11c[3] = 1.0;
    afStack_11c[0xf] = (float)uStack_70;
    afStack_11c[0x10] = (float)uStack_6c;
    fStack_130 = fStack_60;
    fStack_12c = fStack_5c;
    uStack_128 = uStack_58;
    uStack_124 = 0x3f800000;
    afStack_11c[1] =
         SQRT(fStack_98 * fStack_98 + fStack_a0 * fStack_a0 + fStack_9c * fStack_9c) * fStack_50;
    afStack_11c[2] =
         SQRT(fStack_88 * fStack_88 + fStack_90 * fStack_90 + fStack_8c * fStack_8c) * fStack_4c;
    if (iVar1 == 0) {
      fStack_130 = 0.0;
    }
    else if (iVar1 == 1) {
      fStack_130 = afStack_11c[1] * -0.5;
    }
    else if (iVar1 == 2) {
      fStack_130 = -afStack_11c[1];
    }
    iVar1 = param_3[4];
    if (iVar1 == 0) {
      fStack_12c = 0.0;
    }
    else if (iVar1 == 1) {
      fStack_12c = afStack_11c[2] * -0.5;
    }
    else if (iVar1 == 2) {
      fStack_12c = -afStack_11c[2];
    }
    D3DXVec4Transform(&fStack_130,&fStack_130,afStack_11c + 3);
    afStack_11c[0xe] = 0.0;
    afStack_11c[0xd] = 0.0;
    afStack_11c[0xc] = 0.0;
    afStack_11c[0xb] = 0.0;
    afStack_11c[9] = 0.0;
    afStack_11c[8] = 0.0;
    afStack_11c[7] = 0.0;
    afStack_11c[6] = 0.0;
    afStack_11c[4] = 0.0;
    afStack_11c[3] = 0.0;
    afStack_11c[2] = 0.0;
    afStack_11c[1] = 0.0;
    afStack_11c[0xf] = 1.0;
    afStack_11c[10] = 1.0;
    afStack_11c[5] = 1.0;
    afStack_11c[0] = 1.0;
    uStack_bc = uStack_124;
    uStack_b8 = uStack_120;
    iVar1 = FUN_00f98a90();
    fStack_b4 = 1.0 / (float)iVar1;
    iVar1 = FUN_00f98aa0();
    fStack_b0 = 1.0 / (float)iVar1;
    uStack_d4 = 0x3f800000;
    uStack_d0 = 0x3f800000;
    local_cc = 0x3f800000;
    uStack_c8 = 0x3f800000;
    if ((((*param_1 != 0) && (iVar1 = cPrimHeap::allocBuffer(0x110,0x20), iVar1 != 0)) &&
        (iVar1 = cUIPrimWorkGauss::cUIPrimWorkGauss(), iVar1 != 0)) &&
       (iVar2 = FUN_00cafa40(param_1,1), iVar2 != 0)) {
      FUN_00cafe10(&stack0xfffffec4,&uStack_124,auStack_c4,&uStack_d4);
      pfVar3 = afStack_11c;
      pfVar4 = (float *)(iVar1 + 0x10);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar4 + 1;
      }
      *(float *)(iVar1 + 0x44) = *(float *)(iVar1 + 0x44) - 1.0;
      *(float *)(iVar1 + 0xf0) = *(float *)(iStack_d8 + 8) + 1.0;
      *(undefined4 *)(iVar1 + 0xfc) = *(undefined4 *)(param_2 + 0x40);
      *(undefined4 *)(iVar1 + 0x100) = *(undefined4 *)(param_2 + 0x44);
      *(undefined4 *)(iVar1 + 0x104) = *(undefined4 *)(param_2 + 0x48);
      *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(param_2 + 0x4c);
      if (*(int *)(param_2 + 0x78) == 2) {
        FUN_00a30800(iVar1,0x3e,0);
        return;
      }
      FUN_00a30800(iVar1,0x67,*(undefined4 *)(param_2 + 0x70));
    }
  }
  return;
}


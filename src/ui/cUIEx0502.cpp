// src/ui/cUIEx0502.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCFB80..00CE9BD0, 3 functions

#include "mgrr.h"
#include "cUIEx0502.h"

// 00CCFB80  cUIEx0502::vf00  size=31  [class]
undefined4 * __thiscall cUIEx0502::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUIExtendObject::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CCFBA0  cUIEx0502::vf08  size=185  [class]
void __thiscall cUIEx0502::vf08(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar1 = param_2;
  uVar2 = *(uint *)(param_2 + 4);
  if ((int)uVar2 < 0) {
    iVar5 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
    if (iVar5 < 0) {
      param_2 = 0;
    }
    else {
      param_2 = 0x168;
      if (iVar5 < 0x169) {
        param_2 = iVar5;
      }
    }
    *(float *)(param_1 + 8) = (float)(int)param_2;
    *(uint *)(param_1 + 0xc) = (uint)(*(int *)(iVar1 + 8) == 0);
  }
  else {
    param_2 = 0x168;
    if ((int)uVar2 < 0x169) {
      param_2 = uVar2;
    }
    *(float *)(param_1 + 8) = (float)(int)param_2;
    *(uint *)(param_1 + 0xc) = (uint)(*(int *)(iVar1 + 8) != 0);
  }
  fVar3 = *(float *)(param_1 + 8) * 0.017453292;
  fVar4 = 0.0;
  if ((fVar3 < 0.0) || (fVar4 = 6.2831855, 6.2831855 < fVar3)) {
    fVar3 = fVar4;
  }
  *(float *)(param_1 + 8) = fVar3;
  *(uint *)(param_1 + 0x10) = (uint)(*(int *)(iVar1 + 0xc) == 0);
  *(float *)(param_1 + 0x14) = (float)*(int *)(iVar1 + 0x10);
  iVar1 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(float *)(param_1 + 0x18) = (float)iVar1;
  return;
}

// 00CE9BD0  cUIEx0502::vf1C  size=1097  [class]
void __thiscall cUIEx0502::vf1C(int param_1,int *param_2,int param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  unkbyte10 Var10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  uint uStack_6f0;
  float fStack_6d0;
  float fStack_6cc;
  undefined4 uStack_6c8;
  float fStack_6c0;
  float fStack_6bc;
  float fStack_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float fStack_6a8;
  float fStack_6a4;
  int iStack_6a0;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 uStack_684;
  undefined1 auStack_680 [64];
  float fStack_640;
  float fStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  float fStack_630;
  float fStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 auStack_5e8 [377];
  
  iVar7 = 0;
  if ((((param_4 != (int *)0x0) && (iVar3 = (**(code **)(*param_4 + 8))(), iVar3 == 1)) &&
      (0.0 < *(float *)(param_3 + 0x4c))) &&
     ((*param_2 != 0 &&
      (puVar4 = (undefined4 *)cPrimHeap::allocBuffer(0x140,0x20), puVar4 != (undefined4 *)0x0)))) {
    cUIPrimWorkBase::cUIPrimWorkBase();
    *puVar4 = cUIPrimWorkFan::vftable;
    puVar4[0x4c] = 0;
    puVar4[0x4d] = 0;
    if (*(int *)(param_1 + 0x1c) == 0) {
      uVar6 = (uint)(param_4[5] == 4);
      iVar7 = uVar6 + 5;
      if (*(int *)(param_1 + 0x10) == 0) {
        if (uVar6 == 0) {
          iVar7 = 7;
        }
        else if (uVar6 == 1) {
          iVar7 = 8;
        }
      }
    }
    iVar3 = FUN_00caef00(param_2,0x21,0x21);
    if (iVar3 != 0) {
      puVar4[3] = iVar7;
      puVar4[0x4c] = 0;
      puVar4[0x4d] = 0x21;
      FUN_00ce5440(&fStack_6d0,auStack_680,param_3);
      fStack_640 = fStack_6d0 + fStack_6c0 * 0.5;
      fStack_63c = fStack_6bc * 0.5 + fStack_6cc;
      uStack_638 = uStack_6c8;
      if (*(int *)(param_1 + 0x10) == 0) {
        uStack_634 = 0;
      }
      else {
        uStack_634 = 0x3f800000;
      }
      fStack_630 = (fStack_6b8 + fStack_6b0 * 0.5) * fStack_6a8;
      fStack_62c = (fStack_6ac * 0.5 + fStack_6b4) * fStack_6a4;
      uStack_628 = 0;
      uStack_624 = 0;
      uStack_620 = *(undefined4 *)(param_3 + 0x40);
      uStack_61c = *(undefined4 *)(param_3 + 0x44);
      uStack_618 = *(undefined4 *)(param_3 + 0x48);
      uStack_614 = *(undefined4 *)(param_3 + 0x4c);
      fVar1 = *(float *)(param_1 + 8) * 0.032258064;
      if (*(int *)(param_1 + 0xc) != 0) {
        fVar1 = fVar1 * -1.0;
      }
      uStack_6f0 = 0;
      puVar8 = auStack_5e8;
      do {
        fVar2 = (float)(int)uStack_6f0;
        if ((int)uStack_6f0 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        fVar2 = 6.2831855 - fVar2 * fVar1;
        fVar9 = (float10)FUN_00ddba30(fVar2);
        Var10 = FUN_00ddba30(fVar2);
        iVar7 = *(int *)(param_1 + 0x10);
        fVar11 = (float10)fsin((float10)(float)fVar9);
        fVar11 = fVar11 * (float10)(fStack_6c0 * 0.5);
        puVar8[-10] = (float)fVar11;
        fVar9 = (float10)fcos((float10)(float)fVar9);
        fVar9 = fVar9 * (float10)(fStack_6bc * 0.5);
        puVar8[-9] = (float)fVar9;
        puVar8[-8] = 0;
        if (iVar7 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0x3f800000;
        }
        puVar8[-7] = uVar5;
        fVar12 = (float10)fsin(Var10);
        fVar12 = fVar12 * (float10)(fStack_6b0 * 0.5) * (float10)fStack_6a8;
        puVar8[-6] = (float)fVar12;
        fVar13 = (float10)fcos(Var10);
        fVar13 = fVar13 * (float10)(fStack_6ac * 0.5) * (float10)fStack_6a4;
        puVar8[-5] = (float)fVar13;
        puVar8[-4] = 0;
        puVar8[-3] = 0;
        puVar8[-10] = (float)((float10)fStack_640 - fVar11);
        puVar8[-9] = (float)((float10)fStack_63c - fVar9);
        puVar8[-8] = uStack_638;
        if (iVar7 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0x3f800000;
        }
        puVar8[-7] = uVar5;
        uStack_6f0 = uStack_6f0 + 1;
        puVar8[-6] = (float)((float10)fStack_630 - fVar12);
        puVar8[-5] = (float)((float10)fStack_62c - fVar13);
        puVar8[-4] = 0;
        puVar8[-3] = 0;
        puVar8[-2] = uStack_620;
        puVar8[-1] = uStack_61c;
        *puVar8 = uStack_618;
        puVar8[1] = uStack_614;
        puVar8 = puVar8 + 0xc;
      } while (uStack_6f0 < 0x20);
      iVar7 = FUN_00ccc160(&fStack_640,0x21);
      if (iVar7 != 0) {
        FUN_00cacde0(auStack_680,*(undefined4 *)(param_3 + 0x6c));
        puVar4[0x35] = *(undefined4 *)(param_3 + 0x74);
        if (iStack_6a0 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined4 *)(iStack_6a0 + 0x10);
        }
        puVar4[0x1a] = uVar5;
        puVar4[0x1d] = uStack_684;
        puVar4[0x1b] = 0;
        iVar7 = *(int *)(param_3 + 0x6c);
        puVar4[0x47] = iVar7;
        puVar4[0x49] = (uint)(iVar7 == 3);
        FUN_00ccabb0(auStack_680,uStack_690,*(undefined4 *)(param_3 + 0x68),uStack_68c);
        puVar4[0x3a] = *(undefined4 *)(param_1 + 0x10);
        uVar5 = *(undefined4 *)(param_1 + 0x18);
        puVar4[0x3b] = *(undefined4 *)(param_1 + 0x14);
        puVar4[0x3c] = uVar5;
        if (*(int *)(param_3 + 0x78) == 2) {
          FUN_00a30800(puVar4,0x3e,0);
          return;
        }
        if (*(int *)(param_3 + 0x78) == 1) {
          uVar5 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
          FUN_00a30800(puVar4,0x69,uVar5);
          return;
        }
        if (*(int *)(param_3 + 0x6c) == 3) {
          FUN_00a30800(puVar4,0x61,0);
          return;
        }
        uVar5 = FUN_00cb3840(*(undefined4 *)(param_3 + 0x7c),*(undefined4 *)(param_3 + 0x70));
        FUN_00a30800(puVar4,0x67,uVar5);
      }
    }
  }
  return;
}


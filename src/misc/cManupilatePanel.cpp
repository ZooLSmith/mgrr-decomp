// src/misc/cManupilatePanel.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E2F70..00ABAA10, 11 functions

#include "types.h"

// 005E2F70  cManupilatePanel::vf40  size=35  [class]
undefined4 __fastcall cManupilatePanel::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = GimmickBehaviorBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb44) = 0;
  return 1;
}

// 005E2FA0  cManupilatePanel::vf44  size=30  [class]
void cManupilatePanel::vf44(void)

{
  FUN_00a8c820();
  FUN_00a8c820();
  FUN_00a944d0();
  BehaviorBgBase::vf44();
  return;
}

// 005E2FC0  cManupilatePanel::vf4C  size=5  [class]
void __fastcall cManupilatePanel::vf4C(int param_1)

{
  BehaviorBgBase::vf4C();
  if ((((*(char *)(param_1 + 0x470) != '\0') && ((*(byte *)(param_1 + 0x472) & 0x80) != 0)) &&
      (*(char *)(param_1 + 0x471) != '\0')) && (*(int *)(param_1 + 0xb28) != 0)) {
    return;
  }
  Bh0064::vf64();
  return;
}

// 005E2FE0  cManupilatePanel::vf320  size=128  [class]
void __fastcall cManupilatePanel::vf320(int *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00e03a90();
  fVar1 = fVar1 * (float10)0.016666668 + (float10)(float)param_1[0x2d0];
  param_1[0x2d0] = (int)(float)fVar1;
  FUN_00f96580(0x43c80000,0x43960000,0x42000000,0xffffffff,0xfffffffd,&DAT_01644ca0,
               (double)((float10)(float)param_1[0x2d1] - fVar1));
  if ((float)param_1[0x2d1] < (float)param_1[0x2d0] !=
      ((float)param_1[0x2d1] == (float)param_1[0x2d0])) {
                    /* WARNING: Could not recover jumptable at 0x005e305c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x328))();
    return;
  }
  return;
}

// 005E3060  cManupilatePanel::vf324  size=19  [class]
void __fastcall cManupilatePanel::vf324(int param_1)

{
  *(undefined4 *)(param_1 + 0xb34) = 1;
  *(undefined4 *)(param_1 + 0xb40) = 0;
  return;
}

// 005E3080  cManupilatePanel::vf328  size=48  [class]
void __fastcall cManupilatePanel::vf328(int param_1)

{
  if (*(float *)(param_1 + 0xb44) < *(float *)(param_1 + 0xb40) !=
      (*(float *)(param_1 + 0xb44) == *(float *)(param_1 + 0xb40))) {
    *(undefined4 *)(param_1 + 0xb30) = 1;
  }
  *(undefined4 *)(param_1 + 0xb34) = 0;
  *(undefined4 *)(param_1 + 0xb40) = 0;
  return;
}

// 005E30B0  cManupilatePanel::vf318  size=29  [class]
void __thiscall cManupilatePanel::vf318(int param_1,int param_2)

{
  float fVar1;
  
  fVar1 = (float)*(int *)(param_2 + 0x28);
  if (*(int *)(param_2 + 0x28) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)(param_1 + 0xb44) = fVar1;
  return;
}

// 005E30D0  cManupilatePanel::vf31C  size=23  [class]
void __fastcall cManupilatePanel::vf31C(int param_1)

{
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb30) = 0;
  *(undefined4 *)(param_1 + 0xb34) = 0;
  return;
}

// 00AB62B0  cManupilatePanel::cManupilatePanel  size=18  [class]
undefined4 * __fastcall cManupilatePanel::cManupilatePanel(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB62D0  cManupilatePanel::vf04  size=6  [class]
undefined * cManupilatePanel::vf04(void)

{
  return &DAT_01b3533c;
}

// 00ABAA10  cManupilatePanel::vf00  size=43  [class]
undefined4 __thiscall cManupilatePanel::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


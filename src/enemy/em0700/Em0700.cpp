// src/enemy/em0700/Em0700.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005AB010..00AB75D0, 178 functions

#include "mgrr.h"
#include "Em0700.h"

// 005AB010  FUN_005ab010  size=37  [callgraph]
undefined4 FUN_005ab010(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 005AB150  FUN_005ab150  size=28  [callgraph]
void FUN_005ab150(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 005AB180  FUN_005ab180  size=28  [callgraph]
void FUN_005ab180(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 005AB1D0  FUN_005ab1d0  size=28  [callgraph]
void FUN_005ab1d0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 005AB220  FUN_005ab220  size=28  [callgraph]
void FUN_005ab220(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 005AB250  Em0700::setEmSetInfo  size=8  [class]
undefined4 Em0700::setEmSetInfo(void)

{
  return 1;
}

// 005AB260  Em0700::thunk_vf54  size=5  [class]
void __fastcall Em0700::thunk_vf54(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  bVar2 = false;
  iVar3 = FUN_00ac8410();
  if (iVar3 == 0) {
    iVar3 = FUN_00a8c760(0x25);
    if ((((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
        (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (((((float)param_1[0x218] != 0.0 || ((float)param_1[0x219] != 0.0)) ||
         ((float)param_1[0x21a] != 0.0)) && (iVar3 = FUN_00a12210(0xffffffff), iVar3 != 0)))) {
      iVar1 = *param_1;
      fStack_40 = (float)param_1[0x10] +
                  (((float)param_1[0x218] + *(float *)(iVar3 + 0x40)) - (float)param_1[0x10]);
      fStack_3c = ((*(float *)(iVar3 + 0x44) + (float)param_1[0x219]) - (float)param_1[0x11]) +
                  (float)param_1[0x11];
      fStack_38 = ((*(float *)(iVar3 + 0x48) + (float)param_1[0x21a]) - (float)param_1[0x12]) +
                  (float)param_1[0x12];
      fStack_34 = (((float)param_1[0x21b] + *(float *)(iVar3 + 0x4c)) - (float)param_1[0x13]) +
                  (float)param_1[0x13];
      uVar4 = (**(code **)(iVar1 + 0x84))();
      (**(code **)(iVar1 + 0x7c))(&fStack_40,uVar4);
      bVar2 = true;
    }
    iVar3 = FUN_00a8c760(0x24);
    if (((iVar3 != 0) && (iVar3 = FUN_00ac82f0(), iVar3 == 0)) &&
       ((!bVar2 && ((iVar3 = FUN_00a81330(), iVar3 != 0 && (iVar3 = FUN_00a7c8a0(), iVar3 != 0))))))
    {
      FUN_00a8ce90(&fStack_40,auStack_20);
      D3DXVec3TransformNormal(&fStack_40,&fStack_40,iVar3 + 0x10);
      fStack_40 = *(float *)(iVar3 + 0x40) + fStack_40;
      fStack_3c = *(float *)(iVar3 + 0x44) + fStack_3c;
      fStack_38 = *(float *)(iVar3 + 0x48) + fStack_38;
      fStack_30 = fStack_40 - (float)param_1[0x10];
      fStack_2c = fStack_3c - (float)param_1[0x11];
      fStack_28 = fStack_38 - (float)param_1[0x12];
      fStack_24 = fStack_34 - (float)param_1[0x13];
      FUN_00a12310(&fStack_30);
    }
  }
  Behavior::vf54();
  return;
}

// 005AB2B0  Em0700::vf17C  size=3  [class]
undefined4 Em0700::vf17C(void)

{
  return 0;
}

// 005AB2C0  Em0700::vf184  size=23  [class]
undefined4 __thiscall Em0700::vf184(int *param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x17c))();
  }
  return 0xffffffff;
}

// 005AB2E0  Em0700::vf188  size=50  [class]
void Em0700::vf188(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    FUN_00a7c8a0();
  }
  return;
}

// 005AB320  FUN_005ab320  size=139  [between]
void __fastcall FUN_005ab320(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1690) = 1;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(4,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x920);
  FUN_00a94ce0(0);
  return;
}

// 005AB3B0  FUN_005ab3b0  size=355  [between]
void __fastcall FUN_005ab3b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[0x5a4] = 1;
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(6,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(7,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 4:
    FUN_00aa4080(8,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  return;
}

// 005AB530  FUN_005ab530  size=240  [between]
void __fastcall FUN_005ab530(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[0x5a4] = 1;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    uVar2 = 10;
    if (param_1[0x186] == 0x10003) {
      uVar2 = 0xb;
    }
    if (param_1[0x186] == 0x10004) {
      uVar2 = 0xc;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) goto LAB_005ab5d9;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_005ab5d9:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 005AB620  FUN_005ab620  size=265  [between]
void __fastcall FUN_005ab620(int *param_1)

{
  int iVar1;
  undefined4 local_c [3];
  
  local_c[0] = 0x34;
  local_c[1] = 0x35;
  local_c[2] = 0x36;
  param_1[0x5a4] = 1;
  param_1[0x5a2] = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(local_c[(uint)param_1[0x5a1] % 3],0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5a1] = param_1[0x5a1] + 1;
  }
  else if (iVar1 != 1) goto LAB_005ab6df;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_005ab6df:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 005AB740  FUN_005ab740  size=155  [between]
void __fastcall FUN_005ab740(int *param_1)

{
  int iVar1;
  
  if ((param_1[0x250] != 0) && (iVar1 = FUN_00ac83b0(), iVar1 == 0)) {
    if (param_1[0x187] != 3) {
      return;
    }
    if (((float)param_1[0x15] <= -5.0) &&
       (iVar1 = (**(code **)(*param_1 + 800))(0x3d888889), iVar1 != 0)) {
      param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
      FUN_00a8caf0(0x20017,0,0,0);
    }
  }
  if ((param_1[0x187] == 3) && ((float)param_1[0x15] <= -7.11)) {
    param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
    FUN_00a8caf0(0x20017,0,0,0);
  }
  return;
}

// 005AB7E0  FUN_005ab7e0  size=304  [between]
void __fastcall FUN_005ab7e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x187] != 1) {
    return;
  }
  if (param_1[0x4b9] == 0) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if ((((param_1[0x4b3] != 0) && (iVar2 = FUN_00ac83b0(), iVar2 == 0)) && (param_1[0x250] != 0))
       && (iVar1 != 0)) {
      param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
      FUN_00a8caf0(0x20018,0,0,0);
      FUN_00c5ad80(param_1[0x4b5]);
      param_1[0x4b5] = -1;
    }
    if ((param_1[0x251] == 2) && (iVar1 != 0)) {
      param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
      FUN_00a8caf0(0x20018,0,0,0);
      FUN_00c5ad80(param_1[0x4b5]);
      param_1[0x4b5] = -1;
    }
    if (param_1[0x250] == 0) {
      return;
    }
    iVar2 = FUN_00a8e520();
    if (iVar2 != 0) {
      return;
    }
    if (iVar1 == 0) {
      return;
    }
    uVar3 = 0x20018;
  }
  else {
    uVar3 = 0x30005;
  }
  param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
  FUN_00a8caf0(uVar3,0,0,0);
  FUN_00c5ad80(param_1[0x4b5]);
  param_1[0x4b5] = -1;
  return;
}

// 005AB930  FUN_005ab930  size=303  [between]
void __fastcall FUN_005ab930(int *param_1)

{
  int iVar1;
  
  param_1[0x600] = 0;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x8b,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x225] = 0x3e4ccccd;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x289] = 0x41200000;
    param_1[0x288] = 1;
    (**(code **)(*param_1 + 0x220))(0x41000000);
    DAT_01bea094 = DAT_01bea094 & 0xffffffdf;
    FUN_00c5ad80(param_1[0x4b5]);
    param_1[0x4b5] = -1;
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    param_1[0x24] = 0;
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
    FUN_00a8caf0(0x30006,0,0,0);
  }
  return;
}

// 005ABA60  FUN_005aba60  size=71  [between]
void __fastcall FUN_005aba60(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
    FUN_00a8caf0(0x30007,0,0,0);
  }
  return;
}

// 005ABAB0  FUN_005abab0  size=202  [between]
void __fastcall FUN_005abab0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1800) = 0;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x8d,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    DAT_01bea094 = DAT_01bea094 & 0xffffffdf;
    FUN_00c5ad80(*(undefined4 *)(param_1 + 0x12d4));
    *(undefined4 *)(param_1 + 0x12d4) = 0xffffffff;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e6d00();
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 005ABB90  Em0700::vf34C  size=27  [class]
void __fastcall Em0700::vf34C(int param_1)

{
  *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x847fffff;
  FUN_00a8caf0(0x10000,0,0,0);
  return;
}

// 005ABBD0  FUN_005abbd0  size=1  [between]
void FUN_005abbd0(void)

{
  return;
}

// 005ABBE0  FUN_005abbe0  size=1584  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005abbe0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  piVar4 = (int *)0x0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    piVar4 = (int *)FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4520(0x166,iVar2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    *(undefined4 *)(param_1 + 0x37f0) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x37f4) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x37f8) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x37fc) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x3800) = *(undefined4 *)(param_1 + 0x94);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0xb74) = 0;
    FUN_0093db80();
    *(undefined4 *)(param_1 + 0x914) = 0;
    *(undefined4 *)(param_1 + 0x940) = 0;
    fVar5 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + 3.1415927);
    *(float *)(param_1 + 0x27ec) = (float)fVar5;
    FUN_00cad1b0(0);
    FUN_00b7d090(0);
    iVar3 = FUN_004b5380();
    if (iVar3 != 0) {
      uVar6 = 0x1ea;
LAB_005abd5d:
      uVar13 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 0x8000000;
      uVar9 = 0x3f800000;
      uVar8 = 0;
      uVar7 = 0;
      uVar12 = 0x11017;
      FUN_004b5380(0x11017,uVar6,iVar2,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00aa45f0(uVar12,uVar6,iVar2,uVar7,uVar8,uVar9,uVar10,uVar11,uVar13);
      *(undefined4 *)(param_1 + 0xb9c) = 4;
    }
    break;
  case 1:
  case 3:
  case 5:
  case 7:
    break;
  case 2:
    FUN_00aa4520(0x167,iVar2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_004b5380();
    if (iVar3 != 0) {
      uVar6 = 0x1eb;
      goto LAB_005abd5d;
    }
    break;
  case 4:
    FUN_00aa4520(0x168,iVar2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_004b5380();
    if (iVar3 != 0) {
      uVar6 = 0x1ec;
      goto LAB_005abd5d;
    }
    break;
  case 6:
    FUN_00aa4520(0x169,iVar2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_004b5380();
    if (iVar3 != 0) {
      uVar6 = 0x1ed;
      goto LAB_005abd5d;
    }
    break;
  case 8:
    FUN_00aa4520(0x16a,iVar2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_004b5380();
    if (iVar3 != 0) {
      uVar13 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 0x8000000;
      uVar9 = 0x3f800000;
      uVar8 = 0;
      uVar7 = 0;
      uVar12 = 0x1ee;
      uVar6 = 0x11017;
      iVar3 = iVar2;
      FUN_004b5380(0x11017,0x1ee,iVar2,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00aa45f0(uVar6,uVar12,iVar3,uVar7,uVar8,uVar9,uVar10,uVar11,uVar13);
      *(undefined4 *)(param_1 + 0xb9c) = 4;
    }
  case 9:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    iVar3 = FUN_00a8c760(0xb);
    if (iVar3 == 0) {
      return;
    }
    FUN_00cbc8f0(0x1000,1);
    if ((*(byte *)(param_1 + 0xcfc) & 0x40) == 0) {
      return;
    }
LAB_005abfe0:
    FUN_00aa4520(0x16c,iVar2,5,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
    FUN_00dda360(0,0x3f19999a,0x3f19999a,6);
    if (piVar4 == (int *)0x0) {
      return;
    }
    (**(code **)(*piVar4 + 0x30c))(1,0);
    return;
  case 10:
    FUN_00aa4520(0x16b,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0x940) = 0;
    FUN_00aa4520(0x16d,iVar2,9,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
    iVar3 = FUN_004b5380();
    if (iVar3 != 0) {
      uVar13 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0x3f800000;
      uVar8 = 0;
      uVar7 = 0;
      uVar12 = 0x1ef;
      uVar6 = 0x11017;
      iVar3 = iVar2;
      FUN_004b5380(0x11017,0x1ef,iVar2,0,0,0x3f800000,0,0,0x3f800000);
      FUN_00aa45f0(uVar6,uVar12,iVar3,uVar7,uVar8,uVar9,uVar10,uVar11,uVar13);
      *(undefined4 *)(param_1 + 0xb9c) = 4;
    }
    goto LAB_005ac11a;
  case 0xb:
LAB_005ac11a:
    fVar1 = *(float *)(param_1 + 0x920) - 0.01;
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 < 0.5) {
      *(undefined4 *)(param_1 + 0x920) = 0x3f000000;
    }
    FUN_00a96030(0,*(undefined4 *)(param_1 + 0x920));
    FUN_00a96030(9,*(undefined4 *)(param_1 + 0x920));
    iVar3 = FUN_004b5380();
    if (iVar3 != 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x920);
      uVar12 = 0;
      FUN_004b5380(0,uVar6);
      FUN_00a96030(uVar12,uVar6);
    }
    BehaviorAppBase::thunk_vf64();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8caf0(299,0,0,0);
    }
    FUN_00cbc8f0(0x1000,1);
    if ((*(byte *)(param_1 + 0xcfc) & 0x40) == 0) {
      return;
    }
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
    fVar1 = *(float *)(param_1 + 0x920) + 0.15;
    *(float *)(param_1 + 0x920) = fVar1;
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      *(undefined4 *)(param_1 + 0x920) = 0x40000000;
    }
    goto LAB_005abfe0;
  default:
    goto switchD_005abc3a_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
switchD_005abc3a_default:
  return;
}

// 005AC240  FUN_005ac240  size=1  [between]
void FUN_005ac240(void)

{
  return;
}

// 005AC250  FUN_005ac250  size=1687  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ac250(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  piVar4 = (int *)0x0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    piVar4 = (int *)FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00a94bc0(9,0);
    FUN_00aa4520(0x16f,iVar2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    piVar4[0x4b4] = piVar4[0x4b4] & 0x847fffff;
    FUN_00a8caf0(0x70006,0,0,0);
    iVar3 = FUN_004b5380();
    if (iVar3 != 0) {
      uVar5 = 0x1f0;
LAB_005ac344:
      uVar12 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 0x8000000;
      uVar9 = 0x3f800000;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0x11017;
      FUN_004b5380(0x11017,uVar5,iVar2,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00aa45f0(uVar6,uVar5,iVar2,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
      *(undefined4 *)(param_1 + 0xb9c) = 4;
    }
    break;
  case 1:
  case 7:
    break;
  case 2:
    FUN_00aa4520(0x170,iVar2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_004b5380();
    if (iVar3 != 0) {
      uVar12 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 0x8000000;
      uVar9 = 0x3f800000;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0x1f1;
      uVar5 = 0x11017;
      iVar3 = iVar2;
      FUN_004b5380(0x11017,0x1f1,iVar2,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00aa45f0(uVar5,uVar6,iVar3,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
      *(undefined4 *)(param_1 + 0xb9c) = 4;
    }
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    iVar3 = FUN_00a8c760(0xb);
    if (iVar3 == 0) {
      return;
    }
    FUN_00cbc8f0(0x2000,1);
    if ((*(byte *)(param_1 + 0xcfc) & 0x80) == 0) {
      return;
    }
    FUN_00aa4520(0x172,iVar2,5,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
    FUN_00dda360(0,0x3f19999a,0x3f19999a,6);
    if (piVar4 == (int *)0x0) {
      return;
    }
    (**(code **)(*piVar4 + 0x30c))(1,0);
    return;
  case 4:
    FUN_00aa4520(0x171,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x920) = 0x3f4ccccd;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
    FUN_00aa4520(0x173,iVar2,9,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
    iVar3 = FUN_004b5380();
    if (iVar3 != 0) {
      uVar12 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0x3f800000;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 500;
      uVar5 = 0x11017;
      iVar3 = iVar2;
      FUN_004b5380(0x11017,500,iVar2,0,0,0x3f800000,0,0,0x3f800000);
      FUN_00aa45f0(uVar5,uVar6,iVar3,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
      *(undefined4 *)(param_1 + 0xb9c) = 4;
    }
    goto LAB_005ac5ad;
  case 5:
LAB_005ac5ad:
    fVar1 = *(float *)(param_1 + 0x920) - 0.01;
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 < 0.5) {
      *(undefined4 *)(param_1 + 0x920) = 0x3f000000;
    }
    FUN_00a96030(0,*(undefined4 *)(param_1 + 0x920));
    FUN_00a96030(9,*(undefined4 *)(param_1 + 0x920));
    iVar3 = FUN_004b5380();
    if (iVar3 != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x920);
      uVar6 = 0;
      FUN_004b5380(0,uVar5);
      FUN_00a96030(uVar6,uVar5);
    }
    BehaviorAppBase::thunk_vf64();
    FUN_00cbc8f0(0x2000,1);
    if ((*(byte *)(param_1 + 0xcfc) & 0x80) != 0) {
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
      fVar1 = *(float *)(param_1 + 0x920) + 0.15;
      *(float *)(param_1 + 0x920) = fVar1;
      if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
        *(undefined4 *)(param_1 + 0x920) = 0x40000000;
      }
      FUN_00aa4520(0x172,iVar2,5,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
      FUN_00dda360(0,0x3f19999a,0x3f19999a,6);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x30c))(1,0);
      }
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 6:
    FUN_00a94bc0(9,0);
    FUN_00aa4520(0x174,iVar2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00a8cb60(6);
    iVar3 = FUN_004b5380();
    if (iVar3 != 0) {
      uVar5 = 0x1f2;
      goto LAB_005ac344;
    }
    break;
  case 8:
    FUN_00a94bc0(9,0);
    FUN_00aa4520(0x175,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_004b5380();
    if (iVar3 != 0) {
      uVar12 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 0x8000000;
      uVar9 = 0x3f800000;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 499;
      uVar5 = 0x11017;
      FUN_004b5380(0x11017,499,iVar2,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00aa45f0(uVar5,uVar6,iVar2,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
      *(undefined4 *)(param_1 + 0xb9c) = 4;
    }
  case 9:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00d5ea40("P740_EVENT",1,0);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    iVar2 = FUN_00a8c760(0xb);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_00a12210(0xf10);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_00a12210(0xf10);
    fVar1 = *(float *)(iVar2 + 0x54) * 10.0;
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
  case 10:
    FUN_00b94790(0x3f800000,0x3f800000);
  default:
    goto switchD_005ac2a8_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
switchD_005ac2a8_default:
  return;
}

// 005AC920  FUN_005ac920  size=57  [between]
void FUN_005ac920(short param_1)

{
  short *psVar1;
  
  psVar1 = &DAT_01643074;
  do {
    FUN_00a33520(param_1 == *psVar1,0x760,*psVar1);
    psVar1 = psVar1 + 1;
  } while ((int)psVar1 < 0x1643082);
  return;
}

// 005AC9B0  FUN_005ac9b0  size=1  [between]
void FUN_005ac9b0(void)

{
  return;
}

// 005AC9C0  FUN_005ac9c0  size=1139  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ac9c0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
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
    FUN_00b7d090(1);
    iVar2 = FUN_00b88480();
    if (iVar2 != 0) {
      FUN_00b88480();
      FUN_00c11be0();
    }
    FUN_00aa4520(0x129,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
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
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
    param_1[0x9fb] = (int)(float)fVar4;
    FUN_00b7d7a0(iVar1,0x1f5,0x8100000);
    iVar1 = FUN_00b80980();
    if (iVar1 == 0) {
      FUN_00b7e210(0);
      param_1[0x2dd] = 0;
    }
    else {
      FUN_00b7d090(0);
    }
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4520(0x12a,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar1,0x1f6,0x8100000);
    FUN_00b7d090(1);
    iVar1 = FUN_00b80980();
    if (iVar1 != 0) {
      FUN_00b7e210(0);
      param_1[0x2dd] = 0;
    }
    goto LAB_005acc21;
  case 3:
LAB_005acc21:
    iVar1 = FUN_00a8c760(0xb);
    if (iVar1 != 0) {
      FUN_00cbc8f0(0x4000,1);
      iVar1 = FUN_00b7a7c0();
      param_1[0x250] = param_1[0x250] + iVar1;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if (param_1[0x250] < 0x28) {
      return;
    }
    FUN_00a8caf0(0x126,0,0,0);
    return;
  case 4:
    FUN_00aa4520(299,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_00b7d7a0(iVar1,0x1f9,0x8100000);
    FUN_00a8cb60(4);
    param_1[0x187] = param_1[0x187] + 1;
    uVar3 = FUN_00ac84d0(0x12);
    (**(code **)(*param_1 + 0x30c))(uVar3,0);
    param_1[0x250] = 2;
    param_1[0x251] = 0;
    goto LAB_005acd22;
  case 5:
LAB_005acd22:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar1 = param_1[0x250];
    param_1[0x250] = iVar1 + -1;
    if (iVar1 != 0) {
      return;
    }
    if (param_1[0x251] != 0) {
      return;
    }
    FUN_00b7e210(1);
    param_1[0x251] = 1;
    return;
  case 6:
    FUN_00aa4520(300,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_00b7d7a0(iVar1,0x1fa,0x8100000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      FUN_00ba6810(1,0);
      FUN_00a8caf0(0xcd,0,0,0);
      iVar1 = FUN_00b7c970();
      if (iVar1 < 1) {
        FUN_00a8caf0(0xdb,0,0,0);
        return;
      }
    }
  default:
    goto switchD_005aca1b_default;
  }
  iVar1 = FUN_00a8c760(0xb);
  if (iVar1 != 0) {
    FUN_00cbc8f0(0x4000,1);
    iVar1 = FUN_00b7a7c0();
    param_1[0x250] = param_1[0x250] + iVar1;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_005aca1b_default:
  return;
}

// 005ACE60  FUN_005ace60  size=1  [between]
void FUN_005ace60(void)

{
  return;
}

// 005ACE70  FUN_005ace70  size=1  [between]
void FUN_005ace70(void)

{
  return;
}

// 005ACE80  FUN_005ace80  size=922  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ace80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0x138,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(uint *)(iVar3 + 0x12d0) = *(uint *)(iVar3 + 0x12d0) & 0x847fffff;
    FUN_00a8caf0(0x70002,0,0,0);
    FUN_00b7d7a0(iVar1,0x1ff,0x8100000);
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4520(0x13b,iVar1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar1,0x202,0x8000000);
    FUN_00a96030(0,1.0 / (float)param_1[0x244]);
    iVar1 = FUN_004b5380();
    if (iVar1 != 0) {
      fVar4 = 1.0 / (float)param_1[0x244];
      uVar2 = 0;
      FUN_004b5380(0,fVar4);
      FUN_00a96030(uVar2,fVar4);
    }
    goto LAB_005ad004;
  case 3:
LAB_005ad004:
    iVar1 = FUN_00a8c760(0x20);
    if (iVar1 != 0) {
      FUN_00b85350(0x40a00000,0x3ca3d70a,0x3ca3d70a,1,0,0x3dcccccd);
      FUN_00cbc8f0(10,1);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar1 = FUN_00a8c760(0x20);
    if ((iVar1 != 0) &&
       ((((param_1[0x397] & param_1[0x33e]) != 0 && ((param_1[0x398] & param_1[0x33e]) != 0)) ||
        (iVar1 = FUN_00a1d280(0x14), iVar1 != 0)))) {
      FUN_00a8caf0(0x128,0,0,0);
      FUN_00b7aa80();
      return;
    }
    break;
  case 4:
    FUN_00aa4520(0x13d,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8cb60(4);
    uVar2 = FUN_00ac84d0(0x12);
    (**(code **)(*param_1 + 0x30c))(uVar2,0);
    FUN_00b7d7a0(iVar1,0x20c,0x8100000);
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 6:
    FUN_00aa4520(0x13e,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7d7a0(iVar1,0x20d,0x8100000);
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      FUN_00ba6810(1,0);
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

// 005AD240  FUN_005ad240  size=1  [between]
void FUN_005ad240(void)

{
  return;
}

// 005AD680  FUN_005ad680  size=1  [between]
void FUN_005ad680(void)

{
  return;
}

// 005AD690  FUN_005ad690  size=36  [between]
undefined4 FUN_005ad690(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 0x12e4);
    }
  }
  return 0;
}

// 005AD6C0  FUN_005ad6c0  size=36  [between]
undefined4 FUN_005ad6c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 0x12e8);
    }
  }
  return 0;
}

// 005AD6F0  FUN_005ad6f0  size=1509  [between]
void __fastcall FUN_005ad6f0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_00ac94e0("ex_Lhand");
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
      }
      iVar6 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"ex_Lhand"), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar6 < *(short *)(iVar3 + 0x324));
      }
    }
  }
  FUN_00ac94e0("ex_Rhand");
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
      }
      iVar6 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"ex_Rhand"), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar6 < *(short *)(iVar3 + 0x324));
      }
    }
  }
  FUN_00ac94e0("ex_Head");
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
      }
      iVar6 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"ex_Head"), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar6 < *(short *)(iVar3 + 0x324));
      }
    }
  }
  FUN_00ac94e0("ex_Whand");
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
      }
      iVar6 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"ex_Whand"), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar6 < *(short *)(iVar3 + 0x324));
      }
    }
  }
  FUN_00ac94e0("ex_Body");
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
      }
      iVar6 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"ex_Body"), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar6 < *(short *)(iVar3 + 0x324));
      }
    }
  }
  FUN_00ac94e0("ex_Full");
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
      }
      iVar6 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"ex_Full"), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar6 < *(short *)(iVar3 + 0x324));
      }
    }
  }
  FUN_00ac94e0("ex_qte");
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
      }
      iVar6 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"ex_qte"), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar6 < *(short *)(iVar3 + 0x324));
      }
    }
  }
  FUN_00ac94e0("damage");
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
      }
      iVar6 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"damage"), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar6 < *(short *)(iVar3 + 0x324));
      }
    }
  }
  FUN_00ac94e0("ex_weak");
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        FUN_00a81330();
        iVar3 = FUN_00a7c8a0();
      }
      iVar6 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(iVar3 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"ex_weak"), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar6 < *(short *)(iVar3 + 0x324));
      }
    }
  }
  *(undefined4 *)(param_1 + 0xdc0) = 0x42480000;
  *(undefined4 *)(param_1 + 0xdc4) = 0x42480000;
  *(undefined4 *)(param_1 + 0xdc8) = 0x42480000;
  *(undefined4 *)(param_1 + 0xdcc) = 0x42480000;
  *(undefined4 *)(param_1 + 0xdd0) = 0x42480000;
  *(undefined4 *)(param_1 + 0x12b0) = 0;
  *(undefined4 *)(param_1 + 0xdd4) = 0x42480000;
  *(undefined4 *)(param_1 + 0x12b4) = 0;
  *(undefined4 *)(param_1 + 0xdd8) = 0x42480000;
  return;
}

// 005ADD10  FUN_005add10  size=39  [between]
void FUN_005add10(int param_1)

{
  undefined4 uVar1;
  
  FUN_00a7c950();
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 005ADD40  FUN_005add40  size=33  [between]
void FUN_005add40(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return;
  }
  FUN_00a7c8a0();
  return;
}

// 005ADD70  FUN_005add70  size=44  [between]
void FUN_005add70(int param_1)

{
  undefined4 uVar1;
  
  FUN_00a7c950();
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 005ADDA0  FUN_005adda0  size=88  [between]
void FUN_005adda0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        E3_EnemyBoardDebrisSokushi::vf4C();
        FUN_00a7c950();
        return;
      }
      FUN_00a7c8a0();
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  FUN_00a7c950();
  return;
}

// 005ADE00  FUN_005ade00  size=120  [between]
void FUN_005ade00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      iVar1 = FUN_00a12210(param_1);
      uVar2 = FUN_009f8b40(1);
      iVar1 = FUN_009577e0(0x23a6f56d,iVar1 + 0x40,uVar2);
      if (iVar1 != 0) {
        FUN_00949490();
        return;
      }
    }
  }
  return;
}

// 005ADE80  FUN_005ade80  size=105  [between]
void FUN_005ade80(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      FUN_00a9e290(param_2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 005ADEF0  FUN_005adef0  size=61  [between]
void FUN_005adef0(undefined4 param_1)

{
  FUN_005ade80(0,param_1);
  FUN_005ade80(1,param_1);
  FUN_005ade80(2,param_1);
  FUN_005ade80(3,param_1);
  FUN_005ade80(4,param_1);
  return;
}

// 005ADF30  FUN_005adf30  size=77  [between]
void __fastcall FUN_005adf30(int *param_1)

{
  (**(code **)(*param_1 + 0x314))();
  param_1[0x24] = 0;
  FUN_00eaa6e0(0x42700000,0);
  FUN_00c5ad80(param_1[0x4b5]);
  param_1[0x4b5] = -1;
  return;
}

// 005ADFE0  FUN_005adfe0  size=18  [between]
void __fastcall FUN_005adfe0(int param_1)

{
  if (*(char *)(param_1 + 0x1698) == '\x01') {
    *(undefined4 *)(param_1 + 0x1694) = 0;
  }
  return;
}

// 005AE080  FUN_005ae080  size=130  [between]
void __fastcall FUN_005ae080(int *param_1)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  
  cVar2 = (char)param_1[0x5a8];
  if (cVar2 == '\x01') {
    fVar1 = (float)param_1[0x5a7];
    param_1[0x5a7] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      *(undefined1 *)(param_1 + 0x5a8) = 2;
    }
  }
  else {
    if (cVar2 == '\x02') {
      pcVar3 = *(code **)(*param_1 + 0x358);
      param_1[0x5a7] = 0x42700000;
      *(undefined1 *)(param_1 + 0x5a8) = 3;
      (*pcVar3)(0x58,0);
    }
    else if (cVar2 != '\x03') {
      return;
    }
    fVar1 = (float)param_1[0x5a7];
    param_1[0x5a7] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      *(undefined1 *)(param_1 + 0x5a8) = 0;
      return;
    }
  }
  return;
}

// 005AE110  FUN_005ae110  size=130  [between]
void __thiscall FUN_005ae110(int param_1,int param_2)

{
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (param_2 != -1) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0x40400000;
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    fStack_2c = *(float *)(param_1 + 0x40) + fStack_2c;
    fStack_28 = *(float *)(param_1 + 0x44) + fStack_28;
    fStack_24 = *(float *)(param_1 + 0x48) + fStack_24;
    FUN_00da9630(1,1);
    FUN_00da9660(1,&fStack_2c,0);
  }
  return;
}

// 005AE1A0  FUN_005ae1a0  size=333  [between]
void __fastcall FUN_005ae1a0(int param_1)

{
  int iVar1;
  int iVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar3;
  float10 extraout_ST0_01;
  
  iVar1 = *(int *)(param_1 + 0x870);
  iVar2 = FUN_00fdbc60();
  if (iVar1 <= iVar2) {
    *(undefined4 *)(param_1 + 0x17e0) = 1;
  }
  iVar2 = FUN_00fdbc60();
  if (iVar1 <= iVar2) {
    *(byte *)(param_1 + 0x17e4) = *(byte *)(param_1 + 0x17e4) | 1;
  }
  iVar2 = FUN_00fdbc60();
  if ((iVar1 <= iVar2) && (*(float *)(param_1 + 0x164c) < 1.0)) {
    *(byte *)(param_1 + 0x17e4) = *(byte *)(param_1 + 0x17e4) | 4;
  }
  iVar2 = FUN_00fdbc60();
  if ((iVar1 <= iVar2) && ((float10)*(float *)(param_1 + 0x1650) < extraout_ST0)) {
    *(byte *)(param_1 + 0x17e4) = *(byte *)(param_1 + 0x17e4) | 8;
  }
  iVar2 = FUN_00fdbc60();
  if ((iVar1 <= iVar2) && ((*(byte *)(param_1 + 0x17f8) & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x17fc) = 0;
    *(byte *)(param_1 + 0x17f8) = *(byte *)(param_1 + 0x17f8) | 1;
  }
  iVar2 = FUN_00fdbc60();
  if ((iVar1 <= iVar2) && ((*(byte *)(param_1 + 0x17e9) & 1) == 0)) {
    fVar3 = (float10)*(float *)(param_1 + 0x1648) * extraout_ST0_00;
    *(byte *)(param_1 + 0x17e9) = *(byte *)(param_1 + 0x17e9) | 1;
    *(undefined4 *)(param_1 + 0x17f4) = 3;
    *(float *)(param_1 + 0x17f0) = (float)fVar3;
    *(float *)(param_1 + 0x17ec) = (float)fVar3;
  }
  iVar2 = FUN_00fdbc60();
  if ((iVar1 <= iVar2) && ((*(byte *)(param_1 + 0x17e9) & 4) == 0)) {
    fVar3 = extraout_ST0_01 * (float10)*(float *)(param_1 + 0x1648);
    *(byte *)(param_1 + 0x17eb) = *(byte *)(param_1 + 0x17eb) | 3;
    *(float *)(param_1 + 0x17f0) = (float)fVar3;
    *(byte *)(param_1 + 0x17e9) = *(byte *)(param_1 + 0x17e9) | 4;
    *(float *)(param_1 + 0x17ec) = (float)fVar3;
    *(undefined4 *)(param_1 + 0x17f4) = 3;
    return;
  }
  return;
}

// 005AE2F0  Em0700::vf10C  size=29  [class]
undefined4 Em0700::vf10C(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0x20701) {
    return 0;
  }
  uVar1 = FUN_00a81330();
  return uVar1;
}

// 005AE310  Em0700::vf150  size=454  [class]
void __thiscall Em0700::vf150(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    param_1[0x24] = 0;
    FUN_00eaa6e0(0x41200000,0);
    FUN_00c5ad80(param_1[0x4b5]);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x4b5] = -1;
    (*pcVar1)(0x41200000);
    if (param_2 == 0x5d) {
      uVar2 = 0x70005;
    }
    else if (param_2 == 0x5e) {
      uStack_24 = 0xc3440000;
      uStack_20 = 0xc0e3851f;
      uStack_1c = 0x43f5b333;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      (**(code **)(*param_1 + 0x7c))(&uStack_24,&uStack_34);
      uVar2 = 0x70000;
    }
    else if (param_2 == 0x5f) {
      uVar2 = 0x70007;
    }
    else if (param_2 == 100) {
      uVar2 = 0x7000c;
    }
    else if (param_2 == 0x60) {
      uVar2 = 0x70008;
    }
    else if (param_2 == 0x61) {
      uVar2 = 0x70009;
    }
    else if (param_2 == 0x62) {
      uVar2 = 0x7000a;
    }
    else {
      if (param_2 != 99) {
        return;
      }
      uStack_34 = 0xc3468000;
      uStack_30 = 0xc0e3851f;
      uStack_2c = 0x43f7547b;
      uStack_24 = 0;
      uStack_20 = 0xbfc90fdb;
      uStack_1c = 0;
      (**(code **)(*param_1 + 0x7c))(&uStack_34,&uStack_24);
      uVar2 = 0x7000b;
    }
    param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
    FUN_00a8caf0(uVar2,0,0,0);
  }
  return;
}

// 005AE4E0  Em0700::vf158  size=5  [class]
undefined4 Em0700::vf158(void)

{
  return 0;
}

// 005AE4F0  Em0700::vf15C  size=33  [class]
void Em0700::vf15C(undefined4 param_1,undefined4 param_2)

{
  BehaviorAppBase::vf15C(param_1,param_2);
  FUN_00a93090(6);
  return;
}

// 005B0CA0  Em0700::vf44  size=556  [class]
void __fastcall Em0700::vf44(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  FUN_00a7c950();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  FUN_00a7c950();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  FUN_00a7c950();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  FUN_00a7c950();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  FUN_00a7c950();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
  }
  FUN_00c5ad80(*(undefined4 *)(param_1 + 0x12d4));
  *(undefined4 *)(param_1 + 0x12d4) = 0xffffffff;
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  FUN_00a934c0();
  FUN_00a92a00();
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
  DAT_01dc08dc = 0;
  DAT_01dc08e0 = 0;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(param_1);
  BehaviorEmBase::vf44();
  return;
}

// 005B0ED0  FUN_005b0ed0  size=549  [between]
undefined4 __thiscall FUN_005b0ed0(int *param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  piVar2 = param_2;
  piVar4 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00a7c8a0();
  }
  puVar1 = (uint *)(param_2 + 0x23);
  param_2 = (int *)param_2[1];
  if ((*puVar1 & 0x200) != 0) {
    param_2 = (int *)FUN_00fdbc60();
  }
  param_1[0x51b] = param_1[0x51b] - (int)param_2;
  if (param_1[0x51b] < -1) {
    param_1[0x51b] = -1;
  }
  if (0 < (int)param_2) {
    param_2 = (int *)FUN_00fdbc60();
    if ((int)param_2 < 2) {
      param_2 = (int *)0x1;
    }
  }
  if ((piVar4 != (int *)0x0) && ((*(byte *)(piVar4 + 0x130) & 0x10) != 0)) {
    iVar3 = FUN_00a8c760(0x3d);
    if ((iVar3 != 0) &&
       (((((iVar3 = *piVar2, iVar3 == 0x2a || (iVar3 == 0x4a)) || (iVar3 == 0x20)) ||
         ((iVar3 == 0x8b || (iVar3 == 0x8c)))) || (iVar3 == 0x8d)))) {
      (**(code **)(*piVar4 + 0x150))(0x60,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(0x60,piVar4[0x13c]);
      return 0;
    }
    uVar5 = (uint)*(byte *)(piVar2 + 4);
    iVar3 = FUN_00a8c760(0x10);
    if (iVar3 != 0) {
      uVar5 = (int)uVar5 >> 1;
    }
    (**(code **)(*param_1 + 0x21c))(piVar4,uVar5,0x3c23d70a,0);
    FUN_00aa4080(0x77,1,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
    param_1[0x5a2] = param_1[0x5a2] + 1;
    if ((piVar2[0x23] & 0x40000000U) != 0) {
      param_1[0x5a3] = param_1[0x5a3] + -1;
    }
  }
  uVar5 = 1;
  iVar3 = FUN_00a8c760(0x3c);
  if (iVar3 == 0) {
    iVar3 = FUN_00a8c760(0x32);
    if (iVar3 == 0) goto LAB_005b106a;
  }
  uVar5 = 0x40001;
LAB_005b106a:
  if ((((piVar2[0x23] & 0x40000000U) != 0) && (param_1[0x5a4] != 0)) && (param_1[0x5a3] < 1)) {
    param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
    FUN_00a8caf0(0x2000a,0,0,0);
    param_1[0x5a3] = 0xf;
    uVar5 = uVar5 | 0x40000;
  }
  (**(code **)(*param_1 + 0x30c))(param_2,0);
  if (param_1[0x21c] < 2) {
    param_1[0x21c] = 1;
  }
  (**(code **)(*param_1 + 0x198))(piVar4,piVar2,uVar5);
  return 1;
}

// 005B1100  FUN_005b1100  size=1279  [between]
undefined4 __thiscall FUN_005b1100(int *param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_EBX;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_10;
  
  iVar1 = param_1[0x186];
  piVar6 = (int *)0x0;
  iVar4 = *param_2;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    piVar6 = (int *)FUN_00a7c8a0();
  }
  local_10 = param_2[1];
  if ((param_2[0x23] & 0x200U) != 0) {
    local_10 = FUN_00fdbc60();
  }
  if ((0 < local_10) && (local_10 = FUN_00fdbc60(), local_10 < 2)) {
    local_10 = 1;
  }
  if (((piVar6 != (int *)0x0) && ((*(byte *)(piVar6 + 0x130) & 0x10) != 0)) && (piVar6[0x139] == 0))
  {
    iVar3 = FUN_00a8c760(0x22);
    if ((iVar3 != 0) && (param_1[0x4b9] != 0)) {
      param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
      FUN_00a8caf0(0x30003,0,0,0);
      *(byte *)((int)param_1 + 0x17eb) =
           *(byte *)((int)param_1 + 0x17eb) | *(byte *)((int)param_1 + 0x17ea);
      param_1[0x5fd] = 0;
      return 1;
    }
    iVar3 = FUN_00a8c760(0x22);
    if ((iVar3 != 0) && (*param_2 == 0x2f)) {
      (**(code **)(*piVar6 + 0x150))(0x62,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(0x62,piVar6[0x13c]);
      return 0;
    }
    iVar3 = FUN_00a8c760(0x3d);
    if ((iVar3 != 0) &&
       (((((iVar3 = *param_2, iVar3 == 0x2a || (iVar3 == 0x4a)) || (iVar3 == 0x20)) ||
         ((iVar3 == 0x8b || (iVar3 == 0x8c)))) || (iVar3 == 0x8d)))) {
      (**(code **)(*piVar6 + 0x150))(0x60,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(0x60,piVar6[0x13c]);
      return 0;
    }
    if ((iVar1 == 0x20016) && (*param_2 == 0x2f)) {
      *(byte *)(param_1 + 0x5fa) = *(byte *)(param_1 + 0x5fa) | *(byte *)((int)param_1 + 0x17e6);
      *(byte *)((int)param_1 + 0x17e7) =
           *(byte *)((int)param_1 + 0x17e7) | *(byte *)((int)param_1 + 0x17e6);
      *(undefined1 *)((int)param_1 + 0x17e6) = 0;
      (**(code **)(*piVar6 + 0x150))(99,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(99,piVar6[0x13c]);
      return 0;
    }
    uVar5 = (uint)*(byte *)(param_2 + 4);
    iVar3 = FUN_00a8c760(0x10);
    if (iVar3 != 0) {
      uVar5 = (int)uVar5 >> 1;
    }
    (**(code **)(*param_1 + 0x21c))(piVar6,uVar5,0x3c23d70a,0);
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0x8000010;
    uVar9 = 0x3f800000;
    uVar8 = 0;
    uVar7 = 1;
    sVar2 = FUN_00dde2d0(0,1);
    FUN_00aa4080(sVar2 + 0x78,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    param_1[0x5a2] = param_1[0x5a2] + 1;
    if ((iVar4 != 0x2f) && (*param_2 != 0x42)) {
      param_1[0x600] = param_1[0x600] + (uint)*(byte *)((int)param_2 + 0x11);
    }
    param_1[0x601] = param_1[0x597];
  }
  uVar5 = 1;
  if ((float)param_1[0x596] <= (float)param_1[0x600]) {
    param_1[0x4b4] = param_1[0x4b4] & 0x85ffffff;
    param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
    param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
    FUN_00a8caf0(0x30000,0,0,0);
    param_1[0x600] = 0;
  }
  iVar4 = FUN_00a8c760(0x3f);
  if ((iVar4 != 0) && (param_1[0x4b9] == 0)) {
    uVar5 = (-(uint)(*param_2 != 0x2f) & 0x3c000) + 0x4001;
  }
  iVar4 = FUN_00a8c760(0x22);
  if (iVar4 != 0) {
    param_1[0x4b4] = param_1[0x4b4] & 0x85ffffff;
    param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
    param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
    uVar5 = uVar5 | 0x80000;
    local_10 = 0;
    FUN_00a8caf0(0x20012,0,0,0);
  }
  (**(code **)(*param_1 + 0x30c))(local_10,0);
  iVar4 = FUN_00a8c760(0x23);
  if (iVar4 != 0) {
    if ((*(uint *)(iVar1 + 0x90) & 0x2000000) != 0) {
      param_1[0x4b4] = param_1[0x4b4] & 0x85ffffff;
      param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
      param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
      FUN_00a8caf0(0x30004,0,0,0);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    if ((*(uint *)(iVar1 + 0x90) & 0x20000000) != 0) {
      param_1[0x4b4] = param_1[0x4b4] & 0x85ffffff;
      param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
      param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
      FUN_00a8caf0(0x30004,0,0,0);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    if ((*(uint *)(iVar1 + 0x90) & 0x800000) != 0) {
      param_1[0x4b4] = param_1[0x4b4] & 0x85ffffff;
      param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
      param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
      FUN_00a8caf0(0x30005,0,0,0);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    }
  }
  if (param_1[0x21c] < 2) {
    param_1[0x21c] = 1;
  }
  (**(code **)(*param_1 + 0x198))(unaff_EBX,iVar1,uVar5);
  return 1;
}

// 005B1600  Em0700::vf1A0  size=338  [class]
undefined4 __thiscall Em0700::vf1A0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (param_3 != 0) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (*param_2 == 0x17c) {
      iVar2 = (**(code **)(*piVar1 + 0x14c))(0x61,param_1[0x13c]);
      if (iVar2 != 0) {
        (**(code **)(*piVar1 + 0x150))(0x61,param_1[0x13c]);
        (**(code **)(*param_1 + 0x150))(0x61,piVar1[0x13c]);
        return 1;
      }
    }
    else if (*param_2 == 0x17d) {
      iVar2 = (**(code **)(*piVar1 + 0x14c))(0x5f,param_1[0x13c]);
      if (iVar2 != 0) {
        if ((*(byte *)(param_1 + 0x602) & 1) == 0) {
          (**(code **)(*piVar1 + 0x150))(0x5f,param_1[0x13c]);
          iVar2 = piVar1[0x13c];
          uVar3 = 0x5f;
        }
        else {
          uStack_28 = 0xc340fd71;
          uStack_24 = 0xc0e33333;
          uStack_20 = 0x43f57ae1;
          uStack_38 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          (**(code **)(*param_1 + 0x7c))(&uStack_28,&uStack_38);
          (**(code **)(*piVar1 + 0x150))(100,param_1[0x13c]);
          iVar2 = piVar1[0x13c];
          uVar3 = 100;
        }
        (**(code **)(*param_1 + 0x150))(uVar3,iVar2);
        param_1[0x602] = param_1[0x602] + 1;
        return 1;
      }
    }
  }
  return 0;
}

// 005B1760  FUN_005b1760  size=134  [between]
void __fastcall FUN_005b1760(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)param_1[0x2a1];
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if ((iVar2 != 0) && ((float)param_1[0x2a3] <= 9.0)) {
      iVar2 = FUN_00ac82f0();
      if ((iVar2 != 0) && (99 < param_1[0x59b])) {
        iVar2 = FUN_00b7e5b0();
        if (iVar2 != 0) {
          (**(code **)(*piVar1 + 0x150))(0x62,param_1[0x13c]);
          (**(code **)(*param_1 + 0x150))(0x62,piVar1[0x13c]);
        }
      }
    }
  }
  return;
}

// 005B17F0  FUN_005b17f0  size=134  [between]
void __fastcall FUN_005b17f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)param_1[0x2a1];
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if ((iVar2 != 0) && ((float)param_1[0x2a3] <= 9.0)) {
      iVar2 = FUN_00ac82f0();
      if ((iVar2 != 0) && (99 < param_1[0x59b])) {
        iVar2 = FUN_00b7e5b0();
        if (iVar2 != 0) {
          (**(code **)(*piVar1 + 0x150))(0x62,param_1[0x13c]);
          (**(code **)(*param_1 + 0x150))(0x62,piVar1[0x13c]);
        }
      }
    }
  }
  return;
}

// 005B1880  FUN_005b1880  size=710  [between]
void __fastcall FUN_005b1880(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x618) == 0x10006) {
    iVar2 = FUN_00ac4780();
    if ((((0 < iVar2) && (*(int *)(param_1 + 0x948) != 0)) && (*(float *)(param_1 + 0xa8c) < 16.0))
       && (*(float *)(param_1 + 0xaa0) <= 0.5235988)) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x2000e,0,0,0);
      if (*(int *)(param_1 + 0x948) != 2) {
        return;
      }
      iVar2 = FUN_00ac4780();
      if (iVar2 < 3) {
        return;
      }
      *(undefined4 *)(param_1 + 0x180c) = 1;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x20007,0,0,0);
      return;
    }
    if ((*(float *)(param_1 + 0xa8c) < 4.0) && (*(float *)(param_1 + 0xaa0) <= 1.3962634)) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x20000,0,0,0);
      sVar1 = FUN_00dde2d0(0,3);
      if (sVar1 == 1) {
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
        FUN_00a8caf0(0x20003,0,0,0);
      }
      sVar1 = FUN_00dde2d0(0,4);
      if (sVar1 == 2) {
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
        FUN_00a8caf0(0x20002,0,0,0);
      }
      sVar1 = FUN_00dde2d0(0,4);
      if (sVar1 == 3) {
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
        FUN_00a8caf0(0x20001,0,0,0);
      }
      sVar1 = FUN_00dde2d0(0,4);
      if ((sVar1 == 4) && (iVar2 = FUN_00ac4780(), 2 < iVar2)) {
        *(undefined4 *)(param_1 + 0x180c) = 1;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
        FUN_00a8caf0(0x20007,0,0,0);
      }
    }
  }
  if ((((*(int *)(param_1 + 0x61c) == 3) && (*(int *)(param_1 + 0xa84) != 0)) &&
      (*(float *)(param_1 + 0xa8c) < 6.25)) && (*(float *)(param_1 + 0xaa0) <= 1.3962634)) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
  }
  return;
}

// 005B1B50  FUN_005b1b50  size=134  [between]
void __fastcall FUN_005b1b50(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)param_1[0x2a1];
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if ((iVar2 != 0) && ((float)param_1[0x2a3] <= 9.0)) {
      iVar2 = FUN_00ac82f0();
      if ((iVar2 != 0) && (99 < param_1[0x59b])) {
        iVar2 = FUN_00b7e5b0();
        if (iVar2 != 0) {
          (**(code **)(*piVar1 + 0x150))(0x62,param_1[0x13c]);
          (**(code **)(*param_1 + 0x150))(0x62,piVar1[0x13c]);
        }
      }
    }
  }
  return;
}

// 005B1BE0  FUN_005b1be0  size=66  [between]
void __fastcall FUN_005b1be0(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = -198.85 - *(float *)(param_1 + 0x40);
  fVar2 = 488.83 - *(float *)(param_1 + 0x48);
  fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
  if (fVar1 < 6.25 != (fVar1 == 6.25)) {
    *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x847fffff;
    FUN_00a8caf0(0x20014,0,0,0);
  }
  return;
}

// 005B1C30  FUN_005b1c30  size=1452  [between]
void __fastcall FUN_005b1c30(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  int *piStack_30;
  int iStack_28;
  float fStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  (**(code **)(*param_1 + 0x318))();
  piStack_30 = (int *)param_1[0x2a1];
  uVar9 = 0;
  if (piStack_30 == (int *)0x0) {
    piStack_30 = (int *)0x0;
  }
  else {
    puVar10 = &DAT_01be9db8;
    (**(code **)(*piStack_30 + 4))(&DAT_01be9db8);
    iVar5 = FUN_00dd6d80(puVar10);
    if (iVar5 == 0) {
      piStack_30 = (int *)0x0;
    }
    else {
      FUN_00b8c350(0x41400000);
    }
  }
  iVar5 = FUN_00a81330();
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_00a7c8a0();
    if (piVar6 == (int *)0x0) {
      uVar9 = 0;
    }
    else {
      puVar10 = &DAT_01b351cc;
      (**(code **)(*piVar6 + 4))(&DAT_01b351cc);
      iVar5 = FUN_00dd6d80(puVar10);
      uVar9 = -(uint)(iVar5 != 0) & (uint)piVar6;
    }
    if (piStack_30 != (int *)0x0) {
      uVar7 = FUN_00a7c7f0();
      FUN_00a7c960(uVar7);
    }
  }
  uVar7 = FUN_00a8cac0();
  switch(uVar7) {
  case 0:
    FUN_00aa4080(0x4d,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    DAT_01bea094 = DAT_01bea094 | 0x20;
    if ((char)param_1[0x5a6] == '\x01') {
      param_1[0x5a5] = 0;
    }
    FUN_00a8d280();
    if (piStack_30 != (int *)0x0) {
      FUN_00b8a040(1,0,1);
    }
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x4e,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar5 = param_1[0x2a1];
    pfVar1 = (float *)(param_1 + 0x5c8);
    fVar2 = *(float *)(iVar5 + 0x44);
    fVar3 = *(float *)(iVar5 + 0x48);
    fVar4 = *(float *)(iVar5 + 0x4c);
    *pfVar1 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
    param_1[0x5c9] = (int)(fVar2 - (float)param_1[0x11]);
    param_1[0x5ca] = (int)(fVar3 - (float)param_1[0x12]);
    param_1[0x5cb] = (int)(fVar4 - (float)param_1[0x13]);
    fVar2 = (float)param_1[0x5c9] * (float)param_1[0x5c9] + *pfVar1 * *pfVar1 +
            (float)param_1[0x5ca] * (float)param_1[0x5ca];
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(pfVar1,pfVar1);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar1 = 0.0;
      param_1[0x5c9] = 0x3f800000;
      param_1[0x5ca] = 0;
    }
    *pfVar1 = *pfVar1 * 0.5;
    param_1[0x5c9] = (int)((float)param_1[0x5c9] * 0.5);
    param_1[0x5ca] = (int)((float)param_1[0x5ca] * 0.5);
    param_1[0x5cb] = (int)((float)param_1[0x5cb] * 0.5);
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    if (uVar9 != 0) {
      param_1[0x251] = (int)(char)(*(char *)(uVar9 + 0xae4) + '\x01');
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    iVar5 = FUN_00ac83b0();
    if (iVar5 == 0) {
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x5c8]);
      param_1[0x15] = (int)((float)param_1[0x5c9] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x5ca] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x5cb] + (float)param_1[0x17]);
    }
    if (uVar9 == 0) {
      param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
      FUN_00a8caf0(0x20017,0,0,0);
      param_1[0x15] = -0x3f1c7ae1;
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      (**(code **)(*param_1 + 0x314))();
      return;
    }
    iVar5 = FUN_00a12210(0);
    *(ushort *)(iVar5 + 0xa2) = *(ushort *)(iVar5 + 0xa2) | 4;
    iVar5 = FUN_00a12210(0xf00);
    iVar8 = FUN_00a12210(0);
    FID_conflict__memcpy((void *)(iVar8 + 0x10),(void *)(iVar5 + 0x10),0x40);
    iVar5 = FUN_00a12210(0xf00);
    FID_conflict__memcpy((void *)(uVar9 + 0x10),(void *)(iVar5 + 0x10),0x40);
    switchD_0080dbae::default();
    if (param_1[0x251] != (int)(char)(*(char *)(uVar9 + 0xae4) + '\x01')) {
      param_1[0x250] = 0;
      param_1[0x251] = (int)(char)(*(char *)(uVar9 + 0xae4) + '\x01');
    }
    iVar5 = param_1[0x251];
    if (-1 < iVar5) {
      if (5 < iVar5) {
        return;
      }
      iVar5 = FUN_00a12210(iVar5);
      fVar2 = (float)piStack_30[0x10] - *(float *)(iVar5 + 0x40);
      fVar3 = (float)piStack_30[0x12] - *(float *)(iVar5 + 0x48);
      if (param_1[0x250] != 0) {
        return;
      }
      fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
      if (fVar2 < 64.0 == (fVar2 == 64.0)) {
        return;
      }
      param_1[0x250] = 1;
      FUN_00b85350(0x42700000,0x3c23d70a,0x3c23d70a,1,1,0x3e4ccccd);
      return;
    }
    param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
    FUN_00a8caf0(0x20016,0,0,0);
    return;
  case 4:
    param_1[0x187] = param_1[0x187] + 1;
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      FUN_00a81330();
      FUN_00a805f0();
    }
    FUN_00a7c950();
    return;
  default:
    return;
  }
  FUN_005ae110(0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  if (uVar9 != 0) {
    iVar5 = FUN_00a12210(0);
    *(ushort *)(iVar5 + 0xa2) = *(ushort *)(iVar5 + 0xa2) | 4;
    iVar5 = FUN_00a12210(0xf00);
    iVar8 = FUN_00a12210(0);
    FID_conflict__memcpy((void *)(iVar8 + 0x10),(void *)(iVar5 + 0x10),0x40);
    iVar5 = FUN_00a12210(0xf00);
    FID_conflict__memcpy((void *)(uVar9 + 0x10),(void *)(iVar5 + 0x10),0x40);
    switchD_0080dbae::default();
  }
  iVar5 = param_1[0x2a1];
  uStack_20 = *(undefined4 *)(iVar5 + 0x40);
  uStack_18 = *(undefined4 *)(iVar5 + 0x48);
  uStack_14 = *(undefined4 *)(iVar5 + 0x4c);
  fStack_1c = *(float *)(iVar5 + 0x44) + 2.5;
  thunk_FUN_00dde510(&fStack_24,&iStack_28,&uStack_20,param_1 + 0x10);
  param_1[0x25] = iStack_28;
  param_1[0x24] = (int)(fStack_24 * -1.0);
  return;
}

// 005B21F0  FUN_005b21f0  size=1757  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005b21f0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined *puVar7;
  float fStack_12c;
  int *piStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 auStack_e0 [48];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined1 auStack_a0 [156];
  
  (**(code **)(*param_1 + 0x318))();
  piStack_128 = (int *)param_1[0x2a1];
  if (piStack_128 == (int *)0x0) {
    piStack_128 = (int *)0x0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piStack_128 + 4))(&DAT_01be9db8);
    iVar6 = FUN_00dd6d80(puVar7);
    if (iVar6 == 0) {
      piStack_128 = (int *)0x0;
    }
    else {
      FUN_00b8c350(0x41400000);
      FUN_00a7c950();
      FUN_00b7e570();
    }
  }
  iVar6 = FUN_00a8cac0();
  if (iVar6 == 0) {
    FUN_00a8d280();
    FUN_00a94bc0(1,0);
    FUN_00aa4080(0x4f,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
    iVar6 = param_1[0x2a1];
    pfVar1 = (float *)(param_1 + 0x5c8);
    fVar4 = *(float *)(iVar6 + 0x44);
    fVar2 = *(float *)(iVar6 + 0x48);
    fVar3 = *(float *)(iVar6 + 0x4c);
    *pfVar1 = *(float *)(iVar6 + 0x40) - (float)param_1[0x10];
    param_1[0x5c9] = (int)((fVar4 + 1.5) - (float)param_1[0x11]);
    param_1[0x5ca] = (int)(fVar2 - (float)param_1[0x12]);
    param_1[0x5cb] = (int)(fVar3 - (float)param_1[0x13]);
    fVar4 = (float)param_1[0x5c9] * (float)param_1[0x5c9] + *pfVar1 * *pfVar1 +
            (float)param_1[0x5ca] * (float)param_1[0x5ca];
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(pfVar1,pfVar1);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar1 = 0.0;
      param_1[0x5c9] = 0x3f800000;
      param_1[0x5ca] = 0;
    }
    *pfVar1 = *pfVar1 * 0.3;
    param_1[0x5c9] = (int)((float)param_1[0x5c9] * 0.3);
    param_1[0x5ca] = (int)((float)param_1[0x5ca] * 0.3);
    param_1[0x5cb] = (int)((float)param_1[0x5cb] * 0.3);
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x4b9] = 0;
    param_1[0x4ba] = 0;
    FUN_00c5ad80(param_1[0x4b5]);
    fStack_12c = 15.0;
    param_1[0x4b5] = -1;
    iVar6 = FUN_00ac4780();
    if (iVar6 == 0) {
      fStack_12c = 25.0;
    }
    iVar6 = FUN_00ac4780();
    if (iVar6 == 1) {
      fStack_12c = 15.0;
    }
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_e8 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    FUN_00405140(param_1[0x13c],0x10,5,&uStack_100,&uStack_f0,fStack_12c,0x3f000000,0xbf800000);
    iVar6 = FUN_00c5abe0(auStack_a0);
    param_1[0x4b5] = iVar6;
    FUN_00c52770(iVar6,0x41000000);
    FUN_00c52700(param_1[0x4b5],1);
    param_1[0x4b9] = 0;
    param_1[0x4b3] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    param_1[0x252] = 0;
    param_1[0x248] = 0x40e00000;
    param_1[0x24a] = 0;
  }
  else if (iVar6 != 1) {
    if (iVar6 != 2) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a81330();
      FUN_00a805f0();
    }
    FUN_00a7c950();
    return;
  }
  FUN_00ac80a0(0,0x3f800000);
  iVar6 = FUN_00ac83b0();
  if (iVar6 == 0) {
    fVar4 = (float)param_1[0x244];
    fVar5 = fVar4 * (float)param_1[0x5c8];
    fVar2 = (float)param_1[0x5c9] * fVar4;
    fVar3 = (float)param_1[0x5ca] * fVar4;
    fVar4 = (float)param_1[0x5cb] * fVar4;
    if (0.0 < (float)param_1[0x248]) {
      fVar5 = fVar5 * 0.4;
      fVar2 = fVar2 * 0.4;
      fVar3 = fVar3 * 0.4;
      fVar4 = fVar4 * 0.4;
    }
    param_1[0x14] = (int)((float)param_1[0x14] + fVar5);
    param_1[0x15] = (int)(fVar2 + (float)param_1[0x15]);
    param_1[0x16] = (int)(fVar3 + (float)param_1[0x16]);
    param_1[0x17] = (int)(fVar4 + (float)param_1[0x17]);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    if ((param_1[0x4b3] == 0) && (param_1[0x251] != 2)) {
      iVar6 = param_1[0x2a1];
      fStack_120 = *(float *)(iVar6 + 0x40) - (float)param_1[0x10];
      fStack_11c = (*(float *)(iVar6 + 0x44) + 1.5) - (float)param_1[0x11];
      fStack_118 = *(float *)(iVar6 + 0x48) - (float)param_1[0x12];
      fStack_114 = *(float *)(iVar6 + 0x4c) - (float)param_1[0x13];
      fVar4 = fStack_118 * fStack_118 + fStack_120 * fStack_120 + fStack_11c * fStack_11c;
      if (fVar4 < 0.0 == (fVar4 == 0.0)) {
        FUN_00ddf460(&fStack_120,&fStack_120);
        fVar4 = fStack_118;
        fVar2 = fStack_120;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar4 = 0.0;
        fVar2 = 0.0;
      }
      param_1[0x5c8] = (int)(fVar2 * 0.3);
      param_1[0x5ca] = (int)(fVar4 * 0.3);
    }
    if (param_1[0x251] == 1) {
      param_1[0x251] = 2;
    }
  }
  else {
    param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x5c8] * 0.024);
    param_1[0x15] = (int)((float)param_1[0x5c9] * 0.024 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x5ca] * 0.024 + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x5cb] * 0.024 + (float)param_1[0x17]);
    if (param_1[0x251] == 0) {
      param_1[0x251] = 1;
    }
    param_1[0x248] = -0x40800000;
  }
  if (0 < param_1[0x251]) {
    D3DXMatrixInverse(auStack_e0,0,param_1 + 4);
    D3DXVec3TransformNormal(&fStack_11c,param_1[0x2a1] + 0x40,&uStack_ec);
    fStack_110 = fStack_b0 + fStack_110;
    fStack_10c = fStack_ac + fStack_10c;
    fStack_108 = fStack_a8 + fStack_108;
    fVar4 = _DAT_01be942c + (float)param_1[0x24a];
    param_1[0x24a] = (int)fVar4;
    if ((480.0 <= fVar4) || (fStack_108 < -2.0 != (fStack_108 == -2.0))) {
      param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
      FUN_00a8caf0(0x20018,0,0,0);
      FUN_00c5ad80(param_1[0x4b5]);
      param_1[0x4b5] = -1;
      if (piStack_128 != (int *)0x0) {
        piStack_128[0xef3] = 1;
      }
    }
  }
  iVar6 = FUN_00a12210(0);
  fVar4 = (float)piStack_128[0x10] - *(float *)(iVar6 + 0x40);
  fVar2 = (float)piStack_128[0x12] - *(float *)(iVar6 + 0x48);
  fStack_12c = 18.5761;
  iVar6 = FUN_00ac4780();
  if (iVar6 == 0) {
    fStack_12c = 21.344398;
  }
  iVar6 = FUN_00ac4780();
  if (2 < iVar6) {
    fStack_12c = 16.0;
  }
  if ((param_1[0x250] == 0) && (fVar2 * fVar2 + fVar4 * fVar4 <= fStack_12c)) {
    param_1[0x250] = 1;
    FUN_00b85350(0x42700000,0x3c23d70a,0x3c23d70a,1,1,0x3e4ccccd);
    return;
  }
  return;
}

// 005B28D0  FUN_005b28d0  size=67  [between]
void __fastcall FUN_005b28d0(int param_1)

{
  if ((((*(int *)(param_1 + 0x61c) == 3) && (*(int *)(param_1 + 0xa84) != 0)) &&
      (*(float *)(param_1 + 0xa8c) < 6.25)) && (*(float *)(param_1 + 0xaa0) <= 1.3962634)) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
  }
  return;
}

// 005B2920  FUN_005b2920  size=216  [between]
void __fastcall FUN_005b2920(int *param_1)

{
  int iVar1;
  
  param_1[0x600] = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x7d,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005adf30();
  }
  else if (iVar1 != 1) goto LAB_005b29b1;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x59e] = 0;
  }
LAB_005b29b1:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 005B2A00  FUN_005b2a00  size=216  [between]
void __fastcall FUN_005b2a00(int *param_1)

{
  int iVar1;
  
  param_1[0x600] = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x7e,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005adf30();
  }
  else if (iVar1 != 1) goto LAB_005b2a91;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x59e] = 0;
  }
LAB_005b2a91:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 005B2AE0  FUN_005b2ae0  size=455  [between]
void __fastcall FUN_005b2ae0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_1[0x600] = 0;
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0x92,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005adf30();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x91,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = param_1[0x598];
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0x90,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x59e] = 0;
    }
  }
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 005B2CC0  FUN_005b2cc0  size=439  [between]
void __fastcall FUN_005b2cc0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[0x600] = 0;
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0x85,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005adf30();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x87,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 4:
    FUN_00aa4080(0x86,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
      FUN_00a8caf0(0x30008,0,0,0);
      param_1[0x59e] = 0;
    }
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 005B2E90  FUN_005b2e90  size=227  [between]
void __fastcall FUN_005b2e90(int *param_1)

{
  int iVar1;
  
  param_1[0x600] = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x8c,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005adf30();
  }
  else if (iVar1 != 1) goto LAB_005b2f2c;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
    FUN_00a8caf0(0x30008,0,0,0);
  }
LAB_005b2f2c:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 005B2F80  FUN_005b2f80  size=219  [between]
void __fastcall FUN_005b2f80(int *param_1)

{
  int iVar1;
  
  param_1[0x600] = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x89,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005adf30();
  }
  else if (iVar1 != 1) goto LAB_005b3014;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x59e] = 0;
  }
LAB_005b3014:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 005B3060  Em0700::getAttackInfo  size=811  [class]
undefined4 __thiscall Em0700::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7bd48);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_01643124);
    return 0;
  }
  puVar1 = *(uint **)(iVar2 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  uVar4 = FUN_00ac8520(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
  puVar1[3] = unaff_ESI;
  puVar1[2] = uVar5;
  puVar1[1] = uVar4;
  *(undefined1 *)(puVar1 + 4) = uStack_8;
  *puVar1 = (uint)*param_2;
  *(undefined1 *)((int)puVar1 + 0x11) = 7;
  *(undefined2 *)(puVar1 + 0x21) = 0x5500;
  switch(*param_2) {
  case 4:
    *puVar1 = 0x16d;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    return unaff_EBX;
  default:
    goto switchD_005b3149_caseD_5;
  case 6:
    *puVar1 = 0x16e;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    return unaff_EBX;
  case 8:
    *puVar1 = 0x16f;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x800000;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    return unaff_EBX;
  case 10:
    *puVar1 = 0x170;
    break;
  case 0xc:
    *puVar1 = 0x171;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    return unaff_EBX;
  case 0xe:
    *puVar1 = 0x172;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    return unaff_EBX;
  case 0x10:
    *puVar1 = 0x173;
    break;
  case 0x12:
    *puVar1 = 0x174;
    break;
  case 0x14:
    *puVar1 = 0x175;
    break;
  case 0x16:
    *puVar1 = 0x176;
    puVar1[0x24] = puVar1[0x24] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    return unaff_EBX;
  case 0x18:
    *puVar1 = 0x177;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x24] = puVar1[0x24] | 0x1000000;
    goto LAB_005b31cf;
  case 0x1a:
    *puVar1 = 0x178;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    return unaff_EBX;
  case 0x1c:
    *puVar1 = 0x179;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    return unaff_EBX;
  case 0x1e:
    *puVar1 = 0x17a;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    return unaff_EBX;
  case 0x20:
    *puVar1 = 0x17b;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] | 0x800;
    puVar1[0x24] = puVar1[0x24] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] | 0x2100;
    return unaff_EBX;
  case 0x22:
    *puVar1 = 0x17c;
    puVar1[0x23] = puVar1[0x23] | 0x20002100;
    return unaff_EBX;
  case 0x2e:
    *puVar1 = 0x17d;
    break;
  case 0x2f:
    *puVar1 = 0x17e;
    break;
  case 0x30:
    *puVar1 = 0x17f;
    goto LAB_005b3362;
  case 0x32:
    *puVar1 = 0x180;
LAB_005b3362:
    puVar1[0x23] = puVar1[0x23] | 0x100;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x20000000;
switchD_005b3149_caseD_5:
    return unaff_EBX;
  }
  puVar1[0x23] = puVar1[0x23] | 0x20000000;
LAB_005b31cf:
  puVar1[0x23] = puVar1[0x23] | 0x100;
  puVar1[0x24] = puVar1[0x24] | 0x20000000;
  return unaff_EBX;
}

// 005B3410  FUN_005b3410  size=1239  [between]
void __fastcall FUN_005b3410(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  float unaff_ESI;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined4 uVar16;
  float fStack_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  piVar5 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar15 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar15);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x156,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    if (*(int *)(param_1 + 0x76c) != 0) {
      FUN_009fb990();
    }
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      uVar14 = *(undefined4 *)(param_1 + 0x4f0);
      uVar7 = 0x192;
LAB_005b3505:
      uVar16 = 0x3f800000;
      uVar13 = 0;
      uVar12 = 0x8000000;
      uVar11 = 0x3f800000;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0x20701;
      FUN_005ab010(0x20701,uVar7,uVar14,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00aa45f0(uVar8,uVar7,uVar14,uVar9,uVar10,uVar11,uVar12,uVar13,uVar16);
      *(undefined4 *)(param_1 + 0x12bc) = 4;
    }
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
    break;
  case 2:
    FUN_00aa4080(0x157,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      uVar14 = *(undefined4 *)(param_1 + 0x4f0);
      uVar7 = 0x193;
      goto LAB_005b3505;
    }
    break;
  case 4:
    FUN_00aa4080(0x158,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      uVar14 = *(undefined4 *)(param_1 + 0x4f0);
      uVar7 = 0x194;
      goto LAB_005b3505;
    }
    break;
  case 6:
    FUN_00aa4080(0x159,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      uVar14 = *(undefined4 *)(param_1 + 0x4f0);
      uVar7 = 0x195;
      goto LAB_005b3505;
    }
    break;
  case 8:
    FUN_00aa4080(0x15a,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      uVar14 = *(undefined4 *)(param_1 + 0x4f0);
      uVar7 = 0x196;
      goto LAB_005b3505;
    }
    break;
  case 10:
    FUN_00aa4080(0x15b,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00aa4080(0x15c,9,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      uVar14 = *(undefined4 *)(param_1 + 0x4f0);
      uVar16 = 0x3f800000;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0x3f800000;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0x197;
      uVar7 = 0x20701;
      FUN_005ab010(0x20701,0x197,uVar14,0,0,0x3f800000,0,0,0x3f800000);
      FUN_00aa45f0(uVar7,uVar8,uVar14,uVar9,uVar10,uVar11,uVar12,uVar13,uVar16);
      *(undefined4 *)(param_1 + 0x12bc) = 4;
    }
    goto LAB_005b37f1;
  case 0xb:
LAB_005b37f1:
    FUN_00a95ee0(0,piVar5);
    FUN_00a95ee0(9,piVar5);
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      uVar14 = 0;
      piVar4 = piVar5;
      FUN_005ab010(0,piVar5);
      FUN_00a95ee0(uVar14,piVar4);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
  default:
    goto switchD_005b346f_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
switchD_005b346f_default:
  if (((piVar5 != (int *)0x0) && (iVar3 = FUN_00a8c760(0x3a), iVar3 == 0)) &&
     (iVar3 = (**(code **)(*piVar5 + 0x32c))(), iVar3 == 0)) {
    FUN_00a8ce90(aiStack_30,auStack_20);
    fVar6 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + fStack_1c);
    piVar5[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(aiStack_30,aiStack_30,param_1 + 0x10);
    fVar1 = *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0x44);
    piVar5[0x16] = (int)(*(float *)(param_1 + 0x48) + fStack_34);
    piVar5[0x14] = (int)(unaff_ESI + fVar1);
    piVar5[0x15] = (int)(fVar2 + unaff_EBX);
    piVar5[0x17] = aiStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 005B3920  FUN_005b3920  size=1177  [between]
void __fastcall FUN_005b3920(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  float unaff_ESI;
  int *piVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined4 uVar16;
  float fStack_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  piVar5 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar15 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar15);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00a94bc0(9,0);
    FUN_00aa4080(0x15e,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      uVar13 = *(undefined4 *)(param_1 + 0x4f0);
      uVar7 = 0x198;
LAB_005b3a02:
      uVar16 = 0x3f800000;
      uVar14 = 0;
      uVar12 = 0x8000000;
      uVar11 = 0x3f800000;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0x20701;
      FUN_005ab010(0x20701,uVar7,uVar13,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00aa45f0(uVar8,uVar7,uVar13,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16);
      *(undefined4 *)(param_1 + 0x12bc) = 4;
    }
    break;
  case 1:
  case 3:
  case 7:
    break;
  case 2:
    FUN_00aa4080(0x15f,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      uVar13 = *(undefined4 *)(param_1 + 0x4f0);
      uVar7 = 0x199;
      goto LAB_005b3a02;
    }
    break;
  case 4:
    FUN_00aa4080(0x160,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00aa4080(0x161,9,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      uVar13 = *(undefined4 *)(param_1 + 0x4f0);
      uVar16 = 0x3f800000;
      uVar14 = 0;
      uVar12 = 0;
      uVar11 = 0x3f800000;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0x19c;
      uVar7 = 0x20701;
      FUN_005ab010(0x20701,0x19c,uVar13,0,0,0x3f800000,0,0,0x3f800000);
      FUN_00aa45f0(uVar7,uVar8,uVar13,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16);
      *(undefined4 *)(param_1 + 0x12bc) = 4;
    }
  case 5:
    FUN_00a95ee0(0,piVar5);
    FUN_00a95ee0(9,piVar5);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        uVar13 = 0;
        piVar4 = piVar5;
        FUN_005ab010(0,piVar5);
        FUN_00a95ee0(uVar13,piVar4);
      }
    }
  case 9:
switchD_005b397d_caseD_9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    goto switchD_005b397d_default;
  case 6:
    FUN_00a94bc0(9,0);
    FUN_00aa4080(0x174,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      uVar13 = *(undefined4 *)(param_1 + 0x4f0);
      uVar7 = 0x19a;
      goto LAB_005b3a02;
    }
    break;
  case 8:
    FUN_00a94bc0(9,0);
    FUN_00aa4080(0x175,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      uVar13 = *(undefined4 *)(param_1 + 0x4f0);
      uVar16 = 0x3f800000;
      uVar14 = 0;
      uVar12 = 0x8000000;
      uVar11 = 0x3f800000;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0x19b;
      uVar7 = 0x20701;
      FUN_005ab010(0x20701,0x19b,uVar13,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00aa45f0(uVar7,uVar8,uVar13,uVar9,uVar10,uVar11,uVar12,uVar14,uVar16);
      *(undefined4 *)(param_1 + 0x12bc) = 4;
    }
    goto switchD_005b397d_caseD_9;
  default:
    goto switchD_005b397d_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
switchD_005b397d_default:
  if (((piVar5 != (int *)0x0) && (iVar3 = FUN_00a8c760(0x3a), iVar3 == 0)) &&
     (iVar3 = (**(code **)(*piVar5 + 0x32c))(), iVar3 == 0)) {
    FUN_00a8ce90(aiStack_30,auStack_20);
    fVar6 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + fStack_1c);
    piVar5[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(aiStack_30,aiStack_30,param_1 + 0x10);
    fVar1 = *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0x44);
    piVar5[0x16] = (int)(*(float *)(param_1 + 0x48) + fStack_34);
    piVar5[0x14] = (int)(fVar1 + unaff_ESI);
    piVar5[0x15] = (int)(fVar2 + unaff_EBX);
    piVar5[0x17] = aiStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 005B4E30  Em0700::vf360  size=115  [class]
void __thiscall Em0700::vf360(int param_1,undefined4 param_2)

{
  int iVar1;
  
  BehaviorEmBase::vf360(param_2);
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
      }
      FUN_00e03080(*(undefined4 *)(iVar1 + 0x4f0),1);
    }
  }
  return;
}

// 005B4EB0  FUN_005b4eb0  size=734  [between]
void __fastcall FUN_005b4eb0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    return;
  }
  FUN_00a81330();
  iVar2 = FUN_00a7c8a0();
  if (iVar2 == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x12bc)) {
  case 0:
    *(undefined4 *)(param_1 + 0x12bc) = 1;
    *(undefined4 *)(param_1 + 0x12c0) = 0;
    iVar2 = FUN_005ab010();
    uVar10 = *(undefined4 *)(param_1 + 0x12c0);
    uVar9 = 0x3f800000;
    iVar2 = iVar2 + 0x494;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0x3f800000;
    uVar5 = 0x3e2aaaab;
    uVar4 = 0;
    FUN_005ab010(iVar2,uVar10,0,0x3e2aaaab,0x3f800000,0,0,0x3f800000);
    FUN_00a9f3c0(iVar2,uVar10,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
    *(undefined4 *)(param_1 + 0x12c8) = 0x41200000;
  case 1:
    *(undefined4 *)(param_1 + 0x12c0) = 0;
    iVar2 = FUN_00a8c760(0x36);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x12c0) = 1;
    }
    iVar2 = FUN_00a8c760(0x37);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x12c0) = 2;
    }
    iVar2 = FUN_00a8c760(0x38);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x12c0) = 3;
    }
    iVar2 = FUN_00a8c760(0x39);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x12c0) = 4;
    }
    if (*(int *)(param_1 + 0x12c0) != 0) {
      *(undefined4 *)(param_1 + 0x12bc) = 2;
    }
    fVar1 = *(float *)(param_1 + 0x12c8) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x12c8) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x12c8) = 0xbf800000;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x12bc) = 3;
    *(undefined4 *)(param_1 + 0x12c4) = *(undefined4 *)(param_1 + 0x12c0);
    iVar2 = FUN_005ab010();
    uVar10 = *(undefined4 *)(param_1 + 0x12c0);
    uVar9 = 0x3f800000;
    iVar2 = iVar2 + 0x494;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0x3f800000;
    uVar5 = 0x3e2aaaab;
    uVar4 = 0;
    FUN_005ab010(iVar2,uVar10,0,0x3e2aaaab,0x3f800000,0,0,0x3f800000);
    FUN_00a9f3c0(iVar2,uVar10,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  case 3:
    *(undefined4 *)(param_1 + 0x12c8) = 0x41200000;
    *(undefined4 *)(param_1 + 0x12c4) = 0;
    iVar2 = FUN_00a8c760(0x36);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x12c4) = 1;
    }
    iVar2 = FUN_00a8c760(0x37);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x12c4) = 2;
    }
    iVar2 = FUN_00a8c760(0x38);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x12c4) = 3;
    }
    iVar2 = FUN_00a8c760(0x39);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x12c4) = 4;
    }
    iVar2 = *(int *)(param_1 + 0x12c4);
    if (*(int *)(param_1 + 0x12c0) != iVar2) {
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x12c0) = 0;
LAB_005b5115:
        *(undefined4 *)(param_1 + 0x12bc) = 0;
      }
      else {
        *(int *)(param_1 + 0x12c0) = iVar2;
        *(undefined4 *)(param_1 + 0x12bc) = 2;
      }
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x12bc) = 5;
    *(undefined4 *)(param_1 + 0x12c4) = 0;
  case 5:
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x12c8) = 0x41200000;
    FUN_005ab010(0);
    iVar2 = FUN_00a94ce0(uVar10);
    if (iVar2 == 0) break;
    goto LAB_005b5115;
  default:
    break;
  }
  fVar1 = *(float *)(param_1 + 0x12c8);
  if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
    return;
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_00a81330();
    piVar3 = (int *)FUN_00a7c8a0();
  }
  (**(code **)(*piVar3 + 100))();
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    FUN_00a7c8a0();
    switchD_0080dbae::default();
    return;
  }
  switchD_0080dbae::default();
  return;
}

// 005B51B0  FUN_005b51b0  size=156  [between]
void __thiscall FUN_005b51b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x4f0);
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
      }
      FUN_00aa45f0(0x20701,param_2,uVar1,0,0,0x3f800000,param_3,0,0x3f800000);
      *(undefined4 *)(param_1 + 0x12bc) = 4;
    }
  }
  return;
}

// 005B5250  FUN_005b5250  size=149  [between]
undefined4 __fastcall FUN_005b5250(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_01bea060 & 0x2000000) != 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x4a0) == 0) &&
     ((*(float *)(param_1 + 0x1470) <= 0.0 || (*(int *)(param_1 + 0x146c) < 0)))) {
    return 1;
  }
  if (*(int *)(param_1 + 0x4a0) == 1) {
    piVar1 = (int *)FUN_0041c960(*(undefined4 *)(param_1 + 0xa84));
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x35c))();
      if (((iVar2 != 0) &&
          ((*(float *)(param_1 + 0x1470) <= 0.0 || (*(int *)(param_1 + 0x146c) < 0)))) ||
         (piVar1[0x2e2] != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

// 005B5340  FUN_005b5340  size=120  [between]
void __fastcall FUN_005b5340(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a92f90();
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x94) & 1) != 0)) {
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 0x80;
    }
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffeff;
    }
    if (*(int *)(param_1 + 0x1674) != 0) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xffffff7f;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 0x100;
      }
    }
  }
  return;
}

// 005B53C0  FUN_005b53c0  size=116  [between]
void FUN_005b53c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a92f90();
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x94) & 1) != 0)) {
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xffffff7f;
    }
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffeff;
    }
    if (param_1 != 0) {
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 0x80;
      }
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffeff;
      }
    }
  }
  return;
}

// 005B5440  FUN_005b5440  size=22  [between]
void __fastcall FUN_005b5440(int param_1)

{
  *(int *)(param_1 + 0x167c) = *(int *)(param_1 + 0x167c) + 1;
  FUN_005b5340();
  FUN_00a8d280();
  return;
}

// 005B5460  FUN_005b5460  size=247  [between]
void __fastcall FUN_005b5460(int param_1)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined *puVar5;
  
  cVar1 = *(char *)(param_1 + 0x1698);
  if (cVar1 == '\x01') {
    piVar2 = *(int **)(param_1 + 0xa84);
    *(float *)(param_1 + 0x1694) = *(float *)(param_1 + 0x1694) - *(float *)(param_1 + 0x910);
    if (piVar2 != (int *)0x0) {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar4 = FUN_00dd6d80(puVar5);
      if (iVar4 != 0) {
        iVar4 = (**(code **)(*piVar2 + 0x1fc))();
        if (iVar4 != 0) {
          *(float *)(param_1 + 0x1694) = *(float *)(param_1 + 0x1694) - *(float *)(param_1 + 0x910);
        }
      }
    }
    if (*(float *)(param_1 + 0x1694) < 0.0) {
      *(undefined1 *)(param_1 + 0x1698) = 2;
    }
    if (((*(int *)(param_1 + 0x16a4) != 0) && (*(int *)(param_1 + 0x16a8) != 0)) &&
       (*(int *)(param_1 + 0x16ac) != 0)) {
      *(undefined1 *)(param_1 + 0x1698) = 2;
    }
  }
  else {
    if (cVar1 == '\x02') {
      *(undefined4 *)(param_1 + 0x1694) = 0x42700000;
      *(undefined1 *)(param_1 + 0x1698) = 3;
      FUN_00e5e0c0("em0700_se_atk_firewall_burn_end",param_1,0xffffffff,0);
    }
    else if (cVar1 != '\x03') {
      return;
    }
    fVar3 = *(float *)(param_1 + 0x1694) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1694) = fVar3;
    if (fVar3 < 0.0) {
      *(undefined1 *)(param_1 + 0x1698) = 0;
      return;
    }
  }
  return;
}

// 005B5560  FUN_005b5560  size=347  [between]
undefined4 __fastcall FUN_005b5560(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x1674) == 0) {
    return 0;
  }
  iVar2 = FUN_00ac4780();
  if ((iVar2 < 3) && (*(int **)(param_1 + 0xa84) != (int *)0x0)) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if ((iVar2 != 0) && (iVar2 = FUN_00b87910(0), iVar2 == 0)) {
      return 0;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x17e9);
  if ((((bVar1 & 1) == 0) || ((*(byte *)(param_1 + 0x17eb) & 1) != 0)) ||
     (*(int *)(param_1 + 0x17f4) == 0)) {
    if ((((bVar1 & 2) == 0) || ((*(byte *)(param_1 + 0x17eb) & 2) != 0)) ||
       (*(int *)(param_1 + 0x17f4) == 0)) {
      if ((((bVar1 & 4) == 0) || ((*(byte *)(param_1 + 0x17eb) & 4) != 0)) ||
         (*(int *)(param_1 + 0x17f4) == 0)) {
        if ((((bVar1 & 8) == 0) || ((*(byte *)(param_1 + 0x17eb) & 8) != 0)) ||
           (*(int *)(param_1 + 0x17f4) == 0)) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x17f4) + -1;
        *(int *)(param_1 + 0x17f4) = iVar2;
        if (iVar2 < 1) {
          *(byte *)(param_1 + 0x17eb) = *(byte *)(param_1 + 0x17eb) | 8;
        }
        *(undefined1 *)(param_1 + 0x17ea) = 8;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x17f4) + -1;
        *(int *)(param_1 + 0x17f4) = iVar2;
        if (iVar2 < 1) {
          *(byte *)(param_1 + 0x17eb) = *(byte *)(param_1 + 0x17eb) | 4;
        }
        *(undefined1 *)(param_1 + 0x17ea) = 4;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x17f4) + -1;
      *(int *)(param_1 + 0x17f4) = iVar2;
      if (iVar2 < 1) {
        *(byte *)(param_1 + 0x17eb) = *(byte *)(param_1 + 0x17eb) | 2;
      }
      *(undefined1 *)(param_1 + 0x17ea) = 2;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x17f4) + -1;
    *(int *)(param_1 + 0x17f4) = iVar2;
    if (iVar2 < 1) {
      *(byte *)(param_1 + 0x17eb) = *(byte *)(param_1 + 0x17eb) | 1;
    }
    *(undefined1 *)(param_1 + 0x17ea) = 1;
  }
  *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x847fffff;
  FUN_00a8caf0(0x2000f,0,0,0);
  return 1;
}

// 005B56C0  FUN_005b56c0  size=275  [between]
undefined4 __fastcall FUN_005b56c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar2 = 0;
  if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      iVar1 = FUN_00b80980();
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  if (((*(byte *)(param_1 + 0x17e4) & 1) != 0) && ((*(byte *)(param_1 + 0x17e7) & 1) == 0)) {
    *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x847fffff;
    FUN_00a8caf0(0x20013,0,0,0);
    *(byte *)(param_1 + 0x17e5) = *(byte *)(param_1 + 0x17e5) | 1;
    *(undefined1 *)(param_1 + 0x17e6) = 1;
    uVar2 = 1;
  }
  if ((((*(byte *)(param_1 + 0x17e4) & 4) != 0) && ((*(byte *)(param_1 + 0x17e7) & 4) == 0)) &&
     ((*(byte *)(param_1 + 0x17e7) & 1) != 0)) {
    *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x847fffff;
    FUN_00a8caf0(0x20013,0,0,0);
    *(byte *)(param_1 + 0x17e5) = *(byte *)(param_1 + 0x17e5) | 4;
    *(undefined1 *)(param_1 + 0x17e6) = 4;
    uVar2 = 1;
  }
  if ((((*(byte *)(param_1 + 0x17e4) & 8) != 0) && ((*(byte *)(param_1 + 0x17e7) & 8) == 0)) &&
     ((*(byte *)(param_1 + 0x17e7) & 1) != 0)) {
    *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x847fffff;
    FUN_00a8caf0(0x20013,0,0,0);
    *(byte *)(param_1 + 0x17e5) = *(byte *)(param_1 + 0x17e5) | 8;
    *(byte *)(param_1 + 0x17e7) = *(byte *)(param_1 + 0x17e7) | 4;
    *(undefined1 *)(param_1 + 0x17e6) = 8;
    uVar2 = 1;
  }
  return uVar2;
}

// 005B57E0  FUN_005b57e0  size=119  [between]
undefined4 __fastcall FUN_005b57e0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
    puVar2 = &DAT_01be9db8;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar2);
    if ((iVar1 != 0) && (iVar1 = FUN_00b80980(), iVar1 != 0)) {
      return 0;
    }
  }
  if (((*(byte *)(param_1 + 0x17f8) & 1) != 0) && (*(float *)(param_1 + 0x17fc) < 0.0)) {
    *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x847fffff;
    FUN_00a8caf0(0x20008,0,0,0);
    *(undefined4 *)(param_1 + 0x17fc) = *(undefined4 *)(param_1 + 0x1638);
  }
  return 0;
}

// 005B5860  Em0700::vf14C  size=72  [class]
bool __thiscall Em0700::vf14C(int param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_00a7c8a0();
  }
  if ((0 < *(int *)(param_1 + 0x870)) && (*(int *)(param_1 + 0x4e4) == 0)) {
    if (param_2 == 0x5d) {
      return true;
    }
    return param_2 == 0x5e;
  }
  return false;
}

// 005B58B0  FUN_005b58b0  size=656  [callgraph]
void __fastcall FUN_005b58b0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  float unaff_ESI;
  int *piVar5;
  float10 fVar6;
  undefined *puVar7;
  float fStack_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  piVar5 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar7);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x9c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    FUN_005b51b0(0x1bf,0x8100000);
    if ((char)param_1[0x5a6] == '\x01') {
      param_1[0x5a5] = 0;
    }
    (**(code **)(*param_1 + 0x314))();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x9d,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1c0,0x8100000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      FUN_005b5560();
    }
    iVar3 = FUN_00a952e0(0,0x42480000);
    if ((iVar3 != 0) && (param_1[0x1d9] != 0)) {
      FUN_008e6d00();
    }
  }
  if (((piVar5 != (int *)0x0) && (iVar3 = FUN_00a8c760(0x3a), iVar3 == 0)) &&
     (iVar3 = (**(code **)(*piVar5 + 0x32c))(), iVar3 == 0)) {
    FUN_00a8ce90(aiStack_30,auStack_20);
    fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    piVar5[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(aiStack_30,aiStack_30,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    piVar5[0x16] = (int)((float)param_1[0x12] + fStack_34);
    piVar5[0x14] = (int)(fVar1 + unaff_ESI);
    piVar5[0x15] = (int)(fVar2 + unaff_EBX);
    piVar5[0x17] = aiStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 005B5B50  FUN_005b5b50  size=2667  [callgraph]
void __fastcall FUN_005b5b50(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  float unaff_EBX;
  int *piVar7;
  float unaff_ESI;
  float10 fVar8;
  undefined *puVar9;
  undefined4 uVar10;
  float fStack_34;
  int aiStack_30 [4];
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  piVar7 = (int *)0x0;
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    puVar9 = &DAT_01be9db8;
    (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar9);
    piVar7 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar5);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xb0,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    FUN_005b51b0(0x1c9,0x8100000);
    FUN_005adfe0();
    goto LAB_005b5c1a;
  case 1:
LAB_005b5c1a:
    FUN_005ac920(2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_005b5baf_default;
  case 2:
    FUN_00aa4080(0xb1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    uStack_20 = 0xc340fd71;
    pcVar3 = *(code **)(*param_1 + 0x7c);
    param_1[0x187] = param_1[0x187] + 1;
    fStack_1c = -7.1;
    uStack_18 = 0x43f57ae1;
    aiStack_30[0] = 0;
    aiStack_30[1] = 0;
    aiStack_30[2] = 0;
    (*pcVar3)(&uStack_20,aiStack_30);
    FUN_005b51b0(0x1ca,0x8100000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(2);
    goto switchD_005b5baf_default;
  case 4:
    FUN_00aa4080(0xb2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1cb,0x8100000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(4);
    goto switchD_005b5baf_default;
  case 6:
    FUN_00aa4080(0xb3,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1cc,0x8100000);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(3);
    goto switchD_005b5baf_default;
  case 8:
    FUN_00aa4080(0xb4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    uVar10 = 0x8100000;
    uVar6 = 0x1cd;
    goto LAB_005b5e48;
  case 9:
  case 0x19:
    break;
  case 10:
    FUN_00aa4080(0xb6,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1ce,0x8100000);
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(2);
    iVar4 = FUN_00a94e10(0,0x42380000,0x429a0000);
    if (iVar4 != 0) {
      FUN_005ac920(3);
    }
    iVar4 = FUN_00a94e10(0,0x429c0000,0x42d20000);
    if (iVar4 != 0) {
      FUN_005ac920(4);
    }
    goto switchD_005b5baf_default;
  case 0xc:
    FUN_00aa4080(0xb7,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1cf,0x8100000);
  case 0xd:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(5);
    goto switchD_005b5baf_default;
  case 0xe:
    FUN_00aa4080(0xb8,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1d0,0x8100000);
    FUN_00a95ee0(0,piVar7);
    break;
  case 0xf:
    FUN_00a95ee0(0,piVar7);
    break;
  case 0x10:
    FUN_00aa4080(0xc0,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 0x11:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    goto switchD_005b5baf_default;
  case 0x12:
    FUN_00aa4080(0xb9,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    uVar10 = 0x8100000;
    uVar6 = 0x1d1;
    goto LAB_005b60d9;
  case 0x13:
  case 0x17:
  case 0x1b:
    goto switchD_005b5baf_caseD_13;
  case 0x14:
    FUN_00aa4080(0xba,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1d2,0x8100000);
  case 0x15:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(2);
    goto switchD_005b5baf_default;
  case 0x16:
    FUN_00aa4080(0xbb,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    uVar10 = 0x8100000;
    uVar6 = 0x1d3;
    goto LAB_005b60d9;
  case 0x18:
    FUN_00aa4080(0xbc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    uVar10 = 0x8000000;
    uVar6 = 0x1d4;
LAB_005b5e48:
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(uVar6,uVar10);
    break;
  case 0x1a:
    FUN_00aa4080(0xbd,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    uVar10 = 0x8000000;
    uVar6 = 0x1d5;
LAB_005b60d9:
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(uVar6,uVar10);
switchD_005b5baf_caseD_13:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(4);
    goto switchD_005b5baf_default;
  case 0x1c:
    FUN_00aa4080(0xbe,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1d6,0x8000000);
    goto LAB_005b62ac;
  case 0x1d:
LAB_005b62ac:
    iVar4 = FUN_00a8c760(10);
    if (iVar4 != 0) {
      uVar6 = FUN_00ac84d0(0x1f);
      (**(code **)(*param_1 + 0x30c))(uVar6,1);
    }
    goto switchD_005b5baf_caseD_13;
  case 0x1e:
    FUN_00aa4080(0xbf,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1d7,0x8100000);
  case 0x1f:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      param_1[0x5ff] = param_1[0x58e];
    }
    FUN_005ac920(4);
    iVar4 = FUN_00a94e10(0,0x41a00000,0x43930000);
    if (iVar4 != 0) {
      FUN_005ac920(5);
    }
    iVar4 = FUN_00a94e10(0,0x43938000,0x43b68000);
    if (iVar4 != 0) {
      FUN_005ac920(4);
    }
    iVar4 = FUN_00a94e10(0,0x43b70000,0x43d20000);
    if (iVar4 != 0) {
      FUN_005ac920(1);
    }
    goto switchD_005b5baf_default;
  case 0x20:
    FUN_00aa4080(0xc2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1d8,0x8000000);
  case 0x21:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(1);
    goto switchD_005b5baf_default;
  case 0x22:
    FUN_00aa4080(0xc3,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1d9,0x8100000);
  case 0x23:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      param_1[0x5ff] = param_1[0x58e];
    }
    FUN_005ac920(1);
  default:
    goto switchD_005b5baf_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a94ce0(0);
  FUN_005ac920(5);
switchD_005b5baf_default:
  if (((piVar7 != (int *)0x0) && (iVar4 = FUN_00a8c760(0x3a), iVar4 == 0)) &&
     (iVar4 = (**(code **)(*piVar7 + 0x32c))(), iVar4 == 0)) {
    FUN_00a8ce90(aiStack_30,&uStack_20);
    fVar8 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    piVar7[0x25] = (int)(float)fVar8;
    D3DXVec3TransformNormal(aiStack_30,aiStack_30,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    piVar7[0x16] = (int)((float)param_1[0x12] + fStack_34);
    piVar7[0x14] = (int)(fVar1 + unaff_ESI);
    piVar7[0x15] = (int)(fVar2 + unaff_EBX);
    piVar7[0x17] = aiStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 005B6650  FUN_005b6650  size=1714  [callgraph]
void __fastcall FUN_005b6650(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float unaff_EBX;
  int *piVar6;
  float unaff_ESI;
  float10 fVar7;
  undefined *puVar8;
  float fStack_34;
  int aiStack_30 [4];
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  piVar6 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar8);
    piVar6 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xde,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    FUN_005b51b0(0x1dc,0x8100000);
    FUN_005adfe0();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(6);
    break;
  case 2:
    FUN_00aa4080(0xdf,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1dd,0x8100000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(6);
    iVar3 = FUN_00a94e10(0,0,0x42ac0000);
    if (iVar3 != 0) {
      FUN_005ac920(2);
    }
    break;
  case 4:
    FUN_00aa4080(0xe0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1de,0x8000000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    FUN_005ac920(2);
    break;
  case 6:
    FUN_00aa4080(0xe2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1e2,0x8100000);
    uStack_20 = 0xc340fd71;
    fStack_1c = -7.1;
    uStack_18 = 0x43f57ae1;
    aiStack_30[0] = 0;
    aiStack_30[1] = 0;
    aiStack_30[2] = 0;
    (**(code **)(*param_1 + 0x7c))(&uStack_20,aiStack_30);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(2);
    break;
  case 8:
    FUN_00aa4080(0xe3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1e3,0x8000000);
    uVar5 = FUN_00ac84d0(0x20);
    (**(code **)(*param_1 + 0x30c))(uVar5,1);
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(4);
    break;
  case 10:
    FUN_00aa4080(0xe4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1e4,0x8100000);
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      param_1[0x5ff] = param_1[0x58e];
    }
    FUN_005ac920(4);
    iVar3 = FUN_00a94e10(0,0x43f50000,0x440fc000);
    if (iVar3 != 0) {
      FUN_005ac920(1);
    }
    break;
  case 0xc:
    FUN_00aa4080(0xe6,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1df,0x8100000);
    aiStack_30[0] = -0x3cbf028f;
    aiStack_30[1] = 0xc0e33333;
    aiStack_30[2] = 0x43f57ae1;
    uStack_20 = 0;
    fStack_1c = 0.0;
    uStack_18 = 0;
    (**(code **)(*param_1 + 0x7c))(aiStack_30,&uStack_20);
  case 0xd:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(6);
    break;
  case 0xe:
    FUN_00aa4080(0xe7,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1e0,0x8000000);
  case 0xf:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(5);
    break;
  case 0x10:
    FUN_00aa4080(0xe8,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1e1,0x8100000);
  case 0x11:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      param_1[0x5ff] = param_1[0x58e];
    }
    FUN_005ac920(1);
  }
  if (((piVar6 != (int *)0x0) && (iVar3 = FUN_00a8c760(0x3a), iVar3 == 0)) &&
     (iVar3 = (**(code **)(*piVar6 + 0x32c))(), iVar3 == 0)) {
    FUN_00a8ce90(aiStack_30,&uStack_20);
    fVar7 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    piVar6[0x25] = (int)(float)fVar7;
    D3DXVec3TransformNormal(aiStack_30,aiStack_30,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    piVar6[0x16] = (int)((float)param_1[0x12] + fStack_34);
    piVar6[0x14] = (int)(unaff_ESI + fVar1);
    piVar6[0x15] = (int)(fVar2 + unaff_EBX);
    piVar6[0x17] = aiStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 005B6D50  FUN_005b6d50  size=773  [callgraph]
void __fastcall FUN_005b6d50(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  float unaff_ESI;
  int *piVar5;
  float10 fVar6;
  undefined *puVar7;
  float fStack_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  piVar5 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar7);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa4,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    FUN_005b51b0(0x1ba,0x8100000);
    if ((char)param_1[0x5a6] == '\x01') {
      param_1[0x5a5] = 0;
    }
    (**(code **)(*param_1 + 0x314))();
    break;
  case 1:
  case 3:
  case 5:
    break;
  case 2:
    FUN_00aa4080(0xa5,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1bb,0x8100000);
    break;
  case 4:
    FUN_00aa4080(0xa6,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1bc,0x8100000);
    break;
  case 6:
    FUN_00aa4080(0xa7,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1bd,0x8100000);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      FUN_005b5560();
    }
  default:
    goto switchD_005b6daf_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_005b6daf_default:
  if (((piVar5 != (int *)0x0) && (iVar3 = FUN_00a8c760(0x3a), iVar3 == 0)) &&
     (iVar3 = (**(code **)(*piVar5 + 0x32c))(), iVar3 == 0)) {
    FUN_00a8ce90(aiStack_30,auStack_20);
    fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    piVar5[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(aiStack_30,aiStack_30,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    piVar5[0x16] = (int)((float)param_1[0x12] + fStack_34);
    piVar5[0x14] = (int)(fVar1 + unaff_ESI);
    piVar5[0x15] = (int)(fVar2 + unaff_EBX);
    piVar5[0x17] = aiStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 005B7080  FUN_005b7080  size=656  [callgraph]
void __fastcall FUN_005b7080(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  float unaff_ESI;
  int *piVar5;
  float10 fVar6;
  undefined *puVar7;
  float fStack_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  piVar5 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar7);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xfb,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    FUN_005b51b0(0x1c1,0x8100000);
    if ((char)param_1[0x5a6] == '\x01') {
      param_1[0x5a5] = 0;
    }
    (**(code **)(*param_1 + 0x314))();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0xfc,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1c2,0x8100000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      FUN_005b5560();
    }
    iVar3 = FUN_00a952e0(0,0x42700000);
    if ((iVar3 != 0) && (param_1[0x1d9] != 0)) {
      FUN_008e6d00();
    }
  }
  if (((piVar5 != (int *)0x0) && (iVar3 = FUN_00a8c760(0x3a), iVar3 == 0)) &&
     (iVar3 = (**(code **)(*piVar5 + 0x32c))(), iVar3 == 0)) {
    FUN_00a8ce90(aiStack_30,auStack_20);
    fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    piVar5[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(aiStack_30,aiStack_30,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    piVar5[0x16] = (int)((float)param_1[0x12] + fStack_34);
    piVar5[0x14] = (int)(fVar1 + unaff_ESI);
    piVar5[0x15] = (int)(fVar2 + unaff_EBX);
    piVar5[0x17] = aiStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 005B8210  Em0700::vf50  size=40  [class]
void __fastcall Em0700::vf50(int param_1)

{
  FUN_005b4eb0();
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 005B8240  FUN_005b8240  size=114  [between]
void __fastcall FUN_005b8240(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_00ac48f0(0);
  *(int *)(param_1 + 0x1670) = iVar2;
  if (iVar2 == 0) {
    piVar1 = (int *)(param_1 + 0x166c);
    *piVar1 = *piVar1 + -3;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x166c) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x166c) = *(int *)(param_1 + 0x166c) + 1;
    if (0x77 < *(int *)(param_1 + 0x166c)) {
      *(undefined4 *)(param_1 + 0x166c) = 0x78;
    }
  }
  iVar2 = FUN_00a8cab0();
  if (iVar2 == 0x10000) {
    FUN_005b1760();
    return;
  }
  if (iVar2 == 0x10001) {
    FUN_005b17f0();
    return;
  }
  if (iVar2 == 0x10005) {
    FUN_005b1b50();
    return;
  }
  return;
}

// 005B82C0  Em0700::vf19C  size=179  [class]
void __thiscall Em0700::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 005B8380  FUN_005b8380  size=1179  [callgraph]
void __fastcall FUN_005b8380(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    FUN_005b5340();
    uVar4 = 0xe;
    sVar3 = FUN_00dde2d0(0,2);
    param_1[0x252] = (int)sVar3;
    if (sVar3 != 0) {
      uVar4 = 0x1b;
    }
    iVar5 = param_1[0x186];
    if (iVar5 == 0x10007) {
      uVar4 = 0x11;
    }
    if (iVar5 == 0x10008) {
      uVar4 = 0x14;
    }
    if (iVar5 == 0x10009) {
      uVar4 = 0x17;
    }
    FUN_00aa4080(uVar4,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    uVar4 = 0x10;
    if (param_1[0x252] != 0) {
      uVar4 = 0x1c;
    }
    iVar5 = param_1[0x186];
    if (iVar5 == 0x10007) {
      uVar4 = 0x13;
    }
    if (iVar5 == 0x10008) {
      uVar4 = 0x16;
    }
    if (iVar5 == 0x10009) {
      uVar4 = 0x19;
    }
    FUN_00aa4080(uVar4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    iVar5 = param_1[0x186];
    param_1[0x248] = 0x42400000;
    param_1[0x187] = param_1[0x187] + 1;
    if (iVar5 == 0x10007) {
      param_1[0x248] = 0x41700000;
    }
    if (iVar5 == 0x10008) {
      param_1[0x248] = 0x41700000;
    }
    if (iVar5 == 0x10009) {
      param_1[0x248] = 0x41700000;
    }
  case 3:
    FUN_00ac80a0(0x40400000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((param_1[0x186] == 0x10006) && ((float)param_1[0x2a3] < 9.0)) {
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,(float)param_1[0x244] * 0.55850536,0);
      iVar5 = param_1[0x2a1];
      fStack_20 = (*(float *)(iVar5 + 0x40) - (float)param_1[0x10]) * -1.0;
      fStack_1c = 0.0;
      fStack_18 = (*(float *)(iVar5 + 0x48) - (float)param_1[0x12]) * -1.0;
      fStack_14 = (*(float *)(iVar5 + 0x4c) - (float)param_1[0x13]) * -1.0;
      fVar1 = fStack_20 * fStack_20 + fStack_18 * fStack_18;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_20,&fStack_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_18 = 0.0;
        fStack_20 = 0.0;
        fStack_1c = 1.0;
      }
      iVar5 = param_1[0x2a1];
      fStack_20 = fStack_20 * 1.8;
      fStack_1c = fStack_1c * 1.8;
      fStack_18 = fStack_18 * 1.8;
      fStack_14 = fStack_14 * 1.8;
      fVar1 = *(float *)(iVar5 + 0x48);
      fVar2 = *(float *)(iVar5 + 0x4c);
      param_1[0x14] =
           (int)((float)param_1[0x14] +
                ((*(float *)(iVar5 + 0x40) + fStack_20) - (float)param_1[0x10]) * 0.1);
      param_1[0x15] = param_1[0x15];
      param_1[0x16] =
           (int)(((fVar1 + fStack_18) - (float)param_1[0x12]) * 0.1 + (float)param_1[0x16]);
      param_1[0x17] =
           (int)(((fStack_14 + fVar2) - (float)param_1[0x13]) * 0.1 + (float)param_1[0x17]);
    }
    break;
  case 4:
    iVar5 = param_1[0x186];
    uVar4 = 0xf;
    if (iVar5 == 0x10007) {
      uVar4 = 0x12;
    }
    if (iVar5 == 0x10008) {
      uVar4 = 0x15;
    }
    if (iVar5 == 0x10009) {
      uVar4 = 0x18;
    }
    FUN_00aa4080(uVar4,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      iVar5 = param_1[0x128];
      param_1[0x59e] = 0x42f00000;
      if (iVar5 == 1) {
        param_1[0x59e] = 0x42700000;
      }
      if (iVar5 == 2) {
        param_1[0x59e] = 0x41f00000;
      }
      if (iVar5 == 3) {
        param_1[0x59e] = 0x41f00000;
      }
    }
  }
  iVar5 = FUN_00a8c760(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,(float)param_1[0x244] * 0.55850536,0);
  }
  return;
}

// 005B8840  FUN_005b8840  size=289  [callgraph]
void __fastcall FUN_005b8840(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x1f,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_005b8858;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar1 = param_1[0x128];
    param_1[0x59e] = 0x42f00000;
    if (iVar1 == 1) {
      param_1[0x59e] = 0x42700000;
    }
    if (iVar1 == 2) {
      param_1[0x59e] = 0x41f00000;
    }
    if (iVar1 == 3) {
      param_1[0x59e] = 0x41f00000;
    }
  }
LAB_005b8858:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 005B8970  FUN_005b8970  size=289  [callgraph]
void __fastcall FUN_005b8970(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x20,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_005b8988;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar1 = param_1[0x128];
    param_1[0x59e] = 0x42f00000;
    if (iVar1 == 1) {
      param_1[0x59e] = 0x42700000;
    }
    if (iVar1 == 2) {
      param_1[0x59e] = 0x41f00000;
    }
    if (iVar1 == 3) {
      param_1[0x59e] = 0x41f00000;
    }
  }
LAB_005b8988:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 005B8AA0  FUN_005b8aa0  size=289  [callgraph]
void __fastcall FUN_005b8aa0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x21,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_005b8ab8;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar1 = param_1[0x128];
    param_1[0x59e] = 0x42f00000;
    if (iVar1 == 1) {
      param_1[0x59e] = 0x42700000;
    }
    if (iVar1 == 2) {
      param_1[0x59e] = 0x41f00000;
    }
    if (iVar1 == 3) {
      param_1[0x59e] = 0x41f00000;
    }
  }
LAB_005b8ab8:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 005B8BD0  FUN_005b8bd0  size=289  [callgraph]
void __fastcall FUN_005b8bd0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x22,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_005b8be8;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar1 = param_1[0x128];
    param_1[0x59e] = 0x42f00000;
    if (iVar1 == 1) {
      param_1[0x59e] = 0x42700000;
    }
    if (iVar1 == 2) {
      param_1[0x59e] = 0x41f00000;
    }
    if (iVar1 == 3) {
      param_1[0x59e] = 0x41f00000;
    }
  }
LAB_005b8be8:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 005B8D00  FUN_005b8d00  size=289  [callgraph]
void __fastcall FUN_005b8d00(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x23,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_005b8d18;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar1 = param_1[0x128];
    param_1[0x59e] = 0x42f00000;
    if (iVar1 == 1) {
      param_1[0x59e] = 0x42700000;
    }
    if (iVar1 == 2) {
      param_1[0x59e] = 0x41f00000;
    }
    if (iVar1 == 3) {
      param_1[0x59e] = 0x41f00000;
    }
  }
LAB_005b8d18:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 005B8E30  FUN_005b8e30  size=414  [callgraph]
void __fastcall FUN_005b8e30(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    local_4 = 0x3e4ccccd;
    uVar3 = 0x25;
    if ((((float)param_1[0x51c] <= 0.0) && (param_1[0x128] == 1)) &&
       (sVar1 = FUN_00dde2d0(0,1), sVar1 != 0)) {
      uVar3 = 0x26;
      local_4 = 0x3dcccccd;
    }
    if ((param_1[0x128] == 2) && (sVar1 = FUN_00dde2d0(0,2), sVar1 != 0)) {
      uVar3 = 0x26;
      local_4 = 0x3dcccccd;
    }
    FUN_00aa4080(uVar3,0,local_4,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  }
  else if (iVar2 != 1) goto LAB_005b8f3d;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x59e] = 0;
  }
LAB_005b8f3d:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))
              (0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0x40490fdb);
  }
  return;
}

// 005B8FD0  FUN_005b8fd0  size=289  [callgraph]
void __fastcall FUN_005b8fd0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x27,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_005b8fe8;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar1 = param_1[0x128];
    param_1[0x59e] = 0x42f00000;
    if (iVar1 == 1) {
      param_1[0x59e] = 0x42700000;
    }
    if (iVar1 == 2) {
      param_1[0x59e] = 0x41f00000;
    }
    if (iVar1 == 3) {
      param_1[0x59e] = 0x41f00000;
    }
  }
LAB_005b8fe8:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 005B9100  FUN_005b9100  size=1182  [callgraph]
void __fastcall FUN_005b9100(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fStack_8;
  undefined1 auStack_4 [4];
  
  param_1[0x5a0] = 0x43960000;
  (**(code **)(*param_1 + 0x314))();
  uVar2 = FUN_00a8cac0();
  uVar4 = 0;
  switch(uVar2) {
  case 0:
    uVar4 = 0x60;
    if ((((float)param_1[0x51c] <= 0.0) && (param_1[0x128] == 1)) &&
       (sVar1 = FUN_00dde2d0(0,2), sVar1 != 0)) {
      uVar4 = 0x61;
    }
    if (param_1[0x59d] != 0) {
      uVar4 = 0x65;
    }
    FUN_00aa4080(uVar4,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
    break;
  case 1:
    break;
  case 2:
    uVar2 = 0x62;
    if (param_1[0x59d] != 0) {
      uVar2 = 100;
    }
    if (param_1[0x603] != 0) {
      uVar4 = 0x3e2aaaab;
    }
    FUN_00aa4080(uVar2,0,uVar4,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
    if (param_1[0x59d] != 0) {
      param_1[0x248] = 0x43960000;
    }
    param_1[0x603] = 0;
    goto LAB_005b92c7;
  case 3:
LAB_005b92c7:
    (**(code **)(*param_1 + 0x318))();
    if (param_1[0x59d] == 0) {
      fVar5 = 1.5;
    }
    else {
      fStack_8 = 2.0;
      iVar3 = FUN_00ac4780();
      if (iVar3 == 2) {
        fStack_8 = 2.4;
      }
      iVar3 = FUN_00ac4780();
      fVar5 = fStack_8;
      if (2 < iVar3) {
        fVar5 = 2.8;
      }
    }
    FUN_00ac80a0(fVar5,0x3f800000);
    fVar5 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar5 - (float)param_1[0x244]);
    if (fVar5 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((param_1[0x2a1] == 0) || (1.3962634 < (float)param_1[0x2a8])) {
      iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar3 == 0) {
        param_1[0x24] = 0x3f060a92;
      }
      else {
        param_1[0x24] = 0;
      }
    }
    else {
      thunk_FUN_00dde510(&fStack_8,auStack_4,param_1[0x2a1] + 0x40,param_1 + 0x10);
      param_1[0x24] = (int)(fStack_8 * -1.0);
      if (fStack_8 * -1.0 <= -1.0471976) {
        param_1[0x24] = -0x4079f56e;
      }
      fVar5 = (float)param_1[0x24];
      if (!NAN(fVar5) && 1.0471976 < fVar5 != (fVar5 == 1.0471976)) {
        param_1[0x24] = 0x3f860a92;
      }
    }
    goto switchD_005b9136_default;
  case 4:
    FUN_00aa4080(99,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24] = 0;
    goto LAB_005b946b;
  case 5:
LAB_005b946b:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      iVar3 = param_1[0x128];
      param_1[0x59e] = 0x42f00000;
      if (iVar3 == 1) {
        param_1[0x59e] = 0x42700000;
      }
      if (iVar3 == 2) {
        param_1[0x59e] = 0x41f00000;
      }
      if (iVar3 == 3) {
        param_1[0x59e] = 0x41f00000;
      }
    }
  default:
    goto switchD_005b9136_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = 2;
  }
  iVar3 = FUN_00a952e0(0,0x42480000);
  if (((iVar3 != 0) && (iVar3 = FUN_00ac4780(), 2 < iVar3)) && (param_1[0x603] != 0)) {
    param_1[0x187] = 2;
  }
switchD_005b9136_default:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    uVar4 = 0x3e4ccccd;
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
    if (param_1[0x59d] != 0) {
      fVar5 = 0.13962634;
      iVar3 = FUN_00ac4780(uVar4,0x3e0efa35);
      if (iVar3 == 2) {
        fVar5 = 0.1675516;
      }
      iVar3 = FUN_00ac4780(uVar4,fVar5);
      if (2 < iVar3) {
        fVar5 = 0.20943952;
      }
      (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,fVar5 * (float)param_1[0x244],0);
    }
  }
  return;
}

// 005B95C0  FUN_005b95c0  size=947  [callgraph]
void __fastcall FUN_005b95c0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float fStack_8;
  undefined1 auStack_4 [4];
  
  (**(code **)(*param_1 + 0x314))();
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0x67,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
    param_1[0x24] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar3 = FUN_00a8c760(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.27925268,0);
    }
    break;
  case 2:
    FUN_00aa4080(0x68,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43960000;
    goto LAB_005b96fc;
  case 3:
LAB_005b96fc:
    (**(code **)(*param_1 + 0x318))();
    fStack_8 = 1.5;
    iVar3 = FUN_00ac4780();
    if (iVar3 == 2) {
      fStack_8 = 1.8;
    }
    iVar3 = FUN_00ac4780();
    fVar1 = fStack_8;
    if (2 < iVar3) {
      fVar1 = 2.0;
    }
    FUN_00ac80a0(fVar1,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((param_1[0x2a1] == 0) || (1.3962634 < (float)param_1[0x2a8])) {
      iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar3 == 0) {
        param_1[0x24] = 0x3f060a92;
      }
      else {
        param_1[0x24] = 0;
      }
    }
    else {
      thunk_FUN_00dde510(&fStack_8,auStack_4,param_1[0x2a1] + 0x40,param_1 + 0x10);
      param_1[0x24] = (int)(fStack_8 * -1.0);
      if (fStack_8 * -1.0 <= -1.0471976) {
        param_1[0x24] = -0x4079f56e;
      }
      fVar1 = (float)param_1[0x24];
      if (!NAN(fVar1) && 1.0471976 < fVar1 != (fVar1 == 1.0471976)) {
        param_1[0x24] = 0x3f860a92;
      }
    }
    break;
  case 4:
    FUN_00aa4080(0x69,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar3 = FUN_0041c960(param_1[0x2a1]);
    if (iVar3 != 0) {
      FUN_00b7ab80(0x42200000,0x3d4ccccd);
    }
    param_1[0x24] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      iVar3 = param_1[0x128];
      param_1[0x59e] = 0x42f00000;
      param_1[0x5ff] = param_1[0x58f];
      if (iVar3 == 1) {
        param_1[0x59e] = 0x42700000;
      }
      if (iVar3 == 2) {
        param_1[0x59e] = 0x41f00000;
      }
      if (iVar3 == 3) {
        param_1[0x59e] = 0x41f00000;
      }
    }
  }
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    FUN_00ac4780();
    FUN_00ac4780();
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.27925268,0);
  }
  return;
}

// 005B9990  FUN_005b9990  size=227  [callgraph]
void __fastcall FUN_005b9990(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x30,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_005b9a2c;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x59e] = 0;
  }
LAB_005b9a2c:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 005B9A80  FUN_005b9a80  size=227  [callgraph]
void __fastcall FUN_005b9a80(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x7b,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_005b9b1c;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x59e] = 0;
  }
LAB_005b9b1c:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 005B9B70  FUN_005b9b70  size=289  [callgraph]
void __fastcall FUN_005b9b70(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x24,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_005b9b88;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar1 = param_1[0x128];
    param_1[0x59e] = 0x42f00000;
    if (iVar1 == 1) {
      param_1[0x59e] = 0x42700000;
    }
    if (iVar1 == 2) {
      param_1[0x59e] = 0x41f00000;
    }
    if (iVar1 == 3) {
      param_1[0x59e] = 0x41f00000;
    }
  }
LAB_005b9b88:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.13962634,0);
  }
  return;
}

// 005B9CA0  FUN_005b9ca0  size=278  [callgraph]
void __fastcall FUN_005b9ca0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[0x600] = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    uVar2 = 0x42;
    if (param_1[0x186] == 0x20011) {
      uVar2 = 0x43;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_005b9d6f;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
    FUN_00a8caf0(0x2000f,2,0,0);
  }
LAB_005b9d6f:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 005B9DC0  FUN_005b9dc0  size=957  [callgraph]
void __fastcall FUN_005b9dc0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [156];
  
  param_1[0x600] = 0;
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    uVar6 = 0x44;
    param_1[0x248] = 0;
    fVar1 = (float)param_1[0x2a8];
    if (!NAN(fVar1) && 1.5707964 < fVar1 != (fVar1 == 1.5707964)) {
      uVar6 = 0x45;
      param_1[0x248] = 0x40490fdb;
    }
    FUN_00aa4080(uVar6,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  }
  else if (iVar3 != 1) goto LAB_005ba0e9;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
    FUN_00a8caf0(0x2000f,2,0,0);
    FUN_00eaa6e0(0x3f800000,0);
    param_1[0x4b9] = 0;
    param_1[0x4ba] = 0;
    FUN_00c5ad80(param_1[0x4b5]);
    uStack_c4 = 0x41200000;
    param_1[0x4b5] = -1;
    iVar3 = FUN_00ac4780();
    if (iVar3 == 0) {
      uStack_c4 = 0x41a00000;
    }
    iVar3 = FUN_00ac4780();
    if (iVar3 == 1) {
      uStack_c4 = 0x41200000;
    }
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0x3e2e147b;
    uStack_a8 = 0xbe800000;
    FUN_00405140(param_1[0x13c],0x10,3,&uStack_b0,&uStack_c0,uStack_c4,0x3f000000,0xbf800000);
    iVar3 = FUN_00c5abe0(auStack_a0);
    param_1[0x4b5] = iVar3;
    FUN_00c52770(iVar3,0x41000000);
    FUN_00c52700(param_1[0x4b5],1);
    pcVar2 = *(code **)(*param_1 + 0x358);
    param_1[0x4b9] = 0;
    (*pcVar2)(400,param_1 + 0x4bc);
  }
  if ((param_1[0x4b5] != -1) && (param_1[0x2a1] != 0)) {
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] + 2.0943952);
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x50);
    fVar4 = (float10)FUN_00ddba30((float)((float10)(float)fVar4 - fVar5));
    if ((fVar4 <= (float10)-1.2217305) || ((float10)1.2217305 <= fVar4)) {
      iVar3 = param_1[0x4b5];
      uVar6 = 0;
    }
    else {
      iVar3 = param_1[0x4b5];
      uVar6 = 1;
    }
    FUN_00c52700(iVar3,uVar6);
  }
  fVar1 = (float)param_1[0x249];
  param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    param_1[0x249] = 0x3f800000;
    iVar3 = FUN_00ac4780();
    if (iVar3 < 2) {
      param_1[0x249] = 0x40000000;
    }
    param_1[0x21c] = param_1[0x21c] + 1;
    param_1[0x5fc] = (int)((float)param_1[0x5fc] - 1.0);
    if (param_1[0x21d] <= param_1[0x21c]) {
      param_1[0x21c] = param_1[0x21d];
    }
  }
LAB_005ba0e9:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))
              (0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.13962634,param_1[0x248]);
  }
  iVar3 = FUN_00a8c760(10);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.13962634,0);
  }
  return;
}

// 005BA180  FUN_005ba180  size=646  [callgraph]
void __fastcall FUN_005ba180(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x40400000;
  D3DXVec3TransformNormal(&local_30,&local_30,param_1 + 4);
  FUN_00da9630(1,1);
  FUN_00da9660(1,&stack0xffffffc4,0);
  local_2c = 0xc346d99a;
  local_28 = 0xc0e0a3d7;
  param_1[0x600] = 0;
  uStack_24 = 0x43f46a3d;
  FUN_00a8e880(&local_2c);
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_005b5340();
    FUN_00aa4080(0xe,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
    FUN_005b53c0(0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x10,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0xf,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x59e] = 0x42f00000;
    }
  }
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.13962634,0);
  }
  return;
}

// 005BA420  FUN_005ba420  size=1039  [callgraph]
void __fastcall FUN_005ba420(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float fStack_38;
  undefined1 auStack_34 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  param_1[0x5a0] = 0x43960000;
  (**(code **)(*param_1 + 0x314))();
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0x5c,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_005ba45a_default;
  case 2:
    FUN_00aa4080(0x5d,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43960000;
    break;
  case 3:
    break;
  case 4:
    FUN_00aa4080(0x5e,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar4 = FUN_0041c960(param_1[0x2a1]);
    if (iVar4 != 0) {
      FUN_00b7ab80(0x42200000,0x3d4ccccd);
    }
    param_1[0x24] = 0;
    goto LAB_005ba697;
  case 5:
LAB_005ba697:
    (**(code **)(*param_1 + 0x318))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x314))();
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x59e] = 0x42f00000;
    }
    iVar4 = FUN_00a8c760(10);
    if ((iVar4 != 0) && (piVar3 = (int *)FUN_0041c960(param_1[0x2a1]), piVar3 != (int *)0x0)) {
      (**(code **)(*param_1 + 0x314))();
      uStack_20 = 0xc3407d71;
      uStack_1c = 0xc0e2ec2e;
      uStack_18 = 0x43f6afbe;
      uStack_30 = 0;
      uStack_2c = 0x402883c7;
      uStack_28 = 0;
      (**(code **)(*param_1 + 0x7c))(&uStack_20,&uStack_30);
      (**(code **)(*piVar3 + 0x150))(0x5e,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(0x5e,piVar3[0x13c]);
    }
  default:
    goto switchD_005ba45a_default;
  }
  (**(code **)(*param_1 + 0x318))();
  FUN_00ac80a0(0x40a00000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  if ((param_1[0x2a1] == 0) || (1.3962634 < (float)param_1[0x2a8])) {
    iVar4 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar4 == 0) {
      param_1[0x24] = 0x3f060a92;
    }
    else {
      param_1[0x24] = 0;
    }
  }
  else {
    thunk_FUN_00dde510(&fStack_38,auStack_34,param_1[0x2a1] + 0x40,param_1 + 0x10);
    param_1[0x24] = (int)(fStack_38 * -1.0);
    if (fStack_38 * -1.0 <= -1.0471976) {
      param_1[0x24] = -0x4079f56e;
    }
    fVar1 = (float)param_1[0x24];
    if (!NAN(fVar1) && 1.0471976 < fVar1 != (fVar1 == 1.0471976)) {
      param_1[0x24] = 0x3f860a92;
    }
  }
switchD_005ba45a_default:
  iVar4 = FUN_00a8c760(0);
  if (((iVar4 != 0) &&
      ((**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,(float)param_1[0x244] * 0.31415927,0),
      param_1[0x2a1] != 0)) && (1.3962634 < (float)param_1[0x2a8])) {
    (**(code **)(*param_1 + 0x308))(0x3f19999a,0x393702d3,(float)param_1[0x244] * 0.31415927,0);
  }
  return;
}

// 005BA850  FUN_005ba850  size=361  [callgraph]
void __fastcall FUN_005ba850(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[0x600] = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    uVar2 = 0x81;
    if ((0.7853982 < (float)param_1[0x245]) && ((float)param_1[0x245] < 2.3561945)) {
      uVar2 = 0x82;
    }
    if (((float)param_1[0x245] < -0.7853982) && (-2.3561945 < (float)param_1[0x245])) {
      uVar2 = 0x83;
    }
    if ((2.3561945 < (float)param_1[0x245]) || ((float)param_1[0x245] < -2.3561945)) {
      uVar2 = 0x80;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005adf30();
  }
  else if (iVar1 != 1) goto LAB_005ba972;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x59e] = 0;
    iVar1 = FUN_005b5560();
    if (iVar1 != 0) {
      return;
    }
  }
LAB_005ba972:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 005BA9C0  FUN_005ba9c0  size=304  [callgraph]
void __fastcall FUN_005ba9c0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x29,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
    FUN_00cad1b0(1);
  }
  else if (iVar1 != 1) goto LAB_005baaa8;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(8);
  if (iVar1 != 0) {
    if ((int *)param_1[0x2a1] != (int *)0x0) {
      puVar2 = &DAT_01be9db8;
      (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01be9db8);
      FUN_00dd6d80(puVar2);
    }
    FUN_00a8caf0(0xcb,0,0,0);
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_005baaa8:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.27925268,0);
  }
  return;
}

// 005BAAF0  FUN_005baaf0  size=888  [callgraph]
void __fastcall FUN_005baaf0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  float unaff_ESI;
  int *piVar5;
  float10 fVar6;
  undefined *puVar7;
  float fStack_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  piVar5 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar7);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x102,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    param_1[0x514] = 0;
    if (param_1[0x1db] != 0) {
      FUN_009fb990();
    }
    FUN_005b51b0(0x19d,0x8100000);
    if ((char)param_1[0x5a6] == '\x01') {
      param_1[0x5a5] = 0;
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(6);
    iVar3 = FUN_00a94e10(0,0x42b20000,0x43690000);
    if (iVar3 != 0) {
      FUN_005ac920(2);
    }
    break;
  case 2:
    FUN_00aa4080(0x103,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x19e,0x8100000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    FUN_005ac920(6);
    break;
  case 4:
    FUN_00aa4080(0x104,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1a1,0x8100000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(1);
    break;
  case 6:
    FUN_00aa4080(0x105,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1a2,0x8100000);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_005ac920(1);
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
    }
    FUN_005ac920(1);
  }
  if (((piVar5 != (int *)0x0) && (iVar3 = FUN_00a8c760(0x3a), iVar3 == 0)) &&
     (iVar3 = (**(code **)(*piVar5 + 0x32c))(), iVar3 == 0)) {
    FUN_00a8ce90(aiStack_30,auStack_20);
    fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    piVar5[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(aiStack_30,aiStack_30,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    piVar5[0x16] = (int)((float)param_1[0x12] + fStack_34);
    piVar5[0x14] = (int)(fVar1 + unaff_ESI);
    piVar5[0x15] = (int)(fVar2 + unaff_EBX);
    piVar5[0x17] = aiStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 005BAE90  FUN_005bae90  size=2212  [callgraph]
void __fastcall FUN_005bae90(int *param_1)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  float fVar10;
  float fStack_cc;
  float local_c8;
  int *local_c4;
  int local_c0 [4];
  undefined4 local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined1 local_a0 [156];
  
  iVar5 = 0;
  local_c4 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    local_c4 = (int *)FUN_00a7c8a0();
    if (local_c4 == (int *)0x0) {
      local_c4 = (int *)0x0;
    }
    else {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*local_c4 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar8);
      local_c4 = (int *)(-(uint)(iVar3 != 0) & (uint)local_c4);
    }
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x107,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x19f,0x8100000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(6);
    uVar9 = 0x438b8000;
    uVar7 = 0x43520000;
LAB_005baf90:
    iVar3 = FUN_00a94e10(0,uVar7,uVar9);
    if (iVar3 != 0) {
      FUN_005ac920(2);
    }
    break;
  case 2:
    FUN_00aa4080(0x108,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1a0,0x8000000);
    FUN_00c5ad80(param_1[0x4b5]);
    param_1[0x4b5] = -1;
    param_1[0x4b9] = 0;
    param_1[0x4ba] = 0;
    FUN_00c5ad80(0xffffffff);
    local_c8 = 20.0;
    param_1[0x4b5] = -1;
    iVar3 = FUN_00ac4780();
    if (iVar3 == 0) {
      local_c8 = 30.0;
    }
    iVar3 = FUN_00ac4780();
    fVar10 = local_c8;
    if (iVar3 == 1) {
      fVar10 = 20.0;
    }
    local_c0[0] = 0;
    local_c0[1] = 0;
    local_c0[2] = 0;
    local_b0 = 0;
    local_ac = 0.0;
    local_a8 = 0;
    FUN_00405140(param_1[0x13c],0x10,9,&local_b0,local_c0,fVar10,0x3f000000,0xbf800000);
    iVar3 = FUN_00c5abe0(local_a0);
    param_1[0x4b5] = iVar3;
    FUN_00c52770(iVar3,0x41000000);
    FUN_00c52700(param_1[0x4b5],1);
    FUN_00c52ab0(param_1[0x4b5],1);
    FUN_00a96030(0,1.0 / (float)param_1[0x244]);
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      fVar10 = 1.0 / (float)param_1[0x244];
      uVar7 = 0;
      FUN_005ab010(0,fVar10);
      FUN_00a96030(uVar7,fVar10);
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      param_1[0x4ba] = 1;
    }
    FUN_00a8c760(8);
    FUN_005ac920(6);
    break;
  case 4:
    FUN_00aa4080(0x109,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    local_c8 = 0.0;
    if (0 < (short)param_1[0xc9]) {
      do {
        iVar3 = param_1[200];
        iVar4 = *(int *)(*(int *)(iVar3 + 0x60 + iVar5) + 0x40);
        if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"damage_RBODY"), iVar4 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        local_c8 = (float)((int)local_c8 + 1);
        iVar5 = iVar5 + 0x70;
      } while ((int)local_c8 < (int)(short)param_1[0xc9]);
    }
    FUN_005b51b0(0x1a5,0x8100000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(6);
    uVar9 = 0x43210000;
    uVar7 = 0x42de0000;
    goto LAB_005baf90;
  case 6:
    FUN_00aa4080(0x10a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1a6,0x8000000);
    local_c8 = 0.0;
    if (0 < (short)param_1[0xc9]) {
      do {
        iVar3 = param_1[200];
        iVar4 = *(int *)(*(int *)(iVar3 + 0x60 + iVar5) + 0x40);
        if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"damage_RBODY"), iVar4 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        local_c8 = (float)((int)local_c8 + 1);
        iVar5 = iVar5 + 0x70;
      } while ((int)local_c8 < (int)(short)param_1[0xc9]);
    }
    param_1[0x4b9] = 0;
    param_1[0x4ba] = 0;
    FUN_00c5ad80(param_1[0x4b5]);
    local_c8 = 20.0;
    param_1[0x4b5] = -1;
    iVar3 = FUN_00ac4780();
    if (iVar3 == 0) {
      local_c8 = 30.0;
    }
    iVar3 = FUN_00ac4780();
    fVar10 = local_c8;
    if (iVar3 == 1) {
      fVar10 = 20.0;
    }
    local_b0 = 0;
    local_ac = 0.0;
    local_a8 = 0;
    local_c0[0] = 0;
    local_c0[1] = 0;
    local_c0[2] = 0;
    FUN_00405140(param_1[0x13c],0x10,0xd,local_c0,&local_b0,fVar10,0x3f000000,0xbf800000);
    iVar3 = FUN_00c5abe0(local_a0);
    param_1[0x4b5] = iVar3;
    FUN_00c52770(iVar3,0x41000000);
    FUN_00c52700(param_1[0x4b5],1);
    FUN_00c52ab0(param_1[0x4b5],1);
    FUN_00a96030(0,1.0 / (float)param_1[0x244]);
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      fVar10 = 1.0 / (float)param_1[0x244];
      uVar7 = 0;
      FUN_005ab010(0,fVar10);
      FUN_00a96030(uVar7,fVar10);
    }
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      param_1[0x4ba] = 1;
    }
    FUN_00a8c760(8);
    FUN_005ac920(2);
    break;
  case 8:
  case 9:
  case 0xe:
  case 0xf:
    break;
  case 10:
    FUN_00aa4080(0x10c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    uVar7 = 0x1a3;
    goto LAB_005bb4e4;
  case 0xb:
  case 0x11:
    goto switchD_005baeff_caseD_b;
  case 0xc:
    FUN_00aa4080(0x10d,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1a4,0x8100000);
  case 0xd:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_005ac920(1);
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
    }
    FUN_005ac920(1);
    break;
  case 0x10:
    FUN_00aa4080(0x10e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    uVar7 = 0x1a8;
LAB_005bb4e4:
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(uVar7,0x8100000);
switchD_005baeff_caseD_b:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
LAB_005bb516:
    FUN_005ac920(1);
    break;
  case 0x12:
    FUN_00aa4080(0x10f,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1a9,0x8100000);
  case 0x13:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_005ac920(1);
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
        FUN_005ac920(1);
        break;
      }
    }
    goto LAB_005bb516;
  default:
    break;
  }
  if (((local_c4 != (int *)0x0) && (iVar3 = FUN_00a8c760(0x3a), iVar3 == 0)) &&
     (iVar3 = (**(code **)(*local_c4 + 0x32c))(), iVar3 == 0)) {
    FUN_00a8ce90(local_c0,&local_b0);
    fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] + local_ac);
    local_c4[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(local_c0,local_c0,param_1 + 4);
    fVar10 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    local_c4[0x16] = (int)((float)param_1[0x12] + (float)local_c4);
    local_c4[0x14] = (int)(fStack_cc + fVar10);
    local_c4[0x15] = (int)(fVar2 + local_c8);
    local_c4[0x17] = local_c0[0];
    switchD_0080dbae::default();
  }
  return;
}

// 005BB7A0  FUN_005bb7a0  size=990  [callgraph]
void __fastcall FUN_005bb7a0(int *param_1)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined *puVar8;
  float fVar9;
  float fStack_3c;
  int *local_38;
  float local_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  iVar5 = 0;
  local_38 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    local_38 = (int *)FUN_00a7c8a0();
    if (local_38 == (int *)0x0) {
      local_38 = (int *)0x0;
    }
    else {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*local_38 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar8);
      local_38 = (int *)(-(uint)(iVar3 != 0) & (uint)local_38);
    }
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x10b,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c5ad80(param_1[0x4b5]);
    param_1[0x4b5] = -1;
    local_34 = 0.0;
    if (0 < (short)param_1[0xc9]) {
      do {
        iVar3 = param_1[200];
        iVar4 = *(int *)(*(int *)(iVar3 + 0x60 + iVar5) + 0x40);
        if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,"damage_LBODY"), iVar4 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        local_34 = (float)((int)local_34 + 1);
        iVar5 = iVar5 + 0x70;
      } while ((int)local_34 < (int)(short)param_1[0xc9]);
    }
    FUN_005b51b0(0x1a7,0x8100000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(2);
    break;
  case 2:
    FUN_00aa4080(0x112,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1aa,0x8000000);
    FUN_00a96030(0,1.0 / (float)param_1[0x244]);
    iVar3 = FUN_005ab010();
    if (iVar3 != 0) {
      fVar9 = 1.0 / (float)param_1[0x244];
      uVar7 = 0;
      FUN_005ab010(0,fVar9);
      FUN_00a96030(uVar7,fVar9);
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    FUN_005ac920(2);
    break;
  case 4:
    FUN_00aa4080(0x114,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1b4,0x8100000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(1);
    break;
  case 6:
    FUN_00aa4080(0x115,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c5ad80(param_1[0x4b5]);
    param_1[0x4b5] = -1;
    FUN_005b51b0(0x1b5,0x8100000);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_005ac920(1);
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
    }
    FUN_005ac920(1);
  }
  if (((local_38 != (int *)0x0) && (iVar3 = FUN_00a8c760(0x3a), iVar3 == 0)) &&
     (iVar3 = (**(code **)(*local_38 + 0x32c))(), iVar3 == 0)) {
    FUN_00a8ce90(aiStack_30,auStack_20);
    fVar6 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    local_38[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(aiStack_30,aiStack_30,param_1 + 4);
    fVar9 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    local_38[0x16] = (int)((float)param_1[0x12] + local_34);
    local_38[0x14] = (int)(fVar9 + fStack_3c);
    local_38[0x15] = (int)(fVar2 + (float)local_38);
    local_38[0x17] = aiStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 005BBBB0  FUN_005bbbb0  size=845  [callgraph]
void __fastcall FUN_005bbbb0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  float unaff_ESI;
  int *piVar5;
  float10 fVar6;
  undefined *puVar7;
  float fStack_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  piVar5 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar7);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x113,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_005b51b0(0x1ab,0x8000000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    FUN_005ac920(2);
    break;
  case 2:
    FUN_00aa4080(0x140,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_005b51b0(0x1ac,0x8000000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    FUN_005ac920(6);
    break;
  case 4:
    FUN_00aa4080(0x119,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_005b51b0(0x1ad,0x8100000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    FUN_005ac920(2);
    iVar3 = FUN_00a94e10(0,0,0x43c38000);
    if (iVar3 != 0) {
      FUN_005ac920(6);
    }
    iVar3 = FUN_00a952e0(0,0x439d8000);
    if (iVar3 != 0) {
      FUN_00dda360(0,0x3f800000,0x3f800000,0x3d);
    }
    break;
  case 6:
    FUN_00aa4080(0x11a,0,0,0x3f800000,0x100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_005b51b0(0x1ae,0x8000000);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    FUN_005ac920(2);
  }
  if (((piVar5 != (int *)0x0) && (iVar3 = FUN_00a8c760(0x3a), iVar3 == 0)) &&
     (iVar3 = (**(code **)(*piVar5 + 0x32c))(), iVar3 == 0)) {
    FUN_00a8ce90(aiStack_30,auStack_20);
    fVar6 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + fStack_1c);
    piVar5[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(aiStack_30,aiStack_30,param_1 + 0x10);
    fVar1 = *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0x44);
    piVar5[0x16] = (int)(*(float *)(param_1 + 0x48) + fStack_34);
    piVar5[0x14] = (int)(unaff_ESI + fVar1);
    piVar5[0x15] = (int)(fVar2 + unaff_EBX);
    piVar5[0x17] = aiStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 005BBF20  FUN_005bbf20  size=2524  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005bbf20(int *param_1)

{
  int *piVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined *puVar7;
  float fVar8;
  float fStack_cc;
  int *local_c8;
  float fStack_c4;
  int aiStack_c0 [4];
  undefined4 uStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [156];
  
  local_c8 = (int *)0x0;
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    local_c8 = (int *)FUN_00a7c8a0();
    if (local_c8 == (int *)0x0) {
      local_c8 = (int *)0x0;
    }
    else {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*local_c8 + 4))(&DAT_01be9db8);
      iVar4 = FUN_00dd6d80(puVar7);
      local_c8 = (int *)(-(uint)(iVar4 != 0) & (uint)local_c8);
    }
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x11f,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c5ad80(param_1[0x4b5]);
    param_1[0x4b5] = -1;
    param_1[0x250] = 0;
    FUN_005b51b0(0x1af,0x8100000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(6);
    iVar4 = FUN_00a94e10(0,0,0x434a0000);
    if (iVar4 != 0) {
      FUN_005ac920(2);
    }
    break;
  case 2:
    FUN_00aa4080(0x11c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1b0,0x8000000);
    FUN_00c5ad80(param_1[0x4b5]);
    param_1[0x249] = 0;
    param_1[0x4b5] = -1;
    param_1[0x250] = 0;
    param_1[0x251] = 6;
    param_1[0x252] = 1;
    param_1[0x4b9] = 0;
    FUN_00a96030(0,1.0 / (float)param_1[0x244]);
    iVar4 = FUN_005ab010();
    if (iVar4 != 0) {
      fVar8 = 1.0 / (float)param_1[0x244];
      uVar6 = 0;
      FUN_005ab010(0,fVar8);
      FUN_00a96030(uVar6,fVar8);
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((param_1[0x4b9] != 0) && (param_1[0x250] == 0)) {
      piVar1 = param_1 + 0x251;
      *piVar1 = *piVar1 + -1;
      param_1[0x4b9] = 0;
      if (*piVar1 == 0) {
        FUN_00b85420();
        pcVar3 = *(code **)(*param_1 + 0x358);
        param_1[0x250] = 1;
        (*pcVar3)(0x14d,param_1 + 0x4e8);
      }
      else {
        if (local_c8 != (int *)0x0) {
          FUN_00bc31a0();
        }
        (**(code **)(*param_1 + 0x358))(0x15f,param_1 + 0x4e8);
        param_1[0x249] = 0x41200000;
        param_1[0x252] = 1;
      }
    }
    if ((param_1[0x252] != 0) &&
       (fVar8 = (float)param_1[0x249] - _DAT_01be942c, param_1[0x249] = (int)fVar8, fVar8 < 0.0)) {
      param_1[0x252] = 0;
      param_1[0x4b9] = 0;
      param_1[0x4ba] = 0;
      FUN_00c5ad80(param_1[0x4b5]);
      fStack_c4 = 10.0;
      param_1[0x4b5] = -1;
      iVar4 = FUN_00ac4780();
      if (iVar4 == 0) {
        fStack_c4 = 20.0;
      }
      iVar4 = FUN_00ac4780();
      fVar8 = fStack_c4;
      if (iVar4 == 1) {
        fVar8 = 10.0;
      }
      aiStack_c0[0] = 0;
      aiStack_c0[1] = 0;
      aiStack_c0[2] = 0;
      uStack_b0 = 0x3dcccccd;
      fStack_ac = 0.11;
      uStack_a8 = 0x3e428f5c;
      FUN_00405140(param_1[0x13c],0x10,3,&uStack_b0,aiStack_c0,fVar8,0x3f000000,0xbf800000);
      iVar4 = FUN_00c5abe0(auStack_a0);
      param_1[0x4b5] = iVar4;
      FUN_00c52770(iVar4,0x42c80000);
      FUN_00c52700(param_1[0x4b5],1);
      FUN_00c528c0(param_1[0x4b5],1);
      FUN_00c52ab0(param_1[0x4b5],1);
    }
    FUN_005ac920(6);
    break;
  case 4:
    FUN_00aa4080(0x11d,0,0x3e800000,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1b7,0);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    if ((param_1[0x4b9] != 0) && (param_1[0x250] == 0)) {
      piVar1 = param_1 + 0x251;
      *piVar1 = *piVar1 + -1;
      param_1[0x4b9] = 0;
      if (*piVar1 == 0) {
        FUN_00b85420();
        pcVar3 = *(code **)(*param_1 + 0x358);
        param_1[0x250] = 1;
        (*pcVar3)(0x14d,param_1 + 0x4e8);
      }
      else {
        if (local_c8 != (int *)0x0) {
          FUN_00bc31a0();
        }
        (**(code **)(*param_1 + 0x358))(0x15f,param_1 + 0x4e8);
        param_1[0x249] = 0x41200000;
        param_1[0x252] = 1;
      }
    }
    if ((param_1[0x252] != 0) &&
       (fVar8 = (float)param_1[0x249] - _DAT_01be942c, param_1[0x249] = (int)fVar8, fVar8 < 0.0)) {
      param_1[0x252] = 0;
      param_1[0x4b9] = 0;
      param_1[0x4ba] = 0;
      FUN_00c5ad80(param_1[0x4b5]);
      fStack_c4 = 10.0;
      param_1[0x4b5] = -1;
      iVar4 = FUN_00ac4780();
      if (iVar4 == 0) {
        fStack_c4 = 20.0;
      }
      iVar4 = FUN_00ac4780();
      fVar8 = fStack_c4;
      if (iVar4 == 1) {
        fVar8 = 10.0;
      }
      uStack_b0 = 0;
      fStack_ac = 0.0;
      uStack_a8 = 0;
      aiStack_c0[0] = 0x3dcccccd;
      aiStack_c0[1] = 0x3de147ae;
      aiStack_c0[2] = 0x3e428f5c;
      FUN_00405140(param_1[0x13c],0x10,3,aiStack_c0,&uStack_b0,fVar8,0x3f000000,0xbf800000);
      iVar4 = FUN_00c5abe0(auStack_a0);
      param_1[0x4b5] = iVar4;
      FUN_00c52770(iVar4,0x42c80000);
      FUN_00c52700(param_1[0x4b5],1);
      FUN_00c528c0(param_1[0x4b5],1);
      FUN_00c52ab0(param_1[0x4b5],1);
    }
    break;
  case 6:
    FUN_00aa4080(0x120,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c5ad80(param_1[0x4b5]);
    param_1[0x4b5] = -1;
    FUN_005b51b0(0x1b1,0x8100000);
    (**(code **)(*param_1 + 0x344))(0xb,1,1);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(2);
    break;
  case 8:
    FUN_00aa4080(0x121,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1b2,0x8100000);
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(2);
    break;
  case 10:
    FUN_00aa4080(0x122,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1b3,0x8100000);
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(2);
    break;
  case 0xc:
    FUN_00aa4080(0x123,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005b51b0(0x1b6,0x8100000);
    FUN_00dda360(0,0x3f800000,0x3f800000,0x3d);
  case 0xd:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(2);
    break;
  case 0xe:
    break;
  case 0xf:
    FUN_00aa4080(0x125,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c5ad80(param_1[0x4b5]);
    param_1[0x4b5] = -1;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_005b51b0(0x1b8,0x8100000);
    goto LAB_005bc802;
  case 0x10:
LAB_005bc802:
    FUN_005ac920(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_005ac920(1);
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
    }
  }
  if (((local_c8 != (int *)0x0) && (iVar4 = FUN_00a8c760(0x3a), iVar4 == 0)) &&
     (iVar4 = (**(code **)(*local_c8 + 0x32c))(), iVar4 == 0)) {
    FUN_00a8ce90(aiStack_c0,&uStack_b0);
    fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_ac);
    local_c8[0x25] = (int)(float)fVar5;
    D3DXVec3TransformNormal(aiStack_c0,aiStack_c0,param_1 + 4);
    fVar8 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    local_c8[0x16] = (int)((float)param_1[0x12] + fStack_c4);
    local_c8[0x14] = (int)(fStack_cc + fVar8);
    local_c8[0x15] = (int)(fVar2 + (float)local_c8);
    local_c8[0x17] = aiStack_c0[0];
    switchD_0080dbae::default();
  }
  return;
}

// 005BC940  FUN_005bc940  size=1590  [callgraph]
int __fastcall FUN_005bc940(int param_1)

{
  float fVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int local_28;
  int aiStack_24 [9];
  
  piVar2 = *(int **)(param_1 + 0xa84);
  *(undefined4 *)(param_1 + 0x180c) = 0;
  if (piVar2 != (int *)0x0) {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar7);
    if (iVar4 != 0) {
      (**(code **)(*piVar2 + 0x354))();
    }
  }
  local_28 = 0;
  if (*(int *)(param_1 + 0x1674) == 0) {
    fVar1 = *(float *)(param_1 + 0x1680);
    uVar5 = *(uint *)(param_1 + 0x167c) % 7;
    aiStack_24[0] = 0x20000;
    aiStack_24[1] = 0x20001;
    aiStack_24[2] = 0x20002;
    aiStack_24[3] = 0x20003;
    aiStack_24[4] = 0x20006;
    aiStack_24[5] = 0x20009;
    aiStack_24[6] = 0x20007;
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && (aiStack_24[uVar5] == 0x20007)) {
      uVar5 = *(uint *)(param_1 + 0x167c) + 1;
      *(uint *)(param_1 + 0x167c) = uVar5;
      uVar5 = uVar5 % 7;
    }
    if ((*(float *)(param_1 + 0xa8c) < 6.25) && (*(float *)(param_1 + 0xaa0) <= 1.3962634)) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
      iVar4 = aiStack_24[uVar5];
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(iVar4,0,0,0);
      local_28 = 1;
    }
    if (9.0 <= *(float *)(param_1 + 0xa8c)) {
      return local_28;
    }
    fVar1 = *(float *)(param_1 + 0xaa0);
    if (NAN(fVar1) || 1.5707964 < fVar1 == (fVar1 == 1.5707964)) {
      return local_28;
    }
    *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
    *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
    *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
    *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
    FUN_00a8caf0(0x20005,0,0,0);
    sVar3 = FUN_00dde2d0(0,2);
    if (sVar3 == 1) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x20009,0,0,0);
    }
    iVar4 = FUN_00ac4780();
    if (2 < iVar4) {
      sVar3 = FUN_00dde2d0(0,3);
      if (sVar3 != 2) {
        return 1;
      }
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x20007,0,0,0);
      *(undefined4 *)(param_1 + 0x180c) = 1;
      return 1;
    }
    sVar3 = FUN_00dde2d0(0,3);
    if (sVar3 != 2) {
      return 1;
    }
    uVar6 = 0x20007;
  }
  else {
    if (((*(char *)(param_1 + 0x1698) == '\x03') &&
        (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 42.25 < fVar1 != (fVar1 == 42.25))) &&
       (*(float *)(param_1 + 0xaa0) <= 1.2217305)) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x847fffff;
      FUN_00a8caf0(0x10006,0,0,0);
      return 1;
    }
    fVar1 = *(float *)(param_1 + 0x1680);
    uVar5 = *(uint *)(param_1 + 0x167c) % 9;
    aiStack_24[0] = 0x20000;
    aiStack_24[1] = 0x2000d;
    aiStack_24[2] = 0x20001;
    aiStack_24[3] = 0x20002;
    aiStack_24[4] = 0x2000c;
    aiStack_24[5] = 0x20003;
    aiStack_24[6] = 0x20006;
    aiStack_24[7] = 0x20007;
    aiStack_24[8] = 0x20009;
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && (aiStack_24[uVar5] == 0x20007)) {
      uVar5 = *(uint *)(param_1 + 0x167c) + 1;
      *(uint *)(param_1 + 0x167c) = uVar5;
      uVar5 = uVar5 % 9;
    }
    if ((*(float *)(param_1 + 0xa8c) < 6.25) && (*(float *)(param_1 + 0xaa0) <= 1.3962634)) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
      iVar4 = aiStack_24[uVar5];
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(iVar4,0,0,0);
      local_28 = 1;
    }
    if ((*(float *)(param_1 + 0xa8c) < 9.0) &&
       (fVar1 = *(float *)(param_1 + 0xaa0),
       !NAN(fVar1) && 1.5707964 < fVar1 != (fVar1 == 1.5707964))) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x20005,0,0,0);
      sVar3 = FUN_00dde2d0(0,2);
      if (sVar3 == 1) {
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
        *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
        FUN_00a8caf0(0x20009,0,0,0);
      }
      iVar4 = FUN_00ac4780();
      if (iVar4 < 3) {
        sVar3 = FUN_00dde2d0(0,3);
        if (sVar3 == 2) {
          *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
          *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
          *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
          *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
          FUN_00a8caf0(0x20007,0,0,0);
        }
      }
      else {
        sVar3 = FUN_00dde2d0(0,3);
        if (sVar3 == 2) {
          *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
          *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
          *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
          *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
          FUN_00a8caf0(0x20007,0,0,0);
          *(undefined4 *)(param_1 + 0x180c) = 1;
        }
      }
      local_28 = 1;
    }
    if ((*(int *)(param_1 + 0x618) == 0x2000c) &&
       (((*(char *)(param_1 + 0x1698) != '\0' || (*(char *)(param_1 + 0x16a0) != '\0')) &&
        (local_28 != 0)))) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x20006,0,0,0);
    }
    if (((*(int *)(param_1 + 0x618) == 0x2000d) &&
        ((*(char *)(param_1 + 0x1698) != '\0' || (*(char *)(param_1 + 0x16a0) != '\0')))) &&
       (local_28 != 0)) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x20006,0,0,0);
    }
    iVar4 = FUN_005b57e0();
    if ((iVar4 != 0) || (iVar4 = FUN_005b56c0(), iVar4 != 0)) {
      local_28 = 1;
    }
    if (*(int *)(param_1 + 0x17e0) == 0) {
      return local_28;
    }
    if ((*(byte *)(param_1 + 0x17e5) & 0x10) == 0) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x20013,0,0,0);
      *(byte *)(param_1 + 0x17e5) = *(byte *)(param_1 + 0x17e5) | 0x10;
      *(byte *)(param_1 + 0x17e7) = *(byte *)(param_1 + 0x17e7) | 0xc;
      *(undefined1 *)(param_1 + 0x17e6) = 0x10;
      return 1;
    }
    uVar6 = 0x20019;
  }
  *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x87ffffff;
  *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfdffffff;
  *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
  *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
  FUN_00a8caf0(uVar6,0,0,0);
  return 1;
}

// 005BCF80  FUN_005bcf80  size=1700  [callgraph]
int __fastcall FUN_005bcf80(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int *local_44;
  int local_40 [16];
  
  local_44 = *(int **)(param_1 + 0xa84);
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x180c) = 0;
  if (local_44 == (int *)0x0) {
    local_44 = (int *)0x0;
  }
  else {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*local_44 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar7);
    if (iVar3 == 0) {
      local_44 = (int *)0x0;
    }
    else {
      (**(code **)(*local_44 + 0x354))();
    }
  }
  if (*(int *)(param_1 + 0x1674) != 0) {
    if (((*(char *)(param_1 + 0x1698) == '\x03') &&
        (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 42.25 < fVar1 != (fVar1 == 42.25))) &&
       (*(float *)(param_1 + 0xaa0) <= 1.2217305)) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xbfffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xc5ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x10006,0,0,0);
      iVar5 = FUN_00ac4780();
      if ((iVar5 == 2) && (sVar2 = FUN_00dde2d0(0,1), sVar2 == 1)) {
        FUN_005b57e0();
      }
      iVar5 = FUN_00ac4780();
      if (iVar5 == 3) {
        sVar2 = FUN_00dde2d0(0,2);
        if (sVar2 == 1) {
          *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xbfffffff;
          *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xc5ffffff;
          *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
          *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
          FUN_00a8caf0(0x20007,0,0,0);
        }
        sVar2 = FUN_00dde2d0(0,2);
        if (sVar2 == 2) {
          FUN_005b57e0();
        }
      }
      return 1;
    }
    fVar1 = *(float *)(param_1 + 0x1680);
    local_40[10] = 0x20006;
    local_40[0xc] = 0x20006;
    local_40[0xb] = 0x2000d;
    local_40[0xf] = 0x2000d;
    uVar4 = *(uint *)(param_1 + 0x167c) % 9;
    local_40[7] = 0x2000b;
    local_40[8] = 0x20004;
    local_40[9] = 0x2000c;
    local_40[0xd] = 0x20007;
    local_40[0xe] = 0x2000b;
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && (local_40[uVar4 + 7] == 0x20007)) {
      uVar4 = *(uint *)(param_1 + 0x167c) + 1;
      *(uint *)(param_1 + 0x167c) = uVar4;
      uVar4 = uVar4 % 9;
    }
    fVar1 = *(float *)(param_1 + 0xa8c);
    if (((!NAN(fVar1) && 12.25 < fVar1 != (fVar1 == 12.25)) && (*(float *)(param_1 + 0xa8c) < 30.25)
        ) && (*(float *)(param_1 + 0xaa0) <= 0.7853982)) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x85ffffff;
      iVar5 = local_40[uVar4 + 7];
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(iVar5,0,0,0);
      iVar5 = 1;
    }
    fVar1 = *(float *)(param_1 + 0x1680);
    local_40[1] = 0x10006;
    local_40[4] = 0x10006;
    local_40[6] = 0x10006;
    local_40[0] = 0x2000b;
    uVar4 = *(uint *)(param_1 + 0x167c) % 7;
    local_40[2] = 0x20007;
    local_40[3] = 0x2000c;
    local_40[5] = 0x2000d;
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && (local_40[uVar4 + 7] == 0x20007)) {
      uVar4 = *(int *)(param_1 + 0x167c) + 1;
      *(uint *)(param_1 + 0x167c) = uVar4;
      uVar4 = uVar4 % 9;
    }
    fVar1 = *(float *)(param_1 + 0xa8c);
    if (((!NAN(fVar1) && 42.25 < fVar1 != (fVar1 == 42.25)) && (*(float *)(param_1 + 0xa8c) < 90.25)
        ) && (*(float *)(param_1 + 0xaa0) <= 0.5235988)) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x85ffffff;
      iVar5 = local_40[uVar4];
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(iVar5,0,0,0);
      iVar5 = 1;
    }
    if ((*(int *)(param_1 + 0x618) == 0x2000c) &&
       (((*(char *)(param_1 + 0x1698) != '\0' || (*(char *)(param_1 + 0x16a0) != '\0')) &&
        (iVar5 != 0)))) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x85ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x2000b,0,0,0);
    }
    if (((*(int *)(param_1 + 0x618) == 0x2000d) &&
        ((*(char *)(param_1 + 0x1698) != '\0' || (*(char *)(param_1 + 0x16a0) != '\0')))) &&
       (iVar5 != 0)) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x85ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x2000b,0,0,0);
    }
    iVar3 = FUN_005b5560();
    if (((iVar3 != 0) || (iVar3 = FUN_005b56c0(), iVar3 != 0)) ||
       (iVar3 = FUN_005b57e0(), iVar3 != 0)) {
      iVar5 = 1;
    }
    if (*(int *)(param_1 + 0x17e0) == 0) {
      return iVar5;
    }
    if ((local_44 != (int *)0x0) && (iVar5 = FUN_00b80980(), iVar5 != 0)) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x85ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x20019,0,0,0);
      *(byte *)(param_1 + 0x17e5) = *(byte *)(param_1 + 0x17e5) | 0x10;
      *(byte *)(param_1 + 0x17e7) = *(byte *)(param_1 + 0x17e7) | 0xc;
      return 1;
    }
    if ((*(byte *)(param_1 + 0x17e5) & 0x10) == 0) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x85ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x20013,0,0,0);
      *(byte *)(param_1 + 0x17e5) = *(byte *)(param_1 + 0x17e5) | 0x10;
      *(byte *)(param_1 + 0x17e7) = *(byte *)(param_1 + 0x17e7) | 0xc;
      *(undefined1 *)(param_1 + 0x17e6) = 0x10;
      return 1;
    }
    uVar6 = 0x20019;
    goto LAB_005bd5fa;
  }
  fVar1 = *(float *)(param_1 + 0x1680);
  local_40[1] = 0x20006;
  local_40[4] = 0x20006;
  uVar4 = *(uint *)(param_1 + 0x167c) % 5;
  local_40[0] = 0x20004;
  local_40[2] = 0x20007;
  local_40[3] = 0x20009;
  if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && (local_40[uVar4] == 0x20007)) {
    uVar4 = *(uint *)(param_1 + 0x167c) + 1;
    *(uint *)(param_1 + 0x167c) = uVar4;
    uVar4 = uVar4 % 5;
  }
  fVar1 = *(float *)(param_1 + 0xa8c);
  if (((!NAN(fVar1) && 12.25 < fVar1 != (fVar1 == 12.25)) && (*(float *)(param_1 + 0xa8c) < 30.25))
     && (*(float *)(param_1 + 0xaa0) <= 0.7853982)) {
    *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x85ffffff;
    iVar5 = local_40[uVar4];
    *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
    *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
    FUN_00a8caf0(iVar5,0,0,0);
    iVar5 = 1;
  }
  if (*(int *)(param_1 + 0x4a0) == 1) {
    if (((*(float *)(param_1 + 0x1470) <= 0.0) && (iVar5 == 0)) &&
       ((fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 12.25 < fVar1 != (fVar1 == 12.25) &&
        ((*(float *)(param_1 + 0xaa0) <= 1.3962634 && (iVar3 = FUN_00ac4780(), iVar3 < 3)))))) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x85ffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
      FUN_00a8caf0(0x10006,0,0,0);
      iVar5 = 1;
    }
    if (*(int *)(param_1 + 0x4a0) != 1) goto LAB_005bd5b7;
    if (iVar5 != 0) {
      return iVar5;
    }
    fVar1 = *(float *)(param_1 + 0xa8c);
    if (((NAN(fVar1) || 12.25 < fVar1 == (fVar1 == 12.25)) ||
        (1.3962634 < *(float *)(param_1 + 0xaa0))) || (iVar5 = FUN_00ac4780(), iVar5 < 3))
    goto LAB_005bd5bb;
  }
  else {
LAB_005bd5b7:
    if (iVar5 != 0) {
      return iVar5;
    }
LAB_005bd5bb:
    fVar1 = *(float *)(param_1 + 0xa8c);
    if (NAN(fVar1) || 12.25 < fVar1 == (fVar1 == 12.25)) {
      return 0;
    }
    if (1.3962634 < *(float *)(param_1 + 0xaa0)) {
      return 0;
    }
    iVar5 = FUN_00ac4780();
    if (iVar5 < 4) {
      return 0;
    }
  }
  uVar6 = 0x10006;
LAB_005bd5fa:
  *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x85ffffff;
  *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xfeffffff;
  *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0xff7fffff;
  FUN_00a8caf0(uVar6,0,0,0);
  return 1;
}

// 005BE6C0  Em0700::vf48  size=367  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Em0700::vf48(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00a8e880(*(int *)(param_1 + 0xa84) + 0x40);
  }
  fVar1 = *(float *)(param_1 + 0x1470) - _DAT_01be942c;
  *(float *)(param_1 + 0x1470) = fVar1;
  if (fVar1 < -1.0) {
    *(undefined4 *)(param_1 + 0x1470) = 0xbf800000;
  }
  fVar1 = *(float *)(param_1 + 0x1474) - _DAT_01be942c;
  *(float *)(param_1 + 0x1474) = fVar1;
  if (fVar1 < -1.0) {
    *(undefined4 *)(param_1 + 0x1474) = 0xbf800000;
  }
  fVar1 = *(float *)(param_1 + 0x1678);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0x1678) = *(float *)(param_1 + 0x1678) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x1680) != (*(float *)(param_1 + 0x1680) == 0.0)) {
    *(float *)(param_1 + 0x1680) = *(float *)(param_1 + 0x1680) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x17fc) != (*(float *)(param_1 + 0x17fc) == 0.0)) {
    *(float *)(param_1 + 0x17fc) = *(float *)(param_1 + 0x17fc) - *(float *)(param_1 + 0x910);
  }
  fVar1 = *(float *)(param_1 + 0x1804) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x1804) = fVar1;
  if (fVar1 < 0.0) {
    *(undefined4 *)(param_1 + 0x1804) = 0;
    *(undefined4 *)(param_1 + 0x1800) = 0;
  }
  if (0 < *(int *)(param_1 + 0x870)) {
    DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
    DAT_01dc08dc = 0;
    DAT_01dc08e0 = 0;
    DAT_01dc08e4 = *(undefined4 *)(param_1 + 0x870);
    DAT_01dc08e8 = *(undefined4 *)(param_1 + 0x874);
    DAT_01dc08ec = 1;
    FUN_00cad2a0();
  }
  FUN_005ae1a0();
  BehaviorEmBase::vf48();
  FUN_00a92fb0();
  fVar2 = (float10)FUN_00e04a50();
  *(float *)(param_1 + 0x910) = (float)fVar2;
  FUN_005b8240();
  return;
}

// 005BE830  Em0700::vf32C  size=1925  [class]
undefined4 __fastcall Em0700::vf32C(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float10 fVar9;
  int local_1b8;
  int local_1b4;
  int local_1a0 [12];
  float local_170;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined1 local_50 [76];
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  iVar5 = FUN_00a8ef10();
  if ((iVar5 == 0) && (*(int *)(param_1 + 0x4e4) == 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa00);
    if (*(int *)(param_1 + 0xa18) != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar5 = *(int *)(param_1 + 0x67c);
    iVar8 = *(int *)(param_1 + 0x684) * 0x150 + iVar5;
    FUN_00445db0();
    iVar6 = -1;
    bVar4 = false;
    if (iVar5 != iVar8) {
      do {
        if (iVar6 < *(int *)(iVar5 + 4)) {
          bVar4 = true;
          FUN_00448f50(iVar5);
          iVar6 = *(int *)(iVar5 + 4);
        }
        iVar5 = iVar5 + 0x150;
      } while (iVar5 != iVar8);
      if (bVar4) {
        iVar5 = FUN_00a8f040(local_1a0);
        if (((((iVar5 == 0) && (local_1a0[0] != 0)) && (local_1a0[0] != 1)) &&
            ((local_1a0[0] != 2 && (local_1a0[0] != 0x1b0)))) && (local_1a0[0] != 0x147)) {
          fVar9 = (float10)FUN_00ddba30(local_170 - *(float *)(param_1 + 0x94));
          *(float *)(param_1 + 0x914) = (float)fVar9;
          FID_conflict__memcpy(local_50,&local_100,0x40);
          iVar5 = FUN_00c5fb10(*(undefined4 *)(param_1 + 0x4f0),local_50,
                               *(undefined4 *)(param_1 + 0x12d4),0,0);
          if (iVar5 != 0) {
            *(undefined4 *)(param_1 + 0x12e4) = 1;
            FUN_00dda360(0,0x3f800000,0x3f800000,10);
          }
          if (*(int *)(param_1 + 0x1450) != 0) {
            iVar5 = 0;
            local_1b4 = 0;
            if (0 < *(short *)(param_1 + 0x324)) {
              do {
                iVar6 = *(int *)(param_1 + 800);
                iVar8 = *(int *)(*(int *)(iVar6 + 0x60 + iVar5) + 0x40);
                if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"ex_qte_all"), iVar8 != 0)) {
                  puVar1 = (uint *)(iVar6 + 0x38 + iVar5);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b4 = local_1b4 + 1;
                iVar5 = iVar5 + 0x70;
              } while (local_1b4 < *(short *)(param_1 + 0x324));
            }
            FUN_00dda360(0,0x3f800000,0x3f800000,10);
            fVar2 = local_fc * local_fc;
            fVar3 = local_100 * local_100;
            FUN_00ddbaa0(-(local_f8 /
                          SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc)));
            fVar9 = (float10)fpatan((float10)local_fc /
                                    (float10)SQRT(local_e8 * local_e8 +
                                                  local_f0 * local_f0 + local_ec * local_ec),
                                    (float10)local_100 /
                                    (float10)SQRT(local_f8 * local_f8 + fVar3 + fVar2));
            fVar9 = fVar9 * (float10)57.29578;
            fVar2 = (float)fVar9;
            if (((fVar9 < (float10)55.0 != (fVar9 == (float10)55.0)) && ((float10)35.0 <= fVar9)) &&
               (local_1b8 = 0, 0 < *(short *)(param_1 + 0x324))) {
              iVar5 = 0;
              do {
                iVar6 = *(int *)(param_1 + 800);
                iVar8 = *(int *)(*(int *)(iVar6 + 0x60 + iVar5) + 0x40);
                if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"ex_qte_dr45"), iVar8 != 0)) {
                  puVar1 = (uint *)(iVar6 + 0x38 + iVar5);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar5 = iVar5 + 0x70;
              } while (local_1b8 < *(short *)(param_1 + 0x324));
              fVar9 = (float10)fVar2;
            }
            if (((fVar9 < (float10)-125.0 != (fVar9 == (float10)-125.0)) &&
                ((float10)-145.0 <= fVar9)) && (local_1b8 = 0, 0 < *(short *)(param_1 + 0x324))) {
              iVar5 = 0;
              do {
                iVar6 = *(int *)(param_1 + 800);
                iVar8 = *(int *)(*(int *)(iVar6 + 0x60 + iVar5) + 0x40);
                if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"ex_qte_dr45"), iVar8 != 0)) {
                  puVar1 = (uint *)(iVar6 + 0x38 + iVar5);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar5 = iVar5 + 0x70;
              } while (local_1b8 < *(short *)(param_1 + 0x324));
              fVar9 = (float10)fVar2;
            }
            if (((fVar9 < (float10)-35.0 != (fVar9 == (float10)-35.0)) && ((float10)-55.0 <= fVar9))
               && (local_1b8 = 0, 0 < *(short *)(param_1 + 0x324))) {
              iVar5 = 0;
              do {
                iVar6 = *(int *)(param_1 + 800);
                iVar8 = *(int *)(*(int *)(iVar6 + 0x60 + iVar5) + 0x40);
                if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"ex_qte_dl45"), iVar8 != 0)) {
                  puVar1 = (uint *)(iVar6 + 0x38 + iVar5);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar5 = iVar5 + 0x70;
              } while (local_1b8 < *(short *)(param_1 + 0x324));
              fVar9 = (float10)fVar2;
            }
            if (((fVar9 < (float10)145.0 != (fVar9 == (float10)145.0)) && ((float10)125.0 <= fVar9))
               && (local_1b8 = 0, 0 < *(short *)(param_1 + 0x324))) {
              iVar5 = 0;
              do {
                iVar6 = *(int *)(param_1 + 800);
                iVar8 = *(int *)(*(int *)(iVar6 + 0x60 + iVar5) + 0x40);
                if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"ex_qte_dl45"), iVar8 != 0)) {
                  puVar1 = (uint *)(iVar6 + 0x38 + iVar5);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar5 = iVar5 + 0x70;
              } while (local_1b8 < *(short *)(param_1 + 0x324));
              fVar9 = (float10)fVar2;
            }
            if (((fVar9 < (float10)100.0 != (fVar9 == (float10)100.0)) && ((float10)80.0 <= fVar9))
               && (local_1b8 = 0, 0 < *(short *)(param_1 + 0x324))) {
              iVar5 = 0;
              do {
                iVar6 = *(int *)(param_1 + 800);
                iVar8 = *(int *)(*(int *)(iVar6 + 0x60 + iVar5) + 0x40);
                if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"ex_qte_dy90"), iVar8 != 0)) {
                  puVar1 = (uint *)(iVar6 + 0x38 + iVar5);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar5 = iVar5 + 0x70;
              } while (local_1b8 < *(short *)(param_1 + 0x324));
              fVar9 = (float10)fVar2;
            }
            if (((fVar9 < (float10)-80.0 != (fVar9 == (float10)-80.0)) && ((float10)-100.0 <= fVar9)
                ) && (local_1b8 = 0, 0 < *(short *)(param_1 + 0x324))) {
              iVar5 = 0;
              do {
                iVar6 = *(int *)(param_1 + 800);
                iVar8 = *(int *)(*(int *)(iVar6 + 0x60 + iVar5) + 0x40);
                if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"ex_qte_dy90"), iVar8 != 0)) {
                  puVar1 = (uint *)(iVar6 + 0x38 + iVar5);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar5 = iVar5 + 0x70;
              } while (local_1b8 < *(short *)(param_1 + 0x324));
              fVar9 = (float10)fVar2;
            }
            if (((fVar9 < (float10)10.0 != (fVar9 == (float10)10.0)) && ((float10)-10.0 <= fVar9))
               && (local_1b8 = 0, 0 < *(short *)(param_1 + 0x324))) {
              iVar5 = 0;
              do {
                iVar6 = *(int *)(param_1 + 800);
                iVar8 = *(int *)(*(int *)(iVar6 + 0x60 + iVar5) + 0x40);
                if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"ex_qte_dx90"), iVar8 != 0)) {
                  puVar1 = (uint *)(iVar6 + 0x38 + iVar5);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar5 = iVar5 + 0x70;
              } while (local_1b8 < *(short *)(param_1 + 0x324));
              fVar9 = (float10)fVar2;
            }
            if (((fVar9 < (float10)9.0 != (fVar9 == (float10)9.0)) && ((float10)-11.0 <= fVar9)) &&
               (local_1b8 = 0, 0 < *(short *)(param_1 + 0x324))) {
              iVar5 = 0;
              do {
                iVar6 = *(int *)(param_1 + 800);
                iVar8 = *(int *)(*(int *)(iVar6 + 0x60 + iVar5) + 0x40);
                if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"ex_qte_dx90"), iVar8 != 0)) {
                  puVar1 = (uint *)(iVar6 + 0x38 + iVar5);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar5 = iVar5 + 0x70;
              } while (local_1b8 < *(short *)(param_1 + 0x324));
              fVar9 = (float10)fVar2;
            }
            if (((fVar9 < (float10)190.0 != (fVar9 == (float10)190.0)) && ((float10)170.0 <= fVar9))
               && (local_1b8 = 0, 0 < *(short *)(param_1 + 0x324))) {
              iVar5 = 0;
              do {
                iVar6 = *(int *)(param_1 + 800);
                iVar8 = *(int *)(*(int *)(iVar6 + 0x60 + iVar5) + 0x40);
                if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"ex_qte_dx90"), iVar8 != 0)) {
                  puVar1 = (uint *)(iVar6 + 0x38 + iVar5);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar5 = iVar5 + 0x70;
              } while (local_1b8 < *(short *)(param_1 + 0x324));
              fVar9 = (float10)fVar2;
            }
            if (((fVar9 < (float10)-170.0 != (fVar9 == (float10)-170.0)) &&
                ((float10)-190.0 <= fVar9)) && (local_1b8 = 0, 0 < *(short *)(param_1 + 0x324))) {
              iVar5 = 0;
              do {
                iVar6 = *(int *)(param_1 + 800);
                iVar8 = *(int *)(*(int *)(iVar6 + 0x60 + iVar5) + 0x40);
                if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"ex_qte_dx90"), iVar8 != 0)) {
                  puVar1 = (uint *)(iVar6 + 0x38 + iVar5);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar5 = iVar5 + 0x70;
              } while (local_1b8 < *(short *)(param_1 + 0x324));
            }
          }
          if ((*(int *)(param_1 + 0x4a0) == 0) || (*(int *)(param_1 + 0x4a0) == 1)) {
            uVar7 = FUN_005b0ed0(local_1a0);
          }
          else {
            uVar7 = FUN_005b1100(local_1a0);
          }
          if (*(int *)(param_1 + 0xa18) != 0) {
            LeaveCriticalSection(lpCriticalSection);
          }
          return uVar7;
        }
        if (*(int *)(param_1 + 0xa18) != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
        return 0;
      }
    }
    if (*(int *)(param_1 + 0xa18) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}

// 005BF530  FUN_005bf530  size=63  [between]
void __fastcall FUN_005bf530(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    uVar2 = 0x3e;
  }
  else {
    uVar2 = 0xf;
  }
  iVar1 = FUN_00a8c760(uVar2);
  if ((iVar1 != 0) && (*(float *)(param_1 + 0x1678) <= 0.0)) {
    iVar1 = FUN_005bcf80();
    if (iVar1 == 0) {
      FUN_005bc940();
      return;
    }
  }
  return;
}

// 005BF570  FUN_005bf570  size=74  [between]
void __fastcall FUN_005bf570(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005BF5C0  FUN_005bf5c0  size=74  [between]
void __fastcall FUN_005bf5c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005BF610  FUN_005bf610  size=74  [between]
void __fastcall FUN_005bf610(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005BF660  FUN_005bf660  size=74  [between]
void __fastcall FUN_005bf660(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005BF6B0  FUN_005bf6b0  size=74  [between]
void __fastcall FUN_005bf6b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005BF700  FUN_005bf700  size=74  [between]
void __fastcall FUN_005bf700(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005BF750  FUN_005bf750  size=74  [between]
void __fastcall FUN_005bf750(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005BF7A0  FUN_005bf7a0  size=117  [between]
void __fastcall FUN_005bf7a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    uVar2 = 0x3e;
  }
  else {
    uVar2 = 0xf;
  }
  iVar1 = FUN_00a8c760(uVar2);
  if (iVar1 != 0) {
    iVar1 = FUN_005bcf80();
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_005bc940();
    if (iVar1 != 0) {
      return;
    }
  }
  if ((((*(int *)(param_1 + 0x61c) == 3) && (*(int *)(param_1 + 0xa84) != 0)) &&
      (*(float *)(param_1 + 0xa8c) < 6.25)) && (*(float *)(param_1 + 0xaa0) <= 1.3962634)) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
  }
  return;
}

// 005BF820  FUN_005bf820  size=125  [between]
void __fastcall FUN_005bf820(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    uVar2 = 0x3e;
  }
  else {
    uVar2 = 0xf;
  }
  iVar1 = FUN_00a8c760(uVar2);
  if (iVar1 != 0) {
    iVar1 = FUN_005bcf80();
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_005bc940();
    if (iVar1 != 0) {
      return;
    }
  }
  if ((((*(int *)(param_1 + 0x61c) == 3) && (*(int *)(param_1 + 0xa84) != 0)) &&
      (*(float *)(param_1 + 0xa8c) < 6.25)) && (*(float *)(param_1 + 0xaa0) <= 1.3962634)) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return;
}

// 005BF8A0  FUN_005bf8a0  size=217  [between]
void __fastcall FUN_005bf8a0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  piVar2 = *(int **)(param_1 + 0xa84);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar3);
    piVar2 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar2);
  }
  iVar1 = FUN_00a8c760(0xf);
  if ((((iVar1 != 0) && (piVar2 != (int *)0x0)) &&
      (iVar1 = (**(code **)(*piVar2 + 0x354))(), iVar1 != 0)) &&
     (*(float *)(param_1 + 0xa8c) <= 9.0)) {
    *(undefined4 *)(param_1 + 0x180c) = 0;
    *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x847fffff;
    FUN_00a8caf0(0x20007,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if ((iVar1 != 0) && (iVar1 = FUN_005bcf80(), iVar1 == 0)) {
      FUN_005bc940();
      return;
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (iVar1 = FUN_005bcf80(), iVar1 == 0)) {
      FUN_005bc940();
      return;
    }
  }
  return;
}

// 005BF980  FUN_005bf980  size=74  [between]
void __fastcall FUN_005bf980(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005BF9D0  FUN_005bf9d0  size=121  [between]
void __fastcall FUN_005bf9d0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar2 = FUN_00a8c760(0x3e);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 == 0) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0xa8c);
    if ((!NAN(fVar1) && 42.25 < fVar1 != (fVar1 == 42.25)) &&
       (*(float *)(param_1 + 0xaa0) <= 1.0471976)) {
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) & 0x847fffff;
      FUN_00a8caf0(0x10006,0,0,0);
      return;
    }
  }
  iVar2 = FUN_005bcf80();
  if (iVar2 != 0) {
    return;
  }
  FUN_005bc940();
  return;
}

// 005BFDE0  FUN_005bfde0  size=74  [between]
void __fastcall FUN_005bfde0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005BFE30  FUN_005bfe30  size=66  [between]
void __fastcall FUN_005bfe30(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_005b5560();
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FUN_005bcf80();
  if (iVar1 != 0) {
    return;
  }
  FUN_005bc940();
  return;
}

// 005BFE80  FUN_005bfe80  size=1791  [between]
void __fastcall FUN_005bfe80(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_120 [284];
  
  param_1[0x600] = 0;
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    FUN_00aa4080(0x3f,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
    param_1[0x4b9] = 0;
    FUN_00eaa6e0(0x3f800000,0);
    iVar6 = FUN_00932720();
    if (iVar6 == 0x750) {
      FUN_00e01d00(2);
      FUN_00dffb30(param_1 + 0x4bc);
      piVar5 = (int *)FUN_00a6dd90();
      uVar4 = (**(code **)(*piVar5 + 0x9c))(0x760,2,local_120);
      FUN_00e01f10(uVar4);
    }
    param_1[0x249] = 0;
    FUN_00c5ad80(param_1[0x4b5]);
    param_1[0x4b5] = -1;
    if ((char)param_1[0x5a6] == '\x01') {
      param_1[0x5a5] = 0;
    }
    goto LAB_005bffa1;
  case 1:
LAB_005bffa1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar6 = FUN_00a8c760(10);
    if (((iVar6 != 0) &&
        (fVar1 = (float)param_1[0x249], param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]),
        fVar1 - (float)param_1[0x244] < 0.0)) && ((float)param_1[0x5fc] != 0.0)) {
      param_1[0x249] = 0x3f800000;
      iVar6 = FUN_00ac4780();
      if (iVar6 < 2) {
        param_1[0x249] = 0x40000000;
      }
      fVar1 = (float)param_1[0x5fc];
      param_1[0x21c] = param_1[0x21c] + 1;
      param_1[0x5fc] = (int)(fVar1 - 1.0);
      if (param_1[0x21d] <= param_1[0x21c]) {
        param_1[0x21c] = param_1[0x21d];
      }
      if (fVar1 - 1.0 <= 0.0) {
        param_1[0x5fc] = 0;
      }
    }
    iVar6 = FUN_00a8c760(8);
    if (iVar6 != 0) {
      param_1[0x4b9] = 0;
      param_1[0x4ba] = 0;
      FUN_00c5ad80(param_1[0x4b5]);
      local_144 = 0x41200000;
      param_1[0x4b5] = -1;
      iVar6 = FUN_00ac4780();
      if (iVar6 == 0) {
        local_144 = 0x41a00000;
      }
      iVar6 = FUN_00ac4780();
      if (iVar6 == 1) {
        local_144 = 0x41200000;
      }
      local_140 = 0;
      local_13c = 0;
      local_138 = 0;
      local_130 = 0;
      local_12c = 0x3e2e147b;
      local_128 = 0xbe800000;
      FUN_00405140(param_1[0x13c],0x10,3,&local_130,&local_140,local_144,0x3f000000,0xbf800000);
      iVar6 = FUN_00c5abe0(local_120);
      param_1[0x4b5] = iVar6;
      FUN_00c52770(iVar6,0x41000000);
      FUN_00c52700(param_1[0x4b5],1);
      pcVar3 = *(code **)(*param_1 + 0x358);
      param_1[0x4b9] = 0;
      (*pcVar3)(400,param_1 + 0x4bc);
    }
    if ((param_1[0x4b5] != -1) && (param_1[0x2a1] != 0)) {
      fVar7 = (float10)FUN_00ddba30((float)param_1[0x25] + 2.0943952);
      fVar8 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x50);
      fVar7 = (float10)FUN_00ddba30((float)((float10)(float)fVar7 - fVar8));
      if ((fVar7 <= (float10)-1.2217305) || ((float10)1.2217305 <= fVar7)) {
        FUN_00c52700(param_1[0x4b5],0);
      }
      else {
        FUN_00c52700(param_1[0x4b5],1);
      }
    }
    break;
  case 2:
    FUN_00aa4080(0x40,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x44340000;
    param_1[0x24a] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    param_1[0x24a] = (int)((float)param_1[0x24a] + (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00c5ad80(param_1[0x4b5]);
      param_1[0x4b5] = -1;
    }
    if ((param_1[0x4b5] != -1) && (param_1[0x2a1] != 0)) {
      fVar7 = (float10)FUN_00ddba30((float)param_1[0x25] + 2.0943952);
      fVar8 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x50);
      fVar7 = (float10)FUN_00ddba30((float)((float10)(float)fVar7 - fVar8));
      if ((fVar7 <= (float10)-1.2217305) || ((float10)1.2217305 <= fVar7)) {
        iVar6 = param_1[0x4b5];
        uVar4 = 0;
      }
      else {
        iVar6 = param_1[0x4b5];
        uVar4 = 1;
      }
      FUN_00c52700(iVar6,uVar4);
    }
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x249] = 0x3f800000;
      iVar6 = FUN_00ac4780();
      if (iVar6 < 2) {
        param_1[0x249] = 0x40000000;
      }
      fVar1 = (float)param_1[0x5fc];
      param_1[0x21c] = param_1[0x21c] + 1;
      param_1[0x5fc] = (int)(fVar1 - 1.0);
      fVar2 = (float)param_1[0x24a];
      if (!NAN(fVar2) && 180.0 < fVar2 != (fVar2 == 180.0)) {
        param_1[0x21c] = param_1[0x21c] + 1;
        param_1[0x5fc] = (int)((fVar1 - 1.0) - 1.0);
      }
      if (param_1[0x21d] <= param_1[0x21c]) {
        *(byte *)((int)param_1 + 0x17eb) =
             *(byte *)((int)param_1 + 0x17eb) | *(byte *)((int)param_1 + 0x17ea);
        param_1[0x21c] = param_1[0x21d];
      }
      if ((float)param_1[0x5fc] <= 0.0) {
        *(byte *)((int)param_1 + 0x17eb) =
             *(byte *)((int)param_1 + 0x17eb) | *(byte *)((int)param_1 + 0x17ea);
      }
      if ((*(byte *)((int)param_1 + 0x17ea) & *(byte *)((int)param_1 + 0x17eb)) != 0) {
        param_1[0x187] = 4;
        param_1[0x5fd] = 0;
      }
    }
    break;
  case 4:
    FUN_00aa4080(0x41,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c5ad80(param_1[0x4b5]);
    param_1[0x4b5] = -1;
    FUN_00eaa6e0(0x42700000,0);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      iVar6 = param_1[0x128];
      param_1[0x59e] = 0x42f00000;
      if (iVar6 == 1) {
        param_1[0x59e] = 0x42700000;
      }
      if (iVar6 == 2) {
        param_1[0x59e] = 0x41f00000;
      }
      if (iVar6 == 3) {
        param_1[0x59e] = 0x41f00000;
        FUN_005b5560();
      }
      else {
        FUN_005b5560();
      }
    }
  }
  iVar6 = FUN_00a8c760(0);
  if (iVar6 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 005C05A0  FUN_005c05a0  size=74  [between]
void __fastcall FUN_005c05a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005C05F0  FUN_005c05f0  size=66  [between]
void __fastcall FUN_005c05f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_005b5560();
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FUN_005bcf80();
  if (iVar1 != 0) {
    return;
  }
  FUN_005bc940();
  return;
}

// 005C0640  FUN_005c0640  size=66  [between]
void __fastcall FUN_005c0640(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_005b5560();
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FUN_005bcf80();
  if (iVar1 != 0) {
    return;
  }
  FUN_005bc940();
  return;
}

// 005C0690  FUN_005c0690  size=74  [between]
void __fastcall FUN_005c0690(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005C06E0  FUN_005c06e0  size=74  [between]
void __fastcall FUN_005c06e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005C0730  FUN_005c0730  size=74  [between]
void __fastcall FUN_005c0730(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005C0780  FUN_005c0780  size=102  [between]
void __fastcall FUN_005c0780(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x128] == 0) {
    uVar3 = 0x3e;
  }
  else {
    uVar3 = 0xf;
  }
  iVar1 = FUN_00a8c760(uVar3);
  if ((iVar1 == 0) || ((iVar1 = FUN_005bcf80(), iVar1 == 0 && (iVar1 = FUN_005bc940(), iVar1 == 0)))
     ) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    iVar2 = FUN_00a8cac0();
    if ((iVar2 == 3) && (iVar1 != 0)) {
      FUN_00a8cb60(4);
    }
  }
  return;
}

// 005C07F0  FUN_005c07f0  size=74  [between]
void __fastcall FUN_005c07f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005C0840  FUN_005c0840  size=74  [between]
void __fastcall FUN_005c0840(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_005bcf80();
      if (iVar1 == 0) {
        FUN_005bc940();
        return;
      }
    }
  }
  return;
}

// 005C0890  FUN_005c0890  size=1095  [between]
/* WARNING: Removing unreachable block (ram,0x005c09fa) */
/* WARNING: Removing unreachable block (ram,0x005c0b7d) */

void FUN_005c0890(undefined4 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float unaff_ESI;
  float unaff_retaddr;
  float **ppfVar4;
  float **ppfVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float *pfStack_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  float local_8;
  undefined4 local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0.0;
  local_4 = 0;
  pfStack_64 = (float *)0x5c08af;
  pfStack_64 = (float *)FUN_00a1d5c0();
  FUN_0041c8e0(8);
  local_38 = *param_2;
  local_34 = param_2[1];
  local_30 = param_2[2];
  if ((int)local_8 < local_c) {
    pfVar7 = (float *)(local_10 + (int)local_8 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_38;
      pfVar7[1] = local_34;
      pfVar7[2] = local_30;
    }
    local_8 = (float)((int)local_8 + 1);
  }
  local_44 = *param_4;
  local_40 = param_4[1];
  local_3c = param_4[2];
  local_50 = *param_3;
  local_4c = param_3[1];
  local_48 = param_3[2];
  local_20 = (local_44 - local_38) * 0.16666667;
  local_1c = (local_40 - local_34) * 0.16666667;
  local_18 = (local_3c - local_30) * 0.16666667;
  local_2c = local_50 - local_20;
  local_28 = local_4c - local_1c;
  local_24 = local_48 - local_18;
  local_5c = local_2c - local_38;
  local_58 = local_28 - local_34;
  local_54 = local_24 - local_30;
  fVar6 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    pfStack_64 = (float *)&DAT_0163d0ac;
    FUN_00dd5650();
    local_5c = 0.0;
    local_58 = 1.0;
    local_54 = 0.0;
  }
  pfVar7 = &local_5c;
  pfStack_64 = pfVar7;
  D3DXVec3Normalize();
  iVar2 = local_10;
  if (local_10 < local_14) {
    pfVar1 = (float *)((int)local_18 + local_10 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = (float)pfStack_64 * unaff_retaddr + local_40;
      pfVar1[1] = unaff_ESI * unaff_retaddr + local_3c;
      pfVar1[2] = local_5c * unaff_retaddr + local_38;
    }
    iVar2 = local_10 + 1;
    if (iVar2 < local_14) {
      pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_34;
        pfVar1[1] = local_30;
        pfVar1[2] = local_2c;
      }
      iVar2 = local_10 + 2;
      if (iVar2 < local_14) {
        pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_58;
          pfVar1[1] = local_54;
          pfVar1[2] = local_50;
        }
        iVar2 = local_10 + 3;
      }
    }
  }
  local_10 = iVar2;
  local_34 = local_28 + local_58;
  local_30 = local_24 + local_54;
  local_2c = local_20 + local_50;
  pfStack_64 = (float *)(local_4c - local_34);
  local_5c = local_44 - local_2c;
  fVar6 = local_5c * local_5c +
          (local_48 - local_30) * (local_48 - local_30) + (float)pfStack_64 * (float)pfStack_64;
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    pfStack_64 = (float *)0x0;
    local_5c = 0.0;
  }
  ppfVar4 = &pfStack_64;
  ppfVar5 = ppfVar4;
  D3DXVec3Normalize(ppfVar4);
  fVar6 = (float)ppfVar5 * local_8;
  fVar8 = (float)pfVar7 * local_8;
  pfStack_64 = (float *)((float)pfStack_64 * local_8);
  fVar3 = local_18;
  if ((int)local_18 < (int)local_1c) {
    pfVar7 = (float *)((int)local_20 + (int)local_18 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_3c;
      pfVar7[1] = local_38;
      pfVar7[2] = local_34;
    }
    fVar3 = (float)((int)local_18 + 1);
    if ((int)fVar3 < (int)local_1c) {
      pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
      if (pfVar7 != (float *)0x0) {
        *pfVar7 = local_54 - fVar6;
        pfVar7[1] = local_50 - fVar8;
        pfVar7[2] = local_4c - (float)pfStack_64;
      }
      fVar3 = (float)((int)local_18 + 2);
      if ((int)fVar3 < (int)local_1c) {
        pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
        if (pfVar7 == (float *)0x0) {
          fVar3 = (float)((int)local_18 + 3);
        }
        else {
          *pfVar7 = local_54;
          pfVar7[1] = local_50;
          pfVar7[2] = local_4c;
          fVar3 = (float)((int)local_18 + 3);
        }
      }
    }
  }
  local_18 = fVar3;
  FUN_00a5e090(&local_24);
  if ((local_20 != 0.0) && (local_18 = 0.0, local_14 != 0)) {
    FUN_00dd48d0(local_20,0,ppfVar4,fVar6,fVar8);
  }
  return;
}

// 005C0CE0  FUN_005c0ce0  size=125  [between]
void FUN_005c0ce0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_1,uVar1,uVar2);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = param_2[2];
  local_34 = param_2[3];
  FUN_00a8c930(0x20700,local_160);
  return;
}

// 005C0D60  FUN_005c0d60  size=3922  [between]
void __fastcall FUN_005c0d60(int *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  undefined *puVar11;
  undefined4 uVar12;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  int *local_a4;
  undefined1 auStack_a0 [80];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  float fStack_40;
  int iStack_3c;
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  piVar8 = (int *)0x0;
  local_a4 = (int *)0x0;
  iVar5 = FUN_00a81330();
  piVar4 = local_a4;
  if ((iVar5 != 0) && (piVar6 = (int *)FUN_00a7c8a0(), piVar4 = piVar8, piVar6 != (int *)0x0)) {
    puVar11 = &DAT_01be9db8;
    (**(code **)(*piVar6 + 4))(&DAT_01be9db8);
    iVar5 = FUN_00dd6d80(puVar11);
    piVar8 = (int *)(-(uint)(iVar5 != 0) & (uint)piVar6);
    piVar4 = piVar8;
  }
  local_a4 = piVar4;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x17a,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    FUN_005b51b0(0x1c3,0x8100000);
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
    FUN_005adda0(0);
    FUN_0040b190();
    iStack_50 = param_1[0x14];
    iStack_4c = param_1[0x15];
    iStack_48 = param_1[0x16];
    iStack_44 = param_1[0x24];
    fStack_40 = (float)param_1[0x25];
    iStack_3c = param_1[0x26];
    fVar10 = (float10)FUN_00ddba30(fStack_40 + 3.1415927);
    fStack_40 = (float)fVar10;
    iVar5 = FUN_00a82090("Ars Gareki",0xf0500,auStack_a0);
    if (iVar5 != 0) {
      FUN_005add70(iVar5,0);
      iVar5 = FUN_005add40(0);
      *(uint *)(iVar5 + 0x364) = *(uint *)(iVar5 + 0x364) & 0xfffffffd;
      uVar12 = 0;
      FUN_005add40(0);
      cModelBase::setRootPartsNo(uVar12);
    }
    FUN_005adda0(1);
    FUN_0040b190();
    iStack_50 = param_1[0x14];
    iStack_4c = param_1[0x15];
    iStack_48 = param_1[0x16];
    iStack_44 = param_1[0x24];
    fStack_40 = (float)param_1[0x25];
    iStack_3c = param_1[0x26];
    fVar10 = (float10)FUN_00ddba30(fStack_40 + 3.1415927);
    fStack_40 = (float)fVar10;
    iVar5 = FUN_00a82090("Ars Gareki",0xf0501,auStack_a0);
    if (iVar5 != 0) {
      FUN_005add70(iVar5,1);
      iVar5 = FUN_005add40(1);
      *(uint *)(iVar5 + 0x364) = *(uint *)(iVar5 + 0x364) & 0xfffffffd;
      uVar12 = 0;
      FUN_005add40(1);
      cModelBase::setRootPartsNo(uVar12);
    }
    FUN_005adda0(2);
    FUN_0040b190();
    iStack_50 = param_1[0x14];
    iStack_4c = param_1[0x15];
    iStack_48 = param_1[0x16];
    iStack_44 = param_1[0x24];
    fStack_40 = (float)param_1[0x25];
    iStack_3c = param_1[0x26];
    fVar10 = (float10)FUN_00ddba30(fStack_40 + 3.1415927);
    fStack_40 = (float)fVar10;
    iVar5 = FUN_00a82090("Ars Gareki",0xf0502,auStack_a0);
    if (iVar5 != 0) {
      FUN_005add70(iVar5,2);
      iVar5 = FUN_005add40(2);
      *(uint *)(iVar5 + 0x364) = *(uint *)(iVar5 + 0x364) & 0xfffffffd;
      uVar12 = 0;
      FUN_005add40(2);
      cModelBase::setRootPartsNo(uVar12);
    }
    FUN_005adda0(3);
    FUN_0040b190();
    iStack_50 = param_1[0x14];
    iStack_4c = param_1[0x15];
    iStack_48 = param_1[0x16];
    iStack_44 = param_1[0x24];
    fStack_40 = (float)param_1[0x25];
    iStack_3c = param_1[0x26];
    fVar10 = (float10)FUN_00ddba30(fStack_40 + 3.1415927);
    fStack_40 = (float)fVar10;
    iVar5 = FUN_00a82090("Ars Gareki",0xf0503,auStack_a0);
    if (iVar5 != 0) {
      FUN_005add70(iVar5,3);
      iVar5 = FUN_005add40(3);
      *(uint *)(iVar5 + 0x364) = *(uint *)(iVar5 + 0x364) & 0xfffffffd;
      uVar12 = 0;
      FUN_005add40(3);
      cModelBase::setRootPartsNo(uVar12);
    }
    FUN_005adda0(4);
    FUN_0040b190();
    iStack_50 = param_1[0x14];
    iStack_4c = param_1[0x15];
    iStack_48 = param_1[0x16];
    iStack_44 = param_1[0x24];
    fStack_40 = (float)param_1[0x25];
    iStack_3c = param_1[0x26];
    fVar10 = (float10)FUN_00ddba30(fStack_40 + 3.1415927);
    fStack_40 = (float)fVar10;
    iVar5 = FUN_00a82090("Ars Gareki",0xf0504,auStack_a0);
    if (iVar5 != 0) {
      FUN_005add70(iVar5,4);
      iVar5 = FUN_005add40(4);
      *(uint *)(iVar5 + 0x364) = *(uint *)(iVar5 + 0x364) & 0xfffffffd;
      uVar12 = 0;
      FUN_005add40(4);
      cModelBase::setRootPartsNo(uVar12);
    }
    FUN_005adef0(&DAT_01643384);
    FUN_00951930();
    if ((char)param_1[0x5a6] == '\x01') {
      param_1[0x5a5] = 0;
    }
    iVar5 = FUN_005ab010();
    if (iVar5 != 0) {
      iVar5 = FUN_005ab010();
      *(undefined4 *)(iVar5 + 0x768) = 0;
      FUN_005ab010();
      FUN_00a8e760();
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(1);
    break;
  case 2:
    FUN_00aa4080(0x17b,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005adef0(&DAT_0164337c);
    FUN_005b51b0(0x1c4,0x8100000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar5 = FUN_00a8c760(10);
    if (iVar5 != 0) {
      iVar5 = *param_1;
      uVar12 = FUN_00fdbc60(1);
      (**(code **)(iVar5 + 0x30c))(uVar12);
    }
    FUN_005ac920(1);
    break;
  case 4:
    FUN_00aa4080(0x17c,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005adef0(&DAT_01643374);
    FUN_005b51b0(0x1c5,0x8100000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(1);
    break;
  case 6:
    FUN_00aa4080(0x17d,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005adef0(&DAT_0164336c);
    FUN_005b51b0(0x1c6,0x8100000);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_005ac920(5);
    break;
  case 8:
    FUN_00aa4080(0x17e,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005adef0(&DAT_01643364);
    FUN_005b51b0(0x1c7,0x8100000);
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar5 = FUN_00a81330();
    if ((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      uVar12 = 0;
      FUN_005add40(4);
      iVar5 = FUN_00a8c760(uVar12);
      if (iVar5 != 0) {
        FUN_005ade00(0);
        iVar5 = FUN_005add40(4);
        fStack_c4 = 0.0;
        if (0 < *(short *)(iVar5 + 0x324)) {
          fStack_c8 = 0.0;
          do {
            iVar9 = *(int *)(iVar5 + 800) + (int)fStack_c8;
            iVar7 = *(int *)(*(int *)(iVar9 + 0x60) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_01640d88), iVar7 != 0)) {
              puVar1 = (uint *)(iVar9 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            fStack_c8 = (float)((int)fStack_c8 + 0x70);
            fStack_c4 = (float)((int)fStack_c4 + 1);
            piVar8 = local_a4;
          } while ((int)fStack_c4 < (int)*(short *)(iVar5 + 0x324));
        }
        uVar12 = 0;
        FUN_005add40(4);
        iVar5 = FUN_00a12210(uVar12);
        iStack_c0 = *(int *)(iVar5 + 0x40);
        uStack_bc = *(undefined4 *)(iVar5 + 0x44);
        uStack_b8 = *(undefined4 *)(iVar5 + 0x48);
        uStack_b4 = *(undefined4 *)(iVar5 + 0x4c);
        FUN_005c0ce0(0x59,&iStack_c0,0);
      }
      uVar12 = 1;
      FUN_005add40(4);
      iVar5 = FUN_00a8c760(uVar12);
      if (iVar5 != 0) {
        FUN_005ade00(1);
        iVar5 = FUN_005add40(4);
        fStack_c4 = 0.0;
        if (0 < *(short *)(iVar5 + 0x324)) {
          fStack_c8 = 0.0;
          do {
            iVar9 = *(int *)(iVar5 + 800) + (int)fStack_c8;
            iVar7 = *(int *)(*(int *)(iVar9 + 0x60) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_01640d84), iVar7 != 0)) {
              puVar1 = (uint *)(iVar9 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            fStack_c8 = (float)((int)fStack_c8 + 0x70);
            fStack_c4 = (float)((int)fStack_c4 + 1);
          } while ((int)fStack_c4 < (int)*(short *)(iVar5 + 0x324));
        }
        uVar12 = 1;
        FUN_005add40(4);
        iVar5 = FUN_00a12210(uVar12);
        iStack_c0 = *(int *)(iVar5 + 0x40);
        uStack_bc = *(undefined4 *)(iVar5 + 0x44);
        uStack_b8 = *(undefined4 *)(iVar5 + 0x48);
        uStack_b4 = *(undefined4 *)(iVar5 + 0x4c);
        FUN_005c0ce0(0x59,&iStack_c0,0);
        piVar8 = local_a4;
      }
      uVar12 = 2;
      FUN_005add40(4);
      iVar5 = FUN_00a8c760(uVar12);
      if (iVar5 != 0) {
        FUN_005ade00(2);
        iVar5 = FUN_005add40(4);
        fStack_c4 = 0.0;
        if (0 < *(short *)(iVar5 + 0x324)) {
          fStack_c8 = 0.0;
          do {
            iVar9 = *(int *)(iVar5 + 800) + (int)fStack_c8;
            iVar7 = *(int *)(*(int *)(iVar9 + 0x60) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_01643360), iVar7 != 0)) {
              puVar1 = (uint *)(iVar9 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            fStack_c8 = (float)((int)fStack_c8 + 0x70);
            fStack_c4 = (float)((int)fStack_c4 + 1);
          } while ((int)fStack_c4 < (int)*(short *)(iVar5 + 0x324));
        }
        uVar12 = 2;
        FUN_005add40(4);
        iVar5 = FUN_00a12210(uVar12);
        iStack_c0 = *(int *)(iVar5 + 0x40);
        uStack_bc = *(undefined4 *)(iVar5 + 0x44);
        uStack_b8 = *(undefined4 *)(iVar5 + 0x48);
        uStack_b4 = *(undefined4 *)(iVar5 + 0x4c);
        FUN_005c0ce0(0x59,&iStack_c0,0);
        piVar8 = local_a4;
      }
      uVar12 = 3;
      FUN_005add40(4);
      iVar5 = FUN_00a8c760(uVar12);
      if (iVar5 != 0) {
        FUN_005ade00(3);
        iVar5 = FUN_005add40(4);
        fStack_c4 = 0.0;
        if (0 < *(short *)(iVar5 + 0x324)) {
          fStack_c8 = 0.0;
          do {
            iVar9 = *(int *)(iVar5 + 800) + (int)fStack_c8;
            iVar7 = *(int *)(*(int *)(iVar9 + 0x60) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_0164335c), iVar7 != 0)) {
              puVar1 = (uint *)(iVar9 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            fStack_c8 = (float)((int)fStack_c8 + 0x70);
            fStack_c4 = (float)((int)fStack_c4 + 1);
          } while ((int)fStack_c4 < (int)*(short *)(iVar5 + 0x324));
        }
LAB_005c17c3:
        uVar12 = 3;
        FUN_005add40(4);
        iVar5 = FUN_00a12210(uVar12);
        iStack_c0 = *(int *)(iVar5 + 0x40);
        uStack_bc = *(undefined4 *)(iVar5 + 0x44);
        uStack_b8 = *(undefined4 *)(iVar5 + 0x48);
        uStack_b4 = *(undefined4 *)(iVar5 + 0x4c);
        FUN_005c0ce0(0x59,&iStack_c0,0);
        piVar8 = local_a4;
      }
    }
LAB_005c1805:
    FUN_005ac920(1);
    break;
  case 10:
    FUN_00aa4080(0x17f,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_005adef0(&DAT_01643354);
    FUN_005b51b0(0x1c8,0x8100000);
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_005adda0(0);
      FUN_005adda0(1);
      FUN_005adda0(2);
      FUN_005adda0(3);
      FUN_005adda0(4);
      iVar5 = FUN_005ab010();
      if (iVar5 != 0) {
        iVar5 = FUN_005ab010();
        *(undefined4 *)(iVar5 + 0x768) = 1;
        FUN_005ab010();
        FUN_00a8e760();
      }
      (**(code **)(*param_1 + 0x34c))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
    }
    iVar5 = FUN_00a81330();
    if ((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      uVar12 = 0;
      FUN_005add40(4);
      iVar5 = FUN_00a8c760(uVar12);
      if (iVar5 != 0) {
        FUN_005ade00(0);
        iVar5 = FUN_005add40(4);
        fStack_c4 = 0.0;
        if (0 < *(short *)(iVar5 + 0x324)) {
          fStack_c8 = 0.0;
          do {
            iVar9 = *(int *)(iVar5 + 800) + (int)fStack_c8;
            iVar7 = *(int *)(*(int *)(iVar9 + 0x60) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_01640d88), iVar7 != 0)) {
              puVar1 = (uint *)(iVar9 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            fStack_c8 = (float)((int)fStack_c8 + 0x70);
            fStack_c4 = (float)((int)fStack_c4 + 1);
          } while ((int)fStack_c4 < (int)*(short *)(iVar5 + 0x324));
        }
        uVar12 = 0;
        FUN_005add40(4);
        iVar5 = FUN_00a12210(uVar12);
        iStack_c0 = *(int *)(iVar5 + 0x40);
        uStack_bc = *(undefined4 *)(iVar5 + 0x44);
        uStack_b8 = *(undefined4 *)(iVar5 + 0x48);
        uStack_b4 = *(undefined4 *)(iVar5 + 0x4c);
        FUN_005c0ce0(0x59,&iStack_c0,0);
        piVar8 = local_a4;
      }
      uVar12 = 1;
      FUN_005add40(4);
      iVar5 = FUN_00a8c760(uVar12);
      if (iVar5 != 0) {
        FUN_005ade00(1);
        iVar5 = FUN_005add40(4);
        fStack_c4 = 0.0;
        if (0 < *(short *)(iVar5 + 0x324)) {
          fStack_c8 = 0.0;
          do {
            iVar9 = *(int *)(iVar5 + 800) + (int)fStack_c8;
            iVar7 = *(int *)(*(int *)(iVar9 + 0x60) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_01640d84), iVar7 != 0)) {
              puVar1 = (uint *)(iVar9 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            fStack_c8 = (float)((int)fStack_c8 + 0x70);
            fStack_c4 = (float)((int)fStack_c4 + 1);
          } while ((int)fStack_c4 < (int)*(short *)(iVar5 + 0x324));
        }
        uVar12 = 1;
        FUN_005add40(4);
        iVar5 = FUN_00a12210(uVar12);
        iStack_c0 = *(int *)(iVar5 + 0x40);
        uStack_bc = *(undefined4 *)(iVar5 + 0x44);
        uStack_b8 = *(undefined4 *)(iVar5 + 0x48);
        uStack_b4 = *(undefined4 *)(iVar5 + 0x4c);
        FUN_005c0ce0(0x59,&iStack_c0,0);
        piVar8 = local_a4;
      }
      uVar12 = 2;
      FUN_005add40(4);
      iVar5 = FUN_00a8c760(uVar12);
      if (iVar5 != 0) {
        FUN_005ade00(2);
        iVar5 = FUN_005add40(4);
        fStack_c4 = 0.0;
        if (0 < *(short *)(iVar5 + 0x324)) {
          fStack_c8 = 0.0;
          do {
            iVar9 = *(int *)(iVar5 + 800) + (int)fStack_c8;
            iVar7 = *(int *)(*(int *)(iVar9 + 0x60) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_01643360), iVar7 != 0)) {
              puVar1 = (uint *)(iVar9 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            fStack_c8 = (float)((int)fStack_c8 + 0x70);
            fStack_c4 = (float)((int)fStack_c4 + 1);
          } while ((int)fStack_c4 < (int)*(short *)(iVar5 + 0x324));
        }
        uVar12 = 2;
        FUN_005add40(4);
        iVar5 = FUN_00a12210(uVar12);
        iStack_c0 = *(int *)(iVar5 + 0x40);
        uStack_bc = *(undefined4 *)(iVar5 + 0x44);
        uStack_b8 = *(undefined4 *)(iVar5 + 0x48);
        uStack_b4 = *(undefined4 *)(iVar5 + 0x4c);
        FUN_005c0ce0(0x59,&iStack_c0,0);
        piVar8 = local_a4;
      }
      uVar12 = 3;
      FUN_005add40(4);
      iVar5 = FUN_00a8c760(uVar12);
      if (iVar5 == 0) goto LAB_005c1805;
      FUN_005ade00(3);
      iVar5 = FUN_005add40(4);
      fStack_c4 = 0.0;
      if (0 < *(short *)(iVar5 + 0x324)) {
        fStack_c8 = 0.0;
        do {
          iVar9 = *(int *)(iVar5 + 800) + (int)fStack_c8;
          iVar7 = *(int *)(*(int *)(iVar9 + 0x60) + 0x40);
          if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_0164335c), iVar7 != 0)) {
            puVar1 = (uint *)(iVar9 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          fStack_c8 = (float)((int)fStack_c8 + 0x70);
          fStack_c4 = (float)((int)fStack_c4 + 1);
        } while ((int)fStack_c4 < (int)*(short *)(iVar5 + 0x324));
      }
      goto LAB_005c17c3;
    }
    goto LAB_005c1805;
  default:
    break;
  }
  if (((piVar8 != (int *)0x0) && (iVar5 = FUN_00a8c760(0x3a), iVar5 == 0)) &&
     (iVar5 = (**(code **)(*piVar8 + 0x32c))(), iVar5 == 0)) {
    FUN_00a8ce90(&iStack_c0,auStack_20);
    fVar10 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    piVar8[0x25] = (int)(float)fVar10;
    D3DXVec3TransformNormal(&iStack_c0,&iStack_c0,param_1 + 4);
    fVar2 = (float)param_1[0x10];
    fVar3 = (float)param_1[0x11];
    piVar8[0x16] = (int)((float)param_1[0x12] + fStack_c4);
    piVar8[0x14] = (int)(fVar2 + fStack_cc);
    piVar8[0x15] = (int)(fVar3 + fStack_c8);
    piVar8[0x17] = iStack_c0;
    switchD_0080dbae::default();
  }
  return;
}

// 005C1D00  FUN_005c1d00  size=74  [between]
void __thiscall FUN_005c1d00(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 005C1D50  FUN_005c1d50  size=938  [between]
void __fastcall FUN_005c1d50(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  float10 fVar7;
  undefined *puVar8;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float afStack_20 [7];
  
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    puVar8 = &DAT_01b351c0;
    (**(code **)(*piVar5 + 4))(&DAT_01b351c0);
    iVar4 = FUN_00dd6d80(puVar8);
    if (iVar4 != 0) {
      iVar4 = FUN_00a81330();
      if ((iVar4 == 0) || (piVar5 = (int *)FUN_00a7c8a0(), piVar5 == (int *)0x0)) {
        uVar6 = 0;
      }
      else {
        puVar8 = &DAT_01b351c0;
        (**(code **)(*piVar5 + 4))(&DAT_01b351c0);
        iVar4 = FUN_00dd6d80(puVar8);
        uVar6 = -(uint)(iVar4 != 0) & (uint)piVar5;
      }
      if (1 < *(byte *)(uVar6 + 0x1698)) goto LAB_005c1ddd;
    }
  }
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    puVar8 = &DAT_01b351c0;
    (**(code **)(*piVar5 + 4))(&DAT_01b351c0);
    iVar4 = FUN_00dd6d80(puVar8);
    if (iVar4 != 0) {
      iVar4 = FUN_00a81330();
      if ((iVar4 == 0) || (piVar5 = (int *)FUN_00a7c8a0(), piVar5 == (int *)0x0)) {
        uVar6 = 0;
      }
      else {
        puVar8 = &DAT_01b351c0;
        (**(code **)(*piVar5 + 4))(&DAT_01b351c0);
        iVar4 = FUN_00dd6d80(puVar8);
        uVar6 = -(uint)(iVar4 != 0) & (uint)piVar5;
      }
      iVar4 = param_1[0x129];
      if (iVar4 == 0) {
        iVar4 = *(int *)(uVar6 + 0x16a4);
      }
      else if (iVar4 == 1) {
        iVar4 = *(int *)(uVar6 + 0x16a8);
      }
      else {
        if (iVar4 != 2) goto LAB_005c1eac;
        iVar4 = *(int *)(uVar6 + 0x16ac);
      }
      if (iVar4 != 0) {
LAB_005c1ddd:
        param_1[0x186] = 0;
        param_1[0x2ad] = 0x42700000;
        param_1[0x2ac] = 1;
        return;
      }
    }
  }
LAB_005c1eac:
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    param_1[0x248] = 0x43d20000;
    param_1[0x249] = 0;
    param_1[0x2b0] = 0;
    param_1[0x2b1] = 0;
    param_1[0x2b2] = 0x3de147ae;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  fVar2 = (float)param_1[0x249];
  param_1[0x249] = (int)(fVar2 - (float)param_1[0x244]);
  if (fVar2 - (float)param_1[0x244] < 0.0) {
    param_1[0x249] = 0x41a00000;
    if (fVar1 - (float)param_1[0x244] < 300.0) {
      param_1[0x249] = 0x41200000;
    }
    FUN_005bdaf0();
    sVar3 = FUN_00dde2d0(0,1);
    fVar1 = (float)param_1[0x25];
    if (sVar3 == 0) {
      sVar3 = FUN_00dde2d0(5,0xf);
      fStack_24 = (float)(int)sVar3;
      fVar7 = (float10)FUN_00ddba30(fVar1 - (float)(int)fStack_24 * 0.017453292);
      param_1[0x25] = (int)(float)fVar7;
      fStack_28 = fVar1;
    }
    else {
      sVar3 = FUN_00dde2d0(5,0xf);
      fVar7 = (float10)FUN_00ddba30((float)(int)sVar3 * 0.017453292 + fVar1);
      param_1[0x25] = (int)(float)fVar7;
      fStack_28 = (float)(int)sVar3;
      fStack_24 = fVar1;
    }
  }
  if (((float)param_1[0x248] < 0.0) || (iVar4 = FUN_005b76f0(), iVar4 == 0)) {
    param_1[0x186] = 0;
    param_1[0x2ad] = 0x42700000;
    param_1[0x2ac] = 1;
  }
  if ((float)param_1[0x248] < 300.0) {
    param_1[0x2b0] = 0;
    param_1[0x2b1] = 0;
    param_1[0x2b2] = 0x3e6147ae;
  }
  D3DXVec3TransformNormal(afStack_20,param_1 + 0x2b0,param_1 + 4);
  fVar1 = (float)param_1[0x244];
  param_1[0x14] = (int)((float)param_1[0x14] + fStack_2c * fVar1);
  param_1[0x15] = (int)(fStack_28 * fVar1 + (float)param_1[0x15]);
  param_1[0x16] = (int)(fStack_24 * fVar1 + (float)param_1[0x16]);
  param_1[0x17] = (int)(afStack_20[0] * fVar1 + (float)param_1[0x17]);
  iVar4 = FUN_005b7560();
  FUN_00a8e880(iVar4 + 0x40);
  iVar4 = *param_1;
  fVar7 = (float10)FUN_00fdc1f0(0x393702d3,(float)param_1[0x244] * 0.0034906585,0);
  (**(code **)(iVar4 + 0x308))((float)fVar7);
  return;
}

// 005C2100  FUN_005c2100  size=800  [between]
void __fastcall FUN_005c2100(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  float unaff_ESI;
  float10 fVar8;
  undefined *puVar9;
  float fStack_28;
  float fStack_24;
  float afStack_20 [7];
  
  iVar5 = FUN_00a81330();
  if ((iVar5 != 0) && (piVar6 = (int *)FUN_00a7c8a0(), piVar6 != (int *)0x0)) {
    puVar9 = &DAT_01b351c0;
    (**(code **)(*piVar6 + 4))(&DAT_01b351c0);
    iVar5 = FUN_00dd6d80(puVar9);
    if (iVar5 != 0) {
      iVar5 = FUN_00a81330();
      if ((iVar5 == 0) || (piVar6 = (int *)FUN_00a7c8a0(), piVar6 == (int *)0x0)) {
        uVar7 = 0;
      }
      else {
        puVar9 = &DAT_01b351c0;
        (**(code **)(*piVar6 + 4))(&DAT_01b351c0);
        iVar5 = FUN_00dd6d80(puVar9);
        uVar7 = -(uint)(iVar5 != 0) & (uint)piVar6;
      }
      if (1 < *(byte *)(uVar7 + 0x16a0)) {
        *(undefined4 *)(param_1 + 0x618) = 0;
        *(undefined4 *)(param_1 + 0xab4) = 0x42700000;
        *(undefined4 *)(param_1 + 0xab0) = 1;
        return;
      }
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x920) = 0x429c0000;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x928) = 0;
    if (*(int *)(param_1 + 0xad8) == 0) {
      *(undefined4 *)(param_1 + 0x920) = 0x42400000;
    }
    *(undefined4 *)(param_1 + 0xac0) = 0;
    *(undefined4 *)(param_1 + 0xac4) = 0;
    *(undefined4 *)(param_1 + 0xac8) = 0x3ec7ae14;
    *(undefined4 *)(param_1 + 0x940) = 2;
    *(undefined4 *)(param_1 + 0x944) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x924) = fVar1;
  *(float *)(param_1 + 0x928) = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910);
  if (fVar1 < 0.0) {
    *(undefined4 *)(param_1 + 0x924) = 0x40a00000;
    if ((*(byte *)(param_1 + 0x944) & 1) == 0) {
      FUN_005bdc20();
    }
    else {
      FUN_005bdaf0();
    }
    *(int *)(param_1 + 0x944) = *(int *)(param_1 + 0x944) + 1;
  }
  if (*(float *)(param_1 + 0x928) < 0.0) {
    fVar8 = (float10)FUN_00dde300(0,0x40e00000);
    *(float *)(param_1 + 0x928) = (float)(fVar8 + (float10)7.0);
    sVar3 = FUN_00dde2d0(0,1);
    fVar1 = *(float *)(param_1 + 0x94);
    if (sVar3 == 0) {
      sVar4 = FUN_00dde2d0(10,0x14);
      fStack_24 = (float)(int)sVar4;
      fVar2 = fVar1 - (float)(int)fStack_24 * 0.017453292;
      fStack_28 = fVar1;
    }
    else {
      sVar4 = FUN_00dde2d0(10,0x14);
      fVar2 = (float)(int)sVar4 * 0.017453292 + fVar1;
      fStack_28 = (float)(int)sVar4;
      fStack_24 = fVar1;
    }
    fVar8 = (float10)FUN_00ddba30(fVar2);
    *(float *)(param_1 + 0x94) = (float)fVar8;
    piVar6 = (int *)(param_1 + 0x940);
    *piVar6 = *piVar6 + -1;
    if ((*piVar6 == 0) && (*(int *)(param_1 + 0xad8) != 0)) {
      sVar4 = FUN_00dde2d0(0x2d,0x50);
      fStack_24 = (float)(int)sVar4;
      fVar1 = (float)(int)fStack_24 * 0.017453292;
      if (sVar3 != 0) {
        fVar1 = fVar1 * -1.0;
      }
      FUN_005bdd30(fVar1);
      *(undefined4 *)(param_1 + 0xad8) = 0;
    }
  }
  if ((*(float *)(param_1 + 0x920) < 0.0) || (iVar5 = FUN_005b76f0(), iVar5 == 0)) {
    *(undefined4 *)(param_1 + 0x618) = 0;
    *(undefined4 *)(param_1 + 0xab4) = 0x42700000;
    *(undefined4 *)(param_1 + 0xab0) = 1;
  }
  D3DXVec3TransformNormal(afStack_20,param_1 + 0xac0,param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + unaff_ESI * fVar1;
  *(float *)(param_1 + 0x54) = fStack_28 * fVar1 + *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x58) = fStack_24 * fVar1 + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x5c) = afStack_20[0] * fVar1 + *(float *)(param_1 + 0x5c);
  return;
}

// 005C2420  FUN_005c2420  size=74  [between]
void __thiscall FUN_005c2420(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 005C2470  FUN_005c2470  size=153  [between]
void __fastcall FUN_005c2470(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar2 = *(uint *)(param_1 + 0x4b0);
  if (uVar2 == 0x7c0000) {
    uVar2 = 0;
  }
  else if ((uVar2 < 0x10000) || (uVar2 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,uVar2);
  }
  uVar3 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(0,uVar1,uVar3);
  local_40 = *(undefined4 *)(param_1 + 0x40);
  local_3c = *(undefined4 *)(param_1 + 0x44);
  local_38 = *(undefined4 *)(param_1 + 0x48);
  local_34 = *(undefined4 *)(param_1 + 0x4c);
  FUN_00a8c930(uVar2,local_160);
  return;
}

// 005C2510  FUN_005c2510  size=176  [between]
void __thiscall FUN_005c2510(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar2 = *(uint *)(param_1 + 0x4b0);
  if (uVar2 == 0x7c0000) {
    uVar2 = 0;
  }
  else if ((uVar2 < 0x10000) || (uVar2 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,uVar2);
  }
  uVar3 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar3);
  if (param_4 != 0) {
    FUN_00dffb20(param_4);
  }
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  FUN_00a8c930(uVar2,local_160);
  return;
}

// 005C25C0  FUN_005c25c0  size=74  [between]
void __thiscall FUN_005c25c0(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 005C2610  FUN_005c2610  size=176  [between]
void __thiscall FUN_005c2610(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar2 = *(uint *)(param_1 + 0x4b0);
  if (uVar2 == 0x7c0000) {
    uVar2 = 0;
  }
  else if ((uVar2 < 0x10000) || (uVar2 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,uVar2);
  }
  uVar3 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar3);
  if (param_4 != 0) {
    FUN_00dffb20(param_4);
  }
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  FUN_00a8c930(uVar2,local_160);
  return;
}

// 005C26C0  FUN_005c26c0  size=889  [between]
undefined4 __fastcall FUN_005c26c0(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  float10 fVar10;
  undefined4 local_2b0;
  undefined1 local_2a0 [64];
  int local_260 [12];
  float local_230;
  undefined1 local_1c0 [176];
  undefined1 local_110 [148];
  int local_7c;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  if (param_1[0x2ac] == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x2c0);
  if (param_1[0x2c6] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar6 = param_1[0x19f];
  bVar4 = false;
  iVar7 = param_1[0x1a1] * 0x150 + iVar6;
  FUN_00445db0();
  FUN_004105d0();
  iVar5 = -1;
  bVar3 = false;
  if (iVar6 == iVar7) {
LAB_005c276c:
    if (param_1[0x2c6] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  do {
    iVar2 = *(int *)(iVar6 + 4);
    if (iVar5 <= iVar2) {
      FUN_00448f50(iVar6);
      bVar3 = true;
      iVar5 = iVar2;
    }
    iVar6 = iVar6 + 0x150;
  } while (iVar6 != iVar7);
  if (!bVar3) goto LAB_005c276c;
  FUN_0043e160(local_260);
  if ((((local_260[0] == 0) || (local_260[0] == 1)) || (local_260[0] == 2)) ||
     ((local_260[0] == 0x1b0 || (local_260[0] == 0x147)))) {
    uVar9 = 0;
    goto LAB_005c29e4;
  }
  local_2b0 = 0;
  iVar6 = FUN_00a81330();
  if (iVar6 != 0) {
    local_2b0 = FUN_00a7c8a0();
  }
  uVar8 = 1;
  fVar10 = (float10)FUN_00ddba30(local_230 - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar10;
  iVar6 = FUN_00a98220(local_110);
  FID_conflict__memcpy(local_2a0,local_1c0,0x40);
  iVar5 = FUN_00c5fb10(param_1[0x13c],local_2a0,param_1[0x2b5],param_1[700],1);
  if ((((iVar5 != 0) &&
       (iVar5 = FUN_00c5fb10(param_1[0x13c],local_2a0,param_1[0x2b6],param_1[700],1), iVar5 != 0))
      && ((iVar5 = FUN_00c5fb10(param_1[0x13c],local_2a0,param_1[0x2b7],param_1[700],1), iVar5 != 0
          && (iVar5 = FUN_00c5fb10(param_1[0x13c],local_2a0,param_1[0x2b8],param_1[700],1),
             iVar5 != 0)))) ||
     (fVar1 = (float)param_1[0x2ba], !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))) {
    param_1[0x2b9] = 1;
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
    FUN_00c5ae10(param_1[0x2b5]);
    FUN_00c5ae10(param_1[0x2b6]);
    FUN_00c5ae10(param_1[0x2b7]);
    FUN_00c5ae10(param_1[0x2b8]);
    param_1[0x2b5] = -1;
    param_1[0x2b6] = -1;
    param_1[0x2b7] = -1;
    param_1[0x2b8] = -1;
  }
  if ((iVar6 == 0) || (local_7c == 0)) {
LAB_005c299b:
    if (param_1[0x2b9] == 0) goto LAB_005c29a4;
  }
  else {
    if (param_1[0x2b9] != 0) {
      uVar8 = 0x101;
      bVar4 = true;
      goto LAB_005c299b;
    }
LAB_005c29a4:
    if (param_1[0x2ac] != 0) {
      if (local_260[0] == 0x2f) {
        uVar8 = uVar8 | 0x4000;
      }
      else {
        uVar8 = uVar8 | 0x40000;
      }
    }
  }
  (**(code **)(*param_1 + 0x198))(local_2b0,local_260,uVar8);
  uVar9 = 1;
LAB_005c29e4:
  if (((local_7c != 0) && (bVar4)) && (param_1[0x2ac] != 0)) {
    FUN_005b7cd0();
    iVar6 = FUN_00b8c080();
    if (iVar6 != 0) {
      FUN_00a8e5d0(param_1,local_110,0);
    }
  }
  if (param_1[0x2c6] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar9;
}

// 005C2A40  FUN_005c2a40  size=74  [between]
void __thiscall FUN_005c2a40(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 005C2A90  FUN_005c2a90  size=176  [between]
void __thiscall FUN_005c2a90(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar2 = *(uint *)(param_1 + 0x4b0);
  if (uVar2 == 0x7c0000) {
    uVar2 = 0;
  }
  else if ((uVar2 < 0x10000) || (uVar2 + 0xe0000000 < 0x100000)) {
    FUN_00dd5650(&DAT_0163e20c,uVar2);
  }
  uVar3 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar3);
  if (param_4 != 0) {
    FUN_00dffb20(param_4);
  }
  local_40 = *param_3;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  FUN_00a8c930(uVar2,local_160);
  return;
}

// 005C2B40  FUN_005c2b40  size=74  [between]
void __thiscall FUN_005c2b40(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 005C2B90  Em0700::startup  size=2538  [class]
undefined4 __fastcall Em0700::startup(int *param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined1 local_80 [124];
  
  iVar3 = BehaviorEmBase::startup();
  if (iVar3 != 0) {
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    iVar3 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar3 != 0) {
      if (param_1[300] == 0x2070a) {
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(0x2070a,0x20700);
      }
      param_1[0x130] = param_1[0x130] | 0x20;
      iVar3 = FUN_00c5def0(param_1[0x13c]);
      param_1[0x25c] = iVar3;
      FUN_00405230();
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      FUN_00c151f0(1,param_1[0x13c],3,&local_90,0,0x43480000,0x3f800000,2,0);
      FUN_00c57830(local_80);
      param_1[0x1b1] = 3;
      param_1[0x1b4] = 0;
      param_1[0x1b5] = 0;
      param_1[0x1b6] = 0;
      param_1[0x1b7] = local_84;
      param_1[0x1bb] = 1;
      param_1[0x1ba] = 0x3fc00000;
      param_1[0x1b9] = -1;
      param_1[0x1b8] = 5;
      iVar3 = FUN_008ec660(param_1,0x40000000,0x3f000000,0x41a00000,0x41a00000,0x78,7,0);
      param_1[0x1d9] = iVar3;
      *(float *)(iVar3 + 0xf4) = *(float *)(iVar3 + 0xf4) * 0.5;
      FUN_008e6d00();
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
      uVar4 = FUN_00a8d2a0();
      puVar5 = (undefined4 *)FUN_009f8b60();
      iVar3 = CollisionCapsule::CollisionCapsule(2,*puVar5,0);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x380) = 0;
        FUN_00d77c50(param_1[0x13c],0);
        *(undefined4 *)(iVar3 + 0x594) = 0x3ff33333;
        *(undefined4 *)(iVar3 + 0x590) = 0x3f000000;
        FUN_00d771d0(0xb);
        FUN_00a93a00(iVar3,uVar4);
        FUN_00d7b0f0();
        FUN_00d7b890();
      }
      iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = RigidBodyCollision::RigidBodyCollision();
      }
      iVar1 = param_1[0x13c];
      param_1[0x1ec] = iVar3;
      uVar4 = FUN_00de46d0("_col.hkx",0);
      uVar6 = FUN_00de4550("_col.hkx",0);
      iVar3 = FUN_008f6410(iVar1,uVar6,uVar4);
      if (iVar3 != 0) {
        FUN_008f2cd0(0);
        (**(code **)(*(int *)param_1[0x1ec] + 0x108))(8);
        puVar5 = (undefined4 *)FUN_009f8b60();
        (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar5);
        FUN_008f1600(0x80000000);
        FUN_008f1600(0x20);
        FUN_008f18c0(0x100);
      }
      uVar4 = 0;
      FUN_00a92fb0(0);
      FUN_00e08640(uVar4);
      param_1[0x59d] = 0;
      if (param_1[0x128] == 2) {
        param_1[0x59d] = 1;
      }
      if (param_1[0x128] == 3) {
        param_1[0x59d] = 1;
      }
      uVar4 = 0x20701;
      if (param_1[300] == 0x2070a) {
        uVar4 = 0x2070b;
      }
      uVar4 = FUN_00a82090("Em0700_FACE",uVar4,0);
      FUN_00a7c970(uVar4);
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        iVar3 = FUN_00a81330();
        FUN_00a8c5f0(0,param_1[0x13c],iVar3,3,3);
        FUN_00a8c5f0(1,param_1[0x13c],iVar3,4,4);
        FUN_00a8c5f0(2,param_1[0x13c],iVar3,5,5);
        if (iVar3 != 0) {
          iVar3 = FUN_00a7c8a0();
          if (iVar3 != 0) {
            iVar3 = FUN_00a7c8a0();
            *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) & 0xfffffffd;
            piVar7 = (int *)FUN_00a7c8a0();
            (**(code **)(*piVar7 + 0x1c))();
            uVar4 = 3;
            FUN_00a7c8a0(3);
            cModelBase::setRootPartsNo(uVar4);
            iVar3 = FUN_005ab010();
            uVar13 = 0x3f800000;
            iVar3 = iVar3 + 0x494;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0x3f800000;
            uVar9 = 0x3d088889;
            uVar6 = 0;
            uVar4 = 1;
            FUN_005ab010(iVar3,1,0,0x3d088889,0x3f800000,0,0,0x3f800000);
            FUN_00a9f3c0(iVar3,uVar4,uVar6,uVar9,uVar10,uVar11,uVar12,uVar13);
          }
        }
        param_1[0x4af] = 0;
      }
      param_1[0x59e] = 0;
      param_1[0x21d] = 3000;
      param_1[0x589] = 0x3f800000;
      param_1[0x21c] = 3000;
      param_1[0x58a] = 0x428c0000;
      param_1[0x58b] = 0x41a00000;
      param_1[0x59f] = 0;
      param_1[0x58c] = 0x44d6dbf3;
      param_1[0x5a1] = 0;
      param_1[0x5a2] = 0;
      param_1[0x58d] = 0x3f333333;
      param_1[0x5a4] = 0;
      param_1[0x5a3] = 0xf;
      param_1[0x58e] = 0x44160000;
      param_1[0x588] = 100;
      param_1[0x4b5] = -1;
      param_1[0x58f] = 0x43960000;
      param_1[0x4b6] = -1;
      param_1[0x4b7] = -1;
      param_1[0x590] = 0x3f4ccccd;
      param_1[0x4b8] = -1;
      param_1[0x4bb] = 0;
      param_1[0x591] = 0x3dcccccd;
      param_1[0x5f8] = 0;
      *(undefined2 *)(param_1 + 0x5f9) = 0;
      param_1[0x592] = 0x3e4ccccd;
      *(undefined2 *)((int)param_1 + 0x17e7) = 0;
      *(undefined1 *)((int)param_1 + 0x17e6) = 0;
      param_1[0x593] = 0x3f19999a;
      *(undefined1 *)((int)param_1 + 0x17e9) = 0;
      *(undefined1 *)((int)param_1 + 0x17eb) = 0;
      param_1[0x594] = 0x3ecccccd;
      *(undefined1 *)(param_1 + 0x5fe) = 0;
      *(undefined1 *)((int)param_1 + 0x17fa) = 0;
      param_1[0x600] = 0;
      param_1[0x4b3] = 0;
      param_1[0x595] = 0x3dcccccd;
      param_1[0x596] = 0x428c0000;
      param_1[0x597] = 0x43d20000;
      param_1[0x598] = 0x43960000;
      param_1[0x59a] = 0x3c54fdf4;
      param_1[0x5a0] = 0;
      param_1[0x599] = 0x3f800000;
      sVar2 = FUN_00dde2d0(0,1);
      param_1[0x602] = (int)sVar2;
      param_1[0x5a5] = 0;
      param_1[0x5a7] = 0;
      param_1[0x603] = 0;
      *(undefined1 *)(param_1 + 0x5a6) = 0;
      *(undefined1 *)(param_1 + 0x5a8) = 0;
      FUN_00a929d0();
      param_1[0x51e] = 0;
      param_1[0x51b] = 500;
      param_1[0x51c] = 0x4628c000;
      param_1[0x51d] = 0x46a8c000;
      if (param_1[0x128] == 0) {
        param_1[0x51e] = 1;
      }
      if (param_1[0x128] == 1) {
        param_1[0x51e] = 1;
      }
      if (param_1[0x1d5] != 0) {
        FUN_00ac8570(0x25);
        uVar4 = FUN_00fdbc60();
        FUN_00a8edf0(uVar4);
        if (param_1[0x128] == 0) {
          FUN_00ac8570(0x28);
          iVar3 = FUN_00fdbc60();
          param_1[0x51b] = iVar3;
          fVar8 = (float10)FUN_00ac8570(0x27);
          param_1[0x51c] = (int)(float)(fVar8 * (float10)60.0);
        }
        if (param_1[0x128] == 1) {
          FUN_00ac8570(0x2a);
          iVar3 = FUN_00fdbc60();
          param_1[0x51b] = iVar3;
          fVar8 = (float10)FUN_00ac8570(0x29);
          param_1[0x51c] = (int)(float)(fVar8 * (float10)60.0);
          fVar8 = (float10)FUN_00ac8570(0x2b);
          param_1[0x51d] = (int)(float)(fVar8 * (float10)60.0);
        }
        FUN_00ac8570(0x2e);
        iVar3 = FUN_00fdbc60();
        param_1[0x588] = iVar3;
        fVar8 = (float10)FUN_00ac8570(0x2f);
        param_1[0x589] = (int)(float)fVar8;
        if (param_1[0x128] == 0) {
          fVar8 = (float10)FUN_00ac8570(0x30);
          param_1[0x589] = (int)(float)fVar8;
        }
        if (param_1[0x128] == 1) {
          fVar8 = (float10)FUN_00ac8570(0x30);
          param_1[0x589] = (int)(float)fVar8;
        }
        fVar8 = (float10)FUN_00ac8570(0x32);
        param_1[0x58a] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x33);
        param_1[0x58b] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x34);
        param_1[0x58c] = (int)(float)(fVar8 * (float10)57.29578);
        fVar8 = (float10)FUN_00ac8570(0x36);
        param_1[0x58d] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x37);
        param_1[0x58e] = (int)(float)(fVar8 * (float10)60.0);
        fVar8 = (float10)FUN_00ac8570(0x38);
        param_1[0x58f] = (int)(float)(fVar8 * (float10)60.0);
        fVar8 = (float10)FUN_00ac8570(0x3a);
        param_1[0x590] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x3b);
        param_1[0x591] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x40);
        param_1[0x592] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x3c);
        param_1[0x593] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x3d);
        param_1[0x594] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x41);
        param_1[0x595] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x42);
        param_1[0x596] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x43);
        param_1[0x597] = (int)(float)(fVar8 * (float10)60.0);
        fVar8 = (float10)FUN_00ac8570(0x44);
        param_1[0x598] = (int)(float)(fVar8 * (float10)60.0);
        fVar8 = (float10)FUN_00ac8570(0x4a);
        param_1[0x59a] = (int)(float)fVar8;
        if (param_1[0x128] == 0) {
          fVar8 = (float10)FUN_00ac8570(0x46);
          param_1[0x599] = (int)(float)fVar8;
        }
        if (param_1[0x128] == 1) {
          fVar8 = (float10)FUN_00ac8570(0x47);
          param_1[0x599] = (int)(float)fVar8;
        }
        if (param_1[0x128] == 2) {
          fVar8 = (float10)FUN_00ac8570(0x48);
          param_1[0x599] = (int)(float)fVar8;
        }
        if (param_1[0x128] == 3) {
          fVar8 = (float10)FUN_00ac8570(0x48);
          param_1[0x599] = (int)(float)fVar8;
        }
      }
      piVar7 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(piVar7);
      FUN_005ad6f0();
      FUN_00a82790(param_1[0x13c],5,0);
      param_1[0x520] = param_1[0x520] | 2;
      FUN_00a82840(0x3e32b8c2,0xbf490fdb,0x3dcccccd,0x393702d3,0x3d8efa35);
      FUN_00a82870(0x3f860a92,0xbf860a92,0x3dcccccd,0x393702d3,0x3d8efa35);
      param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
      FUN_00a8caf0(0x10000,0,0,0);
      if (param_1[300] == 0x2070a) {
        (**(code **)(*param_1 + 0x358))(0,param_1 + 0x5cc);
        iVar3 = FUN_00a81330();
        if (iVar3 != 0) {
          FUN_00a81330();
          iVar3 = FUN_00a7c8a0();
          if (iVar3 != 0) {
            piVar7 = param_1 + 0x5cc;
            uVar4 = 0;
            FUN_005ab010(0,piVar7);
            FUN_005c1d00(uVar4,piVar7);
          }
        }
      }
      if (param_1[0x1db] != 0) {
        FUN_009fb990();
      }
      param_1[0x21e] = 1;
      FUN_00aa4080(4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00a92f90();
      FUN_00e3f050();
      switchD_0080dbae::default();
      return 1;
    }
  }
  return 0;
}

// 005C3580  FUN_005c3580  size=392  [callgraph]
void __fastcall FUN_005c3580(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_1[0x5a4] = 1;
  iVar2 = FUN_00a8cab0();
  if (iVar2 < 0x20001) {
    if (iVar2 == 0x20000) {
      FUN_005bf570();
      return;
    }
    switch(iVar2) {
    case 0x10000:
      if ((((DAT_01bea060 & 0x2000000) != 0) || (param_1[0x128] != 1)) ||
         (0.0 < (float)param_1[0x51d])) {
        fVar1 = (float)param_1[0x2a3];
        if ((!NAN(fVar1) && 9.0 < fVar1 != (fVar1 == 9.0)) ||
           ((30.0 < (float)param_1[0x248] && (param_1[0x187] != 0)))) {
          param_1[0x4b4] = param_1[0x4b4] & 0x87ffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfdffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
          FUN_00a8caf0(0x10001,0,0,0);
        }
        if (0.7853982 < (float)param_1[0x2a7]) {
          param_1[0x4b4] = param_1[0x4b4] & 0x87ffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfdffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
          FUN_00a8caf0(0x10002,0,0,0);
        }
        if (2.1816616 < (float)param_1[0x2a7]) {
          param_1[0x4b4] = param_1[0x4b4] & 0x87ffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfdffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
          FUN_00a8caf0(0x10004,0,0,0);
        }
        if ((float)param_1[0x2a7] < -0.7853982) {
          param_1[0x4b4] = param_1[0x4b4] & 0x87ffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfdffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
          FUN_00a8caf0(0x10003,0,0,0);
        }
        if ((float)param_1[0x2a7] < -2.1816616) {
          param_1[0x4b4] = param_1[0x4b4] & 0x87ffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfdffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
          FUN_00a8caf0(0x10004,0,0,0);
        }
        if ((param_1[0x59d] == 0) && (0x1e < param_1[0x5a2])) {
          param_1[0x4b4] = param_1[0x4b4] & 0x87ffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfdffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
          FUN_00a8caf0(0x10005,0,0,0);
        }
        if (((float)param_1[0x59e] <= 0.0) && (iVar2 = FUN_005bcf80(), iVar2 == 0)) {
          FUN_005bc940();
          return;
        }
      }
      else {
        param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
        FUN_00a8caf0(0x7000d,0,0,0);
      }
      return;
    case 0x10001:
      if ((((DAT_01bea060 & 0x2000000) != 0) || (param_1[0x128] != 1)) ||
         (0.0 < (float)param_1[0x51d])) {
        if ((((char)param_1[0x5a6] == '\x03') &&
            (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 42.25 < fVar1 != (fVar1 == 42.25))) &&
           ((float)param_1[0x2a8] <= 1.2217305)) {
          param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
          FUN_00a8caf0(0x10006,0,0,0);
          return;
        }
        if ((float)param_1[0x2a3] <= 6.25) {
          param_1[0x4b4] = param_1[0x4b4] & 0x87ffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfdffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
          FUN_00a8caf0(0x10000,0,0,0);
        }
        if (0.7853982 < (float)param_1[0x2a7]) {
          param_1[0x4b4] = param_1[0x4b4] & 0x87ffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfdffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
          FUN_00a8caf0(0x10002,0,0,0);
        }
        if (2.1816616 < (float)param_1[0x2a7]) {
          param_1[0x4b4] = param_1[0x4b4] & 0x87ffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfdffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
          FUN_00a8caf0(0x10004,0,0,0);
        }
        if ((float)param_1[0x2a7] < -0.7853982) {
          param_1[0x4b4] = param_1[0x4b4] & 0x87ffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfdffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
          FUN_00a8caf0(0x10003,0,0,0);
        }
        if ((float)param_1[0x2a7] < -2.1816616) {
          param_1[0x4b4] = param_1[0x4b4] & 0x87ffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfdffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
          FUN_00a8caf0(0x10004,0,0,0);
        }
        if ((param_1[0x59d] == 0) && (0x1e < param_1[0x5a2])) {
          param_1[0x4b4] = param_1[0x4b4] & 0x87ffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfdffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xfeffffff;
          param_1[0x4b4] = param_1[0x4b4] & 0xff7fffff;
          FUN_00a8caf0(0x10005,0,0,0);
        }
        if (((float)param_1[0x59e] <= 0.0) && (iVar2 = FUN_005bcf80(), iVar2 == 0)) {
          FUN_005bc940();
          return;
        }
      }
      else {
        param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
        FUN_00a8caf0(0x7000d,0,0,0);
      }
      return;
    case 0x10002:
    case 0x10003:
    case 0x10004:
      if ((((DAT_01bea060 & 0x2000000) != 0) || (param_1[0x128] != 1)) ||
         (0.0 < (float)param_1[0x51d])) {
        if (param_1[0x128] == 0) {
          uVar3 = 0x3e;
        }
        else {
          if ((((char)param_1[0x5a6] == '\x03') && (iVar2 = FUN_00a8c760(0xf), iVar2 != 0)) &&
             ((fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 42.25 < fVar1 != (fVar1 == 42.25) &&
              ((float)param_1[0x2a8] <= 1.2217305)))) {
            param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
            FUN_00a8caf0(0x10006,0,0,0);
            return;
          }
          uVar3 = 0xf;
        }
        iVar2 = FUN_00a8c760(uVar3);
        if (((iVar2 != 0) && ((float)param_1[0x59e] <= 0.0)) && (iVar2 = FUN_005bcf80(), iVar2 == 0)
           ) {
          FUN_005bc940();
          return;
        }
      }
      else {
        param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
        FUN_00a8caf0(0x7000d,0,0,0);
      }
      return;
    case 0x10005:
      FUN_005bf530();
      return;
    case 0x10006:
    case 0x10007:
    case 0x10008:
    case 0x10009:
      FUN_005b1880();
      return;
    }
  }
  else if (iVar2 < 0x30001) {
    if (iVar2 == 0x30000) {
      FUN_005c0640();
      return;
    }
    switch(iVar2) {
    case 0x20001:
      FUN_005bf5c0();
      return;
    case 0x20002:
      FUN_005bf610();
      return;
    case 0x20003:
      FUN_005bf660();
      return;
    case 0x20004:
      FUN_005bf6b0();
      return;
    case 0x20005:
      FUN_005bf700();
      return;
    case 0x20006:
      FUN_005bf750();
      return;
    case 0x20007:
      FUN_005bf7a0();
      return;
    case 0x20008:
      FUN_005bf820();
      return;
    case 0x20009:
      FUN_005bf8a0();
      return;
    case 0x2000a:
      FUN_005bf980();
      return;
    case 0x2000b:
    case 0x2000c:
    case 0x2000d:
      FUN_005bf9d0();
      return;
    case 0x2000e:
      FUN_005bfde0();
      return;
    case 0x2000f:
      FUN_005bfe30();
      return;
    case 0x20010:
    case 0x20011:
      FUN_005c05a0();
      return;
    case 0x20012:
      FUN_005c05f0();
      return;
    case 0x20013:
      FUN_005b1be0();
      return;
    case 0x20015:
      FUN_005ab740();
      return;
    case 0x20016:
      FUN_005ab7e0();
      return;
    case 0x20019:
      FUN_005b28d0();
      return;
    }
  }
  else if ((iVar2 < 0x70001) && (iVar2 != 0x70000)) {
    switch(iVar2) {
    case 0x30001:
      FUN_005c0690();
      return;
    case 0x30002:
      FUN_005c06e0();
      return;
    case 0x30003:
      FUN_005c0730();
      return;
    case 0x30004:
      FUN_005c0780();
      return;
    case 0x30005:
      (**(code **)(*param_1 + 0x1d4))(1);
      break;
    case 0x30006:
      FUN_005aba60();
      return;
    case 0x30007:
      FUN_005c07f0();
      return;
    case 0x30008:
      FUN_005c0840();
      return;
    }
  }
  return;
}

// 005C37C0  FUN_005c37c0  size=1667  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c37c0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  int aiStack_b0 [3];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined1 auStack_90 [80];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  piVar6 = (int *)param_1[0x2a1];
  if (piVar6 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar9 = &DAT_01be9db8;
    (**(code **)(*piVar6 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar9);
    uVar7 = -(uint)(iVar2 != 0) & (uint)piVar6;
  }
  (**(code **)(*param_1 + 0x318))();
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa4080(0x48,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      FUN_00a805f0();
    }
    FUN_00a7c950();
    if ((char)param_1[0x5a6] == '\x01') {
      param_1[0x5a5] = 0;
    }
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x49,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    aiStack_b0[0] = -0x3cacb333;
    aiStack_b0[1] = 0x40e947ae;
    aiStack_b0[2] = 0x43ef8000;
    fStack_a0 = ((float)param_1[0x10] - 211.3) * 0.5;
    fStack_98 = ((float)param_1[0x12] + 479.0) * 0.5;
    fStack_94 = ((float)param_1[0x13] + fStack_a4) * 0.5;
    fStack_9c = ((float)param_1[0x11] + 7.29) * 0.5 + 2.0;
    FUN_005c0890(param_1 + 0x5ac,param_1 + 0x10,&fStack_a0,aiStack_b0);
  case 3:
    FUN_005ae110(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    FUN_00a581b0(aiStack_b0,0,param_1[0x248]);
    fVar1 = (float)param_1[0x248];
    if (!NAN(fVar1) && 1.7 < fVar1 != (fVar1 == 1.7)) {
      param_1[0x248] = 0x3fd9999a;
      FUN_00a581b0(aiStack_b0,0,0x3fd9999a);
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = aiStack_b0[0];
    param_1[0x15] = aiStack_b0[1];
    param_1[0x16] = aiStack_b0[2];
    param_1[0x248] = (int)((float)param_1[0x244] * 0.05 + (float)param_1[0x248]);
    return;
  case 4:
    if (uVar7 != 0) {
      FUN_00b8a040(1,0,1);
    }
    FUN_00aa4080(0x53,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_005b51b0(0x1da,0x8100000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x14] = -0x3cacb333;
    piVar6 = param_1 + 0x24;
    param_1[0x15] = 0x40e947ae;
    param_1[0x16] = 0x43ef8000;
    *piVar6 = 0;
    param_1[0x25] = 0x3f567750;
    param_1[0x26] = 0;
    (**(code **)(*param_1 + 0x7c))(param_1 + 0x14,piVar6);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      FUN_00a805f0();
    }
    FUN_00a7c950();
    aiStack_b0[0] = 0xf0076;
    aiStack_b0[1] = 0xf0070;
    FUN_0040b190();
    iVar2 = FUN_00a12210(0xf00);
    uStack_40 = *(undefined4 *)(iVar2 + 0x40);
    uStack_3c = *(undefined4 *)(iVar2 + 0x44);
    uStack_38 = *(undefined4 *)(iVar2 + 0x48);
    iStack_34 = *piVar6;
    iStack_30 = param_1[0x25];
    iStack_2c = param_1[0x26];
    iVar2 = FUN_00a82090("Katamari",aiStack_b0[(*(byte *)((int)param_1 + 0x17e5) & 0x10) != 0],
                         auStack_90);
    if (iVar2 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      uVar3 = FUN_00a7c8a0();
      iVar2 = FUN_005b0b80(uVar3);
      if (iVar2 != 0) {
        FUN_005ab180(param_1[0x13c]);
        iVar2 = param_1[0x58c];
        iVar5 = param_1[0x58b];
        iVar8 = param_1[0x58a];
        uVar3 = FUN_00ac8520(0x32);
        uVar4 = FUN_009f8b40(uVar3,iVar8,iVar5,iVar2);
        FUN_005be280(uVar4,uVar3,iVar8,iVar5,iVar2);
        FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      }
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    DAT_01bea060 = DAT_01bea060 | 0x2000000;
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    iVar2 = FUN_005ab010();
    if (iVar2 != 0) {
      iVar2 = FUN_005ab010();
      *(undefined4 *)(iVar2 + 0x768) = 0;
      FUN_005ab010();
      FUN_00a8e760();
    }
  case 5:
    _DAT_01bea860 = 1;
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x4b4] = param_1[0x4b4] & 0x87ffffff;
      param_1[0x4b4] = param_1[0x4b4] & 0xfdffffff;
      param_1[0x4b4] = param_1[0x4b4] & 0xfe7fffff;
      FUN_00a8caf0(0x20015,0,0,0);
      DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
      DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
      iVar2 = FUN_005ab010();
      if (iVar2 != 0) {
        iVar2 = FUN_005ab010();
        *(undefined4 *)(iVar2 + 0x768) = 1;
        FUN_005ab010();
        FUN_00a8e760();
      }
    }
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      iVar2 = FUN_00a12210(0);
      *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 4;
      iVar2 = FUN_00a12210(0xf00);
      iVar5 = FUN_00a12210(0);
      FID_conflict__memcpy((void *)(iVar5 + 0x10),(void *)(iVar2 + 0x10),0x40);
      switchD_0080dbae::default();
    }
    iVar2 = FUN_00a8c760(10);
    if (((iVar2 != 0) && (param_1[0x2a1] != 0)) &&
       (piVar6 = (int *)FUN_0041c960(param_1[0x2a1]), piVar6 != (int *)0x0)) {
      aiStack_b0[0] = -0x3cc25419;
      aiStack_b0[1] = 0xc0e3796b;
      aiStack_b0[2] = 0x43f79411;
      fStack_a0 = 0.0;
      fStack_9c = -2.1392322;
      fStack_98 = 0.0;
      (**(code **)(*piVar6 + 0x7c))(aiStack_b0,&fStack_a0);
    }
  default:
    goto switchD_005c3818_default;
  }
  FUN_005ae110(0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_005c3818_default:
  return;
}

// 005C3E60  FUN_005c3e60  size=500  [callgraph]
void __fastcall FUN_005c3e60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined1 auStack_160 [288];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  (**(code **)(*param_1 + 0x314))();
  if ((int *)param_1[0x2a1] != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      FUN_00b8c350(0x41400000);
      FUN_00a7c950();
    }
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    uVar2 = 0x50;
    if (param_1[0x186] == 0x20018) {
      uVar2 = 0x51;
    }
    FUN_00aa4080(uVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    *(byte *)((int)param_1 + 0x17e7) =
         *(byte *)((int)param_1 + 0x17e7) | *(byte *)((int)param_1 + 0x17e6);
    *(undefined1 *)((int)param_1 + 0x17e6) = 0;
    DAT_01bea094 = DAT_01bea094 & 0xffffffdf;
    FUN_00c5ad80(param_1[0x4b5]);
    param_1[0x4b5] = -1;
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    param_1[0x24] = 0;
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      uVar4 = 0;
      uVar2 = FUN_00a7c8a0(0);
      FUN_004039a0(0x5a,uVar2,uVar4);
      iStack_40 = param_1[0x10];
      iStack_3c = param_1[0x11];
      iStack_38 = param_1[0x12];
      iStack_34 = param_1[0x13];
      FUN_00a8c930(0x20700,auStack_160);
      FUN_00a805f0();
    }
    FUN_00a7c950();
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    if ((((*(byte *)((int)param_1 + 0x17e7) & 0xfe) == 0) && ((*(byte *)(param_1 + 0x5fa) & 1) == 0)
        ) && ((*(byte *)((int)param_1 + 0x17e7) & 1) != 0)) {
      param_1[0x4b4] = param_1[0x4b4] & 0x847fffff;
      FUN_00a8caf0(0x20013,0,0,0);
      *(byte *)((int)param_1 + 0x17e5) = *(byte *)((int)param_1 + 0x17e5) | 2;
      *(undefined1 *)((int)param_1 + 0x17e6) = 2;
    }
  }
  return;
}

// 005C4060  FUN_005c4060  size=259  [callgraph]
void __thiscall FUN_005c4060(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x358))(param_2,param_3);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        FUN_00a81330();
        uVar2 = FUN_00a7c8a0();
      }
      FUN_004039a0(param_2,uVar2,0);
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        FUN_00a81330();
        uVar2 = FUN_00a7c8a0();
      }
      FUN_00e030a0(uVar2,0);
      FUN_00dffb20(param_3);
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
      }
      FUN_00a8c8b0(*(undefined4 *)(iVar1 + 0x4b0),&stack0xfffffe98);
    }
  }
  return;
}

// 005C4170  FUN_005c4170  size=128  [callgraph]
void FUN_005c4170(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar3 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(0x5a,uVar1,uVar3);
  local_40 = *param_1;
  local_3c = param_1[1];
  local_38 = param_1[2];
  local_34 = param_1[3];
  FUN_00a8c930(0x20700,local_160);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a805f0();
  }
  return;
}

// 005C41F0  FUN_005c41f0  size=840  [callgraph]
void __fastcall FUN_005c41f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  float unaff_ESI;
  float10 fVar4;
  undefined *puVar5;
  float fVar6;
  float fVar7;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float local_1b0;
  undefined1 auStack_1ac [32];
  float fStack_18c;
  undefined1 local_160 [348];
  
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    param_1[0x248] = 0x42b40000;
    param_1[0x249] = 0;
    param_1[0x2b0] = 0;
    param_1[0x2b1] = 0;
    param_1[0x2b2] = 0x3e99999a;
    FUN_004039a0(7,param_1,0);
    if (param_1 + 0x280 != (int *)0x0) {
      FUN_00dffb20(param_1 + 0x280);
    }
    FUN_00a8c8b0(param_1[300],local_160);
    FUN_00a9f3c0(param_1 + 0x125,1,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar6 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar6 - (float)param_1[0x244]);
  fVar7 = (float)param_1[0x249];
  param_1[0x249] = (int)(fVar7 - (float)param_1[0x244]);
  if (fVar7 - (float)param_1[0x244] < 0.0) {
    param_1[0x249] = 0x40a00000;
  }
  if ((fVar6 - (float)param_1[0x244] < 0.0) || (iVar1 = FUN_005b76f0(), iVar1 == 0)) {
    FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(param_1[0x280] + 8))(0x3f800000,0,0);
    param_1[0x2ad] = 0x42700000;
    param_1[0x186] = 0;
    param_1[0x2ac] = 1;
  }
  D3DXVec3TransformNormal(&local_1b0,param_1 + 0x2b0,param_1 + 4);
  fVar6 = (float)param_1[0x244];
  param_1[0x14] = (int)((float)param_1[0x14] + fStack_1bc * fVar6);
  param_1[0x15] = (int)(fStack_1b8 * fVar6 + (float)param_1[0x15]);
  param_1[0x16] = (int)(fStack_1b4 * fVar6 + (float)param_1[0x16]);
  param_1[0x17] = (int)(local_1b0 * fVar6 + (float)param_1[0x17]);
  iVar1 = FUN_00c13920();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0);
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar5);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
      goto LAB_005c441b;
    }
  }
  uVar3 = 0;
LAB_005c441b:
  FUN_00a8e880(uVar3 + 0x40);
  D3DXMatrixInverse(auStack_1ac,0,param_1 + 4);
  D3DXVec3TransformNormal(&stack0xfffffe38,uVar3 + 0x40,&fStack_1b8);
  fVar6 = 0.04363323;
  fVar7 = 2.0;
  iVar1 = FUN_009c4bf0();
  if (iVar1 == 0) {
    fVar6 = 0.017453292;
    fVar7 = 5.0;
  }
  iVar1 = FUN_009c4bf0();
  if (iVar1 == 3) {
    fVar6 = 0.05235988;
    fVar7 = 2.0;
  }
  iVar1 = FUN_009c4bf0();
  if (iVar1 == 4) {
    fVar6 = 0.05235988;
    fVar7 = 1.5;
  }
  if (fVar7 < fStack_18c + unaff_ESI == (fVar7 == fStack_18c + unaff_ESI)) {
    return;
  }
  iVar1 = *param_1;
  fVar4 = (float10)FUN_00fdc1f0(0x393702d3,fVar6 * (float)param_1[0x244],0);
  (**(code **)(iVar1 + 0x308))((float)fVar4);
  return;
}

// 005C4540  FUN_005c4540  size=596  [callgraph]
void __fastcall FUN_005c4540(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar3 = param_1[0x187];
  bVar2 = false;
  if (iVar3 == 0) {
    param_1[0x187] = 1;
    FUN_00a9f3c0(param_1 + 0x125,2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_005c2510(1,param_1 + 0x10,param_1 + 0x280);
    param_1[0x248] = 0x44ca8000;
    param_1[0x2b5] = 0;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    FUN_00eaa6e0(0x42200000,0);
    param_1[0x2ad] = 0x42200000;
    pcVar1 = *(code **)(*param_1 + 0x20);
    param_1[0x186] = 0;
    param_1[0x2ac] = 1;
    (*pcVar1)();
    FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    return;
  }
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar6 = &DAT_01b351c0;
    (**(code **)(*piVar4 + 4))(&DAT_01b351c0);
    iVar3 = FUN_00dd6d80(puVar6);
    if ((iVar3 != 0) && (iVar3 = FUN_005b75b0(), 1 < *(byte *)(iVar3 + 0x1698))) {
      bVar2 = true;
    }
  }
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar6 = &DAT_01b351c0;
    (**(code **)(*piVar4 + 4))(&DAT_01b351c0);
    iVar3 = FUN_00dd6d80(puVar6);
    if (iVar3 != 0) {
      iVar3 = param_1[0x129];
      iVar5 = FUN_005b75b0();
      if (iVar3 == 0) {
        iVar3 = *(int *)(iVar5 + 0x16a4);
      }
      else if (iVar3 == 1) {
        iVar3 = *(int *)(iVar5 + 0x16a8);
      }
      else {
        if (iVar3 != 2) goto LAB_005c4714;
        iVar3 = *(int *)(iVar5 + 0x16ac);
      }
      if (iVar3 != 0) {
        bVar2 = true;
      }
    }
  }
LAB_005c4714:
  if (param_1[0x2b5] != 0) {
    bVar2 = true;
  }
  if ((0.0 <= (float)param_1[0x248]) && (!bVar2)) {
    return;
  }
  FUN_00eaa6e0(0x42f00000,0);
  FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 005C47A0  FUN_005c47a0  size=426  [callgraph]
void __fastcall FUN_005c47a0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    FUN_005c2420(3,param_1 + 0x280);
    param_1[0x248] = 0x43960000;
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar3 = FUN_005b75b0();
    if ((iVar3 != 0) && (iVar3 = FUN_005b75b0(), 1 < *(byte *)(iVar3 + 0x16a0))) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    param_1[0x187] = 3;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00a9f3c0(param_1 + 0x125,3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_005c2420(4,param_1 + 0x280);
  case 3:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x20);
      param_1[0x2ad] = 0x43340000;
      param_1[0x186] = 0;
      param_1[0x2ac] = 1;
      (*pcVar2)();
      FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 005C4960  FUN_005c4960  size=330  [callgraph]
void __fastcall FUN_005c4960(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    FUN_005c2420(5,param_1 + 0x280);
    param_1[0x248] = 0x43960000;
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar3 = FUN_005b75b0();
    if ((iVar3 != 0) && (iVar3 = FUN_005b75b0(), 1 < *(byte *)(iVar3 + 0x16a0))) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    param_1[0x187] = 3;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_005c2420(6,param_1 + 0x280);
    param_1[0x2ad] = 0x43340000;
    param_1[0x186] = 0;
    param_1[0x2ac] = 1;
  case 3:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x20);
      param_1[0x2ad] = 0x43340000;
      param_1[0x186] = 0;
      param_1[0x2ac] = 1;
      (*pcVar2)();
      FUN_00a9f3c0(param_1 + 0x125,0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 005C4C10  FUN_005c4c10  size=525  [callgraph]
void __fastcall FUN_005c4c10(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 uVar3;
  
  iVar2 = FUN_00a8cab0();
  if (iVar2 < 0x20001) {
    if (iVar2 == 0x20000) {
      FUN_005b8840();
      return;
    }
    switch(iVar2) {
    case 0x10000:
      FUN_005ab320();
      return;
    case 0x10001:
      FUN_005ab3b0();
      return;
    case 0x10002:
    case 0x10003:
    case 0x10004:
      FUN_005ab530();
      return;
    case 0x10005:
      FUN_005ab620();
      return;
    case 0x10006:
    case 0x10007:
    case 0x10008:
    case 0x10009:
      FUN_005b8380();
      return;
    }
  }
  else {
    if (iVar2 < 0x30001) {
      if (iVar2 == 0x30000) {
        FUN_005ba850();
        return;
      }
      switch(iVar2) {
      case 0x20001:
        FUN_005b8970();
        return;
      case 0x20002:
        FUN_005b8aa0();
        return;
      case 0x20003:
        FUN_005b8bd0();
        return;
      case 0x20004:
        FUN_005b8d00();
        return;
      case 0x20005:
        FUN_005b8e30();
        return;
      case 0x20006:
        FUN_005b8fd0();
        return;
      case 0x20007:
        FUN_005b9100();
        return;
      case 0x20008:
        FUN_005b95c0();
        return;
      case 0x20009:
        FUN_005b9990();
        return;
      case 0x2000a:
        FUN_005b9a80();
        return;
      case 0x2000b:
      case 0x2000c:
      case 0x2000d:
        goto LAB_005bfa50;
      case 0x2000e:
        FUN_005b9b70();
        return;
      case 0x2000f:
        FUN_005bfe80();
        return;
      case 0x20010:
      case 0x20011:
        FUN_005b9ca0();
        return;
      case 0x20012:
        FUN_005b9dc0();
        return;
      case 0x20013:
        FUN_005ba180();
        return;
      case 0x20014:
        FUN_005c37c0();
        return;
      case 0x20015:
        FUN_005b1c30();
        return;
      case 0x20016:
        FUN_005b21f0();
        return;
      case 0x20017:
      case 0x20018:
        FUN_005c3e60();
        return;
      case 0x20019:
        FUN_005ba420();
        return;
      default:
        goto switchD_005c4c2f_default;
      }
    }
    if (iVar2 < 0x70001) {
      if (iVar2 == 0x70000) {
        FUN_005baaf0();
        return;
      }
      switch(iVar2) {
      case 0x30001:
        FUN_005b2920();
        return;
      case 0x30002:
        FUN_005b2a00();
        return;
      case 0x30003:
        FUN_005b2ae0();
        return;
      case 0x30004:
        FUN_005b2cc0();
        return;
      case 0x30005:
        FUN_005ab930();
        return;
      case 0x30006:
        FUN_005abab0();
        return;
      case 0x30007:
        FUN_005b2e90();
        return;
      case 0x30008:
        FUN_005b2f80();
        return;
      }
    }
    else {
      switch(iVar2) {
      case 0x70001:
        FUN_005bae90();
        return;
      case 0x70002:
        FUN_005bb7a0();
        return;
      case 0x70003:
        FUN_005bbbb0();
        return;
      case 0x70004:
        FUN_005bbf20();
        return;
      case 0x70005:
        FUN_005b3410();
        return;
      case 0x70006:
        FUN_005b3920();
        return;
      case 0x70007:
        FUN_005b5b50();
        return;
      case 0x70008:
        FUN_005b58b0();
        return;
      case 0x70009:
        FUN_005b6d50();
        return;
      case 0x7000a:
        FUN_005b7080();
        return;
      case 0x7000b:
        FUN_005c0d60();
        return;
      case 0x7000c:
        FUN_005b6650();
        return;
      case 0x7000d:
        FUN_005ba9c0();
        return;
      }
    }
  }
switchD_005c4c2f_default:
  return;
LAB_005bfa50:
  iVar2 = FUN_00a8cac0(unaff_ESI);
  if (iVar2 == 0) {
    uVar3 = 0x28;
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 != 0) {
      uVar3 = 0x2c;
    }
    if (param_1[0x186] == 0x2000c) {
      uVar3 = 0x2a;
    }
    if (param_1[0x186] == 0x2000d) {
      uVar3 = 0x2b;
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x59f] = param_1[0x59f] + 1;
    FUN_005b5340();
    FUN_00a8d280();
    param_1[0x5a9] = 0;
    param_1[0x5aa] = 0;
    param_1[0x5ab] = 0;
  }
  else if (iVar2 != 1) goto LAB_005bfd47;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(8);
  if (iVar2 != 0) {
    if (param_1[0x186] == 0x2000b) {
      FUN_005bd630(0,0);
      iVar2 = FUN_00ac4780();
      if (1 < iVar2) {
        uVar3 = 0;
        sVar1 = FUN_00dde2d0(0xffffffff,1);
        FUN_005bd630(((float)(int)sVar1 * 30.0 + 180.0) * 0.017453292,uVar3);
      }
    }
    if (param_1[0x186] == 0x2000d) {
      FUN_005bd630(0x3f1c61aa,0);
      FUN_005bd630(0xbe860a92,0);
      FUN_005bd630(0x3fb2b8c2,0);
      FUN_005bd630(0xbfb2b8c2,0);
      FUN_005bd630(0x4032b8c2,0);
      FUN_005bd630(0xc011361e,0);
      param_1[0x5a7] = 0x43340000;
      *(undefined1 *)(param_1 + 0x5a8) = 1;
    }
    if (param_1[0x186] == 0x2000c) {
      iVar2 = FUN_00ac4780();
      if (iVar2 < 2) {
        FUN_005bd630(0x3f860a92,0);
        FUN_005bd630(0xbf860a92,1);
        param_1[0x5ab] = 1;
      }
      else {
        FUN_005bd630(0x3fd43b67,0);
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 == 0) {
          uVar3 = 0xbdb2b8c2;
        }
        else {
          uVar3 = 0x3db2b8c2;
        }
        FUN_005bd630(uVar3,1);
        FUN_005bd630(0xbfd43b67,2);
      }
      param_1[0x5a5] = 0x44960000;
      *(undefined1 *)(param_1 + 0x5a6) = 1;
      FUN_00e5e0c0("em0700_se_atk_firewall_start",param_1,0xffffffff,0);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = param_1[0x128];
    param_1[0x59e] = 0x42f00000;
    if (iVar2 == 1) {
      param_1[0x59e] = 0x42700000;
    }
    if (iVar2 == 2) {
      param_1[0x59e] = 0x41f00000;
    }
    if (iVar2 == 3) {
      param_1[0x59e] = 0x41f00000;
    }
  }
LAB_005bfd47:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,(float)param_1[0x244] * 0.27925268,0);
  }
  return;
}

// 005C4F00  Em0700::vf1A4  size=305  [class]
void __thiscall Em0700::vf1A4(int *param_1,int *param_2,byte param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_00a81330();
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
  }
  param_1[0x4b3] = 1;
  if (((piVar2 != (int *)0x0) && (*param_2 == 0x17d)) && ((param_3 & 0xe) != 0)) {
    iVar1 = (**(code **)(*piVar2 + 0x14c))(0x5f,param_1[0x13c]);
    if (iVar1 != 0) {
      if ((*(byte *)(param_1 + 0x602) & 1) == 0) {
        (**(code **)(*piVar2 + 0x150))(0x5f,param_1[0x13c]);
        iVar1 = piVar2[0x13c];
        uVar3 = 0x5f;
      }
      else {
        uStack_20 = 0xc340fd71;
        uStack_1c = 0xc0e33333;
        uStack_18 = 0x43f57ae1;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        (**(code **)(*param_1 + 0x7c))(&uStack_20,&uStack_30);
        (**(code **)(*piVar2 + 0x150))(100,param_1[0x13c]);
        iVar1 = piVar2[0x13c];
        uVar3 = 100;
      }
      (**(code **)(*param_1 + 0x150))(uVar3,iVar1);
      param_1[0x602] = param_1[0x602] + 1;
    }
  }
  if (((param_3 & 1) != 0) && (*param_2 == 0x17f)) {
    FUN_005c4170(param_2 + 0x40);
  }
  return;
}

// 005C5040  FUN_005c5040  size=5096  [callgraph]
void __fastcall FUN_005c5040(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  float10 fVar20;
  undefined4 uVar21;
  float fVar22;
  int local_30;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  bVar6 = false;
  bVar9 = false;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  bVar7 = false;
  bVar8 = false;
  iVar10 = FUN_00a8c760(0x30);
  bVar16 = iVar10 != 0;
  iVar10 = FUN_00a8c760(0x31);
  bVar17 = iVar10 != 0;
  iVar10 = FUN_00a8c760(0x32);
  bVar18 = iVar10 != 0;
  iVar10 = FUN_00a8c760(0x34);
  if ((iVar10 != 0) && (bVar6 = true, *(int *)(param_1 + 0x4b0) == 0x2070a)) {
    bVar16 = false;
    bVar17 = false;
    bVar3 = true;
    bVar4 = true;
  }
  iVar10 = FUN_00a8c760(0x33);
  bVar19 = iVar10 != 0;
  iVar10 = FUN_00a8c760(0x35);
  if ((iVar10 != 0) && (bVar9 = true, *(int *)(param_1 + 0x4b0) == 0x2070a)) {
    bVar16 = false;
    bVar17 = false;
    bVar18 = false;
    bVar6 = false;
    bVar19 = false;
    bVar3 = true;
    bVar4 = true;
    bVar5 = true;
    bVar7 = true;
    bVar8 = true;
  }
  iVar10 = FUN_00a8c760(0x20);
  if (*(int *)(param_1 + 0x4b0) == 0x20700) {
    iVar11 = FUN_00a8c760(0x34);
    if (iVar11 != 0) {
      bVar17 = true;
      bVar18 = true;
      bVar16 = true;
    }
    iVar11 = FUN_00a8c760(0x35);
    if (iVar11 != 0) {
      bVar17 = true;
      bVar16 = true;
    }
  }
  local_20 = 8;
  uVar14 = 0xe;
  local_1c = 9;
  local_18 = 0xf;
  local_14 = 0xb;
  local_10 = 0x11;
  if ((*(int *)(param_1 + 0x4a0) == 0) || (*(int *)(param_1 + 0x4a0) == 1)) {
    local_20 = 3;
    uVar14 = 6;
    local_1c = 4;
    local_18 = 7;
    local_14 = 0x14;
    local_10 = 0x15;
  }
  if ((*(byte *)(param_1 + 0x12b0) & 1) == 0) {
    if (bVar16) {
      FUN_00ac9420("ex_Rhand");
      iVar11 = FUN_00a81330();
      if (iVar11 != 0) {
        FUN_00a81330();
        iVar11 = FUN_00a7c8a0();
        if (iVar11 != 0) {
          iVar11 = FUN_00a81330();
          if (iVar11 == 0) {
            iVar11 = 0;
          }
          else {
            FUN_00a81330();
            iVar11 = FUN_00a7c8a0();
          }
          local_30 = 0;
          if (0 < *(short *)(iVar11 + 0x324)) {
            iVar15 = 0;
            do {
              iVar13 = *(int *)(iVar11 + 800);
              iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
              if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Rhand"), iVar12 != 0)) {
                puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                *puVar1 = *puVar1 | 1;
              }
              local_30 = local_30 + 1;
              iVar15 = iVar15 + 0x70;
            } while (local_30 < *(short *)(iVar11 + 0x324));
          }
        }
      }
      pcVar2 = *(code **)(*(int *)(param_1 + 0xde0) + 8);
      *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) | 1;
      (*pcVar2)(0x3f800000,0,0);
      FUN_005c4060(local_20,param_1 + 0xde0);
    }
    *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) & 0xfffffffe;
  }
  else if (!bVar16) {
    if ((*(byte *)(param_1 + 0x12b4) & 1) == 0) {
      (**(code **)(*(int *)(param_1 + 0xde0) + 8))(0x3f800000,0,0);
      FUN_005c4060(uVar14,param_1 + 0xde0);
      *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) | 1;
      *(undefined4 *)(param_1 + 0xdc0) = 0x42480000;
    }
    fVar22 = *(float *)(param_1 + 0xdc0) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0xdc0) = fVar22;
    if (fVar22 < 0.0) {
      FUN_00ac94e0("ex_Rhand");
      iVar11 = FUN_00a81330();
      if (iVar11 != 0) {
        FUN_00a81330();
        iVar11 = FUN_00a7c8a0();
        if (iVar11 != 0) {
          iVar11 = FUN_005ab010();
          local_20 = 0;
          if (0 < *(short *)(iVar11 + 0x324)) {
            iVar15 = 0;
            do {
              iVar13 = *(int *)(iVar11 + 800);
              iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
              if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Rhand"), iVar12 != 0)) {
                puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_20 = local_20 + 1;
              iVar15 = iVar15 + 0x70;
            } while (local_20 < *(short *)(iVar11 + 0x324));
          }
        }
      }
      *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) & 0xfffffffe;
    }
    if (bVar3) {
      (**(code **)(*(int *)(param_1 + 0xde0) + 8))(0x3f800000,0,0);
      FUN_00ac94e0("ex_Rhand");
      iVar11 = FUN_00a81330();
      if (iVar11 != 0) {
        FUN_00a81330();
        iVar11 = FUN_00a7c8a0();
        if (iVar11 != 0) {
          iVar11 = FUN_005ab010();
          local_20 = 0;
          if (0 < *(short *)(iVar11 + 0x324)) {
            iVar15 = 0;
            do {
              iVar13 = *(int *)(iVar11 + 800);
              iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
              if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Rhand"), iVar12 != 0)) {
                puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_20 = local_20 + 1;
              iVar15 = iVar15 + 0x70;
            } while (local_20 < *(short *)(iVar11 + 0x324));
          }
        }
      }
      *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) & 0xfffffffe;
    }
  }
  if ((*(byte *)(param_1 + 0x12b0) & 2) == 0) {
    if (bVar17) {
      FUN_00ac9420("ex_Lhand");
      iVar11 = FUN_00a81330();
      if (iVar11 != 0) {
        FUN_00a81330();
        iVar11 = FUN_00a7c8a0();
        if (iVar11 != 0) {
          iVar11 = FUN_00a81330();
          if (iVar11 == 0) {
            iVar11 = 0;
          }
          else {
            FUN_00a81330();
            iVar11 = FUN_00a7c8a0();
          }
          local_20 = 0;
          if (0 < *(short *)(iVar11 + 0x324)) {
            iVar15 = 0;
            do {
              iVar13 = *(int *)(iVar11 + 800);
              iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
              if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Lhand"), iVar12 != 0)) {
                puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                *puVar1 = *puVar1 | 1;
              }
              local_20 = local_20 + 1;
              iVar15 = iVar15 + 0x70;
            } while (local_20 < *(short *)(iVar11 + 0x324));
          }
        }
      }
      pcVar2 = *(code **)(*(int *)(param_1 + 0xe90) + 8);
      *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) | 2;
      (*pcVar2)(0x3f800000,0,0);
      FUN_005c4060(local_1c,param_1 + 0xe90);
    }
    *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) & 0xfffffffd;
  }
  else if (!bVar17) {
    if ((*(byte *)(param_1 + 0x12b4) & 2) == 0) {
      (**(code **)(*(int *)(param_1 + 0xe90) + 8))(0x3f800000,0,0);
      FUN_005c4060(local_18,param_1 + 0xe90);
      *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) | 2;
      *(undefined4 *)(param_1 + 0xdc4) = 0x42480000;
    }
    fVar22 = *(float *)(param_1 + 0xdc4) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0xdc4) = fVar22;
    if (fVar22 < 0.0) {
      FUN_00ac94e0("ex_Lhand");
      iVar11 = FUN_00a81330();
      if (iVar11 != 0) {
        FUN_00a81330();
        iVar11 = FUN_00a7c8a0();
        if (iVar11 != 0) {
          iVar11 = FUN_005ab010();
          local_18 = 0;
          if (0 < *(short *)(iVar11 + 0x324)) {
            iVar15 = 0;
            do {
              iVar13 = *(int *)(iVar11 + 800);
              iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
              if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Lhand"), iVar12 != 0)) {
                puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_18 = local_18 + 1;
              iVar15 = iVar15 + 0x70;
            } while (local_18 < *(short *)(iVar11 + 0x324));
          }
        }
      }
      *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) & 0xfffffffd;
    }
    if (bVar4) {
      (**(code **)(*(int *)(param_1 + 0xe90) + 8))(0x3f800000,0,0);
      FUN_00ac94e0("ex_Lhand");
      iVar11 = FUN_00a81330();
      if (iVar11 != 0) {
        FUN_00a81330();
        iVar11 = FUN_00a7c8a0();
        if (iVar11 != 0) {
          iVar11 = FUN_005ab010();
          local_18 = 0;
          if (0 < *(short *)(iVar11 + 0x324)) {
            iVar15 = 0;
            do {
              iVar13 = *(int *)(iVar11 + 800);
              iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
              if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Lhand"), iVar12 != 0)) {
                puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_18 = local_18 + 1;
              iVar15 = iVar15 + 0x70;
            } while (local_18 < *(short *)(iVar11 + 0x324));
          }
        }
      }
      *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) & 0xfffffffd;
    }
  }
  if ((*(byte *)(param_1 + 0x12b0) & 4) == 0) {
    if (bVar18) {
      FUN_00ac9420("ex_Head");
      iVar11 = FUN_00a81330();
      if (iVar11 != 0) {
        FUN_00a81330();
        iVar11 = FUN_00a7c8a0();
        if (iVar11 != 0) {
          iVar11 = FUN_00a81330();
          if (iVar11 == 0) {
            iVar11 = 0;
          }
          else {
            FUN_00a81330();
            iVar11 = FUN_00a7c8a0();
          }
          local_18 = 0;
          if (0 < *(short *)(iVar11 + 0x324)) {
            iVar15 = 0;
            do {
              iVar13 = *(int *)(iVar11 + 800);
              iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
              if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Head"), iVar12 != 0)) {
                puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                *puVar1 = *puVar1 | 1;
              }
              local_18 = local_18 + 1;
              iVar15 = iVar15 + 0x70;
            } while (local_18 < *(short *)(iVar11 + 0x324));
          }
        }
      }
      pcVar2 = *(code **)(*(int *)(param_1 + 0xf40) + 8);
      *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) | 4;
      (*pcVar2)(0x3f800000,0,0);
      FUN_005c4060(local_14,param_1 + 0xf40);
    }
    *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) & 0xfffffffb;
  }
  else if (!bVar18) {
    if ((*(byte *)(param_1 + 0x12b4) & 4) == 0) {
      (**(code **)(*(int *)(param_1 + 0xf40) + 8))(0x3f800000,0,0);
      FUN_005c4060(local_10,param_1 + 0xf40);
      *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) | 4;
      *(undefined4 *)(param_1 + 0xdc8) = 0x42480000;
    }
    fVar22 = *(float *)(param_1 + 0xdc8) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0xdc8) = fVar22;
    if (fVar22 < 0.0) {
      FUN_00ac94e0("ex_Head");
      iVar11 = FUN_00a81330();
      if (iVar11 != 0) {
        FUN_00a81330();
        iVar11 = FUN_00a7c8a0();
        if (iVar11 != 0) {
          iVar11 = FUN_005ab010();
          local_10 = 0;
          if (0 < *(short *)(iVar11 + 0x324)) {
            iVar15 = 0;
            do {
              iVar13 = *(int *)(iVar11 + 800);
              iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
              if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Head"), iVar12 != 0)) {
                puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_10 = local_10 + 1;
              iVar15 = iVar15 + 0x70;
            } while (local_10 < *(short *)(iVar11 + 0x324));
          }
        }
      }
      *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) & 0xfffffffb;
    }
    if (bVar5) {
      (**(code **)(*(int *)(param_1 + 0xf40) + 8))(0x3f800000,0,0);
      FUN_00ac94e0("ex_Head");
      iVar11 = FUN_00a81330();
      if (iVar11 != 0) {
        FUN_00a81330();
        iVar11 = FUN_00a7c8a0();
        if (iVar11 != 0) {
          iVar11 = FUN_005ab010();
          local_c = 0;
          if (0 < *(short *)(iVar11 + 0x324)) {
            iVar15 = 0;
            do {
              iVar13 = *(int *)(iVar11 + 800);
              iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
              if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Head"), iVar12 != 0)) {
                puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_c = local_c + 1;
              iVar15 = iVar15 + 0x70;
            } while (local_c < *(short *)(iVar11 + 0x324));
          }
        }
      }
      *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) & 0xfffffffb;
    }
  }
  if (*(int *)(param_1 + 0x4b0) == 0x2070a) {
    if ((*(byte *)(param_1 + 0x12b0) & 8) == 0) {
      if (bVar6) {
        FUN_00ac9420("ex_Whand");
        iVar11 = FUN_00a81330();
        if (iVar11 != 0) {
          FUN_00a81330();
          iVar11 = FUN_00a7c8a0();
          if (iVar11 != 0) {
            iVar11 = FUN_005ab010();
            local_c = 0;
            if (0 < *(short *)(iVar11 + 0x324)) {
              iVar15 = 0;
              do {
                iVar13 = *(int *)(iVar11 + 800);
                iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
                if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Whand"), iVar12 != 0)) {
                  puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                  *puVar1 = *puVar1 | 1;
                }
                local_c = local_c + 1;
                iVar15 = iVar15 + 0x70;
              } while (local_c < *(short *)(iVar11 + 0x324));
            }
          }
        }
        pcVar2 = *(code **)(*(int *)(param_1 + 0xff0) + 8);
        *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) | 8;
        (*pcVar2)(0x3f800000,0,0);
        FUN_005c4060(10,param_1 + 0xff0);
      }
      *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) & 0xfffffff7;
    }
    else if (!bVar6) {
      if ((*(byte *)(param_1 + 0x12b4) & 8) == 0) {
        (**(code **)(*(int *)(param_1 + 0xff0) + 8))(0x3f800000,0,0);
        FUN_005c4060(0x10,param_1 + 0xff0);
        *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) | 8;
        *(undefined4 *)(param_1 + 0xdcc) = 0x42480000;
      }
      fVar22 = *(float *)(param_1 + 0xdcc) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0xdcc) = fVar22;
      if (fVar22 < 0.0) {
        FUN_00ac94e0("ex_Whand");
        iVar11 = FUN_005ab010();
        if (iVar11 != 0) {
          iVar11 = FUN_005ab010();
          local_c = 0;
          if (0 < *(short *)(iVar11 + 0x324)) {
            iVar15 = 0;
            do {
              iVar13 = *(int *)(iVar11 + 800);
              iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
              if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Whand"), iVar12 != 0)) {
                puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_c = local_c + 1;
              iVar15 = iVar15 + 0x70;
            } while (local_c < *(short *)(iVar11 + 0x324));
          }
        }
        *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) & 0xfffffff7;
      }
      if (bVar7) {
        (**(code **)(*(int *)(param_1 + 0xff0) + 8))(0x3f800000,0,0);
        FUN_00ac94e0("ex_Whand");
        iVar11 = FUN_005ab010();
        if (iVar11 != 0) {
          iVar11 = FUN_005ab010();
          local_8 = 0;
          if (0 < *(short *)(iVar11 + 0x324)) {
            iVar15 = 0;
            do {
              iVar13 = *(int *)(iVar11 + 800);
              iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
              if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Whand"), iVar12 != 0)) {
                puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_8 = local_8 + 1;
              iVar15 = iVar15 + 0x70;
            } while (local_8 < *(short *)(iVar11 + 0x324));
          }
        }
        *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) & 0xfffffff7;
      }
    }
    if ((*(byte *)(param_1 + 0x12b0) & 0x10) == 0) {
      if (bVar19) {
        FUN_00ac9420("ex_Body");
        iVar11 = FUN_00a81330();
        if (iVar11 != 0) {
          FUN_00a81330();
          iVar11 = FUN_00a7c8a0();
          if (iVar11 != 0) {
            iVar11 = FUN_005ab010();
            local_8 = 0;
            if (0 < *(short *)(iVar11 + 0x324)) {
              iVar15 = 0;
              do {
                iVar13 = *(int *)(iVar11 + 800);
                iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
                if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Body"), iVar12 != 0)) {
                  puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                  *puVar1 = *puVar1 | 1;
                }
                local_8 = local_8 + 1;
                iVar15 = iVar15 + 0x70;
              } while (local_8 < *(short *)(iVar11 + 0x324));
            }
          }
        }
        pcVar2 = *(code **)(*(int *)(param_1 + 0x10a0) + 8);
        *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) | 0x10;
        (*pcVar2)(0x3f800000,0,0);
        FUN_005c4060(0xc,param_1 + 0x10a0);
      }
      *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) & 0xffffffef;
    }
    else if (!bVar19) {
      if ((*(byte *)(param_1 + 0x12b4) & 0x10) == 0) {
        (**(code **)(*(int *)(param_1 + 0x10a0) + 8))(0x3f800000,0,0);
        FUN_005c4060(0x12,param_1 + 0x10a0);
        *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) | 0x10;
        *(undefined4 *)(param_1 + 0xdd0) = 0x42480000;
      }
      fVar22 = *(float *)(param_1 + 0xdd0) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0xdd0) = fVar22;
      if (fVar22 < 0.0) {
        FUN_00ac94e0("ex_Body");
        iVar11 = FUN_005ab010();
        if (iVar11 != 0) {
          iVar11 = FUN_005ab010();
          local_8 = 0;
          if (0 < *(short *)(iVar11 + 0x324)) {
            iVar15 = 0;
            do {
              iVar13 = *(int *)(iVar11 + 800);
              iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
              if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Body"), iVar12 != 0)) {
                puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_8 = local_8 + 1;
              iVar15 = iVar15 + 0x70;
            } while (local_8 < *(short *)(iVar11 + 0x324));
          }
        }
        *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) & 0xffffffef;
      }
      if (bVar8) {
        (**(code **)(*(int *)(param_1 + 0x10a0) + 8))(0x3f800000,0,0);
        FUN_00ac94e0("ex_Body");
        iVar11 = FUN_005ab010();
        if (iVar11 != 0) {
          iVar11 = FUN_005ab010();
          local_4 = 0;
          if (0 < *(short *)(iVar11 + 0x324)) {
            iVar15 = 0;
            do {
              iVar13 = *(int *)(iVar11 + 800);
              iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
              if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Body"), iVar12 != 0)) {
                puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_4 = local_4 + 1;
              iVar15 = iVar15 + 0x70;
            } while (local_4 < *(short *)(iVar11 + 0x324));
          }
        }
        *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) & 0xffffffef;
      }
    }
    if (*(int *)(param_1 + 0x4b0) == 0x2070a) {
      if ((*(byte *)(param_1 + 0x12b0) & 0x20) == 0) {
        if (bVar9) {
          FUN_00ac9420("ex_Full");
          iVar11 = FUN_00a81330();
          if (iVar11 != 0) {
            FUN_00a81330();
            iVar11 = FUN_00a7c8a0();
            if (iVar11 != 0) {
              iVar11 = FUN_005ab010();
              local_4 = 0;
              if (0 < *(short *)(iVar11 + 0x324)) {
                iVar15 = 0;
                do {
                  iVar13 = *(int *)(iVar11 + 800);
                  iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
                  if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Full"), iVar12 != 0)) {
                    puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                    *puVar1 = *puVar1 | 1;
                  }
                  local_4 = local_4 + 1;
                  iVar15 = iVar15 + 0x70;
                } while (local_4 < *(short *)(iVar11 + 0x324));
              }
            }
          }
          pcVar2 = *(code **)(*(int *)(param_1 + 0x1150) + 8);
          *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) | 0x20;
          (*pcVar2)(0x3f800000,0,0);
          FUN_005c4060(0xd,param_1 + 0x1150);
        }
        *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) & 0xffffffdf;
      }
      else if (!bVar9) {
        if ((*(byte *)(param_1 + 0x12b4) & 0x20) == 0) {
          (**(code **)(*(int *)(param_1 + 0x1150) + 8))(0x3f800000,0,0);
          FUN_005c4060(0x13,param_1 + 0x1150);
          *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) | 0x20;
          *(undefined4 *)(param_1 + 0xdd4) = 0x42480000;
        }
        fVar22 = *(float *)(param_1 + 0xdd4) - *(float *)(param_1 + 0x910);
        *(float *)(param_1 + 0xdd4) = fVar22;
        if (fVar22 < 0.0) {
          FUN_00ac94e0("ex_Full");
          iVar11 = FUN_005ab010();
          if (iVar11 != 0) {
            iVar11 = FUN_005ab010();
            local_4 = 0;
            if (0 < *(short *)(iVar11 + 0x324)) {
              iVar15 = 0;
              do {
                iVar13 = *(int *)(iVar11 + 800);
                iVar12 = *(int *)(*(int *)(iVar13 + 0x60 + iVar15) + 0x40);
                if ((iVar12 != 0) && (iVar12 = FUN_00fdbbd0(iVar12,"ex_Full"), iVar12 != 0)) {
                  puVar1 = (uint *)(iVar13 + 0x38 + iVar15);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
                local_4 = local_4 + 1;
                iVar15 = iVar15 + 0x70;
              } while (local_4 < *(short *)(iVar11 + 0x324));
            }
          }
          *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) & 0xffffffdf;
        }
      }
      if ((*(byte *)(param_1 + 0x12b0) & 0x40) == 0) {
        if (iVar10 != 0) {
          FUN_00ac9420("ex_weak");
          iVar10 = FUN_00a81330();
          if (iVar10 != 0) {
            FUN_00a81330();
            iVar10 = FUN_00a7c8a0();
            if (iVar10 != 0) {
              iVar10 = FUN_005ab010();
              local_4 = 0;
              if (0 < *(short *)(iVar10 + 0x324)) {
                iVar11 = 0;
                do {
                  iVar15 = *(int *)(iVar10 + 800);
                  iVar13 = *(int *)(*(int *)(iVar15 + 0x60 + iVar11) + 0x40);
                  if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_weak"), iVar13 != 0)) {
                    puVar1 = (uint *)(iVar15 + 0x38 + iVar11);
                    *puVar1 = *puVar1 | 1;
                  }
                  local_4 = local_4 + 1;
                  iVar11 = iVar11 + 0x70;
                } while (local_4 < *(short *)(iVar10 + 0x324));
              }
            }
          }
          pcVar2 = *(code **)(*(int *)(param_1 + 0x1200) + 8);
          *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) | 0x40;
          (*pcVar2)(0x3f800000,0,0);
          FUN_005c4060(0x16,param_1 + 0x1200);
        }
        *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) & 0xffffffbf;
      }
      else if (iVar10 == 0) {
        if ((*(byte *)(param_1 + 0x12b4) & 0x40) == 0) {
          (**(code **)(*(int *)(param_1 + 0x1200) + 8))(0x3f800000,0,0);
          FUN_005c4060(0x17,param_1 + 0x1200);
          *(uint *)(param_1 + 0x12b4) = *(uint *)(param_1 + 0x12b4) | 0x40;
          *(undefined4 *)(param_1 + 0xdd8) = 0x42480000;
        }
        fVar22 = *(float *)(param_1 + 0xdd8) - *(float *)(param_1 + 0x910);
        *(float *)(param_1 + 0xdd8) = fVar22;
        if (fVar22 < 0.0) {
          FUN_00ac94e0("ex_weak");
          iVar10 = FUN_005ab010();
          if (iVar10 != 0) {
            iVar10 = FUN_005ab010();
            local_4 = 0;
            if (0 < *(short *)(iVar10 + 0x324)) {
              iVar11 = 0;
              do {
                iVar15 = *(int *)(iVar10 + 800);
                iVar13 = *(int *)(*(int *)(iVar15 + 0x60 + iVar11) + 0x40);
                if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_weak"), iVar13 != 0)) {
                  puVar1 = (uint *)(iVar15 + 0x38 + iVar11);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
                local_4 = local_4 + 1;
                iVar11 = iVar11 + 0x70;
              } while (local_4 < *(short *)(iVar10 + 0x324));
            }
          }
          *(uint *)(param_1 + 0x12b0) = *(uint *)(param_1 + 0x12b0) & 0xffffffbf;
        }
      }
    }
  }
  iVar10 = FUN_00a8c760(0x3b);
  if (((iVar10 != 0) && (iVar10 = FUN_00a81330(), iVar10 != 0)) &&
     (iVar10 = FUN_00a7c8a0(), iVar10 != 0)) {
    iVar10 = FUN_00a81330();
    if (iVar10 != 0) {
      FUN_00a7c8a0();
    }
    fVar20 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    fVar22 = (float)fVar20;
    uVar21 = 0;
    uVar14 = 0x8000010;
    fVar20 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    FUN_00a9e290(&DAT_01641bdc,1,0,(float)fVar20,uVar14,uVar21,fVar22);
  }
  return;
}

// 005C6550  Em0700::vf4C  size=229  [class]
void __fastcall Em0700::vf4C(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  BehaviorEmBase::vf4C();
  FUN_005c3580();
  FUN_005c4c10();
  FUN_005c5040();
  FUN_005b5460();
  FUN_005ae080();
  if (((DAT_01bea060 & 0x42000000) == 0) && (iVar1 = *(int *)(param_1 + 0xa84), iVar1 != 0)) {
    local_20 = *(undefined4 *)(iVar1 + 0x50);
    local_1c = *(undefined4 *)(iVar1 + 0x54);
    local_18 = *(undefined4 *)(iVar1 + 0x58);
    local_14 = *(undefined4 *)(iVar1 + 0x5c);
    FUN_00a8d230(&local_20);
    iVar1 = FUN_00a8c760(0x13);
    FUN_00a84720();
    switchD_0080dbae::default();
    FUN_00a84780(&local_20,iVar1 == 0,iVar1 == 0,0,0,0x3f800000);
    return;
  }
  FUN_00a84720();
  return;
}

// 00AAE770  Em0700::Em0700  size=231  [class]
undefined4 * __fastcall Em0700::Em0700(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = vftable;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a7c930();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a7c930();
  iVar1 = 4;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a603a0();
  FUN_00a7c930();
  cEspControler::cEspControler();
  return param_1;
}

// 00AAE860  Em0700::vf04  size=6  [class]
undefined * Em0700::vf04(void)

{
  return &DAT_01b351c0;
}

// 00AAE870  FUN_00aae870  size=132  [callgraph]
void FUN_00aae870(void)

{
  cEspControler::~cEspControler();
  cXml::cXml_7();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  return;
}

// 00AB75D0  Em0700::destruct  size=30  [class]
undefined4 __thiscall Em0700::destruct(undefined4 param_1,byte param_2)

{
  FUN_00aae870();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


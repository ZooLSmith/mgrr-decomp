// src/enemy/emc700/Emc700.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0083FC40..00ABA030, 161 functions

#include "mgrr.h"
#include "Emc700.h"

// 0083FC40  FUN_0083fc40  size=37  [callgraph]
undefined4 FUN_0083fc40(void)

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

// 0083FC80  FUN_0083fc80  size=37  [callgraph]
undefined4 FUN_0083fc80(void)

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

// 0083FD00  FUN_0083fd00  size=27  [callgraph]
undefined4 __fastcall FUN_0083fd00(int param_1)

{
  if ((*(int *)(param_1 + 0xe80) == 0) && (*(int *)(param_1 + 0x1760) == 0)) {
    return 0;
  }
  return 1;
}

// 0083FE30  FUN_0083fe30  size=28  [callgraph]
void FUN_0083fe30(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 0083FE80  FUN_0083fe80  size=28  [callgraph]
void FUN_0083fe80(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 0083FEA0  FUN_0083fea0  size=26  [callgraph]
void __fastcall FUN_0083fea0(int param_1)

{
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x1444) = 0xffffffff;
  return;
}

// 0083FEC0  Emc700::vf264  size=8  [class]
undefined4 Emc700::vf264(void)

{
  return 1;
}

// 0083FED0  Emc700::thunk_vf54  size=5  [class]
void __fastcall Emc700::thunk_vf54(int *param_1)

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

// 0083FF20  Emc700::vf17C  size=3  [class]
undefined4 Emc700::vf17C(void)

{
  return 0;
}

// 0083FF30  Emc700::vf184  size=23  [class]
undefined4 __thiscall Emc700::vf184(int *param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x17c))();
  }
  return 0xffffffff;
}

// 0083FF50  Emc700::vf188  size=50  [class]
void Emc700::vf188(undefined4 param_1,int param_2)

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

// 0083FF90  FUN_0083ff90  size=139  [between]
void __fastcall FUN_0083ff90(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x177c) = 1;
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

// 00840020  FUN_00840020  size=355  [between]
void __fastcall FUN_00840020(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[0x5df] = 1;
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

// 008401A0  FUN_008401a0  size=240  [between]
void __fastcall FUN_008401a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[0x5df] = 1;
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
  else if (iVar1 != 1) goto LAB_00840249;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00840249:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 008402C0  FUN_008402c0  size=129  [between]
undefined4 __fastcall FUN_008402c0(int param_1)

{
  uint local_20 [8];
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[3] = 0;
    local_20[4] = 0;
    local_20[5] = 0;
    local_20[6] = 0;
    local_20[7] = 0;
    FUN_00c3dac0(param_1 + 0x40,local_20);
    FUN_00c3dac0(*(int *)(param_1 + 0xa84) + 0x40,local_20 + 4);
    if (((local_20[0] & 0x2000000) != 0) && ((local_20[4] & 0x1000000) != 0)) {
      return 1;
    }
  }
  return 0;
}

// 008404B0  FUN_008404b0  size=71  [between]
void __fastcall FUN_008404b0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
    FUN_00a8caf0(0x30007,0,0,0);
  }
  return;
}

// 008405F0  Emc700::vf34C  size=27  [class]
void __fastcall Emc700::vf34C(int param_1)

{
  *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x847fffff;
  FUN_00a8caf0(0x10000,0,0,0);
  return;
}

// 00840690  FUN_00840690  size=1  [between]
void FUN_00840690(void)

{
  return;
}

// 008406B0  FUN_008406b0  size=1  [between]
void FUN_008406b0(void)

{
  return;
}

// 008406D0  FUN_008406d0  size=1  [between]
void FUN_008406d0(void)

{
  return;
}

// 008406F0  FUN_008406f0  size=1  [between]
void FUN_008406f0(void)

{
  return;
}

// 00840720  FUN_00840720  size=57  [between]
void FUN_00840720(short param_1)

{
  short *psVar1;
  
  psVar1 = &DAT_016489e8;
  do {
    FUN_00a33520(param_1 == *psVar1,0xc00,*psVar1);
    psVar1 = psVar1 + 1;
  } while ((int)psVar1 < 0x1648a04);
  return;
}

// 008407A0  FUN_008407a0  size=1  [between]
void FUN_008407a0(void)

{
  return;
}

// 008407B0  FUN_008407b0  size=1217  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_008407b0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4520(0x2cb,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
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
    fVar4 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + 3.1415927);
    *(float *)(param_1 + 0x27ec) = (float)fVar4;
    FUN_00cad1b0(0);
    FUN_0085dcf0(iVar3,0x2e5,0x8000080);
    uVar5 = 0x2ff;
    break;
  case 1:
  case 3:
    goto switchD_00840806_caseD_1;
  case 2:
    FUN_00aa4520(0x2cc,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar3,0x2e6,0x8000080);
    uVar5 = 0x300;
    break;
  case 4:
    FUN_00aa4520(0x2cd,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0x940) = 0;
    FUN_0085dcf0(iVar3,0x2e7,0x8000080);
    FUN_00864480(0x301,iVar3,0,0,0x3f800000,0x8000080);
    goto LAB_00840ac3;
  case 5:
LAB_00840ac3:
    fVar1 = *(float *)(param_1 + 0x920) - 0.01;
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 < 0.5) {
      *(undefined4 *)(param_1 + 0x920) = 0x3f000000;
    }
    FUN_00a96030(0,*(undefined4 *)(param_1 + 0x920));
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x920);
        uVar6 = 0;
        FUN_004b5380(0,uVar5);
        FUN_00a96030(uVar6,uVar5);
      }
    }
    iVar3 = FUN_0085dcd0();
    if (iVar3 != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x920);
      uVar6 = 0;
      FUN_0085dcd0(0,uVar5);
      FUN_00a96030(uVar6,uVar5);
    }
    BehaviorAppBase::thunk_vf64();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8caf0(0x100075,0,0,0);
    }
    FUN_00cbc8f0(0x1000,1);
    if ((*(byte *)(param_1 + 0xcfc) & 0x40) != 0) {
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
      fVar1 = *(float *)(param_1 + 0x920) + 0.15;
      *(float *)(param_1 + 0x920) = fVar1;
      if (2.0 <= fVar1) {
        *(undefined4 *)(param_1 + 0x920) = 0x40000000;
      }
      FUN_00dda360(0,0x3f19999a,0x3f19999a,6);
    }
    iVar3 = FUN_00a8c760(0x16);
    if ((iVar3 != 0) && (iVar3 = FUN_00a12210(0xf10), iVar3 != 0)) {
      iVar3 = FUN_00a12210(0xf10);
      fVar1 = *(float *)(iVar3 + 0x54) * 10.0;
      fVar2 = 0.01;
      if ((0.01 <= fVar1) && (fVar2 = fVar1, 2.01 < fVar1)) {
        fVar2 = 2.0;
      }
      FUN_00b7ab80(0x40000000,fVar2);
      return;
    }
  default:
    goto switchD_00840806_default;
  }
  FUN_00864480(uVar5,iVar3,0,0,0x3f800000,0x8000080);
switchD_00840806_caseD_1:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  iVar3 = FUN_00a8c760(0x16);
  if ((iVar3 != 0) && (iVar3 = FUN_00a12210(0xf10), iVar3 != 0)) {
    iVar3 = FUN_00a12210(0xf10);
    fVar1 = *(float *)(iVar3 + 0x54) * 10.0;
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
switchD_00840806_default:
  return;
}

// 00840C90  FUN_00840c90  size=1  [between]
void FUN_00840c90(void)

{
  return;
}

// 00840CA0  FUN_00840ca0  size=1540  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00840ca0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar4 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar4 = FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00a94bc0(9,0);
    FUN_00aa4520(0x2ce,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(uint *)(iVar4 + 0x13ac) = *(uint *)(iVar4 + 0x13ac) & 0x847fffff;
    FUN_00a8caf0(0x70005,0,0,0);
    FUN_0085dcf0(iVar3,0x2e8,0x8000080);
    uVar5 = 0x302;
    break;
  case 1:
  case 3:
  case 5:
    goto switchD_00840cfb_caseD_1;
  case 2:
    FUN_00aa4520(0x2cf,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar3,0x2e9,0x8000080);
    uVar5 = 0x303;
    break;
  case 4:
    FUN_00aa4520(0x2d0,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar3,0x2ea,0x8000080);
    uVar5 = 0x304;
    break;
  case 6:
    FUN_00aa4520(0x2d1,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar3,0x2eb,0x8000080);
    FUN_00864480(0x305,iVar3,0,0,0x3f800000,0x8000080);
  case 7:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    iVar3 = FUN_00a8c760(0x16);
    if ((iVar3 != 0) && (iVar3 = FUN_00a12210(0xf10), iVar3 != 0)) {
      iVar3 = FUN_00a12210(0xf10);
      fVar1 = *(float *)(iVar3 + 0x54) * 10.0;
      if (0.01 <= fVar1) {
        if (2.01 < fVar1) {
          fVar1 = 2.0;
        }
      }
      else {
        fVar1 = 0.01;
      }
      FUN_00b7ab80(0x40000000,fVar1);
    }
    iVar3 = FUN_00a8c760(5);
    if (iVar3 != 0) {
      FUN_00cbc8f0(0x2000,1);
      if ((*(byte *)(param_1 + 0xcfc) & 0x80) != 0) {
        FUN_00dda360(0,0x3f19999a,0x3f19999a,6);
        return;
      }
      return;
    }
    return;
  case 8:
    FUN_00aa4520(0x2d2,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x3f4ccccd;
    *(undefined4 *)(param_1 + 0x940) = 0;
    FUN_0085dcf0(iVar3,0x2ec,0x8000080);
    FUN_00864480(0x306,iVar3,0,0,0x3f800000,0x8000080);
    goto LAB_008410f4;
  case 9:
LAB_008410f4:
    fVar1 = *(float *)(param_1 + 0x920) - 0.01;
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 < 0.5) {
      *(undefined4 *)(param_1 + 0x920) = 0x3f000000;
    }
    FUN_00a96030(0,*(undefined4 *)(param_1 + 0x920));
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x920);
        uVar6 = 0;
        FUN_004b5380(0,uVar5);
        FUN_00a96030(uVar6,uVar5);
      }
    }
    iVar3 = FUN_0085dcd0();
    if (iVar3 != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x920);
      uVar6 = 0;
      FUN_0085dcd0(0,uVar5);
      FUN_00a96030(uVar6,uVar5);
    }
    BehaviorAppBase::thunk_vf64();
    FUN_00cbc8f0(0x2000,1);
    if ((*(byte *)(param_1 + 0xcfc) & 0x80) != 0) {
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
      fVar1 = *(float *)(param_1 + 0x920) + 0.15;
      *(float *)(param_1 + 0x920) = fVar1;
      if (2.0 <= fVar1) {
        *(undefined4 *)(param_1 + 0x920) = 0x40000000;
      }
      FUN_00dda360(0,0x3f19999a,0x3f19999a,6);
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8caf0(0x100076,0,0,0);
    }
    iVar3 = FUN_00a8c760(0x16);
    if (iVar3 != 0) {
      iVar3 = FUN_00a12210(0xf10);
      if (iVar3 != 0) {
        iVar3 = FUN_00a12210(0xf10);
        fVar1 = *(float *)(iVar3 + 0x54) * 10.0;
        fVar2 = 0.01;
        if ((0.01 <= fVar1) && (fVar2 = fVar1, 2.01 < fVar1)) {
          fVar2 = 2.0;
        }
        FUN_00b7ab80(0x40000000,fVar2);
        return;
      }
      return;
    }
    return;
  default:
    return;
  }
  FUN_00864480(uVar5,iVar3,0,0,0x3f800000,0x8000080);
switchD_00840cfb_caseD_1:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  iVar3 = FUN_00a8c760(0x16);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_00a12210(0xf10);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_00a12210(0xf10);
  fVar1 = *(float *)(iVar3 + 0x54) * 10.0;
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

// 008412D0  FUN_008412d0  size=1  [between]
void FUN_008412d0(void)

{
  return;
}

// 008412E0  FUN_008412e0  size=1941  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_008412e0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_20 [8];
  
  iVar4 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar4 = FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4520(0x2d3,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(uint *)(iVar4 + 0x13ac) = *(uint *)(iVar4 + 0x13ac) & 0x847fffff;
    FUN_00a8caf0(0x70006,0,0,0);
    FUN_0085dcf0(iVar3,0x2ed,0x8000080);
    uVar5 = 0x307;
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
  case 0xb:
  case 0xd:
    goto switchD_00841344_caseD_1;
  case 2:
    FUN_00aa4520(0x2d4,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar3,0x2ee,0x8000080);
    uVar5 = 0x308;
    break;
  case 4:
    FUN_00aa4520(0x2d5,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar3,0x2ef,0x8000080);
    uVar5 = 0x309;
    break;
  case 6:
    FUN_00aa4520(0x2d6,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar3,0x2f0,0x8000080);
    uVar5 = 0x30a;
    break;
  case 8:
    FUN_00aa4520(0x2d7,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar3,0x2f1,0x8000080);
    uVar5 = 0x30b;
    break;
  case 10:
    FUN_00aa4520(0x2d8,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar3,0x2f2,0x8000080);
    uVar5 = 0x30c;
    break;
  case 0xc:
    FUN_00aa4520(0x2d9,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar3,0x2f3,0x8000080);
    uVar5 = 0x30d;
    break;
  case 0xe:
    FUN_00aa4520(0x2da,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar3,0x2f4,0x8000080);
    FUN_00864480(0x30e,iVar3,0,0,0x3f800000,0x8000080);
    sVar2 = FUN_00dde2d0(0,3);
    *(int *)(param_1 + 0x940) = (int)sVar2;
    goto LAB_0084178f;
  case 0xf:
LAB_0084178f:
    iVar3 = FUN_00a8c760(0x16);
    if ((iVar3 != 0) && (iVar3 = FUN_00a12210(0xf10), iVar3 != 0)) {
      iVar3 = FUN_00a12210(0xf10);
      fVar1 = *(float *)(iVar3 + 0x54) * 10.0;
      if (0.01 <= fVar1) {
        if (2.01 < fVar1) {
          fVar1 = 2.0;
        }
      }
      else {
        fVar1 = 0.01;
      }
      FUN_00b7ab80(0x40000000,fVar1);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 0x12;
    }
    iVar3 = FUN_00a8c760(0x20);
    if (iVar3 == 0) {
      return;
    }
    FUN_00b85350(0x40a00000,0x3d23d70a,0x3d23d70a,1,0,0x3dcccccd);
    local_20[0] = 1;
    local_20[1] = 2;
    local_20[2] = 4;
    local_20[3] = 8;
    local_20[4] = 0x10;
    local_20[5] = 0x20;
    local_20[6] = 0x40;
    local_20[7] = 0x80;
    FUN_00cbc8f0(local_20[*(int *)(param_1 + 0x940)],1);
    if ((*(uint *)(param_1 + 0xcfc) & 0x6cf0) == 0) {
      return;
    }
    if ((local_20[*(int *)(param_1 + 0x940) + 4] & *(uint *)(param_1 + 0xcfc)) == 0) {
      uVar5 = 0x12;
    }
    else {
      uVar5 = 0x10;
    }
    FUN_00a8caf0(0x100076,uVar5,0,0);
    FUN_00b7aa80();
    return;
  case 0x10:
    FUN_00aa4520(0x2dc,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00a8cb60(0x10);
    FUN_0085dcf0(iVar3,0x2f6,0x8000080);
    FUN_00864480(0x310,iVar3,0,0,0x3f800000,0x8000080);
  case 0x11:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8caf0(0x100077,0,0,0);
    }
    goto LAB_008413fb;
  case 0x12:
    FUN_00aa4520(0x2db,iVar3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar3,0x2f5,0x8000080);
    FUN_00864480(0x30f,iVar3,0,0,0x3f800000,0x8000080);
    FUN_00a8cb60(0x12);
  case 0x13:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a952e0(0,0x42f00000);
    if (iVar3 != 0) {
      FUN_00c420c0(0x42700000);
    }
    FUN_00a94ce0(0);
    goto LAB_008413fb;
  default:
    goto switchD_00841344_default;
  }
  FUN_00864480(uVar5,iVar3,0,0,0x3f800000,0x8000080);
switchD_00841344_caseD_1:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
LAB_008413fb:
  iVar3 = FUN_00a8c760(0x16);
  if ((iVar3 != 0) && (iVar3 = FUN_00a12210(0xf10), iVar3 != 0)) {
    iVar3 = FUN_00a12210(0xf10);
    fVar1 = *(float *)(iVar3 + 0x54) * 10.0;
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
switchD_00841344_default:
  return;
}

// 00841AD0  FUN_00841ad0  size=1  [between]
void FUN_00841ad0(void)

{
  return;
}

// 00841AE0  FUN_00841ae0  size=1517  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00841ae0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4520(0x2dd,iVar2,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(uint *)(iVar3 + 0x13ac) = *(uint *)(iVar3 + 0x13ac) & 0x847fffff;
    FUN_00a8caf0(0x70007,0,0,0);
    *(undefined4 *)(param_1 + 0x944) = 0;
    FUN_0085dcf0(iVar2,0x2f7,0x8000080);
    uVar4 = 0x311;
    break;
  case 1:
  case 3:
  case 5:
  case 9:
    goto switchD_00841b3b_caseD_1;
  case 2:
    FUN_00aa4520(0x2de,iVar2,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar2,0x2f8,0x8000080);
    uVar4 = 0x312;
    break;
  case 4:
    FUN_00aa4520(0x2df,iVar2,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar2,0x2f9,0x8000080);
    uVar4 = 0x313;
    break;
  case 6:
    FUN_00aa4520(0x2e0,iVar2,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x944) = 0;
    FUN_0085dcf0(iVar2,0x2fa,0x8000080);
    FUN_00864480(0x314,iVar2,0,0,0x3f800000,0x8000080);
    goto LAB_00841dd1;
  case 7:
LAB_00841dd1:
    iVar2 = FUN_00a8c760(0x20);
    if (iVar2 != 0) {
      FUN_00b85350(0x40a00000,0x3ca3d70a,0x3ca3d70a,1,0,0x3dcccccd);
      FUN_00cbc8f0(10,1);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    iVar2 = FUN_00a8c760(0x20);
    if ((iVar2 != 0) &&
       ((((*(uint *)(param_1 + 0xe5c) & *(uint *)(param_1 + 0xcf8)) != 0 &&
         ((*(uint *)(param_1 + 0xe60) & *(uint *)(param_1 + 0xcf8)) != 0)) ||
        (iVar2 = FUN_00a1d280(0x14), iVar2 != 0)))) {
      *(undefined4 *)(param_1 + 0x61c) = 8;
      FUN_00b7aa80();
    }
    goto LAB_00841bfc;
  case 8:
    FUN_00aa4520(0x2e1,iVar2,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar2,0x2fb,0x8000080);
    FUN_00864480(0x315,iVar2,0,0,0x3f800000,0x8000080);
    FUN_00a8cb60(8);
    FUN_00e5e1b0("bgm_pc60_QTE_exit");
    goto switchD_00841b3b_caseD_1;
  case 10:
    FUN_00aa4520(0x2e2,iVar2,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar2,0x2fc,0x8000080);
    uVar4 = 0x316;
    goto LAB_00841f7e;
  case 0xb:
  case 0xd:
    goto switchD_00841b3b_caseD_b;
  case 0xc:
    FUN_00aa4520(0x2e3,iVar2,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0085dcf0(iVar2,0x2fd,0x8000080);
    uVar4 = 0x317;
LAB_00841f7e:
    FUN_00864480(uVar4,iVar2,0,0,0x3f800000,0x8000080);
switchD_00841b3b_caseD_b:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    iVar2 = FUN_00a8c760(0x16);
    if ((iVar2 != 0) && (iVar2 = FUN_00a12210(0xf10), iVar2 != 0)) {
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
    }
    iVar2 = FUN_00a8c760(0xb);
    if (iVar2 == 0) {
      return;
    }
    FUN_00d5ea40("PC60_ARM_RESULT",1,0);
    return;
  case 0xe:
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_00841b3b_default;
  }
  FUN_00864480(uVar4,iVar2,0,0,0x3f800000,0x8000080);
switchD_00841b3b_caseD_1:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
LAB_00841bfc:
  iVar2 = FUN_00a8c760(0x16);
  if ((iVar2 != 0) && (iVar2 = FUN_00a12210(0xf10), iVar2 != 0)) {
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
  }
switchD_00841b3b_default:
  return;
}

// 00842110  FUN_00842110  size=1509  [between]
void __fastcall FUN_00842110(int param_1)

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
  *(undefined4 *)(param_1 + 0xe90) = 0x42480000;
  *(undefined4 *)(param_1 + 0xe94) = 0x42480000;
  *(undefined4 *)(param_1 + 0xe98) = 0x42480000;
  *(undefined4 *)(param_1 + 0xe9c) = 0x42480000;
  *(undefined4 *)(param_1 + 0xea0) = 0x42480000;
  *(undefined4 *)(param_1 + 0x1380) = 0;
  *(undefined4 *)(param_1 + 0xea4) = 0x42480000;
  *(undefined4 *)(param_1 + 0x1384) = 0;
  *(undefined4 *)(param_1 + 0xea8) = 0x42480000;
  return;
}

// 00842710  FUN_00842710  size=138  [between]
void __fastcall FUN_00842710(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        iVar1 = FUN_00a7c8a0();
        if (iVar1 != 0) {
          iVar1 = FUN_00a81330();
          if (iVar1 != 0) {
            FUN_00a81330();
            FUN_00a7c8a0();
            FUN_00a95ee0(0,param_1);
            return;
          }
          FUN_00a95ee0(0,param_1);
        }
      }
    }
  }
  return;
}

// 008427F0  FUN_008427f0  size=23  [between]
void FUN_008427f0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return;
  }
  FUN_00a7c8a0();
  return;
}

// 00842810  FUN_00842810  size=39  [between]
void FUN_00842810(int param_1)

{
  undefined4 uVar1;
  
  FUN_00a7c950();
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 00842840  FUN_00842840  size=100  [between]
void FUN_00842840(undefined4 param_1,undefined4 param_2)

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
      FUN_00a9e290(param_1,0,0,0x3f800000,param_2,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 00842AA0  FUN_00842aa0  size=77  [between]
void __fastcall FUN_00842aa0(int *param_1)

{
  (**(code **)(*param_1 + 0x314))();
  param_1[0x24] = 0;
  FUN_00eaa6e0(0x42700000,0);
  FUN_00c5ad80(param_1[0x4ec]);
  param_1[0x4ec] = -1;
  return;
}

// 00842BF0  FUN_00842bf0  size=130  [between]
void __fastcall FUN_00842bf0(int *param_1)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  
  cVar2 = (char)param_1[0x5e3];
  if (cVar2 == '\x01') {
    fVar1 = (float)param_1[0x5e2];
    param_1[0x5e2] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      *(undefined1 *)(param_1 + 0x5e3) = 2;
    }
  }
  else {
    if (cVar2 == '\x02') {
      pcVar3 = *(code **)(*param_1 + 0x358);
      param_1[0x5e2] = 0x42700000;
      *(undefined1 *)(param_1 + 0x5e3) = 3;
      (*pcVar3)(0x58,0);
    }
    else if (cVar2 != '\x03') {
      return;
    }
    fVar1 = (float)param_1[0x5e2];
    param_1[0x5e2] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      *(undefined1 *)(param_1 + 0x5e3) = 0;
      return;
    }
  }
  return;
}

// 00842C80  FUN_00842c80  size=130  [between]
void __thiscall FUN_00842c80(int param_1,int param_2)

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

// 00842D10  FUN_00842d10  size=56  [between]
void __fastcall FUN_00842d10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  if ((*(int *)(param_1 + 0x870) <= iVar1) && ((*(byte *)(param_1 + 0x18e8) & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x18ec) = 0;
    *(byte *)(param_1 + 0x18e8) = *(byte *)(param_1 + 0x18e8) | 1;
  }
  return;
}

// 00842D60  FUN_00842d60  size=69  [between]
undefined4 __fastcall FUN_00842d60(int param_1)

{
  if (((*(byte *)(param_1 + 0x18e8) & 1) != 0) && (*(float *)(param_1 + 0x18ec) < 0.0)) {
    *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x847fffff;
    FUN_00a8caf0(0x20008,0,0,0);
    *(undefined4 *)(param_1 + 0x18ec) = *(undefined4 *)(param_1 + 0x1718);
  }
  return 0;
}

// 00842DB0  Emc700::vf10C  size=29  [class]
undefined4 Emc700::vf10C(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0x20701) {
    return 0;
  }
  uVar1 = FUN_00a81330();
  return uVar1;
}

// 00842DD0  FUN_00842dd0  size=102  [between]
void FUN_00842dd0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  iVar1 = 0x10;
  do {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      FUN_00a805f0();
      FUN_00a7c950();
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00842E40  FUN_00842e40  size=73  [between]
void __fastcall FUN_00842e40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x847fffff;
  if (1 < iVar1) {
    FUN_00a8caf0(0x1000c,0,0,0);
    FUN_00840720(0xe);
    return;
  }
  FUN_00a8caf0(0x10005,0,0,0);
  FUN_00840720(0xe);
  return;
}

// 00842EF0  Emc700::vf150  size=449  [class]
void __thiscall Emc700::vf150(int *param_1,int param_2,int param_3)

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
    FUN_00c5ad80(param_1[0x4ec]);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x4ec] = -1;
    (*pcVar1)(0x41200000);
    if (param_2 == 0x5e) {
      uStack_24 = 0xc3440000;
      uStack_20 = 0xc0e3851f;
      uStack_1c = 0x43f5b333;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      (**(code **)(*param_1 + 0x7c))(&uStack_24,&uStack_34);
      return;
    }
    if (param_2 == 0x89) {
      uVar2 = 0x70004;
    }
    else if (param_2 == 0x5f) {
      uVar2 = 0x70008;
    }
    else if (param_2 == 100) {
      uVar2 = 0x7000d;
    }
    else if (param_2 == 0x60) {
      uVar2 = 0x70009;
    }
    else if (param_2 == 0x61) {
      uVar2 = 0x7000a;
    }
    else if (param_2 == 0x62) {
      uVar2 = 0x7000b;
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
      uVar2 = 0x7000c;
    }
    param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
    FUN_00a8caf0(uVar2,0,0,0);
  }
  return;
}

// 008430C0  Emc700::vf158  size=5  [class]
undefined4 Emc700::vf158(void)

{
  return 0;
}

// 008430D0  Emc700::vf15C  size=33  [class]
void Emc700::vf15C(undefined4 param_1,undefined4 param_2)

{
  BehaviorAppBase::vf15C(param_1,param_2);
  FUN_00a93090(6);
  return;
}

// 00843EA0  Emc700::vf44  size=636  [class]
void __fastcall Emc700::vf44(int param_1)

{
  int iVar1;
  
  DAT_01bea094 = DAT_01bea094 & 0xffffffdf;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      FUN_009fdde0();
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
      FUN_009fdde0();
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
      FUN_009fdde0();
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
      FUN_009fdde0();
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
      FUN_009fdde0();
    }
  }
  FUN_00a7c950();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
      }
      FUN_009fdde0();
    }
  }
  FUN_00a7c950();
  FUN_00842dd0();
  FUN_00c5ad80(*(undefined4 *)(param_1 + 0x13b0));
  *(undefined4 *)(param_1 + 0x13b0) = 0xffffffff;
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

// 00844120  FUN_00844120  size=78  [between]
undefined4 __thiscall FUN_00844120(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar2 = FUN_00a7c8a0();
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x4c0) & 0x10) != 0)) {
      FUN_00a8c760(0x10);
    }
  }
  (**(code **)(*param_1 + 0x198))(iVar2,param_2,1);
  return 0;
}

// 00844170  FUN_00844170  size=584  [between]
undefined4 __thiscall FUN_00844170(int *param_1,int *param_2)

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
  param_1[0x554] = param_1[0x554] - (int)param_2;
  if (param_1[0x554] < -1) {
    param_1[0x554] = -1;
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
       ((((((iVar3 = *piVar2, iVar3 == 0x2a || (iVar3 == 0x4a)) || (iVar3 == 0x20)) ||
          (((iVar3 == 0x8b || (iVar3 == 0x8c)) ||
           ((iVar3 == 0x1ab || ((iVar3 == 0x1ac || (iVar3 == 0x1ad)))))))) || (iVar3 == 0x1ae)) ||
        ((iVar3 == 0x1af || (iVar3 == 0x8d)))))) {
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
    param_1[0x5dd] = param_1[0x5dd] + 1;
    if ((piVar2[0x23] & 0x40000000U) != 0) {
      param_1[0x5de] = param_1[0x5de] + -1;
    }
  }
  uVar5 = 1;
  iVar3 = FUN_00a8c760(0x3c);
  if (iVar3 == 0) {
    iVar3 = FUN_00a8c760(0x32);
    if (iVar3 == 0) goto LAB_0084432d;
  }
  uVar5 = 0x40001;
LAB_0084432d:
  if ((((piVar2[0x23] & 0x40000000U) != 0) && (param_1[0x5df] != 0)) && (param_1[0x5de] < 1)) {
    param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
    FUN_00a8caf0(0x2000a,0,0,0);
    param_1[0x5de] = 0xf;
    uVar5 = uVar5 | 0x40000;
  }
  (**(code **)(*param_1 + 0x30c))(param_2,0);
  if (param_1[0x21c] < 2) {
    param_1[0x21c] = 1;
  }
  (**(code **)(*param_1 + 0x198))(piVar4,piVar2,uVar5);
  return 1;
}

// 008443C0  FUN_008443c0  size=1650  [between]
undefined4 __thiscall FUN_008443c0(int *param_1,int *param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint unaff_EBX;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_c;
  int *local_4;
  
  local_4 = (int *)0x0;
  bVar1 = false;
  if ((*param_2 == 0x2f) || (*param_2 == 0x1b7)) {
    bVar1 = true;
  }
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    local_4 = (int *)FUN_00a7c8a0();
  }
  uVar4 = param_2[0x23];
  local_c = param_2[1];
  if ((uVar4 & 0x200) != 0) {
    local_c = FUN_00fdbc60();
  }
  if ((uVar4 & 0x10000000) != 0) {
    param_1[0x5d9] = 0;
    local_c = 1;
    param_1[0x5db] = 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x20) != 0) {
    param_1[0x5d9] = 0;
    local_c = 0;
    param_1[0x5db] = 0;
  }
  if (*param_2 == 0x1b6) {
    param_1[0x5d9] = 0;
    param_1[0x5db] = 0;
  }
  if (*param_2 == 0x94) {
    param_1[0x5d9] = 0;
    param_1[0x5db] = 0;
  }
  else if (local_c < 1) goto LAB_008444be;
  local_c = FUN_00fdbc60();
  if (local_c < 2) {
    local_c = 1;
  }
LAB_008444be:
  if (((local_4 != (int *)0x0) && ((*(byte *)(local_4 + 0x130) & 0x10) != 0)) &&
     (local_4[0x139] == 0)) {
    iVar3 = FUN_00a8c760(0x22);
    if ((iVar3 != 0) && (param_1[0x4f0] != 0)) {
      param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
      FUN_00a8caf0(0x30003,0,0,0);
      *(byte *)((int)param_1 + 0x18db) =
           *(byte *)((int)param_1 + 0x18db) | *(byte *)((int)param_1 + 0x18da);
      param_1[0x639] = 0;
      return 1;
    }
    iVar3 = FUN_00a8c760(0x22);
    if ((iVar3 != 0) && ((*param_2 == 0x2f || (*param_2 == 0x1b7)))) {
      (**(code **)(*local_4 + 0x150))(0x62,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(0x62,local_4[0x13c]);
      return 0;
    }
    iVar3 = FUN_00a8c760(0x3d);
    if ((iVar3 != 0) &&
       (((((iVar3 = *param_2, iVar3 == 0x1a7 || (iVar3 == 0x1a8)) || (iVar3 == 0x1a9)) ||
         ((iVar3 == 0x1aa || (iVar3 == 0x1b1)))) || (iVar3 == 0x8d)))) {
      (**(code **)(*local_4 + 0x150))(0x60,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(0x60,local_4[0x13c]);
      return 0;
    }
    uVar4 = (uint)*(byte *)(param_2 + 4);
    iVar3 = FUN_00a8c760(0x10);
    if (iVar3 != 0) {
      uVar4 = (int)uVar4 >> 1;
    }
    (**(code **)(*param_1 + 0x21c))(local_4,uVar4,0x3c23d70a,0);
    uVar10 = 0x3f800000;
    uVar9 = 0xbf800000;
    uVar8 = 0x8000010;
    uVar7 = 0x3f800000;
    uVar6 = 0;
    uVar5 = 1;
    sVar2 = FUN_00dde2d0(0,1);
    FUN_00aa4080(sVar2 + 0x78,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10);
    param_1[0x5dd] = param_1[0x5dd] + 1;
    if ((!bVar1) && (*param_2 != 0x42)) {
      param_1[0x63c] = param_1[0x63c] + (uint)*(byte *)((int)param_2 + 0x11);
    }
    param_1[0x63d] = param_1[0x5cf];
  }
  if ((float)param_1[0x5ce] <= (float)param_1[0x63c]) {
    param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
    FUN_00a8caf0(0x30000,0,0,0);
    param_1[0x63c] = 0;
  }
  iVar3 = FUN_00a8c760(0x22);
  if (iVar3 != 0) {
    param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
    local_c = 0;
    FUN_00a8caf0(0x20012,0,0,0);
  }
  (**(code **)(*param_1 + 0x30c))(local_c,0);
  iVar3 = FUN_00a8c760(0x23);
  if (iVar3 != 0) {
    if ((local_4[0x24] & 0x2000000U) != 0) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x30004,0,0,0);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    if ((local_4[0x24] & 0x20000000U) != 0) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x30004,0,0,0);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    }
    if ((local_4[0x24] & 0x800000U) != 0) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x30005,0,0,0);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    }
  }
  iVar3 = FUN_00fdbc60();
  if ((iVar3 < param_1[0x21c]) || (param_1[0x5d7] != 0)) {
    iVar3 = FUN_00fdbc60();
    if ((param_1[0x21c] <= iVar3) && (param_1[0x5d8] == 0)) {
      iVar3 = FUN_00ac4780();
      if (iVar3 != 0) {
        iVar3 = FUN_00fdbc60();
        param_1[0x21c] = iVar3;
        param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
        param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
        param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
        param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
        FUN_00a8caf0(0x1000a,0,0,0);
        if (*local_4 == 0x2f) {
          unaff_EBX = unaff_EBX | 0x4000;
        }
        else {
          unaff_EBX = unaff_EBX | 0x40000;
        }
      }
    }
  }
  else {
    param_1[0x21c] = iVar3;
    param_1[0x5d6] = 1;
    param_1[0x5d7] = 1;
    param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
    FUN_00a8caf0(0x2000a,0,0,0);
    if (*local_4 == 0x2f) {
      unaff_EBX = unaff_EBX | 0x4000;
      param_1[0x604] = 1;
    }
    else {
      unaff_EBX = unaff_EBX | 0x40000;
      param_1[0x604] = 1;
    }
  }
  if (param_1[0x21c] < 2) {
    if (DAT_018b9174 == 0xc60) {
      FUN_00d5ea40("PC60_QTE",1,0);
    }
    param_1[0x139] = 1;
    return 1;
  }
  (**(code **)(*param_1 + 0x198))(local_c,local_4,unaff_EBX);
  return 1;
}

// 00844A40  Emc700::vf1A0  size=121  [class]
undefined4 __thiscall Emc700::vf1A0(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (*param_2 == 0x17c) {
    iVar2 = (**(code **)(*piVar1 + 0x14c))(0x61,param_1[0x13c]);
    if (iVar2 != 0) {
      (**(code **)(*piVar1 + 0x150))(0x61,param_1[0x13c]);
      (**(code **)(*param_1 + 0x150))(0x61,piVar1[0x13c]);
      return 1;
    }
  }
  return 0;
}

// 00844AC0  FUN_00844ac0  size=134  [between]
void __fastcall FUN_00844ac0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)param_1[0x2a1];
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar3);
    if ((iVar2 != 0) && ((float)param_1[0x2a3] <= 9.0)) {
      iVar2 = FUN_00ac82f0();
      if ((iVar2 != 0) && (99 < param_1[0x5d4])) {
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

// 00844B50  FUN_00844b50  size=134  [between]
void __fastcall FUN_00844b50(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)param_1[0x2a1];
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar3);
    if ((iVar2 != 0) && ((float)param_1[0x2a3] <= 9.0)) {
      iVar2 = FUN_00ac82f0();
      if ((iVar2 != 0) && (99 < param_1[0x5d4])) {
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

// 00844BE0  FUN_00844be0  size=134  [between]
void __fastcall FUN_00844be0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)param_1[0x2a1];
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar3);
    if ((iVar2 != 0) && ((float)param_1[0x2a3] <= 9.0)) {
      iVar2 = FUN_00ac82f0();
      if ((iVar2 != 0) && (99 < param_1[0x5d4])) {
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

// 00844C70  FUN_00844c70  size=1101  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00844c70(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  (**(code **)(*param_1 + 0x220))(0x41200000);
  if ((char)param_1[0x5e1] == '\x01') {
    param_1[0x5e0] = 0;
  }
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0x97,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    DAT_01bea060 = DAT_01bea060 | 0x8000000;
    uStack_24 = 0x436c3333;
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    uStack_1c = 0xc05eb852;
    uStack_30 = 0xbfc90fdb;
    if (param_1[0x186] == 0x1000c) {
      uStack_24 = 0x4353abe4;
      uStack_1c = 0x413fe4b8;
      uStack_30 = 0x401c61aa;
    }
    uStack_20 = 0x43adc000;
    uStack_2c = 0;
    uStack_34 = 0;
    (**(code **)(*param_1 + 0x7c))(&uStack_24,&uStack_34);
    if ((int *)param_1[0x2a1] != (int *)0x0) {
      uStack_34 = 0x435cc000;
      uStack_2c = 0xc05eb852;
      uStack_20 = 0x3fc90fdb;
      if (param_1[0x186] == 0x1000c) {
        uStack_34 = 0x435d1c29;
        uStack_2c = 0x3f87ae14;
        uStack_20 = 0xbf5bd3e5;
      }
      uStack_1c = 0;
      uStack_24 = 0;
      uStack_30 = 0x43adc000;
      (**(code **)(*(int *)param_1[0x2a1] + 0x7c))(&uStack_34,&uStack_24);
    }
    FUN_00eaa6e0(0x3f800000,0);
    break;
  case 1:
  case 3:
  case 5:
  case 7:
    break;
  case 2:
    FUN_00aa4080(0x98,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    FUN_00aa4080(0x99,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 6:
    FUN_00aa4080(0x9a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 8:
    FUN_00aa4080(0x9b,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00844f90;
  case 9:
LAB_00844f90:
    iVar3 = FUN_00a952e0(0,0x41200000);
    if (iVar3 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x358);
      param_1[0x5d8] = 1;
      (*pcVar1)(0,param_1 + 0x608);
    }
    break;
  case 10:
    FUN_00aa4080(0x9c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      DAT_01bea060 = DAT_01bea060 & 0xf5ffffff;
      DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
      (**(code **)(*param_1 + 0x34c))();
      FUN_00840720(0xd);
      param_1[0x5d9] = 0x42f00000;
      if (param_1[0x5d6] != 0) {
        param_1[0x5d9] = 0x41f00000;
      }
      iVar3 = FUN_0083fd00();
      if (iVar3 != 0) {
        param_1[0x5d9] = 0;
      }
      if (param_1[0x5d7] != 0) {
        param_1[0x5d9] = 0;
      }
      FUN_007409e0(param_1[0x2a1]);
      FUN_00b7eba0(param_1[0x13c]);
      return;
    }
  default:
    goto switchD_00844cdc_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00844cdc_default:
  return;
}

// 00845140  FUN_00845140  size=125  [between]
void __fastcall FUN_00845140(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x61c) == 6) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x61c) = 7;
    }
  }
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x61c) == 6)) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar3 = &DAT_01b35ad8;
      (**(code **)(*piVar2 + 4))(&DAT_01b35ad8);
      iVar1 = FUN_00dd6d80(puVar3);
      if ((iVar1 != 0) && (piVar2[0x139] != 0)) {
        *(undefined4 *)(param_1 + 0x61c) = 7;
      }
    }
  }
  return;
}

// 00845210  FUN_00845210  size=216  [between]
void __fastcall FUN_00845210(int *param_1)

{
  int iVar1;
  
  param_1[0x63c] = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x7d,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00842aa0();
  }
  else if (iVar1 != 1) goto LAB_008452a1;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5d9] = 0;
  }
LAB_008452a1:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 008452F0  FUN_008452f0  size=216  [between]
void __fastcall FUN_008452f0(int *param_1)

{
  int iVar1;
  
  param_1[0x63c] = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x7e,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00842aa0();
  }
  else if (iVar1 != 1) goto LAB_00845381;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5d9] = 0;
  }
LAB_00845381:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 008453D0  FUN_008453d0  size=455  [between]
void __fastcall FUN_008453d0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_1[0x63c] = 0;
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0x92,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00842aa0();
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
    param_1[0x248] = param_1[0x5d0];
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
      param_1[0x5d9] = 0;
    }
  }
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 00845870  FUN_00845870  size=219  [between]
void __fastcall FUN_00845870(int *param_1)

{
  int iVar1;
  
  param_1[0x63c] = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x89,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00842aa0();
  }
  else if (iVar1 != 1) goto LAB_00845904;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5d9] = 0;
  }
LAB_00845904:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 00845A70  Emc700::vf130  size=716  [class]
undefined4 __thiscall Emc700::vf130(int param_1,ushort *param_2)

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
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_01648a64);
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
    break;
  case 6:
    *puVar1 = 0x16e;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    break;
  case 8:
    *puVar1 = 0x16f;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x800000;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    break;
  case 10:
    *puVar1 = 0x170;
    goto LAB_00845bb9;
  case 0xc:
    *puVar1 = 0x171;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    break;
  case 0xe:
    *puVar1 = 0x172;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    break;
  case 0x10:
    *puVar1 = 0x173;
    goto LAB_00845bb9;
  case 0x12:
    *puVar1 = 0x174;
    goto LAB_00845bb9;
  case 0x14:
    *puVar1 = 0x175;
    goto LAB_00845bb9;
  case 0x16:
    *puVar1 = 0x176;
    puVar1[0x24] = puVar1[0x24] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    break;
  case 0x18:
    *puVar1 = 0x177;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x24] = puVar1[0x24] | 0x1000000;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    goto LAB_00845d20;
  case 0x1a:
    *puVar1 = 0x178;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    break;
  case 0x1c:
    *puVar1 = 0x179;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    break;
  case 0x1e:
    *puVar1 = 0x17a;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    break;
  case 0x20:
    *puVar1 = 0x17b;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] | 0x800;
    puVar1[0x24] = puVar1[0x24] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] | 0x2100;
    break;
  case 0x22:
    *puVar1 = 0x17c;
    puVar1[0x23] = puVar1[0x23] | 0x20002100;
    break;
  case 0x2e:
    *puVar1 = 0x17d;
LAB_00845bb9:
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] | 0x100;
LAB_00845d20:
    puVar1[0x24] = puVar1[0x24] | 0x20000000;
    break;
  case 0x2f:
    *puVar1 = 0x1d8;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    break;
  case 0x30:
    *puVar1 = 0x17f;
    goto LAB_00845d0b;
  case 0x32:
    *puVar1 = 0x180;
LAB_00845d0b:
    puVar1[0x23] = puVar1[0x23] | 0x100;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    goto LAB_00845d20;
  }
  FUN_00aa56a0(puVar1);
  return unaff_EBX;
}

// 00845DC0  Emc700::vf360  size=115  [class]
void __thiscall Emc700::vf360(int param_1,undefined4 param_2)

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

// 00845E40  FUN_00845e40  size=734  [between]
void __fastcall FUN_00845e40(int param_1)

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
  switch(*(undefined4 *)(param_1 + 0x138c)) {
  case 0:
    *(undefined4 *)(param_1 + 0x138c) = 1;
    *(undefined4 *)(param_1 + 0x1390) = 0;
    iVar2 = FUN_0083fc40();
    uVar10 = *(undefined4 *)(param_1 + 0x1390);
    uVar9 = 0x3f800000;
    iVar2 = iVar2 + 0x494;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0x3f800000;
    uVar5 = 0x3e2aaaab;
    uVar4 = 0;
    FUN_0083fc40(iVar2,uVar10,0,0x3e2aaaab,0x3f800000,0,0,0x3f800000);
    FUN_00a9f3c0(iVar2,uVar10,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
    *(undefined4 *)(param_1 + 0x1398) = 0x41200000;
  case 1:
    *(undefined4 *)(param_1 + 0x1390) = 0;
    iVar2 = FUN_00a8c760(0x36);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1390) = 1;
    }
    iVar2 = FUN_00a8c760(0x37);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1390) = 2;
    }
    iVar2 = FUN_00a8c760(0x38);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1390) = 3;
    }
    iVar2 = FUN_00a8c760(0x39);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1390) = 4;
    }
    if (*(int *)(param_1 + 0x1390) != 0) {
      *(undefined4 *)(param_1 + 0x138c) = 2;
    }
    fVar1 = *(float *)(param_1 + 0x1398) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1398) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x1398) = 0xbf800000;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x138c) = 3;
    *(undefined4 *)(param_1 + 0x1394) = *(undefined4 *)(param_1 + 0x1390);
    iVar2 = FUN_0083fc40();
    uVar10 = *(undefined4 *)(param_1 + 0x1390);
    uVar9 = 0x3f800000;
    iVar2 = iVar2 + 0x494;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0x3f800000;
    uVar5 = 0x3e2aaaab;
    uVar4 = 0;
    FUN_0083fc40(iVar2,uVar10,0,0x3e2aaaab,0x3f800000,0,0,0x3f800000);
    FUN_00a9f3c0(iVar2,uVar10,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  case 3:
    *(undefined4 *)(param_1 + 0x1398) = 0x41200000;
    *(undefined4 *)(param_1 + 0x1394) = 0;
    iVar2 = FUN_00a8c760(0x36);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1394) = 1;
    }
    iVar2 = FUN_00a8c760(0x37);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1394) = 2;
    }
    iVar2 = FUN_00a8c760(0x38);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1394) = 3;
    }
    iVar2 = FUN_00a8c760(0x39);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x1394) = 4;
    }
    iVar2 = *(int *)(param_1 + 0x1394);
    if (*(int *)(param_1 + 0x1390) != iVar2) {
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x1390) = 0;
LAB_008460a5:
        *(undefined4 *)(param_1 + 0x138c) = 0;
      }
      else {
        *(int *)(param_1 + 0x1390) = iVar2;
        *(undefined4 *)(param_1 + 0x138c) = 2;
      }
    }
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x138c) = 5;
    *(undefined4 *)(param_1 + 0x1394) = 0;
  case 5:
    uVar10 = 0;
    *(undefined4 *)(param_1 + 0x1398) = 0x41200000;
    FUN_0083fc40(0);
    iVar2 = FUN_00a94ce0(uVar10);
    if (iVar2 == 0) break;
    goto LAB_008460a5;
  default:
    break;
  }
  fVar1 = *(float *)(param_1 + 0x1398);
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

// 00846140  FUN_00846140  size=156  [between]
void __thiscall FUN_00846140(int param_1,undefined4 param_2,undefined4 param_3)

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
      *(undefined4 *)(param_1 + 0x138c) = 4;
    }
  }
  return;
}

// 008462D0  FUN_008462d0  size=120  [between]
void __fastcall FUN_008462d0(int param_1)

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
    if (*(int *)(param_1 + 0x1758) != 0) {
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

// 00846350  FUN_00846350  size=116  [between]
void FUN_00846350(int param_1)

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

// 008463D0  FUN_008463d0  size=22  [between]
void __fastcall FUN_008463d0(int param_1)

{
  *(int *)(param_1 + 0x1768) = *(int *)(param_1 + 0x1768) + 1;
  FUN_008462d0();
  FUN_00a8d280();
  return;
}

// 008463F0  FUN_008463f0  size=1663  [between]
int __fastcall FUN_008463f0(int *param_1)

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
  
  piVar2 = (int *)param_1[0x2a1];
  param_1[0x63f] = 0;
  if (piVar2 != (int *)0x0) {
    puVar7 = &DAT_01b35b20;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
    iVar4 = FUN_00dd6d80(puVar7);
    if ((iVar4 != 0) && ((**(code **)(*piVar2 + 0x354))(), piVar2[0x139] != 0)) {
      return 0;
    }
  }
  local_28 = 0;
  if (param_1[0x604] != 0) {
    param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
    FUN_00a8caf0(0x20013,0,0,0);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    return 1;
  }
  if (param_1[0x5d6] == 0) {
    fVar1 = (float)param_1[0x5db];
    uVar5 = (uint)param_1[0x5da] % 7;
    aiStack_24[0] = 0x20000;
    aiStack_24[1] = 0x20001;
    aiStack_24[2] = 0x20002;
    aiStack_24[3] = 0x20003;
    aiStack_24[4] = 0x20006;
    aiStack_24[5] = 0x20009;
    aiStack_24[6] = 0x20007;
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && (aiStack_24[uVar5] == 0x20007)) {
      uVar5 = param_1[0x5da] + 1;
      param_1[0x5da] = uVar5;
      uVar5 = uVar5 % 7;
    }
    if (((float)param_1[0x2a3] < 6.25) && ((float)param_1[0x2a8] <= 1.3962634)) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      iVar4 = aiStack_24[uVar5];
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(iVar4,0,0,0);
      local_28 = 1;
    }
    if (9.0 <= (float)param_1[0x2a3]) {
      return local_28;
    }
    fVar1 = (float)param_1[0x2a8];
    if (NAN(fVar1) || 1.5707964 < fVar1 == (fVar1 == 1.5707964)) {
      return local_28;
    }
    param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
    FUN_00a8caf0(0x20005,0,0,0);
    sVar3 = FUN_00dde2d0(0,2);
    if (sVar3 == 1) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x20009,0,0,0);
    }
    iVar4 = FUN_00ac4780();
    if (2 < iVar4) {
      sVar3 = FUN_00dde2d0(0,3);
      if (sVar3 != 2) {
        return 1;
      }
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x20007,0,0,0);
      param_1[0x63f] = 1;
      return 1;
    }
    sVar3 = FUN_00dde2d0(0,3);
    if (sVar3 != 2) {
      return 1;
    }
    uVar6 = 0x20007;
  }
  else {
    if ((((char)param_1[0x5e1] == '\x03') &&
        (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 42.25 < fVar1 != (fVar1 == 42.25))) &&
       ((float)param_1[0x2a8] <= 1.2217305)) {
      param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
      FUN_00a8caf0(0x10006,0,0,0);
      return 1;
    }
    fVar1 = (float)param_1[0x5db];
    uVar5 = (uint)param_1[0x5da] % 9;
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
      uVar5 = param_1[0x5da] + 1;
      param_1[0x5da] = uVar5;
      uVar5 = uVar5 % 9;
    }
    if (((float)param_1[0x2a3] < 6.25) && ((float)param_1[0x2a8] <= 1.3962634)) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      iVar4 = aiStack_24[uVar5];
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(iVar4,0,0,0);
      local_28 = 1;
    }
    if (((float)param_1[0x2a3] < 9.0) &&
       (fVar1 = (float)param_1[0x2a8], !NAN(fVar1) && 1.5707964 < fVar1 != (fVar1 == 1.5707964))) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x20005,0,0,0);
      sVar3 = FUN_00dde2d0(0,2);
      if (sVar3 == 1) {
        param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
        param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
        param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
        param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
        FUN_00a8caf0(0x20009,0,0,0);
      }
      iVar4 = FUN_00ac4780();
      if (iVar4 < 3) {
        sVar3 = FUN_00dde2d0(0,3);
        if (sVar3 == 2) {
          param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
          FUN_00a8caf0(0x20007,0,0,0);
        }
      }
      else {
        sVar3 = FUN_00dde2d0(0,3);
        if (sVar3 == 2) {
          param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
          FUN_00a8caf0(0x20007,0,0,0);
          param_1[0x63f] = 1;
        }
      }
      local_28 = 1;
    }
    if ((param_1[0x186] == 0x2000c) &&
       ((((char)param_1[0x5e1] != '\0' || ((char)param_1[0x5e3] != '\0')) && (local_28 != 0)))) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x20006,0,0,0);
    }
    if (((param_1[0x186] == 0x2000d) &&
        (((char)param_1[0x5e1] != '\0' || ((char)param_1[0x5e3] != '\0')))) && (local_28 != 0)) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x20006,0,0,0);
    }
    iVar4 = FUN_00842d60();
    if (iVar4 != 0) {
      local_28 = 1;
    }
    if (param_1[0x634] == 0) {
      return local_28;
    }
    if ((*(byte *)((int)param_1 + 0x18d5) & 0x10) == 0) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x20013,0,0,0);
      *(byte *)((int)param_1 + 0x18d5) = *(byte *)((int)param_1 + 0x18d5) | 0x10;
      *(byte *)((int)param_1 + 0x18d7) = *(byte *)((int)param_1 + 0x18d7) | 0xc;
      *(undefined1 *)((int)param_1 + 0x18d6) = 0x10;
      return 1;
    }
    uVar6 = 0x20017;
  }
  param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
  param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
  param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
  param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
  FUN_00a8caf0(uVar6,0,0,0);
  return 1;
}

// 00846A70  FUN_00846a70  size=452  [between]
undefined4 __thiscall FUN_00846a70(int param_1,float param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x18fc) = 0;
  if (*(int *)(param_1 + 0xe80) == 0) {
    iVar3 = FUN_009c4bf0();
    if (iVar3 == 0) {
      return 0;
    }
  }
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar4);
    if (iVar3 != 0) {
      (**(code **)(*piVar1 + 0x354))();
      if ((((piVar1[0x139] != 0) || (iVar3 = piVar1[0x186], iVar3 == 0x10005d)) ||
          (iVar3 == 0x100056)) ||
         (((iVar3 == 0x100055 || (iVar3 == 0x100053)) || (iVar3 == 0x100051)))) {
        return 0;
      }
    }
  }
  local_4 = 0;
  if (param_2 * param_2 < *(float *)(param_1 + 0xa8c) !=
      (param_2 * param_2 == *(float *)(param_1 + 0xa8c))) {
    *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x85ffffff;
    *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfeffffff;
    *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xff7fffff;
    local_4 = 1;
    FUN_00a8caf0(0x10006,0,0,0);
    *(int *)(param_1 + 0x1944) = *(int *)(param_1 + 0x1944) + 1;
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 + 3 < *(int *)(param_1 + 0x1944)) {
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x85ffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfeffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xff7fffff;
      FUN_00a8caf0(0x20008,0,0,0);
      *(undefined4 *)(param_1 + 0x1944) = 0;
    }
    sVar2 = FUN_00dde2d0(0,2);
    if (sVar2 == 1) {
      FUN_00842d60();
      *(undefined4 *)(param_1 + 0x1944) = 0;
    }
    if (*(float *)(param_1 + 0x176c) < 0.0) {
      sVar2 = FUN_00dde2d0(0,2);
      if (sVar2 == 1) {
        *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x85ffffff;
        *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfeffffff;
        *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xff7fffff;
        FUN_00a8caf0(0x20007,0,0,0);
        *(undefined4 *)(param_1 + 0x1944) = 0;
      }
    }
  }
  return local_4;
}

// 00846C40  FUN_00846c40  size=247  [between]
void __fastcall FUN_00846c40(int param_1)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined *puVar5;
  
  cVar1 = *(char *)(param_1 + 0x1784);
  if (cVar1 == '\x01') {
    piVar2 = *(int **)(param_1 + 0xa84);
    *(float *)(param_1 + 0x1780) = *(float *)(param_1 + 0x1780) - *(float *)(param_1 + 0x910);
    if (piVar2 != (int *)0x0) {
      puVar5 = &DAT_01b35b20;
      (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
      iVar4 = FUN_00dd6d80(puVar5);
      if (iVar4 != 0) {
        iVar4 = (**(code **)(*piVar2 + 0x1fc))();
        if (iVar4 != 0) {
          *(float *)(param_1 + 0x1780) = *(float *)(param_1 + 0x1780) - *(float *)(param_1 + 0x910);
        }
      }
    }
    if (*(float *)(param_1 + 0x1780) < 0.0) {
      *(undefined1 *)(param_1 + 0x1784) = 2;
    }
    if (((*(int *)(param_1 + 0x1790) != 0) && (*(int *)(param_1 + 0x1794) != 0)) &&
       (*(int *)(param_1 + 0x1798) != 0)) {
      *(undefined1 *)(param_1 + 0x1784) = 2;
    }
  }
  else {
    if (cVar1 == '\x02') {
      *(undefined4 *)(param_1 + 0x1780) = 0x42700000;
      *(undefined1 *)(param_1 + 0x1784) = 3;
      FUN_00e5e0c0("em0700_se_atk_firewall_burn_end",param_1,0xffffffff,0);
    }
    else if (cVar1 != '\x03') {
      return;
    }
    fVar3 = *(float *)(param_1 + 0x1780) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1780) = fVar3;
    if (fVar3 < 0.0) {
      *(undefined1 *)(param_1 + 0x1784) = 0;
      return;
    }
  }
  return;
}

// 00846D40  FUN_00846d40  size=347  [between]
undefined4 __fastcall FUN_00846d40(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  
  if (*(int *)(param_1 + 0x1758) == 0) {
    return 0;
  }
  iVar2 = FUN_00ac4780();
  if ((iVar2 < 3) && (*(int **)(param_1 + 0xa84) != (int *)0x0)) {
    puVar3 = &DAT_01b35b20;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar3);
    if ((iVar2 != 0) && (iVar2 = FUN_00b87910(0), iVar2 == 0)) {
      return 0;
    }
  }
  bVar1 = *(byte *)(param_1 + 0x18d9);
  if ((((bVar1 & 1) == 0) || ((*(byte *)(param_1 + 0x18db) & 1) != 0)) ||
     (*(int *)(param_1 + 0x18e4) == 0)) {
    if ((((bVar1 & 2) == 0) || ((*(byte *)(param_1 + 0x18db) & 2) != 0)) ||
       (*(int *)(param_1 + 0x18e4) == 0)) {
      if ((((bVar1 & 4) == 0) || ((*(byte *)(param_1 + 0x18db) & 4) != 0)) ||
         (*(int *)(param_1 + 0x18e4) == 0)) {
        if ((((bVar1 & 8) == 0) || ((*(byte *)(param_1 + 0x18db) & 8) != 0)) ||
           (*(int *)(param_1 + 0x18e4) == 0)) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x18e4) + -1;
        *(int *)(param_1 + 0x18e4) = iVar2;
        if (iVar2 < 1) {
          *(byte *)(param_1 + 0x18db) = *(byte *)(param_1 + 0x18db) | 8;
        }
        *(undefined1 *)(param_1 + 0x18da) = 8;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x18e4) + -1;
        *(int *)(param_1 + 0x18e4) = iVar2;
        if (iVar2 < 1) {
          *(byte *)(param_1 + 0x18db) = *(byte *)(param_1 + 0x18db) | 4;
        }
        *(undefined1 *)(param_1 + 0x18da) = 4;
      }
    }
    else {
      iVar2 = *(int *)(param_1 + 0x18e4) + -1;
      *(int *)(param_1 + 0x18e4) = iVar2;
      if (iVar2 < 1) {
        *(byte *)(param_1 + 0x18db) = *(byte *)(param_1 + 0x18db) | 2;
      }
      *(undefined1 *)(param_1 + 0x18da) = 2;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18e4) + -1;
    *(int *)(param_1 + 0x18e4) = iVar2;
    if (iVar2 < 1) {
      *(byte *)(param_1 + 0x18db) = *(byte *)(param_1 + 0x18db) | 1;
    }
    *(undefined1 *)(param_1 + 0x18da) = 1;
  }
  *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x847fffff;
  FUN_00a8caf0(0x2000f,0,0,0);
  return 1;
}

// 00846EA0  Emc700::vf248  size=72  [class]
void __fastcall Emc700::vf248(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00e00900();
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar3 = 1;
    uVar2 = FUN_00a81330(1);
    FUN_00e03080(uVar2,uVar3);
  }
  return;
}

// 00846EF0  Emc700::vf14C  size=72  [class]
bool __thiscall Emc700::vf14C(int param_1,int param_2,int param_3)

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

// 00846F40  FUN_00846f40  size=656  [callgraph]
void __fastcall FUN_00846f40(int *param_1)

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
    puVar7 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar7);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    FUN_00846140(0x1c5,0x8100000);
    if ((char)param_1[0x5e1] == '\x01') {
      param_1[0x5e0] = 0;
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
    FUN_00aa4080(0xa3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00846140(0x1c6,0x8100000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      FUN_00846d40();
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

// 00847510  FUN_00847510  size=656  [callgraph]
void __fastcall FUN_00847510(int *param_1)

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
    puVar7 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar7);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x101,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    FUN_00846140(0x1c7,0x8100000);
    if ((char)param_1[0x5e1] == '\x01') {
      param_1[0x5e0] = 0;
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
    FUN_00aa4080(0x102,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00846140(0x1c8,0x8100000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      FUN_00846d40();
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

// 00848ED0  Emc700::vf50  size=40  [class]
void __fastcall Emc700::vf50(int param_1)

{
  FUN_00845e40();
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 00848F80  Emc700::vf19C  size=179  [class]
void __thiscall Emc700::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 00849040  FUN_00849040  size=1297  [callgraph]
void __fastcall FUN_00849040(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    FUN_008462d0();
    uVar4 = 0xe;
    sVar3 = FUN_00dde2d0(0,2);
    param_1[0x252] = (int)sVar3;
    if (sVar3 != 0) {
      uVar4 = 0x1b;
    }
    iVar6 = param_1[0x186];
    if (iVar6 == 0x10007) {
      uVar4 = 0x11;
    }
    if (iVar6 == 0x10008) {
      uVar4 = 0x14;
    }
    if (iVar6 == 0x10009) {
      uVar4 = 0x17;
    }
    FUN_00aa4080(uVar4,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
    param_1[0x250] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if (((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) &&
       (iVar6 = FUN_00a952e0(0,0x42340000), iVar6 != 0)) {
      param_1[0x187] = 2;
      param_1[0x250] = 1;
      FUN_00e5e0c0("emc70a_se_mov_dash_whoosh",param_1,0xffffffff,0);
    }
    break;
  case 2:
    uVar4 = 0;
    if (param_1[0x250] != 0) {
      uVar4 = 0x3e2aaaab;
    }
    uVar5 = 0x10;
    if (param_1[0x252] != 0) {
      uVar5 = 0x1c;
    }
    iVar6 = param_1[0x186];
    if (iVar6 == 0x10007) {
      uVar5 = 0x13;
    }
    if (iVar6 == 0x10008) {
      uVar5 = 0x16;
    }
    if (iVar6 == 0x10009) {
      uVar5 = 0x19;
    }
    FUN_00aa4080(uVar5,0,uVar4,0x3f800000,0,0xbf800000,0x3f800000);
    iVar6 = param_1[0x186];
    param_1[0x248] = 0x42400000;
    param_1[0x187] = param_1[0x187] + 1;
    if (iVar6 == 0x10007) {
      param_1[0x248] = 0x41700000;
    }
    if (iVar6 == 0x10008) {
      param_1[0x248] = 0x41700000;
    }
    if (iVar6 == 0x10009) {
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
      iVar6 = param_1[0x2a1];
      fStack_20 = (*(float *)(iVar6 + 0x40) - (float)param_1[0x10]) * -1.0;
      fStack_1c = 0.0;
      fStack_18 = (*(float *)(iVar6 + 0x48) - (float)param_1[0x12]) * -1.0;
      fStack_14 = (*(float *)(iVar6 + 0x4c) - (float)param_1[0x13]) * -1.0;
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
      iVar6 = param_1[0x2a1];
      fStack_20 = fStack_20 * 1.8;
      fStack_1c = fStack_1c * 1.8;
      fStack_18 = fStack_18 * 1.8;
      fStack_14 = fStack_14 * 1.8;
      fVar1 = *(float *)(iVar6 + 0x48);
      fVar2 = *(float *)(iVar6 + 0x4c);
      param_1[0x14] =
           (int)(((*(float *)(iVar6 + 0x40) + fStack_20) - (float)param_1[0x10]) * 0.1 +
                (float)param_1[0x14]);
      param_1[0x15] = param_1[0x15];
      param_1[0x16] =
           (int)(((fVar1 + fStack_18) - (float)param_1[0x12]) * 0.1 + (float)param_1[0x16]);
      param_1[0x17] =
           (int)(((fStack_14 + fVar2) - (float)param_1[0x13]) * 0.1 + (float)param_1[0x17]);
    }
    break;
  case 4:
    iVar6 = param_1[0x186];
    uVar4 = 0xf;
    if (iVar6 == 0x10007) {
      uVar4 = 0x12;
    }
    if (iVar6 == 0x10008) {
      uVar4 = 0x15;
    }
    if (iVar6 == 0x10009) {
      uVar4 = 0x18;
    }
    FUN_00aa4080(uVar4,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x5d9] = 0x42f00000;
      if (param_1[0x5d6] != 0) {
        param_1[0x5d9] = 0x41f00000;
      }
      if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
        param_1[0x5d9] = 0;
      }
      if (param_1[0x5d7] != 0) {
        param_1[0x5d9] = 0;
      }
    }
  }
  iVar6 = FUN_00a8c760(0);
  if (iVar6 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,(float)param_1[0x244] * 0.55850536,0);
  }
  return;
}

// 00849570  FUN_00849570  size=524  [callgraph]
void __fastcall FUN_00849570(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  param_1[0x5df] = 1;
  param_1[0x5dd] = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x34,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00846140(0x319,0x8000080);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5dc] = param_1[0x5dc] + 1;
    DAT_01bea060 = DAT_01bea060 | 0xa000000;
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    param_1[0x14] = 0x4353abe4;
    param_1[0x15] = 0x43adc000;
    param_1[0x16] = 0x413fe4b8;
    param_1[0x24] = 0;
    param_1[0x25] = 0x401c61aa;
    param_1[0x26] = 0;
    (**(code **)(*param_1 + 0x7c))(param_1 + 0x14,param_1 + 0x24);
    if ((int *)param_1[0x2a1] != (int *)0x0) {
      uStack_20 = 0x435d1c29;
      uStack_1c = 0x43adc000;
      uStack_18 = 0x3f87ae14;
      uStack_30 = 0;
      uStack_2c = 0xbf5bd3e5;
      uStack_28 = 0;
      (**(code **)(*(int *)param_1[0x2a1] + 0x7c))(&uStack_20,&uStack_30);
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    uVar2 = FUN_00e678d0(2,0xc000,0xffffffff);
    FUN_00e80d00(uVar2);
  }
  else if (iVar1 != 1) {
    FUN_00a8c760(0);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00842710();
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5d9] = 0x42f00000;
    if (param_1[0x5d6] != 0) {
      param_1[0x5d9] = 0x41f00000;
    }
    if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
      param_1[0x5d9] = 0;
    }
    if (param_1[0x5d7] != 0) {
      param_1[0x5d9] = 0;
    }
    DAT_01bea060 = DAT_01bea060 & 0xf5ffffff;
    DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
    FUN_00840720(0xd);
  }
  FUN_00a8c760(0);
  return;
}

// 00849780  FUN_00849780  size=381  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00849780(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    DAT_01bea060 = DAT_01bea060 | 0x8000000;
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    *(undefined4 *)(param_1 + 0x920) = 0x41700000;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00aa4080(0x7b,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x1768) = *(int *)(param_1 + 0x1768) + 1;
    FUN_008462d0();
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar2;
    if (fVar2 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
    if (uVar5 == 0) goto switchD_008497c7_caseD_3;
    FUN_00b7ab80(0x42700000,0x3dcccccd);
    goto LAB_008498a9;
  case 3:
switchD_008497c7_caseD_3:
LAB_008498a9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = *(float *)(param_1 + 0x920) - _DAT_01be942c;
    *(float *)(param_1 + 0x920) = fVar2;
    if (fVar2 < 0.0) {
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x847fffff;
      FUN_00a8caf0(0x1000b,0,0,0);
      return;
    }
    break;
  default:
    break;
  }
  return;
}

// 00849910  FUN_00849910  size=295  [callgraph]
void __fastcall FUN_00849910(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x1f,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_008499f0;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5d9] = 0x42f00000;
    if (param_1[0x5d6] != 0) {
      param_1[0x5d9] = 0x41f00000;
    }
    if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
      param_1[0x5d9] = 0;
    }
    if (param_1[0x5d7] != 0) {
      param_1[0x5d9] = 0;
    }
  }
LAB_008499f0:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 00849A40  FUN_00849a40  size=283  [callgraph]
void __fastcall FUN_00849a40(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x20,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_00849b14;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    if (param_1[0x5d6] != 0) {
      param_1[0x5d9] = 0x41f00000;
    }
    if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
      param_1[0x5d9] = 0;
    }
    if (param_1[0x5d7] != 0) {
      param_1[0x5d9] = 0;
    }
  }
LAB_00849b14:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 00849B60  FUN_00849b60  size=295  [callgraph]
void __fastcall FUN_00849b60(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x21,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_00849c40;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5d9] = 0x42f00000;
    if (param_1[0x5d6] != 0) {
      param_1[0x5d9] = 0x41f00000;
    }
    if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
      param_1[0x5d9] = 0;
    }
    if (param_1[0x5d7] != 0) {
      param_1[0x5d9] = 0;
    }
  }
LAB_00849c40:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 00849C90  FUN_00849c90  size=295  [callgraph]
void __fastcall FUN_00849c90(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x22,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_00849d70;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5d9] = 0x42f00000;
    if (param_1[0x5d6] != 0) {
      param_1[0x5d9] = 0x41f00000;
    }
    if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
      param_1[0x5d9] = 0;
    }
    if (param_1[0x5d7] != 0) {
      param_1[0x5d9] = 0;
    }
  }
LAB_00849d70:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 00849DC0  FUN_00849dc0  size=295  [callgraph]
void __fastcall FUN_00849dc0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x23,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_00849ea0;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5d9] = 0x42f00000;
    if (param_1[0x5d6] != 0) {
      param_1[0x5d9] = 0x41f00000;
    }
    if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
      param_1[0x5d9] = 0;
    }
    if (param_1[0x5d7] != 0) {
      param_1[0x5d9] = 0;
    }
  }
LAB_00849ea0:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 0084A0A0  FUN_0084a0a0  size=295  [callgraph]
void __fastcall FUN_0084a0a0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x27,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_0084a180;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5d9] = 0x42f00000;
    if (param_1[0x5d6] != 0) {
      param_1[0x5d9] = 0x41f00000;
    }
    if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
      param_1[0x5d9] = 0;
    }
    if (param_1[0x5d7] != 0) {
      param_1[0x5d9] = 0;
    }
  }
LAB_0084a180:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 0084A7A0  FUN_0084a7a0  size=2554  [callgraph]
void __fastcall FUN_0084a7a0(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  float fStack_38;
  undefined1 auStack_34 [4];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_18;
  
  (**(code **)(*param_1 + 0x314))();
  uVar5 = FUN_00a8cac0();
  switch(uVar5) {
  case 0:
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x253] = 0;
    param_1[0x252] = 0;
    iVar6 = FUN_00ac4780();
    if ((iVar6 == 1) && (iVar6 = FUN_0083fd00(), iVar6 != 0)) {
      param_1[0x253] = 1;
    }
    iVar6 = FUN_00ac4780();
    if (iVar6 == 2) {
      param_1[0x253] = 1;
    }
    iVar6 = FUN_00ac4780();
    if ((iVar6 == 2) && (iVar6 = FUN_0083fd00(), iVar6 != 0)) {
      sVar4 = FUN_00dde2d0(0,1);
      param_1[0x253] = sVar4 + 1;
    }
    iVar6 = FUN_00ac4780();
    if (2 < iVar6) {
      sVar4 = FUN_00dde2d0(0,2);
      param_1[0x253] = sVar4 + 3;
    }
    iVar6 = FUN_00ac4780();
    if ((2 < iVar6) && (iVar6 = FUN_0083fd00(), iVar6 != 0)) {
      sVar4 = FUN_00dde2d0(0,2);
      param_1[0x253] = sVar4 + 5;
    }
    param_1[0x4e8] = 0;
    break;
  case 1:
    break;
  case 2:
    goto switchD_0084a7d1_caseD_2;
  case 3:
    FUN_00aa4080(0x68,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43340000;
    param_1[0x24d] = 0;
    param_1[0x255] = 0;
    FUN_00a8d280();
    goto LAB_0084aa32;
  case 4:
LAB_0084aa32:
    (**(code **)(*param_1 + 0x318))();
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    param_1[0x24d] = (int)((float)param_1[0x24d] + (float)param_1[0x244]);
    fVar1 = (float)param_1[0x2a8];
    if ((!NAN(fVar1) && 2.3561945 < fVar1 != (fVar1 == 2.3561945)) &&
       (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 12.25 < fVar1 != (fVar1 == 12.25))) {
      fVar2 = (fVar2 - (float)param_1[0x244]) - (float)param_1[0x244];
      param_1[0x248] = (int)fVar2;
      if (param_1[0x253] < 1) {
        param_1[0x248] = (int)(fVar2 - (float)param_1[0x244] * 30.0);
      }
    }
    iVar6 = FUN_008402c0();
    if ((iVar6 != 0) && (param_1[0x253] != 0)) {
      param_1[0x252] = param_1[0x252] + 1;
      param_1[0x253] = param_1[0x253] + -1;
      pcVar3 = *(code **)(*param_1 + 0x308);
      param_1[0x187] = 5;
      (*pcVar3)(0x3ecccccd,0x393702d3,(float)param_1[0x244] * 2.0943952,0);
    }
    if ((float)param_1[0x248] < 0.0) {
      param_1[0x187] = 7;
      param_1[0x24a] = 0x3f800000;
    }
    iVar6 = param_1[0x2a1];
    if ((iVar6 == 0) || (1.3962634 < (float)param_1[0x2a8])) {
      iVar6 = (**(code **)(*param_1 + 800))(0x3d888889);
LAB_0084abcc:
      if (iVar6 == 0) {
        param_1[0x24] = 0x3f060a92;
      }
      else {
        param_1[0x24] = 0;
      }
    }
    else {
LAB_0084ab68:
      thunk_FUN_00dde510(&fStack_38,auStack_34,iVar6 + 0x40,param_1 + 0x10);
      param_1[0x24] = (int)(fStack_38 * -1.0);
      if (fStack_38 * -1.0 <= -1.0471976) {
        param_1[0x24] = -0x4079f56e;
      }
      fVar2 = (float)param_1[0x24];
      if (!NAN(fVar2) && 1.2217305 < fVar2 != (fVar2 == 1.2217305)) {
        param_1[0x24] = 0x3f9c61aa;
      }
    }
    FUN_00ac80a0(param_1[0x24a],0x3f800000);
    goto switchD_0084a7d1_default;
  case 5:
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x248] = 0x43340000;
    param_1[0x255] = 1;
    param_1[0x24d] = -0x3e600000;
    param_1[0x24a] = 0x3dcccccd;
    param_1[0x24b] = (int)((float)param_1[0x249] * 0.0033333334);
    param_1[0x24c] = 0x3f8147ae;
    fVar2 = (float)param_1[0x249] + 0.5;
    param_1[0x249] = (int)fVar2;
    if (!NAN(fVar2) && 6.0 < fVar2 != (fVar2 == 6.0)) {
      param_1[0x249] = 0x40c00000;
    }
    iVar6 = FUN_00ac4780();
    if ((2 < iVar6) && (2 < param_1[0x252])) {
      sVar4 = FUN_00dde2d0(0,1);
      if (sVar4 == 0) {
        sVar4 = FUN_00dde2d0(10,0x14);
        fStack_38 = (float)(int)sVar4;
        param_1[0x24d] = (int)((float)param_1[0x24d] - (float)(int)fStack_38);
        fVar2 = (float)param_1[0x252] * 0.5 + 3.0;
        param_1[0x249] = (int)fVar2;
        if (!NAN(fVar2) && 6.0 < fVar2 != (fVar2 == 6.0)) {
          param_1[0x249] = 0x40c00000;
        }
      }
      else {
        param_1[0x249] = 0x40200000;
        sVar4 = FUN_00dde2d0(10,0x14);
        fStack_38 = (float)(int)sVar4;
        param_1[0x24d] = (int)((float)(int)fStack_38 + (float)param_1[0x24d]);
      }
    }
    FUN_00e5e0c0("emc70a_se_atk_fire_dash",param_1,0xffffffff,0);
    FUN_00e5e0c0("emc70a_vo_atk_lariat",param_1,0xffffffff,0);
    goto LAB_0084ad5d;
  case 6:
LAB_0084ad5d:
    (**(code **)(*param_1 + 0x318))();
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    param_1[0x24d] = (int)((float)param_1[0x24d] + (float)param_1[0x244]);
    fVar1 = (float)param_1[0x2a8];
    if ((!NAN(fVar1) && 2.3561945 < fVar1 != (fVar1 == 2.3561945)) &&
       (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 12.25 < fVar1 != (fVar1 == 12.25))) {
      param_1[0x248] = (int)((fVar2 - (float)param_1[0x244]) - (float)param_1[0x244]);
    }
    iVar6 = FUN_008402c0();
    if (iVar6 == 0) {
      if ((float)param_1[0x2a8] <= 0.17453292) {
        param_1[0x187] = 4;
      }
    }
    else {
      (**(code **)(*param_1 + 0x308))(0x3ecccccd,0x393702d3,(float)param_1[0x244] * 1.0471976,0);
    }
    if ((float)param_1[0x248] < 0.0) {
      param_1[0x187] = 7;
      param_1[0x24a] = 0x3f800000;
    }
    iVar6 = param_1[0x2a1];
    if ((iVar6 == 0) || (1.3962634 < (float)param_1[0x2a8])) {
      iVar6 = (**(code **)(*param_1 + 800))(0x3d888889);
      goto LAB_0084abcc;
    }
    goto LAB_0084ab68;
  case 7:
    FUN_00aa4080(0x69,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24] = 0;
    if (param_1[0x4e7] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    }
  case 8:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x5d9] = 0x42f00000;
      param_1[0x63b] = param_1[0x5c7];
      if (param_1[0x5d6] != 0) {
        param_1[0x5d9] = 0x41f00000;
      }
      iVar6 = FUN_0083fd00();
      if (iVar6 != 0) {
        param_1[0x5d9] = 0x41f00000;
      }
    }
    if ((((param_1[0x4e8] != 0) && (param_1[0x2a1] != 0)) && (iVar6 = FUN_00a8c760(0), iVar6 != 0))
       && (iVar6 = (**(code **)(*(int *)param_1[0x2a1] + 0x22c))(), iVar6 != 0)) {
      fStack_30 = 0.0;
      fStack_2c = 0.0;
      fStack_28 = 2.0;
      D3DXVec3TransformNormal(&fStack_30,&fStack_30,param_1 + 4);
      fStack_30 = (float)param_1[0x10] + fStack_30;
      fStack_2c = (float)param_1[0x11] + fStack_2c;
      fStack_28 = (float)param_1[0x12] + fStack_28;
      fStack_20 = *(float *)(param_1[0x2a1] + 0x40) - fStack_30;
      fStack_18 = *(float *)(param_1[0x2a1] + 0x48) - fStack_28;
      fVar7 = (float10)FUN_00fdc1f0();
      param_1[0x14] = (int)(float)((float10)(float)param_1[0x14] + (float10)fStack_20 * fVar7);
      param_1[0x16] = (int)(float)(fVar7 * (float10)fStack_18 + (float10)(float)param_1[0x16]);
    }
  default:
    goto switchD_0084a7d1_default;
  }
  FUN_00aa4080(0x67,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x5da] = param_1[0x5da] + 1;
  FUN_008462d0();
  FUN_00a8d280();
  param_1[0x24] = 0;
  param_1[0x249] = 0x40000000;
  iVar6 = FUN_00ac4780();
  if (iVar6 == 2) {
    param_1[0x249] = 0x40200000;
  }
  iVar6 = FUN_00ac4780();
  if (2 < iVar6) {
    param_1[0x249] = 0x40400000;
  }
  param_1[0x4e7] = 0;
  param_1[0x24a] = 0x3e99999a;
  param_1[0x24b] = (int)((float)param_1[0x249] * 0.0055555557);
  param_1[0x24c] = 0x3f866666;
switchD_0084a7d1_caseD_2:
  FUN_00ac80a0(param_1[0x24a],0x3f800000);
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  iVar6 = FUN_00a8c760(0);
  if (iVar6 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.27925268,0);
  }
switchD_0084a7d1_default:
  iVar6 = FUN_00a8c760(10);
  if (iVar6 != 0) {
    param_1[0x24a] = (int)((float)param_1[0x244] * (float)param_1[0x24b] + (float)param_1[0x24a]);
    fVar7 = (float10)FUN_00fdc1f0();
    param_1[0x24b] = (int)(float)(fVar7 * (float10)(float)param_1[0x24b]);
    if ((float)param_1[0x249] < (float)param_1[0x24a]) {
      param_1[0x24a] = param_1[0x249];
    }
    param_1[0x24c] = (int)((float)param_1[0x24c] + 0.005);
    iVar6 = FUN_00a8cac0();
    if ((iVar6 == 3) &&
       (fVar2 = (float)param_1[0x24d], !NAN(fVar2) && 40.0 < fVar2 != (fVar2 == 40.0))) {
      param_1[0x24c] = (int)((float)param_1[0x24c] + 0.02);
    }
    if (1.5 < (float)param_1[0x24c]) {
      param_1[0x24c] = 0x3fc00000;
    }
  }
  iVar6 = FUN_00a8c760(0);
  if ((iVar6 != 0) && ((float)param_1[0x2a8] <= 1.3962634)) {
    fStack_38 = 0.27925268;
    iVar6 = FUN_00ac4780();
    if (iVar6 == 2) {
      fStack_38 = 0.31415927;
    }
    iVar6 = FUN_00ac4780();
    fVar2 = fStack_38;
    if (2 < iVar6) {
      fVar2 = 0.34906584;
    }
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,fVar2 * (float)param_1[0x244],0);
  }
  return;
}

// 0084B2B0  FUN_0084b2b0  size=286  [callgraph]
void __fastcall FUN_0084b2b0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x7b,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_0084b387;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5d9] = 0;
    if (param_1[0x604] != 0) {
      param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
      FUN_00a8caf0(0x20013,0,0,0);
      (**(code **)(*param_1 + 0x220))(0x41200000);
    }
  }
LAB_0084b387:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 0084B3D0  FUN_0084b3d0  size=295  [callgraph]
void __fastcall FUN_0084b3d0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x24,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_0084b4b0;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5d9] = 0x42f00000;
    if (param_1[0x5d6] != 0) {
      param_1[0x5d9] = 0x41f00000;
    }
    if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
      param_1[0x5d9] = 0;
    }
    if (param_1[0x5d7] != 0) {
      param_1[0x5d9] = 0;
    }
  }
LAB_0084b4b0:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.20943952,0);
  }
  return;
}

// 0084B500  FUN_0084b500  size=278  [callgraph]
void __fastcall FUN_0084b500(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[0x63c] = 0;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    uVar2 = 0x42;
    if (param_1[0x186] == 0x20011) {
      uVar2 = 0x43;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
  }
  else if (iVar1 != 1) goto LAB_0084b5cf;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
    FUN_00a8caf0(0x2000f,2,0,0);
  }
LAB_0084b5cf:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 0084B620  FUN_0084b620  size=957  [callgraph]
void __fastcall FUN_0084b620(int *param_1)

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
  
  param_1[0x63c] = 0;
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
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
  }
  else if (iVar3 != 1) goto LAB_0084b949;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
    FUN_00a8caf0(0x2000f,2,0,0);
    FUN_00eaa6e0(0x3f800000,0);
    param_1[0x4f0] = 0;
    param_1[0x4f1] = 0;
    FUN_00c5ad80(param_1[0x4ec]);
    uStack_c4 = 0x41200000;
    param_1[0x4ec] = -1;
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
    param_1[0x4ec] = iVar3;
    FUN_00c52770(iVar3,0x41000000);
    FUN_00c52700(param_1[0x4ec],1);
    pcVar2 = *(code **)(*param_1 + 0x358);
    param_1[0x4f0] = 0;
    (*pcVar2)(400,param_1 + 0x4f4);
  }
  if ((param_1[0x4ec] != -1) && (param_1[0x2a1] != 0)) {
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] + 2.0943952);
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x50);
    fVar4 = (float10)FUN_00ddba30((float)((float10)(float)fVar4 - fVar5));
    if ((fVar4 <= (float10)-1.2217305) || ((float10)1.2217305 <= fVar4)) {
      iVar3 = param_1[0x4ec];
      uVar6 = 0;
    }
    else {
      iVar3 = param_1[0x4ec];
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
    param_1[0x638] = (int)((float)param_1[0x638] - 1.0);
    if (param_1[0x21d] <= param_1[0x21c]) {
      param_1[0x21c] = param_1[0x21d];
    }
  }
LAB_0084b949:
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

// 0084B9E0  FUN_0084b9e0  size=678  [callgraph]
void __fastcall FUN_0084b9e0(int *param_1)

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
  local_2c = 0x43531c29;
  local_28 = 0x43adc148;
  param_1[0x63c] = 0;
  uStack_24 = 0x415d999a;
  FUN_00a8e880(&local_2c);
  (**(code **)(*param_1 + 0x220))(0x41200000);
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_008462d0();
    FUN_00aa4080(0xe,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
    FUN_00846350(0);
    param_1[0x604] = 0;
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
      param_1[0x5d9] = 0x42f00000;
    }
  }
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.13962634,0);
  }
  return;
}

// 0084C0D0  FUN_0084c0d0  size=361  [callgraph]
void __fastcall FUN_0084c0d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[0x63c] = 0;
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
    FUN_00842aa0();
  }
  else if (iVar1 != 1) goto LAB_0084c1f2;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x5d9] = 0;
    iVar1 = FUN_00846d40();
    if (iVar1 != 0) {
      return;
    }
  }
LAB_0084c1f2:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.10471976,0);
  }
  return;
}

// 0084C240  FUN_0084c240  size=304  [callgraph]
void __fastcall FUN_0084c240(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x29,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
    FUN_00cad1b0(1);
  }
  else if (iVar1 != 1) goto LAB_0084c328;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(8);
  if (iVar1 != 0) {
    if ((int *)param_1[0x2a1] != (int *)0x0) {
      puVar2 = &DAT_01b35b20;
      (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01b35b20);
      FUN_00dd6d80(puVar2);
    }
    FUN_00a8caf0(0xcb,0,0,0);
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0084c328:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,(float)param_1[0x244] * 0.27925268,0);
  }
  return;
}

// 0084C370  FUN_0084c370  size=944  [callgraph]
void __fastcall FUN_0084c370(int param_1)

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
  undefined *puVar8;
  float fStack_b4;
  int aiStack_b0 [4];
  undefined1 auStack_a0 [4];
  float fStack_9c;
  undefined1 auStack_90 [80];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar5 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar8 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar8);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x295,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e3c10();
    }
    if (*(int *)(param_1 + 0x76c) != 0) {
      FUN_009fb990();
    }
    FUN_00846140(0x2af,0x8000080);
    FUN_0040b190();
    uStack_40 = *(undefined4 *)(param_1 + 0x40);
    uStack_3c = *(undefined4 *)(param_1 + 0x44);
    uStack_38 = *(undefined4 *)(param_1 + 0x48);
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    iVar3 = FUN_00a82090("EmC700_Copter",0x2c19a,auStack_90);
    if (iVar3 != 0) {
      FUN_00842810(iVar3);
    }
    FUN_00842840(&DAT_01648b6c,0x8000080);
    FUN_00eaa6e0(0x3f800000,0);
    if (*(char *)(param_1 + 0x1784) == '\x01') {
      *(undefined4 *)(param_1 + 0x1780) = 0;
    }
    *(undefined4 *)(param_1 + 0x1948) = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x296,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00846140(0x2b0,0x8000080);
    FUN_00842840(&DAT_01648b64,0x8000080);
    goto LAB_0084c572;
  case 3:
LAB_0084c572:
    FUN_00a95ee0(0,piVar5);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        uVar7 = 0;
        piVar4 = piVar5;
        FUN_0083fc40(0,piVar5);
        FUN_00a95ee0(uVar7,piVar4);
      }
    }
    break;
  case 4:
    FUN_00aa4080(0x297,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00846140(0x2b1,0x8000080);
    FUN_00842840(&DAT_01648b5c,0x8000080);
    goto LAB_0084c61a;
  case 5:
LAB_0084c61a:
    FUN_00a95ee0(0,piVar5);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        uVar7 = 0;
        piVar4 = piVar5;
        FUN_0083fc40(0,piVar5);
        FUN_00a95ee0(uVar7,piVar4);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
  default:
    goto switchD_0084c3cd_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
switchD_0084c3cd_default:
  if (((piVar5 != (int *)0x0) && (iVar3 = FUN_00a8c760(0x3a), iVar3 == 0)) &&
     (iVar3 = (**(code **)(*piVar5 + 0x32c))(), iVar3 == 0)) {
    FUN_00a8ce90(aiStack_b0,auStack_a0);
    fVar6 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + fStack_9c);
    piVar5[0x25] = (int)(float)fVar6;
    D3DXVec3TransformNormal(aiStack_b0,aiStack_b0,param_1 + 0x10);
    fVar1 = *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0x44);
    piVar5[0x16] = (int)(*(float *)(param_1 + 0x48) + fStack_b4);
    piVar5[0x14] = (int)(fVar1 + unaff_ESI);
    piVar5[0x15] = (int)(fVar2 + unaff_EBX);
    piVar5[0x17] = aiStack_b0[0];
    switchD_0080dbae::default();
  }
  return;
}

// 0084C740  FUN_0084c740  size=875  [callgraph]
void __fastcall FUN_0084c740(int param_1)

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
  undefined *puVar8;
  float fStack_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  piVar5 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar8 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar8);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00a94bc0(9,0);
    FUN_00aa4080(0x298,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00846140(0x2b2,0x8000080);
    puVar8 = &DAT_01648ba4;
    break;
  case 1:
  case 3:
  case 5:
  case 7:
    goto switchD_0084c79f_caseD_1;
  case 2:
    FUN_00aa4080(0x299,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00846140(0x2b3,0x8000080);
    puVar8 = &DAT_01648b9c;
    break;
  case 4:
    FUN_00aa4080(0x29a,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00846140(0x2b4,0x8000080);
    puVar8 = &DAT_01648b94;
    break;
  case 6:
    FUN_00aa4080(0x29b,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00846140(0x2b5,0x8000080);
    puVar8 = &DAT_01648b8c;
    break;
  case 8:
    FUN_00aa4080(0x29c,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00846140(0x2b6,0x8000080);
    FUN_00842840(&DAT_01648b84,0x8000080);
    goto LAB_0084c9a5;
  case 9:
LAB_0084c9a5:
    FUN_00a95ee0(0,piVar5);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        uVar7 = 0;
        piVar4 = piVar5;
        FUN_0083fc40(0,piVar5);
        FUN_00a95ee0(uVar7,piVar4);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
  default:
    goto switchD_0084c79f_default;
  }
  FUN_00842840(puVar8,0x8000080);
switchD_0084c79f_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
switchD_0084c79f_default:
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

// 0084CAE0  FUN_0084cae0  size=1348  [callgraph]
void __fastcall FUN_0084cae0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  int *piVar5;
  float unaff_ESI;
  float10 fVar6;
  undefined *puVar7;
  float fStack_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  piVar5 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar7 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar7);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x29d,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00846140(0x2b7,0x8000080);
    puVar7 = &DAT_01648bf4;
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
  case 0xb:
  case 0xd:
    goto switchD_0084cb3f_caseD_1;
  case 2:
    FUN_00aa4080(0x29e,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00846140(0x2b8,0x8000080);
    puVar7 = &DAT_01648bec;
    break;
  case 4:
    FUN_00aa4080(0x29f,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00846140(0x2b9,0x8000080);
    puVar7 = &DAT_01648be4;
    break;
  case 6:
    FUN_00aa4080(0x2a0,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00846140(0x2ba,0x8000080);
    puVar7 = &DAT_01648bdc;
    break;
  case 8:
    FUN_00aa4080(0x2a1,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00846140(699,0x8000080);
    puVar7 = &DAT_01648bd4;
    break;
  case 10:
    FUN_00aa4080(0x2a2,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00846140(700,0x8000080);
    puVar7 = &DAT_01648bcc;
    break;
  case 0xc:
    FUN_00aa4080(0x2a3,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00846140(0x2bd,0x8000080);
    puVar7 = &DAT_01648bc4;
    break;
  case 0xe:
    FUN_00aa4080(0x2a4,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00846140(0x2be,0x8000080);
    puVar7 = &DAT_01648bbc;
    goto LAB_0084ce3a;
  case 0xf:
  case 0x11:
    goto switchD_0084cb3f_caseD_f;
  case 0x10:
    FUN_00aa4080(0x2a6,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00846140(0x2c0,0x8000080);
    puVar7 = &DAT_01648bb4;
LAB_0084ce3a:
    FUN_00842840(puVar7,0x8000080);
switchD_0084cb3f_caseD_f:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    goto switchD_0084cb3f_default;
  case 0x12:
    FUN_00aa4080(0x2a5,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00846140(0x2bf,0x8000080);
    FUN_00842840(&DAT_01648bac,0x8000080);
  case 0x13:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      iVar3 = FUN_008427f0();
      if (iVar3 != 0) {
        FUN_008427f0();
        FUN_009fdde0();
      }
      FUN_00a7c950();
      (**(code **)(*param_1 + 0x314))();
      (**(code **)(*param_1 + 0x34c))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
    }
  default:
    goto switchD_0084cb3f_default;
  }
  FUN_00842840(puVar7,0x8000080);
switchD_0084cb3f_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0084cb3f_default:
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

// 0084D080  FUN_0084d080  size=1063  [callgraph]
void __fastcall FUN_0084d080(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float unaff_EBX;
  int *piVar5;
  float unaff_ESI;
  float10 fVar6;
  undefined4 uVar7;
  undefined *puVar8;
  float fStack_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  piVar5 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar8 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar8);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x2a7,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
    FUN_00846140(0x2c1,0x8000080);
    puVar8 = &DAT_01648c24;
    break;
  case 1:
  case 3:
  case 5:
  case 9:
  case 0xb:
    goto switchD_0084d0df_caseD_1;
  case 2:
    FUN_00aa4080(0x2a8,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    uVar7 = 0x2c2;
    goto LAB_0084d1b7;
  case 4:
    FUN_00aa4080(0x2a9,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    uVar7 = 0x2c3;
LAB_0084d1b7:
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00846140(uVar7,0x8000080);
    puVar8 = &DAT_01648c1c;
    break;
  case 6:
    FUN_00aa4080(0x2aa,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00846140(0x2c4,0x8000080);
    FUN_00842840(&DAT_01648c14,0x8000080);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    goto switchD_0084d0df_default;
  case 8:
    FUN_00aa4080(0x2ab,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00846140(0x2c5,0x8000080);
    puVar8 = &DAT_01648c0c;
    break;
  case 10:
    FUN_00aa4080(0x2ac,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00846140(0x2c6,0x8000080);
    puVar8 = &DAT_01648c04;
    break;
  case 0xc:
    FUN_00aa4080(0x2ad,0,0,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00846140(0x2c7,0x8000080);
    FUN_00842840(&DAT_01648bfc,0x8000080);
    goto LAB_0084d39b;
  case 0xd:
LAB_0084d39b:
    FUN_00a8c760(10);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      iVar3 = FUN_00a81330();
      if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
        FUN_008427f0();
        FUN_009fdde0();
      }
      FUN_00a7c950();
    }
  default:
    goto switchD_0084d0df_default;
  }
  FUN_00842840(puVar8,0x8000080);
switchD_0084d0df_caseD_1:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
switchD_0084d0df_default:
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

// 0084D4E0  FUN_0084d4e0  size=1932  [callgraph]
int __fastcall FUN_0084d4e0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int local_50;
  int *local_4c;
  int aiStack_48 [18];
  
  local_4c = (int *)param_1[0x2a1];
  param_1[0x63f] = 0;
  if (local_4c == (int *)0x0) {
LAB_0084d562:
    local_4c = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01b35b20;
    (**(code **)(*local_4c + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar6);
    if (iVar3 == 0) goto LAB_0084d562;
    (**(code **)(*local_4c + 0x354))();
    if (((((local_4c[0x139] != 0) || (iVar3 = local_4c[0x186], iVar3 == 0x10005d)) ||
         (iVar3 == 0x100056)) || ((iVar3 == 0x100055 || (iVar3 == 0x100053)))) ||
       (iVar3 == 0x100051)) {
      return 0;
    }
  }
  local_50 = 0;
  if (param_1[0x604] != 0) {
    param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
    FUN_00a8caf0(0x20013,0,0,0);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    return 1;
  }
  if (param_1[0x5d6] != 0) {
    if ((((char)param_1[0x5e1] == '\x03') &&
        (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 42.25 < fVar1 != (fVar1 == 42.25))) &&
       ((float)param_1[0x2a8] <= 1.2217305)) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x10006,0,0,0);
      iVar3 = FUN_00ac4780();
      if ((iVar3 == 2) && (sVar2 = FUN_00dde2d0(0,1), sVar2 == 1)) {
        FUN_00842d60();
      }
      iVar3 = FUN_00ac4780();
      if (iVar3 == 3) {
        sVar2 = FUN_00dde2d0(0,2);
        if (sVar2 == 1) {
          param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
          FUN_00a8caf0(0x20007,0,0,0);
        }
        sVar2 = FUN_00dde2d0(0,2);
        if (sVar2 == 2) {
          FUN_00842d60();
        }
      }
      return 1;
    }
    fVar1 = (float)param_1[0x5db];
    aiStack_48[3] = 0x20006;
    aiStack_48[5] = 0x20006;
    aiStack_48[4] = 0x2000d;
    aiStack_48[8] = 0x2000d;
    uVar4 = (uint)param_1[0x5da] % 9;
    aiStack_48[0] = 0x20004;
    aiStack_48[1] = 0x2000b;
    aiStack_48[2] = 0x2000c;
    aiStack_48[6] = 0x20007;
    aiStack_48[7] = 0x2000b;
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && (aiStack_48[uVar4] == 0x20007)) {
      uVar4 = param_1[0x5da] + 1;
      param_1[0x5da] = uVar4;
      uVar4 = uVar4 % 9;
    }
    fVar1 = (float)param_1[0x2a3];
    if (((!NAN(fVar1) && 12.25 < fVar1 != (fVar1 == 12.25)) && ((float)param_1[0x2a3] < 30.25)) &&
       ((float)param_1[0x2a8] <= 0.7853982)) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      iVar3 = aiStack_48[uVar4];
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(iVar3,0,0,0);
      local_50 = 1;
    }
    fVar1 = (float)param_1[0x5db];
    aiStack_48[9] = 0x10006;
    aiStack_48[0xe] = 0x10006;
    aiStack_48[0x10] = 0x10006;
    aiStack_48[0xb] = 0x20008;
    aiStack_48[0x11] = 0x20008;
    aiStack_48[10] = 0x2000b;
    uVar4 = (uint)param_1[0x5da] % 9;
    aiStack_48[0xc] = 0x20007;
    aiStack_48[0xd] = 0x2000c;
    aiStack_48[0xf] = 0x2000d;
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && (aiStack_48[uVar4] == 0x20007)) {
      iVar3 = param_1[0x5da];
      param_1[0x5da] = iVar3 + 1U;
      uVar4 = (iVar3 + 1U) % 9;
    }
    fVar1 = (float)param_1[0x2a3];
    if (((!NAN(fVar1) && 42.25 < fVar1 != (fVar1 == 42.25)) && ((float)param_1[0x2a3] < 2500.0)) &&
       ((float)param_1[0x2a8] <= 0.5235988)) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      iVar3 = aiStack_48[uVar4 + 9];
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(iVar3,0,0,0);
      local_50 = 1;
    }
    if ((param_1[0x186] == 0x2000c) &&
       ((((char)param_1[0x5e1] != '\0' || ((char)param_1[0x5e3] != '\0')) && (local_50 != 0)))) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x2000b,0,0,0);
    }
    if (((param_1[0x186] == 0x2000d) &&
        (((char)param_1[0x5e1] != '\0' || ((char)param_1[0x5e3] != '\0')))) && (local_50 != 0)) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x2000b,0,0,0);
    }
    iVar3 = FUN_00846d40();
    if ((iVar3 != 0) || (iVar3 = FUN_00842d60(), iVar3 != 0)) {
      local_50 = 1;
    }
    if (param_1[0x634] == 0) {
      return local_50;
    }
    if ((local_4c != (int *)0x0) && (iVar3 = FUN_00b80980(), iVar3 != 0)) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x20017,0,0,0);
      *(byte *)((int)param_1 + 0x18d5) = *(byte *)((int)param_1 + 0x18d5) | 0x10;
      *(byte *)((int)param_1 + 0x18d7) = *(byte *)((int)param_1 + 0x18d7) | 0xc;
      return 1;
    }
    if ((*(byte *)((int)param_1 + 0x18d5) & 0x10) == 0) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x20013,0,0,0);
      *(byte *)((int)param_1 + 0x18d5) = *(byte *)((int)param_1 + 0x18d5) | 0x10;
      *(byte *)((int)param_1 + 0x18d7) = *(byte *)((int)param_1 + 0x18d7) | 0xc;
      *(undefined1 *)((int)param_1 + 0x18d6) = 0x10;
      return 1;
    }
    uVar5 = 0x20017;
    goto LAB_0084dc37;
  }
  fVar1 = (float)param_1[0x5db];
  aiStack_48[1] = 0x20006;
  aiStack_48[4] = 0x20006;
  uVar4 = (uint)param_1[0x5da] % 5;
  aiStack_48[0] = 0x20004;
  aiStack_48[2] = 0x20007;
  aiStack_48[3] = 0x20009;
  if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && (aiStack_48[uVar4] == 0x20007)) {
    uVar4 = param_1[0x5da] + 1;
    param_1[0x5da] = uVar4;
    uVar4 = uVar4 % 5;
  }
  fVar1 = (float)param_1[0x2a3];
  if (((!NAN(fVar1) && 12.25 < fVar1 != (fVar1 == 12.25)) && ((float)param_1[0x2a3] < 30.25)) &&
     ((float)param_1[0x2a8] <= 0.7853982)) {
    param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
    iVar3 = aiStack_48[uVar4];
    param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
    param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
    FUN_00a8caf0(iVar3,0,0,0);
    local_50 = 1;
  }
  if (param_1[0x128] == 1) {
    if ((((float)param_1[0x555] <= 0.0) && (local_50 == 0)) &&
       ((fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 12.25 < fVar1 != (fVar1 == 12.25) &&
        (((float)param_1[0x2a8] <= 1.3962634 && (iVar3 = FUN_00ac4780(), iVar3 < 3)))))) {
      param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x10006,0,0,0);
      local_50 = 1;
    }
    if (param_1[0x128] != 1) goto LAB_0084dbf1;
    if (local_50 != 0) {
      return local_50;
    }
    fVar1 = (float)param_1[0x2a3];
    if (((NAN(fVar1) || 12.25 < fVar1 == (fVar1 == 12.25)) || (1.3962634 < (float)param_1[0x2a8]))
       || (iVar3 = FUN_00ac4780(), iVar3 < 3)) goto LAB_0084dbf8;
  }
  else {
LAB_0084dbf1:
    if (local_50 != 0) {
      return local_50;
    }
LAB_0084dbf8:
    fVar1 = (float)param_1[0x2a3];
    if (NAN(fVar1) || 12.25 < fVar1 == (fVar1 == 12.25)) {
      return local_50;
    }
    if (1.3962634 < (float)param_1[0x2a8]) {
      return local_50;
    }
    iVar3 = FUN_00ac4780();
    if (iVar3 < 4) {
      return local_50;
    }
  }
  uVar5 = 0x10006;
LAB_0084dc37:
  param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
  param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
  param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
  param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
  FUN_00a8caf0(uVar5,0,0,0);
  return 1;
}

// 0084DC70  FUN_0084dc70  size=432  [callgraph]
void __thiscall FUN_0084dc70(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar7;
  undefined *puVar8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0x40000000;
  D3DXVec3TransformNormal(&local_b0,&local_b0,param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  FUN_0040b190();
  uStack_40 = *(undefined4 *)(param_1 + 0x90);
  fStack_3c = *(float *)(param_1 + 0x94);
  uStack_38 = *(undefined4 *)(param_1 + 0x98);
  fStack_4c = fVar1 + unaff_ESI;
  fStack_48 = fVar2 + unaff_EBX;
  fStack_44 = fVar3 + fStack_b4;
  fVar7 = (float10)FUN_00ddba30(fStack_3c + param_2);
  fStack_3c = (float)fVar7;
  uStack_98 = param_3;
  iStack_9c = 0;
  if (*(int *)(param_1 + 0x618) == 0x2000c) {
    iStack_9c = 2;
  }
  if (*(int *)(param_1 + 0x618) == 0x2000d) {
    iStack_9c = 4;
  }
  iVar4 = FUN_00a82090("PowerGaizer",0x2c70c,&iStack_9c);
  if (iVar4 != 0) {
    uStack_a0 = *(undefined4 *)(param_1 + 0x4f0);
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 != (int *)0x0) {
      puVar8 = &DAT_01b35abc;
      (**(code **)(*piVar5 + 4))(&DAT_01b35abc);
      FUN_00dd6d80(puVar8);
    }
    uVar6 = FUN_00a7c7f0();
    FUN_00a7c960(uVar6);
    if (iStack_9c == 4) {
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 == (int *)0x0) {
        uRam00000ad8 = 1;
        return;
      }
      puVar8 = &DAT_01b35abc;
      (**(code **)(*piVar5 + 4))(&DAT_01b35abc);
      iVar4 = FUN_00dd6d80(puVar8);
      *(undefined4 *)((-(uint)(iVar4 != 0) & (uint)piVar5) + 0xad8) = 1;
    }
  }
  return;
}

// 0084DE20  FUN_0084de20  size=502  [callgraph]
void __fastcall FUN_0084de20(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float local_b0 [5];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_00842dd0();
  local_b0[0] = 0.0;
  local_b0[1] = 3.0;
  local_b0[2] = 10.0;
  D3DXVec3TransformNormal(local_b0,local_b0,param_1 + 0x10);
  iVar2 = FUN_00a12210(0);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0xffffffff;
  uStack_9c = 1;
  local_b0[0] = *(float *)(iVar2 + 0x4c) + local_b0[0];
  local_b0[1] = 2.53122e-40;
  local_b0[2] = 2.53122e-40;
  puVar4 = &uStack_9c;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_50 = 0x3f800000;
  uStack_64 = 0x3f800000;
  uStack_78 = 0x3f800000;
  uStack_8c = 0x3f800000;
  uStack_34 = 0x3f800000;
  uStack_30 = 0x3f800000;
  uStack_2c = 0x3f800000;
  uStack_4c = *(undefined4 *)(param_1 + 0x50);
  uStack_44 = *(undefined4 *)(param_1 + 0x58);
  fStack_48 = *(float *)(param_1 + 0x54) - 50.0;
  uStack_40 = *(undefined4 *)(param_1 + 0x90);
  uStack_3c = *(undefined4 *)(param_1 + 0x94);
  uStack_38 = *(undefined4 *)(param_1 + 0x98);
  sVar1 = FUN_00dde2d0(0,1);
  iVar2 = FUN_00a82090("Copter",local_b0[sVar1 + 1],puVar4);
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
      local_b0[0] = 0.0;
      local_b0[1] = 0.0;
      local_b0[2] = 0.0;
      FUN_00843cb0(*(undefined4 *)(param_1 + 0x4f0),0xf00,local_b0);
      FUN_00848e10(*(undefined4 *)(param_1 + 0x4f0));
    }
  }
  return;
}

// 0084E020  FUN_0084e020  size=46  [callgraph]
void FUN_0084e020(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x10) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00848a10();
      }
    }
  }
  return;
}

// 0084E0A0  FUN_0084e0a0  size=179  [callgraph]
void __thiscall FUN_0084e0a0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_90 [20];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_0040b190();
  local_40 = *param_2;
  local_90[0] = 3;
  local_3c = param_2[1];
  local_38 = param_2[2];
  local_34 = *(undefined4 *)(param_1 + 0x90);
  local_30 = *(undefined4 *)(param_1 + 0x94);
  local_2c = *(undefined4 *)(param_1 + 0x98);
  iVar1 = FUN_00a82090("Copter",0x2c19a,local_90);
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar2 = FUN_009f8b40();
      FUN_009f8ae0(uVar2);
      FUN_00848e10(*(undefined4 *)(param_1 + 0x4f0));
      FUN_00843d40(param_3);
    }
  }
  return;
}

// 0084F6A0  Emc700::vf40  size=3275  [class]
undefined4 __fastcall Emc700::vf40(int *param_1)

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
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int local_94;
  undefined4 uStack_84;
  undefined1 local_80 [124];
  
  iVar3 = EmBaseDLC::vf40();
  if (iVar3 != 0) {
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    iVar3 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar3 != 0) {
      iVar3 = param_1[300];
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(iVar3,0x20700);
      param_1[0x130] = param_1[0x130] | 0x20;
      param_1[0x20b] = 5;
      iVar3 = FUN_00c5def0(param_1[0x13c]);
      param_1[0x25c] = iVar3;
      if (param_1[300] == 0x2c70a) {
        FUN_00405230();
        local_b0 = 0;
        local_ac = 0;
        local_a8 = 0;
        FUN_00c151f0(1,param_1[0x13c],3,&local_b0,0,0x43480000,0x3f800000,2,0);
        FUN_00c57830(local_80);
      }
      param_1[0x1b1] = 3;
      param_1[0x1b4] = 0;
      param_1[0x1b5] = 0;
      param_1[0x1b6] = 0;
      param_1[0x1b7] = local_94;
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
        iVar3 = RigidBodyCollection::RigidBodyCollection_2();
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
      iVar3 = param_1[0x128];
      param_1[0x5d6] = 0;
      if (iVar3 == 2) {
        param_1[0x5d6] = 1;
      }
      if (iVar3 == 3) {
        param_1[0x5d6] = 1;
      }
      if (iVar3 == 4) {
        param_1[0x5d6] = 1;
        param_1[0x5d7] = 1;
      }
      uVar4 = 0x2c701;
      if (param_1[300] == 0x2c70a) {
        uVar4 = 0x2c70b;
      }
      uVar4 = FUN_00a82090("Emc700_FACE",uVar4,0);
      FUN_00a7c970(uVar4);
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        iVar3 = FUN_00a81330();
        FUN_00a8c5f0(0,param_1[0x13c],iVar3,3,3);
        FUN_00a8c5f0(1,param_1[0x13c],iVar3,4,4);
        FUN_00a8c5f0(2,param_1[0x13c],iVar3,5,5);
        FUN_00a8c5f0(5,param_1[0x13c],iVar3,0,0);
        FUN_00a8c5f0(6,param_1[0x13c],iVar3,1,1);
        FUN_00a8c5f0(7,param_1[0x13c],iVar3,2,2);
        if (iVar3 != 0) {
          iVar3 = FUN_00a7c8a0();
          if (iVar3 != 0) {
            iVar3 = param_1[300];
            FUN_00a7c8a0();
            uStack_84 = FUN_00a92f90();
            FUN_00e26e90();
            FUN_00e272b0(iVar3,0x20701);
            iVar3 = FUN_00a7c8a0();
            *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) & 0xfffffffd;
            piVar7 = (int *)FUN_00a7c8a0();
            (**(code **)(*piVar7 + 0x1c))();
            uVar4 = 3;
            FUN_00a7c8a0(3);
            cModelBase::setRootPartsNo(uVar4);
            iVar3 = FUN_0083fc40();
            uVar13 = 0x3f800000;
            iVar3 = iVar3 + 0x494;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0x3f800000;
            uVar9 = 0x3d088889;
            uVar6 = 0;
            uVar4 = 1;
            FUN_0083fc40(iVar3,1,0,0x3d088889,0x3f800000,0,0,0x3f800000);
            FUN_00a9f3c0(iVar3,uVar4,uVar6,uVar9,uVar10,uVar11,uVar12,uVar13);
          }
        }
        param_1[0x4e3] = 0;
      }
      param_1[0x4ea] = 0;
      if (param_1[300] == 0x2c700) {
        uVar4 = FUN_00a82090("Em0700_Tabaco",0x2c70e,0);
        FUN_00a7c970(uVar4);
        iVar3 = FUN_00a81330();
        if (iVar3 != 0) {
          param_1[0x4ea] = 1;
          iVar3 = FUN_00a81330();
          FUN_00a8c5f0(4,param_1[0x13c],iVar3,0xffffffff,0);
          if (iVar3 != 0) {
            iVar3 = FUN_00a7c8a0();
            if (iVar3 != 0) {
              iVar3 = FUN_00a7c8a0();
              *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) & 0xfffffffd;
              piVar7 = (int *)FUN_00a7c8a0();
              (**(code **)(*piVar7 + 0x1c))();
              uVar4 = 0;
              FUN_00a7c8a0(0);
              cModelBase::setRootPartsNo(uVar4);
              iVar3 = FUN_0083fc80();
              uVar13 = 0x3f800000;
              iVar3 = iVar3 + 0x494;
              uVar12 = 0;
              uVar11 = 0;
              uVar10 = 0x3f800000;
              uVar9 = 0x3d088889;
              uVar6 = 0;
              uVar4 = 0;
              FUN_0083fc80(iVar3,0,0,0x3d088889,0x3f800000,0,0,0x3f800000);
              FUN_00a9f3c0(iVar3,uVar4,uVar6,uVar9,uVar10,uVar11,uVar12,uVar13);
            }
          }
        }
      }
      param_1[0x5d9] = 0;
      param_1[0x5c1] = 0x3f800000;
      param_1[0x5c2] = 0x428c0000;
      param_1[0x21d] = 3000;
      param_1[0x21c] = 3000;
      param_1[0x5c3] = 0x41a00000;
      param_1[0x5da] = 0;
      param_1[0x5dc] = 0;
      param_1[0x5c4] = 0x44d6dbf3;
      param_1[0x5dd] = 0;
      param_1[0x5df] = 0;
      param_1[0x5c5] = 0x3f333333;
      param_1[0x5de] = 0xf;
      param_1[0x5c0] = 100;
      param_1[0x5c6] = 0x44160000;
      param_1[0x4ec] = -1;
      param_1[0x4ed] = -1;
      param_1[0x5c7] = 0x43960000;
      param_1[0x4ee] = -1;
      param_1[0x4ef] = -1;
      param_1[0x5c8] = 0x3f4ccccd;
      param_1[0x4f2] = 0;
      param_1[0x634] = 0;
      param_1[0x5c9] = 0x3dcccccd;
      *(undefined2 *)(param_1 + 0x635) = 0;
      *(undefined2 *)((int)param_1 + 0x18d7) = 0;
      param_1[0x5ca] = 0x3e4ccccd;
      *(undefined1 *)((int)param_1 + 0x18d6) = 0;
      *(undefined1 *)((int)param_1 + 0x18d9) = 0;
      param_1[0x5cb] = 0x3f19999a;
      *(undefined1 *)((int)param_1 + 0x18db) = 0;
      *(undefined1 *)(param_1 + 0x63a) = 0;
      param_1[0x5cc] = 0x3ecccccd;
      *(undefined1 *)((int)param_1 + 0x18ea) = 0;
      param_1[0x63c] = 0;
      param_1[0x4e7] = 0;
      param_1[0x5cd] = 0x3dcccccd;
      param_1[0x5ce] = 0x428c0000;
      param_1[0x5cf] = 0x43d20000;
      param_1[0x5d0] = 0x43960000;
      param_1[0x5d2] = 0x3c54fdf4;
      param_1[0x5db] = 0;
      param_1[0x5d1] = 0x3f800000;
      param_1[0x5d3] = 0x3f000000;
      sVar2 = FUN_00dde2d0(0,1);
      param_1[0x63e] = (int)sVar2;
      param_1[0x5e0] = 0;
      param_1[0x5e2] = 0;
      param_1[0x63f] = 0;
      param_1[0x604] = 0;
      param_1[0x651] = 0;
      param_1[0x652] = 1;
      *(undefined1 *)(param_1 + 0x5e1) = 0;
      *(undefined1 *)(param_1 + 0x5e3) = 0;
      FUN_00a929d0();
      param_1[0x555] = 0x4628c000;
      param_1[0x557] = 0;
      param_1[0x554] = 500;
      param_1[0x556] = 0x46a8c000;
      if (param_1[0x128] == 0) {
        param_1[0x557] = 1;
      }
      if (param_1[0x128] == 1) {
        param_1[0x557] = 1;
      }
      if (param_1[0x1d5] != 0) {
        FUN_00ac8570(0x25);
        uVar4 = FUN_00fdbc60();
        FUN_00a8edf0(uVar4);
        if (param_1[0x128] == 0) {
          FUN_00ac8570(0x28);
          iVar3 = FUN_00fdbc60();
          param_1[0x554] = iVar3;
          fVar8 = (float10)FUN_00ac8570(0x27);
          param_1[0x555] = (int)(float)(fVar8 * (float10)60.0);
        }
        if (param_1[0x128] == 1) {
          FUN_00ac8570(0x2a);
          iVar3 = FUN_00fdbc60();
          param_1[0x554] = iVar3;
          fVar8 = (float10)FUN_00ac8570(0x29);
          param_1[0x555] = (int)(float)(fVar8 * (float10)60.0);
          fVar8 = (float10)FUN_00ac8570(0x2b);
          param_1[0x556] = (int)(float)(fVar8 * (float10)60.0);
        }
        FUN_00ac8570(0x2e);
        iVar3 = FUN_00fdbc60();
        param_1[0x5c0] = iVar3;
        fVar8 = (float10)FUN_00ac8570(0x2f);
        param_1[0x5c1] = (int)(float)fVar8;
        if (param_1[0x128] == 0) {
          fVar8 = (float10)FUN_00ac8570(0x30);
          param_1[0x5c1] = (int)(float)fVar8;
        }
        if (param_1[0x128] == 1) {
          fVar8 = (float10)FUN_00ac8570(0x30);
          param_1[0x5c1] = (int)(float)fVar8;
        }
        fVar8 = (float10)FUN_00ac8570(0x32);
        param_1[0x5c2] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x33);
        param_1[0x5c3] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x34);
        param_1[0x5c4] = (int)(float)(fVar8 * (float10)57.29578);
        fVar8 = (float10)FUN_00ac8570(0x36);
        param_1[0x5c5] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x37);
        param_1[0x5c6] = (int)(float)(fVar8 * (float10)60.0);
        fVar8 = (float10)FUN_00ac8570(0x38);
        param_1[0x5c7] = (int)(float)(fVar8 * (float10)60.0);
        fVar8 = (float10)FUN_00ac8570(0x3a);
        param_1[0x5c8] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x3b);
        param_1[0x5c9] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x40);
        param_1[0x5ca] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x3c);
        param_1[0x5cb] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x3d);
        param_1[0x5cc] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x41);
        param_1[0x5cd] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x42);
        param_1[0x5ce] = (int)(float)fVar8;
        fVar8 = (float10)FUN_00ac8570(0x43);
        param_1[0x5cf] = (int)(float)(fVar8 * (float10)60.0);
        fVar8 = (float10)FUN_00ac8570(0x44);
        param_1[0x5d0] = (int)(float)(fVar8 * (float10)60.0);
        fVar8 = (float10)FUN_00ac8570(0x4a);
        param_1[0x5d2] = (int)(float)fVar8;
        if (param_1[0x128] == 0) {
          fVar8 = (float10)FUN_00ac8570(0x46);
          param_1[0x5d1] = (int)(float)fVar8;
        }
        if (param_1[0x128] == 1) {
          fVar8 = (float10)FUN_00ac8570(0x47);
          param_1[0x5d1] = (int)(float)fVar8;
        }
        if (param_1[0x128] == 2) {
          fVar8 = (float10)FUN_00ac8570(0x48);
          param_1[0x5d1] = (int)(float)fVar8;
        }
        if (param_1[0x128] == 3) {
          fVar8 = (float10)FUN_00ac8570(0x48);
          param_1[0x5d1] = (int)(float)fVar8;
        }
        if (param_1[0x128] == 4) {
          fVar8 = (float10)FUN_00ac8570(0x48);
          param_1[0x5d1] = (int)(float)fVar8;
        }
        fVar8 = (float10)FUN_00ac8570(0x4c);
        param_1[0x5d3] = (int)(float)fVar8;
      }
      param_1[0x5d8] = 0;
      piVar7 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(piVar7);
      FUN_00842110();
      FUN_00a82790(param_1[0x13c],5,0);
      param_1[0x558] = param_1[0x558] | 2;
      FUN_00a82840(0x3e32b8c2,0xbf490fdb,0x3dcccccd,0x393702d3,0x3d8efa35);
      FUN_00a82870(0x3f860a92,0xbf860a92,0x3dcccccd,0x393702d3,0x3d8efa35);
      param_1[0x4eb] = param_1[0x4eb] & 0x84ffffff;
      param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
      FUN_00a8caf0(0x10000,0,0,0);
      if (param_1[0x4ea] != 0) {
        param_1[0x4eb] = param_1[0x4eb] & 0x84ffffff;
        param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
        FUN_00a8caf0(0x7000f,0,0,0);
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
      if (param_1[300] == 0x2c70a) {
        if (param_1[0x128] == 3) {
          param_1[0x5d9] = 0x43700000;
          uStack_a0 = 0x438ea51f;
          uStack_9c = 0x43b843d7;
          uStack_98 = 0xc156e148;
          local_b0 = 0x436d1eb8;
          local_ac = 0x43adc000;
          local_a8 = 0x40df0a3d;
          FUN_0084e0a0(&uStack_a0,&local_b0);
          local_b0 = 0x438dfeb8;
          local_ac = 0x43b863d7;
          local_a8 = 0x4168cccd;
          uStack_a0 = 0x436d3d71;
          uStack_9c = 0x43adc000;
          uStack_98 = 0xc0f3851f;
          FUN_0084e0a0(&local_b0,&uStack_a0);
        }
        if ((param_1[300] == 0x2c70a) && (param_1[0x128] == 4)) {
          iVar3 = FUN_00fdbc60();
          param_1[0x21c] = iVar3;
          param_1[0x14] = 0x4353199a;
          param_1[0x15] = 0x43adc000;
          param_1[0x16] = 0x414828f6;
          param_1[0x24] = 0;
          param_1[0x25] = 0x40234e95;
          param_1[0x26] = 0;
          (**(code **)(*param_1 + 0x7c))(param_1 + 0x14,param_1 + 0x24);
          FUN_00842e40();
        }
      }
      return 1;
    }
  }
  return 0;
}

// 00850370  Emc700::vf48  size=548  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Emc700::vf48(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 unaff_ESI;
  float10 extraout_ST0;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00a8e880(*(int *)(param_1 + 0xa84) + 0x40);
  }
  fVar2 = *(float *)(param_1 + 0x1554) - _DAT_01be942c;
  *(float *)(param_1 + 0x1554) = fVar2;
  if (fVar2 < -1.0) {
    *(undefined4 *)(param_1 + 0x1554) = 0xbf800000;
  }
  fVar2 = *(float *)(param_1 + 0x1558) - _DAT_01be942c;
  *(float *)(param_1 + 0x1558) = fVar2;
  if (fVar2 < -1.0) {
    *(undefined4 *)(param_1 + 0x1558) = 0xbf800000;
  }
  fVar2 = *(float *)(param_1 + 0x1764);
  if (!NAN(fVar2) && 0.0 < fVar2 != (fVar2 == 0.0)) {
    *(float *)(param_1 + 0x1764) = *(float *)(param_1 + 0x1764) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x176c) != (*(float *)(param_1 + 0x176c) == 0.0)) {
    *(float *)(param_1 + 0x176c) = *(float *)(param_1 + 0x176c) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x18ec) != (*(float *)(param_1 + 0x18ec) == 0.0)) {
    *(float *)(param_1 + 0x18ec) = *(float *)(param_1 + 0x18ec) - *(float *)(param_1 + 0x910);
  }
  fVar2 = *(float *)(param_1 + 0x18f4) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x18f4) = fVar2;
  if (fVar2 < 0.0) {
    *(undefined4 *)(param_1 + 0x18f4) = 0;
    *(undefined4 *)(param_1 + 0x18f0) = 0;
  }
  if (((*(int *)(param_1 + 0x1948) != 0) && (0 < *(int *)(param_1 + 0x870))) &&
     (*(int *)(param_1 + 0x4b0) == 0x2c70a)) {
    DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
    DAT_01dc08dc = 0;
    DAT_01dc08e0 = 0;
    DAT_01dc08e4 = *(undefined4 *)(param_1 + 0x870);
    DAT_01dc08e8 = *(undefined4 *)(param_1 + 0x874);
    DAT_01dc08ec = 1;
    FUN_00cad2a0();
  }
  iVar3 = FUN_00fdbc60();
  if ((*(int *)(param_1 + 0x870) <= iVar3) && ((*(byte *)(param_1 + 0x18e8) & 1) == 0)) {
    *(float *)(param_1 + 0x18ec) = (float)extraout_ST0;
    *(byte *)(param_1 + 0x18e8) = *(byte *)(param_1 + 0x18e8) | 1;
  }
  EmBaseDLC::vf48();
  FUN_00a92fb0();
  fVar4 = (float10)FUN_00e04a50();
  *(float *)(param_1 + 0x910) = (float)fVar4;
  iVar3 = FUN_00ac48f0(0);
  *(int *)(param_1 + 0x1754) = iVar3;
  if (iVar3 == 0) {
    piVar1 = (int *)(param_1 + 0x1750);
    *piVar1 = *piVar1 + -3;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x1750) = 0;
    }
  }
  else {
    *(int *)(param_1 + 0x1750) = *(int *)(param_1 + 0x1750) + 1;
    if (0x77 < *(int *)(param_1 + 0x1750)) {
      *(undefined4 *)(param_1 + 0x1750) = 0x78;
    }
  }
  iVar3 = FUN_00a8cab0(unaff_ESI);
  if (iVar3 == 0x10000) {
    FUN_00844ac0();
    return;
  }
  if (iVar3 == 0x10001) {
    FUN_00844b50();
    return;
  }
  if (iVar3 != 0x10005) {
    return;
  }
  FUN_00844be0();
  return;
}

// 00850530  Emc700::vf32C  size=1997  [class]
undefined4 __fastcall Emc700::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  float10 fVar11;
  int local_1b8;
  int local_1b4;
  int local_1a0 [12];
  float fStack_170;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined1 auStack_50 [76];
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  iVar6 = FUN_00a8ef10();
  if ((iVar6 == 0) && (param_1[0x139] == 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
    if (param_1[0x286] != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    piVar10 = (int *)param_1[0x19f];
    piVar9 = piVar10 + param_1[0x1a1] * 0x54;
    FUN_00445db0();
    local_1b4 = -1;
    bVar5 = false;
    if (piVar10 != piVar9) {
      do {
        if (*piVar10 != 0x147) {
          if (*piVar10 == 0x1b0) {
            (**(code **)(*param_1 + 0x370))(local_1a0);
          }
          else if (local_1b4 < piVar10[1]) {
            bVar5 = true;
            FUN_00448f50(piVar10);
            local_1b4 = piVar10[1];
          }
        }
        piVar10 = piVar10 + 0x54;
      } while (piVar10 != piVar9);
      if (bVar5) {
        iVar6 = FUN_00a8f040(local_1a0);
        if (((((iVar6 == 0) && (local_1a0[0] != 0)) && (local_1a0[0] != 1)) &&
            ((local_1a0[0] != 2 && (local_1a0[0] != 0x1b0)))) && (local_1a0[0] != 0x147)) {
          fVar11 = (float10)FUN_00ddba30(fStack_170 - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar11;
          FID_conflict__memcpy(auStack_50,&fStack_100,0x40);
          iVar6 = FUN_00c5fb10(param_1[0x13c],auStack_50,param_1[0x4ec],0,0);
          if (iVar6 != 0) {
            param_1[0x4f0] = 1;
            FUN_00dda360(0,0x3f800000,0x3f800000,10);
          }
          if (param_1[0x54c] != 0) {
            iVar6 = 0;
            local_1b8 = 0;
            if (0 < (short)param_1[0xc9]) {
              do {
                iVar3 = param_1[200];
                iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"ex_qte_all"), iVar7 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar6 = iVar6 + 0x70;
              } while (local_1b8 < (short)param_1[0xc9]);
            }
            FUN_00dda360(0,0x3f800000,0x3f800000,10);
            fVar2 = fStack_fc * fStack_fc;
            fVar4 = fStack_100 * fStack_100;
            FUN_00ddbaa0(-(fStack_f8 /
                          SQRT(fStack_d8 * fStack_d8 + fStack_e0 * fStack_e0 + fStack_dc * fStack_dc
                              )));
            fVar11 = (float10)fpatan((float10)fStack_fc /
                                     (float10)SQRT(fStack_e8 * fStack_e8 +
                                                   fStack_f0 * fStack_f0 + fStack_ec * fStack_ec),
                                     (float10)fStack_100 /
                                     (float10)SQRT(fStack_f8 * fStack_f8 + fVar4 + fVar2));
            fVar11 = fVar11 * (float10)57.29578;
            fVar2 = (float)fVar11;
            if (((fVar11 < (float10)55.0 != (fVar11 == (float10)55.0)) && ((float10)35.0 <= fVar11))
               && (local_1b8 = 0, 0 < (short)param_1[0xc9])) {
              iVar6 = 0;
              do {
                iVar3 = param_1[200];
                iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"ex_qte_dr45"), iVar7 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar6 = iVar6 + 0x70;
              } while (local_1b8 < (short)param_1[0xc9]);
              fVar11 = (float10)fVar2;
            }
            if (((fVar11 < (float10)-125.0 != (fVar11 == (float10)-125.0)) &&
                ((float10)-145.0 <= fVar11)) && (local_1b8 = 0, 0 < (short)param_1[0xc9])) {
              iVar6 = 0;
              do {
                iVar3 = param_1[200];
                iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"ex_qte_dr45"), iVar7 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar6 = iVar6 + 0x70;
              } while (local_1b8 < (short)param_1[0xc9]);
              fVar11 = (float10)fVar2;
            }
            if (((fVar11 < (float10)-35.0 != (fVar11 == (float10)-35.0)) &&
                ((float10)-55.0 <= fVar11)) && (local_1b8 = 0, 0 < (short)param_1[0xc9])) {
              iVar6 = 0;
              do {
                iVar3 = param_1[200];
                iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"ex_qte_dl45"), iVar7 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar6 = iVar6 + 0x70;
              } while (local_1b8 < (short)param_1[0xc9]);
              fVar11 = (float10)fVar2;
            }
            if (((fVar11 < (float10)145.0 != (fVar11 == (float10)145.0)) &&
                ((float10)125.0 <= fVar11)) && (local_1b8 = 0, 0 < (short)param_1[0xc9])) {
              iVar6 = 0;
              do {
                iVar3 = param_1[200];
                iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"ex_qte_dl45"), iVar7 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar6 = iVar6 + 0x70;
              } while (local_1b8 < (short)param_1[0xc9]);
              fVar11 = (float10)fVar2;
            }
            if (((fVar11 < (float10)100.0 != (fVar11 == (float10)100.0)) &&
                ((float10)80.0 <= fVar11)) && (local_1b8 = 0, 0 < (short)param_1[0xc9])) {
              iVar6 = 0;
              do {
                iVar3 = param_1[200];
                iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"ex_qte_dy90"), iVar7 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar6 = iVar6 + 0x70;
              } while (local_1b8 < (short)param_1[0xc9]);
              fVar11 = (float10)fVar2;
            }
            if (((fVar11 < (float10)-80.0 != (fVar11 == (float10)-80.0)) &&
                ((float10)-100.0 <= fVar11)) && (local_1b8 = 0, 0 < (short)param_1[0xc9])) {
              iVar6 = 0;
              do {
                iVar3 = param_1[200];
                iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"ex_qte_dy90"), iVar7 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar6 = iVar6 + 0x70;
              } while (local_1b8 < (short)param_1[0xc9]);
              fVar11 = (float10)fVar2;
            }
            if (((fVar11 < (float10)10.0 != (fVar11 == (float10)10.0)) && ((float10)-10.0 <= fVar11)
                ) && (local_1b8 = 0, 0 < (short)param_1[0xc9])) {
              iVar6 = 0;
              do {
                iVar3 = param_1[200];
                iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"ex_qte_dx90"), iVar7 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar6 = iVar6 + 0x70;
              } while (local_1b8 < (short)param_1[0xc9]);
              fVar11 = (float10)fVar2;
            }
            if (((fVar11 < (float10)9.0 != (fVar11 == (float10)9.0)) && ((float10)-11.0 <= fVar11))
               && (local_1b8 = 0, 0 < (short)param_1[0xc9])) {
              iVar6 = 0;
              do {
                iVar3 = param_1[200];
                iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"ex_qte_dx90"), iVar7 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar6 = iVar6 + 0x70;
              } while (local_1b8 < (short)param_1[0xc9]);
              fVar11 = (float10)fVar2;
            }
            if (((fVar11 < (float10)190.0 != (fVar11 == (float10)190.0)) &&
                ((float10)170.0 <= fVar11)) && (local_1b8 = 0, 0 < (short)param_1[0xc9])) {
              iVar6 = 0;
              do {
                iVar3 = param_1[200];
                iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"ex_qte_dx90"), iVar7 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar6 = iVar6 + 0x70;
              } while (local_1b8 < (short)param_1[0xc9]);
              fVar11 = (float10)fVar2;
            }
            if (((fVar11 < (float10)-170.0 != (fVar11 == (float10)-170.0)) &&
                ((float10)-190.0 <= fVar11)) && (local_1b8 = 0, 0 < (short)param_1[0xc9])) {
              iVar6 = 0;
              do {
                iVar3 = param_1[200];
                iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"ex_qte_dx90"), iVar7 != 0)) {
                  puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                  *puVar1 = *puVar1 | 1;
                }
                local_1b8 = local_1b8 + 1;
                iVar6 = iVar6 + 0x70;
              } while (local_1b8 < (short)param_1[0xc9]);
            }
          }
          if (param_1[0x4ea] == 0) {
            if ((param_1[0x128] == 0) || (param_1[0x128] == 1)) {
              uVar8 = FUN_00844170(local_1a0);
            }
            else {
              uVar8 = FUN_008443c0(local_1a0);
            }
          }
          else {
            uVar8 = FUN_00844120(local_1a0);
          }
          if (param_1[0x286] != 0) {
            LeaveCriticalSection(lpCriticalSection);
          }
          return uVar8;
        }
        if (param_1[0x286] == 0) {
          return 0;
        }
        LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
    }
    if (param_1[0x286] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}

// 00850D20  FUN_00850d20  size=660  [callgraph]
void __fastcall FUN_00850d20(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4b0) != 0x2c700) {
    if ((((DAT_01bea060 & 0x2000000) == 0) && (*(int *)(param_1 + 0x4a0) == 1)) &&
       (*(float *)(param_1 + 0x1558) <= 0.0)) {
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x847fffff;
      FUN_00a8caf0(0x7000e,0,0,0);
      return;
    }
    fVar1 = *(float *)(param_1 + 0xa8c);
    if ((!NAN(fVar1) && 9.0 < fVar1 != (fVar1 == 9.0)) ||
       ((30.0 < *(float *)(param_1 + 0x920) && (*(int *)(param_1 + 0x61c) != 0)))) {
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x87ffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfdffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfeffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xff7fffff;
      FUN_00a8caf0(0x10001,0,0,0);
    }
    if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x87ffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfdffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfeffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xff7fffff;
      FUN_00a8caf0(0x10002,0,0,0);
    }
    if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x87ffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfdffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfeffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xff7fffff;
      FUN_00a8caf0(0x10004,0,0,0);
    }
    if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x87ffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfdffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfeffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xff7fffff;
      FUN_00a8caf0(0x10003,0,0,0);
    }
    if (*(float *)(param_1 + 0xa9c) < -2.1816616) {
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x87ffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfdffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfeffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xff7fffff;
      FUN_00a8caf0(0x10004,0,0,0);
    }
    if ((*(int *)(param_1 + 0x1758) == 0) && (0x1e < *(int *)(param_1 + 0x1774))) {
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x87ffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfdffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfeffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xff7fffff;
      FUN_00a8caf0(0x10005,0,0,0);
    }
    if ((((0.0 < *(float *)(param_1 + 0x1764)) ||
         ((iVar2 = FUN_0084d4e0(), iVar2 == 0 && (iVar2 = FUN_008463f0(), iVar2 == 0)))) &&
        ((*(int *)(param_1 + 0x175c) != 0 || (*(int *)(param_1 + 0xe80) != 0)))) &&
       ((fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 30.25 < fVar1 != (fVar1 == 30.25) &&
        (*(float *)(param_1 + 0xaa0) <= 1.5707964)))) {
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x87ffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfdffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xfeffffff;
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xff7fffff;
      FUN_00a8caf0(0x10006,0,0,0);
    }
  }
  return;
}

// 00851810  FUN_00851810  size=125  [callgraph]
void __fastcall FUN_00851810(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_0084d4e0();
    if (iVar1 != 0) {
      return;
    }
    FUN_008463f0();
    return;
  }
  iVar1 = FUN_00a8c760(0xf);
  if (iVar1 != 0) {
    iVar1 = FUN_0084d4e0();
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_008463f0();
    if (iVar1 != 0) {
      return;
    }
  }
  if (((*(int *)(param_1 + 0xe80) != 0) || (*(int *)(param_1 + 0x1760) != 0)) &&
     (iVar1 = FUN_00a8c760(0x28), iVar1 != 0)) {
    FUN_00846a70(0x40b00000);
  }
  return;
}

// 00851890  FUN_00851890  size=158  [callgraph]
void __fastcall FUN_00851890(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar2 = FUN_00a8c760(0x3e);
    if ((iVar2 != 0) && (iVar2 = FUN_0084d4e0(), iVar2 == 0)) {
      FUN_008463f0();
      return;
    }
  }
  else if ((*(int *)(param_1 + 0xa84) != 0) &&
          (fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x54) - *(float *)(param_1 + 0x54),
          fVar1 < 3.0 != (fVar1 == 3.0))) {
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 != 0) {
      iVar2 = FUN_0084d4e0();
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_008463f0();
      if (iVar2 != 0) {
        return;
      }
    }
    if (((*(int *)(param_1 + 0xe80) != 0) || (*(int *)(param_1 + 0x1760) != 0)) &&
       (iVar2 = FUN_00a8c760(0x28), iVar2 != 0)) {
      FUN_00846a70(0x40b00000);
    }
  }
  return;
}

// 00851930  FUN_00851930  size=125  [callgraph]
void __fastcall FUN_00851930(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_0084d4e0();
    if (iVar1 != 0) {
      return;
    }
    FUN_008463f0();
    return;
  }
  iVar1 = FUN_00a8c760(0xf);
  if (iVar1 != 0) {
    iVar1 = FUN_0084d4e0();
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_008463f0();
    if (iVar1 != 0) {
      return;
    }
  }
  if (((*(int *)(param_1 + 0xe80) != 0) || (*(int *)(param_1 + 0x1760) != 0)) &&
     (iVar1 = FUN_00a8c760(0x28), iVar1 != 0)) {
    FUN_00846a70(0x40b00000);
  }
  return;
}

// 008519B0  FUN_008519b0  size=125  [callgraph]
void __fastcall FUN_008519b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_0084d4e0();
    if (iVar1 != 0) {
      return;
    }
    FUN_008463f0();
    return;
  }
  iVar1 = FUN_00a8c760(0xf);
  if (iVar1 != 0) {
    iVar1 = FUN_0084d4e0();
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_008463f0();
    if (iVar1 != 0) {
      return;
    }
  }
  if (((*(int *)(param_1 + 0xe80) != 0) || (*(int *)(param_1 + 0x1760) != 0)) &&
     (iVar1 = FUN_00a8c760(0x28), iVar1 != 0)) {
    FUN_00846a70(0x40b00000);
  }
  return;
}

// 00851A30  FUN_00851a30  size=173  [callgraph]
void __fastcall FUN_00851a30(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar2 = FUN_00a8c760(0x3e);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_0084d4e0();
    if (iVar2 != 0) {
      return;
    }
    FUN_008463f0();
    return;
  }
  iVar2 = FUN_00a8c760(0xf);
  if (iVar2 != 0) {
    iVar2 = FUN_0084d4e0();
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_008463f0();
    if (iVar2 != 0) {
      return;
    }
  }
  if ((((*(int *)(param_1 + 0xe80) != 0) || (*(int *)(param_1 + 0x1760) != 0)) &&
      (iVar2 = FUN_00a8c760(0x28), iVar2 != 0)) &&
     ((iVar2 = FUN_00846a70(0x40b00000), iVar2 == 0 &&
      (fVar1 = *(float *)(param_1 + 0xaa0), !NAN(fVar1) && 2.3561945 < fVar1 != (fVar1 == 2.3561945)
      )))) {
    FUN_00846a70(0x40400000);
  }
  return;
}

// 00851AE0  FUN_00851ae0  size=125  [callgraph]
void __fastcall FUN_00851ae0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_0084d4e0();
    if (iVar1 != 0) {
      return;
    }
    FUN_008463f0();
    return;
  }
  iVar1 = FUN_00a8c760(0xf);
  if (iVar1 != 0) {
    iVar1 = FUN_0084d4e0();
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_008463f0();
    if (iVar1 != 0) {
      return;
    }
  }
  if (((*(int *)(param_1 + 0xe80) != 0) || (*(int *)(param_1 + 0x1760) != 0)) &&
     (iVar1 = FUN_00a8c760(0x28), iVar1 != 0)) {
    FUN_00846a70(0x40b00000);
  }
  return;
}

// 00851B60  FUN_00851b60  size=341  [callgraph]
void __fastcall FUN_00851b60(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 local_10 [4];
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar3 = FUN_00a8c760(0x3e);
    if (iVar3 == 0) {
      return;
    }
    iVar3 = FUN_0084d4e0();
    if (iVar3 != 0) {
      return;
    }
    FUN_008463f0();
    return;
  }
  iVar3 = FUN_00a8c760(0xf);
  if (iVar3 != 0) {
    iVar3 = FUN_0084d4e0();
    if (iVar3 != 0) {
      return;
    }
    iVar3 = FUN_008463f0();
    if (iVar3 != 0) {
      return;
    }
  }
  if ((*(int *)(param_1 + 0xe80) != 0) || (*(int *)(param_1 + 0x1760) != 0)) {
    iVar3 = FUN_00a8c760(0x28);
    if (iVar3 != 0) {
      iVar3 = FUN_00846a70(0x40b00000);
      if (iVar3 != 0) {
        return;
      }
      fVar1 = *(float *)(param_1 + 0xaa0);
      if ((!NAN(fVar1) && 2.3561945 < fVar1 != (fVar1 == 2.3561945)) &&
         (iVar3 = FUN_00846a70(0x40400000), iVar3 != 0)) {
        return;
      }
    }
    iVar3 = FUN_00a8c760(10);
    if ((((iVar3 != 0) && (3 < *(int *)(param_1 + 0x61c))) &&
        (*(float *)(param_1 + 0xaa0) < 1.0471976)) && (*(float *)(param_1 + 0xa8c) <= 4.0)) {
      local_10[0] = 0x20000;
      local_10[1] = 0x20001;
      local_10[2] = 0x20002;
      local_10[3] = 0x20003;
      sVar2 = FUN_00dde2d0(0,4);
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x847fffff;
      FUN_00a8caf0(local_10[sVar2],0,0,0);
    }
  }
  return;
}

// 00851CC0  FUN_00851cc0  size=633  [callgraph]
void __fastcall FUN_00851cc0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 local_10 [4];
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar3 = FUN_00a8c760(0x3e);
    if (iVar3 != 0) {
      iVar3 = FUN_0084d4e0();
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_008463f0();
      if (iVar3 != 0) {
        return;
      }
    }
  }
  else {
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 != 0) {
      iVar3 = FUN_0084d4e0();
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_008463f0();
      if (iVar3 != 0) {
        return;
      }
    }
    if ((*(int *)(param_1 + 0xe80) != 0) || (*(int *)(param_1 + 0x1760) != 0)) {
      iVar3 = FUN_00a8c760(0x28);
      if ((iVar3 != 0) &&
         (fVar1 = *(float *)(param_1 + 0xaa0),
         !NAN(fVar1) && 1.9198622 < fVar1 != (fVar1 == 1.9198622))) {
        iVar3 = FUN_00846a70(0x40800000);
        if (iVar3 != 0) {
          return;
        }
        fVar1 = *(float *)(param_1 + 0xaa0);
        if ((!NAN(fVar1) && 2.3561945 < fVar1 != (fVar1 == 2.3561945)) &&
           (iVar3 = FUN_00846a70(0x40400000), iVar3 != 0)) {
          return;
        }
      }
      if ((((*(int *)(param_1 + 0x944) != 0) && (3 < *(int *)(param_1 + 0x61c))) &&
          (fVar1 = *(float *)(param_1 + 0xaa0),
          !NAN(fVar1) && 2.3561945 < fVar1 != (fVar1 == 2.3561945))) &&
         (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25))) {
        *(int *)(param_1 + 0x944) = *(int *)(param_1 + 0x944) + -1;
        *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x84ffffff;
        *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xff7fffff;
        FUN_00a8caf0(0x20007,1,0,0);
        *(undefined4 *)(param_1 + 0x18fc) = 1;
        if (*(int *)(param_1 + 0x944) != 0) {
          return;
        }
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 == 0) {
          return;
        }
        *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x84ffffff;
        *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0xff7fffff;
        FUN_00a8caf0(0x20008,0,0,0);
        return;
      }
      iVar3 = FUN_00a8c760(10);
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0x61c) < 4) {
          return;
        }
        if ((*(float *)(param_1 + 0xaa0) < 1.0471976) && (*(float *)(param_1 + 0xa8c) <= 4.0)) {
          local_10[0] = 0x20000;
          local_10[1] = 0x20001;
          local_10[2] = 0x20002;
          local_10[3] = 0x20003;
          sVar2 = FUN_00dde2d0(0,3);
          *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x847fffff;
          FUN_00a8caf0(local_10[sVar2],0,0,0);
          return;
        }
      }
    }
  }
  if (((*(int *)(param_1 + 0x61c) == 4) && (*(int *)(param_1 + 0xa84) != 0)) &&
     ((*(float *)(param_1 + 0xa8c) < 3.24 && (*(float *)(param_1 + 0xaa0) <= 1.3962634)))) {
    *(undefined4 *)(param_1 + 0x61c) = 5;
  }
  return;
}

// 00851F40  FUN_00851f40  size=244  [callgraph]
void __fastcall FUN_00851f40(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar2 = FUN_00a8c760(0x3e);
    if (iVar2 == 0) goto LAB_0085200e;
    iVar2 = FUN_0084d4e0();
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_008463f0();
  }
  else {
    iVar2 = FUN_00a8c760(0xf);
    if (iVar2 != 0) {
      iVar2 = FUN_0084d4e0();
      if (iVar2 != 0) {
        return;
      }
      iVar2 = FUN_008463f0();
      if (iVar2 != 0) {
        return;
      }
    }
    if ((((*(int *)(param_1 + 0xe80) == 0) && (*(int *)(param_1 + 0x1760) == 0)) ||
        (iVar2 = FUN_00a8c760(0x28), iVar2 == 0)) ||
       (fVar1 = *(float *)(param_1 + 0xaa0), NAN(fVar1) || 1.9198622 < fVar1 == (fVar1 == 1.9198622)
       )) goto LAB_0085200e;
    iVar2 = FUN_00846a70(0x40800000);
    if (iVar2 != 0) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0xaa0);
    if (NAN(fVar1) || 2.3561945 < fVar1 == (fVar1 == 2.3561945)) goto LAB_0085200e;
    iVar2 = FUN_00846a70(0x40400000);
  }
  if (iVar2 != 0) {
    return;
  }
LAB_0085200e:
  if ((*(int *)(param_1 + 0x61c) < 7) && (*(int *)(param_1 + 0x139c) != 0)) {
    *(undefined4 *)(param_1 + 0x61c) = 7;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return;
}

// 00852040  FUN_00852040  size=470  [callgraph]
void __fastcall FUN_00852040(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 local_10 [4];
  
  piVar4 = *(int **)(param_1 + 0xa84);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar6);
    piVar4 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
  }
  iVar3 = FUN_00a8c760(0xf);
  if ((((iVar3 == 0) || (piVar4 == (int *)0x0)) ||
      (iVar3 = (**(code **)(*piVar4 + 0x354))(), iVar3 == 0)) || (9.0 < *(float *)(param_1 + 0xa8c))
     ) {
    if (*(int *)(param_1 + 0x4a0) == 0) {
      iVar3 = FUN_00a8c760(0x3e);
      if (iVar3 == 0) {
        return;
      }
      iVar3 = FUN_0084d4e0();
      if (iVar3 != 0) {
        return;
      }
      FUN_008463f0();
      return;
    }
    iVar3 = FUN_00a8c760(0xf);
    if (iVar3 != 0) {
      iVar3 = FUN_0084d4e0();
      if (iVar3 != 0) {
        return;
      }
      iVar3 = FUN_008463f0();
      if (iVar3 != 0) {
        return;
      }
    }
    if ((*(int *)(param_1 + 0xe80) == 0) && (*(int *)(param_1 + 0x1760) == 0)) {
      return;
    }
    iVar3 = FUN_00a8c760(0x28);
    if (iVar3 != 0) {
      iVar3 = FUN_00846a70(0x40b00000);
      if (iVar3 != 0) {
        return;
      }
      fVar1 = *(float *)(param_1 + 0xaa0);
      if ((!NAN(fVar1) && 2.3561945 < fVar1 != (fVar1 == 2.3561945)) &&
         (iVar3 = FUN_00846a70(0x40400000), iVar3 != 0)) {
        return;
      }
    }
    iVar3 = FUN_00a8c760(10);
    if (iVar3 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x61c) < 4) {
      return;
    }
    if (1.0471976 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    if (4.0 < *(float *)(param_1 + 0xa8c)) {
      return;
    }
    local_10[0] = 0x20000;
    local_10[1] = 0x20001;
    local_10[2] = 0x20002;
    local_10[3] = 0x20003;
    sVar2 = FUN_00dde2d0(0,4);
    uVar5 = local_10[sVar2];
  }
  else {
    *(undefined4 *)(param_1 + 0x18fc) = 0;
    uVar5 = 0x20007;
  }
  *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x847fffff;
  FUN_00a8caf0(uVar5,0,0,0);
  return;
}

// 00852220  FUN_00852220  size=74  [callgraph]
void __fastcall FUN_00852220(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  return;
}

// 00852270  FUN_00852270  size=121  [callgraph]
void __fastcall FUN_00852270(int param_1)

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
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x847fffff;
      FUN_00a8caf0(0x10006,0,0,0);
      return;
    }
  }
  iVar2 = FUN_0084d4e0();
  if (iVar2 != 0) {
    return;
  }
  FUN_008463f0();
  return;
}

// 00852680  FUN_00852680  size=341  [callgraph]
void __fastcall FUN_00852680(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 local_10 [4];
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar3 = FUN_00a8c760(0x3e);
    if (iVar3 == 0) {
      return;
    }
    iVar3 = FUN_0084d4e0();
    if (iVar3 != 0) {
      return;
    }
    FUN_008463f0();
    return;
  }
  iVar3 = FUN_00a8c760(0xf);
  if (iVar3 != 0) {
    iVar3 = FUN_0084d4e0();
    if (iVar3 != 0) {
      return;
    }
    iVar3 = FUN_008463f0();
    if (iVar3 != 0) {
      return;
    }
  }
  if ((*(int *)(param_1 + 0xe80) != 0) || (*(int *)(param_1 + 0x1760) != 0)) {
    iVar3 = FUN_00a8c760(0x28);
    if (iVar3 != 0) {
      iVar3 = FUN_00846a70(0x40800000);
      if (iVar3 != 0) {
        return;
      }
      fVar1 = *(float *)(param_1 + 0xaa0);
      if ((!NAN(fVar1) && 2.3561945 < fVar1 != (fVar1 == 2.3561945)) &&
         (iVar3 = FUN_00846a70(0x40400000), iVar3 != 0)) {
        return;
      }
    }
    iVar3 = FUN_00a8c760(10);
    if ((((iVar3 != 0) && (3 < *(int *)(param_1 + 0x61c))) &&
        (*(float *)(param_1 + 0xaa0) < 1.0471976)) && (*(float *)(param_1 + 0xa8c) <= 4.0)) {
      local_10[0] = 0x20000;
      local_10[1] = 0x20001;
      local_10[2] = 0x20002;
      local_10[3] = 0x20003;
      sVar2 = FUN_00dde2d0(0,4);
      *(uint *)(param_1 + 0x13ac) = *(uint *)(param_1 + 0x13ac) & 0x847fffff;
      FUN_00a8caf0(local_10[sVar2],0,0,0);
    }
  }
  return;
}

// 008527E0  FUN_008527e0  size=66  [callgraph]
void __fastcall FUN_008527e0(int param_1)

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
    iVar1 = FUN_00846d40();
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FUN_0084d4e0();
  if (iVar1 != 0) {
    return;
  }
  FUN_008463f0();
  return;
}

// 00852830  FUN_00852830  size=1790  [callgraph]
void __fastcall FUN_00852830(int *param_1)

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
  
  param_1[0x63c] = 0;
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    FUN_00aa4080(0x3f,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
    FUN_00a8d280();
    param_1[0x4f0] = 0;
    FUN_00eaa6e0(0x3f800000,0);
    iVar6 = FUN_00932720();
    if (iVar6 == 0x750) {
      FUN_00e01d00(2);
      FUN_00dffb30(param_1 + 0x4f4);
      piVar5 = (int *)FUN_00a6dd90();
      uVar4 = (**(code **)(*piVar5 + 0x9c))(0x760,2,local_120);
      FUN_00e01f10(uVar4);
    }
    param_1[0x249] = 0;
    FUN_00c5ad80(param_1[0x4ec]);
    param_1[0x4ec] = -1;
    if ((char)param_1[0x5e1] == '\x01') {
      param_1[0x5e0] = 0;
    }
    goto LAB_00852951;
  case 1:
LAB_00852951:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar6 = FUN_00a8c760(10);
    if (((iVar6 != 0) &&
        (fVar1 = (float)param_1[0x249], param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]),
        fVar1 - (float)param_1[0x244] < 0.0)) && ((float)param_1[0x638] != 0.0)) {
      param_1[0x249] = 0x3f800000;
      iVar6 = FUN_00ac4780();
      if (iVar6 < 2) {
        param_1[0x249] = 0x40000000;
      }
      fVar1 = (float)param_1[0x638];
      param_1[0x21c] = param_1[0x21c] + 1;
      param_1[0x638] = (int)(fVar1 - 1.0);
      if (param_1[0x21d] <= param_1[0x21c]) {
        param_1[0x21c] = param_1[0x21d];
      }
      if (fVar1 - 1.0 <= 0.0) {
        param_1[0x638] = 0;
      }
    }
    iVar6 = FUN_00a8c760(8);
    if (iVar6 != 0) {
      param_1[0x4f0] = 0;
      param_1[0x4f1] = 0;
      FUN_00c5ad80(param_1[0x4ec]);
      local_144 = 0x41200000;
      param_1[0x4ec] = -1;
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
      param_1[0x4ec] = iVar6;
      FUN_00c52770(iVar6,0x41000000);
      FUN_00c52700(param_1[0x4ec],1);
      pcVar3 = *(code **)(*param_1 + 0x358);
      param_1[0x4f0] = 0;
      (*pcVar3)(400,param_1 + 0x4f4);
    }
    if ((param_1[0x4ec] != -1) && (param_1[0x2a1] != 0)) {
      fVar7 = (float10)FUN_00ddba30((float)param_1[0x25] + 2.0943952);
      fVar8 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x50);
      fVar7 = (float10)FUN_00ddba30((float)((float10)(float)fVar7 - fVar8));
      if ((fVar7 <= (float10)-1.2217305) || ((float10)1.2217305 <= fVar7)) {
        FUN_00c52700(param_1[0x4ec],0);
      }
      else {
        FUN_00c52700(param_1[0x4ec],1);
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
      FUN_00c5ad80(param_1[0x4ec]);
      param_1[0x4ec] = -1;
    }
    if ((param_1[0x4ec] != -1) && (param_1[0x2a1] != 0)) {
      fVar7 = (float10)FUN_00ddba30((float)param_1[0x25] + 2.0943952);
      fVar8 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x50);
      fVar7 = (float10)FUN_00ddba30((float)((float10)(float)fVar7 - fVar8));
      if ((fVar7 <= (float10)-1.2217305) || ((float10)1.2217305 <= fVar7)) {
        iVar6 = param_1[0x4ec];
        uVar4 = 0;
      }
      else {
        iVar6 = param_1[0x4ec];
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
      fVar1 = (float)param_1[0x638];
      param_1[0x21c] = param_1[0x21c] + 1;
      param_1[0x638] = (int)(fVar1 - 1.0);
      fVar2 = (float)param_1[0x24a];
      if (!NAN(fVar2) && 180.0 < fVar2 != (fVar2 == 180.0)) {
        param_1[0x21c] = param_1[0x21c] + 1;
        param_1[0x638] = (int)((fVar1 - 1.0) - 1.0);
      }
      if (param_1[0x21d] <= param_1[0x21c]) {
        *(byte *)((int)param_1 + 0x18db) =
             *(byte *)((int)param_1 + 0x18db) | *(byte *)((int)param_1 + 0x18da);
        param_1[0x21c] = param_1[0x21d];
      }
      if ((float)param_1[0x638] <= 0.0) {
        *(byte *)((int)param_1 + 0x18db) =
             *(byte *)((int)param_1 + 0x18db) | *(byte *)((int)param_1 + 0x18da);
      }
      if ((*(byte *)((int)param_1 + 0x18da) & *(byte *)((int)param_1 + 0x18db)) != 0) {
        param_1[0x187] = 4;
        param_1[0x639] = 0;
      }
    }
    break;
  case 4:
    FUN_00aa4080(0x41,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c5ad80(param_1[0x4ec]);
    param_1[0x4ec] = -1;
    FUN_00eaa6e0(0x42700000,0);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x5d9] = 0x42f00000;
      if (param_1[0x5d6] != 0) {
        param_1[0x5d9] = 0x41f00000;
      }
      if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
        param_1[0x5d9] = 0;
      }
      if (param_1[0x5d7] != 0) {
        param_1[0x5d9] = 0;
      }
      FUN_00846d40();
    }
  }
  iVar6 = FUN_00a8c760(0);
  if (iVar6 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 00852F50  FUN_00852f50  size=74  [callgraph]
void __fastcall FUN_00852f50(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  return;
}

// 00852FA0  FUN_00852fa0  size=66  [callgraph]
void __fastcall FUN_00852fa0(int param_1)

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
    iVar1 = FUN_00846d40();
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FUN_0084d4e0();
  if (iVar1 != 0) {
    return;
  }
  FUN_008463f0();
  return;
}

// 00852FF0  FUN_00852ff0  size=801  [callgraph]
void __fastcall FUN_00852ff0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined *puVar5;
  
  (**(code **)(*param_1 + 0x314))();
  piVar4 = (int *)param_1[0x2a1];
  if (piVar4 != (int *)0x0) {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar5);
    if (iVar2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_00b8c350(0x41700000);
    }
  }
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    if (piVar4 != (int *)0x0) {
      FUN_00864be0(1,0,1);
    }
    FUN_00aa4080(0x245,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0x401c61aa;
    param_1[0x26] = 0;
    (**(code **)(*param_1 + 0x7c))(param_1 + 0x14,param_1 + 0x24);
    DAT_01bea060 = DAT_01bea060 | 0xa000000;
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    iVar2 = FUN_0083fc40();
    if (iVar2 != 0) {
      iVar2 = FUN_0083fc40();
      *(undefined4 *)(iVar2 + 0x768) = 0;
      FUN_0083fc40();
      FUN_00a8e760();
    }
    FUN_0084de20(0);
    uVar3 = FUN_00e678d0(2,0xc003,0xffffffff);
    FUN_00e80d00(uVar3);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      iVar2 = FUN_0083fc40();
      if (iVar2 != 0) {
        iVar2 = FUN_0083fc40();
        *(undefined4 *)(iVar2 + 0x768) = 1;
        FUN_0083fc40();
        FUN_00a8e760();
        return;
      }
    }
    break;
  case 2:
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43340000;
    FUN_00aa4080(0x247,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    goto LAB_008531d0;
  case 3:
LAB_008531d0:
    FUN_00842c80(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x250] = 0;
    FUN_00aa4080(0x248,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_0084e020(param_1[0x250]);
    DAT_01bea060 = DAT_01bea060 & 0xf5ffffff;
    DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 6:
    break;
  case 7:
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
    goto LAB_008532c8;
  case 8:
LAB_008532c8:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
      FUN_00a8caf0(0x20016,0,0,0);
      return;
    }
  }
  return;
}

// 00853340  FUN_00853340  size=66  [callgraph]
void __fastcall FUN_00853340(int param_1)

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
    iVar1 = FUN_00846d40();
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FUN_0084d4e0();
  if (iVar1 != 0) {
    return;
  }
  FUN_008463f0();
  return;
}

// 00853390  FUN_00853390  size=74  [callgraph]
void __fastcall FUN_00853390(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  return;
}

// 008533E0  FUN_008533e0  size=74  [callgraph]
void __fastcall FUN_008533e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  return;
}

// 00853430  FUN_00853430  size=74  [callgraph]
void __fastcall FUN_00853430(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  return;
}

// 00853480  FUN_00853480  size=102  [callgraph]
void __fastcall FUN_00853480(int *param_1)

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
  if ((iVar1 == 0) || ((iVar1 = FUN_0084d4e0(), iVar1 == 0 && (iVar1 = FUN_008463f0(), iVar1 == 0)))
     ) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    iVar2 = FUN_00a8cac0();
    if ((iVar2 == 3) && (iVar1 != 0)) {
      FUN_00a8cb60(4);
    }
  }
  return;
}

// 008534F0  FUN_008534f0  size=74  [callgraph]
void __fastcall FUN_008534f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  return;
}

// 00853540  FUN_00853540  size=74  [callgraph]
void __fastcall FUN_00853540(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8c760(0x3e);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  else {
    iVar1 = FUN_00a8c760(0xf);
    if (iVar1 != 0) {
      iVar1 = FUN_0084d4e0();
      if (iVar1 == 0) {
        FUN_008463f0();
        return;
      }
    }
  }
  return;
}

// 00853590  FUN_00853590  size=1095  [callgraph]
/* WARNING: Removing unreachable block (ram,0x008536fa) */
/* WARNING: Removing unreachable block (ram,0x0085387d) */

void FUN_00853590(undefined4 param_1,float *param_2,float *param_3,float *param_4)

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
  pfStack_64 = (float *)0x8535af;
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

// 008539E0  FUN_008539e0  size=125  [callgraph]
void FUN_008539e0(undefined4 param_1,undefined4 *param_2,int param_3)

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
  FUN_00a8c930(0x2c700,local_160);
  return;
}

// 00853A60  FUN_00853a60  size=938  [callgraph]
void __fastcall FUN_00853a60(int *param_1)

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
    puVar8 = &DAT_01b35ab8;
    (**(code **)(*piVar5 + 4))(&DAT_01b35ab8);
    iVar4 = FUN_00dd6d80(puVar8);
    if (iVar4 != 0) {
      iVar4 = FUN_00a81330();
      if ((iVar4 == 0) || (piVar5 = (int *)FUN_00a7c8a0(), piVar5 == (int *)0x0)) {
        uVar6 = 0;
      }
      else {
        puVar8 = &DAT_01b35ab8;
        (**(code **)(*piVar5 + 4))(&DAT_01b35ab8);
        iVar4 = FUN_00dd6d80(puVar8);
        uVar6 = -(uint)(iVar4 != 0) & (uint)piVar5;
      }
      if (1 < *(byte *)(uVar6 + 0x1784)) goto LAB_00853aed;
    }
  }
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    puVar8 = &DAT_01b35ab8;
    (**(code **)(*piVar5 + 4))(&DAT_01b35ab8);
    iVar4 = FUN_00dd6d80(puVar8);
    if (iVar4 != 0) {
      iVar4 = FUN_00a81330();
      if ((iVar4 == 0) || (piVar5 = (int *)FUN_00a7c8a0(), piVar5 == (int *)0x0)) {
        uVar6 = 0;
      }
      else {
        puVar8 = &DAT_01b35ab8;
        (**(code **)(*piVar5 + 4))(&DAT_01b35ab8);
        iVar4 = FUN_00dd6d80(puVar8);
        uVar6 = -(uint)(iVar4 != 0) & (uint)piVar5;
      }
      iVar4 = param_1[0x129];
      if (iVar4 == 0) {
        iVar4 = *(int *)(uVar6 + 0x1790);
      }
      else if (iVar4 == 1) {
        iVar4 = *(int *)(uVar6 + 0x1794);
      }
      else {
        if (iVar4 != 2) goto LAB_00853bbc;
        iVar4 = *(int *)(uVar6 + 0x1798);
      }
      if (iVar4 != 0) {
LAB_00853aed:
        param_1[0x186] = 0;
        param_1[0x2ad] = 0x42700000;
        param_1[0x2ac] = 1;
        return;
      }
    }
  }
LAB_00853bbc:
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
    FUN_0084e420();
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
  if (((float)param_1[0x248] < 0.0) || (iVar4 = FUN_00847ba0(), iVar4 == 0)) {
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
  iVar4 = FUN_00847a10();
  FUN_00a8e880(iVar4 + 0x40);
  iVar4 = *param_1;
  fVar7 = (float10)FUN_00fdc1f0(0x393702d3,(float)param_1[0x244] * 0.0034906585,0);
  (**(code **)(iVar4 + 0x308))((float)fVar7);
  return;
}

// 00853E10  FUN_00853e10  size=800  [callgraph]
void __fastcall FUN_00853e10(int param_1)

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
    puVar9 = &DAT_01b35ab8;
    (**(code **)(*piVar6 + 4))(&DAT_01b35ab8);
    iVar5 = FUN_00dd6d80(puVar9);
    if (iVar5 != 0) {
      iVar5 = FUN_00a81330();
      if ((iVar5 == 0) || (piVar6 = (int *)FUN_00a7c8a0(), piVar6 == (int *)0x0)) {
        uVar7 = 0;
      }
      else {
        puVar9 = &DAT_01b35ab8;
        (**(code **)(*piVar6 + 4))(&DAT_01b35ab8);
        iVar5 = FUN_00dd6d80(puVar9);
        uVar7 = -(uint)(iVar5 != 0) & (uint)piVar6;
      }
      if (1 < *(byte *)(uVar7 + 0x178c)) {
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
      FUN_0084e550();
    }
    else {
      FUN_0084e420();
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
      FUN_0084e660(fVar1);
      *(undefined4 *)(param_1 + 0xad8) = 0;
    }
  }
  if ((*(float *)(param_1 + 0x920) < 0.0) || (iVar5 = FUN_00847ba0(), iVar5 == 0)) {
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

// 00854130  FUN_00854130  size=74  [callgraph]
void __thiscall FUN_00854130(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00854180  FUN_00854180  size=153  [callgraph]
void __fastcall FUN_00854180(int param_1)

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

// 00854220  FUN_00854220  size=176  [callgraph]
void __thiscall FUN_00854220(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

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

// 008542D0  FUN_008542d0  size=74  [callgraph]
void __thiscall FUN_008542d0(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00854320  FUN_00854320  size=176  [callgraph]
void __thiscall FUN_00854320(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

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

// 008543D0  FUN_008543d0  size=889  [callgraph]
undefined4 __fastcall FUN_008543d0(int *param_1)

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
LAB_0085447c:
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
  if (!bVar3) goto LAB_0085447c;
  FUN_0043e160(local_260);
  if ((((local_260[0] == 0) || (local_260[0] == 1)) || (local_260[0] == 2)) ||
     ((local_260[0] == 0x1b0 || (local_260[0] == 0x147)))) {
    uVar9 = 0;
    goto LAB_008546f4;
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
LAB_008546ab:
    if (param_1[0x2b9] == 0) goto LAB_008546b4;
  }
  else {
    if (param_1[0x2b9] != 0) {
      uVar8 = 0x101;
      bVar4 = true;
      goto LAB_008546ab;
    }
LAB_008546b4:
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
LAB_008546f4:
  if (((local_7c != 0) && (bVar4)) && (param_1[0x2ac] != 0)) {
    FUN_00848180();
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

// 00854750  FUN_00854750  size=74  [callgraph]
void __thiscall FUN_00854750(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 008547A0  FUN_008547a0  size=176  [callgraph]
void __thiscall FUN_008547a0(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

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

// 00854850  FUN_00854850  size=469  [callgraph]
undefined4 __fastcall FUN_00854850(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  float10 fVar9;
  undefined1 local_260 [148];
  int local_1cc;
  int local_160 [12];
  float local_130;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x54a);
  if (param_1[0x550] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar7 = param_1[0x19f];
  bVar3 = false;
  iVar5 = param_1[0x1a1] * 0x150 + iVar7;
  FUN_00445db0();
  FUN_004105d0();
  iVar4 = -1;
  bVar2 = false;
  if (iVar7 != iVar5) {
    do {
      iVar1 = *(int *)(iVar7 + 4);
      if (iVar4 <= iVar1) {
        FUN_00448f50(iVar7);
        bVar2 = true;
        iVar4 = iVar1;
      }
      iVar7 = iVar7 + 0x150;
    } while (iVar7 != iVar5);
    if (bVar2) {
      FUN_0043e160(local_160);
      if ((((local_160[0] == 0) || (local_160[0] == 1)) || (local_160[0] == 2)) ||
         ((local_160[0] == 0x1b0 || (local_160[0] == 0x147)))) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        iVar7 = FUN_00a81330();
        if (iVar7 != 0) {
          uVar8 = FUN_00a7c8a0();
        }
        param_1[0x21c] = -1;
        uVar6 = 0x8001;
        fVar9 = (float10)FUN_00ddba30(local_130 - (float)param_1[0x25]);
        param_1[0x245] = (int)(float)fVar9;
        iVar7 = FUN_00a98220(local_260);
        if (((iVar7 != 0) && (local_1cc != 0)) && (param_1[0x21c] < 0)) {
          uVar6 = 0x8101;
          bVar3 = true;
        }
        (**(code **)(*param_1 + 0x198))(uVar8,local_160,uVar6);
        uVar8 = 1;
      }
      if ((local_1cc != 0) && (bVar3)) {
        FUN_00a8e5d0(param_1,local_260,0);
      }
      if (param_1[0x550] != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return uVar8;
    }
  }
  if (param_1[0x550] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00854A30  FUN_00854a30  size=1088  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00854b9e) */
/* WARNING: Removing unreachable block (ram,0x00854d1d) */

void FUN_00854a30(undefined4 param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float unaff_ESI;
  float unaff_EDI;
  float *pfVar5;
  float fStack_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
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
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar2 = FUN_00a1d5c0();
  FUN_0041c8e0(8,uVar2);
  local_4c = *param_2;
  local_48 = param_2[1];
  local_44 = param_2[2];
  if (local_18 < local_1c) {
    pfVar5 = (float *)(local_20 + local_18 * 0xc);
    if (pfVar5 != (float *)0x0) {
      *pfVar5 = local_4c;
      pfVar5[1] = local_48;
      pfVar5[2] = local_44;
    }
    local_18 = local_18 + 1;
  }
  local_64 = *param_4;
  local_60 = param_4[1];
  local_5c = param_4[2];
  local_30 = local_64 - local_4c;
  local_2c = local_60 - local_48;
  local_28 = local_5c - local_44;
  local_74 = SQRT(local_28 * local_28 + local_30 * local_30 + local_2c * local_2c) * 0.16666667;
  local_58 = *param_3;
  local_54 = param_3[1];
  local_50 = param_3[2];
  local_30 = local_30 * 0.16666667;
  local_2c = local_2c * 0.16666667;
  local_28 = local_28 * 0.16666667;
  local_40 = local_58 - local_30;
  local_3c = local_54 - local_2c;
  local_38 = local_50 - local_28;
  local_70 = local_40 - local_4c;
  local_6c = local_3c - local_48;
  local_68 = local_38 - local_44;
  fVar4 = local_68 * local_68 + local_70 * local_70 + local_6c * local_6c;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_70 = 0.0;
    local_6c = 1.0;
    local_68 = 0.0;
  }
  pfVar5 = &local_70;
  D3DXVec3Normalize(pfVar5);
  iVar3 = local_20;
  if (local_20 < local_24) {
    pfVar1 = (float *)((int)local_28 + local_20 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = fStack_78 * unaff_ESI + local_54;
      pfVar1[1] = local_74 * unaff_ESI + local_50;
      pfVar1[2] = local_70 * unaff_ESI + local_4c;
    }
    iVar3 = local_20 + 1;
    if (iVar3 < local_24) {
      pfVar1 = (float *)((int)local_28 + iVar3 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_48;
        pfVar1[1] = local_44;
        pfVar1[2] = local_40;
      }
      iVar3 = local_20 + 2;
      if (iVar3 < local_24) {
        pfVar1 = (float *)((int)local_28 + iVar3 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_60;
          pfVar1[1] = local_5c;
          pfVar1[2] = local_58;
        }
        iVar3 = local_20 + 3;
      }
    }
  }
  local_20 = iVar3;
  local_48 = *param_3 + local_38;
  local_44 = param_3[1] + fStack_34;
  local_40 = local_30 + param_3[2];
  fStack_78 = local_6c - local_48;
  local_74 = local_68 - local_44;
  local_70 = local_64 - local_40;
  fVar4 = local_70 * local_70 + local_74 * local_74 + fStack_78 * fStack_78;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_78 = 0.0;
    local_74 = 1.0;
    local_70 = 0.0;
  }
  D3DXVec3Normalize(&fStack_78,&fStack_78);
  fStack_78 = fStack_78 * (float)pfVar5;
  fVar4 = local_28;
  if ((int)local_28 < (int)local_2c) {
    pfVar1 = (float *)((int)local_30 + (int)local_28 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_50;
      pfVar1[1] = local_4c;
      pfVar1[2] = local_48;
    }
    fVar4 = (float)((int)local_28 + 1);
    if ((int)fVar4 < (int)local_2c) {
      pfVar1 = (float *)((int)local_30 + (int)fVar4 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_74 - unaff_EDI * (float)pfVar5;
        pfVar1[1] = local_70 - unaff_ESI * (float)pfVar5;
        pfVar1[2] = local_6c - fStack_78;
      }
      fVar4 = (float)((int)local_28 + 2);
      if ((int)fVar4 < (int)local_2c) {
        pfVar5 = (float *)((int)local_30 + (int)fVar4 * 0xc);
        if (pfVar5 == (float *)0x0) {
          fVar4 = (float)((int)local_28 + 3);
        }
        else {
          *pfVar5 = local_74;
          pfVar5[1] = local_70;
          pfVar5[2] = local_6c;
          fVar4 = (float)((int)local_28 + 3);
        }
      }
    }
  }
  local_28 = fVar4;
  FUN_00a5e090(&fStack_34);
  if ((local_30 != 0.0) && (local_28 = 0.0, local_24 != 0)) {
    FUN_00dd48d0(local_30,0);
  }
  return;
}

// 00854E70  FUN_00854e70  size=74  [callgraph]
void __thiscall FUN_00854e70(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 00854EC0  FUN_00854ec0  size=376  [callgraph]
void __fastcall FUN_00854ec0(int *param_1)

{
  float fVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  
  param_1[0x5df] = 1;
  iVar4 = FUN_00a8cab0();
  if (iVar4 < 0x20001) {
    if (iVar4 == 0x20000) {
      FUN_00851810();
      return;
    }
    switch(iVar4) {
    case 0x10000:
      FUN_00850d20();
      return;
    case 0x10001:
      if ((((DAT_01bea060 & 0x2000000) != 0) || (param_1[0x128] != 1)) ||
         (0.0 < (float)param_1[0x556])) {
        if ((((char)param_1[0x5e1] == '\x03') &&
            (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 42.25 < fVar1 != (fVar1 == 42.25))) &&
           ((float)param_1[0x2a8] <= 1.2217305)) {
          param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
          FUN_00a8caf0(0x10006,0,0,0);
          return;
        }
        if ((float)param_1[0x2a3] <= 6.25) {
          param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
          FUN_00a8caf0(0x10000,0,0,0);
        }
        if (0.7853982 < (float)param_1[0x2a7]) {
          param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
          FUN_00a8caf0(0x10002,0,0,0);
        }
        if (2.1816616 < (float)param_1[0x2a7]) {
          param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
          FUN_00a8caf0(0x10004,0,0,0);
        }
        if ((float)param_1[0x2a7] < -0.7853982) {
          param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
          FUN_00a8caf0(0x10003,0,0,0);
        }
        if ((float)param_1[0x2a7] < -2.1816616) {
          param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
          FUN_00a8caf0(0x10004,0,0,0);
        }
        if ((param_1[0x5d6] == 0) && (0x1e < param_1[0x5dd])) {
          param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
          FUN_00a8caf0(0x10005,0,0,0);
        }
        if (((float)param_1[0x5d9] <= 0.0) && (iVar4 = FUN_0084d4e0(), iVar4 == 0)) {
          FUN_008463f0();
          return;
        }
      }
      else {
        param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
        FUN_00a8caf0(0x7000e,0,0,0);
      }
      return;
    case 0x10002:
    case 0x10003:
    case 0x10004:
      if ((((DAT_01bea060 & 0x2000000) == 0) && (param_1[0x128] == 1)) &&
         ((float)param_1[0x556] <= 0.0)) {
        param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
        FUN_00a8caf0(0x7000e,0,0,0);
        return;
      }
      if (param_1[0x128] == 0) {
        iVar4 = FUN_00a8c760(0x3e);
        if (((iVar4 != 0) && ((float)param_1[0x5d9] <= 0.0)) && (iVar4 = FUN_0084d4e0(), iVar4 == 0)
           ) {
          FUN_008463f0();
          return;
        }
      }
      else {
        if ((((char)param_1[0x5e1] == '\x03') && (iVar4 = FUN_00a8c760(0xf), iVar4 != 0)) &&
           ((fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 42.25 < fVar1 != (fVar1 == 42.25) &&
            ((float)param_1[0x2a8] <= 1.2217305)))) {
          param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
          FUN_00a8caf0(0x10006,0,0,0);
          return;
        }
        iVar4 = FUN_00a8c760(0xf);
        if ((((iVar4 == 0) || (0.0 < (float)param_1[0x5d9])) ||
            ((iVar4 = FUN_0084d4e0(), iVar4 == 0 && (iVar4 = FUN_008463f0(), iVar4 == 0)))) &&
           (((param_1[0x3a0] != 0 || (param_1[0x5d8] != 0)) &&
            (iVar4 = FUN_00a8c760(0x28), iVar4 != 0)))) {
          FUN_00846a70(0x40b00000);
        }
      }
      return;
    case 0x10006:
    case 0x10007:
    case 0x10008:
    case 0x10009:
      piVar3 = (int *)param_1[0x2a1];
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        puVar5 = &DAT_01b35b20;
        (**(code **)(*piVar3 + 4))(&DAT_01b35b20);
        iVar4 = FUN_00dd6d80(puVar5);
        piVar3 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar3);
      }
      if ((param_1[0x186] == 0x10006) && (iVar4 = FUN_00a8c760(10), iVar4 != 0)) {
        iVar4 = FUN_00ac4780();
        if ((0 < iVar4) &&
           (((param_1[0x252] != 0 && ((float)param_1[0x2a3] < 16.0)) &&
            ((float)param_1[0x2a8] <= 0.5235988)))) {
          param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
          FUN_00a8caf0(0x2000e,0,0,0);
          if ((param_1[0x252] == 2) && (iVar4 = FUN_00ac4780(), 2 < iVar4)) {
            param_1[0x63f] = 1;
            param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
            FUN_00a8caf0(0x20007,0,0,0);
          }
          iVar4 = FUN_0083fd00();
          if (iVar4 == 0) {
            return;
          }
          if (piVar3 == (int *)0x0) {
            return;
          }
          iVar4 = FUN_0085d590();
          if (iVar4 != 0) {
            param_1[0x63f] = 1;
            param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
            FUN_00a8caf0(0x20007,0,0,0);
          }
          iVar4 = (**(code **)(*piVar3 + 0x404))();
          if (iVar4 == 0) {
            return;
          }
          param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
          FUN_00a8caf0(0x20007,0,0,0);
          return;
        }
        if (((float)param_1[0x2a3] < 4.0) && ((float)param_1[0x2a8] <= 1.3962634)) {
          param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
          param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
          FUN_00a8caf0(0x20000,0,0,0);
          sVar2 = FUN_00dde2d0(0,3);
          if (sVar2 == 1) {
            param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
            FUN_00a8caf0(0x20003,0,0,0);
          }
          sVar2 = FUN_00dde2d0(0,4);
          if (sVar2 == 2) {
            param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
            FUN_00a8caf0(0x20002,0,0,0);
          }
          sVar2 = FUN_00dde2d0(0,4);
          if (sVar2 == 3) {
            param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
            FUN_00a8caf0(0x20001,0,0,0);
          }
          sVar2 = FUN_00dde2d0(0,4);
          if ((sVar2 == 4) && (iVar4 = FUN_00ac4780(), 2 < iVar4)) {
            param_1[0x63f] = 1;
            param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
            param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
            FUN_00a8caf0(0x20007,0,0,0);
          }
          if (((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) && (piVar3 != (int *)0x0)) {
            iVar4 = FUN_0085d590();
            if (iVar4 != 0) {
              param_1[0x63f] = 1;
              param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
              param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
              param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
              param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
              FUN_00a8caf0(0x20007,0,0,0);
            }
            iVar4 = (**(code **)(*piVar3 + 0x404))();
            if (iVar4 != 0) {
              param_1[0x4eb] = param_1[0x4eb] & 0x87ffffff;
              param_1[0x4eb] = param_1[0x4eb] & 0xfdffffff;
              param_1[0x4eb] = param_1[0x4eb] & 0xfeffffff;
              param_1[0x4eb] = param_1[0x4eb] & 0xff7fffff;
              FUN_00a8caf0(0x20007,0,0,0);
            }
          }
        }
      }
      if (((param_1[0x187] == 3) && (param_1[0x2a1] != 0)) &&
         (((float)param_1[0x2a3] < 6.25 && ((float)param_1[0x2a8] <= 1.3962634)))) {
        param_1[0x187] = 4;
      }
      if ((((param_1[0x187] == 5) && (param_1[0x5d7] != 0)) &&
          ((iVar4 = FUN_00a8c760(0xf), iVar4 == 0 ||
           ((iVar4 = FUN_0084d4e0(), iVar4 == 0 && (iVar4 = FUN_008463f0(), iVar4 == 0)))))) &&
         (((param_1[0x3a0] != 0 || (param_1[0x5d8] != 0)) &&
          (iVar4 = FUN_00a8c760(0x28), iVar4 != 0)))) {
        FUN_00846a70(0x40b00000);
      }
      return;
    }
  }
  else if (iVar4 < 0x30001) {
    if (iVar4 == 0x30000) {
      FUN_00853340();
      return;
    }
    switch(iVar4) {
    case 0x20001:
      FUN_00851890();
      return;
    case 0x20002:
      FUN_00851930();
      return;
    case 0x20003:
      FUN_008519b0();
      return;
    case 0x20004:
      FUN_00851a30();
      return;
    case 0x20005:
      FUN_00851ae0();
      return;
    case 0x20006:
      FUN_00851b60();
      return;
    case 0x20007:
      FUN_00851cc0();
      return;
    case 0x20008:
      FUN_00851f40();
      return;
    case 0x20009:
      FUN_00852040();
      return;
    case 0x2000a:
      FUN_00852220();
      return;
    case 0x2000b:
    case 0x2000c:
    case 0x2000d:
      FUN_00852270();
      return;
    case 0x2000e:
      FUN_00852680();
      return;
    case 0x2000f:
      FUN_008527e0();
      return;
    case 0x20010:
    case 0x20011:
      FUN_00852f50();
      return;
    case 0x20012:
      FUN_00852fa0();
      return;
    case 0x20013:
      fVar1 = (13.85 - (float)param_1[0x12]) * (13.85 - (float)param_1[0x12]) +
              (211.11 - (float)param_1[0x10]) * (211.11 - (float)param_1[0x10]);
      if (fVar1 < 6.25 != (fVar1 == 6.25)) {
        param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
        FUN_00a8caf0(0x20014,0,0,0);
      }
      return;
    case 0x20015:
      FUN_00845140();
      return;
    case 0x20017:
      if ((((param_1[0x187] == 3) && (param_1[0x2a1] != 0)) && ((float)param_1[0x2a3] < 6.25)) &&
         ((float)param_1[0x2a8] <= 1.3962634)) {
        param_1[0x187] = 4;
      }
      return;
    }
  }
  else if ((iVar4 < 0x70001) && (iVar4 != 0x70000)) {
    switch(iVar4) {
    case 0x30001:
      FUN_00853390();
      return;
    case 0x30002:
      FUN_008533e0();
      return;
    case 0x30003:
      FUN_00853430();
      return;
    case 0x30004:
      FUN_00853480();
      return;
    case 0x30005:
      (**(code **)(*param_1 + 0x1d4))(1);
      break;
    case 0x30006:
      FUN_008404b0();
      return;
    case 0x30007:
      FUN_008534f0();
      return;
    case 0x30008:
      FUN_00853540();
      return;
    }
  }
  return;
}

// 008550F0  FUN_008550f0  size=999  [callgraph]
void __fastcall FUN_008550f0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  float10 fVar5;
  undefined *puVar6;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  piVar4 = (int *)param_1[0x2a1];
  if (piVar4 != (int *)0x0) {
    puVar6 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar6);
    if (iVar2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      FUN_00a7c950();
    }
  }
  (**(code **)(*param_1 + 0x318))();
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa4080(0x48,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x5da] = param_1[0x5da] + 1;
    FUN_008462d0();
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
    if ((char)param_1[0x5e1] == '\x01') {
      param_1[0x5e0] = 0;
    }
    param_1[0x604] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x49,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    iStack_30 = 0x434687ae;
    iStack_2c = 0x43b4599a;
    iStack_28 = 0x42201eb8;
    fStack_20 = ((float)param_1[0x10] + 198.53) * 0.5;
    fStack_18 = ((float)param_1[0x12] + 40.03) * 0.5;
    fStack_14 = ((float)param_1[0x13] + fStack_24) * 0.5;
    fStack_1c = ((float)param_1[0x11] + 360.7) * 0.5 + 2.0;
    FUN_00853590(param_1 + 0x5e7,param_1 + 0x10,&fStack_20,&iStack_30);
    goto LAB_008552fc;
  case 3:
LAB_008552fc:
    FUN_00842c80(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    FUN_00a581b0(&iStack_30,0,param_1[0x248]);
    fVar1 = (float)param_1[0x248];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x248] = 0x40000000;
      FUN_00a581b0(&iStack_30,0,0x40000000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = iStack_30;
    param_1[0x15] = iStack_2c;
    param_1[0x16] = iStack_28;
    param_1[0x248] = (int)((float)param_1[0x244] * 0.05 + (float)param_1[0x248]);
    return;
  case 4:
    if (piVar4 != (int *)0x0) {
      FUN_00864be0(1,0,1);
    }
    FUN_00aa4080(0x244,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x14] = 0x434687ae;
    param_1[0x15] = 0x43b4599a;
    param_1[0x16] = 0x42201eb8;
    fVar5 = (float10)FUN_00ddba30(0x40b2b8c2);
    param_1[0x24] = 0;
    param_1[0x26] = 0;
    param_1[0x25] = (int)(float)fVar5;
    (**(code **)(*param_1 + 0x7c))(param_1 + 0x14,param_1 + 0x24);
    uVar3 = FUN_00e678d0(2,0xc002,0xffffffff);
    FUN_00e80d00(uVar3);
    DAT_01bea060 = DAT_01bea060 | 0xa000000;
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    param_1[0x1bb] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
      FUN_00a8caf0(0x20015,0,0,0);
      return;
    }
  default:
    goto switchD_00855153_default;
  }
  FUN_00842c80(0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00855153_default:
  return;
}

// 00855A10  FUN_00855a10  size=259  [callgraph]
void __thiscall FUN_00855a10(int *param_1,undefined4 param_2,undefined4 param_3)

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

// 00855B20  FUN_00855b20  size=128  [callgraph]
void FUN_00855b20(undefined4 *param_1)

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
  FUN_00a8c930(0x2c700,local_160);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a805f0();
  }
  return;
}

// 00857580  FUN_00857580  size=652  [callgraph]
void __thiscall FUN_00857580(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined *puVar7;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_2c;
  float fStack_24;
  float fStack_18;
  
  iVar4 = FUN_00c13920();
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar5 + 0x28))(0);
    if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      puVar7 = &DAT_01b35b20;
      (**(code **)(*piVar5 + 4))(&DAT_01b35b20);
      iVar4 = FUN_00dd6d80(puVar7);
      uVar6 = -(uint)(iVar4 != 0) & (uint)piVar5;
      goto LAB_008575d6;
    }
  }
  uVar6 = 0;
LAB_008575d6:
  local_40 = *(float *)(uVar6 + 0x40);
  local_38 = *(float *)(uVar6 + 0x48);
  local_34 = *(float *)(uVar6 + 0x4c);
  local_3c = *(float *)(uVar6 + 0x44) + 1.8;
  local_50 = *(float *)(param_1 + 0x40);
  local_4c = *(float *)(param_1 + 0x44);
  fStack_48 = *(float *)(param_1 + 0x48);
  fStack_44 = *(float *)(param_1 + 0x4c);
  fVar1 = local_40 - local_50;
  fStack_2c = local_3c - local_4c;
  fVar2 = local_38 - fStack_48;
  fStack_24 = local_34 - fStack_44;
  fStack_60 = *param_2 + local_50;
  fStack_5c = param_2[1] + local_4c;
  fStack_58 = param_2[2] + fStack_48;
  fStack_54 = param_2[3] + fStack_44;
  fStack_18 = fStack_58 - fStack_48;
  fVar3 = (fStack_18 * fVar2 + (fStack_5c - local_4c) * fStack_2c + fVar1 * (fStack_60 - local_50))
          / (fVar2 * fVar2 + fVar1 * fVar1 + fStack_2c * fStack_2c);
  fStack_70 = fStack_60 - (fVar1 * fVar3 + local_50);
  fStack_6c = fStack_5c - (fStack_2c * fVar3 + local_4c);
  fStack_68 = fStack_58 - (fVar2 * fVar3 + fStack_48);
  fStack_64 = fStack_54 - (fStack_24 * fVar3 + fStack_44);
  fVar1 = fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_70,&fStack_70);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_68 = 0.0;
    fStack_70 = 0.0;
    fStack_6c = 1.0;
  }
  fStack_70 = fStack_70 * 2.0;
  fStack_6c = fStack_6c * 2.0;
  fStack_68 = fStack_68 * 2.0;
  fStack_64 = fStack_64 * 2.0;
  fStack_60 = (local_50 + local_40) * 0.5 + fStack_70;
  fStack_5c = (local_4c + local_3c) * 0.5 + fStack_6c;
  fStack_58 = fStack_68 + (fStack_48 + local_38) * 0.5;
  fStack_54 = (fStack_44 + local_34) * 0.5 + fStack_64;
  FUN_00854a30(param_1 + 0x1240,&local_50,&fStack_60,&local_40);
  *(undefined4 *)(param_1 + 0x12a0) = 0;
  return;
}

// 00857810  FUN_00857810  size=151  [callgraph]
void __fastcall FUN_00857810(int param_1)

{
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x121c) == 0) {
    FUN_00eaa6e0(0x41f00000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00e5e0c0("emc19a_se_dmg_explosion",param_1,0xffffffff,0);
    FUN_004039a0(0xb,param_1,0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x121c) = 1;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
  }
  return;
}

// 008578B0  FUN_008578b0  size=497  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_008578b0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar8;
  undefined *puVar9;
  float fStack_3c;
  float in_stack_ffffffc8;
  float fStack_34;
  undefined1 *puStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 *puStack_20;
  char *pcStack_1c;
  int *piStack_18;
  float fVar10;
  undefined1 *puVar11;
  
  fVar10 = 1.2257427e-38;
  iVar6 = FUN_00a8cab0();
  if (iVar6 < 0x20001) {
    if (iVar6 != 0x20000) {
      switch(iVar6) {
      case 0x10000:
        FUN_0083ff90();
        return;
      case 0x10001:
        FUN_00840020();
        return;
      case 0x10002:
      case 0x10003:
      case 0x10004:
        FUN_008401a0();
        return;
      case 0x10005:
        FUN_00849570();
        return;
      case 0x10006:
      case 0x10007:
      case 0x10008:
      case 0x10009:
        FUN_00849040();
        return;
      case 0x1000a:
        FUN_00849780();
        return;
      case 0x1000b:
      case 0x1000c:
        FUN_00844c70();
        return;
      default:
        return;
      }
    }
    FUN_00849910();
    return;
  }
  fStack_3c = unaff_ESI;
  if (0x30000 < iVar6) {
    if (iVar6 < 0x70001) {
      if (iVar6 != 0x70000) {
        switch(iVar6) {
        case 0x30001:
          FUN_00845210();
          return;
        case 0x30002:
          FUN_008452f0();
          return;
        case 0x30003:
          FUN_008453d0();
          return;
        case 0x30004:
          param_1[0x63c] = 0;
          uVar5 = FUN_00a8cac0();
          switch(uVar5) {
          case 0:
            piStack_18 = (int *)0x3e2aaaab;
            pcStack_1c = (char *)0x0;
            puStack_20 = (undefined1 *)0x85;
            fStack_24 = 1.2153152e-38;
            FUN_00aa4080();
            param_1[0x187] = param_1[0x187] + 1;
            FUN_00842aa0();
          case 1:
            FUN_00ac80a0();
            iVar6 = FUN_00a94ce0();
            if (iVar6 != 0) {
              param_1[0x187] = param_1[0x187] + 1;
            }
            break;
          case 2:
            piStack_18 = (int *)0x0;
            pcStack_1c = (char *)0x0;
            puStack_20 = (undefined1 *)0x87;
            fStack_24 = 1.2153303e-38;
            FUN_00aa4080();
            param_1[0x187] = param_1[0x187] + 1;
          case 3:
            FUN_00ac80a0();
            break;
          case 4:
            piStack_18 = (int *)0x3e2aaaab;
            pcStack_1c = (char *)0x0;
            puStack_20 = (undefined1 *)0x86;
            fStack_24 = 1.2153417e-38;
            FUN_00aa4080();
            param_1[0x187] = param_1[0x187] + 1;
          case 5:
            FUN_00ac80a0();
            iVar6 = FUN_00a94ce0();
            if (iVar6 != 0) {
              (**(code **)(*param_1 + 0x34c))();
              param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
              piStack_18 = (int *)0x845716;
              FUN_00a8caf0();
              param_1[0x5d9] = 0;
            }
          }
          iVar6 = FUN_00a8c760();
          if (iVar6 != 0) {
            piStack_18 = (int *)&LAB_00845765;
            (**(code **)(*param_1 + 0x308))();
          }
          return;
        case 0x30005:
          param_1[0x63c] = 0;
          if (param_1[0x187] == 0) {
            piStack_18 = (int *)0x3d088889;
            pcStack_1c = (char *)0x0;
            puStack_20 = (undefined1 *)0x8b;
            fStack_24 = 1.2123662e-38;
            FUN_00aa4080();
            param_1[0x225] = 0x3e4ccccd;
            param_1[0x187] = param_1[0x187] + 1;
            param_1[0x289] = 0x41200000;
            param_1[0x288] = 1;
            (**(code **)(*param_1 + 0x220))();
            DAT_01bea094 = DAT_01bea094 & 0xffffffdf;
            FUN_00c5ad80();
            param_1[0x4ec] = -1;
            if (param_1[0x1d9] != 0) {
              FUN_008e6d00();
            }
            param_1[0x24] = 0;
            iVar6 = FUN_00a81330();
            if (iVar6 != 0) {
              FUN_00a805f0();
            }
            FUN_00a7c950();
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          iVar6 = FUN_00a94ce0();
          if (iVar6 != 0) {
            param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
            piStack_18 = (int *)&LAB_008404ad;
            FUN_00a8caf0();
          }
          return;
        case 0x30006:
          param_1[0x63c] = 0;
          if (param_1[0x187] == 0) {
            piStack_18 = (int *)0x3d088889;
            pcStack_1c = (char *)0x0;
            puStack_20 = (undefined1 *)0x8d;
            fStack_24 = 1.2124195e-38;
            FUN_00aa4080();
            param_1[0x187] = param_1[0x187] + 1;
            DAT_01bea094 = DAT_01bea094 & 0xffffffdf;
            FUN_00c5ad80();
            param_1[0x4ec] = -1;
            if (param_1[0x1d9] != 0) {
              FUN_008e6d00();
            }
            param_1[0x24] = 0;
            iVar6 = FUN_00a81330();
            if (iVar6 != 0) {
              FUN_00a805f0();
            }
            FUN_00a7c950();
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          return;
        case 0x30007:
          goto LAB_00845780;
        case 0x30008:
          FUN_00845870();
          return;
        default:
          break;
        }
      }
switchD_008578cf_default:
      return;
    }
    switch(iVar6) {
    default:
      goto switchD_008578cf_default;
    case 0x70004:
      FUN_0084c370();
      return;
    case 0x70005:
      FUN_0084c740();
      return;
    case 0x70006:
      FUN_0084cae0();
      return;
    case 0x70007:
      FUN_0084d080();
      return;
    case 0x70009:
      FUN_00846f40();
      return;
    case 0x7000a:
      piVar7 = (int *)0x0;
      iVar6 = FUN_00a81330();
      if ((iVar6 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
        puVar9 = &DAT_01b35b20;
        (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
        iVar6 = FUN_00dd6d80(puVar9);
        piVar7 = (int *)(-(uint)(iVar6 != 0) & (uint)piVar4);
      }
      break;
    case 0x7000b:
      FUN_00847510();
      return;
    case 0x7000e:
      FUN_0084c240();
      return;
    case 0x7000f:
      iVar6 = FUN_00a8cac0();
      if (iVar6 == 0) {
        piStack_18 = (int *)0x3f800000;
        pcStack_1c = (char *)0x0;
        puStack_20 = (undefined1 *)0x0;
        fStack_24 = 8.21161e-43;
        fStack_28 = 1.2154424e-38;
        FUN_00aa4080();
        iVar6 = FUN_00a81330();
        if (iVar6 != 0) {
          FUN_00a81330();
          iVar6 = FUN_00a7c8a0();
          if (iVar6 != 0) {
            iVar6 = FUN_00a81330();
            if (iVar6 == 0) {
              iVar6 = 0;
            }
            else {
              FUN_00a81330();
              iVar6 = FUN_00a7c8a0();
            }
            iVar3 = FUN_00a81330();
            if (iVar3 != 0) {
              FUN_00a81330();
              FUN_00a7c8a0();
            }
            fStack_2c = (float)(iVar6 + 0x494);
            piStack_18 = (int *)0x0;
            pcStack_1c = (char *)0x3f800000;
            puStack_20 = (undefined1 *)0x0;
            fStack_24 = 0.0;
            fStack_28 = 0.0;
            puStack_30 = (undefined1 *)0x845a3b;
            FUN_00a9f3c0();
          }
        }
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (iVar6 != 1) {
        return;
      }
      FUN_00ac80a0();
      FUN_00a94ce0();
      return;
    }
    switch(param_1[0x187]) {
    case 0:
      FUN_00aa4080(0xaa,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      FUN_00846140(0x1c0,0x8100000);
      if ((char)param_1[0x5e1] == '\x01') {
        param_1[0x5e0] = 0;
      }
      (**(code **)(*param_1 + 0x314))();
      break;
    case 1:
    case 3:
    case 5:
      break;
    case 2:
      FUN_00aa4080(0xab,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00846140(0x1c1,0x8100000);
      break;
    case 4:
      FUN_00aa4080(0xac,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00846140(0x1c2,0x8100000);
      break;
    case 6:
      FUN_00aa4080(0xad,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00846140(0x1c3,0x8100000);
    case 7:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar6 = FUN_00a94ce0(0);
      if (iVar6 != 0) {
        (**(code **)(*param_1 + 0x34c))();
        if (param_1[0x1d9] != 0) {
          FUN_008e6d00();
        }
        FUN_00846d40();
      }
    default:
      goto switchD_0084723f_default;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
switchD_0084723f_default:
    if (((piVar7 != (int *)0x0) && (iVar6 = FUN_00a8c760(0x3a), iVar6 == 0)) &&
       (iVar6 = (**(code **)(*piVar7 + 0x32c))(), iVar6 == 0)) {
      FUN_00a8ce90(&puStack_30,&puStack_20);
      fVar8 = (float10)FUN_00ddba30((float)param_1[0x25] + (float)pcStack_1c);
      piVar7[0x25] = (int)(float)fVar8;
      D3DXVec3TransformNormal(&puStack_30,&puStack_30,param_1 + 4);
      fStack_3c = (float)param_1[0x10] + fStack_3c;
      fVar10 = (float)param_1[0x11];
      fStack_34 = (float)param_1[0x12] + fStack_34;
      piVar7[0x16] = (int)fStack_34;
      piVar7[0x14] = (int)fStack_3c;
      piVar7[0x15] = (int)(fVar10 + unaff_EBX);
      piVar7[0x17] = (int)puStack_30;
      switchD_0080dbae::default();
    }
    return;
  }
  if (iVar6 == 0x30000) {
    FUN_0084c0d0();
    return;
  }
  switch(iVar6) {
  case 0x20001:
    FUN_00849a40();
    return;
  case 0x20002:
    FUN_00849b60();
    return;
  case 0x20003:
    FUN_00849c90();
    return;
  case 0x20004:
    FUN_00849dc0();
    return;
  case 0x20005:
    iVar6 = FUN_00a8cac0();
    if (iVar6 == 0) {
      puVar11 = (undefined1 *)0x3e4ccccd;
      uVar5 = 0x25;
      if (((float)param_1[0x555] <= 0.0) && (param_1[0x128] == 1)) {
        piStack_18 = (int *)0x849f40;
        sVar2 = FUN_00dde2d0();
        if (sVar2 != 0) {
          uVar5 = 0x26;
          puVar11 = (undefined1 *)0x3dcccccd;
        }
      }
      puStack_20 = puVar11;
      if (((param_1[0x5d6] != 0) || (param_1[0x3a0] != 0)) || (param_1[0x5d8] != 0)) {
        piStack_18 = (int *)0x849f7d;
        sVar2 = FUN_00dde2d0();
        if (sVar2 != 0) {
          uVar5 = 0x26;
          puStack_20 = (undefined1 *)0x3dcccccd;
        }
      }
      piStack_18 = (int *)0x8000000;
      pcStack_1c = (char *)0x3f800000;
      fStack_24 = 0.0;
      fStack_2c = 1.2179593e-38;
      fStack_28 = (float)uVar5;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x5da] = param_1[0x5da] + 1;
      FUN_008462d0();
      FUN_00a8d280();
    }
    else if (iVar6 != 1) goto LAB_0084a00f;
    FUN_00ac80a0();
    iVar6 = FUN_00a94ce0();
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x5d9] = 0;
    }
LAB_0084a00f:
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      piStack_18 = (int *)0x3dcccccd;
      pcStack_1c = &LAB_0084a054;
      (**(code **)(*param_1 + 0x308))();
    }
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      piStack_18 = (int *)0x3dcccccd;
      pcStack_1c = &LAB_0084a09d;
      (**(code **)(*param_1 + 0x308))();
    }
    return;
  case 0x20006:
    FUN_0084a0a0();
    return;
  case 0x20007:
    goto LAB_0084a1d0;
  case 0x20008:
    FUN_0084a7a0();
    return;
  case 0x20009:
    iVar6 = FUN_00a8cac0();
    if (iVar6 == 0) {
      piStack_18 = (int *)0x3e2aaaab;
      pcStack_1c = (char *)0x0;
      puStack_20 = (undefined1 *)0x30;
      fStack_24 = 1.2186152e-38;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x5da] = param_1[0x5da] + 1;
      FUN_008462d0();
      FUN_00a8d280();
    }
    else if (iVar6 != 1) goto LAB_0084b25c;
    FUN_00ac80a0();
    iVar6 = FUN_00a94ce0();
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x5d9] = 0;
    }
LAB_0084b25c:
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      piStack_18 = (int *)&LAB_0084b2a1;
      (**(code **)(*param_1 + 0x308))();
    }
    return;
  case 0x2000a:
    FUN_0084b2b0();
    return;
  case 0x2000b:
  case 0x2000c:
  case 0x2000d:
    iVar6 = FUN_00a8cac0();
    if (iVar6 == 0) {
      piStack_18 = (int *)0x0;
      fVar10 = 5.60519e-44;
      pcStack_1c = (char *)0x852325;
      sVar2 = FUN_00dde2d0();
      if (sVar2 != 0) {
        fVar10 = 6.16571e-44;
      }
      if (param_1[0x186] == 0x2000c) {
        fVar10 = 5.88545e-44;
      }
      if (param_1[0x186] == 0x2000d) {
        fVar10 = 6.02558e-44;
      }
      piStack_18 = (int *)0xbf800000;
      pcStack_1c = (char *)0x8000000;
      puStack_20 = (undefined1 *)0x3f800000;
      fStack_24 = 0.16666667;
      fStack_28 = 0.0;
      puStack_30 = (undefined1 *)0x85237e;
      fStack_2c = fVar10;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x5da] = param_1[0x5da] + 1;
      FUN_008462d0();
      FUN_00a8d280();
      param_1[0x5e4] = 0;
      param_1[0x5e5] = 0;
      param_1[0x5e6] = 0;
    }
    else if (iVar6 != 1) goto LAB_008525ef;
    piStack_18 = (int *)0x8523cf;
    FUN_00ac80a0();
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      if (param_1[0x186] == 0x2000b) {
        piStack_18 = (int *)0x8523fb;
        FUN_0084dc70();
        iVar6 = FUN_00ac4780();
        if (1 < iVar6) {
          piStack_18 = (int *)0xffffffff;
          pcStack_1c = (char *)0x852416;
          FUN_00dde2d0();
          piStack_18 = (int *)&LAB_0085243c;
          FUN_0084dc70();
        }
      }
      if (param_1[0x186] == 0x2000d) {
        piStack_18 = (int *)0x85245f;
        FUN_0084dc70();
        piStack_18 = (int *)0x852472;
        FUN_0084dc70();
        piStack_18 = (int *)0x852485;
        FUN_0084dc70();
        piStack_18 = (int *)0x852498;
        FUN_0084dc70();
        piStack_18 = (int *)0x8524ab;
        FUN_0084dc70();
        piStack_18 = (int *)0x8524be;
        FUN_0084dc70();
        param_1[0x5e2] = 0x43340000;
        *(undefined1 *)(param_1 + 0x5e3) = 1;
      }
      if (param_1[0x186] == 0x2000c) {
        iVar6 = FUN_00ac4780();
        if (iVar6 < 2) {
          piStack_18 = (int *)0x85254e;
          FUN_0084dc70();
          piStack_18 = (int *)0x852560;
          FUN_0084dc70();
          param_1[0x5e6] = 1;
        }
        else {
          piStack_18 = (int *)0x8524ff;
          FUN_0084dc70();
          piStack_18 = (int *)0x85250c;
          FUN_00dde2d0();
          piStack_18 = (int *)0x85252b;
          FUN_0084dc70();
          piStack_18 = (int *)0x85253e;
          FUN_0084dc70();
        }
        param_1[0x5e0] = 0x44960000;
        pcStack_1c = "em0700_se_atk_firewall_start";
        *(undefined1 *)(param_1 + 0x5e1) = 1;
        puStack_20 = (undefined1 *)0x852587;
        piStack_18 = param_1;
        FUN_00e5e0c0();
      }
    }
    iVar6 = FUN_00a94ce0();
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x5d9] = 0x42f00000;
      if (param_1[0x5d6] != 0) {
        param_1[0x5d9] = 0x41f00000;
      }
      if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
        param_1[0x5d9] = 0;
      }
      if (param_1[0x5d7] != 0) {
        param_1[0x5d9] = 0;
      }
    }
LAB_008525ef:
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      piStack_18 = (int *)0x393702d3;
      pcStack_1c = (char *)0x3dcccccd;
      puStack_20 = &LAB_00852634;
      (**(code **)(*param_1 + 0x308))();
    }
    iVar6 = FUN_00a8c760();
    if (iVar6 != 0) {
      piStack_18 = (int *)0x393702d3;
      pcStack_1c = (char *)0x3e99999a;
      puStack_20 = &LAB_00852679;
      (**(code **)(*param_1 + 0x308))();
    }
    return;
  case 0x2000e:
    FUN_0084b3d0();
    return;
  case 0x2000f:
    FUN_00852830();
    return;
  case 0x20010:
  case 0x20011:
    FUN_0084b500();
    return;
  case 0x20012:
    FUN_0084b620();
    return;
  case 0x20013:
    FUN_0084b9e0();
    return;
  case 0x20014:
    FUN_008550f0();
    return;
  case 0x20015:
    FUN_00852ff0();
    return;
  case 0x20016:
    piVar7 = (int *)param_1[0x2a1];
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      puVar9 = &DAT_01b35b20;
      (**(code **)(*piVar7 + 4))(&DAT_01b35b20);
      iVar6 = FUN_00dd6d80(puVar9);
      if (iVar6 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        FUN_00a7c950();
      }
    }
    (**(code **)(*param_1 + 0x318))();
    puStack_30 = (undefined1 *)0x0;
    fStack_2c = 0.0;
    fStack_28 = 3.0;
    D3DXVec3TransformNormal(&puStack_30,&puStack_30,param_1 + 4);
    fStack_3c = fStack_3c + (float)param_1[0x10];
    fVar10 = (float)param_1[0x11] + unaff_EBX;
    fStack_34 = (float)param_1[0x12] + fStack_34;
    FUN_00da9630(1,1);
    FUN_00da9660(1,&fStack_3c,0);
    uVar5 = FUN_00a8cac0();
    switch(uVar5) {
    case 0:
      FUN_00aa4080(0x48,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x5da] = param_1[0x5da] + 1;
      FUN_008462d0();
      FUN_00a8d280();
      iVar6 = FUN_00a81330();
      if (iVar6 != 0) {
        FUN_00a81330();
        FUN_00a805f0();
      }
      FUN_00a7c950();
      if ((char)param_1[0x5e1] == '\x01') {
        param_1[0x5e0] = 0;
      }
      FUN_00d5ea40("PC60_ARMSTRONG2",1,0);
    case 1:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar6 = FUN_00a94ce0(0);
      if (iVar6 == 0) {
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    case 2:
      FUN_00aa4080(0x49,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0;
      fStack_3c = 211.1;
      fVar10 = 347.5;
      fStack_34 = 12.51;
      fStack_2c = ((float)param_1[0x10] + 211.1) * 0.5;
      fStack_24 = ((float)param_1[0x12] + 12.51) * 0.5;
      puStack_20 = (undefined1 *)(((float)param_1[0x13] + (float)puStack_30) * 0.5);
      fStack_28 = ((float)param_1[0x11] + 347.5) * 0.5 + 4.0;
      FUN_00853590(param_1 + 0x5e7,param_1 + 0x10,&fStack_2c,&fStack_3c);
    case 3:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00a94ce0(0);
      FUN_00a581b0(&fStack_3c,0,param_1[0x248]);
      fVar1 = (float)param_1[0x248];
      if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
        param_1[0x248] = 0x40000000;
        FUN_00a581b0(&fStack_3c,0,0x40000000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      param_1[0x14] = (int)fStack_3c;
      param_1[0x15] = (int)fVar10;
      param_1[0x16] = (int)fStack_34;
      param_1[0x248] = (int)((float)param_1[0x244] * 0.05 + (float)param_1[0x248]);
      return;
    case 4:
      if (piVar7 != (int *)0x0) {
        FUN_00864be0(1,0,1);
      }
      FUN_00aa4080(0x246,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0;
      FUN_00db3e80(0,0,&DAT_01bea1d0);
      DAT_01bea060 = DAT_01bea060 | 0x2000000;
      DAT_01bea070 = DAT_01bea070 | 0x200000;
      iVar6 = FUN_0083fc40();
      if (iVar6 != 0) {
        iVar6 = FUN_0083fc40();
        *(undefined4 *)(iVar6 + 0x768) = 0;
        FUN_0083fc40();
        FUN_00a8e760();
      }
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      uVar5 = FUN_00e678d0(2,0xc001,0xffffffff);
      FUN_00e80d00(uVar5);
      FUN_00840720(0xe);
      if ((int *)param_1[0x2a1] != (int *)0x0) {
        fStack_3c = 221.11;
        fStack_34 = 1.06;
        fStack_2c = 0.0;
        fStack_28 = -0.858702;
        fStack_24 = 0.0;
        (**(code **)(*(int *)param_1[0x2a1] + 0x7c))(&fStack_3c,&fStack_2c);
      }
      param_1[0x1bb] = 1;
      break;
    case 5:
      break;
    default:
      goto switchD_008555c1_default;
    }
    _DAT_01bea860 = 1;
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_00842e40();
      if (param_1[0x186] == 0x1000c) {
        uVar5 = FUN_00e678d0(2,0xc001,0xffffffff);
        FUN_00e7a5e0(uVar5);
      }
      iVar6 = FUN_0083fc40();
      if (iVar6 != 0) {
        iVar6 = FUN_0083fc40();
        *(undefined4 *)(iVar6 + 0x768) = 1;
        FUN_0083fc40();
        FUN_00a8e760();
        return;
      }
    }
switchD_008555c1_default:
    return;
  case 0x20017:
    param_1[0x5db] = 0x43960000;
    (**(code **)(*param_1 + 0x314))();
    uVar5 = FUN_00a8cac0();
    switch(uVar5) {
    case 0:
      FUN_00aa4080(0x5c,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x5da] = param_1[0x5da] + 1;
      FUN_008462d0();
      FUN_00a8d280();
    case 1:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar6 = FUN_00a94ce0(0);
      if (iVar6 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      goto switchD_0084bcda_default;
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
      iVar6 = FUN_007409e0(param_1[0x2a1]);
      if (iVar6 != 0) {
        FUN_00b7ab80(0x42200000,0x3d4ccccd);
      }
      param_1[0x24] = 0;
      goto LAB_0084bf17;
    case 5:
LAB_0084bf17:
      (**(code **)(*param_1 + 0x318))();
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar6 = FUN_00a94ce0(0);
      if (iVar6 != 0) {
        (**(code **)(*param_1 + 0x314))();
        (**(code **)(*param_1 + 0x34c))();
        param_1[0x5d9] = 0x42f00000;
      }
      iVar6 = FUN_00a8c760(10);
      if ((iVar6 != 0) && (piVar7 = (int *)FUN_007409e0(param_1[0x2a1]), piVar7 != (int *)0x0)) {
        (**(code **)(*param_1 + 0x314))();
        puStack_20 = (undefined1 *)0xc3407d71;
        pcStack_1c = (char *)0xc0e2ec2e;
        piStack_18 = (int *)0x43f6afbe;
        puStack_30 = (undefined1 *)0x0;
        fStack_2c = 2.633043;
        fStack_28 = 0.0;
        (**(code **)(*param_1 + 0x7c))(&puStack_20,&puStack_30);
        (**(code **)(*piVar7 + 0x150))(0x5e,param_1[0x13c]);
        (**(code **)(*param_1 + 0x150))(0x5e,piVar7[0x13c]);
      }
    default:
      goto switchD_0084bcda_default;
    }
    (**(code **)(*param_1 + 0x318))();
    FUN_00ac80a0(0x40a00000,0x3f800000);
    fVar10 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar10 - (float)param_1[0x244]);
    if (fVar10 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((param_1[0x2a1] == 0) || (1.3962634 < (float)param_1[0x2a8])) {
      iVar6 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar6 == 0) {
        param_1[0x24] = 0x3f060a92;
      }
      else {
        param_1[0x24] = 0;
      }
    }
    else {
      thunk_FUN_00dde510(&stack0xffffffc8,&fStack_34,param_1[0x2a1] + 0x40,param_1 + 0x10);
      param_1[0x24] = (int)(in_stack_ffffffc8 * -1.0);
      if (in_stack_ffffffc8 * -1.0 <= -1.0471976) {
        param_1[0x24] = -0x4079f56e;
      }
      fVar10 = (float)param_1[0x24];
      if (!NAN(fVar10) && 1.0471976 < fVar10 != (fVar10 == 1.0471976)) {
        param_1[0x24] = 0x3f860a92;
      }
    }
switchD_0084bcda_default:
    iVar6 = FUN_00a8c760(0);
    if (((iVar6 != 0) &&
        ((**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,(float)param_1[0x244] * 0.31415927,0)
        , param_1[0x2a1] != 0)) && (1.3962634 < (float)param_1[0x2a8])) {
      (**(code **)(*param_1 + 0x308))(0x3f19999a,0x393702d3,(float)param_1[0x244] * 0.31415927,0);
    }
    return;
  default:
    goto switchD_008578cf_default;
  }
LAB_00845780:
  param_1[0x63c] = 0;
  iVar6 = FUN_00a8cac0();
  if (iVar6 == 0) {
    piStack_18 = (int *)0x3e2aaaab;
    pcStack_1c = (char *)0x0;
    puStack_20 = (undefined1 *)0x8c;
    fStack_24 = 1.2153791e-38;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00842aa0();
  }
  else if (iVar6 != 1) goto LAB_0084581c;
  FUN_00ac80a0();
  iVar6 = FUN_00a94ce0();
  if (iVar6 != 0) {
    param_1[0x4eb] = param_1[0x4eb] & 0x847fffff;
    piStack_18 = (int *)&LAB_0084581c;
    FUN_00a8caf0();
  }
LAB_0084581c:
  iVar6 = FUN_00a8c760();
  if (iVar6 != 0) {
    piStack_18 = (int *)&LAB_00845861;
    (**(code **)(*param_1 + 0x308))();
  }
  return;
LAB_0084a1d0:
  param_1[0x5db] = 0x43960000;
  (**(code **)(*param_1 + 0x314))();
  uVar5 = FUN_00a8cac0();
  switch(uVar5) {
  case 0:
    param_1[0x187] = param_1[0x187] + 1;
    piStack_18 = (int *)0x0;
    param_1[0x251] = 0;
    pcStack_1c = (char *)0x84a22b;
    sVar2 = FUN_00dde2d0();
    if (sVar2 != 0) {
      piStack_18 = (int *)0x1;
      pcStack_1c = (char *)0x84a23d;
      sVar2 = FUN_00dde2d0();
      param_1[0x251] = (int)sVar2;
    }
    break;
  case 1:
    break;
  case 2:
    goto switchD_0084a204_caseD_2;
  case 3:
    fStack_2c = 1.37327e-43;
    if (param_1[0x5d6] != 0) {
      fStack_2c = 1.4013e-43;
    }
    if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
      fStack_2c = 1.4013e-43;
    }
    fStack_24 = 0.0;
    if ((param_1[0x63f] != 0) || (param_1[0x250] != 0)) {
      fStack_24 = 0.16666667;
    }
    piStack_18 = (int *)0xbf800000;
    pcStack_1c = (char *)0x0;
    puStack_20 = (undefined1 *)0x3f800000;
    fStack_28 = 0.0;
    puStack_30 = (undefined1 *)0x84a3c5;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
    if (param_1[0x5d6] != 0) {
      param_1[0x248] = 0x43340000;
    }
    if ((param_1[0x3a0] == 0) && (param_1[0x5d8] == 0)) {
      param_1[0x63f] = 0;
    }
    else {
      param_1[0x248] = 0x43340000;
      param_1[0x63f] = 0;
    }
    goto LAB_0084a420;
  case 4:
LAB_0084a420:
    (**(code **)(*param_1 + 0x318))();
    if (((param_1[0x5d6] == 0) && (param_1[0x3a0] == 0)) && (param_1[0x5d8] == 0)) {
      piStack_18 = (int *)1.5;
    }
    else {
      fVar10 = 2.0;
      iVar6 = FUN_00ac4780();
      if (iVar6 == 2) {
        fVar10 = 2.4;
      }
      iVar6 = FUN_00ac4780();
      piStack_18 = (int *)fVar10;
      if (2 < iVar6) {
        piStack_18 = (int *)2.8;
      }
    }
    pcStack_1c = (char *)0x84a4a3;
    FUN_00ac80a0();
    fVar1 = (float)param_1[0x248];
    iVar6 = param_1[0x2a1];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((iVar6 != 0) && (1.2217305 < (float)param_1[0x2a8])) {
      param_1[0x248] = (int)((fVar1 - (float)param_1[0x244]) - (float)param_1[0x244] * 15.0);
    }
    if ((float)param_1[0x248] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((iVar6 == 0) || (1.2217305 < (float)param_1[0x2a8])) {
      piStack_18 = (int *)0x84a593;
      iVar6 = (**(code **)(*param_1 + 800))();
      if (iVar6 == 0) {
        param_1[0x24] = 0x3f060a92;
      }
      else {
        param_1[0x24] = 0;
      }
    }
    else {
      piStack_18 = (int *)(iVar6 + 0x40);
      pcStack_1c = &stack0xfffffffc;
      puStack_20 = &stack0xfffffff8;
      fStack_24 = 1.218154e-38;
      thunk_FUN_00dde510();
      param_1[0x24] = (int)(fVar10 * -1.0);
      if (fVar10 * -1.0 <= -1.134464) {
        param_1[0x24] = -0x406ec9e2;
      }
      fVar10 = (float)param_1[0x24];
      if (!NAN(fVar10) && 1.2217305 < fVar10 != (fVar10 == 1.2217305)) {
        param_1[0x24] = 0x3f9c61aa;
      }
    }
    goto switchD_0084a204_default;
  case 5:
    piStack_18 = (int *)0xbf800000;
    pcStack_1c = (char *)0x8000000;
    puStack_20 = (undefined1 *)0x3f800000;
    fStack_24 = 0.16666667;
    fStack_28 = 0.0;
    fStack_2c = 1.38729e-43;
    puStack_30 = (undefined1 *)0x84a5e5;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24] = 0;
  case 6:
    piStack_18 = (int *)0x3f800000;
    pcStack_1c = "j";
    FUN_00ac80a0();
    piStack_18 = (int *)0x84a60f;
    iVar6 = FUN_00a94ce0();
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x5d9] = 0x42f00000;
      if (param_1[0x5d6] != 0) {
        param_1[0x5d9] = 0x41f00000;
      }
      if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
        param_1[0x5d9] = 0;
      }
      if (param_1[0x5d7] != 0) {
        param_1[0x5d9] = 0;
      }
    }
  default:
    goto switchD_0084a204_default;
  }
  puVar11 = (undefined1 *)0x60;
  if (((float)param_1[0x555] <= 0.0) && (param_1[0x128] == 1)) {
    piStack_18 = (int *)0x2;
    pcStack_1c = (char *)0x0;
    puStack_20 = (undefined1 *)0x84a273;
    sVar2 = FUN_00dde2d0();
    if (sVar2 != 0) {
      puVar11 = (undefined1 *)0x61;
    }
  }
  if (param_1[0x5d6] != 0) {
    puVar11 = (undefined1 *)0x65;
  }
  if ((param_1[0x3a0] != 0) || (param_1[0x5d8] != 0)) {
    puVar11 = (undefined1 *)0x65;
  }
  piStack_18 = (int *)0x3f800000;
  pcStack_1c = (char *)0xbf800000;
  puStack_20 = (undefined1 *)0x8000000;
  fStack_24 = 1.0;
  fStack_28 = 0.16666667;
  fStack_2c = 0.0;
  fStack_34 = 1.2180696e-38;
  puStack_30 = puVar11;
  FUN_00aa4080();
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x5da] = param_1[0x5da] + 1;
  piStack_18 = (int *)0x84a2e6;
  FUN_008462d0();
  piStack_18 = (int *)0x84a2ed;
  FUN_00a8d280();
  param_1[0x250] = 0;
switchD_0084a204_caseD_2:
  piStack_18 = (int *)0x3f800000;
  pcStack_1c = "j";
  FUN_00ac80a0();
  piStack_18 = (int *)0x84a314;
  iVar6 = FUN_00a94ce0();
  if (iVar6 != 0) {
    param_1[0x187] = 3;
  }
  piStack_18 = (int *)0x84a32b;
  iVar6 = FUN_00a8c760();
  if ((iVar6 != 0) && (param_1[0x63f] != 0)) {
    param_1[0x187] = 3;
    param_1[0x250] = 1;
  }
switchD_0084a204_default:
  iVar6 = FUN_00a8cac0();
  if (iVar6 < 3) {
    iVar6 = FUN_00a8c760();
    if (iVar6 == 0) {
      return;
    }
  }
  else {
    iVar6 = FUN_00a8c760();
    if (iVar6 == 0) {
      return;
    }
    if (1.2217305 < (float)param_1[0x2a8]) {
      return;
    }
  }
  piStack_18 = (int *)0x393702d3;
  pcStack_1c = (char *)0x3e4ccccd;
  puStack_20 = (undefined1 *)0x84a6eb;
  (**(code **)(*param_1 + 0x308))();
  if (((param_1[0x5d6] != 0) || (param_1[0x3a0] != 0)) || (param_1[0x5d8] != 0)) {
    piStack_18 = (int *)0x3e0efa35;
    puStack_20 = (undefined1 *)0x84a717;
    iVar6 = FUN_00ac4780();
    if (iVar6 == 2) {
      piStack_18 = (int *)0x3e2b92a6;
    }
    puStack_20 = (undefined1 *)0x84a72d;
    iVar6 = FUN_00ac4780();
    piVar7 = piStack_18;
    if (2 < iVar6) {
      piVar7 = (int *)0.20943952;
    }
    puStack_20 = (undefined1 *)0x0;
    fStack_24 = (float)piVar7 * (float)param_1[0x244];
    fStack_28 = 0.00017453292;
    fStack_2c = 0.2;
    puStack_30 = &LAB_0084a770;
    (**(code **)(*param_1 + 0x308))();
  }
  return;
}

// 00857B90  Emc700::vf1A4  size=276  [class]
void __thiscall Emc700::vf1A4(int param_1,int *param_2,byte param_3)

{
  int iVar1;
  float10 fVar2;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_18;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  *(undefined4 *)(param_1 + 0x139c) = 1;
  if (*param_2 == 0x1d8) {
    *(undefined4 *)(param_1 + 0x13a0) = 1;
    if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x22c))();
      if (iVar1 != 0) {
        fStack_30 = 0.0;
        fStack_2c = 0.0;
        fStack_28 = 2.0;
        D3DXVec3TransformNormal(&fStack_30,&fStack_30,param_1 + 0x10);
        fStack_30 = fStack_30 + *(float *)(param_1 + 0x40);
        fStack_2c = *(float *)(param_1 + 0x44) + fStack_2c;
        fStack_28 = *(float *)(param_1 + 0x48) + fStack_28;
        fStack_20 = *(float *)(*(int *)(param_1 + 0xa84) + 0x40) - fStack_30;
        fStack_18 = *(float *)(*(int *)(param_1 + 0xa84) + 0x48) - fStack_28;
        fVar2 = (float10)FUN_00fdc1f0();
        *(float *)(param_1 + 0x50) =
             (float)((float10)*(float *)(param_1 + 0x50) + (float10)fStack_20 * fVar2);
        *(float *)(param_1 + 0x58) =
             (float)(fVar2 * (float10)fStack_18 + (float10)*(float *)(param_1 + 0x58));
      }
    }
  }
  if (((param_3 & 1) != 0) && (*param_2 == 0x17f)) {
    FUN_00855b20(param_2 + 0x40);
  }
  return;
}

// 00857CB0  FUN_00857cb0  size=4910  [callgraph]
void __fastcall FUN_00857cb0(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  int local_30;
  int local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  bVar7 = false;
  bVar10 = false;
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  bVar8 = false;
  bVar9 = false;
  iVar11 = FUN_00a8c760(0x30);
  bVar17 = iVar11 != 0;
  iVar11 = FUN_00a8c760(0x31);
  bVar18 = iVar11 != 0;
  iVar11 = FUN_00a8c760(0x32);
  bVar19 = iVar11 != 0;
  iVar11 = FUN_00a8c760(0x34);
  if ((iVar11 != 0) && (bVar7 = true, *(int *)(param_1 + 0x4b0) == 0x2c70a)) {
    bVar17 = false;
    bVar18 = false;
    bVar4 = true;
    bVar5 = true;
  }
  iVar11 = FUN_00a8c760(0x33);
  bVar20 = iVar11 != 0;
  iVar11 = FUN_00a8c760(0x35);
  if ((iVar11 != 0) && (bVar10 = true, *(int *)(param_1 + 0x4b0) == 0x2c70a)) {
    bVar17 = false;
    bVar18 = false;
    bVar19 = false;
    bVar7 = false;
    bVar20 = false;
    bVar4 = true;
    bVar5 = true;
    bVar6 = true;
    bVar8 = true;
    bVar9 = true;
  }
  iVar11 = FUN_00a8c760(0x20);
  if (*(int *)(param_1 + 0x4b0) == 0x2c700) {
    iVar12 = FUN_00a8c760(0x34);
    if (iVar12 != 0) {
      bVar18 = true;
      bVar19 = true;
      bVar17 = true;
    }
    iVar12 = FUN_00a8c760(0x35);
    if (iVar12 != 0) {
      bVar18 = true;
      bVar17 = true;
    }
  }
  local_20 = 8;
  uVar15 = 0xe;
  local_1c = 9;
  local_18 = 0xf;
  local_14 = 0xb;
  local_10 = 0x11;
  if ((*(int *)(param_1 + 0x4a0) == 0) || (*(int *)(param_1 + 0x4a0) == 1)) {
    local_20 = 3;
    uVar15 = 6;
    local_1c = 4;
    local_18 = 7;
    local_14 = 0x14;
    local_10 = 0x15;
  }
  if ((*(byte *)(param_1 + 0x1380) & 1) == 0) {
    if (bVar17) {
      FUN_00ac9420("ex_Rhand");
      iVar12 = FUN_00a81330();
      if (iVar12 != 0) {
        FUN_00a81330();
        iVar12 = FUN_00a7c8a0();
        if (iVar12 != 0) {
          iVar12 = FUN_00a81330();
          if (iVar12 == 0) {
            iVar12 = 0;
          }
          else {
            FUN_00a81330();
            iVar12 = FUN_00a7c8a0();
          }
          local_30 = 0;
          if (0 < *(short *)(iVar12 + 0x324)) {
            iVar16 = 0;
            do {
              iVar14 = *(int *)(iVar12 + 800);
              iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
              if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Rhand"), iVar13 != 0)) {
                puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                *puVar1 = *puVar1 | 1;
              }
              local_30 = local_30 + 1;
              iVar16 = iVar16 + 0x70;
            } while (local_30 < *(short *)(iVar12 + 0x324));
          }
        }
      }
      pcVar2 = *(code **)(*(int *)(param_1 + 0xeb0) + 8);
      *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) | 1;
      (*pcVar2)(0x3f800000,0,0);
      FUN_00855a10(local_20,param_1 + 0xeb0);
    }
    *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) & 0xfffffffe;
  }
  else if (!bVar17) {
    if ((*(byte *)(param_1 + 0x1384) & 1) == 0) {
      (**(code **)(*(int *)(param_1 + 0xeb0) + 8))(0x3f800000,0,0);
      FUN_00855a10(uVar15,param_1 + 0xeb0);
      *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) | 1;
      *(undefined4 *)(param_1 + 0xe90) = 0x42480000;
    }
    fVar3 = *(float *)(param_1 + 0xe90) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0xe90) = fVar3;
    if (fVar3 < 0.0) {
      FUN_00ac94e0("ex_Rhand");
      iVar12 = FUN_00a81330();
      if (iVar12 != 0) {
        FUN_00a81330();
        iVar12 = FUN_00a7c8a0();
        if (iVar12 != 0) {
          iVar12 = FUN_0083fc40();
          local_20 = 0;
          if (0 < *(short *)(iVar12 + 0x324)) {
            iVar16 = 0;
            do {
              iVar14 = *(int *)(iVar12 + 800);
              iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
              if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Rhand"), iVar13 != 0)) {
                puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_20 = local_20 + 1;
              iVar16 = iVar16 + 0x70;
            } while (local_20 < *(short *)(iVar12 + 0x324));
          }
        }
      }
      *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) & 0xfffffffe;
    }
    if (bVar4) {
      (**(code **)(*(int *)(param_1 + 0xeb0) + 8))(0x3f800000,0,0);
      FUN_00ac94e0("ex_Rhand");
      iVar12 = FUN_00a81330();
      if (iVar12 != 0) {
        FUN_00a81330();
        iVar12 = FUN_00a7c8a0();
        if (iVar12 != 0) {
          iVar12 = FUN_0083fc40();
          local_20 = 0;
          if (0 < *(short *)(iVar12 + 0x324)) {
            iVar16 = 0;
            do {
              iVar14 = *(int *)(iVar12 + 800);
              iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
              if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Rhand"), iVar13 != 0)) {
                puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_20 = local_20 + 1;
              iVar16 = iVar16 + 0x70;
            } while (local_20 < *(short *)(iVar12 + 0x324));
          }
        }
      }
      *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) & 0xfffffffe;
    }
  }
  if ((*(byte *)(param_1 + 0x1380) & 2) == 0) {
    if (bVar18) {
      FUN_00ac9420("ex_Lhand");
      iVar12 = FUN_00a81330();
      if (iVar12 != 0) {
        FUN_00a81330();
        iVar12 = FUN_00a7c8a0();
        if (iVar12 != 0) {
          iVar12 = FUN_00a81330();
          if (iVar12 == 0) {
            iVar12 = 0;
          }
          else {
            FUN_00a81330();
            iVar12 = FUN_00a7c8a0();
          }
          local_20 = 0;
          if (0 < *(short *)(iVar12 + 0x324)) {
            iVar16 = 0;
            do {
              iVar14 = *(int *)(iVar12 + 800);
              iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
              if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Lhand"), iVar13 != 0)) {
                puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                *puVar1 = *puVar1 | 1;
              }
              local_20 = local_20 + 1;
              iVar16 = iVar16 + 0x70;
            } while (local_20 < *(short *)(iVar12 + 0x324));
          }
        }
      }
      pcVar2 = *(code **)(*(int *)(param_1 + 0xf60) + 8);
      *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) | 2;
      (*pcVar2)(0x3f800000,0,0);
      FUN_00855a10(local_1c,param_1 + 0xf60);
    }
    *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) & 0xfffffffd;
  }
  else if (!bVar18) {
    if ((*(byte *)(param_1 + 0x1384) & 2) == 0) {
      (**(code **)(*(int *)(param_1 + 0xf60) + 8))(0x3f800000,0,0);
      FUN_00855a10(local_18,param_1 + 0xf60);
      *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) | 2;
      *(undefined4 *)(param_1 + 0xe94) = 0x42480000;
    }
    fVar3 = *(float *)(param_1 + 0xe94) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0xe94) = fVar3;
    if (fVar3 < 0.0) {
      FUN_00ac94e0("ex_Lhand");
      iVar12 = FUN_00a81330();
      if (iVar12 != 0) {
        FUN_00a81330();
        iVar12 = FUN_00a7c8a0();
        if (iVar12 != 0) {
          iVar12 = FUN_0083fc40();
          local_18 = 0;
          if (0 < *(short *)(iVar12 + 0x324)) {
            iVar16 = 0;
            do {
              iVar14 = *(int *)(iVar12 + 800);
              iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
              if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Lhand"), iVar13 != 0)) {
                puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_18 = local_18 + 1;
              iVar16 = iVar16 + 0x70;
            } while (local_18 < *(short *)(iVar12 + 0x324));
          }
        }
      }
      *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) & 0xfffffffd;
    }
    if (bVar5) {
      (**(code **)(*(int *)(param_1 + 0xf60) + 8))(0x3f800000,0,0);
      FUN_00ac94e0("ex_Lhand");
      iVar12 = FUN_00a81330();
      if (iVar12 != 0) {
        FUN_00a81330();
        iVar12 = FUN_00a7c8a0();
        if (iVar12 != 0) {
          iVar12 = FUN_0083fc40();
          local_18 = 0;
          if (0 < *(short *)(iVar12 + 0x324)) {
            iVar16 = 0;
            do {
              iVar14 = *(int *)(iVar12 + 800);
              iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
              if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Lhand"), iVar13 != 0)) {
                puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_18 = local_18 + 1;
              iVar16 = iVar16 + 0x70;
            } while (local_18 < *(short *)(iVar12 + 0x324));
          }
        }
      }
      *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) & 0xfffffffd;
    }
  }
  if ((*(byte *)(param_1 + 0x1380) & 4) == 0) {
    if (bVar19) {
      FUN_00ac9420("ex_Head");
      iVar12 = FUN_00a81330();
      if (iVar12 != 0) {
        FUN_00a81330();
        iVar12 = FUN_00a7c8a0();
        if (iVar12 != 0) {
          iVar12 = FUN_00a81330();
          if (iVar12 == 0) {
            iVar12 = 0;
          }
          else {
            FUN_00a81330();
            iVar12 = FUN_00a7c8a0();
          }
          local_18 = 0;
          if (0 < *(short *)(iVar12 + 0x324)) {
            iVar16 = 0;
            do {
              iVar14 = *(int *)(iVar12 + 800);
              iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
              if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Head"), iVar13 != 0)) {
                puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                *puVar1 = *puVar1 | 1;
              }
              local_18 = local_18 + 1;
              iVar16 = iVar16 + 0x70;
            } while (local_18 < *(short *)(iVar12 + 0x324));
          }
        }
      }
      pcVar2 = *(code **)(*(int *)(param_1 + 0x1010) + 8);
      *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) | 4;
      (*pcVar2)(0x3f800000,0,0);
      FUN_00855a10(local_14,param_1 + 0x1010);
    }
    *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) & 0xfffffffb;
  }
  else if (!bVar19) {
    if ((*(byte *)(param_1 + 0x1384) & 4) == 0) {
      (**(code **)(*(int *)(param_1 + 0x1010) + 8))(0x3f800000,0,0);
      FUN_00855a10(local_10,param_1 + 0x1010);
      *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) | 4;
      *(undefined4 *)(param_1 + 0xe98) = 0x42480000;
    }
    fVar3 = *(float *)(param_1 + 0xe98) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0xe98) = fVar3;
    if (fVar3 < 0.0) {
      FUN_00ac94e0("ex_Head");
      iVar12 = FUN_00a81330();
      if (iVar12 != 0) {
        FUN_00a81330();
        iVar12 = FUN_00a7c8a0();
        if (iVar12 != 0) {
          iVar12 = FUN_0083fc40();
          local_10 = 0;
          if (0 < *(short *)(iVar12 + 0x324)) {
            iVar16 = 0;
            do {
              iVar14 = *(int *)(iVar12 + 800);
              iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
              if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Head"), iVar13 != 0)) {
                puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_10 = local_10 + 1;
              iVar16 = iVar16 + 0x70;
            } while (local_10 < *(short *)(iVar12 + 0x324));
          }
        }
      }
      *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) & 0xfffffffb;
    }
    if (bVar6) {
      (**(code **)(*(int *)(param_1 + 0x1010) + 8))(0x3f800000,0,0);
      FUN_00ac94e0("ex_Head");
      iVar12 = FUN_00a81330();
      if (iVar12 != 0) {
        FUN_00a81330();
        iVar12 = FUN_00a7c8a0();
        if (iVar12 != 0) {
          iVar12 = FUN_0083fc40();
          local_c = 0;
          if (0 < *(short *)(iVar12 + 0x324)) {
            iVar16 = 0;
            do {
              iVar14 = *(int *)(iVar12 + 800);
              iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
              if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Head"), iVar13 != 0)) {
                puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_c = local_c + 1;
              iVar16 = iVar16 + 0x70;
            } while (local_c < *(short *)(iVar12 + 0x324));
          }
        }
      }
      *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) & 0xfffffffb;
    }
  }
  if (*(int *)(param_1 + 0x4b0) == 0x2c70a) {
    if ((*(byte *)(param_1 + 0x1380) & 8) == 0) {
      if (bVar7) {
        FUN_00ac9420("ex_Whand");
        iVar12 = FUN_00a81330();
        if (iVar12 != 0) {
          FUN_00a81330();
          iVar12 = FUN_00a7c8a0();
          if (iVar12 != 0) {
            iVar12 = FUN_0083fc40();
            local_c = 0;
            if (0 < *(short *)(iVar12 + 0x324)) {
              iVar16 = 0;
              do {
                iVar14 = *(int *)(iVar12 + 800);
                iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
                if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Whand"), iVar13 != 0)) {
                  puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                  *puVar1 = *puVar1 | 1;
                }
                local_c = local_c + 1;
                iVar16 = iVar16 + 0x70;
              } while (local_c < *(short *)(iVar12 + 0x324));
            }
          }
        }
        pcVar2 = *(code **)(*(int *)(param_1 + 0x10c0) + 8);
        *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) | 8;
        (*pcVar2)(0x3f800000,0,0);
        FUN_00855a10(10,param_1 + 0x10c0);
      }
      *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) & 0xfffffff7;
    }
    else if (!bVar7) {
      if ((*(byte *)(param_1 + 0x1384) & 8) == 0) {
        (**(code **)(*(int *)(param_1 + 0x10c0) + 8))(0x3f800000,0,0);
        FUN_00855a10(0x10,param_1 + 0x10c0);
        *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) | 8;
        *(undefined4 *)(param_1 + 0xe9c) = 0x42480000;
      }
      fVar3 = *(float *)(param_1 + 0xe9c) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0xe9c) = fVar3;
      if (fVar3 < 0.0) {
        FUN_00ac94e0("ex_Whand");
        iVar12 = FUN_0083fc40();
        if (iVar12 != 0) {
          iVar12 = FUN_0083fc40();
          local_c = 0;
          if (0 < *(short *)(iVar12 + 0x324)) {
            iVar16 = 0;
            do {
              iVar14 = *(int *)(iVar12 + 800);
              iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
              if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Whand"), iVar13 != 0)) {
                puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_c = local_c + 1;
              iVar16 = iVar16 + 0x70;
            } while (local_c < *(short *)(iVar12 + 0x324));
          }
        }
        *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) & 0xfffffff7;
      }
      if (bVar8) {
        (**(code **)(*(int *)(param_1 + 0x10c0) + 8))(0x3f800000,0,0);
        FUN_00ac94e0("ex_Whand");
        iVar12 = FUN_0083fc40();
        if (iVar12 != 0) {
          iVar12 = FUN_0083fc40();
          local_8 = 0;
          if (0 < *(short *)(iVar12 + 0x324)) {
            iVar16 = 0;
            do {
              iVar14 = *(int *)(iVar12 + 800);
              iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
              if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Whand"), iVar13 != 0)) {
                puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_8 = local_8 + 1;
              iVar16 = iVar16 + 0x70;
            } while (local_8 < *(short *)(iVar12 + 0x324));
          }
        }
        *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) & 0xfffffff7;
      }
    }
    if ((*(byte *)(param_1 + 0x1380) & 0x10) == 0) {
      if (bVar20) {
        FUN_00ac9420("ex_Body");
        iVar12 = FUN_00a81330();
        if (iVar12 != 0) {
          FUN_00a81330();
          iVar12 = FUN_00a7c8a0();
          if (iVar12 != 0) {
            iVar12 = FUN_0083fc40();
            local_8 = 0;
            if (0 < *(short *)(iVar12 + 0x324)) {
              iVar16 = 0;
              do {
                iVar14 = *(int *)(iVar12 + 800);
                iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
                if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Body"), iVar13 != 0)) {
                  puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                  *puVar1 = *puVar1 | 1;
                }
                local_8 = local_8 + 1;
                iVar16 = iVar16 + 0x70;
              } while (local_8 < *(short *)(iVar12 + 0x324));
            }
          }
        }
        pcVar2 = *(code **)(*(int *)(param_1 + 0x1170) + 8);
        *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) | 0x10;
        (*pcVar2)(0x3f800000,0,0);
        FUN_00855a10(0xc,param_1 + 0x1170);
      }
      *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) & 0xffffffef;
    }
    else if (!bVar20) {
      if ((*(byte *)(param_1 + 0x1384) & 0x10) == 0) {
        (**(code **)(*(int *)(param_1 + 0x1170) + 8))(0x3f800000,0,0);
        FUN_00855a10(0x12,param_1 + 0x1170);
        *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) | 0x10;
        *(undefined4 *)(param_1 + 0xea0) = 0x42480000;
      }
      fVar3 = *(float *)(param_1 + 0xea0) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0xea0) = fVar3;
      if (fVar3 < 0.0) {
        FUN_00ac94e0("ex_Body");
        iVar12 = FUN_0083fc40();
        if (iVar12 != 0) {
          iVar12 = FUN_0083fc40();
          local_8 = 0;
          if (0 < *(short *)(iVar12 + 0x324)) {
            iVar16 = 0;
            do {
              iVar14 = *(int *)(iVar12 + 800);
              iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
              if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Body"), iVar13 != 0)) {
                puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_8 = local_8 + 1;
              iVar16 = iVar16 + 0x70;
            } while (local_8 < *(short *)(iVar12 + 0x324));
          }
        }
        *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) & 0xffffffef;
      }
      if (bVar9) {
        (**(code **)(*(int *)(param_1 + 0x1170) + 8))(0x3f800000,0,0);
        FUN_00ac94e0("ex_Body");
        iVar12 = FUN_0083fc40();
        if (iVar12 != 0) {
          iVar12 = FUN_0083fc40();
          local_4 = 0;
          if (0 < *(short *)(iVar12 + 0x324)) {
            iVar16 = 0;
            do {
              iVar14 = *(int *)(iVar12 + 800);
              iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
              if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Body"), iVar13 != 0)) {
                puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
              local_4 = local_4 + 1;
              iVar16 = iVar16 + 0x70;
            } while (local_4 < *(short *)(iVar12 + 0x324));
          }
        }
        *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) & 0xffffffef;
      }
    }
    if (*(int *)(param_1 + 0x4b0) == 0x2c70a) {
      if ((*(byte *)(param_1 + 0x1380) & 0x20) == 0) {
        if (bVar10) {
          FUN_00ac9420("ex_Full");
          iVar12 = FUN_00a81330();
          if (iVar12 != 0) {
            FUN_00a81330();
            iVar12 = FUN_00a7c8a0();
            if (iVar12 != 0) {
              iVar12 = FUN_0083fc40();
              local_4 = 0;
              if (0 < *(short *)(iVar12 + 0x324)) {
                iVar16 = 0;
                do {
                  iVar14 = *(int *)(iVar12 + 800);
                  iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
                  if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Full"), iVar13 != 0)) {
                    puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                    *puVar1 = *puVar1 | 1;
                  }
                  local_4 = local_4 + 1;
                  iVar16 = iVar16 + 0x70;
                } while (local_4 < *(short *)(iVar12 + 0x324));
              }
            }
          }
          pcVar2 = *(code **)(*(int *)(param_1 + 0x1220) + 8);
          *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) | 0x20;
          (*pcVar2)(0x3f800000,0,0);
          FUN_00855a10(0xd,param_1 + 0x1220);
        }
        *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) & 0xffffffdf;
      }
      else if (!bVar10) {
        if ((*(byte *)(param_1 + 0x1384) & 0x20) == 0) {
          (**(code **)(*(int *)(param_1 + 0x1220) + 8))(0x3f800000,0,0);
          FUN_00855a10(0x13,param_1 + 0x1220);
          *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) | 0x20;
          *(undefined4 *)(param_1 + 0xea4) = 0x42480000;
        }
        fVar3 = *(float *)(param_1 + 0xea4) - *(float *)(param_1 + 0x910);
        *(float *)(param_1 + 0xea4) = fVar3;
        if (fVar3 < 0.0) {
          FUN_00ac94e0("ex_Full");
          iVar12 = FUN_0083fc40();
          if (iVar12 != 0) {
            iVar12 = FUN_0083fc40();
            local_4 = 0;
            if (0 < *(short *)(iVar12 + 0x324)) {
              iVar16 = 0;
              do {
                iVar14 = *(int *)(iVar12 + 800);
                iVar13 = *(int *)(*(int *)(iVar14 + 0x60 + iVar16) + 0x40);
                if ((iVar13 != 0) && (iVar13 = FUN_00fdbbd0(iVar13,"ex_Full"), iVar13 != 0)) {
                  puVar1 = (uint *)(iVar14 + 0x38 + iVar16);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
                local_4 = local_4 + 1;
                iVar16 = iVar16 + 0x70;
              } while (local_4 < *(short *)(iVar12 + 0x324));
            }
          }
          *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) & 0xffffffdf;
        }
      }
      if ((*(byte *)(param_1 + 0x1380) & 0x40) == 0) {
        if (iVar11 != 0) {
          FUN_00ac9420("ex_weak");
          iVar11 = FUN_00a81330();
          if (iVar11 != 0) {
            FUN_00a81330();
            iVar11 = FUN_00a7c8a0();
            if (iVar11 != 0) {
              iVar11 = FUN_0083fc40();
              local_4 = 0;
              if (0 < *(short *)(iVar11 + 0x324)) {
                iVar12 = 0;
                do {
                  iVar16 = *(int *)(iVar11 + 800);
                  iVar14 = *(int *)(*(int *)(iVar16 + 0x60 + iVar12) + 0x40);
                  if ((iVar14 != 0) && (iVar14 = FUN_00fdbbd0(iVar14,"ex_weak"), iVar14 != 0)) {
                    puVar1 = (uint *)(iVar16 + 0x38 + iVar12);
                    *puVar1 = *puVar1 | 1;
                  }
                  local_4 = local_4 + 1;
                  iVar12 = iVar12 + 0x70;
                } while (local_4 < *(short *)(iVar11 + 0x324));
              }
            }
          }
          pcVar2 = *(code **)(*(int *)(param_1 + 0x12d0) + 8);
          *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) | 0x40;
          (*pcVar2)(0x3f800000,0,0);
          FUN_00855a10(0x16,param_1 + 0x12d0);
        }
        *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) & 0xffffffbf;
        return;
      }
      if (iVar11 == 0) {
        if ((*(byte *)(param_1 + 0x1384) & 0x40) == 0) {
          (**(code **)(*(int *)(param_1 + 0x12d0) + 8))(0x3f800000,0,0);
          FUN_00855a10(0x17,param_1 + 0x12d0);
          *(uint *)(param_1 + 0x1384) = *(uint *)(param_1 + 0x1384) | 0x40;
          *(undefined4 *)(param_1 + 0xea8) = 0x42480000;
        }
        fVar3 = *(float *)(param_1 + 0xea8) - *(float *)(param_1 + 0x910);
        *(float *)(param_1 + 0xea8) = fVar3;
        if (fVar3 < 0.0) {
          FUN_00ac94e0("ex_weak");
          iVar11 = FUN_0083fc40();
          if (iVar11 != 0) {
            iVar11 = FUN_0083fc40();
            local_4 = 0;
            if (0 < *(short *)(iVar11 + 0x324)) {
              iVar12 = 0;
              do {
                iVar16 = *(int *)(iVar11 + 800);
                iVar14 = *(int *)(*(int *)(iVar16 + 0x60 + iVar12) + 0x40);
                if ((iVar14 != 0) && (iVar14 = FUN_00fdbbd0(iVar14,"ex_weak"), iVar14 != 0)) {
                  puVar1 = (uint *)(iVar16 + 0x38 + iVar12);
                  *puVar1 = *puVar1 & 0xfffffffe;
                }
                local_4 = local_4 + 1;
                iVar12 = iVar12 + 0x70;
              } while (local_4 < *(short *)(iVar11 + 0x324));
            }
          }
          *(uint *)(param_1 + 0x1380) = *(uint *)(param_1 + 0x1380) & 0xffffffbf;
        }
      }
    }
  }
  return;
}

// 00859B10  Emc700::vf4C  size=241  [class]
void __fastcall Emc700::vf4C(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  BehaviorEmBase::vf4C();
  FUN_00854ec0();
  FUN_008578b0();
  FUN_00857cb0();
  FUN_00846c40();
  FUN_00842bf0();
  if ((((DAT_01bea060 & 0x4a000000) == 0) && (iVar1 = *(int *)(param_1 + 0xa84), iVar1 != 0)) &&
     (*(int *)(param_1 + 0x13a8) == 0)) {
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

// 00AB3DA0  Emc700::vf04  size=6  [class]
undefined * Emc700::vf04(void)

{
  return &DAT_01b35ab8;
}

// 00AB3DB0  Emc700::vf94  size=6  [class]
undefined4 Emc700::vf94(void)

{
  return 2;
}

// 00AB3DC0  FUN_00ab3dc0  size=143  [callgraph]
void FUN_00ab3dc0(void)

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
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00ABA030  Emc700::vf00  size=30  [class]
undefined4 __thiscall Emc700::vf00(undefined4 param_1,byte param_2)

{
  FUN_00ab3dc0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


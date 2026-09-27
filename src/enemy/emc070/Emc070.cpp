// src/enemy/emc070/Emc070.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00798AF0..00AB9E50, 255 functions

#include "types.h"

// 00798AF0  FUN_00798af0  size=23  [callgraph]
undefined4 __fastcall FUN_00798af0(int param_1)

{
  if (((*(byte *)(param_1 + 0x155a) & 0x10) != 0) && ((*(byte *)(param_1 + 0x155a) & 8) != 0)) {
    return 1;
  }
  return 0;
}

// 00798B30  FUN_00798b30  size=18  [callgraph]
undefined4 __fastcall FUN_00798b30(int param_1)

{
  if ((*(byte *)(param_1 + 0x155a) & 6) == 0) {
    return 0;
  }
  return 1;
}

// 00798B50  FUN_00798b50  size=55  [callgraph]
void __fastcall FUN_00798b50(int param_1)

{
  short sVar1;
  
  sVar1 = FUN_00dde2d0(0,*(undefined2 *)(param_1 + 0x1588));
  *(int *)(param_1 + 0x1400) =
       (int)sVar1 + *(int *)(param_1 + 0x1590) * *(int *)(param_1 + 0x1404) +
       *(int *)(param_1 + 0x1584);
  return;
}

// 00798B90  FUN_00798b90  size=27  [callgraph]
void __fastcall FUN_00798b90(int param_1)

{
  *(int *)(param_1 + 0x1404) = *(int *)(param_1 + 0x1404) + 1;
  if (*(int *)(param_1 + 0x158c) <= *(int *)(param_1 + 0x1404)) {
    *(int *)(param_1 + 0x1404) = *(int *)(param_1 + 0x158c);
  }
  return;
}

// 00798BD0  FUN_00798bd0  size=28  [callgraph]
void FUN_00798bd0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 00798BF0  Emc070::vf108  size=13  [class]
void __fastcall Emc070::vf108(int *param_1)

{
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00798C10  Emc070::vf30  size=139  [class]
void __fastcall Emc070::vf30(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  float10 fVar5;
  
  BehaviorEmBase::vf30();
  iVar2 = *(int *)(param_1 + 0x588);
  if (iVar2 != 0) {
    uVar3 = FUN_009f8b40();
    *(undefined4 *)(iVar2 + 0x34) = 1;
    *(undefined4 *)(iVar2 + 0x38) = uVar3;
    if (*(int *)(param_1 + 0xe94) != 0) {
      iVar2 = *(int *)(param_1 + 0x588);
      uVar3 = FUN_00a95d20(0);
      fVar5 = (float10)FUN_00a958c0(0);
      puVar4 = (undefined1 *)FUN_00a95df0(0);
      *(undefined4 *)(iVar2 + 0xc) = 1;
      *(undefined1 *)(iVar2 + 0x14) = *puVar4;
      *(undefined1 *)(iVar2 + 0x15) = puVar4[1];
      *(undefined1 *)(iVar2 + 0x16) = puVar4[2];
      uVar1 = puVar4[3];
      *(float *)(iVar2 + 0x1c) = (float)fVar5;
      *(undefined4 *)(iVar2 + 0x20) = uVar3;
      *(undefined1 *)(iVar2 + 0x17) = uVar1;
      *(undefined1 *)(iVar2 + 0x18) = 0;
    }
  }
  return;
}

// 00798CA0  Emc070::vf184  size=6  [class]
undefined4 Emc070::vf184(void)

{
  return 0xffffffff;
}

// 00798CB0  Emc070::vf188  size=93  [class]
void __thiscall Emc070::vf188(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_2 == 9) {
      FUN_00a8caf0(99,0,0,0);
      (**(code **)(*param_1 + 0x220))(0x41200000);
    }
  }
  return;
}

// 00798D10  FUN_00798d10  size=45  [between]
void __fastcall FUN_00798d10(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      FUN_00a8caf0(9,0,0,0);
    }
  }
  return;
}

// 00798D40  FUN_00798d40  size=45  [between]
void __fastcall FUN_00798d40(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      FUN_00a8caf0(9,0,0,0);
    }
  }
  return;
}

// 00798D70  FUN_00798d70  size=45  [between]
void __fastcall FUN_00798d70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      FUN_00a8caf0(9,0,0,0);
    }
  }
  return;
}

// 00798DA0  FUN_00798da0  size=129  [between]
void __fastcall FUN_00798da0(int *param_1)

{
  (**(code **)(*param_1 + 0x318))();
  (**(code **)(*param_1 + 0x220))(0x41200000);
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xd5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00798E40  FUN_00798e40  size=299  [between]
void __fastcall FUN_00798e40(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(6,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    sVar2 = FUN_00dde2d0(0,0x78);
    param_1[0x248] = (int)((float)(int)sVar2 + 120.0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x47e] == 0)) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0xcb,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = 0;
      return;
    }
  }
  return;
}

// 00798F80  FUN_00798f80  size=293  [between]
void __fastcall FUN_00798f80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x314))();
  uVar2 = 0x14;
  if (param_1[0x187] == 0) {
    iVar1 = param_1[0x186];
    if (iVar1 == 0xc) {
      uVar2 = 0x1b;
    }
    if (iVar1 == 0xd) {
      uVar2 = 0x1c;
    }
    if (iVar1 == 0xe) {
      uVar2 = 0x1d;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x249] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0079902c;
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0079902c:
  if (param_1[0x186] == 0xc) {
    FUN_00a8e880(param_1 + 0x54c);
  }
  if (param_1[0x186] == 0xd) {
    FUN_00a8e880(param_1 + 0x54c);
  }
  if (param_1[0x186] == 0xe) {
    FUN_00a8e880(param_1 + 0x54c);
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  return;
}

// 007990C0  FUN_007990c0  size=44  [between]
void __fastcall FUN_007990c0(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x11,0,0,0);
  }
  return;
}

// 007990F0  FUN_007990f0  size=105  [between]
void __fastcall FUN_007990f0(int *param_1)

{
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x25,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00799170  FUN_00799170  size=132  [between]
void __fastcall FUN_00799170(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x26,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007991f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00799230  FUN_00799230  size=163  [between]
void __fastcall FUN_00799230(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x87,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3fc00000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007992d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007992E0  FUN_007992e0  size=160  [between]
void __fastcall FUN_007992e0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x94,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x31,0,0,0);
  }
  return;
}

// 00799380  FUN_00799380  size=132  [between]
void __fastcall FUN_00799380(int *param_1)

{
  (**(code **)(*param_1 + 0x314))();
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x95,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00799410  FUN_00799410  size=156  [between]
void __fastcall FUN_00799410(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x96,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007994aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007994B0  FUN_007994b0  size=212  [between]
void __fastcall FUN_007994b0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xaf,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x225] = 0x3e800000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x289] = 0x41200000;
    param_1[0x288] = 1;
    (**(code **)(*param_1 + 0x220))(0x41000000);
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x39,0,0,0);
  }
  return;
}

// 00799590  FUN_00799590  size=182  [between]
void __fastcall FUN_00799590(int param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0xac,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x894) = 0x3dcccccd;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0xa24) = 0x41700000;
    *(undefined4 *)(param_1 + 0xa20) = 1;
    FUN_008e5c50(7);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x39,0,0,0);
  }
  return;
}

// 00799650  FUN_00799650  size=171  [between]
void __fastcall FUN_00799650(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x318);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xab,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x225] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0x39,0,0,0);
  }
  return;
}

// 00799700  FUN_00799700  size=58  [between]
void __fastcall FUN_00799700(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x3a,0,0,0);
  }
  return;
}

// 00799740  FUN_00799740  size=147  [between]
void __fastcall FUN_00799740(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xb0,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x314);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)();
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007997E0  FUN_007997e0  size=151  [between]
void __fastcall FUN_007997e0(int param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0xb1,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e5c50(7);
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x3b,0,0,0);
  }
  return;
}

// 00799880  FUN_00799880  size=425  [between]
void __fastcall FUN_00799880(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  float10 fVar5;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  param_1[0x56f] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    param_1[0x250] = 0;
    uVar4 = 0x98;
    if (1.5707964 < (float)param_1[0x2a8]) {
      uVar4 = 0x99;
      param_1[0x250] = 1;
    }
    FUN_00aa4080(uVar4,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x308);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x3f800000,0x393702d3,0x40490fdb,0);
    if (param_1[0x250] != 0) {
      fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
      param_1[0x25] = (int)(float)fVar5;
    }
    param_1[0x225] = 0x3dcccccd;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00a8caf0(0x3c,0,0,0);
    if (param_1[0x250] != 0) {
      FUN_00a8caf0(0x3b,0,0,0);
    }
    if (param_1[0x3a6] == 0xc) {
      uVar2 = param_1[0x3a7];
      if ((uVar2 & 1) == 0) {
        if ((uVar2 & 6) == 0) {
          return;
        }
        if ((uVar2 & 0x18) == 0) {
          param_1[0x128] = 1;
          FUN_00a8caf0(0x15,0,0,0);
          return;
        }
      }
      FUN_00a8caf0(0x50,0,0,0);
    }
  }
  return;
}

// 00799A30  FUN_00799a30  size=615  [between]
void __fastcall FUN_00799a30(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  (*pcVar2)();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x9b,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00798b50();
    param_1[0x501] = param_1[0x501] + 1;
    if (param_1[0x563] <= param_1[0x501]) {
      param_1[0x501] = param_1[0x563];
    }
    param_1[0x566] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x540] = 0x40800000;
    *(undefined2 *)(param_1 + 0x209) = 3;
    param_1[0x20a] = 0x78;
    return;
  case 2:
    FUN_00aa4080(0x9c,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42700000;
    iVar3 = FUN_00ac4780();
    if (iVar3 == 0) {
      param_1[0x248] = 0x43960000;
    }
    iVar3 = FUN_00ac4780();
    if (2 < iVar3) {
      param_1[0x248] = 0x41200000;
    }
    FUN_00798b50();
    param_1[0x566] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x540] = 0x40800000;
    *(undefined2 *)(param_1 + 0x209) = 3;
    param_1[0x20a] = 0x78;
    return;
  case 4:
    FUN_00aa4080(0x9d,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00798b50();
    param_1[0x566] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_00798b50();
      param_1[0x566] = 0;
      return;
    }
  default:
    return;
  }
}

// 00799CB0  FUN_00799cb0  size=395  [between]
void __fastcall FUN_00799cb0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  (*pcVar2)();
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x8f,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00798b50();
    param_1[0x501] = param_1[0x501] + 1;
    if (param_1[0x563] <= param_1[0x501]) {
      param_1[0x501] = param_1[0x563];
    }
    param_1[0x248] = 0x43700000;
    param_1[0x566] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x90,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00798b50();
    param_1[0x566] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_00798b50();
      param_1[0x566] = 0;
      return;
    }
  }
  return;
}

// 00799E50  FUN_00799e50  size=437  [between]
void __fastcall FUN_00799e50(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x8f,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00798b50();
    param_1[0x501] = param_1[0x501] + 1;
    if (param_1[0x563] <= param_1[0x501]) {
      param_1[0x501] = param_1[0x563];
    }
    param_1[0x248] = 0x44610000;
    param_1[0x566] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
    goto LAB_00799ef6;
  case 1:
LAB_00799ef6:
    (**(code **)(*param_1 + 0x318))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) ||
       (iVar3 = (**(code **)(*param_1 + 400))(), iVar3 == 0)) {
      pcVar2 = *(code **)(*param_1 + 0x314);
      param_1[0x187] = param_1[0x187] + 1;
      (*pcVar2)();
    }
    *(undefined2 *)(param_1 + 0x209) = 4;
    param_1[0x20a] = 0x78;
    return;
  case 2:
    FUN_00aa4080(0x90,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00798b50();
    param_1[0x566] = 0;
    break;
  case 3:
    break;
  default:
    goto switchD_00799e6b_default;
  }
  (**(code **)(*param_1 + 0x314))();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00798b50();
    param_1[0x566] = 0;
    return;
  }
switchD_00799e6b_default:
  return;
}

// 0079A020  FUN_0079a020  size=357  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0079a020(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  short sVar4;
  int aiStack_8 [2];
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  (*pcVar2)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x92,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar3 = param_1[0x501];
    sVar4 = FUN_00dde2d0(0,(short)param_1[0x562]);
    iVar1 = iVar3 + 1;
    param_1[0x500] = (int)sVar4 + param_1[0x564] * iVar3 + param_1[0x561];
    param_1[0x501] = iVar1;
    if (param_1[0x563] <= iVar1) {
      param_1[0x501] = param_1[0x563];
    }
    param_1[0x566] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  aiStack_8[0] = 0;
  aiStack_8[1] = 0;
  FUN_00ac8270(param_1 + 0x10,aiStack_8,aiStack_8 + 1);
  if (aiStack_8[0] == 0) {
    pcVar2 = *(code **)(*param_1 + 0x34c);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)();
    sVar4 = FUN_00dde2d0(0,(short)param_1[0x562]);
    param_1[0x566] = 0;
    param_1[0x500] = (int)sVar4 + param_1[0x564] * param_1[0x501] + param_1[0x561];
  }
  return;
}

// 0079A190  FUN_0079a190  size=191  [between]
void __fastcall FUN_0079a190(int param_1)

{
  int iVar1;
  float fVar2;
  undefined2 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (iVar1 == 0) {
    uVar3 = 0xb4;
    if (*(int *)(param_1 + 0x618) == 0x4b) {
      uVar3 = 0xb3;
    }
    FUN_00aa4080(uVar3,0,0x3f000000,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x44610000;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00ac48e0();
    FUN_009fdde0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar2 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar2;
  if (fVar2 < 0.0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 0079A2C0  Emc070::vf34C  size=42  [class]
void __fastcall Emc070::vf34C(int param_1)

{
  FUN_00a8caf0(7,0,0,0);
  if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00a8caf0(0x15,0,0,0);
  }
  return;
}

// 0079A2F0  Emc070::vf1A4  size=218  [class]
void __thiscall Emc070::vf1A4(int param_1,int *param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00a81330();
  if ((param_3 & 1) != 0) {
    *(int *)(param_1 + 0x1428) = *(int *)(param_1 + 0x1428) + 1;
    *(undefined4 *)(param_1 + 0x1418) = 1;
    *(undefined4 *)(param_1 + 0x141c) = 1;
  }
  if ((param_3 & 8) != 0) {
    *(undefined4 *)(param_1 + 0x1424) = 1;
  }
  if ((param_3 & 6) != 0) {
    *(undefined4 *)(param_1 + 0x1420) = 1;
    iVar1 = *param_2;
    if ((((((iVar1 == 0xf7) || (iVar1 == 0xf8)) || (iVar1 == 0xf9)) ||
         ((iVar1 == 0xfa || (iVar1 == 0x100)))) || (iVar1 == 0x102)) && ((param_3 & 4) != 0)) {
      FUN_00a7c950();
      if (iVar2 != 0) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
      }
      if (((*(byte *)(param_1 + 0x155a) & 0x10) == 0) || ((*(byte *)(param_1 + 0x155a) & 8) == 0)) {
        FUN_00a8caf0(0x33,0,0,0);
        return;
      }
      FUN_00a8caf0(0x2e,0,0,0);
    }
  }
  return;
}

// 0079A3D0  Emc070::vf360  size=5  [class]
void __fastcall Emc070::vf360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00e00900();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a81330();
    FUN_00e020f0(uVar2);
    return;
  }
  FUN_00e020f0(*(undefined4 *)(param_1 + 0x4f0));
  return;
}

// 0079A3E0  Emc070::vf2C  size=63  [class]
void Emc070::vf2C(void)

{
  FUN_00eaa6e0(0x41100000,0);
  FUN_00eaa6e0(0x41200000,0);
  return;
}

// 0079A460  FUN_0079a460  size=35  [between]
bool __fastcall FUN_0079a460(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 0079A490  FUN_0079a490  size=124  [between]
void __thiscall FUN_0079a490(int *param_1,int param_2)

{
  if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
    (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
  }
  param_1[0x569] = 0x3f800000;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(0x193,0);
  }
  *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 4;
  FUN_00ac8dd0("_R_leg",1);
  FUN_00ac9420("_EFD03");
  return;
}

// 0079A510  FUN_0079a510  size=124  [between]
void __thiscall FUN_0079a510(int *param_1,int param_2)

{
  if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
    (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
  }
  param_1[0x569] = 0x3f800000;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(0x194,0);
  }
  *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 2;
  FUN_00ac8dd0("_L_leg",1);
  FUN_00ac9420("_EFD04");
  return;
}

// 0079A590  FUN_0079a590  size=124  [between]
void __thiscall FUN_0079a590(int *param_1,int param_2)

{
  if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
    (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
  }
  param_1[0x569] = 0x3f800000;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(0x191,0);
  }
  *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 0x10;
  FUN_00ac8dd0("_R_arm",1);
  FUN_00ac9420("_EFD01");
  return;
}

// 0079A610  FUN_0079a610  size=124  [between]
void __thiscall FUN_0079a610(int *param_1,int param_2)

{
  if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
    (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
  }
  param_1[0x569] = 0x3f800000;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(0x192,0);
  }
  *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 8;
  FUN_00ac8dd0("_L_arm",1);
  FUN_00ac9420("_EFD02");
  return;
}

// 0079A690  FUN_0079a690  size=35  [between]
bool __fastcall FUN_0079a690(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 0079A6C0  FUN_0079a6c0  size=35  [between]
bool __fastcall FUN_0079a6c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 0079A6F0  FUN_0079a6f0  size=35  [between]
bool __fastcall FUN_0079a6f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 0079A720  FUN_0079a720  size=35  [between]
bool __fastcall FUN_0079a720(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 0079A750  FUN_0079a750  size=35  [between]
bool __fastcall FUN_0079a750(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 0079A780  FUN_0079a780  size=35  [between]
bool __fastcall FUN_0079a780(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 0079A870  FUN_0079a870  size=83  [between]
bool __fastcall FUN_0079a870(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_00ac4d60(1);
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x15b4) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x155a) & 0x10;
    if ((bVar1 == 0) || ((*(byte *)(param_1 + 0x155a) & 8) == 0)) {
      if (bVar1 != 0) {
        iVar2 = FUN_007a02f0();
        return iVar2 != 0;
      }
      FUN_00a8caf0(0x28,0,0,0);
      return true;
    }
  }
  return false;
}

// 0079A8D0  FUN_0079a8d0  size=63  [between]
undefined4 __fastcall FUN_0079a8d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4d60(1);
  if ((((iVar1 == 0) && (*(int *)(param_1 + 0x15b4) != 0)) &&
      ((*(byte *)(param_1 + 0x155a) & 0x10) == 0)) && ((*(byte *)(param_1 + 0x155a) & 8) == 0)) {
    FUN_00a8caf0(0x29,0,0,0);
    return 1;
  }
  return 0;
}

// 0079A910  FUN_0079a910  size=40  [between]
undefined4 __fastcall FUN_0079a910(int param_1)

{
  if ((*(int *)(param_1 + 0x15b4) == 0) && ((*(byte *)(param_1 + 0x155a) & 8) == 0)) {
    FUN_00a8caf0(0x22,0,0,0);
    return 1;
  }
  return 0;
}

// 0079A940  FUN_0079a940  size=40  [between]
undefined4 __fastcall FUN_0079a940(int param_1)

{
  if ((*(int *)(param_1 + 0x15b4) == 0) && ((*(byte *)(param_1 + 0x155a) & 0x10) == 0)) {
    FUN_00a8caf0(0x21,0,0,0);
    return 1;
  }
  return 0;
}

// 0079A970  FUN_0079a970  size=36  [between]
undefined4 __fastcall FUN_0079a970(int param_1)

{
  if (((*(byte *)(param_1 + 0x155a) & 0x10) != 0) && ((*(byte *)(param_1 + 0x155a) & 8) != 0)) {
    return 0;
  }
  FUN_00a8caf0(8,0,0,0);
  return 1;
}

// 0079A9A0  FUN_0079a9a0  size=36  [between]
undefined4 __fastcall FUN_0079a9a0(int param_1)

{
  if (((*(byte *)(param_1 + 0x155a) & 0x10) != 0) && ((*(byte *)(param_1 + 0x155a) & 8) != 0)) {
    return 0;
  }
  FUN_00a8caf0(0x24,0,0,0);
  return 1;
}

// 0079A9D0  FUN_0079a9d0  size=115  [between]
/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_0079a9d0(int param_1,int param_2)

{
  int local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 0;
  FUN_00ac81f0(param_1 + 0x40,local_8,local_8 + 1);
  if (local_8[0] != 0) {
    if (param_2 != 0) {
      *(undefined2 *)(param_1 + 0x824) = 1;
      *(undefined4 *)(param_1 + 0x828) = 0x78;
    }
    FUN_00a8caf0(0x41,0,0,0);
    return 1;
  }
  return 0;
}

// 0079AA50  Emc070::vf110  size=64  [class]
void __thiscall Emc070::vf110(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  Bh0064::vf110(param_2);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  *(undefined4 *)(param_1 + 0x15d0) = param_2;
  return;
}

// 0079AA90  FUN_0079aa90  size=74  [between]
void __fastcall FUN_0079aa90(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  
  uVar1 = FUN_00fdbc60();
  sVar2 = FUN_00dde2d0(0,uVar1);
  *(float *)(param_1 + 0xf18) = (float)(int)sVar2 + *(float *)(param_1 + 0x1574);
  if (*(int *)(param_1 + 0xe80) != 0) {
    *(undefined4 *)(param_1 + 0xf18) = 0;
  }
  return;
}

// 0079AAE0  FUN_0079aae0  size=196  [between]
undefined4 __fastcall FUN_0079aae0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = BehaviorPartsModel::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = 2;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar2);
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 2;
  }
  local_18 = 0x3f666666;
  local_14 = 0x3f99999a;
  local_10 = 0x3f8ccccd;
  local_c = 0x3e4ccccd;
  local_8 = 0x40400000;
  local_4 = 0x40000000;
  FUN_00a8e4d0(&local_c,&local_18);
  return 1;
}

// 0079ACD0  FUN_0079acd0  size=136  [between]
void __thiscall FUN_0079acd0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float unaff_ESI;
  float10 fVar3;
  float fStack_38;
  float fStack_34;
  undefined4 local_30 [4];
  undefined1 local_20 [4];
  float local_1c;
  
  if (param_2 != 0) {
    switchD_0080dbae::default();
    FUN_00a8ce90(local_30,local_20);
    fVar3 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x94) + local_1c);
    *(float *)(param_1 + 0x94) = (float)fVar3;
    D3DXVec3TransformNormal(local_30,local_30,param_2 + 0x10);
    fVar1 = *(float *)(param_2 + 0x44);
    fVar2 = *(float *)(param_2 + 0x48);
    *(float *)(param_1 + 0x50) = *(float *)(param_2 + 0x40) + unaff_ESI;
    *(float *)(param_1 + 0x54) = fVar1 + fStack_38;
    *(float *)(param_1 + 0x58) = fVar2 + fStack_34;
    *(undefined4 *)(param_1 + 0x5c) = local_30[0];
  }
  return;
}

// 0079AD70  FUN_0079ad70  size=50  [between]
void __fastcall FUN_0079ad70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_009f8b10();
    FUN_00a7c950();
  }
  *(undefined4 *)(param_1 + 0x654) = 0xffffffff;
  return;
}

// 0079ADB0  FUN_0079adb0  size=120  [between]
void __fastcall FUN_0079adb0(int *param_1)

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
      param_1[0x538] = 0x42700000;
    }
  }
  return;
}

// 0079AE40  FUN_0079ae40  size=1017  [between]
void __fastcall FUN_0079ae40(int *param_1)

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
      if (param_1[0x47c] == 0) {
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
    if ((iVar3 != 0) && ((iVar3 = FUN_00ac4780(), 2 < iVar3 || (param_1[0x3a0] != 0)))) {
      uVar2 = 0x3e0f5c29;
      fVar1 = (float)param_1[0x244] * 0.13962634;
      if (param_1[0x47c] == 0) {
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
      if (param_1[0x47c] == 0) {
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
      param_1[0x538] = 0x42700000;
    }
  }
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    uVar2 = 0x3df5c28f;
    fVar1 = (float)param_1[0x244] * 0.13962634;
    if (param_1[0x47c] == 0) {
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

// 0079B280  FUN_0079b280  size=120  [between]
void __fastcall FUN_0079b280(int *param_1)

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
      param_1[0x538] = 0x42700000;
    }
  }
  return;
}

// 0079B8E0  FUN_0079b8e0  size=209  [between]
void __fastcall FUN_0079b8e0(int param_1)

{
  int iVar1;
  
  Bh0064::vf30();
  if (*(int *)(param_1 + 0x588) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x34) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x588) + 0x38) = *(undefined4 *)(param_1 + 0x87c);
    iVar1 = *(int *)(param_1 + 0x588);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x890);
    *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_1 + 0x894);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_1 + 0x898);
    *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(param_1 + 0x89c);
  }
  iVar1 = *(int *)(param_1 + 0x588);
  *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(param_1 + 0x694);
  *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(param_1 + 0x698);
  *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(param_1 + 0x69c);
  *(undefined4 *)(*(int *)(param_1 + 0x588) + 0xd0) = *(undefined4 *)(param_1 + 0x6a0);
  iVar1 = *(int *)(param_1 + 0x588);
  *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(param_1 + 0x6a4);
  *(undefined4 *)(iVar1 + 0xd8) = *(undefined4 *)(param_1 + 0x6a8);
  *(undefined4 *)(iVar1 + 0xdc) = *(undefined4 *)(param_1 + 0x6ac);
  *(undefined1 *)(*(int *)(param_1 + 0x588) + 0xe0) = *(undefined1 *)(param_1 + 0x6b0);
  return;
}

// 0079B9E0  Emc070::vf260  size=10  [class]
void __fastcall Emc070::vf260(int param_1)

{
  *(byte *)(param_1 + 0x155a) = *(byte *)(param_1 + 0x155a) | 0x20;
  return;
}

// 0079B9F0  Emc070::thunk_vf1C0  size=5  [class]
void __thiscall Emc070::thunk_vf1C0(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  BehaviorEmBase::vf1C0(param_2,param_3);
  uVar1 = *(uint *)(param_1 + 0x4b0);
  if (uVar1 < 0x2c011) {
    if (uVar1 == 0x2c010) goto switchD_00a9b148_caseD_2c050;
    if (uVar1 < 0x28141) {
      if (uVar1 != 0x28140) {
        switch(uVar1) {
        case 0x28010:
        case 0x28050:
          break;
        default:
          goto switchD_00a9af52_caseD_28011;
        case 0x28030:
        case 0x28033:
        case 0x28035:
          if (*(int *)(param_1 + 0x4f0) != 0) {
            FUN_00a7c890();
          }
          FUN_00e26e90();
          uVar5 = 0x20030;
          uVar4 = 0x2803f;
          goto LAB_00a9b2ce;
        case 0x28040:
          goto switchD_00a9af52_caseD_28040;
        case 0x28070:
        case 0x28071:
          goto switchD_00a9af52_caseD_28070;
        case 0x28080:
        case 0x28081:
          goto switchD_00a9af52_caseD_28080;
        }
      }
switchD_00a9af52_caseD_28010:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x28012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2814f,0x20010);
    }
    else {
      switch(uVar1) {
      case 0x28142:
      case 0x28144:
      case 0x28160:
        goto switchD_00a9af52_caseD_28010;
      case 0x28150:
      case 0x28152:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        FUN_00e272b0(0x28012,0x20010);
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e27330(0x2815f,0x20010);
        break;
      case 0x28170:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        uVar4 = 0x28012;
        goto LAB_00a9b26a;
      case 0x28220:
        goto switchD_00a9b04c_caseD_28220;
      }
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (0x2c140 < uVar1) {
    switch(uVar1) {
    case 0x2c142:
    case 0x2c144:
    case 0x2c160:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c150:
    case 0x2c152:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x2c012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2c15f,0x20010);
      break;
    case 0x2c170:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar4 = 0x2c012;
LAB_00a9b26a:
      FUN_00e272b0(uVar4,0x20010);
      uVar4 = *(undefined4 *)(param_1 + 0x4b0);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e27330(uVar4,0x20010);
      }
      else {
        FUN_00a7c890();
        FUN_00e27330(uVar4,0x20010);
      }
      break;
    case 0x2c220:
switchD_00a9b04c_caseD_28220:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20220;
      goto LAB_00a9b2ce;
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (uVar1 == 0x2c140) {
switchD_00a9b148_caseD_2c050:
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e26e90();
    FUN_00e272b0(0x2c012,0x20010);
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e27330(0x2c14f,0x20010);
  }
  else {
    switch(uVar1) {
    case 0x2c030:
    case 0x2c033:
    case 0x2c035:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20030;
      uVar4 = 0x2c03f;
      break;
    default:
      goto switchD_00a9af52_caseD_28011;
    case 0x2c040:
switchD_00a9af52_caseD_28040:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      break;
    case 0x2c050:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c071:
switchD_00a9af52_caseD_28070:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      break;
    case 0x2c081:
switchD_00a9af52_caseD_28080:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
    }
LAB_00a9b2ce:
    FUN_00e272b0(uVar4,uVar5);
  }
switchD_00a9af52_caseD_28011:
  if (param_2 != (int *)0x0) {
    puVar6 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar6);
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00acdea0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01be9c3c;
      (**(code **)(*piVar3 + 4))(&DAT_01be9c3c);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0xdc0) = piVar3[0x370];
      }
    }
  }
  return;
}

// 0079BA00  FUN_0079ba00  size=138  [between]
void __fastcall FUN_0079ba00(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x60,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
    *(undefined4 *)(param_1 + 0xda8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xdb0) = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0079BA90  FUN_0079ba90  size=37  [between]
void __fastcall FUN_0079ba90(int param_1)

{
  if (((*(int *)(param_1 + 0x61c) != 0) && ((*(byte *)(param_1 + 0x155a) & 0x10) != 0)) &&
     ((*(byte *)(param_1 + 0x155a) & 8) != 0)) {
    FUN_00a8caf0(0x5d,0,0,0);
  }
  return;
}

// 0079BAC0  FUN_0079bac0  size=255  [between]
void __fastcall FUN_0079bac0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x62;
  if (param_1[0x187] == 0) {
    if (param_1[0x186] == 0x17) {
      uVar2 = 99;
    }
    FUN_00aa4080(uVar2,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43960000;
  }
  else if (param_1[0x187] != 1) goto LAB_0079bb69;
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0079bb69:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  }
  return;
}

// 0079BBC0  FUN_0079bbc0  size=28  [between]
void __fastcall FUN_0079bbc0(int param_1)

{
  if (((*(byte *)(param_1 + 0x155a) & 0x10) != 0) && ((*(byte *)(param_1 + 0x155a) & 8) != 0)) {
    FUN_00a8caf0(0x5d,0,0,0);
  }
  return;
}

// 0079BBE0  FUN_0079bbe0  size=37  [between]
void __fastcall FUN_0079bbe0(int param_1)

{
  if (((*(int *)(param_1 + 0x61c) != 0) && ((*(byte *)(param_1 + 0x155a) & 0x10) != 0)) &&
     ((*(byte *)(param_1 + 0x155a) & 8) != 0)) {
    FUN_00a8caf0(0x5d,0,0,0);
  }
  return;
}

// 0079BC10  FUN_0079bc10  size=275  [between]
void __fastcall FUN_0079bc10(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x6b;
  if (param_1[0x187] == 0) {
    sVar1 = FUN_00dde2d0(0,1);
    if (((sVar1 != 0) || ((*(byte *)((int)param_1 + 0x155a) & 0x10) != 0)) &&
       (uVar3 = 0x6c, (*(byte *)((int)param_1 + 0x155a) & 8) != 0)) {
      uVar3 = 0x6b;
    }
    FUN_00aa4080(uVar3,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x507] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0079bccc;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0079bccc:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0079BD50  FUN_0079bd50  size=345  [between]
void __fastcall FUN_0079bd50(int *param_1)

{
  int iVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  
  (**(code **)(*param_1 + 0x314))();
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  param_1[0x56f] = 1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x72,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar1 = param_1[0x501];
    sVar3 = FUN_00dde2d0(0,0x28);
    param_1[0x248] = 0x43700000;
    param_1[0x500] = (sVar3 + 0x3c) * iVar1;
    param_1[0x501] = iVar1 + 1;
    param_1[0x566] = 0;
    if (param_1[0x186] == 0x49) {
      param_1[0x248] = 0x44610000;
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar2 = (float)param_1[0x248] - (float)param_1[0x244];
  param_1[0x248] = (int)fVar2;
  uVar4 = (uint)(ushort)((ushort)(0.0 < fVar2) << 8 | (ushort)(fVar2 == 0.0) << 0xe);
  if (param_1[0x186] == 0x49) {
    if (0.0 >= fVar2 && (fVar2 == 0.0) == 0) goto LAB_0079be6f;
    uVar4 = (**(code **)(*param_1 + 400))();
  }
  if (uVar4 != 0) {
    return;
  }
LAB_0079be6f:
  (**(code **)(*param_1 + 0x34c))();
  sVar3 = FUN_00dde2d0(0,0x28);
  param_1[0x566] = 0;
  param_1[0x500] = (sVar3 + 0x3c) * param_1[0x501];
  return;
}

// 0079BEC0  Emc070::vf294  size=1  [class]
void Emc070::vf294(void)

{
  return;
}

// 0079BED0  Emc070::vf298  size=21  [class]
void __fastcall Emc070::vf298(int param_1)

{
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xdfffffff;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x40000000;
  return;
}

// 0079BEF0  Emc070::vf29C  size=54  [class]
void __fastcall Emc070::vf29C(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xdfffffff;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x40000000;
  iVar1 = *(int *)(param_1 + 0x618);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    FUN_00a8caf0(7,2,0,0);
  }
  return;
}

// 0079BF30  Emc070::vf2A0  size=54  [class]
void __fastcall Emc070::vf2A0(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xdfffffff;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x40000000;
  iVar1 = *(int *)(param_1 + 0x618);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    FUN_00a8caf0(9,0,0,0);
  }
  return;
}

// 0079BF70  Emc070::vf2A4  size=21  [class]
void __fastcall Emc070::vf2A4(int param_1)

{
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xbfffffff;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x20000000;
  return;
}

// 0079BF90  Emc070::vf2A8  size=43  [class]
void __fastcall Emc070::vf2A8(int *param_1)

{
  param_1[0x3a9] = param_1[0x3a9] & 0xbfffffff;
  param_1[0x3a9] = param_1[0x3a9] | 0x20000000;
  if ((DAT_01bea060 & 0x2000000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0079bfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 0079BFC0  Emc070::vf2AC  size=21  [class]
void __fastcall Emc070::vf2AC(int param_1)

{
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0xbfffffff;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x20000000;
  return;
}

// 0079BFE0  Emc070::vf2B0  size=1  [class]
void Emc070::vf2B0(void)

{
  return;
}

// 0079BFF0  Emc070::vf2B4  size=1  [class]
void Emc070::vf2B4(void)

{
  return;
}

// 0079C000  Emc070::vf2B8  size=1  [class]
void Emc070::vf2B8(void)

{
  return;
}

// 0079C010  Emc070::vf2BC  size=1  [class]
void Emc070::vf2BC(void)

{
  return;
}

// 0079C020  Emc070::vf2C0  size=1  [class]
void Emc070::vf2C0(void)

{
  return;
}

// 0079C030  Emc070::vf2C4  size=1  [class]
void Emc070::vf2C4(void)

{
  return;
}

// 0079C040  Emc070::vf2C8  size=1  [class]
void Emc070::vf2C8(void)

{
  return;
}

// 0079C050  Emc070::vf2CC  size=1  [class]
void Emc070::vf2CC(void)

{
  return;
}

// 0079C060  Emc070::vf2D0  size=1  [class]
void Emc070::vf2D0(void)

{
  return;
}

// 0079C070  Emc070::vf2D4  size=6  [class]
undefined4 Emc070::vf2D4(void)

{
  return 1;
}

// 0079C0B0  FUN_0079c0b0  size=95  [callgraph]
void __fastcall FUN_0079c0b0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0163d9a8), iVar3 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
        *puVar1 = *puVar1 | 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x70;
    } while (iVar5 < *(short *)(param_1 + 0x324));
  }
  *(undefined4 *)(param_1 + 0x8c0) = 1;
  return;
}

// 0079C120  FUN_0079c120  size=42  [callgraph]
uint FUN_0079c120(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b358ec;
  (**(code **)(*param_1 + 4))(&DAT_01b358ec);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0079C1E0  FUN_0079c1e0  size=178  [callgraph]
void __fastcall FUN_0079c1e0(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_38 [6];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = (int)*(char *)(param_1 + 0xbab);
  if ((*(uint *)(param_1 + 0x4a8) & 8) != 0) {
    iVar3 = 0;
  }
  if ((*(uint *)(param_1 + 0x4a8) & 0x10) != 0) {
    iVar3 = 6;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x4f0);
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[0] = 2;
  local_20 = 0;
  local_38[1] = 2;
  local_1c = 0;
  puVar5 = local_38 + 2;
  local_18 = 0;
  puVar4 = &local_20;
  uVar8 = 0xbf800000;
  uVar7 = 0x3f000000;
  uVar6 = 0x41200000;
  sVar1 = FUN_00dde2d0(0,1);
  uVar2 = FUN_0093c1f0(iVar3,uVar2,2,local_38[sVar1],puVar4,puVar5,uVar6,uVar7,uVar8);
  *(undefined4 *)(param_1 + 0x15ac) = uVar2;
  return;
}

// 0079C2A0  Emc070::vf44  size=278  [class]
void __fastcall Emc070::vf44(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      HkRemovePhysicsSystem::HkRemovePhysicsSystem();
      if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
        *(undefined4 *)(param_1 + 0x7b0) = 0;
      }
    }
  }
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  if (*(int *)(param_1 + 0x1504) != 0) {
    FUN_00eaa6e0(0x3f800000,0);
    *(undefined4 *)(param_1 + 0x1504) = 0;
  }
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  FUN_00a934c0();
  FUN_00a92a00();
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  RayCastManager::getWork(param_1 + 0x11f4);
  RayCastManager::getWork(param_1 + 0xee0);
  RayCastManager::getWork(param_1 + 0xee8);
  RayCastManager::getWork(param_1 + 0xef0);
  RayCastManager::getWork(param_1 + 0xef8);
  BehaviorEmBase::vf44();
  return;
}

// 0079C3C0  Emc070::vf264  size=561  [class]
undefined4 __thiscall Emc070::vf264(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_c [12];
  
  FUN_0040ac60(param_2);
  param_1[0x554] = param_1[0x2e1];
  if (param_1[0x2e1] != 0) {
    param_1[0x550] = param_1[0x2e3];
    param_1[0x551] = param_1[0x2e4];
    param_1[0x552] = param_1[0x2e5];
    param_1[0x553] = 0x3f800000;
    param_1[0x555] = param_1[0x2e2];
  }
  FUN_00aa0ba0(param_1[0x2c2],param_1[0x2e7]);
  if (param_1[0x2c2] != -1) {
    FUN_00a8caf0(0,0,0,0);
  }
  FUN_00aa0920(*(undefined4 *)(param_2 + 0x5c));
  if (*(int *)(param_1[0x1f6] + 0x810) != 0) {
    FUN_00a8d580(0x40000);
  }
  if (param_1[0x2c9] != -1) {
    FUN_00a8caf0(6,0,0,0);
    iVar1 = FUN_00d46690((char)param_1[0x2c9]);
    if (iVar1 == 0) {
      FUN_009f8ea0(local_c,10,param_1[300],0);
      FUN_00dd5650(&DAT_0163d460,local_c,param_1[0x2c9]);
      (**(code **)(*param_1 + 0x34c))();
    }
    else {
      FUN_00a5dcc0(iVar1);
      param_1[0x128] = 3;
    }
  }
  if (param_1[0x360] != 0) {
    if (0.0 < (float)param_1[0x2ed]) {
      iVar1 = param_1[0x360];
      *(float *)(iVar1 + 0xc) = (float)param_1[0x2eb] * 0.017453292;
      *(float *)(iVar1 + 0x10) = (float)param_1[0x2ec] * 0.017453292;
      *(int *)(iVar1 + 0x14) = param_1[0x2ed];
      iVar1 = param_1[0x360];
      *(float *)(iVar1 + 0x30) = (float)param_1[0x2eb] * 0.017453292;
      *(float *)(iVar1 + 0x34) = (float)param_1[0x2ec] * 0.017453292;
      *(int *)(iVar1 + 0x38) = param_1[0x2ed];
    }
    if (0.0 < (float)param_1[0x2f0]) {
      iVar1 = param_1[0x360];
      *(float *)(iVar1 + 0x18) = (float)param_1[0x2ee] * 0.017453292;
      *(float *)(iVar1 + 0x1c) = (float)param_1[0x2ef] * 0.017453292;
      *(int *)(iVar1 + 0x20) = param_1[0x2f0];
      iVar1 = param_1[0x360];
      *(float *)(iVar1 + 0x3c) = (float)param_1[0x2ee] * 0.017453292;
      *(float *)(iVar1 + 0x40) = (float)param_1[0x2ef] * 0.017453292;
      *(int *)(iVar1 + 0x44) = param_1[0x2f0];
    }
    FUN_00a82b40(param_1[0x360],4);
    uVar2 = FUN_00a82d50();
    FUN_00a85340(uVar2);
  }
  return 1;
}

// 0079C600  FUN_0079c600  size=274  [between]
undefined4 __fastcall FUN_0079c600(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  int local_60 [4];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar9 = FUN_00907560(param_1 + 0xee8,0,0,0,0,0,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  iVar10 = *(int *)(param_1 + 0xa84);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar5 = *(undefined4 *)(iVar10 + 0x40);
  uVar6 = *(undefined4 *)(iVar10 + 0x48);
  uVar7 = *(undefined4 *)(iVar10 + 0x4c);
  fVar8 = *(float *)(iVar10 + 0x44);
  iVar10 = FUN_009f8b40();
  local_30 = iVar10 << 0x10 | 7;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_60[1] = 0x1e;
  local_2c = 0x3ff001b;
  local_28 = 0x10;
  local_20 = "Emc070UsePath";
  local_60[0] = param_1 + 0xee8;
  local_50 = uVar1;
  local_4c = fVar2 + 0.5;
  local_48 = uVar3;
  local_44 = uVar4;
  local_40 = uVar5;
  local_3c = fVar8 + 0.5;
  local_38 = uVar6;
  local_34 = uVar7;
  HavokRayCastManager::set(local_60);
  return uVar9;
}

// 0079C720  FUN_0079c720  size=274  [between]
undefined4 __fastcall FUN_0079c720(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  int local_60 [4];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar9 = FUN_00907560(param_1 + 0xee0,0,0,0,0,0,0,0);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  iVar10 = *(int *)(param_1 + 0xa84);
  uVar3 = *(undefined4 *)(param_1 + 0x48);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  uVar5 = *(undefined4 *)(iVar10 + 0x40);
  uVar6 = *(undefined4 *)(iVar10 + 0x48);
  uVar7 = *(undefined4 *)(iVar10 + 0x4c);
  fVar8 = *(float *)(iVar10 + 0x44);
  iVar10 = FUN_009f8b40();
  local_30 = iVar10 << 0x10 | 7;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_60[1] = 0x1e;
  local_2c = 0x1b;
  local_28 = 8;
  local_20 = "Emc070Obstacle";
  local_60[0] = param_1 + 0xee0;
  local_50 = uVar1;
  local_4c = fVar2 + 0.5;
  local_48 = uVar3;
  local_44 = uVar4;
  local_40 = uVar5;
  local_3c = fVar8 + 0.5;
  local_38 = uVar6;
  local_34 = uVar7;
  HavokRayCastManager::set(local_60);
  return uVar9;
}

// 0079C840  FUN_0079c840  size=310  [between]
void __thiscall FUN_0079c840(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  iVar9 = FUN_00907640(param_1 + 0xef8,0,0);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x48);
  fVar3 = *(float *)(param_1 + 0x4c);
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  fVar8 = *(float *)(param_1 + 0x44) + 1.5;
  iVar10 = FUN_009f8b40();
  local_2c = iVar10 << 0x10 | 7;
  local_60[1] = 0x3c;
  local_28 = 0x3ff001b;
  local_24 = 0;
  local_20 = 0;
  local_1c = "Emc070NextPointView";
  local_30 = 0x3e4ccccd;
  local_60[0] = param_1 + 0xef8;
  local_50 = fVar1;
  local_4c = fVar8;
  local_48 = fVar2;
  local_44 = fVar3;
  local_40 = fVar4 - fVar1;
  local_3c = (fVar5 + 1.5) - fVar8;
  local_38 = fVar6 - fVar2;
  local_34 = fVar7 - fVar3;
  FUN_0090fb00(local_60);
  if (iVar9 != 0) {
    *(undefined4 *)(param_1 + 0xec4) = 1;
  }
  return;
}

// 0079C980  FUN_0079c980  size=273  [between]
undefined4 __fastcall FUN_0079c980(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float unaff_EBX;
  float unaff_ESI;
  float fStack_74;
  float local_70;
  int local_6c [4];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char *pcStack_28;
  
  uVar4 = FUN_00907640(param_1 + 0xef0,0,0);
  local_70 = 0.0;
  local_6c[0] = 0x3fc00000;
  local_6c[1] = 0x3f000000;
  D3DXVec3TransformNormal(&local_70,&local_70,param_1 + 0x10);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x44);
  fVar3 = *(float *)(param_1 + 0x48);
  local_70 = *(float *)(param_1 + 0x4c) + local_70;
  iVar5 = FUN_009f8b40();
  uStack_38 = iVar5 << 0x10 | 7;
  uStack_30 = 0;
  uStack_2c = 0;
  fStack_50 = local_70;
  uStack_4c = 0;
  local_6c[1] = 1;
  uStack_48 = 0xc0400000;
  uStack_34 = 0x3ff001b;
  pcStack_28 = "Em0010FloorCheck";
  uStack_44 = 0;
  fStack_40 = local_70;
  uStack_3c = 0x3e99999a;
  local_6c[0] = param_1 + 0xef0;
  fStack_5c = fVar1 + unaff_ESI;
  fStack_58 = fVar2 + unaff_EBX;
  fStack_54 = fVar3 + fStack_74;
  FUN_0090fb00(local_6c);
  return uVar4;
}

// 0079CAA0  Emc070::vf268  size=161  [class]
undefined4 __thiscall
Emc070::vf268(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    local_20 = param_4[8];
    local_1c = param_4[9];
    local_18 = param_4[10];
    local_14 = 0x3f800000;
    switch(*param_4) {
    case 1:
      FUN_00a883f0(2,0,&local_20);
      return 1;
    case 2:
      FUN_00a883f0(4,0,&local_20);
      return 1;
    case 4:
    case 9:
    case 10:
    case 0xf:
      return 1;
    case 0x15:
      FUN_00ac4710(param_4[0xb]);
      return 1;
    }
  }
  return 0;
}

// 0079CB70  FUN_0079cb70  size=316  [between]
undefined4 __thiscall FUN_0079cb70(int *param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_110 [140];
  uint local_84;
  uint local_80;
  int local_7c;
  
  uVar3 = 0;
  FUN_004105d0();
  FUN_0043e160(param_2);
  iVar1 = FUN_00ac8cd0(local_110);
  if (iVar1 != 0) {
    iVar1 = FUN_00ac8350();
    if (((local_84 & 0x400) != 0) ||
       ((local_80 & 0x20000) != 0 ||
        ((local_80 & 0x40000) != 0 || ((local_84 & 0x200) != 0 || iVar1 != 0)))) {
      if (local_7c != 0) {
        FUN_00ac8d00(param_1,local_110,0);
        param_1[0x3a9] = param_1[0x3a9] | 0x10000000;
        uVar3 = 1;
        uVar4 = 0;
        iVar1 = FUN_00a81330();
        if (iVar1 != 0) {
          uVar4 = FUN_00a7c8a0();
        }
        if ((local_80 & 0x10000) == 0) {
          pcVar2 = *(code **)(*param_1 + 0x198);
          uVar5 = 0x100;
        }
        else {
          pcVar2 = *(code **)(*param_1 + 0x198);
          uVar5 = 1;
        }
        (*pcVar2)(uVar4,param_2,uVar5);
        FUN_00a9ba90(&stack0xfffffee4);
      }
      return uVar3;
    }
  }
  return 0;
}

// 0079CCB0  FUN_0079ccb0  size=117  [between]
undefined4 __thiscall FUN_0079ccb0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_80;
  
  FUN_004105d0();
  FUN_0043e160(param_2);
  if ((local_80 & 0x10000) == 0) {
    return 0;
  }
  uVar2 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x198))(uVar2,param_2,1);
  return 1;
}

// 0079CD30  FUN_0079cd30  size=81  [between]
undefined4 FUN_0079cd30(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 local_110;
  
  FUN_004105d0();
  FUN_0043e160(param_1);
  if ((((local_110 == 0) || (local_110 == 1)) || (local_110 == 2)) ||
     ((local_110 == 0x1b0 || (uVar1 = 1, local_110 == 0x147)))) {
    uVar1 = 0;
  }
  return uVar1;
}

// 0079CD90  Emc070::vf54  size=75  [class]
void __fastcall Emc070::vf54(int param_1)

{
  float fVar1;
  float fVar2;
  
  BehaviorEmBase::vf54();
  fVar1 = *(float *)(param_1 + 0x1220) - *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x1228) - *(float *)(param_1 + 0x48);
  if (*(float *)(param_1 + 0x1214) * *(float *)(param_1 + 0x1214) < fVar2 * fVar2 + fVar1 * fVar1) {
    *(int *)(param_1 + 0x1210) = *(int *)(param_1 + 0x1210) + 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x1210) = 0;
  return;
}

// 0079CDE0  Emc070::getAttackInfo  size=639  [class]
undefined4 __thiscall Emc070::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_01647e4c);
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
  *(undefined2 *)(puVar1 + 0x21) = 0x1600;
  switch(*param_2) {
  case 4:
    *puVar1 = 0xf7;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000800;
    break;
  case 6:
    *puVar1 = 0xf8;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    goto LAB_0079d03f;
  case 8:
    *puVar1 = 0xf9;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x800000;
    break;
  case 10:
    *puVar1 = 0xfa;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    goto LAB_0079d03f;
  case 0xc:
    *puVar1 = 0xfb;
    puVar1[0x23] = puVar1[0x23] | 0x20002000;
    break;
  case 0xe:
    *puVar1 = 0xfe;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x1000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x1601;
    break;
  case 0x10:
    *puVar1 = 0xff;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x1000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x1601;
    break;
  case 0x12:
    *puVar1 = 0x100;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x1601;
    break;
  case 0x14:
    *puVar1 = 0xfc;
    puVar1[0x23] = puVar1[0x23] | 0x20002000;
    break;
  case 0x16:
    *puVar1 = 0xfd;
    puVar1[0x23] = puVar1[0x23] | 0x20002000;
    break;
  case 0x18:
    *puVar1 = 0x102;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    break;
  case 0x1a:
    *puVar1 = 0x103;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x40000;
    break;
  case 0x1c:
    *puVar1 = 0x104;
LAB_0079d03f:
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
  }
  FUN_00aa56a0(puVar1);
  return unaff_EBX;
}

// 0079D0C0  Emc070::vf14C  size=124  [class]
bool __thiscall Emc070::vf14C(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    FUN_00a7c8a0();
  }
  if ((0 < param_1[0x21c]) && (param_1[0x139] == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x274))();
    if (iVar1 == 0) {
      if (((param_2 != 0x37) && (param_2 != 0x38)) && (param_2 != 0x39)) {
        if (param_2 == 0x3a) {
          iVar1 = FUN_00a8cab0();
          return iVar1 != 99;
        }
        return param_2 == 0x3b;
      }
      return true;
    }
  }
  return false;
}

// 0079D140  FUN_0079d140  size=103  [between]
undefined4 __fastcall FUN_0079d140(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined *puVar4;
  
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar4);
    if (((iVar3 != 0) &&
        (fVar2 = *(float *)(param_1 + 0x44) + 1.0,
        fVar2 < (float)piVar1[0x11] != (fVar2 == (float)piVar1[0x11]))) &&
       ((float)piVar1[0x11] <= *(float *)(param_1 + 0x44) + 4.0)) {
      iVar3 = FUN_00a8cab0();
      if (iVar3 != 0x100017) {
        FUN_00a8cab0();
      }
    }
  }
  return 0;
}

// 0079D1B0  FUN_0079d1b0  size=204  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0079d1b0(int param_1)

{
  int iVar1;
  int local_8 [2];
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      FUN_00a8caf0(9,0,0,0);
    }
    if (*(int *)(param_1 + 0x11e8) != 0) {
      FUN_00a88b50(4,1);
      if (((*(byte *)(param_1 + 0x155a) & 0x10) == 0) && (*(int *)(param_1 + 0x15b4) == 0)) {
        FUN_00a8caf0(0x23,0,0,0);
      }
      else {
        FUN_0079a8d0();
      }
    }
    local_8[0] = 0;
    local_8[1] = 0;
    FUN_00ac81f0(param_1 + 0x40,local_8,local_8 + 1);
    if (local_8[0] != 0) {
      *(undefined2 *)(param_1 + 0x824) = 1;
      *(undefined4 *)(param_1 + 0x828) = 0x78;
      FUN_00a8caf0(0x41,0,0,0);
    }
  }
  return;
}

// 0079D280  FUN_0079d280  size=729  [between]
void __fastcall FUN_0079d280(int *param_1)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  iVar4 = param_1[0x187];
  if (iVar4 == 0) {
    FUN_00a8d6c0(param_1 + 0x10);
    param_1[0x187] = param_1[0x187] + 1;
LAB_0079d2b3:
    FUN_00aa4080(0xd3,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else {
    if (iVar4 == 1) goto LAB_0079d2b3;
    if (iVar4 != 2) goto LAB_0079d4f6;
  }
  local_2c = (float)param_1[0x544];
  local_28 = (float)param_1[0x545];
  local_24 = (float)param_1[0x546];
  FUN_00a8d790(&local_2c);
  if (param_1[0x202] == 0) {
    param_1[0x548] = param_1[0x544];
    param_1[0x549] = param_1[0x545];
    param_1[0x54a] = param_1[0x546];
    param_1[0x54b] = param_1[0x547];
    fVar1 = ((float)param_1[0x12] - local_24) * ((float)param_1[0x12] - local_24) +
            ((float)param_1[0x10] - local_2c) * ((float)param_1[0x10] - local_2c);
    if (fVar1 < 2.25 != (fVar1 == 2.25)) {
      uVar5 = 1;
      goto LAB_0079d4dc;
    }
  }
  else {
    cVar2 = FUN_00c9db20(0);
    cVar3 = FUN_00c9db20(6);
    iVar4 = FUN_00a97e60(0x3f000000,0);
    if (iVar4 == 0) {
      if (((float)param_1[0x11] + 3.0 < local_28 != ((float)param_1[0x11] + 3.0 == local_28)) &&
         (fVar1 = SQRT(((float)param_1[0x12] - local_24) * ((float)param_1[0x12] - local_24) +
                       ((float)param_1[0x10] - local_2c) * ((float)param_1[0x10] - local_2c)),
         fVar1 < 2.25 != (fVar1 == 2.25))) {
        FUN_00a8d790(&local_2c);
        param_1[0x524] = (int)local_2c;
        param_1[0x525] = (int)local_28;
        uVar5 = 3;
        param_1[0x526] = (int)local_24;
        param_1[0x527] = 0x3f800000;
        goto LAB_0079d4dc;
      }
    }
    else {
      if (cVar2 != '\0') {
        FUN_00a8caf0(1,0,0,0);
      }
      if (cVar3 != '\0') {
        FUN_00a8d790(&local_2c);
        param_1[0x524] = (int)local_2c;
        param_1[0x525] = (int)local_28;
        param_1[0x526] = (int)local_24;
        param_1[0x527] = 0x3f800000;
        FUN_00a8caf0(4,0,0,0);
      }
      cVar2 = FUN_00c9db60(1);
      if (cVar2 != '\0') {
        FUN_00a8d790(&local_2c);
        param_1[0x524] = (int)local_2c;
        param_1[0x525] = (int)local_28;
        uVar5 = 3;
        param_1[0x526] = (int)local_24;
        param_1[0x527] = 0x3f800000;
LAB_0079d4dc:
        FUN_00a8caf0(uVar5,0,0,0);
      }
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0079d4f6:
  local_20 = local_2c;
  local_1c = local_28;
  local_18 = local_24;
  local_14 = 0x3f800000;
  FUN_00a8e880(&local_20);
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  return;
}

// 0079D560  FUN_0079d560  size=189  [between]
void __fastcall FUN_0079d560(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  iVar1 = FUN_00a82d50();
  if ((iVar1 != 4) && (iVar1 = FUN_00a82d50(), iVar1 != 2)) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 3) {
      FUN_00a8caf0(10,0,0,0);
      return;
    }
    if (*(int *)(param_1 + 0x11e8) != 0) {
      FUN_00a88b50(4,1);
      if (((*(byte *)(param_1 + 0x155a) & 0x10) == 0) && (*(int *)(param_1 + 0x15b4) == 0)) {
        FUN_00a8caf0(0x23,0,0,0);
        FUN_0079a9d0(1);
        return;
      }
      FUN_0079a8d0();
    }
    FUN_0079a9d0(1);
    return;
  }
  FUN_00a8caf0(9,0,0,0);
  return;
}

// 0079D620  FUN_0079d620  size=336  [between]
void __fastcall FUN_0079d620(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_10 [4];
  
  local_10[0] = 0xcb;
  local_10[1] = 0xcb;
  local_10[2] = 0xca;
  local_10[3] = 0xca;
  if (*(int *)(param_1 + 0x61c) == 0) {
    sVar3 = FUN_00dde2d0(0,1);
    uVar5 = local_10[sVar3];
    iVar4 = FUN_00a82d50();
    if (iVar4 == 2) {
      sVar3 = FUN_00dde2d0(0,1);
      uVar5 = local_10[sVar3 + 2];
    }
    FUN_00aa4080(uVar5,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x808) == 0) {
        *(undefined4 *)(param_1 + 0x1520) = *(undefined4 *)(param_1 + 0x1510);
        *(undefined4 *)(param_1 + 0x1524) = *(undefined4 *)(param_1 + 0x1514);
        *(undefined4 *)(param_1 + 0x1528) = *(undefined4 *)(param_1 + 0x1518);
        *(undefined4 *)(param_1 + 0x152c) = *(undefined4 *)(param_1 + 0x151c);
        fVar1 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x1520);
        fVar2 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1528);
        fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
        if (fVar1 < 2.25 != (fVar1 == 2.25)) {
          *(undefined4 *)(param_1 + 0x61c) = 0;
          return;
        }
      }
      FUN_00a8caf0(0,1,0,0);
      return;
    }
  }
  return;
}

// 0079D770  FUN_0079d770  size=204  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0079d770(int param_1)

{
  int iVar1;
  int local_8 [2];
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      FUN_00a8caf0(9,0,0,0);
    }
    if (*(int *)(param_1 + 0x11e8) != 0) {
      FUN_00a88b50(4,1);
      if (((*(byte *)(param_1 + 0x155a) & 0x10) == 0) && (*(int *)(param_1 + 0x15b4) == 0)) {
        FUN_00a8caf0(0x23,0,0,0);
      }
      else {
        FUN_0079a8d0();
      }
    }
    local_8[0] = 0;
    local_8[1] = 0;
    FUN_00ac81f0(param_1 + 0x40,local_8,local_8 + 1);
    if (local_8[0] != 0) {
      *(undefined2 *)(param_1 + 0x824) = 1;
      *(undefined4 *)(param_1 + 0x828) = 0x78;
      FUN_00a8caf0(0x41,0,0,0);
    }
  }
  return;
}

// 0079D840  FUN_0079d840  size=997  [between]
void __fastcall FUN_0079d840(int *param_1)

{
  float fVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  float local_c;
  int local_8;
  float local_4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a8d6c0(param_1 + 0x10);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    goto LAB_0079d8d5;
  case 3:
    FUN_00aa4080(0xd3,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    goto LAB_0079d992;
  case 4:
LAB_0079d992:
    param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
    local_c = (float)param_1[0x544];
    local_8 = param_1[0x545];
    local_4 = (float)param_1[0x546];
    FUN_00a8d790(&local_c);
    param_1[0x3b4] = (int)local_c;
    param_1[0x3b5] = local_8;
    param_1[0x3b6] = (int)local_4;
    param_1[0x3b7] = 0x3f800000;
    if (param_1[0x202] == 0) {
      fVar1 = ((float)param_1[0x12] - local_4) * ((float)param_1[0x12] - local_4) +
              ((float)param_1[0x10] - local_c) * ((float)param_1[0x10] - local_c);
      if (fVar1 < 2.25 != (fVar1 == 2.25)) {
        uVar6 = 1;
        goto LAB_0079dbd0;
      }
    }
    else {
      cVar2 = FUN_00c9db20(0);
      cVar3 = FUN_00c9db20(6);
      iVar5 = FUN_00a97e60(0x3f000000,0);
      if (iVar5 == 0) {
        fVar1 = (float)param_1[0x248];
        if (((!NAN(fVar1) && 60.0 < fVar1 != (fVar1 == 60.0)) &&
            ((float)param_1[0x11] + 3.0 < (float)param_1[0x239] !=
             ((float)param_1[0x11] + 3.0 == (float)param_1[0x239]))) &&
           (fVar1 = SQRT(((float)param_1[0x12] - (float)param_1[0x23a]) *
                         ((float)param_1[0x12] - (float)param_1[0x23a]) +
                         ((float)param_1[0x10] - (float)param_1[0x238]) *
                         ((float)param_1[0x10] - (float)param_1[0x238])),
           fVar1 < 225.0 != (fVar1 == 225.0))) {
          local_c = (float)param_1[0x238];
          local_8 = param_1[0x239];
          local_4 = (float)param_1[0x23a];
          FUN_00a8d790(&local_c);
          param_1[0x524] = param_1[0x238];
          param_1[0x525] = param_1[0x239];
          uVar6 = 3;
          param_1[0x526] = param_1[0x23a];
          param_1[0x527] = param_1[0x23b];
          goto LAB_0079dbd0;
        }
      }
      else {
        if (cVar2 != '\0') {
          FUN_00a8caf0(1,0,0,0);
        }
        if (cVar3 != '\0') {
          FUN_00a8d790(&local_c);
          param_1[0x524] = (int)local_c;
          param_1[0x525] = local_8;
          param_1[0x526] = (int)local_4;
          param_1[0x527] = 0x3f800000;
          FUN_00a8caf0(4,0,0,0);
        }
        cVar2 = FUN_00c9db60(1);
        if (cVar2 != '\0') {
          FUN_00a8d790(&local_c);
          param_1[0x524] = (int)local_c;
          param_1[0x525] = local_8;
          uVar6 = 3;
          param_1[0x526] = (int)local_4;
          param_1[0x527] = 0x3f800000;
LAB_0079dbd0:
          FUN_00a8caf0(uVar6,0,0,0);
        }
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
  default:
    goto switchD_0079d857_default;
  }
  sVar4 = FUN_00dde2d0(0,5);
  FUN_00aa4080(0xd3,0,0x3e800000,0x3f800000,0x8000000,0xbf800000,(float)(int)sVar4 * 0.1 + 0.8);
  param_1[0x187] = param_1[0x187] + 1;
LAB_0079d8d5:
  local_c = (float)param_1[0x544];
  local_8 = param_1[0x545];
  local_4 = (float)param_1[0x546];
  FUN_00a8d790(&local_c);
  param_1[0x3b4] = (int)local_c;
  param_1[0x3b5] = local_8;
  param_1[0x3b6] = (int)local_4;
  param_1[0x3b7] = 0x3f800000;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0079d857_default:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  return;
}

// 0079DC40  FUN_0079dc40  size=220  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0079dc40(int param_1)

{
  int iVar1;
  int local_8 [2];
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    local_8[0] = 0;
    local_8[1] = 0;
    FUN_00ac81f0(param_1 + 0x40,local_8,local_8 + 1);
    if (local_8[0] == 0) {
      iVar1 = FUN_00a8c760(4);
      if (iVar1 != 0) {
        iVar1 = FUN_00a90070(5);
        if (((iVar1 != 0) && (60.0 < *(float *)(param_1 + 0x1508))) &&
           (*(float *)(param_1 + 0xa8c) < 9.0)) {
          *(undefined4 *)(param_1 + 0x1508) = 0;
          if (((*(byte *)(param_1 + 0x155a) & 0x10) == 0) && (*(int *)(param_1 + 0x15b4) == 0)) {
            FUN_00a8caf0(0x23,0,0,0);
            return;
          }
          FUN_0079a8d0();
          return;
        }
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x824) = 1;
      *(undefined4 *)(param_1 + 0x828) = 0x78;
      FUN_00a8caf0(0x41,0,0,0);
    }
  }
  return;
}

// 0079DD20  FUN_0079dd20  size=521  [between]
void __fastcall FUN_0079dd20(int *param_1)

{
  float fVar1;
  short sVar2;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x18,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x24b] = 0;
    sVar2 = FUN_00dde2d0(0,1);
    param_1[0x24a] = (int)((float)(int)sVar2 * 60.0 + 30.0);
    sVar2 = FUN_00dde2d0(0,3);
    if (sVar2 == 2) {
      sVar2 = FUN_00dde2d0(0,1);
      param_1[0x24a] = (int)((float)(int)sVar2 * 60.0 + 240.0);
    }
    param_1[0x249] = 0x3f9c61aa;
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 != 0) {
      param_1[0x249] = -0x40639e56;
    }
    param_1[0x484] = 0;
    param_1[0x485] = 0x3da3d70a;
  }
  else if (param_1[0x187] != 1) goto LAB_0079de6a;
  param_1[0x248] = (int)((float)param_1[0x248] + (float)param_1[0x244]);
  param_1[0x24b] = (int)((float)param_1[0x24b] + (float)param_1[0x244]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0079de6a:
  if (param_1[0x186] == 10) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  if (param_1[0x186] == 0xb) {
    fVar1 = (float)param_1[0x249];
    if ((float)param_1[0x2a3] < 16.0) {
      fVar1 = (float)param_1[0x249] * 1.2;
    }
    if (25.0 < (float)param_1[0x2a3]) {
      fVar1 = (float)param_1[0x249] * 0.6;
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3f0efa35,fVar1);
  }
  return;
}

// 0079DF30  FUN_0079df30  size=634  [between]
void __fastcall FUN_0079df30(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  uVar3 = 0x37;
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x186] == 0x1c) {
      uVar3 = 0x38;
    }
    FUN_00aa4080(uVar3,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
    if (param_1[0x1d9] != 0) {
      FUN_008e5ac0(2);
    }
    FUN_00c15aa0();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_0079aa90();
      FUN_00a8caf0(0xb,0,0,0);
      sVar1 = FUN_00dde2d0(0,3);
      if (sVar1 != 0) {
        FUN_00a8caf0(0xd,0,0,0);
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 != 0) {
          FUN_00a8caf0(0xe,0,0,0);
        }
      }
    }
    iVar2 = FUN_00a8c760(10);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x39,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_00a8caf0(0xb,0,0,0);
      FUN_0079aa90();
      sVar1 = FUN_00dde2d0(0,3);
      if (sVar1 != 0) {
        FUN_00a8caf0(0xd,0,0,0);
        sVar1 = FUN_00dde2d0(0,1);
        if (sVar1 != 0) {
          FUN_00a8caf0(0xe,0,0,0);
        }
      }
    }
  }
  iVar2 = FUN_00a8c760(0);
  if (((iVar2 != 0) && (iVar2 = (**(code **)(*(int *)param_1[0x2a1] + 0x22c))(), iVar2 != 0)) &&
     ((float)param_1[0x2a8] < 2.6179938)) {
    FUN_00a8e880(param_1 + 0x54c);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3e32b8c2,0);
  }
  return;
}

// 0079E1C0  FUN_0079e1c0  size=514  [between]
void __fastcall FUN_0079e1c0(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x3c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x507] = 0;
    FUN_00c27260(0x40200000);
    FUN_00c15aa0();
    FUN_00a8d280();
    fVar1 = 1.0;
    param_1[0x248] = 0x3f800000;
    fVar2 = SQRT((float)param_1[0x2a3]) * 0.5;
    if ((1.0 <= fVar2) && (fVar1 = fVar2, 4.0 < fVar2)) {
      fVar1 = 4.0;
    }
    param_1[0x248] = (int)fVar1;
    if (param_1[0x1d9] != 0) {
      FUN_008e5ac0(2);
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0079e34c;
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00a8caf0(0xb,0,0,0);
    FUN_0079aa90();
    sVar3 = FUN_00dde2d0(0,3);
    if (sVar3 != 0) {
      FUN_00a8caf0(0xd,0,0,0);
      sVar3 = FUN_00dde2d0(0,1);
      if (sVar3 != 0) {
        FUN_00a8caf0(0xe,0,0,0);
      }
    }
  }
  iVar4 = FUN_00a8c760(10);
  if ((iVar4 != 0) && (param_1[0x507] != 0)) {
    FUN_00a8caf0(0x1e,0,0,0);
  }
LAB_0079e34c:
  iVar4 = FUN_00a8c760(0);
  if (((iVar4 != 0) && (iVar4 = (**(code **)(*(int *)param_1[0x2a1] + 0x22c))(), iVar4 != 0)) &&
     ((float)param_1[0x2a8] < 2.6179938)) {
    FUN_00a8e880(param_1 + 0x54c);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3e567750,0);
  }
  return;
}

// 0079E3D0  FUN_0079e3d0  size=808  [between]
void __fastcall FUN_0079e3d0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  int iVar5;
  float10 fVar6;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  pcVar4 = *(code **)(*param_1 + 0x318);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  (*pcVar4)();
  (**(code **)(*param_1 + 0x1d4))(1);
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x50,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x507] = 0;
    param_1[0x508] = 0;
    param_1[0x250] = 0;
    param_1[0x509] = 0;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
    if (param_1[0x1d9] != 0) {
      FUN_008e5ac0(2);
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0079e51c;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    FUN_00a8caf0(0x20,0,0,0);
    if (param_1[0x508] != 0) {
      FUN_00a8caf0(0x10,0,0,0);
    }
    if (param_1[0x509] != 0) {
      FUN_00a8caf0(0x10,0,0,0);
    }
  }
  if (param_1[0x507] != 0) {
    param_1[0x250] = 1;
    param_1[0x225] = 0x3dcccccd;
  }
  if ((param_1[0x508] != 0) || (param_1[0x509] != 0)) {
    param_1[0x250] = 1;
  }
LAB_0079e51c:
  iVar5 = param_1[0x2a1];
  if (iVar5 != 0) {
    if (param_1[0x250] == 0) {
      fStack_24 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
      fStack_1c = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
      fStack_18 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
      fStack_20 = 0.0;
      fVar1 = fStack_24 * fStack_24 + fStack_1c * fStack_1c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_24,&fStack_24);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_1c = 0.0;
        fStack_24 = 0.0;
        fStack_20 = 1.0;
      }
      fStack_24 = fStack_24 * -2.0;
      fStack_20 = fStack_20 * -2.0;
      fStack_1c = fStack_1c * -2.0;
      fStack_18 = fStack_18 * -2.0;
      fVar6 = (float10)FUN_00fdc1f0();
      iVar5 = param_1[0x2a1];
      fVar1 = *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar5 + 0x48);
      fVar3 = *(float *)(iVar5 + 0x4c);
      param_1[0x14] =
           (int)(float)((((float10)fStack_24 + (float10)*(float *)(iVar5 + 0x40)) -
                        (float10)(float)param_1[0x14]) * fVar6 + (float10)(float)param_1[0x14]);
      param_1[0x15] =
           (int)(float)((((float10)fVar1 + (float10)fStack_20) - (float10)(float)param_1[0x15]) *
                        fVar6 + (float10)(float)param_1[0x15]);
      param_1[0x16] =
           (int)(float)((((float10)fVar2 + (float10)fStack_1c) - (float10)(float)param_1[0x16]) *
                        fVar6 + (float10)(float)param_1[0x16]);
      param_1[0x17] =
           (int)(float)((((float10)fVar3 + (float10)fStack_18) - (float10)(float)param_1[0x17]) *
                        fVar6 + (float10)(float)param_1[0x17]);
      if (*(float *)(param_1[0x2a1] + 0x894) < 0.0) {
        *(undefined4 *)(param_1[0x2a1] + 0x894) = 0;
      }
    }
    FUN_00a8e880(param_1 + 0x54c);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e32b8c2,0);
    iVar5 = FUN_00a8c760(10);
    if (iVar5 != 0) {
      FUN_00b7ab80(0x42340000,0x3c23d70a);
    }
  }
  FUN_00a8c760(0);
  return;
}

// 0079E700  FUN_0079e700  size=697  [between]
void __fastcall FUN_0079e700(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pcVar1 = *(code **)(*param_1 + 0x318);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x54,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x507] = 0;
    param_1[0x250] = 0;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0079e7e7;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x20,0,0,0);
  }
  if (param_1[0x507] != 0) {
    param_1[0x250] = 1;
    param_1[0x225] = 0x3dcccccd;
  }
LAB_0079e7e7:
  iVar3 = FUN_00a8c760(0);
  if ((iVar3 != 0) && (iVar3 = param_1[0x2a1], iVar3 != 0)) {
    fStack_30 = *(float *)(iVar3 + 0x40) - (float)param_1[0x10];
    fStack_28 = *(float *)(iVar3 + 0x48) - (float)param_1[0x12];
    fStack_24 = *(float *)(iVar3 + 0x4c) - (float)param_1[0x13];
    fStack_2c = 0.0;
    fVar2 = fStack_30 * fStack_30 + fStack_28 * fStack_28;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&fStack_30,&fStack_30);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_28 = 0.0;
      fStack_30 = 0.0;
      fStack_2c = 1.0;
    }
    iVar3 = param_1[0x2a1];
    fStack_30 = fStack_30 * -2.0;
    fStack_2c = fStack_2c * -2.0;
    fStack_28 = fStack_28 * -2.0;
    fStack_24 = fStack_24 * -2.0;
    fStack_20 = *(float *)(iVar3 + 0x40);
    fStack_18 = *(float *)(iVar3 + 0x48);
    fStack_14 = *(float *)(iVar3 + 0x4c);
    fStack_1c = *(float *)(iVar3 + 0x44) - 1.0;
    fVar4 = (float10)FUN_00fdc1f0();
    param_1[0x14] =
         (int)(float)((((float10)fStack_20 + (float10)fStack_30) - (float10)(float)param_1[0x14]) *
                      fVar4 + (float10)(float)param_1[0x14]);
    param_1[0x15] =
         (int)(float)((float10)(float)param_1[0x15] +
                     (((float10)fStack_1c + (float10)fStack_2c) - (float10)(float)param_1[0x15]) *
                     fVar4);
    param_1[0x16] =
         (int)(float)((((float10)fStack_18 + (float10)fStack_28) - (float10)(float)param_1[0x16]) *
                      fVar4 + (float10)(float)param_1[0x16]);
    param_1[0x17] =
         (int)(float)((((float10)fStack_14 + (float10)fStack_24) - (float10)(float)param_1[0x17]) *
                      fVar4 + (float10)(float)param_1[0x17]);
    if (*(float *)(param_1[0x2a1] + 0x894) < 0.0) {
      *(undefined4 *)(param_1[0x2a1] + 0x894) = 0;
    }
    FUN_00a8e880(param_1 + 0x54c);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e32b8c2,0);
  }
  return;
}

// 0079E9C0  FUN_0079e9c0  size=709  [between]
void __fastcall FUN_0079e9c0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  (*pcVar2)();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x52,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_008e5c50(0xd);
    param_1[0x225] = -0x41666666;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
    param_1[0x248] = 0;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x51,0,0x3c888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    param_1[0x225] = (int)((float)param_1[0x225] - 0.05);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_008e5c50(7);
      (**(code **)(*param_1 + 0x34c))();
      FUN_00a8caf0(0xb,0,0,0);
      FUN_0079aa90();
      sVar3 = FUN_00dde2d0(0,3);
      if (sVar3 != 0) {
        FUN_00a8caf0(0xd,0,0,0);
        sVar3 = FUN_00dde2d0(0,1);
        if (sVar3 != 0) {
          FUN_00a8caf0(0xe,0,0,0);
        }
      }
    }
    FUN_00a8c760(10);
  default:
    goto switchD_0079e9e5_default;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  param_1[0x225] = (int)((float)param_1[0x225] - 0.05);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a94ce0(0);
  FUN_00a8c760(10);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
  if (120.0 < (float)param_1[0x244] + fVar1) {
    FUN_00a8caf0(0x10,0,0,0);
    FUN_008e5c50(7);
    return;
  }
  if ((((int *)param_1[0x2a1] != (int *)0x0) &&
      (iVar4 = (**(code **)(*(int *)param_1[0x2a1] + 0x324))(), iVar4 != 0)) &&
     (fVar1 = *(float *)(param_1[0x2a1] + 0x44) + 1.5, (float)param_1[0x11] <= fVar1)) {
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x15] = (int)fVar1;
    FUN_00b7ab80(0x41a00000,0x3c23d70a);
  }
switchD_0079e9e5_default:
  iVar4 = FUN_00a8c760(0);
  if (iVar4 != 0) {
    FUN_00a8e880(param_1 + 0x54c);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0079ECA0  FUN_0079eca0  size=656  [between]
void __fastcall FUN_0079eca0(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_4;
  
  local_4 = 0;
  iVar4 = param_1[0x186];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  uVar5 = 0x3e;
  if (iVar4 == 0x23) {
    local_4 = 0x40490fdb;
  }
  if (param_1[0x187] == 0) {
    if (iVar4 == 0x22) {
      uVar5 = 0x41;
    }
    if (iVar4 == 0x23) {
      uVar5 = 0x44;
    }
    FUN_00aa4080(uVar5,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00c15aa0();
    FUN_00a8d280();
    if (param_1[0x1d9] != 0) {
      FUN_008e5ac0(2);
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0079ede7;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00a8caf0(0xb,0,0,0);
    FUN_0079aa90();
    sVar3 = FUN_00dde2d0(0,3);
    if (sVar3 != 0) {
      FUN_00a8caf0(0xd,0,0,0);
      sVar3 = FUN_00dde2d0(0,1);
      if (sVar3 != 0) {
        FUN_00a8caf0(0xe,0,0,0);
      }
    }
  }
LAB_0079ede7:
  iVar4 = FUN_00a8c760(0);
  if (((iVar4 != 0) && (iVar4 = (**(code **)(*(int *)param_1[0x2a1] + 0x22c))(), iVar4 != 0)) &&
     ((float)param_1[0x2a8] < 2.6179938)) {
    FUN_00a8e880(param_1 + 0x54c);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3e32b8c2,local_4);
  }
  if ((((param_1[0x186] == 0x23) && (param_1[0x2a1] != 0)) &&
      ((iVar4 = FUN_00a8c760(10), iVar4 != 0 &&
       ((iVar4 = (**(code **)(*(int *)param_1[0x2a1] + 0x22c))(), iVar4 != 0 &&
        ((float)param_1[0x2a8] < 1.5707964)))))) && (iVar4 = FUN_00a12210(0xf00), iVar4 != 0)) {
    fVar1 = *(float *)(param_1[0x2a1] + 0x48);
    fVar2 = *(float *)(iVar4 + 0x48);
    param_1[0x14] =
         (int)((*(float *)(param_1[0x2a1] + 0x40) - *(float *)(iVar4 + 0x40)) * 0.1 +
              (float)param_1[0x14]);
    param_1[0x16] = (int)((fVar1 - fVar2) * 0.1 + (float)param_1[0x16]);
    FUN_00a8e880(param_1 + 0x54c);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3c0efa35,0);
  }
  return;
}

// 0079EF30  FUN_0079ef30  size=446  [between]
void FUN_0079ef30(int param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_00a581b0(&local_c,0,param_3);
  iVar2 = *(int *)(param_1 + 0x44);
  iVar7 = 0;
  local_c = *param_2 - local_c;
  local_8 = param_2[1] - local_8;
  local_4 = param_2[2] - local_4;
  if (3 < iVar2) {
    iVar4 = 0;
    iVar6 = 1;
    do {
      if (iVar2 == iVar6 + -2) {
        *(float *)(iVar4 + *(int *)(param_1 + 0x3c)) =
             *(float *)(iVar4 + *(int *)(param_1 + 0x3c)) + local_c;
        *(float *)(iVar4 + 8 + *(int *)(param_1 + 0x3c)) =
             *(float *)(iVar4 + 8 + *(int *)(param_1 + 0x3c)) + local_4;
      }
      else {
        pfVar5 = (float *)(*(int *)(param_1 + 0x3c) + iVar4);
        *pfVar5 = *(float *)(*(int *)(param_1 + 0x3c) + iVar4) + local_c;
        pfVar5[1] = pfVar5[1] + local_8;
        pfVar5[2] = pfVar5[2] + local_4;
      }
      pfVar5 = (float *)(iVar4 + 0xc + *(int *)(param_1 + 0x3c));
      if (iVar2 == iVar7) {
        *pfVar5 = local_c + *pfVar5;
        pfVar5 = (float *)(iVar4 + 0x14 + *(int *)(param_1 + 0x3c));
        *pfVar5 = local_4 + *pfVar5;
      }
      else {
        *pfVar5 = *pfVar5 + local_c;
        pfVar5[1] = pfVar5[1] + local_8;
        pfVar5[2] = pfVar5[2] + local_4;
      }
      iVar1 = iVar4 + 0x24;
      pfVar5 = (float *)(iVar4 + 0x18 + *(int *)(param_1 + 0x3c));
      *pfVar5 = *(float *)(iVar4 + 0x18 + *(int *)(param_1 + 0x3c)) + local_c;
      if (iVar2 == iVar6) {
        *(float *)(iVar4 + 0x20 + *(int *)(param_1 + 0x3c)) =
             *(float *)(iVar4 + 0x20 + *(int *)(param_1 + 0x3c)) + local_4;
      }
      else {
        pfVar5[1] = pfVar5[1] + local_8;
        pfVar5[2] = pfVar5[2] + local_4;
      }
      iVar3 = *(int *)(param_1 + 0x3c);
      if (iVar2 == iVar6 + 1) {
        *(float *)(iVar3 + iVar1) = local_c + *(float *)(iVar3 + iVar1);
        *(float *)(iVar4 + 0x2c + *(int *)(param_1 + 0x3c)) =
             *(float *)(iVar4 + 0x2c + *(int *)(param_1 + 0x3c)) + local_4;
      }
      else {
        pfVar5 = (float *)(iVar3 + iVar1);
        *pfVar5 = *(float *)(iVar3 + iVar1) + local_c;
        pfVar5[1] = pfVar5[1] + local_8;
        pfVar5[2] = pfVar5[2] + local_4;
      }
      iVar7 = iVar7 + 4;
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + 0x30;
    } while (iVar7 < iVar2 + -3);
  }
  if (iVar7 < iVar2) {
    iVar4 = iVar7 * 0xc;
    do {
      if (iVar2 == iVar7 + -1) {
        *(float *)(iVar4 + *(int *)(param_1 + 0x3c)) =
             *(float *)(iVar4 + *(int *)(param_1 + 0x3c)) + local_c;
        *(float *)(iVar4 + 8 + *(int *)(param_1 + 0x3c)) =
             *(float *)(iVar4 + 8 + *(int *)(param_1 + 0x3c)) + local_4;
      }
      else {
        pfVar5 = (float *)(*(int *)(param_1 + 0x3c) + iVar4);
        *pfVar5 = *(float *)(*(int *)(param_1 + 0x3c) + iVar4) + local_c;
        pfVar5[1] = pfVar5[1] + local_8;
        pfVar5[2] = pfVar5[2] + local_4;
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar7 < iVar2);
  }
  return;
}

// 0079F0F0  FUN_0079f0f0  size=682  [between]
void __fastcall FUN_0079f0f0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  float10 fVar7;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x4e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00c15aa0();
    FUN_00a8d280();
    param_1[0x507] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e5ac0(2);
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0079f239;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00a8caf0(0xb,0,0,0);
    sVar5 = FUN_00dde2d0(0,1);
    if ((sVar5 != 0) &&
       (((*(byte *)((int)param_1 + 0x155a) & 0x10) == 0 ||
        ((*(byte *)((int)param_1 + 0x155a) & 8) == 0)))) {
      FUN_00a8caf0(8,0,0,0);
    }
    if ((param_1[0x507] != 0) &&
       (((*(byte *)((int)param_1 + 0x155a) & 0x10) == 0 ||
        ((*(byte *)((int)param_1 + 0x155a) & 8) == 0)))) {
      FUN_00a8caf0(8,0,0,0);
    }
    FUN_0079aa90();
  }
  FUN_00a952e0(0,0x428c0000);
LAB_0079f239:
  iVar6 = FUN_00a8c760(0);
  if (((iVar6 != 0) && (iVar6 = (**(code **)(*(int *)param_1[0x2a1] + 0x22c))(), iVar6 != 0)) &&
     ((float)param_1[0x2a8] < 2.6179938)) {
    FUN_00a8e880(param_1 + 0x54c);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
  }
  if (((param_1[0x2a1] != 0) && (iVar6 = FUN_00a8c760(10), iVar6 != 0)) &&
     ((iVar6 = (**(code **)(*(int *)param_1[0x2a1] + 0x22c))(), iVar6 != 0 &&
      (((float)param_1[0x2a8] < 1.5707964 && (iVar6 = FUN_00a12210(0xf00), iVar6 != 0)))))) {
    fVar1 = *(float *)(param_1[0x2a1] + 0x40);
    fVar2 = *(float *)(iVar6 + 0x40);
    fVar3 = *(float *)(param_1[0x2a1] + 0x48);
    fVar4 = *(float *)(iVar6 + 0x48);
    fVar7 = (float10)FUN_00fdc1f0();
    param_1[0x14] = (int)(float)((float10)(float)param_1[0x14] + (float10)(fVar1 - fVar2) * fVar7);
    param_1[0x16] = (int)(float)(fVar7 * (float10)(fVar3 - fVar4) + (float10)(float)param_1[0x16]);
    FUN_00a8e880(param_1 + 0x54c);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0079F3A0  FUN_0079f3a0  size=68  [between]
void __fastcall FUN_0079f3a0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x139] != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return;
  }
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x32,0,0,0);
  }
  return;
}

// 0079F3F0  FUN_0079f3f0  size=36  [between]
void __fastcall FUN_0079f3f0(int *param_1)

{
  if (param_1[0x139] != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  return;
}

// 0079F420  FUN_0079f420  size=36  [between]
void __fastcall FUN_0079f420(int *param_1)

{
  if (param_1[0x139] != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  return;
}

// 0079F450  FUN_0079f450  size=36  [between]
void __fastcall FUN_0079f450(int *param_1)

{
  if (param_1[0x139] != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  return;
}

// 0079F480  FUN_0079f480  size=23  [between]
void __fastcall FUN_0079f480(int param_1)

{
  if (*(int *)(param_1 + 0x4e4) != 0) {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 0079F4A0  FUN_0079f4a0  size=367  [between]
void __fastcall FUN_0079f4a0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    param_1[0x250] = 0;
    uVar3 = 0x107;
    if (param_1[0x186] == 0x43) {
      uVar3 = 0x108;
    }
    FUN_00aa4080(uVar3,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar2 = param_1[0x501];
    sVar4 = FUN_00dde2d0(0,(short)param_1[0x562]);
    iVar5 = iVar2 + 1;
    param_1[0x500] = (int)sVar4 + param_1[0x564] * iVar2 + param_1[0x561];
    param_1[0x501] = iVar5;
    if (param_1[0x563] <= iVar5) {
      param_1[0x501] = param_1[0x563];
    }
    param_1[0x566] = 0;
    param_1[0x567] = (int)(float)param_1[0x560];
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      FUN_009f8b10();
      FUN_00a7c950();
    }
    param_1[0x195] = -1;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if ((iVar5 != 0) &&
     (((**(code **)(*param_1 + 0x34c))(), param_1[0x139] != 0 || (param_1[0x21c] < 1)))) {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 0079F610  FUN_0079f610  size=23  [between]
void __fastcall FUN_0079f610(int param_1)

{
  if (*(int *)(param_1 + 0x4e4) != 0) {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 0079F630  FUN_0079f630  size=320  [between]
void __fastcall FUN_0079f630(int *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    param_1[0x250] = 0;
    uVar2 = 0x105;
    if (param_1[0x186] == 0x45) {
      uVar2 = 0x106;
    }
    if (param_1[0x186] == 0x46) {
      uVar2 = 0x112;
    }
    FUN_00aa4080(uVar2,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x128] = 1;
    param_1[0x36a] = -1;
    param_1[0x36c] = -1;
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_009f8b10();
      FUN_00a7c950();
    }
    param_1[0x195] = -1;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x34c);
    param_1[0x128] = 1;
    (*pcVar1)();
    if ((param_1[0x139] != 0) || (param_1[0x21c] < 1)) {
      FUN_00a8caf0(0x50,0,0,0);
    }
  }
  return;
}

// 0079F770  FUN_0079f770  size=72  [between]
void __fastcall FUN_0079f770(int *param_1)

{
  int iVar1;
  
  if (param_1[0x139] != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return;
  }
  if (0 < param_1[0x187]) {
    iVar1 = (**(code **)(*param_1 + 0x348))(0x43960000);
    if (iVar1 != 0) {
      param_1[0x187] = 2;
    }
  }
  return;
}

// 0079F7C0  FUN_0079f7c0  size=357  [between]
void __fastcall FUN_0079f7c0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    param_1[0x139] = 1;
    (**(code **)(param_1[0x44c] + 8))(0x41200000,0,0);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(4,param_1[0x571],param_1[0x570]);
    }
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8caf0(0x50,0,0,0);
    }
    break;
  case 2:
    pcVar2 = *(code **)(*param_1 + 0x20);
    param_1[0x248] = 0x43340000;
    param_1[0x187] = 3;
    (*pcVar2)();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    FUN_00c57120(param_1[0x13c]);
    piVar4 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c1d1c0(piVar4);
    param_1[0x1af] = 1;
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 0079F940  FUN_0079f940  size=444  [between]
void __fastcall FUN_0079f940(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    param_1[0x187] = 1;
    param_1[0x139] = 1;
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x358))(2,0);
      FUN_00e5e0c0("em0070_se_dmg_explosion",param_1,0xffffffff,0);
    }
    (**(code **)(param_1[0x44c] + 8))(0x41200000,0,0);
    FUN_00940450(param_1[0x20f]);
    param_1[0x248] = 0x43340000;
    (**(code **)(*param_1 + 0x20))();
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        iVar3 = FUN_00a81330();
        piVar4 = (int *)0x0;
        if (iVar3 != 0) {
          FUN_00a81330();
          piVar4 = (int *)FUN_00a7c8a0();
        }
        (**(code **)(*piVar4 + 0x20))();
      }
    }
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    FUN_00c57120(param_1[0x13c]);
    piVar4 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c1d1c0(piVar4);
    if (param_1[0x294] != 0) {
      pcVar2 = *(code **)(*param_1 + 0x344);
      param_1[0x1af] = 1;
      (*pcVar2)(4,param_1[0x571],param_1[0x570]);
      FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
      (**(code **)(*param_1 + 0x364))(0xffffffff);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (0.0 <= fVar1 - (float)param_1[0x244]) {
    return;
  }
  FUN_009fdde0();
  return;
}

// 0079FB00  FUN_0079fb00  size=331  [between]
void __fastcall FUN_0079fb00(int *param_1)

{
  code *pcVar1;
  float10 fVar2;
  int *piVar3;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    pcVar1 = *(code **)(param_1[0x44c] + 8);
    param_1[0x187] = 1;
    param_1[0x139] = 1;
    (*pcVar1)(0x3f800000,0,0);
    param_1[0x248] = 0x43340000;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    FUN_00c57120(param_1[0x13c]);
    piVar3 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c1d1c0(piVar3);
    if (param_1[0x294] != 0) {
      pcVar1 = *(code **)(*param_1 + 0x344);
      param_1[0x1af] = 1;
      (*pcVar1)(4,param_1[0x571],param_1[0x570]);
      FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
      (**(code **)(*param_1 + 0x364))(0xffffffff);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar2 = (float10)FUN_00ac8f80();
  if (fVar2 - (float10)0.011111111 < (float10)0) {
    (**(code **)(*param_1 + 0x20))();
    FUN_009fdde0();
    FUN_00ac8fd0((float)(float10)0);
    return;
  }
  FUN_00ac8fd0((float)(fVar2 - (float10)0.011111111));
  return;
}

// 0079FC50  Emc070::vf1A0  size=528  [class]
undefined4 __thiscall Emc070::vf1A0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x274))();
    if (iVar1 == 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      iVar1 = *param_2;
      if (iVar1 == 0xfb) {
        iVar1 = (**(code **)(*piVar2 + 0x14c))(0x37,param_1[0x13c]);
        if (iVar1 != 0) {
          piVar3 = (int *)FUN_00740a40(piVar2);
          FUN_00a8e880(param_1 + 0x10);
          (**(code **)(*piVar3 + 0x308))(0x3f800000,0x393702d3,0x40c90fdb,0);
          (**(code **)(*piVar2 + 0x150))(0x37,param_1[0x13c]);
          (**(code **)(*param_1 + 0x150))(0x37,piVar2[0x13c]);
          return 1;
        }
      }
      else if (iVar1 == 0xfc) {
        iVar1 = (**(code **)(*piVar2 + 0x14c))(0x38,param_1[0x13c]);
        if (iVar1 != 0) {
          piVar3 = (int *)FUN_00740a40(piVar2);
          FUN_00a8e880(param_1 + 0x10);
          (**(code **)(*piVar3 + 0x308))(0x3f800000,0x393702d3,0x40c90fdb,0);
          (**(code **)(*piVar2 + 0x150))(0x38,param_1[0x13c]);
          (**(code **)(*param_1 + 0x150))(0x38,piVar2[0x13c]);
          return 1;
        }
      }
      else if (iVar1 == 0xfd) {
        iVar1 = (**(code **)(*piVar2 + 0x14c))(0x39,param_1[0x13c]);
        if (iVar1 != 0) {
          piVar3 = (int *)FUN_00740a40(piVar2);
          FUN_00a8e880(param_1 + 0x10);
          (**(code **)(*piVar3 + 0x308))(0x3f800000,0x393702d3,0x40c90fdb,0);
          (**(code **)(*piVar2 + 0x150))(0x39,param_1[0x13c]);
          (**(code **)(*param_1 + 0x150))(0x39,piVar2[0x13c]);
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}

// 0079FE60  FUN_0079fe60  size=111  [between]
void __thiscall FUN_0079fe60(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_00a12210(0);
  local_20 = *(undefined4 *)(iVar1 + 0x40);
  local_1c = *(undefined4 *)(iVar1 + 0x44);
  local_18 = *(undefined4 *)(iVar1 + 0x48);
  local_14 = *(undefined4 *)(iVar1 + 0x4c);
  iVar1 = FUN_009f8b40();
  FUN_0090fa30(param_1 + 0x1234,0,&local_20,0x3f000000,param_2,iVar1 << 0x10 | 7,"Emc070");
  return;
}

// 0079FED0  FUN_0079fed0  size=204  [between]
/* WARNING: Removing unreachable block (ram,0x0079ff33) */

undefined4 __fastcall FUN_0079fed0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_24;
  undefined1 local_20 [28];
  
  iVar4 = 0;
  iVar1 = FUN_00907640(param_1 + 0x1234,&local_24,local_20);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = 1;
  FUN_0112bcf0();
  if (0 < *(int *)(local_24 + 0x14)) {
    iVar1 = *(int *)(*(int *)(local_24 + 0x10) + 0x28);
    iVar2 = 0;
    if (*(char *)(iVar1 + 0x18) == '\x01') {
      iVar2 = *(char *)(iVar1 + 0x10) + iVar1;
    }
    if (*(char *)(iVar1 + 0x18) == '\x02') {
      if (*(char *)(iVar1 + 0x18) == '\x02') {
        iVar4 = *(char *)(iVar1 + 0x10) + iVar1;
      }
      else {
        iVar4 = 0;
      }
    }
    if (iVar2 != 0) {
      iVar1 = FUN_008f7780(iVar2);
      uVar3 = 1;
      if ((*(int *)(param_1 + 0xa84) != 0) && (iVar1 == *(int *)(param_1 + 0xa84))) {
        uVar3 = 0;
      }
    }
    if (iVar4 != 0) {
      iVar1 = FUN_008f7780(iVar4);
      if ((*(int *)(param_1 + 0xa84) != 0) && (iVar1 == *(int *)(param_1 + 0xa84))) {
        return 0;
      }
    }
  }
  return uVar3;
}

// 0079FFC0  Emc070::vf13C  size=48  [class]
bool __fastcall Emc070::vf13C(int *param_1)

{
  int iVar1;
  
  if (param_1[0x139] == 0) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar1 == 0) {
      iVar1 = FUN_00a82e80();
      return iVar1 == 0;
    }
  }
  return false;
}

// 0079FFF0  FUN_0079fff0  size=186  [between]
void __thiscall FUN_0079fff0(int *param_1,int param_2)

{
  if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
    (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
  }
  param_1[0x569] = 0x3f800000;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(400,0);
  }
  *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 1;
  FUN_00ac8dd0("hontai",1);
  FUN_00ac9420("_EFD00");
  if (param_1[0x3a8] != -1) {
    FUN_00c52700(param_1[0x3a8],1);
  }
  if (param_1[0x3a5] == 0) {
    FUN_0079c1e0();
    if (param_1[0xcc] != 0) {
      param_1[0x56e] = *(int *)(param_1[0xcc] + 0xcc);
    }
  }
  return;
}

// 007A00B0  FUN_007a00b0  size=160  [between]
void __fastcall FUN_007a00b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  uint uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01b358ec;
      (**(code **)(*piVar2 + 4))(&DAT_01b358ec);
      iVar1 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
    (**(code **)(*param_1 + 0x358))(0x195,0);
    param_1[0x569] = 0x3f800000;
    if (uVar3 != 0) {
      FUN_0079c0b0(unaff_ESI);
    }
    if (unaff_ESI != 0) {
      (**(code **)(*param_1 + 0x358))(0x196,0);
    }
    *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 0x80;
  }
  return;
}

// 007A0150  FUN_007a0150  size=188  [between]
undefined4 __fastcall FUN_007a0150(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_00a9b930();
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x4b0) != 0x11400)) && (param_1[0x139] == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (((iVar1 == 0) && (0 < param_1[0x21c])) && (param_1[0x187] != 0)) {
      iVar1 = FUN_00a82e80();
      if (iVar1 == 0) {
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        FUN_00c59410(param_1[0x13c],0xffffffff,&uStack_20,0x3f800000,0x3fc00000,0x40490fdb,
                     0x3f490fdb,0x1002,0);
        return 1;
      }
    }
  }
  return 0;
}

// 007A0210  FUN_007a0210  size=100  [between]
undefined4 __thiscall FUN_007a0210(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 0x4a8) & 0x40) == 0) &&
     ((*(int *)(param_1 + 0x15b4) == 0 || (param_2 == 0)))) {
    bVar1 = *(byte *)(param_1 + 0x155a) & 0x10;
    if ((bVar1 == 0) || ((*(byte *)(param_1 + 0x155a) & 8) == 0)) {
      if (bVar1 == 0) {
        FUN_00a8caf0(0x1d,0,0,0);
        return 1;
      }
      iVar3 = FUN_0079a910();
      if ((iVar3 != 0) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

// 007A0280  FUN_007a0280  size=107  [between]
undefined4 __thiscall FUN_007a0280(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 0x155a);
  if ((((bVar1 & 0x10) == 0) || ((bVar1 & 8) == 0)) &&
     ((*(int *)(param_1 + 0x15b4) == 0 || (param_2 == 0)))) {
    if ((bVar1 & 8) == 0) {
      FUN_00a8caf0(0x1c,0,0,0);
      return 1;
    }
    if ((*(int *)(param_1 + 0x15b4) == 0) && ((bVar1 & 0x10) == 0)) {
      FUN_00a8caf0(0x21,0,0,0);
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 007A02F0  FUN_007a02f0  size=81  [between]
bool __fastcall FUN_007a02f0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_00ac4d60(1);
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x15b4) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x155a);
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 8) != 0) {
        iVar2 = FUN_0079a870();
        return iVar2 != 0;
      }
    }
    else if ((bVar1 & 8) != 0) {
      return false;
    }
    FUN_00a8caf0(0x27,0,0,0);
    return true;
  }
  return false;
}

// 007A0350  FUN_007a0350  size=696  [between]
undefined4 __fastcall FUN_007a0350(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return 1;
  }
  uVar4 = 0;
  if (*(float *)(param_1 + 0xaa0) < 2.0943952) {
    if ((*(int *)(param_1 + 0x15b4) == 0) || (iVar3 = FUN_00ac4d60(1), iVar3 != 0)) {
      if (*(float *)(param_1 + 0xa8c) < 6.25 != (*(float *)(param_1 + 0xa8c) == 6.25)) {
        if (((*(byte *)(param_1 + 0x155a) & 0x10) == 0) || ((*(byte *)(param_1 + 0x155a) & 8) == 0))
        {
          FUN_00a8caf0(0x1b,0,0,0);
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if ((!NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25)) && (*(float *)(param_1 + 0xa8c) < 16.0))
      {
        uVar4 = FUN_007a0210(0);
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if ((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) && (*(float *)(param_1 + 0xa8c) < 36.0))
      {
        uVar4 = FUN_007a0280(0);
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if (!NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0)) {
        uVar4 = 1;
        FUN_00a8caf0(10,0,0,0);
        FUN_0079a8d0();
      }
      iVar3 = FUN_0079d140();
      if ((iVar3 != 0) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        uVar4 = FUN_007a0210(0);
      }
      if ((*(int *)(param_1 + 0x618) == 0x1c) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        uVar4 = 1;
        FUN_00a8caf0(0x12,0,0,0);
      }
      if (((((*(byte *)(param_1 + 0x155a) & 0x20) == 0) &&
           (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0))) &&
          (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) &&
         ((*(float *)(param_1 + 0x14e4) < 0.0 && ((*(byte *)(param_1 + 0x155a) & 0x90) == 0)))) {
        FUN_00a8caf0(0x26,0,0,0);
      }
    }
    else {
      if (*(float *)(param_1 + 0xa8c) <= 9.0) {
        uVar4 = FUN_007a02f0();
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 != 0) {
          uVar4 = FUN_0079a870();
        }
        sVar2 = FUN_00dde2d0(0,4);
        if (sVar2 == 1) {
          uVar4 = FUN_0079a8d0();
        }
      }
      if (9.0 < *(float *)(param_1 + 0xa8c)) {
        uVar4 = FUN_0079a8d0();
      }
    }
    if (((*(byte *)(param_1 + 0x155a) & 0x10) != 0) && ((*(byte *)(param_1 + 0x155a) & 8) != 0)) {
      FUN_00a8caf0(10,0,0,0);
      FUN_0079a8d0();
      return 1;
    }
    return uVar4;
  }
  if (9.0 < *(float *)(param_1 + 0xa8c)) {
    return 0;
  }
  if (((*(byte *)(param_1 + 0x155a) & 0x10) == 0) && (*(int *)(param_1 + 0x15b4) == 0)) {
    FUN_00a8caf0(0x23,0,0,0);
    return 1;
  }
  uVar4 = FUN_0079a8d0();
  return uVar4;
}

// 007A0610  Emc070::vf194  size=21  [class]
bool __fastcall Emc070::vf194(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    bVar1 = *(int *)(param_1 + 0x618) == 0x40;
  }
  return bVar1;
}

// 007A0630  Emc070::vf368  size=84  [class]
undefined4 __fastcall Emc070::vf368(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4b0) == 0x2c070) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0xd88) != 0) {
      return 2;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x8000000) != 0) {
      return 1;
    }
  }
  else {
    uVar1 = 3;
    if (*(int *)(param_1 + 0xd88) != 0) {
      return 5;
    }
    if ((*(uint *)(param_1 + 0xea4) & 0x8000000) != 0) {
      uVar1 = 4;
    }
  }
  return uVar1;
}

// 007A0690  FUN_007a0690  size=99  [between]
void __thiscall FUN_007a0690(int *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x90) & 0x800) == 0) {
    param_1[0x570] = 0;
  }
  if ((*(uint *)(param_2 + 0x8c) & 0x100000) != 0) {
    param_1[0x571] = 2;
  }
  if ((*(uint *)(param_2 + 0x90) & 0x200) != 0) {
    param_1[0x571] = 4;
  }
  (**(code **)(*param_1 + 0x344))(4,param_1[0x571],param_1[0x570]);
  return;
}

// 007A0700  FUN_007a0700  size=427  [between]
void __fastcall FUN_007a0700(int *param_1)

{
  if (param_1[0x575] == 0) {
    (**(code **)(*param_1 + 0x358))(399,0);
    if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
    }
    *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 4;
    param_1[0x569] = 0x3f800000;
    FUN_00ac8dd0("_R_leg",1);
    FUN_00ac9420("_EFD03");
    if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
    }
    *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 2;
    param_1[0x569] = 0x3f800000;
    FUN_00ac8dd0("_L_leg",1);
    FUN_00ac9420("_EFD04");
    if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
    }
    *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 0x10;
    param_1[0x569] = 0x3f800000;
    FUN_00ac8dd0("_R_arm",1);
    FUN_00ac9420("_EFD01");
    if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
    }
    *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 8;
    param_1[0x569] = 0x3f800000;
    FUN_00ac8dd0("_L_arm",1);
    FUN_00ac9420("_EFD02");
    FUN_0079fff0(0);
    FUN_007a00b0(0);
    param_1[0x575] = 1;
  }
  return;
}

// 007A0900  FUN_007a0900  size=117  [between]
void __fastcall FUN_007a0900(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
    }
  }
  param_1[0x195] = 0;
  param_1[0x3c0] = 0x44160000;
  return;
}

// 007A09E0  FUN_007a09e0  size=219  [between]
void __fastcall FUN_007a09e0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    if ((DAT_01bea060 & 0x2000000) == 0) {
      if ((param_1[0x2a1] != 0) && (*(int *)(param_1[0x2a1] + 0x2664) != 0)) {
        param_1[0x538] = 0;
      }
      iVar1 = FUN_00a8c760(0xf);
      if ((iVar1 != 0) && (param_1[0x47e] != 0)) {
        iVar1 = FUN_00a90070(5);
        if (iVar1 != 0) {
          iVar1 = FUN_00ac4780();
          if (0 < iVar1) {
            FUN_007a0350();
          }
        }
      }
      iVar1 = FUN_00a8c760(0x30);
      if ((iVar1 != 0) && (param_1[0x47e] != 0)) {
        iVar1 = FUN_00a90070(5);
        if (iVar1 != 0) {
          iVar1 = FUN_00ac4780();
          if (2 < iVar1) {
            FUN_007a0350();
            return;
          }
        }
      }
    }
    else {
      FUN_00a8caf0(0x12,0,0,0);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    }
  }
  return;
}

// 007A0AC0  FUN_007a0ac0  size=304  [between]
void __fastcall FUN_007a0ac0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xe0,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
    FUN_00c15aa0();
  }
  else if (param_1[0x187] != 1) goto LAB_007a0ba1;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(4);
  if (((iVar1 != 0) && (param_1[0x2a1] != 0)) && ((float)param_1[0x538] <= 0.0)) {
    FUN_007a0350();
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x538] = 0x42700000;
  }
LAB_007a0ba1:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_00a8e880(param_1 + 0x54c);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 007A0BF0  FUN_007a0bf0  size=312  [between]
void __fastcall FUN_007a0bf0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  pcVar1 = *(code **)(*param_1 + 0x220);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  (*pcVar1)(0x41200000);
  uVar4 = 0;
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xe1,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_007a0d02;
  FUN_00ac80a0(0,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_009f8b10();
      FUN_00a7c950();
    }
    param_1[0x195] = -1;
    param_1[0x538] = 0x42700000;
  }
LAB_007a0d02:
  iVar2 = FUN_00a8c760(10);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(0x1c), iVar2 == 0)) {
    FUN_0079acd0(uVar4);
  }
  return;
}

// 007A0D30  FUN_007a0d30  size=219  [between]
void __fastcall FUN_007a0d30(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    if ((DAT_01bea060 & 0x2000000) == 0) {
      if ((param_1[0x2a1] != 0) && (*(int *)(param_1[0x2a1] + 0x2664) != 0)) {
        param_1[0x538] = 0;
      }
      iVar1 = FUN_00a8c760(0xf);
      if ((iVar1 != 0) && (param_1[0x47e] != 0)) {
        iVar1 = FUN_00a90070(5);
        if (iVar1 != 0) {
          iVar1 = FUN_00ac4780();
          if (0 < iVar1) {
            FUN_007a0350();
          }
        }
      }
      iVar1 = FUN_00a8c760(0x30);
      if ((iVar1 != 0) && (param_1[0x47e] != 0)) {
        iVar1 = FUN_00a90070(5);
        if (iVar1 != 0) {
          iVar1 = FUN_00ac4780();
          if (2 < iVar1) {
            FUN_007a0350();
            return;
          }
        }
      }
    }
    else {
      FUN_00a8caf0(0x12,0,0,0);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    }
  }
  return;
}

// 007A0E10  FUN_007a0e10  size=358  [between]
void __fastcall FUN_007a0e10(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xe3,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
    FUN_00c15aa0();
    (**(code **)(*param_1 + 0x308))(0x3f19999a,0x393702d3,0x3e8efa35,0);
  }
  else if (param_1[0x187] != 1) goto LAB_007a0f27;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(4);
  if (((iVar1 != 0) && (param_1[0x2a1] != 0)) && ((float)param_1[0x538] <= 0.0)) {
    FUN_007a0350();
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x538] = 0x44160000;
  }
LAB_007a0f27:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_00a8e880(param_1 + 0x54c);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 007A0F80  FUN_007a0f80  size=736  [between]
void __fastcall FUN_007a0f80(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  uVar3 = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xe4,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0xe5,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_007a109b;
  case 3:
LAB_007a109b:
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (((iVar1 != 0) && (param_1[0x187] = param_1[0x187] + 1, uVar3 != 0)) &&
       (iVar1 = FUN_00a8cac0(), 5 < iVar1)) {
      param_1[0x187] = 6;
    }
    goto switchD_007a0fdd_default;
  case 4:
    FUN_00aa4080(0xe6,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x250] == 0) {
      (**(code **)(*param_1 + 0x220))(0x40a00000);
    }
    iVar1 = FUN_00a8c760(8);
    if (iVar1 != 0) {
      FUN_0079ad70();
      param_1[0x250] = 1;
    }
    goto LAB_007a118d;
  case 6:
    FUN_00aa4080(0xe7,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_007a11f4;
  case 7:
LAB_007a11f4:
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(8);
    if (iVar1 != 0) {
      FUN_0079ad70();
    }
LAB_007a118d:
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_0079ad70();
      param_1[0x538] = 0x42700000;
    }
  default:
    goto switchD_007a0fdd_default;
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_007a0fdd_default:
  iVar1 = FUN_00a8c760(10);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(0x1c), iVar1 == 0)) {
    FUN_0079acd0(uVar3);
  }
  return;
}

// 007A1280  FUN_007a1280  size=183  [between]
void __fastcall FUN_007a1280(int *param_1)

{
  int iVar1;
  
  if ((DAT_01bea060 & 0x2000000) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (param_1[0x47e] != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (param_1[0x47e] != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x12,0,0,0);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
  }
  return;
}

// 007A1340  FUN_007a1340  size=317  [between]
void __fastcall FUN_007a1340(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  pcVar1 = *(code **)(*param_1 + 0x220);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  (*pcVar1)(0x41200000);
  uVar4 = 0;
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xec,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_007a1457;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_009f8b10();
      FUN_00a7c950();
    }
    param_1[0x195] = -1;
  }
LAB_007a1457:
  iVar2 = FUN_00a8c760(10);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(0x1c), iVar2 == 0)) {
    FUN_0079acd0(uVar4);
  }
  return;
}

// 007A1480  FUN_007a1480  size=330  [between]
void __fastcall FUN_007a1480(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b358e0;
    (**(code **)(*piVar2 + 4))(&DAT_01b358e0);
    iVar3 = FUN_00dd6d80(puVar4);
    if ((iVar3 != 0) && ((*(byte *)((int)piVar2 + 0x155a) & 8) != 0)) goto LAB_007a14e1;
  }
  if (param_1[0x187] == 0) {
    return;
  }
  if (iVar1 != 0) {
    if (param_1[0x187] == 0) {
      return;
    }
    iVar1 = FUN_00a959f0(0);
    if (45.0 <= (float)iVar1) {
      return;
    }
    iVar1 = FUN_00b7c970();
    if (iVar1 < 1) {
      return;
    }
    FUN_00cbc8f0(0x4000,1);
    iVar1 = FUN_00b7a7c0();
    piVar2 = param_1 + 0x250;
    *piVar2 = *piVar2 - iVar1;
    if (-1 < *piVar2) {
      return;
    }
    iVar1 = FUN_00a959f0(0);
    if ((float)iVar1 < 35.0) {
      return;
    }
    FUN_00b96b30();
    FUN_00dc1270(0x41700000,0);
    FUN_00a8caf0(0x10000d,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x007a15c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c))();
    return;
  }
LAB_007a14e1:
  FUN_00b96b30();
  FUN_00dc1270(0x41700000,0);
  FUN_00a8caf0(0x10000d,0,0,0);
  return;
}

// 007A18D0  FUN_007a18d0  size=160  [between]
void __fastcall FUN_007a18d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b358e0;
    (**(code **)(*piVar2 + 4))(&DAT_01b358e0);
    iVar3 = FUN_00dd6d80(puVar4);
    if ((iVar3 != 0) && ((*(byte *)((int)piVar2 + 0x155a) & 0x10) != 0)) goto LAB_007a193d;
  }
  if (param_1[0x187] == 0) {
    return;
  }
  if (iVar1 != 0) {
    return;
  }
LAB_007a193d:
  FUN_00b96b30();
  FUN_00dc1270(0x41700000,0);
  FUN_00a8caf0(0x10000d,0,0,0);
  return;
}

// 007A1970  FUN_007a1970  size=330  [between]
void __fastcall FUN_007a1970(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01b358e0;
    (**(code **)(*piVar2 + 4))(&DAT_01b358e0);
    iVar3 = FUN_00dd6d80(puVar4);
    if ((iVar3 != 0) && ((*(byte *)((int)piVar2 + 0x155a) & 0x18) != 0)) goto LAB_007a19d1;
  }
  if (param_1[0x187] == 0) {
    return;
  }
  if (iVar1 != 0) {
    if (param_1[0x187] == 0) {
      return;
    }
    iVar1 = FUN_00a959f0(0);
    if (45.0 <= (float)iVar1) {
      return;
    }
    iVar1 = FUN_00b7c970();
    if (iVar1 < 1) {
      return;
    }
    FUN_00cbc8f0(0x4000,1);
    iVar1 = FUN_00b7a7c0();
    piVar2 = param_1 + 0x250;
    *piVar2 = *piVar2 - iVar1;
    if (-1 < *piVar2) {
      return;
    }
    iVar1 = FUN_00a959f0(0);
    if ((float)iVar1 < 35.0) {
      return;
    }
    FUN_00b96b30();
    FUN_00dc1270(0x41700000,0);
    FUN_00a8caf0(0x10000d,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x007a1ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c))();
    return;
  }
LAB_007a19d1:
  FUN_00b96b30();
  FUN_00dc1270(0x41700000,0);
  FUN_00a8caf0(0x10000d,0,0,0);
  return;
}

// 007A1DC0  FUN_007a1dc0  size=54  [between]
void __fastcall FUN_007a1dc0(int param_1)

{
  int iVar1;
  
  FUN_00a8c820();
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  Behavior::vf44();
  return;
}

// 007A1E00  FUN_007a1e00  size=55  [between]
void __fastcall FUN_007a1e00(int param_1)

{
  if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x878) != 0)) {
    FUN_00912890(DAT_01885d20);
    *(undefined4 *)(param_1 + 0x870) = 1;
    *(undefined4 *)(param_1 + 0x878) = 0;
  }
  return;
}

// 007A1E40  FUN_007a1e40  size=192  [between]
void __fastcall FUN_007a1e40(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_70 [12];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  
  FUN_009dbcf0();
  FUN_009d18a0(*(undefined4 *)(param_1 + 0x4bc));
  if (*(int *)(param_1 + 0x7b4) == 0) {
    puVar1 = (undefined4 *)(param_1 + 0x40);
  }
  else {
    puVar1 = (undefined4 *)FUN_00916d50(local_70);
  }
  local_60 = *puVar1;
  local_5c = puVar1[1];
  local_58 = puVar1[2];
  local_54 = puVar1[3];
  local_40 = *(undefined4 *)(param_1 + 0x4f0);
  local_34 = 0x400;
  local_50 = 0;
  local_4c = 0x3f800000;
  local_48 = 0;
  local_44 = local_64;
  EffectAttrSystem::RequestCall(&local_60);
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091acf0(0);
  }
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
    **(undefined4 **)(param_1 + 0x370) = 1;
  }
  return;
}

// 007A1F00  FUN_007a1f00  size=362  [between]
float * __thiscall FUN_007a1f00(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  
  fVar3 = 0.0;
  iVar2 = *(int *)(param_1 + 0x330);
  *param_2 = 0.0;
  iVar6 = 0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (0 < *(int *)(iVar2 + 0xc4)) {
    fVar1 = param_2[3];
    pfVar5 = (float *)(*(int *)(iVar2 + 0xc0) + 0x18);
    fVar4 = fVar3;
    do {
      iVar6 = iVar6 + 1;
      *param_2 = pfVar5[-2] + *param_2;
      fVar4 = pfVar5[-1] + fVar4;
      param_2[1] = fVar4;
      fVar3 = *pfVar5 + fVar3;
      param_2[2] = fVar3;
      fVar1 = pfVar5[1] + fVar1;
      param_2[3] = fVar1;
      pfVar5 = pfVar5 + 0x1c;
    } while (iVar6 < *(int *)(iVar2 + 0xc4));
  }
  if (*(int *)(iVar2 + 0xc4) != 0) {
    fVar3 = (float)*(int *)(iVar2 + 0xc4);
    *param_2 = *param_2 / fVar3;
    param_2[1] = param_2[1] / fVar3;
    param_2[2] = param_2[2] / fVar3;
    param_2[3] = param_2[3] / fVar3;
  }
  if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
    return param_2;
  }
  fVar3 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(param_2,param_2);
    return param_2;
  }
  FUN_00dd5650(&DAT_0163d0ac);
  *param_2 = 0.0;
  param_2[1] = 1.0;
  param_2[2] = 0.0;
  return param_2;
}

// 007A20C0  Emc070::vf33C  size=2094  [class]
void __thiscall Emc070::vf33C(int param_1,int *param_2,uint *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  if (*(int *)(param_1 + 0xa50) != 0) {
    iVar10 = FUN_00a81330();
    if (iVar10 != 0) {
      FUN_009f8b10();
      FUN_00a7c950();
    }
    *(undefined4 *)(param_1 + 0x654) = 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x15b8) + 7 <= param_2[0x33]) && ((*(byte *)(param_1 + 0x1558) & 1) != 0))
  {
    param_3[6] = 0x42000;
    return;
  }
  iVar13 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar14 = 2;
  iVar10 = 0x10;
  do {
    uVar12 = 0x80000000 >> ((byte)(uVar14 - 2) & 0x1f);
    uVar11 = uVar14 - 2 >> 5;
    if (((param_3[uVar11 + 4] & uVar12) != 0) && ((param_3[uVar11] & uVar12) == 0)) {
      iVar13 = iVar13 + 1;
    }
    uVar12 = 0x80000000 >> ((byte)(uVar14 - 1) & 0x1f);
    uVar11 = uVar14 - 1 >> 5;
    if (((param_3[uVar11 + 4] & uVar12) != 0) && ((param_3[uVar11] & uVar12) == 0)) {
      iVar13 = iVar13 + 1;
    }
    uVar11 = 0x80000000 >> ((byte)uVar14 & 0x1f);
    if (((param_3[(uVar14 >> 5) + 4] & uVar11) != 0) && ((param_3[uVar14 >> 5] & uVar11) == 0)) {
      iVar13 = iVar13 + 1;
    }
    uVar12 = 0x80000000 >> ((byte)(uVar14 + 1) & 0x1f);
    uVar11 = uVar14 + 1 >> 5;
    if (((param_3[uVar11 + 4] & uVar12) != 0) && ((param_3[uVar11] & uVar12) == 0)) {
      iVar13 = iVar13 + 1;
    }
    uVar14 = uVar14 + 4;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (iVar13 != 0x40) {
    uVar14 = param_3[4];
    bVar2 = false;
    bVar3 = false;
    uVar11 = uVar14 >> 0x1e & 1;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    bVar9 = false;
    if (((uVar11 != 0) && ((~(*param_3 >> 0x1e) & 1) != 0)) && ((param_3[2] >> 0x1e & 1) == 0)) {
      bVar4 = true;
    }
    if ((((uVar14 & 0x20000000) != 0) && ((~(*param_3 >> 0x1d) & 1) != 0)) &&
       ((param_3[2] >> 0x1d & 1) == 0)) {
      bVar5 = true;
    }
    if ((((uVar14 & 0x10000000) != 0) && ((~(*param_3 >> 0x1c) & 1) != 0)) &&
       ((param_3[2] >> 0x1c & 1) == 0)) {
      bVar2 = true;
    }
    if ((((uVar14 & 0x8000000) != 0) && ((~(*param_3 >> 0x1b) & 1) != 0)) &&
       ((param_3[2] >> 0x1b & 1) == 0)) {
      bVar3 = true;
    }
    if ((((uVar14 & 0x1000000) != 0) && ((~*(byte *)((int)param_3 + 3) & 1) != 0)) &&
       ((*(byte *)((int)param_3 + 0xb) & 1) == 0)) {
      bVar6 = true;
    }
    if ((((uVar14 & 0x4000000) != 0) && ((~(*param_3 >> 0x1a) & 1) != 0)) &&
       ((param_3[2] >> 0x1a & 1) == 0)) {
      bVar7 = true;
    }
    if ((((int)uVar14 < 0) && ((~(*param_3 >> 0x1f) & 1) != 0)) && (-1 < (int)param_3[2])) {
      bVar8 = true;
    }
    if ((((uVar14 & 0x2000000) != 0) && ((~(*param_3 >> 0x19) & 1) != 0)) &&
       ((param_3[2] >> 0x19 & 1) == 0)) {
      bVar9 = true;
    }
    if ((bVar4) || ((uVar11 != 0 && ((param_3[2] >> 0x1e & 1) != 0)))) {
      param_2[1] = 8;
    }
    if ((bVar5) || (((param_3[4] & 0x20000000) != 0 && ((param_3[2] >> 0x1d & 1) != 0)))) {
      param_2[1] = param_2[1] | 0x10;
    }
    if ((bVar2) || (((param_3[4] & 0x10000000) != 0 && ((param_3[2] >> 0x1c & 1) != 0)))) {
      param_2[1] = param_2[1] | 4;
    }
    if ((bVar3) || (((param_3[4] & 0x8000000) != 0 && ((param_3[2] >> 0x1b & 1) != 0)))) {
      param_2[1] = param_2[1] | 2;
    }
    if ((bVar6) ||
       (((*(byte *)((int)param_3 + 0x13) & 1) != 0 && ((*(byte *)((int)param_3 + 0xb) & 1) != 0))))
    {
      param_2[1] = param_2[1] | 0x40;
    }
    uVar14 = param_3[4];
    if ((((uVar14 & 0x1000000) != 0) && ((~*(byte *)((int)param_3 + 3) & 1) != 0)) ||
       ((((uVar14 & 0x4000000) != 0 && ((~(*param_3 >> 0x1a) & 1) != 0)) ||
        ((((int)uVar14 < 0 && ((~(*param_3 >> 0x1f) & 1) != 0)) ||
         (iVar10 = FUN_0043f830(6), iVar10 != 0)))))) {
      param_2[1] = param_2[1] | 1;
    }
    iVar13 = 0;
    uVar14 = 2;
    iVar10 = 5;
    do {
      bVar1 = (byte)uVar14;
      uVar12 = 0x80000000 >> (bVar1 - 2 & 0x1f);
      uVar11 = uVar14 - 2 >> 5;
      if (((param_3[uVar11 + 4] & uVar12) != 0) && ((param_3[uVar11 + 2] & uVar12) == 0)) {
        iVar13 = iVar13 + 1;
      }
      uVar12 = 0x80000000 >> (bVar1 - 1 & 0x1f);
      uVar11 = uVar14 - 1 >> 5;
      if (((param_3[uVar11 + 4] & uVar12) != 0) && ((param_3[uVar11 + 2] & uVar12) == 0)) {
        iVar13 = iVar13 + 1;
      }
      uVar11 = 0x80000000 >> (bVar1 & 0x1f);
      if (((param_3[(uVar14 >> 5) + 4] & uVar11) != 0) &&
         ((param_3[(uVar14 >> 5) + 2] & uVar11) == 0)) {
        iVar13 = iVar13 + 1;
      }
      uVar12 = 0x80000000 >> (bVar1 + 1 & 0x1f);
      uVar11 = uVar14 + 1 >> 5;
      if (((param_3[uVar11 + 4] & uVar12) != 0) && ((param_3[uVar11 + 2] & uVar12) == 0)) {
        iVar13 = iVar13 + 1;
      }
      uVar12 = 0x80000000 >> (bVar1 + 2 & 0x1f);
      uVar11 = uVar14 + 2 >> 5;
      if (((param_3[uVar11 + 4] & uVar12) != 0) && ((param_3[uVar11 + 2] & uVar12) == 0)) {
        iVar13 = iVar13 + 1;
      }
      uVar12 = 0x80000000 >> (bVar1 + 3 & 0x1f);
      uVar11 = uVar14 + 3 >> 5;
      if (((param_3[uVar11 + 4] & uVar12) != 0) && ((param_3[uVar11 + 2] & uVar12) == 0)) {
        iVar13 = iVar13 + 1;
      }
      uVar14 = uVar14 + 6;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (((1 < iVar13) &&
        ((((uVar14 = param_3[4], -1 < (int)uVar14 || (-1 < (int)param_3[2])) ||
          ((uVar14 & 0x4000000) == 0)) ||
         (((param_3[2] >> 0x1a & 1) == 0 || (iVar10 = FUN_0043f860(6), iVar10 == 0)))))) &&
       ((*(int *)(param_1 + 0x4a0) != 1 || ((*(byte *)(param_2 + 1) & 1) == 0)))) {
      iVar10 = *(int *)(param_1 + 0x618);
      if (((iVar10 != 0x67) && (iVar10 != 0x68)) && (iVar10 != 99)) {
        if (*(int *)(param_1 + 0x15bc) == 0) {
          if ((*(byte *)(param_1 + 0x1558) & 1) != 0) {
            iVar10 = FUN_0043f830(7);
            if (((iVar10 != 0) || (iVar10 = FUN_0043f830(5), iVar10 != 0)) ||
               ((iVar10 = FUN_0043f830(0), iVar10 != 0 || (iVar10 = FUN_0043f830(6), iVar10 != 0))))
            {
              param_2[1] = param_2[1] | 1;
              *param_2 = 9;
            }
            if ((*(byte *)(param_1 + 0x1558) & 1) != 0) {
              if ((((bVar6) && (bVar7)) && (bVar8)) && (bVar9)) {
                iVar10 = FUN_0043f860(0x22);
                if (((iVar10 == 0) && (iVar10 = FUN_0043f860(0x24), iVar10 == 0)) &&
                   ((iVar10 = FUN_0043f860(0x23), iVar10 != 0 &&
                    (iVar10 = FUN_0043f860(0x25), iVar10 != 0)))) {
                  *param_2 = 5;
                  iVar10 = FUN_0043f860(0x26);
                  if (iVar10 != 0) {
                    *param_2 = 7;
                  }
                }
                iVar10 = FUN_0043f860(0x23);
                if (((iVar10 == 0) && (iVar10 = FUN_0043f860(0x25), iVar10 == 0)) &&
                   ((iVar10 = FUN_0043f860(0x22), iVar10 != 0 &&
                    (iVar10 = FUN_0043f860(0x24), iVar10 != 0)))) {
                  *param_2 = 6;
                  iVar10 = FUN_0043f860(0x27);
                  if (iVar10 != 0) {
                    *param_2 = 8;
                  }
                }
              }
              if ((*(byte *)(param_1 + 0x1558) & 1) != 0) {
                if (((bVar7) && (bVar8)) && (bVar9)) {
                  iVar10 = FUN_0043f860(0x22);
                  if (((iVar10 == 0) && (iVar10 = FUN_0043f860(0x24), iVar10 == 0)) &&
                     ((iVar10 = FUN_0043f860(0x23), iVar10 != 0 &&
                      (iVar10 = FUN_0043f860(0x25), iVar10 != 0)))) {
                    *param_2 = 5;
                    iVar10 = FUN_0043f860(0x26);
                    if (iVar10 != 0) {
                      *param_2 = 7;
                    }
                  }
                  iVar10 = FUN_0043f860(0x23);
                  if (((iVar10 == 0) && (iVar10 = FUN_0043f860(0x25), iVar10 == 0)) &&
                     ((iVar10 = FUN_0043f860(0x22), iVar10 != 0 &&
                      (iVar10 = FUN_0043f860(0x24), iVar10 != 0)))) {
                    *param_2 = 6;
                    iVar10 = FUN_0043f860(0x27);
                    if (iVar10 != 0) {
                      *param_2 = 8;
                    }
                  }
                }
                if (((*(byte *)(param_1 + 0x1558) & 1) != 0) &&
                   (((*param_2 == 0 || (*param_2 == 9)) && (bVar7)))) {
                  *param_2 = 4;
                  param_3[8] = 0;
                  iVar10 = FUN_0043f860(0x20);
                  if ((iVar10 == 0) || (iVar10 = FUN_0043f860(0x21), iVar10 == 0)) {
                    *param_2 = 3;
                    param_3[8] = 1;
                  }
                }
              }
            }
          }
          if ((*(byte *)(param_1 + 0x1558) & 1) != 0) {
            if (((*param_2 == 0) || (*param_2 == 9)) && (bVar8)) {
              *param_2 = 2;
              param_3[8] = 0;
              iVar10 = FUN_0043f860(0x20);
              if ((iVar10 == 0) || (iVar10 = FUN_0043f860(0x21), iVar10 == 0)) {
                *param_2 = 1;
                param_3[8] = 1;
              }
            }
            if (((*(byte *)(param_1 + 0x1558) & 1) != 0) &&
               (((*param_2 == 0 || (*param_2 == 9)) && (bVar9)))) {
              *param_2 = 0xe;
              param_3[8] = 0;
              iVar10 = FUN_0043f860(7);
              if (iVar10 == 0) {
                if (((bVar6) || (bVar4)) || (bVar5)) {
                  *param_2 = 1;
                }
                else {
                  *param_2 = 0xd;
                }
                param_3[8] = 1;
              }
            }
          }
          param_3[6] = *(uint *)(param_1 + 0x4b4);
          return;
        }
        *param_2 = 0xc;
        param_3[6] = *(uint *)(param_1 + 0x4b4);
        return;
      }
      if (((((uVar14 & 0x1000000) != 0) && ((~*(byte *)((int)param_3 + 3) & 1) != 0)) ||
          (iVar10 = FUN_0043f830(5), iVar10 != 0)) ||
         ((iVar10 = FUN_0043f830(0), iVar10 != 0 || (iVar10 = FUN_0043f830(6), iVar10 != 0)))) {
        param_2[1] = param_2[1] | 1;
      }
      *param_2 = 10;
      param_3[6] = *(uint *)(param_1 + 0x4b4);
      return;
    }
    param_3[6] = 0x42380;
    return;
  }
  param_3[6] = 0x42380;
  FUN_00dd5650(&DAT_0163de64);
  return;
}

// 007A28F0  Emc070::vf338  size=387  [class]
void __thiscall Emc070::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  
  iVar7 = 0;
  if (0 < param_4) {
    piVar4 = (int *)(param_3 + 0x18);
    iVar5 = param_4;
    do {
      if (*piVar4 == param_1[0x12d]) {
        iVar7 = iVar7 + 1;
      }
      piVar4 = piVar4 + 9;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if ((*(byte *)(param_1 + 0x556) & 1) == 0) {
    if ((1 < iVar7) && (0 < param_4)) {
      piVar4 = (int *)(param_3 + 0x18);
      iVar7 = param_4;
      do {
        if (((*piVar4 == param_1[0x12d]) && ((*(byte *)((int)piVar4 + -5) & 1) != 0)) &&
           ((*(byte *)((int)piVar4 + -0xd) & 1) != 0)) {
          *piVar4 = 0x42380;
        }
        piVar4 = piVar4 + 9;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if ((*(byte *)(param_1 + 0x556) & 1) != 0) goto LAB_007a2960;
  }
  else {
LAB_007a2960:
    if (0 < param_4) {
      puVar6 = (uint *)(param_3 + 8);
      iVar7 = param_4;
      do {
        if ((puVar6[4] == param_1[0x12d]) && (uVar1 = puVar6[2], (uVar1 & 0x1000000) != 0)) {
          uVar2 = *puVar6;
          uVar3 = uVar2 >> 0x18 & 1;
          if ((((uVar3 != 0) && ((uVar3 != 0 && ((int)uVar1 < 0)))) && ((int)uVar2 < 0)) &&
             (((uVar1 & 0x2000000) != 0 && ((uVar2 >> 0x19 & 1) != 0)))) {
            puVar6[4] = 0x42380;
          }
        }
        puVar6 = puVar6 + 9;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  iVar7 = param_1[0x186];
  if (((iVar7 == 0x67) || (iVar7 == 0x68)) || (iVar7 == 99)) {
    iVar7 = 0;
    if (0 < param_4) {
      piVar4 = (int *)(param_3 + 0x18);
      iVar5 = param_4;
      do {
        if (*piVar4 == param_1[0x12d]) {
          iVar7 = iVar7 + 1;
        }
        piVar4 = piVar4 + 9;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (iVar7 != 0) goto LAB_007a2a22;
    }
    if (0 < param_4) {
      iVar5 = 0;
      iVar7 = param_3;
      do {
        if (*(int *)(iVar7 + 0x18) != param_1[0x12d]) {
          *(int *)(iVar7 + 0x18) = param_1[0x12d];
          break;
        }
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0x24;
      } while (iVar5 < param_4);
    }
  }
LAB_007a2a22:
  iVar7 = 0;
  if (0 < param_4) {
    piVar4 = (int *)(param_3 + 0x18);
    do {
      if (*piVar4 == param_1[0x12d]) {
        iVar7 = iVar7 + 1;
      }
      piVar4 = piVar4 + 9;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    if (iVar7 != 0) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x364))(0xffffffff);
  (**(code **)(*param_1 + 0x344))(4,1,1);
  param_1[0x139] = 1;
  return;
}

// 007A2A80  Emc070::vf334  size=2282  [class]
void __thiscall Emc070::vf334(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined4 uVar16;
  
  EmBaseDLC::vf334(param_2,param_3);
  iVar4 = FUN_00ac8a30();
  if ((*(byte *)(iVar4 + 4) & 0x40) == 0) {
    if ((*(byte *)(param_1 + 0x12a) & 0x20) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0x67;
    }
    (**(code **)(*param_1 + 0x358))(uVar13,param_1 + 0x44c);
  }
  bVar3 = *(byte *)((int)param_1 + 0x1559) | (byte)*(undefined4 *)(iVar4 + 4);
  *(byte *)((int)param_1 + 0x1559) = bVar3;
  param_1[0x3a7] = (uint)bVar3;
  FUN_009fd240();
  FUN_00ac8d40(0);
  if (param_3 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar15 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar6 = FUN_00dd6d80(puVar15);
    uVar5 = -(uint)(iVar6 != 0) & (uint)param_3;
  }
  piVar10 = (int *)0x0;
  if ((uVar5 != 0) && (piVar10 = (int *)FUN_00acdea0(), piVar10 != (int *)0x0)) {
    puVar15 = &DAT_01b358e0;
    (**(code **)(*piVar10 + 4))(&DAT_01b358e0);
    iVar6 = FUN_00dd6d80(puVar15);
    if (iVar6 == 0) {
      piVar10 = (int *)0x0;
    }
    else if (piVar10 != param_1) {
      uVar13 = FUN_00a8cae0();
      uVar7 = FUN_00a8cad0(uVar13);
      uVar8 = FUN_00a8cac0(uVar7);
      uVar9 = FUN_00a8cab0(uVar8);
      FUN_00a8caf0(uVar9,uVar8,uVar7,uVar13);
      uVar16 = 0x3f800000;
      uVar14 = 0xbf800000;
      uVar13 = FUN_00a95d20(0);
      uVar12 = 0x3f800000;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = FUN_00a95df0(0);
      FUN_00a9e290(uVar7,uVar8,uVar9,uVar12,uVar13,uVar14,uVar16);
      fVar11 = (float10)FUN_00a958c0(0);
      FUN_00a92f90();
      iVar6 = FUN_00e26e90();
      if (iVar6 != 0) {
        Animation::Motion::Unit::setCurrentTime(0,(float)fVar11);
      }
      FUN_0040ac60(piVar10 + 0x2ac);
      *(undefined1 *)((int)param_1 + 0x1559) = *(undefined1 *)((int)piVar10 + 0x1559);
      *(char *)(param_1 + 0x556) = (char)piVar10[0x556];
      *(undefined1 *)((int)param_1 + 0x155a) = *(undefined1 *)((int)piVar10 + 0x155a);
      param_1[0x575] = piVar10[0x575];
      param_1[0x56e] = piVar10[0x56e];
      param_1[0x56f] = piVar10[0x56f];
    }
  }
  if ((*(byte *)(param_1 + 0x556) & 4) != 0) {
    if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
    }
    *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 4;
    param_1[0x569] = 0x3f800000;
    FUN_00ac8dd0("_R_leg",1);
    FUN_00ac9420("_EFD03");
  }
  if ((*(byte *)(param_1 + 0x556) & 2) != 0) {
    if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
    }
    *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 2;
    param_1[0x569] = 0x3f800000;
    FUN_00ac8dd0("_L_leg",1);
    FUN_00ac9420("_EFD04");
  }
  if ((*(byte *)(param_1 + 0x556) & 0x10) != 0) {
    if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
    }
    *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 0x10;
    param_1[0x569] = 0x3f800000;
    FUN_00ac8dd0("_R_arm",1);
    FUN_00ac9420("_EFD01");
  }
  if ((*(byte *)(param_1 + 0x556) & 8) != 0) {
    if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
    }
    *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 8;
    param_1[0x569] = 0x3f800000;
    FUN_00ac8dd0("_L_arm",1);
    FUN_00ac9420("_EFD02");
  }
  if ((*(byte *)(param_1 + 0x556) & 1) != 0) {
    FUN_0079fff0(0);
  }
  iVar6 = FUN_00a7c800();
  iVar6 = **(int **)(iVar6 + 0x330);
  iVar1 = param_1[0x128];
  iVar2 = piVar10[0x3a6];
  param_1[0x3a6] = iVar6;
  if (iVar1 != 1) {
    switch(iVar6 + -1) {
    case 0:
      if (iVar2 != iVar6) {
        uVar13 = 0x52;
LAB_007a3084:
        FUN_00a8caf0(uVar13,0,0,0);
        if (param_1[0x128] == 0) {
          iVar4 = FUN_00798b30();
          if (iVar4 != 0) {
            FUN_00a8caf0(0x5a,0,0,0);
          }
          if ((param_1[0x128] == 0) && ((*(byte *)((int)param_1 + 0x1559) & 6) != 0))
          goto LAB_007a30c0;
        }
LAB_007a30cf:
        if (param_1[0x128] == 1) {
          FUN_00a8caf0(0x5d,0,0,0);
        }
        param_1[0x139] = 1;
        goto LAB_007a2e59;
      }
      break;
    case 1:
      if (iVar2 != iVar6) {
        uVar13 = 0x53;
LAB_007a30c8:
        FUN_00a8caf0(uVar13,0,0,0);
        goto LAB_007a30cf;
      }
      break;
    case 2:
      if (iVar2 != iVar6) {
        uVar13 = 0x54;
        goto LAB_007a30c8;
      }
      break;
    case 3:
    case 8:
      if (iVar2 != iVar6) {
        uVar13 = 0x55;
        goto LAB_007a3084;
      }
      break;
    case 4:
      if (iVar2 != iVar6) {
        uVar13 = 0x58;
        goto LAB_007a30c8;
      }
      break;
    case 5:
      if (iVar2 != iVar6) {
        uVar13 = 0x59;
        goto LAB_007a30c8;
      }
      break;
    case 6:
      if (iVar2 != iVar6) {
LAB_007a30c0:
        uVar13 = 0x5a;
        goto LAB_007a30c8;
      }
      break;
    case 7:
      if (iVar2 != iVar6) {
        uVar13 = 0x5b;
        goto LAB_007a30c8;
      }
      break;
    case 9:
      goto switchD_007a2e35_caseD_a;
    case 10:
      goto switchD_007a2e35_caseD_b;
    case 0xb:
      goto switchD_007a2e35_caseD_c;
    case 0xc:
      if (iVar2 == iVar6) goto LAB_007a334c;
      uVar13 = 0x44;
      goto LAB_007a3345;
    case 0xd:
      if (iVar2 != iVar6) {
        uVar13 = 0x57;
        goto LAB_007a3084;
      }
      break;
    default:
      goto switchD_007a2e35_default;
    }
LAB_007a2e74:
    if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
    }
    *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 4;
    param_1[0x569] = 0x3f800000;
    FUN_00ac8dd0("_R_leg",1);
    FUN_00ac9420("_EFD03");
    if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
    }
    *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 2;
    param_1[0x569] = 0x3f800000;
    FUN_00ac8dd0("_L_leg",1);
    FUN_00ac9420("_EFD04");
    if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
    }
    *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 0x10;
    param_1[0x569] = 0x3f800000;
    FUN_00ac8dd0("_R_arm",1);
    FUN_00ac9420("_EFD01");
    if (((float)param_1[0x569] == 0.0) && (param_1[0x3a5] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x44c);
    }
    *(byte *)(param_1 + 0x556) = *(byte *)(param_1 + 0x556) | 8;
    param_1[0x569] = 0x3f800000;
    FUN_00ac8dd0("_L_arm",1);
    FUN_00ac9420("_EFD02");
    FUN_0079fff0(0);
    FUN_00ac8d40(1);
    goto LAB_007a334c;
  }
  switch(iVar6) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xd:
  case 0xe:
    if (iVar2 == iVar6) goto LAB_007a2e74;
    FUN_00a8caf0(0x5d,0,0,0);
    param_1[0x139] = 1;
LAB_007a2e59:
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(4,1,1);
    }
    goto LAB_007a2e74;
  case 10:
switchD_007a2e35_caseD_a:
    param_1[0x139] = 1;
    break;
  case 0xb:
switchD_007a2e35_caseD_b:
    param_1[0x139] = 1;
    FUN_00a8caf0(0x5c,0,0,0);
    break;
  case 0xc:
switchD_007a2e35_caseD_c:
    if (param_1[0x294] != 0) goto LAB_007a334c;
    param_1[0x139] = 1;
    uVar13 = 0x5c;
    goto LAB_007a3345;
  default:
switchD_007a2e35_default:
    if (iVar1 == 1) {
      FUN_00a8caf0(0x47,0,0,0);
      if ((((*(byte *)((int)param_1 + 0x1559) & 0x18) == 0) && (param_1[0x139] == 0)) &&
         (0 < param_1[0x21c])) goto LAB_007a334c;
    }
    else {
      if (((*(byte *)((int)param_1 + 0x1559) & 4) != 0) &&
         ((*(byte *)((int)param_1 + 0x155a) & 4) == 0)) {
        if (iVar1 == 0) {
          FUN_00a8caf0(0x44,0,0,0);
        }
        if (((*(byte *)((int)param_1 + 0x1559) & 0x18) != 0) &&
           (FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]), param_1[0x128] == 0)) {
          FUN_00a8caf0(0x53,0,0,0);
        }
      }
      if (((*(byte *)((int)param_1 + 0x1559) & 2) != 0) &&
         ((*(byte *)((int)param_1 + 0x155a) & 2) == 0)) {
        if (param_1[0x128] == 0) {
          FUN_00a8caf0(0x45,0,0,0);
        }
        if (((*(byte *)((int)param_1 + 0x1559) & 0x18) != 0) &&
           (FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]), param_1[0x128] == 0)) {
          FUN_00a8caf0(0x53,0,0,0);
        }
      }
      if ((*(byte *)((int)param_1 + 0x1559) & 6) == 0) {
        if (((*(byte *)(iVar4 + 4) & 0x10) != 0) && (param_1[0x128] == 0)) {
          FUN_00a8caf0(0x42,0,0,0);
        }
        if (((*(byte *)(iVar4 + 4) & 8) != 0) && (param_1[0x128] == 0)) {
          FUN_00a8caf0(0x43,0,0,0);
        }
      }
      if (((((*(byte *)((int)param_1 + 0x1559) & 4) == 0) ||
           ((*(byte *)((int)param_1 + 0x1559) & 2) == 0)) ||
          (((*(byte *)((int)param_1 + 0x155a) & 4) != 0 &&
           ((*(byte *)((int)param_1 + 0x155a) & 2) != 0)))) ||
         (FUN_00a8caf0(0x44,0,0,0), (*(byte *)((int)param_1 + 0x1559) & 0x18) == 0))
      goto LAB_007a334c;
      if (param_1[0x128] == 0) {
        FUN_00a8caf0(0x5b,0,0,0);
      }
      if (param_1[0x128] != 1) goto LAB_007a334c;
    }
    uVar13 = 0x5d;
LAB_007a3345:
    FUN_00a8caf0(uVar13,0,0,0);
    goto LAB_007a334c;
  }
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(4,1,1);
  }
LAB_007a334c:
  *(undefined1 *)((int)param_1 + 0x155a) = *(undefined1 *)((int)param_1 + 0x1559);
  param_1[0x3a9] = param_1[0x3a9] & 0xefffffff;
  return;
}

// 007A33D0  FUN_007a33d0  size=403  [callgraph]
void __fastcall FUN_007a33d0(int param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x155a);
  if (((bVar2 & 0x10) != 0) && ((bVar2 & 8) != 0)) {
    FUN_00a8caf0(0x5d,0,0,0);
    return;
  }
  if (((((bVar2 & 0x10) == 0) || ((bVar2 & 8) == 0)) && (*(int *)(param_1 + 0x11f8) != 0)) &&
     (((*(float *)(param_1 + 0xf18) < 0.0 && (iVar3 = FUN_00c15850(), iVar3 != 0)) &&
      ((*(float *)(param_1 + 0xaa0) <= 1.0471976 && (*(float *)(param_1 + 0xa8c) < 6.25)))))) {
    FUN_00a8caf0(0x1a,0,0,0);
  }
  if ((*(byte *)(param_1 + 0x155a) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x11f8) == 0) goto LAB_007a350e;
    if (((*(float *)(param_1 + 0x14e4) < 0.0) && (iVar3 = FUN_00c15850(), iVar3 != 0)) &&
       (((*(byte *)(param_1 + 0x155a) & 0x20) == 0 &&
        ((*(float *)(param_1 + 0xaa0) <= 0.5235988 &&
         (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)))))))
    {
      FUN_00a8caf0(0x19,0,0,0);
    }
  }
  if (((*(int *)(param_1 + 0x11f8) != 0) && (*(float *)(param_1 + 0xf18) < 0.0)) &&
     (*(float *)(param_1 + 0x920) < 0.0)) {
    FUN_00a8caf0(0x16,0,0,0);
  }
LAB_007a350e:
  if (*(float *)(param_1 + 0x920) < 0.0) {
    if (*(float *)(param_1 + 0xa9c) < -1.0471976) {
      FUN_00a8caf0(0x17,0,0,0);
    }
    if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
      FUN_00a8caf0(0x18,0,0,0);
    }
  }
  return;
}

// 007A3570  FUN_007a3570  size=382  [callgraph]
void __fastcall FUN_007a3570(int param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x155a);
  if (((bVar2 & 0x10) != 0) && ((bVar2 & 8) != 0)) {
    FUN_00a8caf0(0x5d,0,0,0);
    return;
  }
  if ((((((bVar2 & 0x10) == 0) || ((bVar2 & 8) == 0)) && (*(int *)(param_1 + 0x11f8) != 0)) &&
      ((*(float *)(param_1 + 0xf18) < 0.0 && (iVar3 = FUN_00c15850(), iVar3 != 0)))) &&
     ((*(float *)(param_1 + 0xaa0) <= 1.0471976 && (*(float *)(param_1 + 0xa8c) < 6.25)))) {
    FUN_00a8caf0(0x1a,0,0,0);
  }
  if ((*(byte *)(param_1 + 0x155a) & 0x10) == 0) {
    if (*(int *)(param_1 + 0x11f8) != 0) {
      if (((*(float *)(param_1 + 0x14e4) < 0.0) && (iVar3 = FUN_00c15850(), iVar3 != 0)) &&
         (((*(byte *)(param_1 + 0x155a) & 0x20) == 0 &&
          ((*(float *)(param_1 + 0xaa0) <= 0.5235988 &&
           (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0))))))
         ) {
        FUN_00a8caf0(0x19,0,0,0);
      }
      goto LAB_007a3672;
    }
  }
  else {
LAB_007a3672:
    if ((*(int *)(param_1 + 0x11f8) != 0) && (0.0 <= *(float *)(param_1 + 0x920)))
    goto LAB_007a3699;
  }
  FUN_00a8caf0(0x15,0,0,0);
LAB_007a3699:
  if (*(float *)(param_1 + 0x924) < 0.0) {
    if (*(float *)(param_1 + 0xa9c) < -1.0471976) {
      FUN_00a8caf0(0x17,0,0,0);
    }
    if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
      FUN_00a8caf0(0x18,0,0,0);
    }
  }
  return;
}

// 007A36F0  FUN_007a36f0  size=283  [callgraph]
void __fastcall FUN_007a36f0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x61,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43960000;
    param_1[0x249] = 0x42700000;
    if ((param_1[0x139] != 0) || (param_1[0x21c] < 1)) {
      FUN_00a8caf0(0x50,0,0,0);
      return;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_007a37a4;
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_007a37a4:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
    return;
  }
  return;
}

// 007A3810  FUN_007a3810  size=192  [callgraph]
void __fastcall FUN_007a3810(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_1[0x56f] = 1;
  uVar3 = 0x6f;
  if (param_1[0x187] == 0) {
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      uVar3 = 0x70;
    }
    FUN_00aa4080(uVar3,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    if ((param_1[0x139] != 0) || (param_1[0x21c] < 1)) {
      FUN_00a8caf0(0x50,0,0,0);
    }
  }
  return;
}

// 007A38D0  FUN_007a38d0  size=422  [callgraph]
void __fastcall FUN_007a38d0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  param_1[0x56f] = 1;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x74,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar2 = *(code **)(param_1[0x44c] + 8);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x139] = 1;
    (*pcVar2)(0x41200000,0,0);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(4,param_1[0x571],param_1[0x570]);
    }
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    FUN_007a0700();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    pcVar2 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)(2,0);
    return;
  case 2:
    pcVar2 = *(code **)(*param_1 + 0x20);
    param_1[0x248] = 0x43340000;
    param_1[0x187] = 3;
    (*pcVar2)();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    FUN_00c57120(param_1[0x13c]);
    piVar4 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c1d1c0(piVar4);
    param_1[0x1af] = 1;
    break;
  case 3:
    break;
  default:
    goto switchD_007a38f0_default;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    FUN_009fdde0();
    return;
  }
switchD_007a38f0_default:
  return;
}

// 007A3EF0  FUN_007a3ef0  size=865  [callgraph]
void __fastcall FUN_007a3ef0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0xa84) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x11f8) = *(uint *)(param_1 + 0xd44) >> 0x19 & 1;
  iVar9 = FUN_00a82d50();
  if (iVar9 == 4) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      uVar10 = FUN_0079c600();
      *(undefined4 *)(param_1 + 0xeec) = uVar10;
      goto LAB_007a3f43;
    }
  }
  else {
LAB_007a3f43:
    if (*(int *)(param_1 + 0xa84) != 0) {
      uVar10 = FUN_0079c720();
      *(undefined4 *)(param_1 + 0xee4) = uVar10;
    }
  }
  uVar10 = FUN_0079c980();
  *(undefined4 *)(param_1 + 0xef4) = uVar10;
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) | 0x80000000;
  iVar9 = FUN_00a82d50();
  if (((iVar9 == 4) || (iVar9 = FUN_00a82d50(), iVar9 == 3)) || (iVar9 = FUN_00a82d50(), iVar9 == 2)
     ) {
    iVar9 = *(int *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0x1520) = *(undefined4 *)(iVar9 + 0x40);
    *(undefined4 *)(param_1 + 0x1524) = *(undefined4 *)(iVar9 + 0x44);
    *(undefined4 *)(param_1 + 0x1528) = *(undefined4 *)(iVar9 + 0x48);
    *(undefined4 *)(param_1 + 0x152c) = *(undefined4 *)(iVar9 + 0x4c);
  }
  if (*(int *)(param_1 + 0x618) == 2) {
    *(undefined4 *)(param_1 + 0x1520) = *(undefined4 *)(param_1 + 0xed0);
    *(undefined4 *)(param_1 + 0x1524) = *(undefined4 *)(param_1 + 0xed4);
    *(undefined4 *)(param_1 + 0x1528) = *(undefined4 *)(param_1 + 0xed8);
    *(undefined4 *)(param_1 + 0x152c) = *(undefined4 *)(param_1 + 0xedc);
  }
  iVar9 = FUN_00a82d50();
  if ((iVar9 == 2) && ((*(uint *)(param_1 + 0xea4) & 0x40000000) != 0)) {
    *(undefined4 *)(param_1 + 0x1520) = *(undefined4 *)(param_1 + 0xd30);
    *(undefined4 *)(param_1 + 0x1524) = *(undefined4 *)(param_1 + 0xd34);
    *(undefined4 *)(param_1 + 0x1528) = *(undefined4 *)(param_1 + 0xd38);
    *(undefined4 *)(param_1 + 0x152c) = *(undefined4 *)(param_1 + 0xd3c);
    *(undefined4 *)(param_1 + 0xec8) = 0;
    *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0x7fffffff;
  }
  iVar9 = *(int *)(param_1 + 0xa84);
  pfVar1 = (float *)(param_1 + 0x1520);
  *(undefined4 *)(param_1 + 0x1530) = *(undefined4 *)(iVar9 + 0x40);
  pfVar2 = (float *)(param_1 + 0xeb0);
  *(undefined4 *)(param_1 + 0x1534) = *(undefined4 *)(iVar9 + 0x44);
  *(undefined4 *)(param_1 + 0x1538) = *(undefined4 *)(iVar9 + 0x48);
  *(undefined4 *)(param_1 + 0x153c) = *(undefined4 *)(iVar9 + 0x4c);
  local_20 = *pfVar1;
  local_1c = *(float *)(param_1 + 0x1524);
  local_18 = *(float *)(param_1 + 0x1528);
  local_14 = *(undefined4 *)(param_1 + 0x152c);
  *pfVar2 = *pfVar1;
  *(undefined4 *)(param_1 + 0xeb4) = *(undefined4 *)(param_1 + 0x1524);
  *(undefined4 *)(param_1 + 0xeb8) = *(undefined4 *)(param_1 + 0x1528);
  *(undefined4 *)(param_1 + 0xebc) = *(undefined4 *)(param_1 + 0x152c);
  *(undefined4 *)(param_1 + 0xec0) = 0;
  fVar3 = *(float *)(param_1 + 0xec8) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0xec8) = fVar3;
  if (fVar3 < 0.0) {
    *(undefined4 *)(param_1 + 0xec4) = 1;
    *(undefined4 *)(param_1 + 0xec8) = 0x42700000;
  }
  iVar9 = FUN_00a979d0();
  if ((iVar9 == 0) || (*(int *)(param_1 + 0xec4) != 0)) {
    FUN_00a8d330(param_1 + 0x40,pfVar1);
    *(undefined4 *)(param_1 + 0xec4) = 0;
  }
  iVar9 = FUN_00aa09c0(pfVar2,0x40200000,0);
  if ((iVar9 != 0) && (iVar9 = FUN_00a8d380(), iVar9 != 0)) {
    *(undefined4 *)(param_1 + 0xec0) = 1;
  }
  FUN_00a979f0(&local_2c);
  *pfVar2 = local_2c;
  *(undefined4 *)(param_1 + 0xeb4) = local_28;
  *(undefined4 *)(param_1 + 0xeb8) = local_24;
  *(undefined4 *)(param_1 + 0xebc) = 0x3f800000;
  if (*(int *)(param_1 + 0x11f8) == 0) {
    if (*(int *)(param_1 + 0xec0) != 0) goto LAB_007a4232;
  }
  else {
    iVar9 = *(int *)(param_1 + 0xeec);
    iVar11 = FUN_00a8d3d0(6);
    if (((iVar11 == 0) && (iVar9 == 0)) ||
       (fVar3 = *(float *)(param_1 + 0x40) - *pfVar2,
       fVar8 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0xeb4),
       fVar7 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0xeb8),
       fVar6 = *(float *)(param_1 + 0x40) - local_20, fVar5 = *(float *)(param_1 + 0x44) - local_1c,
       fVar4 = *(float *)(param_1 + 0x48) - local_18,
       fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 < fVar8 * fVar8 + fVar3 * fVar3 + fVar7 * fVar7
       )) goto LAB_007a4232;
  }
  local_20 = *pfVar2;
  local_1c = *(float *)(param_1 + 0xeb4);
  local_18 = *(float *)(param_1 + 0xeb8);
  local_14 = *(undefined4 *)(param_1 + 0xebc);
  *(uint *)(param_1 + 0xea4) = *(uint *)(param_1 + 0xea4) & 0x7fffffff;
LAB_007a4232:
  FUN_00a8e880(&local_20);
  FUN_0079c840(&local_20);
  return;
}

// 007A4260  FUN_007a4260  size=2095  [callgraph]
undefined4 __thiscall FUN_007a4260(int *param_1,int *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_EBP;
  bool bVar10;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int *local_14;
  int local_10;
  undefined4 local_4;
  
  piVar5 = param_2;
  local_4 = 0;
  iVar7 = FUN_00a8cab0();
  bVar4 = false;
  if (((((*(byte *)(param_1 + 0x556) & 1) != 0) || (iVar7 == 0x2e)) || (iVar7 == 0x35)) ||
     (((iVar7 == 0x33 || (iVar7 == 0x34)) || (iVar8 = FUN_00a8e520(), iVar8 != 0)))) {
    bVar4 = true;
  }
  iVar8 = *param_2;
  if (iVar8 == 0) {
    return 0;
  }
  if (iVar8 == 1) {
    return 0;
  }
  if (iVar8 == 2) {
    return 0;
  }
  if (iVar8 == 0x1b0) {
    return 0;
  }
  if (iVar8 == 0x147) {
    return 0;
  }
  if (iVar8 == 0x101) {
    return 0;
  }
  if (iVar8 == 0x114) {
    return 0;
  }
  local_10 = param_2[1];
  if ((*(byte *)(param_2 + 0x23) & 0x10) != 0) {
    local_10 = 0;
  }
  local_14 = (int *)0x0;
  iVar8 = FUN_00a81330();
  if (iVar8 != 0) {
    local_14 = (int *)FUN_00a7c8a0();
  }
  if (((0 < param_1[0x21c]) && (local_14 != (int *)0x0)) &&
     ((*(byte *)(local_14 + 0x130) & 0x10) != 0)) {
    FUN_0043fa90();
    FUN_00a88250(iVar8,param_2 + 0x40);
    (**(code **)(*param_1 + 0x21c))(local_14,(char)param_2[4],0x3c23d70a,0);
    (**(code **)(*param_1 + 0x220))(0x40000000);
    iVar8 = (**(code **)(*local_14 + 0x17c))();
    if (iVar8 != 0) {
      (**(code **)(*local_14 + 0x184))(*param_2,param_1[0x13c],param_2);
    }
  }
  puVar1 = (uint *)(param_2 + 0x23);
  uVar9 = 1;
  param_2 = (int *)0x1;
  if ((((*puVar1 & 0x10000) != 0) && ((char)param_1[0x556] != '\0')) &&
     ((char)param_1[0x556] != *(char *)((int)param_1 + 0x155a))) {
    uVar9 = 0x41;
    param_2 = (int *)0x41;
  }
  if ((((*puVar1 & 0x8000) != 0) && ((char)param_1[0x556] != '\0')) &&
     ((char)param_1[0x556] != *(char *)((int)param_1 + 0x155a))) {
    param_2 = (int *)(uVar9 & 0xffffffbf | 0x20);
  }
  fVar11 = (float10)FUN_00ddba30((float)piVar5[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar11;
  if (param_1[0x128] == 0) {
    uVar17 = 0x3f800000;
    uVar16 = 0;
    uVar15 = 0x8000210;
    uVar14 = 0x3f800000;
    uVar13 = 0x3d088889;
    uVar12 = 1;
    sVar6 = FUN_00dde2d0(0,2);
    FUN_00aa4080(sVar6 + 0x7d,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17);
  }
  if (param_1[0x128] == 1) {
    FUN_00aa4080(0x6e,1,0x3d088889,0x3f800000,0x8000210,0,0x3f800000);
  }
  if ((4 < *(byte *)((int)piVar5 + 0x11)) && (param_1[0x568] == 0)) {
    param_1[0x500] = param_1[0x500] - (uint)*(byte *)((int)piVar5 + 0x11);
  }
  bVar3 = true;
  if ((param_1[0x56a] != 0) && (*piVar5 == 0x93)) {
    param_2 = (int *)0x40000;
    local_10 = 0;
    bVar3 = false;
  }
  if (iVar7 == 6) {
    bVar3 = false;
  }
  bVar10 = false;
  if (((param_1[0x128] != 0) || (param_1[0x568] != 0)) || (!bVar3)) goto LAB_007a478f;
  if (iVar7 == 0x3e) {
    bVar10 = true;
  }
  else if ((*piVar5 == 0x42) && (iVar8 = FUN_00798af0(), iVar8 == 0)) {
    FUN_00a8caf0(0x35,0,0,0);
    param_2 = (int *)0x2;
    local_10 = 0;
    if (4 < *(byte *)((int)piVar5 + 0x11)) {
      param_1[0x500] = param_1[0x500] + (uint)*(byte *)((int)piVar5 + 0x11);
    }
  }
  iVar8 = *piVar5;
  if ((((iVar8 == 0x1a9) || (iVar8 == 0x1aa)) || ((iVar8 == 0x1a7 || (iVar8 == 0x1a8)))) &&
     (4 < *(byte *)((int)piVar5 + 0x11))) {
    param_1[0x500] = param_1[0x500] + (uint)*(byte *)((int)piVar5 + 0x11);
  }
  iVar8 = (**(code **)(*param_1 + 0x1d8))();
  if ((iVar8 == 0) || (FUN_00a8caf0(0x37,0,0,0), *piVar5 != 0x4f)) {
LAB_007a45da:
    if ((iVar7 == 0x33) && (*piVar5 == 0x4f)) {
      FUN_00a8caf0(0x34,0,0,0);
      iVar8 = FUN_0079a460();
      if (iVar8 != 0) {
        uVar12 = 2;
        goto LAB_007a4606;
      }
    }
  }
  else {
    if (iVar7 == 0x1e) {
      uVar12 = 0;
      iVar7 = 0x38;
    }
    else {
      if (iVar7 != 0x38) goto LAB_007a45da;
      uVar12 = 0;
    }
LAB_007a4606:
    FUN_00a8caf0(iVar7,uVar12,0,0);
  }
  if ((((piVar5[0x24] & 0x800000U) != 0) && (bVar4)) &&
     (FUN_00a8caf0(0x36,0,0,0), param_1[0x500] < 1)) {
    FUN_00798b50();
  }
  if (((!bVar10) && (iVar7 = (**(code **)(*param_1 + 0x1d8))(), iVar7 == 0)) && (param_1[0x500] < 1)
     ) {
    iVar7 = FUN_0079a460();
    if (iVar7 == 0) {
      FUN_00798b90();
    }
    FUN_00a8caf0(0x2e,0,0,0);
    FUN_00798b50();
  }
  if ((*(byte *)(piVar5 + 0x23) & 0x20) != 0) {
    *(undefined2 *)(param_1 + 0x209) = 1;
    param_1[0x20a] = 0x78;
    FUN_00a8caf0(0x2e,0,0,0);
    FUN_00798b50();
  }
  iVar7 = *piVar5;
  if (((iVar7 == 0x1a9) || (iVar7 == 0x1aa)) || ((iVar7 == 0x1a7 || (iVar7 == 0x1a8)))) {
    if (!bVar10) {
LAB_007a4701:
      if (((piVar5[0x23] & 1U) == 0) || (0.0 < (float)param_1[0x572])) {
        if ((piVar5[0x23] & 0x20000U) == 0) goto LAB_007a475f;
        uVar12 = 0x3f;
      }
      else {
        pcVar2 = *(code **)(*param_1 + 0x358);
        param_1[0x572] = 0x44610000;
        (*pcVar2)(0x18e,0);
        uVar12 = 0x3e;
      }
LAB_007a474d:
      param_1[0x566] = 0;
      FUN_00a8caf0(uVar12,0,0,0);
      bVar10 = true;
    }
  }
  else {
    param_1[0x566] = param_1[0x566] + local_10;
    param_1[0x567] = (int)(float)param_1[0x560];
    if (!bVar10) {
      if (param_1[0x566] < param_1[0x55f]) goto LAB_007a4701;
      uVar12 = 0x3e;
      goto LAB_007a474d;
    }
  }
LAB_007a475f:
  if (((*(byte *)(param_1 + 0x556) & 1) != 0) && ((*piVar5 == 0x4c || (*piVar5 == 0x4b)))) {
    FUN_00a8caf0(0x3d,0,0,0);
  }
  if (*piVar5 == 0x5f) {
    param_2 = (int *)((uint)param_2 | 0x10000);
  }
LAB_007a478f:
  if ((param_1[0x128] == 1) && (bVar3)) {
    if (param_1[0x500] < 1) {
      FUN_00a8caf0(0x47,0,0,0);
      FUN_00798b50();
    }
    if ((*(byte *)(piVar5 + 0x23) & 0x20) != 0) {
      *(undefined2 *)(param_1 + 0x209) = 1;
      param_1[0x20a] = 0x78;
      FUN_00a8caf0(0x47,0,0,0);
      FUN_00798b50();
    }
    if ((!bVar10) && ((piVar5[0x23] & 0x20000U) != 0)) {
      param_1[0x566] = 0;
      FUN_00a8caf0(0x48,0,0,0);
      bVar10 = true;
    }
    if (*piVar5 == 0x5f) {
      param_2 = (int *)((uint)param_2 | 0x10000);
    }
  }
  if ((param_1[0x575] == 0) && ((*piVar5 == 0x92 || ((*(byte *)(piVar5 + 0x23) & 2) != 0)))) {
    param_2 = (int *)((uint)param_2 & 0xffffffbf | 0x20);
    if ((*(byte *)(piVar5 + 0x23) & 2) != 0) {
      (**(code **)(*param_1 + 0x358))(399,0);
    }
    param_1[0x575] = 1;
    FUN_0079a590(0);
    FUN_0079a610(0);
    FUN_0079a490(0);
    FUN_0079a510(0);
    FUN_0079fff0(0);
    FUN_007a00b0(0);
  }
  (**(code **)(*param_1 + 0x30c))(local_10,0);
  if (((*(byte *)(param_1 + 0x556) & 0x10) == 0) &&
     (iVar7 = FUN_00fdbc60(), param_1[0x21c] <= iVar7)) {
    FUN_0079a590(1);
  }
  if (((*(byte *)(param_1 + 0x556) & 8) == 0) && (iVar7 = FUN_00fdbc60(), param_1[0x21c] <= iVar7))
  {
    FUN_0079a610(1);
  }
  if (((*(byte *)(param_1 + 0x556) & 4) == 0) && (iVar7 = FUN_00fdbc60(), param_1[0x21c] <= iVar7))
  {
    FUN_0079a490(1);
  }
  if (((*(byte *)(param_1 + 0x556) & 2) == 0) && (iVar7 = FUN_00fdbc60(), param_1[0x21c] <= iVar7))
  {
    FUN_0079a510(1);
  }
  if (((((*(byte *)(param_1 + 0x556) & 1) == 0) && (iVar7 = FUN_00fdbc60(), param_1[0x21c] <= iVar7)
       ) && (FUN_0079fff0(1), !bVar10)) && (param_1[0x128] == 0)) {
    FUN_00a8caf0(0x2e,0,0,0);
  }
  if (((*(byte *)(param_1 + 0x556) & 0x80) == 0) &&
     (iVar7 = FUN_00fdbc60(), param_1[0x21c] <= iVar7)) {
    FUN_007a00b0(1);
  }
  if (param_1[0x21c] < 1) {
    if (param_1[0x294] != 0) {
      FUN_007a0690(piVar5);
    }
    param_1[0x139] = 1;
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    (**(code **)(*param_1 + 0x198))(unaff_EBP,piVar5,param_2);
    FUN_00a8caf0(0x4c,0,0,0);
    if (param_1[0x128] == 1) {
      FUN_00a8caf0(0x5d,0,0,0);
      return 0;
    }
  }
  else {
    (**(code **)(*param_1 + 0x198))(unaff_EBP,piVar5,param_2);
    local_4 = 1;
  }
  return local_4;
}

// 007A4A90  Emc070::vf150  size=278  [class]
void __thiscall Emc070::vf150(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_2 == 0x37) {
      FUN_00a8caf0(0x2b,0,0,0);
      FUN_007a0900();
      return;
    }
    if (param_2 == 0x38) {
      FUN_00a8caf0(0x2c,0,0,0);
      FUN_007a0900();
      return;
    }
    if (param_2 == 0x39) {
      FUN_00a8caf0(0x2d,0,0,0);
      FUN_007a0900();
      return;
    }
    if (param_2 == 0x3a) {
      param_1[0x540] = -0x40800000;
      FUN_00a8caf0(99,0,0,0);
      (**(code **)(*param_1 + 0x220))(0x41200000);
      FUN_007a0900();
      return;
    }
    if (param_2 == 0x3b) {
      FUN_00a8caf0(0x67,0,0,0);
      FUN_007a0900();
      return;
    }
    if (param_2 == 0x3c) {
      FUN_00a8caf0(0x68,0,0,0);
      FUN_007a0900();
    }
  }
  return;
}

// 007A4BB0  Emc070::vf158  size=179  [class]
undefined4 Emc070::vf158(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar3);
    if (iVar1 != 0) {
      puVar3 = &DAT_01b35b20;
      (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
      FUN_00dd6d80(puVar3);
    }
  }
  if (param_1 == 0x37) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x10006c) {
      return 1;
    }
  }
  else if (param_1 == 0x38) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x10006d) {
      return 1;
    }
  }
  else if ((param_1 == 0x39) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x10006e)) {
    return 1;
  }
  return 0;
}

// 007A4C70  FUN_007a4c70  size=381  [between]
void __fastcall FUN_007a4c70(int *param_1)

{
  int iVar1;
  float10 fVar2;
  int local_58 [2];
  int local_50;
  float local_4c [2];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x18,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    iVar1 = FUN_00a92f90();
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) | 1;
    param_1[0x249] = 0;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a92f90();
  FUN_00e332b0(&local_40,*(undefined4 *)(iVar1 + 0xa0));
  fVar2 = (float10)FUN_00a581b0(local_58,SQRT(local_38 * local_38 +
                                              local_40 * local_40 + local_3c * local_3c),
                                param_1[0x249]);
  param_1[0x249] = (int)(float)fVar2;
  param_1[0x14] = local_58[0];
  param_1[0x16] = local_50;
  FUN_00a585a0(local_4c,0x3e800000,(float)fVar2);
  fVar2 = (float10)fpatan((float10)local_4c[0],(float10)local_44);
  param_1[0x25] = (int)(float)fVar2;
  iVar1 = FUN_00a54a60(param_1[0x249]);
  if (iVar1 != 0) {
    param_1[0x128] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e5ac0(2);
    }
    if (param_1[0x2c2] != -1) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00a8caf0(10,0,0,0);
  }
  return;
}

// 007A4DF0  FUN_007a4df0  size=1182  [between]
void __fastcall FUN_007a4df0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  iVar3 = FUN_00a82d50();
  if ((iVar3 == 1) && (*(int *)(param_1 + 0xb08) != -1)) {
    FUN_00a8caf0(0,0,0,0);
    if ((*(uint *)(param_1 + 0xea4) & 0x20000000) == 0) {
      return;
    }
    FUN_00a8caf0(2,0,0,0);
    return;
  }
  iVar3 = FUN_00a82d50();
  if (iVar3 == 2) {
LAB_007a4f3d:
    FUN_00a8caf0(9,0,0,0);
    return;
  }
  iVar3 = FUN_00a82d50();
  if (iVar3 == 3) {
    FUN_00a8caf0(10,0,0,0);
    return;
  }
  iVar3 = FUN_0079a9d0(1);
  if (iVar3 != 0) {
    return;
  }
  iVar3 = FUN_00416910(6);
  if (iVar3 != 0) {
    FUN_0079aa90();
    return;
  }
  iVar3 = FUN_00a82d50();
  if (((iVar3 == 4) && (iVar3 = FUN_00464910(), iVar3 != 0)) && (*(int *)(param_1 + 0x11f8) != 0)) {
    if ((*(float *)(param_1 + 0xa8c) <= 25.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
      return;
    }
    if ((25.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988))
    goto LAB_007a4f3d;
    fVar1 = *(float *)(param_1 + 0xaa0);
    if (!NAN(fVar1) && 0.5235988 < fVar1 != (fVar1 == 0.5235988)) {
      FUN_00a8caf0(0xd,0,0,0);
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_00a8caf0(0xe,0,0,0);
      }
    }
  }
  iVar3 = FUN_00a82d50();
  if (iVar3 == 4) {
    if (*(int *)(param_1 + 0x11f8) == 0) {
      FUN_00a8caf0(10,0,0,0);
      return;
    }
LAB_007a4fc5:
    if (((((*(float *)(param_1 + 0xf18) < 0.0) && (iVar3 = FUN_00c15850(), iVar3 != 0)) &&
         (iVar3 = FUN_00a90070(5), iVar3 != 0)) &&
        ((iVar3 = FUN_007a0350(), iVar3 == 0 && (*(float *)(param_1 + 0xaa0) < 2.0943952)))) &&
       ((*(int *)(param_1 + 0x15b4) != 0 && (iVar3 = FUN_00ac4d60(1), iVar3 == 0)))) {
      FUN_00a8caf0(9,0,0,0);
    }
    if (*(int *)(param_1 + 0x11f8) != 0) {
      iVar3 = FUN_00a82d50();
      if (iVar3 == 4) {
        if ((*(float *)(param_1 + 0xa8c) <= 16.0) && (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
          FUN_00a8caf0(9,0,0,0);
        }
        if ((*(float *)(param_1 + 0xa8c) <= 16.0) &&
           (fVar1 = *(float *)(param_1 + 0xaa0),
           !NAN(fVar1) && 1.0471976 < fVar1 != (fVar1 == 1.0471976))) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,1);
          FUN_00a8caf0(sVar2 + 0x13,uVar4,uVar5,uVar6);
        }
        fVar1 = *(float *)(param_1 + 0xaa0);
        if (!NAN(fVar1) && 1.0471976 < fVar1 != (fVar1 == 1.0471976)) {
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = 0;
          sVar2 = FUN_00dde2d0(0,1);
          FUN_00a8caf0(sVar2 + 0x13,uVar4,uVar5,uVar6);
        }
      }
      if (((*(int *)(param_1 + 0x11f8) != 0) && (*(float *)(param_1 + 0x14e0) < 0.0)) &&
         (iVar3 = FUN_00a90070(5), iVar3 != 0)) {
        if ((*(float *)(param_1 + 0xa8c) <= 9.0) && (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
          FUN_007a02f0();
        }
        fVar1 = *(float *)(param_1 + 0xa8c);
        if (((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) &&
            (*(float *)(param_1 + 0xa8c) <= 64.0)) && (*(float *)(param_1 + 0xaa0) < 0.34906584)) {
          FUN_0079a8d0();
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0x11f8) != 0) goto LAB_007a4fc5;
  if (*(int *)(param_1 + 0x11e8) == 0) goto LAB_007a525c;
  iVar3 = FUN_00a82d50();
  if (iVar3 == 4) {
    iVar3 = FUN_00a90070(5);
    if (iVar3 != 0) goto LAB_007a51c0;
LAB_007a5209:
    FUN_00a8caf0(9,0,0,0);
    fVar1 = *(float *)(param_1 + 0xaa0);
    if (NAN(fVar1) || 0.5235988 < fVar1 == (fVar1 == 0.5235988)) goto LAB_007a525c;
    FUN_00a8caf0(0xd,0,0,0);
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) goto LAB_007a525c;
    uVar4 = 0xe;
  }
  else {
    FUN_00a88b50(4,1);
LAB_007a51c0:
    if (*(float *)(param_1 + 0x1508) <= 60.0) goto LAB_007a5209;
    if (((*(byte *)(param_1 + 0x155a) & 0x10) != 0) || (*(int *)(param_1 + 0x15b4) != 0)) {
      FUN_0079a8d0();
      goto LAB_007a525c;
    }
    uVar4 = 0x23;
  }
  FUN_00a8caf0(uVar4,0,0,0);
LAB_007a525c:
  if ((*(int *)(param_1 + 0x11f8) == 0) && (iVar3 = FUN_00a82d50(), iVar3 == 4)) {
    FUN_00a8caf0(10,0,0,0);
    return;
  }
  return;
}

// 007A5290  FUN_007a5290  size=475  [between]
void __fastcall FUN_007a5290(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(7,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_00fdbc60();
    if (iVar3 < *(int *)(param_1 + 0x870)) {
      *(int *)(param_1 + 0x1404) = *(int *)(param_1 + 0x1404) + 1;
      if (*(int *)(param_1 + 0x158c) <= *(int *)(param_1 + 0x1404)) {
        *(int *)(param_1 + 0x1404) = *(int *)(param_1 + 0x158c);
      }
    }
    sVar2 = FUN_00dde2d0(0,*(undefined2 *)(param_1 + 0x1588));
    *(int *)(param_1 + 0x1400) =
         (int)sVar2 + *(int *)(param_1 + 0x1590) * *(int *)(param_1 + 0x1404) +
         *(int *)(param_1 + 0x1584);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0xb,0,0,0);
    sVar2 = FUN_00dde2d0(0,3);
    if (sVar2 != 0) {
      FUN_00a8caf0(0xd,0,0,0);
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_00a8caf0(0xe,0,0,0);
      }
    }
    if (*(int *)(param_1 + 0x11f8) != 0) {
      if ((*(float *)(param_1 + 0xa8c) <= 9.0) && (*(float *)(param_1 + 0xaa0) < 1.5707964)) {
        FUN_007a02f0();
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 != 0) {
          FUN_0079a870();
        }
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if (((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) && (*(float *)(param_1 + 0xa8c) <= 64.0)
          ) && (*(float *)(param_1 + 0xaa0) < 0.34906584)) {
        FUN_0079a8d0();
      }
    }
    if (((*(byte *)(param_1 + 0x155a) & 0x10) != 0) && ((*(byte *)(param_1 + 0x155a) & 8) != 0)) {
      FUN_00a8caf0(10,0,0,0);
    }
  }
  return;
}

// 007A5470  FUN_007a5470  size=941  [between]
void __fastcall FUN_007a5470(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x618) == 0) {
    return;
  }
  iVar2 = FUN_0079a9d0(1);
  if (iVar2 != 0) {
    return;
  }
  if (((*(float *)(param_1 + 0xa8c) <= 9.0) && (*(float *)(param_1 + 0xaa0) < 1.0471976)) &&
     (iVar2 = FUN_00464910(), iVar2 != 0)) {
    FUN_00a8caf0(7,0,0,0);
  }
  iVar2 = FUN_00a82d50();
  if (iVar2 == 1) {
    if (*(int *)(param_1 + 0xb08) == -1) {
      FUN_00a8caf0(7,0,0,0);
      return;
    }
    FUN_00a8caf0(0,0,0,0);
    if ((*(uint *)(param_1 + 0xea4) & 0x20000000) == 0) {
      return;
    }
    FUN_00a8caf0(2,0,0,0);
    return;
  }
  iVar2 = FUN_00a82d50();
  if ((iVar2 == 2) && (300.0 < *(float *)(param_1 + 0x920))) {
    FUN_00a8caf0(7,0,0,0);
  }
  iVar2 = FUN_00a82d50();
  if (iVar2 == 3) {
    FUN_00a8caf0(10,0,0,0);
  }
  if (0xb3 < *(int *)(param_1 + 0x1210)) {
    FUN_00a8caf0(0x12,0,0,0);
    return;
  }
  iVar2 = FUN_00a82d50();
  if (iVar2 != 4) {
    return;
  }
  iVar2 = FUN_00a82d50();
  if (iVar2 == 4) {
    if (*(int *)(param_1 + 0x11f8) == 0) {
      FUN_00a8caf0(10,0,0,0);
      return;
    }
LAB_007a55f7:
    if (((*(float *)(param_1 + 0xf18) < 0.0) && (iVar2 = FUN_00c15850(), iVar2 != 0)) &&
       (iVar2 = FUN_00a90070(5), iVar2 != 0)) {
      FUN_007a0350();
    }
    if ((((*(int *)(param_1 + 0x11f8) != 0) && (*(float *)(param_1 + 0x14e0) < 0.0)) &&
        (iVar2 = FUN_00a90070(5), iVar2 != 0)) &&
       ((*(float *)(param_1 + 0xa8c) <= 9.0 && (*(float *)(param_1 + 0xaa0) < 1.0471976)))) {
      FUN_007a02f0();
      goto LAB_007a56e1;
    }
  }
  else if (*(int *)(param_1 + 0x11f8) != 0) goto LAB_007a55f7;
  if ((*(float *)(param_1 + 0x1508) <= 60.0) ||
     ((9.0 <= *(float *)(param_1 + 0xa8c) || (iVar2 = FUN_00a90070(5), iVar2 == 0)))) {
    if ((*(int *)(param_1 + 0x618) == 0xd) || (*(int *)(param_1 + 0x618) == 0xe)) {
      if (64.0 < *(float *)(param_1 + 0xa8c)) {
        *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x924);
      }
      if (240.0 < *(float *)(param_1 + 0x924)) {
        FUN_00a8caf0(10,0,0,0);
      }
    }
    if ((((((*(byte *)(param_1 + 0x155a) & 0x20) == 0) &&
          (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0))) &&
         (*(float *)(param_1 + 0x14e4) < 0.0)) &&
        ((iVar2 = FUN_00a90070(5), iVar2 != 0 && (*(float *)(param_1 + 0xaa0) < 2.0943952)))) &&
       ((iVar2 = FUN_00a90070(5), iVar2 != 0 &&
        ((*(int *)(param_1 + 0x15b4) == 0 && ((*(byte *)(param_1 + 0x155a) & 0x90) == 0)))))) {
      FUN_00a8caf0(0x26,0,0,0);
    }
    if (*(int *)(param_1 + 0x1428) < 7) {
      return;
    }
    if (16.0 < *(float *)(param_1 + 0xa8c)) {
      return;
    }
    if (1.5707964 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    FUN_00a8caf0(0x12,0,0,0);
    *(undefined4 *)(param_1 + 0x1428) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x1508) = 0;
  if (((*(byte *)(param_1 + 0x155a) & 0x10) == 0) && (*(int *)(param_1 + 0x15b4) == 0)) {
    FUN_00a8caf0(0x23,0,0,0);
  }
  else {
    FUN_0079a8d0();
  }
LAB_007a56e1:
  iVar2 = FUN_00798af0();
  if (iVar2 == 0) {
    return;
  }
  FUN_00a8caf0(10,0,0,0);
  return;
}

// 007A5820  FUN_007a5820  size=1430  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_007a5820(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_8 [2];
  
  if (param_1[0x139] != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return;
  }
  local_8[0] = 0;
  local_8[1] = 0;
  FUN_00ac81f0(param_1 + 0x10,local_8,local_8 + 1);
  if (local_8[0] == 0) {
    if ((DAT_01bea060 & 0x2000000) != 0) {
      FUN_00a8caf0(0x12,0,0,0);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      return;
    }
    if (param_1[0x187] != 0) {
      if (param_1[0x47e] != 0) {
        param_1[0x24b] = 0;
      }
      if (((float)param_1[0x2a3] <= 9.0) && ((float)param_1[0x2a8] < 1.0471976)) {
        FUN_00a8caf0(0x12,0,0,0);
      }
      if (((((*(byte *)((int)param_1 + 0x155a) & 0x10) != 0) &&
           ((*(byte *)((int)param_1 + 0x155a) & 8) != 0)) &&
          ((float)param_1[0x2a3] < 25.0 != ((float)param_1[0x2a3] == 25.0))) &&
         (((float)param_1[0x2a8] < 0.5235988 && (iVar3 = FUN_00a90070(5), iVar3 != 0)))) {
        FUN_00a8caf0(0x25,0,0,0);
      }
      if ((((*(byte *)((int)param_1 + 0x155a) & 0x10) == 0) ||
          ((*(byte *)((int)param_1 + 0x155a) & 8) == 0)) &&
         ((param_1[0x47e] != 0 &&
          ((iVar3 = FUN_00a90070(5), iVar3 != 0 && ((float)param_1[0x2a8] < 2.0943952)))))) {
        if (((float)param_1[0x2a3] <= 16.0) && ((float)param_1[0x2a8] < 0.5235988)) {
          FUN_00a8caf0(0x25,0,0,0);
        }
        if (((((float)param_1[0x2a3] <= 9.0) && ((float)param_1[0x2a8] < 0.5235988)) &&
            (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) &&
           (((*(byte *)(param_1 + 0x12a) & 0x40) == 0 && (param_1[0x56d] == 0)))) {
          bVar4 = *(byte *)((int)param_1 + 0x155a) & 0x10;
          if ((bVar4 == 0) || ((*(byte *)((int)param_1 + 0x155a) & 8) == 0)) {
            if (bVar4 == 0) {
              FUN_00a8caf0(0x1d,0,0,0);
            }
            else {
              iVar3 = FUN_0079a910();
              if (iVar3 != 0) {
                FUN_00dde2d0(0,1);
              }
            }
          }
        }
        if (((param_1[0x47e] != 0) && ((float)param_1[0x538] < 0.0)) &&
           ((param_1[0x186] == 0x25 && (sVar2 = FUN_00dde2d0(0,1), sVar2 == 1)))) {
          FUN_0079a8d0();
        }
        if (((param_1[0x52c] != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 1)) &&
           (iVar3 = FUN_00ac4d60(5), iVar3 == 0)) {
          FUN_0079a9a0();
        }
      }
      iVar3 = FUN_00ac4d60(6);
      if ((iVar3 == 0) &&
         (((fVar1 = (float)param_1[0x24b], !NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0) &&
           (param_1[0x47e] == 0)) || (param_1[0x47e] != 0)))) {
        if ((param_1[0x3c1] == 0) || (0x13 < param_1[0x484])) {
          iVar3 = FUN_00ac4d60(5);
          if (iVar3 != 0) {
            FUN_00a8caf0(0xb,0,0,0);
            sVar2 = FUN_00dde2d0(0,1);
            if (sVar2 == 0) {
              return;
            }
            uVar7 = 0;
            uVar6 = 0;
            uVar5 = 0;
            sVar2 = FUN_00dde2d0(0,2);
            FUN_00a8caf0(sVar2 + 0x12,uVar5,uVar6,uVar7);
            return;
          }
          FUN_00a8caf0(0xf,0,0,0);
          if (param_1[0x52c] == 0) {
            return;
          }
          if (param_1[0x47e] == 0) {
            return;
          }
          FUN_0079a9a0();
          return;
        }
        fVar1 = (float)param_1[0x548] - (float)param_1[0x10];
        if ((0x1d < param_1[0x48c]) &&
           (fVar1 = ((float)param_1[0x54a] - (float)param_1[0x12]) *
                    ((float)param_1[0x54a] - (float)param_1[0x12]) + fVar1 * fVar1,
           fVar1 < 25.0 != (fVar1 == 25.0))) {
          iVar3 = FUN_00ac4d60(5);
          if (iVar3 == 0) {
            FUN_00a8caf0(0xf,0,0,0);
            if ((param_1[0x52c] != 0) && (param_1[0x47e] != 0)) {
              FUN_0079a9a0();
            }
          }
          else {
            FUN_00a8caf0(0xb,0,0,0);
            sVar2 = FUN_00dde2d0(0,1);
            if (sVar2 != 0) {
              uVar7 = 0;
              uVar6 = 0;
              uVar5 = 0;
              sVar2 = FUN_00dde2d0(0,2);
              FUN_00a8caf0(sVar2 + 0x12,uVar5,uVar6,uVar7);
            }
          }
        }
      }
      iVar3 = FUN_00ac4d60(6);
      if ((iVar3 != 0) && (0xb3 < param_1[0x484])) {
        FUN_00a8caf0(0x12,0,0,0);
        return;
      }
      if ((((float)param_1[0x542] <= 60.0) || (9.0 <= (float)param_1[0x2a3])) ||
         (iVar3 = FUN_00a90070(5), iVar3 == 0)) {
        if (((param_1[0x47e] != 0) && ((float)param_1[0x538] < 0.0)) &&
           ((iVar3 = FUN_00a90070(5), iVar3 != 0 &&
            (((float)param_1[0x2a3] <= 9.0 && ((float)param_1[0x2a8] < 2.0943952)))))) {
          FUN_0079a870();
          return;
        }
      }
      else {
        param_1[0x542] = 0;
        if (((*(byte *)((int)param_1 + 0x155a) & 0x10) == 0) && (param_1[0x56d] == 0)) {
          FUN_00a8caf0(0x23,0,0,0);
        }
        else {
          FUN_0079a8d0();
        }
        iVar3 = FUN_00798af0();
        if (iVar3 != 0) {
          FUN_00a8caf0(10,0,0,0);
          return;
        }
      }
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x209) = 1;
    param_1[0x20a] = 0x78;
    FUN_00a8caf0(0x41,0,0,0);
  }
  return;
}

// 007A5DC0  FUN_007a5dc0  size=1555  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_007a5dc0(int *param_1)

{
  float fVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_8 [2];
  
  local_8[0] = 0;
  local_8[1] = 0;
  FUN_00ac81f0(param_1 + 0x10,local_8,local_8 + 1);
  if (local_8[0] == 0) {
    if ((DAT_01bea060 & 0x2000000) != 0) {
      FUN_00a8caf0(0x12,0,0,0);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      return;
    }
    if (param_1[0x187] != 0) {
      iVar4 = FUN_00a82d50();
      if ((iVar4 == 4) && (param_1[0x47e] == 0)) {
        FUN_00a8caf0(10,0,0,0);
        return;
      }
      if (param_1[0x187] != 0) {
        if ((float)param_1[0x24a] < (float)param_1[0x248]) {
          FUN_00a8caf0(10,0,0,0);
          iVar4 = FUN_00798af0();
          if (((iVar4 == 0) && (param_1[0x47e] != 0)) && (iVar4 = FUN_00a90070(5), iVar4 != 0)) {
            if (((float)param_1[0x2a3] <= 16.0) && ((float)param_1[0x2a8] < 0.5235988)) {
              FUN_00a8caf0(0x25,0,0,0);
            }
            if ((((float)param_1[0x2a3] <= 9.0) && ((float)param_1[0x2a8] < 0.5235988)) &&
               ((sVar3 = FUN_00dde2d0(0,1), sVar3 != 0 &&
                (((*(byte *)(param_1 + 0x12a) & 0x40) == 0 && (param_1[0x56d] == 0)))))) {
              bVar2 = *(byte *)((int)param_1 + 0x155a) & 0x10;
              if ((bVar2 == 0) || ((*(byte *)((int)param_1 + 0x155a) & 8) == 0)) {
                if (bVar2 == 0) {
                  FUN_00a8caf0(0x1d,0,0,0);
                }
                else {
                  iVar4 = FUN_0079a910();
                  if (iVar4 != 0) {
                    FUN_00dde2d0(0,1);
                  }
                }
              }
            }
            if ((((param_1[0x47e] != 0) && ((float)param_1[0x538] < 0.0)) &&
                (param_1[0x186] == 0x25)) && (sVar3 = FUN_00dde2d0(0,1), sVar3 == 1)) {
              FUN_0079a8d0();
            }
            if (((param_1[0x52c] != 0) && (sVar3 = FUN_00dde2d0(0,2), sVar3 == 1)) &&
               (iVar4 = FUN_00ac4d60(5), iVar4 == 0)) {
              FUN_0079a9a0();
            }
          }
          iVar4 = FUN_00798af0();
          if (((iVar4 != 0) && (param_1[0x47e] != 0)) &&
             ((iVar4 = FUN_00a90070(5), iVar4 != 0 &&
              (((float)param_1[0x2a3] < 25.0 != ((float)param_1[0x2a3] == 25.0) &&
               ((float)param_1[0x2a8] < 0.5235988)))))) {
            FUN_00a8caf0(0x25,0,0,0);
          }
          fVar1 = (float)param_1[0x2a3];
          if (((((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) &&
                (FUN_00a8caf0(10,0,0,0), param_1[0x47e] != 0)) && ((float)param_1[0x538] < 0.0)) &&
              ((iVar4 = FUN_00a90070(5), iVar4 != 0 &&
               (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0))))) &&
             (((float)param_1[0x2a3] <= 64.0 && ((float)param_1[0x2a8] < 0.34906584)))) {
            FUN_0079a8d0();
          }
        }
        fVar1 = (float)param_1[0x2a3];
        if (!NAN(fVar1) && 225.0 < fVar1 != (fVar1 == 225.0)) {
          FUN_00a8caf0(10,0,0,0);
        }
        iVar4 = FUN_00ac4d60(6);
        if ((iVar4 == 0) &&
           (((fVar1 = (float)param_1[0x24b], !NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0) &&
             (param_1[0x47e] == 0)) || (param_1[0x47e] != 0)))) {
          if ((param_1[0x3c1] == 0) || (0x13 < param_1[0x484])) {
            iVar4 = FUN_00ac4d60(5);
            uVar7 = 0;
            uVar6 = 0;
            uVar5 = 0;
            if (iVar4 != 0) {
              sVar3 = FUN_00dde2d0(0,2);
              FUN_00a8caf0(sVar3 + 0x12,uVar5,uVar6,uVar7);
              return;
            }
            FUN_00a8caf0(0xf,0,0,0);
            if (param_1[0x52c] == 0) {
              return;
            }
            if (param_1[0x47e] == 0) {
              return;
            }
            FUN_0079a9a0();
            return;
          }
          fVar1 = (float)param_1[0x548] - (float)param_1[0x10];
          if ((0x1d < param_1[0x48c]) &&
             (fVar1 = ((float)param_1[0x54a] - (float)param_1[0x12]) *
                      ((float)param_1[0x54a] - (float)param_1[0x12]) + fVar1 * fVar1,
             fVar1 < 25.0 != (fVar1 == 25.0))) {
            iVar4 = FUN_00ac4d60(5);
            uVar7 = 0;
            uVar6 = 0;
            uVar5 = 0;
            if (iVar4 == 0) {
              FUN_00a8caf0(0xf,0,0,0);
              if ((param_1[0x52c] != 0) && (param_1[0x47e] != 0)) {
                FUN_0079a9a0();
              }
            }
            else {
              sVar3 = FUN_00dde2d0(0,2);
              FUN_00a8caf0(sVar3 + 0x12,uVar5,uVar6,uVar7);
            }
          }
        }
        if (((((*(byte *)((int)param_1 + 0x155a) & 0x20) == 0) &&
             (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0))) &&
            (param_1[0x47e] != 0)) &&
           (((((float)param_1[0x539] < 0.0 && (iVar4 = FUN_00a90070(5), iVar4 != 0)) &&
             (((float)param_1[0x2a8] < 2.0943952 &&
              ((iVar4 = FUN_00a90070(5), iVar4 != 0 && (param_1[0x56d] == 0)))))) &&
            ((*(byte *)((int)param_1 + 0x155a) & 0x90) == 0)))) {
          FUN_00a8caf0(0x26,0,0,0);
        }
        if (((60.0 < (float)param_1[0x542]) && ((float)param_1[0x2a3] < 9.0)) &&
           (iVar4 = FUN_00a90070(5), iVar4 != 0)) {
          param_1[0x542] = 0;
          if (((*(byte *)((int)param_1 + 0x155a) & 0x10) == 0) && (param_1[0x56d] == 0)) {
            FUN_00a8caf0(0x23,0,0,0);
            return;
          }
          iVar4 = FUN_0079a8d0();
          if (iVar4 != 0) {
            return;
          }
        }
        if (((param_1[0x47e] != 0) && ((float)param_1[0x538] < 0.0)) &&
           ((iVar4 = FUN_00a90070(5), iVar4 != 0 &&
            (((float)param_1[0x2a3] <= 9.0 && ((float)param_1[0x2a8] < 2.0943952)))))) {
          FUN_0079a870();
          return;
        }
      }
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x209) = 1;
    param_1[0x20a] = 0x78;
    FUN_00a8caf0(0x41,0,0,0);
  }
  return;
}

// 007A63E0  FUN_007a63e0  size=971  [between]
void __fastcall FUN_007a63e0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  
  (**(code **)(*param_1 + 0x314))();
  uVar5 = 0x28;
  if (param_1[0x187] == 0) {
    if (param_1[0x186] == 0x13) {
      uVar5 = 0x29;
    }
    if (param_1[0x186] == 0x14) {
      uVar5 = 0x2a;
    }
    FUN_00aa4080(uVar5,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_007a6777;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if ((DAT_01bea060 & 0x2000000) != 0) {
      (**(code **)(*param_1 + 0x34c))();
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
    iVar3 = FUN_0079a9d0(1);
    if (iVar3 != 0) {
      return;
    }
    FUN_00a8caf0(0xb,0,0,0);
    sVar2 = FUN_00dde2d0(0,3);
    if (sVar2 != 0) {
      FUN_00a8caf0(0xd,0,0,0);
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_00a8caf0(0xe,0,0,0);
      }
    }
    if ((((((*(byte *)((int)param_1 + 0x155a) & 0x10) == 0) ||
          ((*(byte *)((int)param_1 + 0x155a) & 8) == 0)) && (param_1[0x47e] != 0)) &&
        (((float)param_1[0x3c6] < 0.0 && (iVar3 = FUN_00a90070(5), iVar3 != 0)))) &&
       ((float)param_1[0x2a8] < 2.0943952)) {
      if ((((float)param_1[0x2a3] < 6.25) &&
          (((*(byte *)((int)param_1 + 0x155a) & 0x10) == 0 ||
           ((*(byte *)((int)param_1 + 0x155a) & 8) == 0)))) && (param_1[0x56d] == 0)) {
        FUN_00a8caf0(0x1b,0,0,0);
      }
      fVar1 = (float)param_1[0x2a3];
      if ((((!NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25)) && ((float)param_1[0x2a3] < 16.0)) &&
          ((*(byte *)(param_1 + 0x12a) & 0x40) == 0)) && (param_1[0x56d] == 0)) {
        bVar4 = *(byte *)((int)param_1 + 0x155a) & 0x10;
        if ((bVar4 == 0) || ((*(byte *)((int)param_1 + 0x155a) & 8) == 0)) {
          if (bVar4 == 0) {
            FUN_00a8caf0(0x1d,0,0,0);
          }
          else {
            iVar3 = FUN_0079a910();
            if (iVar3 != 0) {
              FUN_00dde2d0(0,1);
            }
          }
        }
      }
      fVar1 = (float)param_1[0x2a3];
      if ((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) && ((float)param_1[0x2a3] < 36.0)) {
        bVar4 = *(byte *)((int)param_1 + 0x155a);
        if ((((bVar4 & 0x10) == 0) || ((bVar4 & 8) == 0)) && (param_1[0x56d] == 0)) {
          if ((bVar4 & 8) == 0) {
            FUN_00a8caf0(0x1c,0,0,0);
          }
          else if ((bVar4 & 0x10) == 0) {
            FUN_00a8caf0(0x21,0,0,0);
            FUN_00dde2d0(0,1);
          }
        }
      }
      fVar1 = (float)param_1[0x2a3];
      if (!NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0)) {
        FUN_00a8caf0(10,0,0,0);
      }
      if ((param_1[0x186] == 0x1c) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        FUN_00a8caf0(0x12,0,0,0);
      }
      if (((((*(byte *)((int)param_1 + 0x155a) & 0x20) == 0) &&
           (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0))) &&
          (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) &&
         ((((float)param_1[0x539] < 0.0 && (iVar3 = FUN_00a90070(5), iVar3 != 0)) &&
          ((param_1[0x56d] == 0 && ((*(byte *)((int)param_1 + 0x155a) & 0x90) == 0)))))) {
        FUN_00a8caf0(0x26,0,0,0);
      }
    }
    if (((*(byte *)((int)param_1 + 0x155a) & 0x10) != 0) &&
       ((*(byte *)((int)param_1 + 0x155a) & 8) != 0)) {
      FUN_00a8caf0(10,0,0,0);
    }
  }
LAB_007a6777:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  return;
}

// 007A67B0  FUN_007a67b0  size=112  [between]
void __fastcall FUN_007a67b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_007a0350();
      }
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_007a0350();
        return;
      }
    }
  }
  return;
}

// 007A6820  FUN_007a6820  size=112  [between]
void __fastcall FUN_007a6820(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_007a0350();
      }
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_007a0350();
        return;
      }
    }
  }
  return;
}

// 007A6890  FUN_007a6890  size=112  [between]
void __fastcall FUN_007a6890(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_007a0350();
      }
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_007a0350();
        return;
      }
    }
  }
  return;
}

// 007A6900  FUN_007a6900  size=138  [between]
void __fastcall FUN_007a6900(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_008e5c50(7);
        FUN_007a0350();
      }
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_008e5c50(7);
        FUN_007a0350();
        return;
      }
    }
  }
  return;
}

// 007A6990  FUN_007a6990  size=112  [between]
void __fastcall FUN_007a6990(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_007a0350();
      }
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_007a0350();
        return;
      }
    }
  }
  return;
}

// 007A6A00  FUN_007a6a00  size=112  [between]
void __fastcall FUN_007a6a00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_007a0350();
      }
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_007a0350();
        return;
      }
    }
  }
  return;
}

// 007A6A70  FUN_007a6a70  size=112  [between]
void __fastcall FUN_007a6a70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_007a0350();
      }
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 != 0) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_007a0350();
        return;
      }
    }
  }
  return;
}

// 007A6AE0  FUN_007a6ae0  size=134  [between]
void __fastcall FUN_007a6ae0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A6B70  FUN_007a6b70  size=489  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_007a6b70(int *param_1)

{
  short sVar1;
  int iVar2;
  float10 extraout_ST0;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int aiStack_8 [2];
  
  (**(code **)(*param_1 + 0x314))();
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar3 = 0x87;
    if ((float)param_1[0x245] * (float)param_1[0x245] < 2.4674013) {
      uVar3 = 0x88;
    }
    iVar2 = FUN_00fdbc60();
    if (param_1[0x21c] <= iVar2) {
      uVar3 = 0x8c;
    }
    FUN_00aa4080(uVar3,0,0x3d088889,(float)extraout_ST0,0x8000000,0xbf800000,(float)extraout_ST0);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x2a1] != 0) {
      param_1[0x541] = 1;
    }
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    aiStack_8[0] = 0;
    aiStack_8[1] = 0;
    FUN_00ac81f0(param_1 + 0x10,aiStack_8,aiStack_8 + 1);
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    if (aiStack_8[0] != 0) {
      FUN_00a8caf0(0x41,0,0,0);
      return;
    }
    sVar1 = FUN_00dde2d0(0,2);
    FUN_00a8caf0(sVar1 + 0x12,uVar3,uVar4,uVar5);
    if (((param_1[0x52c] != 0) && (sVar1 = FUN_00dde2d0(0,2), sVar1 == 1)) &&
       (iVar2 = FUN_00ac4d60(5), iVar2 == 0)) {
      FUN_0079a9a0();
    }
    if (((param_1[0x47e] != 0) && ((float)param_1[0x2a3] <= 9.0)) &&
       ((float)param_1[0x2a8] < 1.5707964)) {
      FUN_007a02f0();
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 != 0) {
        FUN_0079a870();
        return;
      }
    }
  }
  return;
}

// 007A6D60  FUN_007a6d60  size=134  [between]
void __fastcall FUN_007a6d60(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A6DF0  FUN_007a6df0  size=134  [between]
void __fastcall FUN_007a6df0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A6E80  FUN_007a6e80  size=134  [between]
void __fastcall FUN_007a6e80(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A6F10  FUN_007a6f10  size=134  [between]
void __fastcall FUN_007a6f10(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A6FA0  FUN_007a6fa0  size=756  [between]
void __fastcall FUN_007a6fa0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  (**(code **)(*param_1 + 0x314))();
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00ac82f0();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
    param_1[0x248] = 0x41e00000;
    param_1[0x249] = 0x43340000;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0xd);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] <= 0.0) && (iVar3 = FUN_00a94ce0(0), iVar3 != 0)) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_00a8caf0(10,0,0,0);
    }
    if ((float)param_1[0x249] <= 0.0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_00a8caf0(10,0,0,0);
      return;
    }
    break;
  case 2:
    uVar4 = 0xbc;
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 != 0) {
      uVar4 = 0xbd;
    }
    FUN_00aa4080(uVar4,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41700000;
  case 3:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar3 = FUN_00a952e0(0,0x41a00000);
    if (iVar3 != 0) {
      FUN_00dde2d0(0,2);
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_0079aa90();
      (**(code **)(*param_1 + 0x34c))();
      FUN_00a8caf0(0xb,0,0,0);
      if ((float)param_1[0x2a3] <= 9.0) {
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
        sVar2 = FUN_00dde2d0(0,2);
        FUN_00a8caf0(sVar2 + 0x12,uVar4,uVar5,uVar6);
      }
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_0079a970();
      }
      if (((param_1[0x52c] != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 1)) &&
         (iVar3 = FUN_00ac4d60(5), iVar3 == 0)) {
        FUN_0079a9a0();
      }
      if (((param_1[0x47e] != 0) && ((float)param_1[0x2a3] <= 9.0)) &&
         ((float)param_1[0x2a8] < 1.5707964)) {
        FUN_007a02f0();
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 != 0) {
          FUN_0079a870();
        }
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  return;
}

// 007A72B0  FUN_007a72b0  size=134  [between]
void __fastcall FUN_007a72b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A7340  FUN_007a7340  size=783  [between]
void __fastcall FUN_007a7340(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  
  (**(code **)(*param_1 + 0x314))();
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2e,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    param_1[0x248] = -0x40cccccd;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a8de10((float)param_1[0x244] * (float)param_1[0x248],param_1[0x25],0);
  fVar5 = (float10)FUN_00fdc1f0();
  param_1[0x248] = (int)(float)(fVar5 * (float10)(float)param_1[0x248]);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    if ((float)param_1[0x2a8] < 2.0943952) {
      FUN_00a8caf0(10,0,0,0);
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        if (((float)param_1[0x2a3] < 6.25 != ((float)param_1[0x2a3] == 6.25)) &&
           ((((*(byte *)((int)param_1 + 0x155a) & 0x10) == 0 ||
             ((*(byte *)((int)param_1 + 0x155a) & 8) == 0)) && (param_1[0x56d] == 0)))) {
          FUN_00a8caf0(0x1b,0,0,0);
        }
        fVar1 = (float)param_1[0x2a3];
        if (((!NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25)) && ((float)param_1[0x2a3] < 16.0)) &&
           (((*(byte *)(param_1 + 0x12a) & 0x40) == 0 && (param_1[0x56d] == 0)))) {
          bVar4 = *(byte *)((int)param_1 + 0x155a) & 0x10;
          if ((bVar4 == 0) || ((*(byte *)((int)param_1 + 0x155a) & 8) == 0)) {
            if (bVar4 == 0) {
              FUN_00a8caf0(0x1d,0,0,0);
            }
            else {
              iVar3 = FUN_0079a910();
              if (iVar3 != 0) {
                FUN_00dde2d0(0,1);
              }
            }
          }
        }
        fVar1 = (float)param_1[0x2a3];
        if ((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) && ((float)param_1[0x2a3] < 36.0)) {
          bVar4 = *(byte *)((int)param_1 + 0x155a);
          if ((((bVar4 & 0x10) == 0) || ((bVar4 & 8) == 0)) && (param_1[0x56d] == 0)) {
            if ((bVar4 & 8) == 0) {
              FUN_00a8caf0(0x1c,0,0,0);
            }
            else if ((bVar4 & 0x10) == 0) {
              FUN_00a8caf0(0x21,0,0,0);
              FUN_00dde2d0(0,1);
            }
          }
        }
      }
    }
    iVar3 = FUN_00ac4d60(1);
    if (((iVar3 == 0) && (param_1[0x56d] != 0)) && ((*(byte *)((int)param_1 + 0x155a) & 0x18) == 0))
    {
      FUN_00a8caf0(0x29,0,0,0);
    }
    if (((param_1[0x47e] != 0) && ((float)param_1[0x2a3] <= 9.0)) &&
       ((float)param_1[0x2a8] < 1.5707964)) {
      FUN_007a02f0();
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_0079a870();
        return;
      }
    }
  }
  return;
}

// 007A7650  FUN_007a7650  size=134  [between]
void __fastcall FUN_007a7650(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A76E0  FUN_007a76e0  size=722  [between]
void __fastcall FUN_007a76e0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  
  (**(code **)(*param_1 + 0x314))();
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2e,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3f860a92,0);
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    if ((float)param_1[0x2a8] < 2.0943952) {
      FUN_00a8caf0(10,0,0,0);
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        if (((float)param_1[0x2a3] < 6.25 != ((float)param_1[0x2a3] == 6.25)) &&
           ((((*(byte *)((int)param_1 + 0x155a) & 0x10) == 0 ||
             ((*(byte *)((int)param_1 + 0x155a) & 8) == 0)) && (param_1[0x56d] == 0)))) {
          FUN_00a8caf0(0x1b,0,0,0);
        }
        fVar1 = (float)param_1[0x2a3];
        if (((!NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25)) && ((float)param_1[0x2a3] < 16.0)) &&
           (((*(byte *)(param_1 + 0x12a) & 0x40) == 0 && (param_1[0x56d] == 0)))) {
          bVar4 = *(byte *)((int)param_1 + 0x155a) & 0x10;
          if ((bVar4 == 0) || ((*(byte *)((int)param_1 + 0x155a) & 8) == 0)) {
            if (bVar4 == 0) {
              FUN_00a8caf0(0x1d,0,0,0);
            }
            else {
              iVar3 = FUN_0079a910();
              if (iVar3 != 0) {
                FUN_00dde2d0(0,1);
              }
            }
          }
        }
        fVar1 = (float)param_1[0x2a3];
        if ((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) && ((float)param_1[0x2a3] < 36.0)) {
          bVar4 = *(byte *)((int)param_1 + 0x155a);
          if ((((bVar4 & 0x10) == 0) || ((bVar4 & 8) == 0)) && (param_1[0x56d] == 0)) {
            if ((bVar4 & 8) == 0) {
              FUN_00a8caf0(0x1c,0,0,0);
            }
            else if ((bVar4 & 0x10) == 0) {
              FUN_00a8caf0(0x21,0,0,0);
              FUN_00dde2d0(0,1);
            }
          }
        }
      }
    }
    iVar3 = FUN_00ac4d60(1);
    if (((iVar3 == 0) && (param_1[0x56d] != 0)) && ((*(byte *)((int)param_1 + 0x155a) & 0x18) == 0))
    {
      FUN_00a8caf0(0x29,0,0,0);
    }
    if (((param_1[0x47e] != 0) && ((float)param_1[0x2a3] <= 9.0)) &&
       ((float)param_1[0x2a8] < 1.5707964)) {
      FUN_007a02f0();
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_0079a870();
        return;
      }
    }
  }
  return;
}

// 007A79C0  FUN_007a79c0  size=134  [between]
void __fastcall FUN_007a79c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A7A50  FUN_007a7a50  size=134  [between]
void __fastcall FUN_007a7a50(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A7AE0  FUN_007a7ae0  size=255  [between]
void __fastcall FUN_007a7ae0(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xa5,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if ((((iVar3 != 0) && ((**(code **)(*param_1 + 0x34c))(), param_1[0x47e] != 0)) &&
      ((float)param_1[0x2a3] <= 9.0)) && ((float)param_1[0x2a8] < 1.5707964)) {
    FUN_007a02f0();
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 != 0) {
      FUN_0079a870();
      return;
    }
  }
  return;
}

// 007A7BE0  FUN_007a7be0  size=134  [between]
void __fastcall FUN_007a7be0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A7C70  FUN_007a7c70  size=255  [between]
void __fastcall FUN_007a7c70(int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xa9,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if ((((iVar3 != 0) && ((**(code **)(*param_1 + 0x34c))(), param_1[0x47e] != 0)) &&
      ((float)param_1[0x2a3] <= 9.0)) && ((float)param_1[0x2a8] < 1.5707964)) {
    FUN_007a02f0();
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 != 0) {
      FUN_0079a870();
      return;
    }
  }
  return;
}

// 007A7D70  FUN_007a7d70  size=134  [between]
void __fastcall FUN_007a7d70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A7E00  FUN_007a7e00  size=134  [between]
void __fastcall FUN_007a7e00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A7E90  FUN_007a7e90  size=134  [between]
void __fastcall FUN_007a7e90(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A7F20  FUN_007a7f20  size=134  [between]
void __fastcall FUN_007a7f20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (0 < iVar1) {
          FUN_007a0350();
        }
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) {
      iVar1 = FUN_00a90070(5);
      if (iVar1 != 0) {
        iVar1 = FUN_00ac4780();
        if (2 < iVar1) {
          FUN_007a0350();
          return;
        }
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A7FB0  FUN_007a7fb0  size=268  [between]
void __fastcall FUN_007a7fb0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar2 = FUN_00a8c760(0xf);
    if ((iVar2 != 0) && (*(float *)(param_1 + 0xa8c) <= 9.0)) {
      iVar2 = 0;
      if (*(int *)(param_1 + 0x618) == 0x43) {
        iVar2 = FUN_0079a940();
      }
      if (*(int *)(param_1 + 0x618) == 0x42) {
        iVar2 = FUN_0079a910();
      }
      if (iVar2 != 0) {
        return;
      }
      bVar1 = *(byte *)(param_1 + 0x155a);
      if (((bVar1 & 4) == 0) || ((bVar1 & 2) == 0)) {
        iVar2 = 0;
        if ((bVar1 & 0x10) == 0) {
          iVar2 = FUN_0079a940();
        }
        if ((*(byte *)(param_1 + 0x155a) & 8) == 0) {
          iVar2 = FUN_0079a910();
        }
        if (iVar2 != 0) {
          return;
        }
      }
    }
    iVar2 = FUN_00a8c760(0xf);
    if ((((iVar2 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) &&
        (iVar2 = FUN_00a90070(5), iVar2 != 0)) && (iVar2 = FUN_00ac4780(), 0 < iVar2)) {
      FUN_007a0350();
    }
    iVar2 = FUN_00a8c760(0x30);
    if (((iVar2 != 0) && (*(int *)(param_1 + 0x11f8) != 0)) &&
       ((iVar2 = FUN_00a90070(5), iVar2 != 0 && (iVar2 = FUN_00ac4780(), 2 < iVar2)))) {
      FUN_007a0350();
      return;
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A80C0  FUN_007a80c0  size=425  [between]
void __fastcall FUN_007a80c0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xc4,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x139] = 1;
    (**(code **)(param_1[0x44c] + 8))(0x41200000,0,0);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(4,param_1[0x571],param_1[0x570]);
    }
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    FUN_007a0700();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    FUN_00a8caf0(0x50,0,0,0);
    return;
  case 2:
    pcVar2 = *(code **)(*param_1 + 0x20);
    param_1[0x248] = 0x43340000;
    param_1[0x187] = 3;
    (*pcVar2)();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    FUN_00c57120(param_1[0x13c]);
    piVar4 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c1d1c0(piVar4);
    param_1[0x1af] = 1;
    break;
  case 3:
    break;
  default:
    goto switchD_007a80de_default;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    FUN_009fdde0();
    return;
  }
switchD_007a80de_default:
  return;
}

// 007A8280  FUN_007a8280  size=266  [between]
void __fastcall FUN_007a8280(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x94,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x139] = 1;
    (**(code **)(param_1[0x44c] + 8))(0x41200000,0,0);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(4,param_1[0x571],param_1[0x570]);
    }
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    FUN_007a0700();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 007A8390  FUN_007a8390  size=895  [between]
void __fastcall FUN_007a8390(int *param_1)

{
  float fVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  int *piVar7;
  
  (**(code **)(*param_1 + 0x314))();
  uVar5 = 0xfd;
  switch(param_1[0x187]) {
  case 0:
    if ((param_1[0x3a4] != 0) && (iVar4 = FUN_00a8cd80(param_1[0x3a4],7,2), iVar4 == 0)) {
      uVar5 = 0x102;
    }
    iVar4 = param_1[0x186];
    if (iVar4 == 0x52) {
      uVar5 = 0x10b;
    }
    if (iVar4 == 0x53) {
      uVar5 = 0x10a;
    }
    if (iVar4 == 0x54) {
      uVar5 = 0x10f;
    }
    if (iVar4 == 0x55) {
      uVar5 = 0x10e;
    }
    if (iVar4 == 0x56) {
      uVar5 = 0x111;
    }
    if (iVar4 == 0x57) {
      uVar5 = 0x110;
    }
    if (iVar4 == 0x58) {
      uVar5 = 0x10c;
    }
    if (iVar4 == 0x59) {
      uVar5 = 0x10d;
    }
    if (iVar4 == 0x5a) {
      uVar5 = 0x112;
    }
    if (iVar4 == 0x5b) {
      uVar5 = 0x112;
    }
    FUN_00aa4080(uVar5,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x3a4] != 0) {
      FUN_00a8cd80(param_1[0x3a4],7,2);
    }
    param_1[0x248] = 0x3dcccccd;
    param_1[0x249] = 0;
    fVar6 = (float10)FUN_00dde300(0x3f4ccccd,0x3f99999a);
    param_1[0x24a] = (int)(float)fVar6;
    iVar4 = param_1[0x186];
    if (iVar4 == 0x53) {
      param_1[0x249] = 0x40490fdb;
    }
    if (iVar4 == 0x55) {
      param_1[0x249] = 0x40490fdb;
    }
    if (iVar4 == 0x57) {
      param_1[0x249] = 0x40490fdb;
    }
    if (iVar4 == 0x58) {
      param_1[0x249] = -0x4036f025;
    }
    if (iVar4 == 0x59) {
      param_1[0x249] = 0x3fc90fdb;
    }
    if (iVar4 == 0x5a) {
      param_1[0x249] = -0x4036f025;
    }
    if (iVar4 == 0x5b) {
      param_1[0x249] = 0x3fc90fdb;
    }
    sVar3 = FUN_00dde2d0(0xfffffffb,5);
    pcVar2 = *(code **)(param_1[0x44c] + 8);
    param_1[0x139] = 1;
    param_1[0x249] = (int)((float)(int)sVar3 * 0.017453292 + (float)param_1[0x249]);
    (*pcVar2)(0x41200000,0,0);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(4,param_1[0x571],param_1[0x570]);
    }
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    FUN_0079ad70();
    FUN_007a0700();
  case 1:
    FUN_00a8de10((float)param_1[0x244] * (float)param_1[0x248],param_1[0x249],0);
    fVar6 = (float10)FUN_00fdc1f0();
    param_1[0x248] = (int)(float)(fVar6 * (float10)(float)param_1[0x248]);
    FUN_00ac80a0(0x3f800000,param_1[0x24a]);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x139] = 1;
      FUN_00a8caf0(0x50,0,0,0);
    }
    break;
  case 2:
    pcVar2 = *(code **)(*param_1 + 0x20);
    param_1[0x248] = 0x43340000;
    param_1[0x187] = 3;
    (*pcVar2)();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    FUN_00c57120(param_1[0x13c]);
    piVar7 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c1d1c0(piVar7);
    param_1[0x1af] = 1;
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 007A8720  FUN_007a8720  size=344  [between]
void __fastcall FUN_007a8720(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(*param_1 + 0x314))();
  param_1[0x56f] = 1;
  if (param_1[0x187] == 0) {
    pcVar1 = *(code **)(param_1[0x44c] + 8);
    param_1[0x187] = 1;
    param_1[0x139] = 1;
    (*pcVar1)(0x3f800000,0,0);
    param_1[0x248] = 0x43340000;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
      FUN_008e1c60();
      param_1[0x1d9] = 0;
    }
    FUN_00c57120(param_1[0x13c]);
    piVar3 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c1d1c0(piVar3);
    if (param_1[0x294] != 0) {
      pcVar1 = *(code **)(*param_1 + 0x344);
      param_1[0x1af] = 1;
      (*pcVar1)(4,param_1[0x571],param_1[0x570]);
      FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
      (**(code **)(*param_1 + 0x364))(0xffffffff);
    }
    FUN_007a0700();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    (**(code **)(*param_1 + 0x358))(2,0);
    FUN_00e5e0c0("em0070_se_dmg_explosion",param_1,0xffffffff,0);
  }
  return;
}

// 007A8880  Emc070::vf19C  size=210  [class]
void __thiscall Emc070::vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
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
  }
  else {
    (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  }
  fVar4 = (float)param_1[0x2a8];
  if (!NAN(fVar4) && 2.0943952 < fVar4 != (fVar4 == 2.0943952)) {
    param_1[0x542] = (int)((float)param_1[0x542] + 20.0);
  }
  return;
}

// 007A8960  FUN_007a8960  size=296  [between]
void __fastcall FUN_007a8960(int param_1)

{
  int iVar1;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(*(undefined1 *)(param_1 + 0xf14)) {
  case 1:
    iVar1 = FUN_0079fed0();
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xc0400000;
    *(uint *)(param_1 + 0xf04) = (uint)(iVar1 == 0);
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_0079fe60(auStack_2c);
    *(char *)(param_1 + 0xf14) = *(char *)(param_1 + 0xf14) + '\x01';
    return;
  case 2:
    iVar1 = FUN_0079fed0();
    local_20 = 0xc0400000;
    local_1c = 0;
    local_18 = 0;
    *(uint *)(param_1 + 0xf08) = (uint)(iVar1 == 0);
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_0079fe60(auStack_2c);
    *(char *)(param_1 + 0xf14) = *(char *)(param_1 + 0xf14) + '\x01';
    return;
  case 3:
    iVar1 = FUN_0079fed0();
    *(uint *)(param_1 + 0xf0c) = (uint)(iVar1 == 0);
  case 0:
    local_20 = 0x40400000;
    local_1c = 0;
    local_18 = 0;
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_0079fe60(auStack_2c);
    *(char *)(param_1 + 0xf14) = *(char *)(param_1 + 0xf14) + '\x01';
    return;
  case 4:
    iVar1 = FUN_0079fed0();
    *(uint *)(param_1 + 0xf10) = (uint)(iVar1 == 0);
    *(undefined1 *)(param_1 + 0xf14) = 0;
  default:
    return;
  }
}

// 007A8AA0  FUN_007a8aa0  size=581  [between]
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_007a8aa0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puStack_3a4;
  float *pfStack_3a0;
  undefined4 *puStack_39c;
  undefined4 *puStack_398;
  float fStack_394;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 auStack_374 [2];
  undefined4 auStack_36c [3];
  undefined4 local_360;
  float local_35c [10];
  undefined2 uStack_334;
  undefined4 uStack_330;
  uint uStack_2b8;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_1e4;
  
  fStack_394 = 1.1253698e-38;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    fStack_394 = 1.1253724e-38;
    FUN_00a81330();
    fStack_394 = 1.1253734e-38;
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      fStack_394 = 1.1253761e-38;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        fStack_394 = 1.1253782e-38;
        FUN_00a81330();
        fStack_394 = 1.1253792e-38;
        FUN_00a7c8a0();
      }
      fStack_394 = 1.4013e-45;
      puStack_398 = (undefined4 *)0x7a8b07;
      iVar1 = FUN_00a12210();
      local_360 = 0xbf800000;
      puStack_39c = &local_360;
      local_35c[0] = 0.0;
      local_35c[1] = 0.0;
      pfStack_3a0 = (float *)0x7a8b2c;
      puStack_398 = puStack_39c;
      fStack_394 = (float)(iVar1 + 0x10);
      D3DXVec3TransformNormal();
      pfStack_3a0 = local_35c + 4;
      local_35c[4] = 0.0;
      local_35c[5] = 0.0;
      puStack_3a4 = auStack_36c;
      local_35c[6] = 0.0;
      thunk_FUN_00dde510(local_35c,local_35c + 1);
      local_35c[2] = 0.0;
      local_35c[0] = local_35c[0] * -1.0;
      puStack_3a4 = &uStack_37c;
      uStack_37c = 0xbf0ccccd;
      uStack_378 = 0x3eb33333;
      auStack_374[0] = 0;
      pfStack_3a0 = (float *)(iVar1 + 0x10);
      D3DXVec3TransformNormal(puStack_3a4);
      puStack_398 = (undefined4 *)0x0;
      fStack_394 = 0.0;
      D3DXVec3TransformNormal(&puStack_398,&puStack_398,param_1 + 0x10);
      puStack_3a4 = (undefined4 *)((float)puStack_3a4 + *(float *)(param_1 + 0x40));
      pfStack_3a0 = (float *)(*(float *)(param_1 + 0x44) + (float)pfStack_3a0);
      puStack_39c = (undefined4 *)(*(float *)(param_1 + 0x48) + (float)puStack_39c);
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      uStack_240 = 0x1e;
      local_35c[3] = 2.76629e-40;
      uStack_244 = 0x55;
      uStack_1e4 = FUN_009f8b40();
      uStack_330 = *(undefined4 *)(param_1 + 0x4f0);
      local_35c[7] = 1.4013e-44;
      uStack_2b8 = uStack_2b8 | 0x10000010;
      local_35c[9] = 4.2039e-44;
      local_35c[8] = 2.10195e-43;
      uStack_334 = 0xa00;
      local_35c[6] = 3.60134e-43;
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      FUN_00416e30(&fStack_394,&puStack_3a4,auStack_374,param_4,0x44480000);
      FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_35c + 2);
    }
  }
  return;
}

// 007A8CF0  FUN_007a8cf0  size=136  [between]
void __fastcall FUN_007a8cf0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  if (*(int *)(uVar3 + 0x654) == -1) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_009f8b10();
      FUN_00a7c950();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
    param_1[0x195] = -1;
                    /* WARNING: Could not recover jumptable at 0x007a8d71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

// 007A8D80  FUN_007a8d80  size=209  [between]
void __fastcall FUN_007a8d80(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_007a0900();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    FUN_0079acd0(uVar3);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x5f,0,0,0);
  }
  FUN_0079acd0(uVar3);
  return;
}

// 007A8E60  FUN_007a8e60  size=1041  [between]
void __fastcall FUN_007a8e60(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  undefined *puVar8;
  float fStack_58;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float afStack_24 [2];
  float fStack_1c;
  float fStack_18;
  
  Behavior::vf4C();
  FUN_00a92fb0();
  fVar7 = (float10)FUN_00e049b0();
  local_54 = (float)fVar7;
  piVar2 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar2 + 0x28))(0);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar8);
      uVar4 = -(uint)(iVar3 != 0) & (uint)piVar2;
    }
  }
  uVar5 = FUN_00a8cab0();
  switch(uVar5) {
  case 0:
    param_1[0x186] = param_1[0x186] + 1;
    param_1[0x220] = 0;
    return;
  case 1:
    if (DAT_01bea740 != 0) {
      if (param_1[0x1ed] != 0) {
        FUN_009166f0(0x3f800000);
      }
      param_1[0x186] = param_1[0x186] + 1;
      return;
    }
    break;
  case 2:
    if (((uVar4 != 0) && (param_1[0x1ed] != 0)) && (iVar3 = FUN_00a12210(0xf00), iVar3 != 0)) {
      fStack_44 = *(float *)(iVar3 + 0x40) - (float)param_1[0x224];
      iVar6 = 0;
      fStack_40 = *(float *)(iVar3 + 0x44) - (float)param_1[0x225];
      fStack_3c = *(float *)(iVar3 + 0x48) - (float)param_1[0x226];
      fStack_38 = *(float *)(iVar3 + 0x4c) - (float)param_1[0x227];
      if (0 < *(int *)(param_1[0x1ed] + 0xc)) {
        do {
          FUN_00912660(&fStack_58,iVar6);
          if (fStack_58 != 0.0) {
            FUN_00912300(&fStack_44);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1[0x1ed] + 0xc));
      }
    }
    param_1[0x186] = param_1[0x186] + 1;
    return;
  case 3:
    fVar1 = (float)param_1[0x220];
    param_1[0x220] = (int)(fVar1 + fStack_58);
    if ((80.0 < fVar1 + fStack_58) || ((uVar4 != 0 && (iVar3 = FUN_00a8c760(0xb), iVar3 != 0)))) {
      if (param_1[0x1ed] != 0) {
        FUN_009166f0(0x41f00000);
        FUN_007a1f00(&local_54);
        fVar7 = (float10)FUN_00916de0();
        fStack_44 = (float)((float10)7.5 * fVar7);
        fStack_40 = (float)(fVar7 * (float10)-20.0);
        fStack_3c = (float)((float10)7.5 * fVar7);
        if ((uVar4 != 0) && (iVar3 = FUN_00a12210(0xf00), iVar3 != 0)) {
          FUN_00916d50(afStack_24);
          local_54 = afStack_24[0] - *(float *)(iVar3 + 0x40);
          fStack_4c = fStack_1c - *(float *)(iVar3 + 0x48);
          fStack_48 = fStack_18 - *(float *)(iVar3 + 0x4c);
        }
        fStack_50 = 1.0;
        fVar1 = fStack_4c * fStack_4c + local_54 * local_54 + 1.0;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_54,&local_54);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_4c = 0.0;
          local_54 = 0.0;
          fStack_50 = 1.0;
        }
        local_54 = local_54 * fStack_44;
        fStack_50 = fStack_50 * fStack_40;
        fStack_4c = fStack_4c * fStack_3c;
        fStack_48 = fStack_38 * fStack_48;
        FUN_0091ab40(&local_54);
        fStack_34 = local_54 * 0.25;
        fStack_30 = fStack_50 * 0.25;
        fStack_2c = fStack_4c * 0.25;
        fStack_28 = fStack_48 * 0.25;
        FUN_0091ac60(&fStack_34);
      }
      param_1[0x186] = param_1[0x186] + 1;
      return;
    }
    break;
  case 4:
    fVar7 = (float10)FUN_00dde300(0,0x425c0000);
    param_1[0x186] = param_1[0x186] + 1;
    param_1[0x220] = (int)(float)(fVar7 + (float10)25.0);
    return;
  case 5:
    fVar1 = (float)param_1[0x220];
    param_1[0x220] = (int)(fVar1 - fStack_58);
    if (fVar1 - fStack_58 < 0.0) {
      param_1[0x220] = 0;
      fVar7 = (float10)FUN_00a13390();
      if ((float10)2.0 <= fVar7) {
        FUN_007a1e40();
        (**(code **)(*param_1 + 0x20))();
        param_1[0x186] = param_1[0x186] + 1;
        return;
      }
      if (param_1[0x1ed] != 0) {
        FUN_0091acf0(0);
      }
      (**(code **)(*param_1 + 0x20))();
      param_1[0x186] = param_1[0x186] + 1;
      return;
    }
    break;
  case 6:
    fVar1 = (float)param_1[0x220];
    param_1[0x220] = (int)(fVar1 + fStack_58);
    if (600.0 < fVar1 + fStack_58) {
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 007A92A0  FUN_007a92a0  size=440  [between]
void __fastcall FUN_007a92a0(int param_1)

{
  int *piVar1;
  float *pfVar2;
  float10 fVar3;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  Behavior::vf54();
  if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x870) != 0)) {
    FUN_0091e980(param_1);
    switchD_0080dbae::default();
  }
  if ((*(int *)(param_1 + 0x7b4) != 0) && (*(int *)(param_1 + 0x870) == 0)) {
    FUN_004066f0();
    FUN_009174c0();
    *(undefined4 *)(param_1 + 0x874) = 1;
    if (*(int *)(param_1 + 0x7b4) != 0) {
      *(undefined4 *)(param_1 + 0x878) = 1;
    }
    fVar3 = (float10)FUN_00916de0();
    fVar3 = fVar3 * (float10)-1.0;
    local_30 = (float)fVar3;
    local_2c = (float)((float10)0.2 * fVar3);
    local_28 = (float)fVar3;
    pfVar2 = (float *)FUN_007a1f00(local_20);
    local_3c = pfVar2[1];
    if (((*pfVar2 == 0.0) && (local_3c == 0.0)) && (pfVar2[2] == 0.0)) {
      local_3c = 1.0;
    }
    local_40 = local_30 * *pfVar2;
    local_3c = local_2c * local_3c;
    local_38 = pfVar2[2] * local_28;
    local_34 = pfVar2[3] * local_24;
    FUN_0091ab40(&local_40);
    local_30 = local_40 * 0.1;
    local_2c = local_3c * 0.1;
    local_28 = local_38 * 0.1;
    local_24 = local_34 * 0.1;
    FUN_0091ac60(&local_30);
    *(undefined4 *)(param_1 + 0x870) = 1;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  return;
}

// 007A97D0  Emc070::vf32C  size=576  [class]
undefined4 __fastcall Emc070::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int local_268;
  undefined1 local_260 [144];
  uint uStack_1d0;
  
  param_1[0x568] = 0;
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  FUN_00ac2080(1);
  FUN_00ac2080(2);
  FUN_00ac2080(3);
  FUN_00ac2080(4);
  FUN_00ac2080(5);
  FUN_00ac2080(6);
  FUN_00ac2080(7);
  FUN_00ac2080(8);
  iVar2 = FUN_00a8ef10();
  if ((iVar2 == 0) && ((*(byte *)(param_1 + 0x130) & 1) != 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
    if (param_1[0x286] != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    piVar5 = (int *)param_1[0x19f];
    piVar4 = piVar5 + param_1[0x1a1] * 0x54;
    FUN_00445db0();
    FUN_004105d0();
    local_268 = -1;
    bVar1 = false;
    if (piVar5 != piVar4) {
      do {
        iVar2 = *piVar5;
        if ((iVar2 != 0x147) && (iVar2 != 0x114)) {
          if (iVar2 == 0x1b0) {
            (**(code **)(*param_1 + 0x370))(piVar5);
          }
          else {
            iVar2 = piVar5[1];
            if (local_268 <= iVar2) {
              FUN_00448f50(piVar5);
              bVar1 = true;
              local_268 = iVar2;
            }
          }
        }
        piVar5 = piVar5 + 0x54;
      } while (piVar5 != piVar4);
      if (bVar1) {
        iVar2 = FUN_00a8f040(local_260);
        if (iVar2 == 0) {
          if (((uStack_1d0 & 0x20000) != 0) && (param_1[0x575] == 0)) {
            (**(code **)(*param_1 + 0x358))(399,0);
            FUN_0079a490(0);
            FUN_0079a510(0);
            FUN_0079a590(0);
            FUN_0079a610(0);
            FUN_0079fff0(0);
            FUN_007a00b0(0);
            param_1[0x575] = 1;
          }
          iVar2 = FUN_0079cb70(local_260);
          param_1[0x568] = iVar2;
          if (iVar2 == 0) {
            if (param_1[0x56c] == 0) {
              if (param_1[0x139] == 0) {
                uVar3 = FUN_007a4260(local_260);
              }
              else {
                uVar3 = FUN_0079cd30(local_260);
              }
              if (param_1[0x286] != 0) {
                LeaveCriticalSection(lpCriticalSection);
              }
              return uVar3;
            }
            FUN_0079ccb0(local_260);
          }
        }
      }
    }
    if (param_1[0x286] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}

// 007A9A10  FUN_007a9a10  size=490  [between]
void __fastcall FUN_007a9a10(int *param_1)

{
  (**(code **)(*param_1 + 0x1d4))(0);
  param_1[0x56c] = 0;
  switch(param_1[0x186]) {
  case 0:
    FUN_0079d1b0();
    return;
  case 1:
    FUN_0079d560();
    return;
  case 2:
    FUN_0079d770();
    return;
  case 3:
    FUN_00798d10();
    return;
  case 4:
    FUN_00798d40();
    return;
  case 5:
    FUN_00798d70();
    return;
  case 7:
    FUN_007a4df0();
    return;
  case 8:
    FUN_0079dc40();
    return;
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
    FUN_007a5470();
    return;
  case 10:
    FUN_007a5820();
    return;
  case 0xb:
    FUN_007a5dc0();
    return;
  case 0x10:
    FUN_007990c0();
    return;
  case 0x15:
    FUN_007a33d0();
    return;
  case 0x16:
    FUN_007a3570();
    return;
  case 0x17:
  case 0x18:
    FUN_0079ba90();
    return;
  case 0x19:
    FUN_0079bbc0();
    return;
  case 0x1a:
    FUN_0079bbe0();
    return;
  case 0x1b:
  case 0x1c:
    FUN_007a67b0();
    return;
  case 0x1d:
    FUN_007a6820();
    return;
  case 0x1f:
    FUN_007a6890();
    return;
  case 0x20:
    FUN_007a6900();
    return;
  case 0x21:
  case 0x22:
  case 0x23:
    FUN_007a6990();
    return;
  case 0x24:
    FUN_007a6a00();
    return;
  case 0x25:
    FUN_007a6a70();
    return;
  case 0x27:
    FUN_007a09e0();
    return;
  case 0x28:
    FUN_007a0d30();
    return;
  case 0x29:
    FUN_007a1280();
    return;
  case 0x2b:
    FUN_0079adb0();
    return;
  case 0x2d:
    FUN_0079b280();
    return;
  case 0x2e:
    FUN_007a6ae0();
    return;
  case 0x2f:
    FUN_007a6d60();
    return;
  case 0x30:
    FUN_007a6df0();
    return;
  case 0x31:
    FUN_0079f3a0();
    return;
  case 0x32:
    FUN_007a6e80();
    return;
  case 0x33:
    FUN_007a6f10();
    return;
  case 0x34:
    FUN_007a72b0();
    return;
  case 0x35:
    FUN_007a7650();
    return;
  case 0x36:
    FUN_0079f3f0();
    return;
  case 0x37:
    FUN_0079f420();
    return;
  case 0x38:
    FUN_0079f450();
    return;
  case 0x39:
    FUN_00799700();
    return;
  case 0x3a:
    FUN_007a79c0();
    return;
  case 0x3b:
    FUN_007a7a50();
    return;
  case 0x3c:
    FUN_007a7be0();
    return;
  case 0x3d:
    FUN_0079f480();
    return;
  case 0x3e:
    FUN_007a7d70();
    return;
  case 0x3f:
    FUN_007a7e00();
    return;
  case 0x40:
    FUN_007a7e90();
    return;
  case 0x41:
    FUN_007a7f20();
    return;
  case 0x42:
  case 0x43:
    FUN_007a7fb0();
    return;
  case 0x44:
  case 0x45:
  case 0x46:
    FUN_0079f610();
    return;
  case 0x4a:
  case 0x4b:
    FUN_0079f770();
    return;
  case 0x5e:
    FUN_007a8cf0();
    return;
  case 99:
  case 0x67:
  case 0x68:
    param_1[0x56c] = 1;
  }
  return;
}

// 007AA180  FUN_007aa180  size=95  [between]
void __thiscall FUN_007aa180(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_164 [4];
  undefined1 local_160 [324];
  undefined4 local_1c;
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  local_1c = param_3;
  (**(code **)(*param_1 + 0x360))(local_160);
  FUN_00a8c8b0(param_1[300],auStack_164);
  return;
}

// 007AA1E0  FUN_007aa1e0  size=620  [between]
void __fastcall FUN_007aa1e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  float local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [288];
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (((*(int *)(param_1 + 0x598) == 1) || (iVar1 = FUN_00a8c760(0x11), iVar1 != 0)) &&
     (iVar1 = FUN_00a12210(0x12), iVar1 != 0)) {
    uVar3 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(0x3c,uVar2,uVar3);
    FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
    local_40 = *(undefined4 *)(iVar1 + 0x40);
    local_3c = *(float *)(iVar1 + 0x44);
    local_38 = *(undefined4 *)(iVar1 + 0x48);
    local_34 = *(undefined4 *)(iVar1 + 0x4c);
    local_180 = *(undefined4 *)(iVar1 + 0x40);
    local_178 = *(undefined4 *)(iVar1 + 0x48);
    local_174 = *(undefined4 *)(iVar1 + 0x4c);
    local_17c = *(float *)(iVar1 + 0x44) + 1.0;
    local_16c = *(float *)(iVar1 + 0x44) - 5.0;
    local_170 = local_180;
    local_168 = local_178;
    local_164 = local_174;
    iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (&local_180,0,0,0,&local_180,&local_170,0x1e,"em0070_foot");
    if (iVar1 != 0) {
      local_40 = local_180;
      local_3c = local_17c;
      local_38 = local_178;
      local_34 = local_174;
    }
    puVar4 = local_160;
    uVar2 = FUN_00e00b40(0x20010,puVar4);
    FUN_00a8c930(uVar2,puVar4);
  }
  if ((*(int *)(param_1 + 0x594) != 1) && (iVar1 = FUN_00a8c760(0x12), iVar1 == 0)) {
    return;
  }
  iVar1 = FUN_00a12210(0x16);
  if (iVar1 != 0) {
    uVar3 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(0x3c,uVar2,uVar3);
    FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
    local_40 = *(undefined4 *)(iVar1 + 0x40);
    local_3c = *(float *)(iVar1 + 0x44);
    local_38 = *(undefined4 *)(iVar1 + 0x48);
    local_34 = *(undefined4 *)(iVar1 + 0x4c);
    local_180 = *(undefined4 *)(iVar1 + 0x40);
    local_178 = *(undefined4 *)(iVar1 + 0x48);
    local_174 = *(undefined4 *)(iVar1 + 0x4c);
    local_17c = *(float *)(iVar1 + 0x44) + 1.0;
    local_16c = *(float *)(iVar1 + 0x44) - 5.0;
    local_170 = local_180;
    local_168 = local_178;
    local_164 = local_174;
    iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_4
                      (&local_180,0,0,0,&local_180,&local_170,0x1e,"em0070_foot");
    if (iVar1 != 0) {
      local_40 = local_180;
      local_3c = local_17c;
      local_38 = local_178;
      local_34 = local_174;
    }
    puVar4 = local_160;
    uVar2 = FUN_00e00b40(0x20010,puVar4);
    FUN_00a8c930(uVar2,puVar4);
  }
  return;
}

// 007AA450  FUN_007aa450  size=1256  [between]
/* WARNING: Removing unreachable block (ram,0x007aa662) */
/* WARNING: Removing unreachable block (ram,0x007aa7e5) */

void FUN_007aa450(float param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float unaff_ESI;
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
  int local_8;
  float local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0.0;
  pfStack_64 = (float *)0x7aa46f;
  pfStack_64 = (float *)FUN_00a1d5c0();
  FUN_0041c8e0(8);
  local_2c = *param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  if (local_8 < local_c) {
    pfVar7 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_2c;
      pfVar7[1] = local_28;
      pfVar7[2] = local_24;
    }
    local_8 = local_8 + 1;
  }
  local_44 = *param_3;
  local_40 = param_3[1];
  local_3c = param_3[2];
  local_20 = local_44 - local_2c;
  local_1c = local_40 - local_28;
  local_18 = local_3c - local_24;
  param_2 = (float *)(SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c) *
                     0.33333334);
  if (0.5 < (float)param_2) {
    param_2 = (float *)0x3f000000;
  }
  local_50 = (local_2c + local_44) * 0.5;
  local_4c = (local_40 + local_28) * 0.5;
  local_48 = (local_3c + local_24) * 0.5;
  if (local_40 < local_28) {
    local_4c = local_28 + (float)param_2;
  }
  if (local_28 < local_40) {
    if (local_40 + 5.0 < local_28) {
      param_2 = (float *)((float)param_2 * 0.5);
    }
    local_4c = (float)param_2 + local_40;
  }
  local_20 = local_20 * 0.16666667;
  local_1c = local_1c * 0.16666667;
  local_18 = local_18 * 0.16666667;
  local_38 = local_50 - local_20;
  local_34 = local_4c - local_1c;
  local_30 = local_48 - local_18;
  local_5c = local_38 - local_2c;
  local_58 = local_34 - local_28;
  local_54 = local_30 - local_24;
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
      *pfVar1 = (float)pfStack_64 * param_1 + local_34;
      pfVar1[1] = unaff_ESI * param_1 + local_30;
      pfVar1[2] = local_5c * param_1 + local_2c;
    }
    iVar2 = local_10 + 1;
    if (iVar2 < local_14) {
      pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_40;
        pfVar1[1] = local_3c;
        pfVar1[2] = local_38;
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
          (float)pfStack_64 * (float)pfStack_64 + (local_48 - local_30) * (local_48 - local_30);
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    pfStack_64 = (float *)0x0;
    local_5c = 0.0;
  }
  ppfVar4 = &pfStack_64;
  ppfVar5 = ppfVar4;
  D3DXVec3Normalize(ppfVar4);
  fVar6 = (float)ppfVar5 * local_4;
  fVar8 = (float)pfVar7 * local_4;
  pfStack_64 = (float *)((float)pfStack_64 * local_4);
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

// 007AA940  FUN_007aa940  size=1369  [between]
/* WARNING: Removing unreachable block (ram,0x007aabb0) */
/* WARNING: Removing unreachable block (ram,0x007aad45) */

void FUN_007aa940(undefined4 param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float unaff_ESI;
  float unaff_EDI;
  float unaff_retaddr;
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
  uVar2 = FUN_00a1d5c0();
  FUN_0041c8e0(8,uVar2);
  local_50 = *param_2;
  local_4c = param_2[1];
  local_48 = param_2[2];
  if ((int)local_8 < local_c) {
    pfVar1 = (float *)(local_10 + (int)local_8 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_50;
      pfVar1[1] = local_4c;
      pfVar1[2] = local_48;
    }
    local_8 = (float)((int)local_8 + 1);
  }
  local_38 = *param_3;
  local_34 = param_3[1];
  local_30 = param_3[2];
  local_64 = local_38 - local_50;
  local_28 = local_34 - local_4c;
  local_60 = local_30 - local_48;
  param_2 = (float *)(SQRT(local_60 * local_60 + local_28 * local_28 + local_64 * local_64) *
                     0.33333334);
  if (4.0 <= (float)param_2) {
    if (5.0 < (float)param_2) {
      param_2 = (float *)0x40a00000;
    }
  }
  else {
    param_2 = (float *)0x40800000;
  }
  local_2c = local_64;
  local_24 = local_60;
  iVar3 = FUN_00ac4d60(7);
  fVar4 = (float)param_2;
  if (((iVar3 != 0) && (fVar4 = 2.5, 2.5 <= (float)param_2)) &&
     (fVar4 = (float)param_2, 3.0 < (float)param_2)) {
    fVar4 = 3.0;
  }
  local_44 = local_64 * 0.8 + local_50;
  local_3c = local_60 * 0.8 + local_48;
  local_40 = local_4c + fVar4;
  if ((local_4c < local_34) && (local_40 = local_34 + fVar4, local_34 + 5.0 < local_4c)) {
    local_40 = fVar4 * 0.5 + local_34;
  }
  local_20 = local_2c * 0.16666667;
  local_1c = local_28 * 0.16666667;
  local_18 = local_24 * 0.16666667;
  local_2c = local_44 - local_20;
  local_28 = local_40 - local_1c;
  local_24 = local_3c - local_18;
  local_5c = local_2c - local_50;
  local_58 = local_28 - local_4c;
  local_54 = local_24 - local_48;
  fVar4 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_5c = 0.0;
    local_58 = 1.0;
    local_54 = 0.0;
  }
  D3DXVec3Normalize(&local_5c,&local_5c);
  iVar3 = local_10;
  if (local_10 < local_14) {
    pfVar1 = (float *)((int)local_18 + local_10 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_64 * unaff_retaddr + local_58;
      pfVar1[1] = local_60 * unaff_retaddr + local_54;
      pfVar1[2] = local_5c * unaff_retaddr + local_50;
    }
    iVar3 = local_10 + 1;
    if (iVar3 < local_14) {
      pfVar1 = (float *)((int)local_18 + iVar3 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_34;
        pfVar1[1] = local_30;
        pfVar1[2] = local_2c;
      }
      iVar3 = local_10 + 2;
      if (iVar3 < local_14) {
        pfVar1 = (float *)((int)local_18 + iVar3 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_4c;
          pfVar1[1] = local_48;
          pfVar1[2] = local_44;
        }
        iVar3 = local_10 + 3;
      }
    }
  }
  local_10 = iVar3;
  local_34 = local_28 + local_4c;
  local_30 = local_24 + local_48;
  local_2c = local_20 + local_44;
  local_64 = local_40 - local_34;
  local_60 = local_3c - local_30;
  local_5c = local_38 - local_2c;
  fVar4 = local_5c * local_5c + local_64 * local_64 + local_60 * local_60;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_64 = 0.0;
    local_60 = 1.0;
    local_5c = 0.0;
  }
  D3DXVec3Normalize(&local_64,&local_64);
  local_64 = local_64 * local_8;
  fVar4 = local_18;
  if ((int)local_18 < (int)local_1c) {
    pfVar1 = (float *)((int)local_20 + (int)local_18 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_3c;
      pfVar1[1] = local_38;
      pfVar1[2] = local_34;
    }
    fVar4 = (float)((int)local_18 + 1);
    if ((int)fVar4 < (int)local_1c) {
      pfVar1 = (float *)((int)local_20 + (int)fVar4 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_48 - unaff_EDI * local_8;
        pfVar1[1] = local_44 - unaff_ESI * local_8;
        pfVar1[2] = local_40 - local_64;
      }
      fVar4 = (float)((int)local_18 + 2);
      if ((int)fVar4 < (int)local_1c) {
        pfVar1 = (float *)((int)local_20 + (int)fVar4 * 0xc);
        if (pfVar1 == (float *)0x0) {
          fVar4 = (float)((int)local_18 + 3);
        }
        else {
          *pfVar1 = local_48;
          pfVar1[1] = local_44;
          pfVar1[2] = local_40;
          fVar4 = (float)((int)local_18 + 3);
        }
      }
    }
  }
  local_18 = fVar4;
  FUN_00a5e090(&local_24);
  if ((local_20 != 0.0) && (local_18 = 0.0, local_14 != 0)) {
    FUN_00dd48d0(local_20,0);
  }
  return;
}

// 007AAEA0  FUN_007aaea0  size=103  [between]
void __thiscall FUN_007aaea0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 007AAF10  FUN_007aaf10  size=74  [between]
void __thiscall FUN_007aaf10(int param_1,undefined4 param_2,int param_3)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 007AAF60  Emc070::vf40  size=3255  [class]
undefined4 __fastcall Emc070::vf40(int *param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  undefined4 *puVar11;
  float10 fVar12;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  int local_94;
  undefined1 local_80 [124];
  
  iVar3 = EmBaseDLC::vf40();
  if (iVar3 == 0) {
    return 0;
  }
  if (3 < (uint)param_1[0x128]) {
    param_1[0x128] = 0;
  }
  iVar3 = FUN_00ac8a50();
  param_1[0x3a5] = iVar3;
  param_1[0x3a6] = 0;
  param_1[0x3a7] = 0;
  if (param_1[300] == 0x2c070) {
    FUN_00acf600(0x2c072,"Emc070Body");
  }
  if (param_1[300] == 0x2c071) {
    FUN_00acf600(0x2c073,"Emc071Body");
    param_1[0x56a] = 1;
  }
  iVar3 = param_1[300];
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(iVar3,0x20070);
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] | 0x400000;
    *(undefined4 *)param_1[0xdc] = 0;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 1;
    *(undefined4 *)(param_1[0xdc] + 8) = 1;
  }
  FUN_00ac8d40(0);
  FUN_00a929d0();
  param_1[0x565] = 0x3f800000;
  sVar1 = FUN_00dde2d0(0,100);
  FUN_00a8edf0(sVar1 + 300);
  if (param_1[0x1d5] != 0) {
    FUN_00ac8570(0x1d);
    iVar3 = FUN_00fdbc60();
    FUN_00ac8570(0x1e);
    uVar2 = FUN_00fdbc60();
    if (param_1[0x56a] != 0) {
      FUN_00ac8570(0x2b);
      iVar3 = FUN_00fdbc60();
      FUN_00ac8570(0x2c);
      uVar2 = FUN_00fdbc60();
      fVar12 = (float10)FUN_00ac8570(0x2d);
      param_1[0x565] = (int)(float)fVar12;
    }
    sVar1 = FUN_00dde2d0(0,uVar2);
    FUN_00a8edf0(sVar1 + iVar3);
    fVar12 = (float10)FUN_00ac8570(0x1f);
    param_1[0x557] = (int)(float)fVar12;
    fVar12 = (float10)FUN_00ac8570(0x20);
    param_1[0x558] = (int)(float)fVar12;
    fVar12 = (float10)FUN_00ac8570(0x21);
    param_1[0x559] = (int)(float)fVar12;
    fVar12 = (float10)FUN_00ac8570(0x22);
    param_1[0x55a] = (int)(float)fVar12;
    fVar12 = (float10)FUN_00ac8570(0x23);
    param_1[0x55b] = (int)(float)fVar12;
    FUN_00ac8570(0x24);
    iVar3 = FUN_00fdbc60();
    param_1[0x55f] = iVar3;
    FUN_00ac8570(0x25);
    iVar3 = FUN_00fdbc60();
    param_1[0x560] = iVar3;
    if (param_1[0x56a] != 0) {
      FUN_00ac8570(0x2e);
      iVar3 = FUN_00fdbc60();
      param_1[0x55f] = iVar3;
      FUN_00ac8570(0x2f);
      iVar3 = FUN_00fdbc60();
      param_1[0x560] = iVar3;
    }
    param_1[0x567] = 0;
    param_1[0x566] = 0;
    fVar12 = (float10)FUN_00ac8570(0x29);
    param_1[0x55c] = (int)(float)fVar12;
    fVar12 = (float10)FUN_00ac8570(0x27);
    param_1[0x55d] = (int)(float)fVar12;
    fVar12 = (float10)FUN_00ac8570(0x28);
    param_1[0x55e] = (int)(float)fVar12;
    FUN_00ac8570(0x31);
    iVar3 = FUN_00fdbc60();
    param_1[0x561] = iVar3;
    FUN_00ac8570(0x32);
    iVar3 = FUN_00fdbc60();
    param_1[0x562] = iVar3;
    FUN_00ac8570(0x33);
    iVar3 = FUN_00fdbc60();
    param_1[0x563] = iVar3;
    FUN_00ac8570(0x34);
    iVar3 = FUN_00fdbc60();
    param_1[0x564] = iVar3;
    if (param_1[0x56a] != 0) {
      FUN_00ac8570(0x35);
      iVar3 = FUN_00fdbc60();
      param_1[0x561] = iVar3;
      FUN_00ac8570(0x36);
      iVar3 = FUN_00fdbc60();
      param_1[0x562] = iVar3;
      FUN_00ac8570(0x37);
      iVar3 = FUN_00fdbc60();
      param_1[0x563] = iVar3;
      FUN_00ac8570(0x38);
      iVar3 = FUN_00fdbc60();
      param_1[0x564] = iVar3;
    }
  }
  param_1[0x3c6] = 0;
  iVar3 = FUN_00c5def0(param_1[0x13c]);
  param_1[0x25c] = iVar3;
  FUN_00405230();
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  FUN_00c151f0(1,param_1[0x13c],2,&local_a0,0,0x41000000,0x3fc00000,2,0);
  FUN_00c57830(local_80);
  param_1[0x1b1] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = local_94;
  param_1[0x1ba] = 0x3fc00000;
  param_1[0x1bb] = 1;
  uVar4 = 0x3f666666;
  param_1[0x1b9] = -1;
  param_1[0x1b8] = 5;
  if ((param_1[0x12a] & 0x800U) != 0) {
    uVar4 = 0x3f333333;
  }
  iVar3 = FUN_008ec660(param_1,0x40200000,uVar4,0x41a00000,0x41a00000,0x78,7,0);
  param_1[0x1d9] = iVar3;
  FUN_008e6d00();
  *(float *)(param_1[0x1d9] + 0xf4) = *(float *)(param_1[0x1d9] + 0xf4) * 0.5;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0x3e99999a;
  FUN_008e0d30(&local_a0);
  if (param_1[0x162] != 0) {
    *(undefined4 *)(param_1[0x162] + 0x24) = 0x3fc00000;
    *(undefined4 *)(param_1[0x162] + 0x28) = 0x3e99999a;
  }
  FUN_00aa4080(6,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(10);
  uVar4 = FUN_00a8d2a0();
  puVar5 = (undefined4 *)FUN_009f8b60();
  iVar3 = CollisionCapsule::CollisionCapsule(2,*puVar5,0);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x380) = 0;
    FUN_00d77c50(param_1[0x13c],0);
    *(undefined4 *)(iVar3 + 0x594) = 0x3f8ccccd;
    *(undefined4 *)(iVar3 + 0x590) = 0x3f333333;
    FUN_00d771d0(0xb);
    FUN_00a93a00(iVar3,uVar4);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  FUN_00a82790(param_1[0x13c],3,0);
  param_1[0x490] = param_1[0x490] | 0x42;
  param_1[0x4bc] = 0;
  param_1[0x4bd] = 0;
  param_1[0x4be] = 0x3f800000;
  param_1[0x4bf] = local_94;
  FUN_00a82870(0x3e860a92,0xbe860a92,0x3d4ccccd,0x393702d3,0x3c0efa35);
  FUN_00a82790(param_1[0x13c],5,0);
  param_1[0x4c4] = param_1[0x4c4] | 0x42;
  param_1[0x4f0] = 0;
  param_1[0x4f1] = 0;
  param_1[0x4f2] = 0x3f800000;
  param_1[0x4f3] = local_94;
  FUN_00a82840(0x3eb2b8c2,0xbeb2b8c2,0x3dcccccd,0x393702d3,0x3c8efa35);
  FUN_00a82870(0x3e860a92,0xbe860a92,0x3dcccccd,0x393702d3,0x3c8efa35);
  uVar6 = FUN_00de3850(0,"_col.hkx",0);
  iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = RigidBodyCollection::RigidBodyCollection_2();
  }
  param_1[0x1ec] = iVar3;
  if (iVar3 != 0) {
    iVar3 = param_1[0x13c];
    uVar7 = FUN_00de3ee0(uVar6);
    uVar6 = FUN_00de3cf0(uVar6);
    iVar3 = FUN_008f6410(iVar3,uVar6,uVar7);
    if (iVar3 != 0) {
      FUN_008f2cd0(0);
      puVar5 = (undefined4 *)FUN_009f8b60();
      (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar5);
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))(0x1f);
    }
  }
  if (((int *)param_1[0x1ec] != (int *)0x0) &&
     (iVar3 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar3 != 0)) {
    Behavior::addDefenseCollisionFromRigidBody_2(param_1[0x1ec],2);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_6(uVar4,0);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_R_arm1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_R_arm2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_L_arm");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_L_arm2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_R_leg");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_R_leg2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(7,"_L_leg");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(8,"_L_leg2");
  }
  puVar5 = (undefined4 *)FUN_00dd3580(0x90,&DAT_01b7bd48);
  param_1[0x360] = (int)puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    puVar11 = &DAT_01883130;
    for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar5 = puVar5 + 1;
    }
    lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
              (param_1[0x13c],5,param_1[0x360],4);
    FUN_00a88b50(1,0);
  }
  if ((*(byte *)(param_1 + 0x12a) & 4) != 0) {
    lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
              (param_1[0x13c],5,&DAT_018830a0,4);
    FUN_00a88b50(1,0);
  }
  if ((*(byte *)(param_1 + 0x12a) & 1) != 0) {
    FUN_00a88b50(4,0);
  }
  param_1[0x544] = param_1[0x14];
  param_1[0x545] = param_1[0x15];
  param_1[0x546] = param_1[0x16];
  param_1[0x547] = param_1[0x17];
  param_1[0x548] = param_1[0x544];
  param_1[0x549] = param_1[0x545];
  param_1[0x54a] = param_1[0x546];
  param_1[0x54b] = param_1[0x547];
  param_1[0x3b2] = 0x41f00000;
  param_1[0x3b1] = 1;
  param_1[0x47b] = -0x40800000;
  param_1[0x47a] = 0;
  param_1[0x501] = 0;
  sVar1 = FUN_00dde2d0(0,(short)param_1[0x562]);
  param_1[0x50b] = 0;
  param_1[0x52d] = 0;
  param_1[0x538] = 0x44160000;
  param_1[0x500] = (int)sVar1 + param_1[0x564] * param_1[0x501] + param_1[0x561];
  param_1[0x52c] = 0;
  sVar1 = FUN_00dde2d0(0,1);
  if (sVar1 != 0) {
    param_1[0x538] = -0x40800000;
  }
  param_1[0x539] = 0x44160000;
  param_1[0x540] = -0x40800000;
  param_1[0x53d] = 0x3f800000;
  param_1[0x53e] = 0x3f800000;
  param_1[0x53f] = 0x3f800000;
  param_1[0x541] = 0;
  param_1[0x569] = 0;
  *(undefined2 *)(param_1 + 0x556) = 0;
  *(undefined1 *)((int)param_1 + 0x155a) = 0;
  param_1[0x485] = 0x3d4ccccd;
  param_1[0x56e] = 0;
  param_1[0x484] = 0;
  param_1[0x575] = 0;
  param_1[0x576] = 0;
  param_1[0x572] = 0;
  iVar3 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar3 == 0) {
    return 0;
  }
  param_1[0x571] = 0;
  param_1[0x570] = 1;
  param_1[0x3a8] = -1;
  FUN_00ac94e0(&DAT_0163d9a8);
  iVar3 = param_1[0x128];
  uVar2 = 6;
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0x34c))();
    if (param_1[299] != 1) goto LAB_007aba0e;
    FUN_005b0c60();
    iVar3 = FUN_00c3d9d0(param_1 + 0x10,&local_a0);
    if ((iVar3 == 0) || ((local_98 & 0x40000000) == 0)) {
      uVar4 = 0x29;
    }
    else {
      uVar4 = 10;
    }
  }
  else {
    if (iVar3 == 1) {
      uVar2 = 0x60;
      (**(code **)(*param_1 + 0x34c))();
      FUN_00798b50();
      goto LAB_007aba0e;
    }
    if (iVar3 != 2) goto LAB_007aba0e;
    uVar4 = 5;
  }
  FUN_00a8caf0(uVar4,0,0,0);
LAB_007aba0e:
  FUN_00aa4080(uVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a92f90();
  FUN_00e3f050();
  switchD_0080dbae::default();
  piVar8 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c54720(piVar8);
  piVar8 = (int *)FUN_00ac8a30();
  param_1[0x3a4] = (int)piVar8;
  iVar3 = piVar8[0x33];
  param_1[0x3a5] = iVar3;
  param_1[0x3a6] = *piVar8;
  param_1[0x3a7] = piVar8[1];
  if (iVar3 == 0) {
    if ((*(byte *)(param_1 + 0x12a) & 0x20) == 0) {
      pcVar10 = *(code **)(*param_1 + 0x358);
      uVar4 = 0;
    }
    else {
      pcVar10 = *(code **)(*param_1 + 0x358);
      uVar4 = 0x67;
    }
    (*pcVar10)(uVar4,param_1 + 0x44c);
  }
  else {
    (**(code **)(*param_1 + 0x220))(0x41200000);
  }
  if ((param_1[0x3a5] == 0) && (iVar3 = FUN_00a82090("Emc070_Gun",0x3c320,0), iVar3 != 0)) {
    uVar4 = FUN_00a7c7f0();
    FUN_00a7c960(uVar4);
    FUN_00a81330();
    uVar4 = FUN_00a7c8a0();
    iVar9 = FUN_0079c120(uVar4);
    if (iVar9 != 0) {
      FUN_00798bd0(param_1[0x13c]);
    }
    iVar9 = FUN_00a7c8a0();
    *(int **)(iVar9 + 0x518) = param_1;
    uVar4 = FUN_009f8b40();
    FUN_00a7c8a0(uVar4);
    FUN_009f8ae0();
    FUN_00ac8ad0(0,param_1[0x13c],iVar3,0x515,0xffffffff,8);
    FUN_00ac8be0(0,1);
  }
  param_1[0x20b] = 5;
  param_1[0x20c] = 5;
  if (((param_1[0x12a] & 0x100U) != 0) && (param_1[0x1d9] != 0)) {
    FUN_008e59c0(2);
  }
  if ((param_1[0x12a] & 0x200U) != 0) {
    (**(code **)(*param_1 + 0x358))(0x208,0);
    (**(code **)(*param_1 + 0x110))(1);
    param_1[0x573] = 0x42700000;
  }
  param_1[0x36a] = 0;
  param_1[0x36c] = 0;
  return 1;
}

// 007ABC20  Emc070::vf48  size=2910  [class]
/* WARNING: Removing unreachable block (ram,0x007abcab) */

void __fastcall Emc070::vf48(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  int **ppiVar9;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float local_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  char *pcStack_fc;
  undefined4 uStack_f8;
  undefined1 auStack_ec [36];
  undefined1 auStack_c8 [8];
  int *piStack_c0;
  undefined4 uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  char *pcStack_7c;
  undefined1 auStack_70 [12];
  undefined1 auStack_64 [4];
  undefined1 local_60 [8];
  undefined1 auStack_58 [84];
  
  EmBaseDLC::vf48();
  param_1[0x47e] = 1;
  local_184 = 0.0;
  iVar2 = FUN_00907640(param_1 + 0x47d,&local_138,local_60);
  if (iVar2 != 0) {
    param_1[0x47e] = 0;
    local_184 = 1.4013e-45;
    FUN_0112bcf0();
    if (0 < *(int *)((int)local_138 + 0x14)) {
      iVar2 = *(int *)(*(int *)((int)local_138 + 0x10) + 0x28);
      iVar4 = 0;
      iVar5 = 0;
      if (*(char *)(iVar2 + 0x18) == '\x01') {
        iVar4 = *(char *)(iVar2 + 0x10) + iVar2;
      }
      if (*(char *)(iVar2 + 0x18) == '\x02') {
        if (*(char *)(iVar2 + 0x18) == '\x02') {
          iVar5 = *(char *)(iVar2 + 0x10) + iVar2;
        }
        else {
          iVar5 = 0;
        }
      }
      if (iVar4 != 0) {
        iVar2 = FUN_008f7780(iVar4);
        if ((param_1[0x2a1] != 0) && (iVar2 == param_1[0x2a1])) {
          param_1[0x47e] = 1;
          local_184 = 0.0;
        }
      }
      if (iVar5 != 0) {
        iVar2 = FUN_008f7780(iVar5);
        if ((param_1[0x2a1] != 0) && (iVar2 == param_1[0x2a1])) {
          param_1[0x47e] = 1;
          local_184 = 0.0;
        }
      }
    }
  }
  param_1[0x47a] = 0;
  if ((param_1[0x1d9] != 0) && (iVar2 = *(int *)(param_1[0x1d9] + 300), 0 < *(int *)(iVar2 + 0x14)))
  {
    FUN_0112bcf0();
    local_188 = 0.0;
    if (0 < *(int *)(iVar2 + 0x14)) {
      iVar4 = 0;
      do {
        iVar5 = FUN_00445cc0(*(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x28 + iVar4));
        if (((iVar5 != 0) && (iVar5 = FUN_008f7780(iVar5), iVar5 != 0)) &&
           ((*(byte *)(iVar5 + 0x4c0) & 0x10) != 0)) {
          param_1[0x47a] = 1;
        }
        local_188 = (float)((int)local_188 + 1);
        iVar4 = iVar4 + 0x30;
      } while ((int)local_188 < *(int *)(iVar2 + 0x14));
    }
  }
  if ((2.89 < (float)param_1[0x2a3]) || (local_184 != 0.0)) {
    fVar8 = (float)param_1[0x47b] - ((float)param_1[0x244] + (float)param_1[0x244]);
    param_1[0x47b] = (int)fVar8;
    if (fVar8 < -1.0 != (fVar8 == -1.0)) {
      param_1[0x47b] = -0x40800000;
    }
  }
  else {
    fVar8 = (float)param_1[0x47b];
    param_1[0x47b] = (int)((float)param_1[0x244] + fVar8);
    if (120.0 <= (float)param_1[0x244] + fVar8) {
      param_1[0x47b] = 0x42f00000;
    }
    if (90.0 < (float)param_1[0x47b]) {
      param_1[0x47b] = 0x42b40000;
      param_1[0x47a] = 1;
    }
  }
  FUN_007a3ef0();
  iVar2 = FUN_00a82d50();
  if (iVar2 == 4) {
    param_1[0x576] = 1;
  }
  else if (((local_184 == 0.0) && ((float)param_1[0x2a3] <= 9.0)) &&
          ((fVar8 = (float)param_1[0x2a3], !NAN(fVar8) && 0.25 < fVar8 != (fVar8 == 0.25) &&
           (((int *)param_1[0x2a1] != (int *)0x0 &&
            (iVar2 = (**(code **)(*(int *)param_1[0x2a1] + 0x364))(), iVar2 != 0)))))) {
    FUN_00a88b50(4,1);
    param_1[0x3c6] = -0x40800000;
    param_1[0x47e] = 1;
  }
  if ((*(byte *)(param_1 + 0x12a) & 0x80) != 0) {
    param_1[0x47e] = 1;
  }
  if (((int *)param_1[0x2a1] != (int *)0x0) &&
     (iVar2 = (**(code **)(*(int *)param_1[0x2a1] + 0x230))(), iVar2 != 0)) {
    param_1[0x47e] = 0;
  }
  fStack_134 = 0.0;
  uStack_104 = 0;
  FUN_00ac8270(param_1 + 0x10,&fStack_134,&uStack_104);
  if ((fStack_134 != 0.0) &&
     (fVar8 = (float)param_1[0x2a3], !NAN(fVar8) && 9.0 < fVar8 != (fVar8 == 9.0))) {
    param_1[0x47e] = 0;
  }
  iVar2 = param_1[0x2a1];
  if ((iVar2 != 0) && (param_1[0x47e] != 0)) {
    param_1[0x480] = *(int *)(iVar2 + 0x40);
    param_1[0x481] = *(int *)(iVar2 + 0x44);
    param_1[0x482] = *(int *)(iVar2 + 0x48);
    param_1[0x483] = *(int *)(iVar2 + 0x4c);
    iVar2 = param_1[0x2a1];
    if ((float)param_1[0x11] + 1.8 < *(float *)(iVar2 + 0x44) !=
        ((float)param_1[0x11] + 1.8 == *(float *)(iVar2 + 0x44))) {
      param_1[0x48c] = param_1[0x48c] + 1;
      goto LAB_007abf7e;
    }
  }
  param_1[0x48c] = 0;
LAB_007abf7e:
  if (iVar2 != 0) {
    FUN_00a8d230(&fStack_130);
    iVar2 = FUN_00a12210(0);
    fStack_170 = *(float *)(iVar2 + 0x40);
    fStack_16c = *(float *)(iVar2 + 0x44);
    fStack_168 = *(float *)(iVar2 + 0x48);
    fStack_164 = *(float *)(iVar2 + 0x4c);
    fStack_180 = fStack_130 - fStack_170;
    fStack_17c = fStack_12c - fStack_16c;
    fStack_178 = fStack_128 - fStack_168;
    fStack_174 = fStack_124 - fStack_164;
    iVar2 = FUN_009f8b40();
    uStack_90 = 0x3d4ccccd;
    uStack_8c = iVar2 << 0x10 | 7;
    if (param_1[0x128] == 1) {
      uStack_90 = 0x3ba3d70a;
    }
    piStack_c0 = param_1 + 0x47d;
    fStack_b0 = fStack_170;
    fStack_ac = fStack_16c;
    fStack_a8 = fStack_168;
    uStack_bc = 0;
    fStack_a4 = fStack_164;
    uStack_88 = 0x3ff001b;
    uStack_84 = 8;
    fStack_a0 = fStack_180;
    uStack_80 = 0;
    pcStack_7c = "Emc070View";
    fStack_9c = fStack_17c;
    fStack_98 = fStack_178;
    fStack_94 = fStack_174;
    FUN_0090fb00(&piStack_c0);
  }
  FUN_007a8960();
  if ((param_1[0x52c] != 0) &&
     (fVar8 = (float)param_1[0x52d], param_1[0x52d] = (int)(fVar8 - (float)param_1[0x244]),
     fVar8 - (float)param_1[0x244] < 0.0)) {
    param_1[0x52c] = 0;
  }
  iStack_160 = param_1[0x10];
  iStack_15c = param_1[0x11];
  iStack_158 = param_1[0x12];
  iStack_154 = param_1[0x13];
  fStack_180 = 0.0;
  fStack_17c = 6.0;
  fStack_178 = 10.0;
  fStack_170 = 0.0;
  fStack_168 = 0.0;
  fStack_16c = 6.0;
  fVar6 = (float10)FUN_00ddba30((float)param_1[0x2a7] - (float)param_1[0x50b]);
  bVar1 = fVar6 * fVar6 < (float10)0.6168503 != (fVar6 * fVar6 == (float10)0.6168503);
  if (bVar1) {
    fStack_178 = 20.0;
  }
  iVar2 = param_1[0x48c];
  if (0xe < iVar2) {
    fStack_178 = 25.0;
  }
  fVar8 = (float)param_1[0x50b];
  ppiVar9 = &piStack_c0;
  D3DXMatrixRotationY(ppiVar9,fVar8);
  piVar3 = param_1 + 4;
  D3DXMatrixMultiply(auStack_58,auStack_c8,piVar3);
  fVar6 = (float10)FUN_00ddba30((float)param_1[0x50b] + 0.017453292);
  param_1[0x50b] = (int)(float)fVar6;
  D3DXVec3TransformNormal(&fStack_194,&fStack_194,auStack_64);
  D3DXVec3TransformNormal(&fStack_190,&fStack_190,auStack_70);
  fStack_14c = unaff_ESI + fStack_18c;
  fStack_148 = unaff_EBX + local_188;
  fStack_144 = fStack_194 + local_184;
  fStack_140 = fStack_190 + fStack_180;
  fStack_18c = (float)piVar3 + fStack_18c;
  local_188 = (float)ppiVar9 + local_188;
  local_184 = local_184 + fVar8;
  fStack_180 = fStack_180 + unaff_EDI;
  piVar3 = (int *)FUN_009f8b60();
  fStack_12c = fStack_14c;
  fStack_128 = fStack_148;
  fStack_124 = fStack_144;
  fStack_120 = fStack_140;
  fStack_11c = fStack_18c;
  fStack_118 = local_188;
  uStack_10c = *piVar3 << 0x10 | 7;
  fStack_114 = local_184;
  fStack_110 = fStack_180;
  uStack_108 = 0x80000;
  uStack_104 = 0;
  uStack_100 = 0;
  pcStack_fc = "masuthihu";
  uStack_f8 = 0;
  iVar4 = RayCastSingleHitWork::RayCastSingleHitWork_2(&iStack_15c,&fStack_17c,0,0,&fStack_12c);
  if (iVar4 != 0) {
    FUN_00a603a0();
    FUN_007aa450(auStack_ec,param_1 + 0x10,&iStack_15c);
    if (0xe < iVar2 || bVar1) {
      param_1[0x52c] = 1;
      param_1[0x530] = iStack_15c;
      param_1[0x531] = iStack_158;
      param_1[0x532] = iStack_154;
      param_1[0x533] = iStack_150;
      param_1[0x534] = (int)fStack_17c;
      param_1[0x535] = (int)fStack_178;
      param_1[0x536] = (int)fStack_174;
      param_1[0x537] = (int)fStack_170;
      param_1[0x52d] = 0x41200000;
    }
    cXml::cXml_7();
  }
  param_1[0x47c] = 0;
  iVar2 = FUN_00f98a90();
  fVar8 = (float)iVar2 * 0.5;
  iVar2 = FUN_00f98aa0();
  fStack_134 = (float)iVar2 * 0.5;
  iVar2 = FUN_00f98a90();
  local_138 = (float)iVar2 * 0.5;
  iVar2 = FUN_00f98aa0();
  fVar7 = (float)iVar2 * 0.5;
  iVar2 = FUN_00a12210(0);
  FUN_00d9fa80(&fStack_17c,iVar2 + 0x40);
  if ((((1.0 < fStack_170) && (fVar8 - local_138 < fStack_17c)) && (fStack_17c < local_138 + fVar8))
     && ((fStack_134 - fVar7 < fStack_178 && (fStack_178 < fVar7 + fStack_134)))) {
    param_1[0x47c] = 1;
  }
  fVar8 = (float)param_1[0x3c6];
  if (!NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0)) {
    param_1[0x3c6] = (int)((float)param_1[0x3c6] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x538] != ((float)param_1[0x538] == 0.0)) {
    param_1[0x538] = (int)((float)param_1[0x538] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x539] != ((float)param_1[0x539] == 0.0)) {
    param_1[0x539] = (int)((float)param_1[0x539] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x567] != ((float)param_1[0x567] == 0.0)) {
    param_1[0x567] = (int)((float)param_1[0x567] - (float)param_1[0x244]);
  }
  if ((float)param_1[0x567] < 0.0) {
    param_1[0x566] = 0;
  }
  fVar8 = (float)param_1[0x540];
  if (!NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0)) {
    param_1[0x540] = (int)((float)param_1[0x540] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x572] != ((float)param_1[0x572] == 0.0)) {
    param_1[0x572] = (int)((float)param_1[0x572] - (float)param_1[0x244]);
  }
  if ((param_1[0x574] != 0) &&
     (fVar8 = (float)param_1[0x573], param_1[0x573] = (int)(fVar8 - (float)param_1[0x244]),
     fVar8 - (float)param_1[0x244] < 0.0)) {
    (**(code **)(*param_1 + 0x110))(0);
  }
  if ((float)param_1[0x540] <= 0.0) {
    param_1[0x53d] = (int)((1.0 - (float)param_1[0x53d]) * 0.3 + (float)param_1[0x53d]);
    param_1[0x53e] = (int)((float)param_1[0x53e] + (1.0 - (float)param_1[0x53e]) * 0.3);
    param_1[0x53f] = (int)((float)param_1[0x53f] + (1.0 - (float)param_1[0x53f]) * 0.3);
    if (param_1[0x541] != 0) {
      FUN_00eaa6e0(0x41200000,0);
      param_1[0x541] = 0;
    }
  }
  else {
    param_1[0x53d] =
         (int)(((float)param_1[0x53a] - (float)param_1[0x53d]) * 0.2 + (float)param_1[0x53d]);
    param_1[0x53e] =
         (int)(((float)param_1[0x53b] - (float)param_1[0x53e]) * 0.2 + (float)param_1[0x53e]);
    param_1[0x53f] =
         (int)(((float)param_1[0x53c] - (float)param_1[0x53f]) * 0.2 + (float)param_1[0x53f]);
    iVar2 = FUN_00a8e520();
    if (iVar2 != 0) {
      param_1[0x540] = 0;
    }
    fStack_17c = 0.0;
    fStack_178 = 0.0;
    fStack_174 = 0.0;
    FUN_00c593a0(param_1[0x13c],0xffffffff,&fStack_17c,0x40600000,0x3fc00000,2,8);
  }
  fVar8 = (float)param_1[0x2a8];
  if (NAN(fVar8) || 1.9198622 < fVar8 == (fVar8 == 1.9198622)) {
    fVar8 = (float)param_1[0x542] - (float)param_1[0x244] * 10.0;
    param_1[0x542] = (int)fVar8;
    if (fVar8 < 0.0) {
      param_1[0x542] = 0;
      return;
    }
  }
  else {
    fVar8 = (float)param_1[0x244] + (float)param_1[0x542];
    param_1[0x542] = (int)fVar8;
    if (!NAN(fVar8) && 120.0 < fVar8 != (fVar8 == 120.0)) {
      param_1[0x542] = 0x42f00000;
      return;
    }
  }
  return;
}

// 007AC780  Emc070::vf50  size=100  [class]
void __fastcall Emc070::vf50(int param_1)

{
  int iVar1;
  
  switchD_0080dbae::default();
  BehaviorEmBase::vf50();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      FUN_008f3cb0(param_1);
    }
  }
  FUN_007aa1e0();
  FUN_00ac95d0();
  *(undefined4 *)(param_1 + 0x1220) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x1224) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x1228) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x122c) = *(undefined4 *)(param_1 + 0x4c);
  return;
}

// 007AC7F0  FUN_007ac7f0  size=56  [callgraph]
void __fastcall FUN_007ac7f0(int param_1)

{
  if (*(int *)(param_1 + 0xa18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
  }
  FUN_007a9a10();
  FUN_007a0150();
  if (*(int *)(param_1 + 0xa18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
  }
  return;
}

// 007AC830  FUN_007ac830  size=881  [callgraph]
void __fastcall FUN_007ac830(int *param_1)

{
  float fVar1;
  int iVar2;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_007aa450(param_1 + 0x50c,param_1 + 0x10,param_1 + 0x524);
    FUN_00a8e880(param_1 + 0x524);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    (**(code **)(*param_1 + 0x358))(0x35,param_1 + 0x3f4);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x524);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    FUN_00a8c760(0);
    return;
  case 2:
    FUN_00aa4080(0x24,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
    FUN_007aa450(param_1 + 0x50c,param_1 + 0x10,param_1 + 0x524);
    goto LAB_007ac9d5;
  case 3:
LAB_007ac9d5:
    FUN_00a97e60(0x40000000,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&iStack_c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x249] = 0x40000000;
      FUN_00a581b0(&iStack_c,0,0x40000000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = iStack_c;
    param_1[0x15] = iStack_8;
    param_1[0x16] = iStack_4;
    param_1[0x24a] = 0x3da3d70a;
    param_1[0x249] = (int)((float)param_1[0x244] * 0.08 + (float)param_1[0x249]);
    FUN_00a8e880(param_1 + 0x524);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e32b8c2,0);
    FUN_00a8c760(0);
    return;
  case 4:
    FUN_00aa4080(0x26,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    break;
  case 5:
    break;
  default:
    goto switchD_007ac852_default;
  }
  FUN_00a97e60(0x3f000000,0);
  (**(code **)(*param_1 + 0x314))();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0,1,0,0);
    FUN_00a8c760(0);
    return;
  }
switchD_007ac852_default:
  FUN_00a8c760(0);
  return;
}

// 007ACBC0  FUN_007acbc0  size=1571  [callgraph]
void __fastcall FUN_007acbc0(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_007aa450(param_1 + 0x50c,param_1 + 0x10,param_1 + 0x524);
    FUN_00a8e880(param_1 + 0x524);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    (**(code **)(*param_1 + 0x358))(0x35,param_1 + 0x3f4);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x524);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    FUN_00a8c760(0);
    return;
  case 2:
    FUN_00aa4080(0x24,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
    FUN_007aa450(param_1 + 0x50c,param_1 + 0x10,param_1 + 0x524);
    param_1[0x250] = 0;
    if ((param_1[0x202] != 0) && (cVar2 = FUN_00c9db20(6), cVar2 != '\0')) {
      param_1[0x250] = 1;
    }
    goto LAB_007acd91;
  case 3:
LAB_007acd91:
    FUN_00a97e60(0x40000000,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&iStack_c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x249] = 0x40000000;
      FUN_00a581b0(&iStack_c,0,0x40000000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = iStack_c;
    param_1[0x15] = iStack_8;
    param_1[0x16] = iStack_4;
    param_1[0x24a] = 0x3da3d70a;
    param_1[0x249] = (int)((float)param_1[0x244] * 0.08 + (float)param_1[0x249]);
    FUN_00a8e880(param_1 + 0x524);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e32b8c2,0);
    FUN_00a8c760(0);
    return;
  case 4:
    FUN_00aa4080(0xd5,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    FUN_00eaa6e0(0x41200000,0);
    break;
  case 5:
    break;
  case 6:
    FUN_00aa4080(0x25,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    FUN_00a8d790(&iStack_c);
    param_1[0x524] = iStack_c;
    param_1[0x525] = iStack_8;
    param_1[0x526] = iStack_4;
    param_1[0x527] = 0x3f800000;
    FUN_007aa450(param_1 + 0x50c,param_1 + 0x10,param_1 + 0x524);
    (**(code **)(*param_1 + 0x358))(0x35,param_1 + 0x3f4);
    goto LAB_007ad037;
  case 7:
LAB_007ad037:
    FUN_00a97e60(0x3f000000,0);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&iStack_c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x244] * 0.05 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0x40000000;
    }
    param_1[0x14] = iStack_c;
    param_1[0x15] = iStack_8;
    param_1[0x16] = iStack_4;
    FUN_00a8e880(param_1 + 0x524);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    FUN_00a8c760(0);
    return;
  case 8:
    FUN_00aa4080(0x26,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    goto LAB_007ad176;
  case 9:
LAB_007ad176:
    FUN_00a97e60(0x3f000000,0);
    (**(code **)(*param_1 + 0x314))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00a8caf0(0,1,0,0);
      FUN_00a8c760(0);
      return;
    }
  default:
    goto switchD_007acbe8_default;
  }
  FUN_00a97e60(0x40000000,0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 != 0) && (param_1[0x187] = param_1[0x187] + 1, param_1[0x250] != 0)) {
    FUN_00a8d790(&iStack_c);
    param_1[0x524] = iStack_c;
    param_1[0x525] = iStack_8;
    param_1[0x526] = iStack_4;
    param_1[0x527] = 0x3f800000;
    FUN_00a8caf0(4,2,0,0);
    FUN_00a8c760(0);
    return;
  }
switchD_007acbe8_default:
  FUN_00a8c760(0);
  return;
}

// 007AD210  FUN_007ad210  size=950  [callgraph]
void __fastcall FUN_007ad210(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x24,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x47e] == 0) {
      param_1[0x524] = param_1[0x548];
      param_1[0x525] = param_1[0x549];
      param_1[0x526] = param_1[0x54a];
      fVar3 = (float)param_1[0x54b];
    }
    else {
      iVar4 = param_1[0x2a1];
      fVar3 = *(float *)(iVar4 + 0x40) - (float)param_1[0x10];
      fVar1 = *(float *)(iVar4 + 0x48) - (float)param_1[0x12];
      fVar3 = fVar1 * fVar1 + fVar3 * fVar3;
      if (fVar3 < 225.0 == (fVar3 == 225.0)) {
        param_1[0x524] = param_1[0x3ac];
        param_1[0x525] = param_1[0x3ad];
        param_1[0x526] = param_1[0x3ae];
        fVar3 = (float)param_1[0x3af];
      }
      else {
        fStack_20 = *(float *)(iVar4 + 0x40) - (float)param_1[0x10];
        fStack_18 = *(float *)(iVar4 + 0x48) - (float)param_1[0x12];
        fStack_14 = *(float *)(iVar4 + 0x4c) - (float)param_1[0x13];
        fStack_1c = 0.0;
        fVar3 = fStack_20 * fStack_20 + fStack_18 * fStack_18;
        if (fVar3 < 0.0 == (fVar3 == 0.0)) {
          FUN_00ddf460(&fStack_20,&fStack_20);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_20 = 0.0;
          fStack_1c = 1.0;
          fStack_18 = 0.0;
        }
        iVar4 = FUN_00464930();
        if (iVar4 == 0) {
          fVar3 = -4.5;
        }
        else {
          fVar3 = 2.5;
        }
        fStack_20 = fStack_20 * fVar3;
        iVar4 = param_1[0x2a1];
        fStack_1c = fStack_1c * fVar3;
        fStack_18 = fStack_18 * fVar3;
        fStack_14 = fStack_14 * fVar3;
        fVar1 = *(float *)(iVar4 + 0x44);
        fVar2 = *(float *)(iVar4 + 0x48);
        fVar3 = fStack_14 + *(float *)(iVar4 + 0x4c);
        param_1[0x524] = (int)(*(float *)(iVar4 + 0x40) + fStack_20);
        param_1[0x525] = (int)(fVar1 + fStack_1c);
        param_1[0x526] = (int)(fVar2 + fStack_18);
      }
    }
    param_1[0x527] = (int)fVar3;
    FUN_007aa940(param_1 + 0x50c,param_1 + 0x10,param_1 + 0x524);
    param_1[0x249] = 0;
    param_1[0x3bf] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_0079ef30(param_1 + 0x50c,param_1 + 0x10,param_1[0x3bf]);
    param_1[0x3bf] = param_1[0x249];
    FUN_00a581b0(&fStack_20,0,param_1[0x249]);
    fVar3 = (float)param_1[0x244] * 0.06666667 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar3;
    if (2.0 <= fVar3) {
      FUN_00a8caf0(0x10,0,0,0);
      (**(code **)(*param_1 + 0x314))();
    }
    param_1[0x14] = (int)fStack_20;
    param_1[0x15] = (int)fStack_1c;
    param_1[0x16] = (int)fStack_18;
    FUN_00a8e880(param_1 + 0x524);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  default:
    return;
  }
}

// 007AD5E0  FUN_007ad5e0  size=155  [callgraph]
void FUN_007ad5e0(int param_1,float *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar4 = *(undefined4 **)(param_1 + 0x3c);
  pfVar1 = (float *)(puVar4 + *(int *)(param_1 + 0x44) * 3 + -3);
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  local_30 = *pfVar1 + (*param_2 - (float)puVar4[*(int *)(param_1 + 0x44) * 3 + -3]) * param_3;
  *pfVar1 = local_30;
  local_2c = pfVar1[1] + (fVar2 - pfVar1[1]) * param_3;
  pfVar1[1] = local_2c;
  local_28 = pfVar1[2] + param_3 * (fVar3 - pfVar1[2]);
  pfVar1[2] = local_28;
  local_20 = *puVar4;
  local_1c = puVar4[1];
  local_18 = puVar4[2];
  local_14 = 0x3f800000;
  local_24 = 0x3f800000;
  FUN_007aa450(param_1,&local_20,&local_30);
  return;
}

// 007AD680  FUN_007ad680  size=189  [callgraph]
void __fastcall FUN_007ad680(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined1 local_160 [348];
  
  FUN_004039a0(5,param_1,0);
  FUN_00a8c8b0(param_1[300],local_160);
  (**(code **)(*param_1 + 0x20))();
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b358e0;
      (**(code **)(*piVar3 + 4))(&DAT_01b358e0);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        iVar2 = FUN_00a81330();
        if (iVar2 != 0) {
          piVar3 = (int *)FUN_00a7c8a0();
          if (piVar3 != (int *)0x0) {
            puVar4 = &DAT_01b358e0;
            (**(code **)(*piVar3 + 4))(&DAT_01b358e0);
            iVar2 = FUN_00dd6d80(puVar4);
            pbVar1 = (byte *)((-(uint)(iVar2 != 0) & (uint)piVar3) + 0x155a);
            *pbVar1 = *pbVar1 | 0x80;
            return;
          }
        }
        bRam0000155a = bRam0000155a | 0x80;
      }
    }
  }
  return;
}

// 007AD740  FUN_007ad740  size=2170  [callgraph]
void __fastcall FUN_007ad740(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  int iVar5;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pcVar4 = *(code **)(*param_1 + 0x318);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  (*pcVar4)();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x31,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00c15aa0();
    FUN_00a8d280();
    param_1[0x524] = param_1[0x530];
    param_1[0x525] = param_1[0x531];
    param_1[0x526] = param_1[0x532];
    param_1[0x527] = param_1[0x533];
    param_1[0x528] = param_1[0x534];
    param_1[0x529] = param_1[0x535];
    param_1[0x52a] = param_1[0x536];
    param_1[0x52b] = param_1[0x537];
    FUN_007aa450(param_1 + 0x50c,param_1 + 0x10,param_1 + 0x524);
    FUN_00a8e880(param_1 + 0x524);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    (**(code **)(*param_1 + 0x358))(0x35,param_1 + 0x3f4);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x524);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    FUN_00a8c760(0);
    return;
  case 2:
    FUN_00aa4080(0x32,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x24a] = 0;
    param_1[0x524] = param_1[0x530];
    param_1[0x525] = param_1[0x531];
    param_1[0x526] = param_1[0x532];
    param_1[0x527] = param_1[0x533];
    param_1[0x528] = param_1[0x534];
    param_1[0x529] = param_1[0x535];
    param_1[0x52a] = param_1[0x536];
    param_1[0x52b] = param_1[0x537];
    FUN_007aa450(param_1 + 0x50c,param_1 + 0x10,param_1 + 0x524);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&fStack_20,0,param_1[0x249]);
    fVar1 = (float)param_1[0x249];
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x249] = 0x40000000;
      FUN_00a581b0(&fStack_20,0,0x40000000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = (int)fStack_20;
    param_1[0x15] = (int)fStack_1c;
    param_1[0x16] = (int)fStack_18;
    param_1[0x24a] = 0x3da3d70a;
    param_1[0x249] = (int)((float)param_1[0x244] * 0.08 + (float)param_1[0x249]);
    FUN_00a8e880(param_1 + 0x524);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e32b8c2,0);
    FUN_00a8c760(0);
    return;
  case 4:
    FUN_00aa4080(0x46,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    FUN_00eaa6e0(0x41200000,0);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00a8c760(0);
      return;
    }
    goto switchD_007ad775_default;
  case 6:
    FUN_00aa4080(0x4a,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    iVar5 = param_1[0x2a1];
    fStack_20 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
    fStack_18 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
    fStack_14 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
    fStack_1c = 0.0;
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
    fStack_20 = fStack_20 * -1.5;
    fStack_1c = fStack_1c * -1.5;
    fStack_18 = fStack_18 * -1.5;
    fStack_14 = fStack_14 * -1.5;
    fVar1 = *(float *)(iVar5 + 0x44);
    fVar2 = *(float *)(iVar5 + 0x48);
    fVar3 = *(float *)(iVar5 + 0x4c);
    param_1[0x524] = (int)(*(float *)(iVar5 + 0x40) + fStack_20);
    param_1[0x525] = (int)(fVar1 + fStack_1c);
    param_1[0x526] = (int)(fVar2 + fStack_18);
    param_1[0x527] = (int)(fStack_14 + fVar3);
    FUN_007aa450(param_1 + 0x50c,param_1 + 0x10,param_1 + 0x524);
    (**(code **)(*param_1 + 0x358))(0x35,param_1 + 0x3f4);
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x249] <= 1.8) {
      iVar5 = param_1[0x2a1];
      fStack_20 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
      fStack_18 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
      fStack_14 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
      fStack_1c = 0.0;
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
      fStack_20 = fStack_20 * -1.5;
      fStack_1c = fStack_1c * -1.5;
      fStack_18 = fStack_18 * -1.5;
      fStack_14 = fStack_14 * -1.5;
      fVar1 = *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar5 + 0x48);
      fVar3 = *(float *)(iVar5 + 0x4c);
      param_1[0x524] = (int)(*(float *)(iVar5 + 0x40) + fStack_20);
      param_1[0x525] = (int)(fVar1 + fStack_1c);
      param_1[0x526] = (int)(fVar2 + fStack_18);
      param_1[0x527] = (int)(fStack_14 + fVar3);
      FUN_007ad5e0(param_1 + 0x50c,param_1 + 0x524,0x3dcccccd);
    }
    FUN_00a581b0(&fStack_20,0,param_1[0x249]);
    fVar1 = (float)param_1[0x244] * 0.05 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
      param_1[0x249] = 0x40000000;
      FUN_00a581b0(&fStack_20,0,0x40000000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = (int)fStack_20;
    param_1[0x15] = (int)fStack_1c;
    param_1[0x16] = (int)fStack_18;
    FUN_00a8e880(param_1 + 0x524);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    FUN_00a8c760(0);
    return;
  case 8:
    FUN_00aa4080(0x4c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    FUN_00eaa6e0(0x41200000,0);
    if (param_1[0x1d9] != 0) {
      FUN_008e5ac0(2);
    }
    break;
  case 9:
    break;
  default:
    goto switchD_007ad775_default;
  }
  (**(code **)(*param_1 + 0x314))();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00a8c760(0);
    return;
  }
switchD_007ad775_default:
  FUN_00a8c760(0);
  return;
}

// 007ADFF0  FUN_007adff0  size=665  [callgraph]
undefined4 __fastcall FUN_007adff0(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    local_8 = 0;
    local_4 = 0;
    local_c = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar1 != 0) {
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
        **(undefined4 **)(param_1 + 0x370) = 0;
      }
      uVar3 = 3;
      *(undefined4 *)(param_1 + 0x878) = 0;
      FUN_00a92fb0(3);
      FUN_00e08640(uVar3);
      iVar1 = FUN_009f8d30();
      if (iVar1 == 0) {
        FUN_009fdde0();
      }
      else {
        iVar1 = FUN_00dd3500(0x3080,&DAT_01b7bd48);
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = lib::StaticArray<RigidBodyList::ConnectMap,256>::
                  StaticArray<RigidBodyList::ConnectMap,256>();
        }
        *(undefined4 *)(param_1 + 0x7b4) = uVar3;
        FUN_009fdd80(uVar3);
        FUN_00923ff0(param_1);
        fVar2 = (float10)FUN_00916de0();
        if ((float10)0 == fVar2) {
          FUN_00a805f0();
          return 1;
        }
        FUN_0091c3e0(6,1);
        fVar2 = (float10)FUN_00a13390();
        if (fVar2 < (float10)1.0 != (fVar2 == (float10)1.0)) {
          FUN_0091adf0(8);
          *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
          *(undefined4 *)(param_1 + 0x460) = 0x3f333333;
        }
        FUN_0091adf0(0x20);
        FUN_0091afb0(0x80);
        FUN_0091adf0(0x200000);
        FUN_0091c130(0);
        iVar1 = *(int *)(param_1 + 0x588);
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0x34) != 0) {
            FUN_0091c760(*(undefined4 *)(iVar1 + 0x38));
            iVar1 = *(int *)(param_1 + 0x588);
            *(undefined4 *)(param_1 + 0x87c) = *(undefined4 *)(iVar1 + 0x38);
          }
          if (iVar1 != 0) {
            *(undefined4 *)(param_1 + 0x890) = *(undefined4 *)(iVar1 + 0x50);
            *(undefined4 *)(param_1 + 0x894) = *(undefined4 *)(iVar1 + 0x54);
            *(undefined4 *)(param_1 + 0x898) = *(undefined4 *)(iVar1 + 0x58);
            *(undefined4 *)(param_1 + 0x89c) = *(undefined4 *)(iVar1 + 0x5c);
          }
        }
        iVar1 = *(int *)(param_1 + 0x588);
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x98) != 0)) {
          FUN_0091c550(0x21,*(undefined4 *)(iVar1 + 0x9c));
          FUN_0091c550(0x22,*(undefined4 *)(*(int *)(param_1 + 0x588) + 0x9c));
        }
        iVar1 = *(int *)(param_1 + 0x588);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x694) = *(undefined4 *)(iVar1 + 0xc4);
          *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)(iVar1 + 200);
          *(undefined4 *)(param_1 + 0x69c) = *(undefined4 *)(iVar1 + 0xcc);
          iVar1 = *(int *)(param_1 + 0x588);
          *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(iVar1 + 0xd0);
          *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(iVar1 + 0xd4);
          *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(iVar1 + 0xd8);
          *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(iVar1 + 0xdc);
          *(undefined1 *)(param_1 + 0x6b0) = *(undefined1 *)(*(int *)(param_1 + 0x588) + 0xe0);
          return 1;
        }
      }
      return 1;
    }
  }
  return 0;
}

// 007AE290  FUN_007ae290  size=433  [callgraph]
undefined4 __fastcall FUN_007ae290(int *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined *puVar8;
  int local_260 [35];
  uint uStack_1d4;
  uint uStack_1d0;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  if ((param_1[0x230] != 0) && (param_1[0x139] == 0)) {
    iVar5 = param_1[0x19f];
    iVar7 = param_1[0x1a1] * 0x150 + iVar5;
    FUN_00445db0();
    FUN_004105d0();
    iVar3 = -1;
    bVar2 = false;
    if (iVar5 != iVar7) {
      do {
        iVar1 = *(int *)(iVar5 + 4);
        if (iVar3 <= iVar1) {
          FUN_00448f50(iVar5);
          bVar2 = true;
          iVar3 = iVar1;
        }
        iVar5 = iVar5 + 0x150;
      } while (iVar5 != iVar7);
      if (bVar2) {
        FUN_0043e160(local_260);
        iVar5 = FUN_00a81330();
        if ((iVar5 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
          puVar8 = &DAT_01b358e0;
          (**(code **)(*piVar4 + 4))(&DAT_01b358e0);
          FUN_00dd6d80(puVar8);
        }
        iVar5 = FUN_00ac8350();
        if (((uStack_1d4 & 0x400) != 0) ||
           ((uStack_1d0 & 0x20000) != 0 ||
            ((uStack_1d0 & 0x40000) != 0 || ((uStack_1d4 & 0x200) != 0 || iVar5 != 0)))) {
          if (((local_260[0] != 0) &&
              (((local_260[0] != 1 && (local_260[0] != 2)) && (local_260[0] != 0x1b0)))) &&
             (local_260[0] != 0x147)) {
            uVar6 = 0;
            iVar5 = FUN_00a81330();
            if (iVar5 != 0) {
              uVar6 = FUN_00a7c8a0();
            }
            (**(code **)(*param_1 + 0x198))(uVar6,local_260,1);
            param_1[0x139] = 1;
            FUN_007ad680();
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}

// 007AE450  FUN_007ae450  size=368  [callgraph]
void __fastcall FUN_007ae450(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  
  switch(param_1[0x186]) {
  case 0:
    FUN_0079d280();
    return;
  case 1:
    FUN_0079d620();
    return;
  case 2:
    FUN_0079d840();
    return;
  case 3:
    FUN_007ac830();
    return;
  case 4:
    FUN_007acbc0();
    return;
  case 5:
    FUN_00798da0();
    return;
  case 6:
    FUN_007a4c70();
    return;
  case 7:
    FUN_00798e40();
    return;
  case 8:
    FUN_007a5290();
    return;
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
    FUN_00798f80();
    return;
  case 10:
  case 0xb:
    FUN_0079dd20();
    return;
  case 0xf:
    FUN_007ad210();
    return;
  case 0x10:
    FUN_007990f0();
    return;
  case 0x11:
    FUN_00799170();
    return;
  case 0x12:
  case 0x13:
  case 0x14:
    FUN_007a63e0();
    return;
  case 0x15:
    FUN_0079ba00();
    return;
  case 0x16:
    FUN_007a36f0();
    return;
  case 0x17:
  case 0x18:
    FUN_0079bac0();
    return;
  case 0x19:
    switch(param_1[0x187]) {
    case 0:
      FUN_00aa4080(0x66,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00c27260(0x40200000);
      FUN_00a8d280();
      param_1[0x507] = 0;
      sVar3 = FUN_00dde2d0(1,3);
      param_1[0x539] = (int)((float)(int)sVar3 * 60.0);
    case 1:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar4 = FUN_00a94ce0(0);
      if (iVar4 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      FUN_00a8c760(10);
      if (param_1[0x2a1] != 0) {
        FUN_00a8e880(param_1[0x2a1] + 0x40);
        (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
      }
      break;
    case 2:
      FUN_00aa4080(0x67,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00aa4080(0x69,2,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42700000;
      param_1[0x249] = 0x40c00000;
    case 3:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      fVar2 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar2 - (float)param_1[0x244] < 0.0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      if (fVar1 - (float)param_1[0x244] < 0.0) {
        FUN_00aa4080(0x69,2,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
        FUN_007a8aa0(0,0,0x3f666666);
        param_1[0x249] = 0x41500000;
      }
      (**(code **)(*param_1 + 0x308))(0x3d75c28f,0x393702d3,0x3c8efa35,0);
      break;
    case 4:
      FUN_00aa4080(0x68,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    case 5:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      fVar2 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
      if (fVar2 - (float)param_1[0x244] < 0.0) {
        (**(code **)(*param_1 + 0x34c))();
        sVar3 = FUN_00dde2d0(1,3);
        param_1[0x539] = (int)((float)(int)sVar3 * 60.0);
      }
    }
    iVar4 = FUN_00a8c760(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    }
    return;
  case 0x1a:
    FUN_0079bc10();
    return;
  case 0x1b:
  case 0x1c:
    FUN_0079df30();
    return;
  case 0x1d:
    FUN_0079e1c0();
    return;
  case 0x1e:
    FUN_0079e3d0();
    return;
  case 0x1f:
    FUN_0079e700();
    return;
  case 0x20:
    FUN_0079e9c0();
    return;
  case 0x21:
  case 0x22:
  case 0x23:
    FUN_0079eca0();
    return;
  case 0x24:
    FUN_007ad740();
    return;
  case 0x25:
    FUN_0079f0f0();
    return;
  case 0x26:
    break;
  case 0x27:
    FUN_007a0ac0();
    return;
  case 0x28:
    FUN_007a0e10();
    return;
  case 0x29:
    FUN_0079ae40();
    return;
  default:
    return;
  case 0x2b:
    FUN_007a0bf0();
    return;
  case 0x2c:
    FUN_007a0f80();
    return;
  case 0x2d:
    FUN_007a1340();
    return;
  case 0x2e:
    FUN_007a6b70();
    return;
  case 0x2f:
    FUN_00799230();
    return;
  case 0x30:
    FUN_007992e0();
    return;
  case 0x31:
    FUN_00799380();
    return;
  case 0x32:
    FUN_00799410();
    return;
  case 0x33:
    FUN_007a6fa0();
    return;
  case 0x34:
    FUN_007a7340();
    return;
  case 0x35:
    FUN_007a76e0();
    return;
  case 0x36:
    FUN_007994b0();
    return;
  case 0x37:
    FUN_00799590();
    return;
  case 0x38:
    FUN_00799650();
    return;
  case 0x39:
    FUN_00799740();
    return;
  case 0x3a:
    FUN_007997e0();
    return;
  case 0x3b:
    FUN_007a7ae0();
    return;
  case 0x3c:
    FUN_007a7c70();
    return;
  case 0x3d:
    FUN_00799880();
    return;
  case 0x3e:
    FUN_00799a30();
    return;
  case 0x3f:
    FUN_00799cb0();
    return;
  case 0x40:
    FUN_00799e50();
    return;
  case 0x41:
    FUN_0079a020();
    return;
  case 0x42:
  case 0x43:
    FUN_0079f4a0();
    return;
  case 0x44:
  case 0x45:
  case 0x46:
    FUN_0079f630();
    return;
  case 0x47:
    FUN_007a3810();
    return;
  case 0x48:
  case 0x49:
    FUN_0079bd50();
    return;
  case 0x4a:
  case 0x4b:
    FUN_0079a190();
    return;
  case 0x4c:
    FUN_007a80c0();
    return;
  case 0x4d:
    FUN_007a8280();
    return;
  case 0x4e:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
    FUN_007a8390();
    return;
  case 0x4f:
    FUN_0079f7c0();
    return;
  case 0x50:
    FUN_0079f940();
    return;
  case 0x51:
    FUN_0079fb00();
    return;
  case 0x5c:
    FUN_007a8720();
    return;
  case 0x5d:
    FUN_007a38d0();
    return;
  case 0x5e:
    FUN_007a8d80();
    return;
  }
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x59,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00c15aa0();
    FUN_00a8d280();
    param_1[0x507] = 0;
    sVar3 = FUN_00dde2d0(1,3);
    param_1[0x539] = (int)((float)(int)sVar3 * 60.0);
switchD_007a9d7c_caseD_1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar4 = FUN_00a8c760(10);
    if (iVar4 != 0) {
      FUN_007a8aa0(0,0,0x3f800000);
    }
    iVar4 = FUN_00a8c760(0xf);
    if (iVar4 != 0) {
      FUN_00a8caf0(0xb,0,0,0);
      sVar3 = FUN_00dde2d0(0,3);
      if (sVar3 == 0) {
        FUN_00a8caf0(10,0,0,0);
      }
      FUN_0079aa90();
      sVar3 = FUN_00dde2d0(1,3);
LAB_007a9ec1:
      param_1[0x539] = (int)((float)(int)sVar3 * 60.0 + 180.0);
      if (((param_1[0x47e] != 0) && ((float)param_1[0x2a3] <= 9.0)) &&
         ((float)param_1[0x2a8] < 1.5707964)) {
        FUN_007a02f0();
        sVar3 = FUN_00dde2d0(0,1);
        if (sVar3 != 0) {
          FUN_0079a870();
        }
      }
    }
switchD_007a9d7c_default:
    iVar4 = FUN_00a8c760(0);
    if (iVar4 != 0) {
      FUN_00a8e880(param_1 + 0x54c);
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    }
    return;
  case 1:
    goto switchD_007a9d7c_caseD_1;
  case 2:
    FUN_00aa4080(0x5a,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41f00000;
    FUN_007a8aa0(0xbd0efa35,0,0x415ccccd);
    FUN_007a8aa0(0xbd8efa35,0x3e0efa35,0x41400000);
    FUN_007a8aa0(0xbf060a92,0x3ec49809,0x40999999);
    FUN_007a8aa0(0xbdb2b8c2,0xbe20d97c,0x40f99999);
    FUN_007a8aa0(0x3efa35dd,0xbe860a92,0x41900000);
    FUN_007a8aa0(0x3e860a92,0xbf0efa35,0x40c00000);
    FUN_007a8aa0(0x3f32b8c2,0x3f20d97c,0x41c00000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (0.0 <= fVar2 - (float)param_1[0x244]) goto switchD_007a9d7c_default;
    (**(code **)(*param_1 + 0x34c))();
    FUN_00a8caf0(0xb,0,0,0);
    sVar3 = FUN_00dde2d0(0,3);
    if (sVar3 == 0) {
      FUN_00a8caf0(10,0,0,0);
    }
    FUN_0079aa90();
    sVar3 = FUN_00dde2d0(1,3);
    goto LAB_007a9ec1;
  default:
    goto switchD_007a9d7c_default;
  }
}

// 007AE780  Emc070::vf4C  size=609  [class]
void __fastcall Emc070::vf4C(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_20 [28];
  
  FUN_00a92fb0();
  fVar5 = (float10)FUN_00e049b0();
  *(float *)(param_1 + 0x910) = (float)fVar5;
  uVar6 = *(undefined4 *)(param_1 + 0x4f0);
  uVar8 = 0x40800000;
  uVar7 = 0x3f860a92;
  *(undefined4 *)(param_1 + 0x11e0) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x94);
  uVar1 = FUN_00ac45b0(uVar6,uVar2,0x3f860a92,0x40800000);
  uVar2 = lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>_4(uVar1,uVar6,uVar2,uVar7,uVar8);
  *(undefined4 *)(param_1 + 0x11e0) = uVar2;
  *(undefined4 *)(param_1 + 0x11e4) = 0;
  if (*(int *)(param_1 + 0xa84) != 0) {
    fVar5 = (float10)FUN_00ddba30(*(float *)(*(int *)(param_1 + 0xa84) + 0x94) -
                                  *(float *)(param_1 + 0x94));
    if (((float10)2.3561945 < fVar5) || (fVar5 < (float10)-2.3561945)) {
      *(undefined4 *)(param_1 + 0x11e4) = 1;
    }
    iVar3 = *(int *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0x13f0) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(param_1 + 0x13f4) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(param_1 + 0x13f8) = *(undefined4 *)(iVar3 + 0x48);
    *(undefined4 *)(param_1 + 0x13fc) = *(undefined4 *)(iVar3 + 0x4c);
  }
  *(undefined4 *)(param_1 + 0x15b4) = 0;
  iVar3 = FUN_00c15ab0();
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x15b4) = 1;
  }
  BehaviorEmBase::vf4C();
  *(undefined4 *)(param_1 + 0x15bc) = 0;
  if (*(int *)(param_1 + 0xa18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
  }
  FUN_007a9a10();
  FUN_007a0150();
  if (*(int *)(param_1 + 0xa18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
  }
  FUN_007ae450();
  *(float *)(param_1 + 0x50) =
       *(float *)(param_1 + 0x13e0) * *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x58) =
       *(float *)(param_1 + 0x13e8) * *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x58);
  fVar5 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x13e0) = (float)((float10)*(float *)(param_1 + 0x13e0) * fVar5);
  *(float *)(param_1 + 0x13e4) = (float)((float10)*(float *)(param_1 + 0x13e4) * fVar5);
  *(float *)(param_1 + 0x13e8) = (float)((float10)*(float *)(param_1 + 0x13e8) * fVar5);
  *(float *)(param_1 + 0x13ec) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x13ec));
  if ((DAT_01bea060 & 0x2000000) == 0) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      FUN_00a8d230(local_20);
    }
    iVar3 = FUN_00a8c760(0x13);
    bVar4 = iVar3 == 0;
    FUN_00a84720();
    FUN_00a84720();
    switchD_0080dbae::default();
    FUN_00a84780(local_20,0,bVar4,0,0,0x3f800000);
    switchD_0080dbae::default();
    FUN_00a84780(local_20,bVar4,bVar4,0,0,0x3f800000);
    return;
  }
  FUN_00a84720();
  FUN_00a84720();
  return;
}

// 00AB28A0  Emc070::vf04  size=6  [class]
undefined * Emc070::vf04(void)

{
  return &DAT_01b358e0;
}

// 00AB28B0  Emc070::vf140  size=7  [class]
float10 Emc070::vf140(void)

{
  return (float10)6.0;
}

// 00AB28C0  Emc070::vf144  size=7  [class]
float10 Emc070::vf144(void)

{
  return (float10)6.1;
}

// 00AB28D0  Emc070::vf17C  size=3  [class]
undefined4 Emc070::vf17C(void)

{
  return 0;
}

// 00AB28E0  Emc070::vf180  size=3  [class]
undefined4 Emc070::vf180(void)

{
  return 0;
}

// 00AB28F0  Emc070::vf20C  size=7  [class]
float10 Emc070::vf20C(void)

{
  return (float10)1.5;
}

// 00AB2900  FUN_00ab2900  size=143  [callgraph]
void FUN_00ab2900(void)

{
  cXml::cXml_7();
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00AB9E50  Emc070::vf00  size=30  [class]
undefined4 __thiscall Emc070::vf00(undefined4 param_1,byte param_2)

{
  FUN_00ab2900();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


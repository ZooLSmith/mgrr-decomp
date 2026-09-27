// src/enemy/em0070/Em0070.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00464910..00AB6E90, 226 functions

#include "types.h"

// 00464910  FUN_00464910  size=24  [callgraph]
undefined4 __fastcall FUN_00464910(int param_1)

{
  if ((*(int *)(param_1 + 0xdb0) != 1) && (*(int *)(param_1 + 0xdb0) != 0)) {
    return 0;
  }
  return 1;
}

// 00464930  FUN_00464930  size=25  [callgraph]
undefined4 __fastcall FUN_00464930(int param_1)

{
  if ((*(int *)(param_1 + 0xdb0) != 2) && (*(int *)(param_1 + 0xdb0) != -1)) {
    return 0;
  }
  return 1;
}

// 00464AB0  FUN_00464ab0  size=23  [callgraph]
undefined4 __fastcall FUN_00464ab0(int param_1)

{
  if (((*(byte *)(param_1 + 0x148a) & 0x10) != 0) && ((*(byte *)(param_1 + 0x148a) & 8) != 0)) {
    return 1;
  }
  return 0;
}

// 00464AF0  FUN_00464af0  size=18  [callgraph]
undefined4 __fastcall FUN_00464af0(int param_1)

{
  if ((*(byte *)(param_1 + 0x148a) & 6) == 0) {
    return 0;
  }
  return 1;
}

// 00464B10  FUN_00464b10  size=55  [callgraph]
void __fastcall FUN_00464b10(int param_1)

{
  short sVar1;
  
  sVar1 = FUN_00dde2d0(0,*(undefined2 *)(param_1 + 0x14b8));
  *(int *)(param_1 + 0x1330) =
       (int)sVar1 + *(int *)(param_1 + 0x14c0) * *(int *)(param_1 + 0x1334) +
       *(int *)(param_1 + 0x14b4);
  return;
}

// 00464B50  FUN_00464b50  size=27  [callgraph]
void __fastcall FUN_00464b50(int param_1)

{
  *(int *)(param_1 + 0x1334) = *(int *)(param_1 + 0x1334) + 1;
  if (*(int *)(param_1 + 0x14bc) <= *(int *)(param_1 + 0x1334)) {
    *(int *)(param_1 + 0x1334) = *(int *)(param_1 + 0x14bc);
  }
  return;
}

// 00464B90  FUN_00464b90  size=28  [callgraph]
void FUN_00464b90(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 00464C20  Em0070::vf108  size=13  [class]
void __fastcall Em0070::vf108(int *param_1)

{
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00464C40  Em0070::vf30  size=139  [class]
void __fastcall Em0070::vf30(int param_1)

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
    if (*(int *)(param_1 + 0xdc4) != 0) {
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

// 00464CD0  Em0070::vf184  size=6  [class]
undefined4 Em0070::vf184(void)

{
  return 0xffffffff;
}

// 00464CE0  Em0070::vf188  size=93  [class]
void __thiscall Em0070::vf188(int *param_1,int param_2,int param_3)

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

// 00464D40  FUN_00464d40  size=45  [between]
void __fastcall FUN_00464d40(int param_1)

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

// 00464D70  FUN_00464d70  size=45  [between]
void __fastcall FUN_00464d70(int param_1)

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

// 00464DA0  FUN_00464da0  size=45  [between]
void __fastcall FUN_00464da0(int param_1)

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

// 00464DD0  FUN_00464dd0  size=129  [between]
void __fastcall FUN_00464dd0(int *param_1)

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

// 00464E70  FUN_00464e70  size=316  [between]
void __fastcall FUN_00464e70(int *param_1)

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
    FUN_00940450(param_1[0x20f]);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x44a] == 0)) {
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

// 00464FC0  FUN_00464fc0  size=310  [between]
void __fastcall FUN_00464fc0(int *param_1)

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
    param_1[0x248] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    FUN_00940450(param_1[0x20f]);
  }
  else if (param_1[0x187] != 1) goto LAB_0046507d;
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0046507d:
  if (param_1[0x186] == 0xc) {
    FUN_00a8e880(param_1 + 0x518);
  }
  if (param_1[0x186] == 0xd) {
    FUN_00a8e880(param_1 + 0x518);
  }
  if (param_1[0x186] == 0xe) {
    FUN_00a8e880(param_1 + 0x518);
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  return;
}

// 00465110  FUN_00465110  size=44  [between]
void __fastcall FUN_00465110(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x11,0,0,0);
  }
  return;
}

// 00465140  FUN_00465140  size=105  [between]
void __fastcall FUN_00465140(int *param_1)

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

// 004651C0  FUN_004651c0  size=132  [between]
void __fastcall FUN_004651c0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00465242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00465280  FUN_00465280  size=163  [between]
void __fastcall FUN_00465280(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00465321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00465330  FUN_00465330  size=160  [between]
void __fastcall FUN_00465330(int *param_1)

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

// 004653D0  FUN_004653d0  size=132  [between]
void __fastcall FUN_004653d0(int *param_1)

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

// 00465460  FUN_00465460  size=156  [between]
void __fastcall FUN_00465460(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x004654fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00465500  FUN_00465500  size=212  [between]
void __fastcall FUN_00465500(int *param_1)

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

// 004655E0  FUN_004655e0  size=182  [between]
void __fastcall FUN_004655e0(int param_1)

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

// 004656A0  FUN_004656a0  size=171  [between]
void __fastcall FUN_004656a0(int *param_1)

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

// 00465750  FUN_00465750  size=58  [between]
void __fastcall FUN_00465750(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x3a,0,0,0);
  }
  return;
}

// 00465790  FUN_00465790  size=147  [between]
void __fastcall FUN_00465790(int *param_1)

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

// 00465830  FUN_00465830  size=151  [between]
void __fastcall FUN_00465830(int param_1)

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

// 004658D0  FUN_004658d0  size=442  [between]
void __fastcall FUN_004658d0(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  float10 fVar5;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  param_1[0x53b] = 1;
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
    FUN_00940450(param_1[0x20f]);
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
    if (param_1[0x372] == 0xc) {
      uVar2 = param_1[0x373];
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

// 00465A90  FUN_00465a90  size=615  [between]
void __fastcall FUN_00465a90(int *param_1)

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
    FUN_00464b10();
    param_1[0x4cd] = param_1[0x4cd] + 1;
    if (param_1[0x52f] <= param_1[0x4cd]) {
      param_1[0x4cd] = param_1[0x52f];
    }
    param_1[0x532] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x50c] = 0x40800000;
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
    FUN_00464b10();
    param_1[0x532] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x50c] = 0x40800000;
    *(undefined2 *)(param_1 + 0x209) = 3;
    param_1[0x20a] = 0x78;
    return;
  case 4:
    FUN_00aa4080(0x9d,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00464b10();
    param_1[0x532] = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_00464b10();
      param_1[0x532] = 0;
      return;
    }
  default:
    return;
  }
}

// 00465D10  FUN_00465d10  size=395  [between]
void __fastcall FUN_00465d10(int *param_1)

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
    FUN_00464b10();
    param_1[0x4cd] = param_1[0x4cd] + 1;
    if (param_1[0x52f] <= param_1[0x4cd]) {
      param_1[0x4cd] = param_1[0x52f];
    }
    param_1[0x248] = 0x43700000;
    param_1[0x532] = 0;
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
    FUN_00464b10();
    param_1[0x532] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_00464b10();
      param_1[0x532] = 0;
      return;
    }
  }
  return;
}

// 00465EB0  FUN_00465eb0  size=437  [between]
void __fastcall FUN_00465eb0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x8f,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00464b10();
    param_1[0x4cd] = param_1[0x4cd] + 1;
    if (param_1[0x52f] <= param_1[0x4cd]) {
      param_1[0x4cd] = param_1[0x52f];
    }
    param_1[0x248] = 0x44610000;
    param_1[0x532] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
    goto LAB_00465f56;
  case 1:
LAB_00465f56:
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
    FUN_00464b10();
    param_1[0x532] = 0;
    break;
  case 3:
    break;
  default:
    goto switchD_00465ecb_default;
  }
  (**(code **)(*param_1 + 0x314))();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00464b10();
    param_1[0x532] = 0;
    return;
  }
switchD_00465ecb_default:
  return;
}

// 00466080  FUN_00466080  size=357  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00466080(int *param_1)

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
    iVar3 = param_1[0x4cd];
    sVar4 = FUN_00dde2d0(0,(short)param_1[0x52e]);
    iVar1 = iVar3 + 1;
    param_1[0x4cc] = (int)sVar4 + param_1[0x530] * iVar3 + param_1[0x52d];
    param_1[0x4cd] = iVar1;
    if (param_1[0x52f] <= iVar1) {
      param_1[0x4cd] = param_1[0x52f];
    }
    param_1[0x532] = 0;
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
    sVar4 = FUN_00dde2d0(0,(short)param_1[0x52e]);
    param_1[0x532] = 0;
    param_1[0x4cc] = (int)sVar4 + param_1[0x530] * param_1[0x4cd] + param_1[0x52d];
  }
  return;
}

// 004661F0  FUN_004661f0  size=191  [between]
void __fastcall FUN_004661f0(int param_1)

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

// 00466320  Em0070::vf34C  size=42  [class]
void __fastcall Em0070::vf34C(int param_1)

{
  FUN_00a8caf0(7,0,0,0);
  if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00a8caf0(0x15,0,0,0);
  }
  return;
}

// 00466350  Em0070::vf1A4  size=207  [class]
void __thiscall Em0070::vf1A4(int param_1,int *param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_00a81330();
  if ((param_3 & 1) != 0) {
    *(int *)(param_1 + 0x1354) = *(int *)(param_1 + 0x1354) + 1;
    *(undefined4 *)(param_1 + 0x1348) = 1;
    *(undefined4 *)(param_1 + 0x134c) = 1;
  }
  if ((param_3 & 6) != 0) {
    *(undefined4 *)(param_1 + 0x1350) = 1;
    iVar1 = *param_2;
    if ((((((iVar1 == 0xf7) || (iVar1 == 0xf8)) || (iVar1 == 0xf9)) ||
         ((iVar1 == 0xfa || (iVar1 == 0x100)))) || (iVar1 == 0x102)) && ((param_3 & 4) != 0)) {
      FUN_00a7c950();
      if (iVar2 != 0) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
      }
      if (((*(byte *)(param_1 + 0x148a) & 0x10) == 0) || ((*(byte *)(param_1 + 0x148a) & 8) == 0)) {
        FUN_00a8caf0(0x33,0,0,0);
        return;
      }
      FUN_00a8caf0(0x2e,0,0,0);
    }
  }
  return;
}

// 00466420  Em0070::vf360  size=5  [class]
void __fastcall Em0070::vf360(int param_1)

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

// 00466430  Em0070::vf2C  size=63  [class]
void Em0070::vf2C(void)

{
  FUN_00eaa6e0(0x41100000,0);
  FUN_00eaa6e0(0x41200000,0);
  return;
}

// 004664B0  FUN_004664b0  size=35  [between]
bool __fastcall FUN_004664b0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 004664E0  FUN_004664e0  size=124  [between]
void __thiscall FUN_004664e0(int *param_1,int param_2)

{
  if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
    (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
  }
  param_1[0x535] = 0x3f800000;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(0x193,0);
  }
  *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 4;
  FUN_00ac8dd0("_R_leg",1);
  FUN_00ac9420("_EFD03");
  return;
}

// 00466560  FUN_00466560  size=124  [between]
void __thiscall FUN_00466560(int *param_1,int param_2)

{
  if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
    (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
  }
  param_1[0x535] = 0x3f800000;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(0x194,0);
  }
  *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 2;
  FUN_00ac8dd0("_L_leg",1);
  FUN_00ac9420("_EFD04");
  return;
}

// 004665E0  FUN_004665e0  size=124  [between]
void __thiscall FUN_004665e0(int *param_1,int param_2)

{
  if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
    (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
  }
  param_1[0x535] = 0x3f800000;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(0x191,0);
  }
  *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 0x10;
  FUN_00ac8dd0("_R_arm",1);
  FUN_00ac9420("_EFD01");
  return;
}

// 00466660  FUN_00466660  size=124  [between]
void __thiscall FUN_00466660(int *param_1,int param_2)

{
  if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
    (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
  }
  param_1[0x535] = 0x3f800000;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(0x192,0);
  }
  *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 8;
  FUN_00ac8dd0("_L_arm",1);
  FUN_00ac9420("_EFD02");
  return;
}

// 004666E0  FUN_004666e0  size=35  [between]
bool __fastcall FUN_004666e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 00466710  FUN_00466710  size=35  [between]
bool __fastcall FUN_00466710(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 00466740  FUN_00466740  size=35  [between]
bool __fastcall FUN_00466740(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 00466770  FUN_00466770  size=35  [between]
bool __fastcall FUN_00466770(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 004667A0  FUN_004667a0  size=35  [between]
bool __fastcall FUN_004667a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 004667D0  FUN_004667d0  size=35  [between]
bool __fastcall FUN_004667d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 004668C0  FUN_004668c0  size=83  [between]
bool __fastcall FUN_004668c0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_00ac4d60(1);
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x14e4) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x148a) & 0x10;
    if ((bVar1 == 0) || ((*(byte *)(param_1 + 0x148a) & 8) == 0)) {
      if (bVar1 != 0) {
        iVar2 = FUN_0046d370();
        return iVar2 != 0;
      }
      FUN_00a8caf0(0x28,0,0,0);
      return true;
    }
  }
  return false;
}

// 00466920  FUN_00466920  size=63  [between]
undefined4 __fastcall FUN_00466920(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4d60(1);
  if ((((iVar1 == 0) && (*(int *)(param_1 + 0x14e4) != 0)) &&
      ((*(byte *)(param_1 + 0x148a) & 0x10) == 0)) && ((*(byte *)(param_1 + 0x148a) & 8) == 0)) {
    FUN_00a8caf0(0x29,0,0,0);
    return 1;
  }
  return 0;
}

// 00466960  FUN_00466960  size=40  [between]
undefined4 __fastcall FUN_00466960(int param_1)

{
  if ((*(int *)(param_1 + 0x14e4) == 0) && ((*(byte *)(param_1 + 0x148a) & 8) == 0)) {
    FUN_00a8caf0(0x22,0,0,0);
    return 1;
  }
  return 0;
}

// 00466990  FUN_00466990  size=40  [between]
undefined4 __fastcall FUN_00466990(int param_1)

{
  if ((*(int *)(param_1 + 0x14e4) == 0) && ((*(byte *)(param_1 + 0x148a) & 0x10) == 0)) {
    FUN_00a8caf0(0x21,0,0,0);
    return 1;
  }
  return 0;
}

// 004669C0  FUN_004669c0  size=36  [between]
undefined4 __fastcall FUN_004669c0(int param_1)

{
  if (((*(byte *)(param_1 + 0x148a) & 0x10) != 0) && ((*(byte *)(param_1 + 0x148a) & 8) != 0)) {
    return 0;
  }
  FUN_00a8caf0(8,0,0,0);
  return 1;
}

// 004669F0  FUN_004669f0  size=36  [between]
undefined4 __fastcall FUN_004669f0(int param_1)

{
  if (((*(byte *)(param_1 + 0x148a) & 0x10) != 0) && ((*(byte *)(param_1 + 0x148a) & 8) != 0)) {
    return 0;
  }
  FUN_00a8caf0(0x24,0,0,0);
  return 1;
}

// 00466A20  FUN_00466a20  size=115  [between]
/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_00466a20(int param_1,int param_2)

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

// 00466AA0  Em0070::vf110  size=64  [class]
void __thiscall Em0070::vf110(int param_1,undefined4 param_2)

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
  *(undefined4 *)(param_1 + 0x1500) = param_2;
  return;
}

// 00466AE0  FUN_00466ae0  size=57  [callgraph]
void __fastcall FUN_00466ae0(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  
  uVar1 = FUN_00fdbc60();
  sVar2 = FUN_00dde2d0(0,uVar1);
  *(float *)(param_1 + 0xe48) = (float)(int)sVar2 + *(float *)(param_1 + 0x14a4);
  return;
}

// 00466B20  FUN_00466b20  size=196  [callgraph]
undefined4 __fastcall FUN_00466b20(int param_1)

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

// 00466D00  FUN_00466d00  size=136  [callgraph]
void __thiscall FUN_00466d00(int param_1,int param_2)

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

// 00466DA0  FUN_00466da0  size=50  [callgraph]
void __fastcall FUN_00466da0(int param_1)

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

// 00467FD0  Em0070::vf260  size=10  [class]
void __fastcall Em0070::vf260(int param_1)

{
  *(byte *)(param_1 + 0x148a) = *(byte *)(param_1 + 0x148a) | 0x20;
  return;
}

// 00467FE0  Em0070::vf1C0  size=5  [class]
void __thiscall Em0070::vf1C0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_retaddr;
  undefined4 uVar7;
  undefined *puVar8;
  
  piVar5 = param_2;
  uVar6 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    param_2 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar5);
  }
  piVar5 = param_3;
  if (param_3 != (int *)0x0) {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)piVar5;
  }
  uVar3 = FUN_009f8b40();
  FUN_009f8ae0(uVar3);
  if (uVar6 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c940(uVar3);
    FUN_00a7c960(&param_2);
    uVar3 = FUN_009f8b40();
    FUN_009f8ae0(uVar3);
  }
  uVar1 = param_1[300];
  if (uVar1 < 0x20141) {
    if (uVar1 != 0x20140) {
      switch(uVar1) {
      case 0x20010:
      case 0x20050:
        goto switchD_00ace80d_caseD_20010;
      case 0x20030:
      case 0x20033:
      case 0x20035:
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(0x2003f,0x20030);
        break;
      case 0x20071:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20070);
        break;
      case 0x20081:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20080);
      }
      goto switchD_00ace80d_caseD_20011;
    }
switchD_00ace80d_caseD_20010:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x20012,0x20010);
    FUN_00a92f90();
    iVar2 = 0x2014f;
  }
  else {
    switch(uVar1) {
    case 0x20142:
    case 0x20144:
    case 0x20160:
      goto switchD_00ace80d_caseD_20010;
    default:
      goto switchD_00ace80d_caseD_20011;
    case 0x20150:
    case 0x20152:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      FUN_00a92f90();
      iVar2 = 0x2015f;
      break;
    case 0x20170:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      iVar2 = param_1[300];
      FUN_00a92f90();
    }
  }
  FUN_00e27330(iVar2,0x20010);
switchD_00ace80d_caseD_20011:
  iVar2 = 0;
  iVar4 = FUN_00ac89d0();
  if (iVar4 == 0) {
    iVar4 = param_1[0xcc];
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x330);
  }
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0xcc);
  }
  param_1[0x295] = iVar2;
  if ((unaff_retaddr != 0) && (piVar5 = (int *)FUN_00acdea0(), piVar5 != (int *)0x0)) {
    puVar8 = &DAT_01be9c78;
    (**(code **)(*piVar5 + 4))(&DAT_01be9c78);
    iVar2 = FUN_00dd6d80(puVar8);
    if (iVar2 != 0) {
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
      iVar2 = *param_1;
      param_1[0x139] = piVar5[0x139];
      uVar3 = (**(code **)(*piVar5 + 0x1d8))();
      (**(code **)(iVar2 + 0x1d4))(uVar3);
      if ((piVar5[0x351] & 0x80000000U) != 0) {
        uVar7 = 0;
        uVar3 = FUN_00a82d50(0);
        FUN_00a88b50(uVar3,uVar7);
      }
      FUN_0040ac60(piVar5 + 0x2ac);
      *(short *)(param_1 + 0x36b) = (short)piVar5[0x36b];
      param_1[0x36c] = piVar5[0x36c];
      *(char *)(param_1 + 0x36d) = (char)piVar5[0x36d];
      param_1[0x28c] = piVar5[0x28c];
      param_1[0x28d] = piVar5[0x28d];
      param_1[0x28e] = piVar5[0x28e];
      param_1[0x28f] = piVar5[0x28f];
      param_1[0x290] = piVar5[0x290];
      *(char *)(param_1 + 0x291) = (char)piVar5[0x291];
      param_1[0x292] = piVar5[0x292];
      param_1[0x12a] = piVar5[0x12a];
      param_1[0x296] = piVar5[0x296];
    }
  }
  (**(code **)(*param_1 + 0x334))(uVar6,unaff_retaddr);
  return;
}

// 00467FF0  FUN_00467ff0  size=138  [between]
void __fastcall FUN_00467ff0(int param_1)

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

// 00468080  FUN_00468080  size=37  [between]
void __fastcall FUN_00468080(int param_1)

{
  if (((*(int *)(param_1 + 0x61c) != 0) && ((*(byte *)(param_1 + 0x148a) & 0x10) != 0)) &&
     ((*(byte *)(param_1 + 0x148a) & 8) != 0)) {
    FUN_00a8caf0(0x5d,0,0,0);
  }
  return;
}

// 004680B0  FUN_004680b0  size=255  [between]
void __fastcall FUN_004680b0(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_00468159;
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00468159:
  iVar1 = FUN_00a8c760(0);
  if ((iVar1 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  }
  return;
}

// 004681B0  FUN_004681b0  size=28  [between]
void __fastcall FUN_004681b0(int param_1)

{
  if (((*(byte *)(param_1 + 0x148a) & 0x10) != 0) && ((*(byte *)(param_1 + 0x148a) & 8) != 0)) {
    FUN_00a8caf0(0x5d,0,0,0);
  }
  return;
}

// 004681D0  FUN_004681d0  size=37  [between]
void __fastcall FUN_004681d0(int param_1)

{
  if (((*(int *)(param_1 + 0x61c) != 0) && ((*(byte *)(param_1 + 0x148a) & 0x10) != 0)) &&
     ((*(byte *)(param_1 + 0x148a) & 8) != 0)) {
    FUN_00a8caf0(0x5d,0,0,0);
  }
  return;
}

// 00468200  FUN_00468200  size=275  [between]
void __fastcall FUN_00468200(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x6b;
  if (param_1[0x187] == 0) {
    sVar1 = FUN_00dde2d0(0,1);
    if (((sVar1 != 0) || ((*(byte *)((int)param_1 + 0x148a) & 0x10) != 0)) &&
       (uVar3 = 0x6c, (*(byte *)((int)param_1 + 0x148a) & 8) != 0)) {
      uVar3 = 0x6b;
    }
    FUN_00aa4080(uVar3,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4d3] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_004682bc;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_004682bc:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (param_1[0x2a1] != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00468340  FUN_00468340  size=345  [between]
void __fastcall FUN_00468340(int *param_1)

{
  int iVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  
  (**(code **)(*param_1 + 0x314))();
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  param_1[0x53b] = 1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x72,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar1 = param_1[0x4cd];
    sVar3 = FUN_00dde2d0(0,0x28);
    param_1[0x248] = 0x43700000;
    param_1[0x4cc] = (sVar3 + 0x3c) * iVar1;
    param_1[0x4cd] = iVar1 + 1;
    param_1[0x532] = 0;
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
    if (0.0 >= fVar2 && (fVar2 == 0.0) == 0) goto LAB_0046845f;
    uVar4 = (**(code **)(*param_1 + 400))();
  }
  if (uVar4 != 0) {
    return;
  }
LAB_0046845f:
  (**(code **)(*param_1 + 0x34c))();
  sVar3 = FUN_00dde2d0(0,0x28);
  param_1[0x532] = 0;
  param_1[0x4cc] = (sVar3 + 0x3c) * param_1[0x4cd];
  return;
}

// 004684B0  Em0070::vf294  size=1  [class]
void Em0070::vf294(void)

{
  return;
}

// 004684C0  Em0070::vf298  size=21  [class]
void __fastcall Em0070::vf298(int param_1)

{
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xdfffffff;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x40000000;
  return;
}

// 004684E0  Em0070::vf29C  size=54  [class]
void __fastcall Em0070::vf29C(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xdfffffff;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x40000000;
  iVar1 = *(int *)(param_1 + 0x618);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    FUN_00a8caf0(7,2,0,0);
  }
  return;
}

// 00468520  Em0070::vf2A0  size=54  [class]
void __fastcall Em0070::vf2A0(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xdfffffff;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x40000000;
  iVar1 = *(int *)(param_1 + 0x618);
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    FUN_00a8caf0(9,0,0,0);
  }
  return;
}

// 00468560  Em0070::vf2A4  size=21  [class]
void __fastcall Em0070::vf2A4(int param_1)

{
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xbfffffff;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x20000000;
  return;
}

// 00468580  Em0070::vf2A8  size=43  [class]
void __fastcall Em0070::vf2A8(int *param_1)

{
  param_1[0x375] = param_1[0x375] & 0xbfffffff;
  param_1[0x375] = param_1[0x375] | 0x20000000;
  if ((DAT_01bea060 & 0x2000000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x004685a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 004685B0  Em0070::vf2AC  size=21  [class]
void __fastcall Em0070::vf2AC(int param_1)

{
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0xbfffffff;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x20000000;
  return;
}

// 004685D0  Em0070::vf2B0  size=1  [class]
void Em0070::vf2B0(void)

{
  return;
}

// 004685E0  Em0070::vf2B4  size=1  [class]
void Em0070::vf2B4(void)

{
  return;
}

// 004685F0  Em0070::vf2B8  size=1  [class]
void Em0070::vf2B8(void)

{
  return;
}

// 00468600  Em0070::vf2BC  size=1  [class]
void Em0070::vf2BC(void)

{
  return;
}

// 00468610  Em0070::vf2C0  size=1  [class]
void Em0070::vf2C0(void)

{
  return;
}

// 00468620  Em0070::vf2C4  size=1  [class]
void Em0070::vf2C4(void)

{
  return;
}

// 00468630  Em0070::vf2C8  size=1  [class]
void Em0070::vf2C8(void)

{
  return;
}

// 00468640  Em0070::vf2CC  size=1  [class]
void Em0070::vf2CC(void)

{
  return;
}

// 00468650  Em0070::vf2D0  size=1  [class]
void Em0070::vf2D0(void)

{
  return;
}

// 00468660  Em0070::vf2D4  size=6  [class]
undefined4 Em0070::vf2D4(void)

{
  return 1;
}

// 00468A30  FUN_00468a30  size=178  [callgraph]
void __fastcall FUN_00468a30(int param_1)

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
  *(undefined4 *)(param_1 + 0x14dc) = uVar2;
  return;
}

// 00468AF0  Em0070::vf44  size=278  [class]
void __fastcall Em0070::vf44(int param_1)

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
  if (*(int *)(param_1 + 0x1434) != 0) {
    FUN_00eaa6e0(0x3f800000,0);
    *(undefined4 *)(param_1 + 0x1434) = 0;
  }
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  FUN_00a934c0();
  FUN_00a92a00();
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  RayCastManager::getWork(param_1 + 0x1124);
  RayCastManager::getWork(param_1 + 0xe10);
  RayCastManager::getWork(param_1 + 0xe18);
  RayCastManager::getWork(param_1 + 0xe20);
  RayCastManager::getWork(param_1 + 0xe28);
  BehaviorEmBase::vf44();
  return;
}

// 00468C10  Em0070::vf264  size=561  [class]
undefined4 __thiscall Em0070::vf264(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_c [12];
  
  FUN_0040ac60(param_2);
  param_1[0x520] = param_1[0x2e1];
  if (param_1[0x2e1] != 0) {
    param_1[0x51c] = param_1[0x2e3];
    param_1[0x51d] = param_1[0x2e4];
    param_1[0x51e] = param_1[0x2e5];
    param_1[0x51f] = 0x3f800000;
    param_1[0x521] = param_1[0x2e2];
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

// 00468E50  FUN_00468e50  size=274  [between]
undefined4 __fastcall FUN_00468e50(int param_1)

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
  
  uVar9 = FUN_00907560(param_1 + 0xe18,0,0,0,0,0,0,0);
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
  local_20 = "Em0070UsePath";
  local_60[0] = param_1 + 0xe18;
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

// 00468F70  FUN_00468f70  size=274  [between]
undefined4 __fastcall FUN_00468f70(int param_1)

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
  
  uVar9 = FUN_00907560(param_1 + 0xe10,0,0,0,0,0,0,0);
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
  local_20 = "Em0070Obstacle";
  local_60[0] = param_1 + 0xe10;
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

// 00469090  FUN_00469090  size=310  [between]
void __thiscall FUN_00469090(int param_1,float *param_2)

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
  
  iVar9 = FUN_00907640(param_1 + 0xe28,0,0);
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
  local_1c = "Em0070NextPointView";
  local_30 = 0x3e4ccccd;
  local_60[0] = param_1 + 0xe28;
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
    *(undefined4 *)(param_1 + 0xdf4) = 1;
  }
  return;
}

// 004691D0  FUN_004691d0  size=273  [between]
undefined4 __fastcall FUN_004691d0(int param_1)

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
  
  uVar4 = FUN_00907640(param_1 + 0xe20,0,0);
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
  local_6c[0] = param_1 + 0xe20;
  fStack_5c = fVar1 + unaff_ESI;
  fStack_58 = fVar2 + unaff_EBX;
  fStack_54 = fVar3 + fStack_74;
  FUN_0090fb00(local_6c);
  return uVar4;
}

// 004692F0  Em0070::vf268  size=161  [class]
undefined4 __thiscall
Em0070::vf268(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

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

// 004693C0  FUN_004693c0  size=318  [between]
undefined4 __thiscall FUN_004693c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_110 [140];
  uint local_84;
  uint local_80;
  int local_7c;
  
  uVar2 = 0;
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
        param_1[0x375] = param_1[0x375] | 0x10000000;
        uVar2 = 1;
        uVar3 = 0;
        iVar1 = FUN_00a81330();
        if (iVar1 != 0) {
          uVar3 = FUN_00a7c8a0();
        }
        if ((local_80 & 0x10000) != 0) {
          (**(code **)(*param_1 + 0x198))(uVar3,param_2,1);
          return 1;
        }
        (**(code **)(*param_1 + 0x198))(uVar3,param_2,0x100);
      }
      return uVar2;
    }
  }
  return 0;
}

// 00469500  FUN_00469500  size=117  [between]
undefined4 __thiscall FUN_00469500(int *param_1,undefined4 param_2)

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

// 00469580  FUN_00469580  size=81  [between]
undefined4 FUN_00469580(undefined4 param_1)

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

// 004695E0  Em0070::vf54  size=75  [class]
void __fastcall Em0070::vf54(int param_1)

{
  float fVar1;
  float fVar2;
  
  BehaviorEmBase::vf54();
  fVar1 = *(float *)(param_1 + 0x1150) - *(float *)(param_1 + 0x40);
  fVar2 = *(float *)(param_1 + 0x1158) - *(float *)(param_1 + 0x48);
  if (*(float *)(param_1 + 0x1144) * *(float *)(param_1 + 0x1144) < fVar2 * fVar2 + fVar1 * fVar1) {
    *(int *)(param_1 + 0x1140) = *(int *)(param_1 + 0x1140) + 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x1140) = 0;
  return;
}

// 00469630  Em0070::getAttackInfo  size=730  [class]
undefined4 __thiscall Em0070::getAttackInfo(int param_1,ushort *param_2)

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
    FUN_00dd5650(&DAT_0163ddd0);
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
    return unaff_EBX;
  default:
    goto switchD_00469715_caseD_5;
  case 6:
    *puVar1 = 0xf8;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    break;
  case 8:
    *puVar1 = 0xf9;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x800000;
    return unaff_EBX;
  case 10:
    *puVar1 = 0xfa;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    break;
  case 0xc:
    *puVar1 = 0xfb;
    puVar1[0x23] = puVar1[0x23] | 0x20002000;
    return unaff_EBX;
  case 0xe:
    *puVar1 = 0xfe;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x1000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x1601;
    return unaff_EBX;
  case 0x10:
    *puVar1 = 0xff;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x1000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x1601;
    return unaff_EBX;
  case 0x12:
    *puVar1 = 0x100;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x1601;
    return unaff_EBX;
  case 0x14:
    *puVar1 = 0xfc;
    puVar1[0x23] = puVar1[0x23] | 0x20002000;
    return unaff_EBX;
  case 0x16:
    *puVar1 = 0xfd;
    puVar1[0x23] = puVar1[0x23] | 0x20002000;
    return unaff_EBX;
  case 0x18:
    *puVar1 = 0x102;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    return unaff_EBX;
  case 0x1a:
    *puVar1 = 0x103;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x40000;
    return unaff_EBX;
  case 0x1c:
    *puVar1 = 0x104;
  }
  puVar1[0x23] = puVar1[0x23] | 0x20000000;
switchD_00469715_caseD_5:
  return unaff_EBX;
}

// 00469960  Em0070::vf14C  size=124  [class]
bool __thiscall Em0070::vf14C(int *param_1,int param_2,int param_3)

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

// 004699E0  FUN_004699e0  size=204  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_004699e0(int param_1)

{
  int iVar1;
  int local_8 [2];
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      FUN_00a8caf0(9,0,0,0);
    }
    if (*(int *)(param_1 + 0x1118) != 0) {
      FUN_00a88b50(4,1);
      if (((*(byte *)(param_1 + 0x148a) & 0x10) == 0) && (*(int *)(param_1 + 0x14e4) == 0)) {
        FUN_00a8caf0(0x23,0,0,0);
      }
      else {
        FUN_00466920();
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

// 00469AB0  FUN_00469ab0  size=729  [between]
void __fastcall FUN_00469ab0(int *param_1)

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
LAB_00469ae3:
    FUN_00aa4080(0xd3,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else {
    if (iVar4 == 1) goto LAB_00469ae3;
    if (iVar4 != 2) goto LAB_00469d26;
  }
  local_2c = (float)param_1[0x510];
  local_28 = (float)param_1[0x511];
  local_24 = (float)param_1[0x512];
  FUN_00a8d790(&local_2c);
  if (param_1[0x202] == 0) {
    param_1[0x514] = param_1[0x510];
    param_1[0x515] = param_1[0x511];
    param_1[0x516] = param_1[0x512];
    param_1[0x517] = param_1[0x513];
    fVar1 = ((float)param_1[0x12] - local_24) * ((float)param_1[0x12] - local_24) +
            ((float)param_1[0x10] - local_2c) * ((float)param_1[0x10] - local_2c);
    if (fVar1 < 2.25 != (fVar1 == 2.25)) {
      uVar5 = 1;
      goto LAB_00469d0c;
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
        param_1[0x4f0] = (int)local_2c;
        param_1[0x4f1] = (int)local_28;
        uVar5 = 3;
        param_1[0x4f2] = (int)local_24;
        param_1[0x4f3] = 0x3f800000;
        goto LAB_00469d0c;
      }
    }
    else {
      if (cVar2 != '\0') {
        FUN_00a8caf0(1,0,0,0);
      }
      if (cVar3 != '\0') {
        FUN_00a8d790(&local_2c);
        param_1[0x4f0] = (int)local_2c;
        param_1[0x4f1] = (int)local_28;
        param_1[0x4f2] = (int)local_24;
        param_1[0x4f3] = 0x3f800000;
        FUN_00a8caf0(4,0,0,0);
      }
      cVar2 = FUN_00c9db60(1);
      if (cVar2 != '\0') {
        FUN_00a8d790(&local_2c);
        param_1[0x4f0] = (int)local_2c;
        param_1[0x4f1] = (int)local_28;
        uVar5 = 3;
        param_1[0x4f2] = (int)local_24;
        param_1[0x4f3] = 0x3f800000;
LAB_00469d0c:
        FUN_00a8caf0(uVar5,0,0,0);
      }
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00469d26:
  local_20 = local_2c;
  local_1c = local_28;
  local_18 = local_24;
  local_14 = 0x3f800000;
  FUN_00a8e880(&local_20);
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  return;
}

// 00469D90  FUN_00469d90  size=189  [between]
void __fastcall FUN_00469d90(int param_1)

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
    if (*(int *)(param_1 + 0x1118) != 0) {
      FUN_00a88b50(4,1);
      if (((*(byte *)(param_1 + 0x148a) & 0x10) == 0) && (*(int *)(param_1 + 0x14e4) == 0)) {
        FUN_00a8caf0(0x23,0,0,0);
        FUN_00466a20(1);
        return;
      }
      FUN_00466920();
    }
    FUN_00466a20(1);
    return;
  }
  FUN_00a8caf0(9,0,0,0);
  return;
}

// 00469E50  FUN_00469e50  size=336  [between]
void __fastcall FUN_00469e50(int param_1)

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
        *(undefined4 *)(param_1 + 0x1450) = *(undefined4 *)(param_1 + 0x1440);
        *(undefined4 *)(param_1 + 0x1454) = *(undefined4 *)(param_1 + 0x1444);
        *(undefined4 *)(param_1 + 0x1458) = *(undefined4 *)(param_1 + 0x1448);
        *(undefined4 *)(param_1 + 0x145c) = *(undefined4 *)(param_1 + 0x144c);
        fVar1 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x1450);
        fVar2 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1458);
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

// 00469FA0  FUN_00469fa0  size=204  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00469fa0(int param_1)

{
  int iVar1;
  int local_8 [2];
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      FUN_00a8caf0(9,0,0,0);
    }
    if (*(int *)(param_1 + 0x1118) != 0) {
      FUN_00a88b50(4,1);
      if (((*(byte *)(param_1 + 0x148a) & 0x10) == 0) && (*(int *)(param_1 + 0x14e4) == 0)) {
        FUN_00a8caf0(0x23,0,0,0);
      }
      else {
        FUN_00466920();
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

// 0046A070  FUN_0046a070  size=997  [between]
void __fastcall FUN_0046a070(int *param_1)

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
    goto LAB_0046a105;
  case 3:
    FUN_00aa4080(0xd3,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    goto LAB_0046a1c2;
  case 4:
LAB_0046a1c2:
    param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
    local_c = (float)param_1[0x510];
    local_8 = param_1[0x511];
    local_4 = (float)param_1[0x512];
    FUN_00a8d790(&local_c);
    param_1[0x380] = (int)local_c;
    param_1[0x381] = local_8;
    param_1[0x382] = (int)local_4;
    param_1[899] = 0x3f800000;
    if (param_1[0x202] == 0) {
      fVar1 = ((float)param_1[0x12] - local_4) * ((float)param_1[0x12] - local_4) +
              ((float)param_1[0x10] - local_c) * ((float)param_1[0x10] - local_c);
      if (fVar1 < 2.25 != (fVar1 == 2.25)) {
        uVar6 = 1;
        goto LAB_0046a400;
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
          param_1[0x4f0] = param_1[0x238];
          param_1[0x4f1] = param_1[0x239];
          uVar6 = 3;
          param_1[0x4f2] = param_1[0x23a];
          param_1[0x4f3] = param_1[0x23b];
          goto LAB_0046a400;
        }
      }
      else {
        if (cVar2 != '\0') {
          FUN_00a8caf0(1,0,0,0);
        }
        if (cVar3 != '\0') {
          FUN_00a8d790(&local_c);
          param_1[0x4f0] = (int)local_c;
          param_1[0x4f1] = local_8;
          param_1[0x4f2] = (int)local_4;
          param_1[0x4f3] = 0x3f800000;
          FUN_00a8caf0(4,0,0,0);
        }
        cVar2 = FUN_00c9db60(1);
        if (cVar2 != '\0') {
          FUN_00a8d790(&local_c);
          param_1[0x4f0] = (int)local_c;
          param_1[0x4f1] = local_8;
          uVar6 = 3;
          param_1[0x4f2] = (int)local_4;
          param_1[0x4f3] = 0x3f800000;
LAB_0046a400:
          FUN_00a8caf0(uVar6,0,0,0);
        }
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
  default:
    goto switchD_0046a087_default;
  }
  sVar4 = FUN_00dde2d0(0,5);
  FUN_00aa4080(0xd3,0,0x3e800000,0x3f800000,0x8000000,0xbf800000,(float)(int)sVar4 * 0.1 + 0.8);
  param_1[0x187] = param_1[0x187] + 1;
LAB_0046a105:
  local_c = (float)param_1[0x510];
  local_8 = param_1[0x511];
  local_4 = (float)param_1[0x512];
  FUN_00a8d790(&local_c);
  param_1[0x380] = (int)local_c;
  param_1[0x381] = local_8;
  param_1[0x382] = (int)local_4;
  param_1[899] = 0x3f800000;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0046a087_default:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  return;
}

// 0046A470  FUN_0046a470  size=232  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0046a470(int param_1)

{
  int iVar1;
  int local_8 [2];
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    local_8[0] = 0;
    local_8[1] = 0;
    FUN_00ac81f0(param_1 + 0x40,local_8,local_8 + 1);
    if (local_8[0] == 0) {
      iVar1 = FUN_00a8c760(4);
      if ((((iVar1 != 0) && (4 < *(byte *)(param_1 + 0xdae))) &&
          ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) &&
         ((60.0 < *(float *)(param_1 + 0x1438) && (*(float *)(param_1 + 0xa8c) < 9.0)))) {
        *(undefined4 *)(param_1 + 0x1438) = 0;
        if (((*(byte *)(param_1 + 0x148a) & 0x10) == 0) && (*(int *)(param_1 + 0x14e4) == 0)) {
          FUN_00a8caf0(0x23,0,0,0);
          return;
        }
        FUN_00466920();
        return;
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

// 0046A560  FUN_0046a560  size=538  [between]
void __fastcall FUN_0046a560(int *param_1)

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
    param_1[0x451] = 0x3da3d70a;
    param_1[0x450] = 0;
    FUN_00940450(param_1[0x20f]);
  }
  else if (param_1[0x187] != 1) goto LAB_0046a6bb;
  param_1[0x248] = (int)((float)param_1[0x248] + (float)param_1[0x244]);
  param_1[0x24b] = (int)((float)param_1[0x24b] + (float)param_1[0x244]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0046a6bb:
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

// 0046A780  FUN_0046a780  size=634  [between]
void __fastcall FUN_0046a780(int *param_1)

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
      FUN_00466ae0();
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
      FUN_00466ae0();
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
    FUN_00a8e880(param_1 + 0x518);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3e32b8c2,0);
  }
  return;
}

// 0046AA10  FUN_0046aa10  size=563  [between]
void __fastcall FUN_0046aa10(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x3c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4d3] = 0;
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
  else if (param_1[0x187] != 1) goto LAB_0046abcc;
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00a8caf0(0xb,0,0,0);
    uVar3 = FUN_00fdbc60();
    sVar4 = FUN_00dde2d0(0,uVar3);
    param_1[0x392] = (int)((float)(int)sVar4 + (float)param_1[0x529]);
    sVar4 = FUN_00dde2d0(0,3);
    if (sVar4 != 0) {
      FUN_00a8caf0(0xd,0,0,0);
      sVar4 = FUN_00dde2d0(0,1);
      if (sVar4 != 0) {
        FUN_00a8caf0(0xe,0,0,0);
      }
    }
  }
  iVar5 = FUN_00a8c760(10);
  if ((iVar5 != 0) && (param_1[0x4d3] != 0)) {
    FUN_00a8caf0(0x1e,0,0,0);
  }
LAB_0046abcc:
  iVar5 = FUN_00a8c760(0);
  if (((iVar5 != 0) && (iVar5 = (**(code **)(*(int *)param_1[0x2a1] + 0x22c))(), iVar5 != 0)) &&
     ((float)param_1[0x2a8] < 2.6179938)) {
    FUN_00a8e880(param_1 + 0x518);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3e567750,0);
  }
  return;
}

// 0046AC50  FUN_0046ac50  size=798  [between]
void __fastcall FUN_0046ac50(int *param_1)

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
    param_1[0x4d3] = 0;
    param_1[0x4d4] = 0;
    param_1[0x250] = 0;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
    if (param_1[0x1d9] != 0) {
      FUN_008e5ac0(2);
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0046ad8f;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if ((iVar5 != 0) && (FUN_00a8caf0(0x20,0,0,0), param_1[0x4d4] != 0)) {
    FUN_00a8caf0(0x10,0,0,0);
  }
  if (param_1[0x4d3] != 0) {
    param_1[0x250] = 1;
    param_1[0x225] = 0x3dcccccd;
  }
  if (param_1[0x4d4] != 0) {
    param_1[0x250] = 1;
  }
LAB_0046ad8f:
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
           (int)(float)((float10)(float)param_1[0x15] +
                       (((float10)fVar1 + (float10)fStack_20) - (float10)(float)param_1[0x15]) *
                       fVar6);
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
    FUN_00a8e880(param_1 + 0x518);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e32b8c2,0);
    iVar5 = FUN_00a8c760(10);
    if (iVar5 != 0) {
      FUN_00b7ab80(0x42340000,0x3c23d70a);
    }
  }
  FUN_00a8c760(0);
  return;
}

// 0046AF70  FUN_0046af70  size=697  [between]
void __fastcall FUN_0046af70(int *param_1)

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
    param_1[0x4d3] = 0;
    param_1[0x250] = 0;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0046b057;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x20,0,0,0);
  }
  if (param_1[0x4d3] != 0) {
    param_1[0x250] = 1;
    param_1[0x225] = 0x3dcccccd;
  }
LAB_0046b057:
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
    FUN_00a8e880(param_1 + 0x518);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e32b8c2,0);
  }
  return;
}

// 0046B230  FUN_0046b230  size=640  [between]
void __fastcall FUN_0046b230(int *param_1)

{
  code *pcVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  (*pcVar1)();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x52,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_008e5c50(0xd);
    param_1[0x225] = -0x41666666;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
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
      FUN_00466ae0();
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
    goto switchD_0046b255_default;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  param_1[0x225] = (int)((float)param_1[0x225] - 0.05);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a94ce0(0);
  FUN_00a8c760(10);
  if ((((int *)param_1[0x2a1] != (int *)0x0) &&
      (iVar4 = (**(code **)(*(int *)param_1[0x2a1] + 0x324))(), iVar4 != 0)) &&
     (fVar2 = *(float *)(param_1[0x2a1] + 0x44) + 1.5, (float)param_1[0x11] <= fVar2)) {
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x15] = (int)fVar2;
    FUN_00b7ab80(0x41a00000,0x3c23d70a);
  }
switchD_0046b255_default:
  iVar4 = FUN_00a8c760(0);
  if (iVar4 != 0) {
    FUN_00a8e880(param_1 + 0x518);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0046B4C0  FUN_0046b4c0  size=707  [between]
void __fastcall FUN_0046b4c0(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_8;
  
  local_8 = 0;
  iVar5 = param_1[0x186];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  uVar6 = 0x3e;
  if (iVar5 == 0x23) {
    local_8 = 0x40490fdb;
  }
  if (param_1[0x187] == 0) {
    if (iVar5 == 0x22) {
      uVar6 = 0x41;
    }
    if (iVar5 == 0x23) {
      uVar6 = 0x44;
    }
    FUN_00aa4080(uVar6,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00c15aa0();
    FUN_00a8d280();
    if (param_1[0x1d9] != 0) {
      FUN_008e5ac0(2);
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0046b638;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00a8caf0(0xb,0,0,0);
    uVar3 = FUN_00fdbc60();
    sVar4 = FUN_00dde2d0(0,uVar3);
    param_1[0x392] = (int)((float)(int)sVar4 + (float)param_1[0x529]);
    sVar4 = FUN_00dde2d0(0,3);
    if (sVar4 != 0) {
      FUN_00a8caf0(0xd,0,0,0);
      sVar4 = FUN_00dde2d0(0,1);
      if (sVar4 != 0) {
        FUN_00a8caf0(0xe,0,0,0);
      }
    }
  }
LAB_0046b638:
  iVar5 = FUN_00a8c760(0);
  if (((iVar5 != 0) && (iVar5 = (**(code **)(*(int *)param_1[0x2a1] + 0x22c))(), iVar5 != 0)) &&
     ((float)param_1[0x2a8] < 2.6179938)) {
    FUN_00a8e880(param_1 + 0x518);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3e32b8c2,local_8);
  }
  if ((((param_1[0x186] == 0x23) && (param_1[0x2a1] != 0)) &&
      ((iVar5 = FUN_00a8c760(10), iVar5 != 0 &&
       ((iVar5 = (**(code **)(*(int *)param_1[0x2a1] + 0x22c))(), iVar5 != 0 &&
        ((float)param_1[0x2a8] < 1.5707964)))))) && (iVar5 = FUN_00a12210(0xf00), iVar5 != 0)) {
    fVar1 = *(float *)(param_1[0x2a1] + 0x48);
    fVar2 = *(float *)(iVar5 + 0x48);
    param_1[0x14] =
         (int)((*(float *)(param_1[0x2a1] + 0x40) - *(float *)(iVar5 + 0x40)) * 0.1 +
              (float)param_1[0x14]);
    param_1[0x16] = (int)((fVar1 - fVar2) * 0.1 + (float)param_1[0x16]);
    FUN_00a8e880(param_1 + 0x518);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3c0efa35,0);
  }
  return;
}

// 0046B790  FUN_0046b790  size=446  [between]
void FUN_0046b790(int param_1,float *param_2,undefined4 param_3)

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

// 0046B950  FUN_0046b950  size=729  [between]
void __fastcall FUN_0046b950(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  float10 fVar8;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x4e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00c15aa0();
    FUN_00a8d280();
    param_1[0x4d3] = 0;
    if (param_1[0x1d9] != 0) {
      FUN_008e5ac0(2);
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0046bac8;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar7 = FUN_00a94ce0(0);
  if (iVar7 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00a8caf0(0xb,0,0,0);
    sVar5 = FUN_00dde2d0(0,1);
    if ((sVar5 != 0) &&
       (((*(byte *)((int)param_1 + 0x148a) & 0x10) == 0 ||
        ((*(byte *)((int)param_1 + 0x148a) & 8) == 0)))) {
      FUN_00a8caf0(8,0,0,0);
    }
    if ((param_1[0x4d3] != 0) &&
       (((*(byte *)((int)param_1 + 0x148a) & 0x10) == 0 ||
        ((*(byte *)((int)param_1 + 0x148a) & 8) == 0)))) {
      FUN_00a8caf0(8,0,0,0);
    }
    uVar6 = FUN_00fdbc60();
    sVar5 = FUN_00dde2d0(0,uVar6);
    param_1[0x392] = (int)((float)(int)sVar5 + (float)param_1[0x529]);
  }
  FUN_00a952e0(0,0x428c0000);
LAB_0046bac8:
  iVar7 = FUN_00a8c760(0);
  if (((iVar7 != 0) && (iVar7 = (**(code **)(*(int *)param_1[0x2a1] + 0x22c))(), iVar7 != 0)) &&
     ((float)param_1[0x2a8] < 2.6179938)) {
    FUN_00a8e880(param_1 + 0x518);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
  }
  if (((param_1[0x2a1] != 0) && (iVar7 = FUN_00a8c760(10), iVar7 != 0)) &&
     ((iVar7 = (**(code **)(*(int *)param_1[0x2a1] + 0x22c))(), iVar7 != 0 &&
      (((float)param_1[0x2a8] < 1.5707964 && (iVar7 = FUN_00a12210(0xf00), iVar7 != 0)))))) {
    fVar1 = *(float *)(param_1[0x2a1] + 0x40);
    fVar2 = *(float *)(iVar7 + 0x40);
    fVar3 = *(float *)(param_1[0x2a1] + 0x48);
    fVar4 = *(float *)(iVar7 + 0x48);
    fVar8 = (float10)FUN_00fdc1f0();
    param_1[0x14] = (int)(float)((float10)(float)param_1[0x14] + (float10)(fVar1 - fVar2) * fVar8);
    param_1[0x16] = (int)(float)(fVar8 * (float10)(fVar3 - fVar4) + (float10)(float)param_1[0x16]);
    FUN_00a8e880(param_1 + 0x518);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0046BC30  FUN_0046bc30  size=68  [between]
void __fastcall FUN_0046bc30(int *param_1)

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

// 0046BC80  FUN_0046bc80  size=36  [between]
void __fastcall FUN_0046bc80(int *param_1)

{
  if (param_1[0x139] != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  return;
}

// 0046BCB0  FUN_0046bcb0  size=36  [between]
void __fastcall FUN_0046bcb0(int *param_1)

{
  if (param_1[0x139] != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  return;
}

// 0046BCE0  FUN_0046bce0  size=36  [between]
void __fastcall FUN_0046bce0(int *param_1)

{
  if (param_1[0x139] != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  return;
}

// 0046BD10  FUN_0046bd10  size=23  [between]
void __fastcall FUN_0046bd10(int param_1)

{
  if (*(int *)(param_1 + 0x4e4) != 0) {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 0046BD30  FUN_0046bd30  size=384  [between]
void __fastcall FUN_0046bd30(int *param_1)

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
    iVar2 = param_1[0x4cd];
    sVar4 = FUN_00dde2d0(0,(short)param_1[0x52e]);
    iVar5 = iVar2 + 1;
    param_1[0x4cc] = (int)sVar4 + param_1[0x530] * iVar2 + param_1[0x52d];
    param_1[0x4cd] = iVar5;
    if (param_1[0x52f] <= iVar5) {
      param_1[0x4cd] = param_1[0x52f];
    }
    param_1[0x532] = 0;
    param_1[0x533] = (int)(float)param_1[0x52c];
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
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00940450(param_1[0x20f]);
    if ((param_1[0x139] != 0) || (param_1[0x21c] < 1)) {
      FUN_00a8caf0(0x50,0,0,0);
    }
  }
  return;
}

// 0046BEB0  FUN_0046beb0  size=23  [between]
void __fastcall FUN_0046beb0(int param_1)

{
  if (*(int *)(param_1 + 0x4e4) != 0) {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 0046BED0  FUN_0046bed0  size=337  [between]
void __fastcall FUN_0046bed0(int *param_1)

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
    FUN_00940450(param_1[0x20f]);
    if ((param_1[0x139] != 0) || (param_1[0x21c] < 1)) {
      FUN_00a8caf0(0x50,0,0,0);
    }
  }
  return;
}

// 0046C030  FUN_0046c030  size=72  [between]
void __fastcall FUN_0046c030(int *param_1)

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

// 0046C080  FUN_0046c080  size=418  [between]
void __fastcall FUN_0046c080(int *param_1)

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
    (**(code **)(param_1[0x418] + 8))(0x41200000,0,0);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(4,param_1[0x53d],param_1[0x53c]);
    }
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
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
    goto switchD_0046c09e_default;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] < 0.0) {
    FUN_009fdde0();
    return;
  }
switchD_0046c09e_default:
  return;
}

// 0046C240  FUN_0046c240  size=259  [between]
void __fastcall FUN_0046c240(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x94,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x139] = 1;
    (**(code **)(param_1[0x418] + 8))(0x41200000,0,0);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(4,param_1[0x53d],param_1[0x53c]);
    }
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
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

// 0046C350  FUN_0046c350  size=888  [between]
void __fastcall FUN_0046c350(int *param_1)

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
    if ((param_1[0x370] != 0) && (iVar4 = FUN_00a8cd80(param_1[0x370],7,2), iVar4 == 0)) {
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
    if (param_1[0x370] != 0) {
      FUN_00a8cd80(param_1[0x370],7,2);
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
    pcVar2 = *(code **)(param_1[0x418] + 8);
    param_1[0x139] = 1;
    param_1[0x249] = (int)((float)(int)sVar3 * 0.017453292 + (float)param_1[0x249]);
    (*pcVar2)(0x41200000,0,0);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(4,param_1[0x53d],param_1[0x53c]);
    }
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    FUN_00466da0();
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

// 0046C6E0  FUN_0046c6e0  size=357  [between]
void __fastcall FUN_0046c6e0(int *param_1)

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
    (**(code **)(param_1[0x418] + 8))(0x41200000,0,0);
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(4,param_1[0x53d],param_1[0x53c]);
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

// 0046C860  FUN_0046c860  size=444  [between]
void __fastcall FUN_0046c860(int *param_1)

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
    (**(code **)(param_1[0x418] + 8))(0x41200000,0,0);
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
      (*pcVar2)(4,param_1[0x53d],param_1[0x53c]);
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

// 0046CA20  FUN_0046ca20  size=331  [between]
void __fastcall FUN_0046ca20(int *param_1)

{
  code *pcVar1;
  float10 fVar2;
  int *piVar3;
  
  (**(code **)(*param_1 + 0x314))();
  if (param_1[0x187] == 0) {
    pcVar1 = *(code **)(param_1[0x418] + 8);
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
      (*pcVar1)(4,param_1[0x53d],param_1[0x53c]);
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

// 0046CB70  FUN_0046cb70  size=335  [between]
void __fastcall FUN_0046cb70(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  (**(code **)(*param_1 + 0x314))();
  param_1[0x53b] = 1;
  if (param_1[0x187] == 0) {
    pcVar1 = *(code **)(param_1[0x418] + 8);
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
      (*pcVar1)(4,param_1[0x53d],param_1[0x53c]);
      FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
      (**(code **)(*param_1 + 0x364))(0xffffffff);
    }
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

// 0046CCC0  Em0070::vf1A0  size=528  [class]
undefined4 __thiscall Em0070::vf1A0(int *param_1,int *param_2,int param_3)

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
          piVar3 = (int *)FUN_00412580(piVar2);
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
          piVar3 = (int *)FUN_00412580(piVar2);
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
          piVar3 = (int *)FUN_00412580(piVar2);
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

// 0046CED0  FUN_0046ced0  size=111  [between]
void __thiscall FUN_0046ced0(int param_1,undefined4 param_2)

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
  FUN_0090fa30(param_1 + 0x1164,0,&local_20,0x3f000000,param_2,iVar1 << 0x10 | 7,"Em0070");
  return;
}

// 0046CF40  FUN_0046cf40  size=204  [between]
/* WARNING: Removing unreachable block (ram,0x0046cfa3) */

undefined4 __fastcall FUN_0046cf40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_24;
  undefined1 local_20 [28];
  
  iVar4 = 0;
  iVar1 = FUN_00907640(param_1 + 0x1164,&local_24,local_20);
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

// 0046D030  Em0070::vf13C  size=48  [class]
bool __fastcall Em0070::vf13C(int *param_1)

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

// 0046D060  FUN_0046d060  size=186  [between]
void __thiscall FUN_0046d060(int *param_1,int param_2)

{
  if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
    (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
  }
  param_1[0x535] = 0x3f800000;
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x358))(400,0);
  }
  *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 1;
  FUN_00ac8dd0("hontai",1);
  FUN_00ac9420("_EFD00");
  if (param_1[0x374] != -1) {
    FUN_00c52700(param_1[0x374],1);
  }
  if (param_1[0x371] == 0) {
    FUN_00468a30();
    if (param_1[0xcc] != 0) {
      param_1[0x53a] = *(int *)(param_1[0xcc] + 0xcc);
    }
  }
  return;
}

// 0046D120  FUN_0046d120  size=191  [between]
void __thiscall FUN_0046d120(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
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
      puVar4 = &DAT_01b34d5c;
      (**(code **)(*piVar2 + 4))(&DAT_01b34d5c);
      iVar1 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
    if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
    }
    param_1[0x535] = 0x3f800000;
    if (uVar3 != 0) {
      FUN_004686a0(param_2);
    }
    if (param_2 != 0) {
      (**(code **)(*param_1 + 0x358))(0x196,0);
    }
    *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 0x80;
  }
  return;
}

// 0046D1E0  FUN_0046d1e0  size=165  [between]
undefined4 __fastcall FUN_0046d1e0(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x139] == 0) {
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

// 0046D290  FUN_0046d290  size=100  [between]
undefined4 __thiscall FUN_0046d290(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  if (((*(byte *)(param_1 + 0x4a8) & 0x40) == 0) &&
     ((*(int *)(param_1 + 0x14e4) == 0 || (param_2 == 0)))) {
    bVar1 = *(byte *)(param_1 + 0x148a) & 0x10;
    if ((bVar1 == 0) || ((*(byte *)(param_1 + 0x148a) & 8) == 0)) {
      if (bVar1 == 0) {
        FUN_00a8caf0(0x1d,0,0,0);
        return 1;
      }
      iVar3 = FUN_00466960();
      if ((iVar3 != 0) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

// 0046D300  FUN_0046d300  size=107  [between]
undefined4 __thiscall FUN_0046d300(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 0x148a);
  if ((((bVar1 & 0x10) == 0) || ((bVar1 & 8) == 0)) &&
     ((*(int *)(param_1 + 0x14e4) == 0 || (param_2 == 0)))) {
    if ((bVar1 & 8) == 0) {
      FUN_00a8caf0(0x1c,0,0,0);
      return 1;
    }
    if ((*(int *)(param_1 + 0x14e4) == 0) && ((bVar1 & 0x10) == 0)) {
      FUN_00a8caf0(0x21,0,0,0);
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 0046D370  FUN_0046d370  size=81  [between]
bool __fastcall FUN_0046d370(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_00ac4d60(1);
  if ((iVar2 == 0) && (*(int *)(param_1 + 0x14e4) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x148a);
    if ((bVar1 & 0x10) == 0) {
      if ((bVar1 & 8) != 0) {
        iVar2 = FUN_004668c0();
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

// 0046D3D0  FUN_0046d3d0  size=655  [between]
undefined4 __fastcall FUN_0046d3d0(int param_1)

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
    if ((*(int *)(param_1 + 0x14e4) == 0) || (iVar3 = FUN_00ac4d60(1), iVar3 != 0)) {
      if (*(float *)(param_1 + 0xa8c) < 6.25 != (*(float *)(param_1 + 0xa8c) == 6.25)) {
        if (((*(byte *)(param_1 + 0x148a) & 0x10) == 0) || ((*(byte *)(param_1 + 0x148a) & 8) == 0))
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
        uVar4 = FUN_0046d290(0);
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if ((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) && (*(float *)(param_1 + 0xa8c) < 36.0))
      {
        uVar4 = FUN_0046d300(0);
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if (!NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0)) {
        uVar4 = 1;
        FUN_00a8caf0(10,0,0,0);
        FUN_00466920();
      }
      if ((*(int *)(param_1 + 0x618) == 0x1c) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        uVar4 = 1;
        FUN_00a8caf0(0x12,0,0,0);
      }
      if (((((*(byte *)(param_1 + 0x148a) & 0x20) == 0) &&
           (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0))) &&
          (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) &&
         ((*(float *)(param_1 + 0x1414) < 0.0 && ((*(byte *)(param_1 + 0x148a) & 0x90) == 0)))) {
        FUN_00a8caf0(0x26,0,0,0);
      }
    }
    else {
      if (*(float *)(param_1 + 0xa8c) <= 9.0) {
        uVar4 = FUN_0046d370();
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 != 0) {
          uVar4 = FUN_004668c0();
        }
        sVar2 = FUN_00dde2d0(0,4);
        if (sVar2 == 1) {
          uVar4 = FUN_00466920();
        }
      }
      if (9.0 < *(float *)(param_1 + 0xa8c)) {
        uVar4 = FUN_00466920();
      }
    }
    if (((*(byte *)(param_1 + 0x148a) & 0x10) != 0) && ((*(byte *)(param_1 + 0x148a) & 8) != 0)) {
      FUN_00a8caf0(10,0,0,0);
      FUN_00466920();
      return 1;
    }
    return uVar4;
  }
  if (9.0 < *(float *)(param_1 + 0xa8c)) {
    return 0;
  }
  if (((*(byte *)(param_1 + 0x148a) & 0x10) == 0) && (*(int *)(param_1 + 0x14e4) == 0)) {
    FUN_00a8caf0(0x23,0,0,0);
    return 1;
  }
  uVar4 = FUN_00466920();
  return uVar4;
}

// 0046D660  Em0070::vf194  size=21  [class]
bool __fastcall Em0070::vf194(int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x4e4) == 0) {
    bVar1 = *(int *)(param_1 + 0x618) == 0x40;
  }
  return bVar1;
}

// 0046D680  Em0070::vf368  size=84  [class]
undefined4 __fastcall Em0070::vf368(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4b0) == 0x20070) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0xd88) != 0) {
      return 2;
    }
    if ((*(uint *)(param_1 + 0xdd4) & 0x8000000) != 0) {
      return 1;
    }
  }
  else {
    uVar1 = 3;
    if (*(int *)(param_1 + 0xd88) != 0) {
      return 5;
    }
    if ((*(uint *)(param_1 + 0xdd4) & 0x8000000) != 0) {
      uVar1 = 4;
    }
  }
  return uVar1;
}

// 0046D6E0  FUN_0046d6e0  size=77  [callgraph]
void __thiscall FUN_0046d6e0(int *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x90) & 0x800) == 0) {
    param_1[0x53c] = 0;
  }
  if ((*(uint *)(param_2 + 0x8c) & 0x100000) != 0) {
    param_1[0x53d] = 2;
  }
  (**(code **)(*param_1 + 0x344))(4,param_1[0x53d],param_1[0x53c]);
  return;
}

// 0046D780  FUN_0046d780  size=117  [callgraph]
void __fastcall FUN_0046d780(int *param_1)

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
  param_1[0x38c] = 0x44160000;
  return;
}

// 0046D860  FUN_0046d860  size=219  [callgraph]
void __fastcall FUN_0046d860(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    if ((DAT_01bea060 & 0x2000000) == 0) {
      if ((param_1[0x2a1] != 0) && (*(int *)(param_1[0x2a1] + 0x2664) != 0)) {
        param_1[0x504] = 0;
      }
      iVar1 = FUN_00a8c760(0xf);
      if ((iVar1 != 0) && (param_1[0x44a] != 0)) {
        iVar1 = FUN_0043fa60(5);
        if (iVar1 != 0) {
          iVar1 = FUN_00ac4780();
          if (0 < iVar1) {
            FUN_0046d3d0();
          }
        }
      }
      iVar1 = FUN_00a8c760(0x30);
      if ((iVar1 != 0) && (param_1[0x44a] != 0)) {
        iVar1 = FUN_0043fa60(5);
        if (iVar1 != 0) {
          iVar1 = FUN_00ac4780();
          if (2 < iVar1) {
            FUN_0046d3d0();
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

// 0046D940  FUN_0046d940  size=304  [callgraph]
void __fastcall FUN_0046d940(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0046da21;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(4);
  if (((iVar1 != 0) && (param_1[0x2a1] != 0)) && ((float)param_1[0x504] <= 0.0)) {
    FUN_0046d3d0();
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x504] = 0x42700000;
  }
LAB_0046da21:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_00a8e880(param_1 + 0x518);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0046DA70  FUN_0046da70  size=312  [callgraph]
void __fastcall FUN_0046da70(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0046db82;
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
    param_1[0x504] = 0x42700000;
  }
LAB_0046db82:
  iVar2 = FUN_00a8c760(10);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(0x1c), iVar2 == 0)) {
    FUN_00466d00(uVar4);
  }
  return;
}

// 0046DBB0  FUN_0046dbb0  size=219  [callgraph]
void __fastcall FUN_0046dbb0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    if ((DAT_01bea060 & 0x2000000) == 0) {
      if ((param_1[0x2a1] != 0) && (*(int *)(param_1[0x2a1] + 0x2664) != 0)) {
        param_1[0x504] = 0;
      }
      iVar1 = FUN_00a8c760(0xf);
      if ((iVar1 != 0) && (param_1[0x44a] != 0)) {
        iVar1 = FUN_0043fa60(5);
        if (iVar1 != 0) {
          iVar1 = FUN_00ac4780();
          if (0 < iVar1) {
            FUN_0046d3d0();
          }
        }
      }
      iVar1 = FUN_00a8c760(0x30);
      if ((iVar1 != 0) && (param_1[0x44a] != 0)) {
        iVar1 = FUN_0043fa60(5);
        if (iVar1 != 0) {
          iVar1 = FUN_00ac4780();
          if (2 < iVar1) {
            FUN_0046d3d0();
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

// 0046DC90  FUN_0046dc90  size=358  [callgraph]
void __fastcall FUN_0046dc90(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0046dda7;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(4);
  if (((iVar1 != 0) && (param_1[0x2a1] != 0)) && ((float)param_1[0x504] <= 0.0)) {
    FUN_0046d3d0();
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x504] = 0x44160000;
  }
LAB_0046dda7:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_00a8e880(param_1 + 0x518);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0046DE00  FUN_0046de00  size=736  [callgraph]
void __fastcall FUN_0046de00(int *param_1)

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
    goto LAB_0046df1b;
  case 3:
LAB_0046df1b:
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (((iVar1 != 0) && (param_1[0x187] = param_1[0x187] + 1, uVar3 != 0)) &&
       (iVar1 = FUN_00a8cac0(), 5 < iVar1)) {
      param_1[0x187] = 6;
    }
    goto switchD_0046de5d_default;
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
      FUN_00466da0();
      param_1[0x250] = 1;
    }
    goto LAB_0046e00d;
  case 6:
    FUN_00aa4080(0xe7,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0046e074;
  case 7:
LAB_0046e074:
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(8);
    if (iVar1 != 0) {
      FUN_00466da0();
    }
LAB_0046e00d:
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_00466da0();
      param_1[0x504] = 0x42700000;
    }
  default:
    goto switchD_0046de5d_default;
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0046de5d_default:
  iVar1 = FUN_00a8c760(10);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(0x1c), iVar1 == 0)) {
    FUN_00466d00(uVar3);
  }
  return;
}

// 0046E100  FUN_0046e100  size=207  [callgraph]
void __fastcall FUN_0046e100(int *param_1)

{
  int iVar1;
  
  if ((DAT_01bea060 & 0x2000000) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (param_1[0x44a] != 0)) && (4 < *(byte *)((int)param_1 + 0xdae))) &&
       ((param_1[0x36c] == 2 || (param_1[0x36c] == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (param_1[0x44a] != 0)) &&
       ((4 < *(byte *)((int)param_1 + 0xdae) && ((param_1[0x36c] == 2 || (param_1[0x36c] == -1))))))
    {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x12,0,0,0);
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
  }
  return;
}

// 0046E1D0  FUN_0046e1d0  size=317  [callgraph]
void __fastcall FUN_0046e1d0(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0046e2e7;
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
LAB_0046e2e7:
  iVar2 = FUN_00a8c760(10);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(0x1c), iVar2 == 0)) {
    FUN_00466d00(uVar4);
  }
  return;
}

// 0046E310  FUN_0046e310  size=557  [callgraph]
void __fastcall FUN_0046e310(int *param_1)

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
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xf6,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
    param_1[0x362] = 1;
    param_1[0x301] = 1;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0xf7,0,0x3e2aaaab,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_00466da0();
      FUN_00a8caf0(0x51,0,0,0);
    }
  default:
    goto switchD_0046e366_default;
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00466da0();
    FUN_00a8caf0(0x51,0,0,0);
  }
  iVar1 = FUN_00a8c760(0x1f);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x344))(4,3,1);
    param_1[0x139] = 1;
    param_1[0x21c] = 0;
    FUN_004664e0(0);
    FUN_00466560(0);
    FUN_004665e0(0);
    FUN_00466660(0);
    FUN_0046d060(0);
    FUN_00dda360(0,0x3f800000,0x3f800000,0xf);
  }
switchD_0046e366_default:
  iVar1 = FUN_00a8c760(10);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(0x1c), iVar1 == 0)) {
    FUN_00466d00(uVar3);
  }
  return;
}

// 0046E550  FUN_0046e550  size=774  [callgraph]
void __fastcall FUN_0046e550(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar4 = 0;
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xf8,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00c27260(0x40200000);
    FUN_00a8d280();
    param_1[0x362] = 1;
    param_1[0x301] = 1;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0xf9,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0046e6fe;
  case 3:
LAB_0046e6fe:
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_00466da0();
      FUN_00a8caf0(0x51,0,0,0);
    }
    iVar2 = FUN_00a8c760(0x1f);
    if (iVar2 != 0) {
      param_1[0x139] = 1;
      param_1[0x21c] = 0;
      FUN_004664e0(0);
      FUN_00466560(0);
      FUN_004665e0(0);
      FUN_00466660(0);
      FUN_0046d060(0);
    }
    goto switchD_0046e5a6_default;
  case 4:
    FUN_00aa4080(0xfa,0,0,0x3f800000,0x8000000,0,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_00466da0();
      FUN_00a8caf0(0x51,0,0,0);
    }
  default:
    goto switchD_0046e5a6_default;
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  iVar2 = FUN_00a8c760(0x1f);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x344))(4,3,1);
    param_1[0x139] = 1;
    param_1[0x21c] = 0;
    FUN_004664e0(0);
    FUN_00466560(0);
    FUN_004665e0(0);
    FUN_00466660(0);
    FUN_0046d060(0);
    FUN_00dda360(0,0x3f800000,0x3f800000,0xf);
  }
switchD_0046e5a6_default:
  iVar2 = FUN_00a8c760(10);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(0x1c), iVar2 == 0)) {
    FUN_00466d00(uVar4);
  }
  return;
}

// 0046F880  Em0070::vf33C  size=2094  [class]
void __thiscall Em0070::vf33C(int param_1,int *param_2,uint *param_3)

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
  if ((*(int *)(param_1 + 0x14e8) + 4 <= param_2[0x33]) && ((*(byte *)(param_1 + 0x1488) & 1) != 0))
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
        if (*(int *)(param_1 + 0x14ec) == 0) {
          if ((*(byte *)(param_1 + 0x1488) & 1) != 0) {
            iVar10 = FUN_0043f830(7);
            if (((iVar10 != 0) || (iVar10 = FUN_0043f830(5), iVar10 != 0)) ||
               ((iVar10 = FUN_0043f830(0), iVar10 != 0 || (iVar10 = FUN_0043f830(6), iVar10 != 0))))
            {
              param_2[1] = param_2[1] | 1;
              *param_2 = 9;
            }
            if ((*(byte *)(param_1 + 0x1488) & 1) != 0) {
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
              if ((*(byte *)(param_1 + 0x1488) & 1) != 0) {
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
                if (((*(byte *)(param_1 + 0x1488) & 1) != 0) &&
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
          if ((*(byte *)(param_1 + 0x1488) & 1) != 0) {
            if (((*param_2 == 0) || (*param_2 == 9)) && (bVar8)) {
              *param_2 = 2;
              param_3[8] = 0;
              iVar10 = FUN_0043f860(0x20);
              if ((iVar10 == 0) || (iVar10 = FUN_0043f860(0x21), iVar10 == 0)) {
                *param_2 = 1;
                param_3[8] = 1;
              }
            }
            if (((*(byte *)(param_1 + 0x1488) & 1) != 0) &&
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

// 004700B0  Em0070::vf338  size=387  [class]
void __thiscall Em0070::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

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
  if ((*(byte *)(param_1 + 0x522) & 1) == 0) {
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
    if ((*(byte *)(param_1 + 0x522) & 1) != 0) goto LAB_00470120;
  }
  else {
LAB_00470120:
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
      if (iVar7 != 0) goto LAB_004701e2;
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
LAB_004701e2:
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

// 00470240  Em0070::vf334  size=2282  [class]
void __thiscall Em0070::vf334(int *param_1,undefined4 param_2,int *param_3)

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
  
  BehaviorEmBase::vf334(param_2,param_3);
  iVar4 = FUN_00ac8a30();
  if ((*(byte *)(iVar4 + 4) & 0x40) == 0) {
    if ((*(byte *)(param_1 + 0x12a) & 0x20) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0x67;
    }
    (**(code **)(*param_1 + 0x358))(uVar13,param_1 + 0x418);
  }
  bVar3 = *(byte *)((int)param_1 + 0x1489) | (byte)*(undefined4 *)(iVar4 + 4);
  *(byte *)((int)param_1 + 0x1489) = bVar3;
  param_1[0x373] = (uint)bVar3;
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
    puVar15 = &DAT_01b34d50;
    (**(code **)(*piVar10 + 4))(&DAT_01b34d50);
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
      *(undefined1 *)((int)param_1 + 0x1489) = *(undefined1 *)((int)piVar10 + 0x1489);
      *(char *)(param_1 + 0x522) = (char)piVar10[0x522];
      *(undefined1 *)((int)param_1 + 0x148a) = *(undefined1 *)((int)piVar10 + 0x148a);
      param_1[0x541] = piVar10[0x541];
      param_1[0x53a] = piVar10[0x53a];
      param_1[0x53b] = piVar10[0x53b];
    }
  }
  if ((*(byte *)(param_1 + 0x522) & 4) != 0) {
    if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
    }
    *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 4;
    param_1[0x535] = 0x3f800000;
    FUN_00ac8dd0("_R_leg",1);
    FUN_00ac9420("_EFD03");
  }
  if ((*(byte *)(param_1 + 0x522) & 2) != 0) {
    if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
    }
    *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 2;
    param_1[0x535] = 0x3f800000;
    FUN_00ac8dd0("_L_leg",1);
    FUN_00ac9420("_EFD04");
  }
  if ((*(byte *)(param_1 + 0x522) & 0x10) != 0) {
    if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
    }
    *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 0x10;
    param_1[0x535] = 0x3f800000;
    FUN_00ac8dd0("_R_arm",1);
    FUN_00ac9420("_EFD01");
  }
  if ((*(byte *)(param_1 + 0x522) & 8) != 0) {
    if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
    }
    *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 8;
    param_1[0x535] = 0x3f800000;
    FUN_00ac8dd0("_L_arm",1);
    FUN_00ac9420("_EFD02");
  }
  if ((*(byte *)(param_1 + 0x522) & 1) != 0) {
    FUN_0046d060(0);
  }
  iVar6 = FUN_00a7c800();
  iVar6 = **(int **)(iVar6 + 0x330);
  iVar1 = param_1[0x128];
  iVar2 = piVar10[0x372];
  param_1[0x372] = iVar6;
  if (iVar1 != 1) {
    switch(iVar6 + -1) {
    case 0:
      if (iVar2 != iVar6) {
        uVar13 = 0x52;
LAB_00470844:
        FUN_00a8caf0(uVar13,0,0,0);
        if (param_1[0x128] == 0) {
          iVar4 = FUN_00464af0();
          if (iVar4 != 0) {
            FUN_00a8caf0(0x5a,0,0,0);
          }
          if ((param_1[0x128] == 0) && ((*(byte *)((int)param_1 + 0x1489) & 6) != 0))
          goto LAB_00470880;
        }
LAB_0047088f:
        if (param_1[0x128] == 1) {
          FUN_00a8caf0(0x5d,0,0,0);
        }
        param_1[0x139] = 1;
        goto LAB_00470619;
      }
      break;
    case 1:
      if (iVar2 != iVar6) {
        uVar13 = 0x53;
LAB_00470888:
        FUN_00a8caf0(uVar13,0,0,0);
        goto LAB_0047088f;
      }
      break;
    case 2:
      if (iVar2 != iVar6) {
        uVar13 = 0x54;
        goto LAB_00470888;
      }
      break;
    case 3:
    case 8:
      if (iVar2 != iVar6) {
        uVar13 = 0x55;
        goto LAB_00470844;
      }
      break;
    case 4:
      if (iVar2 != iVar6) {
        uVar13 = 0x58;
        goto LAB_00470888;
      }
      break;
    case 5:
      if (iVar2 != iVar6) {
        uVar13 = 0x59;
        goto LAB_00470888;
      }
      break;
    case 6:
      if (iVar2 != iVar6) {
LAB_00470880:
        uVar13 = 0x5a;
        goto LAB_00470888;
      }
      break;
    case 7:
      if (iVar2 != iVar6) {
        uVar13 = 0x5b;
        goto LAB_00470888;
      }
      break;
    case 9:
      goto switchD_004705f5_caseD_a;
    case 10:
      goto switchD_004705f5_caseD_b;
    case 0xb:
      goto switchD_004705f5_caseD_c;
    case 0xc:
      if (iVar2 == iVar6) goto LAB_00470b0c;
      uVar13 = 0x44;
      goto LAB_00470b05;
    case 0xd:
      if (iVar2 != iVar6) {
        uVar13 = 0x57;
        goto LAB_00470844;
      }
      break;
    default:
      goto switchD_004705f5_default;
    }
LAB_00470634:
    if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
    }
    *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 4;
    param_1[0x535] = 0x3f800000;
    FUN_00ac8dd0("_R_leg",1);
    FUN_00ac9420("_EFD03");
    if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
    }
    *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 2;
    param_1[0x535] = 0x3f800000;
    FUN_00ac8dd0("_L_leg",1);
    FUN_00ac9420("_EFD04");
    if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
    }
    *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 0x10;
    param_1[0x535] = 0x3f800000;
    FUN_00ac8dd0("_R_arm",1);
    FUN_00ac9420("_EFD01");
    if (((float)param_1[0x535] == 0.0) && (param_1[0x371] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x195,param_1 + 0x418);
    }
    *(byte *)(param_1 + 0x522) = *(byte *)(param_1 + 0x522) | 8;
    param_1[0x535] = 0x3f800000;
    FUN_00ac8dd0("_L_arm",1);
    FUN_00ac9420("_EFD02");
    FUN_0046d060(0);
    FUN_00ac8d40(1);
    goto LAB_00470b0c;
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
    if (iVar2 == iVar6) goto LAB_00470634;
    FUN_00a8caf0(0x5d,0,0,0);
    param_1[0x139] = 1;
LAB_00470619:
    if (param_1[0x294] != 0) {
      (**(code **)(*param_1 + 0x344))(4,1,1);
    }
    goto LAB_00470634;
  case 10:
switchD_004705f5_caseD_a:
    param_1[0x139] = 1;
    break;
  case 0xb:
switchD_004705f5_caseD_b:
    param_1[0x139] = 1;
    FUN_00a8caf0(0x5c,0,0,0);
    break;
  case 0xc:
switchD_004705f5_caseD_c:
    if (param_1[0x294] != 0) goto LAB_00470b0c;
    param_1[0x139] = 1;
    uVar13 = 0x5c;
    goto LAB_00470b05;
  default:
switchD_004705f5_default:
    if (iVar1 == 1) {
      FUN_00a8caf0(0x47,0,0,0);
      if ((((*(byte *)((int)param_1 + 0x1489) & 0x18) == 0) && (param_1[0x139] == 0)) &&
         (0 < param_1[0x21c])) goto LAB_00470b0c;
    }
    else {
      if (((*(byte *)((int)param_1 + 0x1489) & 4) != 0) &&
         ((*(byte *)((int)param_1 + 0x148a) & 4) == 0)) {
        if (iVar1 == 0) {
          FUN_00a8caf0(0x44,0,0,0);
        }
        if (((*(byte *)((int)param_1 + 0x1489) & 0x18) != 0) &&
           (FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]), param_1[0x128] == 0)) {
          FUN_00a8caf0(0x53,0,0,0);
        }
      }
      if (((*(byte *)((int)param_1 + 0x1489) & 2) != 0) &&
         ((*(byte *)((int)param_1 + 0x148a) & 2) == 0)) {
        if (param_1[0x128] == 0) {
          FUN_00a8caf0(0x45,0,0,0);
        }
        if (((*(byte *)((int)param_1 + 0x1489) & 0x18) != 0) &&
           (FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]), param_1[0x128] == 0)) {
          FUN_00a8caf0(0x53,0,0,0);
        }
      }
      if ((*(byte *)((int)param_1 + 0x1489) & 6) == 0) {
        if (((*(byte *)(iVar4 + 4) & 0x10) != 0) && (param_1[0x128] == 0)) {
          FUN_00a8caf0(0x42,0,0,0);
        }
        if (((*(byte *)(iVar4 + 4) & 8) != 0) && (param_1[0x128] == 0)) {
          FUN_00a8caf0(0x43,0,0,0);
        }
      }
      if (((((*(byte *)((int)param_1 + 0x1489) & 4) == 0) ||
           ((*(byte *)((int)param_1 + 0x1489) & 2) == 0)) ||
          (((*(byte *)((int)param_1 + 0x148a) & 4) != 0 &&
           ((*(byte *)((int)param_1 + 0x148a) & 2) != 0)))) ||
         (FUN_00a8caf0(0x44,0,0,0), (*(byte *)((int)param_1 + 0x1489) & 0x18) == 0))
      goto LAB_00470b0c;
      if (param_1[0x128] == 0) {
        FUN_00a8caf0(0x5b,0,0,0);
      }
      if (param_1[0x128] != 1) goto LAB_00470b0c;
    }
    uVar13 = 0x5d;
LAB_00470b05:
    FUN_00a8caf0(uVar13,0,0,0);
    goto LAB_00470b0c;
  }
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(4,1,1);
  }
LAB_00470b0c:
  *(undefined1 *)((int)param_1 + 0x148a) = *(undefined1 *)((int)param_1 + 0x1489);
  param_1[0x375] = param_1[0x375] & 0xefffffff;
  return;
}

// 004717C0  FUN_004717c0  size=865  [callgraph]
void __fastcall FUN_004717c0(int param_1)

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
  *(uint *)(param_1 + 0x1128) = *(uint *)(param_1 + 0xd44) >> 0x19 & 1;
  iVar9 = FUN_00a82d50();
  if (iVar9 == 4) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      uVar10 = FUN_00468e50();
      *(undefined4 *)(param_1 + 0xe1c) = uVar10;
      goto LAB_00471813;
    }
  }
  else {
LAB_00471813:
    if (*(int *)(param_1 + 0xa84) != 0) {
      uVar10 = FUN_00468f70();
      *(undefined4 *)(param_1 + 0xe14) = uVar10;
    }
  }
  uVar10 = FUN_004691d0();
  *(undefined4 *)(param_1 + 0xe24) = uVar10;
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) | 0x80000000;
  iVar9 = FUN_00a82d50();
  if (((iVar9 == 4) || (iVar9 = FUN_00a82d50(), iVar9 == 3)) || (iVar9 = FUN_00a82d50(), iVar9 == 2)
     ) {
    iVar9 = *(int *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0x1450) = *(undefined4 *)(iVar9 + 0x40);
    *(undefined4 *)(param_1 + 0x1454) = *(undefined4 *)(iVar9 + 0x44);
    *(undefined4 *)(param_1 + 0x1458) = *(undefined4 *)(iVar9 + 0x48);
    *(undefined4 *)(param_1 + 0x145c) = *(undefined4 *)(iVar9 + 0x4c);
  }
  if (*(int *)(param_1 + 0x618) == 2) {
    *(undefined4 *)(param_1 + 0x1450) = *(undefined4 *)(param_1 + 0xe00);
    *(undefined4 *)(param_1 + 0x1454) = *(undefined4 *)(param_1 + 0xe04);
    *(undefined4 *)(param_1 + 0x1458) = *(undefined4 *)(param_1 + 0xe08);
    *(undefined4 *)(param_1 + 0x145c) = *(undefined4 *)(param_1 + 0xe0c);
  }
  iVar9 = FUN_00a82d50();
  if ((iVar9 == 2) && ((*(uint *)(param_1 + 0xdd4) & 0x40000000) != 0)) {
    *(undefined4 *)(param_1 + 0x1450) = *(undefined4 *)(param_1 + 0xd30);
    *(undefined4 *)(param_1 + 0x1454) = *(undefined4 *)(param_1 + 0xd34);
    *(undefined4 *)(param_1 + 0x1458) = *(undefined4 *)(param_1 + 0xd38);
    *(undefined4 *)(param_1 + 0x145c) = *(undefined4 *)(param_1 + 0xd3c);
    *(undefined4 *)(param_1 + 0xdf8) = 0;
    *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0x7fffffff;
  }
  iVar9 = *(int *)(param_1 + 0xa84);
  pfVar1 = (float *)(param_1 + 0x1450);
  *(undefined4 *)(param_1 + 0x1460) = *(undefined4 *)(iVar9 + 0x40);
  pfVar2 = (float *)(param_1 + 0xde0);
  *(undefined4 *)(param_1 + 0x1464) = *(undefined4 *)(iVar9 + 0x44);
  *(undefined4 *)(param_1 + 0x1468) = *(undefined4 *)(iVar9 + 0x48);
  *(undefined4 *)(param_1 + 0x146c) = *(undefined4 *)(iVar9 + 0x4c);
  local_20 = *pfVar1;
  local_1c = *(float *)(param_1 + 0x1454);
  local_18 = *(float *)(param_1 + 0x1458);
  local_14 = *(undefined4 *)(param_1 + 0x145c);
  *pfVar2 = *pfVar1;
  *(undefined4 *)(param_1 + 0xde4) = *(undefined4 *)(param_1 + 0x1454);
  *(undefined4 *)(param_1 + 0xde8) = *(undefined4 *)(param_1 + 0x1458);
  *(undefined4 *)(param_1 + 0xdec) = *(undefined4 *)(param_1 + 0x145c);
  *(undefined4 *)(param_1 + 0xdf0) = 0;
  fVar3 = *(float *)(param_1 + 0xdf8) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0xdf8) = fVar3;
  if (fVar3 < 0.0) {
    *(undefined4 *)(param_1 + 0xdf4) = 1;
    *(undefined4 *)(param_1 + 0xdf8) = 0x42700000;
  }
  iVar9 = FUN_00a979d0();
  if ((iVar9 == 0) || (*(int *)(param_1 + 0xdf4) != 0)) {
    FUN_00a8d330(param_1 + 0x40,pfVar1);
    *(undefined4 *)(param_1 + 0xdf4) = 0;
  }
  iVar9 = FUN_00aa09c0(pfVar2,0x40200000,0);
  if ((iVar9 != 0) && (iVar9 = FUN_00a8d380(), iVar9 != 0)) {
    *(undefined4 *)(param_1 + 0xdf0) = 1;
  }
  FUN_00a979f0(&local_2c);
  *pfVar2 = local_2c;
  *(undefined4 *)(param_1 + 0xde4) = local_28;
  *(undefined4 *)(param_1 + 0xde8) = local_24;
  *(undefined4 *)(param_1 + 0xdec) = 0x3f800000;
  if (*(int *)(param_1 + 0x1128) == 0) {
    if (*(int *)(param_1 + 0xdf0) != 0) goto LAB_00471b02;
  }
  else {
    iVar9 = *(int *)(param_1 + 0xe1c);
    iVar11 = FUN_00a8d3d0(6);
    if (((iVar11 == 0) && (iVar9 == 0)) ||
       (fVar3 = *(float *)(param_1 + 0x40) - *pfVar2,
       fVar8 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0xde4),
       fVar7 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0xde8),
       fVar6 = *(float *)(param_1 + 0x40) - local_20, fVar5 = *(float *)(param_1 + 0x44) - local_1c,
       fVar4 = *(float *)(param_1 + 0x48) - local_18,
       fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4 < fVar8 * fVar8 + fVar3 * fVar3 + fVar7 * fVar7
       )) goto LAB_00471b02;
  }
  local_20 = *pfVar2;
  local_1c = *(float *)(param_1 + 0xde4);
  local_18 = *(float *)(param_1 + 0xde8);
  local_14 = *(undefined4 *)(param_1 + 0xdec);
  *(uint *)(param_1 + 0xdd4) = *(uint *)(param_1 + 0xdd4) & 0x7fffffff;
LAB_00471b02:
  FUN_00a8e880(&local_20);
  FUN_00469090(&local_20);
  return;
}

// 00471B30  FUN_00471b30  size=2018  [callgraph]
undefined4 __thiscall FUN_00471b30(int *param_1,int *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 unaff_EBP;
  bool bVar11;
  float10 fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *local_14;
  int local_c;
  undefined4 local_4;
  
  piVar5 = param_2;
  local_4 = 0;
  iVar7 = FUN_00a8cab0();
  bVar4 = false;
  if (((((*(byte *)(param_1 + 0x522) & 1) != 0) || (iVar7 == 0x2e)) || (iVar7 == 0x35)) ||
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
  local_c = param_2[1];
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
  uVar10 = 1;
  param_2 = (int *)0x1;
  if ((((*puVar1 & 0x10000) != 0) && ((char)param_1[0x522] != '\0')) &&
     ((char)param_1[0x522] != *(char *)((int)param_1 + 0x148a))) {
    uVar10 = 0x41;
    param_2 = (int *)0x41;
  }
  if ((((*puVar1 & 0x8000) != 0) && ((char)param_1[0x522] != '\0')) &&
     ((char)param_1[0x522] != *(char *)((int)param_1 + 0x148a))) {
    param_2 = (int *)(uVar10 & 0xffffffbf | 0x20);
  }
  fVar12 = (float10)FUN_00ddba30((float)piVar5[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar12;
  if (param_1[0x128] == 0) {
    uVar18 = 0x3f800000;
    uVar17 = 0;
    uVar16 = 0x8000210;
    uVar15 = 0x3f800000;
    uVar14 = 0x3d088889;
    uVar13 = 1;
    sVar6 = FUN_00dde2d0(0,2);
    FUN_00aa4080(sVar6 + 0x7d,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18);
  }
  if (param_1[0x128] == 1) {
    FUN_00aa4080(0x6e,1,0x3d088889,0x3f800000,0x8000210,0,0x3f800000);
  }
  if ((4 < *(byte *)((int)piVar5 + 0x11)) && (param_1[0x534] == 0)) {
    param_1[0x4cc] = param_1[0x4cc] - (uint)*(byte *)((int)piVar5 + 0x11);
  }
  bVar3 = true;
  if ((param_1[0x536] != 0) && (*piVar5 == 0x93)) {
    param_2 = (int *)0x40000;
    local_c = 0;
    bVar3 = false;
  }
  if (iVar7 == 6) {
    bVar3 = false;
  }
  bVar11 = false;
  if (((param_1[0x128] != 0) || (param_1[0x534] != 0)) || (!bVar3)) goto LAB_00471ff5;
  if (iVar7 == 0x3e) {
    bVar11 = true;
  }
  else if ((*piVar5 == 0x42) && (iVar8 = FUN_00464ab0(), iVar8 == 0)) {
    FUN_00a8caf0(0x35,0,0,0);
    param_2 = (int *)0x2;
    local_c = 0;
    if (4 < *(byte *)((int)piVar5 + 0x11)) {
      param_1[0x4cc] = param_1[0x4cc] + (uint)*(byte *)((int)piVar5 + 0x11);
    }
  }
  iVar8 = (**(code **)(*param_1 + 0x1d8))();
  if ((iVar8 == 0) || (FUN_00a8caf0(0x37,0,0,0), *piVar5 != 0x4f)) {
LAB_00471e63:
    if ((iVar7 == 0x33) && (*piVar5 == 0x4f)) {
      FUN_00a8caf0(0x34,0,0,0);
      iVar8 = FUN_004664b0();
      if (iVar8 != 0) {
        uVar13 = 2;
        goto LAB_00471e8f;
      }
    }
  }
  else {
    if (iVar7 == 0x1e) {
      uVar13 = 0;
      iVar7 = 0x38;
    }
    else {
      if (iVar7 != 0x38) goto LAB_00471e63;
      uVar13 = 0;
    }
LAB_00471e8f:
    FUN_00a8caf0(iVar7,uVar13,0,0);
  }
  if ((((piVar5[0x24] & 0x800000U) != 0) && (bVar4)) &&
     (FUN_00a8caf0(0x36,0,0,0), param_1[0x4cc] < 1)) {
    FUN_00464b10();
  }
  if (((!bVar11) && (iVar7 = (**(code **)(*param_1 + 0x1d8))(), iVar7 == 0)) && (param_1[0x4cc] < 1)
     ) {
    iVar7 = FUN_004664b0();
    if (iVar7 == 0) {
      FUN_00464b50();
    }
    FUN_00a8caf0(0x2e,0,0,0);
    FUN_00464b10();
  }
  if ((*(byte *)(piVar5 + 0x23) & 0x20) != 0) {
    *(undefined2 *)(param_1 + 0x209) = 1;
    param_1[0x20a] = 0x78;
    FUN_00a8caf0(0x2e,0,0,0);
    FUN_00464b10();
  }
  param_1[0x532] = param_1[0x532] + local_c;
  param_1[0x533] = (int)(float)param_1[0x52c];
  if (!bVar11) {
    if (param_1[0x532] < param_1[0x52b]) {
      if (((piVar5[0x23] & 1U) == 0) || (0.0 < (float)param_1[0x53e])) {
        if ((piVar5[0x23] & 0x20000U) == 0) goto LAB_00471fc5;
        uVar13 = 0x3f;
      }
      else {
        pcVar2 = *(code **)(*param_1 + 0x358);
        param_1[0x53e] = 0x44610000;
        (*pcVar2)(0x18e,0);
        uVar13 = 0x3e;
      }
    }
    else {
      uVar13 = 0x3e;
    }
    param_1[0x532] = 0;
    FUN_00a8caf0(uVar13,0,0,0);
    bVar11 = true;
  }
LAB_00471fc5:
  if (((*(byte *)(param_1 + 0x522) & 1) != 0) && ((*piVar5 == 0x4c || (*piVar5 == 0x4b)))) {
    FUN_00a8caf0(0x3d,0,0,0);
  }
  if (*piVar5 == 0x5f) {
    param_2 = (int *)((uint)param_2 | 0x10000);
  }
LAB_00471ff5:
  if ((param_1[0x128] == 1) && (bVar3)) {
    if (param_1[0x4cc] < 1) {
      FUN_00a8caf0(0x47,0,0,0);
      FUN_00464b10();
    }
    if ((*(byte *)(piVar5 + 0x23) & 0x20) != 0) {
      *(undefined2 *)(param_1 + 0x209) = 1;
      param_1[0x20a] = 0x78;
      FUN_00a8caf0(0x47,0,0,0);
      FUN_00464b10();
    }
    if ((!bVar11) && ((piVar5[0x23] & 0x20000U) != 0)) {
      param_1[0x532] = 0;
      FUN_00a8caf0(0x48,0,0,0);
      bVar11 = true;
    }
    if (*piVar5 == 0x5f) {
      param_2 = (int *)((uint)param_2 | 0x10000);
    }
  }
  if ((param_1[0x541] == 0) && ((*piVar5 == 0x92 || ((*(byte *)(piVar5 + 0x23) & 2) != 0)))) {
    param_2 = (int *)((uint)param_2 & 0xffffffbf | 0x20);
    if ((*(byte *)(piVar5 + 0x23) & 2) != 0) {
      (**(code **)(*param_1 + 0x358))(399,0);
    }
    param_1[0x541] = 1;
    FUN_004665e0(0);
    FUN_00466660(0);
    FUN_004664e0(0);
    FUN_00466560(0);
    FUN_0046d060(0);
    FUN_0046d120(0);
  }
  (**(code **)(*param_1 + 0x30c))(local_c,0);
  if (((*(byte *)(param_1 + 0x522) & 0x10) == 0) &&
     (iVar7 = FUN_00fdbc60(), param_1[0x21c] <= iVar7)) {
    FUN_004665e0(1);
  }
  if (((*(byte *)(param_1 + 0x522) & 8) == 0) && (iVar7 = FUN_00fdbc60(), param_1[0x21c] <= iVar7))
  {
    FUN_00466660(1);
  }
  if (((*(byte *)(param_1 + 0x522) & 4) == 0) && (iVar7 = FUN_00fdbc60(), param_1[0x21c] <= iVar7))
  {
    FUN_004664e0(1);
  }
  if (((*(byte *)(param_1 + 0x522) & 2) == 0) && (iVar7 = FUN_00fdbc60(), param_1[0x21c] <= iVar7))
  {
    FUN_00466560(1);
  }
  if (((((*(byte *)(param_1 + 0x522) & 1) == 0) && (iVar7 = FUN_00fdbc60(), param_1[0x21c] <= iVar7)
       ) && (FUN_0046d060(1), !bVar11)) && (param_1[0x128] == 0)) {
    FUN_00a8caf0(0x2e,0,0,0);
  }
  if (((*(byte *)(param_1 + 0x522) & 0x80) == 0) &&
     (iVar7 = FUN_00fdbc60(), param_1[0x21c] <= iVar7)) {
    FUN_0046d120(1);
  }
  if (param_1[0x21c] < 1) {
    if (param_1[0x294] != 0) {
      FUN_0046d6e0(piVar5);
    }
    param_1[0x139] = 1;
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    if ((*(byte *)((int)piVar5 + 0x92) & 1) != 0) {
      piVar9 = (int *)FUN_00c209f0();
      (**(code **)(*piVar9 + 0x14))(0xe);
    }
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

// 00472320  Em0070::vf150  size=278  [class]
void __thiscall Em0070::vf150(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_2 == 0x37) {
      FUN_00a8caf0(0x2b,0,0,0);
      FUN_0046d780();
      return;
    }
    if (param_2 == 0x38) {
      FUN_00a8caf0(0x2c,0,0,0);
      FUN_0046d780();
      return;
    }
    if (param_2 == 0x39) {
      FUN_00a8caf0(0x2d,0,0,0);
      FUN_0046d780();
      return;
    }
    if (param_2 == 0x3a) {
      param_1[0x50c] = -0x40800000;
      FUN_00a8caf0(99,0,0,0);
      (**(code **)(*param_1 + 0x220))(0x41200000);
      FUN_0046d780();
      return;
    }
    if (param_2 == 0x3b) {
      FUN_00a8caf0(0x67,0,0,0);
      FUN_0046d780();
      return;
    }
    if (param_2 == 0x3c) {
      FUN_00a8caf0(0x68,0,0,0);
      FUN_0046d780();
    }
  }
  return;
}

// 00472440  Em0070::vf158  size=171  [class]
undefined4 Em0070::vf158(int param_1,int param_2)

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
    FUN_00dd6d80(puVar3);
  }
  if (param_1 == 0x37) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x110) {
      return 1;
    }
  }
  else if (param_1 == 0x38) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x111) {
      return 1;
    }
  }
  else if ((param_1 == 0x39) && (iVar1 = FUN_00a8cab0(), iVar1 != 0x112)) {
    return 1;
  }
  return 0;
}

// 004724F0  FUN_004724f0  size=381  [between]
void __fastcall FUN_004724f0(int *param_1)

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

// 00472670  FUN_00472670  size=1182  [between]
void __fastcall FUN_00472670(int param_1)

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
    if ((*(uint *)(param_1 + 0xdd4) & 0x20000000) == 0) {
      return;
    }
    FUN_00a8caf0(2,0,0,0);
    return;
  }
  iVar3 = FUN_00a82d50();
  if (iVar3 == 2) {
LAB_004727bd:
    FUN_00a8caf0(9,0,0,0);
    return;
  }
  iVar3 = FUN_00a82d50();
  if (iVar3 == 3) {
    FUN_00a8caf0(10,0,0,0);
    return;
  }
  iVar3 = FUN_00466a20(1);
  if (iVar3 != 0) {
    return;
  }
  iVar3 = FUN_00416910(6);
  if (iVar3 != 0) {
    FUN_00466ae0();
    return;
  }
  iVar3 = FUN_00a82d50();
  if (((iVar3 == 4) && (iVar3 = FUN_00464910(), iVar3 != 0)) && (*(int *)(param_1 + 0x1128) != 0)) {
    if ((*(float *)(param_1 + 0xa8c) <= 25.0) && (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
      return;
    }
    if ((25.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0xaa0) < 0.5235988))
    goto LAB_004727bd;
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
    if (*(int *)(param_1 + 0x1128) == 0) {
      FUN_00a8caf0(10,0,0,0);
      return;
    }
LAB_00472845:
    if (((((*(float *)(param_1 + 0xe48) < 0.0) && (iVar3 = FUN_00c15850(), iVar3 != 0)) &&
         (iVar3 = FUN_0043fa60(5), iVar3 != 0)) &&
        ((iVar3 = FUN_0046d3d0(), iVar3 == 0 && (*(float *)(param_1 + 0xaa0) < 2.0943952)))) &&
       ((*(int *)(param_1 + 0x14e4) != 0 && (iVar3 = FUN_00ac4d60(1), iVar3 == 0)))) {
      FUN_00a8caf0(9,0,0,0);
    }
    if (*(int *)(param_1 + 0x1128) != 0) {
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
      if (((*(int *)(param_1 + 0x1128) != 0) && (*(float *)(param_1 + 0x1410) < 0.0)) &&
         (iVar3 = FUN_0043fa60(5), iVar3 != 0)) {
        if ((*(float *)(param_1 + 0xa8c) <= 9.0) && (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
          FUN_0046d370();
        }
        fVar1 = *(float *)(param_1 + 0xa8c);
        if (((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) &&
            (*(float *)(param_1 + 0xa8c) <= 64.0)) && (*(float *)(param_1 + 0xaa0) < 0.34906584)) {
          FUN_00466920();
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0x1128) != 0) goto LAB_00472845;
  if (*(int *)(param_1 + 0x1118) == 0) goto LAB_00472adc;
  iVar3 = FUN_00a82d50();
  if (iVar3 == 4) {
    iVar3 = FUN_0043fa60(5);
    if (iVar3 != 0) goto LAB_00472a40;
LAB_00472a89:
    FUN_00a8caf0(9,0,0,0);
    fVar1 = *(float *)(param_1 + 0xaa0);
    if (NAN(fVar1) || 0.5235988 < fVar1 == (fVar1 == 0.5235988)) goto LAB_00472adc;
    FUN_00a8caf0(0xd,0,0,0);
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) goto LAB_00472adc;
    uVar4 = 0xe;
  }
  else {
    FUN_00a88b50(4,1);
LAB_00472a40:
    if (*(float *)(param_1 + 0x1438) <= 60.0) goto LAB_00472a89;
    if (((*(byte *)(param_1 + 0x148a) & 0x10) != 0) || (*(int *)(param_1 + 0x14e4) != 0)) {
      FUN_00466920();
      goto LAB_00472adc;
    }
    uVar4 = 0x23;
  }
  FUN_00a8caf0(uVar4,0,0,0);
LAB_00472adc:
  if ((*(int *)(param_1 + 0x1128) == 0) && (iVar3 = FUN_00a82d50(), iVar3 == 4)) {
    FUN_00a8caf0(10,0,0,0);
    return;
  }
  return;
}

// 00472B10  FUN_00472b10  size=475  [between]
void __fastcall FUN_00472b10(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(7,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    iVar3 = FUN_00fdbc60();
    if (iVar3 < *(int *)(param_1 + 0x870)) {
      *(int *)(param_1 + 0x1334) = *(int *)(param_1 + 0x1334) + 1;
      if (*(int *)(param_1 + 0x14bc) <= *(int *)(param_1 + 0x1334)) {
        *(int *)(param_1 + 0x1334) = *(int *)(param_1 + 0x14bc);
      }
    }
    sVar2 = FUN_00dde2d0(0,*(undefined2 *)(param_1 + 0x14b8));
    *(int *)(param_1 + 0x1330) =
         (int)sVar2 + *(int *)(param_1 + 0x14c0) * *(int *)(param_1 + 0x1334) +
         *(int *)(param_1 + 0x14b4);
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
    if (*(int *)(param_1 + 0x1128) != 0) {
      if ((*(float *)(param_1 + 0xa8c) <= 9.0) && (*(float *)(param_1 + 0xaa0) < 1.5707964)) {
        FUN_0046d370();
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 != 0) {
          FUN_004668c0();
        }
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if (((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) && (*(float *)(param_1 + 0xa8c) <= 64.0)
          ) && (*(float *)(param_1 + 0xaa0) < 0.34906584)) {
        FUN_00466920();
      }
    }
    if (((*(byte *)(param_1 + 0x148a) & 0x10) != 0) && ((*(byte *)(param_1 + 0x148a) & 8) != 0)) {
      FUN_00a8caf0(10,0,0,0);
    }
  }
  return;
}

// 00472CF0  FUN_00472cf0  size=941  [between]
void __fastcall FUN_00472cf0(int param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return;
  }
  if (*(int *)(param_1 + 0x618) == 0) {
    return;
  }
  iVar3 = FUN_00466a20(1);
  if (iVar3 != 0) {
    return;
  }
  if (((*(float *)(param_1 + 0xa8c) <= 9.0) && (*(float *)(param_1 + 0xaa0) < 1.0471976)) &&
     (iVar3 = FUN_00464910(), iVar3 != 0)) {
    FUN_00a8caf0(7,0,0,0);
  }
  iVar3 = FUN_00a82d50();
  if (iVar3 == 1) {
    if (*(int *)(param_1 + 0xb08) == -1) {
      FUN_00a8caf0(7,0,0,0);
      return;
    }
    FUN_00a8caf0(0,0,0,0);
    if ((*(uint *)(param_1 + 0xdd4) & 0x20000000) == 0) {
      return;
    }
    FUN_00a8caf0(2,0,0,0);
    return;
  }
  iVar3 = FUN_00a82d50();
  if ((iVar3 == 2) && (300.0 < *(float *)(param_1 + 0x920))) {
    FUN_00a8caf0(7,0,0,0);
  }
  iVar3 = FUN_00a82d50();
  if (iVar3 == 3) {
    FUN_00a8caf0(10,0,0,0);
  }
  if (0xb3 < *(int *)(param_1 + 0x1140)) {
    FUN_00a8caf0(0x12,0,0,0);
    return;
  }
  iVar3 = FUN_00a82d50();
  if (iVar3 != 4) {
    return;
  }
  iVar3 = FUN_00a82d50();
  if (iVar3 == 4) {
    if (*(int *)(param_1 + 0x1128) == 0) {
      FUN_00a8caf0(10,0,0,0);
      return;
    }
LAB_00472e77:
    if (((*(float *)(param_1 + 0xe48) < 0.0) && (iVar3 = FUN_00c15850(), iVar3 != 0)) &&
       (iVar3 = FUN_0043fa60(5), iVar3 != 0)) {
      FUN_0046d3d0();
    }
    if ((((*(int *)(param_1 + 0x1128) != 0) && (*(float *)(param_1 + 0x1410) < 0.0)) &&
        (iVar3 = FUN_0043fa60(5), iVar3 != 0)) &&
       ((*(float *)(param_1 + 0xa8c) <= 9.0 && (*(float *)(param_1 + 0xaa0) < 1.0471976)))) {
      FUN_0046d370();
      goto LAB_00472f61;
    }
  }
  else if (*(int *)(param_1 + 0x1128) != 0) goto LAB_00472e77;
  if ((*(float *)(param_1 + 0x1438) <= 60.0) ||
     ((9.0 <= *(float *)(param_1 + 0xa8c) || (iVar3 = FUN_0043fa60(5), iVar3 == 0)))) {
    if ((*(int *)(param_1 + 0x618) == 0xd) || (*(int *)(param_1 + 0x618) == 0xe)) {
      if (64.0 < *(float *)(param_1 + 0xa8c)) {
        *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x924);
      }
      if (240.0 < *(float *)(param_1 + 0x924)) {
        FUN_00a8caf0(10,0,0,0);
      }
    }
    bVar2 = *(byte *)(param_1 + 0x148a);
    if ((((((bVar2 & 0x20) == 0) &&
          (fVar1 = *(float *)(param_1 + 0xa8c), !NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0))) &&
         (*(float *)(param_1 + 0x1414) < 0.0)) &&
        ((iVar3 = FUN_0043fa60(5), iVar3 != 0 && (*(float *)(param_1 + 0xaa0) < 2.0943952)))) &&
       ((iVar3 = FUN_0043fa60(5), iVar3 != 0 &&
        ((*(int *)(param_1 + 0x14e4) == 0 && ((bVar2 & 0x90) == 0)))))) {
      FUN_00a8caf0(0x26,0,0,0);
    }
    if (*(int *)(param_1 + 0x1354) < 7) {
      return;
    }
    if (16.0 < *(float *)(param_1 + 0xa8c)) {
      return;
    }
    if (1.5707964 <= *(float *)(param_1 + 0xaa0)) {
      return;
    }
    FUN_00a8caf0(0x12,0,0,0);
    *(undefined4 *)(param_1 + 0x1354) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x1438) = 0;
  if (((*(byte *)(param_1 + 0x148a) & 0x10) == 0) && (*(int *)(param_1 + 0x14e4) == 0)) {
    FUN_00a8caf0(0x23,0,0,0);
  }
  else {
    FUN_00466920();
  }
LAB_00472f61:
  iVar3 = FUN_00464ab0();
  if (iVar3 == 0) {
    return;
  }
  FUN_00a8caf0(10,0,0,0);
  return;
}

// 004730A0  FUN_004730a0  size=1430  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_004730a0(int *param_1)

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
      if (param_1[0x44a] != 0) {
        param_1[0x24b] = 0;
      }
      if (((float)param_1[0x2a3] <= 9.0) && ((float)param_1[0x2a8] < 1.0471976)) {
        FUN_00a8caf0(0x12,0,0,0);
      }
      if (((((*(byte *)((int)param_1 + 0x148a) & 0x10) != 0) &&
           ((*(byte *)((int)param_1 + 0x148a) & 8) != 0)) &&
          ((float)param_1[0x2a3] < 25.0 != ((float)param_1[0x2a3] == 25.0))) &&
         (((float)param_1[0x2a8] < 0.5235988 && (iVar3 = FUN_0043fa60(5), iVar3 != 0)))) {
        FUN_00a8caf0(0x25,0,0,0);
      }
      if ((((*(byte *)((int)param_1 + 0x148a) & 0x10) == 0) ||
          ((*(byte *)((int)param_1 + 0x148a) & 8) == 0)) &&
         ((param_1[0x44a] != 0 &&
          ((iVar3 = FUN_0043fa60(5), iVar3 != 0 && ((float)param_1[0x2a8] < 2.0943952)))))) {
        if (((float)param_1[0x2a3] <= 16.0) && ((float)param_1[0x2a8] < 0.5235988)) {
          FUN_00a8caf0(0x25,0,0,0);
        }
        if (((((float)param_1[0x2a3] <= 9.0) && ((float)param_1[0x2a8] < 0.5235988)) &&
            (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) &&
           (((*(byte *)(param_1 + 0x12a) & 0x40) == 0 && (param_1[0x539] == 0)))) {
          bVar4 = *(byte *)((int)param_1 + 0x148a) & 0x10;
          if ((bVar4 == 0) || ((*(byte *)((int)param_1 + 0x148a) & 8) == 0)) {
            if (bVar4 == 0) {
              FUN_00a8caf0(0x1d,0,0,0);
            }
            else {
              iVar3 = FUN_00466960();
              if (iVar3 != 0) {
                FUN_00dde2d0(0,1);
              }
            }
          }
        }
        if (((param_1[0x44a] != 0) && ((float)param_1[0x504] < 0.0)) &&
           ((param_1[0x186] == 0x25 && (sVar2 = FUN_00dde2d0(0,1), sVar2 == 1)))) {
          FUN_00466920();
        }
        if (((param_1[0x4f8] != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 1)) &&
           (iVar3 = FUN_00ac4d60(5), iVar3 == 0)) {
          FUN_004669f0();
        }
      }
      iVar3 = FUN_00ac4d60(6);
      if ((iVar3 == 0) &&
         (((fVar1 = (float)param_1[0x24b], !NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0) &&
           (param_1[0x44a] == 0)) || (param_1[0x44a] != 0)))) {
        if ((param_1[0x38d] == 0) || (0x13 < param_1[0x450])) {
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
          if (param_1[0x4f8] == 0) {
            return;
          }
          if (param_1[0x44a] == 0) {
            return;
          }
          FUN_004669f0();
          return;
        }
        fVar1 = (float)param_1[0x514] - (float)param_1[0x10];
        if ((0x1d < param_1[0x458]) &&
           (fVar1 = ((float)param_1[0x516] - (float)param_1[0x12]) *
                    ((float)param_1[0x516] - (float)param_1[0x12]) + fVar1 * fVar1,
           fVar1 < 25.0 != (fVar1 == 25.0))) {
          iVar3 = FUN_00ac4d60(5);
          if (iVar3 == 0) {
            FUN_00a8caf0(0xf,0,0,0);
            if ((param_1[0x4f8] != 0) && (param_1[0x44a] != 0)) {
              FUN_004669f0();
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
      if ((iVar3 != 0) && (0xb3 < param_1[0x450])) {
        FUN_00a8caf0(0x12,0,0,0);
        return;
      }
      if ((((float)param_1[0x50e] <= 60.0) || (9.0 <= (float)param_1[0x2a3])) ||
         (iVar3 = FUN_0043fa60(5), iVar3 == 0)) {
        if (((param_1[0x44a] != 0) && ((float)param_1[0x504] < 0.0)) &&
           ((iVar3 = FUN_0043fa60(5), iVar3 != 0 &&
            (((float)param_1[0x2a3] <= 9.0 && ((float)param_1[0x2a8] < 2.0943952)))))) {
          FUN_004668c0();
          return;
        }
      }
      else {
        param_1[0x50e] = 0;
        if (((*(byte *)((int)param_1 + 0x148a) & 0x10) == 0) && (param_1[0x539] == 0)) {
          FUN_00a8caf0(0x23,0,0,0);
        }
        else {
          FUN_00466920();
        }
        iVar3 = FUN_00464ab0();
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

// 00473640  FUN_00473640  size=1553  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00473640(int *param_1)

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
      if ((iVar4 == 4) && (param_1[0x44a] == 0)) {
        FUN_00a8caf0(10,0,0,0);
        return;
      }
      if (param_1[0x187] != 0) {
        if ((float)param_1[0x24a] < (float)param_1[0x248]) {
          FUN_00a8caf0(10,0,0,0);
          iVar4 = FUN_00464ab0();
          if (((iVar4 == 0) && (param_1[0x44a] != 0)) && (iVar4 = FUN_0043fa60(5), iVar4 != 0)) {
            if (((float)param_1[0x2a3] <= 16.0) && ((float)param_1[0x2a8] < 0.5235988)) {
              FUN_00a8caf0(0x25,0,0,0);
            }
            if ((((float)param_1[0x2a3] <= 9.0) && ((float)param_1[0x2a8] < 0.5235988)) &&
               ((sVar3 = FUN_00dde2d0(0,1), sVar3 != 0 &&
                (((*(byte *)(param_1 + 0x12a) & 0x40) == 0 && (param_1[0x539] == 0)))))) {
              bVar2 = *(byte *)((int)param_1 + 0x148a) & 0x10;
              if ((bVar2 == 0) || ((*(byte *)((int)param_1 + 0x148a) & 8) == 0)) {
                if (bVar2 == 0) {
                  FUN_00a8caf0(0x1d,0,0,0);
                }
                else {
                  iVar4 = FUN_00466960();
                  if (iVar4 != 0) {
                    FUN_00dde2d0(0,1);
                  }
                }
              }
            }
            if ((((param_1[0x44a] != 0) && ((float)param_1[0x504] < 0.0)) &&
                (param_1[0x186] == 0x25)) && (sVar3 = FUN_00dde2d0(0,1), sVar3 == 1)) {
              FUN_00466920();
            }
            if (((param_1[0x4f8] != 0) && (sVar3 = FUN_00dde2d0(0,2), sVar3 == 1)) &&
               (iVar4 = FUN_00ac4d60(5), iVar4 == 0)) {
              FUN_004669f0();
            }
          }
          iVar4 = FUN_00464ab0();
          if (((iVar4 != 0) && (param_1[0x44a] != 0)) &&
             ((iVar4 = FUN_0043fa60(5), iVar4 != 0 &&
              (((float)param_1[0x2a3] < 25.0 != ((float)param_1[0x2a3] == 25.0) &&
               ((float)param_1[0x2a8] < 0.5235988)))))) {
            FUN_00a8caf0(0x25,0,0,0);
          }
          fVar1 = (float)param_1[0x2a3];
          if (((((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) &&
                (FUN_00a8caf0(10,0,0,0), param_1[0x44a] != 0)) && ((float)param_1[0x504] < 0.0)) &&
              ((iVar4 = FUN_0043fa60(5), iVar4 != 0 &&
               (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0))))) &&
             (((float)param_1[0x2a3] <= 64.0 && ((float)param_1[0x2a8] < 0.34906584)))) {
            FUN_00466920();
          }
        }
        fVar1 = (float)param_1[0x2a3];
        if (!NAN(fVar1) && 225.0 < fVar1 != (fVar1 == 225.0)) {
          FUN_00a8caf0(10,0,0,0);
        }
        iVar4 = FUN_00ac4d60(6);
        if ((iVar4 == 0) &&
           (((fVar1 = (float)param_1[0x24b], !NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0) &&
             (param_1[0x44a] == 0)) || (param_1[0x44a] != 0)))) {
          if ((param_1[0x38d] == 0) || (0x13 < param_1[0x450])) {
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
            if (param_1[0x4f8] == 0) {
              return;
            }
            if (param_1[0x44a] == 0) {
              return;
            }
            FUN_004669f0();
            return;
          }
          fVar1 = (float)param_1[0x514] - (float)param_1[0x10];
          if ((0x1d < param_1[0x458]) &&
             (fVar1 = ((float)param_1[0x516] - (float)param_1[0x12]) *
                      ((float)param_1[0x516] - (float)param_1[0x12]) + fVar1 * fVar1,
             fVar1 < 25.0 != (fVar1 == 25.0))) {
            iVar4 = FUN_00ac4d60(5);
            uVar7 = 0;
            uVar6 = 0;
            uVar5 = 0;
            if (iVar4 == 0) {
              FUN_00a8caf0(0xf,0,0,0);
              if ((param_1[0x4f8] != 0) && (param_1[0x44a] != 0)) {
                FUN_004669f0();
              }
            }
            else {
              sVar3 = FUN_00dde2d0(0,2);
              FUN_00a8caf0(sVar3 + 0x12,uVar5,uVar6,uVar7);
            }
          }
        }
        bVar2 = *(byte *)((int)param_1 + 0x148a);
        if (((((bVar2 & 0x20) == 0) &&
             (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0))) &&
            (param_1[0x44a] != 0)) &&
           (((((float)param_1[0x505] < 0.0 && (iVar4 = FUN_0043fa60(5), iVar4 != 0)) &&
             (((float)param_1[0x2a8] < 2.0943952 &&
              ((iVar4 = FUN_0043fa60(5), iVar4 != 0 && (param_1[0x539] == 0)))))) &&
            ((bVar2 & 0x90) == 0)))) {
          FUN_00a8caf0(0x26,0,0,0);
        }
        if (((60.0 < (float)param_1[0x50e]) && ((float)param_1[0x2a3] < 9.0)) &&
           (iVar4 = FUN_0043fa60(5), iVar4 != 0)) {
          param_1[0x50e] = 0;
          if (((*(byte *)((int)param_1 + 0x148a) & 0x10) == 0) && (param_1[0x539] == 0)) {
            FUN_00a8caf0(0x23,0,0,0);
            return;
          }
          iVar4 = FUN_00466920();
          if (iVar4 != 0) {
            return;
          }
        }
        if (((param_1[0x44a] != 0) && ((float)param_1[0x504] < 0.0)) &&
           ((iVar4 = FUN_0043fa60(5), iVar4 != 0 &&
            (((float)param_1[0x2a3] <= 9.0 && ((float)param_1[0x2a8] < 2.0943952)))))) {
          FUN_004668c0();
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

// 00473C60  FUN_00473c60  size=981  [between]
void __fastcall FUN_00473c60(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  byte bStack_1;
  
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
  else if (param_1[0x187] != 1) goto LAB_00474000;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if ((DAT_01bea060 & 0x2000000) != 0) {
      (**(code **)(*param_1 + 0x34c))();
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
    iVar3 = FUN_00466a20(1);
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
    bVar4 = *(byte *)((int)param_1 + 0x148a);
    bStack_1 = bVar4 & 0x10;
    if ((((((bVar4 & 0x10) == 0) || ((bVar4 & 8) == 0)) && (param_1[0x44a] != 0)) &&
        (((float)param_1[0x392] < 0.0 && (iVar3 = FUN_0043fa60(5), iVar3 != 0)))) &&
       ((float)param_1[0x2a8] < 2.0943952)) {
      if ((((float)param_1[0x2a3] < 6.25) && ((bStack_1 == 0 || ((bVar4 & 8) == 0)))) &&
         (param_1[0x539] == 0)) {
        FUN_00a8caf0(0x1b,0,0,0);
      }
      fVar1 = (float)param_1[0x2a3];
      if ((((!NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25)) && ((float)param_1[0x2a3] < 16.0)) &&
          ((*(byte *)(param_1 + 0x12a) & 0x40) == 0)) && (param_1[0x539] == 0)) {
        bVar4 = *(byte *)((int)param_1 + 0x148a) & 0x10;
        if ((bVar4 == 0) || ((*(byte *)((int)param_1 + 0x148a) & 8) == 0)) {
          if (bVar4 == 0) {
            FUN_00a8caf0(0x1d,0,0,0);
          }
          else {
            iVar3 = FUN_00466960();
            if (iVar3 != 0) {
              FUN_00dde2d0(0,1);
            }
          }
        }
      }
      fVar1 = (float)param_1[0x2a3];
      if ((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) && ((float)param_1[0x2a3] < 36.0)) {
        bVar4 = *(byte *)((int)param_1 + 0x148a);
        if ((((bVar4 & 0x10) == 0) || ((bVar4 & 8) == 0)) && (param_1[0x539] == 0)) {
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
      if (((((*(byte *)((int)param_1 + 0x148a) & 0x20) == 0) &&
           (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0))) &&
          (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) &&
         ((((float)param_1[0x505] < 0.0 && (iVar3 = FUN_0043fa60(5), iVar3 != 0)) &&
          ((param_1[0x539] == 0 && ((*(byte *)((int)param_1 + 0x148a) & 0x90) == 0)))))) {
        FUN_00a8caf0(0x26,0,0,0);
      }
    }
    if (((*(byte *)((int)param_1 + 0x148a) & 0x10) != 0) &&
       ((*(byte *)((int)param_1 + 0x148a) & 8) != 0)) {
      FUN_00a8caf0(10,0,0,0);
    }
  }
LAB_00474000:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  return;
}

// 00474040  FUN_00474040  size=136  [between]
void __fastcall FUN_00474040(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
     ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
    iVar1 = FUN_00ac4780();
    if (0 < iVar1) {
      FUN_0046d3d0();
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
     ((4 < *(byte *)(param_1 + 0xdae) &&
      ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      FUN_0046d3d0();
      return;
    }
  }
  return;
}

// 004740D0  FUN_004740d0  size=136  [between]
void __fastcall FUN_004740d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
     ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
    iVar1 = FUN_00ac4780();
    if (0 < iVar1) {
      FUN_0046d3d0();
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
     ((4 < *(byte *)(param_1 + 0xdae) &&
      ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      FUN_0046d3d0();
      return;
    }
  }
  return;
}

// 00474160  FUN_00474160  size=136  [between]
void __fastcall FUN_00474160(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
     ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
    iVar1 = FUN_00ac4780();
    if (0 < iVar1) {
      FUN_0046d3d0();
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
     ((4 < *(byte *)(param_1 + 0xdae) &&
      ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      FUN_0046d3d0();
      return;
    }
  }
  return;
}

// 004741F0  FUN_004741f0  size=162  [between]
void __fastcall FUN_004741f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
     ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
    iVar1 = FUN_00ac4780();
    if (0 < iVar1) {
      FUN_008e5c50(7);
      FUN_0046d3d0();
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
     ((4 < *(byte *)(param_1 + 0xdae) &&
      ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      FUN_008e5c50(7);
      FUN_0046d3d0();
      return;
    }
  }
  return;
}

// 004742A0  FUN_004742a0  size=136  [between]
void __fastcall FUN_004742a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
     ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
    iVar1 = FUN_00ac4780();
    if (0 < iVar1) {
      FUN_0046d3d0();
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
     ((4 < *(byte *)(param_1 + 0xdae) &&
      ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      FUN_0046d3d0();
      return;
    }
  }
  return;
}

// 00474330  FUN_00474330  size=136  [between]
void __fastcall FUN_00474330(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
     ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
    iVar1 = FUN_00ac4780();
    if (0 < iVar1) {
      FUN_0046d3d0();
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
     ((4 < *(byte *)(param_1 + 0xdae) &&
      ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      FUN_0046d3d0();
      return;
    }
  }
  return;
}

// 004743C0  FUN_004743c0  size=136  [between]
void __fastcall FUN_004743c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xf);
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
     ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
    iVar1 = FUN_00ac4780();
    if (0 < iVar1) {
      FUN_0046d3d0();
    }
  }
  iVar1 = FUN_00a8c760(0x30);
  if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
     ((4 < *(byte *)(param_1 + 0xdae) &&
      ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      FUN_0046d3d0();
      return;
    }
  }
  return;
}

// 00474450  FUN_00474450  size=158  [between]
void __fastcall FUN_00474450(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 004744F0  FUN_004744f0  size=508  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_004744f0(int *param_1)

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
      param_1[0x50d] = 1;
    }
    if (param_1[0x1d9] != 0) {
      FUN_008e5c50(7);
    }
    FUN_00940450(param_1[0x20f]);
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
    if (((param_1[0x4f8] != 0) && (sVar1 = FUN_00dde2d0(0,2), sVar1 == 1)) &&
       (iVar2 = FUN_00ac4d60(5), iVar2 == 0)) {
      FUN_004669f0();
    }
    if (((param_1[0x44a] != 0) && ((float)param_1[0x2a3] <= 9.0)) &&
       ((float)param_1[0x2a8] < 1.5707964)) {
      FUN_0046d370();
      sVar1 = FUN_00dde2d0(0,1);
      if (sVar1 != 0) {
        FUN_004668c0();
        return;
      }
    }
  }
  return;
}

// 004746F0  FUN_004746f0  size=158  [between]
void __fastcall FUN_004746f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 00474790  FUN_00474790  size=158  [between]
void __fastcall FUN_00474790(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 00474830  FUN_00474830  size=158  [between]
void __fastcall FUN_00474830(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 004748D0  FUN_004748d0  size=158  [between]
void __fastcall FUN_004748d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 00474970  FUN_00474970  size=775  [between]
void __fastcall FUN_00474970(int *param_1)

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
    FUN_00940450(param_1[0x20f]);
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
      FUN_00466ae0();
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
        FUN_004669c0();
      }
      if (((param_1[0x4f8] != 0) && (sVar2 = FUN_00dde2d0(0,2), sVar2 == 1)) &&
         (iVar3 = FUN_00ac4d60(5), iVar3 == 0)) {
        FUN_004669f0();
      }
      if (((param_1[0x44a] != 0) && ((float)param_1[0x2a3] <= 9.0)) &&
         ((float)param_1[0x2a8] < 1.5707964)) {
        FUN_0046d370();
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 != 0) {
          FUN_004668c0();
        }
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
  }
  return;
}

// 00474C90  FUN_00474c90  size=158  [between]
void __fastcall FUN_00474c90(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 00474D30  FUN_00474d30  size=783  [between]
void __fastcall FUN_00474d30(int *param_1)

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
           ((((*(byte *)((int)param_1 + 0x148a) & 0x10) == 0 ||
             ((*(byte *)((int)param_1 + 0x148a) & 8) == 0)) && (param_1[0x539] == 0)))) {
          FUN_00a8caf0(0x1b,0,0,0);
        }
        fVar1 = (float)param_1[0x2a3];
        if (((!NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25)) && ((float)param_1[0x2a3] < 16.0)) &&
           (((*(byte *)(param_1 + 0x12a) & 0x40) == 0 && (param_1[0x539] == 0)))) {
          bVar4 = *(byte *)((int)param_1 + 0x148a) & 0x10;
          if ((bVar4 == 0) || ((*(byte *)((int)param_1 + 0x148a) & 8) == 0)) {
            if (bVar4 == 0) {
              FUN_00a8caf0(0x1d,0,0,0);
            }
            else {
              iVar3 = FUN_00466960();
              if (iVar3 != 0) {
                FUN_00dde2d0(0,1);
              }
            }
          }
        }
        fVar1 = (float)param_1[0x2a3];
        if ((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) && ((float)param_1[0x2a3] < 36.0)) {
          bVar4 = *(byte *)((int)param_1 + 0x148a);
          if ((((bVar4 & 0x10) == 0) || ((bVar4 & 8) == 0)) && (param_1[0x539] == 0)) {
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
    if (((iVar3 == 0) && (param_1[0x539] != 0)) && ((*(byte *)((int)param_1 + 0x148a) & 0x18) == 0))
    {
      FUN_00a8caf0(0x29,0,0,0);
    }
    if (((param_1[0x44a] != 0) && ((float)param_1[0x2a3] <= 9.0)) &&
       ((float)param_1[0x2a8] < 1.5707964)) {
      FUN_0046d370();
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_004668c0();
        return;
      }
    }
  }
  return;
}

// 00475040  FUN_00475040  size=158  [between]
void __fastcall FUN_00475040(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 004750E0  FUN_004750e0  size=722  [between]
void __fastcall FUN_004750e0(int *param_1)

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
           ((((*(byte *)((int)param_1 + 0x148a) & 0x10) == 0 ||
             ((*(byte *)((int)param_1 + 0x148a) & 8) == 0)) && (param_1[0x539] == 0)))) {
          FUN_00a8caf0(0x1b,0,0,0);
        }
        fVar1 = (float)param_1[0x2a3];
        if (((!NAN(fVar1) && 6.25 < fVar1 != (fVar1 == 6.25)) && ((float)param_1[0x2a3] < 16.0)) &&
           (((*(byte *)(param_1 + 0x12a) & 0x40) == 0 && (param_1[0x539] == 0)))) {
          bVar4 = *(byte *)((int)param_1 + 0x148a) & 0x10;
          if ((bVar4 == 0) || ((*(byte *)((int)param_1 + 0x148a) & 8) == 0)) {
            if (bVar4 == 0) {
              FUN_00a8caf0(0x1d,0,0,0);
            }
            else {
              iVar3 = FUN_00466960();
              if (iVar3 != 0) {
                FUN_00dde2d0(0,1);
              }
            }
          }
        }
        fVar1 = (float)param_1[0x2a3];
        if ((!NAN(fVar1) && 16.0 < fVar1 != (fVar1 == 16.0)) && ((float)param_1[0x2a3] < 36.0)) {
          bVar4 = *(byte *)((int)param_1 + 0x148a);
          if ((((bVar4 & 0x10) == 0) || ((bVar4 & 8) == 0)) && (param_1[0x539] == 0)) {
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
    if (((iVar3 == 0) && (param_1[0x539] != 0)) && ((*(byte *)((int)param_1 + 0x148a) & 0x18) == 0))
    {
      FUN_00a8caf0(0x29,0,0,0);
    }
    if (((param_1[0x44a] != 0) && ((float)param_1[0x2a3] <= 9.0)) &&
       ((float)param_1[0x2a8] < 1.5707964)) {
      FUN_0046d370();
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_004668c0();
        return;
      }
    }
  }
  return;
}

// 004753C0  FUN_004753c0  size=158  [between]
void __fastcall FUN_004753c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 00475460  FUN_00475460  size=158  [between]
void __fastcall FUN_00475460(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 00475500  FUN_00475500  size=255  [between]
void __fastcall FUN_00475500(int *param_1)

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
  if ((((iVar3 != 0) && ((**(code **)(*param_1 + 0x34c))(), param_1[0x44a] != 0)) &&
      ((float)param_1[0x2a3] <= 9.0)) && ((float)param_1[0x2a8] < 1.5707964)) {
    FUN_0046d370();
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 != 0) {
      FUN_004668c0();
      return;
    }
  }
  return;
}

// 00475600  FUN_00475600  size=158  [between]
void __fastcall FUN_00475600(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 004756A0  FUN_004756a0  size=255  [between]
void __fastcall FUN_004756a0(int *param_1)

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
  if ((((iVar3 != 0) && ((**(code **)(*param_1 + 0x34c))(), param_1[0x44a] != 0)) &&
      ((float)param_1[0x2a3] <= 9.0)) && ((float)param_1[0x2a8] < 1.5707964)) {
    FUN_0046d370();
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 != 0) {
      FUN_004668c0();
      return;
    }
  }
  return;
}

// 004757A0  FUN_004757a0  size=158  [between]
void __fastcall FUN_004757a0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 00475840  FUN_00475840  size=158  [between]
void __fastcall FUN_00475840(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 004758E0  FUN_004758e0  size=158  [between]
void __fastcall FUN_004758e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 00475980  FUN_00475980  size=158  [between]
void __fastcall FUN_00475980(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar1 = FUN_00a8c760(0xf);
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
      iVar1 = FUN_00ac4780();
      if (0 < iVar1) {
        FUN_0046d3d0();
      }
    }
    iVar1 = FUN_00a8c760(0x30);
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
       ((4 < *(byte *)(param_1 + 0xdae) &&
        ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        FUN_0046d3d0();
        return;
      }
    }
  }
  else {
    FUN_00a8caf0(0x50,0,0,0);
  }
  return;
}

// 00475A20  FUN_00475a20  size=338  [between]
void __fastcall FUN_00475a20(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    FUN_00a8caf0(0x50,0,0,0);
    return;
  }
  iVar2 = FUN_00a8c760(0xf);
  if ((iVar2 != 0) && (*(float *)(param_1 + 0xa8c) <= 9.0)) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0x618) == 0x43) {
      iVar2 = FUN_00466990();
    }
    if (*(int *)(param_1 + 0x618) == 0x42) {
      iVar2 = FUN_00466960();
    }
    if (iVar2 != 0) {
LAB_00475aaf:
      FUN_00940450(*(undefined4 *)(param_1 + 0x83c));
      return;
    }
    bVar1 = *(byte *)(param_1 + 0x148a);
    if (((bVar1 & 4) == 0) || ((bVar1 & 2) == 0)) {
      iVar2 = 0;
      if ((bVar1 & 0x10) == 0) {
        iVar2 = FUN_00466990();
      }
      if ((*(byte *)(param_1 + 0x148a) & 8) == 0) {
        iVar2 = FUN_00466960();
      }
      if (iVar2 != 0) goto LAB_00475aaf;
    }
  }
  iVar2 = FUN_00a8c760(0xf);
  if ((((iVar2 != 0) && (*(int *)(param_1 + 0x1128) != 0)) && (4 < *(byte *)(param_1 + 0xdae))) &&
     ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))) {
    iVar2 = FUN_00ac4780();
    if (0 < iVar2) {
      iVar2 = FUN_0046d3d0();
      if (iVar2 != 0) {
        FUN_00940450(*(undefined4 *)(param_1 + 0x83c));
      }
    }
  }
  iVar2 = FUN_00a8c760(0x30);
  if (((iVar2 != 0) && (*(int *)(param_1 + 0x1128) != 0)) &&
     ((4 < *(byte *)(param_1 + 0xdae) &&
      ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
    iVar2 = FUN_00ac4780();
    if (2 < iVar2) {
      iVar2 = FUN_0046d3d0();
      if (iVar2 != 0) {
        FUN_00940450(*(undefined4 *)(param_1 + 0x83c));
      }
    }
  }
  return;
}

// 00475B80  Em0070::vf19C  size=210  [class]
void __thiscall Em0070::vf19C(int *param_1,int param_2,undefined4 param_3)

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
    param_1[0x50e] = (int)((float)param_1[0x50e] + 20.0);
  }
  return;
}

// 00475C60  FUN_00475c60  size=296  [callgraph]
void __fastcall FUN_00475c60(int param_1)

{
  int iVar1;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(*(undefined1 *)(param_1 + 0xe44)) {
  case 1:
    iVar1 = FUN_0046cf40();
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xc0400000;
    *(uint *)(param_1 + 0xe34) = (uint)(iVar1 == 0);
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_0046ced0(auStack_2c);
    *(char *)(param_1 + 0xe44) = *(char *)(param_1 + 0xe44) + '\x01';
    return;
  case 2:
    iVar1 = FUN_0046cf40();
    local_20 = 0xc0400000;
    local_1c = 0;
    local_18 = 0;
    *(uint *)(param_1 + 0xe38) = (uint)(iVar1 == 0);
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_0046ced0(auStack_2c);
    *(char *)(param_1 + 0xe44) = *(char *)(param_1 + 0xe44) + '\x01';
    return;
  case 3:
    iVar1 = FUN_0046cf40();
    *(uint *)(param_1 + 0xe3c) = (uint)(iVar1 == 0);
  case 0:
    local_20 = 0x40400000;
    local_1c = 0;
    local_18 = 0;
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_0046ced0(auStack_2c);
    *(char *)(param_1 + 0xe44) = *(char *)(param_1 + 0xe44) + '\x01';
    return;
  case 4:
    iVar1 = FUN_0046cf40();
    *(uint *)(param_1 + 0xe40) = (uint)(iVar1 == 0);
    *(undefined1 *)(param_1 + 0xe44) = 0;
  default:
    return;
  }
}

// 00475DA0  FUN_00475da0  size=570  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00475da0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  fStack_394 = 6.553944e-39;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    fStack_394 = 6.553971e-39;
    FUN_00a81330();
    fStack_394 = 6.553981e-39;
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      fStack_394 = 6.554007e-39;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        fStack_394 = 6.554028e-39;
        FUN_00a81330();
        fStack_394 = 6.554038e-39;
        FUN_00a7c8a0();
      }
      fStack_394 = 1.4013e-45;
      puStack_398 = (undefined4 *)0x475e07;
      iVar1 = FUN_00a12210();
      local_360 = 0xbf800000;
      puStack_39c = &local_360;
      local_35c[0] = 0.0;
      local_35c[1] = 0.0;
      pfStack_3a0 = (float *)0x475e2c;
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
      uStack_2b8 = uStack_2b8 | 0x10000000;
      local_35c[7] = 1.4013e-44;
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

// 00475FE0  FUN_00475fe0  size=136  [callgraph]
void __fastcall FUN_00475fe0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00476061. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

// 00476070  FUN_00476070  size=209  [callgraph]
void __fastcall FUN_00476070(int param_1)

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
    FUN_0046d780();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    FUN_00466d00(uVar3);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x5f,0,0,0);
  }
  FUN_00466d00(uVar3);
  return;
}

// 00476150  FUN_00476150  size=485  [callgraph]
void __fastcall FUN_00476150(int *param_1)

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
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xf2,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x375] = param_1[0x375] | 0x8000000;
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0xf3,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    FUN_00aa4080(0xf4,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      FUN_00466da0();
      FUN_00a8caf0(0x50,0,0,0);
    }
    goto LAB_00476216;
  default:
    goto switchD_004761a6_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
LAB_00476216:
  iVar1 = FUN_00a8c760(0x1f);
  if (iVar1 != 0) {
    FUN_004664e0(0);
    FUN_00466560(0);
    FUN_004665e0(0);
    FUN_00466660(0);
    FUN_0046d060(0);
  }
switchD_004761a6_default:
  iVar1 = FUN_00a8c760(10);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(0x1c), iVar1 == 0)) {
    FUN_00466d00(uVar3);
  }
  return;
}

// 00476D10  Em0070::vf32C  size=515  [class]
undefined4 __fastcall Em0070::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_260 [144];
  uint local_1d0;
  
  param_1[0x534] = 0;
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
  iVar3 = FUN_00a8ef10();
  if ((iVar3 == 0) && ((*(byte *)(param_1 + 0x130) & 1) != 0)) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
    if (param_1[0x286] != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar3 = param_1[0x19f];
    iVar6 = param_1[0x1a1] * 0x150 + iVar3;
    FUN_00445db0();
    FUN_004105d0();
    iVar4 = -1;
    bVar2 = false;
    if (iVar3 != iVar6) {
      do {
        iVar1 = *(int *)(iVar3 + 4);
        if (iVar4 <= iVar1) {
          FUN_00448f50(iVar3);
          bVar2 = true;
          iVar4 = iVar1;
        }
        iVar3 = iVar3 + 0x150;
      } while (iVar3 != iVar6);
      if (bVar2) {
        iVar3 = FUN_00a8f040(local_260);
        if (iVar3 == 0) {
          if (((local_1d0 & 0x20000) != 0) && (param_1[0x541] == 0)) {
            (**(code **)(*param_1 + 0x358))(399,0);
            FUN_004664e0(0);
            FUN_00466560(0);
            FUN_004665e0(0);
            FUN_00466660(0);
            FUN_0046d060(0);
            FUN_0046d120(0);
            param_1[0x541] = 1;
          }
          iVar3 = FUN_004693c0(local_260);
          param_1[0x534] = iVar3;
          if (iVar3 == 0) {
            if (param_1[0x538] == 0) {
              if (param_1[0x139] == 0) {
                uVar5 = FUN_00471b30(local_260);
              }
              else {
                uVar5 = FUN_00469580(local_260);
              }
              if (param_1[0x286] != 0) {
                LeaveCriticalSection(lpCriticalSection);
              }
              return uVar5;
            }
            FUN_00469500(local_260);
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

// 00476F20  FUN_00476f20  size=490  [callgraph]
void __fastcall FUN_00476f20(int *param_1)

{
  (**(code **)(*param_1 + 0x1d4))(0);
  param_1[0x538] = 0;
  switch(param_1[0x186]) {
  case 0:
    FUN_004699e0();
    return;
  case 1:
    FUN_00469d90();
    return;
  case 2:
    FUN_00469fa0();
    return;
  case 3:
    FUN_00464d40();
    return;
  case 4:
    FUN_00464d70();
    return;
  case 5:
    FUN_00464da0();
    return;
  case 7:
    FUN_00472670();
    return;
  case 8:
    FUN_0046a470();
    return;
  case 9:
  case 0xc:
  case 0xd:
  case 0xe:
    FUN_00472cf0();
    return;
  case 10:
    FUN_004730a0();
    return;
  case 0xb:
    FUN_00473640();
    return;
  case 0x10:
    FUN_00465110();
    return;
  case 0x15:
    FUN_00470b90();
    return;
  case 0x16:
    FUN_00470d30();
    return;
  case 0x17:
  case 0x18:
    FUN_00468080();
    return;
  case 0x19:
    FUN_004681b0();
    return;
  case 0x1a:
    FUN_004681d0();
    return;
  case 0x1b:
  case 0x1c:
    FUN_00474040();
    return;
  case 0x1d:
    FUN_004740d0();
    return;
  case 0x1f:
    FUN_00474160();
    return;
  case 0x20:
    FUN_004741f0();
    return;
  case 0x21:
  case 0x22:
  case 0x23:
    FUN_004742a0();
    return;
  case 0x24:
    FUN_00474330();
    return;
  case 0x25:
    FUN_004743c0();
    return;
  case 0x27:
    FUN_0046d860();
    return;
  case 0x28:
    FUN_0046dbb0();
    return;
  case 0x29:
    FUN_0046e100();
    return;
  case 0x2b:
    FUN_00466de0();
    return;
  case 0x2d:
    FUN_004672a0();
    return;
  case 0x2e:
    FUN_00474450();
    return;
  case 0x2f:
    FUN_004746f0();
    return;
  case 0x30:
    FUN_00474790();
    return;
  case 0x31:
    FUN_0046bc30();
    return;
  case 0x32:
    FUN_00474830();
    return;
  case 0x33:
    FUN_004748d0();
    return;
  case 0x34:
    FUN_00474c90();
    return;
  case 0x35:
    FUN_00475040();
    return;
  case 0x36:
    FUN_0046bc80();
    return;
  case 0x37:
    FUN_0046bcb0();
    return;
  case 0x38:
    FUN_0046bce0();
    return;
  case 0x39:
    FUN_00465750();
    return;
  case 0x3a:
    FUN_004753c0();
    return;
  case 0x3b:
    FUN_00475460();
    return;
  case 0x3c:
    FUN_00475600();
    return;
  case 0x3d:
    FUN_0046bd10();
    return;
  case 0x3e:
    FUN_004757a0();
    return;
  case 0x3f:
    FUN_00475840();
    return;
  case 0x40:
    FUN_004758e0();
    return;
  case 0x41:
    FUN_00475980();
    return;
  case 0x42:
  case 0x43:
    FUN_00475a20();
    return;
  case 0x44:
  case 0x45:
  case 0x46:
    FUN_0046beb0();
    return;
  case 0x4a:
  case 0x4b:
    FUN_0046c030();
    return;
  case 0x5e:
    FUN_00475fe0();
    return;
  case 99:
  case 0x67:
  case 0x68:
    param_1[0x538] = 1;
  }
  return;
}

// 00477680  FUN_00477680  size=95  [callgraph]
void __thiscall FUN_00477680(int *param_1,undefined4 param_2,undefined4 param_3)

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

// 004776E0  FUN_004776e0  size=620  [callgraph]
void __fastcall FUN_004776e0(int param_1)

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

// 00478520  Em0070::vf40  size=3163  [class]
undefined4 __fastcall Em0070::vf40(int *param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_88;
  int local_84;
  undefined1 local_80 [124];
  
  iVar3 = BehaviorEmBase::vf40();
  if (iVar3 != 0) {
    if (3 < (uint)param_1[0x128]) {
      param_1[0x128] = 0;
    }
    iVar3 = FUN_00ac8a50();
    param_1[0x371] = iVar3;
    param_1[0x372] = 0;
    param_1[0x373] = 0;
    if (param_1[300] == 0x20070) {
      FUN_00acf600(0x20072,"Em0070Body");
    }
    if (param_1[300] == 0x20071) {
      FUN_00acf600(0x20073,"Em0071Body");
      iVar3 = param_1[300];
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(iVar3,0x20070);
      param_1[0x536] = 1;
    }
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
    param_1[0x531] = 0x3f800000;
    sVar1 = FUN_00dde2d0(0,100);
    FUN_00a8edf0(sVar1 + 300);
    if (param_1[0x1d5] != 0) {
      FUN_00ac8570(0x1d);
      iVar3 = FUN_00fdbc60();
      FUN_00ac8570(0x1e);
      uVar2 = FUN_00fdbc60();
      if (param_1[0x536] != 0) {
        FUN_00ac8570(0x2b);
        iVar3 = FUN_00fdbc60();
        FUN_00ac8570(0x2c);
        uVar2 = FUN_00fdbc60();
        fVar10 = (float10)FUN_00ac8570(0x2d);
        param_1[0x531] = (int)(float)fVar10;
      }
      sVar1 = FUN_00dde2d0(0,uVar2);
      FUN_00a8edf0(sVar1 + iVar3);
      fVar10 = (float10)FUN_00ac8570(0x1f);
      param_1[0x523] = (int)(float)fVar10;
      fVar10 = (float10)FUN_00ac8570(0x20);
      param_1[0x524] = (int)(float)fVar10;
      fVar10 = (float10)FUN_00ac8570(0x21);
      param_1[0x525] = (int)(float)fVar10;
      fVar10 = (float10)FUN_00ac8570(0x22);
      param_1[0x526] = (int)(float)fVar10;
      fVar10 = (float10)FUN_00ac8570(0x23);
      param_1[0x527] = (int)(float)fVar10;
      FUN_00ac8570(0x24);
      iVar3 = FUN_00fdbc60();
      param_1[0x52b] = iVar3;
      FUN_00ac8570(0x25);
      iVar3 = FUN_00fdbc60();
      param_1[0x52c] = iVar3;
      if (param_1[0x536] != 0) {
        FUN_00ac8570(0x2e);
        iVar3 = FUN_00fdbc60();
        param_1[0x52b] = iVar3;
        FUN_00ac8570(0x2f);
        iVar3 = FUN_00fdbc60();
        param_1[0x52c] = iVar3;
      }
      param_1[0x533] = 0;
      param_1[0x532] = 0;
      fVar10 = (float10)FUN_00ac8570(0x29);
      param_1[0x528] = (int)(float)fVar10;
      fVar10 = (float10)FUN_00ac8570(0x27);
      param_1[0x529] = (int)(float)fVar10;
      fVar10 = (float10)FUN_00ac8570(0x28);
      param_1[0x52a] = (int)(float)fVar10;
      FUN_00ac8570(0x31);
      iVar3 = FUN_00fdbc60();
      param_1[0x52d] = iVar3;
      FUN_00ac8570(0x32);
      iVar3 = FUN_00fdbc60();
      param_1[0x52e] = iVar3;
      FUN_00ac8570(0x33);
      iVar3 = FUN_00fdbc60();
      param_1[0x52f] = iVar3;
      FUN_00ac8570(0x34);
      iVar3 = FUN_00fdbc60();
      param_1[0x530] = iVar3;
      if (param_1[0x536] != 0) {
        FUN_00ac8570(0x35);
        iVar3 = FUN_00fdbc60();
        param_1[0x52d] = iVar3;
        FUN_00ac8570(0x36);
        iVar3 = FUN_00fdbc60();
        param_1[0x52e] = iVar3;
        FUN_00ac8570(0x37);
        iVar3 = FUN_00fdbc60();
        param_1[0x52f] = iVar3;
        FUN_00ac8570(0x38);
        iVar3 = FUN_00fdbc60();
        param_1[0x530] = iVar3;
      }
    }
    param_1[0x392] = 0;
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
    param_1[0x1bb] = 1;
    param_1[0x1ba] = 0x3fc00000;
    param_1[0x1b9] = -1;
    param_1[0x1b8] = 5;
    iVar3 = FUN_008ec660(param_1,0x40200000,0x3f666666,0x41a00000,0x41a00000,0x78,7,0);
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
    local_88 = uVar4;
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
    param_1[0x45c] = param_1[0x45c] | 0x42;
    param_1[0x488] = 0;
    param_1[0x489] = 0;
    param_1[0x48a] = 0x3f800000;
    param_1[0x48b] = local_94;
    FUN_00a82870(0x3e860a92,0xbe860a92,0x3d4ccccd,0x393702d3,0x3c0efa35);
    FUN_00a82790(param_1[0x13c],5,0);
    param_1[0x490] = param_1[0x490] | 0x42;
    param_1[0x4bc] = 0;
    param_1[0x4bd] = 0;
    param_1[0x4be] = 0x3f800000;
    param_1[0x4bf] = local_94;
    FUN_00a82840(0x3eb2b8c2,0xbeb2b8c2,0x3dcccccd,0x393702d3,0x3c8efa35);
    FUN_00a82870(0x3e860a92,0xbe860a92,0x3dcccccd,0x393702d3,0x3c8efa35);
    uVar4 = FUN_00de3850(0,"_col.hkx",0);
    iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = RigidBodyCollection::RigidBodyCollection_2();
    }
    param_1[0x1ec] = iVar3;
    if (iVar3 != 0) {
      local_84 = param_1[0x13c];
      uVar6 = FUN_00de3ee0(uVar4);
      uVar4 = FUN_00de3cf0(uVar4);
      iVar3 = FUN_008f6410(local_84,uVar4,uVar6);
      if (iVar3 != 0) {
        FUN_008f2cd0(0);
        puVar5 = (undefined4 *)FUN_009f8b60();
        (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar5);
        (**(code **)(*(int *)param_1[0x1ec] + 0x108))(0x1f);
      }
    }
    if ((int *)param_1[0x1ec] != (int *)0x0) {
      iVar3 = (**(code **)(*(int *)param_1[0x1ec] + 8))();
      if (iVar3 != 0) {
        Behavior::addDefenseCollisionFromRigidBody_2(param_1[0x1ec],2);
        lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_6(local_88,0);
        lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_R_arm1");
        lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_R_arm2");
        lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_L_arm");
        lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_L_arm2");
        lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_R_leg");
        lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_R_leg2");
        lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(7,"_L_leg");
        lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(8,"_L_leg2");
      }
    }
    puVar5 = (undefined4 *)FUN_00dd3580(0x90,&DAT_01b7bd48);
    param_1[0x360] = (int)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      puVar9 = &DAT_01880a08;
      for (iVar3 = 0x24; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar5 = puVar5 + 1;
      }
      lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                (param_1[0x13c],5,param_1[0x360],4);
      FUN_00a88b50(1,0);
    }
    if ((*(byte *)(param_1 + 0x12a) & 4) != 0) {
      lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                (param_1[0x13c],5,&DAT_01880978,4);
      FUN_00a88b50(1,0);
    }
    if ((*(byte *)(param_1 + 0x12a) & 1) != 0) {
      FUN_00a88b50(4,0);
    }
    param_1[0x510] = param_1[0x14];
    param_1[0x511] = param_1[0x15];
    param_1[0x512] = param_1[0x16];
    param_1[0x513] = param_1[0x17];
    param_1[0x514] = param_1[0x510];
    param_1[0x515] = param_1[0x511];
    param_1[0x516] = param_1[0x512];
    param_1[0x517] = param_1[0x513];
    param_1[0x37e] = 0x41f00000;
    param_1[0x37d] = 1;
    param_1[0x447] = -0x40800000;
    param_1[0x446] = 0;
    param_1[0x4cd] = 0;
    sVar1 = FUN_00dde2d0(0,(short)param_1[0x52e]);
    param_1[0x4d6] = 0;
    param_1[0x4f9] = 0;
    param_1[0x504] = 0x44160000;
    param_1[0x4cc] = (int)sVar1 + param_1[0x530] * param_1[0x4cd] + param_1[0x52d];
    param_1[0x4f8] = 0;
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      param_1[0x504] = -0x40800000;
    }
    param_1[0x505] = 0x44160000;
    param_1[0x50c] = -0x40800000;
    param_1[0x509] = 0x3f800000;
    param_1[0x50a] = 0x3f800000;
    param_1[0x50b] = 0x3f800000;
    param_1[0x50d] = 0;
    param_1[0x535] = 0;
    *(undefined2 *)(param_1 + 0x522) = 0;
    *(undefined1 *)((int)param_1 + 0x148a) = 0;
    param_1[0x451] = 0x3d4ccccd;
    param_1[0x53a] = 0;
    param_1[0x450] = 0;
    param_1[0x541] = 0;
    param_1[0x542] = 0;
    param_1[0x53e] = 0;
    iVar3 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar3 != 0) {
      param_1[0x53d] = 0;
      param_1[0x53c] = 1;
      param_1[0x374] = -1;
      FUN_00ac94e0(&DAT_0163d9a8);
      iVar3 = param_1[0x128];
      uVar2 = 6;
      if (iVar3 == 0) {
        (**(code **)(*param_1 + 0x34c))();
      }
      else if (iVar3 == 1) {
        uVar2 = 0x60;
        (**(code **)(*param_1 + 0x34c))();
        FUN_00464b10();
      }
      else if (iVar3 == 2) {
        FUN_00a8caf0(5,0,0,0);
      }
      FUN_00aa4080(uVar2,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00a92f90();
      FUN_00e3f050();
      switchD_0080dbae::default();
      piVar7 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(piVar7);
      piVar7 = (int *)FUN_00ac8a30();
      param_1[0x370] = (int)piVar7;
      param_1[0x371] = piVar7[0x33];
      param_1[0x372] = *piVar7;
      param_1[0x373] = piVar7[1];
      if (param_1[0x371] == 0) {
        if ((*(byte *)(param_1 + 0x12a) & 0x20) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0x67;
        }
        (**(code **)(*param_1 + 0x358))(uVar4,param_1 + 0x418);
      }
      else {
        (**(code **)(*param_1 + 0x220))(0x41200000);
      }
      if (param_1[0x371] == 0) {
        iVar3 = FUN_00a82090("Em0070_Gun",0x30320,0);
        if (iVar3 != 0) {
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
          FUN_00a81330();
          uVar4 = FUN_00a7c8a0();
          iVar8 = FUN_00468740(uVar4);
          if (iVar8 != 0) {
            FUN_00464b90(param_1[0x13c]);
          }
          iVar8 = FUN_00a7c8a0();
          *(int **)(iVar8 + 0x518) = param_1;
          uVar4 = FUN_009f8b40();
          FUN_00a7c8a0(uVar4);
          FUN_009f8ae0();
          FUN_00ac8ad0(0,param_1[0x13c],iVar3,0x515,0xffffffff,8);
          FUN_00ac8be0(0,1);
        }
      }
      param_1[0x20b] = 5;
      param_1[0x20c] = 5;
      if (((param_1[0x12a] & 0x100U) != 0) && (param_1[0x1d9] != 0)) {
        FUN_008e59c0(2);
      }
      if ((param_1[0x12a] & 0x200U) != 0) {
        (**(code **)(*param_1 + 0x358))(0x208,0);
        (**(code **)(*param_1 + 0x110))(1);
        param_1[0x53f] = 0x42700000;
      }
      param_1[0x36a] = 0;
      param_1[0x36c] = 0;
      return 1;
    }
  }
  return 0;
}

// 00479180  Em0070::vf48  size=2910  [class]
/* WARNING: Removing unreachable block (ram,0x0047920b) */

void __fastcall Em0070::vf48(int *param_1)

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
  
  BehaviorEmBase::vf48();
  param_1[0x44a] = 1;
  local_184 = 0.0;
  iVar2 = FUN_00907640(param_1 + 0x449,&local_138,local_60);
  if (iVar2 != 0) {
    param_1[0x44a] = 0;
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
          param_1[0x44a] = 1;
          local_184 = 0.0;
        }
      }
      if (iVar5 != 0) {
        iVar2 = FUN_008f7780(iVar5);
        if ((param_1[0x2a1] != 0) && (iVar2 == param_1[0x2a1])) {
          param_1[0x44a] = 1;
          local_184 = 0.0;
        }
      }
    }
  }
  param_1[0x446] = 0;
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
          param_1[0x446] = 1;
        }
        local_188 = (float)((int)local_188 + 1);
        iVar4 = iVar4 + 0x30;
      } while ((int)local_188 < *(int *)(iVar2 + 0x14));
    }
  }
  if ((2.89 < (float)param_1[0x2a3]) || (local_184 != 0.0)) {
    fVar8 = (float)param_1[0x447] - ((float)param_1[0x244] + (float)param_1[0x244]);
    param_1[0x447] = (int)fVar8;
    if (fVar8 < -1.0 != (fVar8 == -1.0)) {
      param_1[0x447] = -0x40800000;
    }
  }
  else {
    fVar8 = (float)param_1[0x447];
    param_1[0x447] = (int)((float)param_1[0x244] + fVar8);
    if (120.0 <= (float)param_1[0x244] + fVar8) {
      param_1[0x447] = 0x42f00000;
    }
    if (90.0 < (float)param_1[0x447]) {
      param_1[0x447] = 0x42b40000;
      param_1[0x446] = 1;
    }
  }
  FUN_004717c0();
  iVar2 = FUN_00a82d50();
  if (iVar2 == 4) {
    param_1[0x542] = 1;
  }
  else if (((local_184 == 0.0) && ((float)param_1[0x2a3] <= 9.0)) &&
          ((fVar8 = (float)param_1[0x2a3], !NAN(fVar8) && 0.25 < fVar8 != (fVar8 == 0.25) &&
           (((int *)param_1[0x2a1] != (int *)0x0 &&
            (iVar2 = (**(code **)(*(int *)param_1[0x2a1] + 0x330))(), iVar2 != 0)))))) {
    FUN_00a88b50(4,1);
    param_1[0x392] = -0x40800000;
    param_1[0x44a] = 1;
  }
  if ((*(byte *)(param_1 + 0x12a) & 0x80) != 0) {
    param_1[0x44a] = 1;
  }
  if (((int *)param_1[0x2a1] != (int *)0x0) &&
     (iVar2 = (**(code **)(*(int *)param_1[0x2a1] + 0x230))(), iVar2 != 0)) {
    param_1[0x44a] = 0;
  }
  fStack_134 = 0.0;
  uStack_104 = 0;
  FUN_00ac8270(param_1 + 0x10,&fStack_134,&uStack_104);
  if ((fStack_134 != 0.0) &&
     (fVar8 = (float)param_1[0x2a3], !NAN(fVar8) && 9.0 < fVar8 != (fVar8 == 9.0))) {
    param_1[0x44a] = 0;
  }
  iVar2 = param_1[0x2a1];
  if ((iVar2 != 0) && (param_1[0x44a] != 0)) {
    param_1[0x44c] = *(int *)(iVar2 + 0x40);
    param_1[0x44d] = *(int *)(iVar2 + 0x44);
    param_1[0x44e] = *(int *)(iVar2 + 0x48);
    param_1[0x44f] = *(int *)(iVar2 + 0x4c);
    iVar2 = param_1[0x2a1];
    if ((float)param_1[0x11] + 1.8 < *(float *)(iVar2 + 0x44) !=
        ((float)param_1[0x11] + 1.8 == *(float *)(iVar2 + 0x44))) {
      param_1[0x458] = param_1[0x458] + 1;
      goto LAB_004794de;
    }
  }
  param_1[0x458] = 0;
LAB_004794de:
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
    piStack_c0 = param_1 + 0x449;
    fStack_b0 = fStack_170;
    fStack_ac = fStack_16c;
    fStack_a8 = fStack_168;
    uStack_bc = 0;
    fStack_a4 = fStack_164;
    uStack_88 = 0x3ff001b;
    uStack_84 = 8;
    fStack_a0 = fStack_180;
    uStack_80 = 0;
    pcStack_7c = "Em0070View";
    fStack_9c = fStack_17c;
    fStack_98 = fStack_178;
    fStack_94 = fStack_174;
    FUN_0090fb00(&piStack_c0);
  }
  FUN_00475c60();
  if ((param_1[0x4f8] != 0) &&
     (fVar8 = (float)param_1[0x4f9], param_1[0x4f9] = (int)(fVar8 - (float)param_1[0x244]),
     fVar8 - (float)param_1[0x244] < 0.0)) {
    param_1[0x4f8] = 0;
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
  fVar6 = (float10)FUN_00ddba30((float)param_1[0x2a7] - (float)param_1[0x4d6]);
  bVar1 = fVar6 * fVar6 < (float10)0.6168503 != (fVar6 * fVar6 == (float10)0.6168503);
  if (bVar1) {
    fStack_178 = 20.0;
  }
  iVar2 = param_1[0x458];
  if (0xe < iVar2) {
    fStack_178 = 25.0;
  }
  fVar8 = (float)param_1[0x4d6];
  ppiVar9 = &piStack_c0;
  D3DXMatrixRotationY(ppiVar9,fVar8);
  piVar3 = param_1 + 4;
  D3DXMatrixMultiply(auStack_58,auStack_c8,piVar3);
  fVar6 = (float10)FUN_00ddba30((float)param_1[0x4d6] + 0.017453292);
  param_1[0x4d6] = (int)(float)fVar6;
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
    FUN_00477950(auStack_ec,param_1 + 0x10,&iStack_15c);
    if (0xe < iVar2 || bVar1) {
      param_1[0x4f8] = 1;
      param_1[0x4fc] = iStack_15c;
      param_1[0x4fd] = iStack_158;
      param_1[0x4fe] = iStack_154;
      param_1[0x4ff] = iStack_150;
      param_1[0x500] = (int)fStack_17c;
      param_1[0x501] = (int)fStack_178;
      param_1[0x502] = (int)fStack_174;
      param_1[0x503] = (int)fStack_170;
      param_1[0x4f9] = 0x41200000;
    }
    cXml::cXml_7();
  }
  param_1[0x448] = 0;
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
    param_1[0x448] = 1;
  }
  fVar8 = (float)param_1[0x392];
  if (!NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0)) {
    param_1[0x392] = (int)((float)param_1[0x392] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x504] != ((float)param_1[0x504] == 0.0)) {
    param_1[0x504] = (int)((float)param_1[0x504] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x505] != ((float)param_1[0x505] == 0.0)) {
    param_1[0x505] = (int)((float)param_1[0x505] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x533] != ((float)param_1[0x533] == 0.0)) {
    param_1[0x533] = (int)((float)param_1[0x533] - (float)param_1[0x244]);
  }
  if ((float)param_1[0x533] < 0.0) {
    param_1[0x532] = 0;
  }
  fVar8 = (float)param_1[0x50c];
  if (!NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0)) {
    param_1[0x50c] = (int)((float)param_1[0x50c] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x53e] != ((float)param_1[0x53e] == 0.0)) {
    param_1[0x53e] = (int)((float)param_1[0x53e] - (float)param_1[0x244]);
  }
  if ((param_1[0x540] != 0) &&
     (fVar8 = (float)param_1[0x53f], param_1[0x53f] = (int)(fVar8 - (float)param_1[0x244]),
     fVar8 - (float)param_1[0x244] < 0.0)) {
    (**(code **)(*param_1 + 0x110))(0);
  }
  if ((float)param_1[0x50c] <= 0.0) {
    param_1[0x509] = (int)((1.0 - (float)param_1[0x509]) * 0.3 + (float)param_1[0x509]);
    param_1[0x50a] = (int)((float)param_1[0x50a] + (1.0 - (float)param_1[0x50a]) * 0.3);
    param_1[0x50b] = (int)((float)param_1[0x50b] + (1.0 - (float)param_1[0x50b]) * 0.3);
    if (param_1[0x50d] != 0) {
      FUN_00eaa6e0(0x41200000,0);
      param_1[0x50d] = 0;
    }
  }
  else {
    param_1[0x509] =
         (int)(((float)param_1[0x506] - (float)param_1[0x509]) * 0.2 + (float)param_1[0x509]);
    param_1[0x50a] =
         (int)(((float)param_1[0x507] - (float)param_1[0x50a]) * 0.2 + (float)param_1[0x50a]);
    param_1[0x50b] =
         (int)(((float)param_1[0x508] - (float)param_1[0x50b]) * 0.2 + (float)param_1[0x50b]);
    iVar2 = FUN_00a8e520();
    if (iVar2 != 0) {
      param_1[0x50c] = 0;
    }
    fStack_17c = 0.0;
    fStack_178 = 0.0;
    fStack_174 = 0.0;
    FUN_00c593a0(param_1[0x13c],0xffffffff,&fStack_17c,0x40600000,0x3fc00000,0x26,8);
  }
  fVar8 = (float)param_1[0x2a8];
  if (NAN(fVar8) || 1.9198622 < fVar8 == (fVar8 == 1.9198622)) {
    fVar8 = (float)param_1[0x50e] - (float)param_1[0x244] * 10.0;
    param_1[0x50e] = (int)fVar8;
    if (fVar8 < 0.0) {
      param_1[0x50e] = 0;
      return;
    }
  }
  else {
    fVar8 = (float)param_1[0x244] + (float)param_1[0x50e];
    param_1[0x50e] = (int)fVar8;
    if (!NAN(fVar8) && 120.0 < fVar8 != (fVar8 == 120.0)) {
      param_1[0x50e] = 0x42f00000;
      return;
    }
  }
  return;
}

// 00479CE0  Em0070::vf50  size=100  [class]
void __fastcall Em0070::vf50(int param_1)

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
  FUN_004776e0();
  FUN_00ac95d0();
  *(undefined4 *)(param_1 + 0x1150) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x1154) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x1158) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x115c) = *(undefined4 *)(param_1 + 0x4c);
  return;
}

// 00479D50  FUN_00479d50  size=56  [callgraph]
void __fastcall FUN_00479d50(int param_1)

{
  if (*(int *)(param_1 + 0xa18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
  }
  FUN_00476f20();
  FUN_0046d1e0();
  if (*(int *)(param_1 + 0xa18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
  }
  return;
}

// 0047BD50  Em0070::vf4C  size=609  [class]
void __fastcall Em0070::vf4C(int param_1)

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
  *(undefined4 *)(param_1 + 0x1110) = 0;
  uVar2 = *(undefined4 *)(param_1 + 0x94);
  uVar1 = FUN_00ac45b0(uVar6,uVar2,0x3f860a92,0x40800000);
  uVar2 = lib::StaticArray<Entity*,32>::StaticArray<Entity*,32>_4(uVar1,uVar6,uVar2,uVar7,uVar8);
  *(undefined4 *)(param_1 + 0x1110) = uVar2;
  *(undefined4 *)(param_1 + 0x1114) = 0;
  if (*(int *)(param_1 + 0xa84) != 0) {
    fVar5 = (float10)FUN_00ddba30(*(float *)(*(int *)(param_1 + 0xa84) + 0x94) -
                                  *(float *)(param_1 + 0x94));
    if (((float10)2.3561945 < fVar5) || (fVar5 < (float10)-2.3561945)) {
      *(undefined4 *)(param_1 + 0x1114) = 1;
    }
    iVar3 = *(int *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0x1320) = *(undefined4 *)(iVar3 + 0x40);
    *(undefined4 *)(param_1 + 0x1324) = *(undefined4 *)(iVar3 + 0x44);
    *(undefined4 *)(param_1 + 0x1328) = *(undefined4 *)(iVar3 + 0x48);
    *(undefined4 *)(param_1 + 0x132c) = *(undefined4 *)(iVar3 + 0x4c);
  }
  *(undefined4 *)(param_1 + 0x14e4) = 0;
  iVar3 = FUN_00c15ab0();
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x14e4) = 1;
  }
  BehaviorEmBase::vf4C();
  *(undefined4 *)(param_1 + 0x14ec) = 0;
  if (*(int *)(param_1 + 0xa18) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
  }
  FUN_00476f20();
  FUN_0046d1e0();
  if (*(int *)(param_1 + 0xa18) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa00));
  }
  FUN_0047ba10();
  *(float *)(param_1 + 0x50) =
       *(float *)(param_1 + 0x1310) * *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x58) =
       *(float *)(param_1 + 0x1318) * *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x58);
  fVar5 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1310) = (float)((float10)*(float *)(param_1 + 0x1310) * fVar5);
  *(float *)(param_1 + 0x1314) = (float)((float10)*(float *)(param_1 + 0x1314) * fVar5);
  *(float *)(param_1 + 0x1318) = (float)((float10)*(float *)(param_1 + 0x1318) * fVar5);
  *(float *)(param_1 + 0x131c) = (float)(fVar5 * (float10)*(float *)(param_1 + 0x131c));
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

// 00AACAF0  Em0070::Em0070  size=199  [class]
undefined4 * __fastcall Em0070::Em0070(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00904d60();
  FUN_00904d60();
  iVar1 = 1;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a7c930();
  FUN_00a603a0();
  FUN_00a7c930();
  return param_1;
}

// 00AACBC0  Em0070::vf04  size=6  [class]
undefined * Em0070::vf04(void)

{
  return &DAT_01b34d50;
}

// 00AACBD0  Em0070::vf140  size=7  [class]
float10 Em0070::vf140(void)

{
  return (float10)6.0;
}

// 00AACBE0  Em0070::vf144  size=7  [class]
float10 Em0070::vf144(void)

{
  return (float10)6.1;
}

// 00AACBF0  Em0070::vf17C  size=3  [class]
undefined4 Em0070::vf17C(void)

{
  return 0;
}

// 00AACC00  Em0070::vf180  size=3  [class]
undefined4 Em0070::vf180(void)

{
  return 0;
}

// 00AACC10  Em0070::vf20C  size=7  [class]
float10 Em0070::vf20C(void)

{
  return (float10)1.5;
}

// 00AACC20  FUN_00aacc20  size=132  [callgraph]
void FUN_00aacc20(void)

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
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00AB6E90  Em0070::vf00  size=30  [class]
undefined4 __thiscall Em0070::vf00(undefined4 param_1,byte param_2)

{
  FUN_00aacc20();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


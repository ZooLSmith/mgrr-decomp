// src/enemy/emc200/Emc200.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00808890..00AB9FF0, 73 functions

#include "mgrr.h"
#include "Emc200.h"

// 00808890  Emc200::setEmSetInfo  size=54  [class]
undefined4 __thiscall Emc200::setEmSetInfo(int param_1,int param_2)

{
  FUN_00aa0920(*(undefined4 *)(param_2 + 0x5c));
  if (*(int *)(*(int *)(param_1 + 0x7d8) + 0x810) != 0) {
    FUN_00a8d580(0x1000000);
  }
  return 1;
}

// 008088D0  Emc200::vf54  size=79  [class]
void __fastcall Emc200::vf54(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x1e30);
  fVar2 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x1e38);
  *(float *)(param_1 + 0x1d70) = *(float *)(param_1 + 0x1d70) + fVar1;
  *(float *)(param_1 + 0x1d78) = *(float *)(param_1 + 0x1d78) + fVar2;
  *(float *)(param_1 + 0x1d80) = *(float *)(param_1 + 0x1d80) + fVar1;
  *(float *)(param_1 + 0x1d88) = fVar2 + *(float *)(param_1 + 0x1d88);
  BehaviorEmBase::vf54();
  return;
}

// 00808920  Emc200::vf6C  size=115  [class]
void __thiscall Emc200::vf6C(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x50) - *param_2;
  fVar2 = *(float *)(param_1 + 0x58) - param_2[2];
  Bh0064::vf6C(param_2);
  *(float *)(param_1 + 0x1d70) = *(float *)(param_1 + 0x1d70) + fVar1;
  *(float *)(param_1 + 0x1d78) = *(float *)(param_1 + 0x1d78) + fVar2;
  *(float *)(param_1 + 0x1d80) = *(float *)(param_1 + 0x1d80) + fVar1;
  *(float *)(param_1 + 0x1d88) = fVar2 + *(float *)(param_1 + 0x1d88);
  return;
}

// 008089A0  Emc200::vf70  size=77  [class]
void __thiscall Emc200::vf70(int param_1,float *param_2)

{
  Bh0064::vf70(param_2);
  *(float *)(param_1 + 0x1d70) = *param_2 + *(float *)(param_1 + 0x1d70);
  *(float *)(param_1 + 0x1d78) = param_2[2] + *(float *)(param_1 + 0x1d78);
  *(float *)(param_1 + 0x1d80) = *(float *)(param_1 + 0x1d80) + *param_2;
  *(float *)(param_1 + 0x1d88) = param_2[2] + *(float *)(param_1 + 0x1d88);
  return;
}

// 008089F0  Emc200::vf14C  size=81  [class]
bool Emc200::vf14C(int param_1)

{
  if ((((((param_1 != 0x12) && (param_1 != 0x88)) && (param_1 != 0x13)) &&
       ((param_1 != 0x14 && (param_1 != 0x15)))) &&
      ((param_1 != 0x16 && ((param_1 != 0x17 && (param_1 != 0x18)))))) &&
     ((param_1 != 0x19 && (param_1 != 0x86)))) {
    return param_1 == 0x87;
  }
  return true;
}

// 00808A50  Emc200::vf150  size=209  [class]
void __thiscall Emc200::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return;
  }
  FUN_00a7c950();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  *(int *)(param_1 + 0xe90) = param_2;
  if (param_2 != 0x12) {
    if (param_2 == 0x88) {
      uVar1 = 0x33;
      goto LAB_00808b0b;
    }
    if ((param_2 != 0x14) && (param_2 != 0x13)) {
      if (param_2 == 0x15) {
        uVar1 = 0x34;
      }
      else if ((param_2 == 0x16) || (param_2 == 0x17)) {
        uVar1 = 0x35;
      }
      else if ((param_2 == 0x18) || (param_2 == 0x19)) {
        uVar1 = 0x36;
      }
      else if (param_2 == 0x86) {
        uVar1 = 0x3a;
      }
      else {
        if (param_2 != 0x87) {
          return;
        }
        uVar1 = 0x3b;
      }
      goto LAB_00808b0b;
    }
  }
  uVar1 = 0x32;
LAB_00808b0b:
  *(undefined4 *)(param_1 + 0xea0) = 1;
  FUN_00a8caf0(uVar1,0,0,0);
  return;
}

// 00808B30  Emc200::vf158  size=73  [class]
undefined4 Emc200::vf158(int param_1)

{
  int iVar1;
  
  if ((((((param_1 == 0x12) || (param_1 == 0x88)) || (param_1 == 0x14)) ||
       ((param_1 == 0x13 || (param_1 == 0x15)))) ||
      ((param_1 == 0x16 || ((param_1 == 0x17 || (param_1 == 0x18)))))) || (param_1 == 0x19)) {
    iVar1 = FUN_00ac82f0();
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

// 00808B80  Emc200::vf184  size=6  [class]
undefined4 Emc200::vf184(void)

{
  return 0xffffffff;
}

// 00808B90  Emc200::vf188  size=3  [class]
void Emc200::vf188(void)

{
  return;
}

// 00808BB0  FUN_00808bb0  size=72  [between]
void __fastcall FUN_00808bb0(int param_1)

{
  if (((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0x61c) == 4)) &&
     ((3 < *(int *)(param_1 + 0x2080) ||
      ((1.5707964 < *(float *)(param_1 + 0xaa0) || (0x3c < *(int *)(param_1 + 0x2090))))))) {
    *(undefined4 *)(param_1 + 0x61c) = 5;
  }
  return;
}

// 00808FC0  FUN_00808fc0  size=194  [between]
void FUN_00808fc0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0xda0) = 1;
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0xda0) = 1;
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0xda0) = 1;
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0xda0) = 1;
      }
    }
  }
  return;
}

// 00809090  FUN_00809090  size=219  [between]
void __fastcall FUN_00809090(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_008d5180(*(undefined4 *)(param_1 + 0xa88));
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_008d5180(*(undefined4 *)(param_1 + 0xa88));
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_008d5180(*(undefined4 *)(param_1 + 0xa88));
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_008d5180(*(undefined4 *)(param_1 + 0xa88));
      }
    }
  }
  return;
}

// 00809170  Emc200::vf1A4  size=307  [class]
void __thiscall Emc200::vf1A4(int param_1,int *param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  if ((((param_3 & 1) != 0) && (iVar1 != 0)) && (iVar2 = FUN_00ac45b0(), iVar1 == iVar2)) {
    *(undefined4 *)(param_1 + 0x1dec) = 1;
    *(undefined4 *)(param_1 + 0x1df0) = 1;
  }
  if (((*param_2 != 0x146) && ((param_3 & 0xe) != 0)) &&
     (*(undefined4 *)(param_1 + 0x1df4) = 1, iVar1 != 0)) {
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xb3)) {
      *(undefined4 *)(param_1 + 0x207c) = 1;
    }
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xb4)) {
      *(undefined4 *)(param_1 + 0x207c) = 1;
    }
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xb1)) {
      *(undefined4 *)(param_1 + 0x207c) = 1;
    }
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xb2)) {
      *(undefined4 *)(param_1 + 0x207c) = 1;
    }
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xaf)) {
      *(undefined4 *)(param_1 + 0x207c) = 1;
    }
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xb0)) {
      *(undefined4 *)(param_1 + 0x207c) = 1;
    }
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xb5)) {
      *(undefined4 *)(param_1 + 0x207c) = 1;
    }
  }
  return;
}

// 008092D0  FUN_008092d0  size=53  [between]
void __fastcall FUN_008092d0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x2410);
  iVar2 = 0x12;
  do {
    (**(code **)(*piVar1 + 8))(0x3f800000,0,0);
    piVar1 = piVar1 + 0x2c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00809310  FUN_00809310  size=316  [between]
void __fastcall FUN_00809310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a8c760(0x32);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x2058) == 1) {
      *(undefined4 *)(param_1 + 0x2058) = 0;
      FUN_008f0450(&DAT_016483ec,0x10000,1);
      uVar2 = 1;
      goto LAB_00809377;
    }
  }
  else if (*(int *)(param_1 + 0x2058) == 0) {
    *(undefined4 *)(param_1 + 0x2058) = 1;
    FUN_008f0450(&DAT_016483ec,0x10000,0);
    uVar2 = 0;
LAB_00809377:
    FUN_008f0450(&DAT_016483e4,0x10000,uVar2);
  }
  iVar1 = FUN_00a8c760(0x33);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x205c) != 1) goto LAB_008093d4;
    *(undefined4 *)(param_1 + 0x205c) = 0;
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x205c) != 0) goto LAB_008093d4;
    *(undefined4 *)(param_1 + 0x205c) = 1;
    uVar2 = 0;
  }
  FUN_008f0450(&DAT_016483dc,0x10000,uVar2);
LAB_008093d4:
  iVar1 = FUN_00a8c760(0x34);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x2060) != 1) {
      return;
    }
    *(undefined4 *)(param_1 + 0x2060) = 0;
    FUN_008f0450("_body",0x10000,1);
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x2060) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x2060) = 1;
    FUN_008f0450("_body",0x10000,0);
    uVar2 = 0;
  }
  FUN_008f0450("_core",0x10000,uVar2);
  return;
}

// 00809570  FUN_00809570  size=220  [between]
void __fastcall FUN_00809570(int param_1)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  short local_20 [16];
  
  uVar2 = *(uint *)(param_1 + 0x2100) & 0x80000007;
  local_20[0] = 0x16;
  local_20[1] = 0xb;
  local_20[2] = 0x1b;
  local_20[3] = 0x1a;
  local_20[4] = 0x16;
  local_20[5] = 0x14;
  local_20[6] = 0xb;
  local_20[7] = 0x1b;
  local_20[8] = 0x18;
  local_20[9] = 0x1a;
  local_20[10] = 0xb;
  local_20[0xb] = 0x14;
  local_20[0xc] = 0xb;
  local_20[0xd] = 0x1a;
  local_20[0xe] = 0x18;
  local_20[0xf] = 0xb;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
  }
  sVar3 = local_20[uVar2];
  if ((*(int *)(param_1 + 0x1dd4) == 1) && (sVar3 == 0x1b)) {
    sVar3 = 0xb;
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      sVar3 = 0x16;
    }
  }
  if (*(int *)(param_1 + 0x31b0) != 0) {
    uVar2 = *(uint *)(param_1 + 0x20fc) & 0x80000007;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
    }
    sVar3 = local_20[uVar2 + 8];
  }
  FUN_00a8caf0((int)sVar3,0,0,0);
  *(int *)(param_1 + 0x2100) = *(int *)(param_1 + 0x2100) + 1;
  if (7 < *(int *)(param_1 + 0x2100)) {
    *(undefined4 *)(param_1 + 0x2100) = 0;
  }
  return;
}

// 00809650  FUN_00809650  size=172  [between]
void __fastcall FUN_00809650(int param_1)

{
  short sVar1;
  uint uVar2;
  short local_20 [16];
  
  uVar2 = *(uint *)(param_1 + 0x2104) & 0x80000007;
  local_20[0] = 0x18;
  local_20[1] = 0xb;
  local_20[2] = 0x18;
  local_20[3] = 0x14;
  local_20[4] = 0xb;
  local_20[5] = 0x14;
  local_20[6] = 0x18;
  local_20[7] = 0xb;
  local_20[8] = 0x18;
  local_20[9] = 0x1a;
  local_20[10] = 0x18;
  local_20[0xb] = 0x14;
  local_20[0xc] = 0xb;
  local_20[0xd] = 0x1a;
  local_20[0xe] = 0x18;
  local_20[0xf] = 0xb;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
  }
  sVar1 = local_20[uVar2];
  if (*(int *)(param_1 + 0x31b0) != 0) {
    uVar2 = *(uint *)(param_1 + 0x20fc) & 0x80000007;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
    }
    sVar1 = local_20[uVar2 + 8];
  }
  FUN_00a8caf0((int)sVar1,0,0,0);
  *(int *)(param_1 + 0x2104) = *(int *)(param_1 + 0x2104) + 1;
  if (7 < *(int *)(param_1 + 0x2104)) {
    *(undefined4 *)(param_1 + 0x2104) = 0;
  }
  return;
}

// 00809700  FUN_00809700  size=206  [between]
void __thiscall FUN_00809700(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x2130) = 0xffffffff;
  if ((*(ushort *)(param_1 + 0xe94) & 0x107) != 0x107) {
    if (param_2 != 0) {
      (**(code **)(*(int *)(param_1 + 0x1be0) + 8))(0x41200000,0,0);
      *(undefined4 *)(param_1 + 0xe98) = 1;
      if (*(int *)(param_1 + 0xa84) != 0) {
        FUN_00b7ab80(0x42700000,0x3c23d70a);
      }
    }
    *(undefined4 *)(param_1 + 0x2138) = 0x41200000;
    *(undefined4 *)(param_1 + 0x2130) = 0xc;
    *(undefined4 *)(param_1 + 0x2134) = 0x42700000;
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x2138) = 0xbf800000;
    }
    FUN_00c81b30();
    return;
  }
  return;
}

// 008097D0  FUN_008097d0  size=196  [between]
void __thiscall FUN_008097d0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x2130) = 0xffffffff;
  if ((*(byte *)(param_1 + 0xe94) & 0xc0) != 0xc0) {
    if (param_2 != 0) {
      (**(code **)(*(int *)(param_1 + 0x1be0) + 8))(0x41200000,0,0);
      *(undefined4 *)(param_1 + 0xe98) = 1;
      if (*(int *)(param_1 + 0xa84) != 0) {
        FUN_00b7ab80(0x42700000,0x3c23d70a);
      }
    }
    *(undefined4 *)(param_1 + 0x2138) = 0x41200000;
    *(undefined4 *)(param_1 + 0x2130) = 0x10;
    *(undefined4 *)(param_1 + 0x2134) = 0x42700000;
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x2138) = 0xbf800000;
    }
    FUN_00c81b30();
    return;
  }
  return;
}

// 008098A0  FUN_008098a0  size=196  [between]
void __thiscall FUN_008098a0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x2130) = 0xffffffff;
  if ((*(byte *)(param_1 + 0xe94) & 0x30) != 0x30) {
    if (param_2 != 0) {
      (**(code **)(*(int *)(param_1 + 0x1be0) + 8))(0x41200000,0,0);
      *(undefined4 *)(param_1 + 0xe98) = 1;
      if (*(int *)(param_1 + 0xa84) != 0) {
        FUN_00b7ab80(0x42700000,0x3c23d70a);
      }
    }
    *(undefined4 *)(param_1 + 0x2138) = 0x41200000;
    *(undefined4 *)(param_1 + 0x2130) = 0xe;
    *(undefined4 *)(param_1 + 0x2134) = 0x42700000;
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x2138) = 0xbf800000;
    }
    FUN_00c81b30();
    return;
  }
  return;
}

// 008099D0  FUN_008099d0  size=150  [between]
void __fastcall FUN_008099d0(int param_1)

{
  code *pcVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x2130) != -1) {
    fVar2 = *(float *)(param_1 + 0x2138) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x2138) = fVar2;
    if (fVar2 < 0.0) {
      *(float *)(param_1 + 0x2134) = *(float *)(param_1 + 0x2134) - *(float *)(param_1 + 0x910);
    }
    if (*(float *)(param_1 + 0x2134) < 0.0) {
      *(undefined4 *)(param_1 + 0x2138) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x2130) = 0xffffffff;
      pcVar1 = *(code **)(*(int *)(param_1 + 0x1be0) + 8);
      *(undefined4 *)(param_1 + 0x2134) = 0xbf800000;
      *(undefined4 *)(param_1 + 0xe98) = 0;
      (*pcVar1)(0x41200000,0,0);
      return;
    }
  }
  return;
}

// 00809B30  FUN_00809b30  size=153  [between]
void __fastcall FUN_00809b30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0085cfb0(1);
  if (iVar1 != 0) {
    FUN_00dc1300(0);
    FUN_00a94bc0(1,0);
    FUN_009f8b10();
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e6d00();
    }
    DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
    FUN_00a7c950();
    FUN_00b90990();
    *(undefined4 *)(param_1 + 0x890) = 0;
    *(undefined4 *)(param_1 + 0x894) = 0;
    *(undefined4 *)(param_1 + 0x898) = 0;
    *(undefined4 *)(param_1 + 0x1020) = 0;
    *(undefined4 *)(param_1 + 0x1024) = 0;
    *(undefined4 *)(param_1 + 0x1028) = 0;
    FUN_00e5e0c0("core_se_btl_qte_out",param_1,0xffffffff,0);
  }
  return;
}

// 0080A030  FUN_0080a030  size=153  [between]
void __fastcall FUN_0080a030(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0085cfb0(1);
  if (iVar1 != 0) {
    FUN_00dc1300(0);
    FUN_00a94bc0(1,0);
    FUN_009f8b10();
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e6d00();
    }
    DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
    FUN_00a7c950();
    FUN_00b90990();
    *(undefined4 *)(param_1 + 0x890) = 0;
    *(undefined4 *)(param_1 + 0x894) = 0;
    *(undefined4 *)(param_1 + 0x898) = 0;
    *(undefined4 *)(param_1 + 0x1020) = 0;
    *(undefined4 *)(param_1 + 0x1024) = 0;
    *(undefined4 *)(param_1 + 0x1028) = 0;
    FUN_00e5e0c0("core_se_btl_qte_out",param_1,0xffffffff,0);
  }
  return;
}

// 0080A4F0  FUN_0080a4f0  size=1259  [between]
void __fastcall FUN_0080a4f0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar5 = 0;
    do {
      puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar5);
      *puVar1 = *puVar1 & 0xfffffffe;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar4 < *(short *)(param_1 + 0x324));
  }
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"R_side"), iVar3 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
        *puVar1 = *puVar1 | 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar4 < *(short *)(param_1 + 0x324));
  }
  iVar4 = FUN_00a81330();
  if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)
     ) {
    E3_EnemyBoardDebrisSokushi::vf4C();
  }
  iVar4 = FUN_00a81330();
  if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)
     ) {
    E3_EnemyBoardDebrisSokushi::vf4C();
  }
  iVar4 = 0;
  if ((*(byte *)(param_1 + 0xe94) & 1) == 0) {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"R_side_in_head_top"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
  }
  else {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"head_top"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
    iVar4 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"R_side_in_head_top"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
  }
  iVar4 = 0;
  if ((*(ushort *)(param_1 + 0xe94) & 0x100) == 0) {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"R_side_in_head_down"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
  }
  else {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"head_down"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      iVar4 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"R_side_in_head_down"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
  }
  if (((*(byte *)(param_1 + 0xe94) & 8) != 0) && (iVar4 = 0, 0 < *(short *)(param_1 + 0x324))) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_016413d4), iVar3 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar4 < *(short *)(param_1 + 0x324));
  }
  iVar4 = 0;
  if ((*(byte *)(param_1 + 0xe94) & 0x40) == 0) {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"R_side_in_R_reg"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
  }
  else {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"R_reg"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
    iVar4 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"R_side_in_R_reg"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
  }
  if (((*(byte *)(param_1 + 0xe94) & 0x10) != 0) && (iVar4 = 0, 0 < *(short *)(param_1 + 0x324))) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"L_reg"), iVar3 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar4 < *(short *)(param_1 + 0x324));
  }
  if ((*(byte *)(param_1 + 0xe94) & 4) != 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
  }
  if ((*(byte *)(param_1 + 0xe94) & 2) != 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
  }
  if ((*(byte *)(param_1 + 0xe94) & 0x80) != 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
  }
  if ((*(byte *)(param_1 + 0xe94) & 0x20) == 0) {
    return;
  }
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  return;
}

// 0080AA10  FUN_0080aa10  size=1266  [between]
void __fastcall FUN_0080aa10(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  (**(code **)(*param_1 + 0x1c))();
  if (0 < (short)param_1[0xc9]) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      puVar1 = (uint *)(param_1[200] + 0x38 + iVar5);
      *puVar1 = *puVar1 & 0xfffffffe;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar4 < (short)param_1[0xc9]);
  }
  if (0 < (short)param_1[0xc9]) {
    iVar5 = 0;
    iVar4 = 0;
    do {
      iVar2 = param_1[200];
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"L_side"), iVar3 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
        *puVar1 = *puVar1 | 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar4 < (short)param_1[0xc9]);
  }
  iVar4 = FUN_00a81330();
  if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)
     ) {
    E3_EnemyBoardDebrisSokushi::vf4C();
  }
  iVar4 = FUN_00a81330();
  if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)
     ) {
    E3_EnemyBoardDebrisSokushi::vf4C();
  }
  iVar4 = 0;
  if ((*(byte *)(param_1 + 0x3a5) & 1) == 0) {
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"L_side_in_head_top"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
  }
  else {
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"head_top"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      iVar4 = 0;
      do {
        iVar2 = param_1[200];
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"L_side_in_head_top"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
  }
  iVar4 = 0;
  if ((*(ushort *)(param_1 + 0x3a5) & 0x100) == 0) {
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"L_side_in_head_down"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
  }
  else {
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"head_down"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      iVar4 = 0;
      do {
        iVar2 = param_1[200];
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"L_side_in_head_down"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
  }
  if (((*(byte *)(param_1 + 0x3a5) & 8) != 0) && (iVar4 = 0, 0 < (short)param_1[0xc9])) {
    iVar5 = 0;
    do {
      iVar2 = param_1[200];
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_016413d4), iVar3 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar4 < (short)param_1[0xc9]);
  }
  if (((*(byte *)(param_1 + 0x3a5) & 0x40) != 0) && (iVar4 = 0, 0 < (short)param_1[0xc9])) {
    iVar5 = 0;
    do {
      iVar2 = param_1[200];
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"R_reg"), iVar3 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar4 < (short)param_1[0xc9]);
  }
  iVar4 = 0;
  if ((*(byte *)(param_1 + 0x3a5) & 0x10) == 0) {
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"L_side_in_L_reg"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
  }
  else {
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"L_reg"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"L_side_in_L_reg"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
  }
  if ((*(byte *)(param_1 + 0x3a5) & 4) != 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
  }
  if ((*(byte *)(param_1 + 0x3a5) & 2) != 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
  }
  if ((*(byte *)(param_1 + 0x3a5) & 0x80) != 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
  }
  if ((*(byte *)(param_1 + 0x3a5) & 0x20) == 0) {
    return;
  }
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  return;
}

// 0080AF30  FUN_0080af30  size=163  [between]
void FUN_0080af30(void)

{
  int iVar1;
  
  FUN_00eaa6e0(0x3f800000,0);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  return;
}

// 0080AFF0  FUN_0080aff0  size=58  [between]
undefined4 __fastcall FUN_0080aff0(int param_1)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x878) = 0x41200000;
      *(undefined4 *)(param_1 + 0x87c) = 0xbf800000;
      return 1;
    }
  }
  return 0;
}

// 0080B030  FUN_0080b030  size=16  [between]
void FUN_0080b030(void)

{
  FUN_00a944d0();
  Behavior::vf44();
  return;
}

// 0080B050  FUN_0080b050  size=16  [between]
void FUN_0080b050(void)

{
  FUN_00a93170();
  Behavior::vf50();
  return;
}

// 0080B060  FUN_0080b060  size=49  [between]
void __fastcall FUN_0080b060(int param_1)

{
  if ((*(int *)(param_1 + 0x61c) == 0) && (600.0 < *(float *)(param_1 + 0x878))) {
    FUN_00a8cb50(2);
    FUN_00a8cb60(0);
  }
  return;
}

// 0080B0A0  FUN_0080b0a0  size=135  [between]
void __fastcall FUN_0080b0a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    uVar2 = 1;
    FUN_00a92fb0(1);
    FUN_00e08640(uVar2);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x21d] = 0x432a0000;
    param_1[0x21c] = 0;
  }
  else if (iVar1 == 1) {
    if (215.0 < (float)param_1[0x21e]) {
      (**(code **)(*param_1 + 0x20))();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  else if ((iVar1 == 2) && (600.0 < (float)param_1[0x21e])) {
    FUN_00a8cb50(2);
    FUN_00a8cb60(0);
    return;
  }
  return;
}

// 0080B180  FUN_0080b180  size=130  [between]
void __fastcall FUN_0080b180(int param_1)

{
  undefined4 local_20;
  float local_1c;
  
  if (*(int *)(param_1 + 0x618) != 1) {
    FUN_00d9fa80(&local_20,param_1 + 0x50);
    FUN_00f95eb0(local_20,local_1c,0x41a00000,0xffffffff);
    FUN_00f96580(local_20,local_1c + 20.0,0x41700000,0xffffffff,1,"DATSU!");
  }
  return;
}

// 0080B2A0  FUN_0080b2a0  size=42  [between]
uint FUN_0080b2a0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35990;
  (**(code **)(*param_1 + 4))(&DAT_01b35990);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0080B2E0  Emc200::vf44  size=411  [class]
void __fastcall Emc200::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_008092d0();
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  FUN_00a934c0();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a7c8a0();
    E3_EnemyBoardDebrisSokushi::vf4C();
  }
  *(undefined4 *)(param_1 + 0x1d64) = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a7c950();
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
      *(undefined4 *)(param_1 + 0x7b0) = 0;
    }
  }
  RayCastManager::getWork(param_1 + 0x2068);
  RayCastManager::getWork(param_1 + 0x206c);
  RayCastManager::getWork(param_1 + 0x2070);
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x2c))(param_1 + 0x2044);
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x2c))(param_1 + 0x2048);
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x2c))(param_1 + 0x204c);
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x2c))(param_1 + 0x2050);
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x2c))(param_1 + 0x2054);
  FUN_00a92a00();
  BehaviorEmBase::vf44();
  return;
}

// 0080B480  Emc200::getAttackInfo  size=622  [class]
undefined4 __thiscall Emc200::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 unaff_EBX;
  uint unaff_ESI;
  undefined1 uStack_8;
  
  iVar3 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar3 == 0) || (iVar3 = CollisionAttackData::CollisionAttackData(), iVar3 == 0)) {
    FUN_00dd5650(&DAT_016484a4);
    return 0;
  }
  puVar1 = *(uint **)(iVar3 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar4 = FUN_00a7c7f0();
  FUN_00a7c960(uVar4);
  uVar5 = FUN_00ac8520(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
  uVar6 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
  puVar1[2] = uVar6;
  puVar1[1] = uVar5;
  puVar1[3] = unaff_ESI;
  *(undefined1 *)(puVar1 + 4) = uStack_8;
  *puVar1 = (uint)*param_2;
  puVar1[0x23] = puVar1[0x23] | 0x100;
  switch(*param_2) {
  case 4:
    *puVar1 = 0xaf;
    *(undefined2 *)(puVar1 + 0x21) = 0x3100;
    break;
  default:
    goto switchD_0080b563_caseD_5;
  case 6:
    *puVar1 = 0xb0;
    uVar2 = 0x3100;
    goto LAB_0080b6cd;
  case 8:
    *puVar1 = 0xb1;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *(undefined2 *)(puVar1 + 0x21) = 0x3101;
    goto switchD_0080b563_caseD_5;
  case 10:
    *puVar1 = 0xb2;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3101;
    break;
  case 0xc:
    *puVar1 = 0xb3;
    goto LAB_0080b6b4;
  case 0xe:
    *puVar1 = 0xb4;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    goto LAB_0080b606;
  case 0x10:
    *puVar1 = 0xb5;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3100;
    break;
  case 0x12:
    *puVar1 = 0xb7;
    puVar1[0x23] = puVar1[0x23] | 0x400000;
    puVar1[0x24] = puVar1[0x24] | 0x4000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x50;
    goto switchD_0080b563_caseD_5;
  case 0x14:
    *puVar1 = 0xb8;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
LAB_0080b606:
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3102;
    break;
  case 0x16:
    *puVar1 = 0xb3;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3102;
    break;
  case 0x18:
    *puVar1 = 0x147;
LAB_0080b6b4:
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    uVar2 = 0x3102;
LAB_0080b6cd:
    *(undefined2 *)(puVar1 + 0x21) = uVar2;
  }
  *(undefined1 *)((int)puVar1 + 0x11) = 10;
switchD_0080b563_caseD_5:
  FUN_00aa56a0(puVar1);
  return unaff_EBX;
}

// 00814B10  Emc200::vf19C  size=226  [class]
void __thiscall Emc200::vf19C(int *param_1,int param_2,uint param_3)

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
  }
  else {
    (**(code **)(*param_1 + 0x1a8))(param_2,param_3);
  }
  if (((param_3 & 0x10) == 0) && ((*(uint *)(param_2 + 0x8c) & 0x20000000) != 0)) {
    FUN_00e5e080("core_se_impact_kick",&stack0xffffff3c,0,0xffffffff,0);
  }
  return;
}

// 00814C00  FUN_00814c00  size=581  [between]
void __fastcall FUN_00814c00(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  short local_10 [8];
  
  uVar6 = *(uint *)(param_1 + 0x20f8) & 0x80000007;
  local_10[0] = 0x13;
  local_10[1] = 0x1d;
  local_10[2] = 0x12;
  local_10[3] = 0x13;
  local_10[4] = 0x1d;
  local_10[5] = 0x13;
  local_10[6] = 0x13;
  local_10[7] = 0x1d;
  if ((int)uVar6 < 0) {
    uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
  }
  fVar1 = *(float *)(param_1 + 0x40) - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
  sVar7 = local_10[uVar6];
  fVar2 = *(float *)(param_1 + 0x48) - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
  if (12.0 <= SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
    if ((sVar7 != 0x13) && (sVar7 != 0x12)) {
LAB_00814d25:
      if (sVar7 != 6) goto LAB_00814dee;
      goto LAB_00814d2f;
    }
    bVar3 = false;
    iVar5 = FUN_00a12210(0x20);
    if ((iVar5 != 0) &&
       (fVar1 = *(float *)(iVar5 + 0x40) - *(float *)(*(int *)(param_1 + 0xa84) + 0x40),
       fVar2 = *(float *)(iVar5 + 0x48) - *(float *)(*(int *)(param_1 + 0xa84) + 0x48),
       SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 7.0)) {
      bVar3 = true;
      sVar7 = 0x13;
    }
    iVar5 = FUN_00a12210(0x2b);
    if ((iVar5 == 0) ||
       (fVar1 = *(float *)(iVar5 + 0x40) - *(float *)(*(int *)(param_1 + 0xa84) + 0x40),
       fVar2 = *(float *)(iVar5 + 0x48) - *(float *)(*(int *)(param_1 + 0xa84) + 0x48),
       7.0 <= SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
      if (!bVar3) goto LAB_00814c6e;
      goto LAB_00814d25;
    }
  }
  else {
LAB_00814c6e:
    sVar7 = 0;
    sVar4 = FUN_00dde2d0(0,1);
    if (sVar4 == 0) goto LAB_00814dee;
    sVar7 = 6;
LAB_00814d2f:
    iVar5 = FUN_0080ce00(0xc2200000);
    if (iVar5 == 0) goto LAB_00814dee;
    sVar7 = 3;
    if ((*(float *)(param_1 + 0xa90) <= 625.0) && (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
      sVar7 = 0x1d;
    }
    if (((*(float *)(param_1 + 0xa90) <= 900.0) && (1.0471976 < *(float *)(param_1 + 0xa9c))) &&
       (*(float *)(param_1 + 0xa9c) < 2.6179938)) {
      sVar7 = 0x13;
    }
    if (((900.0 < *(float *)(param_1 + 0xa90)) || (-1.0471976 <= *(float *)(param_1 + 0xa9c))) ||
       (-2.6179938 <= *(float *)(param_1 + 0xa9c))) goto LAB_00814dee;
  }
  sVar7 = 0x12;
LAB_00814dee:
  if (*(int *)(param_1 + 0x31b0) != 0) {
    iVar5 = FUN_0080ce00(0xc2200000);
    sVar7 = (-(ushort)(iVar5 != 0) & 0xfffe) + 4;
  }
  FUN_00a8caf0((int)sVar7,0,0,0);
  *(int *)(param_1 + 0x20f8) = *(int *)(param_1 + 0x20f8) + 1;
  if (7 < *(int *)(param_1 + 0x20f8)) {
    *(undefined4 *)(param_1 + 0x20f8) = 0;
  }
  return;
}

// 00814E50  FUN_00814e50  size=221  [between]
void __fastcall FUN_00814e50(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xa84) == 0) {
    *(undefined4 *)(param_1 + 0x31b0) = 0;
    *(undefined4 *)(param_1 + 0x31b4) = 0;
    *(undefined4 *)(param_1 + 0x31b8) = 0;
    *(undefined4 *)(param_1 + 0x31bc) = 0;
    return;
  }
  iVar1 = FUN_0080d6d0();
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x31b8) = *(int *)(param_1 + 0x31b8) + 1;
    if (2999 < *(int *)(param_1 + 0x31b8)) {
      *(undefined4 *)(param_1 + 0x31b8) = 3000;
    }
  }
  else {
    *(int *)(param_1 + 0x31b4) = *(int *)(param_1 + 0x31b4) + 1;
    if (2999 < *(int *)(param_1 + 0x31b4)) {
      *(undefined4 *)(param_1 + 0x31b4) = 3000;
    }
  }
  if (*(int *)(param_1 + 0x31b0) == 0) {
    if (*(int *)(param_1 + 0x31bc) == 0) {
      *(undefined4 *)(param_1 + 0x31bc) = 1;
      *(undefined4 *)(param_1 + 0x31b4) = 0;
      *(undefined4 *)(param_1 + 0x31b8) = 0;
    }
    if (0x3b < *(int *)(param_1 + 0x31b4)) {
      *(undefined4 *)(param_1 + 0x31b0) = 1;
      *(undefined4 *)(param_1 + 0x31bc) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x31bc) == 0) {
      *(undefined4 *)(param_1 + 0x31bc) = 1;
      *(undefined4 *)(param_1 + 0x31b4) = 0;
      *(undefined4 *)(param_1 + 0x31b8) = 0;
    }
    if (0x3b < *(int *)(param_1 + 0x31b8)) {
      *(undefined4 *)(param_1 + 0x31b0) = 0;
      *(undefined4 *)(param_1 + 0x31bc) = 0;
      return;
    }
  }
  return;
}

// 00814F30  FUN_00814f30  size=1413  [between]
void __fastcall FUN_00814f30(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float unaff_EBX;
  float unaff_ESI;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined *puVar7;
  float fStack_b4;
  int aiStack_b0 [4];
  undefined1 auStack_a0 [4];
  float fStack_9c;
  undefined4 auStack_90 [20];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  (**(code **)(*param_1 + 0x318))();
  param_1[0x764] = 1;
  param_1[0x588] = 1;
  param_1[0x589] = 1;
  param_1[0x587] = 1;
  param_1[0x3ab] = 1;
  param_1[0x3ac] = 1;
  piVar4 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
      fStack_b4 = 0.0;
    }
    else {
      puVar7 = &DAT_01b35b20;
      (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
      iVar3 = FUN_00dd6d80(puVar7);
      piVar4 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar4);
    }
  }
  param_1[0x3a8] = 1;
  switch(param_1[0x187]) {
  case 0:
    FUN_00a94bc0(6,0);
    FUN_0080c630();
    FUN_0080c3e0();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aa4080(0x149,0,0,0x3f800000,0x8000000,0,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    FUN_00c4d1a0(param_1[0x13c],0);
    FUN_0040b190();
    iStack_40 = param_1[0x14];
    iStack_3c = param_1[0x15];
    iStack_38 = param_1[0x16];
    iStack_34 = param_1[0x24];
    auStack_90[0] = 5;
    iStack_30 = param_1[0x25];
    iStack_2c = param_1[0x26];
    FUN_00a82090("Emc200",0x2c200,auStack_90);
    uVar6 = FUN_00a7c7f0();
    FUN_00a7c960(uVar6);
    param_1[0x21c] = 0;
    param_1[0x139] = 1;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        uVar6 = FUN_00a7c8a0();
        iVar3 = FUN_0080b2a0(uVar6);
        if (iVar3 != 0) {
          *(short *)(iVar3 + 0xe94) = (short)param_1[0x3a5];
          FUN_00a8cb60(2);
        }
      }
    }
    break;
  case 2:
    param_1[0x187] = 3;
    FUN_00aa4080(0x14a,0,0,0x3f800000,0x8000000,0,0x3f800000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      FUN_0080a4f0();
      (**(code **)(*param_1 + 0x344))(0xb,4,1);
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        uVar6 = FUN_00a7c8a0();
        iVar3 = FUN_0080b2a0(uVar6);
        if (iVar3 != 0) {
          *(short *)(iVar3 + 0xe94) = (short)param_1[0x3a5];
          FUN_0080aa10();
        }
      }
    }
    break;
  case 4:
    param_1[0x187] = 5;
    uVar6 = 0x14b;
    goto LAB_0081527b;
  case 5:
  case 7:
    goto switchD_00814fcc_caseD_5;
  case 6:
    param_1[0x187] = 7;
    uVar6 = 0x14c;
LAB_0081527b:
    FUN_00aa4080(uVar6,0,0,0x3f800000,0x8000000,0,0x3f800000);
switchD_00814fcc_caseD_5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x20))();
      FUN_0080af30();
    }
    break;
  case 8:
    param_1[0x187] = 9;
    FUN_00aa4080(0x14d,0,0,0x3f800000,0x8000000,0,0x3f800000);
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x20))();
      FUN_0080af30();
    }
    iVar3 = FUN_00a8cab0();
    if (iVar3 != 0x10007f) {
      param_1[0x187] = param_1[0x187] + 1;
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a805f0();
      }
    }
    break;
  case 10:
    param_1[0x187] = 0xb;
    param_1[0x248] = 0x41700000;
    goto LAB_008153c6;
  case 0xb:
LAB_008153c6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  switchD_0080dbae::default();
  if (((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0x32c))(), iVar3 == 0)) &&
     (iVar3 = FUN_00a8cab0(), iVar3 == 0x10007f)) {
    FUN_00a8ce90(aiStack_b0,auStack_a0);
    fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_9c);
    piVar4[0x25] = (int)(float)fVar5;
    D3DXVec3TransformNormal(aiStack_b0,aiStack_b0,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    piVar4[0x16] = (int)((float)param_1[0x12] + fStack_b4);
    piVar4[0x14] = (int)(unaff_ESI + fVar1);
    piVar4[0x15] = (int)(fVar2 + unaff_EBX);
    piVar4[0x17] = aiStack_b0[0];
    switchD_0080dbae::default();
  }
  return;
}

// 008154F0  FUN_008154f0  size=44  [between]
void __fastcall FUN_008154f0(int *param_1)

{
  Behavior::vf4C();
  FUN_0080de50();
  (**(code **)(*param_1 + 100))();
  param_1[0x21e] = (int)((float)param_1[0x21e] + 1.0);
  return;
}

// 00815540  FUN_00815540  size=43  [between]
void __fastcall FUN_00815540(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00815570  Emc200::startup  size=8144  [class]
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Emc200::startup(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *local_21c;
  int *piStack_218;
  int *local_214;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  int local_1f4 [12];
  uint local_1c4 [4];
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  uint uStack_1a4;
  undefined1 local_1a0 [20];
  undefined4 local_18c;
  undefined4 uStack_134;
  undefined4 uStack_114;
  undefined1 auStack_cc [4];
  undefined4 uStack_c8;
  
  local_214 = (int *)0x815586;
  iVar1 = EmBaseDLC::startup();
  if (iVar1 == 0) {
    return 0;
  }
  param_1[0xd9] = param_1[0xd9] & 0xffefffff;
  local_214 = (int *)0x8155a4;
  FUN_00a933e0();
  local_214 = (int *)0x18;
  piStack_218 = (int *)0x8155ad;
  lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>();
  local_214 = (int *)0xeff;
  piStack_218 = (int *)0x8155b9;
  iVar1 = FUN_00a12210();
  iVar7 = 0;
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 0x1000;
  }
  local_214 = (int *)0x8155d2;
  FUN_00a929d0();
  if (param_1[0x128] != 5) {
    local_214 = (int *)0x8155e8;
    FUN_00e01ca0();
    local_214 = param_1 + 0x5f0;
    piStack_218 = (int *)0x8155f8;
    FUN_00dffb30();
    local_214 = (int *)local_1a0;
    piStack_218 = (int *)0x2;
    local_21c = param_1;
    FUN_00e02d50();
    param_1[0x594] = 1;
    local_1f4[0] = 0;
    if (0 < (short)param_1[0xc9]) {
      do {
        iVar1 = param_1[200];
        piStack_218 = *(int **)(*(int *)(iVar1 + 0x60 + iVar7) + 0x40);
        if (piStack_218 != (int *)0x0) {
          local_214 = (int *)&DAT_0164152c;
          local_21c = (int *)0x81563d;
          iVar2 = FUN_00fdbbd0();
          if (iVar2 != 0) {
            puVar5 = (uint *)(iVar1 + 0x38 + iVar7);
            *puVar5 = *puVar5 & 0xfffffffe;
          }
        }
        local_1f4[0] = local_1f4[0] + 1;
        iVar7 = iVar7 + 0x70;
      } while (local_1f4[0] < (short)param_1[0xc9]);
    }
  }
  local_214 = (int *)0xbb8;
  param_1[0x205] = 4;
  param_1[0x20b] = 0x114;
  piStack_218 = (int *)0x815682;
  FUN_00a8edf0();
  if (param_1[0x128] == 0) {
    local_214 = (int *)0x7d0;
    piStack_218 = (int *)0x815696;
    FUN_00a8edf0();
  }
  param_1[0x766] = 100;
  param_1[0x82b] = 0x40400000;
  param_1[0x765] = 100;
  param_1[0x82c] = 0x40400000;
  param_1[0x768] = 100;
  param_1[0x82d] = 0x40400000;
  param_1[0x767] = 100;
  param_1[0x82e] = 0x40400000;
  param_1[0x76c] = 300;
  param_1[0x76b] = 300;
  param_1[0x76a] = 0x1e;
  param_1[0x769] = 0x1e;
  param_1[0x770] = 0x32;
  param_1[0x76f] = 0x32;
  param_1[0x76e] = 0x32;
  param_1[0x76d] = 0x32;
  param_1[0x82f] = 0x2ee;
  param_1[0x830] = 0x2ee;
  param_1[0x831] = 0x2ee;
  param_1[0x832] = 0x2ee;
  if (param_1[0x1d5] != 0) {
    local_214 = (int *)0x23;
    piStack_218 = (int *)0x815742;
    FUN_00ac8570();
    local_214 = (int *)0x815747;
    local_214 = (int *)FUN_00fdbc60();
    piStack_218 = (int *)0x81574f;
    FUN_00a8edf0();
    if (param_1[0x128] == 0) {
      local_214 = (int *)0x22;
      piStack_218 = (int *)0x815760;
      FUN_00ac8570();
      local_214 = (int *)0x815765;
      local_214 = (int *)FUN_00fdbc60();
      piStack_218 = (int *)0x81576d;
      FUN_00a8edf0();
    }
    local_214 = (int *)0x2a;
    piStack_218 = (int *)0x815776;
    fVar9 = (float10)FUN_00ac8570();
    param_1[0x82b] = (int)(float)fVar9;
    local_214 = (int *)0x2b;
    piStack_218 = (int *)0x815785;
    fVar9 = (float10)FUN_00ac8570();
    param_1[0x82c] = (int)(float)fVar9;
    local_214 = (int *)0x2c;
    piStack_218 = (int *)0x815794;
    fVar9 = (float10)FUN_00ac8570();
    param_1[0x82d] = (int)(float)fVar9;
    local_214 = (int *)0x2c;
    piStack_218 = (int *)0x8157a3;
    fVar9 = (float10)FUN_00ac8570();
    param_1[0x82e] = (int)(float)fVar9;
    local_214 = (int *)0x27;
    piStack_218 = (int *)0x8157b2;
    FUN_00ac8570();
    local_214 = (int *)0x8157b7;
    iVar1 = FUN_00fdbc60();
    local_214 = (int *)0x27;
    param_1[0x766] = iVar1;
    param_1[0x765] = iVar1;
    piStack_218 = (int *)0x8157cc;
    FUN_00ac8570();
    local_214 = (int *)0x8157d1;
    iVar1 = FUN_00fdbc60();
    local_214 = (int *)0x26;
    param_1[0x768] = iVar1;
    param_1[0x767] = iVar1;
    piStack_218 = (int *)0x8157e6;
    FUN_00ac8570();
    local_214 = (int *)0x8157eb;
    iVar1 = FUN_00fdbc60();
    local_214 = (int *)0x2e;
    param_1[0x76a] = iVar1;
    param_1[0x769] = iVar1;
    piStack_218 = (int *)0x815800;
    FUN_00ac8570();
    local_214 = (int *)0x815805;
    iVar1 = FUN_00fdbc60();
    local_214 = (int *)0x30;
    param_1[0x82f] = iVar1;
    piStack_218 = (int *)0x815814;
    FUN_00ac8570();
    local_214 = (int *)0x815819;
    iVar1 = FUN_00fdbc60();
    local_214 = (int *)0x2f;
    param_1[0x830] = iVar1;
    piStack_218 = (int *)0x815828;
    FUN_00ac8570();
    local_214 = (int *)0x81582d;
    iVar1 = FUN_00fdbc60();
    local_214 = (int *)0x31;
    param_1[0x831] = iVar1;
    piStack_218 = (int *)0x81583c;
    FUN_00ac8570();
    local_214 = (int *)0x815841;
    iVar1 = FUN_00fdbc60();
    param_1[0x832] = iVar1;
  }
  local_214 = (int *)param_1[0x13c];
  param_1[0x77e] = 0;
  param_1[0x77f] = 0;
  param_1[0x780] = 0;
  param_1[0x810] = 0;
  piStack_218 = (int *)0x815870;
  iVar7 = FUN_00c5def0();
  iVar1 = param_1[0x13c];
  param_1[0x25c] = iVar7;
  DAT_018a9eec = 1;
  local_214 = (int *)0x815890;
  FUN_00a7c950();
  if (iVar1 != 0) {
    local_214 = (int *)0x81589b;
    local_214 = (int *)FUN_00a7c7f0();
    piStack_218 = (int *)0x8158a6;
    FUN_00a7c960();
  }
  local_214 = (int *)0x1;
  piStack_218 = (int *)0x8158b6;
  FUN_00dc1300();
  param_1[0x8ad] = 1;
  param_1[0x1b1] = 6;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  local_214 = (int *)0x2;
  param_1[0x1b6] = 0;
  piStack_218 = local_1f4 + 1;
  param_1[0x1b7] = local_1c4[0];
  param_1[0x1ba] = 0x3fc00000;
  param_1[0x1bb] = 1;
  param_1[0x1b9] = 6;
  local_1f4[1] = 0;
  param_1[0x1b8] = 6;
  local_1f4[2] = 0;
  local_1f4[3] = 0;
  local_21c = (int *)0xc0800000;
  uVar12 = 0x40400000;
  uVar11 = 0x3fb33333;
  uVar3 = FUN_00a12210(6);
  FUN_00a889e0(uVar3,uVar11,uVar12);
  local_1f4[1] = 0;
  local_214 = (int *)0x2;
  local_1f4[2] = 0;
  piStack_218 = local_1f4 + 1;
  local_1f4[3] = 0x3f19999a;
  local_21c = (int *)0xc0800000;
  uVar12 = 0x40400000;
  uVar11 = 0x3fb33333;
  uVar3 = FUN_00a12210(0x114);
  FUN_00a889e0(uVar3,uVar11,uVar12);
  local_1f4[1] = 0;
  local_214 = (int *)0x1;
  local_1f4[2] = 0;
  piStack_218 = local_1f4 + 1;
  local_1f4[3] = 0;
  local_21c = (int *)0xbfc00000;
  uVar12 = 0x3fc00000;
  uVar11 = 0x3fb33333;
  uVar3 = FUN_00a12210(0x1b);
  FUN_00a889e0(uVar3,uVar11,uVar12);
  local_1f4[1] = 0;
  local_1f4[2] = 0xbfcccccd;
  local_214 = (int *)0x1;
  piStack_218 = local_1f4 + 1;
  local_1f4[3] = 0;
  local_21c = (int *)0xbfc00000;
  uVar12 = 0x3fc00000;
  uVar11 = 0x3fb33333;
  uVar3 = FUN_00a12210(0x1c);
  FUN_00a889e0(uVar3,uVar11,uVar12);
  local_1f4[1] = 0;
  local_214 = (int *)0x1;
  local_1f4[2] = 0;
  piStack_218 = local_1f4 + 1;
  local_1f4[3] = 0;
  local_21c = (int *)0xbfc00000;
  uVar12 = 0x3fc00000;
  uVar11 = 0x3fb33333;
  uVar3 = FUN_00a12210(0x20);
  FUN_00a889e0(uVar3,uVar11,uVar12);
  local_214 = (int *)0x41000000;
  piStack_218 = (int *)0x1;
  local_21c = (int *)0x20;
  local_21c = (int *)FUN_00a12210();
  FUN_00a852e0();
  local_1f4[1] = 0;
  local_214 = (int *)0x1;
  local_1f4[2] = 0;
  piStack_218 = local_1f4 + 1;
  local_1f4[3] = 0;
  local_21c = (int *)0xbfc00000;
  uVar12 = 0x3fc00000;
  uVar11 = 0x3fb33333;
  uVar3 = FUN_00a12210(0x26);
  FUN_00a889e0(uVar3,uVar11,uVar12);
  local_1f4[1] = 0;
  local_214 = (int *)0x1;
  piStack_218 = local_1f4 + 1;
  local_1f4[2] = 0xbfcccccd;
  local_1f4[3] = 0;
  local_21c = (int *)0xbfc00000;
  uVar12 = 0x3fc00000;
  uVar11 = 0x3fb33333;
  uVar3 = FUN_00a12210(0x27);
  FUN_00a889e0(uVar3,uVar11,uVar12);
  local_1f4[1] = 0;
  local_214 = (int *)0x1;
  local_1f4[2] = 0;
  piStack_218 = local_1f4 + 1;
  local_1f4[3] = 0;
  local_21c = (int *)0xbfc00000;
  uVar12 = 0x3fc00000;
  uVar11 = 0x3fb33333;
  uVar3 = FUN_00a12210(0x2b);
  FUN_00a889e0(uVar3,uVar11,uVar12);
  local_214 = (int *)0x41000000;
  piStack_218 = (int *)0x1;
  local_21c = (int *)0x2b;
  local_21c = (int *)FUN_00a12210();
  FUN_00a852e0();
  local_214 = (int *)0x815ba8;
  FUN_00405230();
  local_1f4[5] = 0;
  local_214 = (int *)0x0;
  local_1f4[6] = 0;
  piStack_218 = (int *)0x2;
  local_1f4[7] = 0x40333333;
  local_21c = (int *)0x40400000;
  FUN_00c151f0(1,param_1[0x13c],6,local_1f4 + 5,0,0x43480000);
  local_214 = (int *)local_1a0;
  local_18c = 0x40800000;
  piStack_218 = (int *)0x815c0e;
  local_214 = (int *)FUN_00c57830();
  piStack_218 = (int *)0x815c19;
  iVar1 = FUN_00c4d470();
  param_1[0x838] = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x4c) = 1;
  }
  if (param_1[0x838] != 0) {
    *(undefined4 *)(param_1[0x838] + 0x5c) = 1;
  }
  local_214 = (int *)0x0;
  local_1f4[5] = 0;
  piStack_218 = (int *)0x1;
  local_1f4[6] = 0;
  local_1f4[7] = 0;
  local_21c = (int *)0x3fc00000;
  FUN_00c151f0(1,param_1[0x13c],0x20,local_1f4 + 5,0,0x43480000);
  local_214 = (int *)0x41100000;
  piStack_218 = (int *)0x1;
  local_21c = (int *)0x815c8c;
  FUN_00c15270();
  local_214 = (int *)local_1a0;
  piStack_218 = (int *)0x815c9b;
  local_214 = (int *)FUN_00c57830();
  piStack_218 = (int *)0x815ca6;
  iVar1 = FUN_00c4d470();
  param_1[0x83a] = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x4c) = 1;
  }
  if (param_1[0x83a] != 0) {
    *(undefined4 *)(param_1[0x83a] + 0x5c) = 1;
  }
  local_214 = (int *)0x0;
  local_1f4[5] = 0;
  piStack_218 = (int *)0x1;
  local_1f4[6] = 0;
  local_1f4[7] = 0;
  local_21c = (int *)0x3fc00000;
  FUN_00c151f0(1,param_1[0x13c],0x2b,local_1f4 + 5,0,0x43480000);
  local_214 = (int *)0x41100000;
  piStack_218 = (int *)0x1;
  local_21c = (int *)0x815d19;
  FUN_00c15270();
  local_214 = (int *)local_1a0;
  piStack_218 = (int *)0x815d28;
  local_214 = (int *)FUN_00c57830();
  piStack_218 = (int *)0x815d33;
  iVar1 = FUN_00c4d470();
  param_1[0x83b] = iVar1;
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x4c) = 1;
  }
  if (param_1[0x83b] != 0) {
    *(undefined4 *)(param_1[0x83b] + 0x5c) = 1;
  }
  local_214 = (int *)0x0;
  param_1[0x826] = 0x41680000;
  piStack_218 = (int *)0x19;
  param_1[0x827] = 0x41680000;
  local_21c = (int *)0x78;
  iVar1 = FUN_008ec660(param_1,0x41f00000,0x41680000,0x41a00000,0x41a00000);
  local_214 = (int *)0x1000000;
  param_1[0x1d9] = iVar1;
  piStack_218 = (int *)0x815d9f;
  FUN_008e6fe0();
  local_214 = (int *)0x1000000;
  piStack_218 = (int *)0x815daf;
  FUN_008e7400();
  local_214 = (int *)0x815dba;
  FUN_008e6d00();
  local_214 = (int *)0x815dc5;
  FUN_008e1c70();
  local_214 = (int *)0x100;
  piStack_218 = (int *)0x815dd5;
  FUN_008e5610();
  local_214 = (int *)0x100;
  piStack_218 = (int *)0x815de1;
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2();
  local_214 = &DAT_01b7bd48;
  piStack_218 = (int *)0x3c;
  local_21c = (int *)0x815ded;
  iVar1 = FUN_00dd3500();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    local_214 = (int *)0x815dfb;
    iVar1 = RigidBodyCollision::RigidBodyCollision();
  }
  piVar4 = (int *)param_1[0x13c];
  local_214 = (int *)0x0;
  piStack_218 = (int *)0x163c454;
  param_1[0x1ec] = iVar1;
  local_21c = (int *)0x815e1d;
  local_214 = (int *)FUN_00de46d0();
  piStack_218 = (int *)0x0;
  local_21c = (int *)0x163c454;
  piStack_218 = (int *)FUN_00de4550();
  local_21c = piVar4;
  FUN_008f6410();
  local_214 = (int *)0x8;
  piStack_218 = (int *)0x815e4f;
  (**(code **)(*(int *)param_1[0x1ec] + 0x108))();
  piStack_218 = (int *)0x1;
  local_21c = (int *)0x815e5c;
  FUN_008f2cd0();
  piStack_218 = (int *)0x80000000;
  local_21c = (int *)0x815e6c;
  FUN_008f1600();
  piStack_218 = (int *)0x40;
  local_21c = (int *)0x815e79;
  FUN_008f1600();
  piStack_218 = (int *)0x100;
  local_21c = (int *)0x815e89;
  FUN_008f1600();
  piStack_218 = (int *)0x10000;
  local_21c = (int *)0x815e99;
  FUN_008f18c0();
  piStack_218 = (int *)0x1;
  local_21c = (int *)0x20;
  param_1[0x816] = 0;
  param_1[0x817] = 0;
  param_1[0x818] = 0;
  FUN_008f0450("_head");
  piStack_218 = (int *)0x1;
  local_21c = (int *)0x20;
  FUN_008f0450(&DAT_0164151c);
  piStack_218 = (int *)0x1;
  local_21c = (int *)0x20;
  FUN_008f0450(&DAT_01645514);
  piStack_218 = (int *)0x1;
  local_21c = (int *)0x20;
  FUN_008f0450(&DAT_01648580);
  piStack_218 = (int *)0x1;
  local_21c = (int *)0x20;
  FUN_008f0450(&DAT_01640b88);
  local_21c = (int *)param_1[0x1ec];
  piStack_218 = (int *)0x2;
  Behavior::addDefenseCollisionFromRigidBody_2();
  piStack_218 = (int *)0x163e348;
  local_21c = (int *)0x0;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x163e350;
  local_21c = (int *)0x1;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)&DAT_0164151c;
  local_21c = (int *)0x1;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x1641514;
  local_21c = (int *)0x3;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x164150c;
  local_21c = (int *)0x3;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x1641504;
  local_21c = (int *)0x2;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x16414fc;
  local_21c = (int *)0x2;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x16414f4;
  local_21c = (int *)0x4;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x16414ec;
  local_21c = (int *)0x5;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x1641524;
  local_21c = (int *)0x6;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x16414e4;
  local_21c = (int *)0x8;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x16414dc;
  local_21c = (int *)0x9;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x16414d4;
  local_21c = (int *)0xa;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x16414cc;
  local_21c = (int *)0xb;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x16414c4;
  local_21c = (int *)0xc;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x16414bc;
  local_21c = (int *)0xd;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  piStack_218 = (int *)0x16414b4;
  local_21c = (int *)0xe;
  lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
  local_1f4[4] = param_1[0x14];
  local_1f4[5] = param_1[0x15];
  local_1f4[6] = param_1[0x16];
  local_1f4[7] = param_1[0x17];
  local_1f4[8] = 0;
  local_1f4[9] = 0;
  local_1f4[10] = 0;
  local_1c4[0] = 0;
  local_1c4[1] = 0x40800000;
  local_1c4[2] = 0;
  uStack_1b4 = 0;
  uStack_1b0 = 0xc0000000;
  uStack_1ac = 0;
  piStack_218 = (int *)0x816065;
  FUN_0118f7b0();
  uStack_114 = 0;
  piStack_218 = (int *)0x816075;
  iVar1 = FUN_009f8b40();
  uStack_1a4 = iVar1 << 0x10 | 3;
  piStack_218 = (int *)0x816084;
  piVar4 = (int *)FUN_00910da0();
  piStack_218 = (int *)0x1;
  local_21c = (int *)0x3f800000;
  uVar3 = (**(code **)(*piVar4 + 0x10))
                    (&iStack_1fc,&uStack_1a4,local_1f4 + 4,local_1f4 + 8,local_1c4,&uStack_1b4);
  FUN_00910ab0(uVar3);
  FUN_00916260();
  FUN_008f9610(param_1[0x811],0x20,1);
  FUN_008f9610(param_1[0x811],0x40,1);
  FUN_008f9610(param_1[0x811],0x100,1);
  iVar1 = param_1[0x811];
  FUN_004066f0();
  if ((iVar1 == 0) || (uVar6 = *(uint *)(iVar1 + 0xc), uVar6 == 0)) {
    if (DAT_01885d68 != 1) {
      iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      goto LAB_00816161;
    }
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar6 != 0) & uVar6);
    *puVar5 = *puVar5 | 1;
    puVar5[2] = puVar5[2] | 0x10000;
    if (DAT_01885d68 != 1) {
      iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
LAB_00816161:
      piVar4 = (int *)(iVar1 + 4);
      *piVar4 = *piVar4 + -1;
      if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  iStack_204 = param_1[0x14];
  iStack_200 = param_1[0x15];
  iStack_1fc = param_1[0x16];
  iStack_1f8 = param_1[0x17];
  local_1f4[4] = 0;
  local_1f4[5] = 0;
  local_1f4[6] = 0;
  local_1f4[0] = 0x40b00000;
  local_1f4[1] = 0x40c00000;
  local_1f4[2] = 0x40400000;
  FUN_0118f7b0();
  uStack_134 = 0;
  iVar1 = FUN_009f8b40();
  local_1c4[0] = iVar1 << 0x10 | 3;
  piVar4 = (int *)FUN_00910da0();
  uVar3 = (**(code **)(*piVar4 + 4))(&local_21c,local_1c4,&iStack_204,local_1f4 + 4,local_1f4,1);
  FUN_00910ab0(uVar3);
  FUN_00916260();
  FUN_008f7f00(param_1[0x812],param_1[0x13c]);
  FUN_008f9610(param_1[0x812],0x20,1);
  FUN_008f9610(param_1[0x812],0x40,1);
  FUN_008f9610(param_1[0x812],0x100,1);
  iVar1 = param_1[0x812];
  FUN_004066f0();
  if ((iVar1 == 0) || (uVar6 = *(uint *)(iVar1 + 0xc), uVar6 == 0)) {
    if (DAT_01885d68 == 1) goto LAB_008162fd;
    iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  else {
    puVar5 = (uint *)(-(uint)(uVar6 != 0) & uVar6);
    *puVar5 = *puVar5 | 1;
    puVar5[2] = puVar5[2] | 0x10000;
    if (DAT_01885d68 == 1) goto LAB_008162fd;
    iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  }
  piVar4 = (int *)(iVar1 + 4);
  *piVar4 = *piVar4 + -1;
  if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
    FUN_00dd7320();
  }
LAB_008162fd:
  param_1[0x8a5] = 0;
  param_1[0x8a8] = param_1[0x14];
  param_1[0x8a9] = param_1[0x15];
  param_1[0x8aa] = param_1[0x16];
  param_1[0x8ab] = param_1[0x17];
  iVar1 = param_1[300];
  param_1[0x8ac] = 0x41f00000;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(iVar1,0x20200);
  iVar1 = FUN_00a92f90();
  *(undefined4 *)(iVar1 + 0x334) = 1;
  FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x3a9] = 0x44e10000;
  param_1[0x3aa] = 0x42700000;
  param_1[0x819] = -0x40800000;
  iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0040b190();
  uStack_c8 = 0;
  if ((param_1[0x128] != 5) && (iVar1 = FUN_00a82090("Wpc200",0x3c200,auStack_cc), iVar1 != 0)) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    iVar7 = FUN_00a7c8a0();
    if (iVar7 != 0) {
      FUN_008087f0(param_1[0x13c]);
    }
    FUN_00a8c5f0(0,param_1[0x13c],iVar1,0x111,0xffffffff);
  }
  uStack_c8 = 1;
  iVar1 = FUN_00a82090("Wpc200",0x3c200,auStack_cc);
  if (iVar1 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    iVar7 = FUN_00a7c8a0();
    if ((iVar7 != 0) && (param_1[0x13c] != 0)) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
    FUN_00a8c5f0(1,param_1[0x13c],iVar1,0x110,0xffffffff);
  }
  uStack_c8 = 1;
  iVar1 = FUN_00a82090("Wpc201",0x3c201,auStack_cc);
  if (iVar1 != 0) {
    FUN_00a8c5f0(2,param_1[0x13c],iVar1,0x112,0xffffffff);
    iVar1 = FUN_00a7c800();
    if (2 < *(short *)(iVar1 + 0x324)) {
      puVar5 = (uint *)(*(int *)(iVar1 + 800) + 0x118);
      *puVar5 = *puVar5 & 0xfffffffe;
    }
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    iVar1 = FUN_00a7c8a0();
    if ((iVar1 != 0) && (param_1[0x13c] != 0)) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
  }
  if (param_1[0x128] != 5) {
    uStack_c8 = 0;
    iVar1 = FUN_00a82090("Wpc201",0x3c201,auStack_cc);
    if (iVar1 != 0) {
      FUN_00a8c5f0(3,param_1[0x13c],iVar1,0x113,0xffffffff);
      iVar1 = FUN_00a7c800();
      if (1 < *(short *)(iVar1 + 0x324)) {
        puVar5 = (uint *)(*(int *)(iVar1 + 800) + 0xa8);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_008087f0(param_1[0x13c]);
      }
    }
  }
  param_1[0x58d] = -0x40800000;
  param_1[0x842] = -0x40800000;
  param_1[0x58e] = 0;
  param_1[0x84e] = -0x40800000;
  *(undefined2 *)((int)param_1 + 0xeb6) = 0;
  param_1[0x84d] = -0x40800000;
  param_1[0x584] = 0;
  param_1[0x585] = 0;
  param_1[0x586] = 0;
  param_1[0x588] = 0;
  param_1[0x773] = 0;
  param_1[0x774] = 0;
  param_1[0x775] = 0;
  param_1[0x776] = 0;
  param_1[0x781] = 0;
  param_1[0x782] = 0;
  param_1[0x783] = 0;
  param_1[0x784] = 0;
  param_1[0x83e] = 0;
  param_1[0x83f] = 0;
  param_1[0x840] = 0;
  param_1[0x841] = 0;
  param_1[0x846] = 1;
  param_1[0x84c] = -1;
  FUN_00a7c950();
  param_1[0xc6a] = 0;
  *(undefined2 *)(param_1 + 0x3a5) = 0;
  param_1[0x3a6] = 0;
  param_1[0xc69] = 1;
  param_1[0x84a] = -1;
  param_1[0x84b] = -1;
  param_1[0xc1e] = 0;
  param_1[0xc1f] = 0;
  param_1[0xc6c] = 0;
  param_1[0xc6d] = 0;
  param_1[0xc6e] = 0;
  param_1[0xc6f] = 0;
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar8 = param_1[200] + iVar7;
      iVar2 = *(int *)(*(int *)(iVar8 + 0x60) + 0x40);
      if ((iVar2 != 0) && (iVar2 = FUN_00fdbbd0(iVar2,"qterh"), iVar2 != 0)) {
        puVar5 = (uint *)(iVar8 + 0x38);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar7 = iVar7 + 0x70;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar8 = param_1[200] + iVar7;
      iVar2 = *(int *)(*(int *)(iVar8 + 0x60) + 0x40);
      if ((iVar2 != 0) && (iVar2 = FUN_00fdbbd0(iVar2,"kata_R"), iVar2 != 0)) {
        puVar5 = (uint *)(iVar8 + 0x38);
        *puVar5 = *puVar5 | 1;
      }
      iVar7 = iVar7 + 0x70;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar8 = param_1[200] + iVar7;
      iVar2 = *(int *)(*(int *)(iVar8 + 0x60) + 0x40);
      if ((iVar2 != 0) && (iVar2 = FUN_00fdbbd0(iVar2,&DAT_01641490), iVar2 != 0)) {
        puVar5 = (uint *)(iVar8 + 0x38);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar7 = iVar7 + 0x70;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_0164148c), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_01641488), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"btdes"), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar7 = 0;
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"ftdes"), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_01641474), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"qtelh"), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"in_R_reg"), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"in_L_reg"), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"in_head_top"), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"in_head_down"), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_al"), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_ar"), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_rl"), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_rr"), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_01641424), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar7 = 0;
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"_side"), iVar8 != 0)) {
        puVar5 = (uint *)(iVar2 + 0x38 + iVar7);
        *puVar5 = *puVar5 & 0xfffffffe;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  param_1[0x777] = 0;
  param_1[0x778] = 0;
  param_1[0x81e] = 0;
  param_1[0x829] = 0;
  param_1[0x786] = 0;
  param_1[0x833] = 0x44160000;
  param_1[0x3a7] = 0;
  FUN_00a82790(param_1[0x13c],4,0);
  param_1[0x3b0] = param_1[0x3b0] | 2;
  FUN_00a82840(0x3dd67750,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82870(0x3dd67750,0xbdd67750,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82790(param_1[0x13c],5,0);
  param_1[0x3e4] = param_1[0x3e4] | 2;
  FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82790(param_1[0x13c],6,0);
  param_1[0x418] = param_1[0x418] | 2;
  FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82790(param_1[0x13c],0x17,0);
  param_1[0x44c] = param_1[0x44c] | 2;
  param_1[0x478] = -0x40800000;
  param_1[0x479] = 0;
  param_1[0x47a] = 0;
  param_1[0x47b] = iStack_200;
  param_1[0x47c] = 0;
  param_1[0x47d] = 0;
  param_1[0x47e] = 0x3f800000;
  param_1[0x47f] = iStack_200;
  param_1[0x44c] = param_1[0x44c] | 0x10;
  FUN_00a82840(0x3f060a92,0xbdb2b8c2,0x3dcccccd,0x3ae4c388,0x3d567750);
  FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x3ae4c388,0x3d567750);
  FUN_00a82790(param_1[0x13c],1,0);
  param_1[0x4e8] = param_1[0x4e8] | 0x20;
  param_1[0x514] = 0;
  param_1[0x515] = 0;
  param_1[0x516] = 0x3f800000;
  param_1[0x517] = iStack_200;
  FUN_00a82870(0x3db2b8c2,0xbdb2b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82790(param_1[0x13c],2,0);
  param_1[0x51c] = param_1[0x51c] | 0x20;
  param_1[0x548] = 0;
  param_1[0x549] = 0;
  param_1[0x54a] = 0x3f800000;
  param_1[0x54b] = iStack_200;
  FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82790(param_1[0x13c],3,0);
  param_1[0x550] = param_1[0x550] | 0x20;
  param_1[0x57c] = 0;
  param_1[0x57d] = 0;
  param_1[0x57e] = 0x3f800000;
  param_1[0x57f] = iStack_200;
  FUN_00a82870(0x3eb2b8c2,0xbeb2b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  param_1[0x3ab] = 0;
  param_1[0x3ac] = 0;
  *(undefined2 *)(param_1 + 0x3ad) = 0;
  param_1[0x82a] = 0;
  param_1[0x8af] = 1;
  param_1[0x8b0] = 0x44610000;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  switchD_0080dbae::default();
  iVar1 = FUN_00a12210(0x2b);
  param_1[0x75c] = *(int *)(iVar1 + 0x40);
  param_1[0x75d] = *(int *)(iVar1 + 0x44);
  param_1[0x75e] = *(int *)(iVar1 + 0x48);
  param_1[0x75f] = *(int *)(iVar1 + 0x4c);
  iVar1 = FUN_00a12210(0x20);
  param_1[0x760] = *(int *)(iVar1 + 0x40);
  param_1[0x761] = *(int *)(iVar1 + 0x44);
  param_1[0x762] = *(int *)(iVar1 + 0x48);
  param_1[0x763] = *(int *)(iVar1 + 0x4c);
  iVar1 = FUN_00ac45b0();
  param_1[0x2a2] = iVar1;
  param_1[0x2a1] = 0;
  if (iVar1 != 0) {
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar10 = &DAT_01be9c24;
      (**(code **)(*piVar4 + 4))(&DAT_01be9c24);
      iVar1 = FUN_00dd6d80(puVar10);
      uVar6 = -(uint)(iVar1 != 0) & (uint)piVar4;
    }
    param_1[0x2a1] = uVar6;
  }
  if ((param_1[0x2a1] != 0) && (iVar1 = FUN_00a979d0(), iVar1 == 0)) {
    FUN_00a8d330(param_1 + 0x10,param_1[0x2a1] + 0x40);
  }
  piVar4 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c54720(piVar4);
  if (param_1[0x128] == 0) {
    _DAT_01b77cd4 = 0;
  }
  FUN_00a93780("_tail_f");
  FUN_00a93780("_tail_b");
  FUN_00a93780("_c1tail");
  FUN_00a93780("_c2tail");
  FUN_00a8c420(0,"_tail_f");
  FUN_00a8c420(0,"_tail_b");
  FUN_00a8c420(0,"_c1tail");
  FUN_00a8c420(0,"_c2tail");
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"L_reg"), iVar8 != 0)) {
        *(undefined4 *)(iVar2 + 0x1c + iVar7) = 0x3e4ccccd;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_0164148c), iVar8 != 0)) {
        *(undefined4 *)(iVar2 + 0x1c + iVar7) = 0x3e4ccccd;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar7 = 0;
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"R_reg"), iVar8 != 0)) {
        *(undefined4 *)(iVar2 + 0x1c + iVar7) = 0x3e4ccccd;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  iVar1 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar7 = 0;
    do {
      iVar2 = param_1[200];
      iVar8 = *(int *)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
      if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_01641488), iVar8 != 0)) {
        *(undefined4 *)(iVar2 + 0x1c + iVar7) = 0x3e4ccccd;
      }
      iVar1 = iVar1 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar1 < (short)param_1[0xc9]);
  }
  param_1[0x849] = 0;
  FUN_00a0b990(0x400);
  param_1[0xc1c] = 0;
  param_1[0xc1d] = 0;
  param_1[0xc68] = 0;
  FUN_00a8caf0(0xb,0,0,0);
  iVar1 = FUN_00ac4780();
  if (iVar1 == 0) {
    param_1[0x3aa] = 0x43340000;
    FUN_00a8caf0(0,0,0,0);
  }
  if (param_1[0x128] == 5) {
    FUN_00a8caf0(0x3c,0,0,0);
    (**(code **)(*param_1 + 0x20))();
  }
  return 1;
}

// 008175E0  Emc200::vf48  size=3420  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Emc200::vf48(int param_1)

{
  short *psVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float unaff_EBX;
  int iVar7;
  bool bVar8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined *local_48;
  float local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  
  iVar7 = *(int *)(param_1 + 0x4a0);
  fVar2 = *(float *)(param_1 + 0x22c0) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x22c0) = fVar2;
  if (*(int *)(param_1 + 0x22bc) == 1) {
    if (fVar2 < 0.0) {
      uVar3 = 0x44960000;
      *(undefined4 *)(param_1 + 0x22bc) = 2;
LAB_00817656:
      *(undefined4 *)(param_1 + 0x22c0) = uVar3;
    }
  }
  else if (fVar2 < 0.0) {
    uVar3 = 0x44610000;
    *(undefined4 *)(param_1 + 0x22bc) = 1;
    goto LAB_00817656;
  }
  if (*(int *)(param_1 + 0xa84) != 0) {
    iVar4 = FUN_00a8d9d0();
    if (iVar4 == 0) {
      psVar1 = (short *)(param_1 + 0x22ba);
      *psVar1 = *psVar1 + -1;
      if (*psVar1 < 0) {
        *(undefined2 *)(param_1 + 0x22b8) = 0;
      }
    }
    else {
      *(short *)(param_1 + 0x22b8) = *(short *)(param_1 + 0x22b8) + 1;
      *(undefined2 *)(param_1 + 0x22ba) = 0x1e;
    }
  }
  bVar8 = *(int *)(param_1 + 0x4e4) == 0;
  if (*(int *)(param_1 + 0x22b4) == 0) {
    if (bVar8 && *(short *)(param_1 + 0x22b8) < 0x10) {
      *(undefined4 *)(param_1 + 0x22b4) = 1;
    }
  }
  else if (!bVar8 || 0xf < *(short *)(param_1 + 0x22b8)) {
    *(undefined4 *)(param_1 + 0x22b4) = 0;
  }
  if ((0 < *(int *)(param_1 + 0x870)) && (iVar7 != 5 && iVar7 != 2)) {
    if ((DAT_01bea090 & 0x80000000) == 0) {
      DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
      DAT_01dc08dc = 0;
      DAT_01dc08e0 = 0;
      DAT_01dc08e8 = *(undefined4 *)(param_1 + 0x874);
      DAT_01dc08e4 = *(undefined4 *)(param_1 + 0x870);
      DAT_01dc08ec = 1;
    }
    else {
      DAT_018b5618 = *(undefined4 *)(param_1 + 0x4b4);
      _DAT_01dc08f4 = *(undefined4 *)(param_1 + 0x874);
      _DAT_01dc08f0 = *(undefined4 *)(param_1 + 0x870);
      DAT_01dc08f8 = 1;
    }
    FUN_00cad2a0();
  }
  if (0.0 < *(float *)(param_1 + 0xea4) != (*(float *)(param_1 + 0xea4) == 0.0)) {
    *(float *)(param_1 + 0xea4) = *(float *)(param_1 + 0xea4) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0xea8) != (*(float *)(param_1 + 0xea8) == 0.0)) {
    *(float *)(param_1 + 0xea8) = *(float *)(param_1 + 0xea8) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x2064) != (*(float *)(param_1 + 0x2064) == 0.0)) {
    *(float *)(param_1 + 0x2064) = *(float *)(param_1 + 0x2064) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x20cc) != (*(float *)(param_1 + 0x20cc) == 0.0)) {
    *(float *)(param_1 + 0x20cc) = *(float *)(param_1 + 0x20cc) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x2108) != (*(float *)(param_1 + 0x2108) == 0.0)) {
    *(float *)(param_1 + 0x2108) = *(float *)(param_1 + 0x2108) - *(float *)(param_1 + 0x910);
  }
  FUN_00814e50();
  if (((*(int *)(param_1 + 0x31a4) != 0) && ((DAT_01bea060 & 0x2000000) == 0)) &&
     (fVar2 = *(float *)(param_1 + 0x31a8) + *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x31a8) = fVar2, 1800.0 < fVar2)) {
    FUN_00c81b30(0x2c);
  }
  FUN_00809090();
  EmBaseDLC::vf48();
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)(param_1 + 800);
      iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
      if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"L_reg"), iVar5 != 0)) {
        *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar7 = iVar7 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)(param_1 + 800);
      iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
      if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"left_foot"), iVar5 != 0)) {
        *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar7 = iVar7 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)(param_1 + 800);
      iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
      if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,&DAT_0164148c), iVar5 != 0)) {
        *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar7 = iVar7 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)(param_1 + 800);
      iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
      if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"R_reg"), iVar5 != 0)) {
        *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar7 = iVar7 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)(param_1 + 800);
      iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
      if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"right_foot"), iVar5 != 0)) {
        *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar7 = iVar7 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)(param_1 + 800);
      iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
      if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,&DAT_01641488), iVar5 != 0)) {
        *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar7 = iVar7 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)(param_1 + 800);
      iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
      if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,&DAT_016454c8), iVar5 != 0)) {
        *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar7 = iVar7 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)(param_1 + 800);
      iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
      if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"kata_L"), iVar5 != 0)) {
        *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar7 = iVar7 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)(param_1 + 800);
      iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
      if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"kata_R"), iVar5 != 0)) {
        *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar7 = iVar7 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      iVar4 = *(int *)(param_1 + 800);
      iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
      if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"sword_R"), iVar5 != 0)) {
        *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar7 = iVar7 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar7 = *(int *)(param_1 + 0xa84);
    local_90 = *(float *)(iVar7 + 0x40);
    local_88 = *(float *)(iVar7 + 0x48);
    local_84 = *(float *)(iVar7 + 0x4c);
    local_8c = *(float *)(iVar7 + 0x44) + 0.5;
    local_a0 = (float)_DAT_01bea630;
    local_9c = (float)_DAT_01bea634;
    local_98 = (float)_DAT_01bea638;
    local_94 = _DAT_01bea63c;
    iVar7 = FUN_009f8b40();
    local_60 = local_90;
    local_40 = iVar7 << 0x10 | 6;
    local_5c = local_8c;
    local_58 = (uint)local_88;
    local_54 = local_84;
    local_50 = local_a0;
    local_4c = local_9c;
    local_48 = (undefined *)local_98;
    local_3c = 0;
    local_38 = 0;
    local_44 = local_94;
    local_34 = 0;
    local_30 = "RayFoot";
    local_2c = 0;
    iVar7 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_70,0,&local_a8,0,&local_60);
    if (iVar7 != 0) {
      iVar7 = FUN_00912b40(local_a8,&DAT_016485a0);
      if ((iVar7 != 0) || (iVar7 = FUN_00912b40(local_a8,"lfoot"), iVar7 != 0)) {
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar7 = 0;
          do {
            iVar4 = *(int *)(param_1 + 800);
            iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
            if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"L_reg"), iVar5 != 0)) {
              *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar7 = iVar7 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar7 = 0;
          do {
            iVar4 = *(int *)(param_1 + 800);
            iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
            if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"left_foot"), iVar5 != 0)) {
              *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar7 = iVar7 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar7 = 0;
          do {
            iVar4 = *(int *)(param_1 + 800);
            iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
            if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,&DAT_0164148c), iVar5 != 0)) {
              *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar7 = iVar7 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
      }
      iVar7 = FUN_00912b40(local_a8,&DAT_01648590);
      if ((iVar7 != 0) || (iVar7 = FUN_00912b40(local_a8,"rfoot"), iVar7 != 0)) {
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar7 = 0;
          do {
            iVar4 = *(int *)(param_1 + 800);
            iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
            if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"R_reg"), iVar5 != 0)) {
              *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar7 = iVar7 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar7 = 0;
          do {
            iVar4 = *(int *)(param_1 + 800);
            iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
            if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"right_foot"), iVar5 != 0)) {
              *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar7 = iVar7 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar7 = 0;
          do {
            iVar4 = *(int *)(param_1 + 800);
            iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
            if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,&DAT_01641488), iVar5 != 0)) {
              *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar7 = iVar7 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
      }
      iVar7 = FUN_00912b40(local_a8,&DAT_016454c8);
      if (((iVar7 != 0) || (iVar7 = FUN_00912b40(local_a8,&DAT_01648584), iVar7 != 0)) &&
         (local_a4 = 0.0, 0 < *(short *)(param_1 + 0x324))) {
        iVar7 = 0;
        do {
          iVar4 = *(int *)(param_1 + 800);
          iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
          if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,&DAT_016454c8), iVar5 != 0)) {
            *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3ecccccd;
          }
          local_a4 = (float)((int)local_a4 + 1);
          iVar7 = iVar7 + 0x70;
        } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
      }
      iVar7 = FUN_00912b40(local_a8,"_lhand");
      if (((iVar7 != 0) || (iVar7 = FUN_00912b40(local_a8,"_clkata"), iVar7 != 0)) &&
         (local_a4 = 0.0, 0 < *(short *)(param_1 + 0x324))) {
        iVar7 = 0;
        do {
          iVar4 = *(int *)(param_1 + 800);
          iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
          if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"kata_L"), iVar5 != 0)) {
            *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3ecccccd;
          }
          local_a4 = (float)((int)local_a4 + 1);
          iVar7 = iVar7 + 0x70;
        } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
      }
      iVar7 = FUN_00912b40(local_a8,"_rhand");
      if ((iVar7 != 0) || (iVar7 = FUN_00912b40(local_a8,"_crkata"), iVar7 != 0)) {
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar7 = 0;
          do {
            iVar4 = *(int *)(param_1 + 800);
            iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
            if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"kata_R"), iVar5 != 0)) {
              *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar7 = iVar7 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar7 = 0;
          do {
            iVar4 = *(int *)(param_1 + 800);
            iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
            if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"sword_R"), iVar5 != 0)) {
              *(undefined4 *)(iVar4 + 0x1c + iVar7) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar7 = iVar7 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
      }
    }
  }
  iVar7 = FUN_00a12210(6);
  local_80 = *(float *)(iVar7 + 0x40);
  local_7c = *(float *)(iVar7 + 0x44);
  local_78 = *(float *)(iVar7 + 0x48);
  local_74 = *(float *)(iVar7 + 0x4c);
  local_90 = 0.0;
  local_8c = 0.0;
  local_88 = 15.0;
  local_a0 = 0.0;
  local_9c = 0.0;
  local_98 = -8.0;
  D3DXVec3TransformNormal(&local_90,&local_90,param_1 + 0x10);
  D3DXVec3TransformNormal(&fStack_ac,&fStack_ac,param_1 + 0x10);
  local_88 = unaff_EBX + local_98;
  local_84 = fStack_b4 + local_94;
  local_80 = fStack_b0 + local_90;
  local_7c = fStack_ac + local_8c;
  local_98 = local_a8 + local_98;
  local_94 = local_a4 + local_94;
  local_90 = local_90 + local_a0;
  local_8c = local_8c + local_9c;
  piVar6 = (int *)FUN_009f8b60();
  local_78 = local_88;
  local_74 = local_84;
  local_70 = local_80;
  fStack_6c = local_7c;
  fStack_68 = local_98;
  fStack_64 = local_94;
  local_58 = *piVar6 << 0x10 | 0x19;
  local_60 = local_90;
  local_5c = local_8c;
  local_54 = 0x1000000;
  local_50 = 0;
  local_4c = 0;
  local_48 = &DAT_016484f0;
  local_44 = 0.0;
  iVar7 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_38,0,0,0,&local_78);
  *(undefined4 *)(param_1 + 0x20d0) = 0;
  if (iVar7 == 0) {
    if (*(int *)(param_1 + 0x2084) != 0) {
      *(int *)(param_1 + 0x2084) = *(int *)(param_1 + 0x2084) + -1;
    }
    if (*(int *)(param_1 + 0x2084) != 0) goto LAB_008182be;
    *(undefined4 *)(param_1 + 0x2080) = 0;
  }
  else {
    *(int *)(param_1 + 0x2080) = *(int *)(param_1 + 0x2080) + 1;
    *(undefined4 *)(param_1 + 0x2084) = 10;
  }
  *(undefined4 *)(param_1 + 0x20d4) = 0;
LAB_008182be:
  if (*(int *)(param_1 + 0x20a0) == 0) {
    fVar2 = *(float *)(param_1 + 0x2098) + 0.2;
    *(float *)(param_1 + 0x2098) = fVar2;
    if (*(float *)(param_1 + 0x209c) <= fVar2) {
      *(undefined4 *)(param_1 + 0x2098) = *(undefined4 *)(param_1 + 0x209c);
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x2098) - 0.5;
    *(float *)(param_1 + 0x2098) = fVar2;
    if (fVar2 <= 10.0) {
      *(undefined4 *)(param_1 + 0x2098) = 0x41200000;
    }
  }
  CharacterControl::setRadius(*(undefined4 *)(param_1 + 0x2098));
  *(undefined4 *)(param_1 + 0x20a0) = 0;
  return;
}

// 00818340  FUN_00818340  size=999  [between]
void __fastcall FUN_00818340(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x61c)) {
    if ((*(int *)(param_1 + 0x1df8) < 6) || (*(int *)(param_1 + 0x1e14) == 0)) {
      if ((4 < *(int *)(param_1 + 0x1dfc)) && (*(int *)(param_1 + 0x1e20) != 0)) {
        *(undefined4 *)(param_1 + 0x1dfc) = 0;
        FUN_00a8caf0(0x12,0,0,0);
        return;
      }
      if ((4 < *(int *)(param_1 + 0x1e00)) && (*(int *)(param_1 + 0x1e1c) != 0)) {
        *(undefined4 *)(param_1 + 0x1e00) = 0;
        FUN_00a8caf0(0x13,0,0,0);
        return;
      }
      if ((*(float *)(param_1 + 0xea8) < 0.0) && (*(float *)(param_1 + 0xa90) <= 100.0)) {
        iVar3 = FUN_0080ce00(0xc2200000);
        if (iVar3 == 0) {
          FUN_00a8caf0(6,0,0,0);
          return;
        }
        FUN_0080d590();
        return;
      }
      if ((*(float *)(param_1 + 0xea8) < 0.0) && (*(float *)(param_1 + 0xa90) <= 225.0)) {
        iVar3 = FUN_0080ce00(0xc2200000);
        if (iVar3 == 0) {
          FUN_00a8caf0(5,0,0,0);
          return;
        }
        FUN_0080d590();
        return;
      }
      if (((*(float *)(param_1 + 0xaa0) < 1.0471976) && (*(float *)(param_1 + 0xa90) < 529.0)) &&
         (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 144.0 < fVar1 != (fVar1 == 144.0))) {
        FUN_00814c00();
        return;
      }
      fVar1 = *(float *)(param_1 + 0xa8c);
      if (!NAN(fVar1) && 10000.0 < fVar1 != (fVar1 == 10000.0)) {
        FUN_00a8caf0(3,0,0,0);
      }
      if (((*(float *)(param_1 + 0xea8) < 0.0) &&
          (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 529.0 < fVar1 != (fVar1 == 529.0)))
         && ((*(float *)(param_1 + 0xa90) < 1225.0 && (*(float *)(param_1 + 0xaa0) < 1.5707964)))) {
        FUN_0080cfa0();
        return;
      }
      if (((*(float *)(param_1 + 0xea8) < 0.0) &&
          (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 1225.0 < fVar1 != (fVar1 == 1225.0)))
         && ((*(float *)(param_1 + 0xa90) < 2500.0 && (*(float *)(param_1 + 0xaa0) < 1.5707964)))) {
        FUN_00809570();
        return;
      }
      if ((((*(float *)(param_1 + 0xea8) < 0.0) &&
           (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 2500.0 < fVar1 != (fVar1 == 2500.0))
           ) && (*(float *)(param_1 + 0xa90) < 6400.0)) && (*(float *)(param_1 + 0xaa0) < 1.5707964)
         ) {
        FUN_00809650();
        return;
      }
      if (0.0 < *(float *)(param_1 + 0x920)) {
        fVar1 = 400.0;
      }
      else {
        fVar1 = *(float *)(param_1 + 0xa8c);
        if (!NAN(fVar1) && 2500.0 < fVar1 != (fVar1 == 2500.0)) {
          FUN_00a8caf0(1,0,0,0);
        }
        fVar1 = 100.0;
      }
      if (fVar1 < *(float *)(param_1 + 0xa8c) != (fVar1 == *(float *)(param_1 + 0xa8c))) {
        if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
          FUN_00a8caf0(9,0,0,0);
        }
        if (2.1816616 < *(float *)(param_1 + 0xa9c)) {
          FUN_00a8caf0(10,0,0,0);
        }
        if (*(float *)(param_1 + 0xa9c) < -0.7853982) {
          FUN_00a8caf0(7,0,0,0);
        }
        if (*(float *)(param_1 + 0xa9c) < -2.1816616) {
          FUN_00a8caf0(8,0,0,0);
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x1df8) = 0;
      iVar3 = FUN_0080ce00(0xc2200000);
      if (iVar3 == 0) {
        FUN_00a8caf0(4,0,0,0);
      }
      else {
        FUN_0080d590();
      }
      sVar2 = FUN_00dde2d0(0,2);
      if (sVar2 != 0) {
        FUN_00a8caf0(0x1d,0,0,0);
      }
      iVar3 = FUN_00ac4780();
      if ((1 < iVar3) && (sVar2 = FUN_00dde2d0(0,2), sVar2 != 0)) {
        FUN_00a8caf0(0x1d,0,0,0);
        return;
      }
    }
  }
  return;
}

// 00818730  FUN_00818730  size=179  [between]
void __fastcall FUN_00818730(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    FUN_00a8c760(4);
    FUN_00a8c760(4);
  }
  if (*(int *)(param_1 + 0x61c) == 5) {
    iVar2 = FUN_00a94e10(0,0x43700000,0x43820000);
    if (iVar2 != 0) {
      iVar2 = FUN_0080ce00(0xc1f00000);
      if (iVar2 == 0) {
        FUN_00a8caf0(5,0,0,0);
      }
      else if (((*(float *)(param_1 + 0xaa0) < 1.0471976) && (*(float *)(param_1 + 0xa90) < 529.0))
              && (fVar1 = *(float *)(param_1 + 0xa90),
                 !NAN(fVar1) && 144.0 < fVar1 != (fVar1 == 144.0))) {
        FUN_00814c00();
        return;
      }
    }
  }
  return;
}

// 008187F0  FUN_008187f0  size=1772  [between]
void __fastcall FUN_008187f0(int *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_440 [8];
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  uint uStack_42c;
  undefined4 uStack_424;
  undefined1 uStack_420;
  undefined1 uStack_41f;
  int iStack_41c;
  uint uStack_3a4;
  undefined4 uStack_33c;
  undefined4 uStack_2dc;
  undefined1 auStack_120 [284];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x70,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0080c630();
    FUN_00e01ca0();
    FUN_00dffb30(param_1 + 0x598);
    FUN_00e02d50(param_1,4,auStack_120);
    FUN_00a82840(0x3dd67750,0xbe860a92,0x3e4ccccd,0x393702d3,0x3cd67750);
    FUN_00a82840(0x3e32b8c2,0xbe860a92,0x3e4ccccd,0x393702d3,0x3cd67750);
    FUN_00a82840(0x3e32b8c2,0xbe860a92,0x3e4ccccd,0x393702d3,0x3cd67750);
    FUN_00a82870(0x3dd67750,0xbdd67750,0x3e4ccccd,0x393702d3,0x3cd67750);
    FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3e4ccccd,0x393702d3,0x3cd67750);
    FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3e4ccccd,0x393702d3,0x3cd67750);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if (param_1[0x81d] == 0) {
      return;
    }
    if (param_1[0x2a1] == 0) {
      return;
    }
    fVar1 = (float)param_1[0x2a4];
    if (NAN(fVar1) || 400.0 < fVar1 == (fVar1 == 400.0)) {
      return;
    }
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d567750,0);
    return;
  case 2:
    FUN_00aa4080(0x71,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0x41f00000;
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  case 4:
    FUN_00aa4080(0x72,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00818bf2;
  case 5:
LAB_00818bf2:
    iVar2 = FUN_00a952e0(0,0x42700000);
    if ((iVar2 != 0) || (iVar2 = FUN_00a952e0(0,0x43860000), iVar2 != 0)) {
      (**(code **)(param_1[0x598] + 8))(0x42700000,0,0);
      if (param_1[0x584] != 0) {
        FUN_00ad0a90();
      }
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      uStack_33c = 0x14;
      uStack_2dc = FUN_009f8b40();
      uStack_438 = 0x1e;
      uStack_430 = 0x1e;
      uStack_42c = uStack_42c & 0xffffff00;
      uStack_434 = 0x96;
      uVar3 = FUN_00ac84d0(0x15);
      uVar4 = (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x15);
      (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x15);
      uStack_420 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x15);
      iStack_41c = param_1[0x13c];
      uStack_41f = 10;
      uStack_42c = uVar3;
      uStack_424 = uVar4;
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
      uStack_3a4 = uStack_3a4 | 0x8000000;
      uStack_430 = 0xba;
      iVar2 = FUN_00ad09e0(param_1[0x13c],6,auStack_440);
      param_1[0x584] = iVar2;
      iVar2 = FUN_00c81c60(0x30);
      if (iVar2 != 0) {
        FUN_00c81b30(0x31);
      }
      FUN_00c81b30(0x30);
    }
    iVar2 = FUN_00a952e0(0,0x43e10000);
    if (iVar2 != 0) {
      FUN_00ad0a90();
      param_1[0x584] = 0;
    }
    iVar2 = FUN_00a94e10(0,0,0x436d0000);
    if (iVar2 != 0) {
      param_1[0x585] = 1;
    }
    iVar2 = FUN_00a94e10(0,0x42b40000,0x436d0000);
    if (iVar2 != 0) {
      param_1[0x58b] = 1;
    }
    iVar2 = FUN_00a952e0(0,0x434f0000);
    if (iVar2 != 0) {
      FUN_00ad0a90();
      param_1[0x584] = 0;
    }
    iVar2 = FUN_00a94e10(0,0x43860000,0x43e28000);
    if (iVar2 != 0) {
      param_1[0x586] = 1;
    }
    if ((param_1[0xc6c] == 0) && (iVar2 = FUN_00a94e10(0,0x43b30000,0x43e28000), iVar2 != 0)) {
      param_1[0x58a] = 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8caf0(0,0,0,0);
      param_1[0x3aa] = 0x41f00000;
      iVar2 = FUN_00ac4780();
      if (iVar2 == 2) {
        param_1[0x3aa] = 0x41f00000;
      }
      iVar2 = FUN_00ac4780();
      if (2 < iVar2) {
        param_1[0x3aa] = 0x40c00000;
        return;
      }
    }
  default:
    goto switchD_00818812_default;
  }
  param_1[0x585] = 1;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 != 0) || ((float)param_1[0x248] < 0.0)) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  if (((param_1[0x81d] != 0) && (param_1[0x2a1] != 0)) &&
     (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0))) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
    return;
  }
switchD_00818812_default:
  return;
}

// 00818F00  FUN_00818f00  size=829  [between]
void __fastcall FUN_00818f00(int param_1)

{
  int iVar1;
  float10 extraout_ST0;
  undefined4 uVar2;
  undefined1 local_120 [284];
  
  FUN_0080d080();
  *(undefined4 *)(param_1 + 0x1d90) = 1;
  *(undefined4 *)(param_1 + 0x1620) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0xaa,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0080c3e0();
    FUN_00aa4080(0xd7,5,0x3e888889,0x3f800000,0x10,0,0x3f800000);
    FUN_00e01ca0();
    FUN_00dffb30(param_1 + 0x1b30);
    FUN_00e02d50(param_1,0x1d,local_120);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0xab,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43960000;
    iVar1 = FUN_00ac4780();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x920) = 0x44160000;
    }
    iVar1 = FUN_00ac4780();
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x920) = 0x43700000;
    }
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    if ((*(int *)(param_1 + 0x4a0) == 1) &&
       (iVar1 = FUN_00fdbc60(), *(int *)(param_1 + 0x870) <= iVar1)) {
      *(float *)(param_1 + 0x920) =
           (float)(extraout_ST0 - (float10)*(float *)(param_1 + 0x910) * (float10)10.0);
    }
    if (((*(int *)(param_1 + 0x1e14) != 0) || (*(int *)(param_1 + 0x1e20) != 0)) ||
       (*(int *)(param_1 + 0x1e1c) != 0)) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - 20.0;
    }
    if (*(float *)(param_1 + 0x920) < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0xac,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00a94bc0(5,0x3e888889);
    (**(code **)(*(int *)(param_1 + 0x1b30) + 8))(0x41200000,0,0);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      iVar1 = FUN_0080ce00(0xc2200000);
      if (iVar1 == 0) {
        uVar2 = 6;
      }
      else {
        uVar2 = 2;
      }
      FUN_00a8caf0(uVar2,0,0,0);
      *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      iVar1 = FUN_00ac4780();
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      }
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        *(undefined4 *)(param_1 + 0xea8) = 0x40c00000;
        return;
      }
    }
  }
  return;
}

// 00819260  FUN_00819260  size=945  [between]
void __fastcall FUN_00819260(int param_1)

{
  int iVar1;
  float10 extraout_ST0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_120 [284];
  
  FUN_0080d080();
  *(undefined4 *)(param_1 + 0x1d90) = 1;
  *(undefined4 *)(param_1 + 0x1620) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x9d,0,0x3f000000,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0080c3e0();
    uVar3 = 0;
    uVar2 = FUN_00a12210(0x1e);
    FUN_00a85150(uVar2,uVar3);
    uVar3 = 0;
    uVar2 = FUN_00a12210(0x30);
    FUN_00a85150(uVar2,uVar3);
    FUN_00aa4080(0xd7,5,0x3e888889,0x3f800000,0x10,0,0x3f800000);
    FUN_00e01ca0();
    FUN_00dffb30(param_1 + 0x1b30);
    FUN_00e02d50(param_1,0x1d,local_120);
    if (*(int *)(param_1 + 0x2124) != 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    *(undefined4 *)(param_1 + 0x2124) = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    FUN_00a952e0(0,0x43100000);
    return;
  case 2:
    FUN_00aa4080(0x9e,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43960000;
    iVar1 = FUN_00ac4780();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x920) = 0x44160000;
    }
    iVar1 = FUN_00ac4780();
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x920) = 0x43700000;
    }
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    if ((*(int *)(param_1 + 0x4a0) == 1) &&
       (iVar1 = FUN_00fdbc60(), *(int *)(param_1 + 0x870) <= iVar1)) {
      *(float *)(param_1 + 0x920) =
           (float)(extraout_ST0 - (float10)*(float *)(param_1 + 0x910) * (float10)10.0);
    }
    if (((*(int *)(param_1 + 0x1e14) != 0) || (*(int *)(param_1 + 0x1e20) != 0)) ||
       (*(int *)(param_1 + 0x1e1c) != 0)) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - 20.0;
    }
    if (*(float *)(param_1 + 0x920) < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x9f,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00a94bc0(5,0x3e888889);
    (**(code **)(*(int *)(param_1 + 0x1b30) + 8))(0x41200000,0,0);
    if (*(int *)(param_1 + 0x2124) != 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    *(undefined4 *)(param_1 + 0x2124) = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      iVar1 = FUN_0080ce00(0xc2200000);
      if (iVar1 == 0) {
        uVar2 = 6;
      }
      else {
        uVar2 = 2;
      }
      FUN_00a8caf0(uVar2,0,0,0);
      *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      iVar1 = FUN_00ac4780();
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      }
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        *(undefined4 *)(param_1 + 0xea8) = 0x40c00000;
        return;
      }
    }
  }
  return;
}

// 00819630  FUN_00819630  size=945  [between]
void __fastcall FUN_00819630(int param_1)

{
  int iVar1;
  float10 extraout_ST0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_120 [284];
  
  FUN_0080d080();
  *(undefined4 *)(param_1 + 0x1d90) = 1;
  *(undefined4 *)(param_1 + 0x1620) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0xa0,0,0x3f000000,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0080c3e0();
    uVar3 = 0;
    uVar2 = FUN_00a12210(0x29);
    FUN_00a85150(uVar2,uVar3);
    uVar3 = 0;
    uVar2 = FUN_00a12210(0x2b);
    FUN_00a85150(uVar2,uVar3);
    FUN_00aa4080(0xd7,5,0x3e888889,0x3f800000,0x10,0,0x3f800000);
    FUN_00e01ca0();
    FUN_00dffb30(param_1 + 0x1b30);
    FUN_00e02d50(param_1,0x1d,local_120);
    if (*(int *)(param_1 + 0x2124) != 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    *(undefined4 *)(param_1 + 0x2124) = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    FUN_00a952e0(0,0x42f60000);
    return;
  case 2:
    FUN_00aa4080(0xa1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43960000;
    iVar1 = FUN_00ac4780();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x920) = 0x44160000;
    }
    iVar1 = FUN_00ac4780();
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0x920) = 0x43700000;
    }
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    if ((*(int *)(param_1 + 0x4a0) == 1) &&
       (iVar1 = FUN_00fdbc60(), *(int *)(param_1 + 0x870) <= iVar1)) {
      *(float *)(param_1 + 0x920) =
           (float)(extraout_ST0 - (float10)*(float *)(param_1 + 0x910) * (float10)10.0);
    }
    if (((*(int *)(param_1 + 0x1e14) != 0) || (*(int *)(param_1 + 0x1e20) != 0)) ||
       (*(int *)(param_1 + 0x1e1c) != 0)) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - 20.0;
    }
    if (*(float *)(param_1 + 0x920) < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0xa2,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00a94bc0(5,0x3e888889);
    (**(code **)(*(int *)(param_1 + 0x1b30) + 8))(0x40a00000,0,0);
    if (*(int *)(param_1 + 0x2124) != 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    *(undefined4 *)(param_1 + 0x2124) = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      iVar1 = FUN_0080ce00(0xc2200000);
      if (iVar1 == 0) {
        uVar2 = 6;
      }
      else {
        uVar2 = 2;
      }
      FUN_00a8caf0(uVar2,0,0,0);
      *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      iVar1 = FUN_00ac4780();
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      }
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        *(undefined4 *)(param_1 + 0xea8) = 0x40c00000;
        return;
      }
    }
  }
  return;
}

// 00819A00  FUN_00819a00  size=513  [between]
void __fastcall FUN_00819a00(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_124;
  undefined1 local_120 [284];
  
  if ((*(int *)(param_1 + 0x4a0) != 2) && (*(int *)(param_1 + 0x4a0) != 5)) {
    switch(*(undefined1 *)(param_1 + 0xeb4)) {
    case 0:
      FUN_00aa4080(0xcf,2,0x3e888889,0x3f800000,0x10,0,0x3f800000);
      *(char *)(param_1 + 0xeb4) = *(char *)(param_1 + 0xeb4) + '\x01';
    case 1:
      if ((*(int *)(param_1 + 0xeac) == 1) || (iVar4 = FUN_00a8c760(0x35), iVar4 != 0)) {
        *(char *)(param_1 + 0xeb4) = *(char *)(param_1 + 0xeb4) + '\x01';
      }
      break;
    case 2:
      FUN_00a94bc0(2,0x3e888889);
      *(char *)(param_1 + 0xeb4) = *(char *)(param_1 + 0xeb4) + '\x01';
    case 3:
      if ((*(int *)(param_1 + 0xeac) == 0) && (iVar4 = FUN_00a8c760(0x35), iVar4 == 0)) {
        *(undefined1 *)(param_1 + 0xeb4) = 0;
      }
    }
    iVar4 = 0;
    if (*(int *)(param_1 + 0x1650) == 0) {
      iVar2 = FUN_00a8c760(0x35);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x1650) = 1;
        FUN_00e01ca0();
        FUN_00dffb30(param_1 + 0x17c0);
        FUN_00e02d50(param_1,2,local_120);
        local_124 = 0;
        if (0 < *(short *)(param_1 + 0x324)) {
          do {
            iVar2 = *(int *)(param_1 + 800);
            iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
            if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0164152c), iVar3 != 0)) {
              puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            local_124 = local_124 + 1;
            iVar4 = iVar4 + 0x70;
          } while (local_124 < *(short *)(param_1 + 0x324));
        }
      }
    }
    else {
      iVar2 = FUN_00a8c760(0x35);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 0x1650) = 0;
        FUN_00eaa6e0(0x41f00000,0);
        local_124 = 0;
        if (0 < *(short *)(param_1 + 0x324)) {
          do {
            iVar2 = *(int *)(param_1 + 800);
            iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
            if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0164152c), iVar3 != 0)) {
              puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
              *puVar1 = *puVar1 | 1;
            }
            local_124 = local_124 + 1;
            iVar4 = iVar4 + 0x70;
          } while (local_124 < *(short *)(param_1 + 0x324));
        }
      }
    }
    *(undefined4 *)(param_1 + 0xeac) = 0;
    *(undefined4 *)(param_1 + 0xeb0) = 0;
  }
  return;
}

// 00819C20  FUN_00819c20  size=1754  [between]
void __fastcall FUN_00819c20(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfStack_260;
  int *piStack_25c;
  int *piStack_258;
  float *pfStack_254;
  undefined1 *puStack_250;
  undefined1 *puStack_24c;
  float fStack_248;
  int iStack_244;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  float *local_204;
  float local_200;
  undefined1 *local_1fc;
  float local_1f8;
  undefined4 local_1f4;
  float fStack_1ec;
  float fStack_1e8;
  float local_1e4;
  float fStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 auStack_1c8 [16];
  int local_1b8;
  int local_1b4;
  undefined1 auStack_1ac [12];
  undefined1 local_1a0 [12];
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  
  iStack_244 = 0xe10;
  fStack_248 = 1.1902824e-38;
  fVar1 = (float)FUN_00a12210();
  iStack_244 = 0xe11;
  fStack_248 = 1.1902849e-38;
  local_1e4 = fVar1;
  local_214 = FUN_00a12210();
  iStack_244 = 0x2b;
  fStack_248 = 1.1902867e-38;
  iVar2 = FUN_00a12210();
  iStack_244 = 0x20;
  fStack_248 = 1.1902893e-38;
  local_1b8 = iVar2;
  local_1b4 = FUN_00a12210();
  if ((fVar1 != 0.0) && (local_214 != 0)) {
    local_210 = 0;
    local_20c = 0;
    local_208 = 0;
    local_200 = 0.0;
    local_1fc = (undefined1 *)0x0;
    local_1f8 = 0.0;
    if (iVar2 != 0) {
      local_210 = *(undefined4 *)(iVar2 + 0x40);
      local_20c = *(undefined4 *)(iVar2 + 0x44);
      local_208 = *(int *)(iVar2 + 0x48);
      local_204 = *(float **)(iVar2 + 0x4c);
    }
    if (local_1b4 != 0) {
      local_200 = *(float *)(local_1b4 + 0x40);
      local_1fc = *(undefined1 **)(local_1b4 + 0x44);
      local_1f8 = *(float *)(local_1b4 + 0x48);
      local_1f4 = *(undefined4 *)(local_1b4 + 0x4c);
    }
    iStack_244 = param_1 + 0x10;
    fStack_248 = 0.0;
    puStack_24c = local_1a0;
    puStack_250 = (undefined1 *)0x819cf3;
    D3DXMatrixInverse();
    puStack_250 = auStack_1ac;
    pfStack_254 = &fStack_21c;
    piStack_258 = &iStack_1dc;
    piStack_25c = (int *)0x819d0a;
    D3DXVec3TransformNormal();
    fStack_1e8 = fStack_188 + fStack_1e8;
    piStack_25c = &local_1b8;
    pfStack_260 = &fStack_218;
    local_1e4 = fStack_184 + local_1e4;
    fStack_1e0 = fStack_180 + fStack_1e0;
    D3DXVec3TransformNormal(auStack_1c8);
    fStack_1d4 = fStack_194 + fStack_1d4;
    fStack_1d0 = fStack_190 + fStack_1d0;
    fStack_1cc = fStack_18c + fStack_1cc;
    local_20c = 0;
    local_210 = 0;
    bVar4 = *(char *)(param_1 + 0xeb6) == '\0';
    bVar5 = *(char *)(param_1 + 0xeb7) == '\0';
    if ((bVar4) && (bVar5)) {
      if (fStack_1cc < fStack_1ec) {
        bVar4 = false;
      }
      else {
        bVar5 = false;
      }
    }
    iVar2 = FUN_00a8c760(0x11);
    if (iVar2 != 0) {
      bVar4 = true;
      bVar5 = false;
    }
    iVar2 = FUN_00a8c760(0x12);
    if (iVar2 != 0) {
      bVar4 = false;
      bVar5 = true;
    }
    iVar2 = FUN_00a8c760(0x14);
    if ((iVar2 != 0) || (*(int *)(param_1 + 0x1d90) != 0)) {
      bVar4 = false;
      bVar5 = false;
    }
    if (*(int *)(param_1 + 0x4a0) == 1) {
      bVar4 = false;
      bVar5 = false;
    }
    if (*(char *)(param_1 + 0xeb6) == '\0') {
      if (*(float *)(local_208 + 0x54) < 0.01) {
        *(undefined1 *)(param_1 + 0xeb6) = 1;
      }
    }
    else if ((*(char *)(param_1 + 0xeb6) == '\x01') && (0.089999996 < *(float *)(local_208 + 0x54)))
    {
      local_20c = 1;
      *(undefined1 *)(param_1 + 0xeb6) = 0;
    }
    if (*(char *)(param_1 + 0xeb7) == '\0') {
      if (*(float *)(unaff_EBX + 0x54) < 0.01) {
        *(undefined1 *)(param_1 + 0xeb7) = 1;
      }
    }
    else if ((*(char *)(param_1 + 0xeb7) == '\x01') && (0.089999996 < *(float *)(unaff_EBX + 0x54)))
    {
      local_210 = 1;
      *(undefined1 *)(param_1 + 0xeb7) = 0;
    }
    if (iStack_1dc != 0) {
      if (bVar4) {
        pfStack_254 = (float *)(*(float *)(param_1 + 0x1d70) - fStack_234);
        puStack_250 = (undefined1 *)(*(float *)(param_1 + 0x1d74) - fStack_230);
        puStack_24c = (undefined1 *)(*(float *)(param_1 + 0x1d78) - fStack_22c);
        fStack_248 = *(float *)(param_1 + 0x1d7c) - fStack_228;
        D3DXVec3TransformNormal(&pfStack_254,&pfStack_254,param_1 + 0xf0);
        pfStack_260 = (float *)(*(float *)(param_1 + 0x120) + (float)pfStack_260);
        piStack_258 = (int *)(*(float *)(param_1 + 0x128) + (float)piStack_258);
        piStack_25c = (int *)0x0;
        D3DXVec3TransformNormal(&pfStack_260,&pfStack_260,param_1 + 0xb0);
        pfStack_254 = (float *)((float)pfStack_254 + *(float *)(param_1 + 0xe0));
        puStack_250 = (undefined1 *)(*(float *)(param_1 + 0xe4) + (float)puStack_250);
        puStack_24c = (undefined1 *)(*(float *)(param_1 + 0xe8) + (float)puStack_24c);
        *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + (float)pfStack_254;
        *(float *)(param_1 + 0x54) = (float)puStack_250 + *(float *)(param_1 + 0x54);
        *(float *)(param_1 + 0x58) = (float)puStack_24c + *(float *)(param_1 + 0x58);
        *(float *)(param_1 + 0x5c) = fStack_248 + *(float *)(param_1 + 0x5c);
        switchD_0080dbae::default();
      }
      else {
        *(undefined4 *)(param_1 + 0x1d70) = *(undefined4 *)(iStack_1dc + 0x40);
        *(undefined4 *)(param_1 + 0x1d74) = *(undefined4 *)(iStack_1dc + 0x44);
        *(undefined4 *)(param_1 + 0x1d78) = *(undefined4 *)(iStack_1dc + 0x48);
        *(undefined4 *)(param_1 + 0x1d7c) = *(undefined4 *)(iStack_1dc + 0x4c);
      }
    }
    if (iStack_1d8 != 0) {
      if (bVar5) {
        pfStack_254 = (float *)(*(float *)(param_1 + 0x1d80) - fStack_224);
        puStack_250 = (undefined1 *)(*(float *)(param_1 + 0x1d84) - fStack_220);
        puStack_24c = (undefined1 *)(*(float *)(param_1 + 0x1d88) - fStack_21c);
        fStack_248 = *(float *)(param_1 + 0x1d8c) - fStack_218;
        D3DXVec3TransformNormal(&pfStack_254,&pfStack_254,param_1 + 0xf0);
        pfStack_260 = (float *)((float)pfStack_260 + *(float *)(param_1 + 0x120));
        piStack_258 = (int *)(*(float *)(param_1 + 0x128) + (float)piStack_258);
        piStack_25c = (int *)0x0;
        D3DXVec3TransformNormal(&pfStack_260,&pfStack_260,param_1 + 0xb0);
        pfStack_254 = (float *)(*(float *)(param_1 + 0xe0) + (float)pfStack_254);
        puStack_250 = (undefined1 *)(*(float *)(param_1 + 0xe4) + (float)puStack_250);
        puStack_24c = (undefined1 *)(*(float *)(param_1 + 0xe8) + (float)puStack_24c);
        *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + (float)pfStack_254;
        *(float *)(param_1 + 0x54) = (float)puStack_250 + *(float *)(param_1 + 0x54);
        *(float *)(param_1 + 0x58) = (float)puStack_24c + *(float *)(param_1 + 0x58);
        *(float *)(param_1 + 0x5c) = fStack_248 + *(float *)(param_1 + 0x5c);
        switchD_0080dbae::default();
      }
      else {
        *(undefined4 *)(param_1 + 0x1d80) = *(undefined4 *)(iStack_1d8 + 0x40);
        *(undefined4 *)(param_1 + 0x1d84) = *(undefined4 *)(iStack_1d8 + 0x44);
        *(undefined4 *)(param_1 + 0x1d88) = *(undefined4 *)(iStack_1d8 + 0x48);
        *(undefined4 *)(param_1 + 0x1d8c) = *(undefined4 *)(iStack_1d8 + 0x4c);
      }
    }
    if (*(int *)(param_1 + 0x4a0) != 3) {
      if ((local_20c != 0) && (iVar2 = FUN_00a12210(0x2b), iVar2 != 0)) {
        uVar6 = 0;
        uVar3 = FUN_00a7c8a0(0);
        FUN_004039a0(0,uVar3,uVar6);
        FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
        FUN_0041cdb0((float *)(iVar2 + 0x40));
        pfStack_254 = *(float **)(iVar2 + 0x40);
        puStack_24c = *(undefined1 **)(iVar2 + 0x48);
        fStack_248 = *(float *)(iVar2 + 0x4c);
        puStack_250 = (undefined1 *)(*(float *)(iVar2 + 0x44) + 1.0);
        local_200 = *(float *)(iVar2 + 0x44) - 5.0;
        local_204 = pfStack_254;
        local_1fc = puStack_24c;
        local_1f8 = fStack_248;
        iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4
                          (&pfStack_254,0,0,0,&pfStack_254,&local_204,0x1e,"em0200_ray");
        if (iVar2 != 0) {
          FUN_0041cdb0(&pfStack_254);
        }
        pfVar7 = &fStack_184;
        uVar3 = FUN_00e00b40(0x2c200,pfVar7);
        FUN_00a8c930(uVar3,pfVar7);
      }
      if ((local_210 != 0) && (iVar2 = FUN_00a12210(0x20), iVar2 != 0)) {
        uVar6 = 0;
        uVar3 = FUN_00a7c8a0(0);
        FUN_004039a0(0,uVar3,uVar6);
        FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
        FUN_0041cdb0((undefined4 *)(iVar2 + 0x40));
        pfStack_254 = *(float **)(iVar2 + 0x40);
        puStack_24c = *(undefined1 **)(iVar2 + 0x48);
        fStack_248 = *(float *)(iVar2 + 0x4c);
        puStack_250 = (undefined1 *)(*(float *)(iVar2 + 0x44) + 1.0);
        local_200 = *(float *)(iVar2 + 0x44) - 5.0;
        local_204 = pfStack_254;
        local_1fc = puStack_24c;
        local_1f8 = fStack_248;
        iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4
                          (&pfStack_254,0,0,0,&pfStack_254,&local_204,0x1e,"em0200_ray");
        if (iVar2 != 0) {
          FUN_0041cdb0(&pfStack_254);
        }
        pfVar7 = &fStack_184;
        uVar3 = FUN_00e00b40(0x2c200,pfVar7);
        FUN_00a8c930(uVar3,pfVar7);
      }
    }
    *(undefined4 *)(param_1 + 0x1e30) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x1e34) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x1e38) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x1e3c) = *(undefined4 *)(param_1 + 0x4c);
  }
  return;
}

// 0081A300  FUN_0081a300  size=96  [between]
void __thiscall FUN_0081a300(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [324];
  undefined4 local_1c;
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  local_1c = param_3;
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 0081A360  Emc200::vf358  size=103  [class]
void __thiscall Emc200::vf358(int param_1,undefined4 param_2,int param_3)

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

// 0081A3D0  FUN_0081a3d0  size=137  [between]
void __thiscall FUN_0081a3d0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  local_40 = *param_3;
  puVar3 = local_160;
  local_3c = param_3[1];
  local_38 = param_3[2];
  local_34 = param_3[3];
  uVar1 = FUN_00e00b40(*(undefined4 *)(param_1 + 0x4b0),puVar3);
  FUN_00a8c930(uVar1,puVar3);
  return;
}

// 0081A460  FUN_0081a460  size=666  [between]
undefined4 __thiscall
FUN_0081a460(int param_1,float *param_2,undefined4 param_3,float param_4,float param_5,float param_6
            )

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  float10 fVar15;
  undefined4 local_88;
  float local_84;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  local_70 = *(float *)(param_1 + 0x40);
  iVar8 = *(int *)(param_1 + 0xa84);
  local_6c = *(float *)(param_1 + 0x44);
  local_68 = *(float *)(param_1 + 0x48);
  local_64 = *(float *)(param_1 + 0x4c);
  local_88 = 0;
  if (iVar8 != 0) {
    local_70 = *(float *)(iVar8 + 0x40);
    local_6c = *(float *)(iVar8 + 0x44);
    local_68 = *(float *)(iVar8 + 0x48);
    local_64 = *(float *)(iVar8 + 0x4c);
  }
  local_70 = local_70 + 5.0;
  local_24 = 0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_6c = local_6c + 5.0;
  local_18 = 0;
  local_14 = 0;
  local_68 = local_68 + 5.0;
  local_64 = local_64 + 5.0;
  fVar2 = *(float *)(param_1 + 0x40);
  fVar3 = *(float *)(param_1 + 0x48);
  fVar4 = *(float *)(param_1 + 0x44);
  local_84 = 3.1415927;
  FUN_004fbe50(0x100,&DAT_01b7bd48);
  uVar14 = 0;
  if ((*(int *)(param_1 + 0x7d8) != 0) && (*(int *)(*(int *)(param_1 + 0x7d8) + 0x810) != 0)) {
    FUN_00c6e0b0(&local_24,param_3);
    puVar1 = local_20 + local_18;
    if (local_20 == puVar1) {
      uVar14 = 0;
    }
    else {
      puVar13 = local_20;
      do {
        pfVar9 = (float *)*puVar13;
        fVar5 = *pfVar9;
        fVar6 = pfVar9[1];
        fVar7 = pfVar9[2];
        fVar15 = (float10)fpatan((float10)fVar5 - (float10)fVar2,(float10)fVar7 - (float10)fVar3);
        fVar15 = (float10)FUN_00ddba30((float)(fVar15 - (float10)param_4));
        fVar10 = fVar2 - fVar5;
        fVar11 = (fVar4 + 5.0) - (fVar6 + 5.0);
        fVar12 = fVar3 - fVar7;
        if (((fVar15 * fVar15 <= (float10)(param_5 * param_5)) &&
            (param_6 * param_6 < fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10)) &&
           (fVar15 * fVar15 < (float10)local_84 * (float10)local_84)) {
          local_88 = 1;
          local_64 = 1.0;
          local_84 = (float)fVar15;
          local_70 = fVar5;
          local_6c = fVar6 + 5.0;
          local_68 = fVar7;
        }
        puVar13 = puVar13 + 1;
        uVar14 = local_88;
      } while (puVar13 != puVar1);
    }
  }
  if (local_20 != (undefined4 *)0x0) {
    local_18 = 0;
    if (local_14 != 0) {
      FUN_00dd48d0(local_20,0);
      local_14 = 0;
    }
    local_20 = (undefined4 *)0x0;
    local_1c = 0;
  }
  *param_2 = local_70;
  param_2[1] = local_6c - 5.0;
  param_2[2] = local_68;
  param_2[3] = local_64;
  if ((local_20 != (undefined4 *)0x0) && (local_18 = 0, local_14 != 0)) {
    FUN_00dd48d0(local_20,0);
  }
  return uVar14;
}

// 0081A700  FUN_0081a700  size=470  [between]
undefined4 __thiscall FUN_0081a700(int param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  local_50 = *(float *)(param_1 + 0x40);
  iVar3 = *(int *)(param_1 + 0xa84);
  local_4c = *(float *)(param_1 + 0x44);
  local_48 = *(float *)(param_1 + 0x48);
  local_44 = *(float *)(param_1 + 0x4c);
  uVar9 = 0;
  if (iVar3 != 0) {
    local_50 = *(float *)(iVar3 + 0x40);
    local_4c = *(float *)(iVar3 + 0x44);
    local_48 = *(float *)(iVar3 + 0x48);
    local_44 = *(float *)(iVar3 + 0x4c);
  }
  local_50 = local_50 + 5.0;
  local_4c = local_4c + 5.0;
  local_48 = local_48 + 5.0;
  local_44 = local_44 + 5.0;
  local_40 = *(float *)(param_1 + 0x40);
  fVar1 = *(float *)(param_1 + 0x44);
  local_38 = *(float *)(param_1 + 0x48);
  if (iVar3 != 0) {
    local_40 = *(float *)(iVar3 + 0x40);
    fVar1 = *(float *)(iVar3 + 0x44);
    local_38 = *(float *)(iVar3 + 0x48);
  }
  local_24 = 0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_004fbe50(0x100,&DAT_01b7bd48);
  if ((*(int *)(param_1 + 0x7d8) != 0) && (*(int *)(*(int *)(param_1 + 0x7d8) + 0x810) != 0)) {
    FUN_00c6e0b0(&local_24,param_3);
    if (local_20 != local_20 + local_18) {
      fVar2 = 0.0;
      puVar8 = local_20;
      do {
        pfVar4 = (float *)*puVar8;
        fVar5 = local_40 - *pfVar4;
        fVar6 = (fVar1 + 5.0) - (pfVar4[1] + 5.0);
        fVar7 = local_38 - pfVar4[2];
        fVar5 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
        if (fVar2 < fVar5) {
          uVar9 = 1;
          local_44 = 1.0;
          fVar2 = fVar5;
          local_50 = *pfVar4;
          local_4c = pfVar4[1] + 5.0;
          local_48 = pfVar4[2];
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != local_20 + local_18);
    }
  }
  if (local_20 != (undefined4 *)0x0) {
    local_18 = 0;
    if (local_14 != 0) {
      FUN_00dd48d0(local_20,0);
      local_14 = 0;
    }
    local_20 = (undefined4 *)0x0;
    local_1c = 0;
  }
  *param_2 = local_50;
  param_2[1] = local_4c - 5.0;
  param_2[2] = local_48;
  param_2[3] = local_44;
  if ((local_20 != (undefined4 *)0x0) && (local_18 = 0, local_14 != 0)) {
    FUN_00dd48d0(local_20,0);
  }
  return uVar9;
}

// 0081A8E0  FUN_0081a8e0  size=1159  [between]
/* WARNING: Removing unreachable block (ram,0x0081aa8d) */
/* WARNING: Removing unreachable block (ram,0x0081ac10) */

void FUN_0081a8e0(float param_1,float *param_2,float *param_3)

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
  pfStack_64 = (float *)0x81a8ff;
  pfStack_64 = (float *)FUN_00a1d5c0();
  FUN_0041c8e0(8);
  local_38 = *param_2;
  local_34 = param_2[1];
  local_30 = param_2[2];
  if (local_8 < local_c) {
    pfVar7 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_38;
      pfVar7[1] = local_34;
      pfVar7[2] = local_30;
    }
    local_8 = local_8 + 1;
  }
  local_44 = *param_3;
  local_40 = param_3[1];
  local_3c = param_3[2];
  local_20 = local_44 - local_38;
  local_1c = local_40 - local_34;
  local_18 = local_3c - local_30;
  param_2 = (float *)0x41700000;
  if (60.0 < SQRT(local_20 * local_20 + local_1c * local_1c + local_18 * local_18)) {
    param_2 = (float *)0x41a00000;
  }
  local_50 = (local_38 + local_44) * 0.5;
  local_48 = (local_3c + local_30) * 0.5;
  local_4c = local_34 + (float)param_2;
  local_20 = local_20 * 0.16666667;
  local_1c = local_1c * 0.16666667;
  local_18 = local_18 * 0.16666667;
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
      *pfVar1 = (float)pfStack_64 * param_1 + local_40;
      pfVar1[1] = unaff_ESI * param_1 + local_3c;
      pfVar1[2] = local_5c * param_1 + local_38;
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

// 0081AD70  FUN_0081ad70  size=90  [between]
void FUN_0081ad70(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(0xce,uVar1,uVar2);
  FUN_00dffb20(param_1);
  FUN_00dffbc0(param_2);
  FUN_00a8c930(0,local_160);
  return;
}

// 0081ADD0  FUN_0081add0  size=2982  [between]
void __fastcall FUN_0081add0(int *param_1)

{
  uint *puVar1;
  float fVar2;
  byte bVar3;
  code *pcVar4;
  undefined2 uVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  byte *pbVar13;
  bool bVar14;
  undefined *puVar15;
  undefined4 uVar16;
  int iStack_1f8;
  int iStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined1 auStack_1e0 [336];
  undefined1 auStack_90 [140];
  
  (**(code **)(*param_1 + 0x318))();
  param_1[0x764] = 1;
  param_1[0x588] = 1;
  param_1[0x589] = 1;
  param_1[0x587] = 1;
  param_1[0x3ab] = 1;
  param_1[0x3ac] = 1;
  iVar6 = FUN_00a81330();
  if ((iVar6 != 0) && (piVar7 = (int *)FUN_00a7c8a0(), piVar7 != (int *)0x0)) {
    puVar15 = &DAT_01be9db8;
    (**(code **)(*piVar7 + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar15);
  }
  param_1[0x3a8] = 1;
  switch(param_1[0x187]) {
  case 0:
    FUN_00a94bc0(5,0x3d888889);
    iVar6 = param_1[0x186];
    param_1[0x187] = param_1[0x187] + 1;
    uVar5 = 0xc2;
    if (iVar6 == 0x33) {
      uVar5 = 0xc6;
    }
    if (iVar6 == 0x34) {
      uVar5 = 0xc3;
    }
    if (iVar6 == 0x35) {
      uVar5 = 0xc5;
    }
    if (iVar6 == 0x36) {
      uVar5 = 0xc4;
    }
    FUN_00aa4080(uVar5,0,0x3e2aaaab,0x3f800000,0,0,0x3f800000);
    param_1[0x84e] = -0x40800000;
    pcVar4 = *(code **)(param_1[0x6f8] + 8);
    param_1[0x84d] = -0x40800000;
    param_1[0x84c] = -1;
    (*pcVar4)(0x41200000,0,0);
    param_1[0x3a6] = 0;
    if ((((param_1[0x3a4] == 0x13) && (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
        (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
      FUN_00a8caf0(5,0,0,0);
    }
    if (((param_1[0x3a4] == 0x14) && (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
       ((iVar6 = FUN_00a7c8a0(), iVar6 != 0 && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)))) {
      FUN_00a8caf0(5,0,0,0);
    }
    if (((param_1[0x3a4] == 0x19) && (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
       ((iVar6 = FUN_00a7c8a0(), iVar6 != 0 && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)))) {
      FUN_00a8caf0(5,0,0,0);
    }
    if ((((param_1[0x3a4] == 0x17) && (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
        (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
      FUN_00a8caf0(5,0,0,0);
    }
    param_1[0x248] = 0;
    FUN_0080c630();
    FUN_0080c3e0();
    param_1[0x8a4] = 0;
    param_1[0x250] = 0;
  case 1:
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar2);
    if (12.0 < (float)param_1[0x244] + fVar2) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    param_1[0x187] = 3;
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
    FUN_0040b190();
    iStack_1f4 = 0;
    if (param_1[0x3a4] == 0x12) {
      iStack_1f4 = FUN_00a82090("Emc200 Head",0x2c209,auStack_90);
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar6 = 0;
        do {
          pbVar8 = *(byte **)(*(int *)(iVar6 + 0x60 + param_1[200]) + 0x40);
          if (pbVar8 != (byte *)0x0) {
            pcVar12 = "head_top";
            do {
              bVar3 = *pbVar8;
              bVar14 = bVar3 < (byte)*pcVar12;
              if (bVar3 != *pcVar12) {
LAB_0081b112:
                iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_0081b117;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar8[1];
              bVar14 = bVar3 < (byte)pcVar12[1];
              if (bVar3 != pcVar12[1]) goto LAB_0081b112;
              pbVar8 = pbVar8 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar3 != 0);
            iVar9 = 0;
LAB_0081b117:
            if (iVar9 == 0) {
              puVar1 = (uint *)(iVar6 + param_1[200] + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar6 = 0;
        do {
          pbVar8 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar6) + 0x40);
          if (pbVar8 != (byte *)0x0) {
            pcVar12 = "in_head_top";
            do {
              bVar3 = *pbVar8;
              bVar14 = bVar3 < (byte)*pcVar12;
              if (bVar3 != *pcVar12) {
LAB_0081b180:
                iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_0081b185;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar8[1];
              bVar14 = bVar3 < (byte)pcVar12[1];
              if (bVar3 != pcVar12[1]) goto LAB_0081b180;
              pbVar8 = pbVar8 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar3 != 0);
            iVar9 = 0;
LAB_0081b185:
            if (iVar9 == 0) {
              puVar1 = (uint *)(param_1[200] + 0x38 + iVar6);
              *puVar1 = *puVar1 | 1;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
    }
    if (param_1[0x3a4] == 0x88) {
      iStack_1f4 = FUN_00a82090("Emc200 HeadUnder",0x2c20c,auStack_90);
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar6 = 0;
        do {
          pbVar8 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar6) + 0x40);
          if (pbVar8 != (byte *)0x0) {
            pcVar12 = "head_down";
            do {
              bVar3 = *pbVar8;
              bVar14 = bVar3 < (byte)*pcVar12;
              if (bVar3 != *pcVar12) {
LAB_0081b220:
                iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_0081b225;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar8[1];
              bVar14 = bVar3 < (byte)pcVar12[1];
              if (bVar3 != pcVar12[1]) goto LAB_0081b220;
              pbVar8 = pbVar8 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar3 != 0);
            iVar9 = 0;
LAB_0081b225:
            if (iVar9 == 0) {
              puVar1 = (uint *)(param_1[200] + 0x38 + iVar6);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar6 = 0;
        do {
          pbVar8 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar6) + 0x40);
          if (pbVar8 != (byte *)0x0) {
            pcVar12 = "in_head_down";
            do {
              bVar3 = *pbVar8;
              bVar14 = bVar3 < (byte)*pcVar12;
              if (bVar3 != *pcVar12) {
LAB_0081b290:
                iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_0081b295;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar8[1];
              bVar14 = bVar3 < (byte)pcVar12[1];
              if (bVar3 != pcVar12[1]) goto LAB_0081b290;
              pbVar8 = pbVar8 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar3 != 0);
            iVar9 = 0;
LAB_0081b295:
            if (iVar9 == 0) {
              puVar1 = (uint *)(param_1[200] + 0x38 + iVar6);
              *puVar1 = *puVar1 | 1;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
    }
    if (param_1[0x3a4] == 0x15) {
      iStack_1f4 = FUN_00a82090("Emc200 Tail",0x2c202,auStack_90);
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar6 = 0;
        do {
          iVar9 = param_1[200];
          iVar10 = *(int *)(*(int *)(iVar9 + 0x60 + iVar6) + 0x40);
          if ((iVar10 != 0) && (iVar10 = FUN_00fdbbd0(iVar10,"back_tail"), iVar10 != 0)) {
            puVar1 = (uint *)(iVar9 + 0x38 + iVar6);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar6 = 0;
        do {
          iVar9 = param_1[200];
          iVar10 = *(int *)(*(int *)(iVar9 + 0x60 + iVar6) + 0x40);
          if ((iVar10 != 0) && (iVar10 = FUN_00fdbbd0(iVar10,"front_tail"), iVar10 != 0)) {
            puVar1 = (uint *)(iVar9 + 0x38 + iVar6);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
    }
    if (param_1[0x3a4] == 0x16) {
      iStack_1f4 = FUN_00a82090("Emc200 LFoot",0x2c207,auStack_90);
      iVar6 = 0;
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          pbVar8 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar6) + 0x40);
          if (pbVar8 != (byte *)0x0) {
            pbVar13 = (byte *)0x16413a4;
            do {
              bVar3 = *pbVar8;
              bVar14 = bVar3 < *pbVar13;
              if (bVar3 != *pbVar13) {
LAB_0081b407:
                iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_0081b40c;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar8[1];
              bVar14 = bVar3 < pbVar13[1];
              if (bVar3 != pbVar13[1]) goto LAB_0081b407;
              pbVar8 = pbVar8 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar3 != 0);
            iVar9 = 0;
LAB_0081b40c:
            if (iVar9 == 0) {
              puVar1 = (uint *)(param_1[200] + 0x38 + iVar6);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar6 = 0;
        do {
          pbVar8 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar6) + 0x40);
          if (pbVar8 != (byte *)0x0) {
            pcVar12 = "in_L_reg";
            do {
              bVar3 = *pbVar8;
              bVar14 = bVar3 < (byte)*pcVar12;
              if (bVar3 != *pcVar12) {
LAB_0081b477:
                iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_0081b47c;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar8[1];
              bVar14 = bVar3 < (byte)pcVar12[1];
              if (bVar3 != pcVar12[1]) goto LAB_0081b477;
              pbVar8 = pbVar8 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar3 != 0);
            iVar9 = 0;
LAB_0081b47c:
            if (iVar9 == 0) {
              puVar1 = (uint *)(param_1[200] + 0x38 + iVar6);
              *puVar1 = *puVar1 | 1;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
    }
    if (param_1[0x3a4] == 0x18) {
      iStack_1f4 = FUN_00a82090("Emc200 RFoot",0x2c206,auStack_90);
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar6 = 0;
        do {
          pbVar8 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar6) + 0x40);
          if (pbVar8 != (byte *)0x0) {
            pcVar12 = "R_reg";
            do {
              bVar3 = *pbVar8;
              bVar14 = bVar3 < (byte)*pcVar12;
              if (bVar3 != *pcVar12) {
LAB_0081b520:
                iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_0081b525;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar8[1];
              bVar14 = bVar3 < (byte)pcVar12[1];
              if (bVar3 != pcVar12[1]) goto LAB_0081b520;
              pbVar8 = pbVar8 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar3 != 0);
            iVar9 = 0;
LAB_0081b525:
            if (iVar9 == 0) {
              puVar1 = (uint *)(param_1[200] + iVar6 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
      iStack_1f8 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar6 = 0;
        do {
          pbVar8 = *(byte **)(*(int *)(param_1[200] + 0x60 + iVar6) + 0x40);
          if (pbVar8 != (byte *)0x0) {
            pcVar12 = "in_R_reg";
            do {
              bVar3 = *pbVar8;
              bVar14 = bVar3 < (byte)*pcVar12;
              if (bVar3 != *pcVar12) {
LAB_0081b590:
                iVar9 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                goto LAB_0081b595;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar8[1];
              bVar14 = bVar3 < (byte)pcVar12[1];
              if (bVar3 != pcVar12[1]) goto LAB_0081b590;
              pbVar8 = pbVar8 + 2;
              pcVar12 = pcVar12 + 2;
            } while (bVar3 != 0);
            iVar9 = 0;
LAB_0081b595:
            if (iVar9 == 0) {
              puVar1 = (uint *)(param_1[200] + 0x38 + iVar6);
              *puVar1 = *puVar1 | 1;
            }
          }
          iStack_1f8 = iStack_1f8 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iStack_1f8 < (short)param_1[0xc9]);
      }
    }
    if (iStack_1f4 != 0) {
      iVar6 = FUN_00a7c8a0();
      if (iVar6 != 0) {
        FUN_00acf8b0(param_1[0x13c],0);
        uVar11 = FUN_009f8b40();
        FUN_009f8ae0(uVar11);
        uVar11 = FUN_009f8b40();
        FUN_00ac55a0(uVar11);
      }
      uVar11 = FUN_00a7c7f0();
      FUN_00a7c960(uVar11);
    }
  case 3:
    param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
    break;
  default:
    goto switchD_0081ae58_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_0081ae58_default:
  if (param_1[0x8a4] != 0) {
    FUN_00a81330();
    if ((param_1[0x3a4] == 0x19) && (iVar6 = FUN_00a81330(), iVar6 != 0)) {
      if ((*(byte *)(param_1 + 0x3a5) & 0x80) == 0) {
        uVar16 = 0;
        uVar11 = FUN_00a7c8a0(0);
        FUN_004039a0(3,uVar11,uVar16);
        FUN_00dffbc0(0x113);
        FUN_00dffb20(param_1 + 0x724);
        uStack_1f0 = 0xc02ccccd;
        uStack_1ec = 0x3f000000;
        uStack_1e8 = 0;
        FUN_00dffbd0(&uStack_1f0);
        FUN_00a8c8b0(param_1[300],auStack_1e0);
      }
      if (param_1[0x3a4] == 0x19) {
        *(ushort *)(param_1 + 0x3a5) = *(ushort *)(param_1 + 0x3a5) | 0x80;
      }
      uVar16 = 0;
      piVar7 = param_1 + 0x850;
      uVar11 = FUN_00a7c8a0(piVar7,0);
      FUN_00a8e5d0(uVar11,piVar7,uVar16);
    }
    if ((param_1[0x3a4] == 0x17) && (iVar6 = FUN_00a81330(), iVar6 != 0)) {
      if ((*(byte *)(param_1 + 0x3a5) & 0x20) == 0) {
        uVar16 = 0;
        uVar11 = FUN_00a7c8a0(0);
        FUN_004039a0(3,uVar11,uVar16);
        FUN_00dffbc0(0x112);
        FUN_00dffb20(param_1 + 0x724);
        uStack_1f0 = 0x402ccccd;
        uStack_1ec = 0x3f000000;
        uStack_1e8 = 0;
        FUN_00dffbd0(&uStack_1f0);
        FUN_00a8c8b0(param_1[300],auStack_1e0);
      }
      if (param_1[0x3a4] == 0x17) {
        *(ushort *)(param_1 + 0x3a5) = *(ushort *)(param_1 + 0x3a5) | 0x20;
      }
      uVar16 = 0;
      piVar7 = param_1 + 0x850;
      uVar11 = FUN_00a7c8a0(piVar7,0);
      FUN_00a8e5d0(uVar11,piVar7,uVar16);
    }
    if ((param_1[0x3a4] == 0x13) && (iVar6 = FUN_00a81330(), iVar6 != 0)) {
      if ((*(byte *)(param_1 + 0x3a5) & 4) == 0) {
        uVar16 = 0;
        uVar11 = FUN_00a7c8a0(0);
        FUN_004039a0(3,uVar11,uVar16);
        FUN_00dffbc0(0x111);
        FUN_00dffb20(param_1 + 0x724);
        uStack_1f0 = 0;
        uStack_1ec = 0x3f800000;
        uStack_1e8 = 0;
        FUN_00dffbd0(&uStack_1f0);
        FUN_00a8c8b0(param_1[300],auStack_1e0);
      }
      if (param_1[0x3a4] == 0x13) {
        *(ushort *)(param_1 + 0x3a5) = *(ushort *)(param_1 + 0x3a5) | 4;
      }
      uVar16 = 0;
      piVar7 = param_1 + 0x850;
      uVar11 = FUN_00a7c8a0(piVar7,0);
      FUN_00a8e5d0(uVar11,piVar7,uVar16);
    }
    if ((param_1[0x3a4] == 0x14) && (iVar6 = FUN_00a81330(), iVar6 != 0)) {
      if ((*(byte *)(param_1 + 0x3a5) & 2) == 0) {
        uVar16 = 0;
        uVar11 = FUN_00a7c8a0(0);
        FUN_004039a0(3,uVar11,uVar16);
        FUN_00dffbc0(0x110);
        FUN_00dffb20(param_1 + 0x724);
        uStack_1f0 = 0;
        uStack_1ec = 0x3f800000;
        uStack_1e8 = 0;
        FUN_00dffbd0(&uStack_1f0);
        FUN_00a8c8b0(param_1[300],auStack_1e0);
      }
      if (param_1[0x3a4] == 0x14) {
        *(ushort *)(param_1 + 0x3a5) = *(ushort *)(param_1 + 0x3a5) | 2;
      }
      uVar16 = 0;
      piVar7 = param_1 + 0x850;
      uVar11 = FUN_00a7c8a0(piVar7,0);
      FUN_00a8e5d0(uVar11,piVar7,uVar16);
    }
  }
  switchD_0080dbae::default();
  if (param_1[0x1ec] != 0) {
    FUN_008f40f0(param_1);
  }
  return;
}

// 0081B990  Emc200::vf32C  size=2178  [class]
undefined4 __fastcall Emc200::vf32C(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  float10 fVar6;
  int local_274;
  undefined4 uStack_26c;
  int iStack_268;
  LPCRITICAL_SECTION p_Stack_264;
  int local_260 [2];
  undefined1 uStack_258;
  byte bStack_24f;
  float fStack_230;
  uint uStack_1d4;
  uint uStack_1d0;
  int iStack_140;
  int iStack_138;
  
  if (param_1[0x83a] != 0) {
    *(int *)(param_1[0x83a] + 0x44) = param_1[0x765];
    *(int *)(param_1[0x83a] + 0x48) = param_1[0x766];
  }
  if (param_1[0x83b] != 0) {
    *(int *)(param_1[0x83b] + 0x44) = param_1[0x767];
    *(int *)(param_1[0x83b] + 0x48) = param_1[0x768];
  }
  if (param_1[0x83c] != 0) {
    *(int *)(param_1[0x83c] + 0x44) = param_1[0x76d];
    *(int *)(param_1[0x83c] + 0x48) = param_1[0x76e];
  }
  if (param_1[0x83d] != 0) {
    *(int *)(param_1[0x83d] + 0x44) = param_1[0x76f];
    *(int *)(param_1[0x83d] + 0x48) = param_1[0x770];
  }
  param_1[0x785] = 0;
  param_1[0x787] = 0;
  param_1[0x788] = 0;
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  FUN_00ac2080(1);
  FUN_00ac2080(3);
  FUN_00ac2080(2);
  FUN_00ac2080(4);
  FUN_00ac2080(5);
  FUN_00ac2080(6);
  FUN_00ac2080(8);
  FUN_00ac2080(9);
  FUN_00ac2080(10);
  FUN_00ac2080(0xb);
  FUN_00ac2080(0xc);
  FUN_00ac2080(0xd);
  FUN_00ac2080(0xe);
  param_1[0x8a4] = 0;
  piVar4 = (int *)param_1[0x19f];
  piVar3 = piVar4 + param_1[0x1a1] * 0x54;
  FUN_00445db0();
  FUN_004105d0();
  local_274 = -1;
  bVar5 = false;
  if (piVar4 != piVar3) {
    do {
      if (*piVar4 != 0x147) {
        if (*piVar4 == 0x1b0) {
          (**(code **)(*param_1 + 0x370))(piVar4);
        }
        else {
          iVar2 = piVar4[1];
          if (local_274 <= iVar2) {
            FUN_00448f50(piVar4);
            bVar5 = true;
            FUN_00448f50(piVar4);
            local_274 = iVar2;
            if (piVar4[0x25] != 0) {
              param_1[0x8a4] = 1;
            }
          }
        }
      }
      piVar4 = piVar4 + 0x54;
    } while (piVar4 != piVar3);
    if (((((bVar5) && (iVar2 = FUN_00a8ef10(), iVar2 == 0)) &&
         ((*(byte *)(param_1 + 0x130) & 1) != 0)) &&
        ((piVar4 = (int *)0x0, param_1[0x139] == 0 && (param_1[0x3a8] == 0)))) &&
       ((iVar2 = FUN_00a8f040(local_260), iVar2 == 0 && (param_1[0x128] != 2)))) {
      p_Stack_264 = (LPCRITICAL_SECTION)(param_1 + 0x280);
      if (param_1[0x286] != 0) {
        EnterCriticalSection(p_Stack_264);
      }
      uStack_26c = 0;
      iStack_268 = FUN_00a81330();
      if (iStack_268 != 0) {
        piVar4 = (int *)FUN_00a7c8a0();
      }
      if (piVar4 == param_1) {
        (**(code **)(*param_1 + 0x198))(piVar4,local_260,0x10);
      }
      else {
        iVar2 = FUN_004025b0();
        if (iVar2 != 0) {
          param_1[0x771] = iStack_138;
          local_274 = FUN_00fdbc60();
          iVar2 = FUN_00416910(6);
          if (iVar2 != 0) {
            local_274 = 0;
          }
          (**(code **)(*param_1 + 0x30c))(local_274,0);
          if ((piVar4 != (int *)0x0) && ((*(byte *)(piVar4 + 0x130) & 0x10) != 0)) {
            (**(code **)(*param_1 + 0x21c))(piVar4,uStack_258,0x3c23d70a,0);
            param_1[0xc6a] = 0;
          }
          pcVar1 = *(code **)(*param_1 + 0x198);
          param_1[0x771] = iStack_140;
          (*pcVar1)(piVar4,&iStack_268,1);
          fVar6 = (float10)FUN_00ddba30(fStack_230 - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar6;
          bVar5 = (uStack_1d4 & 0x10000000) != 0;
          if (param_1[0x21c] < 1) {
            if (bVar5) {
              param_1[0x21c] = 0;
              param_1[0x139] = 1;
              if (DAT_018b9174 == 0xc30) {
                FUN_00d5ea40("PC30_RAY_DEAD",1,0);
              }
              goto LAB_0081c1f6;
            }
            if (param_1[0xc1e] == 0) {
              pcVar1 = *(code **)(*param_1 + 0x220);
              param_1[0xc1e] = 1;
              param_1[0x21c] = 1;
              (*pcVar1)(0x40a00000);
              param_1[0x84d] = 0x42700000;
              param_1[0x84c] = 0x2c;
            }
            else {
              if ((float)param_1[0x84d] <= 0.0) {
                param_1[0x21c] = 0;
                param_1[0x139] = 1;
                if ((DAT_018b9174 == 0xc30) &&
                   (FUN_00d5ea40("PC30_RAY_DEAD",1,0), (uStack_1d0 & 0x200) != 0)) {
                  param_1[0x810] = 4;
                }
                goto LAB_0081c1f6;
              }
              param_1[0x21c] = 1;
            }
          }
          iVar2 = param_1[0x771];
          if ((iVar2 == 1) || (iVar2 == 8)) {
            param_1[0x785] = 1;
          }
          if ((iVar2 == 3) || (iVar2 == 10)) {
            param_1[0x787] = 1;
          }
          if ((iVar2 == 2) || (iVar2 == 9)) {
            param_1[0x788] = 1;
          }
          iVar2 = (**(code **)(*param_1 + 0x1d8))();
          if (iVar2 == 0) {
            iVar2 = param_1[0x771];
            if ((iVar2 == 1) || (iVar2 == 8)) {
              param_1[0x769] = param_1[0x769] - local_274;
              param_1[0x819] = 0x42200000;
              param_1[0x76b] = param_1[0x76b] - local_274;
              param_1[0x77e] = param_1[0x77e] + 1;
              param_1[0x785] = 1;
              if (param_1[0x769] < 0) {
                iVar2 = FUN_00fdbc60();
                param_1[0x769] = iVar2;
                FUN_00a8caf0(0x27,0,0,0);
                param_1[0x82a] = param_1[0x82a] + 1;
                if (1 < param_1[0x82a]) {
                  param_1[0x82a] = 0;
                  if (param_1[0x786] == 0) {
                    (**(code **)(*param_1 + 0x358))(0x33,param_1 + 0x6a0);
                  }
                  param_1[0x786] = 1;
                }
                if (!bVar5) {
                  FUN_00809700(1);
                }
                goto LAB_0081c1f6;
              }
            }
            if ((iVar2 == 3) || (iVar2 == 10)) {
              param_1[0x765] = param_1[0x765] - local_274;
              param_1[0x780] = param_1[0x780] + 1;
              param_1[0x787] = 1;
              if ((param_1[0x782] == 0) && ((float)param_1[0x765] < (float)param_1[0x766] * 0.5)) {
                iVar2 = FUN_00a12210(0x20);
                FUN_0081a3d0(0x36,iVar2 + 0x40);
                param_1[0x782] = 1;
                FUN_00e5e0c0("em0200_se_dmg_exp_foot",param_1,0x20,0);
                FUN_00a8caf0(0x28,0,0,0);
                if (!bVar5) {
                  FUN_008098a0(1);
                }
              }
              if ((param_1[0x765] < 0) && (param_1[0x784] == 0)) {
                (**(code **)(*param_1 + 0x358))(0x35,param_1 + 0x6a0);
                param_1[0x784] = 1;
                iVar2 = FUN_00a12210(0x20);
                FUN_0081a3d0(0x36,iVar2 + 0x40);
                FUN_00a8caf0(0x28,0,0,0);
                FUN_00e5e0c0("em0200_se_dmg_exp_foot",param_1,0x20,0);
                lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_5(1,"_lreg");
                param_1[0x82e] = 0x3ecccccd;
                if (!bVar5) {
                  FUN_008098a0(1);
                }
                goto LAB_0081c1f6;
              }
            }
            if ((param_1[0x771] == 2) || (param_1[0x771] == 9)) {
              param_1[0x767] = param_1[0x767] - local_274;
              param_1[0x77f] = param_1[0x77f] + 1;
              param_1[0x788] = 1;
              if ((param_1[0x781] == 0) && ((float)param_1[0x767] < (float)param_1[0x768] * 0.5)) {
                iVar2 = FUN_00a12210(0x2b);
                FUN_0081a3d0(0x36,iVar2 + 0x40);
                param_1[0x781] = 1;
                FUN_00e5e0c0("em0200_se_dmg_exp_foot",param_1,0x2b,0);
                FUN_00a8caf0(0x29,0,0,0);
                if (!bVar5) {
                  FUN_008097d0(1);
                }
              }
              if ((param_1[0x767] < 0) && (param_1[0x783] == 0)) {
                (**(code **)(*param_1 + 0x358))(0x34,param_1 + 0x6a0);
                param_1[0x783] = 1;
                iVar2 = FUN_00a12210(0x2b);
                FUN_0081a3d0(0x36,iVar2 + 0x40);
                FUN_00a8caf0(0x29,0,0,0);
                FUN_00e5e0c0("em0200_se_dmg_exp_foot",param_1,0x2b,0);
                lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_5(1,"_rreg");
                param_1[0x82d] = 0x3ecccccd;
                if (!bVar5) {
                  FUN_008097d0(1);
                }
                goto LAB_0081c1f6;
              }
            }
          }
          if (local_260[0] == 0x2c) {
            (**(code **)(*param_1 + 0x14c))(9,iStack_268);
          }
          if ((param_1[0x771] == 1) && (4 < bStack_24f)) {
            FUN_00aa4080(0xd1,3,0x3d088889,0x3f000000,0x8000010,0,0x3fc00000);
          }
          (**(code **)(*param_1 + 0x1d8))();
          uStack_26c = 1;
        }
      }
LAB_0081c1f6:
      if (p_Stack_264[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        LeaveCriticalSection(p_Stack_264);
      }
      return uStack_26c;
    }
  }
  return 0;
}

// 0081C220  Emc200::vf50  size=1319  [class]
void __fastcall Emc200::vf50(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  BehaviorEmBase::vf50();
  FUN_00819c20();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f5990(param_1);
  }
  if (*(int *)(param_1 + 0x2044) != 0) {
    iVar4 = FUN_00a12210(0x114);
    fStack_20 = *(float *)(param_1 + 0x50);
    fStack_1c = *(float *)(param_1 + 0x54);
    fStack_18 = *(float *)(param_1 + 0x58);
    if (iVar4 != 0) {
      fStack_20 = *(float *)(iVar4 + 0x40);
      fStack_1c = *(float *)(iVar4 + 0x44);
      fStack_18 = *(float *)(iVar4 + 0x48);
    }
    if (*(int *)(param_1 + 0xa84) != 0) {
      fStack_1c = *(float *)(*(int *)(param_1 + 0xa84) + 0x44);
    }
    fVar1 = *(float *)(param_1 + 0x44) - 5.0;
    if (fStack_1c < fVar1) {
      fStack_1c = fVar1;
    }
    uStack_24 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_48 = 0;
    uStack_4c = 0;
    uStack_14 = 0x3f800000;
    uStack_28 = 0x3f800000;
    uStack_3c = 0x3f800000;
    uStack_50 = 0x3f800000;
    FUN_00920c60(&uStack_50,0,0);
  }
  if (*(int *)(param_1 + 0x2048) != 0) {
    iVar4 = FUN_00a12210(0x114);
    fVar1 = *(float *)(param_1 + 0x50);
    fVar2 = *(float *)(param_1 + 0x54);
    fVar3 = *(float *)(param_1 + 0x58);
    if (iVar4 == 0) {
      uStack_24 = 0;
      uStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_44 = 0;
      uStack_48 = 0;
      uStack_4c = 0;
      uStack_14 = 0x3f800000;
      uStack_28 = 0x3f800000;
      uStack_3c = 0x3f800000;
      uStack_50 = 0x3f800000;
    }
    else {
      fStack_70 = *(float *)(iVar4 + 0x40);
      fStack_6c = *(float *)(iVar4 + 0x44);
      fStack_68 = *(float *)(iVar4 + 0x48);
      thunk_FUN_00ddfff0(&uStack_60,iVar4 + 0x10);
      fStack_5c = fStack_5c * -1.0;
      D3DXMatrixRotationY(&uStack_50,fStack_5c);
      fVar1 = fStack_70;
      fVar2 = fStack_6c;
      fVar3 = fStack_68;
    }
    fStack_20 = fVar1;
    fStack_1c = fVar2;
    fStack_18 = fVar3;
    FUN_00920c60(&uStack_50,0,0);
  }
  if (*(int *)(param_1 + 0x204c) != 0) {
    iVar4 = FUN_00a12210(9);
    fStack_70 = *(float *)(param_1 + 0x50);
    fStack_6c = *(float *)(param_1 + 0x54);
    fStack_68 = *(float *)(param_1 + 0x58);
    uStack_64 = *(undefined4 *)(param_1 + 0x5c);
    uStack_60 = 0;
    fStack_5c = 0.1;
    uStack_58 = 0x40a00000;
    if (iVar4 != 0) {
      D3DXVec3TransformNormal(&fStack_70,&uStack_60,iVar4 + 0x10);
      fStack_70 = *(float *)(iVar4 + 0x40) + fStack_70;
      fStack_6c = *(float *)(iVar4 + 0x44) + fStack_6c;
      fStack_68 = *(float *)(iVar4 + 0x48) + fStack_68;
    }
    if (*(int *)(param_1 + 0xa84) != 0) {
      fStack_6c = *(float *)(*(int *)(param_1 + 0xa84) + 0x44);
    }
    fVar1 = *(float *)(param_1 + 0x44) - 5.0;
    if (fStack_6c < fVar1) {
      fStack_6c = fVar1;
    }
    uStack_24 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_48 = 0;
    uStack_4c = 0;
    uStack_14 = 0x3f800000;
    uStack_28 = 0x3f800000;
    uStack_3c = 0x3f800000;
    uStack_50 = 0x3f800000;
    fStack_20 = fStack_70;
    fStack_1c = fStack_6c;
    fStack_18 = fStack_68;
    FUN_00920c60(&uStack_50,0,0);
  }
  if (*(int *)(param_1 + 0x2050) != 0) {
    iVar4 = FUN_00a12210(9);
    fStack_70 = *(float *)(param_1 + 0x50);
    fStack_6c = *(float *)(param_1 + 0x54);
    fStack_68 = *(float *)(param_1 + 0x58);
    uStack_64 = *(undefined4 *)(param_1 + 0x5c);
    uStack_60 = 0;
    fStack_5c = 0.1;
    uStack_58 = 0x40200000;
    if (iVar4 != 0) {
      D3DXVec3TransformNormal(&fStack_70,&uStack_60,iVar4 + 0x10);
      fStack_70 = fStack_70 + *(float *)(iVar4 + 0x40);
      fStack_6c = *(float *)(iVar4 + 0x44) + fStack_6c;
      fStack_68 = *(float *)(iVar4 + 0x48) + fStack_68;
    }
    if (*(int *)(param_1 + 0xa84) != 0) {
      fStack_6c = *(float *)(*(int *)(param_1 + 0xa84) + 0x44);
    }
    fVar1 = *(float *)(param_1 + 0x44) - 5.0;
    if (fStack_6c < fVar1) {
      fStack_6c = fVar1;
    }
    uStack_24 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_48 = 0;
    uStack_4c = 0;
    uStack_14 = 0x3f800000;
    uStack_28 = 0x3f800000;
    uStack_3c = 0x3f800000;
    uStack_50 = 0x3f800000;
    fStack_20 = fStack_70;
    fStack_1c = fStack_6c;
    fStack_18 = fStack_68;
    FUN_00920c60(&uStack_50,0,0);
  }
  if (*(int *)(param_1 + 0x2054) != 0) {
    iVar4 = FUN_00a12210(9);
    fStack_70 = *(float *)(param_1 + 0x50);
    fStack_6c = *(float *)(param_1 + 0x54);
    fStack_68 = *(float *)(param_1 + 0x58);
    uStack_64 = *(undefined4 *)(param_1 + 0x5c);
    uStack_60 = 0;
    fStack_5c = 0.1;
    uStack_58 = 0;
    if (iVar4 != 0) {
      D3DXVec3TransformNormal(&fStack_70,&uStack_60,iVar4 + 0x10);
      fStack_70 = fStack_70 + *(float *)(iVar4 + 0x40);
      fStack_6c = *(float *)(iVar4 + 0x44) + fStack_6c;
      fStack_68 = *(float *)(iVar4 + 0x48) + fStack_68;
    }
    if (*(int *)(param_1 + 0xa84) != 0) {
      fStack_6c = *(float *)(*(int *)(param_1 + 0xa84) + 0x44);
    }
    fVar1 = *(float *)(param_1 + 0x44) - 5.0;
    if (fStack_6c < fVar1) {
      fStack_6c = fVar1;
    }
    uStack_24 = 0;
    uStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_48 = 0;
    uStack_4c = 0;
    uStack_14 = 0x3f800000;
    uStack_28 = 0x3f800000;
    uStack_3c = 0x3f800000;
    uStack_50 = 0x3f800000;
    fStack_20 = fStack_70;
    fStack_1c = fStack_6c;
    fStack_18 = fStack_68;
    FUN_00920c60(&uStack_50,0,0);
  }
  return;
}

// 0081C750  FUN_0081c750  size=2032  [callgraph]
void __fastcall FUN_0081c750(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if ((float)param_1[0x833] <= 0.0) {
    iVar5 = FUN_00a81330();
    if (((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
       (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0xd90) = 1;
    }
    iVar5 = FUN_00a81330();
    if (((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
       (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0xd90) = 1;
    }
    iVar5 = FUN_00a81330();
    if (((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
       (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0xd90) = 1;
    }
    iVar5 = FUN_00a81330();
    if (((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
       (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      *(undefined4 *)(iVar5 + 0xd90) = 1;
    }
  }
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(10,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar5 = param_1[0x2a1];
    param_1[0x248] = 0x44160000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0x41a00000;
    param_1[0x250] = 0;
    if (iVar5 != 0) {
      fStack_20 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
      fStack_1c = *(float *)(iVar5 + 0x44) - (float)param_1[0x11];
      fStack_18 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
      fStack_14 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
      fVar1 = fStack_18 * fStack_18 + fStack_20 * fStack_20 + fStack_1c * fStack_1c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_20,&fStack_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_20 = 0.0;
        fStack_1c = 1.0;
        fStack_18 = 0.0;
      }
      sVar4 = FUN_00dde2d0(0xfffffff6,10);
      iVar5 = param_1[0x2a1];
      fVar1 = (float)(int)sVar4;
      fStack_20 = fStack_20 * fVar1;
      fStack_1c = fStack_1c * fVar1;
      fStack_18 = fStack_18 * fVar1;
      fStack_14 = fStack_14 * fVar1;
      fVar1 = *(float *)(iVar5 + 0x44);
      fVar2 = *(float *)(iVar5 + 0x48);
      fVar3 = *(float *)(iVar5 + 0x4c);
      param_1[0x750] = (int)(*(float *)(iVar5 + 0x40) + fStack_20);
      param_1[0x751] = (int)(fVar1 + fStack_1c);
      param_1[0x752] = (int)(fVar2 + fStack_18);
      param_1[0x753] = (int)(fStack_14 + fVar3);
    }
    iVar5 = param_1[0x2a1];
    if (iVar5 != 0) {
      fVar7 = (float10)fpatan((float10)*(float *)(iVar5 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar5 + 0x48) - (float10)(float)param_1[0x12]);
      fVar6 = (float10)FUN_00ddba30((float)(fVar7 + (float10)3.1415927));
      iVar5 = FUN_0081a460(&fStack_20,0xffffffff,(float)fVar6,0x3fb2b8c2,0x42200000);
      if (iVar5 == 1) {
LAB_0081ca6f:
        param_1[0x750] = (int)fStack_20;
        param_1[0x751] = (int)fStack_1c;
        param_1[0x752] = (int)fStack_18;
        param_1[0x753] = (int)fStack_14;
      }
      else {
        fVar6 = (float10)FUN_00ddba30((float)fVar7);
        iVar5 = FUN_0081a460(&fStack_20,0xffffffff,(float)fVar6,0x40490fdb,0x42200000);
        if ((iVar5 == 1) || (iVar5 = FUN_0081a700(&fStack_20,0xffffffff), iVar5 != 0))
        goto LAB_0081ca6f;
      }
      if (param_1[0xc1c] != 0) {
        param_1[0x249] = 0x41e00000;
        if ((float)param_1[0x16] <= 0.0) {
          param_1[0x750] = 0x42be0000;
          param_1[0x751] = 0x4122b852;
          iVar5 = 0x42940000;
        }
        else {
          param_1[0x750] = 0x42d20000;
          param_1[0x751] = 0x41266666;
          iVar5 = -0x3d64f5c3;
        }
        param_1[0x752] = iVar5;
      }
    }
    param_1[0x24a] = 0;
    param_1[0x84b] = param_1[0x84a];
    param_1[0x8b8] = 0;
    param_1[0x84a] = -1;
    param_1[0x251] = 0;
    param_1[0x24b] = 0x42200000;
    fVar1 = SQRT(((float)param_1[0x752] - (float)param_1[0x12]) *
                 ((float)param_1[0x752] - (float)param_1[0x12]) +
                 ((float)param_1[0x750] - (float)param_1[0x10]) *
                 ((float)param_1[0x750] - (float)param_1[0x10]));
    if (NAN(fVar1) || 30.0 < fVar1 == (fVar1 == 30.0)) goto switchD_0081c847_caseD_1;
    param_1[0x24b] = (int)((fVar1 - 30.0) * 0.5 + 40.0);
    break;
  case 1:
switchD_0081c847_caseD_1:
    break;
  case 2:
    FUN_00aa4080(0xb,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0081cca9;
  case 3:
LAB_0081cca9:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_0080b820(param_1 + 0xc20,param_1 + 0x10,param_1[0x8b8]);
    FUN_00a581b0(&fStack_20,0,param_1[0x24a]);
    param_1[0x8b8] = param_1[0x24a];
    fVar1 = (2.0 / (float)param_1[0x24b]) * (float)param_1[0x244] + (float)param_1[0x24a];
    param_1[0x24a] = (int)fVar1;
    if (2.0 <= fVar1) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = (int)fStack_20;
    param_1[0x15] = (int)fStack_1c;
    param_1[0x16] = (int)fStack_18;
    goto LAB_0081cc56;
  case 4:
    FUN_00aa4080(0xc,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0081cd81;
  case 5:
LAB_0081cd81:
    (**(code **)(*param_1 + 0x314))();
    param_1[0x224] = (int)((float)param_1[0x224] * 0.7);
    param_1[0x226] = (int)((float)param_1[0x226] * 0.7);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00a8caf0(0,0,0,0);
      if (((float)param_1[0x2a8] < 1.5707964) && (1600.0 < (float)param_1[0x2a4])) {
        if (param_1[0xc68] == 0) {
          uVar8 = 0x18;
        }
        else {
          uVar8 = 0xb;
        }
        FUN_00a8caf0(uVar8,0,0,0);
      }
      if ((((float)param_1[0x2a8] < 1.5707964) && (3600.0 < (float)param_1[0x2a4])) &&
         (sVar4 = FUN_00dde2d0(0,1), sVar4 != 0)) {
        FUN_00a8caf0(3,0,0,0);
      }
      if (((param_1[0x84b] == 3) && ((float)param_1[0x2a8] < 1.5707964)) &&
         (1600.0 < (float)param_1[0x2a4])) {
        FUN_00a8caf0(3,0,0,0);
      }
      if (param_1[0xc1c] != 0) {
        FUN_00a8caf0(0x18,0,0,0);
      }
    }
    goto LAB_0081cc56;
  default:
    goto switchD_0081c847_default;
  }
  iVar5 = FUN_00a950a0(0,0x42dc0000);
  if (iVar5 != 0) {
    if (param_1[0x251] == 0) {
      FUN_0081a8e0(param_1 + 0xc20,param_1 + 0x10,param_1 + 0x750);
    }
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x251] = 1;
  }
  if (param_1[0x251] == 1) {
    FUN_0080b820(param_1 + 0xc20,param_1 + 0x10,param_1[0x8b8]);
    FUN_00a581b0(&fStack_20,0,param_1[0x24a]);
    param_1[0x8b8] = param_1[0x24a];
    param_1[0x24a] =
         (int)((2.0 / (float)param_1[0x24b]) * (float)param_1[0x244] + (float)param_1[0x24a]);
    param_1[0x14] = (int)fStack_20;
    param_1[0x15] = (int)fStack_1c;
    param_1[0x16] = (int)fStack_18;
  }
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
LAB_0081cc56:
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_0081c847_default:
  if ((param_1[0x2a1] != 0) && (param_1[0x187] == 3)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0081CF60  FUN_0081cf60  size=1653  [callgraph]
void __fastcall FUN_0081cf60(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float local_3c;
  float local_30;
  float local_28;
  float local_20;
  float local_18;
  
  if (((2 < *(int *)(param_1 + 0x61c)) && (*(int *)(param_1 + 0x61c) < 6)) &&
     (*(int *)(param_1 + 0x207c) != 0)) {
    FUN_00a8caf0(0x20,0,0,0);
    return;
  }
  local_30 = 0.0;
  local_28 = 0.0;
  *(undefined4 *)(param_1 + 0x1620) = 1;
  iVar7 = FUN_00a12210(0x20);
  if (iVar7 != 0) {
    local_30 = *(float *)(iVar7 + 0x40);
    local_28 = *(float *)(iVar7 + 0x48);
  }
  local_20 = 0.0;
  local_18 = 0.0;
  iVar7 = FUN_00a12210(0xf00);
  if (iVar7 != 0) {
    local_20 = *(float *)(iVar7 + 0x40);
    local_18 = *(float *)(iVar7 + 0x48);
  }
  local_3c = *(float *)(param_1 + 0x94);
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00a9f4c0("RHUMITUKE",0x3f000000,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x55,0x3f000000,0x8000000);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x52,0x3f000000,0x8000000);
    FUN_00a9f600(0xffffffff,0,0,0,2,0x58,0x3f000000,0x8000000);
    *(undefined4 *)(param_1 + 0x924) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x940) = 1;
    sVar6 = FUN_00dde2d0(0,3);
    if (sVar6 == 1) {
      *(undefined4 *)(param_1 + 0x940) = 2;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1df0) = 0;
    FUN_0080c630();
    *(undefined4 *)(param_1 + 0x207c) = 0;
    FUN_008087c0();
    FUN_00eaa6e0(0x41200000,0);
    FUN_0081ad70(param_1 + 0x30f0,0xf00);
  case 1:
    FUN_00a947e0(0,0,0,*(undefined4 *)(param_1 + 0x924));
    FUN_00ac80a0(0x3f666666,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + -1;
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      if (*(int *)(param_1 + 0x940) < 1) {
        *(undefined4 *)(param_1 + 0x61c) = 4;
      }
      fVar1 = local_30 - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
      fVar2 = local_28 - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
      if ((35.75 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) || (*(int *)(param_1 + 0x1df0) != 0)) {
        *(undefined4 *)(param_1 + 0x61c) = 4;
      }
      *(undefined4 *)(param_1 + 0x61c) = 4;
    }
    break;
  case 2:
    FUN_00a9f4c0("RHUMITUKE",0x3daaaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x56,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x53,0x3daaaaab,0);
    FUN_00a9f600(0xffffffff,0,0,0,2,0x59,0x3daaaaab,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00a947e0(0,0,0,*(undefined4 *)(param_1 + 0x924));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + -1;
      if (0 < *(int *)(param_1 + 0x940)) {
        *(undefined4 *)(param_1 + 0x61c) = 2;
      }
      fVar1 = local_30 - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
      fVar2 = local_28 - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
      if ((35.75 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) || (*(int *)(param_1 + 0x1df0) != 0)) {
        *(undefined4 *)(param_1 + 0x61c) = 4;
      }
    }
    break;
  case 4:
    FUN_00eaa6e0(0x41200000,0);
    FUN_00a9f4c0("RHUMITUKE",0x3daaaaab,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x57,0x3daaaaab,0x8000000);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x54,0x3daaaaab,0x8000000);
    FUN_00a9f600(0xffffffff,0,0,0,2,0x5a,0x3daaaaab,0x8000000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00a947e0(0,0,0,*(undefined4 *)(param_1 + 0x924));
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      FUN_00a8caf0(0,0,0,0);
      *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      iVar7 = FUN_00ac4780();
      if (iVar7 == 2) {
        *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      }
      iVar7 = FUN_00ac4780();
      if (2 < iVar7) {
        *(undefined4 *)(param_1 + 0xea8) = 0x40c00000;
      }
    }
  }
  iVar7 = *(int *)(param_1 + 0xa84);
  if (iVar7 != 0) {
    local_30 = local_30 - *(float *)(iVar7 + 0x40);
    local_28 = local_28 - *(float *)(iVar7 + 0x48);
    fVar5 = SQRT(local_28 * local_28 + local_30 * local_30);
    fVar1 = *(float *)(iVar7 + 0x40);
    fVar2 = *(float *)(param_1 + 0x40);
    fVar3 = *(float *)(iVar7 + 0x48);
    fVar4 = *(float *)(param_1 + 0x48);
    fVar8 = (float10)fpatan((float10)local_20 - (float10)*(float *)(param_1 + 0x40),
                            (float10)local_18 - (float10)*(float *)(param_1 + 0x48));
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 - (float10)*(float *)(param_1 + 0x94)));
    fVar9 = (float10)fpatan((float10)(fVar1 - fVar2),(float10)(fVar3 - fVar4));
    fVar8 = (float10)FUN_00ddba30((float)(fVar9 - fVar8));
    local_3c = (float)fVar8;
    fVar1 = *(float *)(param_1 + 0x924);
    iVar7 = FUN_00a8c760(0);
    if (((iVar7 != 0) && (*(int *)(param_1 + 0x1df0) == 0)) && (9.873 < fVar5)) {
      if (fVar5 < 10.97) {
        fVar1 = 0.0;
      }
      if (30.75 < fVar5) {
        fVar1 = 2.0;
      }
      if ((10.97 <= fVar5) && (fVar5 < 19.4)) {
        fVar1 = (fVar5 - 10.97) * 0.11862397;
      }
      if ((19.4 <= fVar5) && (fVar5 < 30.75)) {
        fVar1 = (fVar5 - 19.4) * 0.08810572 + 1.0;
      }
      *(float *)(param_1 + 0x924) =
           (fVar1 - *(float *)(param_1 + 0x924)) * 0.3 + *(float *)(param_1 + 0x924);
    }
  }
  iVar7 = FUN_00a8c760(0);
  if ((iVar7 != 0) && (*(int *)(param_1 + 0x1df0) == 0)) {
    FUN_00a8db10((undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x94),local_3c,0x3dcccccd,
                 0x3ae4c388,0x3d567750);
  }
  return;
}

// 0081F150  FUN_0081f150  size=248  [callgraph]
void __fastcall FUN_0081f150(int param_1)

{
  *(undefined4 *)(param_1 + 0xea0) = 0;
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_00818340();
    FUN_0080d3c0();
    return;
  case 1:
    FUN_0080b740();
    FUN_0080d3c0();
    return;
  case 3:
    FUN_00808bb0();
    FUN_0080d3c0();
    return;
  case 0xb:
    FUN_00818730();
    FUN_0080d3c0();
    return;
  case 0x12:
    FUN_0080fde0();
    FUN_0080d3c0();
    return;
  case 0x13:
    FUN_0080fed0();
    FUN_0080d3c0();
    return;
  case 0x14:
    FUN_0080bf80();
    FUN_0080d3c0();
    return;
  case 0x16:
    if (*(int *)(param_1 + 0x61c) != 0) {
      FUN_00a8c760(4);
      FUN_0080d3c0();
      return;
    }
    break;
  case 0x18:
    FUN_0080c020();
    FUN_0080d3c0();
    return;
  case 0x19:
    FUN_0080c090();
    FUN_0080d3c0();
    return;
  case 0x1a:
    FUN_0080c1c0();
    FUN_0080d3c0();
    return;
  case 0x1b:
  case 0x1c:
    FUN_008128f0();
    FUN_0080d3c0();
    return;
  case 0x1d:
    FUN_00812f30();
    FUN_0080d3c0();
    return;
  case 0x27:
    FUN_0080c240();
    FUN_0080d3c0();
    return;
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
    FUN_0081e660();
  }
  FUN_0080d3c0();
  return;
}

// 0081F2D0  FUN_0081f2d0  size=223  [callgraph]
void __fastcall FUN_0081f2d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  undefined4 uVar11;
  float10 fVar12;
  float10 fVar13;
  undefined4 uVar14;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float afStack_4bc [11];
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  uint auStack_480 [2];
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  uint uStack_46c;
  float fStack_468;
  float fStack_464;
  undefined1 uStack_460;
  undefined1 uStack_45f;
  undefined4 uStack_45c;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_31c;
  undefined2 uStack_306;
  undefined4 uStack_1a0;
  undefined1 auStack_160 [236];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined4 *puStack_68;
  undefined4 uStack_64;
  char *pcStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  float fStack_54;
  float fStack_3c;
  float fStack_30;
  float fStack_28;
  float fStack_20;
  float fStack_18;
  
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_0080df20();
    return;
  case 1:
    FUN_0080e140();
    return;
  case 2:
    FUN_0081c750();
    return;
  case 3:
    FUN_0080b920();
    return;
  case 4:
    DebrisLeaveSignalContext::DebrisLeaveSignalContext_5();
    return;
  case 5:
    DebrisLeaveSignalContext::DebrisLeaveSignalContext_3();
    return;
  case 6:
    DebrisLeaveSignalContext::DebrisLeaveSignalContext_4();
    return;
  case 7:
    FUN_0080f180();
    return;
  case 8:
    FUN_0080f3e0();
    return;
  case 9:
    FUN_0080f640();
    return;
  case 10:
    FUN_0080f8a0();
    return;
  case 0xb:
    FUN_008187f0();
    return;
  case 0xc:
    FUN_0080fb00();
    return;
  case 0xd:
    FUN_0080fbd0();
    return;
  case 0xe:
    FUN_0080fc60();
    return;
  case 0xf:
    FUN_0080fd20();
    return;
  default:
    return;
  case 0x12:
    FUN_0081cf60();
    return;
  case 0x13:
    if (((2 < *(int *)(param_1 + 0x61c)) && (*(int *)(param_1 + 0x61c) < 6)) &&
       (*(int *)(param_1 + 0x207c) != 0)) {
      fStack_54 = 0.0;
      iStack_58 = 0;
      uStack_5c = 0;
      pcStack_60 = (char *)0x21;
      uStack_64 = 0x81d624;
      FUN_00a8caf0();
      return;
    }
    fStack_30 = 0.0;
    fStack_54 = 6.02558e-44;
    fStack_28 = 0.0;
    *(undefined4 *)(param_1 + 0x1620) = 1;
    iStack_58 = 0x81d647;
    iVar8 = FUN_00a12210();
    if (iVar8 != 0) {
      fStack_30 = *(float *)(iVar8 + 0x40);
      fStack_28 = *(float *)(iVar8 + 0x48);
    }
    fStack_54 = 5.38099e-42;
    fStack_20 = 0.0;
    fStack_18 = 0.0;
    iStack_58 = 0x81d66f;
    iVar8 = FUN_00a12210();
    if (iVar8 != 0) {
      fStack_20 = *(float *)(iVar8 + 0x40);
      fStack_18 = *(float *)(iVar8 + 0x48);
    }
    fStack_3c = *(float *)(param_1 + 0x94);
    switch(*(undefined4 *)(param_1 + 0x61c)) {
    case 0:
      fStack_54 = 0.0;
      iStack_58 = 0;
      uStack_5c = 0x3f000000;
      pcStack_60 = "LHUMITUKE";
      uStack_64 = 0x81d6bb;
      FUN_00a9f4c0();
      fStack_54 = 3.85186e-34;
      iStack_58 = 0x3f000000;
      uStack_5c = 0x5e;
      pcStack_60 = (char *)0x0;
      uStack_64 = 0;
      puStack_68 = (undefined4 *)0x0;
      puStack_6c = (undefined1 *)0x0;
      uStack_70 = 0xffffffff;
      uStack_74 = 0x81d6dd;
      FUN_00a9f600();
      fStack_54 = 3.85186e-34;
      iStack_58 = 0x3f000000;
      uStack_5c = 0x5b;
      pcStack_60 = (char *)0x1;
      uStack_64 = 0;
      puStack_68 = (undefined4 *)0x0;
      puStack_6c = (undefined1 *)0x0;
      uStack_70 = 0xffffffff;
      uStack_74 = 0x81d6fe;
      FUN_00a9f600();
      fStack_54 = 3.85186e-34;
      iStack_58 = 0x3f000000;
      uStack_5c = 0x61;
      pcStack_60 = (char *)0x2;
      uStack_64 = 0;
      puStack_68 = (undefined4 *)0x0;
      puStack_6c = (undefined1 *)0x0;
      uStack_70 = 0xffffffff;
      uStack_74 = 0x81d720;
      FUN_00a9f600();
      fStack_54 = 4.2039e-45;
      *(undefined4 *)(param_1 + 0x924) = 0x3f800000;
      iStack_58 = 0;
      *(undefined4 *)(param_1 + 0x940) = 1;
      uStack_5c = 0x81d73c;
      sVar7 = FUN_00dde2d0();
      if (sVar7 == 1) {
        *(undefined4 *)(param_1 + 0x940) = 2;
      }
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x1df0) = 0;
      fStack_54 = 1.1924044e-38;
      FUN_0080c630();
      *(undefined4 *)(param_1 + 0x207c) = 0;
      fStack_54 = 1.1924068e-38;
      FUN_008087c0();
      fStack_54 = 0.0;
      iStack_58 = 0x41200000;
      uStack_5c = 0x81d792;
      FUN_00eaa6e0();
      fStack_54 = 5.38099e-42;
      uStack_5c = 0x81d79f;
      iStack_58 = param_1 + 0x30f0;
      FUN_0081ad70();
    case 1:
      fStack_54 = *(float *)(param_1 + 0x924);
      iStack_58 = 0;
      uStack_5c = 0;
      pcStack_60 = (char *)0x0;
      uStack_64 = 0x81d7be;
      FUN_00a947e0();
      fStack_54 = 1.0;
      iStack_58 = 0x3f666666;
      uStack_5c = 0x81d7d7;
      FUN_00ac80a0();
      fStack_54 = 0.0;
      iStack_58 = 0x81d7e0;
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
        *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + -1;
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        if (*(int *)(param_1 + 0x940) < 1) {
          *(undefined4 *)(param_1 + 0x61c) = 4;
        }
        fVar1 = fStack_30 - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
        fVar2 = fStack_28 - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
        if ((42.4 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) || (*(int *)(param_1 + 0x1df0) != 0)) {
          *(undefined4 *)(param_1 + 0x61c) = 4;
        }
        *(undefined4 *)(param_1 + 0x61c) = 4;
      }
      break;
    case 2:
      fStack_54 = 0.0;
      iStack_58 = 0;
      uStack_5c = 0x3daaaaab;
      pcStack_60 = "LHUMITUKE";
      uStack_64 = 0x81d868;
      FUN_00a9f4c0();
      fStack_54 = 0.0;
      iStack_58 = 0x3daaaaab;
      uStack_5c = 0x5f;
      pcStack_60 = (char *)0x0;
      uStack_64 = 0;
      puStack_68 = (undefined4 *)0x0;
      puStack_6c = (undefined1 *)0x0;
      uStack_70 = 0xffffffff;
      uStack_74 = 0x81d887;
      FUN_00a9f600();
      fStack_54 = 0.0;
      iStack_58 = 0x3daaaaab;
      uStack_5c = 0x5c;
      pcStack_60 = (char *)0x1;
      uStack_64 = 0;
      puStack_68 = (undefined4 *)0x0;
      puStack_6c = (undefined1 *)0x0;
      uStack_70 = 0xffffffff;
      uStack_74 = 0x81d8a5;
      FUN_00a9f600();
      fStack_54 = 0.0;
      iStack_58 = 0x3daaaaab;
      uStack_5c = 0x62;
      pcStack_60 = (char *)0x2;
      uStack_64 = 0;
      puStack_68 = (undefined4 *)0x0;
      puStack_6c = (undefined1 *)0x0;
      uStack_70 = 0xffffffff;
      uStack_74 = 0x81d8c4;
      FUN_00a9f600();
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    case 3:
      fStack_54 = *(float *)(param_1 + 0x924);
      iStack_58 = 0;
      uStack_5c = 0;
      pcStack_60 = (char *)0x0;
      uStack_64 = 0x81d8e9;
      FUN_00a947e0();
      fStack_54 = 1.0;
      iStack_58 = 0x3f800000;
      uStack_5c = 0x81d8fc;
      FUN_00ac80a0();
      fStack_54 = 0.0;
      iStack_58 = 0x81d905;
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + -1;
        if (0 < *(int *)(param_1 + 0x940)) {
          *(undefined4 *)(param_1 + 0x61c) = 2;
        }
        fVar1 = fStack_30 - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
        fVar2 = fStack_28 - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
        if ((42.4 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) || (*(int *)(param_1 + 0x1df0) != 0)) {
          *(undefined4 *)(param_1 + 0x61c) = 4;
        }
      }
      break;
    case 4:
      fStack_54 = 0.0;
      iStack_58 = 0;
      uStack_5c = 0x3daaaaab;
      pcStack_60 = "LHUMITUKE";
      uStack_64 = 0x81d98d;
      FUN_00a9f4c0();
      fStack_54 = 3.85186e-34;
      iStack_58 = 0x3daaaaab;
      uStack_5c = 0x60;
      pcStack_60 = (char *)0x0;
      uStack_64 = 0;
      puStack_68 = (undefined4 *)0x0;
      puStack_6c = (undefined1 *)0x0;
      uStack_70 = 0xffffffff;
      uStack_74 = 0x81d9af;
      FUN_00a9f600();
      fStack_54 = 3.85186e-34;
      iStack_58 = 0x3daaaaab;
      uStack_5c = 0x5d;
      pcStack_60 = (char *)0x1;
      uStack_64 = 0;
      puStack_68 = (undefined4 *)0x0;
      puStack_6c = (undefined1 *)0x0;
      uStack_70 = 0xffffffff;
      uStack_74 = 0x81d9d0;
      FUN_00a9f600();
      fStack_54 = 3.85186e-34;
      iStack_58 = 0x3daaaaab;
      uStack_5c = 99;
      pcStack_60 = (char *)0x2;
      uStack_64 = 0;
      puStack_68 = (undefined4 *)0x0;
      puStack_6c = (undefined1 *)0x0;
      uStack_70 = 0xffffffff;
      uStack_74 = 0x81d9f2;
      FUN_00a9f600();
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      fStack_54 = 0.0;
      iStack_58 = 0x41200000;
      uStack_5c = 0x81da15;
      FUN_00eaa6e0();
    case 5:
      fStack_54 = *(float *)(param_1 + 0x924);
      iStack_58 = 0;
      uStack_5c = 0;
      pcStack_60 = (char *)0x0;
      uStack_64 = 0x81da34;
      FUN_00a947e0();
      fStack_54 = 1.0;
      iStack_58 = 0x3f800000;
      uStack_5c = 0x81da47;
      FUN_00ac80a0();
      fStack_54 = 0.0;
      iStack_58 = 0x81da50;
      iVar8 = FUN_00a94ce0();
      if (iVar8 != 0) {
        fStack_54 = 0.0;
        iStack_58 = 0;
        uStack_5c = 0;
        pcStack_60 = (char *)0x0;
        uStack_64 = 0x81da63;
        FUN_00a8caf0();
        *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
        fStack_54 = 1.1925148e-38;
        iVar8 = FUN_00ac4780();
        if (iVar8 == 2) {
          *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
        }
        fStack_54 = 1.1925182e-38;
        iVar8 = FUN_00ac4780();
        if (2 < iVar8) {
          *(undefined4 *)(param_1 + 0xea8) = 0x40c00000;
        }
      }
    }
    iVar8 = *(int *)(param_1 + 0xa84);
    if (iVar8 != 0) {
      fStack_30 = fStack_30 - *(float *)(iVar8 + 0x40);
      fStack_28 = fStack_28 - *(float *)(iVar8 + 0x48);
      fVar5 = SQRT(fStack_28 * fStack_28 + fStack_30 * fStack_30);
      fVar1 = *(float *)(iVar8 + 0x40);
      fVar2 = *(float *)(param_1 + 0x40);
      fVar3 = *(float *)(iVar8 + 0x48);
      fVar4 = *(float *)(param_1 + 0x48);
      fVar12 = (float10)fpatan((float10)fStack_20 - (float10)*(float *)(param_1 + 0x40),
                               (float10)fStack_18 - (float10)*(float *)(param_1 + 0x48));
      fStack_54 = (float)(fVar12 - (float10)*(float *)(param_1 + 0x94));
      iStack_58 = 0x81db02;
      fVar12 = (float10)FUN_00ddba30();
      fVar13 = (float10)fpatan((float10)(fVar1 - fVar2),(float10)(fVar3 - fVar4));
      fStack_54 = (float)(fVar13 - fVar12);
      iStack_58 = 0x81db16;
      fVar12 = (float10)FUN_00ddba30();
      fStack_3c = (float)fVar12;
      fVar1 = *(float *)(param_1 + 0x924);
      fStack_54 = 0.0;
      iStack_58 = 0x81db30;
      iVar8 = FUN_00a8c760();
      if (((iVar8 != 0) && (*(int *)(param_1 + 0x1df0) == 0)) && (11.987999 < fVar5)) {
        if (fVar5 < 13.32) {
          fVar1 = 0.0;
        }
        if (37.4 < fVar5) {
          fVar1 = 2.0;
        }
        if ((13.32 <= fVar5) && (fVar5 < 25.85)) {
          fVar1 = (fVar5 - 13.32) * 0.07980846;
        }
        if ((25.85 <= fVar5) && (fVar5 < 37.4)) {
          fVar1 = (fVar5 - 25.85) * 0.086580075 + 1.0;
        }
        *(float *)(param_1 + 0x924) =
             (fVar1 - *(float *)(param_1 + 0x924)) * 0.3 + *(float *)(param_1 + 0x924);
      }
    }
    fStack_54 = 0.0;
    iStack_58 = 0x81dc15;
    iVar8 = FUN_00a8c760();
    if ((iVar8 != 0) && (*(int *)(param_1 + 0x1df0) == 0)) {
      fStack_54 = 0.05235988;
      puStack_68 = (undefined4 *)(param_1 + 0x94);
      iStack_58 = 0x3ae4c388;
      uStack_5c = 0x3dcccccd;
      pcStack_60 = (char *)fStack_3c;
      uStack_64 = *puStack_68;
      puStack_6c = &LAB_0081dc5e;
      FUN_00a8db10();
    }
    return;
  case 0x14:
    if ((900.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0x20cc) <= 0.0)) {
      iVar8 = FUN_00a81330();
      if ((iVar8 != 0) &&
         ((iVar8 = FUN_00a7c8a0(), iVar8 != 0 && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)))) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
    }
    break;
  case 0x15:
    FUN_0080ffd0();
    return;
  case 0x16:
    FUN_00810190();
    return;
  case 0x17:
    FUN_00810760();
    return;
  case 0x18:
    FUN_00810c50();
    return;
  case 0x19:
    FUN_00811dd0();
    return;
  case 0x1a:
    FUN_008123c0();
    return;
  case 0x1b:
  case 0x1c:
    FUN_008129d0();
    return;
  case 0x1d:
    FUN_00812f80();
    return;
  case 0x1e:
    FUN_00813ea0();
    return;
  case 0x1f:
    FUN_00818f00();
    return;
  case 0x20:
    FUN_00819260();
    return;
  case 0x21:
    FUN_00819630();
    return;
  case 0x26:
    FUN_00814290();
    return;
  case 0x27:
    FUN_00814350();
    return;
  case 0x28:
  case 0x29:
    FUN_008144e0();
    return;
  case 0x2a:
    FUN_00814680();
    return;
  case 0x2d:
    FUN_00814990();
    return;
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
    FUN_0081add0();
    return;
  case 0x3a:
    FUN_0080d770();
    return;
  case 0x3b:
    FUN_00814f30();
    return;
  case 0x3c:
    FUN_0080db60();
    return;
  }
  *(undefined4 *)(param_1 + 0x1620) = 1;
  afStack_4bc[3] = 2.86986e-42;
  afStack_4bc[4] = 2.87126e-42;
  afStack_4bc[5] = 2.87266e-42;
  afStack_4bc[6] = 2.87406e-42;
  afStack_4bc[7] = 2.87546e-42;
  afStack_4bc[8] = 2.87687e-42;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x69,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0080c630();
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x6a,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = 0x40800000;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x920) = 0x421c0000;
    goto LAB_0081dea5;
  case 3:
LAB_0081dea5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar1;
    if (0.0 <= fVar1) {
      return;
    }
    if (5 < *(int *)(param_1 + 0x940)) {
      return;
    }
    iVar8 = *(int *)(param_1 + 0xa84);
    *(float *)(param_1 + 0x924) = fVar1 + 4.0;
    fStack_4e0 = *(float *)(iVar8 + 0x40);
    fStack_4dc = *(float *)(iVar8 + 0x44);
    fStack_4d8 = *(float *)(iVar8 + 0x48);
    fStack_4d4 = *(float *)(iVar8 + 0x4c);
    if (*(int *)(param_1 + 0x31b0) == 0) {
      fStack_4d0 = *(float *)(param_1 + 0x40) - fStack_4e0;
      fStack_4c8 = *(float *)(param_1 + 0x48) - fStack_4d8;
      fStack_4c4 = *(float *)(param_1 + 0x4c) - fStack_4d4;
      fStack_4cc = 0.0;
      fVar1 = fStack_4c8 * fStack_4c8 + fStack_4d0 * fStack_4d0;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_4d0,&fStack_4d0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_4d0 = 0.0;
        fStack_4cc = 1.0;
        fStack_4c8 = 0.0;
      }
      fVar12 = (float10)FUN_00dde300(0,0x40400000);
      fVar12 = fVar12 + (float10)5.0;
      fStack_4e0 = (float)((float10)fStack_4d0 * fVar12 + (float10)fStack_4e0);
      fStack_4dc = (float)(fVar12 * (float10)fStack_4cc + (float10)fStack_4dc);
      fStack_4d8 = (float)((float10)fStack_4c8 * fVar12 + (float10)fStack_4d8);
      fStack_4d4 = (float)((float10)fStack_4c4 * fVar12 + (float10)fStack_4d4);
      fVar12 = (float10)FUN_00dde300(0xc1000000,0x41000000);
      fVar12 = fVar12 + (float10)fStack_4e0;
      uVar14 = 0x41000000;
      uVar11 = 0xc1000000;
    }
    else {
      fStack_4dc = fStack_4dc + 1.0;
      fVar12 = (float10)FUN_00dde300(0xc0400000,0x40400000);
      fVar12 = fVar12 + (float10)fStack_4e0;
      uVar14 = 0x40400000;
      uVar11 = 0xc0400000;
    }
    fStack_4e0 = (float)fVar12;
    fVar13 = (float10)FUN_00dde300(uVar11,uVar14);
    fVar12 = (float10)fStack_4d8;
    fStack_4d8 = (float)(fVar13 + fVar12);
    pfVar9 = (float *)((*(int *)(param_1 + 0x940) + 0x22f) * 0x10 + param_1);
    *pfVar9 = fStack_4e0;
    uVar14 = 0;
    pfVar9[1] = fStack_4dc;
    pfVar9[2] = (float)(fVar13 + fVar12);
    pfVar9[3] = fStack_4d4;
    uVar11 = FUN_00a7c8a0(0);
    FUN_004039a0(0xc4,uVar11,uVar14);
    FUN_00dffb20(*(int *)(param_1 + 0x940) * 0xb0 + 0x2410 + param_1);
    FUN_0041cdb0(&fStack_4e0);
    FUN_00a8c930(0,auStack_160);
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
    return;
  case 4:
    FUN_00aa4080(0x6a,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42400000;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0;
  case 5:
    fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar1;
    if ((fVar1 < 0.0) && (*(int *)(param_1 + 0x940) < 6)) {
      FUN_00aa4080(0xd5,4,0,0x3e99999a,0x8000010,0,0x3f800000);
      (**(code **)(*(int *)(*(int *)(param_1 + 0x940) * 0xb0 + 0x2410 + param_1) + 8))
                (0x3f800000,0,0);
      iVar8 = FUN_00a12210(afStack_4bc[*(int *)(param_1 + 0x940) % 6]);
      fVar1 = *(float *)(iVar8 + 0x10);
      fVar2 = *(float *)(iVar8 + 0x14);
      fVar3 = *(float *)(iVar8 + 0x18);
      fVar4 = *(float *)(iVar8 + 0x20);
      fVar5 = *(float *)(iVar8 + 0x24);
      fVar6 = *(float *)(iVar8 + 0x28);
      fStack_4c4 = *(float *)(iVar8 + 0x34);
      fStack_4c0 = *(float *)(iVar8 + 0x38);
      fVar12 = SQRT((float10)fStack_4c0 * (float10)fStack_4c0 +
                    (float10)fStack_4c4 * (float10)fStack_4c4 +
                    (float10)*(float *)(iVar8 + 0x30) * (float10)*(float *)(iVar8 + 0x30));
      fVar13 = (float10)fpatan((float10)*(float *)(iVar8 + 0x28) / fVar12,
                               (float10)*(float *)(iVar8 + 0x38) / fVar12);
      afStack_4bc[0] = (float)fVar13;
      fVar12 = (float10)FUN_00ddbaa0((float)-((float10)*(float *)(iVar8 + 0x18) / fVar12));
      afStack_4bc[1] = (float)fVar12;
      fVar12 = (float10)fpatan((float10)*(float *)(iVar8 + 0x14) /
                               (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                               (float10)*(float *)(iVar8 + 0x10) /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      afStack_4bc[2] = (float)fVar12;
      fStack_4e0 = *(float *)(iVar8 + 0x4c);
      FUN_0041fee0();
      uStack_378 = 7;
      uStack_488 = 0x3b002;
      uStack_31c = FUN_009f8b40();
      uStack_37c = 0x16;
      uStack_478 = 0x1e;
      uStack_470 = 0x1e;
      uStack_46c = uStack_46c & 0xffffff00;
      uStack_474 = 0x96;
      uVar10 = FUN_00ac84d0(0x14);
      fStack_4c4 = (float)(**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x14);
      fStack_4cc = (float)(**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x14);
      uStack_460 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x14);
      fStack_464 = afStack_4bc[2];
      uStack_45c = *(undefined4 *)(param_1 + 0x4f0);
      fStack_468 = afStack_4bc[1];
      uStack_45f = 10;
      uStack_46c = uVar10;
      uVar11 = FUN_00a7c7f0();
      FUN_00a7c960(uVar11);
      auStack_480[0] = auStack_480[0] | 4;
      uStack_306 = *(undefined2 *)(iVar8 + 0xa0);
      iVar8 = (*(int *)(param_1 + 0x940) + 0x22f) * 0x10;
      fStack_4d0 = *(float *)(iVar8 + param_1);
      iVar8 = iVar8 + param_1;
      fStack_4cc = *(float *)(iVar8 + 4);
      fStack_4c8 = *(float *)(iVar8 + 8);
      fStack_4c4 = *(float *)(iVar8 + 0xc);
      uStack_490 = 0;
      uStack_48c = 0;
      uStack_488 = 0;
      FUN_0043fed0(0,0xffffffff,&uStack_490);
      uStack_1a0 = 1;
      FUN_00416e30(&fStack_4e0,&fStack_4d0,afStack_4bc + 3,0x3f800000,0x44480000);
      FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_480);
      FUN_00c81b30(0x2f);
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
      *(undefined4 *)(param_1 + 0x924) = 0x40400000;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (0.0 <= fVar1) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 6:
    FUN_00aa4080(0x6b,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    goto LAB_0081e541;
  case 7:
LAB_0081e541:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar8 = FUN_00a94ce0(0);
    if (iVar8 != 0) {
      FUN_00a8caf0(0,0,0,0);
      *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      iVar8 = FUN_00ac4780();
      if (iVar8 == 2) {
        *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      }
      iVar8 = FUN_00ac4780();
      if (2 < iVar8) {
        *(undefined4 *)(param_1 + 0xea8) = 0x40c00000;
        return;
      }
    }
  default:
    goto switchD_0081ddcd_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar8 = FUN_00a94ce0(0);
  if (iVar8 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
switchD_0081ddcd_default:
  return;
}

// 0081F4B0  Emc200::vf4C  size=1936  [class]
void __fastcall Emc200::vf4C(int *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  float10 fVar7;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  float fStack_80;
  int iStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [4];
  int iStack_64;
  float fStack_60;
  int iStack_5c;
  float fStack_58;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  FUN_00a92fb0();
  fVar7 = (float10)FUN_00e049b0();
  param_1[0x244] = (int)(float)fVar7;
  pcVar1 = *(code **)(*param_1 + 0x1d4);
  bVar6 = false;
  param_1[0x77b] = 0;
  (*pcVar1)(0);
  param_1[0x764] = 0;
  BehaviorEmBase::vf4C();
  FUN_0081f150();
  FUN_0081f2d0();
  FUN_008099d0();
  FUN_00819a00();
  FUN_00809310();
  iStack_84 = 0;
  fStack_80 = 0.0;
  iStack_7c = 0;
  iVar4 = FUN_00ac45b0();
  if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
    iStack_84 = *(int *)(iVar4 + 0x40);
    fStack_80 = *(float *)(iVar4 + 0x44);
    iStack_7c = *(int *)(iVar4 + 0x48);
    fStack_78 = *(float *)(iVar4 + 0x4c);
  }
  iVar4 = param_1[0x186];
  param_1[0x81d] = 1;
  bVar5 = true;
  if ((iVar4 == 0x3d) || (iVar4 == 0x3e)) {
    bVar5 = false;
  }
  if ((iVar4 != 0x32) && (bVar5)) {
    iStack_64 = iStack_84;
    iStack_5c = iStack_7c;
    fStack_58 = fStack_78;
    fStack_60 = fStack_80;
    if ((param_1[0xc6c] == 0) && ((float)param_1[0x11] < fStack_80)) {
      fStack_60 = (float)param_1[0x11];
    }
    if (param_1[0xc6c] != 0) {
      fStack_60 = fStack_60 + 2.0;
    }
    iVar4 = FUN_00a12210(6);
    if (iVar4 != 0) {
      fStack_74 = 0.0;
      fStack_70 = 0.0;
      fStack_6c = 1.0;
      iVar4 = FUN_00a12210(6);
      D3DXVec3TransformNormal(&fStack_74,&fStack_74,iVar4 + 0x10);
      fVar7 = (float10)fpatan((float10)fStack_80,(float10)fStack_78);
      D3DXMatrixRotationY(&fStack_60,(float)fVar7);
      iVar4 = FUN_00a12210(6);
      uStack_38 = *(undefined4 *)(iVar4 + 0x40);
      uStack_34 = *(undefined4 *)(iVar4 + 0x44);
      uStack_30 = *(undefined4 *)(iVar4 + 0x48);
      D3DXMatrixInverse(auStack_68,0,auStack_68);
      D3DXVec3TransformNormal(&uStack_94,&iStack_84,&fStack_74);
      fStack_74 = fStack_24 + fStack_74;
      fStack_70 = fStack_20 + fStack_70;
      fStack_6c = fStack_1c + fStack_6c;
      if (param_1[0x186] != 0x18) {
        if (param_1[0x846] == 0) {
          bVar5 = 0.0 < fStack_6c;
          iStack_88 = 0;
          iVar4 = FUN_00a12210(0x20);
          if ((iVar4 != 0) &&
             (fVar2 = *(float *)(iVar4 + 0x40) - *(float *)(param_1[0x2a1] + 0x40),
             fVar3 = *(float *)(iVar4 + 0x48) - *(float *)(param_1[0x2a1] + 0x48),
             8.0 <= SQRT(fVar3 * fVar3 + fVar2 * fVar2))) {
            bVar6 = true;
          }
          iVar4 = FUN_00a12210(0x2b);
          if ((iVar4 == 0) ||
             (fVar2 = *(float *)(iVar4 + 0x40) - *(float *)(param_1[0x2a1] + 0x40),
             fVar3 = *(float *)(iVar4 + 0x48) - *(float *)(param_1[0x2a1] + 0x48), iVar4 = 1,
             SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 8.0)) {
            iVar4 = iStack_88;
          }
          if (((bVar5) && (bVar6)) && (iVar4 != 0)) {
            param_1[0x846] = 1;
          }
        }
        else {
          bVar6 = -2.0 <= fStack_6c;
          iVar4 = FUN_00a12210(0x20);
          if ((iVar4 != 0) &&
             (fVar2 = *(float *)(iVar4 + 0x40) - *(float *)(param_1[0x2a1] + 0x40),
             fVar3 = *(float *)(iVar4 + 0x48) - *(float *)(param_1[0x2a1] + 0x48),
             SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 7.0)) {
            bVar6 = false;
          }
          iVar4 = FUN_00a12210(0x2b);
          if (((iVar4 != 0) &&
              (fVar2 = *(float *)(iVar4 + 0x40) - *(float *)(param_1[0x2a1] + 0x40),
              fVar3 = *(float *)(iVar4 + 0x48) - *(float *)(param_1[0x2a1] + 0x48),
              SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 7.0)) || (!bVar6)) {
            param_1[0x846] = 0;
          }
        }
        if (param_1[0x847] == 0) {
          if (((param_1[0x846] != 0) && (fStack_74 < 4.0)) &&
             ((-4.0 < fStack_74 && (fStack_6c <= 5.0)))) {
            param_1[0x847] = 1;
          }
        }
        else if (((param_1[0x846] == 0) || (5.0 < fStack_74)) || (fStack_74 < -5.0)) {
          param_1[0x847] = 0;
        }
        else if (!NAN(fStack_6c) && 6.0 < fStack_6c != (fStack_6c == 6.0)) {
          param_1[0x847] = 0;
        }
      }
    }
    if (param_1[0x846] == 0) {
      param_1[0x587] = 1;
      param_1[0x588] = 1;
    }
    if ((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8d9d0(), iVar4 != 0)) {
      param_1[0x587] = 1;
      param_1[0x588] = 1;
    }
    if (param_1[0x58e] != 0) {
      param_1[0x590] = iStack_84;
      param_1[0x591] = (int)fStack_80;
      param_1[0x592] = iStack_7c;
      param_1[0x593] = (int)fStack_78;
      param_1[0x58e] = 0;
    }
    if (0.0 < (float)param_1[0x58d]) {
      iStack_84 = param_1[0x590];
      fStack_80 = (float)param_1[0x591];
      iStack_7c = param_1[0x592];
      fStack_78 = (float)param_1[0x593];
      iStack_64 = param_1[0x590];
      fStack_60 = (float)param_1[0x591];
      iStack_5c = param_1[0x592];
      fStack_58 = (float)param_1[0x593];
      param_1[0x58d] = (int)((float)param_1[0x58d] - (float)param_1[0x244]);
    }
    bVar6 = param_1[0x128] != 1;
    iStack_88 = 0;
    uStack_8c = 0;
    uStack_90 = (uint)bVar6;
    uStack_94 = (uint)bVar6;
    iVar4 = FUN_00a8c760(0x13);
    if (iVar4 != 0) {
      uStack_94 = 0;
      uStack_90 = 0;
    }
    FUN_00a8c760(0x30);
    FUN_00a8c760(0x31);
    if (param_1[0x586] != 0) {
      uStack_94 = 1;
    }
    if (param_1[0x587] != 0) {
      uStack_94 = 0;
    }
    bVar6 = param_1[0x587] == 0 && (param_1[0x585] != 0 || iVar4 == 0 && bVar6);
    if (param_1[0x588] != 0) {
      uStack_90 = 0;
    }
    if (param_1[0x58a] != 0) {
      iStack_88 = 1;
    }
    if (param_1[0x58b] != 0) {
      uStack_8c = 1;
    }
    if (0.0 < (float)param_1[0x819]) {
      iStack_88 = 1;
      uStack_8c = 1;
    }
    if (param_1[0x847] != 0) {
      iStack_88 = 1;
      uStack_8c = 1;
    }
    bVar5 = param_1[0x58c] == 1 || (param_1[0x847] != 0 || 0.0 < (float)param_1[0x819]);
    param_1[0x585] = 0;
    param_1[0x586] = 0;
    param_1[0x587] = 0;
    param_1[0x588] = 0;
    param_1[0x589] = 0;
    param_1[0x58a] = 0;
    param_1[0x58b] = 0;
    param_1[0x58c] = 0;
    FUN_00a84720();
    FUN_00a84720();
    FUN_00a84720();
    FUN_00a84720();
    FUN_00a84720();
    FUN_00a84720();
    FUN_00a84720();
    switchD_0080dbae::default();
    FUN_00a84780(&iStack_84,0,uStack_90,bVar5,bVar5,0x3f800000);
    switchD_0080dbae::default();
    FUN_00a84780(&iStack_84,0,uStack_90,bVar5,bVar5,0x3f800000);
    switchD_0080dbae::default();
    FUN_00a84780(&iStack_84,0,uStack_90,bVar5,bVar5,0x3f800000);
    switchD_0080dbae::default();
    iVar4 = iStack_88;
    FUN_00a84780(&iStack_64,uStack_94,bVar6,iStack_88,uStack_8c,0x3f800000);
    switchD_0080dbae::default();
    FUN_00a84780(&iStack_64,uStack_94,bVar6,iVar4,uStack_8c,0x3f800000);
    switchD_0080dbae::default();
    FUN_00a84780(&iStack_64,uStack_94,bVar6,iVar4,uStack_8c,0x3f800000);
    switchD_0080dbae::default();
    return;
  }
  FUN_00a84720();
  FUN_00a84720();
  FUN_00a84720();
  FUN_00a84720();
  FUN_00a84720();
  FUN_00a84720();
  FUN_00a84720();
  switchD_0080dbae::default();
  return;
}

// 00AB3840  Emc200::Emc200  size=480  [class]
undefined4 * __fastcall Emc200::Emc200(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = EmBaseDLC::vftable;
  cEspControler::cEspControler();
  *param_1 = vftable;
  iVar1 = 2;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 2;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 2;
  do {
    FUN_00a826e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  iVar1 = 1;
  do {
    FUN_004105d0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x811] = 0;
  param_1[0x812] = 0;
  param_1[0x813] = 0;
  param_1[0x814] = 0;
  param_1[0x815] = 0;
  FUN_00904d60();
  FUN_00904d60();
  FUN_00904d60();
  FUN_00a7c930();
  FUN_00445db0();
  iVar1 = 0x11;
  do {
    cEspControler::cEspControler();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a603a0();
  cEspControler::cEspControler();
  FUN_00a7c930();
  return param_1;
}

// 00AB3A30  Emc200::vf04  size=6  [class]
undefined * Emc200::vf04(void)

{
  return &DAT_01b35990;
}

// 00AB3A40  Emc200::vf20C  size=7  [class]
float10 Emc200::vf20C(void)

{
  return (float10)5.0;
}

// 00AB3A50  Emc200::vf17C  size=6  [class]
undefined4 Emc200::vf17C(void)

{
  return 1;
}

// 00AB3A60  Emc200::vf1DC  size=6  [class]
undefined4 Emc200::vf1DC(void)

{
  return 1;
}

// 00AB3A70  FUN_00ab3a70  size=220  [callgraph]
void FUN_00ab3a70(void)

{
  int iVar1;
  
  cEspControler::~cEspControler();
  cXml::cXml_7();
  iVar1 = 0x11;
  do {
    cEspControler::~cEspControler();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00905ce0();
  FUN_00905ce0();
  FUN_00905ce0();
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
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  return;
}

// 00AB9FF0  Emc200::destruct  size=30  [class]
undefined4 __thiscall Emc200::destruct(undefined4 param_1,byte param_2)

{
  FUN_00ab3a70();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


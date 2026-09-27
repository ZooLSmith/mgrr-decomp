// src/enemy/em0200/Em0200.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AADFD0..00B01870, 57 functions

#include "mgrr.h"
#include "Em0200.h"

// 00AADFD0  Em0200::Em0200  size=450  [class]
undefined4 * __fastcall Em0200::Em0200(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorEmBase::BehaviorEmBase();
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
  param_1[0x7d8] = 0;
  param_1[0x7d9] = 0;
  param_1[0x7da] = 0;
  param_1[0x7db] = 0;
  param_1[0x7dc] = 0;
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
  return param_1;
}

// 00AAE1A0  Em0200::vf04  size=6  [class]
undefined * Em0200::vf04(void)

{
  return &DAT_01be9cc0;
}

// 00AAE1B0  Em0200::vf20C  size=7  [class]
float10 Em0200::vf20C(void)

{
  return (float10)5.0;
}

// 00AAE1C0  Em0200::vf17C  size=6  [class]
undefined4 Em0200::vf17C(void)

{
  return 1;
}

// 00AAE1D0  Em0200::vf1DC  size=6  [class]
undefined4 Em0200::vf1DC(void)

{
  return 1;
}

// 00AAE1E0  FUN_00aae1e0  size=209  [callgraph]
void FUN_00aae1e0(void)

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
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  return;
}

// 00AB74E0  Em0200::destruct  size=30  [class]
undefined4 __thiscall Em0200::destruct(undefined4 param_1,byte param_2)

{
  FUN_00aae1e0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AE8D70  Em0200::setEmSetInfo  size=54  [class]
undefined4 __thiscall Em0200::setEmSetInfo(int param_1,int param_2)

{
  FUN_00aa0920(*(undefined4 *)(param_2 + 0x5c));
  if (*(int *)(*(int *)(param_1 + 0x7d8) + 0x810) != 0) {
    FUN_00a8d580(0x1000000);
  }
  return 1;
}

// 00AE8DB0  Em0200::vf54  size=79  [class]
void __fastcall Em0200::vf54(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x1d50);
  fVar2 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x1d58);
  *(float *)(param_1 + 0x1ca0) = *(float *)(param_1 + 0x1ca0) + fVar1;
  *(float *)(param_1 + 0x1ca8) = *(float *)(param_1 + 0x1ca8) + fVar2;
  *(float *)(param_1 + 0x1cb0) = *(float *)(param_1 + 0x1cb0) + fVar1;
  *(float *)(param_1 + 0x1cb8) = fVar2 + *(float *)(param_1 + 0x1cb8);
  BehaviorEmBase::vf54();
  return;
}

// 00AE8E00  Em0200::vf6C  size=115  [class]
void __thiscall Em0200::vf6C(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x50) - *param_2;
  fVar2 = *(float *)(param_1 + 0x58) - param_2[2];
  Bh0064::vf6C(param_2);
  *(float *)(param_1 + 0x1ca0) = *(float *)(param_1 + 0x1ca0) + fVar1;
  *(float *)(param_1 + 0x1ca8) = *(float *)(param_1 + 0x1ca8) + fVar2;
  *(float *)(param_1 + 0x1cb0) = *(float *)(param_1 + 0x1cb0) + fVar1;
  *(float *)(param_1 + 0x1cb8) = fVar2 + *(float *)(param_1 + 0x1cb8);
  return;
}

// 00AE8E80  Em0200::vf70  size=77  [class]
void __thiscall Em0200::vf70(int param_1,float *param_2)

{
  Bh0064::vf70(param_2);
  *(float *)(param_1 + 0x1ca0) = *param_2 + *(float *)(param_1 + 0x1ca0);
  *(float *)(param_1 + 0x1ca8) = param_2[2] + *(float *)(param_1 + 0x1ca8);
  *(float *)(param_1 + 0x1cb0) = *(float *)(param_1 + 0x1cb0) + *param_2;
  *(float *)(param_1 + 0x1cb8) = param_2[2] + *(float *)(param_1 + 0x1cb8);
  return;
}

// 00AE8ED0  Em0200::vf14C  size=84  [class]
undefined4 __thiscall Em0200::vf14C(int param_1,int param_2)

{
  if (param_2 == 0xe) {
    if (*(int *)(param_1 + 0x618) != 0x19) {
      return 0;
    }
  }
  else if (((((param_2 != 0x10) && (param_2 != 0x12)) && (param_2 != 0x13)) &&
           ((param_2 != 0x14 && (param_2 != 0x15)))) &&
          ((param_2 != 0x16 && ((param_2 != 0x17 && (param_2 != 0x18)))))) {
    if (param_2 != 0x19) {
      return 0;
    }
    return 1;
  }
  return 1;
}

// 00AE8F30  Em0200::vf150  size=253  [class]
void __thiscall Em0200::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    *(int *)(param_1 + 0xdc0) = param_2;
    if (param_2 == 0xe) {
      uVar1 = 0x30;
    }
    else {
      if (param_2 == 0x10) {
        *(undefined4 *)(param_1 + 0xdd0) = 1;
        FUN_00a8caf0(0x2f,0,0,0);
        FUN_00a8c420(0,"_sword");
        FUN_00a8c420(0,"_crkata");
        FUN_00a8c420(0,"_rhand");
        return;
      }
      if (((param_2 == 0x12) || (param_2 == 0x14)) || (param_2 == 0x13)) {
        uVar1 = 0x32;
      }
      else if (param_2 == 0x15) {
        uVar1 = 0x33;
      }
      else if ((param_2 == 0x16) || (param_2 == 0x17)) {
        uVar1 = 0x34;
      }
      else {
        if ((param_2 != 0x18) && (param_2 != 0x19)) {
          return;
        }
        uVar1 = 0x35;
      }
    }
    *(undefined4 *)(param_1 + 0xdd0) = 1;
    FUN_00a8caf0(uVar1,0,0,0);
  }
  return;
}

// 00AE9030  Em0200::vf158  size=66  [class]
undefined4 Em0200::vf158(int param_1)

{
  int iVar1;
  
  if (((((param_1 == 0x12) || (param_1 == 0x14)) || (param_1 == 0x13)) ||
      ((param_1 == 0x15 || (param_1 == 0x16)))) ||
     ((param_1 == 0x17 || ((param_1 == 0x18 || (param_1 == 0x19)))))) {
    iVar1 = FUN_00ac82f0();
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

// 00AE9080  Em0200::vf184  size=36  [class]
int Em0200::vf184(int param_1,int param_2)

{
  if (param_2 == 0) {
    return -1;
  }
  return (uint)(param_1 == 0xb5) * 4 + -1;
}

// 00AE90B0  Em0200::vf188  size=3  [class]
void Em0200::vf188(void)

{
  return;
}

// 00AE93C0  FUN_00ae93c0  size=243  [between]
void __thiscall FUN_00ae93c0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (*(float *)(param_1 + 0x1fe8) <= 0.0) {
    iVar1 = FUN_00a81330();
    if ((((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) && (param_2 != 0)) &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       ((param_3 != 0 && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)))) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       ((param_4 != 0 && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)))) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
    iVar1 = FUN_00a81330();
    if ((((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) && (param_5 != 0)) &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
  }
  return;
}

// 00AE94C0  FUN_00ae94c0  size=194  [between]
void FUN_00ae94c0(void)

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

// 00AE9590  FUN_00ae9590  size=219  [between]
void __fastcall FUN_00ae9590(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00b74960(*(undefined4 *)(param_1 + 0xa88));
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00b74960(*(undefined4 *)(param_1 + 0xa88));
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00b74960(*(undefined4 *)(param_1 + 0xa88));
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00b74960(*(undefined4 *)(param_1 + 0xa88));
      }
    }
  }
  return;
}

// 00AE9670  Em0200::vf1A4  size=301  [class]
void __thiscall Em0200::vf1A4(int param_1,int *param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  if ((((param_3 & 1) != 0) && (iVar1 != 0)) && (iVar2 = FUN_00ac45b0(), iVar1 == iVar2)) {
    *(undefined4 *)(param_1 + 0x1d1c) = 1;
    *(undefined4 *)(param_1 + 0x1d20) = 1;
  }
  if (((*param_2 != 0x146) && ((param_3 & 0xe) != 0)) && (iVar1 != 0)) {
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xb3)) {
      *(undefined4 *)(param_1 + 0x1f98) = 1;
    }
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xb4)) {
      *(undefined4 *)(param_1 + 0x1f98) = 1;
    }
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xb1)) {
      *(undefined4 *)(param_1 + 0x1f98) = 1;
    }
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xb2)) {
      *(undefined4 *)(param_1 + 0x1f98) = 1;
    }
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xaf)) {
      *(undefined4 *)(param_1 + 0x1f98) = 1;
    }
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xb0)) {
      *(undefined4 *)(param_1 + 0x1f98) = 1;
    }
    iVar2 = FUN_00ac45b0();
    if ((iVar1 == iVar2) && (*param_2 == 0xb5)) {
      *(undefined4 *)(param_1 + 0x1f98) = 1;
    }
  }
  return;
}

// 00AE97A0  FUN_00ae97a0  size=53  [callgraph]
void __fastcall FUN_00ae97a0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x2330);
  iVar2 = 0x12;
  do {
    (**(code **)(*piVar1 + 8))(0x3f800000,0,0);
    piVar1 = piVar1 + 0x2c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00AE97E0  FUN_00ae97e0  size=316  [callgraph]
void __fastcall FUN_00ae97e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a8c760(0x32);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x1f74) == 1) {
      *(undefined4 *)(param_1 + 0x1f74) = 0;
      FUN_008f0450(&DAT_016483ec,0x10000,1);
      uVar2 = 1;
      goto LAB_00ae9847;
    }
  }
  else if (*(int *)(param_1 + 0x1f74) == 0) {
    *(undefined4 *)(param_1 + 0x1f74) = 1;
    FUN_008f0450(&DAT_016483ec,0x10000,0);
    uVar2 = 0;
LAB_00ae9847:
    FUN_008f0450(&DAT_016483e4,0x10000,uVar2);
  }
  iVar1 = FUN_00a8c760(0x33);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x1f78) != 1) goto LAB_00ae98a4;
    *(undefined4 *)(param_1 + 0x1f78) = 0;
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x1f78) != 0) goto LAB_00ae98a4;
    *(undefined4 *)(param_1 + 0x1f78) = 1;
    uVar2 = 0;
  }
  FUN_008f0450(&DAT_016483dc,0x10000,uVar2);
LAB_00ae98a4:
  iVar1 = FUN_00a8c760(0x34);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x1f7c) != 1) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1f7c) = 0;
    FUN_008f0450("_body",0x10000,1);
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x1f7c) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x1f7c) = 1;
    FUN_008f0450("_body",0x10000,0);
    uVar2 = 0;
  }
  FUN_008f0450("_core",0x10000,uVar2);
  return;
}

// 00AE9920  FUN_00ae9920  size=259  [callgraph]
void __fastcall FUN_00ae9920(int param_1)

{
  uint uVar1;
  short sVar2;
  short local_20 [16];
  
  uVar1 = *(uint *)(param_1 + 0x2018) & 0x80000007;
  local_20[8] = 0x14;
  local_20[9] = 3;
  local_20[10] = 3;
  local_20[0xb] = 0x14;
  local_20[0xc] = 3;
  local_20[0xd] = 0x14;
  local_20[0xe] = 0x14;
  local_20[0xf] = 3;
  local_20[0] = 0x16;
  local_20[1] = 0x16;
  local_20[2] = 3;
  local_20[3] = 0x16;
  local_20[4] = 0x16;
  local_20[5] = 3;
  local_20[6] = 0x16;
  local_20[7] = 0x16;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
  }
  sVar2 = local_20[uVar1 + 8];
  if ((*(int *)(param_1 + 0x4a0) == 0) && (*(int *)(param_1 + 0x1cfc) == 0)) {
    if ((float)*(int *)(param_1 + 0x870) <= (float)*(int *)(param_1 + 0x874) * 0.5) {
      sVar2 = local_20[uVar1];
    }
    if (*(short *)(param_1 + 0xdc4) != 0) {
      sVar2 = local_20[uVar1];
    }
  }
  if ((*(int *)(param_1 + 0x4a0) == 1) && (*(int *)(param_1 + 0x1cfc) == 0)) {
    sVar2 = local_20[uVar1];
  }
  if ((sVar2 == 3) && (1 < *(int *)(param_1 + 0x1f9c))) {
    sVar2 = 2;
    *(undefined4 *)(param_1 + 0x2044) = 3;
  }
  FUN_00a8caf0((int)sVar2,0,0,0);
  *(int *)(param_1 + 0x2018) = *(int *)(param_1 + 0x2018) + 1;
  if (7 < *(int *)(param_1 + 0x2018)) {
    *(undefined4 *)(param_1 + 0x2018) = 0;
  }
  return;
}

// 00AE9A30  FUN_00ae9a30  size=125  [callgraph]
void __fastcall FUN_00ae9a30(int param_1)

{
  short sVar1;
  uint uVar2;
  short local_10 [8];
  
  uVar2 = *(uint *)(param_1 + 0x201c) & 0x80000007;
  local_10[0] = 0x14;
  local_10[1] = 0xb;
  local_10[2] = 0x1b;
  local_10[3] = 0x1a;
  local_10[4] = 0x1a;
  local_10[5] = 0x14;
  local_10[6] = 0xb;
  local_10[7] = 0x1b;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
  }
  sVar1 = local_10[uVar2];
  if ((*(int *)(param_1 + 0x1d04) == 1) && (sVar1 == 0x1b)) {
    sVar1 = 0xb;
  }
  FUN_00a8caf0((int)sVar1,0,0,0);
  *(int *)(param_1 + 0x201c) = *(int *)(param_1 + 0x201c) + 1;
  if (7 < *(int *)(param_1 + 0x201c)) {
    *(undefined4 *)(param_1 + 0x201c) = 0;
  }
  return;
}

// 00AE9AB0  FUN_00ae9ab0  size=278  [callgraph]
void __fastcall FUN_00ae9ab0(int param_1)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  short local_30 [24];
  
  local_30[0] = 0x18;
  local_30[1] = 3;
  local_30[2] = 0x18;
  local_30[3] = 0x14;
  local_30[4] = 0xb;
  local_30[5] = 0x14;
  local_30[6] = 0x18;
  local_30[7] = 3;
  local_30[8] = 0x18;
  local_30[9] = 0x1a;
  local_30[10] = 0x18;
  local_30[0xb] = 0x14;
  local_30[0xc] = 0xb;
  local_30[0xd] = 0x14;
  local_30[0xe] = 0x18;
  local_30[0xf] = 0x1a;
  local_30[0x10] = 0x19;
  local_30[0x11] = 0x1a;
  local_30[0x12] = 0x19;
  local_30[0x13] = 0x14;
  local_30[0x14] = 0x19;
  local_30[0x15] = 0x18;
  local_30[0x16] = 0x19;
  local_30[0x17] = 0x1a;
  if (*(int *)(param_1 + 0x4a0) == 0) {
    uVar1 = *(uint *)(param_1 + 0x2020) & 0x80000007;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
    }
    sVar3 = local_30[uVar1];
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x2020) & 0x80000007;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
    }
    sVar3 = local_30[uVar1 + 8];
    iVar2 = FUN_00fdbc60();
    if (*(int *)(param_1 + 0x870) <= iVar2) {
      uVar1 = *(uint *)(param_1 + 0x201c) & 0x80000007;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
      }
      sVar3 = local_30[uVar1 + 0x10];
    }
  }
  if ((sVar3 == 0x18) && (*(int *)(param_1 + 0x30c0) != 0)) {
    sVar3 = 0xb;
  }
  FUN_00a8caf0((int)sVar3,0,0,0);
  *(int *)(param_1 + 0x2020) = *(int *)(param_1 + 0x2020) + 1;
  if (7 < *(int *)(param_1 + 0x2020)) {
    *(undefined4 *)(param_1 + 0x2020) = 0;
  }
  return;
}

// 00AE9BD0  FUN_00ae9bd0  size=196  [callgraph]
void __thiscall FUN_00ae9bd0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x204c) = 0xffffffff;
  if ((*(byte *)(param_1 + 0xdc4) & 7) != 7) {
    if (param_2 != 0) {
      (**(code **)(*(int *)(param_1 + 0x1b10) + 8))(0x41200000,0,0);
      *(undefined4 *)(param_1 + 0xdc8) = 1;
      if (*(int *)(param_1 + 0xa84) != 0) {
        FUN_00b7ab80(0x42700000,0x3c23d70a);
      }
    }
    *(undefined4 *)(param_1 + 0x2054) = 0x41200000;
    *(undefined4 *)(param_1 + 0x204c) = 0xc;
    *(undefined4 *)(param_1 + 0x2050) = 0x42700000;
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x2054) = 0xbf800000;
    }
    FUN_00c81b30();
    return;
  }
  return;
}

// 00AE9CA0  FUN_00ae9ca0  size=196  [callgraph]
void __thiscall FUN_00ae9ca0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x204c) = 0xffffffff;
  if ((*(byte *)(param_1 + 0xdc4) & 0xc0) != 0xc0) {
    if (param_2 != 0) {
      (**(code **)(*(int *)(param_1 + 0x1b10) + 8))(0x41200000,0,0);
      *(undefined4 *)(param_1 + 0xdc8) = 1;
      if (*(int *)(param_1 + 0xa84) != 0) {
        FUN_00b7ab80(0x42700000,0x3c23d70a);
      }
    }
    *(undefined4 *)(param_1 + 0x2054) = 0x41200000;
    *(undefined4 *)(param_1 + 0x204c) = 0x10;
    *(undefined4 *)(param_1 + 0x2050) = 0x42700000;
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x2054) = 0xbf800000;
    }
    FUN_00c81b30();
    return;
  }
  return;
}

// 00AE9D70  FUN_00ae9d70  size=196  [callgraph]
void __thiscall FUN_00ae9d70(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x204c) = 0xffffffff;
  if ((*(byte *)(param_1 + 0xdc4) & 0x30) != 0x30) {
    if (param_2 != 0) {
      (**(code **)(*(int *)(param_1 + 0x1b10) + 8))(0x41200000,0,0);
      *(undefined4 *)(param_1 + 0xdc8) = 1;
      if (*(int *)(param_1 + 0xa84) != 0) {
        FUN_00b7ab80(0x42700000,0x3c23d70a);
      }
    }
    *(undefined4 *)(param_1 + 0x2054) = 0x41200000;
    *(undefined4 *)(param_1 + 0x204c) = 0xe;
    *(undefined4 *)(param_1 + 0x2050) = 0x42700000;
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x2054) = 0xbf800000;
    }
    FUN_00c81b30();
    return;
  }
  return;
}

// 00AE9EA0  FUN_00ae9ea0  size=150  [callgraph]
void __fastcall FUN_00ae9ea0(int param_1)

{
  code *pcVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x204c) != -1) {
    fVar2 = *(float *)(param_1 + 0x2054) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x2054) = fVar2;
    if (fVar2 < 0.0) {
      *(float *)(param_1 + 0x2050) = *(float *)(param_1 + 0x2050) - *(float *)(param_1 + 0x910);
    }
    if (*(float *)(param_1 + 0x2050) < 0.0) {
      *(undefined4 *)(param_1 + 0x2054) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x204c) = 0xffffffff;
      pcVar1 = *(code **)(*(int *)(param_1 + 0x1b10) + 8);
      *(undefined4 *)(param_1 + 0x2050) = 0xbf800000;
      *(undefined4 *)(param_1 + 0xdc8) = 0;
      (*pcVar1)(0x41200000,0,0);
      return;
    }
  }
  return;
}

// 00AEAE60  Em0200::vf44  size=378  [class]
void __fastcall Em0200::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_00ae97a0();
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
  *(undefined4 *)(param_1 + 0x1c94) = 0;
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
  RayCastManager::getWork(param_1 + 0x1f84);
  RayCastManager::getWork(param_1 + 0x1f88);
  RayCastManager::getWork(param_1 + 0x1f8c);
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x2c))(param_1 + 0x1f60);
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x2c))(param_1 + 0x1f64);
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x2c))(param_1 + 0x1f68);
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x2c))(param_1 + 0x1f6c);
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x2c))(param_1 + 0x1f70);
  FUN_00a92a00();
  BehaviorEmBase::vf44();
  return;
}

// 00AEAFE0  Em0200::vf48  size=2588  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Em0200::vf48(int param_1)

{
  short *psVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float unaff_EBX;
  bool bVar9;
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
  
  local_a8 = (float)(uint)(*(int *)(param_1 + 0x4a0) != 2);
  fVar2 = *(float *)(param_1 + 0x21e0) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x21e0) = fVar2;
  if (*(int *)(param_1 + 0x21dc) == 1) {
    if (fVar2 < 0.0) {
      uVar5 = 0x44960000;
      *(undefined4 *)(param_1 + 0x21dc) = 2;
LAB_00aeb053:
      *(undefined4 *)(param_1 + 0x21e0) = uVar5;
    }
  }
  else if (fVar2 < 0.0) {
    uVar5 = 0x44610000;
    *(undefined4 *)(param_1 + 0x21dc) = 1;
    goto LAB_00aeb053;
  }
  if (*(int *)(param_1 + 0xa84) != 0) {
    iVar6 = FUN_00a8d9d0();
    if (iVar6 == 0) {
      psVar1 = (short *)(param_1 + 0x21da);
      *psVar1 = *psVar1 + -1;
      if (*psVar1 < 0) {
        *(undefined2 *)(param_1 + 0x21d8) = 0;
      }
    }
    else {
      *(short *)(param_1 + 0x21d8) = *(short *)(param_1 + 0x21d8) + 1;
      *(undefined2 *)(param_1 + 0x21da) = 0x1e;
    }
  }
  bVar4 = *(short *)(param_1 + 0x21d8) < 0x10;
  bVar9 = *(int *)(param_1 + 0x4e4) == 0;
  if (*(int *)(param_1 + 0x21d4) == 0) {
    if (bVar9 && bVar4) {
      FUN_00dc1300(1);
      *(undefined4 *)(param_1 + 0x21d4) = 1;
    }
  }
  else if (!bVar9 || !bVar4) {
    FUN_00dc1300(0);
    *(undefined4 *)(param_1 + 0x21d4) = 0;
  }
  if ((0 < *(int *)(param_1 + 0x870)) && (local_a8 != 0.0)) {
    if ((DAT_01bea090 & 0x80000000) == 0) {
      DAT_01dc08dc = 0;
      DAT_01dc08e0 = 0;
      DAT_01dc08e8 = *(undefined4 *)(param_1 + 0x874);
      DAT_01dc08e4 = *(undefined4 *)(param_1 + 0x870);
      DAT_01dc08ec = 1;
      DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
    }
    else {
      _DAT_01dc08f4 = *(undefined4 *)(param_1 + 0x874);
      _DAT_01dc08f0 = *(undefined4 *)(param_1 + 0x870);
      DAT_01dc08f8 = 1;
      DAT_018b5618 = *(undefined4 *)(param_1 + 0x4b4);
    }
    FUN_00cad2a0();
  }
  fVar2 = *(float *)(param_1 + 0xdd4);
  if (!NAN(fVar2) && 0.0 < fVar2 != (fVar2 == 0.0)) {
    *(float *)(param_1 + 0xdd4) = *(float *)(param_1 + 0xdd4) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0xdd8) != (*(float *)(param_1 + 0xdd8) == 0.0)) {
    *(float *)(param_1 + 0xdd8) = *(float *)(param_1 + 0xdd8) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x1f80) != (*(float *)(param_1 + 0x1f80) == 0.0)) {
    *(float *)(param_1 + 0x1f80) = *(float *)(param_1 + 0x1f80) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x1fe8) != (*(float *)(param_1 + 0x1fe8) == 0.0)) {
    *(float *)(param_1 + 0x1fe8) = *(float *)(param_1 + 0x1fe8) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x2024) != (*(float *)(param_1 + 0x2024) == 0.0)) {
    *(float *)(param_1 + 0x2024) = *(float *)(param_1 + 0x2024) - *(float *)(param_1 + 0x910);
  }
  if (((*(int *)(param_1 + 0x30c4) != 0) && ((DAT_01bea060 & 0x2000000) == 0)) &&
     (fVar2 = *(float *)(param_1 + 0x30c8) + *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x30c8) = fVar2, 1800.0 < fVar2)) {
    FUN_00c81b30(0x2c);
  }
  FUN_00ae9590();
  BehaviorEmBase::vf48();
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(param_1 + 800);
      iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
      if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"L_reg"), iVar7 != 0)) {
        *(undefined4 *)(iVar3 + 0x1c + iVar6) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar6 = iVar6 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(param_1 + 800);
      iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
      if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"left_foot"), iVar7 != 0)) {
        *(undefined4 *)(iVar3 + 0x1c + iVar6) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar6 = iVar6 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(param_1 + 800);
      iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
      if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_0164148c), iVar7 != 0)) {
        *(undefined4 *)(iVar3 + 0x1c + iVar6) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar6 = iVar6 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(param_1 + 800);
      iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
      if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"R_reg"), iVar7 != 0)) {
        *(undefined4 *)(iVar3 + 0x1c + iVar6) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar6 = iVar6 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(param_1 + 800);
      iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
      if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"right_foot"), iVar7 != 0)) {
        *(undefined4 *)(iVar3 + 0x1c + iVar6) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar6 = iVar6 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  local_a8 = 0.0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(param_1 + 800);
      iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
      if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_01641488), iVar7 != 0)) {
        *(undefined4 *)(iVar3 + 0x1c + iVar6) = 0x3f800000;
      }
      local_a8 = (float)((int)local_a8 + 1);
      iVar6 = iVar6 + 0x70;
    } while ((int)local_a8 < (int)*(short *)(param_1 + 0x324));
  }
  if (*(int *)(param_1 + 0x4e4) == 0) {
    iVar6 = *(int *)(param_1 + 0xa84);
    local_90 = *(float *)(iVar6 + 0x40);
    local_88 = *(float *)(iVar6 + 0x48);
    local_84 = *(float *)(iVar6 + 0x4c);
    local_8c = *(float *)(iVar6 + 0x44) + 0.5;
    local_a0 = (float)_DAT_01bea630;
    local_9c = (float)_DAT_01bea634;
    local_98 = (float)_DAT_01bea638;
    local_94 = _DAT_01bea63c;
    iVar6 = FUN_009f8b40();
    local_60 = local_90;
    local_40 = iVar6 << 0x10 | 6;
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
    iVar6 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_70,0,&local_a8,0,&local_60);
    if (iVar6 != 0) {
      iVar6 = FUN_00912b40(local_a8,&DAT_016485a0);
      if ((iVar6 != 0) || (iVar6 = FUN_00912b40(local_a8,"lfoot"), iVar6 != 0)) {
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar6 = 0;
          do {
            iVar3 = *(int *)(param_1 + 800);
            iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"L_reg"), iVar7 != 0)) {
              *(undefined4 *)(iVar3 + 0x1c + iVar6) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar6 = iVar6 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar6 = 0;
          do {
            iVar3 = *(int *)(param_1 + 800);
            iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"left_foot"), iVar7 != 0)) {
              *(undefined4 *)(iVar3 + 0x1c + iVar6) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar6 = iVar6 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar6 = 0;
          do {
            iVar3 = *(int *)(param_1 + 800);
            iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_0164148c), iVar7 != 0)) {
              *(undefined4 *)(iVar3 + 0x1c + iVar6) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar6 = iVar6 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
      }
      iVar6 = FUN_00912b40(local_a8,&DAT_01648590);
      if ((iVar6 != 0) || (iVar6 = FUN_00912b40(local_a8,"rfoot"), iVar6 != 0)) {
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar6 = 0;
          do {
            iVar3 = *(int *)(param_1 + 800);
            iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"R_reg"), iVar7 != 0)) {
              *(undefined4 *)(iVar3 + 0x1c + iVar6) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar6 = iVar6 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar6 = 0;
          do {
            iVar3 = *(int *)(param_1 + 800);
            iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"right_foot"), iVar7 != 0)) {
              *(undefined4 *)(iVar3 + 0x1c + iVar6) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar6 = iVar6 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
        local_a4 = 0.0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar6 = 0;
          do {
            iVar3 = *(int *)(param_1 + 800);
            iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,&DAT_01641488), iVar7 != 0)) {
              *(undefined4 *)(iVar3 + 0x1c + iVar6) = 0x3ecccccd;
            }
            local_a4 = (float)((int)local_a4 + 1);
            iVar6 = iVar6 + 0x70;
          } while ((int)local_a4 < (int)*(short *)(param_1 + 0x324));
        }
      }
    }
  }
  iVar6 = FUN_00a12210(6);
  local_80 = *(float *)(iVar6 + 0x40);
  local_7c = *(float *)(iVar6 + 0x44);
  local_78 = *(float *)(iVar6 + 0x48);
  local_74 = *(float *)(iVar6 + 0x4c);
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
  piVar8 = (int *)FUN_009f8b60();
  local_78 = local_88;
  local_74 = local_84;
  local_70 = local_80;
  fStack_6c = local_7c;
  fStack_68 = local_98;
  fStack_64 = local_94;
  local_58 = *piVar8 << 0x10 | 0x19;
  local_60 = local_90;
  local_5c = local_8c;
  local_54 = 0x1000000;
  local_50 = 0;
  local_4c = 0;
  local_48 = &DAT_016484f0;
  local_44 = 0.0;
  iVar6 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_38,0,0,0,&local_78);
  *(undefined4 *)(param_1 + 0x1fec) = 0;
  if (iVar6 == 0) {
    if (*(int *)(param_1 + 0x1fa0) != 0) {
      *(int *)(param_1 + 0x1fa0) = *(int *)(param_1 + 0x1fa0) + -1;
    }
    if (*(int *)(param_1 + 0x1fa0) != 0) goto LAB_00aeb97e;
    *(undefined4 *)(param_1 + 0x1f9c) = 0;
  }
  else {
    *(int *)(param_1 + 0x1f9c) = *(int *)(param_1 + 0x1f9c) + 1;
    *(undefined4 *)(param_1 + 0x1fa0) = 10;
  }
  *(undefined4 *)(param_1 + 0x1ff0) = 0;
LAB_00aeb97e:
  if (*(int *)(param_1 + 0x1fbc) == 0) {
    fVar2 = *(float *)(param_1 + 0x1fb4) + 0.2;
    *(float *)(param_1 + 0x1fb4) = fVar2;
    if (*(float *)(param_1 + 0x1fb8) <= fVar2) {
      *(undefined4 *)(param_1 + 0x1fb4) = *(undefined4 *)(param_1 + 0x1fb8);
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x1fb4) - 0.5;
    *(float *)(param_1 + 0x1fb4) = fVar2;
    if (fVar2 <= 10.0) {
      *(undefined4 *)(param_1 + 0x1fb4) = 0x41200000;
    }
  }
  CharacterControl::setRadius(*(undefined4 *)(param_1 + 0x1fb4));
  *(undefined4 *)(param_1 + 0x1fbc) = 0;
  return;
}

// 00AEBA00  Em0200::getAttackInfo  size=706  [class]
undefined4 __thiscall Em0200::getAttackInfo(int param_1,ushort *param_2)

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
    FUN_00dd5650(&DAT_016a0514);
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
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return unaff_EBX;
  default:
    goto switchD_00aebae3_caseD_5;
  case 6:
    *puVar1 = 0xb0;
    uVar2 = 0x3100;
    goto LAB_00aebca9;
  case 8:
    *puVar1 = 0xb1;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *(undefined2 *)(puVar1 + 0x21) = 0x3101;
    return unaff_EBX;
  case 10:
    *puVar1 = 0xb2;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3101;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return unaff_EBX;
  case 0xc:
    *puVar1 = 0xb3;
    break;
  case 0xe:
    *puVar1 = 0xb4;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    goto LAB_00aebba9;
  case 0x10:
    *puVar1 = 0xb5;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3100;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return unaff_EBX;
  case 0x12:
    *puVar1 = 0xb7;
    puVar1[0x23] = puVar1[0x23] | 0x400000;
    puVar1[0x24] = puVar1[0x24] | 0x4000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x50;
    return unaff_EBX;
  case 0x14:
    *puVar1 = 0xb8;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
LAB_00aebba9:
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3102;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return unaff_EBX;
  case 0x16:
    *puVar1 = 0xb3;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x3102;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return unaff_EBX;
  case 0x18:
    *puVar1 = 0x147;
  }
  puVar1[0x23] = puVar1[0x23] | 0x20000000;
  puVar1[0x24] = puVar1[0x24] | 0x2000000;
  uVar2 = 0x3102;
LAB_00aebca9:
  *(undefined2 *)(puVar1 + 0x21) = uVar2;
  *(undefined1 *)((int)puVar1 + 0x11) = 10;
switchD_00aebae3_caseD_5:
  return unaff_EBX;
}

// 00AEBD10  FUN_00aebd10  size=260  [callgraph]
void __fastcall FUN_00aebd10(int param_1)

{
  int iVar1;
  
  *(float *)(param_1 + 0x1f94) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1f94);
  if (*(int *)(param_1 + 0xa84) != 0) {
    iVar1 = FUN_00a8cac0();
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x61c) < 4)) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
      iVar1 = FUN_00a8cac0();
      if ((iVar1 == 3) && (1.3962634 < *(float *)(param_1 + 0xaa0))) {
LAB_00aebd7d:
        FUN_00a8cb60(4);
        return;
      }
      if (*(int *)(param_1 + 0x21dc) == 1) {
        iVar1 = FUN_00a8cac0();
        if ((iVar1 == 3) && (*(float *)(param_1 + 0xa90) < 900.0)) goto LAB_00aebd7d;
        if ((*(int *)(param_1 + 0x1f90) != 0) &&
           ((300.0 < *(float *)(param_1 + 0x1f94) && (2500.0 < *(float *)(param_1 + 0xa90))))) {
          FUN_00a8caf0(3,0,0,0);
          return;
        }
      }
      else if (*(float *)(param_1 + 0xa8c) <= 2500.0) {
        FUN_00a8caf0(2,0,0,0);
      }
    }
  }
  return;
}

// 00AEBE20  FUN_00aebe20  size=253  [callgraph]
void FUN_00aebe20(int param_1,float *param_2,undefined4 param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float local_c [2];
  float local_4;
  
  FUN_00a581b0(local_c,0,param_3);
  iVar6 = *(int *)(param_1 + 0x44);
  iVar5 = 0;
  local_c[0] = *param_2 - local_c[0];
  local_4 = param_2[2] - local_4;
  if (3 < iVar6) {
    iVar3 = 0;
    iVar4 = (iVar6 - 4U >> 2) + 1;
    iVar5 = iVar4 * 4;
    do {
      *(float *)(*(int *)(param_1 + 0x3c) + iVar3) =
           local_c[0] + *(float *)(*(int *)(param_1 + 0x3c) + iVar3);
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 8 + iVar3);
      *pfVar1 = local_4 + *pfVar1;
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 0xc + iVar3);
      *pfVar1 = local_c[0] + *pfVar1;
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 0x14 + iVar3);
      *pfVar1 = local_4 + *pfVar1;
      *(float *)(*(int *)(param_1 + 0x3c) + 0x18 + iVar3) =
           *(float *)(*(int *)(param_1 + 0x3c) + 0x18 + iVar3) + local_c[0];
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 0x20 + iVar3);
      *pfVar1 = local_4 + *pfVar1;
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 0x24 + iVar3);
      *pfVar1 = local_c[0] + *pfVar1;
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 0x2c + iVar3);
      iVar3 = iVar3 + 0x30;
      iVar4 = iVar4 + -1;
      *pfVar1 = local_4 + *pfVar1;
    } while (iVar4 != 0);
  }
  if (iVar5 < iVar6) {
    iVar3 = iVar5 * 0xc;
    iVar6 = iVar6 - iVar5;
    do {
      *(float *)(*(int *)(param_1 + 0x3c) + iVar3) =
           *(float *)(*(int *)(param_1 + 0x3c) + iVar3) + local_c[0];
      pfVar1 = (float *)(*(int *)(param_1 + 0x3c) + 8 + iVar3);
      pfVar2 = (float *)(*(int *)(param_1 + 0x3c) + 8 + iVar3);
      iVar3 = iVar3 + 0xc;
      iVar6 = iVar6 + -1;
      *pfVar2 = *pfVar1 + local_4;
    } while (iVar6 != 0);
  }
  return;
}

// 00AEBF20  FUN_00aebf20  size=1658  [callgraph]
void __fastcall FUN_00aebf20(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  if ((param_1[0x187] != 0) && (param_1[0x7e6] != 0)) {
    FUN_00a8caf0(0x27,0,0,0);
    param_1[0x7f1] = 0;
    param_1[0x813] = -1;
    if ((*(byte *)(param_1 + 0x371) & 7) == 7) {
      return;
    }
    param_1[0x815] = 0x41200000;
    param_1[0x813] = 0xc;
    param_1[0x814] = 0x42700000;
    FUN_00c81b30(0x2d);
    return;
  }
  param_1[0x809] = 0x43f00000;
  param_1[0x554] = 1;
  local_c = 0x3dfa35dd;
  param_1[0x553] = 1;
  local_8 = 0.008726646;
  local_4 = 0x3dcccccd;
  iVar2 = FUN_00ac4780();
  if (iVar2 == 2) {
    local_c = 0x3e32b8c2;
    local_8 = 0.017453292;
    local_4 = 0x3df5c28f;
  }
  iVar2 = FUN_00ac4780();
  if (2 < iVar2) {
    local_c = 0x3e7a35dd;
    local_8 = 0.034906585;
    local_4 = 0x3e19999a;
  }
  switch(param_1[0x187]) {
  case 0:
    param_1[0x251] = 0;
    param_1[0x187] = 1;
    FUN_00ae8d00();
    break;
  case 1:
    break;
  case 2:
    goto LAB_00aec175;
  case 3:
    FUN_00aa4080(0x17,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43f00000;
    iVar2 = FUN_00a7f600(0xf0012);
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      fVar4 = (float10)fpatan((float10)*(float *)(iVar2 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar2 + 0x48) - (float10)(float)param_1[0x12]);
      fVar5 = (float10)fpatan((float10)*(float *)(param_1[0x2a1] + 0x40) -
                              (float10)(float)param_1[0x10],
                              (float10)*(float *)(param_1[0x2a1] + 0x48) -
                              (float10)(float)param_1[0x12]);
      fVar4 = (float10)FUN_00ddba30((float)(fVar4 - fVar5));
      if (fVar4 * fVar4 < (float10)0.06853892) {
        param_1[0x250] = 1;
      }
    }
    iVar2 = FUN_004027c0();
    if ((iVar2 != 0) && (param_1[0x251] == 2)) {
      param_1[0x250] = 1;
    }
    goto LAB_00aec2ca;
  case 4:
LAB_00aec2ca:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((1.5707964 < (float)param_1[0x2a8]) || (fVar1 - (float)param_1[0x244] < 0.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(param_1[0x249],0x3f800000);
    if ((param_1[0x250] != 0) && (iVar2 = FUN_00a7f600(0xf0012), iVar2 != 0)) {
      iVar2 = FUN_00a7c8a0();
      FUN_00a8e880(iVar2 + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3d567750,0);
    }
    if (param_1[0x2a1] == 0) {
      return;
    }
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(local_4,0x393702d3,(float)param_1[0x244] * local_8,0);
    return;
  case 5:
    param_1[0x187] = 6;
    param_1[0x248] = 0x41a00000;
    goto LAB_00aec3ec;
  case 6:
LAB_00aec3ec:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (iVar2 = FUN_00a94e10(0,0,0x40a00000), iVar2 != 0))
    {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(param_1[0x249],0x3f800000);
    return;
  case 7:
    FUN_00aa4080(0x18,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x251] = param_1[0x251] + 1;
    param_1[0x248] = 0x44160000;
    param_1[0x187] = param_1[0x187] + 1;
    iVar2 = param_1[0x251];
    iVar3 = FUN_004027c0();
    if (((iVar3 != 0) && (param_1[0x128] == 1)) && (iVar2 < 3)) {
      param_1[0x187] = 1;
    }
    goto LAB_00aec4c2;
  case 8:
LAB_00aec4c2:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8caf0(0,0,0,0);
    }
    iVar2 = FUN_00a8c760(4);
    if ((iVar2 != 0) &&
       (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0))) {
      if (0.7853982 < (float)param_1[0x2a7]) {
        FUN_00a8caf0(9,0,0,0);
      }
      if (2.1816616 < (float)param_1[0x2a7]) {
        FUN_00a8caf0(10,0,0,0);
      }
      if ((float)param_1[0x2a7] < -0.7853982) {
        FUN_00a8caf0(7,0,0,0);
      }
      if ((float)param_1[0x2a7] < -2.1816616) {
        FUN_00a8caf0(8,0,0,0);
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  default:
    goto switchD_00aec036_default;
  }
  FUN_00aa4080(0x16,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x248] = 0x44160000;
  param_1[0x7e5] = 0;
  param_1[0x249] = 0x3f800000;
  iVar2 = FUN_00ac4780();
  if (1 < iVar2) {
    if (3025.0 < (float)param_1[0x2a4]) {
      param_1[0x249] = 0x3f933333;
    }
    if (6400.0 < (float)param_1[0x2a4]) {
      param_1[0x249] = 0x3fa66666;
    }
  }
  param_1[0x7e6] = 0;
  param_1[0x250] = 0;
  iVar2 = FUN_00a7f600(0xf0012);
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    fVar4 = (float10)fpatan((float10)*(float *)(iVar2 + 0x40) - (float10)(float)param_1[0x10],
                            (float10)*(float *)(iVar2 + 0x48) - (float10)(float)param_1[0x12]);
    fVar5 = (float10)fpatan((float10)*(float *)(param_1[0x2a1] + 0x40) -
                            (float10)(float)param_1[0x10],
                            (float10)*(float *)(param_1[0x2a1] + 0x48) -
                            (float10)(float)param_1[0x12]);
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 - fVar5));
    if (fVar4 * fVar4 < (float10)0.06853892) {
      param_1[0x250] = 1;
    }
  }
  FUN_00a8d280();
LAB_00aec175:
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  FUN_00ac80a0(param_1[0x249],0x3f800000);
  if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,local_c,0);
    return;
  }
switchD_00aec036_default:
  return;
}

// 00AEC5E0  FUN_00aec5e0  size=232  [callgraph]
void __fastcall FUN_00aec5e0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_00ac4780();
    if (1 < iVar2) {
      iVar2 = FUN_00a8c760(4);
      if ((((iVar2 != 0) && (*(int *)(param_1 + 0x1d20) == 0)) &&
          (*(float *)(param_1 + 0xa90) <= 1225.0)) &&
         ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0) &&
          (*(float *)(param_1 + 0xaa0) < 2.6179938)))) {
        if ((*(byte *)(param_1 + 0x202c) & 1) == 0) {
          uVar3 = 0x1d;
        }
        else {
          uVar3 = 4;
        }
        FUN_00a8caf0(uVar3,0,0,0);
        *(int *)(param_1 + 0x202c) = *(int *)(param_1 + 0x202c) + 1;
      }
      iVar2 = FUN_00a8c760(4);
      if (((iVar2 != 0) && (*(int *)(param_1 + 0x1d20) == 0)) &&
         ((*(float *)(param_1 + 0xa90) <= 1225.0 &&
          ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0) &&
           (*(float *)(param_1 + 0xaa0) < 2.6179938)))))) {
        FUN_00ae9920();
        return;
      }
    }
  }
  return;
}

// 00AEC6D0  FUN_00aec6d0  size=232  [callgraph]
void __fastcall FUN_00aec6d0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_00ac4780();
    if (1 < iVar2) {
      iVar2 = FUN_00a8c760(4);
      if ((((iVar2 != 0) && (*(int *)(param_1 + 0x1d20) == 0)) &&
          (*(float *)(param_1 + 0xa90) <= 1225.0)) &&
         ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0) &&
          (*(float *)(param_1 + 0xaa0) < 2.6179938)))) {
        if ((*(byte *)(param_1 + 0x202c) & 1) == 0) {
          uVar3 = 0x1d;
        }
        else {
          uVar3 = 4;
        }
        FUN_00a8caf0(uVar3,0,0,0);
        *(int *)(param_1 + 0x202c) = *(int *)(param_1 + 0x202c) + 1;
      }
      iVar2 = FUN_00a8c760(4);
      if (((iVar2 != 0) && (*(int *)(param_1 + 0x1d20) == 0)) &&
         ((*(float *)(param_1 + 0xa90) <= 1225.0 &&
          ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0) &&
           (*(float *)(param_1 + 0xaa0) < 2.6179938)))))) {
        FUN_00ae9920();
        return;
      }
    }
  }
  return;
}

// 00AEC7C0  FUN_00aec7c0  size=127  [callgraph]
void __fastcall FUN_00aec7c0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_00ac4780();
    if (1 < iVar2) {
      FUN_00a8c760(4);
      iVar2 = FUN_00a8c760(4);
      if ((((iVar2 != 0) && (*(float *)(param_1 + 0xa90) <= 5625.0)) &&
          (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 1600.0 < fVar1 != (fVar1 == 1600.0)))
         && ((*(float *)(param_1 + 0xaa0) < 1.5707964 && (*(int *)(param_1 + 0x1d04) == 0)))) {
        FUN_00a8caf0(0x1b,0,0,0);
      }
    }
  }
  return;
}

// 00AEC860  FUN_00aec860  size=110  [callgraph]
void __fastcall FUN_00aec860(int param_1)

{
  if ((*(int *)(param_1 + 0x2f90) != 0) && (*(float *)(param_1 + 0xa90) < 1600.0)) {
    (**(code **)(*(int *)(param_1 + 0x1590) + 8))(0x41200000,0,0);
    if (*(int *)(param_1 + 0x1540) != 0) {
      FUN_00ad0a90();
    }
    *(undefined4 *)(param_1 + 0x1540) = 0;
    FUN_00a8caf0(0x17,0,0,0);
  }
  return;
}

// 00AEC8D0  FUN_00aec8d0  size=301  [callgraph]
void __fastcall FUN_00aec8d0(int param_1)

{
  float fVar1;
  int iVar2;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = 14.0;
  local_1c = 0.0;
  local_18 = 0.0;
  iVar2 = FUN_00a12210(0x13);
  if (iVar2 != 0) {
    D3DXVec3TransformNormal(&local_20,&local_20,iVar2 + 0x10);
    local_20 = *(float *)(iVar2 + 0x40) + local_20;
    local_1c = *(float *)(iVar2 + 0x44) + local_1c;
    local_18 = *(float *)(iVar2 + 0x48) + local_18;
  }
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_00a8c760(4);
    if ((((iVar2 != 0) && (*(float *)(param_1 + 0xa90) <= 2025.0)) &&
        (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0))) &&
       ((*(float *)(param_1 + 0xaa0) < 1.5707964 && (*(int *)(param_1 + 0x1cfc) == 0)))) {
      FUN_00a8caf0(0x17,0,0,0);
    }
    iVar2 = FUN_00a8c760(4);
    if (((iVar2 != 0) && (*(float *)(param_1 + 0xa90) <= 5625.0)) &&
       ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 1600.0 < fVar1 != (fVar1 == 1600.0) &&
        ((*(float *)(param_1 + 0xaa0) < 2.6179938 && (*(int *)(param_1 + 0x1d04) == 0)))))) {
      FUN_00a8caf0(0x1b,0,0,0);
    }
  }
  return;
}

// 00AECA00  FUN_00aeca00  size=127  [callgraph]
void __fastcall FUN_00aeca00(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_00ac4780();
    if (1 < iVar2) {
      FUN_00a8c760(4);
      iVar2 = FUN_00a8c760(4);
      if ((((iVar2 != 0) && (*(float *)(param_1 + 0xa90) <= 5625.0)) &&
          (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 1600.0 < fVar1 != (fVar1 == 1600.0)))
         && ((*(float *)(param_1 + 0xaa0) < 2.6179938 && (*(int *)(param_1 + 0x1d04) == 0)))) {
        FUN_00a8caf0(0x1b,0,0,0);
      }
    }
  }
  return;
}

// 00AECA80  FUN_00aeca80  size=223  [callgraph]
void __fastcall FUN_00aeca80(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar3 = FUN_00ac4780();
    if (1 < iVar3) {
      iVar3 = FUN_00a8c760(4);
      if ((((iVar3 != 0) && (*(float *)(param_1 + 0xa90) <= 40000.0)) &&
          (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 2500.0 < fVar1 != (fVar1 == 2500.0)))
         && (*(float *)(param_1 + 0xaa0) < 1.5707964)) {
        FUN_00a8caf0(3,0,0,0);
      }
      if (*(int *)(param_1 + 0x1d00) == 0) {
        sVar2 = FUN_00dde2d0(0,2);
        if (sVar2 == 0) {
          iVar3 = FUN_00a8c760(4);
          if (((iVar3 != 0) && (*(float *)(param_1 + 0xa90) <= 40000.0)) &&
             ((fVar1 = *(float *)(param_1 + 0xa90),
              !NAN(fVar1) && 2500.0 < fVar1 != (fVar1 == 2500.0) &&
              (*(float *)(param_1 + 0xaa0) < 1.5707964)))) {
            FUN_00ae9ab0();
            return;
          }
        }
      }
    }
  }
  return;
}

// 00AF6B00  Em0200::vf19C  size=238  [class]
void __thiscall Em0200::vf19C(int *param_1,int param_2,uint param_3)

{
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  local_b0 = *(undefined4 *)(param_2 + 0x100);
  local_ac = *(undefined4 *)(param_2 + 0x104);
  local_a8 = *(undefined4 *)(param_2 + 0x108);
  local_a4 = *(undefined4 *)(param_2 + 0x10c);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = local_b0;
  local_6c = local_ac;
  local_68 = local_a8;
  if ((*(uint *)(param_2 + 0x8c) & 0x10000000) == 0) {
    if (*(short *)(param_2 + 0x84) == -1) {
      (**(code **)(*param_1 + 0x1ac))
                (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    }
    else {
      (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
    }
  }
  if (((param_3 & 0x10) == 0) && ((*(uint *)(param_2 + 0x8c) & 0x20000000) != 0)) {
    FUN_00e5e080("core_se_impact_kick",&local_b0,0,0xffffffff,0);
  }
  return;
}

// 00AF6BF0  FUN_00af6bf0  size=377  [callgraph]
void __fastcall FUN_00af6bf0(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  short local_10 [8];
  
  uVar6 = *(uint *)(param_1 + 0x2014) & 0x80000007;
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
    if ((sVar7 == 0x13) || (sVar7 == 0x12)) {
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
      if (iVar5 != 0) {
        fVar1 = *(float *)(iVar5 + 0x40) - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
        fVar2 = *(float *)(iVar5 + 0x48) - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
        if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 7.0) {
          sVar7 = 0x12;
          goto LAB_00af6d38;
        }
      }
      if (!bVar3) goto LAB_00af6c5e;
    }
    if (sVar7 != 6) goto LAB_00af6d38;
  }
  else {
LAB_00af6c5e:
    sVar7 = 0;
    sVar4 = FUN_00dde2d0(0,1);
    if (sVar4 == 0) goto LAB_00af6d38;
    sVar7 = 6;
  }
  iVar5 = FUN_00aed900(0xc2200000);
  if (iVar5 != 0) {
    sVar7 = 2;
  }
LAB_00af6d38:
  FUN_00a8caf0((int)sVar7,0,0,0);
  *(int *)(param_1 + 0x2014) = *(int *)(param_1 + 0x2014) + 1;
  if (7 < *(int *)(param_1 + 0x2014)) {
    *(undefined4 *)(param_1 + 0x2014) = 0;
  }
  return;
}

// 00AF6E90  Em0200::startup  size=8825  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Em0200::startup(char *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  undefined *puVar10;
  char *pcVar11;
  char **ppcStack_340;
  undefined4 **ppuStack_33c;
  undefined4 **ppuStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 **ppuStack_32c;
  uint *puStack_328;
  undefined4 **ppuStack_324;
  undefined4 *puStack_320;
  undefined1 *puStack_31c;
  char **ppcStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 **ppuStack_30c;
  uint *puStack_308;
  char **ppcStack_304;
  undefined4 *puStack_300;
  undefined4 *puStack_2fc;
  undefined4 uStack_2f8;
  undefined1 *puStack_2f4;
  uint *puStack_2f0;
  undefined4 *local_2ec;
  undefined4 *local_2e8;
  uint *local_2e4;
  char *local_2e0;
  char *local_2dc;
  char *pcStack_2d8;
  char *local_2d4;
  undefined4 uStack_2c4;
  int local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  uint local_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  uint local_294 [4];
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  uint uStack_274;
  char local_270 [20];
  undefined4 local_25c;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_21c;
  undefined4 uStack_204;
  undefined4 uStack_1e4;
  char local_120 [284];
  
  local_2d4 = (char *)0xaf6ea6;
  iVar2 = BehaviorEmBase::startup();
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffefffff;
    local_2d4 = (char *)0xaf6ec4;
    FUN_00a933e0();
    local_2d4 = (char *)0x18;
    pcStack_2d8 = (char *)0xaf6ecd;
    lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>();
    local_2d4 = (char *)0xeff;
    pcStack_2d8 = (char *)0xaf6ed9;
    iVar2 = FUN_00a12210();
    iVar7 = 0;
    if (iVar2 != 0) {
      *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 0x1000;
    }
    local_2d4 = (char *)0xaf6ef2;
    FUN_00a929d0();
    local_2d4 = (char *)0xaf6efe;
    FUN_00e01ca0();
    local_2d4 = param_1 + 0x16f0;
    pcStack_2d8 = (char *)0xaf6f11;
    FUN_00dffb30();
    local_2d4 = local_120;
    pcStack_2d8 = (char *)0x2;
    local_2e0 = (char *)0xaf6f21;
    local_2dc = param_1;
    FUN_00e02d50();
    param_1[0x1580] = '\x01';
    param_1[0x1581] = '\0';
    param_1[0x1582] = '\0';
    param_1[0x1583] = '\0';
    local_2c0 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        iVar2 = *(int *)(param_1 + 800);
        pcStack_2d8 = *(char **)(*(int *)(iVar2 + 0x60 + iVar7) + 0x40);
        if (pcStack_2d8 != (char *)0x0) {
          local_2d4 = "eye";
          local_2dc = (char *)0xaf6f5c;
          iVar3 = FUN_00fdbbd0();
          if (iVar3 != 0) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        local_2c0 = local_2c0 + 1;
        iVar7 = iVar7 + 0x70;
      } while (local_2c0 < *(short *)(param_1 + 0x324));
    }
    local_2d4 = (char *)0xbb8;
    param_1[0x814] = '\x04';
    param_1[0x815] = '\0';
    param_1[0x816] = '\0';
    param_1[0x817] = '\0';
    pcStack_2d8 = (char *)0xaf6f97;
    FUN_00a8edf0();
    if (*(int *)(param_1 + 0x4a0) == 0) {
      local_2d4 = (char *)0x7d0;
      pcStack_2d8 = (char *)0xaf6fab;
      FUN_00a8edf0();
    }
    param_1[0x1cc8] = 'd';
    param_1[0x1cc9] = '\0';
    param_1[0x1cca] = '\0';
    param_1[0x1ccb] = '\0';
    param_1[0x1fc8] = '\0';
    param_1[0x1fc9] = '\0';
    param_1[0x1fca] = '@';
    param_1[0x1fcb] = '@';
    param_1[0x1cc4] = 'd';
    param_1[0x1cc5] = '\0';
    param_1[0x1cc6] = '\0';
    param_1[0x1cc7] = '\0';
    param_1[0x1fcc] = '\0';
    param_1[0x1fcd] = '\0';
    param_1[0x1fce] = '@';
    param_1[0x1fcf] = '@';
    param_1[0x1cd0] = 'd';
    param_1[0x1cd1] = '\0';
    param_1[0x1cd2] = '\0';
    param_1[0x1cd3] = '\0';
    param_1[0x1fd0] = '\0';
    param_1[0x1fd1] = '\0';
    param_1[0x1fd2] = '@';
    param_1[0x1fd3] = '@';
    param_1[0x1ccc] = 'd';
    param_1[0x1ccd] = '\0';
    param_1[0x1cce] = '\0';
    param_1[0x1ccf] = '\0';
    param_1[0x1fd4] = '\0';
    param_1[0x1fd5] = '\0';
    param_1[0x1fd6] = '@';
    param_1[0x1fd7] = '@';
    param_1[0x1ce0] = ',';
    param_1[0x1ce1] = '\x01';
    param_1[0x1ce2] = '\0';
    param_1[0x1ce3] = '\0';
    param_1[0x1cdc] = ',';
    param_1[0x1cdd] = '\x01';
    param_1[0x1cde] = '\0';
    param_1[0x1cdf] = '\0';
    param_1[0x1cd8] = '\x1e';
    param_1[0x1cd9] = '\0';
    param_1[0x1cda] = '\0';
    param_1[0x1cdb] = '\0';
    param_1[0x1cd4] = '\x1e';
    param_1[0x1cd5] = '\0';
    param_1[0x1cd6] = '\0';
    param_1[0x1cd7] = '\0';
    param_1[0x1cf0] = '2';
    param_1[0x1cf1] = '\0';
    param_1[0x1cf2] = '\0';
    param_1[0x1cf3] = '\0';
    param_1[0x1cec] = '2';
    param_1[0x1ced] = '\0';
    param_1[0x1cee] = '\0';
    param_1[0x1cef] = '\0';
    param_1[0x1ce8] = '2';
    param_1[0x1ce9] = '\0';
    param_1[0x1cea] = '\0';
    param_1[0x1ceb] = '\0';
    param_1[0x1ce4] = '2';
    param_1[0x1ce5] = '\0';
    param_1[0x1ce6] = '\0';
    param_1[0x1ce7] = '\0';
    param_1[0x1fd8] = -0x12;
    param_1[0x1fd9] = '\x02';
    param_1[0x1fda] = '\0';
    param_1[0x1fdb] = '\0';
    param_1[0x1fdc] = -0x12;
    param_1[0x1fdd] = '\x02';
    param_1[0x1fde] = '\0';
    param_1[0x1fdf] = '\0';
    param_1[0x1fe0] = -0x12;
    param_1[0x1fe1] = '\x02';
    param_1[0x1fe2] = '\0';
    param_1[0x1fe3] = '\0';
    param_1[0x1fe4] = -0x12;
    param_1[0x1fe5] = '\x02';
    param_1[0x1fe6] = '\0';
    param_1[0x1fe7] = '\0';
    if (*(int *)(param_1 + 0x754) != 0) {
      local_2d4 = (char *)0x23;
      pcStack_2d8 = (char *)0xaf7057;
      FUN_00ac8570();
      local_2d4 = (char *)0xaf705c;
      local_2d4 = (char *)FUN_00fdbc60();
      pcStack_2d8 = (char *)0xaf7064;
      FUN_00a8edf0();
      if (*(int *)(param_1 + 0x4a0) == 0) {
        local_2d4 = (char *)0x22;
        pcStack_2d8 = (char *)0xaf7075;
        FUN_00ac8570();
        local_2d4 = (char *)0xaf707a;
        local_2d4 = (char *)FUN_00fdbc60();
        pcStack_2d8 = (char *)0xaf7082;
        FUN_00a8edf0();
      }
      local_2d4 = (char *)0x2a;
      pcStack_2d8 = (char *)0xaf708b;
      fVar9 = (float10)FUN_00ac8570();
      *(float *)(param_1 + 0x1fc8) = (float)fVar9;
      local_2d4 = (char *)0x2b;
      pcStack_2d8 = (char *)0xaf709a;
      fVar9 = (float10)FUN_00ac8570();
      *(float *)(param_1 + 0x1fcc) = (float)fVar9;
      local_2d4 = (char *)0x2c;
      pcStack_2d8 = (char *)0xaf70a9;
      fVar9 = (float10)FUN_00ac8570();
      *(float *)(param_1 + 0x1fd0) = (float)fVar9;
      local_2d4 = (char *)0x2c;
      pcStack_2d8 = (char *)0xaf70b8;
      fVar9 = (float10)FUN_00ac8570();
      *(float *)(param_1 + 0x1fd4) = (float)fVar9;
      local_2d4 = (char *)0x27;
      pcStack_2d8 = (char *)0xaf70c7;
      FUN_00ac8570();
      local_2d4 = (char *)0xaf70cc;
      uVar4 = FUN_00fdbc60();
      local_2d4 = (char *)0x27;
      *(undefined4 *)(param_1 + 0x1cc8) = uVar4;
      *(undefined4 *)(param_1 + 0x1cc4) = uVar4;
      pcStack_2d8 = (char *)0xaf70e1;
      FUN_00ac8570();
      local_2d4 = (char *)0xaf70e6;
      uVar4 = FUN_00fdbc60();
      local_2d4 = (char *)0x26;
      *(undefined4 *)(param_1 + 0x1cd0) = uVar4;
      *(undefined4 *)(param_1 + 0x1ccc) = uVar4;
      pcStack_2d8 = (char *)0xaf70fb;
      FUN_00ac8570();
      local_2d4 = (char *)0xaf7100;
      uVar4 = FUN_00fdbc60();
      local_2d4 = (char *)0x2e;
      *(undefined4 *)(param_1 + 0x1cd8) = uVar4;
      *(undefined4 *)(param_1 + 0x1cd4) = uVar4;
      pcStack_2d8 = (char *)0xaf7115;
      FUN_00ac8570();
      local_2d4 = (char *)0xaf711a;
      uVar4 = FUN_00fdbc60();
      local_2d4 = (char *)0x30;
      *(undefined4 *)(param_1 + 0x1fd8) = uVar4;
      pcStack_2d8 = (char *)0xaf7129;
      FUN_00ac8570();
      local_2d4 = (char *)0xaf712e;
      uVar4 = FUN_00fdbc60();
      local_2d4 = (char *)0x2f;
      *(undefined4 *)(param_1 + 0x1fdc) = uVar4;
      pcStack_2d8 = (char *)0xaf713d;
      FUN_00ac8570();
      local_2d4 = (char *)0xaf7142;
      uVar4 = FUN_00fdbc60();
      local_2d4 = (char *)0x31;
      *(undefined4 *)(param_1 + 0x1fe0) = uVar4;
      pcStack_2d8 = (char *)0xaf7151;
      FUN_00ac8570();
      local_2d4 = (char *)0xaf7156;
      uVar4 = FUN_00fdbc60();
      *(undefined4 *)(param_1 + 0x1fe4) = uVar4;
    }
    local_2d4 = *(char **)(param_1 + 0x4f0);
    param_1[0x1d24] = '\0';
    param_1[0x1d25] = '\0';
    param_1[0x1d26] = '\0';
    param_1[0x1d27] = '\0';
    param_1[0x1d28] = '\0';
    param_1[0x1d29] = '\0';
    param_1[0x1d2a] = '\0';
    param_1[0x1d2b] = '\0';
    param_1[0x1d2c] = '\0';
    param_1[0x1d2d] = '\0';
    param_1[0x1d2e] = '\0';
    param_1[0x1d2f] = '\0';
    pcStack_2d8 = (char *)0xaf717f;
    uVar4 = FUN_00c5def0();
    iVar2 = *(int *)(param_1 + 0x4f0);
    *(undefined4 *)(param_1 + 0x970) = uVar4;
    DAT_018a9eec = 1;
    local_2d4 = (char *)0xaf719f;
    FUN_00a7c950();
    if (iVar2 != 0) {
      local_2d4 = (char *)0xaf71aa;
      local_2d4 = (char *)FUN_00a7c7f0();
      pcStack_2d8 = (char *)0xaf71b5;
      FUN_00a7c960();
    }
    local_2d4 = (char *)0x1;
    pcStack_2d8 = (char *)0xaf71c5;
    FUN_00dc1300();
    param_1[0x21d4] = '\x01';
    param_1[0x21d5] = '\0';
    param_1[0x21d6] = '\0';
    param_1[0x21d7] = '\0';
    param_1[0x6c4] = '\x06';
    param_1[0x6c5] = '\0';
    param_1[0x6c6] = '\0';
    param_1[0x6c7] = '\0';
    param_1[0x6d0] = '\0';
    param_1[0x6d1] = '\0';
    param_1[0x6d2] = '\0';
    param_1[0x6d3] = '\0';
    param_1[0x6d4] = '\0';
    param_1[0x6d5] = '\0';
    param_1[0x6d6] = '\0';
    param_1[0x6d7] = '\0';
    local_2d4 = (char *)0x2;
    param_1[0x6d8] = '\0';
    param_1[0x6d9] = '\0';
    param_1[0x6da] = '\0';
    param_1[0x6db] = '\0';
    pcStack_2d8 = (char *)&local_2bc;
    *(uint *)(param_1 + 0x6dc) = local_294[0];
    param_1[0x6e8] = '\0';
    param_1[0x6e9] = '\0';
    param_1[0x6ea] = -0x40;
    param_1[0x6eb] = '?';
    param_1[0x6ec] = '\x01';
    param_1[0x6ed] = '\0';
    param_1[0x6ee] = '\0';
    param_1[0x6ef] = '\0';
    param_1[0x6e4] = '\x06';
    param_1[0x6e5] = '\0';
    param_1[0x6e6] = '\0';
    param_1[0x6e7] = '\0';
    local_2bc = 0;
    param_1[0x6e0] = '\x06';
    param_1[0x6e1] = '\0';
    param_1[0x6e2] = '\0';
    param_1[0x6e3] = '\0';
    local_2b8 = 0;
    local_2b4 = 0;
    local_2dc = (char *)0xc0800000;
    local_2e0 = (char *)0x40400000;
    local_2e4 = (uint *)0x3fb33333;
    local_2e8 = (undefined4 *)0x6;
    local_2ec = (undefined4 *)0xaf724d;
    local_2e8 = (undefined4 *)FUN_00a12210();
    local_2ec = (undefined4 *)0xaf7259;
    FUN_00a889e0();
    local_2bc = 0;
    local_2d4 = (char *)0x2;
    local_2b8 = 0;
    pcStack_2d8 = (char *)&local_2bc;
    local_2b4 = 0x3f19999a;
    local_2dc = (char *)0xc0800000;
    local_2e0 = (char *)0x40400000;
    local_2e4 = (uint *)0x3fb33333;
    local_2e8 = (undefined4 *)0x114;
    local_2ec = (undefined4 *)0xaf72a0;
    local_2e8 = (undefined4 *)FUN_00a12210();
    local_2ec = (undefined4 *)0xaf72ac;
    FUN_00a889e0();
    local_2bc = 0;
    local_2d4 = (char *)0x1;
    local_2b8 = 0;
    pcStack_2d8 = (char *)&local_2bc;
    local_2b4 = 0;
    local_2dc = (char *)0xbfc00000;
    local_2e0 = (char *)0x3fc00000;
    local_2e4 = (uint *)0x3fb33333;
    local_2e8 = (undefined4 *)0x1b;
    local_2ec = (undefined4 *)0xaf72e9;
    local_2e8 = (undefined4 *)FUN_00a12210();
    local_2ec = (undefined4 *)0xaf72f5;
    FUN_00a889e0();
    local_2bc = 0;
    local_2b8 = 0xbfcccccd;
    local_2d4 = (char *)0x1;
    pcStack_2d8 = (char *)&local_2bc;
    local_2b4 = 0;
    local_2dc = (char *)0xbfc00000;
    local_2e0 = (char *)0x3fc00000;
    local_2e4 = (uint *)0x3fb33333;
    local_2e8 = (undefined4 *)0x1c;
    local_2ec = (undefined4 *)0xaf7338;
    local_2e8 = (undefined4 *)FUN_00a12210();
    local_2ec = (undefined4 *)0xaf7344;
    FUN_00a889e0();
    local_2bc = 0;
    local_2d4 = (char *)0x1;
    local_2b8 = 0;
    pcStack_2d8 = (char *)&local_2bc;
    local_2b4 = 0;
    local_2dc = (char *)0xbfc00000;
    local_2e0 = (char *)0x3fc00000;
    local_2e4 = (uint *)0x3fb33333;
    local_2e8 = (undefined4 *)0x20;
    local_2ec = (undefined4 *)0xaf7381;
    local_2e8 = (undefined4 *)FUN_00a12210();
    local_2ec = (undefined4 *)0xaf738d;
    FUN_00a889e0();
    local_2d4 = (char *)0x41000000;
    pcStack_2d8 = (char *)0x1;
    local_2dc = (char *)0x20;
    local_2e0 = (char *)0xaf73a1;
    local_2dc = (char *)FUN_00a12210();
    local_2e0 = (char *)0xaf73ad;
    FUN_00a852e0();
    local_2bc = 0;
    local_2d4 = (char *)0x1;
    local_2b8 = 0;
    pcStack_2d8 = (char *)&local_2bc;
    local_2b4 = 0;
    local_2dc = (char *)0xbfc00000;
    local_2e0 = (char *)0x3fc00000;
    local_2e4 = (uint *)0x3fb33333;
    local_2e8 = (undefined4 *)0x26;
    local_2ec = (undefined4 *)0xaf73ea;
    local_2e8 = (undefined4 *)FUN_00a12210();
    local_2ec = (undefined4 *)0xaf73f6;
    FUN_00a889e0();
    local_2bc = 0;
    local_2d4 = (char *)0x1;
    pcStack_2d8 = (char *)&local_2bc;
    local_2b8 = 0xbfcccccd;
    local_2b4 = 0;
    local_2dc = (char *)0xbfc00000;
    local_2e0 = (char *)0x3fc00000;
    local_2e4 = (uint *)0x3fb33333;
    local_2e8 = (undefined4 *)0x27;
    local_2ec = (undefined4 *)0xaf7439;
    local_2e8 = (undefined4 *)FUN_00a12210();
    local_2ec = (undefined4 *)0xaf7445;
    FUN_00a889e0();
    local_2bc = 0;
    local_2d4 = (char *)0x1;
    local_2b8 = 0;
    pcStack_2d8 = (char *)&local_2bc;
    local_2b4 = 0;
    local_2dc = (char *)0xbfc00000;
    local_2e0 = (char *)0x3fc00000;
    local_2e4 = (uint *)0x3fb33333;
    local_2e8 = (undefined4 *)0x2b;
    local_2ec = (undefined4 *)0xaf7482;
    local_2e8 = (undefined4 *)FUN_00a12210();
    local_2ec = (undefined4 *)0xaf748e;
    FUN_00a889e0();
    local_2d4 = (char *)0x41000000;
    pcStack_2d8 = (char *)0x1;
    local_2dc = (char *)0x2b;
    local_2e0 = (char *)0xaf74a2;
    local_2dc = (char *)FUN_00a12210();
    local_2e0 = (char *)0xaf74ae;
    FUN_00a852e0();
    local_2d4 = (char *)0xaf74b7;
    FUN_00405230();
    puStack_2f0 = *(uint **)(param_1 + 0x4f0);
    local_2b0 = 0;
    local_2d4 = (char *)0x0;
    local_2ac = 0;
    pcStack_2d8 = (char *)0x2;
    local_2a8 = 0x40333333;
    local_2e8 = &local_2b0;
    local_2dc = (char *)0x40400000;
    local_2e0 = (char *)0x43480000;
    local_2e4 = (uint *)0x0;
    local_2ec = (undefined4 *)0x6;
    puStack_2f4 = (undefined1 *)0x1;
    uStack_2f8 = 0xaf7501;
    FUN_00c151f0();
    local_2d4 = local_270;
    local_25c = 0x40800000;
    pcStack_2d8 = (char *)0xaf751a;
    local_2d4 = (char *)FUN_00c57830();
    pcStack_2d8 = (char *)0xaf7525;
    iVar2 = FUN_00c4d470();
    *(int *)(param_1 + 0x1ffc) = iVar2;
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x4c) = 1;
    }
    if (*(int *)(param_1 + 0x1ffc) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x1ffc) + 0x5c) = 1;
    }
    puStack_2f0 = *(uint **)(param_1 + 0x4f0);
    local_2d4 = (char *)0x0;
    local_2b0 = 0;
    pcStack_2d8 = (char *)0x1;
    local_2ac = 0;
    local_2a8 = 0;
    local_2e8 = &local_2b0;
    local_2dc = (char *)0x3fc00000;
    local_2e0 = (char *)0x43480000;
    local_2e4 = (uint *)0x0;
    local_2ec = (undefined4 *)0x20;
    puStack_2f4 = (undefined1 *)0x1;
    uStack_2f8 = 0xaf7584;
    FUN_00c151f0();
    local_2d4 = (char *)0x41100000;
    pcStack_2d8 = (char *)0x1;
    local_2dc = (char *)0xaf7598;
    FUN_00c15270();
    local_2d4 = local_270;
    pcStack_2d8 = (char *)0xaf75a7;
    local_2d4 = (char *)FUN_00c57830();
    pcStack_2d8 = (char *)0xaf75b2;
    iVar2 = FUN_00c4d470();
    *(int *)(param_1 + 0x2004) = iVar2;
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x4c) = 1;
    }
    if (*(int *)(param_1 + 0x2004) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x2004) + 0x5c) = 1;
    }
    puStack_2f0 = *(uint **)(param_1 + 0x4f0);
    local_2d4 = (char *)0x0;
    local_2b0 = 0;
    pcStack_2d8 = (char *)0x1;
    local_2ac = 0;
    local_2a8 = 0;
    local_2e8 = &local_2b0;
    local_2dc = (char *)0x3fc00000;
    local_2e0 = (char *)0x43480000;
    local_2e4 = (uint *)0x0;
    local_2ec = (undefined4 *)0x2b;
    puStack_2f4 = (undefined1 *)0x1;
    uStack_2f8 = 0xaf7611;
    FUN_00c151f0();
    local_2d4 = (char *)0x41100000;
    pcStack_2d8 = (char *)0x1;
    local_2dc = (char *)0xaf7625;
    FUN_00c15270();
    local_2d4 = local_270;
    pcStack_2d8 = (char *)0xaf7634;
    local_2d4 = (char *)FUN_00c57830();
    pcStack_2d8 = (char *)0xaf763f;
    iVar2 = FUN_00c4d470();
    *(int *)(param_1 + 0x2008) = iVar2;
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x4c) = 1;
    }
    if (*(int *)(param_1 + 0x2008) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x2008) + 0x5c) = 1;
    }
    param_1[0x1fb4] = '\0';
    param_1[0x1fb5] = '\0';
    param_1[0x1fb6] = -0x70;
    param_1[0x1fb7] = 'A';
    param_1[0x1fb8] = '\0';
    param_1[0x1fb9] = '\0';
    param_1[0x1fba] = -0x70;
    param_1[0x1fbb] = 'A';
    if (*(int *)(param_1 + 0x4a0) == 1) {
      param_1[0x1fb4] = '\0';
      param_1[0x1fb5] = '\0';
      param_1[0x1fb6] = 'P';
      param_1[0x1fb7] = 'A';
      param_1[0x1fb8] = '\0';
      param_1[0x1fb9] = '\0';
      param_1[0x1fba] = 'P';
      param_1[0x1fbb] = 'A';
    }
    if ((param_1[0x4a8] & 1U) != 0) {
      param_1[0x1fb4] = '\0';
      param_1[0x1fb5] = '\0';
      param_1[0x1fb6] = '0';
      param_1[0x1fb7] = 'A';
      param_1[0x1fb8] = '\0';
      param_1[0x1fb9] = '\0';
      param_1[0x1fba] = '0';
      param_1[0x1fbb] = 'A';
    }
    local_2d4 = (char *)0x0;
    pcStack_2d8 = (char *)0x19;
    local_2dc = (char *)0x78;
    local_2e0 = (char *)0x41a00000;
    local_2e4 = (uint *)0x41a00000;
    local_2e8 = *(undefined4 **)(param_1 + 0x1fb4);
    local_2ec = (undefined4 *)(*(float *)(param_1 + 0x1fb4) + *(float *)(param_1 + 0x1fb4) + 1.0);
    puStack_2f4 = (undefined1 *)0xaf76d9;
    puStack_2f0 = (uint *)param_1;
    uVar4 = FUN_008ec660();
    local_2d4 = (char *)0x1000000;
    *(undefined4 *)(param_1 + 0x764) = uVar4;
    pcStack_2d8 = (char *)0xaf76ee;
    FUN_008e6fe0();
    local_2d4 = (char *)0x1000000;
    pcStack_2d8 = (char *)0xaf76fe;
    FUN_008e7400();
    local_2d4 = (char *)0xaf7709;
    FUN_008e6d00();
    local_2d4 = "h";
    FUN_008e1c70();
    local_2d4 = (char *)0x100;
    pcStack_2d8 = (char *)0xaf7720;
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2();
    local_2d4 = (char *)&DAT_01b7bd48;
    pcStack_2d8 = (char *)0x3c;
    local_2dc = (char *)0xaf772c;
    iVar2 = FUN_00dd3500();
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      local_2d4 = (char *)0xaf773a;
      uVar4 = RigidBodyCollision::RigidBodyCollision();
    }
    pcVar11 = *(char **)(param_1 + 0x4f0);
    local_2d4 = (char *)0x0;
    pcStack_2d8 = "_col.hkx";
    *(undefined4 *)(param_1 + 0x7b0) = uVar4;
    local_2dc = "Pj";
    local_2d4 = (char *)FUN_00de46d0();
    pcStack_2d8 = (char *)0x0;
    local_2dc = "_col.hkx";
    local_2e0 = (char *)0xaf776f;
    pcStack_2d8 = (char *)FUN_00de4550();
    local_2e0 = (char *)0xaf777c;
    local_2dc = pcVar11;
    FUN_008f6410();
    local_2d4 = (char *)0x8;
    pcStack_2d8 = (char *)0xaf778e;
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))();
    pcStack_2d8 = (char *)0x1;
    local_2dc = (char *)0xaf779b;
    FUN_008f2cd0();
    pcStack_2d8 = (char *)0x80000000;
    local_2dc = (char *)0xaf77ab;
    FUN_008f1600();
    pcStack_2d8 = (char *)0x40;
    local_2dc = (char *)0xaf77b8;
    FUN_008f1600();
    pcStack_2d8 = (char *)0x10000;
    local_2dc = (char *)0xaf77c8;
    FUN_008f18c0();
    pcStack_2d8 = (char *)0x1;
    local_2dc = (char *)0x20;
    local_2e0 = "_head";
    param_1[0x1f74] = '\0';
    param_1[0x1f75] = '\0';
    param_1[0x1f76] = '\0';
    param_1[0x1f77] = '\0';
    param_1[0x1f78] = '\0';
    param_1[0x1f79] = '\0';
    param_1[0x1f7a] = '\0';
    param_1[0x1f7b] = '\0';
    param_1[0x1f7c] = '\0';
    param_1[0x1f7d] = '\0';
    param_1[0x1f7e] = '\0';
    param_1[0x1f7f] = '\0';
    local_2e4 = (uint *)0xaf77f0;
    FUN_008f0450();
    pcStack_2d8 = (char *)0x1;
    local_2dc = (char *)0x20;
    local_2e0 = "_ago";
    local_2e4 = (uint *)0xaf7804;
    FUN_008f0450();
    pcStack_2d8 = (char *)0x1;
    local_2dc = (char *)0x20;
    local_2e0 = "foot";
    local_2e4 = (uint *)0xaf7818;
    FUN_008f0450();
    pcStack_2d8 = (char *)0x1;
    local_2dc = (char *)0x20;
    local_2e0 = "reg";
    local_2e4 = (uint *)0xaf782c;
    FUN_008f0450();
    pcStack_2d8 = (char *)0x1;
    local_2dc = (char *)0x20;
    local_2e0 = "body";
    local_2e4 = (uint *)0xaf7840;
    FUN_008f0450();
    local_2dc = *(char **)(param_1 + 0x7b0);
    pcStack_2d8 = (char *)0x2;
    local_2e0 = (char *)0xaf7850;
    Behavior::addDefenseCollisionFromRigidBody_2();
    pcStack_2d8 = "_body";
    local_2dc = (char *)0x0;
    local_2e0 = (char *)0xaf785d;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_head";
    local_2dc = (char *)0x1;
    local_2e0 = (char *)0xaf786b;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_ago";
    local_2dc = (char *)0x1;
    local_2e0 = (char *)0xaf7879;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_lfoot";
    local_2dc = (char *)0x3;
    local_2e0 = (char *)0xaf7887;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_lreg";
    local_2dc = (char *)0x3;
    local_2e0 = (char *)0xaf7895;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_rfoot";
    local_2dc = (char *)0x2;
    local_2e0 = (char *)0xaf78a3;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_rreg";
    local_2dc = (char *)0x2;
    local_2e0 = (char *)0xaf78b1;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_tail";
    local_2dc = (char *)0x4;
    local_2e0 = (char *)0xaf78bf;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_rhand";
    local_2dc = (char *)0x5;
    local_2e0 = (char *)0xaf78cd;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_lhand";
    local_2dc = (char *)0x6;
    local_2e0 = (char *)0xaf78db;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_core";
    local_2dc = (char *)0x8;
    local_2e0 = (char *)0xaf78e9;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_crfoot";
    local_2dc = (char *)0x9;
    local_2e0 = (char *)0xaf78f7;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_clfoot";
    local_2dc = (char *)0xa;
    local_2e0 = (char *)0xaf7905;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_c1tail";
    local_2dc = (char *)0xb;
    local_2e0 = (char *)0xaf7913;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_c2tail";
    local_2dc = (char *)0xc;
    local_2e0 = (char *)0xaf7921;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_crkata";
    local_2dc = (char *)0xd;
    local_2e0 = (char *)0xaf792f;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_clkata";
    local_2dc = (char *)0xe;
    local_2e0 = (char *)0xaf793d;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    local_2b4 = *(undefined4 *)(param_1 + 0x50);
    local_2b0 = *(undefined4 *)(param_1 + 0x54);
    local_2ac = *(uint *)(param_1 + 0x58);
    local_2a8 = *(undefined4 *)(param_1 + 0x5c);
    uStack_2a4 = 0;
    uStack_2a0 = 0;
    uStack_29c = 0;
    local_294[0] = 0;
    local_294[1] = 0x40800000;
    local_294[2] = 0;
    uStack_284 = 0;
    uStack_280 = 0xc0000000;
    uStack_27c = 0;
    pcStack_2d8 = (char *)0xaf7994;
    FUN_0118f7b0();
    uStack_1e4 = 0;
    pcStack_2d8 = (char *)0xaf79a4;
    iVar2 = FUN_009f8b40();
    uStack_274 = iVar2 << 0x10 | 3;
    pcStack_2d8 = (char *)0xaf79b3;
    piVar5 = (int *)FUN_00910da0();
    pcStack_2d8 = (char *)0x1;
    local_2dc = (char *)0x3f800000;
    local_2e0 = (char *)&uStack_284;
    local_2e4 = local_294;
    local_2e8 = &uStack_2a4;
    local_2ec = &local_2b4;
    puStack_2f0 = &uStack_274;
    puStack_2f4 = &stack0xfffffd38;
    uStack_2f8 = 0xaf79e2;
    uStack_2f8 = (**(code **)(*piVar5 + 0x10))();
    puStack_2fc = (undefined4 *)0xaf79ee;
    FUN_00910ab0();
    uStack_2f8 = 0xaf79f9;
    FUN_00916260();
    puStack_300 = *(undefined4 **)(param_1 + 0x1f60);
    uStack_2f8 = 1;
    puStack_2fc = (undefined4 *)0x20;
    ppcStack_304 = (char **)0xaf7a09;
    FUN_008f9610();
    ppuStack_30c = *(undefined4 ***)(param_1 + 0x1f60);
    ppcStack_304 = (char **)0x1;
    puStack_308 = (uint *)0x40;
    uStack_310 = 0xaf7a19;
    FUN_008f9610();
    local_2d4 = *(char **)(param_1 + 0x50);
    local_2b4 = 0;
    local_2b0 = 0;
    local_2ac = 0;
    uStack_2c4 = 0x40b00000;
    local_2c0 = 0x40c00000;
    local_2bc = 0x40400000;
    uStack_2f8 = 0xaf7a6d;
    FUN_0118f7b0();
    uStack_204 = 0;
    uStack_2f8 = 0xaf7a7d;
    iVar2 = FUN_009f8b40();
    local_294[0] = iVar2 << 0x10 | 3;
    uStack_2f8 = 0xaf7a8c;
    piVar5 = (int *)FUN_00910da0();
    uStack_2f8 = 1;
    puStack_2fc = &uStack_2c4;
    puStack_300 = &local_2b4;
    ppcStack_304 = &local_2d4;
    puStack_308 = local_294;
    ppuStack_30c = &local_2e8;
    uStack_310 = 0xaf7ab0;
    uStack_310 = (**(code **)(*piVar5 + 4))();
    uStack_314 = 0xaf7abc;
    FUN_00910ab0();
    uStack_310 = 0xaf7ac7;
    FUN_00916260();
    uStack_310 = *(undefined4 *)(param_1 + 0x4f0);
    uStack_314 = *(undefined4 *)(param_1 + 0x1f64);
    ppcStack_318 = (char **)0xaf7ada;
    FUN_008f7f00();
    puStack_320 = *(undefined4 **)(param_1 + 0x1f64);
    ppcStack_318 = (char **)0x1;
    puStack_31c = (undefined1 *)0x20;
    ppuStack_324 = (undefined4 **)0xaf7aea;
    FUN_008f9610();
    ppuStack_32c = *(undefined4 ***)(param_1 + 0x1f60);
    ppuStack_324 = (undefined4 **)0x1;
    puStack_328 = (uint *)0x40;
    uStack_330 = 0xaf7afa;
    FUN_008f9610();
    local_2ec = *(undefined4 **)(param_1 + 0x50);
    local_2e8 = *(undefined4 **)(param_1 + 0x54);
    local_2e4 = *(uint **)(param_1 + 0x58);
    local_2e0 = *(char **)(param_1 + 0x5c);
    local_2bc = 0;
    local_2b8 = 0;
    local_2b4 = 0;
    uStack_2c4 = 0;
    local_2dc = (char *)0x0;
    pcStack_2d8 = (char *)0xc0000000;
    local_2d4 = (char *)0x0;
    uStack_310 = 0xaf7b54;
    FUN_0118f7b0();
    uStack_21c = 0;
    uStack_310 = 0xaf7b64;
    iVar2 = FUN_009f8b40();
    local_2ac = iVar2 << 0x10 | 3;
    uStack_310 = 0xaf7b73;
    piVar5 = (int *)FUN_00910da0();
    uStack_310 = 1;
    uStack_314 = 0x3f800000;
    ppcStack_318 = &local_2dc;
    puStack_31c = &stack0xfffffd34;
    puStack_320 = &local_2bc;
    ppuStack_324 = &local_2ec;
    puStack_328 = &local_2ac;
    ppuStack_32c = &puStack_300;
    uStack_330 = 0xaf7ba2;
    uStack_330 = (**(code **)(*piVar5 + 0x10))();
    uStack_334 = 0xaf7bae;
    FUN_00910ab0();
    uStack_330 = 0xaf7bb9;
    FUN_00916260();
    ppuStack_338 = *(undefined4 ***)(param_1 + 0x1f68);
    uStack_330 = 1;
    uStack_334 = 0x20;
    ppuStack_33c = (undefined4 **)0xaf7bc9;
    FUN_008f9610();
    ppuStack_33c = (undefined4 **)0x1;
    ppcStack_340 = (char **)0x40;
    FUN_008f9610(*(undefined4 *)(param_1 + 0x1f60));
    FUN_008f7f00(*(undefined4 *)(param_1 + 0x1f68),*(undefined4 *)(param_1 + 0x4f0));
    ppuStack_30c = *(undefined4 ***)(param_1 + 0x50);
    puStack_308 = *(uint **)(param_1 + 0x54);
    ppcStack_304 = *(char ***)(param_1 + 0x58);
    puStack_300 = *(undefined4 **)(param_1 + 0x5c);
    local_2dc = (char *)0x0;
    pcStack_2d8 = (char *)0x0;
    local_2d4 = (char *)0x0;
    local_2ec = (undefined4 *)0x0;
    local_2e8 = (undefined4 *)0x40800000;
    local_2e4 = (uint *)0x0;
    puStack_2fc = (undefined4 *)0x0;
    uStack_2f8 = 0xc0000000;
    puStack_2f4 = (undefined1 *)0x0;
    uStack_330 = 0xaf7c46;
    FUN_0118f7b0();
    uStack_23c = 0;
    uStack_330 = 0xaf7c56;
    FUN_009f8b40();
    uStack_330 = 0xaf7c65;
    piVar5 = (int *)FUN_00910da0();
    uStack_330 = 1;
    uStack_334 = 0x3fb33333;
    ppuStack_338 = &puStack_2fc;
    ppuStack_33c = &local_2ec;
    ppcStack_340 = &local_2dc;
    uVar4 = (**(code **)(*piVar5 + 0x10))(&puStack_320,&stack0xfffffd34,&ppuStack_30c);
    FUN_00910ab0(uVar4);
    FUN_00916260();
    FUN_008f9610(*(undefined4 *)(param_1 + 0x1f6c),0x20,1);
    FUN_008f9610(*(undefined4 *)(param_1 + 0x1f60),0x40,1);
    FUN_008f7f00(*(undefined4 *)(param_1 + 0x1f6c),*(undefined4 *)(param_1 + 0x4f0));
    ppuStack_32c = *(undefined4 ***)(param_1 + 0x50);
    puStack_328 = *(uint **)(param_1 + 0x54);
    ppuStack_324 = *(undefined4 ***)(param_1 + 0x58);
    puStack_320 = *(undefined4 **)(param_1 + 0x5c);
    puStack_2fc = (undefined4 *)0x0;
    uStack_2f8 = 0;
    puStack_2f4 = (undefined1 *)0x0;
    ppuStack_30c = (undefined4 **)0x0;
    puStack_308 = (uint *)0x40800000;
    ppcStack_304 = (char **)0x0;
    puStack_31c = (undefined1 *)0x0;
    ppcStack_318 = (char **)0xc0000000;
    uStack_314 = 0;
    FUN_0118f7b0();
    local_25c = 0;
    iVar2 = FUN_009f8b40();
    local_2ec = (undefined4 *)(iVar2 << 0x10 | 3);
    piVar5 = (int *)FUN_00910da0();
    uVar4 = (**(code **)(*piVar5 + 0x10))
                      (&ppcStack_340,&local_2ec,&ppuStack_32c,&puStack_2fc,&ppuStack_30c,
                       &puStack_31c,0x3fe66666,1);
    FUN_00910ab0(uVar4);
    FUN_00916260();
    FUN_008f9610(*(undefined4 *)(param_1 + 0x1f70),0x20,1);
    FUN_008f9610(*(undefined4 *)(param_1 + 0x1f60),0x40,1);
    FUN_008f7f00(*(undefined4 *)(param_1 + 0x1f70),*(undefined4 *)(param_1 + 0x4f0));
    param_1[0x21b4] = '\0';
    param_1[0x21b5] = '\0';
    param_1[0x21b6] = '\0';
    param_1[0x21b7] = '\0';
    *(undefined4 *)(param_1 + 0x21c0) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x21c4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x21c8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x21cc) = *(undefined4 *)(param_1 + 0x5c);
    param_1[0x21d0] = '\0';
    param_1[0x21d1] = '\0';
    param_1[0x21d2] = -0x10;
    param_1[0x21d3] = 'A';
    iVar2 = FUN_00a92f90();
    *(undefined4 *)(iVar2 + 0x334) = 1;
    FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0xdd4] = '\0';
    param_1[0xdd5] = '\0';
    param_1[0xdd6] = -0x1f;
    param_1[0xdd7] = 'D';
    param_1[0xdd8] = '\0';
    param_1[0xdd9] = '\0';
    param_1[0xdda] = 'p';
    param_1[0xddb] = 'B';
    param_1[0x1f80] = '\0';
    param_1[0x1f81] = '\0';
    param_1[0x1f82] = -0x80;
    param_1[0x1f83] = -0x41;
    iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar2 != 0) {
      FUN_0040b190();
      uStack_238 = 0;
      iVar2 = FUN_00a82090("Wp0200",0x30200,&uStack_23c);
      if (iVar2 != 0) {
        uVar4 = FUN_00a7c7f0();
        FUN_00a7c960(uVar4);
        iVar7 = FUN_00a7c8a0();
        if ((iVar7 != 0) && (*(int *)(param_1 + 0x4f0) != 0)) {
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
        }
        FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar2,0x111,0xffffffff);
      }
      uStack_238 = 1;
      iVar2 = FUN_00a82090("Wp0200",0x30200,&uStack_23c);
      if (iVar2 != 0) {
        uVar4 = FUN_00a7c7f0();
        FUN_00a7c960(uVar4);
        iVar7 = FUN_00a7c8a0();
        if ((iVar7 != 0) && (*(int *)(param_1 + 0x4f0) != 0)) {
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
        }
        FUN_00a8c5f0(1,*(undefined4 *)(param_1 + 0x4f0),iVar2,0x110,0xffffffff);
      }
      uStack_238 = 1;
      iVar2 = FUN_00a82090("Wp0201",0x30201,&uStack_23c);
      if (iVar2 != 0) {
        FUN_00a8c5f0(2,*(undefined4 *)(param_1 + 0x4f0),iVar2,0x112,0xffffffff);
        iVar2 = FUN_00a7c800();
        if (2 < *(short *)(iVar2 + 0x324)) {
          puVar1 = (uint *)(*(int *)(iVar2 + 800) + 0x118);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        uVar4 = FUN_00a7c7f0();
        FUN_00a7c960(uVar4);
        iVar2 = FUN_00a7c8a0();
        if ((iVar2 != 0) && (*(int *)(param_1 + 0x4f0) != 0)) {
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
        }
      }
      uStack_238 = 0;
      iVar2 = FUN_00a82090("Wp0201",0x30201,&uStack_23c);
      if (iVar2 != 0) {
        FUN_00a8c5f0(3,*(undefined4 *)(param_1 + 0x4f0),iVar2,0x113,0xffffffff);
        iVar2 = FUN_00a7c800();
        if (1 < *(short *)(iVar2 + 0x324)) {
          puVar1 = (uint *)(*(int *)(iVar2 + 800) + 0xa8);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        uVar4 = FUN_00a7c7f0();
        FUN_00a7c960(uVar4);
        iVar2 = FUN_00a7c8a0();
        if ((iVar2 != 0) && (*(int *)(param_1 + 0x4f0) != 0)) {
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
        }
      }
      param_1[0x1564] = '\0';
      param_1[0x1565] = '\0';
      param_1[0x1566] = -0x80;
      param_1[0x1567] = -0x41;
      param_1[0x2024] = '\0';
      param_1[0x2025] = '\0';
      param_1[0x2026] = -0x80;
      param_1[0x2027] = -0x41;
      param_1[0x1568] = '\0';
      param_1[0x1569] = '\0';
      param_1[0x156a] = '\0';
      param_1[0x156b] = '\0';
      param_1[0x2054] = '\0';
      param_1[0x2055] = '\0';
      param_1[0x2056] = -0x80;
      param_1[0x2057] = -0x41;
      param_1[0xde6] = '\0';
      param_1[0xde7] = '\0';
      param_1[0x2050] = '\0';
      param_1[0x2051] = '\0';
      param_1[0x2052] = -0x80;
      param_1[0x2053] = -0x41;
      param_1[0x1540] = '\0';
      param_1[0x1541] = '\0';
      param_1[0x1542] = '\0';
      param_1[0x1543] = '\0';
      param_1[0x1544] = '\0';
      param_1[0x1545] = '\0';
      param_1[0x1546] = '\0';
      param_1[0x1547] = '\0';
      param_1[0x1548] = '\0';
      param_1[0x1549] = '\0';
      param_1[0x154a] = '\0';
      param_1[0x154b] = '\0';
      param_1[0x1550] = '\0';
      param_1[0x1551] = '\0';
      param_1[0x1552] = '\0';
      param_1[0x1553] = '\0';
      param_1[0x1cfc] = '\0';
      param_1[0x1cfd] = '\0';
      param_1[0x1cfe] = '\0';
      param_1[0x1cff] = '\0';
      param_1[0x1d00] = '\0';
      param_1[0x1d01] = '\0';
      param_1[0x1d02] = '\0';
      param_1[0x1d03] = '\0';
      param_1[0x1d04] = '\0';
      param_1[0x1d05] = '\0';
      param_1[0x1d06] = '\0';
      param_1[0x1d07] = '\0';
      param_1[0x1d08] = '\0';
      param_1[0x1d09] = '\0';
      param_1[0x1d0a] = '\0';
      param_1[0x1d0b] = '\0';
      param_1[0x1d30] = '\0';
      param_1[0x1d31] = '\0';
      param_1[0x1d32] = '\0';
      param_1[0x1d33] = '\0';
      param_1[0x1d34] = '\0';
      param_1[0x1d35] = '\0';
      param_1[0x1d36] = '\0';
      param_1[0x1d37] = '\0';
      param_1[0x1d38] = '\0';
      param_1[0x1d39] = '\0';
      param_1[0x1d3a] = '\0';
      param_1[0x1d3b] = '\0';
      param_1[0x1d3c] = '\0';
      param_1[0x1d3d] = '\0';
      param_1[0x1d3e] = '\0';
      param_1[0x1d3f] = '\0';
      param_1[0x2014] = '\0';
      param_1[0x2015] = '\0';
      param_1[0x2016] = '\0';
      param_1[0x2017] = '\0';
      param_1[0x2018] = '\0';
      param_1[0x2019] = '\0';
      param_1[0x201a] = '\0';
      param_1[0x201b] = '\0';
      param_1[0x201c] = '\0';
      param_1[0x201d] = '\0';
      param_1[0x201e] = '\0';
      param_1[0x201f] = '\0';
      param_1[0x2020] = '\0';
      param_1[0x2021] = '\0';
      param_1[0x2022] = '\0';
      param_1[0x2023] = '\0';
      param_1[0x2034] = '\x01';
      param_1[0x2035] = '\0';
      param_1[0x2036] = '\0';
      param_1[0x2037] = '\0';
      param_1[0x204c] = -1;
      param_1[0x204d] = -1;
      param_1[0x204e] = -1;
      param_1[0x204f] = -1;
      FUN_00a7c950();
      param_1[0x30c8] = '\0';
      param_1[0x30c9] = '\0';
      param_1[0x30ca] = '\0';
      param_1[0x30cb] = '\0';
      param_1[0xdc4] = '\0';
      param_1[0xdc5] = '\0';
      param_1[0xdc8] = '\0';
      param_1[0xdc9] = '\0';
      param_1[0xdca] = '\0';
      param_1[0xdcb] = '\0';
      param_1[0x30c4] = '\x01';
      param_1[0x30c5] = '\0';
      param_1[0x30c6] = '\0';
      param_1[0x30c7] = '\0';
      param_1[0x2044] = -1;
      param_1[0x2045] = -1;
      param_1[0x2046] = -1;
      param_1[0x2047] = -1;
      param_1[0x2048] = -1;
      param_1[0x2049] = -1;
      param_1[0x204a] = -1;
      param_1[0x204b] = -1;
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar8 = *(int *)(param_1 + 800) + iVar7;
          iVar3 = *(int *)(*(int *)(iVar8 + 0x60) + 0x40);
          if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"qterh"), iVar3 != 0)) {
            puVar1 = (uint *)(iVar8 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar7 = iVar7 + 0x70;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"kata_R"), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 | 1;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_01641490), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_0164148c), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_01641488), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"btdes"), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar7 = 0;
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"ftdes"), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_01641474), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"qtelh"), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"in_R_reg"), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"in_L_reg"), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"in_head_top"), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"in_head_down"), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_al"), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_ar"), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_rl"), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar7 = 0;
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_rr"), iVar8 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      param_1[0x1d10] = '\0';
      param_1[0x1d11] = '\0';
      param_1[0x1d12] = '\0';
      param_1[0x1d13] = '\0';
      param_1[0x1d0c] = '\0';
      param_1[0x1d0d] = '\0';
      param_1[0x1d0e] = '\0';
      param_1[0x1d0f] = '\0';
      param_1[0x1f94] = '\0';
      param_1[0x1f95] = '\0';
      param_1[0x1f96] = '\0';
      param_1[0x1f97] = '\0';
      param_1[0x1fc0] = '\0';
      param_1[0x1fc1] = '\0';
      param_1[0x1fc2] = '\0';
      param_1[0x1fc3] = '\0';
      param_1[0x1d44] = '\0';
      param_1[0x1d45] = '\0';
      param_1[0x1d46] = '\0';
      param_1[0x1d47] = '\0';
      param_1[0x1fe8] = '\0';
      param_1[0x1fe9] = '\0';
      param_1[0x1fea] = '\x16';
      param_1[0x1feb] = 'D';
      param_1[0xdcc] = '\0';
      param_1[0xdcd] = '\0';
      param_1[0xdce] = '\0';
      param_1[0xdcf] = '\0';
      FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),4,0);
      *(uint *)(param_1 + 0xdf0) = *(uint *)(param_1 + 0xdf0) | 2;
      FUN_00a82840(0x3dd67750,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82870(0x3dd67750,0xbdd67750,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),5,0);
      *(uint *)(param_1 + 0xec0) = *(uint *)(param_1 + 0xec0) | 2;
      FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),6,0);
      *(uint *)(param_1 + 0xf90) = *(uint *)(param_1 + 0xf90) | 2;
      FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),0x17,0);
      *(uint *)(param_1 + 0x1060) = *(uint *)(param_1 + 0x1060) | 2;
      param_1[0x1110] = '\0';
      param_1[0x1111] = '\0';
      param_1[0x1112] = -0x80;
      param_1[0x1113] = -0x41;
      param_1[0x1114] = '\0';
      param_1[0x1115] = '\0';
      param_1[0x1116] = '\0';
      param_1[0x1117] = '\0';
      param_1[0x1118] = '\0';
      param_1[0x1119] = '\0';
      param_1[0x111a] = '\0';
      param_1[0x111b] = '\0';
      *(undefined4 *)(param_1 + 0x111c) = uStack_330;
      param_1[0x1120] = '\0';
      param_1[0x1121] = '\0';
      param_1[0x1122] = '\0';
      param_1[0x1123] = '\0';
      param_1[0x1124] = '\0';
      param_1[0x1125] = '\0';
      param_1[0x1126] = '\0';
      param_1[0x1127] = '\0';
      param_1[0x1128] = '\0';
      param_1[0x1129] = '\0';
      param_1[0x112a] = -0x80;
      param_1[0x112b] = '?';
      *(undefined4 *)(param_1 + 0x112c) = uStack_330;
      *(uint *)(param_1 + 0x1060) = *(uint *)(param_1 + 0x1060) | 0x10;
      FUN_00a82840(0x3f060a92,0xbdb2b8c2,0x3dcccccd,0x3ae4c388,0x3d567750);
      FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x3ae4c388,0x3d567750);
      FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),1,0);
      *(uint *)(param_1 + 0x12d0) = *(uint *)(param_1 + 0x12d0) | 0x20;
      param_1[0x1380] = '\0';
      param_1[0x1381] = '\0';
      param_1[0x1382] = '\0';
      param_1[0x1383] = '\0';
      param_1[0x1384] = '\0';
      param_1[0x1385] = '\0';
      param_1[0x1386] = '\0';
      param_1[4999] = '\0';
      param_1[5000] = '\0';
      param_1[0x1389] = '\0';
      param_1[0x138a] = -0x80;
      param_1[0x138b] = '?';
      *(undefined4 *)(param_1 + 0x138c) = uStack_330;
      FUN_00a82870(0x3db2b8c2,0xbdb2b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),2,0);
      *(uint *)(param_1 + 0x13a0) = *(uint *)(param_1 + 0x13a0) | 0x20;
      param_1[0x1450] = '\0';
      param_1[0x1451] = '\0';
      param_1[0x1452] = '\0';
      param_1[0x1453] = '\0';
      param_1[0x1454] = '\0';
      param_1[0x1455] = '\0';
      param_1[0x1456] = '\0';
      param_1[0x1457] = '\0';
      param_1[0x1458] = '\0';
      param_1[0x1459] = '\0';
      param_1[0x145a] = -0x80;
      param_1[0x145b] = '?';
      *(undefined4 *)(param_1 + 0x145c) = uStack_330;
      FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),3,0);
      *(uint *)(param_1 + 0x1470) = *(uint *)(param_1 + 0x1470) | 0x20;
      param_1[0x1520] = '\0';
      param_1[0x1521] = '\0';
      param_1[0x1522] = '\0';
      param_1[0x1523] = '\0';
      param_1[0x1524] = '\0';
      param_1[0x1525] = '\0';
      param_1[0x1526] = '\0';
      param_1[0x1527] = '\0';
      param_1[0x1528] = '\0';
      param_1[0x1529] = '\0';
      param_1[0x152a] = -0x80;
      param_1[0x152b] = '?';
      *(undefined4 *)(param_1 + 0x152c) = uStack_330;
      FUN_00a82870(0x3eb2b8c2,0xbeb2b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      param_1[0xddc] = '\0';
      param_1[0xddd] = '\0';
      param_1[0xdde] = '\0';
      param_1[0xddf] = '\0';
      param_1[0xde0] = '\0';
      param_1[0xde1] = '\0';
      param_1[0xde2] = '\0';
      param_1[0xde3] = '\0';
      param_1[0xde4] = '\0';
      param_1[0xde5] = '\0';
      param_1[0x1fc4] = '\0';
      param_1[0x1fc5] = '\0';
      param_1[0x1fc6] = '\0';
      param_1[0x1fc7] = '\0';
      param_1[0x21dc] = '\x01';
      param_1[0x21dd] = '\0';
      param_1[0x21de] = '\0';
      param_1[0x21df] = '\0';
      param_1[0x21e0] = '\0';
      param_1[0x21e1] = '\0';
      param_1[0x21e2] = 'a';
      param_1[0x21e3] = 'D';
      FUN_00ac80a0(0x3f800000,0x3f800000);
      switchD_0080dbae::default();
      iVar2 = FUN_00a12210(0x2b);
      *(undefined4 *)(param_1 + 0x1ca0) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(iVar2 + 0x44);
      *(undefined4 *)(param_1 + 0x1ca8) = *(undefined4 *)(iVar2 + 0x48);
      *(undefined4 *)(param_1 + 0x1cac) = *(undefined4 *)(iVar2 + 0x4c);
      iVar2 = FUN_00a12210(0x20);
      *(undefined4 *)(param_1 + 0x1cb0) = *(undefined4 *)(iVar2 + 0x40);
      *(undefined4 *)(param_1 + 0x1cb4) = *(undefined4 *)(iVar2 + 0x44);
      *(undefined4 *)(param_1 + 0x1cb8) = *(undefined4 *)(iVar2 + 0x48);
      *(undefined4 *)(param_1 + 0x1cbc) = *(undefined4 *)(iVar2 + 0x4c);
      iVar2 = FUN_00ac45b0();
      *(int *)(param_1 + 0xa88) = iVar2;
      param_1[0xa84] = '\0';
      param_1[0xa85] = '\0';
      param_1[0xa86] = '\0';
      param_1[0xa87] = '\0';
      if (iVar2 != 0) {
        piVar5 = (int *)FUN_00a7c8a0();
        if (piVar5 == (int *)0x0) {
          uVar6 = 0;
        }
        else {
          puVar10 = &DAT_01be9c24;
          (**(code **)(*piVar5 + 4))(&DAT_01be9c24);
          iVar2 = FUN_00dd6d80(puVar10);
          uVar6 = -(uint)(iVar2 != 0) & (uint)piVar5;
        }
        *(uint *)(param_1 + 0xa84) = uVar6;
      }
      if ((*(int *)(param_1 + 0xa84) != 0) && (iVar2 = FUN_00a979d0(), iVar2 == 0)) {
        FUN_00a8d330(param_1 + 0x40,*(int *)(param_1 + 0xa84) + 0x40);
      }
      pcVar11 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(pcVar11);
      if (*(int *)(param_1 + 0x4a0) == 0) {
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
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"L_reg"), iVar8 != 0)) {
            *(undefined4 *)(iVar3 + 0x1c + iVar7) = 0x3e4ccccd;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar7 = 0;
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_0164148c), iVar8 != 0)) {
            *(undefined4 *)(iVar3 + 0x1c + iVar7) = 0x3e4ccccd;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar7 = 0;
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"R_reg"), iVar8 != 0)) {
            *(undefined4 *)(iVar3 + 0x1c + iVar7) = 0x3e4ccccd;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar7 = 0;
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          iVar3 = *(int *)(param_1 + 800);
          iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
          if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_01641488), iVar8 != 0)) {
            *(undefined4 *)(iVar3 + 0x1c + iVar7) = 0x3e4ccccd;
          }
          iVar2 = iVar2 + 1;
          iVar7 = iVar7 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      iVar2 = 0;
      param_1[0x2040] = '\0';
      param_1[0x2041] = '\0';
      param_1[0x2042] = '\0';
      param_1[0x2043] = '\0';
      FUN_00a0b990(0x400);
      param_1[0x2f90] = '\0';
      param_1[0x2f91] = '\0';
      param_1[0x2f92] = '\0';
      param_1[0x2f93] = '\0';
      param_1[0x2f94] = '\0';
      param_1[0x2f95] = '\0';
      param_1[0x2f96] = '\0';
      param_1[0x2f97] = '\0';
      param_1[0x30c0] = '\0';
      param_1[0x30c1] = '\0';
      param_1[0x30c2] = '\0';
      param_1[0x30c3] = '\0';
      if (*(int *)(param_1 + 0x4a0) == 4) {
        FUN_00a8c420(0,"_sword");
        FUN_00a8c420(0,"_crkata");
        FUN_00a8c420(0,"_rhand");
        FUN_00a938c0(5);
        FUN_00a938c0(0xd);
        param_1[0x1cfc] = '\x01';
        param_1[0x1cfd] = '\0';
        param_1[0x1cfe] = '\0';
        param_1[0x1cff] = '\0';
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar7 = 0;
          do {
            iVar8 = *(int *)(param_1 + 800) + iVar7;
            iVar3 = *(int *)(*(int *)(iVar8 + 0x60) + 0x40);
            if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"qterh"), iVar3 != 0)) {
              puVar1 = (uint *)(iVar8 + 0x38);
              *puVar1 = *puVar1 | 1;
            }
            iVar7 = iVar7 + 0x70;
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(short *)(param_1 + 0x324));
        }
        iVar2 = 0;
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar7 = 0;
          do {
            iVar3 = *(int *)(param_1 + 800);
            iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
            if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"kata_R"), iVar8 != 0)) {
              puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar2 = iVar2 + 1;
            iVar7 = iVar7 + 0x70;
          } while (iVar2 < *(short *)(param_1 + 0x324));
        }
        iVar7 = 0;
        iVar2 = 0;
        if (0 < *(short *)(param_1 + 0x324)) {
          do {
            iVar3 = *(int *)(param_1 + 800);
            iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
            if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"right_arm"), iVar8 != 0)) {
              puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar2 = iVar2 + 1;
            iVar7 = iVar7 + 0x70;
          } while (iVar2 < *(short *)(param_1 + 0x324));
        }
        iVar7 = 0;
        iVar2 = 0;
        if (0 < *(short *)(param_1 + 0x324)) {
          do {
            iVar3 = *(int *)(param_1 + 800);
            iVar8 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
            if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"sword_R"), iVar8 != 0)) {
              puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar2 = iVar2 + 1;
            iVar7 = iVar7 + 0x70;
          } while (iVar2 < *(short *)(param_1 + 0x324));
        }
        iVar2 = FUN_00a81330();
        if (iVar2 != 0) {
          FUN_00a81330();
          FUN_00a7c8a0();
          E3_EnemyBoardDebrisSokushi::vf4C();
        }
        FUN_00a7c950();
        param_1[0x870] = '\0';
        param_1[0x871] = '\0';
        param_1[0x872] = '\0';
        param_1[0x873] = '\0';
        param_1[0x4e4] = '\x01';
        param_1[0x4e5] = '\0';
        param_1[0x4e6] = '\0';
        param_1[0x4e7] = '\0';
        FUN_00a8caf0(0x36,0,0,0);
        FUN_00aa4080(0x10b,0,0,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
      }
      return 1;
    }
  }
  return 0;
}

// 00AF91B0  FUN_00af91b0  size=1087  [between]
void __fastcall FUN_00af91b0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x2f90) != 0) {
    FUN_00a8caf0(2,0,0,0);
    return;
  }
  if (0 < *(int *)(param_1 + 0x61c)) {
    iVar4 = 8;
    iVar3 = FUN_00ac4780();
    if (iVar3 == 1) {
      iVar4 = 5;
    }
    iVar3 = FUN_00ac4780();
    if (1 < iVar3) {
      iVar4 = 3;
    }
    iVar3 = FUN_00ac4780();
    if (2 < iVar3) {
      iVar4 = 2;
    }
    if ((iVar4 < *(int *)(param_1 + 0x1d24)) && (*(int *)(param_1 + 0x1d40) != 0)) {
      *(undefined4 *)(param_1 + 0x1d24) = 0;
      iVar4 = FUN_00aed900(0xc2200000);
      if (iVar4 == 0) {
        uVar5 = 4;
      }
      else {
        uVar5 = 2;
      }
      FUN_00a8caf0(uVar5,0,0,0);
      sVar2 = FUN_00dde2d0(0,2);
      if (sVar2 != 0) {
        FUN_00a8caf0(0x1d,0,0,0);
      }
      iVar4 = FUN_00ac4780();
      if ((1 < iVar4) && (sVar2 = FUN_00dde2d0(0,2), sVar2 != 0)) {
        FUN_00a8caf0(0x1d,0,0,0);
        return;
      }
    }
    else {
      iVar4 = 8;
      iVar3 = FUN_00ac4780();
      if (iVar3 == 2) {
        iVar4 = 5;
      }
      iVar3 = FUN_00ac4780();
      if (2 < iVar3) {
        iVar4 = 3;
      }
      if ((iVar4 < *(int *)(param_1 + 0x1d28)) && (*(int *)(param_1 + 0x1d4c) != 0)) {
        *(undefined4 *)(param_1 + 0x1d28) = 0;
        FUN_00a8caf0(0x12,0,0,0);
        return;
      }
      if ((iVar4 < *(int *)(param_1 + 0x1d2c)) && (*(int *)(param_1 + 0x1d48) != 0)) {
        *(undefined4 *)(param_1 + 0x1d2c) = 0;
        FUN_00a8caf0(0x13,0,0,0);
        return;
      }
      if (*(float *)(param_1 + 0x920) < 0.0) {
        if ((*(float *)(param_1 + 0xdd8) < 0.0) && (*(float *)(param_1 + 0xa90) <= 100.0)) {
          iVar4 = FUN_00aed900(0xc2200000);
          if (iVar4 == 0) {
            FUN_00a8caf0(6,0,0,0);
            return;
          }
LAB_00af938e:
          FUN_00a8caf0(2,0,0,0);
          return;
        }
        if ((*(float *)(param_1 + 0xdd8) < 0.0) && (*(float *)(param_1 + 0xa90) <= 225.0)) {
          iVar4 = FUN_00aed900(0xc2200000);
          if (iVar4 == 0) {
            FUN_00a8caf0(5,0,0,0);
            return;
          }
          goto LAB_00af938e;
        }
        if (((*(float *)(param_1 + 0xaa0) < 1.0471976) && (*(float *)(param_1 + 0xa90) < 676.0)) &&
           (225.0 < *(float *)(param_1 + 0xa90))) {
          FUN_00af6bf0();
          return;
        }
        fVar1 = *(float *)(param_1 + 0xa8c);
        if (!NAN(fVar1) && 10000.0 < fVar1 != (fVar1 == 10000.0)) {
          FUN_00a8caf0(3,0,0,0);
        }
      }
      if (*(float *)(param_1 + 0x920) <= 0.0) {
        if (((*(float *)(param_1 + 0xdd8) < 0.0) && (625.0 < *(float *)(param_1 + 0xa90))) &&
           ((*(float *)(param_1 + 0xa90) < 1225.0 && (*(float *)(param_1 + 0xaa0) < 1.0471976)))) {
          FUN_00ae9920();
          return;
        }
        if (((*(float *)(param_1 + 0xdd8) < 0.0) && (1225.0 < *(float *)(param_1 + 0xa90))) &&
           ((*(float *)(param_1 + 0xa90) < 3600.0 && (*(float *)(param_1 + 0xaa0) < 1.0471976)))) {
          FUN_00ae9a30();
          return;
        }
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
  }
  return;
}

// 00AF95F0  FUN_00af95f0  size=1389  [between]
void __fastcall FUN_00af95f0(int *param_1)

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
  undefined1 local_120 [284];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x70,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aed150();
    FUN_00e01ca0();
    FUN_00dffb30(param_1 + 0x564);
    FUN_00e02d50(param_1,4,local_120);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    if (param_1[0x7e4] == 0) {
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
    goto LAB_00af987b;
  case 5:
LAB_00af987b:
    iVar2 = FUN_00a952e0(0,0x42700000);
    if ((iVar2 != 0) || (iVar2 = FUN_00a952e0(0,0x43860000), iVar2 != 0)) {
      (**(code **)(param_1[0x564] + 8))(0x42700000,0,0);
      if (param_1[0x550] != 0) {
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
      param_1[0x550] = iVar2;
      iVar2 = FUN_00c81c60(0x30);
      if (iVar2 != 0) {
        FUN_00c81b30(0x31);
      }
      FUN_00c81b30(0x30);
    }
    iVar2 = FUN_00a952e0(0,0x43e10000);
    if (iVar2 != 0) {
      FUN_00ad0a90();
      param_1[0x550] = 0;
    }
    iVar2 = FUN_00a94e10(0,0,0x436d0000);
    if (iVar2 != 0) {
      param_1[0x551] = 1;
    }
    iVar2 = FUN_00a94e10(0,0x42b40000,0x436d0000);
    if (iVar2 != 0) {
      param_1[0x557] = 1;
    }
    iVar2 = FUN_00a952e0(0,0x434f0000);
    if (iVar2 != 0) {
      FUN_00ad0a90();
      param_1[0x550] = 0;
    }
    iVar2 = FUN_00a94e10(0,0x43860000,0x43e28000);
    if (iVar2 != 0) {
      param_1[0x552] = 1;
    }
    iVar2 = FUN_00a94e10(0,0x43b30000,0x43e28000);
    if (iVar2 != 0) {
      param_1[0x556] = 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8caf0(0,0,0,0);
      param_1[0x376] = 0x42700000;
      iVar2 = FUN_00ac4780();
      if (iVar2 == 2) {
        param_1[0x376] = 0x41f00000;
      }
      iVar2 = FUN_00ac4780();
      if (2 < iVar2) {
        param_1[0x376] = 0x40c00000;
        return;
      }
    }
  default:
    goto switchD_00af9612_default;
  }
  param_1[0x551] = 1;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 != 0) || ((float)param_1[0x248] < 0.0)) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  if (((param_1[0x7e4] != 0) && (param_1[0x2a1] != 0)) &&
     (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0))) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
    return;
  }
switchD_00af9612_default:
  return;
}

// 00AF9B80  FUN_00af9b80  size=781  [between]
void __fastcall FUN_00af9b80(int param_1)

{
  int iVar1;
  float10 extraout_ST0;
  undefined4 uVar2;
  undefined1 local_120 [284];
  
  FUN_00aedaa0();
  *(undefined4 *)(param_1 + 0x1cd4) = *(undefined4 *)(param_1 + 0x1cd8);
  *(undefined4 *)(param_1 + 0x1cc0) = 1;
  *(undefined4 *)(param_1 + 0x1550) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0xaa,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00aed090();
    FUN_00aa4080(0xd7,5,0x3e888889,0x3f800000,0x10,0,0x3f800000);
    FUN_00e01ca0();
    FUN_00dffb30(param_1 + 0x1a60);
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
    *(undefined4 *)(param_1 + 0x920) = 0x44160000;
    FUN_00dc1300(1);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    if ((*(int *)(param_1 + 0x4a0) == 1) &&
       (iVar1 = FUN_00fdbc60(), *(int *)(param_1 + 0x870) <= iVar1)) {
      *(float *)(param_1 + 0x920) =
           (float)(extraout_ST0 - (float10)*(float *)(param_1 + 0x910) * (float10)10.0);
    }
    if (((*(int *)(param_1 + 0x1d40) != 0) || (*(int *)(param_1 + 0x1d4c) != 0)) ||
       (*(int *)(param_1 + 0x1d48) != 0)) {
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
    (**(code **)(*(int *)(param_1 + 0x1a60) + 8))(0x41200000,0,0);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      iVar1 = FUN_00aed900(0xc2200000);
      if (iVar1 == 0) {
        uVar2 = 6;
      }
      else {
        uVar2 = 2;
      }
      FUN_00a8caf0(uVar2,0,0,0);
      *(undefined4 *)(param_1 + 0xdd8) = 0x42700000;
      iVar1 = FUN_00ac4780();
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0xdd8) = 0x41f00000;
      }
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        *(undefined4 *)(param_1 + 0xdd8) = 0x40c00000;
        return;
      }
    }
  }
  return;
}

// 00AF9EB0  FUN_00af9eb0  size=885  [between]
void __fastcall FUN_00af9eb0(int param_1)

{
  int iVar1;
  float10 extraout_ST0;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_120 [284];
  
  FUN_00aedaa0();
  *(undefined4 *)(param_1 + 0x1cc0) = 1;
  *(undefined4 *)(param_1 + 0x1550) = 1;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x9d,0,0x3f000000,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00aed090();
    uVar3 = 0;
    uVar2 = FUN_00a12210(0x1e);
    FUN_00a85150(uVar2,uVar3);
    uVar3 = 0;
    uVar2 = FUN_00a12210(0x30);
    FUN_00a85150(uVar2,uVar3);
    FUN_00aa4080(0xd7,5,0x3e888889,0x3f800000,0x10,0,0x3f800000);
    FUN_00e01ca0();
    FUN_00dffb30(param_1 + 0x1a60);
    FUN_00e02d50(param_1,0x1d,local_120);
    if (*(int *)(param_1 + 0x2040) != 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    *(undefined4 *)(param_1 + 0x2040) = 0;
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
    *(undefined4 *)(param_1 + 0x920) = 0x44160000;
    FUN_00dc1300(1);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    if ((*(int *)(param_1 + 0x4a0) == 1) &&
       (iVar1 = FUN_00fdbc60(), *(int *)(param_1 + 0x870) <= iVar1)) {
      *(float *)(param_1 + 0x920) =
           (float)(extraout_ST0 - (float10)*(float *)(param_1 + 0x910) * (float10)10.0);
    }
    if (((*(int *)(param_1 + 0x1d40) != 0) || (*(int *)(param_1 + 0x1d4c) != 0)) ||
       (*(int *)(param_1 + 0x1d48) != 0)) {
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
    (**(code **)(*(int *)(param_1 + 0x1a60) + 8))(0x41200000,0,0);
    if (*(int *)(param_1 + 0x2040) != 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    *(undefined4 *)(param_1 + 0x2040) = 0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      iVar1 = FUN_00aed900(0xc2200000);
      if (iVar1 == 0) {
        uVar2 = 6;
      }
      else {
        uVar2 = 2;
      }
      FUN_00a8caf0(uVar2,0,0,0);
      *(undefined4 *)(param_1 + 0xdd8) = 0x42700000;
      iVar1 = FUN_00ac4780();
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0xdd8) = 0x41f00000;
      }
      iVar1 = FUN_00ac4780();
      if (2 < iVar1) {
        *(undefined4 *)(param_1 + 0xdd8) = 0x40c00000;
        return;
      }
    }
  }
  return;
}

// 00AFA5D0  FUN_00afa5d0  size=503  [between]
void __fastcall FUN_00afa5d0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_124;
  undefined1 local_120 [284];
  
  if (*(int *)(param_1 + 0x4a0) != 2) {
    switch(*(undefined1 *)(param_1 + 0xde4)) {
    case 0:
      FUN_00aa4080(0xcf,2,0x3e888889,0x3f800000,0x10,0,0x3f800000);
      *(char *)(param_1 + 0xde4) = *(char *)(param_1 + 0xde4) + '\x01';
    case 1:
      if ((*(int *)(param_1 + 0xddc) == 1) || (iVar4 = FUN_00a8c760(0x35), iVar4 != 0)) {
        *(char *)(param_1 + 0xde4) = *(char *)(param_1 + 0xde4) + '\x01';
      }
      break;
    case 2:
      FUN_00a94bc0(2,0x3e888889);
      *(char *)(param_1 + 0xde4) = *(char *)(param_1 + 0xde4) + '\x01';
    case 3:
      if ((*(int *)(param_1 + 0xddc) == 0) && (iVar4 = FUN_00a8c760(0x35), iVar4 == 0)) {
        *(undefined1 *)(param_1 + 0xde4) = 0;
      }
    }
    iVar4 = 0;
    if (*(int *)(param_1 + 0x1580) == 0) {
      iVar2 = FUN_00a8c760(0x35);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x1580) = 1;
        FUN_00e01ca0();
        FUN_00dffb30(param_1 + 0x16f0);
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
        *(undefined4 *)(param_1 + 0x1580) = 0;
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
    *(undefined4 *)(param_1 + 0xddc) = 0;
    *(undefined4 *)(param_1 + 0xde0) = 0;
  }
  return;
}

// 00AFA7E0  FUN_00afa7e0  size=1754  [between]
void __fastcall FUN_00afa7e0(int param_1)

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
  fStack_248 = 1.6131472e-38;
  fVar1 = (float)FUN_00a12210();
  iStack_244 = 0xe11;
  fStack_248 = 1.6131497e-38;
  local_1e4 = fVar1;
  local_214 = FUN_00a12210();
  iStack_244 = 0x2b;
  fStack_248 = 1.6131515e-38;
  iVar2 = FUN_00a12210();
  iStack_244 = 0x20;
  fStack_248 = 1.613154e-38;
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
    puStack_250 = (undefined1 *)0xafa8b3;
    D3DXMatrixInverse();
    puStack_250 = auStack_1ac;
    pfStack_254 = &fStack_21c;
    piStack_258 = &iStack_1dc;
    piStack_25c = (int *)0xafa8ca;
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
    bVar4 = *(char *)(param_1 + 0xde6) == '\0';
    bVar5 = *(char *)(param_1 + 0xde7) == '\0';
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
    if ((iVar2 != 0) || (*(int *)(param_1 + 0x1cc0) != 0)) {
      bVar4 = false;
      bVar5 = false;
    }
    if (*(int *)(param_1 + 0x4a0) == 1) {
      bVar4 = false;
      bVar5 = false;
    }
    if (*(char *)(param_1 + 0xde6) == '\0') {
      if (*(float *)(local_208 + 0x54) < 0.01) {
        *(undefined1 *)(param_1 + 0xde6) = 1;
      }
    }
    else if ((*(char *)(param_1 + 0xde6) == '\x01') && (0.089999996 < *(float *)(local_208 + 0x54)))
    {
      local_20c = 1;
      *(undefined1 *)(param_1 + 0xde6) = 0;
    }
    if (*(char *)(param_1 + 0xde7) == '\0') {
      if (*(float *)(unaff_EBX + 0x54) < 0.01) {
        *(undefined1 *)(param_1 + 0xde7) = 1;
      }
    }
    else if ((*(char *)(param_1 + 0xde7) == '\x01') && (0.089999996 < *(float *)(unaff_EBX + 0x54)))
    {
      local_210 = 1;
      *(undefined1 *)(param_1 + 0xde7) = 0;
    }
    if (iStack_1dc != 0) {
      if (bVar4) {
        pfStack_254 = (float *)(*(float *)(param_1 + 0x1ca0) - fStack_234);
        puStack_250 = (undefined1 *)(*(float *)(param_1 + 0x1ca4) - fStack_230);
        puStack_24c = (undefined1 *)(*(float *)(param_1 + 0x1ca8) - fStack_22c);
        fStack_248 = *(float *)(param_1 + 0x1cac) - fStack_228;
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
        *(undefined4 *)(param_1 + 0x1ca0) = *(undefined4 *)(iStack_1dc + 0x40);
        *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(iStack_1dc + 0x44);
        *(undefined4 *)(param_1 + 0x1ca8) = *(undefined4 *)(iStack_1dc + 0x48);
        *(undefined4 *)(param_1 + 0x1cac) = *(undefined4 *)(iStack_1dc + 0x4c);
      }
    }
    if (iStack_1d8 != 0) {
      if (bVar5) {
        pfStack_254 = (float *)(*(float *)(param_1 + 0x1cb0) - fStack_224);
        puStack_250 = (undefined1 *)(*(float *)(param_1 + 0x1cb4) - fStack_220);
        puStack_24c = (undefined1 *)(*(float *)(param_1 + 0x1cb8) - fStack_21c);
        fStack_248 = *(float *)(param_1 + 0x1cbc) - fStack_218;
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
        *(undefined4 *)(param_1 + 0x1cb0) = *(undefined4 *)(iStack_1d8 + 0x40);
        *(undefined4 *)(param_1 + 0x1cb4) = *(undefined4 *)(iStack_1d8 + 0x44);
        *(undefined4 *)(param_1 + 0x1cb8) = *(undefined4 *)(iStack_1d8 + 0x48);
        *(undefined4 *)(param_1 + 0x1cbc) = *(undefined4 *)(iStack_1d8 + 0x4c);
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
        uVar3 = FUN_00e00b40(0x20200,pfVar7);
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
        uVar3 = FUN_00e00b40(0x20200,pfVar7);
        FUN_00a8c930(uVar3,pfVar7);
      }
    }
    *(undefined4 *)(param_1 + 0x1d50) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x1d54) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x1d58) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x1d5c) = *(undefined4 *)(param_1 + 0x4c);
  }
  return;
}

// 00AFAEC0  FUN_00afaec0  size=96  [between]
void __thiscall FUN_00afaec0(int param_1,undefined4 param_2,undefined4 param_3)

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

// 00AFAF20  Em0200::vf358  size=103  [class]
void __thiscall Em0200::vf358(int param_1,undefined4 param_2,int param_3)

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

// 00AFAF90  FUN_00afaf90  size=137  [callgraph]
void __thiscall FUN_00afaf90(int param_1,undefined4 param_2,undefined4 *param_3)

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

// 00AFC7E0  Em0200::vf32C  size=1989  [class]
undefined4 __fastcall Em0200::vf32C(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  int local_274;
  undefined4 local_26c;
  int local_268;
  LPCRITICAL_SECTION local_264;
  int local_260 [2];
  undefined1 uStack_258;
  byte bStack_24f;
  float fStack_230;
  int iStack_140;
  
  if (param_1[0x801] != 0) {
    *(int *)(param_1[0x801] + 0x44) = param_1[0x731];
    *(int *)(param_1[0x801] + 0x48) = param_1[0x732];
  }
  if (param_1[0x802] != 0) {
    *(int *)(param_1[0x802] + 0x44) = param_1[0x733];
    *(int *)(param_1[0x802] + 0x48) = param_1[0x734];
  }
  if (param_1[0x803] != 0) {
    *(int *)(param_1[0x803] + 0x44) = param_1[0x739];
    *(int *)(param_1[0x803] + 0x48) = param_1[0x73a];
  }
  if (param_1[0x804] != 0) {
    *(int *)(param_1[0x804] + 0x44) = param_1[0x73b];
    *(int *)(param_1[0x804] + 0x48) = param_1[0x73c];
  }
  param_1[0x750] = 0;
  param_1[0x752] = 0;
  param_1[0x753] = 0;
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
  iVar3 = param_1[0x19f];
  param_1[0x86c] = 0;
  iVar4 = param_1[0x1a1] * 0x150 + iVar3;
  FUN_00445db0();
  FUN_004105d0();
  local_274 = -1;
  for (; iVar3 != iVar4; iVar3 = iVar3 + 0x150) {
    iVar1 = *(int *)(iVar3 + 4);
    if (local_274 <= iVar1) {
      FUN_00448f50(iVar3);
      FUN_00448f50(iVar3);
      local_274 = iVar1;
      if (*(int *)(iVar3 + 0x94) != 0) {
        param_1[0x86c] = 1;
      }
    }
  }
  iVar3 = FUN_00a8ef10();
  if (((((iVar3 != 0) || ((*(byte *)(param_1 + 0x130) & 1) == 0)) ||
       (piVar5 = (int *)0x0, param_1[0x139] != 0)) ||
      ((param_1[0x374] != 0 || (iVar3 = FUN_00a8f040(local_260), iVar3 != 0)))) ||
     (param_1[0x128] == 2)) {
    return 0;
  }
  local_264 = (LPCRITICAL_SECTION)(param_1 + 0x280);
  if (param_1[0x286] != 0) {
    EnterCriticalSection(local_264);
  }
  local_26c = 0;
  iVar3 = FUN_00a8cab0();
  local_268 = FUN_00a81330();
  if (local_268 != 0) {
    piVar5 = (int *)FUN_00a7c8a0();
  }
  if (piVar5 == param_1) {
    (**(code **)(*param_1 + 0x198))(piVar5,local_260,0x10);
  }
  else {
    iVar4 = FUN_004025b0();
    if (iVar4 != 0) {
      local_274 = FUN_00fdbc60();
      if (local_260[0] == 0x2f) {
        local_274 = 10;
      }
      if (param_1[0xbe4] != 0) {
        local_274 = 0;
      }
      (**(code **)(*param_1 + 0x30c))(local_274,0);
      if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 0x130) & 0x10) != 0)) {
        (**(code **)(*param_1 + 0x21c))(piVar5,uStack_258,0x3c23d70a,0);
        param_1[0xc32] = 0;
      }
      pcVar2 = *(code **)(*param_1 + 0x198);
      param_1[0x73d] = iStack_140;
      (*pcVar2)(piVar5,&local_268,1);
      fVar6 = (float10)FUN_00ddba30(fStack_230 - (float)param_1[0x25]);
      param_1[0x245] = (int)(float)fVar6;
      if (param_1[0x21c] < 1) {
        param_1[0xbe4] = 1;
        param_1[0x21c] = 1;
        FUN_00a8caf0(0x27,0,0,0);
        if (param_1[0xbe5] == 0) {
          FUN_00c81b30(0x14);
          param_1[0xbe5] = 1;
          FUN_00aa4080(0xdb,6,0,0x3f800000,0x8040200,0,0x3f800000);
        }
      }
      else {
        iVar4 = param_1[0x73d];
        if ((iVar4 == 1) || (iVar4 == 8)) {
          param_1[0x750] = 1;
        }
        if ((iVar4 == 3) || (iVar4 == 10)) {
          param_1[0x752] = 1;
        }
        if ((iVar4 == 2) || (iVar4 == 9)) {
          param_1[0x753] = 1;
        }
        if (((iVar3 != 0x21) && (iVar3 != 0x20)) && (iVar3 != 0x1f)) {
          if ((iVar4 == 1) || (iVar4 == 8)) {
            param_1[0x735] = param_1[0x735] - local_274;
            param_1[0x7e0] = 0x42200000;
            param_1[0x737] = param_1[0x737] - local_274;
            param_1[0x749] = param_1[0x749] + 1;
            param_1[0x750] = 1;
            if (param_1[0x735] < 0) {
              iVar3 = FUN_00fdbc60();
              param_1[0x735] = iVar3;
              FUN_00a8caf0(0x27,0,0,0);
              param_1[0x7f1] = param_1[0x7f1] + 1;
              if (1 < param_1[0x7f1]) {
                param_1[0x7f1] = 0;
                if (param_1[0x751] == 0) {
                  (**(code **)(*param_1 + 0x358))(0x33,param_1 + 0x66c);
                }
                param_1[0x751] = 1;
              }
              FUN_00ae9bd0(1);
              goto LAB_00afcf8c;
            }
          }
          if ((iVar4 == 3) || (iVar4 == 10)) {
            param_1[0x731] = param_1[0x731] - local_274;
            param_1[0x74b] = param_1[0x74b] + 1;
            param_1[0x752] = 1;
            if ((param_1[0x74d] == 0) && ((float)param_1[0x731] < (float)param_1[0x732] * 0.5)) {
              iVar3 = FUN_00a12210(0x20);
              FUN_00afaf90(0x36,iVar3 + 0x40);
              param_1[0x74d] = 1;
              FUN_00e5e0c0("em0200_se_dmg_exp_foot",param_1,0x20,0);
              FUN_00a8caf0(0x28,0,0,0);
              FUN_00ae9d70(1);
            }
            if (param_1[0x731] < 0) {
              if (param_1[0x74f] == 0) {
                (**(code **)(*param_1 + 0x358))(0x35,param_1 + 0x66c);
              }
              param_1[0x74f] = 1;
              iVar3 = FUN_00a12210(0x20);
              FUN_00afaf90(0x36,iVar3 + 0x40);
              iVar3 = FUN_00fdbc60();
              param_1[0x731] = iVar3;
              FUN_00a8caf0(0x28,0,0,0);
              FUN_00e5e0c0("em0200_se_dmg_exp_foot",param_1,0x20,0);
              lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_5(1,"_lreg");
              param_1[0x7f5] = 0x3f333333;
              FUN_00ae9d70(1);
              goto LAB_00afcf8c;
            }
          }
          if ((param_1[0x73d] == 2) || (param_1[0x73d] == 9)) {
            param_1[0x733] = param_1[0x733] - local_274;
            param_1[0x74a] = param_1[0x74a] + 1;
            param_1[0x753] = 1;
            if ((param_1[0x74c] == 0) && ((float)param_1[0x733] < (float)param_1[0x734] * 0.5)) {
              iVar3 = FUN_00a12210(0x2b);
              FUN_00afaf90(0x36,iVar3 + 0x40);
              param_1[0x74c] = 1;
              FUN_00e5e0c0("em0200_se_dmg_exp_foot",param_1,0x2b,0);
              FUN_00a8caf0(0x29,0,0,0);
              FUN_00ae9ca0(1);
            }
            if (param_1[0x733] < 0) {
              if (param_1[0x74e] == 0) {
                (**(code **)(*param_1 + 0x358))(0x34,param_1 + 0x66c);
              }
              param_1[0x74e] = 1;
              iVar3 = FUN_00a12210(0x2b);
              FUN_00afaf90(0x36,iVar3 + 0x40);
              iVar3 = FUN_00fdbc60();
              param_1[0x733] = iVar3;
              FUN_00a8caf0(0x29,0,0,0);
              FUN_00e5e0c0("em0200_se_dmg_exp_foot",param_1,0x2b,0);
              lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_5(1,"_rreg");
              param_1[0x7f4] = 0x3f333333;
              FUN_00ae9ca0(1);
              goto LAB_00afcf8c;
            }
          }
        }
        if (local_260[0] == 0x2c) {
          (**(code **)(*param_1 + 0x14c))(9,local_268);
        }
        if ((param_1[0x73d] == 1) && (4 < bStack_24f)) {
          FUN_00aa4080(0xd1,3,0x3d088889,0x3f000000,0x8000010,0,0x3fc00000);
        }
        (**(code **)(*param_1 + 0x1d8))();
        local_26c = 1;
      }
    }
  }
LAB_00afcf8c:
  if (local_264[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(local_264);
  }
  return local_26c;
}

// 00AFCFB0  Em0200::vf50  size=1319  [class]
void __fastcall Em0200::vf50(int param_1)

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
  FUN_00afa7e0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f5990(param_1);
  }
  if (*(int *)(param_1 + 0x1f60) != 0) {
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
  if (*(int *)(param_1 + 0x1f64) != 0) {
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
  if (*(int *)(param_1 + 0x1f68) != 0) {
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
  if (*(int *)(param_1 + 0x1f6c) != 0) {
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
  if (*(int *)(param_1 + 0x1f70) != 0) {
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

// 00B01870  Em0200::vf4C  size=1896  [class]
void __fastcall Em0200::vf4C(int *param_1)

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
  param_1[0x747] = 0;
  (*pcVar1)(0);
  param_1[0x730] = 0;
  BehaviorEmBase::vf4C();
  FUN_00affff0();
  DebrisLeaveSignalContext::DebrisLeaveSignalContext_8();
  FUN_00ae9ea0();
  FUN_00afa5d0();
  FUN_00ae97e0();
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
  param_1[0x7e4] = 1;
  bVar5 = true;
  if ((iVar4 == 0x39) || (iVar4 == 0x3a)) {
    bVar5 = false;
  }
  if ((iVar4 != 0x32) && (bVar5)) {
    iStack_64 = iStack_84;
    iStack_5c = iStack_7c;
    fStack_58 = fStack_78;
    fStack_60 = fStack_80;
    if ((float)param_1[0x11] < fStack_80) {
      fStack_60 = (float)param_1[0x11];
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
        if (param_1[0x80d] == 0) {
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
            param_1[0x80d] = 1;
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
            param_1[0x80d] = 0;
          }
        }
        if (param_1[0x80e] == 0) {
          if (((param_1[0x80d] != 0) && (fStack_74 < 4.0)) &&
             ((-4.0 < fStack_74 && (fStack_6c <= 5.0)))) {
            param_1[0x80e] = 1;
          }
        }
        else if (((param_1[0x80d] == 0) || (5.0 < fStack_74)) || (fStack_74 < -5.0)) {
          param_1[0x80e] = 0;
        }
        else if (!NAN(fStack_6c) && 6.0 < fStack_6c != (fStack_6c == 6.0)) {
          param_1[0x80e] = 0;
        }
      }
    }
    if (param_1[0x80d] == 0) {
      param_1[0x553] = 1;
      param_1[0x554] = 1;
    }
    if ((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8d9d0(), iVar4 != 0)) {
      param_1[0x553] = 1;
      param_1[0x554] = 1;
    }
    if (param_1[0x55a] != 0) {
      param_1[0x55c] = iStack_84;
      param_1[0x55d] = (int)fStack_80;
      param_1[0x55e] = iStack_7c;
      param_1[0x55f] = (int)fStack_78;
      param_1[0x55a] = 0;
    }
    if (0.0 < (float)param_1[0x559]) {
      iStack_84 = param_1[0x55c];
      fStack_80 = (float)param_1[0x55d];
      iStack_7c = param_1[0x55e];
      fStack_78 = (float)param_1[0x55f];
      iStack_64 = param_1[0x55c];
      fStack_60 = (float)param_1[0x55d];
      iStack_5c = param_1[0x55e];
      fStack_58 = (float)param_1[0x55f];
      param_1[0x559] = (int)((float)param_1[0x559] - (float)param_1[0x244]);
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
    if (param_1[0x552] != 0) {
      uStack_94 = 1;
    }
    if (param_1[0x553] != 0) {
      uStack_94 = 0;
    }
    bVar6 = param_1[0x553] == 0 && (param_1[0x551] != 0 || iVar4 == 0 && bVar6);
    if (param_1[0x554] != 0) {
      uStack_90 = 0;
    }
    if (param_1[0x556] != 0) {
      iStack_88 = 1;
    }
    if (param_1[0x557] != 0) {
      uStack_8c = 1;
    }
    if (0.0 < (float)param_1[0x7e0]) {
      iStack_88 = 1;
      uStack_8c = 1;
    }
    if (param_1[0x80e] != 0) {
      iStack_88 = 1;
      uStack_8c = 1;
    }
    bVar5 = param_1[0x558] == 1 || (param_1[0x80e] != 0 || 0.0 < (float)param_1[0x7e0]);
    param_1[0x551] = 0;
    param_1[0x552] = 0;
    param_1[0x553] = 0;
    param_1[0x554] = 0;
    param_1[0x555] = 0;
    param_1[0x556] = 0;
    param_1[0x557] = 0;
    param_1[0x558] = 0;
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


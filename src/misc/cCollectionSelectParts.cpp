// src/misc/cCollectionSelectParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0098C7D0..009BFDB0, 14 functions

#include "mgrr.h"
#include "cCollectionSelectParts.h"

// 0098C7D0  cCollectionSelectParts::vf0C  size=72  [class]
void __fastcall cCollectionSelectParts::vf0C(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = 0;
    do {
      FUN_00d389f0(0xf,iVar1,0,0,*(undefined4 *)(param_1 + 0x18),iVar1 + 0x33,1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x14);
  }
  return;
}

// 0098C820  FUN_0098c820  size=239  [callgraph]
void __fastcall FUN_0098c820(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_50 [76];
  
  cVar1 = FUN_00ce12f0(0);
  if ((cVar1 != '\0') || (cVar1 = FUN_00ce1360(0), cVar1 != '\0')) {
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 5;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    D3DXMatrixTranslation
              (local_50,*(undefined4 *)(param_1 + 0x4b0),*(undefined4 *)(param_1 + 0x4b4),0);
    uVar2 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
    switch(uVar2) {
    case 0:
    case 4:
    case 6:
      if (*(int *)(param_1 + 0x4cc) != 0) {
        FUN_00cb2680(&stack0xffffffa0);
        FUN_00e5e050("core_se_sys_cancel",0);
        return;
      }
      break;
    case 1:
      if (*(int *)(param_1 + 0x4c4) != 0) {
        FUN_00cb2680(&stack0xffffffa0);
      }
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x50),6);
    }
    FUN_00e5e050("core_se_sys_cancel",0);
  }
  return;
}

// 0098C930  FUN_0098c930  size=224  [callgraph]
void __fastcall FUN_0098c930(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    iVar1 = FUN_00ca9da0(*(undefined4 *)(param_1 + 0xe8));
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 == 0xaffff) {
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      if (*(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0x4ec)) {
        return;
      }
      *(undefined4 *)(param_1 + 0xe4) = 2;
      return;
    }
    uVar2 = 0;
    if (((iVar1 == 0x20140) || (iVar1 == 0x20144)) || (iVar1 == 0x20160)) {
      uVar2 = 0x14;
    }
    FUN_00a00a60(iVar1,uVar2);
  }
  else {
    if (*(int *)(param_1 + 0xe4) != 1) {
      return;
    }
    iVar1 = FUN_00ca9da0(*(undefined4 *)(param_1 + 0xe8));
    iVar1 = *(int *)(iVar1 + 0x20);
    uVar2 = 0;
    if (((iVar1 == 0x20140) || (iVar1 == 0x20144)) || (iVar1 == 0x20160)) {
      uVar2 = 0x14;
    }
    iVar1 = FUN_00a00ca0(iVar1,uVar2);
    if (iVar1 == 0) {
      return;
    }
    *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    if (*(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0x4ec)) {
      *(undefined4 *)(param_1 + 0xe4) = 0;
      return;
    }
  }
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  return;
}

// 0098CA10  FUN_0098ca10  size=102  [callgraph]
void __fastcall FUN_0098ca10(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x4ec)) {
    do {
      iVar1 = FUN_00ca9da0(iVar2);
      iVar1 = *(int *)(iVar1 + 0x20);
      if (iVar1 != 0xaffff) {
        if (((iVar1 == 0x20140) || (iVar1 == 0x20144)) || (iVar1 == 0x20160)) {
          uVar3 = 0x14;
        }
        else {
          uVar3 = 0;
        }
        FUN_00a00bd0(iVar1,uVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x4ec));
  }
  FUN_00a00a60(0x21000,0);
  return;
}

// 0098CAA0  FUN_0098caa0  size=149  [callgraph]
float10 FUN_0098caa0(undefined4 param_1)

{
  int iVar1;
  float local_58;
  float local_54 [21];
  
  local_58 = 0.0;
  local_54[0x11] = 0.0;
  local_54[0x12] = 0.0;
  local_54[0] = 0.0;
  local_54[1] = 0.0;
  local_54[2] = 0.0;
  local_54[3] = 0.0;
  local_54[4] = 0.0;
  local_54[5] = 0.0;
  local_54[6] = 0.0;
  local_54[7] = 0.0;
  local_54[8] = 0.0;
  local_54[9] = 0.0;
  local_54[10] = 0.0;
  local_54[0xb] = 0.0;
  local_54[0xc] = 0.0;
  local_54[0xd] = 0.0;
  local_54[0xe] = 0.0;
  local_54[0xf] = 0.0;
  local_54[0x10] = 0.0;
  local_54[0x13] = -NAN;
  iVar1 = FUN_00d29cc0(param_1,local_54);
  if (iVar1 != 0) {
    local_58 = local_54[0];
  }
  iVar1 = FUN_00cb2790(param_1);
  return (float10)*(float *)(iVar1 + 0x10) * (float10)local_58;
}

// 0098CB40  FUN_0098cb40  size=98  [callgraph]
void __thiscall FUN_0098cb40(int param_1,float param_2)

{
  int iVar1;
  
  iVar1 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x70));
  *(float *)(iVar1 + 0xc4) = param_2 * 114.0;
  iVar1 = FUN_00cb2760(*(undefined4 *)(param_1 + 0xc4));
  *(float *)(iVar1 + 0xfc) = param_2;
  iVar1 = FUN_00cb2760(*(undefined4 *)(param_1 + 200));
  *(float *)(iVar1 + 0xfc) = 1.0 - param_2;
  return;
}

// 0098CBB0  FUN_0098cbb0  size=69  [callgraph]
undefined4 __fastcall FUN_0098cbb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((((iVar1 < 0) || (0x5f < iVar1)) || ((&DAT_01b39230)[iVar1] == 0)) &&
     (((iVar2 == 3 || (iVar2 == 5)) || (iVar2 == 7)))) {
    return 1;
  }
  return 0;
}

// 0098CC00  FUN_0098cc00  size=594  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0098cc00(int param_1)

{
  int iVar1;
  undefined4 local_d0 [51];
  
  local_d0[0] = 0x3f9851ec;
  local_d0[1] = 0x3f4ccccd;
  local_d0[2] = 0;
  local_d0[3] = 0x3f800000;
  local_d0[4] = 0x3f9c28f6;
  local_d0[5] = 0x3ee66666;
  local_d0[6] = 0x40633333;
  local_d0[7] = 0x3f800000;
  local_d0[8] = 0x3fb33333;
  local_d0[9] = 0x3f666666;
  local_d0[10] = 0;
  local_d0[0xb] = 0x3f800000;
  local_d0[0xc] = 0x3f99999a;
  local_d0[0xd] = 0x3f733333;
  local_d0[0xe] = 0x40733333;
  local_d0[0xf] = 0x3f800000;
  local_d0[0x10] = 0x3feccccd;
  local_d0[0x11] = 0x3f800000;
  local_d0[0x13] = 0x3f800000;
  local_d0[0x12] = 0;
  local_d0[0x14] = 0x3fd47ae1;
  local_d0[0x15] = 0x3fa66666;
  local_d0[0x16] = 0x408b3333;
  local_d0[0x17] = 0x3f800000;
  local_d0[0x18] = 0x3fa66666;
  local_d0[0x19] = 0x3f570a3d;
  local_d0[0x1a] = 0;
  local_d0[0x1b] = 0x3f800000;
  local_d0[0x1c] = 0x3fb9999a;
  local_d0[0x1d] = 0x3f99999a;
  local_d0[0x1e] = 0x40466666;
  local_d0[0x1f] = 0x3f800000;
  local_d0[0x20] = 0x3faf5c29;
  local_d0[0x21] = 0x3f800000;
  local_d0[0x23] = 0x3f800000;
  local_d0[0x22] = 0;
  local_d0[0x24] = 0x3fa00000;
  local_d0[0x25] = 0x3fc00000;
  local_d0[0x26] = 0x40666666;
  local_d0[0x27] = 0x3f800000;
  local_d0[0x28] = 0x3f000000;
  local_d0[0x29] = 0x3e19999a;
  local_d0[0x2a] = 0;
  local_d0[0x2b] = 0x3f800000;
  local_d0[0x2c] = 0x3f000000;
  local_d0[0x2d] = 0x3dcccccd;
  local_d0[0x2e] = 0x3f99999a;
  local_d0[0x2f] = 0x3f800000;
  iVar1 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
  if (iVar1 == 2) {
    iVar1 = FUN_00ca9e50(*(undefined4 *)(param_1 + 0xf8));
    if (local_d0 + iVar1 * 8 != (undefined4 *)0x0) {
      FUN_00db8ef0(local_d0 + iVar1 * 8U + 4,local_d0 + iVar1 * 8);
    }
    return;
  }
  iVar1 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
  if (((iVar1 != 3) && (iVar1 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8)), iVar1 != 5)) &&
     (iVar1 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8)), iVar1 != 7)) {
    return;
  }
  FUN_00db8ef0(local_d0 + 0x2c,local_d0 + 0x28);
  return;
}

// 0098CE60  FUN_0098ce60  size=137  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0098ce60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_01b39364 != 0) {
    iVar3 = 0;
    iVar1 = 0x39;
    do {
      if (iVar1 < 0) {
        iVar2 = 0;
      }
      else if (iVar1 < 0x60) {
        iVar2 = (&DAT_01b39230)[iVar1];
      }
      else {
        iVar2 = 0;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + (uint)(iVar2 == 0);
    } while (iVar1 < 0x4d);
    if (iVar3 != 0x14) {
      return 0;
    }
    DAT_01b6f3b0 = DAT_01b6f3b0 | 0x700000;
    DAT_01b39364 = 0;
    _DAT_01b39368 = 0;
    _DAT_01b3936c = 0;
    *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) | 1;
  }
  return 1;
}

// 009B9B20  cCollectionSelectParts::vf00  size=30  [class]
undefined4 __thiscall cCollectionSelectParts::vf00(undefined4 param_1,byte param_2)

{
  cMessWindowCtrl::cMessWindowCtrl_10();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009B9B40  cCollectionSelectParts::vf08  size=1954  [class]
void __fastcall cCollectionSelectParts::vf08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int local_44;
  int local_3c;
  undefined1 local_38 [56];
  
  FUN_0098be90();
  FUN_0098ce60();
  *(undefined4 *)(param_1 + 0x4ec) = 0x50;
  iVar1 = FUN_009c73f0(7);
  if (iVar1 == 0) {
    iVar1 = FUN_009c73f0(6);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x4ec) + 8;
    }
  }
  else {
    *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x4ec) + 0x10;
  }
  iVar1 = *(int *)(param_1 + 0x4ec) / 5;
  *(int *)(param_1 + 0xec) = iVar1;
  if (*(int *)(param_1 + 0x4ec) % 5 != 0) {
    *(int *)(param_1 + 0xec) = iVar1 + 1;
  }
  uVar2 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  uVar2 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  uVar2 = FUN_00cb25d0(3);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  uVar2 = FUN_00cb25d0(4);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = FUN_00cb25d0(5);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  uVar2 = FUN_00cb25d0(6);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  uVar2 = FUN_00cb25d0(7);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  uVar2 = FUN_00cb25d0(8);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  uVar2 = FUN_00cb25d0(0xd);
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  uVar2 = FUN_00cb25d0(0xe);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  uVar2 = FUN_00cb25d0(0x14);
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  uVar2 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  uVar2 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  uVar2 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  uVar2 = FUN_00cb25d0(0x18);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  uVar2 = FUN_00cb25d0(0x19);
  *(undefined4 *)(param_1 + 100) = uVar2;
  uVar2 = FUN_00cb25d0(0x1a);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = FUN_00cb25d0(0x28);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  uVar2 = FUN_00cb25d0(0x32);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  puVar4 = (undefined4 *)(param_1 + 0x74);
  uVar2 = FUN_00cb25d0(0x33);
  *puVar4 = uVar2;
  uVar2 = FUN_00cb25d0(0x34);
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  uVar2 = FUN_00cb25d0(0x35);
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  uVar2 = FUN_00cb25d0(0x36);
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  uVar2 = FUN_00cb25d0(0x37);
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  uVar2 = FUN_00cb25d0(0x38);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  uVar2 = FUN_00cb25d0(0x39);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  uVar2 = FUN_00cb25d0(0x3a);
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  uVar2 = FUN_00cb25d0(0x3b);
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  uVar2 = FUN_00cb25d0(0x3c);
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  uVar2 = FUN_00cb25d0(0x3d);
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  uVar2 = FUN_00cb25d0(0x3e);
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  uVar2 = FUN_00cb25d0(0x3f);
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  uVar2 = FUN_00cb25d0(0x40);
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  uVar2 = FUN_00cb25d0(0x41);
  *(undefined4 *)(param_1 + 0xac) = uVar2;
  uVar2 = FUN_00cb25d0(0x42);
  *(undefined4 *)(param_1 + 0xb0) = uVar2;
  uVar2 = FUN_00cb25d0(0x43);
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  uVar2 = FUN_00cb25d0(0x44);
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  uVar2 = FUN_00cb25d0(0x45);
  *(undefined4 *)(param_1 + 0xbc) = uVar2;
  uVar2 = FUN_00cb25d0(0x46);
  *(undefined4 *)(param_1 + 0xc0) = uVar2;
  uVar2 = FUN_00cb25d0(0x47);
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  uVar2 = FUN_00cb25d0(0x48);
  *(undefined4 *)(param_1 + 200) = uVar2;
  uVar2 = FUN_00cb25d0(0x5b);
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  uVar2 = FUN_00cb25d0(0x5c);
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  uVar2 = FUN_00cb25d0(0x5d);
  *(undefined4 *)(param_1 + 0xd4) = uVar2;
  uVar2 = FUN_00cb25d0(0x5e);
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  local_44 = 0x14;
  do {
    uVar2 = FUN_00cb3300(*puVar4);
    FUN_00cb2240(uVar2);
    puVar4 = puVar4 + 1;
    local_44 = local_44 + -1;
  } while (local_44 != 0);
  uVar2 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x450) = uVar2;
  uVar2 = FUN_00cb25d0(2);
  *(undefined4 *)(param_1 + 0x454) = uVar2;
  uVar2 = FUN_00cb25d0(0xb);
  *(undefined4 *)(param_1 + 0x458) = uVar2;
  uVar2 = FUN_00cb25d0(0xc);
  *(undefined4 *)(param_1 + 0x45c) = uVar2;
  uVar2 = FUN_00cb25d0(0x15);
  *(undefined4 *)(param_1 + 0x460) = uVar2;
  uVar2 = FUN_00cb25d0(0x16);
  *(undefined4 *)(param_1 + 0x464) = uVar2;
  uVar2 = FUN_00cb25d0(0x17);
  *(undefined4 *)(param_1 + 0x468) = uVar2;
  uVar2 = FUN_00cb25d0(0x18);
  *(undefined4 *)(param_1 + 0x46c) = uVar2;
  uVar2 = FUN_00cb25d0(0x1a);
  *(undefined4 *)(param_1 + 0x470) = uVar2;
  iVar1 = 0;
  do {
    if (iVar1 == 0) {
LAB_009b9f14:
      if ((0x5f < iVar1) || ((&DAT_01b39230)[iVar1] == 0)) goto LAB_009b9f26;
      uVar2 = 2;
    }
    else {
      uVar2 = FUN_00e03ea0("collect_item_04");
      FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x45c),uVar2);
      if (-1 < iVar1) goto LAB_009b9f14;
LAB_009b9f26:
      uVar2 = 1;
    }
    FUN_00ce4d70(uVar2);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x460),0);
    uVar2 = FUN_00ca9d10(iVar1);
    uVar2 = FUN_00ca9cf0(uVar2);
    FUN_00cf9770(*(undefined4 *)(param_1 + 0x470),uVar2,0,0xffffffff);
    iVar1 = iVar1 + 1;
    if (0x13 < iVar1) {
      puVar4 = (undefined4 *)(param_1 + 0x74);
      iVar1 = 0xf;
      do {
        FUN_00cb2310(*puVar4,0);
        puVar4 = puVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      local_3c = 0;
      _memset(local_38,0,0x38);
      puVar5 = (uint *)(param_1 + 0x118);
      iVar1 = 0;
      do {
        uVar3 = FUN_00dde2d0(0,0xf);
        uVar3 = uVar3 & 0xffff;
        if (*(int *)(local_38 + uVar3 * 4 + -4) == 0) {
          *puVar5 = uVar3;
          iVar1 = iVar1 + 1;
          *(undefined4 *)(local_38 + uVar3 * 4 + -4) = 1;
          puVar5 = puVar5 + 1;
        }
      } while (iVar1 < 0xf);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xb0),2);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xb4),2);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xb8),2);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xbc),2);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xc0),2);
      FUN_00ce4d70(7);
      iVar1 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x70));
      *(undefined4 *)(iVar1 + 0xc4) = 0x42e40000;
      iVar1 = FUN_00cb2760(*(undefined4 *)(param_1 + 0xc4));
      *(undefined4 *)(iVar1 + 0xfc) = 0x3f800000;
      iVar1 = FUN_00cb2760(*(undefined4 *)(param_1 + 200));
      *(undefined4 *)(iVar1 + 0xfc) = 0;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x38),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x50),0);
      FUN_00ce4d70(1);
      FUN_00cb2600(1);
      puVar4 = (undefined4 *)FUN_00dd3500(0x60,&DAT_01b7be50);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        cCustomObjCtrlManager::cCustomObjCtrlManager_17();
        *puVar4 = cCollectionDiskItemParts::vftable;
        puVar4[8] = 0xffffffff;
        puVar4[9] = 0xffffffff;
        Hw::cTexture::cTexture_6();
        puVar4[0x16] = 0xffffffff;
        puVar4[0x17] = 0;
        puVar4[7] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        puVar4[0xd] = 0;
        puVar4[0xe] = 0;
        FUN_00f972f0();
        puVar4[3] = "cCollectionDiskItemParts";
        FUN_00d29ca0(0x5d,7);
      }
      *(undefined4 **)(param_1 + 0x4c0) = puVar4;
      puVar4 = (undefined4 *)FUN_00dd3500(0x3c,&DAT_01b7be50);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        cCustomObjCtrlManager::cCustomObjCtrlManager_17();
        puVar4[0xd] = 0;
        *puVar4 = cCollectionIDItemParts::vftable;
        puVar4[0xc] = 0;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xe] = 0;
        puVar4[3] = "cCollectionIDItemParts";
        FUN_00d29ca0(0x5e,5);
      }
      *(undefined4 **)(param_1 + 0x4c4) = puVar4;
      puVar4 = (undefined4 *)FUN_00dd3500(0x28,&DAT_01b7be50);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        cCustomObjCtrlManager::cCustomObjCtrlManager_17();
        puVar4[9] = 0;
        *puVar4 = cCollectionLockedItemParts::vftable;
        puVar4[7] = 0;
        puVar4[8] = 0;
        puVar4[3] = "cCollectionLockedItemParts";
        FUN_00d29ca0(0x5f,5);
      }
      *(undefined4 **)(param_1 + 0x4c8) = puVar4;
      puVar4 = (undefined4 *)FUN_00dd3500(0x34,&DAT_01b7be50);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        cCustomObjCtrlManager::cCustomObjCtrlManager_17();
        *puVar4 = cCollectionTitleItemParts::vftable;
        puVar4[10] = 0;
        puVar4[8] = 0;
        puVar4[9] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        puVar4[3] = "cCollectionTitleItemParts";
        FUN_00d29ca0(0x60,5);
      }
      *(undefined4 **)(param_1 + 0x4cc) = puVar4;
      FUN_009b0280();
      if (*(int *)(param_1 + 0x4c0) != 0) {
        FUN_00cb2600(0);
      }
      if (*(int *)(param_1 + 0x4c4) != 0) {
        FUN_00cb2600(0);
      }
      if (*(int *)(param_1 + 0x4c8) != 0) {
        FUN_00cb2600(0);
      }
      if (*(int *)(param_1 + 0x4cc) != 0) {
        FUN_00cb2600(0);
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),0);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x4c),0);
      FUN_0099d9a0();
      FUN_00a00a60(0x21000,0);
      return;
    }
  } while( true );
}

// 009BA2F0  FUN_009ba2f0  size=172  [callgraph]
void __fastcall FUN_009ba2f0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  if (iVar1 / 5 < 1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0xf0);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x10c) = 1;
  }
  else {
    if ((iVar2 != 1) || (*(int *)(param_1 + 0x100) != 0)) {
      *(int *)(param_1 + 0xf8) = iVar1 + -5;
      *(int *)(param_1 + 0xf0) = iVar2 + -1;
      goto LAB_009ba384;
    }
    *(undefined4 *)(param_1 + 0x10c) = 1;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0x100) = 1;
  }
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(int *)(param_1 + 0xf8) = iVar1 + -5;
  FUN_0098cb40(0);
  FUN_0099d9a0();
LAB_009ba384:
  FUN_009b0280();
  FUN_00e5e050("core_se_sys_custom_item_window_corsor",0);
  return;
}

// 009BA3A0  FUN_009ba3a0  size=242  [callgraph]
void __fastcall FUN_009ba3a0(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = *(int *)(param_1 + 0xf8);
  if (*(int *)(param_1 + 0xec) + -1 <= iVar2 / 5) {
    return;
  }
  iVar1 = iVar2 + 5;
  *(int *)(param_1 + 0xf8) = iVar1;
  bVar3 = *(int *)(param_1 + 0x4ec) <= iVar1;
  iVar1 = *(int *)(param_1 + 0xf0);
  if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 0x108) = 1;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  else {
    if ((iVar1 != 2) || (*(int *)(param_1 + 0x100) == 0)) {
      if (bVar3) {
        *(int *)(param_1 + 0xf8) = iVar2;
        return;
      }
      *(int *)(param_1 + 0xf0) = iVar1 + 1;
      goto LAB_009ba42c;
    }
    *(undefined4 *)(param_1 + 0x108) = 1;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 3;
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  FUN_0098cb40(0x3f800000);
  FUN_0099d9a0();
  if (bVar3) {
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + -5;
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + -1;
    FUN_0099d9a0();
    *(undefined4 *)(param_1 + 0x1bc) = 1;
  }
LAB_009ba42c:
  FUN_009b0280();
  FUN_00e5e050("core_se_sys_custom_item_window_corsor",0);
  return;
}

// 009BFDB0  cCollectionSelectParts::vf14  size=3519  [class]
void __fastcall cCollectionSelectParts::vf14(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  float10 fVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined4 uVar17;
  float local_20;
  float local_1c;
  
  iVar12 = 0;
  do {
    FUN_00d38a30(0xf,iVar12,*(undefined4 *)(param_1 + 0x18));
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x14);
  switch(*(undefined4 *)(param_1 + 0xdc)) {
  case 0:
    iVar12 = FUN_00ce4dd0(1);
    if (iVar12 != 0) {
      puVar5 = (undefined4 *)FUN_00ccde20(*(undefined4 *)(param_1 + 0x34));
      *(undefined4 *)(param_1 + 0x4a0) = *puVar5;
      *(undefined4 *)(param_1 + 0x4a4) = puVar5[1];
      iVar12 = FUN_00f98a90();
      *(float *)(param_1 + 0x4b0) = (float)iVar12 * 0.5;
      iVar9 = FUN_00f98aa0();
      iVar12 = *(int *)(param_1 + 0x4c4);
      *(float *)(param_1 + 0x4b4) = (float)iVar9 * 0.5;
      if (iVar12 != 0) {
        uVar17 = *(undefined4 *)(param_1 + 0x4a0);
        uVar1 = *(undefined4 *)(param_1 + 0x4a4);
        *(undefined4 *)(iVar12 + 0x30) = 1;
        *(undefined4 *)(iVar12 + 0x34) = uVar17;
        *(undefined4 *)(iVar12 + 0x38) = uVar1;
      }
      iVar12 = *(int *)(param_1 + 0x4c8);
      if (iVar12 != 0) {
        uVar17 = *(undefined4 *)(param_1 + 0x4a0);
        uVar1 = *(undefined4 *)(param_1 + 0x4a4);
        *(undefined4 *)(iVar12 + 0x1c) = 1;
        *(undefined4 *)(iVar12 + 0x20) = uVar17;
        *(undefined4 *)(iVar12 + 0x24) = uVar1;
      }
      iVar12 = *(int *)(param_1 + 0x4cc);
      if (iVar12 != 0) {
        uVar17 = *(undefined4 *)(param_1 + 0x4a0);
        uVar1 = *(undefined4 *)(param_1 + 0x4a4);
        *(undefined4 *)(iVar12 + 0x28) = 1;
        *(undefined4 *)(iVar12 + 0x2c) = uVar17;
        *(undefined4 *)(iVar12 + 0x30) = uVar1;
      }
      FUN_0099d9a0();
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x4c),1);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x48),10);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xd4),10);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0xd8),10);
      *(undefined4 *)(param_1 + 0xdc) = 1;
    }
    break;
  case 1:
    if ((*(int *)(param_1 + 0x158) < 0xf) &&
       (*(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1, 3 < *(int *)(param_1 + 0x154))) {
      *(undefined4 *)(param_1 + 0x154) = 0;
      iVar12 = *(int *)(param_1 + 0x118 + *(int *)(param_1 + 0x158) * 4);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x74 + iVar12 * 4),1);
      FUN_00ce4ce0(*(undefined4 *)(param_1 + 0x74 + iVar12 * 4),2);
      FUN_00e5e050("core_se_sys_icon_open",0);
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
    }
    bVar3 = true;
    puVar5 = (undefined4 *)(param_1 + 0x74);
    iVar12 = 0x14;
    do {
      iVar9 = FUN_00cb24b0(*puVar5);
      if (iVar9 == 0) {
        bVar3 = false;
      }
      FUN_00cb2480(*puVar5);
      puVar5 = puVar5 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    if ((bVar3) && (0xe < *(int *)(param_1 + 0x158))) {
      *(undefined4 *)(param_1 + 0x15c) = 1;
      *(undefined4 *)(param_1 + 0xdc) = 2;
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x20),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x2c),1);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x2c),1,3);
      iVar12 = *(int *)(param_1 + 0xf8);
      if ((iVar12 < 0) || ((0x5f < iVar12 || ((&DAT_01b39230)[iVar12] == 0)))) {
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x24),1);
        if (*(int *)(param_1 + 0x4cc) != 0) {
          FUN_00cb2600(1);
          FUN_00ce4d70(1);
        }
        FUN_00cb2310(*(undefined4 *)(param_1 + 0x30),1);
        uVar17 = 8;
LAB_009c0055:
        FUN_00ce4d70(uVar17);
      }
      else if (*(int *)(param_1 + 0x4c8) != 0) {
        FUN_00cb2600(1);
        uVar17 = 1;
        goto LAB_009c0055;
      }
      uVar11 = 0;
      uVar6 = 0x4d;
      iVar12 = FUN_009c73f0(6);
      if (iVar12 != 0) {
        uVar6 = 0x55;
      }
      iVar12 = FUN_009c73f0(7);
      uVar13 = uVar6;
      if (iVar12 != 0) {
        uVar13 = uVar6 + 8;
        iVar12 = FUN_009c73f0(6);
        if (iVar12 == 0) {
          uVar13 = uVar6 + 0x10;
        }
      }
      if (0x4d < uVar13) {
        uVar13 = uVar13 + 3;
      }
      iVar12 = 0;
      if (uVar13 == 0) {
LAB_009c00f6:
        pcVar15 = "%d/%d";
LAB_009c0102:
        FUN_0095c6a0(&local_20,pcVar15,uVar11,uVar13);
      }
      else {
        do {
          if (iVar12 < 0) {
            iVar9 = 0;
          }
          else if (iVar12 < 0x60) {
            iVar9 = (&DAT_01b39230)[iVar12];
          }
          else {
            iVar9 = 0;
          }
          iVar12 = iVar12 + 1;
          uVar11 = uVar11 + (iVar9 == 0);
        } while (iVar12 < (int)uVar13);
        if (uVar11 != 1) {
          if (9 < uVar11 - 10) goto LAB_009c00f6;
          pcVar15 = "#%d/%d";
          uVar11 = uVar11 - 10;
          goto LAB_009c0102;
        }
        FUN_0095c6a0(&local_20,&DAT_01658350,uVar13);
      }
      FUN_00cce090(*(undefined4 *)(param_1 + 0x38),&local_20);
      FUN_00cce090(*(undefined4 *)(param_1 + 0x3c),&local_20);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x38),1);
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x3c),1);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x38),1,3);
      FUN_00cce0e0(*(undefined4 *)(param_1 + 0x3c),1,3);
    }
    break;
  case 2:
    iVar12 = 0;
    do {
      if ((*(int *)(param_1 + 0x10c) != 0) || (*(int *)(param_1 + 0x108) != 0)) break;
      if (*(int *)(param_1 + 0x100) == 0) {
        if (4 < iVar12) goto LAB_009c019f;
      }
      else if (iVar12 < 0xf) {
LAB_009c019f:
        cVar4 = FUN_00d0d3e0(0xf,iVar12);
        if (cVar4 != '\0') {
          iVar9 = (*(int *)(param_1 + 0xf0) * -5 - *(int *)(param_1 + 0xf8) % 5) + iVar12;
          if (iVar9 != 0) {
            *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + iVar9;
            *(int *)(param_1 + 0xf0) = iVar12 / 5;
            FUN_009b0280();
          }
          FUN_00e5e050("core_se_sys_custom_item_window_corsor",0);
          if (iVar12 != -1) goto switchD_009bfde4_default;
          break;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 0x14);
    if (*(int *)(param_1 + 0x10c) == 0) {
      if (*(int *)(param_1 + 0x108) == 0) {
        cVar4 = FUN_00cac7e0(0x40008,0);
        if ((cVar4 == '\0') && (cVar4 = FUN_00cac9c0(0), cVar4 == '\0')) {
          cVar4 = FUN_00cac7e0(0x80004,0);
          if ((cVar4 == '\0') && (cVar4 = FUN_00cac9c0(1), cVar4 == '\0')) {
            cVar4 = FUN_00cac7e0(0x10001,0);
            if (cVar4 == '\0') {
              cVar4 = FUN_00cac7e0(0x20002,0);
              if (cVar4 == '\0') {
                cVar4 = FUN_00ce12f0(0);
                if (cVar4 == '\0') {
                  cVar4 = FUN_00ce1360(0);
                  if ((cVar4 != '\0') || (cVar4 = FUN_00cac960(), cVar4 != '\0')) {
                    (**(code **)(*(int *)(param_1 + 0x4dc) + 4))(0x35,0,1);
                    *(undefined4 *)(param_1 + 0xdc) = 7;
                    FUN_00e5e050("core_se_sys_cancel",0);
                  }
                }
                else {
                  iVar12 = *(int *)(param_1 + 0xf8);
                  if (((((iVar12 < 0) || (0x5f < iVar12)) || ((&DAT_01b39230)[iVar12] == 0)) &&
                      (iVar12 < *(int *)(param_1 + 0x4ec))) &&
                     (((iVar12 = FUN_00ca9d10(iVar12), iVar12 == 3 ||
                       (iVar12 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8)), iVar12 == 5)) ||
                      (iVar12 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8)), iVar12 == 7)))) {
                    if (*(int *)(param_1 + 0x4c0) != 0) {
                      uVar6 = FUN_00ca9e50(*(undefined4 *)(param_1 + 0xf8));
                      iVar12 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
                      if (iVar12 == 5) {
                        uVar6 = uVar6 + 0x17;
                      }
                      else {
                        iVar12 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
                        if (iVar12 == 7) {
                          uVar6 = uVar6 + 0x1c;
                        }
                      }
                      if (uVar6 < 0x21) {
                        *(uint *)(*(int *)(param_1 + 0x4c0) + 0x20) = uVar6;
                      }
                    }
                    *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
                    *(undefined4 *)(param_1 + 0xdc) = 3;
                    FUN_00e5e050("core_se_sys_decide_s",0);
                  }
                }
              }
              else {
                iVar12 = *(int *)(param_1 + 0xf8);
                if (iVar12 + 1 < *(int *)(param_1 + 0x4ec)) {
                  if (iVar12 % 5 == 4) {
                    *(int *)(param_1 + 0xf8) = iVar12 + -4;
                    goto LAB_009c03c5;
                  }
                  *(int *)(param_1 + 0xf8) = iVar12 + 1;
                  FUN_009b0280();
                  FUN_00e5e050("core_se_sys_custom_item_window_corsor",0);
                }
              }
            }
            else {
              iVar12 = *(int *)(param_1 + 0xf8);
              if (iVar12 != 0) {
                if (iVar12 % 5 == 0) {
                  *(int *)(param_1 + 0xf8) = iVar12 + 4;
                  goto LAB_009c0357;
                }
                *(int *)(param_1 + 0xf8) = iVar12 + -1;
                FUN_009b0280();
                FUN_00e5e050("core_se_sys_custom_item_window_corsor",0);
              }
            }
          }
          else {
LAB_009c03c5:
            FUN_009ba3a0();
          }
        }
        else {
LAB_009c0357:
          FUN_009ba2f0();
        }
      }
      else {
        fVar2 = *(float *)(param_1 + 0x104) + 1.0;
        *(float *)(param_1 + 0x104) = fVar2;
        if (10.0 < fVar2) {
          *(undefined4 *)(param_1 + 0x104) = 0x41200000;
          *(undefined4 *)(param_1 + 0x108) = 0;
        }
        FUN_0098cb40(1.0 - *(float *)(param_1 + 0x104) * 0.1);
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x104) + 1.0;
      *(float *)(param_1 + 0x104) = fVar2;
      if (10.0 < fVar2) {
        *(undefined4 *)(param_1 + 0x104) = 0x41200000;
        *(undefined4 *)(param_1 + 0x10c) = 0;
      }
      FUN_0098cb40(*(float *)(param_1 + 0x104) * 0.1);
    }
    break;
  case 3:
    iVar12 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x6c));
    fVar2 = *(float *)(param_1 + 0x1ac) - 0.1;
    *(float *)(param_1 + 0x1ac) = fVar2;
    if (fVar2 <= 0.0) {
      *(undefined4 *)(param_1 + 0x1ac) = 0;
      iVar9 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
      if (iVar9 == 1) {
        FUN_0099de40();
      }
      *(undefined4 *)(param_1 + 0xdc) = 4;
    }
    local_20 = (*(float *)(param_1 + 0x4a0) - *(float *)(param_1 + 0x4b0)) *
               *(float *)(param_1 + 0x1ac) + *(float *)(param_1 + 0x4b0);
    local_1c = *(float *)(param_1 + 0x1ac) *
               (*(float *)(param_1 + 0x4a4) - *(float *)(param_1 + 0x4b4)) +
               *(float *)(param_1 + 0x4b4);
    uVar17 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
    switch(uVar17) {
    case 0:
    case 4:
    case 6:
switchD_009c06fd_caseD_0:
      iVar9 = *(int *)(param_1 + 0x4cc);
      if (iVar9 != 0) {
        *(undefined4 *)(iVar9 + 0x28) = 1;
        *(float *)(iVar9 + 0x2c) = local_20;
        *(float *)(iVar9 + 0x30) = local_1c;
        *(undefined4 *)(iVar12 + 0xfc) = *(undefined4 *)(param_1 + 0x1ac);
        goto switchD_009bfde4_default;
      }
      break;
    case 1:
switchD_009c06fd_caseD_1:
      iVar9 = *(int *)(param_1 + 0x4c4);
      if (iVar9 != 0) {
        *(undefined4 *)(iVar9 + 0x30) = 1;
        *(float *)(iVar9 + 0x34) = local_20;
        *(float *)(iVar9 + 0x38) = local_1c;
      }
    }
    goto switchD_009c06fd_caseD_2;
  case 4:
    FUN_0098c820();
    break;
  case 5:
    iVar12 = FUN_00cb2760(*(undefined4 *)(param_1 + 0x6c));
    fVar2 = *(float *)(param_1 + 0x1ac) + 0.1;
    *(float *)(param_1 + 0x1ac) = fVar2;
    if (!NAN(fVar2) && 1.0 < fVar2 != (fVar2 == 1.0)) {
      *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
      if (*(int *)(param_1 + 0x4c0) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x4c0) + 0x20) = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0xdc) = 2;
    }
    local_20 = (*(float *)(param_1 + 0x4a0) - *(float *)(param_1 + 0x4b0)) *
               *(float *)(param_1 + 0x1ac) + *(float *)(param_1 + 0x4b0);
    local_1c = *(float *)(param_1 + 0x1ac) *
               (*(float *)(param_1 + 0x4a4) - *(float *)(param_1 + 0x4b4)) +
               *(float *)(param_1 + 0x4b4);
    uVar17 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
    switch(uVar17) {
    case 0:
    case 4:
    case 6:
      goto switchD_009c06fd_caseD_0;
    case 1:
      goto switchD_009c06fd_caseD_1;
    }
switchD_009c06fd_caseD_2:
    *(undefined4 *)(iVar12 + 0xfc) = *(undefined4 *)(param_1 + 0x1ac);
    break;
  case 6:
    iVar12 = FUN_009c5690();
    if ((iVar12 == 0) && (DAT_018b5758 == 0)) {
      *(undefined4 *)(param_1 + 0xdc) = 8;
      FUN_00a4ac40(0xf01,"START",0xffffffff);
    }
    break;
  case 7:
    iVar12 = FUN_00999fa0();
    if (iVar12 == 2) {
      iVar12 = *(int *)(param_1 + 0xf8);
      if (((-1 < iVar12) && (((0x5f < iVar12 || ((&DAT_01b39230)[iVar12] == 0)) && (-1 < iVar12))))
         && ((iVar12 < 0x60 && ((&DAT_01b393b0)[iVar12] != 0)))) {
        *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) | 1;
        FUN_0098be20(iVar12,0);
      }
      if (*(int *)(param_1 + 0x1b0) == 0) {
        *(undefined4 *)(param_1 + 0xdc) = 8;
        FUN_00a4ac40(0xf01,"PF01_START",0xffffffff);
      }
      else {
        *(undefined4 *)(param_1 + 0xdc) = 6;
        FUN_0098c350();
        FUN_009c8d50();
      }
    }
    else if (iVar12 == 1) {
      *(undefined4 *)(param_1 + 0xdc) = 2;
    }
  }
switchD_009bfde4_default:
  FUN_0098c930();
  FUN_009b0bf0(*(undefined4 *)(param_1 + 0xf8));
  iVar12 = FUN_00a81330();
  if (iVar12 == 0) goto LAB_009c0ab1;
  FUN_00a81330();
  piVar7 = (int *)FUN_00a7c8a0();
  if (piVar7 == (int *)0x0) goto LAB_009c0ab1;
  iVar12 = FUN_00ca9da0(*(undefined4 *)(param_1 + 0xf8));
  if ((((iVar12 == 0) || (*(int *)(iVar12 + 0x20) == 0xaffff)) ||
      (*(int *)(iVar12 + 0x20) != piVar7[0x12d])) ||
     (((iVar9 = *(int *)(param_1 + 0xf8), -1 < iVar9 && (iVar9 < 0x60)) &&
      ((&DAT_01b39230)[iVar9] != 0)))) {
    pcVar8 = *(code **)(*piVar7 + 0x20);
  }
  else {
    pcVar8 = *(code **)(*piVar7 + 0x1c);
  }
  (*pcVar8)();
  FUN_00a81330();
  iVar9 = FUN_00a7c800();
  if ((*(int *)(param_1 + 0xdc) == 2) || (5 < *(int *)(param_1 + 0xdc))) {
    fVar14 = (float10)FUN_00ddba30(*(float *)(iVar9 + 0x94) + 0.004);
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    *(float *)(param_1 + 500) = (float)fVar14;
  }
  *(undefined4 *)(iVar9 + 0x50) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(iVar9 + 0x54) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(iVar9 + 0x58) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(iVar9 + 0x5c) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(iVar9 + 0x90) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(iVar9 + 0x94) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(param_1 + 0x1fc);
  iVar10 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
  if (iVar10 == 2) {
    *(undefined4 *)(iVar9 + 0x50) = *(undefined4 *)(param_1 + 0x210);
    *(undefined4 *)(iVar9 + 0x54) = *(undefined4 *)(param_1 + 0x214);
    *(undefined4 *)(iVar9 + 0x58) = *(undefined4 *)(param_1 + 0x218);
    *(undefined4 *)(iVar9 + 0x5c) = *(undefined4 *)(param_1 + 0x21c);
    goto LAB_009c0ab1;
  }
  iVar10 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
  if ((((iVar10 != 3) && (iVar10 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8)), iVar10 != 5)) &&
      (iVar10 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8)), iVar10 != 7)) ||
     (piVar7[0x12d] != *(int *)(iVar12 + 0x20))) goto LAB_009c0ab1;
  iVar12 = FUN_00ca9e50(*(undefined4 *)(param_1 + 0xf8));
  local_20 = (float)(iVar12 + 1);
  puVar16 = &DAT_01b35390;
  (**(code **)(*piVar7 + 4))(&DAT_01b35390);
  FUN_00dd6d80(puVar16);
  iVar12 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
  if (iVar12 == 3) {
    FUN_005e9780(local_20);
  }
  else {
    iVar12 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
    if (iVar12 == 5) {
      uVar17 = 0;
    }
    else {
      iVar12 = FUN_00ca9d10(*(undefined4 *)(param_1 + 0xf8));
      if (iVar12 != 7) goto LAB_009c0a4f;
      uVar17 = 1;
    }
    FUN_005ea3d0(uVar17);
  }
LAB_009c0a4f:
  fVar14 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x204) + 0.004);
  *(float *)(param_1 + 0x204) = (float)fVar14;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(float *)(param_1 + 500) = (float)fVar14;
  *(undefined4 *)(iVar9 + 0x90) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(iVar9 + 0x94) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(iVar9 + 0x98) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(param_1 + 0x1fc);
LAB_009c0ab1:
  if (((*(int *)(param_1 + 0x110) != 0) && (*(int *)(param_1 + 0x114) != 0)) &&
     (iVar12 = FUN_00cb2e50(*(undefined4 *)(param_1 + 0x24)), iVar12 == 0)) {
    fVar14 = (float10)FUN_0098caa0(*(undefined4 *)(param_1 + 0x24));
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x28),(float)fVar14);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x28),1);
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (*(int *)(param_1 + 0x4c0) != 0) {
    FUN_00cb2740(1.0 - *(float *)(param_1 + 0x1ac));
    (**(code **)(**(int **)(param_1 + 0x4c0) + 4))();
  }
  if (*(int **)(param_1 + 0x4c4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c4) + 4))();
  }
  if (*(int **)(param_1 + 0x4c8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4c8) + 4))();
  }
  if (*(int **)(param_1 + 0x4cc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x4cc) + 4))();
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  return;
}


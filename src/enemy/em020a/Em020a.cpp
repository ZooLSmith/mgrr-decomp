// src/enemy/em020a/Em020a.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00546F50..00AB7570, 91 functions

#include "mgrr.h"
#include "Em020a.h"

// 00546F50  FUN_00546f50  size=38  [callgraph]
void __fastcall FUN_00546f50(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xdd0) + 8))(0x41200000,0,0);
  return;
}

// 00547010  FUN_00547010  size=32  [callgraph]
void FUN_00547010(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 005470E0  Em020a::setEmSetInfo  size=54  [class]
undefined4 __thiscall Em020a::setEmSetInfo(int param_1,int param_2)

{
  FUN_00aa0920(*(undefined4 *)(param_2 + 0x5c));
  if (*(int *)(*(int *)(param_1 + 0x7d8) + 0x810) != 0) {
    FUN_00a8d580(0x1000000);
  }
  return 1;
}

// 00547120  Em020a::vf54  size=79  [class]
void __fastcall Em020a::vf54(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x1e00);
  fVar2 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x1e08);
  *(float *)(param_1 + 0x1d50) = *(float *)(param_1 + 0x1d50) + fVar1;
  *(float *)(param_1 + 0x1d58) = *(float *)(param_1 + 0x1d58) + fVar2;
  *(float *)(param_1 + 0x1d60) = *(float *)(param_1 + 0x1d60) + fVar1;
  *(float *)(param_1 + 0x1d68) = fVar2 + *(float *)(param_1 + 0x1d68);
  BehaviorEmBase::vf54();
  return;
}

// 00547170  Em020a::vf6C  size=115  [class]
void __thiscall Em020a::vf6C(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x50) - *param_2;
  fVar2 = *(float *)(param_1 + 0x58) - param_2[2];
  Bh0064::vf6C(param_2);
  *(float *)(param_1 + 0x1d50) = *(float *)(param_1 + 0x1d50) + fVar1;
  *(float *)(param_1 + 0x1d58) = *(float *)(param_1 + 0x1d58) + fVar2;
  *(float *)(param_1 + 0x1d60) = *(float *)(param_1 + 0x1d60) + fVar1;
  *(float *)(param_1 + 0x1d68) = fVar2 + *(float *)(param_1 + 0x1d68);
  return;
}

// 005471F0  Em020a::vf70  size=77  [class]
void __thiscall Em020a::vf70(int param_1,float *param_2)

{
  Bh0064::vf70(param_2);
  *(float *)(param_1 + 0x1d50) = *param_2 + *(float *)(param_1 + 0x1d50);
  *(float *)(param_1 + 0x1d58) = param_2[2] + *(float *)(param_1 + 0x1d58);
  *(float *)(param_1 + 0x1d60) = *(float *)(param_1 + 0x1d60) + *param_2;
  *(float *)(param_1 + 0x1d68) = param_2[2] + *(float *)(param_1 + 0x1d68);
  return;
}

// 00547240  Em020a::vf14C  size=5  [class]
undefined4 Em020a::vf14C(void)

{
  return 0;
}

// 00547250  Em020a::vf150  size=256  [class]
void __thiscall Em020a::vf150(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    *(int *)(param_1 + 0xdc0) = param_2;
    if (param_2 == 0xe) {
      FUN_00a8caf0(0x16,0,0,0);
      return;
    }
    if (param_2 == 0x11) {
      (**(code **)(*(int *)(param_1 + 0x1640) + 8))(0x41200000,0,0);
      if (*(int *)(param_1 + 0x15f0) != 0) {
        FUN_00ad0a90();
      }
      pcVar1 = *(code **)(*(int *)(param_1 + 0x1640) + 8);
      *(undefined4 *)(param_1 + 0x15f0) = 0;
      (*pcVar1)(0x41200000,0,0);
      *(undefined4 *)(param_1 + 0x90) = 0;
      FUN_00a8caf0(0x17,0,0,0);
      return;
    }
    if (((param_2 == 0x12) || (param_2 == 0x14)) || (param_2 == 0x13)) {
      FUN_00a8caf0(0x19,0,0,0);
    }
  }
  return;
}

// 00547350  Em020a::vf158  size=41  [class]
undefined4 Em020a::vf158(int param_1)

{
  int iVar1;
  
  if (((param_1 == 0x12) || (param_1 == 0x14)) || (param_1 == 0x13)) {
    iVar1 = FUN_00ac82f0();
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

// 00547380  Em020a::vf184  size=6  [class]
undefined4 Em020a::vf184(void)

{
  return 0xffffffff;
}

// 00547390  Em020a::vf188  size=43  [class]
void Em020a::vf188(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 005473C0  FUN_005473c0  size=382  [between]
void __fastcall FUN_005473c0(int param_1)

{
  *(undefined4 *)(param_1 + 0xe88) = 0;
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(float *)(param_1 + 0xe84) < 0.0)) {
    if (*(int *)(param_1 + 0x20b0) == 0) {
      FUN_00a8caf0(5,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 1) {
      FUN_00a8caf0(6,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 2) {
      FUN_00a8caf0(8,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 3) {
      FUN_00a8caf0(7,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 4) {
      FUN_00a8caf0(9,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 5) {
      FUN_00a8caf0(1,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 6) {
      FUN_00a8caf0(4,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 7) {
      FUN_00a8caf0(6,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 8) {
      FUN_00a8caf0(1,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 9) {
      FUN_00a8caf0(7,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 10) {
      FUN_00a8caf0(9,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 0xb) {
      FUN_00a8caf0(1,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 0xc) {
      FUN_00a8caf0(4,0,0,0);
    }
    *(int *)(param_1 + 0x20b0) = *(int *)(param_1 + 0x20b0) + 1;
    if (0xc < *(int *)(param_1 + 0x20b0)) {
      *(undefined4 *)(param_1 + 0x20b0) = 0;
    }
  }
  return;
}

// 00547550  FUN_00547550  size=382  [between]
void __fastcall FUN_00547550(int param_1)

{
  *(undefined4 *)(param_1 + 0xe88) = 0;
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(float *)(param_1 + 0xe84) < 0.0)) {
    if (*(int *)(param_1 + 0x20b0) == 0) {
      FUN_00a8caf0(5,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 1) {
      FUN_00a8caf0(6,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 2) {
      FUN_00a8caf0(8,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 3) {
      FUN_00a8caf0(7,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 4) {
      FUN_00a8caf0(9,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 5) {
      FUN_00a8caf0(1,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 6) {
      FUN_00a8caf0(4,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 7) {
      FUN_00a8caf0(6,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 8) {
      FUN_00a8caf0(1,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 9) {
      FUN_00a8caf0(7,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 10) {
      FUN_00a8caf0(9,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 0xb) {
      FUN_00a8caf0(1,0,0,0);
    }
    if (*(int *)(param_1 + 0x20b0) == 0xc) {
      FUN_00a8caf0(4,0,0,0);
    }
    *(int *)(param_1 + 0x20b0) = *(int *)(param_1 + 0x20b0) + 1;
    if (0xc < *(int *)(param_1 + 0x20b0)) {
      *(undefined4 *)(param_1 + 0x20b0) = 0;
    }
  }
  return;
}

// 00547760  FUN_00547760  size=125  [between]
void __fastcall FUN_00547760(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x51,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1634) = 0;
    *(undefined4 *)(param_1 + 0x6ec) = 0;
    *(undefined4 *)(param_1 + 0x20e0) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a8caf0(0,0,0,0);
  *(undefined4 *)(param_1 + 0x20e8) = *(undefined4 *)(param_1 + 0x54);
  return;
}

// 00547800  FUN_00547800  size=223  [between]
void __fastcall FUN_00547800(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x35,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x1bb] = 0;
    param_1[0x838] = 0;
    param_1[0x58d] = 1;
    if (param_1[0x57c] != 0) {
      FUN_00ad0a90();
    }
    pcVar1 = *(code **)(param_1[0x590] + 8);
    param_1[0x57c] = 0;
    (*pcVar1)(0x41200000,0,0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005478dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00547930  FUN_00547930  size=95  [between]
void FUN_00547930(float *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xf0015;
  uVar1 = FUN_00e03ea0("NEWTOWER",0xf0015);
  iVar2 = FUN_00a18d70(uVar1,uVar3);
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      D3DXVec3TransformNormal(param_1,param_2,iVar2 + 0x10);
      *param_1 = *(float *)(iVar2 + 0x40) + *param_1;
      param_1[1] = *(float *)(iVar2 + 0x44) + param_1[1];
      param_1[2] = *(float *)(iVar2 + 0x48) + param_1[2];
    }
  }
  return;
}

// 00547990  FUN_00547990  size=104  [between]
void FUN_00547990(float *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xf0015;
  uVar1 = FUN_00e03ea0("NEWTOWER",0xf0015);
  iVar2 = FUN_00a18d70(uVar1,uVar3);
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      iVar2 = FUN_00a12210(1);
      D3DXVec3TransformNormal(param_1,param_2,iVar2 + 0x10);
      *param_1 = *param_1 + *(float *)(iVar2 + 0x40);
      param_1[1] = *(float *)(iVar2 + 0x44) + param_1[1];
      param_1[2] = *(float *)(iVar2 + 0x48) + param_1[2];
    }
  }
  return;
}

// 00547B00  FUN_00547b00  size=194  [between]
void FUN_00547b00(void)

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

// 00547BD0  FUN_00547bd0  size=219  [between]
void __fastcall FUN_00547bd0(int param_1)

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

// 00547CB0  Em020a::vf1A4  size=135  [class]
void __thiscall Em020a::vf1A4(int *param_1,int *param_2,byte param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  if (((param_3 & 1) != 0) && (iVar2 != 0)) {
    iVar3 = FUN_00ac45b0();
    if (iVar2 == iVar3) {
      param_1[0x771] = 1;
      param_1[0x772] = 1;
    }
  }
  if (((*param_2 == 0xbb) || (*param_2 == 0xbc)) && ((param_3 & 0xe) != 0)) {
    pcVar1 = *(code **)(*param_1 + 0x214);
    param_1[0x83f] = 1;
    (*pcVar1)(0x1e,0x3c23d70a,0);
  }
  return;
}

// 00547E70  FUN_00547e70  size=28  [between]
void __fastcall FUN_00547e70(int param_1)

{
  FUN_00a8caf0(0,0,0,0);
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  return;
}

// 00547E90  FUN_00547e90  size=28  [between]
void __fastcall FUN_00547e90(int param_1)

{
  FUN_00a8caf0(10,0,0,0);
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  return;
}

// 00547EB0  FUN_00547eb0  size=50  [between]
void __fastcall FUN_00547eb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 != 0xe) {
    FUN_00a8caf0(0xe,0,0,0);
  }
  *(undefined4 *)(param_1 + 0x4a0) = 1;
  DAT_01bea060 = DAT_01bea060 | 0x8000000;
  return;
}

// 00547EF0  Em020a::vf34C  size=90  [class]
void __fastcall Em020a::vf34C(int param_1)

{
  FUN_00a8caf0(0,0,0,0);
  if (*(int *)(param_1 + 0x20e0) != 0) {
    FUN_00a8caf0(2,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00a8caf0(0xf,0,0,0);
  }
  if (*(int *)(param_1 + 0x4a0) == 2) {
    FUN_00a8caf0(0x10,0,0,0);
  }
  return;
}

// 00547F50  Em020a::vf208  size=993  [class]
float * __thiscall Em020a::vf208(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float unaff_EDI;
  undefined4 *puVar4;
  float fStack_2c;
  float fStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = FUN_00a12210(6);
  *param_2 = *(float *)(iVar1 + 0x40);
  param_2[1] = *(float *)(iVar1 + 0x44);
  param_2[2] = *(float *)(iVar1 + 0x48);
  param_2[3] = *(float *)(iVar1 + 0x4c);
  fVar3 = param_2[1];
  param_2[1] = fVar3 - 2.0;
  if (fVar3 - 2.0 < 21.5) {
    param_2[1] = 21.5;
  }
  if (*(int *)(param_1 + 0x618) == 0xc) {
    iVar1 = FUN_00a12210(6);
    *param_2 = *(float *)(iVar1 + 0x40);
    param_2[1] = *(float *)(iVar1 + 0x44);
    param_2[2] = *(float *)(iVar1 + 0x48);
    param_2[3] = *(float *)(iVar1 + 0x4c);
    param_2[1] = param_2[1] + 1.0;
  }
  if ((*(int *)(param_1 + 0x618) == 6) || (*(int *)(param_1 + 0x618) == 7)) {
    iVar1 = FUN_00a12210(6);
    *param_2 = *(float *)(iVar1 + 0x40);
    param_2[1] = *(float *)(iVar1 + 0x44);
    param_2[2] = *(float *)(iVar1 + 0x48);
    param_2[3] = *(float *)(iVar1 + 0x4c);
    param_2[1] = param_2[1] + 1.0;
  }
  if ((*(int *)(param_1 + 0x618) == 8) && (iVar1 = FUN_00a8c760(10), iVar1 != 0)) {
    local_20 = 0x40c00000;
    local_1c = 0;
    local_18 = 0;
    iVar1 = FUN_00a12210(0x13);
    D3DXVec3TransformNormal(param_2,&local_20,iVar1 + 0x10);
    *param_2 = *param_2 + *(float *)(iVar1 + 0x40);
    param_2[1] = *(float *)(iVar1 + 0x44) + param_2[1];
    param_2[2] = *(float *)(iVar1 + 0x48) + param_2[2];
    if (param_2[1] < 21.5) {
      param_2[1] = 21.5;
    }
    fVar3 = *(float *)(*(int *)(param_1 + 0xa84) + 0x58) + 5.0;
    if (param_2[2] < fVar3) {
      param_2[1] = fVar3;
    }
  }
  if ((*(int *)(param_1 + 0x618) == 9) && (*(int *)(param_1 + 0x61c) < 2)) {
    local_20 = 0x40c00000;
    local_1c = 0;
    local_18 = 0;
    iVar1 = FUN_00a12210(0x13);
    D3DXVec3TransformNormal(param_2,&local_20,iVar1 + 0x10);
    *param_2 = *param_2 + *(float *)(iVar1 + 0x40);
    param_2[1] = *(float *)(iVar1 + 0x44) + param_2[1];
    param_2[2] = *(float *)(iVar1 + 0x48) + param_2[2];
    if (param_2[1] < 21.5) {
      param_2[1] = 21.5;
    }
    fVar3 = *(float *)(*(int *)(param_1 + 0xa84) + 0x58) + 5.0;
    if (param_2[2] < fVar3) {
      param_2[1] = fVar3;
    }
  }
  if (*(int *)(param_1 + 0x4a0) == 2) {
    iVar1 = FUN_00a12210(6);
    *param_2 = *(float *)(iVar1 + 0x40);
    param_2[1] = *(float *)(iVar1 + 0x44);
    param_2[2] = *(float *)(iVar1 + 0x48);
    param_2[3] = *(float *)(iVar1 + 0x4c);
    param_2[1] = param_2[1] + 5.0;
    if (*(int *)(param_1 + 0x618) == 0x14) {
      iVar2 = FUN_00a8cab0();
      if (iVar2 == 0x39) {
        fVar3 = param_2[1] + 1.0;
      }
      else {
        fVar3 = param_2[1] - 5.0;
      }
      param_2[1] = fVar3;
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0x41f00000;
    if (*(float *)(*(int *)(param_1 + 0xa84) + 0x54) < *(float *)(param_1 + 0x44) + 70.0) {
      local_18 = 0x41200000;
    }
    if ((*(int *)(param_1 + 0x618) == 0x14) && (*(int *)(param_1 + 0x940) != 0)) {
      local_18 = 0;
    }
    fVar3 = (float)(iVar1 + 0x10);
    puVar4 = &local_20;
    D3DXVec3TransformNormal(puVar4);
    *param_2 = *param_2 + fStack_2c;
    param_2[2] = param_2[2] + fStack_24;
    D3DXVec3TransformNormal(&stack0xffffffc4,&stack0xffffffc4,param_1 + 0x10);
    *param_2 = (float)puVar4 + *param_2;
    param_2[1] = fVar3 + param_2[1];
    param_2[2] = param_2[2] + unaff_EDI;
    param_2[3] = param_2[3] + 0.0;
  }
  return param_2;
}

// 00548340  FUN_00548340  size=94  [between]
undefined4 __fastcall FUN_00548340(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x618) == 8) {
    iVar1 = FUN_00a8c760(10);
    if (iVar1 != 0) {
      uVar3 = 4;
    }
  }
  if ((((*(int *)(param_1 + 0x618) == 9) && (1 < *(int *)(param_1 + 0x61c))) &&
      (*(int *)(param_1 + 0x61c) < 0xc)) && (uVar3 = 1, *(int *)(param_1 + 0x948) == 0)) {
    uVar3 = 2;
  }
  uVar2 = 3;
  if (*(int *)(param_1 + 0x20e0) == 0) {
    uVar2 = uVar3;
  }
  return uVar2;
}

// 005483F0  FUN_005483f0  size=45  [between]
void __fastcall FUN_005483f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2268) = 2;
  *(undefined4 *)(param_1 + 0x226c) = 0;
  *(undefined4 *)(param_1 + 0x2270) = 0;
  *(undefined4 *)(param_1 + 0x2274) = 0;
  *(undefined4 *)(param_1 + 0x2278) = 3;
  return;
}

// 00548420  FUN_00548420  size=210  [between]
void __fastcall FUN_00548420(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x227c) != 0) {
    uVar4 = 0xf0018;
    uVar2 = FUN_00e03ea0("NEWTOWER",0xf0018);
    iVar3 = FUN_00a18d70(uVar2,uVar4);
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c8a0();
      if ((iVar3 != 0) && (*(int *)(param_1 + 0xa84) != 0)) {
        fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - 120.0;
        if (fVar1 <= 0.0) {
          *(undefined4 *)(param_1 + 0x227c) = 0;
          return;
        }
        fVar1 = (((174.0 - fVar1 * 1.2) + 7.0) - *(float *)(param_1 + 0x2280)) * 0.1 +
                *(float *)(param_1 + 0x2280);
        *(float *)(param_1 + 0x2280) = fVar1;
        FUN_00a92f90();
        iVar3 = FUN_00e26e90();
        if (iVar3 != 0) {
          Animation::Motion::Unit::setCurrentTimeSlide(0,fVar1 * 0.016666668);
        }
      }
    }
  }
  return;
}

// 00548500  FUN_00548500  size=74  [between]
void __fastcall FUN_00548500(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + 0x2292;
  iVar1 = 3;
  do {
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + -1) = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + -2) = 0;
    FUN_00eaa6e0(0x41200000,0);
    param_1 = param_1 + 0xe0;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00548550  FUN_00548550  size=41  [between]
undefined4 __fastcall FUN_00548550(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = 0;
  pbVar2 = (byte *)(param_1 + 0x2290);
  while (((*pbVar2 & 1) == 0 || ((*pbVar2 & 2) == 0))) {
    uVar1 = uVar1 + 1;
    pbVar2 = pbVar2 + 0xe0;
    if (2 < uVar1) {
      return 0;
    }
  }
  return 1;
}

// 00548600  FUN_00548600  size=177  [between]
void __thiscall FUN_00548600(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x2100) = 0xffffffff;
  if ((*(byte *)(param_1 + 0xdc4) & 3) != 3) {
    if (param_2 != 0) {
      (**(code **)(*(int *)(param_1 + 0xdd0) + 8))(0x41200000,0,0);
      *(undefined4 *)(param_1 + 0xdcc) = 1;
      if (*(int *)(param_1 + 0xa84) != 0) {
        FUN_00b7ab80(0x42700000,0x3c23d70a);
      }
    }
    *(undefined4 *)(param_1 + 0x2108) = 0x41200000;
    *(undefined4 *)(param_1 + 0x2100) = 0xc;
    *(undefined4 *)(param_1 + 0x2104) = 0x42340000;
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x2108) = 0xbf800000;
    }
  }
  return;
}

// 005486C0  FUN_005486c0  size=150  [between]
void __fastcall FUN_005486c0(int param_1)

{
  code *pcVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x2100) != -1) {
    fVar2 = *(float *)(param_1 + 0x2108) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x2108) = fVar2;
    if (fVar2 < 0.0) {
      *(float *)(param_1 + 0x2104) = *(float *)(param_1 + 0x2104) - *(float *)(param_1 + 0x910);
    }
    if (*(float *)(param_1 + 0x2104) < 0.0) {
      *(undefined4 *)(param_1 + 0x2108) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x2100) = 0xffffffff;
      pcVar1 = *(code **)(*(int *)(param_1 + 0xdd0) + 8);
      *(undefined4 *)(param_1 + 0x2104) = 0xbf800000;
      *(undefined4 *)(param_1 + 0xdcc) = 0;
      (*pcVar1)(0x41200000,0,0);
      return;
    }
  }
  return;
}

// 00548760  FUN_00548760  size=46  [between]
undefined4 __fastcall FUN_00548760(int param_1)

{
  if (((*(int *)(param_1 + 0x618) != 6) || (*(int *)(param_1 + 0x61c) != 3)) &&
     ((*(int *)(param_1 + 0x618) != 7 || (*(int *)(param_1 + 0x61c) != 3)))) {
    return 0;
  }
  return 1;
}

// 00548790  FUN_00548790  size=23  [between]
void FUN_00548790(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
    return;
  }
  return;
}

// 005487B0  FUN_005487b0  size=75  [between]
void __fastcall FUN_005487b0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x388))(0);
    }
    return;
  }
  (**(code **)(*param_1 + 0x388))(0);
  (**(code **)(*param_1 + 0x388))(0);
  return;
}

// 00548800  FUN_00548800  size=2529  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00548800(int *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  float10 fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_24 [4];
  float fStack_20;
  float fStack_1c;
  
  iVar8 = FUN_00a81330();
  if (iVar8 != 0) {
    FUN_00a7c8a0();
  }
  local_34 = 1.4013e-45;
  (**(code **)(*param_1 + 0x220))(0x41200000);
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0x6d,iVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42200000;
    pcVar7 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar7)();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    uVar19 = 0xf0015;
    param_1[0xdfc] = param_1[0x10];
    param_1[0xdfd] = param_1[0x11];
    param_1[0xdfe] = param_1[0x12];
    param_1[0xdff] = param_1[0x13];
    param_1[0xe00] = param_1[0x25];
    uVar10 = FUN_00e03ea0("NEWTOWER",0xf0015);
    iVar11 = FUN_00a18d70(uVar10,uVar19);
    if ((iVar11 != 0) && (piVar9 = (int *)FUN_00a7c8a0(), piVar9 != (int *)0x0)) {
      (**(code **)(*piVar9 + 0x20))();
    }
    FUN_0093db80();
    param_1[0x251] = 0;
    goto LAB_00548969;
  case 1:
LAB_00548969:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar11 = FUN_00a94ce0(0);
    if (iVar11 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00aa4520(0x6e,iVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 4;
    }
    iVar11 = FUN_00a8c760(0x20);
    if ((iVar11 != 0) && (param_1[0x251] == 0)) {
      param_1[0x1029] = param_1[0x102a];
      param_1[0x251] = 1;
      FUN_00b89db0(1,0x3e99999a);
    }
    uVar10 = 0;
    if ((float)param_1[0x1029] <= 0.0) {
      param_1[0x1029] = -0x40800000;
    }
    else {
      uVar10 = 0x40a00000;
    }
    FUN_00b7ab30(uVar10);
    if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
      fVar17 = (float)param_1[0x1029] - 1.0;
      param_1[0x1029] = (int)fVar17;
      if (((fVar17 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
          ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar17)) &&
         ((param_1[0x33e] & param_1[0x394]) != 0)) {
        FUN_00b7dbe0(0x24);
        FUN_00b89c20(0xf8,4,0x24,iVar8,0x42c80000,0x41f00000,0x41f00000,0);
        param_1[0x1029] = -0x40800000;
      }
    }
    goto switchD_00548887_default;
  case 2:
  case 3:
    goto switchD_00548887_default;
  case 4:
    FUN_00aa4520(0x6f,iVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (iStack_44 != 0) {
      FUN_00a8cb60(4);
    }
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    goto LAB_00548b46;
  case 5:
LAB_00548b46:
    if ((iStack_44 != 0) && (iVar8 = FUN_00a8cac0(), iVar8 == 5)) {
      uVar10 = 0;
      FUN_00a92f90(0);
      fVar12 = (float10)FUN_00407b40(uVar10);
      fVar17 = (float)fVar12;
      uVar10 = 0;
      FUN_00a92f90(0,fVar17);
      FUN_004b4c60(uVar10,fVar17);
    }
    break;
  case 6:
    FUN_00aa4520(0x70,iVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 7:
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x11:
    break;
  case 8:
    FUN_00aa4520(0x71,iVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 10:
    FUN_00aa4520(0x73,iVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar11 = FUN_004b5380();
    if (iVar11 != 0) {
      uVar18 = 0x3f800000;
      uVar16 = 0;
      uVar15 = 0x8000000;
      uVar14 = 0x3f800000;
      uVar13 = 0;
      uVar19 = 0;
      uVar10 = 0x75;
      FUN_004b5380(0x75,iVar8,0,0,0x3f800000,0x8000000,0,0x3f800000);
      FUN_00aa4520(uVar10,iVar8,uVar19,uVar13,uVar14,uVar15,uVar16,uVar18);
      param_1[0x2e7] = 4;
    }
    break;
  case 0xc:
    FUN_00aa4520(0x7e,iVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar19 = 0xf0015;
    uVar10 = FUN_00e03ea0("NEWTOWER",0xf0015);
    iVar8 = FUN_00a18d70(uVar10,uVar19);
    if ((iVar8 != 0) && (piVar9 = (int *)FUN_00a7c8a0(), piVar9 != (int *)0x0)) {
      (**(code **)(*piVar9 + 0x20))();
    }
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    break;
  case 0xe:
    FUN_00aa4520(0x7f,iVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 0x10:
    FUN_00aa4520(0x80,iVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 0x12:
    FUN_00aa4520(0x81,iVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar19 = 0xf0012;
    uVar10 = FUN_00e03ea0("TOWER",0xf0012);
    iVar8 = FUN_00a18d70(uVar10,uVar19);
    if ((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
      FUN_00a9e290(&DAT_016412c0,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    FUN_00b7d090(0);
    goto LAB_00548e43;
  case 0x13:
LAB_00548e43:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar8 = FUN_00a94ce0(0);
    if (iVar8 != 0) {
      FUN_0093db80();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      FUN_00ba6810(1,0);
      param_1[0x187] = param_1[0x187] + 1;
      iStack_38 = 0;
      FUN_00da8810(0);
      uVar19 = 0xf0015;
      uVar10 = FUN_00e03ea0("NEWTOWER",0xf0015);
      iVar8 = FUN_00a18d70(uVar10,uVar19);
      if ((iVar8 != 0) && (piVar9 = (int *)FUN_00a7c8a0(), piVar9 != (int *)0x0)) {
        (**(code **)(*piVar9 + 0x1c))();
        iStack_3c = 0;
        if (0 < (short)piVar9[0xc9]) {
          local_40 = 0;
          do {
            iVar8 = piVar9[200];
            iVar11 = *(int *)(*(int *)(iVar8 + local_40 + 0x60) + 0x40);
            if ((iVar11 != 0) && (iVar11 = FUN_00fdbbd0(iVar11,"_before"), iVar11 != 0)) {
              puVar1 = (uint *)(iVar8 + local_40 + 0x38);
              *puVar1 = *puVar1 | 1;
            }
            local_40 = local_40 + 0x70;
            iStack_3c = iStack_3c + 1;
          } while (iStack_3c < (short)piVar9[0xc9]);
        }
        iStack_3c = 0;
        if (0 < (short)piVar9[0xc9]) {
          local_40 = 0;
          do {
            iVar8 = piVar9[200];
            iVar11 = *(int *)(*(int *)(iVar8 + local_40 + 0x60) + 0x40);
            if ((iVar11 != 0) && (iVar11 = FUN_00fdbbd0(iVar11,"_after"), iVar11 != 0)) {
              puVar1 = (uint *)(iVar8 + local_40 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            local_40 = local_40 + 0x70;
            iStack_3c = iStack_3c + 1;
          } while (iStack_3c < (short)piVar9[0xc9]);
        }
      }
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
    }
    goto switchD_00548887_default;
  case 0x14:
    FUN_00b94790(0x3f800000,0x3f800000);
  default:
    goto switchD_00548887_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar8 = FUN_00a94ce0(0);
  if (iVar8 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00548887_default:
  if (((iStack_44 != 0) && (iStack_38 != 0)) && (param_1[0x187] < 0x12)) {
    if (param_1[0x187] < 2) {
      fVar17 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar17 - (float)param_1[0x244]);
      if (fVar17 - (float)param_1[0x244] < 0.0) {
        param_1[0x248] = 0;
      }
      fVar3 = (float)param_1[0x248] * 0.025 * (float)param_1[0x248] * 0.025;
      FUN_00a8ce90(&local_34,auStack_24);
      fVar12 = (float10)FUN_00ddba30(*(float *)(iStack_44 + 0x94) + fStack_20);
      D3DXVec3TransformNormal(&local_34,&local_34,iStack_44 + 0x10);
      fVar2 = *(float *)(iStack_44 + 0x40) + local_34;
      fVar17 = *(float *)(iStack_44 + 0x44) + fStack_30;
      fStack_2c = *(float *)(iStack_44 + 0x48) + fStack_2c;
      param_1[0x25] = (int)(((float)param_1[0xe00] - (float)fVar12) * fVar3 + (float)fVar12);
      fStack_1c = (float)param_1[0xdfe] - fStack_2c;
      fStack_30 = ((float)param_1[0xdfd] - fVar17) * fVar3;
      fStack_28 = fStack_28 + ((float)param_1[0xdff] - fStack_28) * fVar3;
      param_1[0x14] = (int)(((float)param_1[0xdfc] - fVar2) * fVar3 + fVar2);
      param_1[0x15] = (int)(fStack_30 + fVar17);
      param_1[0x16] = (int)(fStack_1c * fVar3 + fStack_2c);
    }
    else {
      FUN_00a8ce90(&local_34,auStack_24);
      fVar12 = (float10)FUN_00ddba30(*(float *)(iStack_44 + 0x94) + fStack_20);
      param_1[0x25] = (int)(float)fVar12;
      D3DXVec3TransformNormal(&local_34,&local_34,iStack_44 + 0x10);
      fVar17 = *(float *)(iStack_44 + 0x44);
      fVar2 = *(float *)(iStack_44 + 0x48);
      param_1[0x14] = (int)(local_34 + *(float *)(iStack_44 + 0x40));
      param_1[0x15] = (int)(fVar17 + fStack_30);
      param_1[0x16] = (int)(fVar2 + fStack_2c);
    }
    param_1[0x17] = (int)fStack_28;
  }
  if (param_1[0x187] == 0x13) {
    switchD_0080dbae::default();
    uVar19 = 0xf0012;
    uVar10 = FUN_00e03ea0("TOWER",0xf0012);
    iVar8 = FUN_00a18d70(uVar10,uVar19);
    if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
       (iVar11 = FUN_00a12210(0xf00), iVar11 != 0)) {
      fVar17 = *(float *)(iVar8 + 0x44);
      fVar2 = *(float *)(iVar11 + 0x44);
      fVar3 = *(float *)(iVar8 + 0x48);
      fVar4 = *(float *)(iVar11 + 0x48);
      fVar5 = *(float *)(iVar8 + 0x4c);
      fVar6 = *(float *)(iVar11 + 0x4c);
      param_1[0x14] =
           (int)((float)param_1[0x14] + (*(float *)(iVar8 + 0x40) - *(float *)(iVar11 + 0x40)));
      param_1[0x15] = (int)((fVar17 - fVar2) + (float)param_1[0x15]);
      param_1[0x16] = (int)((fVar3 - fVar4) + (float)param_1[0x16]);
      param_1[0x17] = (int)((fVar5 - fVar6) + (float)param_1[0x17]);
    }
  }
  return;
}

// 00549240  FUN_00549240  size=1  [between]
void FUN_00549240(void)

{
  return;
}

// 005495B0  FUN_005495b0  size=23  [between]
void FUN_005495b0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
    return;
  }
  return;
}

// 005495D0  FUN_005495d0  size=1  [between]
void FUN_005495d0(void)

{
  return;
}

// 005495E0  FUN_005495e0  size=2372  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005495e0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fStack_40;
  float fStack_3c;
  float local_38;
  int aiStack_34 [4];
  undefined1 auStack_24 [4];
  float fStack_20;
  
  local_38 = 0.0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    local_38 = (float)FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  _DAT_01bea860 = 1;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0x91,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42200000;
    pcVar2 = *(code **)(*param_1 + 0x394);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    param_1[0xdfc] = param_1[0x10];
    param_1[0xdfd] = param_1[0x11];
    param_1[0xdfe] = param_1[0x12];
    param_1[0xdff] = param_1[0x13];
    param_1[0xe00] = param_1[0x25];
    FUN_00b7d090(1);
    param_1[0x24] = 0;
    param_1[0x26] = 0;
    break;
  case 1:
  case 3:
  case 7:
  case 9:
    break;
  case 2:
    FUN_00aa4520(0x96,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    FUN_00aa4520(0x92,iVar3,0,0,0x3f4ccccd,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4520(0x99,iVar3,4,0,0,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa4520(0x97,iVar3,1,0,0x3e4ccccd,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aa4520(0x98,iVar3,2,0x3f000000,0,0,0xbf800000,0x3f800000);
    FUN_00aa4520(0x95,iVar3,3,0x3f000000,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x248] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x249] = 0x3f800000;
    param_1[0x252] = 0;
    param_1[0x24a] = 0x3f800000;
    param_1[0x24b] = 0x3f800000;
    param_1[0x24c] = 0x3f4ccccd;
    param_1[0x24d] = 0x3f4ccccd;
    goto LAB_005498da;
  case 5:
LAB_005498da:
    FUN_00cbc8f0(0x1000,1);
    iVar3 = FUN_00a952e0(0,0x40c00000);
    if (iVar3 != 0) {
      param_1[0x250] = 1;
    }
    if (param_1[0x250] != 0) {
      uVar9 = 0;
      FUN_00a92f90(0);
      fVar8 = (float10)FUN_00407b40(uVar9);
      if (fVar8 < (float10)0.06666667) {
        fVar15 = (float)(float10)0.06666667;
        uVar9 = 0;
        FUN_00a92f90(0,fVar15);
        FUN_004b4c60(uVar9,fVar15);
      }
      iVar3 = FUN_00a959f0(0);
      if ((float)iVar3 < 60.0) {
        if ((*(byte *)(param_1 + 0x33f) & 0x40) != 0) {
          param_1[0x248] = 0x3f99999a;
          param_1[0x251] = 1;
          FUN_00dda360(0,0x3f19999a,0x3f19999a,6);
          *(undefined4 *)((int)fStack_3c + 0x948) = 1;
          param_1[0x249] = 0;
          param_1[0x24c] = 0;
          (**(code **)(*param_1 + 0x3e0))(0x164,0);
        }
        if (param_1[0x251] != 0) {
          param_1[0x248] = (int)((float)param_1[0x248] - 0.15);
        }
        if ((float)param_1[0x248] < -0.3) {
          param_1[0x251] = 0;
          param_1[0x248] = 0;
        }
      }
      else {
        param_1[0x252] = 1;
        param_1[0x248] = 0x3f800000;
        param_1[0x249] = 0x3f800000;
      }
      FUN_00a96030(0,param_1[0x248]);
    }
    iVar3 = param_1[0x24d];
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(0,iVar3);
    }
    fVar15 = (float)param_1[0x24d];
    FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 != 0) {
      FUN_00e36ac0(4,1.0 - fVar15);
    }
    if ((float)param_1[0x24c] < 0.8) {
      param_1[0x24c] = (int)((float)param_1[0x244] * 0.04 + (float)param_1[0x24c]);
    }
    if (0.8 < (float)param_1[0x24c] != ((float)param_1[0x24c] == 0.8)) {
      param_1[0x24c] = 0x3f4ccccd;
    }
    fVar8 = (float10)FUN_00fdc1f0();
    param_1[0x24d] =
         (int)(float)(((float10)(float)param_1[0x24c] - (float10)(float)param_1[0x24d]) * fVar8 +
                     (float10)(float)param_1[0x24d]);
    FUN_00a952e0(0,0x42780000);
    iVar3 = FUN_00a959f0(0);
    if ((float)iVar3 < 60.0) {
      if ((float)param_1[0x249] < 1.0) {
        param_1[0x249] = (int)((float)param_1[0x244] * 0.05 + (float)param_1[0x249]);
      }
      if (1.0 < (float)param_1[0x249]) {
        param_1[0x249] = 0x3f800000;
      }
      fVar8 = (float10)FUN_00fdc1f0();
      fVar8 = ((float10)(float)param_1[0x249] - (float10)(float)param_1[0x24a]) * fVar8 +
              (float10)(float)param_1[0x24a];
      param_1[0x24a] = (int)(float)fVar8;
      fVar7 = (float10)0.8;
      if (fVar7 < fVar8 == (fVar7 == fVar8)) {
        param_1[0x24b] = (int)(1.0 - (float)param_1[0x24a]);
      }
      else {
        param_1[0x24a] = (int)(float)fVar7;
        param_1[0x24b] = (int)(1.0 - (float)param_1[0x24a]);
      }
    }
    else {
      fVar15 = (float)param_1[0x24b] - (float)param_1[0x244] * 0.05;
      param_1[0x24b] = (int)fVar15;
      fVar1 = (float)param_1[0x24a] - (float)param_1[0x244] * 0.05;
      param_1[0x24a] = (int)fVar1;
      if (fVar15 < 0.0) {
        param_1[0x24b] = 0;
      }
      if (fVar1 < 0.0) {
        param_1[0x24a] = 0;
      }
    }
    iVar3 = param_1[0x24a];
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      FUN_00e36ac0(2,iVar3);
    }
    local_38 = (float)param_1[0x24b];
    FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 != 0) {
      FUN_00e36ac0(3,local_38);
    }
    BehaviorAppBase::thunk_vf64();
    FUN_00a94ce0(0);
    goto switchD_00549660_default;
  case 6:
    FUN_00a94bc0(0,0);
    FUN_00a94bc0(1,0);
    FUN_00a94bc0(2,0);
    FUN_00a94bc0(3,0);
    FUN_00a94bc0(4,0);
    FUN_00aa4520(0x93,iVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 8:
    FUN_00aa4520(0x94,iVar3,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar4 = FUN_004b5380();
    if (iVar4 != 0) {
      uVar16 = 0x3f800000;
      uVar14 = 0;
      uVar13 = 0x8100000;
      uVar12 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0x9c;
      FUN_004b5380(0x9c,iVar3,0,0,0x3f800000,0x8100000,0,0x3f800000);
      FUN_00aa4520(uVar9,iVar3,uVar10,uVar11,uVar12,uVar13,uVar14,uVar16);
      param_1[0x2e7] = 4;
    }
    break;
  case 10:
    param_1[0x187] = 0xb;
    FUN_00aa4520(0x9a,iVar3,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  case 0xb:
    FUN_00b94790(0x3f800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    param_1[0x187] = param_1[0x187] + 1;
    DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
    FUN_00a7c950();
    goto switchD_00549660_default;
  case 0xc:
    param_1[0x187] = 0xd;
  case 0xd:
    FUN_00b94790(0x3f800000,0x3f800000);
  default:
    goto switchD_00549660_default;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00549660_default:
  if ((param_1[0x187] < 5) || (7 < param_1[0x187])) {
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) & 0xfffb;
    if (fStack_3c != 0.0) {
      FUN_00a8ce90(aiStack_34,auStack_24);
      fVar8 = (float10)FUN_00ddba30(*(float *)((int)fStack_3c + 0x94) + fStack_20);
      param_1[0x25] = (int)(float)fVar8;
      D3DXVec3TransformNormal(aiStack_34,aiStack_34,(int)fStack_3c + 0x10);
      fVar15 = *(float *)((int)fStack_3c + 0x44);
      fVar1 = *(float *)((int)fStack_3c + 0x48);
      param_1[0x14] = (int)(*(float *)((int)fStack_3c + 0x40) + fStack_40);
      param_1[0x15] = (int)(fVar15 + fStack_3c);
      param_1[0x16] = (int)(fVar1 + local_38);
      param_1[0x17] = aiStack_34[0];
    }
  }
  else {
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) & 0xfffb;
    if ((fStack_3c != 0.0) && (iVar3 = FUN_00a12210(6), iVar3 != 0)) {
      *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 4;
      piVar5 = (int *)(iVar3 + 0x10);
      piVar6 = param_1 + 4;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      return;
    }
  }
  return;
}

// 00549F60  FUN_00549f60  size=42  [between]
uint FUN_00549f60(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9ce0;
  (**(code **)(*param_1 + 4))(&DAT_01be9ce0);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00549FA0  Em020a::vf44  size=248  [class]
void __fastcall Em020a::vf44(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar2);
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
      *(undefined4 *)(param_1 + 0x7b0) = 0;
    }
  }
  RayCastManager::getWork(param_1 + 0x2034);
  RayCastManager::getWork(param_1 + 0x2038);
  RayCastManager::getWork(param_1 + 0x203c);
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x2010);
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x2014);
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x2018);
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x201c);
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x2020);
  FUN_00a92a00();
  BehaviorEmBase::vf44();
  return;
}

// 0054A0A0  Em020a::vf48  size=335  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall Em020a::vf48(int param_1)

{
  float fVar1;
  
  if ((0 < *(int *)(param_1 + 0x870)) && (*(int *)(param_1 + 0x4a0) == 0)) {
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
  fVar1 = *(float *)(param_1 + 0xe80);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0xe80) = *(float *)(param_1 + 0xe80) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0xe84) != (*(float *)(param_1 + 0xe84) == 0.0)) {
    *(float *)(param_1 + 0xe84) = *(float *)(param_1 + 0xe84) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x2030) != (*(float *)(param_1 + 0x2030) == 0.0)) {
    *(float *)(param_1 + 0x2030) = *(float *)(param_1 + 0x2030) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x2088) != (*(float *)(param_1 + 0x2088) == 0.0)) {
    *(float *)(param_1 + 0x2088) = *(float *)(param_1 + 0x2088) - *(float *)(param_1 + 0x910);
  }
  if (0.0 < *(float *)(param_1 + 0x20c0) != (*(float *)(param_1 + 0x20c0) == 0.0)) {
    *(float *)(param_1 + 0x20c0) = *(float *)(param_1 + 0x20c0) - *(float *)(param_1 + 0x910);
  }
  FUN_00547bd0();
  BehaviorEmBase::vf48();
  *(undefined4 *)(param_1 + 0x208c) = 0;
  return;
}

// 0054A1F0  Em020a::getAttackInfo  size=288  [class]
undefined4 __thiscall Em020a::getAttackInfo(int param_1,ushort *param_2)

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
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData();
    if (iVar2 != 0) {
      puVar1 = *(uint **)(iVar2 + 8);
      puVar1[5] = *(uint *)(param_1 + 0x4f0);
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      uVar4 = FUN_00ac8520(*param_2);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
      uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
      puVar1[2] = uVar5;
      puVar1[1] = uVar4;
      puVar1[3] = unaff_ESI;
      *(undefined1 *)(puVar1 + 4) = uStack_8;
      *puVar1 = (uint)*param_2;
      puVar1[0x23] = puVar1[0x23] | 0x100;
      if (*param_2 == 0x15) {
        *puVar1 = 0xbc;
        *(undefined2 *)(puVar1 + 0x21) = 0x3100;
        *(undefined1 *)((int)puVar1 + 0x11) = 10;
      }
      else if (*param_2 == 0x16) {
        *puVar1 = 0xbb;
        *(undefined2 *)(puVar1 + 0x21) = 0x3100;
        *(undefined1 *)((int)puVar1 + 0x11) = 10;
        return unaff_EBX;
      }
      return unaff_EBX;
    }
  }
  FUN_00dd5650(&DAT_016412d4);
  return 0;
}

// 0054A310  FUN_0054a310  size=471  [between]
void __fastcall FUN_0054a310(int param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  if (*(float *)(param_1 + 0x2088) <= 0.0) {
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(8,0,0x3e888889,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x94) = 0x40490fdb;
    pcVar2 = *(code **)(*(int *)(param_1 + 0xdd0) + 8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x6ec) = 1;
    *(undefined4 *)(param_1 + 0x20e0) = 0;
    (*pcVar2)(0x41200000,0,0);
    if (*(int *)(param_1 + 0x15f0) != 0) {
      FUN_00ad0a90();
    }
    pcVar2 = *(code **)(*(int *)(param_1 + 0x1640) + 8);
    *(undefined4 *)(param_1 + 0x15f0) = 0;
    (*pcVar2)(0x41200000,0,0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_0054a4c3;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0054a4c3:
  fVar1 = *(float *)(param_1 + 0x920);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  }
  return;
}

// 0054A4F0  FUN_0054a4f0  size=412  [between]
void __fastcall FUN_0054a4f0(int param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  if (*(float *)(param_1 + 0x2088) <= 0.0) {
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(8,0,0x3f088889,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar2 = *(code **)(*(int *)(param_1 + 0xdd0) + 8);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x20e8) - 4.0;
    *(undefined4 *)(param_1 + 0x6ec) = 0;
    *(undefined4 *)(param_1 + 0x20e0) = 1;
    (*pcVar2)(0x41200000,0,0);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_0054a668;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0054a668:
  fVar1 = *(float *)(param_1 + 0x920);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  }
  return;
}

// 0054A690  FUN_0054a690  size=574  [between]
void __fastcall FUN_0054a690(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_4;
  
  if (((*(uint *)(param_1 + 0x20ec) & 8) == 0) &&
     (*(float *)(*(int *)(param_1 + 0xa84) + 0x44) <= 178.0)) {
    uVar7 = 0xf0018;
    *(uint *)(param_1 + 0x20ec) = *(uint *)(param_1 + 0x20ec) | 8;
    uVar3 = FUN_00e03ea0("NEWTOWER",0xf0018);
    iVar4 = FUN_00a18d70(uVar3,uVar7);
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      iVar5 = FUN_00a92f90();
      *(uint *)(iVar5 + 0x90) = *(uint *)(iVar5 + 0x90) & 0xfffffffd;
      iVar5 = FUN_00a92f90();
      *(uint *)(iVar5 + 0x90) = *(uint *)(iVar5 + 0x90) & 0xfffffffb;
      FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(uint *)(iVar4 + 0x364) = *(uint *)(iVar4 + 0x364) & 0xfffffffd;
      *(undefined4 *)(param_1 + 0x2280) = 0;
      *(undefined4 *)(param_1 + 0x227c) = 1;
      *(float *)(iVar4 + 0x50) = *(float *)(iVar4 + 0x50) - -0.5;
      *(float *)(iVar4 + 0x58) = *(float *)(iVar4 + 0x58) + 3.5;
    }
  }
  uVar7 = 0xf0018;
  uVar3 = FUN_00e03ea0("NEWTOWER",0xf0018);
  iVar4 = FUN_00a18d70(uVar3,uVar7);
  iVar5 = 0;
  if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
     (iVar4 = FUN_00a8c760(10), iVar4 != 0)) {
    uVar7 = 0xf0015;
    uVar3 = FUN_00e03ea0("NEWTOWER",0xf0015);
    iVar4 = FUN_00a18d70(uVar3,uVar7);
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (local_4 = 0, 0 < *(short *)(iVar4 + 0x324))) {
      do {
        iVar2 = *(int *)(iVar4 + 800);
        iVar6 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"gareki"), iVar6 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        local_4 = local_4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (local_4 < *(short *)(iVar4 + 0x324));
    }
  }
  if (((*(byte *)(param_1 + 0x20ec) & 2) == 0) &&
     (*(float *)(*(int *)(param_1 + 0xa84) + 0x44) <= 151.0)) {
    FUN_00a8caf0(0x12,0,0,0);
    *(uint *)(param_1 + 0x20ec) = *(uint *)(param_1 + 0x20ec) | 2;
  }
  if (((*(byte *)(param_1 + 0x20ec) & 4) == 0) &&
     (*(float *)(*(int *)(param_1 + 0xa84) + 0x44) <= 90.0)) {
    FUN_00a8caf0(0x14,0,0,0);
    *(uint *)(param_1 + 0x20ec) = *(uint *)(param_1 + 0x20ec) | 4;
    *(undefined4 *)(param_1 + 0x226c) = 0;
    *(undefined4 *)(param_1 + 0x2268) = 0;
    *(undefined4 *)(param_1 + 0x2270) = 0;
  }
  return;
}

// 0054A8E0  FUN_0054a8e0  size=174  [between]
void __fastcall FUN_0054a8e0(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x41a1c28f;
  FUN_00547930(param_1 + 0x50,&local_20);
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x3f,0,0x3f088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x6ec) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0054A9A0  FUN_0054a9a0  size=277  [between]
void __fastcall FUN_0054a9a0(int *param_1)

{
  float fVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x41a1c28f;
  FUN_00547930(param_1 + 0x14,&local_20);
  if (param_1[0x187] == 0) {
    FUN_00aa4080(8,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0x41200000;
    param_1[0x250] = 0;
    param_1[0x248] = 0x42700000;
    param_1[0x251] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0054aa8f;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((float)param_1[0x248] < 0.0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x25] = -0x40b6f025;
    param_1[0x3a1] = 0x43700000;
  }
LAB_0054aa8f:
  fVar1 = (float)param_1[0x248];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 0054AAD0  FUN_0054aad0  size=722  [between]
void __fastcall FUN_0054aad0(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  FUN_00a8caf0(0x10,0,0,0);
  param_1[0x128] = 2;
  FUN_004066f0();
  piVar3 = (int *)FUN_00910da0();
  (**(code **)(*piVar3 + 0x2c))(param_1 + 0x804);
  piVar3 = (int *)FUN_00910da0();
  (**(code **)(*piVar3 + 0x2c))(param_1 + 0x805);
  piVar3 = (int *)FUN_00910da0();
  (**(code **)(*piVar3 + 0x2c))(param_1 + 0x806);
  piVar3 = (int *)FUN_00910da0();
  (**(code **)(*piVar3 + 0x2c))(param_1 + 0x807);
  piVar3 = (int *)FUN_00910da0();
  (**(code **)(*piVar3 + 0x2c))(param_1 + 0x808);
  FUN_00910ac0(0);
  FUN_00910ac0(0);
  FUN_00910ac0(0);
  FUN_00910ac0(0);
  FUN_00910ac0(0);
  if (DAT_01885d68 != 1) {
    piVar3 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar3 = *piVar3 + -1;
    if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  if (param_1[0x76a] == 0) {
    FUN_00a938c0(6);
    FUN_00a938c0(0xe);
    iVar6 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if (iVar4 != 0) {
          iVar4 = FUN_00fdbbd0(iVar4,"qtelh");
          if (iVar4 != 0) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 | 1;
          }
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar6 < (short)param_1[0xc9]);
    }
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a81330();
      FUN_00a7c8a0();
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    FUN_00a7c950();
    iVar6 = 0;
    param_1[0x76a] = 1;
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if (iVar4 != 0) {
          iVar4 = FUN_00fdbbd0(iVar4,"kata_L");
          if (iVar4 != 0) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar6 < (short)param_1[0xc9]);
    }
    iVar6 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if (iVar4 != 0) {
          iVar4 = FUN_00fdbbd0(iVar4,"left_arm");
          if (iVar4 != 0) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar6 < (short)param_1[0xc9]);
    }
    iVar6 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if (iVar4 != 0) {
          iVar4 = FUN_00fdbbd0(iVar4,"missilepod_L");
          if (iVar4 != 0) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar6 < (short)param_1[0xc9]);
    }
    (**(code **)(*param_1 + 0x358))(0x18,param_1 + 0x614);
  }
  param_1[0x83b] = param_1[0x83b] | 1;
  param_1[0x89b] = 0;
  param_1[0x89a] = 1;
  param_1[0x89c] = 0;
  FUN_00a8caf0(0x13,0,0,0);
  return;
}

// 0054ADC0  FUN_0054adc0  size=84  [between]
void __fastcall FUN_0054adc0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined4 local_8;
  undefined2 local_4;
  
  local_8 = 0xe100e00;
  local_4 = 0xe11;
  uVar2 = 0;
  puVar3 = (undefined2 *)(param_1 + 0x2294);
  do {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    *puVar3 = *(undefined2 *)((int)&local_8 + uVar2 * 2);
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0x70;
  } while (uVar2 < 3);
  return;
}

// 0054AE20  FUN_0054ae20  size=109  [between]
void __thiscall FUN_0054ae20(byte *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a7c8a0();
  }
  iVar1 = FUN_00a12210((int)*(short *)(param_1 + 4));
  if (iVar1 != 0) {
    *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) | 4;
  }
  *(undefined4 *)(iVar1 + 0x40) = *param_2;
  *(undefined4 *)(iVar1 + 0x44) = param_2[1];
  *(undefined4 *)(iVar1 + 0x48) = param_2[2];
  *param_1 = *param_1 | 1;
  param_1[1] = 1;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}

// 0054AE90  FUN_0054ae90  size=113  [between]
void __fastcall FUN_0054ae90(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a7c8a0();
  }
  iVar1 = FUN_00a12210((int)*(short *)(param_1 + 4));
  if (param_1[2] == '\0') {
    param_1[2] = 1;
    if (iVar1 != 0) {
      *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
    }
    FUN_00eaa6e0(0x40a00000,0);
    *param_1 = 0;
  }
  return;
}

// 0054AF10  FUN_0054af10  size=111  [between]
void __fastcall FUN_0054af10(byte *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[2] == 0) {
    *param_1 = *param_1 | 2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0x70;
    param_1[0xf] = 0x41;
    param_1[2] = 1;
  }
  else if (param_1[2] != 1) {
    return;
  }
  iVar3 = 0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
  }
  fVar1 = *(float *)(param_1 + 0xc) - *(float *)(iVar3 + 0x910);
  *(float *)(param_1 + 0xc) = fVar1;
  if (fVar1 < 0.0) {
    *param_1 = *param_1 & 0xfd;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  return;
}

// 0054AF90  FUN_0054af90  size=256  [between]
void __fastcall FUN_0054af90(int param_1)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = *(int *)(param_1 + 0x2100);
  if ((((iVar3 == 0xc) || (iVar3 == 0x12)) || (iVar3 == 0x13)) &&
     ((*(float *)(param_1 + 0x2108) < 0.0 &&
      (fVar1 = *(float *)(param_1 + 0x2104), !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))))) {
    uVar2 = *(ushort *)(param_1 + 0xdc4);
    if ((uVar2 & 1) == 0) {
      local_40 = 0;
      local_3c = 0;
      uVar5 = 0xc;
      local_38 = 0;
      puVar4 = &local_40;
    }
    else if ((uVar2 & 2) == 0) {
      local_30 = 0;
      local_2c = 0;
      uVar5 = 0x12;
      local_28 = 0;
      puVar4 = &local_30;
    }
    else {
      if ((uVar2 & 4) != 0) {
        return;
      }
      local_20 = 0;
      local_1c = 0;
      uVar5 = 0x13;
      local_18 = 0;
      puVar4 = &local_20;
    }
    iVar3 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,puVar4,0x43480000,0x42c80000,
                         uVar5,4);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x48) = 0;
      *(undefined4 *)(iVar3 + 0x40) = 0x3f99999a;
      *(undefined4 *)(iVar3 + 0x44) = 0x3e99999a;
      return;
    }
  }
  return;
}

// 0054B090  FUN_0054b090  size=893  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0054b090(int *param_1)

{
  float *pfVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  float fVar6;
  float local_8;
  float local_4;
  
  FUN_0054af90();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x31,0,0x3f088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x838] = 0;
    param_1[0x58d] = 1;
    if (param_1[0x57c] != 0) {
      FUN_00ad0a90();
    }
    pcVar2 = *(code **)(param_1[0x590] + 8);
    param_1[0x57c] = 0;
    (*pcVar2)(0x41200000,0,0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar6 = (float)param_1[0x244] * 0.5;
    uVar5 = 0x3c23d70a;
    fVar4 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar6);
    FUN_00a981b0(param_1 + 0x14,param_1 + 0x14,&DAT_01881420,(float)fVar4,uVar5,fVar6);
    local_8 = _DAT_01881428 + 3.0;
    fVar6 = (float)param_1[0x244] * 0.5;
    uVar5 = 0x3c23d70a;
    fVar4 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar6);
    FUN_00a981b0(param_1 + 0x16,param_1 + 0x16,&local_8,(float)fVar4,uVar5,fVar6);
    return;
  case 2:
    FUN_00aa4080(0x32,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43d20000;
    iVar3 = FUN_00ac4780();
    if (iVar3 == 2) {
      param_1[0x248] = 0x43960000;
    }
    iVar3 = FUN_00ac4780();
    if (2 < iVar3) {
      param_1[0x248] = 0x43340000;
    }
    break;
  case 3:
    break;
  case 4:
    FUN_00aa4080(0x33,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0054b389;
  case 5:
LAB_0054b389:
    fVar6 = (float)param_1[0x244] * 0.5;
    pfVar1 = (float *)(param_1 + 0x16);
    uVar5 = 0x3c23d70a;
    fVar4 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar6);
    FUN_00a981b0(pfVar1,pfVar1,&DAT_01881428,(float)fVar4,uVar5,fVar6);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      *pfVar1 = _DAT_01881428;
      (*pcVar2)();
      return;
    }
  default:
    goto switchD_0054b0b3_default;
  }
  fVar6 = (float)param_1[0x244] * 0.5;
  uVar5 = 0x3c23d70a;
  fVar4 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar6);
  FUN_00a981b0(param_1 + 0x14,param_1 + 0x14,&DAT_01881420,(float)fVar4,uVar5,fVar6);
  local_4 = _DAT_01881428 + 3.0;
  fVar6 = (float)param_1[0x244] * 0.5;
  uVar5 = 0x3c23d70a;
  fVar4 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar6);
  FUN_00a981b0(param_1 + 0x16,param_1 + 0x16,&local_4,(float)fVar4,uVar5,fVar6);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar6 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar6 - (float)param_1[0x244]);
  if (fVar6 - (float)param_1[0x244] < 0.0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_0054b0b3_default:
  return;
}

// 0054B430  FUN_0054b430  size=2048  [between]
void __fastcall FUN_0054b430(int param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  float local_550;
  float local_54c;
  float local_548;
  float local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  undefined4 local_534;
  float local_530;
  float local_52c;
  float local_528;
  undefined4 local_524;
  float local_520 [20];
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  uint local_330 [5];
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_50;
  
  local_520[0x10] = 328.0;
  local_520[0x11] = 18.0;
  local_520[0] = 2.87827e-42;
  local_520[0x12] = 115.0;
  local_520[1] = 2.87967e-42;
  local_520[2] = 2.88107e-42;
  local_4d0 = 0x43a18000;
  local_520[3] = 2.88247e-42;
  local_520[4] = 2.88387e-42;
  local_4cc = 0x41900000;
  local_520[5] = 2.88527e-42;
  local_520[6] = 2.88667e-42;
  local_4c8 = 0x42e60000;
  local_520[7] = 2.88808e-42;
  local_520[8] = 2.88948e-42;
  local_4c0 = 0x43a60000;
  local_520[9] = 2.89088e-42;
  local_520[10] = 2.89228e-42;
  local_4bc = 0x41900000;
  local_520[0xb] = 2.89368e-42;
  local_520[0xc] = 2.89508e-42;
  local_4b8 = 0x42e60000;
  local_520[0xd] = 2.89648e-42;
  local_520[0xe] = 2.89789e-42;
  local_4b0 = 0x43a40000;
  local_520[0xf] = 2.89929e-42;
  local_4ac = 0x41a00000;
  local_49c = 0x41a00000;
  local_48c = 0x41a00000;
  local_4a8 = 0x42e60000;
  local_498 = 0x42e60000;
  local_488 = 0x42e60000;
  local_4a0 = 0x43a18000;
  local_490 = 0x43a60000;
  local_480 = 0x43a40000;
  local_47c = 0x41b80000;
  local_46c = 0x41b80000;
  local_45c = 0x41b80000;
  local_478 = 0x42e60000;
  local_468 = 0x42e60000;
  local_458 = 0x42e60000;
  local_470 = 0x43a18000;
  local_460 = 0x43a60000;
  local_450 = 0x43a40000;
  local_44c = 0x41c80000;
  local_448 = 0x42e60000;
  local_440 = 0x43a18000;
  local_43c = 0x41c80000;
  local_438 = 0x42e60000;
  local_430 = 0x43a60000;
  local_42c = 0x41c80000;
  local_428 = 0x42e60000;
  local_420 = 0x43a40000;
  local_41c = 0x41e00000;
  local_418 = 0x42e60000;
  local_410 = 0x43a18000;
  local_40c = 0x41e00000;
  local_408 = 0x42e60000;
  local_400 = 0x43a60000;
  local_3fc = 0x41e00000;
  local_3f8 = 0x42e60000;
  local_3f0 = 0x43a40000;
  local_3ec = 0x41c80000;
  local_3e8 = 0x42e60000;
  local_3e0 = 0x43a18000;
  local_3dc = 0x41c80000;
  local_3d8 = 0x42e60000;
  local_3d0 = 0x43a60000;
  local_3cc = 0x41c80000;
  local_3c8 = 0x42e60000;
  local_3b8 = 0x42e60000;
  local_3a8 = 0x42e60000;
  local_398 = 0x42e60000;
  local_388 = 0x42e60000;
  local_378 = 0x42e60000;
  local_368 = 0x42e60000;
  local_358 = 0x42e60000;
  local_348 = 0x42e60000;
  local_338 = 0x42e60000;
  local_3c0 = 0x43a40000;
  local_390 = 0x43a40000;
  local_360 = 0x43a40000;
  local_3bc = 0x41b80000;
  local_3ac = 0x41b80000;
  local_39c = 0x41b80000;
  local_3b0 = 0x43a18000;
  local_380 = 0x43a18000;
  local_350 = 0x43a18000;
  local_3a0 = 0x43a60000;
  local_370 = 0x43a60000;
  local_340 = 0x43a60000;
  local_38c = 0x41a00000;
  local_37c = 0x41a00000;
  local_36c = 0x41a00000;
  local_35c = 0x41900000;
  local_34c = 0x41900000;
  local_33c = 0x41900000;
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x52,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    DAT_01bea060 = DAT_01bea060 | 0x8000000;
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    pcVar3 = *(code **)(*(int *)(param_1 + 0x1640) + 8);
    *(undefined4 *)(param_1 + 0x1634) = 0;
    *(undefined4 *)(param_1 + 0x6ec) = 0;
    *(undefined4 *)(param_1 + 0x20e0) = 0;
    (*pcVar3)(0x41200000,0,0);
    if (*(int *)(param_1 + 0x15f0) != 0) {
      FUN_00ad0a90();
    }
    pcVar3 = *(code **)(*(int *)(param_1 + 0x1640) + 8);
    *(undefined4 *)(param_1 + 0x15f0) = 0;
    (*pcVar3)(0x41200000,0,0);
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0;
    *(undefined4 *)(param_1 + 0x948) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if ((iVar5 != 0) || ((DAT_01b7b914 & 0x1000) != 0)) {
    FUN_00a8caf0(0xf,0,0,0);
    FUN_00da8810(0x41f00000);
    DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
    DAT_01bea060 = DAT_01bea060 & 0xf7ffffff;
    *(undefined4 *)(param_1 + 0x20e8) = *(undefined4 *)(param_1 + 0x54);
  }
  if (*(int *)(param_1 + 0x944) == 0) {
    iVar5 = FUN_00a8c760(10);
    if ((iVar5 == 0) && (iVar5 = FUN_00a8c760(0x19), iVar5 == 0)) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar1;
    if (fVar1 < 0.0) {
      iVar6 = FUN_00a12210(local_520[*(int *)(param_1 + 0x940)]);
      local_550 = SQRT(*(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14) +
                       *(float *)(iVar6 + 0x10) * *(float *)(iVar6 + 0x10) +
                       *(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18));
      local_54c = SQRT(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                       *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                       *(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28));
      fVar4 = SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
                   *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
                   *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30));
      fVar1 = *(float *)(iVar6 + 0x28);
      fVar2 = *(float *)(iVar6 + 0x38);
      fVar8 = (float10)FUN_00ddbaa0(-(*(float *)(iVar6 + 0x18) / fVar4));
      iVar5 = *(int *)(param_1 + 0x948);
      fVar9 = (float10)fpatan((float10)(fVar1 / fVar4),(float10)(fVar2 / fVar4));
      local_530 = (float)fVar9;
      local_52c = (float)fVar8;
      fVar8 = (float10)fpatan((float10)*(float *)(iVar6 + 0x14) / (float10)local_54c,
                              (float10)*(float *)(iVar6 + 0x10) / (float10)local_550);
      local_528 = (float)fVar8;
      local_540 = *(undefined4 *)(iVar6 + 0x40);
      local_53c = *(undefined4 *)(iVar6 + 0x44);
      local_538 = *(undefined4 *)(iVar6 + 0x48);
      local_534 = *(undefined4 *)(iVar6 + 0x4c);
      local_54c = local_520[iVar5 * 4 + 0x11];
      local_544 = local_520[iVar5 * 4 + 0x13];
      local_550 = local_520[iVar5 * 4 + 0x10] - 18.5;
      local_548 = local_520[iVar5 * 4 + 0x12] - 17.5;
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      local_21c = 4;
      local_330[1] = 0x3b003;
      local_220 = 0x41;
      local_1c0 = FUN_009f8b40();
      local_30c = *(undefined4 *)(param_1 + 0x4f0);
      local_31c = 0x32;
      local_314 = 0x1e;
      local_318 = 0x96;
      local_310 = 0xa00;
      uVar7 = FUN_00a7c7f0();
      FUN_00a7c960(uVar7);
      local_330[0] = local_330[0] | 4;
      local_1b6 = *(undefined2 *)(iVar6 + 0xa0);
      local_50 = 2;
      FUN_00416e30(&local_540,&local_550,&local_530,0x3ea8f5c3,0x43480000);
      local_1bc = FUN_00ac45b0();
      local_1b0 = 0;
      local_1ac = 0;
      local_1a8 = 0;
      local_1a4 = local_524;
      local_1b8 = 0;
      FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
      *(undefined4 *)(param_1 + 0x924) = 0x3f800000;
      iVar5 = FUN_00a8c760(0x19);
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0x924) = 0x41200000;
      }
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
      if (0xf < *(uint *)(param_1 + 0x940)) {
        *(undefined4 *)(param_1 + 0x940) = 0;
      }
      *(int *)(param_1 + 0x948) = *(int *)(param_1 + 0x948) + 1;
      if (0x1a < *(uint *)(param_1 + 0x948)) {
        *(undefined4 *)(param_1 + 0x948) = 0;
      }
    }
  }
  return;
}

// 0054BC30  FUN_0054bc30  size=2621  [between]
void __fastcall FUN_0054bc30(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  float local_580;
  float local_57c;
  float local_578;
  float local_574;
  float local_570;
  float local_56c;
  float local_568;
  float local_560;
  float local_55c;
  float local_558;
  float local_554;
  float local_550 [20];
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  uint local_330 [5];
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined2 local_1b6;
  undefined4 local_50;
  
  local_550[0x10] = 328.0;
  local_550[0x11] = 18.0;
  local_550[0x12] = 115.0;
  local_550[0] = 2.87827e-42;
  local_550[1] = 2.87967e-42;
  local_500 = 0x43a18000;
  local_550[2] = 2.88107e-42;
  local_550[3] = 2.88247e-42;
  local_4fc = 0x41900000;
  local_550[4] = 2.88387e-42;
  local_550[5] = 2.88527e-42;
  local_4f8 = 0x42e60000;
  local_550[6] = 2.88667e-42;
  local_550[7] = 2.88808e-42;
  local_4f0 = 0x43a60000;
  local_550[8] = 2.88948e-42;
  local_550[9] = 2.89088e-42;
  local_4ec = 0x41900000;
  local_550[10] = 2.89228e-42;
  local_550[0xb] = 2.89368e-42;
  local_4e8 = 0x42e60000;
  local_550[0xc] = 2.89508e-42;
  local_550[0xd] = 2.89648e-42;
  local_4e0 = 0x43a40000;
  local_550[0xe] = 2.89789e-42;
  local_550[0xf] = 2.89929e-42;
  local_4dc = 0x41a00000;
  *(undefined4 *)(param_1 + 0xe88) = 0;
  local_4cc = 0x41a00000;
  local_4bc = 0x41a00000;
  local_4d8 = 0x42e60000;
  local_4c8 = 0x42e60000;
  local_4b8 = 0x42e60000;
  local_4d0 = 0x43a18000;
  local_4c0 = 0x43a60000;
  local_4b0 = 0x43a40000;
  local_4ac = 0x41b80000;
  local_49c = 0x41b80000;
  local_48c = 0x41b80000;
  local_4a8 = 0x42e60000;
  local_498 = 0x42e60000;
  local_488 = 0x42e60000;
  local_4a0 = 0x43a18000;
  local_490 = 0x43a60000;
  local_480 = 0x43a40000;
  local_47c = 0x41c80000;
  local_478 = 0x42e60000;
  local_470 = 0x43a18000;
  local_46c = 0x41c80000;
  local_468 = 0x42e60000;
  local_460 = 0x43a60000;
  local_45c = 0x41c80000;
  local_458 = 0x42e60000;
  local_450 = 0x43a40000;
  local_44c = 0x41e00000;
  local_448 = 0x42e60000;
  local_440 = 0x43a18000;
  local_43c = 0x41e00000;
  local_438 = 0x42e60000;
  local_430 = 0x43a60000;
  local_42c = 0x41e00000;
  local_428 = 0x42e60000;
  local_420 = 0x43a40000;
  local_41c = 0x41c80000;
  local_418 = 0x42e60000;
  local_410 = 0x43a18000;
  local_40c = 0x41c80000;
  local_408 = 0x42e60000;
  local_400 = 0x43a60000;
  local_3fc = 0x41c80000;
  local_3f8 = 0x42e60000;
  local_3e8 = 0x42e60000;
  local_3d8 = 0x42e60000;
  local_3c8 = 0x42e60000;
  local_3b8 = 0x42e60000;
  local_3a8 = 0x42e60000;
  local_398 = 0x42e60000;
  local_388 = 0x42e60000;
  local_378 = 0x42e60000;
  local_368 = 0x42e60000;
  local_3f0 = 0x43a40000;
  local_3c0 = 0x43a40000;
  local_390 = 0x43a40000;
  local_360 = 0x43a40000;
  local_3ec = 0x41b80000;
  local_3dc = 0x41b80000;
  local_3cc = 0x41b80000;
  local_3e0 = 0x43a18000;
  local_3b0 = 0x43a18000;
  local_380 = 0x43a18000;
  local_3d0 = 0x43a60000;
  local_3a0 = 0x43a60000;
  local_370 = 0x43a60000;
  local_3bc = 0x41a00000;
  local_3ac = 0x41a00000;
  local_39c = 0x41a00000;
  local_38c = 0x41900000;
  local_37c = 0x41900000;
  local_36c = 0x41900000;
  local_35c = 0x41800000;
  local_34c = 0x41800000;
  local_33c = 0x41800000;
  local_358 = 0x42e60000;
  local_348 = 0x42e60000;
  local_338 = 0x42e60000;
  local_350 = 0x43a18000;
  local_340 = 0x43a60000;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x3a,0,0x3e888889,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0;
    *(undefined4 *)(param_1 + 0x948) = 0;
    *(undefined4 *)(param_1 + 0x6ec) = 0;
    if (*(int *)(param_1 + 0x15f0) != 0) {
      FUN_00ad0a90();
    }
    *(undefined4 *)(param_1 + 0x15f0) = 0;
switchD_0054c006_caseD_1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((*(int *)(param_1 + 0x944) == 0) &&
       (fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910),
       *(float *)(param_1 + 0x924) = fVar1, fVar1 < 0.0)) {
      iVar5 = FUN_00a12210(local_550[*(int *)(param_1 + 0x940)]);
      local_580 = SQRT(*(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
                       *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) +
                       *(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18));
      local_57c = SQRT(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                       *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                       *(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28));
      fVar4 = SQRT(*(float *)(iVar5 + 0x38) * *(float *)(iVar5 + 0x38) +
                   *(float *)(iVar5 + 0x34) * *(float *)(iVar5 + 0x34) +
                   *(float *)(iVar5 + 0x30) * *(float *)(iVar5 + 0x30));
      fVar1 = *(float *)(iVar5 + 0x28);
      fVar2 = *(float *)(iVar5 + 0x38);
      fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar5 + 0x18) / fVar4));
      iVar3 = *(int *)(param_1 + 0x948);
      fVar8 = (float10)fpatan((float10)(fVar1 / fVar4),(float10)(fVar2 / fVar4));
      local_570 = (float)fVar8;
      local_56c = (float)fVar7;
      fVar7 = (float10)fpatan((float10)*(float *)(iVar5 + 0x14) / (float10)local_57c,
                              (float10)*(float *)(iVar5 + 0x10) / (float10)local_580);
      local_568 = (float)fVar7;
      local_560 = *(float *)(iVar5 + 0x40);
      local_55c = *(float *)(iVar5 + 0x44);
      local_558 = *(float *)(iVar5 + 0x48);
      local_554 = *(float *)(iVar5 + 0x4c);
      local_574 = local_550[iVar3 * 4 + 0x13];
      local_580 = local_550[iVar3 * 4 + 0x10] - 18.5;
      local_578 = local_550[iVar3 * 4 + 0x12] - 17.5;
      local_57c = local_550[iVar3 * 4 + 0x11] + 5.0;
      FUN_0041fee0();
      local_21c = 4;
      local_330[1] = 0x3b003;
      local_220 = 0x41;
      local_1c0 = FUN_009f8b40();
      local_30c = *(undefined4 *)(param_1 + 0x4f0);
      local_31c = 0x32;
      local_314 = 0x1e;
      local_318 = 0x96;
      local_310 = 0xa00;
      uVar6 = FUN_00a7c7f0();
      FUN_00a7c960(uVar6);
      local_330[0] = local_330[0] | 4;
      local_1b6 = *(undefined2 *)(iVar5 + 0xa0);
      local_50 = 2;
      FUN_00416e30(&local_560,&local_580,&local_570,0x3ea8f5c3,0x43480000);
      uVar6 = FUN_00ac45b0();
      local_570 = 0.0;
      local_56c = 0.0;
      local_568 = 0.0;
      FUN_0043fed0(uVar6,0,&local_570);
      FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
      *(undefined4 *)(param_1 + 0x924) = 0x41600000;
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
      if (*(float *)(param_1 + 0xa90) <= 625.0) {
        *(undefined4 *)(param_1 + 0x924) = 0x41a00000;
        *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
      }
      if (0xf < *(uint *)(param_1 + 0x940)) {
        *(undefined4 *)(param_1 + 0x940) = 0;
      }
      *(int *)(param_1 + 0x948) = *(int *)(param_1 + 0x948) + 1;
LAB_0054c34c:
      if (0x1d < *(uint *)(param_1 + 0x948)) {
        *(undefined4 *)(param_1 + 0x948) = 0;
        return;
      }
    }
switchD_0054c006_default:
    return;
  case 1:
    goto switchD_0054c006_caseD_1;
  case 2:
    FUN_00aa4080(0x3a,0,0x3e888889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0;
    *(undefined4 *)(param_1 + 0x948) = 0;
    *(undefined4 *)(param_1 + 0x6ec) = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (*(int *)(param_1 + 0x944) != 0) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar1;
    if (0.0 <= fVar1) {
      return;
    }
    iVar5 = FUN_00a12210(local_550[*(int *)(param_1 + 0x940)]);
    local_580 = SQRT(*(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
                     *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) +
                     *(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18));
    local_57c = SQRT(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                     *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                     *(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28));
    fVar4 = SQRT(*(float *)(iVar5 + 0x38) * *(float *)(iVar5 + 0x38) +
                 *(float *)(iVar5 + 0x34) * *(float *)(iVar5 + 0x34) +
                 *(float *)(iVar5 + 0x30) * *(float *)(iVar5 + 0x30));
    fVar1 = *(float *)(iVar5 + 0x28);
    fVar2 = *(float *)(iVar5 + 0x38);
    fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar5 + 0x18) / fVar4));
    iVar3 = *(int *)(param_1 + 0x948);
    fVar8 = (float10)fpatan((float10)(fVar1 / fVar4),(float10)(fVar2 / fVar4));
    local_570 = (float)fVar8;
    local_56c = (float)fVar7;
    fVar7 = (float10)fpatan((float10)*(float *)(iVar5 + 0x14) / (float10)local_57c,
                            (float10)*(float *)(iVar5 + 0x10) / (float10)local_580);
    local_568 = (float)fVar7;
    local_580 = *(float *)(iVar5 + 0x40);
    local_57c = *(float *)(iVar5 + 0x44);
    local_578 = *(float *)(iVar5 + 0x48);
    local_574 = *(float *)(iVar5 + 0x4c);
    local_554 = local_550[iVar3 * 4 + 0x13];
    local_560 = local_550[iVar3 * 4 + 0x10] - 18.5;
    local_558 = local_550[iVar3 * 4 + 0x12] - 17.5;
    local_55c = local_550[iVar3 * 4 + 0x11] + 5.0;
    FUN_0041fee0();
    local_21c = 4;
    local_330[1] = 0x3b003;
    local_220 = 0x41;
    local_1c0 = FUN_009f8b40();
    local_30c = *(undefined4 *)(param_1 + 0x4f0);
    local_31c = 0x32;
    local_314 = 0x1e;
    local_318 = 0x96;
    local_310 = 0xa00;
    uVar6 = FUN_00a7c7f0();
    FUN_00a7c960(uVar6);
    local_330[0] = local_330[0] | 4;
    local_1b6 = *(undefined2 *)(iVar5 + 0xa0);
    local_50 = 2;
    FUN_00416e30(&local_580,&local_560,&local_570,0x3ea8f5c3,0x42200000);
    uVar6 = FUN_00ac45b0();
    local_570 = 0.0;
    local_56c = 0.0;
    local_568 = 0.0;
    FUN_0043fed0(uVar6,0,&local_570);
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
    *(undefined4 *)(param_1 + 0x924) = 0x40e00000;
    *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
    if (0xf < *(uint *)(param_1 + 0x940)) {
      *(undefined4 *)(param_1 + 0x940) = 0;
    }
    *(int *)(param_1 + 0x948) = *(int *)(param_1 + 0x948) + 1;
    goto LAB_0054c34c;
  default:
    goto switchD_0054c006_default;
  }
}

// 0054C680  FUN_0054c680  size=413  [between]
void __fastcall FUN_0054c680(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_330 [20];
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined2 uStack_310;
  int iStack_30c;
  uint uStack_294;
  undefined4 uStack_220;
  undefined4 uStack_1c0;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x47,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a952e0(0,0x43630000);
  if (iVar1 != 0) {
    (**(code **)(param_1[0x590] + 8))(0x42700000,0,0);
    if (param_1[0x57c] != 0) {
      FUN_00ad0a90();
    }
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    uStack_220 = 0x14;
    uStack_1c0 = FUN_009f8b40();
    iStack_30c = param_1[0x13c];
    uStack_294 = uStack_294 | 0x8000000;
    uStack_31c = 100;
    uStack_314 = 0x1e;
    uStack_318 = 0x96;
    uStack_310 = 0xa00;
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    iVar1 = FUN_00ad09e0(param_1[0x13c],6,auStack_330);
    param_1[0x57c] = iVar1;
  }
  iVar1 = FUN_00a952e0(0,0x43e60000);
  if (iVar1 != 0) {
    if (param_1[0x57c] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x57c] = 0;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 0054C820  Em020a::vf19C  size=238  [class]
void __thiscall Em020a::vf19C(int *param_1,int param_2,uint param_3)

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

// 0054C910  FUN_0054c910  size=148  [between]
void __thiscall FUN_0054c910(int param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  uVar1 = 0;
  pbVar3 = (byte *)(param_1 + 0x2290);
  do {
    if ((*pbVar3 & 1) == 0) {
      pbVar3 = (byte *)(uVar1 * 0xe0 + 0x2290 + param_1);
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
      }
      iVar2 = FUN_00a12210((int)*(short *)(pbVar3 + 4));
      if (iVar2 != 0) {
        *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 4;
      }
      *(undefined4 *)(iVar2 + 0x40) = *param_2;
      *(undefined4 *)(iVar2 + 0x44) = param_2[1];
      *(undefined4 *)(iVar2 + 0x48) = param_2[2];
      *pbVar3 = *pbVar3 | 1;
      pbVar3[1] = 1;
      pbVar3[2] = 0;
      *(undefined4 *)(pbVar3 + 0x14) = param_3;
      return;
    }
    uVar1 = uVar1 + 1;
    pbVar3 = pbVar3 + 0xe0;
  } while (uVar1 < 3);
  return;
}

// 0054C9B0  FUN_0054c9b0  size=1959  [between]
void __fastcall FUN_0054c9b0(int *param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined *puVar11;
  int iStack_9c;
  int *piStack_98;
  int *local_94 [20];
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  param_1[0x75c] = 1;
  param_1[0x580] = 1;
  param_1[0x581] = 1;
  param_1[0x57f] = 1;
  param_1[0x3a2] = 1;
  param_1[0x3a3] = 1;
  param_1[0x372] = 1;
  uVar7 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar11 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar11);
    uVar7 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  piVar4 = (int *)0x0;
  local_94[0] = (int *)0x0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_00a7c8a0();
    local_94[0] = piVar4;
  }
  if ((((uVar7 != 0) && (piVar4 != (int *)0x0)) && (iVar3 = FUN_00a8cac0(), iVar3 == 5)) &&
     ((iVar3 = FUN_00a94ce0(0), iVar3 != 0 && (0.2 < *(float *)(uVar7 + 0x920))))) {
    FUN_00a8cb60(6);
    FUN_00a8cb60(6);
    FUN_00a8cb60(6);
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x88,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24] = 0;
    if (param_1[0x186] == 0x17) {
      FUN_00a93090(2);
      param_1[0x14] = 0x439b4000;
      param_1[0x16] = 0x435b8000;
    }
    if (uVar7 != 0) {
      uVar9 = 0;
      FUN_00a92f90(0);
      fVar8 = (float10)FUN_00407b40(uVar9);
      fVar10 = (float)fVar8;
      uVar9 = 0;
      FUN_00a92f90(0,fVar10);
      FUN_00407b10(uVar9,fVar10);
    }
    if (param_1[0x57c] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x57c] = 0;
    if (param_1[0x186] == 0x17) {
      FUN_0040b190();
      iStack_44 = param_1[0x14];
      iStack_40 = param_1[0x15];
      iStack_3c = param_1[0x16];
      iStack_38 = param_1[0x24];
      local_94[0] = (int *)0x3;
      iStack_34 = param_1[0x25];
      iStack_30 = param_1[0x26];
      FUN_00a82090("Em020b",0x2020b,local_94);
      uVar9 = FUN_00a7c7f0();
      FUN_00a7c960(uVar9);
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x20))();
        piVar4[0x58d] = 1;
      }
      (**(code **)(param_1[0x614] + 8))(0x41200000,0,0);
      piStack_98 = piVar4;
    }
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      FUN_00a7c8a0();
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    FUN_00a7c950();
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      FUN_00a7c8a0();
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    FUN_00a7c950();
    iStack_9c = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar3 = 0;
      do {
        iVar5 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar5 + 0x60 + iVar3) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"wp_al"), iVar6 != 0)) {
          puVar1 = (uint *)(iVar5 + 0x38 + iVar3);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iStack_9c = iStack_9c + 1;
        iVar3 = iVar3 + 0x70;
        piVar4 = piStack_98;
      } while (iStack_9c < (short)param_1[0xc9]);
    }
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0x8d,0,0,0x3dcccccd,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    FUN_00aa4080(0x89,0,0,0x3dcccccd,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f800000;
    param_1[0x250] = 0;
    param_1[0x252] = 0;
    goto LAB_0054cde2;
  case 5:
LAB_0054cde2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x252] != 0) {
      param_1[0x252] = 0;
      param_1[0x248] = 0x40000000;
    }
    iVar3 = param_1[0x248];
    FUN_00a92f90();
    iVar5 = FUN_00e26e90();
    if (iVar5 != 0) {
      FUN_00e36720(6,iVar3);
    }
    if (1.0 < (float)param_1[0x248]) {
      param_1[0x248] = (int)((float)param_1[0x248] - 0.05);
    }
    if ((float)param_1[0x248] <= 1.0) {
      param_1[0x248] = 0x3f800000;
    }
    iVar3 = FUN_00a952e0(0,0x40c00000);
    if (iVar3 != 0) {
      param_1[0x250] = 1;
    }
    if ((uVar7 != 0) && (param_1[0x250] != 0)) {
      uVar9 = 0;
      FUN_00a92f90(0);
      fVar8 = (float10)FUN_00407b40(uVar9);
      fVar10 = (float)fVar8;
      uVar9 = 0;
      FUN_00a92f90(0,fVar10);
      FUN_00407b10(uVar9,fVar10);
    }
    if (param_1[0x186] != 0x18) {
      return;
    }
    if (piStack_98 == (int *)0x0) {
      return;
    }
    uVar9 = 0;
    FUN_00a92f90(0);
    fVar8 = (float10)FUN_00407b40(uVar9);
    fVar10 = (float)fVar8;
    uVar9 = 0;
    FUN_00a92f90(0,fVar10);
    FUN_00407b10(uVar9,fVar10);
    return;
  case 6:
    FUN_00a94bc0(6,0x3f000000);
    FUN_00aa4080(0x8a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    if (piVar4 != (int *)0x0) {
      FUN_00a8cb60(param_1[0x187]);
    }
    if (param_1[0x186] != 0x17) {
      return;
    }
    iStack_9c = 0;
    if ((short)param_1[0xc9] < 1) {
      return;
    }
    iVar3 = 0;
    do {
      iVar5 = param_1[200];
      iVar6 = *(int *)(*(int *)(iVar5 + 0x60 + iVar3) + 0x40);
      if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"L_side"), iVar6 != 0)) {
        puVar1 = (uint *)(iVar5 + 0x38 + iVar3);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      iStack_9c = iStack_9c + 1;
      iVar3 = iVar3 + 0x70;
    } while (iStack_9c < (short)param_1[0xc9]);
    return;
  case 8:
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x1c))();
    }
    uVar2 = 0x8b;
    if (param_1[0x186] == 0x18) {
      uVar2 = 0x8f;
    }
    FUN_00aa4080(uVar2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x14] = 0x4398c000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x16] = 0x43608000;
    param_1[0x58d] = 1;
    if (param_1[0x186] != 0x18) {
      (**(code **)(*param_1 + 0x344))(0xb,1,1);
    }
    goto LAB_0054d09d;
  case 9:
LAB_0054d09d:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      if (piVar4 != (int *)0x0) {
        FUN_00a8cb60(param_1[0x187]);
      }
    }
    iVar3 = FUN_00a952e0(0,0x43f50000);
    if (iVar3 != 0) {
      FUN_00c81e40(4);
    }
    iVar3 = FUN_00a8c760(10);
    if (iVar3 == 0) {
      return;
    }
    if (param_1[0x186] != 0x17) {
      return;
    }
    FUN_00c81e40(4);
    return;
  case 10:
    param_1[0x187] = 0xb;
  case 0xb:
    FUN_00a93090(6);
    if (param_1[0x186] == 0x17) {
      FUN_00c81e40(4);
      return;
    }
  default:
    goto switchD_0054cac3_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    if (piVar4 != (int *)0x0) {
      FUN_00a8cb60(param_1[0x187]);
      return;
    }
  }
switchD_0054cac3_default:
  return;
}

// 0054D190  Em020a::startup  size=9342  [class]
undefined4 __fastcall Em020a::startup(int *param_1)

{
  uint *puVar1;
  char *pcVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  float10 fVar12;
  undefined *puVar13;
  undefined4 *puStack_300;
  int *piStack_2fc;
  int iStack_2f8;
  undefined1 *puStack_2f4;
  uint *puStack_2f0;
  int *piStack_2ec;
  int *piStack_2e8;
  uint *puStack_2e4;
  undefined4 *local_2e0;
  char *local_2dc;
  char *pcStack_2d8;
  int *piStack_2d4;
  int iStack_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  uint auStack_2ac [2];
  int local_2a4 [4];
  uint local_294 [4];
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  uint uStack_274;
  undefined1 local_270 [20];
  undefined4 local_25c;
  undefined4 uStack_21c;
  undefined4 uStack_204;
  undefined1 auStack_1fc [4];
  undefined4 uStack_1f8;
  undefined4 uStack_1e4;
  undefined1 local_120 [284];
  
  piStack_2d4 = (int *)0x54d1a6;
  iVar5 = BehaviorEmBase::startup();
  if (iVar5 != 0) {
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    piStack_2d4 = (int *)0x54d1c4;
    FUN_00a933e0();
    piStack_2d4 = (int *)0x18;
    pcStack_2d8 = (char *)0x54d1cd;
    lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>();
    piStack_2d4 = (int *)0xeff;
    pcStack_2d8 = (char *)0x54d1d9;
    iVar5 = FUN_00a12210();
    if (iVar5 != 0) {
      *(ushort *)(iVar5 + 0xa2) = *(ushort *)(iVar5 + 0xa2) | 0x1000;
    }
    piStack_2d4 = (int *)0x54d1f2;
    FUN_00a929d0();
    piStack_2d4 = (int *)0x54d1fe;
    FUN_00e01ca0();
    piStack_2d4 = param_1 + 0x5e8;
    pcStack_2d8 = (char *)0x54d211;
    FUN_00dffb30();
    pcStack_2d8 = (char *)0x54d21e;
    piStack_2d4 = param_1;
    FUN_00e021c0();
    piStack_2d4 = (int *)param_1[300];
    pcStack_2d8 = (char *)0x54d22a;
    local_2e0 = (undefined4 *)FUN_00e00260();
    pcStack_2d8 = local_120;
    local_2dc = (char *)0x2;
    puStack_2e4 = (uint *)0x54d23a;
    FUN_00e00fb0();
    iVar5 = 0;
    param_1[0x58c] = 1;
    param_1[0x58d] = 0;
    if (0 < (short)param_1[0xc9]) {
      local_2a4[0] = 0;
      do {
        iVar11 = param_1[200] + local_2a4[0];
        pcStack_2d8 = *(char **)(*(int *)(iVar11 + 0x60) + 0x40);
        if (pcStack_2d8 != (char *)0x0) {
          piStack_2d4 = (int *)&DAT_0164152c;
          local_2dc = (char *)0x54d27f;
          iVar6 = FUN_00fdbbd0();
          if (iVar6 != 0) {
            puVar1 = (uint *)(iVar11 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        local_2a4[0] = local_2a4[0] + 0x70;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (short)param_1[0xc9]);
    }
    piStack_2d4 = (int *)0xbb8;
    param_1[0x205] = 4;
    pcStack_2d8 = (char *)0x54d2b3;
    FUN_00a8edf0();
    param_1[0x81e] = 0x40400000;
    param_1[0x75e] = 500;
    param_1[0x81f] = 0x40400000;
    param_1[0x75d] = 500;
    param_1[0x820] = 0x40400000;
    param_1[0x760] = 500;
    param_1[0x821] = 0x40400000;
    param_1[0x75f] = 500;
    param_1[0x762] = 0x32;
    param_1[0x761] = 0x32;
    param_1[0x766] = 0x32;
    param_1[0x765] = 0x32;
    param_1[0x764] = 0x32;
    param_1[0x763] = 0x32;
    param_1[0x836] = 0xe6;
    param_1[0x837] = 0xe6;
    if (param_1[0x1d5] != 0) {
      piStack_2d4 = (int *)0x24;
      pcStack_2d8 = (char *)0x54d33d;
      FUN_00ac8570();
      piStack_2d4 = (int *)0x54d342;
      piStack_2d4 = (int *)FUN_00fdbc60();
      pcStack_2d8 = (char *)0x54d34a;
      FUN_00a8edf0();
      piStack_2d4 = (int *)0x2a;
      pcStack_2d8 = (char *)0x54d353;
      fVar12 = (float10)FUN_00ac8570();
      param_1[0x81e] = (int)(float)fVar12;
      piStack_2d4 = (int *)0x2b;
      pcStack_2d8 = (char *)0x54d362;
      fVar12 = (float10)FUN_00ac8570();
      param_1[0x81f] = (int)(float)fVar12;
      piStack_2d4 = (int *)0x2c;
      pcStack_2d8 = (char *)0x54d371;
      fVar12 = (float10)FUN_00ac8570();
      param_1[0x820] = (int)(float)fVar12;
      piStack_2d4 = (int *)0x2c;
      pcStack_2d8 = (char *)0x54d380;
      fVar12 = (float10)FUN_00ac8570();
      param_1[0x821] = (int)(float)fVar12;
      piStack_2d4 = (int *)0x28;
      pcStack_2d8 = (char *)0x54d38f;
      FUN_00ac8570();
      piStack_2d4 = (int *)0x54d394;
      iVar5 = FUN_00fdbc60();
      piStack_2d4 = (int *)0x33;
      param_1[0x762] = iVar5;
      param_1[0x761] = iVar5;
      pcStack_2d8 = (char *)0x54d3a9;
      FUN_00ac8570();
      piStack_2d4 = (int *)0x54d3ae;
      iVar5 = FUN_00fdbc60();
      piStack_2d4 = (int *)0x34;
      param_1[0x836] = iVar5;
      pcStack_2d8 = (char *)0x54d3bd;
      FUN_00ac8570();
      piStack_2d4 = (int *)0x54d3c2;
      iVar5 = FUN_00fdbc60();
      param_1[0x837] = iVar5;
    }
    piStack_2d4 = (int *)param_1[0x13c];
    param_1[0x773] = 0;
    param_1[0x774] = 0;
    param_1[0x775] = 0;
    pcStack_2d8 = (char *)0x54d3eb;
    iVar11 = FUN_00c5def0();
    iVar5 = param_1[0x13c];
    param_1[0x25c] = iVar11;
    DAT_018a9eec = 1;
    piStack_2d4 = (int *)0x54d40b;
    FUN_00a7c950();
    if (iVar5 != 0) {
      piStack_2d4 = (int *)0x54d416;
      piStack_2d4 = (int *)FUN_00a7c7f0();
      pcStack_2d8 = (char *)0x54d421;
      FUN_00a7c960();
    }
    param_1[0x1b1] = 6;
    param_1[0x1b4] = 0;
    param_1[0x1b5] = 0;
    param_1[0x1b6] = 0;
    param_1[0x1b7] = local_294[0];
    param_1[0x1bb] = 1;
    param_1[0x1ba] = 0x3fc00000;
    param_1[0x1b9] = 6;
    param_1[0x1b8] = 6;
    piStack_2d4 = (int *)0x54d475;
    FUN_00405230();
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0x40333333;
    piStack_2e8 = &local_2c0;
    local_2dc = (char *)0x40400000;
    local_2e0 = (undefined4 *)0x43480000;
    puStack_2e4 = (uint *)0x0;
    piStack_2ec = (int *)0x6;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d4bb;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    local_25c = 0x40800000;
    pcStack_2d8 = (char *)0x54d4d4;
    FUN_00c57830();
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    local_2dc = (char *)0x3f800000;
    piStack_2e8 = &local_2c0;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x1;
    piStack_2ec = (int *)0x806;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d515;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d524;
    FUN_00c57830();
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    piStack_2e8 = &local_2c0;
    local_2dc = (char *)0x3f800000;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x1;
    piStack_2ec = (int *)0x808;
    puStack_2f0 = (uint *)param_1[0x13c];
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d568;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d577;
    FUN_00c57830();
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    local_2dc = (char *)0x3f800000;
    piStack_2e8 = &local_2c0;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x1;
    piStack_2ec = (int *)0x80a;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d5b8;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d5c7;
    FUN_00c57830();
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    local_2dc = (char *)0x3f800000;
    piStack_2e8 = &local_2c0;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x1;
    piStack_2ec = (int *)0x80c;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d608;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d617;
    FUN_00c57830();
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    local_2dc = (char *)0x3f800000;
    piStack_2e8 = &local_2c0;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x1;
    piStack_2ec = (int *)0x80e;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d658;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d667;
    FUN_00c57830();
    puStack_2f0 = (uint *)param_1[0x13c];
    piStack_2d4 = (int *)0x0;
    local_2c0 = 0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    piStack_2e8 = &local_2c0;
    local_2dc = (char *)0x3f800000;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x1;
    piStack_2ec = (int *)0x810;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d6a8;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d6b7;
    FUN_00c57830();
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    local_2dc = (char *)0x3f800000;
    piStack_2e8 = &local_2c0;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x1;
    piStack_2ec = (int *)0x812;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d6f8;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d707;
    FUN_00c57830();
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    local_2dc = (char *)0x3f800000;
    piStack_2e8 = &local_2c0;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x1;
    piStack_2ec = (int *)0x814;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d748;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d757;
    FUN_00c57830();
    local_2dc = (char *)param_1[0x13c];
    piStack_2d4 = (int *)0x0;
    pcStack_2d8 = (char *)0x1;
    local_2e0 = (undefined4 *)0x54d76b;
    FUN_00c4d210();
    local_2c0 = 0;
    local_2bc = 0;
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2b8 = 0;
    piStack_2d4 = (int *)0x0;
    pcStack_2d8 = (char *)0x2;
    local_2dc = (char *)0x3f800000;
    piStack_2e8 = &local_2c0;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x2;
    piStack_2ec = (int *)0x807;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d7af;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d7be;
    FUN_00c57830();
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    local_2dc = (char *)0x3f800000;
    piStack_2e8 = &local_2c0;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x2;
    piStack_2ec = (int *)0x809;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d802;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d811;
    FUN_00c57830();
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    local_2dc = (char *)0x3f800000;
    piStack_2e8 = &local_2c0;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x2;
    piStack_2ec = (int *)0x80b;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d855;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d864;
    FUN_00c57830();
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    local_2dc = (char *)0x3f800000;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x2;
    puStack_2f0 = (uint *)param_1[0x13c];
    piStack_2e8 = &local_2c0;
    piStack_2ec = (int *)0x80d;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d8a8;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d8b7;
    FUN_00c57830();
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    local_2dc = (char *)0x3f800000;
    piStack_2e8 = &local_2c0;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x2;
    piStack_2ec = (int *)0x80f;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d8fb;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d90a;
    FUN_00c57830();
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    local_2dc = (char *)0x3f800000;
    piStack_2e8 = &local_2c0;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x2;
    piStack_2ec = (int *)0x811;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d94e;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d95d;
    FUN_00c57830();
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    local_2dc = (char *)0x3f800000;
    piStack_2e8 = &local_2c0;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x2;
    piStack_2ec = (int *)0x813;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d9a1;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54d9b0;
    FUN_00c57830();
    puStack_2f0 = (uint *)param_1[0x13c];
    local_2c0 = 0;
    piStack_2d4 = (int *)0x0;
    local_2bc = 0;
    pcStack_2d8 = (char *)0x2;
    local_2b8 = 0;
    local_2dc = (char *)0x3f800000;
    piStack_2e8 = &local_2c0;
    local_2e0 = (undefined4 *)0x42480000;
    puStack_2e4 = (uint *)0x2;
    piStack_2ec = (int *)0x815;
    puStack_2f4 = (undefined1 *)0x1;
    iStack_2f8 = 0x54d9f4;
    FUN_00c151f0();
    piStack_2d4 = (int *)local_270;
    pcStack_2d8 = (char *)0x54da03;
    FUN_00c57830();
    local_2dc = (char *)param_1[0x13c];
    piStack_2d4 = (int *)0x0;
    pcStack_2d8 = (char *)0x2;
    local_2e0 = (undefined4 *)0x54da17;
    FUN_00c4d210();
    piStack_2d4 = (int *)0x100;
    pcStack_2d8 = (char *)0x54da23;
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2();
    piStack_2d4 = &DAT_01b7bd48;
    pcStack_2d8 = (char *)0x3c;
    local_2dc = (char *)0x54da2f;
    iVar5 = FUN_00dd3500();
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      piStack_2d4 = (int *)0x54da3d;
      iVar5 = RigidBodyCollision::RigidBodyCollision();
    }
    pcVar2 = (char *)param_1[0x13c];
    piStack_2d4 = (int *)0x0;
    pcStack_2d8 = "_col.hkx";
    param_1[0x1ec] = iVar5;
    local_2dc = "Pj";
    piStack_2d4 = (int *)FUN_00de46d0();
    pcStack_2d8 = (char *)0x0;
    local_2dc = "_col.hkx";
    local_2e0 = (undefined4 *)0x54da72;
    pcStack_2d8 = (char *)FUN_00de4550();
    local_2e0 = (undefined4 *)0x54da7f;
    local_2dc = pcVar2;
    FUN_008f6410();
    piStack_2d4 = (int *)0x8;
    pcStack_2d8 = (char *)0x54da91;
    (**(code **)(*(int *)param_1[0x1ec] + 0x108))();
    pcStack_2d8 = (char *)0x1;
    local_2dc = (char *)0x54da9e;
    FUN_008f2cd0();
    pcStack_2d8 = (char *)0x80000000;
    local_2dc = (char *)0x54daae;
    FUN_008f1600();
    pcStack_2d8 = (char *)0x40;
    local_2dc = (char *)0x54dabb;
    FUN_008f1600();
    local_2dc = (char *)param_1[0x1ec];
    pcStack_2d8 = (char *)0x2;
    local_2e0 = (undefined4 *)0x54dacb;
    Behavior::addDefenseCollisionFromRigidBody_2();
    pcStack_2d8 = "_lhand";
    local_2dc = (char *)0xb;
    local_2e0 = (undefined4 *)0x54dad9;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_5();
    pcStack_2d8 = "_body";
    local_2dc = (char *)0x0;
    local_2e0 = (undefined4 *)0x54dae7;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_head";
    local_2dc = (char *)0x1;
    local_2e0 = (undefined4 *)0x54daf5;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_ago";
    local_2dc = (char *)0x1;
    local_2e0 = (undefined4 *)0x54db03;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_lfoot";
    local_2dc = (char *)0x3;
    local_2e0 = (undefined4 *)0x54db11;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_lreg";
    local_2dc = (char *)0x3;
    local_2e0 = (undefined4 *)0x54db1f;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_rfoot";
    local_2dc = (char *)0x2;
    local_2e0 = (undefined4 *)0x54db2d;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_rreg";
    local_2dc = (char *)0x2;
    local_2e0 = (undefined4 *)0x54db3b;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_tail";
    local_2dc = (char *)0x4;
    local_2e0 = (undefined4 *)0x54db49;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_rhand";
    local_2dc = (char *)0x5;
    local_2e0 = (undefined4 *)0x54db57;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_lhand";
    local_2dc = (char *)0x6;
    local_2e0 = (undefined4 *)0x54db65;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_core";
    local_2dc = (char *)0x8;
    local_2e0 = (undefined4 *)0x54db73;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_crfoot";
    local_2dc = (char *)0x9;
    local_2e0 = (undefined4 *)0x54db81;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_clfoot";
    local_2dc = (char *)0xa;
    local_2e0 = (undefined4 *)0x54db8f;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_c1tail";
    local_2dc = (char *)0xb;
    local_2e0 = (undefined4 *)0x54db9d;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_c2tail";
    local_2dc = (char *)0xc;
    local_2e0 = (undefined4 *)0x54dbab;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_crkata";
    local_2dc = (char *)0xd;
    local_2e0 = (undefined4 *)0x54dbb9;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    pcStack_2d8 = "_clkata";
    local_2dc = (char *)0xe;
    local_2e0 = (undefined4 *)0x54dbc7;
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3();
    iStack_2c4 = param_1[0x14];
    local_2c0 = param_1[0x15];
    local_2bc = param_1[0x16];
    local_2b8 = param_1[0x17];
    local_2a4[0] = 0;
    local_2a4[1] = 0;
    local_2a4[2] = 0;
    local_294[0] = 0;
    local_294[1] = 0x40800000;
    local_294[2] = 0;
    uStack_284 = 0;
    uStack_280 = 0xc0000000;
    uStack_27c = 0;
    pcStack_2d8 = (char *)0x54dc1e;
    FUN_0118f7b0();
    uStack_1e4 = 0;
    pcStack_2d8 = (char *)0x54dc2e;
    iVar5 = FUN_009f8b40();
    uStack_274 = iVar5 << 0x10 | 3;
    pcStack_2d8 = (char *)0x54dc3d;
    piVar7 = (int *)FUN_00910da0();
    pcStack_2d8 = (char *)0x1;
    local_2dc = (char *)0x3f800000;
    local_2e0 = &uStack_284;
    puStack_2e4 = local_294;
    piStack_2e8 = local_2a4;
    piStack_2ec = &iStack_2c4;
    puStack_2f0 = &uStack_274;
    puStack_2f4 = &stack0xfffffd38;
    iStack_2f8 = 0x54dc6c;
    iStack_2f8 = (**(code **)(*piVar7 + 0x10))();
    piStack_2fc = (int *)0x54dc78;
    FUN_00910ab0();
    iStack_2f8 = 0x54dc83;
    FUN_00916260();
    iStack_2f8 = 1;
    puStack_300 = (undefined4 *)param_1[0x804];
    piStack_2fc = (int *)0x20;
    FUN_008f9610();
    FUN_008f9610(param_1[0x804],0x40,1);
    FUN_008f7f00(param_1[0x804],param_1[0x13c]);
    puStack_2e4 = (uint *)param_1[0x14];
    local_2e0 = (undefined4 *)param_1[0x15];
    local_2dc = (char *)param_1[0x16];
    pcStack_2d8 = (char *)param_1[0x17];
    uStack_2b4 = 0;
    uStack_2b0 = 0;
    auStack_2ac[0] = 0;
    iStack_2c4 = 0x40b00000;
    local_2c0 = 0x40c00000;
    local_2bc = 0x40400000;
    iStack_2f8 = 0x54dd0a;
    FUN_0118f7b0();
    uStack_204 = 0;
    iStack_2f8 = 0x54dd1a;
    iVar5 = FUN_009f8b40();
    local_294[0] = iVar5 << 0x10 | 3;
    iStack_2f8 = 0x54dd29;
    piVar7 = (int *)FUN_00910da0();
    iStack_2f8 = 1;
    piStack_2fc = &iStack_2c4;
    puStack_300 = &uStack_2b4;
    uVar8 = (**(code **)(*piVar7 + 4))(&piStack_2e8,local_294,&puStack_2e4);
    FUN_00910ab0(uVar8);
    FUN_00916260();
    FUN_008f9610(param_1[0x805],0x20,1);
    FUN_008f9610(param_1[0x804],0x40,1);
    FUN_008f7f00(param_1[0x805],param_1[0x13c]);
    piStack_2fc = (int *)param_1[0x14];
    iStack_2f8 = param_1[0x15];
    puStack_2f4 = (undefined1 *)param_1[0x16];
    puStack_2f0 = (uint *)param_1[0x17];
    local_2bc = 0;
    local_2b8 = 0;
    uStack_2b4 = 0;
    iStack_2c4 = 0;
    local_2dc = (char *)0x0;
    pcStack_2d8 = (char *)0xc0000000;
    piStack_2d4 = (int *)0x0;
    FUN_0118f7b0();
    uStack_21c = 0;
    iVar5 = FUN_009f8b40();
    auStack_2ac[0] = iVar5 << 0x10 | 3;
    piVar7 = (int *)FUN_00910da0();
    uVar8 = (**(code **)(*piVar7 + 0x10))
                      (&puStack_300,auStack_2ac,&piStack_2fc,&local_2bc,&stack0xfffffd34,&local_2dc,
                       0x3f800000,1);
    FUN_00910ab0(uVar8);
    FUN_00916260();
    FUN_008f9610(param_1[0x806],0x20,1);
    FUN_008f9610(param_1[0x804],0x40,1);
    FUN_008f7f00(param_1[0x806],param_1[0x13c]);
    if (param_1[300] == 0x2020a) {
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x2020a,0x20200);
    }
    if (param_1[300] == 0x2020b) {
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x2020b,0x20200);
    }
    iVar5 = FUN_00a92f90();
    *(undefined4 *)(iVar5 + 0x334) = 1;
    FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x3a0] = 0x44e10000;
    param_1[0x3a1] = 0x42f00000;
    iVar5 = FUN_00ac4780();
    if (1 < iVar5) {
      param_1[0x3a1] = 0x42700000;
    }
    param_1[0x80c] = -0x40800000;
    iVar5 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar5 != 0) {
      FUN_0040b190();
      if (param_1[300] == 0x2020a) {
        uStack_1f8 = 0;
        iVar5 = FUN_00a82090("Wp0200",0x30200,auStack_1fc);
        if (iVar5 != 0) {
          uVar8 = FUN_00a7c7f0();
          FUN_00a7c960(uVar8);
          iVar11 = FUN_00a7c8a0();
          if (iVar11 != 0) {
            FUN_00547010(param_1[0x13c]);
            *(undefined4 *)(iVar11 + 0xd98) = 1;
            *(undefined4 *)(iVar11 + 0xdbc) = 0x1e;
            *(undefined4 *)(iVar11 + 0xdb8) = 0x1e;
          }
          FUN_00a8c5f0(0,param_1[0x13c],iVar5,0x111,0xffffffff);
        }
        uStack_1f8 = 1;
        iVar5 = FUN_00a82090("Wp0200",0x30200,auStack_1fc);
        if (iVar5 != 0) {
          uVar8 = FUN_00a7c7f0();
          FUN_00a7c960(uVar8);
          iVar11 = FUN_00a7c8a0();
          if (iVar11 != 0) {
            FUN_00547010(param_1[0x13c]);
            *(undefined4 *)(iVar11 + 0xd98) = 1;
            *(undefined4 *)(iVar11 + 0xdbc) = 0x1e;
            *(undefined4 *)(iVar11 + 0xdb8) = 0x1e;
          }
          FUN_00a8c5f0(1,param_1[0x13c],iVar5,0x110,0xffffffff);
        }
        uStack_1f8 = 1;
        iVar5 = FUN_00a82090("Wp0201",0x30201,auStack_1fc);
        if (iVar5 != 0) {
          FUN_00a8c5f0(2,param_1[0x13c],iVar5,0x112,0xffffffff);
          iVar5 = FUN_00a7c800();
          if (2 < *(short *)(iVar5 + 0x324)) {
            puVar1 = (uint *)(*(int *)(iVar5 + 800) + 0x118);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          uVar8 = FUN_00a7c7f0();
          FUN_00a7c960(uVar8);
          iVar5 = FUN_00a7c8a0();
          if (iVar5 != 0) {
            FUN_00547010(param_1[0x13c]);
            *(undefined4 *)(iVar5 + 0xd98) = 1;
            *(undefined4 *)(iVar5 + 0xdbc) = 0x1e;
            *(undefined4 *)(iVar5 + 0xdb8) = 0x1e;
          }
        }
        uStack_1f8 = 0;
        iVar5 = FUN_00a82090("Wp0201",0x30201,auStack_1fc);
        if (iVar5 != 0) {
          FUN_00a8c5f0(3,param_1[0x13c],iVar5,0x113,0xffffffff);
          iVar5 = FUN_00a7c800();
          if (1 < *(short *)(iVar5 + 0x324)) {
            puVar1 = (uint *)(*(int *)(iVar5 + 800) + 0xa8);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          uVar8 = FUN_00a7c7f0();
          FUN_00a7c960(uVar8);
          iVar5 = FUN_00a7c8a0();
          if (iVar5 != 0) {
            FUN_00547010(param_1[0x13c]);
            *(undefined4 *)(iVar5 + 0xd98) = 1;
            *(undefined4 *)(iVar5 + 0xdbc) = 0x1e;
            *(undefined4 *)(iVar5 + 0xdb8) = 0x1e;
          }
        }
      }
      param_1[0x585] = -0x40800000;
      param_1[0x830] = -0x40800000;
      param_1[0x586] = 0;
      *(undefined2 *)((int)param_1 + 0xe92) = 0;
      param_1[0x57c] = 0;
      param_1[0x57d] = 0;
      param_1[0x57e] = 0;
      param_1[0x580] = 0;
      param_1[0x769] = 0;
      param_1[0x76a] = 0;
      param_1[0x76b] = 0;
      param_1[0x76c] = 0;
      param_1[0x776] = 0;
      param_1[0x777] = 0;
      param_1[0x778] = 0;
      param_1[0x779] = 0;
      param_1[0x82c] = 0;
      param_1[0x82d] = 0;
      param_1[0x82e] = 0;
      param_1[0x82f] = 0;
      param_1[0x834] = 1;
      param_1[0x89f] = 0;
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        puStack_300 = (undefined4 *)0x0;
        do {
          puVar4 = puStack_300;
          iVar11 = param_1[200];
          iVar6 = *(int *)(*(int *)((int)puStack_300 + iVar11 + 0x60) + 0x40);
          if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"qterh"), iVar6 != 0)) {
            puVar1 = (uint *)((int)puVar4 + iVar11 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          puStack_300 = puStack_300 + 0x1c;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        puStack_300 = (undefined4 *)0x0;
        do {
          puVar4 = puStack_300;
          iVar11 = param_1[200];
          iVar6 = *(int *)(*(int *)((int)puStack_300 + iVar11 + 0x60) + 0x40);
          if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"kata_R"), iVar6 != 0)) {
            puVar1 = (uint *)((int)puVar4 + iVar11 + 0x38);
            *puVar1 = *puVar1 | 1;
          }
          puStack_300 = puStack_300 + 0x1c;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_01641490), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_0164148c), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar11 = 0;
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_01641488), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"btdes"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"ftdes"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_01641474), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"qtelh"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"in_R_reg"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"in_L_reg"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"in_head_top"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"in_head_down"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"wp_al"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"wp_ar"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar11 = 0;
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"wp_rl"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"wp_rr"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar11 = 0;
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_01641424), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      param_1[0x76e] = 0;
      param_1[0x76d] = 0;
      param_1[0x811] = 0;
      param_1[0x81c] = 0;
      param_1[0x77b] = 0;
      param_1[0x822] = 0x44160000;
      param_1[0x838] = 0;
      param_1[0x83f] = 0;
      param_1[0x89a] = 0;
      param_1[0x89b] = 0;
      param_1[0x89c] = 0;
      param_1[0x840] = -1;
      param_1[0x842] = -0x40800000;
      param_1[0x841] = -0x40800000;
      FUN_00a7c950();
      *(undefined2 *)(param_1 + 0x371) = 0;
      FUN_0054adc0();
      FUN_00a82790(param_1[0x13c],6,0);
      param_1[0x410] = param_1[0x410] | 2;
      FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3d75c28f,0x393702d3,0x3b8efa35);
      FUN_00a82870(0x3e860a92,0xbe860a92,0x3d75c28f,0x393702d3,0x3b8efa35);
      param_1[0x3a2] = 0;
      param_1[0x3a3] = 0;
      *(undefined2 *)(param_1 + 0x3a4) = 0;
      param_1[0x81d] = 0;
      FUN_00aa4080(8,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      switchD_0080dbae::default();
      iVar5 = FUN_00a12210(0x2b);
      param_1[0x754] = *(int *)(iVar5 + 0x40);
      param_1[0x755] = *(int *)(iVar5 + 0x44);
      param_1[0x756] = *(int *)(iVar5 + 0x48);
      param_1[0x757] = *(int *)(iVar5 + 0x4c);
      iVar5 = FUN_00a12210(0x20);
      param_1[0x758] = *(int *)(iVar5 + 0x40);
      param_1[0x759] = *(int *)(iVar5 + 0x44);
      param_1[0x75a] = *(int *)(iVar5 + 0x48);
      param_1[0x75b] = *(int *)(iVar5 + 0x4c);
      iVar5 = FUN_00ac45b0();
      param_1[0x2a2] = iVar5;
      param_1[0x2a1] = 0;
      if (iVar5 != 0) {
        piVar7 = (int *)FUN_00a7c8a0();
        if (piVar7 == (int *)0x0) {
          uVar10 = 0;
        }
        else {
          puVar13 = &DAT_01be9c24;
          (**(code **)(*piVar7 + 4))(&DAT_01be9c24);
          iVar5 = FUN_00dd6d80(puVar13);
          uVar10 = -(uint)(iVar5 != 0) & (uint)piVar7;
        }
        param_1[0x2a1] = uVar10;
      }
      if ((param_1[0x2a1] != 0) && (iVar5 = FUN_00a979d0(), iVar5 == 0)) {
        FUN_00a8d330(param_1 + 0x10,param_1[0x2a1] + 0x40);
      }
      piVar7 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(piVar7);
      FUN_00a8c420(0,"_sword");
      FUN_00a8c420(0,"_crkata");
      FUN_00a8c420(0,"_rhand");
      FUN_00a938c0(5);
      FUN_00a938c0(0xd);
      iVar5 = 0;
      param_1[0x769] = 1;
      if (0 < (short)param_1[0xc9]) {
        puStack_300 = (undefined4 *)0x0;
        do {
          puVar4 = puStack_300;
          iVar11 = param_1[200];
          iVar6 = *(int *)(*(int *)((int)puStack_300 + iVar11 + 0x60) + 0x40);
          if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"qterh"), iVar6 != 0)) {
            puVar1 = (uint *)((int)puVar4 + iVar11 + 0x38);
            *puVar1 = *puVar1 | 1;
          }
          puStack_300 = puStack_300 + 0x1c;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"kata_R"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar11 = 0;
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"right_arm"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar11 = 0;
      iVar5 = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"sword_R"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      iVar5 = FUN_00a81330();
      if (iVar5 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
        E3_EnemyBoardDebrisSokushi::vf4C();
      }
      FUN_00a7c950();
      (**(code **)(*param_1 + 0x358))(0x17,param_1 + 0x614);
      if (param_1[0x128] == 2) {
        FUN_00a938c0(6);
        FUN_00a938c0(0xe);
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"qtelh"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 | 1;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        iVar5 = FUN_00a81330();
        if (iVar5 != 0) {
          FUN_00a81330();
          FUN_00a7c8a0();
          E3_EnemyBoardDebrisSokushi::vf4C();
        }
        FUN_00a7c950();
        iVar5 = FUN_00a81330();
        if (iVar5 != 0) {
          FUN_00a81330();
          FUN_00a7c8a0();
          E3_EnemyBoardDebrisSokushi::vf4C();
        }
        FUN_00a7c950();
        param_1[0x76a] = 1;
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"kata_L"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"left_arm"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"missilepod_L"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        (**(code **)(*param_1 + 0x358))(0x18,param_1 + 0x614);
      }
      if (param_1[0x128] == 3) {
        (**(code **)(param_1[0x614] + 8))(0x3f800000,0,0);
        FUN_00a938c0(6);
        FUN_00a938c0(0xe);
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"R_side"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        iVar5 = FUN_00a81330();
        if (iVar5 != 0) {
          FUN_00a81330();
          FUN_00a7c8a0();
          E3_EnemyBoardDebrisSokushi::vf4C();
        }
        FUN_00a7c950();
        iVar5 = FUN_00a81330();
        if (iVar5 != 0) {
          FUN_00a81330();
          FUN_00a7c8a0();
          E3_EnemyBoardDebrisSokushi::vf4C();
        }
        FUN_00a7c950();
        pcVar3 = *(code **)(*param_1 + 0x358);
        param_1[0x76a] = 1;
        (*pcVar3)(0x18,param_1 + 0x614);
        FUN_00a8caf0(0x18,0,0,0);
      }
      if ((DAT_01b77cd4 & 1) != 0) {
        iVar11 = 0;
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"back_tail"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"front_tail"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        FUN_00a93780("_tail_f");
        FUN_00a93780("_tail_b");
        FUN_00a93780("_c1tail");
        FUN_00a93780("_c2tail");
        FUN_00a8c420(0,"_tail_f");
        FUN_00a8c420(0,"_tail_b");
        FUN_00a8c420(0,"_c1tail");
        FUN_00a8c420(0,"_c2tail");
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_016413d4), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"sip_01"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 | 1;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
      }
      if ((DAT_01b77cd4 & 2) != 0) {
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_01641490), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 | 1;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        iVar11 = 0;
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"head_top"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"in_head_top"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 | 1;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
      }
      if ((DAT_01b77cd4 & 4) != 0) {
        iVar11 = 0;
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"head_down"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"in_head_down"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 | 1;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,&DAT_01641424), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 | 1;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
      }
      if ((DAT_01b77cd4 & 8) != 0) {
        iVar11 = 0;
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"R_reg"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"in_R_reg"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 | 1;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
      }
      if ((DAT_01b77cd4 & 0x10) != 0) {
        iVar11 = 0;
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"L_reg"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"in_L_reg"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 | 1;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
      }
      if ((DAT_01b77cd4 & 0x40) != 0) {
        iVar5 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar11 = 0;
          do {
            iVar6 = param_1[200];
            iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
            if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"wp_al"), iVar9 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
              *puVar1 = *puVar1 | 1;
            }
            iVar5 = iVar5 + 1;
            iVar11 = iVar11 + 0x70;
          } while (iVar5 < (short)param_1[0xc9]);
        }
        iVar5 = FUN_00a81330();
        if (iVar5 != 0) {
          FUN_00a81330();
          FUN_00a7c8a0();
          E3_EnemyBoardDebrisSokushi::vf4C();
        }
        FUN_00a7c950();
      }
      if ((param_1[0x128] == 3) && (iVar5 = 0, 0 < (short)param_1[0xc9])) {
        iVar11 = 0;
        do {
          iVar6 = param_1[200];
          iVar9 = *(int *)(*(int *)(iVar6 + 0x60 + iVar11) + 0x40);
          if ((iVar9 != 0) && (iVar9 = FUN_00fdbbd0(iVar9,"R_side"), iVar9 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar11);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar5 = iVar5 + 1;
          iVar11 = iVar11 + 0x70;
        } while (iVar5 < (short)param_1[0xc9]);
      }
      return 1;
    }
  }
  return 0;
}

// 0054F6A0  Em020a::vf32C  size=2222  [class]
undefined4 __fastcall Em020a::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float10 fVar12;
  undefined4 uVar13;
  int local_308;
  int local_304;
  undefined4 local_300;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  int iStack_2e4;
  int local_2e0 [2];
  undefined1 uStack_2d8;
  byte bStack_2cf;
  float fStack_2b0;
  int iStack_1c0;
  undefined1 auStack_190 [396];
  
  iVar5 = FUN_00a8cab0();
  if ((param_1[0x779] == 0) && (param_1[0x828] != 0)) {
    *(int *)(param_1[0x828] + 0x44) = param_1[0x75d];
    *(int *)(param_1[0x828] + 0x48) = param_1[0x75e];
  }
  if ((param_1[0x778] == 0) && (param_1[0x829] != 0)) {
    *(int *)(param_1[0x829] + 0x44) = param_1[0x75f];
    *(int *)(param_1[0x829] + 0x48) = param_1[0x760];
  }
  if (param_1[0x82a] != 0) {
    *(int *)(param_1[0x82a] + 0x44) = param_1[0x763];
    *(int *)(param_1[0x82a] + 0x48) = param_1[0x764];
  }
  if (param_1[0x82b] != 0) {
    *(int *)(param_1[0x82b] + 0x44) = param_1[0x765];
    *(int *)(param_1[0x82b] + 0x48) = param_1[0x766];
  }
  param_1[0x77a] = 0;
  param_1[0x77c] = 0;
  param_1[0x77d] = 0;
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  FUN_00ac2080(1);
  FUN_00ac2080(6);
  FUN_00ac2080(8);
  FUN_00ac2080(0xe);
  iVar10 = param_1[0x19f];
  iVar9 = param_1[0x1a1] * 0x150 + iVar10;
  FUN_00445db0();
  FUN_004105d0();
  local_304 = -1;
  bVar4 = false;
  param_1[0x898] = 0;
  for (; iVar10 != iVar9; iVar10 = iVar10 + 0x150) {
    iVar6 = *(int *)(iVar10 + 4);
    if (local_304 <= iVar6) {
      FUN_00448f50(iVar10);
      bVar4 = true;
      FUN_00448f50(iVar10);
      local_304 = iVar6;
      if (*(int *)(iVar10 + 0x94) != 0) {
        param_1[0x898] = 1;
      }
    }
  }
  iVar10 = FUN_00a8ef10();
  if ((((iVar10 == 0) && ((*(byte *)(param_1 + 0x130) & 1) != 0)) && (param_1[0x139] == 0)) &&
     ((param_1[0x372] == 0 && (iVar10 = FUN_00a8f040(local_2e0), iVar10 == 0)))) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
    if (param_1[0x286] != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    local_300 = 0;
    if (bVar4) {
      iVar10 = FUN_00a81330();
      piVar11 = (int *)0x0;
      if (iVar10 != 0) {
        piVar11 = (int *)FUN_00a7c8a0();
      }
      if (piVar11 == param_1) {
        (**(code **)(*param_1 + 0x198))(piVar11,local_2e0,0x10);
      }
      else {
        iVar9 = FUN_004025b0();
        if (iVar9 != 0) {
          iVar9 = FUN_00fdbc60();
          (**(code **)(*param_1 + 0x30c))(iVar9,0);
          if ((piVar11 != (int *)0x0) && ((*(byte *)(piVar11 + 0x130) & 0x10) != 0)) {
            (**(code **)(*param_1 + 0x21c))(piVar11,uStack_2d8,0x3c23d70a,0);
          }
          pcVar2 = *(code **)(*param_1 + 0x198);
          param_1[0x767] = iStack_1c0;
          (*pcVar2)(piVar11,&uStack_2e8,1);
          fVar12 = (float10)FUN_00ddba30(fStack_2b0 - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar12;
          if (param_1[0x21c] < 0xb) {
            param_1[0x21c] = 10;
            if (param_1[0x128] == 0) {
              FUN_00a8caf0(0xb,0,0,0);
              iStack_2e4 = param_1[0x17];
              uStack_2f0 = 0x439b0000;
              uStack_2ec = 0x418b999a;
              uStack_2e8 = 0x43548000;
              (**(code **)(*param_1 + 0x6c))(&uStack_2f0);
              FUN_00c81e40(2);
              FUN_00547eb0();
            }
            param_1[0x139] = 1;
          }
          else {
            if (((param_1[0x767] == 0xb) && (-1 < param_1[0x763])) &&
               (iVar6 = param_1[0x763] - iVar9, param_1[0x763] = iVar6, iVar6 < 0)) {
              param_1[0x763] = -1;
              param_1[0x76b] = 1;
              local_308 = 0;
              if (0 < (short)param_1[0xc9]) {
                iVar6 = 0;
                do {
                  iVar3 = param_1[200];
                  iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                  if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"back_tail"), iVar7 != 0)) {
                    puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                    *puVar1 = *puVar1 & 0xfffffffe;
                  }
                  local_308 = local_308 + 1;
                  iVar6 = iVar6 + 0x70;
                } while (local_308 < (short)param_1[0xc9]);
              }
              iVar6 = 0;
              local_308 = 0;
              if (0 < (short)param_1[0xc9]) {
                do {
                  iVar3 = param_1[200];
                  iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                  if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"front_tail"), iVar7 != 0)) {
                    puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                    *puVar1 = *puVar1 & 0xfffffffe;
                  }
                  local_308 = local_308 + 1;
                  iVar6 = iVar6 + 0x70;
                } while (local_308 < (short)param_1[0xc9]);
              }
              FUN_00a93780("_tail_f");
              FUN_00a93780("_tail_b");
              FUN_00a93780("_c1tail");
              FUN_00a93780("_c2tail");
              FUN_00a8c420(0,"_tail_f");
              FUN_00a8c420(0,"_tail_b");
              FUN_00a8c420(0,"_c1tail");
              FUN_00a8c420(0,"_c2tail");
              uVar13 = 0;
              uVar8 = FUN_00a12210(0x36);
              FUN_00a85150(uVar8,uVar13);
              uVar13 = 0;
              uVar8 = FUN_00a12210(0x3b);
              FUN_00a85150(uVar8,uVar13);
              FUN_00916360();
              FUN_00916360();
              FUN_00eaa6e0(0x41f00000,0);
              (**(code **)(*param_1 + 0x358))(0x1a,param_1 + 0x640);
              if (param_1[0x82a] != 0) {
                *(undefined4 *)(param_1[0x82a] + 0x34) = 0;
              }
              if (param_1[0x82b] != 0) {
                *(undefined4 *)(param_1[0x82b] + 0x34) = 0;
              }
              FUN_0040b190();
              iVar6 = FUN_00a82090("Em020aTail",0x20202,auStack_190);
              if (iVar6 != 0) {
                iVar6 = FUN_00a7c8a0();
                uVar8 = 0;
                if (param_1[0x765] < 0) {
                  uVar8 = 2;
                }
                if (iVar6 != 0) {
                  FUN_00aea630(param_1[0x13c],uVar8);
                }
              }
            }
            if (((param_1[0x767] == 0xc) && (-1 < param_1[0x765])) &&
               (iVar6 = param_1[0x765] - iVar9, param_1[0x765] = iVar6, iVar6 < 0)) {
              param_1[0x765] = -1;
              param_1[0x76c] = 1;
              local_308 = 0;
              if (0 < (short)param_1[0xc9]) {
                iVar6 = 0;
                do {
                  iVar3 = param_1[200];
                  iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar6) + 0x40);
                  if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"back_tail"), iVar7 != 0)) {
                    puVar1 = (uint *)(iVar3 + 0x38 + iVar6);
                    *puVar1 = *puVar1 & 0xfffffffe;
                  }
                  local_308 = local_308 + 1;
                  iVar6 = iVar6 + 0x70;
                } while (local_308 < (short)param_1[0xc9]);
              }
              FUN_00a93780("_tail_b");
              FUN_00a93780("_c2tail");
              FUN_00a8c420(0,"_tail_b");
              FUN_00a8c420(0,"_c2tail");
              uVar13 = 0;
              uVar8 = FUN_00a12210(0x3b);
              FUN_00a85150(uVar8,uVar13);
              if (param_1[0x82b] != 0) {
                *(undefined4 *)(param_1[0x82b] + 0x34) = 0;
              }
              FUN_00916360();
              (**(code **)(*param_1 + 0x358))(0x1b,param_1 + 0x66c);
              FUN_0040b190();
              iVar6 = FUN_00a82090("Em020aTail",0x20202,auStack_190);
              if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
                FUN_00aea630(param_1[0x13c],1);
              }
            }
            iVar6 = param_1[0x767];
            if ((iVar6 == 1) || (iVar6 == 8)) {
              param_1[0x77a] = 1;
            }
            if ((iVar6 == 3) || (iVar6 == 10)) {
              param_1[0x77c] = 1;
            }
            if ((iVar6 == 2) || (iVar6 == 9)) {
              param_1[0x77d] = 1;
            }
            if ((iVar5 != 0xc) && ((iVar6 == 1 || (iVar6 == 8)))) {
              param_1[0x761] = param_1[0x761] - iVar9;
              param_1[0x80c] = 0x42200000;
              param_1[0x773] = param_1[0x773] + 1;
              param_1[0x77a] = 1;
              if (param_1[0x761] < 0) {
                iVar5 = FUN_00fdbc60();
                param_1[0x761] = iVar5;
                FUN_00a8caf0(0xc,0,0,0);
                param_1[0x81d] = param_1[0x81d] + 1;
                if (1 < param_1[0x81d]) {
                  param_1[0x81d] = 0;
                  if (param_1[0x77b] == 0) {
                    (**(code **)(*param_1 + 0x358))(0x33,param_1 + 0x698);
                  }
                  param_1[0x77b] = 1;
                }
                param_1[0x840] = -1;
                if ((*(byte *)(param_1 + 0x371) & 3) != 3) {
                  param_1[0x840] = 0xc;
                  param_1[0x842] = 0x41200000;
                  param_1[0x841] = 0x42340000;
                }
                goto LAB_0054ff3f;
              }
            }
            if (local_2e0[0] == 0x2c) {
              (**(code **)(*param_1 + 0x14c))(9,iVar10);
            }
            if ((param_1[0x767] == 1) && (4 < bStack_2cf)) {
              FUN_00aa4080(0x5a,3,0x3d088889,0x3f000000,0x8000010,0,0x3fc00000);
            }
            (**(code **)(*param_1 + 0x1d8))();
            local_300 = 1;
          }
        }
      }
LAB_0054ff3f:
      if (param_1[0x286] != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return local_300;
    }
    if (param_1[0x286] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}

// 0054FF60  FUN_0054ff60  size=892  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0054ff60(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  float fVar5;
  float local_138 [2];
  int local_130 [4];
  undefined1 local_120 [284];
  
  if ((float)param_1[0x822] <= 0.0) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        iVar2 = FUN_00a7c8a0();
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0xd90) = 1;
        }
      }
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        iVar2 = FUN_00a7c8a0();
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0xd90) = 1;
        }
      }
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        iVar2 = FUN_00a7c8a0();
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0xd90) = 1;
        }
      }
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        iVar2 = FUN_00a7c8a0();
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0xd90) = 1;
        }
      }
    }
  }
  iVar2 = param_1[0x187];
  param_1[0x3a2] = 0;
  if (iVar2 == 0) {
    FUN_00aa4080(0x27,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar2 = param_1[0x246];
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00e26e90();
    *(undefined4 *)(iVar2 + 0xe4) = 0;
    *(undefined4 *)(iVar2 + 0xe8) = 0;
    *(undefined4 *)(iVar2 + 0xec) = 0;
    param_1[0x83a] = param_1[0x15];
    param_1[0x58d] = 1;
    param_1[0x838] = 1;
    param_1[0x248] = 0x40400000;
    pcVar1 = *(code **)(param_1[0x374] + 8);
    param_1[0x1bb] = 0;
    param_1[0x250] = 0;
    (*pcVar1)(0x41200000,0,0);
  }
  else if (iVar2 != 1) {
    if (iVar2 == 2) {
      param_1[0x187] = 3;
    }
    goto LAB_005502b5;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (((float)param_1[0x248] < 0.0) && (param_1[0x250] == 0)) {
    FUN_00e01ca0();
    local_130[1] = 0x41b00000;
    local_130[2] = 0x42f40000;
    local_130[0] = param_1[0x14];
    FUN_00e015d0(0xa00,3,local_130,local_120);
    param_1[0x250] = 1;
  }
  fVar5 = (float)param_1[0x244] * 1.5;
  uVar4 = 0x3c23d70a;
  fVar3 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar5);
  FUN_00a981b0(param_1 + 0x14,param_1 + 0x14,&DAT_01881420,(float)fVar3,uVar4,fVar5);
  local_138[1] = 132.5;
  fVar5 = (float)param_1[0x244] * 0.5;
  uVar4 = 0x3c23d70a;
  fVar3 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar5);
  FUN_00a981b0(param_1 + 0x16,param_1 + 0x16,local_138 + 1,(float)fVar3,uVar4,fVar5);
  iVar2 = FUN_00a950a0(0,0x42c80000);
  if (iVar2 != 0) {
    local_138[0] = (float)param_1[0x83a] - 4.0;
    fVar5 = (float)param_1[0x244] * 0.3;
    uVar4 = 0x3dcccccd;
    fVar3 = (float10)FUN_00fdc1f0(0x3dcccccd,fVar5);
    FUN_00a981b0(param_1 + 0x15,param_1 + 0x15,local_138,(float)fVar3,uVar4,fVar5);
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x34c);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)();
  }
LAB_005502b5:
  fVar5 = (float)param_1[0x248];
  if (!NAN(fVar5) && 0.0 < fVar5 != (fVar5 == 0.0)) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 005502E0  FUN_005502e0  size=1728  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005502e0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_4a0;
  float local_49c;
  float local_498;
  undefined4 local_494;
  float local_490 [10];
  float local_468;
  float local_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  uint local_440 [5];
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined2 local_420;
  int local_41c;
  uint uStack_3a4;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_2d0;
  undefined2 local_2c6;
  undefined4 local_160;
  undefined1 local_120 [284];
  
  local_490[0] = 2.86986e-42;
  local_490[1] = 2.87126e-42;
  local_490[2] = 2.87266e-42;
  local_490[3] = 2.87406e-42;
  local_490[4] = 2.87546e-42;
  local_490[5] = 2.87687e-42;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2a,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x1bb] = 0;
    param_1[0x838] = 1;
    FUN_00e01ca0();
    FUN_00dffb30(param_1 + 0x590);
    FUN_00e021c0(param_1);
    uVar4 = FUN_00e00260(param_1[300]);
    FUN_00e00fb0(uVar4,9,local_120);
    param_1[0x24a] = 0x41700000;
    param_1[0x252] = 0;
    FUN_00546f50();
    FUN_00a8d280();
    goto LAB_005503f9;
  case 1:
LAB_005503f9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x14] = (int)((_DAT_01881420 - (float)param_1[0x14]) * 0.4 + (float)param_1[0x14]);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x24a];
    param_1[0x24a] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      iVar3 = FUN_00a12210(local_490[param_1[0x252]]);
      local_464 = *(float *)(iVar3 + 0x34);
      local_468 = *(float *)(iVar3 + 0x38);
      local_4a0 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                       *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10) +
                       *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
      local_49c = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                       *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                       *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
      fVar6 = SQRT((float10)local_468 * (float10)local_468 +
                   (float10)local_464 * (float10)local_464 +
                   (float10)*(float *)(iVar3 + 0x30) * (float10)*(float *)(iVar3 + 0x30));
      fVar7 = (float10)fpatan((float10)*(float *)(iVar3 + 0x28) / fVar6,
                              (float10)*(float *)(iVar3 + 0x38) / fVar6);
      local_490[0] = (float)fVar7;
      fVar6 = (float10)FUN_00ddbaa0((float)-((float10)*(float *)(iVar3 + 0x18) / fVar6));
      local_490[1] = (float)fVar6;
      fVar6 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)local_49c,
                              (float10)*(float *)(iVar3 + 0x10) / (float10)local_4a0);
      local_490[2] = (float)fVar6;
      local_460 = *(undefined4 *)(iVar3 + 0x40);
      local_45c = *(undefined4 *)(iVar3 + 0x44);
      local_458 = *(undefined4 *)(iVar3 + 0x48);
      local_454 = *(undefined4 *)(iVar3 + 0x4c);
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      local_32c = 6;
      local_440[1] = 0x3b002;
      local_2d0 = FUN_009f8b40();
      local_41c = param_1[0x13c];
      local_330 = 0x16;
      local_42c = 100;
      local_424 = 0x1e;
      local_428 = 0x96;
      local_420 = 0xa00;
      uVar4 = FUN_00a7c7f0();
      FUN_00a7c960(uVar4);
      local_440[0] = local_440[0] | 4;
      iVar5 = param_1[0x2a1];
      local_2c6 = *(undefined2 *)(iVar3 + 0xa0);
      local_4a0 = *(float *)(iVar5 + 0x40);
      local_49c = *(float *)(iVar5 + 0x44);
      local_498 = *(float *)(iVar5 + 0x48);
      local_494 = *(undefined4 *)(iVar5 + 0x4c);
      local_450 = 0;
      local_44c = 0;
      local_448 = 0;
      FUN_0043fed0(0,0,&local_450);
      fVar6 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
      local_4a0 = (float)(fVar6 + (float10)local_4a0);
      fVar6 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
      local_498 = (float)(fVar6 + (float10)local_498);
      local_160 = 1;
      FUN_00416e30(&local_460,&local_4a0,local_490,0x3f800000,0x44480000);
      FUN_00ad3be0(param_1[0x13c],local_440);
      param_1[0x24a] = 0x41f00000;
      param_1[0x252] = param_1[0x252] + 1;
      if (5 < (uint)param_1[0x252]) {
        param_1[0x252] = 0;
      }
    }
    break;
  case 2:
    FUN_00a8d280();
    FUN_00aa4080(0x2b,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar2 = *(code **)(param_1[0x590] + 8);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)(0x41200000,0,0);
    (**(code **)(param_1[0x590] + 8))(0x41200000,0,0);
    if (param_1[0x57c] != 0) {
      FUN_00ad0a90();
    }
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_330 = 0x35;
    local_2d0 = FUN_009f8b40();
    local_41c = param_1[0x13c];
    local_42c = 300;
    local_424 = 300;
    local_428 = 0x96;
    local_420 = 0xa00;
    uVar4 = FUN_00a7c7f0();
    FUN_00a7c960(uVar4);
    uStack_3a4 = uStack_3a4 | 0x8000000;
    iVar5 = FUN_00ad09e0(param_1[0x13c],6,local_440);
    param_1[0x248] = 0x43960000;
    param_1[0x57c] = iVar5;
    param_1[0x250] = 0;
    FUN_00e01ca0();
    local_490[1] = 22.0;
    local_490[2] = 106.5;
    local_490[0] = (float)param_1[0x14];
    FUN_00e015d0(0xa00,2,local_490,local_120);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00ad0a90();
      pcVar2 = *(code **)(param_1[0x590] + 8);
      param_1[0x57c] = 0;
      (*pcVar2)(0x41200000,0,0);
    }
    if (((int *)param_1[0x2a1] != (int *)0x0) &&
       (iVar5 = (**(code **)(*(int *)param_1[0x2a1] + 0x1fc))(), iVar5 != 0)) {
      param_1[0x250] = 1;
    }
    break;
  case 4:
    FUN_00aa4080(0x2c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      fVar6 = (float10)FUN_00dde300(0x40400000,0x40800000);
      param_1[0x3a1] = (int)(float)(fVar6 * (float10)60.0);
    }
  }
  fVar1 = (float)param_1[0x248];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 005509C0  FUN_005509c0  size=1679  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005509c0(int *param_1)

{
  float fVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float afStack_37c [3];
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  float local_360 [9];
  uint auStack_33c [4];
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_31c;
  int iStack_318;
  undefined4 uStack_314;
  undefined1 uStack_310;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined2 uStack_1c2;
  undefined4 uStack_1c0;
  undefined4 uStack_5c;
  
  if ((float)param_1[0x822] <= 0.0) {
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
  }
  local_360[0] = 2.86986e-42;
  local_360[1] = 2.87126e-42;
  local_360[2] = 2.87266e-42;
  local_360[3] = 2.87406e-42;
  local_360[4] = 2.87546e-42;
  local_360[5] = 2.87687e-42;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2a,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24a] = 0x41200000;
    local_370 = 0x439a95c3;
    param_1[0x1bb] = 0;
    local_36c = 0x41a80000;
    param_1[0x252] = 0;
    local_368 = 0x42ce8a3d;
    param_1[0x838] = 1;
    FUN_0054c910(&local_370,0x3e4ccccd);
    FUN_00546f50();
  case 1:
    param_1[0x24a] = (int)((float)param_1[0x24a] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x14] = (int)((_DAT_01881420 - (float)param_1[0x14]) * 0.4 + (float)param_1[0x14]);
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) || ((float)param_1[0x24a] < 0.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x2b,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43960000;
    param_1[0x250] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (0.0 <= (float)param_1[0x248]) {
      if (((int *)param_1[0x2a1] == (int *)0x0) ||
         (iVar3 = (**(code **)(*(int *)param_1[0x2a1] + 0x1fc))(), iVar3 == 0)) {
        fVar1 = (float)param_1[0x24a];
        param_1[0x24a] = (int)(fVar1 - (float)param_1[0x244]);
        if ((fVar1 - (float)param_1[0x244] < 0.0) && (iVar3 = FUN_00548550(), iVar3 != 0)) {
          iVar3 = FUN_00a12210(local_360[param_1[0x252]]);
          fStack_380 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) +
                            *(float *)(iVar3 + 0x10) * *(float *)(iVar3 + 0x10) +
                            *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
          afStack_37c[0] =
               SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                    *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                    *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
          fVar1 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
                       *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
                       *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
          fStack_388 = *(float *)(iVar3 + 0x28) / fVar1;
          fStack_384 = *(float *)(iVar3 + 0x38) / fVar1;
          fVar5 = (float10)FUN_00ddbaa0(-(*(float *)(iVar3 + 0x18) / fVar1));
          fVar6 = (float10)fpatan((float10)fStack_388,(float10)fStack_384);
          local_360[0] = (float)fVar6;
          local_360[1] = (float)fVar5;
          fVar5 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)afStack_37c[0],
                                  (float10)*(float *)(iVar3 + 0x10) / (float10)fStack_380);
          local_360[2] = (float)fVar5;
          local_370 = *(undefined4 *)(iVar3 + 0x40);
          local_36c = *(undefined4 *)(iVar3 + 0x44);
          local_368 = *(undefined4 *)(iVar3 + 0x48);
          uStack_364 = *(undefined4 *)(iVar3 + 0x4c);
          FUN_0041fee0();
          uStack_21c = 6;
          uStack_32c = 0x3b002;
          uStack_1c0 = FUN_009f8b40();
          uStack_220 = 0x16;
          uStack_31c = 100;
          uStack_314 = 0x1e;
          uStack_310 = 0;
          iStack_318 = 0x96;
          uVar4 = FUN_00ac84d0(0x19);
          fStack_38c = (float)(**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x19);
          fStack_38c = (float)(**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x19);
          uVar2 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x19);
          iStack_318 = param_1[0x13c];
          uStack_31c._0_2_ = CONCAT11(10,uVar2);
          uStack_328 = uVar4;
          uVar4 = FUN_00a7c7f0();
          FUN_00a7c960(uVar4);
          auStack_33c[0] = auStack_33c[0] | 4;
          uStack_1c2 = *(undefined2 *)(iVar3 + 0xa0);
          iVar3 = param_1[0x2a1];
          fStack_38c = *(float *)(iVar3 + 0x40);
          fStack_388 = *(float *)(iVar3 + 0x44);
          fStack_384 = *(float *)(iVar3 + 0x48);
          fStack_380 = *(float *)(iVar3 + 0x4c);
          local_360[5] = 0.0;
          local_360[6] = 0.0;
          local_360[7] = 0.0;
          FUN_0043fed0(0,0,local_360 + 5);
          fVar5 = (float10)FUN_00dde300(0,0);
          fStack_38c = (float)(fVar5 + (float10)fStack_38c);
          fVar5 = (float10)FUN_00dde300(0,0);
          fStack_384 = (float)(fVar5 + (float10)fStack_384);
          uStack_5c = 1;
          FUN_00416e30(afStack_37c,&fStack_38c,&local_36c,0x3f800000,0x44480000);
          FUN_00ad3be0(param_1[0x13c],auStack_33c);
          param_1[0x252] = param_1[0x252] + 1;
          param_1[0x24a] = 0x41f00000;
          if (5 < (uint)param_1[0x252]) {
            param_1[0x252] = 0;
          }
        }
      }
      else {
        param_1[0x250] = 1;
      }
    }
    else {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0x2c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00548500();
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      fVar5 = (float10)FUN_00dde300(0x40400000,0x40800000);
      param_1[0x3a1] = (int)(float)(fVar5 * (float10)60.0);
    }
  }
  fVar1 = (float)param_1[0x248];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 00551070  FUN_00551070  size=323  [between]
void __fastcall FUN_00551070(int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_120 [284];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x2f,0,0x3f888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x6ec) = 0;
    if (*(int *)(param_1 + 0x20e0) != 0) {
      FUN_00e01ca0();
      local_12c = 0x41b00000;
      local_128 = 0x42f40000;
      local_130 = *(undefined4 *)(param_1 + 0x50);
      FUN_00e015d0(0xa00,3,&local_130,local_120);
    }
    *(undefined4 *)(param_1 + 0x20e0) = 0;
    *(undefined4 *)(param_1 + 0x1634) = 1;
    if (*(int *)(param_1 + 0x15f0) != 0) {
      FUN_00ad0a90();
    }
    pcVar1 = *(code **)(*(int *)(param_1 + 0x1640) + 8);
    *(undefined4 *)(param_1 + 0x15f0) = 0;
    (*pcVar1)(0x41200000,0,0);
    FUN_00c81e40(2);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00c81e40(2);
  }
  return;
}

// 005511C0  FUN_005511c0  size=1033  [between]
void __fastcall FUN_005511c0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
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
  
  local_450 = 0;
  local_44c = 0;
  local_448 = 0x41a1c28f;
  FUN_00547930(param_1 + 0x14,&local_450);
  uVar5 = 0x40200000;
  uVar2 = 0x3ee66666;
  if (param_1[0x186] == 0x13) {
    uVar5 = 0x3f800000;
    uVar2 = 0x3f800000;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x41,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,uVar5);
    param_1[0x248] = 0x42700000;
    pcVar1 = *(code **)(param_1[0x590] + 8);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x1bb] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    (*pcVar1)(0x42700000,0,0);
    if (param_1[0x57c] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x57c] = 0;
    param_1[0x89b] = 0;
    param_1[0x89a] = 0;
    param_1[0x89c] = 0;
    goto LAB_005512da;
  case 1:
LAB_005512da:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    goto LAB_005512ec;
  case 2:
    FUN_00aa4080(0x43,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,uVar5);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00e01ca0();
    FUN_00dffb30(param_1 + 0x590);
    FUN_00e021c0(param_1);
    uVar5 = FUN_00e00260(param_1[300]);
    FUN_00e00fb0(uVar5,4,local_120);
    param_1[0x89b] = 0;
    param_1[0x89a] = 0;
    param_1[0x89c] = 0;
    break;
  case 3:
  case 5:
    break;
  case 4:
    uVar3 = 0x44;
    if (param_1[0x186] == 0x13) {
      uVar3 = 0x4c;
    }
    FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,0x8000000,0,uVar2);
    pcVar1 = *(code **)(param_1[0x590] + 8);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x42700000,0,0);
    if (param_1[0x57c] != 0) {
      FUN_00ad0a90();
    }
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    uStack_33c = 0x56;
    uStack_2dc = FUN_009f8b40();
    uStack_438 = 100;
    uStack_430 = 0x1e;
    uStack_42c = uStack_42c & 0xffffff00;
    uStack_434 = 0x96;
    uVar4 = FUN_00ac84d0(0x1d);
    uVar5 = (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x1d);
    (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x1d);
    uStack_420 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x1d);
    uStack_3a4 = uStack_3a4 | 0x8000000;
    iStack_41c = param_1[0x13c];
    uStack_41f = 10;
    uStack_42c = uVar4;
    uStack_424 = uVar5;
    uVar5 = FUN_00a7c7f0();
    FUN_00a7c960(uVar5);
    iVar6 = FUN_00ad09e0(param_1[0x13c],6,auStack_440);
    param_1[0x57c] = iVar6;
    FUN_005483f0();
    break;
  case 6:
    FUN_00aa4080(0x45,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,uVar5);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x57c] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x57c] = 0;
    goto LAB_0055158b;
  case 7:
LAB_0055158b:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_00551229_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_005512ec:
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00551229_default:
  return;
}

// 005515F0  FUN_005515f0  size=784  [between]
void __fastcall FUN_005515f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 local_460;
  undefined4 local_45c;
  undefined4 local_458;
  float afStack_450 [2];
  float fStack_448;
  undefined1 auStack_440 [20];
  undefined4 uStack_42c;
  undefined4 uStack_424;
  undefined1 uStack_420;
  undefined1 uStack_41f;
  int iStack_41c;
  uint uStack_3a4;
  undefined4 uStack_33c;
  undefined4 uStack_2dc;
  undefined1 local_120 [284];
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x47,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f8ccccd);
    param_1[0x187] = param_1[0x187] + 1;
    local_460 = 0;
    local_45c = 0;
    local_458 = 0x41a1c28f;
    param_1[0x1bb] = 0;
    param_1[0x250] = 0;
    FUN_00547930(param_1 + 0x14,&local_460);
    if (param_1[0x57c] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x57c] = 0;
    param_1[0x24] = 0x3da0d97c;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a952e0(0,0x433e0000);
  if (iVar1 != 0) {
    FUN_00e01ca0();
    FUN_00dffb30(param_1 + 0x590);
    FUN_00e021c0(param_1);
    uVar2 = FUN_00e00260(param_1[300]);
    FUN_00e00fb0(uVar2,4,local_120);
  }
  iVar1 = FUN_00a952e0(0,0x43630000);
  if (iVar1 != 0) {
    (**(code **)(param_1[0x590] + 8))(0x42700000,0,0);
    if (param_1[0x57c] != 0) {
      FUN_00ad0a90();
    }
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    uStack_33c = 0x56;
    uStack_2dc = FUN_009f8b40();
    uVar2 = FUN_00ac84d0(0x1d);
    uVar3 = (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x1d);
    (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x1d);
    uStack_420 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x1d);
    uStack_3a4 = uStack_3a4 | 0x8000000;
    iStack_41c = param_1[0x13c];
    uStack_41f = 10;
    uStack_42c = uVar2;
    uStack_424 = uVar3;
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    iVar1 = FUN_00ad09e0(param_1[0x13c],6,auStack_440);
    param_1[0x57c] = iVar1;
  }
  iVar1 = FUN_00a952e0(0,0x432a0000);
  if (iVar1 != 0) {
    param_1[0x250] = 1;
  }
  if (param_1[0x250] != 0) {
    uStack_470 = 0;
    uStack_46c = 0;
    uStack_468 = 0x417051ec;
    FUN_00547930(afStack_450,&uStack_470);
    fVar4 = (float10)FUN_00fdc1f0();
    param_1[0x14] =
         (int)(float)(((float10)afStack_450[0] - (float10)(float)param_1[0x14]) * fVar4 +
                     (float10)(float)param_1[0x14]);
    param_1[0x16] =
         (int)(float)(((float10)fStack_448 - (float10)(float)param_1[0x16]) * fVar4 +
                     (float10)(float)param_1[0x16]);
  }
  iVar1 = FUN_00a952e0(0,0x43e60000);
  if (iVar1 != 0) {
    if (param_1[0x57c] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x57c] = 0;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 00551900  FUN_00551900  size=510  [between]
void __fastcall FUN_00551900(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_124;
  undefined1 local_120 [284];
  
  switch(*(undefined1 *)(param_1 + 0xe90)) {
  case 0:
    FUN_00aa4080(0x58,2,0x3e888889,0x3f333333,0x10,0,0x3f800000);
    *(char *)(param_1 + 0xe90) = *(char *)(param_1 + 0xe90) + '\x01';
  case 1:
    if ((*(int *)(param_1 + 0xe88) == 1) || (iVar5 = FUN_00a8c760(0x35), iVar5 != 0)) {
      *(char *)(param_1 + 0xe90) = *(char *)(param_1 + 0xe90) + '\x01';
    }
    break;
  case 2:
    FUN_00a94bc0(2,0x3e888889);
    *(char *)(param_1 + 0xe90) = *(char *)(param_1 + 0xe90) + '\x01';
  case 3:
    if ((*(int *)(param_1 + 0xe88) == 0) && (iVar5 = FUN_00a8c760(0x35), iVar5 == 0)) {
      *(undefined1 *)(param_1 + 0xe90) = 0;
    }
  }
  iVar5 = 0;
  if (*(int *)(param_1 + 0x1630) == 0) {
    if (*(int *)(param_1 + 0x1634) == 0) {
      *(undefined4 *)(param_1 + 0x1630) = 1;
      FUN_00e01ca0();
      FUN_00dffb30(param_1 + 0x17a0);
      FUN_00e021c0(param_1);
      uVar4 = FUN_00e00260(*(undefined4 *)(param_1 + 0x4b0));
      FUN_00e00fb0(uVar4,2,local_120);
      local_124 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          iVar2 = *(int *)(param_1 + 800);
          iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0164152c), iVar3 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          local_124 = local_124 + 1;
          iVar5 = iVar5 + 0x70;
        } while (local_124 < *(short *)(param_1 + 0x324));
      }
    }
  }
  else if (*(int *)(param_1 + 0x1634) != 0) {
    *(undefined4 *)(param_1 + 0x1630) = 0;
    FUN_00eaa6e0(0x41f00000,0);
    local_124 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0164152c), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        local_124 = local_124 + 1;
        iVar5 = iVar5 + 0x70;
      } while (local_124 < *(short *)(param_1 + 0x324));
    }
  }
  *(undefined4 *)(param_1 + 0xe88) = 0;
  *(undefined4 *)(param_1 + 0xe8c) = 0;
  return;
}

// 00551B20  FUN_00551b20  size=94  [between]
void __thiscall FUN_00551b20(int param_1,undefined4 param_2,undefined4 param_3)

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
  FUN_00a8c8b0(0x20200,local_160);
  return;
}

// 00551B80  Em020a::vf358  size=101  [class]
void __thiscall Em020a::vf358(int param_1,undefined4 param_2,int param_3)

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
  FUN_00a8c8b0(0x20200,local_160);
  return;
}

// 00551BF0  FUN_00551bf0  size=135  [callgraph]
void __thiscall FUN_00551bf0(int param_1,undefined4 param_2,undefined4 *param_3)

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
  uVar1 = FUN_00e00b40(0x20200,puVar3);
  FUN_00a8c930(uVar1,puVar3);
  return;
}

// 00551C80  FUN_00551c80  size=132  [callgraph]
void __fastcall FUN_00551c80(int param_1)

{
  float fVar1;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_120 [284];
  
  if ((*(int *)(param_1 + 0x20f0) != 0) &&
     (fVar1 = *(float *)(param_1 + 0x20f4) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x20f4) = fVar1, fVar1 < 0.0)) {
    FUN_00e01ca0();
    local_12c = 0x41b00000;
    local_128 = 0x42fc0000;
    local_130 = *(undefined4 *)(param_1 + 0x20f8);
    FUN_00e015d0(0xa00,2,&local_130,local_120);
    *(undefined4 *)(param_1 + 0x20f0) = 0;
  }
  return;
}

// 00551D10  FUN_00551d10  size=3779  [callgraph]
void __fastcall FUN_00551d10(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float local_3a4;
  int iStack_3a0;
  float local_39c;
  int local_398 [7];
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 uStack_360;
  undefined1 auStack_35c [4];
  undefined4 uStack_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  uint auStack_33c [4];
  undefined4 local_32c;
  float fStack_328;
  int iStack_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined1 local_310;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 uStack_1c8;
  undefined2 uStack_1c4;
  undefined2 uStack_1c2;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  float fStack_1b0;
  
  local_398[0] = 0x800;
  fVar3 = *(float *)(param_1 + 0x226c) - *(float *)(param_1 + 0x910);
  local_398[1] = 0x801;
  local_398[2] = 0x802;
  local_398[3] = 0x803;
  *(float *)(param_1 + 0x226c) = fVar3;
  local_398[4] = 0x804;
  local_398[5] = 0x805;
  if (fVar3 < 0.0) {
    iVar5 = FUN_00a12210(local_398[*(int *)(param_1 + 0x2270)]);
    pfVar1 = (float *)(iVar5 + 0x10);
    local_354 = *(float *)(iVar5 + 0x34);
    local_39c = *(float *)(iVar5 + 0x38);
    local_3a8 = SQRT(*(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14) +
                     *(float *)(iVar5 + 0x10) * *(float *)(iVar5 + 0x10) +
                     *(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18));
    local_3a4 = SQRT(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                     *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24) +
                     *(float *)(iVar5 + 0x28) * *(float *)(iVar5 + 0x28));
    fVar7 = SQRT((float10)local_39c * (float10)local_39c +
                 (float10)local_354 * (float10)local_354 +
                 (float10)*(float *)(iVar5 + 0x30) * (float10)*(float *)(iVar5 + 0x30));
    fVar8 = (float10)fpatan((float10)*(float *)(iVar5 + 0x28) / fVar7,
                            (float10)*(float *)(iVar5 + 0x38) / fVar7);
    local_350 = (float)fVar8;
    fVar7 = (float10)FUN_00ddbaa0((float)-((float10)*(float *)(iVar5 + 0x18) / fVar7));
    local_34c = (float)fVar7;
    fVar7 = (float10)fpatan((float10)*(float *)(iVar5 + 0x14) / (float10)local_3a4,
                            (float10)*pfVar1 / (float10)local_3a8);
    local_348 = (float)fVar7;
    local_370 = *(undefined4 *)(iVar5 + 0x40);
    local_36c = *(undefined4 *)(iVar5 + 0x44);
    local_368 = *(undefined4 *)(iVar5 + 0x48);
    local_364 = *(undefined4 *)(iVar5 + 0x4c);
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_21c = 9;
    local_32c = 0x3b002;
    local_1c0 = FUN_009f8b40();
    local_220 = 0x57;
    local_31c = 100;
    local_314 = 0x1e;
    local_310 = 0;
    local_318 = 0x96;
    local_39c = (float)FUN_00ac84d0(0x1c);
    uStack_358 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x1c);
    local_398[4] = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x1c);
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x1c);
    fStack_328 = local_3a8;
    local_318 = *(undefined4 *)(param_1 + 0x4f0);
    local_320 = uStack_360;
    iStack_324 = local_398[3];
    local_31c._0_2_ = CONCAT11(10,uVar4);
    uVar6 = FUN_00a7c7f0();
    FUN_00a7c960(uVar6);
    auStack_33c[0] = auStack_33c[0] | 4;
    iVar2 = *(int *)(param_1 + 0xa84);
    uStack_1c2 = *(undefined2 *)(iVar5 + 0xa0);
    local_34c = *(float *)(iVar2 + 0x40);
    local_348 = *(float *)(iVar2 + 0x44);
    uStack_344 = *(undefined4 *)(iVar2 + 0x48);
    uStack_340 = *(undefined4 *)(iVar2 + 0x4c);
    uStack_1c8 = FUN_00ac45b0();
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1c4 = 0;
    fStack_1b0 = local_350;
    *(undefined4 *)(param_1 + 0x226c) = 0x40a00000;
    if (*(int *)(param_1 + 0x2270) == 0) {
      FUN_00416e30(&uStack_37c,&local_34c,auStack_35c,0x3fa66666,0x44480000);
      local_398[3] = FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_33c);
      if (local_398[3] != 0) {
        local_3a4 = 0.0;
        iStack_3a0 = 0;
        local_39c = 0.0;
        local_398[0] = 0;
        local_398[1] = 0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        local_398[4] = uStack_37c;
        local_398[5] = uStack_378;
        local_398[6] = uStack_374;
        FUN_00420ad0(&local_3a8,local_398 + 4);
        fStack_3b4 = 0.0;
        fStack_3b0 = 0.0;
        fStack_3ac = 10.0;
        D3DXVec3TransformNormal(&fStack_3b4,&fStack_3b4,pfVar1);
        fStack_3b4 = *(float *)(iVar5 + 0x40) + fStack_3b4;
        fStack_3b0 = *(float *)(iVar5 + 0x44) + fStack_3b0;
        fStack_3ac = *(float *)(iVar5 + 0x48) + fStack_3ac;
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = 1.8;
        fStack_3b0 = 64.0;
        fStack_3ac = 1.7;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = 1.0;
        fStack_3b0 = 182.0;
        fStack_3ac = 0.7;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = 1.0;
        fStack_3b0 = 183.0;
        fStack_3ac = -0.7;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        FUN_00add9d0(&local_3a4,0x3f800000);
        if ((iStack_3a0 != 0) && (local_398[0] = 0, local_398[1] != 0)) {
          FUN_00dd48d0(iStack_3a0,0);
        }
      }
    }
    if (*(int *)(param_1 + 0x2270) == 1) {
      FUN_00416e30(&uStack_37c,&local_34c,auStack_35c,0x3f8ccccd,0x44480000);
      local_398[3] = FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_33c);
      if (local_398[3] != 0) {
        local_3a4 = 0.0;
        iStack_3a0 = 0;
        local_39c = 0.0;
        local_398[0] = 0;
        local_398[1] = 0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        local_398[4] = uStack_37c;
        local_398[5] = uStack_378;
        local_398[6] = uStack_374;
        FUN_00420ad0(&local_3a8,local_398 + 4);
        fStack_3b4 = 0.0;
        fStack_3b0 = 0.0;
        fStack_3ac = 10.0;
        D3DXVec3TransformNormal(&fStack_3b4,&fStack_3b4,pfVar1);
        fStack_3b4 = fStack_3b4 + *(float *)(iVar5 + 0x40);
        fStack_3b0 = *(float *)(iVar5 + 0x44) + fStack_3b0;
        fStack_3ac = *(float *)(iVar5 + 0x48) + fStack_3ac;
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = 0.0;
        fStack_3b0 = 84.0;
        fStack_3ac = 1.7;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = 0.0;
        fStack_3b0 = 182.0;
        fStack_3ac = 0.7;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = 0.0;
        fStack_3b0 = 183.0;
        fStack_3ac = -0.7;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        FUN_00add9d0(&local_3a4,0x3f800000);
        if ((iStack_3a0 != 0) && (local_398[0] = 0, local_398[1] != 0)) {
          FUN_00dd48d0(iStack_3a0,0);
        }
      }
    }
    if (*(int *)(param_1 + 0x2270) == 2) {
      FUN_00416e30(&uStack_37c,&local_34c,auStack_35c,0x3f666666,0x44480000);
      local_398[3] = FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_33c);
      if (local_398[3] != 0) {
        local_3a4 = 0.0;
        iStack_3a0 = 0;
        local_39c = 0.0;
        local_398[0] = 0;
        local_398[1] = 0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        local_398[4] = uStack_37c;
        local_398[5] = uStack_378;
        local_398[6] = uStack_374;
        FUN_00420ad0(&local_3a8,local_398 + 4);
        fStack_3b4 = 0.0;
        fStack_3b0 = 0.0;
        fStack_3ac = 10.0;
        D3DXVec3TransformNormal(&fStack_3b4,&fStack_3b4,pfVar1);
        fStack_3b4 = *(float *)(iVar5 + 0x40) + fStack_3b4;
        fStack_3b0 = *(float *)(iVar5 + 0x44) + fStack_3b0;
        fStack_3ac = *(float *)(iVar5 + 0x48) + fStack_3ac;
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = -1.8;
        fStack_3b0 = 64.0;
        fStack_3ac = 1.5;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = -1.0;
        fStack_3b0 = 182.0;
        fStack_3ac = 0.5;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = -1.0;
        fStack_3b0 = 183.0;
        fStack_3ac = -0.5;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        FUN_00add9d0(&local_3a4,0x3f800000);
        if ((iStack_3a0 != 0) && (local_398[0] = 0, local_398[1] != 0)) {
          FUN_00dd48d0(iStack_3a0,0);
        }
      }
      *(undefined4 *)(param_1 + 0x226c) = 0x41f00000;
    }
    if (*(int *)(param_1 + 0x2270) == 3) {
      FUN_00416e30(&uStack_37c,&local_34c,auStack_35c,0x3f000000,0x44480000);
      local_398[3] = FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_33c);
      if (local_398[3] != 0) {
        local_3a4 = 0.0;
        iStack_3a0 = 0;
        local_39c = 0.0;
        local_398[0] = 0;
        local_398[1] = 0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        local_398[4] = uStack_37c;
        local_398[5] = uStack_378;
        local_398[6] = uStack_374;
        FUN_00420ad0(&local_3a8,local_398 + 4);
        fStack_3b4 = 0.0;
        fStack_3b0 = 0.0;
        fStack_3ac = 10.0;
        D3DXVec3TransformNormal(&fStack_3b4,&fStack_3b4,pfVar1);
        fStack_3b4 = fStack_3b4 + *(float *)(iVar5 + 0x40);
        fStack_3b0 = *(float *)(iVar5 + 0x44) + fStack_3b0;
        fStack_3ac = *(float *)(iVar5 + 0x48) + fStack_3ac;
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = 1.8;
        fStack_3b0 = 64.0;
        fStack_3ac = 1.5;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = 1.0;
        fStack_3b0 = 182.0;
        fStack_3ac = 0.5;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = 1.0;
        fStack_3b0 = 183.0;
        fStack_3ac = -0.5;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        FUN_00add9d0(&local_3a4,0x3f800000);
        if ((iStack_3a0 != 0) && (local_398[0] = 0, local_398[1] != 0)) {
          FUN_00dd48d0(iStack_3a0,0);
        }
      }
      *(undefined4 *)(param_1 + 0x226c) = 0;
    }
    if (*(int *)(param_1 + 0x2270) == 4) {
      FUN_00416e30(&uStack_37c,&local_34c,auStack_35c,0x3ecccccd,0x44480000);
      local_398[3] = FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_33c);
      if (local_398[3] != 0) {
        local_3a4 = 0.0;
        iStack_3a0 = 0;
        local_39c = 0.0;
        local_398[0] = 0;
        local_398[1] = 0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        local_398[4] = uStack_37c;
        local_398[5] = uStack_378;
        local_398[6] = uStack_374;
        FUN_00420ad0(&local_3a8,local_398 + 4);
        fStack_3b4 = 0.0;
        fStack_3b0 = 0.0;
        fStack_3ac = 10.0;
        D3DXVec3TransformNormal(&fStack_3b4,&fStack_3b4,pfVar1);
        fStack_3b4 = fStack_3b4 + *(float *)(iVar5 + 0x40);
        fStack_3b0 = *(float *)(iVar5 + 0x44) + fStack_3b0;
        fStack_3ac = *(float *)(iVar5 + 0x48) + fStack_3ac;
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = 0.0;
        fStack_3b0 = 84.0;
        fStack_3ac = 1.5;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = 0.0;
        fStack_3b0 = 182.0;
        fStack_3ac = 0.5;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        fStack_3b4 = 0.0;
        fStack_3b0 = 183.0;
        fStack_3ac = -0.5;
        FUN_00547990(&fStack_3b4,&fStack_3b4);
        FUN_00420ad0(&local_3a8,&fStack_3b4);
        FUN_00add9d0(&local_3a4,0x3f800000);
        if ((iStack_3a0 != 0) && (local_398[0] = 0, local_398[1] != 0)) {
          FUN_00dd48d0(iStack_3a0,0);
        }
      }
      *(undefined4 *)(param_1 + 0x226c) = 0;
    }
    if (*(int *)(param_1 + 0x2270) == 5) {
      FUN_00416e30(&uStack_37c,&local_34c,auStack_35c,0x3e99999a,0x44480000);
      local_398[3] = FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_33c);
      if (local_398[3] != 0) {
        local_3a4 = 0.0;
        iStack_3a0 = 0;
        local_39c = 0.0;
        local_398[0] = 0;
        local_398[1] = 0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        local_398[4] = uStack_37c;
        local_398[5] = uStack_378;
        local_398[6] = uStack_374;
        FUN_00420ad0(&local_3a8,local_398 + 4);
        fStack_3b4 = 0.0;
        fStack_3b0 = 0.0;
        fStack_3ac = 10.0;
        D3DXVec3TransformNormal(&fStack_3b4,&fStack_3b4,pfVar1);
        FUN_00420ad0(&fStack_3b4,&stack0xfffffc40);
        FUN_00547990(&stack0xfffffc40,&stack0xfffffc40);
        FUN_00420ad0(&fStack_3b4,&stack0xfffffc40);
        FUN_00547990(&stack0xfffffc40,&stack0xfffffc40);
        FUN_00420ad0(&fStack_3b4,&stack0xfffffc40);
        FUN_00547990(&stack0xfffffc40,&stack0xfffffc40);
        FUN_00420ad0(&fStack_3b4,&stack0xfffffc40);
        FUN_00add9d0(&fStack_3b0,0x3f800000);
        if ((fStack_3ac != 0.0) && (local_3a4 = 0.0, iStack_3a0 != 0)) {
          FUN_00dd48d0(fStack_3ac,0);
        }
      }
      *(undefined4 *)(param_1 + 0x226c) = 0x42700000;
    }
    *(int *)(param_1 + 0x2270) = *(int *)(param_1 + 0x2270) + 1;
    if (5 < *(uint *)(param_1 + 0x2270)) {
      *(undefined4 *)(param_1 + 0x2270) = 0;
    }
  }
  return;
}

// 00552BE0  FUN_00552be0  size=7600  [callgraph]
void __fastcall FUN_00552be0(int param_1)

{
  float *pfVar1;
  undefined1 uVar2;
  short sVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float local_3c4;
  float fStack_3c0;
  float local_3bc;
  float fStack_3b8;
  undefined4 uStack_3b4;
  int iStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float local_3a0;
  float fStack_39c;
  float fStack_398;
  int iStack_394;
  float local_390;
  undefined4 local_38c;
  int local_388;
  undefined4 local_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  uint local_348 [7];
  undefined4 local_32c;
  float fStack_328;
  undefined4 uStack_324;
  float local_320;
  undefined4 local_31c;
  int local_318;
  float local_314;
  undefined1 local_310;
  undefined1 uStack_30f;
  undefined4 uStack_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 uStack_1c8;
  undefined2 uStack_1c4;
  undefined2 uStack_1c2;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  
  fVar4 = *(float *)(param_1 + 0x226c) - *(float *)(param_1 + 0x910);
  local_348[0] = 0x800;
  local_348[1] = 0x801;
  *(float *)(param_1 + 0x226c) = fVar4;
  local_348[2] = 0x802;
  local_348[3] = 0x803;
  local_348[4] = 0x804;
  local_348[5] = 0x805;
  if (fVar4 < 0.0) {
    fVar4 = (float)FUN_00a12210(local_348[*(int *)(param_1 + 0x2270)]);
    pfVar1 = (float *)((int)fVar4 + 0x10);
    local_374 = *(float *)((int)fVar4 + 0x34);
    local_3bc = *(float *)((int)fVar4 + 0x38);
    local_3c8 = SQRT(*(float *)((int)fVar4 + 0x14) * *(float *)((int)fVar4 + 0x14) +
                     *(float *)((int)fVar4 + 0x10) * *(float *)((int)fVar4 + 0x10) +
                     *(float *)((int)fVar4 + 0x18) * *(float *)((int)fVar4 + 0x18));
    local_3c4 = SQRT(*(float *)((int)fVar4 + 0x20) * *(float *)((int)fVar4 + 0x20) +
                     *(float *)((int)fVar4 + 0x24) * *(float *)((int)fVar4 + 0x24) +
                     *(float *)((int)fVar4 + 0x28) * *(float *)((int)fVar4 + 0x28));
    fVar8 = SQRT((float10)local_3bc * (float10)local_3bc +
                 (float10)local_374 * (float10)local_374 +
                 (float10)*(float *)((int)fVar4 + 0x30) * (float10)*(float *)((int)fVar4 + 0x30));
    fVar9 = (float10)fpatan((float10)*(float *)((int)fVar4 + 0x28) / fVar8,
                            (float10)*(float *)((int)fVar4 + 0x38) / fVar8);
    local_370 = (float)fVar9;
    local_3a0 = fVar4;
    fVar8 = (float10)FUN_00ddbaa0((float)-((float10)*(float *)((int)fVar4 + 0x18) / fVar8));
    local_36c = (float)fVar8;
    fVar8 = (float10)fpatan((float10)*(float *)((int)fVar4 + 0x14) / (float10)local_3c4,
                            (float10)*pfVar1 / (float10)local_3c8);
    local_368 = (float)fVar8;
    local_390 = *(float *)((int)local_3a0 + 0x40);
    local_38c = *(undefined4 *)((int)local_3a0 + 0x44);
    local_388 = *(int *)((int)local_3a0 + 0x48);
    local_384 = *(undefined4 *)((int)local_3a0 + 0x4c);
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_21c = 9;
    local_32c = 0x3b002;
    local_1c0 = FUN_009f8b40();
    local_220 = 0x57;
    local_31c = 1.4013e-43;
    local_314 = 4.2039e-44;
    local_310 = 0;
    local_318 = 0x96;
    local_3bc = (float)FUN_00ac84d0(0x1c);
    uStack_378 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x1c);
    fStack_3c0 = (float)(**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x1c);
    local_310 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x1c);
    local_31c = local_3bc;
    uStack_30c = *(undefined4 *)(param_1 + 0x4f0);
    local_314 = local_374;
    local_318 = (int)fStack_3b8;
    uStack_30f = 10;
    uVar5 = FUN_00a7c7f0();
    FUN_00a7c960(uVar5);
    local_348[6] = local_348[6] | 4;
    iVar6 = *(int *)(param_1 + 0xa84);
    uStack_1b8._2_2_ = *(ushort *)((int)local_3a0 + 0xa0);
    uStack_360 = *(undefined4 *)(iVar6 + 0x40);
    uStack_35c = *(undefined4 *)(iVar6 + 0x44);
    uStack_358 = *(undefined4 *)(iVar6 + 0x48);
    uStack_354 = *(undefined4 *)(iVar6 + 0x4c);
    uStack_1bc = FUN_00ac45b0();
    fStack_1b0 = 0.0;
    uStack_1ac = 0;
    uStack_1b8 = (uint)uStack_1b8._2_2_ << 0x10;
    uStack_1a8 = 0;
    uStack_1a4 = uStack_364;
    *(undefined4 *)(param_1 + 0x226c) = 0x41700000;
    if (*(int *)(param_1 + 0x2270) == 0) {
      FUN_00416e30(&local_390,&uStack_360,&local_370,0x3f800000,0x44480000);
      fStack_3b8 = (float)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_348 + 6);
      if (fStack_3b8 != 0.0) {
        uStack_3b4 = 0;
        iStack_3b0 = 0;
        fStack_3ac = 0.0;
        fStack_3a8 = 0.0;
        fStack_3a4 = 0.0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        fStack_39c = local_390;
        fStack_398 = (float)local_38c;
        iStack_394 = local_388;
        FUN_00420ad0(&local_3bc,&fStack_39c);
        local_3c8 = 3.0;
        local_3c4 = 0.0;
        fStack_3c0 = 10.0;
        D3DXVec3TransformNormal(&local_3c8,&local_3c8,pfVar1);
        local_3c8 = local_3c8 + *(float *)((int)fVar4 + 0x40);
        local_3c4 = *(float *)((int)fVar4 + 0x44) + local_3c4;
        fStack_3c0 = *(float *)((int)fVar4 + 0x48) + fStack_3c0;
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = 3.8;
        local_3c4 = 44.0;
        fStack_3c0 = 6.8;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = 3.0;
        local_3c4 = 72.0;
        fStack_3c0 = 5.8;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = 2.0;
        local_3c4 = 183.0;
        fStack_3c0 = 5.8;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        FUN_00add9d0(&uStack_3b4,0x3f800000);
        if ((iStack_3b0 != 0) && (fStack_3a8 = 0.0, fStack_3a4 != 0.0)) {
          FUN_00dd48d0(iStack_3b0,0);
        }
      }
    }
    if (*(int *)(param_1 + 0x2270) == 1) {
      FUN_00416e30(&local_390,&uStack_360,&local_370,0x3f800000,0x44480000);
      fStack_3b8 = (float)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_348 + 6);
      if (fStack_3b8 != 0.0) {
        uStack_3b4 = 0;
        iStack_3b0 = 0;
        fStack_3ac = 0.0;
        fStack_3a8 = 0.0;
        fStack_3a4 = 0.0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        fStack_39c = local_390;
        fStack_398 = (float)local_38c;
        iStack_394 = local_388;
        FUN_00420ad0(&local_3bc,&fStack_39c);
        local_3c8 = 0.0;
        local_3c4 = 0.0;
        fStack_3c0 = 10.0;
        D3DXVec3TransformNormal(&local_3c8,&local_3c8,pfVar1);
        local_3c8 = local_3c8 + *(float *)((int)fVar4 + 0x40);
        local_3c4 = *(float *)((int)fVar4 + 0x44) + local_3c4;
        fStack_3c0 = *(float *)((int)fVar4 + 0x48) + fStack_3c0;
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = 5.0;
        local_3c4 = 63.0;
        fStack_3c0 = 1.8;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = 5.0;
        local_3c4 = 90.0;
        fStack_3c0 = 0.8;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = 1.0;
        local_3c4 = 183.0;
        fStack_3c0 = 0.8;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        FUN_00add9d0(&uStack_3b4,0x3f800000);
        if ((iStack_3b0 != 0) && (fStack_3a8 = 0.0, fStack_3a4 != 0.0)) {
          FUN_00dd48d0(iStack_3b0,0);
        }
      }
    }
    if (*(int *)(param_1 + 0x2270) == 2) {
      FUN_00416e30(&local_390,&uStack_360,&local_370,0x3f800000,0x44480000);
      fStack_3b8 = (float)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_348 + 6);
      if (fStack_3b8 != 0.0) {
        uStack_3b4 = 0;
        iStack_3b0 = 0;
        fStack_3ac = 0.0;
        fStack_3a8 = 0.0;
        fStack_3a4 = 0.0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        fStack_39c = local_390;
        fStack_398 = (float)local_38c;
        iStack_394 = local_388;
        FUN_00420ad0(&local_3bc,&fStack_39c);
        local_3c8 = -3.0;
        local_3c4 = 0.0;
        fStack_3c0 = 10.0;
        D3DXVec3TransformNormal(&local_3c8,&local_3c8,pfVar1);
        local_3c8 = local_3c8 + *(float *)((int)fVar4 + 0x40);
        local_3c4 = *(float *)((int)fVar4 + 0x44) + local_3c4;
        fStack_3c0 = *(float *)((int)fVar4 + 0x48) + fStack_3c0;
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3a0 = 0.8;
        iVar6 = FUN_00ac4780();
        if (iVar6 == 0) {
          local_3a0 = 4.2;
        }
        local_3c8 = -2.8;
        local_3c4 = 44.0;
        fStack_3c0 = local_3a0 + 1.0;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = 2.8;
        local_3c4 = 74.0;
        fStack_3c0 = local_3a0;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = -2.0;
        local_3c4 = 183.0;
        fStack_3c0 = local_3a0;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        FUN_00add9d0(&uStack_3b4,0x3f800000);
        if ((iStack_3b0 != 0) && (fStack_3a8 = 0.0, fStack_3a4 != 0.0)) {
          FUN_00dd48d0(iStack_3b0,0);
        }
      }
    }
    if (*(int *)(param_1 + 0x2270) == 3) {
      FUN_00416e30(&local_390,&uStack_360,&local_370,0x3f800000,0x44480000);
      fStack_3b8 = (float)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_348 + 6);
      if (fStack_3b8 != 0.0) {
        uStack_3b4 = 0;
        iStack_3b0 = 0;
        fStack_3ac = 0.0;
        fStack_3a8 = 0.0;
        fStack_3a4 = 0.0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        fStack_39c = local_390;
        fStack_398 = (float)local_38c;
        iStack_394 = local_388;
        FUN_00420ad0(&local_3bc,&fStack_39c);
        local_3c8 = 3.0;
        local_3c4 = 0.0;
        fStack_3c0 = 8.0;
        D3DXVec3TransformNormal(&local_3c8,&local_3c8,pfVar1);
        local_3c8 = *(float *)((int)fVar4 + 0x40) + local_3c8;
        local_3c4 = *(float *)((int)fVar4 + 0x44) + local_3c4;
        fStack_3c0 = *(float *)((int)fVar4 + 0x48) + fStack_3c0;
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = 5.8;
        local_3c4 = 44.0;
        fStack_3c0 = 4.8;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = -5.0;
        local_3c4 = 72.0;
        fStack_3c0 = 3.8;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = 2.0;
        local_3c4 = 183.0;
        fStack_3c0 = 3.8;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        FUN_00add9d0(&uStack_3b4,0x3f800000);
        if ((iStack_3b0 != 0) && (fStack_3a8 = 0.0, fStack_3a4 != 0.0)) {
          FUN_00dd48d0(iStack_3b0,0);
        }
      }
    }
    if (*(int *)(param_1 + 0x2270) == 4) {
      FUN_00416e30(&local_390,&uStack_360,&local_370,0x3f800000,0x44480000);
      fStack_3b8 = (float)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_348 + 6);
      if (fStack_3b8 != 0.0) {
        uStack_3b4 = 0;
        iStack_3b0 = 0;
        fStack_3ac = 0.0;
        fStack_3a8 = 0.0;
        fStack_3a4 = 0.0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        fStack_39c = local_390;
        fStack_398 = (float)local_38c;
        iStack_394 = local_388;
        FUN_00420ad0(&local_3bc,&fStack_39c);
        local_3c8 = 0.0;
        local_3c4 = 0.0;
        fStack_3c0 = 8.0;
        D3DXVec3TransformNormal(&local_3c8,&local_3c8,pfVar1);
        local_3c8 = *(float *)((int)fVar4 + 0x40) + local_3c8;
        local_3c4 = *(float *)((int)fVar4 + 0x44) + local_3c4;
        fStack_3c0 = *(float *)((int)fVar4 + 0x48) + fStack_3c0;
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = 0.0;
        local_3c4 = 44.0;
        fStack_3c0 = 3.8;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = 0.0;
        local_3c4 = 72.0;
        fStack_3c0 = 2.8;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = -1.0;
        local_3c4 = 183.0;
        fStack_3c0 = 2.8;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        FUN_00add9d0(&uStack_3b4,0x3f800000);
        if ((iStack_3b0 != 0) && (fStack_3a8 = 0.0, fStack_3a4 != 0.0)) {
          FUN_00dd48d0(iStack_3b0,0);
        }
      }
    }
    if (*(int *)(param_1 + 0x2270) == 5) {
      FUN_00416e30(&local_390,&uStack_360,&local_370,0x3f800000,0x44480000);
      fStack_3b8 = (float)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_348 + 6);
      if (fStack_3b8 != 0.0) {
        uStack_3b4 = 0;
        iStack_3b0 = 0;
        fStack_3ac = 0.0;
        fStack_3a8 = 0.0;
        fStack_3a4 = 0.0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        fStack_39c = local_390;
        fStack_398 = (float)local_38c;
        iStack_394 = local_388;
        FUN_00420ad0(&local_3bc,&fStack_39c);
        local_3c8 = -3.0;
        local_3c4 = 0.0;
        fStack_3c0 = 8.0;
        D3DXVec3TransformNormal(&local_3c8,&local_3c8,pfVar1);
        local_3c8 = *(float *)((int)fVar4 + 0x40) + local_3c8;
        local_3c4 = *(float *)((int)fVar4 + 0x44) + local_3c4;
        fStack_3c0 = *(float *)((int)fVar4 + 0x48) + fStack_3c0;
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3a0 = 0.8;
        iVar6 = FUN_00ac4780();
        if (iVar6 == 0) {
          local_3a0 = 4.2;
        }
        local_3c8 = -2.0;
        local_3c4 = 44.0;
        fStack_3c0 = local_3a0 + 1.0;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = -5.0;
        local_3c4 = 72.0;
        fStack_3c0 = local_3a0;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        local_3c8 = 2.0;
        local_3c4 = 183.0;
        fStack_3c0 = local_3a0;
        FUN_00547990(&local_3c8,&local_3c8);
        FUN_00420ad0(&local_3bc,&local_3c8);
        iVar6 = FUN_00ac4780();
        if (1 < iVar6) {
          FUN_00add9d0(&uStack_3b4,0x3f800000);
        }
        if ((iStack_3b0 != 0) && (fStack_3a8 = 0.0, fStack_3a4 != 0.0)) {
          FUN_00dd48d0(iStack_3b0,0);
        }
      }
    }
    *(int *)(param_1 + 0x2270) = *(int *)(param_1 + 0x2270) + 1;
    if (5 < *(uint *)(param_1 + 0x2270)) {
      *(undefined4 *)(param_1 + 0x2270) = 0;
    }
  }
  iVar6 = FUN_00ac4780();
  if ((0 < iVar6) &&
     (fVar4 = *(float *)(param_1 + 0x2274) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x2274) = fVar4, fVar4 < 0.0)) {
    iVar7 = FUN_00a12210(local_348[*(int *)(param_1 + 0x2270)]);
    pfVar1 = (float *)(iVar7 + 0x10);
    fStack_3b8 = *(float *)(iVar7 + 0x34);
    local_3bc = *(float *)(iVar7 + 0x38);
    fStack_39c = SQRT(*(float *)(iVar7 + 0x14) * *(float *)(iVar7 + 0x14) +
                      *(float *)(iVar7 + 0x10) * *(float *)(iVar7 + 0x10) +
                      *(float *)(iVar7 + 0x18) * *(float *)(iVar7 + 0x18));
    fStack_398 = SQRT(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                      *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                      *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
    fVar8 = SQRT((float10)local_3bc * (float10)local_3bc +
                 (float10)fStack_3b8 * (float10)fStack_3b8 +
                 (float10)*(float *)(iVar7 + 0x30) * (float10)*(float *)(iVar7 + 0x30));
    fVar9 = (float10)fpatan((float10)*(float *)(iVar7 + 0x28) / fVar8,
                            (float10)*(float *)(iVar7 + 0x38) / fVar8);
    local_370 = (float)fVar9;
    local_3a0 = (float)iVar7;
    fVar8 = (float10)FUN_00ddbaa0((float)-((float10)*(float *)(iVar7 + 0x18) / fVar8));
    local_36c = (float)fVar8;
    fVar8 = (float10)fpatan((float10)*(float *)(iVar7 + 0x14) / (float10)fStack_398,
                            (float10)*pfVar1 / (float10)fStack_39c);
    local_368 = (float)fVar8;
    local_390 = *(float *)((int)local_3a0 + 0x40);
    local_38c = *(undefined4 *)((int)local_3a0 + 0x44);
    local_388 = *(undefined4 *)((int)local_3a0 + 0x48);
    local_384 = *(undefined4 *)((int)local_3a0 + 0x4c);
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_21c = 9;
    local_32c = 0x3b002;
    local_1c0 = FUN_009f8b40();
    local_220 = 0x57;
    local_31c = 1.4013e-43;
    local_314 = 4.2039e-44;
    local_310 = 0;
    local_318 = 0x96;
    fStack_3b8 = (float)FUN_00ac84d0(0x1c);
    fStack_3c0 = (float)(**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x1c);
    uStack_37c = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x1c);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x1c);
    fStack_328 = local_3c4;
    local_318 = *(undefined4 *)(param_1 + 0x4f0);
    local_320 = local_3c8;
    uStack_324 = uStack_380;
    local_31c._0_2_ = CONCAT11(10,uVar2);
    uVar5 = FUN_00a7c7f0();
    FUN_00a7c960(uVar5);
    local_348[3] = local_348[3] | 4;
    iVar6 = *(int *)(param_1 + 0xa84);
    uStack_1c2 = *(undefined2 *)((int)fStack_3ac + 0xa0);
    local_36c = *(float *)(iVar6 + 0x40);
    local_368 = *(float *)(iVar6 + 0x44);
    uStack_364 = *(undefined4 *)(iVar6 + 0x48);
    uStack_360 = *(undefined4 *)(iVar6 + 0x4c);
    uStack_1c8 = FUN_00ac45b0();
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1c4 = 0;
    uStack_1b4 = 0;
    fStack_1b0 = local_370;
    *(undefined4 *)(param_1 + 0x2274) = 0x41000000;
    if (*(int *)(param_1 + 0x2278) == 0) {
      FUN_00416e30(&fStack_39c,&local_36c,&uStack_37c,0x3f800000,0x44480000);
      local_3c8 = (float)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_348 + 3);
      if (local_3c8 != 0.0) {
        fStack_3c0 = 0.0;
        local_3bc = 0.0;
        fStack_3b8 = 0.0;
        uStack_3b4 = 0;
        iStack_3b0 = 0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        fStack_3a8 = fStack_39c;
        fStack_3a4 = fStack_398;
        local_3a0 = (float)iStack_394;
        FUN_00420ad0(&local_3c4,&fStack_3a8);
        fStack_3d4 = 3.0;
        fStack_3d0 = 0.0;
        fStack_3cc = 10.0;
        D3DXVec3TransformNormal(&fStack_3d4,&fStack_3d4,pfVar1);
        fStack_3d4 = *(float *)(iVar7 + 0x40) + fStack_3d4;
        fStack_3d0 = *(float *)(iVar7 + 0x44) + fStack_3d0;
        fStack_3cc = *(float *)(iVar7 + 0x48) + fStack_3cc;
        FUN_00420ad0(&local_3c4,&fStack_3d4);
        fStack_3d4 = 0.8;
        fStack_3d0 = 44.0;
        fStack_3cc = 6.8;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c4,&fStack_3d4);
        sVar3 = FUN_00dde2d0(5,0);
        local_3c4 = (float)(int)sVar3;
        fStack_3d4 = (float)(int)local_3c4 - 4.5;
        fStack_3d0 = 72.0;
        fStack_3cc = 5.8;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c4,&fStack_3d4);
        sVar3 = FUN_00dde2d0(5,0);
        local_3c4 = (float)(int)sVar3;
        fStack_3d4 = (float)(int)local_3c4 - 4.0;
        fStack_3d0 = 183.0;
        fStack_3cc = 5.8;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c4,&fStack_3d4);
        FUN_00add9d0(&fStack_3c0,0x3f800000);
        FUN_00420aa0();
      }
    }
    if (*(int *)(param_1 + 0x2278) == 1) {
      FUN_00416e30(&fStack_39c,&local_36c,&uStack_37c,0x3f800000,0x44480000);
      local_3c4 = (float)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_348 + 3);
      if (local_3c4 != 0.0) {
        fStack_3c0 = 0.0;
        local_3bc = 0.0;
        fStack_3b8 = 0.0;
        uStack_3b4 = 0;
        iStack_3b0 = 0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        fStack_3a8 = fStack_39c;
        fStack_3a4 = fStack_398;
        local_3a0 = (float)iStack_394;
        FUN_00420ad0(&local_3c8,&fStack_3a8);
        fStack_3d4 = 0.0;
        fStack_3d0 = 0.0;
        fStack_3cc = 10.0;
        D3DXVec3TransformNormal(&fStack_3d4,&fStack_3d4,pfVar1);
        fStack_3d4 = fStack_3d4 + *(float *)(iVar7 + 0x40);
        fStack_3d0 = *(float *)(iVar7 + 0x44) + fStack_3d0;
        fStack_3cc = *(float *)(iVar7 + 0x48) + fStack_3cc;
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        fStack_3ac = 0.8;
        iVar6 = FUN_00ac4780();
        if (iVar6 == 1) {
          fStack_3ac = 6.3;
        }
        fStack_3d4 = -5.7;
        fStack_3d0 = 63.0;
        fStack_3cc = fStack_3ac + 1.0;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        fStack_3d4 = -5.7;
        fStack_3d0 = 90.0;
        fStack_3cc = fStack_3ac;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        fStack_3d4 = -5.7;
        fStack_3d0 = 183.0;
        fStack_3cc = fStack_3ac;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        FUN_00add9d0(&fStack_3c0,0x3f800000);
        FUN_00420aa0();
      }
    }
    if (*(int *)(param_1 + 0x2278) == 2) {
      FUN_00416e30(&fStack_39c,&local_36c,&uStack_37c,0x3f800000,0x44480000);
      local_3c4 = (float)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_348 + 3);
      if (local_3c4 != 0.0) {
        fStack_3c0 = 0.0;
        local_3bc = 0.0;
        fStack_3b8 = 0.0;
        uStack_3b4 = 0;
        iStack_3b0 = 0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        fStack_3a8 = fStack_39c;
        fStack_3a4 = fStack_398;
        local_3a0 = (float)iStack_394;
        FUN_00420ad0(&local_3c8,&fStack_3a8);
        fStack_3d4 = -3.0;
        fStack_3d0 = 0.0;
        fStack_3cc = 10.0;
        D3DXVec3TransformNormal(&fStack_3d4,&fStack_3d4,pfVar1);
        fStack_3d4 = *(float *)(iVar7 + 0x40) + fStack_3d4;
        fStack_3d0 = *(float *)(iVar7 + 0x44) + fStack_3d0;
        fStack_3cc = *(float *)(iVar7 + 0x48) + fStack_3cc;
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        fStack_3ac = 0.8;
        iVar6 = FUN_00ac4780();
        if (iVar6 == 1) {
          fStack_3ac = 8.3;
        }
        fStack_3d4 = -4.8;
        fStack_3d0 = 44.0;
        fStack_3cc = fStack_3ac + 1.0;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        fStack_3d4 = -4.8;
        fStack_3d0 = 74.0;
        fStack_3cc = fStack_3ac;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        fStack_3d4 = -4.8;
        fStack_3d0 = 183.0;
        fStack_3cc = fStack_3ac;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        FUN_00add9d0(&fStack_3c0,0x3f800000);
        FUN_00420aa0();
      }
    }
    if (*(int *)(param_1 + 0x2278) == 3) {
      FUN_00416e30(&fStack_39c,&local_36c,&uStack_37c,0x3f800000,0x44480000);
      local_3c4 = (float)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_348 + 3);
      if (local_3c4 != 0.0) {
        fStack_3c0 = 0.0;
        local_3bc = 0.0;
        fStack_3b8 = 0.0;
        uStack_3b4 = 0;
        iStack_3b0 = 0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        fStack_3a8 = fStack_39c;
        fStack_3a4 = fStack_398;
        local_3a0 = (float)iStack_394;
        FUN_00420ad0(&local_3c8,&fStack_3a8);
        fStack_3d4 = 3.0;
        fStack_3d0 = 0.0;
        fStack_3cc = 8.0;
        D3DXVec3TransformNormal(&fStack_3d4,&fStack_3d4,pfVar1);
        fStack_3d4 = *(float *)(iVar7 + 0x40) + fStack_3d4;
        fStack_3d0 = *(float *)(iVar7 + 0x44) + fStack_3d0;
        fStack_3cc = *(float *)(iVar7 + 0x48) + fStack_3cc;
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        fStack_3d4 = -4.8;
        fStack_3d0 = 44.0;
        fStack_3cc = 4.8;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        fStack_3d4 = -4.8;
        fStack_3d0 = 72.0;
        fStack_3cc = -6.2;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        fStack_3d4 = -4.8;
        fStack_3d0 = 183.0;
        fStack_3cc = -6.2;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        FUN_00add9d0(&fStack_3c0,0x3f800000);
        FUN_00420aa0();
      }
    }
    if (*(int *)(param_1 + 0x2278) == 4) {
      FUN_00416e30(&fStack_39c,&local_36c,&uStack_37c,0x3f800000,0x44480000);
      local_3c4 = (float)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_348 + 3);
      if (local_3c4 != 0.0) {
        fStack_3c0 = 0.0;
        local_3bc = 0.0;
        fStack_3b8 = 0.0;
        uStack_3b4 = 0;
        iStack_3b0 = 0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        fStack_3a8 = fStack_39c;
        fStack_3a4 = fStack_398;
        local_3a0 = (float)iStack_394;
        FUN_00420ad0(&local_3c8,&fStack_3a8);
        fStack_3d4 = 0.0;
        fStack_3d0 = 0.0;
        fStack_3cc = 8.0;
        D3DXVec3TransformNormal(&fStack_3d4,&fStack_3d4,pfVar1);
        fStack_3d4 = fStack_3d4 + *(float *)(iVar7 + 0x40);
        fStack_3d0 = *(float *)(iVar7 + 0x44) + fStack_3d0;
        fStack_3cc = *(float *)(iVar7 + 0x48) + fStack_3cc;
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        fStack_3d4 = 2.0;
        fStack_3d0 = 44.0;
        fStack_3cc = 3.8;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        fStack_3d4 = 2.0;
        fStack_3d0 = 72.0;
        fStack_3cc = -7.2;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        fStack_3d4 = -3.0;
        fStack_3d0 = 183.0;
        fStack_3cc = -7.2;
        FUN_00547990(&fStack_3d4,&fStack_3d4);
        FUN_00420ad0(&local_3c8,&fStack_3d4);
        FUN_00add9d0(&fStack_3c0,0x3f800000);
        FUN_00420aa0();
      }
    }
    if (*(int *)(param_1 + 0x2278) == 5) {
      FUN_00416e30(&fStack_39c,&local_36c,&uStack_37c,0x3f800000,0x44480000);
      local_3c4 = (float)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_348 + 3);
      if (local_3c4 != 0.0) {
        fStack_3c0 = 0.0;
        local_3bc = 0.0;
        fStack_3b8 = 0.0;
        uStack_3b4 = 0;
        iStack_3b0 = 0;
        FUN_0041c8e0(0x20,&DAT_01b7bd48);
        fStack_3a8 = fStack_39c;
        fStack_3a4 = fStack_398;
        local_3a0 = (float)iStack_394;
        FUN_00420ad0(&local_3c8,&fStack_3a8);
        fStack_3d4 = -3.0;
        fStack_3d0 = 0.0;
        fStack_3cc = 8.0;
        D3DXVec3TransformNormal(&fStack_3d4,&fStack_3d4,pfVar1);
        FUN_00420ad0(&fStack_3d4,&stack0xfffffc20);
        FUN_00547990(&stack0xfffffc20,&stack0xfffffc20);
        FUN_00420ad0(&fStack_3d4,&stack0xfffffc20);
        FUN_00547990(&stack0xfffffc20,&stack0xfffffc20);
        FUN_00420ad0(&fStack_3d4,&stack0xfffffc20);
        FUN_00547990(&stack0xfffffc20,&stack0xfffffc20);
        FUN_00420ad0(&fStack_3d4,&stack0xfffffc20);
        FUN_00add9d0(&fStack_3cc,0x3f800000);
        FUN_00420aa0();
      }
    }
    *(int *)(param_1 + 0x2278) = *(int *)(param_1 + 0x2278) + 1;
    if (5 < *(uint *)(param_1 + 0x2278)) {
      *(undefined4 *)(param_1 + 0x2278) = 0;
    }
  }
  return;
}

// 00554990  FUN_00554990  size=90  [callgraph]
void FUN_00554990(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(0xcd,uVar1,uVar2);
  FUN_00dffb20(param_1);
  FUN_00dffbc0(param_2);
  FUN_00a8c930(0,local_160);
  return;
}

// 005549F0  FUN_005549f0  size=834  [callgraph]
void __fastcall FUN_005549f0(int param_1)

{
  undefined2 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int local_198;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  undefined1 local_160 [348];
  
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    FUN_00a81330();
    FUN_00a7c8a0();
  }
  iVar4 = FUN_00a12210((int)*(short *)(param_1 + 4));
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined1 *)(param_1 + 2) = 1;
    if (iVar4 != 0) {
      *(ushort *)(iVar4 + 0xa2) = *(ushort *)(iVar4 + 0xa2) | 4;
    }
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a81330();
      FUN_00a7c8a0();
    }
    uVar1 = *(undefined2 *)(param_1 + 4);
    uVar7 = 0;
    uVar5 = FUN_00a7c8a0(0);
    FUN_004039a0(0xcd,uVar5,uVar7);
    FUN_00dffb20(param_1 + 0x20);
    FUN_00dffbc0(uVar1);
    FUN_00a8c930(0,local_160);
  }
  else if (*(char *)(param_1 + 2) != '\x01') {
    return;
  }
  local_198 = 0;
  iVar6 = FUN_00a81330();
  if (iVar6 != 0) {
    FUN_00a81330();
    iVar6 = FUN_00a7c8a0();
    if ((iVar6 != 0) && (iVar6 = FUN_00a81330(), local_198 = iRam00000a84, iVar6 != 0)) {
      FUN_00a81330();
      iVar6 = FUN_00a7c8a0();
      local_198 = *(int *)(iVar6 + 0xa84);
    }
  }
  local_180 = *(float *)(local_198 + 0x40);
  local_178 = *(float *)(local_198 + 0x48);
  local_17c = *(float *)(local_198 + 0x44) + 1.3;
  local_170 = *(float *)(iVar4 + 0x40);
  local_16c = *(float *)(iVar4 + 0x44);
  local_168 = *(float *)(iVar4 + 0x48);
  local_190 = local_180 - local_170;
  local_18c = local_17c - local_16c;
  local_188 = local_178 - local_168;
  local_184 = *(float *)(local_198 + 0x4c) - *(float *)(iVar4 + 0x4c);
  fVar2 = local_188 * local_188 + local_18c * local_18c + local_190 * local_190;
  if (!NAN(fVar2) && 0.0001 < fVar2 != (fVar2 == 0.0001)) {
    iVar6 = FUN_00a81330();
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      FUN_00a81330();
      iVar6 = FUN_00a7c8a0();
    }
    fVar3 = *(float *)(iVar6 + 0x910) * *(float *)(param_1 + 0x14);
    fVar3 = fVar3 * fVar3;
    if (fVar3 < fVar2 == (fVar3 == fVar2)) {
      *(undefined2 *)(param_1 + 1) = 2;
      *(float *)(iVar4 + 0x40) = local_180;
      *(float *)(iVar4 + 0x44) = local_17c;
      *(float *)(iVar4 + 0x48) = local_178;
      return;
    }
    fVar2 = local_188 * local_188 + local_190 * local_190 + local_18c * local_18c;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_190,&local_190);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_190 = 0.0;
      local_18c = 1.0;
      local_188 = 0.0;
    }
    iVar6 = FUN_00a81330();
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      FUN_00a81330();
      iVar6 = FUN_00a7c8a0();
    }
    fVar2 = *(float *)(iVar6 + 0x910) * *(float *)(param_1 + 0x14);
    *(float *)(iVar4 + 0x40) = local_190 * fVar2 + local_170;
    *(float *)(iVar4 + 0x44) = local_18c * fVar2 + local_16c;
    *(float *)(iVar4 + 0x48) = local_188 * fVar2 + local_168;
    return;
  }
  return;
}

// 00558300  FUN_00558300  size=1084  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00558300(int *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  float10 fVar13;
  undefined *puVar14;
  
  uVar11 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar14 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar14);
    uVar11 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  if (param_1[0x187] == 0) {
    return;
  }
  if ((*(int *)(uVar11 + 0x3e18) == 0) && (*(int *)(uVar11 + 0x3e1c) == 0)) {
    return;
  }
  iVar3 = FUN_00a81330();
  bVar12 = iVar3 == 0;
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
LAB_005583d7:
    if (!bVar12) {
      FUN_00a81330();
      FUN_00a7c8a0();
      E3_EnemyBoardDebrisSokushi::vf4C();
      if (param_1[0x370] == 0x12) {
        iVar10 = 0;
        iVar3 = 0;
        if (0 < (short)param_1[0xc9]) {
          do {
            pbVar6 = *(byte **)(*(int *)(iVar3 + 0x60 + param_1[200]) + 0x40);
            if (pbVar6 != (byte *)0x0) {
              pcVar9 = "head_down";
              do {
                bVar2 = *pbVar6;
                bVar12 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_00558450:
                  iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_00558455;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar6[1];
                bVar12 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_00558450;
                pbVar6 = pbVar6 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              iVar7 = 0;
LAB_00558455:
              if (iVar7 == 0) {
                puVar1 = (uint *)(iVar3 + param_1[200] + 0x38);
                *puVar1 = *puVar1 | 1;
              }
            }
            iVar10 = iVar10 + 1;
            iVar3 = iVar3 + 0x70;
          } while (iVar10 < (short)param_1[0xc9]);
        }
        iVar3 = 0;
        if (0 < (short)param_1[0xc9]) {
          iVar10 = 0;
          do {
            pbVar6 = *(byte **)(*(int *)(iVar10 + 0x60 + param_1[200]) + 0x40);
            if (pbVar6 != (byte *)0x0) {
              pcVar9 = "in_head_down";
              do {
                bVar2 = *pbVar6;
                bVar12 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_005584c0:
                  iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_005584c5;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar6[1];
                bVar12 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_005584c0;
                pbVar6 = pbVar6 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              iVar7 = 0;
LAB_005584c5:
              if (iVar7 == 0) {
                puVar1 = (uint *)(iVar10 + param_1[200] + 0x38);
                *puVar1 = *puVar1 & 0xfffffffe;
              }
            }
            iVar3 = iVar3 + 1;
            iVar10 = iVar10 + 0x70;
          } while (iVar3 < (short)param_1[0xc9]);
        }
      }
      goto LAB_0055870f;
    }
  }
  else {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 == 0) goto LAB_005583d7;
    FUN_00a81330();
    uVar5 = FUN_00a7c8a0();
    iVar3 = FUN_00549f60(uVar5);
    if ((iVar3 == 0) ||
       (bVar12 = *(int *)(iVar3 + 0xa80) != 0 || bVar12, (*(byte *)(iVar3 + 0x4c8) & 2) == 0))
    goto LAB_005583d7;
  }
  iVar3 = FUN_00fdbc60();
  if (param_1[0x370] == 0x12) {
    iVar3 = FUN_00a12210(6);
    FUN_00551bf0(0x36,iVar3 + 0x40);
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar10 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar10) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,&DAT_01641424), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar10);
          *puVar1 = *puVar1 | 1;
        }
        iVar3 = iVar3 + 1;
        iVar10 = iVar10 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    *(ushort *)(param_1 + 0x371) = *(ushort *)(param_1 + 0x371) | 1;
    iVar3 = param_1[0x836];
    _DAT_01b77cd4 = _DAT_01b77cd4 | 4;
  }
  if (param_1[0x370] == 0x13) {
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar10 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar10) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_ar"), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar10);
          *puVar1 = *puVar1 | 1;
        }
        iVar3 = iVar3 + 1;
        iVar10 = iVar10 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    iVar3 = param_1[0x837];
  }
  if (param_1[0x370] == 0x14) {
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar10 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar10) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_al"), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar10);
          *puVar1 = *puVar1 | 1;
        }
        iVar3 = iVar3 + 1;
        iVar10 = iVar10 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    iVar3 = param_1[0x837];
    _DAT_01b77cd4 = _DAT_01b77cd4 | 0x40;
  }
  if (param_1[0x370] == 0x19) {
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar10 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar10) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_rr"), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar10);
          *puVar1 = *puVar1 | 1;
        }
        iVar3 = iVar3 + 1;
        iVar10 = iVar10 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    iVar3 = param_1[0x837];
  }
  if (param_1[0x370] == 0x17) {
    iVar3 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar10 = 0;
      do {
        iVar7 = param_1[200];
        iVar8 = *(int *)(*(int *)(iVar7 + 0x60 + iVar10) + 0x40);
        if ((iVar8 != 0) && (iVar8 = FUN_00fdbbd0(iVar8,"wp_rl"), iVar8 != 0)) {
          puVar1 = (uint *)(iVar7 + 0x38 + iVar10);
          *puVar1 = *puVar1 | 1;
        }
        iVar3 = iVar3 + 1;
        iVar10 = iVar10 + 0x70;
      } while (iVar3 < (short)param_1[0xc9]);
    }
    iVar3 = param_1[0x837];
  }
  (**(code **)(*param_1 + 0x30c))(iVar3,0);
  if (param_1[0x21c] < 2) {
    param_1[0x21c] = 1;
  }
LAB_0055870f:
  lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>(0x2020c);
  FUN_00a8caf0(0xd,0,0,0);
  fVar13 = (float10)FUN_00dde300(0x40400000,0x40800000);
  param_1[0x3a1] = (int)(float)(fVar13 * (float10)60.0);
  return;
}

// 00558760  Em020a::vf50  size=1311  [class]
void __fastcall Em020a::vf50(int param_1)

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
  
  *(undefined4 *)(param_1 + 0x20fc) = 0;
  BehaviorEmBase::vf50();
  FUN_00557e00();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f5990(param_1);
  }
  if (*(int *)(param_1 + 0x2010) != 0) {
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
  if (*(int *)(param_1 + 0x2014) != 0) {
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
  if (*(int *)(param_1 + 0x2018) != 0) {
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
  if (*(int *)(param_1 + 0x201c) != 0) {
    iVar4 = FUN_00a12210(0x36);
    fStack_70 = *(float *)(param_1 + 0x50);
    fStack_6c = *(float *)(param_1 + 0x54);
    fStack_68 = *(float *)(param_1 + 0x58);
    uStack_64 = *(undefined4 *)(param_1 + 0x5c);
    uStack_60 = 0;
    fStack_5c = 0.0;
    uStack_58 = 0;
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
  if (*(int *)(param_1 + 0x2020) != 0) {
    iVar4 = FUN_00a12210(0x3b);
    fStack_70 = *(float *)(param_1 + 0x50);
    fStack_6c = *(float *)(param_1 + 0x54);
    fStack_68 = *(float *)(param_1 + 0x58);
    uStack_64 = *(undefined4 *)(param_1 + 0x5c);
    uStack_60 = 0;
    fStack_5c = 0.0;
    uStack_58 = 0;
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
  return;
}

// 00558D10  FUN_00558d10  size=68  [between]
void __fastcall FUN_00558d10(int param_1)

{
  char cVar1;
  int iVar2;
  
  param_1 = param_1 + 0x2290;
  iVar2 = 3;
  do {
    cVar1 = *(char *)(param_1 + 1);
    if (cVar1 == '\0') {
      FUN_0054ae90();
    }
    else if (cVar1 == '\x01') {
      FUN_005549f0();
    }
    else if (cVar1 == '\x02') {
      FUN_0054af10();
    }
    param_1 = param_1 + 0xe0;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00558D60  FUN_00558d60  size=2722  [between]
void __fastcall FUN_00558d60(int *param_1)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined1 auStack_94 [144];
  
  param_1[0x75c] = 1;
  param_1[0x580] = 1;
  param_1[0x581] = 1;
  param_1[0x57f] = 1;
  param_1[0x3a2] = 1;
  param_1[0x3a3] = 1;
  uVar9 = 0;
  iVar4 = FUN_00a81330();
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    puVar11 = &DAT_01be9db8;
    (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar11);
    uVar9 = -(uint)(iVar4 != 0) & (uint)piVar5;
  }
  pcVar2 = *(code **)(*param_1 + 0x220);
  param_1[0x372] = 1;
  (*pcVar2)(0x41200000);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x65,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a93090(2);
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar8 = 0;
      do {
        iVar3 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar3 + 0x60 + iVar8) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"qtelh"), iVar6 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar8);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    param_1[0x76a] = 1;
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar8 = 0;
      do {
        iVar3 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar3 + 0x60 + iVar8) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"kata_L"), iVar6 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar8);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar8 = 0;
      do {
        iVar3 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar3 + 0x60 + iVar8) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"left_arm"), iVar6 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar8);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar8 = 0;
      do {
        iVar3 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar3 + 0x60 + iVar8) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"missilepod_L"), iVar6 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar8);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    FUN_0040b190();
    iVar4 = FUN_00a82090("Em020aLeftHand",0x20205,auStack_94);
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      param_1[0x752] = iVar4;
      if (iVar4 != 0) {
        FUN_00acf8b0(param_1[0x13c],1);
      }
    }
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
    FUN_0040b190();
    iVar4 = FUN_00a82090("Em0200 Sho",0x20208,auStack_94);
    if (iVar4 != 0) {
      iVar4 = FUN_00a7c8a0();
      if (iVar4 != 0) {
        FUN_00acf8b0(param_1[0x13c],0);
        uVar7 = FUN_009f8b40();
        FUN_009f8ae0(uVar7);
        uVar7 = FUN_009f8b40();
        FUN_00ac55a0(uVar7);
      }
      uVar7 = FUN_00a7c7f0();
      FUN_00a7c960(uVar7);
    }
    iVar4 = FUN_00a82090("Em0200_PlBlade",0x10102,0);
    if (iVar4 != 0) {
      FUN_00a8c5f0(4,param_1[0x13c],iVar4,0xe00,0);
      iVar4 = FUN_00a7c8a0();
      *(uint *)(iVar4 + 0x364) = *(uint *)(iVar4 + 0x364) & 0xfffffffd;
      iVar4 = FUN_00a7c8a0();
      *(uint *)(iVar4 + 0x364) = *(uint *)(iVar4 + 0x364) & 0xffefffff;
      uVar7 = 0;
      FUN_00a7c8a0(0);
      cModelBase::setRootPartsNo(uVar7);
      iVar4 = FUN_00a7c8a0();
      *(undefined4 *)(iVar4 + 0x18c) = 0;
    }
    if (param_1[0x752] != 0) {
      FUN_00aea4a0();
      FUN_00a9e290(&DAT_01641640,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    FUN_00eaa6e0(0x3f800000,0);
    iVar4 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar8 = 0;
      do {
        iVar3 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar3 + 0x60 + iVar8) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"wp_al"), iVar6 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar8);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 + 0x70;
      } while (iVar4 < (short)param_1[0xc9]);
    }
    param_1[0x898] = 0;
    break;
  case 1:
  case 5:
  case 7:
  case 0xf:
  case 0x11:
    break;
  case 2:
    FUN_00aa4080(0x66,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x752] != 0) {
      FUN_00a9e290(&DAT_01641638,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    if ((param_1[0x898] != 0) && (iVar4 = FUN_00a81330(), iVar4 != 0)) {
      uVar10 = 0;
      param_1 = param_1 + 0x844;
      uVar7 = FUN_00a7c8a0(param_1,0);
      FUN_00a8e5d0(uVar7,param_1,uVar10);
      switchD_0080dbae::default();
      return;
    }
    goto switchD_00558e07_default;
  case 4:
    FUN_00aa4080(0x67,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x752] != 0) {
      FUN_00a9e290(&DAT_01641630,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    break;
  case 6:
    FUN_00aa4080(0x68,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x752] != 0) {
      FUN_00a9e290(&DAT_01641628,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    if (uVar9 != 0) {
      FUN_00a8cb60(6);
    }
    break;
  case 8:
    FUN_00aa4080(0x69,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x752] != 0) {
      FUN_00a9e290(&DAT_01641620,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    if (uVar9 != 0) {
      FUN_00a8cb60(8);
    }
    goto LAB_0055943d;
  case 9:
LAB_0055943d:
    iVar4 = FUN_00a952e0(0,0x41000000);
    if (iVar4 != 0) {
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
        E3_EnemyBoardDebrisSokushi::vf4C();
      }
      FUN_00a7c950();
      (**(code **)(*param_1 + 0x358))(0x18,param_1 + 0x614);
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        FUN_00a805f0();
      }
      FUN_00a7c950();
      lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>(0x20208);
      FUN_0093db80();
    }
    iVar4 = FUN_00a952e0(0,0x430e0000);
    if (iVar4 != 0) {
      if (param_1[0x752] != 0) {
        E3_EnemyBoardDebrisSokushi::vf4C();
      }
      param_1[0x752] = 0;
    }
    FUN_00a952e0(0,0x43aa0000);
    break;
  case 10:
    FUN_00aa4080(0x6b,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x752] != 0) {
      FUN_00a9e290(&DAT_01641610,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>(0x20208);
    FUN_0093db80();
    if (uVar9 != 0) {
      FUN_00a8cb60(10);
    }
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) goto LAB_005591db;
    iVar4 = FUN_00a952e0(0,0x43820000);
    if (iVar4 != 0) {
      param_1[0x58d] = 1;
      switchD_0080dbae::default();
      return;
    }
    goto switchD_00558e07_default;
  case 0xc:
    FUN_00aa4080(0x78,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>(0x20208);
    FUN_0093db80();
    if (uVar9 != 0) {
      FUN_00a8cb60(0xc);
    }
    param_1[0x58d] = 0;
  case 0xd:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) goto LAB_005591db;
    iVar4 = FUN_00a952e0(0,0x41200000);
    if (iVar4 != 0) {
      param_1[0x58d] = 0;
      switchD_0080dbae::default();
      return;
    }
    goto switchD_00558e07_default;
  case 0xe:
    FUN_00aa4080(0x79,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x752] != 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    param_1[0x752] = 0;
    lib::StaticArray<Entity*,256>::StaticArray<Entity*,256>(0x20208);
    FUN_0093db80();
    if (uVar9 != 0) {
      FUN_00a8cb60(0xe);
    }
    break;
  case 0x10:
    FUN_00aa4080(0x7a,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (uVar9 != 0) {
      FUN_00a8cb60(0x10);
    }
    break;
  case 0x12:
    FUN_00aa4080(0x7b,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 0x13:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00a93090(6);
      FUN_00c81e40(3);
      switchD_0080dbae::default();
      return;
    }
  default:
    goto switchD_00558e07_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
LAB_005591db:
    param_1[0x187] = param_1[0x187] + 1;
    switchD_0080dbae::default();
    return;
  }
switchD_00558e07_default:
  switchD_0080dbae::default();
  return;
}

// 00559860  FUN_00559860  size=231  [between]
void __fastcall FUN_00559860(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_0054a310();
    break;
  case 1:
    FUN_0054ff60();
    break;
  case 2:
    FUN_0054a4f0();
    break;
  case 3:
    FUN_005502e0();
    break;
  case 4:
    FUN_005509c0();
    break;
  case 5:
    FUN_005552e0();
    break;
  case 6:
  case 7:
    FUN_00555980();
    break;
  case 8:
    FUN_00556010();
    break;
  case 9:
    FUN_00557130();
    break;
  case 10:
    FUN_00547760();
    break;
  case 0xb:
    FUN_00551070();
    break;
  case 0xc:
    FUN_0054b090();
    break;
  case 0xd:
    FUN_00547800();
    break;
  case 0xe:
    FUN_0054b430();
    break;
  case 0xf:
    FUN_0054bc30();
    break;
  case 0x10:
    FUN_0054a8e0();
    break;
  case 0x11:
    FUN_0054a9a0();
    break;
  case 0x12:
  case 0x13:
    FUN_005511c0();
    break;
  case 0x14:
    FUN_005515f0();
    break;
  case 0x15:
    FUN_0054c680();
    break;
  case 0x16:
    FUN_00558d60();
    break;
  case 0x17:
  case 0x18:
    FUN_0054c9b0();
    break;
  case 0x19:
    FUN_00554d40();
  }
  iVar1 = *(int *)(param_1 + 0x2268);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_00551d10();
      return;
    }
    if (iVar1 == 2) {
      FUN_00552be0();
      return;
    }
  }
  return;
}

// 005599B0  Em020a::vf4C  size=476  [class]
void __fastcall Em020a::vf4C(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_00a92fb0();
  fVar8 = (float10)FUN_00e049b0();
  param_1[0x244] = (int)(float)fVar8;
  pcVar1 = *(code **)(*param_1 + 0x1d4);
  uVar7 = 0;
  param_1[0x771] = 0;
  (*pcVar1)(0);
  param_1[0x75c] = 0;
  BehaviorEmBase::vf4C();
  param_1[0x3a2] = 1;
  param_1[0x372] = 0;
  switch(param_1[0x186]) {
  case 0:
    FUN_005473c0();
    break;
  case 1:
  case 8:
  case 9:
    param_1[0x3a2] = 0;
    break;
  case 2:
    FUN_00547550();
    break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    FUN_0054a690();
    break;
  case 0x16:
    FUN_00548790();
    break;
  case 0x17:
  case 0x18:
    FUN_005495b0();
    break;
  case 0x19:
    FUN_00558300();
  }
  FUN_00559860();
  FUN_005486c0();
  FUN_00548420();
  FUN_00558d10();
  FUN_00551900();
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  iVar5 = FUN_00ac45b0();
  uVar2 = uStack_24;
  uVar3 = uStack_20;
  uVar4 = uStack_1c;
  if ((iVar5 != 0) &&
     (iVar5 = FUN_00a7c8a0(), uVar2 = uStack_24, uVar3 = uStack_20, uVar4 = uStack_1c, iVar5 != 0))
  {
    uStack_18 = *(undefined4 *)(iVar5 + 0x4c);
    uVar2 = *(undefined4 *)(iVar5 + 0x40);
    uVar3 = *(undefined4 *)(iVar5 + 0x44);
    uVar4 = *(undefined4 *)(iVar5 + 0x48);
  }
  param_1[0x810] = 1;
  if (((DAT_01bea060 & 0x8000000) == 0) && ((DAT_01bea060 & 0x2000000) == 0)) {
    uVar6 = 0;
    uStack_24 = uVar2;
    uStack_20 = uVar3;
    uStack_1c = uVar4;
    if (param_1[0x128] == 0) {
      uVar7 = 1;
      uVar6 = 1;
      iVar5 = FUN_00a8c760(0x13);
      if (iVar5 != 0) {
        uVar7 = 0;
        uVar6 = 0;
      }
    }
    param_1[0x57d] = 0;
    param_1[0x57e] = 0;
    FUN_00a84720();
    switchD_0080dbae::default();
    FUN_00a84780(&uStack_24,uVar7,uVar6,0,0,0x3f800000);
    switchD_0080dbae::default();
    return;
  }
  FUN_00a84720();
  switchD_0080dbae::default();
  return;
}

// 00AAE620  Em020a::vf04  size=6  [class]
undefined * Em020a::vf04(void)

{
  return &DAT_01b34f80;
}

// 00AAE630  Em020a::vf20C  size=7  [class]
float10 Em020a::vf20C(void)

{
  return (float10)5.0;
}

// 00AAE640  Em020a::vf17C  size=6  [class]
undefined4 Em020a::vf17C(void)

{
  return 1;
}

// 00AAE650  Em020a::vf1DC  size=6  [class]
undefined4 Em020a::vf1DC(void)

{
  return 1;
}

// 00AAE660  FUN_00aae660  size=196  [callgraph]
void FUN_00aae660(void)

{
  int iVar1;
  
  iVar1 = 2;
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

// 00AB7570  Em020a::destruct  size=30  [class]
undefined4 __thiscall Em020a::destruct(undefined4 param_1,byte param_2)

{
  FUN_00aae660();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}


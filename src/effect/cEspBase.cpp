// src/effect/cEspBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED4C70..00F40950, 20 functions

#include "mgrr.h"
#include "cEspBase.h"

// 00ED4C70  cEspBase::vf10  size=8  [class]
void __fastcall cEspBase::vf10(int param_1)

{
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x400000;
  return;
}

// 00ED4C90  cEspBase::vf18  size=15  [class]
bool __thiscall cEspBase::vf18(int param_1,int param_2)

{
  return *(int *)(param_1 + 100) == param_2;
}

// 00EDB150  cEspBase::cEspBase  size=77  [class]
undefined4 * __fastcall cEspBase::cEspBase(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_00f59e40();
  FUN_00ec9bf0();
  FUN_00ddbbb0();
  param_1[0x101] = 0;
  param_1[0x102] = 0xc0000000;
  return param_1;
}

// 00F099B0  cEspBase::addOtTransList  size=489  [class]
void __fastcall cEspBase::addOtTransList(int param_1)

{
  char cVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte local_1c;
  short local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((DAT_01edd490 != 0) &&
     (puVar3 = (undefined4 *)cPrimHeap::allocBuffer(0xd0,0x20), puVar3 != (undefined4 *)0x0)) {
    puVar3[9] = 0;
    *puVar3 = esp51DrawWork::vftable;
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(uint **)(param_1 + 0x58);
      if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
        uVar4 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
    }
    cVar1 = *(char *)(uVar5 + 0x16);
    iVar6 = FUN_00ec69a0();
    iVar7 = FUN_00dd7ad0();
    uVar5 = *(uint *)(param_1 + 0x3c);
    uVar9 = iVar6 - 9U >> 5;
    uVar8 = 0x80000000 >> ((byte)(iVar6 - 9U) & 0x1f);
    (&DAT_01eddb60)[uVar9 + iVar7] = (&DAT_01eddb60)[uVar9 + iVar7] | uVar8;
    if ((uVar5 >> 0x16 & 1) == 0) {
      (&DAT_01eddb4c)[uVar9 + iVar7] = (&DAT_01eddb4c)[uVar9 + iVar7] & ~uVar8;
    }
    else {
      (&DAT_01eddb4c)[uVar9 + iVar7] = (&DAT_01eddb4c)[uVar9 + iVar7] | uVar8;
    }
    if ((uVar5 >> 7 & 1) == 0) {
      (&DAT_01eddb38)[uVar9 + iVar7] = (&DAT_01eddb38)[uVar9 + iVar7] & ~uVar8;
    }
    else {
      (&DAT_01eddb38)[uVar9 + iVar7] = (&DAT_01eddb38)[uVar9 + iVar7] | uVar8;
    }
    FUN_00edfcd0(param_1 + 0x3c8);
    FUN_00f45d50();
    local_8 = *(undefined4 *)(param_1 + 0x28);
    local_4 = 0;
    local_14 = puVar3;
    local_10 = param_1;
    local_c = param_1 + 0x3c8;
    FUN_00f46f60(&local_14);
    FUN_00f45d60(&local_14);
    local_14[0x24] = *(undefined4 *)(param_1 + 0x450);
    local_14[0x25] = 0;
    local_14[0x26] = 0;
    local_14[0x27] = 0;
    fVar2 = *(float *)(param_1 + 0x110) + *(float *)(param_1 + 0x458);
    *(float *)(param_1 + 0x458) = fVar2;
    if (*(float *)(param_1 + 0x454) < fVar2 == (*(float *)(param_1 + 0x454) == fVar2)) {
      local_14[0x25] = 0x3f800000;
    }
    else {
      *(undefined4 *)(param_1 + 0x458) = 0;
      local_14[0x25] = 0;
    }
    local_1c = (byte)iVar6;
    local_18 = (short)cVar1;
    *(byte *)(puVar3 + 4) = local_1c;
    *(short *)((int)puVar3 + 0xe) = local_18;
    if (0x6b < local_1c) {
      FUN_009cca90(param_1,&DAT_016d9d88);
    }
    puVar3[1] = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 **)(param_1 + 0x2c) = puVar3;
    return;
  }
  FUN_009cca90(param_1,&DAT_016dd5fc);
  return;
}

// 00F128E0  cEspBase::cEspBase_3  size=51  [class]
void __fastcall cEspBase::cEspBase_3(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  return;
}

// 00F12970  cEspBase::cEspBase_4  size=130  [class]
undefined4 * __fastcall cEspBase::cEspBase_4(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_00f59e40();
  FUN_00ec9bf0();
  FUN_00ddbbb0();
  param_1[0x101] = 0;
  *(undefined2 *)(param_1 + 0x10a) = 0;
  param_1[0x102] = 0xc0000000;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *param_1 = cEsp::vftable;
  return param_1;
}

// 00F12A00  cEspBase::cEspBase_5  size=51  [class]
void __fastcall cEspBase::cEspBase_5(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  return;
}

// 00F17660  cEspBase::cEspBase_6  size=51  [class]
void __fastcall cEspBase::cEspBase_6(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  return;
}

// 00F1E960  cEspBase::cEspBase_2  size=51  [class]
void __fastcall cEspBase::cEspBase_2(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  return;
}

// 00F200E0  cEspBase::cEspBase_8  size=132  [class]
undefined4 * __fastcall cEspBase::cEspBase_8(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_00f59e40();
  FUN_00ec9bf0();
  FUN_00ddbbb0();
  param_1[0x101] = 0;
  *param_1 = EspEmtBase::vftable;
  param_1[0x108] = 0;
  param_1[0x102] = 0xc0000000;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x114] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  FUN_00dd7240();
  return param_1;
}

// 00F20170  cEspBase::cEspBase_9  size=97  [class]
void __fastcall cEspBase::cEspBase_9(undefined4 *param_1)

{
  *param_1 = EspEmtBase::vftable;
  FUN_00f12430();
  FUN_00dd7270();
  FUN_00dd7270();
  FUN_00dd7270();
  *param_1 = vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  return;
}

// 00F2C540  cEspBase::addOtTransList_2  size=607  [class]
void __fastcall cEspBase::addOtTransList_2(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bStack_54;
  undefined2 local_50;
  undefined1 local_40 [16];
  int iStack_30;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(float *)(param_1 + 0x250) != 0.0) {
    if ((DAT_01edd490 == 0) ||
       (puVar5 = (undefined4 *)cPrimHeap::allocBuffer(0xd0,0x20), puVar5 == (undefined4 *)0x0)) {
      FUN_009cca90(param_1,&DAT_016dd624);
      return;
    }
    puVar5[9] = 0;
    *puVar5 = esp52DrawWork::vftable;
    if ((*(uint **)(param_1 + 0x58) != (uint *)0x0) &&
       (uVar3 = **(uint **)(param_1 + 0x58), (uVar3 + 0xf & 0xfffffff0) != uVar3)) {
      uVar6 = FUN_00f59ed0(0);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    fVar7 = (float)FUN_00ec69a0();
    iVar8 = FUN_00dd7ad0();
    uVar3 = *(uint *)(param_1 + 0x3c);
    uVar9 = uVar3 >> 0x16 & 1;
    uVar11 = (int)fVar7 - 9U >> 5;
    uVar10 = 0x80000000 >> ((byte)((int)fVar7 - 9U) & 0x1f);
    (&DAT_01eddb60)[uVar11 + iVar8] = (&DAT_01eddb60)[uVar11 + iVar8] | uVar10;
    if (uVar9 == 0) {
      (&DAT_01eddb4c)[uVar11 + iVar8] = (&DAT_01eddb4c)[uVar11 + iVar8] & ~uVar10;
    }
    else {
      (&DAT_01eddb4c)[uVar11 + iVar8] = (&DAT_01eddb4c)[uVar11 + iVar8] | uVar10;
    }
    if ((uVar3 >> 7 & 1) == 0) {
      (&DAT_01eddb38)[uVar11 + iVar8] = (&DAT_01eddb38)[uVar11 + iVar8] & ~uVar10;
    }
    else {
      (&DAT_01eddb38)[uVar11 + iVar8] = (&DAT_01eddb38)[uVar11 + iVar8] | uVar10;
    }
    FUN_00edfcd0(param_1 + 0x3c8);
    FUN_00f26b40(puVar5);
    FUN_00f45d50();
    local_18 = *(undefined4 *)(param_1 + 0x28);
    local_14 = 0;
    local_24 = puVar5;
    local_20 = param_1;
    local_1c = param_1 + 0x3c8;
    FUN_00f49500(&local_24);
    iVar8 = FUN_00ec6920();
    D3DXVec3TransformNormal(local_40,param_1 + 400,iVar8);
    fVar1 = *(float *)(iVar8 + 0x30);
    fVar2 = *(float *)(iVar8 + 0x34);
    iVar8 = FUN_00ec69c0();
    fVar4 = (float)iVar8;
    if (iVar8 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    *(float *)(iStack_30 + 0x90) = fVar4 * (fVar1 + (float)puVar5 + 0.5);
    *(float *)(iStack_30 + 0x94) = fVar4 * (fVar2 + fVar7 + 0.5);
    *(undefined4 *)(iStack_30 + 0x98) = *(undefined4 *)(param_1 + 0x250);
    local_50 = (undefined2)uVar9;
    *(undefined4 *)(iStack_30 + 0xa0) = *(undefined4 *)(param_1 + 0x100);
    *(undefined4 *)(iStack_30 + 0xa4) = *(undefined4 *)(param_1 + 0x104);
    *(byte *)(puVar5 + 4) = bStack_54;
    *(undefined2 *)((int)puVar5 + 0xe) = local_50;
    if (0x6b < bStack_54) {
      FUN_009cca90(param_1,&DAT_016d9d88);
    }
    puVar5[1] = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 **)(param_1 + 0x2c) = puVar5;
  }
  return;
}

// 00F403F0  cEspBase::cEspBase_10  size=51  [class]
void __fastcall cEspBase::cEspBase_10(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  return;
}

// 00F40430  FUN_00f40430  size=59  [between]
void FUN_00f40430(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_00f0dcb0(&local_20,param_2,param_3,param_4);
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  return;
}

// 00F40470  cEspBase::cEspBase_13  size=51  [class]
void __fastcall cEspBase::cEspBase_13(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  return;
}

// 00F404B0  cEspBase::cEspBase_12  size=51  [class]
void __fastcall cEspBase::cEspBase_12(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  return;
}

// 00F404F0  cEspBase::cEspBase_11  size=51  [class]
void __fastcall cEspBase::cEspBase_11(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  return;
}

// 00F40530  cEspBase::cEspBase_14  size=51  [class]
void __fastcall cEspBase::cEspBase_14(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  return;
}

// 00F40630  cEspBase::vf00  size=72  [class]
undefined4 * __thiscall cEspBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F40950  cEspBase::cEspBase_7  size=51  [class]
void __fastcall cEspBase::cEspBase_7(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00eaa2b0(param_1);
  if (param_1[4] != 0) {
    FUN_00f123b0(param_1);
  }
  FUN_00ddbbc0();
  FUN_00ec4840();
  return;
}


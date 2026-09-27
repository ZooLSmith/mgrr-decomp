// src/misc/cObject.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A1F620..015F5EC0, 19 functions

#include "mgrr.h"
#include "cObject.h"

// 00A1F620  cObject::vf00  size=6  [class]
undefined ** cObject::vf00(void)

{
  return &PTR_s_cObject_018cf928;
}

// 00A1F630  cObject::vf04  size=31  [class]
undefined4 * __thiscall cObject::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A36200  cObject::cObject_2  size=139  [class]
void __fastcall cObject::cObject_2(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x1f;
  puVar1 = param_1 + 0x780;
  do {
    iVar2 = iVar2 + -1;
    puVar1[-0xb] = vftable;
    puVar1[-0x24] = vftable;
    puVar1 = puVar1 + -0x24;
  } while (-1 < iVar2);
  puVar1 = param_1 + 0x18e;
  iVar2 = 7;
  do {
    puVar1 = puVar1 + -7;
    iVar2 = iVar2 + -1;
    *puVar1 = vftable;
  } while (-1 < iVar2);
  puVar1 = param_1 + 0x156;
  iVar2 = 7;
  do {
    puVar1 = puVar1 + -7;
    iVar2 = iVar2 + -1;
    *puVar1 = vftable;
  } while (-1 < iVar2);
  puVar1 = param_1 + 0x10e;
  iVar2 = 7;
  do {
    puVar1 = puVar1 + -7;
    iVar2 = iVar2 + -1;
    *puVar1 = vftable;
  } while (-1 < iVar2);
  puVar1 = param_1 + 0x8a;
  iVar2 = 7;
  do {
    puVar1 = puVar1 + -7;
    iVar2 = iVar2 + -1;
    *puVar1 = vftable;
  } while (-1 < iVar2);
  *param_1 = vftable;
  return;
}

// 00A36330  cObject::cObject_3  size=110  [class]
void __fastcall cObject::cObject_3(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00dd7270();
  cObject_2();
  param_1[0x16858] = vftable;
  iVar2 = 0x3ff;
  puVar1 = param_1 + 0x16858;
  do {
    puVar1 = puVar1 + -0x2c;
    iVar2 = iVar2 + -1;
    *puVar1 = vftable;
  } while (-1 < iVar2);
  iVar2 = 0x3ff;
  puVar1 = param_1 + 0xb858;
  do {
    puVar1 = puVar1 + -0x2c;
    iVar2 = iVar2 + -1;
    *puVar1 = vftable;
  } while (-1 < iVar2);
  cObject_2();
  *param_1 = vftable;
  return;
}

// 00A44940  cObject::cObject_4  size=463  [class]
void __fastcall cObject::cObject_4(int param_1)

{
  FUN_00dd7270();
  FUN_00dd7270();
  *(undefined ***)(param_1 + 0x2af0) = vftable;
  *(undefined ***)(param_1 + 0x2aa4) = vftable;
  cObject_2();
  FUN_00a3e430();
  FUN_00a3e2f0();
  if (*(int *)(param_1 + 0x1a4) != 0) {
    if (*(int *)(param_1 + 0x1a4) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x1a4),0);
      *(undefined4 *)(param_1 + 0x1a4) = 0;
    }
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_1 + 0x1a0);
    *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_1 + 0x1a0);
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    if (*(int *)(param_1 + 0x188) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x188),0);
      *(undefined4 *)(param_1 + 0x188) = 0;
    }
    *(undefined4 *)(param_1 + 0x18c) = 0;
    *(undefined4 *)(param_1 + 400) = 0;
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x184);
  }
  FUN_00a3dfe0();
  FUN_00a3e430();
  FUN_00a3e2f0();
  if (*(int *)(param_1 + 0x118) != 0) {
    if (*(int *)(param_1 + 0x118) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x118),0);
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x114);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x114);
  }
  if (*(int *)(param_1 + 0xfc) != 0) {
    if (*(int *)(param_1 + 0xfc) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xfc),0);
      *(undefined4 *)(param_1 + 0xfc) = 0;
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xf8);
  }
  FUN_00a3dfe0();
  FUN_00a3def0();
  return;
}

// 00FBA010  cObject::cObject  size=34  [class]
undefined4 * __thiscall cObject::cObject(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015EDA90  cObject::cObject_5  size=11  [class]
void cObject::cObject_5(void)

{
  PTR_vftable_0189f650 = (undefined *)vftable;
  return;
}

// 015EDAA0  FUN_015edaa0  size=20  [between]
void FUN_015edaa0(void)

{
  Hw::cRenderTargetInfo::cRenderTargetInfo_2();
  Hw::cOtManagerBase::cOtManagerBase_2();
  return;
}

// 015EDAC0  FUN_015edac0  size=10  [between]
void FUN_015edac0(void)

{
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015EDAD0  FUN_015edad0  size=10  [between]
void FUN_015edad0(void)

{
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015EDAE0  FUN_015edae0  size=10  [between]
void FUN_015edae0(void)

{
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015EDAF0  FUN_015edaf0  size=10  [between]
void FUN_015edaf0(void)

{
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015EDB00  FUN_015edb00  size=10  [between]
void FUN_015edb00(void)

{
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015EDB10  FUN_015edb10  size=10  [between]
void FUN_015edb10(void)

{
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015EDB30  cObject::cObject_6  size=11  [class]
void cObject::cObject_6(void)

{
  PTR_vftable_0189f6f0 = (undefined *)vftable;
  return;
}

// 015EDB40  FUN_015edb40  size=10  [callgraph]
void FUN_015edb40(void)

{
  cObject::cObject_3();
  return;
}

// 015EDBE0  FUN_015edbe0  size=10  [callgraph]
void FUN_015edbe0(void)

{
  cObject::cObject_4();
  return;
}

// 015F15D0  cObject::cObject_7  size=20  [class]
void cObject::cObject_7(void)

{
  PTR_vftable_018d1f80 = (undefined *)vftable;
  FUN_00dd7270();
  return;
}

// 015F5EC0  cObject::cObject_8  size=11  [class]
void cObject::cObject_8(void)

{
  PTR_PTR_018dd3d0 = (undefined *)vftable;
  return;
}


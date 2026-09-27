// src/misc/ShapeMesh.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6B8D0..00A6D060, 13 functions

#include "mgrr.h"
#include "ShapeMesh.h"

// 00A6B8D0  ShapeMesh::vf14  size=130  [class]
undefined4 ShapeMesh::vf14(void)

{
  int *piVar1;
  undefined1 local_e0 [4];
  undefined4 local_dc;
  
  FUN_004066f0();
  FUN_0118f7b0();
  FUN_0119fa20(local_e0);
  FUN_01006000();
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return local_dc;
}

// 00A6B960  ShapeMesh::ShapeMesh  size=40  [class]
undefined4 * __fastcall ShapeMesh::ShapeMesh(undefined4 *param_1)

{
  ShapeBase::ShapeBase_2(4);
  *param_1 = vftable;
  param_1[0x34] = 0;
  param_1[0x35] = 1;
  return param_1;
}

// 00A6B990  ShapeMesh::vf00  size=6  [class]
undefined * ShapeMesh::vf00(void)

{
  return &DAT_01be9a20;
}

// 00A6C120  ShapeMesh::vf08  size=95  [class]
undefined4 * __thiscall ShapeMesh::vf08(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined4 uStack_4;
  
  iVar1 = param_1[0x34];
  *param_1 = vftable;
  uStack_4 = param_1;
  if ((iVar1 != 0) && (param_1[0x35] != 0)) {
    if (*(int *)(iVar1 + 8) == 0) {
      FUN_010060a0();
    }
    else {
      FUN_01192b60((int)&uStack_4 + 3,iVar1);
    }
  }
  param_1[0x34] = 0;
  *param_1 = ShapeBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00A6C420  ShapeMesh::vf0C  size=142  [class]
void __fastcall ShapeMesh::vf0C(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_50 [19];
  
  local_50[0xe] = 0;
  local_50[0xd] = 0;
  local_50[0xc] = 0;
  local_50[0xb] = 0;
  local_50[9] = 0;
  local_50[8] = 0;
  local_50[7] = 0;
  local_50[6] = 0;
  local_50[4] = 0;
  local_50[3] = 0;
  local_50[2] = 0;
  local_50[1] = 0;
  local_50[0xf] = 0x3f800000;
  local_50[10] = 0x3f800000;
  local_50[5] = 0x3f800000;
  local_50[0] = 0x3f800000;
  puVar2 = local_50;
  puVar3 = (undefined4 *)(param_1 + 0x90);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_01005140(local_50);
  puVar2 = local_50;
  puVar3 = (undefined4 *)(param_1 + 0x50);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

// 00A6C4F0  FUN_00a6c4f0  size=60  [callgraph]
void __fastcall FUN_00a6c4f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00A6C580  FUN_00a6c580  size=106  [callgraph]
int * __thiscall FUN_00a6c580(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 0x10 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 00A6C5F0  FUN_00a6c5f0  size=141  [callgraph]
void __fastcall FUN_00a6c5f0(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x10 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 00A6C680  FUN_00a6c680  size=158  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00a6c680(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  if ((_DAT_01be9a08 & 1) == 0) {
    _DAT_01be9a08 = _DAT_01be9a08 | 1;
    DAT_01be9a04 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01be9a04;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01be9a04);
  if ((char)uVar4 == '\0') {
    return uVar4 & 0xffffff00;
  }
  cVar2 = (**(code **)(*param_1 + 0x10))(&DAT_01662d64,7);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x2c))(unaff_EBP + 0x14);
    (**(code **)(*param_1 + 0x14))(&DAT_01662d64,7);
  }
  uVar5 = (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return CONCAT31((int3)((uint)uVar5 >> 8),uVar3) & 0xffffff01;
}

// 00A6CA20  ShapeMesh::vf1C  size=22  [class]
void __thiscall ShapeMesh::vf1C(undefined4 param_1,undefined4 param_2)

{
  FUN_00a6c680(param_2,&DAT_01662d6c,param_1);
  return;
}

// 00A6CB80  ShapeMesh::vf04  size=52  [class]
undefined4 * ShapeMesh::vf04(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = FUN_00ea1210("ShapeMesh",9);
  uVar1 = FUN_008d93a0(uVar1,"ShapeMesh",9);
  *param_1 = uVar1;
  return param_1;
}

// 00A6CBC0  FUN_00a6cbc0  size=1172  [between]
void FUN_00a6cbc0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  LPVOID pvVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iStack_2b0;
  int local_2ac;
  uint uStack_2a8;
  int iStack_2a4;
  uint uStack_2a0;
  int iStack_29c;
  uint uStack_298;
  uint uStack_294;
  int iStack_290;
  uint uStack_28c;
  int iStack_288;
  uint uStack_284;
  int iStack_280;
  uint uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined1 auStack_210 [524];
  
  cVar2 = (char)param_1[2];
  if (cVar2 == '\x05') {
    uVar7 = (**(code **)(*param_1 + 0x2c))();
    iStack_29c = 0;
    uStack_298 = 0;
    uStack_294 = 0x80000000;
    uStack_28c = uVar7;
    if (uVar7 == 0) {
      iStack_290 = 0;
    }
    else {
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      iStack_290 = *(int *)((int)pvVar8 + 0xc);
      uVar10 = uVar7 * 0x10 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar8 + 8) < (int)uVar10) ||
         (*(uint *)((int)pvVar8 + 0x10) < uVar10 + iStack_290)) {
        iStack_290 = FUN_0100b780(uVar10);
      }
      else {
        *(uint *)((int)pvVar8 + 0xc) = uVar10 + iStack_290;
      }
    }
    uStack_294 = uVar7 | 0x80000000;
    iStack_29c = iStack_290;
    if ((int)(uVar7 & 0x3fffffff) < (int)uVar7) {
      uVar10 = (uVar7 & 0x3fffffff) * 2;
      if ((int)uVar10 <= (int)uVar7) {
        uVar10 = uVar7;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,&iStack_29c,uVar10,0x10);
    }
    uStack_298 = uVar7;
    iStack_288 = (**(code **)(*param_1 + 0x30))(iStack_29c);
    local_2ac = 0;
    uStack_2a8 = 0;
    iStack_2a4 = -0x80000000;
    uVar10 = uVar7;
    if (0 < (int)uVar7) {
      FUN_0100a210(&PTR_vftable_018e9b94,&local_2ac,((int)uVar7 < 0) - 1 & uVar7,0x10);
      iVar5 = 0;
      uVar11 = uVar7;
      uStack_2a8 = uVar7;
      do {
        FUN_01007050(*(int *)(iStack_2b0 + 0xd0) + 0xf0,iVar5 + iStack_288);
        iVar5 = iVar5 + 0x10;
        uVar11 = uVar11 - 1;
        uVar10 = uStack_2a8;
      } while (uVar11 != 0);
    }
    uStack_2a8 = uVar10;
    if ((int)uVar7 < 0x29) {
      pvVar8 = TlsGetValue(DAT_01f8fc4c);
      piVar4 = (int *)(**(code **)(**(int **)((int)pvVar8 + 0x2c) + 4))(0x18);
      if (piVar4 != (int *)0x0) {
        *piVar4 = 0;
        piVar4[1] = 0;
        piVar4[2] = -0x80000000;
        piVar4[3] = 0;
        piVar4[4] = 0;
        piVar4[5] = -0x80000000;
        iStack_280 = local_2ac;
        uStack_27c = uStack_2a8;
        uStack_278 = 0x10;
        FUN_010740c0(&iStack_280,piVar4);
        iVar5 = 0;
        iStack_2b0 = 0;
        if (0 < piVar4[4]) {
          do {
            piVar9 = (int *)(piVar4[3] + iStack_2b0);
            iVar3 = *piVar4;
            puVar12 = (undefined4 *)(iVar3 + *piVar9 * 0x10);
            uStack_274 = *puVar12;
            uStack_270 = puVar12[1];
            uStack_26c = puVar12[2];
            uStack_238 = puVar12[3];
            puVar12 = (undefined4 *)(iVar3 + piVar9[1] * 0x10);
            uStack_25c = *puVar12;
            uStack_258 = puVar12[1];
            uStack_254 = puVar12[2];
            uStack_228 = puVar12[3];
            puVar12 = (undefined4 *)(iVar3 + piVar9[2] * 0x10);
            uStack_268 = *puVar12;
            uStack_264 = puVar12[1];
            uStack_260 = puVar12[2];
            uStack_218 = puVar12[3];
            uStack_250 = uStack_274;
            uStack_24c = uStack_270;
            uStack_248 = uStack_26c;
            uStack_244 = uStack_274;
            uStack_240 = uStack_270;
            uStack_23c = uStack_26c;
            uStack_234 = uStack_25c;
            uStack_230 = uStack_258;
            uStack_22c = uStack_254;
            uStack_224 = uStack_268;
            uStack_220 = uStack_264;
            uStack_21c = uStack_260;
            FUN_00f95f60(&uStack_274,3,param_2,0);
            iVar5 = iVar5 + 1;
            iStack_2b0 = iStack_2b0 + 0x10;
          } while (iVar5 < piVar4[4]);
        }
        FUN_009211c0();
        pvVar8 = TlsGetValue(DAT_01f8fc4c);
        (**(code **)(**(int **)((int)pvVar8 + 0x2c) + 8))(piVar4,0x18);
      }
    }
    else {
      uStack_28c = FUN_00dd3580(-(uint)((int)((ulonglong)uVar7 * 0xc >> 0x20) != 0) |
                                (uint)((ulonglong)uVar7 * 0xc),&DAT_01b7c218);
      if (uStack_28c != 0) {
        if (0 < (int)uVar7) {
          iVar5 = 0;
          puVar12 = (undefined4 *)(uStack_28c + 8);
          uStack_284 = uVar7;
          do {
            FUN_01007050(*(int *)(iStack_2b0 + 0xd0) + 0xf0,iVar5 + iStack_288);
            uVar6 = *(undefined4 *)(iVar5 + 4 + local_2ac);
            uVar1 = *(undefined4 *)(iVar5 + 8 + local_2ac);
            uStack_284 = uStack_284 - 1;
            puVar12[-2] = *(undefined4 *)(iVar5 + local_2ac);
            puVar12[-1] = uVar6;
            *puVar12 = uVar1;
            iVar5 = iVar5 + 0x10;
            puVar12 = puVar12 + 3;
          } while (uStack_284 != 0);
          uStack_284 = 0;
        }
        if (uVar7 != 2 && -1 < (int)(uVar7 - 2)) {
          FUN_00f96060(uStack_28c,uVar7,param_2,8);
        }
        FUN_00dd4940(uStack_28c);
      }
    }
    iVar5 = 0;
    uStack_2a8 = iVar5;
    if (-1 < iStack_2a4) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2ac,iStack_2a4 << 4);
    }
    iVar3 = iStack_290;
    uVar7 = uStack_294;
    iStack_2a4 = 0x80000000;
    if (uStack_294 == uStack_2a0) {
      iStack_29c = iVar5;
    }
    local_2ac = iVar5;
    pvVar8 = TlsGetValue(DAT_01f8fc4c);
    uVar10 = iVar3 * 0x10 + 0x7fU & 0xffffff80;
    if (((*(int *)((int)pvVar8 + 8) < (int)uVar10) ||
        (uVar10 + uVar7 != *(int *)((int)pvVar8 + 0xc))) || (*(uint *)((int)pvVar8 + 0x14) == uVar7)
       ) {
      FUN_0100b9b0(uVar7,uVar10);
    }
    else {
      *(uint *)((int)pvVar8 + 0xc) = uVar7;
    }
    if (-1 < (int)uStack_298) {
      iStack_29c = iVar5;
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(uStack_2a0,uStack_298 << 4);
    }
  }
  else if ((cVar2 == '\t') || (cVar2 == '\x16')) {
    piVar4 = (int *)(**(code **)(*param_1 + 0x38))();
    iVar5 = (**(code **)(*piVar4 + 8))();
    if (iVar5 != -1) {
      do {
        uVar6 = (**(code **)(*piVar4 + 0x14))(iVar5,auStack_210);
        FUN_00a6cbc0(uVar6,param_2);
        iVar5 = (**(code **)(*piVar4 + 0xc))(iVar5);
      } while (iVar5 != -1);
      return;
    }
  }
  return;
}

// 00A6D060  ShapeMesh::vf18  size=484  [class]
void __thiscall ShapeMesh::vf18(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iStack_350;
  int local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  int iStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined1 local_2e0 [4];
  int *local_2dc;
  undefined1 auStack_210 [524];
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    local_348 = param_1;
    FUN_004066f0();
    FUN_0118f7b0();
    FUN_0119fa20(local_2e0);
    piVar1 = (int *)(**(code **)(*local_2dc + 0x38))();
    if (piVar1 != (int *)0x0) {
      for (iVar2 = (**(code **)(*piVar1 + 8))(); iVar2 != -1;
          iVar2 = (**(code **)(*piVar1 + 0xc))(iVar2)) {
        iVar3 = (**(code **)(*piVar1 + 0x14))(iVar2,auStack_210);
        FUN_01007050(*(int *)(iStack_350 + 0xd0) + 0xf0,iVar3 + 0x20);
        FUN_01007050(*(int *)(iStack_350 + 0xd0) + 0xf0,iVar3 + 0x30);
        FUN_01007050(*(int *)(iStack_350 + 0xd0) + 0xf0,iVar3 + 0x40);
        local_348 = iStack_318;
        uStack_344 = uStack_314;
        uStack_340 = uStack_310;
        uStack_338 = uStack_308;
        uStack_334 = uStack_304;
        uStack_330 = uStack_300;
        uStack_328 = uStack_2f8;
        uStack_324 = uStack_2f4;
        uStack_320 = uStack_2f0;
        FUN_00f95f40(&local_348,&uStack_338,param_2,0);
        FUN_00f95f40(&uStack_338,&uStack_328,param_2,0);
        FUN_00f95f40(&uStack_328,&local_348,param_2,0);
      }
    }
    FUN_00a6cbc0(local_2dc,param_2);
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


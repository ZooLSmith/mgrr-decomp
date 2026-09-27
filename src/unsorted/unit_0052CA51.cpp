// src/unsorted/unit_0052CA51.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0052CA51..0052DF20, 10 functions

#include "types.h"

// 0052CA51  FUN_0052ca51  size=974  [run]
undefined4 FUN_0052ca51(undefined1 param_1,undefined4 param_2,undefined4 param_3,ushort *param_4)

{
  uint *puVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint unaff_EBP;
  int iVar6;
  int unaff_EDI;
  
  puVar1 = *(uint **)(in_EAX + 8);
  iVar6 = 0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar6 = FUN_00a7c8a0();
  }
  puVar1[5] = *(uint *)(iVar6 + 0x4f0);
  puVar1[5] = *(uint *)(unaff_EDI + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  uVar4 = FUN_00ac8520(*param_4);
  (**(code **)(**(int **)(iVar6 + 0x754) + 0x10))(*param_4);
  (**(code **)(**(int **)(iVar6 + 0x754) + 0x20))(*param_4);
  uVar5 = (**(code **)(**(int **)(iVar6 + 0x754) + 0x18))(*param_4);
  puVar1[3] = unaff_EBP;
  puVar1[2] = uVar5;
  puVar1[1] = uVar4;
  *(undefined1 *)(puVar1 + 4) = param_1;
  *puVar1 = (uint)*param_4;
  *(undefined2 *)(puVar1 + 0x21) = 0x5300;
  switch(*param_4) {
  case 4:
    *puVar1 = 0x12e;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x5301;
    return unaff_EBX;
  case 6:
    *puVar1 = 0x130;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    return unaff_EBX;
  case 8:
    *puVar1 = 0x131;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    return unaff_EBX;
  case 10:
    *puVar1 = 0x132;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
    *(undefined2 *)(puVar1 + 0x21) = 0x5301;
    return unaff_EBX;
  case 0xc:
    *puVar1 = 0x130;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x800000;
    puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    return unaff_EBX;
  case 0xe:
    *puVar1 = 0x131;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    return unaff_EBX;
  case 0x10:
    *puVar1 = 0x133;
    return unaff_EBX;
  case 0x12:
    *puVar1 = 0x134;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    return unaff_EBX;
  case 0x14:
    *puVar1 = 0x135;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x24] = puVar1[0x24] | 0x800000;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
    *(undefined2 *)(puVar1 + 0x21) = 0x5301;
    return unaff_EBX;
  case 0x16:
    *puVar1 = 0x136;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
    *(undefined2 *)(puVar1 + 0x21) = 0x5301;
    return unaff_EBX;
  case 0x18:
    *puVar1 = 0x137;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    *(undefined2 *)(puVar1 + 0x21) = 0x5301;
    return unaff_EBX;
  case 0x1a:
    *puVar1 = 0x138;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    return unaff_EBX;
  case 0x1c:
    *puVar1 = 0x139;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    puVar1[0x24] = puVar1[0x24] | 0x1000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x5301;
    return unaff_EBX;
  case 0x1e:
    *puVar1 = 0x13a;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    puVar1[0x24] = puVar1[0x24] | 0x100000;
    *(undefined2 *)(puVar1 + 0x21) = 0x5301;
    return unaff_EBX;
  case 0x20:
    *puVar1 = 0x13b;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x23] = puVar1[0x23] & 0xbfffffff;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    puVar1[0x24] = puVar1[0x24] | 0x1000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x5301;
    return unaff_EBX;
  case 0x22:
    *puVar1 = 0x13c;
    puVar1[0x24] = puVar1[0x24] | 0x1000000;
  }
  return unaff_EBX;
}

// 0052CF10  FUN_0052cf10  size=653  [run]
void __fastcall FUN_0052cf10(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  float unaff_ESI;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  short local_28 [18];
  
  local_28[0] = 0x69;
  local_28[1] = 0x6a;
  local_28[2] = 0x6b;
  switch(param_1[0x187]) {
  case 0:
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0x8000000;
    uVar9 = 0x3f800000;
    uVar8 = 0x3e088889;
    uVar7 = 0;
    uVar5 = FUN_00a81330(0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa47a0(0x68,uVar5,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    sVar4 = FUN_00dde2d0(0,2);
    param_1[0x250] = sVar4 + 3;
    param_1[0x376] = 0;
    param_1[0x377] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0x8000000;
    uVar9 = 0x3f800000;
    uVar8 = 0x3d888889;
    uVar7 = 0;
    uVar5 = FUN_00a81330(0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    sVar4 = FUN_00dde2d0(0,2);
    FUN_00aa47a0((int)local_28[sVar4],uVar5,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x250] = param_1[0x250] + -1;
    param_1[0x376] = 0;
    param_1[0x377] = 0;
    iVar6 = FUN_00a81330();
    if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
      FUN_0051a610();
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00a8caf0(3,0,0,0);
    }
  }
  iVar6 = FUN_00a8c760(0);
  if (iVar6 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
    iVar6 = FUN_00a12210(0xf00);
    if (iVar6 != 0) {
      uStack_30 = 0;
      uStack_2c = 0;
      local_28[0] = 0;
      local_28[1] = 0;
      D3DXVec3TransformNormal(&uStack_30,&uStack_30,iVar6 + 0x10);
      fVar1 = *(float *)(iVar6 + 0x48);
      fVar2 = *(float *)(param_1[0x2a1] + 0x48);
      pcVar3 = *(code **)(*param_1 + 0x308);
      param_1[0x14] =
           (int)((float)param_1[0x14] +
                (*(float *)(param_1[0x2a1] + 0x40) - (*(float *)(iVar6 + 0x40) + unaff_ESI)) * 0.1);
      param_1[0x16] = (int)((fVar2 - (fVar1 + fStack_34)) * 0.1 + (float)param_1[0x16]);
      (*pcVar3)(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    }
  }
  return;
}

// 0052D1B0  FUN_0052d1b0  size=653  [run]
void __fastcall FUN_0052d1b0(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  float unaff_ESI;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  short local_28 [18];
  
  local_28[0] = 0x77;
  local_28[1] = 0x78;
  local_28[2] = 0x79;
  switch(param_1[0x187]) {
  case 0:
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0x8000000;
    uVar9 = 0x3f800000;
    uVar8 = 0x3e088889;
    uVar7 = 0;
    uVar5 = FUN_00a81330(0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa47a0(0x76,uVar5,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    sVar4 = FUN_00dde2d0(0,2);
    param_1[0x250] = sVar4 + 3;
    param_1[0x376] = 0;
    param_1[0x377] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0x8000000;
    uVar9 = 0x3f800000;
    uVar8 = 0x3d888889;
    uVar7 = 0;
    uVar5 = FUN_00a81330(0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    sVar4 = FUN_00dde2d0(0,2);
    FUN_00aa47a0((int)local_28[sVar4],uVar5,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x250] = param_1[0x250] + -1;
    param_1[0x376] = 0;
    param_1[0x377] = 0;
    iVar6 = FUN_00a81330();
    if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
      FUN_0051a660();
    }
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00a8caf0(6,0,0,0);
    }
  }
  iVar6 = FUN_00a8c760(0);
  if (iVar6 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
    iVar6 = FUN_00a12210(0xf00);
    if (iVar6 != 0) {
      uStack_30 = 0;
      uStack_2c = 0;
      local_28[0] = 0;
      local_28[1] = 0;
      D3DXVec3TransformNormal(&uStack_30,&uStack_30,iVar6 + 0x10);
      fVar1 = *(float *)(iVar6 + 0x48);
      fVar2 = *(float *)(param_1[0x2a1] + 0x48);
      pcVar3 = *(code **)(*param_1 + 0x308);
      param_1[0x14] =
           (int)((float)param_1[0x14] +
                (*(float *)(param_1[0x2a1] + 0x40) - (*(float *)(iVar6 + 0x40) + unaff_ESI)) * 0.1);
      param_1[0x16] = (int)((fVar2 - (fVar1 + fStack_34)) * 0.1 + (float)param_1[0x16]);
      (*pcVar3)(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    }
  }
  return;
}

// 0052D450  FUN_0052d450  size=540  [run]
void __fastcall FUN_0052d450(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  switch(param_1[0x187]) {
  case 0:
    uVar9 = 0x3f800000;
    uVar8 = 0xbf800000;
    uVar7 = 0x8000000;
    uVar6 = 0x3f800000;
    uVar5 = 0;
    uVar4 = 0;
    uVar2 = FUN_00a81330(0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa47a0(0xc,uVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x248] = 0;
    param_1[0x250] = 0;
    param_1[0x24] = 0;
    param_1[0x376] = 0;
    param_1[0x377] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3f0efa35,0);
    break;
  case 2:
    uVar9 = 0x3f800000;
    uVar8 = 0xbf800000;
    uVar7 = 0;
    uVar6 = 0x3f800000;
    uVar5 = 0x3d088889;
    uVar4 = 0;
    uVar2 = FUN_00a81330(0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00aa47a0(0xd,uVar2,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x250] = 0;
    param_1[0x376] = 0;
    param_1[0x377] = 0;
  case 3:
    param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    if (!NAN(fVar1) && 300.0 < fVar1 != (fVar1 == 300.0)) {
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a7c8a0();
      }
      FUN_0052ba80(1,0,0,param_1[0x13c]);
    }
  }
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e8efa35,0);
  fVar1 = (float)param_1[0x2a8];
  if (!NAN(fVar1) && 1.0471976 < fVar1 != (fVar1 == 1.0471976)) {
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3f0efa35,0);
  }
  return;
}

// 0052D680  FUN_0052d680  size=576  [run]
void __fastcall FUN_0052d680(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  
  if (param_1[0x187] == 0) {
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar9 = 0x8000000;
    uVar8 = 0x3f800000;
    uVar7 = 0x3e088889;
    uVar6 = 0;
    uVar4 = FUN_00a81330(0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa47a0(0x42,uVar4,uVar6,uVar7,uVar8,uVar9,uVar11,uVar12);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x250] = 0;
    param_1[0x376] = 0;
    param_1[0x377] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0052d7c9;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      FUN_00a7c8a0();
    }
    FUN_0052ba80(1,0,0,param_1[0x13c]);
  }
  iVar5 = FUN_00a8c760(0xf);
  if ((iVar5 != 0) ||
     (((param_1[0x376] == 0 && (param_1[0x377] == 0)) && (iVar5 = FUN_00a8c760(0x30), iVar5 != 0))))
  {
    (**(code **)(*param_1 + 0x34c))();
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      FUN_00a7c8a0();
    }
    FUN_0052ba80(1,0,0,param_1[0x13c]);
  }
LAB_0052d7c9:
  iVar5 = FUN_00a8c760(0);
  if (iVar5 != 0) {
    fVar13 = 0.0;
    fVar10 = 0.00017453292;
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35);
    iVar5 = FUN_00a12210(0xf00);
    if (iVar5 != 0) {
      D3DXVec3TransformNormal(&stack0xffffffd0,&stack0xffffffd0,iVar5 + 0x10);
      fVar1 = *(float *)(iVar5 + 0x48);
      fVar2 = *(float *)(param_1[0x2a1] + 0x48);
      pcVar3 = *(code **)(*param_1 + 0x308);
      param_1[0x14] =
           (int)((float)param_1[0x14] +
                (*(float *)(param_1[0x2a1] + 0x40) - (*(float *)(iVar5 + 0x40) + fVar10)) * 0.1);
      param_1[0x16] = (int)((fVar2 - (fVar1 + fVar13)) * 0.1 + (float)param_1[0x16]);
      (*pcVar3)(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    }
  }
  return;
}

// 0052D8C0  FUN_0052d8c0  size=568  [run]
void __fastcall FUN_0052d8c0(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  
  if (param_1[0x187] == 0) {
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar9 = 0x8000000;
    uVar8 = 0x3f800000;
    uVar7 = 0x3e088889;
    uVar6 = 0;
    uVar4 = FUN_00a81330(0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00aa47a0(0x46,uVar4,uVar6,uVar7,uVar8,uVar9,uVar11,uVar12);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x250] = 0;
    param_1[0x376] = 0;
    param_1[0x377] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0052da01;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x248] = 0;
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      FUN_00a7c8a0();
    }
    FUN_0052ba80(1,0,0,param_1[0x13c]);
  }
  iVar5 = FUN_00a8c760(0xf);
  if ((iVar5 != 0) || (iVar5 = FUN_00a8c760(0x30), iVar5 != 0)) {
    (**(code **)(*param_1 + 0x34c))();
    iVar5 = FUN_00a81330();
    if (iVar5 != 0) {
      FUN_00a7c8a0();
    }
    FUN_0052ba80(1,0,0,param_1[0x13c]);
  }
LAB_0052da01:
  iVar5 = FUN_00a8c760(0);
  if (iVar5 != 0) {
    fVar13 = 0.0;
    fVar10 = 0.00017453292;
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35);
    iVar5 = FUN_00a12210(0xf00);
    if (iVar5 != 0) {
      D3DXVec3TransformNormal(&stack0xffffffd0,&stack0xffffffd0,iVar5 + 0x10);
      fVar1 = *(float *)(iVar5 + 0x48);
      fVar2 = *(float *)(param_1[0x2a1] + 0x48);
      pcVar3 = *(code **)(*param_1 + 0x308);
      param_1[0x14] =
           (int)((float)param_1[0x14] +
                (*(float *)(param_1[0x2a1] + 0x40) - (*(float *)(iVar5 + 0x40) + fVar10)) * 0.1);
      param_1[0x16] = (int)((fVar2 - (fVar1 + fVar13)) * 0.1 + (float)param_1[0x16]);
      (*pcVar3)(0x3e99999a,0x393702d3,0x3db2b8c2,0);
    }
  }
  return;
}

// 0052DB00  FUN_0052db00  size=858  [run]
void __fastcall FUN_0052db00(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20 [7];
  
  iVar2 = *(int *)(param_1 + 0x61c);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
    FUN_008e3c10();
    FUN_00a94bc0(0,0x40000000);
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    *(undefined4 *)(param_1 + 0x61c) = 3;
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_00a7c8a0();
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xdcc) != 0) {
      FUN_0052abb0(1,0x18);
      FUN_0052b240();
    }
    if (*(int *)(param_1 + 0xdd0) != 0) {
      FUN_0052ac70(1,0x18);
      FUN_0052b360();
    }
    if (*(int *)(param_1 + 0xdc8) == 0) {
      return;
    }
    FUN_0052aea0(1,0x18);
    FUN_0052b480();
    return;
  }
  *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
  if (*(int *)(param_1 + 0x940) == 2) {
    iVar2 = *(int *)(param_1 + 0xa84);
    local_30 = *(float *)(param_1 + 0x40) - *(float *)(iVar2 + 0x40);
    local_2c = *(float *)(param_1 + 0x44) - *(float *)(iVar2 + 0x44);
    local_28 = *(float *)(param_1 + 0x48) - *(float *)(iVar2 + 0x48);
    local_24 = *(float *)(param_1 + 0x4c) - *(float *)(iVar2 + 0x4c);
    fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
    }
    fVar3 = (float10)FUN_00dde300(0x3f000000,0x3f800000);
    local_40 = (float)(fVar3 * (float10)local_30);
    fVar3 = (float10)FUN_00dde300(0,0x3e99999a);
    local_3c = (float)(fVar3 + (float10)0.3);
    fVar3 = (float10)FUN_00dde300(0x3f000000,0x3f800000);
    local_38 = (float)(fVar3 * (float10)local_28);
    fVar3 = (float10)FUN_00dde300(0xc2700000,0x42700000);
    local_20[0] = (float)fVar3;
    local_20[1] = 10.0;
    fVar3 = (float10)FUN_00dde300(0xc2700000,0x42700000);
    local_20[2] = (float)fVar3;
    if (((*(int *)(param_1 + 0xdcc) != 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_0052b620(&local_40,local_20);
    }
    if (((*(int *)(param_1 + 0xdd0) != 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_0052b790(&local_40,local_20);
    }
    if (*(int *)(param_1 + 0xdc8) != 0) {
      local_40 = local_40 * 2.0;
      local_3c = local_3c * 2.0;
      local_38 = local_38 * 2.0;
      local_34 = local_34 * 2.0;
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        FUN_0052b9c0(&local_40,local_20);
      }
    }
  }
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (fVar1 < 0.0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 0052DE60  FUN_0052de60  size=90  [run]
void __fastcall FUN_0052de60(int param_1)

{
  int iVar1;
  
  switchD_0080dbae::default();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  FUN_0052ba80(1,0,0,*(undefined4 *)(param_1 + 0x4f0));
  FUN_00a8caf0(2,0,0,0);
  FUN_00a8d280();
  FUN_008e6d00();
  return;
}

// 0052DEC0  FUN_0052dec0  size=90  [run]
void __fastcall FUN_0052dec0(int param_1)

{
  int iVar1;
  
  switchD_0080dbae::default();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  FUN_0052ba80(1,0,0,*(undefined4 *)(param_1 + 0x4f0));
  FUN_00a8caf0(5,0,0,0);
  FUN_00a8d280();
  FUN_008e6d00();
  return;
}

// 0052DF20  FUN_0052df20  size=85  [run]
void __fastcall FUN_0052df20(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  FUN_0052ba80(1,0,0,*(undefined4 *)(param_1 + 0x4f0));
  FUN_00a8caf0(8,0,0,0);
  FUN_00a8d280();
  FUN_008e6d00();
  return;
}

